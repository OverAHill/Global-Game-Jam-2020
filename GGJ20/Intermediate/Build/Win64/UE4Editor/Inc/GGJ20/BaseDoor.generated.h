// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGJ20_BaseDoor_generated_h
#error "BaseDoor.generated.h already included, missing '#pragma once' in BaseDoor.h"
#endif
#define GGJ20_BaseDoor_generated_h

#define GGJ20_Source_GGJ20_Public_BaseDoor_h_12_RPC_WRAPPERS
#define GGJ20_Source_GGJ20_Public_BaseDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GGJ20_Source_GGJ20_Public_BaseDoor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseDoor(); \
	friend struct Z_Construct_UClass_ABaseDoor_Statics; \
public: \
	DECLARE_CLASS(ABaseDoor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ20"), NO_API) \
	DECLARE_SERIALIZER(ABaseDoor)


#define GGJ20_Source_GGJ20_Public_BaseDoor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseDoor(); \
	friend struct Z_Construct_UClass_ABaseDoor_Statics; \
public: \
	DECLARE_CLASS(ABaseDoor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ20"), NO_API) \
	DECLARE_SERIALIZER(ABaseDoor)


#define GGJ20_Source_GGJ20_Public_BaseDoor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseDoor(ABaseDoor&&); \
	NO_API ABaseDoor(const ABaseDoor&); \
public:


#define GGJ20_Source_GGJ20_Public_BaseDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseDoor(ABaseDoor&&); \
	NO_API ABaseDoor(const ABaseDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseDoor)


#define GGJ20_Source_GGJ20_Public_BaseDoor_h_12_PRIVATE_PROPERTY_OFFSET
#define GGJ20_Source_GGJ20_Public_BaseDoor_h_9_PROLOG
#define GGJ20_Source_GGJ20_Public_BaseDoor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ20_Source_GGJ20_Public_BaseDoor_h_12_PRIVATE_PROPERTY_OFFSET \
	GGJ20_Source_GGJ20_Public_BaseDoor_h_12_RPC_WRAPPERS \
	GGJ20_Source_GGJ20_Public_BaseDoor_h_12_INCLASS \
	GGJ20_Source_GGJ20_Public_BaseDoor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GGJ20_Source_GGJ20_Public_BaseDoor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ20_Source_GGJ20_Public_BaseDoor_h_12_PRIVATE_PROPERTY_OFFSET \
	GGJ20_Source_GGJ20_Public_BaseDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GGJ20_Source_GGJ20_Public_BaseDoor_h_12_INCLASS_NO_PURE_DECLS \
	GGJ20_Source_GGJ20_Public_BaseDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGJ20_API UClass* StaticClass<class ABaseDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GGJ20_Source_GGJ20_Public_BaseDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
