// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGJ20_BaseRoom_generated_h
#error "BaseRoom.generated.h already included, missing '#pragma once' in BaseRoom.h"
#endif
#define GGJ20_BaseRoom_generated_h

#define GGJ20_Source_GGJ20_Public_BaseRoom_h_12_RPC_WRAPPERS
#define GGJ20_Source_GGJ20_Public_BaseRoom_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GGJ20_Source_GGJ20_Public_BaseRoom_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseRoom(); \
	friend struct Z_Construct_UClass_ABaseRoom_Statics; \
public: \
	DECLARE_CLASS(ABaseRoom, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ20"), NO_API) \
	DECLARE_SERIALIZER(ABaseRoom)


#define GGJ20_Source_GGJ20_Public_BaseRoom_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseRoom(); \
	friend struct Z_Construct_UClass_ABaseRoom_Statics; \
public: \
	DECLARE_CLASS(ABaseRoom, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ20"), NO_API) \
	DECLARE_SERIALIZER(ABaseRoom)


#define GGJ20_Source_GGJ20_Public_BaseRoom_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseRoom(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseRoom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseRoom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseRoom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseRoom(ABaseRoom&&); \
	NO_API ABaseRoom(const ABaseRoom&); \
public:


#define GGJ20_Source_GGJ20_Public_BaseRoom_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseRoom(ABaseRoom&&); \
	NO_API ABaseRoom(const ABaseRoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseRoom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseRoom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseRoom)


#define GGJ20_Source_GGJ20_Public_BaseRoom_h_12_PRIVATE_PROPERTY_OFFSET
#define GGJ20_Source_GGJ20_Public_BaseRoom_h_9_PROLOG
#define GGJ20_Source_GGJ20_Public_BaseRoom_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ20_Source_GGJ20_Public_BaseRoom_h_12_PRIVATE_PROPERTY_OFFSET \
	GGJ20_Source_GGJ20_Public_BaseRoom_h_12_RPC_WRAPPERS \
	GGJ20_Source_GGJ20_Public_BaseRoom_h_12_INCLASS \
	GGJ20_Source_GGJ20_Public_BaseRoom_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GGJ20_Source_GGJ20_Public_BaseRoom_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ20_Source_GGJ20_Public_BaseRoom_h_12_PRIVATE_PROPERTY_OFFSET \
	GGJ20_Source_GGJ20_Public_BaseRoom_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GGJ20_Source_GGJ20_Public_BaseRoom_h_12_INCLASS_NO_PURE_DECLS \
	GGJ20_Source_GGJ20_Public_BaseRoom_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGJ20_API UClass* StaticClass<class ABaseRoom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GGJ20_Source_GGJ20_Public_BaseRoom_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
