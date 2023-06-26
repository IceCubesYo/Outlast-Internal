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
	 * 		Name   -> Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.DeactivateCamera
	 * 		Flags  -> ()
	 */
	void ACellCustomizationCameraActor_C::DeactivateCamera()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.DeactivateCamera");
		
		ACellCustomizationCameraActor_C_DeactivateCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.Activate Camera
	 * 		Flags  -> ()
	 */
	void ACellCustomizationCameraActor_C::ActivateCamera()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.Activate Camera");
		
		ACellCustomizationCameraActor_C_ActivateCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.UpdateCameraRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACellCustomizationCameraActor_C::UpdateCameraRotation(float DeltaTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.UpdateCameraRotation");
		
		ACellCustomizationCameraActor_C_UpdateCameraRotation_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.FocusCameraTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECustomizationMenuCategory                         CustomizationCategory                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACellCustomizationCameraActor_C::FocusCameraTo(ECustomizationMenuCategory CustomizationCategory)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.FocusCameraTo");
		
		ACellCustomizationCameraActor_C_FocusCameraTo_Params params {};
		params.CustomizationCategory = CustomizationCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACellCustomizationCameraActor_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ReceiveTick");
		
		ACellCustomizationCameraActor_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ExecuteUbergraph_CellCustomizationCameraActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACellCustomizationCameraActor_C::ExecuteUbergraph_CellCustomizationCameraActor(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ExecuteUbergraph_CellCustomizationCameraActor");
		
		ACellCustomizationCameraActor_C_ExecuteUbergraph_CellCustomizationCameraActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACellCustomizationCameraActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACellCustomizationCameraActor_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CellCustomizationCameraActor.CellCustomizationCameraActor_C");
		return ptr;
	}

}


