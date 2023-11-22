// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordRpc_init() {}
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DiscordRpc;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DiscordRpc()
	{
		if (!Z_Registration_Info_UPackage__Script_DiscordRpc.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DiscordRpc",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA2168150,
				0x832D7555,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DiscordRpc.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DiscordRpc.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DiscordRpc(Z_Construct_UPackage__Script_DiscordRpc, TEXT("/Script/DiscordRpc"), Z_Registration_Info_UPackage__Script_DiscordRpc, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA2168150, 0x832D7555));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
