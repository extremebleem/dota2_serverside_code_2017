// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_tinker.cpp:39
class CDOTA_Unit_Hero_Tinker : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Tinker(CDOTA_Unit_Hero_Tinker &);
	CDOTA_Unit_Hero_Tinker(CDOTA_Unit_Hero_Tinker &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_Tinker();
	virtual ~CDOTA_Unit_Hero_Tinker();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_tinker.cpp:50
class C_CDOTA_Unit_Hero_Tinker_MapInstall {
	C_CDOTA_Unit_Hero_Tinker_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_tinker.cpp:63
class CDOTA_Ability_Tinker_Laser : public CDOTABaseAbility {
public:

private:

	bool bBlocked;  // +0x39c

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
	CDOTA_Ability_Tinker_Laser(CDOTA_Ability_Tinker_Laser &);
	CDOTA_Ability_Tinker_Laser(CDOTA_Ability_Tinker_Laser &);
	CDOTA_Ability_Tinker_Laser();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Tinker_Laser();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[226] GetCastRange
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 952
};

// src/game/shared/dota/units/dota_unit_hero_tinker.cpp:234
class CDOTA_Modifier_Tinker_LaserBlind : public CDOTA_Buff {
public:

private:

	int miss_rate;  // +0xba8
	CDOTA_Modifier_Tinker_LaserBlind();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMiss_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Tinker_LaserBlind();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMiss_Percentage
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_tinker.cpp:281
class CDOTA_Ability_Tinker_HeatSeekingMissile : public CDOTABaseAbility {
public:

private:

	int m_nTargetsKilled;  // +0x390
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
	CDOTA_Ability_Tinker_HeatSeekingMissile(CDOTA_Ability_Tinker_HeatSeekingMissile &);
	CDOTA_Ability_Tinker_HeatSeekingMissile(CDOTA_Ability_Tinker_HeatSeekingMissile &);
	CDOTA_Ability_Tinker_HeatSeekingMissile();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Tinker_HeatSeekingMissile();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[226] GetCastRange
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_tinker.cpp:410
class CDOTA_Ability_Tinker_MarchOfTheMachines : public CDOTABaseAbility {
public:

private:

	int splash_radius;  // +0x390
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
	CDOTA_Ability_Tinker_MarchOfTheMachines(CDOTA_Ability_Tinker_MarchOfTheMachines &);
	CDOTA_Ability_Tinker_MarchOfTheMachines(CDOTA_Ability_Tinker_MarchOfTheMachines &);
	CDOTA_Ability_Tinker_MarchOfTheMachines();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Tinker_MarchOfTheMachines();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_tinker.cpp:484
class CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker : public CDOTA_Buff {
public:

private:

	int collision_radius;  // +0xba8
	int radius;  // +0xbac
	int distance;  // +0xbb0
	int distance_scepter;  // +0xbb4
	int speed;  // +0xbb8
	int machines_per_sec;  // +0xbbc
	CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_tinker.cpp:592
class CDOTA_Ability_Tinker_Rearm : public CDOTABaseAbility {
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
	CDOTA_Ability_Tinker_Rearm(CDOTA_Ability_Tinker_Rearm &);
	CDOTA_Ability_Tinker_Rearm(CDOTA_Ability_Tinker_Rearm &);
	CDOTA_Ability_Tinker_Rearm();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnChannelFinish(bool);
	virtual void OnSpellStart();
	virtual Activity GetCastAnimation();
	virtual ~CDOTA_Ability_Tinker_Rearm();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[267] OnChannelFinish
	// vtable[266] OnSpellStart
	// vtable[234] GetCastAnimation
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_tinker.cpp:700
class CDOTA_Modifier_Tinker_Rearm : public CDOTA_Buff {
public:

	CDOTA_Modifier_Tinker_Rearm(CDOTA_Modifier_Tinker_Rearm &);
	CDOTA_Modifier_Tinker_Rearm(const CDOTA_Modifier_Tinker_Rearm &);
	CDOTA_Modifier_Tinker_Rearm();
	virtual ~CDOTA_Modifier_Tinker_Rearm();

	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Tinker::~CDOTA_Unit_Hero_Tinker  (line 39, @0x0000000002ac6d50, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Tinker::~CDOTA_Unit_Hero_Tinker(CDOTA_Unit_Hero_Tinker *const this)
{
  this->_vptr_IHandleEntity = &off_4432AF0;
  this->_vptr_INextBotEventResponder = &off_4433AD0;
  this->_vptr_CObstructionObject = &off_4433E00;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Tinker::~CDOTA_Unit_Hero_Tinker  (line 39, @0x0000000002ac6d90, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Tinker
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Tinker::~CDOTA_Unit_Hero_Tinker(CDOTA_Unit_Hero_Tinker *const this)
{
  this->_vptr_IHandleEntity = &off_4432AF0;
  this->_vptr_INextBotEventResponder = &off_4433AD0;
  this->_vptr_CObstructionObject = &off_4433E00;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Tinker::Schema_DynamicBinding  (line 41, @0x0000000002abb980, libserver.so)
// globals: CDOTA_Unit_Hero_Tinker::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Tinker::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Tinker *const this)
{
  return CDOTA_Unit_Hero_Tinker::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002abb9b0, libserver.so)
// globals: CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002abb9c0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Tinker>
void __fastcall CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002abb9e0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002abba00, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002abba10, libserver.so)
// globals: CDOTA_Unit_Hero_Tinker::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Tinker::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002abfb40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002ac4bd0, libserver.so)  // inlines: CDOTA_Unit_Hero_Tinker, Construct<CDOTA_Unit_Hero_Tinker>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4432AF0;
    *(p + 236) = &off_4433AD0;
    *(p + 257) = &off_4433E00;
  }
  return p;
}


// CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002acd130, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002acd3e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Tinker::GetEntityClassInternal  (line 41, @0x0000000002ae45e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_hero_tinker", "CDOTA_Unit_Hero_Tinker"
// globals: `guard variable for'CDOTA_Unit_Hero_Tinker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinkerClass, CDOTA_Unit_Hero_Tinker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinkerClass, __dso_handle, CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Tinker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TinkerClassInfo, CDOTA_Unit_Hero_Tinker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TinkerClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Tinker::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Tinker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinkerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Tinker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinkerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Tinker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinkerClass);
    CDOTA_Unit_Hero_Tinker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinkerClass._vptr_CEntityClass = off_4432A70;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Tinker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinkerClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Tinker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinkerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_TinkerClass != 0 )
    return &CDOTA_Unit_Hero_Tinker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinkerClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Tinker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TinkerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Tinker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TinkerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Tinker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TinkerClassInfo,
      "CDOTA_Unit_Hero_Tinker",
      "npc_dota_hero_tinker",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Tinker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TinkerClassInfo);
  }
  CDOTA_Unit_Hero_Tinker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinkerClass.m_pClassInfo = &CDOTA_Unit_Hero_Tinker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TinkerClassInfo;
  CDOTA_Unit_Hero_Tinker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinkerClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Tinker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TinkerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_TinkerClass = &CDOTA_Unit_Hero_Tinker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinkerClass;
  CDOTA_Unit_Hero_Tinker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TinkerClassInfo.m_pClass = &CDOTA_Unit_Hero_Tinker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinkerClass;
  CDOTA_Unit_Hero_Tinker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinkerClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_TinkerClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Tinker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TinkerClass;
}


// CDOTA_Unit_Hero_Tinker::YouForgotToImplementOrDeclareServerClass  (line 50, @0x0000000002a79120, libserver.so)
int __fastcall CDOTA_Unit_Hero_Tinker::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Tinker *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Tinker::GetServerClass  (line 50, @0x0000000002a89d30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Tinker::GetServerClass(CDOTA_Unit_Hero_Tinker *const this)
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


// CDOTA_Ability_Tinker_Laser::~CDOTA_Ability_Tinker_Laser  (line 63, @0x0000000002ae6230, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Tinker_Laser::~CDOTA_Ability_Tinker_Laser(CDOTA_Ability_Tinker_Laser *const this)
{
  this->_vptr_IHandleEntity = &off_4433ED0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory),
        (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Tinker_Laser::~CDOTA_Ability_Tinker_Laser  (line 63, @0x0000000002ae6310, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Tinker_Laser, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Tinker_Laser::~CDOTA_Ability_Tinker_Laser(CDOTA_Ability_Tinker_Laser *const this)
{
  this->_vptr_IHandleEntity = &off_4433ED0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tinker_Laser::Schema_DynamicBinding  (line 65, @0x0000000002abba20, libserver.so)
// globals: CDOTA_Ability_Tinker_Laser::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tinker_Laser::Schema_DynamicBinding(
        const CDOTA_Ability_Tinker_Laser *const this)
{
  return CDOTA_Ability_Tinker_Laser::s_pSchemaBinding;
}


// CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 65, @0x0000000002abba30, libserver.so)
// globals: CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::DestructInstance  (line 65, @0x0000000002abba40, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tinker_Laser>
void __fastcall CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::FreeInstance  (line 65, @0x0000000002abba60, libserver.so)
void __fastcall CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::CanAllocate  (line 65, @0x0000000002abba80, libserver.so)
bool __fastcall CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 65, @0x0000000002abba90, libserver.so)
// globals: CDOTA_Ability_Tinker_Laser::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tinker_Laser::s_pSchemaBinding;
}


// CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::AllocateInstance  (line 65, @0x0000000002abfb80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 952);
  memset(v1, 0, 0x3B8u);
  return v1;
}


// CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::ConstructInstance  (line 65, @0x0000000002aca820, libserver.so)  // inlines: CDOTA_Ability_Tinker_Laser, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Tinker_Laser>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 232) = 0;
    *p = &off_4433ED0;
    *(p + 117) = 0;
    *(p + 236) = 0;
    *(p + 237) = 0;
  }
  return p;
}


// CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 65, @0x0000000002accce0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 65, @0x0000000002accd00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tinker_Laser::GetEntityClassInternal  (line 65, @0x0000000002ae4730, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "tinker_laser", "CDOTA_Ability_Tinker_Laser"
// globals: `guard variable for'CDOTA_Ability_Tinker_Laser::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_LaserClass, CDOTA_Ability_Tinker_Laser::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_LaserClass, __dso_handle, CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tinker_Laser::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_LaserClassInfo, CDOTA_Ability_Tinker_Laser::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_LaserClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tinker_Laser::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tinker_Laser::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_LaserClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tinker_Laser::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_LaserClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tinker_Laser::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_LaserClass);
    CDOTA_Ability_Tinker_Laser::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_LaserClass._vptr_CEntityClass = off_4433E50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tinker_Laser::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_LaserClass);
    __cxa_atexit(
      CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tinker_Laser::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_LaserClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tinker_LaserClass != 0 )
    return &CDOTA_Ability_Tinker_Laser::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_LaserClass;
  if ( `guard variable for'CDOTA_Ability_Tinker_Laser::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_LaserClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tinker_Laser::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_LaserClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tinker_Laser::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_LaserClassInfo,
      "CDOTA_Ability_Tinker_Laser",
      "tinker_laser",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tinker_Laser::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_LaserClassInfo);
  }
  CDOTA_Ability_Tinker_Laser::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_LaserClass.m_pClassInfo = &CDOTA_Ability_Tinker_Laser::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_LaserClassInfo;
  CDOTA_Ability_Tinker_Laser::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_LaserClass.m_pBaseClassInfo = CDOTA_Ability_Tinker_Laser::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_LaserClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tinker_LaserClass = &CDOTA_Ability_Tinker_Laser::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_LaserClass;
  CDOTA_Ability_Tinker_Laser::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_LaserClassInfo.m_pClass = &CDOTA_Ability_Tinker_Laser::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_LaserClass;
  CDOTA_Ability_Tinker_Laser::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_LaserClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tinker_LaserClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tinker_Laser::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_LaserClass;
}


// CDOTA_Ability_Tinker_Laser::GetCastRange  (line 70, @0x0000000002ae67e0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cast_range_scepter"
int __fastcall CDOTA_Ability_Tinker_Laser::GetCastRange(
        CDOTA_Ability_Tinker_Laser *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cast_range_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Ability_Tinker_Laser::OnSpellStart  (line 85, @0x0000000002ab0230, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Color, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsRealHero, IsValid, LookupEntity, Purge, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], sTrackingProjectileCreateInfo, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, ApplyDamage, EconEntity_OnOwnerKillEaterEvent, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (25 total)
// strings: "laser_damage", "special_bonus_unique_tinker", "Hero_Tinker.LaserImpact", "modifier_tinker_laser_blind", "particles/units/heroes/hero_tinker/tinker_laser.vpcf", "Hero_Tinker.Laser" (7 total)
// globals: INVALID_ITEM_DEF_INDEX, CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Tinker_Laser::OnSpellStart(CDOTA_Ability_Tinker_Laser *const this)
{
  CDOTA_Ability_Tinker_Laser *v1; // r12
  CBaseEntity *CursorTarget; // rax
  __int64 v3; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v6; // rax
  double v7; // xmm0_8
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC_Hero *v9; // rdi
  float v10; // xmm1_4
  CDOTA_BaseNPC *v11; // rax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v14; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rax
  int v19; // edx
  __int16 v20; // cx
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  const CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hHitEntities; // r14
  CEntityIdentity *v24; // rdx
  __int16 v25; // cx
  __int64 m_Size; // rbx
  int v27; // eax
  CHandle<CBaseEntity> *v28; // rax
  CDOTA_BaseNPC *v29; // rbx
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v31; // rax
  CEntityIdentity *v32; // rdx
  CEntityIdentity *v33; // rdx
  CEntityInstance *m_pInstance; // rbx
  CEntityIdentity *v35; // r12
  __int16 v36; // si
  int v37; // eax
  CEntityIdentity *v38; // r15
  __int16 v39; // cx
  int v40; // eax
  __int64 v41; // r15
  int v42; // eax
  CHandle<CBaseEntity> *v43; // rax
  CDOTA_BaseNPC *v44; // rax
  double v45; // xmm0_8
  CDOTA_BaseNPC *v46; // rax
  CDOTA_BaseNPC_Hero *v47; // rdi
  float v48; // xmm1_4
  CDOTA_BaseNPC *v49; // rax
  vec_t v50; // xmm0_4
  vec_t v51; // xmm0_4
  CEntityIdentity *v52; // rax
  int v53; // edx
  __int16 v54; // cx
  CEntityIdentity *v55; // rax
  int v56; // edx
  __int16 v57; // cx
  char v58; // bl
  CUtlMemory<CHandle<CBaseEntity>,int> *p_m_Memory; // [rsp+18h] [rbp-108h]
  float flDamage; // [rsp+34h] [rbp-ECh]
  float duration_creepa; // [rsp+38h] [rbp-E8h]
  CDOTA_Ability_Tinker_Laser *duration_creep; // [rsp+38h] [rbp-E8h]
  CDOTA_BaseNPC *pJumpTarget; // [rsp+48h] [rbp-D8h]
  CHandle<CBaseEntity> v64; // [rsp+50h] [rbp-D0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+60h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+80h] [rbp-A0h] BYREF
  unsigned __int64 v67; // [rsp+E8h] [rbp-38h]

  v1 = this;
  v67 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  pJumpTarget = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    v3 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v3 & 0x200) == 0
      && !pJumpTarget->m_bIsWaitingToSpawn.m_Value
      && (v3 & 0x100) == 0
      && !CDOTA_BaseNPC::TriggerSpellAbsorb(pJumpTarget, v1, 1) )
    {
      flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v1, "laser_damage", -1, 0);
      Caster = CDOTABaseAbility::GetCaster(v1);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_tinker", 0);
      if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
        flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flDamage;
      v6 = CDOTABaseAbility::GetCaster(v1);
      v7 = ApplyDamage(v6, pJumpTarget, v1, flDamage, 4, 0);
      if ( (*(pJumpTarget->_vptr_IHandleEntity + 408))(pJumpTarget, v7) == 0
        && (pJumpTarget->m_iUnitType & 1) != 0
        && !pJumpTarget->m_bIsIllusion.m_Value )
      {
        v8 = CDOTABaseAbility::GetCaster(v1);
        if ( v8 != 0 && (v8->m_iUnitType & 1) != 0 )
          v9 = v8;
        else
          v9 = 0;
        EconEntity_OnOwnerKillEaterEvent(
          v9,
          pJumpTarget,
          kill_eater_event_t::kKillEaterEvent_Tinker_LaserKills,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
      CDOTA_BaseNPC::UnitEmitSound(pJumpTarget, "Hero_Tinker.LaserImpact", 0.0, 0, 0);
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(v1, "duration_hero", -1, 0);
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(v1, "duration_creep", -1, 0);
      KeyValues::KeyValues(&info, "modifier_tinker_laser_blind");
      KeyValues::SetFloat(&info, "duration", v10);
      v11 = CDOTABaseAbility::GetCaster(v1);
      CDOTA_BaseNPC::AddNewModifier(pJumpTarget, v11, v1, "modifier_tinker_laser_blind", &info, 0);
      KeyValues::~KeyValues(&info);
      info.hSource.m_Index = -1;
      info.hTarget.m_Index = -1;
      info.colorGemColor = 0;
      info.iSourceAttachment = 1;
      info.pAttackRecord = 0;
      info.vSourceLoc.x = vec3_origin.x;
      y = vec3_origin.y;
      info.bProvidesVision = 0;
      info.vSourceLoc.y = y;
      z = vec3_origin.z;
      info.iVisionTeamNumber = -1;
      info.vSourceLoc.z = z;
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
      info.pszEffectName = "particles/units/heroes/hero_tinker/tinker_laser.vpcf";
      info.pAbility = v1;
      info.iMoveSpeed = 900;
      v14 = CDOTABaseAbility::GetCaster(v1);
      if ( v14 == 0 )
        goto LABEL_82;
      m_pEntity = v14->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v17 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info.hSource.m_Index) = v17 | info.hSource.m_Index & 0x8000;
        info.hSource.m_Index = (v16 << 15) | info.hSource.m_Index & 0x7FFF;
      }
      else
      {
LABEL_82:
        info.hSource.m_Index = -1;
      }
      v18 = pJumpTarget->m_pEntity;
      if ( v18 != 0 )
      {
        v19 = (v18->m_EHandle.m_Index >> 15) - (v18->m_flags & 1);
        v20 = 0x7FFF;
        if ( v18->m_EHandle.m_Index != -1 )
          v20 = v18->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info.hTarget.m_Index) = v20 | info.hTarget.m_Index & 0x8000;
        info.hTarget.m_Index = (v19 << 15) | info.hTarget.m_Index & 0x7FFF;
      }
      else
      {
        info.hTarget.m_Index = -1;
      }
      info.iSourceAttachment = 2;
      CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
      v21 = CDOTABaseAbility::GetCaster(v1);
      CDOTA_BaseNPC::UnitEmitSound(v21, "Hero_Tinker.Laser", 0.0, 0, 0);
      v22 = CDOTABaseAbility::GetCaster(v1);
      if ( CDOTA_BaseNPC::HasScepter(v22) )
      {
        p_m_hHitEntities = &v1->m_hHitEntities;
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&v1->m_hHitEntities);
        hEntities.m_Size = -1;
        v24 = pJumpTarget->m_pEntity;
        if ( v24 != 0 )
        {
          v25 = 0x7FFF;
          if ( v24->m_EHandle.m_Index != -1 )
            v25 = v24->m_EHandle.m_Index & 0x7FFF;
          hEntities.m_Size = (((v24->m_EHandle.m_Index >> 15) - (v24->m_flags & 1)) << 15) | v25 & 0x7FFF;
        }
        m_Size = v1->m_hHitEntities.m_Size;
        v27 = v1->m_hHitEntities.m_Size;
        if ( m_Size == v1->m_hHitEntities.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&v1->m_hHitEntities.m_Memory, 1);
          v27 = v1->m_hHitEntities.m_Size;
        }
        v1->m_hHitEntities.m_Size = v27 + 1;
        v28 = &v1->m_hHitEntities.m_Memory.m_pMemory[m_Size];
        if ( v28 != 0 )
          v28->m_Index = hEntities.m_Size;
        p_m_Memory = &v1->m_hHitEntities.m_Memory;
        do
        {
          hEntities.m_Size = 0;
          hEntities.m_Memory.m_pMemory = 0;
          hEntities.m_Memory.m_nAllocationCount = 0;
          hEntities.m_Memory.m_nGrowSize = 0;
          duration_creepa = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v1, "cast_range_scepter", -1, 0);
          v29 = CDOTABaseAbility::GetCaster(v1);
          AbsOrigin = CBaseEntity::GetAbsOrigin(pJumpTarget);
          v31 = CDOTABaseAbility::GetCaster(v1);
          FindUnitsInRadius(v31->m_iTeamNum.m_Value, AbsOrigin, v29, duration_creepa, &hEntities, 2, 1, 384, 1, 0);
          duration_creep = v1;
          while ( 1 )
          {
            if ( hEntities.m_Size <= 0 )
            {
              v1 = duration_creep;
              v58 = 1;
              goto LABEL_75;
            }
            if ( hEntities.m_Memory.m_pMemory->m_Index + 2 > 1 )
            {
              v32 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(hEntities.m_Memory.m_pMemory->m_Index >> 9) & 0x3F];
              if ( v32 != 0 )
              {
                v33 = &v32[hEntities.m_Memory.m_pMemory->m_Index & 0x1FF];
                if ( v33 != 0 && hEntities.m_Memory.m_pMemory->m_Index == v33->m_EHandle.m_Index )
                {
                  m_pInstance = v33->m_pInstance;
                  if ( v33->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                  {
                    v64.m_Index = -1;
                    v35 = m_pInstance->m_pEntity;
                    if ( v35 != 0 )
                    {
                      v36 = 0x7FFF;
                      v37 = (v35->m_EHandle.m_Index >> 15) - (v35->m_flags & 1);
                      if ( v35->m_EHandle.m_Index != -1 )
                        v36 = v35->m_EHandle.m_Index & 0x7FFF;
                      LOWORD(v64.m_Index) = v36 | v64.m_Index & 0x8000;
                      v64.m_Index = (v37 << 15) | v64.m_Index & 0x7FFF;
                    }
                    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                           p_m_hHitEntities,
                           &v64) < 0 )
                      break;
                  }
                }
              }
            }
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hEntities, 0);
          }
          v64.m_Index = -1;
          v38 = v35;
          v1 = duration_creep;
          if ( v38 != 0 )
          {
            v39 = 0x7FFF;
            v40 = (v38->m_EHandle.m_Index >> 15) - (v38->m_flags & 1);
            if ( v38->m_EHandle.m_Index != -1 )
              v39 = v38->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v64.m_Index) = v39 | v64.m_Index & 0x8000;
            v64.m_Index = (v40 << 15) | v64.m_Index & 0x7FFF;
          }
          v41 = duration_creep->m_hHitEntities.m_Size;
          v42 = duration_creep->m_hHitEntities.m_Size;
          if ( v41 == duration_creep->m_hHitEntities.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(p_m_Memory, 1);
            v42 = duration_creep->m_hHitEntities.m_Size;
          }
          duration_creep->m_hHitEntities.m_Size = v42 + 1;
          v43 = &duration_creep->m_hHitEntities.m_Memory.m_pMemory[v41];
          if ( v43 != 0 )
            v43->m_Index = v64.m_Index;
          v44 = CDOTABaseAbility::GetCaster(duration_creep);
          v45 = ApplyDamage(v44, m_pInstance, duration_creep, flDamage, 4, 0);
          if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v45) == 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
          {
            v46 = CDOTABaseAbility::GetCaster(duration_creep);
            if ( v46 != 0 && (v46->m_iUnitType & 1) != 0 )
              v47 = v46;
            else
              v47 = 0;
            EconEntity_OnOwnerKillEaterEvent(
              v47,
              m_pInstance,
              kill_eater_event_t::kKillEaterEvent_Tinker_LaserKills,
              1,
              INVALID_ITEM_DEF_INDEX);
          }
          CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Tinker.LaserImpact", 0.0, 0, 0);
          CDOTABaseAbility::GetLevelSpecialValueFor<float>(duration_creep, "duration_hero", -1, 0);
          CDOTABaseAbility::GetLevelSpecialValueFor<float>(duration_creep, "duration_creep", -1, 0);
          KeyValues::KeyValues(&info, "modifier_tinker_laser_blind");
          KeyValues::SetFloat(&info, "duration", v48);
          v49 = CDOTABaseAbility::GetCaster(duration_creep);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v49, duration_creep, "modifier_tinker_laser_blind", &info, 0);
          KeyValues::~KeyValues(&info);
          info.bProvidesVision = 0;
          info.hSource.m_Index = -1;
          info.hTarget.m_Index = -1;
          info.colorGemColor = 0;
          info.iSourceAttachment = 1;
          info.pAttackRecord = 0;
          info.vSourceLoc.x = vec3_origin.x;
          v50 = vec3_origin.y;
          info.iVisionTeamNumber = -1;
          info.vSourceLoc.y = v50;
          v51 = vec3_origin.z;
          info.pszEffectName = "particles/units/heroes/hero_tinker/tinker_laser.vpcf";
          info.vSourceLoc.z = v51;
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
          info.pAbility = duration_creep;
          info.iMoveSpeed = 900;
          v52 = pJumpTarget->m_pEntity;
          if ( v52 != 0 )
          {
            v53 = (v52->m_EHandle.m_Index >> 15) - (v52->m_flags & 1);
            v54 = 0x7FFF;
            if ( v52->m_EHandle.m_Index != -1 )
              v54 = v52->m_EHandle.m_Index & 0x7FFF;
            LOWORD(info.hSource.m_Index) = v54 | info.hSource.m_Index & 0x8000;
            info.hSource.m_Index = (v53 << 15) | info.hSource.m_Index & 0x7FFF;
          }
          v55 = m_pInstance->m_pEntity;
          if ( v55 != 0 )
          {
            v56 = (v55->m_EHandle.m_Index >> 15) - (v55->m_flags & 1);
            v57 = 0x7FFF;
            if ( v55->m_EHandle.m_Index != -1 )
              v57 = v55->m_EHandle.m_Index & 0x7FFF;
            LOWORD(info.hTarget.m_Index) = v57 | info.hTarget.m_Index & 0x8000;
            info.hTarget.m_Index = (v56 << 15) | info.hTarget.m_Index & 0x7FFF;
          }
          info.iSourceAttachment = 3;
          CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
          CDOTA_BaseNPC::UnitEmitSound(pJumpTarget, "Hero_Tinker.Laser", 0.0, 0, 0);
          pJumpTarget = m_pInstance;
          v58 = 0;
LABEL_75:
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
          if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
            if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
          }
        }
        while ( v58 == 0 );
      }
    }
  }
}


// CDOTA_Ability_Tinker_Laser::GetAbilityDamageToTargetOverInterval  (line 218, @0x0000000002aa0680, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "laser_damage"
int __fastcall CDOTA_Ability_Tinker_Laser::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Tinker_Laser *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PURE )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "laser_damage", -1, 0);
  else
    return 0;
}


// CDOTA_Modifier_Tinker_LaserBlind::~CDOTA_Modifier_Tinker_LaserBlind  (line 234, @0x0000000002ac06f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tinker_LaserBlind::~CDOTA_Modifier_Tinker_LaserBlind(
        CDOTA_Modifier_Tinker_LaserBlind *const this)
{
  this->_vptr_CDOTA_Buff = &off_4434990;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tinker_LaserBlind::~CDOTA_Modifier_Tinker_LaserBlind  (line 234, @0x0000000002ac0710, libserver.so)  // inlines: ~CDOTA_Modifier_Tinker_LaserBlind
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tinker_LaserBlind::~CDOTA_Modifier_Tinker_LaserBlind(
        CDOTA_Modifier_Tinker_LaserBlind *const this)
{
  this->_vptr_CDOTA_Buff = &off_4434990;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tinker_LaserBlind::IsDebuff  (line 239, @0x0000000002abbaa0, libserver.so)
bool __fastcall CDOTA_Modifier_Tinker_LaserBlind::IsDebuff(CDOTA_Modifier_Tinker_LaserBlind *const this)
{
  return 1;
}


// CDOTA_Modifier_Tinker_LaserBlind::OnCreated  (line 256, @0x0000000002aa9ce0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "miss_rate"
void __fastcall CDOTA_Modifier_Tinker_LaserBlind::OnCreated(
        CDOTA_Modifier_Tinker_LaserBlind *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->miss_rate = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "miss_rate", -1, 0);
  else
    this->miss_rate = 0;
}


// CDOTA_Modifier_Tinker_LaserBlind::DeclareFunctions  (line 263, @0x0000000002a79130, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Tinker_LaserBlind::DeclareFunctions(CDOTA_Modifier_Tinker_LaserBlind *const this)
{
  this->m_Functions[44].__pfn = (&stru_10 + 697);
  this->m_Functions[44].__delta = 0;
}


// CDOTA_Modifier_Tinker_LaserBlind::GetModifierMiss_Percentage  (line 270, @0x0000000002a79150, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tinker_LaserBlind::GetModifierMiss_Percentage(
        CDOTA_Modifier_Tinker_LaserBlind *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->miss_rate;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Tinker_HeatSeekingMissile::~CDOTA_Ability_Tinker_HeatSeekingMissile  (line 281, @0x0000000002ac62e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Tinker_HeatSeekingMissile::~CDOTA_Ability_Tinker_HeatSeekingMissile(
        CDOTA_Ability_Tinker_HeatSeekingMissile *const this)
{
  this->_vptr_IHandleEntity = &off_4434CF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Tinker_HeatSeekingMissile::~CDOTA_Ability_Tinker_HeatSeekingMissile  (line 281, @0x0000000002ac6300, libserver.so)  // inlines: ~CDOTA_Ability_Tinker_HeatSeekingMissile
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Tinker_HeatSeekingMissile::~CDOTA_Ability_Tinker_HeatSeekingMissile(
        CDOTA_Ability_Tinker_HeatSeekingMissile *const this)
{
  this->_vptr_IHandleEntity = &off_4434CF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tinker_HeatSeekingMissile::Schema_DynamicBinding  (line 283, @0x0000000002abbab0, libserver.so)
// globals: CDOTA_Ability_Tinker_HeatSeekingMissile::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tinker_HeatSeekingMissile::Schema_DynamicBinding(
        const CDOTA_Ability_Tinker_HeatSeekingMissile *const this)
{
  return CDOTA_Ability_Tinker_HeatSeekingMissile::s_pSchemaBinding;
}


// CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 283, @0x0000000002abbac0, libserver.so)
// globals: CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::DestructInstance  (line 283, @0x0000000002abbad0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tinker_HeatSeekingMissile>
void __fastcall CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::FreeInstance  (line 283, @0x0000000002abbaf0, libserver.so)
void __fastcall CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::CanAllocate  (line 283, @0x0000000002abbb10, libserver.so)
bool __fastcall CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 283, @0x0000000002abbb20, libserver.so)
// globals: CDOTA_Ability_Tinker_HeatSeekingMissile::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tinker_HeatSeekingMissile::s_pSchemaBinding;
}


// CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::AllocateInstance  (line 283, @0x0000000002abfbc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::ConstructInstance  (line 283, @0x0000000002ac32c0, libserver.so)  // inlines: CDOTA_Ability_Tinker_HeatSeekingMissile, Construct<CDOTA_Ability_Tinker_HeatSeekingMissile>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4434CF0;
  }
  return p;
}


// CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 283, @0x0000000002accd30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 283, @0x0000000002accd50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInternal  (line 283, @0x0000000002ae4880, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "tinker_heat_seeking_missile", "CDOTA_Ability_Tinker_HeatSeekingMissile"
// globals: `guard variable for'CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClass, CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClass, __dso_handle, CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClassInfo, CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClass);
    CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClass._vptr_CEntityClass = off_4434C70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClass);
    __cxa_atexit(
      CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tinker_HeatSeekingMissileClass != 0 )
    return &CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClass;
  if ( `guard variable for'CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClassInfo,
      "CDOTA_Ability_Tinker_HeatSeekingMissile",
      "tinker_heat_seeking_missile",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClassInfo);
  }
  CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClass.m_pClassInfo = &CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClassInfo;
  CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClass.m_pBaseClassInfo = CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tinker_HeatSeekingMissileClass = &CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClass;
  CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClassInfo.m_pClass = &CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClass;
  CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tinker_HeatSeekingMissileClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tinker_HeatSeekingMissile::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_HeatSeekingMissileClass;
}


// CDOTA_Ability_Tinker_HeatSeekingMissile::GetCastRange  (line 288, @0x0000000002ae65e0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
int __fastcall CDOTA_Ability_Tinker_HeatSeekingMissile::GetCastRange(
        CDOTA_Ability_Tinker_HeatSeekingMissile *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Tinker_HeatSeekingMissile::OnSpellStart  (line 306, @0x0000000002aa7d00, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Color, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetParent, GetSerialNumber, GetTeamNumber, Purge, Set, operator=, sTrackingProjectileCreateInfo, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CGameSceneNode::GetOwnerEntity, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTA_BaseNPC::UnitEmitSound, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, GetParticleManager, CDOTA_ParticleManager::CreateParticle (17 total)
// strings: "targets_scepter", "particles/units/heroes/hero_tinker/tinker_missile.vpcf", "Hero_Tinker.Heat-Seeking_Missile", "particles/units/heroes/hero_tinker/tinker_missile_dud.vpcf", "attach_attack3", "Hero_Tinker.Heat-Seeking_Missile_Dud"
void __fastcall CDOTA_Ability_Tinker_HeatSeekingMissile::OnSpellStart(
        CDOTA_Ability_Tinker_HeatSeekingMissile *const this)
{
  int LevelSpecialValue; // ebx
  int v3; // r13d
  int v4; // r14d
  int v5; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // r14
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rdi
  const Vector *AbsOrigin; // r12
  CGameSceneNode *v11; // rdi
  CBaseEntity *v12; // rax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v15; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v17; // eax
  __int16 v18; // cx
  int m_Size; // eax
  __int64 v20; // r12
  int v21; // ebx
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v25; // r12
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  float flRadius; // [rsp+24h] [rbp-CCh]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+50h] [rbp-A0h] BYREF
  unsigned __int64 v32; // [rsp+B8h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "targets", -1, 0);
  v4 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "targets_scepter", -1, 0);
  v5 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    v3 = v4;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  flRadius = v5;
  v7 = CDOTABaseAbility::GetCaster(this);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  else
    OwnerEntity = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(OwnerEntity);
  v11 = this->m_pGameSceneNode->m_pParent;
  if ( v11 != 0 )
    v12 = CGameSceneNode::GetOwnerEntity(v11);
  else
    v12 = 0;
  FindUnitsInRadius(v12->m_iTeamNum.m_Value, AbsOrigin, v7, flRadius, &entities, 2, 1, 131200, 1, 0);
  info.bProvidesVision = 0;
  info.hSource.m_Index = -1;
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.iSourceAttachment = 1;
  info.pAttackRecord = 0;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.iVisionTeamNumber = -1;
  info.vSourceLoc.y = y;
  z = vec3_origin.z;
  info.iVisionRadius = 0;
  info.vSourceLoc.z = z;
  info.bDrawsOnMinimap = 0;
  info.bDodgeable = 1;
  info.bIsAttack = 0;
  info.bVisibleToEnemies = 1;
  info.pKVExtraData = 0;
  info.bReplaceExisting = 0;
  info.flExpireTime = 0.0;
  info.flMaxImpactTime = 0.0;
  info.bServerOnly = 0;
  info.pszEffectName = "particles/units/heroes/hero_tinker/tinker_missile.vpcf";
  info.pAbility = this;
  info.iMoveSpeed = LevelSpecialValue;
  v15 = CDOTABaseAbility::GetCaster(this);
  if ( v15 != 0 && (m_pEntity = v15->m_pEntity) != 0 )
  {
    v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v18 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v18 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v17 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  m_Size = entities.m_Size;
  info.iSourceAttachment = 4;
  this->m_nTargetsKilled = 0;
  if ( m_Size > 0 && v3 != 0 )
  {
    v20 = 0;
    v21 = 0;
    do
    {
      info.hTarget.m_Index = entities.m_Memory.m_pMemory[v20].m_Index;
      CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
      if ( entities.m_Size <= ++v21 )
        break;
      ++v20;
    }
    while ( v3 != v21 );
    v22 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v22, "Hero_Tinker.Heat-Seeking_Missile", 0.0, 0, 0);
  }
  else
  {
    v23 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v23) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_tinker/tinker_missile_dud.vpcf",
                     2,
                     v23,
                     0,
                     0);
    v25 = CDOTABaseAbility::GetCaster(this);
    v26 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v26, v23, 0, v25, 5, "attach_attack3", vec3_invalid, 1);
    v27 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v27, v23);
    v28 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v28, "Hero_Tinker.Heat-Seeking_Missile_Dud", 0.0, 0, 0);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
}


// CDOTA_Ability_Tinker_HeatSeekingMissile::OnProjectileHit  (line 365, @0x0000000002a84360, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, EconEntity_OnOwnerKillEaterEvent
// strings: "particles/units/heroes/hero_tinker/tinker_missle_explosion.vpcf", "attach_hitloc", "Hero_Tinker.Heat-Seeking_Missile.Impact"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_Tinker_HeatSeekingMissile::OnProjectileHit(
        CDOTA_Ability_Tinker_HeatSeekingMissile *const this,
        _DWORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx
  CEntityInstance *m_pInstance; // rbx
  int (**vptr_IHandleEntity)(...); // rax
  int v9; // r13d
  CDOTA_BaseNPC *Caster; // rax
  double v11; // xmm0_8
  int v12; // eax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC_Hero *v18; // rdi

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
  if ( v5->m_pInstance == 0 )
    return 1;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1;
  vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
  if ( (BYTE1(vptr_IHandleEntity) & 2) != 0
    || LOBYTE(m_pInstance[71]._vptr_IHandleEntity) != 0
    || (BYTE1(vptr_IHandleEntity) & 1) != 0 )
  {
    return 1;
  }
  v9 = (*(this->_vptr_IHandleEntity + 247))(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  v11 = ApplyDamage(Caster, m_pInstance, this, v9, 2, 0);
  if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v11) == 0
    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
    && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
  {
    v12 = this->m_nTargetsKilled + 1;
    this->m_nTargetsKilled = v12;
    if ( v12 == 2 )
    {
      v17 = CDOTABaseAbility::GetCaster(this);
      if ( v17 != 0 && (v17->m_iUnitType & 1) != 0 )
        v18 = v17;
      else
        v18 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v18,
        0,
        kill_eater_event_t::kKillEaterEvent_Tinker_DoubleMissileKills,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
  }
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_tinker/tinker_missle_explosion.vpcf",
               2,
               m_pInstance,
               0,
               0);
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v15, Particle, 0, m_pInstance, 5, "attach_hitloc", vec3_invalid, 1);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v16, Particle);
  CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Tinker.Heat-Seeking_Missile.Impact", 0.0, 0, 0);
  return 1;
}


// CDOTA_Ability_Tinker_HeatSeekingMissile::GetAbilityDamageToTargetOverInterval  (line 396, @0x0000000002a7ca40, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Tinker_HeatSeekingMissile::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Tinker_HeatSeekingMissile *const this,
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


// CDOTA_Ability_Tinker_MarchOfTheMachines::~CDOTA_Ability_Tinker_MarchOfTheMachines  (line 410, @0x0000000002ac6330, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Tinker_MarchOfTheMachines::~CDOTA_Ability_Tinker_MarchOfTheMachines(
        CDOTA_Ability_Tinker_MarchOfTheMachines *const this)
{
  this->_vptr_IHandleEntity = &off_44357F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Tinker_MarchOfTheMachines::~CDOTA_Ability_Tinker_MarchOfTheMachines  (line 410, @0x0000000002ac6350, libserver.so)  // inlines: ~CDOTA_Ability_Tinker_MarchOfTheMachines
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Tinker_MarchOfTheMachines::~CDOTA_Ability_Tinker_MarchOfTheMachines(
        CDOTA_Ability_Tinker_MarchOfTheMachines *const this)
{
  this->_vptr_IHandleEntity = &off_44357F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tinker_MarchOfTheMachines::Schema_DynamicBinding  (line 412, @0x0000000002abbb30, libserver.so)
// globals: CDOTA_Ability_Tinker_MarchOfTheMachines::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tinker_MarchOfTheMachines::Schema_DynamicBinding(
        const CDOTA_Ability_Tinker_MarchOfTheMachines *const this)
{
  return CDOTA_Ability_Tinker_MarchOfTheMachines::s_pSchemaBinding;
}


// CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 412, @0x0000000002abbb40, libserver.so)
// globals: CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::DestructInstance  (line 412, @0x0000000002abbb50, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tinker_MarchOfTheMachines>
void __fastcall CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::FreeInstance  (line 412, @0x0000000002abbb70, libserver.so)
void __fastcall CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::CanAllocate  (line 412, @0x0000000002abbb90, libserver.so)
bool __fastcall CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 412, @0x0000000002abbba0, libserver.so)
// globals: CDOTA_Ability_Tinker_MarchOfTheMachines::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tinker_MarchOfTheMachines::s_pSchemaBinding;
}


// CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::AllocateInstance  (line 412, @0x0000000002abfc00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::ConstructInstance  (line 412, @0x0000000002ac32f0, libserver.so)  // inlines: CDOTA_Ability_Tinker_MarchOfTheMachines, Construct<CDOTA_Ability_Tinker_MarchOfTheMachines>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44357F0;
  }
  return p;
}


// CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 412, @0x0000000002accd80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 412, @0x0000000002accda0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInternal  (line 412, @0x0000000002ae49d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "tinker_march_of_the_machines", "CDOTA_Ability_Tinker_MarchOfTheMachines"
// globals: `guard variable for'CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClass, CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClass, __dso_handle, CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClassInfo, CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClass);
    CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClass._vptr_CEntityClass = off_4435770;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClass);
    __cxa_atexit(
      CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tinker_MarchOfTheMachinesClass != 0 )
    return &CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClass;
  if ( `guard variable for'CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClassInfo,
      "CDOTA_Ability_Tinker_MarchOfTheMachines",
      "tinker_march_of_the_machines",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClassInfo);
  }
  CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClass.m_pClassInfo = &CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClassInfo;
  CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClass.m_pBaseClassInfo = CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tinker_MarchOfTheMachinesClass = &CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClass;
  CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClassInfo.m_pClass = &CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClass;
  CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tinker_MarchOfTheMachinesClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tinker_MarchOfTheMachines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_MarchOfTheMachinesClass;
}


// CDOTA_Ability_Tinker_MarchOfTheMachines::OnSpellStart  (line 426, @0x0000000002aa3e80, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, Thinker_Create, DOTA_EmitSound, DOTA_EmitSoundLocation, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "splash_radius", "modifier_tinker_march_thinker", "Hero_Tinker.March_of_the_Machines.Cast", "Hero_Tinker.March_of_the_Machines"
void __fastcall CDOTA_Ability_Tinker_MarchOfTheMachines::OnSpellStart(
        CDOTA_Ability_Tinker_MarchOfTheMachines *const this)
{
  float v2; // xmm1_4
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  Vector CursorPosition; // [rsp+20h] [rbp-60h] BYREF
  Vector vOrigin; // [rsp+30h] [rbp-50h]
  KeyValues kv; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  this->splash_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "splash_radius", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_tinker_march_thinker");
  KeyValues::SetFloat(&kv, "duration", v2);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  vOrigin = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(Caster, this, "modifier_tinker_march_thinker", &kv, vOrigin, m_Value, 0, 1, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Tinker.March_of_the_Machines.Cast", v5);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  DOTA_EmitSoundLocation(&CursorPosition, "Hero_Tinker.March_of_the_Machines", 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Tinker_MarchOfTheMachines::OnProjectileHit  (line 446, @0x0000000002a99360, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGameSceneNode::GetOwnerEntity, CEntityHandle::operator CEntityInstance*, FindUnitsInRadius, CDOTABaseAbility::GetCaster, ApplyDamage, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Tinker_MarchOfTheMachines::OnProjectileHit(
        CDOTA_Ability_Tinker_MarchOfTheMachines *const this,
        const CEntityHandle *hTarget,
        const Vector *const vLocation)
{
  CGameSceneNode *m_pParent; // rdi
  __m128i v7; // xmm2
  float v8; // r12d
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // r14
  CGameSceneNode *v11; // rdi
  CBaseEntity *OwnerEntity; // rax
  __int64 v13; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_BaseNPC *Caster; // rax
  float flDamage; // [rsp+1Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-50h] BYREF

  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent == 0 || CGameSceneNode::GetOwnerEntity(m_pParent) == 0 )
    return 1;
  *v7.m128i_i32 = this->splash_radius;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  v9 = CEntityHandle::operator CEntityInstance *(hTarget);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
  {
    v10 = v9;
    v11 = this->m_pGameSceneNode->m_pParent;
    if ( v11 != 0 )
      goto LABEL_6;
LABEL_22:
    OwnerEntity = 0;
    goto LABEL_7;
  }
  v10 = 0;
  v11 = this->m_pGameSceneNode->m_pParent;
  if ( v11 == 0 )
    goto LABEL_22;
LABEL_6:
  OwnerEntity = CGameSceneNode::GetOwnerEntity(v11);
LABEL_7:
  FindUnitsInRadius(OwnerEntity->m_iTeamNum.m_Value, vLocation, v10, v8, &entities, 2, 3, 16, 0, 0);
  v13 = 0;
  for ( i = 0; entities.m_Size > i; ++v13 )
  {
    while ( 1 )
    {
      v15 = &entities.m_Memory.m_pMemory[v13];
      m_Index = entities.m_Memory.m_pMemory[v13].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v17 = v15->m_Index;
        v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
        if ( v18 != 0 )
        {
          v19 = &v18[v17 & 0x1FF];
          if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
          {
            m_pInstance = v19->m_pInstance;
            if ( v19->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              break;
          }
        }
      }
      ++i;
      ++v13;
      if ( entities.m_Size <= i )
        goto LABEL_17;
    }
    flDamage = (*(this->_vptr_IHandleEntity + 247))(this);
    Caster = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(Caster, m_pInstance, this, flDamage, 2, 0);
    ++i;
  }
LABEL_17:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
  return 1;
}


// CDOTA_Ability_Tinker_MarchOfTheMachines::GetAbilityDamageToTargetOverInterval  (line 469, @0x0000000002a9be40, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Tinker_MarchOfTheMachines::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Tinker_MarchOfTheMachines *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_Ability_Tinker_MarchOfTheMachines *v6; // rbx
  float fIntervala; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v6 = this;
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0));
    LODWORD(v6) = (*(v6->_vptr_IHandleEntity + 247))(v6);
    return (((v6 * fIntervala) + (v6 * fIntervala)) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker::~CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker  (line 484, @0x0000000002ac06a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker::~CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker(
        CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_44362B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker::~CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker  (line 484, @0x0000000002ac06c0, libserver.so)  // inlines: ~CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker::~CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker(
        CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_44362B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker::OnCreated  (line 508, @0x0000000002aad8d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, VectorNormalize2D, VectorSubtract, operator-, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, DotaRetrieveAbilityValue<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, VectorNormalize, CBaseEntity::GetAbsAngles, AngleVectors
// strings: "collision_radius", "distance_scepter", "machines_per_sec"
void __fastcall CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker::OnCreated(
        CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  int LevelSpecialValue; // eax
  float v10; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Parent; // rax
  const Vector *v14; // rax
  vec_t v15; // xmm0_4
  vec_t v16; // xmm1_4
  CDOTA_BaseNPC *v17; // rax
  const QAngle *AbsAngles; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->collision_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "collision_radius", -1, 0);
  else
    this->collision_radius = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "radius", -1, 0);
  else
    this->radius = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->distance, "distance");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->distance_scepter, "distance_scepter");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->speed, "speed");
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "machines_per_sec", -1, 0);
    v10 = LevelSpecialValue;
    this->machines_per_sec = LevelSpecialValue;
  }
  else
  {
    this->machines_per_sec = 0;
    v10 = 0.0;
  }
  CDOTA_Buff::StartIntervalThink(this, 1.0 / v10, v10);
  Caster = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  Parent = CDOTA_Buff::GetParent(this);
  v14 = CBaseEntity::GetAbsOrigin(Parent);
  v15 = v14->y - AbsOrigin->y;
  v16 = v14->x - AbsOrigin->x;
  this->m_vDir.z = 0.0;
  this->m_vDir.y = v15;
  this->m_vDir.x = v16;
  if ( VectorNormalize(&this->m_vDir) < 0.0099999998 )
  {
    v17 = CDOTA_Buff::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v17);
    AngleVectors(AbsAngles, &this->m_vDir, 0, 0);
  }
}


// CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker::OnIntervalThink  (line 540, @0x0000000002a81e70, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, VectorMultiply, VectorSubtract, operator*, operator+=, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, RandomFloat, CDOTA_ProjectileManager::CreateLinearProjectile
// strings: "particles/units/heroes/hero_tinker/tinker_machine.vpcf"
void __fastcall CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker::OnIntervalThink(
        CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker *const this)
{
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTABaseAbility *Ability; // rax
  float speed; // xmm0_4
  float v6; // xmm2_4
  vec_t v7; // xmm2_4
  vec_t v8; // xmm1_4
  vec_t v9; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  float distance_scepter; // xmm0_4
  CDOTA_BaseNPC *v12; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v14; // cx
  float radius; // xmm0_4
  float x; // xmm5_4
  float v17; // xmm6_4
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  float v20; // xmm0_4
  float v21; // xmm3_4
  float v22; // [rsp+0h] [rbp-A0h]
  float v23; // [rsp+4h] [rbp-9Ch]
  float v24; // [rsp+8h] [rbp-98h]
  float v25; // [rsp+8h] [rbp-98h]
  float v26; // [rsp+Ch] [rbp-94h]
  float v27; // [rsp+Ch] [rbp-94h]
  sLinearProjectileCreateInfo info; // [rsp+10h] [rbp-90h] BYREF

  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    info.bHasFrontalCone = 1;
    info.hSource.m_Index = -1;
    info.pAbility = 0;
    info.fDistance = 0.0;
    info.fStartRadius = 0.0;
    y = vec3_origin.y;
    info.fEndRadius = 0.0;
    z = vec3_origin.z;
    info.bCheckStartPosition = 0;
    info.vSpawnOrigin.x = vec3_origin.x;
    info.vSpawnOrigin.y = y;
    info.vSpawnOrigin.z = z;
    info.vVelocity.x = vec3_origin.x;
    info.vVelocity.y = y;
    info.vVelocity.z = z;
    info.vAcceleration.x = vec3_origin.x;
    info.vAcceleration.y = y;
    info.vAcceleration.z = z;
    info.iUnitTargetTeam = 0;
    info.iUnitTargetType = 0;
    info.iUnitTargetFlags = 0;
    info.bProvidesVision = 0;
    info.iVisionTeamNumber = -1;
    info.iVisionRadius = -1;
    info.bDrawsOnMinimap = 0;
    info.bVisibleToEnemies = 1;
    info.bIgnoreSource = 0;
    info.bStickyFoWReveal = 0;
    info.pKVExtraData = 0;
    info.fExpireTime = 0.0;
    info.fMaxSpeed = 0.0;
    info.pszEffectName = "particles/units/heroes/hero_tinker/tinker_machine.vpcf";
    Ability = CDOTA_Buff::GetAbility(this);
    speed = this->speed;
    v6 = this->m_vDir.y;
    info.pAbility = Ability;
    v7 = v6 * speed;
    v8 = this->m_vDir.z * speed;
    v9 = speed * this->m_vDir.x;
    info.vVelocity.y = v7;
    info.vVelocity.z = v8;
    info.vVelocity.x = v9;
    Caster = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(Caster) )
      distance_scepter = this->distance_scepter;
    else
      distance_scepter = this->distance;
    info.fDistance = distance_scepter;
    info.fStartRadius = this->collision_radius;
    info.fEndRadius = info.fStartRadius;
    v12 = CDOTA_Buff::GetCaster(this);
    if ( v12 != 0 && (m_pEntity = v12->m_pEntity) != 0 )
    {
      v14 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v14 & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    radius = this->radius;
    info.iUnitTargetTeam = 2;
    x = this->m_vDir.x;
    info.iUnitTargetType = 3;
    v17 = this->m_vDir.y;
    info.iUnitTargetFlags = 16;
    v26 = x * radius;
    v24 = v17 * radius;
    v23 = radius * this->m_vDir.z;
    Parent = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
    v22 = AbsOrigin->x - v26;
    v25 = AbsOrigin->y - v24;
    v27 = AbsOrigin->z - v23;
    v20 = RandomFloat(-this->radius, this->radius);
    v21 = this->m_vDir.y * v20;
    info.vSpawnOrigin.y = (this->m_vDir.x * v20) + v25;
    info.vSpawnOrigin.x = v22 - v21;
    info.vSpawnOrigin.z = (v20 * 0.0) + v27;
    CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  }
}


// CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker::OnDestroy  (line 577, @0x0000000002a7a6a0, libserver.so)
// calls: CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker::OnDestroy(
        CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Ability_Tinker_Rearm::~CDOTA_Ability_Tinker_Rearm  (line 592, @0x0000000002ac6380, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Tinker_Rearm::~CDOTA_Ability_Tinker_Rearm(CDOTA_Ability_Tinker_Rearm *const this)
{
  this->_vptr_IHandleEntity = &off_4436610;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Tinker_Rearm::~CDOTA_Ability_Tinker_Rearm  (line 592, @0x0000000002ac63a0, libserver.so)  // inlines: ~CDOTA_Ability_Tinker_Rearm
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Tinker_Rearm::~CDOTA_Ability_Tinker_Rearm(CDOTA_Ability_Tinker_Rearm *const this)
{
  this->_vptr_IHandleEntity = &off_4436610;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tinker_Rearm::Schema_DynamicBinding  (line 594, @0x0000000002abbbb0, libserver.so)
// globals: CDOTA_Ability_Tinker_Rearm::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tinker_Rearm::Schema_DynamicBinding(
        const CDOTA_Ability_Tinker_Rearm *const this)
{
  return CDOTA_Ability_Tinker_Rearm::s_pSchemaBinding;
}


// CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 594, @0x0000000002abbbc0, libserver.so)
// globals: CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::DestructInstance  (line 594, @0x0000000002abbbd0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tinker_Rearm>
void __fastcall CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::FreeInstance  (line 594, @0x0000000002abbbf0, libserver.so)
void __fastcall CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::CanAllocate  (line 594, @0x0000000002abbc10, libserver.so)
bool __fastcall CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 594, @0x0000000002abbc20, libserver.so)
// globals: CDOTA_Ability_Tinker_Rearm::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tinker_Rearm::s_pSchemaBinding;
}


// CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::AllocateInstance  (line 594, @0x0000000002abfc40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::ConstructInstance  (line 594, @0x0000000002ac3320, libserver.so)  // inlines: CDOTA_Ability_Tinker_Rearm, Construct<CDOTA_Ability_Tinker_Rearm>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4436610;
  }
  return p;
}


// CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 594, @0x0000000002accdd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 594, @0x0000000002accdf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tinker_Rearm::GetEntityClassInternal  (line 594, @0x0000000002ae4b20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Tinker_Rearm"
// globals: `guard variable for'CDOTA_Ability_Tinker_Rearm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_RearmClass, CDOTA_Ability_Tinker_Rearm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_RearmClass, __dso_handle, CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tinker_Rearm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_RearmClassInfo, CDOTA_Ability_Tinker_Rearm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_RearmClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tinker_Rearm::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tinker_Rearm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_RearmClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tinker_Rearm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_RearmClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tinker_Rearm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_RearmClass);
    CDOTA_Ability_Tinker_Rearm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_RearmClass._vptr_CEntityClass = off_4436590;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tinker_Rearm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_RearmClass);
    __cxa_atexit(
      CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tinker_Rearm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_RearmClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tinker_RearmClass != 0 )
    return &CDOTA_Ability_Tinker_Rearm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_RearmClass;
  if ( `guard variable for'CDOTA_Ability_Tinker_Rearm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_RearmClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tinker_Rearm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_RearmClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tinker_Rearm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_RearmClassInfo,
      "CDOTA_Ability_Tinker_Rearm",
      "tinker_rearm",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tinker_Rearm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_RearmClassInfo);
  }
  CDOTA_Ability_Tinker_Rearm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_RearmClass.m_pClassInfo = &CDOTA_Ability_Tinker_Rearm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_RearmClassInfo;
  CDOTA_Ability_Tinker_Rearm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_RearmClass.m_pBaseClassInfo = CDOTA_Ability_Tinker_Rearm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_RearmClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tinker_RearmClass = &CDOTA_Ability_Tinker_Rearm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_RearmClass;
  CDOTA_Ability_Tinker_Rearm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tinker_RearmClassInfo.m_pClass = &CDOTA_Ability_Tinker_Rearm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_RearmClass;
  CDOTA_Ability_Tinker_Rearm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_RearmClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tinker_RearmClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tinker_Rearm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tinker_RearmClass;
}


// CDOTA_Ability_Tinker_Rearm::OnSpellStart  (line 610, @0x0000000002a7a240, libserver.so)
// calls: KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_tinker_rearm", "particles/units/heroes/hero_tinker/tinker_rearm.vpcf", "attach_attack2", "attach_attack3", "Hero_Tinker.Rearm"
void __fastcall CDOTA_Ability_Tinker_Rearm::OnSpellStart(CDOTA_Ability_Tinker_Rearm *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  CDOTA_BaseNPC *v8; // r15
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // r15
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_tinker_rearm");
  (*(this->_vptr_IHandleEntity + 225))(this);
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_tinker_rearm", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_tinker/tinker_rearm.vpcf",
               2,
               v5,
               0,
               0);
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v9, Particle, 0, v8, 5, "attach_attack2", vec3_invalid, 1);
  v10 = CDOTABaseAbility::GetCaster(this);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v11, Particle, 1, v10, 5, "attach_attack3", vec3_invalid, 1);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v12, Particle);
  v13 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v13, "Hero_Tinker.Rearm", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Tinker_Rearm::GetCastAnimation  (line 630, @0x0000000002a7a930, libserver.so)
// calls: CDOTABaseAbility::GetCastAnimation
Activity __fastcall CDOTA_Ability_Tinker_Rearm::GetCastAnimation(CDOTA_Ability_Tinker_Rearm *const this)
{
  int m_Value; // edx
  Activity result; // eax

  if ( this->m_bStolen.m_Value )
    return CDOTABaseAbility::GetCastAnimation(this);
  m_Value = this->m_iLevel.m_Value;
  result = 1556;
  if ( m_Value != 2 )
    return 2 * (m_Value == 3) + 1555;
  return result;
}


// CDOTA_Ability_Tinker_Rearm::OnChannelFinish  (line 651, @0x0000000002a7bb90, libserver.so)  // inlines: FStrEq, GetAbilityName, GetPlayerOwnerID, ToDOTABaseNPCHero, _V_strcmp
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::EndCooldown, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, EconEntity_OnOwnerKillEaterEvent, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_tinker_rearm", "item_helm_of_the_dominator", "item_refresher", "item_necronomicon_2", "item_necronomicon_3"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Tinker_Rearm::OnChannelFinish(CDOTA_Ability_Tinker_Rearm *const this, bool bInterrupted)
{
  int v2; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTABaseAbility *v9; // r14
  int m_Value; // r15d
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC_Hero *v13; // rdi
  CDOTA_BaseNPC *v14; // rax
  char **m_pAbilityData; // rax
  char *v16; // rax

  v2 = 0;
  if ( !bInterrupted )
  {
    do
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(Caster, v2);
      if ( AbilityByIndex != 0 )
        CDOTABaseAbility::EndCooldown(AbilityByIndex);
      ++v2;
    }
    while ( v2 != 24 );
    LOBYTE(v2) = 0;
    do
    {
      v6 = CDOTABaseAbility::GetCaster(this);
      Inventory = CDOTA_BaseNPC::GetInventory(v6);
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v2);
      v9 = ItemInSlot;
      if ( ItemInSlot != 0 )
      {
        m_Value = ItemInSlot->m_iPlayerOwnerID.m_Value;
        if ( m_Value != -1 )
        {
          v11 = CDOTABaseAbility::GetCaster(this);
          if ( (*(v11->_vptr_IHandleEntity + 414))(v11) == m_Value )
          {
            m_pAbilityData = v9->m_pAbilityData;
            if ( m_pAbilityData == 0
              || (v16 = *m_pAbilityData) == 0
              || v16 != "item_black_king_bar"
              && strcmp(v16, "item_black_king_bar") != 0
              && v16 != "item_arcane_boots"
              && strcmp(v16, "item_arcane_boots") != 0
              && v16 != "item_sphere"
              && strcmp(v16, "item_sphere") != 0
              && v16 != "item_helm_of_the_dominator"
              && strcmp(v16, "item_helm_of_the_dominator") != 0
              && v16 != "item_hand_of_midas"
              && strcmp(v16, "item_hand_of_midas") != 0
              && v16 != "item_refresher"
              && strcmp(v16, "item_refresher") != 0
              && v16 != "item_pipe"
              && strcmp(v16, "item_pipe") != 0
              && v16 != "item_necronomicon"
              && strcmp(v16, "item_necronomicon") != 0
              && v16 != "item_necronomicon_2"
              && strcmp(v16, "item_necronomicon_2") != 0
              && v16 != "item_necronomicon_3"
              && strcmp(v16, "item_necronomicon_3") != 0 )
            {
              CDOTABaseAbility::EndCooldown(v9);
            }
          }
        }
      }
      ++v2;
    }
    while ( v2 != 6 );
    v12 = CDOTABaseAbility::GetCaster(this);
    if ( v12 != 0 && (v12->m_iUnitType & 1) != 0 )
      v13 = v12;
    else
      v13 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v13,
      0,
      kill_eater_event_t::kKillEaterEvent_Tinker_Rearms,
      1,
      INVALID_ITEM_DEF_INDEX);
  }
  v14 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v14, "modifier_tinker_rearm");
}


// CDOTA_Modifier_Tinker_Rearm::~CDOTA_Modifier_Tinker_Rearm  (line 700, @0x0000000002ac2260, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tinker_Rearm::~CDOTA_Modifier_Tinker_Rearm(CDOTA_Modifier_Tinker_Rearm *const this)
{
  this->_vptr_CDOTA_Buff = &off_4437090;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tinker_Rearm::~CDOTA_Modifier_Tinker_Rearm  (line 700, @0x0000000002ac2280, libserver.so)  // inlines: ~CDOTA_Modifier_Tinker_Rearm
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tinker_Rearm::~CDOTA_Modifier_Tinker_Rearm(CDOTA_Modifier_Tinker_Rearm *const this)
{
  this->_vptr_CDOTA_Buff = &off_4437090;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


