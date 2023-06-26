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
	 * 		Name   -> Function EmptyGridElement.EmptyGridElement_C.IsElementEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEmpty                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEmptyGridElement_C::IsElementEmpty(bool* bIsEmpty)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function EmptyGridElement.EmptyGridElement_C.IsElementEmpty");
		
		UEmptyGridElement_C_IsElementEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsEmpty != nullptr)
			*bIsEmpty = params.bIsEmpty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmptyGridElement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmptyGridElement_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EmptyGridElement.EmptyGridElement_C");
		return ptr;
	}

}


