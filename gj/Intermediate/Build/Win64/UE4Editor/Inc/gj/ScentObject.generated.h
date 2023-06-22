// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GJ_ScentObject_generated_h
#error "ScentObject.generated.h already included, missing '#pragma once' in ScentObject.h"
#endif
#define GJ_ScentObject_generated_h

#define gj_Source_gj_ScentObject_h_12_SPARSE_DATA
#define gj_Source_gj_ScentObject_h_12_RPC_WRAPPERS
#define gj_Source_gj_ScentObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define gj_Source_gj_ScentObject_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScentObject(); \
	friend struct Z_Construct_UClass_AScentObject_Statics; \
public: \
	DECLARE_CLASS(AScentObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gj"), NO_API) \
	DECLARE_SERIALIZER(AScentObject)


#define gj_Source_gj_ScentObject_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAScentObject(); \
	friend struct Z_Construct_UClass_AScentObject_Statics; \
public: \
	DECLARE_CLASS(AScentObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gj"), NO_API) \
	DECLARE_SERIALIZER(AScentObject)


#define gj_Source_gj_ScentObject_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AScentObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScentObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScentObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScentObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScentObject(AScentObject&&); \
	NO_API AScentObject(const AScentObject&); \
public:


#define gj_Source_gj_ScentObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScentObject(AScentObject&&); \
	NO_API AScentObject(const AScentObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScentObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScentObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScentObject)


#define gj_Source_gj_ScentObject_h_12_PRIVATE_PROPERTY_OFFSET
#define gj_Source_gj_ScentObject_h_9_PROLOG
#define gj_Source_gj_ScentObject_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gj_Source_gj_ScentObject_h_12_PRIVATE_PROPERTY_OFFSET \
	gj_Source_gj_ScentObject_h_12_SPARSE_DATA \
	gj_Source_gj_ScentObject_h_12_RPC_WRAPPERS \
	gj_Source_gj_ScentObject_h_12_INCLASS \
	gj_Source_gj_ScentObject_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gj_Source_gj_ScentObject_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gj_Source_gj_ScentObject_h_12_PRIVATE_PROPERTY_OFFSET \
	gj_Source_gj_ScentObject_h_12_SPARSE_DATA \
	gj_Source_gj_ScentObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	gj_Source_gj_ScentObject_h_12_INCLASS_NO_PURE_DECLS \
	gj_Source_gj_ScentObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GJ_API UClass* StaticClass<class AScentObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gj_Source_gj_ScentObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
