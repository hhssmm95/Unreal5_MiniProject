// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHUDWidget.h"
#include "Components/ProgressBar.h"
#include "Components/EditableTextBox.h"
#include "Components/Border.h"
#include "PlayerCharacter.h"

void UPlayerHUDWidget::NativeOnInitialized()
{
	NicknameInputText->OnTextCommitted.AddDynamic(this, &UPlayerHUDWidget::SetNickname);
}

void UPlayerHUDWidget::SetHPAmount(float max, float curr)
{
	ProgressHPBar->SetPercent(curr / max);
}

void UPlayerHUDWidget::SetNickname(const FText& Text, ETextCommit::Type CommitMethod)
{
	auto Player = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (IsValid(Player))
	{
		Player->SetNicknameText(Text);
	}

	NicknameInputBorder->SetVisibility(ESlateVisibility::Collapsed);
	FInputModeGameOnly InputMode;
	GetWorld()->GetFirstPlayerController()->SetInputMode(InputMode);

}
