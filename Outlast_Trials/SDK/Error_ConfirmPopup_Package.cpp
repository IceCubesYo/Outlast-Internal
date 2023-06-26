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
	 * 		Name   -> Function Error_ConfirmPopup.Error_ConfirmPopup_C.Event_InitializePopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        TitleText                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        MainText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        ConfirmText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UError_ConfirmPopup_C::Event_InitializePopup(const class FText& TitleText, const class FText& MainText, const class FText& ConfirmText)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Error_ConfirmPopup.Error_ConfirmPopup_C.Event_InitializePopup");
		
		UError_ConfirmPopup_C_Event_InitializePopup_Params params {};
		params.TitleText = TitleText;
		params.MainText = MainText;
		params.ConfirmText = ConfirmText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Error_ConfirmPopup.Error_ConfirmPopup_C.BndEvt__ConfirmMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UError_ConfirmPopup_C::BndEvt__ConfirmMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Error_ConfirmPopup.Error_ConfirmPopup_C.BndEvt__ConfirmMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UError_ConfirmPopup_C_BndEvt__ConfirmMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Error_ConfirmPopup.Error_ConfirmPopup_C.Event_OnFocusMenu
	 * 		Flags  -> ()
	 */
	void UError_ConfirmPopup_C::Event_OnFocusMenu()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Error_ConfirmPopup.Error_ConfirmPopup_C.Event_OnFocusMenu");
		
		UError_ConfirmPopup_C_Event_OnFocusMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Error_ConfirmPopup.Error_ConfirmPopup_C.Event_OnUnfocusMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldHide                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UError_ConfirmPopup_C::Event_OnUnfocusMenu(bool bShouldHide)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Error_ConfirmPopup.Error_ConfirmPopup_C.Event_OnUnfocusMenu");
		
		UError_ConfirmPopup_C_Event_OnUnfocusMenu_Params params {};
		params.bShouldHide = bShouldHide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Error_ConfirmPopup.Error_ConfirmPopup_C.ExecuteUbergraph_Error_ConfirmPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UError_ConfirmPopup_C::ExecuteUbergraph_Error_ConfirmPopup(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Error_ConfirmPopup.Error_ConfirmPopup_C.ExecuteUbergraph_Error_ConfirmPopup");
		
		UError_ConfirmPopup_C_ExecuteUbergraph_Error_ConfirmPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UError_ConfirmPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UError_ConfirmPopup_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Error_ConfirmPopup.Error_ConfirmPopup_C");
		return ptr;
	}

}


