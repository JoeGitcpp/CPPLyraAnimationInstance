// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef D_DGameMode_generated_h
#error "DGameMode.generated.h already included, missing '#pragma once' in DGameMode.h"
#endif
#define D_DGameMode_generated_h

#define FID_UnrealProject_D_Source_D_DGameMode_h_12_SPARSE_DATA
#define FID_UnrealProject_D_Source_D_DGameMode_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UnrealProject_D_Source_D_DGameMode_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UnrealProject_D_Source_D_DGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UnrealProject_D_Source_D_DGameMode_h_12_ACCESSORS
#define FID_UnrealProject_D_Source_D_DGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADGameMode(); \
	friend struct Z_Construct_UClass_ADGameMode_Statics; \
public: \
	DECLARE_CLASS(ADGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/D"), D_API) \
	DECLARE_SERIALIZER(ADGameMode)


#define FID_UnrealProject_D_Source_D_DGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	D_API ADGameMode(ADGameMode&&); \
	D_API ADGameMode(const ADGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(D_API, ADGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADGameMode) \
	D_API virtual ~ADGameMode();


#define FID_UnrealProject_D_Source_D_DGameMode_h_9_PROLOG
#define FID_UnrealProject_D_Source_D_DGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_D_Source_D_DGameMode_h_12_SPARSE_DATA \
	FID_UnrealProject_D_Source_D_DGameMode_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UnrealProject_D_Source_D_DGameMode_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UnrealProject_D_Source_D_DGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProject_D_Source_D_DGameMode_h_12_ACCESSORS \
	FID_UnrealProject_D_Source_D_DGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealProject_D_Source_D_DGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> D_API UClass* StaticClass<class ADGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_D_Source_D_DGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
