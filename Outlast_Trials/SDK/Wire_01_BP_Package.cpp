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
	 * 		Name   -> Function Wire-01_BP.Wire-01_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWire01_BP_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Wire-01_BP.Wire-01_BP_C.UserConstructionScript");
		
		AWire01_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Wire-01_BP.Wire-01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWire01_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Wire-01_BP.Wire-01_BP_C.ReceiveBeginPlay");
		
		AWire01_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Wire-01_BP.Wire-01_BP_C.ExecuteUbergraph_Wire-01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWire01_BP_C::ExecuteUbergraph_Wire01_BP(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Wire-01_BP.Wire-01_BP_C.ExecuteUbergraph_Wire-01_BP");
		
		AWire01_BP_C_ExecuteUbergraph_Wire01_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWire01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWire01_BP_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Wire_01_BP.Wire-01_BP_C");
		return ptr;
	}

}


