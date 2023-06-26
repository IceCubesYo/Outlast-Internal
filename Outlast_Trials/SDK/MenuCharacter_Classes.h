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
	 * BlueprintGeneratedClass MenuCharacter.MenuCharacter_C
	 * Size -> 0x01C4 (FullSize[0x040C] - InheritedSize[0x0248])
	 */
	class AMenuCharacter_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBSpotLightComponent*                               RBSpotLight11;                                           // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSpotLightComponent*                               RBSpotLight10;                                           // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSpotLightComponent*                               RBSpotLight9;                                            // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSpotLightComponent*                               RBSpotLight8;                                            // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSpotLightComponent*                               RBSpotLight7;                                            // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSpotLightComponent*                               RBSpotLight6;                                            // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSpotLightComponent*                               RBSpotLight5;                                            // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Watch;                                                   // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSpotLightComponent*                               RBSpotLight4;                                            // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       CameraBoxDetection;                                      // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Character_Mesh;                                          // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              HairMesh;                                                // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              NightVision;                                             // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Glove_Mesh;                                              // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              ESOP;                                                    // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ESOP_Battery;                                            // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ESOP_Apparatus;                                          // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ESOP_Lever;                                              // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Straps;                                                  // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              UpperBody_Mesh;                                          // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              LowerBody_Mesh;                                          // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Head_Mesh;                                               // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       Initialized;                                             // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D31P[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class URBPlayerCustomizationOption*>                CustomizationOptions;                                    // 0x0310(0x0010) Edit, BlueprintVisible
		bool                                                       bIsFemale;                                               // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3NCV[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              RigChest;                                                // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              RigComponent;                                            // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECustomizationMenuCategory                                 CurrentMenuCategory;                                     // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SAIF[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ECustomizationMenuCategory, class UAnimSequence*>     EquipAnimations;                                         // 0x0340(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class URBCustomizationOutfit*                              LegendaryOutfit;                                         // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USkeletalMeshComponent*>                      ExtraCustomizationMeshes;                                // 0x0398(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OncategoryClickedEvent;                                  // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       debug;                                                   // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bActive;                                                 // 0x03B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B7AZ[0x6];                                   // 0x03BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACameraActor*                                        WholeBodyCamera;                                         // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACameraActor*                                        HeadCamea;                                               // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACameraActor*                                        LowerBodyCamera;                                         // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACameraActor*                                        UpperBodyCamera;                                         // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DebugPoseIndex;                                          // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EActiveSkillType                                           SelectedActiveSkill;                                     // 0x03E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowRotation;                                          // 0x03E5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1GPW[0x2];                                   // 0x03E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACameraActor*                                        CurrentCamera;                                           // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCustomizationLoadedEvent;                              // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsReadyForCusto;                                        // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5WQ2[0x3];                                   // 0x0401(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                HairColorId;                                             // 0x0404(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class USkeletalMeshComponent* GetMainParentSkeletalMesh();
		class UStaticMeshComponent* GetWatchComponent();
		struct FRBPlayerCustomizationInfo GetPlayerCustomizationInfo();
		class USkeletalMeshComponent* GetSkeletalMeshComponentForSlot(EPlayerCustomizationSlot Slot);
		void ResetPlacementAndAnim();
		void HasCustomizationChanged(const struct FRBPlayerCustomizationInfo& RBPlayerCustomizationInfo, bool* bHasChanged);
		void SetHairColor(const class FName& newHairColor);
		void CycleDebugPose();
		void SetCharacterHidden(bool Hidden);
		void SetDebugMode(bool debug);
		void SetLightsActivation(bool bAffectWorld);
		void GetCameras();
		void DeactivateViewer();
		void ActivateViewer(class AActor* CustomReturnViewTarget);
		void SetLightingChannels();
		void SetCustomization(const struct FRBPlayerCustomizationInfo& customizationInfo);
		void OnCategoryClicked(ECustomizationMenuCategory CustomizationCategory);
		void OnItemBought();
		void OnItemEquipped();
		void ChangeBodyType(bool IsFemale, TArray<class URBPlayerCustomizationOption*>* Options);
		void UpdateCustomization(class URBPlayerCustomizationOption* Option);
		void CleanSpawnedRigs();
		void GetSelectedCustomizationOption(EPlayerCustomizationSlot Slot, class URBPlayerCustomizationOption** SelectedOption);
		void UpdateSlotSelection(class URBPlayerCustomizationOption* NewCustomizationOption);
		void LoadCustomization();
		void Show();
		void DressCharacter();
		void UserConstructionScript();
		void AddCharacterRotation(float Factor);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void CustomEvent_1(ECustomizationMenuCategory CustomizationMenuCategory);
		void BindOnCategoryChanged();
		void GoingToMainPosition();
		void StartInteracting();
		void RequestDressCharacter();
		void OnExtraCustomizationMeshesAddedForSlot(TArray<class USkeletalMeshComponent*> addedExtraMeshes, EPlayerCustomizationSlot Slot);
		void RequestSpawnRig(EActiveSkillType skillType);
		void OnActiveSkillLoaded();
		void OnPlayerCustoLoaded();
		void OnCustomizationLoaded(class AActor* customizationOwner, int32_t requestID, EPawnCustomizationRequestType requestType);
		void ReachedMainPosition();
		void OnCurrentLoadoutChanged();
		void ExecuteUbergraph_MenuCharacter(int32_t EntryPoint);
		void OnCustomizationLoadedEvent__DelegateSignature();
		void OncategoryClickedEvent__DelegateSignature(ECustomizationMenuCategory CustomizationMenuCategory);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
