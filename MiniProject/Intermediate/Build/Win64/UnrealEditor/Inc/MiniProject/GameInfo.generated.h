// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINIPROJECT_GameInfo_generated_h
#error "GameInfo.generated.h already included, missing '#pragma once' in GameInfo.h"
#endif
#define MINIPROJECT_GameInfo_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MiniProject_Source_MiniProject_Public_GameInfo_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::None) \
	op(EWeaponType::Sword) \
	op(EWeaponType::Bow) 

enum class EWeaponType : uint8;
template<> MINIPROJECT_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
