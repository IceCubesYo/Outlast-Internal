﻿/**
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
	 * 		Name   -> Function SE_MansionTheatre_Curtain_AnimBP.SE_MansionTheatre_Curtain_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void USE_MansionTheatre_Curtain_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SE_MansionTheatre_Curtain_AnimBP.SE_MansionTheatre_Curtain_AnimBP_C.AnimGraph");
		
		USE_MansionTheatre_Curtain_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SE_MansionTheatre_Curtain_AnimBP.SE_MansionTheatre_Curtain_AnimBP_C.ExecuteUbergraph_SE_MansionTheatre_Curtain_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USE_MansionTheatre_Curtain_AnimBP_C::ExecuteUbergraph_SE_MansionTheatre_Curtain_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SE_MansionTheatre_Curtain_AnimBP.SE_MansionTheatre_Curtain_AnimBP_C.ExecuteUbergraph_SE_MansionTheatre_Curtain_AnimBP");
		
		USE_MansionTheatre_Curtain_AnimBP_C_ExecuteUbergraph_SE_MansionTheatre_Curtain_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USE_MansionTheatre_Curtain_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USE_MansionTheatre_Curtain_AnimBP_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass SE_MansionTheatre_Curtain_AnimBP.SE_MansionTheatre_Curtain_AnimBP_C");
		return ptr;
	}

}


