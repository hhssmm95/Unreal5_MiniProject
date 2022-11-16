// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "Components/ActorComponent.h"
#include "PlayerInfoComponent.generated.h"

enum class EPlayerStat : uint8
{
	Nickname,
	MaxHP,
	HP,
	MaxSP,
	SP,
	Gold,
	EXP
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MINIPROJECT_API UPlayerInfoComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		FString Nickname;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float MaxHP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float HP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float MaxSP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float SP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = true))
		float Damage;



public:
	
	void SetNickname(FString name)
	{
		Nickname = name;
	}
	void SetMaxHP(float value)
	{
		MaxHP = value;
	}
	void SetHP(float value)
	{
		HP = value;
	}
	void SetMaxSP(float value)
	{
		MaxSP = value;
	}
	void SetSP(float value)
	{
		SP = value;
	}
	void SetDamage(float value)
	{
		Damage = value;
	}

	FString GetNickname()
	{
		return Nickname;
	}

	float GetMaxHP()
	{
		return MaxHP;
	}

	float GetHP()
	{
		return HP;
	}

	float GetMaxSP()
	{
		return MaxSP;
	}

	float GetSP()
	{
		return SP;
	}

	float GetDamage()
	{
		return Damage;
	}

	
public:	
	// Sets default values for this component's properties
	UPlayerInfoComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
