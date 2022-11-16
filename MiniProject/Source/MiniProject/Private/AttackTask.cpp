// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackTask.h"
#include "MonsterCharacter.h"
#include "MonsterAIController.h"

UAttackTask::UAttackTask()
{
	//bNotifyTick = true;
	//bIsAttacking = false;
}

EBTNodeResult::Type UAttackTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);

	auto Monster = Cast<AMonsterCharacter>(OwnerComp.GetAIOwner()->GetPawn());
	if (!IsValid(Monster))
		return EBTNodeResult::Failed;
	Monster->TryAttack();
	//IsAttacking = true;

	return EBTNodeResult::Succeeded;
}

//void UAttackTask::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSecondes)
//{
//	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
//	if (!IsAttacking)
//	{
//		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
//	}
//}
