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
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.UpdateActiveSkillType
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::UpdateActiveSkillType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.UpdateActiveSkillType");
		
		UOverheadInfo_C_UpdateActiveSkillType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.InithHealthBarVisibility
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::InithHealthBarVisibility()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.InithHealthBarVisibility");
		
		UOverheadInfo_C_InithHealthBarVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.SetImposter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBImposter*                                 newImposter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverheadInfo_C::SetImposter(class ARBImposter* newImposter)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.SetImposter");
		
		UOverheadInfo_C_SetImposter_Params params {};
		params.newImposter = newImposter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.OnTeammateInWorldIconsDisplayUpdated
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::OnTeammateInWorldIconsDisplayUpdated()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.OnTeammateInWorldIconsDisplayUpdated");
		
		UOverheadInfo_C_OnTeammateInWorldIconsDisplayUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.OnPlayerPartyStateUpdated
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::OnPlayerPartyStateUpdated()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.OnPlayerPartyStateUpdated");
		
		UOverheadInfo_C_OnPlayerPartyStateUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.UpdateImmersionSettings
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::UpdateImmersionSettings()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.UpdateImmersionSettings");
		
		UOverheadInfo_C_UpdateImmersionSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.SetPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARBPlayerState*                              NewPlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverheadInfo_C::SetPlayerState(class ARBPlayerState* NewPlayerState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.SetPlayerState");
		
		UOverheadInfo_C_SetPlayerState_Params params {};
		params.NewPlayerState = NewPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.OnPlayerIndicatorTypeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerIndicatorType                               playerIndicatorType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverheadInfo_C::OnPlayerIndicatorTypeChanged(EPlayerIndicatorType playerIndicatorType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.OnPlayerIndicatorTypeChanged");
		
		UOverheadInfo_C_OnPlayerIndicatorTypeChanged_Params params {};
		params.playerIndicatorType = playerIndicatorType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.OnPlayerLevelChanged
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::OnPlayerLevelChanged()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.OnPlayerLevelChanged");
		
		UOverheadInfo_C_OnPlayerLevelChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.SetImposterName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CopiedName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UOverheadInfo_C::SetImposterName(const class FString& CopiedName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.SetImposterName");
		
		UOverheadInfo_C_SetImposterName_Params params {};
		params.CopiedName = CopiedName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.UpdateDisplay
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::UpdateDisplay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.UpdateDisplay");
		
		UOverheadInfo_C_UpdateDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.UpdateTradeItem
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::UpdateTradeItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.UpdateTradeItem");
		
		UOverheadInfo_C_UpdateTradeItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.UpdateDistanceEffects
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::UpdateDistanceEffects()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.UpdateDistanceEffects");
		
		UOverheadInfo_C_UpdateDistanceEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.UpdatePartyIcons
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::UpdatePartyIcons()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.UpdatePartyIcons");
		
		UOverheadInfo_C_UpdatePartyIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.Construct
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.Construct");
		
		UOverheadInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.Event_Show
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::Event_Show()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.Event_Show");
		
		UOverheadInfo_C_Event_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.Event_Hide
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::Event_Hide()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.Event_Hide");
		
		UOverheadInfo_C_Event_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOverheadInfo_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.PreConstruct");
		
		UOverheadInfo_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.OnPlayerHealthChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverheadInfo_C::OnPlayerHealthChanged(float newHealth)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.OnPlayerHealthChanged");
		
		UOverheadInfo_C_OnPlayerHealthChanged_Params params {};
		params.newHealth = newHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.OnPlayerMaxHealthChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newMaxHealth                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverheadInfo_C::OnPlayerMaxHealthChanged(float newMaxHealth)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.OnPlayerMaxHealthChanged");
		
		UOverheadInfo_C_OnPlayerMaxHealthChanged_Params params {};
		params.newMaxHealth = newMaxHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.OnCurrentLoadoutChanged
	 * 		Flags  -> ()
	 */
	void UOverheadInfo_C::OnCurrentLoadoutChanged()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.OnCurrentLoadoutChanged");
		
		UOverheadInfo_C_OnCurrentLoadoutChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OverheadInfo.OverheadInfo_C.ExecuteUbergraph_OverheadInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverheadInfo_C::ExecuteUbergraph_OverheadInfo(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OverheadInfo.OverheadInfo_C.ExecuteUbergraph_OverheadInfo");
		
		UOverheadInfo_C_ExecuteUbergraph_OverheadInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOverheadInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOverheadInfo_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OverheadInfo.OverheadInfo_C");
		return ptr;
	}

}


