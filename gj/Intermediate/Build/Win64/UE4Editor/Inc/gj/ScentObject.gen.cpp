// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gj/ScentObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScentObject() {}
// Cross Module References
	GJ_API UClass* Z_Construct_UClass_AScentObject_NoRegister();
	GJ_API UClass* Z_Construct_UClass_AScentObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_gj();
// End Cross Module References
	void AScentObject::StaticRegisterNativesAScentObject()
	{
	}
	UClass* Z_Construct_UClass_AScentObject_NoRegister()
	{
		return AScentObject::StaticClass();
	}
	struct Z_Construct_UClass_AScentObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScentObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_gj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScentObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScentObject.h" },
		{ "ModuleRelativePath", "ScentObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScentObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScentObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScentObject_Statics::ClassParams = {
		&AScentObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AScentObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScentObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScentObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScentObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScentObject, 2756137734);
	template<> GJ_API UClass* StaticClass<AScentObject>()
	{
		return AScentObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScentObject(Z_Construct_UClass_AScentObject, &AScentObject::StaticClass, TEXT("/Script/gj"), TEXT("AScentObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScentObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
