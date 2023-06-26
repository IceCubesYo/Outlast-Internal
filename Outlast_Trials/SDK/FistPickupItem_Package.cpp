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
	 * 		Name   -> PredefinedFunction AFistPickupItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFistPickupItem_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FistPickupItem.FistPickupItem_C");
		return ptr;
	}

}


