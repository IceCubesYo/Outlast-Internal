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
	 * 		Name   -> Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.SetupStatus
	 * 		Flags  -> ()
	 */
	void UGroupStatusSelfEntryWidget_C::SetupStatus()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.SetupStatus");
		
		UGroupStatusSelfEntryWidget_C_SetupStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.SetupCharacterClass
	 * 		Flags  -> ()
	 */
	void UGroupStatusSelfEntryWidget_C::SetupCharacterClass()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.SetupCharacterClass");
		
		UGroupStatusSelfEntryWidget_C_SetupCharacterClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_MaxDisplayNameLengthUpdated
	 * 		Flags  -> ()
	 */
	void UGroupStatusSelfEntryWidget_C::Event_MaxDisplayNameLengthUpdated()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_MaxDisplayNameLengthUpdated");
		
		UGroupStatusSelfEntryWidget_C_Event_MaxDisplayNameLengthUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UGroupStatusSelfEntryWidget_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Construct");
		
		UGroupStatusSelfEntryWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGroupStatusSelfEntryWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.PreConstruct");
		
		UGroupStatusSelfEntryWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_Refresh
	 * 		Flags  -> ()
	 */
	void UGroupStatusSelfEntryWidget_C::Event_Refresh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_Refresh");
		
		UGroupStatusSelfEntryWidget_C_Event_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_Refresh_Audio
	 * 		Flags  -> ()
	 */
	void UGroupStatusSelfEntryWidget_C::Event_Refresh_Audio()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_Refresh_Audio");
		
		UGroupStatusSelfEntryWidget_C_Event_Refresh_Audio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.ExecuteUbergraph_GroupStatusSelfEntryWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGroupStatusSelfEntryWidget_C::ExecuteUbergraph_GroupStatusSelfEntryWidget(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.ExecuteUbergraph_GroupStatusSelfEntryWidget");
		
		UGroupStatusSelfEntryWidget_C_ExecuteUbergraph_GroupStatusSelfEntryWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroupStatusSelfEntryWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupStatusSelfEntryWidget_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C");
		return ptr;
	}

}


