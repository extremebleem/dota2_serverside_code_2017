// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_combat_analyzer.h:33
class ICombatAnalyzerQueryUpdateNotify {
	int ()() * * _vptr.ICombatAnalyzerQueryUpdateNotify;  // +0x0
	~ICombatAnalyzerQueryUpdateNotify();
	ICombatAnalyzerQueryUpdateNotify(ICombatAnalyzerQueryUpdateNotify &);
	ICombatAnalyzerQueryUpdateNotify(const ICombatAnalyzerQueryUpdateNotify &);
	ICombatAnalyzerQueryUpdateNotify();
	virtual void OnQueryProgressChanged(int, int);
	virtual void OnQueryFailed(int);
	virtual void OnQuerySucceeded(int);

	// vtable[0] OnQueryProgressChanged
	// vtable[1] OnQueryFailed
	// vtable[2] OnQuerySucceeded
	// sizeof = 8
};

// src/game/server/dota/dota_combat_analyzer.h:41
class CDOTA_CombatAnalyzer : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	typedef CAutoGameSystem BaseClass;
	CDOTA_CombatAnalyzer(const CDOTA_CombatAnalyzer &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_CombatAnalyzer *);
	CDOTA_CombatAnalyzer();
	virtual ~CDOTA_CombatAnalyzer();
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual void GameInit(const EventGameInit_t &);
	void LoadQueriesFromFile(const char *, CDOTAPlayer *, ICombatAnalyzerQueryUpdateNotify *);
	virtual void ParseQueriesFromKV(KeyValues *, CDOTAPlayer *, ICombatAnalyzerQueryUpdateNotify *);
	void DoCombatAnalysis();
	bool IsTargetHero(const CMsgDOTACombatLogEntry *);
	bool IsAttackerHero(const CMsgDOTACombatLogEntry *);
	ICLSearchFields * ParseEventSearchFields(KeyValues *);
	void CalculateEndGameStats();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[25] FrameUpdatePostEntityThink
	// vtable[3] GameInit
	// vtable[40] ParseQueriesFromKV
	// sizeof = 32
};

// src/game/server/dota/dota_combat_analyzer.h:155
struct event_storage_t {
	int nStorageIndex;  // +0x8

	// sizeof = 12
};

// src/game/server/dota/dota_combat_analyzer.h:162
struct comparison_test_t {
	int nStorageSlot;  // +0x4
	int nAgainst;  // +0x8

	// sizeof = 12
};

// src/game/server/dota/dota_combat_analyzer.h:173
struct AccumulatedEvent_t {
	int m_nLogEntry;  // +0x0
	int m_nFirstUnprocessedLogEntry;  // +0x4
	AccumulatedEvent_t(int, int);

	// sizeof = 8
};

// src/game/server/dota/dota_combat_analyzer.h:185
class CombatLogQuery {
	int m_nPlayerID;  // +0xc
	CUtlVector<CUtlMap<int, event_storage_t, short unsigned int, bool (*)(int const&, int const&)>, CUtlMemory<CUtlMap<int, event_storage_t, short unsigned int, bool (*)(int const&, int const&)>, int> > m_EventStorageMaps;  // +0x40
	CUtlMap<int, event_storage_t, short unsigned int, bool (*)(int const&, int const&)> m_PostMatchStorageMap;  // +0x58
	CombatQueryStorage_t m_QueryStorage;  // +0xb0
	int m_nProgressStorageIndex;  // +0x108
	float m_flCompletionGameTime;  // +0x10c
	float m_flTimeBlock;  // +0x110

	int m_nQueryRank;  // +0x140

	int m_nQueryID;  // +0x150
	bool m_bClearStoragePerQuery:1;  // +0x154:0
	bool m_bMultiQuery:1;  // +0x154:1
	bool m_bNeverMatchQueries:1;  // +0x154:2
	bool m_bRankedQuery:1;  // +0x154:3
	bool m_bQueryFailsAtCompletionGameTime:1;  // +0x154:4
	CombatLogQuery();
	~CombatLogQuery();
	void Evaluate();

	// sizeof = 344
};

// src/game/server/dota/dota_combat_analyzer.h:250
struct CombatQueryDesc_t {
	const char * m_pName;  // +0x0
	bool m_bMultiQuery;  // +0x20

	const char * m_pszMultiQueryName;  // +0x28
	int m_nProgress;  // +0x30
	bool m_bRankedQuery;  // +0x34

	const char * m_pszRankedQueryName;  // +0x38
	int m_nQueryRank;  // +0x40
	CombatQueryDesc_t();

	// sizeof = 72
};

// src/game/server/dota/dota_combat_analyzer.h:266
class CDOTA_RealtimeCombatAnalyzer : public CDOTA_CombatAnalyzer {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	struct EventToEntry_t {
		int m_nEventIndex;  // +0x0
		int m_nLogEntryIndex;  // +0x4
		EventToEntry_t();
		EventToEntry_t(int, int);

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	int m_nLastLogEntryCount;  // +0x24
	bool m_bMustQueueQueryRemoval;  // +0x40

	int m_nNextQueryID;  // +0x60
	typedef CDOTA_CombatAnalyzer BaseClass;
	typedef CUtlVectorFixedGrowable<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t, 128ul> TempEventToEntryList_t;
	CDOTA_RealtimeCombatAnalyzer(const CDOTA_RealtimeCombatAnalyzer &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_RealtimeCombatAnalyzer *);
	CDOTA_RealtimeCombatAnalyzer();
	virtual ~CDOTA_RealtimeCombatAnalyzer();
	virtual void GameInit(const EventGameInit_t &);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual void ParseQueriesFromKV(KeyValues *, CDOTAPlayer *, ICombatAnalyzerQueryUpdateNotify *);
	void RunRealtimeAnalysis();
	void RemoveQueriesForPlayer(CDOTAPlayer *);
	void RemoveQueryByID(int);
	int ParseAndAddQuery(const CombatQueryDesc_t &);
	bool ParsePostTests(CombatLogQuery *, KeyValues *);
	void ParseEvents_LinearSeries(CombatLogQuery *, KeyValues *);
	void ParseEvents_TimeBlockAccumulateWithTrigger(CombatLogQuery *, KeyValues *);
	void ParseEvents_TimeBlockAccumulate(CombatLogQuery *, KeyValues *);
	void ParseEvents_GameState(CombatLogQuery *, KeyValues *);
	bool ParseSingleEvent(CombatLogQuery *, KeyValues *);
	void ParseStorage(CUtlMap<int, event_storage_t, short unsigned int, bool (*)(int const&, int const&)> *, KeyValues *);
	void ParsePostMatchIncrements(CombatLogQuery *, KeyValues *);
	const CombatLogQuery * FindQueryForID(int);

private:

	bool RecursiveEvaluateQueryFromEvent(TempEventToEntryList_t &, CombatLogQuery *, int, int, float, float, bool, bool);
	bool EvaluateTimeblockBeforeTrigger(TempEventToEntryList_t &, CombatLogQuery *, int);
	bool EvaluateTimeblockAfterTrigger(TempEventToEntryList_t &, CombatLogQuery *, int);
	bool EvaluateTimeblock(TempEventToEntryList_t &, CombatLogQuery *, int);
	bool EvaluateGameState(TempEventToEntryList_t &, CombatLogQuery *);
	bool PostTestsPass(CombatLogQuery *);
	bool PreStorageTestsPass(CombatLogQuery *);
	void PerformStorageForEvent(CombatLogQuery *, int, CMsgDOTACombatLogEntry &, bool);
	void PerformStorageInternal(CombatLogQuery *, event_storage_t *, int, float, bool, bool);
	void PerformPostMatchStorage(CombatLogQuery *);
	void PerformQueryStorageCleanup(CombatLogQuery *);
	void PerformTriggerEventStorageCleanup(CombatLogQuery *);
	void QueryFullyMatched(TempEventToEntryList_t &, CombatLogQuery *);
	void DebugSpewTimeblockAfterTrigger(CombatLogQuery *, int, const CMsgDOTACombatLogEntry &, TempEventToEntryList_t &);
	bool IsMultiQueryFullyMatched(CombatLogQuery *);
	void QueryFailed(CombatLogQuery *);
	float GetProgressForQuery(int);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[25] FrameUpdatePostEntityThink
	// vtable[40] ParseQueriesFromKV
	// sizeof = 104
};
