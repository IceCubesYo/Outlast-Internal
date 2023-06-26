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
	 * WidgetBlueprintGeneratedClass Client_InGameMenu.Client_InGameMenu_C
	 * Size -> 0x00DC (FullSize[0x0404] - InheritedSize[0x0328])
	 */
	class UClient_InGameMenu_C : public URBInGameMenuWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Background_2;                                            // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              bg;                                                      // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInGameMenuOptionWidget_C*                           DebugBtn;                                                // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URBMenuButton_C*                                     ExitButton;                                              // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URBCharacterSheetTabMenuButton_C*                    GroupButtom;                                             // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUDObjectives_C*                                    HUDObjectives;                                           // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInGameMenuVariatorEntry_C*                          InGameMenuVariatorEntry;                                 // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInGameMenuVariatorEntry_C*                          InGameMenuVariatorEntry_2;                               // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInGameMenuVariatorEntry_C*                          InGameMenuVariatorEntry_3;                               // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInGameMenuVariatorEntry_C*                          InGameMenuVariatorEntry_4;                               // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInGameMenuVariatorEntry_C*                          InGameMenuVariatorEntry_5;                               // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UActionIconWidget_C*                                 leftTabButton;                                           // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalPlayerInfo_v2_C*                               LocalPlayerInfo_v2;                                      // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInvalidationBox*                                    MenuContent;                                             // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuFocusActionButtonContainer_C*                   MenuFocusActionButtonContainer;                          // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        MenuOptionsBox;                                          // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInGameMenuOptionWidget_C*                           OptionsBtn;                                              // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PageTitle;                                               // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USocialMenu_PartyWidget_C*                           PartyWidget;                                             // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInGameMenuOptionWidget_C*                           QuitBtn;                                                 // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInGameMenuOptionWidget_C*                           ResumeBtn;                                               // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInGameMenuOptionWidget_C*                           ReturnToLobbyBtn;                                        // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UActionIconWidget_C*                                 rightTabButton;                                          // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URBCharacterSheetTabMenuButton_C*                    SystemButtom;                                            // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      VariatorHBox;                                            // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWorkInProgressOverlay_C*                            WorkInProgressOverlay;                                   // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SelectedTabIndex;                                        // 0x0400(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void SetupVariators();
		void ShowGroup();
		void ShowSystem();
		bool GetQuitFacilityButtonsEnabled();
		bool GetReturnToLobbyBtnIsEnabled();
		ESlateVisibility GetReturnToLobbyBtnVisibility();
		ESlateVisibility GetDevOptionsBtnVisibility();
		void BndEvt__ResumeBtn_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
		void BndEvt__DebugBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
		void BndEvt__QuitBtn_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
		void BndEvt__AudioOptionsBtn_1_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature();
		void BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void Construct();
		void BndEvt__Client_InGameMenu_ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
		void PreConstruct(bool IsDesignTime);
		void Destruct();
		void BndEvt__Client_InGameMenu_SystemButtom_K2Node_ComponentBoundEvent_0_OnMenuTabButtonClicked__DelegateSignature(class URBMenuTabButton* Button);
		void BndEvt__Client_InGameMenu_GroupButtom_K2Node_ComponentBoundEvent_3_OnMenuTabButtonClicked__DelegateSignature(class URBMenuTabButton* Button);
		void Event_OnPush();
		void Event_MenuTabLeft_Released();
		void Event_MenuTabRight_Released();
		void Event_OnMenuSettingsModified();
		void ExecuteUbergraph_Client_InGameMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
