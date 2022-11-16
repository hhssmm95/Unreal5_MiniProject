// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class MINIPROJECT_API UPlayerHUDWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UProgressBar* ProgressHPBar;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UBorder* NicknameInputBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UEditableTextBox* NicknameInputText;

protected:
	virtual void NativeOnInitialized() override;

public:
	UFUNCTION(BlueprintCallable)
	void SetHPAmount(float max, float curr);


	UFUNCTION(BlueprintCallable)
	void SetNickname(const FText& Text, ETextCommit::Type CommitMethod);
};
