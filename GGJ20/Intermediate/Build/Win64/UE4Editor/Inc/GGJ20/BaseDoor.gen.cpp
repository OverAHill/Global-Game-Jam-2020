// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ20/Public/BaseDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseDoor() {}
// Cross Module References
	GGJ20_API UClass* Z_Construct_UClass_ABaseDoor_NoRegister();
	GGJ20_API UClass* Z_Construct_UClass_ABaseDoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GGJ20();
	GGJ20_API UFunction* Z_Construct_UFunction_ABaseDoor_Close();
	GGJ20_API UFunction* Z_Construct_UFunction_ABaseDoor_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GGJ20_API UFunction* Z_Construct_UFunction_ABaseDoor_OnOverlapEnd();
	GGJ20_API UFunction* Z_Construct_UFunction_ABaseDoor_Open();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABaseDoor_Close = FName(TEXT("Close"));
	void ABaseDoor::Close()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseDoor_Close),NULL);
	}
	static FName NAME_ABaseDoor_Open = FName(TEXT("Open"));
	void ABaseDoor::Open()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseDoor_Open),NULL);
	}
	void ABaseDoor::StaticRegisterNativesABaseDoor()
	{
		UClass* Class = ABaseDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ABaseDoor::execOnOverlapBegin },
			{ "OnOverlapEnd", &ABaseDoor::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseDoor_Close_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseDoor_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lights" },
		{ "ModuleRelativePath", "Public/BaseDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseDoor_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseDoor, nullptr, "Close", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseDoor_Close_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseDoor_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseDoor_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseDoor_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics
	{
		struct BaseDoor_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseDoor_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BaseDoor_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseDoor_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseDoor_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseDoor_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseDoor_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseDoor_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseDoor, nullptr, "OnOverlapBegin", sizeof(BaseDoor_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseDoor_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseDoor_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics
	{
		struct BaseDoor_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseDoor_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseDoor_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseDoor_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseDoor_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseDoor, nullptr, "OnOverlapEnd", sizeof(BaseDoor_eventOnOverlapEnd_Parms), Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseDoor_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseDoor_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseDoor_Open_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseDoor_Open_Statics::Function_MetaDataParams[] = {
		{ "Category", "Doors" },
		{ "ModuleRelativePath", "Public/BaseDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseDoor_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseDoor, nullptr, "Open", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseDoor_Open_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseDoor_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseDoor_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseDoor_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseDoor_NoRegister()
	{
		return ABaseDoor::StaticClass();
	}
	struct Z_Construct_UClass_ABaseDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isOpen_MetaData[];
#endif
		static void NewProp_isOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightDoorStartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightDoorStartPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftDoorStartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftDoorStartPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_openWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_openWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leftDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCollider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ20,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseDoor_Close, "Close" }, // 577814810
		{ &Z_Construct_UFunction_ABaseDoor_OnOverlapBegin, "OnOverlapBegin" }, // 3748616148
		{ &Z_Construct_UFunction_ABaseDoor_OnOverlapEnd, "OnOverlapEnd" }, // 1058501696
		{ &Z_Construct_UFunction_ABaseDoor_Open, "Open" }, // 596491063
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseDoor.h" },
		{ "ModuleRelativePath", "Public/BaseDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseDoor_Statics::NewProp_isOpen_MetaData[] = {
		{ "Category", "BaseDoor" },
		{ "ModuleRelativePath", "Public/BaseDoor.h" },
	};
#endif
	void Z_Construct_UClass_ABaseDoor_Statics::NewProp_isOpen_SetBit(void* Obj)
	{
		((ABaseDoor*)Obj)->isOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseDoor_Statics::NewProp_isOpen = { "isOpen", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseDoor), &Z_Construct_UClass_ABaseDoor_Statics::NewProp_isOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseDoor_Statics::NewProp_isOpen_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseDoor_Statics::NewProp_isOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseDoor_Statics::NewProp_rightDoorStartPosition_MetaData[] = {
		{ "Category", "BaseDoor" },
		{ "ModuleRelativePath", "Public/BaseDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseDoor_Statics::NewProp_rightDoorStartPosition = { "rightDoorStartPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseDoor, rightDoorStartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABaseDoor_Statics::NewProp_rightDoorStartPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseDoor_Statics::NewProp_rightDoorStartPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseDoor_Statics::NewProp_leftDoorStartPosition_MetaData[] = {
		{ "Category", "BaseDoor" },
		{ "ModuleRelativePath", "Public/BaseDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseDoor_Statics::NewProp_leftDoorStartPosition = { "leftDoorStartPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseDoor, leftDoorStartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABaseDoor_Statics::NewProp_leftDoorStartPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseDoor_Statics::NewProp_leftDoorStartPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseDoor_Statics::NewProp_openWidth_MetaData[] = {
		{ "Category", "BaseDoor" },
		{ "ModuleRelativePath", "Public/BaseDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseDoor_Statics::NewProp_openWidth = { "openWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseDoor, openWidth), METADATA_PARAMS(Z_Construct_UClass_ABaseDoor_Statics::NewProp_openWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseDoor_Statics::NewProp_openWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseDoor_Statics::NewProp_rightDoor_MetaData[] = {
		{ "Category", "BaseDoor" },
		{ "ModuleRelativePath", "Public/BaseDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseDoor_Statics::NewProp_rightDoor = { "rightDoor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseDoor, rightDoor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseDoor_Statics::NewProp_rightDoor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseDoor_Statics::NewProp_rightDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseDoor_Statics::NewProp_leftDoor_MetaData[] = {
		{ "Category", "BaseDoor" },
		{ "ModuleRelativePath", "Public/BaseDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseDoor_Statics::NewProp_leftDoor = { "leftDoor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseDoor, leftDoor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseDoor_Statics::NewProp_leftDoor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseDoor_Statics::NewProp_leftDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseDoor_Statics::NewProp_BoxCollider_MetaData[] = {
		{ "Category", "BaseDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseDoor_Statics::NewProp_BoxCollider = { "BoxCollider", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseDoor, BoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseDoor_Statics::NewProp_BoxCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseDoor_Statics::NewProp_BoxCollider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseDoor_Statics::NewProp_isOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseDoor_Statics::NewProp_rightDoorStartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseDoor_Statics::NewProp_leftDoorStartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseDoor_Statics::NewProp_openWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseDoor_Statics::NewProp_rightDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseDoor_Statics::NewProp_leftDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseDoor_Statics::NewProp_BoxCollider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseDoor_Statics::ClassParams = {
		&ABaseDoor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseDoor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABaseDoor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseDoor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseDoor, 58354500);
	template<> GGJ20_API UClass* StaticClass<ABaseDoor>()
	{
		return ABaseDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseDoor(Z_Construct_UClass_ABaseDoor, &ABaseDoor::StaticClass, TEXT("/Script/GGJ20"), TEXT("ABaseDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
