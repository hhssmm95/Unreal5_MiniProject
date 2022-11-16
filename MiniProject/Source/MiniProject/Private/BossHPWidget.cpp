// Fill out your copyright notice in the Description page of Project Settings.


#include "BossHPWidget.h"
#include "Components/ProgressBar.h"

void UBossHPWidget::NativeOnInitialized()
{
}

void UBossHPWidget::SetHPAmount(float max, float curr)
{
	ProgressHPBar->SetPercent(curr / max);
}
