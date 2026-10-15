// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:34
class CDOTA_Unit_Hero_Obsidian_Destroyer : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Obsidian_Destroyer(CDOTA_Unit_Hero_Obsidian_Destroyer &);
	CDOTA_Unit_Hero_Obsidian_Destroyer(CDOTA_Unit_Hero_Obsidian_Destroyer &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnDying();
	virtual const char * GetDeathEffectName();
	CDOTA_Unit_Hero_Obsidian_Destroyer();
	virtual ~CDOTA_Unit_Hero_Obsidian_Destroyer();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[469] OnDying
	// vtable[502] GetDeathEffectName
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:48
class C_CDOTA_Unit_Hero_Obsidian_Destroyer_MapInstall {
	C_CDOTA_Unit_Hero_Obsidian_Destroyer_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:81
class CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb : public CDOTABaseAbility {
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
	CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb(CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb &);
	CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb(CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb &);
	CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:95
class C_CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb_MapInstall {
	C_CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:116
class CDOTA_OrbObsidian_Destroyer_ArcaneOrb : public CDOTA_Orb {
public:

private:

	float mana_pool_damage_pct;  // +0x18
	int illusion_damage;  // +0x1c
	CDOTA_OrbObsidian_Destroyer_ArcaneOrb(CDOTA_OrbObsidian_Destroyer_ArcaneOrb &);
	CDOTA_OrbObsidian_Destroyer_ArcaneOrb(const CDOTA_OrbObsidian_Destroyer_ArcaneOrb &);
	CDOTA_OrbObsidian_Destroyer_ArcaneOrb(CDOTA_AttackRecord *, KeyValues *, CDOTA_BaseNPC *, CDOTABaseAbility *);
	virtual const char * GetProjectileName();
	virtual void OnOrbFire(const CModifierParams &);
	virtual void OnOrbImpact(const CModifierParams &);
	virtual ~CDOTA_OrbObsidian_Destroyer_ArcaneOrb();

	// vtable[3] GetProjectileName
	// vtable[6] OnOrbFire
	// vtable[8] OnOrbImpact
	// sizeof = 32
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:270
class CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb : public CDOTA_Buff {
public:

private:

	float mana_pool_damage_pct;  // +0xba8
	int illusion_damage;  // +0xbac
	CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual int GetOrbPriority(CDOTA_AttackRecord *);
	virtual CDOTA_Orb * GetCustomOrb(CDOTA_AttackRecord *);
	virtual bool IsCastAttack();
	virtual ~CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[50] GetOrbPriority
	// vtable[49] GetCustomOrb
	// vtable[82] IsCastAttack
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:363
class CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment : public CDOTABaseAbility {
public:

private:

	float steal_duration;  // +0x390
	EHANDLE m_hImprisonedUnit;  // +0x394
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
	CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment(CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment &);
	CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment(CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment &);
	CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	EHANDLE GetImprisonedUnit();
	virtual EAbilityAbuseType GetPotentialAbuseType();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual bool IsHiddenWhenStolen();
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[240] GetPotentialAbuseType
	// vtable[256] CastFilterResult
	// vtable[306] IsHiddenWhenStolen
	// vtable[322] GetStunDuration
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:386
class C_CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment_MapInstall {
	C_CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:463
class CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison : public CDOTA_Buff {
public:

	CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison();

	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:567
class CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker : public CDOTA_Buff {
public:

	CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker(CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker &);
	CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker(const CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker &);
	CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:582
class CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff : public CDOTA_Buff {
public:

private:

	int int_steal;  // +0xba8
	CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool DestroyOnExpire();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual int GetAttributes();
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	virtual void OnDurationExpired();
	virtual int GetEffectAttachType();
	virtual ~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[61] DestroyOnExpire
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[7] GetAttributes
	// vtable[55] OnDurationExpired
	// vtable[68] GetEffectAttachType
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:656
class CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter : public CDOTA_Buff {
public:

	CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:699
class CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff : public CDOTA_Buff {
public:

private:

	int int_steal;  // +0xba8
	CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	void OnDestroy(KeyValues *);
	virtual bool DestroyOnExpire();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual int GetAttributes();
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	virtual void OnDurationExpired();
	virtual int GetEffectAttachType();
	virtual ~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[61] DestroyOnExpire
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[7] GetAttributes
	// vtable[55] OnDurationExpired
	// vtable[68] GetEffectAttachType
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:771
class CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter : public CDOTA_Buff {
public:

	CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:816
class CDOTA_Ability_Obsidian_Destroyer_EssenceAura : public CDOTABaseAbility {
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
	CDOTA_Ability_Obsidian_Destroyer_EssenceAura(CDOTA_Ability_Obsidian_Destroyer_EssenceAura &);
	CDOTA_Ability_Obsidian_Destroyer_EssenceAura(CDOTA_Ability_Obsidian_Destroyer_EssenceAura &);
	CDOTA_Ability_Obsidian_Destroyer_EssenceAura();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnUpgrade();
	virtual void OnOwnerSpawned();
	void UpdateAura();
	virtual ~CDOTA_Ability_Obsidian_Destroyer_EssenceAura();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[268] OnUpgrade
	// vtable[269] OnOwnerSpawned
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:868
class CDOTA_Modifier_Obsidian_Destroyer_EssenceAura : public CDOTA_Buff {
public:

private:

	int bonus_mana;  // +0xba8
	CDOTA_Modifier_Obsidian_Destroyer_EssenceAura();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	ModifierVariant_t GetModifierManaBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Obsidian_Destroyer_EssenceAura();

	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:926
class CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int restore_chance;  // +0xbac
	float restore_amount;  // +0xbb0
	CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:1008
class CDOTA_Ability_Obsidian_Destroyer_SanityEclipse : public CDOTABaseAbility {
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
	CDOTA_Ability_Obsidian_Destroyer_SanityEclipse(CDOTA_Ability_Obsidian_Destroyer_SanityEclipse &);
	CDOTA_Ability_Obsidian_Destroyer_SanityEclipse(CDOTA_Ability_Obsidian_Destroyer_SanityEclipse &);
	CDOTA_Ability_Obsidian_Destroyer_SanityEclipse();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual const char * GetAssociatedSecondaryAbilities();
	void ApplySanityEclipse(CDOTA_BaseNPC *, const Vector &);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Obsidian_Destroyer_SanityEclipse();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:1032
class C_CDOTA_Ability_Obsidian_Destroyer_SanityEclipse_MapInstall {
	C_CDOTA_Ability_Obsidian_Destroyer_SanityEclipse_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_obsidian_destroyer.cpp:1209
class CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker : public CDOTA_Buff {
public:

	CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Obsidian_Destroyer::~CDOTA_Unit_Hero_Obsidian_Destroyer  (line 34, @0x0000000002c06fb0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Obsidian_Destroyer::~CDOTA_Unit_Hero_Obsidian_Destroyer(
        CDOTA_Unit_Hero_Obsidian_Destroyer *const this)
{
  this->_vptr_IHandleEntity = &off_4541770;
  this->_vptr_INextBotEventResponder = &off_4542750;
  this->_vptr_CObstructionObject = &off_4542A80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Obsidian_Destroyer::~CDOTA_Unit_Hero_Obsidian_Destroyer  (line 34, @0x0000000002c06ff0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Obsidian_Destroyer
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Obsidian_Destroyer::~CDOTA_Unit_Hero_Obsidian_Destroyer(
        CDOTA_Unit_Hero_Obsidian_Destroyer *const this)
{
  this->_vptr_IHandleEntity = &off_4541770;
  this->_vptr_INextBotEventResponder = &off_4542750;
  this->_vptr_CObstructionObject = &off_4542A80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Obsidian_Destroyer::Schema_DynamicBinding  (line 36, @0x0000000002bfe770, libserver.so)
// globals: CDOTA_Unit_Hero_Obsidian_Destroyer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Obsidian_Destroyer::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Obsidian_Destroyer *const this)
{
  return CDOTA_Unit_Hero_Obsidian_Destroyer::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 36, @0x0000000002bfe7a0, libserver.so)
// globals: CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::DestructInstance  (line 36, @0x0000000002bfe7b0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Obsidian_Destroyer>
void __fastcall CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::FreeInstance  (line 36, @0x0000000002bfe7d0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::CanAllocate  (line 36, @0x0000000002bfe7f0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 36, @0x0000000002bfe800, libserver.so)
// globals: CDOTA_Unit_Hero_Obsidian_Destroyer::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Obsidian_Destroyer::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::AllocateInstance  (line 36, @0x0000000002c02230, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::ConstructInstance  (line 36, @0x0000000002c04500, libserver.so)  // inlines: CDOTA_Unit_Hero_Obsidian_Destroyer, Construct<CDOTA_Unit_Hero_Obsidian_Destroyer>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4541770;
    *(p + 236) = &off_4542750;
    *(p + 257) = &off_4542A80;
  }
  return p;
}


// CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x0000000002c0b4c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x0000000002c0b700, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInternal  (line 36, @0x0000000002c12c40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "npc_dota_hero_obsidian_destroyer", "CDOTA_Unit_Hero_Obsidian_Destroyer"
// globals: `guard variable for'CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClass, CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClass, __dso_handle, CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClassInfo, CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClass);
    CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClass._vptr_CEntityClass = off_45416F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_Obsidian_DestroyerClass != 0 )
    return &CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClassInfo,
      "CDOTA_Unit_Hero_Obsidian_Destroyer",
      "npc_dota_hero_obsidian_destroyer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClassInfo);
  }
  CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClass.m_pClassInfo = &CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClassInfo;
  CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_Obsidian_DestroyerClass = &CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClass;
  CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClassInfo.m_pClass = &CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClass;
  CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_Obsidian_DestroyerClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Obsidian_Destroyer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Obsidian_DestroyerClass;
}


// CDOTA_Unit_Hero_Obsidian_Destroyer::GetDeathEffectName  (line 41, @0x0000000002bfe810, libserver.so)
// strings: "particles/units/heroes/hero_obsidian_destroyer/obsidian_death.vpcf"
const char *__fastcall CDOTA_Unit_Hero_Obsidian_Destroyer::GetDeathEffectName(
        CDOTA_Unit_Hero_Obsidian_Destroyer *const this)
{
  return "particles/units/heroes/hero_obsidian_destroyer/obsidian_death.vpcf";
}


// CDOTA_Unit_Hero_Obsidian_Destroyer::YouForgotToImplementOrDeclareServerClass  (line 48, @0x0000000002bd3290, libserver.so)
int __fastcall CDOTA_Unit_Hero_Obsidian_Destroyer::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Obsidian_Destroyer *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Obsidian_Destroyer::GetServerClass  (line 48, @0x0000000002bdc330, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Obsidian_Destroyer::GetServerClass(
        CDOTA_Unit_Hero_Obsidian_Destroyer *const this)
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


// CDOTA_Unit_Hero_Obsidian_Destroyer::OnDying  (line 55, @0x0000000002bd4ba0, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CDOTA_Unit_Hero_Obsidian_Destroyer::OnDying(CDOTA_Unit_Hero_Obsidian_Destroyer *const this)
{
  if ( !this->m_bCustomKillEffect.m_Value )
    CBaseEntity::AddEffects(this, 32);
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::~CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb  (line 81, @0x0000000002c053a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::~CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb(
        CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb *const this)
{
  this->_vptr_IHandleEntity = &off_4542B50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::~CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb  (line 81, @0x0000000002c053c0, libserver.so)  // inlines: ~CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::~CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb(
        CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb *const this)
{
  this->_vptr_IHandleEntity = &off_4542B50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::Schema_DynamicBinding  (line 83, @0x0000000002bfe820, libserver.so)
// globals: CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::Schema_DynamicBinding(
        const CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb *const this)
{
  return CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::s_pSchemaBinding;
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 83, @0x0000000002bfe830, libserver.so)
// globals: CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::DestructInstance  (line 83, @0x0000000002bfe840, libserver.so)  // inlines: Destruct<CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb>
void __fastcall CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::FreeInstance  (line 83, @0x0000000002bfe860, libserver.so)
void __fastcall CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::CanAllocate  (line 83, @0x0000000002bfe880, libserver.so)
bool __fastcall CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 83, @0x0000000002bfe890, libserver.so)
// globals: CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::s_pSchemaBinding;
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::AllocateInstance  (line 83, @0x0000000002c02270, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::ConstructInstance  (line 83, @0x0000000002c049c0, libserver.so)  // inlines: CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb, Construct<CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4542B50;
  }
  return p;
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 83, @0x0000000002c0a960, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 83, @0x0000000002c0a980, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInternal  (line 83, @0x0000000002c12d90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "obsidian_destroyer_arcane_orb", "CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb"
// globals: `guard variable for'CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClass, CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClass, __dso_handle, CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClassInfo, CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClassInfo
CEntityClass *__cdecl CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClass);
    CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClass._vptr_CEntityClass = off_4542AD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClass);
    __cxa_atexit(
      CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClass != 0 )
    return &CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClass;
  if ( `guard variable for'CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClassInfo,
      "CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb",
      "obsidian_destroyer_arcane_orb",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClassInfo);
  }
  CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClass.m_pClassInfo = &CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClassInfo;
  CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClass.m_pBaseClassInfo = CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClass = &CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClass;
  CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClassInfo.m_pClass = &CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClass;
  CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_ArcaneOrbClass;
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetIntrinsicModifierName  (line 87, @0x0000000002bfe8a0, libserver.so)
// strings: "modifier_obsidian_destroyer_arcane_orb"
const char *__fastcall CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetIntrinsicModifierName(
        CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb *const this)
{
  return "modifier_obsidian_destroyer_arcane_orb";
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::ProcsMagicStick  (line 89, @0x0000000002bfe8b0, libserver.so)
bool __fastcall CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::ProcsMagicStick(
        CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb *const this)
{
  return 0;
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::IsStealable  (line 90, @0x0000000002bfe8c0, libserver.so)
bool __fastcall CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::IsStealable(
        CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb *const this)
{
  return 0;
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::YouForgotToImplementOrDeclareServerClass  (line 95, @0x0000000002bd32a0, libserver.so)
int __fastcall CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb *const this)
{
  return 0;
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetServerClass  (line 95, @0x0000000002bdcbc0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetServerClass(
        CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetAbilityDamageToTargetOverInterval  (line 104, @0x0000000002bef880, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "mana_pool_damage_pct"
__int64 __fastcall CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  float fIntervalb; // [rsp+0h] [rbp-1Ch]
  float fIntervalc; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PURE )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    fIntervalb = CDOTA_BaseNPC::GetAttacksPerSecond(Caster) * fInterval;
    fIntervalc = fIntervalb
               * (CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "mana_pool_damage_pct", -1, 0) / 100.0);
    return (fIntervalc * CDOTABaseAbility::GetCaster(this)->m_flMana.m_Value);
  }
  return result;
}


// CDOTA_OrbObsidian_Destroyer_ArcaneOrb::~CDOTA_OrbObsidian_Destroyer_ArcaneOrb  (line 116, @0x0000000002c00a40, libserver.so)  // inlines: ~CDOTA_Orb
void __fastcall CDOTA_OrbObsidian_Destroyer_ArcaneOrb::~CDOTA_OrbObsidian_Destroyer_ArcaneOrb(
        CDOTA_OrbObsidian_Destroyer_ArcaneOrb *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
}


// CDOTA_OrbObsidian_Destroyer_ArcaneOrb::~CDOTA_OrbObsidian_Destroyer_ArcaneOrb  (line 116, @0x0000000002c01dd0, libserver.so)  // inlines: ~CDOTA_Orb, ~CDOTA_OrbObsidian_Destroyer_ArcaneOrb
// calls: operator delete
void __fastcall CDOTA_OrbObsidian_Destroyer_ArcaneOrb::~CDOTA_OrbObsidian_Destroyer_ArcaneOrb(
        CDOTA_OrbObsidian_Destroyer_ArcaneOrb *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
  operator delete(this);
}


// CDOTA_OrbObsidian_Destroyer_ArcaneOrb::GetProjectileName  (line 127, @0x0000000002bfe8d0, libserver.so)
// strings: "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_arcane_orb.vpcf"
const char *__fastcall CDOTA_OrbObsidian_Destroyer_ArcaneOrb::GetProjectileName(
        CDOTA_OrbObsidian_Destroyer_ArcaneOrb *const this)
{
  return "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_arcane_orb.vpcf";
}


// CDOTA_OrbObsidian_Destroyer_ArcaneOrb::OnOrbFire  (line 129, @0x0000000002c0b910, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Orb::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::CastAbility, CDOTA_AttackRecord::DeleteOrb
// strings: "obsidian_destroyer_arcane_orb", "Hero_ObsidianDestroyer.ArcaneOrb"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_OrbObsidian_Destroyer_ArcaneOrb::OnOrbFire(
        CDOTA_OrbObsidian_Destroyer_ArcaneOrb *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v5; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v7; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // rax

  Caster = CDOTA_Orb::GetCaster(this);
  v5 = CDOTA_Orb::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v5, "obsidian_destroyer_arcane_orb", 0);
  v7 = AbilityByName;
  if ( Caster != 0 )
  {
    if ( (*(AbilityByName->_vptr_IHandleEntity + 274))(AbilityByName, 0xFFFFFFFFLL) > Caster->m_flMana.m_Value )
      goto LABEL_12;
    CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_ObsidianDestroyer.ArcaneOrb", 0.0, 0, 0);
  }
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v10 = &v9[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v10->m_EHandle.m_Index
    || (m_pInstance = v10->m_pInstance, v10->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
  {
    CDOTABaseAbility::CastAbility(v7);
    return;
  }
LABEL_12:
  CDOTA_AttackRecord::DeleteOrb(this->m_pRecord);
}


// CDOTA_OrbObsidian_Destroyer_ArcaneOrb::OnOrbImpact  (line 158, @0x0000000002c1a4a0, libserver.so)  // inlines: AttackerNPC, DotaRetrieveAbilityValue<float>, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetMana, GetMaxMana, InState, IndexToIdentity, IsConsideredHero, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Orb::GetAbility, ApplyDamage, SendOverheadEventMessage, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, DotaRetrieveAbilityValue<int>, CDOTA_BaseNPC::FindModifierByName, CDOTA_Orb::GetCaster, KeyValues::KeyValues (18 total)
// strings: "Hero_ObsidianDestroyer.ArcaneOrb.Impact", "int_steal_duration", "special_bonus_unique_outworld_devourer", "modifier_obsidian_destroyer_astral_imprisonment_debuff_counter", "modifier_obsidian_destroyer_astral_imprisonment_buff_counter", "modifier_obsidian_destroyer_astral_imprisonment_buff" (8 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_OrbObsidian_Destroyer_ArcaneOrb::OnOrbImpact(
        CDOTA_OrbObsidian_Destroyer_ArcaneOrb *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v11; // rbx
  unsigned __int64 m_Value; // rax
  float v13; // xmm1_4
  uint32 m_iUnitType; // eax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v16; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v18; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v20; // r15
  int (**vptr_CDOTA_Buff)(...); // rax
  int (*v22)(...); // r13
  int v23; // eax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *v25; // rax
  CDOTA_Buff *v26; // r15
  int (**v27)(...); // rax
  int (*v28)(...); // r13
  int v29; // eax
  float v30; // xmm1_4
  CDOTABaseAbility *v31; // r15
  CDOTA_BaseNPC *v32; // r13
  CDOTA_BaseNPC *v33; // rax
  float v34; // xmm1_4
  CDOTABaseAbility *v35; // r15
  CDOTA_BaseNPC *v36; // rax
  float v37; // xmm0_4
  float v38; // xmm2_4
  CDOTABaseAbility *v39; // r15
  CDOTA_BaseNPC *v40; // rax
  CDOTA_Buff *v41; // rax
  CDOTABaseAbility *v42; // rax
  CDOTA_Buff *v43; // rax
  float flTargetMaxMana; // [rsp+4h] [rbp-8Ch]
  float flTargetMana; // [rsp+8h] [rbp-88h]
  float int_steal_durationa; // [rsp+Ch] [rbp-84h]
  float int_steal_duration; // [rsp+Ch] [rbp-84h]
  int int_steal; // [rsp+1Ch] [rbp-74h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-38h]

  v51 = __readfsqword(0x28u);
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v7 = params->htarget.m_Index;
  if ( v7 + 2 > 1 )
  {
    m_Index_low = LOWORD(params->htarget.m_Index);
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[m_Index_low & 0x1FF];
      if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
      {
        v11 = v10->m_pInstance;
        if ( v10->m_pInstance != 0 && v11->m_bIsDOTANPC && m_pInstance != 0 )
        {
          m_Value = v11->m_nUnitState64.m_Value;
          if ( (m_Value & 0x200) == 0 && !v11->m_bIsWaitingToSpawn.m_Value && (m_Value & 0x100) == 0 )
          {
            CDOTA_BaseNPC::UnitEmitSound(v11, "Hero_ObsidianDestroyer.ArcaneOrb.Impact", 0.0, 0, 0);
            v13 = (0.0099999998 * m_pInstance->m_flMana.m_Value) * this->mana_pool_damage_pct;
            if ( v11->m_bIsIllusion.m_Value
              || v11->m_bIsSummoned.m_Value && ((m_iUnitType = v11->m_iUnitType) & 3) == 0 && (m_iUnitType & 0x193) != 0 )
            {
              v13 = v13 + this->illusion_damage;
            }
            int_steal_durationa = v13;
            Ability = CDOTA_Orb::GetAbility(this);
            ApplyDamage(m_pInstance, v11, Ability, int_steal_durationa, 4, 0);
            SendOverheadEventMessage(
              0,
              DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE,
              v11,
              int_steal_durationa,
              0);
            v16 = CDOTA_Orb::GetAbility(this);
            if ( v16 != 0 )
              int_steal_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v16, "int_steal_duration", -1, 0);
            else
              int_steal_duration = 0.0;
            AbilityByName = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "special_bonus_unique_outworld_devourer", 0);
            if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
              int_steal_duration = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1)
                                 + int_steal_duration;
            v18 = CDOTA_Orb::GetAbility(this);
            DotaRetrieveAbilityValue<int>(v18, &int_steal, "int_steal");
            if ( (v11->m_iUnitType & 1) != 0
              && int_steal > 0
              && (*(v11->_vptr_IHandleEntity + 390))(v11) == 0
              && !v11->m_bIsIllusion.m_Value )
            {
              ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                                 v11,
                                 "modifier_obsidian_destroyer_astral_imprisonment_debuff_counter",
                                 0);
              v20 = ModifierByName;
              if ( ModifierByName != 0 )
              {
                vptr_CDOTA_Buff = ModifierByName->_vptr_CDOTA_Buff;
                v22 = vptr_CDOTA_Buff[28];
                v23 = vptr_CDOTA_Buff[27](v20);
                v22(v20, (int_steal + v23));
              }
              else
              {
                KeyValues::KeyValues(&kv2, "modifier_obsidian_destroyer_astral_imprisonment_debuff_counter");
                v42 = CDOTA_Orb::GetAbility(this);
                v43 = CDOTA_BaseNPC::AddNewModifier(
                        v11,
                        m_pInstance,
                        v42,
                        "modifier_obsidian_destroyer_astral_imprisonment_debuff_counter",
                        &kv2,
                        0);
                v20 = v43;
                if ( v43 == 0 )
                {
                  KeyValues::~KeyValues(&kv2);
LABEL_34:
                  Caster = CDOTA_Orb::GetCaster(this);
                  v25 = CDOTA_BaseNPC::FindModifierByName(
                          Caster,
                          "modifier_obsidian_destroyer_astral_imprisonment_buff_counter",
                          0);
                  v26 = v25;
                  if ( v25 != 0 )
                  {
                    v27 = v25->_vptr_CDOTA_Buff;
                    v28 = v27[28];
                    v29 = v27[27](v26);
                    v28(v26, (int_steal + v29));
                  }
                  else
                  {
                    KeyValues::KeyValues(&kv2, "modifier_obsidian_destroyer_astral_imprisonment_buff_counter");
                    v39 = CDOTA_Orb::GetAbility(this);
                    v40 = CDOTA_Orb::GetCaster(this);
                    v41 = CDOTA_BaseNPC::AddNewModifier(
                            v40,
                            m_pInstance,
                            v39,
                            "modifier_obsidian_destroyer_astral_imprisonment_buff_counter",
                            &kv2,
                            0);
                    v26 = v41;
                    if ( v41 == 0 )
                    {
                      KeyValues::~KeyValues(&kv2);
                      goto LABEL_37;
                    }
                    (*(v41->_vptr_CDOTA_Buff + 28))(v41, int_steal);
                    KeyValues::~KeyValues(&kv2);
                  }
                  (*(v26->_vptr_CDOTA_Buff + 63))(v26, 1, int_steal_duration);
LABEL_37:
                  KeyValues::KeyValues(&kv, "modifier_obsidian_destroyer_astral_imprisonment_buff");
                  KeyValues::SetFloat(&kv, "duration", v30);
                  KeyValues::SetInt(&kv, "nIntSteal", int_steal);
                  v31 = CDOTA_Orb::GetAbility(this);
                  v32 = CDOTA_Orb::GetCaster(this);
                  v33 = CDOTA_Orb::GetCaster(this);
                  CDOTA_BaseNPC::AddNewModifier(
                    v33,
                    v32,
                    v31,
                    "modifier_obsidian_destroyer_astral_imprisonment_buff",
                    &kv,
                    0);
                  flTargetMana = v11->m_flMana.m_Value;
                  flTargetMaxMana = v11->m_flMaxMana.m_Value;
                  KeyValues::KeyValues(&kv2, "modifier_obsidian_destroyer_astral_imprisonment_debuff");
                  KeyValues::SetFloat(&kv2, "duration", v34);
                  KeyValues::SetInt(&kv2, "nIntSteal", int_steal);
                  v35 = CDOTA_Orb::GetAbility(this);
                  v36 = CDOTA_Orb::GetCaster(this);
                  CDOTA_BaseNPC::AddNewModifier(
                    v11,
                    v36,
                    v35,
                    "modifier_obsidian_destroyer_astral_imprisonment_debuff",
                    &kv2,
                    0);
                  (*(v11->_vptr_IHandleEntity + 490))(v11);
                  v37 = v11->m_flMana.m_Value;
                  v38 = flTargetMaxMana - v11->m_flMaxMana.m_Value;
                  if ( v38 != (flTargetMana - v37) )
                    CDOTA_BaseNPC::SetMana(v11, v37 - (v38 - (flTargetMana - v37)), flTargetMana - v37);
                  KeyValues::~KeyValues(&kv2);
                  KeyValues::~KeyValues(&kv);
                  return;
                }
                (*(v43->_vptr_CDOTA_Buff + 28))(v43, int_steal);
                KeyValues::~KeyValues(&kv2);
              }
              (*(v20->_vptr_CDOTA_Buff + 63))(v20, 1, int_steal_duration);
              goto LABEL_34;
            }
          }
        }
      }
    }
  }
}


// CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb::~CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb  (line 270, @0x0000000002c03c40, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb::~CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb(
        CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb *const this)
{
  this->_vptr_CDOTA_Buff = &off_4543670;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb::~CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb  (line 270, @0x0000000002c03c60, libserver.so)  // inlines: ~CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb::~CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb(
        CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb *const this)
{
  this->_vptr_CDOTA_Buff = &off_4543670;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb::IsHidden  (line 275, @0x0000000002bfe8e0, libserver.so)
bool __fastcall CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb::IsHidden(
        CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb *const this)
{
  return 1;
}


// CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb::GetOrbPriority  (line 280, @0x0000000002c0b7c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb::GetOrbPriority(
        CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb *const this,
        CDOTA_AttackRecord *pRecord)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTABaseAbility *Ability; // rax
  int v9; // r13d
  CDOTABaseAbility *v10; // rax
  CDOTABaseAbility *v11; // rax

  m_Index = pRecord->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pRecord->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v5 = &v4[pRecord->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0
    && (pRecord->m_bUseCastAttackOrb || CDOTA_Buff::GetAbility(this)->m_bAutoCastState.m_Value)
    && (Ability = CDOTA_Buff::GetAbility(this),
        (v9 = (*(Ability->_vptr_IHandleEntity + 274))(Ability, 0xFFFFFFFFLL)) <= CDOTA_Buff::GetParent(this)->m_flMana.m_Value)
    && (v10 = CDOTA_Buff::GetAbility(this), (*(v10->_vptr_IHandleEntity + 256))(v10, m_pInstance) == 0)
    && (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 8) == 0
    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x193) != 0
    && (v11 = CDOTA_Buff::GetAbility(this), (*(v11->_vptr_IHandleEntity + 245))(v11) != 0) )
  {
    return 3;
  }
  else
  {
    return 0;
  }
}


// CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb::IsCastAttack  (line 311, @0x0000000002bfe8f0, libserver.so)
bool __fastcall CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb::IsCastAttack(
        CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb *const this)
{
  return 1;
}


// CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb::GetCustomOrb  (line 320, @0x0000000002bda8d0, libserver.so)  // inlines: CDOTA_OrbObsidian_Destroyer_ArcaneOrb, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, ~CDOTA_Orb
// calls: __stack_chk_fail, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, operator new, CDOTA_Orb::CDOTA_Orb, KeyValues::GetFloat, KeyValues::GetInt, KeyValues::~KeyValues, _Unwind_Resume (13 total)
// strings: "CDOTA_OrbObsidianDestroyer_ArcaneOrb", "mana_pool_damage_pct", "illusion_damage"
// globals: CEntityHandle::gm_pEntityList
CDOTA_Orb *__fastcall CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb::GetCustomOrb(
        CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb *const this,
        CDOTA_AttackRecord *pRecord)
{
  uint32 m_Index; // edx
  CEntityIdentity *v4; // rax
  __int64 v5; // rcx
  bool v6; // zf
  CEntityIdentity *v7; // rcx
  CDOTA_Orb *result; // rax
  float v10; // xmm1_4
  CDOTA_BaseNPC *Caster; // r15
  CDOTABaseAbility *Ability; // r13
  CDOTA_Orb *v13; // r12
  float v14; // xmm1_4
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  m_Index = pRecord->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pRecord->m_hTarget.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 0;
  v5 = pRecord->m_hTarget.m_Index & 0x1FF;
  v6 = &v4[v5] == 0;
  v7 = &v4[v5];
  result = 0;
  if ( !v6
    && m_Index == v7->m_EHandle.m_Index
    && v7->m_pInstance != 0
    && BYTE3(v7->m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    KeyValues::KeyValues(&kv, "CDOTA_OrbObsidianDestroyer_ArcaneOrb");
    KeyValues::SetFloat(&kv, "mana_pool_damage_pct", v10);
    KeyValues::SetInt(&kv, "illusion_damage", this->illusion_damage);
    Caster = CDOTA_Buff::GetCaster(this);
    Ability = CDOTA_Buff::GetAbility(this);
    v13 = operator new(0x20u);
    CDOTA_Orb::CDOTA_Orb(v13, pRecord, &kv, Caster, Ability);
    v13->_vptr_CDOTA_Orb = &off_45435D0;
    *&v13[1]._vptr_CDOTA_Orb = KeyValues::GetFloat(&kv, "mana_pool_damage_pct", v14);
    HIDWORD(v13[1]._vptr_CDOTA_Orb) = KeyValues::GetInt(&kv, "illusion_damage", 0);
    KeyValues::~KeyValues(&kv);
    return v13;
  }
  return result;
}


// CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb::OnCreated  (line 342, @0x0000000002bf2af0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "mana_pool_damage_pct", "illusion_damage"
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb::OnCreated(
        CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->mana_pool_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                   Ability,
                                   "mana_pool_damage_pct",
                                   -1,
                                   0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->illusion_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "illusion_damage", -1, 0);
      return;
    }
  }
  else
  {
    this->mana_pool_damage_pct = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->illusion_damage = 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb::OnRefresh  (line 350, @0x0000000002bf29d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "mana_pool_damage_pct", "illusion_damage"
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb::OnRefresh(
        CDOTA_Modifier_Obsidian_Destroyer_ArcaneOrb *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->mana_pool_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                   Ability,
                                   "mana_pool_damage_pct",
                                   -1,
                                   0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->illusion_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "illusion_damage", -1, 0);
      return;
    }
  }
  else
  {
    this->mana_pool_damage_pct = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->illusion_damage = 0;
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::~CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment  (line 363, @0x0000000002c053f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::~CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment(
        CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment *const this)
{
  this->_vptr_IHandleEntity = &off_45439D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::~CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment  (line 363, @0x0000000002c05410, libserver.so)  // inlines: ~CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::~CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment(
        CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment *const this)
{
  this->_vptr_IHandleEntity = &off_45439D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::Schema_DynamicBinding  (line 365, @0x0000000002bfe900, libserver.so)
// globals: CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::Schema_DynamicBinding(
        const CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment *const this)
{
  return CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::s_pSchemaBinding;
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 365, @0x0000000002bfe910, libserver.so)
// globals: CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::DestructInstance  (line 365, @0x0000000002bfe920, libserver.so)  // inlines: Destruct<CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment>
void __fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::FreeInstance  (line 365, @0x0000000002bfe940, libserver.so)
void __fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::CanAllocate  (line 365, @0x0000000002bfe960, libserver.so)
bool __fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 365, @0x0000000002bfe970, libserver.so)
// globals: CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::s_pSchemaBinding;
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::AllocateInstance  (line 365, @0x0000000002c022b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::ConstructInstance  (line 365, @0x0000000002c049f0, libserver.so)  // inlines: CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment, CEntityHandle, CHandle, Construct<CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 229) = -1;
    *p = &off_45439D0;
  }
  return p;
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 365, @0x0000000002c0a9b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 365, @0x0000000002c0a9d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInternal  (line 365, @0x0000000002c12ee0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "obsidian_destroyer_astral_imprisonment", "CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment"
// globals: `guard variable for'CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonme, CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClass, __dso_handle, CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentCl, CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClassInfo
CEntityClass *__cdecl CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClass);
    CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClass._vptr_CEntityClass = off_4543950;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClass);
    __cxa_atexit(
      CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClass != 0 )
    return &CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClass;
  if ( `guard variable for'CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClassInfo,
      "CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment",
      "obsidian_destroyer_astral_imprisonment",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClassInfo);
  }
  CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClass.m_pClassInfo = &CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClassInfo;
  CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClass.m_pBaseClassInfo = CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClass = &CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClass;
  CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClassInfo.m_pClass = &CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClass;
  CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_AstralImprisonmentClass;
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetPotentialAbuseType  (line 373, @0x0000000002bfe980, libserver.so)
EAbilityAbuseType __fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetPotentialAbuseType(
        CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment *const this)
{
  return EAbilityAbuseType::k_EAbilityAbuseType_Outworld_Astral_Imprisonment;
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::IsHiddenWhenStolen  (line 377, @0x0000000002bfe990, libserver.so)
bool __fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::IsHiddenWhenStolen(
        CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment *const this)
{
  return 1;
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::YouForgotToImplementOrDeclareServerClass  (line 386, @0x0000000002bd32b0, libserver.so)
int __fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment *const this)
{
  return 0;
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetServerClass  (line 386, @0x0000000002bdcc10, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetServerClass(
        CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CastFilterResult  (line 394, @0x0000000002bd57c0, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTABaseAbility::CastFilterResult, CDOTABaseAbility::GetCaster, CDOTA_PlayerResource::IsDisableHelpSetForPlayerID
int __fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CastFilterResult(
        CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment *const this,
        CDOTA_BaseNPC *pTarget)
{
  int result; // eax
  unsigned __int8 m_Value; // r13
  CDOTA_BaseNPC *Caster; // rax
  bool IsDisableHelpSetForPlayerID; // dl

  result = CDOTABaseAbility::CastFilterResult(this, pTarget);
  if ( result == 0 )
  {
    if ( (pTarget->m_iUnitType & 1) == 0 )
      return 0;
    m_Value = pTarget->m_iTeamNum.m_Value;
    if ( m_Value != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      return 0;
    Caster = CDOTABaseAbility::GetCaster(this);
    IsDisableHelpSetForPlayerID = CDOTA_PlayerResource::IsDisableHelpSetForPlayerID(
                                    g_pDOTAPlayerResource,
                                    pTarget->m_nControllingPlayerID,
                                    Caster->m_nControllingPlayerID);
    result = 25;
    if ( !IsDisableHelpSetForPlayerID )
      return 0;
  }
  return result;
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::OnSpellStart  (line 412, @0x0000000002bef910, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, GetTeamNumber, InState, IsInvulnerable, Set, ToDOTABaseNPC, operator=
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetCaster, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (16 total)
// strings: "modifier_obsidian_destroyer_astral_imprisonment_prison", "prison_duration", "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_prison_start.vpcf", "attach_hitloc", "Hero_ObsidianDestroyer.AstralImprisonment.Cast"
void __fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::OnSpellStart(
        CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  __int64 v4; // rax
  unsigned __int8 m_Value; // r13
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx
  float v9; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v11; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  KeyValues kv2; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      m_Value = v3->m_iTeamNum.m_Value;
      if ( m_Value != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      {
        m_pEntity = v3->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v8 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hImprisonedUnit.m_Index) = v8 | this->m_hImprisonedUnit.m_Index & 0x8000;
          this->m_hImprisonedUnit.m_Index = (v7 << 15) | this->m_hImprisonedUnit.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hImprisonedUnit.m_Index = -1;
        }
      }
      KeyValues::KeyValues(&kv2, "modifier_obsidian_destroyer_astral_imprisonment_prison");
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "prison_duration", -1, 0);
      KeyValues::SetFloat(&kv2, "duration", v9);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_obsidian_destroyer_astral_imprisonment_prison", &kv2, 0);
      v11 = CDOTABaseAbility::GetCaster(this);
      ParticleManager = GetParticleManager();
      LODWORD(v11) = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_prison_start.vpcf",
                       2,
                       v3,
                       0,
                       v11);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
      v14 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v14, v11, 0, v3, 5, "attach_hitloc", *AbsOrigin, 1);
      v15 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v15, v11, 1, v3, 1, 0, vec3_invalid, 1);
      v16 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v16, v11);
      v17 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v17, "Hero_ObsidianDestroyer.AstralImprisonment.Cast", 0.0, 0, 0);
      KeyValues::~KeyValues(&kv2);
    }
  }
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetImprisonedUnit  (line 438, @0x0000000002bdec70, libserver.so)  // inlines: CEntityHandle, CHandle, FindModifierByName, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CEntityInstance*, operator bool
// calls: ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName
// strings: "modifier_obsidian_destroyer_astral_imprisonment_prison"
// globals: CEntityHandle::gm_pEntityList
uint32 *__fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetImprisonedUnit(
        uint32 *a1,
        CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r13
  CModifieractoryDictionary *v9; // rax
  IModifierFactory *Factory; // rax

  m_Index = this->m_hImprisonedUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hImprisonedUnit.m_Index) >> 9) & 0x3F]) != 0
    && (v6 = &v5[this->m_hImprisonedUnit.m_Index & 0x1FF]) != 0
    && m_Index == v6->m_EHandle.m_Index
    && (m_pInstance = v6->m_pInstance, v6->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && (v9 = ModifierFactoryDictionary(),
        Factory = CModifieractoryDictionary::FindFactory(v9, "modifier_obsidian_destroyer_astral_imprisonment_prison"),
        CDOTA_ModifierManager::FindModifierByName(
          &m_pInstance[64].m_worldGroupId,
          Factory,
          "modifier_obsidian_destroyer_astral_imprisonment_prison",
          0) != 0) )
  {
    *a1 = this->m_hImprisonedUnit.m_Index;
    return a1;
  }
  else
  {
    *a1 = -1;
    return a1;
  }
}


// CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetStunDuration  (line 455, @0x0000000002befb90, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "prison_duration"
float __fastcall CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::GetStunDuration(
        CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "prison_duration", -1, 0);
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison  (line 463, @0x0000000002c03bf0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison *const this)
{
  this->_vptr_CDOTA_Buff = &off_4544490;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison  (line 463, @0x0000000002c03c10, libserver.so)  // inlines: ~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison *const this)
{
  this->_vptr_CDOTA_Buff = &off_4544490;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison::IsPurgable  (line 471, @0x0000000002bfe9a0, libserver.so)
bool __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison::IsPurgable(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison *const this)
{
  return 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison::CheckState  (line 481, @0x0000000002bd32c0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison::CheckState(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x80844120uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7F7BBEDFLL;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison::OnCreated  (line 495, @0x0000000002bf40d0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, Vector, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::GetOpposingTeamNumber, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CRecipientFilter::AddRecipientsByTeam, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin (21 total)
// strings: "prison_duration", "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_prison.vpcf", "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_prison_ring.vpcf", "Hero_ObsidianDestroyer.AstralImprisonment"
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison::OnCreated(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v6; // rax
  CDOTABaseAbility *Ability; // rax
  __m128i v8; // xmm0
  int v9; // r14d
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v11; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // r13
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CReliableBroadcastRecipientFilter filter; // [rsp+30h] [rbp-160h] BYREF
  unsigned __int64 v21; // [rsp+168h] [rbp-28h]
  Vector vPos; // 0:^10.12

  v21 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  Caster = CDOTA_Buff::GetCaster(this);
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(Caster);
  GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
  CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
  v6 = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filter, v6);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    *v8.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "prison_duration", -1, 0);
    v9 = _mm_cvtsi128_si32(v8);
  }
  else
  {
    v9 = _mm_cvtsi128_si32(0LL);
  }
  Parent = CDOTA_Buff::GetParent(this);
  vPos = *CBaseEntity::GetAbsOrigin(Parent);
  v11 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v11) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_prison.vpcf",
                   8,
                   0,
                   0,
                   v11);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v13, v11, 0, *&vPos.x, vPos.z);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v14, v11, 1, COERCE_DOUBLE(v9), 0.0);
  CDOTA_Buff::AddParticle(this, v11, 0, 0, -1, 0, 0);
  v15 = CDOTA_Buff::GetCaster(this);
  v16 = GetParticleManager();
  LODWORD(v15) = CDOTA_ParticleManager::CreateParticle(
                   v16,
                   "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_prison_ring.vpcf",
                   8,
                   0,
                   &filter,
                   v15);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v17, v15, 0, *&vPos.x, vPos.z);
  CDOTA_Buff::AddParticle(this, v15, 0, 0, -1, 0, 0);
  v18 = CDOTA_Buff::GetParent(this);
  CBaseEntity::AddEffects(v18, 32);
  v19 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v19, "Hero_ObsidianDestroyer.AstralImprisonment", 0.0, 0, 0);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison::OnDestroy  (line 521, @0x0000000002be6ef0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, MarkPVSInformationDirty, RemoveEffects, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveState, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::StopSound, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues (24 total)
// strings: "Hero_ObsidianDestroyer.AstralImprisonment", "Hero_ObsidianDestroyer.AstralImprisonment.End", "modifier_obsidian_destroyer_astral_imprisonment_marker", "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_prison_end_dmg.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison::OnDestroy(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rbx
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v8; // rax
  __m128i v9; // xmm3
  float v10; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v12; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v14; // rax
  __int64 v15; // r12
  int v16; // ebx
  CHandle<CBaseEntity> *v17; // rdx
  uint32 m_Index; // eax
  __int16 v19; // cx
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  float v23; // xmm1_4
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  int v26; // r13d
  CDOTA_BaseNPC *v27; // rax
  CDOTABaseAbility *v28; // rax
  int AbilityParticleEffect; // ebx
  CDOTA_BaseNPC *v30; // rax
  const Vector *v31; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  CDOTABaseAbility *pInflictor; // [rsp+20h] [rbp-A0h]
  CDOTABaseAbility *pAbility; // [rsp+28h] [rbp-98h]
  int radius; // [rsp+38h] [rbp-88h] BYREF
  int damage; // [rsp+3Ch] [rbp-84h] BYREF
  double v39; // [rsp+40h] [rbp-80h]
  float v40; // [rsp+48h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+88h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveState(Parent, 0x1Fu);
  v3 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveState(v3, 8u);
  v4 = CDOTA_Buff::GetParent(this);
  (*(v4->_vptr_IHandleEntity + 188))(v4, v4->m_fEffects.m_Value & 0xFFFFFFDF);
  v4->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(v4);
  v5 = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(v5, "Hero_ObsidianDestroyer.AstralImprisonment");
  v6 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v6, "Hero_ObsidianDestroyer.AstralImprisonment.End", 0.0, 0, 0);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &radius, "radius");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &damage, "damage");
  *v9.m128i_i32 = radius;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
  Caster = CDOTA_Buff::GetCaster(this);
  v12 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
  v14 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v14->m_iTeamNum.m_Value, AbsOrigin, Caster, v10, &hEntities, 2, 3, 0, 0, 0);
  if ( hEntities.m_Size > 0 )
  {
    v15 = 0;
    v16 = 0;
    do
    {
      while ( 1 )
      {
        v17 = &hEntities.m_Memory.m_pMemory[v15];
        m_Index = hEntities.m_Memory.m_pMemory[v15].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v19 = v17->m_Index;
          v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v17->m_Index) >> 9) & 0x3F];
          if ( v20 != 0 )
          {
            v21 = &v20[v19 & 0x1FF];
            if ( v21 != 0 && m_Index == v21->m_EHandle.m_Index )
            {
              m_pInstance = v21->m_pInstance;
              if ( v21->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && CDOTA_BaseNPC::FindModifierByName(
                     m_pInstance,
                     "modifier_obsidian_destroyer_astral_imprisonment_marker",
                     0) == 0 )
              {
                break;
              }
            }
          }
        }
        ++v16;
        ++v15;
        if ( hEntities.m_Size <= v16 )
          goto LABEL_12;
      }
      KeyValues::KeyValues(&kv, "modifier_obsidian_destroyer_astral_imprisonment_marker");
      KeyValues::SetFloat(&kv, "duration", v23);
      pAbility = CDOTA_Buff::GetAbility(this);
      v24 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(
        m_pInstance,
        v24,
        pAbility,
        "modifier_obsidian_destroyer_astral_imprisonment_marker",
        &kv,
        0);
      *&pAbility = damage;
      pInflictor = CDOTA_Buff::GetAbility(this);
      v25 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v25, m_pInstance, pInflictor, *&pAbility, 2, 0);
      v26 = damage;
      v27 = CDOTA_Buff::GetParent(this);
      SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v27, v26, 0);
      ++v16;
      ++v15;
      KeyValues::~KeyValues(&kv);
    }
    while ( hEntities.m_Size > v16 );
  }
LABEL_12:
  v28 = CDOTA_Buff::GetAbility(this);
  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                            v28,
                            "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_prison_end_dmg.vpcf",
                            2,
                            0,
                            0);
  v30 = CDOTA_Buff::GetParent(this);
  v31 = CBaseEntity::GetAbsOrigin(v30);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbilityParticleEffect, 0, *&v31->x, v31->z);
  *&v39 = radius;
  *(&v39 + 1) = radius;
  v40 = radius;
  v33 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v33, AbilityParticleEffect, 1, v39, v40);
  v34 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v34, AbilityParticleEffect);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker  (line 567, @0x0000000002c04280, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4544770;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker  (line 567, @0x0000000002c042a0, libserver.so)  // inlines: ~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4544770;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker::IsPurgable  (line 571, @0x0000000002bfe9b0, libserver.so)
bool __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker::IsPurgable(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker *const this)
{
  return 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker::IsHidden  (line 572, @0x0000000002bfe9c0, libserver.so)
bool __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker::IsHidden(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Marker *const this)
{
  return 1;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff  (line 582, @0x0000000002c03ba0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4544AD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff  (line 582, @0x0000000002c03bc0, libserver.so)  // inlines: ~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4544AD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::DestroyOnExpire  (line 590, @0x0000000002bfe9d0, libserver.so)
bool __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::DestroyOnExpire(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::IsHidden  (line 591, @0x0000000002bfe9e0, libserver.so)
bool __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::IsHidden(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::IsPurgable  (line 592, @0x0000000002bfe9f0, libserver.so)
bool __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::IsPurgable(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff *const this)
{
  return 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::GetAttributes  (line 593, @0x0000000002bfea00, libserver.so)
int __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::GetAttributes(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff *const this)
{
  return 2;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::GetEffectAttachType  (line 598, @0x0000000002bfea10, libserver.so)
int __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::GetEffectAttachType(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff *const this)
{
  return 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::DeclareFunctions  (line 607, @0x0000000002bd32f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::GetModifierBonusStats_Intellect(CModifierParams const&)
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::DeclareFunctions(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff *const this)
{
  this->m_Functions[66].__pfn = CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::OnCreated  (line 614, @0x0000000002bd3f80, libserver.so)
// calls: KeyValues::GetInt
// strings: "nIntSteal"
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::OnCreated(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff *const this,
        KeyValues *pKV)
{
  this->int_steal = KeyValues::GetInt(pKV, "nIntSteal", 0);
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::GetModifierBonusStats_Intellect  (line 621, @0x0000000002bd3310, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->int_steal;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::OnDestroy  (line 627, @0x0000000002bd5750, libserver.so)  // inlines: GetMana
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::SetMana
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::OnDestroy(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  float v4; // xmm1_4
  float flMana; // [rsp+Ch] [rbp-14h]
  float flManaa; // [rsp+Ch] [rbp-14h]

  flMana = CDOTA_Buff::GetParent(this)->m_flMana.m_Value;
  Parent = CDOTA_Buff::GetParent(this);
  (*(Parent->_vptr_IHandleEntity + 490))(Parent);
  flManaa = (13 * this->int_steal) + flMana;
  v3 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::SetMana(v3, flManaa, v4);
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::OnDurationExpired  (line 639, @0x0000000002bd4ab0, libserver.so)  // inlines: IsUnitMyParent
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_obsidian_destroyer_astral_imprisonment_debuff_counter"
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff::OnDurationExpired(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Debuff *const this)
{
  CDOTA_BaseNPC *Parent; // rbx
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v4; // r13
  void (__fastcall *v5)(CDOTA_Buff *, _QWORD); // rbx
  int v6; // eax

  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent != 0 && Parent == CDOTA_Buff::GetParent(this) )
  {
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                       Parent,
                       "modifier_obsidian_destroyer_astral_imprisonment_debuff_counter",
                       0);
    v4 = ModifierByName;
    if ( ModifierByName != 0
      && Parent == CDOTA_Buff::GetParent(ModifierByName)
      && (*(v4->_vptr_CDOTA_Buff + 27))(v4) > 0 )
    {
      v5 = *(v4->_vptr_CDOTA_Buff + 28);
      v6 = (*(v4->_vptr_CDOTA_Buff + 27))(v4);
      v5(v4, (v6 - this->int_steal));
    }
  }
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter  (line 656, @0x0000000002c03b50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4544DF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter  (line 656, @0x0000000002c03b70, libserver.so)  // inlines: ~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4544DF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter::IsPurgable  (line 661, @0x0000000002bfea20, libserver.so)
bool __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter::IsPurgable(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter::IsHidden  (line 662, @0x0000000002c06c70, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_obsidian_destroyer_astral_imprisonment_buff"
bool __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter::IsHidden(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) > 0 )
    return 0;
  Parent = CDOTA_Buff::GetParent(this);
  return CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_obsidian_destroyer_astral_imprisonment_buff", 0) == 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter::DeclareFunctions  (line 683, @0x0000000002bd3330, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter::DeclareFunctions(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter *const this)
{
  this->m_Functions[151].__pfn = CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter::OnTooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter::OnTooltip  (line 689, @0x0000000002bd3350, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter::OnTooltip(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_DebuffCounter *const this,
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


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff  (line 699, @0x0000000002c03b00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4545110;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff  (line 699, @0x0000000002c03b20, libserver.so)  // inlines: ~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4545110;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::DestroyOnExpire  (line 707, @0x0000000002bfea30, libserver.so)
bool __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::DestroyOnExpire(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff *const this)
{
  return 1;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::IsHidden  (line 708, @0x0000000002bfea40, libserver.so)
bool __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::IsHidden(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff *const this)
{
  return 1;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::IsPurgable  (line 709, @0x0000000002bfea50, libserver.so)
bool __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::IsPurgable(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff *const this)
{
  return 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::GetAttributes  (line 710, @0x0000000002bfea60, libserver.so)
int __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::GetAttributes(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff *const this)
{
  return 2;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::GetEffectAttachType  (line 715, @0x0000000002bfea70, libserver.so)
int __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::GetEffectAttachType(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff *const this)
{
  return 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::DeclareFunctions  (line 725, @0x0000000002bd3380, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::GetModifierBonusStats_Intellect(CModifierParams const&)
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::DeclareFunctions(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff *const this)
{
  this->m_Functions[66].__pfn = CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::OnCreated  (line 732, @0x0000000002bd41b0, libserver.so)  // inlines: IsRealHero, ToDOTABaseNPCHero
// calls: KeyValues::GetInt, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent
// strings: "nIntSteal"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::OnCreated(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  int int_steal; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v6; // rdi

  this->int_steal = KeyValues::GetInt(pKV, "nIntSteal", 0);
  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( (Parent->m_iUnitType & 1) != 0 && !Parent->m_bIsIllusion.m_Value )
    {
      int_steal = this->int_steal;
      Caster = CDOTA_Buff::GetCaster(this);
      if ( Caster == 0 || (v6 = Caster, (Caster->m_iUnitType & 1) == 0) )
        v6 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v6,
        0,
        kill_eater_event_t::kKillEaterEventType_OD_IntStolen,
        int_steal,
        INVALID_ITEM_DEF_INDEX);
    }
  }
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::GetModifierBonusStats_Intellect  (line 746, @0x0000000002bd33a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->int_steal;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::OnDurationExpired  (line 753, @0x0000000002bd4a20, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_obsidian_destroyer_astral_imprisonment_buff_counter"
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff::OnDurationExpired(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Buff *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v4; // rbx
  void (__fastcall *v5)(CDOTA_Buff *, _QWORD); // r13
  int v6; // eax

  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != 0 )
  {
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                       Caster,
                       "modifier_obsidian_destroyer_astral_imprisonment_buff_counter",
                       0);
    v4 = ModifierByName;
    if ( ModifierByName != 0 && (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) > 0 )
    {
      v5 = *(v4->_vptr_CDOTA_Buff + 28);
      v6 = (*(v4->_vptr_CDOTA_Buff + 27))(v4);
      v5(v4, (v6 - this->int_steal));
    }
  }
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter  (line 771, @0x0000000002c03ab0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4545430;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter  (line 771, @0x0000000002c03ad0, libserver.so)  // inlines: ~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter::~CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4545430;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter::IsPurgable  (line 776, @0x0000000002bfea80, libserver.so)
bool __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter::IsPurgable(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter::IsHidden  (line 777, @0x0000000002c06cc0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_obsidian_destroyer_astral_imprisonment_buff"
bool __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter::IsHidden(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) > 0 )
    return 0;
  Parent = CDOTA_Buff::GetParent(this);
  return CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_obsidian_destroyer_astral_imprisonment_buff", 0) == 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter::DeclareFunctions  (line 798, @0x0000000002bd33c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter::DeclareFunctions(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter *const this)
{
  this->m_Functions[151].__pfn = CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter::OnTooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter::OnTooltip  (line 804, @0x0000000002bd33e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter::OnTooltip(
        CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_BuffCounter *const this,
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


// CDOTA_Ability_Obsidian_Destroyer_EssenceAura::~CDOTA_Ability_Obsidian_Destroyer_EssenceAura  (line 816, @0x0000000002c05440, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Obsidian_Destroyer_EssenceAura::~CDOTA_Ability_Obsidian_Destroyer_EssenceAura(
        CDOTA_Ability_Obsidian_Destroyer_EssenceAura *const this)
{
  this->_vptr_IHandleEntity = &off_4545790;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Obsidian_Destroyer_EssenceAura::~CDOTA_Ability_Obsidian_Destroyer_EssenceAura  (line 816, @0x0000000002c05460, libserver.so)  // inlines: ~CDOTA_Ability_Obsidian_Destroyer_EssenceAura
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Obsidian_Destroyer_EssenceAura::~CDOTA_Ability_Obsidian_Destroyer_EssenceAura(
        CDOTA_Ability_Obsidian_Destroyer_EssenceAura *const this)
{
  this->_vptr_IHandleEntity = &off_4545790;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Obsidian_Destroyer_EssenceAura::Schema_DynamicBinding  (line 818, @0x0000000002bfea90, libserver.so)
// globals: CDOTA_Ability_Obsidian_Destroyer_EssenceAura::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Obsidian_Destroyer_EssenceAura::Schema_DynamicBinding(
        const CDOTA_Ability_Obsidian_Destroyer_EssenceAura *const this)
{
  return CDOTA_Ability_Obsidian_Destroyer_EssenceAura::s_pSchemaBinding;
}


// CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 818, @0x0000000002bfeaa0, libserver.so)
// globals: CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::DestructInstance  (line 818, @0x0000000002bfeab0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Obsidian_Destroyer_EssenceAura>
void __fastcall CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::FreeInstance  (line 818, @0x0000000002bfead0, libserver.so)
void __fastcall CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::CanAllocate  (line 818, @0x0000000002bfeaf0, libserver.so)
bool __fastcall CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 818, @0x0000000002bfeb00, libserver.so)
// globals: CDOTA_Ability_Obsidian_Destroyer_EssenceAura::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Obsidian_Destroyer_EssenceAura::s_pSchemaBinding;
}


// CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::AllocateInstance  (line 818, @0x0000000002c022f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::ConstructInstance  (line 818, @0x0000000002c04a30, libserver.so)  // inlines: CDOTA_Ability_Obsidian_Destroyer_EssenceAura, Construct<CDOTA_Ability_Obsidian_Destroyer_EssenceAura>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4545790;
  }
  return p;
}


// CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 818, @0x0000000002c0aa00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 818, @0x0000000002c0aa20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInternal  (line 818, @0x0000000002c13030, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "obsidian_destroyer_essence_aura", "CDOTA_Ability_Obsidian_Destroyer_EssenceAura"
// globals: `guard variable for'CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClass, CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClass, __dso_handle, CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClassInfo, CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClassInfo
CEntityClass *__cdecl CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClass);
    CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClass._vptr_CEntityClass = off_4545710;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClass);
    __cxa_atexit(
      CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClass != 0 )
    return &CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClass;
  if ( `guard variable for'CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClassInfo,
      "CDOTA_Ability_Obsidian_Destroyer_EssenceAura",
      "obsidian_destroyer_essence_aura",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClassInfo);
  }
  CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClass.m_pClassInfo = &CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClassInfo;
  CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClass.m_pBaseClassInfo = CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClass = &CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClass;
  CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClassInfo.m_pClass = &CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClass;
  CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Obsidian_Destroyer_EssenceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_EssenceAuraClass;
}


// CDOTA_Ability_Obsidian_Destroyer_EssenceAura::OnUpgrade  (line 833, @0x0000000002be78d0, libserver.so)
// calls: CDOTA_Ability_Obsidian_Destroyer_EssenceAura::UpdateAura, CDOTABaseAbility::OnUpgrade
void __fastcall CDOTA_Ability_Obsidian_Destroyer_EssenceAura::OnUpgrade(
        CDOTA_Ability_Obsidian_Destroyer_EssenceAura *const this)
{
  CDOTA_Ability_Obsidian_Destroyer_EssenceAura::UpdateAura(this);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Obsidian_Destroyer_EssenceAura::OnOwnerSpawned  (line 841, @0x0000000002be78f0, libserver.so)
// calls: CDOTA_Ability_Obsidian_Destroyer_EssenceAura::UpdateAura
void __fastcall CDOTA_Ability_Obsidian_Destroyer_EssenceAura::OnOwnerSpawned(
        CDOTA_Ability_Obsidian_Destroyer_EssenceAura *const this)
{
  CDOTA_Ability_Obsidian_Destroyer_EssenceAura::UpdateAura(this);
}


// CDOTA_Ability_Obsidian_Destroyer_EssenceAura::UpdateAura  (line 848, @0x0000000002be77b0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, SetBool
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetInt, KeyValues::SetString, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Ability_Obsidian_Destroyer_EssenceAura::OnUpgrade, CDOTA_Ability_Obsidian_Destroyer_EssenceAura::OnOwnerSpawned
// strings: "modifier_obsidian_destroyer_essence_aura", "modifier_obsidian_destroyer_essence_aura_effect", "aura_apply_modifier", "aura_search_team", "aura_search_type"
void __fastcall CDOTA_Ability_Obsidian_Destroyer_EssenceAura::UpdateAura(
        CDOTA_Ability_Obsidian_Destroyer_EssenceAura *const this)
{
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_obsidian_destroyer_essence_aura");
  KeyValues::SetInt(&kv, "aura", 1);
  KeyValues::SetString(&kv, "aura_apply_modifier", "modifier_obsidian_destroyer_essence_aura_effect");
  KeyValues::SetInt(&kv, "aura_radius", LevelSpecialValue);
  KeyValues::SetInt(&kv, "aura_search_team", 1);
  KeyValues::SetInt(&kv, "aura_search_type", 1);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_obsidian_destroyer_essence_aura", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Obsidian_Destroyer_EssenceAura::~CDOTA_Modifier_Obsidian_Destroyer_EssenceAura  (line 868, @0x0000000002c03a60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_EssenceAura::~CDOTA_Modifier_Obsidian_Destroyer_EssenceAura(
        CDOTA_Modifier_Obsidian_Destroyer_EssenceAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4546250;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_EssenceAura::~CDOTA_Modifier_Obsidian_Destroyer_EssenceAura  (line 868, @0x0000000002c03a80, libserver.so)  // inlines: ~CDOTA_Modifier_Obsidian_Destroyer_EssenceAura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_EssenceAura::~CDOTA_Modifier_Obsidian_Destroyer_EssenceAura(
        CDOTA_Modifier_Obsidian_Destroyer_EssenceAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4546250;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_EssenceAura::IsHidden  (line 873, @0x0000000002bfeb10, libserver.so)
bool __fastcall CDOTA_Modifier_Obsidian_Destroyer_EssenceAura::IsHidden(
        CDOTA_Modifier_Obsidian_Destroyer_EssenceAura *const this)
{
  return 1;
}


// CDOTA_Modifier_Obsidian_Destroyer_EssenceAura::OnCreated  (line 888, @0x0000000002beb400, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_mana"
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_EssenceAura::OnCreated(
        CDOTA_Modifier_Obsidian_Destroyer_EssenceAura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_mana = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_mana", -1, 0);
  else
    this->bonus_mana = 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_EssenceAura::OnRefresh  (line 897, @0x0000000002beaf20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_mana"
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_EssenceAura::OnRefresh(
        CDOTA_Modifier_Obsidian_Destroyer_EssenceAura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_mana = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_mana", -1, 0);
  else
    this->bonus_mana = 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_EssenceAura::DeclareFunctions  (line 907, @0x0000000002bd3410, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Obsidian_Destroyer_EssenceAura::GetModifierManaBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_EssenceAura::DeclareFunctions(
        CDOTA_Modifier_Obsidian_Destroyer_EssenceAura *const this)
{
  this->m_Functions[59].__pfn = CDOTA_Modifier_Obsidian_Destroyer_EssenceAura::GetModifierManaBonus;
  this->m_Functions[59].__delta = 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_EssenceAura::GetModifierManaBonus  (line 914, @0x0000000002bd6a50, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Obsidian_Destroyer_EssenceAura::GetModifierManaBonus(
        CDOTA_Modifier_Obsidian_Destroyer_EssenceAura *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    return 1uLL;
  *v3.m128i_i32 = this->bonus_mana;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect::~CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect  (line 926, @0x0000000002c03a10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect::~CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect(
        CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_4546570;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect::~CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect  (line 926, @0x0000000002c03a30, libserver.so)  // inlines: ~CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect::~CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect(
        CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_4546570;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect::OnCreated  (line 946, @0x0000000002bf2cd0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "restore_chance", "restore_amount"
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect::OnCreated(
        CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect *const this,
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
    this->restore_chance = 0;
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
  this->restore_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "restore_chance", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->restore_amount = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "restore_amount", -1, 0);
    return;
  }
LABEL_7:
  this->restore_amount = 0.0;
}


// CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect::DeclareFunctions  (line 957, @0x0000000002bd3430, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect::OnAbilityExecuted(CModifierParams const&)
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect::DeclareFunctions(
        CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect *const this)
{
  this->m_Functions[128].__pfn = CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect::OnAbilityExecuted;
  this->m_Functions[128].__delta = 0;
}


// CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect::OnAbilityExecuted  (line 964, @0x0000000002bdb3d0, libserver.so)  // inlines: CEntityHandle, CHandle, FStrEq, Get, GetAbilityName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetMaxMana, GetSerialNumber, IndexToIdentity, IsAbilityAnItem, IsValid, LookupEntity, Set, _V_strcmp, operator CDOTABaseAbility*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTABaseAbility::GetCaster, CDOTA_Buff::GetParent, RollPseudoRandomPercentage, CDOTA_BaseNPC::SetMana, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound
// strings: "invoker_invoke", "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_essence_effect.vpcf", "Hero_ObsidianDestroyer.EssenceAura"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect::OnAbilityExecuted(
        CDOTA_Modifier_Obsidian_Destroyer_EssenceAura_Effect *const this,
        const CModifierParams *const params)
{
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTABaseAbility *m_pInstance; // r12
  CEntityIdentity *m_pEntity; // rax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  const char **p_m_pszAbilityName; // rax
  const char *v12; // rsi
  CDOTA_BaseNPC *Caster; // r13
  float m_Value; // xmm0_4
  float v15; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v18; // rax
  int v19; // [rsp+0h] [rbp-30h]
  ModifierVariant_t result; // 0:rax.16

  if ( params->ability.m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->ability.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 1uLL;
  if ( params->ability.m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    return 1uLL;
  m_pEntity = m_pInstance->m_pEntity;
  v19 = -1;
  if ( m_pEntity != 0 )
  {
    v8 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v19 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v8 & 0x7FFF;
  }
  if ( (v19 + 2) <= 1
    || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v19 >> 9) & 0x3F]) == 0
    || (v10 = &v9[v19 & 0x1FF]) == 0
    || v19 != v10->m_EHandle.m_Index
    || v10->m_pInstance == 0
    || (LOBYTE(result.m_szVal) = (*(v10->m_pInstance->_vptr_IHandleEntity + 223))(v10->m_pInstance),
        *&result.m_eType = 1,
        LOBYTE(result.m_szVal) == 0) )
  {
    p_m_pszAbilityName = &m_pInstance->m_pAbilityData->m_pszAbilityName;
    if ( p_m_pszAbilityName == 0
      || (v12 = *p_m_pszAbilityName, *p_m_pszAbilityName == 0)
      || v12 != "invoker_invoke" && strcmp(v12, "invoker_invoke") != 0 )
    {
      Caster = CDOTABaseAbility::GetCaster(m_pInstance);
      if ( Caster != 0
        && Caster == CDOTA_Buff::GetParent(this)
        && ((*(m_pInstance->_vptr_IHandleEntity + 239))(m_pInstance) != 0 || Caster == CDOTA_Buff::GetCaster(this))
        && RollPseudoRandomPercentage(this->restore_chance, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_OD_ESSENCE, Caster)
        && (Caster == CDOTA_Buff::GetCaster(this)
         || (*(m_pInstance->_vptr_IHandleEntity + 242))(m_pInstance, 0xFFFFFFFFLL) > 0.0) )
      {
        m_Value = Caster->m_flMaxMana.m_Value;
        v15 = ((this->restore_amount * m_Value) / 100.0) + Caster->m_flMana.m_Value;
        CDOTA_BaseNPC::SetMana(Caster, fminf(m_Value, v15), v15);
        ParticleManager = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_essence_effect.vpcf",
                     1,
                     Caster,
                     0,
                     0);
        v18 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v18, Particle);
        DOTA_EmitSound(1, "Hero_ObsidianDestroyer.EssenceAura", Caster);
      }
    }
    return 1uLL;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::~CDOTA_Ability_Obsidian_Destroyer_SanityEclipse  (line 1008, @0x0000000002c05490, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::~CDOTA_Ability_Obsidian_Destroyer_SanityEclipse(
        CDOTA_Ability_Obsidian_Destroyer_SanityEclipse *const this)
{
  this->_vptr_IHandleEntity = &off_45468D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::~CDOTA_Ability_Obsidian_Destroyer_SanityEclipse  (line 1008, @0x0000000002c054b0, libserver.so)  // inlines: ~CDOTA_Ability_Obsidian_Destroyer_SanityEclipse
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::~CDOTA_Ability_Obsidian_Destroyer_SanityEclipse(
        CDOTA_Ability_Obsidian_Destroyer_SanityEclipse *const this)
{
  this->_vptr_IHandleEntity = &off_45468D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::Schema_DynamicBinding  (line 1010, @0x0000000002bfeb20, libserver.so)
// globals: CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::Schema_DynamicBinding(
        const CDOTA_Ability_Obsidian_Destroyer_SanityEclipse *const this)
{
  return CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::s_pSchemaBinding;
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1010, @0x0000000002bfeb30, libserver.so)
// globals: CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::DestructInstance  (line 1010, @0x0000000002bfeb40, libserver.so)  // inlines: Destruct<CDOTA_Ability_Obsidian_Destroyer_SanityEclipse>
void __fastcall CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::FreeInstance  (line 1010, @0x0000000002bfeb60, libserver.so)
void __fastcall CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::CanAllocate  (line 1010, @0x0000000002bfeb80, libserver.so)
bool __fastcall CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1010, @0x0000000002bfeb90, libserver.so)
// globals: CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::s_pSchemaBinding;
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::AllocateInstance  (line 1010, @0x0000000002c02330, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::ConstructInstance  (line 1010, @0x0000000002c04a60, libserver.so)  // inlines: CDOTA_Ability_Obsidian_Destroyer_SanityEclipse, Construct<CDOTA_Ability_Obsidian_Destroyer_SanityEclipse>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45468D0;
  }
  return p;
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1010, @0x0000000002c0aa50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1010, @0x0000000002c0aa70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInternal  (line 1010, @0x0000000002c13180, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "obsidian_destroyer_sanity_eclipse", "CDOTA_Ability_Obsidian_Destroyer_SanityEclipse"
// globals: `guard variable for'CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClass, CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClass, __dso_handle, CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClassInfo, CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClassInfo
CEntityClass *__cdecl CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClass);
    CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClass._vptr_CEntityClass = off_4546850;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClass);
    __cxa_atexit(
      CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClass != 0 )
    return &CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClass;
  if ( `guard variable for'CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClassInfo,
      "CDOTA_Ability_Obsidian_Destroyer_SanityEclipse",
      "obsidian_destroyer_sanity_eclipse",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClassInfo);
  }
  CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClass.m_pClassInfo = &CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClassInfo;
  CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClass.m_pBaseClassInfo = CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClass = &CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClass;
  CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClassInfo.m_pClass = &CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClass;
  CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Obsidian_Destroyer_SanityEclipseClass;
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetAssociatedSecondaryAbilities  (line 1025, @0x0000000002bfeba0, libserver.so)
// strings: "obsidian_destroyer_astral_imprisonment"
const char *__fastcall CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Obsidian_Destroyer_SanityEclipse *const this)
{
  return "obsidian_destroyer_astral_imprisonment";
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::YouForgotToImplementOrDeclareServerClass  (line 1032, @0x0000000002bd3450, libserver.so)
int __fastcall CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Obsidian_Destroyer_SanityEclipse *const this)
{
  return 0;
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetServerClass  (line 1032, @0x0000000002bdcc60, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetServerClass(
        CDOTA_Ability_Obsidian_Destroyer_SanityEclipse *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::ApplySanityEclipse  (line 1041, @0x0000000002be9c70, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FindModifierByName, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetMana, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleFoWProperties, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, DOTA_EmitSoundLocationWithCaster, CDOTABaseAbility::GetCaster, CDOTAGamerules::SendProjectionAbilityMessage, CDOTA_BaseNPC::SetMana (20 total)
// callers: CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker::OnIntervalThink, CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::OnSpellStart
// strings: "damage_multiplier", "damage_multiplier_scepter", "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_sanity_eclipse_area.vpc, "Hero_ObsidianDestroyer.SanityEclipse.Cast", "Hero_ObsidianDestroyer.SanityEclipse", "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_sanity_eclipse_mana_los (8 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::ApplySanityEclipse(
        CDOTA_Ability_Obsidian_Destroyer_SanityEclipse *const this,
        CDOTA_BaseNPC *pCaster,
        const Vector *const vLocation)
{
  int LevelSpecialValue; // ebx
  __m128i v7; // xmm5
  int m_Value; // edi
  float v9; // xmm0_4
  float v10; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // ebx
  CDOTA_BaseNPC *Caster; // rax
  float v21; // xmm3_4
  __int64 v22; // r13
  CHandle<CBaseEntity> *v23; // rdx
  uint32 m_Index; // eax
  __int16 v25; // cx
  CEntityIdentity *v26; // rdx
  CEntityIdentity *v27; // rdx
  CEntityInstance *m_pInstance; // rbx
  CDOTA_BaseNPC *v29; // r12
  int (**vptr_IHandleEntity)(...); // rax
  float v31; // xmm1_4
  CDOTA_ParticleManager *v32; // rax
  int v33; // r15d
  CDOTA_ParticleManager *v34; // rax
  __m128i v35; // xmm0
  int v36; // r15d
  int v37; // r15d
  CDOTA_ParticleManager *v38; // rax
  int v39; // ebx
  CDOTA_ParticleManager *v40; // rax
  CModifieractoryDictionary *v41; // rax
  IModifierFactory *Factory; // rax
  int damage_multiplier_scepter; // [rsp+2Ch] [rbp-84h]
  int damage_multiplier; // [rsp+38h] [rbp-78h]
  int mana_drain; // [rsp+3Ch] [rbp-74h]
  int bIsImprisoned; // [rsp+40h] [rbp-70h]
  Vector vPos; // [rsp+50h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+60h] [rbp-50h] BYREF

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  damage_multiplier = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_multiplier", -1, 0);
  damage_multiplier_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_multiplier_scepter", -1, 0);
  mana_drain = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "mana_drain", -1, 0);
  if ( pCaster != 0 )
  {
    *v7.m128i_i32 = LevelSpecialValue;
    m_Value = pCaster->m_iTeamNum.m_Value;
    v9 = LevelSpecialValue;
    hEntities.m_Size = 0;
    v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    FindUnitsInRadius(m_Value, vLocation, pCaster, v9, &hEntities, 2, 1, &stru_40050, 0, 0);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_sanity_eclipse_area.vpcf",
                 2,
                 0,
                 0,
                 0);
    v13 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v13, Particle, 0, *&vLocation->x, vLocation->z);
    vPos.x = v10;
    vPos.y = v10;
    v14 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v14, Particle, 1, *&vPos.x, 1.0);
    vPos.x = v10;
    vPos.y = v10;
    vPos.z = v10;
    v15 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v15, Particle, 2, *&vPos.x, v10);
    v16 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleFoWProperties(v16, Particle, 0, -1, v10);
    v17 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v17, Particle);
    CDOTA_BaseNPC::UnitEmitSound(pCaster, "Hero_ObsidianDestroyer.SanityEclipse.Cast", 0.0, 0, 0);
    vPos = *vLocation;
    DOTA_EmitSoundLocationWithCaster(&vPos, "Hero_ObsidianDestroyer.SanityEclipse", pCaster);
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityMessage(
      g_pGameRules,
      Caster,
      0,
      m_iAbilityID,
      0,
      0,
      *&vPos.x,
      vPos.z,
      -1.0,
      v21);
    if ( hEntities.m_Size > 0 )
    {
      v22 = 0;
      while ( 1 )
      {
        v23 = &hEntities.m_Memory.m_pMemory[v22];
        m_Index = v23->m_Index;
        if ( v23->m_Index + 2 <= 1
          || (v25 = v23->m_Index,
              (v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v23->m_Index) >> 9) & 0x3F]) == 0)
          || (v27 = &v26[v25 & 0x1FF]) == 0
          || m_Index != v27->m_EHandle.m_Index
          || (m_pInstance = v27->m_pInstance, v27->m_pInstance == 0)
          || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
          || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
        {
          m_pInstance = 0;
        }
        v29 = 0;
        if ( (pCaster->m_iUnitType & 1) != 0 )
          v29 = pCaster;
        if ( m_pInstance != 0 )
        {
          if ( LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0 )
          {
            vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
            if ( (BYTE1(vptr_IHandleEntity) & 1) == 0 && vptr_IHandleEntity >= 0 )
              break;
          }
          v41 = ModifierFactoryDictionary();
          Factory = CModifieractoryDictionary::FindFactory(
                      v41,
                      "modifier_obsidian_destroyer_astral_imprisonment_prison");
          if ( CDOTA_ModifierManager::FindModifierByName(
                 &m_pInstance[64].m_worldGroupId,
                 Factory,
                 "modifier_obsidian_destroyer_astral_imprisonment_prison",
                 0) != 0 )
          {
            vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
            LOBYTE(bIsImprisoned) = 1;
            goto LABEL_18;
          }
        }
LABEL_23:
        if ( hEntities.m_Size <= ++v22 )
          goto LABEL_24;
      }
      LOBYTE(bIsImprisoned) = 0;
LABEL_18:
      if ( (BYTE1(vptr_IHandleEntity) & 2) == 0 )
      {
        v31 = (mana_drain * *&m_pInstance[44].m_worldGroupId.m_nHashCode) / 100.0;
        CDOTA_BaseNPC::SetMana(
          m_pInstance,
          *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id - fminf(*&m_pInstance[44].m_iszPrivateVScripts.u.m_Id, v31),
          v31);
        v32 = GetParticleManager();
        v33 = CDOTA_ParticleManager::CreateParticle(
                v32,
                "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_sanity_eclipse_mana_loss.vpcf",
                1,
                m_pInstance,
                0,
                0);
        v34 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v34, v33);
        *v35.m128i_i64 = (*(v29->_vptr_IHandleEntity + 498))(v29);
        v36 = (COERCE_FLOAT(_mm_cvtsi128_si32(v35)) - (*(m_pInstance->_vptr_IHandleEntity + 498))(m_pInstance));
        if ( v36 > 0 )
        {
          if ( CDOTA_BaseNPC::HasScepter(v29) )
            v37 = damage_multiplier_scepter * v36;
          else
            v37 = damage_multiplier * v36;
          ApplyDamage(v29, m_pInstance, this, v37, 2, (bIsImprisoned << 31 >> 31) & 4);
          v38 = GetParticleManager();
          v39 = CDOTA_ParticleManager::CreateParticle(
                  v38,
                  "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_sanity_eclipse_damage.vpcf",
                  1,
                  m_pInstance,
                  0,
                  0);
          v40 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v40, v39);
        }
      }
      goto LABEL_23;
    }
LABEL_24:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  }
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::OnSpellStart  (line 1141, @0x0000000002bf0410, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorPosition, FindUnitsInRadius, CDOTA_BaseNPC::HasScepter, CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::ApplySanityEclipse, CDOTA_BaseNPC::UnitEmitSound, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (21 total)
// strings: "obsidian_destroyer_astral_imprisonment", "Hero_ObsidianDestroyer.AstralImprisonment.Cast", "modifier_obsidian_destroyer_astral_imprisonment_prison", "prison_duration", "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_prison_start.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::OnSpellStart(
        CDOTA_Ability_Obsidian_Destroyer_SanityEclipse *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  __m128i v3; // xmm2
  float v4; // r14d
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  __int64 v10; // rbx
  CHandle<CBaseEntity> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *m_pInstance; // r12
  float v17; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTABaseAbility *pAbility; // [rsp+20h] [rbp-90h]
  Vector vPosition; // [rsp+30h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  pAbility = CDOTA_BaseNPC::FindAbilityByName(Caster, "obsidian_destroyer_astral_imprisonment", 0);
  hEntities.m_Size = 0;
  *v3.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  v5 = CDOTABaseAbility::GetCaster(this);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v6->m_iTeamNum.m_Value, &vPosition, v5, v4, &hEntities, 2, 1, 0, 0, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v7) && pAbility != 0 && pAbility->m_iLevel.m_Value > 0 && hEntities.m_Size > 0 )
  {
    vPosition = CDOTABaseAbility::GetCursorPosition(this);
    v8 = CDOTABaseAbility::GetCaster(this);
    CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::ApplySanityEclipse(this, v8, &vPosition);
    v9 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v9, "Hero_ObsidianDestroyer.AstralImprisonment.Cast", 0.0, 0, 0);
    if ( hEntities.m_Size > 0 )
    {
      v10 = 0;
      do
      {
        v11 = &hEntities.m_Memory.m_pMemory[v10];
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
              if ( v15->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                && LOBYTE(m_pInstance[71].m_pEntity) == 0
                && (*(m_pInstance->_vptr_IHandleEntity + 408))(v15->m_pInstance) != 0 )
              {
                KeyValues::KeyValues(&kv2, "modifier_obsidian_destroyer_astral_imprisonment_prison");
                CDOTABaseAbility::GetLevelSpecialValueFor<float>(pAbility, "prison_duration", -1, 0);
                KeyValues::SetFloat(&kv2, "duration", v17);
                v18 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(
                  m_pInstance,
                  v18,
                  pAbility,
                  "modifier_obsidian_destroyer_astral_imprisonment_prison",
                  &kv2,
                  0);
                v19 = CDOTABaseAbility::GetCaster(this);
                ParticleManager = GetParticleManager();
                LODWORD(v19) = CDOTA_ParticleManager::CreateParticle(
                                 ParticleManager,
                                 "particles/units/heroes/hero_obsidian_destroyer/obsidian_destroyer_prison_start.vpcf",
                                 2,
                                 m_pInstance,
                                 0,
                                 v19);
                AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
                v22 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(
                  v22,
                  v19,
                  0,
                  m_pInstance,
                  5,
                  "attach_hitloc",
                  *AbsOrigin,
                  1);
                v23 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v23, v19, 1, m_pInstance, 1, 0, vec3_invalid, 1);
                v24 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v24, v19);
                v25 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::UnitEmitSound(v25, "Hero_ObsidianDestroyer.AstralImprisonment.Cast", 0.0, 0, 0);
                KeyValues::~KeyValues(&kv2);
              }
            }
          }
        }
        ++v10;
      }
      while ( hEntities.m_Size > v10 );
    }
  }
  else
  {
    vPosition = CDOTABaseAbility::GetCursorPosition(this);
    v26 = CDOTABaseAbility::GetCaster(this);
    CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::ApplySanityEclipse(this, v26, &vPosition);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetAbilityDamageToTargetOverInterval  (line 1190, @0x0000000002be9200, libserver.so)  // inlines: Max<float>, ToDOTABaseNPCHero
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "damage_multiplier"
__int64 __fastcall CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Obsidian_Destroyer_SanityEclipse *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // r13
  __m128i v9; // xmm0
  float LevelSpecialValue; // [rsp-2Ch] [rbp-2Ch]
  float v11; // [rsp-2Ch] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
      v8 = Caster;
    else
      v8 = 0;
    result = 0;
    if ( pTarget != 0 && (pTarget->m_iUnitType & 1) != 0 && v8 != 0 )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_multiplier", -1, 0);
      *v9.m128i_i64 = (*(v8->_vptr_IHandleEntity + 498))(v8);
      v11 = fmaxf(0.0, COERCE_FLOAT(_mm_cvtsi128_si32(v9)) - (*(pTarget->_vptr_IHandleEntity + 498))(pTarget))
          * LevelSpecialValue;
      return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * v11);
    }
  }
  return result;
}


// CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker::~CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker  (line 1209, @0x0000000002c039c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker::~CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker(
        CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4547390;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker::~CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker  (line 1209, @0x0000000002c039e0, libserver.so)  // inlines: ~CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker::~CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker(
        CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4547390;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker::IsHidden  (line 1216, @0x0000000002bfebb0, libserver.so)
bool __fastcall CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker::IsHidden(
        CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker::OnCreated  (line 1224, @0x0000000002befbb0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "obsidian_destroyer_astral_imprisonment", "prison_duration"
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker::OnCreated(
        CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm1_4

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "obsidian_destroyer_astral_imprisonment", 0);
  if ( AbilityByName != 0 )
  {
    v6 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "prison_duration", -1, 0) + 0.05;
    CDOTA_Buff::StartIntervalThink(this, v6, v7);
  }
  else
  {
    CDOTA_Buff::StartIntervalThink(this, 0.050000001, v5);
  }
}


// CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker::OnIntervalThink  (line 1241, @0x0000000002bea160, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::ApplySanityEclipse, UTIL_Remove
void __fastcall CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker::OnIntervalThink(
        CDOTA_Modifier_Obsidian_Destroyer_Sanity_Eclipse_Thinker *const this)
{
  CDOTA_Ability_Obsidian_Destroyer_SanityEclipse *Ability; // r12
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::ApplySanityEclipse(Ability, Caster, AbsOrigin);
  }
  v6 = CDOTA_Buff::GetParent(this);
  UTIL_Remove(v6);
}


