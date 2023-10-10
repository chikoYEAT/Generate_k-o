// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProj/Tanuki.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTanuki() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	FIRSTPROJ_API UClass* Z_Construct_UClass_ATanuki();
	FIRSTPROJ_API UClass* Z_Construct_UClass_ATanuki_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FirstProj();
// End Cross Module References
	void ATanuki::StaticRegisterNativesATanuki()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATanuki);
	UClass* Z_Construct_UClass_ATanuki_NoRegister()
	{
		return ATanuki::StaticClass();
	}
	struct Z_Construct_UClass_ATanuki_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATanuki_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProj,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATanuki_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATanuki_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tanuki.h" },
		{ "ModuleRelativePath", "Tanuki.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATanuki_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATanuki>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATanuki_Statics::ClassParams = {
		&ATanuki::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATanuki_Statics::Class_MetaDataParams), Z_Construct_UClass_ATanuki_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATanuki()
	{
		if (!Z_Registration_Info_UClass_ATanuki.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATanuki.OuterSingleton, Z_Construct_UClass_ATanuki_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATanuki.OuterSingleton;
	}
	template<> FIRSTPROJ_API UClass* StaticClass<ATanuki>()
	{
		return ATanuki::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATanuki);
	ATanuki::~ATanuki() {}
	struct Z_CompiledInDeferFile_FID_game_files_FirstProj_5_3_Source_FirstProj_Tanuki_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_files_FirstProj_5_3_Source_FirstProj_Tanuki_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATanuki, ATanuki::StaticClass, TEXT("ATanuki"), &Z_Registration_Info_UClass_ATanuki, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATanuki), 681577724U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_game_files_FirstProj_5_3_Source_FirstProj_Tanuki_h_1268675037(TEXT("/Script/FirstProj"),
		Z_CompiledInDeferFile_FID_game_files_FirstProj_5_3_Source_FirstProj_Tanuki_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_game_files_FirstProj_5_3_Source_FirstProj_Tanuki_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
