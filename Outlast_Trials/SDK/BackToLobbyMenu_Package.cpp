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
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.OnPreviewMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBackToLobbyMenu_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.OnPreviewMouseButtonDown");
		
		UBackToLobbyMenu_C_OnPreviewMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateWarningText
	 * 		Flags  -> ()
	 */
	void UBackToLobbyMenu_C::UpdateWarningText()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateWarningText");
		
		UBackToLobbyMenu_C_UpdateWarningText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateLoadingWidgetVisibility
	 * 		Flags  -> ()
	 */
	void UBackToLobbyMenu_C::UpdateLoadingWidgetVisibility()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateLoadingWidgetVisibility");
		
		UBackToLobbyMenu_C_UpdateLoadingWidgetVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateShowWithPartyVisibility
	 * 		Flags  -> ()
	 */
	void UBackToLobbyMenu_C::UpdateShowWithPartyVisibility()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateShowWithPartyVisibility");
		
		UBackToLobbyMenu_C_UpdateShowWithPartyVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateControlVisibility
	 * 		Flags  -> ()
	 */
	void UBackToLobbyMenu_C::UpdateControlVisibility()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateControlVisibility");
		
		UBackToLobbyMenu_C_UpdateControlVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.GetWarningText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBackToLobbyMenu_C::GetWarningText(class FText* Text)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.GetWarningText");
		
		UBackToLobbyMenu_C_GetWarningText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.IsLeaveWithPartyEnabled
	 * 		Flags  -> ()
	 */
	bool UBackToLobbyMenu_C::IsLeaveWithPartyEnabled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.IsLeaveWithPartyEnabled");
		
		UBackToLobbyMenu_C_IsLeaveWithPartyEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.AreButtonsEnabled
	 * 		Flags  -> ()
	 */
	bool UBackToLobbyMenu_C::AreButtonsEnabled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.AreButtonsEnabled");
		
		UBackToLobbyMenu_C_AreButtonsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBackToLobbyMenu_C::BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBackToLobbyMenu_C_BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBackToLobbyMenu_C::BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UBackToLobbyMenu_C_BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void UBackToLobbyMenu_C::Event_Refresh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.Event_Refresh");
		
		UBackToLobbyMenu_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__LeaveWithPartyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBackToLobbyMenu_C::BndEvt__LeaveWithPartyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__LeaveWithPartyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBackToLobbyMenu_C_BndEvt__LeaveWithPartyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.Event_MenuConfirm_Released
	 * 		Flags  -> ()
	 */
	void UBackToLobbyMenu_C::Event_MenuConfirm_Released()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.Event_MenuConfirm_Released");
		
		UBackToLobbyMenu_C_Event_MenuConfirm_Released_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackToLobbyMenu.BackToLobbyMenu_C.ExecuteUbergraph_BackToLobbyMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBackToLobbyMenu_C::ExecuteUbergraph_BackToLobbyMenu(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BackToLobbyMenu.BackToLobbyMenu_C.ExecuteUbergraph_BackToLobbyMenu");
		
		UBackToLobbyMenu_C_ExecuteUbergraph_BackToLobbyMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBackToLobbyMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBackToLobbyMenu_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BackToLobbyMenu.BackToLobbyMenu_C");
		return ptr;
	}

}


