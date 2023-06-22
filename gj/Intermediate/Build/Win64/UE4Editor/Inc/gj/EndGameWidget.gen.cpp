// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gj/EndGameWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndGameWidget() {}
// Cross Module References
	GJ_API UClass* Z_Construct_UClass_UEndGameWidget_NoRegister();
	GJ_API UClass* Z_Construct_UClass_UEndGameWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_gj();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEndGameWidget::execOnButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonClicked();
		P_NATIVE_END;
	}
	void UEndGameWidget::StaticRegisterNativesUEndGameWidget()
	{
		UClass* Class = UEndGameWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnButtonClicked", &UEndGameWidget::execOnButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEndGameWidget_OnButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameWidget_OnButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameWidget_OnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameWidget, nullptr, "OnButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameWidget_OnButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameWidget_OnButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameWidget_OnButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameWidget_OnButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEndGameWidget_NoRegister()
	{
		return UEndGameWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEndGameWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TB_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TB_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BT_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BT_1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEndGameWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_gj,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEndGameWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEndGameWidget_OnButtonClicked, "OnButtonClicked" }, // 3622042927
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EndGameWidget.h" },
		{ "ModuleRelativePath", "EndGameWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameWidget_Statics::NewProp_TB_1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "// BT_SignIn ??\xc6\xb0 \xc5\xac?? ?\xcc\xba?\xc6\xae ?\xda\xb5\xe9\xb7\xaf ?\xd4\xbc?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EndGameWidget.h" },
		{ "ToolTip", "BT_SignIn ??\xc6\xb0 \xc5\xac?? ?\xcc\xba?\xc6\xae ?\xda\xb5\xe9\xb7\xaf ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndGameWidget_Statics::NewProp_TB_1 = { "TB_1", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEndGameWidget, TB_1), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEndGameWidget_Statics::NewProp_TB_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameWidget_Statics::NewProp_TB_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameWidget_Statics::NewProp_BT_1_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EndGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndGameWidget_Statics::NewProp_BT_1 = { "BT_1", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEndGameWidget, BT_1), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEndGameWidget_Statics::NewProp_BT_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameWidget_Statics::NewProp_BT_1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndGameWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameWidget_Statics::NewProp_TB_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameWidget_Statics::NewProp_BT_1,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEndGameWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndGameWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEndGameWidget_Statics::ClassParams = {
		&UEndGameWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEndGameWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEndGameWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEndGameWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEndGameWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEndGameWidget, 2890992965);
	template<> GJ_API UClass* StaticClass<UEndGameWidget>()
	{
		return UEndGameWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEndGameWidget(Z_Construct_UClass_UEndGameWidget, &UEndGameWidget::StaticClass, TEXT("/Script/gj"), TEXT("UEndGameWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndGameWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
