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
	 * Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.OnGamePhaseUpdated
	 */
	struct UWaitingForPlayersCountdownWidget_C_OnGamePhaseUpdated_Params
	{
	public:
		EGamePhase                                                 gamePhase;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDrugSequenceCompleted;                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.ShouldShow
	 */
	struct UWaitingForPlayersCountdownWidget_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.HideCountdown
	 */
	struct UWaitingForPlayersCountdownWidget_C_HideCountdown_Params
	{	};

	/**
	 * Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.StartCountdown
	 */
	struct UWaitingForPlayersCountdownWidget_C_StartCountdown_Params
	{	};

	/**
	 * Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.OnGamePhaseUpdatedEvent
	 */
	struct UWaitingForPlayersCountdownWidget_C_OnGamePhaseUpdatedEvent_Params
	{
	public:
		EGamePhase                                                 gamePhase;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.Destruct
	 */
	struct UWaitingForPlayersCountdownWidget_C_Destruct_Params
	{	};

	/**
	 * Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.PreConstruct
	 */
	struct UWaitingForPlayersCountdownWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.Tick
	 */
	struct UWaitingForPlayersCountdownWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.Construct
	 */
	struct UWaitingForPlayersCountdownWidget_C_Construct_Params
	{	};

	/**
	 * Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.OnDrugSequenceCompleted
	 */
	struct UWaitingForPlayersCountdownWidget_C_OnDrugSequenceCompleted_Params
	{	};

	/**
	 * Function WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C.ExecuteUbergraph_WaitingForPlayersCountdownWidget
	 */
	struct UWaitingForPlayersCountdownWidget_C_ExecuteUbergraph_WaitingForPlayersCountdownWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5AU4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
