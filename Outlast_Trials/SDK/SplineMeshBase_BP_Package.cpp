﻿/**
 * Name: Outlast_Trials
 * Version: 1.3
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineMeshBase_BP.SplineMeshBase_BP_C.FlattenTangent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USplineComponent*                            Spline                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplineMeshBase_BP_C::FlattenTangent(class USplineComponent* Spline)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SplineMeshBase_BP.SplineMeshBase_BP_C.FlattenTangent");
		
		ASplineMeshBase_BP_C_FlattenTangent_Params params {};
		params.Spline = Spline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineMeshBase_BP.SplineMeshBase_BP_C.SetSplinePosition
	 * 		Flags  -> ()
	 */
	void ASplineMeshBase_BP_C::SetSplinePosition()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SplineMeshBase_BP.SplineMeshBase_BP_C.SetSplinePosition");
		
		ASplineMeshBase_BP_C_SetSplinePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineMeshBase_BP.SplineMeshBase_BP_C.ClearGeneratedMeshes
	 * 		Flags  -> ()
	 */
	void ASplineMeshBase_BP_C::ClearGeneratedMeshes()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SplineMeshBase_BP.SplineMeshBase_BP_C.ClearGeneratedMeshes");
		
		ASplineMeshBase_BP_C_ClearGeneratedMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineMeshBase_BP.SplineMeshBase_BP_C.Construct Spline Meshes
	 * 		Flags  -> ()
	 */
	void ASplineMeshBase_BP_C::ConstructSplineMeshes()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SplineMeshBase_BP.SplineMeshBase_BP_C.Construct Spline Meshes");
		
		ASplineMeshBase_BP_C_ConstructSplineMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineMeshBase_BP.SplineMeshBase_BP_C.SnapPointOnGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USplineComponent*                            Spline                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplineMeshBase_BP_C::SnapPointOnGrid(class USplineComponent* Spline)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SplineMeshBase_BP.SplineMeshBase_BP_C.SnapPointOnGrid");
		
		ASplineMeshBase_BP_C_SnapPointOnGrid_Params params {};
		params.Spline = Spline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineMeshBase_BP.SplineMeshBase_BP_C.FindClosetMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USplineComponent*                            Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSplineMeshData>                     Meshes                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplineMeshBase_BP_C::FindClosetMeshes(int32_t A, class USplineComponent* Target, TArray<struct FSplineMeshData>* Meshes, int32_t* Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SplineMeshBase_BP.SplineMeshBase_BP_C.FindClosetMeshes");
		
		ASplineMeshBase_BP_C_FindClosetMeshes_Params params {};
		params.A = A;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Meshes != nullptr)
			*Meshes = params.Meshes;
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineMeshBase_BP.SplineMeshBase_BP_C.AddStaticMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     StartPos                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     StartTangent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EndPos                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EndTangent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMesh*                                 NewMesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASplineMeshBase_BP_C::AddStaticMesh(const struct FVector& StartPos, const struct FVector& StartTangent, const struct FVector& EndPos, const struct FVector& EndTangent, class UStaticMesh* NewMesh, int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SplineMeshBase_BP.SplineMeshBase_BP_C.AddStaticMesh");
		
		ASplineMeshBase_BP_C_AddStaticMesh_Params params {};
		params.StartPos = StartPos;
		params.StartTangent = StartTangent;
		params.EndPos = EndPos;
		params.EndTangent = EndTangent;
		params.NewMesh = NewMesh;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineMeshBase_BP.SplineMeshBase_BP_C.AddDetailsMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    RelativeTransformRotation                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASplineMeshBase_BP_C::AddDetailsMeshes(float Distance, const struct FVector& Location, const struct FRotator& RelativeTransformRotation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SplineMeshBase_BP.SplineMeshBase_BP_C.AddDetailsMeshes");
		
		ASplineMeshBase_BP_C_AddDetailsMeshes_Params params {};
		params.Distance = Distance;
		params.Location = Location;
		params.RelativeTransformRotation = RelativeTransformRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineMeshBase_BP.SplineMeshBase_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASplineMeshBase_BP_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SplineMeshBase_BP.SplineMeshBase_BP_C.UserConstructionScript");
		
		ASplineMeshBase_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASplineMeshBase_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASplineMeshBase_BP_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SplineMeshBase_BP.SplineMeshBase_BP_C");
		return ptr;
	}

}


