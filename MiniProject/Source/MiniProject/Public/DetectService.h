// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "BehaviorTree/BTService.h"
#include "DetectService.generated.h"

/**
 * 
 */
UCLASS()
class MINIPROJECT_API UDetectService : public UBTService
{
	GENERATED_BODY()

public:
	UDetectService();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
