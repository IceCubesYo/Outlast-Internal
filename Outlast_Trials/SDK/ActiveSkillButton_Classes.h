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
	 * WidgetBlueprintGeneratedClass ActiveSkillButton.ActiveSkillButton_C
	 * Size -> 0x0181 (FullSize[0x03E1] - InheritedSize[0x0260])
	 */
	class UActiveSkillButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCategoryButtonWidget_C*                             CategoryButtonWidget;                                    // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		EActiveSkillType                                           ActiveSkillType;                                         // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0NC6[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClickedEvent;                                          // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EMenuUpgradeItemState                                      State;                                                   // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UMB4[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHoveredEvent;                                          // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhoveredEvent;                                        // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FMenuUpgradeItemInfo                                itemInfo;                                                // 0x02B0(0x0108) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             OnPressedEvent;                                          // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnReleasedEvent;                                         // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FName                                                ItemId;                                                  // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsSlot;                                                 // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GamepadNav_MenuConfirm_Release();
		void GamepadNav_MenuConfirm();
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void SetHovered(bool bInHovered);
		void UpdateNewStatus();
		void GetIsEquipped(bool* IsEquipped);
		void SetIsEquipped(bool IsEquipped);
		void SetSelected(bool Selected);
		void InitializeEmptySlot();
		void Initialize(const struct FMenuUpgradeItemInfo& itemInfo, bool bInIsSlot);
		void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature();
		void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature();
		void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature();
		void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature();
		void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature();
		void Construct();
		void OnUpdateNewStatus_Event_1();
		void ExecuteUbergraph_ActiveSkillButton(int32_t EntryPoint);
		void OnReleasedEvent__DelegateSignature(const struct FMenuUpgradeItemInfo& itemInfo);
		void OnPressedEvent__DelegateSignature(const struct FMenuUpgradeItemInfo& itemInfo);
		void OnUnhoveredEvent__DelegateSignature(class UActiveSkillButton_C* Button);
		void OnHoveredEvent__DelegateSignature(class UActiveSkillButton_C* Button);
		void OnClickedEvent__DelegateSignature(class UActiveSkillButton_C* Button);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
