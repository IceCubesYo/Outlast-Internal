/**
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
	 * 		Name   -> Function CustomizationLibrary.CustomizationLibrary_C.HandleGamepadCharacterRotationInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnalogInputEvent                           AnalogInput                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FEventReply UCustomizationLibrary_C::HandleGamepadCharacterRotationInput(const struct FAnalogInputEvent& AnalogInput, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CustomizationLibrary.CustomizationLibrary_C.HandleGamepadCharacterRotationInput");
		
		UCustomizationLibrary_C_HandleGamepadCharacterRotationInput_Params params {};
		params.AnalogInput = AnalogInput;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationLibrary.CustomizationLibrary_C.AssignCustomAnimBPOrSetMasterPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMesh*                               Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               MasterPoseFallback                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationLibrary_C::AssignCustomAnimBPOrSetMasterPose(class USkeletalMeshComponent** Component, class USkeletalMesh* Mesh, bool MasterPoseFallback, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CustomizationLibrary.CustomizationLibrary_C.AssignCustomAnimBPOrSetMasterPose");
		
		UCustomizationLibrary_C_AssignCustomAnimBPOrSetMasterPose_Params params {};
		params.Mesh = Mesh;
		params.MasterPoseFallback = MasterPoseFallback;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Component != nullptr)
			*Component = params.Component;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationLibrary.CustomizationLibrary_C.GetClosestMenuCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     actorLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AMenuCharacter_C*                            MenuCharacter                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationLibrary_C::GetClosestMenuCharacter(const struct FVector& actorLocation, class UObject* __WorldContext, class AMenuCharacter_C** MenuCharacter)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CustomizationLibrary.CustomizationLibrary_C.GetClosestMenuCharacter");
		
		UCustomizationLibrary_C_GetClosestMenuCharacter_Params params {};
		params.actorLocation = actorLocation;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuCharacter != nullptr)
			*MenuCharacter = params.MenuCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomizationLibrary.CustomizationLibrary_C.UpdateSkinAlbedo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Head                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class USkeletalMeshComponent*>              OtherBodyParts                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationLibrary_C::UpdateSkinAlbedo(class USkeletalMeshComponent* Head, TArray<class USkeletalMeshComponent*>* OtherBodyParts, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CustomizationLibrary.CustomizationLibrary_C.UpdateSkinAlbedo");
		
		UCustomizationLibrary_C_UpdateSkinAlbedo_Params params {};
		params.Head = Head;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OtherBodyParts != nullptr)
			*OtherBodyParts = params.OtherBodyParts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomizationLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomizationLibrary_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CustomizationLibrary.CustomizationLibrary_C");
		return ptr;
	}

}


