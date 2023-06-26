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
	 * Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.Show
	 */
	struct UScoreDetailLineEntry_C_Show_Params
	{	};

	/**
	 * Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.Setup
	 */
	struct UScoreDetailLineEntry_C_Setup_Params
	{	};

	/**
	 * Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.Init
	 */
	struct UScoreDetailLineEntry_C_Init_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Value;                                                   // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bPositive;                                               // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.PreConstruct
	 */
	struct UScoreDetailLineEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScoreDetailLineEntry.ScoreDetailLineEntry_C.ExecuteUbergraph_ScoreDetailLineEntry
	 */
	struct UScoreDetailLineEntry_C_ExecuteUbergraph_ScoreDetailLineEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
