// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DiscordRpcBlueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDiscordUserData;
#ifdef DISCORDRPC_DiscordRpcBlueprint_generated_h
#error "DiscordRpcBlueprint.generated.h already included, missing '#pragma once' in DiscordRpcBlueprint.h"
#endif
#define DISCORDRPC_DiscordRpcBlueprint_generated_h

#define FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDiscordUserData_Statics; \
	DISCORDRPC_API static class UScriptStruct* StaticStruct();


template<> DISCORDRPC_API UScriptStruct* StaticStruct<struct FDiscordUserData>();

#define FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_40_DELEGATE \
DISCORDRPC_API void FDiscordConnected_DelegateWrapper(const FMulticastScriptDelegate& DiscordConnected, FDiscordUserData const& joinRequest);


#define FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_41_DELEGATE \
DISCORDRPC_API void FDiscordDisconnected_DelegateWrapper(const FMulticastScriptDelegate& DiscordDisconnected, int32 errorCode, const FString& errorMessage);


#define FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_42_DELEGATE \
DISCORDRPC_API void FDiscordErrored_DelegateWrapper(const FMulticastScriptDelegate& DiscordErrored, int32 errorCode, const FString& errorMessage);


#define FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_43_DELEGATE \
DISCORDRPC_API void FDiscordJoin_DelegateWrapper(const FMulticastScriptDelegate& DiscordJoin, const FString& joinSecret);


#define FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_44_DELEGATE \
DISCORDRPC_API void FDiscordSpectate_DelegateWrapper(const FMulticastScriptDelegate& DiscordSpectate, const FString& spectateSecret);


#define FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_45_DELEGATE \
DISCORDRPC_API void FDiscordJoinRequest_DelegateWrapper(const FMulticastScriptDelegate& DiscordJoinRequest, FDiscordUserData const& joinRequest);


#define FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDiscordRichPresence_Statics; \
	DISCORDRPC_API static class UScriptStruct* StaticStruct();


template<> DISCORDRPC_API UScriptStruct* StaticStruct<struct FDiscordRichPresence>();

#define FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_SPARSE_DATA
#define FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRespond); \
	DECLARE_FUNCTION(execClearPresence); \
	DECLARE_FUNCTION(execUpdatePresence); \
	DECLARE_FUNCTION(execRunCallbacks); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execInitialize);


#define FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_ACCESSORS
#define FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiscordRpc(); \
	friend struct Z_Construct_UClass_UDiscordRpc_Statics; \
public: \
	DECLARE_CLASS(UDiscordRpc, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordRpc"), NO_API) \
	DECLARE_SERIALIZER(UDiscordRpc)


#define FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiscordRpc(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordRpc(UDiscordRpc&&); \
	NO_API UDiscordRpc(const UDiscordRpc&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordRpc); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordRpc); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiscordRpc) \
	NO_API virtual ~UDiscordRpc();


#define FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_92_PROLOG
#define FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_SPARSE_DATA \
	FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_ACCESSORS \
	FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_INCLASS_NO_PURE_DECLS \
	FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDRPC_API UClass* StaticClass<class UDiscordRpc>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_drazz_Downloads_DiscordRpc_DiscordRpc5_HostProject_Plugins_DiscordRpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h


#define FOREACH_ENUM_EDISCORDJOINRESPONSECODES(op) \
	op(EDiscordJoinResponseCodes::DISCORD_REPLY_NO) \
	op(EDiscordJoinResponseCodes::DISCORD_REPLY_YES) \
	op(EDiscordJoinResponseCodes::DISCORD_REPLY_IGNORE) 

enum class EDiscordJoinResponseCodes : uint8;
template<> struct TIsUEnumClass<EDiscordJoinResponseCodes> { enum { Value = true }; };
template<> DISCORDRPC_API UEnum* StaticEnum<EDiscordJoinResponseCodes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
