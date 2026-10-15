// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gamestats.h:25
struct StatsBufferRecord_t {
	float m_flFrameRate;  // +0x0
	float m_flServerPing;  // +0x4

	// sizeof = 8
};

// src/game/shared/gamestats.h:58
struct BasicGameStatsRecord_t {
	int m_nCount;  // +0x0
	int m_nSeconds;  // +0x4
	int m_nCommentary;  // +0x8
	int m_nHDR;  // +0xc
	int m_nCaptions;  // +0x10
	int m_nSkill[3];  // +0x14
	bool m_bSteam;  // +0x20
	bool m_bCyberCafe;  // +0x21

	int m_nDeaths;  // +0x24
	BasicGameStatsRecord_t();
	void Clear();
	void SaveToBuffer(CUtlBuffer &);
	bool ParseFromBuffer(CUtlBuffer &, int);

	// sizeof = 40
};

// src/game/shared/gamestats.h:93
struct BasicGameStats_t {
	int m_nSecondsToCompleteGame;  // +0x0

	bool m_bSteam;  // +0x58
	bool m_bCyberCafe;  // +0x59

	int m_nDXLevel;  // +0x5c
	BasicGameStats_t();
	void Clear();
	void SaveToBuffer(CUtlBuffer &);
	bool ParseFromBuffer(CUtlBuffer &, int);
	BasicGameStatsRecord_t * FindOrAddRecordForMap(const char *);
	~BasicGameStats_t();

	// sizeof = 96
};

// src/game/shared/gamestats.h:123
class CBaseGameStats {
	int ()() * * _vptr.CBaseGameStats;  // +0x0

	bool m_bLogging:1;  // +0x68:0
	bool m_bLoggingToFile:1;  // +0x68:1
	CBaseGameStats(CBaseGameStats &);
	CBaseGameStats(const CBaseGameStats &);
	CBaseGameStats();
	virtual bool UseOldFormat();
	virtual bool AddDataForSend(KeyValues *, StatSendType_t);
	virtual bool ShouldSendDataOnLevelShutdown();
	virtual bool ShouldSendDataOnAppShutdown();
	virtual void Event_Init();
	virtual void Event_Shutdown();
	virtual void Event_MapChange(const char *, const char *);
	virtual void Event_LevelInit();
	virtual void Event_LevelShutdown(float);
	virtual void Event_SaveGame();
	virtual void Event_LoadGame();
	void StatsLog(const char *, ...);
	virtual CBaseGameStats * OnInit(CBaseGameStats *, const char *);
	virtual void Clear();
	virtual bool StatTrackingEnabledForMod();
	bool StatTrackingAllowed();
	virtual bool HaveValidData();
	virtual bool ShouldTrackStandardStats();
	virtual const char * GetStatSaveFileName();
	virtual const char * GetStatUploadRegistryKeyName();
	const char * GetUserPseudoUniqueID();
	virtual bool UserPlayedAllTheMaps();
	virtual void Event_PlayerKilled(CBasePlayer *, const CTakeDamageInfo &);
	virtual void Event_PlayerConnected(CBasePlayer *);
	virtual void Event_PlayerDisconnected(CBasePlayer *);
	virtual void Event_PlayerDamage(CBasePlayer *, const CTakeDamageInfo &);
	virtual void Event_PlayerKilledOther(CBasePlayer *, CBaseEntity *, const CTakeDamageInfo &);
	virtual void Event_Credits();
	virtual void Event_Commentary();
	virtual void Event_CrateSmashed();
	virtual void Event_Punted(CBaseEntity *);
	virtual void Event_PlayerTraveled(CBasePlayer *, float, bool, bool);
	virtual void Event_WeaponFired(CBasePlayer *, bool, const char *);
	virtual void Event_WeaponHit(CBasePlayer *, bool, const char *, const CTakeDamageInfo &);
	virtual void Event_FlippedVehicle(CBasePlayer *, CPropVehicleDriveable *);
	virtual void Event_PreSaveGameLoaded(const char *, bool);
	virtual void Event_PlayerEnteredGodMode(CBasePlayer *);
	virtual void Event_PlayerEnteredNoClip(CBasePlayer *);
	virtual void Event_DecrementPlayerEnteredNoClip(CBasePlayer *);
	virtual void Event_IncrementCountedStatistic(const Vector &, const char *, float);
	virtual void AppendCustomDataToSaveBuffer(CUtlBuffer &);
	virtual void LoadCustomDataFromBuffer(CUtlBuffer &);
	virtual void LoadingEvent_PlayerIDDifferentThanLoadedStats();
	virtual bool LoadFromFile();
	virtual bool SaveToFileNOW(bool);
	virtual bool UploadStatsFileNOW();
	bool AppendLump(int, CUtlBuffer &, short unsigned int, short unsigned int, size_t, void *);
	bool GetLumpHeader(int, CUtlBuffer &, short unsigned int &, short unsigned int &, bool);
	void LoadLump(CUtlBuffer &, short unsigned int, size_t, void *);
	virtual bool AutoSave_OnInit();
	virtual bool AutoSave_OnShutdown();
	virtual bool AutoSave_OnMapChange();
	virtual bool AutoSave_OnLevelInit();
	virtual bool AutoSave_OnLevelShutdown();
	virtual bool AutoUpload_OnInit();
	virtual bool AutoUpload_OnShutdown();
	virtual bool AutoUpload_OnMapChange();
	virtual bool AutoUpload_OnLevelInit();
	virtual bool AutoUpload_OnLevelShutdown();
	void SetSteamStatistic(bool);
	void SetCyberCafeStatistic(bool);
	void SetHDRStatistic(bool);
	void SetCaptionsStatistic(bool);
	void SetSkillStatistic(int);
	void SetDXLevelStatistic(int);
	~CBaseGameStats();

	// vtable[0] UseOldFormat
	// vtable[1] AddDataForSend
	// vtable[2] ShouldSendDataOnLevelShutdown
	// vtable[3] ShouldSendDataOnAppShutdown
	// vtable[4] Event_Init
	// vtable[5] Event_Shutdown
	// vtable[6] Event_MapChange
	// vtable[7] Event_LevelInit
	// vtable[8] Event_LevelShutdown
	// vtable[9] Event_SaveGame
	// vtable[10] Event_LoadGame
	// vtable[11] OnInit
	// vtable[12] Clear
	// vtable[13] StatTrackingEnabledForMod
	// vtable[14] HaveValidData
	// vtable[15] ShouldTrackStandardStats
	// vtable[16] GetStatSaveFileName
	// vtable[17] GetStatUploadRegistryKeyName
	// vtable[18] UserPlayedAllTheMaps
	// vtable[19] Event_PlayerKilled
	// vtable[20] Event_PlayerConnected
	// vtable[21] Event_PlayerDisconnected
	// vtable[22] Event_PlayerDamage
	// vtable[23] Event_PlayerKilledOther
	// vtable[24] Event_Credits
	// vtable[25] Event_Commentary
	// vtable[26] Event_CrateSmashed
	// vtable[27] Event_Punted
	// vtable[28] Event_PlayerTraveled
	// vtable[29] Event_WeaponFired
	// vtable[30] Event_WeaponHit
	// vtable[31] Event_FlippedVehicle
	// vtable[32] Event_PreSaveGameLoaded
	// vtable[33] Event_PlayerEnteredGodMode
	// vtable[34] Event_PlayerEnteredNoClip
	// vtable[35] Event_DecrementPlayerEnteredNoClip
	// vtable[36] Event_IncrementCountedStatistic
	// vtable[37] AppendCustomDataToSaveBuffer
	// vtable[38] LoadCustomDataFromBuffer
	// vtable[39] LoadingEvent_PlayerIDDifferentThanLoadedStats
	// vtable[40] LoadFromFile
	// vtable[41] SaveToFileNOW
	// vtable[42] UploadStatsFileNOW
	// vtable[43] AutoSave_OnInit
	// vtable[44] AutoSave_OnShutdown
	// vtable[45] AutoSave_OnMapChange
	// vtable[46] AutoSave_OnLevelInit
	// vtable[47] AutoSave_OnLevelShutdown
	// vtable[48] AutoUpload_OnInit
	// vtable[49] AutoUpload_OnShutdown
	// vtable[50] AutoUpload_OnMapChange
	// vtable[51] AutoUpload_OnLevelInit
	// vtable[52] AutoUpload_OnLevelShutdown
	// sizeof = 112
};
