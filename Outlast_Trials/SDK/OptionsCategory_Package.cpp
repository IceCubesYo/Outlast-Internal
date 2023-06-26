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
	 * 		Name   -> Function OptionsCategory.OptionsCategory_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOptionsCategory_C::Init(const class FText& Title)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsCategory.OptionsCategory_C.Init");
		
		UOptionsCategory_C_Init_Params params {};
		params.Title = Title;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsCategory_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsCategory.OptionsCategory_C");
		return ptr;
	}

}


