// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_ursa.cpp:29
class CDOTA_Unit_Hero_Ursa : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Ursa(CDOTA_Unit_Hero_Ursa &);
	CDOTA_Unit_Hero_Ursa(CDOTA_Unit_Hero_Ursa &);
	CDOTA_Unit_Hero_Ursa();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_Ursa();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_ursa.cpp:36
class C_CDOTA_Unit_Hero_Ursa_MapInstall {
	C_CDOTA_Unit_Hero_Ursa_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ursa.cpp:49
class CDOTA_Ability_Ursa_Earthshock : public CDOTABaseAbility {
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
	CDOTA_Ability_Ursa_Earthshock(CDOTA_Ability_Ursa_Earthshock &);
	CDOTA_Ability_Ursa_Earthshock(CDOTA_Ability_Ursa_Earthshock &);
	CDOTA_Ability_Ursa_Earthshock();
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
	virtual const char * GetStolenActivityModifier();
	virtual float GetAOERadius();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Ursa_Earthshock();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[310] GetStolenActivityModifier
	// vtable[333] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_ursa.cpp:67
class C_CDOTA_Ability_Ursa_Earthshock_MapInstall {
	C_CDOTA_Ability_Ursa_Earthshock_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ursa.cpp:155
class CDOTA_Modifier_Ursa_Earthshock : public CDOTA_Buff {
public:

	int movement_slow;  // +0xba8
	CDOTA_Modifier_Ursa_Earthshock();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual const char * GetEffectName();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t OnHeroKilled(const CModifierParams &);
	virtual ~CDOTA_Modifier_Ursa_Earthshock();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_ursa.cpp:219
class CDOTA_Ability_Ursa_Overpower : public CDOTABaseAbility {
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
	CDOTA_Ability_Ursa_Overpower(CDOTA_Ability_Ursa_Overpower &);
	CDOTA_Ability_Ursa_Overpower(CDOTA_Ability_Ursa_Overpower &);
	CDOTA_Ability_Ursa_Overpower();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Ursa_Overpower();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_ursa.cpp:270
class CDOTA_Modifier_Ursa_Overpower : public CDOTA_Buff {
public:

private:

	int attack_speed_bonus_pct;  // +0xba8
	CDOTA_Modifier_Ursa_Overpower();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Ursa_Overpower();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_ursa.cpp:390
class CDOTA_Ability_Ursa_Fury_Swipes : public CDOTABaseAbility {
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
	CDOTA_Ability_Ursa_Fury_Swipes(CDOTA_Ability_Ursa_Fury_Swipes &);
	CDOTA_Ability_Ursa_Fury_Swipes(CDOTA_Ability_Ursa_Fury_Swipes &);
	CDOTA_Ability_Ursa_Fury_Swipes();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Ursa_Fury_Swipes();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_ursa.cpp:420
class CDOTA_Modifier_Ursa_Fury_Swipes : public CDOTA_Buff {
public:

private:

	int damage_per_stack;  // +0xba8
	float bonus_reset_time;  // +0xbac
	float bonus_reset_time_roshan;  // +0xbb0
	CDOTA_Modifier_Ursa_Fury_Swipes();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	ModifierVariant_t GetModifierProcAttack_BonusDamage_Physical(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual ~CDOTA_Modifier_Ursa_Fury_Swipes();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_ursa.cpp:537
class CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase : public CDOTA_Buff {
public:

private:

	int damage_per_stack;  // +0xba8
	CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual bool IsPurgable();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual ~CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_ursa.cpp:597
class CDOTA_Ability_Ursa_Enrage : public CDOTABaseAbility {
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
	CDOTA_Ability_Ursa_Enrage(CDOTA_Ability_Ursa_Enrage &);
	CDOTA_Ability_Ursa_Enrage(CDOTA_Ability_Ursa_Enrage &);
	CDOTA_Ability_Ursa_Enrage();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual int GetBehavior();
	virtual void OnSpellStart();
	virtual float GetCooldown(int);
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Ursa_Enrage();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[251] GetBehavior
	// vtable[266] OnSpellStart
	// vtable[242] GetCooldown
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_ursa.cpp:611
class C_CDOTA_Ability_Ursa_Enrage_MapInstall {
	C_CDOTA_Ability_Ursa_Enrage_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ursa.cpp:680
class CDOTA_Modifier_Ursa_Enrage : public CDOTA_Buff {
public:

private:

	int damage_reduction;  // +0xba8
	CDOTA_Modifier_Ursa_Enrage();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetHeroEffectName();
	virtual int HeroEffectPriority();
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	ModifierVariant_t ModelScale(const CModifierParams &);
	ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	ModifierVariant_t OnHeroKilled(const CModifierParams &);
	virtual ~CDOTA_Modifier_Ursa_Enrage();

	// vtable[57] OnCreated
	// vtable[72] GetHeroEffectName
	// vtable[73] HeroEffectPriority
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Ursa::~CDOTA_Unit_Hero_Ursa  (line 29, @0x0000000002ac6df0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Ursa::~CDOTA_Unit_Hero_Ursa(CDOTA_Unit_Hero_Ursa *const this)
{
  this->_vptr_IHandleEntity = &off_4437A70;
  this->_vptr_INextBotEventResponder = &off_4438A50;
  this->_vptr_CObstructionObject = &off_4438D80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Ursa::~CDOTA_Unit_Hero_Ursa  (line 29, @0x0000000002ac6e30, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Ursa
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Ursa::~CDOTA_Unit_Hero_Ursa(CDOTA_Unit_Hero_Ursa *const this)
{
  this->_vptr_IHandleEntity = &off_4437A70;
  this->_vptr_INextBotEventResponder = &off_4438A50;
  this->_vptr_CObstructionObject = &off_4438D80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Ursa::Schema_DynamicBinding  (line 31, @0x0000000002abbc30, libserver.so)
// globals: CDOTA_Unit_Hero_Ursa::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Ursa::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Ursa *const this)
{
  return CDOTA_Unit_Hero_Ursa::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 31, @0x0000000002abbc60, libserver.so)
// globals: CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::DestructInstance  (line 31, @0x0000000002abbc70, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Ursa>
void __fastcall CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::FreeInstance  (line 31, @0x0000000002abbc90, libserver.so)
void __fastcall CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::CanAllocate  (line 31, @0x0000000002abbcb0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 31, @0x0000000002abbcc0, libserver.so)
// globals: CDOTA_Unit_Hero_Ursa::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Ursa::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::AllocateInstance  (line 31, @0x0000000002abfc80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::ConstructInstance  (line 31, @0x0000000002ac4c20, libserver.so)  // inlines: CDOTA_Unit_Hero_Ursa, Construct<CDOTA_Unit_Hero_Ursa>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4437A70;
    *(p + 236) = &off_4438A50;
    *(p + 257) = &off_4438D80;
  }
  return p;
}


// CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002acd1f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002acd560, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Ursa::GetEntityClassInternal  (line 31, @0x0000000002ae5210, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_hero_ursa", "CDOTA_Unit_Hero_Ursa"
// globals: `guard variable for'CDOTA_Unit_Hero_Ursa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UrsaClass, CDOTA_Unit_Hero_Ursa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UrsaClass, __dso_handle, CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Ursa::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_UrsaClassInfo, CDOTA_Unit_Hero_Ursa::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_UrsaClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Ursa::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Ursa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UrsaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Ursa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UrsaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Ursa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UrsaClass);
    CDOTA_Unit_Hero_Ursa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UrsaClass._vptr_CEntityClass = off_44379F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Ursa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UrsaClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Ursa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UrsaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_UrsaClass != 0 )
    return &CDOTA_Unit_Hero_Ursa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UrsaClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Ursa::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_UrsaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Ursa::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_UrsaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Ursa::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_UrsaClassInfo,
      "CDOTA_Unit_Hero_Ursa",
      "npc_dota_hero_ursa",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Ursa::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_UrsaClassInfo);
  }
  CDOTA_Unit_Hero_Ursa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UrsaClass.m_pClassInfo = &CDOTA_Unit_Hero_Ursa::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_UrsaClassInfo;
  CDOTA_Unit_Hero_Ursa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UrsaClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Ursa::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_UrsaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_UrsaClass = &CDOTA_Unit_Hero_Ursa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UrsaClass;
  CDOTA_Unit_Hero_Ursa::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_UrsaClassInfo.m_pClass = &CDOTA_Unit_Hero_Ursa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UrsaClass;
  CDOTA_Unit_Hero_Ursa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UrsaClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_UrsaClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Ursa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_UrsaClass;
}


// CDOTA_Unit_Hero_Ursa::YouForgotToImplementOrDeclareServerClass  (line 36, @0x0000000002a79170, libserver.so)
int __fastcall CDOTA_Unit_Hero_Ursa::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Ursa *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Ursa::GetServerClass  (line 36, @0x0000000002a89b30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Ursa::GetServerClass(CDOTA_Unit_Hero_Ursa *const this)
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


// CDOTA_Ability_Ursa_Earthshock::~CDOTA_Ability_Ursa_Earthshock  (line 49, @0x0000000002ac63d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Ursa_Earthshock::~CDOTA_Ability_Ursa_Earthshock(
        CDOTA_Ability_Ursa_Earthshock *const this)
{
  this->_vptr_IHandleEntity = &off_4438E50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Ursa_Earthshock::~CDOTA_Ability_Ursa_Earthshock  (line 49, @0x0000000002ac63f0, libserver.so)  // inlines: ~CDOTA_Ability_Ursa_Earthshock
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Ursa_Earthshock::~CDOTA_Ability_Ursa_Earthshock(
        CDOTA_Ability_Ursa_Earthshock *const this)
{
  this->_vptr_IHandleEntity = &off_4438E50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Ursa_Earthshock::Schema_DynamicBinding  (line 51, @0x0000000002abbcd0, libserver.so)
// globals: CDOTA_Ability_Ursa_Earthshock::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Ursa_Earthshock::Schema_DynamicBinding(
        const CDOTA_Ability_Ursa_Earthshock *const this)
{
  return CDOTA_Ability_Ursa_Earthshock::s_pSchemaBinding;
}


// CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 51, @0x0000000002abbce0, libserver.so)
// globals: CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::DestructInstance  (line 51, @0x0000000002abbcf0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Ursa_Earthshock>
void __fastcall CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::FreeInstance  (line 51, @0x0000000002abbd10, libserver.so)
void __fastcall CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::CanAllocate  (line 51, @0x0000000002abbd30, libserver.so)
bool __fastcall CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 51, @0x0000000002abbd40, libserver.so)
// globals: CDOTA_Ability_Ursa_Earthshock::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Ursa_Earthshock::s_pSchemaBinding;
}


// CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::AllocateInstance  (line 51, @0x0000000002abfcc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::ConstructInstance  (line 51, @0x0000000002ac3350, libserver.so)  // inlines: CDOTA_Ability_Ursa_Earthshock, Construct<CDOTA_Ability_Ursa_Earthshock>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4438E50;
  }
  return p;
}


// CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 51, @0x0000000002acce20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 51, @0x0000000002acce40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Ursa_Earthshock::GetEntityClassInternal  (line 51, @0x0000000002ae5360, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Ursa_Earthshock"
// globals: `guard variable for'CDOTA_Ability_Ursa_Earthshock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClass, CDOTA_Ability_Ursa_Earthshock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClass, __dso_handle, CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Ursa_Earthshock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClassInfo, CDOTA_Ability_Ursa_Earthshock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClassInfo
CEntityClass *__cdecl CDOTA_Ability_Ursa_Earthshock::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Ursa_Earthshock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ursa_Earthshock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Ursa_Earthshock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClass);
    CDOTA_Ability_Ursa_Earthshock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClass._vptr_CEntityClass = off_4438DD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ursa_Earthshock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClass);
    __cxa_atexit(
      CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Ursa_Earthshock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Ursa_EarthshockClass != 0 )
    return &CDOTA_Ability_Ursa_Earthshock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClass;
  if ( `guard variable for'CDOTA_Ability_Ursa_Earthshock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ursa_Earthshock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Ursa_Earthshock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClassInfo,
      "CDOTA_Ability_Ursa_Earthshock",
      "ursa_earthshock",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ursa_Earthshock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClassInfo);
  }
  CDOTA_Ability_Ursa_Earthshock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClass.m_pClassInfo = &CDOTA_Ability_Ursa_Earthshock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClassInfo;
  CDOTA_Ability_Ursa_Earthshock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClass.m_pBaseClassInfo = CDOTA_Ability_Ursa_Earthshock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Ursa_EarthshockClass = &CDOTA_Ability_Ursa_Earthshock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClass;
  CDOTA_Ability_Ursa_Earthshock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClassInfo.m_pClass = &CDOTA_Ability_Ursa_Earthshock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClass;
  CDOTA_Ability_Ursa_Earthshock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Ursa_EarthshockClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Ursa_Earthshock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EarthshockClass;
}


// CDOTA_Ability_Ursa_Earthshock::GetStolenActivityModifier  (line 58, @0x0000000002abbd50, libserver.so)
const char *__fastcall CDOTA_Ability_Ursa_Earthshock::GetStolenActivityModifier(
        CDOTA_Ability_Ursa_Earthshock *const this)
{
  return "earthshock";
}


// CDOTA_Ability_Ursa_Earthshock::GetAOERadius  (line 60, @0x0000000002ae6840, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "shock_radius"
float __fastcall CDOTA_Ability_Ursa_Earthshock::GetAOERadius(CDOTA_Ability_Ursa_Earthshock *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "shock_radius", -1, 0);
}


// CDOTA_Ability_Ursa_Earthshock::YouForgotToImplementOrDeclareServerClass  (line 67, @0x0000000002a79180, libserver.so)
int __fastcall CDOTA_Ability_Ursa_Earthshock::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Ursa_Earthshock *const this)
{
  return 0;
}


// CDOTA_Ability_Ursa_Earthshock::GetServerClass  (line 67, @0x0000000002a89ef0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Ursa_Earthshock::GetServerClass(CDOTA_Ability_Ursa_Earthshock *const this)
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


// CDOTA_Ability_Ursa_Earthshock::OnAbilityPhaseStart  (line 76, @0x0000000002a79190, libserver.so)
bool __fastcall CDOTA_Ability_Ursa_Earthshock::OnAbilityPhaseStart(CDOTA_Ability_Ursa_Earthshock *const this)
{
  return 1;
}


// CDOTA_Ability_Ursa_Earthshock::OnSpellStart  (line 86, @0x0000000002aa8190, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetParent, GetTeamNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, KeyValues::~KeyValues, CDOTA_BaseNPC::UnitEmitSound, CGameSceneNode::GetOwnerEntity (20 total)
// strings: "shock_radius", "modifier_ursa_earthshock", "Hero_Ursa.Earthshock", "particles/units/heroes/hero_ursa/ursa_earthshock.vpcf"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Ursa_Earthshock::OnSpellStart(CDOTA_Ability_Ursa_Earthshock *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v5; // rax
  __int64 v6; // r13
  int v7; // r14d
  CHandle<CBaseEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *m_pInstance; // r12
  float v14; // xmm1_4
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  __m128d v22; // xmm1
  __m128d v23; // xmm0
  float v24; // xmm5_4
  float v25; // xmm6_4
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC_Hero *v29; // rdi
  int shock_radius; // [rsp+18h] [rbp-98h]
  int nEnemyHeroes; // [rsp+28h] [rbp-88h]
  float flDamage; // [rsp+2Ch] [rbp-84h]
  double v33; // [rsp+30h] [rbp-80h]
  float v34; // [rsp+38h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  entities.m_Size = 0;
  shock_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "shock_radius", -1, 0);
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
  v5 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v5->m_iTeamNum.m_Value, AbsOrigin, Caster, shock_radius, &entities, 2, 19, 0, 0, 0);
  if ( entities.m_Size <= 0 )
  {
    nEnemyHeroes = 0;
  }
  else
  {
    nEnemyHeroes = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v8 = &entities.m_Memory.m_pMemory[v6];
        m_Index = entities.m_Memory.m_pMemory[v6].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v10 = v8->m_Index;
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[v10 & 0x1FF];
            if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
            {
              m_pInstance = v12->m_pInstance;
              if ( v12->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                break;
            }
          }
        }
        ++v7;
        ++v6;
        if ( entities.m_Size <= v7 )
          goto LABEL_13;
      }
      KeyValues::KeyValues(&kv, "modifier_ursa_earthshock");
      CDOTABaseAbility::GetDuration(this);
      KeyValues::SetFloat(&kv, "duration", v14);
      v15 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v15, this, "modifier_ursa_earthshock", &kv, 0);
      flDamage = (*(this->_vptr_IHandleEntity + 247))(this);
      v16 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v16, m_pInstance, this, flDamage, 2, 0);
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        nEnemyHeroes += LOBYTE(m_pInstance[71].m_pEntity) == 0;
      ++v7;
      ++v6;
      KeyValues::~KeyValues(&kv);
    }
    while ( entities.m_Size > v7 );
  }
LABEL_13:
  v17 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v17, "Hero_Ursa.Earthshock", 0.0, 0, 0);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  else
    OwnerEntity = 0;
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_ursa/ursa_earthshock.vpcf",
               1,
               OwnerEntity,
               0,
               0);
  v22 = 0x3FE0000000000000uLL;
  v22.m128d_f64[0] = 0.5 * shock_radius;
  *&v33 = shock_radius;
  v23.m128d_f64[0] = shock_radius * 0.25;
  v24 = _mm_movedup_pd(v22).m128d_f64[0];
  *(&v33 + 1) = v24;
  v25 = _mm_movedup_pd(v23).m128d_f64[0];
  v34 = v25;
  v26 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v26, Particle, 1, v33, v34);
  v27 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v27, Particle);
  if ( nEnemyHeroes > 1 )
  {
    v28 = CDOTABaseAbility::GetCaster(this);
    if ( v28 != 0 && (v28->m_iUnitType & 1) != 0 )
      v29 = v28;
    else
      v29 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v29,
      0,
      kill_eater_event_t::kKillEaterEventType_Ursa_MultiShocks,
      1,
      INVALID_ITEM_DEF_INDEX);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_Ursa_Earthshock::GetAbilityDamageToTargetOverInterval  (line 136, @0x0000000002a7caa0, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Ursa_Earthshock::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Ursa_Earthshock *const this,
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


// CDOTA_Ability_Ursa_Earthshock::GetSlowDuration  (line 146, @0x0000000002a7b2f0, libserver.so)
// calls: CDOTABaseAbility::GetDuration
float __fastcall CDOTA_Ability_Ursa_Earthshock::GetSlowDuration(CDOTA_Ability_Ursa_Earthshock *const this)
{
  return CDOTABaseAbility::GetDuration(this);
}


// CDOTA_Modifier_Ursa_Earthshock::~CDOTA_Modifier_Ursa_Earthshock  (line 155, @0x0000000002ac0650, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Ursa_Earthshock::~CDOTA_Modifier_Ursa_Earthshock(
        CDOTA_Modifier_Ursa_Earthshock *const this)
{
  this->_vptr_CDOTA_Buff = &off_4439910;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Ursa_Earthshock::~CDOTA_Modifier_Ursa_Earthshock  (line 155, @0x0000000002ac0670, libserver.so)  // inlines: ~CDOTA_Modifier_Ursa_Earthshock
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Ursa_Earthshock::~CDOTA_Modifier_Ursa_Earthshock(
        CDOTA_Modifier_Ursa_Earthshock *const this)
{
  this->_vptr_CDOTA_Buff = &off_4439910;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Ursa_Earthshock::GetEffectName  (line 162, @0x0000000002abbd60, libserver.so)
// strings: "particles/units/heroes/hero_ursa/ursa_earthshock_modifier.vpcf"
const char *__fastcall CDOTA_Modifier_Ursa_Earthshock::GetEffectName(CDOTA_Modifier_Ursa_Earthshock *const this)
{
  return "particles/units/heroes/hero_ursa/ursa_earthshock_modifier.vpcf";
}


// CDOTA_Modifier_Ursa_Earthshock::OnCreated  (line 176, @0x0000000002aa9fe0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Ursa_Earthshock::OnCreated(CDOTA_Modifier_Ursa_Earthshock *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movement_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_slow", -1, 0);
  else
    this->movement_slow = 0;
}


// CDOTA_Modifier_Ursa_Earthshock::DeclareFunctions  (line 185, @0x0000000002a791a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Ursa_Earthshock::OnHeroKilled(CModifierParams const&)
void __fastcall CDOTA_Modifier_Ursa_Earthshock::DeclareFunctions(CDOTA_Modifier_Ursa_Earthshock *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[147].__pfn = CDOTA_Modifier_Ursa_Earthshock::OnHeroKilled;
  this->m_Functions[147].__delta = 0;
}


// CDOTA_Modifier_Ursa_Earthshock::GetModifierMoveSpeedBonus_Percentage  (line 197, @0x0000000002a791e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Ursa_Earthshock::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Ursa_Earthshock *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movement_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Ursa_Earthshock::OnHeroKilled  (line 203, @0x0000000002a8a870, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Target, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Ursa_Earthshock::OnHeroKilled(
        CDOTA_Modifier_Ursa_Earthshock *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *v9; // r13
  uint32 v10; // ecx
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  CEntityInstance *v13; // rsi
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *v17; // rdi

  m_pInstance = 0;
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->htarget.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
  {
    v9 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
    if ( CDOTA_Buff::GetCaster(this) == v9 )
    {
      v10 = params->htarget.m_Index;
      if ( v10 + 2 <= 1
        || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
        || (v12 = &v11[params->htarget.m_Index & 0x1FF]) == 0
        || v10 != v12->m_EHandle.m_Index
        || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
        || BYTE3(v13[7]._vptr_IHandleEntity) == 0
        || (v13[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      {
        v13 = 0;
      }
      v14 = params->hattacker.m_Index;
      if ( v14 + 2 <= 1
        || (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
        || (v16 = &v15[params->hattacker.m_Index & 0x1FF]) == 0
        || v14 != v16->m_EHandle.m_Index
        || (v17 = v16->m_pInstance, v16->m_pInstance == 0)
        || BYTE3(v17[7]._vptr_IHandleEntity) == 0
        || (v17[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      {
        v17 = 0;
      }
      EconEntity_OnOwnerKillEaterEvent(
        v17,
        v13,
        kill_eater_event_t::kKillEaterEventType_Ursa_EarthshockKills,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
  }
  return 1uLL;
}


// CDOTA_Ability_Ursa_Overpower::~CDOTA_Ability_Ursa_Overpower  (line 219, @0x0000000002ac6420, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Ursa_Overpower::~CDOTA_Ability_Ursa_Overpower(CDOTA_Ability_Ursa_Overpower *const this)
{
  this->_vptr_IHandleEntity = &off_4439C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Ursa_Overpower::~CDOTA_Ability_Ursa_Overpower  (line 219, @0x0000000002ac6440, libserver.so)  // inlines: ~CDOTA_Ability_Ursa_Overpower
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Ursa_Overpower::~CDOTA_Ability_Ursa_Overpower(CDOTA_Ability_Ursa_Overpower *const this)
{
  this->_vptr_IHandleEntity = &off_4439C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Ursa_Overpower::Schema_DynamicBinding  (line 221, @0x0000000002abbd70, libserver.so)
// globals: CDOTA_Ability_Ursa_Overpower::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Ursa_Overpower::Schema_DynamicBinding(
        const CDOTA_Ability_Ursa_Overpower *const this)
{
  return CDOTA_Ability_Ursa_Overpower::s_pSchemaBinding;
}


// CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 221, @0x0000000002abbd80, libserver.so)
// globals: CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::DestructInstance  (line 221, @0x0000000002abbd90, libserver.so)  // inlines: Destruct<CDOTA_Ability_Ursa_Overpower>
void __fastcall CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::FreeInstance  (line 221, @0x0000000002abbdb0, libserver.so)
void __fastcall CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::CanAllocate  (line 221, @0x0000000002abbdd0, libserver.so)
bool __fastcall CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 221, @0x0000000002abbde0, libserver.so)
// globals: CDOTA_Ability_Ursa_Overpower::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Ursa_Overpower::s_pSchemaBinding;
}


// CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::AllocateInstance  (line 221, @0x0000000002abfd00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::ConstructInstance  (line 221, @0x0000000002ac3380, libserver.so)  // inlines: CDOTA_Ability_Ursa_Overpower, Construct<CDOTA_Ability_Ursa_Overpower>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4439C70;
  }
  return p;
}


// CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 221, @0x0000000002acce70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 221, @0x0000000002acce90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Ursa_Overpower::GetEntityClassInternal  (line 221, @0x0000000002ae54b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Ursa_Overpower"
// globals: `guard variable for'CDOTA_Ability_Ursa_Overpower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClass, CDOTA_Ability_Ursa_Overpower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClass, __dso_handle, CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Ursa_Overpower::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClassInfo, CDOTA_Ability_Ursa_Overpower::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClassInfo
CEntityClass *__cdecl CDOTA_Ability_Ursa_Overpower::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Ursa_Overpower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ursa_Overpower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Ursa_Overpower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClass);
    CDOTA_Ability_Ursa_Overpower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClass._vptr_CEntityClass = off_4439BF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ursa_Overpower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClass);
    __cxa_atexit(
      CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Ursa_Overpower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Ursa_OverpowerClass != 0 )
    return &CDOTA_Ability_Ursa_Overpower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClass;
  if ( `guard variable for'CDOTA_Ability_Ursa_Overpower::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ursa_Overpower::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Ursa_Overpower::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClassInfo,
      "CDOTA_Ability_Ursa_Overpower",
      "ursa_overpower",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ursa_Overpower::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClassInfo);
  }
  CDOTA_Ability_Ursa_Overpower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClass.m_pClassInfo = &CDOTA_Ability_Ursa_Overpower::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClassInfo;
  CDOTA_Ability_Ursa_Overpower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClass.m_pBaseClassInfo = CDOTA_Ability_Ursa_Overpower::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Ursa_OverpowerClass = &CDOTA_Ability_Ursa_Overpower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClass;
  CDOTA_Ability_Ursa_Overpower::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClassInfo.m_pClass = &CDOTA_Ability_Ursa_Overpower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClass;
  CDOTA_Ability_Ursa_Overpower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Ursa_OverpowerClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Ursa_Overpower::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_OverpowerClass;
}


// CDOTA_Ability_Ursa_Overpower::GetStolenActivityModifier  (line 225, @0x0000000002abbdf0, libserver.so)
const char *__fastcall CDOTA_Ability_Ursa_Overpower::GetStolenActivityModifier(
        CDOTA_Ability_Ursa_Overpower *const this)
{
  return "overpower";
}


// CDOTA_Ability_Ursa_Overpower::OnSpellStart  (line 234, @0x0000000002a7b300, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_ursa_overpower", "Hero_Ursa.Overpower"
void __fastcall CDOTA_Ability_Ursa_Overpower::OnSpellStart(CDOTA_Ability_Ursa_Overpower *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_ursa_overpower");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_ursa_overpower", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v5, 1518, 0.1, 0.1, 9, 0, 1.0);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v6, "Hero_Ursa.Overpower", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Ursa_Overpower::GetAbilityDamageToTargetOverInterval  (line 249, @0x0000000002aa2820, libserver.so)  // inlines: Min<float>, RemapVal
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "attack_speed_bonus_pct", "max_attacks"
__int64 __fastcall CDOTA_Ability_Ursa_Overpower::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Ursa_Overpower *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  float v9; // xmm1_4
  float v10; // xmm1_4
  CDOTA_BaseNPC *v11; // rax
  __m128 v12; // xmm1
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
    v9 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "attack_speed_bonus_pct", -1, 0) + AttackSpeed;
    if ( AttackSpeed == 0.0 )
    {
      v12.m128_f32[0] = v9 - AttackSpeed;
      LODWORD(v10) = _mm_cmple_ss(0LL, v12).m128_u32[0] & LODWORD(fIntervala);
    }
    else
    {
      v10 = ((v9 * fIntervala) / AttackSpeed) + 0.0;
    }
    fIntervalb = (v10 - fIntervala)
               * fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_attacks", -1, 0) / v10);
    v11 = CDOTABaseAbility::GetCaster(this);
    fIntervalc = fIntervalb * CDOTA_BaseNPC::GetAverageTrueAttackDamage(v11, pTarget);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * fIntervalc);
  }
  return result;
}


// CDOTA_Modifier_Ursa_Overpower::~CDOTA_Modifier_Ursa_Overpower  (line 270, @0x0000000002ac0600, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Ursa_Overpower::~CDOTA_Modifier_Ursa_Overpower(
        CDOTA_Modifier_Ursa_Overpower *const this)
{
  this->_vptr_CDOTA_Buff = &off_443A730;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Ursa_Overpower::~CDOTA_Modifier_Ursa_Overpower  (line 270, @0x0000000002ac0620, libserver.so)  // inlines: ~CDOTA_Modifier_Ursa_Overpower
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Ursa_Overpower::~CDOTA_Modifier_Ursa_Overpower(
        CDOTA_Modifier_Ursa_Overpower *const this)
{
  this->_vptr_CDOTA_Buff = &off_443A730;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Ursa_Overpower::GetStatusEffectName  (line 284, @0x0000000002abbe00, libserver.so)
// strings: "particles/status_fx/status_effect_overpower.vpcf"
const char *__fastcall CDOTA_Modifier_Ursa_Overpower::GetStatusEffectName(CDOTA_Modifier_Ursa_Overpower *const this)
{
  return "particles/status_fx/status_effect_overpower.vpcf";
}


// CDOTA_Modifier_Ursa_Overpower::StatusEffectPriority  (line 285, @0x0000000002abbe10, libserver.so)
int __fastcall CDOTA_Modifier_Ursa_Overpower::StatusEffectPriority(CDOTA_Modifier_Ursa_Overpower *const this)
{
  return 1000;
}


// CDOTA_Modifier_Ursa_Overpower::OnCreated  (line 296, @0x0000000002aad120, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "attack_speed_bonus_pct", "max_attacks", "particles/units/heroes/hero_ursa/ursa_overpower_buff.vpcf", "attach_head", "attach_hitloc"
void __fastcall CDOTA_Modifier_Ursa_Overpower::OnCreated(CDOTA_Modifier_Ursa_Overpower *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  __int64 LevelSpecialValue; // rsi
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v8; // r14
  CDOTA_ParticleManager *v9; // rax
  __int64 v10; // r13
  CDOTA_BaseNPC *v11; // r14
  CDOTA_ParticleManager *v12; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v14; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->attack_speed_bonus_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                     Ability,
                                     "attack_speed_bonus_pct",
                                     -1,
                                     0);
  else
    this->attack_speed_bonus_pct = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0;
  if ( v4 != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "max_attacks", -1, 0);
  (*(this->_vptr_CDOTA_Buff + 28))(this, LevelSpecialValue);
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_ursa/ursa_overpower_buff.vpcf",
                      2,
                      Parent,
                      0,
                      0);
  v8 = CDOTA_Buff::GetParent(this);
  v9 = GetParticleManager();
  v10 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v9, Parent, 0, v8, 5, "attach_head", vec3_invalid, 1);
  v11 = CDOTA_Buff::GetParent(this);
  v12 = GetParticleManager();
  *&v14.x = v10;
  v14.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v12, Parent, 3, v11, 5, "attach_hitloc", v14, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Ursa_Overpower::OnRefresh  (line 314, @0x0000000002aaacc0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "attack_speed_bonus_pct", "max_attacks"
void __fastcall CDOTA_Modifier_Ursa_Overpower::OnRefresh(CDOTA_Modifier_Ursa_Overpower *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  __int64 LevelSpecialValue; // rsi

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->attack_speed_bonus_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                     Ability,
                                     "attack_speed_bonus_pct",
                                     -1,
                                     0);
  else
    this->attack_speed_bonus_pct = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0;
  if ( v4 != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "max_attacks", -1, 0);
  (*(this->_vptr_CDOTA_Buff + 28))(this, LevelSpecialValue);
}


// CDOTA_Modifier_Ursa_Overpower::DeclareFunctions  (line 327, @0x0000000002a79200, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Ursa_Overpower::OnAttacked(CModifierParams const&), CDOTA_Modifier_Ursa_Overpower::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Ursa_Overpower::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Ursa_Overpower::DeclareFunctions(CDOTA_Modifier_Ursa_Overpower *const this)
{
  this->m_Functions[137].__pfn = CDOTA_Modifier_Ursa_Overpower::OnAttacked;
  this->m_Functions[137].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Ursa_Overpower::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Ursa_Overpower::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Ursa_Overpower::GetModifierAttackSpeedBonus_Constant  (line 337, @0x0000000002a79260, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Ursa_Overpower::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Ursa_Overpower *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->attack_speed_bonus_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Ursa_Overpower::OnAttacked  (line 344, @0x0000000002a87010, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetCaster, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::Destroy
// strings: "particles/units/heroes/hero_ursa/ursa_fury_swipes.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Ursa_Overpower::OnAttacked(
        CDOTA_Modifier_Ursa_Overpower *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // rax
  uint32 v13; // edx
  CEntityIdentity *v14; // rcx
  CEntityIdentity *v15; // rcx
  const CBaseAnimating *v16; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_ParticleManager *v20; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax

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
          v9 = params->hattacker.m_Index;
          if ( v9 + 2 <= 1
            || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
            || (v11 = &v10[params->hattacker.m_Index & 0x1FF]) == 0
            || v9 != v11->m_EHandle.m_Index
            || (v12 = v11->m_pInstance) == 0
            || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
          {
            v12 = 0;
          }
          v13 = params->htarget.m_Index;
          if ( v13 + 2 <= 1
            || (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
            || (v15 = &v14[params->htarget.m_Index & 0x1FF]) == 0
            || v13 != v15->m_EHandle.m_Index
            || (v16 = v15->m_pInstance, v15->m_pInstance == 0)
            || !v16->m_bIsDOTANPC )
          {
            v16 = 0;
          }
          if ( v12 != 0 && LOBYTE(v12[71].m_pEntity) == 0 && v16 != 0 )
          {
            ParticleManager = GetParticleManager();
            Particle = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_ursa/ursa_fury_swipes.vpcf",
                         2,
                         0,
                         0,
                         0);
            Caster = CDOTA_Buff::GetCaster(this);
            v20 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v20, Particle, 0, Caster, 1, 0, vec3_invalid, 1);
            AbsOrigin = CBaseEntity::GetAbsOrigin(v16);
            v22 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v22, Particle, 1, v16, 5, "attach_hitloc", *AbsOrigin, 1);
            v23 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v23, Particle);
          }
          (*(this->_vptr_CDOTA_Buff + 26))(this);
          if ( (*(this->_vptr_CDOTA_Buff + 27))(this) == 0 )
            CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Ursa_Overpower::GetActivityTranslationModifiers  (line 370, @0x0000000002a7ccb0, libserver.so)
// calls: V_snprintf, __stack_chk_fail
// strings: "overpower%d"
ModifierVariant_t __fastcall CDOTA_Modifier_Ursa_Overpower::GetActivityTranslationModifiers(
        CDOTA_Modifier_Ursa_Overpower *const this,
        const CModifierParams *const params)
{
  int v3; // eax
  char szAnimation[16]; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-18h]
  ModifierVariant_t result; // 0:rax.16

  v5 = __readfsqword(0x28u);
  result = 2uLL;
  if ( params->nActivity == 1503 )
  {
    v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params, 0);
    V_snprintf(szAnimation, 16, "overpower%d", 7 - v3);
    *&result.m_eType = 2;
    result.m_szVal = szAnimation;
  }
  return result;
}


// CDOTA_Ability_Ursa_Fury_Swipes::~CDOTA_Ability_Ursa_Fury_Swipes  (line 390, @0x0000000002ac6470, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Ursa_Fury_Swipes::~CDOTA_Ability_Ursa_Fury_Swipes(
        CDOTA_Ability_Ursa_Fury_Swipes *const this)
{
  this->_vptr_IHandleEntity = &off_443AA90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Ursa_Fury_Swipes::~CDOTA_Ability_Ursa_Fury_Swipes  (line 390, @0x0000000002ac6490, libserver.so)  // inlines: ~CDOTA_Ability_Ursa_Fury_Swipes
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Ursa_Fury_Swipes::~CDOTA_Ability_Ursa_Fury_Swipes(
        CDOTA_Ability_Ursa_Fury_Swipes *const this)
{
  this->_vptr_IHandleEntity = &off_443AA90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Ursa_Fury_Swipes::Schema_DynamicBinding  (line 392, @0x0000000002abbe20, libserver.so)
// globals: CDOTA_Ability_Ursa_Fury_Swipes::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Ursa_Fury_Swipes::Schema_DynamicBinding(
        const CDOTA_Ability_Ursa_Fury_Swipes *const this)
{
  return CDOTA_Ability_Ursa_Fury_Swipes::s_pSchemaBinding;
}


// CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 392, @0x0000000002abbe30, libserver.so)
// globals: CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::DestructInstance  (line 392, @0x0000000002abbe40, libserver.so)  // inlines: Destruct<CDOTA_Ability_Ursa_Fury_Swipes>
void __fastcall CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::FreeInstance  (line 392, @0x0000000002abbe60, libserver.so)
void __fastcall CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::CanAllocate  (line 392, @0x0000000002abbe80, libserver.so)
bool __fastcall CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 392, @0x0000000002abbe90, libserver.so)
// globals: CDOTA_Ability_Ursa_Fury_Swipes::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Ursa_Fury_Swipes::s_pSchemaBinding;
}


// CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::AllocateInstance  (line 392, @0x0000000002abfd40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::ConstructInstance  (line 392, @0x0000000002ac33b0, libserver.so)  // inlines: CDOTA_Ability_Ursa_Fury_Swipes, Construct<CDOTA_Ability_Ursa_Fury_Swipes>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_443AA90;
  }
  return p;
}


// CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 392, @0x0000000002accec0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 392, @0x0000000002accee0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInternal  (line 392, @0x0000000002ae5600, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Ursa_Fury_Swipes"
// globals: `guard variable for'CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClass, CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClass, __dso_handle, CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClassInfo, CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClassInfo
CEntityClass *__cdecl CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClass);
    CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClass._vptr_CEntityClass = off_443AA10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClass);
    __cxa_atexit(
      CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Ursa_Fury_SwipesClass != 0 )
    return &CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClass;
  if ( `guard variable for'CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClassInfo,
      "CDOTA_Ability_Ursa_Fury_Swipes",
      "ursa_fury_swipes",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClassInfo);
  }
  CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClass.m_pClassInfo = &CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClassInfo;
  CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClass.m_pBaseClassInfo = CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Ursa_Fury_SwipesClass = &CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClass;
  CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClassInfo.m_pClass = &CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClass;
  CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Ursa_Fury_SwipesClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Ursa_Fury_Swipes::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_Fury_SwipesClass;
}


// CDOTA_Ability_Ursa_Fury_Swipes::GetIntrinsicModifierName  (line 395, @0x0000000002abbea0, libserver.so)
// strings: "modifier_ursa_fury_swipes"
const char *__fastcall CDOTA_Ability_Ursa_Fury_Swipes::GetIntrinsicModifierName(
        CDOTA_Ability_Ursa_Fury_Swipes *const this)
{
  return "modifier_ursa_fury_swipes";
}


// CDOTA_Ability_Ursa_Fury_Swipes::GetAbilityDamageToTargetOverInterval  (line 404, @0x0000000002aa2970, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "damage_per_stack"
__int64 __fastcall CDOTA_Ability_Ursa_Fury_Swipes::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Ursa_Fury_Swipes *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  float fNumAttacksa; // [rsp+0h] [rbp-1Ch]
  float fNumAttacksb; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    fNumAttacksa = fInterval / CDOTA_BaseNPC::GetAttacksPerSecond(Caster);
    fNumAttacksb = ((CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_per_stack", -1, 0) * fNumAttacksa)
                  * 0.5)
                 * fNumAttacksa;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * fNumAttacksb);
  }
  return result;
}


// CDOTA_Modifier_Ursa_Fury_Swipes::~CDOTA_Modifier_Ursa_Fury_Swipes  (line 420, @0x0000000002ac05b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Ursa_Fury_Swipes::~CDOTA_Modifier_Ursa_Fury_Swipes(
        CDOTA_Modifier_Ursa_Fury_Swipes *const this)
{
  this->_vptr_CDOTA_Buff = &off_443B550;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Ursa_Fury_Swipes::~CDOTA_Modifier_Ursa_Fury_Swipes  (line 420, @0x0000000002ac05d0, libserver.so)  // inlines: ~CDOTA_Modifier_Ursa_Fury_Swipes
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Ursa_Fury_Swipes::~CDOTA_Modifier_Ursa_Fury_Swipes(
        CDOTA_Modifier_Ursa_Fury_Swipes *const this)
{
  this->_vptr_CDOTA_Buff = &off_443B550;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Ursa_Fury_Swipes::IsHidden  (line 425, @0x0000000002abbeb0, libserver.so)
bool __fastcall CDOTA_Modifier_Ursa_Fury_Swipes::IsHidden(CDOTA_Modifier_Ursa_Fury_Swipes *const this)
{
  return 1;
}


// CDOTA_Modifier_Ursa_Fury_Swipes::OnCreated  (line 445, @0x0000000002aab2d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "damage_per_stack", "bonus_reset_time", "bonus_reset_time_roshan"
void __fastcall CDOTA_Modifier_Ursa_Fury_Swipes::OnCreated(CDOTA_Modifier_Ursa_Fury_Swipes *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_per_stack = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_per_stack", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_reset_time = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->damage_per_stack = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_reset_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "bonus_reset_time", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_reset_time_roshan = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                      v5,
                                      "bonus_reset_time_roshan",
                                      -1,
                                      0);
    return;
  }
LABEL_7:
  this->bonus_reset_time_roshan = 0.0;
}


// CDOTA_Modifier_Ursa_Fury_Swipes::OnRefresh  (line 454, @0x0000000002aab3a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "damage_per_stack", "bonus_reset_time", "bonus_reset_time_roshan"
void __fastcall CDOTA_Modifier_Ursa_Fury_Swipes::OnRefresh(CDOTA_Modifier_Ursa_Fury_Swipes *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_per_stack = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_per_stack", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_reset_time = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->damage_per_stack = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_reset_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "bonus_reset_time", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_reset_time_roshan = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                      v5,
                                      "bonus_reset_time_roshan",
                                      -1,
                                      0);
    return;
  }
LABEL_7:
  this->bonus_reset_time_roshan = 0.0;
}


// CDOTA_Modifier_Ursa_Fury_Swipes::DeclareFunctions  (line 463, @0x0000000002a79280, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Ursa_Fury_Swipes::GetModifierProcAttack_BonusDamage_Physical(CModifierParams const&)
void __fastcall CDOTA_Modifier_Ursa_Fury_Swipes::DeclareFunctions(CDOTA_Modifier_Ursa_Fury_Swipes *const this)
{
  this->m_Functions[4].__pfn = CDOTA_Modifier_Ursa_Fury_Swipes::GetModifierProcAttack_BonusDamage_Physical;
  this->m_Functions[4].__delta = 0;
}


// CDOTA_Modifier_Ursa_Fury_Swipes::GetModifierProcAttack_BonusDamage_Physical  (line 470, @0x0000000002aa44b0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues (13 total)
// strings: "modifier_ursa_fury_swipes_damage_increase", "special_bonus_unique_ursa", "modifier_ursa_enrage", "enrage_multiplier"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Ursa_Fury_Swipes::GetModifierProcAttack_BonusDamage_Physical(
        CDOTA_Modifier_Ursa_Fury_Swipes *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v5; // rcx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  uint32 v9; // eax
  unsigned int v10; // edx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *v14; // rdi
  CDOTA_Buff *v15; // rbx
  CDOTA_BaseNPC *v16; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CDOTABaseAbility *v20; // rax
  __int64 v21; // xmm0_8
  __m128 v22; // xmm0
  CDOTA_BaseNPC *v23; // r13
  CDOTA_BaseNPC *Parent; // rax
  uint32 v25; // esi
  CEntityIdentity *v26; // rax
  CEntityIdentity *v27; // rax
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v29; // rdi
  CEntityIdentity *v30; // rdi
  CDOTA_BaseNPC *v31; // r13
  uint32 m_iUnitType; // edi
  int iFailType; // esi
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  float flDamage; // [rsp+Ch] [rbp-54h]
  unsigned int flDamagea; // [rsp+Ch] [rbp-54h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v40 = __readfsqword(0x28u);
  m_Index = params->hattacker.m_Index;
  v5 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1
    && (m_Index_low = LOWORD(params->hattacker.m_Index),
        (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) != 0)
    && (v8 = &v7[m_Index_low & 0x1FF]) != 0
    && m_Index == v8->m_EHandle.m_Index
    && (v23 = v8->m_pInstance, v8->m_pInstance != 0)
    && v23->m_bIsDOTANPC
    && (Parent = CDOTA_Buff::GetParent(this), v5 = CEntityHandle::gm_pEntityList, Parent == v23) )
  {
    v25 = params->hattacker.m_Index;
    if ( v25 + 2 <= 1
      || (v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
      || (v27 = &v26[params->hattacker.m_Index & 0x1FF]) == 0
      || v25 != v27->m_EHandle.m_Index
      || (m_pInstance = v27->m_pInstance, v27->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    v9 = params->htarget.m_Index;
    v10 = v9 + 2;
    if ( v9 + 2 <= 1
      || (v29 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v30 = &v29[params->htarget.m_Index & 0x1FF]) == 0
      || v9 != v30->m_EHandle.m_Index
      || (v31 = v30->m_pInstance, v30->m_pInstance == 0)
      || !v31->m_bIsDOTANPC )
    {
      v31 = 0;
    }
    if ( m_pInstance != 0 && LOBYTE(m_pInstance[71].m_pEntity) == 0 && v31 != 0 )
    {
      m_iUnitType = v31->m_iUnitType;
      if ( (m_iUnitType & 0x10) == 0
        && (m_iUnitType & 0x193) != 0
        && HIBYTE(m_pInstance[7].m_CScriptComponent) != v31->m_iTeamNum.m_Value
        && (BYTE3(m_pInstance[58]._vptr_IHandleEntity) & 0x10) == 0 )
      {
        iFailType = params->iFailType;
        if ( iFailType == 6 || iFailType == 0 )
        {
          KeyValues::KeyValues(&kv, "modifier_ursa_fury_swipes_damage_increase");
          KeyValues::SetFloat(&kv, "duration", this->bonus_reset_time_roshan);
          Ability = CDOTA_Buff::GetAbility(this);
          Caster = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v31, Caster, Ability, "modifier_ursa_fury_swipes_damage_increase", &kv, 0);
          ModifierByName = CDOTA_BaseNPC::FindModifierByName(v31, "modifier_ursa_fury_swipes_damage_increase", 0);
          if ( ModifierByName != 0 )
            (*(ModifierByName->_vptr_CDOTA_Buff + 25))(ModifierByName);
          KeyValues::~KeyValues(&kv);
          v9 = params->htarget.m_Index;
          v5 = CEntityHandle::gm_pEntityList;
          v10 = v9 + 2;
        }
      }
    }
  }
  else
  {
    v9 = params->htarget.m_Index;
    v10 = v9 + 2;
  }
  if ( v10 <= 1 )
    goto LABEL_10;
  v11 = v5->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
  if ( v11 == 0 )
    goto LABEL_10;
  v12 = &v11[params->htarget.m_Index & 0x1FF];
  if ( v12 == 0 )
    goto LABEL_10;
  if ( v9 != v12->m_EHandle.m_Index )
    goto LABEL_10;
  v14 = v12->m_pInstance;
  if ( v12->m_pInstance == 0 )
    goto LABEL_10;
  if ( !v14->m_bIsDOTANPC )
    goto LABEL_10;
  v15 = CDOTA_BaseNPC::FindModifierByName(v14, "modifier_ursa_fury_swipes_damage_increase", 0);
  if ( v15 == 0 )
    goto LABEL_10;
  flDamage = this->damage_per_stack;
  v16 = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v16, "special_bonus_unique_ursa", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flDamage;
  v18 = CDOTA_Buff::GetParent(this);
  if ( CDOTA_BaseNPC::FindModifierByName(v18, "modifier_ursa_enrage", 0) == 0 )
  {
    v22 = (*(v15->_vptr_CDOTA_Buff + 27))(v15);
    v22.m128_f32[0] = result.m_eType * flDamage;
    *&result.m_eType = (v22.m128_u64[0] << 32) | 1;
    goto LABEL_11;
  }
  v19 = CDOTA_Buff::GetParent(this);
  v20 = CDOTA_BaseNPC::FindAbilityByName(v19, "ursa_enrage", 0);
  if ( v20 != 0 )
  {
    *&flDamagea = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v20, "enrage_multiplier", -1, 0) * flDamage;
    result.m_eType = (*(v15->_vptr_CDOTA_Buff + 27))(v15);
    v21 = flDamagea;
    *&v21 = *&flDamagea * result.m_eType;
    *&result.m_eType = (v21 << 32) | 1;
  }
  else
  {
LABEL_10:
    *&result.m_eType = 1;
  }
LABEL_11:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::~CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase  (line 537, @0x0000000002ac0560, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::~CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase(
        CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase *const this)
{
  this->_vptr_CDOTA_Buff = &off_443B830;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::~CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase  (line 537, @0x0000000002ac0580, libserver.so)  // inlines: ~CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::~CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase(
        CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase *const this)
{
  this->_vptr_CDOTA_Buff = &off_443B830;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::IsPurgable  (line 544, @0x0000000002abbec0, libserver.so)
bool __fastcall CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::IsPurgable(
        CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase *const this)
{
  return 0;
}


// CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::GetEffectName  (line 552, @0x0000000002abbed0, libserver.so)
// strings: "particles/units/heroes/hero_ursa/ursa_fury_swipes_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::GetEffectName(
        CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase *const this)
{
  return "particles/units/heroes/hero_ursa/ursa_fury_swipes_debuff.vpcf";
}


// CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::GetEffectAttachType  (line 553, @0x0000000002abbee0, libserver.so)
int __fastcall CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::GetEffectAttachType(
        CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase *const this)
{
  return 7;
}


// CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::ShouldUseOverheadOffset  (line 554, @0x0000000002abbef0, libserver.so)
bool __fastcall CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::ShouldUseOverheadOffset(
        CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase *const this)
{
  return 1;
}


// CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::OnCreated  (line 559, @0x0000000002aaa0a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_per_stack"
void __fastcall CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::OnCreated(
        CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage_per_stack = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_per_stack", -1, 0);
  else
    this->damage_per_stack = 0;
}


// CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::DeclareFunctions  (line 567, @0x0000000002a792a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::DeclareFunctions(
        CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase *const this)
{
  this->m_Functions[151].__pfn = CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::OnTooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::OnTooltip  (line 574, @0x0000000002aa2a20, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_ursa"
ModifierVariant_t __fastcall CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase::OnTooltip(
        CDOTA_Modifier_Ursa_Fury_Swipes_Damage_Increase *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128 v5; // xmm0
  int v6; // eax
  float flDamage; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  flDamage = this->damage_per_stack;
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_ursa", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
      flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flDamage;
  }
  v5 = (*(this->_vptr_CDOTA_Buff + 27))(this);
  result.m_szVal = 0;
  v5.m128_f32[0] = v6 * flDamage;
  *&result.m_eType = (v5.m128_u64[0] << 32) | 1;
  return result;
}


// CDOTA_Ability_Ursa_Enrage::~CDOTA_Ability_Ursa_Enrage  (line 597, @0x0000000002ac64c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Ursa_Enrage::~CDOTA_Ability_Ursa_Enrage(CDOTA_Ability_Ursa_Enrage *const this)
{
  this->_vptr_IHandleEntity = &off_443BBD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Ursa_Enrage::~CDOTA_Ability_Ursa_Enrage  (line 597, @0x0000000002ac64e0, libserver.so)  // inlines: ~CDOTA_Ability_Ursa_Enrage
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Ursa_Enrage::~CDOTA_Ability_Ursa_Enrage(CDOTA_Ability_Ursa_Enrage *const this)
{
  this->_vptr_IHandleEntity = &off_443BBD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Ursa_Enrage::Schema_DynamicBinding  (line 599, @0x0000000002abbf00, libserver.so)
// globals: CDOTA_Ability_Ursa_Enrage::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Ursa_Enrage::Schema_DynamicBinding(
        const CDOTA_Ability_Ursa_Enrage *const this)
{
  return CDOTA_Ability_Ursa_Enrage::s_pSchemaBinding;
}


// CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 599, @0x0000000002abbf10, libserver.so)
// globals: CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::DestructInstance  (line 599, @0x0000000002abbf20, libserver.so)  // inlines: Destruct<CDOTA_Ability_Ursa_Enrage>
void __fastcall CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::FreeInstance  (line 599, @0x0000000002abbf40, libserver.so)
void __fastcall CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::CanAllocate  (line 599, @0x0000000002abbf60, libserver.so)
bool __fastcall CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 599, @0x0000000002abbf70, libserver.so)
// globals: CDOTA_Ability_Ursa_Enrage::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Ursa_Enrage::s_pSchemaBinding;
}


// CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::AllocateInstance  (line 599, @0x0000000002abfd80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::ConstructInstance  (line 599, @0x0000000002ac33e0, libserver.so)  // inlines: CDOTA_Ability_Ursa_Enrage, Construct<CDOTA_Ability_Ursa_Enrage>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_443BBD0;
  }
  return p;
}


// CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 599, @0x0000000002accf10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 599, @0x0000000002accf30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Ursa_Enrage::GetEntityClassInternal  (line 599, @0x0000000002ae5750, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Ursa_Enrage"
// globals: `guard variable for'CDOTA_Ability_Ursa_Enrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EnrageClass, CDOTA_Ability_Ursa_Enrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EnrageClass, __dso_handle, CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Ursa_Enrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_EnrageClassInfo, CDOTA_Ability_Ursa_Enrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_EnrageClassInfo
CEntityClass *__cdecl CDOTA_Ability_Ursa_Enrage::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Ursa_Enrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EnrageClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ursa_Enrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EnrageClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Ursa_Enrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EnrageClass);
    CDOTA_Ability_Ursa_Enrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EnrageClass._vptr_CEntityClass = off_443BB50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ursa_Enrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EnrageClass);
    __cxa_atexit(
      CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Ursa_Enrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EnrageClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Ursa_EnrageClass != 0 )
    return &CDOTA_Ability_Ursa_Enrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EnrageClass;
  if ( `guard variable for'CDOTA_Ability_Ursa_Enrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_EnrageClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ursa_Enrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_EnrageClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Ursa_Enrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_EnrageClassInfo,
      "CDOTA_Ability_Ursa_Enrage",
      "ursa_enrage",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ursa_Enrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_EnrageClassInfo);
  }
  CDOTA_Ability_Ursa_Enrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EnrageClass.m_pClassInfo = &CDOTA_Ability_Ursa_Enrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_EnrageClassInfo;
  CDOTA_Ability_Ursa_Enrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EnrageClass.m_pBaseClassInfo = CDOTA_Ability_Ursa_Enrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_EnrageClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Ursa_EnrageClass = &CDOTA_Ability_Ursa_Enrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EnrageClass;
  CDOTA_Ability_Ursa_Enrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ursa_EnrageClassInfo.m_pClass = &CDOTA_Ability_Ursa_Enrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EnrageClass;
  CDOTA_Ability_Ursa_Enrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EnrageClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Ursa_EnrageClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Ursa_Enrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ursa_EnrageClass;
}


// CDOTA_Ability_Ursa_Enrage::GetStolenActivityModifier  (line 606, @0x0000000002abbf80, libserver.so)
const char *__fastcall CDOTA_Ability_Ursa_Enrage::GetStolenActivityModifier(CDOTA_Ability_Ursa_Enrage *const this)
{
  return "enrage";
}


// CDOTA_Ability_Ursa_Enrage::YouForgotToImplementOrDeclareServerClass  (line 611, @0x0000000002a792c0, libserver.so)
int __fastcall CDOTA_Ability_Ursa_Enrage::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Ursa_Enrage *const this)
{
  return 0;
}


// CDOTA_Ability_Ursa_Enrage::GetServerClass  (line 611, @0x0000000002a89f30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Ursa_Enrage::GetServerClass(CDOTA_Ability_Ursa_Enrage *const this)
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


// CDOTA_Ability_Ursa_Enrage::GetBehavior  (line 620, @0x0000000002a7aef0, libserver.so)  // inlines: GetAbilityData, GetBehavior
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTA_Ability_Ursa_Enrage::GetBehavior(CDOTA_Ability_Ursa_Enrage *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  bool v3; // zf
  DOTAAbilityData_t *m_pAbilityData; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = !CDOTA_BaseNPC::HasScepter(Caster);
  m_pAbilityData = this->m_pAbilityData;
  if ( v3 )
  {
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    return m_pAbilityData->m_iAbilityBehavior;
  }
  else
  {
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    return m_pAbilityData->m_iAbilityBehavior | 0x200000;
  }
}


// CDOTA_Ability_Ursa_Enrage::GetCooldown  (line 633, @0x0000000002a9bed0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Ursa_Enrage::GetCooldown(CDOTA_Ability_Ursa_Enrage *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Ursa_Enrage::OnSpellStart  (line 645, @0x0000000002a9b090, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, Purge, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_ursa_enrage", "Hero_Ursa.Enrage"
void __fastcall CDOTA_Ability_Ursa_Enrage::OnSpellStart(CDOTA_Ability_Ursa_Enrage *const this)
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
  KeyValues::KeyValues(&kv, "modifier_ursa_enrage");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_ursa_enrage", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v5, "Hero_Ursa.Enrage", 0.0, 0, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  Purge(v6, this, 28);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Ursa_Enrage::GetAbilityDamageToTargetOverInterval  (line 662, @0x0000000002a7cb00, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName
int __fastcall CDOTA_Ability_Ursa_Enrage::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Ursa_Enrage *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  if ( eDamageType != DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
    return 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "ursa_fury_swipes", 0);
  if ( AbilityByName != 0 )
    return (*(AbilityByName->_vptr_IHandleEntity + 320))(AbilityByName, pTarget, 1, fInterval);
  else
    return 0;
}


// CDOTA_Modifier_Ursa_Enrage::~CDOTA_Modifier_Ursa_Enrage  (line 680, @0x0000000002ac0510, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Ursa_Enrage::~CDOTA_Modifier_Ursa_Enrage(CDOTA_Modifier_Ursa_Enrage *const this)
{
  this->_vptr_CDOTA_Buff = &off_443C690;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Ursa_Enrage::~CDOTA_Modifier_Ursa_Enrage  (line 680, @0x0000000002ac0530, libserver.so)  // inlines: ~CDOTA_Modifier_Ursa_Enrage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Ursa_Enrage::~CDOTA_Modifier_Ursa_Enrage(CDOTA_Modifier_Ursa_Enrage *const this)
{
  this->_vptr_CDOTA_Buff = &off_443C690;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Ursa_Enrage::GetHeroEffectName  (line 689, @0x0000000002abbf90, libserver.so)
// strings: "particles/units/heroes/hero_ursa/ursa_enrage_hero_effect.vpcf"
const char *__fastcall CDOTA_Modifier_Ursa_Enrage::GetHeroEffectName(CDOTA_Modifier_Ursa_Enrage *const this)
{
  return "particles/units/heroes/hero_ursa/ursa_enrage_hero_effect.vpcf";
}


// CDOTA_Modifier_Ursa_Enrage::HeroEffectPriority  (line 690, @0x0000000002abbfa0, libserver.so)
int __fastcall CDOTA_Modifier_Ursa_Enrage::HeroEffectPriority(CDOTA_Modifier_Ursa_Enrage *const this)
{
  return 100;
}


// CDOTA_Modifier_Ursa_Enrage::IsPurgable  (line 693, @0x0000000002abbfb0, libserver.so)
bool __fastcall CDOTA_Modifier_Ursa_Enrage::IsPurgable(CDOTA_Modifier_Ursa_Enrage *const this)
{
  return 0;
}


// CDOTA_Modifier_Ursa_Enrage::OnCreated  (line 710, @0x0000000002aac970, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::StartGesture
// strings: "particles/units/heroes/hero_ursa/ursa_enrage_buff.vpcf", "attach_head"
void __fastcall CDOTA_Modifier_Ursa_Enrage::OnCreated(CDOTA_Modifier_Ursa_Enrage *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v6; // r13
  CDOTA_ParticleManager *v7; // rax
  CDOTA_BaseNPC *Caster; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_reduction", -1, 0);
  else
    this->damage_reduction = 0;
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_ursa/ursa_enrage_buff.vpcf",
                      1,
                      Parent,
                      0,
                      0);
  v6 = CDOTA_Buff::GetParent(this);
  v7 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v7, Parent, 1, v6, 5, "attach_head", vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1519, 0.1, 0.1, 9, 0, 1.0);
}


// CDOTA_Modifier_Ursa_Enrage::DeclareFunctions  (line 724, @0x0000000002a792d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Ursa_Enrage::ModelScale(CModifierParams const&), CDOTA_Modifier_Ursa_Enrage::GetModifierIncomingDamage_Percentage(CModifierParams const&), CDOTA_Modifier_Ursa_Enrage::OnHeroKilled(CModifierParams const&)
void __fastcall CDOTA_Modifier_Ursa_Enrage::DeclareFunctions(CDOTA_Modifier_Ursa_Enrage *const this)
{
  this->m_Functions[153].__pfn = CDOTA_Modifier_Ursa_Enrage::ModelScale;
  this->m_Functions[153].__delta = 0;
  this->m_Functions[36].__delta = 0;
  this->m_Functions[36].__pfn = CDOTA_Modifier_Ursa_Enrage::GetModifierIncomingDamage_Percentage;
  this->m_Functions[147].__pfn = CDOTA_Modifier_Ursa_Enrage::OnHeroKilled;
  this->m_Functions[147].__delta = 0;
}


// CDOTA_Modifier_Ursa_Enrage::GetModifierIncomingDamage_Percentage  (line 737, @0x0000000002a7cda0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Ursa_Enrage::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Ursa_Enrage *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 1;
  if ( (params->nDamageflags & 0x20) == 0 )
  {
    *v2.m128i_i32 = -this->damage_reduction;
    *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Ursa_Enrage::ModelScale  (line 751, @0x0000000002a79330, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Ursa_Enrage::ModelScale(
        CDOTA_Modifier_Ursa_Enrage *const this,
        const CModifierParams *const params)
{
  return 0x41A0000000000001uLL;
}


// CDOTA_Modifier_Ursa_Enrage::OnHeroKilled  (line 759, @0x0000000002a87a30, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Target, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Ursa_Enrage::OnHeroKilled(
        CDOTA_Modifier_Ursa_Enrage *const this,
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
    kill_eater_event_t::kKillEaterEventType_Ursa_EnragedKills,
    1,
    INVALID_ITEM_DEF_INDEX);
  return 1uLL;
}


