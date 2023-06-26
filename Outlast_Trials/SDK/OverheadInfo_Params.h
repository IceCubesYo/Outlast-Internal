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
	 * Function OverheadInfo.OverheadInfo_C.UpdateActiveSkillType
	 */
	struct UOverheadInfo_C_UpdateActiveSkillType_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.InithHealthBarVisibility
	 */
	struct UOverheadInfo_C_InithHealthBarVisibility_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.SetImposter
	 */
	struct UOverheadInfo_C_SetImposter_Params
	{
	public:
		class ARBImposter*                                         newImposter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.OnTeammateInWorldIconsDisplayUpdated
	 */
	struct UOverheadInfo_C_OnTeammateInWorldIconsDisplayUpdated_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.OnPlayerPartyStateUpdated
	 */
	struct UOverheadInfo_C_OnPlayerPartyStateUpdated_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.UpdateImmersionSettings
	 */
	struct UOverheadInfo_C_UpdateImmersionSettings_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.SetPlayerState
	 */
	struct UOverheadInfo_C_SetPlayerState_Params
	{
	public:
		class ARBPlayerState*                                      NewPlayerState;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.OnPlayerIndicatorTypeChanged
	 */
	struct UOverheadInfo_C_OnPlayerIndicatorTypeChanged_Params
	{
	public:
		EPlayerIndicatorType                                       playerIndicatorType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RH3J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.OnPlayerLevelChanged
	 */
	struct UOverheadInfo_C_OnPlayerLevelChanged_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.SetImposterName
	 */
	struct UOverheadInfo_C_SetImposterName_Params
	{
	public:
		class FString                                              CopiedName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.UpdateDisplay
	 */
	struct UOverheadInfo_C_UpdateDisplay_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.UpdateTradeItem
	 */
	struct UOverheadInfo_C_UpdateTradeItem_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.UpdateDistanceEffects
	 */
	struct UOverheadInfo_C_UpdateDistanceEffects_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.UpdatePartyIcons
	 */
	struct UOverheadInfo_C_UpdatePartyIcons_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.Construct
	 */
	struct UOverheadInfo_C_Construct_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.Event_Show
	 */
	struct UOverheadInfo_C_Event_Show_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.Event_Hide
	 */
	struct UOverheadInfo_C_Event_Hide_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.PreConstruct
	 */
	struct UOverheadInfo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.OnPlayerHealthChanged
	 */
	struct UOverheadInfo_C_OnPlayerHealthChanged_Params
	{
	public:
		float                                                      newHealth;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.OnPlayerMaxHealthChanged
	 */
	struct UOverheadInfo_C_OnPlayerMaxHealthChanged_Params
	{
	public:
		float                                                      newMaxHealth;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.OnCurrentLoadoutChanged
	 */
	struct UOverheadInfo_C_OnCurrentLoadoutChanged_Params
	{	};

	/**
	 * Function OverheadInfo.OverheadInfo_C.ExecuteUbergraph_OverheadInfo
	 */
	struct UOverheadInfo_C_ExecuteUbergraph_OverheadInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PFSD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
