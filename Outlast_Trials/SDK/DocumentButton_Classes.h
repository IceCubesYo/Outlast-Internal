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
	 * WidgetBlueprintGeneratedClass DocumentButton.DocumentButton_C
	 * Size -> 0x0148 (FullSize[0x03A8] - InheritedSize[0x0260])
	 */
	class UDocumentButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             ContentBorder;                                           // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             DocumentButton;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MainImage;                                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NewImage;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          UnknownTextWidget;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bIsGamepad;                                              // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bHovered;                                                // 0x0291(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bFocused;                                                // 0x0292(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TT9F[0x5];                                   // 0x0293(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSelected;                                              // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FRBCollectibleDocumentDefinitionRow                 Document;                                                // 0x02A8(0x00E8) Edit, BlueprintVisible
		bool                                                       bAcquired;                                               // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_39A1[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSeen;                                                  // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void IsElementEmpty(bool* bIsEmpty);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void SetSeen();
		void IsConsideredHovered(bool* bConsideredHovered);
		void SetFocused(bool bInFocused);
		void SetHovered(bool bInHovered);
		void Refresh();
		void UpdateFocus();
		void OnLoaded_400D3A6F46134D64437AC5B163287479(class UObject* Loaded);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__DocumentGroupButton_DocumentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void Setup(const struct FRBCollectibleDocumentDefinitionRow& Document);
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		void Construct();
		void Destruct();
		void OnMenuInputSourceChanged();
		void ExecuteUbergraph_DocumentButton(int32_t EntryPoint);
		void OnSeen__DelegateSignature();
		void OnSelected__DelegateSignature(const struct FRBCollectibleDocumentDefinitionRow& Document);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
