// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnTask.h"
#include "MonsterCharacter.h"
#include "MonsterAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UTurnTask::UTurnTask()
{
	NodeName = TEXT("Turn");
}

EBTNodeResult::Type UTurnTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);

	auto Monster = Cast<AMonsterCharacter>(OwnerComp.GetAIOwner()->GetPawn());
	if (nullptr == Monster)
		return EBTNodeResult::Failed;

	auto Target = Cast<ACharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject("Target"));
	if (nullptr == Target)
		return EBTNodeResult::Failed;

	FVector LookVector = Target->GetActorLocation() - Monster->GetActorLocation();
	LookVector.Z = 0.0f;
	FRotator TargetRot = FRotationMatrix::MakeFromX(LookVector).Rotator();
	Monster->SetActorRotation(FMath::RInterpTo(Monster->GetActorRotation(), TargetRot, GetWorld()->GetDeltaSeconds(), 4.0f));

	return EBTNodeResult::Succeeded;
}