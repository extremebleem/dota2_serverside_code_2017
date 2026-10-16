// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_necrolyte.cpp:34
class CDOTA_Unit_Hero_Necrolyte : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Necrolyte(CDOTA_Unit_Hero_Necrolyte &);
	CDOTA_Unit_Hero_Necrolyte(CDOTA_Unit_Hero_Necrolyte &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	CDOTA_Unit_Hero_Necrolyte();
	virtual ~CDOTA_Unit_Hero_Necrolyte();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// sizeof = 5880
};

// src/game/shared/dota/units/dota_unit_hero_necrolyte.cpp:57
class C_CDOTA_Unit_Hero_Necrolyte_MapInstall {
	C_CDOTA_Unit_Hero_Necrolyte_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_necrolyte.cpp:99
class CDOTA_Ability_Necrolyte_Sadist_Stop : public CDOTABaseAbility {
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
	CDOTA_Ability_Necrolyte_Sadist_Stop(CDOTA_Ability_Necrolyte_Sadist_Stop &);
	CDOTA_Ability_Necrolyte_Sadist_Stop(CDOTA_Ability_Necrolyte_Sadist_Stop &);
	CDOTA_Ability_Necrolyte_Sadist_Stop();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool ProcsMagicStick();
	virtual void OnSpellStart();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_Necrolyte_Sadist_Stop();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[239] ProcsMagicStick
	// vtable[266] OnSpellStart
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_necrolyte.cpp:134
class CDOTA_Ability_Necrolyte_Sadist : public CDOTABaseAbility {
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
	CDOTA_Ability_Necrolyte_Sadist(CDOTA_Ability_Necrolyte_Sadist &);
	CDOTA_Ability_Necrolyte_Sadist(CDOTA_Ability_Necrolyte_Sadist &);
	CDOTA_Ability_Necrolyte_Sadist();
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
	virtual ~CDOTA_Ability_Necrolyte_Sadist();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_necrolyte.cpp:144
class C_CDOTA_Ability_Necrolyte_Sadist_MapInstall {
	C_CDOTA_Ability_Necrolyte_Sadist_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_necrolyte.cpp:194
class CDOTA_Modifier_Necrolyte_Sadist_Active : public CDOTA_Buff {
public:

private:

	int heal_bonus;  // +0xba8
	int bonus_damage;  // +0xbac
	int slow_aoe;  // +0xbb0
	CDOTA_Modifier_Necrolyte_Sadist_Active();
	virtual bool IsDebuff();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual ModifierVariant_t GetModifierInvisibilityLevel(const CModifierParams &);
	virtual ModifierVariant_t GetModifierHealAmplify_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierMagicalResistanceDecrepifyUnique(const CModifierParams &);
	ModifierVariant_t OnStateChanged(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual bool IsPermanent();
	virtual bool IsPurgable();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Necrolyte_Sadist_Active();

	// vtable[12] IsDebuff
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[89] GetModifierInvisibilityLevel
	// vtable[90] GetModifierHealAmplify_Percentage
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[23] IsPermanent
	// vtable[14] IsPurgable
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_necrolyte.cpp:303
class CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect : public CDOTA_Buff {
public:

private:

	int movement_speed;  // +0xba8
	CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_necrolyte.cpp:344
class CDOTA_Ability_Necrolyte_Death_Pulse : public CDOTABaseAbility {
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
	CDOTA_Ability_Necrolyte_Death_Pulse(CDOTA_Ability_Necrolyte_Death_Pulse &);
	CDOTA_Ability_Necrolyte_Death_Pulse(CDOTA_Ability_Necrolyte_Death_Pulse &);
	CDOTA_Ability_Necrolyte_Death_Pulse();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetCooldown(int);
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual const char * GetIntrinsicModifierName();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Necrolyte_Death_Pulse();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[242] GetCooldown
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[280] GetIntrinsicModifierName
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_necrolyte.cpp:374
class C_CDOTA_Ability_Necrolyte_Death_Pulse_MapInstall {
	C_CDOTA_Ability_Necrolyte_Death_Pulse_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_necrolyte.cpp:487
class CDOTA_Modifier_Necrolyte_Death_Pulse : public CDOTA_Buff {
public:

private:

	bool m_bStackCountChanged;  // +0xba8

	CDOTA_Modifier_Necrolyte_Death_Pulse();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ~CDOTA_Modifier_Necrolyte_Death_Pulse();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_necrolyte.cpp:620
class CDOTA_Modifier_Necrolyte_Death_Pulse_Counter : public CDOTA_Buff {
public:

private:

	int mana_regen;  // +0xba8
	int health_regen;  // +0xbac
	CDOTA_Modifier_Necrolyte_Death_Pulse_Counter();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierConstantManaRegen(const CModifierParams &);
	virtual bool DestroyOnExpire();
	virtual ~CDOTA_Modifier_Necrolyte_Death_Pulse_Counter();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[61] DestroyOnExpire
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_necrolyte.cpp:687
class CDOTA_Ability_Necrolyte_Heartstopper_Aura : public CDOTABaseAbility {
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
	CDOTA_Ability_Necrolyte_Heartstopper_Aura(CDOTA_Ability_Necrolyte_Heartstopper_Aura &);
	CDOTA_Ability_Necrolyte_Heartstopper_Aura(CDOTA_Ability_Necrolyte_Heartstopper_Aura &);
	CDOTA_Ability_Necrolyte_Heartstopper_Aura();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Necrolyte_Heartstopper_Aura();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_necrolyte.cpp:699
class CDOTA_Modifier_Necrolyte_Heartstopper_Aura : public CDOTA_Buff {
public:

private:

	int aura_radius;  // +0xba8
	CDOTA_Modifier_Necrolyte_Heartstopper_Aura();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Necrolyte_Heartstopper_Aura();

	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_necrolyte.cpp:729
class CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect : public CDOTA_Buff {
public:

private:

	float aura_damage;  // +0xba8
	CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_necrolyte.cpp:788
class CDOTA_Ability_Necrolyte_ReapersScythe : public CDOTABaseAbility {
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
	CDOTA_Ability_Necrolyte_ReapersScythe(CDOTA_Ability_Necrolyte_ReapersScythe &);
	CDOTA_Ability_Necrolyte_ReapersScythe(CDOTA_Ability_Necrolyte_ReapersScythe &);
	CDOTA_Ability_Necrolyte_ReapersScythe();
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
	virtual float GetCooldown(int);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Necrolyte_ReapersScythe();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[242] GetCooldown
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_necrolyte.cpp:801
class C_CDOTA_Ability_Necrolyte_ReapersScythe_MapInstall {
	C_CDOTA_Ability_Necrolyte_ReapersScythe_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_necrolyte.cpp:888
class CDOTA_Modifier_Necrolyte_ReapersScythe : public CDOTA_Modifier_Stunned {
public:

private:

	float stun_duration;  // +0xba8
	bool m_bIllusion;  // +0xbac
	bool m_bArcWardenClone;  // +0xbad
	CDOTA_Modifier_Necrolyte_ReapersScythe();
	virtual int GetAttributes();
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	ModifierVariant_t OnTakeDamageKillCredit(const CModifierParams &);
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Necrolyte_ReapersScythe();

	// vtable[7] GetAttributes
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_necrolyte.cpp:1037
class CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime : public CDOTA_Buff {
public:

private:

	int respawn_constant;  // +0xba8
	CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime();
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t GetModifierStackingRespawnTime(const CModifierParams &);
	virtual ~CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime();

	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Necrolyte::~CDOTA_Unit_Hero_Necrolyte  (line 34, @0x0000000002ac6850, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Necrolyte::~CDOTA_Unit_Hero_Necrolyte(CDOTA_Unit_Hero_Necrolyte *const this)
{
  this->_vptr_IHandleEntity = &off_44019B0;
  this->_vptr_INextBotEventResponder = &off_4402990;
  this->_vptr_CObstructionObject = &off_4402CC0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Necrolyte::~CDOTA_Unit_Hero_Necrolyte  (line 34, @0x0000000002ac6890, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Necrolyte
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Necrolyte::~CDOTA_Unit_Hero_Necrolyte(CDOTA_Unit_Hero_Necrolyte *const this)
{
  this->_vptr_IHandleEntity = &off_44019B0;
  this->_vptr_INextBotEventResponder = &off_4402990;
  this->_vptr_CObstructionObject = &off_4402CC0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Necrolyte::Schema_DynamicBinding  (line 36, @0x0000000002ab97f0, libserver.so)
// globals: CDOTA_Unit_Hero_Necrolyte::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Necrolyte::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Necrolyte *const this)
{
  return CDOTA_Unit_Hero_Necrolyte::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 36, @0x0000000002ab9820, libserver.so)
// globals: CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::DestructInstance  (line 36, @0x0000000002ab9830, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Necrolyte>
void __fastcall CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::FreeInstance  (line 36, @0x0000000002ab9850, libserver.so)
void __fastcall CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::CanAllocate  (line 36, @0x0000000002ab9870, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 36, @0x0000000002ab9880, libserver.so)
// globals: CDOTA_Unit_Hero_Necrolyte::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Necrolyte::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::AllocateInstance  (line 36, @0x0000000002abf000, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5880);
  memset(v1, 0, 0x16F8u);
  return v1;
}


// CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::ConstructInstance  (line 36, @0x0000000002ac4990, libserver.so)  // inlines: CDOTA_Unit_Hero_Necrolyte, Construct<CDOTA_Unit_Hero_Necrolyte>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *(p + 1467) = 0;
    *p = &off_44019B0;
    *(p + 236) = &off_4402990;
    *(p + 257) = &off_4402CC0;
    *(p + 1468) = -1;
  }
  return p;
}


// CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x0000000002acd110, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x0000000002acd410, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Necrolyte::GetEntityClassInternal  (line 36, @0x0000000002add830, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_hero_necrolyte", "CDOTA_Unit_Hero_Necrolyte"
// globals: `guard variable for'CDOTA_Unit_Hero_Necrolyte::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClass, CDOTA_Unit_Hero_Necrolyte::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClass, __dso_handle, CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Necrolyte::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClassInfo, CDOTA_Unit_Hero_Necrolyte::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Necrolyte::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Necrolyte::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Necrolyte::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Necrolyte::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClass);
    CDOTA_Unit_Hero_Necrolyte::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClass._vptr_CEntityClass = off_4401930;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Necrolyte::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Necrolyte::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_NecrolyteClass != 0 )
    return &CDOTA_Unit_Hero_Necrolyte::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Necrolyte::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Necrolyte::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Necrolyte::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClassInfo,
      "CDOTA_Unit_Hero_Necrolyte",
      "npc_dota_hero_necrolyte",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Necrolyte::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClassInfo);
  }
  CDOTA_Unit_Hero_Necrolyte::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClass.m_pClassInfo = &CDOTA_Unit_Hero_Necrolyte::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClassInfo;
  CDOTA_Unit_Hero_Necrolyte::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Necrolyte::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_NecrolyteClass = &CDOTA_Unit_Hero_Necrolyte::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClass;
  CDOTA_Unit_Hero_Necrolyte::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClassInfo.m_pClass = &CDOTA_Unit_Hero_Necrolyte::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClass;
  CDOTA_Unit_Hero_Necrolyte::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_NecrolyteClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Necrolyte::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NecrolyteClass;
}


// CDOTA_Unit_Hero_Necrolyte::YouForgotToImplementOrDeclareServerClass  (line 57, @0x0000000002a77db0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Necrolyte::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Necrolyte *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Necrolyte::GetServerClass  (line 57, @0x0000000002a89970, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Necrolyte::GetServerClass(CDOTA_Unit_Hero_Necrolyte *const this)
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


// CDOTA_Unit_Hero_Necrolyte::Precache  (line 67, @0x0000000002a7b230, libserver.so)
// calls: PrecacheParticleSystem, CDOTA_BaseNPC_Hero::Precache
// strings: "particles/units/heroes/hero_necrolyte/necrolyte_spirit_debuff.vpcf"
void __fastcall CDOTA_Unit_Hero_Necrolyte::Precache(
        CDOTA_Unit_Hero_Necrolyte *const this,
        const CEntityPrecacheContext *pContext)
{
  PrecacheParticleSystem("particles/units/heroes/hero_necrolyte/necrolyte_spirit_debuff.vpcf", pContext);
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
}


// CDOTA_Ability_Necrolyte_Sadist_Stop::~CDOTA_Ability_Necrolyte_Sadist_Stop  (line 99, @0x0000000002ac57a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Necrolyte_Sadist_Stop::~CDOTA_Ability_Necrolyte_Sadist_Stop(
        CDOTA_Ability_Necrolyte_Sadist_Stop *const this)
{
  this->_vptr_IHandleEntity = &off_4402D90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Necrolyte_Sadist_Stop::~CDOTA_Ability_Necrolyte_Sadist_Stop  (line 99, @0x0000000002ac57c0, libserver.so)  // inlines: ~CDOTA_Ability_Necrolyte_Sadist_Stop
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Necrolyte_Sadist_Stop::~CDOTA_Ability_Necrolyte_Sadist_Stop(
        CDOTA_Ability_Necrolyte_Sadist_Stop *const this)
{
  this->_vptr_IHandleEntity = &off_4402D90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Necrolyte_Sadist_Stop::Schema_DynamicBinding  (line 101, @0x0000000002ab9890, libserver.so)
// globals: CDOTA_Ability_Necrolyte_Sadist_Stop::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necrolyte_Sadist_Stop::Schema_DynamicBinding(
        const CDOTA_Ability_Necrolyte_Sadist_Stop *const this)
{
  return CDOTA_Ability_Necrolyte_Sadist_Stop::s_pSchemaBinding;
}


// CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 101, @0x0000000002ab98a0, libserver.so)
// globals: CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::DestructInstance  (line 101, @0x0000000002ab98b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Necrolyte_Sadist_Stop>
void __fastcall CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::FreeInstance  (line 101, @0x0000000002ab98d0, libserver.so)
void __fastcall CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::CanAllocate  (line 101, @0x0000000002ab98f0, libserver.so)
bool __fastcall CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 101, @0x0000000002ab9900, libserver.so)
// globals: CDOTA_Ability_Necrolyte_Sadist_Stop::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necrolyte_Sadist_Stop::s_pSchemaBinding;
}


// CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::AllocateInstance  (line 101, @0x0000000002abf040, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::ConstructInstance  (line 101, @0x0000000002ac2bd0, libserver.so)  // inlines: CDOTA_Ability_Necrolyte_Sadist_Stop, Construct<CDOTA_Ability_Necrolyte_Sadist_Stop>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4402D90;
  }
  return p;
}


// CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 101, @0x0000000002acc1a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 101, @0x0000000002acc1c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInternal  (line 101, @0x0000000002add980, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "necrolyte_sadist_stop", "CDOTA_Ability_Necrolyte_Sadist_Stop"
// globals: `guard variable for'CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClass, CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClass, __dso_handle, CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClassInfo, CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClassInfo
CEntityClass *__cdecl CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClass);
    CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClass._vptr_CEntityClass = off_4402D10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClass);
    __cxa_atexit(
      CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Necrolyte_Sadist_StopClass != 0 )
    return &CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClass;
  if ( `guard variable for'CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClassInfo,
      "CDOTA_Ability_Necrolyte_Sadist_Stop",
      "necrolyte_sadist_stop",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClassInfo);
  }
  CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClass.m_pClassInfo = &CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClassInfo;
  CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClass.m_pBaseClassInfo = CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Necrolyte_Sadist_StopClass = &CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClass;
  CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClassInfo.m_pClass = &CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClass;
  CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Necrolyte_Sadist_StopClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Necrolyte_Sadist_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Sadist_StopClass;
}


// CDOTA_Ability_Necrolyte_Sadist_Stop::ProcsMagicStick  (line 104, @0x0000000002ab9910, libserver.so)
bool __fastcall CDOTA_Ability_Necrolyte_Sadist_Stop::ProcsMagicStick(CDOTA_Ability_Necrolyte_Sadist_Stop *const this)
{
  return 0;
}


// CDOTA_Ability_Necrolyte_Sadist_Stop::GetAssociatedPrimaryAbilities  (line 107, @0x0000000002ab9920, libserver.so)
// strings: "necrolyte_sadist"
const char *__fastcall CDOTA_Ability_Necrolyte_Sadist_Stop::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Necrolyte_Sadist_Stop *const this)
{
  return "necrolyte_sadist";
}


// CDOTA_Ability_Necrolyte_Sadist_Stop::IsHiddenWhenStolen  (line 108, @0x0000000002ab9930, libserver.so)
bool __fastcall CDOTA_Ability_Necrolyte_Sadist_Stop::IsHiddenWhenStolen(
        CDOTA_Ability_Necrolyte_Sadist_Stop *const this)
{
  return 1;
}


// CDOTA_Ability_Necrolyte_Sadist_Stop::OnSpellStart  (line 115, @0x0000000002a79d20, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy
// strings: "modifier_necrolyte_sadist_active"
void __fastcall CDOTA_Ability_Necrolyte_Sadist_Stop::OnSpellStart(CDOTA_Ability_Necrolyte_Sadist_Stop *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_necrolyte_sadist_active", 0);
  if ( ModifierByName != 0 )
    CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
}


// CDOTA_Ability_Necrolyte_Sadist::~CDOTA_Ability_Necrolyte_Sadist  (line 134, @0x0000000002ac57f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Necrolyte_Sadist::~CDOTA_Ability_Necrolyte_Sadist(
        CDOTA_Ability_Necrolyte_Sadist *const this)
{
  this->_vptr_IHandleEntity = &off_4403890;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Necrolyte_Sadist::~CDOTA_Ability_Necrolyte_Sadist  (line 134, @0x0000000002ac5810, libserver.so)  // inlines: ~CDOTA_Ability_Necrolyte_Sadist
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Necrolyte_Sadist::~CDOTA_Ability_Necrolyte_Sadist(
        CDOTA_Ability_Necrolyte_Sadist *const this)
{
  this->_vptr_IHandleEntity = &off_4403890;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Necrolyte_Sadist::Schema_DynamicBinding  (line 136, @0x0000000002ab9940, libserver.so)
// globals: CDOTA_Ability_Necrolyte_Sadist::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necrolyte_Sadist::Schema_DynamicBinding(
        const CDOTA_Ability_Necrolyte_Sadist *const this)
{
  return CDOTA_Ability_Necrolyte_Sadist::s_pSchemaBinding;
}


// CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 136, @0x0000000002ab9950, libserver.so)
// globals: CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::DestructInstance  (line 136, @0x0000000002ab9960, libserver.so)  // inlines: Destruct<CDOTA_Ability_Necrolyte_Sadist>
void __fastcall CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::FreeInstance  (line 136, @0x0000000002ab9980, libserver.so)
void __fastcall CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::CanAllocate  (line 136, @0x0000000002ab99a0, libserver.so)
bool __fastcall CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 136, @0x0000000002ab99b0, libserver.so)
// globals: CDOTA_Ability_Necrolyte_Sadist::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necrolyte_Sadist::s_pSchemaBinding;
}


// CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::AllocateInstance  (line 136, @0x0000000002abf080, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::ConstructInstance  (line 136, @0x0000000002ac2c00, libserver.so)  // inlines: CDOTA_Ability_Necrolyte_Sadist, Construct<CDOTA_Ability_Necrolyte_Sadist>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4403890;
  }
  return p;
}


// CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 136, @0x0000000002acc1f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 136, @0x0000000002acc210, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInternal  (line 136, @0x0000000002addad0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "necrolyte_sadist", "CDOTA_Ability_Necrolyte_Sadist"
// globals: `guard variable for'CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClass, CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClass, __dso_handle, CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClassInfo, CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClassInfo
CEntityClass *__cdecl CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClass);
    CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClass._vptr_CEntityClass = off_4403810;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClass);
    __cxa_atexit(
      CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Necrolyte_SadistClass != 0 )
    return &CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClass;
  if ( `guard variable for'CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClassInfo,
      "CDOTA_Ability_Necrolyte_Sadist",
      "necrolyte_sadist",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClassInfo);
  }
  CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClass.m_pClassInfo = &CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClassInfo;
  CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClass.m_pBaseClassInfo = CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Necrolyte_SadistClass = &CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClass;
  CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClassInfo.m_pClass = &CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClass;
  CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Necrolyte_SadistClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Necrolyte_Sadist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_SadistClass;
}


// CDOTA_Ability_Necrolyte_Sadist::YouForgotToImplementOrDeclareServerClass  (line 144, @0x0000000002a77dc0, libserver.so)
int __fastcall CDOTA_Ability_Necrolyte_Sadist::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Necrolyte_Sadist *const this)
{
  return 0;
}


// CDOTA_Ability_Necrolyte_Sadist::GetServerClass  (line 144, @0x0000000002a89b70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Necrolyte_Sadist::GetServerClass(CDOTA_Ability_Necrolyte_Sadist *const this)
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


// CDOTA_Ability_Necrolyte_Sadist::OnUpgrade  (line 153, @0x0000000002a7a760, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "necrolyte_sadist_stop"
void __fastcall CDOTA_Ability_Necrolyte_Sadist::OnUpgrade(CDOTA_Ability_Necrolyte_Sadist *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "necrolyte_sadist_stop", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Necrolyte_Sadist::OnSpellStart  (line 169, @0x0000000002a9a6a0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, CDOTA_BaseNPC::StartGesture, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_necrolyte_sadist_active", "Hero_Necrolyte.SpiritForm.Cast"
void __fastcall CDOTA_Ability_Necrolyte_Sadist::OnSpellStart(CDOTA_Ability_Necrolyte_Sadist *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_necrolyte_sadist_active");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_necrolyte_sadist_active", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Necrolyte.SpiritForm.Cast", v5);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v6, 1724, 0.1, 0.1, 9, 0, 1.0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::~CDOTA_Modifier_Necrolyte_Sadist_Active  (line 194, @0x0000000002ac15f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::~CDOTA_Modifier_Necrolyte_Sadist_Active(
        CDOTA_Modifier_Necrolyte_Sadist_Active *const this)
{
  this->_vptr_CDOTA_Buff = &off_4404350;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::~CDOTA_Modifier_Necrolyte_Sadist_Active  (line 194, @0x0000000002ac1610, libserver.so)  // inlines: ~CDOTA_Modifier_Necrolyte_Sadist_Active
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::~CDOTA_Modifier_Necrolyte_Sadist_Active(
        CDOTA_Modifier_Necrolyte_Sadist_Active *const this)
{
  this->_vptr_CDOTA_Buff = &off_4404350;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::IsDebuff  (line 199, @0x0000000002ab99c0, libserver.so)
bool __fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::IsDebuff(CDOTA_Modifier_Necrolyte_Sadist_Active *const this)
{
  return 0;
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::GetEffectName  (line 211, @0x0000000002ab99d0, libserver.so)
// strings: "particles/units/heroes/hero_necrolyte/necrolyte_spirit.vpcf"
const char *__fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::GetEffectName(
        CDOTA_Modifier_Necrolyte_Sadist_Active *const this)
{
  return "particles/units/heroes/hero_necrolyte/necrolyte_spirit.vpcf";
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::GetStatusEffectName  (line 212, @0x0000000002ab99e0, libserver.so)
// strings: "particles/status_fx/status_effect_necrolyte_spirit.vpcf"
const char *__fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::GetStatusEffectName(
        CDOTA_Modifier_Necrolyte_Sadist_Active *const this)
{
  return "particles/status_fx/status_effect_necrolyte_spirit.vpcf";
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::StatusEffectPriority  (line 213, @0x0000000002ab99f0, libserver.so)
int __fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::StatusEffectPriority(
        CDOTA_Modifier_Necrolyte_Sadist_Active *const this)
{
  return 30;
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::IsPermanent  (line 216, @0x0000000002ab9a00, libserver.so)
bool __fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::IsPermanent(CDOTA_Modifier_Necrolyte_Sadist_Active *const this)
{
  return 0;
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::IsPurgable  (line 217, @0x0000000002ab9a10, libserver.so)
bool __fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::IsPurgable(CDOTA_Modifier_Necrolyte_Sadist_Active *const this)
{
  return 1;
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::IsAura  (line 219, @0x0000000002ab9a20, libserver.so)
bool __fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::IsAura(CDOTA_Modifier_Necrolyte_Sadist_Active *const this)
{
  return 1;
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::GetModifierAura  (line 220, @0x0000000002ab9a30, libserver.so)
// strings: "modifier_necrolyte_sadist_aura_effect"
const char *__fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::GetModifierAura(
        CDOTA_Modifier_Necrolyte_Sadist_Active *const this)
{
  return "modifier_necrolyte_sadist_aura_effect";
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::GetAuraSearchTeam  (line 222, @0x0000000002ab9a40, libserver.so)
int __fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::GetAuraSearchTeam(
        CDOTA_Modifier_Necrolyte_Sadist_Active *const this)
{
  return 2;
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::GetAuraSearchType  (line 223, @0x0000000002ab9a50, libserver.so)
int __fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::GetAuraSearchType(
        CDOTA_Modifier_Necrolyte_Sadist_Active *const this)
{
  return 19;
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::GetAuraRadius  (line 224, @0x0000000002ab9a60, libserver.so)
int __fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::GetAuraRadius(
        CDOTA_Modifier_Necrolyte_Sadist_Active *const this)
{
  return this->slow_aoe;
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::OnCreated  (line 235, @0x0000000002aab200, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "heal_bonus", "slow_aoe"
void __fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::OnCreated(
        CDOTA_Modifier_Necrolyte_Sadist_Active *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->heal_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "heal_bonus", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_damage = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->heal_bonus = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_damage", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->slow_aoe = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "slow_aoe", -1, 0);
    return;
  }
LABEL_7:
  this->slow_aoe = 0;
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::DeclareFunctions  (line 242, @0x0000000002a77dd0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Necrolyte_Sadist_Active::GetModifierMagicalResistanceDecrepifyUnique(CModifierParams const&), CDOTA_Modifier_Necrolyte_Sadist_Active::OnStateChanged(CModifierParams const&)
void __fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::DeclareFunctions(
        CDOTA_Modifier_Necrolyte_Sadist_Active *const this)
{
  this->m_Functions[50].__pfn = CDOTA_Modifier_Necrolyte_Sadist_Active::GetModifierMagicalResistanceDecrepifyUnique;
  this->m_Functions[9].__pfn = (&stru_10 + 697);
  this->m_Functions[9].__delta = 0;
  this->m_Functions[32].__pfn = (&stru_10 + 705);
  this->m_Functions[32].__delta = 0;
  this->m_Functions[50].__delta = 0;
  this->m_Functions[135].__pfn = CDOTA_Modifier_Necrolyte_Sadist_Active::OnStateChanged;
  this->m_Functions[135].__delta = 0;
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::GetModifierInvisibilityLevel  (line 250, @0x0000000002a77e40, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::GetModifierInvisibilityLevel(
        CDOTA_Modifier_Necrolyte_Sadist_Active *const this,
        const CModifierParams *const params)
{
  return 0x3ECCCCCD00000001uLL;
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::GetModifierHealAmplify_Percentage  (line 255, @0x0000000002a77e60, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::GetModifierHealAmplify_Percentage(
        CDOTA_Modifier_Necrolyte_Sadist_Active *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->heal_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::CheckState  (line 262, @0x0000000002a77e80, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::CheckState(
        CDOTA_Modifier_Necrolyte_Sadist_Active *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 6uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFF9LL;
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::OnDestroy  (line 268, @0x0000000002a77ea0, libserver.so)
void __fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::OnDestroy(CDOTA_Modifier_Necrolyte_Sadist_Active *const this)
{
  ;
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::GetModifierMagicalResistanceDecrepifyUnique  (line 278, @0x0000000002a77eb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::GetModifierMagicalResistanceDecrepifyUnique(
        CDOTA_Modifier_Necrolyte_Sadist_Active *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Necrolyte_Sadist_Active::OnStateChanged  (line 283, @0x0000000002a82bc0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Necrolyte_Sadist_Active::OnStateChanged(
        CDOTA_Modifier_Necrolyte_Sadist_Active *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  m_pInstance = 0;
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[params->hunit.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) != 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect::~CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect  (line 303, @0x0000000002ac15a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect::~CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect(
        CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_4404690;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect::~CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect  (line 303, @0x0000000002ac15c0, libserver.so)  // inlines: ~CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect::~CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect(
        CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_4404690;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect::GetEffectName  (line 312, @0x0000000002ac2420, libserver.so)
// calls: CDOTA_Buff::GetParent
// strings: "particles/units/heroes/hero_necrolyte/necrolyte_spirit_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect::GetEffectName(
        CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  const char *v2; // rdx

  Parent = CDOTA_Buff::GetParent(this);
  v2 = 0;
  if ( SLOBYTE(Parent->m_iUnitType) >= 0 )
    return "particles/units/heroes/hero_necrolyte/necrolyte_spirit_debuff.vpcf";
  return v2;
}


// CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect::OnCreated  (line 320, @0x0000000002aa9f80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect::OnCreated(
        CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_speed", -1, 0);
  else
    this->movement_speed = 0;
}


// CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect::DeclareFunctions  (line 325, @0x0000000002a77ed0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect::DeclareFunctions(
        CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect::GetModifierMoveSpeedBonus_Percentage  (line 330, @0x0000000002a77ef0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Necrolyte_Sadist_Aura_Effect *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->movement_speed;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Necrolyte_Death_Pulse::~CDOTA_Ability_Necrolyte_Death_Pulse  (line 344, @0x0000000002ac5840, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Necrolyte_Death_Pulse::~CDOTA_Ability_Necrolyte_Death_Pulse(
        CDOTA_Ability_Necrolyte_Death_Pulse *const this)
{
  this->_vptr_IHandleEntity = &off_44049F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Necrolyte_Death_Pulse::~CDOTA_Ability_Necrolyte_Death_Pulse  (line 344, @0x0000000002ac5860, libserver.so)  // inlines: ~CDOTA_Ability_Necrolyte_Death_Pulse
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Necrolyte_Death_Pulse::~CDOTA_Ability_Necrolyte_Death_Pulse(
        CDOTA_Ability_Necrolyte_Death_Pulse *const this)
{
  this->_vptr_IHandleEntity = &off_44049F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Necrolyte_Death_Pulse::Schema_DynamicBinding  (line 346, @0x0000000002ab9a70, libserver.so)
// globals: CDOTA_Ability_Necrolyte_Death_Pulse::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necrolyte_Death_Pulse::Schema_DynamicBinding(
        const CDOTA_Ability_Necrolyte_Death_Pulse *const this)
{
  return CDOTA_Ability_Necrolyte_Death_Pulse::s_pSchemaBinding;
}


// CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 346, @0x0000000002ab9a80, libserver.so)
// globals: CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::DestructInstance  (line 346, @0x0000000002ab9a90, libserver.so)  // inlines: Destruct<CDOTA_Ability_Necrolyte_Death_Pulse>
void __fastcall CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::FreeInstance  (line 346, @0x0000000002ab9ab0, libserver.so)
void __fastcall CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::CanAllocate  (line 346, @0x0000000002ab9ad0, libserver.so)
bool __fastcall CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 346, @0x0000000002ab9ae0, libserver.so)
// globals: CDOTA_Ability_Necrolyte_Death_Pulse::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necrolyte_Death_Pulse::s_pSchemaBinding;
}


// CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::AllocateInstance  (line 346, @0x0000000002abf0c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::ConstructInstance  (line 346, @0x0000000002ac2c30, libserver.so)  // inlines: CDOTA_Ability_Necrolyte_Death_Pulse, Construct<CDOTA_Ability_Necrolyte_Death_Pulse>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44049F0;
  }
  return p;
}


// CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 346, @0x0000000002acc240, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 346, @0x0000000002acc260, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInternal  (line 346, @0x0000000002addc20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "necrolyte_death_pulse", "CDOTA_Ability_Necrolyte_Death_Pulse"
// globals: `guard variable for'CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClass, CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClass, __dso_handle, CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClassInfo, CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClassInfo
CEntityClass *__cdecl CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClass);
    CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClass._vptr_CEntityClass = off_4404970;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClass);
    __cxa_atexit(
      CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Necrolyte_Death_PulseClass != 0 )
    return &CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClass;
  if ( `guard variable for'CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClassInfo,
      "CDOTA_Ability_Necrolyte_Death_Pulse",
      "necrolyte_death_pulse",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClassInfo);
  }
  CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClass.m_pClassInfo = &CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClassInfo;
  CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClass.m_pBaseClassInfo = CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Necrolyte_Death_PulseClass = &CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClass;
  CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClassInfo.m_pClass = &CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClass;
  CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Necrolyte_Death_PulseClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Necrolyte_Death_Pulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Death_PulseClass;
}


// CDOTA_Ability_Necrolyte_Death_Pulse::GetIntrinsicModifierName  (line 369, @0x0000000002ab9af0, libserver.so)
// strings: "modifier_necrolyte_death_pulse"
const char *__fastcall CDOTA_Ability_Necrolyte_Death_Pulse::GetIntrinsicModifierName(
        CDOTA_Ability_Necrolyte_Death_Pulse *const this)
{
  return "modifier_necrolyte_death_pulse";
}


// CDOTA_Ability_Necrolyte_Death_Pulse::YouForgotToImplementOrDeclareServerClass  (line 374, @0x0000000002a77f10, libserver.so)
int __fastcall CDOTA_Ability_Necrolyte_Death_Pulse::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Necrolyte_Death_Pulse *const this)
{
  return 0;
}


// CDOTA_Ability_Necrolyte_Death_Pulse::GetServerClass  (line 374, @0x0000000002a89870, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Necrolyte_Death_Pulse::GetServerClass(
        CDOTA_Ability_Necrolyte_Death_Pulse *const this)
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


// CDOTA_Ability_Necrolyte_Death_Pulse::GetCooldown  (line 385, @0x0000000002aa0ed0, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_necrophos"
float __fastcall CDOTA_Ability_Necrolyte_Death_Pulse::GetCooldown(
        CDOTA_Ability_Necrolyte_Death_Pulse *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_necrophos", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_Necrolyte_Death_Pulse::OnSpellStart  (line 401, @0x0000000002aa8570, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Color, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Set, operator CEntityInstance*, operator->, operator=, operator[], sTrackingProjectileCreateInfo, ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_ParticleManager::GetParticleReplacement, CDOTA_ProjectileManager::CreateTrackingProjectile, GetParticleManager, CDOTA_BaseNPC::UnitEmitSound, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// strings: "area_of_effect", "particles/units/heroes/hero_necrolyte/necrolyte_pulse_friend.vpcf", "particles/units/heroes/hero_necrolyte/necrolyte_pulse_enemy.vpcf", "Hero_Necrolyte.DeathPulse"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Necrolyte_Death_Pulse::OnSpellStart(CDOTA_Ability_Necrolyte_Death_Pulse *const this)
{
  int LevelSpecialValue; // r14d
  int v3; // eax
  __m128i v4; // xmm1
  int v5; // ebx
  float v6; // r14d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v10; // rax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v13; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v15; // cx
  __int64 v16; // rbx
  int v17; // r12d
  char m_CScriptComponent_high; // r15
  CDOTA_BaseNPC *v19; // rax
  const char *v20; // rdi
  CDOTA_BaseNPC *v21; // r14
  CEntityInstance *m_pInstance; // rcx
  CHandle<CBaseEntity> *v23; // rdx
  uint32 m_Index; // eax
  __int16 v25; // si
  CEntityIdentity *v26; // rdx
  CEntityIdentity *v27; // rdx
  CDOTA_BaseNPC *v28; // rax
  sTrackingProjectileCreateInfo info; // [rsp+30h] [rbp-1B0h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> entities; // [rsp+90h] [rbp-150h] BYREF
  unsigned __int64 v31; // [rsp+1A8h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "area_of_effect", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "projectile_speed", -1, 0);
  *v4.m128i_i32 = LevelSpecialValue;
  entities.m_Size = 0;
  v5 = v3;
  entities.m_Memory.m_nAllocationCount = 64;
  entities.m_Memory.m_nGrowSize = 0x80000000;
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  entities.m_Memory.m_pMemory = &entities.m_FixedMemory;
  Caster = CDOTABaseAbility::GetCaster(this);
  v8 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  v10 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v10->m_iTeamNum.m_Value, AbsOrigin, Caster, v6, &entities, 3, 19, 16, 0, 0);
  info.iMoveSpeed = v5;
  info.hSource.m_Index = -1;
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.pszEffectName = 0;
  info.pAttackRecord = 0;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.iSourceAttachment = 1;
  info.vSourceLoc.y = y;
  z = vec3_origin.z;
  info.bProvidesVision = 0;
  info.vSourceLoc.z = z;
  info.iVisionTeamNumber = -1;
  info.iVisionRadius = 0;
  info.bDrawsOnMinimap = 0;
  info.bDodgeable = 1;
  info.bIsAttack = 0;
  info.bVisibleToEnemies = 1;
  info.pKVExtraData = 0;
  info.bReplaceExisting = 0;
  info.flExpireTime = 0.0;
  info.flMaxImpactTime = 0.0;
  info.bServerOnly = 0;
  info.pAbility = this;
  v13 = CDOTABaseAbility::GetCaster(this);
  if ( v13 != 0 && (m_pEntity = v13->m_pEntity) != 0 )
  {
    v15 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.bDodgeable = 0;
  info.iSourceAttachment = 3;
  if ( entities.m_Size > 0 )
  {
    v16 = 0;
    v17 = 0;
    do
    {
      GetParticleManager();
      v21 = CDOTABaseAbility::GetCaster(this);
      m_pInstance = 0;
      v23 = &entities.m_Memory.m_pMemory[v16];
      m_Index = entities.m_Memory.m_pMemory[v16].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v25 = v23->m_Index;
        v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v23->m_Index) >> 9) & 0x3F];
        if ( v26 != 0 )
        {
          v27 = &v26[v25 & 0x1FF];
          if ( v27 != 0 && m_Index == v27->m_EHandle.m_Index )
            m_pInstance = v27->m_pInstance;
        }
      }
      m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
      v19 = CDOTABaseAbility::GetCaster(this);
      v20 = "particles/units/heroes/hero_necrolyte/necrolyte_pulse_friend.vpcf";
      if ( m_CScriptComponent_high != v19->m_iTeamNum.m_Value )
        v20 = "particles/units/heroes/hero_necrolyte/necrolyte_pulse_enemy.vpcf";
      info.pszEffectName = CDOTA_ParticleManager::GetParticleReplacement(v20, v21);
      info.hTarget.m_Index = entities.m_Memory.m_pMemory[v16].m_Index;
      CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
      ++v17;
      ++v16;
    }
    while ( entities.m_Size > v17 );
  }
  v28 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v28, "Hero_Necrolyte.DeathPulse", 0.0, 0, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_Necrolyte_Death_Pulse::OnProjectileHit  (line 435, @0x0000000002a9f9c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, ApplyDamage, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::Heal, SendOverheadEventMessage
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Necrolyte_Death_Pulse::OnProjectileHit(
        CDOTA_Ability_Necrolyte_Death_Pulse *const this,
        _DWORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r12
  char m_CScriptComponent_high; // r13
  int v9; // r13d
  CDOTA_BaseNPC *v10; // rax
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTAPlayer *v13; // rax
  CDOTAPlayer *v14; // rax

  if ( (*hTarget + 2) <= 1 )
    return 1;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1;
  v5 = &v4[*hTarget & 0x1FF];
  if ( v5 == 0 )
    return 1;
  if ( *hTarget != v5->m_EHandle.m_Index )
    return 1;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || LOBYTE(m_pInstance[71]._vptr_IHandleEntity) != 0
    || (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) != 0 )
  {
    return 1;
  }
  m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
  if ( m_CScriptComponent_high == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "heal", -1, 0);
    CDOTA_BaseNPC::Heal(m_pInstance, LevelSpecialValue, this, 0, 1);
    if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      v13 = (*(Caster->_vptr_IHandleEntity + 413))(Caster);
      SendOverheadEventMessage(v13, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, m_pInstance, LevelSpecialValue, 0);
      if ( CDOTABaseAbility::GetCaster(this) != m_pInstance )
      {
        v14 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
        SendOverheadEventMessage(v14, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, m_pInstance, LevelSpecialValue, 0);
      }
    }
    return 1;
  }
  v9 = (*(this->_vptr_IHandleEntity + 247))(this);
  v10 = CDOTABaseAbility::GetCaster(this);
  ApplyDamage(v10, m_pInstance, this, v9, 2, 0);
  return 1;
}


// CDOTA_Ability_Necrolyte_Death_Pulse::GetAbilityDamageToTargetOverInterval  (line 473, @0x0000000002a7c860, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Necrolyte_Death_Pulse::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Necrolyte_Death_Pulse *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v6; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v6 = (*(this->_vptr_IHandleEntity + 247))(this, fInterval);
    return (v6 * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Necrolyte_Death_Pulse::~CDOTA_Modifier_Necrolyte_Death_Pulse  (line 487, @0x0000000002acb240, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<float, int>::Purge
void __fastcall CDOTA_Modifier_Necrolyte_Death_Pulse::~CDOTA_Modifier_Necrolyte_Death_Pulse(
        CDOTA_Modifier_Necrolyte_Death_Pulse *const this)
{
  bool v2; // zf
  CUtlVectorBase<float,CUtlMemory<float,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_fStackExpireTimes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_44054B0;
  this->m_fStackExpireTimes.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_fStackExpireTimes.m_Memory,
        CUtlMemory<float,int>::Purge(&this->m_fStackExpireTimes.m_Memory),
        (this->m_fStackExpireTimes.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<float,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Necrolyte_Death_Pulse::~CDOTA_Modifier_Necrolyte_Death_Pulse  (line 487, @0x0000000002acb2b0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Necrolyte_Death_Pulse, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<float, int>::Purge
void __fastcall CDOTA_Modifier_Necrolyte_Death_Pulse::~CDOTA_Modifier_Necrolyte_Death_Pulse(
        CDOTA_Modifier_Necrolyte_Death_Pulse *const this)
{
  bool v2; // zf
  CUtlVectorBase<float,CUtlMemory<float,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_fStackExpireTimes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_44054B0;
  this->m_fStackExpireTimes.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_fStackExpireTimes.m_Memory;
    CUtlMemory<float,int>::Purge(&this->m_fStackExpireTimes.m_Memory);
    if ( (this->m_fStackExpireTimes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<float,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Necrolyte_Death_Pulse::IsHidden  (line 492, @0x0000000002ab9b00, libserver.so)
bool __fastcall CDOTA_Modifier_Necrolyte_Death_Pulse::IsHidden(CDOTA_Modifier_Necrolyte_Death_Pulse *const this)
{
  return 1;
}


// CDOTA_Modifier_Necrolyte_Death_Pulse::OnCreated  (line 511, @0x0000000002a79b70, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Necrolyte_Death_Pulse::OnCreated(
        CDOTA_Modifier_Necrolyte_Death_Pulse *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4

  CDOTA_Buff::StartIntervalThink(this, 0.1, v2);
}


// CDOTA_Modifier_Necrolyte_Death_Pulse::OnDestroy  (line 516, @0x0000000002a79890, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_necrolyte_death_pulse_counter"
void __fastcall CDOTA_Modifier_Necrolyte_Death_Pulse::OnDestroy(CDOTA_Modifier_Necrolyte_Death_Pulse *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(Parent, "modifier_necrolyte_death_pulse_counter");
}


// CDOTA_Modifier_Necrolyte_Death_Pulse::OnIntervalThink  (line 525, @0x0000000002a81590, libserver.so)  // inlines: DOTAGameRules, Element, GetGameTime, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::RemoveModifierByName, KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume, __stack_chk_fail
// strings: "modifier_necrolyte_death_pulse_counter"
void __fastcall CDOTA_Modifier_Necrolyte_Death_Pulse::OnIntervalThink(CDOTA_Modifier_Necrolyte_Death_Pulse *const this)
{
  int m_Size; // r13d
  int v3; // edx
  int v4; // ebx
  float v5; // xmm2_4
  int v6; // eax
  float *m_pMemory; // rsi
  __int64 v8; // rcx
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  int v12; // edx
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v15; // rbx
  CDOTA_BaseNPC *v16; // rax
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v19; // rax
  CDOTA_Buff *v20; // rax
  CDOTA_Buff *v21; // rbx
  float v22; // [rsp+8h] [rbp-58h]
  float flLongestDuration; // [rsp+Ch] [rbp-54h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  m_Size = this->m_fStackExpireTimes.m_Size;
  if ( m_Size > 0 )
  {
    v3 = this->m_fStackExpireTimes.m_Size;
    v4 = 0;
    flLongestDuration = 0.0;
    v5 = 0.0;
    while ( 1 )
    {
      m_pMemory = this->m_fStackExpireTimes.m_Memory.m_pMemory;
      v8 = v4;
      v9 = m_pMemory[v8];
      if ( g_pGameRules != 0 )
        v10 = *&g_pGameRules[18].m_szQuestName[20];
      else
        v10 = v5;
      flLongestDuration = fmaxf(v9 - v10, flLongestDuration);
      if ( g_pGameRules != 0 )
        v11 = *&g_pGameRules[18].m_szQuestName[20];
      else
        v11 = v5;
      if ( v11 <= v9 )
      {
        v6 = this->m_fStackExpireTimes.m_Size;
        if ( ++v4 >= v6 )
          goto LABEL_13;
      }
      else
      {
        v12 = v3 - v4 - 1;
        if ( v12 > 0 )
        {
          v22 = v5;
          memmove(&m_pMemory[v8], &m_pMemory[v8 + 1], 4LL * v12);
          v5 = v22;
        }
        v6 = this->m_fStackExpireTimes.m_Size - 1;
        this->m_fStackExpireTimes.m_Size = v6;
        if ( v4 >= v6 )
        {
LABEL_13:
          if ( m_Size != v6 )
          {
            this->m_bStackCountChanged = 1;
            m_Size = v6;
            goto LABEL_15;
          }
          goto LABEL_16;
        }
      }
      v3 = v6;
    }
  }
  flLongestDuration = 0.0;
LABEL_15:
  if ( m_Size != 0 )
  {
LABEL_16:
    Parent = CDOTA_Buff::GetParent(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_necrolyte_death_pulse_counter", 0);
    v15 = ModifierByName;
    if ( ModifierByName != 0 )
    {
      (*(ModifierByName->_vptr_CDOTA_Buff + 28))(ModifierByName, m_Size);
      if ( this->m_bStackCountChanged )
      {
        (*(v15->_vptr_CDOTA_Buff + 63))(v15, 1, flLongestDuration);
        this->m_bStackCountChanged = 0;
      }
    }
    else
    {
      KeyValues::KeyValues(&kv, "modifier_necrolyte_death_pulse_counter");
      Ability = CDOTA_Buff::GetAbility(this);
      Caster = CDOTA_Buff::GetCaster(this);
      v19 = CDOTA_Buff::GetParent(this);
      v20 = CDOTA_BaseNPC::AddNewModifier(v19, Caster, Ability, "modifier_necrolyte_death_pulse_counter", &kv, 0);
      v21 = v20;
      if ( v20 != 0 )
      {
        (*(v20->_vptr_CDOTA_Buff + 28))(v20, m_Size);
        if ( this->m_bStackCountChanged )
        {
          (*(v21->_vptr_CDOTA_Buff + 63))(v21, 1, flLongestDuration);
          this->m_bStackCountChanged = 0;
        }
      }
      KeyValues::~KeyValues(&kv);
    }
  }
  else
  {
    v16 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveModifierByName(v16, "modifier_necrolyte_death_pulse_counter");
  }
}


// CDOTA_Modifier_Necrolyte_Death_Pulse::DeclareFunctions  (line 585, @0x0000000002a77f20, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Necrolyte_Death_Pulse::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Necrolyte_Death_Pulse::DeclareFunctions(
        CDOTA_Modifier_Necrolyte_Death_Pulse *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_Necrolyte_Death_Pulse::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_Necrolyte_Death_Pulse::OnDeath  (line 592, @0x0000000002ab1ed0, libserver.so)  // inlines: AddToTail, AttackerNPC, CopyConstruct<float>, DOTAGameRules, Element, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GrowMemory, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CUtlMemory<float, int>::Grow, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "regen_duration", "hero_multiplier"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Necrolyte_Death_Pulse::OnDeath(
        CDOTA_Modifier_Necrolyte_Death_Pulse *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  EHANDLE *p_hunit; // r12
  CEntityInstance *v10; // rax
  CEntityInstance *v11; // rax
  int LevelSpecialValue; // r13d
  int i; // r15d
  CDOTABaseAbility *v14; // rax
  float v15; // xmm0_4
  __int64 m_Size; // r12
  float v17; // xmm0_4
  int v18; // eax
  float *v19; // rax
  CDOTABaseAbility *Ability; // rax
  float v21; // [rsp+Ch] [rbp-34h]
  float v22; // [rsp+Ch] [rbp-34h]
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hattacker.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          result.m_szVal = CDOTA_Buff::GetParent(this);
          *&result.m_eType = 1;
          if ( (result.m_szVal[2787] & 0x10) != 0 )
            goto LABEL_6;
          p_hunit = &params->hunit;
          v10 = CEntityHandle::operator CEntityInstance *(p_hunit);
          if ( v10 == 0 || BYTE3(v10[7]._vptr_IHandleEntity) == 0 )
            goto LABEL_17;
          LOBYTE(result.m_szVal) = (*(v10->_vptr_IHandleEntity + 436))(v10);
          *&result.m_eType = 1;
          if ( LOBYTE(result.m_szVal) != 0 )
            goto LABEL_6;
          v11 = CEntityHandle::operator CEntityInstance *(p_hunit);
          if ( v11 == 0 || BYTE3(v11[7]._vptr_IHandleEntity) == 0 || (v11[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          {
LABEL_17:
            LevelSpecialValue = 1;
            goto LABEL_18;
          }
          Ability = CDOTA_Buff::GetAbility(this);
          LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "hero_multiplier", -1, 0);
          if ( LevelSpecialValue > 0 )
          {
LABEL_18:
            for ( i = 0; i < LevelSpecialValue; ++i )
            {
              if ( g_pGameRules != 0 )
                v21 = *&g_pGameRules[18].m_szQuestName[20];
              else
                v21 = 0.0;
              v14 = CDOTA_Buff::GetAbility(this);
              v15 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v14, "regen_duration", -1, 0);
              m_Size = this->m_fStackExpireTimes.m_Size;
              v17 = v15 + v21;
              v18 = this->m_fStackExpireTimes.m_Size;
              if ( m_Size == this->m_fStackExpireTimes.m_Memory.m_nAllocationCount )
              {
                v22 = v17;
                CUtlMemory<float,int>::Grow(&this->m_fStackExpireTimes.m_Memory, 1);
                v18 = this->m_fStackExpireTimes.m_Size;
                v17 = v22;
              }
              this->m_fStackExpireTimes.m_Size = v18 + 1;
              v19 = &this->m_fStackExpireTimes.m_Memory.m_pMemory[m_Size];
              if ( v19 != 0 )
                *v19 = v17;
              this->m_bStackCountChanged = 1;
            }
          }
        }
      }
    }
  }
  *&result.m_eType = 1;
LABEL_6:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Necrolyte_Death_Pulse_Counter::~CDOTA_Modifier_Necrolyte_Death_Pulse_Counter  (line 620, @0x0000000002ac1550, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Necrolyte_Death_Pulse_Counter::~CDOTA_Modifier_Necrolyte_Death_Pulse_Counter(
        CDOTA_Modifier_Necrolyte_Death_Pulse_Counter *const this)
{
  this->_vptr_CDOTA_Buff = &off_44057D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Necrolyte_Death_Pulse_Counter::~CDOTA_Modifier_Necrolyte_Death_Pulse_Counter  (line 620, @0x0000000002ac1570, libserver.so)  // inlines: ~CDOTA_Modifier_Necrolyte_Death_Pulse_Counter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Necrolyte_Death_Pulse_Counter::~CDOTA_Modifier_Necrolyte_Death_Pulse_Counter(
        CDOTA_Modifier_Necrolyte_Death_Pulse_Counter *const this)
{
  this->_vptr_CDOTA_Buff = &off_44057D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Necrolyte_Death_Pulse_Counter::DestroyOnExpire  (line 631, @0x0000000002ab9b10, libserver.so)
bool __fastcall CDOTA_Modifier_Necrolyte_Death_Pulse_Counter::DestroyOnExpire(
        CDOTA_Modifier_Necrolyte_Death_Pulse_Counter *const this)
{
  return 0;
}


// CDOTA_Modifier_Necrolyte_Death_Pulse_Counter::OnCreated  (line 642, @0x0000000002aad290, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_necrolyte/necrolyte_sadist.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_Necrolyte_Death_Pulse_Counter::OnCreated(
        CDOTA_Modifier_Necrolyte_Death_Pulse_Counter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v9; // r14
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  const Vector *v12; // r13
  CDOTA_BaseNPC *v13; // r14
  CDOTA_ParticleManager *v14; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->mana_regen = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->health_regen = 0;
    goto LABEL_4;
  }
  this->mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "mana_regen", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "health_regen", -1, 0);
LABEL_4:
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_necrolyte/necrolyte_sadist.vpcf",
                      2,
                      Parent,
                      0,
                      0);
  v7 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  v9 = CDOTA_Buff::GetParent(this);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v10, Parent, 0, v9, 5, "attach_hitloc", *AbsOrigin, 1);
  v11 = CDOTA_Buff::GetParent(this);
  v12 = CBaseEntity::GetAbsOrigin(v11);
  v13 = CDOTA_Buff::GetParent(this);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v14, Parent, 1, v13, 5, "attach_hitloc", *v12, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Necrolyte_Death_Pulse_Counter::DeclareFunctions  (line 657, @0x0000000002a77f40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Necrolyte_Death_Pulse_Counter::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Necrolyte_Death_Pulse_Counter::GetModifierConstantManaRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Necrolyte_Death_Pulse_Counter::DeclareFunctions(
        CDOTA_Modifier_Necrolyte_Death_Pulse_Counter *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Necrolyte_Death_Pulse_Counter::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[52].__delta = 0;
  this->m_Functions[52].__pfn = CDOTA_Modifier_Necrolyte_Death_Pulse_Counter::GetModifierConstantManaRegen;
}


// CDOTA_Modifier_Necrolyte_Death_Pulse_Counter::GetModifierConstantHealthRegen  (line 665, @0x0000000002a77f80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Necrolyte_Death_Pulse_Counter::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Necrolyte_Death_Pulse_Counter *const this,
        const CModifierParams *const params)
{
  int health_regen; // ebx
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  health_regen = this->health_regen;
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (v4 * health_regen);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Necrolyte_Death_Pulse_Counter::GetModifierConstantManaRegen  (line 672, @0x0000000002a77fc0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Necrolyte_Death_Pulse_Counter::GetModifierConstantManaRegen(
        CDOTA_Modifier_Necrolyte_Death_Pulse_Counter *const this,
        const CModifierParams *const params)
{
  int mana_regen; // ebx
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  mana_regen = this->mana_regen;
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (v4 * mana_regen);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Ability_Necrolyte_Heartstopper_Aura::~CDOTA_Ability_Necrolyte_Heartstopper_Aura  (line 687, @0x0000000002ac5890, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Necrolyte_Heartstopper_Aura::~CDOTA_Ability_Necrolyte_Heartstopper_Aura(
        CDOTA_Ability_Necrolyte_Heartstopper_Aura *const this)
{
  this->_vptr_IHandleEntity = &off_4405B30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Necrolyte_Heartstopper_Aura::~CDOTA_Ability_Necrolyte_Heartstopper_Aura  (line 687, @0x0000000002ac58b0, libserver.so)  // inlines: ~CDOTA_Ability_Necrolyte_Heartstopper_Aura
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Necrolyte_Heartstopper_Aura::~CDOTA_Ability_Necrolyte_Heartstopper_Aura(
        CDOTA_Ability_Necrolyte_Heartstopper_Aura *const this)
{
  this->_vptr_IHandleEntity = &off_4405B30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Necrolyte_Heartstopper_Aura::Schema_DynamicBinding  (line 689, @0x0000000002ab9b20, libserver.so)
// globals: CDOTA_Ability_Necrolyte_Heartstopper_Aura::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necrolyte_Heartstopper_Aura::Schema_DynamicBinding(
        const CDOTA_Ability_Necrolyte_Heartstopper_Aura *const this)
{
  return CDOTA_Ability_Necrolyte_Heartstopper_Aura::s_pSchemaBinding;
}


// CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 689, @0x0000000002ab9b30, libserver.so)
// globals: CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::DestructInstance  (line 689, @0x0000000002ab9b40, libserver.so)  // inlines: Destruct<CDOTA_Ability_Necrolyte_Heartstopper_Aura>
void __fastcall CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::FreeInstance  (line 689, @0x0000000002ab9b60, libserver.so)
void __fastcall CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::CanAllocate  (line 689, @0x0000000002ab9b80, libserver.so)
bool __fastcall CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 689, @0x0000000002ab9b90, libserver.so)
// globals: CDOTA_Ability_Necrolyte_Heartstopper_Aura::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necrolyte_Heartstopper_Aura::s_pSchemaBinding;
}


// CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::AllocateInstance  (line 689, @0x0000000002abf100, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::ConstructInstance  (line 689, @0x0000000002ac2c60, libserver.so)  // inlines: CDOTA_Ability_Necrolyte_Heartstopper_Aura, Construct<CDOTA_Ability_Necrolyte_Heartstopper_Aura>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4405B30;
  }
  return p;
}


// CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 689, @0x0000000002acc290, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 689, @0x0000000002acc2b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInternal  (line 689, @0x0000000002addd70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "necrolyte_heartstopper_aura", "CDOTA_Ability_Necrolyte_Heartstopper_Aura"
// globals: `guard variable for'CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClass, CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClass, __dso_handle, CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClassInfo, CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClassInfo
CEntityClass *__cdecl CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClass);
    CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClass._vptr_CEntityClass = off_4405AB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClass);
    __cxa_atexit(
      CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClass != 0 )
    return &CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClass;
  if ( `guard variable for'CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClassInfo,
      "CDOTA_Ability_Necrolyte_Heartstopper_Aura",
      "necrolyte_heartstopper_aura",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClassInfo);
  }
  CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClass.m_pClassInfo = &CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClassInfo;
  CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClass.m_pBaseClassInfo = CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClass = &CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClass;
  CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClassInfo.m_pClass = &CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClass;
  CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_Heartstopper_AuraClass;
}


// CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetIntrinsicModifierName  (line 691, @0x0000000002ab9ba0, libserver.so)
// strings: "modifier_necrolyte_heartstopper_aura"
const char *__fastcall CDOTA_Ability_Necrolyte_Heartstopper_Aura::GetIntrinsicModifierName(
        CDOTA_Ability_Necrolyte_Heartstopper_Aura *const this)
{
  return "modifier_necrolyte_heartstopper_aura";
}


// CDOTA_Modifier_Necrolyte_Heartstopper_Aura::~CDOTA_Modifier_Necrolyte_Heartstopper_Aura  (line 699, @0x0000000002ac1500, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Necrolyte_Heartstopper_Aura::~CDOTA_Modifier_Necrolyte_Heartstopper_Aura(
        CDOTA_Modifier_Necrolyte_Heartstopper_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_44065F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Necrolyte_Heartstopper_Aura::~CDOTA_Modifier_Necrolyte_Heartstopper_Aura  (line 699, @0x0000000002ac1520, libserver.so)  // inlines: ~CDOTA_Modifier_Necrolyte_Heartstopper_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Necrolyte_Heartstopper_Aura::~CDOTA_Modifier_Necrolyte_Heartstopper_Aura(
        CDOTA_Modifier_Necrolyte_Heartstopper_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_44065F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Necrolyte_Heartstopper_Aura::IsAura  (line 704, @0x0000000002ab9bb0, libserver.so)
bool __fastcall CDOTA_Modifier_Necrolyte_Heartstopper_Aura::IsAura(
        CDOTA_Modifier_Necrolyte_Heartstopper_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Necrolyte_Heartstopper_Aura::GetModifierAura  (line 705, @0x0000000002ab9bc0, libserver.so)
// strings: "modifier_necrolyte_heartstopper_aura_effect"
const char *__fastcall CDOTA_Modifier_Necrolyte_Heartstopper_Aura::GetModifierAura(
        CDOTA_Modifier_Necrolyte_Heartstopper_Aura *const this)
{
  return "modifier_necrolyte_heartstopper_aura_effect";
}


// CDOTA_Modifier_Necrolyte_Heartstopper_Aura::GetAuraSearchTeam  (line 707, @0x0000000002ab9bd0, libserver.so)
int __fastcall CDOTA_Modifier_Necrolyte_Heartstopper_Aura::GetAuraSearchTeam(
        CDOTA_Modifier_Necrolyte_Heartstopper_Aura *const this)
{
  return 2;
}


// CDOTA_Modifier_Necrolyte_Heartstopper_Aura::GetAuraSearchType  (line 708, @0x0000000002ab9be0, libserver.so)
int __fastcall CDOTA_Modifier_Necrolyte_Heartstopper_Aura::GetAuraSearchType(
        CDOTA_Modifier_Necrolyte_Heartstopper_Aura *const this)
{
  return 19;
}


// CDOTA_Modifier_Necrolyte_Heartstopper_Aura::GetAuraSearchFlags  (line 709, @0x0000000002ab9bf0, libserver.so)
int __fastcall CDOTA_Modifier_Necrolyte_Heartstopper_Aura::GetAuraSearchFlags(
        CDOTA_Modifier_Necrolyte_Heartstopper_Aura *const this)
{
  return 528;
}


// CDOTA_Modifier_Necrolyte_Heartstopper_Aura::GetAuraRadius  (line 710, @0x0000000002ab9c00, libserver.so)
int __fastcall CDOTA_Modifier_Necrolyte_Heartstopper_Aura::GetAuraRadius(
        CDOTA_Modifier_Necrolyte_Heartstopper_Aura *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_Necrolyte_Heartstopper_Aura::OnCreated  (line 720, @0x0000000002aa9e60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Necrolyte_Heartstopper_Aura::OnCreated(
        CDOTA_Modifier_Necrolyte_Heartstopper_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_radius", -1, 0);
  else
    this->aura_radius = 0;
}


// CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect::~CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect  (line 729, @0x0000000002ac14b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect::~CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect(
        CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_4406910;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect::~CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect  (line 729, @0x0000000002ac14d0, libserver.so)  // inlines: ~CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect::~CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect(
        CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_4406910;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect::OnCreated  (line 751, @0x0000000002a9c790, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "aura_damage"
void __fastcall CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect::OnCreated(
        CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "aura_damage", -1, 0);
  else
    this->aura_damage = 0.0;
  CDOTA_Buff::StartIntervalThink(this, 0.2, v4);
}


// CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect::OnRefresh  (line 757, @0x0000000002a9c670, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "aura_damage"
void __fastcall CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect::OnRefresh(
        CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "aura_damage", -1, 0);
  else
    this->aura_damage = 0.0;
}


// CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect::OnIntervalThink  (line 764, @0x0000000002a7a500, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, ApplyDamage
void __fastcall CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect::OnIntervalThink(
        CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  int v4; // r14d
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v6; // r12
  CDOTA_BaseNPC *Caster; // rax
  float v8; // [rsp+Ch] [rbp-24h]

  if ( CDOTA_Buff::GetCaster(this) != 0 && (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( (*(Parent->_vptr_IHandleEntity + 403))(Parent) == 0 )
    {
      v8 = this->aura_damage / 100.0;
      v3 = CDOTA_Buff::GetParent(this);
      v4 = (*(v3->_vptr_IHandleEntity + 156))(v3);
      Ability = CDOTA_Buff::GetAbility(this);
      v6 = CDOTA_Buff::GetParent(this);
      Caster = CDOTA_Buff::GetCaster(this);
      ApplyDamage(Caster, v6, Ability, (v4 * v8) / 5.0, 4, 608);
    }
  }
}


// CDOTA_Ability_Necrolyte_ReapersScythe::~CDOTA_Ability_Necrolyte_ReapersScythe  (line 788, @0x0000000002ac58e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Necrolyte_ReapersScythe::~CDOTA_Ability_Necrolyte_ReapersScythe(
        CDOTA_Ability_Necrolyte_ReapersScythe *const this)
{
  this->_vptr_IHandleEntity = &off_4406C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Necrolyte_ReapersScythe::~CDOTA_Ability_Necrolyte_ReapersScythe  (line 788, @0x0000000002ac5900, libserver.so)  // inlines: ~CDOTA_Ability_Necrolyte_ReapersScythe
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Necrolyte_ReapersScythe::~CDOTA_Ability_Necrolyte_ReapersScythe(
        CDOTA_Ability_Necrolyte_ReapersScythe *const this)
{
  this->_vptr_IHandleEntity = &off_4406C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Necrolyte_ReapersScythe::Schema_DynamicBinding  (line 790, @0x0000000002ab9c10, libserver.so)
// globals: CDOTA_Ability_Necrolyte_ReapersScythe::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necrolyte_ReapersScythe::Schema_DynamicBinding(
        const CDOTA_Ability_Necrolyte_ReapersScythe *const this)
{
  return CDOTA_Ability_Necrolyte_ReapersScythe::s_pSchemaBinding;
}


// CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 790, @0x0000000002ab9c20, libserver.so)
// globals: CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::DestructInstance  (line 790, @0x0000000002ab9c30, libserver.so)  // inlines: Destruct<CDOTA_Ability_Necrolyte_ReapersScythe>
void __fastcall CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::FreeInstance  (line 790, @0x0000000002ab9c50, libserver.so)
void __fastcall CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::CanAllocate  (line 790, @0x0000000002ab9c70, libserver.so)
bool __fastcall CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 790, @0x0000000002ab9c80, libserver.so)
// globals: CDOTA_Ability_Necrolyte_ReapersScythe::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necrolyte_ReapersScythe::s_pSchemaBinding;
}


// CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::AllocateInstance  (line 790, @0x0000000002abf140, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::ConstructInstance  (line 790, @0x0000000002ac2c90, libserver.so)  // inlines: CDOTA_Ability_Necrolyte_ReapersScythe, Construct<CDOTA_Ability_Necrolyte_ReapersScythe>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4406C70;
  }
  return p;
}


// CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 790, @0x0000000002acc2e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 790, @0x0000000002acc300, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInternal  (line 790, @0x0000000002addec0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "necrolyte_reapers_scythe", "CDOTA_Ability_Necrolyte_ReapersScythe"
// globals: `guard variable for'CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClass, CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClass, __dso_handle, CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClassInfo, CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClassInfo
CEntityClass *__cdecl CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClass);
    CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClass._vptr_CEntityClass = off_4406BF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClass);
    __cxa_atexit(
      CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Necrolyte_ReapersScytheClass != 0 )
    return &CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClass;
  if ( `guard variable for'CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClassInfo,
      "CDOTA_Ability_Necrolyte_ReapersScythe",
      "necrolyte_reapers_scythe",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClassInfo);
  }
  CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClass.m_pClassInfo = &CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClassInfo;
  CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClass.m_pBaseClassInfo = CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Necrolyte_ReapersScytheClass = &CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClass;
  CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClassInfo.m_pClass = &CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClass;
  CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Necrolyte_ReapersScytheClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Necrolyte_ReapersScythe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necrolyte_ReapersScytheClass;
}


// CDOTA_Ability_Necrolyte_ReapersScythe::YouForgotToImplementOrDeclareServerClass  (line 801, @0x0000000002a78000, libserver.so)
int __fastcall CDOTA_Ability_Necrolyte_ReapersScythe::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Necrolyte_ReapersScythe *const this)
{
  return 0;
}


// CDOTA_Ability_Necrolyte_ReapersScythe::GetServerClass  (line 801, @0x0000000002a89c70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Necrolyte_ReapersScythe::GetServerClass(
        CDOTA_Ability_Necrolyte_ReapersScythe *const this)
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


// CDOTA_Ability_Necrolyte_ReapersScythe::GetCooldown  (line 810, @0x0000000002a9ba30, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Necrolyte_ReapersScythe::GetCooldown(
        CDOTA_Ability_Necrolyte_ReapersScythe *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Necrolyte_ReapersScythe::OnAbilityPhaseStart  (line 822, @0x0000000002a78010, libserver.so)
bool __fastcall CDOTA_Ability_Necrolyte_ReapersScythe::OnAbilityPhaseStart(
        CDOTA_Ability_Necrolyte_ReapersScythe *const this)
{
  return 1;
}


// CDOTA_Ability_Necrolyte_ReapersScythe::OnSpellStart  (line 833, @0x0000000002a9a7c0, libserver.so)  // inlines: GetAbilityData, GetLevelSpecialValueFor<float>, GetParent, InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CGameSceneNode::GetOwnerEntity (21 total)
// strings: "modifier_necrolyte_reapers_scythe", "particles/units/heroes/hero_necrolyte/necrolyte_scythe.vpcf", "attach_hitloc", "attach_attack1", "particles/units/heroes/hero_necrolyte/necrolyte_scythe_start.vpcf", "Hero_Necrolyte.ReapersScythe.Cast" (7 total)
void __fastcall CDOTA_Ability_Necrolyte_ReapersScythe::OnSpellStart(CDOTA_Ability_Necrolyte_ReapersScythe *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v10; // rax
  CGameSceneNode *m_pParent; // rdi
  const CBaseAnimating *OwnerEntity; // r15
  CDOTA_ParticleManager *v13; // rax
  const Vector *v14; // r15
  CDOTA_ParticleManager *v15; // rax
  CGameSceneNode *v16; // rdi
  CBaseEntity *v17; // rdi
  const Vector *v18; // r15
  CGameSceneNode *v19; // rdi
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // r14
  CDOTA_ParticleManager *v23; // rax
  int v24; // r14d
  CGameSceneNode *v25; // rdi
  const CBaseAnimating *v26; // r15
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  const Vector *v34; // rbx
  CDOTA_BaseNPC *v35; // rax
  float v36; // xmm3_4
  const CBaseAnimating *stun_duration; // [rsp+10h] [rbp-60h]
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+38h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1)
    && CDOTABaseAbility::GetCaster(this) != 0 )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_necrolyte_reapers_scythe");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_necrolyte_reapers_scythe", &kv, 0);
    v6 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_necrolyte/necrolyte_scythe.vpcf",
                 2,
                 v6,
                 0,
                 0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    v10 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v10, Particle, 0, v3, 5, "attach_hitloc", *AbsOrigin, 1);
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 )
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    else
      OwnerEntity = 0;
    v13 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v13, Particle, 1, OwnerEntity, 0, 0, vec3_invalid, 1);
    v14 = CBaseEntity::GetAbsOrigin(v3);
    v15 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v15, Particle, 2, *&v14->x, v14->z);
    v16 = this->m_pGameSceneNode->m_pParent;
    if ( v16 != 0 )
      v17 = CGameSceneNode::GetOwnerEntity(v16);
    else
      v17 = 0;
    v18 = CBaseEntity::GetAbsOrigin(v17);
    v19 = this->m_pGameSceneNode->m_pParent;
    if ( v19 != 0 )
      stun_duration = CGameSceneNode::GetOwnerEntity(v19);
    else
      stun_duration = 0;
    v20 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v20, Particle, 6, stun_duration, 5, "attach_attack1", *v18, 1);
    v21 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v21, Particle);
    v22 = CDOTABaseAbility::GetCaster(this);
    v23 = GetParticleManager();
    v24 = CDOTA_ParticleManager::CreateParticle(
            v23,
            "particles/units/heroes/hero_necrolyte/necrolyte_scythe_start.vpcf",
            2,
            v22,
            0,
            0);
    v25 = this->m_pGameSceneNode->m_pParent;
    if ( v25 != 0 )
      v26 = CGameSceneNode::GetOwnerEntity(v25);
    else
      v26 = 0;
    v27 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v27, v24, 0, v26, 1, 0, vec3_invalid, 1);
    v28 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v28, v24, 1, v3, 1, 0, vec3_invalid, 1);
    v29 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v29, v24);
    v30 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_Necrolyte.ReapersScythe.Cast", v30);
    DOTA_EmitSound(10, "Hero_Necrolyte.ReapersScythe.Target", v3);
    v31 = CDOTABaseAbility::GetCaster(this);
    if ( CBaseModelEntity::CanBeSeenByTeam(v3, (v31->m_iTeamNum.m_Value == 2) + 2) )
    {
      m_pAbilityData = this->m_pAbilityData;
      if ( m_pAbilityData == 0 )
      {
        CDOTABaseAbility::LoadAbilityData(this, 0);
        m_pAbilityData = this->m_pAbilityData;
      }
      m_iAbilityID = m_pAbilityData->m_iAbilityID;
      v34 = CBaseEntity::GetAbsOrigin(v3);
      v35 = CDOTABaseAbility::GetCaster(this);
      CDOTAGamerules::SendProjectionAbilityMessage(
        g_pGameRules,
        v35,
        0,
        m_iAbilityID,
        0,
        0,
        *&v34->x,
        v34->z,
        -1.0,
        v36);
    }
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Necrolyte_ReapersScythe::GetAbilityDamageToTargetOverInterval  (line 874, @0x0000000002a9ba80, libserver.so)  // inlines: GetHealthDeficit
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetHealth, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "damage_per_health_scepter", "damage_per_health"
__int64 __fastcall CDOTA_Ability_Necrolyte_ReapersScythe::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Necrolyte_ReapersScythe *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  const char *v9; // rsi
  int v10; // r12d
  float LevelSpecialValue; // [rsp-1Ch] [rbp-1Ch]
  float v12; // [rsp-1Ch] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
    v9 = "damage_per_health_scepter";
    if ( !HasScepter )
      v9 = "damage_per_health";
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, v9, -1, 1);
    v10 = (*(pTarget->_vptr_IHandleEntity + 156))(pTarget);
    v12 = LevelSpecialValue * (v10 - CBaseEntity::GetHealth(pTarget));
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * v12);
  }
  return result;
}


// CDOTA_Modifier_Necrolyte_ReapersScythe::~CDOTA_Modifier_Necrolyte_ReapersScythe  (line 888, @0x0000000002ac1410, libserver.so)  // inlines: ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Necrolyte_ReapersScythe::~CDOTA_Modifier_Necrolyte_ReapersScythe(
        CDOTA_Modifier_Necrolyte_ReapersScythe *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Necrolyte_ReapersScythe::~CDOTA_Modifier_Necrolyte_ReapersScythe  (line 888, @0x0000000002ac1430, libserver.so)  // inlines: ~CDOTA_Modifier_Necrolyte_ReapersScythe, ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Necrolyte_ReapersScythe::~CDOTA_Modifier_Necrolyte_ReapersScythe(
        CDOTA_Modifier_Necrolyte_ReapersScythe *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Necrolyte_ReapersScythe::GetAttributes  (line 893, @0x0000000002ac47f0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Necrolyte_ReapersScythe::GetAttributes(
        CDOTA_Modifier_Necrolyte_ReapersScythe *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_Necrolyte_ReapersScythe::IsPurgable  (line 896, @0x0000000002ab9c90, libserver.so)
bool __fastcall CDOTA_Modifier_Necrolyte_ReapersScythe::IsPurgable(CDOTA_Modifier_Necrolyte_ReapersScythe *const this)
{
  return 0;
}


// CDOTA_Modifier_Necrolyte_ReapersScythe::OnCreated  (line 916, @0x0000000002a9c8c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, IsIllusion
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_arc_warden_tempest_double"
void __fastcall CDOTA_Modifier_Necrolyte_ReapersScythe::OnCreated(
        CDOTA_Modifier_Necrolyte_ReapersScythe *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "stun_duration", -1, 0);
    this->stun_duration = LevelSpecialValue;
  }
  else
  {
    LevelSpecialValue = 0.0;
    this->stun_duration = 0.0;
  }
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v4);
  this->m_bIllusion = CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value;
  Parent = CDOTA_Buff::GetParent(this);
  this->m_bArcWardenClone = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_arc_warden_tempest_double", 0) != 0;
}


// CDOTA_Modifier_Necrolyte_ReapersScythe::DeclareFunctions  (line 927, @0x0000000002a78020, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Necrolyte_ReapersScythe::OnTakeDamageKillCredit(CModifierParams const&)
void __fastcall CDOTA_Modifier_Necrolyte_ReapersScythe::DeclareFunctions(
        CDOTA_Modifier_Necrolyte_ReapersScythe *const this)
{
  this->m_Functions[146].__pfn = CDOTA_Modifier_Necrolyte_ReapersScythe::OnTakeDamageKillCredit;
  this->m_Functions[146].__delta = 0;
}


// CDOTA_Modifier_Necrolyte_ReapersScythe::OnTakeDamageKillCredit  (line 934, @0x0000000002a83a70, libserver.so)  // inlines: Ceil2Int, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Lowest, IndexToIdentity, IsListeningToEvent, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, ceilf, CBaseEntity::GetHealth, CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetCaster, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues (14 total)
// strings: "modifier_skeleton_king_reincarnation_scepter_active", "modifier_necrolyte_reapers_scythe_respawn_time", "modifier_skeleton_king_reincarnation_scepter"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Necrolyte_ReapersScythe::OnTakeDamageKillCredit(
        CDOTA_Modifier_Necrolyte_ReapersScythe *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  bool m_bIsDOTANPC; // r14
  CDOTA_BaseNPC *Parent; // r12
  int v11; // r13d
  int Health; // r15d
  __int64 v13; // rax
  CDOTA_Buff *ModifierByName; // r14
  float v15; // xmm1_4
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v17; // rax
  float v18; // xmm1_4
  CDOTABaseAbility *v19; // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v21; // r14
  CDOTABaseAbility *v22; // rax
  CDOTA_BaseNPC *pCaster; // [rsp+0h] [rbp-60h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-38h]

  v25 = __readfsqword(0x28u);
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
        if ( v5->m_pInstance != 0 )
        {
          m_bIsDOTANPC = m_pInstance->m_bIsDOTANPC;
          if ( m_bIsDOTANPC )
          {
            Parent = CDOTA_Buff::GetParent(this);
            if ( Parent == m_pInstance )
            {
              v11 = ceilf(params->fDamage);
              Health = CBaseEntity::GetHealth(Parent);
              v13 = Parent->m_ModifierManager.m_buffsForModifiers[102];
              if ( v13 != 0xFF && Parent->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v13].m_Size > 0 )
                m_bIsDOTANPC = CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal(
                                 &Parent->m_ModifierManager,
                                 modifierfunction::MODIFIER_PROPERTY_MIN_HEALTH,
                                 &CModifierParams::s_Default) == 0.0;
              if ( m_bIsDOTANPC && Health <= v11 && !this->m_bArcWardenClone )
              {
                (*(this->_vptr_CDOTA_Buff + 33))(this);
                ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                                   Parent,
                                   "modifier_skeleton_king_reincarnation_scepter_active",
                                   0);
                if ( (ModifierByName != 0
                   || (ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                                          Parent,
                                          "modifier_skeleton_king_reincarnation_scepter",
                                          0)) != 0)
                  && CDOTA_Buff::GetCaster(ModifierByName) != 0 )
                {
                  (*(ModifierByName->_vptr_CDOTA_Buff + 31))(ModifierByName);
                }
                if ( (*(Parent->_vptr_IHandleEntity + 390))(Parent) != 0 )
                {
                  KeyValues::KeyValues(&kv, "modifier_necrolyte_reapers_scythe_respawn_time");
                  KeyValues::SetFloat(&kv, "duration", v15);
                  Ability = CDOTA_Buff::GetAbility(this);
                  pCaster = CDOTA_Buff::GetCaster(this);
                  v17 = (*(Parent->_vptr_IHandleEntity + 390))(Parent);
                  CDOTA_BaseNPC::AddNewModifier(
                    v17,
                    pCaster,
                    Ability,
                    "modifier_necrolyte_reapers_scythe_respawn_time",
                    &kv,
                    0);
                  KeyValues::~KeyValues(&kv);
                }
                KeyValues::KeyValues(&kv, "modifier_necrolyte_reapers_scythe_respawn_time");
                KeyValues::SetFloat(&kv, "duration", v18);
                v19 = CDOTA_Buff::GetAbility(this);
                Caster = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(
                  Parent,
                  Caster,
                  v19,
                  "modifier_necrolyte_reapers_scythe_respawn_time",
                  &kv,
                  0);
                if ( ModifierByName == 0 )
                {
                  v21 = CDOTA_Buff::GetCaster(this);
                  v22 = CDOTA_Buff::GetAbility(this);
                  CDOTA_BaseNPC::Kill(Parent, v22, v21, 0.0, 0);
                }
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


// CDOTA_Modifier_Necrolyte_ReapersScythe::OnIntervalThink  (line 991, @0x0000000002a9bb40, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetCaster, ApplyDamage
// strings: "damage_per_health"
void __fastcall CDOTA_Modifier_Necrolyte_ReapersScythe::OnIntervalThink(
        CDOTA_Modifier_Necrolyte_ReapersScythe *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  int v4; // r12d
  CDOTA_BaseNPC *v5; // rax
  CDOTABaseAbility *v6; // r13
  CDOTA_BaseNPC *v7; // r12
  CDOTA_BaseNPC *Caster; // rax
  float fDamage; // [rsp+Ch] [rbp-24h]
  float fDamagea; // [rsp+Ch] [rbp-24h]

  Ability = CDOTA_Buff::GetAbility(this);
  fDamage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "damage_per_health", -1, 0);
  Parent = CDOTA_Buff::GetParent(this);
  v4 = (*(Parent->_vptr_IHandleEntity + 156))(Parent);
  v5 = CDOTA_Buff::GetParent(this);
  fDamagea = fDamage * (v4 - CBaseEntity::GetHealth(v5));
  v6 = CDOTA_Buff::GetAbility(this);
  v7 = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, v7, v6, fDamagea, 2, 0);
}


// CDOTA_Modifier_Necrolyte_ReapersScythe::OnDestroy  (line 1003, @0x0000000002a7af70, libserver.so)  // inlines: IsRealHero, ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
void __fastcall CDOTA_Modifier_Necrolyte_ReapersScythe::OnDestroy(CDOTA_Modifier_Necrolyte_ReapersScythe *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // r12

  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) == 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(Caster) )
    {
      v4 = CDOTA_Buff::GetParent(this);
      if ( (v4->m_iUnitType & 1) != 0 && !v4->m_bIsIllusion.m_Value )
      {
        v5 = CDOTA_Buff::GetParent(this);
        v6 = v5;
        if ( v5 != 0
          && (v5->m_iUnitType & 1) != 0
          && !this->m_bIllusion
          && !this->m_bArcWardenClone
          && (*(v5->_vptr_IHandleEntity + 390))(v5) != 0 )
        {
          (*(v6->_vptr_IHandleEntity + 390))(v6);
        }
      }
    }
  }
}


// CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime::~CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime  (line 1037, @0x0000000002ac13c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime::~CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime(
        CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime *const this)
{
  this->_vptr_CDOTA_Buff = &off_4407A50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime::~CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime  (line 1037, @0x0000000002ac13e0, libserver.so)  // inlines: ~CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime::~CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime(
        CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime *const this)
{
  this->_vptr_CDOTA_Buff = &off_4407A50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime::IsPurgable  (line 1042, @0x0000000002ab9ca0, libserver.so)
bool __fastcall CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime::IsPurgable(
        CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime *const this)
{
  return 0;
}


// CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime::OnCreated  (line 1056, @0x0000000002aaa040, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "respawn_constant"
void __fastcall CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime::OnCreated(
        CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->respawn_constant = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "respawn_constant", -1, 0);
  else
    this->respawn_constant = 0;
}


// CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime::DeclareFunctions  (line 1063, @0x0000000002a78040, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime::GetModifierStackingRespawnTime(CModifierParams const&)
void __fastcall CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime::DeclareFunctions(
        CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime *const this)
{
  this->m_Functions[76].__pfn = CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime::GetModifierStackingRespawnTime;
  this->m_Functions[76].__delta = 0;
}


// CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime::GetModifierStackingRespawnTime  (line 1071, @0x0000000002a78060, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime::GetModifierStackingRespawnTime(
        CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->respawn_constant;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


