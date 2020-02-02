// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ20/Public/EngineRoom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineRoom() {}
// Cross Module References
	GGJ20_API UClass* Z_Construct_UClass_AEngineRoom_NoRegister();
	GGJ20_API UClass* Z_Construct_UClass_AEngineRoom();
	GGJ20_API UClass* Z_Construct_UClass_ABaseRoom();
	UPackage* Z_Construct_UPackage__Script_GGJ20();
	GGJ20_API UClass* Z_Construct_UClass_AEngineRepairable_NoRegister();
// End Cross Module References
	void AEngineRoom::StaticRegisterNativesAEngineRoom()
	{
	}
	UClass* Z_Construct_UClass_AEngineRoom_NoRegister()
	{
		return AEngineRoom::StaticClass();
	}
	struct Z_Construct_UClass_AEngineRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Engine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Engine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEngineRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseRoom,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ20,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEngineRoom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EngineRoom.h" },
		{ "ModuleRelativePath", "Public/EngineRoom.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEngineRoom_Statics::NewProp_Engine_MetaData[] = {
		{ "Category", "EngineRoom" },
		{ "ModuleRelativePath", "Public/EngineRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineRoom_Statics::NewProp_Engine = { "Engine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEngineRoom, Engine), Z_Construct_UClass_AEngineRepairable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEngineRoom_Statics::NewProp_Engine_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEngineRoom_Statics::NewProp_Engine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEngineRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineRoom_Statics::NewProp_Engine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEngineRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEngineRoom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEngineRoom_Statics::ClassParams = {
		&AEngineRoom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEngineRoom_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AEngineRoom_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AEngineRoom_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEngineRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEngineRoom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEngineRoom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEngineRoom, 2910113689);
	template<> GGJ20_API UClass* StaticClass<AEngineRoom>()
	{
		return AEngineRoom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEngineRoom(Z_Construct_UClass_AEngineRoom, &AEngineRoom::StaticClass, TEXT("/Script/GGJ20"), TEXT("AEngineRoom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEngineRoom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
