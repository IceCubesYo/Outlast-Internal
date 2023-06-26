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
	 * Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.ShouldShow
	 */
	struct UFriendlyDeviceIcon_C_ShouldShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.UpdateDistanceEffects
	 */
	struct UFriendlyDeviceIcon_C_UpdateDistanceEffects_Params
	{	};

	/**
	 * Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.UpdateDisplay
	 */
	struct UFriendlyDeviceIcon_C_UpdateDisplay_Params
	{	};

	/**
	 * Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.Event_Hide
	 */
	struct UFriendlyDeviceIcon_C_Event_Hide_Params
	{	};

	/**
	 * Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.Event_Show
	 */
	struct UFriendlyDeviceIcon_C_Event_Show_Params
	{	};

	/**
	 * Function FriendlyDeviceIcon.FriendlyDeviceIcon_C.ExecuteUbergraph_FriendlyDeviceIcon
	 */
	struct UFriendlyDeviceIcon_C_ExecuteUbergraph_FriendlyDeviceIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
