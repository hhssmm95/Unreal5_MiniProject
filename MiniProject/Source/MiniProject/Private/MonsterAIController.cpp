// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "MonsterCharacter.h"


AMonsterAIController::AMonsterAIController()
{

}

void AMonsterAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	UBlackboardComponent* BlackboardComp = Blackboard;
	if (UseBlackboard(AIBlackBoard, BlackboardComp))
	{
		AMonsterCharacter* Monster = Cast<AMonsterCharacter>(InPawn);
		Blackboard->SetValueAsFloat(TEXT("DetectRange"), Monster->GetDetectRange());

		if (!RunBehaviorTree(AITree))
		{
			UE_LOG(LogTemp, Warning, TEXT("AITree Run Error"));
		}
	}
}

void AMonsterAIController::OnUnPossess()
{
	Super::OnUnPossess();
}
