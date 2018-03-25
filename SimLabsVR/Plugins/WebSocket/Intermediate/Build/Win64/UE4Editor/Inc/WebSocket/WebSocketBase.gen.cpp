// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/WebSocket.h"
#include "Public/WebSocketBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSocketBase() {}
// Cross Module References
	WEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketRecieve__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_WebSocket();
	WEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketConnected__DelegateSignature();
	WEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketClosed__DelegateSignature();
	WEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketConnectError__DelegateSignature();
	WEBSOCKET_API UFunction* Z_Construct_UFunction_UWebSocketBase_Close();
	WEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketBase();
	WEBSOCKET_API UFunction* Z_Construct_UFunction_UWebSocketBase_SendText();
	WEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketRecieve__DelegateSignature()
	{
		struct _Script_WebSocket_eventWebSocketRecieve_Parms
		{
			FString data;
		};
		UObject* Outer = Z_Construct_UPackage__Script_WebSocket();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WebSocketRecieve__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_WebSocket_eventWebSocketRecieve_Parms));
			UProperty* NewProp_data = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(data, _Script_WebSocket_eventWebSocketRecieve_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
			MetaData->SetValue(NewProp_data, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketConnected__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UPackage__Script_WebSocket();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WebSocketConnected__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketClosed__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UPackage__Script_WebSocket();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WebSocketClosed__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketConnectError__DelegateSignature()
	{
		struct _Script_WebSocket_eventWebSocketConnectError_Parms
		{
			FString error;
		};
		UObject* Outer = Z_Construct_UPackage__Script_WebSocket();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WebSocketConnectError__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_WebSocket_eventWebSocketConnectError_Parms));
			UProperty* NewProp_error = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("error"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(error, _Script_WebSocket_eventWebSocketConnectError_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
			MetaData->SetValue(NewProp_error, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	void UWebSocketBase::StaticRegisterNativesUWebSocketBase()
	{
		UClass* Class = UWebSocketBase::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Close", (Native)&UWebSocketBase::execClose },
			{ "SendText", (Native)&UWebSocketBase::execSendText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UWebSocketBase_Close()
	{
		UObject* Outer = Z_Construct_UClass_UWebSocketBase();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Close"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebSocketBase_SendText()
	{
		struct WebSocketBase_eventSendText_Parms
		{
			FString data;
		};
		UObject* Outer = Z_Construct_UClass_UWebSocketBase();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SendText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(WebSocketBase_eventSendText_Parms));
			UProperty* NewProp_data = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(data, WebSocketBase_eventSendText_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
			MetaData->SetValue(NewProp_data, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSocketBase_NoRegister()
	{
		return UWebSocketBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UWebSocketBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_WebSocket();
			OuterClass = UWebSocketBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBase_Close());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBase_SendText());

				UProperty* NewProp_OnReceiveData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnReceiveData"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnReceiveData, UWebSocketBase), 0x0010000010080000, Z_Construct_UDelegateFunction_WebSocket_WebSocketRecieve__DelegateSignature());
				UProperty* NewProp_OnConnectComplete = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnConnectComplete"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnConnectComplete, UWebSocketBase), 0x0010000010080000, Z_Construct_UDelegateFunction_WebSocket_WebSocketConnected__DelegateSignature());
				UProperty* NewProp_OnClosed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnClosed"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnClosed, UWebSocketBase), 0x0010000010080000, Z_Construct_UDelegateFunction_WebSocket_WebSocketClosed__DelegateSignature());
				UProperty* NewProp_OnConnectError = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnConnectError"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnConnectError, UWebSocketBase), 0x0010000010080000, Z_Construct_UDelegateFunction_WebSocket_WebSocketConnectError__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBase_Close(), "Close"); // 377635950
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBase_SendText(), "SendText"); // 4157088016
				static TCppClassTypeInfo<TCppClassTypeTraits<UWebSocketBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WebSocketBase.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
				MetaData->SetValue(NewProp_OnReceiveData, TEXT("Category"), TEXT("WebSocket"));
				MetaData->SetValue(NewProp_OnReceiveData, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
				MetaData->SetValue(NewProp_OnConnectComplete, TEXT("Category"), TEXT("WebSocket"));
				MetaData->SetValue(NewProp_OnConnectComplete, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
				MetaData->SetValue(NewProp_OnClosed, TEXT("Category"), TEXT("WebSocket"));
				MetaData->SetValue(NewProp_OnClosed, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
				MetaData->SetValue(NewProp_OnConnectError, TEXT("Category"), TEXT("WebSocket"));
				MetaData->SetValue(NewProp_OnConnectError, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSocketBase, 1996661358);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSocketBase(Z_Construct_UClass_UWebSocketBase, &UWebSocketBase::StaticClass, TEXT("/Script/WebSocket"), TEXT("UWebSocketBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
