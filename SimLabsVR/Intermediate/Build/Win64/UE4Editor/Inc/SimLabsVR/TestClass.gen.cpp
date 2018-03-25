// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TestClass.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestClass() {}
// Cross Module References
	SIMLABSVR_API UClass* Z_Construct_UClass_ATestClass_NoRegister();
	SIMLABSVR_API UClass* Z_Construct_UClass_ATestClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SimLabsVR();
// End Cross Module References
	void ATestClass::StaticRegisterNativesATestClass()
	{
	}
	UClass* Z_Construct_UClass_ATestClass_NoRegister()
	{
		return ATestClass::StaticClass();
	}
	UClass* Z_Construct_UClass_ATestClass()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_SimLabsVR();
			OuterClass = ATestClass::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_someInt = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("someInt"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(someInt, ATestClass), 0x0010000000020005);
				static TCppClassTypeInfo<TCppClassTypeTraits<ATestClass> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TestClass.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TestClass.h"));
				MetaData->SetValue(NewProp_someInt, TEXT("Category"), TEXT("My Variables"));
				MetaData->SetValue(NewProp_someInt, TEXT("ModuleRelativePath"), TEXT("TestClass.h"));
				MetaData->SetValue(NewProp_someInt, TEXT("ToolTip"), TEXT("Visible/Edit + DefaultsOnly/Anywhere ; Blueprint + ReadWrite/ReadOnly"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestClass, 3608603381);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestClass(Z_Construct_UClass_ATestClass, &ATestClass::StaticClass, TEXT("/Script/SimLabsVR"), TEXT("ATestClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
