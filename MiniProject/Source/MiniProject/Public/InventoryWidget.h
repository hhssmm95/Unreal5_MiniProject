// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "Blueprint/UserWidget.h"
#include "InventoryWidget.generated.h"


UCLASS(abstract)
class MINIPROJECT_API UInventoryWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UButton* InventoryCloseButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UListView* InventoryListView;

	/*
	* TODO:
	* �н��� �����ͺ� ��ü�� �޵��� �ٲٱ�
	*/

	/*float MouseX;
	float MouseY;*/

protected:
	virtual void NativeOnInitialized() override;
	//virtual void NativePreConstruct();
	virtual void NativeConstruct() override;
	//virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);

protected:
	void InitItemList();
public:
	/*UFUNCTION(BlueprintCallable)
		void ItemClick(UObject* pObj);*/

	UFUNCTION(BlueprintCallable)
		void CloseButtonClick();

	UFUNCTION(BlueprintCallable)
		void OnItemDoubleClicked(UObject* pObj);

};
