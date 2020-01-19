// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODERNGLADIATOR_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define MODERNGLADIATOR_InteractInterface_generated_h

#define ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_SPARSE_DATA
#define ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_RPC_WRAPPERS
#define ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODERNGLADIATOR_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODERNGLADIATOR_API, UInteractInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MODERNGLADIATOR_API UInteractInterface(UInteractInterface&&); \
	MODERNGLADIATOR_API UInteractInterface(const UInteractInterface&); \
public:


#define ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODERNGLADIATOR_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MODERNGLADIATOR_API UInteractInterface(UInteractInterface&&); \
	MODERNGLADIATOR_API UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODERNGLADIATOR_API, UInteractInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface)


#define ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModernGladiator"), MODERNGLADIATOR_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_10_PROLOG
#define ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_SPARSE_DATA \
	ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_RPC_WRAPPERS \
	ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_SPARSE_DATA \
	ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODERNGLADIATOR_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ModernGladiator_Source_ModernGladiator_Public_Interact_InteractInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
