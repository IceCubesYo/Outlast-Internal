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
	 * Function Error_ConfirmPopup.Error_ConfirmPopup_C.Event_InitializePopup
	 */
	struct UError_ConfirmPopup_C_Event_InitializePopup_Params
	{
	public:
		class FText                                                TitleText;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                MainText;                                                // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                ConfirmText;                                             // 0x0030(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Error_ConfirmPopup.Error_ConfirmPopup_C.BndEvt__ConfirmMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UError_ConfirmPopup_C_BndEvt__ConfirmMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Error_ConfirmPopup.Error_ConfirmPopup_C.Event_OnFocusMenu
	 */
	struct UError_ConfirmPopup_C_Event_OnFocusMenu_Params
	{	};

	/**
	 * Function Error_ConfirmPopup.Error_ConfirmPopup_C.Event_OnUnfocusMenu
	 */
	struct UError_ConfirmPopup_C_Event_OnUnfocusMenu_Params
	{
	public:
		bool                                                       bShouldHide;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Error_ConfirmPopup.Error_ConfirmPopup_C.ExecuteUbergraph_Error_ConfirmPopup
	 */
	struct UError_ConfirmPopup_C_ExecuteUbergraph_Error_ConfirmPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BHXV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
