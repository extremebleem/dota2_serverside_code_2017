// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot.h:19
struct sLaningInfo {
	int iSoloDesire;  // +0x0
	int iRequiresBabysit;  // +0x4
	int iProvidesBabysit;  // +0x8
	int iSurvivalRating;  // +0xc
	int iRequiresFarm;  // +0x10
	int iProvidesSetup;  // +0x14
	int iRequiresSetup;  // +0x18

	// sizeof = 28
};

// src/game/server/dota/bot/dota_bot.h:49
struct sGridLocation {
	int x;  // +0x0
	int y;  // +0x4
	sGridLocation(int, int);
	bool operator==(const sGridLocation &);

	// sizeof = 8
};

// src/game/server/dota/bot/dota_bot.h:152
struct AbilityDamageAndManaCost_t {
	int iDamage;  // +0x0
	int iManaCost;  // +0x4
	AbilityDamageAndManaCost_t();
	AbilityDamageAndManaCost_t(int, int);

	// sizeof = 8
};

// src/game/server/dota/bot/dota_bot.h:165
class CDOTA_Bot {
	struct SortedUnit_t {
		EHANDLE hUnit;  // +0x0
		float fDistSqr;  // +0x4
		SortedUnit_t();
		SortedUnit_t(const SortedUnit_t &);
		SortedUnit_t & operator=(const SortedUnit_t &);

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct sQueuedAction {
		bool bIsPush;  // +0x0

		float fExecuteTime;  // +0x4

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct sQueuedOrder {
		float fQueuedTime;  // +0x40
		sQueuedOrder();
		~sQueuedOrder();
		sQueuedOrder(const sQueuedOrder &);

		// sizeof = 72
	};
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.CDOTA_Bot;  // +0x0
private:

protected:

	int m_iLifesteal;  // +0x10
	int m_iBlock;  // +0x14
	bool m_bForceIdle;  // +0x18
	bool m_bForceCreepAttack;  // +0x19

	float m_fExecutionTime[30];  // +0x1c
	int m_iCurExecutionTime;  // +0x94
	int m_iPlayerID;  // +0x98
	EHANDLE m_hUnit;  // +0x9c
	int m_iUnitType;  // +0xa8
	float m_fAggressionFactor;  // +0xac
	bool m_bHuman;  // +0xb0
	bool m_bLiquidate;  // +0xb1
	bool m_bDoNotPurchase;  // +0xb2

	int m_iDifficulty;  // +0xb4
	float m_fCurrentLaneAmount;  // +0xcc
	float m_fEstimatedUnitDamage;  // +0xd0
	float m_fEstimatedMaxUnitDamage;  // +0xd4
	float m_fEstimatedBuildingDamage;  // +0xd8
	bool m_bWantsToCast;  // +0xdc

	int m_iWantsToCastFrame;  // +0xe0
	bool m_bWantsToAttack;  // +0xe4

	int m_iWantsToAttackFrame;  // +0xe8

	float m_HitByTowerTime;  // +0x1b0
	float m_HitByHeroTime[24];  // +0x1b4
	float m_HitByCreepTime;  // +0x214
	int m_nNearbyUnitsUpdatedFrame;  // +0x218

	int m_nNearbyEnemyCreeps;  // +0x2b0
	int m_nAttackingCreeps;  // +0x2b4
	int m_nAttackingTowers;  // +0x2b8
	int m_nAttackingHeroes;  // +0x2bc
	float m_fLastSeen;  // +0x2c0
	int m_nFailedPaths;  // +0x2c4
	EHANDLE m_hTarget;  // +0x2c8
	float m_fTargetLastSeen;  // +0x2d8
	EHANDLE m_hTargetLastHitCreep;  // +0x2dc
	bool m_bWasInvisible;  // +0x2e0
	bool m_bKnownInvisible;  // +0x2e1

	float m_fRequestedBlinkStart;  // +0x2fc
	float m_fRequestedBlinkExpire;  // +0x300

	float m_fModeDesires[26];  // +0x85e0
	int m_iPreviousBotModeType;  // +0x8648

	bool m_bBypassActionQueue;  // +0x8668

	int m_nForceAbility;  // +0x8690

	CDOTA_Bot(CDOTA_Bot &);

private:

	CDOTA_Bot(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual ~CDOTA_Bot();
	void Init();
	virtual void Think();
	bool IsHuman();
	void SetIsHuman(bool, int);
	bool ShouldLiquidate();
	void SetLiquidate(bool);
	bool DoNotPurchase();
	void SetDoNotPurchase(bool);
	void AccumulateExecutionTime(float);
	void ClearExecutionTime();
	float GetExecutionTime();
	virtual DOTA_BOT_MODE GetInitialMode();
	void SetBotDifficulty(int);
	int GetBotDifficulty();
	float GetBotLag();
	CDOTAPlayer * GetPlayer();
	CDOTA_BaseNPC * GetUnit();
	CDOTA_BaseNPC_Hero * GetOwningHero();
	CDOTA_TeamCommander * GetTeamCommander();
	CDOTA_TeamCommander * GetOpposingTeamCommander();
	bool IsUnitType(int);
	int GetUnitType();
	int GetPlayerID();
	virtual float GetAggressionFactor();
	virtual void SetDeathActivity(int);
	virtual int TranslateActivity(int);
	int GetNumMinions();
	CDOTA_BaseNPC * GetMinion(int);
	bool IsMyMinion(CDOTA_Bot *);
	const sLaningInfo * GetLaningInfo();
	void SetAssignedLane(DOTA_LANE);
	DOTA_LANE GetAssignedLane();
	void SetForcedLane(DOTA_LANE);
	DOTA_LANE GetForcedLane();
	void SetTargetLane(DOTA_LANE);
	DOTA_LANE GetTargetLane();
	DOTA_LANE GetCurrentLane();
	float GetCurrentLaneAmount();
	DOTA_LANE GetMostRecentLane();
	bool IsPushingIntoBase();
	CDOTA_Bot_Pathing * GetPathing();
	int FindTotalAvoidanceForPath(const Vector &, const Vector &, bool);
	void UpdateCurrentLane();
	void UpdateMode();
	void DoModeThink();
	void DoActionThink();
	virtual void DoMinionThink();
	void PushAction(CDOTA_BotAction *);
	void PopAction();
	void ClearActions(bool, bool);
	void SetAction(CDOTA_BotAction *);
	CDOTA_BotAction * GetAction();
	bool HasQueuedActionType(int);
	bool HasQueuedAction();
	void SetMoveAction(const Vector &, bool, bool);
	void SetAttackAction(CDOTA_BaseNPC *, bool);
	virtual void SetAttackMoveAction(const Vector &);
	float GetActionDelay(bool);
	void InvalidateCurrentPath();
	void LevelAbilities();
	void ConsiderBuyback();
	bool WantsToSaveForBuyback();
	void ConsiderCourierUsage();
	int GetStashValue(bool);
	int GetCourierValue();
	CDOTA_Unit_Courier * GetIncomingCourier();
	void UseAbilities();
	bool IsUsingAbility();
	bool IsUsingSpecificAbility(CDOTABaseAbility *);
	virtual bool IsWillingToSpendMana(int);
	virtual CDOTABaseAbility * GetAggroFreeAttackAbility();
	void UseItems();
	bool IsUsingItem();
	void SwapWorstItemToBackpack();
	void OptimizeBackpackItems();
	void UpdateEstimatedDamage();
	void UpdateDifficultyMuting();
	void UpdateInferredMode();
	void UpdateAttackers();
	void UpdateNearbyUnits();
	void UpdateMinionList();
	virtual CDOTA_BotMode * CreateMode(int);
	void GetMostDesiredMode(DOTA_BOT_MODE *, float *);
	void SwitchToMode(DOTA_BOT_MODE, float);
	CDOTA_BotMode * GetMode();
	float GetActiveModeDesire();
	float GetModeDesire(DOTA_BOT_MODE);
	float GetSecondaryModeDesire();
	CDOTA_BotMode * GetSpecificMode(DOTA_BOT_MODE);
	int GetPreviousModeType();
	int FindNearbyTeammatesInMode(DOTA_BOT_MODE, float, CUtlVector<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> > *, CDOTA_BaseNPC *);
	int FindNearbyEnemiesInMode(DOTA_BOT_MODE, float, CUtlVector<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> > *, CDOTA_BaseNPC *);
	void FindNearbyCreeps(float, int, bool, CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > *);
	void FindNearbyHeroes(float, int, CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > *);
	int GetNearbyCreeps(DOTA_UNIT_TARGET_TEAM, CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > *, float);
	int GetNearbyHeroes(DOTA_UNIT_TARGET_TEAM, CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > *, float);
	int GetNearbyTowers(DOTA_UNIT_TARGET_TEAM, CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > *, float);
	int GetNearbyBarracks(DOTA_UNIT_TARGET_TEAM, CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > *, float);
	int GetNearbyShrines(DOTA_UNIT_TARGET_TEAM, CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > *, float);
	int GetNearbyTrees(CUtlVector<int, CUtlMemory<int, int> > *, float);
	void SetTarget(EHANDLE);
	EHANDLE GetTarget();
	CDOTA_BaseNPC * GetTargetNPC();
	CDOTA_Bot * GetTargetBot();
	Vector GetTargetLoc();
	void SetTargetLoc(const Vector &);
	float GetTargetLastSeen();
	bool HasSeenTargetIn(float);
	EHANDLE GetTargetLastHitCreep();
	bool WasRecentlyHitByTower(float);
	bool WasRecentlyHitByHero(float);
	bool WasRecentlyHitBySpecificHero(int, float);
	bool WasRecentlyHitByCreep(float);
	float TimeSinceHitByTower();
	float TimeSinceHitByHero();
	float TimeSinceHitBySpecificHero(int);
	float TimeSinceHitByCreep();
	int NumNearbyEnemyCreeps();
	int NumAttackingCreeps();
	int NumAttackingTowers();
	int NumAttackingHeroes();
	bool WantsToCast();
	bool WantsToAttack();
	bool IsAboutToDie();
	bool CanEasilyBeKilled(const Vector &);
	bool IsDangerouslyLow();
	int GetGankingEstimatedDamage(float);
	float GetTimeSinceLastSeen();
	bool HasBeenSeenIn(float);
	bool IsKnownToBeInvisible();
	Vector GetLastSeenLocation();
	bool IsSneakyInvis();
	void SetLastSeenLocation(const Vector &);
	bool HasBuffThatBreaksOnDamage();
	void IncrementFailedPathCount();
	void ClearFailedPathCount();
	int GetFailedPathCount();
	int GetAvoidanceAmountForLocation(const Vector &, bool);
	int GetAvoidanceAmountForGrid(float, int, int, bool);
	bool FindAvoidLocation(const Vector &, float, int, Vector *, int *);
	int GetFountainAvoidanceCost(int);
	int GetInnerTowerAvoidanceCost(int);
	int GetTowerAvoidanceCost(float);
	int GetPhysicalEffectAvoidanceCost(float);
	int GetMagicalEffectAvoidanceCost();
	int GetCreepAvoidanceCost(float);
	int GetHeroAvoidanceCost(float);
	Vector FindEstimatedAttackLocation(CDOTA_BaseNPC *);
	Vector FindEstimatedAttackLocation(const Vector &);
	bool CanKillUnit(CDOTA_BaseNPC *);
	float GetOffensivePower();
	float GetRawOffensivePower();
	float GetEstimatedUnitDamage();
	float GetEstimatedBuildingDamage();
	CDOTA_BaseNPC_Building * FindClosestBuilding(bool);
	int GetAverageLifestealValue();
	int GetAverageBlockValue();
	float GetTankRating();
	int NumCreepsWillingToTank(float);
	int NumCreepsWillingToTank();
	virtual bool HasTeleportAbility(bool);
	virtual float GetCleavePercent();
	bool FindNearbyChannelingEnemy(float, CDOTA_BaseNPC * *, float *);
	bool DoCreepAttackAndDeny(const Vector &, float, const Vector &, float, float);
	int GetEstimatedDamageToTarget(bool, CDOTA_BaseNPC *, float, int);
	float GetStunDuration(bool);
	float GetSlowDuration(bool);
	bool HasBlink(bool);
	bool HasMinistunOnAttack();
	bool HasSilence(bool);
	bool HasInvisibility(bool);
	bool UsingItemBreaksInvisibility();
	virtual int GetBlinkManaCost();
	virtual int GetBlinkRange();
	virtual bool HasLocationStun();
	virtual int GetGankDistance();
	virtual int GetMaxRoamDistance();
	void SetRequestedBlink(const Vector &, float);
	void ClearRequestedBlink();
	bool HasRequestedBlink();
	Vector GetRequestedBlink();
	virtual bool IsSavingBlink();
	virtual void OnDidDamage(CDOTA_BaseNPC *, CDOTABaseAbility *, int);
	virtual void OnTakeDamage(const CTakeDamageInfo &);
	virtual void OnAttacked(const CDOTA_AttackRecord *);
	virtual void OnAbilityCreated(CDOTABaseAbility *);
	virtual void OnAbilityExecuted(CDOTABaseAbility *, CBaseEntity *);
	virtual void OnItemEquip(CDOTA_Item *, bool);
	void DrawDebug();
	void Action_MoveTo(const Vector &, CEntityIndex);
	void Action_Hold();
	void Action_Stop();
	void Action_Attack(CBaseEntity *, CEntityIndex);
	void Action_AttackMove(const Vector &);
	void Action_UseAbility(CDOTABaseAbility *);
	void Action_UseAbilityOnEntity(CDOTABaseAbility *, CDOTA_BaseNPC *);
	void Action_UseAbilityOnLocation(CDOTABaseAbility *, const Vector &);
	void Action_UseAbilityOnTree(CDOTABaseAbility *, int);
	void Action_PickUpRune(CBaseEntity *);
	void Action_PickUpItem(EHANDLE);
	void Action_DropItem(EHANDLE, const Vector &);
	virtual bool IsTutorial();
	virtual bool IsTutorialBotBoss();
	void SetForceIdle(bool);
	bool IsForcedIdle();
	void SetForceCreepAttack(bool);
	bool IsForcedCreepAttack();
	void SetForceAbility(int);
	int GetForcedAbility();
	void ReloadScripts();
	bool DoBotScriptBaseThink();
	bool DoBotScriptItemPurchaseThink();
	bool DoBotScriptItemUsageThink();
	bool DoBotScriptAbilityUsageThink();
	bool DoBotScriptLevelUpAbilitiesThink();
	bool DoBotScriptCourierUsageThink();
	bool DoBotScriptBuybackUsageThink();
	bool DoBotScriptMinionThink(CDOTA_BaseNPC *);

protected:

	void UpdateInternalRatings();
	virtual int CalculateAverageLifestealValue();
	int CalculateAverageBlockValue();
	int GetNearbyUnits(DOTA_UNIT_TARGET_TEAM, const CUtlVector<CDOTA_Bot::SortedUnit_t, CUtlMemory<CDOTA_Bot::SortedUnit_t, int> > &, CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > *, float);
	void ExecuteOrder(CUnitOrders &);

	// vtable[0] Schema_DynamicBinding
	// vtable[3] Think
	// vtable[4] GetInitialMode
	// vtable[5] GetAggressionFactor
	// vtable[6] SetDeathActivity
	// vtable[7] TranslateActivity
	// vtable[8] DoMinionThink
	// vtable[9] SetAttackMoveAction
	// vtable[10] IsWillingToSpendMana
	// vtable[11] GetAggroFreeAttackAbility
	// vtable[12] CreateMode
	// vtable[13] HasTeleportAbility
	// vtable[14] GetCleavePercent
	// vtable[15] GetBlinkManaCost
	// vtable[16] GetBlinkRange
	// vtable[17] HasLocationStun
	// vtable[18] GetGankDistance
	// vtable[19] GetMaxRoamDistance
	// vtable[20] IsSavingBlink
	// vtable[21] OnDidDamage
	// vtable[22] OnTakeDamage
	// vtable[23] OnAttacked
	// vtable[24] OnAbilityCreated
	// vtable[25] OnAbilityExecuted
	// vtable[26] OnItemEquip
	// vtable[27] IsTutorial
	// vtable[28] IsTutorialBotBoss
	// vtable[29] CalculateAverageLifestealValue
	// sizeof = 34480
};
