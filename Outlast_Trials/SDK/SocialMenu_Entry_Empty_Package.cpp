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
	 * 		Name   -> PredefinedFunction USocialMenu_Entry_Empty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialMenu_Entry_Empty_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SocialMenu_Entry_Empty.SocialMenu_Entry_Empty_C");
		return ptr;
	}

}


