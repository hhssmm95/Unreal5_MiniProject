// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniProject/Public/PlayerAnimInst.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnimInst() {}
// Cross Module References
	MINIPROJECT_API UEnum* Z_Construct_UEnum_MiniProject_EPlayerAnimType();
	UPackage* Z_Construct_UPackage__Script_MiniProject();
	MINIPROJECT_API UEnum* Z_Construct_UEnum_MiniProject_EPlayerMoveType();
	MINIPROJECT_API UClass* Z_Construct_UClass_UPlayerAnimInst_NoRegister();
	MINIPROJECT_API UClass* Z_Construct_UClass_UPlayerAnimInst();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	MINIPROJECT_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerAnimType;
	static UEnum* EPlayerAnimType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerAnimType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerAnimType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MiniProject_EPlayerAnimType, Z_Construct_UPackage__Script_MiniProject(), TEXT("EPlayerAnimType"));
		}
		return Z_Registration_Info_UEnum_EPlayerAnimType.OuterSingleton;
	}
	template<> MINIPROJECT_API UEnum* StaticEnum<EPlayerAnimType>()
	{
		return EPlayerAnimType_StaticEnum();
	}
	struct Z_Construct_UEnum_MiniProject_EPlayerAnimType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MiniProject_EPlayerAnimType_Statics::Enumerators[] = {
		{ "EPlayerAnimType::Idle", (int64)EPlayerAnimType::Idle },
		{ "EPlayerAnimType::Attack", (int64)EPlayerAnimType::Attack },
		{ "EPlayerAnimType::RangedAttack", (int64)EPlayerAnimType::RangedAttack },
		{ "EPlayerAnimType::Death", (int64)EPlayerAnimType::Death },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MiniProject_EPlayerAnimType_Statics::Enum_MetaDataParams[] = {
		{ "Attack.Name", "EPlayerAnimType::Attack" },
		{ "BlueprintType", "true" },
		{ "Death.Name", "EPlayerAnimType::Death" },
		{ "Idle.Name", "EPlayerAnimType::Idle" },
		{ "ModuleRelativePath", "Public/PlayerAnimInst.h" },
		{ "RangedAttack.Name", "EPlayerAnimType::RangedAttack" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MiniProject_EPlayerAnimType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MiniProject,
		nullptr,
		"EPlayerAnimType",
		"EPlayerAnimType",
		Z_Construct_UEnum_MiniProject_EPlayerAnimType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MiniProject_EPlayerAnimType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MiniProject_EPlayerAnimType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MiniProject_EPlayerAnimType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MiniProject_EPlayerAnimType()
	{
		if (!Z_Registration_Info_UEnum_EPlayerAnimType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerAnimType.InnerSingleton, Z_Construct_UEnum_MiniProject_EPlayerAnimType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerAnimType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerMoveType;
	static UEnum* EPlayerMoveType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerMoveType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerMoveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MiniProject_EPlayerMoveType, Z_Construct_UPackage__Script_MiniProject(), TEXT("EPlayerMoveType"));
		}
		return Z_Registration_Info_UEnum_EPlayerMoveType.OuterSingleton;
	}
	template<> MINIPROJECT_API UEnum* StaticEnum<EPlayerMoveType>()
	{
		return EPlayerMoveType_StaticEnum();
	}
	struct Z_Construct_UEnum_MiniProject_EPlayerMoveType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MiniProject_EPlayerMoveType_Statics::Enumerators[] = {
		{ "EPlayerMoveType::Walk", (int64)EPlayerMoveType::Walk },
		{ "EPlayerMoveType::Run", (int64)EPlayerMoveType::Run },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MiniProject_EPlayerMoveType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerAnimInst.h" },
		{ "Run.Name", "EPlayerMoveType::Run" },
		{ "Walk.Name", "EPlayerMoveType::Walk" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MiniProject_EPlayerMoveType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MiniProject,
		nullptr,
		"EPlayerMoveType",
		"EPlayerMoveType",
		Z_Construct_UEnum_MiniProject_EPlayerMoveType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MiniProject_EPlayerMoveType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MiniProject_EPlayerMoveType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MiniProject_EPlayerMoveType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MiniProject_EPlayerMoveType()
	{
		if (!Z_Registration_Info_UEnum_EPlayerMoveType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerMoveType.InnerSingleton, Z_Construct_UEnum_MiniProject_EPlayerMoveType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerMoveType.InnerSingleton;
	}
	DEFINE_FUNCTION(UPlayerAnimInst::execAnimNotify_OnPlayerAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_OnPlayerAttackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimInst::execAnimNotify_OnPlayerAttackShot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_OnPlayerAttackShot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimInst::execAnimNotify_OnPlayerAttackStrike)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_OnPlayerAttackStrike();
		P_NATIVE_END;
	}
	void UPlayerAnimInst::StaticRegisterNativesUPlayerAnimInst()
	{
		UClass* Class = UPlayerAnimInst::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_OnPlayerAttackEnd", &UPlayerAnimInst::execAnimNotify_OnPlayerAttackEnd },
			{ "AnimNotify_OnPlayerAttackShot", &UPlayerAnimInst::execAnimNotify_OnPlayerAttackShot },
			{ "AnimNotify_OnPlayerAttackStrike", &UPlayerAnimInst::execAnimNotify_OnPlayerAttackStrike },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnimInst.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInst, nullptr, "AnimNotify_OnPlayerAttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackShot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackShot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerAnimInst.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInst, nullptr, "AnimNotify_OnPlayerAttackShot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackStrike_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackStrike_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*UFUNCTION(BlueprintCallable)\n\x09\x09void AnimNotify_OnPlayerAttackStart();*/" },
		{ "ModuleRelativePath", "Public/PlayerAnimInst.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable)\n               void AnimNotify_OnPlayerAttackStart();" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackStrike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInst, nullptr, "AnimNotify_OnPlayerAttackStrike", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackStrike_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackStrike_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackStrike()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackStrike_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAnimInst);
	UClass* Z_Construct_UClass_UPlayerAnimInst_NoRegister()
	{
		return UPlayerAnimInst::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAnimInst_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_Direction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AnimType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MoveType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAnimInst_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerAnimInst_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackEnd, "AnimNotify_OnPlayerAttackEnd" }, // 3329680326
		{ &Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackShot, "AnimNotify_OnPlayerAttackShot" }, // 4199439813
		{ &Z_Construct_UFunction_UPlayerAnimInst_AnimNotify_OnPlayerAttackStrike, "AnimNotify_OnPlayerAttackStrike" }, // 4037481370
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInst_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PlayerAnimInst.h" },
		{ "ModuleRelativePath", "Public/PlayerAnimInst.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_m_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnimInst" },
		{ "ModuleRelativePath", "Public/PlayerAnimInst.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_m_Speed = { "m_Speed", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInst, m_Speed), METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_m_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_m_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_m_Direction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnimInst" },
		{ "ModuleRelativePath", "Public/PlayerAnimInst.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_m_Direction = { "m_Direction", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInst, m_Direction), METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_m_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_m_Direction_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_AnimType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnimInst" },
		{ "ModuleRelativePath", "Public/PlayerAnimInst.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_AnimType = { "AnimType", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInst, AnimType), Z_Construct_UEnum_MiniProject_EPlayerAnimType, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_AnimType_MetaData)) }; // 1423106881
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_MoveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_MoveType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnimInst" },
		{ "ModuleRelativePath", "Public/PlayerAnimInst.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_MoveType = { "MoveType", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInst, MoveType), Z_Construct_UEnum_MiniProject_EPlayerMoveType, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_MoveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_MoveType_MetaData)) }; // 2523964980
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_Player_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnimInst" },
		{ "ModuleRelativePath", "Public/PlayerAnimInst.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimInst, Player), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_Player_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnimInst_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_m_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_m_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_AnimType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_AnimType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_MoveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_MoveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInst_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAnimInst_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimInst>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimInst_Statics::ClassParams = {
		&UPlayerAnimInst::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerAnimInst_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInst_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInst_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInst_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerAnimInst()
	{
		if (!Z_Registration_Info_UClass_UPlayerAnimInst.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAnimInst.OuterSingleton, Z_Construct_UClass_UPlayerAnimInst_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerAnimInst.OuterSingleton;
	}
	template<> MINIPROJECT_API UClass* StaticClass<UPlayerAnimInst>()
	{
		return UPlayerAnimInst::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnimInst);
	struct Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_Statics::EnumInfo[] = {
		{ EPlayerAnimType_StaticEnum, TEXT("EPlayerAnimType"), &Z_Registration_Info_UEnum_EPlayerAnimType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1423106881U) },
		{ EPlayerMoveType_StaticEnum, TEXT("EPlayerMoveType"), &Z_Registration_Info_UEnum_EPlayerMoveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2523964980U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAnimInst, UPlayerAnimInst::StaticClass, TEXT("UPlayerAnimInst"), &Z_Registration_Info_UClass_UPlayerAnimInst, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAnimInst), 3252940665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_4181254470(TEXT("/Script/MiniProject"),
		Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
