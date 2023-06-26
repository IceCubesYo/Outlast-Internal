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
	 * BlueprintGeneratedClass TextCanvas_FL.TextCanvas_FL_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTextCanvas_FL_C : public UBlueprintFunctionLibrary
	{
	public:
		void DrawIconsMaterial(class UCanvas* Canvas, const struct FVector2D& ScreenSize, class UMaterialInstanceDynamic* iconMaterial, const struct FVector2D& ScaleFactor, TArray<struct FIconBox>* Icon, class UObject* __WorldContext);
		void AddItemtoMimic(TArray<class AActor*>* Array, class UObject* __WorldContext);
		void SetMimicMaterial(class UPrimitiveComponent* MeshTarget, class UMaterialInterface* Material, class UObject* __WorldContext);
		void UpdateMimic(TArray<class AActor*>* Array, class UPrimitiveComponent* MeshTarget, class UMaterialInterface* Material, class UObject* __WorldContext);
		void DrawTextBox(const struct FVector2D& ScaleFactor, const struct FVector2D& RenderTextureSize, class UCanvas* Canvas, const struct FVector2D& ScreenSize, float KerningJustifyMax, float KerningJustifyMin, const struct FTextBox& TextBox, class UObject* __WorldContext);
		void FindFontSize(TArray<class FString>* string, class UFont* RenderFont, const struct FVector2D& Scale, const struct FVector2D& BoxSize, float Kerning, class UCanvas* Canvas, class UObject* __WorldContext, float* FontScale);
		void AdjustText(class UFont* RenderFont, const struct FVector2D& Scale, const struct FVector2D& BoxSize, float Kerning, class UCanvas* Canvas, const class FString& Text, float KerningJustifyMax, float KerningJustifyMin, class UObject* __WorldContext, float* ScaleFont, TArray<class FString>* _AdjustedLines1, TArray<float>* _KerningScale1);
		void DrawTextBoxArray(const struct FVector2D& ScaleFactor, const struct FVector2D& RenderTextureSize, const struct FVector2D& ScreenSize, class UCanvas* Canvas, float KerningJustifyMax, float KerningJustifyMin, TArray<struct FTextBox>* TextBox, class UObject* __WorldContext);
		void DrawIcons(TArray<struct FIconBox>* Icons, class UCanvas* Canvas, const struct FVector2D& ScreenSize, const struct FVector2D& UVSize, const struct FVector2D& ratio, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
