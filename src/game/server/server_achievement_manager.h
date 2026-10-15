// Reconstructed from DWARF by pahole; not original source.

// src/game/server/server_achievement_manager.h:24
class CPlayerAchievementState {
	CUtlMap<int, CBaseAchievement*, short unsigned int, bool (*)(int const&, int const&)> m_mapAchievement;  // +0x0
	float m_flLevelInitTime;  // +0xb8
	bool m_bDirty;  // +0xbc

	int m_nUserSlot;  // +0xf0

	uint64 m_ulSteamID;  // +0xf8
	CPlayerAchievementState(int, uint64);
	~CPlayerAchievementState();
	void Init(IAchievementMgr *);
	void Shutdown();
	void PrintAchievementStatus();
	void OnMapEvent(const char *);
	CBaseAchievement * GetAchievementByID(int);
	CBaseAchievement * GetAchievementByName(const char *);
	CBaseAchievement * GetAchievementByIndex(int);
	CBaseAchievement * GetAchievementByDisplayOrder(int);
	bool HasAchieved(const char *);
	void ClearAchievementData();
	uint64 GetSteamID();
	void Steam_OnGSStatsReceived(GSStatsReceived_t *);
	void Steam_OnGSStatsStored(GSStatsStored_t *);

	// sizeof = 336
};

// src/game/server/server_achievement_manager.h:65
class CServerAchievementManager : public CAutoGameSystem, public CGameEventListener, public IAchievementMgr {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	CUtlMap<int, CPlayerAchievementState*, short unsigned int, bool (*)(int const&, int const&)> m_mapPlayerAchievementState;  // +0x30
	bool m_bDirty;  // +0x58
	bool m_bCheatsEverOn;  // +0x59

	float m_flTimeLastUpload;  // +0x5c
	char m_szMap[260];  // +0x60
	typedef CAutoGameSystem BaseClass;
	CServerAchievementManager(const CServerAchievementManager &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CServerAchievementManager *);
	CServerAchievementManager();
	virtual ~CServerAchievementManager();
	virtual bool Init();
	virtual void Shutdown();
	virtual void GameInit(const EventGameInit_t &);
	virtual void PreSpawnGroupUnload(const EventPreSpawnGroupUnload_t &);
	virtual void Update(const EventClientUpdate_t &);
	virtual IAchievement * GetAchievementByIndex(int, int);
	virtual IAchievement * GetAchievementByDisplayOrder(int, int);
	virtual IAchievement * GetAwardByDisplayOrder(int, int);
	virtual CBaseAchievement * GetAchievementByID(int, int);
	virtual int GetAchievementCount(int);
	virtual void InitializeAchievements();
	virtual void AwardAchievement(int, int);
	virtual void OnMapEvent(const char *, int);
	virtual void SaveGlobalStateIfDirty();
	virtual bool HasAchieved(const char *, int);
	virtual const CUtlVector<int, CUtlMemory<int, int> > & GetAchievedDuringCurrentGame(int);
	virtual bool WereCheatsEverOn();
	virtual void SetDirty(bool, int);
	virtual bool CheckAchievementsEnabled();
	virtual const char * GetMapName();
	virtual bool UseClientside();
	virtual void SetProgressInSteam(CBaseAchievement *);
	virtual void PlayerConnected(CBaseMultiplayerPlayer *);
	virtual void PlayerDisconnected(CBaseMultiplayerPlayer *);
	virtual void CheckSignInState(bool);
	virtual bool IsCurrentMap(const char *);
	virtual void FireGameEvent(IGameEvent *);
	CBaseAchievement * GetAchievementByName(const char *, int);
	void ResetAchievement(int, int);
	void PrintAchievementStatus(int);
	virtual int GetPlayerID(CBaseMultiplayerPlayer *);
	void SaveGlobalState(int);
	CPlayerAchievementState * GetAchievementStateForPlayer(int);
	void UploadUserData(int);
	void UpdateAchievement(int, int, int);
	void PreRestoreSavedGame();
	void PostRestoreSavedGame();
	bool LoggedIntoSteam();
	void ResetAchievement_Internal(CBaseAchievement *);
	void OnAchievementEvent(int, int);
	virtual void OnKillEvent(CBaseEntity *, CBaseEntity *, CBaseEntity *, IGameEvent *);
	virtual void OnHurtEvent(CBaseEntity *, CBaseEntity *, CBaseEntity *, IGameEvent *);
	virtual bool AchievementStatePersistsAfterDisconnect();
	float GetTimeLastUpload();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[0] Init
	// vtable[2] Shutdown
	// vtable[3] GameInit
	// vtable[16] PreSpawnGroupUnload
	// vtable[22] Update
	// vtable[40] GetAchievementByIndex
	// vtable[41] GetAchievementByDisplayOrder
	// vtable[42] GetAwardByDisplayOrder
	// vtable[43] GetAchievementByID
	// vtable[44] GetAchievementCount
	// vtable[45] InitializeAchievements
	// vtable[46] AwardAchievement
	// vtable[47] OnMapEvent
	// vtable[48] SaveGlobalStateIfDirty
	// vtable[49] HasAchieved
	// vtable[50] GetAchievedDuringCurrentGame
	// vtable[51] WereCheatsEverOn
	// vtable[52] SetDirty
	// vtable[53] CheckAchievementsEnabled
	// vtable[54] GetMapName
	// vtable[55] UseClientside
	// vtable[56] SetProgressInSteam
	// vtable[57] PlayerConnected
	// vtable[58] PlayerDisconnected
	// vtable[59] CheckSignInState
	// vtable[60] IsCurrentMap
	// vtable[61] FireGameEvent
	// vtable[62] GetPlayerID
	// vtable[63] OnKillEvent
	// vtable[64] OnHurtEvent
	// vtable[65] AchievementStatePersistsAfterDisconnect
	// sizeof = 360
};
