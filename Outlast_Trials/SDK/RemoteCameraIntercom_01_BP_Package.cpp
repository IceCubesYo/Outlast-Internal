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
	 * 		Name   -> Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.GetAllCameraIntercoms
	 * 		Flags  -> ()
	 */
	void ARemoteCameraIntercom01_BP_C::GetAllCameraIntercoms()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.GetAllCameraIntercoms");
		
		ARemoteCameraIntercom01_BP_C_GetAllCameraIntercoms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.Event_OnCompletedOperation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ARBPawn*>                             pawns                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ARemoteCameraIntercom01_BP_C::Event_OnCompletedOperation(TArray<class ARBPawn*> pawns)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.Event_OnCompletedOperation");
		
		ARemoteCameraIntercom01_BP_C_Event_OnCompletedOperation_Params params {};
		params.pawns = pawns;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.ExecuteUbergraph_RemoteCameraIntercom-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARemoteCameraIntercom01_BP_C::ExecuteUbergraph_RemoteCameraIntercom01_BP(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.ExecuteUbergraph_RemoteCameraIntercom-01_BP");
		
		ARemoteCameraIntercom01_BP_C_ExecuteUbergraph_RemoteCameraIntercom01_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.OnForcePlayerExit__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ARemoteCameraIntercom01_BP_C::OnForcePlayerExit__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function RemoteCameraIntercom-01_BP.RemoteCameraIntercom-01_BP_C.OnForcePlayerExit__DelegateSignature");
		
		ARemoteCameraIntercom01_BP_C_OnForcePlayerExit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARemoteCameraIntercom01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARemoteCameraIntercom01_BP_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass RemoteCameraIntercom_01_BP.RemoteCameraIntercom-01_BP_C");
		return ptr;
	}

}


