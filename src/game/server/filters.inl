
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseFilter::~CBaseFilter  (line 34, @0x0000000002210870, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CBaseFilter::~CBaseFilter(CBaseFilter *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CBaseFilter::~CBaseFilter  (line 34, @0x0000000002210890, libserver.so)  // inlines: ~CBaseFilter, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CBaseFilter::~CBaseFilter(CBaseFilter *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CBaseFilter::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 36, @0x0000000001fd79c0, libserver.so)
// globals: CBaseFilter::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseFilter::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseFilter::CEntityInstanceEntityClass *const this)
{
  return CBaseFilter::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseFilter::CEntityInstanceEntityClass::DestructInstance  (line 36, @0x0000000001fd79d0, libserver.so)  // inlines: Destruct<CBaseFilter>
void __fastcall CBaseFilter::CEntityInstanceEntityClass::DestructInstance(
        CBaseFilter::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseFilter::CEntityInstanceEntityClass::FreeInstance  (line 36, @0x0000000001fd79f0, libserver.so)
void __fastcall CBaseFilter::CEntityInstanceEntityClass::FreeInstance(
        CBaseFilter::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseFilter::CEntityInstanceEntityClass::CanAllocate  (line 36, @0x0000000001fd7a10, libserver.so)
bool __fastcall CBaseFilter::CEntityInstanceEntityClass::CanAllocate(
        const CBaseFilter::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseFilter::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 36, @0x0000000001fd7a20, libserver.so)
// globals: CBaseFilter::s_pSchemaBinding
const ISchemaBinding *__fastcall CBaseFilter::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseFilter::CEntityInstanceEntityClass *const this)
{
  return CBaseFilter::s_pSchemaBinding;
}


// CBaseFilter::CEntityInstanceEntityClass::AllocateInstance  (line 36, @0x0000000001fd91a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseFilter::CEntityInstanceEntityClass::AllocateInstance(
        CBaseFilter::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 832);
  memset(v1, 0, 0x340u);
  return v1;
}


// CBaseFilter::CEntityInstanceEntityClass::ConstructInstance  (line 36, @0x0000000001fd9760, libserver.so)  // inlines: CBaseFilter, CEntityIOOutput, CLogicalEntity, CServerOnlyEntity, Construct<CBaseFilter>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CBaseFilter::CEntityInstanceEntityClass::ConstructInstance(
        CBaseFilter::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4032E10;
    *(p + 98) = off_3F7C190;
    *(p + 101) = off_3F7C190;
  }
  return p;
}


// CBaseFilter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x0000000001fda8a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseFilter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseFilter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CBaseFilter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x0000000001fda8c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseFilter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseFilter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseFilter::GetEntityClassInfo  (line 36, @0x0000000001fdce80, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CFilterMultiple::GetEntityClassInternal, CFilterProximity::GetEntityClassInternal, CFilterLOS::GetEntityClassInternal, CFilterName::GetEntityClassInternal, CFilterModel::GetEntityClassInternal, CFilterContext::GetEntityClassInternal, CFilterClass::GetEntityClassInternal, FilterTeam::GetEntityClassInternal, CFilterMassGreater::GetEntityClassInternal, FilterDamageType::GetEntityClassInternal, FilterHealth::GetEntityClassInternal, CFilterEnemy::GetEntityClassInternal
// strings: "filter_base", "CBaseFilter", "CLogicalEntity", "CServerOnlyEntity"
// globals: `guard variable for'CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo, CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo, `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo, CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo, `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo, CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo
CEntityClassInfo *__cdecl CBaseFilter::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo != 0 )
    return &CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo) == 0 )
    return &CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo;
  if ( `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo) != 0 )
  {
    if ( `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo,
        "CServerOnlyEntity",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo,
      "CLogicalEntity",
      0,
      0,
      &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo,
    "CBaseFilter",
    "filter_base",
    0,
    &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo);
  return &CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo;
}


// CBaseFilter::GetEntityClassInternal  (line 36, @0x0000000001fdcf90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "filter_base", "CBaseFilter", "CLogicalEntity", "CServerOnlyEntity"
// globals: `guard variable for'CBaseFilter::GetEntityClassInternal(void)::g_EntityCBaseFilterClass, CBaseFilter::GetEntityClassInternal(void)::g_EntityCBaseFilterClass, __dso_handle, CBaseFilter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo, CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo, `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo, CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo (10 total)
CEntityClass *__cdecl CBaseFilter::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseFilter::GetEntityClassInternal(void)::g_EntityCBaseFilterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseFilter::GetEntityClassInternal(void)::g_EntityCBaseFilterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBaseFilter::GetEntityClassInternal(void)::g_EntityCBaseFilterClass);
    CBaseFilter::GetEntityClassInternal(void)::g_EntityCBaseFilterClass._vptr_CEntityClass = off_3FD4AD0;
    __cxa_guard_release(&`guard variable for'CBaseFilter::GetEntityClassInternal(void)::g_EntityCBaseFilterClass);
    __cxa_atexit(
      CBaseFilter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseFilter::GetEntityClassInternal(void)::g_EntityCBaseFilterClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseFilterClass != 0 )
    return &CBaseFilter::GetEntityClassInternal(void)::g_EntityCBaseFilterClass;
  if ( `guard variable for'CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo) != 0 )
  {
    if ( `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo) != 0 )
      {
        EntityClassInfo = CBaseEntity::GetEntityClassInfo();
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo,
          "CServerOnlyEntity",
          0,
          0,
          EntityClassInfo);
        __cxa_guard_release(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo,
        "CLogicalEntity",
        0,
        0,
        &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo,
      "CBaseFilter",
      "filter_base",
      0,
      &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo);
  }
  CBaseFilter::GetEntityClassInternal(void)::g_EntityCBaseFilterClass.m_pClassInfo = &CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo;
  CBaseFilter::GetEntityClassInternal(void)::g_EntityCBaseFilterClass.m_pBaseClassInfo = CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseFilterClass = &CBaseFilter::GetEntityClassInternal(void)::g_EntityCBaseFilterClass;
  CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo.m_pClass = &CBaseFilter::GetEntityClassInternal(void)::g_EntityCBaseFilterClass;
  CBaseFilter::GetEntityClassInternal(void)::g_EntityCBaseFilterClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCBaseFilterClass->m_pComponentOverrides = 0;
  return &CBaseFilter::GetEntityClassInternal(void)::g_EntityCBaseFilterClass;
}


// CBaseFilter::GetEntityClass  (line 36, @0x000000000220dab0, libserver.so)
CEntityClass *__cdecl CBaseFilter::GetEntityClass()
{
  return g_pEntityCBaseFilterClass;
}


// CBaseFilter::Schema_DynamicBinding  (line 36, @0x0000000002210e10, libserver.so)
// calls: CBaseFilter::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseFilter::Schema_DynamicBinding(const CBaseFilter *const this)
{
  CBaseFilter::Schema_VerifyBindingIsRegistered();
  return CBaseFilter::s_pSchemaBinding;
}


// CFilterMultiple::~CFilterMultiple  (line 75, @0x00000000022108c0, libserver.so)  // inlines: ~CBaseFilter, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CFilterMultiple::~CFilterMultiple(CFilterMultiple *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CFilterMultiple::~CFilterMultiple  (line 75, @0x00000000022108e0, libserver.so)  // inlines: ~CBaseFilter, ~CFilterMultiple, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CFilterMultiple::~CFilterMultiple(CFilterMultiple *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CFilterMultiple::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 77, @0x0000000001fd7a30, libserver.so)
// globals: CFilterMultiple::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFilterMultiple::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFilterMultiple::CEntityInstanceEntityClass *const this)
{
  return CFilterMultiple::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFilterMultiple::CEntityInstanceEntityClass::DestructInstance  (line 77, @0x0000000001fd7a40, libserver.so)  // inlines: Destruct<CFilterMultiple>
void __fastcall CFilterMultiple::CEntityInstanceEntityClass::DestructInstance(
        CFilterMultiple::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFilterMultiple::CEntityInstanceEntityClass::FreeInstance  (line 77, @0x0000000001fd7a60, libserver.so)
void __fastcall CFilterMultiple::CEntityInstanceEntityClass::FreeInstance(
        CFilterMultiple::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFilterMultiple::CEntityInstanceEntityClass::CanAllocate  (line 77, @0x0000000001fd7a80, libserver.so)
bool __fastcall CFilterMultiple::CEntityInstanceEntityClass::CanAllocate(
        const CFilterMultiple::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFilterMultiple::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 77, @0x0000000001fd7a90, libserver.so)
// globals: CFilterMultiple::s_pSchemaBinding
const ISchemaBinding *__fastcall CFilterMultiple::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFilterMultiple::CEntityInstanceEntityClass *const this)
{
  return CFilterMultiple::s_pSchemaBinding;
}


// CFilterMultiple::CEntityInstanceEntityClass::AllocateInstance  (line 77, @0x0000000001fd91e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFilterMultiple::CEntityInstanceEntityClass::AllocateInstance(
        CFilterMultiple::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 968);
  memset(v1, 0, 0x3C8u);
  return v1;
}


// CFilterMultiple::CEntityInstanceEntityClass::ConstructInstance  (line 77, @0x0000000001fd98f0, libserver.so)  // inlines: Construct<CFilterMultiple>
// calls: CFilterMultiple::CFilterMultiple
CEntityInstance *__fastcall CFilterMultiple::CEntityInstanceEntityClass::ConstructInstance(
        CFilterMultiple::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFilterMultiple::CFilterMultiple(p);
  return p;
}


// CFilterMultiple::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 77, @0x0000000001fda8f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFilterMultiple::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterMultiple::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFilterMultiple::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 77, @0x0000000001fda910, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFilterMultiple::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterMultiple::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFilterMultiple::GetEntityClassInternal  (line 77, @0x0000000001fdd160, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseFilter::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "CFilterMultiple"
// globals: `guard variable for'CFilterMultiple::GetEntityClassInternal(void)::g_EntityCFilterMultipleClass, CFilterMultiple::GetEntityClassInternal(void)::g_EntityCFilterMultipleClass, __dso_handle, CFilterMultiple::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFilterMultiple::GetEntityClassInfo(void)::g_EntityCFilterMultipleClassInfo, CFilterMultiple::GetEntityClassInfo(void)::g_EntityCFilterMultipleClassInfo
CEntityClass *__cdecl CFilterMultiple::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFilterMultiple::GetEntityClassInternal(void)::g_EntityCFilterMultipleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterMultiple::GetEntityClassInternal(void)::g_EntityCFilterMultipleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFilterMultiple::GetEntityClassInternal(void)::g_EntityCFilterMultipleClass);
    CFilterMultiple::GetEntityClassInternal(void)::g_EntityCFilterMultipleClass._vptr_CEntityClass = off_3FD4B50;
    __cxa_guard_release(&`guard variable for'CFilterMultiple::GetEntityClassInternal(void)::g_EntityCFilterMultipleClass);
    __cxa_atexit(
      CFilterMultiple::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFilterMultiple::GetEntityClassInternal(void)::g_EntityCFilterMultipleClass,
      &_dso_handle);
  }
  if ( g_pEntityCFilterMultipleClass != 0 )
    return &CFilterMultiple::GetEntityClassInternal(void)::g_EntityCFilterMultipleClass;
  if ( `guard variable for'CFilterMultiple::GetEntityClassInfo(void)::g_EntityCFilterMultipleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterMultiple::GetEntityClassInfo(void)::g_EntityCFilterMultipleClassInfo) != 0 )
  {
    EntityClassInfo = CBaseFilter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFilterMultiple::GetEntityClassInfo(void)::g_EntityCFilterMultipleClassInfo,
      "CFilterMultiple",
      &stru_32D9EEC.m_hierarchyJointsToUpdate.m_Memory.m_pMemory + 2,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFilterMultiple::GetEntityClassInfo(void)::g_EntityCFilterMultipleClassInfo);
  }
  CFilterMultiple::GetEntityClassInternal(void)::g_EntityCFilterMultipleClass.m_pClassInfo = &CFilterMultiple::GetEntityClassInfo(void)::g_EntityCFilterMultipleClassInfo;
  CFilterMultiple::GetEntityClassInternal(void)::g_EntityCFilterMultipleClass.m_pBaseClassInfo = CFilterMultiple::GetEntityClassInfo(void)::g_EntityCFilterMultipleClassInfo.m_pBaseClassInfo;
  g_pEntityCFilterMultipleClass = &CFilterMultiple::GetEntityClassInternal(void)::g_EntityCFilterMultipleClass;
  CFilterMultiple::GetEntityClassInfo(void)::g_EntityCFilterMultipleClassInfo.m_pClass = &CFilterMultiple::GetEntityClassInternal(void)::g_EntityCFilterMultipleClass;
  CFilterMultiple::GetEntityClassInternal(void)::g_EntityCFilterMultipleClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCFilterMultipleClass->m_pComponentOverrides = 0;
  return &CFilterMultiple::GetEntityClassInternal(void)::g_EntityCFilterMultipleClass;
}


// CFilterMultiple::GetEntityClass  (line 77, @0x000000000220dac0, libserver.so)
CEntityClass *__cdecl CFilterMultiple::GetEntityClass()
{
  return g_pEntityCFilterMultipleClass;
}


// CFilterMultiple::Schema_DynamicBinding  (line 77, @0x0000000002210e30, libserver.so)
// calls: CFilterMultiple::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFilterMultiple::Schema_DynamicBinding(const CFilterMultiple *const this)
{
  CFilterMultiple::Schema_VerifyBindingIsRegistered();
  return CFilterMultiple::s_pSchemaBinding;
}


// CFilterProximity::~CFilterProximity  (line 101, @0x0000000002210910, libserver.so)  // inlines: ~CBaseFilter, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CFilterProximity::~CFilterProximity(CFilterProximity *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CFilterProximity::~CFilterProximity  (line 101, @0x0000000002210930, libserver.so)  // inlines: ~CBaseFilter, ~CFilterProximity, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CFilterProximity::~CFilterProximity(CFilterProximity *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CFilterProximity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 103, @0x0000000001fd7aa0, libserver.so)
// globals: CFilterProximity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFilterProximity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFilterProximity::CEntityInstanceEntityClass *const this)
{
  return CFilterProximity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFilterProximity::CEntityInstanceEntityClass::DestructInstance  (line 103, @0x0000000001fd7ab0, libserver.so)  // inlines: Destruct<CFilterProximity>
void __fastcall CFilterProximity::CEntityInstanceEntityClass::DestructInstance(
        CFilterProximity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFilterProximity::CEntityInstanceEntityClass::FreeInstance  (line 103, @0x0000000001fd7ad0, libserver.so)
void __fastcall CFilterProximity::CEntityInstanceEntityClass::FreeInstance(
        CFilterProximity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFilterProximity::CEntityInstanceEntityClass::CanAllocate  (line 103, @0x0000000001fd7af0, libserver.so)
bool __fastcall CFilterProximity::CEntityInstanceEntityClass::CanAllocate(
        const CFilterProximity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFilterProximity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 103, @0x0000000001fd7b00, libserver.so)
// globals: CFilterProximity::s_pSchemaBinding
const ISchemaBinding *__fastcall CFilterProximity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFilterProximity::CEntityInstanceEntityClass *const this)
{
  return CFilterProximity::s_pSchemaBinding;
}


// CFilterProximity::CEntityInstanceEntityClass::AllocateInstance  (line 103, @0x0000000001fd9220, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFilterProximity::CEntityInstanceEntityClass::AllocateInstance(
        CFilterProximity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 840);
  memset(v1, 0, 0x348u);
  return v1;
}


// CFilterProximity::CEntityInstanceEntityClass::ConstructInstance  (line 103, @0x0000000001fd9920, libserver.so)  // inlines: Construct<CFilterProximity>
// calls: CFilterProximity::CFilterProximity
CEntityInstance *__fastcall CFilterProximity::CEntityInstanceEntityClass::ConstructInstance(
        CFilterProximity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFilterProximity::CFilterProximity(p);
  return p;
}


// CFilterProximity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 103, @0x0000000001fda940, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFilterProximity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterProximity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFilterProximity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 103, @0x0000000001fda960, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFilterProximity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterProximity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFilterProximity::GetEntityClassInternal  (line 103, @0x0000000001fdd2b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseFilter::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "CFilterProximity"
// globals: `guard variable for'CFilterProximity::GetEntityClassInternal(void)::g_EntityCFilterProximityClass, CFilterProximity::GetEntityClassInternal(void)::g_EntityCFilterProximityClass, __dso_handle, CFilterProximity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFilterProximity::GetEntityClassInfo(void)::g_EntityCFilterProximityClassInfo, CFilterProximity::GetEntityClassInfo(void)::g_EntityCFilterProximityClassInfo
CEntityClass *__cdecl CFilterProximity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFilterProximity::GetEntityClassInternal(void)::g_EntityCFilterProximityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterProximity::GetEntityClassInternal(void)::g_EntityCFilterProximityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFilterProximity::GetEntityClassInternal(void)::g_EntityCFilterProximityClass);
    CFilterProximity::GetEntityClassInternal(void)::g_EntityCFilterProximityClass._vptr_CEntityClass = off_3FD4BD0;
    __cxa_guard_release(&`guard variable for'CFilterProximity::GetEntityClassInternal(void)::g_EntityCFilterProximityClass);
    __cxa_atexit(
      CFilterProximity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFilterProximity::GetEntityClassInternal(void)::g_EntityCFilterProximityClass,
      &_dso_handle);
  }
  if ( g_pEntityCFilterProximityClass != 0 )
    return &CFilterProximity::GetEntityClassInternal(void)::g_EntityCFilterProximityClass;
  if ( `guard variable for'CFilterProximity::GetEntityClassInfo(void)::g_EntityCFilterProximityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterProximity::GetEntityClassInfo(void)::g_EntityCFilterProximityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseFilter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFilterProximity::GetEntityClassInfo(void)::g_EntityCFilterProximityClassInfo,
      "CFilterProximity",
      &stru_32D9EEC.m_kinematicsToUpdate.m_Size + 6,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFilterProximity::GetEntityClassInfo(void)::g_EntityCFilterProximityClassInfo);
  }
  CFilterProximity::GetEntityClassInternal(void)::g_EntityCFilterProximityClass.m_pClassInfo = &CFilterProximity::GetEntityClassInfo(void)::g_EntityCFilterProximityClassInfo;
  CFilterProximity::GetEntityClassInternal(void)::g_EntityCFilterProximityClass.m_pBaseClassInfo = CFilterProximity::GetEntityClassInfo(void)::g_EntityCFilterProximityClassInfo.m_pBaseClassInfo;
  g_pEntityCFilterProximityClass = &CFilterProximity::GetEntityClassInternal(void)::g_EntityCFilterProximityClass;
  CFilterProximity::GetEntityClassInfo(void)::g_EntityCFilterProximityClassInfo.m_pClass = &CFilterProximity::GetEntityClassInternal(void)::g_EntityCFilterProximityClass;
  CFilterProximity::GetEntityClassInternal(void)::g_EntityCFilterProximityClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCFilterProximityClass->m_pComponentOverrides = 0;
  return &CFilterProximity::GetEntityClassInternal(void)::g_EntityCFilterProximityClass;
}


// CFilterProximity::GetEntityClass  (line 103, @0x000000000220dad0, libserver.so)
CEntityClass *__cdecl CFilterProximity::GetEntityClass()
{
  return g_pEntityCFilterProximityClass;
}


// CFilterProximity::Schema_DynamicBinding  (line 103, @0x0000000002210e50, libserver.so)
// calls: CFilterProximity::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFilterProximity::Schema_DynamicBinding(const CFilterProximity *const this)
{
  CFilterProximity::Schema_VerifyBindingIsRegistered();
  return CFilterProximity::s_pSchemaBinding;
}


// CFilterLOS::~CFilterLOS  (line 117, @0x0000000002210960, libserver.so)  // inlines: ~CBaseFilter, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CFilterLOS::~CFilterLOS(CFilterLOS *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CFilterLOS::~CFilterLOS  (line 117, @0x0000000002210980, libserver.so)  // inlines: ~CBaseFilter, ~CFilterLOS, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CFilterLOS::~CFilterLOS(CFilterLOS *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CFilterLOS::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 119, @0x0000000001fd7b10, libserver.so)
// globals: CFilterLOS::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFilterLOS::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFilterLOS::CEntityInstanceEntityClass *const this)
{
  return CFilterLOS::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFilterLOS::CEntityInstanceEntityClass::DestructInstance  (line 119, @0x0000000001fd7b20, libserver.so)  // inlines: Destruct<CFilterLOS>
void __fastcall CFilterLOS::CEntityInstanceEntityClass::DestructInstance(
        CFilterLOS::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFilterLOS::CEntityInstanceEntityClass::FreeInstance  (line 119, @0x0000000001fd7b40, libserver.so)
void __fastcall CFilterLOS::CEntityInstanceEntityClass::FreeInstance(
        CFilterLOS::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFilterLOS::CEntityInstanceEntityClass::CanAllocate  (line 119, @0x0000000001fd7b60, libserver.so)
bool __fastcall CFilterLOS::CEntityInstanceEntityClass::CanAllocate(
        const CFilterLOS::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFilterLOS::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 119, @0x0000000001fd7b70, libserver.so)
// globals: CFilterLOS::s_pSchemaBinding
const ISchemaBinding *__fastcall CFilterLOS::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFilterLOS::CEntityInstanceEntityClass *const this)
{
  return CFilterLOS::s_pSchemaBinding;
}


// CFilterLOS::CEntityInstanceEntityClass::AllocateInstance  (line 119, @0x0000000001fd9260, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFilterLOS::CEntityInstanceEntityClass::AllocateInstance(
        CFilterLOS::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 832);
  memset(v1, 0, 0x340u);
  return v1;
}


// CFilterLOS::CEntityInstanceEntityClass::ConstructInstance  (line 119, @0x0000000001fd97b0, libserver.so)  // inlines: CBaseFilter, CEntityIOOutput, CFilterLOS, CLogicalEntity, CServerOnlyEntity, Construct<CFilterLOS>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CFilterLOS::CEntityInstanceEntityClass::ConstructInstance(
        CFilterLOS::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = off_3F7C190;
    *(p + 101) = off_3F7C190;
    *p = &off_4038210;
  }
  return p;
}


// CFilterLOS::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 119, @0x0000000001fda990, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFilterLOS::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterLOS::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFilterLOS::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 119, @0x0000000001fda9b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFilterLOS::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterLOS::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFilterLOS::GetEntityClassInternal  (line 119, @0x0000000001fdd400, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseFilter::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "CFilterLOS"
// globals: `guard variable for'CFilterLOS::GetEntityClassInternal(void)::g_EntityCFilterLOSClass, CFilterLOS::GetEntityClassInternal(void)::g_EntityCFilterLOSClass, __dso_handle, CFilterLOS::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFilterLOS::GetEntityClassInfo(void)::g_EntityCFilterLOSClassInfo, CFilterLOS::GetEntityClassInfo(void)::g_EntityCFilterLOSClassInfo
CEntityClass *__cdecl CFilterLOS::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFilterLOS::GetEntityClassInternal(void)::g_EntityCFilterLOSClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterLOS::GetEntityClassInternal(void)::g_EntityCFilterLOSClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFilterLOS::GetEntityClassInternal(void)::g_EntityCFilterLOSClass);
    CFilterLOS::GetEntityClassInternal(void)::g_EntityCFilterLOSClass._vptr_CEntityClass = off_3FD4C50;
    __cxa_guard_release(&`guard variable for'CFilterLOS::GetEntityClassInternal(void)::g_EntityCFilterLOSClass);
    __cxa_atexit(
      CFilterLOS::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFilterLOS::GetEntityClassInternal(void)::g_EntityCFilterLOSClass,
      &_dso_handle);
  }
  if ( g_pEntityCFilterLOSClass != 0 )
    return &CFilterLOS::GetEntityClassInternal(void)::g_EntityCFilterLOSClass;
  if ( `guard variable for'CFilterLOS::GetEntityClassInfo(void)::g_EntityCFilterLOSClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterLOS::GetEntityClassInfo(void)::g_EntityCFilterLOSClassInfo) != 0 )
  {
    EntityClassInfo = CBaseFilter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFilterLOS::GetEntityClassInfo(void)::g_EntityCFilterLOSClassInfo,
      "CFilterLOS",
      &stru_32D9EEC.m_kinematicsToUpdate.m_Memory.m_nGrowSize + 3,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFilterLOS::GetEntityClassInfo(void)::g_EntityCFilterLOSClassInfo);
  }
  CFilterLOS::GetEntityClassInternal(void)::g_EntityCFilterLOSClass.m_pClassInfo = &CFilterLOS::GetEntityClassInfo(void)::g_EntityCFilterLOSClassInfo;
  CFilterLOS::GetEntityClassInternal(void)::g_EntityCFilterLOSClass.m_pBaseClassInfo = CFilterLOS::GetEntityClassInfo(void)::g_EntityCFilterLOSClassInfo.m_pBaseClassInfo;
  g_pEntityCFilterLOSClass = &CFilterLOS::GetEntityClassInternal(void)::g_EntityCFilterLOSClass;
  CFilterLOS::GetEntityClassInfo(void)::g_EntityCFilterLOSClassInfo.m_pClass = &CFilterLOS::GetEntityClassInternal(void)::g_EntityCFilterLOSClass;
  CFilterLOS::GetEntityClassInternal(void)::g_EntityCFilterLOSClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCFilterLOSClass->m_pComponentOverrides = 0;
  return &CFilterLOS::GetEntityClassInternal(void)::g_EntityCFilterLOSClass;
}


// CFilterLOS::GetEntityClass  (line 119, @0x000000000220dae0, libserver.so)
CEntityClass *__cdecl CFilterLOS::GetEntityClass()
{
  return g_pEntityCFilterLOSClass;
}


// CFilterLOS::Schema_DynamicBinding  (line 119, @0x0000000002210e70, libserver.so)
// calls: CFilterLOS::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFilterLOS::Schema_DynamicBinding(const CFilterLOS *const this)
{
  CFilterLOS::Schema_VerifyBindingIsRegistered();
  return CFilterLOS::s_pSchemaBinding;
}


