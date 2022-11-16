// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TurnTask.generated.h"

/**
 * 
 */
UCLASS()
class MINIPROJECT_API UTurnTask : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UTurnTask();
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
	
};
