// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_clinkz.cpp:33
class CDOTA_Unit_Hero_Clinkz : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Clinkz(CDOTA_Unit_Hero_Clinkz &);
	CDOTA_Unit_Hero_Clinkz(CDOTA_Unit_Hero_Clinkz &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void OnDying();
	virtual const char * GetDeathEffectName();
	CDOTA_Unit_Hero_Clinkz();
	virtual ~CDOTA_Unit_Hero_Clinkz();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[469] OnDying
	// vtable[502] GetDeathEffectName
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_clinkz.cpp:57
class C_CDOTA_Unit_Hero_Clinkz_MapInstall {
	C_CDOTA_Unit_Hero_Clinkz_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_clinkz.cpp:111
class CDOTA_Ability_Clinkz_Strafe : public CDOTABaseAbility {
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
	CDOTA_Ability_Clinkz_Strafe(CDOTA_Ability_Clinkz_Strafe &);
	CDOTA_Ability_Clinkz_Strafe(CDOTA_Ability_Clinkz_Strafe &);
	CDOTA_Ability_Clinkz_Strafe();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Clinkz_Strafe();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_clinkz.cpp:142
class CDOTA_Modifier_Clinkz_Strafe : public CDOTA_Buff {
public:

private:

	int attack_speed_bonus_pct;  // +0xba8
	CDOTA_Modifier_Clinkz_Strafe();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual const char * GetEffectName();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Clinkz_Strafe();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_clinkz.cpp:191
class CDOTA_Ability_Clinkz_SearingArrows : public CDOTABaseAbility {
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
	CDOTA_Ability_Clinkz_SearingArrows(CDOTA_Ability_Clinkz_SearingArrows &);
	CDOTA_Ability_Clinkz_SearingArrows(CDOTA_Ability_Clinkz_SearingArrows &);
	CDOTA_Ability_Clinkz_SearingArrows();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Clinkz_SearingArrows();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_clinkz.cpp:225
class CDOTA_Modifier_Clinkz_SearingArrows : public CDOTA_Buff {
public:

private:

	int damage_bonus;  // +0xba8

	CDOTA_Modifier_Clinkz_SearingArrows();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierProcAttack_BonusDamage_Physical(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	virtual ~CDOTA_Modifier_Clinkz_SearingArrows();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_clinkz.cpp:363
class CDOTA_Ability_Clinkz_WindWalk : public CDOTABaseAbility {
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
	CDOTA_Ability_Clinkz_WindWalk(CDOTA_Ability_Clinkz_WindWalk &);
	CDOTA_Ability_Clinkz_WindWalk(CDOTA_Ability_Clinkz_WindWalk &);
	CDOTA_Ability_Clinkz_WindWalk();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	virtual ~CDOTA_Ability_Clinkz_WindWalk();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[248] OnSaveState
	// vtable[249] OnLoadState
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_clinkz.cpp:440
class CDOTA_Modifier_Clinkz_WindWalk : public CDOTA_Modifier_Invisible {
public:

private:

	int move_speed_bonus_pct;  // +0xbb4
	CDOTA_Modifier_Clinkz_WindWalk();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_Clinkz_WindWalk();

	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_clinkz.cpp:510
class CDOTA_Ability_Clinkz_DeathPact : public CDOTABaseAbility {
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
	CDOTA_Ability_Clinkz_DeathPact(CDOTA_Ability_Clinkz_DeathPact &);
	CDOTA_Ability_Clinkz_DeathPact(CDOTA_Ability_Clinkz_DeathPact &);
	CDOTA_Ability_Clinkz_DeathPact();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Clinkz_DeathPact();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_clinkz.cpp:554
class CDOTA_Modifier_Clinkz_DeathPact : public CDOTA_Buff {
public:

private:

	int health_gain_pct;  // +0xba8
	float damage_gain_pct;  // +0xbac
	int m_iHealth;  // +0xbb0
	CDOTA_Modifier_Clinkz_DeathPact();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	ModifierVariant_t GetModifierBaseAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierExtraHealthBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Clinkz_DeathPact();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Clinkz::~CDOTA_Unit_Hero_Clinkz  (line 33, @0x0000000002ba2740, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Clinkz::~CDOTA_Unit_Hero_Clinkz(CDOTA_Unit_Hero_Clinkz *const this)
{
  this->_vptr_IHandleEntity = &off_44BEA10;
  this->_vptr_INextBotEventResponder = &off_44BF9F0;
  this->_vptr_CObstructionObject = &off_44BFD20;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Clinkz::~CDOTA_Unit_Hero_Clinkz  (line 33, @0x0000000002ba2780, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Clinkz
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Clinkz::~CDOTA_Unit_Hero_Clinkz(CDOTA_Unit_Hero_Clinkz *const this)
{
  this->_vptr_IHandleEntity = &off_44BEA10;
  this->_vptr_INextBotEventResponder = &off_44BF9F0;
  this->_vptr_CObstructionObject = &off_44BFD20;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Clinkz::Schema_DynamicBinding  (line 35, @0x0000000002b8ec30, libserver.so)
// globals: CDOTA_Unit_Hero_Clinkz::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Clinkz::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Clinkz *const this)
{
  return CDOTA_Unit_Hero_Clinkz::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 35, @0x0000000002b8ec60, libserver.so)
// globals: CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::DestructInstance  (line 35, @0x0000000002b8ec70, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Clinkz>
void __fastcall CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::FreeInstance  (line 35, @0x0000000002b8ec90, libserver.so)
void __fastcall CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::CanAllocate  (line 35, @0x0000000002b8ecb0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 35, @0x0000000002b8ecc0, libserver.so)
// globals: CDOTA_Unit_Hero_Clinkz::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Clinkz::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::AllocateInstance  (line 35, @0x0000000002b97420, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::ConstructInstance  (line 35, @0x0000000002b9c480, libserver.so)  // inlines: CDOTA_Unit_Hero_Clinkz, Construct<CDOTA_Unit_Hero_Clinkz>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_44BEA10;
    *(p + 236) = &off_44BF9F0;
    *(p + 257) = &off_44BFD20;
  }
  return p;
}


// CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002babff0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002bac5e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Clinkz::GetEntityClassInternal  (line 35, @0x0000000002bce2d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_clinkz", "CDOTA_Unit_Hero_Clinkz"
// globals: `guard variable for'CDOTA_Unit_Hero_Clinkz::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ClinkzClass, CDOTA_Unit_Hero_Clinkz::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ClinkzClass, __dso_handle, CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Clinkz::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ClinkzClassInfo, CDOTA_Unit_Hero_Clinkz::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ClinkzClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Clinkz::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Clinkz::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ClinkzClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Clinkz::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ClinkzClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Clinkz::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ClinkzClass);
    CDOTA_Unit_Hero_Clinkz::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ClinkzClass._vptr_CEntityClass = off_44BE990;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Clinkz::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ClinkzClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Clinkz::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ClinkzClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_ClinkzClass != 0 )
    return &CDOTA_Unit_Hero_Clinkz::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ClinkzClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Clinkz::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ClinkzClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Clinkz::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ClinkzClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Clinkz::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ClinkzClassInfo,
      "CDOTA_Unit_Hero_Clinkz",
      "npc_dota_hero_clinkz",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Clinkz::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ClinkzClassInfo);
  }
  CDOTA_Unit_Hero_Clinkz::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ClinkzClass.m_pClassInfo = &CDOTA_Unit_Hero_Clinkz::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ClinkzClassInfo;
  CDOTA_Unit_Hero_Clinkz::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ClinkzClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Clinkz::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ClinkzClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_ClinkzClass = &CDOTA_Unit_Hero_Clinkz::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ClinkzClass;
  CDOTA_Unit_Hero_Clinkz::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ClinkzClassInfo.m_pClass = &CDOTA_Unit_Hero_Clinkz::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ClinkzClass;
  CDOTA_Unit_Hero_Clinkz::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ClinkzClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_ClinkzClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Clinkz::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ClinkzClass;
}


// CDOTA_Unit_Hero_Clinkz::GetDeathEffectName  (line 43, @0x0000000002b8ecd0, libserver.so)
// strings: "particles/units/heroes/hero_clinkz/clinkz_death.vpcf"
const char *__fastcall CDOTA_Unit_Hero_Clinkz::GetDeathEffectName(CDOTA_Unit_Hero_Clinkz *const this)
{
  return "particles/units/heroes/hero_clinkz/clinkz_death.vpcf";
}


// CDOTA_Unit_Hero_Clinkz::YouForgotToImplementOrDeclareServerClass  (line 57, @0x0000000002b34980, libserver.so)
int __fastcall CDOTA_Unit_Hero_Clinkz::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Clinkz *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Clinkz::GetServerClass  (line 57, @0x0000000002b4c220, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Clinkz::GetServerClass(CDOTA_Unit_Hero_Clinkz *const this)
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


// CDOTA_Unit_Hero_Clinkz::Precache  (line 66, @0x0000000002b39cc0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache
void __fastcall CDOTA_Unit_Hero_Clinkz::Precache(
        CDOTA_Unit_Hero_Clinkz *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
}


// CDOTA_Unit_Hero_Clinkz::OnDying  (line 94, @0x0000000002b39f20, libserver.so)
// calls: CBaseEntity::AddEffects, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_Clinkz.Death"
void __fastcall CDOTA_Unit_Hero_Clinkz::OnDying(CDOTA_Unit_Hero_Clinkz *const this)
{
  if ( !this->m_bCustomKillEffect.m_Value )
    CBaseEntity::AddEffects(this, 32);
  CDOTA_BaseNPC::UnitEmitSound(this, "Hero_Clinkz.Death", 0.0, 0, 0);
}


// CDOTA_Ability_Clinkz_Strafe::~CDOTA_Ability_Clinkz_Strafe  (line 111, @0x0000000002ba0ae0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Clinkz_Strafe::~CDOTA_Ability_Clinkz_Strafe(CDOTA_Ability_Clinkz_Strafe *const this)
{
  this->_vptr_IHandleEntity = &off_44BFDF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Clinkz_Strafe::~CDOTA_Ability_Clinkz_Strafe  (line 111, @0x0000000002ba0b00, libserver.so)  // inlines: ~CDOTA_Ability_Clinkz_Strafe
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Clinkz_Strafe::~CDOTA_Ability_Clinkz_Strafe(CDOTA_Ability_Clinkz_Strafe *const this)
{
  this->_vptr_IHandleEntity = &off_44BFDF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Clinkz_Strafe::Schema_DynamicBinding  (line 113, @0x0000000002b8ece0, libserver.so)
// globals: CDOTA_Ability_Clinkz_Strafe::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Clinkz_Strafe::Schema_DynamicBinding(
        const CDOTA_Ability_Clinkz_Strafe *const this)
{
  return CDOTA_Ability_Clinkz_Strafe::s_pSchemaBinding;
}


// CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 113, @0x0000000002b8ecf0, libserver.so)
// globals: CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::DestructInstance  (line 113, @0x0000000002b8ed00, libserver.so)  // inlines: Destruct<CDOTA_Ability_Clinkz_Strafe>
void __fastcall CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::FreeInstance  (line 113, @0x0000000002b8ed20, libserver.so)
void __fastcall CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::CanAllocate  (line 113, @0x0000000002b8ed40, libserver.so)
bool __fastcall CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 113, @0x0000000002b8ed50, libserver.so)
// globals: CDOTA_Ability_Clinkz_Strafe::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Clinkz_Strafe::s_pSchemaBinding;
}


// CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::AllocateInstance  (line 113, @0x0000000002b97460, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::ConstructInstance  (line 113, @0x0000000002b9ced0, libserver.so)  // inlines: CDOTA_Ability_Clinkz_Strafe, Construct<CDOTA_Ability_Clinkz_Strafe>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44BFDF0;
  }
  return p;
}


// CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 113, @0x0000000002baa2a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 113, @0x0000000002baa2c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Clinkz_Strafe::GetEntityClassInternal  (line 113, @0x0000000002bc6e00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Clinkz_Strafe"
// globals: `guard variable for'CDOTA_Ability_Clinkz_Strafe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClass, CDOTA_Ability_Clinkz_Strafe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClass, __dso_handle, CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Clinkz_Strafe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClassInfo, CDOTA_Ability_Clinkz_Strafe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Clinkz_Strafe::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Clinkz_Strafe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Clinkz_Strafe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Clinkz_Strafe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClass);
    CDOTA_Ability_Clinkz_Strafe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClass._vptr_CEntityClass = off_44BFD70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Clinkz_Strafe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClass);
    __cxa_atexit(
      CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Clinkz_Strafe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Clinkz_StrafeClass != 0 )
    return &CDOTA_Ability_Clinkz_Strafe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClass;
  if ( `guard variable for'CDOTA_Ability_Clinkz_Strafe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Clinkz_Strafe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Clinkz_Strafe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClassInfo,
      "CDOTA_Ability_Clinkz_Strafe",
      "clinkz_strafe",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Clinkz_Strafe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClassInfo);
  }
  CDOTA_Ability_Clinkz_Strafe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClass.m_pClassInfo = &CDOTA_Ability_Clinkz_Strafe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClassInfo;
  CDOTA_Ability_Clinkz_Strafe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClass.m_pBaseClassInfo = CDOTA_Ability_Clinkz_Strafe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Clinkz_StrafeClass = &CDOTA_Ability_Clinkz_Strafe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClass;
  CDOTA_Ability_Clinkz_Strafe::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClassInfo.m_pClass = &CDOTA_Ability_Clinkz_Strafe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClass;
  CDOTA_Ability_Clinkz_Strafe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Clinkz_StrafeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Clinkz_Strafe::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_StrafeClass;
}


// CDOTA_Ability_Clinkz_Strafe::OnSpellStart  (line 123, @0x0000000002b72e50, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_clinkz_strafe", "Hero_Clinkz.Strafe"
void __fastcall CDOTA_Ability_Clinkz_Strafe::OnSpellStart(CDOTA_Ability_Clinkz_Strafe *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_clinkz_strafe");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_clinkz_strafe", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v5, "Hero_Clinkz.Strafe", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Clinkz_Strafe::~CDOTA_Modifier_Clinkz_Strafe  (line 142, @0x0000000002b9b330, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Clinkz_Strafe::~CDOTA_Modifier_Clinkz_Strafe(CDOTA_Modifier_Clinkz_Strafe *const this)
{
  this->_vptr_CDOTA_Buff = &off_44C08B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Clinkz_Strafe::~CDOTA_Modifier_Clinkz_Strafe  (line 142, @0x0000000002b9b350, libserver.so)  // inlines: ~CDOTA_Modifier_Clinkz_Strafe
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Clinkz_Strafe::~CDOTA_Modifier_Clinkz_Strafe(CDOTA_Modifier_Clinkz_Strafe *const this)
{
  this->_vptr_CDOTA_Buff = &off_44C08B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Clinkz_Strafe::GetEffectName  (line 150, @0x0000000002b8ed60, libserver.so)
// strings: "particles/units/heroes/hero_clinkz/clinkz_strafe.vpcf"
const char *__fastcall CDOTA_Modifier_Clinkz_Strafe::GetEffectName(CDOTA_Modifier_Clinkz_Strafe *const this)
{
  return "particles/units/heroes/hero_clinkz/clinkz_strafe.vpcf";
}


// CDOTA_Modifier_Clinkz_Strafe::OnCreated  (line 161, @0x0000000002b6d870, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "attack_speed_bonus_pct", "special_bonus_unique_clinkz_2"
void __fastcall CDOTA_Modifier_Clinkz_Strafe::OnCreated(CDOTA_Modifier_Clinkz_Strafe *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->attack_speed_bonus_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                     Ability,
                                     "attack_speed_bonus_pct",
                                     -1,
                                     0);
  else
    this->attack_speed_bonus_pct = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_clinkz_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->attack_speed_bonus_pct += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
}


// CDOTA_Modifier_Clinkz_Strafe::DeclareFunctions  (line 174, @0x0000000002b34990, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Clinkz_Strafe::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Clinkz_Strafe::DeclareFunctions(CDOTA_Modifier_Clinkz_Strafe *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Clinkz_Strafe::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Clinkz_Strafe::GetModifierAttackSpeedBonus_Constant  (line 181, @0x0000000002b349b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Clinkz_Strafe::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Clinkz_Strafe *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->attack_speed_bonus_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Clinkz_SearingArrows::~CDOTA_Ability_Clinkz_SearingArrows  (line 191, @0x0000000002ba0b30, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Clinkz_SearingArrows::~CDOTA_Ability_Clinkz_SearingArrows(
        CDOTA_Ability_Clinkz_SearingArrows *const this)
{
  this->_vptr_IHandleEntity = &off_44C0C10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Clinkz_SearingArrows::~CDOTA_Ability_Clinkz_SearingArrows  (line 191, @0x0000000002ba0b50, libserver.so)  // inlines: ~CDOTA_Ability_Clinkz_SearingArrows
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Clinkz_SearingArrows::~CDOTA_Ability_Clinkz_SearingArrows(
        CDOTA_Ability_Clinkz_SearingArrows *const this)
{
  this->_vptr_IHandleEntity = &off_44C0C10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Clinkz_SearingArrows::Schema_DynamicBinding  (line 193, @0x0000000002b8ed70, libserver.so)
// globals: CDOTA_Ability_Clinkz_SearingArrows::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Clinkz_SearingArrows::Schema_DynamicBinding(
        const CDOTA_Ability_Clinkz_SearingArrows *const this)
{
  return CDOTA_Ability_Clinkz_SearingArrows::s_pSchemaBinding;
}


// CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 193, @0x0000000002b8ed80, libserver.so)
// globals: CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::DestructInstance  (line 193, @0x0000000002b8ed90, libserver.so)  // inlines: Destruct<CDOTA_Ability_Clinkz_SearingArrows>
void __fastcall CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::FreeInstance  (line 193, @0x0000000002b8edb0, libserver.so)
void __fastcall CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::CanAllocate  (line 193, @0x0000000002b8edd0, libserver.so)
bool __fastcall CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 193, @0x0000000002b8ede0, libserver.so)
// globals: CDOTA_Ability_Clinkz_SearingArrows::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Clinkz_SearingArrows::s_pSchemaBinding;
}


// CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::AllocateInstance  (line 193, @0x0000000002b974a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::ConstructInstance  (line 193, @0x0000000002b9cf00, libserver.so)  // inlines: CDOTA_Ability_Clinkz_SearingArrows, Construct<CDOTA_Ability_Clinkz_SearingArrows>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44C0C10;
  }
  return p;
}


// CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 193, @0x0000000002baa2f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 193, @0x0000000002baa310, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInternal  (line 193, @0x0000000002bc6f50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "clinkz_searing_arrows", "CDOTA_Ability_Clinkz_SearingArrows"
// globals: `guard variable for'CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClass, CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClass, __dso_handle, CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClassInfo, CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClassInfo
CEntityClass *__cdecl CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClass);
    CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClass._vptr_CEntityClass = off_44C0B90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClass);
    __cxa_atexit(
      CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Clinkz_SearingArrowsClass != 0 )
    return &CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClass;
  if ( `guard variable for'CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClassInfo,
      "CDOTA_Ability_Clinkz_SearingArrows",
      "clinkz_searing_arrows",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClassInfo);
  }
  CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClass.m_pClassInfo = &CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClassInfo;
  CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClass.m_pBaseClassInfo = CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Clinkz_SearingArrowsClass = &CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClass;
  CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClassInfo.m_pClass = &CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClass;
  CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Clinkz_SearingArrowsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Clinkz_SearingArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_SearingArrowsClass;
}


// CDOTA_Ability_Clinkz_SearingArrows::GetIntrinsicModifierName  (line 196, @0x0000000002b8edf0, libserver.so)
// strings: "modifier_clinkz_searing_arrows"
const char *__fastcall CDOTA_Ability_Clinkz_SearingArrows::GetIntrinsicModifierName(
        CDOTA_Ability_Clinkz_SearingArrows *const this)
{
  return "modifier_clinkz_searing_arrows";
}


// CDOTA_Ability_Clinkz_SearingArrows::ProcsMagicStick  (line 198, @0x0000000002b8ee00, libserver.so)
bool __fastcall CDOTA_Ability_Clinkz_SearingArrows::ProcsMagicStick(CDOTA_Ability_Clinkz_SearingArrows *const this)
{
  return 0;
}


// CDOTA_Ability_Clinkz_SearingArrows::IsStealable  (line 199, @0x0000000002b8ee10, libserver.so)
bool __fastcall CDOTA_Ability_Clinkz_SearingArrows::IsStealable(CDOTA_Ability_Clinkz_SearingArrows *const this)
{
  return 0;
}


// CDOTA_Ability_Clinkz_SearingArrows::GetAbilityDamageToTargetOverInterval  (line 207, @0x0000000002b69830, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetSecondsPerAttack, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Clinkz_SearingArrows::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Clinkz_SearingArrows *const this,
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
    fNumAttacksa = fInterval / CDOTA_BaseNPC::GetSecondsPerAttack(Caster);
    fNumAttacksb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_bonus", -1, 1) * fNumAttacksa;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fNumAttacksb);
  }
  return result;
}


// CDOTA_Modifier_Clinkz_SearingArrows::~CDOTA_Modifier_Clinkz_SearingArrows  (line 225, @0x0000000002ba93c0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Clinkz_SearingArrows::~CDOTA_Modifier_Clinkz_SearingArrows(
        CDOTA_Modifier_Clinkz_SearingArrows *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_44C16D0;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_InFlightAttackRecords.m_Memory,
        CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory),
        (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<short,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Clinkz_SearingArrows::~CDOTA_Modifier_Clinkz_SearingArrows  (line 225, @0x0000000002ba9580, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Clinkz_SearingArrows, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Clinkz_SearingArrows::~CDOTA_Modifier_Clinkz_SearingArrows(
        CDOTA_Modifier_Clinkz_SearingArrows *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_44C16D0;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_InFlightAttackRecords.m_Memory;
    CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory);
    if ( (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Clinkz_SearingArrows::IsHidden  (line 230, @0x0000000002b8ee20, libserver.so)
bool __fastcall CDOTA_Modifier_Clinkz_SearingArrows::IsHidden(CDOTA_Modifier_Clinkz_SearingArrows *const this)
{
  return 1;
}


// CDOTA_Modifier_Clinkz_SearingArrows::DeclareFunctions  (line 252, @0x0000000002b349d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Clinkz_SearingArrows::OnAttack(CModifierParams const&), CDOTA_Modifier_Clinkz_SearingArrows::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Clinkz_SearingArrows::OnAttackFail(CModifierParams const&)
void __fastcall CDOTA_Modifier_Clinkz_SearingArrows::DeclareFunctions(CDOTA_Modifier_Clinkz_SearingArrows *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_Clinkz_SearingArrows::OnAttack;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Clinkz_SearingArrows::OnAttackLanded;
  this->m_Functions[122].__pfn = CDOTA_Modifier_Clinkz_SearingArrows::OnAttackFail;
  this->m_Functions[122].__delta = 0;
}


// CDOTA_Modifier_Clinkz_SearingArrows::OnAttack  (line 261, @0x0000000002b8b580, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::GetCurrentActiveAbility, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, MakeEntitySystemString, CDOTA_BaseNPC::SpendMana, CUtlVectorBase<short int, CUtlMemory<short int, int> >::AddToTail, CDOTA_Buff::GetCaster, DOTA_EmitSound
// strings: "particles/units/heroes/hero_clinkz/clinkz_searing_arrow.vpcf", "Hero_Clinkz.SearingArrows"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Clinkz_SearingArrows::OnAttack(
        CDOTA_Modifier_Clinkz_SearingArrows *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CDOTA_BaseNPC *v7; // r13
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *v14; // r14
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v16; // r15
  float v17; // xmm0_4
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rbx
  int v21; // eax
  CDOTA_BaseNPC *Caster; // rax
  UtlSymLargeId_t v23; // [rsp+0h] [rbp-40h]
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  v7 = Parent;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[params->hattacker.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  if ( v7 != m_pInstance )
    goto LABEL_7;
  v11 = params->htarget.m_Index;
  if ( v11 + 2 <= 1
    || (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v13 = &v12[params->htarget.m_Index & 0x1FF]) == 0
    || v11 != v13->m_EHandle.m_Index
    || (v14 = v13->m_pInstance, v13->m_pInstance == 0)
    || BYTE3(v14[7]._vptr_IHandleEntity) == 0 )
  {
    v14 = 0;
  }
  if ( v7 == 0 || !v7->m_bIsDOTANPC )
  {
    CDOTA_Buff::GetAbility(this);
LABEL_7:
    *&result.m_eType = 1;
    goto LABEL_8;
  }
  Ability = CDOTA_Buff::GetAbility(this);
  v16 = Ability;
  if ( v14 == 0
    || Ability == 0
    || (v7->m_nUnitState64.m_Value & 8) != 0
    || LOBYTE(v14[71]._vptr_IHandleEntity) != 0
    || (BYTE1(v14[58]._vptr_IHandleEntity) & 1) != 0
    || Ability != CDOTA_BaseNPC::GetCurrentActiveAbility(v7) && !v16->m_bAutoCastState.m_Value )
  {
    goto LABEL_7;
  }
  LODWORD(result.m_szVal) = (*(v16->_vptr_IHandleEntity + 256))(v16, v14);
  *&result.m_eType = 1;
  if ( LODWORD(result.m_szVal) == 0 )
  {
    v17 = (*(v16->_vptr_IHandleEntity + 274))(v16, 0xFFFFFFFFLL);
    *&result.m_eType = 1;
    if ( v17 <= v7->m_flMana.m_Value )
    {
      iRecord = params->iRecord;
      AttackRecordsManager = GetAttackRecordsManager();
      RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
      MakeEntitySystemString("particles/units/heroes/hero_clinkz/clinkz_searing_arrow.vpcf");
      RecordByIndex->m_iszAutoAttackRangedParticle.u.m_Id = v23;
      v21 = (*(v16->_vptr_IHandleEntity + 274))(v16, 0xFFFFFFFFLL);
      CDOTA_BaseNPC::SpendMana(v7, v21, v16, 0);
      CUtlVectorBase<short,CUtlMemory<short,int>>::AddToTail(&this->m_InFlightAttackRecords, &RecordByIndex->m_iRecord);
      Caster = CDOTA_Buff::GetCaster(this);
      DOTA_EmitSound(10, "Hero_Clinkz.SearingArrows", Caster);
      *&result.m_eType = 1;
    }
  }
LABEL_8:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Clinkz_SearingArrows::OnAttackLanded  (line 293, @0x0000000002b698d0, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, ApplyDamage, DOTA_EmitSound
// strings: "special_bonus_unique_clinkz_1", "Hero_Clinkz.SearingArrows.Impact"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Clinkz_SearingArrows::OnAttackLanded(
        CDOTA_Modifier_Clinkz_SearingArrows *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *v13; // r13
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC *v17; // rbx
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v21; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[params->hattacker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( Parent == m_pInstance
    && CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord) )
  {
    v10 = params->htarget.m_Index;
    if ( v10 + 2 <= 1
      || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v12 = &v11[params->htarget.m_Index & 0x1FF]) == 0
      || v10 != v12->m_EHandle.m_Index
      || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
      || BYTE3(v13[7]._vptr_IHandleEntity) == 0 )
    {
      v13 = 0;
    }
    v14 = params->hattacker.m_Index;
    if ( v14 + 2 > 1
      && (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) != 0
      && (v16 = &v15[params->hattacker.m_Index & 0x1FF]) != 0
      && v14 == v16->m_EHandle.m_Index
      && (v17 = v16->m_pInstance, v16->m_pInstance != 0)
      && v17->m_bIsDOTANPC )
    {
      Ability = CDOTA_Buff::GetAbility(this);
      if ( v13 != 0
        && Ability != 0
        && LOBYTE(v13[71]._vptr_IHandleEntity) == 0
        && (BYTE1(v13[58]._vptr_IHandleEntity) & 1) == 0
        && (*(Ability->_vptr_IHandleEntity + 256))(Ability, v13) == 0 )
      {
        flDamage = this->damage_bonus;
        Caster = CDOTA_Buff::GetCaster(this);
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_clinkz_1", 0);
        if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
          flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flDamage;
        v21 = CDOTA_Buff::GetAbility(this);
        ApplyDamage(v17, v13, v21, flDamage, 1, 8);
        DOTA_EmitSound(10, "Hero_Clinkz.SearingArrows.Impact", v13);
      }
    }
    else
    {
      CDOTA_Buff::GetAbility(this);
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Clinkz_SearingArrows::OnAttackFail  (line 330, @0x0000000002b626b0, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Clinkz_SearingArrows::OnAttackFail(
        CDOTA_Modifier_Clinkz_SearingArrows *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[params->hattacker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( Parent == m_pInstance )
    CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord);
  return 1uLL;
}


// CDOTA_Modifier_Clinkz_SearingArrows::OnCreated  (line 344, @0x0000000002b6c2d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Clinkz_SearingArrows::OnCreated(
        CDOTA_Modifier_Clinkz_SearingArrows *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_bonus", -1, 0);
  else
    this->damage_bonus = 0;
}


// CDOTA_Modifier_Clinkz_SearingArrows::OnRefresh  (line 351, @0x0000000002b6c690, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Clinkz_SearingArrows::OnRefresh(
        CDOTA_Modifier_Clinkz_SearingArrows *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_bonus", -1, 0);
  else
    this->damage_bonus = 0;
}


// CDOTA_Ability_Clinkz_WindWalk::~CDOTA_Ability_Clinkz_WindWalk  (line 363, @0x0000000002ba0b80, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Clinkz_WindWalk::~CDOTA_Ability_Clinkz_WindWalk(
        CDOTA_Ability_Clinkz_WindWalk *const this)
{
  this->_vptr_IHandleEntity = &off_44C1A30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Clinkz_WindWalk::~CDOTA_Ability_Clinkz_WindWalk  (line 363, @0x0000000002ba0ba0, libserver.so)  // inlines: ~CDOTA_Ability_Clinkz_WindWalk
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Clinkz_WindWalk::~CDOTA_Ability_Clinkz_WindWalk(
        CDOTA_Ability_Clinkz_WindWalk *const this)
{
  this->_vptr_IHandleEntity = &off_44C1A30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Clinkz_WindWalk::Schema_DynamicBinding  (line 365, @0x0000000002b8ee30, libserver.so)
// globals: CDOTA_Ability_Clinkz_WindWalk::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Clinkz_WindWalk::Schema_DynamicBinding(
        const CDOTA_Ability_Clinkz_WindWalk *const this)
{
  return CDOTA_Ability_Clinkz_WindWalk::s_pSchemaBinding;
}


// CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 365, @0x0000000002b8ee40, libserver.so)
// globals: CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::DestructInstance  (line 365, @0x0000000002b8ee50, libserver.so)  // inlines: Destruct<CDOTA_Ability_Clinkz_WindWalk>
void __fastcall CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::FreeInstance  (line 365, @0x0000000002b8ee70, libserver.so)
void __fastcall CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::CanAllocate  (line 365, @0x0000000002b8ee90, libserver.so)
bool __fastcall CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 365, @0x0000000002b8eea0, libserver.so)
// globals: CDOTA_Ability_Clinkz_WindWalk::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Clinkz_WindWalk::s_pSchemaBinding;
}


// CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::AllocateInstance  (line 365, @0x0000000002b974e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::ConstructInstance  (line 365, @0x0000000002b9cf30, libserver.so)  // inlines: CDOTA_Ability_Clinkz_WindWalk, Construct<CDOTA_Ability_Clinkz_WindWalk>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44C1A30;
  }
  return p;
}


// CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 365, @0x0000000002baa340, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 365, @0x0000000002baa360, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInternal  (line 365, @0x0000000002bc70a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Clinkz_WindWalk"
// globals: `guard variable for'CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClass, CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClass, __dso_handle, CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClassInfo, CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClassInfo
CEntityClass *__cdecl CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClass);
    CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClass._vptr_CEntityClass = off_44C19B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClass);
    __cxa_atexit(
      CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Clinkz_WindWalkClass != 0 )
    return &CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClass;
  if ( `guard variable for'CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClassInfo,
      "CDOTA_Ability_Clinkz_WindWalk",
      "clinkz_wind_walk",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClassInfo);
  }
  CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClass.m_pClassInfo = &CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClassInfo;
  CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClass.m_pBaseClassInfo = CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Clinkz_WindWalkClass = &CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClass;
  CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClassInfo.m_pClass = &CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClass;
  CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Clinkz_WindWalkClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Clinkz_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_WindWalkClass;
}


// CDOTA_Ability_Clinkz_WindWalk::OnSpellStart  (line 378, @0x0000000002b72f40, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetParent
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CGameSceneNode::GetOwnerEntity, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleFoWProperties, CDOTA_ParticleManager::ReleaseParticleIndex (15 total)
// strings: "modifier_clinkz_wind_walk", "fadetime", "particles/units/heroes/hero_clinkz/clinkz_windwalk.vpcf", "attach_hitloc"
void __fastcall CDOTA_Ability_Clinkz_WindWalk::OnSpellStart(CDOTA_Ability_Clinkz_WindWalk *const this)
{
  float v2; // xmm1_4
  float v3; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v5; // rax
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CGameSceneNode *v10; // rdi
  CBaseEntity *v11; // rdi
  const Vector *AbsOrigin; // r14
  CGameSceneNode *v13; // rdi
  const CBaseAnimating *v14; // r15
  CDOTA_ParticleManager *v15; // rax
  CGameSceneNode *v16; // rdi
  CBaseEntity *v17; // rdi
  const Vector *v18; // r14
  CGameSceneNode *v19; // rdi
  const CBaseAnimating *v20; // rbx
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "fade_time", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_clinkz_wind_walk");
  KeyValues::SetFloat(&kv, "duration", v2);
  KeyValues::SetFloat(&kv, "fadetime", v3);
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v5, Caster, this, "modifier_clinkz_wind_walk", &kv, 0);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  else
    OwnerEntity = 0;
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_clinkz/clinkz_windwalk.vpcf",
               2,
               OwnerEntity,
               0,
               0);
  v10 = this->m_pGameSceneNode->m_pParent;
  if ( v10 != 0 )
    v11 = CGameSceneNode::GetOwnerEntity(v10);
  else
    v11 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
  v13 = this->m_pGameSceneNode->m_pParent;
  if ( v13 != 0 )
    v14 = CGameSceneNode::GetOwnerEntity(v13);
  else
    v14 = 0;
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v15, Particle, 0, v14, 1, 0, *AbsOrigin, 1);
  v16 = this->m_pGameSceneNode->m_pParent;
  if ( v16 != 0 )
    v17 = CGameSceneNode::GetOwnerEntity(v16);
  else
    v17 = 0;
  v18 = CBaseEntity::GetAbsOrigin(v17);
  v19 = this->m_pGameSceneNode->m_pParent;
  if ( v19 != 0 )
    v20 = CGameSceneNode::GetOwnerEntity(v19);
  else
    v20 = 0;
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v21, Particle, 1, v20, 5, "attach_hitloc", *v18, 1);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v22, Particle, 0, -1, 160.0);
  v23 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v23, Particle);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Clinkz_WindWalk::OnSaveState  (line 402, @0x0000000002b42410, libserver.so)  // inlines: DOTAGameRules, FindModifierByName, GetGameTime
// calls: CDOTABaseAbility::OnSaveState, CDOTABaseAbility::GetCaster, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, KeyValues::SetFloat
// strings: "modifier_clinkz_wind_walk", "modifier_clinkz_wind_walk_duration"
bool __fastcall CDOTA_Ability_Clinkz_WindWalk::OnSaveState(CDOTA_Ability_Clinkz_WindWalk *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rbx
  CModifieractoryDictionary *v5; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // rax
  float v8; // xmm1_4

  CDOTABaseAbility::OnSaveState(this, pKV);
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = ModifierFactoryDictionary();
  Factory = CModifieractoryDictionary::FindFactory(v5, "modifier_clinkz_wind_walk");
  ModifierByName = CDOTA_ModifierManager::FindModifierByName(
                     &Caster->m_ModifierManager,
                     Factory,
                     "modifier_clinkz_wind_walk",
                     0);
  if ( ModifierByName != 0 )
  {
    (*(ModifierByName->_vptr_CDOTA_Buff + 30))(ModifierByName);
    v8 = 0.0;
    if ( g_pGameRules != 0 )
      v8 = *&g_pGameRules[18].m_szQuestName[20];
    KeyValues::SetFloat(pKV, "modifier_clinkz_wind_walk_duration", v8);
  }
  return 1;
}


// CDOTA_Ability_Clinkz_WindWalk::OnLoadState  (line 419, @0x0000000002b38960, libserver.so)
// calls: CDOTABaseAbility::OnLoadState, KeyValues::GetFloat, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_clinkz_wind_walk_duration", "modifier_clinkz_wind_walk"
bool __fastcall CDOTA_Ability_Clinkz_WindWalk::OnLoadState(CDOTA_Ability_Clinkz_WindWalk *const this, KeyValues *pKV)
{
  float v4; // xmm1_4
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v7; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  CDOTABaseAbility::OnLoadState(this, pKV);
  if ( KeyValues::GetFloat(pKV, "modifier_clinkz_wind_walk_duration", v4) > 0.0 )
  {
    KeyValues::KeyValues(&kv, "modifier_clinkz_wind_walk");
    KeyValues::SetFloat(&kv, "duration", v5);
    Caster = CDOTABaseAbility::GetCaster(this);
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v7, Caster, this, "modifier_clinkz_wind_walk", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  return 1;
}


// CDOTA_Modifier_Clinkz_WindWalk::~CDOTA_Modifier_Clinkz_WindWalk  (line 440, @0x0000000002b9a490, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Clinkz_WindWalk::~CDOTA_Modifier_Clinkz_WindWalk(
        CDOTA_Modifier_Clinkz_WindWalk *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Clinkz_WindWalk::~CDOTA_Modifier_Clinkz_WindWalk  (line 440, @0x0000000002b9a4b0, libserver.so)  // inlines: ~CDOTA_Modifier_Clinkz_WindWalk, ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Clinkz_WindWalk::~CDOTA_Modifier_Clinkz_WindWalk(
        CDOTA_Modifier_Clinkz_WindWalk *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Clinkz_WindWalk::CheckState  (line 460, @0x0000000002b3c480, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Invisible::CheckState
void __fastcall CDOTA_Modifier_Clinkz_WindWalk::CheckState(
        CDOTA_Modifier_Clinkz_WindWalk *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_Modifier_Invisible::CheckState(this, buffState);
  if ( (*(this->_vptr_CDOTA_Buff + 93))(this) != 0 )
  {
    buffState->m_nEnabledStateMask |= 0x2000000uLL;
    buffState->m_nDisabledStateMask &= ~0x2000000uLL;
  }
}


// CDOTA_Modifier_Clinkz_WindWalk::OnCreated  (line 471, @0x0000000002b6d900, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Modifier_Invisible::OnCreated
// strings: "move_speed_bonus_pct", "Hero_Clinkz.WindWalk"
void __fastcall CDOTA_Modifier_Clinkz_WindWalk::OnCreated(CDOTA_Modifier_Clinkz_WindWalk *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->move_speed_bonus_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "move_speed_bonus_pct", -1, 0);
  else
    this->move_speed_bonus_pct = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_Clinkz.WindWalk", 0.0, 0, 0);
  CDOTA_Modifier_Invisible::OnCreated(this, pKV);
}


// CDOTA_Modifier_Clinkz_WindWalk::DeclareFunctions  (line 482, @0x0000000002b3a050, libserver.so)  // inlines: SetFunction
// calls: CDOTA_Modifier_Invisible::DeclareFunctions
// globals: CDOTA_Modifier_Clinkz_WindWalk::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Clinkz_WindWalk::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Clinkz_WindWalk::DeclareFunctions(CDOTA_Modifier_Clinkz_WindWalk *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Clinkz_WindWalk::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Clinkz_WindWalk::GetActivityTranslationModifiers;
  CDOTA_Modifier_Invisible::DeclareFunctions(this);
}


// CDOTA_Modifier_Clinkz_WindWalk::GetModifierMoveSpeedBonus_Percentage  (line 492, @0x0000000002b34a30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Clinkz_WindWalk::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Clinkz_WindWalk *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->move_speed_bonus_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Clinkz_WindWalk::GetActivityTranslationModifiers  (line 499, @0x0000000002b34a50, libserver.so)
// strings: "windwalk"
ModifierVariant_t __fastcall CDOTA_Modifier_Clinkz_WindWalk::GetActivityTranslationModifiers(
        CDOTA_Modifier_Clinkz_WindWalk *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "windwalk";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Ability_Clinkz_DeathPact::~CDOTA_Ability_Clinkz_DeathPact  (line 510, @0x0000000002ba0bd0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Clinkz_DeathPact::~CDOTA_Ability_Clinkz_DeathPact(
        CDOTA_Ability_Clinkz_DeathPact *const this)
{
  this->_vptr_IHandleEntity = &off_44C2870;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Clinkz_DeathPact::~CDOTA_Ability_Clinkz_DeathPact  (line 510, @0x0000000002ba0bf0, libserver.so)  // inlines: ~CDOTA_Ability_Clinkz_DeathPact
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Clinkz_DeathPact::~CDOTA_Ability_Clinkz_DeathPact(
        CDOTA_Ability_Clinkz_DeathPact *const this)
{
  this->_vptr_IHandleEntity = &off_44C2870;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Clinkz_DeathPact::Schema_DynamicBinding  (line 512, @0x0000000002b8eeb0, libserver.so)
// globals: CDOTA_Ability_Clinkz_DeathPact::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Clinkz_DeathPact::Schema_DynamicBinding(
        const CDOTA_Ability_Clinkz_DeathPact *const this)
{
  return CDOTA_Ability_Clinkz_DeathPact::s_pSchemaBinding;
}


// CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 512, @0x0000000002b8eec0, libserver.so)
// globals: CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::DestructInstance  (line 512, @0x0000000002b8eed0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Clinkz_DeathPact>
void __fastcall CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::FreeInstance  (line 512, @0x0000000002b8eef0, libserver.so)
void __fastcall CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::CanAllocate  (line 512, @0x0000000002b8ef10, libserver.so)
bool __fastcall CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 512, @0x0000000002b8ef20, libserver.so)
// globals: CDOTA_Ability_Clinkz_DeathPact::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Clinkz_DeathPact::s_pSchemaBinding;
}


// CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::AllocateInstance  (line 512, @0x0000000002b97520, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::ConstructInstance  (line 512, @0x0000000002b9cf60, libserver.so)  // inlines: CDOTA_Ability_Clinkz_DeathPact, Construct<CDOTA_Ability_Clinkz_DeathPact>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44C2870;
  }
  return p;
}


// CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 512, @0x0000000002baa390, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 512, @0x0000000002baa3b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInternal  (line 512, @0x0000000002bc71f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Clinkz_DeathPact"
// globals: `guard variable for'CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClass, CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClass, __dso_handle, CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClassInfo, CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClassInfo
CEntityClass *__cdecl CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClass);
    CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClass._vptr_CEntityClass = off_44C27F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClass);
    __cxa_atexit(
      CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Clinkz_DeathPactClass != 0 )
    return &CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClass;
  if ( `guard variable for'CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClassInfo,
      "CDOTA_Ability_Clinkz_DeathPact",
      "clinkz_death_pact",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClassInfo);
  }
  CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClass.m_pClassInfo = &CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClassInfo;
  CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClass.m_pBaseClassInfo = CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Clinkz_DeathPactClass = &CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClass;
  CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClassInfo.m_pClass = &CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClass;
  CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Clinkz_DeathPactClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Clinkz_DeathPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Clinkz_DeathPactClass;
}


// CDOTA_Ability_Clinkz_DeathPact::OnSpellStart  (line 522, @0x0000000002b731e0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CBaseEntity::GetHealth, KeyValues::SetInt, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTABaseAbility::GetCaster, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::RemoveModifierByName (18 total)
// strings: "modifier_clinkz_death_pact", "particles/units/heroes/hero_clinkz/clinkz_death_pact.vpcf", "Hero_Clinkz.DeathPact.Cast", "Hero_Clinkz.DeathPact"
void __fastcall CDOTA_Ability_Clinkz_DeathPact::OnSpellStart(CDOTA_Ability_Clinkz_DeathPact *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  float v4; // xmm1_4
  int Health; // eax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  CDOTA_BaseNPC *Caster; // r15
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // r14
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && SLOBYTE(CursorTarget[2].m_hEffectEntity.m_Value.m_Index) < 0
    && BYTE1(CursorTarget[2].m_DamageModifiers.m_LastAlloc.index) == 0 )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_clinkz_death_pact");
    KeyValues::SetFloat(&kv, "duration", v4);
    Health = CBaseEntity::GetHealth(v3);
    KeyValues::SetInt(&kv, "health", Health);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_clinkz/clinkz_death_pact.vpcf",
                 1,
                 v3,
                 0,
                 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    v9 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v9, Particle, 1, Caster, 1, 0, vec3_invalid, 1);
    v10 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v10, Particle);
    v11 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v11, "modifier_clinkz_death_pact");
    v12 = CDOTABaseAbility::GetCaster(this);
    v13 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v13, v12, this, "modifier_clinkz_death_pact", &kv, 0);
    v14 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v14, "Hero_Clinkz.DeathPact.Cast", 0.0, 0, 0);
    CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Clinkz.DeathPact", 0.0, 0, 0);
    v15 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::Kill(v3, this, v15, 0.0, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Clinkz_DeathPact::~CDOTA_Modifier_Clinkz_DeathPact  (line 554, @0x0000000002b9b2e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Clinkz_DeathPact::~CDOTA_Modifier_Clinkz_DeathPact(
        CDOTA_Modifier_Clinkz_DeathPact *const this)
{
  this->_vptr_CDOTA_Buff = &off_44C3330;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Clinkz_DeathPact::~CDOTA_Modifier_Clinkz_DeathPact  (line 554, @0x0000000002b9b300, libserver.so)  // inlines: ~CDOTA_Modifier_Clinkz_DeathPact
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Clinkz_DeathPact::~CDOTA_Modifier_Clinkz_DeathPact(
        CDOTA_Modifier_Clinkz_DeathPact *const this)
{
  this->_vptr_CDOTA_Buff = &off_44C3330;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Clinkz_DeathPact::IsPurgable  (line 561, @0x0000000002b8ef30, libserver.so)
bool __fastcall CDOTA_Modifier_Clinkz_DeathPact::IsPurgable(CDOTA_Modifier_Clinkz_DeathPact *const this)
{
  return 0;
}


// CDOTA_Modifier_Clinkz_DeathPact::OnCreated  (line 576, @0x0000000002b81060, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::GetInt, CDOTA_Buff::GetCaster, CBaseEntity::SetMaxHealth, CDOTA_BaseNPC::Heal, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "health_gain_pct", "damage_gain_pct", "particles/units/heroes/hero_clinkz/clinkz_death_pact_buff.vpcf", "attach_head", "attach_hitloc"
void __fastcall CDOTA_Modifier_Clinkz_DeathPact::OnCreated(CDOTA_Modifier_Clinkz_DeathPact *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  int Int; // eax
  int v7; // r12d
  CDOTA_BaseNPC *Caster; // rax
  int v9; // r13d
  CDOTA_BaseNPC *v10; // rax
  CDOTABaseAbility *v11; // r13
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  __int64 v17; // r13
  CDOTA_BaseNPC *v18; // r14
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *v20; // r14
  CDOTA_ParticleManager *v21; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v23; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v24; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->health_gain_pct = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_6:
    this->damage_gain_pct = 0.0;
    goto LABEL_4;
  }
  this->health_gain_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "health_gain_pct", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_6;
LABEL_3:
  this->damage_gain_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "damage_gain_pct", -1, 0);
LABEL_4:
  Int = KeyValues::GetInt(pKV, "health", 0);
  this->m_iHealth = Int;
  v7 = this->health_gain_pct * Int / 100;
  Caster = CDOTA_Buff::GetCaster(this);
  v9 = v7 + (*(Caster->_vptr_IHandleEntity + 156))(Caster);
  v10 = CDOTA_Buff::GetCaster(this);
  CBaseEntity::SetMaxHealth(v10, v9);
  v11 = CDOTA_Buff::GetAbility(this);
  v12 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::Heal(v12, v7, v11, 0, 1);
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_clinkz/clinkz_death_pact_buff.vpcf",
                      2,
                      Parent,
                      0,
                      0);
  v15 = CDOTA_Buff::GetParent(this);
  v16 = GetParticleManager();
  v17 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v16, Parent, 0, v15, 5, "attach_head", vec3_invalid, 1);
  v18 = CDOTA_Buff::GetParent(this);
  v19 = GetParticleManager();
  *&v23.x = v17;
  v23.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v19, Parent, 1, v18, 5, "attach_hitloc", v23, 1);
  v20 = CDOTA_Buff::GetParent(this);
  v21 = GetParticleManager();
  *&v24.x = v17;
  v24.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v21, Parent, 2, v20, 1, 0, v24, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Clinkz_DeathPact::DeclareFunctions  (line 600, @0x0000000002b34a70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Clinkz_DeathPact::GetModifierBaseAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Clinkz_DeathPact::GetModifierExtraHealthBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Clinkz_DeathPact::DeclareFunctions(CDOTA_Modifier_Clinkz_DeathPact *const this)
{
  this->m_Functions[3].__pfn = CDOTA_Modifier_Clinkz_DeathPact::GetModifierBaseAttack_BonusDamage;
  this->m_Functions[3].__delta = 0;
  this->m_Functions[61].__delta = 0;
  this->m_Functions[61].__pfn = CDOTA_Modifier_Clinkz_DeathPact::GetModifierExtraHealthBonus;
}


// CDOTA_Modifier_Clinkz_DeathPact::GetModifierBaseAttack_BonusDamage  (line 608, @0x0000000002b34ab0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Clinkz_DeathPact::GetModifierBaseAttack_BonusDamage(
        CDOTA_Modifier_Clinkz_DeathPact *const this,
        const CModifierParams *const params)
{
  __int64 v2; // xmm0_8
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&v2 = (this->m_iHealth * this->damage_gain_pct) / 100.0;
  *&result.m_eType = (v2 << 32) | 1;
  return result;
}


// CDOTA_Modifier_Clinkz_DeathPact::GetModifierExtraHealthBonus  (line 615, @0x0000000002b34ae0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Clinkz_DeathPact::GetModifierExtraHealthBonus(
        CDOTA_Modifier_Clinkz_DeathPact *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = (this->m_iHealth * this->health_gain_pct / 100);
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


