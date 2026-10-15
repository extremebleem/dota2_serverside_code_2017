// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_base_ability.h:27
class CDOTABaseAbility : public CBaseEntity {
	class NetworkVar_m_bHidden {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bActivated {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iDirtyButtons {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iLevel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bToggleState {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bInAbilityPhase {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fCooldown {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iCastRange {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flCooldownLength {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iManaCost {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bAutoCastState {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flChannelStartTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bInIndefiniteCooldown {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bFrozenCooldown {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flOverrideCastPoint {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bStolen {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

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

public:

private:

	static datamap_t m_DataMap;

protected:

	int m_iAbilityIndex;  // +0x310
	bool m_bChanneling;  // +0x314
	bool m_bReflection;  // +0x315
	bool m_bRefCountsModifiers;  // +0x316

	int m_iModifierRefCount;  // +0x318
	bool m_bWantsToNeutralCast;  // +0x31c

	EHANDLE m_hNeutralCastTarget;  // +0x320

private:

	typedef CDOTABaseAbility ThisClass;
	CDOTABaseAbility(CDOTABaseAbility &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CDOTABaseAbility();
	virtual ~CDOTABaseAbility();
	virtual void UpdateOnRemove();
	void LoadAbilityData(bool);
	DOTAAbilityData_t * GetAbilityData();
	KeyValues * GetAbilityKeyValues();
	ScriptVariant_t Script_GetAbilityKeyValues();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void OwnerRespawned();
	virtual void Think();
	CDOTAPlayer * GetControllingPlayer();
	CDOTA_BaseNPC * GetCaster();
	HSCRIPT Script_GetCaster();
	virtual bool IsReflectable();
	virtual bool IsReflectionDelayed();
	virtual void CopyAbilityState(CDOTABaseAbility *);
	void SetIsReflection(bool);
	bool IsReflection();
	void InitBaseValues();
	virtual Activity GetGestureBasedActivity();
	CBaseEntity * GetCursorTarget();
	HSCRIPT Script_GetCursorTarget();
	Vector GetCursorPosition();
	bool GetCursorTargetingNothing();
	int GetLevel();
	virtual void SetLevel(int);
	void Script_SetLevel(int);
	int GetEffectiveLevel();
	bool IsTrained();
	virtual float GetPlaybackRateOverride();
	const char * GetAbilityName();
	void SetAbilityIndex(int);
	int GetAbilityIndex();
	virtual int GetAbilityType();
	void UpgradeAbility(bool);
	virtual void OnAbilityPinged(int);
	virtual void ModifyAbilityPingMessage(CDOTAUserMsg_AbilityPing &);
	AbilityLearnResult_t CanAbilityBeUpgraded();
	int GetHeroLevelRequiredToUpgrade();
	bool IsPassive();
	bool IsToggle();
	bool IsHidden();
	bool IsActivated();
	virtual bool IsRefreshable();
	virtual bool IsHiddenAbilityCastable();
	virtual bool IsCosmetic(CBaseEntity *);
	bool Script_IsCosmetic(HSCRIPT);
	virtual bool IsSharedWithTeammates();
	virtual bool IsGrantedByScepter();
	virtual bool CausesAutoattack();
	void SetHidden(bool);
	void SetActivated(bool);
	void ToggleAutoCast();
	bool GetAutoCastState();
	virtual bool IsItem();
	virtual bool IsAlertableItem();
	virtual float GetChannelTime();
	float GetChannelStartTime();
	void EndChannel(bool);
	void ToggleAbility();
	void CastAbility();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	int Script_GetCastRange(const Vector &, HSCRIPT);
	virtual int GetCastRangeBuffer();
	virtual int GetCastRangeBonus();
	virtual int GetEffectiveCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual int GetEffectiveCastRangeWithBuffer(const Vector &, CDOTA_BaseNPC *);
	virtual float GetCastPoint();
	virtual float GetEffectiveCastPoint();
	virtual bool ContinueCasting();
	virtual Activity GetCastAnimation();
	virtual Activity GetChannelAnimation();
	bool GetAnimationIgnoresModelScale();
	void SetOverrideCastPoint(float);
	virtual float GetModifierValue();
	virtual float GetModifierValueBonus();
	void SetRefCountsModifiers(bool);
	bool RefCountsModifiers();
	void IncrementModifierRefCount();
	void DecrementModifierRefCount();
	int NumModifiersUsingAbility();
	bool IsFullyCastable();
	virtual bool IsAttributeBonus();
	virtual bool ProcsMagicStick();
	virtual EAbilityAbuseType GetPotentialAbuseType();
	virtual void StartCooldown(float);
	void EndCooldown();
	virtual float GetCooldown(int);
	virtual float GetCooldownModifier(int);
	virtual float GetEffectiveCooldown(int);
	virtual bool IsCooldownReady();
	const char * GetSharedCooldownName();
	float GetCooldownTime();
	float GetCooldownTimeRemaining();
	void SetInIndefiniteCooldown(bool);
	bool IsInIndefiniteCooldown();
	void SetFrozenCooldown(bool);
	bool IsFrozenCooldown();
	virtual bool ShouldUseResources();
	void UseResources(bool, bool, bool, CDOTA_BaseNPC *);
	void Script_UseResources(bool, bool, bool);
	void PayManaCost(CDOTA_BaseNPC *);
	void Script_PayManaCost();
	void RefundManaCost();
	bool IsOwnersManaEnough();
	void PayGoldCost();
	bool IsOwnersGoldEnough(int);
	void PayGoldCostForUpgrade();
	bool IsOwnersGoldEnoughForUpgrade();
	virtual int GetAbilityDamage();
	virtual float GetDamage();
	float GetDuration();
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	virtual CDOTA_BaseNPC * GetCloneSource();
	HSCRIPT Script_GetCloneSource();
	void CreateVisibilityNode(const Vector &, float, float);
	virtual int UpdateTransmitState();
	bool GetToggleState();
	virtual int GetBehavior();
	int GetAbilityTargetTeam();
	virtual int GetAbilityTargetType();
	int GetAbilityTargetFlags();
	int GetAbilityDamageType();
	int GetAbilityImmunityType();
	int GetAbilityDispellableType();
	int GetMaxLevel();
	virtual int GetCurrentAbilityDamageType();
	virtual int GetCurrentAbilityImmunityType();
	virtual int GetAllowedTargetBehavior();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(const Vector &);
	virtual int CastFilterResult();
	virtual const char * GetCustomCastError();
	virtual CDOTA_Buff * RefreshIntrinsicModifier();
	virtual CDOTA_Buff * GetIntrinsicModifier();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual void OnSpellStart();
	virtual void OnChannelFinish(bool);
	virtual void OnUpgrade();
	virtual void OnOwnerSpawned();
	virtual void OnToggle();
	virtual void OnOwnerDied();
	virtual float GetBackswingTime();
	virtual int GetManaCost(int);
	virtual int GetEffectiveManaCost(int);
	virtual int GetChannelledManaCostPerSecond(int);
	virtual int GetGoldCost(int);
	virtual int GetGoldCostForUpgrade(int);
	virtual void OnParentTakeDamage(CDOTA_BaseNPC *, int);
	virtual void OnHeroDiedNearby(KeyValues *);
	virtual const char * GetIntrinsicModifierName();
	virtual bool ResetToggleOnRespawn();
	virtual void OnHeroLevelUp();
	virtual void OnInventoryContentsChanged();
	virtual void OnItemEquipped(CDOTA_Item *);
	virtual void OnHeroCalculateStatBonus();
	virtual bool HeroXPChange(float);
	virtual void GetAdditionalOwnedUnits(CUtlVector<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> > *);
	virtual void OnAbilityUpgrade(CDOTABaseAbility *);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual void OnProjectileThink(const Vector &);
	virtual void OnProjectileThink(int);
	virtual void OnProjectileThink_ExtraData(int, KeyValues *);
	virtual void OnProjectileThink_ExtraData(const Vector &, KeyValues *);
	virtual void OnProjectileThink_ExtraData(int, const Vector &, KeyValues *);
	virtual void OnChannelThink(float);
	virtual void MarkAbilityButtonDirty();
	void SpeakAbilityConcept(int);
	virtual bool ShouldSpeakAbilityConcept(int);
	virtual int GetConceptRecipientType();
	virtual DOTAAbilitySpeakTrigger_t SpeakTrigger();
	void SetInAbilityPhase(bool);
	bool IsInAbilityPhase();
	virtual bool AbilitySuppressesTaunt();
	void SetChanneling(bool);
	bool IsChanneling();
	virtual bool RequiresFacing();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual bool IsStealable();
	virtual bool IsHiddenWhenStolen();
	void SetStolen(bool);
	bool IsStolen();
	virtual void OnStolen(CDOTABaseAbility *);
	virtual void OnUnStolen();
	virtual bool PlaysDefaultAnimWhenStolen();
	virtual const char * GetStolenActivityModifier();
	virtual bool ShouldNeutralCast();
	virtual int GetNeutralCastType();
	virtual EHANDLE GetNeutralCastTarget();
	virtual bool WantsToNeutralCast();
	virtual void SetWantsToNeutralCast(bool);
	virtual void SetNeutralCastTarget(EHANDLE);
	virtual void DoDesiredCast();
	virtual void RefreshCharges();
	int GetNumSpecialAbilities();
	DOTASpecialAbility_t * GetSpecialAbilityByIndex(int);
	void SetBackedByEconConsumableIndex(item_definition_index_t);
	virtual void OnVectorTargetLocation(Vector);
	bool HasSpecialValueFor(const char *);
	void SetBotUsage(CDOTA_Bot_AbilityUsage *);
	CDOTA_Bot_AbilityUsage * GetBotUsage();
	CDOTABaseAbility_BotScript * GetBotScript();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual float GetStunDuration();
	virtual bool HasBlink();
	virtual bool HasMinistunOnAttack();
	virtual bool HasSilence();
	virtual bool HasInvisibility();
	virtual float GetAvoidRadius();
	virtual bool IsAvoidMagical();
	virtual bool IsAvoidPhysical();
	virtual float GetAvoidStrength(CDOTA_Bot *);
	virtual bool WantsToChannelCancel();
	void ProcessAbilityData(int, KeyValues *, KeyValues *, KeyValues *, DOTAAbilityData_t *, CUtlScratchMemoryPool *, int);
	void LoadAbilityDataSpecial(int, KeyValues *, CUtlScratchMemoryPool *, int *, DOTASpecialAbility_t * *);
	int LoadAbilityDataType(int, KeyValues *);
	int LoadAbilityDataBehavior(int, KeyValues *);
	int LoadAbilityDataTargetTeam(int, KeyValues *);
	int LoadAbilityDataTargetType(int, KeyValues *);
	int LoadAbilityDataTargetFlags(int, KeyValues *);
	int LoadAbilityDataDamageType(int, KeyValues *);
	int LoadAbilityDataImmunityType(int, KeyValues *);
	int LoadAbilityDataDispellableType(int, KeyValues *);
	fieldtype_t GetFieldType(const char *);
	void SetSpecialValue(DOTASpecialAbility_t *, int, const char *);
	const char * GetModelForDroppedItem();
	const char * GetModelAlternateForDroppedItem();
	const char * GetEffectForDroppedItem();
	virtual bool ShouldUseAlternateDroppedItemModel();
	int CreateAbilityParticleEffect(const char *, int, CBaseEntity *, CRecipientFilter *);

protected:

	void GetCastExecuteCriteria(CResponseCriteriaSet &);

private:

	void DumpSpecialAbilities();
	DOTASpecialAbility_t * GetSpecialAbility(const char *);
	ScriptVariant_t Script_GetLevelSpecialValueFor(const char *, int);
	ScriptVariant_t Script_GetSpecialValueFor(const char *);
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	/* tag__fprintf: const_type tag not supported! */;
	int GetLevelSpecialValueFor<int>(const char *, int, bool);
	float GetLevelSpecialValueFor<float>(const char *, int, bool);
	CVariantBase<CVariantDefaultAllocator> GetLevelSpecialValueFor<CVariantBase<CVariantDefaultAllocator> >(const char *, int, bool);

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[11] UpdateOnRemove
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[207] OwnerRespawned
	// vtable[117] Think
	// vtable[208] IsReflectable
	// vtable[209] IsReflectionDelayed
	// vtable[210] CopyAbilityState
	// vtable[211] GetGestureBasedActivity
	// vtable[212] SetLevel
	// vtable[213] GetPlaybackRateOverride
	// vtable[214] GetAbilityType
	// vtable[215] OnAbilityPinged
	// vtable[216] ModifyAbilityPingMessage
	// vtable[217] IsRefreshable
	// vtable[218] IsHiddenAbilityCastable
	// vtable[219] IsCosmetic
	// vtable[220] IsSharedWithTeammates
	// vtable[221] IsGrantedByScepter
	// vtable[222] CausesAutoattack
	// vtable[223] IsItem
	// vtable[224] IsAlertableItem
	// vtable[225] GetChannelTime
	// vtable[226] GetCastRange
	// vtable[227] GetCastRangeBuffer
	// vtable[228] GetCastRangeBonus
	// vtable[229] GetEffectiveCastRange
	// vtable[230] GetEffectiveCastRangeWithBuffer
	// vtable[231] GetCastPoint
	// vtable[232] GetEffectiveCastPoint
	// vtable[233] ContinueCasting
	// vtable[234] GetCastAnimation
	// vtable[235] GetChannelAnimation
	// vtable[236] GetModifierValue
	// vtable[237] GetModifierValueBonus
	// vtable[238] IsAttributeBonus
	// vtable[239] ProcsMagicStick
	// vtable[240] GetPotentialAbuseType
	// vtable[241] StartCooldown
	// vtable[242] GetCooldown
	// vtable[243] GetCooldownModifier
	// vtable[244] GetEffectiveCooldown
	// vtable[245] IsCooldownReady
	// vtable[246] ShouldUseResources
	// vtable[247] GetAbilityDamage
	// vtable[162] GetDamage
	// vtable[90] OnTakeDamage
	// vtable[248] OnSaveState
	// vtable[249] OnLoadState
	// vtable[250] GetCloneSource
	// vtable[64] UpdateTransmitState
	// vtable[251] GetBehavior
	// vtable[252] GetAbilityTargetType
	// vtable[253] GetCurrentAbilityDamageType
	// vtable[254] GetCurrentAbilityImmunityType
	// vtable[255] GetAllowedTargetBehavior
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[258] CastFilterResult
	// vtable[259] GetCustomCastError
	// vtable[260] CastFilterResult
	// vtable[261] GetCustomCastError
	// vtable[262] RefreshIntrinsicModifier
	// vtable[263] GetIntrinsicModifier
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[268] OnUpgrade
	// vtable[269] OnOwnerSpawned
	// vtable[270] OnToggle
	// vtable[271] OnOwnerDied
	// vtable[272] GetBackswingTime
	// vtable[273] GetManaCost
	// vtable[274] GetEffectiveManaCost
	// vtable[275] GetChannelledManaCostPerSecond
	// vtable[276] GetGoldCost
	// vtable[277] GetGoldCostForUpgrade
	// vtable[278] OnParentTakeDamage
	// vtable[279] OnHeroDiedNearby
	// vtable[280] GetIntrinsicModifierName
	// vtable[281] ResetToggleOnRespawn
	// vtable[282] OnHeroLevelUp
	// vtable[283] OnInventoryContentsChanged
	// vtable[284] OnItemEquipped
	// vtable[285] OnHeroCalculateStatBonus
	// vtable[286] HeroXPChange
	// vtable[287] GetAdditionalOwnedUnits
	// vtable[288] OnAbilityUpgrade
	// vtable[289] OnProjectileHit
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[291] OnProjectileThink
	// vtable[292] OnProjectileThink
	// vtable[293] OnProjectileThink_ExtraData
	// vtable[294] OnProjectileThink_ExtraData
	// vtable[295] OnProjectileThink_ExtraData
	// vtable[296] OnChannelThink
	// vtable[297] MarkAbilityButtonDirty
	// vtable[298] ShouldSpeakAbilityConcept
	// vtable[299] GetConceptRecipientType
	// vtable[300] SpeakTrigger
	// vtable[301] AbilitySuppressesTaunt
	// vtable[302] RequiresFacing
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[305] IsStealable
	// vtable[306] IsHiddenWhenStolen
	// vtable[307] OnStolen
	// vtable[308] OnUnStolen
	// vtable[309] PlaysDefaultAnimWhenStolen
	// vtable[310] GetStolenActivityModifier
	// vtable[311] ShouldNeutralCast
	// vtable[312] GetNeutralCastType
	// vtable[313] GetNeutralCastTarget
	// vtable[314] WantsToNeutralCast
	// vtable[315] SetWantsToNeutralCast
	// vtable[316] SetNeutralCastTarget
	// vtable[317] DoDesiredCast
	// vtable[318] RefreshCharges
	// vtable[319] OnVectorTargetLocation
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// vtable[322] GetStunDuration
	// vtable[323] HasBlink
	// vtable[324] HasMinistunOnAttack
	// vtable[325] HasSilence
	// vtable[326] HasInvisibility
	// vtable[327] GetAvoidRadius
	// vtable[328] IsAvoidMagical
	// vtable[329] IsAvoidPhysical
	// vtable[330] GetAvoidStrength
	// vtable[331] WantsToChannelCancel
	// vtable[332] ShouldUseAlternateDroppedItemModel
	// vtable[4] GetScriptDesc
	// sizeof = 912
};
