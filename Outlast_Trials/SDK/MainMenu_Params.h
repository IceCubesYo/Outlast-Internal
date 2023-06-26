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
	 * Function MainMenu.MainMenu_C.ToggleXPCheck
	 */
	struct AMainMenu_C_ToggleXPCheck_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.ReceiveBeginPlay
	 */
	struct AMainMenu_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.ReceiveEndPlay
	 */
	struct AMainMenu_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.MM_PlayCamera01
	 */
	struct AMainMenu_C_MM_PlayCamera01_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.MM_PlayCamera-02
	 */
	struct AMainMenu_C_MM_PlayCamera02_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.MM_StopCamera01
	 */
	struct AMainMenu_C_MM_StopCamera01_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.MM_StopCamera-02
	 */
	struct AMainMenu_C_MM_StopCamera02_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.OnMainMenuStageChanged
	 */
	struct AMainMenu_C_OnMainMenuStageChanged_Params
	{
	public:
		EMainMenuState                                             mainMenuState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.MM_Scratch
	 */
	struct AMainMenu_C_MM_Scratch_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.MM_ScratchClose
	 */
	struct AMainMenu_C_MM_ScratchClose_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
	 */
	struct AMainMenu_C_ExecuteUbergraph_MainMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
