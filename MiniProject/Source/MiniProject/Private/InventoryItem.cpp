// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryItem.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "InventoryItemData.h"




void UInventoryItem::NativeOnInitialized()
{
	m_Icon = Cast<UImage>(GetWidgetFromName(TEXT("ItemIcon")));
	m_ItemNameText = Cast<UTextBlock>(GetWidgetFromName(TEXT("ItemNameText")));
}

void UInventoryItem::NativeOnListItemObjectSet(UObject* ListItemObject)
{
	SetData(Cast<UInventoryItemData>(ListItemObject));
}



void UInventoryItem::SetData(class UInventoryItemData* pData)
{
	m_ItemNameText->SetText(FText::FromString(pData->GetItemName()));
	m_Icon->SetBrushFromTexture(pData->GetIconTexture());
}

