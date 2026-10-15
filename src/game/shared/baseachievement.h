// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/baseachievement.h:28
class CBaseAchievement : public CGameEventListener, public IAchievement {
public:

protected:

	const char * m_pszName;  // +0x18
	int m_iAchievementID;  // +0x20
	int m_iFlags;  // +0x24
	int m_iGoal;  // +0x28
	int m_iProgressMsgIncrement;  // +0x2c
	int m_iProgressMsgMinimum;  // +0x30
	int m_iPointValue;  // +0x34
	bool m_bHideUntilAchieved;  // +0x38
	bool m_bStoreProgressInSteam;  // +0x39

	const char * m_pInflictorClassNameFilter;  // +0x40
	const char * m_pInflictorEntityNameFilter;  // +0x48
	const char * m_pVictimClassNameFilter;  // +0x50
	const char * m_pAttackerClassNameFilter;  // +0x58
	const char * m_pMapNameFilter;  // +0x60
	const char * m_pGameDirFilter;  // +0x68
	const char * * m_pszComponentNames;  // +0x70
	const char * * m_pszComponentDisplayNames;  // +0x78
	int m_iNumComponents;  // +0x80

	const char * m_pszComponentPrefix;  // +0x88
	int m_iComponentPrefixLen;  // +0x90
	bool m_bAchieved;  // +0x94

	int m_iCount;  // +0x98
	int m_iProgressShown;  // +0x9c
	uint64 m_iComponentBits;  // +0xa0
	int m_nUserSlot;  // +0xb0
	int m_iDisplayOrder;  // +0xb4
	bool m_bShowOnHUD;  // +0xb8

	int m_iAssetAwardID;  // +0xbc

	static datamap_t m_DataMap;
	CBaseAchievement(CBaseAchievement &);
	CBaseAchievement(const CBaseAchievement &);
	CBaseAchievement();
	virtual void Init();
	virtual void ListenForEvents();
	virtual void Event_EntityKilled(CBaseEntity *, CBaseEntity *, CBaseEntity *, IGameEvent *);
	virtual void Event_EntityHurt(CBaseEntity *, CBaseEntity *, CBaseEntity *, IGameEvent *);
	void SetAchievementManager(IAchievementMgr *);
	virtual int GetAchievementID();
	void SetAchievementID(int);
	void SetName(const char *);
	virtual const char * GetName();
	void SetFlags(int);
	virtual int GetFlags();
	void SetGoal(int);
	virtual int GetGoal();
	void SetGameDirFilter(const char *);
	const char * GetGameDirFilter();
	bool HasComponents();
	void SetPointValue(int);
	virtual int GetPointValue();
	virtual bool ShouldHideUntilAchieved();
	void SetHideUntilAchieved(bool);
	void SetStoreProgressInSteam(bool);
	bool StoreProgressInSteam();
	virtual bool ShouldShowProgressNotification();
	virtual void OnPlayerStatsUpdate();
	virtual bool ShouldSaveWithGame();
	bool ShouldSaveGlobal();
	virtual void PreRestoreSavedGame();
	virtual void PostRestoreSavedGame();
	void SetCount(int);
	virtual int GetCount();
	void SetProgressShown(int);
	int GetProgressShown();
	virtual bool IsAchieved();
	virtual bool IsActive();
	virtual bool IsAvailable();
	void SetAchieved(bool);
	virtual void CheckAssetAwards(int);
	virtual uint64 GetComponentBits();
	virtual int GetNumComponents();
	virtual const char * GetComponentDisplayString(int);
	void SetComponentBits(uint64);
	int GetNumComponentBitsSet();
	void OnComponentEvent(const char *);
	void EnsureComponentBitSetAndEvaluate(int);
	void EvaluateIsAlreadyAchieved();
	virtual void OnMapEvent(const char *);
	virtual void PrintAdditionalStatus();
	virtual void OnSteamUserStatsStored();
	virtual void UpdateAchievement(int);
	virtual bool ShouldShowOnHUD();
	virtual void SetShowOnHUD(bool);
	virtual void SetUserSlot(int);
	virtual int GetUserSlot();
	virtual void ClearAchievementData();
	virtual const char * GetIconPath();
	void SetDisplayOrder(int);
	virtual int GetDisplayOrder();
	virtual void ReadProgress(IPlayerLocal *);
	virtual bool WriteProgress(IPlayerLocal *);
	void SetAssetAward(const char *);
	void SetAssetAwardID(int);
	int GetAssetAwardID();
	bool IsAssetAward();
	virtual bool CheckAchievementsEnabled();
	const char * GetMapNameFilter();
	const char * GetVictimClassNameFilter();
	const char * GetInflictorClassNameFilter();
	const char * GetAttackerClassNameFilter();
	const char * GetInflictorEntityNameFilter();
	const char * GetComponentPrefix();
	int GetComponentPrefixLength();
	virtual void FireGameEvent(IGameEvent *);
	virtual void FireGameEvent_Internal(IGameEvent *);
	void SetVictimFilter(const char *);
	void SetAttackerFilter(const char *);
	void SetInflictorFilter(const char *);
	void SetInflictorEntityNameFilter(const char *);
	void SetMapNameFilter(const char *);
	void SetComponentPrefix(const char *);
	virtual void IncrementCount();
	void EvaluateNewAchievement();
	void AwardAchievement();
	void ShowProgressNotification();
	void HandleProgressUpdate();
	virtual void CalcProgressMsgIncrement();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CBaseAchievement();

	// vtable[3] Init
	// vtable[4] ListenForEvents
	// vtable[5] Event_EntityKilled
	// vtable[6] Event_EntityHurt
	// vtable[7] GetAchievementID
	// vtable[8] GetName
	// vtable[9] GetFlags
	// vtable[10] GetGoal
	// vtable[11] GetPointValue
	// vtable[12] ShouldHideUntilAchieved
	// vtable[13] ShouldShowProgressNotification
	// vtable[14] OnPlayerStatsUpdate
	// vtable[15] ShouldSaveWithGame
	// vtable[16] PreRestoreSavedGame
	// vtable[17] PostRestoreSavedGame
	// vtable[18] GetCount
	// vtable[19] IsAchieved
	// vtable[20] IsActive
	// vtable[21] IsAvailable
	// vtable[22] CheckAssetAwards
	// vtable[23] GetComponentBits
	// vtable[24] GetNumComponents
	// vtable[25] GetComponentDisplayString
	// vtable[26] OnMapEvent
	// vtable[27] PrintAdditionalStatus
	// vtable[28] OnSteamUserStatsStored
	// vtable[29] UpdateAchievement
	// vtable[30] ShouldShowOnHUD
	// vtable[31] SetShowOnHUD
	// vtable[32] SetUserSlot
	// vtable[33] GetUserSlot
	// vtable[34] ClearAchievementData
	// vtable[35] GetIconPath
	// vtable[36] GetDisplayOrder
	// vtable[37] ReadProgress
	// vtable[38] WriteProgress
	// vtable[39] CheckAchievementsEnabled
	// vtable[2] FireGameEvent
	// vtable[40] FireGameEvent_Internal
	// vtable[41] IncrementCount
	// vtable[42] CalcProgressMsgIncrement
	// vtable[43] GetDataDescMap
	// sizeof = 192
};

// src/game/shared/baseachievement.h:167
class CFailableAchievement : public CBaseAchievement {
public:

protected:

	bool m_bActivated;  // +0xc0
	bool m_bFailed;  // +0xc1

	static datamap_t m_DataMap;
	CFailableAchievement(CFailableAchievement &);
	CFailableAchievement(const CFailableAchievement &);
	CFailableAchievement();
	void SetFailed();
	virtual bool ShouldSaveWithGame();
	virtual void PreRestoreSavedGame();
	virtual void PostRestoreSavedGame();
	virtual bool IsAchieved();
	virtual bool IsActive();
	bool IsFailed();
	virtual void OnMapEvent(const char *);
	virtual void OnActivationEvent();
	virtual void OnEvaluationEvent();
	virtual const char * GetActivationEventName();
	virtual const char * GetEvaluationEventName();
	void Activate();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual ~CFailableAchievement();

	// vtable[15] ShouldSaveWithGame
	// vtable[16] PreRestoreSavedGame
	// vtable[17] PostRestoreSavedGame
	// vtable[19] IsAchieved
	// vtable[20] IsActive
	// vtable[26] OnMapEvent
	// vtable[44] OnActivationEvent
	// vtable[45] OnEvaluationEvent
	// vtable[46] GetActivationEventName
	// vtable[47] GetEvaluationEventName
	// sizeof = 200
};

// src/game/shared/baseachievement.h:208
class CAchievement_AchievedCount : public CBaseAchievement {
public:

private:

	int m_iNumRequired;  // +0xc0
	int m_iLowRange;  // +0xc4
	int m_iHighRange;  // +0xc8
	CAchievement_AchievedCount();
	virtual void Init();
	virtual void OnSteamUserStatsStored();

protected:

	void SetAchievementsRequired(int, int, int);
	virtual ~CAchievement_AchievedCount();

	// vtable[3] Init
	// vtable[28] OnSteamUserStatsStored
	// sizeof = 208
};

// src/game/shared/baseachievement.h:228
class CBaseAchievementHelper {
	achievementCreateFunc m_pfnCreate;  // +0x0

	static CBaseAchievementHelper * s_pFirst;
	CBaseAchievementHelper(achievementCreateFunc);

	// sizeof = 16
};
