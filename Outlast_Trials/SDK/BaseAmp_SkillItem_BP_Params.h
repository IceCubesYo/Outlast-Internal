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
	 * Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.RefreshCooldown
	 */
	struct ABaseAmp_SkillItem_BP_C_RefreshCooldown_Params
	{
	public:
		class ARBActiveSkill*                                      ActiveSkill;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.Timeline_0__FinishedFunc
	 */
	struct ABaseAmp_SkillItem_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.Timeline_0__UpdateFunc
	 */
	struct ABaseAmp_SkillItem_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.Event_OnActivate
	 */
	struct ABaseAmp_SkillItem_BP_C_Event_OnActivate_Params
	{	};

	/**
	 * Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.Event_OnDeployed
	 */
	struct ABaseAmp_SkillItem_BP_C_Event_OnDeployed_Params
	{	};

	/**
	 * Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.PlayerAssigned
	 */
	struct ABaseAmp_SkillItem_BP_C_PlayerAssigned_Params
	{
	public:
		class ARBPawn*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARBPickup*                                           Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.ReceiveBeginPlay
	 */
	struct ABaseAmp_SkillItem_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.CooldownChanged
	 */
	struct ABaseAmp_SkillItem_BP_C_CooldownChanged_Params
	{
	public:
		class ARBActiveSkill*                                      ActiveSkill;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsInCooldown;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C.ExecuteUbergraph_BaseAmp_SkillItem_BP
	 */
	struct ABaseAmp_SkillItem_BP_C_ExecuteUbergraph_BaseAmp_SkillItem_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
