// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MODERNGLADIATOR_MyInteractable_generated_h
#error "MyInteractable.generated.h already included, missing '#pragma once' in MyInteractable.h"
#endif
#define MODERNGLADIATOR_MyInteractable_generated_h

#define ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_SPARSE_DATA
#define ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_RPC_WRAPPERS \
	virtual void EndFocus_Implementation(); \
	virtual void StartFocus_Implementation(); \
	virtual void OnInteract_Implementation(AActor* Caller); \
 \
	DECLARE_FUNCTION(execEndFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndFocus_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFocus_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInteract) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Caller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInteract_Implementation(Z_Param_Caller); \
		P_NATIVE_END; \
	}


#define ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndFocus_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFocus_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInteract) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Caller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInteract_Implementation(Z_Param_Caller); \
		P_NATIVE_END; \
	}


#define ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_EVENT_PARMS \
	struct MyInteractable_eventOnInteract_Parms \
	{ \
		AActor* Caller; \
	};


#define ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_CALLBACK_WRAPPERS
#define ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyInteractable(); \
	friend struct Z_Construct_UClass_AMyInteractable_Statics; \
public: \
	DECLARE_CLASS(AMyInteractable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModernGladiator"), NO_API) \
	DECLARE_SERIALIZER(AMyInteractable) \
	virtual UObject* _getUObject() const override { return const_cast<AMyInteractable*>(this); }


#define ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyInteractable(); \
	friend struct Z_Construct_UClass_AMyInteractable_Statics; \
public: \
	DECLARE_CLASS(AMyInteractable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModernGladiator"), NO_API) \
	DECLARE_SERIALIZER(AMyInteractable) \
	virtual UObject* _getUObject() const override { return const_cast<AMyInteractable*>(this); }


#define ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyInteractable(AMyInteractable&&); \
	NO_API AMyInteractable(const AMyInteractable&); \
public:


#define ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyInteractable(AMyInteractable&&); \
	NO_API AMyInteractable(const AMyInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyInteractable)


#define ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_PRIVATE_PROPERTY_OFFSET
#define ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_10_PROLOG \
	ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_EVENT_PARMS


#define ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_PRIVATE_PROPERTY_OFFSET \
	ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_SPARSE_DATA \
	ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_RPC_WRAPPERS \
	ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_CALLBACK_WRAPPERS \
	ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_INCLASS \
	ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_PRIVATE_PROPERTY_OFFSET \
	ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_SPARSE_DATA \
	ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_CALLBACK_WRAPPERS \
	ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_INCLASS_NO_PURE_DECLS \
	ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODERNGLADIATOR_API UClass* StaticClass<class AMyInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ModernGladiator_Source_ModernGladiator_Public_Interact_MyInteractable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
