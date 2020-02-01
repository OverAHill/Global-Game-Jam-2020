// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGJ20_IRepairableBase_generated_h
#error "IRepairableBase.generated.h already included, missing '#pragma once' in IRepairableBase.h"
#endif
#define GGJ20_IRepairableBase_generated_h

#define GGJ20_Source_GGJ20_Public_IRepairableBase_h_24_RPC_WRAPPERS
#define GGJ20_Source_GGJ20_Public_IRepairableBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define GGJ20_Source_GGJ20_Public_IRepairableBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIRepairableBase(); \
	friend struct Z_Construct_UClass_AIRepairableBase_Statics; \
public: \
	DECLARE_CLASS(AIRepairableBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ20"), NO_API) \
	DECLARE_SERIALIZER(AIRepairableBase)


#define GGJ20_Source_GGJ20_Public_IRepairableBase_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAIRepairableBase(); \
	friend struct Z_Construct_UClass_AIRepairableBase_Statics; \
public: \
	DECLARE_CLASS(AIRepairableBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ20"), NO_API) \
	DECLARE_SERIALIZER(AIRepairableBase)


#define GGJ20_Source_GGJ20_Public_IRepairableBase_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIRepairableBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIRepairableBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIRepairableBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIRepairableBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIRepairableBase(AIRepairableBase&&); \
	NO_API AIRepairableBase(const AIRepairableBase&); \
public:


#define GGJ20_Source_GGJ20_Public_IRepairableBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIRepairableBase(AIRepairableBase&&); \
	NO_API AIRepairableBase(const AIRepairableBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIRepairableBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIRepairableBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIRepairableBase)


#define GGJ20_Source_GGJ20_Public_IRepairableBase_h_24_PRIVATE_PROPERTY_OFFSET
#define GGJ20_Source_GGJ20_Public_IRepairableBase_h_21_PROLOG
#define GGJ20_Source_GGJ20_Public_IRepairableBase_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ20_Source_GGJ20_Public_IRepairableBase_h_24_PRIVATE_PROPERTY_OFFSET \
	GGJ20_Source_GGJ20_Public_IRepairableBase_h_24_RPC_WRAPPERS \
	GGJ20_Source_GGJ20_Public_IRepairableBase_h_24_INCLASS \
	GGJ20_Source_GGJ20_Public_IRepairableBase_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GGJ20_Source_GGJ20_Public_IRepairableBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ20_Source_GGJ20_Public_IRepairableBase_h_24_PRIVATE_PROPERTY_OFFSET \
	GGJ20_Source_GGJ20_Public_IRepairableBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	GGJ20_Source_GGJ20_Public_IRepairableBase_h_24_INCLASS_NO_PURE_DECLS \
	GGJ20_Source_GGJ20_Public_IRepairableBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGJ20_API UClass* StaticClass<class AIRepairableBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GGJ20_Source_GGJ20_Public_IRepairableBase_h


#define FOREACH_ENUM_REPAIRTYPES(op) \
	op(RepairTypes::NOT_IMPLEMENTED) \
	op(RepairTypes::HULL_REPAIR) \
	op(RepairTypes::GENERATOR_REPAIR) \
	op(RepairTypes::DEFENSE_SYSTEM_REPAIR) \
	op(RepairTypes::ENGINE_REPAIR) 

enum class RepairTypes : uint8;
template<> GGJ20_API UEnum* StaticEnum<RepairTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
