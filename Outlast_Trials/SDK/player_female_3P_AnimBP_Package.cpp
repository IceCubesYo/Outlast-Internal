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
	 * 		Name   -> PredefinedFunction Uplayer_female_3P_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uplayer_female_3P_AnimBP_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass player_female_3P_AnimBP.player_female_3P_AnimBP_C");
		return ptr;
	}

}


