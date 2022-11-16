// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterCharacter.h"
#include "MonsterAnimInst.h"
#include "PlayerCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "Bullet.h"

// Sets default values
AMonsterCharacter::AMonsterCharacter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AMonsterCharacter::TryAttack()
{
	if (!bIsDead && !bIsInAttackCooltime)
	{
		bIsInAttackCooltime = true;
		MonsterAnim->SetMonsterAnimType(EMonsterAnimType::Attack);
	}
}

void AMonsterCharacter::RangedAttack()
{
	FVector vMuzzlePos = GetMesh()->GetSocketLocation(TEXT("RangedAttackMuzzle")) + GetActorForwardVector();
	//FRotator vMuzzleRot = GetActorRotation();

	/*AEffectNormal* Muzzle = GetWorld()->SpawnActor<AEffectNormal>(m_LongAttackMuzzle, vMuzzlePos,
		vMuzzleRot);*/

	//UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_LongAttackSound, GetActorLocation());

	FRotator BulletRot = UKismetMathLibrary::FindLookAtRotation(vMuzzlePos + GetActorForwardVector() * 80.f,
		FVector(TargetLocation.X, TargetLocation.Y, TargetLocation.Z + 50.f));

	ABullet* Bullet = GetWorld()->SpawnActor<ABullet>(BulletClass, vMuzzlePos + GetActorForwardVector() * 80.f,
		BulletRot);
	Bullet->SetShooter(this);
	Bullet->SetBulletDamage(AttackDamage);
}

//void AMonsterCharacter::Detect()
//{
//	if (bIsDead)
//		return;
//
//	FCollisionQueryParams	params(NAME_None, false, this);
//
//	//FVector AttackLocation = GetActorLocation() + GetActorForwardVector() * CloseAttackDistance;
//
//	FHitResult	SweepResult;
//	bool bSweep = GetWorld()->SweepSingleByChannel(SweepResult, GetActorLocation() - GetActorForwardVector() * DetectRange,
//		GetActorLocation() + GetActorForwardVector() * DetectRange, GetActorForwardVector().ToOrientationQuat(),
//		ECollisionChannel::ECC_GameTraceChannel4,
//		FCollisionShape::MakeBox(FVector(DetectRange, DetectRange, DetectRange)),
//		params);
//
//#if ENABLE_DRAW_DEBUG
//	FColor	DrawColor = bSweep ? FColor::Red : FColor::Green;
//
//	DrawDebugBox(GetWorld(), GetActorLocation(), FVector(DetectRange, DetectRange, DetectRange), GetActorForwardVector().ToOrientationQuat(),
//		DrawColor, false, 1.f);
//#endif // ENABLE_DRAW_DEBUGEDITOR
//
//	if (bSweep)
//	{
//		Target = Cast<APlayerCharacter>(SweepResult.GetActor());
//		if (IsValid(Target))
//		{
//			//TODO: 원거리공격 발사, 회전
//		}
//
//	}
//}

// Called when the game starts or when spawned
void AMonsterCharacter::BeginPlay()
{
	Super::BeginPlay();
	MonsterAnim = Cast<UMonsterAnimInst>(GetMesh()->GetAnimInstance());
	MonsterAnim->SetMonsterCharacter(this);
	
}

// Called every frame
void AMonsterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMonsterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float AMonsterCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float Damage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	HP -= Damage;
	if (HP <= 0)
	{
		MonsterAnim->SetMonsterAnimType(EMonsterAnimType::Death);
		bIsDead = true;
		HP = 0.f;
	}
	return Damage;
}

