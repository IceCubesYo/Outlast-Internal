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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum DLSS.EDLSSPreset
	 */
	enum class EDLSSPreset : uint8_t
	{
		Default = 0,
		A       = 1,
		B       = 2,
		C       = 3,
		D       = 4,
		E       = 5,
		F       = 6,
		MAX     = 7
	};

	/**
	 * Enum DLSS.EDLSSSettingOverride
	 */
	enum class EDLSSSettingOverride : uint8_t
	{
		Enabled            = 0,
		Disabled           = 1,
		UseProjectSettings = 2,
		MAX                = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
