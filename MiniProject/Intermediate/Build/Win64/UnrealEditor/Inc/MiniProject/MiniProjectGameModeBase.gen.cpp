// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniProject/MiniProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniProjectGameModeBase() {}
// Cross Module References
	MINIPROJECT_API UClass* Z_Construct_UClass_AMiniProjectGameModeBase_NoRegister();
	MINIPROJECT_API UClass* Z_Construct_UClass_AMiniProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MiniProject();
// End Cross Module References
	void AMiniProjectGameModeBase::StaticRegisterNativesAMiniProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMiniProjectGameModeBase);
	UClass* Z_Construct_UClass_AMiniProjectGameModeBase_NoRegister()
	{
		return AMiniProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMiniProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMiniProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiniProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MiniProjectGameModeBase.h" },
		{ "ModuleRelativePath", "MiniProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMiniProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMiniProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMiniProjectGameModeBase_Statics::ClassParams = {
		&AMiniProjectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMiniProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMiniProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMiniProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AMiniProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMiniProjectGameModeBase.OuterSingleton, Z_Construct_UClass_AMiniProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMiniProjectGameModeBase.OuterSingleton;
	}
	template<> MINIPROJECT_API UClass* StaticClass<AMiniProjectGameModeBase>()
	{
		return AMiniProjectGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMiniProjectGameModeBase);
	struct Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_MiniProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_MiniProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMiniProjectGameModeBase, AMiniProjectGameModeBase::StaticClass, TEXT("AMiniProjectGameModeBase"), &Z_Registration_Info_UClass_AMiniProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMiniProjectGameModeBase), 1422527971U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_MiniProjectGameModeBase_h_2162354733(TEXT("/Script/MiniProject"),
		Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_MiniProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_MiniProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
