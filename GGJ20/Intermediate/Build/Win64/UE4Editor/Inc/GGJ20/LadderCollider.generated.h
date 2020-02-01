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
#ifdef GGJ20_LadderCollider_generated_h
#error "LadderCollider.generated.h already included, missing '#pragma once' in LadderCollider.h"
#endif
#define GGJ20_LadderCollider_generated_h

#define GGJ20_Source_GGJ20_Public_LadderCollider_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
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


#define GGJ20_Source_GGJ20_Public_LadderCollider_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
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


#define GGJ20_Source_GGJ20_Public_LadderCollider_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALadderCollider(); \
	friend struct Z_Construct_UClass_ALadderCollider_Statics; \
public: \
	DECLARE_CLASS(ALadderCollider, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ20"), NO_API) \
	DECLARE_SERIALIZER(ALadderCollider)


#define GGJ20_Source_GGJ20_Public_LadderCollider_h_16_INCLASS \
private: \
	static void StaticRegisterNativesALadderCollider(); \
	friend struct Z_Construct_UClass_ALadderCollider_Statics; \
public: \
	DECLARE_CLASS(ALadderCollider, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GGJ20"), NO_API) \
	DECLARE_SERIALIZER(ALadderCollider)


#define GGJ20_Source_GGJ20_Public_LadderCollider_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALadderCollider(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALadderCollider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALadderCollider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALadderCollider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALadderCollider(ALadderCollider&&); \
	NO_API ALadderCollider(const ALadderCollider&); \
public:


#define GGJ20_Source_GGJ20_Public_LadderCollider_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALadderCollider(ALadderCollider&&); \
	NO_API ALadderCollider(const ALadderCollider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALadderCollider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALadderCollider); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALadderCollider)


#define GGJ20_Source_GGJ20_Public_LadderCollider_h_16_PRIVATE_PROPERTY_OFFSET
#define GGJ20_Source_GGJ20_Public_LadderCollider_h_13_PROLOG
#define GGJ20_Source_GGJ20_Public_LadderCollider_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ20_Source_GGJ20_Public_LadderCollider_h_16_PRIVATE_PROPERTY_OFFSET \
	GGJ20_Source_GGJ20_Public_LadderCollider_h_16_RPC_WRAPPERS \
	GGJ20_Source_GGJ20_Public_LadderCollider_h_16_INCLASS \
	GGJ20_Source_GGJ20_Public_LadderCollider_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GGJ20_Source_GGJ20_Public_LadderCollider_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ20_Source_GGJ20_Public_LadderCollider_h_16_PRIVATE_PROPERTY_OFFSET \
	GGJ20_Source_GGJ20_Public_LadderCollider_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GGJ20_Source_GGJ20_Public_LadderCollider_h_16_INCLASS_NO_PURE_DECLS \
	GGJ20_Source_GGJ20_Public_LadderCollider_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGJ20_API UClass* StaticClass<class ALadderCollider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GGJ20_Source_GGJ20_Public_LadderCollider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
