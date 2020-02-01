// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ20/Public/GeneratorRepairable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratorRepairable() {}
// Cross Module References
	GGJ20_API UClass* Z_Construct_UClass_AGeneratorRepairable_NoRegister();
	GGJ20_API UClass* Z_Construct_UClass_AGeneratorRepairable();
	GGJ20_API UClass* Z_Construct_UClass_AIRepairableBase();
	UPackage* Z_Construct_UPackage__Script_GGJ20();
// End Cross Module References
	void AGeneratorRepairable::StaticRegisterNativesAGeneratorRepairable()
	{
	}
	UClass* Z_Construct_UClass_AGeneratorRepairable_NoRegister()
	{
		return AGeneratorRepairable::StaticClass();
	}
	struct Z_Construct_UClass_AGeneratorRepairable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneratorRepairable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AIRepairableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ20,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorRepairable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeneratorRepairable.h" },
		{ "ModuleRelativePath", "Public/GeneratorRepairable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneratorRepairable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneratorRepairable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneratorRepairable_Statics::ClassParams = {
		&AGeneratorRepairable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGeneratorRepairable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGeneratorRepairable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneratorRepairable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneratorRepairable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneratorRepairable, 1435806405);
	template<> GGJ20_API UClass* StaticClass<AGeneratorRepairable>()
	{
		return AGeneratorRepairable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneratorRepairable(Z_Construct_UClass_AGeneratorRepairable, &AGeneratorRepairable::StaticClass, TEXT("/Script/GGJ20"), TEXT("AGeneratorRepairable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneratorRepairable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
