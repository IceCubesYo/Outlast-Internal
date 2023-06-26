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
	 * 		Name   -> Function Fogger_Blind_ActiveSkill_BP.Fogger_Blind_ActiveSkill_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AFogger_Blind_ActiveSkill_BP_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Fogger_Blind_ActiveSkill_BP.Fogger_Blind_ActiveSkill_BP_C.UserConstructionScript");
		
		AFogger_Blind_ActiveSkill_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFogger_Blind_ActiveSkill_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFogger_Blind_ActiveSkill_BP_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Fogger_Blind_ActiveSkill_BP.Fogger_Blind_ActiveSkill_BP_C");
		return ptr;
	}

}


