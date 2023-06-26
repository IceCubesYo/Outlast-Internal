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
	 * 		Name   -> PredefinedFunction ABottleProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABottleProjectile_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BottleProjectile.BottleProjectile_C");
		return ptr;
	}

}


