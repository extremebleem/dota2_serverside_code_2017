// Reconstructed from DWARF by pahole; not original source.

// src/public/steam/isteamugc.h:160
struct SteamUGCDetails_t {
	PublishedFileId_t m_nPublishedFileId;  // +0x0
	AppId_t m_nCreatorAppID;  // +0x10
	AppId_t m_nConsumerAppID;  // +0x14
	char m_rgchTitle[129];  // +0x18
	char m_rgchDescription[8000];  // +0x99

	uint64 m_ulSteamIDOwner;  // +0x1fdc
	uint32 m_rtimeCreated;  // +0x1fe4
	uint32 m_rtimeUpdated;  // +0x1fe8
	uint32 m_rtimeAddedToUserList;  // +0x1fec
	bool m_bBanned;  // +0x1ff4
	bool m_bAcceptedForUse;  // +0x1ff5
	bool m_bTagsTruncated;  // +0x1ff6
	char m_rgchTags[1025];  // +0x1ff7
	UGCHandle_t m_hFile;  // +0x23f8
	UGCHandle_t m_hPreviewFile;  // +0x2400
	char m_pchFileName[260];  // +0x2408
	int32 m_nFileSize;  // +0x250c
	int32 m_nPreviewFileSize;  // +0x2510
	char m_rgchURL[256];  // +0x2514
	uint32 m_unVotesUp;  // +0x2614
	uint32 m_unVotesDown;  // +0x2618
	float m_flScore;  // +0x261c
	uint32 m_unNumChildren;  // +0x2620

	// sizeof = 9764
};

// src/public/steam/isteamugc.h:330
struct SteamUGCQueryCompleted_t {
	enum {
		k_iCallback = 0xd49,
	};

	UGCQueryHandle_t m_handle;  // +0x0
	uint32 m_unNumResultsReturned;  // +0xc
	uint32 m_unTotalMatchingResults;  // +0x10
	bool m_bCachedData;  // +0x14

	// sizeof = 24
};

// src/public/steam/isteamugc.h:389
struct DownloadItemResult_t {
	enum {
		k_iCallback = 0xd4e,
	};

	AppId_t m_unAppID;  // +0x0
	PublishedFileId_t m_nPublishedFileId;  // +0x4

	// sizeof = 16
} __attribute__((__packed__));
