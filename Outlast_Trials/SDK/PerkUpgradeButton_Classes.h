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
	 * WidgetBlueprintGeneratedClass PerkUpgradeButton.PerkUpgradeButton_C
	 * Size -> 0x01A0 (FullSize[0x0400] - InheritedSize[0x0260])
	 */
	class UPerkUpgradeButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCategoryButtonWidget_C*                             CategoryButtonWidget;                                    // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CostAmountText;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CurrencyTypeImage;                                       // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EquippedImage;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                ItemId;                                                  // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickedEvent;                                          // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EMenuUpgradeItemState                                      ItemState;                                               // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_56R8[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHoveredEvent;                                          // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhoveredEvent;                                        // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FMenuUpgradeItemInfo                                itemInfo;                                                // 0x02C8(0x0108) Edit, BlueprintVisible
		bool                                                       bIsLoadout;                                              // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KYEO[0x7];                                   // 0x03D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPressedEvent;                                          // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnReleasedEvent;                                         // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    SlotIndex;                                               // 0x03F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsSlot;                                                 // 0x03FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsLockedSlot;                                           // 0x03FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsEquipped;                                             // 0x03FE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bEnableLoadoutHoverEvents;                               // 0x03FF(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void Setup();
		void GamepadNav_MenuConfirm_Release();
		void GamepadNav_MenuConfirm();
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void GetIsEquipped(bool* IsEquipped);
		void SetIsEquipped(bool IsEquipped);
		void InitializeEmptySlot(int32_t SlotIndex);
		void InitializeLockedSlot(int32_t SlotIndex);
		void Initialize(const struct FMenuUpgradeItemInfo& itemUpgradeInfo, bool inIsLoadout, int32_t SlotIndex, bool bInIsSlot);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature();
		void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature();
		void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature();
		void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature();
		void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature();
		void ExecuteUbergraph_PerkUpgradeButton(int32_t EntryPoint);
		void OnReleasedEvent__DelegateSignature(const struct FMenuUpgradeItemInfo& itemInfo);
		void OnPressedEvent__DelegateSignature(const struct FMenuUpgradeItemInfo& itemInfo);
		void OnUnhoveredEvent__DelegateSignature(class UPerkUpgradeButton_C* Button);
		void OnHoveredEvent__DelegateSignature(class UPerkUpgradeButton_C* Button);
		void OnClickedEvent__DelegateSignature(class UPerkUpgradeButton_C* Button);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
