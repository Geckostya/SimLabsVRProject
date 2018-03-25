// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMLABSVR_TestClass_generated_h
#error "TestClass.generated.h already included, missing '#pragma once' in TestClass.h"
#endif
#define SIMLABSVR_TestClass_generated_h

#define SimLabsVR_Source_SimLabsVR_TestClass_h_12_RPC_WRAPPERS
#define SimLabsVR_Source_SimLabsVR_TestClass_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SimLabsVR_Source_SimLabsVR_TestClass_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestClass(); \
	friend SIMLABSVR_API class UClass* Z_Construct_UClass_ATestClass(); \
public: \
	DECLARE_CLASS(ATestClass, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SimLabsVR"), NO_API) \
	DECLARE_SERIALIZER(ATestClass) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SimLabsVR_Source_SimLabsVR_TestClass_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATestClass(); \
	friend SIMLABSVR_API class UClass* Z_Construct_UClass_ATestClass(); \
public: \
	DECLARE_CLASS(ATestClass, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SimLabsVR"), NO_API) \
	DECLARE_SERIALIZER(ATestClass) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SimLabsVR_Source_SimLabsVR_TestClass_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestClass(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestClass(ATestClass&&); \
	NO_API ATestClass(const ATestClass&); \
public:


#define SimLabsVR_Source_SimLabsVR_TestClass_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestClass(ATestClass&&); \
	NO_API ATestClass(const ATestClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestClass)


#define SimLabsVR_Source_SimLabsVR_TestClass_h_12_PRIVATE_PROPERTY_OFFSET
#define SimLabsVR_Source_SimLabsVR_TestClass_h_9_PROLOG
#define SimLabsVR_Source_SimLabsVR_TestClass_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimLabsVR_Source_SimLabsVR_TestClass_h_12_PRIVATE_PROPERTY_OFFSET \
	SimLabsVR_Source_SimLabsVR_TestClass_h_12_RPC_WRAPPERS \
	SimLabsVR_Source_SimLabsVR_TestClass_h_12_INCLASS \
	SimLabsVR_Source_SimLabsVR_TestClass_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SimLabsVR_Source_SimLabsVR_TestClass_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimLabsVR_Source_SimLabsVR_TestClass_h_12_PRIVATE_PROPERTY_OFFSET \
	SimLabsVR_Source_SimLabsVR_TestClass_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SimLabsVR_Source_SimLabsVR_TestClass_h_12_INCLASS_NO_PURE_DECLS \
	SimLabsVR_Source_SimLabsVR_TestClass_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SimLabsVR_Source_SimLabsVR_TestClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
