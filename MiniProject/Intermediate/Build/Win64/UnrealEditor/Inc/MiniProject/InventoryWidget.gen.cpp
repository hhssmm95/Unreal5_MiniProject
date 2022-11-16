// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniProject/Public/InventoryWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryWidget() {}
// Cross Module References
	MINIPROJECT_API UClass* Z_Construct_UClass_UInventoryWidget_NoRegister();
	MINIPROJECT_API UClass* Z_Construct_UClass_UInventoryWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MiniProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInventoryWidget::execOnItemDoubleClicked)
	{
		P_GET_OBJECT(UObject,Z_Param_pObj);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemDoubleClicked(Z_Param_pObj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryWidget::execCloseButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseButtonClick();
		P_NATIVE_END;
	}
	void UInventoryWidget::StaticRegisterNativesUInventoryWidget()
	{
		UClass* Class = UInventoryWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseButtonClick", &UInventoryWidget::execCloseButtonClick },
			{ "OnItemDoubleClicked", &UInventoryWidget::execOnItemDoubleClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryWidget_CloseButtonClick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryWidget_CloseButtonClick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*UFUNCTION(BlueprintCallable)\n\x09\x09void ItemClick(UObject* pObj);*/" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable)\n               void ItemClick(UObject* pObj);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryWidget_CloseButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryWidget, nullptr, "CloseButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryWidget_CloseButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidget_CloseButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryWidget_CloseButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryWidget_CloseButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryWidget_OnItemDoubleClicked_Statics
	{
		struct InventoryWidget_eventOnItemDoubleClicked_Parms
		{
			UObject* pObj;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pObj;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryWidget_OnItemDoubleClicked_Statics::NewProp_pObj = { "pObj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryWidget_eventOnItemDoubleClicked_Parms, pObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryWidget_OnItemDoubleClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryWidget_OnItemDoubleClicked_Statics::NewProp_pObj,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryWidget_OnItemDoubleClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryWidget_OnItemDoubleClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryWidget, nullptr, "OnItemDoubleClicked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryWidget_OnItemDoubleClicked_Statics::InventoryWidget_eventOnItemDoubleClicked_Parms), Z_Construct_UFunction_UInventoryWidget_OnItemDoubleClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidget_OnItemDoubleClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryWidget_OnItemDoubleClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidget_OnItemDoubleClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryWidget_OnItemDoubleClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryWidget_OnItemDoubleClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryWidget);
	UClass* Z_Construct_UClass_UInventoryWidget_NoRegister()
	{
		return UInventoryWidget::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryCloseButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryCloseButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryListView_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryListView;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryWidget_CloseButtonClick, "CloseButtonClick" }, // 2195711317
		{ &Z_Construct_UFunction_UInventoryWidget_OnItemDoubleClicked, "OnItemDoubleClicked" }, // 281137590
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InventoryWidget.h" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryCloseButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryCloseButton = { "InventoryCloseButton", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryWidget, InventoryCloseButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryCloseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryCloseButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryListView_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryListView = { "InventoryListView", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryWidget, InventoryListView), Z_Construct_UClass_UListView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryListView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryListView_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryCloseButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryListView,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryWidget_Statics::ClassParams = {
		&UInventoryWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryWidget()
	{
		if (!Z_Registration_Info_UClass_UInventoryWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryWidget.OuterSingleton, Z_Construct_UClass_UInventoryWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryWidget.OuterSingleton;
	}
	template<> MINIPROJECT_API UClass* StaticClass<UInventoryWidget>()
	{
		return UInventoryWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryWidget);
	struct Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryWidget, UInventoryWidget::StaticClass, TEXT("UInventoryWidget"), &Z_Registration_Info_UClass_UInventoryWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryWidget), 2166996183U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_1526167478(TEXT("/Script/MiniProject"),
		Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
