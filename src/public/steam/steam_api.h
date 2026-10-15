// Reconstructed from DWARF by pahole; not original source.

// src/public/steam/steam_api.h:131
class CSteamAPIContext {
private:

	CSteamAPIContext();
	void Clear();
	bool Init();
	ISteamClient * SteamClient();
	ISteamUser * SteamUser();
	ISteamFriends * SteamFriends();
	ISteamUtils * SteamUtils();
	ISteamMatchmaking * SteamMatchmaking();
	ISteamUserStats * SteamUserStats();
	ISteamApps * SteamApps();
	ISteamMatchmakingServers * SteamMatchmakingServers();
	ISteamNetworking * SteamNetworking();
	ISteamRemoteStorage * SteamRemoteStorage();
	ISteamScreenshots * SteamScreenshots();
	ISteamHTTP * SteamHTTP();
	ISteamUnifiedMessages * SteamUnifiedMessages();
	ISteamController * SteamController();
	ISteamUGC * SteamUGC();
	ISteamAppList * SteamAppList();
	ISteamMusic * SteamMusic();
	ISteamMusicRemote * SteamMusicRemote();
	ISteamHTMLSurface * SteamHTMLSurface();
	ISteamInventory * SteamInventory();
	ISteamVideo * SteamVideo();

	// sizeof = 168
};

// src/public/steam/steam_api.h:238
class CCallbackBase {
	enum {
		k_ECallbackFlagsRegistered = 0x1,
		k_ECallbackFlagsGameServer = 0x2,
	};

	int ()() * * _vptr.CCallbackBase;  // +0x0
protected:

	uint8 m_nCallbackFlags;  // +0x8

	int m_iCallback;  // +0xc
	CCallbackBase();
	virtual void Run(void *);
	virtual void Run(void *, bool, SteamAPICall_t);
	int GetICallback();
	virtual int GetCallbackSizeBytes();

private:

	CCallbackBase(const CCallbackBase &);
	CCallbackBase & operator=(const CCallbackBase &);

	// vtable[0] Run
	// vtable[1] Run
	// vtable[2] GetCallbackSizeBytes
	// sizeof = 16
};
