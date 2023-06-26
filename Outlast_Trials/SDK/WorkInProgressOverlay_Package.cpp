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
	 * 		Name   -> Function WorkInProgressOverlay.WorkInProgressOverlay_C.Construct
	 * 		Flags  -> ()
	 */
	void UWorkInProgressOverlay_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WorkInProgressOverlay.WorkInProgressOverlay_C.Construct");
		
		UWorkInProgressOverlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WorkInProgressOverlay.WorkInProgressOverlay_C.ExecuteUbergraph_WorkInProgressOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWorkInProgressOverlay_C::ExecuteUbergraph_WorkInProgressOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WorkInProgressOverlay.WorkInProgressOverlay_C.ExecuteUbergraph_WorkInProgressOverlay");
		
		UWorkInProgressOverlay_C_ExecuteUbergraph_WorkInProgressOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorkInProgressOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorkInProgressOverlay_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WorkInProgressOverlay.WorkInProgressOverlay_C");
		return ptr;
	}

}


