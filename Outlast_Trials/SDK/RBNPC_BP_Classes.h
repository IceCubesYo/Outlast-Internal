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
	 * BlueprintGeneratedClass RBNPC_BP.RBNPC_BP_C
	 * Size -> 0x0060 (FullSize[0x5608] - InheritedSize[0x55A8])
	 */
	class ARBNPC_BP_C : public ARBNPC
	{
	public:
		unsigned char                                              UnknownData_LJ50[0x8];                                   // 0x55A8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x55B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Ngr_RageHallu_EyeL;                                      // 0x55B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Ngr_RageHallu_EyeR;                                      // 0x55C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBActiveSkillVisionComponent*                       RBActiveSkillVision;                                     // 0x55C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AS_WaveSphere;                                           // 0x55D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBAimAssistComponent*                               HeadAimAssist;                                           // 0x55D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             BroadcastWeaponAnimation;                                // 0x55E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UNiagaraComponent*                                   RageEyeFX_R;                                             // 0x55F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   RageEyeFX_L;                                             // 0x55F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   BloodDripsParticles;                                     // 0x5600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnVariatorEffects();
		void SetNormalMeshVisibility(bool bVisible);
		void UserConstructionScript();
		void Event_PlayHitReactionEffects(const struct FVector& attackLoc, const struct FRotator& effectRotation);
		void Event_OnStartRagePaintState();
		void Event_OnEndRagePaintState();
		void Event_OnFootstep(const struct FFootstepData& FootstepData);
		void Event_OnDealtWeaponDamage(class ARBPawn* otherPawn, const struct FVector& DamageLocation);
		void Event_OnDealtUnarmedDamage(class ARBPawn* otherPawn, const class FName& damageSourceBone);
		void ReceiveBeginPlay();
		void TestFakeBlurHead();
		void TestFakeBlurComplete();
		void ExecuteUbergraph_RBNPC_BP(int32_t EntryPoint);
		void BroadcastWeaponAnimation__DelegateSignature(class UAnimSequence* Sequence);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
