// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D/Public/Animation/CppAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppAnimInstance() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	D_API UClass* Z_Construct_UClass_UCppAnimInstance();
	D_API UClass* Z_Construct_UClass_UCppAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_D();
// End Cross Module References
	DEFINE_FUNCTION(UCppAnimInstance::execUpdateVelocityData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVelocityData();
		P_NATIVE_END;
	}
	void UCppAnimInstance::StaticRegisterNativesUCppAnimInstance()
	{
		UClass* Class = UCppAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateVelocityData", &UCppAnimInstance::execUpdateVelocityData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCppAnimInstance_UpdateVelocityData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppAnimInstance_UpdateVelocityData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/CppAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppAnimInstance_UpdateVelocityData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppAnimInstance, nullptr, "UpdateVelocityData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCppAnimInstance_UpdateVelocityData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCppAnimInstance_UpdateVelocityData_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCppAnimInstance_UpdateVelocityData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCppAnimInstance_UpdateVelocityData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCppAnimInstance);
	UClass* Z_Construct_UClass_UCppAnimInstance_NoRegister()
	{
		return UCppAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCppAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasVelocity_MetaData[];
#endif
		static void NewProp_HasVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCppAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCppAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCppAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCppAnimInstance_UpdateVelocityData, "UpdateVelocityData" }, // 3244275645
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCppAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/CppAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/CppAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppAnimInstance_Statics::NewProp_LocalVelocity_MetaData[] = {
		{ "Category", "Example" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The local velocity of the animated character\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/CppAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The local velocity of the animated character" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCppAnimInstance_Statics::NewProp_LocalVelocity = { "LocalVelocity", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCppAnimInstance, LocalVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCppAnimInstance_Statics::NewProp_LocalVelocity_MetaData), Z_Construct_UClass_UCppAnimInstance_Statics::NewProp_LocalVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppAnimInstance_Statics::NewProp_WorldVelocity_MetaData[] = {
		{ "Category", "Example" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The local velocity of the animated character\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/CppAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The local velocity of the animated character" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCppAnimInstance_Statics::NewProp_WorldVelocity = { "WorldVelocity", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCppAnimInstance, WorldVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCppAnimInstance_Statics::NewProp_WorldVelocity_MetaData), Z_Construct_UClass_UCppAnimInstance_Statics::NewProp_WorldVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppAnimInstance_Statics::NewProp_HasVelocity_MetaData[] = {
		{ "Category", "Example" },
		{ "ModuleRelativePath", "Public/Animation/CppAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCppAnimInstance_Statics::NewProp_HasVelocity_SetBit(void* Obj)
	{
		((UCppAnimInstance*)Obj)->HasVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCppAnimInstance_Statics::NewProp_HasVelocity = { "HasVelocity", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCppAnimInstance), &Z_Construct_UClass_UCppAnimInstance_Statics::NewProp_HasVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCppAnimInstance_Statics::NewProp_HasVelocity_MetaData), Z_Construct_UClass_UCppAnimInstance_Statics::NewProp_HasVelocity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCppAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppAnimInstance_Statics::NewProp_LocalVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppAnimInstance_Statics::NewProp_WorldVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppAnimInstance_Statics::NewProp_HasVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCppAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCppAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCppAnimInstance_Statics::ClassParams = {
		&UCppAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCppAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCppAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCppAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCppAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCppAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCppAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UCppAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCppAnimInstance.OuterSingleton, Z_Construct_UClass_UCppAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCppAnimInstance.OuterSingleton;
	}
	template<> D_API UClass* StaticClass<UCppAnimInstance>()
	{
		return UCppAnimInstance::StaticClass();
	}
	UCppAnimInstance::UCppAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCppAnimInstance);
	UCppAnimInstance::~UCppAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCppAnimInstance, UCppAnimInstance::StaticClass, TEXT("UCppAnimInstance"), &Z_Registration_Info_UClass_UCppAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCppAnimInstance), 3359598692U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_1538142111(TEXT("/Script/D"),
		Z_CompiledInDeferFile_FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_D_Source_D_Public_Animation_CppAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
