// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextbotmanager.h:18
class NextBotManager {
	struct DebugFilter {
		char name[128];  // +0x4
		DebugFilter();

		// sizeof = 132
	};
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.NextBotManager;  // +0x0
protected:

	int m_iUpdateTickrate;  // +0x30

	double m_CurUpdateStartTime;  // +0x38
	double m_SumFrameTime;  // +0x40
	unsigned int m_debugType;  // +0x48

	NextBotManager(const NextBotManager &);
	NextBotManager();
	virtual ~NextBotManager();
	void Reset();
	void Update();
	bool ShouldUpdateInternal(INextBot *);
	bool ShouldUpdate(INextBot *);
	void NotifyBeginUpdate(INextBot *);
	void NotifyEndUpdate(INextBot *);
	int GetNextBotCount();
	void CollectAllBots(CUtlVector<INextBot*, CUtlMemory<INextBot*, int> > *);
	void DeleteAll(const char *);
	void DeleteAllByTeamIndex(int);
	void SetLodManager(CNextbotLodManager *);
	CNextbotLodManager * GetLodManager();
	void OnMapLoaded();
	void OnRoundRestart();
	void OnBeginChangeLevel();
	void OnKilled(CBaseCombatCharacter *, const CTakeDamageInfo &);
	void OnSound(CBaseEntity *, const Vector &, KeyValues *);
	void OnSpokeConcept(CBaseCombatCharacter *, AIConcept_t, AI_Response *);
	void OnWeaponFired(CBaseCombatCharacter *, CBaseCombatWeapon *);
	bool IsDebugging(unsigned int);
	void SetDebugTypes(NextBotDebugType);
	void DebugFilterAdd(CEntityIndex);
	void DebugFilterAdd(const char *);
	void DebugFilterRemove(CEntityIndex);
	void DebugFilterRemove(const char *);
	void DebugFilterClear();
	bool IsDebugFilterMatch(const INextBot *);
	void Select(INextBot *);
	void DeselectAll();
	INextBot * GetSelected();
	INextBot * GetBotUnderCrosshair(CBasePlayer *);
	int GetUpdateTickrate();
	int Register(INextBot *);
	void UnRegister(INextBot *);
	bool ForEachBot<CSendBotCommand>(CSendBotCommand &);
	bool ForEachBot<NextBotApproacher>(NextBotApproacher &);
	bool ForEachBot<NextBotKilledNotifyScan>(NextBotKilledNotifyScan &);
	bool ForEachBot<NextBotSoundNotifyScan>(NextBotSoundNotifyScan &);
	bool ForEachBot<NextBotResponseNotifyScan>(NextBotResponseNotifyScan &);
	bool ForEachBot<NextBotWeaponFiredNotifyScan>(NextBotWeaponFiredNotifyScan &);
	bool ForEachBot<NextBotDestroyer>(NextBotDestroyer &);
	bool ForEachCombatCharacter<TargetScan>(TargetScan &);

	// sizeof = 120
};

// src/game/server/nextbot_s1/nextbotmanager.h:249
class NextBotDestroyer {
	int m_nTeam;  // +0x0
	NextBotDestroyer(int);
	bool operator()(INextBot *);

	// sizeof = 4
};
