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
	 * 		Name   -> PredefinedFunction APaintBombDecal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APaintBombDecal_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PaintBombDecal.PaintBombDecal_C");
		return ptr;
	}

}


