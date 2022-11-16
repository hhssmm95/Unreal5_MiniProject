// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "GameFramework/Character.h"
#include "MonsterCharacter.generated.h"

UCLASS()
class MINIPROJECT_API AMonsterCharacter : public ACharacter
{
	GENERATED_BODY()

protected:
	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = true))
		class  UMonsterAnim* MonsterAnim;*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MonsterData", meta = (AllowPrivateAccess = "true"))
		float MaxHP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MonsterData", meta = (AllowPrivateAccess = "true"))
		float HP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MonsterData", meta = (AllowPrivateAccess = "true"))
		float AttackDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MonsterData", meta = (AllowPrivateAccess = "true"))
		float DetectRange;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool bIsDead;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UMonsterAnimInst* MonsterAnim;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		TSubclassOf<class ABullet> BulletClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FVector TargetLocation;

	bool bIsInAttackCooltime;
public:
	void SetTargetLocation(FVector Location)
	{
		TargetLocation = Location;
	}

	bool GetAttackCooltime()
	{
		return bIsInAttackCooltime;
	}

	void SetAttackCooltime(bool flag)
	{
		bIsInAttackCooltime = flag;
	}

	float GetDetectRange()
	{
		return DetectRange;
	}

public:
	// Sets default values for this pawn's properties
	AMonsterCharacter();
	
	//void Detect();
	void TryAttack();
	void RangedAttack();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);

};
