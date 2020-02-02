// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ20/Public/WeldingPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeldingPoint() {}
// Cross Module References
	GGJ20_API UClass* Z_Construct_UClass_AWeldingPoint_NoRegister();
	GGJ20_API UClass* Z_Construct_UClass_AWeldingPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GGJ20();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AWeldingPoint::StaticRegisterNativesAWeldingPoint()
	{
	}
	UClass* Z_Construct_UClass_AWeldingPoint_NoRegister()
	{
		return AWeldingPoint::StaticClass();
	}
	struct Z_Construct_UClass_AWeldingPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_crackMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_crackMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeldingPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ20,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeldingPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeldingPoint.h" },
		{ "ModuleRelativePath", "Public/WeldingPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeldingPoint_Statics::NewProp_crackMesh_MetaData[] = {
		{ "Category", "WeldingPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeldingPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeldingPoint_Statics::NewProp_crackMesh = { "crackMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeldingPoint, crackMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeldingPoint_Statics::NewProp_crackMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeldingPoint_Statics::NewProp_crackMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeldingPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeldingPoint_Statics::NewProp_crackMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeldingPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeldingPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeldingPoint_Statics::ClassParams = {
		&AWeldingPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeldingPoint_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AWeldingPoint_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AWeldingPoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWeldingPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeldingPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeldingPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeldingPoint, 327796441);
	template<> GGJ20_API UClass* StaticClass<AWeldingPoint>()
	{
		return AWeldingPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeldingPoint(Z_Construct_UClass_AWeldingPoint, &AWeldingPoint::StaticClass, TEXT("/Script/GGJ20"), TEXT("AWeldingPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeldingPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
