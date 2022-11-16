// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniProject/Public/PlayerInfoComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInfoComponent() {}
// Cross Module References
	MINIPROJECT_API UClass* Z_Construct_UClass_UPlayerInfoComponent_NoRegister();
	MINIPROJECT_API UClass* Z_Construct_UClass_UPlayerInfoComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MiniProject();
// End Cross Module References
	void UPlayerInfoComponent::StaticRegisterNativesUPlayerInfoComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerInfoComponent);
	UClass* Z_Construct_UClass_UPlayerInfoComponent_NoRegister()
	{
		return UPlayerInfoComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInfoComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nickname_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Nickname;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInfoComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfoComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerInfoComponent.h" },
		{ "ModuleRelativePath", "Public/PlayerInfoComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_Nickname_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfoComponent" },
		{ "ModuleRelativePath", "Public/PlayerInfoComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_Nickname = { "Nickname", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfoComponent, Nickname), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_Nickname_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_Nickname_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_MaxHP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfoComponent" },
		{ "ModuleRelativePath", "Public/PlayerInfoComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfoComponent, MaxHP), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_MaxHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_MaxHP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_HP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfoComponent" },
		{ "ModuleRelativePath", "Public/PlayerInfoComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfoComponent, HP), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_MaxSP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfoComponent" },
		{ "ModuleRelativePath", "Public/PlayerInfoComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_MaxSP = { "MaxSP", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfoComponent, MaxSP), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_MaxSP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_MaxSP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_SP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfoComponent" },
		{ "ModuleRelativePath", "Public/PlayerInfoComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_SP = { "SP", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfoComponent, SP), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_SP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_SP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_Damage_MetaData[] = {
		{ "AllowPriavteAccess", "TRUE" },
		{ "Category", "PlayerInfoComponent" },
		{ "ModuleRelativePath", "Public/PlayerInfoComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInfoComponent, Damage), METADATA_PARAMS(Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_Damage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInfoComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_Nickname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_MaxHP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_HP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_MaxSP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_SP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInfoComponent_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInfoComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInfoComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInfoComponent_Statics::ClassParams = {
		&UPlayerInfoComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerInfoComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfoComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerInfoComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfoComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerInfoComponent()
	{
		if (!Z_Registration_Info_UClass_UPlayerInfoComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInfoComponent.OuterSingleton, Z_Construct_UClass_UPlayerInfoComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerInfoComponent.OuterSingleton;
	}
	template<> MINIPROJECT_API UClass* StaticClass<UPlayerInfoComponent>()
	{
		return UPlayerInfoComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInfoComponent);
	struct Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_PlayerInfoComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_PlayerInfoComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInfoComponent, UPlayerInfoComponent::StaticClass, TEXT("UPlayerInfoComponent"), &Z_Registration_Info_UClass_UPlayerInfoComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInfoComponent), 476052363U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_PlayerInfoComponent_h_3930420161(TEXT("/Script/MiniProject"),
		Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_PlayerInfoComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_PlayerInfoComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
