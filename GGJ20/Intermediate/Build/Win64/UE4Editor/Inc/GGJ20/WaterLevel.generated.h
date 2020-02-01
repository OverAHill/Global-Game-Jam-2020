// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGJ20_WaterLevel_generated_h
#error "WaterLevel.generated.h already included, missing '#pragma once' in WaterLevel.h"
#endif
#define GGJ20_WaterLevel_generated_h

#define GGJ20_Source_GGJ20_Public_WaterLevel_h_14_RPC_WRAPPERS
#define GGJ20_Source_GGJ20_Public_WaterLevel_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define GGJ20_Source_GGJ20_Public_WaterLevel_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaterLevel(); \
	friend struct Z_Construct_UClass_AWaterLevel_Statics; \
public: \
	DECLARE_CLASS(AWaterLevel, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ20"), NO_API) \
	DECLARE_SERIALIZER(AWaterLevel)


#define GGJ20_Source_GGJ20_Public_WaterLevel_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAWaterLevel(); \
	friend struct Z_Construct_UClass_AWaterLevel_Statics; \
public: \
	DECLARE_CLASS(AWaterLevel, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ20"), NO_API) \
	DECLARE_SERIALIZER(AWaterLevel)


#define GGJ20_Source_GGJ20_Public_WaterLevel_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterLevel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterLevel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterLevel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterLevel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterLevel(AWaterLevel&&); \
	NO_API AWaterLevel(const AWaterLevel&); \
public:


#define GGJ20_Source_GGJ20_Public_WaterLevel_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterLevel(AWaterLevel&&); \
	NO_API AWaterLevel(const AWaterLevel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterLevel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterLevel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWaterLevel)


#define GGJ20_Source_GGJ20_Public_WaterLevel_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WaterMesh() { return STRUCT_OFFSET(AWaterLevel, WaterMesh); } \
	FORCEINLINE static uint32 __PPO__positionOffsetY() { return STRUCT_OFFSET(AWaterLevel, positionOffsetY); } \
	FORCEINLINE static uint32 __PPO__fillSpeed() { return STRUCT_OFFSET(AWaterLevel, fillSpeed); }


#define GGJ20_Source_GGJ20_Public_WaterLevel_h_11_PROLOG
#define GGJ20_Source_GGJ20_Public_WaterLevel_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ20_Source_GGJ20_Public_WaterLevel_h_14_PRIVATE_PROPERTY_OFFSET \
	GGJ20_Source_GGJ20_Public_WaterLevel_h_14_RPC_WRAPPERS \
	GGJ20_Source_GGJ20_Public_WaterLevel_h_14_INCLASS \
	GGJ20_Source_GGJ20_Public_WaterLevel_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GGJ20_Source_GGJ20_Public_WaterLevel_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ20_Source_GGJ20_Public_WaterLevel_h_14_PRIVATE_PROPERTY_OFFSET \
	GGJ20_Source_GGJ20_Public_WaterLevel_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GGJ20_Source_GGJ20_Public_WaterLevel_h_14_INCLASS_NO_PURE_DECLS \
	GGJ20_Source_GGJ20_Public_WaterLevel_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGJ20_API UClass* StaticClass<class AWaterLevel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GGJ20_Source_GGJ20_Public_WaterLevel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
