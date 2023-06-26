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
	 * 		Name   -> PredefinedFunction ACineGooseberry01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACineGooseberry01_BP_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CineGooseberry_01_BP.CineGooseberry-01_BP_C");
		return ptr;
	}

}


