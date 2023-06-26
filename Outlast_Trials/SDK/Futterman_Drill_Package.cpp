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
	 * 		Name   -> Function Futterman_Drill.Futterman_Drill_C.GetNotifyName
	 * 		Flags  -> ()
	 */
	class FString UFutterman_Drill_C::GetNotifyName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Futterman_Drill.Futterman_Drill_C.GetNotifyName");
		
		UFutterman_Drill_C_GetNotifyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Futterman_Drill.Futterman_Drill_C.TryToSetFuttermanDrillVariable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DrillValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DrillManual                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFutterman_Drill_C::TryToSetFuttermanDrillVariable(class USkeletalMeshComponent* MeshComp, bool DrillValue, bool DrillManual, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Futterman_Drill.Futterman_Drill_C.TryToSetFuttermanDrillVariable");
		
		UFutterman_Drill_C_TryToSetFuttermanDrillVariable_Params params {};
		params.MeshComp = MeshComp;
		params.DrillValue = DrillValue;
		params.DrillManual = DrillManual;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Futterman_Drill.Futterman_Drill_C.Received_NotifyEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      meshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AnimDeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UFutterman_Drill_C::Received_NotifyEnd(class USkeletalMeshComponent* meshComp, class UAnimSequenceBase* Animation, float AnimDeltaTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Futterman_Drill.Futterman_Drill_C.Received_NotifyEnd");
		
		UFutterman_Drill_C_Received_NotifyEnd_Params params {};
		params.meshComp = meshComp;
		params.Animation = Animation;
		params.AnimDeltaTime = AnimDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Futterman_Drill.Futterman_Drill_C.Received_NotifyBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      meshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AnimDeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TotalDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UFutterman_Drill_C::Received_NotifyBegin(class USkeletalMeshComponent* meshComp, class UAnimSequenceBase* Animation, float AnimDeltaTime, float TotalDuration)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Futterman_Drill.Futterman_Drill_C.Received_NotifyBegin");
		
		UFutterman_Drill_C_Received_NotifyBegin_Params params {};
		params.meshComp = meshComp;
		params.Animation = Animation;
		params.AnimDeltaTime = AnimDeltaTime;
		params.TotalDuration = TotalDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFutterman_Drill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFutterman_Drill_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Futterman_Drill.Futterman_Drill_C");
		return ptr;
	}

}


