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
	 * 		Name   -> PredefinedFunction ABP_FX_02_ExploLight_Amber_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FX_02_ExploLight_Amber_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FX_02_ExploLight_Amber.BP_FX_02_ExploLight_Amber_C");
		return ptr;
	}

}


