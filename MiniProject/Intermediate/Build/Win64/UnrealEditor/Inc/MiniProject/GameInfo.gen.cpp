// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniProject/Public/GameInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInfo() {}
// Cross Module References
	MINIPROJECT_API UEnum* Z_Construct_UEnum_MiniProject_EWeaponType();
	UPackage* Z_Construct_UPackage__Script_MiniProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
	static UEnum* EWeaponType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MiniProject_EWeaponType, Z_Construct_UPackage__Script_MiniProject(), TEXT("EWeaponType"));
		}
		return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
	}
	template<> MINIPROJECT_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	struct Z_Construct_UEnum_MiniProject_EWeaponType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MiniProject_EWeaponType_Statics::Enumerators[] = {
		{ "EWeaponType::None", (int64)EWeaponType::None },
		{ "EWeaponType::Sword", (int64)EWeaponType::Sword },
		{ "EWeaponType::Bow", (int64)EWeaponType::Bow },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MiniProject_EWeaponType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bow.Name", "EWeaponType::Bow" },
		{ "ModuleRelativePath", "Public/GameInfo.h" },
		{ "None.Name", "EWeaponType::None" },
		{ "Sword.Name", "EWeaponType::Sword" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MiniProject_EWeaponType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MiniProject,
		nullptr,
		"EWeaponType",
		"EWeaponType",
		Z_Construct_UEnum_MiniProject_EWeaponType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MiniProject_EWeaponType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MiniProject_EWeaponType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MiniProject_EWeaponType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MiniProject_EWeaponType()
	{
		if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_MiniProject_EWeaponType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_GameInfo_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_GameInfo_h_Statics::EnumInfo[] = {
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 956997791U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_GameInfo_h_150822196(TEXT("/Script/MiniProject"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_GameInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_GameInfo_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
