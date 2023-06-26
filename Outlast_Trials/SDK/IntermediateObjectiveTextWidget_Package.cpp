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
	 * 		Name   -> Function IntermediateObjectiveTextWidget.IntermediateObjectiveTextWidget_C.UpdateStatusAndText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UIntermediateObjectiveTextWidget_C::UpdateStatusAndText(bool status, const class FText& Text)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function IntermediateObjectiveTextWidget.IntermediateObjectiveTextWidget_C.UpdateStatusAndText");
		
		UIntermediateObjectiveTextWidget_C_UpdateStatusAndText_Params params {};
		params.status = status;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIntermediateObjectiveTextWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIntermediateObjectiveTextWidget_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IntermediateObjectiveTextWidget.IntermediateObjectiveTextWidget_C");
		return ptr;
	}

}


