// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryWidget.h"
#include "Components/Button.h"
#include "Components/ListView.h"
#include "InventoryItemData.h"
#include "PlayerCharacter.h"

//void UInventoryWidget::NativePreConstruct()
//{
//	Super::NativePreConstruct();
//	//m_CloseButton = Cast<UButton>(GetWidgetFromName(TEXT("InventoryCloseButton")));
//	//m_ListView = Cast<UListView>(GetWidgetFromName(TEXT("InventoryListView")));
//
//	//m_ListView->OnItemClicked().AddUObject(this, &UInventoryWidget::ItemClick);
//
//}

void UInventoryWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	InventoryListView->OnItemDoubleClicked().AddUObject(this, &UInventoryWidget::OnItemDoubleClicked);
	InventoryCloseButton->OnClicked.AddDynamic(this, &UInventoryWidget::CloseButtonClick);
}

void UInventoryWidget::NativeConstruct()
{
	Super::NativeConstruct();
	InitItemList();
}

//void UInventoryWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
//{
//	Super::NativeTick(MyGeometry, InDeltaTime);
//}

void UInventoryWidget::InitItemList()
{
	FString itemName;
	FString iconPath;
	EWeaponType weaponType = EWeaponType::None;

	for (int32 i = 0; i < 10; i++)
	{
		UInventoryItemData* pData = NewObject<UInventoryItemData>(this,	UInventoryItemData::StaticClass());

		switch (FMath::RandRange(0, 1))
		{
		case 0:
			pData->SetItemName(TEXT("LongSword"));
			pData->SetIconTexture(TEXT("Texture2D'/Game/UI/LongSword.LongSword'"));
			pData->SetWeaponType(EWeaponType::Sword);
			break;

		case 1:
			pData->SetItemName(TEXT("LongBow"));
			pData->SetIconTexture(TEXT("Texture2D'/Game/UI/bow.bow'"));
			pData->SetWeaponType(EWeaponType::Bow);
			break;
		}

		InventoryListView->AddItem(pData);
	}

}

//void UInventoryWidget::ItemClick(UObject* pObj)
//{
//}

void UInventoryWidget::CloseButtonClick()
{
	//SetVisibility(ESlateVisibility::Collapsed);
	this->RemoveFromViewport();
	FInputModeGameOnly InputMode;
	GetWorld()->GetFirstPlayerController()->SetInputMode(InputMode);
}

void UInventoryWidget::OnItemDoubleClicked(UObject* pObj)
{
	UInventoryItemData* pData = Cast<UInventoryItemData>(pObj);

	if (pData)
	{
		APlayerCharacter* pPlayer = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());

		if (pPlayer)
		{
			pPlayer->EquipWeapon(pData->GetWeaponType());
		}

	}
}
