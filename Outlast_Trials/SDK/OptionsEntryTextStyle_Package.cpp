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
	 * 		Name   -> PredefinedFunction UOptionsEntryTextStyle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntryTextStyle_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass OptionsEntryTextStyle.OptionsEntryTextStyle_C");
		return ptr;
	}

}


