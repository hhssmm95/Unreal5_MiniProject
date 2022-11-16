// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniProject/Public/TurnTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnTask() {}
// Cross Module References
	MINIPROJECT_API UClass* Z_Construct_UClass_UTurnTask_NoRegister();
	MINIPROJECT_API UClass* Z_Construct_UClass_UTurnTask();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_MiniProject();
// End Cross Module References
	void UTurnTask::StaticRegisterNativesUTurnTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTurnTask);
	UClass* Z_Construct_UClass_UTurnTask_NoRegister()
	{
		return UTurnTask::StaticClass();
	}
	struct Z_Construct_UClass_UTurnTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTurnTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TurnTask.h" },
		{ "ModuleRelativePath", "Public/TurnTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTurnTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnTask_Statics::ClassParams = {
		&UTurnTask::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTurnTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTurnTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTurnTask()
	{
		if (!Z_Registration_Info_UClass_UTurnTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnTask.OuterSingleton, Z_Construct_UClass_UTurnTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTurnTask.OuterSingleton;
	}
	template<> MINIPROJECT_API UClass* StaticClass<UTurnTask>()
	{
		return UTurnTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnTask);
	struct Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_TurnTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_TurnTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTurnTask, UTurnTask::StaticClass, TEXT("UTurnTask"), &Z_Registration_Info_UClass_UTurnTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnTask), 570270698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_TurnTask_h_1012797936(TEXT("/Script/MiniProject"),
		Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_TurnTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_TurnTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
