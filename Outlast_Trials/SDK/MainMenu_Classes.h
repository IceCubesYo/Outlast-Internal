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
	 * BlueprintGeneratedClass MainMenu.MainMenu_C
	 * Size -> 0x0040 (FullSize[0x0290] - InheritedSize[0x0250])
	 */
	class AMainMenu_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0250(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ARBMainMenuPlayerController*                         MainMenuController;                                      // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMusicPlaying;                                          // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3MUW[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBinkMediaPlayer*                                    BinkMovie01;                                             // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBinkMediaPlayer*                                    BinkOldMovie01;                                          // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBinkMediaPlayer*                                    BinkMovie02;                                             // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ALevelSequenceActor*                                 MenuSequencer01_2_ExecuteUbergraph_MainMenu_RefProperty; // 0x0280(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ALevelSequenceActor*                                 MenuSequencer02_0_ExecuteUbergraph_MainMenu_RefProperty; // 0x0288(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ToggleXPCheck();
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void MM_PlayCamera01();
		void MM_PlayCamera02();
		void MM_StopCamera01();
		void MM_StopCamera02();
		void OnMainMenuStageChanged(EMainMenuState mainMenuState);
		void MM_Scratch();
		void MM_ScratchClose();
		void ExecuteUbergraph_MainMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
