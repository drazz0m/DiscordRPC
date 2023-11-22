// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordRpcBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordRpcBlueprint() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DISCORDRPC_API UClass* Z_Construct_UClass_UDiscordRpc();
	DISCORDRPC_API UClass* Z_Construct_UClass_UDiscordRpc_NoRegister();
	DISCORDRPC_API UEnum* Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature();
	DISCORDRPC_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordRichPresence();
	DISCORDRPC_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordUserData();
	UPackage* Z_Construct_UPackage__Script_DiscordRpc();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DiscordUserData;
class UScriptStruct* FDiscordUserData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DiscordUserData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DiscordUserData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordUserData, (UObject*)Z_Construct_UPackage__Script_DiscordRpc(), TEXT("DiscordUserData"));
	}
	return Z_Registration_Info_UScriptStruct_DiscordUserData.OuterSingleton;
}
template<> DISCORDRPC_API UScriptStruct* StaticStruct<FDiscordUserData>()
{
	return FDiscordUserData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDiscordUserData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_userId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_userId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_username_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_username;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_discriminator_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_discriminator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_avatar_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_avatar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Ask to join callback data\n*/" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
		{ "ToolTip", "Ask to join callback data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordUserData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_userId_MetaData[] = {
		{ "Category", "Discord" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordUserData, userId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_userId_MetaData), Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_userId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_username_MetaData[] = {
		{ "Category", "Discord" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_username = { "username", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordUserData, username), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_username_MetaData), Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_username_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_discriminator_MetaData[] = {
		{ "Category", "Discord" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_discriminator = { "discriminator", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordUserData, discriminator), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_discriminator_MetaData), Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_discriminator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_avatar_MetaData[] = {
		{ "Category", "Discord" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_avatar = { "avatar", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordUserData, avatar), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_avatar_MetaData), Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_avatar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_userId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_username,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_discriminator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_avatar,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordRpc,
		nullptr,
		&NewStructOps,
		"DiscordUserData",
		Z_Construct_UScriptStruct_FDiscordUserData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserData_Statics::PropPointers),
		sizeof(FDiscordUserData),
		alignof(FDiscordUserData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDiscordUserData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordUserData()
	{
		if (!Z_Registration_Info_UScriptStruct_DiscordUserData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DiscordUserData.InnerSingleton, Z_Construct_UScriptStruct_FDiscordUserData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DiscordUserData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDiscordJoinResponseCodes;
	static UEnum* EDiscordJoinResponseCodes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDiscordJoinResponseCodes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDiscordJoinResponseCodes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes, (UObject*)Z_Construct_UPackage__Script_DiscordRpc(), TEXT("EDiscordJoinResponseCodes"));
		}
		return Z_Registration_Info_UEnum_EDiscordJoinResponseCodes.OuterSingleton;
	}
	template<> DISCORDRPC_API UEnum* StaticEnum<EDiscordJoinResponseCodes>()
	{
		return EDiscordJoinResponseCodes_StaticEnum();
	}
	struct Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes_Statics::Enumerators[] = {
		{ "EDiscordJoinResponseCodes::DISCORD_REPLY_NO", (int64)EDiscordJoinResponseCodes::DISCORD_REPLY_NO },
		{ "EDiscordJoinResponseCodes::DISCORD_REPLY_YES", (int64)EDiscordJoinResponseCodes::DISCORD_REPLY_YES },
		{ "EDiscordJoinResponseCodes::DISCORD_REPLY_IGNORE", (int64)EDiscordJoinResponseCodes::DISCORD_REPLY_IGNORE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Valid response codes for Respond function\n*/" },
		{ "DISCORD_REPLY_IGNORE.DisplayName", "Ignore" },
		{ "DISCORD_REPLY_IGNORE.Name", "EDiscordJoinResponseCodes::DISCORD_REPLY_IGNORE" },
		{ "DISCORD_REPLY_NO.DisplayName", "No" },
		{ "DISCORD_REPLY_NO.Name", "EDiscordJoinResponseCodes::DISCORD_REPLY_NO" },
		{ "DISCORD_REPLY_YES.DisplayName", "Yes" },
		{ "DISCORD_REPLY_YES.Name", "EDiscordJoinResponseCodes::DISCORD_REPLY_YES" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
		{ "ToolTip", "Valid response codes for Respond function" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc,
		nullptr,
		"EDiscordJoinResponseCodes",
		"EDiscordJoinResponseCodes",
		Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes()
	{
		if (!Z_Registration_Info_UEnum_EDiscordJoinResponseCodes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDiscordJoinResponseCodes.InnerSingleton, Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDiscordJoinResponseCodes.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics
	{
		struct _Script_DiscordRpc_eventDiscordConnected_Parms
		{
			FDiscordUserData joinRequest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_joinRequest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_joinRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::NewProp_joinRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::NewProp_joinRequest = { "joinRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordConnected_Parms, joinRequest), Z_Construct_UScriptStruct_FDiscordUserData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::NewProp_joinRequest_MetaData), Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::NewProp_joinRequest_MetaData) }; // 2921096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::NewProp_joinRequest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc, nullptr, "DiscordConnected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::_Script_DiscordRpc_eventDiscordConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::_Script_DiscordRpc_eventDiscordConnected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDiscordConnected_DelegateWrapper(const FMulticastScriptDelegate& DiscordConnected, FDiscordUserData const& joinRequest)
{
	struct _Script_DiscordRpc_eventDiscordConnected_Parms
	{
		FDiscordUserData joinRequest;
	};
	_Script_DiscordRpc_eventDiscordConnected_Parms Parms;
	Parms.joinRequest=joinRequest;
	DiscordConnected.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics
	{
		struct _Script_DiscordRpc_eventDiscordDisconnected_Parms
		{
			int32 errorCode;
			FString errorMessage;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordDisconnected_Parms, errorCode), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordDisconnected_Parms, errorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::NewProp_errorMessage_MetaData), Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::NewProp_errorMessage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc, nullptr, "DiscordDisconnected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::_Script_DiscordRpc_eventDiscordDisconnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::_Script_DiscordRpc_eventDiscordDisconnected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDiscordDisconnected_DelegateWrapper(const FMulticastScriptDelegate& DiscordDisconnected, int32 errorCode, const FString& errorMessage)
{
	struct _Script_DiscordRpc_eventDiscordDisconnected_Parms
	{
		int32 errorCode;
		FString errorMessage;
	};
	_Script_DiscordRpc_eventDiscordDisconnected_Parms Parms;
	Parms.errorCode=errorCode;
	Parms.errorMessage=errorMessage;
	DiscordDisconnected.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics
	{
		struct _Script_DiscordRpc_eventDiscordErrored_Parms
		{
			int32 errorCode;
			FString errorMessage;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordErrored_Parms, errorCode), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordErrored_Parms, errorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::NewProp_errorMessage_MetaData), Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::NewProp_errorMessage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc, nullptr, "DiscordErrored__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::_Script_DiscordRpc_eventDiscordErrored_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::_Script_DiscordRpc_eventDiscordErrored_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDiscordErrored_DelegateWrapper(const FMulticastScriptDelegate& DiscordErrored, int32 errorCode, const FString& errorMessage)
{
	struct _Script_DiscordRpc_eventDiscordErrored_Parms
	{
		int32 errorCode;
		FString errorMessage;
	};
	_Script_DiscordRpc_eventDiscordErrored_Parms Parms;
	Parms.errorCode=errorCode;
	Parms.errorMessage=errorMessage;
	DiscordErrored.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics
	{
		struct _Script_DiscordRpc_eventDiscordJoin_Parms
		{
			FString joinSecret;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_joinSecret_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_joinSecret;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::NewProp_joinSecret_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::NewProp_joinSecret = { "joinSecret", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordJoin_Parms, joinSecret), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::NewProp_joinSecret_MetaData), Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::NewProp_joinSecret_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::NewProp_joinSecret,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc, nullptr, "DiscordJoin__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::_Script_DiscordRpc_eventDiscordJoin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::_Script_DiscordRpc_eventDiscordJoin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDiscordJoin_DelegateWrapper(const FMulticastScriptDelegate& DiscordJoin, const FString& joinSecret)
{
	struct _Script_DiscordRpc_eventDiscordJoin_Parms
	{
		FString joinSecret;
	};
	_Script_DiscordRpc_eventDiscordJoin_Parms Parms;
	Parms.joinSecret=joinSecret;
	DiscordJoin.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics
	{
		struct _Script_DiscordRpc_eventDiscordSpectate_Parms
		{
			FString spectateSecret;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spectateSecret_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_spectateSecret;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::NewProp_spectateSecret_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::NewProp_spectateSecret = { "spectateSecret", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordSpectate_Parms, spectateSecret), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::NewProp_spectateSecret_MetaData), Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::NewProp_spectateSecret_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::NewProp_spectateSecret,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc, nullptr, "DiscordSpectate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::_Script_DiscordRpc_eventDiscordSpectate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::_Script_DiscordRpc_eventDiscordSpectate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDiscordSpectate_DelegateWrapper(const FMulticastScriptDelegate& DiscordSpectate, const FString& spectateSecret)
{
	struct _Script_DiscordRpc_eventDiscordSpectate_Parms
	{
		FString spectateSecret;
	};
	_Script_DiscordRpc_eventDiscordSpectate_Parms Parms;
	Parms.spectateSecret=spectateSecret;
	DiscordSpectate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics
	{
		struct _Script_DiscordRpc_eventDiscordJoinRequest_Parms
		{
			FDiscordUserData joinRequest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_joinRequest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_joinRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::NewProp_joinRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::NewProp_joinRequest = { "joinRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordJoinRequest_Parms, joinRequest), Z_Construct_UScriptStruct_FDiscordUserData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::NewProp_joinRequest_MetaData), Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::NewProp_joinRequest_MetaData) }; // 2921096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::NewProp_joinRequest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc, nullptr, "DiscordJoinRequest__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::_Script_DiscordRpc_eventDiscordJoinRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::_Script_DiscordRpc_eventDiscordJoinRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDiscordJoinRequest_DelegateWrapper(const FMulticastScriptDelegate& DiscordJoinRequest, FDiscordUserData const& joinRequest)
{
	struct _Script_DiscordRpc_eventDiscordJoinRequest_Parms
	{
		FDiscordUserData joinRequest;
	};
	_Script_DiscordRpc_eventDiscordJoinRequest_Parms Parms;
	Parms.joinRequest=joinRequest;
	DiscordJoinRequest.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DiscordRichPresence;
class UScriptStruct* FDiscordRichPresence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DiscordRichPresence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DiscordRichPresence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordRichPresence, (UObject*)Z_Construct_UPackage__Script_DiscordRpc(), TEXT("DiscordRichPresence"));
	}
	return Z_Registration_Info_UScriptStruct_DiscordRichPresence.OuterSingleton;
}
template<> DISCORDRPC_API UScriptStruct* StaticStruct<FDiscordRichPresence>()
{
	return FDiscordRichPresence::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDiscordRichPresence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_state;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_details_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_details;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startTimestamp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_startTimestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_endTimestamp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_endTimestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_largeImageKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_largeImageKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_largeImageText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_largeImageText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_smallImageKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_smallImageKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_smallImageText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_smallImageText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_partyId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_partyId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_partySize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_partySize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_partyMax_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_partyMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_matchSecret_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_matchSecret;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_joinSecret_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_joinSecret;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spectateSecret_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_spectateSecret;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instance_MetaData[];
#endif
		static void NewProp_instance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Rich presence data\n */" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
		{ "ToolTip", "Rich presence data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordRichPresence>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_state_MetaData[] = {
		{ "Category", "Discord" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordRichPresence, state), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_state_MetaData), Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_state_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_details_MetaData[] = {
		{ "Category", "Discord" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_details = { "details", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordRichPresence, details), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_details_MetaData), Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_details_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_startTimestamp_MetaData[] = {
		{ "Category", "Discord" },
		{ "Comment", "// todo, timestamps are 64bit, does that even matter?\n" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
		{ "ToolTip", "todo, timestamps are 64bit, does that even matter?" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_startTimestamp = { "startTimestamp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordRichPresence, startTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_startTimestamp_MetaData), Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_startTimestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_endTimestamp_MetaData[] = {
		{ "Category", "Discord" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_endTimestamp = { "endTimestamp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordRichPresence, endTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_endTimestamp_MetaData), Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_endTimestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageKey_MetaData[] = {
		{ "Category", "Discord" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageKey = { "largeImageKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordRichPresence, largeImageKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageKey_MetaData), Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageText_MetaData[] = {
		{ "Category", "Discord" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageText = { "largeImageText", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordRichPresence, largeImageText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageText_MetaData), Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageKey_MetaData[] = {
		{ "Category", "Discord" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageKey = { "smallImageKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordRichPresence, smallImageKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageKey_MetaData), Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageText_MetaData[] = {
		{ "Category", "Discord" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageText = { "smallImageText", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordRichPresence, smallImageText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageText_MetaData), Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyId_MetaData[] = {
		{ "Category", "Discord" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyId = { "partyId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordRichPresence, partyId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyId_MetaData), Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partySize_MetaData[] = {
		{ "Category", "Discord" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partySize = { "partySize", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordRichPresence, partySize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partySize_MetaData), Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partySize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyMax_MetaData[] = {
		{ "Category", "Discord" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyMax = { "partyMax", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordRichPresence, partyMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyMax_MetaData), Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_matchSecret_MetaData[] = {
		{ "Category", "Discord" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_matchSecret = { "matchSecret", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordRichPresence, matchSecret), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_matchSecret_MetaData), Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_matchSecret_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_joinSecret_MetaData[] = {
		{ "Category", "Discord" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_joinSecret = { "joinSecret", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordRichPresence, joinSecret), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_joinSecret_MetaData), Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_joinSecret_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_spectateSecret_MetaData[] = {
		{ "Category", "Discord" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_spectateSecret = { "spectateSecret", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordRichPresence, spectateSecret), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_spectateSecret_MetaData), Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_spectateSecret_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_instance_MetaData[] = {
		{ "Category", "Discord" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_instance_SetBit(void* Obj)
	{
		((FDiscordRichPresence*)Obj)->instance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_instance = { "instance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDiscordRichPresence), &Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_instance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_instance_MetaData), Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_instance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_state,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_startTimestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_endTimestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_matchSecret,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_joinSecret,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_spectateSecret,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_instance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordRpc,
		nullptr,
		&NewStructOps,
		"DiscordRichPresence",
		Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::PropPointers),
		sizeof(FDiscordRichPresence),
		alignof(FDiscordRichPresence),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordRichPresence()
	{
		if (!Z_Registration_Info_UScriptStruct_DiscordRichPresence.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DiscordRichPresence.InnerSingleton, Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DiscordRichPresence.InnerSingleton;
	}
	DEFINE_FUNCTION(UDiscordRpc::execRespond)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_userId);
		P_GET_PROPERTY(FIntProperty,Z_Param_reply);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Respond(Z_Param_userId,Z_Param_reply);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordRpc::execClearPresence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearPresence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordRpc::execUpdatePresence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePresence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordRpc::execRunCallbacks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunCallbacks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordRpc::execShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shutdown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordRpc::execInitialize)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_applicationId);
		P_GET_UBOOL(Z_Param_autoRegister);
		P_GET_PROPERTY(FStrProperty,Z_Param_optionalSteamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_applicationId,Z_Param_autoRegister,Z_Param_optionalSteamId);
		P_NATIVE_END;
	}
	void UDiscordRpc::StaticRegisterNativesUDiscordRpc()
	{
		UClass* Class = UDiscordRpc::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearPresence", &UDiscordRpc::execClearPresence },
			{ "Initialize", &UDiscordRpc::execInitialize },
			{ "Respond", &UDiscordRpc::execRespond },
			{ "RunCallbacks", &UDiscordRpc::execRunCallbacks },
			{ "Shutdown", &UDiscordRpc::execShutdown },
			{ "UpdatePresence", &UDiscordRpc::execUpdatePresence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordRpc_ClearPresence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRpc_ClearPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "Clear presence" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordRpc_ClearPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRpc, nullptr, "ClearPresence", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_ClearPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDiscordRpc_ClearPresence_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDiscordRpc_ClearPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDiscordRpc_ClearPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordRpc_Initialize_Statics
	{
		struct DiscordRpc_eventInitialize_Parms
		{
			FString applicationId;
			bool autoRegister;
			FString optionalSteamId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_applicationId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_applicationId;
		static void NewProp_autoRegister_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_autoRegister;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_optionalSteamId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_optionalSteamId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_applicationId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_applicationId = { "applicationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiscordRpc_eventInitialize_Parms, applicationId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_applicationId_MetaData), Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_applicationId_MetaData) };
	void Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_autoRegister_SetBit(void* Obj)
	{
		((DiscordRpc_eventInitialize_Parms*)Obj)->autoRegister = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_autoRegister = { "autoRegister", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DiscordRpc_eventInitialize_Parms), &Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_autoRegister_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_optionalSteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_optionalSteamId = { "optionalSteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiscordRpc_eventInitialize_Parms, optionalSteamId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_optionalSteamId_MetaData), Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_optionalSteamId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_applicationId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_autoRegister,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_optionalSteamId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "Initialize connection" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRpc, nullptr, "Initialize", nullptr, nullptr, Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::DiscordRpc_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::DiscordRpc_eventInitialize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDiscordRpc_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordRpc_Respond_Statics
	{
		struct DiscordRpc_eventRespond_Parms
		{
			FString userId;
			int32 reply;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_userId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_userId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_reply;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRpc_Respond_Statics::NewProp_userId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordRpc_Respond_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiscordRpc_eventRespond_Parms, userId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_Respond_Statics::NewProp_userId_MetaData), Z_Construct_UFunction_UDiscordRpc_Respond_Statics::NewProp_userId_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordRpc_Respond_Statics::NewProp_reply = { "reply", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiscordRpc_eventRespond_Parms, reply), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordRpc_Respond_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordRpc_Respond_Statics::NewProp_userId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordRpc_Respond_Statics::NewProp_reply,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRpc_Respond_Statics::Function_MetaDataParams[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "Respond to join request" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordRpc_Respond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRpc, nullptr, "Respond", nullptr, nullptr, Z_Construct_UFunction_UDiscordRpc_Respond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_Respond_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDiscordRpc_Respond_Statics::DiscordRpc_eventRespond_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_Respond_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDiscordRpc_Respond_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_Respond_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDiscordRpc_Respond_Statics::DiscordRpc_eventRespond_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDiscordRpc_Respond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDiscordRpc_Respond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordRpc_RunCallbacks_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRpc_RunCallbacks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "Check for callbacks" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordRpc_RunCallbacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRpc, nullptr, "RunCallbacks", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_RunCallbacks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDiscordRpc_RunCallbacks_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDiscordRpc_RunCallbacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDiscordRpc_RunCallbacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordRpc_Shutdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRpc_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "Shut down connection" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordRpc_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRpc, nullptr, "Shutdown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_Shutdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDiscordRpc_Shutdown_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDiscordRpc_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDiscordRpc_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordRpc_UpdatePresence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRpc_UpdatePresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "Send presence" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordRpc_UpdatePresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRpc, nullptr, "UpdatePresence", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_UpdatePresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDiscordRpc_UpdatePresence_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDiscordRpc_UpdatePresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDiscordRpc_UpdatePresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDiscordRpc);
	UClass* Z_Construct_UClass_UDiscordRpc_NoRegister()
	{
		return UDiscordRpc::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordRpc_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsConnected_MetaData[];
#endif
		static void NewProp_IsConnected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDisconnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisconnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnErrored_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnErrored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnJoin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSpectate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpectate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnJoinRequest_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoinRequest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RichPresence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RichPresence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordRpc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordRpc,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordRpc_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordRpc_ClearPresence, "ClearPresence" }, // 2715972244
		{ &Z_Construct_UFunction_UDiscordRpc_Initialize, "Initialize" }, // 3300206863
		{ &Z_Construct_UFunction_UDiscordRpc_Respond, "Respond" }, // 2161694743
		{ &Z_Construct_UFunction_UDiscordRpc_RunCallbacks, "RunCallbacks" }, // 3038551111
		{ &Z_Construct_UFunction_UDiscordRpc_Shutdown, "Shutdown" }, // 715255220
		{ &Z_Construct_UFunction_UDiscordRpc_UpdatePresence, "UpdatePresence" }, // 2248749023
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRpc_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Discord" },
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "Discord RPC" },
		{ "IncludePath", "DiscordRpcBlueprint.h" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRpc_Statics::NewProp_IsConnected_MetaData[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "Is Discord connected" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UDiscordRpc_Statics::NewProp_IsConnected_SetBit(void* Obj)
	{
		((UDiscordRpc*)Obj)->IsConnected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDiscordRpc_Statics::NewProp_IsConnected = { "IsConnected", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDiscordRpc), &Z_Construct_UClass_UDiscordRpc_Statics::NewProp_IsConnected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_IsConnected_MetaData), Z_Construct_UClass_UDiscordRpc_Statics::NewProp_IsConnected_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnConnected_MetaData[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "On connection" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDiscordRpc, OnConnected), Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnConnected_MetaData), Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnConnected_MetaData) }; // 440866729
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnDisconnected_MetaData[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "On disconnection" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnDisconnected = { "OnDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDiscordRpc, OnDisconnected), Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnDisconnected_MetaData), Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnDisconnected_MetaData) }; // 1711590126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnErrored_MetaData[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "On error message" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnErrored = { "OnErrored", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDiscordRpc, OnErrored), Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnErrored_MetaData), Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnErrored_MetaData) }; // 569117330
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoin_MetaData[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "When Discord user presses join" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoin = { "OnJoin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDiscordRpc, OnJoin), Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoin_MetaData), Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoin_MetaData) }; // 2486132035
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnSpectate_MetaData[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "When Discord user presses spectate" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnSpectate = { "OnSpectate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDiscordRpc, OnSpectate), Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnSpectate_MetaData), Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnSpectate_MetaData) }; // 4224735191
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoinRequest_MetaData[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "When Discord another user sends a join request" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoinRequest = { "OnJoinRequest", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDiscordRpc, OnJoinRequest), Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoinRequest_MetaData), Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoinRequest_MetaData) }; // 897561939
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRpc_Statics::NewProp_RichPresence_MetaData[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "Rich presence info" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDiscordRpc_Statics::NewProp_RichPresence = { "RichPresence", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDiscordRpc, RichPresence), Z_Construct_UScriptStruct_FDiscordRichPresence, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_RichPresence_MetaData), Z_Construct_UClass_UDiscordRpc_Statics::NewProp_RichPresence_MetaData) }; // 916979833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiscordRpc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordRpc_Statics::NewProp_IsConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnDisconnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnErrored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnSpectate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoinRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordRpc_Statics::NewProp_RichPresence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordRpc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordRpc>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDiscordRpc_Statics::ClassParams = {
		&UDiscordRpc::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDiscordRpc_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::Class_MetaDataParams), Z_Construct_UClass_UDiscordRpc_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDiscordRpc()
	{
		if (!Z_Registration_Info_UClass_UDiscordRpc.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDiscordRpc.OuterSingleton, Z_Construct_UClass_UDiscordRpc_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDiscordRpc.OuterSingleton;
	}
	template<> DISCORDRPC_API UClass* StaticClass<UDiscordRpc>()
	{
		return UDiscordRpc::StaticClass();
	}
	UDiscordRpc::UDiscordRpc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordRpc);
	UDiscordRpc::~UDiscordRpc() {}
	struct Z_CompiledInDeferFile_FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_Statics::EnumInfo[] = {
		{ EDiscordJoinResponseCodes_StaticEnum, TEXT("EDiscordJoinResponseCodes"), &Z_Registration_Info_UEnum_EDiscordJoinResponseCodes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2085663032U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_Statics::ScriptStructInfo[] = {
		{ FDiscordUserData::StaticStruct, Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewStructOps, TEXT("DiscordUserData"), &Z_Registration_Info_UScriptStruct_DiscordUserData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDiscordUserData), 2921096U) },
		{ FDiscordRichPresence::StaticStruct, Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewStructOps, TEXT("DiscordRichPresence"), &Z_Registration_Info_UScriptStruct_DiscordRichPresence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDiscordRichPresence), 916979833U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDiscordRpc, UDiscordRpc::StaticClass, TEXT("UDiscordRpc"), &Z_Registration_Info_UClass_UDiscordRpc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDiscordRpc), 1888988142U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_2726707808(TEXT("/Script/DiscordRpc"),
		Z_CompiledInDeferFile_FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
