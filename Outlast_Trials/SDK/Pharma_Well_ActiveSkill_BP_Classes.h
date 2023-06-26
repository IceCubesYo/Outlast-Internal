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
	 * BlueprintGeneratedClass Pharma_Well_ActiveSkill_BP.Pharma_Well_ActiveSkill_BP_C
	 * Size -> 0x0098 (FullSize[0x04F0] - InheritedSize[0x0458])
	 */
	class APharma_Well_ActiveSkill_BP_C : public ARBPharmaSkill
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0458(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDecalComponent*                                     Decal_Zone;                                              // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Zone;                                                 // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Ptc_GasOnPlayer;                                         // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ESOP;                                                    // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      FadeOut_Opacity_722FC76C45AA70677A0101B58156BEEE;        // 0x0488(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         FadeOut__Direction_722FC76C45AA70677A0101B58156BEEE;     // 0x048C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XL0E[0x3];                                   // 0x048D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FadeOut;                                                 // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MeshFadeIn_Opacity_FadeIn_3B4ED2AC48C3B19266BF08AECD253979; // 0x0498(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         MeshFadeIn__Direction_3B4ED2AC48C3B19266BF08AECD253979;  // 0x049C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M7EW[0x3];                                   // 0x049D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  MeshFadeIn;                                              // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Ptc_Wave;                                                // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UParticleSystemComponent*>                    PtcSpawnedList;                                          // 0x04B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class ARBPawn*>                                     PawnsSpawnedOn;                                          // 0x04C0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class UAkAudioEvent*                                       SoundLoudStart;                                          // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       SoundLoudStop;                                           // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       SoundQuietStart;                                         // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       SoundQuietStop;                                          // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void MeshFadeIn__FinishedFunc();
		void MeshFadeIn__UpdateFunc();
		void FadeOut__FinishedFunc();
		void FadeOut__UpdateFunc();
		void ReceiveTick(float DeltaSeconds);
		void Event_OnIsActiveChanged(bool IsActive);
		void GroundTrace();
		void Event_OnPlayerInitReplicated(class ARBPlayer* Player);
		void Event_OnActiveOnPawn(class ARBPawn* Pawn, bool bActive);
		void AttatchToFoot();
		void Event_OnActiveLoudStart();
		void Event_OnActiveLoudStop();
		void Event_OnActiveQuietStart();
		void Event_OnActiveQuietStop();
		void ExecuteUbergraph_Pharma_Well_ActiveSkill_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
