// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ20/Public/DefenseSystemRepairable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefenseSystemRepairable() {}
// Cross Module References
	GGJ20_API UClass* Z_Construct_UClass_ADefenseSystemRepairable_NoRegister();
	GGJ20_API UClass* Z_Construct_UClass_ADefenseSystemRepairable();
	GGJ20_API UClass* Z_Construct_UClass_AIRepairableBase();
	UPackage* Z_Construct_UPackage__Script_GGJ20();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ADefenseSystemRepairable::StaticRegisterNativesADefenseSystemRepairable()
	{
	}
	UClass* Z_Construct_UClass_ADefenseSystemRepairable_NoRegister()
	{
		return ADefenseSystemRepairable::StaticClass();
	}
	struct Z_Construct_UClass_ADefenseSystemRepairable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_needlePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_needlePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedleMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NeedleMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefenseSystemRepairable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AIRepairableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ20,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefenseSystemRepairable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefenseSystemRepairable.h" },
		{ "ModuleRelativePath", "Public/DefenseSystemRepairable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefenseSystemRepairable_Statics::NewProp_needlePosition_MetaData[] = {
		{ "Category", "Needle Spin" },
		{ "ModuleRelativePath", "Public/DefenseSystemRepairable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefenseSystemRepairable_Statics::NewProp_needlePosition = { "needlePosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefenseSystemRepairable, needlePosition), METADATA_PARAMS(Z_Construct_UClass_ADefenseSystemRepairable_Statics::NewProp_needlePosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefenseSystemRepairable_Statics::NewProp_needlePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefenseSystemRepairable_Statics::NewProp_NeedleMesh_MetaData[] = {
		{ "Category", "Needle Spin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DefenseSystemRepairable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefenseSystemRepairable_Statics::NewProp_NeedleMesh = { "NeedleMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefenseSystemRepairable, NeedleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefenseSystemRepairable_Statics::NewProp_NeedleMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefenseSystemRepairable_Statics::NewProp_NeedleMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefenseSystemRepairable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseSystemRepairable_Statics::NewProp_needlePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseSystemRepairable_Statics::NewProp_NeedleMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefenseSystemRepairable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefenseSystemRepairable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefenseSystemRepairable_Statics::ClassParams = {
		&ADefenseSystemRepairable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADefenseSystemRepairable_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ADefenseSystemRepairable_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADefenseSystemRepairable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADefenseSystemRepairable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefenseSystemRepairable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefenseSystemRepairable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefenseSystemRepairable, 1306769240);
	template<> GGJ20_API UClass* StaticClass<ADefenseSystemRepairable>()
	{
		return ADefenseSystemRepairable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefenseSystemRepairable(Z_Construct_UClass_ADefenseSystemRepairable, &ADefenseSystemRepairable::StaticClass, TEXT("/Script/GGJ20"), TEXT("ADefenseSystemRepairable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefenseSystemRepairable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
