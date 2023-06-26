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
	 * 		Name   -> PredefinedFunction URichImageWidgetDecorator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URichImageWidgetDecorator_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass RichImageWidgetDecorator.RichImageWidgetDecorator_C");
		return ptr;
	}

}


