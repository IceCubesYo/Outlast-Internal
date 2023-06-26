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
	 * 		Name   -> PredefinedFunction UDmgTypeBP_Environmental_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDmgTypeBP_Environmental_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DmgTypeBP_Environmental.DmgTypeBP_Environmental_C");
		return ptr;
	}

}


