// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CGP23/Public/CropPlotObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCropPlotObject() {}
// Cross Module References
	CGP23_API UClass* Z_Construct_UClass_ACropPlotObject();
	CGP23_API UClass* Z_Construct_UClass_ACropPlotObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CGP23();
// End Cross Module References
	void ACropPlotObject::StaticRegisterNativesACropPlotObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACropPlotObject);
	UClass* Z_Construct_UClass_ACropPlotObject_NoRegister()
	{
		return ACropPlotObject::StaticClass();
	}
	struct Z_Construct_UClass_ACropPlotObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACropPlotObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CGP23,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropPlotObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CropPlotObject.h" },
		{ "ModuleRelativePath", "Public/CropPlotObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACropPlotObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACropPlotObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACropPlotObject_Statics::ClassParams = {
		&ACropPlotObject::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ACropPlotObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACropPlotObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACropPlotObject()
	{
		if (!Z_Registration_Info_UClass_ACropPlotObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACropPlotObject.OuterSingleton, Z_Construct_UClass_ACropPlotObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACropPlotObject.OuterSingleton;
	}
	template<> CGP23_API UClass* StaticClass<ACropPlotObject>()
	{
		return ACropPlotObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACropPlotObject);
	ACropPlotObject::~ACropPlotObject() {}
	struct Z_CompiledInDeferFile_FID_Users_c017176m_Documents_GitHub_CGP_23_CGP23_Source_CGP23_Public_CropPlotObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_c017176m_Documents_GitHub_CGP_23_CGP23_Source_CGP23_Public_CropPlotObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACropPlotObject, ACropPlotObject::StaticClass, TEXT("ACropPlotObject"), &Z_Registration_Info_UClass_ACropPlotObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACropPlotObject), 1183968643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_c017176m_Documents_GitHub_CGP_23_CGP23_Source_CGP23_Public_CropPlotObject_h_1255162007(TEXT("/Script/CGP23"),
		Z_CompiledInDeferFile_FID_Users_c017176m_Documents_GitHub_CGP_23_CGP23_Source_CGP23_Public_CropPlotObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_c017176m_Documents_GitHub_CGP_23_CGP23_Source_CGP23_Public_CropPlotObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
