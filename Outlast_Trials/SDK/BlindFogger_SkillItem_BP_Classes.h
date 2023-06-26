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
	 * BlueprintGeneratedClass BlindFogger_SkillItem_BP.BlindFogger_SkillItem_BP_C
	 * Size -> 0x0008 (FullSize[0x0AE8] - InheritedSize[0x0AE0])
	 */
	class ABlindFogger_SkillItem_BP_C : public ABaseFogger_SkillItem_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AE0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SpawnAndExplodeBomb_Server(class AActor** BombActor);
		void SpawnAndExplodeBomb_Client(class AActor** BombActor);
		void Event_OnDeployed();
		void Event_OnActivate();
		void Event_AudioDistractionTriggered();
		void ExecuteUbergraph_BlindFogger_SkillItem_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
