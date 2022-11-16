// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventoryItemData;
#ifdef MINIPROJECT_InventoryItem_generated_h
#error "InventoryItem.generated.h already included, missing '#pragma once' in InventoryItem.h"
#endif
#define MINIPROJECT_InventoryItem_generated_h

#define FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_14_SPARSE_DATA
#define FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetData);


#define FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetData);


#define FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryItem(); \
	friend struct Z_Construct_UClass_UInventoryItem_Statics; \
public: \
	DECLARE_CLASS(UInventoryItem, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MiniProject"), NO_API) \
	DECLARE_SERIALIZER(UInventoryItem) \
	virtual UObject* _getUObject() const override { return const_cast<UInventoryItem*>(this); }


#define FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryItem(); \
	friend struct Z_Construct_UClass_UInventoryItem_Statics; \
public: \
	DECLARE_CLASS(UInventoryItem, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MiniProject"), NO_API) \
	DECLARE_SERIALIZER(UInventoryItem) \
	virtual UObject* _getUObject() const override { return const_cast<UInventoryItem*>(this); }


#define FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryItem(UInventoryItem&&); \
	NO_API UInventoryItem(const UInventoryItem&); \
public:


#define FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryItem(UInventoryItem&&); \
	NO_API UInventoryItem(const UInventoryItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryItem); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryItem)


#define FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_11_PROLOG
#define FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_14_SPARSE_DATA \
	FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_14_RPC_WRAPPERS \
	FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_14_INCLASS \
	FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_14_SPARSE_DATA \
	FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_14_INCLASS_NO_PURE_DECLS \
	FID_MiniProject_Source_MiniProject_Public_InventoryItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIPROJECT_API UClass* StaticClass<class UInventoryItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MiniProject_Source_MiniProject_Public_InventoryItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
