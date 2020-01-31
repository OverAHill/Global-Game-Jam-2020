// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ20/GGJ20GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGJ20GameModeBase() {}
// Cross Module References
	GGJ20_API UClass* Z_Construct_UClass_AGGJ20GameModeBase_NoRegister();
	GGJ20_API UClass* Z_Construct_UClass_AGGJ20GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GGJ20();
// End Cross Module References
	void AGGJ20GameModeBase::StaticRegisterNativesAGGJ20GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGGJ20GameModeBase_NoRegister()
	{
		return AGGJ20GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGGJ20GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGGJ20GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ20,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGJ20GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GGJ20GameModeBase.h" },
		{ "ModuleRelativePath", "GGJ20GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGGJ20GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGGJ20GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGGJ20GameModeBase_Statics::ClassParams = {
		&AGGJ20GameModeBase::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AGGJ20GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGGJ20GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGGJ20GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGGJ20GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGGJ20GameModeBase, 3200529961);
	template<> GGJ20_API UClass* StaticClass<AGGJ20GameModeBase>()
	{
		return AGGJ20GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGGJ20GameModeBase(Z_Construct_UClass_AGGJ20GameModeBase, &AGGJ20GameModeBase::StaticClass, TEXT("/Script/GGJ20"), TEXT("AGGJ20GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGGJ20GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
