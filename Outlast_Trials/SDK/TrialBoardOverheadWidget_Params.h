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
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupPlayerLevel
	 */
	struct UTrialBoardOverheadWidget_C_SetupPlayerLevel_Params
	{	};

	/**
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupPartyLeaderIcon
	 */
	struct UTrialBoardOverheadWidget_C_SetupPartyLeaderIcon_Params
	{	};

	/**
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetupActiveSkill
	 */
	struct UTrialBoardOverheadWidget_C_SetupActiveSkill_Params
	{	};

	/**
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.SetName
	 */
	struct UTrialBoardOverheadWidget_C_SetName_Params
	{	};

	/**
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.Event_Refresh
	 */
	struct UTrialBoardOverheadWidget_C_Event_Refresh_Params
	{	};

	/**
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature
	 */
	struct UTrialBoardOverheadWidget_C_BndEvt__TrialBoardOverheadWidget_ActiveSkillButton_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature_Params
	{
	public:
		class UActiveSkillButton_C*                                Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrialBoardOverheadWidget.TrialBoardOverheadWidget_C.ExecuteUbergraph_TrialBoardOverheadWidget
	 */
	struct UTrialBoardOverheadWidget_C_ExecuteUbergraph_TrialBoardOverheadWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OK5L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
