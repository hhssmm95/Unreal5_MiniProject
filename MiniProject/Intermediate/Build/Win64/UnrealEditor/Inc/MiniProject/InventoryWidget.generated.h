// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef MINIPROJECT_InventoryWidget_generated_h
#error "InventoryWidget.generated.h already included, missing '#pragma once' in InventoryWidget.h"
#endif
#define MINIPROJECT_InventoryWidget_generated_h

#define FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_13_SPARSE_DATA
#define FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnItemDoubleClicked); \
	DECLARE_FUNCTION(execCloseButtonClick);


#define FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnItemDoubleClicked); \
	DECLARE_FUNCTION(execCloseButtonClick);


#define FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryWidget(); \
	friend struct Z_Construct_UClass_UInventoryWidget_Statics; \
public: \
	DECLARE_CLASS(UInventoryWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MiniProject"), NO_API) \
	DECLARE_SERIALIZER(UInventoryWidget)


#define FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryWidget(); \
	friend struct Z_Construct_UClass_UInventoryWidget_Statics; \
public: \
	DECLARE_CLASS(UInventoryWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MiniProject"), NO_API) \
	DECLARE_SERIALIZER(UInventoryWidget)


#define FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryWidget(UInventoryWidget&&); \
	NO_API UInventoryWidget(const UInventoryWidget&); \
public:


#define FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryWidget(UInventoryWidget&&); \
	NO_API UInventoryWidget(const UInventoryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryWidget)


#define FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_10_PROLOG
#define FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_13_SPARSE_DATA \
	FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_13_RPC_WRAPPERS \
	FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_13_INCLASS \
	FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_13_SPARSE_DATA \
	FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_13_INCLASS_NO_PURE_DECLS \
	FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIPROJECT_API UClass* StaticClass<class UInventoryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MiniProject_Source_MiniProject_Public_InventoryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
