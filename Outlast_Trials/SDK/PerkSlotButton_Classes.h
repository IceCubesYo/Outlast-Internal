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
	 * WidgetBlueprintGeneratedClass PerkSlotButton.PerkSlotButton_C
	 * Size -> 0x0120 (FullSize[0x0380] - InheritedSize[0x0260])
	 */
	class UPerkSlotButton_C : public UUserWidget
	{
	public:
		class UTextBlock*                                          PerkNameText;                                            // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPerkUpgradeButton_C*                                PerkUpgradeButton;                                       // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SlotIndex;                                               // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AvailablePerkSlots;                                      // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMenuUpgradeItemInfo                                UpgradeInfo;                                             // 0x0278(0x0108) Edit, BlueprintVisible

	public:
		void SetHovered(bool bHovered);
		void Refresh();
		void Init(int32_t Slot);
		void Setup();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
