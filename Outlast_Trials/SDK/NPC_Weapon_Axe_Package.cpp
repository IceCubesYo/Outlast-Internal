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
	 * 		Name   -> PredefinedFunction ANPC_Weapon_Axe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANPC_Weapon_Axe_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass NPC_Weapon_Axe.NPC_Weapon_Axe_C");
		return ptr;
	}

}


