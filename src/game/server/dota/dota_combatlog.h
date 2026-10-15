// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_combatlog.h:37
struct SCombatLogGraphStats {
	int32 m_nKills;  // +0x0
	int32 m_nTowers;  // +0x4
	int32 m_nBarracks;  // +0x8
	int32 m_nGold;  // +0xc
	int32 m_nXP;  // +0x10
	int m_nLocationPerformanceDetails[2][6][4];  // +0x14
	SCombatLogGraphStats();

	// sizeof = 212
};

// src/game/server/dota/dota_combatlog.h:64
struct ICLSearchFields {
	struct DynamicValueLookup_t {
		CombatLogStringID_t * m_pStringID;  // +0x0
		int m_nStorageIndex;  // +0x8
		DynamicValueLookup_t(CombatLogStringID_t *, int);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.ICLSearchFields;  // +0x0
	float m_flGameTime;  // +0xc
	bool m_bMatchPreviousTarget;  // +0x10

protected:

	CombatLogStringID_t m_iTargetName;  // +0x14
	CombatLogStringID_t m_iAttackerName;  // +0x18
	CombatLogStringID_t m_iInflictorName;  // +0x1c
private:

	ICLSearchFields(const ICLSearchFields &);
	ICLSearchFields();
	virtual ~ICLSearchFields();
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	bool UpdateDynamicValues(const CombatQueryStorage_t *, bool);
	DOTA_COMBATLOG_TYPES GetType();

protected:

	bool MatchCommonEventFields(const CMsgDOTACombatLogEntry *);
	bool AttackerTeamMatches(int, const CMsgDOTACombatLogEntry *);
	bool TargetTeamMatches(int, const CMsgDOTACombatLogEntry *);
	bool TargetHeroLevelMatches(int, const CMsgDOTACombatLogEntry *);
	bool TargetSourceNameMatches(int, const CMsgDOTACombatLogEntry *);
	bool TargetMustBeHeroMatches(bool, const CMsgDOTACombatLogEntry *);
	bool DamageSourceNameMatches(int, const CMsgDOTACombatLogEntry *);
	bool DamageTypeMatches(int, const CMsgDOTACombatLogEntry *);
	bool DamageCategoryMatches(int, const CMsgDOTACombatLogEntry *);
	bool AssistPlayerIDMatches(int, const CMsgDOTACombatLogEntry *);
	bool LastHitsMatches(int, const CMsgDOTACombatLogEntry *);
	bool EventLocationMatches(int, const CMsgDOTACombatLogEntry *);
	bool ValueMatches(int, const CMsgDOTACombatLogEntry *);
	bool NeutralCampTypeMatches(int, const CMsgDOTACombatLogEntry *);
	bool RuneTypeMatches(int, const CMsgDOTACombatLogEntry *);
	bool HealSaveMatches(bool, const CMsgDOTACombatLogEntry *);
	bool LifestealHealMatches(bool, const CMsgDOTACombatLogEntry *);
	bool ModifierPurgedMatches(bool, const CMsgDOTACombatLogEntry *);
	bool SpellEvadeMatches(bool, const CMsgDOTACombatLogEntry *);
	bool TargetBuildingMatches(bool, int, const CMsgDOTACombatLogEntry *);
	bool TargetIsNotSelfMatches(bool, const CMsgDOTACombatLogEntry *);
	bool StackCountMatches(int, const CMsgDOTACombatLogEntry *);
	bool IsDebuffMatches(bool, const CMsgDOTACombatLogEntry *);
	bool IsStunDebuffMatches(bool, const CMsgDOTACombatLogEntry *);
	bool IsSlowDebuffMatches(bool, const CMsgDOTACombatLogEntry *);
	bool IsInvisibilityBuffMatches(bool, const CMsgDOTACombatLogEntry *);
	bool IsSilenceDebuffMatches(bool, const CMsgDOTACombatLogEntry *);
	bool AttackIsUltimateMatches(bool, const CMsgDOTACombatLogEntry *);
	bool AttackerMustBeHeroMatches(bool, const CMsgDOTACombatLogEntry *);
	bool AegisSnatchedMatches(bool, const CMsgDOTACombatLogEntry *);
	bool ValueGreaterThanMatches(float, const CMsgDOTACombatLogEntry *);
	bool DurationGreaterThanMatches(float, const CMsgDOTACombatLogEntry *);
	bool IsMotionControllerBuffMatches(bool, const CMsgDOTACombatLogEntry *);
	bool IsLongRangeKillMatches(bool, const CMsgDOTACombatLogEntry *);
	bool PurgeNPCMatches(int, const CMsgDOTACombatLogEntry *);
	bool PurgeAbilityMatches(int, const CMsgDOTACombatLogEntry *);
	void ParseQueryStringID(CombatLogStringID_t *, CDOTAPlayer *, const char *);

	// vtable[2] MatchEventFields
	// sizeof = 40
};

// src/game/server/dota/dota_combatlog.h:153
struct ICLSearchFieldFactory {
	int ()() * * _vptr.ICLSearchFieldFactory;  // +0x0
private:

	static ICLSearchFieldFactory * sm_pFirst;
	ICLSearchFieldFactory(ICLSearchFieldFactory &);
	ICLSearchFieldFactory(const ICLSearchFieldFactory &);
	ICLSearchFieldFactory(DOTA_COMBATLOG_TYPES);
	ICLSearchFields * CreateSearchFields(DOTA_COMBATLOG_TYPES, CDOTAPlayer *, KeyValues *);

protected:

	virtual ICLSearchFields * CreateSearchFields(CDOTAPlayer *, KeyValues *);

	// vtable[0] CreateSearchFields
	// sizeof = 24
};

// src/game/server/dota/dota_combatlog.h:190
struct SCLSearchOptions {
	float m_flTimeOut;  // +0x0
	uint32 m_unFlags;  // +0x4
	SCLSearchOptions();

	// sizeof = 8
};

// src/game/server/dota/dota_combatlog.h:198
class CDOTA_CombatLog : public CAutoGameSystem {
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

	int m_LastExperimentalUpdateTick;  // +0x78
	int m_LastBalanceUpdateTick;  // +0x7c
	CUtlOrderedMap m_mapLastRequestTime;  // +0x80
	typedef CAutoGameSystem BaseClass;
	CDOTA_CombatLog(const CDOTA_CombatLog &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_CombatLog *);
	CDOTA_CombatLog();
	virtual ~CDOTA_CombatLog();
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual void GameInit(const EventGameInit_t &);
	void AddHealthEvent(int, CDOTA_BaseNPC *, CDOTA_BaseNPC *, CBaseEntity *, int, int, int, bool);
	void AddModifierEvent(int, CDOTA_BaseNPC *, CDOTA_BaseNPC *, CDOTA_Buff *, bool, CDOTA_BaseNPC *, CDOTABaseAbility *);
	void AddAbilityEvent(int, CDOTA_BaseNPC *, CDOTA_BaseNPC *, CDOTABaseAbility *, bool, Vector);
	void AddLocationEvent(CDOTA_BaseNPC *);
	void AddGoldEvent(CDOTA_BaseNPC *, int, EDOTA_ModifyGold_Reason);
	void AddXPEvent(CDOTA_BaseNPC *, int, EDOTA_ModifyXP_Reason);
	void AddPurchaseItemEvent(CDOTA_BaseNPC *, const char *);
	void AddGameEvent(int, int);
	void AddAbilityTriggerEvent(CDOTA_BaseNPC *, CBaseEntity *);
	void AddPlayerStatsEvent(int, int, int, int, float, float, int, int);
	void AddMultiKillEvent(int, CDOTA_BaseNPC *, int);
	void AddKillstreakEvent(int, CDOTA_BaseNPC *, int);
	void AddTeamBuildingKillEvent(CDOTA_BaseNPC *, CDOTA_BaseNPC *);
	void AddFirstBloodEvent(CUtlVector<int, CUtlMemory<int, int> > *);
	void AddNeutralCampStackedEvent(int, int);
	void AddPickupRuneEvent(int, int);
	void AddRevealInvisibleEvent(CDOTABaseAbility *, CDOTA_BaseNPC *, CDOTA_BaseNPC *);
	void AddHeroSavedEvent(CDOTABaseAbility *, CDOTA_BaseNPC *, CDOTA_BaseNPC *, bool);
	void AddManaRestoredEvent(CDOTABaseAbility *, CDOTA_BaseNPC *, CDOTA_BaseNPC *, float);
	void AddHeroLevelUpEvent(CDOTA_BaseNPC_Hero *);
	void AddBottleHealAllyEvent(CDOTA_BaseNPC *, CDOTA_BaseNPC *);
	void AddEndGameStatsEvent(int);
	void AddInterruptChannelEvent(CDOTA_BaseNPC *);
	void AddAlliedGoldEvent(int, int);
	void AddAegisTakenEvent(int, bool);
	void AddManaDamageEvent(CDOTABaseAbility *, CDOTA_BaseNPC *, int);
	void AddPhysicalDamagePreventedEvent(int, int);
	void AddUnitSummonedEvent(CDOTA_BaseNPC *, CDOTABaseAbility *, const char *, int);
	void AddAttackEvadeEvent(CDOTA_BaseNPC *, bool);
	void AddTreeCutDownEvent(int, int);
	void AddSuccessfulScanEvent(int);
	void AddEndKillstreakEvent(CUtlVector<int, CUtlMemory<int, int> > *, int);
	int FindName(const char *);
	int FindOrAddName(const char *);
	const char * GetName(int);
	EHANDLE GetHeroForName(int);
	int GetPlayerIDForName(const char *);
	void SendLogToPlayer(CBasePlayer *, int, int, int, int, float);
	void SendDeathLogToPlayer(CBasePlayer *);
	void Localize(const char *, char *, int);
	int SendHeroPositions(CBasePlayer *, EHANDLE);
	void SendKillCamInformation(EHANDLE, CDOTAPlayer *, CDOTA_BaseNPC *);
	void DoCombatAnalysis();
	int GetKillSnapshot(float);
	int GetTowerSnapshot(float);
	int GetBarracksSnapshot(float);
	int GetGoldSnapshot(float);
	int GetXPSnapshot(float);
	int GetTeamLocationPerformanceSnapshot(float, int, int, int);
	void GenerateTimedStats();
	void ProcessTeamLanePerformance(int, int);
	void GenerateExperimentalTimedStats(int);
	void RecordKillDamageBreakdown(int, int, const float *, float, int, int, int, float);
	int GetStartEventIndexForMinute(int);
	int GetEndEventIndexForMinute(int);
	int GetStartEventIndexForStatsTick(int);
	int GetEndEventIndexForStatsTick(int);
	int GetNextMatchingEvent(int, float, const ICLSearchFields *);
	void FindAllMatchingEvents(CUtlVector<int, CUtlMemory<int, int> > *, const ICLSearchFields *, int, int);
	void FindEventsUntilEndOfFrame(int, CUtlVector<int, CUtlMemory<int, int> > *, const ICLSearchFields *);
	void GetEventsTillTimeOffset(int, CUtlVector<int, CUtlMemory<int, int> > *, const SCLSearchOptions *, const ICLSearchFields *, const ICLSearchFields *);
	bool MatchEventFields(int, const ICLSearchFields *);
	bool MatchEventFields(CMsgDOTACombatLogEntry *, const ICLSearchFields *);
	void GetEventsForPlayer(int, uint32, int, int, CUtlVector<int, CUtlMemory<int, int> > *);
	void ProcessPlayerPosition(int, int, CDOTAUserMsg_StatsHeroPositionInfo *);
	bool SaveCombatLog(const char *);
	int AddEntry(const CMsgDOTACombatLogEntry &);
	int NumEntries();
	uint32 GetEntryType(int);
	void GetEntry(int, CMsgDOTACombatLogEntry *);
	uint32 GetAllocSize();

private:

	int GetDiscreteSnapshotIdx(float);
	void GetInterpolatedSnapshotValues(float, float *, int *, int *);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[25] FrameUpdatePostEntityThink
	// vtable[3] GameInit
	// sizeof = 184
};
