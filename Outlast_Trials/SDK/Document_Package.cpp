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
	 * 		Name   -> Function Document.Document_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRBCollectibleDocumentDefinitionRow         Document                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UDocument_C::Setup(const struct FRBCollectibleDocumentDefinitionRow& Document)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Document.Document_C.Setup");
		
		UDocument_C_Setup_Params params {};
		params.Document = Document;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Document.Document_C.BndEvt__Document_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URBMenuButton_C*                             Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDocument_C::BndEvt__Document_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Document.Document_C.BndEvt__Document_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UDocument_C_BndEvt__Document_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Document.Document_C.ExecuteUbergraph_Document
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDocument_C::ExecuteUbergraph_Document(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Document.Document_C.ExecuteUbergraph_Document");
		
		UDocument_C_ExecuteUbergraph_Document_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDocument_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDocument_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Document.Document_C");
		return ptr;
	}

}


