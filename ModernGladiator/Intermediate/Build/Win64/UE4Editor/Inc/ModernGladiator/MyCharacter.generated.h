// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODERNGLADIATOR_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define MODERNGLADIATOR_MyCharacter_generated_h

#define ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_SPARSE_DATA
#define ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_RPC_WRAPPERS \
	virtual void TraceForward_Implementation(); \
 \
	DECLARE_FUNCTION(execTraceForward) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TraceForward_Implementation(); \
		P_NATIVE_END; \
	}


#define ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTraceForward) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TraceForward_Implementation(); \
		P_NATIVE_END; \
	}


#define ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_EVENT_PARMS
#define ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_CALLBACK_WRAPPERS
#define ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModernGladiator"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModernGladiator"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public:


#define ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter)


#define ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseTurnRate() { return STRUCT_OFFSET(AMyCharacter, BaseTurnRate); } \
	FORCEINLINE static uint32 __PPO__BaseLookUpAtRate() { return STRUCT_OFFSET(AMyCharacter, BaseLookUpAtRate); } \
	FORCEINLINE static uint32 __PPO__TraceDistance() { return STRUCT_OFFSET(AMyCharacter, TraceDistance); } \
	FORCEINLINE static uint32 __PPO__MinZ() { return STRUCT_OFFSET(AMyCharacter, MinZ); } \
	FORCEINLINE static uint32 __PPO__MaxZ() { return STRUCT_OFFSET(AMyCharacter, MaxZ); }


#define ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_15_PROLOG \
	ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_EVENT_PARMS


#define ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_SPARSE_DATA \
	ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_RPC_WRAPPERS \
	ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_CALLBACK_WRAPPERS \
	ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_INCLASS \
	ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_SPARSE_DATA \
	ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_CALLBACK_WRAPPERS \
	ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_INCLASS_NO_PURE_DECLS \
	ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODERNGLADIATOR_API UClass* StaticClass<class AMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ModernGladiator_Source_ModernGladiator_Public_Characters_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
