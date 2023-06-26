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
	 * 		Name   -> Function SASChairPanelComponent_BP.SASChairPanelComponent_BP_C.ShouldBPTick
	 * 		Flags  -> ()
	 */
	bool USASChairPanelComponent_BP_C::ShouldBPTick()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SASChairPanelComponent_BP.SASChairPanelComponent_BP_C.ShouldBPTick");
		
		USASChairPanelComponent_BP_C_ShouldBPTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SASChairPanelComponent_BP.SASChairPanelComponent_BP_C.GetInteractionPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     Pawn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpecialMove                                       specialMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     outDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool USASChairPanelComponent_BP_C::GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SASChairPanelComponent_BP.SASChairPanelComponent_BP_C.GetInteractionPawnLocation");
		
		USASChairPanelComponent_BP_C_GetInteractionPawnLocation_Params params {};
		params.Pawn = Pawn;
		params.specialMove = specialMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		if (outDirection != nullptr)
			*outDirection = params.outDirection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USASChairPanelComponent_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USASChairPanelComponent_BP_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SASChairPanelComponent_BP.SASChairPanelComponent_BP_C");
		return ptr;
	}

}


