// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ20/Public/BaseSubmarine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseSubmarine() {}
// Cross Module References
	GGJ20_API UClass* Z_Construct_UClass_ABaseSubmarine_NoRegister();
	GGJ20_API UClass* Z_Construct_UClass_ABaseSubmarine();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GGJ20();
	GGJ20_API UClass* Z_Construct_UClass_ABaseRoom_NoRegister();
// End Cross Module References
	void ABaseSubmarine::StaticRegisterNativesABaseSubmarine()
	{
	}
	UClass* Z_Construct_UClass_ABaseSubmarine_NoRegister()
	{
		return ABaseSubmarine::StaticClass();
	}
	struct Z_Construct_UClass_ABaseSubmarine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rooms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rooms;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rooms_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseSubmarine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ20,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSubmarine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseSubmarine.h" },
		{ "ModuleRelativePath", "Public/BaseSubmarine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSubmarine_Statics::NewProp_rooms_MetaData[] = {
		{ "Category", "Rooms" },
		{ "ModuleRelativePath", "Public/BaseSubmarine.h" },
		{ "ToolTip", "static float movementSpeed;\n       static float perTickFallFromWater;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseSubmarine_Statics::NewProp_rooms = { "rooms", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSubmarine, rooms), METADATA_PARAMS(Z_Construct_UClass_ABaseSubmarine_Statics::NewProp_rooms_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseSubmarine_Statics::NewProp_rooms_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseSubmarine_Statics::NewProp_rooms_Inner = { "rooms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseRoom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseSubmarine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSubmarine_Statics::NewProp_rooms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSubmarine_Statics::NewProp_rooms_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseSubmarine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseSubmarine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseSubmarine_Statics::ClassParams = {
		&ABaseSubmarine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseSubmarine_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABaseSubmarine_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseSubmarine_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseSubmarine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseSubmarine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseSubmarine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseSubmarine, 1443879204);
	template<> GGJ20_API UClass* StaticClass<ABaseSubmarine>()
	{
		return ABaseSubmarine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseSubmarine(Z_Construct_UClass_ABaseSubmarine, &ABaseSubmarine::StaticClass, TEXT("/Script/GGJ20"), TEXT("ABaseSubmarine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseSubmarine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
