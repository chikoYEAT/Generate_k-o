// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstProj_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FirstProj;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FirstProj()
	{
		if (!Z_Registration_Info_UPackage__Script_FirstProj.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FirstProj",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x20A5B459,
				0x1493F1E1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FirstProj.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FirstProj.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FirstProj(Z_Construct_UPackage__Script_FirstProj, TEXT("/Script/FirstProj"), Z_Registration_Info_UPackage__Script_FirstProj, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x20A5B459, 0x1493F1E1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
