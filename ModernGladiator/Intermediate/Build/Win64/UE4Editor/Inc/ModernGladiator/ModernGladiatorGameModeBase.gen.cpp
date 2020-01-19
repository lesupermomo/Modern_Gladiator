// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModernGladiator/ModernGladiatorGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModernGladiatorGameModeBase() {}
// Cross Module References
	MODERNGLADIATOR_API UClass* Z_Construct_UClass_AModernGladiatorGameModeBase_NoRegister();
	MODERNGLADIATOR_API UClass* Z_Construct_UClass_AModernGladiatorGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ModernGladiator();
// End Cross Module References
	void AModernGladiatorGameModeBase::StaticRegisterNativesAModernGladiatorGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AModernGladiatorGameModeBase_NoRegister()
	{
		return AModernGladiatorGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AModernGladiatorGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModernGladiatorGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ModernGladiator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModernGladiatorGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ModernGladiatorGameModeBase.h" },
		{ "ModuleRelativePath", "ModernGladiatorGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModernGladiatorGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModernGladiatorGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModernGladiatorGameModeBase_Statics::ClassParams = {
		&AModernGladiatorGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AModernGladiatorGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModernGladiatorGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModernGladiatorGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModernGladiatorGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModernGladiatorGameModeBase, 4058530627);
	template<> MODERNGLADIATOR_API UClass* StaticClass<AModernGladiatorGameModeBase>()
	{
		return AModernGladiatorGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModernGladiatorGameModeBase(Z_Construct_UClass_AModernGladiatorGameModeBase, &AModernGladiatorGameModeBase::StaticClass, TEXT("/Script/ModernGladiator"), TEXT("AModernGladiatorGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModernGladiatorGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
