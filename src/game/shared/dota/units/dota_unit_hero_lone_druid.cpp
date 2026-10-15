// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:51
class CDOTA_Unit_SpiritBear : public CDOTA_BaseNPC_Additive {
public:

private:

	bool m_bShouldRespawn;  // +0x1198
	bool m_bStolen;  // +0x1199
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
	CDOTA_Unit_SpiritBear(CDOTA_Unit_SpiritBear &);
	CDOTA_Unit_SpiritBear(CDOTA_Unit_SpiritBear &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_SpiritBear();
	void CalculateBearStats(bool, float, float);
	virtual void Spawn(const CEntityKeyValues *);
	virtual bool UnitCanRespawn();
	void SetStolen(bool);
	virtual bool IsInventoryEnabled();
	void GetIntrinsicModifiers();
	void SetBearRespawn(bool);
	virtual void GainedModifier(CDOTA_Buff *);
	virtual bool LostModifier(CDOTA_Buff *);
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual ~CDOTA_Unit_SpiritBear();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[477] UnitCanRespawn
	// vtable[480] IsInventoryEnabled
	// vtable[449] GainedModifier
	// vtable[450] LostModifier
	// vtable[92] Event_Killed
	// vtable[159] ModifyOrAppendCriteria
	// sizeof = 4512
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:270
class C_CDOTA_Unit_SpiritBear_MapInstall {
	C_CDOTA_Unit_SpiritBear_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:280
class CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck : public CDOTA_Buff {
public:

private:

	bool m_bCanBeResummoned;  // +0xba8
	bool m_bCanAttack;  // +0xba9

	int m_nFxIndex;  // +0xbac
	int m_nStatusFxIndex;  // +0xbb0
	CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck();
	virtual bool IsPermanent();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual bool RemoveOnDeath();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual void OnIntervalThink();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	ModifierVariant_t OnUnitMoved(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	bool CanBeResummoned();
	void UpdateStatusEffect();
	virtual ~CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck();

	// vtable[23] IsPermanent
	// vtable[11] IsHidden
	// vtable[5] CheckState
	// vtable[54] RemoveOnDeath
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:511
class CDOTA_Unit_Hero_LoneDruid : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_LoneDruid(CDOTA_Unit_Hero_LoneDruid &);
	CDOTA_Unit_Hero_LoneDruid(CDOTA_Unit_Hero_LoneDruid &);
	CDOTA_Unit_Hero_LoneDruid();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual bool UsedGestureBasedAttackAnimation();
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	virtual const char * GetSoundSet();
	virtual void GetAdditionalOwnedUnits(CUtlVector<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> > *);
	virtual ~CDOTA_Unit_Hero_LoneDruid();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[159] ModifyOrAppendCriteria
	// vtable[439] UsedGestureBasedAttackAnimation
	// vtable[92] Event_Killed
	// vtable[466] OnSaveState
	// vtable[467] OnLoadState
	// vtable[460] GetSoundSet
	// vtable[499] GetAdditionalOwnedUnits
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:540
class C_CDOTA_Unit_Hero_LoneDruid_MapInstall {
	C_CDOTA_Unit_Hero_LoneDruid_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:622
class CDOTA_Ability_LoneDruid_SpiritBear : public CDOTABaseAbility {
	class NetworkVar_m_hBear {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	bool m_bLevelChanged;  // +0x390

	EHANDLE m_hPreBear;  // +0x398
	typedef CDOTA_Ability_LoneDruid_SpiritBear ThisClass;

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
	CDOTA_Ability_LoneDruid_SpiritBear(CDOTA_Ability_LoneDruid_SpiritBear &);
	CDOTA_Ability_LoneDruid_SpiritBear();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Ability_LoneDruid_SpiritBear();
	virtual void OnSpellStart();
	virtual const char * GetEffectName();
	virtual void OnUpgrade();
	virtual void OnUnStolen();
	virtual float GetCooldown(int);
	CDOTA_Unit_SpiritBear * GetBear();
	void SetBear(CDOTA_Unit_SpiritBear *);
	virtual bool OnLoadState(KeyValues *);
	virtual int CastFilterResult();
	virtual const char * GetCustomCastError();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[333] GetEffectName
	// vtable[268] OnUpgrade
	// vtable[308] OnUnStolen
	// vtable[242] GetCooldown
	// vtable[249] OnLoadState
	// vtable[260] CastFilterResult
	// vtable[261] GetCustomCastError
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:658
class C_CDOTA_Ability_LoneDruid_SpiritBear_MapInstall {
	C_CDOTA_Ability_LoneDruid_SpiritBear_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:1003
class CDOTA_Modifier_Spirit_Bear_Attack_Damage : public CDOTA_Buff {
public:

	CDOTA_Modifier_Spirit_Bear_Attack_Damage();
	virtual bool IsPermanent();
	virtual bool IsHidden();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual ~CDOTA_Modifier_Spirit_Bear_Attack_Damage();

	// vtable[23] IsPermanent
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:1204
class CDOTA_Ability_LoneDruid_SpiritBear_Return : public CDOTABaseAbility {
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
	CDOTA_Ability_LoneDruid_SpiritBear_Return(CDOTA_Ability_LoneDruid_SpiritBear_Return &);
	CDOTA_Ability_LoneDruid_SpiritBear_Return(CDOTA_Ability_LoneDruid_SpiritBear_Return &);
	CDOTA_Ability_LoneDruid_SpiritBear_Return();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_LoneDruid_SpiritBear_Return();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:1217
class C_CDOTA_Ability_LoneDruid_SpiritBear_Return_MapInstall {
	C_CDOTA_Ability_LoneDruid_SpiritBear_Return_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:1266
class CDOTA_Modifier_LoneDruid_SpiritBear_Return : public CDOTA_Buff {
public:

private:

	int return_damage_cooldown;  // +0xba8
	CDOTA_Modifier_LoneDruid_SpiritBear_Return();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_LoneDruid_SpiritBear_Return();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:1330
class CDOTA_Ability_LoneDruid_SpiritBear_Entangle : public CDOTABaseAbility {
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
	CDOTA_Ability_LoneDruid_SpiritBear_Entangle(CDOTA_Ability_LoneDruid_SpiritBear_Entangle &);
	CDOTA_Ability_LoneDruid_SpiritBear_Entangle(CDOTA_Ability_LoneDruid_SpiritBear_Entangle &);
	CDOTA_Ability_LoneDruid_SpiritBear_Entangle();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_LoneDruid_SpiritBear_Entangle();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:1353
class CDOTA_Modifier_LoneDruid_SpiritBear_Entangle : public CDOTA_Buff {
public:

private:

	int entangle_chance;  // +0xba8
	float hero_duration;  // +0xbac
	float creep_duration;  // +0xbb0
	CDOTA_Modifier_LoneDruid_SpiritBear_Entangle();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierOnAttack(const CModifierParams &);
	virtual ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ~CDOTA_Modifier_LoneDruid_SpiritBear_Entangle();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttackLanded
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:1455
class CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect : public CDOTA_Buff {
public:

private:

	int m_iEntangleDamage;  // +0xba8
	CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual int GetPriority();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// vtable[6] GetPriority
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:1530
class CDOTA_Ability_LoneDruid_SpiritBear_Demolish : public CDOTABaseAbility {
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
	CDOTA_Ability_LoneDruid_SpiritBear_Demolish(CDOTA_Ability_LoneDruid_SpiritBear_Demolish &);
	CDOTA_Ability_LoneDruid_SpiritBear_Demolish(CDOTA_Ability_LoneDruid_SpiritBear_Demolish &);
	CDOTA_Ability_LoneDruid_SpiritBear_Demolish();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_LoneDruid_SpiritBear_Demolish();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:1544
class CDOTA_Modifier_LoneDruid_SpiritBear_Demolish : public CDOTA_Buff {
public:

private:

	int bonus_building_damage;  // +0xba8
	int spell_resistance;  // +0xbac
	CDOTA_Modifier_LoneDruid_SpiritBear_Demolish();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierDamageOutgoing_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_LoneDruid_SpiritBear_Demolish();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:1631
class CDOTA_Ability_LoneDruid_Rabid : public CDOTABaseAbility {
public:

private:

	float rabid_duration;  // +0x390
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
	CDOTA_Ability_LoneDruid_Rabid(CDOTA_Ability_LoneDruid_Rabid &);
	CDOTA_Ability_LoneDruid_Rabid(CDOTA_Ability_LoneDruid_Rabid &);
	CDOTA_Ability_LoneDruid_Rabid();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_LoneDruid_Rabid();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:1648
class C_CDOTA_Ability_LoneDruid_Rabid_MapInstall {
	C_CDOTA_Ability_LoneDruid_Rabid_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:1720
class CDOTA_Modifier_LoneDruid_Rabid : public CDOTA_Buff {
public:

private:

	int bonus_attack_speed;  // +0xba8
	int bonus_move_speed;  // +0xbac
	CDOTA_Modifier_LoneDruid_Rabid();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual const char * GetHeroEffectName();
	virtual int HeroEffectPriority();
	virtual ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_LoneDruid_Rabid();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[72] GetHeroEffectName
	// vtable[73] HeroEffectPriority
	// vtable[89] GetModifierAttackSpeedBonus_Constant
	// vtable[90] GetModifierMoveSpeedBonus_Percentage
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:1797
class CDOTA_Ability_LoneDruid_TrueForm : public CDOTABaseAbility {
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
	CDOTA_Ability_LoneDruid_TrueForm(CDOTA_Ability_LoneDruid_TrueForm &);
	CDOTA_Ability_LoneDruid_TrueForm(CDOTA_Ability_LoneDruid_TrueForm &);
	CDOTA_Ability_LoneDruid_TrueForm();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual void OnUnStolen();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_LoneDruid_TrueForm();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[308] OnUnStolen
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:1872
class CDOTA_Modifier_LoneDruid_TrueForm_Transform : public CDOTA_Buff {
public:

	CDOTA_Modifier_LoneDruid_TrueForm_Transform();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_LoneDruid_TrueForm_Transform();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:1938
class CDOTA_Modifier_LoneDruid_TrueForm : public CDOTA_Buff {
public:

private:

	float base_attack_time;  // +0xba8
	int bonus_armor;  // +0xbac
	int bonus_hp;  // +0xbb0
	int speed_loss;  // +0xbb4
	CDOTA_Modifier_LoneDruid_TrueForm();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual bool AllowIllusionDuplicate();
	virtual bool RemoveOnDeath();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual int GetPriority();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBaseAttackTimeConstant(const CModifierParams &);
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierModelChange(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t GetModifierAttackRangeBonus(const CModifierParams &);
	ModifierVariant_t ModelScale(const CModifierParams &);
	virtual ~CDOTA_Modifier_LoneDruid_TrueForm();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[18] AllowIllusionDuplicate
	// vtable[54] RemoveOnDeath
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[6] GetPriority
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:2104
class CDOTA_Ability_LoneDruid_TrueForm_Druid : public CDOTABaseAbility {
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
	CDOTA_Ability_LoneDruid_TrueForm_Druid(CDOTA_Ability_LoneDruid_TrueForm_Druid &);
	CDOTA_Ability_LoneDruid_TrueForm_Druid(CDOTA_Ability_LoneDruid_TrueForm_Druid &);
	CDOTA_Ability_LoneDruid_TrueForm_Druid();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_LoneDruid_TrueForm_Druid();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:2117
class C_CDOTA_Ability_LoneDruid_TrueForm_Druid_MapInstall {
	C_CDOTA_Ability_LoneDruid_TrueForm_Druid_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:2159
class CDOTA_Modifier_LoneDruid_DruidForm_Transform : public CDOTA_Buff {
public:

	CDOTA_Modifier_LoneDruid_DruidForm_Transform();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool RemoveOnDeath();
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_LoneDruid_DruidForm_Transform();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[54] RemoveOnDeath
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:2230
class CDOTA_Ability_LoneDruid_TrueForm_BattleCry : public CDOTABaseAbility {
public:

private:

	float cry_duration;  // +0x390
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
	CDOTA_Ability_LoneDruid_TrueForm_BattleCry(CDOTA_Ability_LoneDruid_TrueForm_BattleCry &);
	CDOTA_Ability_LoneDruid_TrueForm_BattleCry(CDOTA_Ability_LoneDruid_TrueForm_BattleCry &);
	CDOTA_Ability_LoneDruid_TrueForm_BattleCry();
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
	virtual ~CDOTA_Ability_LoneDruid_TrueForm_BattleCry();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[333] GetAOERadius
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:2245
class C_CDOTA_Ability_LoneDruid_TrueForm_BattleCry_MapInstall {
	C_CDOTA_Ability_LoneDruid_TrueForm_BattleCry_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:2291
class CDOTA_Modifier_LoneDruid_TrueForm_BattleCry : public CDOTA_Buff {
public:

private:

	int bonus_damage;  // +0xba8
	int bonus_armor;  // +0xbac
	CDOTA_Modifier_LoneDruid_TrueForm_BattleCry();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_LoneDruid_TrueForm_BattleCry();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// vtable[89] GetModifierPreAttack_BonusDamage
	// vtable[90] GetModifierPhysicalArmorBonus
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:2370
class CDOTA_Ability_LoneDruid_SavageRoar : public CDOTABaseAbility {
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
	CDOTA_Ability_LoneDruid_SavageRoar(CDOTA_Ability_LoneDruid_SavageRoar &);
	CDOTA_Ability_LoneDruid_SavageRoar(CDOTA_Ability_LoneDruid_SavageRoar &);
	CDOTA_Ability_LoneDruid_SavageRoar();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnUpgrade();
	virtual void OnSpellStart();
	virtual void Roar(CDOTA_BaseNPC *);
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_LoneDruid_SavageRoar();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[333] Roar
	// vtable[242] GetCooldown
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:2392
class C_CDOTA_Ability_LoneDruid_SavageRoar_MapInstall {
	C_CDOTA_Ability_LoneDruid_SavageRoar_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:2531
class CDOTA_Ability_LoneDruid_SavageRoar_Bear : public CDOTABaseAbility {
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
	CDOTA_Ability_LoneDruid_SavageRoar_Bear(CDOTA_Ability_LoneDruid_SavageRoar_Bear &);
	CDOTA_Ability_LoneDruid_SavageRoar_Bear(CDOTA_Ability_LoneDruid_SavageRoar_Bear &);
	CDOTA_Ability_LoneDruid_SavageRoar_Bear();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnSpellStart();
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_LoneDruid_SavageRoar_Bear();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[266] OnSpellStart
	// vtable[242] GetCooldown
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:2558
class C_CDOTA_Ability_LoneDruid_SavageRoar_Bear_MapInstall {
	C_CDOTA_Ability_LoneDruid_SavageRoar_Bear_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:2617
class CDOTA_Ability_Bear_Empty : public CDOTABaseAbility {
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
	CDOTA_Ability_Bear_Empty(CDOTA_Ability_Bear_Empty &);
	CDOTA_Ability_Bear_Empty(CDOTA_Ability_Bear_Empty &);
	CDOTA_Ability_Bear_Empty();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Ability_Bear_Empty();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lone_druid.cpp:2628
class CDOTA_Modifier_LoneDruid_SavageRoar : public CDOTA_Buff {
public:

private:

	int bonus_speed;  // +0xba8
	CDOTA_Modifier_LoneDruid_SavageRoar();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_LoneDruid_SavageRoar();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_SpiritBear::~CDOTA_Unit_SpiritBear  (line 51, @0x0000000002b992f0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_SpiritBear::~CDOTA_Unit_SpiritBear(CDOTA_Unit_SpiritBear *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_SpiritBear::~CDOTA_Unit_SpiritBear  (line 51, @0x0000000002b99340, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_Unit_SpiritBear
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_SpiritBear::~CDOTA_Unit_SpiritBear(CDOTA_Unit_SpiritBear *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_SpiritBear::Schema_DynamicBinding  (line 53, @0x0000000002b930e0, libserver.so)
// globals: CDOTA_Unit_SpiritBear::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_SpiritBear::Schema_DynamicBinding(
        const CDOTA_Unit_SpiritBear *const this)
{
  return CDOTA_Unit_SpiritBear::s_pSchemaBinding;
}


// CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 53, @0x0000000002b93110, libserver.so)
// globals: CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::DestructInstance  (line 53, @0x0000000002b93120, libserver.so)  // inlines: Destruct<CDOTA_Unit_SpiritBear>
void __fastcall CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::FreeInstance  (line 53, @0x0000000002b93140, libserver.so)
void __fastcall CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::CanAllocate  (line 53, @0x0000000002b93160, libserver.so)
bool __fastcall CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 53, @0x0000000002b93170, libserver.so)
// globals: CDOTA_Unit_SpiritBear::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_SpiritBear::s_pSchemaBinding;
}


// CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::AllocateInstance  (line 53, @0x0000000002b98aa0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4512);
  memset(v1, 0, 0x11A0u);
  return v1;
}


// CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::ConstructInstance  (line 53, @0x0000000002ba8d80, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_Unit_SpiritBear, Construct<CDOTA_Unit_SpiritBear>, NetworkStateChanged, Set, operator=<bool>, ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC, CBaseEntity::NetworkStateChanged, CDOTA_BaseNPC::~CDOTA_BaseNPC, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass *const this,
        void *p)
{
  bool v3; // zf

  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    v3 = *(p + 2168) == 0;
    *p = &off_451E230;
    *(p + 2170) = 1;
    *(p + 236) = &off_451F190;
    *(p + 257) = &off_451F4C0;
    if ( !v3 )
    {
      CBaseEntity::NetworkStateChanged(p, 0x878u, -1, -1);
      *(p + 2168) = 0;
    }
    if ( *(p + 2169) != 0 )
    {
      (*(*p + 176LL))(p, 2169, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *(p + 2169) = 0;
    }
    *(p + 4504) = 1;
    *(p + 4505) = 0;
  }
  return p;
}


// CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 53, @0x0000000002babdf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 53, @0x0000000002bac160, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_SpiritBear::GetEntityClassInternal  (line 53, @0x0000000002bcdee0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_lone_druid_bear", "CDOTA_Unit_SpiritBear"
// globals: `guard variable for'CDOTA_Unit_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_SpiritBearClass, CDOTA_Unit_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_SpiritBearClass, __dso_handle, CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_SpiritBear::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_SpiritBearClassInfo, CDOTA_Unit_SpiritBear::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_SpiritBearClassInfo
CEntityClass *__cdecl CDOTA_Unit_SpiritBear::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_SpiritBearClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_SpiritBearClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_SpiritBearClass);
    CDOTA_Unit_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_SpiritBearClass._vptr_CEntityClass = off_451E1B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_SpiritBearClass);
    __cxa_atexit(
      CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_SpiritBearClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_SpiritBearClass != 0 )
    return &CDOTA_Unit_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_SpiritBearClass;
  if ( `guard variable for'CDOTA_Unit_SpiritBear::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_SpiritBearClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_SpiritBear::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_SpiritBearClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_SpiritBear::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_SpiritBearClassInfo,
      "CDOTA_Unit_SpiritBear",
      "npc_dota_lone_druid_bear",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_SpiritBear::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_SpiritBearClassInfo);
  }
  CDOTA_Unit_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_SpiritBearClass.m_pClassInfo = &CDOTA_Unit_SpiritBear::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_SpiritBearClassInfo;
  CDOTA_Unit_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_SpiritBearClass.m_pBaseClassInfo = CDOTA_Unit_SpiritBear::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_SpiritBearClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_SpiritBearClass = &CDOTA_Unit_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_SpiritBearClass;
  CDOTA_Unit_SpiritBear::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_SpiritBearClassInfo.m_pClass = &CDOTA_Unit_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_SpiritBearClass;
  CDOTA_Unit_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_SpiritBearClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_SpiritBearClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_SpiritBearClass;
}


// CDOTA_Unit_SpiritBear::Spawn  (line 95, @0x0000000002ba8fb0, libserver.so)  // inlines: CalculateBearStats, GetModifier_Constant_Additive, IsListeningToEvent, NetworkStateChanged, Set, SetActive, SetMaxMana, operator=<float>
// calls: CBaseEntity::ClearFlags, CBaseEntity::SetLifeState, CDOTA_BaseNPC::GetInventory, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CBaseEntity::SetMaxHealth, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::SetMana, CDOTA_BaseNPC::Spawn, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_UnitInventory::GetItemInSlot
void __fastcall CDOTA_Unit_SpiritBear::Spawn(CDOTA_Unit_SpiritBear *const this, const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r13
  CDOTA_UnitInventory *Inventory; // rax
  float Modifier_Constant_Additive_Internal; // xmm1_4
  __int64 v7; // rax
  __int64 v8; // rax
  float v9; // xmm0_4
  __int64 v10; // rax
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  __int64 v15; // rax
  float v16; // xmm0_4
  int v17; // ebx
  float v18; // xmm0_4
  unsigned int v19; // ebx
  float v20; // xmm1_4
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTA_UnitInventory *v22; // rax
  CDOTA_UnitInventory *v23; // rax
  int v24; // esi
  CDOTA_Item *ItemInSlot; // rax
  float v26; // [rsp+8h] [rbp-28h]
  float v27; // [rsp+8h] [rbp-28h]
  float v28; // [rsp+Ch] [rbp-24h]
  float v29; // [rsp+Ch] [rbp-24h]
  float v30; // [rsp+Ch] [rbp-24h]
  float m_iStartingMaxMana; // [rsp+Ch] [rbp-24h]
  float v32; // [rsp+Ch] [rbp-24h]

  p_m_ModifierManager = &this->m_ModifierManager;
  CBaseEntity::ClearFlags(this);
  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_ALIVE);
  Inventory = CDOTA_BaseNPC::GetInventory(this);
  Modifier_Constant_Additive_Internal = 0.0;
  Inventory->m_bIsActive = 1;
  v7 = this->m_ModifierManager.m_buffsForModifiers[58];
  if ( v7 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v7].m_Size > 0 )
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            p_m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_HEALTH_BONUS,
                                            &CModifierParams::s_Default);
  v8 = this->m_ModifierManager.m_buffsForModifiers[61];
  v9 = 0.0;
  if ( v8 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v8].m_Size > 0 )
  {
    v28 = Modifier_Constant_Additive_Internal;
    v9 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
           p_m_ModifierManager,
           modifierfunction::MODIFIER_PROPERTY_EXTRA_HEALTH_BONUS,
           &CModifierParams::s_Default);
    Modifier_Constant_Additive_Internal = v28;
  }
  v10 = this->m_ModifierManager.m_buffsForModifiers[59];
  v11 = Modifier_Constant_Additive_Internal;
  v12 = 0.0;
  v13 = v11 + v9;
  if ( v10 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v10].m_Size > 0 )
  {
    v29 = v13;
    v14 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
            p_m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_MANA_BONUS,
            &CModifierParams::s_Default);
    v13 = v29;
    v12 = v14;
  }
  v15 = this->m_ModifierManager.m_buffsForModifiers[62];
  v16 = 0.0;
  if ( v15 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v15].m_Size > 0 )
  {
    v26 = v12;
    v30 = v13;
    v16 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
            p_m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_EXTRA_MANA_BONUS,
            &CModifierParams::s_Default);
    v12 = v26;
    v13 = v30;
  }
  v17 = (v13 + this->m_flBaseMaxHealth);
  v27 = v16 + v12;
  m_iStartingMaxMana = this->m_iStartingMaxMana;
  CBaseEntity::SetMaxHealth(this, v17);
  v18 = v27 + m_iStartingMaxMana;
  if ( (v27 + m_iStartingMaxMana) != this->m_flMaxMana.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2144, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v18 = v27 + m_iStartingMaxMana;
    this->m_flMaxMana.m_Value = v27 + m_iStartingMaxMana;
  }
  v32 = v18;
  CDOTA_BaseNPC::ModifyHealth(this, v17, 0, 0, 0);
  v19 = 0;
  CDOTA_BaseNPC::SetMana(this, v32, v20);
  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  this->m_iUnitType = 2;
  do
  {
    if ( CDOTA_BaseNPC::GetAbilityByIndex(this, v19) != 0 )
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, v19);
      (*(AbilityByIndex->_vptr_IHandleEntity + 207))(AbilityByIndex);
    }
    ++v19;
  }
  while ( v19 != 24 );
  LOBYTE(v19) = 0;
  do
  {
    while ( 1 )
    {
      if ( v19 <= 5 )
      {
        v22 = CDOTA_BaseNPC::GetInventory(this);
        if ( CDOTA_UnitInventory::GetItemInSlot(v22, v19) != 0 )
          break;
      }
      if ( ++v19 == 9 )
        return;
    }
    v23 = CDOTA_BaseNPC::GetInventory(this);
    v24 = v19++;
    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(v23, v24);
    (*(ItemInSlot->_vptr_IHandleEntity + 207))(ItemInSlot);
  }
  while ( v19 != 9 );
}


// CDOTA_Unit_SpiritBear::UnitCanRespawn  (line 127, @0x0000000002b93180, libserver.so)
bool __fastcall CDOTA_Unit_SpiritBear::UnitCanRespawn(CDOTA_Unit_SpiritBear *const this)
{
  return this->m_bShouldRespawn;
}


// CDOTA_Unit_SpiritBear::IsInventoryEnabled  (line 141, @0x0000000002b93190, libserver.so)
bool __fastcall CDOTA_Unit_SpiritBear::IsInventoryEnabled(CDOTA_Unit_SpiritBear *const this)
{
  return 1;
}


// CDOTA_Unit_SpiritBear::GainedModifier  (line 165, @0x0000000002bac640, libserver.so)  // inlines: CalculateBearStats, GetMana, GetMaxMana, GetModifier_Constant_Additive, IsListeningToEvent, NetworkStateChanged, Set, SetMaxMana, operator=<float>
// calls: CDOTA_BaseNPC::GainedModifier, CBaseEntity::GetHealth, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CBaseEntity::SetMaxHealth, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::SetMana
void __fastcall CDOTA_Unit_SpiritBear::GainedModifier(CDOTA_Unit_SpiritBear *const this, CDOTA_Buff *pBuff)
{
  int Health; // r12d
  int v5; // eax
  __int64 v6; // rdx
  float Modifier_Constant_Additive_Internal; // xmm1_4
  int v8; // r13d
  float v9; // r15d
  __int64 v10; // rax
  float v11; // xmm0_4
  __int64 v12; // rax
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  __int64 v16; // rax
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // [rsp+0h] [rbp-40h]
  float v22; // [rsp+4h] [rbp-3Ch]
  float v23; // [rsp+4h] [rbp-3Ch]
  float v24; // [rsp+4h] [rbp-3Ch]
  float v25; // [rsp+8h] [rbp-38h]
  float v26; // [rsp+8h] [rbp-38h]
  float v27; // [rsp+8h] [rbp-38h]
  float m_iStartingMaxMana; // [rsp+8h] [rbp-38h]
  float v29; // [rsp+8h] [rbp-38h]
  float v30; // [rsp+8h] [rbp-38h]
  float m_Value; // [rsp+Ch] [rbp-34h]

  CDOTA_BaseNPC::GainedModifier(this, pBuff);
  if ( pBuff->m_Functions[58].__pfn != 0
    || pBuff->m_Functions[61].__pfn != 0
    || pBuff->m_Functions[59].__pfn != 0
    || pBuff->m_Functions[62].__pfn != 0 )
  {
    Health = CBaseEntity::GetHealth(this);
    v5 = (*(this->_vptr_IHandleEntity + 156))(this);
    v6 = this->m_ModifierManager.m_buffsForModifiers[58];
    Modifier_Constant_Additive_Internal = 0.0;
    v8 = v5;
    v9 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(this->m_flMana.m_Value)));
    m_Value = this->m_flMaxMana.m_Value;
    if ( v6 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v6].m_Size > 0 )
      Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                              &this->m_ModifierManager,
                                              modifierfunction::MODIFIER_PROPERTY_HEALTH_BONUS,
                                              &CModifierParams::s_Default);
    v10 = this->m_ModifierManager.m_buffsForModifiers[61];
    v11 = 0.0;
    if ( v10 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v10].m_Size > 0 )
    {
      v25 = Modifier_Constant_Additive_Internal;
      v11 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &this->m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_EXTRA_HEALTH_BONUS,
              &CModifierParams::s_Default);
      Modifier_Constant_Additive_Internal = v25;
    }
    v12 = this->m_ModifierManager.m_buffsForModifiers[59];
    v13 = Modifier_Constant_Additive_Internal + v11;
    v14 = 0.0;
    if ( v12 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v12].m_Size > 0 )
    {
      v26 = v13;
      v15 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &this->m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_MANA_BONUS,
              &CModifierParams::s_Default);
      v13 = v26;
      v14 = v15;
    }
    v16 = this->m_ModifierManager.m_buffsForModifiers[62];
    v17 = 0.0;
    if ( v16 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v16].m_Size > 0 )
    {
      v22 = v14;
      v27 = v13;
      v17 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &this->m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_EXTRA_MANA_BONUS,
              &CModifierParams::s_Default);
      v14 = v22;
      v13 = v27;
    }
    v23 = v13 + this->m_flBaseMaxHealth;
    v21 = v14 + v17;
    m_iStartingMaxMana = this->m_iStartingMaxMana;
    CBaseEntity::SetMaxHealth(this, v23);
    v18 = v23;
    v19 = v21 + m_iStartingMaxMana;
    if ( (v21 + m_iStartingMaxMana) != this->m_flMaxMana.m_Value )
    {
      v24 = v21 + m_iStartingMaxMana;
      v30 = v18;
      (*(this->_vptr_IHandleEntity + 22))(this, 2144, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v19 = v24;
      v18 = v30;
      this->m_flMaxMana.m_Value = v24;
    }
    v29 = v19;
    CDOTA_BaseNPC::ModifyHealth(this, ((Health / v8) * v18), 0, 0, 0);
    CDOTA_BaseNPC::SetMana(this, (v9 / m_Value) * v29, v20);
  }
}


// CDOTA_Unit_SpiritBear::LostModifier  (line 178, @0x0000000002bac8e0, libserver.so)  // inlines: CalculateBearStats, GetMana, GetMaxMana, GetModifier_Constant_Additive, IsListeningToEvent, NetworkStateChanged, Set, SetMaxMana, operator=<float>
// calls: CDOTA_BaseNPC::LostModifier, CBaseEntity::GetHealth, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CBaseEntity::SetMaxHealth, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::SetMana
bool __fastcall CDOTA_Unit_SpiritBear::LostModifier(CDOTA_Unit_SpiritBear *const this, CDOTA_Buff *pBuff)
{
  bool v4; // r13
  int Health; // r12d
  int v6; // eax
  float Modifier_Constant_Additive_Internal; // xmm1_4
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rax
  float v11; // xmm0_4
  __int64 v12; // rax
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  __int64 v16; // rax
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v22; // [rsp+Ch] [rbp-44h]
  float v23; // [rsp+10h] [rbp-40h]
  float v24; // [rsp+10h] [rbp-40h]
  float v25; // [rsp+10h] [rbp-40h]
  float v26; // [rsp+14h] [rbp-3Ch]
  float v27; // [rsp+14h] [rbp-3Ch]
  float v28; // [rsp+14h] [rbp-3Ch]
  float m_iStartingMaxMana; // [rsp+14h] [rbp-3Ch]
  float v30; // [rsp+14h] [rbp-3Ch]
  float v31; // [rsp+14h] [rbp-3Ch]
  float v32; // [rsp+18h] [rbp-38h]
  float m_Value; // [rsp+1Ch] [rbp-34h]

  v4 = CDOTA_BaseNPC::LostModifier(this, pBuff);
  if ( pBuff->m_Functions[58].__pfn != 0
    || pBuff->m_Functions[61].__pfn != 0
    || pBuff->m_Functions[59].__pfn != 0
    || pBuff->m_Functions[62].__pfn != 0 )
  {
    Health = CBaseEntity::GetHealth(this);
    v6 = (*(this->_vptr_IHandleEntity + 156))(this);
    Modifier_Constant_Additive_Internal = 0.0;
    v8 = v6;
    v9 = this->m_ModifierManager.m_buffsForModifiers[58];
    m_Value = this->m_flMana.m_Value;
    v32 = this->m_flMaxMana.m_Value;
    if ( v9 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v9].m_Size > 0 )
      Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                              &this->m_ModifierManager,
                                              modifierfunction::MODIFIER_PROPERTY_HEALTH_BONUS,
                                              &CModifierParams::s_Default);
    v10 = this->m_ModifierManager.m_buffsForModifiers[61];
    v11 = 0.0;
    if ( v10 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v10].m_Size > 0 )
    {
      v26 = Modifier_Constant_Additive_Internal;
      v11 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &this->m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_EXTRA_HEALTH_BONUS,
              &CModifierParams::s_Default);
      Modifier_Constant_Additive_Internal = v26;
    }
    v12 = this->m_ModifierManager.m_buffsForModifiers[59];
    v13 = Modifier_Constant_Additive_Internal + v11;
    v14 = 0.0;
    if ( v12 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v12].m_Size > 0 )
    {
      v27 = v13;
      v15 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &this->m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_MANA_BONUS,
              &CModifierParams::s_Default);
      v13 = v27;
      v14 = v15;
    }
    v16 = this->m_ModifierManager.m_buffsForModifiers[62];
    v17 = 0.0;
    if ( v16 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v16].m_Size > 0 )
    {
      v23 = v14;
      v28 = v13;
      v17 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &this->m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_EXTRA_MANA_BONUS,
              &CModifierParams::s_Default);
      v14 = v23;
      v13 = v28;
    }
    v24 = v13 + this->m_flBaseMaxHealth;
    v22 = v14 + v17;
    m_iStartingMaxMana = this->m_iStartingMaxMana;
    CBaseEntity::SetMaxHealth(this, v24);
    v18 = v24;
    v19 = v22 + m_iStartingMaxMana;
    if ( (v22 + m_iStartingMaxMana) != this->m_flMaxMana.m_Value )
    {
      v25 = v22 + m_iStartingMaxMana;
      v31 = v18;
      (*(this->_vptr_IHandleEntity + 22))(this, 2144, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v19 = v25;
      v18 = v31;
      this->m_flMaxMana.m_Value = v25;
    }
    v30 = v19;
    CDOTA_BaseNPC::ModifyHealth(this, ((Health / v8) * v18), 0, 0, 0);
    CDOTA_BaseNPC::SetMana(this, (m_Value / v32) * v30, v20);
  }
  return v4;
}


// CDOTA_Unit_SpiritBear::Event_Killed  (line 192, @0x0000000002bd2770, libserver.so)  // inlines: AddToTail, CEntityHandle, CUtlAbstractDelegate, CUtlDelegate, CUtlMemory, CUtlVector, CUtlVectorBase, ClosurePtr, CopyConstruct<CDOTA_Item*>, Element, FastDelegate2, Get, GetAttacker, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GrowMemory, IndexToIdentity, Init, LookupEntity, Purge, QAngle, RemoveAll, SetTemporarilyUncombinable, ToDOTABaseNPC, VectorAdd, VectorMultiply, entindex, operator CBaseEntity*, operator*, operator+, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, AngleVectors, CBaseEntity::GetAbsOrigin, CreateItemOnPositionAsync, CDOTA_UnitInventory::RemoveItem, CEntityInstance::GetEntityIndex, CreateUnitEvent, CDOTA_BaseNPC::Event_Killed, CUtlMemory<CDOTA_Item*, int>::Grow, CDOTA_BaseNPC::FindAbilityByName (20 total)
// strings: "lone_druid_spirit_bear", "backlash_damage", "particles/units/heroes/hero_lone_druid/lone_druid_spirit_bear_death.vpcf"
void __fastcall CDOTA_Unit_SpiritBear::Event_Killed(
        CDOTA_Unit_SpiritBear *const this,
        const CTakeDamageInfo *const info)
{
  unsigned __int16 v3; // dx
  int v4; // esi
  uint32 v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // r12
  int v11; // ebx
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_UnitInventory *v13; // rax
  __int64 m_Size; // r12
  CDOTA_Item *ItemInSlot; // r13
  int v16; // eax
  CDOTA_Item **v17; // rax
  __int64 v18; // rbx
  int v19; // r13d
  int v20; // r12d
  __m128i v21; // xmm5
  float v22; // r15d
  const Vector *AbsOrigin; // rax
  unsigned int v24; // xmm0_4
  unsigned int v25; // xmm2_4
  CDOTA_Item *v26; // rdi
  CDOTA_Item **v27; // rax
  CDOTA_Item *v28; // r15
  CDOTA_UnitInventory *v29; // rax
  CEntityIndex v30; // eax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v32; // r13
  int v33; // eax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v36; // rax
  CDOTA_ParticleManager *v37; // rax
  int iAngleStep; // [rsp+34h] [rbp-ACh]
  float v40; // [rsp+38h] [rbp-A8h]
  float backlash_damage; // [rsp+3Ch] [rbp-A4h]
  float backlash_damagea; // [rsp+3Ch] [rbp-A4h]
  QAngle angle; // [rsp+40h] [rbp-A0h] BYREF
  Vector dir; // [rsp+50h] [rbp-90h] BYREF
  Vector vecLocation; // [rsp+60h] [rbp-80h]
  CUtlVector<CDOTA_Item*,CUtlMemory<CDOTA_Item*,int> > m_Items; // [rsp+70h] [rbp-70h] BYREF
  _QWORD v47[10]; // [rsp+90h] [rbp-50h] BYREF
  Vector v48; // 0:xmm0_8.8,8:xmm1_4.4

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  LODWORD(v47[0]) = v5;
  if ( v5 + 2 <= 1
    || (v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9]) == 0
    || (v7 = &v6[v4 & 0x1FF]) == 0
    || v5 != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v9 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
  v10 = v9;
  if ( v9 != 0
    && BYTE3(v9[7]._vptr_IHandleEntity) != 0
    && m_pInstance != 0
    && m_pInstance->m_iTeamNum.m_Value != HIBYTE(v9[7].m_CScriptComponent) )
  {
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "lone_druid_spirit_bear", 0);
    v32 = AbilityByName;
    if ( AbilityByName != 0 )
    {
      backlash_damagea = CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "backlash_damage", -1, 0);
      v33 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
      ApplyDamage(v10, m_pInstance, v32, (v33 * backlash_damagea) / 100.0, 4, 0);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_lone_druid/lone_druid_spirit_bear_death.vpcf",
                   2,
                   m_pInstance,
                   0,
                   0);
      v36 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v36, Particle, 0, m_pInstance, 1, 0, vec3_invalid, 1);
      v37 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v37, Particle);
    }
  }
  if ( this->m_bStolen )
  {
    m_Items.m_Size = 0;
    v11 = 0;
    m_Items.m_Memory.m_pMemory = 0;
    m_Items.m_Memory.m_nAllocationCount = 0;
    m_Items.m_Memory.m_nGrowSize = 0;
    do
    {
      Inventory = CDOTA_BaseNPC::GetInventory(this);
      if ( CDOTA_UnitInventory::GetItemInSlot(Inventory, v11) != 0 )
      {
        v13 = CDOTA_BaseNPC::GetInventory(this);
        m_Size = m_Items.m_Size;
        ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(v13, v11);
        v16 = m_Items.m_Size;
        if ( m_Items.m_Size == m_Items.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CDOTA_Item *,int>::Grow(&m_Items.m_Memory, 1);
          v16 = m_Items.m_Size;
        }
        m_Items.m_Size = v16 + 1;
        v17 = &m_Items.m_Memory.m_pMemory[m_Size];
        if ( v17 != 0 )
          *v17 = ItemInSlot;
      }
      ++v11;
    }
    while ( v11 != 9 );
    if ( m_Items.m_Size > 0 )
    {
      v18 = 0;
      v19 = 0;
      v20 = 0;
      iAngleStep = 360 / m_Items.m_Size;
      do
      {
        angle.x = 0.0;
        angle.z = 0.0;
        angle.y = v19;
        AngleVectors(&angle, &dir, 0, 0);
        v21 = 0x43160000u;
        *v21.m128i_i32 = 150.0 * dir.y;
        backlash_damage = 150.0 * dir.x;
        v22 = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
        v40 = 150.0 * dir.z;
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        *&v24 = v22 + AbsOrigin->y;
        v48.z = v40 + AbsOrigin->z;
        *&v25 = backlash_damage + AbsOrigin->x;
        memset(v47, 0, 24);
        *&vecLocation.x = __PAIR64__(v24, v25);
        v26 = m_Items.m_Memory.m_pMemory[v18];
        vecLocation.z = v48.z;
        *&v48.x = __PAIR64__(v24, v25);
        CreateItemOnPositionAsync(v48, v26, v47, 0);
        v27 = &m_Items.m_Memory.m_pMemory[v18];
        m_Items.m_Memory.m_pMemory[v18]->m_bTemporarilyUncombinable = 1;
        v28 = *v27;
        v29 = CDOTA_BaseNPC::GetInventory(this);
        CDOTA_UnitInventory::RemoveItem(v29, v28, 0, 0);
        ++v20;
        v19 += iAngleStep;
        ++v18;
      }
      while ( m_Items.m_Size > v20 );
    }
    m_Items.m_Size = 0;
    if ( (m_Items.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_Item *,int>::Purge(&m_Items.m_Memory);
      if ( (m_Items.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CDOTA_Item *,int>::Purge(&m_Items.m_Memory);
    }
  }
  v30.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  CreateUnitEvent(v30, 0, 99, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_HERO_DEATH);
  CDOTA_BaseNPC::Event_Killed(this, info);
}


// CDOTA_Unit_SpiritBear::YouForgotToImplementOrDeclareServerClass  (line 270, @0x0000000002b36260, libserver.so)
int __fastcall CDOTA_Unit_SpiritBear::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_SpiritBear *const this)
{
  return 0;
}


// CDOTA_Unit_SpiritBear::GetServerClass  (line 270, @0x0000000002b4cfa0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_SpiritBear::GetServerClass(CDOTA_Unit_SpiritBear *const this)
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


// CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::~CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck  (line 280, @0x0000000002b99710, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::~CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck(
        CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck *const this)
{
  this->_vptr_CDOTA_Buff = &off_451F550;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::~CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck  (line 280, @0x0000000002b99730, libserver.so)  // inlines: ~CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::~CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck(
        CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck *const this)
{
  this->_vptr_CDOTA_Buff = &off_451F550;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::IsPermanent  (line 285, @0x0000000002b931a0, libserver.so)
bool __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::IsPermanent(
        CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck *const this)
{
  return 1;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::IsHidden  (line 286, @0x0000000002b931b0, libserver.so)
bool __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::IsHidden(
        CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck *const this)
{
  return this->m_bCanBeResummoned;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::RemoveOnDeath  (line 288, @0x0000000002b931c0, libserver.so)
bool __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::RemoveOnDeath(
        CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck *const this)
{
  return 0;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::DeclareFunctions  (line 317, @0x0000000002b36270, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::OnTakeDamage(CModifierParams const&), CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::OnUnitMoved(CModifierParams const&), CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::OnDeath(CModifierParams const&), CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::DeclareFunctions(
        CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck *const this)
{
  this->m_Functions[134].__pfn = CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[126].__delta = 0;
  this->m_Functions[126].__pfn = CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::OnUnitMoved;
  this->m_Functions[138].__pfn = CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::OnDeath;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::GetActivityTranslationModifiers  (line 327, @0x0000000002b3c2f0, libserver.so)
// strings: "attackcheck"
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::GetActivityTranslationModifiers(
        CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "attackcheck";
  *&result.m_eType = 2;
  if ( this->m_bCanAttack )
    result.m_szVal = "";
  return result;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::OnIntervalThink  (line 339, @0x0000000002b37130, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::OnIntervalThink(
        CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck *const this)
{
  float v1; // xmm1_4

  CDOTA_Buff::StartIntervalThink(this, -1.0, v1);
  this->m_bCanBeResummoned = 1;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::OnCreated  (line 352, @0x0000000002b362e0, libserver.so)
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::OnCreated(
        CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck *const this,
        KeyValues *pKV)
{
  this->m_bCanBeResummoned = 1;
  this->m_bCanAttack = 1;
  this->m_nFxIndex = -1;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::OnRefresh  (line 366, @0x0000000002b36300, libserver.so)
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::OnRefresh(
        CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::OnTakeDamage  (line 380, @0x0000000002b4b4d0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsOwnedByAnyPlayer, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::StartIntervalThink
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::OnTakeDamage(
        CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v12; // r13
  float v13; // xmm1_4

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hunit.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 > 1 )
  {
    m_Index_low = LOWORD(params->hattacker.m_Index);
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[m_Index_low & 0x1FF];
      if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
      {
        v12 = v10->m_pInstance;
        if ( v10->m_pInstance != 0
          && BYTE3(v12[7]._vptr_IHandleEntity) != 0
          && m_pInstance != 0
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && CDOTA_Buff::GetParent(this) != v12
          && ((v12[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
           || v12[61].m_hPrivateScope.m_hScope != 0
           || (*(v12->_vptr_IHandleEntity + 405))(v12) != 0) )
        {
          this->m_bCanBeResummoned = 0;
          CDOTA_Buff::StartIntervalThink(this, 3.0, v13);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::OnDeath  (line 398, @0x0000000002b44d00, libserver.so)  // inlines: CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::StartIntervalThink, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::OnDeath(
        CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  float v8; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  unsigned __int16 v10; // cx
  int v11; // esi
  int v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  int m_nFxIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax

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
  if ( v5->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
    return 1uLL;
  if ( CDOTA_Buff::GetParent(this) != m_pInstance )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( Parent->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v10 = 0x7FFF;
      v11 = 0x7FFF;
    }
    else
    {
      v10 = Parent->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v11 = v10;
    }
    v12 = (Parent->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v10 & 0x7FFF;
    if ( (v12 + 2) <= 1 )
      return 1uLL;
    v13 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v11 >> 9];
    if ( v13 == 0 )
      return 1uLL;
    v14 = &v13[v11 & 0x1FF];
    if ( v14 == 0 || v12 != v14->m_EHandle.m_Index || m_pInstance != v14->m_pInstance )
      return 1uLL;
  }
  CDOTA_Buff::StartIntervalThink(this, -1.0, v8);
  this->m_bCanBeResummoned = 1;
  m_nFxIndex = this->m_nFxIndex;
  if ( m_nFxIndex == -1 )
    return 1uLL;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFxIndex, 0);
  return 1uLL;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::UpdateStatusEffect  (line 417, @0x0000000002b5cbb0, libserver.so)
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::UpdateStatusEffect(
        CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck *const this)
{
  ;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::OnUnitMoved  (line 446, @0x0000000002b43800, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityHandle, CReliableBroadcastRecipientFilter, FastSqrt, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_BaseNPC::HasScepter, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::GetOpposingTeamNumber, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam (17 total)
// strings: "particles/generic_gameplay/generic_disarm.vpcf"
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::OnUnitMoved(
        CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  CBaseEntity *v4; // rbx
  uint32 v5; // ecx
  unsigned __int16 v6; // ax
  int v7; // esi
  int v8; // edx
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CDOTA_BaseNPC *m_pInstance; // r13
  const Vector *AbsOrigin; // r14
  const Vector *v14; // rax
  int m_nFxIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v20; // rax
  CReliableBroadcastRecipientFilter filter; // [rsp+20h] [rbp-160h] BYREF
  unsigned __int64 v22; // [rsp+158h] [rbp-28h]

  v22 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  v4 = Parent;
  if ( Parent != 0 )
  {
    v5 = Parent->m_hOwnerEntity.m_Value.m_Index >> 15;
    if ( Parent->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v6 = 0x7FFF;
      v7 = 0x7FFF;
    }
    else
    {
      v6 = Parent->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v7 = v6;
    }
    v8 = (v5 << 15) | v6 & 0x7FFF;
    if ( (v8 + 2) > 1 )
    {
      v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
      if ( v9 != 0 )
      {
        v10 = &v9[v7 & 0x1FF];
        if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        {
          m_pInstance = v10->m_pInstance;
          if ( v10->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          {
            AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
            v14 = CBaseEntity::GetAbsOrigin(m_pInstance);
            if ( fsqrt(
                   ((v14->x - AbsOrigin->x) * (v14->x - AbsOrigin->x))
                 + ((v14->y - AbsOrigin->y) * (v14->y - AbsOrigin->y))) <= 1100.0
              || CDOTA_BaseNPC::HasScepter(m_pInstance) )
            {
              m_nFxIndex = this->m_nFxIndex;
              this->m_bCanAttack = 1;
              if ( m_nFxIndex != -1 )
              {
                ParticleManager = GetParticleManager();
                CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFxIndex, 0);
                this->m_nFxIndex = -1;
              }
            }
            else
            {
              this->m_bCanAttack = 0;
              CRecipientFilter::CRecipientFilter(&filter);
              filter._vptr_IRecipientFilter = &off_3FB63F0;
              CRecipientFilter::AddAllPlayers(&filter);
              filter._vptr_IRecipientFilter = &off_3FCB130;
              CRecipientFilter::MakeReliable(&filter);
              Caster = CDOTA_Buff::GetCaster(this);
              OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(Caster);
              GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
              CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
              v20 = GetGlobalTeam(1);
              CRecipientFilter::AddRecipientsByTeam(&filter, v20);
              if ( this->m_nFxIndex == -1 )
                this->m_nFxIndex = CDOTA_Buff::CreateBuffParticleEffect(
                                     this,
                                     "particles/generic_gameplay/generic_disarm.vpcf",
                                     7,
                                     v4,
                                     &filter);
              filter._vptr_IRecipientFilter = &off_3FB63F0;
              CRecipientFilter::~CRecipientFilter(&filter);
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::CheckState  (line 488, @0x0000000002b3c4c0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck::CheckState(
        CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck *const this,
        CDOTABuffState *const buffState)
{
  if ( !this->m_bCanAttack )
  {
    buffState->m_nEnabledStateMask |= 2uLL;
    buffState->m_nDisabledStateMask &= ~2uLL;
  }
}


// CDOTA_Unit_SpiritBear::ModifyOrAppendCriteria  (line 497, @0x0000000002b38420, libserver.so)
// calls: CDOTA_BaseNPC::ModifyOrAppendCriteria, CResponseCriteriaSet::AppendCriteria
// strings: "npc_dota_lone_druid_bear"
void __fastcall CDOTA_Unit_SpiritBear::ModifyOrAppendCriteria(
        CDOTA_Unit_SpiritBear *const this,
        CResponseCriteriaSet *const set)
{
  CDOTA_BaseNPC::ModifyOrAppendCriteria(this, set);
  CResponseCriteriaSet::AppendCriteria(set, "classname", "npc_dota_lone_druid_bear", 1.0);
}


// CDOTA_Unit_Hero_LoneDruid::~CDOTA_Unit_Hero_LoneDruid  (line 511, @0x0000000002ba2f60, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_LoneDruid::~CDOTA_Unit_Hero_LoneDruid(CDOTA_Unit_Hero_LoneDruid *const this)
{
  this->_vptr_IHandleEntity = &off_451F8B0;
  this->_vptr_INextBotEventResponder = &off_4520890;
  this->_vptr_CObstructionObject = &off_4520BC0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_LoneDruid::~CDOTA_Unit_Hero_LoneDruid  (line 511, @0x0000000002ba2fa0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_LoneDruid
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_LoneDruid::~CDOTA_Unit_Hero_LoneDruid(CDOTA_Unit_Hero_LoneDruid *const this)
{
  this->_vptr_IHandleEntity = &off_451F8B0;
  this->_vptr_INextBotEventResponder = &off_4520890;
  this->_vptr_CObstructionObject = &off_4520BC0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_LoneDruid::Schema_DynamicBinding  (line 513, @0x0000000002b931d0, libserver.so)
// globals: CDOTA_Unit_Hero_LoneDruid::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_LoneDruid::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_LoneDruid *const this)
{
  return CDOTA_Unit_Hero_LoneDruid::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 513, @0x0000000002b93200, libserver.so)
// globals: CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::DestructInstance  (line 513, @0x0000000002b93210, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_LoneDruid>
void __fastcall CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::FreeInstance  (line 513, @0x0000000002b93230, libserver.so)
void __fastcall CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::CanAllocate  (line 513, @0x0000000002b93250, libserver.so)
bool __fastcall CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 513, @0x0000000002b93260, libserver.so)
// globals: CDOTA_Unit_Hero_LoneDruid::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_LoneDruid::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::AllocateInstance  (line 513, @0x0000000002b98ae0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::ConstructInstance  (line 513, @0x0000000002b9c890, libserver.so)  // inlines: CDOTA_Unit_Hero_LoneDruid, Construct<CDOTA_Unit_Hero_LoneDruid>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_451F8B0;
    *(p + 236) = &off_4520890;
    *(p + 257) = &off_4520BC0;
  }
  return p;
}


// CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 513, @0x0000000002babf90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 513, @0x0000000002bac280, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_LoneDruid::GetEntityClassInternal  (line 513, @0x0000000002bcf290, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_lone_druid", "CDOTA_Unit_Hero_LoneDruid"
// globals: `guard variable for'CDOTA_Unit_Hero_LoneDruid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClass, CDOTA_Unit_Hero_LoneDruid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClass, __dso_handle, CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_LoneDruid::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClassInfo, CDOTA_Unit_Hero_LoneDruid::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_LoneDruid::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_LoneDruid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_LoneDruid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_LoneDruid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClass);
    CDOTA_Unit_Hero_LoneDruid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClass._vptr_CEntityClass = off_451F830;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_LoneDruid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_LoneDruid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_LoneDruidClass != 0 )
    return &CDOTA_Unit_Hero_LoneDruid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClass;
  if ( `guard variable for'CDOTA_Unit_Hero_LoneDruid::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_LoneDruid::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_LoneDruid::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClassInfo,
      "CDOTA_Unit_Hero_LoneDruid",
      "npc_dota_hero_lone_druid",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_LoneDruid::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClassInfo);
  }
  CDOTA_Unit_Hero_LoneDruid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClass.m_pClassInfo = &CDOTA_Unit_Hero_LoneDruid::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClassInfo;
  CDOTA_Unit_Hero_LoneDruid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClass.m_pBaseClassInfo = CDOTA_Unit_Hero_LoneDruid::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_LoneDruidClass = &CDOTA_Unit_Hero_LoneDruid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClass;
  CDOTA_Unit_Hero_LoneDruid::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClassInfo.m_pClass = &CDOTA_Unit_Hero_LoneDruid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClass;
  CDOTA_Unit_Hero_LoneDruid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_LoneDruidClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_LoneDruid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LoneDruidClass;
}


// CDOTA_Unit_Hero_LoneDruid::YouForgotToImplementOrDeclareServerClass  (line 540, @0x0000000002b36310, libserver.so)
int __fastcall CDOTA_Unit_Hero_LoneDruid::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_LoneDruid *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_LoneDruid::GetServerClass  (line 540, @0x0000000002b4c5e0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_LoneDruid::GetServerClass(CDOTA_Unit_Hero_LoneDruid *const this)
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


// CDOTA_Unit_Hero_LoneDruid::Precache  (line 547, @0x0000000002b5e320, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, PrecacheParticleSystem, CFmtStrN<256, false>::CFmtStrN, DOTA_PrecacheUnitByNameSync, __stack_chk_fail
// strings: "particles/units/heroes/hero_axe/axe_beserkers_call_owner.vpcf", "particles/units/heroes/hero_axe/axe_beserkers_call.vpcf", "particles/status_fx/status_effect_beserkers_call.vpcf", "npc_dota_lone_druid_bear%1d"
void __fastcall CDOTA_Unit_Hero_LoneDruid::Precache(
        CDOTA_Unit_Hero_LoneDruid *const this,
        const CEntityPrecacheContext *pContext)
{
  int v3; // ebx
  int v4; // edx
  CFmtStrN<256,false> v5; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v6; // [rsp+118h] [rbp-28h]

  v3 = 1;
  v6 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  PrecacheParticleSystem("particles/units/heroes/hero_axe/axe_beserkers_call_owner.vpcf", pContext);
  PrecacheParticleSystem("particles/units/heroes/hero_axe/axe_beserkers_call.vpcf", pContext);
  PrecacheParticleSystem("particles/status_fx/status_effect_beserkers_call.vpcf", pContext);
  do
  {
    v4 = v3++;
    CFmtStrN<256,false>::CFmtStrN(&v5, "npc_dota_lone_druid_bear%1d", v4);
    DOTA_PrecacheUnitByNameSync(v5.m_szBuf, pContext, -1);
  }
  while ( v3 != 5 );
}


// CDOTA_Unit_Hero_LoneDruid::Spawn  (line 565, @0x0000000002b39c60, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn
void __fastcall CDOTA_Unit_Hero_LoneDruid::Spawn(
        CDOTA_Unit_Hero_LoneDruid *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
}


// CDOTA_Unit_Hero_LoneDruid::UsedGestureBasedAttackAnimation  (line 572, @0x0000000002b36a60, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_lone_druid_true_form"
bool __fastcall CDOTA_Unit_Hero_LoneDruid::UsedGestureBasedAttackAnimation(CDOTA_Unit_Hero_LoneDruid *const this)
{
  return CDOTA_BaseNPC::FindModifierByName(this, "modifier_lone_druid_true_form", 0) != 0;
}


// CDOTA_Unit_Hero_LoneDruid::ModifyOrAppendCriteria  (line 583, @0x0000000002b3ae40, libserver.so)
// calls: CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria, CDOTA_BaseNPC::FindModifierByName, CResponseCriteriaSet::AppendCriteria
// strings: "modifier_lone_druid_true_form", "trueform"
void __fastcall CDOTA_Unit_Hero_LoneDruid::ModifyOrAppendCriteria(
        CDOTA_Unit_Hero_LoneDruid *const this,
        CResponseCriteriaSet *const set)
{
  float v4; // xmm2_4

  CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(this, set);
  CDOTA_BaseNPC::FindModifierByName(this, "modifier_lone_druid_true_form", 0);
  CResponseCriteriaSet::AppendCriteria(set, "trueform", 1.0, v4);
}


// CDOTA_Unit_Hero_LoneDruid::GetSoundSet  (line 605, @0x0000000002b36a80, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::GetSoundSet
// strings: "modifier_lone_druid_true_form", "Hero_LoneDruid.TrueForm"
const char *__fastcall CDOTA_Unit_Hero_LoneDruid::GetSoundSet(CDOTA_Unit_Hero_LoneDruid *const this)
{
  if ( CDOTA_BaseNPC::FindModifierByName(this, "modifier_lone_druid_true_form", 0) != 0 )
    return "Hero_LoneDruid.TrueForm";
  else
    return CDOTA_BaseNPC::GetSoundSet(this);
}


// CDOTA_Ability_LoneDruid_SpiritBear::Schema_DynamicBinding  (line 624, @0x0000000002b93270, libserver.so)
// globals: CDOTA_Ability_LoneDruid_SpiritBear::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_SpiritBear::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_SpiritBear *const this)
{
  return CDOTA_Ability_LoneDruid_SpiritBear::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 624, @0x0000000002b93280, libserver.so)
// globals: CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::DestructInstance  (line 624, @0x0000000002b93290, libserver.so)  // inlines: Destruct<CDOTA_Ability_LoneDruid_SpiritBear>
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::FreeInstance  (line 624, @0x0000000002b932b0, libserver.so)
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::CanAllocate  (line 624, @0x0000000002b932d0, libserver.so)
bool __fastcall CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 624, @0x0000000002b932e0, libserver.so)
// globals: CDOTA_Ability_LoneDruid_SpiritBear::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_SpiritBear::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::AllocateInstance  (line 624, @0x0000000002b98b20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::ConstructInstance  (line 624, @0x0000000002ba86c0, libserver.so)  // inlines: CDOTA_Ability_LoneDruid_SpiritBear, CEntityHandle, CHandle, CNetworkVarBase, Construct<CDOTA_Ability_LoneDruid_SpiritBear>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 229) = -1;
    *p = &off_4520C90;
    *(p + 230) = -1;
  }
  return p;
}


// CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 624, @0x0000000002baba60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 624, @0x0000000002baba80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInternal  (line 624, @0x0000000002bcc740, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "lone_druid_spirit_bear", "CDOTA_Ability_LoneDruid_SpiritBear"
// globals: `guard variable for'CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClass, CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClass, __dso_handle, CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClassInfo, CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClassInfo
CEntityClass *__cdecl CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClass);
    CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClass._vptr_CEntityClass = off_4520C10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClass);
    __cxa_atexit(
      CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_LoneDruid_SpiritBearClass != 0 )
    return &CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClass;
  if ( `guard variable for'CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClassInfo,
      "CDOTA_Ability_LoneDruid_SpiritBear",
      "lone_druid_spirit_bear",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClassInfo);
  }
  CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClass.m_pClassInfo = &CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClassInfo;
  CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClass.m_pBaseClassInfo = CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_LoneDruid_SpiritBearClass = &CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClass;
  CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClassInfo.m_pClass = &CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClass;
  CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_LoneDruid_SpiritBearClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_LoneDruid_SpiritBear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBearClass;
}


// CDOTA_Ability_LoneDruid_SpiritBear::GetEffectName  (line 631, @0x0000000002b932f0, libserver.so)
// strings: "lone_druid_spirit_bear"
const char *__fastcall CDOTA_Ability_LoneDruid_SpiritBear::GetEffectName(
        CDOTA_Ability_LoneDruid_SpiritBear *const this)
{
  return "lone_druid_spirit_bear";
}


// CDOTA_Ability_LoneDruid_SpiritBear::YouForgotToImplementOrDeclareServerClass  (line 658, @0x0000000002b36320, libserver.so)
int __fastcall CDOTA_Ability_LoneDruid_SpiritBear::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_LoneDruid_SpiritBear *const this)
{
  return 0;
}


// CDOTA_Ability_LoneDruid_SpiritBear::GetServerClass  (line 658, @0x0000000002b4c7e0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_LoneDruid_SpiritBear::GetServerClass(
        CDOTA_Ability_LoneDruid_SpiritBear *const this)
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


// CDOTA_Ability_LoneDruid_SpiritBear::GetCooldown  (line 674, @0x0000000002b76190, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_LoneDruid_SpiritBear::GetCooldown(
        CDOTA_Ability_LoneDruid_SpiritBear *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_LoneDruid_SpiritBear::~CDOTA_Ability_LoneDruid_SpiritBear  (line 686, @0x0000000002b43f30, libserver.so)  // inlines: Get, GetBear, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::~CDOTABaseAbility, CDOTA_BaseNPC::ForceKill
// callers: CDOTA_Ability_LoneDruid_SpiritBear::~CDOTA_Ability_LoneDruid_SpiritBear
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear::~CDOTA_Ability_LoneDruid_SpiritBear(
        CDOTA_Ability_LoneDruid_SpiritBear *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  this->_vptr_IHandleEntity = &off_4520C90;
  m_Index = this->m_hBear.m_Value.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBear.m_Value.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hBear.m_Value.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0 )
  {
    CDOTA_BaseNPC::ForceKill(v4->m_pInstance, 0);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_LoneDruid_SpiritBear::~CDOTA_Ability_LoneDruid_SpiritBear  (line 686, @0x0000000002b43fc0, libserver.so)
// calls: CDOTA_Ability_LoneDruid_SpiritBear::~CDOTA_Ability_LoneDruid_SpiritBear, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear::~CDOTA_Ability_LoneDruid_SpiritBear(
        CDOTA_Ability_LoneDruid_SpiritBear *const this)
{
  CDOTA_Ability_LoneDruid_SpiritBear::~CDOTA_Ability_LoneDruid_SpiritBear(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_LoneDruid_SpiritBear::OnLoadState  (line 699, @0x0000000002b38a40, libserver.so)
// calls: CDOTABaseAbility::OnLoadState
bool __fastcall CDOTA_Ability_LoneDruid_SpiritBear::OnLoadState(
        CDOTA_Ability_LoneDruid_SpiritBear *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility::OnLoadState(this, pKV);
  this->m_bLevelChanged = 0;
  return 1;
}


// CDOTA_Unit_Hero_LoneDruid::OnSaveState  (line 712, @0x0000000002b42300, libserver.so)  // inlines: FindModifierByName
// calls: CDOTA_BaseNPC_Hero::OnSaveState, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, KeyValues::SetFloat
// strings: "modifier_lone_druid_true_form", "trueformactive"
bool __fastcall CDOTA_Unit_Hero_LoneDruid::OnSaveState(CDOTA_Unit_Hero_LoneDruid *const this, KeyValues *pKV)
{
  CModifieractoryDictionary *v4; // rax
  IModifierFactory *Factory; // rax
  float v6; // xmm1_4

  CDOTA_BaseNPC_Hero::OnSaveState(this, pKV);
  v4 = ModifierFactoryDictionary();
  Factory = CModifieractoryDictionary::FindFactory(v4, "modifier_lone_druid_true_form");
  if ( CDOTA_ModifierManager::FindModifierByName(&this->m_ModifierManager, Factory, "modifier_lone_druid_true_form", 0) != 0 )
    KeyValues::SetFloat(pKV, "trueformactive", v6);
  return 1;
}


// CDOTA_Unit_Hero_LoneDruid::OnLoadState  (line 729, @0x0000000002b610c0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnitName, IndexToIdentity, IsValid, LookupEntity, Purge, String, ToCStr, ToDOTABaseNPC, _V_strstr, operator CBaseEntity*, operator CEntityInstance*, strstr, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_BaseNPC_Hero::OnLoadState, KeyValues::GetInt, CDOTA_BaseNPC::FindAbilityByName, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, FindUnitsInRadius, strstr, CDOTA_Ability_LoneDruid_SpiritBear::SetBear, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, __stack_chk_fail (14 total)
// strings: "trueformactive", "modifier_lone_druid_true_form", "npc_dota_lone_druid_bear", "lone_druid_spirit_bear"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Unit_Hero_LoneDruid::OnLoadState(CDOTA_Unit_Hero_LoneDruid *const this, KeyValues *pKV)
{
  int m_Value; // edi
  CHandle<CBaseEntity> *m_pMemory; // rbx
  CConcreteEntityList *v6; // r8
  CHandle<CBaseEntity> *v7; // r15
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_Unit_SpiritBear *m_pInstance; // r14
  const char *m_pAsString; // rdi
  char *v12; // rax
  CDOTA_Ability_LoneDruid_SpiritBear *AbilityByName; // rdi
  CConcreteEntityList *v15; // [rsp+18h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hPotentialBears; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
  if ( KeyValues::GetInt(pKV, "trueformactive", 0) != 0
    && CDOTA_BaseNPC::FindAbilityByName(this, "lone_druid_true_form", 0) != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_lone_druid_true_form");
    CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_lone_druid_true_form", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  m_Value = this->m_iTeamNum.m_Value;
  hPotentialBears.m_Size = 0;
  hPotentialBears.m_Memory.m_pMemory = 0;
  hPotentialBears.m_Memory.m_nAllocationCount = 0;
  hPotentialBears.m_Memory.m_nGrowSize = 0;
  FindUnitsInRadius(m_Value, &vec3_origin, 0, -1.0, &hPotentialBears, 1, 1, 8, 0, 0);
  if ( hPotentialBears.m_Size > 0 )
  {
    m_pMemory = hPotentialBears.m_Memory.m_pMemory;
    v6 = CEntityHandle::gm_pEntityList;
    v7 = &hPotentialBears.m_Memory.m_pMemory[hPotentialBears.m_Size - 1 + 1];
    while ( 1 )
    {
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v8 = v6->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[m_pMemory->m_Index & 0x1FF];
          if ( v9 != 0 && m_pMemory->m_Index == v9->m_EHandle.m_Index )
          {
            m_pInstance = v9->m_pInstance;
            if ( v9->m_pInstance != 0
              && m_pInstance->m_bIsDOTANPC
              && m_pInstance->m_iTeamNum.m_Value == this->m_iTeamNum.m_Value )
            {
              m_pAsString = m_pInstance->m_iszUnitName.m_Value.u.m_pAsString;
              if ( m_pAsString != 0 )
              {
                v15 = v6;
                v12 = strstr(m_pAsString, "npc_dota_lone_druid_bear");
                v6 = v15;
                if ( v12 != 0 )
                  break;
              }
            }
          }
        }
      }
      if ( ++m_pMemory == v7 )
        goto LABEL_18;
    }
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "lone_druid_spirit_bear", 0);
    if ( AbilityByName != 0 )
      CDOTA_Ability_LoneDruid_SpiritBear::SetBear(AbilityByName, m_pInstance);
  }
LABEL_18:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hPotentialBears);
  if ( (hPotentialBears.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hPotentialBears.m_Memory);
    if ( (hPotentialBears.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hPotentialBears.m_Memory);
  }
  return 1;
}


// CDOTA_Ability_LoneDruid_SpiritBear::GetBear  (line 769, @0x0000000002b5cbc0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
CDOTA_Unit_SpiritBear *__fastcall CDOTA_Ability_LoneDruid_SpiritBear::GetBear(
        CDOTA_Ability_LoneDruid_SpiritBear *const this)
{
  CDOTA_Unit_SpiritBear *result; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  result = 0;
  m_Index = this->m_hBear.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBear.m_Value.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hBear.m_Value.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        return v4->m_pInstance;
    }
  }
  return result;
}


// CDOTA_Ability_LoneDruid_SpiritBear::SetBear  (line 779, @0x0000000002b5efb0, libserver.so)  // inlines: Get, GetBear, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetBearRespawn, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>, operator=, operator=<CDOTA_Unit_SpiritBear*>
// calls: CHandle<CBaseEntity>::CHandle, CDOTA_BaseNPC::FindModifierByName, __dynamic_cast, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTA_UnitInventory::RemoveItem, CDOTA_UnitInventory::AddItem (14 total)
// callers: CDOTA_Ability_LoneDruid_SpiritBear::OnUpgrade, CDOTA_Unit_Hero_LoneDruid::OnLoadState, CDOTA_Ability_LoneDruid_SpiritBear::OnSpellStart
// strings: "modifier_item_moon_shard_consumed", "consumed_bonus"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear::SetBear(
        CDOTA_Ability_LoneDruid_SpiritBear *const this,
        CDOTA_Unit_SpiritBear *pNewBear)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  uint32 v7; // eax
  CEntityInstance *v8; // rdi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v11; // rsi
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // r13
  CDOTA_Buff *ModifierByName; // rax
  _DWORD *v16; // rax
  int v17; // r12d
  float v18; // xmm1_4
  int i; // ebx
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // r12
  CDOTA_UnitInventory *v22; // rax
  CDOTA_UnitInventory *v23; // rax
  CHandle<CBaseEntity> v24; // [rsp+0h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( pNewBear != 0 )
  {
    m_Index = this->m_hBear.m_Value.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBear.m_Value.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[this->m_hBear.m_Value.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 )
          {
            ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_item_moon_shard_consumed", 0);
            if ( ModifierByName != 0 )
            {
              v16 = __dynamic_cast(
                      ModifierByName,
                      &`typeinfo for'CDOTA_Buff,
                      &`typeinfo for'CDOTA_Modifier_Item_Moonshard_Consumed,
                      0);
              if ( v16 != 0 )
              {
                v17 = v16[746];
                KeyValues::KeyValues(&kv, "modifier_item_moon_shard_consumed");
                KeyValues::SetFloat(&kv, "duration", v18);
                KeyValues::SetInt(&kv, "consumed_bonus", v17);
                CDOTA_BaseNPC::AddNewModifier(pNewBear, pNewBear, this, "modifier_item_moon_shard_consumed", &kv, 0);
                KeyValues::~KeyValues(&kv);
              }
            }
            for ( i = 0; i != 9; ++i )
            {
              Inventory = CDOTA_BaseNPC::GetInventory(m_pInstance);
              ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, i);
              if ( ItemInSlot != 0 )
              {
                v22 = CDOTA_BaseNPC::GetInventory(m_pInstance);
                CDOTA_UnitInventory::RemoveItem(v22, ItemInSlot, 0, 0);
                v23 = CDOTA_BaseNPC::GetInventory(pNewBear);
                CDOTA_UnitInventory::AddItem(v23, ItemInSlot, 1, i, 0, 0);
              }
            }
            LOBYTE(m_pInstance[93].m_CScriptComponent) = 0;
          }
        }
      }
    }
    CHandle<CBaseEntity>::CHandle(&v24, pNewBear);
    v7 = this->m_hBear.m_Value.m_Index;
    v8 = 0;
    if ( v7 + 2 > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBear.m_Value.m_Index) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[this->m_hBear.m_Value.m_Index & 0x1FF];
        if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
          v8 = v10->m_pInstance;
      }
    }
    v11 = 0;
    if ( v24.m_Index + 2 > 1 )
    {
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v24.m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[v24.m_Index & 0x1FF];
        if ( v13 != 0 && v24.m_Index == v13->m_EHandle.m_Index )
          v11 = v13->m_pInstance;
      }
    }
    if ( v8 != v11 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_hBear.m_Value = v24;
    }
  }
}


// CDOTA_Ability_LoneDruid_SpiritBear::CastFilterResult  (line 851, @0x0000000002b43d70, libserver.so)  // inlines: Get, GetBear, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_lone_druid_spirit_bear_attack_check"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Ability_LoneDruid_SpiritBear::CastFilterResult(CDOTA_Ability_LoneDruid_SpiritBear *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CDOTA_Buff *ModifierByName; // rax

  m_Index = this->m_hBear.m_Value.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBear.m_Value.m_Index) >> 9) & 0x3F];
  if ( v2 == 0 )
    return 0;
  v3 = &v2[this->m_hBear.m_Value.m_Index & 0x1FF];
  if ( v3 == 0 || m_Index != v3->m_EHandle.m_Index || v3->m_pInstance == 0 )
    return 0;
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v3->m_pInstance, "modifier_lone_druid_spirit_bear_attack_check", 0);
  if ( ModifierByName == 0 || LOBYTE(ModifierByName[1]._vptr_CDOTA_Buff) != 0 )
    return 0;
  else
    return 23;
}


// CDOTA_Ability_LoneDruid_SpiritBear::GetCustomCastError  (line 869, @0x0000000002b36330, libserver.so)
// strings: "#dota_hud_error_cant_resummon_now"
const char *__fastcall CDOTA_Ability_LoneDruid_SpiritBear::GetCustomCastError(
        CDOTA_Ability_LoneDruid_SpiritBear *const this)
{
  return "#dota_hud_error_cant_resummon_now";
}


// CDOTA_Ability_LoneDruid_SpiritBear::OnSpellStart  (line 876, @0x0000000002b63330, libserver.so)  // inlines: CEntityHandle, CEntityKeyValuesModifyScope, CalculateBearStats, Get, GetBear, GetEntryIndex, GetHandleEntity, GetInstance, GetIntrinsicModifiers, GetModifier_Constant_Additive, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsListeningToEvent, IsStolen, LookupEntity, NetworkStateChanged, Set, SetMaxMana, SetStolen, ToDOTABaseNPC, VectorAdd, operator CBaseEntity*, operator+, operator=<float>, ~CEntityKeyValuesModifyScope
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, V_snprintf, CBaseEntity::GetAbsOrigin, DOTA_CreateUnitByName, CDOTA_BaseNPC::SetControllableByPlayer, CDOTA_Ability_LoneDruid_SpiritBear::SetBear, RandomFloat, FindClearSpaceForUnit, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles, KeyValues::KeyValues (36 total)
// strings: "Hero_LoneDruid.SpiritBear.Cast", "npc_dota_lone_druid_bear%d", "modifier_spirit_bear_attack_damage", "particles/units/heroes/hero_lone_druid/lone_druid_bear_spawn.vpcf", "lone_druid_savage_roar", "lone_druid_savage_roar_bear" (7 total)
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear::OnSpellStart(CDOTA_Ability_LoneDruid_SpiritBear *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int m_Value; // r15d
  CDOTA_BaseNPC *v4; // r14
  CDOTA_BaseNPC *v5; // r13
  CDOTA_BaseNPC *v6; // rax
  const Vector *v7; // rax
  CDOTA_BaseNPC *UnitByName; // r12
  CDOTA_BaseNPC *v9; // rax
  int v10; // eax
  unsigned __int16 v11; // dx
  int v12; // esi
  int v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  __m128i v16; // xmm0
  float v17; // r13d
  CDOTA_BaseNPC *v18; // rax
  const Vector *v19; // rax
  float v20; // xmm0_4
  CDOTA_BaseNPC *v21; // rax
  const QAngle *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  int v25; // r13d
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTABaseAbility *v28; // rax
  CDOTABaseAbility *v29; // rax
  CDOTABaseAbility *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  CDOTABaseAbility *AbilityByName; // r13
  CDOTABaseAbility *v33; // rax
  CDOTABaseAbility *v34; // rbx
  const CBaseEntity *v35; // rax
  CBaseEntity *v36; // r12
  const Vector *AbsOrigin; // rax
  __int64 v38; // rdx
  int AbilityParticleEffect; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v41; // rax
  void (__fastcall *v42)(CBaseEntity *, CDOTA_BaseNPC *); // r13
  CDOTA_BaseNPC *v43; // rax
  float Modifier_Constant_Additive_Internal; // xmm1_4
  __int64 v45; // rax
  __int64 v46; // rax
  float v47; // xmm0_4
  __int64 v48; // rax
  float v49; // xmm2_4
  float v50; // xmm1_4
  float v51; // xmm2_4
  float v52; // xmm0_4
  __int64 v53; // rax
  float v54; // xmm0_4
  int v55; // r13d
  float v56; // xmm0_4
  float v57; // xmm1_4
  unsigned __int16 v58; // dx
  int v59; // esi
  int v60; // eax
  CEntityIdentity *v61; // rdx
  CEntityIdentity *v62; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *AbilityByIndex; // r14
  __m128i v65; // xmm0
  float v66; // r13d
  CDOTA_BaseNPC *v67; // rax
  const Vector *v68; // rax
  float v69; // xmm0_4
  CDOTA_BaseNPC *v70; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_BaseNPC *v72; // rax
  int v73; // r13d
  CDOTA_ParticleManager *v74; // rax
  CDOTA_ParticleManager *v75; // rax
  CDOTA_BaseNPC *v76; // rdi
  CDOTABaseAbility *v77; // r13
  float v78; // [rsp+8h] [rbp-198h]
  float v79; // [rsp+8h] [rbp-198h]
  float v80; // [rsp+Ch] [rbp-194h]
  float v81; // [rsp+Ch] [rbp-194h]
  float v82; // [rsp+Ch] [rbp-194h]
  float v83; // [rsp+Ch] [rbp-194h]
  float m_iEFlags; // [rsp+Ch] [rbp-194h]
  float v85; // [rsp+Ch] [rbp-194h]
  float v86; // [rsp+Ch] [rbp-194h]
  bool value; // [rsp+1Fh] [rbp-181h] BYREF
  Vector vOldPos; // [rsp+20h] [rbp-180h]
  unsigned __int128 vSpawnPoint; // [rsp+30h] [rbp-170h] OVERLAPPED BYREF
  KeyValues kv2; // [rsp+40h] [rbp-160h] BYREF
  char szUnitName[260]; // [rsp+60h] [rbp-140h] BYREF
  unsigned __int64 v92; // [rsp+168h] [rbp-38h]
  Vector v93; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v94; // 0:xmm0_8.8,8:xmm1_4.4

  v92 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_LoneDruid.SpiritBear.Cast", 0.0, 0, 0);
  if ( this->m_bLevelChanged )
    goto LABEL_2;
  v35 = CEntityHandle::operator CEntityInstance *(&this->m_hBear.m_Value);
  v36 = v35;
  if ( v35 != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v35);
    v38 = *&AbsOrigin->x;
    *&AbsOrigin = AbsOrigin->z;
    *&vOldPos.x = v38;
    LODWORD(vOldPos.z) = AbsOrigin;
    AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                              this,
                              "particles/units/heroes/hero_lone_druid/lone_druid_bear_spawn.vpcf",
                              8,
                              0,
                              0);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbilityParticleEffect, 0, *&vOldPos.x, vOldPos.z);
    v41 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v41, AbilityParticleEffect);
    if ( (*(v36->_vptr_IHandleEntity + 408))(v36) == 0 )
    {
      CEntityKeyValues::CEntityKeyValues(szUnitName);
      vSpawnPoint = 0u;
      CEntityKeyValuesModifyScope::BeginModify(&vSpawnPoint, szUnitName);
      value = 1;
      CEntityKeyValues::SetValue<bool>(szUnitName, 1526165316, &value);
      CDOTA_BaseNPC::DirectRespawn(v36, szUnitName);
      CEntityKeyValuesModifyScope::Release(&vSpawnPoint);
      CEntityKeyValues::~CEntityKeyValues(szUnitName);
    }
    v42 = *(v36->_vptr_IHandleEntity + 40);
    v43 = CDOTABaseAbility::GetCaster(this);
    v42(v36, v43);
    Modifier_Constant_Additive_Internal = 0.0;
    v45 = LOBYTE(v36[4].m_NetworkTransmitComponent.m_PVSInfo.m_pClustersInline[3]);
    if ( v45 != 0xFF && *(&v36[4].m_CBodyComponent->_vptr_CBodyComponent + 6 * v45) > 0 )
      Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                              &v36[4],
                                              modifierfunction::MODIFIER_PROPERTY_HEALTH_BONUS,
                                              &CModifierParams::s_Default);
    v46 = HIBYTE(v36[4].m_NetworkTransmitComponent.m_PVSInfo.m_pClustersInline[4]);
    v47 = 0.0;
    if ( v46 != 0xFF && *(&v36[4].m_CBodyComponent->_vptr_CBodyComponent + 6 * v46) > 0 )
    {
      v81 = Modifier_Constant_Additive_Internal;
      v47 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &v36[4],
              modifierfunction::MODIFIER_PROPERTY_EXTRA_HEALTH_BONUS,
              &CModifierParams::s_Default);
      Modifier_Constant_Additive_Internal = v81;
    }
    v48 = HIBYTE(v36[4].m_NetworkTransmitComponent.m_PVSInfo.m_pClustersInline[3]);
    v49 = Modifier_Constant_Additive_Internal;
    v50 = 0.0;
    v51 = v49 + v47;
    if ( v48 != 0xFF && *(&v36[4].m_CBodyComponent->_vptr_CBodyComponent + 6 * v48) > 0 )
    {
      v82 = v51;
      v52 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &v36[4],
              modifierfunction::MODIFIER_PROPERTY_MANA_BONUS,
              &CModifierParams::s_Default);
      v51 = v82;
      v50 = v52;
    }
    v53 = LOBYTE(v36[4].m_NetworkTransmitComponent.m_PVSInfo.m_pClustersInline[5]);
    v54 = 0.0;
    if ( v53 != 0xFF && *(&v36[4].m_CBodyComponent->_vptr_CBodyComponent + 6 * v53) > 0 )
    {
      v78 = v50;
      v83 = v51;
      v54 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &v36[4],
              modifierfunction::MODIFIER_PROPERTY_EXTRA_MANA_BONUS,
              &CModifierParams::s_Default);
      v50 = v78;
      v51 = v83;
    }
    v55 = (v51 + *&v36[2].m_DamageModifiers.m_FirstFree);
    v79 = v54 + v50;
    m_iEFlags = v36[2].m_iEFlags;
    CBaseEntity::SetMaxHealth(v36, v55);
    v56 = v79 + m_iEFlags;
    if ( (v79 + m_iEFlags) != *&v36[2].m_DamageModifiers.m_Head )
    {
      (*(v36->_vptr_IHandleEntity + 22))(v36, 2144, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v56 = v79 + m_iEFlags;
      *&v36[2].m_DamageModifiers.m_Head = v79 + m_iEFlags;
    }
    v85 = v56;
    CDOTA_BaseNPC::ModifyHealth(v36, v55, 0, 0, 0);
    CDOTA_BaseNPC::SetMana(v36, v85, v57);
    if ( v36->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v58 = 0x7FFF;
      v59 = 0x7FFF;
    }
    else
    {
      v58 = v36->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v59 = v58;
    }
    v60 = (v36->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v58 & 0x7FFF;
    LODWORD(vSpawnPoint) = v60;
    if ( (v60 + 2) > 1 )
    {
      v61 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v59 >> 9];
      if ( v61 != 0 )
      {
        v62 = &v61[v59 & 0x1FF];
        if ( v62 != 0 && v60 == v62->m_EHandle.m_Index )
        {
          m_pInstance = v62->m_pInstance;
          if ( v62->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          {
            AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(m_pInstance, 0);
            if ( AbilityByIndex != 0 )
            {
              KeyValues::KeyValues(szUnitName, "modifier_lone_druid_spirit_bear_attack_check");
              CDOTA_BaseNPC::AddNewModifier(
                v36,
                v36,
                AbilityByIndex,
                "modifier_lone_druid_spirit_bear_attack_check",
                szUnitName,
                0);
              KeyValues::~KeyValues(szUnitName);
            }
          }
        }
      }
    }
    *v65.m128i_i32 = RandomFloat(-100.0, 100.0);
    v66 = COERCE_FLOAT(_mm_cvtsi128_si32(v65));
    v86 = RandomFloat(-100.0, 100.0);
    v67 = CDOTABaseAbility::GetCaster(this);
    v68 = CBaseEntity::GetAbsOrigin(v67);
    v69 = v86 + v68->x;
    v94.z = v68->z + 0.0;
    *(&vSpawnPoint + 1) = v66 + v68->y;
    *&vSpawnPoint = v69;
    *&v94.x = vSpawnPoint;
    DWORD2(vSpawnPoint) = LODWORD(v94.z);
    FindClearSpaceForUnit(v36, v94, 1);
    v70 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v70);
    CBaseEntity::SetAbsAngles(v36, AbsAngles);
    v72 = CDOTABaseAbility::GetCaster(this);
    v73 = CDOTABaseAbility::CreateAbilityParticleEffect(
            this,
            "particles/units/heroes/hero_lone_druid/lone_druid_bear_spawn.vpcf",
            2,
            v72,
            0);
    v74 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v74, v73, 0, v36, 1, 0, vec3_invalid, 1);
    v75 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v75, v73);
    if ( this->m_bLevelChanged )
    {
LABEL_2:
      V_snprintf(szUnitName, 260, "npc_dota_lone_druid_bear%d", this->m_iLevel.m_Value);
      m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
      v4 = CDOTABaseAbility::GetCaster(this);
      v5 = CDOTABaseAbility::GetCaster(this);
      v6 = CDOTABaseAbility::GetCaster(this);
      v7 = CBaseEntity::GetAbsOrigin(v6);
      UnitByName = DOTA_CreateUnitByName(szUnitName, v7, 0, v5, v4, m_Value);
      if ( UnitByName != 0 )
      {
        this->m_bLevelChanged = 0;
        v9 = CDOTABaseAbility::GetCaster(this);
        v10 = (*(v9->_vptr_IHandleEntity + 414))(v9);
        CDOTA_BaseNPC::SetControllableByPlayer(UnitByName, v10, 0);
        BYTE1(UnitByName[1]._vptr_IHandleEntity) = this->m_bStolen.m_Value;
        CDOTA_Ability_LoneDruid_SpiritBear::SetBear(this, UnitByName);
        if ( UnitByName->m_hOwnerEntity.m_Value.m_Index == -1 )
        {
          v11 = 0x7FFF;
          v12 = 0x7FFF;
        }
        else
        {
          v11 = UnitByName->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
          v12 = v11;
        }
        v13 = (UnitByName->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v11 & 0x7FFF;
        LODWORD(vSpawnPoint) = v13;
        if ( (v13 + 2) > 1 )
        {
          v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9];
          if ( v14 != 0 )
          {
            v15 = &v14[v12 & 0x1FF];
            if ( v15 != 0 && v13 == v15->m_EHandle.m_Index )
            {
              v76 = v15->m_pInstance;
              if ( v15->m_pInstance != 0 && v76->m_bIsDOTANPC )
              {
                v77 = CDOTA_BaseNPC::GetAbilityByIndex(v76, 0);
                if ( v77 != 0 )
                {
                  KeyValues::KeyValues(&kv2, "modifier_lone_druid_spirit_bear_attack_check");
                  CDOTA_BaseNPC::AddNewModifier(
                    UnitByName,
                    UnitByName,
                    v77,
                    "modifier_lone_druid_spirit_bear_attack_check",
                    &kv2,
                    0);
                  KeyValues::~KeyValues(&kv2);
                }
              }
            }
          }
        }
        *v16.m128i_i32 = RandomFloat(-200.0, 200.0);
        v17 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
        v80 = RandomFloat(-200.0, 200.0);
        v18 = CDOTABaseAbility::GetCaster(this);
        v19 = CBaseEntity::GetAbsOrigin(v18);
        v20 = v80 + v19->x;
        v93.z = v19->z + 0.0;
        *(&vSpawnPoint + 1) = v17 + v19->y;
        *&vSpawnPoint = v20;
        *&v93.x = vSpawnPoint;
        DWORD2(vSpawnPoint) = LODWORD(v93.z);
        FindClearSpaceForUnit(UnitByName, v93, 1);
        v21 = CDOTABaseAbility::GetCaster(this);
        v22 = CBaseEntity::GetAbsAngles(v21);
        CBaseEntity::SetAbsAngles(UnitByName, v22);
        KeyValues::KeyValues(&kv2, "modifier_spirit_bear_attack_damage");
        v23 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(UnitByName, v23, this, "modifier_spirit_bear_attack_damage", &kv2, 0);
        v24 = CDOTABaseAbility::GetCaster(this);
        v25 = CDOTABaseAbility::CreateAbilityParticleEffect(
                this,
                "particles/units/heroes/hero_lone_druid/lone_druid_bear_spawn.vpcf",
                2,
                v24,
                0);
        v26 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v26, v25, 0, UnitByName, 1, 0, vec3_invalid, 1);
        v27 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v27, v25);
        if ( this->m_iLevel.m_Value > 1 )
        {
          v28 = CDOTA_BaseNPC::GetAbilityByIndex(UnitByName, 0);
          if ( v28 != 0 )
            CDOTABaseAbility::UpgradeAbility(v28, 0);
          if ( this->m_iLevel.m_Value > 2 )
          {
            v29 = CDOTA_BaseNPC::GetAbilityByIndex(UnitByName, 1);
            if ( v29 != 0 )
              CDOTABaseAbility::UpgradeAbility(v29, 0);
            if ( this->m_iLevel.m_Value > 3 )
            {
              v30 = CDOTA_BaseNPC::GetAbilityByIndex(UnitByName, 3);
              if ( v30 != 0 )
                CDOTABaseAbility::UpgradeAbility(v30, 0);
            }
          }
        }
        v31 = CDOTABaseAbility::GetCaster(this);
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v31, "lone_druid_savage_roar", 0);
        v33 = CDOTA_BaseNPC::FindAbilityByName(UnitByName, "lone_druid_savage_roar_bear", 0);
        v34 = v33;
        if ( v33 != 0 && AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > v33->m_iLevel.m_Value )
        {
          CDOTABaseAbility::SetHidden(v33, 0);
          while ( AbilityByName->m_iLevel.m_Value > v34->m_iLevel.m_Value )
            CDOTABaseAbility::UpgradeAbility(v34, 0);
        }
        KeyValues::~KeyValues(&kv2);
      }
    }
  }
}


// CDOTA_Modifier_Spirit_Bear_Attack_Damage::~CDOTA_Modifier_Spirit_Bear_Attack_Damage  (line 1003, @0x0000000002b996c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Spirit_Bear_Attack_Damage::~CDOTA_Modifier_Spirit_Bear_Attack_Damage(
        CDOTA_Modifier_Spirit_Bear_Attack_Damage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4521750;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Spirit_Bear_Attack_Damage::~CDOTA_Modifier_Spirit_Bear_Attack_Damage  (line 1003, @0x0000000002b996e0, libserver.so)  // inlines: ~CDOTA_Modifier_Spirit_Bear_Attack_Damage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Spirit_Bear_Attack_Damage::~CDOTA_Modifier_Spirit_Bear_Attack_Damage(
        CDOTA_Modifier_Spirit_Bear_Attack_Damage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4521750;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Spirit_Bear_Attack_Damage::IsPermanent  (line 1008, @0x0000000002b93300, libserver.so)
bool __fastcall CDOTA_Modifier_Spirit_Bear_Attack_Damage::IsPermanent(
        CDOTA_Modifier_Spirit_Bear_Attack_Damage *const this)
{
  return 1;
}


// CDOTA_Modifier_Spirit_Bear_Attack_Damage::IsHidden  (line 1009, @0x0000000002b93310, libserver.so)
bool __fastcall CDOTA_Modifier_Spirit_Bear_Attack_Damage::IsHidden(
        CDOTA_Modifier_Spirit_Bear_Attack_Damage *const this)
{
  return 1;
}


// CDOTA_Modifier_Spirit_Bear_Attack_Damage::DeclareFunctions  (line 1017, @0x0000000002b36340, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Spirit_Bear_Attack_Damage::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Spirit_Bear_Attack_Damage::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Spirit_Bear_Attack_Damage::DeclareFunctions(
        CDOTA_Modifier_Spirit_Bear_Attack_Damage *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Spirit_Bear_Attack_Damage::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Spirit_Bear_Attack_Damage::GetModifierPhysicalArmorBonus;
}


// CDOTA_Modifier_Spirit_Bear_Attack_Damage::GetModifierPreAttack_BonusDamage  (line 1023, @0x0000000002b761e0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "special_bonus_unique_lone_druid_1"
ModifierVariant_t __fastcall CDOTA_Modifier_Spirit_Bear_Attack_Damage::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Spirit_Bear_Attack_Damage *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v4; // xmm0
  ModifierVariant_t result; // 0:rax.16

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_lone_druid_1", 0);
  if ( AbilityByName == 0 || AbilityByName->m_iLevel.m_Value <= 0 )
    return 1uLL;
  *v4.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "value", 1, 1);
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Spirit_Bear_Attack_Damage::GetModifierPhysicalArmorBonus  (line 1034, @0x0000000002b76250, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "special_bonus_unique_lone_druid_2"
ModifierVariant_t __fastcall CDOTA_Modifier_Spirit_Bear_Attack_Damage::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Spirit_Bear_Attack_Damage *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v4; // xmm0
  ModifierVariant_t result; // 0:rax.16

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_lone_druid_2", 0);
  if ( AbilityByName == 0 || AbilityByName->m_iLevel.m_Value <= 0 )
    return 1uLL;
  *v4.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "value", 1, 1);
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Ability_LoneDruid_SpiritBear::OnUpgrade  (line 1048, @0x0000000002b5f280, libserver.so)  // inlines: CEntityHandle, Get, GetBear, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetHealthPercent, GetInstance, GetIntrinsicModifiers, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::OnUpgrade, __stack_chk_fail, CBaseEntity::GetAbsOrigin, CBaseEntity::GetHealth, CDOTA_BaseNPC::ForceKill, V_snprintf, CDOTABaseAbility::GetCaster, DOTA_CreateUnitByName, CDOTA_BaseNPC::SetControllableByPlayer, CDOTA_Ability_LoneDruid_SpiritBear::SetBear, CDOTA_BaseNPC::ModifyHealth, FindClearSpaceForUnit (26 total)
// strings: "npc_dota_lone_druid_bear%d", "particles/units/heroes/hero_lone_druid/lone_druid_bear_spawn.vpcf", "modifier_spirit_bear_attack_damage", "lone_druid_savage_roar", "lone_druid_savage_roar_bear", "modifier_lone_druid_spirit_bear_attack_check"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear::OnUpgrade(CDOTA_Ability_LoneDruid_SpiritBear *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  __int64 v6; // r13
  __int64 v7; // r15
  int v8; // eax
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *UnitByName; // r12
  CDOTA_BaseNPC *v13; // rax
  int v14; // eax
  unsigned __int16 v15; // dx
  int v16; // esi
  int v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *v20; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_BaseNPC *v22; // rax
  int AbilityParticleEffect; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTABaseAbility *v27; // rax
  CDOTABaseAbility *v28; // rax
  CDOTABaseAbility *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  CDOTABaseAbility *AbilityByName; // r13
  CDOTABaseAbility *v32; // rax
  CDOTABaseAbility *v33; // r12
  CDOTA_BaseNPC *v34; // rdi
  CDOTABaseAbility *AbilityByIndex; // rax
  int iTeamNumber; // [rsp+14h] [rbp-18Ch]
  CDOTA_BaseNPC *pOwner; // [rsp+18h] [rbp-188h]
  CDOTABaseAbility *pOwnera; // [rsp+18h] [rbp-188h]
  Vector vSpawnPoint; // [rsp+30h] [rbp-170h]
  KeyValues kv2; // [rsp+40h] [rbp-160h] BYREF
  char szUnitName[264]; // [rsp+60h] [rbp-140h] BYREF
  unsigned __int64 v42; // [rsp+168h] [rbp-38h]

  this->m_bLevelChanged = 1;
  v42 = __readfsqword(0x28u);
  m_Index = this->m_hBear.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBear.m_Value.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hBear.m_Value.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 408))(v4->m_pInstance) != 0 )
        {
          v6 = 1;
          vSpawnPoint = *CBaseEntity::GetAbsOrigin(m_pInstance);
          v7 = 100LL * CBaseEntity::GetHealth(m_pInstance);
          v8 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
          if ( v8 > 0 )
            v6 = v8;
          CDOTA_BaseNPC::ForceKill(m_pInstance, 1);
          V_snprintf(szUnitName, 260, "npc_dota_lone_druid_bear%d", this->m_iLevel.m_Value);
          iTeamNumber = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
          pOwner = CDOTABaseAbility::GetCaster(this);
          Caster = CDOTABaseAbility::GetCaster(this);
          v10 = CDOTABaseAbility::GetCaster(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
          UnitByName = DOTA_CreateUnitByName(szUnitName, AbsOrigin, 0, Caster, pOwner, iTeamNumber);
          if ( UnitByName != 0 )
          {
            this->m_bLevelChanged = 0;
            v13 = CDOTABaseAbility::GetCaster(this);
            v14 = (*(v13->_vptr_IHandleEntity + 414))(v13);
            CDOTA_BaseNPC::SetControllableByPlayer(UnitByName, v14, 0);
            CDOTA_Ability_LoneDruid_SpiritBear::SetBear(this, UnitByName);
            if ( UnitByName->m_hOwnerEntity.m_Value.m_Index == -1 )
            {
              v15 = 0x7FFF;
              v16 = 0x7FFF;
            }
            else
            {
              v15 = UnitByName->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
              v16 = v15;
            }
            v17 = (UnitByName->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v15 & 0x7FFF;
            if ( (v17 + 2) > 1 )
            {
              v18 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v16 >> 9];
              if ( v18 != 0 )
              {
                v19 = &v18[v16 & 0x1FF];
                if ( v19 != 0 && v17 == v19->m_EHandle.m_Index )
                {
                  v34 = v19->m_pInstance;
                  if ( v19->m_pInstance != 0 && v34->m_bIsDOTANPC )
                  {
                    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v34, 0);
                    if ( AbilityByIndex != 0 )
                    {
                      pOwnera = AbilityByIndex;
                      KeyValues::KeyValues(&kv2, "modifier_lone_druid_spirit_bear_attack_check");
                      CDOTA_BaseNPC::AddNewModifier(
                        UnitByName,
                        UnitByName,
                        pOwnera,
                        "modifier_lone_druid_spirit_bear_attack_check",
                        &kv2,
                        0);
                      KeyValues::~KeyValues(&kv2);
                    }
                  }
                }
              }
            }
            CDOTA_BaseNPC::ModifyHealth(UnitByName, (((v7 / v6) * UnitByName->m_flBaseMaxHealth) / 100.0), 0, 0, 0);
            FindClearSpaceForUnit(UnitByName, vSpawnPoint, 1);
            v20 = CDOTABaseAbility::GetCaster(this);
            AbsAngles = CBaseEntity::GetAbsAngles(v20);
            CBaseEntity::SetAbsAngles(UnitByName, AbsAngles);
            v22 = CDOTABaseAbility::GetCaster(this);
            AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                      this,
                                      "particles/units/heroes/hero_lone_druid/lone_druid_bear_spawn.vpcf",
                                      2,
                                      v22,
                                      0);
            ParticleManager = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(
              ParticleManager,
              AbilityParticleEffect,
              0,
              UnitByName,
              1,
              0,
              vec3_invalid,
              1);
            v25 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v25, AbilityParticleEffect);
            KeyValues::KeyValues(&kv2, "modifier_spirit_bear_attack_damage");
            v26 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(UnitByName, v26, this, "modifier_spirit_bear_attack_damage", &kv2, 0);
            if ( this->m_iLevel.m_Value > 1 )
            {
              v27 = CDOTA_BaseNPC::GetAbilityByIndex(UnitByName, 0);
              if ( v27 != 0 )
                CDOTABaseAbility::UpgradeAbility(v27, 0);
              if ( this->m_iLevel.m_Value > 2 )
              {
                v28 = CDOTA_BaseNPC::GetAbilityByIndex(UnitByName, 1);
                if ( v28 != 0 )
                  CDOTABaseAbility::UpgradeAbility(v28, 0);
                if ( this->m_iLevel.m_Value > 3 )
                {
                  v29 = CDOTA_BaseNPC::GetAbilityByIndex(UnitByName, 3);
                  if ( v29 != 0 )
                    CDOTABaseAbility::UpgradeAbility(v29, 0);
                }
              }
            }
            v30 = CDOTABaseAbility::GetCaster(this);
            AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v30, "lone_druid_savage_roar", 0);
            v32 = CDOTA_BaseNPC::FindAbilityByName(UnitByName, "lone_druid_savage_roar_bear", 0);
            v33 = v32;
            if ( v32 != 0 && AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > v32->m_iLevel.m_Value )
            {
              CDOTABaseAbility::SetHidden(v32, 0);
              while ( AbilityByName->m_iLevel.m_Value > v33->m_iLevel.m_Value )
                CDOTABaseAbility::UpgradeAbility(v33, 0);
            }
            KeyValues::~KeyValues(&kv2);
          }
        }
      }
    }
  }
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_LoneDruid_SpiritBear::OnUnStolen  (line 1144, @0x0000000002b43eb0, libserver.so)  // inlines: Get, GetBear, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::OnUnStolen, CDOTA_BaseNPC::ForceKill
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear::OnUnStolen(CDOTA_Ability_LoneDruid_SpiritBear *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  CDOTABaseAbility::OnUnStolen(this);
  m_Index = this->m_hBear.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBear.m_Value.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hBear.m_Value.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
        CDOTA_BaseNPC::ForceKill(v4->m_pInstance, 0);
    }
  }
}


// CDOTA_Unit_Hero_LoneDruid::Event_Killed  (line 1160, @0x0000000002b48a30, libserver.so)  // inlines: Get, GetBear, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC_Hero::Event_Killed, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::HasScepter, CDOTA_BaseNPC::ForceKill
// strings: "lone_druid_spirit_bear"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Unit_Hero_LoneDruid::Event_Killed(
        CDOTA_Unit_Hero_LoneDruid *const this,
        const CTakeDamageInfo *const info)
{
  CDOTABaseAbility *AbilityByName; // rax
  int vptr_IHandleEntity_high; // edx
  unsigned __int16 v5; // cx
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  CDOTA_BaseNPC *m_pInstance; // r12

  CDOTA_BaseNPC_Hero::Event_Killed(this, info);
  if ( (*(this->_vptr_IHandleEntity + 438))(this) == 0 )
  {
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "lone_druid_spirit_bear", 0);
    if ( AbilityByName != 0 )
    {
      vptr_IHandleEntity_high = HIDWORD(AbilityByName[1]._vptr_IHandleEntity);
      if ( (vptr_IHandleEntity_high + 2) > 1 )
      {
        v5 = WORD2(AbilityByName[1]._vptr_IHandleEntity);
        v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
        if ( v6 != 0 )
        {
          v7 = &v6[v5 & 0x1FF];
          if ( v7 != 0 && vptr_IHandleEntity_high == v7->m_EHandle.m_Index )
          {
            m_pInstance = v7->m_pInstance;
            if ( v7->m_pInstance != 0 && !CDOTA_BaseNPC::HasScepter(this) )
              CDOTA_BaseNPC::ForceKill(m_pInstance, 0);
          }
        }
      }
    }
  }
}


// CDOTA_Unit_Hero_LoneDruid::GetAdditionalOwnedUnits  (line 1182, @0x0000000002b88c00, libserver.so)  // inlines: AddToTail, CopyConstruct<CDOTA_BaseNPC*>, Element, Get, GetBear, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_BaseNPC::FindAbilityByName, CUtlMemory<CDOTA_BaseNPC*, int>::Grow
// strings: "lone_druid_spirit_bear"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Unit_Hero_LoneDruid::GetAdditionalOwnedUnits(
        CDOTA_Unit_Hero_LoneDruid *const this,
        CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > *pVecOwnedUnits)
{
  CDOTABaseAbility *AbilityByName; // rax
  int vptr_IHandleEntity_high; // edx
  unsigned __int16 v5; // cx
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  CDOTA_BaseNPC *m_pInstance; // r13
  __int64 m_Size; // r12
  CDOTA_BaseNPC **v10; // rax

  if ( pVecOwnedUnits != 0 )
  {
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "lone_druid_spirit_bear", 0);
    if ( AbilityByName != 0 )
    {
      vptr_IHandleEntity_high = HIDWORD(AbilityByName[1]._vptr_IHandleEntity);
      if ( (vptr_IHandleEntity_high + 2) > 1 )
      {
        v5 = WORD2(AbilityByName[1]._vptr_IHandleEntity);
        v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
        if ( v6 != 0 )
        {
          v7 = &v6[v5 & 0x1FF];
          if ( v7 != 0 && vptr_IHandleEntity_high == v7->m_EHandle.m_Index )
          {
            m_pInstance = v7->m_pInstance;
            if ( v7->m_pInstance != 0 )
            {
              m_Size = pVecOwnedUnits->m_Size;
              if ( m_Size == pVecOwnedUnits->m_Memory.m_nAllocationCount )
                CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&pVecOwnedUnits->m_Memory, 1);
              ++pVecOwnedUnits->m_Size;
              v10 = &pVecOwnedUnits->m_Memory.m_pMemory[m_Size];
              if ( v10 != 0 )
                *v10 = m_pInstance;
            }
          }
        }
      }
    }
  }
}


// CDOTA_Ability_LoneDruid_SpiritBear_Return::~CDOTA_Ability_LoneDruid_SpiritBear_Return  (line 1204, @0x0000000002ba1f00, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Return::~CDOTA_Ability_LoneDruid_SpiritBear_Return(
        CDOTA_Ability_LoneDruid_SpiritBear_Return *const this)
{
  this->_vptr_IHandleEntity = &off_4521AB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_LoneDruid_SpiritBear_Return::~CDOTA_Ability_LoneDruid_SpiritBear_Return  (line 1204, @0x0000000002ba1f20, libserver.so)  // inlines: ~CDOTA_Ability_LoneDruid_SpiritBear_Return
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Return::~CDOTA_Ability_LoneDruid_SpiritBear_Return(
        CDOTA_Ability_LoneDruid_SpiritBear_Return *const this)
{
  this->_vptr_IHandleEntity = &off_4521AB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_LoneDruid_SpiritBear_Return::Schema_DynamicBinding  (line 1206, @0x0000000002b93320, libserver.so)
// globals: CDOTA_Ability_LoneDruid_SpiritBear_Return::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Return::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_SpiritBear_Return *const this)
{
  return CDOTA_Ability_LoneDruid_SpiritBear_Return::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1206, @0x0000000002b93330, libserver.so)
// globals: CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::DestructInstance  (line 1206, @0x0000000002b93340, libserver.so)  // inlines: Destruct<CDOTA_Ability_LoneDruid_SpiritBear_Return>
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::FreeInstance  (line 1206, @0x0000000002b93360, libserver.so)
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::CanAllocate  (line 1206, @0x0000000002b93380, libserver.so)
bool __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1206, @0x0000000002b93390, libserver.so)
// globals: CDOTA_Ability_LoneDruid_SpiritBear_Return::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_SpiritBear_Return::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::AllocateInstance  (line 1206, @0x0000000002b98b60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::ConstructInstance  (line 1206, @0x0000000002b9dad0, libserver.so)  // inlines: CDOTA_Ability_LoneDruid_SpiritBear_Return, Construct<CDOTA_Ability_LoneDruid_SpiritBear_Return>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4521AB0;
  }
  return p;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1206, @0x0000000002babab0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1206, @0x0000000002babad0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInternal  (line 1206, @0x0000000002bcc890, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "lone_druid_spirit_bear_return", "CDOTA_Ability_LoneDruid_SpiritBear_Return"
// globals: `guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClass, CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClass, __dso_handle, CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClassInfo, CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClassInfo
CEntityClass *__cdecl CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClass);
    CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClass._vptr_CEntityClass = off_4521A30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClass);
    __cxa_atexit(
      CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClass != 0 )
    return &CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClass;
  if ( `guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClassInfo,
      "CDOTA_Ability_LoneDruid_SpiritBear_Return",
      "lone_druid_spirit_bear_return",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClassInfo);
  }
  CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClass.m_pClassInfo = &CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClassInfo;
  CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClass.m_pBaseClassInfo = CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClass = &CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClass;
  CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClassInfo.m_pClass = &CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClass;
  CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_LoneDruid_SpiritBear_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_ReturnClass;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Return::GetIntrinsicModifierName  (line 1211, @0x0000000002b933a0, libserver.so)
// strings: "modifier_lone_druid_spirit_bear_return"
const char *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Return::GetIntrinsicModifierName(
        CDOTA_Ability_LoneDruid_SpiritBear_Return *const this)
{
  return "modifier_lone_druid_spirit_bear_return";
}


// CDOTA_Ability_LoneDruid_SpiritBear_Return::YouForgotToImplementOrDeclareServerClass  (line 1217, @0x0000000002b36380, libserver.so)
int __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Return::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_LoneDruid_SpiritBear_Return *const this)
{
  return 0;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Return::GetServerClass  (line 1217, @0x0000000002b4c6e0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Return::GetServerClass(
        CDOTA_Ability_LoneDruid_SpiritBear_Return *const this)
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


// CDOTA_Ability_LoneDruid_SpiritBear_Return::OnSpellStart  (line 1226, @0x0000000002b8a2f0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CEntityHandle, CHandle, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetEHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GrowMemory, IndexToIdentity, Init, LookupEntity, NormalizeInPlace, Purge, RemoveAll, Reset, Set, VectorAdd, VectorSubtract, entindex, operator+, operator-, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::CreateAbilityParticleEffect, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTABaseAbility::GetCursorPosition, VectorNormalize, DOTA_EmitSoundLocation, CDOTA_BaseNPC::MarkBlinkDaggerTime, RandomFloat, FindClearSpaceForUnit (20 total)
// strings: "particles/units/heroes/hero_lone_druid/lone_druid_bear_blink_start.vpcf", "LoneDruid_SpiritBear.ReturnStart", "particles/units/heroes/hero_lone_druid/lone_druid_bear_blink_end.vpcf", "LoneDruid_SpiritBear.Return"
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Return::OnSpellStart(
        CDOTA_Ability_LoneDruid_SpiritBear_Return *const this)
{
  int AbilityParticleEffect; // r12d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  const Vector *v8; // r12
  vec_t v9; // xmm2_4
  vec_t v10; // xmm1_4
  CDOTA_BaseNPC *v11; // rax
  unsigned __int16 v12; // dx
  int v13; // esi
  const CBaseEntity *m_pInstance; // rdi
  int v15; // eax
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  const Vector *v18; // rax
  float z; // r12d
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v25; // eax
  __int16 v26; // cx
  CDOTA_BaseNPC *v27; // rax
  int v28; // r13d
  CDOTA_ParticleManager *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  vec_t v31; // xmm0_4
  CDOTA_BaseNPC *v32; // rax
  CEntityIndex v33; // eax
  __int64 m_Size; // rbx
  int32 m_Data; // r13d
  int v36; // edx
  CEntityIndex *v37; // rdx
  float x; // [rsp+4h] [rbp-9Ch]
  float y; // [rsp+8h] [rbp-98h]
  float v40; // [rsp+Ch] [rbp-94h]
  Vector vDirection; // [rsp+10h] [rbp-90h] BYREF
  Vector vStartPos; // [rsp+20h] [rbp-80h] BYREF
  Vector vPos; // [rsp+30h] [rbp-70h]
  CUnitOrders stopOrder; // [rsp+40h] [rbp-60h] BYREF

  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                            this,
                            "particles/units/heroes/hero_lone_druid/lone_druid_bear_blink_start.vpcf",
                            2,
                            0,
                            0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbilityParticleEffect, 0, *&AbsOrigin->x, AbsOrigin->z);
  v6 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v6, AbilityParticleEffect);
  v7 = CDOTABaseAbility::GetCaster(this);
  v8 = CBaseEntity::GetAbsOrigin(v7);
  *&stopOrder.m_nIssuerPlayerIndex = CDOTABaseAbility::GetCursorPosition(this);
  v9 = *&stopOrder.m_nIssuerPlayerIndex - v8->x;
  v10 = *&stopOrder.m_nUnits.m_Size - v8->z;
  vDirection.y = *&stopOrder.m_nOrderSequenceNumber - v8->y;
  vDirection.x = v9;
  vDirection.z = v10;
  VectorNormalize(&vDirection);
  v11 = CDOTABaseAbility::GetCaster(this);
  if ( v11->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v12 = 0x7FFF;
    v13 = 0x7FFF;
  }
  else
  {
    v12 = v11->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v13 = v12;
  }
  m_pInstance = 0;
  v15 = (v11->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v12 & 0x7FFF;
  stopOrder.m_nIssuerPlayerIndex = v15;
  if ( (v15 + 2) > 1 )
  {
    v16 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v13 >> 9];
    if ( v16 != 0 )
    {
      v17 = &v16[v13 & 0x1FF];
      if ( v17 != 0 && v15 == v17->m_EHandle.m_Index )
        m_pInstance = v17->m_pInstance;
    }
  }
  v18 = CBaseEntity::GetAbsOrigin(m_pInstance);
  x = v18->x;
  z = v18->z;
  y = v18->y;
  v20 = CDOTABaseAbility::GetCaster(this);
  vStartPos = *CBaseEntity::GetAbsOrigin(v20);
  DOTA_EmitSoundLocation(&vStartPos, "LoneDruid_SpiritBear.ReturnStart", 1);
  v21 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::MarkBlinkDaggerTime(v21);
  v40 = RandomFloat(25.0, 50.0);
  vPos.x = RandomFloat(25.0, 50.0) + x;
  vPos.y = v40 + y;
  vPos.z = z + 0.0;
  v22 = CDOTABaseAbility::GetCaster(this);
  FindClearSpaceForUnit(v22, vPos, 1);
  v23 = CDOTABaseAbility::GetCaster(this);
  stopOrder.m_nIssuerPlayerIndex = -1;
  if ( v23 != 0 )
  {
    m_pEntity = v23->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v25 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v26 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v26 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(stopOrder.m_nIssuerPlayerIndex) = v26 | stopOrder.m_nIssuerPlayerIndex & 0x8000;
      stopOrder.m_nIssuerPlayerIndex = (v25 << 15) | stopOrder.m_nIssuerPlayerIndex & 0x7FFF;
    }
  }
  CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &stopOrder, 0);
  v27 = CDOTABaseAbility::GetCaster(this);
  v28 = CDOTABaseAbility::CreateAbilityParticleEffect(
          this,
          "particles/units/heroes/hero_lone_druid/lone_druid_bear_blink_end.vpcf",
          1,
          v27,
          0);
  v29 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v29, v28);
  v30 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(8, "LoneDruid_SpiritBear.Return", v30);
  stopOrder.m_nUnits.m_Size = 0;
  memset(&stopOrder.m_nUnits.m_Memory, 0, 28);
  stopOrder.m_nOrderSequenceNumber = 0;
  stopOrder.m_vPosition.x = vec3_origin.x;
  v31 = vec3_origin.y;
  stopOrder.m_nIssuerPlayerIndex = -1;
  stopOrder.m_vPosition.y = v31;
  stopOrder.m_vPosition.z = vec3_origin.z;
  stopOrder.m_bQueue = 0;
  v32 = CDOTABaseAbility::GetCaster(this);
  v33.m_Data = CEntityInstance::GetEntityIndex(v32).m_Data;
  m_Size = stopOrder.m_nUnits.m_Size;
  m_Data = v33.m_Data;
  v36 = stopOrder.m_nUnits.m_Size;
  if ( stopOrder.m_nUnits.m_Size == stopOrder.m_nUnits.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CEntityIndex,int>::Grow(&stopOrder.m_nUnits.m_Memory, 1);
    v36 = stopOrder.m_nUnits.m_Size;
  }
  stopOrder.m_nUnits.m_Size = v36 + 1;
  v37 = &stopOrder.m_nUnits.m_Memory.m_pMemory[m_Size];
  if ( v37 != 0 )
    v37->m_Data = m_Data;
  stopOrder.m_nOrderType = 21;
  DOTA_ExecuteOrders(&stopOrder, 0, 0, 0);
  stopOrder.m_nUnits.m_Size = 0;
  if ( (stopOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&stopOrder.m_nUnits.m_Memory);
    if ( (stopOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&stopOrder.m_nUnits.m_Memory);
  }
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Return::~CDOTA_Modifier_LoneDruid_SpiritBear_Return  (line 1266, @0x0000000002b99670, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Return::~CDOTA_Modifier_LoneDruid_SpiritBear_Return(
        CDOTA_Modifier_LoneDruid_SpiritBear_Return *const this)
{
  this->_vptr_CDOTA_Buff = &off_4522570;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Return::~CDOTA_Modifier_LoneDruid_SpiritBear_Return  (line 1266, @0x0000000002b99690, libserver.so)  // inlines: ~CDOTA_Modifier_LoneDruid_SpiritBear_Return
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Return::~CDOTA_Modifier_LoneDruid_SpiritBear_Return(
        CDOTA_Modifier_LoneDruid_SpiritBear_Return *const this)
{
  this->_vptr_CDOTA_Buff = &off_4522570;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Return::IsHidden  (line 1272, @0x0000000002b933b0, libserver.so)
bool __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Return::IsHidden(
        CDOTA_Modifier_LoneDruid_SpiritBear_Return *const this)
{
  return 1;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Return::OnCreated  (line 1285, @0x0000000002b6c990, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "return_damage_cooldown"
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Return::OnCreated(
        CDOTA_Modifier_LoneDruid_SpiritBear_Return *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->return_damage_cooldown = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                     Ability,
                                     "return_damage_cooldown",
                                     -1,
                                     0);
  else
    this->return_damage_cooldown = 0;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Return::DeclareFunctions  (line 1292, @0x0000000002b36390, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_LoneDruid_SpiritBear_Return::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Return::DeclareFunctions(
        CDOTA_Modifier_LoneDruid_SpiritBear_Return *const this)
{
  this->m_Functions[134].__pfn = CDOTA_Modifier_LoneDruid_SpiritBear_Return::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Return::OnTakeDamage  (line 1299, @0x0000000002b4b620, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsOwnedByAnyPlayer, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetCooldownTimeRemaining
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Return::OnTakeDamage(
        CDOTA_Modifier_LoneDruid_SpiritBear_Return *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v12; // r13
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v14; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hunit.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 > 1 )
  {
    m_Index_low = LOWORD(params->hattacker.m_Index);
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[m_Index_low & 0x1FF];
      if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
      {
        v12 = v10->m_pInstance;
        if ( v10->m_pInstance != 0
          && BYTE3(v12[7]._vptr_IHandleEntity) != 0
          && m_pInstance != 0
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && CDOTA_Buff::GetParent(this) != v12
          && ((v12[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
           || v12[61].m_hPrivateScope.m_hScope != 0
           || (*(v12->_vptr_IHandleEntity + 405))(v12) != 0) )
        {
          Ability = CDOTA_Buff::GetAbility(this);
          if ( this->return_damage_cooldown > CDOTABaseAbility::GetCooldownTimeRemaining(Ability) )
          {
            v14 = CDOTA_Buff::GetAbility(this);
            (*(v14->_vptr_IHandleEntity + 241))(v14, this->return_damage_cooldown);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Entangle::~CDOTA_Ability_LoneDruid_SpiritBear_Entangle  (line 1330, @0x0000000002ba1f50, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Entangle::~CDOTA_Ability_LoneDruid_SpiritBear_Entangle(
        CDOTA_Ability_LoneDruid_SpiritBear_Entangle *const this)
{
  this->_vptr_IHandleEntity = &off_45228D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_LoneDruid_SpiritBear_Entangle::~CDOTA_Ability_LoneDruid_SpiritBear_Entangle  (line 1330, @0x0000000002ba1f70, libserver.so)  // inlines: ~CDOTA_Ability_LoneDruid_SpiritBear_Entangle
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Entangle::~CDOTA_Ability_LoneDruid_SpiritBear_Entangle(
        CDOTA_Ability_LoneDruid_SpiritBear_Entangle *const this)
{
  this->_vptr_IHandleEntity = &off_45228D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_LoneDruid_SpiritBear_Entangle::Schema_DynamicBinding  (line 1332, @0x0000000002b933c0, libserver.so)
// globals: CDOTA_Ability_LoneDruid_SpiritBear_Entangle::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Entangle::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_SpiritBear_Entangle *const this)
{
  return CDOTA_Ability_LoneDruid_SpiritBear_Entangle::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1332, @0x0000000002b933d0, libserver.so)
// globals: CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::DestructInstance  (line 1332, @0x0000000002b933e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_LoneDruid_SpiritBear_Entangle>
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::FreeInstance  (line 1332, @0x0000000002b93400, libserver.so)
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::CanAllocate  (line 1332, @0x0000000002b93420, libserver.so)
bool __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1332, @0x0000000002b93430, libserver.so)
// globals: CDOTA_Ability_LoneDruid_SpiritBear_Entangle::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_SpiritBear_Entangle::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::AllocateInstance  (line 1332, @0x0000000002b98ba0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::ConstructInstance  (line 1332, @0x0000000002b9db00, libserver.so)  // inlines: CDOTA_Ability_LoneDruid_SpiritBear_Entangle, Construct<CDOTA_Ability_LoneDruid_SpiritBear_Entangle>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45228D0;
  }
  return p;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1332, @0x0000000002babb00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1332, @0x0000000002babb20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInternal  (line 1332, @0x0000000002bcc9e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "lone_druid_spirit_bear_entangle", "CDOTA_Ability_LoneDruid_SpiritBear_Entangle"
// globals: `guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClass, CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClass, __dso_handle, CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClassInfo, CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClassInfo
CEntityClass *__cdecl CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClass);
    CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClass._vptr_CEntityClass = off_4522850;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClass);
    __cxa_atexit(
      CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClass != 0 )
    return &CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClass;
  if ( `guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClassInfo,
      "CDOTA_Ability_LoneDruid_SpiritBear_Entangle",
      "lone_druid_spirit_bear_entangle",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClassInfo);
  }
  CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClass.m_pClassInfo = &CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClassInfo;
  CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClass.m_pBaseClassInfo = CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClass = &CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClass;
  CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClassInfo.m_pClass = &CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClass;
  CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_EntangleClass;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetIntrinsicModifierName  (line 1335, @0x0000000002b93440, libserver.so)
// strings: "modifier_lone_druid_spirit_bear_entangle"
const char *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetIntrinsicModifierName(
        CDOTA_Ability_LoneDruid_SpiritBear_Entangle *const this)
{
  return "modifier_lone_druid_spirit_bear_entangle";
}


// CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetSlowDuration  (line 1344, @0x0000000002b762c0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Entangle::GetSlowDuration(
        CDOTA_Ability_LoneDruid_SpiritBear_Entangle *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "hero_duration", -1, 1);
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Entangle::~CDOTA_Modifier_LoneDruid_SpiritBear_Entangle  (line 1353, @0x0000000002b99620, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Entangle::~CDOTA_Modifier_LoneDruid_SpiritBear_Entangle(
        CDOTA_Modifier_LoneDruid_SpiritBear_Entangle *const this)
{
  this->_vptr_CDOTA_Buff = &off_4523390;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Entangle::~CDOTA_Modifier_LoneDruid_SpiritBear_Entangle  (line 1353, @0x0000000002b99640, libserver.so)  // inlines: ~CDOTA_Modifier_LoneDruid_SpiritBear_Entangle
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Entangle::~CDOTA_Modifier_LoneDruid_SpiritBear_Entangle(
        CDOTA_Modifier_LoneDruid_SpiritBear_Entangle *const this)
{
  this->_vptr_CDOTA_Buff = &off_4523390;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Entangle::IsHidden  (line 1358, @0x0000000002b93450, libserver.so)
bool __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Entangle::IsHidden(
        CDOTA_Modifier_LoneDruid_SpiritBear_Entangle *const this)
{
  return 1;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Entangle::OnCreated  (line 1379, @0x0000000002b7e2d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "entangle_chance"
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Entangle::OnCreated(
        CDOTA_Modifier_LoneDruid_SpiritBear_Entangle *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->entangle_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "entangle_chance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->hero_duration = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->entangle_chance = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->hero_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "hero_duration", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->creep_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "creep_duration", -1, 0);
    return;
  }
LABEL_7:
  this->creep_duration = 0.0;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Entangle::OnRefresh  (line 1388, @0x0000000002b7e3a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "entangle_chance"
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Entangle::OnRefresh(
        CDOTA_Modifier_LoneDruid_SpiritBear_Entangle *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->entangle_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "entangle_chance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->hero_duration = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->entangle_chance = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->hero_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "hero_duration", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->creep_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "creep_duration", -1, 0);
    return;
  }
LABEL_7:
  this->creep_duration = 0.0;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Entangle::DeclareFunctions  (line 1397, @0x0000000002b363b0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Entangle::DeclareFunctions(
        CDOTA_Modifier_LoneDruid_SpiritBear_Entangle *const this)
{
  this->m_Functions[121].__pfn = (&stru_10 + 697);
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Entangle::OnAttackLanded  (line 1404, @0x0000000002b762e0, libserver.so)  // inlines: Attacker, CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsConsideredHero, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetAbility, RollPseudoRandomPercentage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::Interrupt, KeyValues::~KeyValues, CDOTA_Buff::GetCaster, __stack_chk_fail (15 total)
// strings: "modifier_lone_druid_spirit_bear_entangle_effect", "LoneDruid_SpiritBear.Entangle", "special_bonus_unique_lone_druid_3"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Entangle::OnAttackLanded(
        CDOTA_Modifier_LoneDruid_SpiritBear_Entangle *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *v12; // r14
  uint32 v14; // eax
  CDOTA_BaseNPC *v15; // r15
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  uint32 m_iUnitType; // r15d
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  float v21; // xmm1_4
  CDOTABaseAbility *v22; // rax
  CDOTABaseAbility *v23; // r14
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *Caster; // rax
  unsigned __int16 v26; // cx
  int v27; // esi
  int v28; // eax
  CEntityIdentity *v29; // rdx
  CEntityIdentity *v30; // rdx
  CDOTA_BaseNPC *v31; // rdi
  CDOTABaseAbility *AbilityByName; // rax
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(params->htarget.m_Index),
        (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v7 = &v6[m_Index_low & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v9 = params->hattacker.m_Index;
  if ( v9 + 2 <= 1
    || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v11 = &v10[params->hattacker.m_Index & 0x1FF]) == 0
    || v9 != v11->m_EHandle.m_Index
    || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
    || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
  {
    v12 = 0;
  }
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 && v12 != 0 && m_pInstance != 0 )
  {
    v14 = params->hattacker.m_Index;
    v15 = 0;
    if ( v14 + 2 > 1 )
    {
      v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v16 != 0 )
      {
        v17 = &v16[params->hattacker.m_Index & 0x1FF];
        if ( v17 != 0 && v14 == v17->m_EHandle.m_Index )
          v15 = v17->m_pInstance;
      }
    }
    if ( CDOTA_Buff::GetParent(this) == v15 )
    {
      m_iUnitType = m_pInstance->m_iUnitType;
      if ( (m_iUnitType & 0x810) == 0
        && HIBYTE(CEntityHandle::operator CEntityInstance *(&params->hattacker)[7].m_CScriptComponent) != m_pInstance->m_iTeamNum.m_Value
        && (BYTE3(v12[58]._vptr_IHandleEntity) & 0x10) == 0
        && (m_iUnitType & 0x193) != 0
        && !m_pInstance->m_bIsAncient.m_Value
        && (m_iUnitType & 2) == 0
        && LOBYTE(v12[71].m_pEntity) == 0 )
      {
        Ability = CDOTA_Buff::GetAbility(this);
        if ( (*(Ability->_vptr_IHandleEntity + 245))(Ability) != 0 )
        {
          Parent = CDOTA_Buff::GetParent(this);
          if ( RollPseudoRandomPercentage(
                 this->entangle_chance,
                 DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_LONE_DRUID_ENTANGLE,
                 Parent) )
          {
            KeyValues::KeyValues(&kv, "modifier_lone_druid_spirit_bear_entangle_effect");
            if ( (m_pInstance->m_iUnitType & 3) != 0 || m_pInstance->m_bIsAncient.m_Value )
            {
              Caster = CDOTA_Buff::GetCaster(this);
              if ( Caster->m_hOwnerEntity.m_Value.m_Index == -1 )
              {
                v26 = 0x7FFF;
                v27 = 0x7FFF;
              }
              else
              {
                v26 = Caster->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
                v27 = v26;
              }
              v28 = (Caster->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v26 & 0x7FFF;
              if ( (v28 + 2) > 1 )
              {
                v29 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v27 >> 9];
                if ( v29 != 0 )
                {
                  v30 = &v29[v27 & 0x1FF];
                  if ( v30 != 0 && v28 == v30->m_EHandle.m_Index )
                  {
                    v31 = v30->m_pInstance;
                    if ( v30->m_pInstance != 0 && v31->m_bIsDOTANPC )
                    {
                      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v31, "special_bonus_unique_lone_druid_3", 0);
                      if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
                        CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "value", 1, 1);
                    }
                  }
                }
              }
            }
            KeyValues::SetFloat(&kv, "duration", v21);
            v22 = CDOTA_Buff::GetAbility(this);
            (*(v22->_vptr_IHandleEntity + 241))(v22, -1.0);
            v23 = CDOTA_Buff::GetAbility(this);
            v24 = CDOTA_Buff::GetParent(this);
            CDOTA_BaseNPC::AddNewModifier(
              m_pInstance,
              v24,
              v23,
              "modifier_lone_druid_spirit_bear_entangle_effect",
              &kv,
              0);
            CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "LoneDruid_SpiritBear.Entangle", 0.0, 0, 0);
            CDOTA_BaseNPC::Interrupt(m_pInstance);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect::~CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect  (line 1455, @0x0000000002b995d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect::~CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect(
        CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_45236B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect::~CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect  (line 1455, @0x0000000002b995f0, libserver.so)  // inlines: ~CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect::~CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect(
        CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_45236B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect::GetPriority  (line 1464, @0x0000000002b93460, libserver.so)
int __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect::GetPriority(
        CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect *const this)
{
  return 2;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect::StatusEffectPriority  (line 1466, @0x0000000002b93470, libserver.so)
int __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect::StatusEffectPriority(
        CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect *const this)
{
  return 10;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect::OnCreated  (line 1478, @0x0000000002b44920, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_lone_druid/lone_druid_bear_entangle.vpcf", "attach_hitloc", "attach_attack1", "particles/units/heroes/hero_lone_druid/lone_druid_bear_entangle_body.vpcf"
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect::OnCreated(
        CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  CDOTABaseAbility *v5; // rax
  int v6; // r14d
  CDOTABaseAbility *v7; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v10; // rax
  unsigned __int16 v11; // dx
  int v12; // esi
  CBaseEntity *m_pInstance; // r13
  int v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC *v17; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_BaseNPC *v20; // r14
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v24; // r15
  CDOTA_ParticleManager *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  const Vector *v27; // r14
  CDOTA_BaseNPC *v28; // r15
  CDOTA_ParticleManager *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  unsigned __int16 v31; // dx
  int v32; // esi
  int v33; // eax
  CBaseEntity *v34; // r12
  CEntityIdentity *v35; // rdx
  CEntityIdentity *v36; // rdx
  CDOTA_BaseNPC *v37; // r13
  CDOTA_ParticleManager *v38; // rax
  int v39; // r12d
  CDOTA_BaseNPC *v40; // rax
  const Vector *v41; // r13
  CDOTA_BaseNPC *v42; // r14
  CDOTA_ParticleManager *v43; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  this->m_iEntangleDamage = (*(Ability->_vptr_IHandleEntity + 247))(Ability);
  CDOTA_Buff::StartIntervalThink(this, 1.01, v4);
  v5 = CDOTA_Buff::GetAbility(this);
  v6 = (*(v5->_vptr_IHandleEntity + 247))(v5);
  v7 = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, v7, v6, 1, 8);
  v10 = CDOTA_Buff::GetCaster(this);
  if ( v10->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v11 = 0x7FFF;
    v12 = 0x7FFF;
  }
  else
  {
    v11 = v10->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v12 = v11;
  }
  m_pInstance = 0;
  v14 = (v10->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v11 & 0x7FFF;
  if ( (v14 + 2) > 1 )
  {
    v15 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9];
    if ( v15 != 0 )
    {
      v16 = &v15[v12 & 0x1FF];
      if ( v16 != 0 && v14 == v16->m_EHandle.m_Index )
        m_pInstance = v16->m_pInstance;
    }
  }
  v17 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_lone_druid/lone_druid_bear_entangle.vpcf",
               2,
               v17,
               0,
               m_pInstance);
  v20 = CDOTA_Buff::GetParent(this);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v21, Particle, 0, v20, 1, 0, vec3_invalid, 1);
  v22 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v22);
  v24 = CDOTA_Buff::GetParent(this);
  v25 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v25, Particle, 1, v24, 5, "attach_hitloc", *AbsOrigin, 1);
  v26 = CDOTA_Buff::GetParent(this);
  v27 = CBaseEntity::GetAbsOrigin(v26);
  v28 = CDOTA_Buff::GetParent(this);
  v29 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v29, Particle, 2, v28, 5, "attach_attack1", *v27, 1);
  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
  v30 = CDOTA_Buff::GetCaster(this);
  if ( v30->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v31 = 0x7FFF;
    v32 = 0x7FFF;
  }
  else
  {
    v31 = v30->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v32 = v31;
  }
  v33 = (v30->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v31 & 0x7FFF;
  v34 = 0;
  if ( (v33 + 2) > 1 )
  {
    v35 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v32 >> 9];
    if ( v35 != 0 )
    {
      v36 = &v35[v32 & 0x1FF];
      if ( v36 != 0 && v33 == v36->m_EHandle.m_Index )
        v34 = v36->m_pInstance;
    }
  }
  v37 = CDOTA_Buff::GetParent(this);
  v38 = GetParticleManager();
  v39 = CDOTA_ParticleManager::CreateParticle(
          v38,
          "particles/units/heroes/hero_lone_druid/lone_druid_bear_entangle_body.vpcf",
          2,
          v37,
          0,
          v34);
  v40 = CDOTA_Buff::GetParent(this);
  v41 = CBaseEntity::GetAbsOrigin(v40);
  v42 = CDOTA_Buff::GetParent(this);
  v43 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v43, v39, 0, v42, 5, "attach_hitloc", *v41, 1);
  CDOTA_Buff::AddParticle(this, v39, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect::OnIntervalThink  (line 1505, @0x0000000002b37ad0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect::OnIntervalThink(
        CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  float m_iEntangleDamage; // [rsp+Ch] [rbp-24h]

  m_iEntangleDamage = this->m_iEntangleDamage;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, m_iEntangleDamage, 1, 8);
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect::CheckState  (line 1514, @0x0000000002b363d0, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect::CheckState(
        CDOTA_Modifier_LoneDruid_SpiritBear_Entangle_Effect *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rax
  uint64 v3; // rdx

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  LOBYTE(m_nEnabledStateMask) = buffState->m_nEnabledStateMask & 0x7F;
  v3 = buffState->m_nDisabledStateMask & 0xFFFFFFFFFFFFFFFELL;
  LOBYTE(v3) = buffState->m_nDisabledStateMask & 0x7E | 0x80;
  buffState->m_nEnabledStateMask = m_nEnabledStateMask | 1;
  buffState->m_nDisabledStateMask = v3;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Demolish::~CDOTA_Ability_LoneDruid_SpiritBear_Demolish  (line 1530, @0x0000000002ba1fa0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Demolish::~CDOTA_Ability_LoneDruid_SpiritBear_Demolish(
        CDOTA_Ability_LoneDruid_SpiritBear_Demolish *const this)
{
  this->_vptr_IHandleEntity = &off_4523A10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_LoneDruid_SpiritBear_Demolish::~CDOTA_Ability_LoneDruid_SpiritBear_Demolish  (line 1530, @0x0000000002ba1fc0, libserver.so)  // inlines: ~CDOTA_Ability_LoneDruid_SpiritBear_Demolish
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Demolish::~CDOTA_Ability_LoneDruid_SpiritBear_Demolish(
        CDOTA_Ability_LoneDruid_SpiritBear_Demolish *const this)
{
  this->_vptr_IHandleEntity = &off_4523A10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_LoneDruid_SpiritBear_Demolish::Schema_DynamicBinding  (line 1532, @0x0000000002b93480, libserver.so)
// globals: CDOTA_Ability_LoneDruid_SpiritBear_Demolish::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Demolish::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_SpiritBear_Demolish *const this)
{
  return CDOTA_Ability_LoneDruid_SpiritBear_Demolish::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1532, @0x0000000002b93490, libserver.so)
// globals: CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::DestructInstance  (line 1532, @0x0000000002b934a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_LoneDruid_SpiritBear_Demolish>
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::FreeInstance  (line 1532, @0x0000000002b934c0, libserver.so)
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::CanAllocate  (line 1532, @0x0000000002b934e0, libserver.so)
bool __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1532, @0x0000000002b934f0, libserver.so)
// globals: CDOTA_Ability_LoneDruid_SpiritBear_Demolish::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_SpiritBear_Demolish::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::AllocateInstance  (line 1532, @0x0000000002b98be0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::ConstructInstance  (line 1532, @0x0000000002b9db30, libserver.so)  // inlines: CDOTA_Ability_LoneDruid_SpiritBear_Demolish, Construct<CDOTA_Ability_LoneDruid_SpiritBear_Demolish>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4523A10;
  }
  return p;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1532, @0x0000000002babb50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1532, @0x0000000002babb70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInternal  (line 1532, @0x0000000002bccb30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "lone_druid_spirit_bear_demolish", "CDOTA_Ability_LoneDruid_SpiritBear_Demolish"
// globals: `guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClass, CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClass, __dso_handle, CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClassInfo, CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClassInfo
CEntityClass *__cdecl CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClass);
    CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClass._vptr_CEntityClass = off_4523990;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClass);
    __cxa_atexit(
      CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClass != 0 )
    return &CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClass;
  if ( `guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClassInfo,
      "CDOTA_Ability_LoneDruid_SpiritBear_Demolish",
      "lone_druid_spirit_bear_demolish",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClassInfo);
  }
  CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClass.m_pClassInfo = &CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClassInfo;
  CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClass.m_pBaseClassInfo = CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClass = &CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClass;
  CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClassInfo.m_pClass = &CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClass;
  CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SpiritBear_DemolishClass;
}


// CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetIntrinsicModifierName  (line 1535, @0x0000000002b93500, libserver.so)
// strings: "modifier_lone_druid_spirit_bear_demolish"
const char *__fastcall CDOTA_Ability_LoneDruid_SpiritBear_Demolish::GetIntrinsicModifierName(
        CDOTA_Ability_LoneDruid_SpiritBear_Demolish *const this)
{
  return "modifier_lone_druid_spirit_bear_demolish";
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::~CDOTA_Modifier_LoneDruid_SpiritBear_Demolish  (line 1544, @0x0000000002b99580, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::~CDOTA_Modifier_LoneDruid_SpiritBear_Demolish(
        CDOTA_Modifier_LoneDruid_SpiritBear_Demolish *const this)
{
  this->_vptr_CDOTA_Buff = &off_45244D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::~CDOTA_Modifier_LoneDruid_SpiritBear_Demolish  (line 1544, @0x0000000002b995a0, libserver.so)  // inlines: ~CDOTA_Modifier_LoneDruid_SpiritBear_Demolish
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::~CDOTA_Modifier_LoneDruid_SpiritBear_Demolish(
        CDOTA_Modifier_LoneDruid_SpiritBear_Demolish *const this)
{
  this->_vptr_CDOTA_Buff = &off_45244D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::IsHidden  (line 1552, @0x0000000002b93510, libserver.so)
bool __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::IsHidden(
        CDOTA_Modifier_LoneDruid_SpiritBear_Demolish *const this)
{
  return 1;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::OnCreated  (line 1569, @0x0000000002b6d080, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_building_damage", "spell_resistance"
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::OnCreated(
        CDOTA_Modifier_LoneDruid_SpiritBear_Demolish *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_building_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "bonus_building_damage",
                                    -1,
                                    0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->spell_resistance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "spell_resistance", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_building_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->spell_resistance = 0;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::OnRefresh  (line 1577, @0x0000000002b6d3e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_building_damage", "spell_resistance"
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::OnRefresh(
        CDOTA_Modifier_LoneDruid_SpiritBear_Demolish *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_building_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "bonus_building_damage",
                                    -1,
                                    0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->spell_resistance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "spell_resistance", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_building_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->spell_resistance = 0;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::DeclareFunctions  (line 1585, @0x0000000002b36400, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::GetModifierDamageOutgoing_Percentage(CModifierParams const&), CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::GetModifierMagicalResistanceBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::DeclareFunctions(
        CDOTA_Modifier_LoneDruid_SpiritBear_Demolish *const this)
{
  this->m_Functions[28].__pfn = CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::GetModifierDamageOutgoing_Percentage;
  this->m_Functions[28].__delta = 0;
  this->m_Functions[49].__delta = 0;
  this->m_Functions[49].__pfn = CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::GetModifierMagicalResistanceBonus;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::GetModifierDamageOutgoing_Percentage  (line 1594, @0x0000000002b44f80, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::GetModifierDamageOutgoing_Percentage(
        CDOTA_Modifier_LoneDruid_SpiritBear_Demolish *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rbx
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v12; // r13
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
  if ( v7 + 2 > 1
    && (m_Index_low = LOWORD(params->hattacker.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) != 0)
    && (v10 = &v9[m_Index_low & 0x1FF]) != 0
    && v7 == v10->m_EHandle.m_Index
    && (v12 = v10->m_pInstance, v10->m_pInstance != 0)
    && BYTE3(v12[7]._vptr_IHandleEntity) != 0
    && m_pInstance != 0
    && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0
    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0
    && HIBYTE(v12[7].m_CScriptComponent) != HIBYTE(m_pInstance[7].m_CScriptComponent) )
  {
    *v13.m128i_i32 = this->bonus_building_damage;
    *&result.m_eType = (_mm_cvtsi128_si32(v13) << 32) | 1;
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::GetModifierMagicalResistanceBonus  (line 1617, @0x0000000002b3ca90, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_SpiritBear_Demolish::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_LoneDruid_SpiritBear_Demolish *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    return 1uLL;
  *v3.m128i_i32 = this->spell_resistance;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Ability_LoneDruid_Rabid::~CDOTA_Ability_LoneDruid_Rabid  (line 1631, @0x0000000002ba1ff0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_LoneDruid_Rabid::~CDOTA_Ability_LoneDruid_Rabid(
        CDOTA_Ability_LoneDruid_Rabid *const this)
{
  this->_vptr_IHandleEntity = &off_4524830;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_LoneDruid_Rabid::~CDOTA_Ability_LoneDruid_Rabid  (line 1631, @0x0000000002ba2010, libserver.so)  // inlines: ~CDOTA_Ability_LoneDruid_Rabid
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_LoneDruid_Rabid::~CDOTA_Ability_LoneDruid_Rabid(
        CDOTA_Ability_LoneDruid_Rabid *const this)
{
  this->_vptr_IHandleEntity = &off_4524830;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_LoneDruid_Rabid::Schema_DynamicBinding  (line 1633, @0x0000000002b93520, libserver.so)
// globals: CDOTA_Ability_LoneDruid_Rabid::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_Rabid::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_Rabid *const this)
{
  return CDOTA_Ability_LoneDruid_Rabid::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1633, @0x0000000002b93530, libserver.so)
// globals: CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::DestructInstance  (line 1633, @0x0000000002b93540, libserver.so)  // inlines: Destruct<CDOTA_Ability_LoneDruid_Rabid>
void __fastcall CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::FreeInstance  (line 1633, @0x0000000002b93560, libserver.so)
void __fastcall CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::CanAllocate  (line 1633, @0x0000000002b93580, libserver.so)
bool __fastcall CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1633, @0x0000000002b93590, libserver.so)
// globals: CDOTA_Ability_LoneDruid_Rabid::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_Rabid::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::AllocateInstance  (line 1633, @0x0000000002b98c20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::ConstructInstance  (line 1633, @0x0000000002b9db60, libserver.so)  // inlines: CDOTA_Ability_LoneDruid_Rabid, Construct<CDOTA_Ability_LoneDruid_Rabid>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4524830;
  }
  return p;
}


// CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1633, @0x0000000002babba0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1633, @0x0000000002babbc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInternal  (line 1633, @0x0000000002bccc80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_LoneDruid_Rabid"
// globals: `guard variable for'CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClass, CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClass, __dso_handle, CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClassInfo, CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClassInfo
CEntityClass *__cdecl CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClass);
    CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClass._vptr_CEntityClass = off_45247B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClass);
    __cxa_atexit(
      CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_LoneDruid_RabidClass != 0 )
    return &CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClass;
  if ( `guard variable for'CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClassInfo,
      "CDOTA_Ability_LoneDruid_Rabid",
      "lone_druid_rabid",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClassInfo);
  }
  CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClass.m_pClassInfo = &CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClassInfo;
  CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClass.m_pBaseClassInfo = CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_LoneDruid_RabidClass = &CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClass;
  CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClassInfo.m_pClass = &CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClass;
  CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_LoneDruid_RabidClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_LoneDruid_Rabid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_RabidClass;
}


// CDOTA_Ability_LoneDruid_Rabid::YouForgotToImplementOrDeclareServerClass  (line 1648, @0x0000000002b36440, libserver.so)
int __fastcall CDOTA_Ability_LoneDruid_Rabid::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_LoneDruid_Rabid *const this)
{
  return 0;
}


// CDOTA_Ability_LoneDruid_Rabid::GetServerClass  (line 1648, @0x0000000002b4c8e0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_LoneDruid_Rabid::GetServerClass(CDOTA_Ability_LoneDruid_Rabid *const this)
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


// CDOTA_Ability_LoneDruid_Rabid::OnAbilityPhaseStart  (line 1657, @0x0000000002b38600, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture
bool __fastcall CDOTA_Ability_LoneDruid_Rabid::OnAbilityPhaseStart(CDOTA_Ability_LoneDruid_Rabid *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1516, 0.1, 0.1, 9, 0, 1.0);
  return 1;
}


// CDOTA_Ability_LoneDruid_Rabid::OnSpellStart  (line 1669, @0x0000000002b74f20, libserver.so)  // inlines: Get, GetBear, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::FindAbilityByName, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "rabid_duration", "modifier_lone_druid_rabid", "Hero_LoneDruid.Rabid", "lone_druid_spirit_bear", "Hero_LoneDruid.RabidBear"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_LoneDruid_Rabid::OnSpellStart(CDOTA_Ability_LoneDruid_Rabid *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // r13
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int vptr_IHandleEntity_high; // edx
  unsigned __int16 v10; // cx
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *v14; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  this->rabid_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "rabid_duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_lone_druid_rabid");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_LoneDruid.Rabid", 0.0, 0, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v4, 1517, 0.1, 0.1, 9, 0, 1.0);
  v5 = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v6, v5, this, "modifier_lone_druid_rabid", &kv, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v7, "lone_druid_spirit_bear", 0);
  if ( AbilityByName != 0 )
  {
    vptr_IHandleEntity_high = HIDWORD(AbilityByName[1]._vptr_IHandleEntity);
    if ( (vptr_IHandleEntity_high + 2) > 1 )
    {
      v10 = WORD2(AbilityByName[1]._vptr_IHandleEntity);
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[v10 & 0x1FF];
        if ( v12 != 0 && vptr_IHandleEntity_high == v12->m_EHandle.m_Index )
        {
          m_pInstance = v12->m_pInstance;
          if ( v12->m_pInstance != 0 )
          {
            v14 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, v14, this, "modifier_lone_druid_rabid", &kv, 0);
            CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_LoneDruid.RabidBear", 0.0, 0, 0);
          }
        }
      }
    }
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_LoneDruid_Rabid::GetAbilityDamageToTargetOverInterval  (line 1698, @0x0000000002b6acf0, libserver.so)  // inlines: RemapVal
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_LoneDruid_Rabid::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_LoneDruid_Rabid *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  float v9; // xmm2_4
  float v10; // xmm2_4
  CDOTA_BaseNPC *v11; // rax
  __m128 v12; // xmm2
  float AttackSpeed; // [rsp-4h] [rbp-20h]
  float fIntervala; // [rsp+0h] [rbp-1Ch]
  float fIntervalb; // [rsp+0h] [rbp-1Ch]
  float fIntervalc; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AttackSpeed = CDOTA_BaseNPC::GetAttackSpeed(Caster);
    v8 = CDOTABaseAbility::GetCaster(this);
    fIntervala = CDOTA_BaseNPC::GetAttacksPerSecond(v8);
    v9 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_attack_speed", -1, 0) + AttackSpeed;
    if ( AttackSpeed == 0.0 )
    {
      v12.m128_f32[0] = v9 - AttackSpeed;
      LODWORD(v10) = _mm_cmple_ss(0LL, v12).m128_u32[0] & LODWORD(fIntervala);
    }
    else
    {
      v10 = ((v9 * fIntervala) / AttackSpeed) + 0.0;
    }
    fIntervalb = (v10 - fIntervala) * fInterval;
    v11 = CDOTABaseAbility::GetCaster(this);
    fIntervalc = fIntervalb * CDOTA_BaseNPC::GetAverageTrueAttackDamage(v11, pTarget);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * fIntervalc);
  }
  return result;
}


// CDOTA_Modifier_LoneDruid_Rabid::~CDOTA_Modifier_LoneDruid_Rabid  (line 1720, @0x0000000002b99530, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_LoneDruid_Rabid::~CDOTA_Modifier_LoneDruid_Rabid(
        CDOTA_Modifier_LoneDruid_Rabid *const this)
{
  this->_vptr_CDOTA_Buff = &off_45252F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_LoneDruid_Rabid::~CDOTA_Modifier_LoneDruid_Rabid  (line 1720, @0x0000000002b99550, libserver.so)  // inlines: ~CDOTA_Modifier_LoneDruid_Rabid
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_LoneDruid_Rabid::~CDOTA_Modifier_LoneDruid_Rabid(
        CDOTA_Modifier_LoneDruid_Rabid *const this)
{
  this->_vptr_CDOTA_Buff = &off_45252F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_LoneDruid_Rabid::GetHeroEffectName  (line 1730, @0x0000000002b935a0, libserver.so)
// strings: "particles/units/heroes/hero_lone_druid/lone_druid_rabid_hero_effect.vpcf"
const char *__fastcall CDOTA_Modifier_LoneDruid_Rabid::GetHeroEffectName(CDOTA_Modifier_LoneDruid_Rabid *const this)
{
  return "particles/units/heroes/hero_lone_druid/lone_druid_rabid_hero_effect.vpcf";
}


// CDOTA_Modifier_LoneDruid_Rabid::HeroEffectPriority  (line 1731, @0x0000000002b935b0, libserver.so)
int __fastcall CDOTA_Modifier_LoneDruid_Rabid::HeroEffectPriority(CDOTA_Modifier_LoneDruid_Rabid *const this)
{
  return 100;
}


// CDOTA_Modifier_LoneDruid_Rabid::DeclareFunctions  (line 1747, @0x0000000002b36450, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_LoneDruid_Rabid::DeclareFunctions(CDOTA_Modifier_LoneDruid_Rabid *const this)
{
  this->m_Functions[24].__pfn = (&stru_10 + 697);
  this->m_Functions[24].__delta = 0;
  this->m_Functions[13].__pfn = (&stru_10 + 705);
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_LoneDruid_Rabid::OnCreated  (line 1756, @0x0000000002b6efd0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "bonus_move_speed", "particles/units/heroes/hero_lone_druid/lone_druid_rabid_buff.vpcf", "attach_attack1", "attach_mouth"
void __fastcall CDOTA_Modifier_LoneDruid_Rabid::OnCreated(CDOTA_Modifier_LoneDruid_Rabid *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v9; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v11; // rax
  const Vector *v12; // r13
  CDOTA_BaseNPC *v13; // r14
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // r13
  CDOTA_ParticleManager *v16; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->bonus_attack_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_move_speed = 0;
    goto LABEL_4;
  }
  this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_speed", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_move_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_move_speed", -1, 0);
LABEL_4:
  Parent = CDOTA_Buff::GetParent(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_lone_druid/lone_druid_rabid_buff.vpcf",
                         2,
                         Parent,
                         0);
  v7 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  v9 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(
    ParticleManager,
    BuffParticleEffect,
    0,
    v9,
    5,
    "attach_attack1",
    *AbsOrigin,
    1);
  v11 = CDOTA_Buff::GetParent(this);
  v12 = CBaseEntity::GetAbsOrigin(v11);
  v13 = CDOTA_Buff::GetParent(this);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v14, BuffParticleEffect, 1, v13, 5, "attach_mouth", *v12, 1);
  v15 = CDOTA_Buff::GetParent(this);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v16, BuffParticleEffect, 2, v15, 1, 0, vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_LoneDruid_Rabid::OnRefresh  (line 1771, @0x0000000002b6ce40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_move_speed"
void __fastcall CDOTA_Modifier_LoneDruid_Rabid::OnRefresh(CDOTA_Modifier_LoneDruid_Rabid *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_move_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_move_speed", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_attack_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_move_speed = 0;
}


// CDOTA_Modifier_LoneDruid_Rabid::GetModifierAttackSpeedBonus_Constant  (line 1779, @0x0000000002b36490, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_Rabid::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_LoneDruid_Rabid *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_LoneDruid_Rabid::GetModifierMoveSpeedBonus_Percentage  (line 1786, @0x0000000002b364b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_Rabid::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_LoneDruid_Rabid *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_move_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_LoneDruid_TrueForm::~CDOTA_Ability_LoneDruid_TrueForm  (line 1797, @0x0000000002ba2040, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_LoneDruid_TrueForm::~CDOTA_Ability_LoneDruid_TrueForm(
        CDOTA_Ability_LoneDruid_TrueForm *const this)
{
  this->_vptr_IHandleEntity = &off_4525670;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_LoneDruid_TrueForm::~CDOTA_Ability_LoneDruid_TrueForm  (line 1797, @0x0000000002ba2060, libserver.so)  // inlines: ~CDOTA_Ability_LoneDruid_TrueForm
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_LoneDruid_TrueForm::~CDOTA_Ability_LoneDruid_TrueForm(
        CDOTA_Ability_LoneDruid_TrueForm *const this)
{
  this->_vptr_IHandleEntity = &off_4525670;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_LoneDruid_TrueForm::Schema_DynamicBinding  (line 1799, @0x0000000002b935c0, libserver.so)
// globals: CDOTA_Ability_LoneDruid_TrueForm::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_TrueForm::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_TrueForm *const this)
{
  return CDOTA_Ability_LoneDruid_TrueForm::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1799, @0x0000000002b935d0, libserver.so)
// globals: CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::DestructInstance  (line 1799, @0x0000000002b935e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_LoneDruid_TrueForm>
void __fastcall CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::FreeInstance  (line 1799, @0x0000000002b93600, libserver.so)
void __fastcall CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::CanAllocate  (line 1799, @0x0000000002b93620, libserver.so)
bool __fastcall CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1799, @0x0000000002b93630, libserver.so)
// globals: CDOTA_Ability_LoneDruid_TrueForm::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_TrueForm::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::AllocateInstance  (line 1799, @0x0000000002b98c60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::ConstructInstance  (line 1799, @0x0000000002b9db90, libserver.so)  // inlines: CDOTA_Ability_LoneDruid_TrueForm, Construct<CDOTA_Ability_LoneDruid_TrueForm>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4525670;
  }
  return p;
}


// CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1799, @0x0000000002babbf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1799, @0x0000000002babc10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInternal  (line 1799, @0x0000000002bccdd0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_LoneDruid_TrueForm"
// globals: `guard variable for'CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClass, CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClass, __dso_handle, CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClassInfo, CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClassInfo
CEntityClass *__cdecl CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClass);
    CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClass._vptr_CEntityClass = off_45255F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClass);
    __cxa_atexit(
      CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_LoneDruid_TrueFormClass != 0 )
    return &CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClass;
  if ( `guard variable for'CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClassInfo,
      "CDOTA_Ability_LoneDruid_TrueForm",
      "lone_druid_true_form",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClassInfo);
  }
  CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClass.m_pClassInfo = &CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClassInfo;
  CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClass.m_pBaseClassInfo = CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_LoneDruid_TrueFormClass = &CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClass;
  CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClassInfo.m_pClass = &CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClass;
  CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_LoneDruid_TrueFormClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_LoneDruid_TrueForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueFormClass;
}


// CDOTA_Ability_LoneDruid_TrueForm::GetAssociatedSecondaryAbilities  (line 1807, @0x0000000002b93640, libserver.so)
// strings: "lone_druid_true_form_druid"
const char *__fastcall CDOTA_Ability_LoneDruid_TrueForm::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_LoneDruid_TrueForm *const this)
{
  return "lone_druid_true_form_druid";
}


// CDOTA_Ability_LoneDruid_TrueForm::OnSpellStart  (line 1817, @0x0000000002b750f0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "transformation_time", "modifier_lone_druid_true_form_transform"
void __fastcall CDOTA_Ability_LoneDruid_TrueForm::OnSpellStart(CDOTA_Ability_LoneDruid_TrueForm *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "transformation_time", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_lone_druid_true_form_transform");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_lone_druid_true_form_transform", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_LoneDruid_TrueForm::OnUpgrade  (line 1831, @0x0000000002b37ed0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::OnUpgrade, CDOTABaseAbility::UpgradeAbility
// strings: "lone_druid_true_form_battle_cry", "lone_druid_true_form_druid", "modifier_lone_druid_true_form"
void __fastcall CDOTA_Ability_LoneDruid_TrueForm::OnUpgrade(CDOTA_Ability_LoneDruid_TrueForm *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_Buff *ModifierByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "lone_druid_true_form_battle_cry", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTA_BaseNPC::FindAbilityByName(v4, "lone_druid_true_form_druid", 0);
  if ( v5 != 0 && v5->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(v5, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v6, "modifier_lone_druid_true_form", 0);
  if ( ModifierByName != 0 )
    (*(ModifierByName->_vptr_CDOTA_Buff + 58))(ModifierByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_LoneDruid_TrueForm::OnUnStolen  (line 1859, @0x0000000002b384d0, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_lone_druid_true_form"
void __fastcall CDOTA_Ability_LoneDruid_TrueForm::OnUnStolen(CDOTA_Ability_LoneDruid_TrueForm *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnUnStolen(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_lone_druid_true_form");
}


// CDOTA_Modifier_LoneDruid_TrueForm_Transform::~CDOTA_Modifier_LoneDruid_TrueForm_Transform  (line 1872, @0x0000000002b994e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_LoneDruid_TrueForm_Transform::~CDOTA_Modifier_LoneDruid_TrueForm_Transform(
        CDOTA_Modifier_LoneDruid_TrueForm_Transform *const this)
{
  this->_vptr_CDOTA_Buff = &off_4526130;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_LoneDruid_TrueForm_Transform::~CDOTA_Modifier_LoneDruid_TrueForm_Transform  (line 1872, @0x0000000002b99500, libserver.so)  // inlines: ~CDOTA_Modifier_LoneDruid_TrueForm_Transform
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_LoneDruid_TrueForm_Transform::~CDOTA_Modifier_LoneDruid_TrueForm_Transform(
        CDOTA_Modifier_LoneDruid_TrueForm_Transform *const this)
{
  this->_vptr_CDOTA_Buff = &off_4526130;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_LoneDruid_TrueForm_Transform::IsHidden  (line 1878, @0x0000000002b93650, libserver.so)
bool __fastcall CDOTA_Modifier_LoneDruid_TrueForm_Transform::IsHidden(
        CDOTA_Modifier_LoneDruid_TrueForm_Transform *const this)
{
  return 1;
}


// CDOTA_Modifier_LoneDruid_TrueForm_Transform::IsPurgable  (line 1879, @0x0000000002b93660, libserver.so)
bool __fastcall CDOTA_Modifier_LoneDruid_TrueForm_Transform::IsPurgable(
        CDOTA_Modifier_LoneDruid_TrueForm_Transform *const this)
{
  return 0;
}


// CDOTA_Modifier_LoneDruid_TrueForm_Transform::OnCreated  (line 1892, @0x0000000002b3b7e0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "Hero_LoneDruid.TrueForm.Cast", "particles/units/heroes/hero_lone_druid/lone_druid_true_form.vpcf", "attach_hitloc", "attach_attack1", "attach_attack2"
void __fastcall CDOTA_Modifier_LoneDruid_TrueForm_Transform::OnCreated(
        CDOTA_Modifier_LoneDruid_TrueForm_Transform *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v9; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v11; // rax
  const Vector *v12; // r13
  CDOTA_BaseNPC *v13; // r14
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // r13
  CDOTA_BaseNPC *v17; // r14
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // rbx
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1518, 0.0, 0.0, 9, 0, 1.0);
  v4 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v4, "Hero_LoneDruid.TrueForm.Cast", 0.0, 0, 0);
  v5 = CDOTA_Buff::GetCaster(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_lone_druid/lone_druid_true_form.vpcf",
                         2,
                         v5,
                         0);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v9 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(
    ParticleManager,
    BuffParticleEffect,
    0,
    v9,
    5,
    "attach_hitloc",
    *AbsOrigin,
    1);
  v11 = CDOTA_Buff::GetParent(this);
  v12 = CBaseEntity::GetAbsOrigin(v11);
  v13 = CDOTA_Buff::GetCaster(this);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v14, BuffParticleEffect, 1, v13, 5, "attach_attack1", *v12, 1);
  v15 = CDOTA_Buff::GetParent(this);
  v16 = CBaseEntity::GetAbsOrigin(v15);
  v17 = CDOTA_Buff::GetCaster(this);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v18, BuffParticleEffect, 2, v17, 5, "attach_attack2", *v16, 1);
  v19 = CDOTA_Buff::GetCaster(this);
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v20, BuffParticleEffect, 3, v19, 1, 0, vec3_invalid, 1);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v21, BuffParticleEffect);
}


// CDOTA_Modifier_LoneDruid_TrueForm_Transform::OnDestroy  (line 1910, @0x0000000002b3b9c0, libserver.so)
// calls: KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// strings: "modifier_lone_druid_true_form", "particles/units/heroes/hero_lone_druid/lone_druid_true_form_end.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_LoneDruid_TrueForm_Transform::OnDestroy(
        CDOTA_Modifier_LoneDruid_TrueForm_Transform *const this)
{
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v8; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // rbx
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_lone_druid_true_form");
  Ability = CDOTA_Buff::GetAbility(this);
  Caster = CDOTA_Buff::GetCaster(this);
  v4 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, Ability, "modifier_lone_druid_true_form", &kv, 0);
  v5 = CDOTA_Buff::GetCaster(this);
  LODWORD(Caster) = CDOTA_Buff::CreateBuffParticleEffect(
                      this,
                      "particles/units/heroes/hero_lone_druid/lone_druid_true_form_end.vpcf",
                      2,
                      v5,
                      0);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v8 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, Caster, 0, v8, 5, "attach_hitloc", *AbsOrigin, 1);
  v10 = CDOTA_Buff::GetCaster(this);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v11, Caster, 1, v10, 1, 0, vec3_invalid, 1);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v12, Caster);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_LoneDruid_TrueForm_Transform::CheckState  (line 1927, @0x0000000002b364d0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_LoneDruid_TrueForm_Transform::CheckState(
        CDOTA_Modifier_LoneDruid_TrueForm_Transform *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_LoneDruid_TrueForm::~CDOTA_Modifier_LoneDruid_TrueForm  (line 1938, @0x0000000002b99490, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_LoneDruid_TrueForm::~CDOTA_Modifier_LoneDruid_TrueForm(
        CDOTA_Modifier_LoneDruid_TrueForm *const this)
{
  this->_vptr_CDOTA_Buff = &off_4526450;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_LoneDruid_TrueForm::~CDOTA_Modifier_LoneDruid_TrueForm  (line 1938, @0x0000000002b994b0, libserver.so)  // inlines: ~CDOTA_Modifier_LoneDruid_TrueForm
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_LoneDruid_TrueForm::~CDOTA_Modifier_LoneDruid_TrueForm(
        CDOTA_Modifier_LoneDruid_TrueForm *const this)
{
  this->_vptr_CDOTA_Buff = &off_4526450;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_LoneDruid_TrueForm::IsHidden  (line 1943, @0x0000000002b93670, libserver.so)
bool __fastcall CDOTA_Modifier_LoneDruid_TrueForm::IsHidden(CDOTA_Modifier_LoneDruid_TrueForm *const this)
{
  return 1;
}


// CDOTA_Modifier_LoneDruid_TrueForm::IsPurgable  (line 1944, @0x0000000002b93680, libserver.so)
bool __fastcall CDOTA_Modifier_LoneDruid_TrueForm::IsPurgable(CDOTA_Modifier_LoneDruid_TrueForm *const this)
{
  return 0;
}


// CDOTA_Modifier_LoneDruid_TrueForm::IsPermanent  (line 1945, @0x0000000002b93690, libserver.so)
bool __fastcall CDOTA_Modifier_LoneDruid_TrueForm::IsPermanent(CDOTA_Modifier_LoneDruid_TrueForm *const this)
{
  return 1;
}


// CDOTA_Modifier_LoneDruid_TrueForm::AllowIllusionDuplicate  (line 1946, @0x0000000002b936a0, libserver.so)
bool __fastcall CDOTA_Modifier_LoneDruid_TrueForm::AllowIllusionDuplicate(
        CDOTA_Modifier_LoneDruid_TrueForm *const this)
{
  return 1;
}


// CDOTA_Modifier_LoneDruid_TrueForm::RemoveOnDeath  (line 1947, @0x0000000002b936b0, libserver.so)
bool __fastcall CDOTA_Modifier_LoneDruid_TrueForm::RemoveOnDeath(CDOTA_Modifier_LoneDruid_TrueForm *const this)
{
  return 0;
}


// CDOTA_Modifier_LoneDruid_TrueForm::GetPriority  (line 1954, @0x0000000002b936c0, libserver.so)
int __fastcall CDOTA_Modifier_LoneDruid_TrueForm::GetPriority(CDOTA_Modifier_LoneDruid_TrueForm *const this)
{
  return 0;
}


// CDOTA_Modifier_LoneDruid_TrueForm::DeclareFunctions  (line 1978, @0x0000000002b364e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_LoneDruid_TrueForm::GetModifierBaseAttackTimeConstant(CModifierParams const&), CDOTA_Modifier_LoneDruid_TrueForm::GetModifierHealthBonus(CModifierParams const&), CDOTA_Modifier_LoneDruid_TrueForm::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_LoneDruid_TrueForm::GetModifierMoveSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_LoneDruid_TrueForm::GetModifierModelChange(CModifierParams const&), CDOTA_Modifier_LoneDruid_TrueForm::GetActivityTranslationModifiers(CModifierParams const&), CDOTA_Modifier_LoneDruid_TrueForm::GetModifierAttackRangeBonus(CModifierParams const&), CDOTA_Modifier_LoneDruid_TrueForm::ModelScale(CModifierParams const&)
void __fastcall CDOTA_Modifier_LoneDruid_TrueForm::DeclareFunctions(CDOTA_Modifier_LoneDruid_TrueForm *const this)
{
  this->m_Functions[26].__pfn = CDOTA_Modifier_LoneDruid_TrueForm::GetModifierBaseAttackTimeConstant;
  this->m_Functions[26].__delta = 0;
  this->m_Functions[58].__delta = 0;
  this->m_Functions[58].__pfn = CDOTA_Modifier_LoneDruid_TrueForm::GetModifierHealthBonus;
  this->m_Functions[45].__pfn = CDOTA_Modifier_LoneDruid_TrueForm::GetModifierPhysicalArmorBonus;
  this->m_Functions[11].__pfn = CDOTA_Modifier_LoneDruid_TrueForm::GetModifierMoveSpeedBonus_Constant;
  this->m_Functions[152].__pfn = CDOTA_Modifier_LoneDruid_TrueForm::GetModifierModelChange;
  this->m_Functions[155].__pfn = CDOTA_Modifier_LoneDruid_TrueForm::GetActivityTranslationModifiers;
  this->m_Functions[69].__pfn = CDOTA_Modifier_LoneDruid_TrueForm::GetModifierAttackRangeBonus;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[11].__delta = 0;
  this->m_Functions[152].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[69].__delta = 0;
  this->m_Functions[153].__pfn = CDOTA_Modifier_LoneDruid_TrueForm::ModelScale;
  this->m_Functions[153].__delta = 0;
}


// CDOTA_Modifier_LoneDruid_TrueForm::OnCreated  (line 1992, @0x0000000002b7fab0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, NetworkStateChanged, Set, SetAttackCapability
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::SwapAbilities, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetHidden, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "lone_druid_true_form_druid", "lone_druid_true_form_battle_cry", "base_attack_time", "speed_loss"
void __fastcall CDOTA_Modifier_LoneDruid_TrueForm::OnCreated(
        CDOTA_Modifier_LoneDruid_TrueForm *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *v6; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  CDOTABaseAbility *v11; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(Caster, "lone_druid_true_form", "lone_druid_true_form_druid", 0, 1);
  v4 = CDOTA_Buff::GetCaster(this);
  v5 = v4;
  if ( v4->m_iAttackCapabilities.m_Value != 1 )
  {
    (*(v4->_vptr_IHandleEntity + 22))(v4, 2436, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v5->m_iAttackCapabilities.m_Value = 1;
  }
  v6 = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v6, "lone_druid_true_form_battle_cry", 0);
  if ( AbilityByName != 0 )
    CDOTABaseAbility::SetHidden(AbilityByName, 0);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->base_attack_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "base_attack_time", -1, 0);
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      goto LABEL_7;
  }
  else
  {
    this->base_attack_time = 0.0;
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
    {
LABEL_7:
      this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v9, "bonus_armor", -1, 0);
      v10 = CDOTA_Buff::GetAbility(this);
      if ( v10 != 0 )
        goto LABEL_8;
LABEL_12:
      this->bonus_hp = 0;
      v11 = CDOTA_Buff::GetAbility(this);
      if ( v11 != 0 )
        goto LABEL_9;
      goto LABEL_13;
    }
  }
  this->bonus_armor = 0;
  v10 = CDOTA_Buff::GetAbility(this);
  if ( v10 == 0 )
    goto LABEL_12;
LABEL_8:
  this->bonus_hp = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v10, "bonus_hp", -1, 0);
  v11 = CDOTA_Buff::GetAbility(this);
  if ( v11 != 0 )
  {
LABEL_9:
    this->speed_loss = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v11, "speed_loss", -1, 0);
    return;
  }
LABEL_13:
  this->speed_loss = 0;
}


// CDOTA_Modifier_LoneDruid_TrueForm::OnRefresh  (line 2016, @0x0000000002b7e7b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "base_attack_time", "speed_loss"
void __fastcall CDOTA_Modifier_LoneDruid_TrueForm::OnRefresh(
        CDOTA_Modifier_LoneDruid_TrueForm *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->base_attack_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "base_attack_time", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->base_attack_time = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_armor", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->bonus_hp = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->bonus_armor = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->bonus_hp = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_hp", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->speed_loss = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "speed_loss", -1, 0);
    return;
  }
LABEL_9:
  this->speed_loss = 0;
}


// CDOTA_Modifier_LoneDruid_TrueForm::OnDestroy  (line 2026, @0x0000000002b42520, libserver.so)  // inlines: NetworkStateChanged, Set, SetAttackCapability
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::SwapAbilities, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetHidden
// strings: "lone_druid_true_form_druid", "lone_druid_true_form_battle_cry"
void __fastcall CDOTA_Modifier_LoneDruid_TrueForm::OnDestroy(CDOTA_Modifier_LoneDruid_TrueForm *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *v5; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(Caster, "lone_druid_true_form", "lone_druid_true_form_druid", 1, 0);
  v3 = CDOTA_Buff::GetCaster(this);
  v4 = v3;
  if ( v3->m_iAttackCapabilities.m_Value != 2 )
  {
    (*(v3->_vptr_IHandleEntity + 22))(v3, 2436, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4->m_iAttackCapabilities.m_Value = 2;
  }
  v5 = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v5, "lone_druid_true_form_battle_cry", 0);
  if ( AbilityByName != 0 )
    CDOTABaseAbility::SetHidden(AbilityByName, 1);
}


// CDOTA_Modifier_LoneDruid_TrueForm::GetModifierBaseAttackTimeConstant  (line 2043, @0x0000000002b365b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_TrueForm::GetModifierBaseAttackTimeConstant(
        CDOTA_Modifier_LoneDruid_TrueForm *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->base_attack_time) << 32) | 1;
  return result;
}


// CDOTA_Modifier_LoneDruid_TrueForm::GetModifierPhysicalArmorBonus  (line 2050, @0x0000000002b365d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_TrueForm::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_LoneDruid_TrueForm *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_LoneDruid_TrueForm::GetModifierMoveSpeedBonus_Constant  (line 2057, @0x0000000002b365f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_TrueForm::GetModifierMoveSpeedBonus_Constant(
        CDOTA_Modifier_LoneDruid_TrueForm *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->speed_loss;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_LoneDruid_TrueForm::GetModifierHealthBonus  (line 2064, @0x0000000002b36610, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_TrueForm::GetModifierHealthBonus(
        CDOTA_Modifier_LoneDruid_TrueForm *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_hp;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_LoneDruid_TrueForm::GetModifierModelChange  (line 2072, @0x0000000002b36630, libserver.so)
// strings: "models/heroes/lone_druid/true_form.vmdl"
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_TrueForm::GetModifierModelChange(
        CDOTA_Modifier_LoneDruid_TrueForm *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "models/heroes/lone_druid/true_form.vmdl";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_LoneDruid_TrueForm::GetActivityTranslationModifiers  (line 2079, @0x0000000002b36650, libserver.so)
// strings: "trueform"
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_TrueForm::GetActivityTranslationModifiers(
        CDOTA_Modifier_LoneDruid_TrueForm *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "trueform";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_LoneDruid_TrueForm::GetModifierAttackRangeBonus  (line 2085, @0x0000000002b36670, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_TrueForm::GetModifierAttackRangeBonus(
        CDOTA_Modifier_LoneDruid_TrueForm *const this,
        const CModifierParams *const params)
{
  return 0xC3C8000000000001LL;
}


// CDOTA_Modifier_LoneDruid_TrueForm::ModelScale  (line 2092, @0x0000000002b36690, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_TrueForm::ModelScale(
        CDOTA_Modifier_LoneDruid_TrueForm *const this,
        const CModifierParams *const params)
{
  return 0xC120000000000001LL;
}


// CDOTA_Ability_LoneDruid_TrueForm_Druid::~CDOTA_Ability_LoneDruid_TrueForm_Druid  (line 2104, @0x0000000002ba2090, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_LoneDruid_TrueForm_Druid::~CDOTA_Ability_LoneDruid_TrueForm_Druid(
        CDOTA_Ability_LoneDruid_TrueForm_Druid *const this)
{
  this->_vptr_IHandleEntity = &off_45267B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_LoneDruid_TrueForm_Druid::~CDOTA_Ability_LoneDruid_TrueForm_Druid  (line 2104, @0x0000000002ba20b0, libserver.so)  // inlines: ~CDOTA_Ability_LoneDruid_TrueForm_Druid
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_LoneDruid_TrueForm_Druid::~CDOTA_Ability_LoneDruid_TrueForm_Druid(
        CDOTA_Ability_LoneDruid_TrueForm_Druid *const this)
{
  this->_vptr_IHandleEntity = &off_45267B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_LoneDruid_TrueForm_Druid::Schema_DynamicBinding  (line 2106, @0x0000000002b936d0, libserver.so)
// globals: CDOTA_Ability_LoneDruid_TrueForm_Druid::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_TrueForm_Druid::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_TrueForm_Druid *const this)
{
  return CDOTA_Ability_LoneDruid_TrueForm_Druid::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2106, @0x0000000002b936e0, libserver.so)
// globals: CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::DestructInstance  (line 2106, @0x0000000002b936f0, libserver.so)  // inlines: Destruct<CDOTA_Ability_LoneDruid_TrueForm_Druid>
void __fastcall CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::FreeInstance  (line 2106, @0x0000000002b93710, libserver.so)
void __fastcall CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::CanAllocate  (line 2106, @0x0000000002b93730, libserver.so)
bool __fastcall CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2106, @0x0000000002b93740, libserver.so)
// globals: CDOTA_Ability_LoneDruid_TrueForm_Druid::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_TrueForm_Druid::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::AllocateInstance  (line 2106, @0x0000000002b98ca0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::ConstructInstance  (line 2106, @0x0000000002b9dbc0, libserver.so)  // inlines: CDOTA_Ability_LoneDruid_TrueForm_Druid, Construct<CDOTA_Ability_LoneDruid_TrueForm_Druid>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45267B0;
  }
  return p;
}


// CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2106, @0x0000000002babc40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2106, @0x0000000002babc60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInternal  (line 2106, @0x0000000002bccf20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "lone_druid_true_form_druid", "CDOTA_Ability_LoneDruid_TrueForm_Druid"
// globals: `guard variable for'CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClass, CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClass, __dso_handle, CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClassInfo, CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClassInfo
CEntityClass *__cdecl CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClass);
    CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClass._vptr_CEntityClass = off_4526730;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClass);
    __cxa_atexit(
      CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_LoneDruid_TrueForm_DruidClass != 0 )
    return &CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClass;
  if ( `guard variable for'CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClassInfo,
      "CDOTA_Ability_LoneDruid_TrueForm_Druid",
      "lone_druid_true_form_druid",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClassInfo);
  }
  CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClass.m_pClassInfo = &CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClassInfo;
  CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClass.m_pBaseClassInfo = CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_LoneDruid_TrueForm_DruidClass = &CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClass;
  CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClassInfo.m_pClass = &CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClass;
  CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_LoneDruid_TrueForm_DruidClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_LoneDruid_TrueForm_Druid::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_DruidClass;
}


// CDOTA_Ability_LoneDruid_TrueForm_Druid::GetAssociatedPrimaryAbilities  (line 2113, @0x0000000002b93750, libserver.so)
const char *__fastcall CDOTA_Ability_LoneDruid_TrueForm_Druid::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_LoneDruid_TrueForm_Druid *const this)
{
  return "lone_druid_true_form";
}


// CDOTA_Ability_LoneDruid_TrueForm_Druid::IsHiddenWhenStolen  (line 2114, @0x0000000002b93760, libserver.so)
bool __fastcall CDOTA_Ability_LoneDruid_TrueForm_Druid::IsHiddenWhenStolen(
        CDOTA_Ability_LoneDruid_TrueForm_Druid *const this)
{
  return 1;
}


// CDOTA_Ability_LoneDruid_TrueForm_Druid::YouForgotToImplementOrDeclareServerClass  (line 2117, @0x0000000002b366b0, libserver.so)
int __fastcall CDOTA_Ability_LoneDruid_TrueForm_Druid::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_LoneDruid_TrueForm_Druid *const this)
{
  return 0;
}


// CDOTA_Ability_LoneDruid_TrueForm_Druid::GetServerClass  (line 2117, @0x0000000002b4c660, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_LoneDruid_TrueForm_Druid::GetServerClass(
        CDOTA_Ability_LoneDruid_TrueForm_Druid *const this)
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


// CDOTA_Ability_LoneDruid_TrueForm_Druid::OnSpellStart  (line 2127, @0x0000000002b751c0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "transformation_time", "modifier_lone_druid_druid_form_transform"
void __fastcall CDOTA_Ability_LoneDruid_TrueForm_Druid::OnSpellStart(
        CDOTA_Ability_LoneDruid_TrueForm_Druid *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "transformation_time", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_lone_druid_druid_form_transform");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_lone_druid_druid_form_transform", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_LoneDruid_TrueForm_Druid::OnUpgrade  (line 2141, @0x0000000002b37f90, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
void __fastcall CDOTA_Ability_LoneDruid_TrueForm_Druid::OnUpgrade(CDOTA_Ability_LoneDruid_TrueForm_Druid *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "lone_druid_true_form", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Modifier_LoneDruid_DruidForm_Transform::~CDOTA_Modifier_LoneDruid_DruidForm_Transform  (line 2159, @0x0000000002b99440, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_LoneDruid_DruidForm_Transform::~CDOTA_Modifier_LoneDruid_DruidForm_Transform(
        CDOTA_Modifier_LoneDruid_DruidForm_Transform *const this)
{
  this->_vptr_CDOTA_Buff = &off_4527270;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_LoneDruid_DruidForm_Transform::~CDOTA_Modifier_LoneDruid_DruidForm_Transform  (line 2159, @0x0000000002b99460, libserver.so)  // inlines: ~CDOTA_Modifier_LoneDruid_DruidForm_Transform
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_LoneDruid_DruidForm_Transform::~CDOTA_Modifier_LoneDruid_DruidForm_Transform(
        CDOTA_Modifier_LoneDruid_DruidForm_Transform *const this)
{
  this->_vptr_CDOTA_Buff = &off_4527270;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_LoneDruid_DruidForm_Transform::IsHidden  (line 2165, @0x0000000002b93770, libserver.so)
bool __fastcall CDOTA_Modifier_LoneDruid_DruidForm_Transform::IsHidden(
        CDOTA_Modifier_LoneDruid_DruidForm_Transform *const this)
{
  return 1;
}


// CDOTA_Modifier_LoneDruid_DruidForm_Transform::IsPurgable  (line 2166, @0x0000000002b93780, libserver.so)
bool __fastcall CDOTA_Modifier_LoneDruid_DruidForm_Transform::IsPurgable(
        CDOTA_Modifier_LoneDruid_DruidForm_Transform *const this)
{
  return 0;
}


// CDOTA_Modifier_LoneDruid_DruidForm_Transform::RemoveOnDeath  (line 2167, @0x0000000002b93790, libserver.so)
bool __fastcall CDOTA_Modifier_LoneDruid_DruidForm_Transform::RemoveOnDeath(
        CDOTA_Modifier_LoneDruid_DruidForm_Transform *const this)
{
  return 0;
}


// CDOTA_Modifier_LoneDruid_DruidForm_Transform::OnCreated  (line 2180, @0x0000000002b3bb40, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "Hero_LoneDruid.TrueForm.Recast", "particles/units/heroes/hero_lone_druid/true_form_lone_druid.vpcf", "attach_hitloc", "attach_attack1", "attach_attack2"
void __fastcall CDOTA_Modifier_LoneDruid_DruidForm_Transform::OnCreated(
        CDOTA_Modifier_LoneDruid_DruidForm_Transform *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v9; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v11; // rax
  const Vector *v12; // r13
  CDOTA_BaseNPC *v13; // r14
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // r13
  CDOTA_BaseNPC *v17; // r14
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // rbx
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1519, 0.0, 0.0, 9, 0, 1.0);
  v4 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v4, "Hero_LoneDruid.TrueForm.Recast", 0.0, 0, 0);
  v5 = CDOTA_Buff::GetCaster(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_lone_druid/true_form_lone_druid.vpcf",
                         2,
                         v5,
                         0);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v9 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(
    ParticleManager,
    BuffParticleEffect,
    0,
    v9,
    5,
    "attach_hitloc",
    *AbsOrigin,
    1);
  v11 = CDOTA_Buff::GetParent(this);
  v12 = CBaseEntity::GetAbsOrigin(v11);
  v13 = CDOTA_Buff::GetCaster(this);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v14, BuffParticleEffect, 1, v13, 5, "attach_attack1", *v12, 1);
  v15 = CDOTA_Buff::GetParent(this);
  v16 = CBaseEntity::GetAbsOrigin(v15);
  v17 = CDOTA_Buff::GetCaster(this);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v18, BuffParticleEffect, 2, v17, 5, "attach_attack2", *v16, 1);
  v19 = CDOTA_Buff::GetCaster(this);
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v20, BuffParticleEffect, 3, v19, 1, 0, vec3_invalid, 1);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v21, BuffParticleEffect);
}


// CDOTA_Modifier_LoneDruid_DruidForm_Transform::OnDestroy  (line 2198, @0x0000000002b3bd20, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "modifier_lone_druid_true_form", "particles/units/heroes/hero_lone_druid/lone_druid_true_form_end.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_LoneDruid_DruidForm_Transform::OnDestroy(
        CDOTA_Modifier_LoneDruid_DruidForm_Transform *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_BaseNPC *v4; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v8; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // rbx
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_lone_druid_true_form", 0);
  if ( ModifierByName != 0 )
    CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
  v4 = CDOTA_Buff::GetCaster(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_lone_druid/lone_druid_true_form_end.vpcf",
                         2,
                         v4,
                         0);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v8 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(
    ParticleManager,
    BuffParticleEffect,
    0,
    v8,
    5,
    "attach_hitloc",
    *AbsOrigin,
    1);
  v10 = CDOTA_Buff::GetCaster(this);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v11, BuffParticleEffect, 1, v10, 1, 0, vec3_invalid, 1);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v12, BuffParticleEffect);
}


// CDOTA_Modifier_LoneDruid_DruidForm_Transform::CheckState  (line 2217, @0x0000000002b366c0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_LoneDruid_DruidForm_Transform::CheckState(
        CDOTA_Modifier_LoneDruid_DruidForm_Transform *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Ability_LoneDruid_TrueForm_BattleCry::~CDOTA_Ability_LoneDruid_TrueForm_BattleCry  (line 2230, @0x0000000002ba20e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_LoneDruid_TrueForm_BattleCry::~CDOTA_Ability_LoneDruid_TrueForm_BattleCry(
        CDOTA_Ability_LoneDruid_TrueForm_BattleCry *const this)
{
  this->_vptr_IHandleEntity = &off_45275D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_LoneDruid_TrueForm_BattleCry::~CDOTA_Ability_LoneDruid_TrueForm_BattleCry  (line 2230, @0x0000000002ba2100, libserver.so)  // inlines: ~CDOTA_Ability_LoneDruid_TrueForm_BattleCry
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_LoneDruid_TrueForm_BattleCry::~CDOTA_Ability_LoneDruid_TrueForm_BattleCry(
        CDOTA_Ability_LoneDruid_TrueForm_BattleCry *const this)
{
  this->_vptr_IHandleEntity = &off_45275D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_LoneDruid_TrueForm_BattleCry::Schema_DynamicBinding  (line 2232, @0x0000000002b937a0, libserver.so)
// globals: CDOTA_Ability_LoneDruid_TrueForm_BattleCry::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_TrueForm_BattleCry::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_TrueForm_BattleCry *const this)
{
  return CDOTA_Ability_LoneDruid_TrueForm_BattleCry::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2232, @0x0000000002b937b0, libserver.so)
// globals: CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::DestructInstance  (line 2232, @0x0000000002b937c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_LoneDruid_TrueForm_BattleCry>
void __fastcall CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::FreeInstance  (line 2232, @0x0000000002b937e0, libserver.so)
void __fastcall CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::CanAllocate  (line 2232, @0x0000000002b93800, libserver.so)
bool __fastcall CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2232, @0x0000000002b93810, libserver.so)
// globals: CDOTA_Ability_LoneDruid_TrueForm_BattleCry::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_TrueForm_BattleCry::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::AllocateInstance  (line 2232, @0x0000000002b98ce0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::ConstructInstance  (line 2232, @0x0000000002b9dbf0, libserver.so)  // inlines: CDOTA_Ability_LoneDruid_TrueForm_BattleCry, Construct<CDOTA_Ability_LoneDruid_TrueForm_BattleCry>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45275D0;
  }
  return p;
}


// CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2232, @0x0000000002babc90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2232, @0x0000000002babcb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInternal  (line 2232, @0x0000000002bcd070, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "lone_druid_true_form_battle_cry", "CDOTA_Ability_LoneDruid_TrueForm_BattleCry"
// globals: `guard variable for'CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClass, CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClass, __dso_handle, CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClassInfo, CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClassInfo
CEntityClass *__cdecl CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClass);
    CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClass._vptr_CEntityClass = off_4527550;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClass);
    __cxa_atexit(
      CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClass != 0 )
    return &CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClass;
  if ( `guard variable for'CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClassInfo,
      "CDOTA_Ability_LoneDruid_TrueForm_BattleCry",
      "lone_druid_true_form_battle_cry",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClassInfo);
  }
  CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClass.m_pClassInfo = &CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClassInfo;
  CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClass.m_pBaseClassInfo = CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClass = &CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClass;
  CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClassInfo.m_pClass = &CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClass;
  CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_TrueForm_BattleCryClass;
}


// CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetAOERadius  (line 2238, @0x0000000002bc4410, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetAOERadius(
        CDOTA_Ability_LoneDruid_TrueForm_BattleCry *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "range", -1, 0);
}


// CDOTA_Ability_LoneDruid_TrueForm_BattleCry::YouForgotToImplementOrDeclareServerClass  (line 2245, @0x0000000002b366d0, libserver.so)
int __fastcall CDOTA_Ability_LoneDruid_TrueForm_BattleCry::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_LoneDruid_TrueForm_BattleCry *const this)
{
  return 0;
}


// CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetServerClass  (line 2245, @0x0000000002b4c860, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_LoneDruid_TrueForm_BattleCry::GetServerClass(
        CDOTA_Ability_LoneDruid_TrueForm_BattleCry *const this)
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


// CDOTA_Ability_LoneDruid_TrueForm_BattleCry::OnSpellStart  (line 2255, @0x0000000002b7cbc0, libserver.so)  // inlines: CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetBear, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetLevelSpecialValueFor<float>, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::UnitEmitSound, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::AddNewModifier, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, KeyValues::~KeyValues, _Unwind_Resume (13 total)
// strings: "lone_druid_spirit_bear", "cry_duration", "modifier_lone_druid_true_form_battle_cry", "Hero_LoneDruid.BattleCry"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_LoneDruid_TrueForm_BattleCry::OnSpellStart(
        CDOTA_Ability_LoneDruid_TrueForm_BattleCry *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // r13
  float v4; // xmm1_4
  __m128i v5; // xmm0
  float v6; // r14d
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rbx
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v11; // rax
  __int64 v12; // rbx
  CHandle<CBaseEntity> *v13; // rdx
  uint32 m_Index; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  __int64 v19; // r14
  CDOTA_BaseNPC *v20; // rax
  int vptr_IHandleEntity_high; // eax
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CEntityInstance *v24; // rdi
  unsigned __int16 v25; // dx
  int v26; // esi
  int v27; // eax
  CEntityIdentity *v28; // rdx
  CEntityIdentity *v29; // rdx
  CDOTA_BaseNPC *v30; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "lone_druid_spirit_bear", 0);
  this->cry_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cry_duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_lone_druid_true_form_battle_cry");
  KeyValues::SetFloat(&kv, "duration", v4);
  *v5.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "range", -1, 0);
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v7, "Hero_LoneDruid.BattleCry", 0.0, 0, 0);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
  v11 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v11->m_iTeamNum.m_Value, AbsOrigin, v8, v6, &entities, 1, 3, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v12 = 0;
    do
    {
      while ( 1 )
      {
        v13 = &entities.m_Memory.m_pMemory[v12];
        m_Index = v13->m_Index;
        if ( v13->m_Index + 2 > 1 )
        {
          v15 = v13->m_Index;
          v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F];
          if ( v16 != 0 )
          {
            v17 = &v16[v15 & 0x1FF];
            if ( v17 != 0 && m_Index == v17->m_EHandle.m_Index )
            {
              m_pInstance = v17->m_pInstance;
              if ( v17->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                v19 = (*(m_pInstance->_vptr_IHandleEntity + 413))(v17->m_pInstance);
                v20 = CDOTABaseAbility::GetCaster(this);
                if ( v19 == (*(v20->_vptr_IHandleEntity + 413))(v20) )
                  break;
                if ( AbilityByName != 0 )
                {
                  vptr_IHandleEntity_high = HIDWORD(AbilityByName[1]._vptr_IHandleEntity);
                  if ( (vptr_IHandleEntity_high + 2) > 1 )
                  {
                    v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(WORD2(AbilityByName[1]._vptr_IHandleEntity) >> 9)
                                                                         & 0x3F];
                    if ( v22 != 0 )
                    {
                      v23 = &v22[WORD2(AbilityByName[1]._vptr_IHandleEntity) & 0x1FF];
                      if ( v23 != 0 && vptr_IHandleEntity_high == v23->m_EHandle.m_Index )
                      {
                        v24 = v23->m_pInstance;
                        if ( v23->m_pInstance != 0 )
                        {
                          if ( m_pInstance->m_hOwnerEntity.m_Value.m_Index == -1 )
                          {
                            v25 = 0x7FFF;
                            v26 = 0x7FFF;
                          }
                          else
                          {
                            v25 = m_pInstance->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
                            v26 = v25;
                          }
                          v27 = (m_pInstance->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v25 & 0x7FFF;
                          if ( (v27 + 2) > 1 )
                          {
                            v28 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v26 >> 9];
                            if ( v28 != 0 )
                            {
                              v29 = &v28[v26 & 0x1FF];
                              if ( v29 != 0 && v27 == v29->m_EHandle.m_Index && v24 == v29->m_pInstance )
                                break;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if ( entities.m_Size <= ++v12 )
          goto LABEL_25;
      }
      v30 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v30, this, "modifier_lone_druid_true_form_battle_cry", &kv, 0);
      ++v12;
    }
    while ( entities.m_Size > v12 );
  }
LABEL_25:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::~CDOTA_Modifier_LoneDruid_TrueForm_BattleCry  (line 2291, @0x0000000002b993f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::~CDOTA_Modifier_LoneDruid_TrueForm_BattleCry(
        CDOTA_Modifier_LoneDruid_TrueForm_BattleCry *const this)
{
  this->_vptr_CDOTA_Buff = &off_4528090;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::~CDOTA_Modifier_LoneDruid_TrueForm_BattleCry  (line 2291, @0x0000000002b99410, libserver.so)  // inlines: ~CDOTA_Modifier_LoneDruid_TrueForm_BattleCry
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::~CDOTA_Modifier_LoneDruid_TrueForm_BattleCry(
        CDOTA_Modifier_LoneDruid_TrueForm_BattleCry *const this)
{
  this->_vptr_CDOTA_Buff = &off_4528090;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::GetEffectName  (line 2300, @0x0000000002b93820, libserver.so)
// strings: "particles/units/heroes/hero_lone_druid/lone_druid_battle_cry_overhead.vpcf"
const char *__fastcall CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::GetEffectName(
        CDOTA_Modifier_LoneDruid_TrueForm_BattleCry *const this)
{
  return "particles/units/heroes/hero_lone_druid/lone_druid_battle_cry_overhead.vpcf";
}


// CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::GetEffectAttachType  (line 2301, @0x0000000002b93830, libserver.so)
int __fastcall CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::GetEffectAttachType(
        CDOTA_Modifier_LoneDruid_TrueForm_BattleCry *const this)
{
  return 7;
}


// CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::ShouldUseOverheadOffset  (line 2302, @0x0000000002b93840, libserver.so)
bool __fastcall CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::ShouldUseOverheadOffset(
        CDOTA_Modifier_LoneDruid_TrueForm_BattleCry *const this)
{
  return 1;
}


// CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::DeclareFunctions  (line 2318, @0x0000000002b366e0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::DeclareFunctions(
        CDOTA_Modifier_LoneDruid_TrueForm_BattleCry *const this)
{
  this->m_Functions[0].__pfn = (&stru_10 + 697);
  this->m_Functions[0].__delta = 0;
  this->m_Functions[45].__pfn = (&stru_10 + 705);
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::OnCreated  (line 2327, @0x0000000002b6f800, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_lone_druid/lone_druid_battle_cry_buff.vpcf", "attach_attack1", "attach_attack2", "attach_hitloc"
void __fastcall CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::OnCreated(
        CDOTA_Modifier_LoneDruid_TrueForm_BattleCry *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v9; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v11; // rax
  const Vector *v12; // r13
  CDOTA_BaseNPC *v13; // r14
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // r13
  CDOTA_BaseNPC *v17; // r14
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // r13
  CDOTA_ParticleManager *v20; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_armor = 0;
    goto LABEL_4;
  }
  this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_armor", -1, 0);
LABEL_4:
  Parent = CDOTA_Buff::GetParent(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_lone_druid/lone_druid_battle_cry_buff.vpcf",
                         2,
                         Parent,
                         0);
  v7 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  v9 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(
    ParticleManager,
    BuffParticleEffect,
    0,
    v9,
    5,
    "attach_attack1",
    *AbsOrigin,
    1);
  v11 = CDOTA_Buff::GetParent(this);
  v12 = CBaseEntity::GetAbsOrigin(v11);
  v13 = CDOTA_Buff::GetParent(this);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v14, BuffParticleEffect, 1, v13, 5, "attach_attack2", *v12, 1);
  v15 = CDOTA_Buff::GetParent(this);
  v16 = CBaseEntity::GetAbsOrigin(v15);
  v17 = CDOTA_Buff::GetParent(this);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v18, BuffParticleEffect, 2, v17, 5, "attach_hitloc", *v16, 1);
  v19 = CDOTA_Buff::GetParent(this);
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v20, BuffParticleEffect, 3, v19, 1, 0, vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::OnRefresh  (line 2342, @0x0000000002b6cd20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::OnRefresh(
        CDOTA_Modifier_LoneDruid_TrueForm_BattleCry *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_armor", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_armor = 0;
}


// CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::GetModifierPreAttack_BonusDamage  (line 2350, @0x0000000002b36720, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_LoneDruid_TrueForm_BattleCry *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::GetModifierPhysicalArmorBonus  (line 2357, @0x0000000002b36740, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_TrueForm_BattleCry::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_LoneDruid_TrueForm_BattleCry *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_LoneDruid_SavageRoar::~CDOTA_Ability_LoneDruid_SavageRoar  (line 2370, @0x0000000002ba2130, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_LoneDruid_SavageRoar::~CDOTA_Ability_LoneDruid_SavageRoar(
        CDOTA_Ability_LoneDruid_SavageRoar *const this)
{
  this->_vptr_IHandleEntity = &off_4528410;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_LoneDruid_SavageRoar::~CDOTA_Ability_LoneDruid_SavageRoar  (line 2370, @0x0000000002ba2150, libserver.so)  // inlines: ~CDOTA_Ability_LoneDruid_SavageRoar
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_LoneDruid_SavageRoar::~CDOTA_Ability_LoneDruid_SavageRoar(
        CDOTA_Ability_LoneDruid_SavageRoar *const this)
{
  this->_vptr_IHandleEntity = &off_4528410;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_LoneDruid_SavageRoar::Schema_DynamicBinding  (line 2372, @0x0000000002b93850, libserver.so)
// globals: CDOTA_Ability_LoneDruid_SavageRoar::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_SavageRoar::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_SavageRoar *const this)
{
  return CDOTA_Ability_LoneDruid_SavageRoar::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2372, @0x0000000002b93860, libserver.so)
// globals: CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::DestructInstance  (line 2372, @0x0000000002b93870, libserver.so)  // inlines: Destruct<CDOTA_Ability_LoneDruid_SavageRoar>
void __fastcall CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::FreeInstance  (line 2372, @0x0000000002b93890, libserver.so)
void __fastcall CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::CanAllocate  (line 2372, @0x0000000002b938b0, libserver.so)
bool __fastcall CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2372, @0x0000000002b938c0, libserver.so)
// globals: CDOTA_Ability_LoneDruid_SavageRoar::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_SavageRoar::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::AllocateInstance  (line 2372, @0x0000000002b98d20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::ConstructInstance  (line 2372, @0x0000000002b9dc20, libserver.so)  // inlines: CDOTA_Ability_LoneDruid_SavageRoar, Construct<CDOTA_Ability_LoneDruid_SavageRoar>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4528410;
  }
  return p;
}


// CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2372, @0x0000000002babce0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2372, @0x0000000002babd00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInternal  (line 2372, @0x0000000002bcd1c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "lone_druid_savage_roar", "CDOTA_Ability_LoneDruid_SavageRoar"
// globals: `guard variable for'CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClass, CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClass, __dso_handle, CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClassInfo, CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClassInfo
CEntityClass *__cdecl CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClass);
    CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClass._vptr_CEntityClass = off_4528390;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClass);
    __cxa_atexit(
      CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_LoneDruid_SavageRoarClass != 0 )
    return &CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClass;
  if ( `guard variable for'CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClassInfo,
      "CDOTA_Ability_LoneDruid_SavageRoar",
      "lone_druid_savage_roar",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClassInfo);
  }
  CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClass.m_pClassInfo = &CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClassInfo;
  CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClass.m_pBaseClassInfo = CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_LoneDruid_SavageRoarClass = &CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClass;
  CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClassInfo.m_pClass = &CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClass;
  CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_LoneDruid_SavageRoarClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_LoneDruid_SavageRoar::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoarClass;
}


// CDOTA_Ability_LoneDruid_SavageRoar::YouForgotToImplementOrDeclareServerClass  (line 2392, @0x0000000002b36760, libserver.so)
int __fastcall CDOTA_Ability_LoneDruid_SavageRoar::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_LoneDruid_SavageRoar *const this)
{
  return 0;
}


// CDOTA_Ability_LoneDruid_SavageRoar::GetServerClass  (line 2392, @0x0000000002b4c760, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_LoneDruid_SavageRoar::GetServerClass(
        CDOTA_Ability_LoneDruid_SavageRoar *const this)
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


// CDOTA_Ability_LoneDruid_SavageRoar::GetCooldown  (line 2403, @0x0000000002b6ae00, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_lone_druid_4"
float __fastcall CDOTA_Ability_LoneDruid_SavageRoar::GetCooldown(
        CDOTA_Ability_LoneDruid_SavageRoar *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_lone_druid_4", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_LoneDruid_SavageRoar::Roar  (line 2418, @0x0000000002b8a760, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, GrowMemory, IndexToIdentity, IsOwnedByAnyPlayer, IsValid, LookupEntity, Purge, RemoveAll, Reset, ToDOTABaseNPC, Vector, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat (27 total)
// strings: "Hero_LoneDruid.SavageRoar.Cast", "particles/units/heroes/hero_lone_druid/lone_druid_savage_roar.vpcf", "attach_mouth", "modifier_lone_druid_savage_roar", "modifier_legion_commander_duel"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_LoneDruid_SavageRoar::Roar(
        CDOTA_Ability_LoneDruid_SavageRoar *const this,
        CDOTA_BaseNPC *pCaster)
{
  int LevelSpecialValue; // r12d
  int AbilityParticleEffect; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  __m128i v7; // xmm2
  float v8; // r12d
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  const Vector *AbsOrigin; // rax
  float v12; // xmm1_4
  __int64 v13; // rbx
  CHandle<CBaseEntity> *v14; // rdx
  uint32 m_Index; // eax
  __int16 v16; // cx
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTA_Buff *ModifierByName; // rax
  vec_t y; // xmm0_4
  int m_Size; // eax
  CEntityIndex *v23; // rax
  CEntityIndex v24; // [rsp+20h] [rbp-D0h]
  int v25; // [rsp+24h] [rbp-CCh]
  CDOTA_BaseNPC *pFountain; // [rsp+28h] [rbp-C8h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-B0h] BYREF
  CUnitOrders moveOrder; // [rsp+60h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+A0h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+B8h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  CDOTA_BaseNPC::UnitEmitSound(pCaster, "Hero_LoneDruid.SavageRoar.Cast", 0.0, 0, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                            this,
                            "particles/units/heroes/hero_lone_druid/lone_druid_savage_roar.vpcf",
                            1,
                            pCaster,
                            0);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(
    ParticleManager,
    AbilityParticleEffect,
    1,
    pCaster,
    5,
    "attach_mouth",
    vec3_invalid,
    1);
  *v7.m128i_i32 = LevelSpecialValue;
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  moveOrder.m_nIssuerPlayerIndex = v7.m128i_i32[0];
  moveOrder.m_nOrderSequenceNumber = v7.m128i_i32[0];
  moveOrder.m_nUnits.m_Size = v7.m128i_i32[0];
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v9,
    AbilityParticleEffect,
    2,
    *&moveOrder.m_nIssuerPlayerIndex,
    *&moveOrder.m_nUnits.m_Size);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v10, AbilityParticleEffect);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pCaster);
  FindUnitsInRadius(pCaster->m_iTeamNum.m_Value, AbsOrigin, pCaster, v8, &entities, 2, 3, 0, 0, 0);
  KeyValues::KeyValues(&kv, "modifier_lone_druid_savage_roar");
  KeyValues::SetFloat(&kv, "duration", v12);
  if ( entities.m_Size > 0 )
  {
    v13 = 0;
    do
    {
      while ( 1 )
      {
        v14 = &entities.m_Memory.m_pMemory[v13];
        m_Index = v14->m_Index;
        if ( v14->m_Index + 2 > 1 )
        {
          v16 = v14->m_Index;
          v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v14->m_Index) >> 9) & 0x3F];
          if ( v17 != 0 )
          {
            v18 = &v17[v16 & 0x1FF];
            if ( v18 != 0 && m_Index == v18->m_EHandle.m_Index )
            {
              m_pInstance = v18->m_pInstance;
              if ( v18->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && (m_pInstance[61].m_hPrivateScope.m_hScope != 0
                 || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0)
                && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_legion_commander_duel", 0) == 0 )
              {
                break;
              }
            }
          }
        }
        if ( entities.m_Size <= ++v13 )
          goto LABEL_21;
      }
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_lone_druid_savage_roar", 0);
      if ( ModifierByName != 0 )
        CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
      pFountain = CDOTAGamerules::GetFountain(g_pGameRules, HIBYTE(m_pInstance[7].m_CScriptComponent));
      if ( pFountain != 0 )
      {
        moveOrder.m_bQueue = 0;
        moveOrder.m_nUnits.m_Size = 0;
        memset(&moveOrder.m_nUnits.m_Memory, 0, 28);
        moveOrder.m_nOrderSequenceNumber = 0;
        moveOrder.m_vPosition.x = vec3_origin.x;
        y = vec3_origin.y;
        moveOrder.m_nIssuerPlayerIndex = -1;
        moveOrder.m_vPosition.y = y;
        moveOrder.m_vPosition.z = vec3_origin.z;
        v24.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
        m_Size = moveOrder.m_nUnits.m_Size;
        v25 = moveOrder.m_nUnits.m_Size;
        if ( moveOrder.m_nUnits.m_Size == moveOrder.m_nUnits.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CEntityIndex,int>::Grow(&moveOrder.m_nUnits.m_Memory, 1);
          m_Size = moveOrder.m_nUnits.m_Size;
        }
        moveOrder.m_nUnits.m_Size = m_Size + 1;
        v23 = &moveOrder.m_nUnits.m_Memory.m_pMemory[v25];
        if ( v23 != 0 )
          v23->m_Data = v24.m_Data;
        moveOrder.m_nOrderType = 2;
        moveOrder.m_nTargetIndex = CEntityInstance::GetEntityIndex(pFountain);
        DOTA_ExecuteOrders(&moveOrder, 0, 1, 1);
        moveOrder.m_nUnits.m_Size = 0;
        if ( (moveOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CEntityIndex,int>::Purge(&moveOrder.m_nUnits.m_Memory);
          if ( (moveOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CEntityIndex,int>::Purge(&moveOrder.m_nUnits.m_Memory);
        }
      }
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, pCaster, this, "modifier_lone_druid_savage_roar", &kv, 0);
      ++v13;
    }
    while ( entities.m_Size > v13 );
  }
LABEL_21:
  KeyValues::~KeyValues(&kv);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
}


// CDOTA_Ability_LoneDruid_SavageRoar::OnSpellStart  (line 2477, @0x0000000002b476a0, libserver.so)  // inlines: Get, GetBear, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "lone_druid_spirit_bear", "lone_druid_savage_roar_bear"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_LoneDruid_SavageRoar::OnSpellStart(CDOTA_Ability_LoneDruid_SavageRoar *const this)
{
  void (__fastcall *v2)(CDOTA_Ability_LoneDruid_SavageRoar *const, CDOTA_BaseNPC *); // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int vptr_IHandleEntity_high; // edx
  unsigned __int16 v7; // cx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  CDOTABaseAbility *v10; // rbx
  void (__fastcall *v11)(CDOTABaseAbility *); // r12

  v2 = *(this->_vptr_IHandleEntity + 333);
  Caster = CDOTABaseAbility::GetCaster(this);
  v2(this, Caster);
  v4 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v4, "lone_druid_spirit_bear", 0);
  if ( AbilityByName != 0 )
  {
    vptr_IHandleEntity_high = HIDWORD(AbilityByName[1]._vptr_IHandleEntity);
    if ( (vptr_IHandleEntity_high + 2) > 1 )
    {
      v7 = WORD2(AbilityByName[1]._vptr_IHandleEntity);
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v7 >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[v7 & 0x1FF];
        if ( v9 != 0 && vptr_IHandleEntity_high == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
        {
          v10 = CDOTA_BaseNPC::FindAbilityByName(v9->m_pInstance, "lone_druid_savage_roar_bear", 0);
          if ( v10 != 0 )
          {
            v11 = *(v10->_vptr_IHandleEntity + 241);
            (*(v10->_vptr_IHandleEntity + 242))(v10, 0xFFFFFFFFLL);
            v11(v10);
          }
        }
      }
    }
  }
}


// CDOTA_Ability_LoneDruid_SavageRoar::OnUpgrade  (line 2502, @0x0000000002b46170, libserver.so)  // inlines: Get, GetBear, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::OnUpgrade, CDOTABaseAbility::SetHidden, CDOTABaseAbility::UpgradeAbility
// strings: "lone_druid_spirit_bear", "lone_druid_savage_roar_bear"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_LoneDruid_SavageRoar::OnUpgrade(CDOTA_Ability_LoneDruid_SavageRoar *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int vptr_IHandleEntity_high; // edx
  unsigned __int16 v5; // cx
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  CDOTABaseAbility *v8; // r12

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "lone_druid_spirit_bear", 0);
  if ( AbilityByName != 0
    && ((vptr_IHandleEntity_high = HIDWORD(AbilityByName[1]._vptr_IHandleEntity)) + 2) > 1
    && (v5 = WORD2(AbilityByName[1]._vptr_IHandleEntity),
        (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F]) != 0)
    && (v7 = &v6[v5 & 0x1FF]) != 0
    && vptr_IHandleEntity_high == v7->m_EHandle.m_Index
    && v7->m_pInstance != 0
    && (v8 = CDOTA_BaseNPC::FindAbilityByName(v7->m_pInstance, "lone_druid_savage_roar_bear", 0)) != 0
    && v8->m_iLevel.m_Value < this->m_iLevel.m_Value )
  {
    CDOTABaseAbility::SetHidden(v8, 0);
    CDOTABaseAbility::UpgradeAbility(v8, 0);
    CDOTABaseAbility::OnUpgrade(this);
  }
  else
  {
    CDOTABaseAbility::OnUpgrade(this);
  }
}


// CDOTA_Ability_LoneDruid_SavageRoar_Bear::~CDOTA_Ability_LoneDruid_SavageRoar_Bear  (line 2531, @0x0000000002ba2180, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_LoneDruid_SavageRoar_Bear::~CDOTA_Ability_LoneDruid_SavageRoar_Bear(
        CDOTA_Ability_LoneDruid_SavageRoar_Bear *const this)
{
  this->_vptr_IHandleEntity = &off_4528F10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_LoneDruid_SavageRoar_Bear::~CDOTA_Ability_LoneDruid_SavageRoar_Bear  (line 2531, @0x0000000002ba21a0, libserver.so)  // inlines: ~CDOTA_Ability_LoneDruid_SavageRoar_Bear
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_LoneDruid_SavageRoar_Bear::~CDOTA_Ability_LoneDruid_SavageRoar_Bear(
        CDOTA_Ability_LoneDruid_SavageRoar_Bear *const this)
{
  this->_vptr_IHandleEntity = &off_4528F10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_LoneDruid_SavageRoar_Bear::Schema_DynamicBinding  (line 2533, @0x0000000002b938d0, libserver.so)
// globals: CDOTA_Ability_LoneDruid_SavageRoar_Bear::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_SavageRoar_Bear::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_SavageRoar_Bear *const this)
{
  return CDOTA_Ability_LoneDruid_SavageRoar_Bear::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2533, @0x0000000002b938e0, libserver.so)
// globals: CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::DestructInstance  (line 2533, @0x0000000002b938f0, libserver.so)  // inlines: Destruct<CDOTA_Ability_LoneDruid_SavageRoar_Bear>
void __fastcall CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::FreeInstance  (line 2533, @0x0000000002b93910, libserver.so)
void __fastcall CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::CanAllocate  (line 2533, @0x0000000002b93930, libserver.so)
bool __fastcall CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2533, @0x0000000002b93940, libserver.so)
// globals: CDOTA_Ability_LoneDruid_SavageRoar_Bear::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_LoneDruid_SavageRoar_Bear::s_pSchemaBinding;
}


// CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::AllocateInstance  (line 2533, @0x0000000002b98d60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::ConstructInstance  (line 2533, @0x0000000002b9dc50, libserver.so)  // inlines: CDOTA_Ability_LoneDruid_SavageRoar_Bear, Construct<CDOTA_Ability_LoneDruid_SavageRoar_Bear>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4528F10;
  }
  return p;
}


// CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2533, @0x0000000002babd30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2533, @0x0000000002babd50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInternal  (line 2533, @0x0000000002bcd310, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "lone_druid_savage_roar_bear", "CDOTA_Ability_LoneDruid_SavageRoar_Bear"
// globals: `guard variable for'CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClass, CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClass, __dso_handle, CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClassInfo, CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClassInfo
CEntityClass *__cdecl CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClass);
    CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClass._vptr_CEntityClass = off_4528E90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClass);
    __cxa_atexit(
      CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_LoneDruid_SavageRoar_BearClass != 0 )
    return &CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClass;
  if ( `guard variable for'CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClassInfo,
      "CDOTA_Ability_LoneDruid_SavageRoar_Bear",
      "lone_druid_savage_roar_bear",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClassInfo);
  }
  CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClass.m_pClassInfo = &CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClassInfo;
  CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClass.m_pBaseClassInfo = CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_LoneDruid_SavageRoar_BearClass = &CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClass;
  CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClassInfo.m_pClass = &CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClass;
  CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_LoneDruid_SavageRoar_BearClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_LoneDruid_SavageRoar_BearClass;
}


// CDOTA_Ability_LoneDruid_SavageRoar_Bear::Spawn  (line 2537, @0x0000000002ba2350, libserver.so)
// calls: CDOTABaseAbility::Spawn, CDOTABaseAbility::SetHidden
void __fastcall CDOTA_Ability_LoneDruid_SavageRoar_Bear::Spawn(
        CDOTA_Ability_LoneDruid_SavageRoar_Bear *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility::Spawn(this, pKeyValues);
  CDOTABaseAbility::SetHidden(this, 1);
}


// CDOTA_Ability_LoneDruid_SavageRoar_Bear::YouForgotToImplementOrDeclareServerClass  (line 2558, @0x0000000002b36770, libserver.so)
int __fastcall CDOTA_Ability_LoneDruid_SavageRoar_Bear::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_LoneDruid_SavageRoar_Bear *const this)
{
  return 0;
}


// CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetServerClass  (line 2558, @0x0000000002b4c960, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetServerClass(
        CDOTA_Ability_LoneDruid_SavageRoar_Bear *const this)
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


// CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetCooldown  (line 2566, @0x0000000002b6ae70, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCooldown, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_lone_druid_4"
float __fastcall CDOTA_Ability_LoneDruid_SavageRoar_Bear::GetCooldown(
        CDOTA_Ability_LoneDruid_SavageRoar_Bear *const this,
        int iLevel)
{
  float result; // xmm0_4
  unsigned __int16 v4; // dx
  int v5; // esi
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // rax
  unsigned __int16 v10; // dx
  int v11; // edi
  int v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *v15; // rdi
  CDOTABaseAbility *AbilityByName; // rax
  float flCooldown; // [rsp+Ch] [rbp-24h]

  result = CDOTABaseAbility::GetCooldown(this, iLevel);
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
  v6 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  if ( v6 + 2 > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v7 != 0 )
    {
      v8 = &v7[v5 & 0x1FF];
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          if ( HIDWORD(m_pInstance[11].m_pEntity) == -1 )
          {
            v10 = 0x7FFF;
            v11 = 0x7FFF;
          }
          else
          {
            v10 = WORD2(m_pInstance[11].m_pEntity) & 0x7FFF;
            v11 = v10;
          }
          v12 = (HIDWORD(m_pInstance[11].m_pEntity) >> 15 << 15) | v10 & 0x7FFF;
          if ( (v12 + 2) > 1 )
          {
            v13 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v11 >> 9];
            if ( v13 != 0 )
            {
              v14 = &v13[v11 & 0x1FF];
              if ( v14 != 0 && v12 == v14->m_EHandle.m_Index )
              {
                v15 = v14->m_pInstance;
                if ( v14->m_pInstance != 0 && v15->m_bIsDOTANPC )
                {
                  flCooldown = result;
                  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v15, "special_bonus_unique_lone_druid_4", 0);
                  result = flCooldown;
                  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
                    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// CDOTA_Ability_LoneDruid_SavageRoar_Bear::OnSpellStart  (line 2590, @0x0000000002b43620, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC
// calls: CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetCaster
// strings: "lone_druid_savage_roar"
void __fastcall CDOTA_Ability_LoneDruid_SavageRoar_Bear::OnSpellStart(
        CDOTA_Ability_LoneDruid_SavageRoar_Bear *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rax
  unsigned __int16 v8; // dx
  int v9; // edi
  int v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *v13; // rdi
  CDOTABaseAbility *AbilityByName; // r12
  void (__fastcall *v15)(CDOTABaseAbility *); // r13
  void (__fastcall *v16)(CDOTABaseAbility *, CDOTA_BaseNPC *); // r13
  CDOTA_BaseNPC *Caster; // rax

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  if ( v4 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v3 & 0x1FF];
      if ( v6 != 0 && v4 == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          if ( HIDWORD(m_pInstance[11].m_pEntity) == -1 )
          {
            v8 = 0x7FFF;
            v9 = 0x7FFF;
          }
          else
          {
            v8 = WORD2(m_pInstance[11].m_pEntity) & 0x7FFF;
            v9 = v8;
          }
          v10 = (HIDWORD(m_pInstance[11].m_pEntity) >> 15 << 15) | v8 & 0x7FFF;
          if ( (v10 + 2) > 1 )
          {
            v11 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v9 >> 9];
            if ( v11 != 0 )
            {
              v12 = &v11[v9 & 0x1FF];
              if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
              {
                v13 = v12->m_pInstance;
                if ( v12->m_pInstance != 0 && v13->m_bIsDOTANPC )
                {
                  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v13, "lone_druid_savage_roar", 0);
                  if ( AbilityByName != 0 )
                  {
                    v15 = *(AbilityByName->_vptr_IHandleEntity + 241);
                    (*(AbilityByName->_vptr_IHandleEntity + 242))(AbilityByName, 0xFFFFFFFFLL);
                    v15(AbilityByName);
                    v16 = *(AbilityByName->_vptr_IHandleEntity + 333);
                    Caster = CDOTABaseAbility::GetCaster(this);
                    v16(AbilityByName, Caster);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_Ability_Bear_Empty::~CDOTA_Ability_Bear_Empty  (line 2617, @0x0000000002ba21d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Bear_Empty::~CDOTA_Ability_Bear_Empty(CDOTA_Ability_Bear_Empty *const this)
{
  this->_vptr_IHandleEntity = &off_4529A10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Bear_Empty::~CDOTA_Ability_Bear_Empty  (line 2617, @0x0000000002ba21f0, libserver.so)  // inlines: ~CDOTA_Ability_Bear_Empty
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Bear_Empty::~CDOTA_Ability_Bear_Empty(CDOTA_Ability_Bear_Empty *const this)
{
  this->_vptr_IHandleEntity = &off_4529A10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Bear_Empty::Schema_DynamicBinding  (line 2619, @0x0000000002b93950, libserver.so)
// globals: CDOTA_Ability_Bear_Empty::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bear_Empty::Schema_DynamicBinding(
        const CDOTA_Ability_Bear_Empty *const this)
{
  return CDOTA_Ability_Bear_Empty::s_pSchemaBinding;
}


// CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2619, @0x0000000002b93960, libserver.so)
// globals: CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::DestructInstance  (line 2619, @0x0000000002b93970, libserver.so)  // inlines: Destruct<CDOTA_Ability_Bear_Empty>
void __fastcall CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::FreeInstance  (line 2619, @0x0000000002b93990, libserver.so)
void __fastcall CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::CanAllocate  (line 2619, @0x0000000002b939b0, libserver.so)
bool __fastcall CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2619, @0x0000000002b939c0, libserver.so)
// globals: CDOTA_Ability_Bear_Empty::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bear_Empty::s_pSchemaBinding;
}


// CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::AllocateInstance  (line 2619, @0x0000000002b98da0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::ConstructInstance  (line 2619, @0x0000000002b9dc80, libserver.so)  // inlines: CDOTA_Ability_Bear_Empty, Construct<CDOTA_Ability_Bear_Empty>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4529A10;
  }
  return p;
}


// CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2619, @0x0000000002babd80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2619, @0x0000000002babda0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Bear_Empty::GetEntityClassInternal  (line 2619, @0x0000000002bcd460, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "bear_empty", "CDOTA_Ability_Bear_Empty"
// globals: `guard variable for'CDOTA_Ability_Bear_Empty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bear_EmptyClass, CDOTA_Ability_Bear_Empty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bear_EmptyClass, __dso_handle, CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Bear_Empty::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bear_EmptyClassInfo, CDOTA_Ability_Bear_Empty::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bear_EmptyClassInfo
CEntityClass *__cdecl CDOTA_Ability_Bear_Empty::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Bear_Empty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bear_EmptyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bear_Empty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bear_EmptyClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Bear_Empty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bear_EmptyClass);
    CDOTA_Ability_Bear_Empty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bear_EmptyClass._vptr_CEntityClass = off_4529990;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bear_Empty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bear_EmptyClass);
    __cxa_atexit(
      CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Bear_Empty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bear_EmptyClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Bear_EmptyClass != 0 )
    return &CDOTA_Ability_Bear_Empty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bear_EmptyClass;
  if ( `guard variable for'CDOTA_Ability_Bear_Empty::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bear_EmptyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bear_Empty::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bear_EmptyClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Bear_Empty::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bear_EmptyClassInfo,
      "CDOTA_Ability_Bear_Empty",
      "bear_empty",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bear_Empty::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bear_EmptyClassInfo);
  }
  CDOTA_Ability_Bear_Empty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bear_EmptyClass.m_pClassInfo = &CDOTA_Ability_Bear_Empty::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bear_EmptyClassInfo;
  CDOTA_Ability_Bear_Empty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bear_EmptyClass.m_pBaseClassInfo = CDOTA_Ability_Bear_Empty::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bear_EmptyClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Bear_EmptyClass = &CDOTA_Ability_Bear_Empty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bear_EmptyClass;
  CDOTA_Ability_Bear_Empty::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bear_EmptyClassInfo.m_pClass = &CDOTA_Ability_Bear_Empty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bear_EmptyClass;
  CDOTA_Ability_Bear_Empty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bear_EmptyClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Bear_EmptyClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Bear_Empty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bear_EmptyClass;
}


// CDOTA_Modifier_LoneDruid_SavageRoar::~CDOTA_Modifier_LoneDruid_SavageRoar  (line 2628, @0x0000000002b993a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_LoneDruid_SavageRoar::~CDOTA_Modifier_LoneDruid_SavageRoar(
        CDOTA_Modifier_LoneDruid_SavageRoar *const this)
{
  this->_vptr_CDOTA_Buff = &off_452A4D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_LoneDruid_SavageRoar::~CDOTA_Modifier_LoneDruid_SavageRoar  (line 2628, @0x0000000002b993c0, libserver.so)  // inlines: ~CDOTA_Modifier_LoneDruid_SavageRoar
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_LoneDruid_SavageRoar::~CDOTA_Modifier_LoneDruid_SavageRoar(
        CDOTA_Modifier_LoneDruid_SavageRoar *const this)
{
  this->_vptr_CDOTA_Buff = &off_452A4D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_LoneDruid_SavageRoar::IsDebuff  (line 2633, @0x0000000002b939d0, libserver.so)
bool __fastcall CDOTA_Modifier_LoneDruid_SavageRoar::IsDebuff(CDOTA_Modifier_LoneDruid_SavageRoar *const this)
{
  return 1;
}


// CDOTA_Modifier_LoneDruid_SavageRoar::GetEffectName  (line 2639, @0x0000000002b939e0, libserver.so)
// strings: "particles/units/heroes/hero_lone_druid/lone_druid_savage_roar_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_LoneDruid_SavageRoar::GetEffectName(
        CDOTA_Modifier_LoneDruid_SavageRoar *const this)
{
  return "particles/units/heroes/hero_lone_druid/lone_druid_savage_roar_debuff.vpcf";
}


// CDOTA_Modifier_LoneDruid_SavageRoar::GetStatusEffectName  (line 2640, @0x0000000002b939f0, libserver.so)
// strings: "particles/status_fx/status_effect_lone_druid_savage_roar.vpcf"
const char *__fastcall CDOTA_Modifier_LoneDruid_SavageRoar::GetStatusEffectName(
        CDOTA_Modifier_LoneDruid_SavageRoar *const this)
{
  return "particles/status_fx/status_effect_lone_druid_savage_roar.vpcf";
}


// CDOTA_Modifier_LoneDruid_SavageRoar::StatusEffectPriority  (line 2641, @0x0000000002b93a00, libserver.so)
int __fastcall CDOTA_Modifier_LoneDruid_SavageRoar::StatusEffectPriority(
        CDOTA_Modifier_LoneDruid_SavageRoar *const this)
{
  return 35;
}


// CDOTA_Modifier_LoneDruid_SavageRoar::DeclareFunctions  (line 2654, @0x0000000002b36780, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_LoneDruid_SavageRoar::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_LoneDruid_SavageRoar::DeclareFunctions(CDOTA_Modifier_LoneDruid_SavageRoar *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_LoneDruid_SavageRoar::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_LoneDruid_SavageRoar::GetModifierMoveSpeedBonus_Percentage  (line 2661, @0x0000000002b367a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_LoneDruid_SavageRoar::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_LoneDruid_SavageRoar *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_LoneDruid_SavageRoar::OnCreated  (line 2668, @0x0000000002b6c4b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_speed"
void __fastcall CDOTA_Modifier_LoneDruid_SavageRoar::OnCreated(
        CDOTA_Modifier_LoneDruid_SavageRoar *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_speed", -1, 0);
  else
    this->bonus_speed = 0;
}


// CDOTA_Modifier_LoneDruid_SavageRoar::OnDestroy  (line 2678, @0x0000000002b3a420, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::Interrupt
void __fastcall CDOTA_Modifier_LoneDruid_SavageRoar::OnDestroy(CDOTA_Modifier_LoneDruid_SavageRoar *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::Interrupt(Parent);
}


// CDOTA_Modifier_LoneDruid_SavageRoar::CheckState  (line 2687, @0x0000000002b367c0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_LoneDruid_SavageRoar::CheckState(
        CDOTA_Modifier_LoneDruid_SavageRoar *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x8001AuLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFF7FFE5LL;
}


