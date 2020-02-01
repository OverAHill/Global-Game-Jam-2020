// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGJ20_BasePlayer_generated_h
#error "BasePlayer.generated.h already included, missing '#pragma once' in BasePlayer.h"
#endif
#define GGJ20_BasePlayer_generated_h

#define GGJ20_Source_GGJ20_Public_BasePlayer_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOnLadder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetOnLadder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOnLadder) \
	{ \
		P_GET_UBOOL(Z_Param_b); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOnLadder(Z_Param_b); \
		P_NATIVE_END; \
	}


#define GGJ20_Source_GGJ20_Public_BasePlayer_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOnLadder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetOnLadder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOnLadder) \
	{ \
		P_GET_UBOOL(Z_Param_b); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOnLadder(Z_Param_b); \
		P_NATIVE_END; \
	}


#define GGJ20_Source_GGJ20_Public_BasePlayer_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayer(); \
	friend struct Z_Construct_UClass_ABasePlayer_Statics; \
public: \
	DECLARE_CLASS(ABasePlayer, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ20"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayer)


#define GGJ20_Source_GGJ20_Public_BasePlayer_h_28_INCLASS \
private: \
	static void StaticRegisterNativesABasePlayer(); \
	friend struct Z_Construct_UClass_ABasePlayer_Statics; \
public: \
	DECLARE_CLASS(ABasePlayer, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ20"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayer)


#define GGJ20_Source_GGJ20_Public_BasePlayer_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayer(ABasePlayer&&); \
	NO_API ABasePlayer(const ABasePlayer&); \
public:


#define GGJ20_Source_GGJ20_Public_BasePlayer_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayer(ABasePlayer&&); \
	NO_API ABasePlayer(const ABasePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePlayer)


#define GGJ20_Source_GGJ20_Public_BasePlayer_h_28_PRIVATE_PROPERTY_OFFSET
#define GGJ20_Source_GGJ20_Public_BasePlayer_h_25_PROLOG
#define GGJ20_Source_GGJ20_Public_BasePlayer_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ20_Source_GGJ20_Public_BasePlayer_h_28_PRIVATE_PROPERTY_OFFSET \
	GGJ20_Source_GGJ20_Public_BasePlayer_h_28_RPC_WRAPPERS \
	GGJ20_Source_GGJ20_Public_BasePlayer_h_28_INCLASS \
	GGJ20_Source_GGJ20_Public_BasePlayer_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GGJ20_Source_GGJ20_Public_BasePlayer_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ20_Source_GGJ20_Public_BasePlayer_h_28_PRIVATE_PROPERTY_OFFSET \
	GGJ20_Source_GGJ20_Public_BasePlayer_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	GGJ20_Source_GGJ20_Public_BasePlayer_h_28_INCLASS_NO_PURE_DECLS \
	GGJ20_Source_GGJ20_Public_BasePlayer_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGJ20_API UClass* StaticClass<class ABasePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GGJ20_Source_GGJ20_Public_BasePlayer_h


#define FOREACH_ENUM_TOOLS(op) \
	op(Tools::NO_TOOL) \
	op(Tools::FIRE_EX) \
	op(Tools::WELDER) \
	op(Tools::RIVET_GUN) \
	op(Tools::HAMMER) 

enum class Tools : uint8;
template<> GGJ20_API UEnum* StaticEnum<Tools>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
