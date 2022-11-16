// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterAnimInst.h"
#include "MonsterCharacter.h"

void UMonsterAnimInst::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	AnimType = EMonsterAnimType::Idle;
}

void UMonsterAnimInst::NativeBeginPlay()
{
	Super::NativeBeginPlay();
}

void UMonsterAnimInst::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
}

void UMonsterAnimInst::AnimNotify_OnMonsterAttackShot()
{
	if (IsValid(Monster))
	{
		Monster->RangedAttack();
	}
}

void UMonsterAnimInst::AnimNotify_OnMonsterAttackEnd()
{
	AnimType = EMonsterAnimType::Idle;
	if (IsValid(Monster))
	{
		Monster->SetAttackCooltime(false);
	}
}

void UMonsterAnimInst::AnimNotify_OnMonsterDeathEnd()
{
	if (IsValid(Monster))
	{
		Monster->Destroy();
	}
}
