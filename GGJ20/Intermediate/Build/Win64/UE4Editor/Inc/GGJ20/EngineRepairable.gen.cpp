// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ20/Public/EngineRepairable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineRepairable() {}
// Cross Module References
	GGJ20_API UClass* Z_Construct_UClass_AEngineRepairable_NoRegister();
	GGJ20_API UClass* Z_Construct_UClass_AEngineRepairable();
	GGJ20_API UClass* Z_Construct_UClass_AIRepairableBase();
	UPackage* Z_Construct_UPackage__Script_GGJ20();
	GGJ20_API UClass* Z_Construct_UClass_AWeldingPoint_NoRegister();
// End Cross Module References
	void AEngineRepairable::StaticRegisterNativesAEngineRepairable()
	{
	}
	UClass* Z_Construct_UClass_AEngineRepairable_NoRegister()
	{
		return AEngineRepairable::StaticClass();
	}
	struct Z_Construct_UClass_AEngineRepairable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_visibleTing_MetaData[];
#endif
		static void NewProp_visibleTing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visibleTing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weldingPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_weldingPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_weldingPoints_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEngineRepairable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AIRepairableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ20,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEngineRepairable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EngineRepairable.h" },
		{ "ModuleRelativePath", "Public/EngineRepairable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEngineRepairable_Statics::NewProp_visibleTing_MetaData[] = {
		{ "Category", "EngineRepairable" },
		{ "ModuleRelativePath", "Public/EngineRepairable.h" },
	};
#endif
	void Z_Construct_UClass_AEngineRepairable_Statics::NewProp_visibleTing_SetBit(void* Obj)
	{
		((AEngineRepairable*)Obj)->visibleTing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEngineRepairable_Statics::NewProp_visibleTing = { "visibleTing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEngineRepairable), &Z_Construct_UClass_AEngineRepairable_Statics::NewProp_visibleTing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEngineRepairable_Statics::NewProp_visibleTing_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEngineRepairable_Statics::NewProp_visibleTing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEngineRepairable_Statics::NewProp_weldingPoints_MetaData[] = {
		{ "Category", "EngineRepairable" },
		{ "ModuleRelativePath", "Public/EngineRepairable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEngineRepairable_Statics::NewProp_weldingPoints = { "weldingPoints", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEngineRepairable, weldingPoints), METADATA_PARAMS(Z_Construct_UClass_AEngineRepairable_Statics::NewProp_weldingPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEngineRepairable_Statics::NewProp_weldingPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineRepairable_Statics::NewProp_weldingPoints_Inner = { "weldingPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWeldingPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEngineRepairable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineRepairable_Statics::NewProp_visibleTing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineRepairable_Statics::NewProp_weldingPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineRepairable_Statics::NewProp_weldingPoints_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEngineRepairable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEngineRepairable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEngineRepairable_Statics::ClassParams = {
		&AEngineRepairable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEngineRepairable_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AEngineRepairable_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AEngineRepairable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEngineRepairable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEngineRepairable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEngineRepairable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEngineRepairable, 423714221);
	template<> GGJ20_API UClass* StaticClass<AEngineRepairable>()
	{
		return AEngineRepairable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEngineRepairable(Z_Construct_UClass_AEngineRepairable, &AEngineRepairable::StaticClass, TEXT("/Script/GGJ20"), TEXT("AEngineRepairable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEngineRepairable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
