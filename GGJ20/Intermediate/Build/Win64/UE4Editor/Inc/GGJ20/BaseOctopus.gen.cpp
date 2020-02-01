// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ20/Public/BaseOctopus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseOctopus() {}
// Cross Module References
	GGJ20_API UClass* Z_Construct_UClass_ABaseOctopus_NoRegister();
	GGJ20_API UClass* Z_Construct_UClass_ABaseOctopus();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GGJ20();
// End Cross Module References
	void ABaseOctopus::StaticRegisterNativesABaseOctopus()
	{
	}
	UClass* Z_Construct_UClass_ABaseOctopus_NoRegister()
	{
		return ABaseOctopus::StaticClass();
	}
	struct Z_Construct_UClass_ABaseOctopus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeSinceLastFind_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeSinceLastFind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wanderFindNewPointTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_wanderFindNewPointTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wanderRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_wanderRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wanderCastDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_wanderCastDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_movementSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseOctopus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ20,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseOctopus_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseOctopus.h" },
		{ "ModuleRelativePath", "Public/BaseOctopus.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseOctopus_Statics::NewProp_timeSinceLastFind_MetaData[] = {
		{ "Category", "BaseOctopus" },
		{ "ModuleRelativePath", "Public/BaseOctopus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseOctopus_Statics::NewProp_timeSinceLastFind = { "timeSinceLastFind", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseOctopus, timeSinceLastFind), METADATA_PARAMS(Z_Construct_UClass_ABaseOctopus_Statics::NewProp_timeSinceLastFind_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseOctopus_Statics::NewProp_timeSinceLastFind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseOctopus_Statics::NewProp_wanderFindNewPointTime_MetaData[] = {
		{ "Category", "BaseOctopus" },
		{ "ModuleRelativePath", "Public/BaseOctopus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseOctopus_Statics::NewProp_wanderFindNewPointTime = { "wanderFindNewPointTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseOctopus, wanderFindNewPointTime), METADATA_PARAMS(Z_Construct_UClass_ABaseOctopus_Statics::NewProp_wanderFindNewPointTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseOctopus_Statics::NewProp_wanderFindNewPointTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseOctopus_Statics::NewProp_wanderRadius_MetaData[] = {
		{ "Category", "BaseOctopus" },
		{ "ModuleRelativePath", "Public/BaseOctopus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseOctopus_Statics::NewProp_wanderRadius = { "wanderRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseOctopus, wanderRadius), METADATA_PARAMS(Z_Construct_UClass_ABaseOctopus_Statics::NewProp_wanderRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseOctopus_Statics::NewProp_wanderRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseOctopus_Statics::NewProp_wanderCastDistance_MetaData[] = {
		{ "Category", "Tracking" },
		{ "ModuleRelativePath", "Public/BaseOctopus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseOctopus_Statics::NewProp_wanderCastDistance = { "wanderCastDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseOctopus, wanderCastDistance), METADATA_PARAMS(Z_Construct_UClass_ABaseOctopus_Statics::NewProp_wanderCastDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseOctopus_Statics::NewProp_wanderCastDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseOctopus_Statics::NewProp_movementSpeed_MetaData[] = {
		{ "Category", "BaseOctopus" },
		{ "ModuleRelativePath", "Public/BaseOctopus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseOctopus_Statics::NewProp_movementSpeed = { "movementSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseOctopus, movementSpeed), METADATA_PARAMS(Z_Construct_UClass_ABaseOctopus_Statics::NewProp_movementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseOctopus_Statics::NewProp_movementSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseOctopus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseOctopus_Statics::NewProp_timeSinceLastFind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseOctopus_Statics::NewProp_wanderFindNewPointTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseOctopus_Statics::NewProp_wanderRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseOctopus_Statics::NewProp_wanderCastDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseOctopus_Statics::NewProp_movementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseOctopus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseOctopus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseOctopus_Statics::ClassParams = {
		&ABaseOctopus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseOctopus_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABaseOctopus_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseOctopus_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseOctopus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseOctopus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseOctopus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseOctopus, 3662365108);
	template<> GGJ20_API UClass* StaticClass<ABaseOctopus>()
	{
		return ABaseOctopus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseOctopus(Z_Construct_UClass_ABaseOctopus, &ABaseOctopus::StaticClass, TEXT("/Script/GGJ20"), TEXT("ABaseOctopus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseOctopus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
