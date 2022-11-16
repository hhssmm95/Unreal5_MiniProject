// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimInst.generated.h"

UENUM(BlueprintType)
enum class EPlayerAnimType : uint8
{
	Idle,
	Attack,
	RangedAttack,
	Death,
};

UENUM(BlueprintType)
enum class EPlayerMoveType : uint8
{
	Walk,
	Run
};

UCLASS()
class MINIPROJECT_API UPlayerAnimInst : public UAnimInstance
{
	GENERATED_BODY()

//public:
//	UPlayerAnimInst();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
		float m_Speed;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
		float m_Direction;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
		EPlayerAnimType AnimType;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
		EPlayerMoveType MoveType;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
		class APlayerCharacter* Player;


public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

public:
	void SetPlayerMoveType(EPlayerMoveType type)
	{
		MoveType = type;
	}
	void SetPlayerAnimType(EPlayerAnimType type)
	{
		AnimType = type;
	}

public:
	/*UFUNCTION(BlueprintCallable)
		void AnimNotify_OnPlayerAttackStart();*/

	UFUNCTION(BlueprintCallable)
		void AnimNotify_OnPlayerAttackStrike();

	UFUNCTION(BlueprintCallable)
		void AnimNotify_OnPlayerAttackShot();

	UFUNCTION(BlueprintCallable)
		void AnimNotify_OnPlayerAttackEnd();
	
	
};
