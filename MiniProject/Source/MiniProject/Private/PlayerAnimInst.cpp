// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimInst.h"
#include "PlayerCharacter.h"

//UPlayerAnimInst::UPlayerAnimInst()
//{
//}

void UPlayerAnimInst::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	m_Speed = 0.f;
	m_Direction = 0.f;
	AnimType = EPlayerAnimType::Idle;
	MoveType = EPlayerMoveType::Walk;
}

void UPlayerAnimInst::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	Player = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
	if (!Player)
		UE_LOG(LogTemp, Warning, TEXT("PlayerAnimInst::NativeBeginPlayer player load failed"));

}

void UPlayerAnimInst::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if (IsValid(Player))
	{
		auto curr_velocity = Player->GetVelocity();
		m_Speed = curr_velocity.Length();
		m_Direction = CalculateDirection(curr_velocity, Player->GetActorRotation());
		
	}
}

//void UPlayerAnimInst::AnimNotify_OnPlayerAttackStart()
//{
//	if (IsValid(Player))
//	{
//		Player->SetAttackCooltime(true);
//		//UE_LOG(LogTemp, Log, TEXT("AnimStart, CoolTime :: %s"), Player->GetAttackCooltime() ? TEXT("true") : TEXT("false"));
//	}
//}

void UPlayerAnimInst::AnimNotify_OnPlayerAttackStrike()
{
	if (IsValid(Player))
	{
		Player->SwordAttack();
	}
}

void UPlayerAnimInst::AnimNotify_OnPlayerAttackShot()
{
	if (IsValid(Player))
	{
		Player->BowAttack();
	}
}

void UPlayerAnimInst::AnimNotify_OnPlayerAttackEnd()
{
	if (IsValid(Player))
	{
		Player->SetAttackCooltime(false);
		AnimType = EPlayerAnimType::Idle;
		//UE_LOG(LogTemp, Log, TEXT("AnimEnd, CoolTime :: %s"), Player->GetAttackCooltime() ? TEXT("true") : TEXT("false"));
	}
}
