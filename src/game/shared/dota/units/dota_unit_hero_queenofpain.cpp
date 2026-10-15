// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_queenofpain.cpp:30
class CDOTA_Unit_Hero_QueenOfPain : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_QueenOfPain(CDOTA_Unit_Hero_QueenOfPain &);
	CDOTA_Unit_Hero_QueenOfPain(CDOTA_Unit_Hero_QueenOfPain &);
	CDOTA_Unit_Hero_QueenOfPain();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool IsDemon();
	virtual ~CDOTA_Unit_Hero_QueenOfPain();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[402] IsDemon
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_queenofpain.cpp:40
class C_CDOTA_Unit_Hero_QueenOfPain_MapInstall {
	C_CDOTA_Unit_Hero_QueenOfPain_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_queenofpain.cpp:54
class CDOTA_Ability_QueenOfPain_ShadowStrike : public CDOTABaseAbility {
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
	CDOTA_Ability_QueenOfPain_ShadowStrike(CDOTA_Ability_QueenOfPain_ShadowStrike &);
	CDOTA_Ability_QueenOfPain_ShadowStrike(CDOTA_Ability_QueenOfPain_ShadowStrike &);
	CDOTA_Ability_QueenOfPain_ShadowStrike();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_QueenOfPain_ShadowStrike();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_queenofpain.cpp:147
class CDOTA_Modifier_QueenOfPain_ShadowStrike : public CDOTA_Buff {
public:

private:

	int duration_damage;  // +0xba8
	int movement_slow;  // +0xbac

	float m_flSlowStep;  // +0xbc8
	float m_flSlowStepStep;  // +0xbcc
	CDOTA_Modifier_QueenOfPain_ShadowStrike();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierUnitStatsNeedsRefresh(const CModifierParams &);
	virtual ~CDOTA_Modifier_QueenOfPain_ShadowStrike();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_queenofpain.cpp:262
class CDOTA_Ability_QueenOfPain_Blink : public CDOTABaseAbility {
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
	CDOTA_Ability_QueenOfPain_Blink(CDOTA_Ability_QueenOfPain_Blink &);
	CDOTA_Ability_QueenOfPain_Blink(CDOTA_Ability_QueenOfPain_Blink &);
	CDOTA_Ability_QueenOfPain_Blink();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(const Vector &);
	virtual const char * GetStolenActivityModifier();
	virtual float GetAOERadius();
	virtual bool HasBlink();
	virtual ~CDOTA_Ability_QueenOfPain_Blink();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[258] CastFilterResult
	// vtable[259] GetCustomCastError
	// vtable[310] GetStolenActivityModifier
	// vtable[333] GetAOERadius
	// vtable[323] HasBlink
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_queenofpain.cpp:280
class C_CDOTA_Ability_QueenOfPain_Blink_MapInstall {
	C_CDOTA_Ability_QueenOfPain_Blink_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_queenofpain.cpp:366
class CDOTA_Ability_QueenOfPain_ScreamOfPain : public CDOTABaseAbility {
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
	CDOTA_Ability_QueenOfPain_ScreamOfPain(CDOTA_Ability_QueenOfPain_ScreamOfPain &);
	CDOTA_Ability_QueenOfPain_ScreamOfPain(CDOTA_Ability_QueenOfPain_ScreamOfPain &);
	CDOTA_Ability_QueenOfPain_ScreamOfPain();
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
	virtual const char * GetStolenActivityModifier();
	virtual float GetAOERadius();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_QueenOfPain_ScreamOfPain();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[310] GetStolenActivityModifier
	// vtable[333] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_queenofpain.cpp:383
class C_CDOTA_Ability_QueenOfPain_ScreamOfPain_MapInstall {
	C_CDOTA_Ability_QueenOfPain_ScreamOfPain_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_queenofpain.cpp:453
class CDOTA_Ability_QueenOfPain_SonicWave : public CDOTABaseAbility {
public:

private:

	float m_fStartTime;  // +0x390
	float m_fTotalTime;  // +0x394
	int starting_aoe;  // +0x398
	int final_aoe;  // +0x39c
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
	CDOTA_Ability_QueenOfPain_SonicWave(CDOTA_Ability_QueenOfPain_SonicWave &);
	CDOTA_Ability_QueenOfPain_SonicWave(CDOTA_Ability_QueenOfPain_SonicWave &);
	CDOTA_Ability_QueenOfPain_SonicWave();
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
	virtual float GetCooldown(int);
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_QueenOfPain_SonicWave();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[242] GetCooldown
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_queenofpain.cpp:476
class C_CDOTA_Ability_QueenOfPain_SonicWave_MapInstall {
	C_CDOTA_Ability_QueenOfPain_SonicWave_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_QueenOfPain::~CDOTA_Unit_Hero_QueenOfPain  (line 30, @0x0000000002ac6a30, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_QueenOfPain::~CDOTA_Unit_Hero_QueenOfPain(CDOTA_Unit_Hero_QueenOfPain *const this)
{
  this->_vptr_IHandleEntity = &off_44151F0;
  this->_vptr_INextBotEventResponder = &off_44161D0;
  this->_vptr_CObstructionObject = &off_4416500;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_QueenOfPain::~CDOTA_Unit_Hero_QueenOfPain  (line 30, @0x0000000002ac6a70, libserver.so)  // inlines: ~CDOTA_Unit_Hero_QueenOfPain
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_QueenOfPain::~CDOTA_Unit_Hero_QueenOfPain(CDOTA_Unit_Hero_QueenOfPain *const this)
{
  this->_vptr_IHandleEntity = &off_44151F0;
  this->_vptr_INextBotEventResponder = &off_44161D0;
  this->_vptr_CObstructionObject = &off_4416500;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_QueenOfPain::Schema_DynamicBinding  (line 32, @0x0000000002aba520, libserver.so)
// globals: CDOTA_Unit_Hero_QueenOfPain::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_QueenOfPain::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_QueenOfPain *const this)
{
  return CDOTA_Unit_Hero_QueenOfPain::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x0000000002aba550, libserver.so)
// globals: CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x0000000002aba560, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_QueenOfPain>
void __fastcall CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x0000000002aba580, libserver.so)
void __fastcall CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x0000000002aba5a0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x0000000002aba5b0, libserver.so)
// globals: CDOTA_Unit_Hero_QueenOfPain::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_QueenOfPain::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x0000000002abf440, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x0000000002ac4a40, libserver.so)  // inlines: CDOTA_Unit_Hero_QueenOfPain, Construct<CDOTA_Unit_Hero_QueenOfPain>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_44151F0;
    *(p + 236) = &off_44161D0;
    *(p + 257) = &off_4416500;
  }
  return p;
}


// CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002acd070, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002acd440, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInternal  (line 32, @0x0000000002ae01a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_hero_queenofpain", "CDOTA_Unit_Hero_QueenOfPain"
// globals: `guard variable for'CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClass, CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClass, __dso_handle, CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClassInfo, CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClass);
    CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClass._vptr_CEntityClass = off_4415170;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_QueenOfPainClass != 0 )
    return &CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClass;
  if ( `guard variable for'CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClassInfo,
      "CDOTA_Unit_Hero_QueenOfPain",
      "npc_dota_hero_queenofpain",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClassInfo);
  }
  CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClass.m_pClassInfo = &CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClassInfo;
  CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClass.m_pBaseClassInfo = CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_QueenOfPainClass = &CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClass;
  CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClassInfo.m_pClass = &CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClass;
  CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_QueenOfPainClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_QueenOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_QueenOfPainClass;
}


// CDOTA_Unit_Hero_QueenOfPain::IsDemon  (line 36, @0x0000000002aba5c0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_QueenOfPain::IsDemon(const CDOTA_Unit_Hero_QueenOfPain *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_QueenOfPain::YouForgotToImplementOrDeclareServerClass  (line 40, @0x0000000002a786b0, libserver.so)
int __fastcall CDOTA_Unit_Hero_QueenOfPain::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_QueenOfPain *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_QueenOfPain::GetServerClass  (line 40, @0x0000000002a89af0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_QueenOfPain::GetServerClass(CDOTA_Unit_Hero_QueenOfPain *const this)
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


// CDOTA_Ability_QueenOfPain_ShadowStrike::~CDOTA_Ability_QueenOfPain_ShadowStrike  (line 54, @0x0000000002ac5bb0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_QueenOfPain_ShadowStrike::~CDOTA_Ability_QueenOfPain_ShadowStrike(
        CDOTA_Ability_QueenOfPain_ShadowStrike *const this)
{
  this->_vptr_IHandleEntity = &off_44165D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_QueenOfPain_ShadowStrike::~CDOTA_Ability_QueenOfPain_ShadowStrike  (line 54, @0x0000000002ac5bd0, libserver.so)  // inlines: ~CDOTA_Ability_QueenOfPain_ShadowStrike
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_QueenOfPain_ShadowStrike::~CDOTA_Ability_QueenOfPain_ShadowStrike(
        CDOTA_Ability_QueenOfPain_ShadowStrike *const this)
{
  this->_vptr_IHandleEntity = &off_44165D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_QueenOfPain_ShadowStrike::Schema_DynamicBinding  (line 56, @0x0000000002aba5d0, libserver.so)
// globals: CDOTA_Ability_QueenOfPain_ShadowStrike::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_QueenOfPain_ShadowStrike::Schema_DynamicBinding(
        const CDOTA_Ability_QueenOfPain_ShadowStrike *const this)
{
  return CDOTA_Ability_QueenOfPain_ShadowStrike::s_pSchemaBinding;
}


// CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 56, @0x0000000002aba5e0, libserver.so)
// globals: CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::DestructInstance  (line 56, @0x0000000002aba5f0, libserver.so)  // inlines: Destruct<CDOTA_Ability_QueenOfPain_ShadowStrike>
void __fastcall CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::FreeInstance  (line 56, @0x0000000002aba610, libserver.so)
void __fastcall CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::CanAllocate  (line 56, @0x0000000002aba630, libserver.so)
bool __fastcall CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 56, @0x0000000002aba640, libserver.so)
// globals: CDOTA_Ability_QueenOfPain_ShadowStrike::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_QueenOfPain_ShadowStrike::s_pSchemaBinding;
}


// CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::AllocateInstance  (line 56, @0x0000000002abf480, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::ConstructInstance  (line 56, @0x0000000002ac2e50, libserver.so)  // inlines: CDOTA_Ability_QueenOfPain_ShadowStrike, Construct<CDOTA_Ability_QueenOfPain_ShadowStrike>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44165D0;
  }
  return p;
}


// CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 56, @0x0000000002acc5b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 56, @0x0000000002acc5d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInternal  (line 56, @0x0000000002ae02f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "queenofpain_shadow_strike", "CDOTA_Ability_QueenOfPain_ShadowStrike"
// globals: `guard variable for'CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClass, CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClass, __dso_handle, CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClassInfo, CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClassInfo
CEntityClass *__cdecl CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClass);
    CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClass._vptr_CEntityClass = off_4416550;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClass);
    __cxa_atexit(
      CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_QueenOfPain_ShadowStrikeClass != 0 )
    return &CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClass;
  if ( `guard variable for'CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClassInfo,
      "CDOTA_Ability_QueenOfPain_ShadowStrike",
      "queenofpain_shadow_strike",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClassInfo);
  }
  CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClass.m_pClassInfo = &CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClassInfo;
  CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClass.m_pBaseClassInfo = CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_QueenOfPain_ShadowStrikeClass = &CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClass;
  CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClassInfo.m_pClass = &CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClass;
  CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_QueenOfPain_ShadowStrikeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_QueenOfPain_ShadowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ShadowStrikeClass;
}


// CDOTA_Ability_QueenOfPain_ShadowStrike::GetStolenActivityModifier  (line 64, @0x0000000002aba650, libserver.so)
const char *__fastcall CDOTA_Ability_QueenOfPain_ShadowStrike::GetStolenActivityModifier(
        CDOTA_Ability_QueenOfPain_ShadowStrike *const this)
{
  return "shadow_strike";
}


// CDOTA_Ability_QueenOfPain_ShadowStrike::OnSpellStart  (line 74, @0x0000000002aa1520, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetParent, GetSerialNumber, Set, ToDOTABaseNPC, Vector, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTA_BaseNPC::UnitEmitSound, CGameSceneNode::GetOwnerEntity, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, __stack_chk_fail
// strings: "particles/units/heroes/hero_queenofpain/queen_shadow_strike.vpcf", "Hero_QueenOfPain.ShadowStrike", "particles/units/heroes/hero_queenofpain/queen_shadow_strike_body.vpcf", "attach_hitloc"
void __fastcall CDOTA_Ability_QueenOfPain_ShadowStrike::OnSpellStart(
        CDOTA_Ability_QueenOfPain_ShadowStrike *const this)
{
  CBaseEntity *CursorTarget; // rax
  const CBaseAnimating *v3; // r13
  int LevelSpecialValue; // r14d
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  __int16 v11; // cx
  CBaseEntity *OwnerEntity; // r12
  CDOTA_BaseNPC *v13; // rax
  CGameSceneNode *m_pParent; // rdi
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  CBaseEntity *v17; // rcx
  int v18; // r12d
  CGameSceneNode *v19; // rdi
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CGameSceneNode *m_pGameSceneNode; // rax
  const CBaseAnimating *v23; // rbx
  const CGameSceneNode *v24; // rdi
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  const CBaseAnimating *pEnt; // [rsp+8h] [rbp-C8h]
  __int64 vecFallbackPosition; // [rsp+10h] [rbp-C0h]
  vec_t v30; // [rsp+1Ch] [rbp-B4h]
  double v31; // [rsp+20h] [rbp-B0h]
  sTrackingProjectileCreateInfo info; // [rsp+30h] [rbp-A0h] BYREF
  unsigned __int64 v33; // [rsp+98h] [rbp-38h]
  Vector v34; // 0:xmm0_8.8,8:xmm1_4.4

  v33 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    info.hTarget.m_Index = -1;
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "projectile_speed", -1, 0);
    info.hSource.m_Index = -1;
    info.colorGemColor = 0;
    info.pAttackRecord = 0;
    info.iSourceAttachment = 1;
    info.bProvidesVision = 0;
    info.iVisionTeamNumber = -1;
    info.vSourceLoc.x = vec3_origin.x;
    y = vec3_origin.y;
    info.iVisionRadius = 0;
    info.vSourceLoc.y = y;
    z = vec3_origin.z;
    info.bDrawsOnMinimap = 0;
    info.vSourceLoc.z = z;
    info.bDodgeable = 1;
    info.bIsAttack = 0;
    info.bVisibleToEnemies = 1;
    info.pKVExtraData = 0;
    info.bReplaceExisting = 0;
    info.flExpireTime = 0.0;
    info.flMaxImpactTime = 0.0;
    info.bServerOnly = 0;
    info.pszEffectName = "particles/units/heroes/hero_queenofpain/queen_shadow_strike.vpcf";
    info.pAbility = this;
    info.iMoveSpeed = LevelSpecialValue;
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
    {
      v9 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    v10 = v3->m_pEntity;
    if ( v10 != 0 )
    {
      v11 = 0x7FFF;
      if ( v10->m_EHandle.m_Index != -1 )
        v11 = v10->m_EHandle.m_Index & 0x7FFF;
      info.hTarget.m_Index = (((v10->m_EHandle.m_Index >> 15) - (v10->m_flags & 1)) << 15) | v11 & 0x7FFF;
    }
    else
    {
      info.hTarget.m_Index = -1;
    }
    OwnerEntity = 0;
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    v13 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v13, "Hero_QueenOfPain.ShadowStrike", 0.0, 0, 0);
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 )
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_queenofpain/queen_shadow_strike_body.vpcf",
                 2,
                 OwnerEntity,
                 0,
                 0);
    v17 = 0;
    v18 = Particle;
    v19 = this->m_pGameSceneNode->m_pParent;
    if ( v19 != 0 )
      v17 = CGameSceneNode::GetOwnerEntity(v19);
    pEnt = v17;
    v20 = GetParticleManager();
    v30 = vec3_invalid.z;
    vecFallbackPosition = *&vec3_invalid.x;
    CDOTA_ParticleManager::SetParticleControlEnt(v20, v18, 0, pEnt, 1, 0, vec3_invalid, 1);
    v21 = GetParticleManager();
    v34.z = v30;
    *&v34.x = vecFallbackPosition;
    CDOTA_ParticleManager::SetParticleControlEnt(v21, v18, 1, v3, 5, "attach_hitloc", v34, 1);
    m_pGameSceneNode = this->m_pGameSceneNode;
    v23 = 0;
    v24 = m_pGameSceneNode->m_pParent;
    if ( v24 != 0 )
      v23 = CGameSceneNode::GetOwnerEntity(v24);
    v25 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v25, v18, 2, v23, 5, "attach_hitloc", vec3_invalid, 1);
    *&v31 = LevelSpecialValue;
    *(&v31 + 1) = LevelSpecialValue;
    v26 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v26, v18, 3, v31, LevelSpecialValue);
    v27 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v27, v18);
  }
}


// CDOTA_Ability_QueenOfPain_ShadowStrike::OnProjectileHit  (line 106, @0x0000000002aa1900, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, KeyValues::~KeyValues (13 total)
// strings: "strike_damage", "modifier_queenofpain_shadow_strike"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_QueenOfPain_ShadowStrike::OnProjectileHit(
        CDOTA_Ability_QueenOfPain_ShadowStrike *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  unsigned __int64 m_Value; // rax
  int LevelSpecialValue; // r14d
  CDOTA_Buff *ModifierByName; // rdi
  float v11; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v13; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  if ( (*hTarget + 2) > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[*hTarget & 0x1FF];
      if ( v5 != 0 && *hTarget == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && !m_pInstance->m_bIsWaitingToSpawn.m_Value )
        {
          m_Value = m_pInstance->m_nUnitState64.m_Value;
          if ( (m_Value & 0x100) == 0
            && (m_Value & 0x200) == 0
            && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
          {
            LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "strike_damage", -1, 0);
            ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_queenofpain_shadow_strike", 0);
            if ( ModifierByName != 0 )
              CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
            KeyValues::KeyValues(&kv, "modifier_queenofpain_shadow_strike");
            CDOTABaseAbility::GetDuration(this);
            KeyValues::SetFloat(&kv, "duration", v11);
            Caster = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_queenofpain_shadow_strike", &kv, 0);
            v13 = CDOTABaseAbility::GetCaster(this);
            ApplyDamage(v13, m_pInstance, this, LevelSpecialValue, 2, 0);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 1;
}


// CDOTA_Ability_QueenOfPain_ShadowStrike::GetAbilityDamageToTargetOverInterval  (line 132, @0x0000000002aa1ab0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetDuration, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "strike_damage", "duration_damage"
__int64 __fastcall CDOTA_Ability_QueenOfPain_ShadowStrike::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_QueenOfPain_ShadowStrike *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  float fIntervala; // [rsp+0h] [rbp-2Ch]
  float fIntervalb; // [rsp+0h] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetDuration(this));
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "strike_damage", -1, 0);
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "duration_damage", -1, 0) * fIntervala;
    return (LevelSpecialValue + ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb));
  }
  return result;
}


// CDOTA_Modifier_QueenOfPain_ShadowStrike::~CDOTA_Modifier_QueenOfPain_ShadowStrike  (line 147, @0x0000000002ac0f10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_QueenOfPain_ShadowStrike::~CDOTA_Modifier_QueenOfPain_ShadowStrike(
        CDOTA_Modifier_QueenOfPain_ShadowStrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_4417090;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_QueenOfPain_ShadowStrike::~CDOTA_Modifier_QueenOfPain_ShadowStrike  (line 147, @0x0000000002ac0f30, libserver.so)  // inlines: ~CDOTA_Modifier_QueenOfPain_ShadowStrike
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_QueenOfPain_ShadowStrike::~CDOTA_Modifier_QueenOfPain_ShadowStrike(
        CDOTA_Modifier_QueenOfPain_ShadowStrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_4417090;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_QueenOfPain_ShadowStrike::CheckState  (line 177, @0x0000000002a7d1a0, libserver.so)  // inlines: Enable, GetHealthPercent
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth
void __fastcall CDOTA_Modifier_QueenOfPain_ShadowStrike::CheckState(
        CDOTA_Modifier_QueenOfPain_ShadowStrike *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v4; // rbx
  __int64 v5; // r13
  int v6; // eax
  __int64 v7; // rcx

  Parent = CDOTA_Buff::GetParent(this);
  v4 = Parent;
  if ( (Parent->m_iUnitType & 1) != 0 && !Parent->m_bIsIllusion.m_Value )
  {
    v5 = 100LL * CBaseEntity::GetHealth(Parent);
    v6 = (*(v4->_vptr_IHandleEntity + 156))(v4);
    v7 = 1;
    if ( v6 > 0 )
      v7 = v6;
    if ( (v5 / v7) <= 24 )
    {
      buffState->m_nEnabledStateMask |= 0x20000uLL;
      buffState->m_nDisabledStateMask &= ~0x20000uLL;
    }
  }
}


// CDOTA_Modifier_QueenOfPain_ShadowStrike::OnCreated  (line 190, @0x0000000002a9cc00, libserver.so)  // inlines: NetworkStateChanged, Set, Start, operator=<float>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::StartIntervalThink, CountdownTimer::Now, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::GetCaster, CDOTA_Buff::AddParticle
// strings: "duration_damage", "particles/units/heroes/hero_queenofpain/queen_shadow_strike_debuff.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_QueenOfPain_ShadowStrike::OnCreated(
        CDOTA_Modifier_QueenOfPain_ShadowStrike *const this,
        KeyValues *pKV)
{
  CountdownTimer *p_m_SlowInterval; // r12
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  float v7; // xmm0_4
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // r14
  CDOTA_ParticleManager *v11; // rax
  __int64 v12; // r13
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  vec_t vecFallbackPositiona; // [rsp+Ch] [rbp-24h]
  float vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v19; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v20; // 0:xmm0_8.8,8:xmm1_4.4

  p_m_SlowInterval = &this->m_SlowInterval;
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->duration_damage, "duration_damage");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->movement_slow, "movement_slow");
  CDOTA_Buff::StartIntervalThink(this, 3.0, v6);
  v7 = CountdownTimer::Now(p_m_SlowInterval) + 1.0;
  if ( v7 != this->m_SlowInterval.m_timestamp.m_Value )
  {
    vecFallbackPosition = v7;
    (*(this->m_SlowInterval._vptr_CountdownTimer + 2))(p_m_SlowInterval, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_SlowInterval.m_timestamp.m_Value = vecFallbackPosition;
  }
  if ( this->m_SlowInterval.m_duration.m_Value != 1.0 )
  {
    (*(this->m_SlowInterval._vptr_CountdownTimer + 2))(p_m_SlowInterval, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_SlowInterval.m_duration.m_Value = 1.0;
  }
  this->m_flSlowStep = 1.0;
  this->m_flSlowStepStep = 0.815;
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_queenofpain/queen_shadow_strike_debuff.vpcf",
                      2,
                      Parent,
                      0,
                      0);
  v10 = CDOTA_Buff::GetParent(this);
  v11 = GetParticleManager();
  v12 = *&vec3_invalid.x;
  vecFallbackPositiona = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v11, Parent, 0, v10, 5, "attach_hitloc", vec3_invalid, 1);
  Caster = CDOTA_Buff::GetCaster(this);
  v14 = GetParticleManager();
  *&v19.x = v12;
  v19.z = vecFallbackPositiona;
  CDOTA_ParticleManager::SetParticleControlEnt(v14, Parent, 1, Caster, 4, "attach_hitloc", v19, 1);
  v15 = CDOTA_Buff::GetParent(this);
  v16 = GetParticleManager();
  *&v20.x = v12;
  v20.z = vecFallbackPositiona;
  CDOTA_ParticleManager::SetParticleControlEnt(v16, Parent, 2, v15, 1, 0, v20, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_QueenOfPain_ShadowStrike::OnRefresh  (line 211, @0x0000000002aaa8b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "duration_damage"
void __fastcall CDOTA_Modifier_QueenOfPain_ShadowStrike::OnRefresh(
        CDOTA_Modifier_QueenOfPain_ShadowStrike *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->duration_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "duration_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->movement_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "movement_slow", -1, 0);
      return;
    }
  }
  else
  {
    this->duration_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->movement_slow = 0;
}


// CDOTA_Modifier_QueenOfPain_ShadowStrike::DeclareFunctions  (line 219, @0x0000000002a786c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_QueenOfPain_ShadowStrike::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_QueenOfPain_ShadowStrike::GetModifierUnitStatsNeedsRefresh(CModifierParams const&)
void __fastcall CDOTA_Modifier_QueenOfPain_ShadowStrike::DeclareFunctions(
        CDOTA_Modifier_QueenOfPain_ShadowStrike *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_QueenOfPain_ShadowStrike::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[114].__delta = 0;
  this->m_Functions[114].__pfn = CDOTA_Modifier_QueenOfPain_ShadowStrike::GetModifierUnitStatsNeedsRefresh;
}


// CDOTA_Modifier_QueenOfPain_ShadowStrike::GetModifierMoveSpeedBonus_Percentage  (line 227, @0x0000000002a81410, libserver.so)  // inlines: IsElapsed, NetworkStateChanged, Reset, Set, operator=<float>
// calls: CountdownTimer::Now
ModifierVariant_t __fastcall CDOTA_Modifier_QueenOfPain_ShadowStrike::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_QueenOfPain_ShadowStrike *const this,
        const CModifierParams *const params)
{
  CountdownTimer *p_m_SlowInterval; // r12
  float v4; // xmm0_4
  __m128i v5; // xmm1
  float v7; // xmm0_4
  float v8; // xmm0_4
  float m_flSlowStepStep; // xmm0_4
  float v10; // [rsp+8h] [rbp-18h]
  float flSlow; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  p_m_SlowInterval = &this->m_SlowInterval;
  flSlow = this->movement_slow * this->m_flSlowStep;
  v4 = CountdownTimer::Now(&this->m_SlowInterval);
  v5 = LODWORD(flSlow);
  if ( v4 >= this->m_SlowInterval.m_timestamp.m_Value )
  {
    v7 = CountdownTimer::Now(p_m_SlowInterval);
    v5 = LODWORD(flSlow);
    v8 = v7 + this->m_SlowInterval.m_duration.m_Value;
    if ( v8 != this->m_SlowInterval.m_timestamp.m_Value )
    {
      v10 = v8;
      (*(this->m_SlowInterval._vptr_CountdownTimer + 2))(p_m_SlowInterval, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v5 = LODWORD(flSlow);
      this->m_SlowInterval.m_timestamp.m_Value = v10;
    }
    m_flSlowStepStep = this->m_flSlowStepStep;
    this->m_flSlowStep = this->m_flSlowStep * m_flSlowStepStep;
    this->m_flSlowStepStep = m_flSlowStepStep * 0.98500001;
  }
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v5) << 32) | 1;
  return result;
}


// CDOTA_Modifier_QueenOfPain_ShadowStrike::GetModifierUnitStatsNeedsRefresh  (line 242, @0x0000000002a78700, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_QueenOfPain_ShadowStrike::GetModifierUnitStatsNeedsRefresh(
        CDOTA_Modifier_QueenOfPain_ShadowStrike *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_QueenOfPain_ShadowStrike::OnIntervalThink  (line 248, @0x0000000002a7b690, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, SendOverheadEventMessage
void __fastcall CDOTA_Modifier_QueenOfPain_ShadowStrike::OnIntervalThink(
        CDOTA_Modifier_QueenOfPain_ShadowStrike *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  flDamage = this->duration_damage;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, flDamage, 2, 0);
  LODWORD(Parent) = this->duration_damage;
  v5 = CDOTA_Buff::GetParent(this);
  SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_POISON_DAMAGE, v5, Parent, 0);
}


// CDOTA_Ability_QueenOfPain_Blink::~CDOTA_Ability_QueenOfPain_Blink  (line 262, @0x0000000002ac5c00, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_QueenOfPain_Blink::~CDOTA_Ability_QueenOfPain_Blink(
        CDOTA_Ability_QueenOfPain_Blink *const this)
{
  this->_vptr_IHandleEntity = &off_44173F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_QueenOfPain_Blink::~CDOTA_Ability_QueenOfPain_Blink  (line 262, @0x0000000002ac5c20, libserver.so)  // inlines: ~CDOTA_Ability_QueenOfPain_Blink
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_QueenOfPain_Blink::~CDOTA_Ability_QueenOfPain_Blink(
        CDOTA_Ability_QueenOfPain_Blink *const this)
{
  this->_vptr_IHandleEntity = &off_44173F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_QueenOfPain_Blink::Schema_DynamicBinding  (line 264, @0x0000000002aba660, libserver.so)
// globals: CDOTA_Ability_QueenOfPain_Blink::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_QueenOfPain_Blink::Schema_DynamicBinding(
        const CDOTA_Ability_QueenOfPain_Blink *const this)
{
  return CDOTA_Ability_QueenOfPain_Blink::s_pSchemaBinding;
}


// CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 264, @0x0000000002aba670, libserver.so)
// globals: CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::DestructInstance  (line 264, @0x0000000002aba680, libserver.so)  // inlines: Destruct<CDOTA_Ability_QueenOfPain_Blink>
void __fastcall CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::FreeInstance  (line 264, @0x0000000002aba6a0, libserver.so)
void __fastcall CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::CanAllocate  (line 264, @0x0000000002aba6c0, libserver.so)
bool __fastcall CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 264, @0x0000000002aba6d0, libserver.so)
// globals: CDOTA_Ability_QueenOfPain_Blink::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_QueenOfPain_Blink::s_pSchemaBinding;
}


// CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::AllocateInstance  (line 264, @0x0000000002abf4c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::ConstructInstance  (line 264, @0x0000000002ac2e80, libserver.so)  // inlines: CDOTA_Ability_QueenOfPain_Blink, Construct<CDOTA_Ability_QueenOfPain_Blink>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44173F0;
  }
  return p;
}


// CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 264, @0x0000000002acc600, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 264, @0x0000000002acc620, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInternal  (line 264, @0x0000000002ae0440, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "queenofpain_blink", "CDOTA_Ability_QueenOfPain_Blink"
// globals: `guard variable for'CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClass, CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClass, __dso_handle, CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClassInfo, CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClassInfo
CEntityClass *__cdecl CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClass);
    CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClass._vptr_CEntityClass = off_4417370;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClass);
    __cxa_atexit(
      CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_QueenOfPain_BlinkClass != 0 )
    return &CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClass;
  if ( `guard variable for'CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClassInfo,
      "CDOTA_Ability_QueenOfPain_Blink",
      "queenofpain_blink",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClassInfo);
  }
  CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClass.m_pClassInfo = &CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClassInfo;
  CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClass.m_pBaseClassInfo = CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_QueenOfPain_BlinkClass = &CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClass;
  CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClassInfo.m_pClass = &CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClass;
  CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_QueenOfPain_BlinkClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_QueenOfPain_Blink::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_BlinkClass;
}


// CDOTA_Ability_QueenOfPain_Blink::GetStolenActivityModifier  (line 273, @0x0000000002aba6e0, libserver.so)
// strings: "qop_blink"
const char *__fastcall CDOTA_Ability_QueenOfPain_Blink::GetStolenActivityModifier(
        CDOTA_Ability_QueenOfPain_Blink *const this)
{
  return "qop_blink";
}


// CDOTA_Ability_QueenOfPain_Blink::GetAOERadius  (line 275, @0x0000000002ae6680, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_QueenOfPain_Blink::GetAOERadius(CDOTA_Ability_QueenOfPain_Blink *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "blink_range", -1, 0);
}


// CDOTA_Ability_QueenOfPain_Blink::HasBlink  (line 277, @0x0000000002aba6f0, libserver.so)
bool __fastcall CDOTA_Ability_QueenOfPain_Blink::HasBlink(CDOTA_Ability_QueenOfPain_Blink *const this)
{
  return 1;
}


// CDOTA_Ability_QueenOfPain_Blink::YouForgotToImplementOrDeclareServerClass  (line 280, @0x0000000002a78720, libserver.so)
int __fastcall CDOTA_Ability_QueenOfPain_Blink::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_QueenOfPain_Blink *const this)
{
  return 0;
}


// CDOTA_Ability_QueenOfPain_Blink::GetServerClass  (line 280, @0x0000000002a89e70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_QueenOfPain_Blink::GetServerClass(CDOTA_Ability_QueenOfPain_Blink *const this)
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


// CDOTA_Ability_QueenOfPain_Blink::OnSpellStart  (line 289, @0x0000000002aa1b70, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, GetEHandle, GetEntryIndex, GetSerialNumber, Length, NormalizeInPlace, Set, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, DOTA_EmitSoundLocation, CDOTABaseAbility::GetLevelSpecialValueFor<int>, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::PrimeResumePreviousMovement (18 total)
// strings: "Hero_QueenOfPain.Blink_out", "min_blink_range", "particles/units/heroes/hero_queenofpain/queen_blink_start.vpcf", "attach_hitloc", "particles/units/heroes/hero_queenofpain/queen_blink_end.vpcf", "Hero_QueenOfPain.Blink_in"
void __fastcall CDOTA_Ability_QueenOfPain_Blink::OnSpellStart(CDOTA_Ability_QueenOfPain_Blink *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  vec_t v4; // xmm2_4
  vec_t v5; // xmm1_4
  CDOTA_BaseNPC *v6; // rax
  int LevelSpecialValue; // eax
  float v8; // xmm0_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *v11; // rax
  const Vector *v12; // r13
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // r13
  CDOTA_BaseNPC *v16; // r14
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v25; // cx
  CDOTA_BaseNPC *v26; // r12
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  int v33; // eax
  float flLength; // [rsp+Ch] [rbp-64h]
  EHANDLE hTarget; // [rsp+10h] [rbp-60h] BYREF
  Vector vDirection; // [rsp+20h] [rbp-50h] BYREF
  Vector vPos; // [rsp+30h] [rbp-40h]
  Vector vStartPos; // [rsp+40h] [rbp-30h] BYREF

  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  vStartPos = CDOTABaseAbility::GetCursorPosition(this);
  v4 = vStartPos.y - AbsOrigin->y;
  v5 = vStartPos.z - AbsOrigin->z;
  vDirection.x = vStartPos.x - AbsOrigin->x;
  vDirection.y = v4;
  vDirection.z = v5;
  flLength = fsqrt(((vDirection.x * vDirection.x) + (v4 * v4)) + (v5 * v5));
  VectorNormalize(&vDirection);
  vPos = CDOTABaseAbility::GetCursorPosition(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  vStartPos = *CBaseEntity::GetAbsOrigin(v6);
  DOTA_EmitSoundLocation(&vStartPos, "Hero_QueenOfPain.Blink_out", 1);
  LODWORD(AbsOrigin) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "blink_range", -1, 0);
  LODWORD(AbsOrigin) = (*(this->_vptr_IHandleEntity + 228))(this) + AbsOrigin;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "min_blink_range", -1, 0);
  v8 = AbsOrigin;
  if ( fmaxf(LevelSpecialValue, flLength) > AbsOrigin )
  {
    vPos.y = (vDirection.y * v8) + vStartPos.y;
    vPos.z = (vDirection.z * v8) + vStartPos.z;
    vPos.x = (v8 * vDirection.x) + vStartPos.x;
  }
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_queenofpain/queen_blink_start.vpcf",
               2,
               0,
               0,
               0);
  v11 = CDOTABaseAbility::GetCaster(this);
  v12 = CBaseEntity::GetAbsOrigin(v11);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v13, Particle, 0, *&v12->x, v12->z);
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = CBaseEntity::GetAbsOrigin(v14);
  v16 = CDOTABaseAbility::GetCaster(this);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v17, Particle, 1, v16, 5, "attach_hitloc", *v15, 1);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v18, Particle, 2, *&vDirection.x, vDirection.z);
  v19 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v19, Particle, 3, *&vPos.x, vPos.z);
  v20 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v20, Particle);
  v21 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::PrimeResumePreviousMovement(v21);
  v22 = CDOTABaseAbility::GetCaster(this);
  FindClearSpaceForUnit(v22, vPos, 1);
  v23 = CDOTABaseAbility::GetCaster(this);
  hTarget.m_Index = -1;
  if ( v23 != 0 )
  {
    m_pEntity = v23->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v25 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v25 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v25 & 0x7FFF;
    }
  }
  CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
  v26 = CDOTABaseAbility::GetCaster(this);
  v27 = GetParticleManager();
  LODWORD(v26) = CDOTA_ParticleManager::CreateParticle(
                   v27,
                   "particles/units/heroes/hero_queenofpain/queen_blink_end.vpcf",
                   1,
                   v26,
                   0,
                   0);
  v28 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v28, v26);
  v29 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UpdateResumePreviousMovementAfterTeleport(v29, *&vStartPos.x, vStartPos.z);
  v30 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v30, "Hero_QueenOfPain.Blink_in", 0.0, 0, 0);
  v31 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v31, 1541, 0.0, 0.2, 0, 0, 1.0);
  v32 = CDOTABaseAbility::GetCaster(this);
  v33 = (*(v32->_vptr_IHandleEntity + 414))(v32);
  IncrementCommunityGoal(EEvent::EVENT_ID_INTERNATIONAL_2016, EEventCommunityGoals_t::ECG_TI6_Blinks, 1u, v33);
}


// CDOTA_Ability_QueenOfPain_Blink::CastFilterResult  (line 340, @0x0000000002a7c610, libserver.so)  // inlines: GetTeamMapping, GetTeamNumber
// calls: CDOTABaseAbility::GetCaster, FoW_TeamNumberToFoWIndex, CDOTAFogOfWarSystem::GetFoW, CFoW::GetLocationInfo, IsUnexplored
int __fastcall CDOTA_Ability_QueenOfPain_Blink::CastFilterResult(
        CDOTA_Ability_QueenOfPain_Blink *const this,
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


// CDOTA_Ability_QueenOfPain_Blink::GetCustomCastError  (line 355, @0x0000000002a78730, libserver.so)
// strings: "#dota_hud_error_cant_target_unexplored"
const char *__fastcall CDOTA_Ability_QueenOfPain_Blink::GetCustomCastError(
        CDOTA_Ability_QueenOfPain_Blink *const this,
        const Vector *const vLocation)
{
  return "#dota_hud_error_cant_target_unexplored";
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::~CDOTA_Ability_QueenOfPain_ScreamOfPain  (line 366, @0x0000000002ac5c50, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::~CDOTA_Ability_QueenOfPain_ScreamOfPain(
        CDOTA_Ability_QueenOfPain_ScreamOfPain *const this)
{
  this->_vptr_IHandleEntity = &off_4417EF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::~CDOTA_Ability_QueenOfPain_ScreamOfPain  (line 366, @0x0000000002ac5c70, libserver.so)  // inlines: ~CDOTA_Ability_QueenOfPain_ScreamOfPain
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::~CDOTA_Ability_QueenOfPain_ScreamOfPain(
        CDOTA_Ability_QueenOfPain_ScreamOfPain *const this)
{
  this->_vptr_IHandleEntity = &off_4417EF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::Schema_DynamicBinding  (line 368, @0x0000000002aba700, libserver.so)
// globals: CDOTA_Ability_QueenOfPain_ScreamOfPain::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::Schema_DynamicBinding(
        const CDOTA_Ability_QueenOfPain_ScreamOfPain *const this)
{
  return CDOTA_Ability_QueenOfPain_ScreamOfPain::s_pSchemaBinding;
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 368, @0x0000000002aba710, libserver.so)
// globals: CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::DestructInstance  (line 368, @0x0000000002aba720, libserver.so)  // inlines: Destruct<CDOTA_Ability_QueenOfPain_ScreamOfPain>
void __fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::FreeInstance  (line 368, @0x0000000002aba740, libserver.so)
void __fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::CanAllocate  (line 368, @0x0000000002aba760, libserver.so)
bool __fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 368, @0x0000000002aba770, libserver.so)
// globals: CDOTA_Ability_QueenOfPain_ScreamOfPain::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_QueenOfPain_ScreamOfPain::s_pSchemaBinding;
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::AllocateInstance  (line 368, @0x0000000002abf500, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::ConstructInstance  (line 368, @0x0000000002ac2eb0, libserver.so)  // inlines: CDOTA_Ability_QueenOfPain_ScreamOfPain, Construct<CDOTA_Ability_QueenOfPain_ScreamOfPain>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4417EF0;
  }
  return p;
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 368, @0x0000000002acc650, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 368, @0x0000000002acc670, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInternal  (line 368, @0x0000000002ae0590, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "queenofpain_scream_of_pain", "CDOTA_Ability_QueenOfPain_ScreamOfPain"
// globals: `guard variable for'CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClass, CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClass, __dso_handle, CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClassInfo, CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClassInfo
CEntityClass *__cdecl CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClass);
    CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClass._vptr_CEntityClass = off_4417E70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClass);
    __cxa_atexit(
      CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_QueenOfPain_ScreamOfPainClass != 0 )
    return &CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClass;
  if ( `guard variable for'CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClassInfo,
      "CDOTA_Ability_QueenOfPain_ScreamOfPain",
      "queenofpain_scream_of_pain",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClassInfo);
  }
  CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClass.m_pClassInfo = &CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClassInfo;
  CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClass.m_pBaseClassInfo = CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_QueenOfPain_ScreamOfPainClass = &CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClass;
  CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClassInfo.m_pClass = &CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClass;
  CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_QueenOfPain_ScreamOfPainClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_QueenOfPain_ScreamOfPain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_ScreamOfPainClass;
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::GetStolenActivityModifier  (line 375, @0x0000000002aba780, libserver.so)
// strings: "scream"
const char *__fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::GetStolenActivityModifier(
        CDOTA_Ability_QueenOfPain_ScreamOfPain *const this)
{
  return "scream";
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::GetAOERadius  (line 377, @0x0000000002ae66a0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "area_of_effect"
float __fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::GetAOERadius(
        CDOTA_Ability_QueenOfPain_ScreamOfPain *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  float result; // xmm0_4

  Caster = CDOTABaseAbility::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
  result = 0.0;
  if ( !HasScepter )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "area_of_effect", -1, 0);
  return result;
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::YouForgotToImplementOrDeclareServerClass  (line 383, @0x0000000002a78740, libserver.so)
int __fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_QueenOfPain_ScreamOfPain *const this)
{
  return 0;
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::GetServerClass  (line 383, @0x0000000002a897b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::GetServerClass(
        CDOTA_Ability_QueenOfPain_ScreamOfPain *const this)
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


// CDOTA_Ability_QueenOfPain_ScreamOfPain::OnSpellStart  (line 392, @0x0000000002aa6660, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Color, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, Purge, Set, operator=, sTrackingProjectileCreateInfo, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_ProjectileManager::CreateTrackingProjectile, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, __stack_chk_fail (14 total)
// strings: "area_of_effect", "particles/units/heroes/hero_queenofpain/queen_scream_of_pain.vpcf", "particles/units/heroes/hero_queenofpain/queen_scream_of_pain_owner.vpcf", "Hero_QueenOfPain.ScreamOfPain"
void __fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::OnSpellStart(
        CDOTA_Ability_QueenOfPain_ScreamOfPain *const this)
{
  __m128i v2; // xmm1
  float v3; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v10; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v12; // eax
  __int16 v13; // cx
  __int64 v14; // r12
  int v15; // ebx
  CDOTA_BaseNPC *v16; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+40h] [rbp-A0h] BYREF
  unsigned __int64 v22; // [rsp+A8h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  *v2.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "area_of_effect", -1, 0);
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Caster, v3, &entities, 2, 19, 0, 0, 0);
  info.bProvidesVision = 0;
  info.hSource.m_Index = -1;
  info.hTarget.m_Index = -1;
  info.bDrawsOnMinimap = 0;
  info.colorGemColor = 0;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.pAttackRecord = 0;
  info.vSourceLoc.y = y;
  z = vec3_origin.z;
  info.iMoveSpeed = 0;
  info.vSourceLoc.z = z;
  info.iSourceAttachment = 1;
  info.iVisionTeamNumber = -1;
  info.iVisionRadius = 0;
  info.bDodgeable = 1;
  info.bIsAttack = 0;
  info.bVisibleToEnemies = 1;
  info.pKVExtraData = 0;
  info.bReplaceExisting = 0;
  info.flExpireTime = 0.0;
  info.flMaxImpactTime = 0.0;
  info.bServerOnly = 0;
  info.pszEffectName = "particles/units/heroes/hero_queenofpain/queen_scream_of_pain.vpcf";
  info.pAbility = this;
  info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "projectile_speed", -1, 0);
  v10 = CDOTABaseAbility::GetCaster(this);
  if ( v10 != 0 && (m_pEntity = v10->m_pEntity) != 0 )
  {
    v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v13 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v13 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v12 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iSourceAttachment = 3;
  info.bDodgeable = 0;
  if ( entities.m_Size > 0 )
  {
    v14 = 0;
    v15 = 0;
    do
    {
      info.hTarget.m_Index = entities.m_Memory.m_pMemory[v14].m_Index;
      CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
      ++v15;
      ++v14;
    }
    while ( entities.m_Size > v15 );
  }
  v16 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v16) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_queenofpain/queen_scream_of_pain_owner.vpcf",
                   1,
                   v16,
                   0,
                   0);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v18, v16);
  v19 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v19, "Hero_QueenOfPain.ScreamOfPain", 0.0, 0, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::OnProjectileHit  (line 424, @0x0000000002a836a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, ApplyDamage
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::OnProjectileHit(
        CDOTA_Ability_QueenOfPain_ScreamOfPain *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v3; // eax
  unsigned __int64 v4; // rsi
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  CDOTA_BaseNPC *m_pInstance; // rbx
  unsigned __int64 m_Value; // rax
  int v11; // r13d
  CDOTA_BaseNPC *Caster; // rax

  v3 = *hTarget;
  if ( (*hTarget + 2) <= 1 )
    return 1;
  v4 = *hTarget;
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F];
  if ( v5 == 0 )
    return 1;
  v6 = &v5[v4 & 0x1FF];
  if ( v6 == 0 || v3 != v6->m_EHandle.m_Index )
    return 1;
  m_pInstance = v6->m_pInstance;
  if ( v6->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
  {
    m_Value = m_pInstance->m_nUnitState64.m_Value;
    if ( (m_Value & 0x200) == 0 && !m_pInstance->m_bIsWaitingToSpawn.m_Value && (m_Value & 0x100) == 0 )
    {
      v11 = (*(this->_vptr_IHandleEntity + 247))(this);
      Caster = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(Caster, m_pInstance, this, v11, 2, 0);
    }
  }
  return 1;
}


// CDOTA_Ability_QueenOfPain_ScreamOfPain::GetAbilityDamageToTargetOverInterval  (line 439, @0x0000000002a7c8c0, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_QueenOfPain_ScreamOfPain::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_QueenOfPain_ScreamOfPain *const this,
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


// CDOTA_Ability_QueenOfPain_SonicWave::~CDOTA_Ability_QueenOfPain_SonicWave  (line 453, @0x0000000002ac5ca0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_QueenOfPain_SonicWave::~CDOTA_Ability_QueenOfPain_SonicWave(
        CDOTA_Ability_QueenOfPain_SonicWave *const this)
{
  this->_vptr_IHandleEntity = &off_44189F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_QueenOfPain_SonicWave::~CDOTA_Ability_QueenOfPain_SonicWave  (line 453, @0x0000000002ac5cc0, libserver.so)  // inlines: ~CDOTA_Ability_QueenOfPain_SonicWave
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_QueenOfPain_SonicWave::~CDOTA_Ability_QueenOfPain_SonicWave(
        CDOTA_Ability_QueenOfPain_SonicWave *const this)
{
  this->_vptr_IHandleEntity = &off_44189F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_QueenOfPain_SonicWave::Schema_DynamicBinding  (line 455, @0x0000000002aba790, libserver.so)
// globals: CDOTA_Ability_QueenOfPain_SonicWave::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_QueenOfPain_SonicWave::Schema_DynamicBinding(
        const CDOTA_Ability_QueenOfPain_SonicWave *const this)
{
  return CDOTA_Ability_QueenOfPain_SonicWave::s_pSchemaBinding;
}


// CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 455, @0x0000000002aba7a0, libserver.so)
// globals: CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::DestructInstance  (line 455, @0x0000000002aba7b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_QueenOfPain_SonicWave>
void __fastcall CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::FreeInstance  (line 455, @0x0000000002aba7d0, libserver.so)
void __fastcall CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::CanAllocate  (line 455, @0x0000000002aba7f0, libserver.so)
bool __fastcall CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 455, @0x0000000002aba800, libserver.so)
// globals: CDOTA_Ability_QueenOfPain_SonicWave::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_QueenOfPain_SonicWave::s_pSchemaBinding;
}


// CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::AllocateInstance  (line 455, @0x0000000002abf540, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::ConstructInstance  (line 455, @0x0000000002ac2ee0, libserver.so)  // inlines: CDOTA_Ability_QueenOfPain_SonicWave, Construct<CDOTA_Ability_QueenOfPain_SonicWave>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44189F0;
  }
  return p;
}


// CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 455, @0x0000000002acc6a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 455, @0x0000000002acc6c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInternal  (line 455, @0x0000000002ae06e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "queenofpain_sonic_wave", "CDOTA_Ability_QueenOfPain_SonicWave"
// globals: `guard variable for'CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClass, CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClass, __dso_handle, CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClassInfo, CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClassInfo
CEntityClass *__cdecl CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClass);
    CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClass._vptr_CEntityClass = off_4418970;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClass);
    __cxa_atexit(
      CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_QueenOfPain_SonicWaveClass != 0 )
    return &CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClass;
  if ( `guard variable for'CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClassInfo,
      "CDOTA_Ability_QueenOfPain_SonicWave",
      "queenofpain_sonic_wave",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClassInfo);
  }
  CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClass.m_pClassInfo = &CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClassInfo;
  CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClass.m_pBaseClassInfo = CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_QueenOfPain_SonicWaveClass = &CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClass;
  CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClassInfo.m_pClass = &CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClass;
  CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_QueenOfPain_SonicWaveClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_QueenOfPain_SonicWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_QueenOfPain_SonicWaveClass;
}


// CDOTA_Ability_QueenOfPain_SonicWave::GetStolenActivityModifier  (line 464, @0x0000000002aba810, libserver.so)
const char *__fastcall CDOTA_Ability_QueenOfPain_SonicWave::GetStolenActivityModifier(
        CDOTA_Ability_QueenOfPain_SonicWave *const this)
{
  return "sonic_wave";
}


// CDOTA_Ability_QueenOfPain_SonicWave::YouForgotToImplementOrDeclareServerClass  (line 476, @0x0000000002a78750, libserver.so)
int __fastcall CDOTA_Ability_QueenOfPain_SonicWave::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_QueenOfPain_SonicWave *const this)
{
  return 0;
}


// CDOTA_Ability_QueenOfPain_SonicWave::GetServerClass  (line 476, @0x0000000002a89bb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_QueenOfPain_SonicWave::GetServerClass(
        CDOTA_Ability_QueenOfPain_SonicWave *const this)
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


// CDOTA_Ability_QueenOfPain_SonicWave::GetCooldown  (line 485, @0x0000000002a9bc40, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_QueenOfPain_SonicWave::GetCooldown(
        CDOTA_Ability_QueenOfPain_SonicWave *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_QueenOfPain_SonicWave::OnSpellStart  (line 497, @0x0000000002a9ff00, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, GetAbilityData, GetEHandle, GetEntryIndex, GetGameTime, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, VectorMultiply, VectorNormalize2D, VectorSubtract, entindex, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, VectorNormalize, CDOTA_ProjectileManager::CreateLinearProjectile, CDOTA_BaseNPC::UnitEmitSound, CEntityInstance::GetEntityIndex, CreateUnitEvent, CDOTAGamerules::SendProjectionAbilityMessage, CBaseEntity::GetAbsAngles, AngleVectors (14 total)
// strings: "starting_aoe", "final_aoe", "particles/units/heroes/hero_queenofpain/queen_sonic_wave.vpcf", "Hero_QueenOfPain.SonicWave"
void __fastcall CDOTA_Ability_QueenOfPain_SonicWave::OnSpellStart(CDOTA_Ability_QueenOfPain_SonicWave *const this)
{
  int LevelSpecialValue; // r14d
  int v3; // eax
  float v4; // xmm0_4
  int v5; // r13d
  CBaseEntity *CursorTarget; // rax
  const Vector *AbsOrigin; // rax
  int v8; // r15d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v10; // rax
  vec_t v11; // xmm1_4
  vec_t v12; // xmm0_4
  int v13; // eax
  int v14; // r13d
  float v15; // xmm3_4
  int v16; // r13d
  vec_t v17; // xmm1_4
  int v18; // r13d
  CDOTA_BaseNPC *v19; // rax
  const Vector *v20; // rax
  vec_t v21; // xmm0_4
  CDOTA_BaseNPC *v22; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v24; // eax
  __int16 v25; // cx
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CEntityIndex v28; // eax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *v31; // rax
  float v32; // xmm3_4
  CDOTA_BaseNPC *v33; // rax
  const QAngle *AbsAngles; // rax
  vec_t z; // [rsp+0h] [rbp-E0h]
  float v36; // [rsp+4h] [rbp-DCh]
  float y; // [rsp+Ch] [rbp-D4h]
  Vector vDirection; // [rsp+20h] [rbp-C0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+30h] [rbp-B0h] BYREF
  Vector CursorPosition; // 0:kr00_12.12

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  this->starting_aoe = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "starting_aoe", -1, 0);
  this->final_aoe = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "final_aoe", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "distance", -1, 0);
  v4 = 0.0;
  v5 = v3;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fStartTime = v4;
  this->m_fTotalTime = v3 / LevelSpecialValue;
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(CursorTarget);
    v8 = _mm_cvtsi128_si32(LODWORD(AbsOrigin->x));
    y = AbsOrigin->y;
    z = AbsOrigin->z;
  }
  else
  {
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    z = CursorPosition.z;
    v8 = _mm_cvtsi128_si32(LODWORD(CursorPosition.x));
    y = CursorPosition.y;
  }
  Caster = CDOTABaseAbility::GetCaster(this);
  v10 = CBaseEntity::GetAbsOrigin(Caster);
  v11 = *&v8 - v10->x;
  v12 = y - v10->y;
  vDirection.z = 0.0;
  vDirection.x = v11;
  vDirection.y = v12;
  if ( VectorNormalize(&vDirection) < 0.0099999998 )
  {
    v33 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v33);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  v13 = (*(this->_vptr_IHandleEntity + 228))(this);
  info.hSource.m_Index = -1;
  v14 = v13 + v5;
  info.fDistance = 0.0;
  v15 = v14;
  v16 = v14 - this->starting_aoe;
  info.fStartRadius = 0.0;
  info.fEndRadius = 0.0;
  info.bHasFrontalCone = 1;
  info.bCheckStartPosition = 0;
  v17 = vec3_origin.y;
  v36 = v15;
  info.vSpawnOrigin.x = vec3_origin.x;
  info.vSpawnOrigin.y = v17;
  info.vVelocity.x = vec3_origin.x;
  info.vVelocity.y = v17;
  info.vAcceleration.x = vec3_origin.x;
  info.vAcceleration.y = v17;
  info.iUnitTargetTeam = 0;
  info.iUnitTargetType = 0;
  info.iUnitTargetFlags = 0;
  info.bProvidesVision = 0;
  info.iVisionTeamNumber = -1;
  info.iVisionRadius = -1;
  info.bDrawsOnMinimap = 0;
  info.bVisibleToEnemies = 1;
  info.bIgnoreSource = 0;
  info.pKVExtraData = 0;
  info.fExpireTime = 0.0;
  v18 = (LevelSpecialValue * (v15 / v16));
  info.vSpawnOrigin.z = vec3_origin.z;
  info.vVelocity.z = info.vSpawnOrigin.z;
  info.vAcceleration.z = info.vSpawnOrigin.z;
  info.fMaxSpeed = 0.0;
  info.pszEffectName = "particles/units/heroes/hero_queenofpain/queen_sonic_wave.vpcf";
  info.bStickyFoWReveal = 1;
  info.pAbility = this;
  v19 = CDOTABaseAbility::GetCaster(this);
  v20 = CBaseEntity::GetAbsOrigin(v19);
  info.vSpawnOrigin.x = v20->x;
  info.vSpawnOrigin.y = v20->y;
  v21 = v20->z;
  info.fDistance = v36;
  info.vSpawnOrigin.z = v21;
  info.vVelocity.y = vDirection.y * v18;
  info.vVelocity.z = vDirection.z * v18;
  info.vVelocity.x = v18 * vDirection.x;
  info.fStartRadius = this->starting_aoe;
  info.fEndRadius = this->final_aoe;
  v22 = CDOTABaseAbility::GetCaster(this);
  if ( v22 != 0 && (m_pEntity = v22->m_pEntity) != 0 )
  {
    v24 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v25 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v25 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v25 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v24 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  info.iUnitTargetFlags = 16;
  info.iUnitTargetType = 19;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v26 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v26, "Hero_QueenOfPain.SonicWave", 0.0, 0, 0);
  v27 = CDOTABaseAbility::GetCaster(this);
  v28.m_Data = CEntityInstance::GetEntityIndex(v27).m_Data;
  CreateUnitEvent(v28, 0, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v31 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v31,
    0,
    m_iAbilityID,
    0,
    0,
    COERCE_DOUBLE(__PAIR64__(LODWORD(y), v8)),
    z,
    -1.0,
    v32);
}


// CDOTA_Ability_QueenOfPain_SonicWave::OnProjectileHit  (line 558, @0x0000000002aa1f50, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, ApplyDamage
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_QueenOfPain_SonicWave::OnProjectileHit(
        CDOTA_Ability_QueenOfPain_SonicWave *const this,
        _DWORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v10; // rax

  if ( (*hTarget + 2) <= 1 )
    return 0;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[*hTarget & 0x1FF];
  if ( v5 == 0 )
    return 0;
  if ( *hTarget != v5->m_EHandle.m_Index )
    return 0;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
    return 0;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_scepter", -1, 0);
  v10 = CDOTABaseAbility::GetCaster(this);
  ApplyDamage(v10, m_pInstance, this, LevelSpecialValue, 4, 0);
  return 0;
}


// CDOTA_Ability_QueenOfPain_SonicWave::GetAbilityDamageToTargetOverInterval  (line 580, @0x0000000002aa2040, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_QueenOfPain_SonicWave::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_QueenOfPain_SonicWave *const this,
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
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


