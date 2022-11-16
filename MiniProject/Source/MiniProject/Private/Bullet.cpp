// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BulletBody = CreateDefaultSubobject<UCapsuleComponent>(TEXT("BulletBody"));
	Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("BulletMovement"));
	BulletParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BulletParticle"));


	SetRootComponent(BulletBody);
	BulletParticle->SetupAttachment(BulletBody);

	Movement->InitialSpeed = 100.f;
	BulletDamage = 1;

}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	BulletBody->OnComponentHit.AddDynamic(this, &ABullet::OnBulletHit);

}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABullet::OnBulletHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Log, TEXT("Monster Bullet Hit"));
	if (IsValid(ShooterPawn))
	{
		UGameplayStatics::ApplyPointDamage(OtherActor, BulletDamage, NormalImpulse, Hit, ShooterPawn->GetController(), ShooterPawn, NULL);
	}
	/*if (IsValid(HitParticle))
	{
		
	}*/

	Destroy();
}


