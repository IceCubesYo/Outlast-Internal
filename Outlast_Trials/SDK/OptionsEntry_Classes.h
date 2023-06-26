#pragma once

/**
 * Name: Outlast_Trials
 * Version: 1.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass OptionsEntry.OptionsEntry_C
	 * Size -> 0x019D (FullSize[0x04B5] - InheritedSize[0x0318])
	 */
	class UOptionsEntry_C : public URBMenuOptionsEntry
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0318(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    OptionValue_FadeOut;                                     // 0x0320(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton*                                             GlobalHoveringDetection;                                 // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          GridPanel_1;                                             // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonTextBlock*                                    OptionTitle;                                             // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonTextBlock*                                    OptionValue;                                             // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        Slider_Gauge;                                            // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UArrowButton_C*                                      Slider_LeftArrowBtn;                                     // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UArrowButton_C*                                      Slider_RightArrowBtn;                                    // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             SliderElement;                                           // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          SliderSelection;                                         // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       SliderValue;                                             // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonBorder*                                       SliderValueFilter;                                       // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SliderValueFrame;                                        // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SliderValueHoveringDetection;                            // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SubEntryBtn;                                             // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SubEntryTitle;                                           // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TitleBackground;                                         // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ValueBackground;                                         // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UValueCounter_C*                                     ValueCounter;                                            // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ValueSelectionArrows;                                    // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UArrowButton_C*                                      VS_LeftArrowBtn;                                         // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UArrowButton_C*                                      VS_RightArrowBtn;                                        // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLinearColor                                        CurrentGeneralTint;                                      // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateColor                                         HoveredTint;                                             // 0x03E0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         HoveredTint_Semi;                                        // 0x0408(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         NormalTint;                                              // 0x0430(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                EntryName;                                               // 0x0458(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       bToggleCandidate;                                        // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YSM5[0x7];                                   // 0x0471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                SubButtonTitle;                                          // 0x0478(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        ArrowHoveredTint;                                        // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ArrowUnhoveredTint;                                      // 0x04A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastAnalogValue;                                         // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUINavigation                                              LastLRNavigation;                                        // 0x04B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void GetArrowBtn(bool Left, class UArrowButton_C** NewParam);
		void UpdateSliderBar();
		void UpdateValueFont();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
		void Event_UpdateTextValue(const class FText& NewValue);
		void Event_UpdateSliderValue(float Value);
		void RefreshDisplay();
		void RefreshEntry();
		void DownplayEntry();
		void HighlightEntry();
		void UpdateEnableStatus();
		void ColorChangedEntries();
		void SetSliderButton(bool IsSliderEntry);
		void SetButtonType(bool IsSubEntry, const class FText& OptionnalSubEntryTitle, bool IsSlider);
		void SetValue(const class FText& OptionValue);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__SubEntryBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_112_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__SliderValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__SliderElement_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void Event_UpdateTitle(const class FText& newTitle);
		void RefreshValue(bool forceUpdateSlider);
		void Event_UpdateSubButtonText(const class FText& NewValue);
		void Event_RefreshEntry();
		void BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
		void BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature();
		void BndEvt__OptionsEntry_Slider_RightArrowBtn_K2Node_ComponentBoundEvent_16_OnUnhovered__DelegateSignature();
		void BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
		void BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature();
		void BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_11_OnUnhovered__DelegateSignature();
		void BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_14_OnUnhovered__DelegateSignature();
		void BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
		void BndEvt__OptionsEntry_VS_RightArrowBtn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
		void BndEvt__OptionsEntry_VS_LeftArrowBtn_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature();
		void BndEvt__OptionsEntry_Slider_LeftArrowBtn_K2Node_ComponentBoundEvent_13_OnHovered__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_OptionsEntry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
