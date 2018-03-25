// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/WebSocket.h"
#include "Public/WebSocketBlueprintLibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSocketBlueprintLibrary() {}
// Cross Module References
	WEBSOCKET_API UScriptStruct* Z_Construct_UScriptStruct_FWebSocketHeaderPair();
	UPackage* Z_Construct_UPackage__Script_WebSocket();
	WEBSOCKET_API UClass* Z_Construct_UClass_UTest_NoRegister();
	WEBSOCKET_API UClass* Z_Construct_UClass_UTest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	WEBSOCKET_API UClass* Z_Construct_UClass_UTest2_NoRegister();
	WEBSOCKET_API UClass* Z_Construct_UClass_UTest2();
	WEBSOCKET_API UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect();
	WEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketBlueprintLibrary();
	WEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketBase_NoRegister();
	WEBSOCKET_API UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader();
	WEBSOCKET_API UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField();
	WEBSOCKET_API UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	WEBSOCKET_API UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson();
	WEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketBlueprintLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
class UScriptStruct* FWebSocketHeaderPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WEBSOCKET_API uint32 Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebSocketHeaderPair, Z_Construct_UPackage__Script_WebSocket(), TEXT("WebSocketHeaderPair"), sizeof(FWebSocketHeaderPair), Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWebSocketHeaderPair(FWebSocketHeaderPair::StaticStruct, TEXT("/Script/WebSocket"), TEXT("WebSocketHeaderPair"), false, nullptr, nullptr);
static struct FScriptStruct_WebSocket_StaticRegisterNativesFWebSocketHeaderPair
{
	FScriptStruct_WebSocket_StaticRegisterNativesFWebSocketHeaderPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WebSocketHeaderPair")),new UScriptStruct::TCppStructOps<FWebSocketHeaderPair>);
	}
} ScriptStruct_WebSocket_StaticRegisterNativesFWebSocketHeaderPair;
	UScriptStruct* Z_Construct_UScriptStruct_FWebSocketHeaderPair()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_WebSocket();
		extern uint32 Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WebSocketHeaderPair"), sizeof(FWebSocketHeaderPair), Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WebSocketHeaderPair"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FWebSocketHeaderPair>, EStructFlags(0x00000001));
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(value, FWebSocketHeaderPair), 0x0010000000000005);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, FWebSocketHeaderPair), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
			MetaData->SetValue(NewProp_value, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(NewProp_value, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
			MetaData->SetValue(NewProp_key, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(NewProp_key, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_CRC() { return 3867904360U; }
	void UTest::StaticRegisterNativesUTest()
	{
	}
	UClass* Z_Construct_UClass_UTest_NoRegister()
	{
		return UTest::StaticClass();
	}
	UClass* Z_Construct_UClass_UTest()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_WebSocket();
			OuterClass = UTest::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;


				UProperty* NewProp_mAge = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("mAge"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(mAge, UTest), 0x0010000000000005);
				UProperty* NewProp_mName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("mName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(mName, UTest), 0x0010000000000005);
				static TCppClassTypeInfo<TCppClassTypeTraits<UTest> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WebSocketBlueprintLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
				MetaData->SetValue(NewProp_mAge, TEXT("Category"), TEXT("Test"));
				MetaData->SetValue(NewProp_mAge, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
				MetaData->SetValue(NewProp_mName, TEXT("Category"), TEXT("Test"));
				MetaData->SetValue(NewProp_mName, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTest, 786021683);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTest(Z_Construct_UClass_UTest, &UTest::StaticClass, TEXT("/Script/WebSocket"), TEXT("UTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTest);
	void UTest2::StaticRegisterNativesUTest2()
	{
	}
	UClass* Z_Construct_UClass_UTest2_NoRegister()
	{
		return UTest2::StaticClass();
	}
	UClass* Z_Construct_UClass_UTest2()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_WebSocket();
			OuterClass = UTest2::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;


				UProperty* NewProp_mTest = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("mTest"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(mTest, UTest2), 0x0010000000000005, Z_Construct_UClass_UTest_NoRegister());
				UProperty* NewProp_mAge = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("mAge"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(mAge, UTest2), 0x0010000000000005);
				UProperty* NewProp_mName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("mName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(mName, UTest2), 0x0010000000000005);
				static TCppClassTypeInfo<TCppClassTypeTraits<UTest2> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WebSocketBlueprintLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
				MetaData->SetValue(NewProp_mTest, TEXT("Category"), TEXT("Test"));
				MetaData->SetValue(NewProp_mTest, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
				MetaData->SetValue(NewProp_mAge, TEXT("Category"), TEXT("Test"));
				MetaData->SetValue(NewProp_mAge, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
				MetaData->SetValue(NewProp_mName, TEXT("Category"), TEXT("Test"));
				MetaData->SetValue(NewProp_mName, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTest2, 4010089115);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTest2(Z_Construct_UClass_UTest2, &UTest2::StaticClass, TEXT("/Script/WebSocket"), TEXT("UTest2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTest2);
	void UWebSocketBlueprintLibrary::StaticRegisterNativesUWebSocketBlueprintLibrary()
	{
		UClass* Class = UWebSocketBlueprintLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Connect", (Native)&UWebSocketBlueprintLibrary::execConnect },
			{ "ConnectWithHeader", (Native)&UWebSocketBlueprintLibrary::execConnectWithHeader },
			{ "GetJsonIntField", (Native)&UWebSocketBlueprintLibrary::execGetJsonIntField },
			{ "JsonToObject", (Native)&UWebSocketBlueprintLibrary::execJsonToObject },
			{ "ObjectToJson", (Native)&UWebSocketBlueprintLibrary::execObjectToJson },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect()
	{
		struct WebSocketBlueprintLibrary_eventConnect_Parms
		{
			FString url;
			UWebSocketBase* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UWebSocketBlueprintLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Connect"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(WebSocketBlueprintLibrary_eventConnect_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, WebSocketBlueprintLibrary_eventConnect_Parms), 0x0010000000000580, Z_Construct_UClass_UWebSocketBase_NoRegister());
			UProperty* NewProp_url = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("url"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(url, WebSocketBlueprintLibrary_eventConnect_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
			MetaData->SetValue(NewProp_url, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader()
	{
		struct WebSocketBlueprintLibrary_eventConnectWithHeader_Parms
		{
			FString url;
			TArray<FWebSocketHeaderPair> header;
			UWebSocketBase* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UWebSocketBlueprintLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ConnectWithHeader"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(WebSocketBlueprintLibrary_eventConnectWithHeader_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, WebSocketBlueprintLibrary_eventConnectWithHeader_Parms), 0x0010000000000580, Z_Construct_UClass_UWebSocketBase_NoRegister());
			UProperty* NewProp_header = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("header"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(header, WebSocketBlueprintLibrary_eventConnectWithHeader_Parms), 0x0010000008000182);
			UProperty* NewProp_header_Inner = new(EC_InternalUseOnlyConstructor, NewProp_header, TEXT("header"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FWebSocketHeaderPair());
			UProperty* NewProp_url = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("url"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(url, WebSocketBlueprintLibrary_eventConnectWithHeader_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
			MetaData->SetValue(NewProp_header, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_url, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField()
	{
		struct WebSocketBlueprintLibrary_eventGetJsonIntField_Parms
		{
			FString data;
			FString key;
			int32 iValue;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UWebSocketBlueprintLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetJsonIntField"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(WebSocketBlueprintLibrary_eventGetJsonIntField_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, WebSocketBlueprintLibrary_eventGetJsonIntField_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, WebSocketBlueprintLibrary_eventGetJsonIntField_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, WebSocketBlueprintLibrary_eventGetJsonIntField_Parms), sizeof(bool), true);
			UProperty* NewProp_iValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("iValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(iValue, WebSocketBlueprintLibrary_eventGetJsonIntField_Parms), 0x0010000000000180);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, WebSocketBlueprintLibrary_eventGetJsonIntField_Parms), 0x0010000000000080);
			UProperty* NewProp_data = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(data, WebSocketBlueprintLibrary_eventGetJsonIntField_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_data, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject()
	{
		struct WebSocketBlueprintLibrary_eventJsonToObject_Parms
		{
			FString data;
			UClass* StructDefinition;
			bool checkAll;
			UObject* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UWebSocketBlueprintLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("JsonToObject"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(WebSocketBlueprintLibrary_eventJsonToObject_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, WebSocketBlueprintLibrary_eventJsonToObject_Parms), 0x0010000000000580, Z_Construct_UClass_UObject_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(checkAll, WebSocketBlueprintLibrary_eventJsonToObject_Parms);
			UProperty* NewProp_checkAll = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("checkAll"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(checkAll, WebSocketBlueprintLibrary_eventJsonToObject_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(checkAll, WebSocketBlueprintLibrary_eventJsonToObject_Parms), sizeof(bool), true);
			UProperty* NewProp_StructDefinition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StructDefinition"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(StructDefinition, WebSocketBlueprintLibrary_eventJsonToObject_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister(), Z_Construct_UClass_UClass());
			UProperty* NewProp_data = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(data, WebSocketBlueprintLibrary_eventJsonToObject_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
			MetaData->SetValue(NewProp_data, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson()
	{
		struct WebSocketBlueprintLibrary_eventObjectToJson_Parms
		{
			UObject* Object;
			FString data;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UWebSocketBlueprintLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ObjectToJson"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(WebSocketBlueprintLibrary_eventObjectToJson_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, WebSocketBlueprintLibrary_eventObjectToJson_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, WebSocketBlueprintLibrary_eventObjectToJson_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, WebSocketBlueprintLibrary_eventObjectToJson_Parms), sizeof(bool), true);
			UProperty* NewProp_data = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(data, WebSocketBlueprintLibrary_eventObjectToJson_Parms), 0x0010000000000180);
			UProperty* NewProp_Object = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Object"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Object, WebSocketBlueprintLibrary_eventObjectToJson_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSocketBlueprintLibrary_NoRegister()
	{
		return UWebSocketBlueprintLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UWebSocketBlueprintLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_WebSocket();
			OuterClass = UWebSocketBlueprintLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect(), "Connect"); // 1775014466
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader(), "ConnectWithHeader"); // 3420035127
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField(), "GetJsonIntField"); // 3817392375
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject(), "JsonToObject"); // 1578023062
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson(), "ObjectToJson"); // 83384220
				static TCppClassTypeInfo<TCppClassTypeTraits<UWebSocketBlueprintLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WebSocketBlueprintLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSocketBlueprintLibrary, 1480681010);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSocketBlueprintLibrary(Z_Construct_UClass_UWebSocketBlueprintLibrary, &UWebSocketBlueprintLibrary::StaticClass, TEXT("/Script/WebSocket"), TEXT("UWebSocketBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
