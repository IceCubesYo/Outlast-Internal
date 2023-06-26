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
	 * BlueprintGeneratedClass SplineMeshBase_BP.SplineMeshBase_BP_C
	 * Size -> 0x0120 (FullSize[0x03F0] - InheritedSize[0x02D0])
	 */
	class ASplineMeshBase_BP_C : public ARBSplineMeshActor
	{
	public:
		class UBillboardComponent*                                 Billboard;                                               // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FSplineMeshData>                             Meshes;                                                  // 0x02D8(0x0010) Edit, BlueprintVisible
		TArray<struct FMeshIndex>                                  OverwriteMeshes;                                         // 0x02E8(0x0010) Edit, BlueprintVisible
		bool                                                       UseDetailsMesh;                                          // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K885[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         DetailsStaticMesh;                                       // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseCollision;                                            // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QPGU[0x3];                                   // 0x0309(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DetailsMeshesDistance;                                   // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESplineMeshAxis                                            FowardAxis;                                              // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8RKT[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          MaterialOvewrite;                                        // 0x0318(0x0010) Edit, BlueprintVisible
		bool                                                       CloseLoop;                                               // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B90F[0x3];                                   // 0x0329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MeshesScale;                                             // 0x032C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LastLocation;                                            // 0x0338(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LastTangent;                                             // 0x0344(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EndDistance;                                             // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SkipMesh;                                                // 0x0354(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZP5N[0x3];                                   // 0x0355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         CurrentStaticMesh;                                       // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FloorTangent;                                            // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       SnapOnGrid;                                              // 0x0361(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XRPS[0x2];                                   // 0x0362(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GridSize;                                                // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESplineCoordinateSpace                                     GridSizeSpace;                                           // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_43PW[0x3];                                   // 0x0369(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DetailsMeshOffset;                                       // 0x036C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            SkipMeshAtPoint;                                         // 0x0370(0x0010) Edit, BlueprintVisible
		bool                                                       SkipLastMesh;                                            // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_618X[0x3];                                   // 0x0381(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LastFirstPointPosition;                                  // 0x0384(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FVector>                                     CurrentPointsPositions;                                  // 0x0390(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             NewWorldPosition;                                        // 0x03A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Zero;                                                    // 0x03AC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FVector2D>                                   DetailsVoid;                                             // 0x03B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       SkipDetailMesh;                                          // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QLDI[0x3];                                   // 0x03C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDrawDistance;                                         // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CastStaticShadow;                                        // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLightingChannels                                   LightingChannels;                                        // 0x03D1(0x0001) Edit, BlueprintVisible, NoDestructor
		ELightmapType                                              LightmapType;                                            // 0x03D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseMaterialDynamicDataForUV;                             // 0x03D3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VT1F[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASplineMeshBase_BP_C*                                Target;                                                  // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USplineMeshComponent*>                        SpawnedSplineMeshes;                                     // 0x03E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void FlattenTangent(class USplineComponent* Spline);
		void SetSplinePosition();
		void ClearGeneratedMeshes();
		void ConstructSplineMeshes();
		void SnapPointOnGrid(class USplineComponent* Spline);
		void FindClosetMeshes(int32_t A, class USplineComponent* Target, TArray<struct FSplineMeshData>* Meshes, int32_t* Index);
		void AddStaticMesh(const struct FVector& StartPos, const struct FVector& StartTangent, const struct FVector& EndPos, const struct FVector& EndTangent, class UStaticMesh* NewMesh, int32_t Index);
		void AddDetailsMeshes(float Distance, const struct FVector& Location, const struct FRotator& RelativeTransformRotation);
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
