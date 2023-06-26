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
	 * 		Name   -> Function FXLibrary.FXLibrary_C.GetPPFXManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APPManager_BP_C*                             Manager                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFXLibrary_C::GetPPFXManager(class UObject* __WorldContext, class APPManager_BP_C** Manager)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FXLibrary.FXLibrary_C.GetPPFXManager");
		
		UFXLibrary_C_GetPPFXManager_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Manager != nullptr)
			*Manager = params.Manager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFXLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFXLibrary_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FXLibrary.FXLibrary_C");
		return ptr;
	}

}


