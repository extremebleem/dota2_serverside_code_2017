// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_combatlog_record.h:27
struct sCombatLogUsageCount {
	int iAbility;  // +0x0
	int iLevel;  // +0x4
	int iCount;  // +0x8
	sCombatLogUsageCount(int, int, int);

	// sizeof = 12
};

// src/game/shared/dota/dota_combatlog_record.h:36
struct sFightInfo {
	int iFirstEntry;  // +0x0
	int iLastEntry;  // +0x4
	int involvedHeroNames[24];  // +0x8
	int deathHeroNames[24];  // +0x68
	float fStartTime;  // +0xc8
	float fEndTime;  // +0xcc
	sFightInfo();
	bool HasInvolvedHero(int);
	void AddInvolvedHero(int);
	int NumInvolvedHeroes();
	bool HasHeroDeath(int);
	void AddHeroDeath(int);

	// sizeof = 208
};

// src/game/shared/dota/dota_combatlog_record.h:142
class DOTA_CombatLog_Record : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	FileHandle_t m_hCombatLog;  // +0x18
	float m_fOpenTime;  // +0x20

	static INetworkStringTable * sm_pStringTableCombatLogNames;
	bool m_bScanPending;  // +0x58

	float m_fTimeDelta;  // +0xa8
	typedef CAutoGameSystem BaseClass;
	DOTA_CombatLog_Record(const DOTA_CombatLog_Record &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(DOTA_CombatLog_Record *);
	DOTA_CombatLog_Record();
	virtual ~DOTA_CombatLog_Record();
	virtual bool Init();
	void Clear();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void Update(const EventClientUpdate_t &);
	void InitializeStringTable();
	void ShowCombatLog(const char *, const char *, int, int);
	void HideCombatLog();
	bool IsLogPanelVisible();
	void Refresh(float);
	void ShowDeathLog(float);
	bool GameModeSupportsFightRecap();
	Color GetColorForName(const char *);
	const char * GetName(int);
	int FindNameIndex(const char *);
	void HandleCombatLogData(const CMsgDOTACombatLogEntry &);
	void ScanForFights();
	int NumFights();
	const sFightInfo * GetFightInfo(int);
	int GetGoldDelta(int, int, int);
	int GetXPDelta(int, int, int);
	int GetDamageDone(int, int, int, int, const int *, int);
	void GetItemsUsed(int, int, int, CUtlVector<sCombatLogUsageCount, CUtlMemory<sCombatLogUsageCount, int> > *);
	void GetAbilitiesUsed(int, int, int, CUtlVector<sCombatLogUsageCount, CUtlMemory<sCombatLogUsageCount, int> > *);
	bool UsedBuyback(int, int, int);
	int AddEntry(const CMsgDOTACombatLogEntry &);
	int NumEntries();
	int32 GetEntryType(int);
	void GetEntry(int, CMsgDOTACombatLogEntry *);
	uint32 GetAllocSize();
	INetworkStringTable * GetStringTable();

private:

	int FindTeamNumberForName(int);
	int FindPlayerIDForName(int);
	int FindNameForPlayerID(int);
	int GetAttackingHero(const CMsgDOTACombatLogEntry &);
	int GetTargetHero(const CMsgDOTACombatLogEntry &);
	int FindEventTimeDelta(int, float);
	void ProcessEntry(int);
	void GetInflictorForAttacker(int, int, int, int, CUtlVector<sCombatLogUsageCount, CUtlMemory<sCombatLogUsageCount, int> > *);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[0] Init
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// vtable[22] Update
	// sizeof = 176
};
