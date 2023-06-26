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
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.SetPage
	 */
	struct UCharacterSheetStatsTab_C_SetPage_Params
	{
	public:
		int32_t                                                    NewPageIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnFocusReceived
	 */
	struct UCharacterSheetStatsTab_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.NextPage
	 */
	struct UCharacterSheetStatsTab_C_NextPage_Params
	{	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.PreviousPage
	 */
	struct UCharacterSheetStatsTab_C_PreviousPage_Params
	{	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.UpdateGamepadPageNav
	 */
	struct UCharacterSheetStatsTab_C_UpdateGamepadPageNav_Params
	{	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnBadgeUnhovered
	 */
	struct UCharacterSheetStatsTab_C_OnBadgeUnhovered_Params
	{
	public:
		struct FRBPlayerBadgeRow                                   badgeSettings;                                           // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnBadgeHovered
	 */
	struct UCharacterSheetStatsTab_C_OnBadgeHovered_Params
	{
	public:
		struct FRBPlayerBadgeRow                                   badgeSettings;                                           // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.GetPageTitle
	 */
	struct UCharacterSheetStatsTab_C_GetPageTitle_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Refresh
	 */
	struct UCharacterSheetStatsTab_C_Refresh_Params
	{	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.RefreshLevel
	 */
	struct UCharacterSheetStatsTab_C_RefreshLevel_Params
	{	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.RefreshBadgePages
	 */
	struct UCharacterSheetStatsTab_C_RefreshBadgePages_Params
	{	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.RefreshBadges
	 */
	struct UCharacterSheetStatsTab_C_RefreshBadges_Params
	{	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.RefreshStats
	 */
	struct UCharacterSheetStatsTab_C_RefreshStats_Params
	{	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Event_Refresh
	 */
	struct UCharacterSheetStatsTab_C_Event_Refresh_Params
	{	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.BndEvt__PreviousPageButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCharacterSheetStatsTab_C_BndEvt__PreviousPageButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.BndEvt__NextPageButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCharacterSheetStatsTab_C_BndEvt__NextPageButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Construct
	 */
	struct UCharacterSheetStatsTab_C_Construct_Params
	{	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnMenuInputSourceChanged
	 */
	struct UCharacterSheetStatsTab_C_OnMenuInputSourceChanged_Params
	{	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Destruct
	 */
	struct UCharacterSheetStatsTab_C_Destruct_Params
	{	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnGamepadPageLeft
	 */
	struct UCharacterSheetStatsTab_C_OnGamepadPageLeft_Params
	{	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnGamepadPageRight
	 */
	struct UCharacterSheetStatsTab_C_OnGamepadPageRight_Params
	{	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Event_OnTabSelected
	 */
	struct UCharacterSheetStatsTab_C_Event_OnTabSelected_Params
	{	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Event_OnTabUnselected
	 */
	struct UCharacterSheetStatsTab_C_Event_OnTabUnselected_Params
	{	};

	/**
	 * Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.ExecuteUbergraph_CharacterSheetStatsTab
	 */
	struct UCharacterSheetStatsTab_C_ExecuteUbergraph_CharacterSheetStatsTab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
