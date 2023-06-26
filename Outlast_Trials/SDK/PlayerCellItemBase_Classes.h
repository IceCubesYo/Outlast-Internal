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
	 * BlueprintGeneratedClass PlayerCellItemBase.PlayerCellItemBase_C
	 * Size -> 0x00B2 (FullSize[0x0302] - InheritedSize[0x0250])
	 */
	class APlayerCellItemBase_C : public ARBPlayerCellItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0250(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                DisplayStaticMeshComponent;                              // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 Billboard;                                               // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         DefaultStaticMesh;                                       // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaterialIDs;                                             // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QSRU[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceConstant*                           DefaultMaterial;                                         // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LROM[0x8];                                   // 0x0288(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DebugTransform;                                          // 0x0290(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		class URBPlayerCellItemDefinition*                         PreviewDefinition;                                       // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebugTransform;                                         // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7GBJ[0x3];                                   // 0x02C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                StaticmeshTag;                                           // 0x02CC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TG4Y[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      AttachedStaticmeshes;                                    // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      FOV;                                                     // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZX6F[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              refActor;                                                // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class URBPlayerCellItemDefinition*                         PendingTarget;                                           // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPendingAsyncPreview;                                    // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasPendingTarget;                                       // 0x0301(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnPreviewDone();
		void ApplyTransformToConfig();
		void TryDestroyPreviousProp();
		void ChangeMaterialOnStaticmesh(class UPrimitiveComponent* Comp, class UObject* Material);
		void GetDebugTransform();
		void Refresh();
		void PreviewCellItemDefinition(class URBPlayerCellItemDefinition* CellItemDefinition);
		void UserConstructionScript();
		void OnLoaded_979288504F90989FEEAAD0BBDC449001(class UObject* Loaded);
		void OnLoaded_4E18DE394F253951F2F6CCB149B0597D(class UObject* Loaded);
		void OnLoaded_2A9FE965428939AA3930E497B1EEF09B(class UObject* Loaded);
		void OnLoaded_7C1E3CB34C287AB4FE7F69A712E41A69(class UClass* Loaded);
		void OnLoaded_5B91E09E4750328E9B0B8B975CA0679F(class UClass* Loaded);
		void Event_AssignItem(class URBPlayerCellItemDefinition* ItemDefinition);
		void PreviewItem(class URBPlayerCellItemDefinition* Target);
		void ApplyNewMaterial(class URBPlayerCellItemDefinition* ItemDefinition);
		void ApplyNewStaticmesh(class URBPlayerCellItemDefinition* ItemDefinition);
		void ApplyBlueprintClass(class URBPlayerCellItemDefinition* ItemDefinition);
		void ExecuteUbergraph_PlayerCellItemBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
