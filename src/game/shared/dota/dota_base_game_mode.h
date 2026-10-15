// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_base_game_mode.h:43
class CDOTABaseGameMode : public CBaseEntity {
	class NetworkVar_m_nCustomGameForceHeroSelectionId {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bAlwaysShowPlayerInventory {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bGoldSoundDisabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bRecommendedItemsDisabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bStickyItemDisabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bStashPurchasingDisabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bFogOfWarDisabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bUseUnseenFOW {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bUseCustomBuybackCost {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bUseCustomBuybackCooldown {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bBuybackEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flCameraDistanceOverride {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hOverrideSelectionEntity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bTopBarTeamValuesOverride {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bTopBarTeamValuesVisible {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nTeamGoodGuysTopBarValue {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nTeamBadGuysTopBarValue {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bAlwaysShowPlayerNames {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bUseCustomHeroLevels {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nCustomXPRequiredToReachNextLevel {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_bTowerBackdoorProtectionEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bBotThinkingEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bAnnouncerDisabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bKillingSpreeAnnouncerDisabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFixedRespawnTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nHUDVisibilityBits {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flMinimumAttackSpeed {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flMaximumAttackSpeed {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bIsDaynightCycleDisabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bAreWeatherEffectsDisabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	bool m_bLoseGoldOnDeath;  // +0x35e
	bool m_bRemoveIllusionsOnDeath;  // +0x35f
	bool m_bRuneTypeEnabled[7];  // +0x360
	bool m_bOverrideBotLateGame;  // +0x367
	bool m_bBotsAlwaysPushWithHuman;  // +0x368
	bool m_bBotsInLateGame;  // +0x369

	int m_nBotMaxPushTier;  // +0x36c
	float m_flFountainPercentageHealthRegen;  // +0x370
	float m_flFountainPercentageManaRegen;  // +0x374
	float m_flFountainConstantManaRegen;  // +0x378

	typedef CDOTABaseGameMode ThisClass;

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
	CDOTABaseGameMode(CDOTABaseGameMode &);
	CDOTABaseGameMode(CDOTABaseGameMode &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTABaseGameMode();
	bool GetAlwaysShowPlayerInventory();
	bool GetGoldSoundDisabled();
	bool GetRecommendedItemsDisabled();
	bool GetStashPurchasingDisabled();
	bool GetStickyItemDisabled();
	bool GetFogOfWarDisabled();
	bool GetCustomBuybackCostEnabled();
	bool GetCustomBuybackCooldownEnabled();
	bool IsBuybackEnabled();
	bool GetAlwaysShowPlayerNames();
	float GetCameraDistanceOverride();
	CDOTA_BaseNPC * GetOverrideSelectionEntity();
	void SetTopBarTeamValuesOverride(bool);
	bool GetTopBarTeamValuesOverride();
	void SetTopBarTeamValuesVisible(bool);
	bool GetTopBarTeamValuesVisible();
	int GetTopBarTeamValue(int);
	void SetTopBarTeamValue(int, int);
	bool GetUseCustomHeroLevels();
	int GetCustomHeroMaxLevel();
	int GetCustomXPRequiredToReachNextLevel(int);
	bool GetTowerBackdoorProtectionEnabled();
	bool GetBotThinkingEnabled();
	bool IsCustomHeroSelectEnabled();
	void GetCustomHeroListForPlayer(int, CUtlVector<int, CUtlMemory<int, int> > *, int *);
	bool GetAnnouncerDisabled();
	bool GetKillingSpreeAnnouncerDisabled();
	float GetFixedRespawnTime();
	int GetMinimumAttackSpeed();
	int GetMaximumAttackSpeed();
	bool IsDaynightCycleDisabled();
	void SetDaynightCycleDisabled(bool);
	bool AreWeatherEffectsDisabled();
	void SetWeatherEffectsDisabled(bool);
	bool GetHUDVisible(int);
	int GetHUDVisibilityBits();
	virtual void Spawn(const CEntityKeyValues *);
	void SetAlwaysShowPlayerInventory(bool);
	void SetGoldSoundDisabled(bool);
	void SetRecommendedItemsDisabled(bool);
	void SetStashPurchasingDisabled(bool);
	void SetStickyItemDisabled(bool);
	void SetFogOfWarDisabled(bool);
	void SetUnseenFogOfWarEnabled(bool);
	void SetCustomBuybackCostEnabled(bool);
	void SetCustomBuybackCooldownEnabled(bool);
	void SetBuybackEnabled(bool);
	void SetCameraDistanceOverride(float);
	void SetOverrideSelectionEntity(CDOTA_BaseNPC *);
	void Script_SetOverrideSelectionEntity(HSCRIPT);
	void SetAlwaysShowPlayerNames(bool);
	void SetUseCustomHeroLevels(bool);
	void SetCustomHeroMaxLevel(int);
	void SetCustomXPRequiredToReachNextLevel(HSCRIPT);
	void SetRuneEnabled(int, bool);
	void SetRemoveIllusionsOnDeath(bool);
	bool GetRemoveIllusionsOnDeath();
	void SetLoseGoldOnDeath(bool);
	bool GetLoseGoldOnDeath();
	void SetTowerBackdoorProtectionEnabled(bool);
	void SetBotThinkingEnabled(bool);
	void SetBotsInLateGame(bool);
	bool GetBotsInLateGame();
	bool HasBotLateGameOverride();
	void SetBotsMaxPushTier(int);
	int GetBotsMaxPushTier();
	void SetBotsAlwaysPushWithHuman(bool);
	bool GetBotsAlwaysPushWithHuman();
	void SetCustomGameForceHero(const char *);
	void SetAnnouncerDisabled(bool);
	void SetKillingSpreeAnnouncerDisabled(bool);
	void SetFixedRespawnTime(float);
	void SetFountainPercentageHealthRegen(float);
	float GetFountainPercentageHealthRegen();
	void SetFountainPercentageManaRegen(float);
	float GetFountainPercentageManaRegen();
	void SetFountainConstantManaRegen(float);
	float GetFountainConstantManaRegen();
	void SetHUDVisible(int, bool);
	void SetMinimumAttackSpeed(int);
	void SetMaximumAttackSpeed(int);
	void SpawnRunes(bool);
	bool IsValidRune(int);
	int GetFilteredRuneType(int, CBaseEntity *);
	void SetTrackingProjectileFilter(HSCRIPT, HSCRIPT);
	void ClearTrackingProjectileFilter();
	bool HasTrackingProjectileFilter();
	bool RunTrackingProjectileFilter(KeyValues * *);
	void SetRuneSpawnFilter(HSCRIPT, HSCRIPT);
	void ClearRuneSpawnFilter();
	bool HasRuneSpawnFilter();
	bool RunRuneSpawnFilter(KeyValues * *);
	void SetExecuteOrderFilter(HSCRIPT, HSCRIPT);
	void ClearExecuteOrderFilter();
	bool HasExecuteOrderFilter();
	bool RunExecuteOrderFilter(KeyValues * *);
	void SetDamageFilter(HSCRIPT, HSCRIPT);
	void ClearDamageFilter();
	bool HasDamageFilter();
	bool RunDamageFilter(KeyValues * *);
	void SetBountyRunePickupFilter(HSCRIPT, HSCRIPT);
	void ClearBountyRunePickupFilter();
	bool HasBountyRunePickupFilter();
	bool RunBountyRunePickupFilter(KeyValues * *);
	void SetModifyGoldFilter(HSCRIPT, HSCRIPT);
	void ClearModifyGoldFilter();
	bool HasModifyGoldFilter();
	bool RunModifyGoldFilter(KeyValues * *);
	void SetModifyExperienceFilter(HSCRIPT, HSCRIPT);
	void ClearModifyExperienceFilter();
	bool HasModifyExperienceFilter();
	bool RunModifyExperienceFilter(KeyValues * *);
	void SetAbilityTuningValueFilter(HSCRIPT, HSCRIPT);
	void ClearAbilityTuningValueFilter();
	bool HasAbilityTuningValueFilter();
	bool RunAbilityTuningValueFilter(KeyValues * *);
	void SetModifierGainedFilter(HSCRIPT, HSCRIPT);
	void ClearModifierGainedFilter();
	bool HasModifierGainedFilter();
	bool RunModifierGainedFilter(KeyValues * *);
	void SetItemAddedToInventoryFilter(HSCRIPT, HSCRIPT);
	void ClearItemAddedToInventoryFilter();
	bool HasItemAddedToInventoryFilter();
	bool RunItemAddedToInventoryFilter(KeyValues * *);
	bool GetRuneTypeEnabled(int);
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CDOTABaseGameMode();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[4] GetScriptDesc
	// sizeof = 1056
};
