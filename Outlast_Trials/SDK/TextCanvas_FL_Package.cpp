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
	 * 		Name   -> Function TextCanvas_FL.TextCanvas_FL_C.Draw Icons Material
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCanvas*                                     Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ScreenSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    iconMaterial                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ScaleFactor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FIconBox>                            Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextCanvas_FL_C::DrawIconsMaterial(class UCanvas* Canvas, const struct FVector2D& ScreenSize, class UMaterialInstanceDynamic* iconMaterial, const struct FVector2D& ScaleFactor, TArray<struct FIconBox>* Icon, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TextCanvas_FL.TextCanvas_FL_C.Draw Icons Material");
		
		UTextCanvas_FL_C_DrawIconsMaterial_Params params {};
		params.Canvas = Canvas;
		params.ScreenSize = ScreenSize;
		params.iconMaterial = iconMaterial;
		params.ScaleFactor = ScaleFactor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextCanvas_FL.TextCanvas_FL_C.Add Item to Mimic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextCanvas_FL_C::AddItemtoMimic(TArray<class AActor*>* Array, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TextCanvas_FL.TextCanvas_FL_C.Add Item to Mimic");
		
		UTextCanvas_FL_C_AddItemtoMimic_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextCanvas_FL.TextCanvas_FL_C.SetMimicMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MeshTarget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextCanvas_FL_C::SetMimicMaterial(class UPrimitiveComponent* MeshTarget, class UMaterialInterface* Material, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TextCanvas_FL.TextCanvas_FL_C.SetMimicMaterial");
		
		UTextCanvas_FL_C_SetMimicMaterial_Params params {};
		params.MeshTarget = MeshTarget;
		params.Material = Material;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextCanvas_FL.TextCanvas_FL_C.Update Mimic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UPrimitiveComponent*                         MeshTarget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextCanvas_FL_C::UpdateMimic(TArray<class AActor*>* Array, class UPrimitiveComponent* MeshTarget, class UMaterialInterface* Material, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TextCanvas_FL.TextCanvas_FL_C.Update Mimic");
		
		UTextCanvas_FL_C_UpdateMimic_Params params {};
		params.MeshTarget = MeshTarget;
		params.Material = Material;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextCanvas_FL.TextCanvas_FL_C.DrawTextBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   ScaleFactor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   RenderTextureSize                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvas*                                     Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ScreenSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              KerningJustifyMax                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              KerningJustifyMin                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTextBox                                    TextBox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextCanvas_FL_C::DrawTextBox(const struct FVector2D& ScaleFactor, const struct FVector2D& RenderTextureSize, class UCanvas* Canvas, const struct FVector2D& ScreenSize, float KerningJustifyMax, float KerningJustifyMin, const struct FTextBox& TextBox, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TextCanvas_FL.TextCanvas_FL_C.DrawTextBox");
		
		UTextCanvas_FL_C_DrawTextBox_Params params {};
		params.ScaleFactor = ScaleFactor;
		params.RenderTextureSize = RenderTextureSize;
		params.Canvas = Canvas;
		params.ScreenSize = ScreenSize;
		params.KerningJustifyMax = KerningJustifyMax;
		params.KerningJustifyMin = KerningJustifyMin;
		params.TextBox = TextBox;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextCanvas_FL.TextCanvas_FL_C.FindFontSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              string                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UFont*                                       RenderFont                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   BoxSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Kerning                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvas*                                     Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FontScale                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextCanvas_FL_C::FindFontSize(TArray<class FString>* string, class UFont* RenderFont, const struct FVector2D& Scale, const struct FVector2D& BoxSize, float Kerning, class UCanvas* Canvas, class UObject* __WorldContext, float* FontScale)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TextCanvas_FL.TextCanvas_FL_C.FindFontSize");
		
		UTextCanvas_FL_C_FindFontSize_Params params {};
		params.RenderFont = RenderFont;
		params.Scale = Scale;
		params.BoxSize = BoxSize;
		params.Kerning = Kerning;
		params.Canvas = Canvas;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (string != nullptr)
			*string = params.string;
		if (FontScale != nullptr)
			*FontScale = params.FontScale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextCanvas_FL.TextCanvas_FL_C.AdjustText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFont*                                       RenderFont                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   BoxSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Kerning                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvas*                                     Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              KerningJustifyMax                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              KerningJustifyMin                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaleFont                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              _AdjustedLines1                                            (Parm, OutParm)
	 * 		TArray<float>                                      _KerningScale1                                             (Parm, OutParm)
	 */
	void UTextCanvas_FL_C::AdjustText(class UFont* RenderFont, const struct FVector2D& Scale, const struct FVector2D& BoxSize, float Kerning, class UCanvas* Canvas, const class FString& Text, float KerningJustifyMax, float KerningJustifyMin, class UObject* __WorldContext, float* ScaleFont, TArray<class FString>* _AdjustedLines1, TArray<float>* _KerningScale1)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TextCanvas_FL.TextCanvas_FL_C.AdjustText");
		
		UTextCanvas_FL_C_AdjustText_Params params {};
		params.RenderFont = RenderFont;
		params.Scale = Scale;
		params.BoxSize = BoxSize;
		params.Kerning = Kerning;
		params.Canvas = Canvas;
		params.Text = Text;
		params.KerningJustifyMax = KerningJustifyMax;
		params.KerningJustifyMin = KerningJustifyMin;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScaleFont != nullptr)
			*ScaleFont = params.ScaleFont;
		if (_AdjustedLines1 != nullptr)
			*_AdjustedLines1 = params._AdjustedLines1;
		if (_KerningScale1 != nullptr)
			*_KerningScale1 = params._KerningScale1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextCanvas_FL.TextCanvas_FL_C.DrawTextBoxArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   ScaleFactor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   RenderTextureSize                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ScreenSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvas*                                     Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              KerningJustifyMax                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              KerningJustifyMin                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTextBox>                            TextBox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextCanvas_FL_C::DrawTextBoxArray(const struct FVector2D& ScaleFactor, const struct FVector2D& RenderTextureSize, const struct FVector2D& ScreenSize, class UCanvas* Canvas, float KerningJustifyMax, float KerningJustifyMin, TArray<struct FTextBox>* TextBox, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TextCanvas_FL.TextCanvas_FL_C.DrawTextBoxArray");
		
		UTextCanvas_FL_C_DrawTextBoxArray_Params params {};
		params.ScaleFactor = ScaleFactor;
		params.RenderTextureSize = RenderTextureSize;
		params.ScreenSize = ScreenSize;
		params.Canvas = Canvas;
		params.KerningJustifyMax = KerningJustifyMax;
		params.KerningJustifyMin = KerningJustifyMin;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextBox != nullptr)
			*TextBox = params.TextBox;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TextCanvas_FL.TextCanvas_FL_C.Draw Icons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FIconBox>                            Icons                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UCanvas*                                     Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ScreenSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   UVSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTextCanvas_FL_C::DrawIcons(TArray<struct FIconBox>* Icons, class UCanvas* Canvas, const struct FVector2D& ScreenSize, const struct FVector2D& UVSize, const struct FVector2D& ratio, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TextCanvas_FL.TextCanvas_FL_C.Draw Icons");
		
		UTextCanvas_FL_C_DrawIcons_Params params {};
		params.Canvas = Canvas;
		params.ScreenSize = ScreenSize;
		params.UVSize = UVSize;
		params.ratio = ratio;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icons != nullptr)
			*Icons = params.Icons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextCanvas_FL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextCanvas_FL_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TextCanvas_FL.TextCanvas_FL_C");
		return ptr;
	}

}


