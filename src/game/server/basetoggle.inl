
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseToggle::~CBaseToggle  (line 15, @0x00000000023e9220, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CBaseToggle::~CBaseToggle(CBaseToggle *const this)
{
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CBaseToggle::~CBaseToggle  (line 15, @0x00000000023e9240, libserver.so)  // inlines: ~CBaseToggle
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CBaseToggle::~CBaseToggle(CBaseToggle *const this)
{
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CBaseToggle::CEntityInstanceEntityClass::DestructInstance  (line 17, @0x0000000001eea1e0, libserver.so)  // inlines: Destruct<CBaseToggle>
void __fastcall CBaseToggle::CEntityInstanceEntityClass::DestructInstance(
        CBaseToggle::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseToggle::CEntityInstanceEntityClass::FreeInstance  (line 17, @0x0000000001eea200, libserver.so)
void __fastcall CBaseToggle::CEntityInstanceEntityClass::FreeInstance(
        CBaseToggle::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseToggle::CEntityInstanceEntityClass::CanAllocate  (line 17, @0x0000000001eea220, libserver.so)
bool __fastcall CBaseToggle::CEntityInstanceEntityClass::CanAllocate(
        const CBaseToggle::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseToggle::CEntityInstanceEntityClass::AllocateInstance  (line 17, @0x0000000001eebda0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseToggle::CEntityInstanceEntityClass::AllocateInstance(
        CBaseToggle::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1280);
  memset(v1, 0, 0x500u);
  return v1;
}


// CBaseToggle::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 17, @0x0000000001eec580, libserver.so)  // inlines: Schema_StaticBinding
// calls: CBaseToggle::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CBaseToggle::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseToggle::CEntityInstanceEntityClass *const this)
{
  CBaseToggle::Schema_VerifyBindingIsRegistered();
  return CBaseToggle::s_pSchemaBinding;
}


// CBaseToggle::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 17, @0x0000000001eec5a0, libserver.so)
// calls: CBaseToggle::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseToggle::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseToggle::CEntityInstanceEntityClass *const this)
{
  CBaseToggle::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CBaseToggle::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseToggle::CEntityInstanceEntityClass::ConstructInstance  (line 17, @0x0000000001eec5c0, libserver.so)  // inlines: Construct<CBaseToggle>
// calls: CBaseToggle::CBaseToggle
CEntityInstance *__fastcall CBaseToggle::CEntityInstanceEntityClass::ConstructInstance(
        CBaseToggle::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CBaseToggle::CBaseToggle(p);
  return p;
}


// CBaseToggle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 17, @0x0000000001eedb80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseToggle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseToggle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CBaseToggle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 17, @0x0000000001eedba0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseToggle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseToggle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseToggle::GetEntityClassInternal  (line 17, @0x0000000001fcbf20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseModelEntity>, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "CBaseToggle"
// globals: `guard variable for'CBaseToggle::GetEntityClassInternal(void)::g_EntityCBaseToggleClass, CBaseToggle::GetEntityClassInternal(void)::g_EntityCBaseToggleClass, __dso_handle, CBaseToggle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo, CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo
CEntityClass *__cdecl CBaseToggle::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseToggle::GetEntityClassInternal(void)::g_EntityCBaseToggleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseToggle::GetEntityClassInternal(void)::g_EntityCBaseToggleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBaseToggle::GetEntityClassInternal(void)::g_EntityCBaseToggleClass);
    CBaseToggle::GetEntityClassInternal(void)::g_EntityCBaseToggleClass._vptr_CEntityClass = off_3FB6270;
    __cxa_guard_release(&`guard variable for'CBaseToggle::GetEntityClassInternal(void)::g_EntityCBaseToggleClass);
    __cxa_atexit(
      CBaseToggle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseToggle::GetEntityClassInternal(void)::g_EntityCBaseToggleClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseToggleClass != 0 )
    return &CBaseToggle::GetEntityClassInternal(void)::g_EntityCBaseToggleClass;
  if ( `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo,
      "CBaseToggle",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
  }
  CBaseToggle::GetEntityClassInternal(void)::g_EntityCBaseToggleClass.m_pClassInfo = &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo;
  CBaseToggle::GetEntityClassInternal(void)::g_EntityCBaseToggleClass.m_pBaseClassInfo = CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseToggleClass = &CBaseToggle::GetEntityClassInternal(void)::g_EntityCBaseToggleClass;
  CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo.m_pClass = &CBaseToggle::GetEntityClassInternal(void)::g_EntityCBaseToggleClass;
  CBaseToggle::GetEntityClassInternal(void)::g_EntityCBaseToggleClass.m_pScriptClassDesc = GetScriptDesc<CBaseModelEntity>(0);
  g_pEntityCBaseToggleClass->m_pComponentOverrides = 0;
  return &CBaseToggle::GetEntityClassInternal(void)::g_EntityCBaseToggleClass;
}


// CBaseToggle::GetEntityClassInfo  (line 17, @0x00000000021b4be0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CColorCorrectionVolume::GetEntityClassInternal, CTriggerSoundscape::GetEntityClassInternal, CDOTA_NoWardTrigger::GetEntityClassInternal
// strings: "CBaseToggle", "basemodelentity", "CBaseModelEntity", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo, CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CBaseToggle::GetEntityClassInfo()
{
  if ( `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo != 0 )
    return &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo) == 0 )
    return &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo;
  if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
      {
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
          "CGameEntity",
          0,
          0,
          &g_EntityRootClassInfo);
        __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
        "CBaseEntity",
        0,
        0,
        &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
      "CBaseModelEntity",
      "basemodelentity",
      0,
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo,
    "CBaseToggle",
    0,
    0,
    &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
  return &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo;
}


// CBaseToggle::GetEntityClass  (line 17, @0x00000000023e51b0, libserver.so)
CEntityClass *__cdecl CBaseToggle::GetEntityClass()
{
  return g_pEntityCBaseToggleClass;
}


// CBaseToggle::Schema_DynamicBinding  (line 17, @0x00000000023e8de0, libserver.so)
// calls: CBaseToggle::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseToggle::Schema_DynamicBinding(const CBaseToggle *const this)
{
  CBaseToggle::Schema_VerifyBindingIsRegistered();
  return CBaseToggle::s_pSchemaBinding;
}


// CBaseToggle::GetDelay  (line 48, @0x0000000001eea230, libserver.so)
float __fastcall CBaseToggle::GetDelay(CBaseToggle *const this)
{
  return this->m_flWait;
}


