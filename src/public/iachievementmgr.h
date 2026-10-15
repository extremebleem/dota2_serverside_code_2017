// Reconstructed from DWARF by pahole; not original source.

// src/public/iachievementmgr.h:20
class IAchievement {
	int ()() * * _vptr.IAchievement;  // +0x0
	IAchievement(IAchievement &);
	IAchievement(const IAchievement &);
	~IAchievement();
	IAchievement();
	virtual int GetAchievementID();
	virtual const char * GetName();
	virtual int GetFlags();
	virtual int GetGoal();
	virtual int GetCount();
	virtual bool IsAchieved();
	virtual bool IsAvailable();
	virtual int GetPointValue();
	virtual bool ShouldSaveWithGame();
	virtual bool ShouldHideUntilAchieved();
	virtual bool ShouldShowOnHUD();
	virtual void SetShowOnHUD(bool);
	virtual const char * GetIconPath();
	virtual int GetDisplayOrder();
	virtual int GetNumComponents();
	virtual const char * GetComponentDisplayString(int);
	virtual uint64 GetComponentBits();

	// vtable[0] GetAchievementID
	// vtable[1] GetName
	// vtable[2] GetFlags
	// vtable[3] GetGoal
	// vtable[4] GetCount
	// vtable[5] IsAchieved
	// vtable[6] IsAvailable
	// vtable[7] GetPointValue
	// vtable[8] ShouldSaveWithGame
	// vtable[9] ShouldHideUntilAchieved
	// vtable[10] ShouldShowOnHUD
	// vtable[11] SetShowOnHUD
	// vtable[12] GetIconPath
	// vtable[13] GetDisplayOrder
	// vtable[14] GetNumComponents
	// vtable[15] GetComponentDisplayString
	// vtable[16] GetComponentBits
	// sizeof = 8
};

// src/public/iachievementmgr.h:47
class IAchievementMgr {
	int ()() * * _vptr.IAchievementMgr;  // +0x0
	IAchievementMgr(IAchievementMgr &);
	IAchievementMgr(const IAchievementMgr &);
	~IAchievementMgr();
	IAchievementMgr();
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

	// vtable[0] GetAchievementByIndex
	// vtable[1] GetAchievementByDisplayOrder
	// vtable[2] GetAwardByDisplayOrder
	// vtable[3] GetAchievementByID
	// vtable[4] GetAchievementCount
	// vtable[5] InitializeAchievements
	// vtable[6] AwardAchievement
	// vtable[7] OnMapEvent
	// vtable[8] SaveGlobalStateIfDirty
	// vtable[9] HasAchieved
	// vtable[10] GetAchievedDuringCurrentGame
	// vtable[11] WereCheatsEverOn
	// vtable[12] SetDirty
	// vtable[13] CheckAchievementsEnabled
	// vtable[14] GetMapName
	// vtable[15] UseClientside
	// vtable[16] SetProgressInSteam
	// vtable[17] PlayerConnected
	// vtable[18] PlayerDisconnected
	// vtable[19] CheckSignInState
	// vtable[20] IsCurrentMap
	// sizeof = 8
};
