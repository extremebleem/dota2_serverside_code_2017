
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_TargetDummy::~CDOTA_Unit_TargetDummy  (line 26, @0x0000000002b1dbd0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_TargetDummy::~CDOTA_Unit_TargetDummy(CDOTA_Unit_TargetDummy *const this)
{
  this->_vptr_IHandleEntity = &off_44828D0;
  this->_vptr_INextBotEventResponder = &off_44838B8;
  this->_vptr_CObstructionObject = &off_4483BE8;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_TargetDummy::~CDOTA_Unit_TargetDummy  (line 26, @0x0000000002b1dc10, libserver.so)  // inlines: ~CDOTA_Unit_TargetDummy
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_TargetDummy::~CDOTA_Unit_TargetDummy(CDOTA_Unit_TargetDummy *const this)
{
  this->_vptr_IHandleEntity = &off_44828D0;
  this->_vptr_INextBotEventResponder = &off_44838B8;
  this->_vptr_CObstructionObject = &off_4483BE8;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_TargetDummy::Schema_DynamicBinding  (line 28, @0x0000000002b173a0, libserver.so)
// globals: CDOTA_Unit_TargetDummy::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_TargetDummy::Schema_DynamicBinding(
        const CDOTA_Unit_TargetDummy *const this)
{
  return CDOTA_Unit_TargetDummy::s_pSchemaBinding;
}


// CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002b173d0, libserver.so)
// globals: CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002b173e0, libserver.so)  // inlines: Destruct<CDOTA_Unit_TargetDummy>
void __fastcall CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002b17400, libserver.so)
void __fastcall CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002b17420, libserver.so)
bool __fastcall CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002b17430, libserver.so)
// globals: CDOTA_Unit_TargetDummy::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_TargetDummy::s_pSchemaBinding;
}


// CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002b197f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5888);
  memset(v1, 0, 0x1700u);
  return v1;
}


// CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002b1b380, libserver.so)  // inlines: CDOTA_Unit_TargetDummy, CNetworkVarBase, Construct<CDOTA_Unit_TargetDummy>, EnsureValidValue<float>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *(p + 1467) = 0;
    *p = &off_44828D0;
    *(p + 236) = &off_44838B8;
    *(p + 257) = &off_4483BE8;
    *(p + 1468) = 0;
    *(p + 1469) = 0;
    *(p + 1470) = 0;
  }
  return p;
}


// CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002b22820, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002b22a20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_TargetDummy::GetEntityClassInternal  (line 28, @0x0000000002b2f9a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "npc_dota_hero_target_dummy", "CDOTA_Unit_TargetDummy"
// globals: `guard variable for'CDOTA_Unit_TargetDummy::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_TargetDummyClass, CDOTA_Unit_TargetDummy::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_TargetDummyClass, __dso_handle, CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_TargetDummy::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_TargetDummyClassInfo, CDOTA_Unit_TargetDummy::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_TargetDummyClassInfo
CEntityClass *__cdecl CDOTA_Unit_TargetDummy::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_TargetDummy::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_TargetDummyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_TargetDummy::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_TargetDummyClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_TargetDummy::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_TargetDummyClass);
    CDOTA_Unit_TargetDummy::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_TargetDummyClass._vptr_CEntityClass = off_4482850;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_TargetDummy::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_TargetDummyClass);
    __cxa_atexit(
      CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_TargetDummy::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_TargetDummyClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_TargetDummyClass != 0 )
    return &CDOTA_Unit_TargetDummy::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_TargetDummyClass;
  if ( `guard variable for'CDOTA_Unit_TargetDummy::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_TargetDummyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_TargetDummy::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_TargetDummyClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_TargetDummy::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_TargetDummyClassInfo,
      "CDOTA_Unit_TargetDummy",
      "npc_dota_hero_target_dummy",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_TargetDummy::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_TargetDummyClassInfo);
  }
  CDOTA_Unit_TargetDummy::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_TargetDummyClass.m_pClassInfo = &CDOTA_Unit_TargetDummy::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_TargetDummyClassInfo;
  CDOTA_Unit_TargetDummy::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_TargetDummyClass.m_pBaseClassInfo = CDOTA_Unit_TargetDummy::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_TargetDummyClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_TargetDummyClass = &CDOTA_Unit_TargetDummy::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_TargetDummyClass;
  CDOTA_Unit_TargetDummy::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_TargetDummyClassInfo.m_pClass = &CDOTA_Unit_TargetDummy::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_TargetDummyClass;
  CDOTA_Unit_TargetDummy::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_TargetDummyClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_TargetDummyClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_TargetDummy::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_TargetDummyClass;
}


