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
	 * 		Name   -> Function SimpleTextTooltip.SimpleTextTooltip_C.Construct
	 * 		Flags  -> ()
	 */
	void USimpleTextTooltip_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SimpleTextTooltip.SimpleTextTooltip_C.Construct");
		
		USimpleTextTooltip_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleTextTooltip.SimpleTextTooltip_C.ExecuteUbergraph_SimpleTextTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USimpleTextTooltip_C::ExecuteUbergraph_SimpleTextTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SimpleTextTooltip.SimpleTextTooltip_C.ExecuteUbergraph_SimpleTextTooltip");
		
		USimpleTextTooltip_C_ExecuteUbergraph_SimpleTextTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleTextTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleTextTooltip_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SimpleTextTooltip.SimpleTextTooltip_C");
		return ptr;
	}

}


