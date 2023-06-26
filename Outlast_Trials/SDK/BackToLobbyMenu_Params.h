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
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.OnPreviewMouseButtonDown
	 */
	struct UBackToLobbyMenu_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateWarningText
	 */
	struct UBackToLobbyMenu_C_UpdateWarningText_Params
	{	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateLoadingWidgetVisibility
	 */
	struct UBackToLobbyMenu_C_UpdateLoadingWidgetVisibility_Params
	{	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateShowWithPartyVisibility
	 */
	struct UBackToLobbyMenu_C_UpdateShowWithPartyVisibility_Params
	{	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateControlVisibility
	 */
	struct UBackToLobbyMenu_C_UpdateControlVisibility_Params
	{	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.GetWarningText
	 */
	struct UBackToLobbyMenu_C_GetWarningText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.IsLeaveWithPartyEnabled
	 */
	struct UBackToLobbyMenu_C_IsLeaveWithPartyEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.AreButtonsEnabled
	 */
	struct UBackToLobbyMenu_C_AreButtonsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBackToLobbyMenu_C_BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBackToLobbyMenu_C_BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.Event_Refresh
	 */
	struct UBackToLobbyMenu_C_Event_Refresh_Params
	{	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__LeaveWithPartyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBackToLobbyMenu_C_BndEvt__LeaveWithPartyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.Event_MenuConfirm_Released
	 */
	struct UBackToLobbyMenu_C_Event_MenuConfirm_Released_Params
	{	};

	/**
	 * Function BackToLobbyMenu.BackToLobbyMenu_C.ExecuteUbergraph_BackToLobbyMenu
	 */
	struct UBackToLobbyMenu_C_ExecuteUbergraph_BackToLobbyMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TSCT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
