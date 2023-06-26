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
	 * 		Name   -> PredefinedFunction AHumanSpectral_SkillController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHumanSpectral_SkillController_BP_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HumanSpectral_SkillController_BP.HumanSpectral_SkillController_BP_C");
		return ptr;
	}

}


