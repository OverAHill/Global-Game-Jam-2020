// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ20/Public/WaterLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterLevel() {}
// Cross Module References
	GGJ20_API UClass* Z_Construct_UClass_AWaterLevel_NoRegister();
	GGJ20_API UClass* Z_Construct_UClass_AWaterLevel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GGJ20();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AWaterLevel::StaticRegisterNativesAWaterLevel()
	{
	}
	UClass* Z_Construct_UClass_AWaterLevel_NoRegister()
	{
		return AWaterLevel::StaticClass();
	}
	struct Z_Construct_UClass_AWaterLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_drainSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_drainSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fillSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fillSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_positionOffsetY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_positionOffsetY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaterMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaterLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ20,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterLevel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaterLevel.h" },
		{ "ModuleRelativePath", "Public/WaterLevel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterLevel_Statics::NewProp_drainSpeed_MetaData[] = {
		{ "Category", "WaterLevel" },
		{ "ModuleRelativePath", "Public/WaterLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaterLevel_Statics::NewProp_drainSpeed = { "drainSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWaterLevel, drainSpeed), METADATA_PARAMS(Z_Construct_UClass_AWaterLevel_Statics::NewProp_drainSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWaterLevel_Statics::NewProp_drainSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterLevel_Statics::NewProp_fillSpeed_MetaData[] = {
		{ "Category", "WaterLevel" },
		{ "ModuleRelativePath", "Public/WaterLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaterLevel_Statics::NewProp_fillSpeed = { "fillSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWaterLevel, fillSpeed), METADATA_PARAMS(Z_Construct_UClass_AWaterLevel_Statics::NewProp_fillSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWaterLevel_Statics::NewProp_fillSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterLevel_Statics::NewProp_positionOffsetY_MetaData[] = {
		{ "Category", "WaterLevel" },
		{ "ModuleRelativePath", "Public/WaterLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaterLevel_Statics::NewProp_positionOffsetY = { "positionOffsetY", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWaterLevel, positionOffsetY), METADATA_PARAMS(Z_Construct_UClass_AWaterLevel_Statics::NewProp_positionOffsetY_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWaterLevel_Statics::NewProp_positionOffsetY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterLevel_Statics::NewProp_WaterMesh_MetaData[] = {
		{ "Category", "WaterLevel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaterLevel_Statics::NewProp_WaterMesh = { "WaterMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWaterLevel, WaterMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterLevel_Statics::NewProp_WaterMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWaterLevel_Statics::NewProp_WaterMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaterLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterLevel_Statics::NewProp_drainSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterLevel_Statics::NewProp_fillSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterLevel_Statics::NewProp_positionOffsetY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterLevel_Statics::NewProp_WaterMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaterLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaterLevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWaterLevel_Statics::ClassParams = {
		&AWaterLevel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWaterLevel_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AWaterLevel_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AWaterLevel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWaterLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWaterLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWaterLevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWaterLevel, 3420101032);
	template<> GGJ20_API UClass* StaticClass<AWaterLevel>()
	{
		return AWaterLevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWaterLevel(Z_Construct_UClass_AWaterLevel, &AWaterLevel::StaticClass, TEXT("/Script/GGJ20"), TEXT("AWaterLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaterLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
