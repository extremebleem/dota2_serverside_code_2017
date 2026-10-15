// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/steamworks_gamestats.h:26
struct ClientServerSession_t {
	uint64 m_ServerSessionID;  // +0x0
	RTime32 m_ConnectTime;  // +0x8
	RTime32 m_DisconnectTime;  // +0xc
	void Reset();

	// sizeof = 16
};

// src/game/shared/steamworks_gamestats.h:42
class CSteamWorksGameStatsUploader : public CAutoGameSystem, public CGameEventListener {
public:

protected:

	uint64 m_UserID;  // +0x88
	uint32 m_iAppID;  // +0x90
	uint32 m_iServerIP;  // +0x94
	char m_pzServerIP[260];  // +0x98
	char m_pzMapStart[260];  // +0x19c
	char m_pzHostName[260];  // +0x2a0
	RTime32 m_StartTime;  // +0x3a4
	RTime32 m_EndTime;  // +0x3a8
	bool m_bPassword;  // +0x3ac

	uint64 m_SessionID;  // +0x3b0
	bool m_SessionIDRequestUnsent;  // +0x3b8
	bool m_SessionIDRequestPending;  // +0x3b9
	bool m_bCollectingAny;  // +0x3ba
	bool m_bCollectingDetails;  // +0x3bb
	bool m_ServiceTicking;  // +0x3bc

	float m_LastServiceTick;  // +0x3c0
	bool m_UploadedStats;  // +0x3c4

	KeyValueStatList m_StatsToSend;  // +0x3c8
	int m_iServerConnectCount;  // +0x3f0

	CSteamWorksGameStatsUploader(const CSteamWorksGameStatsUploader &);
	void Steam_OnSteamSessionInfoIssued(GameStatsSessionIssued_t *, bool);
	void Steam_OnSteamSessionInfoClosed(GameStatsSessionClosed_t *, bool);
	virtual void FrameUpdatePreEntityThink(const EventServerPreEntityThink_t &);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual void PreClientUpdate(const EventServerPreClientUpdate_t &);
	void StartSession();
	virtual void EndSession();
	virtual void WriteSessionRow();
	int GetNumServerConnects();
	bool IsCollectingDetails();
	bool IsCollectingAnyData();
	CSteamWorksGameStatsUploader(const char *, const char *);
	virtual ~CSteamWorksGameStatsUploader();
	virtual bool Init();
	virtual void PostInit();
	virtual void Shutdown();
	virtual void SaveGame(const EventSaveGame_t &);
	virtual void RestoreGame(const EventRestoreGame_t &);
	virtual void SafeRemoveIfDesired();
	virtual bool IsPerFrame();
	virtual void FireGameEvent(IGameEvent *);
	EResult AddStatsForUpload(KeyValues *, int, bool);
	time_t GetTimeSinceEpoch();
	void FlushStats();
	uint32 GetServerIP();
	const char * GetHostName();
	bool IsPassworded();
	RTime32 GetStartTime();
	RTime32 GetEndTime();
	void ClearSessionID();
	virtual EGameStatsAccountType GetGameStatsAccountType();
	bool AccessToSteamAPI();
	ISteamGameStats * GetInterface();
	virtual void AddSessionIDsToTable(int, int);
	void UploadCvars();
	virtual void Reset();
	bool VerifyInterface();
	int GetHumanCountInGame();
	EResult RequestSessionID();
	EResult WriteBoolToTable(int, uint64, const char *);
	EResult WriteIntToTable(int, uint64, const char *);
	EResult WriteInt64ToTable(uint64, uint64, const char *);
	EResult WriteFloatToTable(float, uint64, const char *);
	EResult WriteStringToTable(const char *, uint64, const char *);
	EResult ParseKeyValuesAndSendStats(KeyValues *, int);
	void ServerAddressToInt();

	// vtable[24] FrameUpdatePreEntityThink
	// vtable[25] FrameUpdatePostEntityThink
	// vtable[26] PreClientUpdate
	// vtable[40] EndSession
	// vtable[41] WriteSessionRow
	// vtable[0] Init
	// vtable[1] PostInit
	// vtable[2] Shutdown
	// vtable[31] SaveGame
	// vtable[32] RestoreGame
	// vtable[42] SafeRemoveIfDesired
	// vtable[43] IsPerFrame
	// vtable[44] FireGameEvent
	// vtable[45] GetGameStatsAccountType
	// vtable[46] AddSessionIDsToTable
	// vtable[47] Reset
	// sizeof = 1032
};
