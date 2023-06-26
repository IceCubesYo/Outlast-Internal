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
	 * 		Name   -> Function RawInput.RawInputFunctionLibrary.GetRegisteredDevices
	 * 		Flags  -> ()
	 */
	TArray<struct FRegisteredDeviceInfo> URawInputFunctionLibrary::GetRegisteredDevices()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RawInput.RawInputFunctionLibrary.GetRegisteredDevices");
		
		URawInputFunctionLibrary_GetRegisteredDevices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URawInputFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URawInputFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RawInput.RawInputFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URawInputSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URawInputSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RawInput.RawInputSettings");
		return ptr;
	}

}


