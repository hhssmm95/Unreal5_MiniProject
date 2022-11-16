// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "Blueprint/UserWidget.h"
#include "InventoryItem.generated.h"


UCLASS(abstract)
class MINIPROJECT_API UInventoryItem : public UUserWidget, public IUserObjectListEntry
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UImage* m_Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UTextBlock* m_ItemNameText;

protected:
	virtual void NativeOnInitialized() override;
	virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;
	//virtual void NativeOnListItemObjectSet() override;
	/*
	* TODO:
	* OnListItemObjectSet Override«œ±‚
	*/

public:
	UFUNCTION(BlueprintCallable)
		void SetData(class UInventoryItemData* pData);
};
