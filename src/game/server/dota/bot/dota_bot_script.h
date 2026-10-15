// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_script.h:12
class CDOTA_Bot_Script {
	enum {
		COURIER_ACTION_RETURN = 0,
		COURIER_ACTION_SECRET_SHOP = 0x1,
		COURIER_ACTION_RETURN_STASH_ITEMS = 0x2,
		COURIER_ACTION_TAKE_STASH_ITEMS = 0x3,
		COURIER_ACTION_TRANSFER_ITEMS = 0x4,
		COURIER_ACTION_BURST = 0x5,
		COURIER_ACTION_TAKE_AND_TRANSFER_ITEMS = 0x6,
	};

	int ()() * * _vptr.CDOTA_Bot_Script;  // +0x0
private:

	EHANDLE m_hBaseNPC;  // +0x8

	HSCRIPT m_hBotBaseScriptScope;  // +0x88
	HSCRIPT m_hBotItemPurchaseScriptScope;  // +0x90
	HSCRIPT m_hBotItemAbilityUsageScriptScope;  // +0x98
	int m_nNextItemPurchaseValue;  // +0x170
	CDOTA_Bot_Script(CDOTA_Bot_Script &);
	CDOTA_Bot_Script(const CDOTA_Bot_Script &);
	CDOTA_Bot_Script();
	void SetBaseNPC(CDOTA_BaseNPC *);
	void SetBot(CDOTA_Bot *);
	CDOTA_BaseNPC * GetBaseNPC();
	CDOTA_Bot * GetBot();
	HSCRIPT GetScriptHandle();
	HSCRIPT GetModeScriptScope(DOTA_BOT_MODE);
	void ReloadScripts(const char *);
	bool RunScriptFunction(const char *, HSCRIPT, ScriptVariant_t *);
	bool RunScriptFunctionParam(const char *, HSCRIPT, ScriptVariant_t *, ScriptVariant_t *);
	bool DoBotScriptBaseThink();
	bool DoBotScriptItemPurchaseThink();
	bool DoBotScriptItemUsageThink();
	bool DoBotScriptAbilityUsageThink();
	bool DoBotScriptAbilityLevelUpThink();
	bool DoBotScriptCourierUsageThink();
	bool DoBotScriptBuybackUsageThink();
	bool DoBotScriptMinionThink(CDOTA_BaseNPC *);
	bool IsMyScriptBot();
	bool IsMyScriptTeam();
	bool IsOpposingScriptTeam();
	int GetDifficulty();
	const char * GetUnitName();
	int GetPlayerID();
	bool IsHero();
	bool IsCreep();
	bool IsTower();
	bool IsBuilding();
	bool IsFort();
	bool IsIllusion();
	bool IsBot();
	void Action_ClearActions(bool);
	void Action_MoveToLocation(const Vector &);
	void Action_MoveToUnit(HSCRIPT);
	void Action_AttackUnit(HSCRIPT, bool);
	void Action_AttackMove(const Vector &);
	void Action_UseAbility(HSCRIPT);
	void Action_UseAbilityOnEntity(HSCRIPT, HSCRIPT);
	void Action_UseAbilityOnLocation(HSCRIPT, const Vector &);
	void Action_UseAbilityOnTree(HSCRIPT, int);
	void Action_PickUpRune(int);
	void Action_PickUpItem(HSCRIPT);
	void Action_DropItem(HSCRIPT, const Vector &);
	DOTA_INVALID_ORDERS Action_PurchaseItem(const char *);
	void Action_SellItem(HSCRIPT);
	void Action_DisassembleItem(HSCRIPT);
	void Action_SetItemCombineLock(HSCRIPT, bool);
	void Action_SwapItems(int, int);
	void Action_UseShrine(HSCRIPT);
	bool Action_Courier(HSCRIPT, int);
	void Action_Buyback();
	void Action_Glyph();
	void Action_LevelAbility(const char *);
	void Action_Chat(const char *, bool);
	void Action_Ping(float, float, bool);
	int GetCurrentActionType();
	ScriptVariant_t GetMostRecentPing();
	bool CanBeSeen();
	int GetActiveMode();
	float GetActiveModeDesire();
	int GetHealth();
	int GetMaxHealth();
	float GetHealthRegen();
	int GetMana();
	int GetMaxMana();
	float GetManaRegen();
	int GetBaseMovementSpeed();
	int GetCurrentMovementSpeed();
	bool IsAlive();
	float GetRespawnTime();
	bool HasBuyback();
	int GetBuybackCost();
	float GetBuybackCooldown();
	int GetAbilityPoints();
	float GetBoundingRadius();
	float GetBaseDamage();
	float GetBaseDamageVariance();
	float GetAttackDamage();
	int GetAttackRange();
	float GetAttackSpeed();
	float GetSecondsPerAttack();
	float GetAttackPoint();
	float GetLastAttackTime();
	float GetSpellAmp();
	float GetArmor();
	float GetMagicResist();
	float GetEvasion();
	int GetPrimaryAttribute();
	int GetAttributeValue(int);
	int GetXPNeededToLevel();
	int GetLevel();
	int GetBountyXP();
	int GetBountyGoldMin();
	int GetBountyGoldMax();
	int GetGold();
	int GetStashValue();
	int GetCourierValue();
	Vector GetLocation();
	int GetFacing();
	int GetGroundHeight();
	HSCRIPT GetAbilityByName(const char *);
	HSCRIPT GetItemInSlot(int);
	int FindItemSlot(const char *);
	int GetItemSlotType(int);
	bool IsChanneling();
	bool IsUsingAbility();
	HSCRIPT GetCurrentActiveAbility();
	bool HasQueuedAction();
	Vector GetVelocity();
	HSCRIPT GetAttackTarget();
	Vector GetLastSeenLocation();
	float GetTimeSinceLastSeen();
	bool IsRooted();
	bool IsDisarmed();
	bool IsAttackImmune();
	bool IsSilenced();
	bool IsMuted();
	bool IsStunned();
	bool IsHexed();
	bool IsInvulnerable();
	bool IsInvisible();
	bool IsMagicImmune();
	bool IsNightmared();
	bool IsBlockDisabled();
	bool IsEvadeDisabled();
	bool IsUnableToMiss();
	bool IsSpeciallyDeniable();
	bool IsDominated();
	bool IsBlind();
	bool HasScepter();
	bool WasRecentlyDamagedByAnyHero(float);
	float TimeSinceDamagedByAnyHero();
	bool WasRecentlyDamagedByHero(HSCRIPT, float);
	float TimeSinceDamagedByHero(HSCRIPT);
	bool WasRecentlyDamagedByTower(float);
	float TimeSinceDamagedByTower();
	bool WasRecentlyDamagedByCreep(float);
	float TimeSinceDamagedByCreep();
	int DistanceFromFountain();
	int DistanceFromSideShop();
	int DistanceFromSecretShop();
	void SetTarget(HSCRIPT);
	HSCRIPT GetTarget();
	void SetNextItemPurchaseValue(int);
	int GetNextItemPurchaseValue();
	int GetAssignedLane();
	float GetOffensivePower();
	float GetRawOffensivePower();
	int GetEstimatedDamageToTarget(bool, HSCRIPT, float, int);
	float GetStunDuration(bool);
	float GetSlowDuration(bool);
	bool HasBlink(bool);
	bool HasMinistunOnAttack();
	bool HasSilence(bool);
	bool HasInvisibility(bool);
	bool UsingItemBreaksInvisibility();
	ScriptVariant_t GetNearbyHeroes(int, bool, int);
	ScriptVariant_t GetNearbyCreeps(int, bool);
	ScriptVariant_t GetNearbyTowers(int, bool);
	ScriptVariant_t GetNearbyBarracks(int, bool);
	ScriptVariant_t GetNearbyShrines(int, bool);
	ScriptVariant_t GetNearbyTrees(int);
	ScriptVariant_t FindAoELocation(bool, bool, const Vector &, int, int, float, int);
	Vector GetExtrapolatedLocation(float);
	float GetMovementDirectionStability();
	int GetActualDamage(int, int);
	bool HasModifier(const char *);
	int NumModifiers();
	const char * GetModifierName(int);
	int GetModifierStackCount(int);
	void InitScripts(const char *, bool);
	bool LoadScript(const char *, const char *, HSCRIPT *, bool);
	bool LoadSpecificOrGenericScript(const char *, const char *, HSCRIPT *, bool);
	CDOTA_Buff * GetModifierNum(int);
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();

	// vtable[0] GetScriptDesc
	// sizeof = 376
};
