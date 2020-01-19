// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModernGladiator/Public/Interact/MyInteractable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyInteractable() {}
// Cross Module References
	MODERNGLADIATOR_API UClass* Z_Construct_UClass_AMyInteractable_NoRegister();
	MODERNGLADIATOR_API UClass* Z_Construct_UClass_AMyInteractable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ModernGladiator();
	MODERNGLADIATOR_API UFunction* Z_Construct_UFunction_AMyInteractable_EndFocus();
	MODERNGLADIATOR_API UFunction* Z_Construct_UFunction_AMyInteractable_OnInteract();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MODERNGLADIATOR_API UFunction* Z_Construct_UFunction_AMyInteractable_StartFocus();
	MODERNGLADIATOR_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
// End Cross Module References
	static FName NAME_AMyInteractable_EndFocus = FName(TEXT("EndFocus"));
	void AMyInteractable::EndFocus()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyInteractable_EndFocus),NULL);
	}
	static FName NAME_AMyInteractable_OnInteract = FName(TEXT("OnInteract"));
	void AMyInteractable::OnInteract(AActor* Caller)
	{
		MyInteractable_eventOnInteract_Parms Parms;
		Parms.Caller=Caller;
		ProcessEvent(FindFunctionChecked(NAME_AMyInteractable_OnInteract),&Parms);
	}
	static FName NAME_AMyInteractable_StartFocus = FName(TEXT("StartFocus"));
	void AMyInteractable::StartFocus()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyInteractable_StartFocus),NULL);
	}
	void AMyInteractable::StaticRegisterNativesAMyInteractable()
	{
		UClass* Class = AMyInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndFocus", &AMyInteractable::execEndFocus },
			{ "OnInteract", &AMyInteractable::execOnInteract },
			{ "StartFocus", &AMyInteractable::execStartFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyInteractable_EndFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyInteractable_EndFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interact/MyInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyInteractable_EndFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyInteractable, nullptr, "EndFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyInteractable_EndFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyInteractable_EndFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyInteractable_EndFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyInteractable_EndFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyInteractable_OnInteract_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyInteractable_OnInteract_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyInteractable_eventOnInteract_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyInteractable_OnInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyInteractable_OnInteract_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyInteractable_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interact/MyInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyInteractable_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyInteractable, nullptr, "OnInteract", nullptr, nullptr, sizeof(MyInteractable_eventOnInteract_Parms), Z_Construct_UFunction_AMyInteractable_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyInteractable_OnInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyInteractable_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyInteractable_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyInteractable_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyInteractable_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyInteractable_StartFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyInteractable_StartFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interact/MyInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyInteractable_StartFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyInteractable, nullptr, "StartFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyInteractable_StartFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyInteractable_StartFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyInteractable_StartFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyInteractable_StartFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyInteractable_NoRegister()
	{
		return AMyInteractable::StaticClass();
	}
	struct Z_Construct_UClass_AMyInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ModernGladiator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyInteractable_EndFocus, "EndFocus" }, // 3583643795
		{ &Z_Construct_UFunction_AMyInteractable_OnInteract, "OnInteract" }, // 403451316
		{ &Z_Construct_UFunction_AMyInteractable_StartFocus, "StartFocus" }, // 1607250730
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interact/MyInteractable.h" },
		{ "ModuleRelativePath", "Public/Interact/MyInteractable.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMyInteractable_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AMyInteractable, IInteractInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyInteractable_Statics::ClassParams = {
		&AMyInteractable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyInteractable, 3774306072);
	template<> MODERNGLADIATOR_API UClass* StaticClass<AMyInteractable>()
	{
		return AMyInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyInteractable(Z_Construct_UClass_AMyInteractable, &AMyInteractable::StaticClass, TEXT("/Script/ModernGladiator"), TEXT("AMyInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
