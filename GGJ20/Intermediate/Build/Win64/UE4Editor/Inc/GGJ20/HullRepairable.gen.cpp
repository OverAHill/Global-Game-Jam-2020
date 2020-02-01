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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHullRepairable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHullRepairable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHullRepairable_Statics::ClassParams = {
		&AHullRepairable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AHullRepairable, 2598022124);
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
