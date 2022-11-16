// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "Animation/AnimInstance.h"
#include "MonsterAnimInst.generated.h"

UENUM(BlueprintType)
enum class EMonsterAnimType : uint8
{
	Idle,
	Attack,
	Death
};

UCLASS()
class MINIPROJECT_API UMonsterAnimInst : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	EMonsterAnimType AnimType;

	UPROPERTY(EditDefaultsOnly)
	class AMonsterCharacter* Monster;



public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

public:
	void SetMonsterAnimType(EMonsterAnimType type)
	{
		AnimType = type;
	}

	void SetMonsterCharacter(class AMonsterCharacter* Monster_)
	{
		Monster = Monster_;
	}

public:
	UFUNCTION(BlueprintCallable)
	void AnimNotify_OnMonsterAttackShot();
	UFUNCTION(BlueprintCallable)
	void AnimNotify_OnMonsterAttackEnd();
	UFUNCTION(BlueprintCallable)
	void AnimNotify_OnMonsterDeathEnd();
	
};
