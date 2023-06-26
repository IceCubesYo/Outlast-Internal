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
	 * 		Name   -> PredefinedFunction UOptionsEntryScrollStyle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntryScrollStyle_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass OptionsEntryScrollStyle.OptionsEntryScrollStyle_C");
		return ptr;
	}

}


