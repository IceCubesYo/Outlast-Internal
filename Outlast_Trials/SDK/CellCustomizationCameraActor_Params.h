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
	 * Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.DeactivateCamera
	 */
	struct ACellCustomizationCameraActor_C_DeactivateCamera_Params
	{	};

	/**
	 * Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.Activate Camera
	 */
	struct ACellCustomizationCameraActor_C_ActivateCamera_Params
	{	};

	/**
	 * Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.UpdateCameraRotation
	 */
	struct ACellCustomizationCameraActor_C_UpdateCameraRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HGM7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.FocusCameraTo
	 */
	struct ACellCustomizationCameraActor_C_FocusCameraTo_Params
	{
	public:
		ECustomizationMenuCategory                                 CustomizationCategory;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HH4N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ReceiveTick
	 */
	struct ACellCustomizationCameraActor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ExecuteUbergraph_CellCustomizationCameraActor
	 */
	struct ACellCustomizationCameraActor_C_ExecuteUbergraph_CellCustomizationCameraActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
