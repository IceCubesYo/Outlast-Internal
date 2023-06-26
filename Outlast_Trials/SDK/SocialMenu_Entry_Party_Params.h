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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.ShowNotificationIcon
	 */
	struct USocialMenu_Entry_Party_C_ShowNotificationIcon_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.OnFocusReceived
	 */
	struct USocialMenu_Entry_Party_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.IsConsideredHovered
	 */
	struct USocialMenu_Entry_Party_C_IsConsideredHovered_Params
	{
	public:
		bool                                                       bConsideredHovered;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetFocused
	 */
	struct USocialMenu_Entry_Party_C_SetFocused_Params
	{
	public:
		bool                                                       bInFocused;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetHovered
	 */
	struct USocialMenu_Entry_Party_C_SetHovered_Params
	{
	public:
		bool                                                       bInHovered;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.RefreshContextualMenu
	 */
	struct USocialMenu_Entry_Party_C_RefreshContextualMenu_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetPlayerLevel
	 */
	struct USocialMenu_Entry_Party_C_SetPlayerLevel_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.CreateContextualMenu
	 */
	struct USocialMenu_Entry_Party_C_CreateContextualMenu_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetProfileIcon
	 */
	struct USocialMenu_Entry_Party_C_SetProfileIcon_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetPartyLeaderIcon
	 */
	struct USocialMenu_Entry_Party_C_SetPartyLeaderIcon_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.ShowLoading
	 */
	struct USocialMenu_Entry_Party_C_ShowLoading_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetBackground
	 */
	struct USocialMenu_Entry_Party_C_SetBackground_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetInGameStatus
	 */
	struct USocialMenu_Entry_Party_C_SetInGameStatus_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetName
	 */
	struct USocialMenu_Entry_Party_C_SetName_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.SetPlatformIcon
	 */
	struct USocialMenu_Entry_Party_C_SetPlatformIcon_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Event_Refresh
	 */
	struct USocialMenu_Entry_Party_C_Event_Refresh_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Event_ActionRequested
	 */
	struct USocialMenu_Entry_Party_C_Event_ActionRequested_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Event_OpenContextualMenu
	 */
	struct USocialMenu_Entry_Party_C_Event_OpenContextualMenu_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Event_CloseContextualMenu
	 */
	struct USocialMenu_Entry_Party_C_Event_CloseContextualMenu_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.BndEvt__ContextualMenuButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature
	 */
	struct USocialMenu_Entry_Party_C_BndEvt__ContextualMenuButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.OnFocusLost
	 */
	struct USocialMenu_Entry_Party_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Construct
	 */
	struct USocialMenu_Entry_Party_C_Construct_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.OnMenuInputSourceChanged
	 */
	struct USocialMenu_Entry_Party_C_OnMenuInputSourceChanged_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.Destruct
	 */
	struct USocialMenu_Entry_Party_C_Destruct_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USocialMenu_Entry_Party_C_BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct USocialMenu_Entry_Party_C_BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct USocialMenu_Entry_Party_C_BndEvt__SocialMenu_Entry_Party_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SocialMenu_Entry_Party.SocialMenu_Entry_Party_C.ExecuteUbergraph_SocialMenu_Entry_Party
	 */
	struct USocialMenu_Entry_Party_C_ExecuteUbergraph_SocialMenu_Entry_Party_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
