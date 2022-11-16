// Fill out your copyright notice in the Description page of Project Settings.


#include "DetectService.h"
#include "MonsterCharacter.h"
#include "MonsterAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "PlayerCharacter.h"

UDetectService::UDetectService()
{
	NodeName = TEXT("Detect");
	Interval = 0.5f;
}

void UDetectService::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AMonsterAIController* Controller = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());

	if (!IsValid(Controller))
		return;

	AMonsterCharacter* Monster = Cast<AMonsterCharacter>(Controller->GetPawn());

	if (!IsValid(Monster))
		return;

	float Range = Controller->GetBlackboardComponent()->GetValueAsFloat(TEXT("DetectRange"));

	FHitResult	SweepResult;
	FCollisionQueryParams	params(NAME_None, false, Monster);

	bool bSweep = GetWorld()->SweepSingleByChannel(SweepResult, Monster->GetActorLocation(),
		Monster->GetActorLocation(), FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel4,
		FCollisionShape::MakeSphere(Range),
		params);

#if ENABLE_DRAW_DEBUG
	FColor	DrawColor = bSweep ? FColor::Red : FColor::Green;

	DrawDebugSphere(GetWorld(), Monster->GetActorLocation(), Range, 20,
		DrawColor, false, Interval);
#endif // ENABLE_DRAW_DEBUGEDITOR

	if (bSweep)
	{
		Controller->GetBlackboardComponent()->SetValueAsObject(TEXT("Target"), SweepResult.GetActor());
		Monster->SetTargetLocation(SweepResult.GetActor()->GetActorLocation());
	}

	else
	{
		Controller->GetBlackboardComponent()->SetValueAsObject(TEXT("Target"), nullptr);

	}
}
