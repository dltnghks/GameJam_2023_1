// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GJ_gjCharacter_generated_h
#error "gjCharacter.generated.h already included, missing '#pragma once' in gjCharacter.h"
#endif
#define GJ_gjCharacter_generated_h

#define gj_Source_gj_gjCharacter_h_12_SPARSE_DATA
#define gj_Source_gj_gjCharacter_h_12_RPC_WRAPPERS
#define gj_Source_gj_gjCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define gj_Source_gj_gjCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAgjCharacter(); \
	friend struct Z_Construct_UClass_AgjCharacter_Statics; \
public: \
	DECLARE_CLASS(AgjCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gj"), NO_API) \
	DECLARE_SERIALIZER(AgjCharacter)


#define gj_Source_gj_gjCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAgjCharacter(); \
	friend struct Z_Construct_UClass_AgjCharacter_Statics; \
public: \
	DECLARE_CLASS(AgjCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gj"), NO_API) \
	DECLARE_SERIALIZER(AgjCharacter)


#define gj_Source_gj_gjCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AgjCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AgjCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AgjCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AgjCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AgjCharacter(AgjCharacter&&); \
	NO_API AgjCharacter(const AgjCharacter&); \
public:


#define gj_Source_gj_gjCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AgjCharacter(AgjCharacter&&); \
	NO_API AgjCharacter(const AgjCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AgjCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AgjCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AgjCharacter)


#define gj_Source_gj_gjCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AgjCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AgjCharacter, FollowCamera); }


#define gj_Source_gj_gjCharacter_h_9_PROLOG
#define gj_Source_gj_gjCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gj_Source_gj_gjCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	gj_Source_gj_gjCharacter_h_12_SPARSE_DATA \
	gj_Source_gj_gjCharacter_h_12_RPC_WRAPPERS \
	gj_Source_gj_gjCharacter_h_12_INCLASS \
	gj_Source_gj_gjCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gj_Source_gj_gjCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gj_Source_gj_gjCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	gj_Source_gj_gjCharacter_h_12_SPARSE_DATA \
	gj_Source_gj_gjCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	gj_Source_gj_gjCharacter_h_12_INCLASS_NO_PURE_DECLS \
	gj_Source_gj_gjCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GJ_API UClass* StaticClass<class AgjCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gj_Source_gj_gjCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
