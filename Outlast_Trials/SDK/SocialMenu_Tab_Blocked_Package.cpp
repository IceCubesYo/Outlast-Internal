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
	 * 		Name   -> Function SocialMenu_Tab_Blocked.SocialMenu_Tab_Blocked_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply USocialMenu_Tab_Blocked_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SocialMenu_Tab_Blocked.SocialMenu_Tab_Blocked_C.OnFocusReceived");
		
		USocialMenu_Tab_Blocked_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Tab_Blocked.SocialMenu_Tab_Blocked_C.Deactivate
	 * 		Flags  -> ()
	 */
	void USocialMenu_Tab_Blocked_C::Deactivate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SocialMenu_Tab_Blocked.SocialMenu_Tab_Blocked_C.Deactivate");
		
		USocialMenu_Tab_Blocked_C_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SocialMenu_Tab_Blocked.SocialMenu_Tab_Blocked_C.Activate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBSocialMenuManager*                        SocialMenu                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USocialMenu_Tab_Blocked_C::Activate(class URBSocialMenuManager* SocialMenu)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SocialMenu_Tab_Blocked.SocialMenu_Tab_Blocked_C.Activate");
		
		USocialMenu_Tab_Blocked_C_Activate_Params params {};
		params.SocialMenu = SocialMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialMenu_Tab_Blocked_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialMenu_Tab_Blocked_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SocialMenu_Tab_Blocked.SocialMenu_Tab_Blocked_C");
		return ptr;
	}

}


