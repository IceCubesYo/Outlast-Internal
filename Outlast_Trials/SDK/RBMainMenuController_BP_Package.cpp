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
	 * 		Name   -> PredefinedFunction ARBMainMenuController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBMainMenuController_BP_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass RBMainMenuController_BP.RBMainMenuController_BP_C");
		return ptr;
	}

}


