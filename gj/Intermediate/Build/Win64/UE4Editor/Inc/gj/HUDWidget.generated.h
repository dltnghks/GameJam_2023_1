// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GJ_HUDWidget_generated_h
#error "HUDWidget.generated.h already included, missing '#pragma once' in HUDWidget.h"
#endif
#define GJ_HUDWidget_generated_h

#define gj_Source_gj_HUDWidget_h_16_SPARSE_DATA
#define gj_Source_gj_HUDWidget_h_16_RPC_WRAPPERS
#define gj_Source_gj_HUDWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define gj_Source_gj_HUDWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHUDWidget(); \
	friend struct Z_Construct_UClass_UHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/gj"), NO_API) \
	DECLARE_SERIALIZER(UHUDWidget)


#define gj_Source_gj_HUDWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUHUDWidget(); \
	friend struct Z_Construct_UClass_UHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/gj"), NO_API) \
	DECLARE_SERIALIZER(UHUDWidget)


#define gj_Source_gj_HUDWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHUDWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHUDWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHUDWidget(UHUDWidget&&); \
	NO_API UHUDWidget(const UHUDWidget&); \
public:


#define gj_Source_gj_HUDWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHUDWidget(UHUDWidget&&); \
	NO_API UHUDWidget(const UHUDWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHUDWidget)


#define gj_Source_gj_HUDWidget_h_16_PRIVATE_PROPERTY_OFFSET
#define gj_Source_gj_HUDWidget_h_13_PROLOG
#define gj_Source_gj_HUDWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gj_Source_gj_HUDWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	gj_Source_gj_HUDWidget_h_16_SPARSE_DATA \
	gj_Source_gj_HUDWidget_h_16_RPC_WRAPPERS \
	gj_Source_gj_HUDWidget_h_16_INCLASS \
	gj_Source_gj_HUDWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gj_Source_gj_HUDWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gj_Source_gj_HUDWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	gj_Source_gj_HUDWidget_h_16_SPARSE_DATA \
	gj_Source_gj_HUDWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	gj_Source_gj_HUDWidget_h_16_INCLASS_NO_PURE_DECLS \
	gj_Source_gj_HUDWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GJ_API UClass* StaticClass<class UHUDWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gj_Source_gj_HUDWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
