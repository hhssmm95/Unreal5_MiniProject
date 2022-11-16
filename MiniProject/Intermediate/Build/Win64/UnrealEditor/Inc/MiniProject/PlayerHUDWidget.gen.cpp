// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniProject/Public/PlayerHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHUDWidget() {}
// Cross Module References
	MINIPROJECT_API UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister();
	MINIPROJECT_API UClass* Z_Construct_UClass_UPlayerHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MiniProject();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerHUDWidget::execSetNickname)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNickname(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerHUDWidget::execSetHPAmount)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_max);
		P_GET_PROPERTY(FFloatProperty,Z_Param_curr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHPAmount(Z_Param_max,Z_Param_curr);
		P_NATIVE_END;
	}
	void UPlayerHUDWidget::StaticRegisterNativesUPlayerHUDWidget()
	{
		UClass* Class = UPlayerHUDWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHPAmount", &UPlayerHUDWidget::execSetHPAmount },
			{ "SetNickname", &UPlayerHUDWidget::execSetNickname },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerHUDWidget_SetHPAmount_Statics
	{
		struct PlayerHUDWidget_eventSetHPAmount_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerHUDWidget_SetHPAmount_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHUDWidget_eventSetHPAmount_Parms, max), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerHUDWidget_SetHPAmount_Statics::NewProp_curr = { "curr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHUDWidget_eventSetHPAmount_Parms, curr), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHUDWidget_SetHPAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUDWidget_SetHPAmount_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUDWidget_SetHPAmount_Statics::NewProp_curr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHUDWidget_SetHPAmount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUDWidget_SetHPAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUDWidget, nullptr, "SetHPAmount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerHUDWidget_SetHPAmount_Statics::PlayerHUDWidget_eventSetHPAmount_Parms), Z_Construct_UFunction_UPlayerHUDWidget_SetHPAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_SetHPAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerHUDWidget_SetHPAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_SetHPAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerHUDWidget_SetHPAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUDWidget_SetHPAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerHUDWidget_SetNickname_Statics
	{
		struct PlayerHUDWidget_eventSetNickname_Parms
		{
			FText Text;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHUDWidget_SetNickname_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPlayerHUDWidget_SetNickname_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHUDWidget_eventSetNickname_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UPlayerHUDWidget_SetNickname_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_SetNickname_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerHUDWidget_SetNickname_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHUDWidget_eventSetNickname_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) }; // 1116915171
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHUDWidget_SetNickname_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUDWidget_SetNickname_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUDWidget_SetNickname_Statics::NewProp_CommitMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHUDWidget_SetNickname_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUDWidget_SetNickname_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUDWidget, nullptr, "SetNickname", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerHUDWidget_SetNickname_Statics::PlayerHUDWidget_eventSetNickname_Parms), Z_Construct_UFunction_UPlayerHUDWidget_SetNickname_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_SetNickname_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerHUDWidget_SetNickname_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_SetNickname_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerHUDWidget_SetNickname()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUDWidget_SetNickname_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerHUDWidget);
	UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister()
	{
		return UPlayerHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerHUDWidget_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NicknameInputBorder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NicknameInputBorder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NicknameInputText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NicknameInputText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerHUDWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerHUDWidget_SetHPAmount, "SetHPAmount" }, // 281765373
		{ &Z_Construct_UFunction_UPlayerHUDWidget_SetNickname, "SetNickname" }, // 2043004836
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlayerHUDWidget.h" },
		{ "ModuleRelativePath", "Public/PlayerHUDWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ProgressHPBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ProgressHPBar = { "ProgressHPBar", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerHUDWidget, ProgressHPBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ProgressHPBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ProgressHPBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_NicknameInputBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_NicknameInputBorder = { "NicknameInputBorder", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerHUDWidget, NicknameInputBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_NicknameInputBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_NicknameInputBorder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_NicknameInputText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_NicknameInputText = { "NicknameInputText", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerHUDWidget, NicknameInputText), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_NicknameInputText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_NicknameInputText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ProgressHPBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_NicknameInputBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_NicknameInputText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHUDWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHUDWidget_Statics::ClassParams = {
		&UPlayerHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerHUDWidget()
	{
		if (!Z_Registration_Info_UClass_UPlayerHUDWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerHUDWidget.OuterSingleton, Z_Construct_UClass_UPlayerHUDWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerHUDWidget.OuterSingleton;
	}
	template<> MINIPROJECT_API UClass* StaticClass<UPlayerHUDWidget>()
	{
		return UPlayerHUDWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHUDWidget);
	struct Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerHUDWidget, UPlayerHUDWidget::StaticClass, TEXT("UPlayerHUDWidget"), &Z_Registration_Info_UClass_UPlayerHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerHUDWidget), 707058647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_3229275159(TEXT("/Script/MiniProject"),
		Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
