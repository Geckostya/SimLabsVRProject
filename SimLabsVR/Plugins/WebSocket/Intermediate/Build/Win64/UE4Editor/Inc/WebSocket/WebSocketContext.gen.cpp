// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/WebSocket.h"
#include "Private/WebSocketContext.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSocketContext() {}
// Cross Module References
	WEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketContext_NoRegister();
	WEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WebSocket();
// End Cross Module References
	void UWebSocketContext::StaticRegisterNativesUWebSocketContext()
	{
	}
	UClass* Z_Construct_UClass_UWebSocketContext_NoRegister()
	{
		return UWebSocketContext::StaticClass();
	}
	UClass* Z_Construct_UClass_UWebSocketContext()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_WebSocket();
			OuterClass = UWebSocketContext::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UWebSocketContext> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WebSocketContext.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/WebSocketContext.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSocketContext, 1836070774);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSocketContext(Z_Construct_UClass_UWebSocketContext, &UWebSocketContext::StaticClass, TEXT("/Script/WebSocket"), TEXT("UWebSocketContext"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketContext);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
