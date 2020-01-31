// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ20/Public/IRepairableBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIRepairableBase() {}
// Cross Module References
	GGJ20_API UEnum* Z_Construct_UEnum_GGJ20_RepairTypes();
	UPackage* Z_Construct_UPackage__Script_GGJ20();
	GGJ20_API UClass* Z_Construct_UClass_AIRepairableBase_NoRegister();
	GGJ20_API UClass* Z_Construct_UClass_AIRepairableBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GGJ20_API UClass* Z_Construct_UClass_AILightControllerBase_NoRegister();
// End Cross Module References
	static UEnum* RepairTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GGJ20_RepairTypes, Z_Construct_UPackage__Script_GGJ20(), TEXT("RepairTypes"));
		}
		return Singleton;
	}
	template<> GGJ20_API UEnum* StaticEnum<RepairTypes>()
	{
		return RepairTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_RepairTypes(RepairTypes_StaticEnum, TEXT("/Script/GGJ20"), TEXT("RepairTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GGJ20_RepairTypes_Hash() { return 511040968U; }
	UEnum* Z_Construct_UEnum_GGJ20_RepairTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GGJ20();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("RepairTypes"), 0, Get_Z_Construct_UEnum_GGJ20_RepairTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RepairTypes::NOT_IMPLEMENTED", (int64)RepairTypes::NOT_IMPLEMENTED },
				{ "RepairTypes::HULL_REPAIR", (int64)RepairTypes::HULL_REPAIR },
				{ "RepairTypes::GENERATOR_REPAIR", (int64)RepairTypes::GENERATOR_REPAIR },
				{ "RepairTypes::DEFENSE_SYSTEM_REPAIR", (int64)RepairTypes::DEFENSE_SYSTEM_REPAIR },
				{ "RepairTypes::ENGINE_REPAIR", (int64)RepairTypes::ENGINE_REPAIR },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/IRepairableBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GGJ20,
				nullptr,
				"RepairTypes",
				"RepairTypes",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AIRepairableBase::StaticRegisterNativesAIRepairableBase()
	{
	}
	UClass* Z_Construct_UClass_AIRepairableBase_NoRegister()
	{
		return AIRepairableBase::StaticClass();
	}
	struct Z_Construct_UClass_AIRepairableBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlledLights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlledLights;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledLights_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIRepairableBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ20,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIRepairableBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IRepairableBase.h" },
		{ "ModuleRelativePath", "Public/IRepairableBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIRepairableBase_Statics::NewProp_ControlledLights_MetaData[] = {
		{ "Category", "LightController" },
		{ "ModuleRelativePath", "Public/IRepairableBase.h" },
		{ "ToolTip", "An array of lights that are controlled by this repairable." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIRepairableBase_Statics::NewProp_ControlledLights = { "ControlledLights", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIRepairableBase, ControlledLights), METADATA_PARAMS(Z_Construct_UClass_AIRepairableBase_Statics::NewProp_ControlledLights_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIRepairableBase_Statics::NewProp_ControlledLights_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIRepairableBase_Statics::NewProp_ControlledLights_Inner = { "ControlledLights", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AILightControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIRepairableBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIRepairableBase_Statics::NewProp_ControlledLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIRepairableBase_Statics::NewProp_ControlledLights_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIRepairableBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIRepairableBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIRepairableBase_Statics::ClassParams = {
		&AIRepairableBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIRepairableBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AIRepairableBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AIRepairableBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIRepairableBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIRepairableBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIRepairableBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIRepairableBase, 852665549);
	template<> GGJ20_API UClass* StaticClass<AIRepairableBase>()
	{
		return AIRepairableBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIRepairableBase(Z_Construct_UClass_AIRepairableBase, &AIRepairableBase::StaticClass, TEXT("/Script/GGJ20"), TEXT("AIRepairableBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIRepairableBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
