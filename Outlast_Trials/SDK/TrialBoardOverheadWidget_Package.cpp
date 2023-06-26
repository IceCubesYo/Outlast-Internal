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
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupPlayerLevel
	 * 		Flags  -> ()
	 */
	void UTrialBoardOverheadWidget_C::SetupPlayerLevel()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupPlayerLevel");
		
		UTrialBoardOverheadWidget_C_SetupPlayerLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupPartyLeaderIcon
	 * 		Flags  -> ()
	 */
	void UTrialBoardOverheadWidget_C::SetupPartyLeaderIcon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupPartyLeaderIcon");
		
		UTrialBoardOverheadWidget_C_SetupPartyLeaderIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupActiveSkill
	 * 		Flags  -> ()
	 */
	void UTrialBoardOverheadWidget_C::SetupActiveSkill()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupActiveSkill");
		
		UTrialBoardOverheadWidget_C_SetupActiveSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetName
	 * 		Flags  -> ()
	 */
	void UTrialBoardOverheadWidget_C::SetName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetName");
		
		UTrialBoardOverheadWidget_C_SetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void UTrialBoardOverheadWidget_C::Event_Refresh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.Event_Refresh");
		
		UTrialBoardOverheadWidget_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActiveSkillButton_C*                        Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardOverheadWidget_C::BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature(class UActiveSkillButton_C* Button)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature");
		
		UTrialBoardOverheadWidget_C_BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.ExecuteUbergraph_TrialBoardOverheadWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrialBoardOverheadWidget_C::ExecuteUbergraph_TrialBoardOverheadWidget(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.ExecuteUbergraph_TrialBoardOverheadWidget");
		
		UTrialBoardOverheadWidget_C_ExecuteUbergraph_TrialBoardOverheadWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrialBoardOverheadWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrialBoardOverheadWidget_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TrialBoardOverheadWidget.TrialBoardOverheadWidget_C");
		return ptr;
	}

}


