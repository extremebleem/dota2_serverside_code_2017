// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_pugna.cpp:33
class CDOTA_Unit_Hero_Pugna : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Pugna(CDOTA_Unit_Hero_Pugna &);
	CDOTA_Unit_Hero_Pugna(CDOTA_Unit_Hero_Pugna &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_Pugna();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CDOTA_Unit_Hero_Pugna();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_pugna.cpp:57
class C_CDOTA_Unit_Hero_Pugna_MapInstall {
	C_CDOTA_Unit_Hero_Pugna_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_pugna.cpp:70
class CDOTA_Ability_Pugna_NetherBlast : public CDOTABaseAbility {
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
	CDOTA_Ability_Pugna_NetherBlast(CDOTA_Ability_Pugna_NetherBlast &);
	CDOTA_Ability_Pugna_NetherBlast(CDOTA_Ability_Pugna_NetherBlast &);
	CDOTA_Ability_Pugna_NetherBlast();
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
	virtual ~CDOTA_Ability_Pugna_NetherBlast();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[333] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_pugna.cpp:83
class C_CDOTA_Ability_Pugna_NetherBlast_MapInstall {
	C_CDOTA_Ability_Pugna_NetherBlast_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_pugna.cpp:119
class CDOTA_Modifier_Pugna_NetherBlast_Thinker : public CDOTA_Buff {
public:

	CDOTA_Modifier_Pugna_NetherBlast_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Pugna_NetherBlast_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_pugna.cpp:223
class CDOTA_Ability_Pugna_Decrepify : public CDOTABaseAbility {
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
	CDOTA_Ability_Pugna_Decrepify(CDOTA_Ability_Pugna_Decrepify &);
	CDOTA_Ability_Pugna_Decrepify(CDOTA_Ability_Pugna_Decrepify &);
	CDOTA_Ability_Pugna_Decrepify();
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
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Pugna_Decrepify();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_pugna.cpp:237
class C_CDOTA_Ability_Pugna_Decrepify_MapInstall {
	C_CDOTA_Ability_Pugna_Decrepify_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_pugna.cpp:325
class CDOTA_Modifier_Pugna_Decrepify : public CDOTA_Buff {
public:

private:

	int bonus_spell_damage_pct;  // +0xba8
	int bonus_spell_damage_pct_allies;  // +0xbac
	int bonus_movement_speed;  // +0xbb0
	int bonus_movement_speed_allies;  // +0xbb4
	CDOTA_Modifier_Pugna_Decrepify();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ModifierVariant_t GetModifierInvisibilityLevel(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetAbsoluteNoDamagePhysical(const CModifierParams &);
	virtual ModifierVariant_t GetModifierMagicalResistanceDecrepifyUnique(const CModifierParams &);
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Pugna_Decrepify();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[89] GetModifierInvisibilityLevel
	// vtable[65] DeclareFunctions
	// vtable[90] GetAbsoluteNoDamagePhysical
	// vtable[91] GetModifierMagicalResistanceDecrepifyUnique
	// vtable[92] GetModifierMoveSpeedBonus_Percentage
	// vtable[5] CheckState
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_pugna.cpp:461
class CDOTA_Ability_Pugna_NetherWard : public CDOTABaseAbility {
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
	CDOTA_Ability_Pugna_NetherWard(CDOTA_Ability_Pugna_NetherWard &);
	CDOTA_Ability_Pugna_NetherWard(CDOTA_Ability_Pugna_NetherWard &);
	CDOTA_Ability_Pugna_NetherWard();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Pugna_NetherWard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_pugna.cpp:474
class C_CDOTA_Ability_Pugna_NetherWard_MapInstall {
	C_CDOTA_Ability_Pugna_NetherWard_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_pugna.cpp:529
class CDOTA_Modifier_Pugna_NetherWard : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	float mana_multiplier;  // +0xbac
	CDOTA_Modifier_Pugna_NetherWard();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnSpentMana(const CModifierParams &);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool IsPermanent();
	ModifierVariant_t GetUnitLifetimeFraction(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamagePhysical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamageMagical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamagePure(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual ~CDOTA_Modifier_Pugna_NetherWard();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[89] OnSpentMana
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[23] IsPermanent
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_pugna.cpp:692
class CDOTA_Modifier_Pugna_NetherWard_Aura : public CDOTA_Buff {
public:

private:

	float mana_regen;  // +0xba8
	CDOTA_Modifier_Pugna_NetherWard_Aura();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierTotalPercentageManaRegen(const CModifierParams &);
	virtual ~CDOTA_Modifier_Pugna_NetherWard_Aura();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierTotalPercentageManaRegen
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_pugna.cpp:740
class CDOTA_Ability_Pugna_LifeDrain : public CDOTABaseAbility {
public:

private:

	EHANDLE m_hTarget;  // +0x390
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
	CDOTA_Ability_Pugna_LifeDrain(CDOTA_Ability_Pugna_LifeDrain &);
	CDOTA_Ability_Pugna_LifeDrain(CDOTA_Ability_Pugna_LifeDrain &);
	CDOTA_Ability_Pugna_LifeDrain();
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
	virtual float GetCooldown(int);
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Pugna_LifeDrain();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[242] GetCooldown
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_pugna.cpp:762
class C_CDOTA_Ability_Pugna_LifeDrain_MapInstall {
	C_CDOTA_Ability_Pugna_LifeDrain_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_pugna.cpp:873
class CDOTA_Modifier_Pugna_LifeDrain : public CDOTA_Buff {
public:

private:

	int health_drain;  // +0xba8
	int health_drain_scepter;  // +0xbac
	float tick_rate;  // +0xbb0
	bool m_bDoRangeCheck;  // +0xbb4

	int m_nFXIndex;  // +0xbb8
	CDOTA_Modifier_Pugna_LifeDrain();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnTakeDamage(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual bool AvoidFilter(CDOTA_BaseNPC *);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual ~CDOTA_Modifier_Pugna_LifeDrain();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] OnTakeDamage
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[76] AvoidFilter
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Pugna::~CDOTA_Unit_Hero_Pugna  (line 33, @0x0000000002ac6990, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Pugna::~CDOTA_Unit_Hero_Pugna(CDOTA_Unit_Hero_Pugna *const this)
{
  this->_vptr_IHandleEntity = &off_440FC10;
  this->_vptr_INextBotEventResponder = &off_4410BF0;
  this->_vptr_CObstructionObject = &off_4410F20;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Pugna::~CDOTA_Unit_Hero_Pugna  (line 33, @0x0000000002ac69d0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Pugna
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Pugna::~CDOTA_Unit_Hero_Pugna(CDOTA_Unit_Hero_Pugna *const this)
{
  this->_vptr_IHandleEntity = &off_440FC10;
  this->_vptr_INextBotEventResponder = &off_4410BF0;
  this->_vptr_CObstructionObject = &off_4410F20;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Pugna::Schema_DynamicBinding  (line 35, @0x0000000002aba150, libserver.so)
// globals: CDOTA_Unit_Hero_Pugna::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Pugna::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Pugna *const this)
{
  return CDOTA_Unit_Hero_Pugna::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 35, @0x0000000002aba180, libserver.so)
// globals: CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::DestructInstance  (line 35, @0x0000000002aba190, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Pugna>
void __fastcall CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::FreeInstance  (line 35, @0x0000000002aba1b0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::CanAllocate  (line 35, @0x0000000002aba1d0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 35, @0x0000000002aba1e0, libserver.so)
// globals: CDOTA_Unit_Hero_Pugna::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Pugna::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::AllocateInstance  (line 35, @0x0000000002abf300, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::ConstructInstance  (line 35, @0x0000000002ac49f0, libserver.so)  // inlines: CDOTA_Unit_Hero_Pugna, Construct<CDOTA_Unit_Hero_Pugna>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_440FC10;
    *(p + 236) = &off_4410BF0;
    *(p + 257) = &off_4410F20;
  }
  return p;
}


// CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002acd050, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002acd5c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Pugna::GetEntityClassInternal  (line 35, @0x0000000002adf570, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_hero_pugna", "CDOTA_Unit_Hero_Pugna"
// globals: `guard variable for'CDOTA_Unit_Hero_Pugna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PugnaClass, CDOTA_Unit_Hero_Pugna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PugnaClass, __dso_handle, CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Pugna::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PugnaClassInfo, CDOTA_Unit_Hero_Pugna::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PugnaClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Pugna::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Pugna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PugnaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Pugna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PugnaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Pugna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PugnaClass);
    CDOTA_Unit_Hero_Pugna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PugnaClass._vptr_CEntityClass = off_440FB90;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Pugna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PugnaClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Pugna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PugnaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_PugnaClass != 0 )
    return &CDOTA_Unit_Hero_Pugna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PugnaClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Pugna::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PugnaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Pugna::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PugnaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Pugna::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PugnaClassInfo,
      "CDOTA_Unit_Hero_Pugna",
      "npc_dota_hero_pugna",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Pugna::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PugnaClassInfo);
  }
  CDOTA_Unit_Hero_Pugna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PugnaClass.m_pClassInfo = &CDOTA_Unit_Hero_Pugna::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PugnaClassInfo;
  CDOTA_Unit_Hero_Pugna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PugnaClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Pugna::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PugnaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_PugnaClass = &CDOTA_Unit_Hero_Pugna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PugnaClass;
  CDOTA_Unit_Hero_Pugna::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PugnaClassInfo.m_pClass = &CDOTA_Unit_Hero_Pugna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PugnaClass;
  CDOTA_Unit_Hero_Pugna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PugnaClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_PugnaClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Pugna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PugnaClass;
}


// CDOTA_Unit_Hero_Pugna::Precache  (line 47, @0x0000000002ac6ff0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, DOTA_PrecacheUnitByNameSync
// strings: "npc_dota_pugna_nether_ward_1"
void __fastcall CDOTA_Unit_Hero_Pugna::Precache(
        CDOTA_Unit_Hero_Pugna *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  DOTA_PrecacheUnitByNameSync("npc_dota_pugna_nether_ward_1", pContext, -1);
}


// CDOTA_Unit_Hero_Pugna::YouForgotToImplementOrDeclareServerClass  (line 57, @0x0000000002a783f0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Pugna::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Pugna *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Pugna::GetServerClass  (line 57, @0x0000000002a89bf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Pugna::GetServerClass(CDOTA_Unit_Hero_Pugna *const this)
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


// CDOTA_Ability_Pugna_NetherBlast::~CDOTA_Ability_Pugna_NetherBlast  (line 70, @0x0000000002ac5a70, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Pugna_NetherBlast::~CDOTA_Ability_Pugna_NetherBlast(
        CDOTA_Ability_Pugna_NetherBlast *const this)
{
  this->_vptr_IHandleEntity = &off_4410FF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Pugna_NetherBlast::~CDOTA_Ability_Pugna_NetherBlast  (line 70, @0x0000000002ac5a90, libserver.so)  // inlines: ~CDOTA_Ability_Pugna_NetherBlast
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Pugna_NetherBlast::~CDOTA_Ability_Pugna_NetherBlast(
        CDOTA_Ability_Pugna_NetherBlast *const this)
{
  this->_vptr_IHandleEntity = &off_4410FF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Pugna_NetherBlast::Schema_DynamicBinding  (line 72, @0x0000000002aba1f0, libserver.so)
// globals: CDOTA_Ability_Pugna_NetherBlast::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Pugna_NetherBlast::Schema_DynamicBinding(
        const CDOTA_Ability_Pugna_NetherBlast *const this)
{
  return CDOTA_Ability_Pugna_NetherBlast::s_pSchemaBinding;
}


// CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 72, @0x0000000002aba200, libserver.so)
// globals: CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::DestructInstance  (line 72, @0x0000000002aba210, libserver.so)  // inlines: Destruct<CDOTA_Ability_Pugna_NetherBlast>
void __fastcall CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::FreeInstance  (line 72, @0x0000000002aba230, libserver.so)
void __fastcall CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::CanAllocate  (line 72, @0x0000000002aba250, libserver.so)
bool __fastcall CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 72, @0x0000000002aba260, libserver.so)
// globals: CDOTA_Ability_Pugna_NetherBlast::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Pugna_NetherBlast::s_pSchemaBinding;
}


// CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::AllocateInstance  (line 72, @0x0000000002abf340, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::ConstructInstance  (line 72, @0x0000000002ac2d80, libserver.so)  // inlines: CDOTA_Ability_Pugna_NetherBlast, Construct<CDOTA_Ability_Pugna_NetherBlast>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4410FF0;
  }
  return p;
}


// CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 72, @0x0000000002acc470, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 72, @0x0000000002acc490, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInternal  (line 72, @0x0000000002adf6c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "pugna_nether_blast", "CDOTA_Ability_Pugna_NetherBlast"
// globals: `guard variable for'CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClass, CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClass, __dso_handle, CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClassInfo, CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClassInfo
CEntityClass *__cdecl CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClass);
    CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClass._vptr_CEntityClass = off_4410F70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClass);
    __cxa_atexit(
      CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Pugna_NetherBlastClass != 0 )
    return &CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClass;
  if ( `guard variable for'CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClassInfo,
      "CDOTA_Ability_Pugna_NetherBlast",
      "pugna_nether_blast",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClassInfo);
  }
  CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClass.m_pClassInfo = &CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClassInfo;
  CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClass.m_pBaseClassInfo = CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Pugna_NetherBlastClass = &CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClass;
  CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClassInfo.m_pClass = &CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClass;
  CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Pugna_NetherBlastClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Pugna_NetherBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherBlastClass;
}


// CDOTA_Ability_Pugna_NetherBlast::GetAOERadius  (line 78, @0x0000000002ae6660, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Pugna_NetherBlast::GetAOERadius(CDOTA_Ability_Pugna_NetherBlast *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Pugna_NetherBlast::YouForgotToImplementOrDeclareServerClass  (line 83, @0x0000000002a78400, libserver.so)
int __fastcall CDOTA_Ability_Pugna_NetherBlast::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Pugna_NetherBlast *const this)
{
  return 0;
}


// CDOTA_Ability_Pugna_NetherBlast::GetServerClass  (line 83, @0x0000000002a899f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Pugna_NetherBlast::GetServerClass(CDOTA_Ability_Pugna_NetherBlast *const this)
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


// CDOTA_Ability_Pugna_NetherBlast::OnSpellStart  (line 92, @0x0000000002a7ba70, libserver.so)  // inlines: GetTeamNumber
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, Thinker_Create, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_pugna_nether_blast_thinker", "Hero_Pugna.NetherBlastPreCast"
void __fastcall CDOTA_Ability_Pugna_NetherBlast::OnSpellStart(CDOTA_Ability_Pugna_NetherBlast *const this)
{
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-28h]
  Vector CursorPosition; // 0:kr00_12.12

  v6 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_pugna_nether_blast_thinker");
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(Caster, this, "modifier_pugna_nether_blast_thinker", &kv, CursorPosition, m_Value, 0, 0, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(4, "Hero_Pugna.NetherBlastPreCast", v4);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Pugna_NetherBlast::GetAbilityDamageToTargetOverInterval  (line 103, @0x0000000002a9fea0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "blast_damage"
__int64 __fastcall CDOTA_Ability_Pugna_NetherBlast::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Pugna_NetherBlast *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "blast_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Pugna_NetherBlast_Thinker::~CDOTA_Modifier_Pugna_NetherBlast_Thinker  (line 119, @0x0000000002ac10a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Pugna_NetherBlast_Thinker::~CDOTA_Modifier_Pugna_NetherBlast_Thinker(
        CDOTA_Modifier_Pugna_NetherBlast_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4411AB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Pugna_NetherBlast_Thinker::~CDOTA_Modifier_Pugna_NetherBlast_Thinker  (line 119, @0x0000000002ac10c0, libserver.so)  // inlines: ~CDOTA_Modifier_Pugna_NetherBlast_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Pugna_NetherBlast_Thinker::~CDOTA_Modifier_Pugna_NetherBlast_Thinker(
        CDOTA_Modifier_Pugna_NetherBlast_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4411AB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Pugna_NetherBlast_Thinker::IsHidden  (line 127, @0x0000000002aba270, libserver.so)
bool __fastcall CDOTA_Modifier_Pugna_NetherBlast_Thinker::IsHidden(
        CDOTA_Modifier_Pugna_NetherBlast_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Pugna_NetherBlast_Thinker::OnCreated  (line 134, @0x0000000002a9e300, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, Vector, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::GetOpposingTeamNumber, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CRecipientFilter::AddRecipientsByTeam, DotaRetrieveAbilityValue<int> (21 total)
// strings: "particles/units/heroes/hero_pugna/pugna_netherblast_pre.vpcf"
void __fastcall CDOTA_Modifier_Pugna_NetherBlast_Thinker::OnCreated(
        CDOTA_Modifier_Pugna_NetherBlast_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  __m128i v5; // xmm0
  unsigned int v6; // r14d
  CDOTA_BaseNPC *Caster; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v10; // rax
  CDOTABaseAbility *v11; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int v13; // r13d
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  int radius; // [rsp+Ch] [rbp-174h] BYREF
  double v20[2]; // [rsp+10h] [rbp-170h]
  CReliableBroadcastRecipientFilter filter; // [rsp+20h] [rbp-160h] BYREF
  unsigned __int64 v22; // [rsp+158h] [rbp-28h]

  v22 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    *v5.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "delay", -1, 0);
    v6 = _mm_cvtsi128_si32(v5);
  }
  else
  {
    v6 = _mm_cvtsi128_si32(0LL);
  }
  CDOTA_Buff::StartIntervalThink(this, *&v6, v4);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  Caster = CDOTA_Buff::GetCaster(this);
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(Caster);
  GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
  CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
  v10 = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filter, v10);
  v11 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v11, &radius, "radius");
  ParticleManager = GetParticleManager();
  v13 = CDOTA_ParticleManager::CreateParticle(
          ParticleManager,
          "particles/units/heroes/hero_pugna/pugna_netherblast_pre.vpcf",
          2,
          0,
          &filter,
          0);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v16, v13, 0, *&AbsOrigin->x, AbsOrigin->z);
  *(v20 + 4) = v6 | 0x3F80000000000000LL;
  *v20 = radius;
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v17, v13, 1, v20[0], *&v20[1]);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v18, v13);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Modifier_Pugna_NetherBlast_Thinker::OnIntervalThink  (line 158, @0x0000000002aa62e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DotaRetrieveAbilityValue<float>, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSoundLocationWithCaster (18 total)
// strings: "blast_damage", "structure_damage_mod", "particles/units/heroes/hero_pugna/pugna_netherblast.vpcf", "Hero_Pugna.NetherBlast", "special_bonus_unique_pugna_2"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Pugna_NetherBlast_Thinker::OnIntervalThink(
        CDOTA_Modifier_Pugna_NetherBlast_Thinker *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v3; // rax
  CDOTABaseAbility *v4; // rax
  __m128i v5; // xmm4
  float v6; // r13d
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v12; // rax
  const Vector *v13; // r12
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  __int64 v19; // r12
  int v20; // ebx
  CHandle<CBaseEntity> *v21; // rdx
  uint32 m_Index; // eax
  __int16 v23; // cx
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  CEntityInstance *m_pInstance; // r13
  CDOTA_BaseNPC *v27; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v29; // r15
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  float structure_damage_mod; // [rsp+28h] [rbp-78h]
  float flDamage; // [rsp+2Ch] [rbp-74h]
  int radius; // [rsp+38h] [rbp-68h] BYREF
  int blast_damage; // [rsp+3Ch] [rbp-64h] BYREF
  Vector vPos; // [rsp+40h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+50h] [rbp-50h] BYREF

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &radius, "radius");
  v3 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v3, &blast_damage, "blast_damage");
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    structure_damage_mod = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "structure_damage_mod", -1, 0);
  else
    structure_damage_mod = 0.0;
  *v5.m128i_i32 = radius;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  Parent = CDOTA_Buff::GetParent(this);
  v8 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  Caster = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, Parent, v6, &hEntities, 2, 23, 0, 0, 0);
  ParticleManager = GetParticleManager();
  LODWORD(AbsOrigin) = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_pugna/pugna_netherblast.vpcf",
                         2,
                         0,
                         0,
                         0);
  v12 = CDOTA_Buff::GetParent(this);
  v13 = CBaseEntity::GetAbsOrigin(v12);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v14, AbsOrigin, 0, *&v13->x, v13->z);
  vPos.x = radius;
  vPos.y = radius;
  vPos.z = radius;
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v15, AbsOrigin, 1, *&vPos.x, vPos.z);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v16, AbsOrigin);
  v17 = CDOTA_Buff::GetParent(this);
  vPos = *CBaseEntity::GetAbsOrigin(v17);
  v18 = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vPos, "Hero_Pugna.NetherBlast", v18);
  if ( hEntities.m_Size > 0 )
  {
    v19 = 0;
    v20 = 0;
    do
    {
      while ( 1 )
      {
        v21 = &hEntities.m_Memory.m_pMemory[v19];
        m_Index = hEntities.m_Memory.m_pMemory[v19].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v23 = v21->m_Index;
          v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v21->m_Index) >> 9) & 0x3F];
          if ( v24 != 0 )
          {
            v25 = &v24[v23 & 0x1FF];
            if ( v25 != 0 && m_Index == v25->m_EHandle.m_Index )
            {
              m_pInstance = v25->m_pInstance;
              if ( v25->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                break;
            }
          }
        }
        ++v20;
        ++v19;
        if ( hEntities.m_Size <= v20 )
          goto LABEL_18;
      }
      flDamage = blast_damage;
      v27 = CDOTA_Buff::GetCaster(this);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v27, "special_bonus_unique_pugna_2", 0);
      if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
        flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flDamage;
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0 )
        flDamage = flDamage * structure_damage_mod;
      v29 = CDOTA_Buff::GetAbility(this);
      v30 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v30, m_pInstance, v29, flDamage, 2, 0);
      ++v20;
      ++v19;
    }
    while ( hEntities.m_Size > v20 );
  }
LABEL_18:
  v31 = CDOTA_Buff::GetParent(this);
  UTIL_Remove(v31);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Ability_Pugna_Decrepify::~CDOTA_Ability_Pugna_Decrepify  (line 223, @0x0000000002ac5ac0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Pugna_Decrepify::~CDOTA_Ability_Pugna_Decrepify(
        CDOTA_Ability_Pugna_Decrepify *const this)
{
  this->_vptr_IHandleEntity = &off_4411E10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Pugna_Decrepify::~CDOTA_Ability_Pugna_Decrepify  (line 223, @0x0000000002ac5ae0, libserver.so)  // inlines: ~CDOTA_Ability_Pugna_Decrepify
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Pugna_Decrepify::~CDOTA_Ability_Pugna_Decrepify(
        CDOTA_Ability_Pugna_Decrepify *const this)
{
  this->_vptr_IHandleEntity = &off_4411E10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Pugna_Decrepify::Schema_DynamicBinding  (line 225, @0x0000000002aba280, libserver.so)
// globals: CDOTA_Ability_Pugna_Decrepify::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Pugna_Decrepify::Schema_DynamicBinding(
        const CDOTA_Ability_Pugna_Decrepify *const this)
{
  return CDOTA_Ability_Pugna_Decrepify::s_pSchemaBinding;
}


// CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 225, @0x0000000002aba290, libserver.so)
// globals: CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::DestructInstance  (line 225, @0x0000000002aba2a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Pugna_Decrepify>
void __fastcall CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::FreeInstance  (line 225, @0x0000000002aba2c0, libserver.so)
void __fastcall CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::CanAllocate  (line 225, @0x0000000002aba2e0, libserver.so)
bool __fastcall CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 225, @0x0000000002aba2f0, libserver.so)
// globals: CDOTA_Ability_Pugna_Decrepify::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Pugna_Decrepify::s_pSchemaBinding;
}


// CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::AllocateInstance  (line 225, @0x0000000002abf380, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::ConstructInstance  (line 225, @0x0000000002ac2db0, libserver.so)  // inlines: CDOTA_Ability_Pugna_Decrepify, Construct<CDOTA_Ability_Pugna_Decrepify>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4411E10;
  }
  return p;
}


// CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 225, @0x0000000002acc4c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 225, @0x0000000002acc4e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Pugna_Decrepify::GetEntityClassInternal  (line 225, @0x0000000002adf810, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Pugna_Decrepify"
// globals: `guard variable for'CDOTA_Ability_Pugna_Decrepify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClass, CDOTA_Ability_Pugna_Decrepify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClass, __dso_handle, CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Pugna_Decrepify::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClassInfo, CDOTA_Ability_Pugna_Decrepify::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClassInfo
CEntityClass *__cdecl CDOTA_Ability_Pugna_Decrepify::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Pugna_Decrepify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Pugna_Decrepify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Pugna_Decrepify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClass);
    CDOTA_Ability_Pugna_Decrepify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClass._vptr_CEntityClass = off_4411D90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Pugna_Decrepify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClass);
    __cxa_atexit(
      CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Pugna_Decrepify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Pugna_DecrepifyClass != 0 )
    return &CDOTA_Ability_Pugna_Decrepify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClass;
  if ( `guard variable for'CDOTA_Ability_Pugna_Decrepify::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Pugna_Decrepify::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Pugna_Decrepify::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClassInfo,
      "CDOTA_Ability_Pugna_Decrepify",
      "pugna_decrepify",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Pugna_Decrepify::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClassInfo);
  }
  CDOTA_Ability_Pugna_Decrepify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClass.m_pClassInfo = &CDOTA_Ability_Pugna_Decrepify::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClassInfo;
  CDOTA_Ability_Pugna_Decrepify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClass.m_pBaseClassInfo = CDOTA_Ability_Pugna_Decrepify::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Pugna_DecrepifyClass = &CDOTA_Ability_Pugna_Decrepify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClass;
  CDOTA_Ability_Pugna_Decrepify::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClassInfo.m_pClass = &CDOTA_Ability_Pugna_Decrepify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClass;
  CDOTA_Ability_Pugna_Decrepify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Pugna_DecrepifyClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Pugna_Decrepify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_DecrepifyClass;
}


// CDOTA_Ability_Pugna_Decrepify::YouForgotToImplementOrDeclareServerClass  (line 237, @0x0000000002a78410, libserver.so)
int __fastcall CDOTA_Ability_Pugna_Decrepify::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Pugna_Decrepify *const this)
{
  return 0;
}


// CDOTA_Ability_Pugna_Decrepify::GetServerClass  (line 237, @0x0000000002a89df0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Pugna_Decrepify::GetServerClass(CDOTA_Ability_Pugna_Decrepify *const this)
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


// CDOTA_Ability_Pugna_Decrepify::OnSpellStart  (line 246, @0x0000000002a7b400, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_pugna_decrepify"
void __fastcall CDOTA_Ability_Pugna_Decrepify::OnSpellStart(CDOTA_Ability_Pugna_Decrepify *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1)
    && (v3->m_nUnitState64.m_Value & 0x200) == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_pugna_decrepify");
    CDOTABaseAbility::GetDuration(this);
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_pugna_decrepify", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Pugna_Decrepify::CastFilterResult  (line 269, @0x0000000002a7d480, libserver.so)  // inlines: FStrEq, GetUnitName, String, ToCStr, _V_strcmp
// calls: CDOTABaseAbility::GetCaster, UnitFilter, strcmp
// strings: "npc_dota_unit_tombstone1", "npc_dota_unit_tombstone2", "npc_dota_unit_tombstone3", "npc_dota_unit_tombstone4", "npc_dota_pugna_nether_ward_1", "npc_dota_pugna_nether_ward_2" (8 total)
int __fastcall CDOTA_Ability_Pugna_Decrepify::CastFilterResult(
        CDOTA_Ability_Pugna_Decrepify *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int result; // eax
  const char *m_pAsString; // rbx

  Caster = CDOTABaseAbility::GetCaster(this);
  result = UnitFilter(pTarget, 3, 51, 0, Caster->m_iTeamNum.m_Value);
  if ( result == 0 )
  {
    if ( (pTarget->m_iUnitType & 0x193) != 0 )
    {
      if ( (pTarget->m_nUnitState64.m_Value & 0x200) == 0 )
        return 0;
    }
    else
    {
      m_pAsString = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
      LOBYTE(result) = 23;
      if ( m_pAsString == 0 )
        return result;
      if ( m_pAsString == "npc_dota_unit_tombstone1"
        || strcmp(m_pAsString, "npc_dota_unit_tombstone1") == 0
        || m_pAsString == "npc_dota_unit_tombstone2"
        || strcmp(m_pAsString, "npc_dota_unit_tombstone2") == 0
        || m_pAsString == "npc_dota_unit_tombstone3"
        || strcmp(m_pAsString, "npc_dota_unit_tombstone3") == 0
        || m_pAsString == "npc_dota_unit_tombstone4"
        || strcmp(m_pAsString, "npc_dota_unit_tombstone4") == 0
        || m_pAsString == "npc_dota_pugna_nether_ward_1"
        || strcmp(m_pAsString, "npc_dota_pugna_nether_ward_1") == 0
        || m_pAsString == "npc_dota_pugna_nether_ward_2"
        || strcmp(m_pAsString, "npc_dota_pugna_nether_ward_2") == 0
        || m_pAsString == "npc_dota_pugna_nether_ward_3"
        || strcmp(m_pAsString, "npc_dota_pugna_nether_ward_3") == 0
        || m_pAsString == "npc_dota_pugna_nether_ward_4"
        || strcmp(m_pAsString, "npc_dota_pugna_nether_ward_4") == 0 )
      {
        return 0;
      }
    }
    return 23;
  }
  return result;
}


// CDOTA_Ability_Pugna_Decrepify::GetCustomCastError  (line 295, @0x0000000002a79350, libserver.so)  // inlines: FStrEq, GetUnitName, String, ToCStr, _V_strcmp
// calls: strcmp
// strings: "#dota_hud_error_only_cast_on_own_ward", "npc_dota_unit_tombstone1", "npc_dota_unit_tombstone2", "npc_dota_unit_tombstone3", "npc_dota_unit_tombstone4", "npc_dota_pugna_nether_ward_1" (10 total)
const char *__fastcall CDOTA_Ability_Pugna_Decrepify::GetCustomCastError(
        CDOTA_Ability_Pugna_Decrepify *const this,
        CDOTA_BaseNPC *pTarget)
{
  const char *result; // rax
  const char *m_pAsString; // rbx

  if ( (pTarget->m_iUnitType & 0x193) != 0 )
  {
    if ( (pTarget->m_nUnitState64.m_Value & 0x200) != 0 )
      return "#dota_hud_error_target_magic_immune";
    else
      return "";
  }
  else
  {
    result = "#dota_hud_error_only_cast_on_own_ward";
    m_pAsString = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
    if ( m_pAsString != 0 )
    {
      if ( m_pAsString == "npc_dota_unit_tombstone1"
        || strcmp(m_pAsString, "npc_dota_unit_tombstone1") == 0
        || m_pAsString == "npc_dota_unit_tombstone2"
        || strcmp(m_pAsString, "npc_dota_unit_tombstone2") == 0
        || m_pAsString == "npc_dota_unit_tombstone3"
        || strcmp(m_pAsString, "npc_dota_unit_tombstone3") == 0
        || m_pAsString == "npc_dota_unit_tombstone4"
        || strcmp(m_pAsString, "npc_dota_unit_tombstone4") == 0
        || m_pAsString == "npc_dota_pugna_nether_ward_1"
        || strcmp(m_pAsString, "npc_dota_pugna_nether_ward_1") == 0
        || m_pAsString == "npc_dota_pugna_nether_ward_2"
        || strcmp(m_pAsString, "npc_dota_pugna_nether_ward_2") == 0
        || m_pAsString == "npc_dota_pugna_nether_ward_3"
        || strcmp(m_pAsString, "npc_dota_pugna_nether_ward_3") == 0
        || m_pAsString == "npc_dota_pugna_nether_ward_4"
        || strcmp(m_pAsString, "npc_dota_pugna_nether_ward_4") == 0 )
      {
        return "";
      }
      else
      {
        return "#dota_hud_error_only_cast_on_own_ward";
      }
    }
  }
  return result;
}


// CDOTA_Ability_Pugna_Decrepify::GetSlowDuration  (line 316, @0x0000000002a7b2d0, libserver.so)
// calls: CDOTABaseAbility::GetDuration
float __fastcall CDOTA_Ability_Pugna_Decrepify::GetSlowDuration(CDOTA_Ability_Pugna_Decrepify *const this)
{
  return CDOTABaseAbility::GetDuration(this);
}


// CDOTA_Modifier_Pugna_Decrepify::~CDOTA_Modifier_Pugna_Decrepify  (line 325, @0x0000000002ac1050, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Pugna_Decrepify::~CDOTA_Modifier_Pugna_Decrepify(
        CDOTA_Modifier_Pugna_Decrepify *const this)
{
  this->_vptr_CDOTA_Buff = &off_44128D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Pugna_Decrepify::~CDOTA_Modifier_Pugna_Decrepify  (line 325, @0x0000000002ac1070, libserver.so)  // inlines: ~CDOTA_Modifier_Pugna_Decrepify
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Pugna_Decrepify::~CDOTA_Modifier_Pugna_Decrepify(
        CDOTA_Modifier_Pugna_Decrepify *const this)
{
  this->_vptr_CDOTA_Buff = &off_44128D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Pugna_Decrepify::IsDebuff  (line 330, @0x0000000002ac3470, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent
bool __fastcall CDOTA_Modifier_Pugna_Decrepify::IsDebuff(CDOTA_Modifier_Pugna_Decrepify *const this)
{
  CDOTA_BaseNPC *Caster; // rbx
  bool result; // al

  Caster = CDOTA_Buff::GetCaster(this);
  result = 0;
  if ( Caster != 0 )
    return CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value != Caster->m_iTeamNum.m_Value;
  return result;
}


// CDOTA_Modifier_Pugna_Decrepify::GetEffectName  (line 341, @0x0000000002aba300, libserver.so)
// strings: "particles/units/heroes/hero_pugna/pugna_decrepify.vpcf"
const char *__fastcall CDOTA_Modifier_Pugna_Decrepify::GetEffectName(CDOTA_Modifier_Pugna_Decrepify *const this)
{
  return "particles/units/heroes/hero_pugna/pugna_decrepify.vpcf";
}


// CDOTA_Modifier_Pugna_Decrepify::GetStatusEffectName  (line 342, @0x0000000002aba310, libserver.so)
// strings: "particles/status_fx/status_effect_ghost.vpcf"
const char *__fastcall CDOTA_Modifier_Pugna_Decrepify::GetStatusEffectName(CDOTA_Modifier_Pugna_Decrepify *const this)
{
  return "particles/status_fx/status_effect_ghost.vpcf";
}


// CDOTA_Modifier_Pugna_Decrepify::StatusEffectPriority  (line 343, @0x0000000002aba320, libserver.so)
int __fastcall CDOTA_Modifier_Pugna_Decrepify::StatusEffectPriority(CDOTA_Modifier_Pugna_Decrepify *const this)
{
  return 30;
}


// CDOTA_Modifier_Pugna_Decrepify::GetModifierInvisibilityLevel  (line 363, @0x0000000002a82190, libserver.so)  // inlines: RemapValClamped, clamp<float, float>, curtime
// calls: sinf
ModifierVariant_t __fastcall CDOTA_Modifier_Pugna_Decrepify::GetModifierInvisibilityLevel(
        CDOTA_Modifier_Pugna_Decrepify *const this,
        const CModifierParams *const params)
{
  CGlobalVars *v2; // rbx
  float v3; // xmm0_4
  __m128i v4; // xmm1
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  ModifierVariant_t result; // 0:rax.16

  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, params);
    }
    v3 = (sinf(6.0 * v2->m_flCurrentTime) + 5.0) / 10.0;
    if ( v3 < 0.0 )
    {
      v4 = 0x3E800000u;
    }
    else
    {
      v4 = 0x3E99999Au;
      if ( v3 <= 1.0 )
      {
        v4 = 0x3D4CCCD0u;
        *v4.m128i_i32 = (0.050000012 * v3) + 0.25;
      }
    }
  }
  else
  {
    v4 = 0x3E8CCCCDu;
  }
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Pugna_Decrepify::OnCreated  (line 374, @0x0000000002aac020, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_spell_damage_pct", "bonus_spell_damage_pct_allies", "bonus_movement_speed_allies"
void __fastcall CDOTA_Modifier_Pugna_Decrepify::OnCreated(CDOTA_Modifier_Pugna_Decrepify *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_spell_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                     Ability,
                                     "bonus_spell_damage_pct",
                                     -1,
                                     0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_spell_damage_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_spell_damage_pct_allies = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                              v4,
                                              "bonus_spell_damage_pct_allies",
                                              -1,
                                              0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->bonus_movement_speed = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->bonus_spell_damage_pct_allies = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_movement_speed", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_movement_speed_allies = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                          v6,
                                          "bonus_movement_speed_allies",
                                          -1,
                                          0);
    return;
  }
LABEL_9:
  this->bonus_movement_speed_allies = 0;
}


// CDOTA_Modifier_Pugna_Decrepify::DeclareFunctions  (line 389, @0x0000000002a78420, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Pugna_Decrepify::DeclareFunctions(CDOTA_Modifier_Pugna_Decrepify *const this)
{
  this->m_Functions[103].__pfn = (&stru_10 + 705);
  this->m_Functions[103].__delta = 0;
  this->m_Functions[50].__pfn = (&stru_10 + 713);
  this->m_Functions[50].__delta = 0;
  this->m_Functions[13].__pfn = (&stru_10 + 721);
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Pugna_Decrepify::GetAbsoluteNoDamagePhysical  (line 398, @0x0000000002a82a90, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_item_sange", "modifier_item_sange_and_yasha", "modifier_item_maelstrom", "modifier_item_mjollnir", "modifier_item_desolator"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Pugna_Decrepify::GetAbsoluteNoDamagePhysical(
        CDOTA_Modifier_Pugna_Decrepify *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  ModifierVariant_t result; // 0:rax.16

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
  if ( CDOTA_Buff::GetCaster(this) == m_pInstance
    && ((Caster = CDOTA_Buff::GetCaster(this), CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_item_sange", 0) != 0)
     || (v9 = CDOTA_Buff::GetCaster(this), CDOTA_BaseNPC::FindModifierByName(v9, "modifier_item_sange_and_yasha", 0) != 0)
     || (v10 = CDOTA_Buff::GetCaster(this), CDOTA_BaseNPC::FindModifierByName(v10, "modifier_item_maelstrom", 0) != 0)
     || (v11 = CDOTA_Buff::GetCaster(this), CDOTA_BaseNPC::FindModifierByName(v11, "modifier_item_mjollnir", 0) != 0)
     || (v12 = CDOTA_Buff::GetCaster(this), CDOTA_BaseNPC::FindModifierByName(v12, "modifier_item_desolator", 0) != 0)) )
  {
    *&result.m_eType = 1;
  }
  else
  {
    *&result.m_eType = 0x3F80000000000001LL;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Pugna_Decrepify::GetModifierMagicalResistanceDecrepifyUnique  (line 420, @0x0000000002a84230, libserver.so)  // inlines: FStrEq, Get, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTAAbility, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, __dynamic_cast, strcmp
// strings: "earthshaker_echo_slam", "tinker_heat_seeking_missile", "particles/units/heroes/hero_juggernaut/juggernaut_blade_fury.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Pugna_Decrepify::GetModifierMagicalResistanceDecrepifyUnique(
        CDOTA_Modifier_Pugna_Decrepify *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  unsigned __int8 m_Value; // r12
  CDOTA_BaseNPC *Caster; // rax
  __m128i v8; // xmm0
  int bonus_spell_damage_pct_allies; // edx
  void *v11; // rax
  const char **v12; // rax
  const char *v13; // r12
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->inflictor.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->inflictor.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->inflictor.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
      {
        v11 = __dynamic_cast(v5->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
        if ( v11 != 0 )
        {
          v12 = *(v11 + 111);
          if ( v12 != 0 )
          {
            v13 = *v12;
            if ( *v12 != 0
              && (v13 == "earthshaker_echo_slam"
               || strcmp(*v12, "earthshaker_echo_slam") == 0
               || v13 == "tinker_heat_seeking_missile"
               || strcmp(v13, "tinker_heat_seeking_missile") == 0
               || v13 == "particles/units/heroes/hero_juggernaut/juggernaut_blade_fury.vpcf"
               || strcmp(v13, "particles/units/heroes/hero_juggernaut/juggernaut_blade_fury.vpcf") == 0) )
            {
              return 1uLL;
            }
          }
        }
      }
    }
  }
  m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
  Caster = CDOTA_Buff::GetCaster(this);
  bonus_spell_damage_pct_allies = this->bonus_spell_damage_pct_allies;
  if ( m_Value != Caster->m_iTeamNum.m_Value )
    bonus_spell_damage_pct_allies = this->bonus_spell_damage_pct;
  *v8.m128i_i32 = bonus_spell_damage_pct_allies;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v8) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Pugna_Decrepify::GetModifierMoveSpeedBonus_Percentage  (line 440, @0x0000000002a79cb0, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Pugna_Decrepify::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Pugna_Decrepify *const this,
        const CModifierParams *const params)
{
  unsigned __int8 m_Value; // r12
  CDOTA_BaseNPC *Caster; // rax
  __m128i v5; // xmm0
  int bonus_movement_speed_allies; // edx
  ModifierVariant_t result; // 0:rax.16

  m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
  Caster = CDOTA_Buff::GetCaster(this);
  bonus_movement_speed_allies = this->bonus_movement_speed_allies;
  if ( m_Value != Caster->m_iTeamNum.m_Value )
    bonus_movement_speed_allies = this->bonus_movement_speed;
  *v5.m128i_i32 = bonus_movement_speed_allies;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v5) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Pugna_Decrepify::CheckState  (line 447, @0x0000000002a78470, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Pugna_Decrepify::CheckState(
        CDOTA_Modifier_Pugna_Decrepify *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 6uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFF9LL;
}


// CDOTA_Ability_Pugna_NetherWard::~CDOTA_Ability_Pugna_NetherWard  (line 461, @0x0000000002ac5b10, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Pugna_NetherWard::~CDOTA_Ability_Pugna_NetherWard(
        CDOTA_Ability_Pugna_NetherWard *const this)
{
  this->_vptr_IHandleEntity = &off_4412C50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Pugna_NetherWard::~CDOTA_Ability_Pugna_NetherWard  (line 461, @0x0000000002ac5b30, libserver.so)  // inlines: ~CDOTA_Ability_Pugna_NetherWard
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Pugna_NetherWard::~CDOTA_Ability_Pugna_NetherWard(
        CDOTA_Ability_Pugna_NetherWard *const this)
{
  this->_vptr_IHandleEntity = &off_4412C50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Pugna_NetherWard::Schema_DynamicBinding  (line 463, @0x0000000002aba330, libserver.so)
// globals: CDOTA_Ability_Pugna_NetherWard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Pugna_NetherWard::Schema_DynamicBinding(
        const CDOTA_Ability_Pugna_NetherWard *const this)
{
  return CDOTA_Ability_Pugna_NetherWard::s_pSchemaBinding;
}


// CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 463, @0x0000000002aba340, libserver.so)
// globals: CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::DestructInstance  (line 463, @0x0000000002aba350, libserver.so)  // inlines: Destruct<CDOTA_Ability_Pugna_NetherWard>
void __fastcall CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::FreeInstance  (line 463, @0x0000000002aba370, libserver.so)
void __fastcall CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::CanAllocate  (line 463, @0x0000000002aba390, libserver.so)
bool __fastcall CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 463, @0x0000000002aba3a0, libserver.so)
// globals: CDOTA_Ability_Pugna_NetherWard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Pugna_NetherWard::s_pSchemaBinding;
}


// CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::AllocateInstance  (line 463, @0x0000000002abf3c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::ConstructInstance  (line 463, @0x0000000002ac2de0, libserver.so)  // inlines: CDOTA_Ability_Pugna_NetherWard, Construct<CDOTA_Ability_Pugna_NetherWard>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4412C50;
  }
  return p;
}


// CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 463, @0x0000000002acc510, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 463, @0x0000000002acc530, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Pugna_NetherWard::GetEntityClassInternal  (line 463, @0x0000000002adf960, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Pugna_NetherWard"
// globals: `guard variable for'CDOTA_Ability_Pugna_NetherWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClass, CDOTA_Ability_Pugna_NetherWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClass, __dso_handle, CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Pugna_NetherWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClassInfo, CDOTA_Ability_Pugna_NetherWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClassInfo
CEntityClass *__cdecl CDOTA_Ability_Pugna_NetherWard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Pugna_NetherWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Pugna_NetherWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Pugna_NetherWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClass);
    CDOTA_Ability_Pugna_NetherWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClass._vptr_CEntityClass = off_4412BD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Pugna_NetherWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClass);
    __cxa_atexit(
      CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Pugna_NetherWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Pugna_NetherWardClass != 0 )
    return &CDOTA_Ability_Pugna_NetherWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClass;
  if ( `guard variable for'CDOTA_Ability_Pugna_NetherWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Pugna_NetherWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Pugna_NetherWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClassInfo,
      "CDOTA_Ability_Pugna_NetherWard",
      "pugna_nether_ward",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Pugna_NetherWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClassInfo);
  }
  CDOTA_Ability_Pugna_NetherWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClass.m_pClassInfo = &CDOTA_Ability_Pugna_NetherWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClassInfo;
  CDOTA_Ability_Pugna_NetherWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClass.m_pBaseClassInfo = CDOTA_Ability_Pugna_NetherWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Pugna_NetherWardClass = &CDOTA_Ability_Pugna_NetherWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClass;
  CDOTA_Ability_Pugna_NetherWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClassInfo.m_pClass = &CDOTA_Ability_Pugna_NetherWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClass;
  CDOTA_Ability_Pugna_NetherWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Pugna_NetherWardClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Pugna_NetherWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_NetherWardClass;
}


// CDOTA_Ability_Pugna_NetherWard::YouForgotToImplementOrDeclareServerClass  (line 474, @0x0000000002a78490, libserver.so)
int __fastcall CDOTA_Ability_Pugna_NetherWard::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Pugna_NetherWard *const this)
{
  return 0;
}


// CDOTA_Ability_Pugna_NetherWard::GetServerClass  (line 474, @0x0000000002a898f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Pugna_NetherWard::GetServerClass(CDOTA_Ability_Pugna_NetherWard *const this)
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


// CDOTA_Ability_Pugna_NetherWard::OnSpellStart  (line 498, @0x0000000002a98160, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTABaseAbility::GetCursorPosition, CDOTABaseAbility::GetCaster, CFmtStrN<256, false>::CFmtStrN, DOTA_Character_ScriptSpawn_Synchronous, CDOTA_BaseNPC::SetControllableByPlayer, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, FindClearSpaceForUnit, CDOTA_BaseNPC::FindReplacementSound, CDOTA_BaseNPC::UnitEmitSound (16 total)
// strings: "npc_dota_pugna_nether_ward_%d", "modifier_pugna_nether_ward", "Hero_Pugna.NetherWard"
void __fastcall CDOTA_Ability_Pugna_NetherWard::OnSpellStart(CDOTA_Ability_Pugna_NetherWard *const this)
{
  CDOTA_BaseNPC *Caster; // r14
  int m_Value; // r12d
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // r12
  void (__fastcall *v6)(CDOTA_BaseNPC *, _QWORD); // r14
  CDOTA_BaseNPC *v7; // rax
  void (__fastcall *v8)(CDOTA_BaseNPC *, CDOTA_BaseNPC *); // r14
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  int v11; // eax
  float v12; // xmm1_4
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  const char *ReplacementSound; // rax
  KeyValues kv; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v17; // [rsp+128h] [rbp-28h]
  Vector CursorPosition; // 0:kr00_12.12

  v17 = __readfsqword(0x28u);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CFmtStrN<256,false>::CFmtStrN(&kv, "npc_dota_pugna_nether_ward_%d", this->m_iLevel.m_Value);
  v4 = DOTA_Character_ScriptSpawn_Synchronous(&kv.CKeyValues_Data + 9, m_Value, Caster, 0, 0, CursorPosition);
  v5 = v4;
  if ( v4 != 0 )
  {
    v6 = *(v4->_vptr_IHandleEntity + 70);
    v7 = CDOTABaseAbility::GetCaster(this);
    v6(v5, v7->m_iTeamNum.m_Value);
    v8 = *(v5->_vptr_IHandleEntity + 40);
    v9 = CDOTABaseAbility::GetCaster(this);
    v8(v5, v9);
    v10 = CDOTABaseAbility::GetCaster(this);
    v11 = (*(v10->_vptr_IHandleEntity + 414))(v10);
    CDOTA_BaseNPC::SetControllableByPlayer(v5, v11, 0);
    KeyValues::KeyValues(&kv, "modifier_pugna_nether_ward");
    CDOTABaseAbility::GetDuration(this);
    KeyValues::SetFloat(&kv, "duration", v12);
    v13 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v5, v13, this, "modifier_pugna_nether_ward", &kv, 0);
    FindClearSpaceForUnit(v5, CursorPosition, 1);
    v14 = CDOTABaseAbility::GetCaster(this);
    ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v14, "Hero_Pugna.NetherWard");
    CDOTA_BaseNPC::UnitEmitSound(v5, ReplacementSound, 0.0, 0, 0);
    CDOTA_BaseNPC::StartGesture(v5, 1534, 0.1, 0.1, 9, 0, 1.0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Pugna_NetherWard::~CDOTA_Modifier_Pugna_NetherWard  (line 529, @0x0000000002ac1000, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Pugna_NetherWard::~CDOTA_Modifier_Pugna_NetherWard(
        CDOTA_Modifier_Pugna_NetherWard *const this)
{
  this->_vptr_CDOTA_Buff = &off_4413710;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Pugna_NetherWard::~CDOTA_Modifier_Pugna_NetherWard  (line 529, @0x0000000002ac1020, libserver.so)  // inlines: ~CDOTA_Modifier_Pugna_NetherWard
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Pugna_NetherWard::~CDOTA_Modifier_Pugna_NetherWard(
        CDOTA_Modifier_Pugna_NetherWard *const this)
{
  this->_vptr_CDOTA_Buff = &off_4413710;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Pugna_NetherWard::IsHidden  (line 534, @0x0000000002aba3b0, libserver.so)
bool __fastcall CDOTA_Modifier_Pugna_NetherWard::IsHidden(CDOTA_Modifier_Pugna_NetherWard *const this)
{
  return 1;
}


// CDOTA_Modifier_Pugna_NetherWard::IsAura  (line 542, @0x0000000002aba3c0, libserver.so)
bool __fastcall CDOTA_Modifier_Pugna_NetherWard::IsAura(CDOTA_Modifier_Pugna_NetherWard *const this)
{
  return 1;
}


// CDOTA_Modifier_Pugna_NetherWard::GetModifierAura  (line 543, @0x0000000002aba3d0, libserver.so)
// strings: "modifier_pugna_nether_ward_aura"
const char *__fastcall CDOTA_Modifier_Pugna_NetherWard::GetModifierAura(CDOTA_Modifier_Pugna_NetherWard *const this)
{
  return "modifier_pugna_nether_ward_aura";
}


// CDOTA_Modifier_Pugna_NetherWard::GetAuraSearchTeam  (line 544, @0x0000000002aba3e0, libserver.so)
int __fastcall CDOTA_Modifier_Pugna_NetherWard::GetAuraSearchTeam(CDOTA_Modifier_Pugna_NetherWard *const this)
{
  return 2;
}


// CDOTA_Modifier_Pugna_NetherWard::GetAuraSearchType  (line 545, @0x0000000002aba3f0, libserver.so)
int __fastcall CDOTA_Modifier_Pugna_NetherWard::GetAuraSearchType(CDOTA_Modifier_Pugna_NetherWard *const this)
{
  return 1;
}


// CDOTA_Modifier_Pugna_NetherWard::GetAuraSearchFlags  (line 546, @0x0000000002aba400, libserver.so)
int __fastcall CDOTA_Modifier_Pugna_NetherWard::GetAuraSearchFlags(CDOTA_Modifier_Pugna_NetherWard *const this)
{
  return 16;
}


// CDOTA_Modifier_Pugna_NetherWard::GetAuraRadius  (line 547, @0x0000000002aba410, libserver.so)
int __fastcall CDOTA_Modifier_Pugna_NetherWard::GetAuraRadius(CDOTA_Modifier_Pugna_NetherWard *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Pugna_NetherWard::IsPermanent  (line 549, @0x0000000002aba420, libserver.so)
bool __fastcall CDOTA_Modifier_Pugna_NetherWard::IsPermanent(CDOTA_Modifier_Pugna_NetherWard *const this)
{
  return 0;
}


// CDOTA_Modifier_Pugna_NetherWard::OnCreated  (line 567, @0x0000000002aab970, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTABody::StartAnimation
// strings: "mana_multiplier"
void __fastcall CDOTA_Modifier_Pugna_NetherWard::OnCreated(CDOTA_Modifier_Pugna_NetherWard *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTABody *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->mana_multiplier = 0.0;
    goto LABEL_4;
  }
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->mana_multiplier = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "mana_multiplier", -1, 0);
LABEL_4:
  Parent = CDOTA_Buff::GetParent(this);
  v6 = (*(Parent->_vptr_IHandleEntity + 377))(Parent);
  CDOTABody::StartAnimation(v6, 0x5DCu, 0, 1.0);
}


// CDOTA_Modifier_Pugna_NetherWard::OnDestroy  (line 578, @0x0000000002a7c370, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::MarkExpired, CDOTA_BaseNPC::ForceKill, CBaseEntity::AddEffects
void __fastcall CDOTA_Modifier_Pugna_NetherWard::OnDestroy(CDOTA_Modifier_Pugna_NetherWard *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::MarkExpired(Parent);
  v3 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ForceKill(v3, 0);
  v4 = CDOTA_Buff::GetParent(this);
  CBaseEntity::AddEffects(v4, 32);
}


// CDOTA_Modifier_Pugna_NetherWard::DeclareFunctions  (line 589, @0x0000000002a784a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Pugna_NetherWard::GetUnitLifetimeFraction(CModifierParams const&), CDOTA_Modifier_Pugna_NetherWard::GetAbsoluteNoDamagePhysical(CModifierParams const&), CDOTA_Modifier_Pugna_NetherWard::GetAbsoluteNoDamageMagical(CModifierParams const&), CDOTA_Modifier_Pugna_NetherWard::GetAbsoluteNoDamagePure(CModifierParams const&), CDOTA_Modifier_Pugna_NetherWard::OnAttacked(CModifierParams const&)
void __fastcall CDOTA_Modifier_Pugna_NetherWard::DeclareFunctions(CDOTA_Modifier_Pugna_NetherWard *const this)
{
  this->m_Functions[157].__pfn = CDOTA_Modifier_Pugna_NetherWard::GetUnitLifetimeFraction;
  this->m_Functions[140].__pfn = (&stru_10 + 697);
  this->m_Functions[140].__delta = 0;
  this->m_Functions[103].__pfn = CDOTA_Modifier_Pugna_NetherWard::GetAbsoluteNoDamagePhysical;
  this->m_Functions[104].__pfn = CDOTA_Modifier_Pugna_NetherWard::GetAbsoluteNoDamageMagical;
  this->m_Functions[105].__pfn = CDOTA_Modifier_Pugna_NetherWard::GetAbsoluteNoDamagePure;
  this->m_Functions[157].__delta = 0;
  this->m_Functions[103].__delta = 0;
  this->m_Functions[104].__delta = 0;
  this->m_Functions[105].__delta = 0;
  this->m_Functions[137].__pfn = CDOTA_Modifier_Pugna_NetherWard::OnAttacked;
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_Pugna_NetherWard::GetAbsoluteNoDamagePhysical  (line 600, @0x0000000002a78540, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Pugna_NetherWard::GetAbsoluteNoDamagePhysical(
        CDOTA_Modifier_Pugna_NetherWard *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Pugna_NetherWard::GetAbsoluteNoDamageMagical  (line 607, @0x0000000002a78560, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Pugna_NetherWard::GetAbsoluteNoDamageMagical(
        CDOTA_Modifier_Pugna_NetherWard *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Pugna_NetherWard::GetAbsoluteNoDamagePure  (line 614, @0x0000000002a78580, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Pugna_NetherWard::GetAbsoluteNoDamagePure(
        CDOTA_Modifier_Pugna_NetherWard *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Pugna_NetherWard::OnAttacked  (line 621, @0x0000000002a85af0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::Kill, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Pugna_NetherWard::OnAttacked(
        CDOTA_Modifier_Pugna_NetherWard *const this,
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
                  if ( (v12[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 || (v13 = 4, LOBYTE(v12[71].m_pEntity) != 0) )
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


// CDOTA_Modifier_Pugna_NetherWard::GetUnitLifetimeFraction  (line 652, @0x0000000002a785a0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Modifier_Pugna_NetherWard::GetUnitLifetimeFraction(
        CDOTA_Modifier_Pugna_NetherWard *const this,
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


// CDOTA_Modifier_Pugna_NetherWard::OnSpentMana  (line 660, @0x0000000002a852f0, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, UnitNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetAbility, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, CDOTA_BaseNPC::FindReplacementSound, CDOTA_BaseNPC::UnitEmitSound
// strings: "particles/units/heroes/hero_pugna/pugna_ward_attack_light.vpcf", "particles/units/heroes/hero_pugna/pugna_ward_attack_medium.vpcf", "particles/units/heroes/hero_pugna/pugna_ward_attack_heavy.vpcf", "attach_attack1", "attach_hitloc", "Hero_Pugna.NetherWard.Target" (7 total)
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Pugna_NetherWard::OnSpentMana(
        CDOTA_Modifier_Pugna_NetherWard *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  unsigned __int8 m_Value; // r14
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r14
  const Vector *v12; // rax
  int v13; // r15d
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *Caster; // rax
  int nCost; // edx
  const char *v18; // r12
  CBaseEntity *v19; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *v22; // rax
  const Vector *v23; // r14
  CDOTA_BaseNPC *v24; // r15
  CDOTA_ParticleManager *v25; // rax
  const Vector *v26; // r14
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  const char *ReplacementSound; // r12
  CDOTA_BaseNPC *v31; // rax

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
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          m_Value = m_pInstance->m_iTeamNum.m_Value;
          if ( m_Value != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
          {
            Parent = CDOTA_Buff::GetParent(this);
            AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
            v12 = CBaseEntity::GetAbsOrigin(m_pInstance);
            if ( this->radius > fsqrt(
                                  ((v12->x - AbsOrigin->x) * (v12->x - AbsOrigin->x))
                                + ((v12->y - AbsOrigin->y) * (v12->y - AbsOrigin->y))) )
            {
              v13 = (params->nCost * this->mana_multiplier);
              if ( v13 > 0 )
              {
                Ability = CDOTA_Buff::GetAbility(this);
                v15 = CDOTA_Buff::GetParent(this);
                ApplyDamage(v15, m_pInstance, Ability, v13, 2, 0);
                Caster = CDOTA_Buff::GetCaster(this);
                nCost = params->nCost;
                v18 = "particles/units/heroes/hero_pugna/pugna_ward_attack_light.vpcf";
                v19 = Caster;
                if ( nCost > 99 )
                {
                  v18 = "particles/units/heroes/hero_pugna/pugna_ward_attack_medium.vpcf";
                  if ( nCost > 249 )
                    v18 = "particles/units/heroes/hero_pugna/pugna_ward_attack_heavy.vpcf";
                }
                ParticleManager = GetParticleManager();
                Particle = CDOTA_ParticleManager::CreateParticle(ParticleManager, v18, 2, 0, 0, v19);
                v22 = CDOTA_Buff::GetParent(this);
                v23 = CBaseEntity::GetAbsOrigin(v22);
                v24 = CDOTA_Buff::GetParent(this);
                v25 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v25, Particle, 0, v24, 5, "attach_attack1", *v23, 1);
                v26 = CBaseEntity::GetAbsOrigin(m_pInstance);
                v27 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v27, Particle, 1, m_pInstance, 5, "attach_hitloc", *v26, 1);
                v28 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v28, Particle);
                DOTA_EmitSound(10, "Hero_Pugna.NetherWard.Target", m_pInstance);
                v29 = CDOTA_Buff::GetCaster(this);
                ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v29, "Hero_Pugna.NetherWard.Attack");
                v31 = CDOTA_Buff::GetParent(this);
                CDOTA_BaseNPC::UnitEmitSound(v31, ReplacementSound, 0.0, 0, 0);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Pugna_NetherWard_Aura::~CDOTA_Modifier_Pugna_NetherWard_Aura  (line 692, @0x0000000002ac0fb0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Pugna_NetherWard_Aura::~CDOTA_Modifier_Pugna_NetherWard_Aura(
        CDOTA_Modifier_Pugna_NetherWard_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4413A30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Pugna_NetherWard_Aura::~CDOTA_Modifier_Pugna_NetherWard_Aura  (line 692, @0x0000000002ac0fd0, libserver.so)  // inlines: ~CDOTA_Modifier_Pugna_NetherWard_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Pugna_NetherWard_Aura::~CDOTA_Modifier_Pugna_NetherWard_Aura(
        CDOTA_Modifier_Pugna_NetherWard_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4413A30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Pugna_NetherWard_Aura::IsDebuff  (line 697, @0x0000000002aba430, libserver.so)
bool __fastcall CDOTA_Modifier_Pugna_NetherWard_Aura::IsDebuff(CDOTA_Modifier_Pugna_NetherWard_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Pugna_NetherWard_Aura::IsPurgable  (line 700, @0x0000000002aba440, libserver.so)
bool __fastcall CDOTA_Modifier_Pugna_NetherWard_Aura::IsPurgable(CDOTA_Modifier_Pugna_NetherWard_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Pugna_NetherWard_Aura::OnCreated  (line 714, @0x0000000002a9c730, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_Pugna_NetherWard_Aura::OnCreated(
        CDOTA_Modifier_Pugna_NetherWard_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "mana_regen", -1, 0);
  else
    this->mana_regen = 0.0;
}


// CDOTA_Modifier_Pugna_NetherWard_Aura::DeclareFunctions  (line 721, @0x0000000002a78610, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Pugna_NetherWard_Aura::DeclareFunctions(
        CDOTA_Modifier_Pugna_NetherWard_Aura *const this)
{
  this->m_Functions[55].__pfn = (&stru_10 + 697);
  this->m_Functions[55].__delta = 0;
}


// CDOTA_Modifier_Pugna_NetherWard_Aura::GetModifierTotalPercentageManaRegen  (line 728, @0x0000000002a78630, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Pugna_NetherWard_Aura::GetModifierTotalPercentageManaRegen(
        CDOTA_Modifier_Pugna_NetherWard_Aura *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->mana_regen) << 32) | 1;
  return result;
}


// CDOTA_Ability_Pugna_LifeDrain::~CDOTA_Ability_Pugna_LifeDrain  (line 740, @0x0000000002ac5b60, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Pugna_LifeDrain::~CDOTA_Ability_Pugna_LifeDrain(
        CDOTA_Ability_Pugna_LifeDrain *const this)
{
  this->_vptr_IHandleEntity = &off_4413D90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Pugna_LifeDrain::~CDOTA_Ability_Pugna_LifeDrain  (line 740, @0x0000000002ac5b80, libserver.so)  // inlines: ~CDOTA_Ability_Pugna_LifeDrain
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Pugna_LifeDrain::~CDOTA_Ability_Pugna_LifeDrain(
        CDOTA_Ability_Pugna_LifeDrain *const this)
{
  this->_vptr_IHandleEntity = &off_4413D90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Pugna_LifeDrain::Schema_DynamicBinding  (line 742, @0x0000000002aba450, libserver.so)
// globals: CDOTA_Ability_Pugna_LifeDrain::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Pugna_LifeDrain::Schema_DynamicBinding(
        const CDOTA_Ability_Pugna_LifeDrain *const this)
{
  return CDOTA_Ability_Pugna_LifeDrain::s_pSchemaBinding;
}


// CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 742, @0x0000000002aba460, libserver.so)
// globals: CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::DestructInstance  (line 742, @0x0000000002aba470, libserver.so)  // inlines: Destruct<CDOTA_Ability_Pugna_LifeDrain>
void __fastcall CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::FreeInstance  (line 742, @0x0000000002aba490, libserver.so)
void __fastcall CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::CanAllocate  (line 742, @0x0000000002aba4b0, libserver.so)
bool __fastcall CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 742, @0x0000000002aba4c0, libserver.so)
// globals: CDOTA_Ability_Pugna_LifeDrain::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Pugna_LifeDrain::s_pSchemaBinding;
}


// CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::AllocateInstance  (line 742, @0x0000000002abf400, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::ConstructInstance  (line 742, @0x0000000002ac2e10, libserver.so)  // inlines: CDOTA_Ability_Pugna_LifeDrain, CEntityHandle, CHandle, Construct<CDOTA_Ability_Pugna_LifeDrain>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = -1;
    *p = &off_4413D90;
  }
  return p;
}


// CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 742, @0x0000000002acc560, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 742, @0x0000000002acc580, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInternal  (line 742, @0x0000000002adfab0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Pugna_LifeDrain"
// globals: `guard variable for'CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClass, CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClass, __dso_handle, CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClassInfo, CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClassInfo
CEntityClass *__cdecl CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClass);
    CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClass._vptr_CEntityClass = off_4413D10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClass);
    __cxa_atexit(
      CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Pugna_LifeDrainClass != 0 )
    return &CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClass;
  if ( `guard variable for'CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClassInfo,
      "CDOTA_Ability_Pugna_LifeDrain",
      "pugna_life_drain",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClassInfo);
  }
  CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClass.m_pClassInfo = &CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClassInfo;
  CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClass.m_pBaseClassInfo = CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Pugna_LifeDrainClass = &CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClass;
  CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClassInfo.m_pClass = &CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClass;
  CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Pugna_LifeDrainClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Pugna_LifeDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pugna_LifeDrainClass;
}


// CDOTA_Ability_Pugna_LifeDrain::GetStolenActivityModifier  (line 753, @0x0000000002aba4d0, libserver.so)
const char *__fastcall CDOTA_Ability_Pugna_LifeDrain::GetStolenActivityModifier(
        CDOTA_Ability_Pugna_LifeDrain *const this)
{
  return "life_drain";
}


// CDOTA_Ability_Pugna_LifeDrain::YouForgotToImplementOrDeclareServerClass  (line 762, @0x0000000002a78650, libserver.so)
int __fastcall CDOTA_Ability_Pugna_LifeDrain::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Pugna_LifeDrain *const this)
{
  return 0;
}


// CDOTA_Ability_Pugna_LifeDrain::GetServerClass  (line 762, @0x0000000002a89cf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Pugna_LifeDrain::GetServerClass(CDOTA_Ability_Pugna_LifeDrain *const this)
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


// CDOTA_Ability_Pugna_LifeDrain::CastFilterResult  (line 772, @0x0000000002a7ad50, libserver.so)
// calls: CDOTABaseAbility::CastFilterResult, CDOTABaseAbility::GetCaster
int __fastcall CDOTA_Ability_Pugna_LifeDrain::CastFilterResult(
        CDOTA_Ability_Pugna_LifeDrain *const this,
        CDOTA_BaseNPC *pTarget)
{
  int v4; // ebx

  v4 = CDOTABaseAbility::CastFilterResult(this, pTarget);
  if ( v4 == 0 && pTarget == CDOTABaseAbility::GetCaster(this) )
    return 23;
  return v4;
}


// CDOTA_Ability_Pugna_LifeDrain::GetCustomCastError  (line 786, @0x0000000002a78660, libserver.so)
// strings: "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Ability_Pugna_LifeDrain::GetCustomCastError(
        CDOTA_Ability_Pugna_LifeDrain *const this,
        CDOTA_BaseNPC *pTarget)
{
  return "#dota_hud_error_cant_cast_on_self";
}


// CDOTA_Ability_Pugna_LifeDrain::OnSpellStart  (line 793, @0x0000000002a7c050, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, ToDOTABaseNPC, operator=
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, CDOTA_BaseNPC::Interrupt, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_pugna_life_drain", "Hero_Pugna.LifeDrain.Cast", "Hero_Pugna.LifeDrain.Loop", "Hero_Pugna.LifeDrain.Target"
void __fastcall CDOTA_Ability_Pugna_LifeDrain::OnSpellStart(CDOTA_Ability_Pugna_LifeDrain *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // cx
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    if ( CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::Interrupt(Caster);
    }
    else
    {
      m_pEntity = v3->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v6 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hTarget.m_Index) = v6 | this->m_hTarget.m_Index & 0x8000;
        this->m_hTarget.m_Index = (v5 << 15) | this->m_hTarget.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hTarget.m_Index = -1;
      }
      KeyValues::KeyValues(&kv, "modifier_pugna_life_drain");
      if ( CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value == v3->m_iTeamNum.m_Value )
      {
        v10 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v10, v3, this, "modifier_pugna_life_drain", &kv, 0);
      }
      else
      {
        v7 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, v7, this, "modifier_pugna_life_drain", &kv, 0);
      }
      v8 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v8, "Hero_Pugna.LifeDrain.Cast", 0.0, 0, 0);
      v9 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v9, "Hero_Pugna.LifeDrain.Loop", 0.0, 0, 0);
      CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Pugna.LifeDrain.Target", 0.0, 0, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_Pugna_LifeDrain::OnChannelFinish  (line 828, @0x0000000002a84060, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::StopSound, CDOTA_BaseNPC::RemoveModifierByName
// strings: "Hero_Pugna.LifeDrain.Loop", "modifier_pugna_life_drain", "Hero_Pugna.LifeDrain.Target"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Pugna_LifeDrain::OnChannelFinish(
        CDOTA_Ability_Pugna_LifeDrain *const this,
        bool bInterrupted)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hTarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          if ( CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value == m_pInstance->m_iTeamNum.m_Value )
          {
            Caster = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_pugna_life_drain");
          }
          else
          {
            CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_pugna_life_drain");
          }
          CBaseEntity::StopSound(m_pInstance, "Hero_Pugna.LifeDrain.Target");
        }
      }
    }
  }
  v6 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(v6, "Hero_Pugna.LifeDrain.Loop");
}


// CDOTA_Ability_Pugna_LifeDrain::GetCooldown  (line 851, @0x0000000002a9bbf0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "scepter_cooldown"
float __fastcall CDOTA_Ability_Pugna_LifeDrain::GetCooldown(CDOTA_Ability_Pugna_LifeDrain *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "scepter_cooldown", -1, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Pugna_LifeDrain::GetAbilityDamageToTargetOverInterval  (line 858, @0x0000000002aa11d0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetDuration, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "health_drain_scepter", "health_drain"
__int64 __fastcall CDOTA_Ability_Pugna_LifeDrain::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Pugna_LifeDrain *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  const char *v9; // rsi
  float fIntervala; // [rsp+0h] [rbp-1Ch]
  float fIntervalb; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetDuration(this));
    Caster = CDOTABaseAbility::GetCaster(this);
    HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
    v9 = "health_drain_scepter";
    if ( !HasScepter )
      v9 = "health_drain";
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, v9, -1, 0) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Modifier_Pugna_LifeDrain::~CDOTA_Modifier_Pugna_LifeDrain  (line 873, @0x0000000002ac0f60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Pugna_LifeDrain::~CDOTA_Modifier_Pugna_LifeDrain(
        CDOTA_Modifier_Pugna_LifeDrain *const this)
{
  this->_vptr_CDOTA_Buff = &off_4414850;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Pugna_LifeDrain::~CDOTA_Modifier_Pugna_LifeDrain  (line 873, @0x0000000002ac0f80, libserver.so)  // inlines: ~CDOTA_Modifier_Pugna_LifeDrain
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Pugna_LifeDrain::~CDOTA_Modifier_Pugna_LifeDrain(
        CDOTA_Modifier_Pugna_LifeDrain *const this)
{
  this->_vptr_CDOTA_Buff = &off_4414850;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Pugna_LifeDrain::IsDebuff  (line 878, @0x0000000002aba4e0, libserver.so)
bool __fastcall CDOTA_Modifier_Pugna_LifeDrain::IsDebuff(CDOTA_Modifier_Pugna_LifeDrain *const this)
{
  return 1;
}


// CDOTA_Modifier_Pugna_LifeDrain::IsPurgable  (line 879, @0x0000000002aba4f0, libserver.so)
bool __fastcall CDOTA_Modifier_Pugna_LifeDrain::IsPurgable(CDOTA_Modifier_Pugna_LifeDrain *const this)
{
  return 0;
}


// CDOTA_Modifier_Pugna_LifeDrain::GetNumAvoidLocations  (line 890, @0x0000000002aba500, libserver.so)
int __fastcall CDOTA_Modifier_Pugna_LifeDrain::GetNumAvoidLocations(CDOTA_Modifier_Pugna_LifeDrain *const this)
{
  return 1;
}


// CDOTA_Modifier_Pugna_LifeDrain::GetAvoidLocation  (line 891, @0x0000000002ac3440, libserver.so)
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_Pugna_LifeDrain::GetAvoidLocation(
        CDOTA_Modifier_Pugna_LifeDrain *const this,
        int iAvoid)
{
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Caster = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CDOTA_Modifier_Pugna_LifeDrain::AvoidFilter  (line 892, @0x0000000002ac23d0, libserver.so)
// calls: CDOTA_Buff::GetParent
bool __fastcall CDOTA_Modifier_Pugna_LifeDrain::AvoidFilter(
        CDOTA_Modifier_Pugna_LifeDrain *const this,
        CDOTA_BaseNPC *pEntity)
{
  return CDOTA_Buff::GetParent(this) == pEntity;
}


// CDOTA_Modifier_Pugna_LifeDrain::AvoidStrength  (line 893, @0x0000000002acd720, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Modifier_Pugna_LifeDrain::AvoidStrength(
        CDOTA_Modifier_Pugna_LifeDrain *const this,
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
  v6 = (CBaseEntity::GetHealth(m_pInstance) - 500.0) / 1000.0;
  if ( v6 < 0.0 )
    return 0.89999998;
  result = 0.60000002;
  if ( v6 <= 1.0 )
    return (v6 * -0.29999995) + 0.89999998;
  return result;
}


// CDOTA_Modifier_Pugna_LifeDrain::GetAvoidRadius  (line 894, @0x0000000002ac4770, libserver.so)
// calls: CDOTA_Buff::GetAbility
float __fastcall CDOTA_Modifier_Pugna_LifeDrain::GetAvoidRadius(CDOTA_Modifier_Pugna_LifeDrain *const this, int iAvoid)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  return (*(Ability->_vptr_IHandleEntity + 229))(Ability, &vec3_origin, 0) + 100.0;
}


// CDOTA_Modifier_Pugna_LifeDrain::IsAvoidMagical  (line 895, @0x0000000002aba510, libserver.so)
bool __fastcall CDOTA_Modifier_Pugna_LifeDrain::IsAvoidMagical(CDOTA_Modifier_Pugna_LifeDrain *const this)
{
  return 1;
}


// CDOTA_Modifier_Pugna_LifeDrain::OnCreated  (line 910, @0x0000000002a9e520, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, GetTeamNumber
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "health_drain", "health_drain_scepter", "tick_rate", "particles/units/heroes/hero_pugna/pugna_life_drain.vpcf", "attach_neck", "attach_hitloc" (7 total)
void __fastcall CDOTA_Modifier_Pugna_LifeDrain::OnCreated(CDOTA_Modifier_Pugna_LifeDrain *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  unsigned __int8 m_Value; // r12
  CDOTA_BaseNPC *v9; // r12
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  const Vector *v12; // r12
  CDOTA_BaseNPC *v13; // rax
  int v14; // r13d
  const CBaseAnimating *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  const Vector *v18; // r12
  CDOTA_BaseNPC *v19; // rax
  int v20; // r13d
  const CBaseAnimating *v21; // r14
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v27; // rax
  int m_nFXIndex; // r13d
  const CBaseAnimating *v29; // r14
  CDOTA_ParticleManager *v30; // rax
  CDOTA_BaseNPC *v31; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->health_drain, "health_drain");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->health_drain_scepter, "health_drain_scepter");
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "tick_rate", -1, 0);
    this->tick_rate = LevelSpecialValue;
  }
  else
  {
    LevelSpecialValue = 0.0;
    this->tick_rate = 0.0;
  }
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v6);
  m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
  if ( m_Value == CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    ParticleManager = GetParticleManager();
    this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_pugna/pugna_life_give.vpcf",
                         2,
                         Caster,
                         0,
                         0);
    Parent = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
    v27 = CDOTA_Buff::GetParent(this);
    m_nFXIndex = this->m_nFXIndex;
    v29 = v27;
    v30 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v30, m_nFXIndex, 0, v29, 5, "attach_hitloc", *AbsOrigin, 1);
    v31 = CDOTA_Buff::GetCaster(this);
    v18 = CBaseEntity::GetAbsOrigin(v31);
    v19 = CDOTA_Buff::GetCaster(this);
  }
  else
  {
    v9 = CDOTA_Buff::GetParent(this);
    v10 = GetParticleManager();
    this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                         v10,
                         "particles/units/heroes/hero_pugna/pugna_life_drain.vpcf",
                         2,
                         v9,
                         0,
                         0);
    v11 = CDOTA_Buff::GetCaster(this);
    v12 = CBaseEntity::GetAbsOrigin(v11);
    v13 = CDOTA_Buff::GetCaster(this);
    v14 = this->m_nFXIndex;
    v15 = v13;
    v16 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v16, v14, 0, v15, 5, "attach_neck", *v12, 1);
    v17 = CDOTA_Buff::GetParent(this);
    v18 = CBaseEntity::GetAbsOrigin(v17);
    v19 = CDOTA_Buff::GetParent(this);
  }
  v20 = this->m_nFXIndex;
  v21 = v19;
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v22, v20, 1, v21, 5, "attach_hitloc", *v18, 1);
  CDOTA_Buff::AddParticle(this, this->m_nFXIndex, 0, 0, -1, 0, 0);
  this->m_bDoRangeCheck = 0;
}


// CDOTA_Modifier_Pugna_LifeDrain::OnIntervalThink  (line 941, @0x0000000002a7c3c0, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_BaseNPC::HasScepter, ApplyDamage, CDOTA_Buff::Destroy, CDOTA_BaseNPC::InterruptChannel, CDOTA_BaseNPC::IsEntityInRangeForCast, CDOTA_BaseNPC::Kill
void __fastcall CDOTA_Modifier_Pugna_LifeDrain::OnIntervalThink(CDOTA_Modifier_Pugna_LifeDrain *const this)
{
  int m_iTeam; // r12d
  bool v3; // r12
  CDOTA_BaseNPC *v4; // rax
  bool HasScepter; // al
  __m128i tick_rate_low; // xmm1
  float health_drain_scepter; // xmm0_4
  float v8; // r15d
  CDOTABaseAbility *v9; // r13
  CDOTA_BaseNPC *v10; // r14
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTABaseAbility *Ability; // rax
  int v14; // r14d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *Caster; // rax
  __m128i v17; // xmm0
  float v18; // xmm1_4
  CDOTA_BaseNPC *v19; // r13
  CDOTABaseAbility *v20; // r12
  CDOTA_BaseNPC *v21; // rax

  if ( CDOTA_Buff::GetCaster(this) != 0 && CDOTA_Buff::GetAbility(this) != 0 )
  {
    m_iTeam = this->m_iTeam;
    v3 = m_iTeam == CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
    if ( v3 && (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) == 0 )
    {
      CDOTA_Buff::Destroy(this, 0, 0, 0);
      goto LABEL_16;
    }
    if ( this->m_bDoRangeCheck )
    {
      Ability = CDOTA_Buff::GetAbility(this);
      v14 = (*(Ability->_vptr_IHandleEntity + 229))(Ability, &vec3_origin, 0);
      Parent = CDOTA_Buff::GetParent(this);
      Caster = CDOTA_Buff::GetCaster(this);
      *v17.m128i_i32 = v14;
      if ( !CDOTA_BaseNPC::IsEntityInRangeForCast(Caster, Parent, v17, v18) )
      {
        CDOTA_Buff::Destroy(this, 0, 0, 0);
        if ( v3 )
        {
          v12 = CDOTA_Buff::GetParent(this);
          goto LABEL_17;
        }
LABEL_16:
        v12 = CDOTA_Buff::GetCaster(this);
LABEL_17:
        CDOTA_BaseNPC::InterruptChannel(v12);
        return;
      }
    }
    this->m_bDoRangeCheck = 1;
    if ( CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
    {
      v19 = CDOTA_Buff::GetCaster(this);
      v20 = CDOTA_Buff::GetAbility(this);
      v21 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::Kill(v21, v20, v19, 0.0, 0);
    }
    else
    {
      if ( v3 )
        v4 = CDOTA_Buff::GetParent(this);
      else
        v4 = CDOTA_Buff::GetCaster(this);
      HasScepter = CDOTA_BaseNPC::HasScepter(v4);
      tick_rate_low = LODWORD(this->tick_rate);
      if ( HasScepter )
        health_drain_scepter = this->health_drain_scepter;
      else
        health_drain_scepter = this->health_drain;
      *tick_rate_low.m128i_i32 = *tick_rate_low.m128i_i32 * health_drain_scepter;
      v8 = COERCE_FLOAT(_mm_cvtsi128_si32(tick_rate_low));
      v9 = CDOTA_Buff::GetAbility(this);
      v10 = CDOTA_Buff::GetParent(this);
      if ( v3 )
        v11 = CDOTA_Buff::GetParent(this);
      else
        v11 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v11, v10, v9, v8, 2, 0);
    }
  }
}


// CDOTA_Modifier_Pugna_LifeDrain::DeclareFunctions  (line 994, @0x0000000002a78670, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Pugna_LifeDrain::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Pugna_LifeDrain::DeclareFunctions(CDOTA_Modifier_Pugna_LifeDrain *const this)
{
  this->m_Functions[134].__pfn = (&stru_10 + 697);
  this->m_Functions[134].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Pugna_LifeDrain::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Pugna_LifeDrain::OnTakeDamage  (line 1002, @0x0000000002aa1280, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTAAbility, ToDOTABaseNPC, UnitNPC, Vector, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CBaseEntity::GetHealth, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::Heal, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_BaseNPC::GiveMana, __dynamic_cast
// strings: "special_bonus_unique_pugna_1"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Pugna_LifeDrain::OnTakeDamage(
        CDOTA_Modifier_Pugna_LifeDrain *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Parent; // r14
  uint32 v10; // ecx
  CDOTABaseAbility *v11; // r13
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *Caster; // rax
  int Health; // ebx
  CDOTA_BaseNPC *v17; // rax
  unsigned __int8 m_Value; // bl
  CDOTA_BaseNPC *v19; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v21; // rax
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v24; // rax
  float flTotalHeal; // [rsp+Ch] [rbp-44h]
  int v26; // [rsp+10h] [rbp-40h]

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
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          Parent = CDOTA_Buff::GetParent(this);
          if ( Parent == m_pInstance )
          {
            v10 = params->inflictor.m_Index;
            v11 = 0;
            if ( v10 + 2 > 1 )
            {
              v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->inflictor.m_Index) >> 9) & 0x3F];
              if ( v12 != 0 )
              {
                v11 = 0;
                v13 = &v12[params->inflictor.m_Index & 0x1FF];
                if ( v13 != 0 && v10 == v13->m_EHandle.m_Index && v13->m_pInstance != 0 )
                  v11 = __dynamic_cast(v13->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
              }
            }
            Ability = CDOTA_Buff::GetAbility(this);
            if ( Ability == v11 && !Parent->m_bIsIllusion.m_Value )
            {
              flTotalHeal = params->fDamage;
              Caster = CDOTA_Buff::GetCaster(this);
              Health = CBaseEntity::GetHealth(Caster);
              v17 = CDOTA_Buff::GetCaster(this);
              if ( Health == (*(v17->_vptr_IHandleEntity + 156))(v17) && (Parent->m_iUnitType & 1) != 0 )
              {
                v24 = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::GiveMana(v24, flTotalHeal, 0, 0);
                v26 = 1065353216;
              }
              else
              {
                m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
                if ( m_Value == CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
                  v19 = CDOTA_Buff::GetParent(this);
                else
                  v19 = CDOTA_Buff::GetCaster(this);
                AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v19, "special_bonus_unique_pugna_1", 0);
                if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
                  flTotalHeal = ((CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) / 100.0)
                               + 1.0)
                              * flTotalHeal;
                v21 = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::Heal(v21, flTotalHeal, Ability, 0, 1);
                v26 = 0;
              }
              m_nFXIndex = this->m_nFXIndex;
              ParticleManager = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nFXIndex, 11, COERCE_DOUBLE(v26), 0.0);
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Pugna_LifeDrain::GetActivityTranslationModifiers  (line 1052, @0x0000000002a7d150, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Pugna_LifeDrain::GetActivityTranslationModifiers(
        CDOTA_Modifier_Pugna_LifeDrain *const this,
        const CModifierParams *const params)
{
  unsigned __int8 m_Value; // bl
  ModifierVariant_t result; // 0:rax.16

  m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
  result = CDOTA_Buff::GetParent(this);
  if ( m_Value == *(*&result.m_eType + 383LL) )
    result.m_szVal = "heal_ally";
  *&result.m_eType = 2;
  return result;
}


