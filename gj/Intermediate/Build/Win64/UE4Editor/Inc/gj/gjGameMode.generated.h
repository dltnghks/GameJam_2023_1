// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GJ_gjGameMode_generated_h
#error "gjGameMode.generated.h already included, missing '#pragma once' in gjGameMode.h"
#endif
#define GJ_gjGameMode_generated_h

#define gj_Source_gj_gjGameMode_h_12_SPARSE_DATA
#define gj_Source_gj_gjGameMode_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDiscountFlower); \
	DECLARE_FUNCTION(execGetFlowerCount);


#define gj_Source_gj_gjGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDiscountFlower); \
	DECLARE_FUNCTION(execGetFlowerCount);


#define gj_Source_gj_gjGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAgjGameMode(); \
	friend struct Z_Construct_UClass_AgjGameMode_Statics; \
public: \
	DECLARE_CLASS(AgjGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/gj"), GJ_API) \
	DECLARE_SERIALIZER(AgjGameMode)


#define gj_Source_gj_gjGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAgjGameMode(); \
	friend struct Z_Construct_UClass_AgjGameMode_Statics; \
public: \
	DECLARE_CLASS(AgjGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/gj"), GJ_API) \
	DECLARE_SERIALIZER(AgjGameMode)


#define gj_Source_gj_gjGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GJ_API AgjGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AgjGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GJ_API, AgjGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AgjGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GJ_API AgjGameMode(AgjGameMode&&); \
	GJ_API AgjGameMode(const AgjGameMode&); \
public:


#define gj_Source_gj_gjGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GJ_API AgjGameMode(AgjGameMode&&); \
	GJ_API AgjGameMode(const AgjGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GJ_API, AgjGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AgjGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AgjGameMode)


#define gj_Source_gj_gjGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define gj_Source_gj_gjGameMode_h_9_PROLOG
#define gj_Source_gj_gjGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gj_Source_gj_gjGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	gj_Source_gj_gjGameMode_h_12_SPARSE_DATA \
	gj_Source_gj_gjGameMode_h_12_RPC_WRAPPERS \
	gj_Source_gj_gjGameMode_h_12_INCLASS \
	gj_Source_gj_gjGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gj_Source_gj_gjGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gj_Source_gj_gjGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	gj_Source_gj_gjGameMode_h_12_SPARSE_DATA \
	gj_Source_gj_gjGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	gj_Source_gj_gjGameMode_h_12_INCLASS_NO_PURE_DECLS \
	gj_Source_gj_gjGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GJ_API UClass* StaticClass<class AgjGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gj_Source_gj_gjGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
