
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Hero_Recorder::Schema_DynamicBinding  (line 15, @0x00000000025c51c0, libserver.so)
// globals: CDOTA_Hero_Recorder::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Hero_Recorder::Schema_DynamicBinding(
        const CDOTA_Hero_Recorder *const this)
{
  return CDOTA_Hero_Recorder::s_pSchemaBinding;
}


// CDOTA_Hero_Recorder::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 15, @0x00000000025c51d0, libserver.so)
// globals: CDOTA_Hero_Recorder::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Hero_Recorder::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Hero_Recorder::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Hero_Recorder::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Hero_Recorder::CEntityInstanceEntityClass::DestructInstance  (line 15, @0x00000000025c51e0, libserver.so)  // inlines: Destruct<CDOTA_Hero_Recorder>
void __fastcall CDOTA_Hero_Recorder::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Hero_Recorder::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Hero_Recorder::CEntityInstanceEntityClass::FreeInstance  (line 15, @0x00000000025c5200, libserver.so)
void __fastcall CDOTA_Hero_Recorder::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Hero_Recorder::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Hero_Recorder::CEntityInstanceEntityClass::CanAllocate  (line 15, @0x00000000025c5220, libserver.so)
bool __fastcall CDOTA_Hero_Recorder::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Hero_Recorder::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Hero_Recorder::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 15, @0x00000000025c5230, libserver.so)
// globals: CDOTA_Hero_Recorder::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Hero_Recorder::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Hero_Recorder::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Hero_Recorder::s_pSchemaBinding;
}


// CDOTA_Hero_Recorder::CEntityInstanceEntityClass::AllocateInstance  (line 15, @0x00000000025c72b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Hero_Recorder::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Hero_Recorder::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 792);
  memset(v1, 0, 0x318u);
  return v1;
}


// CDOTA_Hero_Recorder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 15, @0x00000000025cb740, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Hero_Recorder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Hero_Recorder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Hero_Recorder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 15, @0x00000000025cb760, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Hero_Recorder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Hero_Recorder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Hero_Recorder::GetEntityClassInternal  (line 15, @0x00000000025cf540, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "dota_hero_recorder", "CDOTA_Hero_Recorder"
// globals: `guard variable for'CDOTA_Hero_Recorder::GetEntityClassInternal(void)::g_EntityCDOTA_Hero_RecorderClass, CDOTA_Hero_Recorder::GetEntityClassInternal(void)::g_EntityCDOTA_Hero_RecorderClass, __dso_handle, CDOTA_Hero_Recorder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Hero_Recorder::GetEntityClassInfo(void)::g_EntityCDOTA_Hero_RecorderClassInfo, CDOTA_Hero_Recorder::GetEntityClassInfo(void)::g_EntityCDOTA_Hero_RecorderClassInfo
CEntityClass *__cdecl CDOTA_Hero_Recorder::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Hero_Recorder::GetEntityClassInternal(void)::g_EntityCDOTA_Hero_RecorderClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Hero_Recorder::GetEntityClassInternal(void)::g_EntityCDOTA_Hero_RecorderClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Hero_Recorder::GetEntityClassInternal(void)::g_EntityCDOTA_Hero_RecorderClass);
    CDOTA_Hero_Recorder::GetEntityClassInternal(void)::g_EntityCDOTA_Hero_RecorderClass._vptr_CEntityClass = off_4100FF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Hero_Recorder::GetEntityClassInternal(void)::g_EntityCDOTA_Hero_RecorderClass);
    __cxa_atexit(
      CDOTA_Hero_Recorder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Hero_Recorder::GetEntityClassInternal(void)::g_EntityCDOTA_Hero_RecorderClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Hero_RecorderClass != 0 )
    return &CDOTA_Hero_Recorder::GetEntityClassInternal(void)::g_EntityCDOTA_Hero_RecorderClass;
  if ( `guard variable for'CDOTA_Hero_Recorder::GetEntityClassInfo(void)::g_EntityCDOTA_Hero_RecorderClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Hero_Recorder::GetEntityClassInfo(void)::g_EntityCDOTA_Hero_RecorderClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Hero_Recorder::GetEntityClassInfo(void)::g_EntityCDOTA_Hero_RecorderClassInfo,
      "CDOTA_Hero_Recorder",
      "dota_hero_recorder",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Hero_Recorder::GetEntityClassInfo(void)::g_EntityCDOTA_Hero_RecorderClassInfo);
  }
  CDOTA_Hero_Recorder::GetEntityClassInternal(void)::g_EntityCDOTA_Hero_RecorderClass.m_pClassInfo = &CDOTA_Hero_Recorder::GetEntityClassInfo(void)::g_EntityCDOTA_Hero_RecorderClassInfo;
  CDOTA_Hero_Recorder::GetEntityClassInternal(void)::g_EntityCDOTA_Hero_RecorderClass.m_pBaseClassInfo = CDOTA_Hero_Recorder::GetEntityClassInfo(void)::g_EntityCDOTA_Hero_RecorderClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Hero_RecorderClass = &CDOTA_Hero_Recorder::GetEntityClassInternal(void)::g_EntityCDOTA_Hero_RecorderClass;
  CDOTA_Hero_Recorder::GetEntityClassInfo(void)::g_EntityCDOTA_Hero_RecorderClassInfo.m_pClass = &CDOTA_Hero_Recorder::GetEntityClassInternal(void)::g_EntityCDOTA_Hero_RecorderClass;
  CDOTA_Hero_Recorder::GetEntityClassInternal(void)::g_EntityCDOTA_Hero_RecorderClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTA_Hero_RecorderClass->m_pComponentOverrides = 0;
  return &CDOTA_Hero_Recorder::GetEntityClassInternal(void)::g_EntityCDOTA_Hero_RecorderClass;
}


// CDOTA_Hero_Recorder::CEntityInstanceEntityClass::ConstructInstance  (line 15, @0x00000000025cf690, libserver.so)  // inlines: Construct<CDOTA_Hero_Recorder>
// calls: CDOTA_Hero_Recorder::CDOTA_Hero_Recorder
CEntityInstance *__fastcall CDOTA_Hero_Recorder::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Hero_Recorder::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTA_Hero_Recorder::CDOTA_Hero_Recorder(p);
  return p;
}


