// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PlayerCharacter.h"
#include "GameFramework/GameModeBase.h"
#include "MiniProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MINIPROJECT_API AMiniProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMiniProjectGameModeBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
