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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass SASWagon_NarrativeScreen_BP.SASWagon_NarrativeScreen_BP_C
	 * Size -> 0x007C (FullSize[0x040C] - InheritedSize[0x0390])
	 */
	class ASASWagon_NarrativeScreen_BP_C : public ANarrativeScreenBase_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0390(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Support01;                                               // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Screen01;                                                // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SupportPole01;                                           // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_2_NewTrack_0_D59475BD491BEE89C2937EA223B7F6C9;  // 0x03B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_2__Direction_D59475BD491BEE89C2937EA223B7F6C9;  // 0x03B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZH7W[0x3];                                   // 0x03B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_3;                                              // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotateArmTimeline_NewTrack_0_8853498042BADDE8C69CA2BE2747C7CA; // 0x03C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         RotateArmTimeline__Direction_8853498042BADDE8C69CA2BE2747C7CA; // 0x03C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z48W[0x3];                                   // 0x03C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  RotateArmTimeline;                                       // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebugScreenDown;                                        // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_THZ7[0x7];                                   // 0x03D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TVDownPosition;                                          // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             TVUpPosition;                                            // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bTelevisionDown;                                         // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShouldBeDown;                                           // 0x03F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsPlayingAnim;                                          // 0x03FA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MYVR[0x5];                                   // 0x03FB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARecessedLight01_BP_C*                               LinkedLight;                                             // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartingIntensity;                                       // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetTVDown(bool IsDown);
		void DebugScreenDown();
		void UserConstructionScript();
		void RotateArmTimeline__FinishedFunc();
		void RotateArmTimeline__UpdateFunc();
		void RotateArmTimeline__OpenTV__EventFunc();
		void Timeline_2__FinishedFunc();
		void Timeline_2__UpdateFunc();
		void UpdateTVRotation_Internal();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_SASWagon_NarrativeScreen_BP(int32_t EntryPoint);
		void TVUpPosition__DelegateSignature();
		void TVDownPosition__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
