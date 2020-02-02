// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ20/Public/Rivet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRivet() {}
// Cross Module References
	GGJ20_API UClass* Z_Construct_UClass_ARivet_NoRegister();
	GGJ20_API UClass* Z_Construct_UClass_ARivet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GGJ20();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ARivet::StaticRegisterNativesARivet()
	{
	}
	UClass* Z_Construct_UClass_ARivet_NoRegister()
	{
		return ARivet::StaticClass();
	}
	struct Z_Construct_UClass_ARivet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rCollider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARivet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ20,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARivet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Rivet.h" },
		{ "ModuleRelativePath", "Public/Rivet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARivet_Statics::NewProp_rCollider_MetaData[] = {
		{ "Category", "Rivet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rivet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARivet_Statics::NewProp_rCollider = { "rCollider", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARivet, rCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARivet_Statics::NewProp_rCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARivet_Statics::NewProp_rCollider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARivet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARivet_Statics::NewProp_rCollider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARivet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARivet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARivet_Statics::ClassParams = {
		&ARivet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARivet_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ARivet_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ARivet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARivet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARivet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARivet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARivet, 425657582);
	template<> GGJ20_API UClass* StaticClass<ARivet>()
	{
		return ARivet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARivet(Z_Construct_UClass_ARivet, &ARivet::StaticClass, TEXT("/Script/GGJ20"), TEXT("ARivet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARivet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
