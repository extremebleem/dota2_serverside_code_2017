// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:37
class CDOTA_Unit_Hero_Juggernaut : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Juggernaut(CDOTA_Unit_Hero_Juggernaut &);
	CDOTA_Unit_Hero_Juggernaut(CDOTA_Unit_Hero_Juggernaut &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_Juggernaut();
	virtual bool RequireFacingForActions();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual ~CDOTA_Unit_Hero_Juggernaut();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[434] RequireFacingForActions
	// vtable[8] Spawn
	// vtable[92] Event_Killed
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:51
class C_CDOTA_Unit_Hero_Juggernaut_MapInstall {
	C_CDOTA_Unit_Hero_Juggernaut_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:92
class CDOTA_Ability_Juggernaut_BladeFury : public CDOTABaseAbility {
public:

private:

	int blade_fury_damage;  // +0x390
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
	CDOTA_Ability_Juggernaut_BladeFury(CDOTA_Ability_Juggernaut_BladeFury &);
	CDOTA_Ability_Juggernaut_BladeFury(CDOTA_Ability_Juggernaut_BladeFury &);
	CDOTA_Ability_Juggernaut_BladeFury();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual DOTAAbilitySpeakTrigger_t SpeakTrigger();
	virtual int GetConceptRecipientType();
	virtual const char * GetStolenActivityModifier();
	virtual float GetAvoidRadius();
	virtual bool IsAvoidMagical();
	virtual float GetAvoidStrength(CDOTA_Bot *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Juggernaut_BladeFury();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[300] SpeakTrigger
	// vtable[299] GetConceptRecipientType
	// vtable[310] GetStolenActivityModifier
	// vtable[327] GetAvoidRadius
	// vtable[328] IsAvoidMagical
	// vtable[330] GetAvoidStrength
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:120
class C_CDOTA_Ability_Juggernaut_BladeFury_MapInstall {
	C_CDOTA_Ability_Juggernaut_BladeFury_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:166
class CDOTA_Modifier_Juggernaut_BladeFury : public CDOTA_Buff {
public:

private:

	int blade_fury_radius;  // +0xba8
	int blade_fury_damage;  // +0xbac
	float blade_fury_damage_tick;  // +0xbb0
	float m_flTotalAppliedDamage;  // +0xbb4
	CDOTA_Modifier_Juggernaut_BladeFury();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierProcAttack_BonusDamage_Physical(const CModifierParams &);
	ModifierVariant_t OnTeleporting(const CModifierParams &);
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsPersistentAvoidance();
	virtual ~CDOTA_Modifier_Juggernaut_BladeFury();

	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[81] IsPersistentAvoidance
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:355
class CDOTA_Ability_Juggernaut_HealingWard : public CDOTABaseAbility {
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
	CDOTA_Ability_Juggernaut_HealingWard(CDOTA_Ability_Juggernaut_HealingWard &);
	CDOTA_Ability_Juggernaut_HealingWard(CDOTA_Ability_Juggernaut_HealingWard &);
	CDOTA_Ability_Juggernaut_HealingWard();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Juggernaut_HealingWard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:374
class C_CDOTA_Ability_Juggernaut_HealingWard_MapInstall {
	C_CDOTA_Ability_Juggernaut_HealingWard_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:425
class CDOTA_Modifier_Juggernaut_Healing_Ward_Aura : public CDOTA_Buff {
public:

private:

	CDOTA_Modifier_Juggernaut_Healing_Ward_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsAura();
	virtual float GetAuraDuration();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetUnitLifetimeFraction(const CModifierParams &);
	virtual ~CDOTA_Modifier_Juggernaut_Healing_Ward_Aura();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[35] IsAura
	// vtable[83] GetAuraDuration
	// vtable[11] IsHidden
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:514
class CDOTA_Modifier_Juggernaut_Healing_Ward_Heal : public CDOTA_Buff {
public:

private:

	int healing_ward_heal_amount;  // +0xba8
	CDOTA_Modifier_Juggernaut_Healing_Ward_Heal();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPercentageHealthRegen(const CModifierParams &);
	virtual ~CDOTA_Modifier_Juggernaut_Healing_Ward_Heal();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:569
class CDOTA_Ability_Juggernaut_BladeDance : public CDOTABaseAbility {
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
	CDOTA_Ability_Juggernaut_BladeDance(CDOTA_Ability_Juggernaut_BladeDance &);
	CDOTA_Ability_Juggernaut_BladeDance(CDOTA_Ability_Juggernaut_BladeDance &);
	CDOTA_Ability_Juggernaut_BladeDance();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Juggernaut_BladeDance();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:583
class CDOTA_Modifier_Juggernaut_BladeDance : public CDOTA_Buff {
public:

private:

	int blade_dance_crit_mult;  // +0xba8
	int blade_dance_crit_chance;  // +0xbac
	CDOTA_Modifier_Juggernaut_BladeDance();
	virtual const char * GetTexture();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_CriticalStrike(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Juggernaut_BladeDance();

	// vtable[32] GetTexture
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:682
class CDOTA_Ability_Juggernaut_Omnislash : public CDOTABaseAbility {
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
	CDOTA_Ability_Juggernaut_Omnislash(CDOTA_Ability_Juggernaut_Omnislash &);
	CDOTA_Ability_Juggernaut_Omnislash(CDOTA_Ability_Juggernaut_Omnislash &);
	CDOTA_Ability_Juggernaut_Omnislash();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual float GetCooldown(int);
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual int GetConceptRecipientType();
	virtual DOTAAbilitySpeakTrigger_t SpeakTrigger();
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Juggernaut_Omnislash();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[242] GetCooldown
	// vtable[159] ModifyOrAppendCriteria
	// vtable[299] GetConceptRecipientType
	// vtable[300] SpeakTrigger
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:700
class C_CDOTA_Ability_Juggernaut_Omnislash_MapInstall {
	C_CDOTA_Ability_Juggernaut_Omnislash_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:795
class CDOTA_Modifier_Juggernaut_Omnislash : public CDOTA_Buff {
public:

private:

	EHANDLE m_hTarget;  // +0xba8
	int m_nJumps;  // +0xbac
	int omni_slash_radius;  // +0xbb0
	int omni_slash_jumps;  // +0xbb4
	int omni_slash_jumps_scepter;  // +0xbb8
	bool m_bFirstHit;  // +0xbbc

	int m_iSlashJumps;  // +0xbc0
	int m_iTotalDamage;  // +0xbc4
	int m_iHeroDamage;  // +0xbc8
	CDOTA_Modifier_Juggernaut_Omnislash();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual ~CDOTA_Modifier_Juggernaut_Omnislash();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:1099
class CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability : public CDOTA_Buff {
public:

	CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability();

	// vtable[11] IsHidden
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:1129
class CDOTA_Ability_Holdout_BladeFury : public CDOTA_Ability_Juggernaut_BladeFury {
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
	CDOTA_Ability_Holdout_BladeFury(CDOTA_Ability_Holdout_BladeFury &);
	CDOTA_Ability_Holdout_BladeFury(CDOTA_Ability_Holdout_BladeFury &);
	CDOTA_Ability_Holdout_BladeFury();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Holdout_BladeFury();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:1161
class CDOTA_Modifier_Holdout_BladeFury : public CDOTA_Buff {
public:

private:

	int damage;  // +0xba8
	int blade_dance_crit_chance;  // +0xbac
	int blade_dance_crit_mult;  // +0xbb0
	float blade_fury_damage_tick;  // +0xbb4
	int blade_fury_radius;  // +0xbb8
	int bonus_evasion;  // +0xbbc
	bool m_bTryToCrit;  // +0xbc0

	CDOTA_Modifier_Holdout_BladeFury();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierProcAttack_BonusDamage_Physical(const CModifierParams &);
	ModifierVariant_t GetModifierEvasion_Constant(const CModifierParams &);
	ModifierVariant_t OnStateChanged(const CModifierParams &);
	ModifierVariant_t OnTeleporting(const CModifierParams &);
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsPersistentAvoidance();
	virtual ~CDOTA_Modifier_Holdout_BladeFury();

	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[81] IsPersistentAvoidance
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:1396
class CDOTA_Ability_Holdout_Omnislash : public CDOTABaseAbility {
public:

private:

	int image_travel_speed;  // +0x390
	int image_radius;  // +0x394
	int jugg_travel_speed;  // +0x398
	int juggcounter;  // +0x39c
	int range;  // +0x3a0
	bool m_bFirstProjectileFinished;  // +0x3a4

	float m_flRange;  // +0x3cc
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
	CDOTA_Ability_Holdout_Omnislash(CDOTA_Ability_Holdout_Omnislash &);
	CDOTA_Ability_Holdout_Omnislash(CDOTA_Ability_Holdout_Omnislash &);
	CDOTA_Ability_Holdout_Omnislash();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual ~CDOTA_Ability_Holdout_Omnislash();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// sizeof = 1000
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:1424
class C_CDOTA_Ability_Holdout_Omnislash_MapInstall {
	C_CDOTA_Ability_Holdout_Omnislash_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_juggernaut.cpp:1570
class CDOTA_Modifier_Holdout_Omnislash : public CDOTA_Buff {
public:

private:

	float animation_rate;  // +0xba8
	int bonus_damage;  // +0xbac
	CDOTA_Modifier_Holdout_Omnislash();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t GetOverrideAnimationRate(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Holdout_Omnislash();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[5] CheckState
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Juggernaut::~CDOTA_Unit_Hero_Juggernaut  (line 37, @0x0000000002a187f0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Juggernaut::~CDOTA_Unit_Hero_Juggernaut(CDOTA_Unit_Hero_Juggernaut *const this)
{
  this->_vptr_IHandleEntity = &off_433D810;
  this->_vptr_INextBotEventResponder = &off_433E7F0;
  this->_vptr_CObstructionObject = &off_433EB20;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Juggernaut::~CDOTA_Unit_Hero_Juggernaut  (line 37, @0x0000000002a18830, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Juggernaut
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Juggernaut::~CDOTA_Unit_Hero_Juggernaut(CDOTA_Unit_Hero_Juggernaut *const this)
{
  this->_vptr_IHandleEntity = &off_433D810;
  this->_vptr_INextBotEventResponder = &off_433E7F0;
  this->_vptr_CObstructionObject = &off_433EB20;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Juggernaut::Schema_DynamicBinding  (line 39, @0x0000000002a08f30, libserver.so)
// globals: CDOTA_Unit_Hero_Juggernaut::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Juggernaut::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Juggernaut *const this)
{
  return CDOTA_Unit_Hero_Juggernaut::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002a08f60, libserver.so)
// globals: CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002a08f70, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Juggernaut>
void __fastcall CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002a08f90, libserver.so)
void __fastcall CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002a08fb0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002a08fc0, libserver.so)
// globals: CDOTA_Unit_Hero_Juggernaut::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Juggernaut::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002a0f640, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002a13490, libserver.so)  // inlines: CDOTA_Unit_Hero_Juggernaut, Construct<CDOTA_Unit_Hero_Juggernaut>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_433D810;
    *(p + 236) = &off_433E7F0;
    *(p + 257) = &off_433EB20;
  }
  return p;
}


// CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002a20710, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002a208b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Juggernaut::GetEntityClassInternal  (line 39, @0x0000000002a3bf90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_juggernaut", "CDOTA_Unit_Hero_Juggernaut"
// globals: `guard variable for'CDOTA_Unit_Hero_Juggernaut::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JuggernautClass, CDOTA_Unit_Hero_Juggernaut::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JuggernautClass, __dso_handle, CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Juggernaut::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_JuggernautClassInfo, CDOTA_Unit_Hero_Juggernaut::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_JuggernautClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Juggernaut::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Juggernaut::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JuggernautClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Juggernaut::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JuggernautClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Juggernaut::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JuggernautClass);
    CDOTA_Unit_Hero_Juggernaut::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JuggernautClass._vptr_CEntityClass = off_433D790;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Juggernaut::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JuggernautClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Juggernaut::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JuggernautClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_JuggernautClass != 0 )
    return &CDOTA_Unit_Hero_Juggernaut::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JuggernautClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Juggernaut::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_JuggernautClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Juggernaut::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_JuggernautClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Juggernaut::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_JuggernautClassInfo,
      "CDOTA_Unit_Hero_Juggernaut",
      "npc_dota_hero_juggernaut",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Juggernaut::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_JuggernautClassInfo);
  }
  CDOTA_Unit_Hero_Juggernaut::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JuggernautClass.m_pClassInfo = &CDOTA_Unit_Hero_Juggernaut::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_JuggernautClassInfo;
  CDOTA_Unit_Hero_Juggernaut::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JuggernautClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Juggernaut::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_JuggernautClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_JuggernautClass = &CDOTA_Unit_Hero_Juggernaut::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JuggernautClass;
  CDOTA_Unit_Hero_Juggernaut::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_JuggernautClassInfo.m_pClass = &CDOTA_Unit_Hero_Juggernaut::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JuggernautClass;
  CDOTA_Unit_Hero_Juggernaut::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JuggernautClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_JuggernautClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Juggernaut::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JuggernautClass;
}


// CDOTA_Unit_Hero_Juggernaut::RequireFacingForActions  (line 45, @0x0000000002a14a00, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_juggernaut_omnislash"
bool __fastcall CDOTA_Unit_Hero_Juggernaut::RequireFacingForActions(CDOTA_Unit_Hero_Juggernaut *const this)
{
  return CDOTA_BaseNPC::FindModifierByName(this, "modifier_juggernaut_omnislash", 0) == 0;
}


// CDOTA_Unit_Hero_Juggernaut::YouForgotToImplementOrDeclareServerClass  (line 51, @0x00000000029b4b60, libserver.so)
int __fastcall CDOTA_Unit_Hero_Juggernaut::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Juggernaut *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Juggernaut::GetServerClass  (line 51, @0x00000000029c91f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Juggernaut::GetServerClass(CDOTA_Unit_Hero_Juggernaut *const this)
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


// CDOTA_Unit_Hero_Juggernaut::CDOTA_Unit_Hero_Juggernaut  (line 60, @0x00000000029d1160, libserver.so)
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Juggernaut::CDOTA_Unit_Hero_Juggernaut(CDOTA_Unit_Hero_Juggernaut *const this)
{
  CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(this);
  this->_vptr_IHandleEntity = &off_433D810;
  this->_vptr_INextBotEventResponder = &off_433E7F0;
  this->_vptr_CObstructionObject = &off_433EB20;
}


// CDOTA_Unit_Hero_Juggernaut::Spawn  (line 66, @0x00000000029ba490, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn, CBaseAnimating::SetBodygroup
void __fastcall CDOTA_Unit_Hero_Juggernaut::Spawn(
        CDOTA_Unit_Hero_Juggernaut *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  CBaseAnimating::SetBodygroup(this, 1, 1);
}


// CDOTA_Unit_Hero_Juggernaut::Event_Killed  (line 78, @0x00000000029ba4c0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Event_Killed, CBaseAnimating::SetBodygroup
void __fastcall CDOTA_Unit_Hero_Juggernaut::Event_Killed(
        CDOTA_Unit_Hero_Juggernaut *const this,
        const CTakeDamageInfo *const info)
{
  CDOTA_BaseNPC_Hero::Event_Killed(this, info);
  CBaseAnimating::SetBodygroup(this, 1, 0);
}


// CDOTA_Ability_Juggernaut_BladeFury::~CDOTA_Ability_Juggernaut_BladeFury  (line 92, @0x0000000002a16fc0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Juggernaut_BladeFury::~CDOTA_Ability_Juggernaut_BladeFury(
        CDOTA_Ability_Juggernaut_BladeFury *const this)
{
  this->_vptr_IHandleEntity = &off_433EBF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Juggernaut_BladeFury::~CDOTA_Ability_Juggernaut_BladeFury  (line 92, @0x0000000002a16fe0, libserver.so)  // inlines: ~CDOTA_Ability_Juggernaut_BladeFury
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Juggernaut_BladeFury::~CDOTA_Ability_Juggernaut_BladeFury(
        CDOTA_Ability_Juggernaut_BladeFury *const this)
{
  this->_vptr_IHandleEntity = &off_433EBF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Juggernaut_BladeFury::Schema_DynamicBinding  (line 94, @0x0000000002a08fd0, libserver.so)
// globals: CDOTA_Ability_Juggernaut_BladeFury::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Juggernaut_BladeFury::Schema_DynamicBinding(
        const CDOTA_Ability_Juggernaut_BladeFury *const this)
{
  return CDOTA_Ability_Juggernaut_BladeFury::s_pSchemaBinding;
}


// CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 94, @0x0000000002a08fe0, libserver.so)
// globals: CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::DestructInstance  (line 94, @0x0000000002a08ff0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Juggernaut_BladeFury>
void __fastcall CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::FreeInstance  (line 94, @0x0000000002a09010, libserver.so)
void __fastcall CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::CanAllocate  (line 94, @0x0000000002a09030, libserver.so)
bool __fastcall CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 94, @0x0000000002a09040, libserver.so)
// globals: CDOTA_Ability_Juggernaut_BladeFury::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Juggernaut_BladeFury::s_pSchemaBinding;
}


// CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::AllocateInstance  (line 94, @0x0000000002a0f680, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::ConstructInstance  (line 94, @0x0000000002a13fc0, libserver.so)  // inlines: CDOTA_Ability_Juggernaut_BladeFury, Construct<CDOTA_Ability_Juggernaut_BladeFury>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_433EBF0;
  }
  return p;
}


// CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 94, @0x0000000002a1f360, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 94, @0x0000000002a1f380, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInternal  (line 94, @0x0000000002a367a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "juggernaut_blade_fury", "CDOTA_Ability_Juggernaut_BladeFury"
// globals: `guard variable for'CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClass, CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClass, __dso_handle, CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClassInfo, CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClassInfo
CEntityClass *__cdecl CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClass);
    CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClass._vptr_CEntityClass = off_433EB70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClass);
    __cxa_atexit(
      CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Juggernaut_BladeFuryClass != 0 )
    return &CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClass;
  if ( `guard variable for'CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClassInfo,
      "CDOTA_Ability_Juggernaut_BladeFury",
      "juggernaut_blade_fury",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClassInfo);
  }
  CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClass.m_pClassInfo = &CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClassInfo;
  CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClass.m_pBaseClassInfo = CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Juggernaut_BladeFuryClass = &CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClass;
  CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClassInfo.m_pClass = &CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClass;
  CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Juggernaut_BladeFuryClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Juggernaut_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeFuryClass;
}


// CDOTA_Ability_Juggernaut_BladeFury::SpeakTrigger  (line 99, @0x0000000002a09050, libserver.so)
DOTAAbilitySpeakTrigger_t __fastcall CDOTA_Ability_Juggernaut_BladeFury::SpeakTrigger(
        CDOTA_Ability_Juggernaut_BladeFury *const this)
{
  return DOTAAbilitySpeakTrigger_t::DOTA_ABILITY_SPEAK_CAST;
}


// CDOTA_Ability_Juggernaut_BladeFury::GetConceptRecipientType  (line 100, @0x0000000002a09060, libserver.so)
int __fastcall CDOTA_Ability_Juggernaut_BladeFury::GetConceptRecipientType(
        CDOTA_Ability_Juggernaut_BladeFury *const this)
{
  return 4;
}


// CDOTA_Ability_Juggernaut_BladeFury::GetStolenActivityModifier  (line 102, @0x0000000002a09070, libserver.so)
const char *__fastcall CDOTA_Ability_Juggernaut_BladeFury::GetStolenActivityModifier(
        CDOTA_Ability_Juggernaut_BladeFury *const this)
{
  return "spin";
}


// CDOTA_Ability_Juggernaut_BladeFury::GetAvoidRadius  (line 109, @0x0000000002a33a80, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "blade_fury_radius"
float __fastcall CDOTA_Ability_Juggernaut_BladeFury::GetAvoidRadius(CDOTA_Ability_Juggernaut_BladeFury *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "blade_fury_radius", -1, 0) + 100.0;
}


// CDOTA_Ability_Juggernaut_BladeFury::IsAvoidMagical  (line 110, @0x0000000002a09080, libserver.so)
bool __fastcall CDOTA_Ability_Juggernaut_BladeFury::IsAvoidMagical(CDOTA_Ability_Juggernaut_BladeFury *const this)
{
  return 1;
}


// CDOTA_Ability_Juggernaut_BladeFury::GetAvoidStrength  (line 111, @0x0000000002a213b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Ability_Juggernaut_BladeFury::GetAvoidStrength(
        CDOTA_Ability_Juggernaut_BladeFury *const this,
        CDOTA_Bot *pBot)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rdi
  float v6; // xmm1_4
  float result; // xmm0_4

  m_Index = pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v6 = (CBaseEntity::GetHealth(m_pInstance) - 200.0) / 1300.0;
  if ( v6 < 0.0 )
    return 0.80000001;
  result = 0.19999999;
  if ( v6 <= 1.0 )
    return (v6 * -0.60000002) + 0.80000001;
  return result;
}


// CDOTA_Ability_Juggernaut_BladeFury::YouForgotToImplementOrDeclareServerClass  (line 120, @0x00000000029b4b70, libserver.so)
int __fastcall CDOTA_Ability_Juggernaut_BladeFury::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Juggernaut_BladeFury *const this)
{
  return 0;
}


// CDOTA_Ability_Juggernaut_BladeFury::GetServerClass  (line 120, @0x00000000029c9d70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Juggernaut_BladeFury::GetServerClass(
        CDOTA_Ability_Juggernaut_BladeFury *const this)
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


// CDOTA_Ability_Juggernaut_BladeFury::OnSpellStart  (line 129, @0x00000000029ba4f0, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, KeyValues::SetInt, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::RemoveModifierByName, Purge, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_juggernaught_blade_fury", "modifier_juggernaut_blade_fury", "modifier_heavens_halberd_debuff", "modifier_oracle_fates_edict", "modifier_silencer_curse_of_the_silent", "modifier_slark_pounce_leash" (7 total)
void __fastcall CDOTA_Ability_Juggernaut_BladeFury::OnSpellStart(CDOTA_Ability_Juggernaut_BladeFury *const this)
{
  float v2; // xmm1_4
  int v3; // eax
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_juggernaught_blade_fury");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "duration", v2);
  v3 = (*(this->_vptr_IHandleEntity + 247))(this);
  KeyValues::SetInt(&kv, "damage", v3);
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v5, Caster, this, "modifier_juggernaut_blade_fury", &kv, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v6, "modifier_heavens_halberd_debuff");
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v7, "modifier_oracle_fates_edict");
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v8, "modifier_silencer_curse_of_the_silent");
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v9, "modifier_slark_pounce_leash");
  v10 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v10, "modifier_invoker_deafening_blast_disarm");
  v11 = CDOTABaseAbility::GetCaster(this);
  Purge(v11, this, 4);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Juggernaut_BladeFury::GetAbilityDamageToTargetOverInterval  (line 150, @0x00000000029e3700, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, Min<float>
// calls: CDOTABaseAbility::GetDuration, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "blade_fury_damage"
__int64 __fastcall CDOTA_Ability_Juggernaut_BladeFury::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Juggernaut_BladeFury *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // eax
  float fIntervala; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetDuration(this));
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "blade_fury_damage", -1, 0);
    this->blade_fury_damage = LevelSpecialValue;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * (LevelSpecialValue * fIntervala));
  }
  return result;
}


// CDOTA_Modifier_Juggernaut_BladeFury::~CDOTA_Modifier_Juggernaut_BladeFury  (line 166, @0x0000000002a12260, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Juggernaut_BladeFury::~CDOTA_Modifier_Juggernaut_BladeFury(
        CDOTA_Modifier_Juggernaut_BladeFury *const this)
{
  this->_vptr_CDOTA_Buff = &off_433F6B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Juggernaut_BladeFury::~CDOTA_Modifier_Juggernaut_BladeFury  (line 166, @0x0000000002a12280, libserver.so)  // inlines: ~CDOTA_Modifier_Juggernaut_BladeFury
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Juggernaut_BladeFury::~CDOTA_Modifier_Juggernaut_BladeFury(
        CDOTA_Modifier_Juggernaut_BladeFury *const this)
{
  this->_vptr_CDOTA_Buff = &off_433F6B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Juggernaut_BladeFury::IsPurgable  (line 176, @0x0000000002a09090, libserver.so)
bool __fastcall CDOTA_Modifier_Juggernaut_BladeFury::IsPurgable(CDOTA_Modifier_Juggernaut_BladeFury *const this)
{
  return 0;
}


// CDOTA_Modifier_Juggernaut_BladeFury::GetNumAvoidLocations  (line 189, @0x0000000002a090a0, libserver.so)
int __fastcall CDOTA_Modifier_Juggernaut_BladeFury::GetNumAvoidLocations(
        CDOTA_Modifier_Juggernaut_BladeFury *const this)
{
  return 1;
}


// CDOTA_Modifier_Juggernaut_BladeFury::GetAvoidLocation  (line 190, @0x0000000002a14a70, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_Juggernaut_BladeFury::GetAvoidLocation(
        CDOTA_Modifier_Juggernaut_BladeFury *const this,
        int iAvoid)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CDOTA_Modifier_Juggernaut_BladeFury::AvoidStrength  (line 191, @0x0000000002a21140, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Modifier_Juggernaut_BladeFury::AvoidStrength(
        CDOTA_Modifier_Juggernaut_BladeFury *const this,
        CDOTA_Bot *pBot)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rdi
  float v6; // xmm1_4
  float result; // xmm0_4

  m_Index = pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v6 = (CBaseEntity::GetHealth(m_pInstance) - 200.0) / 1300.0;
  if ( v6 < 0.0 )
    return 1.0;
  result = 0.69999999;
  if ( v6 <= 1.0 )
    return (v6 * -0.30000001) + 1.0;
  return result;
}


// CDOTA_Modifier_Juggernaut_BladeFury::GetAvoidRadius  (line 192, @0x0000000002a090b0, libserver.so)
float __fastcall CDOTA_Modifier_Juggernaut_BladeFury::GetAvoidRadius(
        CDOTA_Modifier_Juggernaut_BladeFury *const this,
        int iAvoid)
{
  return this->blade_fury_radius + 100.0;
}


// CDOTA_Modifier_Juggernaut_BladeFury::IsAvoidMagical  (line 193, @0x0000000002a090d0, libserver.so)
bool __fastcall CDOTA_Modifier_Juggernaut_BladeFury::IsAvoidMagical(CDOTA_Modifier_Juggernaut_BladeFury *const this)
{
  return 1;
}


// CDOTA_Modifier_Juggernaut_BladeFury::IsPersistentAvoidance  (line 194, @0x0000000002a090e0, libserver.so)
bool __fastcall CDOTA_Modifier_Juggernaut_BladeFury::IsPersistentAvoidance(
        CDOTA_Modifier_Juggernaut_BladeFury *const this)
{
  return 0;
}


// CDOTA_Modifier_Juggernaut_BladeFury::OnCreated  (line 211, @0x00000000029f9260, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_BaseNPC::StartGesture
// strings: "blade_fury_radius", "blade_fury_damage", "blade_fury_damage_tick"
void __fastcall CDOTA_Modifier_Juggernaut_BladeFury::OnCreated(
        CDOTA_Modifier_Juggernaut_BladeFury *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->blade_fury_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "blade_fury_radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->blade_fury_damage = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    LevelSpecialValue = 0.0;
    this->blade_fury_damage_tick = 0.0;
    goto LABEL_5;
  }
  this->blade_fury_radius = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->blade_fury_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "blade_fury_damage", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "blade_fury_damage_tick", -1, 0);
  this->blade_fury_damage_tick = LevelSpecialValue;
LABEL_5:
  this->m_flTotalAppliedDamage = 0.0;
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v6);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::StartGesture(Parent, 1516, 0.2, 0.2, 0, 0, 1.0);
}


// CDOTA_Modifier_Juggernaut_BladeFury::OnDestroy  (line 234, @0x00000000029baa50, libserver.so)  // inlines: ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetParent, EconEntity_OnOwnerKillEaterEvent, CDOTA_BaseNPC::RemoveGesture
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Juggernaut_BladeFury::OnDestroy(CDOTA_Modifier_Juggernaut_BladeFury *const this)
{
  int m_flTotalAppliedDamage; // r12d
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC_Hero *v4; // rdi
  CDOTA_BaseNPC *v5; // rax

  m_flTotalAppliedDamage = this->m_flTotalAppliedDamage;
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent != 0 && (Parent->m_iUnitType & 1) != 0 )
    v4 = Parent;
  else
    v4 = 0;
  EconEntity_OnOwnerKillEaterEvent(
    v4,
    0,
    kill_eater_event_t::kKillEaterEvent_Blade_Fury_Damage,
    m_flTotalAppliedDamage,
    INVALID_ITEM_DEF_INDEX);
  v5 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(v5, 1516);
}


// CDOTA_Modifier_Juggernaut_BladeFury::OnIntervalThink  (line 252, @0x00000000029fba80, libserver.so)  // inlines: AssignTo, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, DotaRetrieveAbilityValue<int>, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, ApplyDamage, CDOTA_BaseNPC::IsInvisibleTo, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt (17 total)
// strings: "blade_fury_damage", "special_bonus_unique_juggernaut", "particles/units/heroes/hero_juggernaut/juggernaut_blade_fury_tgt.vpcf", "attach_hitloc", "Hero_Juggernaut.BladeFury.Impact"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Juggernaut_BladeFury::OnIntervalThink(CDOTA_Modifier_Juggernaut_BladeFury *const this)
{
  CDOTA_BaseNPC *Parent; // r12
  __m128i v3; // xmm4
  float v4; // r13d
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v8; // rax
  __int64 v9; // r13
  int v10; // r14d
  int LevelSpecialValue; // eax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v14; // xmm2
  float v15; // r15d
  CDOTA_BaseNPC *v16; // rax
  double v17; // xmm0_8
  CDOTA_BaseNPC *v18; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v20; // r15
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CHandle<CBaseEntity> *v23; // rdx
  uint32 m_Index; // eax
  __int16 v25; // cx
  CEntityIdentity *v26; // rdx
  CEntityIdentity *v27; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *pAbility; // [rsp+20h] [rbp-160h]
  float nFxIndexB; // [rsp+2Ch] [rbp-154h]
  int nFxIndexBa; // [rsp+2Ch] [rbp-154h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> entities; // [rsp+30h] [rbp-150h] BYREF
  unsigned __int64 v34; // [rsp+148h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  pAbility = CDOTA_Buff::GetAbility(this);
  if ( pAbility != 0 && Parent != 0 )
  {
    *v3.m128i_i32 = this->blade_fury_radius;
    entities.m_Size = 0;
    entities.m_Memory.m_nAllocationCount = 64;
    entities.m_Memory.m_nGrowSize = 0x80000000;
    v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    entities.m_Memory.m_pMemory = &entities.m_FixedMemory;
    v5 = CDOTA_Buff::GetParent(this);
    v6 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
    v8 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, v5, v4, &entities, 2, 19, 0, 0, 0);
    if ( entities.m_Size > 0 )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        v23 = &entities.m_Memory.m_pMemory[v9];
        m_Index = entities.m_Memory.m_pMemory[v9].m_Index;
        if ( m_Index + 2 <= 1
          || (v25 = v23->m_Index,
              (v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v23->m_Index) >> 9) & 0x3F]) == 0)
          || (v27 = &v26[v25 & 0x1FF]) == 0
          || m_Index != v27->m_EHandle.m_Index
          || (m_pInstance = v27->m_pInstance, v27->m_pInstance == 0)
          || !m_pInstance->m_bIsDOTANPC )
        {
          m_pInstance = 0;
        }
        Ability = CDOTA_Buff::GetAbility(this);
        if ( Ability != 0 )
        {
          LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "blade_fury_damage", -1, 0);
          this->blade_fury_damage = LevelSpecialValue;
          nFxIndexB = LevelSpecialValue;
        }
        else
        {
          this->blade_fury_damage = 0;
          nFxIndexB = 0.0;
        }
        Caster = CDOTA_Buff::GetCaster(this);
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_juggernaut", 0);
        if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
          nFxIndexB = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + nFxIndexB;
        v14 = LODWORD(nFxIndexB);
        *v14.m128i_i32 = nFxIndexB * this->blade_fury_damage_tick;
        v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
        v16 = CDOTA_Buff::GetCaster(this);
        v17 = ApplyDamage(v16, m_pInstance, pAbility, v15, 2, 0);
        this->m_flTotalAppliedDamage = *&v17 + this->m_flTotalAppliedDamage;
        v18 = CDOTA_Buff::GetCaster(this);
        if ( !CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, v18) )
        {
          ParticleManager = GetParticleManager();
          nFxIndexBa = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_juggernaut/juggernaut_blade_fury_tgt.vpcf",
                         2,
                         0,
                         0,
                         0);
          v20 = CBaseEntity::GetAbsOrigin(m_pInstance);
          v21 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v21, nFxIndexBa, 0, m_pInstance, 5, "attach_hitloc", *v20, 1);
          v22 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v22, nFxIndexBa);
        }
        CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Juggernaut.BladeFury.Impact", 0.0, 0, 0);
        ++v10;
        ++v9;
      }
      while ( entities.m_Size > v10 );
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Modifier_Juggernaut_BladeFury::CheckState  (line 293, @0x00000000029b4b80, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Juggernaut_BladeFury::CheckState(
        CDOTA_Modifier_Juggernaut_BladeFury *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x208uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFDF7LL;
}


// CDOTA_Modifier_Juggernaut_BladeFury::DeclareFunctions  (line 303, @0x00000000029b4ba0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Juggernaut_BladeFury::GetModifierProcAttack_BonusDamage_Physical(CModifierParams const&), CDOTA_Modifier_Juggernaut_BladeFury::OnTeleporting(CModifierParams const&)
void __fastcall CDOTA_Modifier_Juggernaut_BladeFury::DeclareFunctions(CDOTA_Modifier_Juggernaut_BladeFury *const this)
{
  this->m_Functions[4].__pfn = CDOTA_Modifier_Juggernaut_BladeFury::GetModifierProcAttack_BonusDamage_Physical;
  this->m_Functions[4].__delta = 0;
  this->m_Functions[141].__delta = 0;
  this->m_Functions[141].__pfn = CDOTA_Modifier_Juggernaut_BladeFury::OnTeleporting;
}


// CDOTA_Modifier_Juggernaut_BladeFury::OnTeleporting  (line 311, @0x00000000029db4e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, Purge, SpeakConcept, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::SpeakConcept, CResponseCriteriaSet::~CResponseCriteriaSet, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Juggernaut_BladeFury::OnTeleporting(
        CDOTA_Modifier_Juggernaut_BladeFury *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v11; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-80h] BYREF
  CResponseCriteriaSet criteria; // [rsp+40h] [rbp-60h] BYREF

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hunit.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          entities.m_Size = 0;
          entities.m_Memory.m_pMemory = 0;
          entities.m_Memory.m_nAllocationCount = 0;
          entities.m_Memory.m_nGrowSize = 0;
          Caster = CDOTA_Buff::GetCaster(this);
          v9 = CDOTA_Buff::GetCaster(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
          v11 = CDOTA_Buff::GetCaster(this);
          FindUnitsInRadius(v11->m_iTeamNum.m_Value, AbsOrigin, Caster, 1200.0, &entities, 2, 1, 128, 0, 0);
          if ( entities.m_Size > 0 )
          {
            CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
            CResponseCriteriaSet::AppendCriteria(&criteria, "teleporting", "1", 1.0);
            m_pSpeech = CDOTA_Buff::GetParent(this)->m_Speech.m_pSpeech;
            if ( m_pSpeech != 0 )
              CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
            CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
          }
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
          if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
            if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Juggernaut_BladeFury::GetModifierProcAttack_BonusDamage_Physical  (line 334, @0x00000000029c23a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Juggernaut_BladeFury::GetModifierProcAttack_BonusDamage_Physical(
        CDOTA_Modifier_Juggernaut_BladeFury *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax
  int m_Id; // eax
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->htarget.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 1uLL;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 )
    return 1uLL;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1uLL;
  m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
  if ( (m_Id & 1) == 0 && (m_Id & 0x180) == 0 )
    return 1uLL;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(_mm_xor_ps(LODWORD(params->fDamage), 0x80000000)) << 32) | 1;
  return result;
}


// CDOTA_Ability_Juggernaut_HealingWard::~CDOTA_Ability_Juggernaut_HealingWard  (line 355, @0x0000000002a17060, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Juggernaut_HealingWard::~CDOTA_Ability_Juggernaut_HealingWard(
        CDOTA_Ability_Juggernaut_HealingWard *const this)
{
  this->_vptr_IHandleEntity = &off_433FA10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Juggernaut_HealingWard::~CDOTA_Ability_Juggernaut_HealingWard  (line 355, @0x0000000002a17080, libserver.so)  // inlines: ~CDOTA_Ability_Juggernaut_HealingWard
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Juggernaut_HealingWard::~CDOTA_Ability_Juggernaut_HealingWard(
        CDOTA_Ability_Juggernaut_HealingWard *const this)
{
  this->_vptr_IHandleEntity = &off_433FA10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Juggernaut_HealingWard::Schema_DynamicBinding  (line 357, @0x0000000002a090f0, libserver.so)
// globals: CDOTA_Ability_Juggernaut_HealingWard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Juggernaut_HealingWard::Schema_DynamicBinding(
        const CDOTA_Ability_Juggernaut_HealingWard *const this)
{
  return CDOTA_Ability_Juggernaut_HealingWard::s_pSchemaBinding;
}


// CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 357, @0x0000000002a09100, libserver.so)
// globals: CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::DestructInstance  (line 357, @0x0000000002a09110, libserver.so)  // inlines: Destruct<CDOTA_Ability_Juggernaut_HealingWard>
void __fastcall CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::FreeInstance  (line 357, @0x0000000002a09130, libserver.so)
void __fastcall CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::CanAllocate  (line 357, @0x0000000002a09150, libserver.so)
bool __fastcall CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 357, @0x0000000002a09160, libserver.so)
// globals: CDOTA_Ability_Juggernaut_HealingWard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Juggernaut_HealingWard::s_pSchemaBinding;
}


// CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::AllocateInstance  (line 357, @0x0000000002a0f6c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::ConstructInstance  (line 357, @0x0000000002a13ff0, libserver.so)  // inlines: CDOTA_Ability_Juggernaut_HealingWard, Construct<CDOTA_Ability_Juggernaut_HealingWard>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_433FA10;
  }
  return p;
}


// CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 357, @0x0000000002a1f3b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 357, @0x0000000002a1f3d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInternal  (line 357, @0x0000000002a368f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "juggernaut_healing_ward", "CDOTA_Ability_Juggernaut_HealingWard"
// globals: `guard variable for'CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClass, CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClass, __dso_handle, CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClassInfo, CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClassInfo
CEntityClass *__cdecl CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClass);
    CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClass._vptr_CEntityClass = off_433F990;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClass);
    __cxa_atexit(
      CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Juggernaut_HealingWardClass != 0 )
    return &CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClass;
  if ( `guard variable for'CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClassInfo,
      "CDOTA_Ability_Juggernaut_HealingWard",
      "juggernaut_healing_ward",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClassInfo);
  }
  CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClass.m_pClassInfo = &CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClassInfo;
  CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClass.m_pBaseClassInfo = CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Juggernaut_HealingWardClass = &CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClass;
  CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClassInfo.m_pClass = &CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClass;
  CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Juggernaut_HealingWardClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Juggernaut_HealingWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_HealingWardClass;
}


// CDOTA_Ability_Juggernaut_HealingWard::YouForgotToImplementOrDeclareServerClass  (line 374, @0x00000000029b4be0, libserver.so)
int __fastcall CDOTA_Ability_Juggernaut_HealingWard::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Juggernaut_HealingWard *const this)
{
  return 0;
}


// CDOTA_Ability_Juggernaut_HealingWard::GetServerClass  (line 374, @0x00000000029c9970, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Juggernaut_HealingWard::GetServerClass(
        CDOTA_Ability_Juggernaut_HealingWard *const this)
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


// CDOTA_Ability_Juggernaut_HealingWard::OnSpellStart  (line 383, @0x0000000002a02d40, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, GetTeamNumber, GrowMemory, Purge, RemoveAll, Reset, SetBool, entindex, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, DOTA_CreateUnitByName, CDOTA_BaseNPC::SetControllableByPlayer, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, KeyValues::SetInt, KeyValues::SetString, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::AddNewModifier, CEntityInstance::GetEntityIndex (21 total)
// strings: "npc_dota_juggernaut_healing_ward", "modifier_juggernaut_healing_ward_aura", "modifier_juggernaut_healing_ward_heal", "aura_apply_modifier", "healing_ward_aura_radius", "aura_search_team" (10 total)
void __fastcall CDOTA_Ability_Juggernaut_HealingWard::OnSpellStart(CDOTA_Ability_Juggernaut_HealingWard *const this)
{
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v4; // r15
  CDOTA_BaseNPC *UnitByName; // r13
  CDOTA_BaseNPC *v6; // rax
  int v7; // eax
  float v8; // xmm1_4
  int LevelSpecialValue; // eax
  CDOTA_BaseNPC *v10; // rax
  vec_t y; // xmm0_4
  CEntityIndex v12; // eax
  __int64 m_Size; // r15
  int v14; // eax
  CEntityIndex *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  int32 m_Data; // [rsp+Ch] [rbp-94h]
  CUnitOrders newOrders; // [rsp+10h] [rbp-90h] BYREF
  KeyValues kvaura; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  *&newOrders.m_nIssuerPlayerIndex = CDOTABaseAbility::GetCursorPosition(this);
  UnitByName = DOTA_CreateUnitByName("npc_dota_juggernaut_healing_ward", &newOrders, 1, v4, Caster, m_Value);
  if ( UnitByName != 0 )
  {
    v6 = CDOTABaseAbility::GetCaster(this);
    v7 = (*(v6->_vptr_IHandleEntity + 414))(v6);
    CDOTA_BaseNPC::SetControllableByPlayer(UnitByName, v7, 0);
    KeyValues::KeyValues(&kvaura, "modifier_juggernaut_healing_ward_aura");
    CDOTABaseAbility::GetDuration(this);
    KeyValues::SetFloat(&kvaura, "duration", v8);
    KeyValues::SetInt(&kvaura, "aura", 1);
    KeyValues::SetString(&kvaura, "aura_apply_modifier", "modifier_juggernaut_healing_ward_heal");
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "healing_ward_aura_radius", -1, 0);
    KeyValues::SetInt(&kvaura, "aura_radius", LevelSpecialValue);
    KeyValues::SetInt(&kvaura, "aura_search_team", 1);
    KeyValues::SetInt(&kvaura, "aura_search_type", 19);
    KeyValues::SetInt(&kvaura, "aura_search_flags", 16);
    KeyValues::SetInt(&kvaura, "aura_is_heal", 1);
    v10 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(UnitByName, v10, this, "modifier_juggernaut_healing_ward_aura", &kvaura, 0);
    newOrders.m_bQueue = 0;
    newOrders.m_nUnits.m_Size = 0;
    memset(&newOrders.m_nUnits.m_Memory, 0, 28);
    newOrders.m_nOrderSequenceNumber = 0;
    newOrders.m_vPosition.x = vec3_origin.x;
    y = vec3_origin.y;
    newOrders.m_nIssuerPlayerIndex = -1;
    newOrders.m_vPosition.y = y;
    newOrders.m_vPosition.z = vec3_origin.z;
    v12.m_Data = CEntityInstance::GetEntityIndex(UnitByName).m_Data;
    m_Size = newOrders.m_nUnits.m_Size;
    m_Data = v12.m_Data;
    v14 = newOrders.m_nUnits.m_Size;
    if ( newOrders.m_nUnits.m_Size == newOrders.m_nUnits.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
      v14 = newOrders.m_nUnits.m_Size;
    }
    newOrders.m_nUnits.m_Size = v14 + 1;
    v15 = &newOrders.m_nUnits.m_Memory.m_pMemory[m_Size];
    if ( v15 != 0 )
      v15->m_Data = m_Data;
    newOrders.m_nOrderType = 2;
    v16 = CDOTABaseAbility::GetCaster(this);
    newOrders.m_nTargetIndex = CEntityInstance::GetEntityIndex(v16);
    DOTA_ExecuteOrders(&newOrders, 0, 0, 0);
    CDOTA_BaseNPC::SetPseudoQueuedOrder(UnitByName, &newOrders);
    DOTA_EmitSound(10, "Hero_Juggernaut.HealingWard.Cast", UnitByName);
    newOrders.m_nUnits.m_Size = 0;
    if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
      if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
    }
    KeyValues::~KeyValues(&kvaura);
  }
}


// CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::~CDOTA_Modifier_Juggernaut_Healing_Ward_Aura  (line 425, @0x0000000002a12210, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::~CDOTA_Modifier_Juggernaut_Healing_Ward_Aura(
        CDOTA_Modifier_Juggernaut_Healing_Ward_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_43404D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::~CDOTA_Modifier_Juggernaut_Healing_Ward_Aura  (line 425, @0x0000000002a12230, libserver.so)  // inlines: ~CDOTA_Modifier_Juggernaut_Healing_Ward_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::~CDOTA_Modifier_Juggernaut_Healing_Ward_Aura(
        CDOTA_Modifier_Juggernaut_Healing_Ward_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_43404D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::IsAura  (line 437, @0x0000000002a09170, libserver.so)
bool __fastcall CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::IsAura(
        CDOTA_Modifier_Juggernaut_Healing_Ward_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::GetAuraDuration  (line 439, @0x0000000002a09180, libserver.so)
float __fastcall CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::GetAuraDuration(
        CDOTA_Modifier_Juggernaut_Healing_Ward_Aura *const this)
{
  return 2.5;
}


// CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::IsHidden  (line 441, @0x0000000002a09190, libserver.so)
bool __fastcall CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::IsHidden(
        CDOTA_Modifier_Juggernaut_Healing_Ward_Aura *const this)
{
  return 0;
}


// CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::OnCreated  (line 457, @0x00000000029b4bf0, libserver.so)
void __fastcall CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::OnCreated(
        CDOTA_Modifier_Juggernaut_Healing_Ward_Aura *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::CheckState  (line 474, @0x00000000029b4c00, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::CheckState(
        CDOTA_Modifier_Juggernaut_Healing_Ward_Aura *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2000200uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFDFFFDFFLL;
}


// CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::OnDestroy  (line 484, @0x00000000029baac0, libserver.so)
// calls: CDOTA_Buff::GetParent, DOTA_EmitSound, CDOTA_BaseNPC::MarkExpired, CDOTA_BaseNPC::ForceKill
// strings: "Hero_Juggernaut.HealingWard.Stop"
void __fastcall CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::OnDestroy(
        CDOTA_Modifier_Juggernaut_Healing_Ward_Aura *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax

  Parent = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_Juggernaut.HealingWard.Stop", Parent);
  v3 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::MarkExpired(v3);
  v4 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ForceKill(v4, 0);
}


// CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::DeclareFunctions  (line 497, @0x00000000029b4c20, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::GetUnitLifetimeFraction(CModifierParams const&)
void __fastcall CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::DeclareFunctions(
        CDOTA_Modifier_Juggernaut_Healing_Ward_Aura *const this)
{
  this->m_Functions[157].__pfn = CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::GetUnitLifetimeFraction;
  this->m_Functions[157].__delta = 0;
}


// CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::GetUnitLifetimeFraction  (line 504, @0x00000000029b4c40, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::GetUnitLifetimeFraction(
        CDOTA_Modifier_Juggernaut_Healing_Ward_Aura *const this,
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


// CDOTA_Modifier_Juggernaut_Healing_Ward_Heal::~CDOTA_Modifier_Juggernaut_Healing_Ward_Heal  (line 514, @0x0000000002a121c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Juggernaut_Healing_Ward_Heal::~CDOTA_Modifier_Juggernaut_Healing_Ward_Heal(
        CDOTA_Modifier_Juggernaut_Healing_Ward_Heal *const this)
{
  this->_vptr_CDOTA_Buff = &off_43407F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Juggernaut_Healing_Ward_Heal::~CDOTA_Modifier_Juggernaut_Healing_Ward_Heal  (line 514, @0x0000000002a121e0, libserver.so)  // inlines: ~CDOTA_Modifier_Juggernaut_Healing_Ward_Heal
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Juggernaut_Healing_Ward_Heal::~CDOTA_Modifier_Juggernaut_Healing_Ward_Heal(
        CDOTA_Modifier_Juggernaut_Healing_Ward_Heal *const this)
{
  this->_vptr_CDOTA_Buff = &off_43407F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Juggernaut_Healing_Ward_Heal::DeclareFunctions  (line 533, @0x00000000029b4cb0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Juggernaut_Healing_Ward_Heal::GetModifierPercentageHealthRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Juggernaut_Healing_Ward_Heal::DeclareFunctions(
        CDOTA_Modifier_Juggernaut_Healing_Ward_Heal *const this)
{
  this->m_Functions[57].__pfn = CDOTA_Modifier_Juggernaut_Healing_Ward_Heal::GetModifierPercentageHealthRegen;
  this->m_Functions[57].__delta = 0;
}


// CDOTA_Modifier_Juggernaut_Healing_Ward_Heal::OnCreated  (line 540, @0x00000000029f6ec0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "healing_ward_heal_amount"
void __fastcall CDOTA_Modifier_Juggernaut_Healing_Ward_Heal::OnCreated(
        CDOTA_Modifier_Juggernaut_Healing_Ward_Heal *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->healing_ward_heal_amount = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                       Ability,
                                       "healing_ward_heal_amount",
                                       -1,
                                       0);
  else
    this->healing_ward_heal_amount = 0;
}


// CDOTA_Modifier_Juggernaut_Healing_Ward_Heal::GetModifierPercentageHealthRegen  (line 558, @0x00000000029b4cd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Juggernaut_Healing_Ward_Heal::GetModifierPercentageHealthRegen(
        CDOTA_Modifier_Juggernaut_Healing_Ward_Heal *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->healing_ward_heal_amount;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Juggernaut_BladeDance::~CDOTA_Ability_Juggernaut_BladeDance  (line 569, @0x0000000002a170b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Juggernaut_BladeDance::~CDOTA_Ability_Juggernaut_BladeDance(
        CDOTA_Ability_Juggernaut_BladeDance *const this)
{
  this->_vptr_IHandleEntity = &off_4340B50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Juggernaut_BladeDance::~CDOTA_Ability_Juggernaut_BladeDance  (line 569, @0x0000000002a170d0, libserver.so)  // inlines: ~CDOTA_Ability_Juggernaut_BladeDance
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Juggernaut_BladeDance::~CDOTA_Ability_Juggernaut_BladeDance(
        CDOTA_Ability_Juggernaut_BladeDance *const this)
{
  this->_vptr_IHandleEntity = &off_4340B50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Juggernaut_BladeDance::Schema_DynamicBinding  (line 571, @0x0000000002a091a0, libserver.so)
// globals: CDOTA_Ability_Juggernaut_BladeDance::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Juggernaut_BladeDance::Schema_DynamicBinding(
        const CDOTA_Ability_Juggernaut_BladeDance *const this)
{
  return CDOTA_Ability_Juggernaut_BladeDance::s_pSchemaBinding;
}


// CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 571, @0x0000000002a091b0, libserver.so)
// globals: CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::DestructInstance  (line 571, @0x0000000002a091c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Juggernaut_BladeDance>
void __fastcall CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::FreeInstance  (line 571, @0x0000000002a091e0, libserver.so)
void __fastcall CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::CanAllocate  (line 571, @0x0000000002a09200, libserver.so)
bool __fastcall CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 571, @0x0000000002a09210, libserver.so)
// globals: CDOTA_Ability_Juggernaut_BladeDance::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Juggernaut_BladeDance::s_pSchemaBinding;
}


// CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::AllocateInstance  (line 571, @0x0000000002a0f700, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::ConstructInstance  (line 571, @0x0000000002a14020, libserver.so)  // inlines: CDOTA_Ability_Juggernaut_BladeDance, Construct<CDOTA_Ability_Juggernaut_BladeDance>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4340B50;
  }
  return p;
}


// CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 571, @0x0000000002a1f400, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 571, @0x0000000002a1f420, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInternal  (line 571, @0x0000000002a36a40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "juggernaut_blade_dance", "CDOTA_Ability_Juggernaut_BladeDance"
// globals: `guard variable for'CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClass, CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClass, __dso_handle, CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClassInfo, CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClassInfo
CEntityClass *__cdecl CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClass);
    CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClass._vptr_CEntityClass = off_4340AD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClass);
    __cxa_atexit(
      CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Juggernaut_BladeDanceClass != 0 )
    return &CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClass;
  if ( `guard variable for'CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClassInfo,
      "CDOTA_Ability_Juggernaut_BladeDance",
      "juggernaut_blade_dance",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClassInfo);
  }
  CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClass.m_pClassInfo = &CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClassInfo;
  CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClass.m_pBaseClassInfo = CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Juggernaut_BladeDanceClass = &CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClass;
  CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClassInfo.m_pClass = &CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClass;
  CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Juggernaut_BladeDanceClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Juggernaut_BladeDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_BladeDanceClass;
}


// CDOTA_Ability_Juggernaut_BladeDance::GetIntrinsicModifierName  (line 574, @0x0000000002a09220, libserver.so)
// strings: "modifier_juggernaut_blade_dance"
const char *__fastcall CDOTA_Ability_Juggernaut_BladeDance::GetIntrinsicModifierName(
        CDOTA_Ability_Juggernaut_BladeDance *const this)
{
  return "modifier_juggernaut_blade_dance";
}


// CDOTA_Modifier_Juggernaut_BladeDance::~CDOTA_Modifier_Juggernaut_BladeDance  (line 583, @0x0000000002a12170, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Juggernaut_BladeDance::~CDOTA_Modifier_Juggernaut_BladeDance(
        CDOTA_Modifier_Juggernaut_BladeDance *const this)
{
  this->_vptr_CDOTA_Buff = &off_4341610;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Juggernaut_BladeDance::~CDOTA_Modifier_Juggernaut_BladeDance  (line 583, @0x0000000002a12190, libserver.so)  // inlines: ~CDOTA_Modifier_Juggernaut_BladeDance
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Juggernaut_BladeDance::~CDOTA_Modifier_Juggernaut_BladeDance(
        CDOTA_Modifier_Juggernaut_BladeDance *const this)
{
  this->_vptr_CDOTA_Buff = &off_4341610;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Juggernaut_BladeDance::GetTexture  (line 588, @0x0000000002a09230, libserver.so)
// strings: "juggernaut_blade_dance"
const char *__fastcall CDOTA_Modifier_Juggernaut_BladeDance::GetTexture(
        CDOTA_Modifier_Juggernaut_BladeDance *const this)
{
  return "juggernaut_blade_dance";
}


// CDOTA_Modifier_Juggernaut_BladeDance::IsHidden  (line 596, @0x0000000002a09240, libserver.so)
bool __fastcall CDOTA_Modifier_Juggernaut_BladeDance::IsHidden(CDOTA_Modifier_Juggernaut_BladeDance *const this)
{
  return 1;
}


// CDOTA_Modifier_Juggernaut_BladeDance::DeclareFunctions  (line 608, @0x00000000029b4cf0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Juggernaut_BladeDance::GetModifierPreAttack_CriticalStrike(CModifierParams const&), CDOTA_Modifier_Juggernaut_BladeDance::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_Juggernaut_BladeDance::DeclareFunctions(
        CDOTA_Modifier_Juggernaut_BladeDance *const this)
{
  this->m_Functions[83].__pfn = CDOTA_Modifier_Juggernaut_BladeDance::GetModifierPreAttack_CriticalStrike;
  this->m_Functions[83].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Juggernaut_BladeDance::OnAttackLanded;
}


// CDOTA_Modifier_Juggernaut_BladeDance::OnCreated  (line 616, @0x00000000029f7620, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "blade_dance_crit_mult", "blade_dance_crit_chance"
void __fastcall CDOTA_Modifier_Juggernaut_BladeDance::OnCreated(
        CDOTA_Modifier_Juggernaut_BladeDance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->blade_dance_crit_mult = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "blade_dance_crit_mult",
                                    -1,
                                    0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->blade_dance_crit_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        v4,
                                        "blade_dance_crit_chance",
                                        -1,
                                        0);
      return;
    }
  }
  else
  {
    this->blade_dance_crit_mult = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->blade_dance_crit_chance = 0;
}


// CDOTA_Modifier_Juggernaut_BladeDance::OnRefresh  (line 624, @0x00000000029f7040, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "blade_dance_crit_chance"
void __fastcall CDOTA_Modifier_Juggernaut_BladeDance::OnRefresh(
        CDOTA_Modifier_Juggernaut_BladeDance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->blade_dance_crit_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      Ability,
                                      "blade_dance_crit_chance",
                                      -1,
                                      0);
  else
    this->blade_dance_crit_chance = 0;
}


// CDOTA_Modifier_Juggernaut_BladeDance::GetModifierPreAttack_CriticalStrike  (line 631, @0x00000000029cb090, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ModifierVariant_t, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage, ToDOTABaseNPCRealHero, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Juggernaut_BladeDance::GetModifierPreAttack_CriticalStrike(
        CDOTA_Modifier_Juggernaut_BladeDance *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm1
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CBaseEntity *m_pInstance; // r13
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *v13; // rax
  uint32 v14; // edx
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC_Hero *v16; // rbx
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC_Hero *v18; // rdi
  __m128i v19; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( params->bTooltip )
  {
    *v2.m128i_i32 = this->blade_dance_crit_chance;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  }
  else
  {
    if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
      goto LABEL_28;
    m_Index = params->htarget.m_Index;
    if ( m_Index + 2 <= 1
      || (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v8 = &v7[params->htarget.m_Index & 0x1FF]) == 0
      || m_Index != v8->m_EHandle.m_Index
      || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    v10 = params->hattacker.m_Index;
    if ( v10 + 2 <= 1
      || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
      || (v12 = &v11[params->hattacker.m_Index & 0x1FF]) == 0
      || v10 != v12->m_EHandle.m_Index
      || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
      || BYTE3(v13[7]._vptr_IHandleEntity) == 0 )
    {
      v13 = 0;
    }
    if ( m_pInstance != 0
      && ((v14 = m_pInstance[2].m_hEffectEntity.m_Value.m_Index) & 0x193) != 0
      && (v14 & 0x10) == 0
      && v13 != 0
      && HIBYTE(v13[7].m_CScriptComponent) != m_pInstance->m_iTeamNum.m_Value
      && (v15 = CDOTA_Buff::GetParent(this),
          RollPseudoRandomPercentage(
            this->blade_dance_crit_chance,
            DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_JUGG_CRIT,
            v15)) )
    {
      v16 = ToDOTABaseNPCRealHero(m_pInstance);
      Parent = CDOTA_Buff::GetParent(this);
      if ( Parent != 0 && (Parent->m_iUnitType & 1) != 0 )
        v18 = Parent;
      else
        v18 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v18,
        v16,
        kill_eater_event_t::kKillEaterEvent_Blade_Dance_Crits,
        1,
        INVALID_ITEM_DEF_INDEX);
      *v19.m128i_i32 = this->blade_dance_crit_mult;
    }
    else
    {
LABEL_28:
      v19 = 0;
    }
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v19) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Juggernaut_BladeDance::OnAttackLanded  (line 660, @0x00000000029c4e60, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_Juggernaut.BladeDance"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Juggernaut_BladeDance::OnAttackLanded(
        CDOTA_Modifier_Juggernaut_BladeDance *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r12
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  __int64 v10; // rbx
  CDOTA_AttackRecordManager *v11; // rax
  CDOTA_BaseNPC *v13; // r13
  __int64 iRecord; // r14
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // r14
  CDOTA_BaseNPC *Parent; // rax

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 > 1
    && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) != 0
    && (v9 = &v8[params->hattacker.m_Index & 0x1FF]) != 0
    && v7 == v9->m_EHandle.m_Index
    && (v13 = v9->m_pInstance, v9->m_pInstance != 0)
    && v13->m_bIsDOTANPC )
  {
    iRecord = params->iRecord;
    AttackRecordsManager = GetAttackRecordsManager();
    RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
    if ( CDOTA_Buff::GetParent(this) == v13
      && m_pInstance != 0
      && RecordByIndex != 0
      && RecordByIndex->m_flCriticalBonus > 1.0 )
    {
      Parent = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Juggernaut.BladeDance", 0.0, 0, 0);
    }
  }
  else
  {
    v10 = params->iRecord;
    v11 = GetAttackRecordsManager();
    CDOTA_AttackRecordManager::GetRecordByIndex(v11, v10);
  }
  return 1uLL;
}


// CDOTA_Ability_Juggernaut_Omnislash::~CDOTA_Ability_Juggernaut_Omnislash  (line 682, @0x0000000002a17100, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Juggernaut_Omnislash::~CDOTA_Ability_Juggernaut_Omnislash(
        CDOTA_Ability_Juggernaut_Omnislash *const this)
{
  this->_vptr_IHandleEntity = &off_4341970;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Juggernaut_Omnislash::~CDOTA_Ability_Juggernaut_Omnislash  (line 682, @0x0000000002a17120, libserver.so)  // inlines: ~CDOTA_Ability_Juggernaut_Omnislash
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Juggernaut_Omnislash::~CDOTA_Ability_Juggernaut_Omnislash(
        CDOTA_Ability_Juggernaut_Omnislash *const this)
{
  this->_vptr_IHandleEntity = &off_4341970;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Juggernaut_Omnislash::Schema_DynamicBinding  (line 684, @0x0000000002a09250, libserver.so)
// globals: CDOTA_Ability_Juggernaut_Omnislash::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Juggernaut_Omnislash::Schema_DynamicBinding(
        const CDOTA_Ability_Juggernaut_Omnislash *const this)
{
  return CDOTA_Ability_Juggernaut_Omnislash::s_pSchemaBinding;
}


// CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 684, @0x0000000002a09260, libserver.so)
// globals: CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::DestructInstance  (line 684, @0x0000000002a09270, libserver.so)  // inlines: Destruct<CDOTA_Ability_Juggernaut_Omnislash>
void __fastcall CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::FreeInstance  (line 684, @0x0000000002a09290, libserver.so)
void __fastcall CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::CanAllocate  (line 684, @0x0000000002a092b0, libserver.so)
bool __fastcall CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 684, @0x0000000002a092c0, libserver.so)
// globals: CDOTA_Ability_Juggernaut_Omnislash::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Juggernaut_Omnislash::s_pSchemaBinding;
}


// CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::AllocateInstance  (line 684, @0x0000000002a0f740, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::ConstructInstance  (line 684, @0x0000000002a14050, libserver.so)  // inlines: CDOTA_Ability_Juggernaut_Omnislash, Construct<CDOTA_Ability_Juggernaut_Omnislash>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4341970;
  }
  return p;
}


// CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 684, @0x0000000002a1f450, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 684, @0x0000000002a1f470, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInternal  (line 684, @0x0000000002a36b90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "juggernaut_omni_slash", "CDOTA_Ability_Juggernaut_Omnislash"
// globals: `guard variable for'CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClass, CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClass, __dso_handle, CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClassInfo, CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClassInfo
CEntityClass *__cdecl CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClass);
    CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClass._vptr_CEntityClass = off_43418F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClass);
    __cxa_atexit(
      CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Juggernaut_OmnislashClass != 0 )
    return &CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClass;
  if ( `guard variable for'CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClassInfo,
      "CDOTA_Ability_Juggernaut_Omnislash",
      "juggernaut_omni_slash",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClassInfo);
  }
  CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClass.m_pClassInfo = &CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClassInfo;
  CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClass.m_pBaseClassInfo = CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Juggernaut_OmnislashClass = &CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClass;
  CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClassInfo.m_pClass = &CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClass;
  CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Juggernaut_OmnislashClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Juggernaut_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Juggernaut_OmnislashClass;
}


// CDOTA_Ability_Juggernaut_Omnislash::GetConceptRecipientType  (line 691, @0x0000000002a092d0, libserver.so)
int __fastcall CDOTA_Ability_Juggernaut_Omnislash::GetConceptRecipientType(
        CDOTA_Ability_Juggernaut_Omnislash *const this)
{
  return 4;
}


// CDOTA_Ability_Juggernaut_Omnislash::SpeakTrigger  (line 692, @0x0000000002a092e0, libserver.so)
DOTAAbilitySpeakTrigger_t __fastcall CDOTA_Ability_Juggernaut_Omnislash::SpeakTrigger(
        CDOTA_Ability_Juggernaut_Omnislash *const this)
{
  return DOTAAbilitySpeakTrigger_t::DOTA_ABILITY_SPEAK_START_ACTION_PHASE;
}


// CDOTA_Ability_Juggernaut_Omnislash::GetStolenActivityModifier  (line 694, @0x0000000002a092f0, libserver.so)
const char *__fastcall CDOTA_Ability_Juggernaut_Omnislash::GetStolenActivityModifier(
        CDOTA_Ability_Juggernaut_Omnislash *const this)
{
  return "omnislash";
}


// CDOTA_Ability_Juggernaut_Omnislash::YouForgotToImplementOrDeclareServerClass  (line 700, @0x00000000029b4d30, libserver.so)
int __fastcall CDOTA_Ability_Juggernaut_Omnislash::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Juggernaut_Omnislash *const this)
{
  return 0;
}


// CDOTA_Ability_Juggernaut_Omnislash::GetServerClass  (line 700, @0x00000000029ca030, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Juggernaut_Omnislash::GetServerClass(
        CDOTA_Ability_Juggernaut_Omnislash *const this)
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


// CDOTA_Ability_Juggernaut_Omnislash::OnSpellStart  (line 709, @0x00000000029debc0, libserver.so)  // inlines: GetAbilityData, GetSpecialValueFor<float>
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::GetAbsOrigin, CDOTAGamerules::SendProjectionAbilityMessage, KeyValues::~KeyValues, CDOTABaseAbility::LoadAbilityData, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_juggernaught_omnislash", "omni_slash_bounce_tick", "modifier_juggernaut_omnislash"
void __fastcall CDOTA_Ability_Juggernaut_Omnislash::OnSpellStart(CDOTA_Ability_Juggernaut_Omnislash *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r14d
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v9; // rax
  float v10; // xmm3_4
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_juggernaught_omnislash");
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "omni_slash_bounce_tick", 0, 0);
  KeyValues::SetFloat(&kv, "omni_slash_bounce_tick", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_juggernaut_omnislash", &kv, 0);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v7 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v9,
    1,
    m_iAbilityID,
    0,
    0,
    *&AbsOrigin->x,
    AbsOrigin->z,
    -1.0,
    v10);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Juggernaut_Omnislash::ModifyOrAppendCriteria  (line 724, @0x00000000029f1350, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetLevelSpecialValueFor<int>, GetTeamNumber, Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::ModifyOrAppendCriteria, CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CResponseCriteriaSet::AppendCriteria, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "omni_slash_radius", "lonetarget"
void __fastcall CDOTA_Ability_Juggernaut_Omnislash::ModifyOrAppendCriteria(
        CDOTA_Ability_Juggernaut_Omnislash *const this,
        CResponseCriteriaSet *const set)
{
  CDOTA_BaseNPC *Caster; // r14
  CBaseEntity *CursorTarget; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v7; // rax
  float v8; // xmm2_4
  float flRadius; // [rsp+1Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-50h] BYREF

  CBaseEntity::ModifyOrAppendCriteria(this, set);
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    flRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "omni_slash_radius", -1, 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(CursorTarget);
    v7 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Caster, flRadius, &entities, 2, 19, 144, 0, 0);
    if ( entities.m_Size == 1 )
      CResponseCriteriaSet::AppendCriteria(set, "lonetarget", 1.0, v8);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    }
  }
}


// CDOTA_Ability_Juggernaut_Omnislash::GetCooldown  (line 749, @0x00000000029ded00, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "omni_slash_cooldown_scepter"
float __fastcall CDOTA_Ability_Juggernaut_Omnislash::GetCooldown(
        CDOTA_Ability_Juggernaut_Omnislash *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "omni_slash_cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Juggernaut_Omnislash::GetAbilityDamageToTargetOverInterval  (line 761, @0x00000000029f14b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, __cxa_guard_acquire, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Bot::GetNearbyCreeps, CDOTA_Bot::GetNearbyHeroes, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_BaseNPC::GetArmorReductionForDamageType, __cxa_guard_release, __cxa_atexit
// strings: "omni_slash_radius", "omni_slash_damage", "omni_slash_jumps_scepter", "omni_slash_jumps"
// globals: `guard variable for'CDOTA_Ability_Juggernaut_Omnislash::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities, CDOTA_Ability_Juggernaut_Omnislash::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities, __dso_handle, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector()
__int64 __fastcall CDOTA_Ability_Juggernaut_Omnislash::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Juggernaut_Omnislash *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  CDOTA_Bot *m_pBot; // rdi
  int v9; // r14d
  int v10; // r13d
  int v11; // kr00_4
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  const char *v14; // rsi
  int v15; // ebx

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "omni_slash_radius", -1, 1);
    if ( `guard variable for'CDOTA_Ability_Juggernaut_Omnislash::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Juggernaut_Omnislash::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities) != 0 )
    {
      CDOTA_Ability_Juggernaut_Omnislash::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size = 0;
      CDOTA_Ability_Juggernaut_Omnislash::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_pMemory = 0;
      CDOTA_Ability_Juggernaut_Omnislash::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_nAllocationCount = 0;
      CDOTA_Ability_Juggernaut_Omnislash::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_nGrowSize = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_Ability_Juggernaut_Omnislash::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities);
      __cxa_atexit(
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
        &CDOTA_Ability_Juggernaut_Omnislash::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
        &_dso_handle);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&CDOTA_Ability_Juggernaut_Omnislash::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities);
    m_pBot = pTarget->m_pBot;
    if ( m_pBot != 0 )
    {
      CDOTA_Bot::GetNearbyCreeps(
        m_pBot,
        DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
        &CDOTA_Ability_Juggernaut_Omnislash::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
        LevelSpecialValue);
      CDOTA_Bot::GetNearbyHeroes(
        pTarget->m_pBot,
        DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
        &CDOTA_Ability_Juggernaut_Omnislash::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
        LevelSpecialValue);
    }
    v9 = CDOTA_Ability_Juggernaut_Omnislash::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size
       + 1;
    v10 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "omni_slash_damage", 0, 1);
    v11 = v10 + CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "omni_slash_damage", 1, 1);
    Caster = CDOTABaseAbility::GetCaster(this);
    HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
    v14 = "omni_slash_jumps_scepter";
    if ( !HasScepter )
      v14 = "omni_slash_jumps";
    v15 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, v14, -1, 1);
    return ((v15 * (v11 / 2) / v9) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)));
  }
  return result;
}


// CDOTA_Modifier_Juggernaut_Omnislash::~CDOTA_Modifier_Juggernaut_Omnislash  (line 795, @0x0000000002a12120, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Juggernaut_Omnislash::~CDOTA_Modifier_Juggernaut_Omnislash(
        CDOTA_Modifier_Juggernaut_Omnislash *const this)
{
  this->_vptr_CDOTA_Buff = &off_4342430;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Juggernaut_Omnislash::~CDOTA_Modifier_Juggernaut_Omnislash  (line 795, @0x0000000002a12140, libserver.so)  // inlines: ~CDOTA_Modifier_Juggernaut_Omnislash
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Juggernaut_Omnislash::~CDOTA_Modifier_Juggernaut_Omnislash(
        CDOTA_Modifier_Juggernaut_Omnislash *const this)
{
  this->_vptr_CDOTA_Buff = &off_4342430;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Juggernaut_Omnislash::GetEffectName  (line 806, @0x0000000002a09300, libserver.so)
// strings: "particles/units/heroes/hero_juggernaut/juggernaut_omnislash_light.vpcf"
const char *__fastcall CDOTA_Modifier_Juggernaut_Omnislash::GetEffectName(
        CDOTA_Modifier_Juggernaut_Omnislash *const this)
{
  return "particles/units/heroes/hero_juggernaut/juggernaut_omnislash_light.vpcf";
}


// CDOTA_Modifier_Juggernaut_Omnislash::GetStatusEffectName  (line 807, @0x0000000002a09310, libserver.so)
// strings: "particles/status_fx/status_effect_omnislash.vpcf"
const char *__fastcall CDOTA_Modifier_Juggernaut_Omnislash::GetStatusEffectName(
        CDOTA_Modifier_Juggernaut_Omnislash *const this)
{
  return "particles/status_fx/status_effect_omnislash.vpcf";
}


// CDOTA_Modifier_Juggernaut_Omnislash::StatusEffectPriority  (line 808, @0x0000000002a09320, libserver.so)
int __fastcall CDOTA_Modifier_Juggernaut_Omnislash::StatusEffectPriority(
        CDOTA_Modifier_Juggernaut_Omnislash *const this)
{
  return 100;
}


// CDOTA_Modifier_Juggernaut_Omnislash::OnCreated  (line 832, @0x00000000029fc320, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorTarget, CDOTA_Buff::GetParent, CDOTABody::StartAnimation, KeyValues::KeyValues, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::HasScepter, DotaRetrieveAbilityValue<int>, KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink (15 total)
// strings: "omni_slash_radius", "omni_slash_jumps", "modifier_juggernaut_omnislash_invulnerability", "omni_slash_jumps_scepter", "omni_slash_bounce_tick"
void __fastcall CDOTA_Modifier_Juggernaut_Omnislash::OnCreated(
        CDOTA_Modifier_Juggernaut_Omnislash *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  CDOTA_BaseNPC *Parent; // rax
  CDOTABody *v12; // rax
  CDOTABaseAbility *v13; // r15
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  float v17; // xmm1_4
  CDOTABaseAbility *v18; // rax
  float Float; // xmm0_4
  float v20; // xmm1_4
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->omni_slash_radius = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_13:
    this->omni_slash_jumps = 0;
    goto LABEL_4;
  }
  this->omni_slash_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "omni_slash_radius", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_13;
LABEL_3:
  this->omni_slash_jumps = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "omni_slash_jumps", -1, 0);
LABEL_4:
  v6 = CDOTA_Buff::GetAbility(this);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(v6);
  if ( CursorTarget != 0 && (m_pEntity = CursorTarget->m_pEntity) != 0 )
  {
    v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v10 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v10 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v9 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  this->m_nJumps = 0;
  this->m_iTotalDamage = 1;
  this->m_iHeroDamage = 1;
  this->m_bFirstHit = 1;
  Parent = CDOTA_Buff::GetParent(this);
  v12 = (*(Parent->_vptr_IHandleEntity + 377))(Parent);
  CDOTABody::StartAnimation(v12, 0x5EFu, 0, 1.0);
  KeyValues::KeyValues(&kv, "modifier_juggernaut_omnislash_invulnerability");
  v13 = CDOTA_Buff::GetAbility(this);
  Caster = CDOTA_Buff::GetCaster(this);
  v15 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::AddNewModifier(v15, Caster, v13, "modifier_juggernaut_omnislash_invulnerability", &kv, 0);
  this->m_iSlashJumps = this->omni_slash_jumps;
  v16 = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v16) )
  {
    v18 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v18, &this->omni_slash_jumps_scepter, "omni_slash_jumps_scepter");
    this->m_iSlashJumps = this->omni_slash_jumps_scepter;
  }
  Float = KeyValues::GetFloat(pKV, "omni_slash_bounce_tick", v17);
  CDOTA_Buff::StartIntervalThink(this, Float, v20);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Juggernaut_Omnislash::OnDestroy  (line 874, @0x00000000029c0d60, libserver.so)  // inlines: GetAbilityData, Set, SetForceAttackTarget, SpeakConcept, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::RemoveModifierByName, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::SpeakConcept, CDOTA_BaseNPC::UpdatePseudoQueuedOrder, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetActivated, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTAGamerules::SendProjectionAbilityEndChannelMessage (15 total)
// strings: "modifier_juggernaut_omnislash_invulnerability", "juggernaut_blade_fury"
void __fastcall CDOTA_Modifier_Juggernaut_Omnislash::OnDestroy(CDOTA_Modifier_Juggernaut_Omnislash *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  float v4; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *Ability; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  CDOTABaseAbility *v11; // r13
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CResponseCriteriaSet criteria; // [rsp+10h] [rbp-60h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(Parent, 1519);
  v3 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(v3, "modifier_juggernaut_omnislash_invulnerability");
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CResponseCriteriaSet::AppendCriteria(&criteria, "damageratio", 1.0, v4);
  m_pSpeech = CDOTA_Buff::GetParent(this)->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
  v6 = CDOTA_Buff::GetParent(this);
  v6->m_bAllowAllyForceAttack = 0;
  v6->m_hForceAttackTarget.m_Index = -1;
  CDOTA_BaseNPC::UpdatePseudoQueuedOrder(v6, 1);
  v7 = CDOTA_Buff::GetParent(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v7, "juggernaut_blade_fury", 0);
  if ( AbilityByName != 0 )
    CDOTABaseAbility::SetActivated(AbilityByName, 1);
  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    m_pAbilityData = Ability->m_pAbilityData;
    v11 = Ability;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(Ability, 0);
      m_pAbilityData = v11->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityEndChannelMessage(g_pGameRules, Caster, m_iAbilityID);
  }
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
}


// CDOTA_Modifier_Juggernaut_Omnislash::OnIntervalThink  (line 907, @0x0000000002a03940, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnitName, GrowMemory, InState, IndexToIdentity, IsAttackImmune, IsValid, LookupEntity, NormalizeInPlace, Purge, RemoveAll, Reset, Set, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, VectorSubtract, entindex, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, VectorNormalize, CalcClosestPointOnLine, FindClearSpaceForUnit, VectorAngles, CBaseEntity::SetAbsAngles, CDOTA_BaseNPC::Interrupt, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int> (40 total)
// strings: "Hero_Juggernaut.OmniSlash", "Hero_Juggernaut.OmniSlash.Damage", "omni_slash_damage", "particles/units/heroes/hero_juggernaut/juggernaut_omni_slash_tgt.vpcf", "attach_hitloc", "particles/units/heroes/hero_juggernaut/juggernaut_omni_slash_trail.vpcf" (8 total)
// globals: INVALID_ITEM_DEF_INDEX, CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Juggernaut_Omnislash::OnIntervalThink(CDOTA_Modifier_Juggernaut_Omnislash *const this)
{
  CDOTA_BaseNPC *v2; // r12
  CDOTA_BaseNPC *v3; // r13
  CDOTA_BaseNPC *v4; // rax
  const Vector *v5; // rax
  const Vector *v6; // rax
  vec_t v7; // xmm1_4
  vec_t v8; // xmm0_4
  __m128i x_low; // xmm7
  float v10; // r15d
  const Vector *v11; // rax
  vec_t v12; // xmm1_4
  vec_t v13; // xmm0_4
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // r15
  const Vector *v16; // rax
  int v17; // xmm0_4
  int v18; // xmm1_4
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  const Vector *v21; // r15
  const Vector *v22; // rax
  vec_t v23; // xmm1_4
  vec_t v24; // xmm0_4
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  __int64 v27; // r15
  const Vector *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v32; // rax
  unsigned int LevelSpecialValue; // eax
  int v34; // r15d
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v38; // rax
  CDOTA_ParticleManager *v39; // rax
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *v41; // rax
  int m_Size; // eax
  CEntityIndex *v43; // rax
  CDOTA_BaseNPC_Hero *v44; // r12
  CDOTA_BaseNPC *v45; // rax
  CDOTA_BaseNPC_Hero *v46; // rdi
  CDOTA_BaseNPC *v47; // r12
  CDOTA_ParticleManager *v48; // rax
  CDOTA_ParticleManager *v49; // rax
  CDOTA_BaseNPC *v50; // rax
  const Vector *v51; // r13
  CDOTA_ParticleManager *v52; // rax
  CDOTA_ParticleManager *v53; // rax
  int v54; // eax
  bool v55; // cc
  uint32 m_iUnitType; // eax
  CDOTA_BaseNPC *v57; // r14
  CDOTABaseAbility *v58; // rax
  CDOTA_BaseNPC *v59; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v61; // rax
  CDOTABaseAbility *v62; // rax
  bool v63; // zf
  CDOTA_BaseNPC *v64; // rsi
  CDOTABaseAbility *v65; // rax
  CDOTA_BaseNPC *v66; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v69; // rax
  __m128i v70; // xmm6
  float v71; // r13d
  CDOTA_BaseNPC *v72; // r12
  CDOTA_BaseNPC *v73; // rax
  const Vector *v74; // r15
  CDOTA_BaseNPC *v75; // rax
  int v76; // r12d
  int v77; // esi
  unsigned __int16 *v78; // rdx
  int v79; // eax
  __int16 v80; // cx
  CEntityIdentity *v81; // rdx
  CEntityIdentity *v82; // rdx
  CEntityInstance *m_pInstance; // r13
  CDOTA_BaseNPC *Caster; // rax
  const char *m_pAsString; // r15
  CDOTAGameManager *v86; // rax
  KeyValues *DataForHeroOrUnit; // rax
  int v88; // eax
  float v89; // [rsp+1Ch] [rbp-F4h]
  float vForwardb; // [rsp+20h] [rbp-F0h]
  float vForwardc; // [rsp+20h] [rbp-F0h]
  Vector *vForwardd; // [rsp+20h] [rbp-F0h]
  Vector *vForwarde; // [rsp+20h] [rbp-F0h]
  Vector *vForwardf; // [rsp+20h] [rbp-F0h]
  CEntityIndex vForward; // [rsp+20h] [rbp-F0h]
  Vector *vForwarda; // [rsp+20h] [rbp-F0h]
  CDOTA_BaseNPC *nFxIndexBa; // [rsp+28h] [rbp-E8h]
  int nFxIndexB; // [rsp+28h] [rbp-E8h]
  CDOTA_BaseNPC *nFxIndexBb; // [rsp+28h] [rbp-E8h]
  float flDamagea; // [rsp+30h] [rbp-E0h]
  float flDamageb; // [rsp+30h] [rbp-E0h]
  float flDamage; // [rsp+30h] [rbp-E0h]
  float x; // [rsp+34h] [rbp-DCh]
  float vOldOrigin; // [rsp+38h] [rbp-D8h]
  float vOldOrigin_4; // [rsp+3Ch] [rbp-D4h]
  Vector vDirection; // [rsp+50h] [rbp-C0h] BYREF
  Vector vTo; // [rsp+60h] [rbp-B0h] BYREF
  Vector vClosest; // [rsp+70h] [rbp-A0h] BYREF
  Vector vFaceDirection; // [rsp+80h] [rbp-90h] BYREF
  QAngle angles; // [rsp+90h] [rbp-80h] BYREF
  CUnitOrders attackOrder; // [rsp+A0h] [rbp-70h] BYREF

  v2 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  if ( v2 != 0 )
  {
    this->m_hTarget.m_Index = -1;
    goto LABEL_3;
  }
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v69 = CDOTA_Buff::GetParent(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_OMNISLASH,
    v69->m_iTeamNum.m_Value,
    AbsOrigin,
    325.0,
    0.40000001,
    0);
  *v70.m128i_i32 = this->omni_slash_radius;
  attackOrder.m_nIssuerPlayerIndex = 0;
  *&attackOrder.m_nUnits.m_Size = 0;
  attackOrder.m_nUnits.m_Memory.m_pMemory = 0;
  v71 = COERCE_FLOAT(_mm_cvtsi128_si32(v70));
  v72 = CDOTA_Buff::GetParent(this);
  v73 = CDOTA_Buff::GetParent(this);
  v74 = CBaseEntity::GetAbsOrigin(v73);
  v75 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v75->m_iTeamNum.m_Value, v74, v72, v71, &attackOrder, 2, 3, 208, 0, 0);
  if ( attackOrder.m_nIssuerPlayerIndex <= 0 )
    goto LABEL_27;
  v76 = 0;
  do
  {
    v78 = (*&attackOrder.m_nUnits.m_Size + 4LL * v76);
    v79 = *v78;
    if ( (*v78 + 2) <= 1 )
      goto LABEL_44;
    v80 = *v78;
    v81 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v78 >> 9) & 0x3F];
    if ( v81 == 0 )
      goto LABEL_44;
    v82 = &v81[v80 & 0x1FF];
    if ( v82 == 0 )
      goto LABEL_44;
    if ( v79 != v82->m_EHandle.m_Index )
      goto LABEL_44;
    m_pInstance = v82->m_pInstance;
    if ( v82->m_pInstance == 0 )
      goto LABEL_44;
    if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
      goto LABEL_44;
    Caster = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, Caster)
      || (*(m_pInstance->_vptr_IHandleEntity + 405))(m_pInstance) != 0
      || (m_pInstance[11].m_hPrivateScope.m_hScope & 0x20) != 0 )
    {
      goto LABEL_44;
    }
    m_pAsString = "";
    if ( m_pInstance[70].m_iszPrivateVScripts.u.m_Id != 0 )
      m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
    v86 = DOTAGameManager();
    DataForHeroOrUnit = CDOTAGameManager::GetDataForHeroOrUnit(v86, m_pAsString);
    if ( DataForHeroOrUnit != 0 && KeyValues::GetInt(DataForHeroOrUnit, "ImmuneToOmnislash", 0) != 0 )
    {
LABEL_44:
      v77 = v76--;
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&attackOrder, v77);
    }
    ++v76;
  }
  while ( attackOrder.m_nIssuerPlayerIndex > v76 );
  if ( attackOrder.m_nIssuerPlayerIndex <= 0 )
  {
LABEL_27:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&attackOrder);
LABEL_28:
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    return;
  }
  v88 = RandomInt(0, (attackOrder.m_nIssuerPlayerIndex - 1));
  v2 = CEntityHandle::operator CEntityInstance *((*&attackOrder.m_nUnits.m_Size + 4LL * v88));
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&attackOrder);
  if ( v2 == 0 )
    goto LABEL_28;
LABEL_3:
  v3 = 0;
  if ( v2->m_bIsDOTANPC )
    v3 = v2;
  v4 = CDOTA_Buff::GetParent(this);
  v5 = CBaseEntity::GetAbsOrigin(v4);
  x = v5->x;
  vOldOrigin_4 = v5->y;
  vOldOrigin = v5->z;
  v6 = CBaseEntity::GetAbsOrigin(v2);
  v7 = v6->y - vOldOrigin_4;
  v8 = v6->z - vOldOrigin;
  vDirection.x = v6->x - x;
  vDirection.y = v7;
  vDirection.z = v8;
  VectorNormalize(&vDirection);
  x_low = LODWORD(vDirection.x);
  *x_low.m128i_i32 = vDirection.x * 256.0;
  v10 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  flDamagea = vDirection.y * 256.0;
  vForwardb = 256.0 * vDirection.z;
  v11 = CBaseEntity::GetAbsOrigin(v2);
  v12 = flDamagea + v11->y;
  v13 = vForwardb + v11->z;
  vTo.x = v10 + v11->x;
  vTo.y = v12;
  vTo.z = v13;
  v14 = CDOTA_Buff::GetParent(this);
  v15 = CBaseEntity::GetAbsOrigin(v14);
  v89 = vDirection.x * 64.0;
  flDamageb = vDirection.y * 64.0;
  vForwardc = 64.0 * vDirection.z;
  v16 = CBaseEntity::GetAbsOrigin(v2);
  *&v17 = vForwardc + v16->z;
  *&v18 = v89 + v16->x;
  *&attackOrder.m_nOrderSequenceNumber = flDamageb + v16->y;
  attackOrder.m_nUnits.m_Size = v17;
  attackOrder.m_nIssuerPlayerIndex = v18;
  CalcClosestPointOnLine(&attackOrder, v15, &vTo, &vClosest, 0);
  v19 = CDOTA_Buff::GetParent(this);
  FindClearSpaceForUnit(v19, vClosest, 1);
  v20 = CDOTA_Buff::GetParent(this);
  v21 = CBaseEntity::GetAbsOrigin(v20);
  v22 = CBaseEntity::GetAbsOrigin(v2);
  v23 = v22->x - v21->x;
  v24 = v22->y - v21->y;
  vFaceDirection.z = 0.0;
  vFaceDirection.x = v23;
  vFaceDirection.y = v24;
  VectorNormalize(&vFaceDirection);
  VectorAngles(&vFaceDirection, &angles);
  angles.x = 0.0;
  angles.z = 0.0;
  v25 = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetAbsAngles(v25, &angles);
  v26 = CDOTA_Buff::GetParent(this);
  v27 = (*(v26->_vptr_IHandleEntity + 376))(v26);
  vForwardd = *(*v27 + 744LL);
  v28 = CBaseEntity::GetAbsOrigin(v2);
  (vForwardd)(v27, v28);
  v29 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::Interrupt(v29);
  v30 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v30, "Hero_Juggernaut.OmniSlash", 0.0, 0, 0);
  CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Juggernaut.OmniSlash.Damage", 0.0, 0, 0);
  Ability = CDOTA_Buff::GetAbility(this);
  LODWORD(v27) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "omni_slash_damage", 0, 0);
  v32 = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v32, "omni_slash_damage", 1, 0);
  v34 = RandomInt(v27, LevelSpecialValue);
  v35 = CDOTA_Buff::GetParent(this);
  vForwarde = CBaseEntity::GetAbsOrigin(v35);
  v36 = CDOTA_Buff::GetParent(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_OMNISLASH,
    v36->m_iTeamNum.m_Value,
    vForwarde,
    325.0,
    0.40000001,
    0);
  if ( !this->m_bFirstHit )
  {
    if ( (v3->m_nUnitState64.m_Value & 4) != 0 )
    {
LABEL_7:
      nFxIndexBa = CDOTA_Buff::GetCaster(this);
      ParticleManager = GetParticleManager();
      LODWORD(nFxIndexBa) = CDOTA_ParticleManager::CreateParticle(
                              ParticleManager,
                              "particles/units/heroes/hero_juggernaut/juggernaut_omni_slash_tgt.vpcf",
                              2,
                              nFxIndexBa,
                              0,
                              0);
      vForwardf = CBaseEntity::GetAbsOrigin(v3);
      v38 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v38, nFxIndexBa, 0, v3, 5, "attach_hitloc", *vForwardf, 1);
      v39 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v39, nFxIndexBa);
      attackOrder.m_nUnits.m_Size = 0;
      memset(&attackOrder.m_nUnits.m_Memory, 0, 28);
      attackOrder.m_nOrderSequenceNumber = 0;
      attackOrder.m_vPosition.x = vec3_origin.x;
      y = vec3_origin.y;
      attackOrder.m_nIssuerPlayerIndex = -1;
      attackOrder.m_vPosition.y = y;
      attackOrder.m_vPosition.z = vec3_origin.z;
      attackOrder.m_bQueue = 0;
      v41 = CDOTA_Buff::GetParent(this);
      vForward.m_Data = CEntityInstance::GetEntityIndex(v41).m_Data;
      m_Size = attackOrder.m_nUnits.m_Size;
      nFxIndexB = attackOrder.m_nUnits.m_Size;
      if ( attackOrder.m_nUnits.m_Size == attackOrder.m_nUnits.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CEntityIndex,int>::Grow(&attackOrder.m_nUnits.m_Memory, 1);
        m_Size = attackOrder.m_nUnits.m_Size;
      }
      attackOrder.m_nUnits.m_Size = m_Size + 1;
      v43 = &attackOrder.m_nUnits.m_Memory.m_pMemory[nFxIndexB];
      if ( v43 != 0 )
        v43->m_Data = vForward.m_Data;
      attackOrder.m_nOrderType = 4;
      attackOrder.m_nTargetIndex = CEntityInstance::GetEntityIndex(v3);
      DOTA_ExecuteOrders(&attackOrder, 0, 0, 0);
      attackOrder.m_nUnits.m_Size = 0;
      if ( (attackOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEntityIndex,int>::Purge(&attackOrder.m_nUnits.m_Memory);
        if ( (attackOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CEntityIndex,int>::Purge(&attackOrder.m_nUnits.m_Memory);
      }
      goto LABEL_12;
    }
    flDamage = v34;
    v65 = CDOTA_Buff::GetAbility(this);
    v64 = 0;
    v63 = !v2->m_bIsDOTANPC;
    vForwarda = v65;
LABEL_37:
    if ( !v63 )
      v64 = v2;
    nFxIndexBb = v64;
    v66 = CDOTA_Buff::GetParent(this);
    ApplyDamage(v66, nFxIndexBb, vForwarda, flDamage, 1, 8);
    goto LABEL_7;
  }
  v59 = CDOTA_Buff::GetParent(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v59, "juggernaut_blade_fury", 0);
  if ( AbilityByName != 0 )
    CDOTABaseAbility::SetActivated(AbilityByName, 0);
  this->m_bFirstHit = 0;
  if ( v3 != 0 )
  {
    v61 = CDOTA_Buff::GetAbility(this);
    if ( !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, v61, 1) )
    {
      if ( (v3->m_nUnitState64.m_Value & 4) != 0 )
        goto LABEL_7;
      flDamage = v34;
      v62 = CDOTA_Buff::GetAbility(this);
      v63 = !v2->m_bIsDOTANPC;
      vForwarda = v62;
      v64 = 0;
      goto LABEL_37;
    }
  }
LABEL_12:
  if ( v2->m_bIsDOTANPC && v2->m_iIsControllableByPlayer64.m_Value == 0 )
  {
    m_iUnitType = v2->m_iUnitType;
    if ( (m_iUnitType & 0x800) == 0 && (m_iUnitType & 0x10001) == 0 )
    {
      v57 = CDOTA_Buff::GetParent(this);
      v58 = CDOTA_Buff::GetAbility(this);
      CDOTA_BaseNPC::Kill(v2, v58, v57, 0.0, 0);
    }
  }
  this->m_iTotalDamage += v34;
  if ( (v3->m_iUnitType & 1) != 0 )
  {
    this->m_iHeroDamage += v34;
    v44 = 0;
    if ( (v3->m_iUnitType & 1) != 0 )
      v44 = v3;
    v45 = CDOTA_Buff::GetParent(this);
    if ( v45 != 0 && (v45->m_iUnitType & 1) != 0 )
      v46 = v45;
    else
      v46 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v46,
      v44,
      kill_eater_event_t::kKillEaterEvent_Omnislash_Jumps,
      1,
      INVALID_ITEM_DEF_INDEX);
  }
  v47 = CDOTA_Buff::GetCaster(this);
  v48 = GetParticleManager();
  LODWORD(v47) = CDOTA_ParticleManager::CreateParticle(
                   v48,
                   "particles/units/heroes/hero_juggernaut/juggernaut_omni_slash_trail.vpcf",
                   2,
                   v47,
                   0,
                   0);
  v49 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v49,
    v47,
    0,
    COERCE_DOUBLE(__PAIR64__(LODWORD(vOldOrigin_4), LODWORD(x))),
    vOldOrigin);
  v50 = CDOTA_Buff::GetParent(this);
  v51 = CBaseEntity::GetAbsOrigin(v50);
  v52 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v52, v47, 1, *&v51->x, v51->z);
  v53 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v53, v47);
  v54 = this->m_nJumps + 1;
  v55 = v54 < this->m_iSlashJumps;
  this->m_nJumps = v54;
  if ( !v55 )
    goto LABEL_28;
}


// CDOTA_Modifier_Juggernaut_Omnislash::DeclareFunctions  (line 1082, @0x00000000029b4d40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Juggernaut_Omnislash::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Juggernaut_Omnislash::DeclareFunctions(CDOTA_Modifier_Juggernaut_Omnislash *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Juggernaut_Omnislash::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_Juggernaut_Omnislash::GetOverrideAnimation  (line 1089, @0x00000000029b4d60, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Juggernaut_Omnislash::GetOverrideAnimation(
        CDOTA_Modifier_Juggernaut_Omnislash *const this,
        const CModifierParams *const params)
{
  return 0x44BDE00000000001uLL;
}


// CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability::~CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability  (line 1099, @0x0000000002a120d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability::~CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability(
        CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability *const this)
{
  this->_vptr_CDOTA_Buff = &off_4342750;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability::~CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability  (line 1099, @0x0000000002a120f0, libserver.so)  // inlines: ~CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability::~CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability(
        CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability *const this)
{
  this->_vptr_CDOTA_Buff = &off_4342750;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability::IsHidden  (line 1104, @0x0000000002a09330, libserver.so)
bool __fastcall CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability::IsHidden(
        CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability *const this)
{
  return 1;
}


// CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability::CheckState  (line 1110, @0x00000000029b4d80, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability::CheckState(
        CDOTA_Modifier_Juggernaut_Omnislash_Invulnerability *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2804300uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFD7FBCFFLL;
}


// CDOTA_Ability_Holdout_BladeFury::~CDOTA_Ability_Holdout_BladeFury  (line 1129, @0x0000000002a17010, libserver.so)  // inlines: ~CDOTA_Ability_Juggernaut_BladeFury
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Holdout_BladeFury::~CDOTA_Ability_Holdout_BladeFury(
        CDOTA_Ability_Holdout_BladeFury *const this)
{
  this->_vptr_IHandleEntity = &off_433EBF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Holdout_BladeFury::~CDOTA_Ability_Holdout_BladeFury  (line 1129, @0x0000000002a17030, libserver.so)  // inlines: ~CDOTA_Ability_Holdout_BladeFury, ~CDOTA_Ability_Juggernaut_BladeFury
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Holdout_BladeFury::~CDOTA_Ability_Holdout_BladeFury(
        CDOTA_Ability_Holdout_BladeFury *const this)
{
  this->_vptr_IHandleEntity = &off_433EBF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Holdout_BladeFury::Schema_DynamicBinding  (line 1131, @0x0000000002a09340, libserver.so)
// globals: CDOTA_Ability_Holdout_BladeFury::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Holdout_BladeFury::Schema_DynamicBinding(
        const CDOTA_Ability_Holdout_BladeFury *const this)
{
  return CDOTA_Ability_Holdout_BladeFury::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1131, @0x0000000002a09350, libserver.so)
// globals: CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::DestructInstance  (line 1131, @0x0000000002a09360, libserver.so)  // inlines: Destruct<CDOTA_Ability_Holdout_BladeFury>
void __fastcall CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::FreeInstance  (line 1131, @0x0000000002a09380, libserver.so)
void __fastcall CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::CanAllocate  (line 1131, @0x0000000002a093a0, libserver.so)
bool __fastcall CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1131, @0x0000000002a093b0, libserver.so)
// globals: CDOTA_Ability_Holdout_BladeFury::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Holdout_BladeFury::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::AllocateInstance  (line 1131, @0x0000000002a0f780, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::ConstructInstance  (line 1131, @0x0000000002a14080, libserver.so)  // inlines: CDOTA_Ability_Holdout_BladeFury, CDOTA_Ability_Juggernaut_BladeFury, Construct<CDOTA_Ability_Holdout_BladeFury>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4342AB0;
  }
  return p;
}


// CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1131, @0x0000000002a1f4a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1131, @0x0000000002a1f4c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Holdout_BladeFury::GetEntityClassInternal  (line 1131, @0x0000000002a36ce0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Holdout_BladeFury"
// globals: `guard variable for'CDOTA_Ability_Holdout_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClass, CDOTA_Ability_Holdout_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClass, __dso_handle, CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Holdout_BladeFury::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClassInfo, CDOTA_Ability_Holdout_BladeFury::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClassInfo
CEntityClass *__cdecl CDOTA_Ability_Holdout_BladeFury::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Holdout_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Holdout_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Holdout_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClass);
    CDOTA_Ability_Holdout_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClass._vptr_CEntityClass = off_4342A30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Holdout_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClass);
    __cxa_atexit(
      CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Holdout_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Holdout_BladeFuryClass != 0 )
    return &CDOTA_Ability_Holdout_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClass;
  if ( `guard variable for'CDOTA_Ability_Holdout_BladeFury::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Holdout_BladeFury::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Holdout_BladeFury::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClassInfo,
      "CDOTA_Ability_Holdout_BladeFury",
      "holdout_blade_fury",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Holdout_BladeFury::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClassInfo);
  }
  CDOTA_Ability_Holdout_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClass.m_pClassInfo = &CDOTA_Ability_Holdout_BladeFury::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClassInfo;
  CDOTA_Ability_Holdout_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClass.m_pBaseClassInfo = CDOTA_Ability_Holdout_BladeFury::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Holdout_BladeFuryClass = &CDOTA_Ability_Holdout_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClass;
  CDOTA_Ability_Holdout_BladeFury::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClassInfo.m_pClass = &CDOTA_Ability_Holdout_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClass;
  CDOTA_Ability_Holdout_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Holdout_BladeFuryClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Holdout_BladeFury::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_BladeFuryClass;
}


// CDOTA_Ability_Holdout_BladeFury::OnSpellStart  (line 1141, @0x00000000029e9780, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetInt, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_holdout_blade_fury", "modifier_heavens_halberd_debuff", "modifier_oracle_fates_edict"
void __fastcall CDOTA_Ability_Holdout_BladeFury::OnSpellStart(CDOTA_Ability_Holdout_BladeFury *const this)
{
  int LevelSpecialValue; // r14d
  float v3; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // r13
  CDOTA_BaseNPC *v7; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_holdout_blade_fury");
  KeyValues::SetInt(&kv, "damage", LevelSpecialValue);
  KeyValues::SetFloat(&kv, "duration", v3);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_heavens_halberd_debuff");
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v5, "modifier_oracle_fates_edict");
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v7, v6, this, "modifier_holdout_blade_fury", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Holdout_BladeFury::~CDOTA_Modifier_Holdout_BladeFury  (line 1161, @0x0000000002a12080, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Holdout_BladeFury::~CDOTA_Modifier_Holdout_BladeFury(
        CDOTA_Modifier_Holdout_BladeFury *const this)
{
  this->_vptr_CDOTA_Buff = &off_4343570;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Holdout_BladeFury::~CDOTA_Modifier_Holdout_BladeFury  (line 1161, @0x0000000002a120a0, libserver.so)  // inlines: ~CDOTA_Modifier_Holdout_BladeFury
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Holdout_BladeFury::~CDOTA_Modifier_Holdout_BladeFury(
        CDOTA_Modifier_Holdout_BladeFury *const this)
{
  this->_vptr_CDOTA_Buff = &off_4343570;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Holdout_BladeFury::IsPurgable  (line 1171, @0x0000000002a093c0, libserver.so)
bool __fastcall CDOTA_Modifier_Holdout_BladeFury::IsPurgable(CDOTA_Modifier_Holdout_BladeFury *const this)
{
  return 0;
}


// CDOTA_Modifier_Holdout_BladeFury::GetNumAvoidLocations  (line 1186, @0x0000000002a093d0, libserver.so)
int __fastcall CDOTA_Modifier_Holdout_BladeFury::GetNumAvoidLocations(CDOTA_Modifier_Holdout_BladeFury *const this)
{
  return 1;
}


// CDOTA_Modifier_Holdout_BladeFury::GetAvoidLocation  (line 1187, @0x0000000002a14aa0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_Holdout_BladeFury::GetAvoidLocation(
        CDOTA_Modifier_Holdout_BladeFury *const this,
        int iAvoid)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CDOTA_Modifier_Holdout_BladeFury::AvoidStrength  (line 1188, @0x0000000002a20fa0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Modifier_Holdout_BladeFury::AvoidStrength(
        CDOTA_Modifier_Holdout_BladeFury *const this,
        CDOTA_Bot *pBot)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rdi
  float v6; // xmm1_4
  float result; // xmm0_4

  m_Index = pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v6 = (CBaseEntity::GetHealth(m_pInstance) - 200.0) / 1300.0;
  if ( v6 < 0.0 )
    return 1.0;
  result = 0.69999999;
  if ( v6 <= 1.0 )
    return (v6 * -0.30000001) + 1.0;
  return result;
}


// CDOTA_Modifier_Holdout_BladeFury::GetAvoidRadius  (line 1189, @0x0000000002a093e0, libserver.so)
float __fastcall CDOTA_Modifier_Holdout_BladeFury::GetAvoidRadius(
        CDOTA_Modifier_Holdout_BladeFury *const this,
        int iAvoid)
{
  return this->blade_fury_radius + 100.0;
}


// CDOTA_Modifier_Holdout_BladeFury::IsAvoidMagical  (line 1190, @0x0000000002a09400, libserver.so)
bool __fastcall CDOTA_Modifier_Holdout_BladeFury::IsAvoidMagical(CDOTA_Modifier_Holdout_BladeFury *const this)
{
  return 1;
}


// CDOTA_Modifier_Holdout_BladeFury::IsPersistentAvoidance  (line 1191, @0x0000000002a09410, libserver.so)
bool __fastcall CDOTA_Modifier_Holdout_BladeFury::IsPersistentAvoidance(CDOTA_Modifier_Holdout_BladeFury *const this)
{
  return 0;
}


// CDOTA_Modifier_Holdout_BladeFury::OnCreated  (line 1211, @0x00000000029fb350, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, IsTrained
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::GetInt, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetEffectiveLevel, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_BaseNPC::StartGesture
// strings: "blade_fury_radius", "blade_fury_damage_tick", "bonus_evasion", "juggernaut_blade_dance", "blade_dance_crit_chance", "blade_dance_crit_mult"
void __fastcall CDOTA_Modifier_Holdout_BladeFury::OnCreated(
        CDOTA_Modifier_Holdout_BladeFury *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  int Int; // eax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v10; // xmm1_4
  CDOTABaseAbility *v11; // r12
  int LevelSpecialValue; // eax
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->blade_fury_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "blade_fury_radius", -1, 0);
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_10:
    this->blade_fury_damage_tick = 0.0;
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_4;
LABEL_11:
    this->bonus_evasion = 0;
    goto LABEL_5;
  }
  this->blade_fury_radius = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_10;
LABEL_3:
  this->blade_fury_damage_tick = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "blade_fury_damage_tick", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_11;
LABEL_4:
  this->bonus_evasion = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_evasion", -1, 0);
LABEL_5:
  Int = KeyValues::GetInt(pKV, "damage", 0);
  this->m_bTryToCrit = 0;
  this->damage = Int;
  this->blade_dance_crit_chance = 0;
  this->blade_dance_crit_mult = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "juggernaut_blade_dance", 0);
  v11 = AbilityByName;
  if ( AbilityByName != 0 && CDOTABaseAbility::GetEffectiveLevel(AbilityByName) >= 0 )
  {
    this->blade_dance_crit_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      v11,
                                      "blade_dance_crit_chance",
                                      -1,
                                      0);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v11, "blade_dance_crit_mult", -1, 0);
    this->m_bTryToCrit = 1;
    this->blade_dance_crit_mult = LevelSpecialValue;
  }
  CDOTA_Buff::StartIntervalThink(this, this->blade_fury_damage_tick, v10);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::StartGesture(Parent, 1516, 0.2, 0.2, 0, 0, 1.0);
}


// CDOTA_Modifier_Holdout_BladeFury::OnDestroy  (line 1247, @0x00000000029ba8b0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Holdout_BladeFury::OnDestroy(CDOTA_Modifier_Holdout_BladeFury *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(Parent, 1516);
}


// CDOTA_Modifier_Holdout_BladeFury::OnIntervalThink  (line 1263, @0x00000000029d9c60, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, RollPseudoRandomPercentage, CDOTA_Buff::GetCaster, ApplyDamage, CDOTA_BaseNPC::IsInvisibleTo, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (16 total)
// strings: "particles/units/heroes/hero_juggernaut/juggernaut_blade_fury_tgt.vpcf", "attach_hitloc", "Hero_Juggernaut.BladeFury.Impact"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Holdout_BladeFury::OnIntervalThink(CDOTA_Modifier_Holdout_BladeFury *const this)
{
  CDOTA_BaseNPC *Parent; // r12
  __m128i v3; // xmm3
  float v4; // r13d
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v8; // rax
  __int64 v9; // r13
  int v10; // r14d
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v17; // r15
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  CHandle<CBaseEntity> *v20; // rdx
  uint32 m_Index; // eax
  __int16 v22; // cx
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CDOTAPlayer *v26; // rax
  CDOTABaseAbility *pAbility; // [rsp+20h] [rbp-60h]
  int nFxIndexB; // [rsp+2Ch] [rbp-54h]
  int nFxIndexBa; // [rsp+2Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-50h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  pAbility = CDOTA_Buff::GetAbility(this);
  if ( pAbility != 0 && Parent != 0 )
  {
    *v3.m128i_i32 = this->blade_fury_radius;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    v5 = CDOTA_Buff::GetParent(this);
    v6 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
    v8 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, v5, v4, &entities, 2, 531, 0, 0, 0);
    if ( entities.m_Size > 0 )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        v20 = &entities.m_Memory.m_pMemory[v9];
        m_Index = entities.m_Memory.m_pMemory[v9].m_Index;
        if ( m_Index + 2 <= 1
          || (v22 = v20->m_Index,
              (v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v20->m_Index) >> 9) & 0x3F]) == 0)
          || (v24 = &v23[v22 & 0x1FF]) == 0
          || m_Index != v24->m_EHandle.m_Index
          || (m_pInstance = v24->m_pInstance, v24->m_pInstance == 0)
          || !m_pInstance->m_bIsDOTANPC )
        {
          m_pInstance = 0;
        }
        *&nFxIndexB = this->damage * this->blade_fury_damage_tick;
        if ( this->m_bTryToCrit )
        {
          v12 = CDOTA_Buff::GetParent(this);
          if ( RollPseudoRandomPercentage(
                 this->blade_dance_crit_chance,
                 DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_JUGG_CRIT,
                 v12) )
          {
            *&nFxIndexB = (this->blade_dance_crit_mult * *&nFxIndexB) / 100.0;
            Caster = CDOTA_Buff::GetCaster(this);
            v26 = (*(Caster->_vptr_IHandleEntity + 413))(Caster);
            SendOverheadEventMessage(v26, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_CRITICAL, m_pInstance, *&nFxIndexB, 0);
          }
        }
        v13 = CDOTA_Buff::GetCaster(this);
        ApplyDamage(v13, m_pInstance, pAbility, *&nFxIndexB, 2, 0);
        v14 = CDOTA_Buff::GetCaster(this);
        if ( !CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, v14) )
        {
          v15 = CDOTA_Buff::GetCaster(this);
          ParticleManager = GetParticleManager();
          nFxIndexBa = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_juggernaut/juggernaut_blade_fury_tgt.vpcf",
                         2,
                         v15,
                         0,
                         0);
          v17 = CBaseEntity::GetAbsOrigin(m_pInstance);
          v18 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v18, nFxIndexBa, 0, m_pInstance, 5, "attach_hitloc", *v17, 1);
          v19 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v19, nFxIndexBa);
        }
        CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Juggernaut.BladeFury.Impact", 0.0, 0, 0);
        ++v10;
        ++v9;
      }
      while ( entities.m_Size > v10 );
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Modifier_Holdout_BladeFury::CheckState  (line 1306, @0x00000000029b4da0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Holdout_BladeFury::CheckState(
        CDOTA_Modifier_Holdout_BladeFury *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x208uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFDF7LL;
}


// CDOTA_Modifier_Holdout_BladeFury::DeclareFunctions  (line 1316, @0x00000000029b4dc0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Holdout_BladeFury::GetModifierProcAttack_BonusDamage_Physical(CModifierParams const&), CDOTA_Modifier_Holdout_BladeFury::OnStateChanged(CModifierParams const&), CDOTA_Modifier_Holdout_BladeFury::OnTeleporting(CModifierParams const&), CDOTA_Modifier_Holdout_BladeFury::GetModifierEvasion_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Holdout_BladeFury::DeclareFunctions(CDOTA_Modifier_Holdout_BladeFury *const this)
{
  this->m_Functions[4].__pfn = CDOTA_Modifier_Holdout_BladeFury::GetModifierProcAttack_BonusDamage_Physical;
  this->m_Functions[4].__delta = 0;
  this->m_Functions[135].__delta = 0;
  this->m_Functions[135].__pfn = CDOTA_Modifier_Holdout_BladeFury::OnStateChanged;
  this->m_Functions[141].__pfn = CDOTA_Modifier_Holdout_BladeFury::OnTeleporting;
  this->m_Functions[141].__delta = 0;
  this->m_Functions[40].__pfn = CDOTA_Modifier_Holdout_BladeFury::GetModifierEvasion_Constant;
  this->m_Functions[40].__delta = 0;
}


// CDOTA_Modifier_Holdout_BladeFury::OnTeleporting  (line 1327, @0x00000000029db6d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, Purge, SpeakConcept, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::SpeakConcept, CResponseCriteriaSet::~CResponseCriteriaSet, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_BladeFury::OnTeleporting(
        CDOTA_Modifier_Holdout_BladeFury *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v11; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-80h] BYREF
  CResponseCriteriaSet criteria; // [rsp+40h] [rbp-60h] BYREF

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hunit.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          entities.m_Size = 0;
          entities.m_Memory.m_pMemory = 0;
          entities.m_Memory.m_nAllocationCount = 0;
          entities.m_Memory.m_nGrowSize = 0;
          Caster = CDOTA_Buff::GetCaster(this);
          v9 = CDOTA_Buff::GetCaster(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
          v11 = CDOTA_Buff::GetCaster(this);
          FindUnitsInRadius(v11->m_iTeamNum.m_Value, AbsOrigin, Caster, 1200.0, &entities, 2, 1, 128, 0, 0);
          if ( entities.m_Size > 0 )
          {
            CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
            CResponseCriteriaSet::AppendCriteria(&criteria, "teleporting", "1", 1.0);
            m_pSpeech = CDOTA_Buff::GetParent(this)->m_Speech.m_pSpeech;
            if ( m_pSpeech != 0 )
              CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
            CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
          }
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
          if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
            if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Holdout_BladeFury::GetModifierProcAttack_BonusDamage_Physical  (line 1350, @0x00000000029c2440, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_BladeFury::GetModifierProcAttack_BonusDamage_Physical(
        CDOTA_Modifier_Holdout_BladeFury *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax
  int m_Id; // eax
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->htarget.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 1uLL;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 )
    return 1uLL;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1uLL;
  m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
  if ( (m_Id & 1) == 0 && (m_Id & 0x180) == 0 )
    return 1uLL;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(_mm_xor_ps(LODWORD(params->fDamage), 0x80000000)) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Holdout_BladeFury::OnStateChanged  (line 1366, @0x00000000029c2e60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy
// strings: "modifier_faceless_void_chronosphere_freeze", "modifier_tiny_toss", "modifier_enigma_black_hole_pull", "modifier_silencer_global_silence"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_BladeFury::OnStateChanged(
        CDOTA_Modifier_Holdout_BladeFury *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[params->hunit.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    return 1uLL;
  if ( !m_pInstance->m_bIsDOTANPC )
    return 1uLL;
  if ( CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  Parent = CDOTA_Buff::GetParent(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_faceless_void_chronosphere_freeze", 0) == 0 )
  {
    v9 = CDOTA_Buff::GetParent(this);
    if ( CDOTA_BaseNPC::FindModifierByName(v9, "modifier_tiny_toss", 0) == 0 )
    {
      v10 = CDOTA_Buff::GetParent(this);
      if ( CDOTA_BaseNPC::FindModifierByName(v10, "modifier_enigma_black_hole_pull", 0) == 0 )
      {
        v11 = CDOTA_Buff::GetParent(this);
        if ( CDOTA_BaseNPC::FindModifierByName(v11, "modifier_silencer_global_silence", 0) == 0 )
          return 1uLL;
      }
    }
  }
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_Holdout_BladeFury::GetModifierEvasion_Constant  (line 1385, @0x00000000029b4e30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_BladeFury::GetModifierEvasion_Constant(
        CDOTA_Modifier_Holdout_BladeFury *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_evasion;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Holdout_Omnislash::~CDOTA_Ability_Holdout_Omnislash  (line 1396, @0x0000000002a33180, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Holdout_Omnislash::~CDOTA_Ability_Holdout_Omnislash(
        CDOTA_Ability_Holdout_Omnislash *const this)
{
  this->_vptr_IHandleEntity = &off_43438D0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hEntities);
  if ( (this->m_hEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntities.m_Memory),
        (this->m_hEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntities.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Holdout_Omnislash::~CDOTA_Ability_Holdout_Omnislash  (line 1396, @0x0000000002a33730, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Holdout_Omnislash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Holdout_Omnislash::~CDOTA_Ability_Holdout_Omnislash(
        CDOTA_Ability_Holdout_Omnislash *const this)
{
  this->_vptr_IHandleEntity = &off_43438D0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hEntities);
  if ( (this->m_hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntities.m_Memory);
    if ( (this->m_hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntities.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Holdout_Omnislash::Schema_DynamicBinding  (line 1398, @0x0000000002a09420, libserver.so)
// globals: CDOTA_Ability_Holdout_Omnislash::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Holdout_Omnislash::Schema_DynamicBinding(
        const CDOTA_Ability_Holdout_Omnislash *const this)
{
  return CDOTA_Ability_Holdout_Omnislash::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1398, @0x0000000002a09430, libserver.so)
// globals: CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::DestructInstance  (line 1398, @0x0000000002a09440, libserver.so)  // inlines: Destruct<CDOTA_Ability_Holdout_Omnislash>
void __fastcall CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::FreeInstance  (line 1398, @0x0000000002a09460, libserver.so)
void __fastcall CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::CanAllocate  (line 1398, @0x0000000002a09480, libserver.so)
bool __fastcall CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1398, @0x0000000002a09490, libserver.so)
// globals: CDOTA_Ability_Holdout_Omnislash::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Holdout_Omnislash::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::AllocateInstance  (line 1398, @0x0000000002a0f7c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::ConstructInstance  (line 1398, @0x0000000002a1dee0, libserver.so)  // inlines: CDOTA_Ability_Holdout_Omnislash, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Holdout_Omnislash>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 244) = 0;
    *p = &off_43438D0;
    *(p + 123) = 0;
    *(p + 248) = 0;
    *(p + 249) = 0;
  }
  return p;
}


// CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1398, @0x0000000002a1f4f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1398, @0x0000000002a1f510, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Holdout_Omnislash::GetEntityClassInternal  (line 1398, @0x0000000002a36e30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Holdout_Omnislash"
// globals: `guard variable for'CDOTA_Ability_Holdout_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClass, CDOTA_Ability_Holdout_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClass, __dso_handle, CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Holdout_Omnislash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClassInfo, CDOTA_Ability_Holdout_Omnislash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClassInfo
CEntityClass *__cdecl CDOTA_Ability_Holdout_Omnislash::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Holdout_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Holdout_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Holdout_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClass);
    CDOTA_Ability_Holdout_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClass._vptr_CEntityClass = off_4343850;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Holdout_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClass);
    __cxa_atexit(
      CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Holdout_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Holdout_OmnislashClass != 0 )
    return &CDOTA_Ability_Holdout_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClass;
  if ( `guard variable for'CDOTA_Ability_Holdout_Omnislash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Holdout_Omnislash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Holdout_Omnislash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClassInfo,
      "CDOTA_Ability_Holdout_Omnislash",
      "holdout_omnislash",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Holdout_Omnislash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClassInfo);
  }
  CDOTA_Ability_Holdout_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClass.m_pClassInfo = &CDOTA_Ability_Holdout_Omnislash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClassInfo;
  CDOTA_Ability_Holdout_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClass.m_pBaseClassInfo = CDOTA_Ability_Holdout_Omnislash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Holdout_OmnislashClass = &CDOTA_Ability_Holdout_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClass;
  CDOTA_Ability_Holdout_Omnislash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClassInfo.m_pClass = &CDOTA_Ability_Holdout_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClass;
  CDOTA_Ability_Holdout_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Holdout_OmnislashClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Holdout_Omnislash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_OmnislashClass;
}


// CDOTA_Ability_Holdout_Omnislash::YouForgotToImplementOrDeclareServerClass  (line 1424, @0x00000000029b4e50, libserver.so)
int __fastcall CDOTA_Ability_Holdout_Omnislash::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Holdout_Omnislash *const this)
{
  return 0;
}


// CDOTA_Ability_Holdout_Omnislash::GetServerClass  (line 1424, @0x00000000029c95b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Holdout_Omnislash::GetServerClass(CDOTA_Ability_Holdout_Omnislash *const this)
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


// CDOTA_Ability_Holdout_Omnislash::OnSpellStart  (line 1433, @0x00000000029e37a0, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, Length2D, Set, VectorMultiply, VectorNormalize2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, VectorNormalize, CDOTABaseAbility::GetCursorPosition, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_ProjectileManager::CreateLinearProjectile (19 total)
// strings: "image_travel_speed", "image_radius", "jugg_travel_speed", "juggernaut_omnislash_ascension", "holdout_juggernaut_omnislash_image", "modifier_holdout_omnislash"
void __fastcall CDOTA_Ability_Holdout_Omnislash::OnSpellStart(CDOTA_Ability_Holdout_Omnislash *const this)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hEntities; // rdi
  CBaseEntity *CursorTarget; // rax
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm0_4
  vec_t z; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v9; // rax
  vec_t v10; // xmm0_4
  vec_t v11; // xmm1_4
  CDOTA_BaseNPC *v12; // rax
  const Vector *v13; // r12
  CDOTA_BaseNPC *v14; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v16; // r14
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  vec_t v19; // xmm1_4
  vec_t v20; // xmm0_4
  CDOTA_BaseNPC *v21; // rax
  Vector *v22; // rax
  float v23; // xmm2_4
  float v24; // xmm1_4
  float image_travel_speed; // xmm0_4
  vec_t v26; // xmm2_4
  vec_t v27; // xmm1_4
  vec_t v28; // xmm0_4
  CDOTA_BaseNPC *v29; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v31; // cx
  CDOTA_BaseNPC *v32; // r13
  CDOTA_BaseNPC *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  const QAngle *AbsAngles; // rax
  float fLength; // [rsp+Ch] [rbp-D4h]
  sLinearProjectileCreateInfo info; // [rsp+20h] [rbp-C0h] BYREF
  KeyValues kv; // [rsp+A0h] [rbp-40h] BYREF
  unsigned __int64 v39; // [rsp+B8h] [rbp-28h]
  Vector CursorPosition; // 0:kr14_12.12

  p_m_hEntities = &this->m_hEntities;
  p_m_hEntities[-3].m_Memory.m_nGrowSize = 0;
  v39 = __readfsqword(0x28u);
  *(&p_m_hEntities[-2].m_Size + 4) = 0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(p_m_hEntities);
  this->image_travel_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "image_travel_speed", -1, 0);
  this->image_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "image_radius", -1, 0);
  this->jugg_travel_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "jugg_travel_speed", -1, 0);
  this->range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "range", -1, 0);
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(CursorTarget);
    x = AbsOrigin->x;
    y = AbsOrigin->y;
    z = AbsOrigin->z;
  }
  else
  {
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    z = CursorPosition.z;
    x = CursorPosition.x;
    y = CursorPosition.y;
  }
  this->m_vPos.x = x;
  this->m_vPos.y = y;
  this->m_vPos.z = z;
  Caster = CDOTABaseAbility::GetCaster(this);
  v9 = CBaseEntity::GetAbsOrigin(Caster);
  v10 = this->m_vPos.y - v9->y;
  v11 = this->m_vPos.x - v9->x;
  this->m_vCastDir.z = 0.0;
  this->m_vCastDir.y = v10;
  this->m_vCastDir.x = v11;
  fLength = VectorNormalize(&this->m_vCastDir);
  v12 = CDOTABaseAbility::GetCaster(this);
  v13 = CBaseEntity::GetAbsOrigin(v12);
  *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
  this->m_flRange = fminf(
                      this->range,
                      fsqrt(
                        ((*&info.pszEffectName - v13->x) * (*&info.pszEffectName - v13->x))
                      + ((*(&info.pszEffectName + 1) - v13->y) * (*(&info.pszEffectName + 1) - v13->y))));
  v14 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v14) = CDOTA_ParticleManager::CreateParticle(ParticleManager, "juggernaut_omnislash_ascension", 1, v14, 0, 0);
  v16 = CDOTABaseAbility::GetCaster(this);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v17, v14, 0, v16, 1, 0, vec3_invalid, 1);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v18, v14);
  if ( fLength < 0.0099999998 )
  {
    v34 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v34);
    AngleVectors(AbsAngles, &this->m_vCastDir, 0, 0);
  }
  info.bHasFrontalCone = 1;
  info.hSource.m_Index = -1;
  info.fDistance = 0.0;
  info.fStartRadius = 0.0;
  info.bCheckStartPosition = 0;
  v19 = vec3_origin.y;
  info.bProvidesVision = 0;
  v20 = vec3_origin.z;
  info.vSpawnOrigin.x = vec3_origin.x;
  info.vSpawnOrigin.y = v19;
  info.vSpawnOrigin.z = v20;
  info.vVelocity.x = vec3_origin.x;
  info.vVelocity.y = v19;
  info.vVelocity.z = v20;
  info.vAcceleration.x = vec3_origin.x;
  info.vAcceleration.y = v19;
  info.vAcceleration.z = v20;
  info.fEndRadius = 0.0;
  info.iUnitTargetTeam = 0;
  info.iUnitTargetType = 0;
  info.iUnitTargetFlags = 0;
  info.iVisionTeamNumber = -1;
  info.iVisionRadius = -1;
  info.bDrawsOnMinimap = 0;
  info.bVisibleToEnemies = 1;
  info.bIgnoreSource = 0;
  info.bStickyFoWReveal = 0;
  info.pKVExtraData = 0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  info.pAbility = this;
  info.pszEffectName = "holdout_juggernaut_omnislash_image";
  v21 = CDOTABaseAbility::GetCaster(this);
  v22 = CBaseEntity::GetAbsOrigin(v21);
  v23 = this->m_vCastDir.y;
  v24 = this->m_vCastDir.z;
  info.vSpawnOrigin = *v22;
  image_travel_speed = this->image_travel_speed;
  v26 = v23 * image_travel_speed;
  v27 = v24 * image_travel_speed;
  v28 = image_travel_speed * this->m_vCastDir.x;
  info.vVelocity.y = v26;
  info.vVelocity.z = v27;
  info.vVelocity.x = v28;
  info.fDistance = this->m_flRange;
  info.fStartRadius = this->image_radius;
  info.fEndRadius = info.fStartRadius;
  v29 = CDOTABaseAbility::GetCaster(this);
  if ( v29 != 0 && (m_pEntity = v29->m_pEntity) != 0 )
  {
    v31 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v31 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v31 & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 19;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  KeyValues::KeyValues(&kv, "modifier_holdout_omnislash");
  v32 = CDOTABaseAbility::GetCaster(this);
  v33 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v33, v32, this, "modifier_holdout_omnislash", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Holdout_Omnislash::OnProjectileHit  (line 1489, @0x00000000029fe650, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetSerialNumber, GrowMemory, HasElement, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, Set, ToDOTABaseNPC, VectorMultiply, operator CBaseEntity*, operator CEntityInstance*, operator*, operator=, operator==<CBaseEntity>, operator[], sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ProjectileManager::CreateLinearProjectile, CDOTA_BaseNPC::RemoveModifierByName, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, FindClearSpaceForUnit, CDOTA_BaseNPC::CreateAttackRecord, CDOTA_BaseNPC::PerformAttack (17 total)
// strings: "modifier_holdout_omnislash", "juggernaut_fs_omnislash_tgt", "attach_hitloc", "Hero_Juggernaut.Holdout.OmniSlash", "particles/units/heroes/hero_juggernaut/juggernaut_omni_slash_trail.vpcf", "particles/units/heroes/hero_juggernaut/juggernaut_omni_slash_tgt.vpcf" (7 total)
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CDOTA_Ability_Holdout_Omnislash::OnProjectileHit(
        CDOTA_Ability_Holdout_Omnislash *const this,
        const CHandle<CBaseEntity> *hTarget,
        const Vector *const vLocation)
{
  CHandle<CBaseEntity> v5; // eax
  CConcreteEntityList *v6; // rdx
  unsigned int v7; // r8d
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rcx
  __int64 v10; // rsi
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v16; // rax
  const Vector *v17; // rax
  float v18; // xmm2_4
  float v19; // xmm1_4
  vec_t v20; // xmm0_4
  float jugg_travel_speed; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  vec_t v24; // xmm0_4
  CDOTA_BaseNPC *v25; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v27; // cx
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v30; // rax
  CEntityInstance *m_pInstance; // r13
  __int64 m_Size; // r14
  CHandle<CBaseEntity> *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  int v35; // r14d
  const Vector *v36; // r15
  CDOTA_ParticleManager *v37; // rax
  CDOTA_ParticleManager *v38; // rax
  CDOTA_BaseNPC *Caster; // rax
  Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v41; // rax
  CDOTA_BaseNPC *v42; // rax
  CDOTA_AttackRecord *AttackRecord; // r14
  CDOTA_BaseNPC *v44; // rax
  CDOTA_BaseNPC *v45; // rax
  CDOTA_BaseNPC *v46; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v49; // rax
  const CGameSceneNode *m_pParent; // rdi
  const Vector *v51; // r14
  CDOTA_ParticleManager *v52; // rax
  CDOTA_ParticleManager *v53; // rax
  CDOTA_BaseNPC *v54; // r14
  CDOTA_ParticleManager *v55; // rax
  const Vector *v56; // r15
  CDOTA_ParticleManager *v57; // rax
  CDOTA_ParticleManager *v58; // rax
  CDOTA_ParticleManager *v59; // rax
  int v60; // r13d
  CDOTA_BaseNPC *v61; // rax
  const Vector *v62; // r14
  CDOTA_BaseNPC *v63; // r15
  CDOTA_ParticleManager *v64; // rax
  CDOTA_ParticleManager *v65; // rax
  const CGameSceneNode *OwnerEntity; // rdi
  const Vector *v67; // r14
  CDOTA_ParticleManager *v68; // rax
  CDOTA_ParticleManager *v69; // rax
  __int128 vOldOrigin; // [rsp+10h] [rbp-B0h] OVERLAPPED BYREF
  vec_t x; // [rsp+20h] [rbp-A0h]
  vec_t v72; // [rsp+24h] [rbp-9Ch]
  vec_t v73; // [rsp+28h] [rbp-98h]
  vec_t v74; // [rsp+2Ch] [rbp-94h]
  float v75; // [rsp+30h] [rbp-90h]
  float v76; // [rsp+34h] [rbp-8Ch]
  vec_t v77; // [rsp+38h] [rbp-88h]
  vec_t v78; // [rsp+3Ch] [rbp-84h]
  vec_t v79; // [rsp+40h] [rbp-80h]
  float m_flRange; // [rsp+44h] [rbp-7Ch]
  float v81; // [rsp+48h] [rbp-78h]
  float v82; // [rsp+4Ch] [rbp-74h]
  char v83; // [rsp+50h] [rbp-70h]
  char v84; // [rsp+51h] [rbp-6Fh]
  int v85; // [rsp+54h] [rbp-6Ch]
  int v86; // [rsp+58h] [rbp-68h]
  int v87; // [rsp+5Ch] [rbp-64h]
  int v88; // [rsp+60h] [rbp-60h]
  char v89; // [rsp+64h] [rbp-5Ch]
  int v90; // [rsp+68h] [rbp-58h]
  int v91; // [rsp+6Ch] [rbp-54h]
  char v92; // [rsp+70h] [rbp-50h]
  char v93; // [rsp+71h] [rbp-4Fh]
  char v94; // [rsp+72h] [rbp-4Eh]
  char v95; // [rsp+73h] [rbp-4Dh]
  int v96; // [rsp+74h] [rbp-4Ch]
  int v97; // [rsp+78h] [rbp-48h]
  __int64 v98; // [rsp+80h] [rbp-40h]

  v5.m_Index = hTarget->m_Index;
  v6 = CEntityHandle::gm_pEntityList;
  v7 = hTarget->m_Index + 2;
  if ( v7 > 1 )
  {
    m_Index_low = LOWORD(hTarget->m_Index);
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = m_Index_low & 0x1FF;
      v11 = &v9[v10];
      if ( v11 != 0 && v5.m_Index == v11->m_EHandle.m_Index )
      {
        m_pInstance = v11->m_pInstance;
        if ( v11->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[58]._vptr_IHandleEntity & 4) == 0 )
        {
          if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(v11->m_pInstance, v10 * 120, CEntityHandle::gm_pEntityList) != 0
            && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
            && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0 )
          {
            if ( this->m_bFirstProjectileFinished
              && CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                   &this->m_hEntities,
                   hTarget) >= 0 )
            {
              Caster = CDOTABaseAbility::GetCaster(this);
              *&vOldOrigin = *CBaseEntity::GetAbsOrigin(Caster);
              AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
              v41 = CDOTABaseAbility::GetCaster(this);
              FindClearSpaceForUnit(v41, *AbsOrigin, 1);
              v42 = CDOTABaseAbility::GetCaster(this);
              AttackRecord = CDOTA_BaseNPC::CreateAttackRecord(v42, m_pInstance, 0, 1, 0, 0, 0);
              v44 = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::PerformAttack(v44, AttackRecord, m_pInstance, 1, 1, 1, 0);
              v45 = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::UnitEmitSound(v45, "Hero_Juggernaut.Holdout.OmniSlash", 0.0, 0, 0);
              v46 = CDOTABaseAbility::GetCaster(this);
              ParticleManager = GetParticleManager();
              Particle = CDOTA_ParticleManager::CreateParticle(
                           ParticleManager,
                           "particles/units/heroes/hero_juggernaut/juggernaut_omni_slash_trail.vpcf",
                           2,
                           v46,
                           0,
                           0);
              v49 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(v49, Particle, 0, *&vOldOrigin, *(&vOldOrigin + 2));
              m_pParent = this->m_pGameSceneNode->m_pParent;
              if ( m_pParent != 0 )
                m_pParent = CGameSceneNode::GetOwnerEntity(m_pParent);
              v51 = CBaseEntity::GetAbsOrigin(m_pParent);
              v52 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(v52, Particle, 1, *&v51->x, v51->z);
              v53 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v53, Particle);
              v54 = CDOTABaseAbility::GetCaster(this);
              v55 = GetParticleManager();
              LODWORD(v54) = CDOTA_ParticleManager::CreateParticle(
                               v55,
                               "particles/units/heroes/hero_juggernaut/juggernaut_omni_slash_tgt.vpcf",
                               2,
                               v54,
                               0,
                               0);
              v56 = CBaseEntity::GetAbsOrigin(m_pInstance);
              v57 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControlEnt(v57, v54, 0, m_pInstance, 5, "attach_hitloc", *v56, 1);
              v58 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v58, v54);
              if ( RollPercentage(40) && this->juggcounter <= 5 )
              {
                v59 = GetParticleManager();
                v60 = CDOTA_ParticleManager::CreateParticle(v59, "juggernaut_fs_omnislash_slashers", 2, 0, 0, 0);
                v61 = CDOTABaseAbility::GetCaster(this);
                v62 = CBaseEntity::GetAbsOrigin(v61);
                v63 = CDOTABaseAbility::GetCaster(this);
                v64 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v64, v60, 0, v63, 1, 0, *v62, 1);
                v65 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControl(v65, v60, 0, *&vOldOrigin, *(&vOldOrigin + 2));
                OwnerEntity = this->m_pGameSceneNode->m_pParent;
                if ( OwnerEntity != 0 )
                  OwnerEntity = CGameSceneNode::GetOwnerEntity(OwnerEntity);
                v67 = CBaseEntity::GetAbsOrigin(OwnerEntity);
                v68 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControl(v68, v60, 1, *&v67->x, v67->z);
                v69 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v69, v60);
                ++this->juggcounter;
              }
            }
            else
            {
              m_Size = this->m_hEntities.m_Size;
              if ( m_Size == this->m_hEntities.m_Memory.m_nAllocationCount )
                CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hEntities.m_Memory, 1);
              ++this->m_hEntities.m_Size;
              v33 = &this->m_hEntities.m_Memory.m_pMemory[m_Size];
              if ( v33 != 0 )
                v33->m_Index = hTarget->m_Index;
              v34 = GetParticleManager();
              v35 = CDOTA_ParticleManager::CreateParticle(v34, "juggernaut_fs_omnislash_tgt", 2, 0, 0, 0);
              v36 = CBaseEntity::GetAbsOrigin(m_pInstance);
              v37 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControlEnt(v37, v35, 0, m_pInstance, 5, "attach_hitloc", *v36, 1);
              v38 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v38, v35);
            }
          }
          v5.m_Index = hTarget->m_Index;
          v6 = CEntityHandle::gm_pEntityList;
          v7 = hTarget->m_Index + 2;
        }
      }
    }
  }
  if ( v7 <= 1
    || (v12 = v6->m_pIdentityChunks[(LOWORD(hTarget->m_Index) >> 9) & 0x3F]) == 0
    || (v13 = &v12[hTarget->m_Index & 0x1FF]) == 0
    || v13->m_EHandle.m_Index != v5.m_Index
    || v13->m_pInstance == 0 )
  {
    if ( this->m_bFirstProjectileFinished )
    {
      v30 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveModifierByName(v30, "modifier_holdout_omnislash");
    }
    else
    {
      v83 = 1;
      this->m_bFirstProjectileFinished = 1;
      v85 = -1;
      *&vOldOrigin = 0;
      m_flRange = 0.0;
      y = vec3_origin.y;
      v81 = 0.0;
      z = vec3_origin.z;
      x = vec3_origin.x;
      v72 = y;
      v73 = z;
      v74 = vec3_origin.x;
      v75 = y;
      v76 = z;
      v77 = vec3_origin.x;
      v78 = y;
      v79 = z;
      v82 = 0.0;
      v84 = 0;
      v86 = 0;
      v87 = 0;
      v88 = 0;
      v89 = 0;
      v90 = -1;
      v91 = -1;
      v92 = 0;
      v93 = 1;
      v94 = 0;
      v95 = 0;
      v98 = 0;
      v96 = 0;
      v97 = 0;
      *(&vOldOrigin + 1) = this;
      v16 = CDOTABaseAbility::GetCaster(this);
      v17 = CBaseEntity::GetAbsOrigin(v16);
      v18 = this->m_vCastDir.y;
      v19 = this->m_vCastDir.z;
      x = v17->x;
      v72 = v17->y;
      v20 = v17->z;
      LODWORD(v17) = this->image_radius;
      v73 = v20;
      jugg_travel_speed = this->jugg_travel_speed;
      v22 = v18 * jugg_travel_speed;
      v23 = v19 * jugg_travel_speed;
      v24 = jugg_travel_speed * this->m_vCastDir.x;
      v75 = v22;
      v76 = v23;
      v74 = v24;
      m_flRange = this->m_flRange;
      v81 = (2 * v17);
      v82 = v81;
      v25 = CDOTABaseAbility::GetCaster(this);
      if ( v25 != 0 && (m_pEntity = v25->m_pEntity) != 0 )
      {
        v27 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v27 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v85 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v27 & 0x7FFF;
      }
      else
      {
        v85 = -1;
      }
      v86 = 2;
      v87 = 19;
      CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &vOldOrigin);
      v28 = CDOTABaseAbility::GetCaster(this);
      this->m_vJuggStartLocation = *CBaseEntity::GetAbsOrigin(v28);
    }
  }
  return 0;
}


// CDOTA_Modifier_Holdout_Omnislash::~CDOTA_Modifier_Holdout_Omnislash  (line 1570, @0x0000000002a12030, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Holdout_Omnislash::~CDOTA_Modifier_Holdout_Omnislash(
        CDOTA_Modifier_Holdout_Omnislash *const this)
{
  this->_vptr_CDOTA_Buff = &off_4344390;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Holdout_Omnislash::~CDOTA_Modifier_Holdout_Omnislash  (line 1570, @0x0000000002a12050, libserver.so)  // inlines: ~CDOTA_Modifier_Holdout_Omnislash
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Holdout_Omnislash::~CDOTA_Modifier_Holdout_Omnislash(
        CDOTA_Modifier_Holdout_Omnislash *const this)
{
  this->_vptr_CDOTA_Buff = &off_4344390;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Holdout_Omnislash::GetEffectName  (line 1583, @0x0000000002a094a0, libserver.so)
// strings: "particles/units/heroes/hero_juggernaut/juggernaut_omnislash_light.vpcf"
const char *__fastcall CDOTA_Modifier_Holdout_Omnislash::GetEffectName(CDOTA_Modifier_Holdout_Omnislash *const this)
{
  return "particles/units/heroes/hero_juggernaut/juggernaut_omnislash_light.vpcf";
}


// CDOTA_Modifier_Holdout_Omnislash::GetStatusEffectName  (line 1584, @0x0000000002a094b0, libserver.so)
// strings: "particles/status_fx/status_effect_omnislash.vpcf"
const char *__fastcall CDOTA_Modifier_Holdout_Omnislash::GetStatusEffectName(
        CDOTA_Modifier_Holdout_Omnislash *const this)
{
  return "particles/status_fx/status_effect_omnislash.vpcf";
}


// CDOTA_Modifier_Holdout_Omnislash::StatusEffectPriority  (line 1585, @0x0000000002a094c0, libserver.so)
int __fastcall CDOTA_Modifier_Holdout_Omnislash::StatusEffectPriority(CDOTA_Modifier_Holdout_Omnislash *const this)
{
  return 100;
}


// CDOTA_Modifier_Holdout_Omnislash::OnCreated  (line 1598, @0x00000000029f7740, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "animation_rate"
void __fastcall CDOTA_Modifier_Holdout_Omnislash::OnCreated(
        CDOTA_Modifier_Holdout_Omnislash *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->animation_rate = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "animation_rate", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_damage", -1, 0);
      return;
    }
  }
  else
  {
    this->animation_rate = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_damage = 0;
}


// CDOTA_Modifier_Holdout_Omnislash::DeclareFunctions  (line 1606, @0x00000000029b4e60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Holdout_Omnislash::GetOverrideAnimation(CModifierParams const&), CDOTA_Modifier_Holdout_Omnislash::GetOverrideAnimationRate(CModifierParams const&), CDOTA_Modifier_Holdout_Omnislash::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Holdout_Omnislash::DeclareFunctions(CDOTA_Modifier_Holdout_Omnislash *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Holdout_Omnislash::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[92].__delta = 0;
  this->m_Functions[92].__pfn = CDOTA_Modifier_Holdout_Omnislash::GetOverrideAnimationRate;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Holdout_Omnislash::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Holdout_Omnislash::GetModifierPreAttack_BonusDamage  (line 1615, @0x00000000029b4ec0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_Omnislash::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Holdout_Omnislash *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Holdout_Omnislash::GetOverrideAnimation  (line 1622, @0x00000000029b4ee0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_Omnislash::GetOverrideAnimation(
        CDOTA_Modifier_Holdout_Omnislash *const this,
        const CModifierParams *const params)
{
  return 0x44BBE00000000001uLL;
}


// CDOTA_Modifier_Holdout_Omnislash::GetOverrideAnimationRate  (line 1629, @0x00000000029b4f00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_Omnislash::GetOverrideAnimationRate(
        CDOTA_Modifier_Holdout_Omnislash *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->animation_rate) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Holdout_Omnislash::CheckState  (line 1637, @0x00000000029b4f20, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Holdout_Omnislash::CheckState(
        CDOTA_Modifier_Holdout_Omnislash *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x804301uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFF7FBCFELL;
}


