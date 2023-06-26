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
	 * 		Name   -> Function ControllerMappingEntry.ControllerMappingEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UControllerMappingEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerMappingEntry.ControllerMappingEntry_C.PreConstruct");
		
		UControllerMappingEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ControllerMappingEntry.ControllerMappingEntry_C.ExecuteUbergraph_ControllerMappingEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControllerMappingEntry_C::ExecuteUbergraph_ControllerMappingEntry(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerMappingEntry.ControllerMappingEntry_C.ExecuteUbergraph_ControllerMappingEntry");
		
		UControllerMappingEntry_C_ExecuteUbergraph_ControllerMappingEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControllerMappingEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControllerMappingEntry_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ControllerMappingEntry.ControllerMappingEntry_C");
		return ptr;
	}

}


