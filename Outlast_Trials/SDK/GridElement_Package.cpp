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
	 * 		Name   -> Function GridElement.GridElement_C.IsElementEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEmpty                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGridElement_C::IsElementEmpty(bool* bIsEmpty)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GridElement.GridElement_C.IsElementEmpty");
		
		UGridElement_C_IsElementEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsEmpty != nullptr)
			*bIsEmpty = params.bIsEmpty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGridElement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGridElement_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GridElement.GridElement_C");
		return ptr;
	}

}


