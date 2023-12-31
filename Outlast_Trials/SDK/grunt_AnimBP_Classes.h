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
	 * AnimBlueprintGeneratedClass grunt_AnimBP.grunt_AnimBP_C
	 * Size -> 0x7480 (FullSize[0x9550] - InheritedSize[0x20D0])
	 */
	class Ugrunt_AnimBP_C : public URBAnimInstanceNPC
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x20D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_65;                       // 0x20D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_64;                       // 0x2100(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_18;                        // 0x2128(0x00A8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_22;                          // 0x21D0(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x21F8(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x2300(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x2320(0x0020)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_5;                               // 0x2340(0x01E0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_35;                         // 0x2520(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7;                        // 0x25A0(0x00C0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x2660(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_34;                         // 0x2728(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_21;                          // 0x27A8(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_3;                             // 0x27D0(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_20;                          // 0x2898(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_6;                        // 0x28C0(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_33;                         // 0x2980(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_44;                            // 0x2A00(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0x2A30(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_43;                            // 0x2A58(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_10;                           // 0x2A88(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_17;                        // 0x2B38(0x00A8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x2BE0(0x0028)
		struct FAnimNode_Root                                      AnimGraphNode_Root_3;                                    // 0x2C08(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_7;                                    // 0x2C38(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_63;                       // 0x2C80(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_62;                       // 0x2CA8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_61;                       // 0x2CD0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_60;                       // 0x2CF8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_59;                       // 0x2D20(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_58;                       // 0x2D48(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_57;                       // 0x2D70(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_56;                       // 0x2D98(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_55;                       // 0x2DC0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_54;                       // 0x2DE8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_32;                         // 0x2E10(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_42;                            // 0x2E90(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_31;                         // 0x2EC0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_41;                            // 0x2F40(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_30;                         // 0x2F70(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_40;                            // 0x2FF0(0x0030)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_2;                         // 0x3020(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_53;                       // 0x30D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_52;                       // 0x30F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_51;                       // 0x3120(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_50;                       // 0x3148(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_49;                       // 0x3170(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_48;                       // 0x3198(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_47;                       // 0x31C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_46;                       // 0x31E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_45;                       // 0x3210(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_44;                       // 0x3238(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_43;                       // 0x3260(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_42;                       // 0x3288(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_29;                         // 0x32B0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_28;                         // 0x3330(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_16;                        // 0x33B0(0x00A8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_27;                         // 0x3458(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_26;                         // 0x34D8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_15;                        // 0x3558(0x00A8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_14;                        // 0x3600(0x00A8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_39;                            // 0x36A8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_25;                         // 0x36D8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_24;                         // 0x3758(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_13;                        // 0x37D8(0x00A8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_12;                        // 0x3880(0x00A8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_23;                         // 0x3928(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0x39A8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_11;                        // 0x3A28(0x00A8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_38;                            // 0x3AD0(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_16;                       // 0x3B00(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_10;                        // 0x3BE8(0x00A8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x3C90(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_37;                            // 0x3D10(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_15;                       // 0x3D40(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0x3E28(0x00A8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x3ED0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_36;                            // 0x3F50(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_14;                       // 0x3F80(0x00E8)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_2;                         // 0x4068(0x00B8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_13;                       // 0x4120(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0x4208(0x00A8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x42B0(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_12;                       // 0x4330(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_11;                       // 0x4418(0x00E8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_2;                             // 0x4500(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x45C8(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_35;                            // 0x4690(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x46C0(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_10;                       // 0x4740(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x4828(0x00A8)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x48D0(0x00B8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_9;                        // 0x4988(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_34;                            // 0x4A70(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_9;                            // 0x4AA0(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_33;                            // 0x4B50(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_8;                            // 0x4B80(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_32;                            // 0x4C30(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_41;                       // 0x4C60(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_40;                       // 0x4C88(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x4CB0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_31;                            // 0x4D30(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x4D60(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_30;                            // 0x4DE0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_7;                            // 0x4E10(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_29;                            // 0x4EC0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_6;                            // 0x4EF0(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0x4FA0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x50F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_39;                       // 0x5120(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_38;                       // 0x5148(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_37;                       // 0x5170(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_36;                       // 0x5198(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_35;                       // 0x51C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_34;                       // 0x51E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_33;                       // 0x5210(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_32;                       // 0x5238(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_31;                       // 0x5260(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_30;                       // 0x5288(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_29;                       // 0x52B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_28;                       // 0x52D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_27;                       // 0x5300(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_26;                       // 0x5328(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_25;                       // 0x5350(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_24;                       // 0x5378(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0x53A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x53C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x53F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x5418(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x5440(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x5468(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x5490(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x54B8(0x0028)
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x54E0(0x01D8) ContainsInstancedReference
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_28;                            // 0x56B8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x56E8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_27;                            // 0x5768(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x5798(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_26;                            // 0x5818(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x5848(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_25;                            // 0x58C8(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x58F8(0x00A8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_8;                        // 0x59A0(0x00E8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x5A88(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_24;                            // 0x5B08(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x5B38(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_23;                            // 0x5BB8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x5BE8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_22;                            // 0x5C68(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x5C98(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_21;                            // 0x5D18(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x5D48(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_20;                            // 0x5DC8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x5DF8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x5E20(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x5E48(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x5E70(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_7;                        // 0x5E98(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_19;                            // 0x5F80(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6;                        // 0x5FB0(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_18;                            // 0x6098(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x60C8(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_17;                            // 0x61B0(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x61E0(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x62C8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x62F8(0x00B0)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_2;                // 0x63A8(0x0190)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x6538(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x65B8(0x00A8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x6660(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x6690(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x6778(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x67A8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x6828(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x6858(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x6880(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x68B0(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x6960(0x00A8)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer;                           // 0x6A08(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6;                                    // 0x6AB8(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x6B00(0x0158)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5;                                    // 0x6C58(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x6CA0(0x0048)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x6CE8(0x0190)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x6E78(0x0048)
		struct FAnimNode_Inertialization                           AnimGraphNode_Inertialization;                           // 0x6EC0(0x0070)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x6F30(0x0158)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x7088(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x70D0(0x00A8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x7178(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x71A0(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x71E8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x7340(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x7368(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x7390(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_5;                        // 0x73B8(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x7478(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x74F8(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x75B8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x7710(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x7738(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x7758(0x0020)
		unsigned char                                              UnknownData_QE83[0x8];                                   // 0x7778(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_4;                               // 0x7780(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_3;                               // 0x7960(0x01E0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x7B40(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x7BC0(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x7BF0(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x7C18(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x7C48(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x7CF8(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x7DB8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x7F10(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x7F38(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x7F60(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x7F88(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x7FB0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x7FD8(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x8000(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x8020(0x0020)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x8040(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x8220(0x01E0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x8400(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x8480(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x84B0(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x84D8(0x00A8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x8580(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x8600(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x8630(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x8658(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x8688(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x8738(0x00C0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x87F8(0x00A8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x88A0(0x0028)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0x88C8(0x00A0)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_2;                         // 0x8968(0x0118)
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x8A80(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x8AB0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x8AD8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x8B00(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x8B28(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x8B50(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x8B78(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x8BA0(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x8BC8(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x8CB0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x8CE0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x8D60(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x8D90(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x8DB8(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x8DE8(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x8E10(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x8E40(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x8F28(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x8F58(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x8F80(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x8FB0(0x00B0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x9060(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x9088(0x0158)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x91E0(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x92A0(0x0158)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x93F8(0x0118)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x9510(0x0030)
		float                                                      IsHeavy;                                                 // 0x9540(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bForceHold;                                              // 0x9544(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsPitcher;                                              // 0x9545(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsNightHunter;                                           // 0x9546(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EnterLight;                                              // 0x9547(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BreakFromBlindedPose;                                    // 0x9548(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UYDT[0x3];                                   // 0x9549(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AdditivePoseWeight;                                      // 0x954C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void NightHunter_EnterLight(const struct FPoseLink& Input, struct FPoseLink* NightHunter_EnterLight);
		void NightHunter_InLight(const struct FPoseLink& InPose, struct FPoseLink* NightHunter_InLight);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ShouldReactToLight(bool* ShouldReactToLight);
		void BlueprintBeginPlay();
		void AnimNotify_HoldOn();
		void AnimNotify_LetGo();
		void AnimNotify_InLight();
		void AnimNotify_InDark();
		void ToogleBreakfromBlindedPose();
		void Event_OnInDarknessChanged();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_ResetEnterLight();
		void ExecuteUbergraph_grunt_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
