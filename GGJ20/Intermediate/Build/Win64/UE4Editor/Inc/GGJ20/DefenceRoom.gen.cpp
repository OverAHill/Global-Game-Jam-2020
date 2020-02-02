// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ20/Public/DefenceRoom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefenceRoom() {}
// Cross Module References
	GGJ20_API UClass* Z_Construct_UClass_ADefenceRoom_NoRegister();
	GGJ20_API UClass* Z_Construct_UClass_ADefenceRoom();
	GGJ20_API UClass* Z_Construct_UClass_ABaseRoom();
	UPackage* Z_Construct_UPackage__Script_GGJ20();
	GGJ20_API UClass* Z_Construct_UClass_ADefenseSystemRepairable_NoRegister();
// End Cross Module References
	void ADefenceRoom::StaticRegisterNativesADefenceRoom()
	{
	}
	UClass* Z_Construct_UClass_ADefenceRoom_NoRegister()
	{
		return ADefenceRoom::StaticClass();
	}
	struct Z_Construct_UClass_ADefenceRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefenseSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefenseSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefenceRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseRoom,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ20,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefenceRoom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefenceRoom.h" },
		{ "ModuleRelativePath", "Public/DefenceRoom.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefenceRoom_Statics::NewProp_DefenseSystem_MetaData[] = {
		{ "Category", "DefenceRoom" },
		{ "ModuleRelativePath", "Public/DefenceRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefenceRoom_Statics::NewProp_DefenseSystem = { "DefenseSystem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefenceRoom, DefenseSystem), Z_Construct_UClass_ADefenseSystemRepairable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefenceRoom_Statics::NewProp_DefenseSystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefenceRoom_Statics::NewProp_DefenseSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefenceRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenceRoom_Statics::NewProp_DefenseSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefenceRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefenceRoom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefenceRoom_Statics::ClassParams = {
		&ADefenceRoom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADefenceRoom_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ADefenceRoom_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADefenceRoom_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADefenceRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefenceRoom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefenceRoom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefenceRoom, 1704696391);
	template<> GGJ20_API UClass* StaticClass<ADefenceRoom>()
	{
		return ADefenceRoom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefenceRoom(Z_Construct_UClass_ADefenceRoom, &ADefenceRoom::StaticClass, TEXT("/Script/GGJ20"), TEXT("ADefenceRoom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefenceRoom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
