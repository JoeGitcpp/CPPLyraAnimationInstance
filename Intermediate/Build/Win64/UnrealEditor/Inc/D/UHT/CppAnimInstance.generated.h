// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/CppAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef D_CppAnimInstance_generated_h
#error "CppAnimInstance.generated.h already included, missing '#pragma once' in CppAnimInstance.h"
#endif
#define D_CppAnimInstance_generated_h

#define FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_15_SPARSE_DATA
#define FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateVelocityData);


#define FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_15_ACCESSORS
#define FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCppAnimInstance(); \
	friend struct Z_Construct_UClass_UCppAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCppAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/D"), NO_API) \
	DECLARE_SERIALIZER(UCppAnimInstance)


#define FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCppAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCppAnimInstance(UCppAnimInstance&&); \
	NO_API UCppAnimInstance(const UCppAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCppAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCppAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCppAnimInstance) \
	NO_API virtual ~UCppAnimInstance();


#define FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_12_PROLOG
#define FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_15_SPARSE_DATA \
	FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_15_ACCESSORS \
	FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> D_API UClass* StaticClass<class UCppAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
