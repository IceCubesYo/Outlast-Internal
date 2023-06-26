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
	 * 		Name   -> Function gooseberryFace_AnimBP.gooseberryFace_AnimBP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UgooseberryFace_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function gooseberryFace_AnimBP.gooseberryFace_AnimBP_C.AnimGraph");
		
		UgooseberryFace_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function gooseberryFace_AnimBP.gooseberryFace_AnimBP_C.LipSyncFeed
	 * 		Flags  -> ()
	 */
	void UgooseberryFace_AnimBP_C::LipSyncFeed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function gooseberryFace_AnimBP.gooseberryFace_AnimBP_C.LipSyncFeed");
		
		UgooseberryFace_AnimBP_C_LipSyncFeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function gooseberryFace_AnimBP.gooseberryFace_AnimBP_C.ExecuteUbergraph_gooseberryFace_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UgooseberryFace_AnimBP_C::ExecuteUbergraph_gooseberryFace_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function gooseberryFace_AnimBP.gooseberryFace_AnimBP_C.ExecuteUbergraph_gooseberryFace_AnimBP");
		
		UgooseberryFace_AnimBP_C_ExecuteUbergraph_gooseberryFace_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UgooseberryFace_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UgooseberryFace_AnimBP_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass gooseberryFace_AnimBP.gooseberryFace_AnimBP_C");
		return ptr;
	}

}


