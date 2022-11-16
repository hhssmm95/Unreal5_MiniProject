// Copyright Epic Games, Inc. All Rights Reserved.


#include "MiniProjectGameModeBase.h"

AMiniProjectGameModeBase::AMiniProjectGameModeBase()
{
	//PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = APlayerCharacter::StaticClass();


}

void AMiniProjectGameModeBase::BeginPlay()
{
}

