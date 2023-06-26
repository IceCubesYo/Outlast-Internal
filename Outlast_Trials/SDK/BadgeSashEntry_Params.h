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
	 * Function BadgeSashEntry.BadgeSashEntry_C.PlayAcquiredAnimation
	 */
	struct UBadgeSashEntry_C_PlayAcquiredAnimation_Params
	{	};

	/**
	 * Function BadgeSashEntry.BadgeSashEntry_C.IsConsideredHovered
	 */
	struct UBadgeSashEntry_C_IsConsideredHovered_Params
	{
	public:
		bool                                                       bConsideredHovered;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BadgeSashEntry.BadgeSashEntry_C.SetFocused
	 */
	struct UBadgeSashEntry_C_SetFocused_Params
	{
	public:
		bool                                                       bInFocused;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BadgeSashEntry.BadgeSashEntry_C.SetHovered
	 */
	struct UBadgeSashEntry_C_SetHovered_Params
	{
	public:
		bool                                                       bInHovered;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BadgeSashEntry.BadgeSashEntry_C.SetupEmpty
	 */
	struct UBadgeSashEntry_C_SetupEmpty_Params
	{	};

	/**
	 * Function BadgeSashEntry.BadgeSashEntry_C.Refresh
	 */
	struct UBadgeSashEntry_C_Refresh_Params
	{	};

	/**
	 * Function BadgeSashEntry.BadgeSashEntry_C.OnLoaded_E635967C4C8D98AF198D06928C9FF87D
	 */
	struct UBadgeSashEntry_C_OnLoaded_E635967C4C8D98AF198D06928C9FF87D_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BadgeSashEntry.BadgeSashEntry_C.PreConstruct
	 */
	struct UBadgeSashEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BadgeSashEntry.BadgeSashEntry_C.Setup
	 */
	struct UBadgeSashEntry_C_Setup_Params
	{
	public:
		int32_t                                                    UnlockedCount;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T72G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRBPlayerBadgeRow                                   badgeSettings;                                           // 0x0008(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BadgeSashEntry.BadgeSashEntry_C.BndEvt__BadgeSashEntry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBadgeSashEntry_C_BndEvt__BadgeSashEntry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BadgeSashEntry.BadgeSashEntry_C.BndEvt__BadgeSashEntry_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBadgeSashEntry_C_BndEvt__BadgeSashEntry_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BadgeSashEntry.BadgeSashEntry_C.Construct
	 */
	struct UBadgeSashEntry_C_Construct_Params
	{	};

	/**
	 * Function BadgeSashEntry.BadgeSashEntry_C.Destruct
	 */
	struct UBadgeSashEntry_C_Destruct_Params
	{	};

	/**
	 * Function BadgeSashEntry.BadgeSashEntry_C.OnMenuInputSourceChanged
	 */
	struct UBadgeSashEntry_C_OnMenuInputSourceChanged_Params
	{	};

	/**
	 * Function BadgeSashEntry.BadgeSashEntry_C.OnAddedToFocusPath
	 */
	struct UBadgeSashEntry_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BadgeSashEntry.BadgeSashEntry_C.OnRemovedFromFocusPath
	 */
	struct UBadgeSashEntry_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BadgeSashEntry.BadgeSashEntry_C.ExecuteUbergraph_BadgeSashEntry
	 */
	struct UBadgeSashEntry_C_ExecuteUbergraph_BadgeSashEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FI7Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BadgeSashEntry.BadgeSashEntry_C.OnUnhovered__DelegateSignature
	 */
	struct UBadgeSashEntry_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		struct FRBPlayerBadgeRow                                   badgeSettings;                                           // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BadgeSashEntry.BadgeSashEntry_C.OnHovered__DelegateSignature
	 */
	struct UBadgeSashEntry_C_OnHovered__DelegateSignature_Params
	{
	public:
		struct FRBPlayerBadgeRow                                   badgeSettings;                                           // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
