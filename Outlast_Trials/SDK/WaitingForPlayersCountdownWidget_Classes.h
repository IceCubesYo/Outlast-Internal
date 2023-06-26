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
	 * WidgetBlueprintGeneratedClass WaitingForPlayersCountdownWidget.WaitingForPlayersCountdownWidget_C
	 * Size -> 0x001D (FullSize[0x0305] - InheritedSize[0x02E8])
	 */
	class UWaitingForPlayersCountdownWidget_C : public URBHUDElementWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCommonHudCountdown_C*                               CommonHudCountdown;                                      // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      MatchStartServerTime;                                    // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCountdownActive;                                        // 0x02FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsStartingSoon;                                          // 0x02FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7OBB[0x2];                                   // 0x02FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MatchCountdownStartServerTime;                           // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReadyToTravelToMatch;                                    // 0x0304(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnGamePhaseUpdated(EGamePhase gamePhase, bool bDrugSequenceCompleted);
		bool ShouldShow();
		void HideCountdown();
		void StartCountdown();
		void OnGamePhaseUpdatedEvent(EGamePhase gamePhase);
		void Destruct();
		void PreConstruct(bool IsDesignTime);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void OnDrugSequenceCompleted();
		void ExecuteUbergraph_WaitingForPlayersCountdownWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
