// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "BehaviorTree/BTTaskNode.h"
#include "AttackTask.generated.h"

/**
 * 
 */
UCLASS()
class MINIPROJECT_API UAttackTask : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UAttackTask();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
//
//protected:
//	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSecondes) override;
//
//private:
//	bool bIsAttacking = false;
//	
};
