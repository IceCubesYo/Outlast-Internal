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
	 * 		Name   -> PredefinedFunction UDLSSOverrideSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDLSSOverrideSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DLSS.DLSSOverrideSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDLSSSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDLSSSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DLSS.DLSSSettings");
		return ptr;
	}

}


