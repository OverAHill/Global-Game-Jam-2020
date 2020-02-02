// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ20/Public/GeneratorRoom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratorRoom() {}
// Cross Module References
	GGJ20_API UClass* Z_Construct_UClass_AGeneratorRoom_NoRegister();
	GGJ20_API UClass* Z_Construct_UClass_AGeneratorRoom();
	GGJ20_API UClass* Z_Construct_UClass_ABaseRoom();
	UPackage* Z_Construct_UPackage__Script_GGJ20();
	GGJ20_API UClass* Z_Construct_UClass_AGeneratorRepairable_NoRegister();
// End Cross Module References
	void AGeneratorRoom::StaticRegisterNativesAGeneratorRoom()
	{
	}
	UClass* Z_Construct_UClass_AGeneratorRoom_NoRegister()
	{
		return AGeneratorRoom::StaticClass();
	}
	struct Z_Construct_UClass_AGeneratorRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneratorRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseRoom,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ20,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorRoom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeneratorRoom.h" },
		{ "ModuleRelativePath", "Public/GeneratorRoom.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorRoom_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "GeneratorRoom" },
		{ "ModuleRelativePath", "Public/GeneratorRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeneratorRoom_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneratorRoom, Generator), Z_Construct_UClass_AGeneratorRepairable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeneratorRoom_Statics::NewProp_Generator_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGeneratorRoom_Statics::NewProp_Generator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeneratorRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratorRoom_Statics::NewProp_Generator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneratorRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneratorRoom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneratorRoom_Statics::ClassParams = {
		&AGeneratorRoom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGeneratorRoom_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGeneratorRoom_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGeneratorRoom_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGeneratorRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneratorRoom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneratorRoom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneratorRoom, 2633745902);
	template<> GGJ20_API UClass* StaticClass<AGeneratorRoom>()
	{
		return AGeneratorRoom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneratorRoom(Z_Construct_UClass_AGeneratorRoom, &AGeneratorRoom::StaticClass, TEXT("/Script/GGJ20"), TEXT("AGeneratorRoom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneratorRoom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
