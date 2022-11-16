// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniProject/Public/InventoryItemData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItemData() {}
// Cross Module References
	MINIPROJECT_API UClass* Z_Construct_UClass_UInventoryItemData_NoRegister();
	MINIPROJECT_API UClass* Z_Construct_UClass_UInventoryItemData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MiniProject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MINIPROJECT_API UEnum* Z_Construct_UEnum_MiniProject_EWeaponType();
// End Cross Module References
	void UInventoryItemData::StaticRegisterNativesUInventoryItemData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryItemData);
	UClass* Z_Construct_UClass_UInventoryItemData_NoRegister()
	{
		return UInventoryItemData::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryItemData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_m_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_IconTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_IconTexture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_m_eWeaponType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_eWeaponType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_m_eWeaponType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryItemData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InventoryItemData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InventoryItemData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemData_Statics::NewProp_m_ItemName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InventoryItemData" },
		{ "ModuleRelativePath", "Public/InventoryItemData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInventoryItemData_Statics::NewProp_m_ItemName = { "m_ItemName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryItemData, m_ItemName), METADATA_PARAMS(Z_Construct_UClass_UInventoryItemData_Statics::NewProp_m_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemData_Statics::NewProp_m_ItemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemData_Statics::NewProp_m_IconTexture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InventoryItemData" },
		{ "ModuleRelativePath", "Public/InventoryItemData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItemData_Statics::NewProp_m_IconTexture = { "m_IconTexture", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryItemData, m_IconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryItemData_Statics::NewProp_m_IconTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemData_Statics::NewProp_m_IconTexture_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInventoryItemData_Statics::NewProp_m_eWeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemData_Statics::NewProp_m_eWeaponType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InventoryItemData" },
		{ "ModuleRelativePath", "Public/InventoryItemData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInventoryItemData_Statics::NewProp_m_eWeaponType = { "m_eWeaponType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryItemData, m_eWeaponType), Z_Construct_UEnum_MiniProject_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_UInventoryItemData_Statics::NewProp_m_eWeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemData_Statics::NewProp_m_eWeaponType_MetaData)) }; // 956997791
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemData_Statics::NewProp_m_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemData_Statics::NewProp_m_IconTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemData_Statics::NewProp_m_eWeaponType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemData_Statics::NewProp_m_eWeaponType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryItemData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryItemData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryItemData_Statics::ClassParams = {
		&UInventoryItemData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInventoryItemData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryItemData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryItemData()
	{
		if (!Z_Registration_Info_UClass_UInventoryItemData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryItemData.OuterSingleton, Z_Construct_UClass_UInventoryItemData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryItemData.OuterSingleton;
	}
	template<> MINIPROJECT_API UClass* StaticClass<UInventoryItemData>()
	{
		return UInventoryItemData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryItemData);
	struct Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_InventoryItemData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_InventoryItemData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryItemData, UInventoryItemData::StaticClass, TEXT("UInventoryItemData"), &Z_Registration_Info_UClass_UInventoryItemData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryItemData), 1492667031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_InventoryItemData_h_2537054027(TEXT("/Script/MiniProject"),
		Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_InventoryItemData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_InventoryItemData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
