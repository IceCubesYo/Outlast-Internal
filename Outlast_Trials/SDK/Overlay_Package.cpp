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
	 * 		Name   -> PredefinedFunction UOverlays.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOverlays::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Overlay.Overlays");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasicOverlays.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasicOverlays::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Overlay.BasicOverlays");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocalizedOverlays.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalizedOverlays::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Overlay.LocalizedOverlays");
		return ptr;
	}

}


