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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C
	 * Size -> 0x0020 (FullSize[0x0B80] - InheritedSize[0x0B60])
	 */
	class ABaseAmp_SkillItem_BP_C : public ARBThrowableSkillItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B60(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Timeline_0_NewTrack_0_F0B2D7A8458F7672C5EB9CA539B6C3B4;  // 0x0B68(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_F0B2D7A8458F7672C5EB9CA539B6C3B4;  // 0x0B6C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_31F7[0x3];                                   // 0x0B6D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0B70(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   PostProcess;                                             // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RefreshCooldown(class ARBActiveSkill* ActiveSkill);
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Event_OnActivate();
		void Event_OnDeployed();
		void PlayerAssigned(class ARBPawn* Pawn, class ARBPickup* Item);
		void ReceiveBeginPlay();
		void CooldownChanged(class ARBActiveSkill* ActiveSkill, bool bIsInCooldown);
		void ExecuteUbergraph_BaseAmp_SkillItem_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
