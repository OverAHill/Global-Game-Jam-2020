// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARivet;
#ifdef GGJ20_HullRepairable_generated_h
#error "HullRepairable.generated.h already included, missing '#pragma once' in HullRepairable.h"
#endif
#define GGJ20_HullRepairable_generated_h

#define GGJ20_Source_GGJ20_Public_HullRepairable_h_19_RPC_WRAPPERS
#define GGJ20_Source_GGJ20_Public_HullRepairable_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define GGJ20_Source_GGJ20_Public_HullRepairable_h_19_EVENT_PARMS \
	struct HullRepairable_eventHitRivets_Parms \
	{ \
		ARivet* hitRivet; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HullRepairable_eventHitRivets_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define GGJ20_Source_GGJ20_Public_HullRepairable_h_19_CALLBACK_WRAPPERS
#define GGJ20_Source_GGJ20_Public_HullRepairable_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHullRepairable(); \
	friend struct Z_Construct_UClass_AHullRepairable_Statics; \
public: \
	DECLARE_CLASS(AHullRepairable, AIRepairableBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ20"), NO_API) \
	DECLARE_SERIALIZER(AHullRepairable)


#define GGJ20_Source_GGJ20_Public_HullRepairable_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAHullRepairable(); \
	friend struct Z_Construct_UClass_AHullRepairable_Statics; \
public: \
	DECLARE_CLASS(AHullRepairable, AIRepairableBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ20"), NO_API) \
	DECLARE_SERIALIZER(AHullRepairable)


#define GGJ20_Source_GGJ20_Public_HullRepairable_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHullRepairable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHullRepairable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHullRepairable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHullRepairable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHullRepairable(AHullRepairable&&); \
	NO_API AHullRepairable(const AHullRepairable&); \
public:


#define GGJ20_Source_GGJ20_Public_HullRepairable_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHullRepairable(AHullRepairable&&); \
	NO_API AHullRepairable(const AHullRepairable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHullRepairable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHullRepairable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHullRepairable)


#define GGJ20_Source_GGJ20_Public_HullRepairable_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ULRivet() { return STRUCT_OFFSET(AHullRepairable, ULRivet); } \
	FORCEINLINE static uint32 __PPO__URRivet() { return STRUCT_OFFSET(AHullRepairable, URRivet); } \
	FORCEINLINE static uint32 __PPO__LLRivet() { return STRUCT_OFFSET(AHullRepairable, LLRivet); } \
	FORCEINLINE static uint32 __PPO__LRRivet() { return STRUCT_OFFSET(AHullRepairable, LRRivet); }


#define GGJ20_Source_GGJ20_Public_HullRepairable_h_16_PROLOG \
	GGJ20_Source_GGJ20_Public_HullRepairable_h_19_EVENT_PARMS


#define GGJ20_Source_GGJ20_Public_HullRepairable_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ20_Source_GGJ20_Public_HullRepairable_h_19_PRIVATE_PROPERTY_OFFSET \
	GGJ20_Source_GGJ20_Public_HullRepairable_h_19_RPC_WRAPPERS \
	GGJ20_Source_GGJ20_Public_HullRepairable_h_19_CALLBACK_WRAPPERS \
	GGJ20_Source_GGJ20_Public_HullRepairable_h_19_INCLASS \
	GGJ20_Source_GGJ20_Public_HullRepairable_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GGJ20_Source_GGJ20_Public_HullRepairable_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ20_Source_GGJ20_Public_HullRepairable_h_19_PRIVATE_PROPERTY_OFFSET \
	GGJ20_Source_GGJ20_Public_HullRepairable_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	GGJ20_Source_GGJ20_Public_HullRepairable_h_19_CALLBACK_WRAPPERS \
	GGJ20_Source_GGJ20_Public_HullRepairable_h_19_INCLASS_NO_PURE_DECLS \
	GGJ20_Source_GGJ20_Public_HullRepairable_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGJ20_API UClass* StaticClass<class AHullRepairable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GGJ20_Source_GGJ20_Public_HullRepairable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
