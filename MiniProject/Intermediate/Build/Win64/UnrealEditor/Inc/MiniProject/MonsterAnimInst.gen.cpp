// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniProject/Public/MonsterAnimInst.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterAnimInst() {}
// Cross Module References
	MINIPROJECT_API UEnum* Z_Construct_UEnum_MiniProject_EMonsterAnimType();
	UPackage* Z_Construct_UPackage__Script_MiniProject();
	MINIPROJECT_API UClass* Z_Construct_UClass_UMonsterAnimInst_NoRegister();
	MINIPROJECT_API UClass* Z_Construct_UClass_UMonsterAnimInst();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	MINIPROJECT_API UClass* Z_Construct_UClass_AMonsterCharacter_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMonsterAnimType;
	static UEnum* EMonsterAnimType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMonsterAnimType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMonsterAnimType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MiniProject_EMonsterAnimType, Z_Construct_UPackage__Script_MiniProject(), TEXT("EMonsterAnimType"));
		}
		return Z_Registration_Info_UEnum_EMonsterAnimType.OuterSingleton;
	}
	template<> MINIPROJECT_API UEnum* StaticEnum<EMonsterAnimType>()
	{
		return EMonsterAnimType_StaticEnum();
	}
	struct Z_Construct_UEnum_MiniProject_EMonsterAnimType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MiniProject_EMonsterAnimType_Statics::Enumerators[] = {
		{ "EMonsterAnimType::Idle", (int64)EMonsterAnimType::Idle },
		{ "EMonsterAnimType::Attack", (int64)EMonsterAnimType::Attack },
		{ "EMonsterAnimType::Death", (int64)EMonsterAnimType::Death },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MiniProject_EMonsterAnimType_Statics::Enum_MetaDataParams[] = {
		{ "Attack.Name", "EMonsterAnimType::Attack" },
		{ "BlueprintType", "true" },
		{ "Death.Name", "EMonsterAnimType::Death" },
		{ "Idle.Name", "EMonsterAnimType::Idle" },
		{ "ModuleRelativePath", "Public/MonsterAnimInst.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MiniProject_EMonsterAnimType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MiniProject,
		nullptr,
		"EMonsterAnimType",
		"EMonsterAnimType",
		Z_Construct_UEnum_MiniProject_EMonsterAnimType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MiniProject_EMonsterAnimType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MiniProject_EMonsterAnimType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MiniProject_EMonsterAnimType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MiniProject_EMonsterAnimType()
	{
		if (!Z_Registration_Info_UEnum_EMonsterAnimType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMonsterAnimType.InnerSingleton, Z_Construct_UEnum_MiniProject_EMonsterAnimType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMonsterAnimType.InnerSingleton;
	}
	DEFINE_FUNCTION(UMonsterAnimInst::execAnimNotify_OnMonsterDeathEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_OnMonsterDeathEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMonsterAnimInst::execAnimNotify_OnMonsterAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_OnMonsterAttackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMonsterAnimInst::execAnimNotify_OnMonsterAttackShot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_OnMonsterAttackShot();
		P_NATIVE_END;
	}
	void UMonsterAnimInst::StaticRegisterNativesUMonsterAnimInst()
	{
		UClass* Class = UMonsterAnimInst::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_OnMonsterAttackEnd", &UMonsterAnimInst::execAnimNotify_OnMonsterAttackEnd },
			{ "AnimNotify_OnMonsterAttackShot", &UMonsterAnimInst::execAnimNotify_OnMonsterAttackShot },
			{ "AnimNotify_OnMonsterDeathEnd", &UMonsterAnimInst::execAnimNotify_OnMonsterDeathEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterAttackEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterAttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MonsterAnimInst.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterAttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMonsterAnimInst, nullptr, "AnimNotify_OnMonsterAttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterAttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterAttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterAttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterAttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterAttackShot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterAttackShot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MonsterAnimInst.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterAttackShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMonsterAnimInst, nullptr, "AnimNotify_OnMonsterAttackShot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterAttackShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterAttackShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterAttackShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterAttackShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterDeathEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterDeathEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MonsterAnimInst.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterDeathEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMonsterAnimInst, nullptr, "AnimNotify_OnMonsterDeathEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterDeathEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterDeathEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterDeathEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterDeathEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMonsterAnimInst);
	UClass* Z_Construct_UClass_UMonsterAnimInst_NoRegister()
	{
		return UMonsterAnimInst::StaticClass();
	}
	struct Z_Construct_UClass_UMonsterAnimInst_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AnimType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Monster_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Monster;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMonsterAnimInst_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMonsterAnimInst_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterAttackEnd, "AnimNotify_OnMonsterAttackEnd" }, // 215247466
		{ &Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterAttackShot, "AnimNotify_OnMonsterAttackShot" }, // 1337657891
		{ &Z_Construct_UFunction_UMonsterAnimInst_AnimNotify_OnMonsterDeathEnd, "AnimNotify_OnMonsterDeathEnd" }, // 832193383
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterAnimInst_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MonsterAnimInst.h" },
		{ "ModuleRelativePath", "Public/MonsterAnimInst.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMonsterAnimInst_Statics::NewProp_AnimType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterAnimInst_Statics::NewProp_AnimType_MetaData[] = {
		{ "Category", "MonsterAnimInst" },
		{ "ModuleRelativePath", "Public/MonsterAnimInst.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMonsterAnimInst_Statics::NewProp_AnimType = { "AnimType", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMonsterAnimInst, AnimType), Z_Construct_UEnum_MiniProject_EMonsterAnimType, METADATA_PARAMS(Z_Construct_UClass_UMonsterAnimInst_Statics::NewProp_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterAnimInst_Statics::NewProp_AnimType_MetaData)) }; // 732306680
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterAnimInst_Statics::NewProp_Monster_MetaData[] = {
		{ "Category", "MonsterAnimInst" },
		{ "ModuleRelativePath", "Public/MonsterAnimInst.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMonsterAnimInst_Statics::NewProp_Monster = { "Monster", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMonsterAnimInst, Monster), Z_Construct_UClass_AMonsterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMonsterAnimInst_Statics::NewProp_Monster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterAnimInst_Statics::NewProp_Monster_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMonsterAnimInst_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterAnimInst_Statics::NewProp_AnimType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterAnimInst_Statics::NewProp_AnimType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterAnimInst_Statics::NewProp_Monster,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMonsterAnimInst_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMonsterAnimInst>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMonsterAnimInst_Statics::ClassParams = {
		&UMonsterAnimInst::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMonsterAnimInst_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterAnimInst_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMonsterAnimInst_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterAnimInst_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMonsterAnimInst()
	{
		if (!Z_Registration_Info_UClass_UMonsterAnimInst.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMonsterAnimInst.OuterSingleton, Z_Construct_UClass_UMonsterAnimInst_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMonsterAnimInst.OuterSingleton;
	}
	template<> MINIPROJECT_API UClass* StaticClass<UMonsterAnimInst>()
	{
		return UMonsterAnimInst::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMonsterAnimInst);
	struct Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_Statics::EnumInfo[] = {
		{ EMonsterAnimType_StaticEnum, TEXT("EMonsterAnimType"), &Z_Registration_Info_UEnum_EMonsterAnimType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 732306680U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMonsterAnimInst, UMonsterAnimInst::StaticClass, TEXT("UMonsterAnimInst"), &Z_Registration_Info_UClass_UMonsterAnimInst, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMonsterAnimInst), 2090803128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_2728592042(TEXT("/Script/MiniProject"),
		Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
