// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_furion.cpp:41
class CDOTA_Unit_Hero_Furion : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Furion(CDOTA_Unit_Hero_Furion &);
	CDOTA_Unit_Hero_Furion(CDOTA_Unit_Hero_Furion &);
	CDOTA_Unit_Hero_Furion();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CDOTA_Unit_Hero_Furion();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[8] Spawn
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_furion.cpp:51
class C_CDOTA_Unit_Hero_Furion_MapInstall {
	C_CDOTA_Unit_Hero_Furion_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_furion.cpp:82
class CDOTA_Ability_Furion_Sprout : public CDOTABaseAbility {
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
	CDOTA_Ability_Furion_Sprout(CDOTA_Ability_Furion_Sprout &);
	CDOTA_Ability_Furion_Sprout(CDOTA_Ability_Furion_Sprout &);
	CDOTA_Ability_Furion_Sprout();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetStolenActivityModifier();
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Furion_Sprout();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[310] GetStolenActivityModifier
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_furion.cpp:170
class CDOTA_Ability_Furion_Teleportation : public CDOTABaseAbility {
public:

private:

	int m_nFXIndexStart;  // +0x390
	int m_nFXIndexEnd;  // +0x394
	int m_nFXIndexEndTeam;  // +0x398
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
	CDOTA_Ability_Furion_Teleportation(CDOTA_Ability_Furion_Teleportation &);
	CDOTA_Ability_Furion_Teleportation(CDOTA_Ability_Furion_Teleportation &);
	CDOTA_Ability_Furion_Teleportation();
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
	virtual void OnAbilityPhaseInterrupted();
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(const Vector &);
	virtual bool AbilitySuppressesTaunt();
	virtual const char * GetStolenActivityModifier();
	virtual ~CDOTA_Ability_Furion_Teleportation();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[258] CastFilterResult
	// vtable[259] GetCustomCastError
	// vtable[301] AbilitySuppressesTaunt
	// vtable[310] GetStolenActivityModifier
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_furion.cpp:200
class C_CDOTA_Ability_Furion_Teleportation_MapInstall {
	C_CDOTA_Ability_Furion_Teleportation_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_furion.cpp:357
class CDOTA_Ability_Furion_ForceOfNature : public CDOTABaseAbility {
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
	CDOTA_Ability_Furion_ForceOfNature(CDOTA_Ability_Furion_ForceOfNature &);
	CDOTA_Ability_Furion_ForceOfNature(CDOTA_Ability_Furion_ForceOfNature &);
	CDOTA_Ability_Furion_ForceOfNature();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(const Vector &);
	virtual const char * GetStolenActivityModifier();
	virtual bool IsHiddenWhenStolen();
	void OnSpellStartSpawnCompletion(CDOTA_BaseNPC *, const CEntityKeyValues *);
	virtual void OnSpellStart();
	virtual bool ShouldSpeakAbilityConcept(int);
	virtual ~CDOTA_Ability_Furion_ForceOfNature();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[258] CastFilterResult
	// vtable[259] GetCustomCastError
	// vtable[310] GetStolenActivityModifier
	// vtable[306] IsHiddenWhenStolen
	// vtable[266] OnSpellStart
	// vtable[298] ShouldSpeakAbilityConcept
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_furion.cpp:385
class C_CDOTA_Ability_Furion_ForceOfNature_MapInstall {
	C_CDOTA_Ability_Furion_ForceOfNature_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_furion.cpp:505
class CDOTA_Ability_Furion_WrathOfNature : public CDOTABaseAbility {
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
	CDOTA_Ability_Furion_WrathOfNature(CDOTA_Ability_Furion_WrathOfNature &);
	CDOTA_Ability_Furion_WrathOfNature(CDOTA_Ability_Furion_WrathOfNature &);
	CDOTA_Ability_Furion_WrathOfNature();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	virtual const char * GetStolenActivityModifier();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Furion_WrathOfNature();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[310] GetStolenActivityModifier
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_furion.cpp:570
class CDOTA_Modifier_Furion_WrathOfNature_Thinker : public CDOTA_Buff {
public:

private:

	int damage;  // +0xba8
	int max_targets;  // +0xbac
	int damage_percent_add;  // +0xbb0
	float jump_delay;  // +0xbb4
	int damage_scepter;  // +0xbb8
	float scepter_buffer;  // +0xbbc
	float m_flLastTickTime;  // +0xbc0
	float m_flTimeAccumulator;  // +0xbc4
	int m_nBaseDamage;  // +0xbe0
	int m_nMaxTargets;  // +0xbe4
	float m_flJumpDelay;  // +0xbe8
	CDOTA_Modifier_Furion_WrathOfNature_Thinker();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	CDOTA_BaseNPC * GetNextTarget();
	void HitTarget(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_Furion_WrathOfNature_Thinker();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// sizeof = 3056
};

// src/game/shared/dota/units/dota_unit_hero_furion.cpp:867
class CDOTA_Modifier_Furion_WrathOfNature_Spawn : public CDOTA_Buff {
public:

	CDOTA_Modifier_Furion_WrathOfNature_Spawn();
	virtual bool IsDebuff();
	void OnDestroySpawnCompletion(CDOTA_BaseNPC *, const CEntityKeyValues *);
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Furion_WrathOfNature_Spawn();

	// vtable[12] IsDebuff
	// vtable[60] OnDestroy
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_furion.cpp:959
class CDOTA_Modifier_Treant_Bonus : public CDOTA_Buff {
public:

private:

	int treant_hp_bonus;  // +0xba8
	int treant_damage_bonus;  // +0xbac
	CDOTA_Modifier_Treant_Bonus();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	ModifierVariant_t GetModifierBaseAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierExtraHealthBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Treant_Bonus();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_furion.cpp:1018
class CDOTA_Modifier_Treant_Large_Bonus : public CDOTA_Buff {
public:

private:

	int treant_large_hp_bonus;  // +0xba8
	int treant_large_damage_bonus;  // +0xbac
	CDOTA_Modifier_Treant_Large_Bonus();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	ModifierVariant_t GetModifierBaseAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierExtraHealthBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Treant_Large_Bonus();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Furion::~CDOTA_Unit_Hero_Furion  (line 41, @0x0000000002ba2b00, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Furion::~CDOTA_Unit_Hero_Furion(CDOTA_Unit_Hero_Furion *const this)
{
  this->_vptr_IHandleEntity = &off_44E1230;
  this->_vptr_INextBotEventResponder = &off_44E2210;
  this->_vptr_CObstructionObject = &off_44E2540;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Furion::~CDOTA_Unit_Hero_Furion  (line 41, @0x0000000002ba2b40, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Furion
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Furion::~CDOTA_Unit_Hero_Furion(CDOTA_Unit_Hero_Furion *const this)
{
  this->_vptr_IHandleEntity = &off_44E1230;
  this->_vptr_INextBotEventResponder = &off_44E2210;
  this->_vptr_CObstructionObject = &off_44E2540;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Furion::Schema_DynamicBinding  (line 43, @0x0000000002b90380, libserver.so)
// globals: CDOTA_Unit_Hero_Furion::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Furion::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Furion *const this)
{
  return CDOTA_Unit_Hero_Furion::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 43, @0x0000000002b903b0, libserver.so)
// globals: CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::DestructInstance  (line 43, @0x0000000002b903c0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Furion>
void __fastcall CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::FreeInstance  (line 43, @0x0000000002b903e0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::CanAllocate  (line 43, @0x0000000002b90400, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 43, @0x0000000002b90410, libserver.so)
// globals: CDOTA_Unit_Hero_Furion::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Furion::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::AllocateInstance  (line 43, @0x0000000002b97c20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::ConstructInstance  (line 43, @0x0000000002b9c660, libserver.so)  // inlines: CDOTA_Unit_Hero_Furion, Construct<CDOTA_Unit_Hero_Furion>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_44E1230;
    *(p + 236) = &off_44E2210;
    *(p + 257) = &off_44E2540;
  }
  return p;
}


// CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002babe70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002bac4f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Furion::GetEntityClassInternal  (line 43, @0x0000000002bcdaf0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_furion", "CDOTA_Unit_Hero_Furion"
// globals: `guard variable for'CDOTA_Unit_Hero_Furion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FurionClass, CDOTA_Unit_Hero_Furion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FurionClass, __dso_handle, CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Furion::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_FurionClassInfo, CDOTA_Unit_Hero_Furion::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_FurionClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Furion::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Furion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FurionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Furion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FurionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Furion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FurionClass);
    CDOTA_Unit_Hero_Furion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FurionClass._vptr_CEntityClass = off_44E11B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Furion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FurionClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Furion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FurionClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_FurionClass != 0 )
    return &CDOTA_Unit_Hero_Furion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FurionClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Furion::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_FurionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Furion::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_FurionClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Furion::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_FurionClassInfo,
      "CDOTA_Unit_Hero_Furion",
      "npc_dota_hero_furion",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Furion::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_FurionClassInfo);
  }
  CDOTA_Unit_Hero_Furion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FurionClass.m_pClassInfo = &CDOTA_Unit_Hero_Furion::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_FurionClassInfo;
  CDOTA_Unit_Hero_Furion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FurionClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Furion::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_FurionClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_FurionClass = &CDOTA_Unit_Hero_Furion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FurionClass;
  CDOTA_Unit_Hero_Furion::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_FurionClassInfo.m_pClass = &CDOTA_Unit_Hero_Furion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FurionClass;
  CDOTA_Unit_Hero_Furion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FurionClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_FurionClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Furion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FurionClass;
}


// CDOTA_Unit_Hero_Furion::YouForgotToImplementOrDeclareServerClass  (line 51, @0x0000000002b35380, libserver.so)
int __fastcall CDOTA_Unit_Hero_Furion::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Furion *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Furion::GetServerClass  (line 51, @0x0000000002b4cbe0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Furion::GetServerClass(CDOTA_Unit_Hero_Furion *const this)
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


// CDOTA_Unit_Hero_Furion::Precache  (line 60, @0x0000000002b3a120, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, DOTA_PrecacheUnitByNameSync
// strings: "npc_dota_furion_treant"
void __fastcall CDOTA_Unit_Hero_Furion::Precache(
        CDOTA_Unit_Hero_Furion *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  DOTA_PrecacheUnitByNameSync("npc_dota_furion_treant", pContext->m_pManifest, -1);
}


// CDOTA_Unit_Hero_Furion::Spawn  (line 71, @0x0000000002b39c50, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn
void __fastcall CDOTA_Unit_Hero_Furion::Spawn(CDOTA_Unit_Hero_Furion *const this, const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
}


// CDOTA_Ability_Furion_Sprout::~CDOTA_Ability_Furion_Sprout  (line 82, @0x0000000002ba12b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Furion_Sprout::~CDOTA_Ability_Furion_Sprout(CDOTA_Ability_Furion_Sprout *const this)
{
  this->_vptr_IHandleEntity = &off_44E2610;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Furion_Sprout::~CDOTA_Ability_Furion_Sprout  (line 82, @0x0000000002ba12d0, libserver.so)  // inlines: ~CDOTA_Ability_Furion_Sprout
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Furion_Sprout::~CDOTA_Ability_Furion_Sprout(CDOTA_Ability_Furion_Sprout *const this)
{
  this->_vptr_IHandleEntity = &off_44E2610;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Furion_Sprout::Schema_DynamicBinding  (line 84, @0x0000000002b90420, libserver.so)
// globals: CDOTA_Ability_Furion_Sprout::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Furion_Sprout::Schema_DynamicBinding(
        const CDOTA_Ability_Furion_Sprout *const this)
{
  return CDOTA_Ability_Furion_Sprout::s_pSchemaBinding;
}


// CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 84, @0x0000000002b90430, libserver.so)
// globals: CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::DestructInstance  (line 84, @0x0000000002b90440, libserver.so)  // inlines: Destruct<CDOTA_Ability_Furion_Sprout>
void __fastcall CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::FreeInstance  (line 84, @0x0000000002b90460, libserver.so)
void __fastcall CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::CanAllocate  (line 84, @0x0000000002b90480, libserver.so)
bool __fastcall CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 84, @0x0000000002b90490, libserver.so)
// globals: CDOTA_Ability_Furion_Sprout::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Furion_Sprout::s_pSchemaBinding;
}


// CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::AllocateInstance  (line 84, @0x0000000002b97c60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::ConstructInstance  (line 84, @0x0000000002b9d380, libserver.so)  // inlines: CDOTA_Ability_Furion_Sprout, Construct<CDOTA_Ability_Furion_Sprout>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44E2610;
  }
  return p;
}


// CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 84, @0x0000000002baaac0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 84, @0x0000000002baaae0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Furion_Sprout::GetEntityClassInternal  (line 84, @0x0000000002bc8d80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "furion_sprout", "CDOTA_Ability_Furion_Sprout"
// globals: `guard variable for'CDOTA_Ability_Furion_Sprout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_SproutClass, CDOTA_Ability_Furion_Sprout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_SproutClass, __dso_handle, CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Furion_Sprout::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_SproutClassInfo, CDOTA_Ability_Furion_Sprout::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_SproutClassInfo
CEntityClass *__cdecl CDOTA_Ability_Furion_Sprout::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Furion_Sprout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_SproutClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Furion_Sprout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_SproutClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Furion_Sprout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_SproutClass);
    CDOTA_Ability_Furion_Sprout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_SproutClass._vptr_CEntityClass = off_44E2590;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Furion_Sprout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_SproutClass);
    __cxa_atexit(
      CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Furion_Sprout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_SproutClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Furion_SproutClass != 0 )
    return &CDOTA_Ability_Furion_Sprout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_SproutClass;
  if ( `guard variable for'CDOTA_Ability_Furion_Sprout::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_SproutClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Furion_Sprout::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_SproutClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Furion_Sprout::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_SproutClassInfo,
      "CDOTA_Ability_Furion_Sprout",
      "furion_sprout",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Furion_Sprout::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_SproutClassInfo);
  }
  CDOTA_Ability_Furion_Sprout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_SproutClass.m_pClassInfo = &CDOTA_Ability_Furion_Sprout::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_SproutClassInfo;
  CDOTA_Ability_Furion_Sprout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_SproutClass.m_pBaseClassInfo = CDOTA_Ability_Furion_Sprout::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_SproutClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Furion_SproutClass = &CDOTA_Ability_Furion_Sprout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_SproutClass;
  CDOTA_Ability_Furion_Sprout::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_SproutClassInfo.m_pClass = &CDOTA_Ability_Furion_Sprout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_SproutClass;
  CDOTA_Ability_Furion_Sprout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_SproutClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Furion_SproutClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Furion_Sprout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_SproutClass;
}


// CDOTA_Ability_Furion_Sprout::GetStolenActivityModifier  (line 88, @0x0000000002b904a0, libserver.so)
const char *__fastcall CDOTA_Ability_Furion_Sprout::GetStolenActivityModifier(CDOTA_Ability_Furion_Sprout *const this)
{
  return "sprout";
}


// CDOTA_Ability_Furion_Sprout::OnSpellStart  (line 97, @0x0000000002b77640, libserver.so)  // inlines: AddObstructionProperty, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, VectorAdd, operator+
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CreateTempTree, EconEntity_OnOwnerKillEaterEvent, CGridNav::ResolveNPCPositions, CDOTABaseAbility::GetLevelSpecialValueFor<int> (16 total)
// strings: "particles/units/heroes/hero_furion/furion_sprout.vpcf", "Hero_Furion.Sprout"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Furion_Sprout::OnSpellStart(CDOTA_Ability_Furion_Sprout *const this)
{
  __m128i v2; // xmm0
  float v3; // r14d
  CDOTA_BaseNPC *CursorTarget; // rax
  CBaseEntity *v5; // rax
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  int v11; // esi
  __int64 v12; // rbx
  float v13; // xmm2_4
  float v14; // xmm0_4
  CDOTA_TempTree *TempTree; // rax
  ObstructionRecord_t *m_pObstructionRecord; // rcx
  int m_nObstructionProperties; // edx
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC_Hero *v19; // rdi
  __int64 v20; // rbx
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm0_4
  int LevelSpecialValue; // ebx
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  Vector vTargetPos; // [rsp+0h] [rbp-80h] BYREF
  Vector vTreePos; // [rsp+10h] [rbp-70h]
  float dx_0[8]; // [rsp+20h] [rbp-60h]
  float dy[8]; // [rsp+40h] [rbp-40h]

  *v2.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget == 0 || !CursorTarget->m_bIsDOTANPC || !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
    {
      v5 = CDOTABaseAbility::GetCursorTarget(this);
      vTargetPos = *CBaseEntity::GetAbsOrigin(v5);
    }
    else
    {
      vTargetPos = CDOTABaseAbility::GetCursorPosition(this);
    }
    *&dx_0[2] = 0x42D421CD00000000LL;
    *&dx_0[6] = 0xC2D421CD00000000LL;
    *dy = 0x42D421CD00000000LL;
    *&dy[4] = 0xC2D421CD00000000LL;
    dx_0[4] = 150.0;
    dx_0[5] = 106.06602;
    dx_0[0] = -150.0;
    dx_0[1] = -106.06602;
    dy[2] = 150.0;
    dy[3] = 106.06602;
    dy[6] = -150.0;
    dy[7] = -106.06602;
    Caster = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                        ParticleManager,
                        "particles/units/heroes/hero_furion/furion_sprout.vpcf",
                        2,
                        0,
                        0,
                        Caster);
    v8 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v8, Caster, 0, *&vTargetPos.x, vTargetPos.z);
    v9 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v9, Caster, 1, 1.548112371908608e15, 0.0);
    v10 = GetParticleManager();
    v11 = Caster;
    v12 = 0;
    CDOTA_ParticleManager::ReleaseParticleIndex(v10, v11);
    v13 = -150.0;
    v14 = 0.0;
    while ( 1 )
    {
      vTreePos.y = v14 + vTargetPos.y;
      vTreePos.x = v13 + vTargetPos.x;
      vTreePos.z = vTargetPos.z + 0.0;
      TempTree = CreateTempTree(0, *&vTreePos.x, vTargetPos.z + 0.0, v3, *&vTargetPos.x, vTargetPos.z);
      if ( TempTree != 0 )
      {
        m_nObstructionProperties = TempTree->m_nObstructionProperties;
        m_pObstructionRecord = TempTree->m_pObstructionRecord;
        BYTE1(m_nObstructionProperties) |= 8u;
        TempTree->m_nObstructionProperties = m_nObstructionProperties;
        if ( m_pObstructionRecord != 0 )
          m_pObstructionRecord->m_ObjectProperties = m_nObstructionProperties;
      }
      if ( ++v12 == 8 )
        break;
      v14 = dy[v12];
      v13 = dx_0[v12];
    }
    v18 = CDOTABaseAbility::GetCaster(this);
    if ( v18 != 0 && (v18->m_iUnitType & 1) != 0 )
      v19 = v18;
    else
      v19 = 0;
    v20 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v19,
      0,
      kill_eater_event_t::kKillEaterEvent_Trees_Created,
      8,
      INVALID_ITEM_DEF_INDEX);
    v22 = -150.0;
    v23 = 0.0;
    while ( 1 )
    {
      ++v20;
      vTreePos.y = v23 + vTargetPos.y;
      vTreePos.x = v22 + vTargetPos.x;
      vTreePos.z = vTargetPos.z + 0.0;
      CGridNav::ResolveNPCPositions(
        &g_GridNav,
        1,
        *&vTreePos.x,
        COERCE_DOUBLE(COERCE_UNSIGNED_INT(vTargetPos.z + 0.0)),
        80.0,
        v21);
      if ( v20 == 8 )
        break;
      v23 = dy[v20];
      v22 = dx_0[v20];
    }
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "vision_range", -1, 0);
    v25 = CDOTABaseAbility::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_SPROUT,
      v25->m_iTeamNum.m_Value,
      &vTargetPos,
      LevelSpecialValue,
      v3,
      0);
    v26 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSoundLocationWithCaster(&vTargetPos, "Hero_Furion.Sprout", v26);
  }
}


// CDOTA_Ability_Furion_Sprout::GetSlowDuration  (line 159, @0x0000000002b75870, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Furion_Sprout::GetSlowDuration(CDOTA_Ability_Furion_Sprout *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Ability_Furion_Teleportation::~CDOTA_Ability_Furion_Teleportation  (line 170, @0x0000000002ba1300, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Furion_Teleportation::~CDOTA_Ability_Furion_Teleportation(
        CDOTA_Ability_Furion_Teleportation *const this)
{
  this->_vptr_IHandleEntity = &off_44E3110;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Furion_Teleportation::~CDOTA_Ability_Furion_Teleportation  (line 170, @0x0000000002ba1320, libserver.so)  // inlines: ~CDOTA_Ability_Furion_Teleportation
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Furion_Teleportation::~CDOTA_Ability_Furion_Teleportation(
        CDOTA_Ability_Furion_Teleportation *const this)
{
  this->_vptr_IHandleEntity = &off_44E3110;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Furion_Teleportation::Schema_DynamicBinding  (line 172, @0x0000000002b904b0, libserver.so)
// globals: CDOTA_Ability_Furion_Teleportation::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Furion_Teleportation::Schema_DynamicBinding(
        const CDOTA_Ability_Furion_Teleportation *const this)
{
  return CDOTA_Ability_Furion_Teleportation::s_pSchemaBinding;
}


// CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 172, @0x0000000002b904c0, libserver.so)
// globals: CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::DestructInstance  (line 172, @0x0000000002b904d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Furion_Teleportation>
void __fastcall CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::FreeInstance  (line 172, @0x0000000002b904f0, libserver.so)
void __fastcall CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::CanAllocate  (line 172, @0x0000000002b90510, libserver.so)
bool __fastcall CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 172, @0x0000000002b90520, libserver.so)
// globals: CDOTA_Ability_Furion_Teleportation::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Furion_Teleportation::s_pSchemaBinding;
}


// CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::AllocateInstance  (line 172, @0x0000000002b97ca0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::ConstructInstance  (line 172, @0x0000000002b9d3b0, libserver.so)  // inlines: CDOTA_Ability_Furion_Teleportation, Construct<CDOTA_Ability_Furion_Teleportation>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44E3110;
  }
  return p;
}


// CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 172, @0x0000000002baab10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 172, @0x0000000002baab30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Furion_Teleportation::GetEntityClassInternal  (line 172, @0x0000000002bc8ed0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "furion_teleportation", "CDOTA_Ability_Furion_Teleportation"
// globals: `guard variable for'CDOTA_Ability_Furion_Teleportation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_TeleportationClass, CDOTA_Ability_Furion_Teleportation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_TeleportationClass, __dso_handle, CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Furion_Teleportation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_TeleportationClassInfo, CDOTA_Ability_Furion_Teleportation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_TeleportationClassInfo
CEntityClass *__cdecl CDOTA_Ability_Furion_Teleportation::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Furion_Teleportation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_TeleportationClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Furion_Teleportation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_TeleportationClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Furion_Teleportation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_TeleportationClass);
    CDOTA_Ability_Furion_Teleportation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_TeleportationClass._vptr_CEntityClass = off_44E3090;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Furion_Teleportation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_TeleportationClass);
    __cxa_atexit(
      CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Furion_Teleportation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_TeleportationClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Furion_TeleportationClass != 0 )
    return &CDOTA_Ability_Furion_Teleportation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_TeleportationClass;
  if ( `guard variable for'CDOTA_Ability_Furion_Teleportation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_TeleportationClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Furion_Teleportation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_TeleportationClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Furion_Teleportation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_TeleportationClassInfo,
      "CDOTA_Ability_Furion_Teleportation",
      "furion_teleportation",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Furion_Teleportation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_TeleportationClassInfo);
  }
  CDOTA_Ability_Furion_Teleportation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_TeleportationClass.m_pClassInfo = &CDOTA_Ability_Furion_Teleportation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_TeleportationClassInfo;
  CDOTA_Ability_Furion_Teleportation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_TeleportationClass.m_pBaseClassInfo = CDOTA_Ability_Furion_Teleportation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_TeleportationClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Furion_TeleportationClass = &CDOTA_Ability_Furion_Teleportation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_TeleportationClass;
  CDOTA_Ability_Furion_Teleportation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_TeleportationClassInfo.m_pClass = &CDOTA_Ability_Furion_Teleportation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_TeleportationClass;
  CDOTA_Ability_Furion_Teleportation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_TeleportationClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Furion_TeleportationClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Furion_Teleportation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_TeleportationClass;
}


// CDOTA_Ability_Furion_Teleportation::AbilitySuppressesTaunt  (line 184, @0x0000000002b90530, libserver.so)
bool __fastcall CDOTA_Ability_Furion_Teleportation::AbilitySuppressesTaunt(
        CDOTA_Ability_Furion_Teleportation *const this)
{
  return 0;
}


// CDOTA_Ability_Furion_Teleportation::GetStolenActivityModifier  (line 192, @0x0000000002b90540, libserver.so)
const char *__fastcall CDOTA_Ability_Furion_Teleportation::GetStolenActivityModifier(
        CDOTA_Ability_Furion_Teleportation *const this)
{
  return "teleport";
}


// CDOTA_Ability_Furion_Teleportation::YouForgotToImplementOrDeclareServerClass  (line 200, @0x0000000002b35390, libserver.so)
int __fastcall CDOTA_Ability_Furion_Teleportation::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Furion_Teleportation *const this)
{
  return 0;
}


// CDOTA_Ability_Furion_Teleportation::GetServerClass  (line 200, @0x0000000002b4c9e0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Furion_Teleportation::GetServerClass(
        CDOTA_Ability_Furion_Teleportation *const this)
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


// CDOTA_Ability_Furion_Teleportation::OnAbilityPhaseStart  (line 225, @0x0000000002b43010, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, GetTeamNumber, SetBool, Vector, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTABaseAbility::GetCursorPosition, CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CDOTA_BaseNPC::GetOpposingTeamNumber (23 total)
// strings: "particles/units/heroes/hero_furion/furion_teleport.vpcf", "particles/units/heroes/hero_furion/furion_teleport_end.vpcf", "particles/units/heroes/hero_furion/furion_teleport_end_team.vpcf", "start_x", "start_y", "start_z" (18 total)
bool __fastcall CDOTA_Ability_Furion_Teleportation::OnAbilityPhaseStart(CDOTA_Ability_Furion_Teleportation *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rax
  const Vector *v7; // r12
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CTeam *GlobalTeam; // rax
  CTeam *v12; // rax
  CDOTA_BaseNPC *v13; // r13
  CDOTA_ParticleManager *v14; // rax
  int v15; // eax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  int OpposingTeamNumber; // eax
  CTeam *v20; // rax
  CTeam *v21; // rax
  CDOTA_BaseNPC *v22; // r14
  CDOTA_ParticleManager *v23; // rax
  int v24; // eax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  int v27; // r15d
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  float v30; // xmm1_4
  CDOTA_BaseNPC *v31; // rax
  float v32; // xmm1_4
  CDOTA_BaseNPC *v33; // rax
  float v34; // xmm1_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  float v37; // xmm1_4
  float v38; // xmm1_4
  float v39; // xmm1_4
  CDOTA_BaseNPC *v40; // r15
  CDOTA_BaseNPC *v41; // rax
  CDOTA_BaseNPC *pEventEntity; // [rsp+8h] [rbp-308h]
  KeyValues kv; // [rsp+40h] [rbp-2D0h] BYREF
  CReliableBroadcastRecipientFilter filterEnemy; // [rsp+60h] [rbp-2B0h] BYREF
  CReliableBroadcastRecipientFilter filterTeam; // [rsp+1A0h] [rbp-170h] BYREF
  unsigned __int64 v47; // [rsp+2D8h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12

  v47 = __readfsqword(0x28u);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  this->m_nFXIndexStart = CDOTA_ParticleManager::CreateParticle(
                            ParticleManager,
                            "particles/units/heroes/hero_furion/furion_teleport.vpcf",
                            2,
                            v3,
                            0,
                            Caster);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  LODWORD(Caster) = this->m_nFXIndexStart;
  v7 = AbsOrigin;
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v8, Caster, 0, *&v7->x, v7->z);
  LODWORD(v7) = this->m_nFXIndexStart;
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v9, v7, 2, COERCE_DOUBLE(1065353216), 0.0);
  CRecipientFilter::CRecipientFilter(&filterEnemy);
  filterEnemy._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filterEnemy);
  filterEnemy._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filterEnemy);
  v10 = CDOTABaseAbility::GetCaster(this);
  GlobalTeam = GetGlobalTeam(v10->m_iTeamNum.m_Value);
  CRecipientFilter::RemoveRecipientsByTeam(&filterEnemy, GlobalTeam);
  v12 = GetGlobalTeam(1);
  CRecipientFilter::RemoveRecipientsByTeam(&filterEnemy, v12);
  v13 = CDOTABaseAbility::GetCaster(this);
  v14 = GetParticleManager();
  v15 = CDOTA_ParticleManager::CreateParticle(
          v14,
          "particles/units/heroes/hero_furion/furion_teleport_end.vpcf",
          2,
          0,
          &filterEnemy,
          v13);
  this->m_nFXIndexEnd = v15;
  LODWORD(v13) = v15;
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v16, v13, 1, *&CursorPosition.x, CursorPosition.z);
  LODWORD(v13) = this->m_nFXIndexEnd;
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v17, v13, 2, COERCE_DOUBLE(1065353216), 0.0);
  CRecipientFilter::CRecipientFilter(&filterTeam);
  filterTeam._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filterTeam);
  filterTeam._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filterTeam);
  v18 = CDOTABaseAbility::GetCaster(this);
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v18);
  v20 = GetGlobalTeam(OpposingTeamNumber);
  CRecipientFilter::RemoveRecipientsByTeam(&filterTeam, v20);
  v21 = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filterTeam, v21);
  v22 = CDOTABaseAbility::GetCaster(this);
  v23 = GetParticleManager();
  v24 = CDOTA_ParticleManager::CreateParticle(
          v23,
          "particles/units/heroes/hero_furion/furion_teleport_end_team.vpcf",
          2,
          0,
          &filterTeam,
          v22);
  this->m_nFXIndexEndTeam = v24;
  LODWORD(v22) = v24;
  v25 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v25, v22, 1, *&CursorPosition.x, CursorPosition.z);
  LODWORD(v22) = this->m_nFXIndexEndTeam;
  v26 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v26, v22, 2, COERCE_DOUBLE(1065353216), 0.0);
  v27 = (*(this->_vptr_IHandleEntity + 232))(this);
  pEventEntity = CDOTABaseAbility::GetCaster(this);
  v28 = CDOTABaseAbility::GetCaster(this);
  MinimapEvent(v28->m_iTeamNum.m_Value, pEventEntity, CursorPosition.x, CursorPosition.y, 32, v27);
  KeyValues::KeyValues(&kv, "teleporting");
  v29 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::GetAbsOrigin(v29);
  KeyValues::SetFloat(&kv, "start_x", v30);
  v31 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::GetAbsOrigin(v31);
  KeyValues::SetFloat(&kv, "start_y", v32);
  v33 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::GetAbsOrigin(v33);
  KeyValues::SetFloat(&kv, "start_z", v34);
  KeyValues::SetFloat(&kv, "end_x", v35);
  KeyValues::SetFloat(&kv, "end_y", v36);
  KeyValues::SetFloat(&kv, "end_z", v37);
  (*(this->_vptr_IHandleEntity + 232))(this);
  KeyValues::SetFloat(&kv, "channel_time", v38);
  (*(this->_vptr_IHandleEntity + 232))(this);
  KeyValues::SetFloat(&kv, "duration", v39);
  KeyValues::SetString(&kv, "loop_appear_sound", "Hero_Furion.Teleport_Grow");
  KeyValues::SetString(&kv, "loop_disappear_sound", "Hero_Furion.Teleport_Grow");
  KeyValues::SetString(&kv, "hero_appear_sound", "Hero_Furion.Teleport_Appear");
  KeyValues::SetString(&kv, "hero_disappear_sound", "Hero_Furion.Teleport_Disappear");
  if ( this->m_bStolen.m_Value )
    KeyValues::SetInt(&kv, "skip_teleport_gesture", 1);
  v40 = CDOTABaseAbility::GetCaster(this);
  v41 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v41, v40, this, "modifier_teleporting", &kv, 0);
  KeyValues::~KeyValues(&kv);
  filterTeam._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filterTeam);
  filterEnemy._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filterEnemy);
  return 1;
}


// CDOTA_Ability_Furion_Teleportation::OnSpellStart  (line 281, @0x0000000002b3b020, libserver.so)  // inlines: CEntityHandle, CHandle, ClearAlertTarget, GetEHandle, GetEntryIndex, GetSerialNumber, GetTeamNumber, Set, operator=
// calls: CDOTABaseAbility::GetCaster, CDOTAGamerules::GetFountain, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorTargetingNothing, CDOTA_ProjectileManager::ProjectileDodge, FindClearSpaceForUnit, DOTAHLTVDirector, CDOTAHLTVDirector::TryToGenerateTeleportEvent, CDOTA_BaseNPC::StartGesture, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetCursorPosition
void __fastcall CDOTA_Ability_Furion_Teleportation::OnSpellStart(CDOTA_Ability_Furion_Teleportation *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *Fountain; // rax
  const Vector *AbsOrigin; // rax
  __int64 v5; // rdx
  CDOTA_BaseNPC *v6; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v8; // cx
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CEntityIdentity *v11; // rdx
  int v12; // eax
  __int16 v13; // cx
  CDOTAHLTVDirector *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  int m_nFXIndexStart; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int m_nFXIndexEnd; // r12d
  CDOTA_ParticleManager *v19; // rax
  int m_nFXIndexEndTeam; // ebx
  CDOTA_ParticleManager *v21; // rax
  EHANDLE hTarget; // [rsp+0h] [rbp-40h] BYREF
  Vector vecFountainPosition; // [rsp+10h] [rbp-30h]
  Vector vRequestedPosition; // [rsp+20h] [rbp-20h]

  Caster = CDOTABaseAbility::GetCaster(this);
  Fountain = CDOTAGamerules::GetFountain(g_pGameRules, Caster->m_iTeamNum.m_Value);
  if ( Fountain != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(Fountain);
    v5 = *&AbsOrigin->x;
    *&AbsOrigin = AbsOrigin->z;
    *&vecFountainPosition.x = v5;
    LODWORD(vecFountainPosition.z) = AbsOrigin;
  }
  else
  {
    vecFountainPosition = CDOTABaseAbility::GetCursorPosition(this);
  }
  if ( CDOTABaseAbility::GetCursorTargetingNothing(this) )
    vRequestedPosition = vecFountainPosition;
  else
    vRequestedPosition = CDOTABaseAbility::GetCursorPosition(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  hTarget.m_Index = -1;
  if ( v6 != 0 )
  {
    m_pEntity = v6->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v8 & 0x7FFF;
    }
  }
  CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
  v9 = CDOTABaseAbility::GetCaster(this);
  FindClearSpaceForUnit(v9, vRequestedPosition, 1);
  v10 = CDOTABaseAbility::GetCaster(this);
  hTarget.m_Index = -1;
  if ( v10 != 0 )
  {
    v11 = v10->m_pEntity;
    if ( v11 != 0 )
    {
      v12 = (v11->m_EHandle.m_Index >> 15) - (v11->m_flags & 1);
      v13 = 0x7FFF;
      if ( v11->m_EHandle.m_Index != -1 )
        v13 = v11->m_EHandle.m_Index & 0x7FFF;
      LOWORD(hTarget.m_Index) = v13 | hTarget.m_Index & 0x8000;
      hTarget.m_Index = (v12 << 15) | hTarget.m_Index & 0x7FFF;
    }
  }
  v14 = DOTAHLTVDirector();
  CDOTAHLTVDirector::TryToGenerateTeleportEvent(v14, &hTarget);
  CDOTABaseAbility::GetCaster(this)->m_hAlertTarget.m_Index = -1;
  v15 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v15, 1596, 0.0, 0.1, 9, 0, 1.0);
  m_nFXIndexStart = this->m_nFXIndexStart;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndexStart, 0);
  m_nFXIndexEnd = this->m_nFXIndexEnd;
  v19 = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(v19, m_nFXIndexEnd, 0);
  m_nFXIndexEndTeam = this->m_nFXIndexEndTeam;
  v21 = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(v21, m_nFXIndexEndTeam, 0);
}


// CDOTA_Ability_Furion_Teleportation::OnAbilityPhaseInterrupted  (line 308, @0x0000000002b3ae90, libserver.so)  // inlines: GetTeamNumber, Vector
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FadeGesture, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::DestroyParticleEffect, MinimapEvent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy
// strings: "modifier_teleporting"
void __fastcall CDOTA_Ability_Furion_Teleportation::OnAbilityPhaseInterrupted(
        CDOTA_Ability_Furion_Teleportation *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int m_nFXIndexStart; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int v5; // r12d
  CDOTA_ParticleManager *v6; // rax
  int m_nFXIndexEnd; // r12d
  CDOTA_ParticleManager *v8; // rax
  int v9; // r12d
  CDOTA_ParticleManager *v10; // rax
  int m_nFXIndexEndTeam; // r12d
  CDOTA_ParticleManager *v12; // rax
  int v13; // r12d
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // r12
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_Buff *ModifierByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::FadeGesture(Caster, 1595);
  m_nFXIndexStart = this->m_nFXIndexStart;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nFXIndexStart, 2, 0.0, 0.0);
  v5 = this->m_nFXIndexStart;
  v6 = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(v6, v5, 0);
  m_nFXIndexEnd = this->m_nFXIndexEnd;
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v8, m_nFXIndexEnd, 2, 0.0, 0.0);
  v9 = this->m_nFXIndexEnd;
  v10 = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(v10, v9, 0);
  m_nFXIndexEndTeam = this->m_nFXIndexEndTeam;
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v12, m_nFXIndexEndTeam, 2, 0.0, 0.0);
  v13 = this->m_nFXIndexEndTeam;
  v14 = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(v14, v13, 0);
  v15 = CDOTABaseAbility::GetCaster(this);
  v16 = CDOTABaseAbility::GetCaster(this);
  MinimapEvent(v16->m_iTeamNum.m_Value, v15, 0, 0, 2048, 0);
  v17 = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v17, "modifier_teleporting", 0);
  if ( ModifierByName != 0 )
    CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
}


// CDOTA_Ability_Furion_Teleportation::CastFilterResult  (line 331, @0x0000000002b3b260, libserver.so)  // inlines: GetTeamMapping, GetTeamNumber
// calls: CDOTABaseAbility::GetCaster, FoW_TeamNumberToFoWIndex, CDOTAFogOfWarSystem::GetFoW, CFoW::GetLocationInfo, IsUnexplored
int __fastcall CDOTA_Ability_Furion_Teleportation::CastFilterResult(
        CDOTA_Ability_Furion_Teleportation *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v4; // ebx
  CFoW *FoW; // rax
  uint32 LocationInfo; // eax

  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = FoW_TeamNumberToFoWIndex(Caster->m_iTeamNum.m_Value);
  FoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, 0);
  LocationInfo = CFoW::GetLocationInfo(FoW, v4, vLocation);
  return IsUnexplored(LocationInfo) ? 0x17 : 0;
}


// CDOTA_Ability_Furion_Teleportation::GetCustomCastError  (line 346, @0x0000000002b353a0, libserver.so)
// strings: "#dota_hud_error_cant_target_unexplored"
const char *__fastcall CDOTA_Ability_Furion_Teleportation::GetCustomCastError(
        CDOTA_Ability_Furion_Teleportation *const this,
        const Vector *const vLocation)
{
  return "#dota_hud_error_cant_target_unexplored";
}


// CDOTA_Ability_Furion_ForceOfNature::~CDOTA_Ability_Furion_ForceOfNature  (line 357, @0x0000000002ba1350, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Furion_ForceOfNature::~CDOTA_Ability_Furion_ForceOfNature(
        CDOTA_Ability_Furion_ForceOfNature *const this)
{
  this->_vptr_IHandleEntity = &off_44E3C10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Furion_ForceOfNature::~CDOTA_Ability_Furion_ForceOfNature  (line 357, @0x0000000002ba1370, libserver.so)  // inlines: ~CDOTA_Ability_Furion_ForceOfNature
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Furion_ForceOfNature::~CDOTA_Ability_Furion_ForceOfNature(
        CDOTA_Ability_Furion_ForceOfNature *const this)
{
  this->_vptr_IHandleEntity = &off_44E3C10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Furion_ForceOfNature::Schema_DynamicBinding  (line 359, @0x0000000002b90550, libserver.so)
// globals: CDOTA_Ability_Furion_ForceOfNature::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Furion_ForceOfNature::Schema_DynamicBinding(
        const CDOTA_Ability_Furion_ForceOfNature *const this)
{
  return CDOTA_Ability_Furion_ForceOfNature::s_pSchemaBinding;
}


// CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 359, @0x0000000002b90560, libserver.so)
// globals: CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::DestructInstance  (line 359, @0x0000000002b90570, libserver.so)  // inlines: Destruct<CDOTA_Ability_Furion_ForceOfNature>
void __fastcall CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::FreeInstance  (line 359, @0x0000000002b90590, libserver.so)
void __fastcall CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::CanAllocate  (line 359, @0x0000000002b905b0, libserver.so)
bool __fastcall CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 359, @0x0000000002b905c0, libserver.so)
// globals: CDOTA_Ability_Furion_ForceOfNature::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Furion_ForceOfNature::s_pSchemaBinding;
}


// CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::AllocateInstance  (line 359, @0x0000000002b97ce0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::ConstructInstance  (line 359, @0x0000000002b9d3e0, libserver.so)  // inlines: CDOTA_Ability_Furion_ForceOfNature, Construct<CDOTA_Ability_Furion_ForceOfNature>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44E3C10;
  }
  return p;
}


// CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 359, @0x0000000002baab60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 359, @0x0000000002baab80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInternal  (line 359, @0x0000000002bc9020, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "furion_force_of_nature", "CDOTA_Ability_Furion_ForceOfNature"
// globals: `guard variable for'CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClass, CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClass, __dso_handle, CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClassInfo, CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClassInfo
CEntityClass *__cdecl CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClass);
    CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClass._vptr_CEntityClass = off_44E3B90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClass);
    __cxa_atexit(
      CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Furion_ForceOfNatureClass != 0 )
    return &CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClass;
  if ( `guard variable for'CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClassInfo,
      "CDOTA_Ability_Furion_ForceOfNature",
      "furion_force_of_nature",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClassInfo);
  }
  CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClass.m_pClassInfo = &CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClassInfo;
  CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClass.m_pBaseClassInfo = CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Furion_ForceOfNatureClass = &CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClass;
  CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClassInfo.m_pClass = &CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClass;
  CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Furion_ForceOfNatureClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Furion_ForceOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_ForceOfNatureClass;
}


// CDOTA_Ability_Furion_ForceOfNature::GetStolenActivityModifier  (line 376, @0x0000000002b905d0, libserver.so)
// strings: "summon"
const char *__fastcall CDOTA_Ability_Furion_ForceOfNature::GetStolenActivityModifier(
        CDOTA_Ability_Furion_ForceOfNature *const this)
{
  return "summon";
}


// CDOTA_Ability_Furion_ForceOfNature::IsHiddenWhenStolen  (line 378, @0x0000000002b905e0, libserver.so)
bool __fastcall CDOTA_Ability_Furion_ForceOfNature::IsHiddenWhenStolen(CDOTA_Ability_Furion_ForceOfNature *const this)
{
  return 1;
}


// CDOTA_Ability_Furion_ForceOfNature::ShouldSpeakAbilityConcept  (line 382, @0x0000000002b905f0, libserver.so)
bool __fastcall CDOTA_Ability_Furion_ForceOfNature::ShouldSpeakAbilityConcept(
        CDOTA_Ability_Furion_ForceOfNature *const this,
        int iConcept)
{
  return 0;
}


// CDOTA_Ability_Furion_ForceOfNature::YouForgotToImplementOrDeclareServerClass  (line 385, @0x0000000002b353b0, libserver.so)
int __fastcall CDOTA_Ability_Furion_ForceOfNature::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Furion_ForceOfNature *const this)
{
  return 0;
}


// CDOTA_Ability_Furion_ForceOfNature::GetServerClass  (line 385, @0x0000000002b4cde0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Furion_ForceOfNature::GetServerClass(
        CDOTA_Ability_Furion_ForceOfNature *const this)
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


// CDOTA_Ability_Furion_ForceOfNature::CastFilterResult  (line 394, @0x0000000002b6c000, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetLevelSpecialValueFor<int>, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CGridNav::GetStandingTreesAroundPoint, CDOTABaseAbility::CastFilterResult, CUtlMemory<CDOTA_Tree*, int>::Purge, CUtlVectorBase<CDOTA_Tree*, CUtlMemory<CDOTA_Tree*, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "area_of_effect"
int __fastcall CDOTA_Ability_Furion_ForceOfNature::CastFilterResult(
        CDOTA_Ability_Furion_ForceOfNature *const this,
        const Vector *const vLocation)
{
  int LevelSpecialValue; // eax
  int result; // eax
  int v6; // [rsp+Ch] [rbp-44h]
  CUtlVector<CDOTA_Tree*,CUtlMemory<CDOTA_Tree*,int> > trees; // [rsp+10h] [rbp-40h] BYREF
  Vector v8; // 0:xmm0_8.8,8:xmm1_4.4

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "area_of_effect", -1, 0);
  v8 = *vLocation;
  trees.m_Size = 0;
  trees.m_Memory.m_pMemory = 0;
  trees.m_Memory.m_nAllocationCount = 0;
  trees.m_Memory.m_nGrowSize = 0;
  CGridNav::GetStandingTreesAroundPoint(&g_GridNav, v8, LevelSpecialValue, 0, &trees);
  result = 23;
  if ( trees.m_Size != 0 )
  {
    result = CDOTABaseAbility::CastFilterResult(this, vLocation);
    trees.m_Size = 0;
    if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return result;
  }
  else
  {
    trees.m_Size = 0;
    if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return result;
  }
  v6 = result;
  CUtlMemory<CDOTA_Tree *,int>::Purge(&trees.m_Memory);
  result = v6;
  if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Tree *,int>::Purge(&trees.m_Memory);
    return v6;
  }
  return result;
}


// CDOTA_Ability_Furion_ForceOfNature::GetCustomCastError  (line 411, @0x0000000002b353c0, libserver.so)
// strings: "#dota_hud_error_must_target_tree"
const char *__fastcall CDOTA_Ability_Furion_ForceOfNature::GetCustomCastError(
        CDOTA_Ability_Furion_ForceOfNature *const this,
        const Vector *const vLocation)
{
  return "#dota_hud_error_must_target_tree";
}


// CDOTA_Ability_Furion_ForceOfNature::OnSpellStart  (line 418, @0x0000000002b7cfd0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetClassNameAsCStr, GetClassname, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, NetworkStateChanged, Purge, QueueConcept, RemoveAll, Set, SetUnitLabelIndex, String, ToDOTABaseNPCHero, Vector, entindex, operator=<int>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorPosition, CGridNav::GetStandingTreesAroundPoint, CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria (31 total)
// strings: "area_of_effect", "max_treants", "particles/units/heroes/hero_furion/furion_force_of_nature_cast.vpcf", "attach_staff_base", "abilityname", "npc_dota_furion_treant" (10 total)
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Furion_ForceOfNature::OnSpellStart(CDOTA_Ability_Furion_ForceOfNature *const this)
{
  int LevelSpecialValue; // r13d
  __m128i v3; // xmm3
  float v4; // r13d
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // r14
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdx
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v15; // rax
  unsigned int v16; // ebx
  float v17; // xmm3_4
  int v18; // r13d
  CDOTA_BaseNPC *v19; // rbx
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rbx
  CDOTA_BaseNPC *v22; // rax
  int v23; // eax
  unsigned __int8 m_Data; // r15
  float v25; // xmm1_4
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC_Hero *v32; // rdi
  CDOTA_BaseNPC *v33; // rbx
  int nTreantsAllowed; // [rsp+28h] [rbp-F8h]
  int max_treants; // [rsp+2Ch] [rbp-F4h]
  Vector vOrigin; // [rsp+40h] [rbp-E0h] BYREF
  Vector CursorPosition; // [rsp+50h] [rbp-D0h]
  Vector v38; // [rsp+60h] [rbp-C0h]
  CUtlVector<CDOTA_Tree*,CUtlMemory<CDOTA_Tree*,int> > trees; // [rsp+70h] [rbp-B0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+90h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+D0h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+E8h] [rbp-38h]
  Vector v43; // 0:kr14_12.12

  v42 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "area_of_effect", -1, 0);
  max_treants = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_treants", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  *v3.m128i_i32 = LevelSpecialValue;
  trees.m_Size = 0;
  trees.m_Memory.m_pMemory = 0;
  trees.m_Memory.m_nAllocationCount = 0;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  trees.m_Memory.m_nGrowSize = 0;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  CGridNav::GetStandingTreesAroundPoint(&g_GridNav, CursorPosition, v4, 0, &trees);
  v43 = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_furion/furion_force_of_nature_cast.vpcf",
                      2,
                      Caster,
                      0,
                      0);
  v7 = CDOTABaseAbility::GetCaster(this);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v8, Caster, 0, v7, 5, "attach_staff_base", vec3_invalid, 1);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v9, Caster, 1, *&v43.x, v43.z);
  criteria._vptr_CResponseCriteriaSet = LODWORD(v4);
  LODWORD(criteria.m_Lookup.m_LessFunc) = 0;
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v10,
    Caster,
    2,
    *&criteria._vptr_CResponseCriteriaSet,
    *&criteria.m_Lookup.m_LessFunc);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v11, Caster);
  if ( trees.m_Size != 0 )
  {
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    m_pEntity = this->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    CResponseCriteriaSet::AppendCriteria(&criteria, "abilityname", m_pAsString, 1.0);
    if ( CDOTABaseAbility::GetCaster(this) != 0 )
    {
      m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::QueueConcept(m_pSpeech, 4, 0.5, &criteria, 3, 1, 0, 0, 0);
    }
    nTreantsAllowed = trees.m_Size;
    v15 = CDOTABaseAbility::GetCaster(this);
    v16 = (*(v15->_vptr_IHandleEntity + 414))(v15);
    v38 = CDOTABaseAbility::GetCursorPosition(this);
    CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v16, v38, v4, v17);
    v18 = 0;
    if ( nTreantsAllowed > 0 )
    {
      do
      {
        v19 = CDOTABaseAbility::GetCaster(this);
        v20 = CDOTABaseAbility::GetCaster(this);
        v21 = DOTA_Character_ScriptSpawn_Synchronous("npc_dota_furion_treant", v20->m_iTeamNum.m_Value, v19, 0, 0, v43);
        if ( v21 != 0 )
        {
          v22 = CDOTABaseAbility::GetCaster(this);
          v23 = (*(v22->_vptr_IHandleEntity + 414))(v22);
          CDOTA_BaseNPC::SetControllableByPlayer(v21, v23, 0);
          m_Data = CEntityInstance::GetEntityIndex(v21).m_Data;
          if ( m_Data != v21->m_nUnitLabelIndex.m_Value )
          {
            (*(v21->_vptr_IHandleEntity + 22))(v21, 3417, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            v21->m_nUnitLabelIndex.m_Value = m_Data;
          }
          FindClearSpaceForUnit(v21, v43, 1);
          KeyValues::KeyValues(&kv, "modifier_kill");
          KeyValues::SetFloat(&kv, "duration", v25);
          v26 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v21, v26, this, "modifier_kill", &kv, 0);
          v27 = CDOTABaseAbility::GetCaster(this);
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v27, "special_bonus_unique_furion", 0);
          if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
          {
            v29 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(v21, v29, this, "modifier_treant_bonus", &kv, 0);
          }
          KeyValues::~KeyValues(&kv);
        }
        ++v18;
      }
      while ( v18 < max_treants && v18 != nTreantsAllowed );
    }
    v30 = CDOTABaseAbility::GetCaster(this);
    CDOTA_CombatLog::AddUnitSummonedEvent(&g_DOTACombatLog, v30, this, "npc_dota_furion_treant", v18);
    v31 = CDOTABaseAbility::GetCaster(this);
    if ( v31 != 0 && (v31->m_iUnitType & 1) != 0 )
      v32 = v31;
    else
      v32 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v32,
      0,
      kill_eater_event_t::kKillEaterEvent_Treants_Created,
      v18,
      INVALID_ITEM_DEF_INDEX);
    v33 = CDOTABaseAbility::GetCaster(this);
    vOrigin = CDOTABaseAbility::GetCursorPosition(this);
    DOTA_EmitSoundLocationWithCaster(&vOrigin, "Hero_Furion.ForceOfNature", v33);
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    trees.m_Size = 0;
    if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_Tree *,int>::Purge(&trees.m_Memory);
      if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CDOTA_Tree *,int>::Purge(&trees.m_Memory);
    }
  }
  else
  {
    trees.m_Size = 0;
    if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_Tree *,int>::Purge(&trees.m_Memory);
      if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CDOTA_Tree *,int>::Purge(&trees.m_Memory);
    }
  }
}


// CDOTA_Ability_Furion_WrathOfNature::~CDOTA_Ability_Furion_WrathOfNature  (line 505, @0x0000000002ba13a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Furion_WrathOfNature::~CDOTA_Ability_Furion_WrathOfNature(
        CDOTA_Ability_Furion_WrathOfNature *const this)
{
  this->_vptr_IHandleEntity = &off_44E4710;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Furion_WrathOfNature::~CDOTA_Ability_Furion_WrathOfNature  (line 505, @0x0000000002ba13c0, libserver.so)  // inlines: ~CDOTA_Ability_Furion_WrathOfNature
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Furion_WrathOfNature::~CDOTA_Ability_Furion_WrathOfNature(
        CDOTA_Ability_Furion_WrathOfNature *const this)
{
  this->_vptr_IHandleEntity = &off_44E4710;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Furion_WrathOfNature::Schema_DynamicBinding  (line 507, @0x0000000002b90600, libserver.so)
// globals: CDOTA_Ability_Furion_WrathOfNature::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Furion_WrathOfNature::Schema_DynamicBinding(
        const CDOTA_Ability_Furion_WrathOfNature *const this)
{
  return CDOTA_Ability_Furion_WrathOfNature::s_pSchemaBinding;
}


// CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 507, @0x0000000002b90610, libserver.so)
// globals: CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::DestructInstance  (line 507, @0x0000000002b90620, libserver.so)  // inlines: Destruct<CDOTA_Ability_Furion_WrathOfNature>
void __fastcall CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::FreeInstance  (line 507, @0x0000000002b90640, libserver.so)
void __fastcall CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::CanAllocate  (line 507, @0x0000000002b90660, libserver.so)
bool __fastcall CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 507, @0x0000000002b90670, libserver.so)
// globals: CDOTA_Ability_Furion_WrathOfNature::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Furion_WrathOfNature::s_pSchemaBinding;
}


// CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::AllocateInstance  (line 507, @0x0000000002b97d20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::ConstructInstance  (line 507, @0x0000000002b9d410, libserver.so)  // inlines: CDOTA_Ability_Furion_WrathOfNature, Construct<CDOTA_Ability_Furion_WrathOfNature>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44E4710;
  }
  return p;
}


// CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 507, @0x0000000002baabb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 507, @0x0000000002baabd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInternal  (line 507, @0x0000000002bc9170, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "furion_wrath_of_nature", "CDOTA_Ability_Furion_WrathOfNature"
// globals: `guard variable for'CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClass, CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClass, __dso_handle, CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClassInfo, CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClassInfo
CEntityClass *__cdecl CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClass);
    CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClass._vptr_CEntityClass = off_44E4690;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClass);
    __cxa_atexit(
      CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Furion_WrathOfNatureClass != 0 )
    return &CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClass;
  if ( `guard variable for'CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClassInfo,
      "CDOTA_Ability_Furion_WrathOfNature",
      "furion_wrath_of_nature",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClassInfo);
  }
  CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClass.m_pClassInfo = &CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClassInfo;
  CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClass.m_pBaseClassInfo = CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Furion_WrathOfNatureClass = &CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClass;
  CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClassInfo.m_pClass = &CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClass;
  CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Furion_WrathOfNatureClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Furion_WrathOfNature::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Furion_WrathOfNatureClass;
}


// CDOTA_Ability_Furion_WrathOfNature::GetStolenActivityModifier  (line 513, @0x0000000002b90680, libserver.so)
const char *__fastcall CDOTA_Ability_Furion_WrathOfNature::GetStolenActivityModifier(
        CDOTA_Ability_Furion_WrathOfNature *const this)
{
  return "wrath";
}


// CDOTA_Ability_Furion_WrathOfNature::GetAssociatedSecondaryAbilities  (line 515, @0x0000000002b90690, libserver.so)
// strings: "furion_force_of_nature"
const char *__fastcall CDOTA_Ability_Furion_WrathOfNature::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Furion_WrathOfNature *const this)
{
  return "furion_force_of_nature";
}


// CDOTA_Ability_Furion_WrathOfNature::OnAbilityPhaseStart  (line 524, @0x0000000002b36cc0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_furion/furion_wrath_of_nature_cast.vpcf", "attach_attack1"
bool __fastcall CDOTA_Ability_Furion_WrathOfNature::OnAbilityPhaseStart(CDOTA_Ability_Furion_WrathOfNature *const this)
{
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTA_ParticleManager *v5; // rax
  CDOTA_ParticleManager *v6; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_furion/furion_wrath_of_nature_cast.vpcf",
                      1,
                      Caster,
                      0,
                      0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v5, Caster, 1, v4, 5, "attach_attack1", vec3_invalid, 0);
  v6 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v6, Caster);
  return 1;
}


// CDOTA_Ability_Furion_WrathOfNature::OnSpellStart  (line 537, @0x0000000002b39da0, libserver.so)  // inlines: GetTeamNumber, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCursorPosition, KeyValues::KeyValues, KeyValues::SetPtr, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, DOTA_EmitSound, Thinker_Create, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_furion_wrath_of_nature_thinker", "Hero_Furion.WrathOfNature_Cast.Self", "Hero_Furion.WrathOfNature_Cast"
void __fastcall CDOTA_Ability_Furion_WrathOfNature::OnSpellStart(CDOTA_Ability_Furion_WrathOfNature *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // r13
  float v4; // xmm1_4
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // rax
  int m_Value; // r13d
  CDOTA_BaseNPC *v9; // rax
  KeyValues kv; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-28h]
  Vector CursorPosition; // 0:kr14_12.12

  v11 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
    v3 = CursorTarget;
  else
    v3 = 0;
  CDOTABaseAbility::GetCursorPosition(this);
  KeyValues::KeyValues(&kv, "modifier_furion_wrath_of_nature_thinker");
  KeyValues::SetPtr(&kv, "target", v3);
  KeyValues::SetFloat(&kv, "x", v4);
  KeyValues::SetFloat(&kv, "y", v5);
  Caster = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(1, "Hero_Furion.WrathOfNature_Cast.Self", Caster);
  v7 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(24, "Hero_Furion.WrathOfNature_Cast", v7);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v9 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v9, this, "modifier_furion_wrath_of_nature_thinker", &kv, CursorPosition, m_Value, 0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Furion_WrathOfNature::GetAbilityDamageToTargetOverInterval  (line 558, @0x0000000002b6a140, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Furion_WrathOfNature::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Furion_WrathOfNature *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  const char *v9; // rsi
  int LevelSpecialValue; // ebx

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
    v9 = "damage_scepter";
    if ( !HasScepter )
      v9 = "damage";
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, v9, -1, 0);
    return ((LevelSpecialValue * 1.7) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Furion_WrathOfNature_Thinker::~CDOTA_Modifier_Furion_WrathOfNature_Thinker  (line 570, @0x0000000002bc3b00, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Furion_WrathOfNature_Thinker::~CDOTA_Modifier_Furion_WrathOfNature_Thinker(
        CDOTA_Modifier_Furion_WrathOfNature_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_44E51D0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitTargets);
  if ( (this->m_hHitTargets.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitTargets.m_Memory),
        (this->m_hHitTargets.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitTargets.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Furion_WrathOfNature_Thinker::~CDOTA_Modifier_Furion_WrathOfNature_Thinker  (line 570, @0x0000000002bc3f60, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Furion_WrathOfNature_Thinker, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Furion_WrathOfNature_Thinker::~CDOTA_Modifier_Furion_WrathOfNature_Thinker(
        CDOTA_Modifier_Furion_WrathOfNature_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_44E51D0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitTargets);
  if ( (this->m_hHitTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitTargets.m_Memory);
    if ( (this->m_hHitTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitTargets.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Furion_WrathOfNature_Thinker::IsHidden  (line 575, @0x0000000002b906a0, libserver.so)
bool __fastcall CDOTA_Modifier_Furion_WrathOfNature_Thinker::IsHidden(
        CDOTA_Modifier_Furion_WrathOfNature_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Furion_WrathOfNature_Thinker::OnCreated  (line 610, @0x0000000002b83240, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, FastRSqrt, FastRSqrtFast, FastSqrt, GetGameTime, GetLevelSpecialValueFor<float>, Length, ToDOTABaseNPC, Vector, VectorLength, VectorNormalizeFast, VectorSubtract, _mm_load_ss, _mm_rsqrt_ss, _mm_set_ss, _mm_sqrt_ss, operator*=, operator+=, operator-, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::GetPtr, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTA_Buff::Destroy, KeyValues::GetFloat, CDOTA_Buff::GetParent, CBaseEntity::SetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin (22 total)
// strings: "max_targets", "damage_percent_add", "jump_delay", "scepter_buffer", "particles/units/heroes/hero_furion/furion_wrath_of_nature_start.vpcf", "particles/units/heroes/hero_furion/furion_wrath_of_nature.vpcf"
void __fastcall CDOTA_Modifier_Furion_WrathOfNature_Thinker::OnCreated(
        CDOTA_Modifier_Furion_WrathOfNature_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTA_BaseNPC *Ptr; // rax
  float v11; // xmm1_4
  CDOTA_BaseNPC *NextTarget; // r12
  CDOTABaseAbility *v13; // rax
  __m128i v14; // xmm0
  float v15; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *v19; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  const Vector *v24; // rax
  const Vector *v25; // rax
  float v26; // xmm6_4
  float v27; // xmm5_4
  float v28; // xmm4_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  const Vector *v31; // rax
  float v32; // xmm7_4
  float v33; // xmm8_4
  float v34; // xmm9_4
  float v35; // xmm4_4
  float v36; // xmm3_4
  float v37; // xmm2_4
  const Vector *v38; // rax
  const Vector *v39; // rax
  float v40; // xmm0_4
  float v41; // xmm7_4
  float v42; // xmm5_4
  float v43; // xmm4_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_ParticleManager *v45; // rax
  CDOTA_ParticleManager *v46; // rax
  CDOTA_ParticleManager *v47; // rax
  CDOTA_ParticleManager *v48; // rax
  CDOTA_ParticleManager *v49; // rax
  CDOTA_ParticleManager *v50; // rax
  CDOTA_ParticleManager *v51; // rax
  CDOTA_ParticleManager *v52; // rax
  CDOTA_ParticleManager *v53; // rax
  CDOTA_ParticleManager *v54; // rax
  CDOTA_BaseNPC *v55; // rax
  bool HasScepter; // al
  float v57; // xmm6_4
  bool v58; // r13
  int damage_scepter; // eax
  int max_targets; // eax
  const Vector *v61; // r12
  CDOTA_BaseNPC *v62; // rax
  float v63; // xmm1_4
  float v64; // [rsp+8h] [rbp-B8h]
  float z; // [rsp+8h] [rbp-B8h]
  float v66; // [rsp+Ch] [rbp-B4h]
  float v67; // [rsp+Ch] [rbp-B4h]
  float v68; // [rsp+Ch] [rbp-B4h]
  float v69; // [rsp+10h] [rbp-B0h]
  float v70; // [rsp+10h] [rbp-B0h]
  float flDistancea; // [rsp+14h] [rbp-ACh]
  float flDistance; // [rsp+14h] [rbp-ACh]
  float flDistanceb; // [rsp+14h] [rbp-ACh]
  float v74; // [rsp+18h] [rbp-A8h]
  float v75; // [rsp+18h] [rbp-A8h]
  float v76; // [rsp+18h] [rbp-A8h]
  float v77; // [rsp+1Ch] [rbp-A4h]
  float v78; // [rsp+1Ch] [rbp-A4h]
  float v79; // [rsp+1Ch] [rbp-A4h]
  float v80; // [rsp+1Ch] [rbp-A4h]
  float v81; // [rsp+20h] [rbp-A0h]
  float v82; // [rsp+20h] [rbp-A0h]
  float v83; // [rsp+20h] [rbp-A0h]
  float v84; // [rsp+20h] [rbp-A0h]
  float vecTarget1; // [rsp+24h] [rbp-9Ch]
  float vecTarget1_4; // [rsp+28h] [rbp-98h]
  float vecTarget1_8; // [rsp+2Ch] [rbp-94h]
  double v88; // [rsp+60h] [rbp-60h]
  Vector vPos; // [rsp+90h] [rbp-30h] BYREF

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->damage, "damage");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->max_targets, "max_targets");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->damage_percent_add, "damage_percent_add");
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
    this->jump_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "jump_delay", -1, 0);
  else
    this->jump_delay = 0.0;
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &this->damage_scepter, "damage_scepter");
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
    this->scepter_buffer = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "scepter_buffer", -1, 0);
  else
    this->scepter_buffer = 0.0;
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  NextTarget = Ptr;
  if ( Ptr != 0 && Ptr->m_bIsDOTANPC )
  {
    v13 = CDOTA_Buff::GetAbility(this);
    if ( CDOTA_BaseNPC::TriggerSpellAbsorb(NextTarget, v13, 1) )
    {
LABEL_8:
      CDOTA_Buff::Destroy(this, 0, 0, 0);
      return;
    }
  }
  else
  {
    *v14.m128i_i32 = KeyValues::GetFloat(pKV, "y", v11);
    LODWORD(vPos.y) = _mm_cvtsi128_si32(v14);
    vPos.x = KeyValues::GetFloat(pKV, "x", v15);
    vPos.z = 0.0;
    Parent = CDOTA_Buff::GetParent(this);
    CBaseEntity::SetAbsOrigin(Parent, &vPos);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_furion/furion_wrath_of_nature_start.vpcf",
                 2,
                 0,
                 0,
                 0);
    v19 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v19);
    v21 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v21, Particle, 0, *&AbsOrigin->x, AbsOrigin->z);
    v22 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v22, Particle);
    NextTarget = CDOTA_Modifier_Furion_WrathOfNature_Thinker::GetNextTarget(this);
    if ( NextTarget == 0 )
      goto LABEL_8;
  }
  v23 = CDOTA_Buff::GetParent(this);
  v24 = CBaseEntity::GetAbsOrigin(v23);
  vecTarget1_8 = v24->x;
  vecTarget1_4 = v24->y;
  vecTarget1 = v24->z;
  v25 = CBaseEntity::GetAbsOrigin(NextTarget);
  v26 = v25->x - vecTarget1_8;
  v27 = v25->y - vecTarget1_4;
  v28 = v25->z - vecTarget1;
  v81 = (((v26 * v26) + 0.00000011920929) + (v27 * v27)) + (v28 * v28);
  v29 = 1.0 / fsqrt(v81);
  v77 = fminf(fsqrt(((v26 * v26) + (v27 * v27)) + (v28 * v28)) * 0.5, 256.0);
  v30 = (v29 * 0.5) * (3.0 - ((v81 * v29) * v29));
  v66 = (v26 * v30) * v77;
  v69 = (v27 * v30) * v77;
  flDistancea = (v30 * v28) * v77;
  v31 = CBaseEntity::GetAbsOrigin(NextTarget);
  v32 = vecTarget1_8 - v31->x;
  v33 = vecTarget1_4 - v31->y;
  v34 = vecTarget1 - v31->z;
  v67 = v66 + vecTarget1_8;
  v64 = v77;
  flDistance = flDistancea + vecTarget1;
  v35 = 1.0 / fsqrt((((v32 * v32) + 0.00000011920929) + (v33 * v33)) + (v34 * v34));
  v36 = (0.5 * v35) * (3.0 - ((((((v32 * v32) + 0.00000011920929) + (v33 * v33)) + (v34 * v34)) * v35) * v35));
  v37 = (v34 * v36) * v77;
  v74 = (v32 * v36) * v77;
  v78 = (v33 * v36) * v77;
  v82 = v37;
  v38 = CBaseEntity::GetAbsOrigin(NextTarget);
  v75 = v74 + v38->x;
  v79 = v78 + v38->y;
  v83 = v82 + v38->z;
  v39 = CBaseEntity::GetAbsOrigin(NextTarget);
  v40 = v64;
  v88 = *&v39->x;
  v41 = v75;
  v42 = v69 + vecTarget1_4;
  if ( v64 > 128.0 )
  {
    v43 = flDistance + v64;
  }
  else
  {
    v43 = flDistance + 128.0;
    v40 = 128.0;
  }
  v76 = v67;
  v68 = v79;
  v80 = v43;
  v84 = v83 + v40;
  z = v39->z;
  v70 = v41;
  flDistanceb = v42;
  Caster = CDOTA_Buff::GetCaster(this);
  v45 = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      v45,
                      "particles/units/heroes/hero_furion/furion_wrath_of_nature.vpcf",
                      2,
                      0,
                      0,
                      Caster);
  v46 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v46,
    Caster,
    0,
    COERCE_DOUBLE(__PAIR64__(LODWORD(vecTarget1_4), LODWORD(vecTarget1_8))),
    vecTarget1);
  v47 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v47,
    Caster,
    1,
    COERCE_DOUBLE(__PAIR64__(LODWORD(flDistanceb), LODWORD(v76))),
    v80);
  v48 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v48, Caster, 2, COERCE_DOUBLE(__PAIR64__(LODWORD(v68), LODWORD(v70))), v84);
  v49 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v49, Caster, 3, v88, z + 100.0);
  *&vPos.x = 1065353216;
  vPos.z = 0.0;
  v50 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlOrientation(v50, Caster, 0, 0.0, 1.0, 0.0078125, 0.0, *&vPos.x, vPos.z);
  *&vPos.x = 1065353216;
  vPos.z = 0.0;
  v51 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlOrientation(v51, Caster, 1, 0.0, 1.0, 0.0078125, 0.0, *&vPos.x, vPos.z);
  *&vPos.x = 1065353216;
  vPos.z = 0.0;
  v52 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlOrientation(v52, Caster, 2, 0.0, 1.0, 0.0078125, 0.0, *&vPos.x, vPos.z);
  v53 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v53, Caster, 4, NextTarget, 1, 0, vec3_invalid, 1);
  v54 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v54, Caster);
  v55 = CDOTA_Buff::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(v55);
  v57 = 0.0;
  v58 = HasScepter;
  if ( g_pGameRules != 0 )
    v57 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flLastTickTime = v57;
  this->m_flTimeAccumulator = 0.0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitTargets);
  if ( v58 )
    damage_scepter = this->damage_scepter;
  else
    damage_scepter = this->damage;
  this->m_nBaseDamage = damage_scepter;
  max_targets = this->max_targets;
  this->m_flJumpDelay = this->jump_delay;
  this->m_nMaxTargets = max_targets;
  CDOTA_Modifier_Furion_WrathOfNature_Thinker::HitTarget(this, NextTarget);
  v61 = CBaseEntity::GetAbsOrigin(NextTarget);
  v62 = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetAbsOrigin(v62, v61);
  CDOTA_Buff::StartIntervalThink(this, 0.0, v63);
}


// CDOTA_Modifier_Furion_WrathOfNature_Thinker::OnDestroy  (line 704, @0x0000000002b37550, libserver.so)
// calls: CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_Furion_WrathOfNature_Thinker::OnDestroy(
        CDOTA_Modifier_Furion_WrathOfNature_Thinker *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Modifier_Furion_WrathOfNature_Thinker::OnIntervalThink  (line 713, @0x0000000002b83b80, libserver.so)  // inlines: DOTAGameRules, FastRSqrt, FastRSqrtFast, FastSqrt, GetGameTime, Length, Vector, VectorLength, VectorNormalizeFast, VectorSubtract, _mm_load_ss, _mm_rsqrt_ss, _mm_set_ss, _mm_sqrt_ss, operator*=, operator+=, operator-, operator=
// calls: CDOTA_Modifier_Furion_WrathOfNature_Thinker::GetNextTarget, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlOrientation, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CBaseEntity::SetAbsOrigin, CDOTA_Modifier_Furion_WrathOfNature_Thinker::HitTarget (13 total)
// strings: "particles/units/heroes/hero_furion/furion_wrath_of_nature.vpcf"
void __fastcall CDOTA_Modifier_Furion_WrathOfNature_Thinker::OnIntervalThink(
        CDOTA_Modifier_Furion_WrathOfNature_Thinker *const this)
{
  float v1; // xmm1_4
  float v3; // xmm0_4
  float m_flJumpDelay; // xmm1_4
  float v5; // xmm0_4
  CDOTA_BaseNPC *NextTarget; // r13
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  const Vector *v9; // rax
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  const Vector *v15; // rax
  float v16; // xmm7_4
  float v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  const Vector *v21; // rax
  float v22; // xmm8_4
  const Vector *v23; // rax
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  CDOTA_ParticleManager *v35; // rax
  CDOTA_ParticleManager *v36; // rax
  CDOTA_ParticleManager *v37; // rax
  const Vector *v38; // r12
  CDOTA_BaseNPC *v39; // rax
  float v40; // [rsp+14h] [rbp-C4h]
  double v41; // [rsp+18h] [rbp-C0h]
  float v42; // [rsp+1Ch] [rbp-BCh]
  float v43; // [rsp+20h] [rbp-B8h]
  float v44; // [rsp+20h] [rbp-B8h]
  float v45; // [rsp+24h] [rbp-B4h]
  float v46; // [rsp+24h] [rbp-B4h]
  float v47; // [rsp+28h] [rbp-B0h]
  float v48; // [rsp+28h] [rbp-B0h]
  float v49; // [rsp+2Ch] [rbp-ACh]
  float v50; // [rsp+2Ch] [rbp-ACh]
  float v51; // [rsp+2Ch] [rbp-ACh]
  float v52; // [rsp+30h] [rbp-A8h]
  float v53; // [rsp+30h] [rbp-A8h]
  float v54; // [rsp+30h] [rbp-A8h]
  float y; // [rsp+34h] [rbp-A4h]
  float x; // [rsp+38h] [rbp-A0h]
  float z; // [rsp+3Ch] [rbp-9Ch]
  float v58; // [rsp+3Ch] [rbp-9Ch]
  double v59; // [rsp+70h] [rbp-68h]

  v1 = 0.0;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  v3 = v1 - this->m_flLastTickTime;
  this->m_flLastTickTime = v1;
  m_flJumpDelay = this->m_flJumpDelay;
  v5 = v3 + this->m_flTimeAccumulator;
  this->m_flTimeAccumulator = v5;
  if ( m_flJumpDelay <= v5 )
  {
    this->m_flTimeAccumulator = v5 - m_flJumpDelay;
    NextTarget = CDOTA_Modifier_Furion_WrathOfNature_Thinker::GetNextTarget(this);
    if ( NextTarget == 0 )
      goto LABEL_9;
    Parent = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
    x = AbsOrigin->x;
    y = AbsOrigin->y;
    z = AbsOrigin->z;
    v9 = CBaseEntity::GetAbsOrigin(NextTarget);
    v10 = v9->x - x;
    v11 = v9->y - y;
    v12 = v9->z - z;
    v13 = 1.0 / fsqrt((((v10 * v10) + 0.00000011920929) + (v11 * v11)) + (v12 * v12));
    v52 = fminf(fsqrt(((v10 * v10) + (v11 * v11)) + (v12 * v12)) * 0.5, 256.0);
    v14 = (v13 * 0.5) * (3.0 - ((((((v10 * v10) + 0.00000011920929) + (v11 * v11)) + (v12 * v12)) * v13) * v13));
    v42 = (v10 * v14) * v52;
    v43 = (v11 * v14) * v52;
    v45 = (v12 * v14) * v52;
    v15 = CBaseEntity::GetAbsOrigin(NextTarget);
    v16 = x - v15->x;
    v17 = y - v15->y;
    v18 = z - v15->z;
    *&v41 = v42 + x;
    v40 = v52;
    *(&v41 + 1) = v43 + y;
    v44 = v45 + z;
    v19 = 1.0 / fsqrt((((v16 * v16) + 0.00000011920929) + (v17 * v17)) + (v18 * v18));
    v20 = (0.5 * v19) * (3.0 - ((((((v16 * v16) + 0.00000011920929) + (v17 * v17)) + (v18 * v18)) * v19) * v19));
    v47 = (v16 * v20) * v52;
    v49 = (v17 * v20) * v52;
    v53 = (v18 * v20) * v52;
    v21 = CBaseEntity::GetAbsOrigin(NextTarget);
    v22 = v49 + v21->y;
    v46 = v47 + v21->x;
    v50 = v53 + v21->z;
    v23 = CBaseEntity::GetAbsOrigin(NextTarget);
    v24 = v40;
    v59 = *&v23->x;
    v54 = v23->z;
    v25 = z + 100.0;
    if ( v40 > 128.0 )
    {
      v26 = v44 + v40;
    }
    else
    {
      v26 = v44 + 128.0;
      v24 = 128.0;
    }
    v58 = v50 + v24;
    v48 = v26;
    v51 = v25;
    Caster = CDOTA_Buff::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                        ParticleManager,
                        "particles/units/heroes/hero_furion/furion_wrath_of_nature.vpcf",
                        2,
                        0,
                        0,
                        Caster);
    v29 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v29, Caster, 0, COERCE_DOUBLE(__PAIR64__(LODWORD(y), LODWORD(x))), v51);
    v30 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v30, Caster, 1, v41, v48);
    v31 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(
      v31,
      Caster,
      2,
      COERCE_DOUBLE(__PAIR64__(LODWORD(v22), LODWORD(v46))),
      v58);
    v32 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v32, Caster, 3, v59, v54 + 100.0);
    v33 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlOrientation(
      v33,
      Caster,
      0,
      0.0,
      1.0,
      0.0078125,
      0.0,
      COERCE_DOUBLE(1065353216),
      0.0);
    v34 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlOrientation(
      v34,
      Caster,
      1,
      0.0,
      1.0,
      0.0078125,
      0.0,
      COERCE_DOUBLE(1065353216),
      0.0);
    v35 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlOrientation(
      v35,
      Caster,
      2,
      0.0,
      1.0,
      0.0078125,
      0.0,
      COERCE_DOUBLE(1065353216),
      0.0);
    v36 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v36, Caster, 4, NextTarget, 1, 0, vec3_invalid, 1);
    v37 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v37, Caster);
    v38 = CBaseEntity::GetAbsOrigin(NextTarget);
    v39 = CDOTA_Buff::GetParent(this);
    CBaseEntity::SetAbsOrigin(v39, v38);
    CDOTA_Modifier_Furion_WrathOfNature_Thinker::HitTarget(this, NextTarget);
    if ( this->m_hHitTargets.m_Size >= this->m_nMaxTargets )
LABEL_9:
      CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Furion_WrathOfNature_Thinker::GetNextTarget  (line 792, @0x0000000002b623d0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, Length, LookupEntity, Purge, Set, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, FindUnitsInRadius, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Modifier_Furion_WrathOfNature_Thinker::OnCreated, CDOTA_Modifier_Furion_WrathOfNature_Thinker::OnIntervalThink
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC *__fastcall CDOTA_Modifier_Furion_WrathOfNature_Thinker::GetNextTarget(
        CDOTA_Modifier_Furion_WrathOfNature_Thinker *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm4_4
  vec_t y; // xmm5_4
  vec_t z; // xmm6_4
  CDOTA_BaseNPC *Caster; // rax
  __int64 v8; // r13
  int v9; // r12d
  CDOTA_BaseNPC *v10; // r15
  CHandle<CBaseEntity> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CBaseEntity *m_pInstance; // rbx
  CDOTA_BaseNPC *v17; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v19; // eax
  __int16 v20; // cx
  const Vector *v21; // rax
  float v22; // xmm0_4
  float v24; // [rsp+2Ch] [rbp-84h]
  float v25; // [rsp+30h] [rbp-80h]
  float v26; // [rsp+34h] [rbp-7Ch]
  float flClosestDist; // [rsp+48h] [rbp-68h]
  CHandle<CBaseEntity> v28; // [rsp+50h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+60h] [rbp-50h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  x = AbsOrigin->x;
  hEntities.m_Size = 0;
  y = AbsOrigin->y;
  z = AbsOrigin->z;
  hEntities.m_Memory.m_nAllocationCount = 0;
  v24 = x;
  v26 = y;
  v25 = z;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, &vec3_origin, 0, -1.0, &hEntities, 2, 3, 16, 0, 0);
  if ( hEntities.m_Size <= 0 )
  {
    v10 = 0;
  }
  else
  {
    v8 = 0;
    v9 = 0;
    flClosestDist = 0.0;
    v10 = 0;
    do
    {
      v11 = &hEntities.m_Memory.m_pMemory[v8];
      m_Index = hEntities.m_Memory.m_pMemory[v8].m_Index;
      if ( m_Index + 2 <= 1
        || (v13 = v11->m_Index,
            (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F]) == 0)
        || (v15 = &v14[v13 & 0x1FF]) == 0
        || m_Index != v15->m_EHandle.m_Index
        || (m_pInstance = v15->m_pInstance, v15->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC )
      {
        m_pInstance = 0;
      }
      v17 = CDOTA_Buff::GetCaster(this);
      if ( CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(v17, m_pInstance) )
      {
        v28.m_Index = -1;
        if ( m_pInstance != 0 )
        {
          m_pEntity = m_pInstance->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v19 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v20 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v28.m_Index) = v20 | v28.m_Index & 0x8000;
            v28.m_Index = (v19 << 15) | v28.m_Index & 0x7FFF;
          }
        }
        if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&this->m_hHitTargets, &v28) == -1 )
        {
          v21 = CBaseEntity::GetAbsOrigin(m_pInstance);
          v22 = fsqrt(
                  (((v21->x - v24) * (v21->x - v24)) + ((v21->y - v26) * (v21->y - v26)))
                + ((v21->z - v25) * (v21->z - v25)));
          if ( v10 == 0 || flClosestDist > v22 )
          {
            flClosestDist = v22;
            v10 = m_pInstance;
          }
        }
      }
      ++v9;
      ++v8;
    }
    while ( hEntities.m_Size > v9 );
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
  return v10;
}


// CDOTA_Modifier_Furion_WrathOfNature_Thinker::HitTarget  (line 829, @0x0000000002b83020, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator[]
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, powf, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, __stack_chk_fail (13 total)
// callers: CDOTA_Modifier_Furion_WrathOfNature_Thinker::OnCreated, CDOTA_Modifier_Furion_WrathOfNature_Thinker::OnIntervalThink
// strings: "modifier_furion_wrathofnature_spawn", "Hero_Furion.WrathOfNature_Damage.Creep", "Hero_Furion.WrathOfNature_Damage"
void __fastcall CDOTA_Modifier_Furion_WrathOfNature_Thinker::HitTarget(
        CDOTA_Modifier_Furion_WrathOfNature_Thinker *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  float v5; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v7; // rax
  CDOTABaseAbility *v8; // r13
  CDOTA_BaseNPC *v9; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v11; // cx
  __int64 m_Size; // r12
  int v13; // eax
  CHandle<CBaseEntity> *v14; // rax
  float fDamage; // [rsp+Ch] [rbp-54h]
  int v16; // [rsp+10h] [rbp-50h]
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-28h]

  v18 = __readfsqword(0x28u);
  if ( pTarget != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(Caster) )
    {
      KeyValues::KeyValues(&kv, "modifier_furion_wrathofnature_spawn");
      KeyValues::SetFloat(&kv, "duration", v5);
      Ability = CDOTA_Buff::GetAbility(this);
      v7 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(pTarget, v7, Ability, "modifier_furion_wrathofnature_spawn", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
    fDamage = this->m_nBaseDamage * powf((this->damage_percent_add / 100.0) + 1.0, this->m_hHitTargets.m_Size);
    v8 = CDOTA_Buff::GetAbility(this);
    v9 = CDOTA_Buff::GetCaster(this);
    ApplyDamage(v9, pTarget, v8, fDamage, 2, 0);
    if ( (pTarget->m_iUnitType & 1) != 0 )
      CDOTA_BaseNPC::UnitEmitSound(pTarget, "Hero_Furion.WrathOfNature_Damage", 0.0, 0, 0);
    else
      CDOTA_BaseNPC::UnitEmitSound(pTarget, "Hero_Furion.WrathOfNature_Damage.Creep", 0.0, 0, 0);
    m_pEntity = pTarget->m_pEntity;
    v16 = -1;
    if ( m_pEntity != 0 )
    {
      v11 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v16 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v11 & 0x7FFF;
    }
    m_Size = this->m_hHitTargets.m_Size;
    v13 = this->m_hHitTargets.m_Size;
    if ( m_Size == this->m_hHitTargets.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitTargets.m_Memory, 1);
      v13 = this->m_hHitTargets.m_Size;
    }
    this->m_hHitTargets.m_Size = v13 + 1;
    v14 = &this->m_hHitTargets.m_Memory.m_pMemory[m_Size];
    if ( v14 != 0 )
      v14->m_Index = v16;
  }
}


// CDOTA_Modifier_Furion_WrathOfNature_Spawn::~CDOTA_Modifier_Furion_WrathOfNature_Spawn  (line 867, @0x0000000002b9aaa0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Furion_WrathOfNature_Spawn::~CDOTA_Modifier_Furion_WrathOfNature_Spawn(
        CDOTA_Modifier_Furion_WrathOfNature_Spawn *const this)
{
  this->_vptr_CDOTA_Buff = &off_44E54F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Furion_WrathOfNature_Spawn::~CDOTA_Modifier_Furion_WrathOfNature_Spawn  (line 867, @0x0000000002b9aac0, libserver.so)  // inlines: ~CDOTA_Modifier_Furion_WrathOfNature_Spawn
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Furion_WrathOfNature_Spawn::~CDOTA_Modifier_Furion_WrathOfNature_Spawn(
        CDOTA_Modifier_Furion_WrathOfNature_Spawn *const this)
{
  this->_vptr_CDOTA_Buff = &off_44E54F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Furion_WrathOfNature_Spawn::IsDebuff  (line 872, @0x0000000002b906b0, libserver.so)
bool __fastcall CDOTA_Modifier_Furion_WrathOfNature_Spawn::IsDebuff(
        CDOTA_Modifier_Furion_WrathOfNature_Spawn *const this)
{
  return 1;
}


// CDOTA_Modifier_Furion_WrathOfNature_Spawn::OnDestroy  (line 883, @0x0000000002b75890, libserver.so)  // inlines: GetTeamNumber, SetBool, ToDOTABaseNPC, ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetEffectiveLevel, KeyValues::KeyValues, KeyValues::SetInt, CBaseEntity::GetAbsOrigin, DOTA_Character_ScriptSpawn_Synchronous, CDOTA_BaseNPC::SetControllableByPlayer, FindClearSpaceForUnit, CDOTABaseAbility::GetLevelSpecialValueFor<float> (26 total)
// strings: "furion_force_of_nature", "ApplyWearableModifiers", "npc_dota_furion_treant_large", "npc_dota_furion_treant", "modifier_kill", "special_bonus_unique_furion" (11 total)
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Furion_WrathOfNature_Spawn::OnDestroy(
        CDOTA_Modifier_Furion_WrathOfNature_Spawn *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rbx
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // r14
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  bool v9; // zf
  const char *v10; // rax
  CDOTA_BaseNPC *v11; // r15
  int m_Value; // r13d
  CDOTA_BaseNPC *v13; // r13
  CDOTA_BaseNPC *v14; // rax
  int v15; // eax
  float v16; // xmm1_4
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTABaseAbility *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  int AbilityParticleEffect; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC_Hero *v27; // rdi
  CDOTA_BaseNPC *v28; // r12
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v30; // rax
  CDOTABaseAbility *duration; // [rsp+8h] [rbp-88h]
  CDOTABaseAbility *durationa; // [rsp+8h] [rbp-88h]
  const char *pszTreantClass; // [rsp+18h] [rbp-78h]
  KeyValues kvModifiers; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-38h]
  Vector v37; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v38; // 0:xmm0_8.8,8:xmm1_4.4

  v36 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  v3 = Parent;
  if ( Parent != 0 && Parent->m_bIsDOTANPC )
  {
    v4 = CDOTA_Buff::GetParent(this);
    if ( (*(v4->_vptr_IHandleEntity + 408))(v4) == 0 )
    {
      Caster = CDOTA_Buff::GetCaster(this);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "furion_force_of_nature", 0);
      if ( (*(v3->_vptr_IHandleEntity + 408))(v3) == 0 )
      {
        v8 = CDOTA_Buff::GetCaster(this);
        if ( CDOTA_BaseNPC::HasScepter(v8)
          && AbilityByName != 0
          && CDOTABaseAbility::GetEffectiveLevel(AbilityByName) >= -1 )
        {
          KeyValues::KeyValues(&kvModifiers, "");
          KeyValues::SetInt(&kvModifiers, "ApplyWearableModifiers", 1);
          if ( (v3->m_iUnitType & 1) != 0 )
          {
            v9 = (*(v3->_vptr_IHandleEntity + 436))(v3) == 0;
            v10 = "npc_dota_furion_treant";
            if ( v9 )
              v10 = "npc_dota_furion_treant_large";
            pszTreantClass = v10;
          }
          else
          {
            pszTreantClass = "npc_dota_furion_treant";
          }
          v11 = CDOTA_Buff::GetCaster(this);
          m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
          v37 = *CBaseEntity::GetAbsOrigin(v3);
          v13 = DOTA_Character_ScriptSpawn_Synchronous(pszTreantClass, m_Value, v11, &kvModifiers, 0, v37);
          if ( v13 != 0 )
          {
            v14 = CDOTA_Buff::GetCaster(this);
            v15 = (*(v14->_vptr_IHandleEntity + 414))(v14);
            CDOTA_BaseNPC::SetControllableByPlayer(v13, v15, 0);
            v38 = *CBaseEntity::GetAbsOrigin(v3);
            FindClearSpaceForUnit(v13, v38, 1);
            CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "duration", -1, 0);
            KeyValues::KeyValues(&kv, "modifier_kill");
            KeyValues::SetFloat(&kv, "duration", v16);
            duration = CDOTA_Buff::GetAbility(this);
            v17 = CDOTA_Buff::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(v13, v17, duration, "modifier_kill", &kv, 0);
            v18 = CDOTA_Buff::GetCaster(this);
            v19 = CDOTA_BaseNPC::FindAbilityByName(v18, "special_bonus_unique_furion", 0);
            if ( v19 != 0 && v19->m_iLevel.m_Value > 0 )
            {
              if ( (v3->m_iUnitType & 1) == 0 || (*(v3->_vptr_IHandleEntity + 436))(v3) != 0 )
              {
                v20 = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(v13, v20, AbilityByName, "modifier_treant_bonus", &kv, 0);
              }
              else
              {
                v30 = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(v13, v30, AbilityByName, "modifier_treant_large_bonus", &kv, 0);
              }
            }
            durationa = CDOTA_Buff::GetAbility(this);
            v21 = CDOTA_Buff::GetCaster(this);
            CDOTA_CombatLog::AddUnitSummonedEvent(&g_DOTACombatLog, v21, durationa, pszTreantClass, 1);
            if ( CDOTA_Buff::GetCaster(this) != 0 )
            {
              v22 = CDOTA_Buff::GetCaster(this);
              if ( CDOTA_BaseNPC::HasModifiedAbilityParticleName(v22, "natures_prophet_treant_ambient") )
              {
                AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                          AbilityByName,
                                          "natures_prophet_treant_ambient",
                                          2,
                                          v13,
                                          0);
                ParticleManager = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(
                  ParticleManager,
                  AbilityParticleEffect,
                  0,
                  v13,
                  5,
                  "attach_head",
                  vec3_invalid,
                  1);
                v25 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v25, AbilityParticleEffect);
              }
            }
            KeyValues::~KeyValues(&kv);
          }
          v26 = CDOTA_Buff::GetCaster(this);
          if ( v26 != 0 && (v26->m_iUnitType & 1) != 0 )
            v27 = v26;
          else
            v27 = 0;
          EconEntity_OnOwnerKillEaterEvent(
            v27,
            0,
            kill_eater_event_t::kKillEaterEvent_Treants_Created,
            1,
            INVALID_ITEM_DEF_INDEX);
          v28 = CDOTA_Buff::GetCaster(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
          DOTA_EmitSoundLocationWithCaster(AbsOrigin, "Hero_Furion.ForceOfNature", v28);
          KeyValues::~KeyValues(&kvModifiers);
        }
      }
    }
  }
  else
  {
    v7 = CDOTA_Buff::GetParent(this);
    (*(v7->_vptr_IHandleEntity + 408))(v7);
  }
}


// CDOTA_Modifier_Treant_Bonus::~CDOTA_Modifier_Treant_Bonus  (line 959, @0x0000000002b9aa50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Treant_Bonus::~CDOTA_Modifier_Treant_Bonus(CDOTA_Modifier_Treant_Bonus *const this)
{
  this->_vptr_CDOTA_Buff = &off_44E5810;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Treant_Bonus::~CDOTA_Modifier_Treant_Bonus  (line 959, @0x0000000002b9aa70, libserver.so)  // inlines: ~CDOTA_Modifier_Treant_Bonus
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Treant_Bonus::~CDOTA_Modifier_Treant_Bonus(CDOTA_Modifier_Treant_Bonus *const this)
{
  this->_vptr_CDOTA_Buff = &off_44E5810;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Treant_Bonus::IsPurgable  (line 966, @0x0000000002b906c0, libserver.so)
bool __fastcall CDOTA_Modifier_Treant_Bonus::IsPurgable(CDOTA_Modifier_Treant_Bonus *const this)
{
  return 0;
}


// CDOTA_Modifier_Treant_Bonus::OnCreated  (line 979, @0x0000000002b6e770, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CBaseEntity::SetMaxHealth, CDOTA_BaseNPC::Heal
// strings: "treant_hp_bonus", "treant_damage_bonus"
void __fastcall CDOTA_Modifier_Treant_Bonus::OnCreated(CDOTA_Modifier_Treant_Bonus *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax
  int v6; // r12d
  CDOTA_BaseNPC *v7; // rax
  CDOTABaseAbility *v8; // r12
  CDOTA_BaseNPC *v9; // rax
  float treant_hp_bonus; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->treant_hp_bonus = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->treant_damage_bonus = 0;
    goto LABEL_4;
  }
  this->treant_hp_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "treant_hp_bonus", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->treant_damage_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "treant_damage_bonus", -1, 0);
LABEL_4:
  Parent = CDOTA_Buff::GetParent(this);
  v6 = (*(Parent->_vptr_IHandleEntity + 156))(Parent) + this->treant_hp_bonus;
  v7 = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetMaxHealth(v7, v6);
  v8 = CDOTA_Buff::GetAbility(this);
  treant_hp_bonus = this->treant_hp_bonus;
  v9 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::Heal(v9, treant_hp_bonus, v8, 0, 1);
}


// CDOTA_Modifier_Treant_Bonus::DeclareFunctions  (line 992, @0x0000000002b353d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Treant_Bonus::GetModifierBaseAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Treant_Bonus::GetModifierExtraHealthBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Treant_Bonus::DeclareFunctions(CDOTA_Modifier_Treant_Bonus *const this)
{
  this->m_Functions[3].__pfn = CDOTA_Modifier_Treant_Bonus::GetModifierBaseAttack_BonusDamage;
  this->m_Functions[3].__delta = 0;
  this->m_Functions[61].__delta = 0;
  this->m_Functions[61].__pfn = CDOTA_Modifier_Treant_Bonus::GetModifierExtraHealthBonus;
}


// CDOTA_Modifier_Treant_Bonus::GetModifierBaseAttack_BonusDamage  (line 1000, @0x0000000002b35410, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Treant_Bonus::GetModifierBaseAttack_BonusDamage(
        CDOTA_Modifier_Treant_Bonus *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->treant_damage_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Treant_Bonus::GetModifierExtraHealthBonus  (line 1007, @0x0000000002b35430, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Treant_Bonus::GetModifierExtraHealthBonus(
        CDOTA_Modifier_Treant_Bonus *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->treant_hp_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Treant_Large_Bonus::~CDOTA_Modifier_Treant_Large_Bonus  (line 1018, @0x0000000002b9aa00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Treant_Large_Bonus::~CDOTA_Modifier_Treant_Large_Bonus(
        CDOTA_Modifier_Treant_Large_Bonus *const this)
{
  this->_vptr_CDOTA_Buff = &off_44E5B30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Treant_Large_Bonus::~CDOTA_Modifier_Treant_Large_Bonus  (line 1018, @0x0000000002b9aa20, libserver.so)  // inlines: ~CDOTA_Modifier_Treant_Large_Bonus
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Treant_Large_Bonus::~CDOTA_Modifier_Treant_Large_Bonus(
        CDOTA_Modifier_Treant_Large_Bonus *const this)
{
  this->_vptr_CDOTA_Buff = &off_44E5B30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Treant_Large_Bonus::IsPurgable  (line 1025, @0x0000000002b906d0, libserver.so)
bool __fastcall CDOTA_Modifier_Treant_Large_Bonus::IsPurgable(CDOTA_Modifier_Treant_Large_Bonus *const this)
{
  return 0;
}


// CDOTA_Modifier_Treant_Large_Bonus::OnCreated  (line 1038, @0x0000000002b6e660, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CBaseEntity::SetMaxHealth, CDOTA_BaseNPC::Heal
// strings: "treant_large_hp_bonus", "treant_large_damage_bonus"
void __fastcall CDOTA_Modifier_Treant_Large_Bonus::OnCreated(
        CDOTA_Modifier_Treant_Large_Bonus *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax
  int v6; // r12d
  CDOTA_BaseNPC *v7; // rax
  CDOTABaseAbility *v8; // r12
  CDOTA_BaseNPC *v9; // rax
  float treant_large_hp_bonus; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->treant_large_hp_bonus = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->treant_large_damage_bonus = 0;
    goto LABEL_4;
  }
  this->treant_large_hp_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "treant_large_hp_bonus", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->treant_large_damage_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      v4,
                                      "treant_large_damage_bonus",
                                      -1,
                                      0);
LABEL_4:
  Parent = CDOTA_Buff::GetParent(this);
  v6 = (*(Parent->_vptr_IHandleEntity + 156))(Parent) + this->treant_large_hp_bonus;
  v7 = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetMaxHealth(v7, v6);
  v8 = CDOTA_Buff::GetAbility(this);
  treant_large_hp_bonus = this->treant_large_hp_bonus;
  v9 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::Heal(v9, treant_large_hp_bonus, v8, 0, 1);
}


// CDOTA_Modifier_Treant_Large_Bonus::DeclareFunctions  (line 1051, @0x0000000002b35450, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Treant_Large_Bonus::GetModifierBaseAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Treant_Large_Bonus::GetModifierExtraHealthBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Treant_Large_Bonus::DeclareFunctions(CDOTA_Modifier_Treant_Large_Bonus *const this)
{
  this->m_Functions[3].__pfn = CDOTA_Modifier_Treant_Large_Bonus::GetModifierBaseAttack_BonusDamage;
  this->m_Functions[3].__delta = 0;
  this->m_Functions[61].__delta = 0;
  this->m_Functions[61].__pfn = CDOTA_Modifier_Treant_Large_Bonus::GetModifierExtraHealthBonus;
}


// CDOTA_Modifier_Treant_Large_Bonus::GetModifierBaseAttack_BonusDamage  (line 1059, @0x0000000002b35490, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Treant_Large_Bonus::GetModifierBaseAttack_BonusDamage(
        CDOTA_Modifier_Treant_Large_Bonus *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->treant_large_damage_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Treant_Large_Bonus::GetModifierExtraHealthBonus  (line 1066, @0x0000000002b354b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Treant_Large_Bonus::GetModifierExtraHealthBonus(
        CDOTA_Modifier_Treant_Large_Bonus *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->treant_large_hp_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


