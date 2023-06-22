// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GJ_EndGameWidget_generated_h
#error "EndGameWidget.generated.h already included, missing '#pragma once' in EndGameWidget.h"
#endif
#define GJ_EndGameWidget_generated_h

#define gj_Source_gj_EndGameWidget_h_15_SPARSE_DATA
#define gj_Source_gj_EndGameWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnButtonClicked);


#define gj_Source_gj_EndGameWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnButtonClicked);


#define gj_Source_gj_EndGameWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEndGameWidget(); \
	friend struct Z_Construct_UClass_UEndGameWidget_Statics; \
public: \
	DECLARE_CLASS(UEndGameWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/gj"), NO_API) \
	DECLARE_SERIALIZER(UEndGameWidget)


#define gj_Source_gj_EndGameWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEndGameWidget(); \
	friend struct Z_Construct_UClass_UEndGameWidget_Statics; \
public: \
	DECLARE_CLASS(UEndGameWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/gj"), NO_API) \
	DECLARE_SERIALIZER(UEndGameWidget)


#define gj_Source_gj_EndGameWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndGameWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndGameWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndGameWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndGameWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndGameWidget(UEndGameWidget&&); \
	NO_API UEndGameWidget(const UEndGameWidget&); \
public:


#define gj_Source_gj_EndGameWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndGameWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndGameWidget(UEndGameWidget&&); \
	NO_API UEndGameWidget(const UEndGameWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndGameWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndGameWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndGameWidget)


#define gj_Source_gj_EndGameWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define gj_Source_gj_EndGameWidget_h_12_PROLOG
#define gj_Source_gj_EndGameWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gj_Source_gj_EndGameWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	gj_Source_gj_EndGameWidget_h_15_SPARSE_DATA \
	gj_Source_gj_EndGameWidget_h_15_RPC_WRAPPERS \
	gj_Source_gj_EndGameWidget_h_15_INCLASS \
	gj_Source_gj_EndGameWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gj_Source_gj_EndGameWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gj_Source_gj_EndGameWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	gj_Source_gj_EndGameWidget_h_15_SPARSE_DATA \
	gj_Source_gj_EndGameWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	gj_Source_gj_EndGameWidget_h_15_INCLASS_NO_PURE_DECLS \
	gj_Source_gj_EndGameWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GJ_API UClass* StaticClass<class UEndGameWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gj_Source_gj_EndGameWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
