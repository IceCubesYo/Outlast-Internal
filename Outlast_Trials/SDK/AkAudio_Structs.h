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
	 * Enum AkAudio.EAkCallbackType
	 */
	enum class EAkCallbackType : uint8_t
	{
		EndOfEvent       = 0,
		Marker           = 1,
		Duration         = 2,
		Starvation       = 3,
		MusicPlayStarted = 4,
		MusicSyncBeat    = 5,
		MusicSyncBar     = 6,
		MusicSyncEntry   = 7,
		MusicSyncExit    = 8,
		MusicSyncGrid    = 9,
		MusicSyncUserCue = 10,
		MusicSyncPoint   = 11,
		MIDIEvent        = 12,
		MAX              = 13
	};

	/**
	 * Enum AkAudio.EAkResult
	 */
	enum class EAkResult : uint8_t
	{
		Undefined                   = 0,
		NotImplemented              = 1,
		Success                     = 2,
		Fail                        = 3,
		PartialSuccess              = 4,
		NotCompatible               = 5,
		AlreadyConnected            = 6,
		InvalidFile                 = 7,
		AudioFileHeaderTooLarge     = 8,
		MaxReached                  = 9,
		InvalidID                   = 10,
		IDNotFound                  = 11,
		InvalidInstanceID           = 12,
		NoMoreData                  = 13,
		InvalidStateGroup           = 14,
		ChildAlreadyHasAParent      = 15,
		InvalidLanguage             = 16,
		CannotAddItseflAsAChild     = 17,
		InvalidParameter            = 18,
		ElementAlreadyInList        = 19,
		PathNotFound                = 20,
		PathNoVertices              = 21,
		PathNotRunning              = 22,
		PathNotPaused               = 23,
		PathNodeAlreadyInList       = 24,
		PathNodeNotInList           = 25,
		DataNeeded                  = 26,
		NoDataNeeded                = 27,
		DataReady                   = 28,
		NoDataReady                 = 29,
		InsufficientMemory          = 30,
		Cancelled                   = 31,
		UnknownBankID               = 32,
		BankReadError               = 33,
		InvalidSwitchType           = 34,
		FormatNotReady              = 35,
		WrongBankVersion            = 36,
		FileNotFound                = 37,
		DeviceNotReady              = 38,
		BankAlreadyLoaded           = 39,
		RenderedFX                  = 40,
		ProcessNeeded               = 41,
		ProcessDone                 = 42,
		MemManagerNotInitialized    = 43,
		StreamMgrNotInitialized     = 44,
		SSEInstructionsNotSupported = 45,
		Busy                        = 46,
		UnsupportedChannelConfig    = 47,
		PluginMediaNotAvailable     = 48,
		MustBeVirtualized           = 49,
		CommandTooLarge             = 50,
		RejectedByFilter            = 51,
		InvalidCustomPlatformName   = 52,
		DLLCannotLoad               = 53,
		DLLPathNotFound             = 54,
		NoJavaVM                    = 55,
		OpenSLError                 = 56,
		PluginNotRegistered         = 57,
		DataAlignmentError          = 58,
		MAX                         = 59
	};

	/**
	 * Enum AkAudio.EReflectionFilterBits
	 */
	enum class EReflectionFilterBits : uint8_t
	{
		Wall    = 0,
		Ceiling = 1,
		Floor   = 2,
		MAX     = 3
	};

	/**
	 * Enum AkAudio.AkCodecId
	 */
	enum class EAkCodecId : uint8_t
	{
		AkCodecIdUndefined       = 0,
		AkCodecIdBank            = 1,
		AkCodecIdPCM             = 2,
		AkCodecIdADPCM           = 3,
		AkCodecIdXMA             = 4,
		AkCodecIdVorbis          = 5,
		AkCodecIdWiiADPCM        = 6,
		AkCodecIdPCMEX           = 7,
		AkCodecIdExternalSource  = 8,
		AkCodecIdXWMA            = 9,
		AkCodecIdAAC             = 10,
		AkCodecIdFilePackage     = 11,
		AkCodecIdATRAC9          = 12,
		AkCodecIdVAG             = 13,
		AkCodecIdProfilerCapture = 14,
		AkCodecIdAnalysisFile    = 15,
		AkCodecIdMIDI            = 16,
		AkCodecIdOpusNX          = 17,
		AkCodecIdCAF             = 18,
		AkCodecIdAkOpus          = 19,
		AkCodecIdAkCodecId_MAX   = 20
	};

	/**
	 * Enum AkAudio.EAkMidiCcValues
	 */
	enum class EAkMidiCcValues : uint8_t
	{
		Undefined                 = 0,
		AkMidiCcBankSelectCoarse  = 1,
		AkMidiCcModWheelCoarse    = 2,
		AkMidiCcBreathCtrlCoarse  = 3,
		AkMidiCcCtrl3Coarse       = 4,
		AkMidiCcFootPedalCoarse   = 5,
		AkMidiCcPortamentoCoarse  = 6,
		AkMidiCcDataEntryCoarse   = 7,
		AkMidiCcVolumeCoarse      = 8,
		AkMidiCcBalanceCoarse     = 9,
		AkMidiCcCtrl9Coarse       = 10,
		AkMidiCcPanPositionCoarse = 11,
		AkMidiCcExpressionCoarse  = 12,
		AkMidiCcEffectCtrl1Coarse = 13,
		AkMidiCcEffectCtrl2Coarse = 14,
		AkMidiCcCtrl14Coarse      = 15,
		AkMidiCcCtrl15Coarse      = 16,
		AkMidiCcGenSlider1        = 17,
		AkMidiCcGenSlider2        = 18,
		AkMidiCcGenSlider3        = 19,
		AkMidiCcGenSlider4        = 20,
		AkMidiCcCtrl20Coarse      = 21,
		AkMidiCcCtrl21Coarse      = 22,
		AkMidiCcCtrl22Coarse      = 23,
		AkMidiCcCtrl23Coarse      = 24,
		AkMidiCcCtrl24Coarse      = 25,
		AkMidiCcCtrl25Coarse      = 26,
		AkMidiCcCtrl26Coarse      = 27,
		AkMidiCcCtrl27Coarse      = 28,
		AkMidiCcCtrl28Coarse      = 29,
		AkMidiCcCtrl29Coarse      = 30,
		AkMidiCcCtrl30Coarse      = 31,
		AkMidiCcCtrl31Coarse      = 32,
		AkMidiCcBankSelectFine    = 33,
		AkMidiCcModWheelFine      = 34,
		AkMidiCcBreathCtrlFine    = 35,
		AkMidiCcCtrl3Fine         = 36,
		AkMidiCcFootPedalFine     = 37,
		AkMidiCcPortamentoFine    = 38,
		AkMidiCcDataEntryFine     = 39,
		AkMidiCcVolumeFine        = 40,
		AkMidiCcBalanceFine       = 41,
		AkMidiCcCtrl9Fine         = 42,
		AkMidiCcPanPositionFine   = 43,
		AkMidiCcExpressionFine    = 44,
		AkMidiCcEffectCtrl1Fine   = 45,
		AkMidiCcEffectCtrl2Fine   = 46,
		AkMidiCcCtrl14Fine        = 47,
		AkMidiCcCtrl15Fine        = 48,
		AkMidiCcCtrl20Fine        = 49,
		AkMidiCcCtrl21Fine        = 50,
		AkMidiCcCtrl22Fine        = 51,
		AkMidiCcCtrl23Fine        = 52,
		AkMidiCcCtrl24Fine        = 53,
		AkMidiCcCtrl25Fine        = 54,
		AkMidiCcCtrl26Fine        = 55,
		AkMidiCcCtrl27Fine        = 56,
		AkMidiCcCtrl28Fine        = 57,
		AkMidiCcCtrl29Fine        = 58,
		AkMidiCcCtrl30Fine        = 59,
		AkMidiCcCtrl31Fine        = 60,
		AkMidiCcHoldPedal         = 61,
		AkMidiCcPortamentoOnOff   = 62,
		AkMidiCcSustenutoPedal    = 63,
		AkMidiCcSoftPedal         = 64,
		AkMidiCcLegatoPedal       = 65,
		AkMidiCcHoldPedal2        = 66,
		AkMidiCcSoundVariation    = 67,
		AkMidiCcSoundTimbre       = 68,
		AkMidiCcSoundReleaseTime  = 69,
		AkMidiCcSoundAttackTime   = 70,
		AkMidiCcSoundBrightness   = 71,
		AkMidiCcSoundCtrl6        = 72,
		AkMidiCcSoundCtrl7        = 73,
		AkMidiCcSoundCtrl8        = 74,
		AkMidiCcSoundCtrl9        = 75,
		AkMidiCcSoundCtrl10       = 76,
		AkMidiCcGeneralButton1    = 77,
		AkMidiCcGeneralButton2    = 78,
		AkMidiCcGeneralButton3    = 79,
		AkMidiCcGeneralButton4    = 80,
		AkMidiCcReverbLevel       = 81,
		AkMidiCcTremoloLevel      = 82,
		AkMidiCcChorusLevel       = 83,
		AkMidiCcCelesteLevel      = 84,
		AkMidiCcPhaserLevel       = 85,
		AkMidiCcDataButtonP1      = 86,
		AkMidiCcDataButtonM1      = 87,
		AkMidiCcNonRegisterCoarse = 88,
		AkMidiCcNonRegisterFine   = 89,
		AkMidiCcAllSoundOff       = 90,
		AkMidiCcAllControllersOff = 91,
		AkMidiCcLocalKeyboard     = 92,
		AkMidiCcAllNotesOff       = 93,
		AkMidiCcOmniModeOff       = 94,
		AkMidiCcOmniModeOn        = 95,
		AkMidiCcOmniMonophonicOn  = 96,
		AkMidiCcOmniPolyphonicOn  = 97,
		MAX                       = 98
	};

	/**
	 * Enum AkAudio.EAkMidiEventType
	 */
	enum class EAkMidiEventType : uint8_t
	{
		Undefined                        = 0,
		AkMidiEventTypeInvalid           = 1,
		AkMidiEventTypeNoteOff           = 2,
		AkMidiEventTypeNoteOn            = 3,
		AkMidiEventTypeNoteAftertouch    = 4,
		AkMidiEventTypeController        = 5,
		AkMidiEventTypeProgramChange     = 6,
		AkMidiEventTypeChannelAftertouch = 7,
		AkMidiEventTypePitchBend         = 8,
		AkMidiEventTypeSysex             = 9,
		AkMidiEventTypeEscape            = 10,
		AkMidiEventTypeMeta              = 11,
		MAX                              = 12
	};

	/**
	 * Enum AkAudio.ERTPCValueType
	 */
	enum class ERTPCValueType : uint8_t
	{
		Undefined   = 0,
		Default     = 1,
		Global      = 2,
		GameObject  = 3,
		PlayingID   = 4,
		Unavailable = 5,
		MAX         = 6
	};

	/**
	 * Enum AkAudio.EAkCurveInterpolation
	 */
	enum class EAkCurveInterpolation : uint8_t
	{
		Log3          = 0,
		Sine          = 1,
		Log1          = 2,
		InvSCurve     = 3,
		Linear        = 4,
		SCurve        = 5,
		Exp1          = 6,
		SineRecip     = 7,
		Exp3          = 8,
		LastFadeCurve = 9,
		Constant      = 10,
		MAX           = 11
	};

	/**
	 * Enum AkAudio.AkActionOnEventType
	 */
	enum class EAkActionOnEventType : uint8_t
	{
		AkActionOnEventTypeStop                    = 0,
		AkActionOnEventTypePause                   = 1,
		AkActionOnEventTypeResume                  = 2,
		AkActionOnEventTypeBreak                   = 3,
		AkActionOnEventTypeReleaseEnvelope         = 4,
		AkActionOnEventTypeAkActionOnEventType_MAX = 5
	};

	/**
	 * Enum AkAudio.AkMultiPositionType
	 */
	enum class EAkMultiPositionType : uint8_t
	{
		AkMultiPositionTypeSingleSource            = 0,
		AkMultiPositionTypeMultiSources            = 1,
		AkMultiPositionTypeMultiDirections         = 2,
		AkMultiPositionTypeAkMultiPositionType_MAX = 3
	};

	/**
	 * Enum AkAudio.AkSpeakerConfiguration
	 */
	enum class EAkSpeakerConfiguration : uint8_t
	{
		AkSpeakerConfigurationAk_Speaker_Front_Left          = 0,
		AkSpeakerConfigurationAk_Speaker_Front_Right         = 1,
		AkSpeakerConfigurationAk_Speaker_Front_Center        = 2,
		AkSpeakerConfigurationAk_Speaker_Low_Frequency       = 3,
		AkSpeakerConfigurationAk_Speaker_Back_Left           = 4,
		AkSpeakerConfigurationAk_Speaker_Back_Right          = 5,
		AkSpeakerConfigurationAk_Speaker_Back_Center         = 6,
		AkSpeakerConfigurationAk_Speaker_Side_Left           = 7,
		AkSpeakerConfigurationAk_Speaker_Side_Right          = 8,
		AkSpeakerConfigurationAk_Speaker_Top                 = 9,
		AkSpeakerConfigurationAk_Speaker_Height_Front_Left   = 10,
		AkSpeakerConfigurationAk_Speaker_Height_Front_Center = 11,
		AkSpeakerConfigurationAk_Speaker_Height_Front_Right  = 12,
		AkSpeakerConfigurationAk_Speaker_Height_Back_Left    = 13,
		AkSpeakerConfigurationAk_Speaker_Height_Back_Center  = 14,
		AkSpeakerConfigurationAk_Speaker_Height_Back_Right   = 15,
		AkSpeakerConfigurationAk_Speaker_MAX                 = 16
	};

	/**
	 * Enum AkAudio.AkChannelConfiguration
	 */
	enum class EAkChannelConfiguration : uint8_t
	{
		AkChannelConfigurationAk_Parent               = 0,
		AkChannelConfigurationAk_LFE                  = 1,
		AkChannelConfigurationAk_1                    = 2,
		AkChannelConfigurationAk_2                    = 3,
		AkChannelConfigurationAk_201                  = 4,
		AkChannelConfigurationAk_3                    = 5,
		AkChannelConfigurationAk_301                  = 6,
		AkChannelConfigurationAk_4                    = 7,
		AkChannelConfigurationAk_401                  = 8,
		AkChannelConfigurationAk_5                    = 9,
		AkChannelConfigurationAk_501                  = 10,
		AkChannelConfigurationAk_7                    = 11,
		AkChannelConfigurationAk_5_1                  = 12,
		AkChannelConfigurationAk_7_1                  = 13,
		AkChannelConfigurationAk_7_101                = 14,
		AkChannelConfigurationAk_Auro_9               = 15,
		AkChannelConfigurationAk_Auro_10              = 16,
		AkChannelConfigurationAk_Auro_11              = 17,
		AkChannelConfigurationAk_Auro_13              = 18,
		AkChannelConfigurationAk_Ambisonics_1st_order = 19,
		AkChannelConfigurationAk_Ambisonics_2nd_order = 20,
		AkChannelConfigurationAk_Ambisonics_3rd_order = 21,
		AkChannelConfigurationAk_MAX                  = 22
	};

	/**
	 * Enum AkAudio.AkAcousticPortalState
	 */
	enum class EAkAcousticPortalState : uint8_t
	{
		AkAcousticPortalStateClosed                    = 0,
		AkAcousticPortalStateOpen                      = 1,
		AkAcousticPortalStateAkAcousticPortalState_MAX = 2
	};

	/**
	 * Enum AkAudio.PanningRule
	 */
	enum class EPanningRule : uint8_t
	{
		PanningRulePanningRule_Speakers   = 0,
		PanningRulePanningRule_Headphones = 1,
		PanningRulePanningRule_MAX        = 2
	};

	/**
	 * Enum AkAudio.EAkCommSystem
	 */
	enum class EAkCommSystem : uint8_t
	{
		Socket = 0,
		HTCS   = 1,
		MAX    = 2
	};

	/**
	 * Enum AkAudio.EAkChannelMask
	 */
	enum class EAkChannelMask : uint8_t
	{
		FrontLeft         = 0,
		FrontRight        = 1,
		FrontCenter       = 2,
		LowFrequency      = 3,
		BackLeft          = 4,
		BackRight         = 5,
		BackCenter        = 6,
		SideLeft          = 7,
		SideRight         = 8,
		Top               = 9,
		HeightFrontLeft   = 10,
		HeightFrontCenter = 11,
		HeightFrontRight  = 12,
		HeightBackLeft    = 13,
		HeightBackCenter  = 14,
		HeightBackRight   = 15,
		MAX               = 16
	};

	/**
	 * Enum AkAudio.EAkChannelConfigType
	 */
	enum class EAkChannelConfigType : uint8_t
	{
		Anonymous = 0,
		Standard  = 1,
		Ambisonic = 2,
		MAX       = 3
	};

	/**
	 * Enum AkAudio.EAkPanningRule
	 */
	enum class EAkPanningRule : uint8_t
	{
		Speakers   = 0,
		Headphones = 1,
		MAX        = 2
	};

	/**
	 * Enum AkAudio.EAkAudioSessionMode
	 */
	enum class EAkAudioSessionMode : uint8_t
	{
		Default        = 0,
		VoiceChat      = 1,
		GameChat       = 2,
		VideoRecording = 3,
		Measurement    = 4,
		MoviePlayback  = 5,
		VideoChat      = 6,
		MAX            = 7
	};

	/**
	 * Enum AkAudio.EAkAudioSessionCategoryOptions
	 */
	enum class EAkAudioSessionCategoryOptions : uint8_t
	{
		MixWithOthers    = 0,
		DuckOthers       = 1,
		AllowBluetooth   = 2,
		DefaultToSpeaker = 3,
		MAX              = 4
	};

	/**
	 * Enum AkAudio.EAkAudioSessionCategory
	 */
	enum class EAkAudioSessionCategory : uint8_t
	{
		Ambient       = 0,
		SoloAmbient   = 1,
		PlayAndRecord = 2,
		MAX           = 3
	};

	/**
	 * Enum AkAudio.EAkWindowsAudioAPI
	 */
	enum class EAkWindowsAudioAPI : uint8_t
	{
		Wasapi      = 0,
		XAudio2     = 1,
		DirectSound = 2,
		MAX         = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AkAudio.AkMainOutputSettings
	 * Size -> 0x0028
	 */
	struct FAkMainOutputSettings
	{
	public:
		class FString                                              AudioDeviceShareset;                                     // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DeviceID;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAkPanningRule                                             PanningRule;                                             // 0x0014(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXTU[0x3];                                   // 0x0015(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EAkChannelConfigType                                       ChannelConfigType;                                       // 0x0018(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WDHC[0x3];                                   // 0x0019(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		uint32_t                                                   ChannelMask;                                             // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NumberOfChannels;                                        // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YPQ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkSpatialAudioSettings
	 * Size -> 0x001C
	 */
	struct FAkSpatialAudioSettings
	{
	public:
		uint32_t                                                   MaxSoundPropagationDepth;                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MovementThreshold;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NumberOfPrimaryRays;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ReflectionOrder;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableDiffractionOnReflections;                          // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableDirectPathDiffraction;                             // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4OFL[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaximumPathLength;                                       // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableTransmission;                                      // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2YJ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkCommonInitializationSettings
	 * Size -> 0x0060
	 */
	struct FAkCommonInitializationSettings
	{
	public:
		uint32_t                                                   MaximumNumberOfMemoryPools;                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaximumNumberOfPositioningPaths;                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   CommandQueueSize;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SamplesPerFrame;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAkMainOutputSettings                               MainOutputSettings;                                      // 0x0010(0x0028) Edit, NativeAccessSpecifierPublic
		float                                                      StreamingLookAheadRatio;                                 // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   NumberOfRefillsInVoice;                                  // 0x003C(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXZP[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkSpatialAudioSettings                             SpatialAudioSettings;                                    // 0x0040(0x001C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QIYZ[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkCommonInitializationSettingsWithSampleRate
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	struct FAkCommonInitializationSettingsWithSampleRate : public FAkCommonInitializationSettings
	{
	public:
		uint32_t                                                   SampleRate;                                              // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFLS[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkCommunicationSettings
	 * Size -> 0x0020
	 */
	struct FAkCommunicationSettings
	{
	public:
		uint32_t                                                   PoolSize;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   DiscoveryBroadcastPort;                                  // 0x0004(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   CommandPort;                                             // 0x0006(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   NotificationPort;                                        // 0x0008(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EL1[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NetworkName;                                             // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkCommunicationSettingsWithSystemInitialization
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FAkCommunicationSettingsWithSystemInitialization : public FAkCommunicationSettings
	{
	public:
		bool                                                       InitializeSystemComms;                                   // 0x0020(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ORG[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkAdvancedSpatialAudioSettings
	 * Size -> 0x0008
	 */
	struct FAkAdvancedSpatialAudioSettings
	{
	public:
		float                                                      DiffractionShadowAttenuationFactor;                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DiffractionShadowDegrees;                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkAdvancedInitializationSettings
	 * Size -> 0x0034
	 */
	struct FAkAdvancedInitializationSettings
	{
	public:
		uint32_t                                                   IO_MemorySize;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   IO_Granularity;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetAutoStreamBufferLength;                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseStreamCache;                                          // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R8PT[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MaximumPinnedBytesInCache;                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableGameSyncPreparation;                               // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFY6[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ContinuousPlaybackLookAhead;                             // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MonitorQueuePoolSize;                                    // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaximumHardwareTimeoutMs;                                // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DebugOutOfRangeCheckEnabled;                             // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YBN[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugOutOfRangeLimit;                                    // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAkAdvancedSpatialAudioSettings                     SpatialAudioSettings;                                    // 0x002C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
	 * Size -> 0x0004 (FullSize[0x0038] - InheritedSize[0x0034])
	 */
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings
	{
	public:
		bool                                                       EnableMultiCoreRendering;                                // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WRC5[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
	 * Size -> 0x0004 (FullSize[0x003C] - InheritedSize[0x0038])
	 */
	struct FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		bool                                                       RoundFrameSizeToHardwareSize;                            // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9GUL[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkBoolPropertyToControl
	 * Size -> 0x0010
	 */
	struct FAkBoolPropertyToControl
	{
	public:
		class FString                                              ItemProperty;                                            // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkWwiseObjectDetails
	 * Size -> 0x0030
	 */
	struct FAkWwiseObjectDetails
	{
	public:
		class FString                                              ItemName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemPath;                                                // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemId;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkWwiseItemToControl
	 * Size -> 0x0040
	 */
	struct FAkWwiseItemToControl
	{
	public:
		struct FAkWwiseObjectDetails                               ItemPicked;                                              // 0x0000(0x0030) Edit, EditConst, NativeAccessSpecifierPublic
		class FString                                              ItemPath;                                                // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkSegmentInfo
	 * Size -> 0x0024
	 */
	struct FAkSegmentInfo
	{
	public:
		int32_t                                                    CurrentPosition;                                         // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PreEntryDuration;                                        // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActiveDuration;                                          // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PostExitDuration;                                        // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RemainingLookAheadTime;                                  // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeatDuration;                                            // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BarDuration;                                             // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GridDuration;                                            // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GridOffset;                                              // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkAudioSession
	 * Size -> 0x000C
	 */
	struct FAkAudioSession
	{
	public:
		EAkAudioSessionCategory                                    AudioSessionCategory;                                    // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_571Y[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		uint32_t                                                   AudioSessionCategoryOptions;                             // 0x0004(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAkAudioSessionMode                                        AudioSessionMode;                                        // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_035C[0x3];                                   // 0x0009(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct AkAudio.AkPS4AdvancedInitializationSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAkPS4AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint32_t                                                   ACPBatchBufferSize;                                      // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHardwareCodecLowLatencyMode;                          // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZHCI[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkPS5AdvancedInitializationSettings
	 * Size -> 0x0004 (FullSize[0x003C] - InheritedSize[0x0038])
	 */
	struct FAkPS5AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		bool                                                       UseHardwareCodecLowLatencyMode;                          // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVorbisHwAcceleration;                                   // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KF5P[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkPropertyToControl
	 * Size -> 0x0010
	 */
	struct FAkPropertyToControl
	{
	public:
		class FString                                              ItemProperty;                                            // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkPoly
	 * Size -> 0x0010
	 */
	struct FAkPoly
	{
	public:
		class UAkAcousticTexture*                                  Texture;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableSurface;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YNYT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkWindowsAdvancedInitializationSettings
	 * Size -> 0x000C (FullSize[0x0044] - InheritedSize[0x0038])
	 */
	struct FAkWindowsAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint32_t                                                   AudioAPI;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GlobalFocus;                                             // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHeadMountedDisplayAudioDevice;                        // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MG2E[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MaxSystemAudioObjects;                                   // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkXBoxOneApuHeapInitializationSettings
	 * Size -> 0x0008
	 */
	struct FAkXBoxOneApuHeapInitializationSettings
	{
	public:
		uint32_t                                                   CachedSize;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NonCachedSize;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkXBoxOneAdvancedInitializationSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAkXBoxOneAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint32_t                                                   ShapeDefaultPoolSize;                                    // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   MaximumNumberOfXMAVoices;                                // 0x003C(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHardwareCodecLowLatencyMode;                          // 0x003E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H9P1[0x1];                                   // 0x003F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkAudioEventTrackKey
	 * Size -> 0x0020
	 */
	struct FAkAudioEventTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G4UC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       AkAudioEvent;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
	 * Size -> 0x0014
	 */
	struct FMovieSceneTangentDataSerializationHelper
	{
	public:
		float                                                      ArriveTangent;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveTangent;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveTangentWeightMode                                TangentWeightMode;                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_89MM[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ArriveTangentWeight;                                     // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveTangentWeight;                                      // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
	 * Size -> 0x001C
	 */
	struct FMovieSceneFloatValueSerializationHelper
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveInterpMode                                       InterpMode;                                              // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveTangentMode                                      TangentMode;                                             // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y9Q3[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneTangentDataSerializationHelper           Tangent;                                                 // 0x0008(0x0014) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
	 * Size -> 0x0030
	 */
	struct FMovieSceneFloatChannelSerializationHelper
	{
	public:
		ERichCurveExtrapolation                                    PreInfinityExtrap;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveExtrapolation                                    PostInfinityExtrap;                                      // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2TAK[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            Times;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMovieSceneFloatValueSerializationHelper>    Values;                                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      DefaultValue;                                            // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasDefaultValue;                                        // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFCX[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AKWaapiJsonObject
	 * Size -> 0x0010
	 */
	struct FAKWaapiJsonObject
	{
	public:
		unsigned char                                              UnknownData_A5B0[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkWaapiSubscriptionId
	 * Size -> 0x0008
	 */
	struct FAkWaapiSubscriptionId
	{
	public:
		unsigned char                                              UnknownData_Y4DT[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
	 * Size -> 0x0001
	 */
	struct FAkAmbSoundCheckpointRecord
	{
	public:
		bool                                                       bCurrentlyPlaying;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkExternalSourceInfo
	 * Size -> 0x0028
	 */
	struct FAkExternalSourceInfo
	{
	public:
		class FString                                              ExternalSrcName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAkCodecId                                                 CodecID;                                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVD1[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiEventBase
	 * Size -> 0x0002
	 */
	struct FAkMidiEventBase
	{
	public:
		EAkMidiEventType                                           Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Chan;                                                    // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiProgramChange
	 * Size -> 0x0001 (FullSize[0x0003] - InheritedSize[0x0002])
	 */
	struct FAkMidiProgramChange : public FAkMidiEventBase
	{
	public:
		unsigned char                                              ProgramNum;                                              // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiChannelAftertouch
	 * Size -> 0x0001 (FullSize[0x0003] - InheritedSize[0x0002])
	 */
	struct FAkMidiChannelAftertouch : public FAkMidiEventBase
	{
	public:
		unsigned char                                              Value;                                                   // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiNoteAftertouch
	 * Size -> 0x0002 (FullSize[0x0004] - InheritedSize[0x0002])
	 */
	struct FAkMidiNoteAftertouch : public FAkMidiEventBase
	{
	public:
		unsigned char                                              Note;                                                    // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Value;                                                   // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiPitchBend
	 * Size -> 0x0006 (FullSize[0x0008] - InheritedSize[0x0002])
	 */
	struct FAkMidiPitchBend : public FAkMidiEventBase
	{
	public:
		unsigned char                                              ValueLsb;                                                // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ValueMsb;                                                // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FullValue;                                               // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiCc
	 * Size -> 0x0002 (FullSize[0x0004] - InheritedSize[0x0002])
	 */
	struct FAkMidiCc : public FAkMidiEventBase
	{
	public:
		EAkMidiCcValues                                            Cc;                                                      // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Value;                                                   // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiNoteOnOff
	 * Size -> 0x0002 (FullSize[0x0004] - InheritedSize[0x0002])
	 */
	struct FAkMidiNoteOnOff : public FAkMidiEventBase
	{
	public:
		unsigned char                                              Note;                                                    // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Velocity;                                                // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiGeneric
	 * Size -> 0x0002 (FullSize[0x0004] - InheritedSize[0x0002])
	 */
	struct FAkMidiGeneric : public FAkMidiEventBase
	{
	public:
		unsigned char                                              Param1;                                                  // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Param2;                                                  // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkChannelMask
	 * Size -> 0x0004
	 */
	struct FAkChannelMask
	{
	public:
		int32_t                                                    ChannelMask;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkCommunicationSettingsWithCommSelection
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FAkCommunicationSettingsWithCommSelection : public FAkCommunicationSettings
	{
	public:
		EAkCommSystem                                              CommunicationSystem;                                     // 0x0020(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FBUE[0x3];                                   // 0x0021(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_XOED[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkWaapiFieldNames
	 * Size -> 0x0010
	 */
	struct FAkWaapiFieldNames
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkWaapiUri
	 * Size -> 0x0010
	 */
	struct FAkWaapiUri
	{
	public:
		class FString                                              Uri;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UMovieSceneAkAudioEventSection*                      Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UMovieSceneAkAudioRTPCSection*                       Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
