// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:51
class CDOTA_Unit_Undying_Tombstone : public CDOTA_BaseNPC_Additive {
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
	CDOTA_Unit_Undying_Tombstone(CDOTA_Unit_Undying_Tombstone &);
	CDOTA_Unit_Undying_Tombstone(CDOTA_Unit_Undying_Tombstone &);
	CDOTA_Unit_Undying_Tombstone();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	bool IsTombstone();
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual ~CDOTA_Unit_Undying_Tombstone();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[92] Event_Killed
	// sizeof = 4504
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:61
class C_CDOTA_Unit_Undying_Tombstone_MapInstall {
	C_CDOTA_Unit_Undying_Tombstone_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:94
class CDOTA_Unit_Undying_Zombie : public CDOTA_BaseNPC_Creep {
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
	CDOTA_Unit_Undying_Zombie(CDOTA_Unit_Undying_Zombie &);
	CDOTA_Unit_Undying_Zombie(CDOTA_Unit_Undying_Zombie &);
	CDOTA_Unit_Undying_Zombie();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool UnitCanRespawn();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnDying();
	virtual bool IsZombie();
	CountdownTimer * GetTimer();
	void SetParentTombstone(CDOTA_BaseNPC *);
	CDOTA_BaseNPC * GetParentTombstone();
	virtual ~CDOTA_Unit_Undying_Zombie();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[477] UnitCanRespawn
	// vtable[8] Spawn
	// vtable[469] OnDying
	// vtable[405] IsZombie
	// sizeof = 4544
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:153
class C_CDOTA_Unit_Undying_Zombie_MapInstall {
	C_CDOTA_Unit_Undying_Zombie_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:165
class CDOTA_Unit_Hero_Undying : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Undying(CDOTA_Unit_Hero_Undying &);
	CDOTA_Unit_Hero_Undying(CDOTA_Unit_Hero_Undying &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	CDOTA_Unit_Hero_Undying();
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual ~CDOTA_Unit_Hero_Undying();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[159] ModifyOrAppendCriteria
	// vtable[92] Event_Killed
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:184
class C_CDOTA_Unit_Hero_Undying_MapInstall {
	C_CDOTA_Unit_Hero_Undying_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:236
class CDOTA_Ability_Undying_Decay : public CDOTABaseAbility {
public:

private:

	int decay_damage;  // +0x390
	int radius;  // +0x394
	float decay_duration;  // +0x398
	int str_steal;  // +0x39c
	int str_steal_scepter;  // +0x3a0
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
	CDOTA_Ability_Undying_Decay(CDOTA_Ability_Undying_Decay &);
	CDOTA_Ability_Undying_Decay(CDOTA_Ability_Undying_Decay &);
	CDOTA_Ability_Undying_Decay();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual Activity GetGestureBasedActivity();
	virtual float GetAOERadius();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Undying_Decay();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[211] GetGestureBasedActivity
	// vtable[333] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:260
class C_CDOTA_Ability_Undying_Decay_MapInstall {
	C_CDOTA_Ability_Undying_Decay_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:269
class CDOTA_Modifier_Undying_Decay_Debuff : public CDOTA_Buff {
public:

private:

	int str_steal;  // +0xba8
	int str_steal_scepter;  // +0xbac
	CDOTA_Modifier_Undying_Decay_Debuff();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void OnRemoved();
	virtual void OnRefresh(KeyValues *);
	virtual bool DestroyOnExpire();
	virtual bool IsPurgable();
	virtual int GetAttributes();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	virtual const char * GetEffectName();
	int GetStealStrength();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Undying_Decay_Debuff();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[59] OnRemoved
	// vtable[58] OnRefresh
	// vtable[61] DestroyOnExpire
	// vtable[14] IsPurgable
	// vtable[7] GetAttributes
	// vtable[67] GetEffectName
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:440
class CDOTA_Modifier_Undying_Decay_DebuffCounter : public CDOTA_Buff {
public:

	CDOTA_Modifier_Undying_Decay_DebuffCounter();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_Undying_Decay_DebuffCounter();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:563
class CDOTA_Modifier_Undying_Decay_BuffCounter : public CDOTA_Buff {
public:

	CDOTA_Modifier_Undying_Decay_BuffCounter();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_Undying_Decay_BuffCounter();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:612
class CDOTA_Modifier_Undying_Decay_Buff : public CDOTA_Buff {
public:

private:

	int str_steal;  // +0xba8
	int str_steal_scepter;  // +0xbac
	int str_scale_up;  // +0xbb0
	CDOTA_Modifier_Undying_Decay_Buff();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	void OnDestroy(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnRemoved();
	virtual bool DestroyOnExpire();
	virtual bool IsPurgable();
	virtual int GetAttributes();
	ModifierVariant_t GetModifierExtraStrengthBonus(const CModifierParams &);
	ModifierVariant_t GetModelScale(const CModifierParams &);
	virtual const char * GetEffectName();
	int GetStealStrength();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Undying_Decay_Buff();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[59] OnRemoved
	// vtable[61] DestroyOnExpire
	// vtable[14] IsPurgable
	// vtable[7] GetAttributes
	// vtable[67] GetEffectName
	// vtable[11] IsHidden
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:716
class CDOTA_Ability_Undying_SoulRip : public CDOTABaseAbility {
public:

private:

	int damage_per_unit;  // +0x390
	int radius;  // +0x394
	int max_units;  // +0x398
	int tombstone_heal;  // +0x39c
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
	CDOTA_Ability_Undying_SoulRip(CDOTA_Ability_Undying_SoulRip &);
	CDOTA_Ability_Undying_SoulRip(CDOTA_Ability_Undying_SoulRip &);
	CDOTA_Ability_Undying_SoulRip();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual Activity GetGestureBasedActivity();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Undying_SoulRip();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// vtable[211] GetGestureBasedActivity
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:739
class C_CDOTA_Ability_Undying_SoulRip_MapInstall {
	C_CDOTA_Ability_Undying_SoulRip_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:902
class CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow : public CDOTA_Buff {
public:

private:

	int slow;  // +0xba8
	float m_flDecrementTime;  // +0xbac
	CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetEffectName();
	virtual bool IsHidden();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual int GetAttributes();
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[11] IsHidden
	// vtable[7] GetAttributes
	// vtable[60] OnDestroy
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:969
class CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter : public CDOTA_Buff {
public:

private:

	int slow;  // +0xba8
	CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:1025
class CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike : public CDOTABaseAbility {
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
	CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike(CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike &);
	CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike(CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike &);
	CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:1039
class CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike : public CDOTA_Buff {
public:

private:

	int health_threshold;  // +0xba8
	int radius;  // +0xbac
	float health_threshold_pct;  // +0xbb0
	float duration;  // +0xbb4
	EHANDLE m_hChaseUnit;  // +0xbb8
	CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual bool IsHidden();
	void SetChasedUnit(CDOTA_BaseNPC *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// vtable[56] OnIntervalThink
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:1207
class CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust : public CDOTA_Buff {
public:

private:

	int bonus_speed;  // +0xba8
	CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:1257
class CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier : public CDOTA_Buff {
public:

	CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier();
	virtual void CheckState(CDOTABuffState &);
	ModifierVariant_t GetAbsoluteNoDamagePhysical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamageMagical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamagePure(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	ModifierVariant_t GetDisableHealing(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual ~CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier();

	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:1378
class CDOTA_Ability_Undying_Tombstone : public CDOTABaseAbility {
public:

private:

	EHANDLE hTombstone;  // +0x3a8
	int radius;  // +0x3ac
	float duration;  // +0x3b0
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
	CDOTA_Ability_Undying_Tombstone(CDOTA_Ability_Undying_Tombstone &);
	CDOTA_Ability_Undying_Tombstone(CDOTA_Ability_Undying_Tombstone &);
	CDOTA_Ability_Undying_Tombstone();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	CDOTA_BaseNPC * FindAvailableZombie();
	int CurrentZombieCount();
	void StoreZombie(CDOTA_BaseNPC *);
	void KillZombies();
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	virtual Activity GetGestureBasedActivity();
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Undying_Tombstone();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[248] OnSaveState
	// vtable[249] OnLoadState
	// vtable[211] GetGestureBasedActivity
	// vtable[321] GetSlowDuration
	// sizeof = 952
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:1573
class CDOTA_Modifier_Undying_Tombstone_HP : public CDOTA_Buff {
public:

private:

	int tombstone_health;  // +0xba8
	CDOTA_Modifier_Undying_Tombstone_HP();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetUnitLifetimeFraction(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamagePhysical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamageMagical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamagePure(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual ~CDOTA_Modifier_Undying_Tombstone_HP();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:1677
class CDOTA_Modifier_Undying_Tombstone_Zombie_Aura : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int health_threshold;  // +0xbac
	float zombie_interval;  // +0xbb0
	CDOTA_Modifier_Undying_Tombstone_Zombie_Aura();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Undying_Tombstone_Zombie_Aura();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:1846
class CDOTA_Ability_Undying_FleshGolem : public CDOTABaseAbility {
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
	CDOTA_Ability_Undying_FleshGolem(CDOTA_Ability_Undying_FleshGolem &);
	CDOTA_Ability_Undying_FleshGolem(CDOTA_Ability_Undying_FleshGolem &);
	CDOTA_Ability_Undying_FleshGolem();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual float GetAOERadius();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Undying_FleshGolem();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[333] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:1859
class C_CDOTA_Ability_Undying_FleshGolem_MapInstall {
	C_CDOTA_Ability_Undying_FleshGolem_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:1909
class CDOTA_Modifier_Undying_FleshGolem : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	CDOTA_Modifier_Undying_FleshGolem();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool AllowIllusionDuplicate();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual int GetPriority();
	virtual bool RemoveOnDeath();
	virtual void DeclareFunctions();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	ModifierVariant_t GetModifierModelChange(const CModifierParams &);
	ModifierVariant_t GetModelScale(const CModifierParams &);
	ModifierVariant_t GetAttackSound(const CModifierParams &);
	virtual ~CDOTA_Modifier_Undying_FleshGolem();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[18] AllowIllusionDuplicate
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[6] GetPriority
	// vtable[54] RemoveOnDeath
	// vtable[65] DeclareFunctions
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_undying.cpp:2029
class CDOTA_Modifier_Undying_FleshGolem_PlagueAura : public CDOTA_Buff {
public:

private:

	int full_power_radius;  // +0xba8
	int radius;  // +0xbac
	int min_speed_slow;  // +0xbb0
	int max_speed_slow;  // +0xbb4
	int max_damage_amp;  // +0xbb8
	int min_damage_amp;  // +0xbbc
	int death_heal;  // +0xbc0
	int death_heal_creep;  // +0xbc4
	CDOTA_Modifier_Undying_FleshGolem_PlagueAura();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	ModifierVariant_t GetModifierUnitStatsNeedsRefresh(const CModifierParams &);
	virtual ~CDOTA_Modifier_Undying_FleshGolem_PlagueAura();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Undying_Tombstone::~CDOTA_Unit_Undying_Tombstone  (line 51, @0x0000000002d260d0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_Undying_Tombstone::~CDOTA_Unit_Undying_Tombstone(CDOTA_Unit_Undying_Tombstone *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Undying_Tombstone::~CDOTA_Unit_Undying_Tombstone  (line 51, @0x0000000002d26120, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_Unit_Undying_Tombstone
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Undying_Tombstone::~CDOTA_Unit_Undying_Tombstone(CDOTA_Unit_Undying_Tombstone *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Undying_Tombstone::Schema_DynamicBinding  (line 53, @0x0000000002d203d0, libserver.so)
// globals: CDOTA_Unit_Undying_Tombstone::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Undying_Tombstone::Schema_DynamicBinding(
        const CDOTA_Unit_Undying_Tombstone *const this)
{
  return CDOTA_Unit_Undying_Tombstone::s_pSchemaBinding;
}


// CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 53, @0x0000000002d20400, libserver.so)
// globals: CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::DestructInstance  (line 53, @0x0000000002d20410, libserver.so)  // inlines: Destruct<CDOTA_Unit_Undying_Tombstone>
void __fastcall CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::FreeInstance  (line 53, @0x0000000002d20430, libserver.so)
void __fastcall CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::CanAllocate  (line 53, @0x0000000002d20450, libserver.so)
bool __fastcall CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 53, @0x0000000002d20460, libserver.so)
// globals: CDOTA_Unit_Undying_Tombstone::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Undying_Tombstone::s_pSchemaBinding;
}


// CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::AllocateInstance  (line 53, @0x0000000002d25310, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4504);
  memset(v1, 0, 0x1198u);
  return v1;
}


// CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::ConstructInstance  (line 53, @0x0000000002d25c10, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_Unit_Undying_Tombstone, Construct<CDOTA_Unit_Undying_Tombstone>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_465AA90;
    *(p + 236) = &off_465B9F0;
    *(p + 257) = &off_465BD20;
  }
  return p;
}


// CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 53, @0x0000000002d35370, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 53, @0x0000000002d355d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal  (line 53, @0x0000000002d52c10, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_unit_undying_tombstone", "CDOTA_Unit_Undying_Tombstone"
// globals: `guard variable for'CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass, CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Undying_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Undying_TombstoneClassInfo, CDOTA_Unit_Undying_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Undying_TombstoneClassInfo
CEntityClass *__cdecl CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass) != 0 )
  {
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_designerName.u.m_Id = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_AllHelpers.m_Size = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_classInputs.m_Size = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_classOutputs.m_Size = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_hNetworkSerializer = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_pBaseClassInfo = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_pClassInfo = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_flags = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_nAllHelpersFlags = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_pScriptClassDesc = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_pInputs = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_nInputCount = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_pOutputs = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_nOutputCount = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_pGameClass = 0;
    CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass._vptr_CEntityClass = off_465AA10;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass);
    __cxa_atexit(
      CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Undying_TombstoneClass != 0 )
    return &CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass;
  if ( `guard variable for'CDOTA_Unit_Undying_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Undying_TombstoneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Undying_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Undying_TombstoneClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Undying_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Undying_TombstoneClassInfo,
      "CDOTA_Unit_Undying_Tombstone",
      "npc_dota_unit_undying_tombstone",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Undying_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Undying_TombstoneClassInfo);
  }
  CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_pClassInfo = &CDOTA_Unit_Undying_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Undying_TombstoneClassInfo;
  CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_pBaseClassInfo = CDOTA_Unit_Undying_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Undying_TombstoneClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Undying_TombstoneClass = &CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass;
  CDOTA_Unit_Undying_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Undying_TombstoneClassInfo.m_pClass = &CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass;
  CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_Undying_TombstoneClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_TombstoneClass;
}


// CDOTA_Unit_Undying_Tombstone::YouForgotToImplementOrDeclareServerClass  (line 61, @0x0000000002cca600, libserver.so)
int __fastcall CDOTA_Unit_Undying_Tombstone::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Undying_Tombstone *const this)
{
  return 0;
}


// CDOTA_Unit_Undying_Tombstone::GetServerClass  (line 61, @0x0000000002cddf70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Undying_Tombstone::GetServerClass(CDOTA_Unit_Undying_Tombstone *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Unit_Undying_Tombstone::Event_Killed  (line 69, @0x0000000002cd8330, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTA_BaseNPC::Event_Killed, CBaseEntity::AddEffects, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, CBaseEntity::StopSound
// strings: "particles/units/heroes/hero_undying/undying_tower_destruction.vpcf", "Building_Tombstone.Destruction", "Hero_Undying.Tombstone"
void __fastcall CDOTA_Unit_Undying_Tombstone::Event_Killed(
        CDOTA_Unit_Undying_Tombstone *const this,
        const CTakeDamageInfo *const info)
{
  unsigned __int16 v4; // dx
  int v5; // esi
  CBaseEntity *m_pInstance; // r12
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax

  CDOTA_BaseNPC::Event_Killed(this, info);
  if ( info->m_flDamage > 1.0 )
  {
    CBaseEntity::AddEffects(this, 32);
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v4 = 0x7FFF;
      v5 = 0x7FFF;
    }
    else
    {
      v4 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v5 = v4;
    }
    m_pInstance = 0;
    v7 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
    if ( v7 + 2 > 1 )
    {
      v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
      if ( v8 != 0 )
      {
        v9 = &v8[v5 & 0x1FF];
        if ( v9 != 0 && v7 == v9->m_EHandle.m_Index )
          m_pInstance = v9->m_pInstance;
      }
    }
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_undying/undying_tower_destruction.vpcf",
                 2,
                 0,
                 0,
                 m_pInstance);
    v12 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v12, Particle, 0, this, 1, 0, vec3_invalid, 1);
    v13 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v13, Particle);
    DOTA_EmitSound(8, "Building_Tombstone.Destruction", this);
    CBaseEntity::StopSound(this, "Hero_Undying.Tombstone");
  }
}


// CDOTA_Unit_Undying_Zombie::~CDOTA_Unit_Undying_Zombie  (line 94, @0x0000000002d25cb0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_Undying_Zombie::~CDOTA_Unit_Undying_Zombie(CDOTA_Unit_Undying_Zombie *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Undying_Zombie::~CDOTA_Unit_Undying_Zombie  (line 94, @0x0000000002d25d00, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_Unit_Undying_Zombie
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Undying_Zombie::~CDOTA_Unit_Undying_Zombie(CDOTA_Unit_Undying_Zombie *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Undying_Zombie::Schema_DynamicBinding  (line 96, @0x0000000002d20470, libserver.so)
// globals: CDOTA_Unit_Undying_Zombie::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Undying_Zombie::Schema_DynamicBinding(
        const CDOTA_Unit_Undying_Zombie *const this)
{
  return CDOTA_Unit_Undying_Zombie::s_pSchemaBinding;
}


// CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 96, @0x0000000002d204a0, libserver.so)
// globals: CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::DestructInstance  (line 96, @0x0000000002d204b0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Undying_Zombie>
void __fastcall CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::FreeInstance  (line 96, @0x0000000002d204d0, libserver.so)
void __fastcall CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::CanAllocate  (line 96, @0x0000000002d204f0, libserver.so)
bool __fastcall CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 96, @0x0000000002d20500, libserver.so)
// globals: CDOTA_Unit_Undying_Zombie::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Undying_Zombie::s_pSchemaBinding;
}


// CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::AllocateInstance  (line 96, @0x0000000002d25350, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4544);
  memset(v1, 0, 0x11C0u);
  return v1;
}


// CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::ConstructInstance  (line 96, @0x0000000002d32920, libserver.so)  // inlines: CDOTA_Unit_Undying_Zombie, Construct<CDOTA_Unit_Undying_Zombie>, ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep
// calls: CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep, CountdownTimer::CountdownTimer, CDOTA_BaseNPC::~CDOTA_BaseNPC, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep(p);
    *p = &off_465BDF0;
    *(p + 236) = &off_465CD50;
    *(p + 257) = &off_465D080;
    CountdownTimer::CountdownTimer(p + 188);
  }
  return p;
}


// CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 96, @0x0000000002d35490, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 96, @0x0000000002d35840, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Undying_Zombie::GetEntityClassInternal  (line 96, @0x0000000002d52570, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Creep::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_unit_undying_zombie", "CDOTA_Unit_Undying_Zombie"
// globals: `guard variable for'CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass, CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Undying_Zombie::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Undying_ZombieClassInfo, CDOTA_Unit_Undying_Zombie::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Undying_ZombieClassInfo
CEntityClass *__cdecl CDOTA_Unit_Undying_Zombie::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass) != 0 )
  {
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_designerName.u.m_Id = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_AllHelpers.m_Size = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_classInputs.m_Size = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_classOutputs.m_Size = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_hNetworkSerializer = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_pBaseClassInfo = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_pClassInfo = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_flags = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_nAllHelpersFlags = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_pScriptClassDesc = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_pInputs = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_nInputCount = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_pOutputs = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_nOutputCount = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_pGameClass = 0;
    CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass._vptr_CEntityClass = off_465BD70;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass);
    __cxa_atexit(
      CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Undying_ZombieClass != 0 )
    return &CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass;
  if ( `guard variable for'CDOTA_Unit_Undying_Zombie::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Undying_ZombieClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Undying_Zombie::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Undying_ZombieClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Creep::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Undying_Zombie::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Undying_ZombieClassInfo,
      "CDOTA_Unit_Undying_Zombie",
      "npc_dota_unit_undying_zombie",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Undying_Zombie::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Undying_ZombieClassInfo);
  }
  CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_pClassInfo = &CDOTA_Unit_Undying_Zombie::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Undying_ZombieClassInfo;
  CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_pBaseClassInfo = CDOTA_Unit_Undying_Zombie::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Undying_ZombieClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Undying_ZombieClass = &CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass;
  CDOTA_Unit_Undying_Zombie::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Undying_ZombieClassInfo.m_pClass = &CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass;
  CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_Undying_ZombieClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Undying_Zombie::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Undying_ZombieClass;
}


// CDOTA_Unit_Undying_Zombie::UnitCanRespawn  (line 100, @0x0000000002d20510, libserver.so)
bool __fastcall CDOTA_Unit_Undying_Zombie::UnitCanRespawn(CDOTA_Unit_Undying_Zombie *const this)
{
  return 1;
}


// CDOTA_Unit_Undying_Zombie::IsZombie  (line 103, @0x0000000002d20520, libserver.so)
bool __fastcall CDOTA_Unit_Undying_Zombie::IsZombie(CDOTA_Unit_Undying_Zombie *const this)
{
  return 1;
}


// CDOTA_Unit_Undying_Zombie::Spawn  (line 119, @0x0000000002cd1be0, libserver.so)
// calls: CBaseEntity::ClearFlags, CBaseEntity::SetLifeState, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC_Creep::Spawn
void __fastcall CDOTA_Unit_Undying_Zombie::Spawn(
        CDOTA_Unit_Undying_Zombie *const this,
        const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::ClearFlags(this);
  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_ALIVE);
  CDOTA_BaseNPC::ModifyHealth(this, this->m_flBaseMaxHealth, 0, 0, 0);
  CDOTA_BaseNPC_Creep::Spawn(this, pKeyValues);
}


// CDOTA_Unit_Undying_Zombie::OnDying  (line 132, @0x0000000002cd8240, libserver.so)  // inlines: NetworkStateChanged, Set, Start, operator=<float>
// calls: CountdownTimer::Now, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy
// strings: "modifier_undying_tombstone_zombie_deathlust"
void __fastcall CDOTA_Unit_Undying_Zombie::OnDying(CDOTA_Unit_Undying_Zombie *const this)
{
  CountdownTimer *p_m_ctRespawn; // r12
  float v3; // xmm0_4
  CDOTA_Buff *ModifierByName; // rax
  float v5; // [rsp+Ch] [rbp-14h]

  p_m_ctRespawn = &this->m_ctRespawn;
  v3 = CountdownTimer::Now(&this->m_ctRespawn) + 3.0;
  if ( v3 != this->m_ctRespawn.m_timestamp.m_Value )
  {
    v5 = v3;
    (*(this->m_ctRespawn._vptr_CountdownTimer + 2))(p_m_ctRespawn, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ctRespawn.m_timestamp.m_Value = v5;
  }
  if ( this->m_ctRespawn.m_duration.m_Value != 3.0 )
  {
    (*(this->m_ctRespawn._vptr_CountdownTimer + 2))(p_m_ctRespawn, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ctRespawn.m_duration.m_Value = 3.0;
  }
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(this, "modifier_undying_tombstone_zombie_deathlust", 0);
  if ( ModifierByName != 0 )
    CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
}


// CDOTA_Unit_Undying_Zombie::SetParentTombstone  (line 148, @0x0000000002cea540, libserver.so)
void __fastcall CDOTA_Unit_Undying_Zombie::SetParentTombstone(
        CDOTA_Unit_Undying_Zombie *const this,
        CDOTA_BaseNPC *pTombstone)
{
  this->m_pTombstone = pTombstone;
}


// CDOTA_Unit_Undying_Zombie::YouForgotToImplementOrDeclareServerClass  (line 153, @0x0000000002cca610, libserver.so)
int __fastcall CDOTA_Unit_Undying_Zombie::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Undying_Zombie *const this)
{
  return 0;
}


// CDOTA_Unit_Undying_Zombie::GetServerClass  (line 153, @0x0000000002cde370, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Undying_Zombie::GetServerClass(CDOTA_Unit_Undying_Zombie *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Unit_Hero_Undying::~CDOTA_Unit_Hero_Undying  (line 165, @0x0000000002d2d420, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Undying::~CDOTA_Unit_Hero_Undying(CDOTA_Unit_Hero_Undying *const this)
{
  this->_vptr_IHandleEntity = &off_465D150;
  this->_vptr_INextBotEventResponder = &off_465E130;
  this->_vptr_CObstructionObject = &off_465E460;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Undying::~CDOTA_Unit_Hero_Undying  (line 165, @0x0000000002d2d460, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Undying
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Undying::~CDOTA_Unit_Hero_Undying(CDOTA_Unit_Hero_Undying *const this)
{
  this->_vptr_IHandleEntity = &off_465D150;
  this->_vptr_INextBotEventResponder = &off_465E130;
  this->_vptr_CObstructionObject = &off_465E460;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Undying::Schema_DynamicBinding  (line 167, @0x0000000002d20530, libserver.so)
// globals: CDOTA_Unit_Hero_Undying::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Undying::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Undying *const this)
{
  return CDOTA_Unit_Hero_Undying::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 167, @0x0000000002d20560, libserver.so)
// globals: CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::DestructInstance  (line 167, @0x0000000002d20570, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Undying>
void __fastcall CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::FreeInstance  (line 167, @0x0000000002d20590, libserver.so)
void __fastcall CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::CanAllocate  (line 167, @0x0000000002d205b0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 167, @0x0000000002d205c0, libserver.so)
// globals: CDOTA_Unit_Hero_Undying::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Undying::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::AllocateInstance  (line 167, @0x0000000002d25390, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::ConstructInstance  (line 167, @0x0000000002d289c0, libserver.so)  // inlines: CDOTA_Unit_Hero_Undying, Construct<CDOTA_Unit_Hero_Undying>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_465D150;
    *(p + 236) = &off_465E130;
    *(p + 257) = &off_465E460;
  }
  return p;
}


// CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 167, @0x0000000002d35530, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 167, @0x0000000002d35870, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Undying::GetEntityClassInternal  (line 167, @0x0000000002d4ce20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_hero_undying", "CDOTA_Unit_Hero_Undying"
// globals: `guard variable for'CDOTA_Unit_Hero_Undying::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UndyingClass, CDOTA_Unit_Hero_Undying::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UndyingClass, __dso_handle, CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Undying::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_UndyingClassInfo, CDOTA_Unit_Hero_Undying::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_UndyingClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Undying::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Undying::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UndyingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Undying::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UndyingClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Undying::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UndyingClass);
    CDOTA_Unit_Hero_Undying::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UndyingClass._vptr_CEntityClass = off_465D0D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Undying::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UndyingClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Undying::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UndyingClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_UndyingClass != 0 )
    return &CDOTA_Unit_Hero_Undying::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UndyingClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Undying::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_UndyingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Undying::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_UndyingClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Undying::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_UndyingClassInfo,
      "CDOTA_Unit_Hero_Undying",
      "npc_dota_hero_undying",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Undying::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_UndyingClassInfo);
  }
  CDOTA_Unit_Hero_Undying::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UndyingClass.m_pClassInfo = &CDOTA_Unit_Hero_Undying::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_UndyingClassInfo;
  CDOTA_Unit_Hero_Undying::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UndyingClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Undying::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_UndyingClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_UndyingClass = &CDOTA_Unit_Hero_Undying::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UndyingClass;
  CDOTA_Unit_Hero_Undying::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_UndyingClassInfo.m_pClass = &CDOTA_Unit_Hero_Undying::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UndyingClass;
  CDOTA_Unit_Hero_Undying::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UndyingClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_UndyingClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Undying::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UndyingClass;
}


// CDOTA_Unit_Hero_Undying::YouForgotToImplementOrDeclareServerClass  (line 184, @0x0000000002cca620, libserver.so)
int __fastcall CDOTA_Unit_Hero_Undying::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Undying *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Undying::GetServerClass  (line 184, @0x0000000002cde170, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Undying::GetServerClass(CDOTA_Unit_Hero_Undying *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Unit_Hero_Undying::Precache  (line 193, @0x0000000002cee520, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, CFmtStrN<256, false>::CFmtStrN, DOTA_PrecacheUnitByNameSync, __stack_chk_fail
// strings: "npc_dota_unit_tombstone%d", "npc_dota_unit_undying_zombie", "npc_dota_unit_undying_zombie_torso"
void __fastcall CDOTA_Unit_Hero_Undying::Precache(
        CDOTA_Unit_Hero_Undying *const this,
        const CEntityPrecacheContext *pContext)
{
  int v3; // ebx
  IEntityResourceManifest *m_pManifest; // r13
  int v5; // edx
  CFmtStrN<256,false> v6; // [rsp+0h] [rbp-150h] BYREF
  unsigned __int64 v7; // [rsp+118h] [rbp-38h]

  v3 = 1;
  v7 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  do
  {
    m_pManifest = pContext->m_pManifest;
    v5 = v3++;
    CFmtStrN<256,false>::CFmtStrN(&v6, "npc_dota_unit_tombstone%d", v5);
    DOTA_PrecacheUnitByNameSync(v6.m_szBuf, m_pManifest, -1);
  }
  while ( v3 != 5 );
  DOTA_PrecacheUnitByNameSync("npc_dota_unit_undying_zombie", pContext->m_pManifest, -1);
  DOTA_PrecacheUnitByNameSync("npc_dota_unit_undying_zombie_torso", pContext->m_pManifest, -1);
}


// CDOTA_Unit_Hero_Undying::Event_Killed  (line 209, @0x0000000002cd0a90, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Event_Killed, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy
// strings: "modifier_undying_flesh_golem"
void __fastcall CDOTA_Unit_Hero_Undying::Event_Killed(
        CDOTA_Unit_Hero_Undying *const this,
        const CTakeDamageInfo *const info)
{
  CDOTA_Buff *ModifierByName; // rax

  CDOTA_BaseNPC_Hero::Event_Killed(this, info);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(this, "modifier_undying_flesh_golem", 0);
  if ( ModifierByName != 0 )
    CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
}


// CDOTA_Unit_Hero_Undying::ModifyOrAppendCriteria  (line 223, @0x0000000002cd0ae0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria, CDOTA_BaseNPC::FindModifierByName, CResponseCriteriaSet::AppendCriteria
// strings: "modifier_undying_flesh_golem", "isgolem"
void __fastcall CDOTA_Unit_Hero_Undying::ModifyOrAppendCriteria(
        CDOTA_Unit_Hero_Undying *const this,
        CResponseCriteriaSet *const set)
{
  float v4; // xmm2_4

  CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(this, set);
  CDOTA_BaseNPC::FindModifierByName(this, "modifier_undying_flesh_golem", 0);
  CResponseCriteriaSet::AppendCriteria(set, "isgolem", 1.0, v4);
}


// CDOTA_Ability_Undying_Decay::~CDOTA_Ability_Undying_Decay  (line 236, @0x0000000002d2c5e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Undying_Decay::~CDOTA_Ability_Undying_Decay(CDOTA_Ability_Undying_Decay *const this)
{
  this->_vptr_IHandleEntity = &off_465E530;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Undying_Decay::~CDOTA_Ability_Undying_Decay  (line 236, @0x0000000002d2c600, libserver.so)  // inlines: ~CDOTA_Ability_Undying_Decay
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Undying_Decay::~CDOTA_Ability_Undying_Decay(CDOTA_Ability_Undying_Decay *const this)
{
  this->_vptr_IHandleEntity = &off_465E530;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Undying_Decay::Schema_DynamicBinding  (line 238, @0x0000000002d205d0, libserver.so)
// globals: CDOTA_Ability_Undying_Decay::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Undying_Decay::Schema_DynamicBinding(
        const CDOTA_Ability_Undying_Decay *const this)
{
  return CDOTA_Ability_Undying_Decay::s_pSchemaBinding;
}


// CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 238, @0x0000000002d205e0, libserver.so)
// globals: CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::DestructInstance  (line 238, @0x0000000002d205f0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Undying_Decay>
void __fastcall CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::FreeInstance  (line 238, @0x0000000002d20610, libserver.so)
void __fastcall CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::CanAllocate  (line 238, @0x0000000002d20630, libserver.so)
bool __fastcall CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 238, @0x0000000002d20640, libserver.so)
// globals: CDOTA_Ability_Undying_Decay::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Undying_Decay::s_pSchemaBinding;
}


// CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::AllocateInstance  (line 238, @0x0000000002d253d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::ConstructInstance  (line 238, @0x0000000002d29630, libserver.so)  // inlines: CDOTA_Ability_Undying_Decay, Construct<CDOTA_Ability_Undying_Decay>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_465E530;
  }
  return p;
}


// CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 238, @0x0000000002d34bd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 238, @0x0000000002d34bf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Undying_Decay::GetEntityClassInternal  (line 238, @0x0000000002d4aff0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "undying_decay", "CDOTA_Ability_Undying_Decay"
// globals: `guard variable for'CDOTA_Ability_Undying_Decay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_DecayClass, CDOTA_Ability_Undying_Decay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_DecayClass, __dso_handle, CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Undying_Decay::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_DecayClassInfo, CDOTA_Ability_Undying_Decay::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_DecayClassInfo
CEntityClass *__cdecl CDOTA_Ability_Undying_Decay::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Undying_Decay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_DecayClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Undying_Decay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_DecayClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Undying_Decay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_DecayClass);
    CDOTA_Ability_Undying_Decay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_DecayClass._vptr_CEntityClass = off_465E4B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Undying_Decay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_DecayClass);
    __cxa_atexit(
      CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Undying_Decay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_DecayClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Undying_DecayClass != 0 )
    return &CDOTA_Ability_Undying_Decay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_DecayClass;
  if ( `guard variable for'CDOTA_Ability_Undying_Decay::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_DecayClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Undying_Decay::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_DecayClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Undying_Decay::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_DecayClassInfo,
      "CDOTA_Ability_Undying_Decay",
      "undying_decay",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Undying_Decay::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_DecayClassInfo);
  }
  CDOTA_Ability_Undying_Decay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_DecayClass.m_pClassInfo = &CDOTA_Ability_Undying_Decay::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_DecayClassInfo;
  CDOTA_Ability_Undying_Decay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_DecayClass.m_pBaseClassInfo = CDOTA_Ability_Undying_Decay::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_DecayClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Undying_DecayClass = &CDOTA_Ability_Undying_Decay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_DecayClass;
  CDOTA_Ability_Undying_Decay::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_DecayClassInfo.m_pClass = &CDOTA_Ability_Undying_Decay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_DecayClass;
  CDOTA_Ability_Undying_Decay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_DecayClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Undying_DecayClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Undying_Decay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_DecayClass;
}


// CDOTA_Ability_Undying_Decay::GetGestureBasedActivity  (line 244, @0x0000000002d20650, libserver.so)
Activity __fastcall CDOTA_Ability_Undying_Decay::GetGestureBasedActivity(CDOTA_Ability_Undying_Decay *const this)
{
  return 1666;
}


// CDOTA_Ability_Undying_Decay::GetAOERadius  (line 247, @0x0000000002d471e0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Undying_Decay::GetAOERadius(CDOTA_Ability_Undying_Decay *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Undying_Decay::YouForgotToImplementOrDeclareServerClass  (line 260, @0x0000000002cca630, libserver.so)
int __fastcall CDOTA_Ability_Undying_Decay::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Undying_Decay *const this)
{
  return 0;
}


// CDOTA_Ability_Undying_Decay::GetServerClass  (line 260, @0x0000000002cde570, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Undying_Decay::GetServerClass(CDOTA_Ability_Undying_Decay *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Modifier_Undying_Decay_Debuff::~CDOTA_Modifier_Undying_Decay_Debuff  (line 269, @0x0000000002d26c40, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Undying_Decay_Debuff::~CDOTA_Modifier_Undying_Decay_Debuff(
        CDOTA_Modifier_Undying_Decay_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_465F310;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Undying_Decay_Debuff::~CDOTA_Modifier_Undying_Decay_Debuff  (line 269, @0x0000000002d26c60, libserver.so)  // inlines: ~CDOTA_Modifier_Undying_Decay_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Undying_Decay_Debuff::~CDOTA_Modifier_Undying_Decay_Debuff(
        CDOTA_Modifier_Undying_Decay_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_465F310;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Undying_Decay_Debuff::DestroyOnExpire  (line 278, @0x0000000002d20660, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_Decay_Debuff::DestroyOnExpire(CDOTA_Modifier_Undying_Decay_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_Undying_Decay_Debuff::IsPurgable  (line 279, @0x0000000002d20670, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_Decay_Debuff::IsPurgable(CDOTA_Modifier_Undying_Decay_Debuff *const this)
{
  return 0;
}


// CDOTA_Modifier_Undying_Decay_Debuff::GetAttributes  (line 280, @0x0000000002d20680, libserver.so)
int __fastcall CDOTA_Modifier_Undying_Decay_Debuff::GetAttributes(CDOTA_Modifier_Undying_Decay_Debuff *const this)
{
  return 2;
}


// CDOTA_Modifier_Undying_Decay_Debuff::GetEffectName  (line 282, @0x0000000002d20690, libserver.so)
// strings: "particles/units/heroes/hero_undying/undying_decay_strength_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Undying_Decay_Debuff::GetEffectName(
        CDOTA_Modifier_Undying_Decay_Debuff *const this)
{
  return "particles/units/heroes/hero_undying/undying_decay_strength_debuff.vpcf";
}


// CDOTA_Modifier_Undying_Decay_Debuff::IsHidden  (line 286, @0x0000000002d206a0, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_Decay_Debuff::IsHidden(CDOTA_Modifier_Undying_Decay_Debuff *const this)
{
  return 1;
}


// CDOTA_Ability_Undying_Decay::OnSpellStart  (line 296, @0x0000000002d16370, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, Find, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetPlayerID, GetStealStrength, GetTeamNumber, GrowMemory, HasElement, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, FindUnitsInRadius, CDOTABaseAbility::CreateAbilityParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_ParticleManager::SetParticleControl, DOTA_EmitSoundLocationWithCaster (30 total)
// strings: "decay_duration", "decay_damage", "str_steal", "str_steal_scepter", "particles/units/heroes/hero_undying/undying_decay_cast.vpcf", "attach_attack1" (16 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Undying_Decay::OnSpellStart(CDOTA_Ability_Undying_Decay *const this)
{
  int LevelSpecialValue; // eax
  __m128i v3; // xmm4
  float v4; // r13d
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v10; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // r13
  CDOTA_BaseNPC *v17; // r14
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  __m128i v22; // xmm2
  __int64 v23; // r14
  CHandle<CBaseEntity> *v24; // rdx
  uint32 m_Index; // eax
  __int16 v26; // cx
  CEntityIdentity *v27; // rdx
  CEntityIdentity *v28; // rdx
  CEntityInstance *m_pInstance; // rbx
  int (**vptr_IHandleEntity)(...); // rax
  __int64 m_Size; // r13
  int v32; // r15d
  int *v33; // rdx
  int v34; // eax
  int *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  int AbilityParticleEffect; // r15d
  const Vector *v38; // r13
  CDOTA_ParticleManager *v39; // rax
  CDOTA_ParticleManager *v40; // rax
  CDOTA_ParticleManager *v41; // rax
  CDOTA_ParticleManager *v42; // rax
  CDOTA_BaseNPC *v43; // rax
  const char *ReplacementSound; // rax
  CDOTA_BaseNPC *v45; // rax
  float v46; // xmm1_4
  CDOTA_BaseNPC *v47; // rax
  CDOTA_Buff *v48; // rax
  CDOTA_Buff *v49; // r13
  CDOTA_BaseNPC *v50; // rax
  CDOTA_Buff *ModifierByName; // r13
  void (__fastcall *v52)(CDOTA_Buff *, _QWORD); // r15
  int v53; // eax
  float v54; // xmm1_4
  CDOTA_BaseNPC *v55; // r13
  CDOTA_BaseNPC *v56; // rax
  CDOTA_BaseNPC *v57; // rax
  CDOTA_Buff *v58; // r13
  void (__fastcall *v59)(CDOTA_Buff *, _QWORD); // r15
  int v60; // eax
  __m128i v61; // xmm6
  __m128i v62; // xmm4
  float v63; // r13d
  int v64; // eax
  __m128i v65; // xmm6
  float v66; // r15d
  int v67; // eax
  float v68; // r13d
  CDOTA_BaseNPC *v69; // rax
  int Health; // eax
  CDOTA_BaseNPC *v71; // rax
  CDOTA_BaseNPC *v72; // r13
  CDOTA_BaseNPC *v73; // rax
  float flTargetMaxHealth; // [rsp+2Ch] [rbp-124h]
  float flTargetHealth; // [rsp+30h] [rbp-120h]
  float flMaxHealth; // [rsp+34h] [rbp-11Ch]
  CDOTA_BaseNPC *flTargetDeltaHealthb; // [rsp+40h] [rbp-110h]
  CDOTA_BaseNPC *flTargetDeltaHealthc; // [rsp+40h] [rbp-110h]
  int flTargetDeltaHealth; // [rsp+40h] [rbp-110h]
  float flTargetDeltaHealtha; // [rsp+40h] [rbp-110h]
  CDOTA_BaseNPC *v81; // [rsp+50h] [rbp-100h]
  float flDeltaHealth; // [rsp+58h] [rbp-F8h]
  float flDeltaHealtha; // [rsp+58h] [rbp-F8h]
  int i; // [rsp+5Ch] [rbp-F4h]
  Vector vPos; // [rsp+60h] [rbp-F0h] BYREF
  Vector vPosition; // [rsp+70h] [rbp-E0h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > AlreadyReceivedBonusPlayers; // [rsp+80h] [rbp-D0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+A0h] [rbp-B0h] BYREF
  KeyValues kv; // [rsp+C0h] [rbp-90h] BYREF
  KeyValues kv2; // [rsp+E0h] [rbp-70h] BYREF
  KeyValues kvCounter; // [rsp+100h] [rbp-50h] BYREF
  unsigned __int64 v92; // [rsp+118h] [rbp-38h]

  v92 = __readfsqword(0x28u);
  this->decay_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "decay_duration", -1, 0);
  this->decay_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "decay_damage", -1, 0);
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  this->str_steal = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "str_steal", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "str_steal_scepter", -1, 0);
  *v3.m128i_i32 = this->radius;
  this->str_steal_scepter = LevelSpecialValue;
  AlreadyReceivedBonusPlayers.m_Size = 0;
  AlreadyReceivedBonusPlayers.m_Memory.m_pMemory = 0;
  AlreadyReceivedBonusPlayers.m_Memory.m_nAllocationCount = 0;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  AlreadyReceivedBonusPlayers.m_Memory.m_nGrowSize = 0;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v6->m_iTeamNum.m_Value, &vPosition, Caster, v4, &entities, 2, 3, 0, 0, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  LODWORD(Caster) = CDOTABaseAbility::CreateAbilityParticleEffect(
                      this,
                      "particles/units/heroes/hero_undying/undying_decay_cast.vpcf",
                      1,
                      v7,
                      0);
  v8 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  v10 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, Caster, 1, v10, 5, "attach_attack1", *AbsOrigin, 1);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v12, Caster);
  LODWORD(Caster) = CDOTABaseAbility::CreateAbilityParticleEffect(
                      this,
                      "particles/units/heroes/hero_undying/undying_decay.vpcf",
                      2,
                      0,
                      0);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v13, Caster, 0, *&vPosition.x, vPosition.z);
  vPos.x = this->radius;
  vPos.y = vPos.x;
  vPos.z = vPos.x;
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v14, Caster, 1, *&vPos.x, vPos.x);
  v15 = CDOTABaseAbility::GetCaster(this);
  v16 = CBaseEntity::GetAbsOrigin(v15);
  v17 = CDOTABaseAbility::GetCaster(this);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v18, Caster, 2, v17, 5, "attach_attack1", *v16, 1);
  v19 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v19, Caster);
  vPos = CDOTABaseAbility::GetCursorPosition(this);
  v20 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vPos, "Hero_Undying.Decay.Cast", v20);
  v21 = CDOTABaseAbility::GetCaster(this);
  if ( v21 != 0 && (v21->m_iUnitType & 1) != 0 )
    v81 = v21;
  else
    v81 = 0;
  if ( entities.m_Size > 0 )
  {
    v23 = 0;
    for ( i = 0; entities.m_Size > i; ++i )
    {
      v24 = &entities.m_Memory.m_pMemory[v23];
      m_Index = entities.m_Memory.m_pMemory[v23].m_Index;
      if ( m_Index + 2 <= 1 )
        goto LABEL_6;
      v26 = v24->m_Index;
      v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v24->m_Index) >> 9) & 0x3F];
      if ( v27 == 0 )
        goto LABEL_6;
      v28 = &v27[v26 & 0x1FF];
      if ( v28 == 0 )
        goto LABEL_6;
      if ( m_Index != v28->m_EHandle.m_Index )
        goto LABEL_6;
      m_pInstance = v28->m_pInstance;
      if ( v28->m_pInstance == 0 )
        goto LABEL_6;
      if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
        goto LABEL_6;
      if ( LOBYTE(m_pInstance[71]._vptr_IHandleEntity) != 0 )
        goto LABEL_6;
      vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
      if ( (BYTE1(vptr_IHandleEntity) & 1) != 0 || (BYTE1(vptr_IHandleEntity) & 2) != 0 )
        goto LABEL_6;
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 || LOBYTE(m_pInstance[71].m_pEntity) != 0 )
        goto LABEL_40;
      m_Size = AlreadyReceivedBonusPlayers.m_Size;
      v32 = m_pInstance[100]._vptr_IHandleEntity;
      if ( AlreadyReceivedBonusPlayers.m_Size > 0 )
      {
        if ( v32 == *AlreadyReceivedBonusPlayers.m_Memory.m_pMemory )
          goto LABEL_40;
        v33 = AlreadyReceivedBonusPlayers.m_Memory.m_pMemory + 1;
        v34 = 0;
        while ( ++v34 != AlreadyReceivedBonusPlayers.m_Size )
        {
          if ( v32 == *v33++ )
          {
            if ( v34 >= 0 )
              goto LABEL_40;
            break;
          }
        }
      }
      if ( AlreadyReceivedBonusPlayers.m_Size == AlreadyReceivedBonusPlayers.m_Memory.m_nAllocationCount )
        CUtlMemory<int,int>::Grow(&AlreadyReceivedBonusPlayers.m_Memory, 1);
      ++AlreadyReceivedBonusPlayers.m_Size;
      v35 = &AlreadyReceivedBonusPlayers.m_Memory.m_pMemory[m_Size];
      if ( v35 != 0 )
        *v35 = v32;
      v36 = CDOTABaseAbility::GetCaster(this);
      AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                this,
                                "particles/units/heroes/hero_undying/undying_decay_strength_xfer.vpcf",
                                2,
                                v36,
                                0);
      v38 = CBaseEntity::GetAbsOrigin(m_pInstance);
      v39 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(
        v39,
        AbilityParticleEffect,
        0,
        m_pInstance,
        5,
        "attach_hitloc",
        *v38,
        1);
      flTargetDeltaHealthb = CDOTABaseAbility::GetCaster(this);
      v40 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(
        v40,
        AbilityParticleEffect,
        1,
        flTargetDeltaHealthb,
        5,
        "attach_hitloc",
        vec3_invalid,
        1);
      flTargetDeltaHealthc = CDOTABaseAbility::GetCaster(this);
      v41 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(
        v41,
        AbilityParticleEffect,
        2,
        flTargetDeltaHealthc,
        5,
        "attach_attack1",
        vec3_invalid,
        1);
      v42 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v42, AbilityParticleEffect);
      v43 = CDOTABaseAbility::GetCaster(this);
      ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v43, "Hero_Undying.Decay.Target");
      CDOTA_BaseNPC::UnitEmitSound(m_pInstance, ReplacementSound, 0.0, 0, 0);
      v45 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v45, "Hero_Undying.Decay.Transfer", 0.0, 0, 0);
      flDeltaHealth = CBaseEntity::GetHealth(v81);
      flMaxHealth = (*(v81->_vptr_IHandleEntity + 156))(v81);
      flTargetHealth = CBaseEntity::GetHealth(m_pInstance);
      flTargetMaxHealth = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
      KeyValues::KeyValues(&kv, "modifier_undying_decay_debuff");
      KeyValues::SetFloat(&kv, "duration", v46);
      v47 = CDOTABaseAbility::GetCaster(this);
      v48 = CDOTA_BaseNPC::AddNewModifier(m_pInstance, v47, this, "modifier_undying_decay_debuff", &kv, 0);
      v49 = v48;
      if ( v48 == 0 )
      {
        KeyValues::~KeyValues(&kv);
        goto LABEL_6;
      }
      if ( CDOTA_Buff::GetCaster(v48) != 0 && (v50 = CDOTA_Buff::GetCaster(v49), CDOTA_BaseNPC::HasScepter(v50)) )
        flTargetDeltaHealth = HIDWORD(v49[1]._vptr_CDOTA_Buff);
      else
        flTargetDeltaHealth = v49[1]._vptr_CDOTA_Buff;
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_undying_decay_debuff_counter", 0);
      if ( ModifierByName != 0
        || (KeyValues::KeyValues(&kvCounter, "modifier_undying_decay_debuff_counter"),
            v71 = CDOTABaseAbility::GetCaster(this),
            ModifierByName = CDOTA_BaseNPC::AddNewModifier(
                               m_pInstance,
                               v71,
                               this,
                               "modifier_undying_decay_debuff_counter",
                               &kvCounter,
                               0),
            KeyValues::~KeyValues(&kvCounter),
            ModifierByName != 0) )
      {
        (*(ModifierByName->_vptr_CDOTA_Buff + 63))(ModifierByName, 1, this->decay_duration);
        v52 = *(ModifierByName->_vptr_CDOTA_Buff + 28);
        v53 = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName);
        v52(ModifierByName, (v53 + flTargetDeltaHealth));
      }
      KeyValues::KeyValues(&kv2, "modifier_undying_decay_buff");
      KeyValues::SetFloat(&kv2, "duration", v54);
      v55 = CDOTABaseAbility::GetCaster(this);
      v56 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v56, v55, this, "modifier_undying_decay_buff", &kv2, 0);
      v57 = CDOTABaseAbility::GetCaster(this);
      v58 = CDOTA_BaseNPC::FindModifierByName(v57, "modifier_undying_decay_buff_counter", 0);
      if ( v58 != 0
        || (KeyValues::KeyValues(&kvCounter, "modifier_undying_decay_buff_counter"),
            v72 = CDOTABaseAbility::GetCaster(this),
            v73 = CDOTABaseAbility::GetCaster(this),
            v58 = CDOTA_BaseNPC::AddNewModifier(v73, v72, this, "modifier_undying_decay_buff_counter", &kvCounter, 0),
            KeyValues::~KeyValues(&kvCounter),
            v58 != 0) )
      {
        (*(v58->_vptr_CDOTA_Buff + 63))(v58, 1, this->decay_duration);
        v59 = *(v58->_vptr_CDOTA_Buff + 28);
        v60 = (*(v58->_vptr_CDOTA_Buff + 27))(v58);
        v59(v58, (v60 + flTargetDeltaHealth));
      }
      (*(v81->_vptr_IHandleEntity + 490))(v81);
      (*(m_pInstance->_vptr_IHandleEntity + 490))(m_pInstance);
      flDeltaHealtha = CBaseEntity::GetHealth(v81) - flDeltaHealth;
      *v61.m128i_i32 = (*(v81->_vptr_IHandleEntity + 156))(v81);
      v62 = v61;
      *v62.m128i_i32 = *v61.m128i_i32 - flMaxHealth;
      v63 = COERCE_FLOAT(_mm_cvtsi128_si32(v62));
      flTargetDeltaHealtha = flTargetHealth - CBaseEntity::GetHealth(m_pInstance);
      v64 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
      v65 = LODWORD(flTargetMaxHealth);
      *v65.m128i_i32 = flTargetMaxHealth - v64;
      v66 = COERCE_FLOAT(_mm_cvtsi128_si32(v65));
      if ( v63 != flDeltaHealtha )
      {
        Health = CBaseEntity::GetHealth(v81);
        CDOTA_BaseNPC::ModifyHealth(v81, (Health + (v63 - flDeltaHealtha)), 0, 0, 0);
      }
      if ( v66 != flTargetDeltaHealtha )
      {
        v67 = CBaseEntity::GetHealth(m_pInstance);
        CDOTA_BaseNPC::ModifyHealth(m_pInstance, (v67 - (v66 - flTargetDeltaHealtha)), 0, 0, 0);
      }
      KeyValues::~KeyValues(&kv2);
      KeyValues::~KeyValues(&kv);
LABEL_40:
      *v22.m128i_i32 = this->decay_damage;
      v68 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
      v69 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v69, m_pInstance, this, v68, 2, 0);
LABEL_6:
      ++v23;
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  AlreadyReceivedBonusPlayers.m_Size = 0;
  if ( (AlreadyReceivedBonusPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&AlreadyReceivedBonusPlayers.m_Memory);
    if ( (AlreadyReceivedBonusPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&AlreadyReceivedBonusPlayers.m_Memory);
  }
}


// CDOTA_Ability_Undying_Decay::GetAbilityDamageToTargetOverInterval  (line 427, @0x0000000002cf68c0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "decay_damage"
__int64 __fastcall CDOTA_Ability_Undying_Decay::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Undying_Decay *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float LevelSpecialValue; // [rsp-1Ch] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "decay_damage", -1, 0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * LevelSpecialValue);
  }
  return result;
}


// CDOTA_Modifier_Undying_Decay_DebuffCounter::~CDOTA_Modifier_Undying_Decay_DebuffCounter  (line 440, @0x0000000002d26c90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Undying_Decay_DebuffCounter::~CDOTA_Modifier_Undying_Decay_DebuffCounter(
        CDOTA_Modifier_Undying_Decay_DebuffCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_465EFF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Undying_Decay_DebuffCounter::~CDOTA_Modifier_Undying_Decay_DebuffCounter  (line 440, @0x0000000002d26cb0, libserver.so)  // inlines: ~CDOTA_Modifier_Undying_Decay_DebuffCounter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Undying_Decay_DebuffCounter::~CDOTA_Modifier_Undying_Decay_DebuffCounter(
        CDOTA_Modifier_Undying_Decay_DebuffCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_465EFF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Undying_Decay_DebuffCounter::IsPurgable  (line 445, @0x0000000002d206b0, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_Decay_DebuffCounter::IsPurgable(
        CDOTA_Modifier_Undying_Decay_DebuffCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Undying_Decay_DebuffCounter::IsHidden  (line 446, @0x0000000002d2b2d0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_undying_decay_debuff"
bool __fastcall CDOTA_Modifier_Undying_Decay_DebuffCounter::IsHidden(
        CDOTA_Modifier_Undying_Decay_DebuffCounter *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) > 0 )
    return 0;
  Parent = CDOTA_Buff::GetParent(this);
  return CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_undying_decay_debuff", 0) == 0;
}


// CDOTA_Modifier_Undying_Decay_DebuffCounter::OnCreated  (line 468, @0x0000000002cca640, libserver.so)
void __fastcall CDOTA_Modifier_Undying_Decay_DebuffCounter::OnCreated(
        CDOTA_Modifier_Undying_Decay_DebuffCounter *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Undying_Decay_DebuffCounter::DeclareFunctions  (line 474, @0x0000000002cca650, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Undying_Decay_DebuffCounter::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Undying_Decay_DebuffCounter::DeclareFunctions(
        CDOTA_Modifier_Undying_Decay_DebuffCounter *const this)
{
  this->m_Functions[151].__pfn = CDOTA_Modifier_Undying_Decay_DebuffCounter::OnTooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Undying_Decay_DebuffCounter::OnTooltip  (line 480, @0x0000000002cca670, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Decay_DebuffCounter::OnTooltip(
        CDOTA_Modifier_Undying_Decay_DebuffCounter *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  int v3; // eax
  ModifierVariant_t result; // 0:rax.16

  v2 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v2.m128i_i32 = v3;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Undying_Decay_Debuff::DeclareFunctions  (line 494, @0x0000000002cca6a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Undying_Decay_Debuff::GetModifierBonusStats_Strength(CModifierParams const&)
void __fastcall CDOTA_Modifier_Undying_Decay_Debuff::DeclareFunctions(CDOTA_Modifier_Undying_Decay_Debuff *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Undying_Decay_Debuff::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
}


// CDOTA_Modifier_Undying_Decay_Debuff::OnCreated  (line 501, @0x0000000002d09880, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "str_steal", "str_steal_scepter"
void __fastcall CDOTA_Modifier_Undying_Decay_Debuff::OnCreated(
        CDOTA_Modifier_Undying_Decay_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->str_steal = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "str_steal", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->str_steal_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "str_steal_scepter", -1, 0);
      return;
    }
  }
  else
  {
    this->str_steal = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->str_steal_scepter = 0;
}


// CDOTA_Modifier_Undying_Decay_Debuff::OnRefresh  (line 509, @0x0000000002d09a30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "str_steal", "str_steal_scepter"
void __fastcall CDOTA_Modifier_Undying_Decay_Debuff::OnRefresh(
        CDOTA_Modifier_Undying_Decay_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->str_steal = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "str_steal", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->str_steal_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "str_steal_scepter", -1, 0);
      return;
    }
  }
  else
  {
    this->str_steal = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->str_steal_scepter = 0;
}


// CDOTA_Modifier_Undying_Decay_Debuff::GetModifierBonusStats_Strength  (line 517, @0x0000000002cd93f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetStealStrength, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Decay_Debuff::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Undying_Decay_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v4; // xmm2
  CDOTA_BaseNPC *Caster; // rax
  int str_steal_scepter; // ebx
  uint32 m_Index; // edx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  CEntityInstance *m_pInstance; // rdi
  __int64 v12; // xmm0_8
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0 && (Caster = CDOTA_Buff::GetCaster(this), CDOTA_BaseNPC::HasScepter(Caster)) )
    str_steal_scepter = this->str_steal_scepter;
  else
    str_steal_scepter = this->str_steal;
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1
    && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) != 0
    && (v9 = &v8[params->htarget.m_Index & 0x1FF]) != 0
    && m_Index == v9->m_EHandle.m_Index
    && (m_pInstance = v9->m_pInstance, v9->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
    && (*&v12 = (*(m_pInstance->_vptr_IHandleEntity + 496))(m_pInstance), str_steal_scepter >= *&v12) )
  {
    result.m_szVal = 0;
    *&v12 = *&v12 - 1.0;
    *&result.m_eType = ((v12 ^ 0x80000000LL) << 32) | 1;
  }
  else
  {
    result.m_szVal = 0;
    *v4.m128i_i32 = -str_steal_scepter;
    *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Undying_Decay_Debuff::OnRemoved  (line 537, @0x0000000002cd7750, libserver.so)  // inlines: GetStealStrength, IsUnitMyParent
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_undying_decay_debuff_counter"
void __fastcall CDOTA_Modifier_Undying_Decay_Debuff::OnRemoved(CDOTA_Modifier_Undying_Decay_Debuff *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int str_steal_scepter; // r12d
  CDOTA_BaseNPC *Parent; // rax
  int Health; // r13d
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // r13
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v10; // r14
  CDOTA_BaseNPC *v11; // r13
  int v12; // eax
  __int64 v13; // rsi

  if ( CDOTA_Buff::GetCaster(this) != 0 && (Caster = CDOTA_Buff::GetCaster(this), CDOTA_BaseNPC::HasScepter(Caster)) )
    str_steal_scepter = this->str_steal_scepter;
  else
    str_steal_scepter = this->str_steal;
  Parent = CDOTA_Buff::GetParent(this);
  Health = CBaseEntity::GetHealth(Parent);
  v6 = CDOTA_Buff::GetParent(this);
  (*(v6->_vptr_IHandleEntity + 490))(v6);
  v7 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ModifyHealth(v7, ((20 * str_steal_scepter) + Health), 0, 0, 0);
  v8 = CDOTA_Buff::GetParent(this);
  if ( v8 != 0 && v8 == CDOTA_Buff::GetParent(this) )
  {
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v8, "modifier_undying_decay_debuff_counter", 0);
    v10 = ModifierByName;
    if ( ModifierByName != 0 )
    {
      v11 = CDOTA_Buff::GetParent(ModifierByName);
      if ( v11 == CDOTA_Buff::GetParent(this) && (*(v10->_vptr_CDOTA_Buff + 27))(v10) > 0 )
      {
        v12 = (*(v10->_vptr_CDOTA_Buff + 27))(v10) - str_steal_scepter;
        v13 = v12;
        if ( v12 < 0 )
          v13 = 0;
        (*(v10->_vptr_CDOTA_Buff + 28))(v10, v13);
      }
    }
  }
}


// CDOTA_Modifier_Undying_Decay_BuffCounter::~CDOTA_Modifier_Undying_Decay_BuffCounter  (line 563, @0x0000000002d26bf0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Undying_Decay_BuffCounter::~CDOTA_Modifier_Undying_Decay_BuffCounter(
        CDOTA_Modifier_Undying_Decay_BuffCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_465F630;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Undying_Decay_BuffCounter::~CDOTA_Modifier_Undying_Decay_BuffCounter  (line 563, @0x0000000002d26c10, libserver.so)  // inlines: ~CDOTA_Modifier_Undying_Decay_BuffCounter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Undying_Decay_BuffCounter::~CDOTA_Modifier_Undying_Decay_BuffCounter(
        CDOTA_Modifier_Undying_Decay_BuffCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_465F630;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Undying_Decay_BuffCounter::IsPurgable  (line 568, @0x0000000002d206c0, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_Decay_BuffCounter::IsPurgable(
        CDOTA_Modifier_Undying_Decay_BuffCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Undying_Decay_BuffCounter::IsHidden  (line 569, @0x0000000002d2b320, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_undying_decay_buff"
bool __fastcall CDOTA_Modifier_Undying_Decay_BuffCounter::IsHidden(
        CDOTA_Modifier_Undying_Decay_BuffCounter *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) > 0 )
    return 0;
  Parent = CDOTA_Buff::GetParent(this);
  return CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_undying_decay_buff", 0) == 0;
}


// CDOTA_Modifier_Undying_Decay_BuffCounter::OnCreated  (line 591, @0x0000000002cca6c0, libserver.so)
void __fastcall CDOTA_Modifier_Undying_Decay_BuffCounter::OnCreated(
        CDOTA_Modifier_Undying_Decay_BuffCounter *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Undying_Decay_BuffCounter::DeclareFunctions  (line 597, @0x0000000002cca6d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Undying_Decay_BuffCounter::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Undying_Decay_BuffCounter::DeclareFunctions(
        CDOTA_Modifier_Undying_Decay_BuffCounter *const this)
{
  this->m_Functions[151].__pfn = CDOTA_Modifier_Undying_Decay_BuffCounter::OnTooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Undying_Decay_BuffCounter::OnTooltip  (line 603, @0x0000000002cca6f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Decay_BuffCounter::OnTooltip(
        CDOTA_Modifier_Undying_Decay_BuffCounter *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  int v3; // eax
  ModifierVariant_t result; // 0:rax.16

  v2 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v2.m128i_i32 = v3;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Undying_Decay_Buff::~CDOTA_Modifier_Undying_Decay_Buff  (line 612, @0x0000000002d26ba0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Undying_Decay_Buff::~CDOTA_Modifier_Undying_Decay_Buff(
        CDOTA_Modifier_Undying_Decay_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_465F950;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Undying_Decay_Buff::~CDOTA_Modifier_Undying_Decay_Buff  (line 612, @0x0000000002d26bc0, libserver.so)  // inlines: ~CDOTA_Modifier_Undying_Decay_Buff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Undying_Decay_Buff::~CDOTA_Modifier_Undying_Decay_Buff(
        CDOTA_Modifier_Undying_Decay_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_465F950;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Undying_Decay_Buff::DestroyOnExpire  (line 622, @0x0000000002d206d0, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_Decay_Buff::DestroyOnExpire(CDOTA_Modifier_Undying_Decay_Buff *const this)
{
  return 1;
}


// CDOTA_Modifier_Undying_Decay_Buff::IsPurgable  (line 623, @0x0000000002d206e0, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_Decay_Buff::IsPurgable(CDOTA_Modifier_Undying_Decay_Buff *const this)
{
  return 0;
}


// CDOTA_Modifier_Undying_Decay_Buff::GetAttributes  (line 624, @0x0000000002d206f0, libserver.so)
int __fastcall CDOTA_Modifier_Undying_Decay_Buff::GetAttributes(CDOTA_Modifier_Undying_Decay_Buff *const this)
{
  return 2;
}


// CDOTA_Modifier_Undying_Decay_Buff::GetEffectName  (line 627, @0x0000000002d20700, libserver.so)
// strings: "particles/units/heroes/hero_undying/undying_decay_strength_buff.vpcf"
const char *__fastcall CDOTA_Modifier_Undying_Decay_Buff::GetEffectName(CDOTA_Modifier_Undying_Decay_Buff *const this)
{
  return "particles/units/heroes/hero_undying/undying_decay_strength_buff.vpcf";
}


// CDOTA_Modifier_Undying_Decay_Buff::IsHidden  (line 631, @0x0000000002d20710, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_Decay_Buff::IsHidden(CDOTA_Modifier_Undying_Decay_Buff *const this)
{
  return 1;
}


// CDOTA_Modifier_Undying_Decay_Buff::DeclareFunctions  (line 644, @0x0000000002cca720, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Undying_Decay_Buff::GetModifierExtraStrengthBonus(CModifierParams const&), CDOTA_Modifier_Undying_Decay_Buff::GetModelScale(CModifierParams const&)
void __fastcall CDOTA_Modifier_Undying_Decay_Buff::DeclareFunctions(CDOTA_Modifier_Undying_Decay_Buff *const this)
{
  this->m_Functions[60].__pfn = CDOTA_Modifier_Undying_Decay_Buff::GetModifierExtraStrengthBonus;
  this->m_Functions[60].__delta = 0;
  this->m_Functions[153].__delta = 0;
  this->m_Functions[153].__pfn = CDOTA_Modifier_Undying_Decay_Buff::GetModelScale;
}


// CDOTA_Modifier_Undying_Decay_Buff::OnCreated  (line 652, @0x0000000002d0b820, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, GetStealStrength
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::GetParent, CDOTA_BaseNPC::Heal
// strings: "str_steal", "str_steal_scepter", "str_scale_up"
void __fastcall CDOTA_Modifier_Undying_Decay_Buff::OnCreated(
        CDOTA_Modifier_Undying_Decay_Buff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Caster; // rax
  int str_steal_scepter; // r12d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v9; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->str_steal = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "str_steal", -1, 0);
  else
    this->str_steal = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->str_steal_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "str_steal_scepter", -1, 0);
  else
    this->str_steal_scepter = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->str_scale_up = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "str_scale_up", -1, 0);
  else
    this->str_scale_up = 0;
  if ( CDOTA_Buff::GetCaster(this) != 0 && (Caster = CDOTA_Buff::GetCaster(this), CDOTA_BaseNPC::HasScepter(Caster)) )
    str_steal_scepter = this->str_steal_scepter;
  else
    str_steal_scepter = this->str_steal;
  Parent = CDOTA_Buff::GetParent(this);
  v9 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::Heal(v9, (20 * str_steal_scepter), Parent, 0, 1);
}


// CDOTA_Modifier_Undying_Decay_Buff::OnRemoved  (line 665, @0x0000000002cce7b0, libserver.so)  // inlines: GetStealStrength, IsUnitMyParent
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_undying_decay_buff_counter"
void __fastcall CDOTA_Modifier_Undying_Decay_Buff::OnRemoved(CDOTA_Modifier_Undying_Decay_Buff *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int str_steal_scepter; // r12d
  CDOTA_BaseNPC *Parent; // rax
  int Health; // r13d
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // r13
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v10; // r14
  CDOTA_BaseNPC *v11; // r13
  int v12; // eax
  __int64 v13; // rsi

  if ( CDOTA_Buff::GetCaster(this) != 0 && (Caster = CDOTA_Buff::GetCaster(this), CDOTA_BaseNPC::HasScepter(Caster)) )
    str_steal_scepter = this->str_steal_scepter;
  else
    str_steal_scepter = this->str_steal;
  Parent = CDOTA_Buff::GetParent(this);
  Health = CBaseEntity::GetHealth(Parent);
  v6 = CDOTA_Buff::GetParent(this);
  (*(v6->_vptr_IHandleEntity + 490))(v6);
  v7 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ModifyHealth(v7, (Health - (20 * str_steal_scepter)), 0, 0, 0);
  v8 = CDOTA_Buff::GetParent(this);
  if ( v8 != 0 && v8 == CDOTA_Buff::GetParent(this) )
  {
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v8, "modifier_undying_decay_buff_counter", 0);
    v10 = ModifierByName;
    if ( ModifierByName != 0 )
    {
      v11 = CDOTA_Buff::GetParent(ModifierByName);
      if ( v11 == CDOTA_Buff::GetParent(this) && (*(v10->_vptr_CDOTA_Buff + 27))(v10) > 0 )
      {
        v12 = (*(v10->_vptr_CDOTA_Buff + 27))(v10) - str_steal_scepter;
        v13 = v12;
        if ( v12 < 0 )
          v13 = 0;
        (*(v10->_vptr_CDOTA_Buff + 28))(v10, v13);
      }
    }
  }
}


// CDOTA_Modifier_Undying_Decay_Buff::OnRefresh  (line 689, @0x0000000002d0a010, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "str_steal", "str_steal_scepter", "str_scale_up"
void __fastcall CDOTA_Modifier_Undying_Decay_Buff::OnRefresh(
        CDOTA_Modifier_Undying_Decay_Buff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->str_steal = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "str_steal", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->str_steal_scepter = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->str_steal = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->str_steal_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "str_steal_scepter", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->str_scale_up = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "str_scale_up", -1, 0);
    return;
  }
LABEL_7:
  this->str_scale_up = 0;
}


// CDOTA_Modifier_Undying_Decay_Buff::GetModifierExtraStrengthBonus  (line 698, @0x0000000002cd7290, libserver.so)  // inlines: GetStealStrength
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Decay_Buff::GetModifierExtraStrengthBonus(
        CDOTA_Modifier_Undying_Decay_Buff *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  CDOTA_BaseNPC *Caster; // rax
  int str_steal_scepter; // eax
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0 && (Caster = CDOTA_Buff::GetCaster(this), CDOTA_BaseNPC::HasScepter(Caster)) )
    str_steal_scepter = this->str_steal_scepter;
  else
    str_steal_scepter = this->str_steal;
  *v3.m128i_i32 = str_steal_scepter;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Undying_Decay_Buff::GetModelScale  (line 705, @0x0000000002cca760, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Decay_Buff::GetModelScale(
        CDOTA_Modifier_Undying_Decay_Buff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->str_scale_up;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Undying_SoulRip::~CDOTA_Ability_Undying_SoulRip  (line 716, @0x0000000002d2c630, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Undying_SoulRip::~CDOTA_Ability_Undying_SoulRip(
        CDOTA_Ability_Undying_SoulRip *const this)
{
  this->_vptr_IHandleEntity = &off_465FCB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Undying_SoulRip::~CDOTA_Ability_Undying_SoulRip  (line 716, @0x0000000002d2c650, libserver.so)  // inlines: ~CDOTA_Ability_Undying_SoulRip
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Undying_SoulRip::~CDOTA_Ability_Undying_SoulRip(
        CDOTA_Ability_Undying_SoulRip *const this)
{
  this->_vptr_IHandleEntity = &off_465FCB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Undying_SoulRip::Schema_DynamicBinding  (line 718, @0x0000000002d20720, libserver.so)
// globals: CDOTA_Ability_Undying_SoulRip::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Undying_SoulRip::Schema_DynamicBinding(
        const CDOTA_Ability_Undying_SoulRip *const this)
{
  return CDOTA_Ability_Undying_SoulRip::s_pSchemaBinding;
}


// CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 718, @0x0000000002d20730, libserver.so)
// globals: CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::DestructInstance  (line 718, @0x0000000002d20740, libserver.so)  // inlines: Destruct<CDOTA_Ability_Undying_SoulRip>
void __fastcall CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::FreeInstance  (line 718, @0x0000000002d20760, libserver.so)
void __fastcall CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::CanAllocate  (line 718, @0x0000000002d20780, libserver.so)
bool __fastcall CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 718, @0x0000000002d20790, libserver.so)
// globals: CDOTA_Ability_Undying_SoulRip::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Undying_SoulRip::s_pSchemaBinding;
}


// CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::AllocateInstance  (line 718, @0x0000000002d25410, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::ConstructInstance  (line 718, @0x0000000002d29660, libserver.so)  // inlines: CDOTA_Ability_Undying_SoulRip, Construct<CDOTA_Ability_Undying_SoulRip>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_465FCB0;
  }
  return p;
}


// CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 718, @0x0000000002d34c20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 718, @0x0000000002d34c40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Undying_SoulRip::GetEntityClassInternal  (line 718, @0x0000000002d4b140, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "undying_soul_rip", "CDOTA_Ability_Undying_SoulRip"
// globals: `guard variable for'CDOTA_Ability_Undying_SoulRip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_SoulRipClass, CDOTA_Ability_Undying_SoulRip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_SoulRipClass, __dso_handle, CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Undying_SoulRip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_SoulRipClassInfo, CDOTA_Ability_Undying_SoulRip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_SoulRipClassInfo
CEntityClass *__cdecl CDOTA_Ability_Undying_SoulRip::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Undying_SoulRip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_SoulRipClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Undying_SoulRip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_SoulRipClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Undying_SoulRip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_SoulRipClass);
    CDOTA_Ability_Undying_SoulRip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_SoulRipClass._vptr_CEntityClass = off_465FC30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Undying_SoulRip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_SoulRipClass);
    __cxa_atexit(
      CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Undying_SoulRip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_SoulRipClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Undying_SoulRipClass != 0 )
    return &CDOTA_Ability_Undying_SoulRip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_SoulRipClass;
  if ( `guard variable for'CDOTA_Ability_Undying_SoulRip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_SoulRipClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Undying_SoulRip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_SoulRipClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Undying_SoulRip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_SoulRipClassInfo,
      "CDOTA_Ability_Undying_SoulRip",
      "undying_soul_rip",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Undying_SoulRip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_SoulRipClassInfo);
  }
  CDOTA_Ability_Undying_SoulRip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_SoulRipClass.m_pClassInfo = &CDOTA_Ability_Undying_SoulRip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_SoulRipClassInfo;
  CDOTA_Ability_Undying_SoulRip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_SoulRipClass.m_pBaseClassInfo = CDOTA_Ability_Undying_SoulRip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_SoulRipClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Undying_SoulRipClass = &CDOTA_Ability_Undying_SoulRip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_SoulRipClass;
  CDOTA_Ability_Undying_SoulRip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_SoulRipClassInfo.m_pClass = &CDOTA_Ability_Undying_SoulRip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_SoulRipClass;
  CDOTA_Ability_Undying_SoulRip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_SoulRipClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Undying_SoulRipClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Undying_SoulRip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_SoulRipClass;
}


// CDOTA_Ability_Undying_SoulRip::GetGestureBasedActivity  (line 726, @0x0000000002d207a0, libserver.so)
Activity __fastcall CDOTA_Ability_Undying_SoulRip::GetGestureBasedActivity(CDOTA_Ability_Undying_SoulRip *const this)
{
  return 1667;
}


// CDOTA_Ability_Undying_SoulRip::YouForgotToImplementOrDeclareServerClass  (line 739, @0x0000000002cca780, libserver.so)
int __fastcall CDOTA_Ability_Undying_SoulRip::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Undying_SoulRip *const this)
{
  return 0;
}


// CDOTA_Ability_Undying_SoulRip::GetServerClass  (line 739, @0x0000000002cddef0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Undying_SoulRip::GetServerClass(CDOTA_Ability_Undying_SoulRip *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Ability_Undying_SoulRip::CastFilterResult  (line 749, @0x0000000002cd2670, libserver.so)  // inlines: GetUnitName, String, ToCStr
// calls: CDOTABaseAbility::GetCaster, UnitFilter, V_stristr_fast(char const*,char const*)
// strings: "npc_dota_unit_tombstone"
int __fastcall CDOTA_Ability_Undying_SoulRip::CastFilterResult(
        CDOTA_Ability_Undying_SoulRip *const this,
        CDOTA_BaseNPC *pTarget)
{
  int result; // eax
  char v5; // dl
  CDOTA_BaseNPC *Caster; // rax
  const char *m_pAsString; // rdi

  result = 6;
  if ( (pTarget->m_iUnitType & 0x10) == 0 )
  {
    v5 = (*(pTarget->_vptr_IHandleEntity + 405))(pTarget);
    result = 8;
    if ( v5 == 0 )
    {
      if ( (pTarget->m_iUnitType & 0x193) != 0 || (*(pTarget->_vptr_IHandleEntity + 408))(pTarget) == 0 )
      {
        Caster = CDOTABaseAbility::GetCaster(this);
        return UnitFilter(pTarget, 3, 3, 0, Caster->m_iTeamNum.m_Value);
      }
      else
      {
        m_pAsString = "";
        if ( pTarget->m_iszUnitName.m_Value.u.m_Id != 0 )
          m_pAsString = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
        return V_stristr_fast(m_pAsString, "npc_dota_unit_tombstone") == 0 ? 8 : 0;
      }
    }
  }
  return result;
}


// CDOTA_Ability_Undying_SoulRip::OnSpellStart  (line 773, @0x0000000002d063a0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, GetUnitName, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, DOTA_EmitSound, CDOTA_BaseNPC::TriggerSpellAbsorb, ApplyDamage, SendOverheadEventMessage, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, V_stristr_fast(char const*,char const*), CDOTA_BaseNPC::Heal (19 total)
// strings: "damage_per_unit", "max_units", "tombstone_heal", "Hero_Undying.SoulRip.Cast", "npc_dota_unit_tombstone", "particles/units/heroes/hero_undying/undying_soul_rip_damage.vpcf" (12 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Undying_SoulRip::OnSpellStart(CDOTA_Ability_Undying_SoulRip *const this)
{
  CBaseEntity *CursorTarget; // rax
  __m128i v3; // xmm2
  float v4; // ebx
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  __int64 v10; // rbx
  int v11; // r12d
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *m_pInstance; // r13
  int m_Id; // eax
  int v19; // ebx
  unsigned __int8 v20; // r12
  __m128i v21; // xmm3
  float v22; // r12d
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  CDOTAPlayer *v25; // rax
  const char *v26; // rdi
  float tombstone_heal; // xmm0_4
  CDOTA_BaseNPC *v28; // rax
  CDOTAPlayer *v29; // rax
  CDOTAPlayer *v30; // rax
  const char *m_pAsString; // rax
  int Health; // eax
  unsigned __int8 m_Value; // r15
  int AbilityParticleEffect; // eax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v36; // rax
  CDOTA_BaseNPC *v37; // r13
  CDOTA_ParticleManager *v38; // rax
  CDOTA_ParticleManager *v39; // rax
  int nSoulRipFX; // [rsp+20h] [rbp-60h]
  int iNumUnits; // [rsp+24h] [rbp-5Ch]
  CDOTA_BaseNPC *pTarget; // [rsp+28h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-50h] BYREF

  this->damage_per_unit = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_per_unit", -1, 0);
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  this->max_units = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_units", -1, 0);
  this->tombstone_heal = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "tombstone_heal", -1, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  pTarget = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0 )
  {
    *v3.m128i_i32 = this->radius;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    Caster = CDOTABaseAbility::GetCaster(this);
    v6 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
    v8 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, Caster, v4, &entities, 3, 19, 384, 0, 0);
    v9 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_Undying.SoulRip.Cast", v9);
    if ( entities.m_Size <= 0 )
    {
      iNumUnits = 0;
    }
    else
    {
      v10 = 0;
      v11 = 0;
      iNumUnits = 0;
      do
      {
        v12 = &entities.m_Memory.m_pMemory[v10];
        m_Index = entities.m_Memory.m_pMemory[v10].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v14 = v12->m_Index;
          v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
          if ( v15 != 0 )
          {
            v16 = &v15[v14 & 0x1FF];
            if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
            {
              m_pInstance = v16->m_pInstance;
              if ( v16->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
                && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0 )
              {
                if ( CDOTABaseAbility::GetCaster(this) != m_pInstance
                  && CDOTABaseAbility::GetCursorTarget(this) != m_pInstance )
                {
                  m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
                  if ( (m_Id & 0x10) == 0
                    && (m_Id & 0x193) != 0
                    && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0 )
                  {
                    ++iNumUnits;
                    if ( (*(m_pInstance->_vptr_IHandleEntity + 405))(m_pInstance) == 0 )
                    {
                      m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
                      if ( m_pAsString == 0
                        || m_pAsString != "npc_dota_visage_familiar1"
                        && strcmp(m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString, "npc_dota_visage_familiar1") != 0
                        && m_pAsString != "npc_dota_visage_familiar2"
                        && strcmp(m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString, "npc_dota_visage_familiar2") != 0
                        && m_pAsString != "npc_dota_visage_familiar3"
                        && strcmp(m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString, "npc_dota_visage_familiar3") != 0 )
                      {
                        Health = CBaseEntity::GetHealth(m_pInstance);
                        CDOTA_BaseNPC::ModifyHealth(m_pInstance, Health - this->damage_per_unit, this, 0, 32);
                      }
                    }
                    m_Value = pTarget->m_iTeamNum.m_Value;
                    if ( m_Value == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
                      AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                                this,
                                                "particles/units/heroes/hero_undying/undying_soul_rip_heal.vpcf",
                                                2,
                                                0,
                                                0);
                    else
                      AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                                this,
                                                "particles/units/heroes/hero_undying/undying_soul_rip_damage.vpcf",
                                                2,
                                                0,
                                                0);
                    nSoulRipFX = AbilityParticleEffect;
                    ParticleManager = GetParticleManager();
                    CDOTA_ParticleManager::SetParticleControlEnt(
                      ParticleManager,
                      nSoulRipFX,
                      0,
                      pTarget,
                      5,
                      "attach_hitloc",
                      vec3_invalid,
                      1);
                    v36 = GetParticleManager();
                    CDOTA_ParticleManager::SetParticleControlEnt(
                      v36,
                      nSoulRipFX,
                      1,
                      m_pInstance,
                      5,
                      "attach_hitloc",
                      vec3_invalid,
                      1);
                    v37 = CDOTABaseAbility::GetCaster(this);
                    v38 = GetParticleManager();
                    CDOTA_ParticleManager::SetParticleControlEnt(
                      v38,
                      nSoulRipFX,
                      2,
                      v37,
                      5,
                      "attach_attack1",
                      vec3_invalid,
                      1);
                    v39 = GetParticleManager();
                    CDOTA_ParticleManager::ReleaseParticleIndex(v39, nSoulRipFX);
                  }
                }
                if ( iNumUnits >= this->max_units )
                  break;
              }
            }
          }
        }
        ++v11;
        ++v10;
      }
      while ( entities.m_Size > v11 );
    }
    v19 = this->damage_per_unit * iNumUnits;
    v20 = pTarget->m_iTeamNum.m_Value;
    if ( v20 == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
    {
      v26 = "";
      if ( pTarget->m_iszUnitName.m_Value.u.m_Id != 0 )
        v26 = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
      if ( V_stristr_fast(v26, "npc_dota_unit_tombstone") != 0 )
        tombstone_heal = this->tombstone_heal;
      else
        tombstone_heal = v19;
      CDOTA_BaseNPC::Heal(pTarget, tombstone_heal, this, 0, 1);
      if ( (pTarget->m_iUnitType & 1) != 0 )
      {
        v28 = CDOTABaseAbility::GetCaster(this);
        v29 = (*(v28->_vptr_IHandleEntity + 413))(v28);
        SendOverheadEventMessage(v29, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, pTarget, v19, 0);
        if ( pTarget != CDOTABaseAbility::GetCaster(this) )
        {
          v30 = (*(pTarget->_vptr_IHandleEntity + 413))(pTarget);
          SendOverheadEventMessage(v30, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, pTarget, v19, 0);
        }
      }
    }
    else if ( !CDOTA_BaseNPC::TriggerSpellAbsorb(pTarget, this, 1) )
    {
      *v21.m128i_i32 = v19;
      v22 = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
      v23 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v23, pTarget, this, v22, 2, 0);
      v24 = CDOTABaseAbility::GetCaster(this);
      v25 = (*(v24->_vptr_IHandleEntity + 413))(v24);
      SendOverheadEventMessage(v25, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_DAMAGE, pTarget, v19, 0);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Ability_Undying_SoulRip::GetAbilityDamageToTargetOverInterval  (line 875, @0x0000000002d069e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, __cxa_guard_acquire, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Bot::GetNearbyCreeps, CDOTA_Bot::GetNearbyHeroes, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType, __cxa_guard_release, __cxa_atexit
// strings: "max_units", "damage_per_unit"
// globals: `guard variable for'CDOTA_Ability_Undying_SoulRip::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities, CDOTA_Ability_Undying_SoulRip::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities, __dso_handle, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector()
__int64 __fastcall CDOTA_Ability_Undying_SoulRip::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Undying_SoulRip *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r14d
  int m_Size; // r13d
  CDOTA_Bot *m_pBot; // rdi
  float v10; // xmm2_4

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 1);
    m_Size = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_units", -1, 1);
    if ( `guard variable for'CDOTA_Ability_Undying_SoulRip::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Undying_SoulRip::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities) != 0 )
    {
      CDOTA_Ability_Undying_SoulRip::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size = 0;
      CDOTA_Ability_Undying_SoulRip::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_pMemory = 0;
      CDOTA_Ability_Undying_SoulRip::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_nAllocationCount = 0;
      CDOTA_Ability_Undying_SoulRip::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_nGrowSize = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_Ability_Undying_SoulRip::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities);
      __cxa_atexit(
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
        &CDOTA_Ability_Undying_SoulRip::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
        &_dso_handle);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&CDOTA_Ability_Undying_SoulRip::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities);
    m_pBot = pTarget->m_pBot;
    if ( m_pBot != 0 )
    {
      CDOTA_Bot::GetNearbyCreeps(
        m_pBot,
        DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
        &CDOTA_Ability_Undying_SoulRip::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
        LevelSpecialValue);
      CDOTA_Bot::GetNearbyHeroes(
        pTarget->m_pBot,
        DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
        &CDOTA_Ability_Undying_SoulRip::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
        LevelSpecialValue);
    }
    v10 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_per_unit", -1, 0);
    if ( m_Size < CDOTA_Ability_Undying_SoulRip::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size )
      m_Size = CDOTA_Ability_Undying_SoulRip::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * (v10 * m_Size));
  }
  return result;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow  (line 902, @0x0000000002d26b50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4660770;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow  (line 902, @0x0000000002d26b70, libserver.so)  // inlines: ~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4660770;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::GetEffectName  (line 910, @0x0000000002d207b0, libserver.so)
// strings: "particles/units/heroes/hero_undying/undying_zombie_deathstrike.vpcf"
const char *__fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::GetEffectName(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow *const this)
{
  return "particles/units/heroes/hero_undying/undying_zombie_deathstrike.vpcf";
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::IsHidden  (line 911, @0x0000000002d207c0, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::IsHidden(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::GetAttributes  (line 915, @0x0000000002d207d0, libserver.so)
int __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::GetAttributes(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow *const this)
{
  return 2;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::DeclareFunctions  (line 931, @0x0000000002cca790, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::DeclareFunctions(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::OnCreated  (line 938, @0x0000000002d08f80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::OnCreated(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow", -1, 0);
  else
    this->slow = 0;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::GetModifierMoveSpeedBonus_Percentage  (line 945, @0x0000000002cca7b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::OnDestroy  (line 952, @0x0000000002ccc4a0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_undying_tombstone_zombie_deathstrike_slow_counter"
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow::OnDestroy(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // rax

  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent != 0 )
  {
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                       Parent,
                       "modifier_undying_tombstone_zombie_deathstrike_slow_counter",
                       0);
    if ( ModifierByName != 0 )
      (*(ModifierByName->_vptr_CDOTA_Buff + 26))(ModifierByName);
  }
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter::~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter  (line 969, @0x0000000002d26b00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter::~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4660A90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter::~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter  (line 969, @0x0000000002d26b20, libserver.so)  // inlines: ~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter::~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4660A90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter::IsHidden  (line 974, @0x0000000002d2b370, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_undying_tombstone_zombie_deathstrike_slow"
bool __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter::IsHidden(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) > 0 )
    return 0;
  Parent = CDOTA_Buff::GetParent(this);
  return CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_undying_tombstone_zombie_deathstrike_slow", 0) == 0;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter::IsPurgable  (line 987, @0x0000000002d207e0, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter::IsPurgable(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter *const this)
{
  return 0;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter::OnCreated  (line 1001, @0x0000000002d09640, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter::OnCreated(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow", -1, 0);
  else
    this->slow = 0;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter::DeclareFunctions  (line 1008, @0x0000000002cca7d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter::DeclareFunctions(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter *const this)
{
  this->m_Functions[151].__pfn = CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter::OnTooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter::OnTooltip  (line 1014, @0x0000000002cca7f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter::OnTooltip(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike_Slow_Counter *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (this->slow * v4);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::~CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike  (line 1025, @0x0000000002d2c680, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::~CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike(
        CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike *const this)
{
  this->_vptr_IHandleEntity = &off_4660DF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::~CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike  (line 1025, @0x0000000002d2c6a0, libserver.so)  // inlines: ~CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::~CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike(
        CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike *const this)
{
  this->_vptr_IHandleEntity = &off_4660DF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::Schema_DynamicBinding  (line 1027, @0x0000000002d207f0, libserver.so)
// globals: CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::Schema_DynamicBinding(
        const CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike *const this)
{
  return CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::s_pSchemaBinding;
}


// CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1027, @0x0000000002d20800, libserver.so)
// globals: CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::DestructInstance  (line 1027, @0x0000000002d20810, libserver.so)  // inlines: Destruct<CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike>
void __fastcall CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::FreeInstance  (line 1027, @0x0000000002d20830, libserver.so)
void __fastcall CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::CanAllocate  (line 1027, @0x0000000002d20850, libserver.so)
bool __fastcall CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1027, @0x0000000002d20860, libserver.so)
// globals: CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::s_pSchemaBinding;
}


// CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::AllocateInstance  (line 1027, @0x0000000002d25450, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::ConstructInstance  (line 1027, @0x0000000002d29690, libserver.so)  // inlines: CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike, Construct<CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4660DF0;
  }
  return p;
}


// CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1027, @0x0000000002d34c70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1027, @0x0000000002d34c90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInternal  (line 1027, @0x0000000002d4b290, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "undying_tombstone_zombie_deathstrike", "CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike"
// globals: `guard variable for'CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike, CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClass, __dso_handle, CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClas, CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClass);
    CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClass._vptr_CEntityClass = off_4660D70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClass);
    __cxa_atexit(
      CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClass != 0 )
    return &CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClass;
  if ( `guard variable for'CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClassInfo,
      "CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike",
      "undying_tombstone_zombie_deathstrike",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClassInfo);
  }
  CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClass.m_pClassInfo = &CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClassInfo;
  CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClass.m_pBaseClassInfo = CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClass = &CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClass;
  CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClassInfo.m_pClass = &CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClass;
  CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_Tombstone_Zombie_DeathStrikeClass;
}


// CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetIntrinsicModifierName  (line 1030, @0x0000000002d20870, libserver.so)
// strings: "modifier_undying_tombstone_zombie_deathstrike"
const char *__fastcall CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::GetIntrinsicModifierName(
        CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike *const this)
{
  return "modifier_undying_tombstone_zombie_deathstrike";
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike  (line 1039, @0x0000000002d26ab0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_46618B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike  (line 1039, @0x0000000002d26ad0, libserver.so)  // inlines: ~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_46618B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::IsHidden  (line 1051, @0x0000000002d20880, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::IsHidden(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike *const this)
{
  return 1;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::OnCreated  (line 1069, @0x0000000002d0ad10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "health_threshold", "health_threshold_pct"
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::OnCreated(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  float v7; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->health_threshold = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "health_threshold", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->health_threshold = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->health_threshold_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "health_threshold_pct", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_9:
      this->duration = 0.0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
LABEL_10:
      this->radius = 0;
      goto LABEL_6;
    }
  }
  this->health_threshold_pct = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_9;
LABEL_4:
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "duration", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "radius", -1, 0);
LABEL_6:
  CDOTA_Buff::StartIntervalThink(this, 0.5, v7);
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::OnRefresh  (line 1079, @0x0000000002d0aa10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "health_threshold", "health_threshold_pct"
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::OnRefresh(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->health_threshold = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "health_threshold", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->health_threshold = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->health_threshold_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "health_threshold_pct", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->duration = 0.0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->health_threshold_pct = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "duration", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "radius", -1, 0);
    return;
  }
LABEL_9:
  this->radius = 0;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::DeclareFunctions  (line 1090, @0x0000000002cca830, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::DeclareFunctions(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::OnDeath;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::OnAttackLanded  (line 1098, @0x0000000002cd9e30, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_undying_tombstone_zombie_deathstrike_slow_counter", "modifier_undying_tombstone_zombie_deathstrike_slow"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::OnAttackLanded(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // r13
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v13; // r15
  CDOTA_BaseNPC *Parent; // r14
  CDOTA_Buff *ModifierByName; // rax
  float v16; // xmm1_4
  CDOTABaseAbility *v17; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTA_Buff *v19; // rax
  KeyValues kv2; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(params->htarget.m_Index),
        (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v7 = &v6[m_Index_low & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v9 = params->hattacker.m_Index;
  if ( v9 + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[params->hattacker.m_Index & 0x1FF];
      if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
      {
        v13 = v11->m_pInstance;
        if ( v11->m_pInstance != 0 && v13->m_bIsDOTANPC )
        {
          Parent = CDOTA_Buff::GetParent(this);
          if ( Parent == v13
            && params->nDamageCategory == 1
            && m_pInstance != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x81) != 0 )
          {
            ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                               m_pInstance,
                               "modifier_undying_tombstone_zombie_deathstrike_slow_counter",
                               0);
            if ( ModifierByName != 0 )
            {
              (*(ModifierByName->_vptr_CDOTA_Buff + 25))(ModifierByName);
            }
            else
            {
              KeyValues::KeyValues(&kv2, "modifier_undying_tombstone_zombie_deathstrike_slow_counter");
              Ability = CDOTA_Buff::GetAbility(this);
              CDOTA_BaseNPC::AddNewModifier(
                m_pInstance,
                Parent,
                Ability,
                "modifier_undying_tombstone_zombie_deathstrike_slow_counter",
                &kv2,
                0);
              v19 = CDOTA_BaseNPC::FindModifierByName(
                      m_pInstance,
                      "modifier_undying_tombstone_zombie_deathstrike_slow_counter",
                      0);
              if ( v19 != 0 )
                (*(v19->_vptr_CDOTA_Buff + 25))(v19);
              KeyValues::~KeyValues(&kv2);
            }
            KeyValues::KeyValues(&kv2, "modifier_undying_tombstone_zombie_deathstrike_slow");
            KeyValues::SetFloat(&kv2, "duration", v16);
            v17 = CDOTA_Buff::GetAbility(this);
            CDOTA_BaseNPC::AddNewModifier(
              m_pInstance,
              Parent,
              v17,
              "modifier_undying_tombstone_zombie_deathstrike_slow",
              &kv2,
              0);
            KeyValues::~KeyValues(&kv2);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::OnDeath  (line 1136, @0x0000000002cd9500, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::ForceKill
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::OnDeath(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // rax
  __int64 v9; // rsi
  CDOTA_BaseNPC *v10; // r13
  CEntityIdentity *v11; // rdx
  __int64 v12; // rcx
  CEntityIdentity *v13; // rdx

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) != 0
    && (v5 = &v4[params->hunit.m_Index & 0x1FF]) != 0
    && m_Index == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    v9 = this->m_hChaseUnit.m_Index;
    v10 = Parent;
    if ( (v9 + 2) > 1 )
    {
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hChaseUnit.m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = this->m_hChaseUnit.m_Index & 0x1FF;
        v13 = &v11[v12];
        if ( v13 != 0
          && v9 == v13->m_EHandle.m_Index
          && m_pInstance == v13->m_pInstance
          && Parent != 0
          && (*(Parent->_vptr_IHandleEntity + 408))(Parent, v9, v13, v12 * 120, CEntityHandle::gm_pEntityList) != 0 )
        {
          CDOTA_BaseNPC::ForceKill(v10, 0);
        }
      }
    }
  }
  else
  {
    CDOTA_Buff::GetParent(this);
  }
  return 1uLL;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::SetChasedUnit  (line 1152, @0x0000000002cea550, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// callers: CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::OnIntervalThink
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::SetChasedUnit(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike *const this,
        CDOTA_BaseNPC *pUnit)
{
  CEntityIdentity *m_pEntity; // rdx
  int v3; // eax
  __int16 v4; // cx

  if ( pUnit != 0 )
  {
    m_pEntity = pUnit->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v4 = 0x7FFF;
      else
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hChaseUnit.m_Index) = v4 | this->m_hChaseUnit.m_Index & 0x8000;
      this->m_hChaseUnit.m_Index = (v3 << 15) | this->m_hChaseUnit.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hChaseUnit.m_Index = -1;
    }
  }
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::OnIntervalThink  (line 1162, @0x0000000002cda080, libserver.so)  // inlines: FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetHealthPercent, GetInstance, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CBaseEntity::GetHealth, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::IsInvisibleTo, CDOTA_BaseNPC::ForceKill, strcmp, _Unwind_Resume
// strings: "modifier_undying_tombstone_zombie_deathlust", "npc_dota_visage_familiar1", "npc_dota_visage_familiar2", "npc_dota_visage_familiar3"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::OnIntervalThink(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  int health_threshold; // r13d
  const char *m_pAsString; // r13
  float v8; // xmm1_4
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *Parent; // r14
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // rcx
  float health_threshold_pct; // [rsp+Ch] [rbp-54h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  m_Index = this->m_hChaseUnit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hChaseUnit.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hChaseUnit.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          health_threshold = this->health_threshold;
          if ( health_threshold > CBaseEntity::GetHealth(v4->m_pInstance) )
            goto LABEL_9;
          health_threshold_pct = this->health_threshold_pct;
          v14 = 100LL * CBaseEntity::GetHealth(m_pInstance);
          v15 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
          v16 = 1;
          if ( v15 > 0 )
            v16 = v15;
          if ( health_threshold_pct > (v14 / v16) )
          {
LABEL_9:
            m_pAsString = m_pInstance->m_iszUnitName.m_Value.u.m_pAsString;
            if ( m_pAsString == 0
              || m_pAsString != "npc_dota_visage_familiar1"
              && strcmp(m_pInstance->m_iszUnitName.m_Value.u.m_pAsString, "npc_dota_visage_familiar1") != 0
              && m_pAsString != "npc_dota_visage_familiar2"
              && strcmp(m_pAsString, "npc_dota_visage_familiar2") != 0
              && m_pAsString != "npc_dota_visage_familiar3"
              && strcmp(m_pAsString, "npc_dota_visage_familiar3") != 0 )
            {
              KeyValues::KeyValues(&kv, "modifier_undying_tombstone_zombie_deathlust");
              KeyValues::SetFloat(&kv, "duration", v8);
              Ability = CDOTA_Buff::GetAbility(this);
              Parent = CDOTA_Buff::GetParent(this);
              v11 = CDOTA_Buff::GetParent(this);
              CDOTA_BaseNPC::AddNewModifier(v11, Parent, Ability, "modifier_undying_tombstone_zombie_deathlust", &kv, 0);
              KeyValues::~KeyValues(&kv);
            }
          }
          v12 = CDOTA_Buff::GetParent(this);
          if ( CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, v12) )
          {
            v13 = CDOTA_Buff::GetParent(this);
            CDOTA_BaseNPC::ForceKill(v13, 0);
          }
        }
      }
    }
  }
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust::~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust  (line 1207, @0x0000000002d26a60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust::~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust *const this)
{
  this->_vptr_CDOTA_Buff = &off_4661BD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust::~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust  (line 1207, @0x0000000002d26a80, libserver.so)  // inlines: ~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust::~CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust *const this)
{
  this->_vptr_CDOTA_Buff = &off_4661BD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust::DeclareFunctions  (line 1227, @0x0000000002cca870, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust::DeclareFunctions(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust::OnCreated  (line 1235, @0x0000000002d09520, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_speed"
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust::OnCreated(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_speed", -1, 0);
  else
    this->bonus_speed = 0;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust::GetModifierMoveSpeedBonus_Percentage  (line 1242, @0x0000000002cca8b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust::GetModifierAttackSpeedBonus_Constant  (line 1249, @0x0000000002cca8d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Deathlust *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::~CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier  (line 1257, @0x0000000002d26a10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::~CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier *const this)
{
  this->_vptr_CDOTA_Buff = &off_4661EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::~CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier  (line 1257, @0x0000000002d26a30, libserver.so)  // inlines: ~CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::~CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier *const this)
{
  this->_vptr_CDOTA_Buff = &off_4661EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::CheckState  (line 1277, @0x0000000002cca8f0, libserver.so)
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::CheckState(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier *const this,
        CDOTABuffState *const buffState)
{
  ;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::DeclareFunctions  (line 1287, @0x0000000002cca900, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetAbsoluteNoDamagePhysical(CModifierParams const&), CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetAbsoluteNoDamageMagical(CModifierParams const&), CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetAbsoluteNoDamagePure(CModifierParams const&), CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::OnAttacked(CModifierParams const&), CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetDisableHealing(CModifierParams const&), CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::DeclareFunctions(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier *const this)
{
  this->m_Functions[103].__pfn = CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetAbsoluteNoDamagePhysical;
  this->m_Functions[103].__delta = 0;
  this->m_Functions[104].__delta = 0;
  this->m_Functions[104].__pfn = CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetAbsoluteNoDamageMagical;
  this->m_Functions[105].__pfn = CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetAbsoluteNoDamagePure;
  this->m_Functions[137].__pfn = CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::OnAttacked;
  this->m_Functions[111].__pfn = CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetDisableHealing;
  this->m_Functions[105].__delta = 0;
  this->m_Functions[137].__delta = 0;
  this->m_Functions[111].__delta = 0;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetDisableHealing  (line 1299, @0x0000000002cca9a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetDisableHealing(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetAbsoluteNoDamagePhysical  (line 1306, @0x0000000002cca9c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetAbsoluteNoDamagePhysical(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetAbsoluteNoDamageMagical  (line 1313, @0x0000000002cca9e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetAbsoluteNoDamageMagical(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetAbsoluteNoDamagePure  (line 1320, @0x0000000002ccaa00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetAbsoluteNoDamagePure(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetModifierPreAttack_BonusDamage  (line 1328, @0x0000000002cff470, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_undying"
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // eax
  __m128i v5; // xmm0
  ModifierVariant_t result; // 0:rax.16

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_undying", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    result.m_szVal = 0;
    *v5.m128i_i32 = LevelSpecialValue;
    *&result.m_eType = (_mm_cvtsi128_si32(v5) << 32) | 1;
  }
  else
  {
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(0LL) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::OnAttacked  (line 1343, @0x0000000002cdb880, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::Kill, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier::OnAttacked(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Modifier *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *v12; // rbx
  int v13; // r13d
  CDOTA_BaseNPC *Parent; // rax
  int v15; // r13d
  CDOTA_BaseNPC *v16; // rax
  int Health; // ebx
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->htarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          v9 = params->hattacker.m_Index;
          if ( v9 + 2 > 1 )
          {
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = &v10[params->hattacker.m_Index & 0x1FF];
              if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
              {
                v12 = v11->m_pInstance;
                if ( v11->m_pInstance != 0 && v12->m_bIsDOTANPC )
                {
                  v13 = -((v12->m_iUnitType & 5) == 0);
                  Parent = CDOTA_Buff::GetParent(this);
                  v15 = v13 + 2;
                  if ( CBaseEntity::GetHealth(Parent) - v15 <= 0 )
                  {
                    v19 = CDOTA_Buff::GetParent(this);
                    CDOTA_BaseNPC::Kill(v19, 0, v12, 0.0, 0);
                    CDOTA_Buff::Destroy(this, 0, 0, 0);
                  }
                  else
                  {
                    v16 = CDOTA_Buff::GetParent(this);
                    Health = CBaseEntity::GetHealth(v16);
                    v18 = CDOTA_Buff::GetParent(this);
                    CDOTA_BaseNPC::ModifyHealth(v18, Health - v15, 0, 1, 0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_Undying_Tombstone::~CDOTA_Ability_Undying_Tombstone  (line 1378, @0x0000000002d46460, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Undying_Tombstone::~CDOTA_Ability_Undying_Tombstone(
        CDOTA_Ability_Undying_Tombstone *const this)
{
  this->_vptr_IHandleEntity = &off_4662250;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vZombies);
  if ( (this->m_vZombies.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vZombies.m_Memory),
        (this->m_vZombies.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vZombies.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Undying_Tombstone::~CDOTA_Ability_Undying_Tombstone  (line 1378, @0x0000000002d46ab0, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Undying_Tombstone, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Undying_Tombstone::~CDOTA_Ability_Undying_Tombstone(
        CDOTA_Ability_Undying_Tombstone *const this)
{
  this->_vptr_IHandleEntity = &off_4662250;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vZombies);
  if ( (this->m_vZombies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vZombies.m_Memory);
    if ( (this->m_vZombies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vZombies.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Undying_Tombstone::Schema_DynamicBinding  (line 1380, @0x0000000002d20890, libserver.so)
// globals: CDOTA_Ability_Undying_Tombstone::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Undying_Tombstone::Schema_DynamicBinding(
        const CDOTA_Ability_Undying_Tombstone *const this)
{
  return CDOTA_Ability_Undying_Tombstone::s_pSchemaBinding;
}


// CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1380, @0x0000000002d208a0, libserver.so)
// globals: CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::DestructInstance  (line 1380, @0x0000000002d208b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Undying_Tombstone>
void __fastcall CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::FreeInstance  (line 1380, @0x0000000002d208d0, libserver.so)
void __fastcall CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::CanAllocate  (line 1380, @0x0000000002d208f0, libserver.so)
bool __fastcall CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1380, @0x0000000002d20900, libserver.so)
// globals: CDOTA_Ability_Undying_Tombstone::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Undying_Tombstone::s_pSchemaBinding;
}


// CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::AllocateInstance  (line 1380, @0x0000000002d25490, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 952);
  memset(v1, 0, 0x3B8u);
  return v1;
}


// CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::ConstructInstance  (line 1380, @0x0000000002d32b80, libserver.so)  // inlines: CDOTA_Ability_Undying_Tombstone, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Undying_Tombstone>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_4662250;
    *(p + 115) = 0;
    *(p + 232) = 0;
    *(p + 233) = 0;
    *(p + 234) = -1;
  }
  return p;
}


// CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1380, @0x0000000002d34cc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1380, @0x0000000002d34ce0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Undying_Tombstone::GetEntityClassInternal  (line 1380, @0x0000000002d4b3e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Undying_Tombstone"
// globals: `guard variable for'CDOTA_Ability_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_TombstoneClass, CDOTA_Ability_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_TombstoneClass, __dso_handle, CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Undying_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_TombstoneClassInfo, CDOTA_Ability_Undying_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_TombstoneClassInfo
CEntityClass *__cdecl CDOTA_Ability_Undying_Tombstone::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_TombstoneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_TombstoneClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_TombstoneClass);
    CDOTA_Ability_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_TombstoneClass._vptr_CEntityClass = off_46621D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_TombstoneClass);
    __cxa_atexit(
      CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_TombstoneClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Undying_TombstoneClass != 0 )
    return &CDOTA_Ability_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_TombstoneClass;
  if ( `guard variable for'CDOTA_Ability_Undying_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_TombstoneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Undying_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_TombstoneClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Undying_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_TombstoneClassInfo,
      "CDOTA_Ability_Undying_Tombstone",
      "undying_tombstone",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Undying_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_TombstoneClassInfo);
  }
  CDOTA_Ability_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_TombstoneClass.m_pClassInfo = &CDOTA_Ability_Undying_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_TombstoneClassInfo;
  CDOTA_Ability_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_TombstoneClass.m_pBaseClassInfo = CDOTA_Ability_Undying_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_TombstoneClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Undying_TombstoneClass = &CDOTA_Ability_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_TombstoneClass;
  CDOTA_Ability_Undying_Tombstone::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_TombstoneClassInfo.m_pClass = &CDOTA_Ability_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_TombstoneClass;
  CDOTA_Ability_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_TombstoneClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Undying_TombstoneClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Undying_Tombstone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_TombstoneClass;
}


// CDOTA_Ability_Undying_Tombstone::GetGestureBasedActivity  (line 1393, @0x0000000002d20910, libserver.so)
Activity __fastcall CDOTA_Ability_Undying_Tombstone::GetGestureBasedActivity(
        CDOTA_Ability_Undying_Tombstone *const this)
{
  return 1668;
}


// CDOTA_Ability_Undying_Tombstone::OnSpellStart  (line 1412, @0x0000000002cf4d70, libserver.so)  // inlines: GetAbilityData, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, GetTeamNumber, QAngle, Set, Vector, VectorNormalize2D, VectorSubtract, operator-, operator=
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, CGridNav::DestroyTreesAroundPoint, CFmtStrN<256, false>::CFmtStrN, DOTA_CreateUnitByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::GetAbsOrigin, VectorNormalize, RandomFloat (26 total)
// strings: "npc_dota_unit_tombstone%d", "modifier_undying_tombstone", "modifier_kill", "modifier_magic_immune", "modifier_tombstone_hp", "modifier_undying_tombstone_zombie_aura" (9 total)
void __fastcall CDOTA_Ability_Undying_Tombstone::OnSpellStart(CDOTA_Ability_Undying_Tombstone *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v3; // r12d
  float v4; // xmm3_4
  int m_Value; // r15d
  CDOTA_BaseNPC *v6; // r13
  CDOTA_BaseNPC *v7; // r12
  int v8; // edx
  CDOTA_BaseNPC *v9; // r12
  CEntityIdentity *m_pEntity; // rax
  int v11; // edx
  __int16 v12; // cx
  float v13; // xmm1_4
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  const Vector *AbsOrigin; // r15
  vec_t v19; // xmm0_4
  vec_t v20; // xmm1_4
  vec_t v21; // xmm0_4
  CDOTA_BaseNPC *v22; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  const char *ReplacementSound; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v32; // rax
  float v33; // xmm3_4
  CDOTA_BaseNPC *pEnt; // [rsp+10h] [rbp-1F0h]
  const Vector *v35; // [rsp+18h] [rbp-1E8h]
  Vector vDirection; // [rsp+20h] [rbp-1E0h] BYREF
  Vector v37; // [rsp+30h] [rbp-1D0h]
  QAngle vAngles; // [rsp+40h] [rbp-1C0h] BYREF
  Vector CursorPosition; // [rsp+50h] [rbp-1B0h]
  Vector v40; // [rsp+60h] [rbp-1A0h]
  Vector v41; // [rsp+70h] [rbp-190h]
  Vector vLocation; // [rsp+80h] [rbp-180h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-170h] BYREF
  KeyValues kv2; // [rsp+B0h] [rbp-150h] BYREF
  unsigned __int64 v45; // [rsp+1C8h] [rbp-38h]
  Vector v46; // 0:kr14_12.12

  v45 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v3, CursorPosition, 300.0, v4);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTABaseAbility::GetCaster(this);
  v46 = CDOTABaseAbility::GetCursorPosition(this);
  v8 = this->m_iLevel.m_Value;
  vLocation = v46;
  CFmtStrN<256,false>::CFmtStrN(&kv2, "npc_dota_unit_tombstone%d", v8);
  v9 = DOTA_CreateUnitByName(&kv2.CKeyValues_Data + 9, &vLocation, 1, v7, v6, m_Value);
  if ( v9 != 0 )
  {
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    m_pEntity = v9->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v12 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->hTombstone.m_Index) = v12 | this->hTombstone.m_Index & 0x8000;
      this->hTombstone.m_Index = (v11 << 15) | this->hTombstone.m_Index & 0x7FFF;
    }
    else
    {
      this->hTombstone.m_Index = -1;
    }
    KeyValues::KeyValues(&kv, "modifier_undying_tombstone");
    KeyValues::SetFloat(&kv, "duration", v13);
    v14 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v9, v14, this, "modifier_kill", &kv, 0);
    v15 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v9, v15, this, "modifier_magic_immune", &kv, 0);
    v16 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v9, v16, this, "modifier_tombstone_hp", &kv, 0);
    v17 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v17);
    v37 = CDOTABaseAbility::GetCursorPosition(this);
    v19 = v37.y - AbsOrigin->y;
    v20 = v37.x - AbsOrigin->x;
    vDirection.z = 0.0;
    vDirection.y = v19;
    vDirection.x = v20;
    VectorNormalize(&vDirection);
    v21 = RandomFloat(-135.0, -45.0);
    vAngles.x = 0.0;
    vAngles.y = v21;
    vAngles.z = 0.0;
    CBaseEntity::SetAbsAngles(v9, &vAngles);
    v40 = CDOTABaseAbility::GetCursorPosition(this);
    FindClearSpaceForUnit(v9, v40, 1);
    KeyValues::KeyValues(&kv2, "modifier_undying_tombstone_zombie_aura");
    v22 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v9, v22, this, "modifier_undying_tombstone_zombie_aura", &kv2, 0);
    LODWORD(AbsOrigin) = CDOTABaseAbility::CreateAbilityParticleEffect(
                           this,
                           "particles/units/heroes/hero_undying/undying_tombstone.vpcf",
                           2,
                           0,
                           0);
    v41 = CDOTABaseAbility::GetCursorPosition(this);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbsOrigin, 0, *&v41.x, v41.z);
    v24 = CDOTABaseAbility::GetCaster(this);
    v35 = CBaseEntity::GetAbsOrigin(v24);
    pEnt = CDOTABaseAbility::GetCaster(this);
    v25 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v25, AbsOrigin, 1, pEnt, 5, "attach_attack1", *v35, 1);
    vLocation.x = this->duration;
    vLocation.y = vLocation.x;
    vLocation.z = vLocation.x;
    v26 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v26, AbsOrigin, 2, *&vLocation.x, vLocation.z);
    v27 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v27, AbsOrigin);
    v28 = CDOTABaseAbility::GetCaster(this);
    ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v28, "Hero_Undying.Tombstone");
    CDOTA_BaseNPC::UnitEmitSound(v9, ReplacementSound, 0.0, 0, 0);
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    vLocation = CDOTABaseAbility::GetCursorPosition(this);
    v32 = CDOTABaseAbility::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityMessage(
      g_pGameRules,
      v32,
      0,
      m_iAbilityID,
      0,
      0,
      *&vLocation.x,
      vLocation.z,
      -1.0,
      v33);
    KeyValues::~KeyValues(&kv2);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Undying_Tombstone::FindAvailableZombie  (line 1465, @0x0000000002cea5d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsElapsed, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator->, operator[]
// calls: CountdownTimer::Now
// callers: CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::OnIntervalThink
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC *__fastcall CDOTA_Ability_Undying_Tombstone::FindAvailableZombie(
        CDOTA_Ability_Undying_Tombstone *const this)
{
  int v2; // r12d
  __int64 v3; // rbx
  CHandle<CBaseEntity> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 v10; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // r14

  v2 = 0;
  v3 = 0;
  if ( this->m_vZombies.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = &this->m_vZombies.m_Memory.m_pMemory[v3];
    m_Index = v4->m_Index;
    if ( v4->m_Index + 2 > 1 )
    {
      v6 = v4->m_Index;
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[v6 & 0x1FF];
        if ( v8 != 0
          && m_Index == v8->m_EHandle.m_Index
          && (*(v8->m_pInstance->_vptr_IHandleEntity + 139))(v8->m_pInstance) == 0 )
        {
          v9 = &this->m_vZombies.m_Memory.m_pMemory[v3];
          v10 = v9->m_Index;
          if ( v9->m_Index + 2 > 1 )
          {
            v11 = v9->m_Index;
            v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
            if ( v12 != 0 )
            {
              v13 = &v12[v11 & 0x1FF];
              if ( v13 != 0 && v10 == v13->m_EHandle.m_Index )
              {
                m_pInstance = v13->m_pInstance;
                if ( v13->m_pInstance != 0
                  && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                  && CountdownTimer::Now(&m_pInstance[94]) >= *(&m_pInstance[94].m_pEntity + 1) )
                {
                  break;
                }
              }
            }
          }
        }
      }
    }
    ++v2;
    ++v3;
    if ( this->m_vZombies.m_Size <= v2 )
      return 0;
  }
  return m_pInstance;
}


// CDOTA_Ability_Undying_Tombstone::StoreZombie  (line 1483, @0x0000000002d0fb10, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator[]
// calls: CUtlMemory<CHandle<CBaseEntity>, int>::Grow
// callers: CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::OnIntervalThink
void __fastcall CDOTA_Ability_Undying_Tombstone::StoreZombie(
        CDOTA_Ability_Undying_Tombstone *const this,
        CDOTA_BaseNPC *pZombie)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  __int64 m_Size; // r12
  int v6; // eax
  CHandle<CBaseEntity> *v7; // rax
  int v8; // [rsp+0h] [rbp-20h]

  v8 = -1;
  if ( pZombie != 0 )
  {
    m_pEntity = pZombie->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v8 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  m_Size = this->m_vZombies.m_Size;
  v6 = this->m_vZombies.m_Size;
  if ( m_Size == this->m_vZombies.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_vZombies.m_Memory, 1);
    v6 = this->m_vZombies.m_Size;
  }
  this->m_vZombies.m_Size = v6 + 1;
  v7 = &this->m_vZombies.m_Memory.m_pMemory[m_Size];
  if ( v7 != 0 )
    v7->m_Index = v8;
}


// CDOTA_Ability_Undying_Tombstone::KillZombies  (line 1490, @0x0000000002cea720, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator->, operator[]
// calls: CDOTA_BaseNPC::ForceKill
// callers: CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::OnDestroy
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Undying_Tombstone::KillZombies(CDOTA_Ability_Undying_Tombstone *const this)
{
  int v2; // r12d
  __int64 i; // rbx
  CHandle<CBaseEntity> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 v10; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // r14

  v2 = 0;
  for ( i = 0; this->m_vZombies.m_Size > v2; ++i )
  {
    v4 = &this->m_vZombies.m_Memory.m_pMemory[i];
    m_Index = v4->m_Index;
    if ( v4->m_Index + 2 > 1 )
    {
      v6 = v4->m_Index;
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[v6 & 0x1FF];
        if ( v8 != 0
          && m_Index == v8->m_EHandle.m_Index
          && (*(v8->m_pInstance->_vptr_IHandleEntity + 139))(v8->m_pInstance) != 0 )
        {
          v9 = &this->m_vZombies.m_Memory.m_pMemory[i];
          v10 = v9->m_Index;
          if ( v9->m_Index + 2 > 1 )
          {
            v11 = v9->m_Index;
            v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
            if ( v12 != 0 )
            {
              v13 = &v12[v11 & 0x1FF];
              if ( v13 != 0 && v10 == v13->m_EHandle.m_Index )
              {
                m_pInstance = v13->m_pInstance;
                if ( v13->m_pInstance != 0
                  && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                  && (*(*m_pInstance[94].m_iszPrivateVScripts.u.m_Id + 3264LL))(m_pInstance[94].m_iszPrivateVScripts.u.m_Id) == 0 )
                {
                  CDOTA_BaseNPC::ForceKill(m_pInstance, 0);
                }
              }
            }
          }
        }
      }
    }
    ++v2;
  }
}


// CDOTA_Ability_Undying_Tombstone::OnSaveState  (line 1510, @0x0000000002cd9bf0, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::OnSaveState, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::FindModifierByName, KeyValues::SetFloat
// strings: "modifier_kill", "tombstonex", "tombstoney"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Ability_Undying_Tombstone::OnSaveState(
        CDOTA_Ability_Undying_Tombstone *const this,
        KeyValues *pKV)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_Buff *ModifierByName; // rdi
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4

  CDOTABaseAbility::OnSaveState(this, pKV);
  m_Index = this->hTombstone.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1;
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->hTombstone.m_Index) >> 9) & 0x3F];
  if ( v5 == 0 )
    return 1;
  v6 = &v5[this->hTombstone.m_Index & 0x1FF];
  if ( v6 == 0 )
    return 1;
  if ( m_Index != v6->m_EHandle.m_Index )
    return 1;
  m_pInstance = v6->m_pInstance;
  if ( v6->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
    return 1;
  CBaseEntity::GetAbsOrigin(v6->m_pInstance);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_kill", 0);
  if ( ModifierByName != 0 )
  {
    (*(ModifierByName->_vptr_CDOTA_Buff + 30))(ModifierByName);
    v11 = 0.0;
    if ( g_pGameRules != 0 )
      v11 = *&g_pGameRules[18].m_szQuestName[20];
    KeyValues::SetFloat(pKV, "duration", v11);
  }
  KeyValues::SetFloat(pKV, "tombstonex", v10);
  KeyValues::SetFloat(pKV, "tombstoney", v12);
  return 1;
}


// CDOTA_Ability_Undying_Tombstone::OnLoadState  (line 1534, @0x0000000002cee5e0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, GetTeamNumber, Set, Vector, operator=
// calls: CDOTABaseAbility::OnLoadState, KeyValues::GetFloat, CDOTABaseAbility::GetCaster, CFmtStrN<256, false>::CFmtStrN, DOTA_CreateUnitByName, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, FindClearSpaceForUnit, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "tombstoney", "tombstonex", "npc_dota_unit_tombstone%d", "modifier_undying_tombstone", "modifier_kill", "modifier_magic_immune" (8 total)
bool __fastcall CDOTA_Ability_Undying_Tombstone::OnLoadState(
        CDOTA_Ability_Undying_Tombstone *const this,
        KeyValues *pKV)
{
  float v4; // xmm1_4
  float v5; // xmm1_4
  __m128i v6; // xmm0
  float v7; // xmm1_4
  int m_Value; // r15d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v10; // r12
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // r12
  CEntityIdentity *m_pEntity; // rdx
  int v14; // eax
  __int16 v15; // cx
  float v16; // xmm1_4
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  Vector vLocation; // [rsp+10h] [rbp-180h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-170h] BYREF
  KeyValues kv2; // [rsp+40h] [rbp-150h] BYREF
  unsigned __int64 v25; // [rsp+158h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  CDOTABaseAbility::OnLoadState(this, pKV);
  KeyValues::GetFloat(pKV, "duration", v4);
  *v6.m128i_i32 = KeyValues::GetFloat(pKV, "tombstoney", v5);
  LODWORD(vLocation.y) = _mm_cvtsi128_si32(v6);
  vLocation.x = KeyValues::GetFloat(pKV, "tombstonex", v7);
  vLocation.z = 0.0;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  v10 = CDOTABaseAbility::GetCaster(this);
  CFmtStrN<256,false>::CFmtStrN(&kv2, "npc_dota_unit_tombstone%d", this->m_iLevel.m_Value);
  v11 = DOTA_CreateUnitByName(&kv2.CKeyValues_Data + 9, &vLocation, 1, v10, Caster, m_Value);
  v12 = v11;
  if ( v11 != 0 )
  {
    m_pEntity = v11->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v15 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->hTombstone.m_Index) = v15 | this->hTombstone.m_Index & 0x8000;
      this->hTombstone.m_Index = (v14 << 15) | this->hTombstone.m_Index & 0x7FFF;
    }
    else
    {
      this->hTombstone.m_Index = -1;
    }
    KeyValues::KeyValues(&kv, "modifier_undying_tombstone");
    KeyValues::SetFloat(&kv, "duration", v16);
    v17 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v12, v17, this, "modifier_kill", &kv, 0);
    v18 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v12, v18, this, "modifier_magic_immune", &kv, 0);
    v19 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v12, v19, this, "modifier_tombstone_hp", &kv, 0);
    FindClearSpaceForUnit(v12, vLocation, 1);
    KeyValues::KeyValues(&kv2, "modifier_undying_tombstone_zombie_aura");
    v20 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v12, v20, this, "modifier_undying_tombstone_zombie_aura", &kv2, 0);
    KeyValues::~KeyValues(&kv2);
    KeyValues::~KeyValues(&kv);
  }
  return 1;
}


// CDOTA_Ability_Undying_Tombstone::GetSlowDuration  (line 1564, @0x0000000002cf6920, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Undying_Tombstone::GetSlowDuration(CDOTA_Ability_Undying_Tombstone *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Modifier_Undying_Tombstone_HP::~CDOTA_Modifier_Undying_Tombstone_HP  (line 1573, @0x0000000002d269c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Undying_Tombstone_HP::~CDOTA_Modifier_Undying_Tombstone_HP(
        CDOTA_Modifier_Undying_Tombstone_HP *const this)
{
  this->_vptr_CDOTA_Buff = &off_4662D10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Undying_Tombstone_HP::~CDOTA_Modifier_Undying_Tombstone_HP  (line 1573, @0x0000000002d269e0, libserver.so)  // inlines: ~CDOTA_Modifier_Undying_Tombstone_HP
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Undying_Tombstone_HP::~CDOTA_Modifier_Undying_Tombstone_HP(
        CDOTA_Modifier_Undying_Tombstone_HP *const this)
{
  this->_vptr_CDOTA_Buff = &off_4662D10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Undying_Tombstone_HP::IsHidden  (line 1578, @0x0000000002d20920, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_Tombstone_HP::IsHidden(CDOTA_Modifier_Undying_Tombstone_HP *const this)
{
  return 1;
}


// CDOTA_Modifier_Undying_Tombstone_HP::OnCreated  (line 1598, @0x0000000002d09100, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "tombstone_health"
void __fastcall CDOTA_Modifier_Undying_Tombstone_HP::OnCreated(
        CDOTA_Modifier_Undying_Tombstone_HP *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->tombstone_health = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "tombstone_health", -1, 0);
  else
    this->tombstone_health = 0;
}


// CDOTA_Modifier_Undying_Tombstone_HP::DeclareFunctions  (line 1605, @0x0000000002ccaa20, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Undying_Tombstone_HP::GetUnitLifetimeFraction(CModifierParams const&), CDOTA_Modifier_Undying_Tombstone_HP::GetAbsoluteNoDamagePhysical(CModifierParams const&), CDOTA_Modifier_Undying_Tombstone_HP::GetAbsoluteNoDamageMagical(CModifierParams const&), CDOTA_Modifier_Undying_Tombstone_HP::GetAbsoluteNoDamagePure(CModifierParams const&), CDOTA_Modifier_Undying_Tombstone_HP::OnAttacked(CModifierParams const&)
void __fastcall CDOTA_Modifier_Undying_Tombstone_HP::DeclareFunctions(CDOTA_Modifier_Undying_Tombstone_HP *const this)
{
  this->m_Functions[157].__pfn = CDOTA_Modifier_Undying_Tombstone_HP::GetUnitLifetimeFraction;
  this->m_Functions[157].__delta = 0;
  this->m_Functions[103].__delta = 0;
  this->m_Functions[103].__pfn = CDOTA_Modifier_Undying_Tombstone_HP::GetAbsoluteNoDamagePhysical;
  this->m_Functions[104].__pfn = CDOTA_Modifier_Undying_Tombstone_HP::GetAbsoluteNoDamageMagical;
  this->m_Functions[105].__pfn = CDOTA_Modifier_Undying_Tombstone_HP::GetAbsoluteNoDamagePure;
  this->m_Functions[104].__delta = 0;
  this->m_Functions[105].__delta = 0;
  this->m_Functions[137].__pfn = CDOTA_Modifier_Undying_Tombstone_HP::OnAttacked;
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_Undying_Tombstone_HP::GetAbsoluteNoDamagePhysical  (line 1615, @0x0000000002ccaab0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Tombstone_HP::GetAbsoluteNoDamagePhysical(
        CDOTA_Modifier_Undying_Tombstone_HP *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Undying_Tombstone_HP::GetAbsoluteNoDamageMagical  (line 1622, @0x0000000002ccaad0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Tombstone_HP::GetAbsoluteNoDamageMagical(
        CDOTA_Modifier_Undying_Tombstone_HP *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Undying_Tombstone_HP::GetAbsoluteNoDamagePure  (line 1629, @0x0000000002ccaaf0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Tombstone_HP::GetAbsoluteNoDamagePure(
        CDOTA_Modifier_Undying_Tombstone_HP *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Undying_Tombstone_HP::OnAttacked  (line 1636, @0x0000000002cdba10, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::Kill, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Tombstone_HP::OnAttacked(
        CDOTA_Modifier_Undying_Tombstone_HP *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // rbx
  int v13; // r13d
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v15; // rax
  int Health; // ebx
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->htarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          v9 = params->hattacker.m_Index;
          if ( v9 + 2 > 1 )
          {
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = &v10[params->hattacker.m_Index & 0x1FF];
              if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
              {
                v12 = v11->m_pInstance;
                if ( v11->m_pInstance != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
                {
                  if ( (v12[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 || (v13 = 2, LOBYTE(v12[71].m_pEntity) != 0) )
                    v13 = 1;
                  Parent = CDOTA_Buff::GetParent(this);
                  if ( CBaseEntity::GetHealth(Parent) - v13 <= 0 )
                  {
                    v18 = CDOTA_Buff::GetParent(this);
                    CDOTA_BaseNPC::Kill(v18, 0, v12, 0.0, 0);
                    CDOTA_Buff::Destroy(this, 0, 0, 0);
                  }
                  else
                  {
                    v15 = CDOTA_Buff::GetParent(this);
                    Health = CBaseEntity::GetHealth(v15);
                    v17 = CDOTA_Buff::GetParent(this);
                    CDOTA_BaseNPC::ModifyHealth(v17, Health - v13, 0, 1, 0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Undying_Tombstone_HP::GetUnitLifetimeFraction  (line 1667, @0x0000000002ccab10, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_Tombstone_HP::GetUnitLifetimeFraction(
        CDOTA_Modifier_Undying_Tombstone_HP *const this,
        const CModifierParams *const params)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  __int64 v6; // xmm2_8
  unsigned int v8; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  (*(this->_vptr_CDOTA_Buff + 30))(this, params);
  v4 = 0.0;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  *&v8 = v3 - v4;
  v5 = (*(this->_vptr_CDOTA_Buff + 31))(this);
  v6 = v8;
  result.m_szVal = 0;
  *&v6 = *&v8 / v5;
  *&result.m_eType = (v6 << 32) | 1;
  return result;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::~CDOTA_Modifier_Undying_Tombstone_Zombie_Aura  (line 1677, @0x0000000002d26970, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::~CDOTA_Modifier_Undying_Tombstone_Zombie_Aura(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4663030;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::~CDOTA_Modifier_Undying_Tombstone_Zombie_Aura  (line 1677, @0x0000000002d26990, libserver.so)  // inlines: ~CDOTA_Modifier_Undying_Tombstone_Zombie_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::~CDOTA_Modifier_Undying_Tombstone_Zombie_Aura(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4663030;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::IsHidden  (line 1682, @0x0000000002d20930, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::IsHidden(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::OnCreated  (line 1700, @0x0000000002d0ac20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "zombie_interval", "health_threshold"
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::OnCreated(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->zombie_interval = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->health_threshold = 0;
    goto LABEL_5;
  }
  this->radius = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->zombie_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "zombie_interval", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->health_threshold = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "health_threshold", -1, 0);
LABEL_5:
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  CDOTA_Buff::StartIntervalThink(this, this->zombie_interval, v6);
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::OnRefresh  (line 1714, @0x0000000002d0a0e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "zombie_interval", "health_threshold"
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::OnRefresh(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->zombie_interval = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->radius = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->zombie_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "zombie_interval", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->health_threshold = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "health_threshold", -1, 0);
    return;
  }
LABEL_7:
  this->health_threshold = 0;
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::OnIntervalThink  (line 1723, @0x0000000002d0fbd0, libserver.so)  // inlines: CEntityHandle, CEntityKeyValuesModifyScope, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetLevel, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsValid, LookupEntity, Set, SetForceAttackTarget, SetIdleAcquire, SetParentTombstone, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CEntityKeyValuesModifyScope, ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, FindUnitsInRadius, CDOTA_Buff::GetAbility, CDOTA_Ability_Undying_Tombstone::FindAvailableZombie, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::SetValue<bool>, CDOTA_BaseNPC::DirectRespawn, FindClearSpaceForUnit, CEntityKeyValuesModifyScope::Release (34 total)
// strings: "modifier_magic_immune", "modifier_undying_tombstone_zombie_modifier", "undying_tombstone_zombie_deathstrike", "modifier_undying_tombstone_zombie_deathstrike", "particles/units/heroes/hero_undying/undying_zombie_spawn.vpcf", "Undying_Zombie.Spawn" (8 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::OnIntervalThink(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Aura *const this)
{
  __m128i v1; // xmm2
  float v3; // r14d
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *Caster; // rax
  __int64 v8; // r15
  CConcreteEntityList *v9; // rsi
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  __int64 v14; // rcx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_Ability_Undying_Tombstone *Ability; // rax
  CDOTA_Ability_Undying_Tombstone *v18; // r12
  CDOTA_BaseNPC *v19; // rax
  CDOTABaseAbility *v20; // rbx
  CDOTA_BaseNPC *v21; // rax
  CDOTABaseAbility *v22; // rbx
  CDOTA_BaseNPC *v23; // rax
  CDOTABaseAbility *AbilityByName; // rbx
  int m_Value; // r12d
  CEntityIdentity *m_pEntity; // rax
  int v27; // edx
  __int16 v28; // cx
  CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike *ModifierByName; // rax
  int BuffParticleEffect; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  int v32; // ebx
  const Vector *v33; // rax
  CDOTA_BaseNPC *UnitByName; // rax
  CDOTA_BaseNPC *v35; // rax
  uint32 v36; // edx
  unsigned __int16 v37; // cx
  int v38; // esi
  int v39; // eax
  CEntityIdentity *v40; // rdx
  CEntityIdentity *v41; // rdx
  CDOTA_BaseNPC *v42; // rbx
  void (__fastcall *v43)(CDOTA_Unit_Undying_Zombie *, _QWORD); // r12
  CDOTA_BaseNPC *v44; // rax
  CDOTA_BaseNPC *v45; // rsi
  void (__fastcall *v46)(CDOTA_Unit_Undying_Zombie *, CDOTA_BaseNPC *); // r12
  int v47; // ebx
  const Vector *v48; // rax
  CEntityInstance *v49; // rax
  CDOTA_BaseNPC *pEconItemOwner; // [rsp+20h] [rbp-150h]
  CDOTA_BaseNPC *pEconItemOwnera; // [rsp+20h] [rbp-150h]
  CDOTA_Unit_Undying_Zombie *pNPC; // [rsp+50h] [rbp-120h]
  CDOTA_Unit_Undying_Zombie *pNPCa; // [rsp+50h] [rbp-120h]
  CDOTA_Unit_Undying_Zombie *pNPCb; // [rsp+50h] [rbp-120h]
  int i; // [rsp+5Ch] [rbp-114h]
  char v56; // [rsp+6Fh] [rbp-101h] BYREF
  CEntityKeyValuesModifyScope_0 sg; // [rsp+70h] [rbp-100h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+80h] [rbp-F0h] BYREF
  KeyValues kv; // [rsp+A0h] [rbp-D0h] BYREF
  CEntityKeyValues kv_0; // [rsp+C0h] [rbp-B0h] BYREF
  unsigned __int64 v61; // [rsp+138h] [rbp-38h]
  Vector v62; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v63; // 0:xmm0_8.8,8:xmm1_4.4

  entities.m_Size = 0;
  v61 = __readfsqword(0x28u);
  *v1.m128i_i32 = this->radius;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  Caster = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &entities, 2, 3, 464, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v8 = 0;
    for ( i = 0; entities.m_Size > i; ++i )
    {
      v9 = CEntityHandle::gm_pEntityList;
      v10 = &entities.m_Memory.m_pMemory[v8];
      m_Index = entities.m_Memory.m_pMemory[v8].m_Index;
      if ( m_Index + 2 <= 1
        || (v12 = v10->m_Index,
            (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F]) == 0)
        || (v14 = v12 & 0x1FF, v9 = (8 * v14), (v15 = &v13[v14]) == 0)
        || m_Index != v15->m_EHandle.m_Index
        || (m_pInstance = v15->m_pInstance, v15->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC )
      {
        m_pInstance = 0;
      }
      if ( (*(m_pInstance->_vptr_IHandleEntity + 405))(m_pInstance, v9) != 0 )
        goto LABEL_3;
      Ability = CDOTA_Buff::GetAbility(this);
      v18 = Ability;
      if ( Ability == 0 )
        goto LABEL_3;
      if ( CDOTA_Ability_Undying_Tombstone::FindAvailableZombie(Ability) != 0 )
      {
        pNPC = CDOTA_Ability_Undying_Tombstone::FindAvailableZombie(v18);
      }
      else
      {
        if ( v18 == 0 )
          goto LABEL_3;
        pNPC = 0;
      }
      if ( (m_pInstance->m_iUnitType & 0x10) == 0 )
      {
        v19 = CDOTA_Buff::GetParent(this);
        if ( (*(v19->_vptr_IHandleEntity + 408))(v19) != 0 )
        {
          if ( pNPC != 0 )
          {
            if ( (*(pNPC->_vptr_IHandleEntity + 408))(pNPC) == 0 )
            {
              CEntityKeyValues::CEntityKeyValues(&kv_0);
              sg.m_pKeyValues = 0;
              sg.m_pPrevAllocator = 0;
              CEntityKeyValuesModifyScope::BeginModify(&sg, &kv_0);
              v56 = 1;
              CEntityKeyValues::SetValue<bool>(&kv_0, 1526165316, &v56);
              CDOTA_BaseNPC::DirectRespawn(pNPC, &kv_0);
              v62 = *CBaseEntity::GetAbsOrigin(m_pInstance);
              FindClearSpaceForUnit(pNPC, v62, 1);
              CEntityKeyValuesModifyScope::Release(&sg);
              CEntityKeyValues::~CEntityKeyValues(&kv_0);
            }
LABEL_18:
            KeyValues::KeyValues(&kv, "modifier_magic_immune");
            v20 = CDOTA_Buff::GetAbility(this);
            v21 = CDOTA_Buff::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(pNPC, v21, v20, "modifier_magic_immune", &kv, 0);
            KeyValues::KeyValues(&kv_0, "modifier_undying_tombstone_zombie_modifier");
            v22 = CDOTA_Buff::GetAbility(this);
            v23 = CDOTA_Buff::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(pNPC, v23, v22, "modifier_undying_tombstone_zombie_modifier", &kv_0, 0);
            pNPC->m_pTombstone = CDOTA_Buff::GetParent(this);
            AbilityByName = CDOTA_BaseNPC::FindAbilityByName(pNPC, "undying_tombstone_zombie_deathstrike", 0);
            if ( AbilityByName != 0 )
            {
              while ( 1 )
              {
                m_Value = AbilityByName->m_iLevel.m_Value;
                if ( m_Value == CDOTA_Buff::GetAbility(this)->m_iLevel.m_Value )
                  break;
                CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
              }
            }
            CDOTA_BaseNPC::Interrupt(pNPC);
            pNPC->m_bIdleAcquire = 1;
            m_pEntity = m_pInstance->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v27 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
              if ( m_pEntity->m_EHandle.m_Index == -1 )
                v28 = 0x7FFF;
              else
                v28 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              LOWORD(pNPC->m_hForceAttackTarget.m_Index) = v28 | pNPC->m_hForceAttackTarget.m_Index & 0x8000;
              pNPC->m_hForceAttackTarget.m_Index = (v27 << 15) | pNPC->m_hForceAttackTarget.m_Index & 0x7FFF;
            }
            else
            {
              pNPC->m_hForceAttackTarget.m_Index = -1;
            }
            pNPC->m_bAllowAllyForceAttack = 0;
            CDOTA_BaseNPC::UpdatePseudoQueuedOrder(pNPC, 1);
            ModifierByName = CDOTA_BaseNPC::FindModifierByName(pNPC, "modifier_undying_tombstone_zombie_deathstrike", 0);
            CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike::SetChasedUnit(ModifierByName, m_pInstance);
            BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                                   this,
                                   "particles/units/heroes/hero_undying/undying_zombie_spawn.vpcf",
                                   1,
                                   pNPC,
                                   0);
            ParticleManager = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, BuffParticleEffect);
            DOTA_EmitSound(8, "Undying_Zombie.Spawn", pNPC);
            KeyValues::~KeyValues(&kv_0);
            KeyValues::~KeyValues(&kv);
            goto LABEL_3;
          }
          if ( DOTA_ServerHasEntitySpace()
            && v18->m_vZombies.m_Size < dota_hero_undying_max_zombies.m_pParent->m_Value.m_nValue )
          {
            if ( RollPercentage(25) )
            {
              v32 = CDOTABaseAbility::GetCaster(v18)->m_iTeamNum.m_Value;
              pNPCa = CDOTABaseAbility::GetCaster(v18);
              pEconItemOwner = CDOTABaseAbility::GetCaster(v18);
              v33 = CBaseEntity::GetAbsOrigin(m_pInstance);
              UnitByName = DOTA_CreateUnitByName("npc_dota_unit_undying_zombie", v33, 1, pEconItemOwner, pNPCa, v32);
            }
            else
            {
              v47 = CDOTABaseAbility::GetCaster(v18)->m_iTeamNum.m_Value;
              pNPCb = CDOTABaseAbility::GetCaster(v18);
              pEconItemOwnera = CDOTABaseAbility::GetCaster(v18);
              v48 = CBaseEntity::GetAbsOrigin(m_pInstance);
              UnitByName = DOTA_CreateUnitByName(
                             "npc_dota_unit_undying_zombie_torso",
                             v48,
                             1,
                             pEconItemOwnera,
                             pNPCb,
                             v47);
            }
            pNPC = UnitByName;
            CDOTA_Ability_Undying_Tombstone::StoreZombie(v18, UnitByName);
            v35 = CDOTA_Buff::GetCaster(this);
            v36 = v35->m_hOwnerEntity.m_Value.m_Index >> 15;
            if ( v35->m_hOwnerEntity.m_Value.m_Index == -1 )
            {
              v37 = 0x7FFF;
              v38 = 0x7FFF;
            }
            else
            {
              v37 = v35->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
              v38 = v37;
            }
            LOWORD(sg.m_pKeyValues) = v37 | sg.m_pKeyValues & 0x8000;
            v39 = (v36 << 15) | sg.m_pKeyValues & 0x7FFF;
            LODWORD(sg.m_pKeyValues) = v39;
            if ( (v39 + 2) > 1
              && (v40 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v38 >> 9]) != 0
              && (v41 = &v40[v38 & 0x1FF]) != 0
              && v39 == v41->m_EHandle.m_Index
              && (v49 = v41->m_pInstance, v41->m_pInstance != 0)
              && BYTE3(v49[7]._vptr_IHandleEntity) != 0 )
            {
              v42 = 0;
              if ( (v49[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                v42 = v41->m_pInstance;
            }
            else
            {
              v42 = 0;
            }
            v43 = *(pNPC->_vptr_IHandleEntity + 70);
            v44 = CDOTA_Buff::GetCaster(this);
            v43(pNPC, v44->m_iTeamNum.m_Value);
            v45 = v42;
            v46 = *(pNPC->_vptr_IHandleEntity + 40);
            if ( v42 == 0 )
              v45 = CDOTA_Buff::GetCaster(this);
            v46(pNPC, v45);
            v63 = *CBaseEntity::GetAbsOrigin(m_pInstance);
            FindClearSpaceForUnit(pNPC, v63, 1);
            goto LABEL_18;
          }
        }
      }
LABEL_3:
      ++v8;
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::OnDestroy  (line 1829, @0x0000000002cea870, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Ability_Undying_Tombstone::KillZombies
void __fastcall CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::OnDestroy(
        CDOTA_Modifier_Undying_Tombstone_Zombie_Aura *const this)
{
  CDOTA_Ability_Undying_Tombstone *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    CDOTA_Ability_Undying_Tombstone::KillZombies(Ability);
}


// CDOTA_Ability_Undying_FleshGolem::~CDOTA_Ability_Undying_FleshGolem  (line 1846, @0x0000000002d2c6d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Undying_FleshGolem::~CDOTA_Ability_Undying_FleshGolem(
        CDOTA_Ability_Undying_FleshGolem *const this)
{
  this->_vptr_IHandleEntity = &off_4663390;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Undying_FleshGolem::~CDOTA_Ability_Undying_FleshGolem  (line 1846, @0x0000000002d2c6f0, libserver.so)  // inlines: ~CDOTA_Ability_Undying_FleshGolem
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Undying_FleshGolem::~CDOTA_Ability_Undying_FleshGolem(
        CDOTA_Ability_Undying_FleshGolem *const this)
{
  this->_vptr_IHandleEntity = &off_4663390;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Undying_FleshGolem::Schema_DynamicBinding  (line 1848, @0x0000000002d20940, libserver.so)
// globals: CDOTA_Ability_Undying_FleshGolem::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Undying_FleshGolem::Schema_DynamicBinding(
        const CDOTA_Ability_Undying_FleshGolem *const this)
{
  return CDOTA_Ability_Undying_FleshGolem::s_pSchemaBinding;
}


// CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1848, @0x0000000002d20950, libserver.so)
// globals: CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::DestructInstance  (line 1848, @0x0000000002d20960, libserver.so)  // inlines: Destruct<CDOTA_Ability_Undying_FleshGolem>
void __fastcall CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::FreeInstance  (line 1848, @0x0000000002d20980, libserver.so)
void __fastcall CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::CanAllocate  (line 1848, @0x0000000002d209a0, libserver.so)
bool __fastcall CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1848, @0x0000000002d209b0, libserver.so)
// globals: CDOTA_Ability_Undying_FleshGolem::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Undying_FleshGolem::s_pSchemaBinding;
}


// CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::AllocateInstance  (line 1848, @0x0000000002d254d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::ConstructInstance  (line 1848, @0x0000000002d296c0, libserver.so)  // inlines: CDOTA_Ability_Undying_FleshGolem, Construct<CDOTA_Ability_Undying_FleshGolem>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4663390;
  }
  return p;
}


// CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1848, @0x0000000002d34d10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1848, @0x0000000002d34d30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Undying_FleshGolem::GetEntityClassInternal  (line 1848, @0x0000000002d4b530, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Undying_FleshGolem"
// globals: `guard variable for'CDOTA_Ability_Undying_FleshGolem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClass, CDOTA_Ability_Undying_FleshGolem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClass, __dso_handle, CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Undying_FleshGolem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClassInfo, CDOTA_Ability_Undying_FleshGolem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClassInfo
CEntityClass *__cdecl CDOTA_Ability_Undying_FleshGolem::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Undying_FleshGolem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Undying_FleshGolem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Undying_FleshGolem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClass);
    CDOTA_Ability_Undying_FleshGolem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClass._vptr_CEntityClass = off_4663310;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Undying_FleshGolem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClass);
    __cxa_atexit(
      CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Undying_FleshGolem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Undying_FleshGolemClass != 0 )
    return &CDOTA_Ability_Undying_FleshGolem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClass;
  if ( `guard variable for'CDOTA_Ability_Undying_FleshGolem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Undying_FleshGolem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Undying_FleshGolem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClassInfo,
      "CDOTA_Ability_Undying_FleshGolem",
      "undying_flesh_golem",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Undying_FleshGolem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClassInfo);
  }
  CDOTA_Ability_Undying_FleshGolem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClass.m_pClassInfo = &CDOTA_Ability_Undying_FleshGolem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClassInfo;
  CDOTA_Ability_Undying_FleshGolem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClass.m_pBaseClassInfo = CDOTA_Ability_Undying_FleshGolem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Undying_FleshGolemClass = &CDOTA_Ability_Undying_FleshGolem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClass;
  CDOTA_Ability_Undying_FleshGolem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClassInfo.m_pClass = &CDOTA_Ability_Undying_FleshGolem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClass;
  CDOTA_Ability_Undying_FleshGolem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Undying_FleshGolemClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Undying_FleshGolem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Undying_FleshGolemClass;
}


// CDOTA_Ability_Undying_FleshGolem::GetAOERadius  (line 1854, @0x0000000002d47200, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Undying_FleshGolem::GetAOERadius(CDOTA_Ability_Undying_FleshGolem *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Undying_FleshGolem::YouForgotToImplementOrDeclareServerClass  (line 1859, @0x0000000002ccab80, libserver.so)
int __fastcall CDOTA_Ability_Undying_FleshGolem::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Undying_FleshGolem *const this)
{
  return 0;
}


// CDOTA_Ability_Undying_FleshGolem::GetServerClass  (line 1859, @0x0000000002cde2f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Undying_FleshGolem::GetServerClass(CDOTA_Ability_Undying_FleshGolem *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Ability_Undying_FleshGolem::OnSpellStart  (line 1872, @0x0000000002cf52a0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_undying_flesh_golem", "Hero_Undying.FleshGolem.Cast"
void __fastcall CDOTA_Ability_Undying_FleshGolem::OnSpellStart(CDOTA_Ability_Undying_FleshGolem *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_undying_flesh_golem");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_undying_flesh_golem", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Undying.FleshGolem.Cast", v5);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Undying_FleshGolem::GetAbilityDamageToTargetOverInterval  (line 1892, @0x0000000002cff4f0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "max_damage_amp"
__int64 __fastcall CDOTA_Ability_Undying_FleshGolem::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Undying_FleshGolem *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  float fNumAttacksa; // [rsp+0h] [rbp-1Ch]
  float fNumAttacksb; // [rsp+0h] [rbp-1Ch]
  float fNumAttacksc; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    fNumAttacksa = fInterval / CDOTA_BaseNPC::GetAttacksPerSecond(Caster);
    v8 = CDOTABaseAbility::GetCaster(this);
    fNumAttacksb = CDOTA_BaseNPC::GetAverageTrueAttackDamage(v8, pTarget) * fNumAttacksa;
    fNumAttacksc = fNumAttacksb
                 * (CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_damage_amp", -1, 0) / 100.0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * fNumAttacksc);
  }
  return result;
}


// CDOTA_Modifier_Undying_FleshGolem::~CDOTA_Modifier_Undying_FleshGolem  (line 1909, @0x0000000002d26920, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Undying_FleshGolem::~CDOTA_Modifier_Undying_FleshGolem(
        CDOTA_Modifier_Undying_FleshGolem *const this)
{
  this->_vptr_CDOTA_Buff = &off_4663E50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Undying_FleshGolem::~CDOTA_Modifier_Undying_FleshGolem  (line 1909, @0x0000000002d26940, libserver.so)  // inlines: ~CDOTA_Modifier_Undying_FleshGolem
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Undying_FleshGolem::~CDOTA_Modifier_Undying_FleshGolem(
        CDOTA_Modifier_Undying_FleshGolem *const this)
{
  this->_vptr_CDOTA_Buff = &off_4663E50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Undying_FleshGolem::IsHidden  (line 1914, @0x0000000002d209c0, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_FleshGolem::IsHidden(CDOTA_Modifier_Undying_FleshGolem *const this)
{
  return 0;
}


// CDOTA_Modifier_Undying_FleshGolem::IsPurgable  (line 1915, @0x0000000002d209d0, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_FleshGolem::IsPurgable(CDOTA_Modifier_Undying_FleshGolem *const this)
{
  return 0;
}


// CDOTA_Modifier_Undying_FleshGolem::AllowIllusionDuplicate  (line 1916, @0x0000000002d209e0, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_FleshGolem::AllowIllusionDuplicate(
        CDOTA_Modifier_Undying_FleshGolem *const this)
{
  return 1;
}


// CDOTA_Modifier_Undying_FleshGolem::GetPriority  (line 1921, @0x0000000002d209f0, libserver.so)
int __fastcall CDOTA_Modifier_Undying_FleshGolem::GetPriority(CDOTA_Modifier_Undying_FleshGolem *const this)
{
  return 0;
}


// CDOTA_Modifier_Undying_FleshGolem::RemoveOnDeath  (line 1923, @0x0000000002d2b3c0, libserver.so)
// calls: CDOTA_Buff::GetAbility
bool __fastcall CDOTA_Modifier_Undying_FleshGolem::RemoveOnDeath(CDOTA_Modifier_Undying_FleshGolem *const this)
{
  return CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value;
}


// CDOTA_Modifier_Undying_FleshGolem::IsAura  (line 1927, @0x0000000002d20a00, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_FleshGolem::IsAura(CDOTA_Modifier_Undying_FleshGolem *const this)
{
  return 1;
}


// CDOTA_Modifier_Undying_FleshGolem::GetModifierAura  (line 1928, @0x0000000002d20a10, libserver.so)
// strings: "modifier_undying_flesh_golem_plague_aura"
const char *__fastcall CDOTA_Modifier_Undying_FleshGolem::GetModifierAura(
        CDOTA_Modifier_Undying_FleshGolem *const this)
{
  return "modifier_undying_flesh_golem_plague_aura";
}


// CDOTA_Modifier_Undying_FleshGolem::GetAuraSearchTeam  (line 1930, @0x0000000002d20a20, libserver.so)
int __fastcall CDOTA_Modifier_Undying_FleshGolem::GetAuraSearchTeam(CDOTA_Modifier_Undying_FleshGolem *const this)
{
  return 2;
}


// CDOTA_Modifier_Undying_FleshGolem::GetAuraSearchType  (line 1931, @0x0000000002d20a30, libserver.so)
int __fastcall CDOTA_Modifier_Undying_FleshGolem::GetAuraSearchType(CDOTA_Modifier_Undying_FleshGolem *const this)
{
  return 19;
}


// CDOTA_Modifier_Undying_FleshGolem::GetAuraSearchFlags  (line 1932, @0x0000000002d20a40, libserver.so)
int __fastcall CDOTA_Modifier_Undying_FleshGolem::GetAuraSearchFlags(CDOTA_Modifier_Undying_FleshGolem *const this)
{
  return 16;
}


// CDOTA_Modifier_Undying_FleshGolem::GetAuraRadius  (line 1933, @0x0000000002d20a50, libserver.so)
int __fastcall CDOTA_Modifier_Undying_FleshGolem::GetAuraRadius(CDOTA_Modifier_Undying_FleshGolem *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Undying_FleshGolem::DeclareFunctions  (line 1949, @0x0000000002ccab90, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Undying_FleshGolem::GetModifierModelChange(CModifierParams const&), CDOTA_Modifier_Undying_FleshGolem::GetModelScale(CModifierParams const&), CDOTA_Modifier_Undying_FleshGolem::GetAttackSound(CModifierParams const&)
void __fastcall CDOTA_Modifier_Undying_FleshGolem::DeclareFunctions(CDOTA_Modifier_Undying_FleshGolem *const this)
{
  this->m_Functions[152].__pfn = CDOTA_Modifier_Undying_FleshGolem::GetModifierModelChange;
  this->m_Functions[152].__delta = 0;
  this->m_Functions[153].__delta = 0;
  this->m_Functions[153].__pfn = CDOTA_Modifier_Undying_FleshGolem::GetModelScale;
  this->m_Functions[156].__pfn = CDOTA_Modifier_Undying_FleshGolem::GetAttackSound;
  this->m_Functions[156].__delta = 0;
}


// CDOTA_Modifier_Undying_FleshGolem::OnCreated  (line 1958, @0x0000000002d09be0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::StartGesture
void __fastcall CDOTA_Modifier_Undying_FleshGolem::OnCreated(
        CDOTA_Modifier_Undying_FleshGolem *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1534, 0.1, 0.1, 9, 0, 1.0);
}


// CDOTA_Modifier_Undying_FleshGolem::OnRefresh  (line 1982, @0x0000000002d08fe0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Undying_FleshGolem::OnRefresh(
        CDOTA_Modifier_Undying_FleshGolem *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Undying_FleshGolem::GetModifierModelChange  (line 1989, @0x0000000002ccabf0, libserver.so)
// strings: "models/heroes/undying/undying_flesh_golem.vmdl"
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_FleshGolem::GetModifierModelChange(
        CDOTA_Modifier_Undying_FleshGolem *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "models/heroes/undying/undying_flesh_golem.vmdl";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Undying_FleshGolem::GetModelScale  (line 1995, @0x0000000002ccac10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_FleshGolem::GetModelScale(
        CDOTA_Modifier_Undying_FleshGolem *const this,
        const CModifierParams *const params)
{
  return 0xC120000000000001LL;
}


// CDOTA_Modifier_Undying_FleshGolem::GetAttackSound  (line 2002, @0x0000000002cd8810, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster
// strings: "Hero_Undying_Golem.Attack"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_FleshGolem::GetAttackSound(
        CDOTA_Modifier_Undying_FleshGolem *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax
  char m_CScriptComponent_high; // bl
  bool v8; // zf
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 2uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 2uLL;
  v4 = &v3[params->htarget.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 2uLL;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 2uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 2uLL;
  m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
  v8 = m_CScriptComponent_high == CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
  *&result.m_eType = 2;
  if ( v8 )
    result.m_szVal = 0;
  else
    result.m_szVal = "Hero_Undying_Golem.Attack";
  return result;
}


// CDOTA_Modifier_Undying_FleshGolem::OnDestroy  (line 2016, @0x0000000002ccc9f0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_Undying.FleshGolem.End"
void __fastcall CDOTA_Modifier_Undying_FleshGolem::OnDestroy(CDOTA_Modifier_Undying_FleshGolem *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Undying.FleshGolem.End", 0.0, 0, 0);
}


// CDOTA_Modifier_Undying_FleshGolem_PlagueAura::~CDOTA_Modifier_Undying_FleshGolem_PlagueAura  (line 2029, @0x0000000002d268d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Undying_FleshGolem_PlagueAura::~CDOTA_Modifier_Undying_FleshGolem_PlagueAura(
        CDOTA_Modifier_Undying_FleshGolem_PlagueAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4664170;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Undying_FleshGolem_PlagueAura::~CDOTA_Modifier_Undying_FleshGolem_PlagueAura  (line 2029, @0x0000000002d268f0, libserver.so)  // inlines: ~CDOTA_Modifier_Undying_FleshGolem_PlagueAura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Undying_FleshGolem_PlagueAura::~CDOTA_Modifier_Undying_FleshGolem_PlagueAura(
        CDOTA_Modifier_Undying_FleshGolem_PlagueAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4664170;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Undying_FleshGolem_PlagueAura::IsHidden  (line 2037, @0x0000000002d20a60, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_FleshGolem_PlagueAura::IsHidden(
        CDOTA_Modifier_Undying_FleshGolem_PlagueAura *const this)
{
  return 0;
}


// CDOTA_Modifier_Undying_FleshGolem_PlagueAura::IsPurgable  (line 2038, @0x0000000002d20a70, libserver.so)
bool __fastcall CDOTA_Modifier_Undying_FleshGolem_PlagueAura::IsPurgable(
        CDOTA_Modifier_Undying_FleshGolem_PlagueAura *const this)
{
  return 0;
}


// CDOTA_Modifier_Undying_FleshGolem_PlagueAura::GetEffectName  (line 2040, @0x0000000002d20a80, libserver.so)
// strings: "particles/units/heroes/hero_undying/undying_fg_aura_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Undying_FleshGolem_PlagueAura::GetEffectName(
        CDOTA_Modifier_Undying_FleshGolem_PlagueAura *const this)
{
  return "particles/units/heroes/hero_undying/undying_fg_aura_debuff.vpcf";
}


// CDOTA_Modifier_Undying_FleshGolem_PlagueAura::OnCreated  (line 2065, @0x0000000002d0dcc0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "full_power_radius", "min_speed_slow", "max_speed_slow", "max_damage_amp", "min_damage_amp", "death_heal" (7 total)
void __fastcall CDOTA_Modifier_Undying_FleshGolem_PlagueAura::OnCreated(
        CDOTA_Modifier_Undying_FleshGolem_PlagueAura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  CDOTABaseAbility *v11; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->full_power_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "full_power_radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->full_power_radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "radius", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_13;
    }
  }
  this->radius = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->min_speed_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "min_speed_slow", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_14;
  }
LABEL_13:
  this->min_speed_slow = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->max_speed_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "max_speed_slow", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_15;
  }
LABEL_14:
  this->max_speed_slow = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->max_damage_amp = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "max_damage_amp", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
    goto LABEL_16;
  }
LABEL_15:
  this->max_damage_amp = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
LABEL_7:
    this->min_damage_amp = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "min_damage_amp", -1, 0);
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      goto LABEL_8;
    goto LABEL_17;
  }
LABEL_16:
  this->min_damage_amp = 0;
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
  {
LABEL_8:
    this->min_damage_amp = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v9, "min_damage_amp", -1, 0);
    v10 = CDOTA_Buff::GetAbility(this);
    if ( v10 != 0 )
      goto LABEL_9;
LABEL_18:
    this->death_heal = 0;
    v11 = CDOTA_Buff::GetAbility(this);
    if ( v11 != 0 )
      goto LABEL_10;
    goto LABEL_19;
  }
LABEL_17:
  this->min_damage_amp = 0;
  v10 = CDOTA_Buff::GetAbility(this);
  if ( v10 == 0 )
    goto LABEL_18;
LABEL_9:
  this->death_heal = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v10, "death_heal", -1, 0);
  v11 = CDOTA_Buff::GetAbility(this);
  if ( v11 != 0 )
  {
LABEL_10:
    this->death_heal_creep = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v11, "death_heal_creep", -1, 0);
    return;
  }
LABEL_19:
  this->death_heal_creep = 0;
}


// CDOTA_Modifier_Undying_FleshGolem_PlagueAura::OnRefresh  (line 2080, @0x0000000002d0d4b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "full_power_radius", "min_speed_slow", "max_speed_slow", "max_damage_amp", "min_damage_amp", "death_heal" (7 total)
void __fastcall CDOTA_Modifier_Undying_FleshGolem_PlagueAura::OnRefresh(
        CDOTA_Modifier_Undying_FleshGolem_PlagueAura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->full_power_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "full_power_radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->full_power_radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "radius", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  this->radius = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->min_speed_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "min_speed_slow", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_12:
  this->min_speed_slow = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->max_speed_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "max_speed_slow", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_14;
  }
LABEL_13:
  this->max_speed_slow = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->max_damage_amp = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "max_damage_amp", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
    goto LABEL_15;
  }
LABEL_14:
  this->max_damage_amp = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
LABEL_7:
    this->min_damage_amp = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "min_damage_amp", -1, 0);
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      goto LABEL_8;
LABEL_16:
    this->death_heal = 0;
    v10 = CDOTA_Buff::GetAbility(this);
    if ( v10 != 0 )
      goto LABEL_9;
    goto LABEL_17;
  }
LABEL_15:
  this->min_damage_amp = 0;
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 == 0 )
    goto LABEL_16;
LABEL_8:
  this->death_heal = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v9, "death_heal", -1, 0);
  v10 = CDOTA_Buff::GetAbility(this);
  if ( v10 != 0 )
  {
LABEL_9:
    this->death_heal_creep = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v10, "death_heal_creep", -1, 0);
    return;
  }
LABEL_17:
  this->death_heal_creep = 0;
}


// CDOTA_Modifier_Undying_FleshGolem_PlagueAura::DeclareFunctions  (line 2095, @0x0000000002ccac30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Undying_FleshGolem_PlagueAura::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Undying_FleshGolem_PlagueAura::GetModifierIncomingDamage_Percentage(CModifierParams const&), CDOTA_Modifier_Undying_FleshGolem_PlagueAura::OnDeath(CModifierParams const&), CDOTA_Modifier_Undying_FleshGolem_PlagueAura::GetModifierUnitStatsNeedsRefresh(CModifierParams const&)
void __fastcall CDOTA_Modifier_Undying_FleshGolem_PlagueAura::DeclareFunctions(
        CDOTA_Modifier_Undying_FleshGolem_PlagueAura *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Undying_FleshGolem_PlagueAura::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[36].__delta = 0;
  this->m_Functions[36].__pfn = CDOTA_Modifier_Undying_FleshGolem_PlagueAura::GetModifierIncomingDamage_Percentage;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Undying_FleshGolem_PlagueAura::OnDeath;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[114].__pfn = CDOTA_Modifier_Undying_FleshGolem_PlagueAura::GetModifierUnitStatsNeedsRefresh;
  this->m_Functions[114].__delta = 0;
}


// CDOTA_Modifier_Undying_FleshGolem_PlagueAura::GetModifierMoveSpeedBonus_Percentage  (line 2105, @0x0000000002cd6f00, libserver.so)  // inlines: FastSqrt, Length2D, RemapValClamped, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator-
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_FleshGolem_PlagueAura::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Undying_FleshGolem_PlagueAura *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r13
  const Vector *v7; // rax
  float full_power_radius; // xmm3_4
  float radius; // xmm2_4
  __m128 v10; // xmm4
  __m128 y_low; // xmm1
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  __m128 v17; // xmm0
  __m128 v18; // xmm2
  float v19; // [rsp+Ch] [rbp-24h]
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster == 0 || Parent == 0 )
    return 1uLL;
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v7 = CBaseEntity::GetAbsOrigin(Parent);
  full_power_radius = this->full_power_radius;
  y_low = LODWORD(v7->y);
  radius = this->radius;
  v10.m128_f32[0] = -this->max_speed_slow;
  v19 = ((v7->x - AbsOrigin->x) * (v7->x - AbsOrigin->x))
      + ((y_low.m128_f32[0] - AbsOrigin->y) * (y_low.m128_f32[0] - AbsOrigin->y));
  y_low.m128_f32[0] = -this->min_speed_slow;
  v12 = fsqrt(v19);
  if ( full_power_radius == radius )
  {
    v17.m128_f32[0] = v12 - full_power_radius;
    v18 = _mm_cmpgt_ss(0LL, v17);
    y_low = _mm_or_ps(_mm_andnot_ps(v18, v10), _mm_and_ps(y_low, v18));
  }
  else
  {
    v13 = v12 - radius;
    v14 = full_power_radius - radius;
    v15 = 0.0;
    v16 = v13 / v14;
    if ( v16 >= 0.0 )
      v15 = fminf(1.0, v16);
    y_low.m128_f32[0] = y_low.m128_f32[0] + ((v10.m128_f32[0] - y_low.m128_f32[0]) * v15);
  }
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(y_low) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Undying_FleshGolem_PlagueAura::GetModifierIncomingDamage_Percentage  (line 2122, @0x0000000002cd7020, libserver.so)  // inlines: FastSqrt, Length2D, RemapValClamped, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator-
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_FleshGolem_PlagueAura::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Undying_FleshGolem_PlagueAura *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  int max_damage_amp; // r15d
  int min_damage_amp; // r14d
  const Vector *AbsOrigin; // r13
  const Vector *v9; // rax
  float full_power_radius; // xmm3_4
  __m128 v11; // xmm4
  float radius; // xmm2_4
  float v13; // xmm0_4
  __m128 y_low; // xmm1
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  __m128 v20; // xmm0
  __m128 v21; // xmm2
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != 0 && Parent != 0 )
  {
    max_damage_amp = this->max_damage_amp;
    min_damage_amp = this->min_damage_amp;
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    v9 = CBaseEntity::GetAbsOrigin(Parent);
    full_power_radius = this->full_power_radius;
    v11.m128_f32[0] = max_damage_amp;
    y_low = LODWORD(v9->y);
    radius = this->radius;
    v13 = ((v9->x - AbsOrigin->x) * (v9->x - AbsOrigin->x))
        + ((y_low.m128_f32[0] - AbsOrigin->y) * (y_low.m128_f32[0] - AbsOrigin->y));
    y_low.m128_f32[0] = min_damage_amp;
    v15 = fsqrt(v13);
    if ( full_power_radius == radius )
    {
      v20.m128_f32[0] = v15 - full_power_radius;
      v21 = _mm_cmpgt_ss(0LL, v20);
      y_low = _mm_or_ps(_mm_andnot_ps(v21, v11), _mm_and_ps(y_low, v21));
    }
    else
    {
      v16 = v15 - radius;
      v17 = full_power_radius - radius;
      v18 = 0.0;
      v19 = v16 / v17;
      if ( v19 >= 0.0 )
        v18 = fminf(1.0, v19);
      y_low.m128_f32[0] = y_low.m128_f32[0] + ((v11.m128_f32[0] - y_low.m128_f32[0]) * v18);
    }
    *&result.m_eType = (_mm_cvtsi128_si32(y_low) << 32) | 1;
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Undying_FleshGolem_PlagueAura::OnDeath  (line 2145, @0x0000000002cdbd60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsConsideredHero, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Heal, CDOTA_Buff::CreateBuffParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound
// strings: "particles/units/heroes/hero_undying/undying_fg_heal.vpcf", "attach_hitloc", "Hero_Undying.FleshGolem.Aura"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_FleshGolem_PlagueAura::OnDeath(
        CDOTA_Modifier_Undying_FleshGolem_PlagueAura *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *Parent; // r12
  uint32 m_iUnitType; // edx
  int death_heal; // eax
  int v12; // r14d
  CDOTABaseAbility *Ability; // rax
  int BuffParticleEffect; // r13d
  CDOTA_BaseNPC *v15; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v17; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v19; // r14
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) != 0
    && (v5 = &v4[params->hunit.m_Index & 0x1FF]) != 0
    && m_Index == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    Parent = CDOTA_Buff::GetParent(this);
    if ( Parent == m_pInstance && Caster != 0 && (*(Parent->_vptr_IHandleEntity + 436))(Parent) == 0 )
    {
      m_iUnitType = Parent->m_iUnitType;
      if ( (m_iUnitType & 0x10) == 0 && (m_iUnitType & 0x193) != 0 )
      {
        death_heal = this->death_heal;
        if ( (m_iUnitType & 3) == 0 )
          death_heal = this->death_heal_creep;
        v12 = ((death_heal * Caster->m_flBaseMaxHealth) / 100.0);
        Ability = CDOTA_Buff::GetAbility(this);
        CDOTA_BaseNPC::Heal(Caster, v12, Ability, 0, 1);
        BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                               this,
                               "particles/units/heroes/hero_undying/undying_fg_heal.vpcf",
                               2,
                               0,
                               0);
        v15 = CDOTA_Buff::GetCaster(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
        v17 = CDOTA_Buff::GetCaster(this);
        ParticleManager = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(
          ParticleManager,
          BuffParticleEffect,
          0,
          v17,
          5,
          "attach_hitloc",
          *AbsOrigin,
          1);
        v19 = CBaseEntity::GetAbsOrigin(Parent);
        v20 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v20, BuffParticleEffect, 1, Parent, 5, "attach_hitloc", *v19, 1);
        v21 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v21, BuffParticleEffect);
        v22 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::UnitEmitSound(v22, "Hero_Undying.FleshGolem.Aura", 0.0, 0, 0);
      }
    }
  }
  else
  {
    CDOTA_Buff::GetCaster(this);
  }
  return 1uLL;
}


// CDOTA_Modifier_Undying_FleshGolem_PlagueAura::GetModifierUnitStatsNeedsRefresh  (line 2179, @0x0000000002ccaca0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Undying_FleshGolem_PlagueAura::GetModifierUnitStatsNeedsRefresh(
        CDOTA_Modifier_Undying_FleshGolem_PlagueAura *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


