﻿/**
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
	 * 		Name   -> PredefinedFunction ARBHUD_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBHUD_BP_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass RBHUD_BP.RBHUD_BP_C");
		return ptr;
	}

}


