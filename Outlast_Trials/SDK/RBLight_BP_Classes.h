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
	 * BlueprintGeneratedClass RBLight_BP.RBLight_BP_C
	 * Size -> 0x01AE (FullSize[0x072E] - InheritedSize[0x0580])
	 */
	class ARBLight_BP_C : public ARBLight
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0580(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                LightBulb;                                               // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                LightMesh;                                               // 0x0590(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DebugArrow;                                              // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   AmbDustCone;                                             // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   AmbDustSphere;                                           // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBSoundComponent*                                   RBSound;                                                 // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URBRandomizableHelperComponent*                      RBRandomizableHelper;                                    // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                CableSMeshComp;                                          // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AnchorSMeshComp;                                         // 0x05C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x05D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       bVisible_OLD;                                            // 0x05D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KWD9[0x7];                                   // 0x05D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             LightVisibilityChanged;                                  // 0x05E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bUseDynamicLighting_OLD;                                 // 0x05F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bBakeIndirectOnMovables_OLD;                             // 0x05F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsFlickering_OLD;                                       // 0x05F2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bNoStaticLightingWhenFlickering_OLD;                     // 0x05F3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseVolumetricFogLights_OLD;                              // 0x05F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseVolumetricFog_OLD;                                    // 0x05F5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DONTBakeFog_OLD;                                         // 0x05F6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseAnchorAndCables;                                      // 0x05F7(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             AnchorPosition;                                          // 0x05F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightIntensity_OLD;                                      // 0x0604(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightIntensityScale_OLD;                                 // 0x0608(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Color_OLD;                                               // 0x060C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IR4Q[0x4];                                   // 0x061C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ULightComponent*>                             AllLights_1;                                             // 0x0620(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class ULightComponent*>                             DynamicLights_OLD;                                       // 0x0630(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class ULightComponent*>                             StaticLights_OLD;                                        // 0x0640(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class ULightComponent*>                             DualLights_OLD;                                          // 0x0650(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class URBVolumetricFogLightComponent*>              FogLights_OLD;                                           // 0x0660(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		float                                                      RadiusScaleMultiplier_OLD;                               // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FlickeringIntensity_OLD;                                 // 0x0674(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FlickeringSpeed_OLD;                                     // 0x0678(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VolumetricFogIntensity_OLD;                              // 0x067C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ConeAngle_OLD;                                           // 0x0680(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShadowResolutionScale_OLD;                               // 0x0684(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShadowBias_OLD;                                          // 0x0688(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IndirectLightingIntensity_OLD;                           // 0x068C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         FlickeringCurve_OLD;                                     // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         AnchorStaticMesh;                                        // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         CableStaticMesh;                                         // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDrawDistanceFadeStart_OLD;                            // 0x06A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDrawDistanceFadeEnd_OLD;                              // 0x06AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLightingChannels                                   LightingChannels_OLD;                                    // 0x06B0(0x0001) Edit, BlueprintVisible, NoDestructor
		bool                                                       ForceSound;                                              // 0x06B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       VolumetricFogCastShadows_OLD;                            // 0x06B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Use_ConeShape;                                           // 0x06B3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      EmitterConeFar;                                          // 0x06B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EmitterConeAngle;                                        // 0x06B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ConeShapeOffset;                                         // 0x06BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpawnRateCone;                                           // 0x06C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ConeShapeBiasRadius;                                     // 0x06CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Use_SphereShape;                                         // 0x06D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8P29[0x3];                                   // 0x06D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnRateSphere;                                         // 0x06D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SphereEmitterRadius;                                     // 0x06D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DustSize;                                                // 0x06DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        DustColor;                                               // 0x06E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ELightClipPlaneMode                                        ClipPlane_OLD;                                           // 0x06F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A2NC[0x3];                                   // 0x06F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClipPlaneDistance_OLD;                                   // 0x06F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseBulb;                                                 // 0x06F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AnimationSetMaterialDynamicDataA_OLD;                    // 0x06F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AnimationSetMaterialDynamicDataB_OLD;                    // 0x06FA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AnimationSetMaterialDynamicDataG_OLD;                    // 0x06FB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AnimationSetMaterialDynamicDataR_OLD;                    // 0x06FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JE16[0x3];                                   // 0x06FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimatedMaterialDynamicDataIntensity_OLD;                // 0x0700(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bLinkFogLightColor_OLD;                                  // 0x0704(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TVA5[0x3];                                   // 0x0705(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDrawDistanceMultiplier_OLD;                           // 0x0708(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bOverrideAll_OLD;                                        // 0x070C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverrideIntensities_OLD;                                // 0x070D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverrideColor_OLD;                                      // 0x070E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverrideFog_OLD;                                        // 0x070F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverrideConeOpening_OLD;                                // 0x0710(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bOverrideRadius_OLD;                                     // 0x0711(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5V4P[0x6];                                   // 0x0712(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         AnimationCurve_OLD;                                      // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsPlayingAnimationCurve_OLD;                            // 0x0720(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6UQJ[0x3];                                   // 0x0721(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimationCurveStartTime_OLD;                             // 0x0724(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReflectionDiffuseBrightness_OLD;                         // 0x0728(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShouldResetWithStageOverride_OLD;                       // 0x072C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ValuesMigratedV1;                                        // 0x072D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool BP_MapCheck(EMapCheckType checkType, class FString* outErrorMsg);
		bool FixUp();
		bool ShouldBeIgnoredForLots();
		bool GetStateName(class FString* stateA, class FString* stateB);
		bool IsStateA();
		void MigrateOldValues();
		void SetUseBulb();
		void GetClipPlaneDistance();
		void SetDustParticle(bool IsRuntime);
		void ConstructAudio();
		void SetVisible(bool visible);
		void Initialize(bool IsRuntime);
		void SetAnchorAndCablePosition(bool bIsRuntime);
		void UserConstructionScript();
		void BP_PrepareMapCheck();
		void OnPostActorsPasted(TArray<class AActor*> pastedActors);
		void PostAddedToLevel();
		void PostDuplicated(class AActor* duplicationParent);
		void PostEditChange(const class FName& PropertyName);
		void PostEditMove(bool bFinished);
		void TickSelected();
		void PrepareState(bool bStateA, class AActor* randomOwner);
		void SetShouldBeIgnoredForLots(bool bValue);
		void SetState(bool bStateA);
		void ReceiveBeginPlay();
		void OnRandomStateChanged();
		void LightingScenarioChanged();
		void OnEditorPostLoad();
		void OnBPConstruction();
		void ExecuteUbergraph_RBLight_BP(int32_t EntryPoint);
		void LightVisibilityChanged__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
