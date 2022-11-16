// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniProject/Public/InventoryItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItem() {}
// Cross Module References
	MINIPROJECT_API UClass* Z_Construct_UClass_UInventoryItem_NoRegister();
	MINIPROJECT_API UClass* Z_Construct_UClass_UInventoryItem();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MiniProject();
	MINIPROJECT_API UClass* Z_Construct_UClass_UInventoryItemData_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInventoryItem::execSetData)
	{
		P_GET_OBJECT(UInventoryItemData,Z_Param_pData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_pData);
		P_NATIVE_END;
	}
	void UInventoryItem::StaticRegisterNativesUInventoryItem()
	{
		UClass* Class = UInventoryItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &UInventoryItem::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryItem_SetData_Statics
	{
		struct InventoryItem_eventSetData_Parms
		{
			UInventoryItemData* pData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryItem_SetData_Statics::NewProp_pData = { "pData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryItem_eventSetData_Parms, pData), Z_Construct_UClass_UInventoryItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItem_SetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItem_SetData_Statics::NewProp_pData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryItem_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItem_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItem, nullptr, "SetData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryItem_SetData_Statics::InventoryItem_eventSetData_Parms), Z_Construct_UFunction_UInventoryItem_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItem_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryItem_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItem_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryItem_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItem_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryItem);
	UClass* Z_Construct_UClass_UInventoryItem_NoRegister()
	{
		return UInventoryItem::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_ItemNameText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_ItemNameText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryItem_SetData, "SetData" }, // 3483284226
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InventoryItem.h" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItem_Statics::NewProp_m_Icon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InventoryItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItem_Statics::NewProp_m_Icon = { "m_Icon", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryItem, m_Icon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryItem_Statics::NewProp_m_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItem_Statics::NewProp_m_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItem_Statics::NewProp_m_ItemNameText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InventoryItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItem_Statics::NewProp_m_ItemNameText = { "m_ItemNameText", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryItem, m_ItemNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryItem_Statics::NewProp_m_ItemNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItem_Statics::NewProp_m_ItemNameText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItem_Statics::NewProp_m_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItem_Statics::NewProp_m_ItemNameText,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInventoryItem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UInventoryItem, IUserObjectListEntry), false },  // 1544624204
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryItem_Statics::ClassParams = {
		&UInventoryItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryItem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryItem()
	{
		if (!Z_Registration_Info_UClass_UInventoryItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryItem.OuterSingleton, Z_Construct_UClass_UInventoryItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryItem.OuterSingleton;
	}
	template<> MINIPROJECT_API UClass* StaticClass<UInventoryItem>()
	{
		return UInventoryItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryItem);
	struct Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryItem, UInventoryItem::StaticClass, TEXT("UInventoryItem"), &Z_Registration_Info_UClass_UInventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryItem), 94478543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_2149523600(TEXT("/Script/MiniProject"),
		Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
