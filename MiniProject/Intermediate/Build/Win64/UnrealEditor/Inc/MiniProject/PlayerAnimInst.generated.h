// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINIPROJECT_PlayerAnimInst_generated_h
#error "PlayerAnimInst.generated.h already included, missing '#pragma once' in PlayerAnimInst.h"
#endif
#define MINIPROJECT_PlayerAnimInst_generated_h

#define FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_28_SPARSE_DATA
#define FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_OnPlayerAttackEnd); \
	DECLARE_FUNCTION(execAnimNotify_OnPlayerAttackShot); \
	DECLARE_FUNCTION(execAnimNotify_OnPlayerAttackStrike);


#define FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_OnPlayerAttackEnd); \
	DECLARE_FUNCTION(execAnimNotify_OnPlayerAttackShot); \
	DECLARE_FUNCTION(execAnimNotify_OnPlayerAttackStrike);


#define FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAnimInst(); \
	friend struct Z_Construct_UClass_UPlayerAnimInst_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnimInst, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MiniProject"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnimInst)


#define FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerAnimInst(); \
	friend struct Z_Construct_UClass_UPlayerAnimInst_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnimInst, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MiniProject"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnimInst)


#define FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAnimInst(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAnimInst) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnimInst); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnimInst); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAnimInst(UPlayerAnimInst&&); \
	NO_API UPlayerAnimInst(const UPlayerAnimInst&); \
public:


#define FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAnimInst(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAnimInst(UPlayerAnimInst&&); \
	NO_API UPlayerAnimInst(const UPlayerAnimInst&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnimInst); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnimInst); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAnimInst)


#define FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_25_PROLOG
#define FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_28_SPARSE_DATA \
	FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_28_RPC_WRAPPERS \
	FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_28_INCLASS \
	FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_28_SPARSE_DATA \
	FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_28_INCLASS_NO_PURE_DECLS \
	FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIPROJECT_API UClass* StaticClass<class UPlayerAnimInst>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MiniProject_Source_MiniProject_Public_PlayerAnimInst_h


#define FOREACH_ENUM_EPLAYERANIMTYPE(op) \
	op(EPlayerAnimType::Idle) \
	op(EPlayerAnimType::Attack) \
	op(EPlayerAnimType::RangedAttack) \
	op(EPlayerAnimType::Death) 

enum class EPlayerAnimType : uint8;
template<> MINIPROJECT_API UEnum* StaticEnum<EPlayerAnimType>();

#define FOREACH_ENUM_EPLAYERMOVETYPE(op) \
	op(EPlayerMoveType::Walk) \
	op(EPlayerMoveType::Run) 

enum class EPlayerMoveType : uint8;
template<> MINIPROJECT_API UEnum* StaticEnum<EPlayerMoveType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
