// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ20/Public/BaseRoom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseRoom() {}
// Cross Module References
	GGJ20_API UClass* Z_Construct_UClass_ABaseRoom_NoRegister();
	GGJ20_API UClass* Z_Construct_UClass_ABaseRoom();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GGJ20();
// End Cross Module References
	void ABaseRoom::StaticRegisterNativesABaseRoom()
	{
	}
	UClass* Z_Construct_UClass_ABaseRoom_NoRegister()
	{
		return ABaseRoom::StaticClass();
	}
	struct Z_Construct_UClass_ABaseRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ20,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRoom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseRoom.h" },
		{ "ModuleRelativePath", "Public/BaseRoom.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseRoom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseRoom_Statics::ClassParams = {
		&ABaseRoom::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABaseRoom_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseRoom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseRoom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseRoom, 2987059140);
	template<> GGJ20_API UClass* StaticClass<ABaseRoom>()
	{
		return ABaseRoom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseRoom(Z_Construct_UClass_ABaseRoom, &ABaseRoom::StaticClass, TEXT("/Script/GGJ20"), TEXT("ABaseRoom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseRoom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
