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
	 * Function CreditsMenu.CreditsMenu_C.Finished_0560D27B4148CBD98B8758ADF411BFC7
	 */
	struct UCreditsMenu_C_Finished_0560D27B4148CBD98B8758ADF411BFC7_Params
	{	};

	/**
	 * Function CreditsMenu.CreditsMenu_C.PreConstruct
	 */
	struct UCreditsMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CreditsMenu.CreditsMenu_C.Construct
	 */
	struct UCreditsMenu_C_Construct_Params
	{	};

	/**
	 * Function CreditsMenu.CreditsMenu_C.Tick
	 */
	struct UCreditsMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CreditsMenu.CreditsMenu_C.Event_OnPop
	 */
	struct UCreditsMenu_C_Event_OnPop_Params
	{	};

	/**
	 * Function CreditsMenu.CreditsMenu_C.Event_OnFocusMenu
	 */
	struct UCreditsMenu_C_Event_OnFocusMenu_Params
	{	};

	/**
	 * Function CreditsMenu.CreditsMenu_C.CustomEvent_1
	 */
	struct UCreditsMenu_C_CustomEvent_1_Params
	{	};

	/**
	 * Function CreditsMenu.CreditsMenu_C.CustomEvent_2
	 */
	struct UCreditsMenu_C_CustomEvent_2_Params
	{	};

	/**
	 * Function CreditsMenu.CreditsMenu_C.BndEvt__CreditsMenu_SkipPrompt_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UCreditsMenu_C_BndEvt__CreditsMenu_SkipPrompt_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CreditsMenu.CreditsMenu_C.BndEvt__CreditsMenu_SkipPrompt_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
	 */
	struct UCreditsMenu_C_BndEvt__CreditsMenu_SkipPrompt_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function CreditsMenu.CreditsMenu_C.BndEvt__CreditsMenu_SkipPrompt_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
	 */
	struct UCreditsMenu_C_BndEvt__CreditsMenu_SkipPrompt_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function CreditsMenu.CreditsMenu_C.Event_EndCutsceneRequested
	 */
	struct UCreditsMenu_C_Event_EndCutsceneRequested_Params
	{	};

	/**
	 * Function CreditsMenu.CreditsMenu_C.HideSkipPrompt
	 */
	struct UCreditsMenu_C_HideSkipPrompt_Params
	{	};

	/**
	 * Function CreditsMenu.CreditsMenu_C.Event_ShowSkipPrompt
	 */
	struct UCreditsMenu_C_Event_ShowSkipPrompt_Params
	{
	public:
		bool                                                       bShouldStartHideTimer;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CreditsMenu.CreditsMenu_C.ExecuteUbergraph_CreditsMenu
	 */
	struct UCreditsMenu_C_ExecuteUbergraph_CreditsMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
