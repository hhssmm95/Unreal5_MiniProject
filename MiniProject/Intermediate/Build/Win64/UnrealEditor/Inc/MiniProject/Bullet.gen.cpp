// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniProject/Public/Bullet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBullet() {}
// Cross Module References
	MINIPROJECT_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	MINIPROJECT_API UClass* Z_Construct_UClass_ABullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MiniProject();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABullet::execOnBulletHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBulletHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void ABullet::StaticRegisterNativesABullet()
	{
		UClass* Class = ABullet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBulletHit", &ABullet::execOnBulletHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABullet_OnBulletHit_Statics
	{
		struct Bullet_eventOnBulletHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bullet_eventOnBulletHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_HitComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bullet_eventOnBulletHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bullet_eventOnBulletHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bullet_eventOnBulletHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bullet_eventOnBulletHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABullet_OnBulletHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnBulletHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABullet_OnBulletHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Bullet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABullet_OnBulletHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABullet, nullptr, "OnBulletHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABullet_OnBulletHit_Statics::Bullet_eventOnBulletHit_Parms), Z_Construct_UFunction_ABullet_OnBulletHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_OnBulletHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABullet_OnBulletHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_OnBulletHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABullet_OnBulletHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABullet_OnBulletHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABullet);
	UClass* Z_Construct_UClass_ABullet_NoRegister()
	{
		return ABullet::StaticClass();
	}
	struct Z_Construct_UClass_ABullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Movement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletBody_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletBody;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShooterPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShooterPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABullet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABullet_OnBulletHit, "OnBulletHit" }, // 3755594577
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bullet.h" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Statics::NewProp_Movement_MetaData[] = {
		{ "Category", "Bullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABullet, Movement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABullet_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::NewProp_Movement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Statics::NewProp_BulletParticle_MetaData[] = {
		{ "Category", "Bullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_BulletParticle = { "BulletParticle", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABullet, BulletParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABullet_Statics::NewProp_BulletParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::NewProp_BulletParticle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Statics::NewProp_BulletBody_MetaData[] = {
		{ "Category", "Bullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_BulletBody = { "BulletBody", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABullet, BulletBody), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABullet_Statics::NewProp_BulletBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::NewProp_BulletBody_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Statics::NewProp_HitParticle_MetaData[] = {
		{ "Category", "BulletInfo" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_HitParticle = { "HitParticle", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABullet, HitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABullet_Statics::NewProp_HitParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::NewProp_HitParticle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Statics::NewProp_BulletSpeed_MetaData[] = {
		{ "Category", "BulletInfo" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_BulletSpeed = { "BulletSpeed", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABullet, BulletSpeed), METADATA_PARAMS(Z_Construct_UClass_ABullet_Statics::NewProp_BulletSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::NewProp_BulletSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Statics::NewProp_BulletDamage_MetaData[] = {
		{ "Category", "BulletInfo" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_BulletDamage = { "BulletDamage", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABullet, BulletDamage), METADATA_PARAMS(Z_Construct_UClass_ABullet_Statics::NewProp_BulletDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::NewProp_BulletDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullet_Statics::NewProp_ShooterPawn_MetaData[] = {
		{ "Category", "BulletInfo" },
		{ "ModuleRelativePath", "Public/Bullet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_ShooterPawn = { "ShooterPawn", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABullet, ShooterPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABullet_Statics::NewProp_ShooterPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::NewProp_ShooterPawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABullet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_Movement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_BulletParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_BulletBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_HitParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_BulletSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_BulletDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_ShooterPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABullet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABullet_Statics::ClassParams = {
		&ABullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABullet()
	{
		if (!Z_Registration_Info_UClass_ABullet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABullet.OuterSingleton, Z_Construct_UClass_ABullet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABullet.OuterSingleton;
	}
	template<> MINIPROJECT_API UClass* StaticClass<ABullet>()
	{
		return ABullet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABullet);
	struct Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_Bullet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_Bullet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABullet, ABullet::StaticClass, TEXT("ABullet"), &Z_Registration_Info_UClass_ABullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABullet), 1271565396U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_Bullet_h_4148518226(TEXT("/Script/MiniProject"),
		Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_Bullet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniProject_Source_MiniProject_Public_Bullet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
