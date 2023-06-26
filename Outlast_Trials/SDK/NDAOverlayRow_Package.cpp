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
	 * 		Name   -> PredefinedFunction UNDAOverlayRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNDAOverlayRow_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NDAOverlayRow.NDAOverlayRow_C");
		return ptr;
	}

}


