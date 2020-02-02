// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGJ20_BaseSubmarine_generated_h
#error "BaseSubmarine.generated.h already included, missing '#pragma once' in BaseSubmarine.h"
#endif
#define GGJ20_BaseSubmarine_generated_h

#define GGJ20_Source_GGJ20_Public_BaseSubmarine_h_14_RPC_WRAPPERS
#define GGJ20_Source_GGJ20_Public_BaseSubmarine_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define GGJ20_Source_GGJ20_Public_BaseSubmarine_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseSubmarine(); \
	friend struct Z_Construct_UClass_ABaseSubmarine_Statics; \
public: \
	DECLARE_CLASS(ABaseSubmarine, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ20"), NO_API) \
	DECLARE_SERIALIZER(ABaseSubmarine)


#define GGJ20_Source_GGJ20_Public_BaseSubmarine_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABaseSubmarine(); \
	friend struct Z_Construct_UClass_ABaseSubmarine_Statics; \
public: \
	DECLARE_CLASS(ABaseSubmarine, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ20"), NO_API) \
	DECLARE_SERIALIZER(ABaseSubmarine)


#define GGJ20_Source_GGJ20_Public_BaseSubmarine_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseSubmarine(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseSubmarine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseSubmarine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseSubmarine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseSubmarine(ABaseSubmarine&&); \
	NO_API ABaseSubmarine(const ABaseSubmarine&); \
public:


#define GGJ20_Source_GGJ20_Public_BaseSubmarine_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseSubmarine(ABaseSubmarine&&); \
	NO_API ABaseSubmarine(const ABaseSubmarine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseSubmarine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseSubmarine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseSubmarine)


#define GGJ20_Source_GGJ20_Public_BaseSubmarine_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bp_MovementSpeed() { return STRUCT_OFFSET(ABaseSubmarine, bp_MovementSpeed); } \
	FORCEINLINE static uint32 __PPO__bp_DistanceFromBottom() { return STRUCT_OFFSET(ABaseSubmarine, bp_DistanceFromBottom); } \
	FORCEINLINE static uint32 __PPO__bp_DistanceTravelled() { return STRUCT_OFFSET(ABaseSubmarine, bp_DistanceTravelled); }


#define GGJ20_Source_GGJ20_Public_BaseSubmarine_h_11_PROLOG
#define GGJ20_Source_GGJ20_Public_BaseSubmarine_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ20_Source_GGJ20_Public_BaseSubmarine_h_14_PRIVATE_PROPERTY_OFFSET \
	GGJ20_Source_GGJ20_Public_BaseSubmarine_h_14_RPC_WRAPPERS \
	GGJ20_Source_GGJ20_Public_BaseSubmarine_h_14_INCLASS \
	GGJ20_Source_GGJ20_Public_BaseSubmarine_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GGJ20_Source_GGJ20_Public_BaseSubmarine_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ20_Source_GGJ20_Public_BaseSubmarine_h_14_PRIVATE_PROPERTY_OFFSET \
	GGJ20_Source_GGJ20_Public_BaseSubmarine_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GGJ20_Source_GGJ20_Public_BaseSubmarine_h_14_INCLASS_NO_PURE_DECLS \
	GGJ20_Source_GGJ20_Public_BaseSubmarine_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGJ20_API UClass* StaticClass<class ABaseSubmarine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GGJ20_Source_GGJ20_Public_BaseSubmarine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
