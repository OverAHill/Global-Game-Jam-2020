// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef GGJ20_BaseOctopus_generated_h
#error "BaseOctopus.generated.h already included, missing '#pragma once' in BaseOctopus.h"
#endif
#define GGJ20_BaseOctopus_generated_h

#define GGJ20_Source_GGJ20_Public_BaseOctopus_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define GGJ20_Source_GGJ20_Public_BaseOctopus_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define GGJ20_Source_GGJ20_Public_BaseOctopus_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseOctopus(); \
	friend struct Z_Construct_UClass_ABaseOctopus_Statics; \
public: \
	DECLARE_CLASS(ABaseOctopus, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ20"), NO_API) \
	DECLARE_SERIALIZER(ABaseOctopus)


#define GGJ20_Source_GGJ20_Public_BaseOctopus_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABaseOctopus(); \
	friend struct Z_Construct_UClass_ABaseOctopus_Statics; \
public: \
	DECLARE_CLASS(ABaseOctopus, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ20"), NO_API) \
	DECLARE_SERIALIZER(ABaseOctopus)


#define GGJ20_Source_GGJ20_Public_BaseOctopus_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseOctopus(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseOctopus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseOctopus); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseOctopus); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseOctopus(ABaseOctopus&&); \
	NO_API ABaseOctopus(const ABaseOctopus&); \
public:


#define GGJ20_Source_GGJ20_Public_BaseOctopus_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseOctopus(ABaseOctopus&&); \
	NO_API ABaseOctopus(const ABaseOctopus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseOctopus); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseOctopus); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseOctopus)


#define GGJ20_Source_GGJ20_Public_BaseOctopus_h_14_PRIVATE_PROPERTY_OFFSET
#define GGJ20_Source_GGJ20_Public_BaseOctopus_h_11_PROLOG
#define GGJ20_Source_GGJ20_Public_BaseOctopus_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ20_Source_GGJ20_Public_BaseOctopus_h_14_PRIVATE_PROPERTY_OFFSET \
	GGJ20_Source_GGJ20_Public_BaseOctopus_h_14_RPC_WRAPPERS \
	GGJ20_Source_GGJ20_Public_BaseOctopus_h_14_INCLASS \
	GGJ20_Source_GGJ20_Public_BaseOctopus_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GGJ20_Source_GGJ20_Public_BaseOctopus_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ20_Source_GGJ20_Public_BaseOctopus_h_14_PRIVATE_PROPERTY_OFFSET \
	GGJ20_Source_GGJ20_Public_BaseOctopus_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GGJ20_Source_GGJ20_Public_BaseOctopus_h_14_INCLASS_NO_PURE_DECLS \
	GGJ20_Source_GGJ20_Public_BaseOctopus_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGJ20_API UClass* StaticClass<class ABaseOctopus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GGJ20_Source_GGJ20_Public_BaseOctopus_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
