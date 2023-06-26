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
	 * WidgetBlueprintGeneratedClass PartyInviteRequestHudWidget.PartyInviteRequestHudWidget_C
	 * Size -> 0x0058 (FullSize[0x0348] - InheritedSize[0x02F0])
	 */
	class UPartyInviteRequestHudWidget_C : public URBPartyInviteRequestNotificationUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    HideAnim;                                                // 0x02F8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowAnim;                                                // 0x0300(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCommonNotificationWidget_C*                         CommonNotificationWidget;                                // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      CurrentTime;                                             // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalTime;                                               // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        AcceptedColor;                                           // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        RefusedColor;                                            // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          HardcoreIconTexture;                                     // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          RegularIconTexture;                                      // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Finished_2AB4E702456E6779D4DD0FB575589774();
		void Event_Show();
		void Event_UpdateDisplayTime(float DisplayTime, float totalDisplayTime);
		void Event_Hide();
		void Event_Accepted();
		void Event_Refused();
		void BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_0_OnAcceptedButtonClicked__DelegateSignature();
		void BndEvt__PartyInviteHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_1_OnDeclinedButtonClicked__DelegateSignature();
		void Event_Blocked();
		void BndEvt__PartyInviteRequestHudWidget_CommonNotificationWidget_K2Node_ComponentBoundEvent_2_OnBlockButtonClicked__DelegateSignature();
		void ExecuteUbergraph_PartyInviteRequestHudWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
