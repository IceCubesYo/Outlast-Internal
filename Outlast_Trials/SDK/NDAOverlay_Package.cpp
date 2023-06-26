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
	 * 		Name   -> Function NDAOverlay.NDAOverlay_C.UpdateRegionAndPing
	 * 		Flags  -> ()
	 */
	void UNDAOverlay_C::UpdateRegionAndPing()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function NDAOverlay.NDAOverlay_C.UpdateRegionAndPing");
		
		UNDAOverlay_C_UpdateRegionAndPing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NDAOverlay.NDAOverlay_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNDAOverlay_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function NDAOverlay.NDAOverlay_C.PreConstruct");
		
		UNDAOverlay_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NDAOverlay.NDAOverlay_C.Construct
	 * 		Flags  -> ()
	 */
	void UNDAOverlay_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function NDAOverlay.NDAOverlay_C.Construct");
		
		UNDAOverlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NDAOverlay.NDAOverlay_C.Event_Setup
	 * 		Flags  -> ()
	 */
	void UNDAOverlay_C::Event_Setup()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function NDAOverlay.NDAOverlay_C.Event_Setup");
		
		UNDAOverlay_C_Event_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NDAOverlay.NDAOverlay_C.ExecuteUbergraph_NDAOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNDAOverlay_C::ExecuteUbergraph_NDAOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function NDAOverlay.NDAOverlay_C.ExecuteUbergraph_NDAOverlay");
		
		UNDAOverlay_C_ExecuteUbergraph_NDAOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNDAOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNDAOverlay_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NDAOverlay.NDAOverlay_C");
		return ptr;
	}

}


