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
	GGJ20_API UFunction* Z_Construct_UFunction_AHullRepairable_HitRivets();
	GGJ20_API UClass* Z_Construct_UClass_ARivet_NoRegister();
	GGJ20_API UClass* Z_Construct_UClass_AWaterLevel_NoRegister();
// End Cross Module References
	static FName NAME_AHullRepairable_HitRivets = FName(TEXT("HitRivets"));
	int32 AHullRepairable::HitRivets(ARivet* hitRivet)
	{
		HullRepairable_eventHitRivets_Parms Parms;
		Parms.hitRivet=hitRivet;
		ProcessEvent(FindFunctionChecked(NAME_AHullRepairable_HitRivets),&Parms);
		return Parms.ReturnValue;
	}
	void AHullRepairable::StaticRegisterNativesAHullRepairable()
	{
	}
	struct Z_Construct_UFunction_AHullRepairable_HitRivets_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitRivet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AHullRepairable_HitRivets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HullRepairable_eventHitRivets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHullRepairable_HitRivets_Statics::NewProp_hitRivet = { "hitRivet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HullRepairable_eventHitRivets_Parms, hitRivet), Z_Construct_UClass_ARivet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHullRepairable_HitRivets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHullRepairable_HitRivets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHullRepairable_HitRivets_Statics::NewProp_hitRivet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHullRepairable_HitRivets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mini-Games" },
		{ "ModuleRelativePath", "Public/HullRepairable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHullRepairable_HitRivets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHullRepairable, nullptr, "HitRivets", sizeof(HullRepairable_eventHitRivets_Parms), Z_Construct_UFunction_AHullRepairable_HitRivets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHullRepairable_HitRivets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHullRepairable_HitRivets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHullRepairable_HitRivets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHullRepairable_HitRivets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHullRepairable_HitRivets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHullRepairable_NoRegister()
	{
		return AHullRepairable::StaticClass();
	}
	struct Z_Construct_UClass_AHullRepairable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LRRivet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LRRivet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LLRivet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LLRivet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URRivet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_URRivet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ULRivet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ULRivet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_refWaterLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_refWaterLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rivets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rivets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Rivets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHullRepairable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AIRepairableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ20,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHullRepairable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHullRepairable_HitRivets, "HitRivets" }, // 2814557038
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHullRepairable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HullRepairable.h" },
		{ "ModuleRelativePath", "Public/HullRepairable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHullRepairable_Statics::NewProp_LRRivet_MetaData[] = {
		{ "Category", "HullRepairable" },
		{ "ModuleRelativePath", "Public/HullRepairable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHullRepairable_Statics::NewProp_LRRivet = { "LRRivet", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHullRepairable, LRRivet), Z_Construct_UClass_ARivet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHullRepairable_Statics::NewProp_LRRivet_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHullRepairable_Statics::NewProp_LRRivet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHullRepairable_Statics::NewProp_LLRivet_MetaData[] = {
		{ "Category", "HullRepairable" },
		{ "ModuleRelativePath", "Public/HullRepairable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHullRepairable_Statics::NewProp_LLRivet = { "LLRivet", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHullRepairable, LLRivet), Z_Construct_UClass_ARivet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHullRepairable_Statics::NewProp_LLRivet_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHullRepairable_Statics::NewProp_LLRivet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHullRepairable_Statics::NewProp_URRivet_MetaData[] = {
		{ "Category", "HullRepairable" },
		{ "ModuleRelativePath", "Public/HullRepairable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHullRepairable_Statics::NewProp_URRivet = { "URRivet", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHullRepairable, URRivet), Z_Construct_UClass_ARivet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHullRepairable_Statics::NewProp_URRivet_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHullRepairable_Statics::NewProp_URRivet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHullRepairable_Statics::NewProp_ULRivet_MetaData[] = {
		{ "Category", "HullRepairable" },
		{ "ModuleRelativePath", "Public/HullRepairable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHullRepairable_Statics::NewProp_ULRivet = { "ULRivet", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHullRepairable, ULRivet), Z_Construct_UClass_ARivet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHullRepairable_Statics::NewProp_ULRivet_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHullRepairable_Statics::NewProp_ULRivet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHullRepairable_Statics::NewProp_refWaterLevel_MetaData[] = {
		{ "Category", "HullRepairable" },
		{ "ModuleRelativePath", "Public/HullRepairable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHullRepairable_Statics::NewProp_refWaterLevel = { "refWaterLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHullRepairable, refWaterLevel), Z_Construct_UClass_AWaterLevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHullRepairable_Statics::NewProp_refWaterLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHullRepairable_Statics::NewProp_refWaterLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHullRepairable_Statics::NewProp_Rivets_MetaData[] = {
		{ "Category", "HullRepairable" },
		{ "ModuleRelativePath", "Public/HullRepairable.h" },
		{ "ToolTip", "4 rivets" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHullRepairable_Statics::NewProp_Rivets = { "Rivets", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHullRepairable, Rivets), METADATA_PARAMS(Z_Construct_UClass_AHullRepairable_Statics::NewProp_Rivets_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHullRepairable_Statics::NewProp_Rivets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHullRepairable_Statics::NewProp_Rivets_Inner = { "Rivets", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARivet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHullRepairable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHullRepairable_Statics::NewProp_LRRivet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHullRepairable_Statics::NewProp_LLRivet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHullRepairable_Statics::NewProp_URRivet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHullRepairable_Statics::NewProp_ULRivet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHullRepairable_Statics::NewProp_refWaterLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHullRepairable_Statics::NewProp_Rivets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHullRepairable_Statics::NewProp_Rivets_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHullRepairable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHullRepairable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHullRepairable_Statics::ClassParams = {
		&AHullRepairable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHullRepairable_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AHullRepairable, 1439412763);
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
