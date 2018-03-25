// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SimLabsVRGameModeBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimLabsVRGameModeBase() {}
// Cross Module References
	SIMLABSVR_API UClass* Z_Construct_UClass_ASimLabsVRGameModeBase_NoRegister();
	SIMLABSVR_API UClass* Z_Construct_UClass_ASimLabsVRGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SimLabsVR();
// End Cross Module References
	void ASimLabsVRGameModeBase::StaticRegisterNativesASimLabsVRGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASimLabsVRGameModeBase_NoRegister()
	{
		return ASimLabsVRGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ASimLabsVRGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_SimLabsVR();
			OuterClass = ASimLabsVRGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ASimLabsVRGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SimLabsVRGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SimLabsVRGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASimLabsVRGameModeBase, 2637588125);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASimLabsVRGameModeBase(Z_Construct_UClass_ASimLabsVRGameModeBase, &ASimLabsVRGameModeBase::StaticClass, TEXT("/Script/SimLabsVR"), TEXT("ASimLabsVRGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimLabsVRGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
