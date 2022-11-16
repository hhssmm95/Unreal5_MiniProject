// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINIPROJECT_MonsterAnimInst_generated_h
#error "MonsterAnimInst.generated.h already included, missing '#pragma once' in MonsterAnimInst.h"
#endif
#define MINIPROJECT_MonsterAnimInst_generated_h

#define FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_20_SPARSE_DATA
#define FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_OnMonsterDeathEnd); \
	DECLARE_FUNCTION(execAnimNotify_OnMonsterAttackEnd); \
	DECLARE_FUNCTION(execAnimNotify_OnMonsterAttackShot);


#define FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_OnMonsterDeathEnd); \
	DECLARE_FUNCTION(execAnimNotify_OnMonsterAttackEnd); \
	DECLARE_FUNCTION(execAnimNotify_OnMonsterAttackShot);


#define FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMonsterAnimInst(); \
	friend struct Z_Construct_UClass_UMonsterAnimInst_Statics; \
public: \
	DECLARE_CLASS(UMonsterAnimInst, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MiniProject"), NO_API) \
	DECLARE_SERIALIZER(UMonsterAnimInst)


#define FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMonsterAnimInst(); \
	friend struct Z_Construct_UClass_UMonsterAnimInst_Statics; \
public: \
	DECLARE_CLASS(UMonsterAnimInst, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MiniProject"), NO_API) \
	DECLARE_SERIALIZER(UMonsterAnimInst)


#define FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMonsterAnimInst(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMonsterAnimInst) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMonsterAnimInst); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMonsterAnimInst); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMonsterAnimInst(UMonsterAnimInst&&); \
	NO_API UMonsterAnimInst(const UMonsterAnimInst&); \
public:


#define FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMonsterAnimInst(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMonsterAnimInst(UMonsterAnimInst&&); \
	NO_API UMonsterAnimInst(const UMonsterAnimInst&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMonsterAnimInst); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMonsterAnimInst); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMonsterAnimInst)


#define FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_17_PROLOG
#define FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_20_SPARSE_DATA \
	FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_20_RPC_WRAPPERS \
	FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_20_INCLASS \
	FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_20_SPARSE_DATA \
	FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_20_INCLASS_NO_PURE_DECLS \
	FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIPROJECT_API UClass* StaticClass<class UMonsterAnimInst>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MiniProject_Source_MiniProject_Public_MonsterAnimInst_h


#define FOREACH_ENUM_EMONSTERANIMTYPE(op) \
	op(EMonsterAnimType::Idle) \
	op(EMonsterAnimType::Attack) \
	op(EMonsterAnimType::Death) 

enum class EMonsterAnimType : uint8;
template<> MINIPROJECT_API UEnum* StaticEnum<EMonsterAnimType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
