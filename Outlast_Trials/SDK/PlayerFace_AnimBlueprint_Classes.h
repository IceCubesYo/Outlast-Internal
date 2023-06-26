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
	 * AnimBlueprintGeneratedClass PlayerFace_AnimBlueprint.PlayerFace_AnimBlueprint_C
	 * Size -> 0x139C (FullSize[0x1654] - InheritedSize[0x02B8])
	 */
	class UPlayerFace_AnimBlueprint_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_XNP1[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x02F8(0x01D8) ContainsInstancedReference
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x04D0(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0628(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0650(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0678(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x06A0(0x0028)
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode_4;                           // 0x06C8(0x00A0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0768(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0790(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x07B8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x0838(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x08B8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0938(0x0080)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x09B8(0x00B8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0A70(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0AF0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0B20(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x0BA0(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0C68(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0CE8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0D18(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0DC8(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x0E48(0x0028)
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode_3;                           // 0x0E70(0x00A0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0F10(0x00C8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x0FD8(0x00C0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x1098(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x10E0(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x1110(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x11D0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x11F8(0x0080)
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode_2;                           // 0x1278(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1318(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1348(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x13C8(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1488(0x0028)
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode;                             // 0x14B0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1550(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1580(0x00B0)
		class UPoseAsset*                                          Poses;                                                   // 0x1630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       LipSyncAnim;                                             // 0x1638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasPoses;                                                // 0x1640(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsEmoting;                                               // 0x1641(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7FHT[0x2];                                   // 0x1642(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExpressHowMuch;                                          // 0x1644(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       WhichExpression;                                         // 0x1648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EFace_BaseEmotion_Enum                                     FaceBaseEmotion;                                         // 0x1650(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isDead;                                                  // 0x1651(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSleeping;                                              // 0x1652(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EPlayer_Face_States                                        FaceState;                                               // 0x1653(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_TransitionResult_50F1F86C468D09FE8EA9C184C3541823();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_TransitionResult_DABDC9EF4637AF13A004E48636383B91();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_TransitionResult_97923E4F415468C899C8A59523741E7C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerFace_AnimBlueprint_AnimGraphNode_TransitionResult_37DA42E7450E6B51C2A43EB963CB4A22();
		void BlueprintBeginPlay();
		void UpdateFacePoses(class ARBPlayer* RBPlayer);
		void LipSyncFeed();
		void ExecuteUbergraph_PlayerFace_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
