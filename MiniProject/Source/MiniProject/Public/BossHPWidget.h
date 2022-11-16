// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "Blueprint/UserWidget.h"
#include "BossHPWidget.generated.h"

/**
 * 
 */
UCLASS()
class MINIPROJECT_API UBossHPWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UProgressBar* ProgressHPBar;


protected:
	virtual void NativeOnInitialized() override;

public:
	UFUNCTION(BlueprintCallable)
	void SetHPAmount(float max, float curr);
};
