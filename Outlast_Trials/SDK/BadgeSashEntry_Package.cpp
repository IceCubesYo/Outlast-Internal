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
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.PlayAcquiredAnimation
	 * 		Flags  -> ()
	 */
	void UBadgeSashEntry_C::PlayAcquiredAnimation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.PlayAcquiredAnimation");
		
		UBadgeSashEntry_C_PlayAcquiredAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.IsConsideredHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bConsideredHovered                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBadgeSashEntry_C::IsConsideredHovered(bool* bConsideredHovered)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.IsConsideredHovered");
		
		UBadgeSashEntry_C_IsConsideredHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bConsideredHovered != nullptr)
			*bConsideredHovered = params.bConsideredHovered;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.SetFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInFocused                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBadgeSashEntry_C::SetFocused(bool bInFocused)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.SetFocused");
		
		UBadgeSashEntry_C_SetFocused_Params params {};
		params.bInFocused = bInFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInHovered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBadgeSashEntry_C::SetHovered(bool bInHovered)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.SetHovered");
		
		UBadgeSashEntry_C_SetHovered_Params params {};
		params.bInHovered = bInHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.SetupEmpty
	 * 		Flags  -> ()
	 */
	void UBadgeSashEntry_C::SetupEmpty()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.SetupEmpty");
		
		UBadgeSashEntry_C_SetupEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.Refresh
	 * 		Flags  -> ()
	 */
	void UBadgeSashEntry_C::Refresh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.Refresh");
		
		UBadgeSashEntry_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.OnLoaded_E635967C4C8D98AF198D06928C9FF87D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBadgeSashEntry_C::OnLoaded_E635967C4C8D98AF198D06928C9FF87D(class UObject* Loaded)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.OnLoaded_E635967C4C8D98AF198D06928C9FF87D");
		
		UBadgeSashEntry_C_OnLoaded_E635967C4C8D98AF198D06928C9FF87D_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBadgeSashEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.PreConstruct");
		
		UBadgeSashEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UnlockedCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRBPlayerBadgeRow                           badgeSettings                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBadgeSashEntry_C::Setup(int32_t UnlockedCount, const struct FRBPlayerBadgeRow& badgeSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.Setup");
		
		UBadgeSashEntry_C_Setup_Params params {};
		params.UnlockedCount = UnlockedCount;
		params.badgeSettings = badgeSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.BndEvt__BadgeSashEntry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBadgeSashEntry_C::BndEvt__BadgeSashEntry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.BndEvt__BadgeSashEntry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UBadgeSashEntry_C_BndEvt__BadgeSashEntry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.BndEvt__BadgeSashEntry_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBadgeSashEntry_C::BndEvt__BadgeSashEntry_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.BndEvt__BadgeSashEntry_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBadgeSashEntry_C_BndEvt__BadgeSashEntry_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void UBadgeSashEntry_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.Construct");
		
		UBadgeSashEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.Destruct
	 * 		Flags  -> ()
	 */
	void UBadgeSashEntry_C::Destruct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.Destruct");
		
		UBadgeSashEntry_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.OnMenuInputSourceChanged
	 * 		Flags  -> ()
	 */
	void UBadgeSashEntry_C::OnMenuInputSourceChanged()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.OnMenuInputSourceChanged");
		
		UBadgeSashEntry_C_OnMenuInputSourceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBadgeSashEntry_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.OnAddedToFocusPath");
		
		UBadgeSashEntry_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.OnRemovedFromFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBadgeSashEntry_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.OnRemovedFromFocusPath");
		
		UBadgeSashEntry_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.ExecuteUbergraph_BadgeSashEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBadgeSashEntry_C::ExecuteUbergraph_BadgeSashEntry(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.ExecuteUbergraph_BadgeSashEntry");
		
		UBadgeSashEntry_C_ExecuteUbergraph_BadgeSashEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBPlayerBadgeRow                           badgeSettings                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBadgeSashEntry_C::OnUnhovered__DelegateSignature(const struct FRBPlayerBadgeRow& badgeSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.OnUnhovered__DelegateSignature");
		
		UBadgeSashEntry_C_OnUnhovered__DelegateSignature_Params params {};
		params.badgeSettings = badgeSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BadgeSashEntry.BadgeSashEntry_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBPlayerBadgeRow                           badgeSettings                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBadgeSashEntry_C::OnHovered__DelegateSignature(const struct FRBPlayerBadgeRow& badgeSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BadgeSashEntry.BadgeSashEntry_C.OnHovered__DelegateSignature");
		
		UBadgeSashEntry_C_OnHovered__DelegateSignature_Params params {};
		params.badgeSettings = badgeSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBadgeSashEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBadgeSashEntry_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BadgeSashEntry.BadgeSashEntry_C");
		return ptr;
	}

}


