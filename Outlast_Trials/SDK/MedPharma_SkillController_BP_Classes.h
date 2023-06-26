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
	 * BlueprintGeneratedClass MedPharma_SkillController_BP.MedPharma_SkillController_BP_C
	 * Size -> 0x0010 (FullSize[0x09F0] - InheritedSize[0x09E0])
	 */
	class AMedPharma_SkillController_BP_C : public ARBActiveSkillController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            ptc_Thrust;                                              // 0x09E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateParticleEmitter(bool IsActive);
		void Event_OnItemHeldInHandChanged(bool bHeldInHand);
		void ExecuteUbergraph_MedPharma_SkillController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
