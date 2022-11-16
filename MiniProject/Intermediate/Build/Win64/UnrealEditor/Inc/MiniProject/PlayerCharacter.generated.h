// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINIPROJECT_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define MINIPROJECT_PlayerCharacter_generated_h

#define FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_9_DELEGATE \
struct _Script_MiniProject_eventDynamicMultiDele_Parms \
{ \
	float MaxHP; \
	float CurrentHP; \
}; \
static inline void FDynamicMultiDele_DelegateWrapper(const FMulticastScriptDelegate& DynamicMultiDele, float MaxHP, float CurrentHP) \
{ \
	_Script_MiniProject_eventDynamicMultiDele_Parms Parms; \
	Parms.MaxHP=MaxHP; \
	Parms.CurrentHP=CurrentHP; \
	DynamicMultiDele.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_14_SPARSE_DATA
#define FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_14_RPC_WRAPPERS
#define FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MiniProject"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MiniProject"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_11_PROLOG
#define FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_14_SPARSE_DATA \
	FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_14_RPC_WRAPPERS \
	FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_14_INCLASS \
	FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_14_SPARSE_DATA \
	FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIPROJECT_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MiniProject_Source_MiniProject_Public_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
