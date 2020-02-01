// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ20/Public/ILightControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeILightControllerBase() {}
// Cross Module References
	GGJ20_API UClass* Z_Construct_UClass_AILightControllerBase_NoRegister();
	GGJ20_API UClass* Z_Construct_UClass_AILightControllerBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GGJ20();
	GGJ20_API UFunction* Z_Construct_UFunction_AILightControllerBase_TurnOff();
	GGJ20_API UFunction* Z_Construct_UFunction_AILightControllerBase_TurnOn();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
// End Cross Module References
	static FName NAME_AILightControllerBase_TurnOff = FName(TEXT("TurnOff"));
	void AILightControllerBase::TurnOff()
	{
		ProcessEvent(FindFunctionChecked(NAME_AILightControllerBase_TurnOff),NULL);
	}
	static FName NAME_AILightControllerBase_TurnOn = FName(TEXT("TurnOn"));
	void AILightControllerBase::TurnOn()
	{
		ProcessEvent(FindFunctionChecked(NAME_AILightControllerBase_TurnOn),NULL);
	}
	void AILightControllerBase::StaticRegisterNativesAILightControllerBase()
	{
	}
	struct Z_Construct_UFunction_AILightControllerBase_TurnOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AILightControllerBase_TurnOff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lights" },
		{ "ModuleRelativePath", "Public/ILightControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AILightControllerBase_TurnOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AILightControllerBase, nullptr, "TurnOff", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AILightControllerBase_TurnOff_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AILightControllerBase_TurnOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AILightControllerBase_TurnOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AILightControllerBase_TurnOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AILightControllerBase_TurnOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AILightControllerBase_TurnOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lights" },
		{ "ModuleRelativePath", "Public/ILightControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AILightControllerBase_TurnOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AILightControllerBase, nullptr, "TurnOn", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AILightControllerBase_TurnOn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AILightControllerBase_TurnOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AILightControllerBase_TurnOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AILightControllerBase_TurnOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AILightControllerBase_NoRegister()
	{
		return AILightControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_AILightControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_light_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_light;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AILightControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ20,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AILightControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AILightControllerBase_TurnOff, "TurnOff" }, // 2678160630
		{ &Z_Construct_UFunction_AILightControllerBase_TurnOn, "TurnOn" }, // 2756578792
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AILightControllerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ILightControllerBase.h" },
		{ "ModuleRelativePath", "Public/ILightControllerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AILightControllerBase_Statics::NewProp_m_light_MetaData[] = {
		{ "Category", "Lights" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ILightControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AILightControllerBase_Statics::NewProp_m_light = { "m_light", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AILightControllerBase, m_light), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AILightControllerBase_Statics::NewProp_m_light_MetaData, ARRAY_COUNT(Z_Construct_UClass_AILightControllerBase_Statics::NewProp_m_light_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AILightControllerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AILightControllerBase_Statics::NewProp_m_light,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AILightControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AILightControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AILightControllerBase_Statics::ClassParams = {
		&AILightControllerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AILightControllerBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AILightControllerBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AILightControllerBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AILightControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AILightControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AILightControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AILightControllerBase, 2774036717);
	template<> GGJ20_API UClass* StaticClass<AILightControllerBase>()
	{
		return AILightControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AILightControllerBase(Z_Construct_UClass_AILightControllerBase, &AILightControllerBase::StaticClass, TEXT("/Script/GGJ20"), TEXT("AILightControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AILightControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
