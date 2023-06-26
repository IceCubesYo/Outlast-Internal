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
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.RefreshLayers
	 */
	struct UControllerMappingMenu_C_RefreshLayers_Params
	{	};

	/**
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.PreConstruct
	 */
	struct UControllerMappingMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.Construct
	 */
	struct UControllerMappingMenu_C_Construct_Params
	{	};

	/**
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.BndEvt__BrightnessCalibrationMenu_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UControllerMappingMenu_C_BndEvt__BrightnessCalibrationMenu_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControllerMappingMenu.ControllerMappingMenu_C.ExecuteUbergraph_ControllerMappingMenu
	 */
	struct UControllerMappingMenu_C_ExecuteUbergraph_ControllerMappingMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
