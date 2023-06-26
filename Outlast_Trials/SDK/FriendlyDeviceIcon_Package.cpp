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
	 * 		Name   -> Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.ShouldShow
	 * 		Flags  -> ()
	 */
	bool UFriendlyDeviceIcon_C::ShouldShow()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.ShouldShow");
		
		UFriendlyDeviceIcon_C_ShouldShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.UpdateDistanceEffects
	 * 		Flags  -> ()
	 */
	void UFriendlyDeviceIcon_C::UpdateDistanceEffects()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.UpdateDistanceEffects");
		
		UFriendlyDeviceIcon_C_UpdateDistanceEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.UpdateDisplay
	 * 		Flags  -> ()
	 */
	void UFriendlyDeviceIcon_C::UpdateDisplay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.UpdateDisplay");
		
		UFriendlyDeviceIcon_C_UpdateDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UFriendlyDeviceIcon_C::Event_Hide()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.Event_Hide");
		
		UFriendlyDeviceIcon_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UFriendlyDeviceIcon_C::Event_Show()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.Event_Show");
		
		UFriendlyDeviceIcon_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.ExecuteUbergraph_FriendlyDeviceIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFriendlyDeviceIcon_C::ExecuteUbergraph_FriendlyDeviceIcon(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.ExecuteUbergraph_FriendlyDeviceIcon");
		
		UFriendlyDeviceIcon_C_ExecuteUbergraph_FriendlyDeviceIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFriendlyDeviceIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFriendlyDeviceIcon_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FriendlyDeviceIcon.FriendlyDeviceIcon_C");
		return ptr;
	}

}


