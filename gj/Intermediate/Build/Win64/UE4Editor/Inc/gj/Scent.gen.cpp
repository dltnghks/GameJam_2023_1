// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gj/Scent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScent() {}
// Cross Module References
	GJ_API UClass* Z_Construct_UClass_AScent_NoRegister();
	GJ_API UClass* Z_Construct_UClass_AScent();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_gj();
// End Cross Module References
	void AScent::StaticRegisterNativesAScent()
	{
	}
	UClass* Z_Construct_UClass_AScent_NoRegister()
	{
		return AScent::StaticClass();
	}
	struct Z_Construct_UClass_AScent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_gj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Scent.h" },
		{ "ModuleRelativePath", "Scent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScent_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "MoveActor" },
		{ "ModuleRelativePath", "Scent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AScent_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScent, speed), METADATA_PARAMS(Z_Construct_UClass_AScent_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScent_Statics::NewProp_speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScent_Statics::NewProp_speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScent_Statics::ClassParams = {
		&AScent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AScent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AScent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AScent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScent, 920261343);
	template<> GJ_API UClass* StaticClass<AScent>()
	{
		return AScent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScent(Z_Construct_UClass_AScent, &AScent::StaticClass, TEXT("/Script/gj"), TEXT("AScent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
