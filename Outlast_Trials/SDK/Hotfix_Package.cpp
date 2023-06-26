/**
 * Name: Outlast_Trials
 * Version: 1.3
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hotfix.OnlineHotfixManager.StartHotfixProcess
	 * 		Flags  -> ()
	 */
	void UOnlineHotfixManager::StartHotfixProcess()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Hotfix.OnlineHotfixManager.StartHotfixProcess");
		
		UOnlineHotfixManager_StartHotfixProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineHotfixManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineHotfixManager::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Hotfix.OnlineHotfixManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpdateManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpdateManager::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Hotfix.UpdateManager");
		return ptr;
	}

}


