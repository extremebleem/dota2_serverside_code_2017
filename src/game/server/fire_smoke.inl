
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseFire::CEntityInstanceEntityClass::DestructInstance  (line 24, @0x0000000001ea7590, libserver.so)  // inlines: Destruct<CBaseFire>
void __fastcall CBaseFire::CEntityInstanceEntityClass::DestructInstance(
        CBaseFire::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseFire::CEntityInstanceEntityClass::FreeInstance  (line 24, @0x0000000001ea75b0, libserver.so)
void __fastcall CBaseFire::CEntityInstanceEntityClass::FreeInstance(
        CBaseFire::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseFire::CEntityInstanceEntityClass::CanAllocate  (line 24, @0x0000000001ea75d0, libserver.so)
bool __fastcall CBaseFire::CEntityInstanceEntityClass::CanAllocate(
        const CBaseFire::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseFire::CEntityInstanceEntityClass::AllocateInstance  (line 24, @0x0000000001ea7710, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseFire::CEntityInstanceEntityClass::AllocateInstance(
        CBaseFire::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 792);
  memset(v1, 0, 0x318u);
  return v1;
}


// CBaseFire::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 24, @0x0000000001ea7790, libserver.so)  // inlines: Schema_StaticBinding
// calls: CBaseFire::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CBaseFire::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseFire::CEntityInstanceEntityClass *const this)
{
  CBaseFire::Schema_VerifyBindingIsRegistered();
  return CBaseFire::s_pSchemaBinding;
}


// CBaseFire::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 24, @0x0000000001ea77b0, libserver.so)
// calls: CBaseFire::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseFire::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseFire::CEntityInstanceEntityClass *const this)
{
  CBaseFire::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CBaseFire::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseFire::CEntityInstanceEntityClass::ConstructInstance  (line 24, @0x0000000001ea77d0, libserver.so)  // inlines: Construct<CBaseFire>
// calls: CBaseFire::CBaseFire
CEntityInstance *__fastcall CBaseFire::CEntityInstanceEntityClass::ConstructInstance(
        CBaseFire::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CBaseFire::CBaseFire(p);
  return p;
}


// CBaseFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x0000000001ea7920, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseFire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CBaseFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x0000000001ea7940, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseFire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseFire::GetEntityClassInfo  (line 24, @0x0000000001fdf6e0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CFireSmoke::GetEntityClassInternal
// strings: "_dummyBaseFireClass", "CBaseFire", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo, CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CBaseFire::GetEntityClassInfo()
{
  if ( `guard variable for'CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo != 0 )
    return &CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo) == 0 )
    return &CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo;
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
    &CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo,
    "CBaseFire",
    "_dummyBaseFireClass",
    0,
    &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo);
  return &CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo;
}


// CBaseFire::GetEntityClassInternal  (line 24, @0x0000000001fdf7f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "_dummyBaseFireClass", "CBaseFire"
// globals: `guard variable for'CBaseFire::GetEntityClassInternal(void)::g_EntityCBaseFireClass, CBaseFire::GetEntityClassInternal(void)::g_EntityCBaseFireClass, __dso_handle, CBaseFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo, CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo
CEntityClass *__cdecl CBaseFire::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseFire::GetEntityClassInternal(void)::g_EntityCBaseFireClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseFire::GetEntityClassInternal(void)::g_EntityCBaseFireClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBaseFire::GetEntityClassInternal(void)::g_EntityCBaseFireClass);
    CBaseFire::GetEntityClassInternal(void)::g_EntityCBaseFireClass._vptr_CEntityClass = off_3FB1F30;
    __cxa_guard_release(&`guard variable for'CBaseFire::GetEntityClassInternal(void)::g_EntityCBaseFireClass);
    __cxa_atexit(
      CBaseFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseFire::GetEntityClassInternal(void)::g_EntityCBaseFireClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseFireClass != 0 )
    return &CBaseFire::GetEntityClassInternal(void)::g_EntityCBaseFireClass;
  if ( `guard variable for'CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo,
      "CBaseFire",
      "_dummyBaseFireClass",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo);
  }
  CBaseFire::GetEntityClassInternal(void)::g_EntityCBaseFireClass.m_pClassInfo = &CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo;
  CBaseFire::GetEntityClassInternal(void)::g_EntityCBaseFireClass.m_pBaseClassInfo = CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseFireClass = &CBaseFire::GetEntityClassInternal(void)::g_EntityCBaseFireClass;
  CBaseFire::GetEntityClassInfo(void)::g_EntityCBaseFireClassInfo.m_pClass = &CBaseFire::GetEntityClassInternal(void)::g_EntityCBaseFireClass;
  CBaseFire::GetEntityClassInternal(void)::g_EntityCBaseFireClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCBaseFireClass->m_pComponentOverrides = 0;
  return &CBaseFire::GetEntityClassInternal(void)::g_EntityCBaseFireClass;
}


// CBaseFire::GetEntityClass  (line 24, @0x000000000220ea40, libserver.so)
CEntityClass *__cdecl CBaseFire::GetEntityClass()
{
  return g_pEntityCBaseFireClass;
}


// CBaseFire::Schema_DynamicBinding  (line 24, @0x00000000022110d0, libserver.so)
// calls: CBaseFire::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseFire::Schema_DynamicBinding(const CBaseFire *const this)
{
  CBaseFire::Schema_VerifyBindingIsRegistered();
  return CBaseFire::s_pSchemaBinding;
}


// CFireSmoke::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 55, @0x0000000001fd80e0, libserver.so)
// globals: CFireSmoke::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFireSmoke::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFireSmoke::CEntityInstanceEntityClass *const this)
{
  return CFireSmoke::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFireSmoke::CEntityInstanceEntityClass::DestructInstance  (line 55, @0x0000000001fd80f0, libserver.so)  // inlines: Destruct<CFireSmoke>
void __fastcall CFireSmoke::CEntityInstanceEntityClass::DestructInstance(
        CFireSmoke::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFireSmoke::CEntityInstanceEntityClass::FreeInstance  (line 55, @0x0000000001fd8110, libserver.so)
void __fastcall CFireSmoke::CEntityInstanceEntityClass::FreeInstance(
        CFireSmoke::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFireSmoke::CEntityInstanceEntityClass::CanAllocate  (line 55, @0x0000000001fd8130, libserver.so)
bool __fastcall CFireSmoke::CEntityInstanceEntityClass::CanAllocate(
        const CFireSmoke::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFireSmoke::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 55, @0x0000000001fd8140, libserver.so)
// globals: CFireSmoke::s_pSchemaBinding
const ISchemaBinding *__fastcall CFireSmoke::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFireSmoke::CEntityInstanceEntityClass *const this)
{
  return CFireSmoke::s_pSchemaBinding;
}


// CFireSmoke::CEntityInstanceEntityClass::AllocateInstance  (line 55, @0x0000000001fd95a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFireSmoke::CEntityInstanceEntityClass::AllocateInstance(
        CFireSmoke::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 800);
  memset(v1, 0, 0x320u);
  return v1;
}


// CFireSmoke::CEntityInstanceEntityClass::ConstructInstance  (line 55, @0x0000000001fd9b00, libserver.so)  // inlines: Construct<CFireSmoke>
// calls: CFireSmoke::CFireSmoke
CEntityInstance *__fastcall CFireSmoke::CEntityInstanceEntityClass::ConstructInstance(
        CFireSmoke::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFireSmoke::CFireSmoke(p);
  return p;
}


// CFireSmoke::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 55, @0x0000000001fdaf30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFireSmoke::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFireSmoke::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFireSmoke::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 55, @0x0000000001fdaf50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFireSmoke::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFireSmoke::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFireSmoke::GetEntityClassInternal  (line 55, @0x0000000001fdf940, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseFire::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "_firesmoke", "CFireSmoke"
// globals: `guard variable for'CFireSmoke::GetEntityClassInternal(void)::g_EntityCFireSmokeClass, CFireSmoke::GetEntityClassInternal(void)::g_EntityCFireSmokeClass, __dso_handle, CFireSmoke::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFireSmoke::GetEntityClassInfo(void)::g_EntityCFireSmokeClassInfo, CFireSmoke::GetEntityClassInfo(void)::g_EntityCFireSmokeClassInfo
CEntityClass *__cdecl CFireSmoke::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFireSmoke::GetEntityClassInternal(void)::g_EntityCFireSmokeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFireSmoke::GetEntityClassInternal(void)::g_EntityCFireSmokeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFireSmoke::GetEntityClassInternal(void)::g_EntityCFireSmokeClass);
    CFireSmoke::GetEntityClassInternal(void)::g_EntityCFireSmokeClass._vptr_CEntityClass = off_3FD7F50;
    __cxa_guard_release(&`guard variable for'CFireSmoke::GetEntityClassInternal(void)::g_EntityCFireSmokeClass);
    __cxa_atexit(
      CFireSmoke::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFireSmoke::GetEntityClassInternal(void)::g_EntityCFireSmokeClass,
      &_dso_handle);
  }
  if ( g_pEntityCFireSmokeClass != 0 )
    return &CFireSmoke::GetEntityClassInternal(void)::g_EntityCFireSmokeClass;
  if ( `guard variable for'CFireSmoke::GetEntityClassInfo(void)::g_EntityCFireSmokeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFireSmoke::GetEntityClassInfo(void)::g_EntityCFireSmokeClassInfo) != 0 )
  {
    EntityClassInfo = CBaseFire::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFireSmoke::GetEntityClassInfo(void)::g_EntityCFireSmokeClassInfo,
      "CFireSmoke",
      "_firesmoke",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFireSmoke::GetEntityClassInfo(void)::g_EntityCFireSmokeClassInfo);
  }
  CFireSmoke::GetEntityClassInternal(void)::g_EntityCFireSmokeClass.m_pClassInfo = &CFireSmoke::GetEntityClassInfo(void)::g_EntityCFireSmokeClassInfo;
  CFireSmoke::GetEntityClassInternal(void)::g_EntityCFireSmokeClass.m_pBaseClassInfo = CFireSmoke::GetEntityClassInfo(void)::g_EntityCFireSmokeClassInfo.m_pBaseClassInfo;
  g_pEntityCFireSmokeClass = &CFireSmoke::GetEntityClassInternal(void)::g_EntityCFireSmokeClass;
  CFireSmoke::GetEntityClassInfo(void)::g_EntityCFireSmokeClassInfo.m_pClass = &CFireSmoke::GetEntityClassInternal(void)::g_EntityCFireSmokeClass;
  CFireSmoke::GetEntityClassInternal(void)::g_EntityCFireSmokeClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCFireSmokeClass->m_pComponentOverrides = 0;
  return &CFireSmoke::GetEntityClassInternal(void)::g_EntityCFireSmokeClass;
}


// CFireSmoke::GetEntityClass  (line 55, @0x000000000220ea50, libserver.so)
CEntityClass *__cdecl CFireSmoke::GetEntityClass()
{
  return g_pEntityCFireSmokeClass;
}


// CFireSmoke::Schema_DynamicBinding  (line 55, @0x00000000022110f0, libserver.so)
// calls: CFireSmoke::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFireSmoke::Schema_DynamicBinding(const CFireSmoke *const this)
{
  CFireSmoke::Schema_VerifyBindingIsRegistered();
  return CFireSmoke::s_pSchemaBinding;
}


