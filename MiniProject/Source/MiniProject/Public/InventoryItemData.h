// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "UObject/NoExportTypes.h"
#include "InventoryItemData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class MINIPROJECT_API UInventoryItemData : public UObject
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		FString m_ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UTexture2D* m_IconTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		EWeaponType m_eWeaponType;

public:
	FString GetItemName()	const
	{
		return m_ItemName;
	}

	EWeaponType GetWeaponType() const
	{
		return m_eWeaponType;
	}

	UTexture2D* GetIconTexture()	const
	{
		return m_IconTexture;
	}

public:
	void SetData(const FString& ItemName, const FString& Path, EWeaponType type)
	{
		m_ItemName = ItemName;
		m_IconTexture = LoadObject<UTexture2D>(nullptr, *Path);
		m_eWeaponType = type;
	}
	void SetData(const FString& ItemName, UTexture2D* pTex, EWeaponType type)
	{
		m_ItemName = ItemName;
		m_IconTexture = pTex;
		m_eWeaponType = type;
	}
	void SetItemName(const FString& ItemName)
	{
		m_ItemName = ItemName;
	}

	void SetWeaponType(EWeaponType type)
	{
		m_eWeaponType = type;
	}

	void SetIconTexture(const FString& Path)
	{
		m_IconTexture = LoadObject<UTexture2D>(nullptr, *Path);
	}
	void SetIconTexture(UTexture2D* pTex)
	{
		m_IconTexture = pTex;
	}


};
