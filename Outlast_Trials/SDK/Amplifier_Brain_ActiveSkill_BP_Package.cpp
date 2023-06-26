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
	 * 		Name   -> Function Amplifier_Brain_ActiveSkill_BP.Amplifier_Brain_ActiveSkill_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AAmplifier_Brain_ActiveSkill_BP_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Amplifier_Brain_ActiveSkill_BP.Amplifier_Brain_ActiveSkill_BP_C.UserConstructionScript");
		
		AAmplifier_Brain_ActiveSkill_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAmplifier_Brain_ActiveSkill_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmplifier_Brain_ActiveSkill_BP_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Amplifier_Brain_ActiveSkill_BP.Amplifier_Brain_ActiveSkill_BP_C");
		return ptr;
	}

}


