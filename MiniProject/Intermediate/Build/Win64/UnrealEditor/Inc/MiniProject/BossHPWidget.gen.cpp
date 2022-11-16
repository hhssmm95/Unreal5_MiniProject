// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniProject/Public/BossHPWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossHPWidget() {}
// Cross Module References
	MINIPROJECT_API UClass* Z_Construct_UClass_UBossHPWidget_NoRegister();
	MINIPROJECT_API UClass* Z_Construct_UClass_UBossHPWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MiniProject();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBossHPWidget::execSetHPAmount)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_max);
		P_GET_PROPERTY(FFloatProperty,Z_Param_curr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHPAmount(Z_Param_max,Z_Param_curr);
		P_NATIVE_END;
	}
	void UBossHPWidget::StaticRegisterNativesUBossHPWidget()
	{
		UClass* Class = UBossHPWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHPAmount", &UBossHPWidget::execSetHPAmount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBossHPWidget_SetHPAmount_Statics
	{
		struct BossHPWidget_eventSetHPAmount_Parms
		{
			float max;
			float curr;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_max;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_curr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBossHPWidget_SetHPAmount_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BossHPWidget_eventSetHPAmount_Parms, max), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBossHPWidget_SetHPAmount_Statics::NewProp_curr = { "curr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BossHPWidget_eventSetHPAmount_Parms, curr), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBossHPWidget_SetHPAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBossHPWidget_SetHPAmount_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBossHPWidget_SetHPAmount_Statics::NewProp_curr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBossHPWidget_SetHPAmount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BossHPWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBossHPWidget_SetHPAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBossHPWidget, nullptr, "SetHPAmount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBossHPWidget_SetHPAmount_Statics::BossHPWidget_eventSetHPAmount_Parms), Z_Construct_UFunction_UBossHPWidget_SetHPAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBossHPWidget_SetHPAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBossHPWidget_SetHPAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBossHPWidget_SetHPAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBossHPWidget_SetHPAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBossHPWidget_SetHPAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBossHPWidget);
	UClass* Z_Construct_UClass_UBossHPWidget_NoRegister()
	{
		return UBossHPWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBossHPWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressHPBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressHPBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBossHPWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBossHPWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBossHPWidget_SetHPAmount, "SetHPAmount" }, // 78247340
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossHPWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BossHPWidget.h" },
		{ "ModuleRelativePath", "Public/BossHPWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossHPWidget_Statics::NewProp_ProgressHPBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BossHPWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BossHPWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBossHPWidget_Statics::NewProp_ProgressHPBar = { "ProgressHPBar", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBossHPWidget, ProgressHPBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBossHPWidget_Statics::NewProp_ProgressHPBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBossHPWidget_Statics::NewProp_ProgressHPBar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBossHPWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossHPWidget_Statics::NewProp_ProgressHPBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBossHPWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBossHPWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBossHPWidget_Statics::ClassParams = {
		&UBossHPWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBossHPWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBossHPWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBossHPWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBossHPWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBossHPWidget()
	{
		if (!Z_Registration_Info_UClass_UBossHPWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBossHPWidget.OuterSingleton, Z_Construct_UClass_UBossHPWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBossHPWidget.OuterSingleton;
	}
	template<> MINIPROJECT_API UClass* StaticClass<UBossHPWidget>()
	{
		return UBossHPWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBossHPWidget);
	struct Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_BossHPWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_BossHPWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBossHPWidget, UBossHPWidget::StaticClass, TEXT("UBossHPWidget"), &Z_Registration_Info_UClass_UBossHPWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBossHPWidget), 1871051458U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_BossHPWidget_h_3435633795(TEXT("/Script/MiniProject"),
		Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_BossHPWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_BossHPWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
