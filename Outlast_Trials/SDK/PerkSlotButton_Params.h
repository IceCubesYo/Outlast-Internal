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
	 * Function PerkSlotButton.PerkSlotButton_C.SetHovered
	 */
	struct UPerkSlotButton_C_SetHovered_Params
	{
	public:
		bool                                                       bHovered;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PerkSlotButton.PerkSlotButton_C.Refresh
	 */
	struct UPerkSlotButton_C_Refresh_Params
	{	};

	/**
	 * Function PerkSlotButton.PerkSlotButton_C.Init
	 */
	struct UPerkSlotButton_C_Init_Params
	{
	public:
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PerkSlotButton.PerkSlotButton_C.Setup
	 */
	struct UPerkSlotButton_C_Setup_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
