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
	 * BlueprintGeneratedClass SASChairPanelComponent_BP.SASChairPanelComponent_BP_C
	 * Size -> 0x0000 (FullSize[0x0930] - InheritedSize[0x0930])
	 */
	class USASChairPanelComponent_BP_C : public URBSASChairPanelComponent
	{
	public:
		bool ShouldBPTick();
		bool GetInteractionPawnLocation(class ARBPawn* Pawn, ESpecialMove specialMove, struct FVector* OutLocation, struct FVector* outDirection);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
