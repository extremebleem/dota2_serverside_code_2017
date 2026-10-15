
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLogicPlayerProxy::~CLogicPlayerProxy  (line 12, @0x00000000022a9530, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLogicPlayerProxy::~CLogicPlayerProxy(CLogicPlayerProxy *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CLogicPlayerProxy::~CLogicPlayerProxy  (line 12, @0x00000000022a9550, libserver.so)  // inlines: ~CLogicPlayerProxy, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLogicPlayerProxy::~CLogicPlayerProxy(CLogicPlayerProxy *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLogicPlayerProxy::GetEntityClass  (line 14, @0x00000000022a5780, libserver.so)
CEntityClass *__cdecl CLogicPlayerProxy::GetEntityClass()
{
  return g_pEntityCLogicPlayerProxyClass;
}


// CLogicPlayerProxy::Schema_DynamicBinding  (line 14, @0x00000000022a5790, libserver.so)
// globals: CLogicPlayerProxy::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicPlayerProxy::Schema_DynamicBinding(const CLogicPlayerProxy *const this)
{
  return CLogicPlayerProxy::s_pSchemaBinding;
}


// CLogicPlayerProxy::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 14, @0x00000000022a57a0, libserver.so)
// globals: CLogicPlayerProxy::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicPlayerProxy::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLogicPlayerProxy::CEntityInstanceEntityClass *const this)
{
  return CLogicPlayerProxy::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLogicPlayerProxy::CEntityInstanceEntityClass::DestructInstance  (line 14, @0x00000000022a57b0, libserver.so)  // inlines: Destruct<CLogicPlayerProxy>
void __fastcall CLogicPlayerProxy::CEntityInstanceEntityClass::DestructInstance(
        CLogicPlayerProxy::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLogicPlayerProxy::CEntityInstanceEntityClass::FreeInstance  (line 14, @0x00000000022a57d0, libserver.so)
void __fastcall CLogicPlayerProxy::CEntityInstanceEntityClass::FreeInstance(
        CLogicPlayerProxy::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLogicPlayerProxy::CEntityInstanceEntityClass::CanAllocate  (line 14, @0x00000000022a57f0, libserver.so)
bool __fastcall CLogicPlayerProxy::CEntityInstanceEntityClass::CanAllocate(
        const CLogicPlayerProxy::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLogicPlayerProxy::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 14, @0x00000000022a5800, libserver.so)
// globals: CLogicPlayerProxy::s_pSchemaBinding
const ISchemaBinding *__fastcall CLogicPlayerProxy::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLogicPlayerProxy::CEntityInstanceEntityClass *const this)
{
  return CLogicPlayerProxy::s_pSchemaBinding;
}


// CLogicPlayerProxy::CEntityInstanceEntityClass::AllocateInstance  (line 14, @0x00000000022a8040, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLogicPlayerProxy::CEntityInstanceEntityClass::AllocateInstance(
        CLogicPlayerProxy::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 888);
  memset(v1, 0, 0x378u);
  return v1;
}


// CLogicPlayerProxy::CEntityInstanceEntityClass::ConstructInstance  (line 14, @0x00000000022a8ab0, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CEntityOutputTemplate, CHandle, CLogicPlayerProxy, CLogicalEntity, CServerOnlyEntity, Construct<CLogicPlayerProxy>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLogicPlayerProxy::CEntityInstanceEntityClass::ConstructInstance(
        CLogicPlayerProxy::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 220) = -1;
    *p = &off_405CAD0;
    *(p + 97) = off_3F7C190;
    *(p + 100) = off_3F7C190;
    *(p + 103) = off_3F7C190;
    *(p + 106) = off_405CAB0;
  }
  return p;
}


// CLogicPlayerProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 14, @0x00000000022aaa00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLogicPlayerProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicPlayerProxy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CLogicPlayerProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 14, @0x00000000022aaa20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLogicPlayerProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicPlayerProxy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLogicPlayerProxy::GetEntityClassInternal  (line 14, @0x00000000022b0aa0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "logic_playerproxy", "CLogicPlayerProxy"
// globals: `guard variable for'CLogicPlayerProxy::GetEntityClassInternal(void)::g_EntityCLogicPlayerProxyClass, CLogicPlayerProxy::GetEntityClassInternal(void)::g_EntityCLogicPlayerProxyClass, __dso_handle, CLogicPlayerProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLogicPlayerProxy::GetEntityClassInfo(void)::g_EntityCLogicPlayerProxyClassInfo, CLogicPlayerProxy::GetEntityClassInfo(void)::g_EntityCLogicPlayerProxyClassInfo
CEntityClass *__cdecl CLogicPlayerProxy::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicPlayerProxy::GetEntityClassInternal(void)::g_EntityCLogicPlayerProxyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicPlayerProxy::GetEntityClassInternal(void)::g_EntityCLogicPlayerProxyClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLogicPlayerProxy::GetEntityClassInternal(void)::g_EntityCLogicPlayerProxyClass);
    CLogicPlayerProxy::GetEntityClassInternal(void)::g_EntityCLogicPlayerProxyClass._vptr_CEntityClass = off_405CA30;
    __cxa_guard_release(&`guard variable for'CLogicPlayerProxy::GetEntityClassInternal(void)::g_EntityCLogicPlayerProxyClass);
    __cxa_atexit(
      CLogicPlayerProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLogicPlayerProxy::GetEntityClassInternal(void)::g_EntityCLogicPlayerProxyClass,
      &_dso_handle);
  }
  if ( g_pEntityCLogicPlayerProxyClass != 0 )
    return &CLogicPlayerProxy::GetEntityClassInternal(void)::g_EntityCLogicPlayerProxyClass;
  if ( `guard variable for'CLogicPlayerProxy::GetEntityClassInfo(void)::g_EntityCLogicPlayerProxyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicPlayerProxy::GetEntityClassInfo(void)::g_EntityCLogicPlayerProxyClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicPlayerProxy::GetEntityClassInfo(void)::g_EntityCLogicPlayerProxyClassInfo,
      "CLogicPlayerProxy",
      "logic_playerproxy",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicPlayerProxy::GetEntityClassInfo(void)::g_EntityCLogicPlayerProxyClassInfo);
  }
  CLogicPlayerProxy::GetEntityClassInternal(void)::g_EntityCLogicPlayerProxyClass.m_pClassInfo = &CLogicPlayerProxy::GetEntityClassInfo(void)::g_EntityCLogicPlayerProxyClassInfo;
  CLogicPlayerProxy::GetEntityClassInternal(void)::g_EntityCLogicPlayerProxyClass.m_pBaseClassInfo = CLogicPlayerProxy::GetEntityClassInfo(void)::g_EntityCLogicPlayerProxyClassInfo.m_pBaseClassInfo;
  g_pEntityCLogicPlayerProxyClass = &CLogicPlayerProxy::GetEntityClassInternal(void)::g_EntityCLogicPlayerProxyClass;
  CLogicPlayerProxy::GetEntityClassInfo(void)::g_EntityCLogicPlayerProxyClassInfo.m_pClass = &CLogicPlayerProxy::GetEntityClassInternal(void)::g_EntityCLogicPlayerProxyClass;
  CLogicPlayerProxy::GetEntityClassInternal(void)::g_EntityCLogicPlayerProxyClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLogicPlayerProxyClass->m_pComponentOverrides = 0;
  return &CLogicPlayerProxy::GetEntityClassInternal(void)::g_EntityCLogicPlayerProxyClass;
}


