// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Llanta_SIS457/Llanta.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLlanta() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
LLANTA_SIS457_API UClass* Z_Construct_UClass_ALlanta();
LLANTA_SIS457_API UClass* Z_Construct_UClass_ALlanta_NoRegister();
UPackage* Z_Construct_UPackage__Script_Llanta_SIS457();
// End Cross Module References

// Begin Class ALlanta
void ALlanta::StaticRegisterNativesALlanta()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALlanta);
UClass* Z_Construct_UClass_ALlanta_NoRegister()
{
	return ALlanta::StaticClass();
}
struct Z_Construct_UClass_ALlanta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Llanta.h" },
		{ "ModuleRelativePath", "Llanta.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LlantaMesh_MetaData[] = {
		{ "Category", "Llanta" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Llanta.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LlantaMaterial_MetaData[] = {
		{ "Category", "Llanta" },
		{ "ModuleRelativePath", "Llanta.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LlantaMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LlantaMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALlanta>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALlanta_Statics::NewProp_LlantaMesh = { "LlantaMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALlanta, LlantaMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LlantaMesh_MetaData), NewProp_LlantaMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALlanta_Statics::NewProp_LlantaMaterial = { "LlantaMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALlanta, LlantaMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LlantaMaterial_MetaData), NewProp_LlantaMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALlanta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALlanta_Statics::NewProp_LlantaMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALlanta_Statics::NewProp_LlantaMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALlanta_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALlanta_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Llanta_SIS457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALlanta_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALlanta_Statics::ClassParams = {
	&ALlanta::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALlanta_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALlanta_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALlanta_Statics::Class_MetaDataParams), Z_Construct_UClass_ALlanta_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALlanta()
{
	if (!Z_Registration_Info_UClass_ALlanta.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALlanta.OuterSingleton, Z_Construct_UClass_ALlanta_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALlanta.OuterSingleton;
}
template<> LLANTA_SIS457_API UClass* StaticClass<ALlanta>()
{
	return ALlanta::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALlanta);
ALlanta::~ALlanta() {}
// End Class ALlanta

// Begin Registration
struct Z_CompiledInDeferFile_FID_Llanta_SIS457_Source_Llanta_SIS457_Llanta_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALlanta, ALlanta::StaticClass, TEXT("ALlanta"), &Z_Registration_Info_UClass_ALlanta, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALlanta), 81013384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Llanta_SIS457_Source_Llanta_SIS457_Llanta_h_1942044233(TEXT("/Script/Llanta_SIS457"),
	Z_CompiledInDeferFile_FID_Llanta_SIS457_Source_Llanta_SIS457_Llanta_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Llanta_SIS457_Source_Llanta_SIS457_Llanta_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
