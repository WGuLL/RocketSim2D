// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceProgram2D/SpaceProgram2DGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceProgram2DGameModeBase() {}
// Cross Module References
	SPACEPROGRAM2D_API UClass* Z_Construct_UClass_ASpaceProgram2DGameModeBase_NoRegister();
	SPACEPROGRAM2D_API UClass* Z_Construct_UClass_ASpaceProgram2DGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SpaceProgram2D();
// End Cross Module References
	void ASpaceProgram2DGameModeBase::StaticRegisterNativesASpaceProgram2DGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASpaceProgram2DGameModeBase_NoRegister()
	{
		return ASpaceProgram2DGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceProgram2DGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceProgram2DGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceProgram2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceProgram2DGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpaceProgram2DGameModeBase.h" },
		{ "ModuleRelativePath", "SpaceProgram2DGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceProgram2DGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceProgram2DGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpaceProgram2DGameModeBase_Statics::ClassParams = {
		&ASpaceProgram2DGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceProgram2DGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpaceProgram2DGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceProgram2DGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpaceProgram2DGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpaceProgram2DGameModeBase, 36526338);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceProgram2DGameModeBase(Z_Construct_UClass_ASpaceProgram2DGameModeBase, &ASpaceProgram2DGameModeBase::StaticClass, TEXT("/Script/SpaceProgram2D"), TEXT("ASpaceProgram2DGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceProgram2DGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
