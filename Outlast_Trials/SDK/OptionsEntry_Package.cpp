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
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UOptionsEntry_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.OnKeyUp");
		
		UOptionsEntry_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.GetArrowBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UArrowButton_C*                              NewParam                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsEntry_C::GetArrowBtn(bool Left, class UArrowButton_C** NewParam)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.GetArrowBtn");
		
		UOptionsEntry_C_GetArrowBtn_Params params {};
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.UpdateSliderBar
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::UpdateSliderBar()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.UpdateSliderBar");
		
		UOptionsEntry_C_UpdateSliderBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.UpdateValueFont
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::UpdateValueFont()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.UpdateValueFont");
		
		UOptionsEntry_C_UpdateValueFont_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UOptionsEntry_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.OnKeyDown");
		
		UOptionsEntry_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UOptionsEntry_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.OnFocusReceived");
		
		UOptionsEntry_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.OnAnalogValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UOptionsEntry_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.OnAnalogValueChanged");
		
		UOptionsEntry_C_OnAnalogValueChanged_Params params {};
		params.MyGeometry = MyGeometry;
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.Event_UpdateTextValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UOptionsEntry_C::Event_UpdateTextValue(const class FText& NewValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.Event_UpdateTextValue");
		
		UOptionsEntry_C_Event_UpdateTextValue_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.Event_UpdateSliderValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsEntry_C::Event_UpdateSliderValue(float Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.Event_UpdateSliderValue");
		
		UOptionsEntry_C_Event_UpdateSliderValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.RefreshDisplay
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::RefreshDisplay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.RefreshDisplay");
		
		UOptionsEntry_C_RefreshDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.RefreshEntry
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::RefreshEntry()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.RefreshEntry");
		
		UOptionsEntry_C_RefreshEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.DownplayEntry
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::DownplayEntry()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.DownplayEntry");
		
		UOptionsEntry_C_DownplayEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.HighlightEntry
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::HighlightEntry()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.HighlightEntry");
		
		UOptionsEntry_C_HighlightEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.UpdateEnableStatus
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::UpdateEnableStatus()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.UpdateEnableStatus");
		
		UOptionsEntry_C_UpdateEnableStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.ColorChangedEntries
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::ColorChangedEntries()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.ColorChangedEntries");
		
		UOptionsEntry_C_ColorChangedEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.SetSliderButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSliderEntry                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionsEntry_C::SetSliderButton(bool IsSliderEntry)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.SetSliderButton");
		
		UOptionsEntry_C_SetSliderButton_Params params {};
		params.IsSliderEntry = IsSliderEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.Set Button Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSubEntry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        OptionnalSubEntryTitle                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsSlider                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionsEntry_C::SetButtonType(bool IsSubEntry, const class FText& OptionnalSubEntryTitle, bool IsSlider)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.Set Button Type");
		
		UOptionsEntry_C_SetButtonType_Params params {};
		params.IsSubEntry = IsSubEntry;
		params.OptionnalSubEntryTitle = OptionnalSubEntryTitle;
		params.IsSlider = IsSlider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        OptionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOptionsEntry_C::SetValue(const class FText& OptionValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.SetValue");
		
		UOptionsEntry_C_SetValue_Params params {};
		params.OptionValue = OptionValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionsEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.PreConstruct");
		
		UOptionsEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.BndEvt__SubEntryBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::BndEvt__SubEntryBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.BndEvt__SubEntryBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsEntry_C_BndEvt__SubEntryBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.BndEvt__Button_112_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::BndEvt__Button_112_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.BndEvt__Button_112_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UOptionsEntry_C_BndEvt__Button_112_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.BndEvt__SliderValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsEntry_C::BndEvt__SliderValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.BndEvt__SliderValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature");
		
		UOptionsEntry_C_BndEvt__SliderValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.BndEvt__SliderElement_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsEntry_C::BndEvt__SliderElement_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.BndEvt__SliderElement_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature");
		
		UOptionsEntry_C_BndEvt__SliderElement_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.Event_UpdateTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        newTitle                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UOptionsEntry_C::Event_UpdateTitle(const class FText& newTitle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.Event_UpdateTitle");
		
		UOptionsEntry_C_Event_UpdateTitle_Params params {};
		params.newTitle = newTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.RefreshValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               forceUpdateSlider                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionsEntry_C::RefreshValue(bool forceUpdateSlider)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.RefreshValue");
		
		UOptionsEntry_C_RefreshValue_Params params {};
		params.forceUpdateSlider = forceUpdateSlider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.Event_UpdateSubButtonText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UOptionsEntry_C::Event_UpdateSubButtonText(const class FText& NewValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.Event_UpdateSubButtonText");
		
		UOptionsEntry_C_Event_UpdateSubButtonText_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.Event_RefreshEntry
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::Event_RefreshEntry()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.Event_RefreshEntry");
		
		UOptionsEntry_C_Event_RefreshEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UOptionsEntry_C_BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature");
		
		UOptionsEntry_C_BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_16_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_16_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_16_OnUnhovered__DelegateSignature");
		
		UOptionsEntry_C_BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_16_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");
		
		UOptionsEntry_C_BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature");
		
		UOptionsEntry_C_BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_11_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_11_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_11_OnUnhovered__DelegateSignature");
		
		UOptionsEntry_C_BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_11_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_14_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_14_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_14_OnUnhovered__DelegateSignature");
		
		UOptionsEntry_C_BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_14_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UOptionsEntry_C_BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UOptionsEntry_C_BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature");
		
		UOptionsEntry_C_BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature");
		
		UOptionsEntry_C_BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_13_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_13_OnHovered__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_13_OnHovered__DelegateSignature");
		
		UOptionsEntry_C_BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_13_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptionsEntry_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.Construct");
		
		UOptionsEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsEntry.OptionsEntry_C.ExecuteUbergraph_OptionsEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsEntry_C::ExecuteUbergraph_OptionsEntry(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OptionsEntry.OptionsEntry_C.ExecuteUbergraph_OptionsEntry");
		
		UOptionsEntry_C_ExecuteUbergraph_OptionsEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntry_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsEntry.OptionsEntry_C");
		return ptr;
	}

}


