// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:37
class CDOTA_BaseNPC_Warlock_Golem : public CDOTA_BaseNPC_Creep {
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
	CDOTA_BaseNPC_Warlock_Golem(CDOTA_BaseNPC_Warlock_Golem &);
	CDOTA_BaseNPC_Warlock_Golem(CDOTA_BaseNPC_Warlock_Golem &);
	CDOTA_BaseNPC_Warlock_Golem();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnAlive();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CDOTA_BaseNPC_Warlock_Golem();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[471] OnAlive
	// vtable[6] Precache
	// sizeof = 4512
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:49
class C_CDOTA_BaseNPC_Warlock_Golem_MapInstall {
	C_CDOTA_BaseNPC_Warlock_Golem_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:72
class CDOTA_Unit_Hero_Warlock : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Warlock(CDOTA_Unit_Hero_Warlock &);
	CDOTA_Unit_Hero_Warlock(CDOTA_Unit_Hero_Warlock &);
	CDOTA_Unit_Hero_Warlock();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual const char * GetDeathEffectName();
	virtual ~CDOTA_Unit_Hero_Warlock();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[502] GetDeathEffectName
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:82
class C_CDOTA_Unit_Hero_Warlock_MapInstall {
	C_CDOTA_Unit_Hero_Warlock_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:108
class CDOTA_Modifier_Warlock_FatalBonds : public CDOTA_Buff {
public:

private:

	int damage_share_percentage;  // +0xbc0
	CDOTA_Modifier_Warlock_FatalBonds();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	void AddBondedEntities(CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > *);
	virtual int GetAttributes();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual ~CDOTA_Modifier_Warlock_FatalBonds();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[7] GetAttributes
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:141
class CDOTA_Ability_Warlock_Fatal_Bonds : public CDOTABaseAbility {
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
	CDOTA_Ability_Warlock_Fatal_Bonds(CDOTA_Ability_Warlock_Fatal_Bonds &);
	CDOTA_Ability_Warlock_Fatal_Bonds(CDOTA_Ability_Warlock_Fatal_Bonds &);
	CDOTA_Ability_Warlock_Fatal_Bonds();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual Activity GetGestureBasedActivity();
	virtual ~CDOTA_Ability_Warlock_Fatal_Bonds();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[211] GetGestureBasedActivity
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:318
class CDOTA_Ability_Warlock_Shadow_Word : public CDOTABaseAbility {
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
	CDOTA_Ability_Warlock_Shadow_Word(CDOTA_Ability_Warlock_Shadow_Word &);
	CDOTA_Ability_Warlock_Shadow_Word(CDOTA_Ability_Warlock_Shadow_Word &);
	CDOTA_Ability_Warlock_Shadow_Word();
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
	virtual ~CDOTA_Ability_Warlock_Shadow_Word();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:329
class C_CDOTA_Ability_Warlock_Shadow_Word_MapInstall {
	C_CDOTA_Ability_Warlock_Shadow_Word_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:372
class CDOTA_Modifier_Warlock_Shadow_Word : public CDOTA_Buff {
public:

private:

	float tick_interval;  // +0xba8
	float damage_over_time;  // +0xbac
	CDOTA_Modifier_Warlock_Shadow_Word();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Warlock_Shadow_Word();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[7] GetAttributes
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:464
class CDOTA_Ability_Warlock_Upheaval : public CDOTABaseAbility {
public:

private:

	float aoe;  // +0x39c
	float slow_rate;  // +0x3a0
	float slow_rate_duration;  // +0x3a4
	float duration;  // +0x3a8
	float max_slow;  // +0x3ac
	float m_flCurrentSlow;  // +0x3b0
	int m_nFXIndex;  // +0x3b4

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
	CDOTA_Ability_Warlock_Upheaval(CDOTA_Ability_Warlock_Upheaval &);
	CDOTA_Ability_Warlock_Upheaval(CDOTA_Ability_Warlock_Upheaval &);
	CDOTA_Ability_Warlock_Upheaval();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual void OnChannelFinish(bool);
	virtual void OnChannelThink(float);
	void FindEntities();
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Warlock_Upheaval();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[296] OnChannelThink
	// vtable[321] GetSlowDuration
	// sizeof = 1008
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:506
class C_CDOTA_Ability_Warlock_Upheaval_MapInstall {
	C_CDOTA_Ability_Warlock_Upheaval_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:605
class CDOTA_Modifier_Warlock_Upheaval : public CDOTA_Buff {
public:

private:

	int m_iSlow;  // +0xba8
	CDOTA_Modifier_Warlock_Upheaval();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_Warlock_Upheaval();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[10] AddCustomTransmiterData
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:693
class CDOTA_Ability_Warlock_RainOfChaos : public CDOTABaseAbility {
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
	CDOTA_Ability_Warlock_RainOfChaos(CDOTA_Ability_Warlock_RainOfChaos &);
	CDOTA_Ability_Warlock_RainOfChaos(CDOTA_Ability_Warlock_RainOfChaos &);
	CDOTA_Ability_Warlock_RainOfChaos();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual float GetAOERadius();
	virtual float GetStunDuration();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CDOTA_Ability_Warlock_RainOfChaos();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[333] GetAOERadius
	// vtable[322] GetStunDuration
	// vtable[6] Precache
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:715
class C_CDOTA_Ability_Warlock_RainOfChaos_MapInstall {
	C_CDOTA_Ability_Warlock_RainOfChaos_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:781
class CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker : public CDOTA_Buff {
public:

private:

	float stun_duration;  // +0xba8
	bool bHasScepter;  // +0xbac

	int aoe;  // +0xbb0
	CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:923
class CDOTA_Modifier_Special_Bonus_Unique_Warlock_1 : public CDOTA_Modifier_MagicImmune {
public:

	CDOTA_Modifier_Special_Bonus_Unique_Warlock_1(CDOTA_Modifier_Special_Bonus_Unique_Warlock_1 &);
	CDOTA_Modifier_Special_Bonus_Unique_Warlock_1(const CDOTA_Modifier_Special_Bonus_Unique_Warlock_1 &);
	CDOTA_Modifier_Special_Bonus_Unique_Warlock_1();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int GetAttributes();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Special_Bonus_Unique_Warlock_1();

	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[7] GetAttributes
	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:940
class CDOTA_Modifier_Special_Bonus_Unique_Warlock_2 : public CDOTA_Buff {
public:

private:

	int value;  // +0xba8
	CDOTA_Modifier_Special_Bonus_Unique_Warlock_2();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual int GetAttributes();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Special_Bonus_Unique_Warlock_2();

	// vtable[7] GetAttributes
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:979
class CDOTA_Ability_Warlock_Golem_Flaming_Fists : public CDOTABaseAbility {
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
	CDOTA_Ability_Warlock_Golem_Flaming_Fists(CDOTA_Ability_Warlock_Golem_Flaming_Fists &);
	CDOTA_Ability_Warlock_Golem_Flaming_Fists(CDOTA_Ability_Warlock_Golem_Flaming_Fists &);
	CDOTA_Ability_Warlock_Golem_Flaming_Fists();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Warlock_Golem_Flaming_Fists();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:993
class CDOTA_Modifier_Warlock_Golem_Flaming_Fists : public CDOTA_Buff {
public:

private:

	float damage;  // +0xba8
	int radius;  // +0xbac
	CDOTA_Modifier_Warlock_Golem_Flaming_Fists();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual bool IsHidden();
	ModifierVariant_t OnAttack(const CModifierParams &);
	virtual ~CDOTA_Modifier_Warlock_Golem_Flaming_Fists();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:1076
class CDOTA_Ability_Warlock_Golem_Permanent_Immolation : public CDOTABaseAbility {
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
	CDOTA_Ability_Warlock_Golem_Permanent_Immolation(CDOTA_Ability_Warlock_Golem_Permanent_Immolation &);
	CDOTA_Ability_Warlock_Golem_Permanent_Immolation(CDOTA_Ability_Warlock_Golem_Permanent_Immolation &);
	CDOTA_Ability_Warlock_Golem_Permanent_Immolation();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Warlock_Golem_Permanent_Immolation();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:1089
class CDOTA_Modifier_Warlock_Golem_Permanent_Immolation : public CDOTA_Buff {
public:

private:

	int aura_radius;  // +0xba8
	CDOTA_Modifier_Warlock_Golem_Permanent_Immolation();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Warlock_Golem_Permanent_Immolation();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_warlock.cpp:1124
class CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff : public CDOTA_Buff {
public:

private:

	int aura_damage;  // +0xba8
	CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[7] GetAttributes
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BaseNPC_Warlock_Golem::~CDOTA_BaseNPC_Warlock_Golem  (line 37, @0x0000000002b19a10, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Warlock_Golem::~CDOTA_BaseNPC_Warlock_Golem(CDOTA_BaseNPC_Warlock_Golem *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Warlock_Golem::~CDOTA_BaseNPC_Warlock_Golem  (line 37, @0x0000000002b19a60, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_BaseNPC_Warlock_Golem
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Warlock_Golem::~CDOTA_BaseNPC_Warlock_Golem(CDOTA_BaseNPC_Warlock_Golem *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Warlock_Golem::Schema_DynamicBinding  (line 39, @0x0000000002b14d90, libserver.so)
// globals: CDOTA_BaseNPC_Warlock_Golem::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Warlock_Golem::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Warlock_Golem *const this)
{
  return CDOTA_BaseNPC_Warlock_Golem::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002b14dc0, libserver.so)
// globals: CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002b14dd0, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Warlock_Golem>
void __fastcall CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002b14df0, libserver.so)
void __fastcall CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002b14e10, libserver.so)
bool __fastcall CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002b14e20, libserver.so)
// globals: CDOTA_BaseNPC_Warlock_Golem::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Warlock_Golem::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002b18c70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4512);
  memset(v1, 0, 0x11A0u);
  return v1;
}


// CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002b199c0, libserver.so)  // inlines: CDOTA_BaseNPC_Warlock_Golem, Construct<CDOTA_BaseNPC_Warlock_Golem>
// calls: CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep
CEntityInstance *__fastcall CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep(p);
    *p = &off_444DF70;
    *(p + 236) = &off_444EED0;
    *(p + 257) = &off_444F200;
  }
  return p;
}


// CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002b227c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002b22990, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInternal  (line 39, @0x0000000002b29420, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Creep::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "npc_dota_warlock_golem", "CDOTA_BaseNPC_Warlock_Golem"
// globals: `guard variable for'CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClass, CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClass, __dso_handle, CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClassInfo, CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClass);
    CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClass._vptr_CEntityClass = off_444DEF0;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_Warlock_GolemClass != 0 )
    return &CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClass;
  if ( `guard variable for'CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Creep::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClassInfo,
      "CDOTA_BaseNPC_Warlock_Golem",
      "npc_dota_warlock_golem",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClassInfo);
  }
  CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClass.m_pClassInfo = &CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClassInfo;
  CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClass.m_pBaseClassInfo = CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_Warlock_GolemClass = &CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClass;
  CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClassInfo.m_pClass = &CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClass;
  CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_BaseNPC_Warlock_GolemClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Warlock_Golem::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Warlock_GolemClass;
}


// CDOTA_BaseNPC_Warlock_Golem::YouForgotToImplementOrDeclareServerClass  (line 49, @0x0000000002ae7860, libserver.so)
int __fastcall CDOTA_BaseNPC_Warlock_Golem::YouForgotToImplementOrDeclareServerClass(
        CDOTA_BaseNPC_Warlock_Golem *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Warlock_Golem::GetServerClass  (line 49, @0x0000000002af2d30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Warlock_Golem::GetServerClass(CDOTA_BaseNPC_Warlock_Golem *const this)
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


// CDOTA_BaseNPC_Warlock_Golem::Precache  (line 56, @0x0000000002ae9a80, libserver.so)
// calls: CDOTA_BaseNPC::Precache
void __fastcall CDOTA_BaseNPC_Warlock_Golem::Precache(
        CDOTA_BaseNPC_Warlock_Golem *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC::Precache(this, pContext);
}


// CDOTA_Unit_Hero_Warlock::~CDOTA_Unit_Hero_Warlock  (line 72, @0x0000000002b1da90, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Warlock::~CDOTA_Unit_Hero_Warlock(CDOTA_Unit_Hero_Warlock *const this)
{
  this->_vptr_IHandleEntity = &off_444F2D0;
  this->_vptr_INextBotEventResponder = &off_44502B0;
  this->_vptr_CObstructionObject = &off_44505E0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Warlock::~CDOTA_Unit_Hero_Warlock  (line 72, @0x0000000002b1dad0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Warlock
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Warlock::~CDOTA_Unit_Hero_Warlock(CDOTA_Unit_Hero_Warlock *const this)
{
  this->_vptr_IHandleEntity = &off_444F2D0;
  this->_vptr_INextBotEventResponder = &off_44502B0;
  this->_vptr_CObstructionObject = &off_44505E0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Warlock::Schema_DynamicBinding  (line 74, @0x0000000002b14e30, libserver.so)
// globals: CDOTA_Unit_Hero_Warlock::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Warlock::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Warlock *const this)
{
  return CDOTA_Unit_Hero_Warlock::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 74, @0x0000000002b14e60, libserver.so)
// globals: CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::DestructInstance  (line 74, @0x0000000002b14e70, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Warlock>
void __fastcall CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::FreeInstance  (line 74, @0x0000000002b14e90, libserver.so)
void __fastcall CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::CanAllocate  (line 74, @0x0000000002b14eb0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 74, @0x0000000002b14ec0, libserver.so)
// globals: CDOTA_Unit_Hero_Warlock::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Warlock::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::AllocateInstance  (line 74, @0x0000000002b18cb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::ConstructInstance  (line 74, @0x0000000002b1b2e0, libserver.so)  // inlines: CDOTA_Unit_Hero_Warlock, Construct<CDOTA_Unit_Hero_Warlock>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_444F2D0;
    *(p + 236) = &off_44502B0;
    *(p + 257) = &off_44505E0;
  }
  return p;
}


// CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 74, @0x0000000002b22860, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 74, @0x0000000002b22a80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Warlock::GetEntityClassInternal  (line 74, @0x0000000002b29570, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "npc_dota_hero_warlock", "CDOTA_Unit_Hero_Warlock"
// globals: `guard variable for'CDOTA_Unit_Hero_Warlock::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WarlockClass, CDOTA_Unit_Hero_Warlock::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WarlockClass, __dso_handle, CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Warlock::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WarlockClassInfo, CDOTA_Unit_Hero_Warlock::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WarlockClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Warlock::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Warlock::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WarlockClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Warlock::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WarlockClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Warlock::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WarlockClass);
    CDOTA_Unit_Hero_Warlock::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WarlockClass._vptr_CEntityClass = off_444F250;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Warlock::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WarlockClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Warlock::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WarlockClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_WarlockClass != 0 )
    return &CDOTA_Unit_Hero_Warlock::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WarlockClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Warlock::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WarlockClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Warlock::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WarlockClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Warlock::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WarlockClassInfo,
      "CDOTA_Unit_Hero_Warlock",
      "npc_dota_hero_warlock",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Warlock::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WarlockClassInfo);
  }
  CDOTA_Unit_Hero_Warlock::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WarlockClass.m_pClassInfo = &CDOTA_Unit_Hero_Warlock::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WarlockClassInfo;
  CDOTA_Unit_Hero_Warlock::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WarlockClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Warlock::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WarlockClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_WarlockClass = &CDOTA_Unit_Hero_Warlock::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WarlockClass;
  CDOTA_Unit_Hero_Warlock::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WarlockClassInfo.m_pClass = &CDOTA_Unit_Hero_Warlock::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WarlockClass;
  CDOTA_Unit_Hero_Warlock::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WarlockClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_WarlockClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Warlock::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WarlockClass;
}


// CDOTA_Unit_Hero_Warlock::GetDeathEffectName  (line 79, @0x0000000002b14ed0, libserver.so)
// strings: "particles/units/heroes/hero_warlock/warlock_death.vpcf"
const char *__fastcall CDOTA_Unit_Hero_Warlock::GetDeathEffectName(CDOTA_Unit_Hero_Warlock *const this)
{
  return "particles/units/heroes/hero_warlock/warlock_death.vpcf";
}


// CDOTA_Unit_Hero_Warlock::YouForgotToImplementOrDeclareServerClass  (line 82, @0x0000000002ae7870, libserver.so)
int __fastcall CDOTA_Unit_Hero_Warlock::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Warlock *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Warlock::GetServerClass  (line 82, @0x0000000002af2bb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Warlock::GetServerClass(CDOTA_Unit_Hero_Warlock *const this)
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


// CDOTA_Unit_Hero_Warlock::Precache  (line 89, @0x0000000002ae9a90, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, DOTA_PrecacheUnitByNameSync
// strings: "npc_dota_warlock_golem_1", "npc_dota_warlock_golem_2", "npc_dota_warlock_golem_3", "npc_dota_warlock_golem_scepter_1", "npc_dota_warlock_golem_scepter_2", "npc_dota_warlock_golem_scepter_3"
void __fastcall CDOTA_Unit_Hero_Warlock::Precache(
        CDOTA_Unit_Hero_Warlock *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  DOTA_PrecacheUnitByNameSync("npc_dota_warlock_golem_1", pContext->m_pManifest, -1);
  DOTA_PrecacheUnitByNameSync("npc_dota_warlock_golem_2", pContext->m_pManifest, -1);
  DOTA_PrecacheUnitByNameSync("npc_dota_warlock_golem_3", pContext->m_pManifest, -1);
  DOTA_PrecacheUnitByNameSync("npc_dota_warlock_golem_scepter_1", pContext->m_pManifest, -1);
  DOTA_PrecacheUnitByNameSync("npc_dota_warlock_golem_scepter_2", pContext->m_pManifest, -1);
  DOTA_PrecacheUnitByNameSync("npc_dota_warlock_golem_scepter_3", pContext->m_pManifest, -1);
}


// CDOTA_Modifier_Warlock_FatalBonds::~CDOTA_Modifier_Warlock_FatalBonds  (line 108, @0x0000000002b303e0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Warlock_FatalBonds::~CDOTA_Modifier_Warlock_FatalBonds(
        CDOTA_Modifier_Warlock_FatalBonds *const this)
{
  this->_vptr_CDOTA_Buff = &off_4451170;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_FatalBondsEntities);
  if ( (this->m_FatalBondsEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_FatalBondsEntities.m_Memory),
        (this->m_FatalBondsEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_FatalBondsEntities.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Warlock_FatalBonds::~CDOTA_Modifier_Warlock_FatalBonds  (line 108, @0x0000000002b30990, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Warlock_FatalBonds, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Warlock_FatalBonds::~CDOTA_Modifier_Warlock_FatalBonds(
        CDOTA_Modifier_Warlock_FatalBonds *const this)
{
  this->_vptr_CDOTA_Buff = &off_4451170;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_FatalBondsEntities);
  if ( (this->m_FatalBondsEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_FatalBondsEntities.m_Memory);
    if ( (this->m_FatalBondsEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_FatalBondsEntities.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Warlock_FatalBonds::GetAttributes  (line 121, @0x0000000002b14ee0, libserver.so)
int __fastcall CDOTA_Modifier_Warlock_FatalBonds::GetAttributes(CDOTA_Modifier_Warlock_FatalBonds *const this)
{
  return 2;
}


// CDOTA_Modifier_Warlock_FatalBonds::GetEffectName  (line 123, @0x0000000002b14ef0, libserver.so)
// strings: "particles/units/heroes/hero_warlock/warlock_fatal_bonds_icon.vpcf"
const char *__fastcall CDOTA_Modifier_Warlock_FatalBonds::GetEffectName(CDOTA_Modifier_Warlock_FatalBonds *const this)
{
  return "particles/units/heroes/hero_warlock/warlock_fatal_bonds_icon.vpcf";
}


// CDOTA_Modifier_Warlock_FatalBonds::GetEffectAttachType  (line 124, @0x0000000002b14f00, libserver.so)
int __fastcall CDOTA_Modifier_Warlock_FatalBonds::GetEffectAttachType(CDOTA_Modifier_Warlock_FatalBonds *const this)
{
  return 7;
}


// CDOTA_Modifier_Warlock_FatalBonds::ShouldUseOverheadOffset  (line 125, @0x0000000002b14f10, libserver.so)
bool __fastcall CDOTA_Modifier_Warlock_FatalBonds::ShouldUseOverheadOffset(
        CDOTA_Modifier_Warlock_FatalBonds *const this)
{
  return 1;
}


// CDOTA_Ability_Warlock_Fatal_Bonds::~CDOTA_Ability_Warlock_Fatal_Bonds  (line 141, @0x0000000002b1bfb0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Warlock_Fatal_Bonds::~CDOTA_Ability_Warlock_Fatal_Bonds(
        CDOTA_Ability_Warlock_Fatal_Bonds *const this)
{
  this->_vptr_IHandleEntity = &off_44506F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Warlock_Fatal_Bonds::~CDOTA_Ability_Warlock_Fatal_Bonds  (line 141, @0x0000000002b1bfd0, libserver.so)  // inlines: ~CDOTA_Ability_Warlock_Fatal_Bonds
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Warlock_Fatal_Bonds::~CDOTA_Ability_Warlock_Fatal_Bonds(
        CDOTA_Ability_Warlock_Fatal_Bonds *const this)
{
  this->_vptr_IHandleEntity = &off_44506F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Warlock_Fatal_Bonds::Schema_DynamicBinding  (line 143, @0x0000000002b14f20, libserver.so)
// globals: CDOTA_Ability_Warlock_Fatal_Bonds::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Warlock_Fatal_Bonds::Schema_DynamicBinding(
        const CDOTA_Ability_Warlock_Fatal_Bonds *const this)
{
  return CDOTA_Ability_Warlock_Fatal_Bonds::s_pSchemaBinding;
}


// CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 143, @0x0000000002b14f30, libserver.so)
// globals: CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::DestructInstance  (line 143, @0x0000000002b14f40, libserver.so)  // inlines: Destruct<CDOTA_Ability_Warlock_Fatal_Bonds>
void __fastcall CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::FreeInstance  (line 143, @0x0000000002b14f60, libserver.so)
void __fastcall CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::CanAllocate  (line 143, @0x0000000002b14f80, libserver.so)
bool __fastcall CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 143, @0x0000000002b14f90, libserver.so)
// globals: CDOTA_Ability_Warlock_Fatal_Bonds::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Warlock_Fatal_Bonds::s_pSchemaBinding;
}


// CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::AllocateInstance  (line 143, @0x0000000002b18cf0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::ConstructInstance  (line 143, @0x0000000002b1b5b0, libserver.so)  // inlines: CDOTA_Ability_Warlock_Fatal_Bonds, Construct<CDOTA_Ability_Warlock_Fatal_Bonds>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44506F0;
  }
  return p;
}


// CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 143, @0x0000000002b21d20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 143, @0x0000000002b21d40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInternal  (line 143, @0x0000000002b296c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Warlock_Fatal_Bonds"
// globals: `guard variable for'CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClass, CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClass, __dso_handle, CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClassInfo, CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClassInfo
CEntityClass *__cdecl CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClass);
    CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClass._vptr_CEntityClass = off_4450670;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClass);
    __cxa_atexit(
      CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Warlock_Fatal_BondsClass != 0 )
    return &CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClass;
  if ( `guard variable for'CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClassInfo,
      "CDOTA_Ability_Warlock_Fatal_Bonds",
      "warlock_fatal_bonds",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClassInfo);
  }
  CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClass.m_pClassInfo = &CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClassInfo;
  CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClass.m_pBaseClassInfo = CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Warlock_Fatal_BondsClass = &CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClass;
  CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClassInfo.m_pClass = &CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClass;
  CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Warlock_Fatal_BondsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Warlock_Fatal_Bonds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Fatal_BondsClass;
}


// CDOTA_Ability_Warlock_Fatal_Bonds::GetGestureBasedActivity  (line 148, @0x0000000002b14fa0, libserver.so)
Activity __fastcall CDOTA_Ability_Warlock_Fatal_Bonds::GetGestureBasedActivity(
        CDOTA_Ability_Warlock_Fatal_Bonds *const this)
{
  return 1675;
}


// CDOTA_Ability_Warlock_Fatal_Bonds::OnSpellStart  (line 156, @0x0000000002b0fbb0, libserver.so)  // inlines: AddBondedEntities, AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_Modifier_Warlock_FatalBonds*>, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, InState, IndexToIdentity, IsInvulnerable, IsRealHero, IsValid, LookupEntity, Purge, RemoveAll, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, FindUnitsInRadius, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::CopyArray, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager (24 total)
// strings: "modifier_warlock_shadow_word", "particles/units/heroes/hero_warlock/warlock_fatal_bonds_hit.vpcf", "attach_hitloc", "particles/units/heroes/hero_warlock/warlock_fatal_bonds_hit_parent.vpcf", "attach_attack1", "Hero_Warlock.FatalBonds" (7 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Warlock_Fatal_Bonds::OnSpellStart(CDOTA_Ability_Warlock_Fatal_Bonds *const this)
{
  CBaseEntity *CursorTarget; // rax
  __int64 v2; // rax
  float v3; // xmm1_4
  __m128i v4; // xmm0
  float v5; // r12d
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *Caster; // rax
  int LevelSpecialValue; // r15d
  int m_Size; // edx
  __int64 v10; // rbx
  CHandle<CBaseEntity> *v11; // rax
  uint32 m_Index; // esi
  __int16 v13; // cx
  CEntityIdentity *v14; // rax
  CEntityIdentity *v15; // rax
  __int64 v16; // r12
  int i; // ebx
  CDOTA_Modifier_Warlock_FatalBonds *v18; // rdi
  int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r13
  CHandle<CBaseEntity> *v22; // rdx
  uint32 v23; // eax
  __int16 v24; // cx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CEntityInstance *v27; // r12
  int AbilityParticleEffect; // r14d
  const Vector *v29; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v31; // r15
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  int v35; // ebx
  const Vector *v36; // r12
  CDOTA_ParticleManager *v37; // rax
  CDOTA_BaseNPC *v38; // rax
  const Vector *v39; // r12
  CDOTA_BaseNPC *v40; // r13
  CDOTA_ParticleManager *v41; // rax
  CDOTA_ParticleManager *v42; // rax
  CDOTA_BaseNPC *v43; // rax
  CDOTA_BaseNPC *v44; // rax
  CDOTA_BaseNPC_Hero *v45; // rdi
  CDOTA_BaseNPC *v46; // rax
  CDOTA_BaseNPC_Hero *v47; // rdi
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *v49; // rax
  CDOTA_Buff *v50; // rax
  __int64 v51; // r13
  CDOTA_Modifier_Warlock_FatalBonds *v52; // r14
  int v53; // eax
  CDOTA_Modifier_Warlock_FatalBonds **v54; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v56; // cx
  __int64 v57; // r13
  int v58; // eax
  CHandle<CBaseEntity> *v59; // rax
  int iHeroCount; // [rsp+44h] [rbp-DCh]
  CDOTA_BaseNPC *pCacheNPC; // [rsp+58h] [rbp-C8h]
  int v63; // [rsp+60h] [rbp-C0h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > m_FatalBondsEntities; // [rsp+70h] [rbp-B0h] BYREF
  CUtlVector<CDOTA_Modifier_Warlock_FatalBonds*,CUtlMemory<CDOTA_Modifier_Warlock_FatalBonds*,int> > m_FatalBondsModifiers; // [rsp+90h] [rbp-90h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+B0h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+D0h] [rbp-50h] BYREF
  unsigned __int64 v68; // [rsp+E8h] [rbp-38h]

  v68 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  pCacheNPC = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v2 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v2 & 0x100) == 0 && (v2 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(pCacheNPC, this, 1) )
    {
      KeyValues::KeyValues(&kv, "modifier_warlock_shadow_word");
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
      KeyValues::SetFloat(&kv, "duration", v3);
      m_FatalBondsEntities.m_Size = 0;
      m_FatalBondsEntities.m_Memory.m_pMemory = 0;
      m_FatalBondsEntities.m_Memory.m_nAllocationCount = 0;
      m_FatalBondsEntities.m_Memory.m_nGrowSize = 0;
      m_FatalBondsModifiers.m_Size = 0;
      m_FatalBondsModifiers.m_Memory.m_pMemory = 0;
      m_FatalBondsModifiers.m_Memory.m_nAllocationCount = 0;
      m_FatalBondsModifiers.m_Memory.m_nGrowSize = 0;
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      *v4.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "search_aoe", -1, 0);
      v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
      AbsOrigin = CBaseEntity::GetAbsOrigin(pCacheNPC);
      Caster = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, pCacheNPC, v5, &entities, 2, 19, 384, 1, 0);
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "count", -1, 0);
      m_Size = entities.m_Size;
      v10 = 0;
      iHeroCount = 0;
      while ( m_Size != 0 && v10 < LevelSpecialValue && v10 < m_Size )
      {
        v11 = &entities.m_Memory.m_pMemory[v10];
        m_Index = v11->m_Index;
        if ( v11->m_Index + 2 > 1 )
        {
          v13 = v11->m_Index;
          v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F];
          if ( v14 != 0 )
          {
            v15 = &v14[v13 & 0x1FF];
            if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
            {
              m_pInstance = v15->m_pInstance;
              if ( v15->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
              {
                v49 = CDOTABaseAbility::GetCaster(this);
                v50 = CDOTA_BaseNPC::AddNewModifier(m_pInstance, v49, this, "modifier_warlock_fatal_bonds", &kv, 0);
                v51 = m_FatalBondsModifiers.m_Size;
                v52 = v50;
                v53 = m_FatalBondsModifiers.m_Size;
                if ( m_FatalBondsModifiers.m_Size == m_FatalBondsModifiers.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CDOTA_Modifier_Warlock_FatalBonds *,int>::Grow(&m_FatalBondsModifiers.m_Memory, 1);
                  v53 = m_FatalBondsModifiers.m_Size;
                }
                m_FatalBondsModifiers.m_Size = v53 + 1;
                v54 = &m_FatalBondsModifiers.m_Memory.m_pMemory[v51];
                if ( v54 != 0 )
                  *v54 = v52;
                v63 = -1;
                m_pEntity = m_pInstance->m_pEntity;
                if ( m_pEntity != 0 )
                {
                  v56 = 0x7FFF;
                  if ( m_pEntity->m_EHandle.m_Index != -1 )
                    v56 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                  v63 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v56 & 0x7FFF;
                }
                v57 = m_FatalBondsEntities.m_Size;
                v58 = m_FatalBondsEntities.m_Size;
                if ( m_FatalBondsEntities.m_Size == m_FatalBondsEntities.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&m_FatalBondsEntities.m_Memory, 1);
                  v58 = m_FatalBondsEntities.m_Size;
                }
                m_FatalBondsEntities.m_Size = v58 + 1;
                v59 = &m_FatalBondsEntities.m_Memory.m_pMemory[v57];
                if ( v59 != 0 )
                  v59->m_Index = v63;
                if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 || LOBYTE(m_pInstance[71].m_pEntity) != 0 )
                {
                  m_Size = entities.m_Size;
                }
                else
                {
                  ++iHeroCount;
                  m_Size = entities.m_Size;
                }
              }
            }
          }
        }
        ++v10;
      }
      v16 = 0;
      for ( i = 0; m_FatalBondsModifiers.m_Size > i; ++v16 )
      {
        v18 = m_FatalBondsModifiers.m_Memory.m_pMemory[v16];
        if ( v18 != 0 )
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::CopyArray(
            &v18->m_FatalBondsEntities,
            m_FatalBondsEntities.m_Memory.m_pMemory,
            m_FatalBondsEntities.m_Size);
        ++i;
      }
      if ( iHeroCount > 4 )
      {
        v44 = CDOTABaseAbility::GetCaster(this);
        if ( v44 != 0 && (v44->m_iUnitType & 1) != 0 )
          v45 = v44;
        else
          v45 = 0;
        EconEntity_OnOwnerKillEaterEvent(
          v45,
          0,
          kill_eater_event_t::kKillEaterEventType_Warlock_FiveHeroFatalBonds,
          1,
          INVALID_ITEM_DEF_INDEX);
        v46 = CDOTABaseAbility::GetCaster(this);
        if ( v46 != 0 && (v46->m_iUnitType & 1) != 0 )
          v47 = v46;
        else
          v47 = 0;
        EconEntity_OnOwnerKillEaterEvent(
          v47,
          0,
          kill_eater_event_t::kKillEaterEventType_Warlock_FiveHeroFatalBonds,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
      v19 = m_FatalBondsEntities.m_Size - 1;
      if ( m_FatalBondsEntities.m_Size - 1 >= 0 )
      {
        v20 = 4LL * v19;
        v21 = 4 * (v19 - v19) - 4;
        do
        {
          while ( 1 )
          {
            v22 = &m_FatalBondsEntities.m_Memory.m_pMemory[v20 / 4];
            v23 = m_FatalBondsEntities.m_Memory.m_pMemory[v20 / 4].m_Index;
            if ( v23 + 2 > 1 )
            {
              v24 = v22->m_Index;
              v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v22->m_Index) >> 9) & 0x3F];
              if ( v25 != 0 )
              {
                v26 = &v25[v24 & 0x1FF];
                if ( v26 != 0 && v23 == v26->m_EHandle.m_Index )
                {
                  v27 = v26->m_pInstance;
                  if ( v26->m_pInstance != 0
                    && BYTE3(v27[7]._vptr_IHandleEntity) != 0
                    && pCacheNPC != v27
                    && SLOBYTE(pCacheNPC->m_nUnitState64.m_Value) >= 0
                    && SLOBYTE(v27[58]._vptr_IHandleEntity) >= 0 )
                  {
                    break;
                  }
                }
              }
            }
            v20 -= 4LL;
            if ( v20 == v21 )
              goto LABEL_35;
          }
          AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                    this,
                                    "particles/units/heroes/hero_warlock/warlock_fatal_bonds_hit.vpcf",
                                    2,
                                    0,
                                    0);
          v29 = CBaseEntity::GetAbsOrigin(pCacheNPC);
          ParticleManager = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(
            ParticleManager,
            AbilityParticleEffect,
            0,
            pCacheNPC,
            5,
            "attach_hitloc",
            *v29,
            1);
          v31 = CBaseEntity::GetAbsOrigin(v27);
          v32 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v32, AbilityParticleEffect, 1, v27, 5, "attach_hitloc", *v31, 1);
          v33 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v33, AbilityParticleEffect);
          v20 -= 4LL;
        }
        while ( v20 != v21 );
      }
LABEL_35:
      v34 = CDOTABaseAbility::GetCaster(this);
      v35 = CDOTABaseAbility::CreateAbilityParticleEffect(
              this,
              "particles/units/heroes/hero_warlock/warlock_fatal_bonds_hit_parent.vpcf",
              3,
              v34,
              0);
      v36 = CBaseEntity::GetAbsOrigin(pCacheNPC);
      v37 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v37, v35, 0, pCacheNPC, 5, "attach_hitloc", *v36, 1);
      v38 = CDOTABaseAbility::GetCaster(this);
      v39 = CBaseEntity::GetAbsOrigin(v38);
      v40 = CDOTABaseAbility::GetCaster(this);
      v41 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v41, v35, 1, v40, 5, "attach_attack1", *v39, 1);
      v42 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v42, v35);
      v43 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v43, "Hero_Warlock.FatalBonds", 0.0, 0, 0);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
      m_FatalBondsModifiers.m_Size = 0;
      if ( (m_FatalBondsModifiers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CDOTA_Modifier_Warlock_FatalBonds *,int>::Purge(&m_FatalBondsModifiers.m_Memory);
        if ( (m_FatalBondsModifiers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CDOTA_Modifier_Warlock_FatalBonds *,int>::Purge(&m_FatalBondsModifiers.m_Memory);
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&m_FatalBondsEntities);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Modifier_Warlock_FatalBonds::DeclareFunctions  (line 239, @0x0000000002ae7880, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Warlock_FatalBonds::OnTakeDamage(CModifierParams const&), CDOTA_Modifier_Warlock_FatalBonds::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Warlock_FatalBonds::DeclareFunctions(CDOTA_Modifier_Warlock_FatalBonds *const this)
{
  this->m_Functions[134].__pfn = CDOTA_Modifier_Warlock_FatalBonds::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Warlock_FatalBonds::OnDeath;
}


// CDOTA_Modifier_Warlock_FatalBonds::OnCreated  (line 246, @0x0000000002b09cc0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_share_percentage"
void __fastcall CDOTA_Modifier_Warlock_FatalBonds::OnCreated(
        CDOTA_Modifier_Warlock_FatalBonds *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage_share_percentage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      Ability,
                                      "damage_share_percentage",
                                      -1,
                                      0);
  else
    this->damage_share_percentage = 0;
}


// CDOTA_Modifier_Warlock_FatalBonds::AddBondedEntities  (line 254, @0x0000000002b0cf20, libserver.so)
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::CopyArray
void __fastcall CDOTA_Modifier_Warlock_FatalBonds::AddBondedEntities(
        CDOTA_Modifier_Warlock_FatalBonds *const this,
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pEntities)
{
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::CopyArray(
    &this->m_FatalBondsEntities,
    pEntities->m_Memory.m_pMemory,
    pEntities->m_Size);
}


// CDOTA_Modifier_Warlock_FatalBonds::OnDeath  (line 261, @0x0000000002b0c430, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FindAndRemove
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Warlock_FatalBonds::OnDeath(
        CDOTA_Modifier_Warlock_FatalBonds *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *m_pEntity; // rbx
  __int16 v8; // cx
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_FatalBondsEntities; // r12
  __int16 v10; // cx
  int v11; // eax
  CHandle<CBaseEntity> v12[14]; // [rsp-38h] [rbp-38h] BYREF

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 1uLL;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 )
    return 1uLL;
  v12[0].m_Index = -1;
  m_pEntity = m_pInstance->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v8 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v12[0].m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v8 & 0x7FFF;
  }
  p_m_FatalBondsEntities = &this->m_FatalBondsEntities;
  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&this->m_FatalBondsEntities, v12) != -1 )
  {
    v12[0].m_Index = -1;
    if ( m_pEntity != 0 )
    {
      v10 = 0x7FFF;
      v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v12[0].m_Index) = v10 | v12[0].m_Index & 0x8000;
      v12[0].m_Index = (v11 << 15) | v12[0].m_Index & 0x7FFF;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndRemove(
      p_m_FatalBondsEntities,
      v12);
  }
  return 1uLL;
}


// CDOTA_Modifier_Warlock_FatalBonds::OnTakeDamage  (line 275, @0x0000000002af3330, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, Unit, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetCaster, ApplyDamage, EconEntity_OnOwnerKillEaterEvent, DOTA_EmitSound, CDOTA_Buff::CreateBuffParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt (13 total)
// strings: "modifier_warlock_fatal_bonds", "Hero_Warlock.FatalBondsDamage", "particles/units/heroes/hero_warlock/warlock_fatal_bonds_pulse.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Warlock_FatalBonds::OnTakeDamage(
        CDOTA_Modifier_Warlock_FatalBonds *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *v4; // rbx
  int v6; // eax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r13
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // r15
  CDOTA_BaseNPC *Caster; // rax
  double v16; // xmm0_8
  CDOTA_BaseNPC_Hero *v17; // rsi
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC_Hero *v19; // rdi
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  float flDamage; // [rsp+8h] [rbp-48h]
  const Vector *flDamagea; // [rsp+8h] [rbp-48h]
  int iDamageType; // [rsp+10h] [rbp-40h]
  CDOTA_BaseNPC *iDamageTypea; // [rsp+10h] [rbp-40h]
  const Vector *iDamageTypeb; // [rsp+10h] [rbp-40h]
  CDOTABaseAbility *nFXIndexa; // [rsp+18h] [rbp-38h]
  CDOTA_BaseNPC_Hero *nFXIndex; // [rsp+18h] [rbp-38h]
  int nFXIndexb; // [rsp+18h] [rbp-38h]

  v4 = CEntityHandle::operator CEntityInstance *(&params->hunit);
  if ( CDOTA_Buff::GetParent(this) == v4 && CDOTA_Buff::GetAbility(this) != 0 && (params->nDamageflags & 0x10) == 0 )
  {
    v6 = this->m_FatalBondsEntities.m_Size - 1;
    if ( v6 >= 0 )
    {
      v7 = 4LL * v6;
      v8 = 4 * (v6 - v6) - 4;
      do
      {
        v9 = &this->m_FatalBondsEntities.m_Memory.m_pMemory[v7 / 4];
        m_Index = v9->m_Index;
        if ( v9->m_Index + 2 > 1 )
        {
          v11 = v9->m_Index;
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = &v12[v11 & 0x1FF];
            if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
            {
              m_pInstance = v13->m_pInstance;
              if ( v13->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && CDOTA_Buff::GetParent(this) != m_pInstance
                && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0
                && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_warlock_fatal_bonds", 0) != 0 )
              {
                iDamageType = params->nDamageType;
                flDamage = (this->damage_share_percentage / 100.0) * params->fOriginalDamage;
                nFXIndexa = CDOTA_Buff::GetAbility(this);
                Caster = CDOTA_Buff::GetCaster(this);
                v16 = ApplyDamage(Caster, m_pInstance, nFXIndexa, flDamage, iDamageType, 24);
                if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                  && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                  && LOBYTE(m_pInstance[71].m_pEntity) == 0
                  && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v16) == 0 )
                {
                  v17 = 0;
                  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                    && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
                  {
                    v17 = m_pInstance;
                  }
                  nFXIndex = v17;
                  v18 = CDOTA_Buff::GetCaster(this);
                  if ( v18 != 0 && (v18->m_iUnitType & 1) != 0 )
                    v19 = v18;
                  else
                    v19 = 0;
                  EconEntity_OnOwnerKillEaterEvent(
                    v19,
                    nFXIndex,
                    kill_eater_event_t::kKillEaterEventType_Warlock_FatalBondsKills,
                    1,
                    INVALID_ITEM_DEF_INDEX);
                }
                if ( SLOBYTE(m_pInstance[58]._vptr_IHandleEntity) >= 0
                  && SLOBYTE(CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value) >= 0 )
                {
                  nFXIndexb = CDOTA_Buff::CreateBuffParticleEffect(
                                this,
                                "particles/units/heroes/hero_warlock/warlock_fatal_bonds_pulse.vpcf",
                                2,
                                0,
                                0);
                  Parent = CDOTA_Buff::GetParent(this);
                  flDamagea = CBaseEntity::GetAbsOrigin(Parent);
                  iDamageTypea = CDOTA_Buff::GetParent(this);
                  ParticleManager = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(
                    ParticleManager,
                    nFXIndexb,
                    0,
                    iDamageTypea,
                    5,
                    "attach_hitloc",
                    *flDamagea,
                    1);
                  iDamageTypeb = CBaseEntity::GetAbsOrigin(m_pInstance);
                  v22 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(
                    v22,
                    nFXIndexb,
                    1,
                    m_pInstance,
                    5,
                    "attach_hitloc",
                    *iDamageTypeb,
                    1);
                  v23 = GetParticleManager();
                  CDOTA_ParticleManager::ReleaseParticleIndex(v23, nFXIndexb);
                }
                if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  DOTA_EmitSound(1, "Hero_Warlock.FatalBondsDamage", m_pInstance);
              }
            }
          }
        }
        v7 -= 4LL;
      }
      while ( v7 != v8 );
    }
  }
  return 1uLL;
}


// CDOTA_Ability_Warlock_Shadow_Word::~CDOTA_Ability_Warlock_Shadow_Word  (line 318, @0x0000000002b1c000, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Warlock_Shadow_Word::~CDOTA_Ability_Warlock_Shadow_Word(
        CDOTA_Ability_Warlock_Shadow_Word *const this)
{
  this->_vptr_IHandleEntity = &off_44514D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Warlock_Shadow_Word::~CDOTA_Ability_Warlock_Shadow_Word  (line 318, @0x0000000002b1c020, libserver.so)  // inlines: ~CDOTA_Ability_Warlock_Shadow_Word
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Warlock_Shadow_Word::~CDOTA_Ability_Warlock_Shadow_Word(
        CDOTA_Ability_Warlock_Shadow_Word *const this)
{
  this->_vptr_IHandleEntity = &off_44514D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Warlock_Shadow_Word::Schema_DynamicBinding  (line 320, @0x0000000002b14fb0, libserver.so)
// globals: CDOTA_Ability_Warlock_Shadow_Word::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Warlock_Shadow_Word::Schema_DynamicBinding(
        const CDOTA_Ability_Warlock_Shadow_Word *const this)
{
  return CDOTA_Ability_Warlock_Shadow_Word::s_pSchemaBinding;
}


// CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 320, @0x0000000002b14fc0, libserver.so)
// globals: CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::DestructInstance  (line 320, @0x0000000002b14fd0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Warlock_Shadow_Word>
void __fastcall CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::FreeInstance  (line 320, @0x0000000002b14ff0, libserver.so)
void __fastcall CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::CanAllocate  (line 320, @0x0000000002b15010, libserver.so)
bool __fastcall CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 320, @0x0000000002b15020, libserver.so)
// globals: CDOTA_Ability_Warlock_Shadow_Word::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Warlock_Shadow_Word::s_pSchemaBinding;
}


// CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::AllocateInstance  (line 320, @0x0000000002b18d30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::ConstructInstance  (line 320, @0x0000000002b1b5e0, libserver.so)  // inlines: CDOTA_Ability_Warlock_Shadow_Word, Construct<CDOTA_Ability_Warlock_Shadow_Word>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44514D0;
  }
  return p;
}


// CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 320, @0x0000000002b21d70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 320, @0x0000000002b21d90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInternal  (line 320, @0x0000000002b29810, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Warlock_Shadow_Word"
// globals: `guard variable for'CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClass, CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClass, __dso_handle, CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClassInfo, CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClassInfo
CEntityClass *__cdecl CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClass);
    CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClass._vptr_CEntityClass = off_4451450;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClass);
    __cxa_atexit(
      CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Warlock_Shadow_WordClass != 0 )
    return &CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClass;
  if ( `guard variable for'CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClassInfo,
      "CDOTA_Ability_Warlock_Shadow_Word",
      "warlock_shadow_word",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClassInfo);
  }
  CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClass.m_pClassInfo = &CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClassInfo;
  CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClass.m_pBaseClassInfo = CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Warlock_Shadow_WordClass = &CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClass;
  CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClassInfo.m_pClass = &CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClass;
  CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Warlock_Shadow_WordClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Warlock_Shadow_Word::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Shadow_WordClass;
}


// CDOTA_Ability_Warlock_Shadow_Word::YouForgotToImplementOrDeclareServerClass  (line 329, @0x0000000002ae78c0, libserver.so)
int __fastcall CDOTA_Ability_Warlock_Shadow_Word::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Warlock_Shadow_Word *const this)
{
  return 0;
}


// CDOTA_Ability_Warlock_Shadow_Word::GetServerClass  (line 329, @0x0000000002af2e30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Warlock_Shadow_Word::GetServerClass(
        CDOTA_Ability_Warlock_Shadow_Word *const this)
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


// CDOTA_Ability_Warlock_Shadow_Word::OnSpellStart  (line 338, @0x0000000002b02af0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetTeamNumber, InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_warlock_shadow_word", "Hero_Warlock.ShadowWordCastGood", "Hero_Warlock.ShadowWordCastBad"
void __fastcall CDOTA_Ability_Warlock_Shadow_Word::OnSpellStart(CDOTA_Ability_Warlock_Shadow_Word *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // rbx
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  unsigned __int8 m_Value; // r14
  CDOTA_BaseNPC *v7; // rax
  const char *v8; // rsi
  unsigned __int8 v9; // r13
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && ((BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 2) == 0
     || (v9 = CursorTarget->m_iTeamNum.m_Value) == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value)
    && LOBYTE(v3[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(v3[3].m_vecVelocity.m_Value.x) & 1) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_warlock_shadow_word");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_warlock_shadow_word", &kv, 0);
    m_Value = v3->m_iTeamNum.m_Value;
    v7 = CDOTABaseAbility::GetCaster(this);
    v8 = "Hero_Warlock.ShadowWordCastGood";
    if ( m_Value != v7->m_iTeamNum.m_Value )
      v8 = "Hero_Warlock.ShadowWordCastBad";
    CDOTA_BaseNPC::UnitEmitSound(v3, v8, 0.0, 0, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Warlock_Shadow_Word::GetAbilityDamageToTargetOverInterval  (line 359, @0x0000000002b03c70, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Warlock_Shadow_Word::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Warlock_Shadow_Word *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float fIntervala; // [rsp+0h] [rbp-1Ch]
  float fIntervalb; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1));
    fIntervalb = (*(this->_vptr_IHandleEntity + 247))(this) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Modifier_Warlock_Shadow_Word::~CDOTA_Modifier_Warlock_Shadow_Word  (line 372, @0x0000000002b1ad80, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Warlock_Shadow_Word::~CDOTA_Modifier_Warlock_Shadow_Word(
        CDOTA_Modifier_Warlock_Shadow_Word *const this)
{
  this->_vptr_CDOTA_Buff = &off_4451F90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Warlock_Shadow_Word::~CDOTA_Modifier_Warlock_Shadow_Word  (line 372, @0x0000000002b1ada0, libserver.so)  // inlines: ~CDOTA_Modifier_Warlock_Shadow_Word
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Warlock_Shadow_Word::~CDOTA_Modifier_Warlock_Shadow_Word(
        CDOTA_Modifier_Warlock_Shadow_Word *const this)
{
  this->_vptr_CDOTA_Buff = &off_4451F90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Warlock_Shadow_Word::GetAttributes  (line 381, @0x0000000002b1b230, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Warlock_Shadow_Word::GetAttributes(CDOTA_Modifier_Warlock_Shadow_Word *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_Warlock_Shadow_Word::OnCreated  (line 398, @0x0000000002b046f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, GetTeamNumber
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_warlock/warlock_shadow_word_debuff.vpcf", "particles/units/heroes/hero_warlock/warlock_shadow_word_buff.vpcf"
void __fastcall CDOTA_Modifier_Warlock_Shadow_Word::OnCreated(
        CDOTA_Modifier_Warlock_Shadow_Word *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  CDOTABaseAbility *v6; // rax
  unsigned __int8 m_Value; // r12
  CDOTA_BaseNPC *v8; // rax
  int BuffParticleEffect; // esi
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "tick_interval", -1, 0);
    this->tick_interval = LevelSpecialValue;
  }
  else
  {
    LevelSpecialValue = 0.0;
    this->tick_interval = 0.0;
  }
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v4);
  v6 = CDOTA_Buff::GetAbility(this);
  this->damage_over_time = (*(v6->_vptr_IHandleEntity + 247))(v6);
  m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
  if ( m_Value == CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
  {
    Parent = CDOTA_Buff::GetParent(this);
    BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/units/heroes/hero_warlock/warlock_shadow_word_buff.vpcf",
                           1,
                           Parent,
                           0);
  }
  else
  {
    v8 = CDOTA_Buff::GetParent(this);
    BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/units/heroes/hero_warlock/warlock_shadow_word_debuff.vpcf",
                           1,
                           v8,
                           0);
  }
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Warlock_Shadow_Word::OnIntervalThink  (line 417, @0x0000000002ae95a0, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, CDOTA_BaseNPC::Heal, CBaseEntity::GetHealth, SendOverheadEventMessage
void __fastcall CDOTA_Modifier_Warlock_Shadow_Word::OnIntervalThink(CDOTA_Modifier_Warlock_Shadow_Word *const this)
{
  CDOTABaseAbility *v2; // r13
  CDOTA_BaseNPC *v3; // r12
  CDOTA_BaseNPC *v4; // rax
  float damage_over_time; // r12d
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v8; // rax
  int Health; // r13d
  CDOTA_BaseNPC *v10; // rax
  int v11; // r12d
  CDOTA_BaseNPC *v12; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTAPlayer *v14; // rax
  CDOTA_BaseNPC *v15; // r13
  CDOTA_BaseNPC *v16; // r13
  CDOTA_BaseNPC *v17; // rax
  CDOTAPlayer *v18; // rax
  float v19; // [rsp+Ch] [rbp-24h]

  if ( this->m_iTeam == CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
  {
    damage_over_time = this->damage_over_time;
    Ability = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::Heal(Parent, damage_over_time, Ability, 0, 1);
    if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
    {
      v8 = CDOTA_Buff::GetParent(this);
      Health = CBaseEntity::GetHealth(v8);
      v10 = CDOTA_Buff::GetParent(this);
      if ( Health < (*(v10->_vptr_IHandleEntity + 156))(v10) && CDOTA_Buff::GetCaster(this) != 0 )
      {
        v11 = damage_over_time;
        v12 = CDOTA_Buff::GetParent(this);
        Caster = CDOTA_Buff::GetCaster(this);
        v14 = (*(Caster->_vptr_IHandleEntity + 413))(Caster);
        SendOverheadEventMessage(v14, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, v12, v11, 0);
        v15 = CDOTA_Buff::GetParent(this);
        if ( v15 != CDOTA_Buff::GetCaster(this) )
        {
          v16 = CDOTA_Buff::GetParent(this);
          v17 = CDOTA_Buff::GetParent(this);
          v18 = (*(v17->_vptr_IHandleEntity + 413))(v17);
          SendOverheadEventMessage(v18, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, v16, v11, 0);
        }
      }
    }
  }
  else
  {
    v19 = this->damage_over_time;
    v2 = CDOTA_Buff::GetAbility(this);
    v3 = CDOTA_Buff::GetParent(this);
    v4 = CDOTA_Buff::GetCaster(this);
    ApplyDamage(v4, v3, v2, v19, 2, 0);
  }
}


// CDOTA_Modifier_Warlock_Shadow_Word::OnDestroy  (line 447, @0x0000000002ae78d0, libserver.so)
void __fastcall CDOTA_Modifier_Warlock_Shadow_Word::OnDestroy(CDOTA_Modifier_Warlock_Shadow_Word *const this)
{
  ;
}


// CDOTA_Ability_Warlock_Upheaval::~CDOTA_Ability_Warlock_Upheaval  (line 464, @0x0000000002b1c050, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Warlock_Upheaval::~CDOTA_Ability_Warlock_Upheaval(
        CDOTA_Ability_Warlock_Upheaval *const this)
{
  this->_vptr_IHandleEntity = &off_44522F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Warlock_Upheaval::~CDOTA_Ability_Warlock_Upheaval  (line 464, @0x0000000002b1c070, libserver.so)  // inlines: ~CDOTA_Ability_Warlock_Upheaval
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Warlock_Upheaval::~CDOTA_Ability_Warlock_Upheaval(
        CDOTA_Ability_Warlock_Upheaval *const this)
{
  this->_vptr_IHandleEntity = &off_44522F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Warlock_Upheaval::Schema_DynamicBinding  (line 466, @0x0000000002b15030, libserver.so)
// globals: CDOTA_Ability_Warlock_Upheaval::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Warlock_Upheaval::Schema_DynamicBinding(
        const CDOTA_Ability_Warlock_Upheaval *const this)
{
  return CDOTA_Ability_Warlock_Upheaval::s_pSchemaBinding;
}


// CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 466, @0x0000000002b15040, libserver.so)
// globals: CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::DestructInstance  (line 466, @0x0000000002b15050, libserver.so)  // inlines: Destruct<CDOTA_Ability_Warlock_Upheaval>
void __fastcall CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::FreeInstance  (line 466, @0x0000000002b15070, libserver.so)
void __fastcall CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::CanAllocate  (line 466, @0x0000000002b15090, libserver.so)
bool __fastcall CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 466, @0x0000000002b150a0, libserver.so)
// globals: CDOTA_Ability_Warlock_Upheaval::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Warlock_Upheaval::s_pSchemaBinding;
}


// CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::AllocateInstance  (line 466, @0x0000000002b18d70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1008);
  memset(v1, 0, 0x3F0u);
  return v1;
}


// CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::ConstructInstance  (line 466, @0x0000000002b21350, libserver.so)  // inlines: CDOTA_Ability_Warlock_Upheaval, Construct<CDOTA_Ability_Warlock_Upheaval>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility, CountdownTimer::CountdownTimer, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44522F0;
    CountdownTimer::CountdownTimer((p + 952));
    CountdownTimer::CountdownTimer((p + 976));
    *(p + 250) = 0;
    *(p + 251) = -1;
  }
  return p;
}


// CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 466, @0x0000000002b21dc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 466, @0x0000000002b21de0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Warlock_Upheaval::GetEntityClassInternal  (line 466, @0x0000000002b29960, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Warlock_Upheaval"
// globals: `guard variable for'CDOTA_Ability_Warlock_Upheaval::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClass, CDOTA_Ability_Warlock_Upheaval::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClass, __dso_handle, CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Warlock_Upheaval::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClassInfo, CDOTA_Ability_Warlock_Upheaval::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClassInfo
CEntityClass *__cdecl CDOTA_Ability_Warlock_Upheaval::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Warlock_Upheaval::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Warlock_Upheaval::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Warlock_Upheaval::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClass);
    CDOTA_Ability_Warlock_Upheaval::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClass._vptr_CEntityClass = off_4452270;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Warlock_Upheaval::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClass);
    __cxa_atexit(
      CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Warlock_Upheaval::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Warlock_UpheavalClass != 0 )
    return &CDOTA_Ability_Warlock_Upheaval::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClass;
  if ( `guard variable for'CDOTA_Ability_Warlock_Upheaval::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Warlock_Upheaval::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Warlock_Upheaval::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClassInfo,
      "CDOTA_Ability_Warlock_Upheaval",
      "warlock_upheaval",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Warlock_Upheaval::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClassInfo);
  }
  CDOTA_Ability_Warlock_Upheaval::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClass.m_pClassInfo = &CDOTA_Ability_Warlock_Upheaval::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClassInfo;
  CDOTA_Ability_Warlock_Upheaval::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClass.m_pBaseClassInfo = CDOTA_Ability_Warlock_Upheaval::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Warlock_UpheavalClass = &CDOTA_Ability_Warlock_Upheaval::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClass;
  CDOTA_Ability_Warlock_Upheaval::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClassInfo.m_pClass = &CDOTA_Ability_Warlock_Upheaval::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClass;
  CDOTA_Ability_Warlock_Upheaval::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Warlock_UpheavalClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Warlock_Upheaval::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_UpheavalClass;
}


// CDOTA_Ability_Warlock_Upheaval::YouForgotToImplementOrDeclareServerClass  (line 506, @0x0000000002ae78e0, libserver.so)
int __fastcall CDOTA_Ability_Warlock_Upheaval::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Warlock_Upheaval *const this)
{
  return 0;
}


// CDOTA_Ability_Warlock_Upheaval::GetServerClass  (line 506, @0x0000000002af29b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Warlock_Upheaval::GetServerClass(CDOTA_Ability_Warlock_Upheaval *const this)
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


// CDOTA_Ability_Warlock_Upheaval::OnSpellStart  (line 514, @0x0000000002b03d70, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, NetworkStateChanged, Set, Start, Vector, operator=, operator=<float>
// calls: CDOTABaseAbility::GetCursorPosition, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CountdownTimer::Now, CDOTA_Ability_Warlock_Upheaval::FindEntities, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleFoWProperties, DOTA_EmitSoundLocation
// strings: "slow_rate_duration", "max_slow", "particles/units/heroes/hero_warlock/warlock_upheaval.vpcf", "attach_attack1", "attach_index", "Hero_Warlock.Upheaval"
void __fastcall CDOTA_Ability_Warlock_Upheaval::OnSpellStart(CDOTA_Ability_Warlock_Upheaval *const this)
{
  CountdownTimer *p_m_SlowTimer; // r12
  float LevelSpecialValue; // xmm0_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  int AbilityParticleEffect; // eax
  int v8; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v14; // rax
  int v15; // r13d
  const CBaseAnimating *v16; // r14
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  const Vector *v19; // r12
  CDOTA_BaseNPC *v20; // rax
  int v21; // r13d
  const CBaseAnimating *v22; // r14
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  float flFoWRadiusb; // [rsp+Ch] [rbp-34h]
  float flFoWRadiusa; // [rsp+Ch] [rbp-34h]
  float flFoWRadius; // [rsp+Ch] [rbp-34h]
  double v28; // [rsp+10h] [rbp-30h]

  p_m_SlowTimer = &this->m_SlowTimer;
  this->m_vPosition = CDOTABaseAbility::GetCursorPosition(this);
  this->aoe = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "aoe", -1, 0);
  this->slow_rate_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "slow_rate_duration", -1, 0);
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "max_slow", -1, 0);
  this->max_slow = LevelSpecialValue;
  v4 = LevelSpecialValue / this->slow_rate_duration;
  this->slow_rate = v4;
  this->m_flCurrentSlow = v4;
  v5 = CountdownTimer::Now(p_m_SlowTimer) + 1.0;
  if ( v5 != this->m_SlowTimer.m_timestamp.m_Value )
  {
    flFoWRadius = v5;
    (*(this->m_SlowTimer._vptr_CountdownTimer + 2))(p_m_SlowTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_SlowTimer.m_timestamp.m_Value = flFoWRadius;
  }
  if ( this->m_SlowTimer.m_duration.m_Value != 1.0 )
  {
    (*(this->m_SlowTimer._vptr_CountdownTimer + 2))(p_m_SlowTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_SlowTimer.m_duration.m_Value = 1.0;
  }
  v6 = CountdownTimer::Now(&this->m_timer) + 0.5;
  if ( v6 != this->m_timer.m_timestamp.m_Value )
  {
    flFoWRadiusa = v6;
    (*(this->m_timer._vptr_CountdownTimer + 2))(&this->m_timer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_timer.m_timestamp.m_Value = flFoWRadiusa;
  }
  if ( this->m_timer.m_duration.m_Value != 0.5 )
  {
    (*(this->m_timer._vptr_CountdownTimer + 2))(&this->m_timer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_timer.m_duration.m_Value = 0.5;
  }
  CDOTA_Ability_Warlock_Upheaval::FindEntities(this);
  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                            this,
                            "particles/units/heroes/hero_warlock/warlock_upheaval.vpcf",
                            2,
                            0,
                            0);
  this->m_nFXIndex = AbilityParticleEffect;
  v8 = AbilityParticleEffect;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, v8, 0, *&this->m_vPosition.x, this->m_vPosition.z);
  m_nFXIndex = this->m_nFXIndex;
  *&v28 = LODWORD(this->aoe);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, m_nFXIndex, 1, v28, 0.0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = this->m_nFXIndex;
  v16 = v14;
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v17, v15, 2, v16, 5, "attach_attack1", *AbsOrigin, 1);
  v18 = CDOTABaseAbility::GetCaster(this);
  v19 = CBaseEntity::GetAbsOrigin(v18);
  v20 = CDOTABaseAbility::GetCaster(this);
  v21 = this->m_nFXIndex;
  v22 = v20;
  v23 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v23, v21, 3, v22, 5, "attach_index", *v19, 1);
  LODWORD(v19) = this->m_nFXIndex;
  flFoWRadiusb = this->aoe;
  v24 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v24, v19, 0, -1, flFoWRadiusb);
  this->m_loopingSound = DOTA_EmitSoundLocation(&this->m_vPosition, "Hero_Warlock.Upheaval", 0);
}


// CDOTA_Ability_Warlock_Upheaval::OnChannelThink  (line 546, @0x0000000002afccf0, libserver.so)
// calls: CDOTABaseAbility::OnChannelThink, CDOTA_Ability_Warlock_Upheaval::FindEntities
void __fastcall CDOTA_Ability_Warlock_Upheaval::OnChannelThink(
        CDOTA_Ability_Warlock_Upheaval *const this,
        double a2,
        float flInterval)
{
  CDOTABaseAbility::OnChannelThink(this, a2, flInterval);
  CDOTA_Ability_Warlock_Upheaval::FindEntities(this);
}


// CDOTA_Ability_Warlock_Upheaval::FindEntities  (line 555, @0x0000000002afc9b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsElapsed, IsValid, LookupEntity, NetworkStateChanged, Reset, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=<float>, operator[], ~CUtlVector
// calls: CountdownTimer::Now, CDOTABaseAbility::GetCaster, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CDOTA_Ability_Warlock_Upheaval::OnChannelThink, CDOTA_Ability_Warlock_Upheaval::OnSpellStart
// strings: "modifier_warlock_upheaval"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Warlock_Upheaval::FindEntities(CDOTA_Ability_Warlock_Upheaval *const this)
{
  CountdownTimer *p_m_SlowTimer; // rbx
  float v3; // xmm0_4
  float v4; // xmm0_4
  float aoe; // r15d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // rbx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  float v15; // xmm1_4
  CDOTA_BaseNPC *v16; // rax
  float v17; // [rsp+1Ch] [rbp-74h]
  float v18; // [rsp+1Ch] [rbp-74h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-38h]

  p_m_SlowTimer = &this->m_SlowTimer;
  v21 = __readfsqword(0x28u);
  if ( CountdownTimer::Now(&this->m_SlowTimer) >= this->m_SlowTimer.m_timestamp.m_Value )
  {
    v3 = CountdownTimer::Now(p_m_SlowTimer) + this->m_SlowTimer.m_duration.m_Value;
    if ( v3 != this->m_SlowTimer.m_timestamp.m_Value )
    {
      v18 = v3;
      (*(this->m_SlowTimer._vptr_CountdownTimer + 2))(p_m_SlowTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_SlowTimer.m_timestamp.m_Value = v18;
    }
    this->m_flCurrentSlow = fminf(this->m_flCurrentSlow + this->slow_rate, this->max_slow);
  }
  if ( CountdownTimer::Now(&this->m_timer) >= this->m_timer.m_timestamp.m_Value )
  {
    v4 = CountdownTimer::Now(&this->m_timer) + this->m_timer.m_duration.m_Value;
    if ( v4 != this->m_timer.m_timestamp.m_Value )
    {
      v17 = v4;
      (*(this->m_timer._vptr_CountdownTimer + 2))(&this->m_timer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_timer.m_timestamp.m_Value = v17;
    }
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    aoe = this->aoe;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    Caster = CDOTABaseAbility::GetCaster(this);
    v7 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v7->m_iTeamNum.m_Value, &this->m_vPosition, Caster, aoe, &entities, 2, 19, 0, 0, 0);
    if ( entities.m_Size > 0 )
    {
      v8 = 0;
      do
      {
        while ( 1 )
        {
          v9 = &entities.m_Memory.m_pMemory[v8];
          m_Index = v9->m_Index;
          if ( v9->m_Index + 2 > 1 )
          {
            v11 = v9->m_Index;
            v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
            if ( v12 != 0 )
            {
              v13 = &v12[v11 & 0x1FF];
              if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
              {
                m_pInstance = v13->m_pInstance;
                if ( v13->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                  break;
              }
            }
          }
          if ( entities.m_Size <= ++v8 )
            goto LABEL_19;
        }
        KeyValues::KeyValues(&kv, "modifier_warlock_upheaval");
        KeyValues::SetFloat(&kv, "duration", v15);
        KeyValues::SetInt(&kv, "slow", this->m_flCurrentSlow);
        v16 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v16, this, "modifier_warlock_upheaval", &kv, 0);
        KeyValues::~KeyValues(&kv);
        ++v8;
      }
      while ( entities.m_Size > v8 );
    }
LABEL_19:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Ability_Warlock_Upheaval::OnChannelFinish  (line 587, @0x0000000002af4cb0, libserver.so)  // inlines: InValidate
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CSoundOpGameSystem::StopSoundEvent
void __fastcall CDOTA_Ability_Warlock_Upheaval::OnChannelFinish(
        CDOTA_Ability_Warlock_Upheaval *const this,
        bool bInterrupted)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax

  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_loopingSound);
  this->m_loopingSound.m_nGuid.m_Data = 0;
  this->m_loopingSound.m_hStackHash = -1;
}


// CDOTA_Ability_Warlock_Upheaval::GetSlowDuration  (line 599, @0x0000000002b03d10, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Warlock_Upheaval::GetSlowDuration(CDOTA_Ability_Warlock_Upheaval *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1);
}


// CDOTA_Modifier_Warlock_Upheaval::~CDOTA_Modifier_Warlock_Upheaval  (line 605, @0x0000000002b1ad30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Warlock_Upheaval::~CDOTA_Modifier_Warlock_Upheaval(
        CDOTA_Modifier_Warlock_Upheaval *const this)
{
  this->_vptr_CDOTA_Buff = &off_4452DB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Warlock_Upheaval::~CDOTA_Modifier_Warlock_Upheaval  (line 605, @0x0000000002b1ad50, libserver.so)  // inlines: ~CDOTA_Modifier_Warlock_Upheaval
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Warlock_Upheaval::~CDOTA_Modifier_Warlock_Upheaval(
        CDOTA_Modifier_Warlock_Upheaval *const this)
{
  this->_vptr_CDOTA_Buff = &off_4452DB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Warlock_Upheaval::AddCustomTransmiterData  (line 630, @0x0000000002ae9440, libserver.so)  // inlines: set_damage, set_has_damage
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_Warlock_Upheaval::AddCustomTransmiterData(
        CDOTA_Modifier_Warlock_Upheaval *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int m_iSlow; // eax

  m_iSlow = this->m_iSlow;
  *(entry + 4) |= 0x1000000u;
  *(entry + 35) = m_iSlow;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_Warlock_Upheaval::OnCreated  (line 647, @0x0000000002ae9e50, libserver.so)
// calls: KeyValues::GetInt, CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_warlock/warlock_upheaval_debuff_creep.vpcf", "particles/units/heroes/hero_warlock/warlock_upheaval_debuff.vpcf"
void __fastcall CDOTA_Modifier_Warlock_Upheaval::OnCreated(CDOTA_Modifier_Warlock_Upheaval *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  const char *v4; // rsi
  int BuffParticleEffect; // eax

  this->m_iSlow = KeyValues::GetInt(pKV, "slow", 0);
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    v4 = "particles/units/heroes/hero_warlock/warlock_upheaval_debuff.vpcf";
  }
  else
  {
    Parent = CDOTA_Buff::GetParent(this);
    v4 = "particles/units/heroes/hero_warlock/warlock_upheaval_debuff_creep.vpcf";
  }
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(this, v4, 1, Parent, 0);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Warlock_Upheaval::OnRefresh  (line 666, @0x0000000002ae8730, libserver.so)
// calls: KeyValues::GetInt
void __fastcall CDOTA_Modifier_Warlock_Upheaval::OnRefresh(CDOTA_Modifier_Warlock_Upheaval *const this, KeyValues *pKV)
{
  this->m_iSlow = KeyValues::GetInt(pKV, "slow", 0);
}


// CDOTA_Modifier_Warlock_Upheaval::DeclareFunctions  (line 675, @0x0000000002ae78f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Warlock_Upheaval::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Warlock_Upheaval::DeclareFunctions(CDOTA_Modifier_Warlock_Upheaval *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Warlock_Upheaval::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Warlock_Upheaval::GetModifierMoveSpeedBonus_Percentage  (line 682, @0x0000000002ae7910, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Warlock_Upheaval::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Warlock_Upheaval *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->m_iSlow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Warlock_RainOfChaos::~CDOTA_Ability_Warlock_RainOfChaos  (line 693, @0x0000000002b1c0a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Warlock_RainOfChaos::~CDOTA_Ability_Warlock_RainOfChaos(
        CDOTA_Ability_Warlock_RainOfChaos *const this)
{
  this->_vptr_IHandleEntity = &off_4453110;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Warlock_RainOfChaos::~CDOTA_Ability_Warlock_RainOfChaos  (line 693, @0x0000000002b1c0c0, libserver.so)  // inlines: ~CDOTA_Ability_Warlock_RainOfChaos
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Warlock_RainOfChaos::~CDOTA_Ability_Warlock_RainOfChaos(
        CDOTA_Ability_Warlock_RainOfChaos *const this)
{
  this->_vptr_IHandleEntity = &off_4453110;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Warlock_RainOfChaos::Schema_DynamicBinding  (line 695, @0x0000000002b150b0, libserver.so)
// globals: CDOTA_Ability_Warlock_RainOfChaos::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Warlock_RainOfChaos::Schema_DynamicBinding(
        const CDOTA_Ability_Warlock_RainOfChaos *const this)
{
  return CDOTA_Ability_Warlock_RainOfChaos::s_pSchemaBinding;
}


// CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 695, @0x0000000002b150c0, libserver.so)
// globals: CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::DestructInstance  (line 695, @0x0000000002b150d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Warlock_RainOfChaos>
void __fastcall CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::FreeInstance  (line 695, @0x0000000002b150f0, libserver.so)
void __fastcall CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::CanAllocate  (line 695, @0x0000000002b15110, libserver.so)
bool __fastcall CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 695, @0x0000000002b15120, libserver.so)
// globals: CDOTA_Ability_Warlock_RainOfChaos::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Warlock_RainOfChaos::s_pSchemaBinding;
}


// CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::AllocateInstance  (line 695, @0x0000000002b18db0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::ConstructInstance  (line 695, @0x0000000002b1b610, libserver.so)  // inlines: CDOTA_Ability_Warlock_RainOfChaos, Construct<CDOTA_Ability_Warlock_RainOfChaos>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4453110;
  }
  return p;
}


// CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 695, @0x0000000002b21e10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 695, @0x0000000002b21e30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInternal  (line 695, @0x0000000002b29ab0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "warlock_rain_of_chaos", "CDOTA_Ability_Warlock_RainOfChaos"
// globals: `guard variable for'CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClass, CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClass, __dso_handle, CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClassInfo, CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClassInfo
CEntityClass *__cdecl CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClass);
    CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClass._vptr_CEntityClass = off_4453090;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClass);
    __cxa_atexit(
      CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Warlock_RainOfChaosClass != 0 )
    return &CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClass;
  if ( `guard variable for'CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClassInfo,
      "CDOTA_Ability_Warlock_RainOfChaos",
      "warlock_rain_of_chaos",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClassInfo);
  }
  CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClass.m_pClassInfo = &CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClassInfo;
  CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClass.m_pBaseClassInfo = CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Warlock_RainOfChaosClass = &CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClass;
  CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClassInfo.m_pClass = &CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClass;
  CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Warlock_RainOfChaosClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Warlock_RainOfChaos::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_RainOfChaosClass;
}


// CDOTA_Ability_Warlock_RainOfChaos::GetAOERadius  (line 703, @0x0000000002b31d30, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Warlock_RainOfChaos::GetAOERadius(CDOTA_Ability_Warlock_RainOfChaos *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "aoe", -1, 0);
}


// CDOTA_Ability_Warlock_RainOfChaos::Precache  (line 708, @0x0000000002b1bc60, libserver.so)
// calls: CDOTABaseAbility::Precache
void __fastcall CDOTA_Ability_Warlock_RainOfChaos::Precache(
        CDOTA_Ability_Warlock_RainOfChaos *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTABaseAbility::Precache(this, pContext);
}


// CDOTA_Ability_Warlock_RainOfChaos::YouForgotToImplementOrDeclareServerClass  (line 715, @0x0000000002ae7930, libserver.so)
int __fastcall CDOTA_Ability_Warlock_RainOfChaos::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Warlock_RainOfChaos *const this)
{
  return 0;
}


// CDOTA_Ability_Warlock_RainOfChaos::GetServerClass  (line 715, @0x0000000002af2db0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Warlock_RainOfChaos::GetServerClass(
        CDOTA_Ability_Warlock_RainOfChaos *const this)
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


// CDOTA_Ability_Warlock_RainOfChaos::OnAbilityPhaseStart  (line 724, @0x0000000002ae8a00, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_Warlock.RainOfChaos_buildup"
bool __fastcall CDOTA_Ability_Warlock_RainOfChaos::OnAbilityPhaseStart(CDOTA_Ability_Warlock_RainOfChaos *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_Warlock.RainOfChaos_buildup", 0.0, 0, 0);
  return 1;
}


// CDOTA_Ability_Warlock_RainOfChaos::OnSpellStart  (line 735, @0x0000000002b06420, libserver.so)  // inlines: GetAbilityData, GetLevelSpecialValueFor<int>, GetTeamNumber, SetBool, entindex
// calls: KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, KeyValues::SetInt, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorPosition, Thinker_Create, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl (22 total)
// strings: "modifier_warlock_rain_of_chaos_thinker", "stun_delay", "Hero_Warlock.RainOfChaos", "particles/units/heroes/hero_warlock/warlock_rain_of_chaos_start.vpcf", "particles/units/heroes/hero_warlock/warlock_rain_of_chaos_staff.vpcf", "attach_attack1"
void __fastcall CDOTA_Ability_Warlock_RainOfChaos::OnSpellStart(CDOTA_Ability_Warlock_RainOfChaos *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  int LevelSpecialValue; // r14d
  int m_Value; // r13d
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  int AbilityParticleEffect; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  __m128i v10; // xmm3
  float v11; // r14d
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  int v15; // r13d
  CDOTA_BaseNPC *v16; // r14
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CEntityIndex v20; // eax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *v23; // rax
  float v24; // xmm3_4
  KeyValues kv; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-28h]
  Vector CursorPosition; // 0:kr00_12.12
  Vector v28; // 0:kr14_12.12
  Vector v29; // 0:kr20_12.12

  v26 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_warlock_rain_of_chaos_thinker");
  KeyValues::SetFloat(&kv, "stun_delay", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    KeyValues::SetInt(&kv, "scepter", 1);
  else
    KeyValues::SetInt(&kv, "scepter", 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "aoe", -1, 0);
  m_Value = this->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v6, this, "modifier_warlock_rain_of_chaos_thinker", &kv, CursorPosition, m_Value, 0, 0, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v7, "Hero_Warlock.RainOfChaos", 0.0, 0, 0);
  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                            this,
                            "particles/units/heroes/hero_warlock/warlock_rain_of_chaos_start.vpcf",
                            2,
                            0,
                            0);
  v28 = CDOTABaseAbility::GetCursorPosition(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbilityParticleEffect, 0, *&v28.x, v28.z);
  *v10.m128i_i32 = LevelSpecialValue;
  v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v12, AbilityParticleEffect, 0, -1, v11);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v13, AbilityParticleEffect);
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = CDOTABaseAbility::CreateAbilityParticleEffect(
          this,
          "particles/units/heroes/hero_warlock/warlock_rain_of_chaos_staff.vpcf",
          2,
          v14,
          0);
  v16 = CDOTABaseAbility::GetCaster(this);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v17, v15, 0, v16, 5, "attach_attack1", vec3_invalid, 1);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v18, v15);
  v19 = CDOTABaseAbility::GetCaster(this);
  v20.m_Data = CEntityInstance::GetEntityIndex(v19).m_Data;
  CreateUnitEvent(v20, 0, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v29 = CDOTABaseAbility::GetCursorPosition(this);
  v23 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v23, 0, m_iAbilityID, 0, 0, *&v29.x, v29.z, -1.0, v24);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Warlock_RainOfChaos::GetStunDuration  (line 773, @0x0000000002b03d30, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Warlock_RainOfChaos::GetStunDuration(CDOTA_Ability_Warlock_RainOfChaos *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 1);
}


// CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker::~CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker  (line 781, @0x0000000002b1ace0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker::~CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker(
        CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4453BD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker::~CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker  (line 781, @0x0000000002b1ad00, libserver.so)  // inlines: ~CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker::~CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker(
        CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4453BD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker::IsHidden  (line 789, @0x0000000002b15130, libserver.so)
bool __fastcall CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker::IsHidden(
        CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker::OnCreated  (line 800, @0x0000000002b0af00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetBool, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink, KeyValues::GetInt, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "stun_delay"
void __fastcall CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker::OnCreated(
        CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  float Float; // xmm0_4
  float v6; // xmm1_4
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v8; // rax

  Float = KeyValues::GetFloat(pKV, "stun_delay", v2);
  CDOTA_Buff::StartIntervalThink(this, Float, v6);
  this->bHasScepter = KeyValues::GetInt(pKV, "scepter", 0) != 0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "stun_duration", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
    {
LABEL_3:
      this->aoe = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "aoe", -1, 0);
      return;
    }
  }
  else
  {
    this->stun_duration = 0.0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_3;
  }
  this->aoe = 0;
}


// CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker::OnIntervalThink  (line 812, @0x0000000002b01790, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetInstance, GetTeamNumber, NetworkStateChanged, Set, SetUnitLabelIndex, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*, operator=<int>, operator[], ~CUtlVector
// calls: CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleFoWProperties, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetCaster, CGridNav::DestroyTreesAroundPoint, CDOTA_Buff::GetAbility, V_snprintf, FindUnitsInRadius (29 total)
// strings: "particles/units/heroes/hero_warlock/warlock_rain_of_chaos.vpcf", "npc_dota_warlock_golem_scepter_%d", "modifier_stunned", "golem_duration", "modifier_kill", "special_bonus_unique_warlock_1" (10 total)
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker::OnIntervalThink(
        CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker *const this)
{
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  unsigned int v6; // xmm0_4
  CDOTA_ParticleManager *v7; // rax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v11; // r12d
  CDOTA_BaseNPC *v12; // rax
  float v13; // xmm3_4
  CDOTABaseAbility *Ability; // rax
  __m128i v15; // xmm3
  float v16; // r14d
  CDOTA_BaseNPC *v17; // r13
  CDOTA_BaseNPC *v18; // rax
  const Vector *v19; // r12
  CDOTA_BaseNPC *v20; // rax
  __int64 v21; // r13
  float v22; // xmm1_4
  CDOTABaseAbility *v23; // r15
  CDOTA_BaseNPC *v24; // rax
  CEntityInstance *v25; // rax
  CDOTA_BaseNPC *v26; // r14
  CDOTABaseAbility *v27; // rax
  int m_Value; // r14d
  CDOTABaseAbility *v29; // rax
  CDOTA_BaseNPC *v30; // r13
  CDOTA_BaseNPC *v31; // r12
  CDOTA_BaseNPC *v32; // rax
  const Vector *v33; // rax
  CDOTA_BaseNPC *UnitByName; // r13
  CDOTABaseAbility *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  int v37; // eax
  CDOTABaseAbility *v38; // rax
  float v39; // xmm1_4
  CDOTABaseAbility *v40; // r12
  CDOTA_BaseNPC *v41; // rax
  CDOTA_BaseNPC *v42; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v44; // r12
  CDOTA_BaseNPC *v45; // rax
  CDOTA_BaseNPC *v46; // rax
  CDOTABaseAbility *v47; // rax
  CDOTABaseAbility *v48; // r12
  CDOTA_BaseNPC *v49; // rax
  int i; // r14d
  int j; // r12d
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTA_BaseNPC *v53; // rax
  CDOTA_BaseNPC_Hero *v54; // rdi
  CDOTA_BaseNPC *v55; // rax
  CDOTABaseAbility *v56; // rax
  CDOTA_BaseNPC *v57; // rax
  int v58; // [rsp+34h] [rbp-1CCh]
  int k; // [rsp+40h] [rbp-1C0h]
  int iCount; // [rsp+44h] [rbp-1BCh]
  float flFoWRadius; // [rsp+48h] [rbp-1B8h]
  float flFoWRadiusa; // [rsp+48h] [rbp-1B8h]
  float golem_duration; // [rsp+5Ch] [rbp-1A4h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+60h] [rbp-1A0h] BYREF
  KeyValues kv_0; // [rsp+80h] [rbp-180h] BYREF
  KeyValues kv2; // [rsp+A0h] [rbp-160h] BYREF
  char szUnitName[264]; // [rsp+C0h] [rbp-140h] BYREF
  unsigned __int64 v68; // [rsp+1C8h] [rbp-38h]
  Vector v69; // 0:xmm0_8.8,8:xmm1_4.4

  v68 = __readfsqword(0x28u);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_warlock/warlock_rain_of_chaos.vpcf",
                         2,
                         0,
                         0);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, BuffParticleEffect, 0, *&AbsOrigin->x, AbsOrigin->z);
  *&v6 = this->aoe;
  LODWORD(entities.m_Memory.m_pMemory) = 1065353216;
  *&entities.m_Size = v6 | 0x3F80000000000000LL;
  v7 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v7, BuffParticleEffect, 1, *&entities.m_Size, 1.0);
  flFoWRadius = this->aoe;
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v8, BuffParticleEffect, 0, -1, flFoWRadius);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v9, BuffParticleEffect);
  Caster = CDOTA_Buff::GetCaster(this);
  v11 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  flFoWRadiusa = this->aoe;
  v12 = CDOTA_Buff::GetParent(this);
  v69 = *CBaseEntity::GetAbsOrigin(v12);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v11, v69, flFoWRadiusa, v13);
  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    if ( this->bHasScepter )
    {
      Ability = CDOTA_Buff::GetAbility(this);
      V_snprintf(szUnitName, 260, "npc_dota_warlock_golem_scepter_%d", Ability->m_iLevel.m_Value);
      iCount = 2;
    }
    else
    {
      v56 = CDOTA_Buff::GetAbility(this);
      V_snprintf(szUnitName, 260, "npc_dota_warlock_golem_%d", v56->m_iLevel.m_Value);
      iCount = 1;
    }
    *v15.m128i_i32 = this->aoe;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
    v17 = CDOTA_Buff::GetParent(this);
    v18 = CDOTA_Buff::GetParent(this);
    v19 = CBaseEntity::GetAbsOrigin(v18);
    v20 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v20->m_iTeamNum.m_Value, v19, v17, v16, &entities, 2, 19, 16, 0, 0);
    if ( entities.m_Size > 0 )
    {
      v21 = 0;
      do
      {
        v25 = CEntityHandle::operator CEntityInstance *(&entities.m_Memory.m_pMemory[v21]);
        v26 = v25;
        if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 )
        {
          KeyValues::KeyValues(&kv2, "modifier_stunned");
          KeyValues::SetFloat(&kv2, "duration", v22);
          v23 = CDOTA_Buff::GetAbility(this);
          v24 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v26, v24, v23, "modifier_stunned", &kv2, 0);
          KeyValues::~KeyValues(&kv2);
        }
        ++v21;
      }
      while ( entities.m_Size > v21 );
    }
    k = 1;
    do
    {
      v27 = CDOTA_Buff::GetAbility(this);
      m_Value = CDOTABaseAbility::GetCaster(v27)->m_iTeamNum.m_Value;
      v29 = CDOTA_Buff::GetAbility(this);
      v30 = CDOTABaseAbility::GetCaster(v29);
      v31 = CDOTA_Buff::GetCaster(this);
      v32 = CDOTA_Buff::GetParent(this);
      v33 = CBaseEntity::GetAbsOrigin(v32);
      UnitByName = DOTA_CreateUnitByName(szUnitName, v33, 1, v31, v30, m_Value);
      if ( UnitByName != 0 )
      {
        v35 = CDOTA_Buff::GetAbility(this);
        v36 = CDOTABaseAbility::GetCaster(v35);
        v37 = (*(v36->_vptr_IHandleEntity + 414))(v36);
        CDOTA_BaseNPC::SetControllableByPlayer(UnitByName, v37, 0);
        v58 = k;
        if ( k != UnitByName->m_nUnitLabelIndex.m_Value )
        {
          (*(UnitByName->_vptr_IHandleEntity + 22))(UnitByName, 3417, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          UnitByName->m_nUnitLabelIndex.m_Value = k;
        }
        v38 = CDOTA_Buff::GetAbility(this);
        DotaRetrieveAbilityValue<float>(v38, &golem_duration, "golem_duration");
        KeyValues::KeyValues(&kv_0, "modifier_kill");
        KeyValues::SetFloat(&kv_0, "duration", v39);
        v40 = CDOTA_Buff::GetAbility(this);
        v41 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(UnitByName, v41, v40, "modifier_kill", &kv_0, 0);
        UnitByName->m_iUnitType |= 0x8000u;
        v42 = CDOTA_Buff::GetCaster(this);
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v42, "special_bonus_unique_warlock_1", 0);
        v44 = AbilityByName;
        if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
        {
          KeyValues::KeyValues(&kv2, "modifier_special_bonus_unique_warlock_1");
          v45 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(UnitByName, v45, v44, "modifier_special_bonus_unique_warlock_1", &kv2, 0);
          KeyValues::~KeyValues(&kv2);
        }
        v46 = CDOTA_Buff::GetCaster(this);
        v47 = CDOTA_BaseNPC::FindAbilityByName(v46, "special_bonus_unique_warlock_2", 0);
        v48 = v47;
        if ( v47 != 0 && v47->m_iLevel.m_Value > 0 )
        {
          KeyValues::KeyValues(&kv2, "modifier_special_bonus_unique_warlock_2");
          v49 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(UnitByName, v49, v48, "modifier_special_bonus_unique_warlock_2", &kv2, 0);
          KeyValues::~KeyValues(&kv2);
        }
        for ( i = 0; i < CDOTA_Buff::GetAbility(this)->m_iLevel.m_Value; ++i )
        {
          for ( j = 0; j != 24; ++j )
          {
            AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(UnitByName, j);
            if ( AbilityByIndex != 0 )
              CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
          }
        }
        KeyValues::~KeyValues(&kv_0);
      }
      else
      {
        v58 = k;
      }
      ++k;
    }
    while ( iCount > v58 );
    v53 = CDOTA_Buff::GetCaster(this);
    if ( v53 != 0 && (v53->m_iUnitType & 1) != 0 )
      v54 = v53;
    else
      v54 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v54,
      0,
      kill_eater_event_t::kKillEaterEventType_Warlock_GolemsSummoned,
      iCount,
      INVALID_ITEM_DEF_INDEX);
    v55 = CDOTA_Buff::GetParent(this);
    UTIL_Remove(v55);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
  else
  {
    v57 = CDOTA_Buff::GetParent(this);
    UTIL_Remove(v57);
  }
}


// CDOTA_Modifier_Special_Bonus_Unique_Warlock_1::~CDOTA_Modifier_Special_Bonus_Unique_Warlock_1  (line 923, @0x0000000002b1b190, libserver.so)  // inlines: ~CDOTA_Modifier_MagicImmune
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Special_Bonus_Unique_Warlock_1::~CDOTA_Modifier_Special_Bonus_Unique_Warlock_1(
        CDOTA_Modifier_Special_Bonus_Unique_Warlock_1 *const this)
{
  this->_vptr_CDOTA_Buff = &off_411B710;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Special_Bonus_Unique_Warlock_1::~CDOTA_Modifier_Special_Bonus_Unique_Warlock_1  (line 923, @0x0000000002b1b1b0, libserver.so)  // inlines: ~CDOTA_Modifier_MagicImmune, ~CDOTA_Modifier_Special_Bonus_Unique_Warlock_1
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Special_Bonus_Unique_Warlock_1::~CDOTA_Modifier_Special_Bonus_Unique_Warlock_1(
        CDOTA_Modifier_Special_Bonus_Unique_Warlock_1 *const this)
{
  this->_vptr_CDOTA_Buff = &off_411B710;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Special_Bonus_Unique_Warlock_1::GetEffectName  (line 928, @0x0000000002b15140, libserver.so)
// strings: "particles/items_fx/black_king_bar_avatar.vpcf"
const char *__fastcall CDOTA_Modifier_Special_Bonus_Unique_Warlock_1::GetEffectName(
        CDOTA_Modifier_Special_Bonus_Unique_Warlock_1 *const this)
{
  return "particles/items_fx/black_king_bar_avatar.vpcf";
}


// CDOTA_Modifier_Special_Bonus_Unique_Warlock_1::GetStatusEffectName  (line 929, @0x0000000002b15150, libserver.so)
// strings: "particles/status_fx/status_effect_avatar.vpcf"
const char *__fastcall CDOTA_Modifier_Special_Bonus_Unique_Warlock_1::GetStatusEffectName(
        CDOTA_Modifier_Special_Bonus_Unique_Warlock_1 *const this)
{
  return "particles/status_fx/status_effect_avatar.vpcf";
}


// CDOTA_Modifier_Special_Bonus_Unique_Warlock_1::GetAttributes  (line 930, @0x0000000002b15160, libserver.so)
int __fastcall CDOTA_Modifier_Special_Bonus_Unique_Warlock_1::GetAttributes(
        CDOTA_Modifier_Special_Bonus_Unique_Warlock_1 *const this)
{
  return 1;
}


// CDOTA_Modifier_Special_Bonus_Unique_Warlock_1::IsHidden  (line 931, @0x0000000002b15170, libserver.so)
bool __fastcall CDOTA_Modifier_Special_Bonus_Unique_Warlock_1::IsHidden(
        CDOTA_Modifier_Special_Bonus_Unique_Warlock_1 *const this)
{
  return 1;
}


// CDOTA_Modifier_Special_Bonus_Unique_Warlock_2::~CDOTA_Modifier_Special_Bonus_Unique_Warlock_2  (line 940, @0x0000000002b1ac90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Special_Bonus_Unique_Warlock_2::~CDOTA_Modifier_Special_Bonus_Unique_Warlock_2(
        CDOTA_Modifier_Special_Bonus_Unique_Warlock_2 *const this)
{
  this->_vptr_CDOTA_Buff = &off_4454210;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Special_Bonus_Unique_Warlock_2::~CDOTA_Modifier_Special_Bonus_Unique_Warlock_2  (line 940, @0x0000000002b1acb0, libserver.so)  // inlines: ~CDOTA_Modifier_Special_Bonus_Unique_Warlock_2
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Special_Bonus_Unique_Warlock_2::~CDOTA_Modifier_Special_Bonus_Unique_Warlock_2(
        CDOTA_Modifier_Special_Bonus_Unique_Warlock_2 *const this)
{
  this->_vptr_CDOTA_Buff = &off_4454210;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Special_Bonus_Unique_Warlock_2::GetAttributes  (line 946, @0x0000000002b15180, libserver.so)
int __fastcall CDOTA_Modifier_Special_Bonus_Unique_Warlock_2::GetAttributes(
        CDOTA_Modifier_Special_Bonus_Unique_Warlock_2 *const this)
{
  return 1;
}


// CDOTA_Modifier_Special_Bonus_Unique_Warlock_2::IsHidden  (line 949, @0x0000000002b15190, libserver.so)
bool __fastcall CDOTA_Modifier_Special_Bonus_Unique_Warlock_2::IsHidden(
        CDOTA_Modifier_Special_Bonus_Unique_Warlock_2 *const this)
{
  return 1;
}


// CDOTA_Modifier_Special_Bonus_Unique_Warlock_2::DeclareFunctions  (line 957, @0x0000000002ae7940, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Special_Bonus_Unique_Warlock_2::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Special_Bonus_Unique_Warlock_2::DeclareFunctions(
        CDOTA_Modifier_Special_Bonus_Unique_Warlock_2 *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Special_Bonus_Unique_Warlock_2::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Special_Bonus_Unique_Warlock_2::GetModifierPhysicalArmorBonus  (line 962, @0x0000000002ae7960, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Special_Bonus_Unique_Warlock_2::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Special_Bonus_Unique_Warlock_2 *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->value;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Special_Bonus_Unique_Warlock_2::OnCreated  (line 967, @0x0000000002b09de0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Special_Bonus_Unique_Warlock_2::OnCreated(
        CDOTA_Modifier_Special_Bonus_Unique_Warlock_2 *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->value = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "value", -1, 0);
  else
    this->value = 0;
}


// CDOTA_Ability_Warlock_Golem_Flaming_Fists::~CDOTA_Ability_Warlock_Golem_Flaming_Fists  (line 979, @0x0000000002b1c0f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Warlock_Golem_Flaming_Fists::~CDOTA_Ability_Warlock_Golem_Flaming_Fists(
        CDOTA_Ability_Warlock_Golem_Flaming_Fists *const this)
{
  this->_vptr_IHandleEntity = &off_4454570;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Warlock_Golem_Flaming_Fists::~CDOTA_Ability_Warlock_Golem_Flaming_Fists  (line 979, @0x0000000002b1c110, libserver.so)  // inlines: ~CDOTA_Ability_Warlock_Golem_Flaming_Fists
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Warlock_Golem_Flaming_Fists::~CDOTA_Ability_Warlock_Golem_Flaming_Fists(
        CDOTA_Ability_Warlock_Golem_Flaming_Fists *const this)
{
  this->_vptr_IHandleEntity = &off_4454570;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Warlock_Golem_Flaming_Fists::Schema_DynamicBinding  (line 981, @0x0000000002b151a0, libserver.so)
// globals: CDOTA_Ability_Warlock_Golem_Flaming_Fists::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Warlock_Golem_Flaming_Fists::Schema_DynamicBinding(
        const CDOTA_Ability_Warlock_Golem_Flaming_Fists *const this)
{
  return CDOTA_Ability_Warlock_Golem_Flaming_Fists::s_pSchemaBinding;
}


// CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 981, @0x0000000002b151b0, libserver.so)
// globals: CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::DestructInstance  (line 981, @0x0000000002b151c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Warlock_Golem_Flaming_Fists>
void __fastcall CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::FreeInstance  (line 981, @0x0000000002b151e0, libserver.so)
void __fastcall CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::CanAllocate  (line 981, @0x0000000002b15200, libserver.so)
bool __fastcall CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 981, @0x0000000002b15210, libserver.so)
// globals: CDOTA_Ability_Warlock_Golem_Flaming_Fists::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Warlock_Golem_Flaming_Fists::s_pSchemaBinding;
}


// CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::AllocateInstance  (line 981, @0x0000000002b18df0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::ConstructInstance  (line 981, @0x0000000002b1b640, libserver.so)  // inlines: CDOTA_Ability_Warlock_Golem_Flaming_Fists, Construct<CDOTA_Ability_Warlock_Golem_Flaming_Fists>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4454570;
  }
  return p;
}


// CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 981, @0x0000000002b21e60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 981, @0x0000000002b21e80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInternal  (line 981, @0x0000000002b29c00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "warlock_golem_flaming_fists", "CDOTA_Ability_Warlock_Golem_Flaming_Fists"
// globals: `guard variable for'CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClass, CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClass, __dso_handle, CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClassInfo, CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClassInfo
CEntityClass *__cdecl CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClass);
    CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClass._vptr_CEntityClass = off_44544F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClass);
    __cxa_atexit(
      CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClass != 0 )
    return &CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClass;
  if ( `guard variable for'CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClassInfo,
      "CDOTA_Ability_Warlock_Golem_Flaming_Fists",
      "warlock_golem_flaming_fists",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClassInfo);
  }
  CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClass.m_pClassInfo = &CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClassInfo;
  CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClass.m_pBaseClassInfo = CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClass = &CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClass;
  CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClassInfo.m_pClass = &CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClass;
  CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Flaming_FistsClass;
}


// CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetIntrinsicModifierName  (line 984, @0x0000000002b15220, libserver.so)
// strings: "modifier_warlock_golem_flaming_fists"
const char *__fastcall CDOTA_Ability_Warlock_Golem_Flaming_Fists::GetIntrinsicModifierName(
        CDOTA_Ability_Warlock_Golem_Flaming_Fists *const this)
{
  return "modifier_warlock_golem_flaming_fists";
}


// CDOTA_Modifier_Warlock_Golem_Flaming_Fists::~CDOTA_Modifier_Warlock_Golem_Flaming_Fists  (line 993, @0x0000000002b1ac40, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Warlock_Golem_Flaming_Fists::~CDOTA_Modifier_Warlock_Golem_Flaming_Fists(
        CDOTA_Modifier_Warlock_Golem_Flaming_Fists *const this)
{
  this->_vptr_CDOTA_Buff = &off_4455030;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Warlock_Golem_Flaming_Fists::~CDOTA_Modifier_Warlock_Golem_Flaming_Fists  (line 993, @0x0000000002b1ac60, libserver.so)  // inlines: ~CDOTA_Modifier_Warlock_Golem_Flaming_Fists
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Warlock_Golem_Flaming_Fists::~CDOTA_Modifier_Warlock_Golem_Flaming_Fists(
        CDOTA_Modifier_Warlock_Golem_Flaming_Fists *const this)
{
  this->_vptr_CDOTA_Buff = &off_4455030;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Warlock_Golem_Flaming_Fists::IsHidden  (line 1002, @0x0000000002b15230, libserver.so)
bool __fastcall CDOTA_Modifier_Warlock_Golem_Flaming_Fists::IsHidden(
        CDOTA_Modifier_Warlock_Golem_Flaming_Fists *const this)
{
  return 1;
}


// CDOTA_Modifier_Warlock_Golem_Flaming_Fists::OnCreated  (line 1015, @0x0000000002b09f60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Warlock_Golem_Flaming_Fists::OnCreated(
        CDOTA_Modifier_Warlock_Golem_Flaming_Fists *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "radius", -1, 0);
      return;
    }
  }
  else
  {
    this->damage = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->radius = 0;
}


// CDOTA_Modifier_Warlock_Golem_Flaming_Fists::OnRefresh  (line 1023, @0x0000000002b0a230, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Warlock_Golem_Flaming_Fists::OnRefresh(
        CDOTA_Modifier_Warlock_Golem_Flaming_Fists *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "radius", -1, 0);
      return;
    }
  }
  else
  {
    this->damage = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->radius = 0;
}


// CDOTA_Modifier_Warlock_Golem_Flaming_Fists::DeclareFunctions  (line 1031, @0x0000000002ae7980, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Warlock_Golem_Flaming_Fists::OnAttack(CModifierParams const&)
void __fastcall CDOTA_Modifier_Warlock_Golem_Flaming_Fists::DeclareFunctions(
        CDOTA_Modifier_Warlock_Golem_Flaming_Fists *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_Warlock_Golem_Flaming_Fists::OnAttack;
  this->m_Functions[120].__delta = 0;
}


// CDOTA_Modifier_Warlock_Golem_Flaming_Fists::OnAttack  (line 1038, @0x0000000002afcd10, libserver.so)  // inlines: Attacker, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::GetAbility, ApplyDamage, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Warlock_Golem_Flaming_Fists::OnAttack(
        CDOTA_Modifier_Warlock_Golem_Flaming_Fists *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rbx
  __m128i v11; // xmm2
  float v12; // r13d
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *Parent; // rax
  __int64 i; // rbx
  CHandle<CBaseEntity> *v16; // rdx
  uint32 v17; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CDOTA_BaseNPC *v21; // r13
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v23; // rax
  float flDamage; // [rsp+1Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-50h] BYREF

  m_pInstance = 0;
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hattacker.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance
    && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    v9 = CEntityHandle::operator CEntityInstance *(&params->htarget);
    v10 = v9;
    if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 && (*(v9->_vptr_IHandleEntity + 408))(v9) != 0 )
    {
      entities.m_Size = 0;
      *v11.m128i_i32 = this->radius;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
      AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
      Parent = CDOTA_Buff::GetParent(this);
      FindUnitsInRadius(Parent->m_iTeamNum.m_Value, AbsOrigin, v10, v12, &entities, 2, 19, 16400, 0, 0);
      for ( i = 0; entities.m_Size > i; ++i )
      {
        v16 = &entities.m_Memory.m_pMemory[i];
        v17 = v16->m_Index;
        if ( v16->m_Index + 2 > 1 )
        {
          v18 = v16->m_Index;
          v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
          if ( v19 != 0 )
          {
            v20 = &v19[v18 & 0x1FF];
            if ( v20 != 0 && v17 == v20->m_EHandle.m_Index )
            {
              v21 = v20->m_pInstance;
              if ( v20->m_pInstance != 0 && v21->m_bIsDOTANPC )
              {
                flDamage = this->damage;
                Ability = CDOTA_Buff::GetAbility(this);
                v23 = CDOTA_Buff::GetParent(this);
                ApplyDamage(v23, v21, Ability, flDamage, 4, 0);
              }
            }
          }
        }
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    }
  }
  return 1uLL;
}


// CDOTA_Ability_Warlock_Golem_Permanent_Immolation::~CDOTA_Ability_Warlock_Golem_Permanent_Immolation  (line 1076, @0x0000000002b1c140, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Warlock_Golem_Permanent_Immolation::~CDOTA_Ability_Warlock_Golem_Permanent_Immolation(
        CDOTA_Ability_Warlock_Golem_Permanent_Immolation *const this)
{
  this->_vptr_IHandleEntity = &off_4455390;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Warlock_Golem_Permanent_Immolation::~CDOTA_Ability_Warlock_Golem_Permanent_Immolation  (line 1076, @0x0000000002b1c160, libserver.so)  // inlines: ~CDOTA_Ability_Warlock_Golem_Permanent_Immolation
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Warlock_Golem_Permanent_Immolation::~CDOTA_Ability_Warlock_Golem_Permanent_Immolation(
        CDOTA_Ability_Warlock_Golem_Permanent_Immolation *const this)
{
  this->_vptr_IHandleEntity = &off_4455390;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Warlock_Golem_Permanent_Immolation::Schema_DynamicBinding  (line 1078, @0x0000000002b15240, libserver.so)
// globals: CDOTA_Ability_Warlock_Golem_Permanent_Immolation::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Warlock_Golem_Permanent_Immolation::Schema_DynamicBinding(
        const CDOTA_Ability_Warlock_Golem_Permanent_Immolation *const this)
{
  return CDOTA_Ability_Warlock_Golem_Permanent_Immolation::s_pSchemaBinding;
}


// CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1078, @0x0000000002b15250, libserver.so)
// globals: CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::DestructInstance  (line 1078, @0x0000000002b15260, libserver.so)  // inlines: Destruct<CDOTA_Ability_Warlock_Golem_Permanent_Immolation>
void __fastcall CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::FreeInstance  (line 1078, @0x0000000002b15280, libserver.so)
void __fastcall CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::CanAllocate  (line 1078, @0x0000000002b152a0, libserver.so)
bool __fastcall CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1078, @0x0000000002b152b0, libserver.so)
// globals: CDOTA_Ability_Warlock_Golem_Permanent_Immolation::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Warlock_Golem_Permanent_Immolation::s_pSchemaBinding;
}


// CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::AllocateInstance  (line 1078, @0x0000000002b18e30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::ConstructInstance  (line 1078, @0x0000000002b1b670, libserver.so)  // inlines: CDOTA_Ability_Warlock_Golem_Permanent_Immolation, Construct<CDOTA_Ability_Warlock_Golem_Permanent_Immolation>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4455390;
  }
  return p;
}


// CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1078, @0x0000000002b21eb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1078, @0x0000000002b21ed0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInternal  (line 1078, @0x0000000002b29d50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "warlock_golem_permanent_immolation", "CDOTA_Ability_Warlock_Golem_Permanent_Immolation"
// globals: `guard variable for'CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClas, CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClass, __dso_handle, CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClassInf, CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClassInfo
CEntityClass *__cdecl CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClass);
    CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClass._vptr_CEntityClass = off_4455310;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClass);
    __cxa_atexit(
      CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClass != 0 )
    return &CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClass;
  if ( `guard variable for'CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClassInfo,
      "CDOTA_Ability_Warlock_Golem_Permanent_Immolation",
      "warlock_golem_permanent_immolation",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClassInfo);
  }
  CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClass.m_pClassInfo = &CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClassInfo;
  CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClass.m_pBaseClassInfo = CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClass = &CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClass;
  CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClassInfo.m_pClass = &CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClass;
  CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Warlock_Golem_Permanent_ImmolationClass;
}


// CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetIntrinsicModifierName  (line 1081, @0x0000000002b152c0, libserver.so)
// strings: "modifier_warlock_golem_permanent_immolation"
const char *__fastcall CDOTA_Ability_Warlock_Golem_Permanent_Immolation::GetIntrinsicModifierName(
        CDOTA_Ability_Warlock_Golem_Permanent_Immolation *const this)
{
  return "modifier_warlock_golem_permanent_immolation";
}


// CDOTA_Modifier_Warlock_Golem_Permanent_Immolation::~CDOTA_Modifier_Warlock_Golem_Permanent_Immolation  (line 1089, @0x0000000002b1abf0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Warlock_Golem_Permanent_Immolation::~CDOTA_Modifier_Warlock_Golem_Permanent_Immolation(
        CDOTA_Modifier_Warlock_Golem_Permanent_Immolation *const this)
{
  this->_vptr_CDOTA_Buff = &off_4455E50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Warlock_Golem_Permanent_Immolation::~CDOTA_Modifier_Warlock_Golem_Permanent_Immolation  (line 1089, @0x0000000002b1ac10, libserver.so)  // inlines: ~CDOTA_Modifier_Warlock_Golem_Permanent_Immolation
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Warlock_Golem_Permanent_Immolation::~CDOTA_Modifier_Warlock_Golem_Permanent_Immolation(
        CDOTA_Modifier_Warlock_Golem_Permanent_Immolation *const this)
{
  this->_vptr_CDOTA_Buff = &off_4455E50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Warlock_Golem_Permanent_Immolation::IsHidden  (line 1094, @0x0000000002b152d0, libserver.so)
bool __fastcall CDOTA_Modifier_Warlock_Golem_Permanent_Immolation::IsHidden(
        CDOTA_Modifier_Warlock_Golem_Permanent_Immolation *const this)
{
  return 1;
}


// CDOTA_Modifier_Warlock_Golem_Permanent_Immolation::IsAura  (line 1098, @0x0000000002b152e0, libserver.so)
bool __fastcall CDOTA_Modifier_Warlock_Golem_Permanent_Immolation::IsAura(
        CDOTA_Modifier_Warlock_Golem_Permanent_Immolation *const this)
{
  return 1;
}


// CDOTA_Modifier_Warlock_Golem_Permanent_Immolation::GetModifierAura  (line 1099, @0x0000000002b152f0, libserver.so)
// strings: "modifier_warlock_golem_permanent_immolation_debuff"
const char *__fastcall CDOTA_Modifier_Warlock_Golem_Permanent_Immolation::GetModifierAura(
        CDOTA_Modifier_Warlock_Golem_Permanent_Immolation *const this)
{
  return "modifier_warlock_golem_permanent_immolation_debuff";
}


// CDOTA_Modifier_Warlock_Golem_Permanent_Immolation::GetAuraSearchTeam  (line 1101, @0x0000000002b15300, libserver.so)
int __fastcall CDOTA_Modifier_Warlock_Golem_Permanent_Immolation::GetAuraSearchTeam(
        CDOTA_Modifier_Warlock_Golem_Permanent_Immolation *const this)
{
  return 2;
}


// CDOTA_Modifier_Warlock_Golem_Permanent_Immolation::GetAuraSearchType  (line 1102, @0x0000000002b15310, libserver.so)
int __fastcall CDOTA_Modifier_Warlock_Golem_Permanent_Immolation::GetAuraSearchType(
        CDOTA_Modifier_Warlock_Golem_Permanent_Immolation *const this)
{
  return 19;
}


// CDOTA_Modifier_Warlock_Golem_Permanent_Immolation::GetAuraRadius  (line 1103, @0x0000000002b15320, libserver.so)
int __fastcall CDOTA_Modifier_Warlock_Golem_Permanent_Immolation::GetAuraRadius(
        CDOTA_Modifier_Warlock_Golem_Permanent_Immolation *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_Warlock_Golem_Permanent_Immolation::OnCreated  (line 1113, @0x0000000002b09b40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Warlock_Golem_Permanent_Immolation::OnCreated(
        CDOTA_Modifier_Warlock_Golem_Permanent_Immolation *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_radius", -1, 0);
  else
    this->aura_radius = 0;
}


// CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff::~CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff  (line 1124, @0x0000000002b1aba0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff::~CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff(
        CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4456170;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff::~CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff  (line 1124, @0x0000000002b1abc0, libserver.so)  // inlines: ~CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff::~CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff(
        CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4456170;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff::GetAttributes  (line 1132, @0x0000000002b15330, libserver.so)
int __fastcall CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff::GetAttributes(
        CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff *const this)
{
  return 3;
}


// CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff::OnCreated  (line 1142, @0x0000000002b09ea0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "aura_damage"
void __fastcall CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff::OnCreated(
        CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_damage", -1, 0);
  else
    this->aura_damage = 0;
  CDOTA_Buff::StartIntervalThink(this, 1.0, v4);
}


// CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff::OnIntervalThink  (line 1150, @0x0000000002ae8f00, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, ApplyDamage
void __fastcall CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff::OnIntervalThink(
        CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  float aura_damage; // [rsp+Ch] [rbp-24h]

  if ( CDOTA_Buff::GetCaster(this) != 0 && (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    aura_damage = this->aura_damage;
    Ability = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, Parent, Ability, aura_damage, 2, 0);
  }
}


// CDOTA_BaseNPC_Warlock_Golem::OnAlive  (line 1165, @0x0000000002ae79a0, libserver.so)
void __fastcall CDOTA_BaseNPC_Warlock_Golem::OnAlive(CDOTA_BaseNPC_Warlock_Golem *const this)
{
  ;
}


