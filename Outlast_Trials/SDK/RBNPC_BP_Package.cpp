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
	 * 		Name   -> Function RBNPC_BP.RBNPC_BP_C.SpawnVariatorEffects
	 * 		Flags  -> ()
	 */
	void ARBNPC_BP_C::SpawnVariatorEffects()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RBNPC_BP.RBNPC_BP_C.SpawnVariatorEffects");
		
		ARBNPC_BP_C_SpawnVariatorEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_BP.RBNPC_BP_C.SetNormalMeshVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARBNPC_BP_C::SetNormalMeshVisibility(bool bVisible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RBNPC_BP.RBNPC_BP_C.SetNormalMeshVisibility");
		
		ARBNPC_BP_C_SetNormalMeshVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_BP.RBNPC_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARBNPC_BP_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RBNPC_BP.RBNPC_BP_C.UserConstructionScript");
		
		ARBNPC_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_BP.RBNPC_BP_C.Event_PlayHitReactionEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     attackLoc                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    effectRotation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ARBNPC_BP_C::Event_PlayHitReactionEffects(const struct FVector& attackLoc, const struct FRotator& effectRotation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RBNPC_BP.RBNPC_BP_C.Event_PlayHitReactionEffects");
		
		ARBNPC_BP_C_Event_PlayHitReactionEffects_Params params {};
		params.attackLoc = attackLoc;
		params.effectRotation = effectRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_BP.RBNPC_BP_C.Event_OnStartRagePaintState
	 * 		Flags  -> ()
	 */
	void ARBNPC_BP_C::Event_OnStartRagePaintState()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RBNPC_BP.RBNPC_BP_C.Event_OnStartRagePaintState");
		
		ARBNPC_BP_C_Event_OnStartRagePaintState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_BP.RBNPC_BP_C.Event_OnEndRagePaintState
	 * 		Flags  -> ()
	 */
	void ARBNPC_BP_C::Event_OnEndRagePaintState()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RBNPC_BP.RBNPC_BP_C.Event_OnEndRagePaintState");
		
		ARBNPC_BP_C_Event_OnEndRagePaintState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_BP.RBNPC_BP_C.Event_OnFootstep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFootstepData                               FootstepData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ARBNPC_BP_C::Event_OnFootstep(const struct FFootstepData& FootstepData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RBNPC_BP.RBNPC_BP_C.Event_OnFootstep");
		
		ARBNPC_BP_C_Event_OnFootstep_Params params {};
		params.FootstepData = FootstepData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_BP.RBNPC_BP_C.Event_OnDealtWeaponDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     otherPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     DamageLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_BP_C::Event_OnDealtWeaponDamage(class ARBPawn* otherPawn, const struct FVector& DamageLocation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RBNPC_BP.RBNPC_BP_C.Event_OnDealtWeaponDamage");
		
		ARBNPC_BP_C_Event_OnDealtWeaponDamage_Params params {};
		params.otherPawn = otherPawn;
		params.DamageLocation = DamageLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_BP.RBNPC_BP_C.Event_OnDealtUnarmedDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPawn*                                     otherPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        damageSourceBone                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_BP_C::Event_OnDealtUnarmedDamage(class ARBPawn* otherPawn, const class FName& damageSourceBone)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RBNPC_BP.RBNPC_BP_C.Event_OnDealtUnarmedDamage");
		
		ARBNPC_BP_C_Event_OnDealtUnarmedDamage_Params params {};
		params.otherPawn = otherPawn;
		params.damageSourceBone = damageSourceBone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_BP.RBNPC_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ARBNPC_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RBNPC_BP.RBNPC_BP_C.ReceiveBeginPlay");
		
		ARBNPC_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_BP.RBNPC_BP_C.TestFakeBlurHead
	 * 		Flags  -> ()
	 */
	void ARBNPC_BP_C::TestFakeBlurHead()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RBNPC_BP.RBNPC_BP_C.TestFakeBlurHead");
		
		ARBNPC_BP_C_TestFakeBlurHead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_BP.RBNPC_BP_C.TestFakeBlurComplete
	 * 		Flags  -> ()
	 */
	void ARBNPC_BP_C::TestFakeBlurComplete()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RBNPC_BP.RBNPC_BP_C.TestFakeBlurComplete");
		
		ARBNPC_BP_C_TestFakeBlurComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_BP.RBNPC_BP_C.ExecuteUbergraph_RBNPC_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_BP_C::ExecuteUbergraph_RBNPC_BP(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RBNPC_BP.RBNPC_BP_C.ExecuteUbergraph_RBNPC_BP");
		
		ARBNPC_BP_C_ExecuteUbergraph_RBNPC_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBNPC_BP.RBNPC_BP_C.BroadcastWeaponAnimation__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               Sequence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBNPC_BP_C::BroadcastWeaponAnimation__DelegateSignature(class UAnimSequence* Sequence)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RBNPC_BP.RBNPC_BP_C.BroadcastWeaponAnimation__DelegateSignature");
		
		ARBNPC_BP_C_BroadcastWeaponAnimation__DelegateSignature_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARBNPC_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBNPC_BP_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass RBNPC_BP.RBNPC_BP_C");
		return ptr;
	}

}


