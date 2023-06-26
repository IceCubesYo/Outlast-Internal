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
	 * Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.UserConstructionScript
	 */
	struct ACameraIntercom01_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.ReceiveTick
	 */
	struct ACameraIntercom01_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.Activate Light
	 */
	struct ACameraIntercom01_BP_C_ActivateLight_Params
	{	};

	/**
	 * Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.Deactivate Light
	 */
	struct ACameraIntercom01_BP_C_DeactivateLight_Params
	{	};

	/**
	 * Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.AssignPlayer
	 */
	struct ACameraIntercom01_BP_C_AssignPlayer_Params
	{
	public:
		class ARBPlayer_BP_C*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.ReactToNightVision
	 */
	struct ACameraIntercom01_BP_C_ReactToNightVision_Params
	{
	public:
		bool                                                       bOn;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.ExecuteUbergraph_CameraIntercom-01_BP
	 */
	struct ACameraIntercom01_BP_C_ExecuteUbergraph_CameraIntercom01_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
