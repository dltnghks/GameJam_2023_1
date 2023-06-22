// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gj/gjGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegjGameMode() {}
// Cross Module References
	GJ_API UClass* Z_Construct_UClass_AgjGameMode_NoRegister();
	GJ_API UClass* Z_Construct_UClass_AgjGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_gj();
	GJ_API UClass* Z_Construct_UClass_UHUDWidget_NoRegister();
	GJ_API UClass* Z_Construct_UClass_UEndGameWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(AgjGameMode::execDiscountFlower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DiscountFlower();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AgjGameMode::execGetFlowerCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFlowerCount();
		P_NATIVE_END;
	}
	void AgjGameMode::StaticRegisterNativesAgjGameMode()
	{
		UClass* Class = AgjGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DiscountFlower", &AgjGameMode::execDiscountFlower },
			{ "GetFlowerCount", &AgjGameMode::execGetFlowerCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AgjGameMode_DiscountFlower_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AgjGameMode_DiscountFlower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "gjGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AgjGameMode_DiscountFlower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AgjGameMode, nullptr, "DiscountFlower", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AgjGameMode_DiscountFlower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AgjGameMode_DiscountFlower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AgjGameMode_DiscountFlower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AgjGameMode_DiscountFlower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AgjGameMode_GetFlowerCount_Statics
	{
		struct gjGameMode_eventGetFlowerCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AgjGameMode_GetFlowerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(gjGameMode_eventGetFlowerCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AgjGameMode_GetFlowerCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AgjGameMode_GetFlowerCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AgjGameMode_GetFlowerCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "gjGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AgjGameMode_GetFlowerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AgjGameMode, nullptr, "GetFlowerCount", nullptr, nullptr, sizeof(gjGameMode_eventGetFlowerCount_Parms), Z_Construct_UFunction_AgjGameMode_GetFlowerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AgjGameMode_GetFlowerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AgjGameMode_GetFlowerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AgjGameMode_GetFlowerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AgjGameMode_GetFlowerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AgjGameMode_GetFlowerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AgjGameMode_NoRegister()
	{
		return AgjGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AgjGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndGameWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndGameWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_HUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BP_HUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_EndGameWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BP_EndGameWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AgjGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_gj,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AgjGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AgjGameMode_DiscountFlower, "DiscountFlower" }, // 1974617198
		{ &Z_Construct_UFunction_AgjGameMode_GetFlowerCount, "GetFlowerCount" }, // 1290102342
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AgjGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "gjGameMode.h" },
		{ "ModuleRelativePath", "gjGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AgjGameMode_Statics::NewProp_HUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "gjGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AgjGameMode_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgjGameMode, HUDWidget), Z_Construct_UClass_UHUDWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AgjGameMode_Statics::NewProp_HUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AgjGameMode_Statics::NewProp_HUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AgjGameMode_Statics::NewProp_EndGameWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "gjGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AgjGameMode_Statics::NewProp_EndGameWidget = { "EndGameWidget", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgjGameMode, EndGameWidget), Z_Construct_UClass_UEndGameWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AgjGameMode_Statics::NewProp_EndGameWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AgjGameMode_Statics::NewProp_EndGameWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AgjGameMode_Statics::NewProp_BP_HUDWidget_MetaData[] = {
		{ "Category", "gjGameMode" },
		{ "ModuleRelativePath", "gjGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AgjGameMode_Statics::NewProp_BP_HUDWidget = { "BP_HUDWidget", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgjGameMode, BP_HUDWidget), Z_Construct_UClass_UHUDWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AgjGameMode_Statics::NewProp_BP_HUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AgjGameMode_Statics::NewProp_BP_HUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AgjGameMode_Statics::NewProp_BP_EndGameWidget_MetaData[] = {
		{ "Category", "gjGameMode" },
		{ "ModuleRelativePath", "gjGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AgjGameMode_Statics::NewProp_BP_EndGameWidget = { "BP_EndGameWidget", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgjGameMode, BP_EndGameWidget), Z_Construct_UClass_UEndGameWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AgjGameMode_Statics::NewProp_BP_EndGameWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AgjGameMode_Statics::NewProp_BP_EndGameWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AgjGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AgjGameMode_Statics::NewProp_HUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AgjGameMode_Statics::NewProp_EndGameWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AgjGameMode_Statics::NewProp_BP_HUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AgjGameMode_Statics::NewProp_BP_EndGameWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AgjGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AgjGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AgjGameMode_Statics::ClassParams = {
		&AgjGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AgjGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AgjGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AgjGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AgjGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AgjGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AgjGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AgjGameMode, 887123852);
	template<> GJ_API UClass* StaticClass<AgjGameMode>()
	{
		return AgjGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AgjGameMode(Z_Construct_UClass_AgjGameMode, &AgjGameMode::StaticClass, TEXT("/Script/gj"), TEXT("AgjGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AgjGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
