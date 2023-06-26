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
	 * 		Name   -> PredefinedFunction UTrialNameTextStyle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrialNameTextStyle_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TrialNameTextStyle.TrialNameTextStyle_C");
		return ptr;
	}

}


