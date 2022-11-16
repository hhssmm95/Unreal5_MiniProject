// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniProject/Public/MonsterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterCharacter() {}
// Cross Module References
	MINIPROJECT_API UClass* Z_Construct_UClass_AMonsterCharacter_NoRegister();
	MINIPROJECT_API UClass* Z_Construct_UClass_AMonsterCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MiniProject();
	MINIPROJECT_API UClass* Z_Construct_UClass_UMonsterAnimInst_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MINIPROJECT_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AMonsterCharacter::StaticRegisterNativesAMonsterCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonsterCharacter);
	UClass* Z_Construct_UClass_AMonsterCharacter_NoRegister()
	{
		return AMonsterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetectRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[];
#endif
		static void NewProp_bIsDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MonsterAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MonsterAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BulletClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MonsterCharacter.h" },
		{ "ModuleRelativePath", "Public/MonsterCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_MaxHP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterData" },
		{ "Comment", "/*UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = true))\n\x09\x09""class  UMonsterAnim* MonsterAnim;*/" },
		{ "ModuleRelativePath", "Public/MonsterCharacter.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = true))\n               class  UMonsterAnim* MonsterAnim;" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, MaxHP), METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_MaxHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_MaxHP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_HP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterData" },
		{ "ModuleRelativePath", "Public/MonsterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, HP), METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_AttackDamage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterData" },
		{ "ModuleRelativePath", "Public/MonsterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, AttackDamage), METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_AttackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_AttackDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_DetectRange_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterData" },
		{ "ModuleRelativePath", "Public/MonsterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_DetectRange = { "DetectRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, DetectRange), METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_DetectRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_DetectRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_bIsDead_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterCharacter" },
		{ "ModuleRelativePath", "Public/MonsterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_bIsDead_SetBit(void* Obj)
	{
		((AMonsterCharacter*)Obj)->bIsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMonsterCharacter), &Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_bIsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_bIsDead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_MonsterAnim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterCharacter" },
		{ "ModuleRelativePath", "Public/MonsterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_MonsterAnim = { "MonsterAnim", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, MonsterAnim), Z_Construct_UClass_UMonsterAnimInst_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_MonsterAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_MonsterAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_BulletClass_MetaData[] = {
		{ "Category", "MonsterCharacter" },
		{ "ModuleRelativePath", "Public/MonsterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, BulletClass), Z_Construct_UClass_ABullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_BulletClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_BulletClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "MonsterCharacter" },
		{ "ModuleRelativePath", "Public/MonsterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_TargetLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_MaxHP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_HP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_AttackDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_DetectRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_bIsDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_MonsterAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_BulletClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_TargetLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonsterCharacter_Statics::ClassParams = {
		&AMonsterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMonsterCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterCharacter()
	{
		if (!Z_Registration_Info_UClass_AMonsterCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonsterCharacter.OuterSingleton, Z_Construct_UClass_AMonsterCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMonsterCharacter.OuterSingleton;
	}
	template<> MINIPROJECT_API UClass* StaticClass<AMonsterCharacter>()
	{
		return AMonsterCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterCharacter);
	struct Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_MonsterCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_MonsterCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMonsterCharacter, AMonsterCharacter::StaticClass, TEXT("AMonsterCharacter"), &Z_Registration_Info_UClass_AMonsterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonsterCharacter), 4025274741U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_MonsterCharacter_h_541623514(TEXT("/Script/MiniProject"),
		Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_MonsterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_MonsterCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
