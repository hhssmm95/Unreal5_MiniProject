// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINIPROJECT_PlayerHUDWidget_generated_h
#error "PlayerHUDWidget.generated.h already included, missing '#pragma once' in PlayerHUDWidget.h"
#endif
#define MINIPROJECT_PlayerHUDWidget_generated_h

#define FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_15_SPARSE_DATA
#define FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetNickname); \
	DECLARE_FUNCTION(execSetHPAmount);


#define FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNickname); \
	DECLARE_FUNCTION(execSetHPAmount);


#define FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerHUDWidget(); \
	friend struct Z_Construct_UClass_UPlayerHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MiniProject"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHUDWidget)


#define FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerHUDWidget(); \
	friend struct Z_Construct_UClass_UPlayerHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MiniProject"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHUDWidget)


#define FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerHUDWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerHUDWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerHUDWidget(UPlayerHUDWidget&&); \
	NO_API UPlayerHUDWidget(const UPlayerHUDWidget&); \
public:


#define FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerHUDWidget(UPlayerHUDWidget&&); \
	NO_API UPlayerHUDWidget(const UPlayerHUDWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerHUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerHUDWidget)


#define FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_12_PROLOG
#define FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_15_SPARSE_DATA \
	FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_15_RPC_WRAPPERS \
	FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_15_INCLASS \
	FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_15_SPARSE_DATA \
	FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIPROJECT_API UClass* StaticClass<class UPlayerHUDWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MiniProject_Source_MiniProject_Public_PlayerHUDWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
