// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D/DGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDGameMode() {}
// Cross Module References
	D_API UClass* Z_Construct_UClass_ADGameMode();
	D_API UClass* Z_Construct_UClass_ADGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_D();
// End Cross Module References
	void ADGameMode::StaticRegisterNativesADGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADGameMode);
	UClass* Z_Construct_UClass_ADGameMode_NoRegister()
	{
		return ADGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DGameMode.h" },
		{ "ModuleRelativePath", "DGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADGameMode_Statics::ClassParams = {
		&ADGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADGameMode()
	{
		if (!Z_Registration_Info_UClass_ADGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADGameMode.OuterSingleton, Z_Construct_UClass_ADGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADGameMode.OuterSingleton;
	}
	template<> D_API UClass* StaticClass<ADGameMode>()
	{
		return ADGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADGameMode);
	ADGameMode::~ADGameMode() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_D_Source_D_DGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_D_Source_D_DGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADGameMode, ADGameMode::StaticClass, TEXT("ADGameMode"), &Z_Registration_Info_UClass_ADGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADGameMode), 4016580252U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_D_Source_D_DGameMode_h_3417737440(TEXT("/Script/D"),
		Z_CompiledInDeferFile_FID_UnrealProject_D_Source_D_DGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_D_Source_D_DGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
