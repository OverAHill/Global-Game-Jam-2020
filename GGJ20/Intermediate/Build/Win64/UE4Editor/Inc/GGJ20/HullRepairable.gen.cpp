// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ20/Public/HullRepairable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHullRepairable() {}
// Cross Module References
	GGJ20_API UClass* Z_Construct_UClass_AHullRepairable_NoRegister();
	GGJ20_API UClass* Z_Construct_UClass_AHullRepairable();
	GGJ20_API UClass* Z_Construct_UClass_AIRepairableBase();
	UPackage* Z_Construct_UPackage__Script_GGJ20();
	GGJ20_API UClass* Z_Construct_UClass_AWaterLevel_NoRegister();
// End Cross Module References
	void AHullRepairable::StaticRegisterNativesAHullRepairable()
	{
	}
	UClass* Z_Construct_UClass_AHullRepairable_NoRegister()
	{
		return AHullRepairable::StaticClass();
	}
	struct Z_Construct_UClass_AHullRepairable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_refWaterLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_refWaterLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHullRepairable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AIRepairableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ20,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHullRepairable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HullRepairable.h" },
		{ "ModuleRelativePath", "Public/HullRepairable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHullRepairable_Statics::NewProp_refWaterLevel_MetaData[] = {
		{ "Category", "HullRepairable" },
		{ "ModuleRelativePath", "Public/HullRepairable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHullRepairable_Statics::NewProp_refWaterLevel = { "refWaterLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHullRepairable, refWaterLevel), Z_Construct_UClass_AWaterLevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHullRepairable_Statics::NewProp_refWaterLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHullRepairable_Statics::NewProp_refWaterLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHullRepairable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHullRepairable_Statics::NewProp_refWaterLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHullRepairable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHullRepairable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHullRepairable_Statics::ClassParams = {
		&AHullRepairable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHullRepairable_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AHullRepairable_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHullRepairable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHullRepairable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHullRepairable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHullRepairable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHullRepairable, 491528238);
	template<> GGJ20_API UClass* StaticClass<AHullRepairable>()
	{
		return AHullRepairable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHullRepairable(Z_Construct_UClass_AHullRepairable, &AHullRepairable::StaticClass, TEXT("/Script/GGJ20"), TEXT("AHullRepairable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHullRepairable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
