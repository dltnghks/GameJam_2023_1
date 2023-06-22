// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GJ_Scent_generated_h
#error "Scent.generated.h already included, missing '#pragma once' in Scent.h"
#endif
#define GJ_Scent_generated_h

#define gj_Source_gj_Scent_h_12_SPARSE_DATA
#define gj_Source_gj_Scent_h_12_RPC_WRAPPERS
#define gj_Source_gj_Scent_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define gj_Source_gj_Scent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScent(); \
	friend struct Z_Construct_UClass_AScent_Statics; \
public: \
	DECLARE_CLASS(AScent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gj"), NO_API) \
	DECLARE_SERIALIZER(AScent)


#define gj_Source_gj_Scent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAScent(); \
	friend struct Z_Construct_UClass_AScent_Statics; \
public: \
	DECLARE_CLASS(AScent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gj"), NO_API) \
	DECLARE_SERIALIZER(AScent)


#define gj_Source_gj_Scent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AScent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScent(AScent&&); \
	NO_API AScent(const AScent&); \
public:


#define gj_Source_gj_Scent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScent(AScent&&); \
	NO_API AScent(const AScent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScent)


#define gj_Source_gj_Scent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__speed() { return STRUCT_OFFSET(AScent, speed); }


#define gj_Source_gj_Scent_h_9_PROLOG
#define gj_Source_gj_Scent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gj_Source_gj_Scent_h_12_PRIVATE_PROPERTY_OFFSET \
	gj_Source_gj_Scent_h_12_SPARSE_DATA \
	gj_Source_gj_Scent_h_12_RPC_WRAPPERS \
	gj_Source_gj_Scent_h_12_INCLASS \
	gj_Source_gj_Scent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gj_Source_gj_Scent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gj_Source_gj_Scent_h_12_PRIVATE_PROPERTY_OFFSET \
	gj_Source_gj_Scent_h_12_SPARSE_DATA \
	gj_Source_gj_Scent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	gj_Source_gj_Scent_h_12_INCLASS_NO_PURE_DECLS \
	gj_Source_gj_Scent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GJ_API UClass* StaticClass<class AScent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gj_Source_gj_Scent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
