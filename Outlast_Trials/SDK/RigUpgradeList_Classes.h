﻿#pragma once

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
	 * WidgetBlueprintGeneratedClass RigUpgradeList.RigUpgradeList_C
	 * Size -> 0x0059 (FullSize[0x02D1] - InheritedSize[0x0278])
	 */
	class URigUpgradeList_C : public URBUpgradeMenuTab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUpgradeButton_C*                                    RigAcquiredUpgradeButton;                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URigButton_C*                                        RigButton;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        RigUpgradeList;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bIsLoadout;                                              // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JEYK[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnUpgradeHovered;                                        // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUpgradeUnhovered;                                      // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUpgradeClicked;                                        // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EActiveSkillType                                           ActiveSkillType;                                         // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void OnUpgradeReleasedEvent(const class FName& ItemId);
		void OnUpgradePressedEvent(const class FName& ItemId);
		void OnUpgradeClickedEvent(const class FName& ItemId);
		void OnUpgradeUnhoveredEvent(const class FName& ItemId);
		void OnUpgradeHoveredEvent(const class FName& ItemId);
		void Refresh();
		void Init(bool bIsLoadout, EActiveSkillType activeSkillUpgradeId);
		void Setup();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_RigUpgradeList(int32_t EntryPoint);
		void OnUpgradeClicked__DelegateSignature(const class FName& ItemId);
		void OnUpgradeUnhovered__DelegateSignature(const class FName& ItemId);
		void OnUpgradeHovered__DelegateSignature(const class FName& ItemId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
