// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:33
class CDOTA_Unit_Hero_Lycan : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Lycan(CDOTA_Unit_Hero_Lycan &);
	CDOTA_Unit_Hero_Lycan(CDOTA_Unit_Hero_Lycan &);
	CDOTA_Unit_Hero_Lycan();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual bool UsedGestureBasedAttackAnimation();
	virtual ~CDOTA_Unit_Hero_Lycan();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[92] Event_Killed
	// vtable[159] ModifyOrAppendCriteria
	// vtable[439] UsedGestureBasedAttackAnimation
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:49
class C_CDOTA_Unit_Hero_Lycan_MapInstall {
	C_CDOTA_Unit_Hero_Lycan_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:110
class CDOTA_Ability_Lycan_SummonWolves : public CDOTABaseAbility {
public:

private:

	char szUnitName[260];  // +0x390
	int wolf_index;  // +0x494
	float wolf_duration;  // +0x498

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
	CDOTA_Ability_Lycan_SummonWolves(CDOTA_Ability_Lycan_SummonWolves &);
	CDOTA_Ability_Lycan_SummonWolves(CDOTA_Ability_Lycan_SummonWolves &);
	CDOTA_Ability_Lycan_SummonWolves();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Lycan_SummonWolves();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 1208
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:126
class C_CDOTA_Ability_Lycan_SummonWolves_MapInstall {
	C_CDOTA_Ability_Lycan_SummonWolves_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:264
class CDOTA_Modifier_Lycan_SummonWolves_Bash : public CDOTA_Buff {
public:

private:

	int bash_chance;  // +0xba8
	float bash_duration;  // +0xbac
	CDOTA_Modifier_Lycan_SummonWolves_Bash();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ~CDOTA_Modifier_Lycan_SummonWolves_Bash();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:339
class CDOTA_Ability_Lycan_SummonWolves_CriticalStrike : public CDOTABaseAbility {
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
	CDOTA_Ability_Lycan_SummonWolves_CriticalStrike(CDOTA_Ability_Lycan_SummonWolves_CriticalStrike &);
	CDOTA_Ability_Lycan_SummonWolves_CriticalStrike(CDOTA_Ability_Lycan_SummonWolves_CriticalStrike &);
	CDOTA_Ability_Lycan_SummonWolves_CriticalStrike();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Lycan_SummonWolves_CriticalStrike();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:351
class CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike : public CDOTA_Buff {
public:

private:

	int maim_chance;  // +0xba8
	float maim_duration;  // +0xbac
	CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ~CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:420
class CDOTA_Modifier_Lycan_SummonWolves_Maim : public CDOTA_Buff {
public:

private:

	int maim_movement_speed;  // +0xba8
	int maim_attack_speed;  // +0xbac
	int maim_damage;  // +0xbb0
	CDOTA_Modifier_Lycan_SummonWolves_Maim();
	virtual void DeclareFunctions();
	ModifierVariant_t Tooltip(const CModifierParams &);
	virtual void OnCreated(KeyValues *);
	virtual bool IsDebuff();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Lycan_SummonWolves_Maim();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[12] IsDebuff
	// vtable[56] OnIntervalThink
	// vtable[67] GetEffectName
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:495
class CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility : public CDOTABaseAbility {
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
	CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility(CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility &);
	CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility(CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility &);
	CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:508
class CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility : public CDOTA_Modifier_PersistentInvisibility {
public:

	CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:570
class CDOTA_Ability_Lycan_Howl : public CDOTABaseAbility {
public:

private:

	float howl_duration;  // +0x390
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
	CDOTA_Ability_Lycan_Howl(CDOTA_Ability_Lycan_Howl &);
	CDOTA_Ability_Lycan_Howl(CDOTA_Ability_Lycan_Howl &);
	CDOTA_Ability_Lycan_Howl();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Lycan_Howl();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:585
class C_CDOTA_Ability_Lycan_Howl_MapInstall {
	C_CDOTA_Ability_Lycan_Howl_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:653
class CDOTA_Modifier_Lycan_Howl : public CDOTA_Buff {
public:

private:

	int hero_bonus_damage;  // +0xba8
	int unit_bonus_damage;  // +0xbac
	int hero_bonus_hp;  // +0xbb0
	int unit_bonus_hp;  // +0xbb4
	int bonus_hp_applied;  // +0xbb8
	CDOTA_Modifier_Lycan_Howl();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnRemoved();
	virtual void DeclareFunctions();
	virtual const char * GetEffectName();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierExtraHealthBonus(const CModifierParams &);
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Lycan_Howl();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[59] OnRemoved
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[7] GetAttributes
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:821
class CDOTA_Ability_Lycan_FeralImpulse : public CDOTABaseAbility {
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
	CDOTA_Ability_Lycan_FeralImpulse(CDOTA_Ability_Lycan_FeralImpulse &);
	CDOTA_Ability_Lycan_FeralImpulse(CDOTA_Ability_Lycan_FeralImpulse &);
	CDOTA_Ability_Lycan_FeralImpulse();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Lycan_FeralImpulse();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:836
class C_CDOTA_Ability_Lycan_FeralImpulse_MapInstall {
	C_CDOTA_Ability_Lycan_FeralImpulse_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:859
class CDOTA_Modifier_Lycan_FeralImpulse_Aura : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	CDOTA_Modifier_Lycan_FeralImpulse_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_Lycan_FeralImpulse_Aura();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[42] GetAuraEntityReject
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:913
class CDOTA_Modifier_Lycan_FeralImpulse : public CDOTA_Buff {
public:

private:

	int bonus_hp_regen;  // +0xba8
	int bonus_damage;  // +0xbac
	CDOTA_Modifier_Lycan_FeralImpulse();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierBaseDamageOutgoing_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Lycan_FeralImpulse();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:973
class CDOTA_Ability_Lycan_Shapeshift : public CDOTABaseAbility {
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
	CDOTA_Ability_Lycan_Shapeshift(CDOTA_Ability_Lycan_Shapeshift &);
	CDOTA_Ability_Lycan_Shapeshift(CDOTA_Ability_Lycan_Shapeshift &);
	CDOTA_Ability_Lycan_Shapeshift();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Lycan_Shapeshift();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:1020
class CDOTA_Modifier_Lycan_Shapeshift_Transform : public CDOTA_Buff {
public:

	CDOTA_Modifier_Lycan_Shapeshift_Transform();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Lycan_Shapeshift_Transform();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:1089
class CDOTA_Modifier_Lycan_Shapeshift_Thinker : public CDOTA_Buff {
public:

	CDOTA_Modifier_Lycan_Shapeshift_Thinker(CDOTA_Modifier_Lycan_Shapeshift_Thinker &);
	CDOTA_Modifier_Lycan_Shapeshift_Thinker(const CDOTA_Modifier_Lycan_Shapeshift_Thinker &);
	CDOTA_Modifier_Lycan_Shapeshift_Thinker();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual float GetAuraDuration();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_Lycan_Shapeshift_Thinker();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[83] GetAuraDuration
	// vtable[42] GetAuraEntityReject
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:1122
class CDOTA_Modifier_Lycan_Shapeshift : public CDOTA_Buff {
public:

private:

	int bonus_night_vision;  // +0xba8
	int m_nFXIndex;  // +0xbac
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool AllowIllusionDuplicate();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual int GetPriority();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierModelChange(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t ModelScale(const CModifierParams &);
	ModifierVariant_t GetBonusNightVision(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	ModifierVariant_t OnHeroKilled(const CModifierParams &);
	CDOTA_Modifier_Lycan_Shapeshift();
	virtual ~CDOTA_Modifier_Lycan_Shapeshift();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[18] AllowIllusionDuplicate
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[6] GetPriority
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_lycan.cpp:1267
class CDOTA_Modifier_Lycan_Shapeshift_Speed : public CDOTA_Buff {
public:

private:

	int speed;  // +0xba8
	int crit_chance;  // +0xbac
	int crit_multiplier;  // +0xbb0
	CDOTA_Modifier_Lycan_Shapeshift_Speed();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetEffectName();
	virtual int GetPriority();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_CriticalStrike(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeed_Absolute(const CModifierParams &);
	virtual ModifierVariant_t GetModifierMoveSpeed_Max(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ~CDOTA_Modifier_Lycan_Shapeshift_Speed();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[6] GetPriority
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeed_Max
	// vtable[5] CheckState
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Lycan::~CDOTA_Unit_Hero_Lycan  (line 33, @0x0000000002c06e70, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Lycan::~CDOTA_Unit_Hero_Lycan(CDOTA_Unit_Hero_Lycan *const this)
{
  this->_vptr_IHandleEntity = &off_4533D70;
  this->_vptr_INextBotEventResponder = &off_4534D50;
  this->_vptr_CObstructionObject = &off_4535080;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Lycan::~CDOTA_Unit_Hero_Lycan  (line 33, @0x0000000002c06eb0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Lycan
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Lycan::~CDOTA_Unit_Hero_Lycan(CDOTA_Unit_Hero_Lycan *const this)
{
  this->_vptr_IHandleEntity = &off_4533D70;
  this->_vptr_INextBotEventResponder = &off_4534D50;
  this->_vptr_CObstructionObject = &off_4535080;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Lycan::Schema_DynamicBinding  (line 35, @0x0000000002bfdd50, libserver.so)
// globals: CDOTA_Unit_Hero_Lycan::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Lycan::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Lycan *const this)
{
  return CDOTA_Unit_Hero_Lycan::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 35, @0x0000000002bfdd80, libserver.so)
// globals: CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::DestructInstance  (line 35, @0x0000000002bfdd90, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Lycan>
void __fastcall CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::FreeInstance  (line 35, @0x0000000002bfddb0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::CanAllocate  (line 35, @0x0000000002bfddd0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 35, @0x0000000002bfdde0, libserver.so)
// globals: CDOTA_Unit_Hero_Lycan::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Lycan::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::AllocateInstance  (line 35, @0x0000000002c01f30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::ConstructInstance  (line 35, @0x0000000002c04460, libserver.so)  // inlines: CDOTA_Unit_Hero_Lycan, Construct<CDOTA_Unit_Hero_Lycan>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4533D70;
    *(p + 236) = &off_4534D50;
    *(p + 257) = &off_4535080;
  }
  return p;
}


// CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002c0b560, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002c0b610, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Lycan::GetEntityClassInternal  (line 35, @0x0000000002c11110, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "npc_dota_hero_lycan", "CDOTA_Unit_Hero_Lycan"
// globals: `guard variable for'CDOTA_Unit_Hero_Lycan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LycanClass, CDOTA_Unit_Hero_Lycan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LycanClass, __dso_handle, CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Lycan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LycanClassInfo, CDOTA_Unit_Hero_Lycan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LycanClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Lycan::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Lycan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LycanClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Lycan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LycanClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Lycan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LycanClass);
    CDOTA_Unit_Hero_Lycan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LycanClass._vptr_CEntityClass = off_4533CF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Lycan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LycanClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Lycan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LycanClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_LycanClass != 0 )
    return &CDOTA_Unit_Hero_Lycan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LycanClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Lycan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LycanClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Lycan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LycanClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Lycan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LycanClassInfo,
      "CDOTA_Unit_Hero_Lycan",
      "npc_dota_hero_lycan",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Lycan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LycanClassInfo);
  }
  CDOTA_Unit_Hero_Lycan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LycanClass.m_pClassInfo = &CDOTA_Unit_Hero_Lycan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LycanClassInfo;
  CDOTA_Unit_Hero_Lycan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LycanClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Lycan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LycanClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_LycanClass = &CDOTA_Unit_Hero_Lycan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LycanClass;
  CDOTA_Unit_Hero_Lycan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LycanClassInfo.m_pClass = &CDOTA_Unit_Hero_Lycan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LycanClass;
  CDOTA_Unit_Hero_Lycan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LycanClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_LycanClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Lycan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LycanClass;
}


// CDOTA_Unit_Hero_Lycan::YouForgotToImplementOrDeclareServerClass  (line 49, @0x0000000002bd2d00, libserver.so)
int __fastcall CDOTA_Unit_Hero_Lycan::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Lycan *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Lycan::GetServerClass  (line 49, @0x0000000002bdc370, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Lycan::GetServerClass(CDOTA_Unit_Hero_Lycan *const this)
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


// CDOTA_Unit_Hero_Lycan::Precache  (line 56, @0x0000000002bd4960, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, DOTA_PrecacheUnitByNameSync
// strings: "npc_dota_lycan_wolf1", "npc_dota_lycan_wolf2", "npc_dota_lycan_wolf3", "npc_dota_lycan_wolf4"
void __fastcall CDOTA_Unit_Hero_Lycan::Precache(
        CDOTA_Unit_Hero_Lycan *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  DOTA_PrecacheUnitByNameSync("npc_dota_lycan_wolf1", pContext->m_pManifest, -1);
  DOTA_PrecacheUnitByNameSync("npc_dota_lycan_wolf2", pContext->m_pManifest, -1);
  DOTA_PrecacheUnitByNameSync("npc_dota_lycan_wolf3", pContext->m_pManifest, -1);
  DOTA_PrecacheUnitByNameSync("npc_dota_lycan_wolf4", pContext->m_pManifest, -1);
}


// CDOTA_Unit_Hero_Lycan::Event_Killed  (line 69, @0x0000000002bd4be0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Event_Killed, CDOTA_BaseNPC::FindModifierByName, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CBaseEntity::AddEffects
// strings: "modifier_lycan_shapeshift", "particles/units/heroes/hero_lycan/lycan_shapeshift_death_fwd.vpcf"
void __fastcall CDOTA_Unit_Hero_Lycan::Event_Killed(
        CDOTA_Unit_Hero_Lycan *const this,
        const CTakeDamageInfo *const info)
{
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v7; // rax
  CDOTA_ParticleManager *v8; // rax

  if ( !this->m_bIsIllusion.m_Value && CDOTA_BaseNPC::FindModifierByName(this, "modifier_lycan_shapeshift", 0) != 0 )
  {
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_lycan/lycan_shapeshift_death_fwd.vpcf",
                 2,
                 0,
                 0,
                 0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v7 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v7, Particle, 0, this, 0, 0, *AbsOrigin, 1);
    v8 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v8, Particle);
    CBaseEntity::AddEffects(this, 32);
  }
  CDOTA_BaseNPC_Hero::Event_Killed(this, info);
}


// CDOTA_Unit_Hero_Lycan::UsedGestureBasedAttackAnimation  (line 87, @0x0000000002bd4a00, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_lycan_shapeshift"
bool __fastcall CDOTA_Unit_Hero_Lycan::UsedGestureBasedAttackAnimation(CDOTA_Unit_Hero_Lycan *const this)
{
  return CDOTA_BaseNPC::FindModifierByName(this, "modifier_lycan_shapeshift", 0) != 0;
}


// CDOTA_Unit_Hero_Lycan::ModifyOrAppendCriteria  (line 97, @0x0000000002bd4cb0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria, CDOTA_BaseNPC::FindModifierByName, CResponseCriteriaSet::AppendCriteria
// strings: "modifier_lycan_shapeshift", "wolfform"
void __fastcall CDOTA_Unit_Hero_Lycan::ModifyOrAppendCriteria(
        CDOTA_Unit_Hero_Lycan *const this,
        CResponseCriteriaSet *const set)
{
  float v4; // xmm2_4

  CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(this, set);
  CDOTA_BaseNPC::FindModifierByName(this, "modifier_lycan_shapeshift", 0);
  CResponseCriteriaSet::AppendCriteria(set, "wolfform", 1.0, v4);
}


// CDOTA_Ability_Lycan_SummonWolves::~CDOTA_Ability_Lycan_SummonWolves  (line 110, @0x0000000002c198e0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Lycan_SummonWolves::~CDOTA_Ability_Lycan_SummonWolves(
        CDOTA_Ability_Lycan_SummonWolves *const this)
{
  this->_vptr_IHandleEntity = &off_4535150;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hExistingUnits);
  if ( (this->m_hExistingUnits.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hExistingUnits.m_Memory),
        (this->m_hExistingUnits.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hExistingUnits.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Lycan_SummonWolves::~CDOTA_Ability_Lycan_SummonWolves  (line 110, @0x0000000002c19c50, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Lycan_SummonWolves, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Lycan_SummonWolves::~CDOTA_Ability_Lycan_SummonWolves(
        CDOTA_Ability_Lycan_SummonWolves *const this)
{
  this->_vptr_IHandleEntity = &off_4535150;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hExistingUnits);
  if ( (this->m_hExistingUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hExistingUnits.m_Memory);
    if ( (this->m_hExistingUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hExistingUnits.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lycan_SummonWolves::Schema_DynamicBinding  (line 112, @0x0000000002bfddf0, libserver.so)
// globals: CDOTA_Ability_Lycan_SummonWolves::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lycan_SummonWolves::Schema_DynamicBinding(
        const CDOTA_Ability_Lycan_SummonWolves *const this)
{
  return CDOTA_Ability_Lycan_SummonWolves::s_pSchemaBinding;
}


// CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 112, @0x0000000002bfde00, libserver.so)
// globals: CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::DestructInstance  (line 112, @0x0000000002bfde10, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lycan_SummonWolves>
void __fastcall CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::FreeInstance  (line 112, @0x0000000002bfde30, libserver.so)
void __fastcall CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::CanAllocate  (line 112, @0x0000000002bfde50, libserver.so)
bool __fastcall CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 112, @0x0000000002bfde60, libserver.so)
// globals: CDOTA_Ability_Lycan_SummonWolves::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lycan_SummonWolves::s_pSchemaBinding;
}


// CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::AllocateInstance  (line 112, @0x0000000002c01f70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1208);
  memset(v1, 0, 0x4B8u);
  return v1;
}


// CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::ConstructInstance  (line 112, @0x0000000002c09f50, libserver.so)  // inlines: CDOTA_Ability_Lycan_SummonWolves, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Lycan_SummonWolves>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 296) = 0;
    *p = &off_4535150;
    *(p + 149) = 0;
    *(p + 300) = 0;
    *(p + 301) = 0;
  }
  return p;
}


// CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 112, @0x0000000002c0a640, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 112, @0x0000000002c0a660, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInternal  (line 112, @0x0000000002c11260, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "lycan_summon_wolves", "CDOTA_Ability_Lycan_SummonWolves"
// globals: `guard variable for'CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClass, CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClass, __dso_handle, CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClassInfo, CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClass);
    CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClass._vptr_CEntityClass = off_45350D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClass);
    __cxa_atexit(
      CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lycan_SummonWolvesClass != 0 )
    return &CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClass;
  if ( `guard variable for'CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClassInfo,
      "CDOTA_Ability_Lycan_SummonWolves",
      "lycan_summon_wolves",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClassInfo);
  }
  CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClass.m_pClassInfo = &CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClassInfo;
  CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClass.m_pBaseClassInfo = CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lycan_SummonWolvesClass = &CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClass;
  CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClassInfo.m_pClass = &CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClass;
  CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lycan_SummonWolvesClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lycan_SummonWolves::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolvesClass;
}


// CDOTA_Ability_Lycan_SummonWolves::YouForgotToImplementOrDeclareServerClass  (line 126, @0x0000000002bd2d10, libserver.so)
int __fastcall CDOTA_Ability_Lycan_SummonWolves::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Lycan_SummonWolves *const this)
{
  return 0;
}


// CDOTA_Ability_Lycan_SummonWolves::GetServerClass  (line 126, @0x0000000002bdc430, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Lycan_SummonWolves::GetServerClass(CDOTA_Ability_Lycan_SummonWolves *const this)
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


// CDOTA_Ability_Lycan_SummonWolves::OnSpellStart  (line 135, @0x0000000002bf6e50, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, SetUnitLabelIndex, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, operator CBaseEntity*, operator*, operator+, operator=, operator=<int>, operator[]
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, V_snprintf, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::ForceKill, CDOTA_BaseNPC::FindAbilityByName, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (29 total)
// strings: "wolf_index", "npc_dota_lycan_wolf%d", "special_bonus_unique_lycan_2", "particles/units/heroes/hero_lycan/lycan_summon_wolves_cast.vpcf", "attach_attack2", "attach_attack1" (10 total)
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Lycan_SummonWolves::OnSpellStart(CDOTA_Ability_Lycan_SummonWolves *const this)
{
  int LevelSpecialValue; // eax
  CEntityInstance *v3; // rax
  CEntityInstance *v4; // r12
  CDOTA_BaseNPC *Caster; // rax
  unsigned __int16 v6; // cx
  int v7; // edi
  CDOTA_BaseNPC *m_pInstance; // rsi
  int v9; // edx
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  CDOTA_BaseNPC *v12; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int v14; // r15d
  CDOTA_BaseNPC *v15; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v17; // rax
  const char *v18; // r13
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v23; // rax
  int m_Value; // r14d
  CDOTA_BaseNPC *v25; // r13
  CDOTA_BaseNPC *v26; // r12
  CDOTA_BaseNPC *v27; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *UnitByName; // rax
  CDOTA_BaseNPC *v30; // r12
  CEntityIdentity *m_pEntity; // rax
  int v32; // edx
  __int16 v33; // cx
  __int64 m_Size; // r13
  int v35; // eax
  vec_t *p_m_Index; // rax
  CDOTA_BaseNPC *v37; // rax
  int v38; // eax
  CDOTA_BaseNPC *v39; // rax
  float v40; // xmm0_4
  CDOTA_BaseNPC *v41; // rax
  const Vector *v42; // rax
  vec_t v43; // xmm0_4
  vec_t v44; // xmm2_4
  CDOTA_BaseNPC *v45; // rax
  __int64 v46; // rax
  __int64 v47; // r13
  unsigned __int8 (__fastcall *v48)(__int64, const Vector *, Vector *, _QWORD, _QWORD); // r14
  CDOTA_BaseNPC *v49; // rax
  const Vector *v50; // rax
  CDOTA_BaseNPC *v51; // rax
  CDOTA_BaseNPC *v52; // rax
  const QAngle *AbsAngles; // rax
  float v54; // xmm1_4
  CDOTA_BaseNPC *v55; // rax
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v57; // rax
  CDOTA_BaseNPC *v58; // rax
  CDOTA_BaseNPC_Hero *v59; // rdi
  CDOTA_BaseNPC *v60; // rax
  int iAmount; // [rsp+24h] [rbp-ACh]
  float v62; // [rsp+28h] [rbp-A8h]
  float v63; // [rsp+2Ch] [rbp-A4h]
  CDOTA_BaseNPC *pEnt; // [rsp+30h] [rbp-A0h]
  float pEnta; // [rsp+30h] [rbp-A0h]
  const Vector *v66; // [rsp+38h] [rbp-98h]
  float v67; // [rsp+38h] [rbp-98h]
  float v68; // [rsp+40h] [rbp-90h]
  int nFXIndex; // [rsp+44h] [rbp-8Ch]
  float nFXIndexa; // [rsp+44h] [rbp-8Ch]
  int v71; // [rsp+48h] [rbp-88h]
  int i; // [rsp+4Ch] [rbp-84h]
  Vector vFwd; // [rsp+50h] [rbp-80h] BYREF
  Vector vRight; // [rsp+60h] [rbp-70h] BYREF
  Vector vSpawnPoint; // [rsp+70h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v77; // [rsp+98h] [rbp-38h]

  v77 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "wolf_index", -1, 0);
  this->wolf_index = LevelSpecialValue;
  if ( LevelSpecialValue == 2 )
    goto LABEL_5;
  if ( LevelSpecialValue <= 2 )
  {
    if ( LevelSpecialValue == 1 )
LABEL_5:
      V_snprintf(this->szUnitName, 260, "npc_dota_lycan_wolf%d", this->m_iLevel.m_Value);
  }
  else if ( LevelSpecialValue == 3 || LevelSpecialValue == 4 )
  {
    goto LABEL_5;
  }
  while ( this->m_hExistingUnits.m_Size > 0 )
  {
    v3 = CEntityHandle::operator CEntityInstance *(this->m_hExistingUnits.m_Memory.m_pMemory);
    v4 = v3;
    if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      if ( HIDWORD(v4[11].m_pEntity) == -1 )
      {
        v6 = 0x7FFF;
        v7 = 0x7FFF;
      }
      else
      {
        v6 = WORD2(v4[11].m_pEntity) & 0x7FFF;
        v7 = v6;
      }
      m_pInstance = 0;
      v9 = (HIDWORD(v4[11].m_pEntity) >> 15 << 15) | v6 & 0x7FFF;
      LODWORD(vSpawnPoint.x) = v9;
      if ( (v9 + 2) > 1 )
      {
        v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
        if ( v10 != 0 )
        {
          v11 = &v10[v7 & 0x1FF];
          if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
            m_pInstance = v11->m_pInstance;
        }
      }
      if ( Caster == m_pInstance )
        CDOTA_BaseNPC::ForceKill(v4, 0);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&this->m_hExistingUnits, 0);
  }
  v12 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v12, "special_bonus_unique_lycan_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
  {
    iAmount = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + 2;
    if ( iAmount <= 0 )
      goto LABEL_50;
  }
  else
  {
    iAmount = 2;
  }
  v14 = 1;
  v71 = 0;
  do
  {
    m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    v25 = CDOTABaseAbility::GetCaster(this);
    v26 = CDOTABaseAbility::GetCaster(this);
    v27 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v27);
    UnitByName = DOTA_CreateUnitByName(this->szUnitName, AbsOrigin, 1, v26, v25, m_Value);
    v30 = UnitByName;
    if ( UnitByName != 0 )
    {
      vSpawnPoint.x = NAN;
      m_pEntity = UnitByName->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v32 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v33 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v33 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(vSpawnPoint.x) = v33 | LOWORD(vSpawnPoint.x) & 0x8000;
        LODWORD(vSpawnPoint.x) = (v32 << 15) | LOWORD(vSpawnPoint.x) & 0x7FFF;
      }
      m_Size = this->m_hExistingUnits.m_Size;
      v35 = this->m_hExistingUnits.m_Size;
      if ( m_Size == this->m_hExistingUnits.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hExistingUnits.m_Memory, 1);
        v35 = this->m_hExistingUnits.m_Size;
      }
      this->m_hExistingUnits.m_Size = v35 + 1;
      p_m_Index = &this->m_hExistingUnits.m_Memory.m_pMemory[m_Size].m_Index;
      if ( p_m_Index != 0 )
        *p_m_Index = vSpawnPoint.x;
      v37 = CDOTABaseAbility::GetCaster(this);
      v38 = (*(v37->_vptr_IHandleEntity + 414))(v37);
      CDOTA_BaseNPC::SetControllableByPlayer(v30, v38, 0);
      i = v14;
      if ( v14 != v30->m_nUnitLabelIndex.m_Value )
      {
        (*(v30->_vptr_IHandleEntity + 22))(v30, 3417, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v30->m_nUnitLabelIndex.m_Value = v14;
      }
      v39 = CDOTABaseAbility::GetCaster(this);
      (*(v39->_vptr_IHandleEntity + 61))(v39, &vFwd, &vRight, 0);
      v40 = v71 - 60.0;
      nFXIndexa = 200.0 * vFwd.x;
      v67 = 200.0 * vFwd.y;
      pEnta = 200.0 * vFwd.z;
      v62 = vRight.x * v40;
      v63 = vRight.y * v40;
      v68 = v40 * vRight.z;
      v41 = CDOTABaseAbility::GetCaster(this);
      v42 = CBaseEntity::GetAbsOrigin(v41);
      v43 = (v68 + v42->z) + pEnta;
      v44 = (v62 + v42->x) + nFXIndexa;
      vSpawnPoint.y = (v63 + v42->y) + v67;
      vSpawnPoint.z = v43;
      vSpawnPoint.x = v44;
      v45 = CDOTABaseAbility::GetCaster(this);
      v46 = (*(v45->_vptr_IHandleEntity + 376))(v45);
      v47 = v46;
      if ( v46 != 0 )
      {
        v48 = *(*v46 + 872LL);
        v49 = CDOTABaseAbility::GetCaster(this);
        v50 = CBaseEntity::GetAbsOrigin(v49);
        if ( v48(v47, v50, &vSpawnPoint, 0, 0) == 0 )
        {
          v51 = CDOTABaseAbility::GetCaster(this);
          vSpawnPoint = *CBaseEntity::GetAbsOrigin(v51);
        }
      }
      FindClearSpaceForUnit(v30, vSpawnPoint, 1);
      v52 = CDOTABaseAbility::GetCaster(this);
      AbsAngles = CBaseEntity::GetAbsAngles(v52);
      CBaseEntity::SetAbsAngles(v30, AbsAngles);
      this->wolf_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "wolf_duration", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_kill");
      KeyValues::SetFloat(&kv, "duration", v54);
      v55 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v30, v55, this, "modifier_kill", &kv, 0);
      if ( this->wolf_index > 2 )
      {
        AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v30, 0);
        if ( AbilityByIndex != 0 )
          CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
        if ( this->wolf_index == 4 )
        {
          v57 = CDOTA_BaseNPC::GetAbilityByIndex(v30, 1);
          if ( v57 != 0 )
            CDOTABaseAbility::UpgradeAbility(v57, 0);
        }
      }
      v15 = CDOTABaseAbility::GetCaster(this);
      ParticleManager = GetParticleManager();
      nFXIndex = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_lycan/lycan_summon_wolves_cast.vpcf",
                   2,
                   v15,
                   0,
                   0);
      v17 = CDOTABaseAbility::GetCaster(this);
      v66 = CBaseEntity::GetAbsOrigin(v17);
      v18 = "attach_attack2";
      if ( v14 != 1 )
        v18 = "attach_attack1";
      pEnt = CDOTABaseAbility::GetCaster(this);
      v19 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v19, nFXIndex, 0, pEnt, 5, v18, *v66, 1);
      v20 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v20, nFXIndex);
      v21 = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   v21,
                   "particles/units/heroes/hero_lycan/lycan_summon_wolves_spawn.vpcf",
                   1,
                   v30,
                   0,
                   0);
      v23 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v23, Particle);
      KeyValues::~KeyValues(&kv);
    }
    else
    {
      i = v14;
    }
    ++v14;
    v71 += 120;
  }
  while ( i < iAmount );
LABEL_50:
  v58 = CDOTABaseAbility::GetCaster(this);
  if ( v58 != 0 && (v58->m_iUnitType & 1) != 0 )
    v59 = v58;
  else
    v59 = 0;
  EconEntity_OnOwnerKillEaterEvent(
    v59,
    0,
    kill_eater_event_t::kKillEaterEventType_Lycan_WolvesSummoned,
    iAmount,
    INVALID_ITEM_DEF_INDEX);
  v60 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v60, "Hero_Lycan.SummonWolves", 0.0, 0, 0);
}


// CDOTA_Modifier_Lycan_SummonWolves_Bash::~CDOTA_Modifier_Lycan_SummonWolves_Bash  (line 264, @0x0000000002c040a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lycan_SummonWolves_Bash::~CDOTA_Modifier_Lycan_SummonWolves_Bash(
        CDOTA_Modifier_Lycan_SummonWolves_Bash *const this)
{
  this->_vptr_CDOTA_Buff = &off_4535C10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lycan_SummonWolves_Bash::~CDOTA_Modifier_Lycan_SummonWolves_Bash  (line 264, @0x0000000002c040c0, libserver.so)  // inlines: ~CDOTA_Modifier_Lycan_SummonWolves_Bash
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lycan_SummonWolves_Bash::~CDOTA_Modifier_Lycan_SummonWolves_Bash(
        CDOTA_Modifier_Lycan_SummonWolves_Bash *const this)
{
  this->_vptr_CDOTA_Buff = &off_4535C10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lycan_SummonWolves_Bash::IsHidden  (line 269, @0x0000000002bfde70, libserver.so)
bool __fastcall CDOTA_Modifier_Lycan_SummonWolves_Bash::IsHidden(CDOTA_Modifier_Lycan_SummonWolves_Bash *const this)
{
  return 1;
}


// CDOTA_Modifier_Lycan_SummonWolves_Bash::IsPurgable  (line 270, @0x0000000002bfde80, libserver.so)
bool __fastcall CDOTA_Modifier_Lycan_SummonWolves_Bash::IsPurgable(CDOTA_Modifier_Lycan_SummonWolves_Bash *const this)
{
  return 0;
}


// CDOTA_Modifier_Lycan_SummonWolves_Bash::DeclareFunctions  (line 286, @0x0000000002bd2d20, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Lycan_SummonWolves_Bash::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_Lycan_SummonWolves_Bash::DeclareFunctions(
        CDOTA_Modifier_Lycan_SummonWolves_Bash *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_Lycan_SummonWolves_Bash::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Lycan_SummonWolves_Bash::OnCreated  (line 293, @0x0000000002bf2940, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bash_chance", "bash_duration"
void __fastcall CDOTA_Modifier_Lycan_SummonWolves_Bash::OnCreated(
        CDOTA_Modifier_Lycan_SummonWolves_Bash *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bash_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bash_chance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bash_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "bash_duration", -1, 0);
      return;
    }
  }
  else
  {
    this->bash_chance = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bash_duration = 0.0;
}


// CDOTA_Modifier_Lycan_SummonWolves_Bash::OnAttackLanded  (line 302, @0x0000000002bdbce0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// strings: "modifier_bashed", "DOTA_Item.SkullBasher", "particles/generic_gameplay/generic_minibash.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_SummonWolves_Bash::OnAttackLanded(
        CDOTA_Modifier_Lycan_SummonWolves_Bash *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // r13
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *v13; // r14
  CDOTA_BaseNPC *v14; // rax
  CBaseEntity *v15; // r15
  float v16; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v18; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v21; // rax
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( RollPseudoRandomPercentage(this->bash_chance, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_BASHER, Parent) )
    {
      m_Index = params->htarget.m_Index;
      if ( m_Index + 2 <= 1
        || (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
        || (v8 = &v7[params->htarget.m_Index & 0x1FF]) == 0
        || m_Index != v8->m_EHandle.m_Index
        || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
        || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
      {
        m_pInstance = 0;
      }
      v10 = params->hattacker.m_Index;
      if ( v10 + 2 > 1 )
      {
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
        if ( v11 != 0 )
        {
          v12 = &v11[params->hattacker.m_Index & 0x1FF];
          if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
          {
            v13 = v12->m_pInstance;
            if ( v12->m_pInstance != 0 && v13->m_bIsDOTANPC )
            {
              v14 = CDOTA_Buff::GetParent(this);
              v15 = v14;
              if ( v14 == v13
                && params->nDamageCategory == 1
                && m_pInstance != 0
                && !v14->m_bIsIllusion.m_Value
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x81) != 0 )
              {
                KeyValues::KeyValues(&kv, "modifier_bashed");
                KeyValues::SetFloat(&kv, "duration", v16);
                Ability = CDOTA_Buff::GetAbility(this);
                v18 = CDOTA_Buff::GetParent(this);
                CDOTA_BaseNPC::AddNewModifier(m_pInstance, v18, Ability, "modifier_bashed", &kv, 0);
                CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "DOTA_Item.SkullBasher", 0.0, 0, 0);
                ParticleManager = GetParticleManager();
                Particle = CDOTA_ParticleManager::CreateParticle(
                             ParticleManager,
                             "particles/generic_gameplay/generic_minibash.vpcf",
                             7,
                             m_pInstance,
                             0,
                             v15);
                v21 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v21, Particle);
                KeyValues::~KeyValues(&kv);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::~CDOTA_Ability_Lycan_SummonWolves_CriticalStrike  (line 339, @0x0000000002c050d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::~CDOTA_Ability_Lycan_SummonWolves_CriticalStrike(
        CDOTA_Ability_Lycan_SummonWolves_CriticalStrike *const this)
{
  this->_vptr_IHandleEntity = &off_4535F70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::~CDOTA_Ability_Lycan_SummonWolves_CriticalStrike  (line 339, @0x0000000002c050f0, libserver.so)  // inlines: ~CDOTA_Ability_Lycan_SummonWolves_CriticalStrike
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::~CDOTA_Ability_Lycan_SummonWolves_CriticalStrike(
        CDOTA_Ability_Lycan_SummonWolves_CriticalStrike *const this)
{
  this->_vptr_IHandleEntity = &off_4535F70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::Schema_DynamicBinding  (line 341, @0x0000000002bfde90, libserver.so)
// globals: CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::Schema_DynamicBinding(
        const CDOTA_Ability_Lycan_SummonWolves_CriticalStrike *const this)
{
  return CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::s_pSchemaBinding;
}


// CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 341, @0x0000000002bfdea0, libserver.so)
// globals: CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::DestructInstance  (line 341, @0x0000000002bfdeb0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lycan_SummonWolves_CriticalStrike>
void __fastcall CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::FreeInstance  (line 341, @0x0000000002bfded0, libserver.so)
void __fastcall CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::CanAllocate  (line 341, @0x0000000002bfdef0, libserver.so)
bool __fastcall CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 341, @0x0000000002bfdf00, libserver.so)
// globals: CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::s_pSchemaBinding;
}


// CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::AllocateInstance  (line 341, @0x0000000002c01fb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::ConstructInstance  (line 341, @0x0000000002c04810, libserver.so)  // inlines: CDOTA_Ability_Lycan_SummonWolves_CriticalStrike, Construct<CDOTA_Ability_Lycan_SummonWolves_CriticalStrike>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4535F70;
  }
  return p;
}


// CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 341, @0x0000000002c0a690, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 341, @0x0000000002c0a6b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInternal  (line 341, @0x0000000002c113b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "lycan_summon_wolves_critical_strike", "CDOTA_Ability_Lycan_SummonWolves_CriticalStrike"
// globals: `guard variable for'CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClass, CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClass, __dso_handle, CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClassInfo, CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClass);
    CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClass._vptr_CEntityClass = off_4535EF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClass);
    __cxa_atexit(
      CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClass != 0 )
    return &CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClass;
  if ( `guard variable for'CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClassInfo,
      "CDOTA_Ability_Lycan_SummonWolves_CriticalStrike",
      "lycan_summon_wolves_critical_strike",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClassInfo);
  }
  CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClass.m_pClassInfo = &CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClassInfo;
  CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClass.m_pBaseClassInfo = CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClass = &CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClass;
  CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClassInfo.m_pClass = &CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClass;
  CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_CriticalStrikeClass;
}


// CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetIntrinsicModifierName  (line 344, @0x0000000002bfdf10, libserver.so)
// strings: "modifier_lycan_summon_wolves_critical_strike"
const char *__fastcall CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::GetIntrinsicModifierName(
        CDOTA_Ability_Lycan_SummonWolves_CriticalStrike *const this)
{
  return "modifier_lycan_summon_wolves_critical_strike";
}


// CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike::~CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike  (line 351, @0x0000000002c04050, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike::~CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike(
        CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_4536A30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike::~CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike  (line 351, @0x0000000002c04070, libserver.so)  // inlines: ~CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike::~CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike(
        CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_4536A30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike::IsHidden  (line 356, @0x0000000002bfdf20, libserver.so)
bool __fastcall CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike::IsHidden(
        CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike *const this)
{
  return 1;
}


// CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike::DeclareFunctions  (line 372, @0x0000000002bd2d40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike::DeclareFunctions(
        CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike::OnCreated  (line 379, @0x0000000002bf2a60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "maim_chance", "maim_duration"
void __fastcall CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike::OnCreated(
        CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->maim_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "maim_chance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->maim_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "maim_duration", -1, 0);
      return;
    }
  }
  else
  {
    this->maim_chance = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->maim_duration = 0.0;
}


// CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike::OnAttackLanded  (line 388, @0x0000000002bdba90, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_lycan_summon_wolves_crit_maim", "DOTA_Item.Maim"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike::OnAttackLanded(
        CDOTA_Modifier_Lycan_SummonWolves_CriticalStrike *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // r13
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *v13; // r14
  CDOTA_BaseNPC *v14; // rax
  float v15; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( RollPseudoRandomPercentage(this->maim_chance, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_SANGE_MAIM, Parent) )
    {
      m_Index = params->htarget.m_Index;
      if ( m_Index + 2 <= 1
        || (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
        || (v8 = &v7[params->htarget.m_Index & 0x1FF]) == 0
        || m_Index != v8->m_EHandle.m_Index
        || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
        || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
      {
        m_pInstance = 0;
      }
      v10 = params->hattacker.m_Index;
      if ( v10 + 2 > 1 )
      {
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
        if ( v11 != 0 )
        {
          v12 = &v11[params->hattacker.m_Index & 0x1FF];
          if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
          {
            v13 = v12->m_pInstance;
            if ( v12->m_pInstance != 0 && v13->m_bIsDOTANPC )
            {
              v14 = CDOTA_Buff::GetParent(this);
              if ( v14 == v13
                && params->nDamageCategory == 1
                && m_pInstance != 0
                && !v14->m_bIsIllusion.m_Value
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x81) != 0 )
              {
                KeyValues::KeyValues(&kv, "modifier_lycan_summon_wolves_crit_maim");
                KeyValues::SetFloat(&kv, "duration", v15);
                Ability = CDOTA_Buff::GetAbility(this);
                Caster = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(
                  m_pInstance,
                  Caster,
                  Ability,
                  "modifier_lycan_summon_wolves_crit_maim",
                  &kv,
                  0);
                CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "DOTA_Item.Maim", 0.0, 0, 0);
                KeyValues::~KeyValues(&kv);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Lycan_SummonWolves_Maim::~CDOTA_Modifier_Lycan_SummonWolves_Maim  (line 420, @0x0000000002c04000, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lycan_SummonWolves_Maim::~CDOTA_Modifier_Lycan_SummonWolves_Maim(
        CDOTA_Modifier_Lycan_SummonWolves_Maim *const this)
{
  this->_vptr_CDOTA_Buff = &off_4536D50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lycan_SummonWolves_Maim::~CDOTA_Modifier_Lycan_SummonWolves_Maim  (line 420, @0x0000000002c04020, libserver.so)  // inlines: ~CDOTA_Modifier_Lycan_SummonWolves_Maim
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lycan_SummonWolves_Maim::~CDOTA_Modifier_Lycan_SummonWolves_Maim(
        CDOTA_Modifier_Lycan_SummonWolves_Maim *const this)
{
  this->_vptr_CDOTA_Buff = &off_4536D50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lycan_SummonWolves_Maim::IsDebuff  (line 428, @0x0000000002bfdf30, libserver.so)
bool __fastcall CDOTA_Modifier_Lycan_SummonWolves_Maim::IsDebuff(CDOTA_Modifier_Lycan_SummonWolves_Maim *const this)
{
  return 1;
}


// CDOTA_Modifier_Lycan_SummonWolves_Maim::GetEffectName  (line 434, @0x0000000002bfdf40, libserver.so)
// strings: "particles/items2_fx/sange_maim.vpcf"
const char *__fastcall CDOTA_Modifier_Lycan_SummonWolves_Maim::GetEffectName(
        CDOTA_Modifier_Lycan_SummonWolves_Maim *const this)
{
  return "particles/items2_fx/sange_maim.vpcf";
}


// CDOTA_Modifier_Lycan_SummonWolves_Maim::Tooltip  (line 449, @0x0000000002bd2d60, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_SummonWolves_Maim::Tooltip(
        CDOTA_Modifier_Lycan_SummonWolves_Maim *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->maim_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Lycan_SummonWolves_Maim::DeclareFunctions  (line 454, @0x0000000002bd2d80, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Lycan_SummonWolves_Maim::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Lycan_SummonWolves_Maim::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Lycan_SummonWolves_Maim::Tooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Lycan_SummonWolves_Maim::DeclareFunctions(
        CDOTA_Modifier_Lycan_SummonWolves_Maim *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Lycan_SummonWolves_Maim::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Lycan_SummonWolves_Maim::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[151].__pfn = CDOTA_Modifier_Lycan_SummonWolves_Maim::Tooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Lycan_SummonWolves_Maim::OnCreated  (line 461, @0x0000000002bec0f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "maim_movement_speed", "maim_attack_speed", "maim_damage"
void __fastcall CDOTA_Modifier_Lycan_SummonWolves_Maim::OnCreated(
        CDOTA_Modifier_Lycan_SummonWolves_Maim *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->maim_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "maim_movement_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->maim_attack_speed = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->maim_damage = 0;
    goto LABEL_5;
  }
  this->maim_movement_speed = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->maim_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "maim_attack_speed", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->maim_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "maim_damage", -1, 0);
LABEL_5:
  CDOTA_Buff::StartIntervalThink(this, 1.0, v6);
}


// CDOTA_Modifier_Lycan_SummonWolves_Maim::OnIntervalThink  (line 470, @0x0000000002bd4e30, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, SendOverheadEventMessage
void __fastcall CDOTA_Modifier_Lycan_SummonWolves_Maim::OnIntervalThink(
        CDOTA_Modifier_Lycan_SummonWolves_Maim *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  flDamage = this->maim_damage;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, flDamage, 2, 0);
  LODWORD(Parent) = this->maim_damage;
  v5 = CDOTA_Buff::GetParent(this);
  SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v5, Parent, 0);
}


// CDOTA_Modifier_Lycan_SummonWolves_Maim::GetModifierMoveSpeedBonus_Percentage  (line 478, @0x0000000002bd2de0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_SummonWolves_Maim::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Lycan_SummonWolves_Maim *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->maim_movement_speed;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Lycan_SummonWolves_Maim::GetModifierAttackSpeedBonus_Constant  (line 483, @0x0000000002bd2e00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_SummonWolves_Maim::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Lycan_SummonWolves_Maim *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->maim_attack_speed;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::~CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility  (line 495, @0x0000000002c05120, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::~CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility(
        CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility *const this)
{
  this->_vptr_IHandleEntity = &off_45370B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::~CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility  (line 495, @0x0000000002c05140, libserver.so)  // inlines: ~CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::~CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility(
        CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility *const this)
{
  this->_vptr_IHandleEntity = &off_45370B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::Schema_DynamicBinding  (line 497, @0x0000000002bfdf50, libserver.so)
// globals: CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::Schema_DynamicBinding(
        const CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility *const this)
{
  return CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::s_pSchemaBinding;
}


// CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 497, @0x0000000002bfdf60, libserver.so)
// globals: CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::DestructInstance  (line 497, @0x0000000002bfdf70, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility>
void __fastcall CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::FreeInstance  (line 497, @0x0000000002bfdf90, libserver.so)
void __fastcall CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::CanAllocate  (line 497, @0x0000000002bfdfb0, libserver.so)
bool __fastcall CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 497, @0x0000000002bfdfc0, libserver.so)
// globals: CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::s_pSchemaBinding;
}


// CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::AllocateInstance  (line 497, @0x0000000002c01ff0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::ConstructInstance  (line 497, @0x0000000002c04840, libserver.so)  // inlines: CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility, Construct<CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45370B0;
  }
  return p;
}


// CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 497, @0x0000000002c0a6e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 497, @0x0000000002c0a700, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInternal  (line 497, @0x0000000002c11500, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "lycan_summon_wolves_invisibility", "CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility"
// globals: `guard variable for'CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvi, CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClass, __dso_handle, CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibi, CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClass);
    CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClass._vptr_CEntityClass = off_4537030;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClass);
    __cxa_atexit(
      CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClass != 0 )
    return &CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClass;
  if ( `guard variable for'CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClassInfo,
      "CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility",
      "lycan_summon_wolves_invisibility",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClassInfo);
  }
  CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClass.m_pClassInfo = &CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClassInfo;
  CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClass.m_pBaseClassInfo = CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClass = &CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClass;
  CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClassInfo.m_pClass = &CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClass;
  CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_SummonWolves_PermanentInvisibilityClass;
}


// CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetIntrinsicModifierName  (line 500, @0x0000000002bfdfd0, libserver.so)
// strings: "modifier_lycan_summon_wolves_invisibility"
const char *__fastcall CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::GetIntrinsicModifierName(
        CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility *const this)
{
  return "modifier_lycan_summon_wolves_invisibility";
}


// CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility::~CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility  (line 508, @0x0000000002c03fb0, libserver.so)  // inlines: ~CDOTA_Modifier_PersistentInvisibility
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility::~CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility(
        CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility *const this)
{
  this->_vptr_CDOTA_Buff = &off_411D6D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility::~CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility  (line 508, @0x0000000002c03fd0, libserver.so)  // inlines: ~CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility, ~CDOTA_Modifier_PersistentInvisibility
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility::~CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility(
        CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility *const this)
{
  this->_vptr_CDOTA_Buff = &off_411D6D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility::IsHidden  (line 513, @0x0000000002bfdfe0, libserver.so)
bool __fastcall CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility::IsHidden(
        CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility *const this)
{
  return 1;
}


// CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility::OnCreated  (line 526, @0x0000000002bf2b80, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTA_Modifier_PersistentInvisibility::OnCreated
// strings: "fadetime"
void __fastcall CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility::OnCreated(
        CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "fade_time", -1, 0);
  KeyValues::SetFloat(pKV, "fadetime", v5);
  CDOTA_Modifier_PersistentInvisibility::OnCreated(this, pKV);
}


// CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility::OnRefresh  (line 538, @0x0000000002bf2bd0, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTA_Modifier_PersistentInvisibility::OnRefresh
// strings: "fadetime"
void __fastcall CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility::OnRefresh(
        CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "fade_time", -1, 0);
  KeyValues::SetFloat(pKV, "fadetime", v5);
  CDOTA_Modifier_PersistentInvisibility::OnRefresh(this, pKV);
}


// CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility::OnIntervalThink  (line 550, @0x0000000002bd4f60, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Modifier_PersistentInvisibility::OnIntervalThink, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_invisible"
void __fastcall CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility::OnIntervalThink(
        CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 8) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveModifierByName(Parent, "modifier_invisible");
  }
  else
  {
    CDOTA_Modifier_PersistentInvisibility::OnIntervalThink(this);
  }
}


// CDOTA_Ability_Lycan_Howl::~CDOTA_Ability_Lycan_Howl  (line 570, @0x0000000002c05170, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Lycan_Howl::~CDOTA_Ability_Lycan_Howl(CDOTA_Ability_Lycan_Howl *const this)
{
  this->_vptr_IHandleEntity = &off_4537EF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Lycan_Howl::~CDOTA_Ability_Lycan_Howl  (line 570, @0x0000000002c05190, libserver.so)  // inlines: ~CDOTA_Ability_Lycan_Howl
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Lycan_Howl::~CDOTA_Ability_Lycan_Howl(CDOTA_Ability_Lycan_Howl *const this)
{
  this->_vptr_IHandleEntity = &off_4537EF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lycan_Howl::Schema_DynamicBinding  (line 572, @0x0000000002bfdff0, libserver.so)
// globals: CDOTA_Ability_Lycan_Howl::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lycan_Howl::Schema_DynamicBinding(
        const CDOTA_Ability_Lycan_Howl *const this)
{
  return CDOTA_Ability_Lycan_Howl::s_pSchemaBinding;
}


// CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 572, @0x0000000002bfe000, libserver.so)
// globals: CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::DestructInstance  (line 572, @0x0000000002bfe010, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lycan_Howl>
void __fastcall CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::FreeInstance  (line 572, @0x0000000002bfe030, libserver.so)
void __fastcall CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::CanAllocate  (line 572, @0x0000000002bfe050, libserver.so)
bool __fastcall CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 572, @0x0000000002bfe060, libserver.so)
// globals: CDOTA_Ability_Lycan_Howl::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lycan_Howl::s_pSchemaBinding;
}


// CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::AllocateInstance  (line 572, @0x0000000002c02030, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::ConstructInstance  (line 572, @0x0000000002c04870, libserver.so)  // inlines: CDOTA_Ability_Lycan_Howl, Construct<CDOTA_Ability_Lycan_Howl>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4537EF0;
  }
  return p;
}


// CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 572, @0x0000000002c0a730, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 572, @0x0000000002c0a750, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lycan_Howl::GetEntityClassInternal  (line 572, @0x0000000002c11650, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "CDOTA_Ability_Lycan_Howl"
// globals: `guard variable for'CDOTA_Ability_Lycan_Howl::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_HowlClass, CDOTA_Ability_Lycan_Howl::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_HowlClass, __dso_handle, CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lycan_Howl::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_HowlClassInfo, CDOTA_Ability_Lycan_Howl::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_HowlClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lycan_Howl::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lycan_Howl::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_HowlClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lycan_Howl::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_HowlClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Lycan_Howl::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_HowlClass);
    CDOTA_Ability_Lycan_Howl::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_HowlClass._vptr_CEntityClass = off_4537E70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lycan_Howl::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_HowlClass);
    __cxa_atexit(
      CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lycan_Howl::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_HowlClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lycan_HowlClass != 0 )
    return &CDOTA_Ability_Lycan_Howl::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_HowlClass;
  if ( `guard variable for'CDOTA_Ability_Lycan_Howl::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_HowlClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lycan_Howl::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_HowlClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lycan_Howl::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_HowlClassInfo,
      "CDOTA_Ability_Lycan_Howl",
      "lycan_howl",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lycan_Howl::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_HowlClassInfo);
  }
  CDOTA_Ability_Lycan_Howl::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_HowlClass.m_pClassInfo = &CDOTA_Ability_Lycan_Howl::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_HowlClassInfo;
  CDOTA_Ability_Lycan_Howl::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_HowlClass.m_pBaseClassInfo = CDOTA_Ability_Lycan_Howl::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_HowlClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lycan_HowlClass = &CDOTA_Ability_Lycan_Howl::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_HowlClass;
  CDOTA_Ability_Lycan_Howl::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_HowlClassInfo.m_pClass = &CDOTA_Ability_Lycan_Howl::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_HowlClass;
  CDOTA_Ability_Lycan_Howl::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_HowlClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lycan_HowlClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lycan_Howl::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_HowlClass;
}


// CDOTA_Ability_Lycan_Howl::YouForgotToImplementOrDeclareServerClass  (line 585, @0x0000000002bd2e20, libserver.so)
int __fastcall CDOTA_Ability_Lycan_Howl::YouForgotToImplementOrDeclareServerClass(CDOTA_Ability_Lycan_Howl *const this)
{
  return 0;
}


// CDOTA_Ability_Lycan_Howl::GetServerClass  (line 585, @0x0000000002bdc2f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Lycan_Howl::GetServerClass(CDOTA_Ability_Lycan_Howl *const this)
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


// CDOTA_Ability_Lycan_Howl::GetAbilityDamageToTargetOverInterval  (line 594, @0x0000000002be8dd0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "hero_bonus_damage"
__int64 __fastcall CDOTA_Ability_Lycan_Howl::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Lycan_Howl *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  float fIntervalb; // [rsp+0h] [rbp-1Ch]
  float fIntervalc; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    fIntervalb = CDOTA_BaseNPC::GetAttacksPerSecond(Caster) * fInterval;
    fIntervalc = fIntervalb * CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "hero_bonus_damage", -1, 0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * fIntervalc);
  }
  return result;
}


// CDOTA_Ability_Lycan_Howl::OnSpellStart  (line 604, @0x0000000002beffe0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, CDOTA_BaseNPC::AddNewModifier (18 total)
// strings: "howl_duration", "modifier_lycan_howl", "particles/units/heroes/hero_lycan/lycan_howl_cast.vpcf", "attach_mouth", "Hero_Lycan.Howl", "Hero_Lycan.Howl.Team" (8 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Lycan_Howl::OnSpellStart(CDOTA_Ability_Lycan_Howl *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v9; // r12
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  __int64 v14; // r12
  int v15; // r13d
  CHandle<CBaseEntity> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  CDOTA_BaseNPC *v22; // rax
  __int64 v23; // r15
  CDOTA_BaseNPC *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  const CDOTABody *v29; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+68h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  this->howl_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "howl_duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_lycan_howl");
  KeyValues::SetFloat(&kv, "duration", v2);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  v6 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v6->m_iTeamNum.m_Value, AbsOrigin, Caster, -1.0, &entities, 1, 3, 1024, 0, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v7) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_lycan/lycan_howl_cast.vpcf",
                  1,
                  v7,
                  0,
                  0);
  v9 = CDOTABaseAbility::GetCaster(this);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v10, v7, 1, v9, 5, "attach_mouth", vec3_invalid, 1);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v11, v7);
  v12 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(8, "Hero_Lycan.Howl", v12);
  v13 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(4, "Hero_Lycan.Howl.Team", v13);
  if ( entities.m_Size > 0 )
  {
    v14 = 0;
    v15 = 0;
    do
    {
      while ( 1 )
      {
        v16 = &entities.m_Memory.m_pMemory[v14];
        m_Index = entities.m_Memory.m_pMemory[v14].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v18 = v16->m_Index;
          v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
          if ( v19 != 0 )
          {
            v20 = &v19[v18 & 0x1FF];
            if ( v20 != 0 && m_Index == v20->m_EHandle.m_Index )
            {
              m_pInstance = v20->m_pInstance;
              if ( v20->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                v22 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(m_pInstance, v22, this, "modifier_lycan_howl", &kv, 0);
                if ( CDOTABaseAbility::GetCaster(this) != m_pInstance )
                {
                  v23 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
                  v24 = CDOTABaseAbility::GetCaster(this);
                  if ( v23 == (*(v24->_vptr_IHandleEntity + 413))(v24) )
                    break;
                }
              }
            }
          }
        }
        ++v15;
        ++v14;
        if ( entities.m_Size <= v15 )
          goto LABEL_15;
      }
      if ( m_pInstance->m_bIsIdle
        && (v29 = (*(m_pInstance->_vptr_IHandleEntity + 377))(m_pInstance), CDOTABody::GetAnimation(v29) == 1500) )
      {
        CDOTA_BaseNPC::StartGesture(m_pInstance, 1516, 0.1, 0.1, 9, 0, 1.0);
      }
      else
      {
        CDOTA_BaseNPC::StartGesture(m_pInstance, 1517, 0.1, 0.1, 9, 0, 1.0);
      }
      v25 = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   v25,
                   "particles/units/heroes/hero_lycan/lycan_howl_cast_wolves.vpcf",
                   1,
                   m_pInstance,
                   0,
                   0);
      v27 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v27, Particle, 1, m_pInstance, 5, "attach_attack1", vec3_invalid, 1);
      v28 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v28, Particle);
      ++v15;
      ++v14;
    }
    while ( entities.m_Size > v15 );
  }
LABEL_15:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Lycan_Howl::~CDOTA_Modifier_Lycan_Howl  (line 653, @0x0000000002c03f60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lycan_Howl::~CDOTA_Modifier_Lycan_Howl(CDOTA_Modifier_Lycan_Howl *const this)
{
  this->_vptr_CDOTA_Buff = &off_45389B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lycan_Howl::~CDOTA_Modifier_Lycan_Howl  (line 653, @0x0000000002c03f80, libserver.so)  // inlines: ~CDOTA_Modifier_Lycan_Howl
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lycan_Howl::~CDOTA_Modifier_Lycan_Howl(CDOTA_Modifier_Lycan_Howl *const this)
{
  this->_vptr_CDOTA_Buff = &off_45389B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lycan_Howl::GetEffectName  (line 663, @0x0000000002bfe070, libserver.so)
// strings: "particles/units/heroes/hero_lycan/lycan_howl_buff.vpcf"
const char *__fastcall CDOTA_Modifier_Lycan_Howl::GetEffectName(CDOTA_Modifier_Lycan_Howl *const this)
{
  return "particles/units/heroes/hero_lycan/lycan_howl_buff.vpcf";
}


// CDOTA_Modifier_Lycan_Howl::GetAttributes  (line 667, @0x0000000002c043e0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Lycan_Howl::GetAttributes(CDOTA_Modifier_Lycan_Howl *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 4;
}


// CDOTA_Modifier_Lycan_Howl::DeclareFunctions  (line 682, @0x0000000002bd2e30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Lycan_Howl::GetModifierExtraHealthBonus(CModifierParams const&), CDOTA_Modifier_Lycan_Howl::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Lycan_Howl::DeclareFunctions(CDOTA_Modifier_Lycan_Howl *const this)
{
  this->m_Functions[61].__pfn = CDOTA_Modifier_Lycan_Howl::GetModifierExtraHealthBonus;
  this->m_Functions[61].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Lycan_Howl::GetModifierPreAttack_BonusDamage;
}


// CDOTA_Modifier_Lycan_Howl::GetModifierExtraHealthBonus  (line 689, @0x0000000002bd9690, libserver.so)  // inlines: DOTAGameRules, GetTimeOfDay, IsDaytime, RemapValClamped, clamp<float, float>
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_Howl::GetModifierExtraHealthBonus(
        CDOTA_Modifier_Lycan_Howl *const this,
        const CModifierParams *const params)
{
  int v3; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  __int64 v5; // xmm0_8
  float hero_bonus_hp; // xmm1_4
  float v8; // xmm1_4
  float flMultiplier; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  if ( LOWORD(g_pGameRules[14].m_nQuestPhase) != 0
    || (v8 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0) < 0.0
    || (v3 = 1065353216, v8 > 1.0)
    || (v8 + 0.0) < 0.25
    || (v8 + 0.0) > 0.75 )
  {
    v3 = 0x40000000;
  }
  flMultiplier = *&v3;
  Parent = CDOTA_Buff::GetParent(this);
  v5 = LODWORD(flMultiplier);
  if ( (Parent->m_iUnitType & 1) != 0 )
    hero_bonus_hp = this->hero_bonus_hp;
  else
    hero_bonus_hp = this->unit_bonus_hp;
  result.m_szVal = 0;
  *&v5 = flMultiplier * hero_bonus_hp;
  *&result.m_eType = (v5 << 32) | 1;
  return result;
}


// CDOTA_Modifier_Lycan_Howl::OnCreated  (line 707, @0x0000000002be6660, libserver.so)  // inlines: DOTAGameRules, GetTimeOfDay, IsDaytime, RemapValClamped, clamp<float, float>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, CBaseEntity::SetMaxHealth, CDOTA_BaseNPC::Heal
// strings: "hero_bonus_damage", "unit_bonus_damage", "hero_bonus_hp", "unit_bonus_hp"
void __fastcall CDOTA_Modifier_Lycan_Howl::OnCreated(CDOTA_Modifier_Lycan_Howl *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  int hero_bonus_hp; // r12d
  CDOTA_BaseNPC *Parent; // rax
  int v9; // r13d
  CDOTA_BaseNPC *v10; // rax
  CDOTABaseAbility *v11; // r13
  CDOTA_BaseNPC *v12; // rax
  float v13; // xmm0_4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->hero_bonus_damage, "hero_bonus_damage");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->unit_bonus_damage, "unit_bonus_damage");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->hero_bonus_hp, "hero_bonus_hp");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->unit_bonus_hp, "unit_bonus_hp");
  hero_bonus_hp = this->hero_bonus_hp;
  this->bonus_hp_applied = 0;
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) == 0 )
    hero_bonus_hp = this->unit_bonus_hp;
  if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) != 0
    || BYTE1(g_pGameRules[14].m_nQuestPhase) != 0
    || (v13 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0) < 0.0
    || v13 > 1.0
    || (v13 + 0.0) < 0.25
    || (v13 + 0.0) > 0.75 )
  {
    hero_bonus_hp *= 2;
  }
  this->bonus_hp_applied = hero_bonus_hp;
  Parent = CDOTA_Buff::GetParent(this);
  v9 = hero_bonus_hp + (*(Parent->_vptr_IHandleEntity + 156))(Parent);
  v10 = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetMaxHealth(v10, v9);
  v11 = CDOTA_Buff::GetAbility(this);
  v12 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::Heal(v12, hero_bonus_hp, v11, 0, 1);
}


// CDOTA_Modifier_Lycan_Howl::OnRefresh  (line 732, @0x0000000002be67f0, libserver.so)  // inlines: DOTAGameRules, GetTimeOfDay, IsDaytime, RemapValClamped, clamp<float, float>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, CBaseEntity::SetMaxHealth, CDOTA_BaseNPC::Heal
// strings: "hero_bonus_damage", "unit_bonus_damage", "hero_bonus_hp", "unit_bonus_hp"
void __fastcall CDOTA_Modifier_Lycan_Howl::OnRefresh(CDOTA_Modifier_Lycan_Howl *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  int unit_bonus_hp; // r12d
  CDOTA_BaseNPC *Parent; // rax
  int v9; // r13d
  CDOTA_BaseNPC *v10; // rax
  CDOTABaseAbility *v11; // r13
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  float v14; // xmm0_4
  float flAmount; // [rsp+Ch] [rbp-24h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->hero_bonus_damage, "hero_bonus_damage");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->unit_bonus_damage, "unit_bonus_damage");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->hero_bonus_hp, "hero_bonus_hp");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->unit_bonus_hp, "unit_bonus_hp");
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) == 0 )
  {
    unit_bonus_hp = this->unit_bonus_hp;
    if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) != 0
      || BYTE1(g_pGameRules[14].m_nQuestPhase) != 0
      || (v14 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0) < 0.0
      || v14 > 1.0
      || (v14 + 0.0) < 0.25
      || (v14 + 0.0) > 0.75 )
    {
      unit_bonus_hp *= 2;
    }
    Parent = CDOTA_Buff::GetParent(this);
    v9 = unit_bonus_hp + (*(Parent->_vptr_IHandleEntity + 156))(Parent) - this->bonus_hp_applied;
    v10 = CDOTA_Buff::GetParent(this);
    CBaseEntity::SetMaxHealth(v10, v9);
    v11 = CDOTA_Buff::GetAbility(this);
    v12 = CDOTA_Buff::GetParent(this);
    flAmount = (unit_bonus_hp + (*(v12->_vptr_IHandleEntity + 156))(v12) - this->bonus_hp_applied);
    v13 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::Heal(v13, flAmount, v11, 0, 1);
    this->bonus_hp_applied = unit_bonus_hp;
  }
}


// CDOTA_Modifier_Lycan_Howl::GetModifierPreAttack_BonusDamage  (line 753, @0x0000000002bd95a0, libserver.so)  // inlines: DOTAGameRules, GetTimeOfDay, IsDaytime, RemapValClamped, clamp<float, float>
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_Howl::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Lycan_Howl *const this,
        const CModifierParams *const params)
{
  int v3; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  __int64 v5; // xmm0_8
  float hero_bonus_damage; // xmm1_4
  float v8; // xmm1_4
  float flMultiplier; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  if ( LOWORD(g_pGameRules[14].m_nQuestPhase) != 0
    || (v8 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0) < 0.0
    || (v3 = 1065353216, v8 > 1.0)
    || (v8 + 0.0) < 0.25
    || (v8 + 0.0) > 0.75 )
  {
    v3 = 0x40000000;
  }
  flMultiplier = *&v3;
  Parent = CDOTA_Buff::GetParent(this);
  v5 = LODWORD(flMultiplier);
  if ( (Parent->m_iUnitType & 1) != 0 )
    hero_bonus_damage = this->hero_bonus_damage;
  else
    hero_bonus_damage = this->unit_bonus_damage;
  result.m_szVal = 0;
  *&v5 = flMultiplier * hero_bonus_damage;
  *&result.m_eType = (v5 << 32) | 1;
  return result;
}


// CDOTA_Modifier_Lycan_Howl::OnRemoved  (line 769, @0x0000000002bd53b0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth, CBaseEntity::SetMaxHealth
void __fastcall CDOTA_Modifier_Lycan_Howl::OnRemoved(CDOTA_Modifier_Lycan_Howl *const this)
{
  CDOTA_BaseNPC *Parent; // rbx
  int Health; // r12d
  int v4; // r12d
  float v5; // xmm0_4
  int v6; // r13d
  int v7; // eax
  float flDesiredRatio; // [rsp+Ch] [rbp-24h]

  Parent = CDOTA_Buff::GetParent(this);
  if ( (Parent->m_iUnitType & 1) != 0 )
  {
    Health = CBaseEntity::GetHealth(Parent);
    flDesiredRatio = Health / (*(Parent->_vptr_IHandleEntity + 156))(Parent);
    (*(Parent->_vptr_IHandleEntity + 490))(Parent);
  }
  else
  {
    v6 = CBaseEntity::GetHealth(Parent);
    v7 = (*(Parent->_vptr_IHandleEntity + 156))(Parent);
    flDesiredRatio = v6 / v7;
    CBaseEntity::SetMaxHealth(Parent, (v7 - this->bonus_hp_applied));
  }
  v4 = CBaseEntity::GetHealth(Parent);
  v5 = (*(Parent->_vptr_IHandleEntity + 156))(Parent) * flDesiredRatio;
  if ( v4 != v5 )
    CDOTA_BaseNPC::ModifyHealth(Parent, v5, 0, 0, 0);
}


// CDOTA_Ability_Lycan_FeralImpulse::~CDOTA_Ability_Lycan_FeralImpulse  (line 821, @0x0000000002c051c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Lycan_FeralImpulse::~CDOTA_Ability_Lycan_FeralImpulse(
        CDOTA_Ability_Lycan_FeralImpulse *const this)
{
  this->_vptr_IHandleEntity = &off_4538D10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Lycan_FeralImpulse::~CDOTA_Ability_Lycan_FeralImpulse  (line 821, @0x0000000002c051e0, libserver.so)  // inlines: ~CDOTA_Ability_Lycan_FeralImpulse
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Lycan_FeralImpulse::~CDOTA_Ability_Lycan_FeralImpulse(
        CDOTA_Ability_Lycan_FeralImpulse *const this)
{
  this->_vptr_IHandleEntity = &off_4538D10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lycan_FeralImpulse::Schema_DynamicBinding  (line 823, @0x0000000002bfe080, libserver.so)
// globals: CDOTA_Ability_Lycan_FeralImpulse::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lycan_FeralImpulse::Schema_DynamicBinding(
        const CDOTA_Ability_Lycan_FeralImpulse *const this)
{
  return CDOTA_Ability_Lycan_FeralImpulse::s_pSchemaBinding;
}


// CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 823, @0x0000000002bfe090, libserver.so)
// globals: CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::DestructInstance  (line 823, @0x0000000002bfe0a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lycan_FeralImpulse>
void __fastcall CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::FreeInstance  (line 823, @0x0000000002bfe0c0, libserver.so)
void __fastcall CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::CanAllocate  (line 823, @0x0000000002bfe0e0, libserver.so)
bool __fastcall CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 823, @0x0000000002bfe0f0, libserver.so)
// globals: CDOTA_Ability_Lycan_FeralImpulse::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lycan_FeralImpulse::s_pSchemaBinding;
}


// CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::AllocateInstance  (line 823, @0x0000000002c02070, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::ConstructInstance  (line 823, @0x0000000002c048a0, libserver.so)  // inlines: CDOTA_Ability_Lycan_FeralImpulse, Construct<CDOTA_Ability_Lycan_FeralImpulse>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4538D10;
  }
  return p;
}


// CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 823, @0x0000000002c0a780, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 823, @0x0000000002c0a7a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInternal  (line 823, @0x0000000002c117a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "CDOTA_Ability_Lycan_FeralImpulse"
// globals: `guard variable for'CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClass, CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClass, __dso_handle, CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClassInfo, CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClass);
    CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClass._vptr_CEntityClass = off_4538C90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClass);
    __cxa_atexit(
      CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lycan_FeralImpulseClass != 0 )
    return &CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClass;
  if ( `guard variable for'CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClassInfo,
      "CDOTA_Ability_Lycan_FeralImpulse",
      "lycan_feral_impulse",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClassInfo);
  }
  CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClass.m_pClassInfo = &CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClassInfo;
  CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClass.m_pBaseClassInfo = CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lycan_FeralImpulseClass = &CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClass;
  CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClassInfo.m_pClass = &CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClass;
  CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lycan_FeralImpulseClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lycan_FeralImpulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_FeralImpulseClass;
}


// CDOTA_Ability_Lycan_FeralImpulse::GetIntrinsicModifierName  (line 831, @0x0000000002bfe100, libserver.so)
// strings: "modifier_lycan_feral_impulse_aura"
const char *__fastcall CDOTA_Ability_Lycan_FeralImpulse::GetIntrinsicModifierName(
        CDOTA_Ability_Lycan_FeralImpulse *const this)
{
  return "modifier_lycan_feral_impulse_aura";
}


// CDOTA_Ability_Lycan_FeralImpulse::YouForgotToImplementOrDeclareServerClass  (line 836, @0x0000000002bd2e70, libserver.so)
int __fastcall CDOTA_Ability_Lycan_FeralImpulse::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Lycan_FeralImpulse *const this)
{
  return 0;
}


// CDOTA_Ability_Lycan_FeralImpulse::GetServerClass  (line 836, @0x0000000002bdc4b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Lycan_FeralImpulse::GetServerClass(CDOTA_Ability_Lycan_FeralImpulse *const this)
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


// CDOTA_Ability_Lycan_FeralImpulse::GetAbilityDamageToTargetOverInterval  (line 845, @0x0000000002be8e70, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Lycan_FeralImpulse::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Lycan_FeralImpulse *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_Ability_Lycan_FeralImpulse *v6; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  float fIntervalb; // [rsp+0h] [rbp-1Ch]
  float fIntervalc; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    v6 = this;
    Caster = CDOTABaseAbility::GetCaster(this);
    fIntervalb = CDOTA_BaseNPC::GetAttacksPerSecond(Caster) * fInterval;
    v8 = CDOTABaseAbility::GetCaster(v6);
    fIntervalc = fIntervalb * CDOTA_BaseNPC::GetAverageTrueAttackDamage(v8, pTarget);
    LODWORD(v6) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_damage", -1, 0);
    return (((v6 * fIntervalc) / 100.0) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)));
  }
  return result;
}


// CDOTA_Modifier_Lycan_FeralImpulse_Aura::~CDOTA_Modifier_Lycan_FeralImpulse_Aura  (line 859, @0x0000000002c03f10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lycan_FeralImpulse_Aura::~CDOTA_Modifier_Lycan_FeralImpulse_Aura(
        CDOTA_Modifier_Lycan_FeralImpulse_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_45397D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lycan_FeralImpulse_Aura::~CDOTA_Modifier_Lycan_FeralImpulse_Aura  (line 859, @0x0000000002c03f30, libserver.so)  // inlines: ~CDOTA_Modifier_Lycan_FeralImpulse_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lycan_FeralImpulse_Aura::~CDOTA_Modifier_Lycan_FeralImpulse_Aura(
        CDOTA_Modifier_Lycan_FeralImpulse_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_45397D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lycan_FeralImpulse_Aura::IsHidden  (line 867, @0x0000000002bfe110, libserver.so)
bool __fastcall CDOTA_Modifier_Lycan_FeralImpulse_Aura::IsHidden(CDOTA_Modifier_Lycan_FeralImpulse_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Lycan_FeralImpulse_Aura::IsAura  (line 869, @0x0000000002bfe120, libserver.so)
bool __fastcall CDOTA_Modifier_Lycan_FeralImpulse_Aura::IsAura(CDOTA_Modifier_Lycan_FeralImpulse_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Lycan_FeralImpulse_Aura::GetModifierAura  (line 870, @0x0000000002bfe130, libserver.so)
// strings: "modifier_lycan_feral_impulse"
const char *__fastcall CDOTA_Modifier_Lycan_FeralImpulse_Aura::GetModifierAura(
        CDOTA_Modifier_Lycan_FeralImpulse_Aura *const this)
{
  return "modifier_lycan_feral_impulse";
}


// CDOTA_Modifier_Lycan_FeralImpulse_Aura::GetAuraSearchTeam  (line 872, @0x0000000002bfe140, libserver.so)
int __fastcall CDOTA_Modifier_Lycan_FeralImpulse_Aura::GetAuraSearchTeam(
        CDOTA_Modifier_Lycan_FeralImpulse_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Lycan_FeralImpulse_Aura::GetAuraSearchType  (line 873, @0x0000000002bfe150, libserver.so)
int __fastcall CDOTA_Modifier_Lycan_FeralImpulse_Aura::GetAuraSearchType(
        CDOTA_Modifier_Lycan_FeralImpulse_Aura *const this)
{
  return 19;
}


// CDOTA_Modifier_Lycan_FeralImpulse_Aura::GetAuraSearchFlags  (line 874, @0x0000000002bfe160, libserver.so)
int __fastcall CDOTA_Modifier_Lycan_FeralImpulse_Aura::GetAuraSearchFlags(
        CDOTA_Modifier_Lycan_FeralImpulse_Aura *const this)
{
  return 1024;
}


// CDOTA_Modifier_Lycan_FeralImpulse_Aura::GetAuraRadius  (line 875, @0x0000000002bfe170, libserver.so)
int __fastcall CDOTA_Modifier_Lycan_FeralImpulse_Aura::GetAuraRadius(
        CDOTA_Modifier_Lycan_FeralImpulse_Aura *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Lycan_FeralImpulse_Aura::GetAuraEntityReject  (line 876, @0x0000000002c05cb0, libserver.so)
// calls: CDOTA_Buff::GetCaster
bool __fastcall CDOTA_Modifier_Lycan_FeralImpulse_Aura::GetAuraEntityReject(
        CDOTA_Modifier_Lycan_FeralImpulse_Aura *const this,
        CDOTA_BaseNPC *pNPC)
{
  __int64 v3; // rbx
  CDOTA_BaseNPC *Caster; // rax

  v3 = (*(pNPC->_vptr_IHandleEntity + 413))(pNPC);
  Caster = CDOTA_Buff::GetCaster(this);
  return v3 != (*(Caster->_vptr_IHandleEntity + 413))(Caster);
}


// CDOTA_Modifier_Lycan_FeralImpulse_Aura::OnCreated  (line 897, @0x0000000002beae60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Lycan_FeralImpulse_Aura::OnCreated(
        CDOTA_Modifier_Lycan_FeralImpulse_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Lycan_FeralImpulse_Aura::OnRefresh  (line 904, @0x0000000002beaec0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Lycan_FeralImpulse_Aura::OnRefresh(
        CDOTA_Modifier_Lycan_FeralImpulse_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Lycan_FeralImpulse::~CDOTA_Modifier_Lycan_FeralImpulse  (line 913, @0x0000000002c03ec0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lycan_FeralImpulse::~CDOTA_Modifier_Lycan_FeralImpulse(
        CDOTA_Modifier_Lycan_FeralImpulse *const this)
{
  this->_vptr_CDOTA_Buff = &off_4539AF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lycan_FeralImpulse::~CDOTA_Modifier_Lycan_FeralImpulse  (line 913, @0x0000000002c03ee0, libserver.so)  // inlines: ~CDOTA_Modifier_Lycan_FeralImpulse
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lycan_FeralImpulse::~CDOTA_Modifier_Lycan_FeralImpulse(
        CDOTA_Modifier_Lycan_FeralImpulse *const this)
{
  this->_vptr_CDOTA_Buff = &off_4539AF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lycan_FeralImpulse::OnCreated  (line 935, @0x0000000002beb840, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_hp_regen"
void __fastcall CDOTA_Modifier_Lycan_FeralImpulse::OnCreated(
        CDOTA_Modifier_Lycan_FeralImpulse *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_hp_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_hp_regen", -1, 0);
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
    this->bonus_hp_regen = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_damage = 0;
}


// CDOTA_Modifier_Lycan_FeralImpulse::OnRefresh  (line 943, @0x0000000002beb720, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_hp_regen"
void __fastcall CDOTA_Modifier_Lycan_FeralImpulse::OnRefresh(
        CDOTA_Modifier_Lycan_FeralImpulse *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_hp_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_hp_regen", -1, 0);
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
    this->bonus_hp_regen = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_damage = 0;
}


// CDOTA_Modifier_Lycan_FeralImpulse::DeclareFunctions  (line 951, @0x0000000002bd2e80, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Lycan_FeralImpulse::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Lycan_FeralImpulse::GetModifierBaseDamageOutgoing_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Lycan_FeralImpulse::DeclareFunctions(CDOTA_Modifier_Lycan_FeralImpulse *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Lycan_FeralImpulse::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[34].__delta = 0;
  this->m_Functions[34].__pfn = CDOTA_Modifier_Lycan_FeralImpulse::GetModifierBaseDamageOutgoing_Percentage;
}


// CDOTA_Modifier_Lycan_FeralImpulse::GetModifierConstantHealthRegen  (line 957, @0x0000000002bd2ec0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_FeralImpulse::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Lycan_FeralImpulse *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_hp_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Lycan_FeralImpulse::GetModifierBaseDamageOutgoing_Percentage  (line 962, @0x0000000002bd2ee0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_FeralImpulse::GetModifierBaseDamageOutgoing_Percentage(
        CDOTA_Modifier_Lycan_FeralImpulse *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Lycan_Shapeshift::~CDOTA_Ability_Lycan_Shapeshift  (line 973, @0x0000000002c05210, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Lycan_Shapeshift::~CDOTA_Ability_Lycan_Shapeshift(
        CDOTA_Ability_Lycan_Shapeshift *const this)
{
  this->_vptr_IHandleEntity = &off_4539E50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Lycan_Shapeshift::~CDOTA_Ability_Lycan_Shapeshift  (line 973, @0x0000000002c05230, libserver.so)  // inlines: ~CDOTA_Ability_Lycan_Shapeshift
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Lycan_Shapeshift::~CDOTA_Ability_Lycan_Shapeshift(
        CDOTA_Ability_Lycan_Shapeshift *const this)
{
  this->_vptr_IHandleEntity = &off_4539E50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lycan_Shapeshift::Schema_DynamicBinding  (line 975, @0x0000000002bfe180, libserver.so)
// globals: CDOTA_Ability_Lycan_Shapeshift::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lycan_Shapeshift::Schema_DynamicBinding(
        const CDOTA_Ability_Lycan_Shapeshift *const this)
{
  return CDOTA_Ability_Lycan_Shapeshift::s_pSchemaBinding;
}


// CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 975, @0x0000000002bfe190, libserver.so)
// globals: CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::DestructInstance  (line 975, @0x0000000002bfe1a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lycan_Shapeshift>
void __fastcall CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::FreeInstance  (line 975, @0x0000000002bfe1c0, libserver.so)
void __fastcall CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::CanAllocate  (line 975, @0x0000000002bfe1e0, libserver.so)
bool __fastcall CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 975, @0x0000000002bfe1f0, libserver.so)
// globals: CDOTA_Ability_Lycan_Shapeshift::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lycan_Shapeshift::s_pSchemaBinding;
}


// CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::AllocateInstance  (line 975, @0x0000000002c020b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::ConstructInstance  (line 975, @0x0000000002c048d0, libserver.so)  // inlines: CDOTA_Ability_Lycan_Shapeshift, Construct<CDOTA_Ability_Lycan_Shapeshift>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4539E50;
  }
  return p;
}


// CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 975, @0x0000000002c0a7d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 975, @0x0000000002c0a7f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInternal  (line 975, @0x0000000002c118f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "CDOTA_Ability_Lycan_Shapeshift"
// globals: `guard variable for'CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClass, CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClass, __dso_handle, CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClassInfo, CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClass);
    CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClass._vptr_CEntityClass = off_4539DD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClass);
    __cxa_atexit(
      CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lycan_ShapeshiftClass != 0 )
    return &CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClass;
  if ( `guard variable for'CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClassInfo,
      "CDOTA_Ability_Lycan_Shapeshift",
      "lycan_shapeshift",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClassInfo);
  }
  CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClass.m_pClassInfo = &CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClassInfo;
  CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClass.m_pBaseClassInfo = CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lycan_ShapeshiftClass = &CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClass;
  CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClassInfo.m_pClass = &CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClass;
  CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lycan_ShapeshiftClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lycan_Shapeshift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lycan_ShapeshiftClass;
}


// CDOTA_Ability_Lycan_Shapeshift::OnSpellStart  (line 990, @0x0000000002bed010, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "transformation_time", "modifier_lycan_shapeshift_transform"
void __fastcall CDOTA_Ability_Lycan_Shapeshift::OnSpellStart(CDOTA_Ability_Lycan_Shapeshift *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "transformation_time", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_lycan_shapeshift_transform");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_lycan_shapeshift_transform", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Lycan_Shapeshift::GetAbilityDamageToTargetOverInterval  (line 1006, @0x0000000002be8f30, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Lycan_Shapeshift::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Lycan_Shapeshift *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  float fIntervalb; // [rsp+0h] [rbp-1Ch]
  float fIntervalc; // [rsp+0h] [rbp-1Ch]
  float fIntervald; // [rsp+0h] [rbp-1Ch]
  float fIntervale; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    fIntervalb = CDOTA_BaseNPC::GetAttacksPerSecond(Caster) * fInterval;
    v8 = CDOTABaseAbility::GetCaster(this);
    fIntervalc = fIntervalb * CDOTA_BaseNPC::GetAverageTrueAttackDamage(v8, pTarget);
    fIntervald = fIntervalc * (CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "crit_multiplier", -1, 0) / 100.0);
    fIntervale = fIntervald * (CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "crit_chance", -1, 0) / 100.0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * fIntervale);
  }
  return result;
}


// CDOTA_Modifier_Lycan_Shapeshift_Transform::~CDOTA_Modifier_Lycan_Shapeshift_Transform  (line 1020, @0x0000000002c03e70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lycan_Shapeshift_Transform::~CDOTA_Modifier_Lycan_Shapeshift_Transform(
        CDOTA_Modifier_Lycan_Shapeshift_Transform *const this)
{
  this->_vptr_CDOTA_Buff = &off_453A910;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lycan_Shapeshift_Transform::~CDOTA_Modifier_Lycan_Shapeshift_Transform  (line 1020, @0x0000000002c03e90, libserver.so)  // inlines: ~CDOTA_Modifier_Lycan_Shapeshift_Transform
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lycan_Shapeshift_Transform::~CDOTA_Modifier_Lycan_Shapeshift_Transform(
        CDOTA_Modifier_Lycan_Shapeshift_Transform *const this)
{
  this->_vptr_CDOTA_Buff = &off_453A910;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lycan_Shapeshift_Transform::IsHidden  (line 1027, @0x0000000002bfe200, libserver.so)
bool __fastcall CDOTA_Modifier_Lycan_Shapeshift_Transform::IsHidden(
        CDOTA_Modifier_Lycan_Shapeshift_Transform *const this)
{
  return 1;
}


// CDOTA_Modifier_Lycan_Shapeshift_Transform::IsPurgable  (line 1028, @0x0000000002bfe210, libserver.so)
bool __fastcall CDOTA_Modifier_Lycan_Shapeshift_Transform::IsPurgable(
        CDOTA_Modifier_Lycan_Shapeshift_Transform *const this)
{
  return 0;
}


// CDOTA_Modifier_Lycan_Shapeshift_Transform::OnCreated  (line 1037, @0x0000000002bd5230, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "Hero_Lycan.Shapeshift.Cast", "particles/units/heroes/hero_lycan/lycan_shapeshift_cast.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_Lycan_Shapeshift_Transform::OnCreated(
        CDOTA_Modifier_Lycan_Shapeshift_Transform *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // rbx
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1519, 0.0, 0.0, 9, 0, 1.0);
  v4 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v4, "Hero_Lycan.Shapeshift.Cast", 0.0, 0, 0);
  v5 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v5) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_lycan/lycan_shapeshift_cast.vpcf",
                  1,
                  v5,
                  0,
                  0);
  v7 = CDOTA_Buff::GetCaster(this);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v8, v5, 1, v7, 5, "attach_hitloc", vec3_invalid, 1);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v9, v5);
}


// CDOTA_Modifier_Lycan_Shapeshift_Transform::OnDestroy  (line 1052, @0x0000000002bf3f20, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "special_bonus_unique_lycan_1", "modifier_lycan_shapeshift", "modifier_lycan_shapeshift_aura"
void __fastcall CDOTA_Modifier_Lycan_Shapeshift_Transform::OnDestroy(
        CDOTA_Modifier_Lycan_Shapeshift_Transform *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v6; // xmm1_4
  CDOTABaseAbility *v7; // r14
  CDOTA_BaseNPC *v8; // r13
  CDOTA_BaseNPC *v9; // rax
  CDOTABaseAbility *v10; // r14
  CDOTA_BaseNPC *v11; // r13
  CDOTA_BaseNPC *v12; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    if ( Ability != 0 )
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
    Caster = CDOTA_Buff::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_lycan_1", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
      CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    KeyValues::KeyValues(&kv, "modifier_lycan_shapeshift");
    KeyValues::SetFloat(&kv, "duration", v6);
    v7 = CDOTA_Buff::GetAbility(this);
    v8 = CDOTA_Buff::GetCaster(this);
    v9 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v9, v8, v7, "modifier_lycan_shapeshift", &kv, 0);
    v10 = CDOTA_Buff::GetAbility(this);
    v11 = CDOTA_Buff::GetCaster(this);
    v12 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v12, v11, v10, "modifier_lycan_shapeshift_aura", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Lycan_Shapeshift_Transform::CheckState  (line 1077, @0x0000000002bd2f00, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Lycan_Shapeshift_Transform::CheckState(
        CDOTA_Modifier_Lycan_Shapeshift_Transform *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_Lycan_Shapeshift_Thinker::~CDOTA_Modifier_Lycan_Shapeshift_Thinker  (line 1089, @0x0000000002c04370, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lycan_Shapeshift_Thinker::~CDOTA_Modifier_Lycan_Shapeshift_Thinker(
        CDOTA_Modifier_Lycan_Shapeshift_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_453ABF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lycan_Shapeshift_Thinker::~CDOTA_Modifier_Lycan_Shapeshift_Thinker  (line 1089, @0x0000000002c04390, libserver.so)  // inlines: ~CDOTA_Modifier_Lycan_Shapeshift_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lycan_Shapeshift_Thinker::~CDOTA_Modifier_Lycan_Shapeshift_Thinker(
        CDOTA_Modifier_Lycan_Shapeshift_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_453ABF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lycan_Shapeshift_Thinker::IsHidden  (line 1094, @0x0000000002bfe220, libserver.so)
bool __fastcall CDOTA_Modifier_Lycan_Shapeshift_Thinker::IsHidden(CDOTA_Modifier_Lycan_Shapeshift_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Lycan_Shapeshift_Thinker::IsPurgable  (line 1095, @0x0000000002bfe230, libserver.so)
bool __fastcall CDOTA_Modifier_Lycan_Shapeshift_Thinker::IsPurgable(
        CDOTA_Modifier_Lycan_Shapeshift_Thinker *const this)
{
  return 0;
}


// CDOTA_Modifier_Lycan_Shapeshift_Thinker::IsAura  (line 1097, @0x0000000002bfe240, libserver.so)
bool __fastcall CDOTA_Modifier_Lycan_Shapeshift_Thinker::IsAura(CDOTA_Modifier_Lycan_Shapeshift_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Lycan_Shapeshift_Thinker::GetModifierAura  (line 1099, @0x0000000002bfe250, libserver.so)
// strings: "modifier_lycan_shapeshift_speed"
const char *__fastcall CDOTA_Modifier_Lycan_Shapeshift_Thinker::GetModifierAura(
        CDOTA_Modifier_Lycan_Shapeshift_Thinker *const this)
{
  return "modifier_lycan_shapeshift_speed";
}


// CDOTA_Modifier_Lycan_Shapeshift_Thinker::GetAuraSearchTeam  (line 1101, @0x0000000002bfe260, libserver.so)
int __fastcall CDOTA_Modifier_Lycan_Shapeshift_Thinker::GetAuraSearchTeam(
        CDOTA_Modifier_Lycan_Shapeshift_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Lycan_Shapeshift_Thinker::GetAuraSearchType  (line 1102, @0x0000000002bfe270, libserver.so)
int __fastcall CDOTA_Modifier_Lycan_Shapeshift_Thinker::GetAuraSearchType(
        CDOTA_Modifier_Lycan_Shapeshift_Thinker *const this)
{
  return 19;
}


// CDOTA_Modifier_Lycan_Shapeshift_Thinker::GetAuraSearchFlags  (line 1103, @0x0000000002bfe280, libserver.so)
int __fastcall CDOTA_Modifier_Lycan_Shapeshift_Thinker::GetAuraSearchFlags(
        CDOTA_Modifier_Lycan_Shapeshift_Thinker *const this)
{
  return 0;
}


// CDOTA_Modifier_Lycan_Shapeshift_Thinker::GetAuraRadius  (line 1104, @0x0000000002bfe290, libserver.so)
int __fastcall CDOTA_Modifier_Lycan_Shapeshift_Thinker::GetAuraRadius(
        CDOTA_Modifier_Lycan_Shapeshift_Thinker *const this)
{
  return -1;
}


// CDOTA_Modifier_Lycan_Shapeshift_Thinker::GetAuraDuration  (line 1105, @0x0000000002bfe2a0, libserver.so)
float __fastcall CDOTA_Modifier_Lycan_Shapeshift_Thinker::GetAuraDuration(
        CDOTA_Modifier_Lycan_Shapeshift_Thinker *const this)
{
  return 0.1;
}


// CDOTA_Modifier_Lycan_Shapeshift_Thinker::GetAuraEntityReject  (line 1106, @0x0000000002c05cf0, libserver.so)
// calls: CDOTA_Buff::GetCaster
bool __fastcall CDOTA_Modifier_Lycan_Shapeshift_Thinker::GetAuraEntityReject(
        CDOTA_Modifier_Lycan_Shapeshift_Thinker *const this,
        CDOTA_BaseNPC *pNPC)
{
  int v3; // ebx
  CDOTA_BaseNPC *Caster; // rax

  v3 = (*(pNPC->_vptr_IHandleEntity + 414))(pNPC);
  Caster = CDOTA_Buff::GetCaster(this);
  return v3 != (*(Caster->_vptr_IHandleEntity + 414))(Caster);
}


// CDOTA_Modifier_Lycan_Shapeshift::~CDOTA_Modifier_Lycan_Shapeshift  (line 1122, @0x0000000002c03e20, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lycan_Shapeshift::~CDOTA_Modifier_Lycan_Shapeshift(
        CDOTA_Modifier_Lycan_Shapeshift *const this)
{
  this->_vptr_CDOTA_Buff = &off_453AF50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lycan_Shapeshift::~CDOTA_Modifier_Lycan_Shapeshift  (line 1122, @0x0000000002c03e40, libserver.so)  // inlines: ~CDOTA_Modifier_Lycan_Shapeshift
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lycan_Shapeshift::~CDOTA_Modifier_Lycan_Shapeshift(
        CDOTA_Modifier_Lycan_Shapeshift *const this)
{
  this->_vptr_CDOTA_Buff = &off_453AF50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lycan_Shapeshift::IsHidden  (line 1127, @0x0000000002bfe2b0, libserver.so)
bool __fastcall CDOTA_Modifier_Lycan_Shapeshift::IsHidden(CDOTA_Modifier_Lycan_Shapeshift *const this)
{
  return 0;
}


// CDOTA_Modifier_Lycan_Shapeshift::IsPurgable  (line 1128, @0x0000000002bfe2c0, libserver.so)
bool __fastcall CDOTA_Modifier_Lycan_Shapeshift::IsPurgable(CDOTA_Modifier_Lycan_Shapeshift *const this)
{
  return 0;
}


// CDOTA_Modifier_Lycan_Shapeshift::AllowIllusionDuplicate  (line 1129, @0x0000000002bfe2d0, libserver.so)
bool __fastcall CDOTA_Modifier_Lycan_Shapeshift::AllowIllusionDuplicate(CDOTA_Modifier_Lycan_Shapeshift *const this)
{
  return 1;
}


// CDOTA_Modifier_Lycan_Shapeshift::GetPriority  (line 1134, @0x0000000002bfe2e0, libserver.so)
int __fastcall CDOTA_Modifier_Lycan_Shapeshift::GetPriority(CDOTA_Modifier_Lycan_Shapeshift *const this)
{
  return 0;
}


// CDOTA_Modifier_Lycan_Shapeshift::DeclareFunctions  (line 1159, @0x0000000002bd2f10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Lycan_Shapeshift::GetModifierModelChange(CModifierParams const&), CDOTA_Modifier_Lycan_Shapeshift::GetActivityTranslationModifiers(CModifierParams const&), CDOTA_Modifier_Lycan_Shapeshift::ModelScale(CModifierParams const&), CDOTA_Modifier_Lycan_Shapeshift::GetBonusNightVision(CModifierParams const&), CDOTA_Modifier_Lycan_Shapeshift::OnDeath(CModifierParams const&), CDOTA_Modifier_Lycan_Shapeshift::OnHeroKilled(CModifierParams const&)
void __fastcall CDOTA_Modifier_Lycan_Shapeshift::DeclareFunctions(CDOTA_Modifier_Lycan_Shapeshift *const this)
{
  this->m_Functions[152].__pfn = CDOTA_Modifier_Lycan_Shapeshift::GetModifierModelChange;
  this->m_Functions[152].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Lycan_Shapeshift::GetActivityTranslationModifiers;
  this->m_Functions[153].__pfn = CDOTA_Modifier_Lycan_Shapeshift::ModelScale;
  this->m_Functions[97].__pfn = CDOTA_Modifier_Lycan_Shapeshift::GetBonusNightVision;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Lycan_Shapeshift::OnDeath;
  this->m_Functions[153].__delta = 0;
  this->m_Functions[97].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[147].__pfn = CDOTA_Modifier_Lycan_Shapeshift::OnHeroKilled;
  this->m_Functions[147].__delta = 0;
}


// CDOTA_Modifier_Lycan_Shapeshift::OnCreated  (line 1174, @0x0000000002bead40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_night_vision"
void __fastcall CDOTA_Modifier_Lycan_Shapeshift::OnCreated(CDOTA_Modifier_Lycan_Shapeshift *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_night_vision = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_night_vision", -1, 0);
  else
    this->bonus_night_vision = 0;
}


// CDOTA_Modifier_Lycan_Shapeshift::OnDestroy  (line 1193, @0x0000000002bd4ec0, libserver.so)
// calls: CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::RemoveModifierByName
// strings: "particles/units/heroes/hero_lycan/lycan_shapeshift_revert.vpcf", "modifier_lycan_shapeshift_aura"
void __fastcall CDOTA_Modifier_Lycan_Shapeshift::OnDestroy(CDOTA_Modifier_Lycan_Shapeshift *const this)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v4; // rax
  CDOTA_BaseNPC *v5; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_lycan/lycan_shapeshift_revert.vpcf",
                      1,
                      Caster,
                      0,
                      0);
  v4 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v4, Caster);
  v5 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v5, "modifier_lycan_shapeshift_aura");
}


// CDOTA_Modifier_Lycan_Shapeshift::OnRefresh  (line 1207, @0x0000000002beb3a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_night_vision"
void __fastcall CDOTA_Modifier_Lycan_Shapeshift::OnRefresh(CDOTA_Modifier_Lycan_Shapeshift *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_night_vision = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_night_vision", -1, 0);
  else
    this->bonus_night_vision = 0;
}


// CDOTA_Modifier_Lycan_Shapeshift::GetModifierModelChange  (line 1215, @0x0000000002bd2fb0, libserver.so)
// strings: "models/heroes/lycan/lycan_wolf.vmdl"
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_Shapeshift::GetModifierModelChange(
        CDOTA_Modifier_Lycan_Shapeshift *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "models/heroes/lycan/lycan_wolf.vmdl";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Lycan_Shapeshift::GetActivityTranslationModifiers  (line 1222, @0x0000000002bd2fd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_Shapeshift::GetActivityTranslationModifiers(
        CDOTA_Modifier_Lycan_Shapeshift *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "shapeshift";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Lycan_Shapeshift::ModelScale  (line 1229, @0x0000000002bd2ff0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_Shapeshift::ModelScale(
        CDOTA_Modifier_Lycan_Shapeshift *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Lycan_Shapeshift::GetBonusNightVision  (line 1237, @0x0000000002bd3000, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_Shapeshift::GetBonusNightVision(
        CDOTA_Modifier_Lycan_Shapeshift *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_night_vision;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Lycan_Shapeshift::OnDeath  (line 1244, @0x0000000002bd3020, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_Shapeshift::OnDeath(
        CDOTA_Modifier_Lycan_Shapeshift *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Lycan_Shapeshift::OnHeroKilled  (line 1252, @0x0000000002bdb900, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Target, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_Shapeshift::OnHeroKilled(
        CDOTA_Modifier_Lycan_Shapeshift *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v11; // rsi
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *v15; // rdi

  m_pInstance = 0;
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[params->hattacker.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  v8 = params->htarget.m_Index;
  if ( v8 + 2 <= 1
    || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v10 = &v9[params->htarget.m_Index & 0x1FF]) == 0
    || v8 != v10->m_EHandle.m_Index
    || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
    || BYTE3(v11[7]._vptr_IHandleEntity) == 0
    || (v11[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    v11 = 0;
  }
  v12 = params->hattacker.m_Index;
  if ( v12 + 2 <= 1
    || (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v14 = &v13[params->hattacker.m_Index & 0x1FF]) == 0
    || v12 != v14->m_EHandle.m_Index
    || (v15 = v14->m_pInstance, v14->m_pInstance == 0)
    || BYTE3(v15[7]._vptr_IHandleEntity) == 0
    || (v15[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    v15 = 0;
  }
  EconEntity_OnOwnerKillEaterEvent(
    v15,
    v11,
    kill_eater_event_t::kKillEaterEventType_Lycan_KillsDuringShapeshift,
    1,
    INVALID_ITEM_DEF_INDEX);
  return 1uLL;
}


// CDOTA_Modifier_Lycan_Shapeshift_Speed::~CDOTA_Modifier_Lycan_Shapeshift_Speed  (line 1267, @0x0000000002c03dd0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lycan_Shapeshift_Speed::~CDOTA_Modifier_Lycan_Shapeshift_Speed(
        CDOTA_Modifier_Lycan_Shapeshift_Speed *const this)
{
  this->_vptr_CDOTA_Buff = &off_453B270;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lycan_Shapeshift_Speed::~CDOTA_Modifier_Lycan_Shapeshift_Speed  (line 1267, @0x0000000002c03df0, libserver.so)  // inlines: ~CDOTA_Modifier_Lycan_Shapeshift_Speed
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lycan_Shapeshift_Speed::~CDOTA_Modifier_Lycan_Shapeshift_Speed(
        CDOTA_Modifier_Lycan_Shapeshift_Speed *const this)
{
  this->_vptr_CDOTA_Buff = &off_453B270;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lycan_Shapeshift_Speed::IsHidden  (line 1272, @0x0000000002c05da0, libserver.so)  // inlines: IsHero
// calls: CDOTA_Buff::GetParent
bool __fastcall CDOTA_Modifier_Lycan_Shapeshift_Speed::IsHidden(CDOTA_Modifier_Lycan_Shapeshift_Speed *const this)
{
  return CDOTA_Buff::GetParent(this)->m_iUnitType & 1;
}


// CDOTA_Modifier_Lycan_Shapeshift_Speed::IsPurgable  (line 1273, @0x0000000002bfe2f0, libserver.so)
bool __fastcall CDOTA_Modifier_Lycan_Shapeshift_Speed::IsPurgable(CDOTA_Modifier_Lycan_Shapeshift_Speed *const this)
{
  return 0;
}


// CDOTA_Modifier_Lycan_Shapeshift_Speed::GetEffectName  (line 1276, @0x0000000002bfe300, libserver.so)
// strings: "particles/units/heroes/hero_lycan/lycan_shapeshift_buff_speed.vpcf"
const char *__fastcall CDOTA_Modifier_Lycan_Shapeshift_Speed::GetEffectName(
        CDOTA_Modifier_Lycan_Shapeshift_Speed *const this)
{
  return "particles/units/heroes/hero_lycan/lycan_shapeshift_buff_speed.vpcf";
}


// CDOTA_Modifier_Lycan_Shapeshift_Speed::GetPriority  (line 1277, @0x0000000002bfe310, libserver.so)
int __fastcall CDOTA_Modifier_Lycan_Shapeshift_Speed::GetPriority(CDOTA_Modifier_Lycan_Shapeshift_Speed *const this)
{
  return 0;
}


// CDOTA_Modifier_Lycan_Shapeshift_Speed::OnCreated  (line 1297, @0x0000000002bebcf0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Lycan_Shapeshift_Speed::OnCreated(
        CDOTA_Modifier_Lycan_Shapeshift_Speed *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->crit_chance = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->speed = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->crit_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "crit_chance", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->crit_multiplier = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "crit_multiplier", -1, 0);
    return;
  }
LABEL_7:
  this->crit_multiplier = 0;
}


// CDOTA_Modifier_Lycan_Shapeshift_Speed::DeclareFunctions  (line 1306, @0x0000000002bd3030, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Lycan_Shapeshift_Speed::GetModifierPreAttack_CriticalStrike(CModifierParams const&), CDOTA_Modifier_Lycan_Shapeshift_Speed::GetModifierMoveSpeed_Absolute(CModifierParams const&), CDOTA_Modifier_Lycan_Shapeshift_Speed::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_Lycan_Shapeshift_Speed::DeclareFunctions(
        CDOTA_Modifier_Lycan_Shapeshift_Speed *const this)
{
  this->m_Functions[83].__pfn = CDOTA_Modifier_Lycan_Shapeshift_Speed::GetModifierPreAttack_CriticalStrike;
  this->m_Functions[83].__delta = 0;
  this->m_Functions[18].__delta = 0;
  this->m_Functions[18].__pfn = CDOTA_Modifier_Lycan_Shapeshift_Speed::GetModifierMoveSpeed_Absolute;
  this->m_Functions[21].__pfn = (&stru_10 + 697);
  this->m_Functions[21].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Lycan_Shapeshift_Speed::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Lycan_Shapeshift_Speed::GetModifierMoveSpeed_Absolute  (line 1317, @0x0000000002bd30a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_Shapeshift_Speed::GetModifierMoveSpeed_Absolute(
        CDOTA_Modifier_Lycan_Shapeshift_Speed *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Lycan_Shapeshift_Speed::GetModifierMoveSpeed_Max  (line 1324, @0x0000000002bd30c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_Shapeshift_Speed::GetModifierMoveSpeed_Max(
        CDOTA_Modifier_Lycan_Shapeshift_Speed *const this,
        const CModifierParams *const params)
{
  return 0x461C400000000001uLL;
}


// CDOTA_Modifier_Lycan_Shapeshift_Speed::GetModifierPreAttack_CriticalStrike  (line 1332, @0x0000000002bd9f80, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: RollPercentage
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_Shapeshift_Speed::GetModifierPreAttack_CriticalStrike(
        CDOTA_Modifier_Lycan_Shapeshift_Speed *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rax
  uint32 v7; // edx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  CEntityInstance *v11; // rcx
  int m_Id; // edx
  __m128i v13; // xmm0
  ModifierVariant_t result; // 0:rax.16

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
  if ( v7 + 2 <= 1
    || (m_Index_low = LOWORD(params->hattacker.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v10 = &v9[m_Index_low & 0x1FF]) == 0
    || v7 != v10->m_EHandle.m_Index
    || (v11 = v10->m_pInstance) == 0
    || BYTE3(v11[7]._vptr_IHandleEntity) == 0 )
  {
    v11 = 0;
  }
  if ( m_pInstance == 0 )
    return 1uLL;
  m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
  if ( (m_Id & 0x193) == 0
    || (m_Id & 0x10) != 0
    || v11 == 0
    || HIBYTE(v11[7].m_CScriptComponent) == HIBYTE(m_pInstance[7].m_CScriptComponent)
    || !RollPercentage(this->crit_chance) )
  {
    return 1uLL;
  }
  *v13.m128i_i32 = this->crit_multiplier;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v13) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Lycan_Shapeshift_Speed::OnAttackLanded  (line 1351, @0x0000000002bda3f0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_Juggernaut.SwordAttackSpecial"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Lycan_Shapeshift_Speed::OnAttackLanded(
        CDOTA_Modifier_Lycan_Shapeshift_Speed *const this,
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
      CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Juggernaut.SwordAttackSpecial", 0.0, 0, 0);
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


// CDOTA_Modifier_Lycan_Shapeshift_Speed::CheckState  (line 1368, @0x0000000002bd30e0, libserver.so)
void __fastcall CDOTA_Modifier_Lycan_Shapeshift_Speed::CheckState(
        CDOTA_Modifier_Lycan_Shapeshift_Speed *const this,
        CDOTABuffState *const buffState)
{
  ;
}


