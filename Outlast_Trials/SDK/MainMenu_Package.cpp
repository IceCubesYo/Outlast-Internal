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
	 * 		Name   -> Function MainMenu.MainMenu_C.ToggleXPCheck
	 * 		Flags  -> ()
	 */
	void AMainMenu_C::ToggleXPCheck()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ToggleXPCheck");
		
		AMainMenu_C_ToggleXPCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMainMenu_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ReceiveBeginPlay");
		
		AMainMenu_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenu_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ReceiveEndPlay");
		
		AMainMenu_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.MM_PlayCamera01
	 * 		Flags  -> ()
	 */
	void AMainMenu_C::MM_PlayCamera01()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.MM_PlayCamera01");
		
		AMainMenu_C_MM_PlayCamera01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.MM_PlayCamera-02
	 * 		Flags  -> ()
	 */
	void AMainMenu_C::MM_PlayCamera02()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.MM_PlayCamera-02");
		
		AMainMenu_C_MM_PlayCamera02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.MM_StopCamera01
	 * 		Flags  -> ()
	 */
	void AMainMenu_C::MM_StopCamera01()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.MM_StopCamera01");
		
		AMainMenu_C_MM_StopCamera01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.MM_StopCamera-02
	 * 		Flags  -> ()
	 */
	void AMainMenu_C::MM_StopCamera02()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.MM_StopCamera-02");
		
		AMainMenu_C_MM_StopCamera02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.OnMainMenuStageChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMainMenuState                                     mainMenuState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenu_C::OnMainMenuStageChanged(EMainMenuState mainMenuState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnMainMenuStageChanged");
		
		AMainMenu_C_OnMainMenuStageChanged_Params params {};
		params.mainMenuState = mainMenuState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.MM_Scratch
	 * 		Flags  -> ()
	 */
	void AMainMenu_C::MM_Scratch()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.MM_Scratch");
		
		AMainMenu_C_MM_Scratch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.MM_ScratchClose
	 * 		Flags  -> ()
	 */
	void AMainMenu_C::MM_ScratchClose()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.MM_ScratchClose");
		
		AMainMenu_C_MM_ScratchClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenu_C::ExecuteUbergraph_MainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu");
		
		AMainMenu_C_ExecuteUbergraph_MainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainMenu_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MainMenu.MainMenu_C");
		return ptr;
	}

}


