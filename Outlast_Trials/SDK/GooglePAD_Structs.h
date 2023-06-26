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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum GooglePAD.EGooglePADCellularDataConfirmStatus
	 */
	enum class EGooglePADCellularDataConfirmStatus : uint8_t
	{
		AssetPack_CONFIRM_UNKNOWN       = 0,
		AssetPack_CONFIRM_PENDING       = 1,
		AssetPack_CONFIRM_USER_APPROVED = 2,
		AssetPack_CONFIRM_USER_CANCELED = 3,
		AssetPack_CONFIRM_MAX           = 4
	};

	/**
	 * Enum GooglePAD.EGooglePADStorageMethod
	 */
	enum class EGooglePADStorageMethod : uint8_t
	{
		AssetPack_STORAGE_FILES         = 0,
		AssetPack_STORAGE_APK           = 1,
		AssetPack_STORAGE_UNKNOWN       = 2,
		AssetPack_STORAGE_NOT_INSTALLED = 3,
		AssetPack_STORAGE_MAX           = 4
	};

	/**
	 * Enum GooglePAD.EGooglePADDownloadStatus
	 */
	enum class EGooglePADDownloadStatus : uint8_t
	{
		AssetPack_UNKNOWN            = 0,
		AssetPack_DOWNLOAD_PENDING   = 1,
		AssetPack_DOWNLOADING        = 2,
		AssetPack_TRANSFERRING       = 3,
		AssetPack_DOWNLOAD_COMPLETED = 4,
		AssetPack_DOWNLOAD_FAILED    = 5,
		AssetPack_DOWNLOAD_CANCELED  = 6,
		AssetPack_WAITING_FOR_WIFI   = 7,
		AssetPack_NOT_INSTALLED      = 8,
		AssetPack_INFO_PENDING       = 9,
		AssetPack_INFO_FAILED        = 10,
		AssetPack_REMOVAL_PENDING    = 11,
		AssetPack_REMOVAL_FAILED     = 12,
		AssetPack_MAX                = 13
	};

	/**
	 * Enum GooglePAD.EGooglePADErrorCode
	 */
	enum class EGooglePADErrorCode : uint8_t
	{
		AssetPack_NO_ERROR              = 0,
		AssetPack_APP_UNAVAILABLE       = 1,
		AssetPack_UNAVAILABLE           = 2,
		AssetPack_INVALID_REQUEST       = 3,
		AssetPack_DOWNLOAD_NOT_FOUND    = 4,
		AssetPack_API_NOT_AVAILABLE     = 5,
		AssetPack_NETWORK_ERROR         = 6,
		AssetPack_ACCESS_DENIED         = 7,
		AssetPack_INSUFFICIENT_STORAGE  = 8,
		AssetPack_PLAY_STORE_NOT_FOUND  = 9,
		AssetPack_NETWORK_UNRESTRICTED  = 10,
		AssetPack_INTERNAL_ERROR        = 11,
		AssetPack_INITIALIZATION_NEEDED = 12,
		AssetPack_INITIALIZATION_FAILED = 13,
		AssetPack_MAX                   = 14
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
