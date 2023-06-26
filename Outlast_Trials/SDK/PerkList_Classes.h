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
	 * WidgetBlueprintGeneratedClass PerkList.PerkList_C
	 * Size -> 0x0051 (FullSize[0x02C9] - InheritedSize[0x0278])
	 */
	class UPerkList_C : public URBUpgradeMenuTab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUniformGridPanel*                                   PerkGrid;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PerkStateText;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bIsLoadout;                                              // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HEL5[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnUpgradeHovered;                                        // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUpgradeUnhovered;                                      // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUpgradeClicked;                                        // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bHasNewItemBeingDisplayed;                               // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void OnPerkReleasedEvent(const struct FMenuUpgradeItemInfo& itemInfo);
		void OnPerkPressedEvent(const struct FMenuUpgradeItemInfo& itemInfo);
		void OnPerkClickedEvent(class UPerkUpgradeButton_C* Button);
		void OnPerkUnhoveredEvent(class UPerkUpgradeButton_C* Button);
		void OnPerkHoveredEvent(class UPerkUpgradeButton_C* Button);
		void UpdateHeaderText();
		void Refresh();
		void Init(bool bIsLoadout);
		void Setup();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_PerkList(int32_t EntryPoint);
		void OnUpgradeClicked__DelegateSignature(const class FName& ItemId);
		void OnUpgradeUnhovered__DelegateSignature(const class FName& ItemId);
		void OnUpgradeHovered__DelegateSignature(const class FName& ItemId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
