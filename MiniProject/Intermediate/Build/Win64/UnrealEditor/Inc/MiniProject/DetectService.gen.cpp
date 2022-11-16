// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniProject/Public/DetectService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetectService() {}
// Cross Module References
	MINIPROJECT_API UClass* Z_Construct_UClass_UDetectService_NoRegister();
	MINIPROJECT_API UClass* Z_Construct_UClass_UDetectService();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_MiniProject();
// End Cross Module References
	void UDetectService::StaticRegisterNativesUDetectService()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDetectService);
	UClass* Z_Construct_UClass_UDetectService_NoRegister()
	{
		return UDetectService::StaticClass();
	}
	struct Z_Construct_UClass_UDetectService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDetectService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetectService_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DetectService.h" },
		{ "ModuleRelativePath", "Public/DetectService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDetectService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetectService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDetectService_Statics::ClassParams = {
		&UDetectService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDetectService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDetectService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDetectService()
	{
		if (!Z_Registration_Info_UClass_UDetectService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDetectService.OuterSingleton, Z_Construct_UClass_UDetectService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDetectService.OuterSingleton;
	}
	template<> MINIPROJECT_API UClass* StaticClass<UDetectService>()
	{
		return UDetectService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDetectService);
	struct Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_DetectService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_DetectService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDetectService, UDetectService::StaticClass, TEXT("UDetectService"), &Z_Registration_Info_UClass_UDetectService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDetectService), 1847613396U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_DetectService_h_4178716782(TEXT("/Script/MiniProject"),
		Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_DetectService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_DetectService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
