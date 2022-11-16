// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"


UCLASS()
class MINIPROJECT_API ABullet : public AActor
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UProjectileMovementComponent* Movement;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UParticleSystemComponent* BulletParticle;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UCapsuleComponent* BulletBody;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BulletInfo")
		UParticleSystem* HitParticle;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BulletInfo")
		float BulletSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BulletInfo")
		float BulletDamage;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BulletInfo")
		APawn* ShooterPawn;

	/*UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BulletInfo")
		bool bIsPlayerBullet;*/

public:
	void SetShooter(APawn* Shooter)
	{
		ShooterPawn = Shooter;
	}
	void SetBulletDamage(float dmg)
	{
		BulletDamage = dmg;
	}

public:

	UFUNCTION()
	void OnBulletHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
			FVector NormalImpulse, const FHitResult& Hit);


public:	
	// Sets default values for this actor's properties
	ABullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
