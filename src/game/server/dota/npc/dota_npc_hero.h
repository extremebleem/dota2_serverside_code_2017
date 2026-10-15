// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/npc/dota_npc_hero.h:19
class CDOTAHeroKillCriteria {
	bool m_bOverride;  // +0x38
	CDOTAHeroKillCriteria();
	~CDOTAHeroKillCriteria();

	// sizeof = 64
};

// src/game/server/dota/npc/dota_npc_hero.h:35
class CInfoPlayerStartDota : public CPointEntity {
	class NetworkVar_m_bDisabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	COutputEvent m_OnEnabled;  // +0x310
	COutputEvent m_OnDisabled;  // +0x328
	typedef CPointEntity BaseClass;
	typedef CInfoPlayerStartDota ThisClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CInfoPlayerStartDota(CInfoPlayerStartDota &);
	CInfoPlayerStartDota(CInfoPlayerStartDota &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CInfoPlayerStartDota();
	void InputSetEnabled(inputdata_t &);
	void InputSetDisabled(inputdata_t &);
	void InputSetEnabledExclusively(inputdata_t &);
	bool IsEnabled();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	void SetDisabled(bool, CBaseEntity *);
	virtual ~CInfoPlayerStartDota();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[65] ShouldTransmit
	// sizeof = 832
};

// src/game/server/dota/npc/dota_npc_hero.h:66
class CDOTAMusicProbabilityEntry {
	int ()() * * _vptr.CDOTAMusicProbabilityEntry;  // +0x0
private:

protected:

	float m_flProbability;  // +0x20
	CDOTAMusicProbabilityEntry(CDOTAMusicProbabilityEntry &);
	CDOTAMusicProbabilityEntry(const CDOTAMusicProbabilityEntry &);
	~CDOTAMusicProbabilityEntry();
	CDOTAMusicProbabilityEntry();

private:

	void AddOrReplaceElement(int, float);
	void RemoveAllProbabilityElements();
	void RemoveProbabilityElement(int);
	virtual float EvaluateProbability();
	virtual void SendProbability(CDOTA_BaseNPC_Hero *);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] EvaluateProbability
	// vtable[2] SendProbability
	// sizeof = 40
};

// src/game/server/dota/npc/dota_npc_hero.h:85
class CDOTAMusicProbabilityGank : public CDOTAMusicProbabilityEntry {
public:

protected:

	float m_flProbabilityGanker;  // +0x24

	int m_iKnownPotentialGankers;  // +0x40
	CDOTAMusicProbabilityGank(const CDOTAMusicProbabilityGank &);
	CDOTAMusicProbabilityGank();
	~CDOTAMusicProbabilityGank();
	virtual float EvaluateProbability();
	virtual void SendProbability(CDOTA_BaseNPC_Hero *);
	float EvaluateAndSendProbability(CDOTA_BaseNPC_Hero *);
	void SendProbabilityGanker(CDOTA_BaseNPC_Hero *, float);
	void CheckGankTimer(CDOTA_BaseNPC_Hero *);

	// vtable[1] EvaluateProbability
	// vtable[2] SendProbability
	// sizeof = 72
};

// src/game/server/dota/npc/dota_npc_hero.h:115
struct sAcquireHistory {
private:

	uint32 m_unID;  // +0x0
	int m_nLevel;  // +0x4
	float m_fGameTime;  // +0x8

	// sizeof = 12
};

// src/game/server/dota/npc/dota_npc_hero.h:138
struct sLoadoutItem {
private:

	string_t name;  // +0x0
	int iFlags;  // +0x8
	bool bPurchased;  // +0xc
	sLoadoutItem();

	// sizeof = 16
};

// src/game/server/dota/npc/dota_npc_hero.h:148
class CDOTA_BaseNPC_Hero : public CDOTA_BaseNPC_Additive {
	enum {
		HAS_ROOM_SLOT = 0,
		HAS_ROOM_SELL = 0x1,
		HAS_ROOM_COMBINE = 0x2,
		HAS_ROOM_STACK = 0x3,
		HAS_NO_ROOM = 0x4,
	};

	struct CShopTalk {
		float m_entertimes[7];  // +0x0
		float m_leavetimes[7];  // +0x1c
		float m_dawdlesaid[7];  // +0x38

		// sizeof = 84
	};

	struct COtherHeroTalk {
		struct info_t {
			const CHandle<CDOTA_BaseNPC_Hero> m_hWho;  // +0x0
			info_t(CDOTA_BaseNPC_Hero *);
			info_t & operator=(const info_t &);
			info_t(const info_t &);

			// sizeof = 4
		};
		/* tag__fprintf: const_type tag not supported! */;
		COtherHeroTalk();
		bool SpeakToOtherHero(CDOTA_BaseNPC_Hero *, CDOTA_BaseNPC_Hero *);
		~COtherHeroTalk();

		// sizeof = 44
	};

	class NetworkVar_m_flStrength {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flAgility {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flIntellect {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flStrengthTotal {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flAgilityTotal {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flIntellectTotal {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iRecentDamage {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iPrimaryAttribute {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	struct sHeroDamageInfo {
	private:

		int nDamagingPlayerID;  // +0x0
		float fTime;  // +0x4

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct sHeroRecentModifierInfo {
	private:

		int nSourcePlayerID;  // +0x0
		bool bBuff;  // +0x4

		int nAbilityIndex;  // +0x8
		float fTime;  // +0xc

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	class NetworkVar_m_iAbilityPoints {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iCurrentXP {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flRespawnTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flRespawnTimePenalty {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iPlayerID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hReplicatingOtherHeroModel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	struct KillInfo_t {
	private:

		string_t m_victimname;  // +0x0
		string_t m_inflictorname;  // +0x8
		bool m_bEnemyInFOW;  // +0x10
		bool m_bWasFirstBlood;  // +0x11

		int m_iKillCount;  // +0x14
		float m_flBlinkTime;  // +0x18
		KillInfo_t();

		KillInfo_t & operator=(const KillInfo_t &);

		// sizeof = 32
	};
	/* tag__fprintf: const_type tag not supported! */;

	class NetworkVar_m_bReincarnating {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bCustomKillEffect {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flSpawnedAt {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hEconConsumableAbility {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	float m_flStrengthGain;  // +0x1238
	float m_flAgilityGain;  // +0x123c
	float m_flIntellectGain;  // +0x1240
	float m_flDeathTime;  // +0x1244
	EHANDLE m_hNewARDMHero;  // +0x1248
	float m_fBuybackCooldown;  // +0x124c
	float m_fBuybackGoldLimit;  // +0x1250
	int m_nLastHealedAmount;  // +0x1254
	float m_flLastHealedTime;  // +0x1258
	EHANDLE m_hLastHealEntity;  // +0x125c

	float m_fMostRecentDamageTime;  // +0x12a0
	float m_flTimeUntilRespawn;  // +0x12b4
	float m_flScriptRespawnTime;  // +0x12b8
	bool m_bScriptDisableRespawns;  // +0x12bc

	int m_iIllusionOriginalPlayerID;  // +0x12c4
	int m_iHeroID;  // +0x12c8

	int m_iMultipleKillCount;  // +0x1370
	bool m_bDisableWearables;  // +0x1374

	int m_iNextItemToPurchase;  // +0x1568
	bool m_bDoesNextItemCompleteRecipe;  // +0x156c

	bool m_bAutoPurchaseItems;  // +0x15f8
	bool m_bBuybackDisabled;  // +0x15f9

	bool m_bPreventPetSpawn;  // +0x1618

	bool m_bHasChangedCourierSincePrecache;  // +0x16d8
	bool m_bHasChangedWardsSincePrecache;  // +0x16d9

	float m_flLastTimeLookedAtByDirector;  // +0x16e8
	typedef CDOTA_BaseNPC_Additive BaseClass;
	typedef CDOTA_BaseNPC_Hero ThisClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_BaseNPC_Hero(CDOTA_BaseNPC_Hero &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_BaseNPC_Hero();
	virtual ~CDOTA_BaseNPC_Hero();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void CalculateStatBonus();
	virtual void InitialSpawn();
	virtual bool ShouldDoFlyHeightVisual();
	virtual bool HasFlyingVision();
	virtual void OnIllusionPostSpawn(CDOTA_BaseNPC *);
	void OnGainAggro(CDOTA_BaseNPC *);
	virtual void BuildWearableSpawnList(const CEntityKeyValues *, CEntitySpawnerContextBase *, CUtlVector<WearableSpawnInfo_t, CUtlMemory<WearableSpawnInfo_t, int> > *);
	virtual void UpdateNonCacheableWearableData(CEntitySpawnerContextBase *);
	virtual void OnAssetModifiersUpdated();
	void ValidateEconItems();
	void CacheTogglableWearable(int);
	CEconWearable * GetTogglableWearable(int);
	HSCRIPT Script_GetTogglableWearable(int);
	int GetPlayerID();
	int GetHeroID();
	void SetPlayerID(int);
	int GetDeathGoldCost();
	virtual void DeathComplete();
	float GetDeathTime();
	void SetDeathTime(float);
	virtual void HeroLevelUp(bool);
	virtual bool AddExperience(float, int, bool, bool);
	int GetAbilityPoints();
	void SetAbilityPoints(int);
	virtual int GetDeathXP();
	void Script_SetCustomDeathXP(int);
	void PreRespawnHero();
	virtual void RespawnHero(bool, bool, bool);
	void OnBuybackSpawned();
	virtual int GetBaseDamageMin();
	virtual int GetBaseDamageMax();
	virtual float GetPhysicalArmorValue();
	virtual float GetManaRegen();
	virtual float GetStatsBasedManaRegen();
	virtual float GetIncreasedAttackSpeed();
	virtual void UpgradeAbility(CDOTABaseAbility *);
	void Script_UpgradeAbility(HSCRIPT);
	void Buyback();
	int GetBuybackCost();
	float GetBuybackCooldownTime();
	void SetBuybackCooldownTime(float);
	float GetBuybackGoldLimitTime();
	void SetBuybackGoldLimitTime(float);
	bool CanEarnGold();
	bool IsBuybackLimited();
	float GetBuybackGoldFactor();
	void SetBuyBackDisabledByReapersScythe(bool);
	bool IsBuybackDisabledByReapersScythe();
	virtual float GetStrength();
	virtual float GetAgility();
	virtual float GetIntellect();
	float GetBaseStrength();
	float GetBaseAgility();
	float GetBaseIntellect();
	void SetBaseStrength(float);
	void SetBaseAgility(float);
	void SetBaseIntellect(float);
	float GetStrengthGain();
	float GetAgilityGain();
	float GetIntellectGain();
	void ModifyStrength(float);
	void ModifyAgility(float);
	void ModifyIntellect(float);
	float GetRespawnTime();
	virtual int OnTakeDamage_Alive(const CTakeDamageInfo &);
	ScriptVariant_t Script_GetAdditionalOwnedUnits();
	virtual void GetAdditionalOwnedUnits(CUtlVector<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> > *);
	void IncrementKills(int);
	void IncrementDeaths(int);
	void IncrementAssists(int);
	void IncrementLastHits();
	void IncrementDenies();
	void IncrementNearbyCreepDeaths();
	void RecordLastHit();
	void IncrementLastHitStreak();
	void ClearLastHitStreak();
	void IncrementLastHitMultikill();
	void ClearLastHitMultikill();
	int GetKills();
	int GetDeaths();
	int GetAssists();
	int GetLastHits();
	int GetDenies();
	void IncrementStreak();
	void ClearStreak();
	int GetStreak();
	int GetMultipleKillCount();
	void KilledHero(CDOTA_BaseNPC_Hero *, CBaseEntity *);
	void Script_KilledHero(HSCRIPT, HSCRIPT);
	virtual float GetHealthRegen();
	int ModifyGold(int, bool, int);
	void SetGold(int, bool);
	virtual void SpendGold(int, int);
	virtual int GetGold();
	int GetBonusDamageFromPrimaryStat();
	float GetPrimaryStatValue();
	void OnHeroDiedNearby(KeyValues *);
	virtual int GetGoldBounty();
	virtual int DrawDebugTextOverlays(uint64, int);
	virtual void GainedModifier(CDOTA_Buff *);
	virtual bool LostModifier(CDOTA_Buff *);
	int GetNumAttackers();
	int GetAttacker(int);
	int GetMostRecentAttacker();
	bool IsRecentAttacker(int);
	void AddRecentModifier(int, int, bool);
	int NumRecentModifiers();
	int GetRecentModifierPlayerID(int);
	bool IsRecentBuffer(int);
	bool IsRecentDebuffer(int);
	float GetMostRecentDamageTime();
	float GetTimeUntilRespawn();
	void SetTimeUntilRespawn(float);
	void Script_SetTimeUntilRespawn(float);
	bool GetRespawnsDisabled();
	void SetRespawnsDisabled(bool);
	virtual void Think();
	void SetWearableModelIndex(int, HModel);
	int HasRoomForItem(const char *, bool, bool);
	bool CanFetchItemsFromStash(CUtlStringList &);
	void PurchaseItems();
	void RetrieveItemsFromStash();
	void ClearConsumablesFromLoadout();
	bool DoesMyTeamHaveItem(const char *);
	void TeamWantsCourier(bool &, bool &);
	sLoadoutItem * GetSituationalItemPurchase();
	sLoadoutItem * GetNextItemToPurchase(bool);
	bool DoesNextItemToPurchaseCompleteRecipe();
	bool IsItemSellable(CDOTA_Item *);
	bool IsItemSituational(CDOTA_Item *);
	bool HasAnyAvailableInventorySpace();
	int GetNumItemsInStash();
	int GetNumItemsInInventory();
	void UpdateNextItemToPurchase();
	int GetPrimaryAttribute();
	void SetPrimaryAttribute(int);
	void SetKillCriteria(CResponseCriteriaSet *);
	virtual void PerformTaunt();
	virtual const char * GetSpawnEffectName();
	virtual const char * GetDeathEffectName();
	int GetCurrentXP();
	void SetCurrentXP(int);
	int GetTotalXP();
	virtual CDOTAPlayer * GetPlayerOwner();
	virtual int GetPlayerOwnerID();
	void HandleKillEaterKills(CDOTA_BaseNPC *, CDOTA_BaseNPC_Hero *, CBaseEntity *);
	void HandleKillEaterBuildingKills(CDOTA_BaseNPC *, CDOTA_BaseNPC_Building *, CBaseEntity *);
	void HandleKillEaterWardKills(CDOTA_BaseNPC *, CDOTA_BaseNPC *, CBaseEntity *);
	void EvaluateEventsForKill(CDOTA_BaseNPC *, CDOTA_BaseNPC *);
	virtual bool IsReincarnating();
	bool WillReincarnate();
	void OnHeroEnterShopSpeech(DOTA_SHOP_TYPE);
	void OnHeroLeaveShopSpeech(DOTA_SHOP_TYPE);
	bool TestHeroDawdlingInShop(DOTA_SHOP_TYPE);
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	virtual bool UnitCanRespawn();
	bool HasOwnerAbandoned();
	bool IsOwnerDisconnectedButNotAbandoned();
	float GetRemainingDirectorActivity();
	void StartHeroDirectorActivity(float);
	void ReplicateModelFromOtherHero(CDOTA_BaseNPC_Hero *);
	CDOTA_BaseNPC_Hero * GetReplicatingOtherHero();
	void OnHeroCreateCompanionSpawnCompletion(CDOTA_BaseNPC *, const CEntityKeyValues *);
	void AddPetsFromWearables();
	void CreatePet(const CPetModifier *, CEconEntity *);
	void ForcePetRemoval();
	CEconItemView * GetGreevil();
	void AddGankMusicElement(int, float);
	float SendGankProbability(CDOTA_BaseNPC_Hero *);
	void SendGankerProbability(CDOTA_BaseNPC_Hero *, float);
	void RemoveGankMusicElements();
	void CheckGankEnemies();
	void InventoryUpdated(CPlayerInventory *);
	void CheckForCourierChange(CEconItemView *, int);
	void CheckForWardChange(CEconItemView *, int);
	void CheckForCourierOrWardChange();
	void UpdateSharedEconItemSlots();
	void UpdateActionItemSlot();
	CDOTABaseAbility * GetEconConsumableAbility();
	void UpdateBotDifficulty();
	void SetBotDifficulty(int);
	bool HasCustomKillEffect();
	const char * GetCustomKillEffect();
	void SetCustomKillEffect(const char *);
	bool IsPlayingCustomKillEffect();
	void SetRespawnPosition(Vector);
	const char * GetCustomHexModel();
	virtual bool IsInventoryEnabled();
	virtual void RecordCompendiumAbilityDamage(int, int);
	virtual void RecordCompendiumFarmEfficiency(int, float, float);
	virtual void GenerateCompendiumStats();
	bool HasPet();
	CDOTA_BaseNPC_Pet * GetNearestPet();
	void GetAllPets(CUtlVector<CDOTA_BaseNPC_Pet*, CUtlMemory<CDOTA_BaseNPC_Pet*, int> > *);
	void AddAbilityToPendingDelete(CDOTABaseAbility *);
	int NumItemsPurchased();
	uint32 GetItemPurchased(int);
	float GetItemPurchasedTime(int);
	void AddItemPurchasedHistory(uint32, int);
	void RemoveSoldBackItemFromHistory(uint32);
	int NumAbilitiesSkilled(int);
	uint32 GetAbilitySkilled(int, int);
	void AddAbilitySkilledHistory(uint32);
	void DumpItemAbilityHistory();
	bool HasChangedCourierSincePrecache();
	bool HasChangedWardsSincePrecache();
	virtual bool HasRefcountedModifiers();
	void SetNewARDMHero(EHANDLE);
	EHANDLE GetNewARDMHero();
	void SetLastHealEvent(int, float, EHANDLE);
	int GetLastHealEventAmount();
	float GetLastHealEventTime();
	EHANDLE GetLastHealEventEntity();
	bool PerformAutoTaunt(float, bool);

protected:

	virtual void LoadNPCData(int, const CEntityKeyValues *, CDotaDict *);

private:

	bool LoadHeroesFile(const CEntityKeyValues *);
	const char * GetPortraitMaterial(const char *);
	virtual int GetEconSpecifyingPlayerOverrideID();
	void ThinkSpeech();
	const char * GetEconItemHeroModelOverride();
	void RemovePet(int);
	const char * GetLastUsedActiveAbility();
	void SetLastUsedActiveAbility(const char *);
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[65] ShouldTransmit
	// vtable[8] Spawn
	// vtable[92] Event_Killed
	// vtable[6] Precache
	// vtable[490] CalculateStatBonus
	// vtable[392] InitialSpawn
	// vtable[488] ShouldDoFlyHeightVisual
	// vtable[445] HasFlyingVision
	// vtable[491] OnIllusionPostSpawn
	// vtable[483] BuildWearableSpawnList
	// vtable[484] UpdateNonCacheableWearableData
	// vtable[482] OnAssetModifiersUpdated
	// vtable[387] DeathComplete
	// vtable[492] HeroLevelUp
	// vtable[493] AddExperience
	// vtable[409] GetDeathXP
	// vtable[494] RespawnHero
	// vtable[416] GetBaseDamageMin
	// vtable[417] GetBaseDamageMax
	// vtable[418] GetPhysicalArmorValue
	// vtable[431] GetManaRegen
	// vtable[426] GetStatsBasedManaRegen
	// vtable[435] GetIncreasedAttackSpeed
	// vtable[495] UpgradeAbility
	// vtable[496] GetStrength
	// vtable[497] GetAgility
	// vtable[498] GetIntellect
	// vtable[319] OnTakeDamage_Alive
	// vtable[499] GetAdditionalOwnedUnits
	// vtable[430] GetHealthRegen
	// vtable[500] SpendGold
	// vtable[397] GetGold
	// vtable[410] GetGoldBounty
	// vtable[79] DrawDebugTextOverlays
	// vtable[449] GainedModifier
	// vtable[450] LostModifier
	// vtable[117] Think
	// vtable[463] PerformTaunt
	// vtable[501] GetSpawnEffectName
	// vtable[502] GetDeathEffectName
	// vtable[413] GetPlayerOwner
	// vtable[414] GetPlayerOwnerID
	// vtable[438] IsReincarnating
	// vtable[159] ModifyOrAppendCriteria
	// vtable[466] OnSaveState
	// vtable[467] OnLoadState
	// vtable[477] UnitCanRespawn
	// vtable[480] IsInventoryEnabled
	// vtable[503] RecordCompendiumAbilityDamage
	// vtable[504] RecordCompendiumFarmEfficiency
	// vtable[505] GenerateCompendiumStats
	// vtable[437] HasRefcountedModifiers
	// vtable[485] LoadNPCData
	// vtable[487] GetEconSpecifyingPlayerOverrideID
	// vtable[4] GetScriptDesc
	// sizeof = 5872
};

// src/game/server/dota/npc/dota_npc_hero.h:826
class CDOTAHeroPositionsElement {
	float m_flTime;  // +0x0
	bool m_bAlive;  // +0x10

	int m_iHealth;  // +0x14
	CDOTAHeroPositionsElement();

	// sizeof = 24
};

// src/game/server/dota/npc/dota_npc_hero.h:837
class CDOTAHeroPositions {
	CDOTAHeroPositionsElementList m_pPositionList;  // +0x0
	CDOTAHeroPositions();

	// sizeof = 80
};

// src/game/server/dota/npc/dota_npc_hero.h:845
class CDOTAMusicSystemElement {
	float m_flDistance;  // +0x40
	float m_flWeight;  // +0x44
	bool m_bPassedTrigger;  // +0x48
	CDOTAMusicSystemElement();
	~CDOTAMusicSystemElement();

	// sizeof = 80
};

// src/game/server/dota/npc/dota_npc_hero.h:875
struct HeroLimitedUnitTracker_t {
	EHANDLE hHero;  // +0x0
	HeroLimitedUnitTracker_t();
	bool LessFunc(const HeroLimitedUnitTracker_t &, const HeroLimitedUnitTracker_t &);

	// sizeof = 8
};

// src/game/server/dota/npc/dota_npc_hero.h:893
class CDOTAHeroList : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*, short unsigned int, bool (*)(const CHandle<CBaseEntity>&, const CHandle<CBaseEntity>&)> m_HeroPositionHistory;  // +0x18
	CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >*, short unsigned int, bool (*)(const HeroLimitedUnitTracker_t&, const HeroLimitedUnitTracker_t&)> m_mapHeroToLimitedUnits;  // +0x70
	typedef CAutoGameSystem BaseClass;
	CDOTAHeroList(CDOTAHeroList &);
	CDOTAHeroList(const CDOTAHeroList &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTAHeroList *);
	CDOTAHeroList();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	void AddHeroToList(CDOTA_BaseNPC_Hero *);
	void RemoveHeroFromList(CDOTA_BaseNPC_Hero *);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	void RemoveOldHeroPositions();
	void UpdateHeroPositions();
	void RemoveAllHeroPositions();
	int GetHeroCount();
	CDOTA_BaseNPC_Hero * GetHero(int);
	int GetLivingHeroCountByTeam(int *);
	void GameEnded(int);
	void GameStarted();
	void DistributeRewardsForKill(CDOTA_BaseNPC *, CDOTA_BaseNPC *, CBaseEntity *);
	void AddPossibleBattleMusicPoint(CDOTA_BaseNPC *, CDOTA_BaseNPC *, EHANDLE);
	void CalculateMusic();
	void Script_GiveXP(CDOTA_BaseNPC_Hero *, float);
	void Script_GiveGold(int, int, bool);
	void LimitedUnitEnsureSpace(CDOTA_BaseNPC *, EHeroLimitedUnitType, int, int);
	void LimitedUnitTrack(CDOTA_BaseNPC *, EHeroLimitedUnitType, CBaseEntity *);
	int GiveKillerBountyGold(CDOTA_BaseNPC *, CDOTA_BaseNPC *, int, int &, CBaseEntity *, int &, CUtlVector<int, CUtlMemory<int, int> > &);
	void GiveNearbyHeroGoldBonus(CDOTA_BaseNPC *, CDOTA_BaseNPC *, int &, int &, int &);
	void GiveTeamGoldReward(CDOTA_BaseNPC *, CDOTA_BaseNPC *, int);
	void GiveExperience(CDOTA_BaseNPC *, CDOTA_BaseNPC *, float);
	void GiveNearbyHeroExperienceBonus(CDOTA_BaseNPC *, CDOTA_BaseNPC *);
	void DistributeFarmClaim(CDOTA_BaseNPC *, CDOTA_BaseNPC *, int);
	void GiveAdditionalAssists(CDOTA_BaseNPC *, CDOTA_BaseNPC *);
	int GivePlayerFullBountyGold(int, int, int &, CDOTA_BaseNPC_Hero *, CBaseEntity *);
	void TriggerFirstBlood(int &, int, int);
	void GiveXP(CDOTA_BaseNPC_Hero *, float, EDOTA_ModifyXP_Reason);
	bool GiveGold(int, int, bool, EDOTA_ModifyGold_Reason);
	void ShowGoldOverhead(int, int, bool);
	virtual ~CDOTAHeroList();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// vtable[25] FrameUpdatePostEntityThink
	// sizeof = 152
};

// src/game/server/dota/npc/dota_npc_hero.h:996
class CDOTA_Pet_CarriedItem : public CBaseAnimating {
public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_Pet_CarriedItem(CDOTA_Pet_CarriedItem &);
	CDOTA_Pet_CarriedItem(CDOTA_Pet_CarriedItem &);
	CDOTA_Pet_CarriedItem();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	void SetHeroHandle(CDOTA_BaseNPC_Hero *);
	virtual ~CDOTA_Pet_CarriedItem();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[65] ShouldTransmit
	// sizeof = 1224
};

// src/game/server/dota/npc/dota_npc_hero.h:1012
class CDOTA_BaseNPC_Pet : public CDOTA_BaseNPC {
public:

private:

	float m_flPetThreatLevel;  // +0x119c
	bool m_bReadyToPerformCoopTeleport;  // +0x11a0
	bool m_bSupportsCoopTeleport;  // +0x11a1

	int m_nPetLevel;  // +0x11b4
	int m_nXPCompendiumEventID;  // +0x11c0
	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_BaseNPC_Pet(CDOTA_BaseNPC_Pet &);
	CDOTA_BaseNPC_Pet(CDOTA_BaseNPC_Pet &);
	CDOTA_BaseNPC_Pet();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void HandleAnimEvent(animevent_t *);
	virtual bool IsPet();
	virtual void CalculateActivityModifiers(Activity);
	void SetPickupItemModel(const char *);
	const char * GetPickupItemModel();
	bool IsCarryingItem();
	void PickupItem(const char *);
	void DropItem();
	CDOTA_BaseNPC_Hero * GetHeroHandle();
	void SetHeroHandle(CDOTA_BaseNPC_Hero *);
	void SetPetThreatLevel(float);
	float GetPetThreatLevel();
	void SetReadyToPerformCoopTeleport(bool);
	bool CanPerformCoopTeleport();
	bool HasCoopState();
	void SetCoopState(PetCoopStates_t);
	bool ShouldPerformCoopTeleport();
	bool ShouldPerformCoopTeleportEnd();
	bool ShouldPerformCoopTeleportExit();
	bool ShouldPerformObserverWard();
	bool ShouldPerformSentryWard();
	bool SupportsCoopTeleport();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	void SetupPetLevel(const CPetModifier *);
	void UpdatePetLevel();
	int GetPetLevel();
	virtual ~CDOTA_BaseNPC_Pet();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[229] HandleAnimEvent
	// vtable[404] IsPet
	// vtable[442] CalculateActivityModifiers
	// vtable[65] ShouldTransmit
	// sizeof = 4552
};
