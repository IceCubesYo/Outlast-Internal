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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Document.Document_C.Setup
	 */
	struct UDocument_C_Setup_Params
	{
	public:
		struct FRBCollectibleDocumentDefinitionRow                 Document;                                                // 0x0000(0x00E8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Document.Document_C.BndEvt__Document_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UDocument_C_BndEvt__Document_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class URBMenuButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Document.Document_C.ExecuteUbergraph_Document
	 */
	struct UDocument_C_ExecuteUbergraph_Document_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LMA9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
