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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function PerkList.PerkList_C.OnFocusReceived
	 */
	struct UPerkList_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PerkList.PerkList_C.OnPerkReleasedEvent
	 */
	struct UPerkList_C_OnPerkReleasedEvent_Params
	{
	public:
		struct FMenuUpgradeItemInfo                                itemInfo;                                                // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PerkList.PerkList_C.OnPerkPressedEvent
	 */
	struct UPerkList_C_OnPerkPressedEvent_Params
	{
	public:
		struct FMenuUpgradeItemInfo                                itemInfo;                                                // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PerkList.PerkList_C.OnPerkClickedEvent
	 */
	struct UPerkList_C_OnPerkClickedEvent_Params
	{
	public:
		class UPerkUpgradeButton_C*                                Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PerkList.PerkList_C.OnPerkUnhoveredEvent
	 */
	struct UPerkList_C_OnPerkUnhoveredEvent_Params
	{
	public:
		class UPerkUpgradeButton_C*                                Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PerkList.PerkList_C.OnPerkHoveredEvent
	 */
	struct UPerkList_C_OnPerkHoveredEvent_Params
	{
	public:
		class UPerkUpgradeButton_C*                                Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PerkList.PerkList_C.UpdateHeaderText
	 */
	struct UPerkList_C_UpdateHeaderText_Params
	{	};

	/**
	 * Function PerkList.PerkList_C.Refresh
	 */
	struct UPerkList_C_Refresh_Params
	{	};

	/**
	 * Function PerkList.PerkList_C.Init
	 */
	struct UPerkList_C_Init_Params
	{
	public:
		bool                                                       bIsLoadout;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PerkList.PerkList_C.Setup
	 */
	struct UPerkList_C_Setup_Params
	{	};

	/**
	 * Function PerkList.PerkList_C.PreConstruct
	 */
	struct UPerkList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PerkList.PerkList_C.ExecuteUbergraph_PerkList
	 */
	struct UPerkList_C_ExecuteUbergraph_PerkList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PerkList.PerkList_C.OnUpgradeClicked__DelegateSignature
	 */
	struct UPerkList_C_OnUpgradeClicked__DelegateSignature_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PerkList.PerkList_C.OnUpgradeUnhovered__DelegateSignature
	 */
	struct UPerkList_C_OnUpgradeUnhovered__DelegateSignature_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PerkList.PerkList_C.OnUpgradeHovered__DelegateSignature
	 */
	struct UPerkList_C_OnUpgradeHovered__DelegateSignature_Params
	{
	public:
		class FName                                                ItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
