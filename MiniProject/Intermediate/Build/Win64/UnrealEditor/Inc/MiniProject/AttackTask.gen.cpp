// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniProject/Public/AttackTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackTask() {}
// Cross Module References
	MINIPROJECT_API UClass* Z_Construct_UClass_UAttackTask_NoRegister();
	MINIPROJECT_API UClass* Z_Construct_UClass_UAttackTask();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_MiniProject();
// End Cross Module References
	void UAttackTask::StaticRegisterNativesUAttackTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttackTask);
	UClass* Z_Construct_UClass_UAttackTask_NoRegister()
	{
		return UAttackTask::StaticClass();
	}
	struct Z_Construct_UClass_UAttackTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AttackTask.h" },
		{ "ModuleRelativePath", "Public/AttackTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackTask_Statics::ClassParams = {
		&UAttackTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAttackTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttackTask()
	{
		if (!Z_Registration_Info_UClass_UAttackTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackTask.OuterSingleton, Z_Construct_UClass_UAttackTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttackTask.OuterSingleton;
	}
	template<> MINIPROJECT_API UClass* StaticClass<UAttackTask>()
	{
		return UAttackTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackTask);
	struct Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_AttackTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_AttackTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttackTask, UAttackTask::StaticClass, TEXT("UAttackTask"), &Z_Registration_Info_UClass_UAttackTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackTask), 3926780617U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_AttackTask_h_260417591(TEXT("/Script/MiniProject"),
		Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_AttackTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_AttackTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
