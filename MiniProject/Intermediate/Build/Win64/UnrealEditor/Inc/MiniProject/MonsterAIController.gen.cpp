// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniProject/Public/MonsterAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterAIController() {}
// Cross Module References
	MINIPROJECT_API UClass* Z_Construct_UClass_AMonsterAIController_NoRegister();
	MINIPROJECT_API UClass* Z_Construct_UClass_AMonsterAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_MiniProject();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
// End Cross Module References
	void AMonsterAIController::StaticRegisterNativesAMonsterAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonsterAIController);
	UClass* Z_Construct_UClass_AMonsterAIController_NoRegister()
	{
		return AMonsterAIController::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AITree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AITree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIBlackBoard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIBlackBoard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MonsterAIController.h" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AITree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterAIController" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AITree = { "AITree", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterAIController, AITree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AITree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AITree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AIBlackBoard_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterAIController" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AIBlackBoard = { "AIBlackBoard", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterAIController, AIBlackBoard), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AIBlackBoard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AIBlackBoard_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AITree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AIBlackBoard,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonsterAIController_Statics::ClassParams = {
		&AMonsterAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMonsterAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterAIController()
	{
		if (!Z_Registration_Info_UClass_AMonsterAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonsterAIController.OuterSingleton, Z_Construct_UClass_AMonsterAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMonsterAIController.OuterSingleton;
	}
	template<> MINIPROJECT_API UClass* StaticClass<AMonsterAIController>()
	{
		return AMonsterAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterAIController);
	struct Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_MonsterAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_MonsterAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMonsterAIController, AMonsterAIController::StaticClass, TEXT("AMonsterAIController"), &Z_Registration_Info_UClass_AMonsterAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonsterAIController), 779534483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_MonsterAIController_h_4079311979(TEXT("/Script/MiniProject"),
		Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_MonsterAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_MonsterAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
