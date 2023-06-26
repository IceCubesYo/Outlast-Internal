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
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.GetElapsedAnimTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtvChannel_BP_C::GetElapsedAnimTime(float* Time)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.GetElapsedAnimTime");
		
		AtvChannel_BP_C_GetElapsedAnimTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.Set Material Dynamic Parameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ChromaticAberation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NoiseDeform                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RefreshJumpLuminosity                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Interlace                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture*                                    TVmovie                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtvChannel_BP_C::SetMaterialDynamicParameter(float Height, float ChromaticAberation, float NoiseDeform, float RefreshJumpLuminosity, float Interlace, class UTexture* TVmovie)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.Set Material Dynamic Parameter");
		
		AtvChannel_BP_C_SetMaterialDynamicParameter_Params params {};
		params.Height = Height;
		params.ChromaticAberation = ChromaticAberation;
		params.NoiseDeform = NoiseDeform;
		params.RefreshJumpLuminosity = RefreshJumpLuminosity;
		params.Interlace = Interlace;
		params.TVmovie = TVmovie;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.PlaySoundFromTV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlayOnNarrator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AtvChannel_BP_C::PlaySoundFromTV(class UAkAudioEvent* Sound, bool PlayOnNarrator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.PlaySoundFromTV");
		
		AtvChannel_BP_C_PlaySoundFromTV_Params params {};
		params.Sound = Sound;
		params.PlayOnNarrator = PlayOnNarrator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.PlayRandomAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  DataTable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LoopSingleAnimation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OnlySingleRow                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AtvChannel_BP_C::PlayRandomAnim(class UDataTable* DataTable, bool LoopSingleAnimation, bool OnlySingleRow)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.PlayRandomAnim");
		
		AtvChannel_BP_C_PlayRandomAnim_Params params {};
		params.DataTable = DataTable;
		params.LoopSingleAnimation = LoopSingleAnimation;
		params.OnlySingleRow = OnlySingleRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.ShouldLoopAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AtvChannel_BP_C::ShouldLoopAnim(bool* Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.ShouldLoopAnim");
		
		AtvChannel_BP_C_ShouldLoopAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.ValidateTexture
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::ValidateTexture()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.ValidateTexture");
		
		AtvChannel_BP_C_ValidateTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.GetRandomDataTableRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  DataTable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RowName                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtvChannel_BP_C::GetRandomDataTableRow(class UDataTable* DataTable, class FName* RowName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.GetRandomDataTableRow");
		
		AtvChannel_BP_C_GetRandomDataTableRow_Params params {};
		params.DataTable = DataTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RowName != nullptr)
			*RowName = params.RowName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.Create Dynamic Texture
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::CreateDynamicTexture()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.Create Dynamic Texture");
		
		AtvChannel_BP_C_CreateDynamicTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.Set Test Screen Mat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtvChannel_BP_C::SetTestScreenMat(class UMaterialInterface* Material)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.Set Test Screen Mat");
		
		AtvChannel_BP_C_SetTestScreenMat_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.UserConstructionScript");
		
		AtvChannel_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.ReceiveBeginPlay");
		
		AtvChannel_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.UpdateText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      string                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              _0FontScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtvChannel_BP_C::UpdateText(const class FString& string, const class FText& Text, float _0FontScale)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.UpdateText");
		
		AtvChannel_BP_C_UpdateText_Params params {};
		params.string = string;
		params.Text = Text;
		params._0FontScale = _0FontScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.startMovie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FTextAnim_Struc>                     TextAnim                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UMediaSource*                                Movie                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkAudioEvent*                               MovieSound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtvChannel_BP_C::startMovie(TArray<struct FTextAnim_Struc> TextAnim, class UMediaSource* Movie, class UAkAudioEvent* MovieSound)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.startMovie");
		
		AtvChannel_BP_C_startMovie_Params params {};
		params.TextAnim = TextAnim;
		params.Movie = Movie;
		params.MovieSound = MovieSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.StartTextAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FTextAnim_Struc>                     TargetArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AtvChannel_BP_C::StartTextAnimation(TArray<struct FTextAnim_Struc> TargetArray)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.StartTextAnimation");
		
		AtvChannel_BP_C_StartTextAnimation_Params params {};
		params.TargetArray = TargetArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.EndMovie
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::EndMovie()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.EndMovie");
		
		AtvChannel_BP_C_EndMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.PlayCurrentAnim
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::PlayCurrentAnim()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.PlayCurrentAnim");
		
		AtvChannel_BP_C_PlayCurrentAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.CreateTextTexture
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::CreateTextTexture()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.CreateTextTexture");
		
		AtvChannel_BP_C_CreateTextTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.UpdateMaterialParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TextColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture*                                    Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Noise                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Rorschard                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MovieFlash                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AtvChannel_BP_C::UpdateMaterialParameter(float TextColor, class UTexture* Texture, bool Noise, bool Rorschard, bool MovieFlash)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.UpdateMaterialParameter");
		
		AtvChannel_BP_C_UpdateMaterialParameter_Params params {};
		params.TextColor = TextColor;
		params.Texture = Texture;
		params.Noise = Noise;
		params.Rorschard = Rorschard;
		params.MovieFlash = MovieFlash;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.DrawRenderTarget
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::DrawRenderTarget()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.DrawRenderTarget");
		
		AtvChannel_BP_C_DrawRenderTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.Event_OnCurrentlyPlayingDataChanged
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::Event_OnCurrentlyPlayingDataChanged()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.Event_OnCurrentlyPlayingDataChanged");
		
		AtvChannel_BP_C_Event_OnCurrentlyPlayingDataChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.OnAnimationFinihsed
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::OnAnimationFinihsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.OnAnimationFinihsed");
		
		AtvChannel_BP_C_OnAnimationFinihsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.PlayCountdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Countdown                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtvChannel_BP_C::PlayCountdown(int32_t Countdown)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.PlayCountdown");
		
		AtvChannel_BP_C_PlayCountdown_Params params {};
		params.Countdown = Countdown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.stopMovie
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::stopMovie()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.stopMovie");
		
		AtvChannel_BP_C_stopMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.loopAnim
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::loopAnim()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.loopAnim");
		
		AtvChannel_BP_C_loopAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.StopAnim
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::StopAnim()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.StopAnim");
		
		AtvChannel_BP_C_StopAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtvChannel_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.ReceiveEndPlay");
		
		AtvChannel_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.ExecuteUbergraph_tvChannel_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtvChannel_BP_C::ExecuteUbergraph_tvChannel_BP(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.ExecuteUbergraph_tvChannel_BP");
		
		AtvChannel_BP_C_ExecuteUbergraph_tvChannel_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AtvChannel_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AtvChannel_BP_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass tvChannel_BP.tvChannel_BP_C");
		return ptr;
	}

}


