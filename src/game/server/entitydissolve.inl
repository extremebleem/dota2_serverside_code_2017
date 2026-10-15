
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntityDissolve::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 15, @0x0000000001fd7d60, libserver.so)
// globals: CEntityDissolve::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEntityDissolve::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEntityDissolve::CEntityInstanceEntityClass *const this)
{
  return CEntityDissolve::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEntityDissolve::CEntityInstanceEntityClass::DestructInstance  (line 15, @0x0000000001fd7d70, libserver.so)  // inlines: Destruct<CEntityDissolve>
void __fastcall CEntityDissolve::CEntityInstanceEntityClass::DestructInstance(
        CEntityDissolve::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEntityDissolve::CEntityInstanceEntityClass::FreeInstance  (line 15, @0x0000000001fd7d90, libserver.so)
void __fastcall CEntityDissolve::CEntityInstanceEntityClass::FreeInstance(
        CEntityDissolve::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEntityDissolve::CEntityInstanceEntityClass::CanAllocate  (line 15, @0x0000000001fd7db0, libserver.so)
bool __fastcall CEntityDissolve::CEntityInstanceEntityClass::CanAllocate(
        const CEntityDissolve::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEntityDissolve::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 15, @0x0000000001fd7dc0, libserver.so)
// globals: CEntityDissolve::s_pSchemaBinding
const ISchemaBinding *__fastcall CEntityDissolve::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEntityDissolve::CEntityInstanceEntityClass *const this)
{
  return CEntityDissolve::s_pSchemaBinding;
}


// CEntityDissolve::CEntityInstanceEntityClass::AllocateInstance  (line 15, @0x0000000001fd93a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEntityDissolve::CEntityInstanceEntityClass::AllocateInstance(
        CEntityDissolve::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1200);
  memset(v1, 0, 0x4B0u);
  return v1;
}


// CEntityDissolve::CEntityInstanceEntityClass::ConstructInstance  (line 15, @0x0000000001fd9a20, libserver.so)  // inlines: Construct<CEntityDissolve>
// calls: CEntityDissolve::CEntityDissolve
CEntityInstance *__fastcall CEntityDissolve::CEntityInstanceEntityClass::ConstructInstance(
        CEntityDissolve::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CEntityDissolve::CEntityDissolve(p);
  return p;
}


// CEntityDissolve::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 15, @0x0000000001fdada0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEntityDissolve::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEntityDissolve::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEntityDissolve::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 15, @0x0000000001fdadc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEntityDissolve::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEntityDissolve::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEntityDissolve::GetEntityClassInternal  (line 15, @0x0000000001fde0b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "env_entity_dissolver", "CEntityDissolve"
// globals: `guard variable for'CEntityDissolve::GetEntityClassInternal(void)::g_EntityCEntityDissolveClass, CEntityDissolve::GetEntityClassInternal(void)::g_EntityCEntityDissolveClass, __dso_handle, CEntityDissolve::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEntityDissolve::GetEntityClassInfo(void)::g_EntityCEntityDissolveClassInfo, CEntityDissolve::GetEntityClassInfo(void)::g_EntityCEntityDissolveClassInfo
CEntityClass *__cdecl CEntityDissolve::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEntityDissolve::GetEntityClassInternal(void)::g_EntityCEntityDissolveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityDissolve::GetEntityClassInternal(void)::g_EntityCEntityDissolveClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEntityDissolve::GetEntityClassInternal(void)::g_EntityCEntityDissolveClass);
    CEntityDissolve::GetEntityClassInternal(void)::g_EntityCEntityDissolveClass._vptr_CEntityClass = off_3FD6BD0;
    __cxa_guard_release(&`guard variable for'CEntityDissolve::GetEntityClassInternal(void)::g_EntityCEntityDissolveClass);
    __cxa_atexit(
      CEntityDissolve::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEntityDissolve::GetEntityClassInternal(void)::g_EntityCEntityDissolveClass,
      &_dso_handle);
  }
  if ( g_pEntityCEntityDissolveClass != 0 )
    return &CEntityDissolve::GetEntityClassInternal(void)::g_EntityCEntityDissolveClass;
  if ( `guard variable for'CEntityDissolve::GetEntityClassInfo(void)::g_EntityCEntityDissolveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityDissolve::GetEntityClassInfo(void)::g_EntityCEntityDissolveClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEntityDissolve::GetEntityClassInfo(void)::g_EntityCEntityDissolveClassInfo,
      "CEntityDissolve",
      "env_entity_dissolver",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEntityDissolve::GetEntityClassInfo(void)::g_EntityCEntityDissolveClassInfo);
  }
  CEntityDissolve::GetEntityClassInternal(void)::g_EntityCEntityDissolveClass.m_pClassInfo = &CEntityDissolve::GetEntityClassInfo(void)::g_EntityCEntityDissolveClassInfo;
  CEntityDissolve::GetEntityClassInternal(void)::g_EntityCEntityDissolveClass.m_pBaseClassInfo = CEntityDissolve::GetEntityClassInfo(void)::g_EntityCEntityDissolveClassInfo.m_pBaseClassInfo;
  g_pEntityCEntityDissolveClass = &CEntityDissolve::GetEntityClassInternal(void)::g_EntityCEntityDissolveClass;
  CEntityDissolve::GetEntityClassInfo(void)::g_EntityCEntityDissolveClassInfo.m_pClass = &CEntityDissolve::GetEntityClassInternal(void)::g_EntityCEntityDissolveClass;
  CEntityDissolve::GetEntityClassInternal(void)::g_EntityCEntityDissolveClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCEntityDissolveClass->m_pComponentOverrides = 0;
  return &CEntityDissolve::GetEntityClassInternal(void)::g_EntityCEntityDissolveClass;
}


// CEntityDissolve::GetEntityClass  (line 15, @0x00000000021df0c0, libserver.so)
CEntityClass *__cdecl CEntityDissolve::GetEntityClass()
{
  return g_pEntityCEntityDissolveClass;
}


// CEntityDissolve::Schema_DynamicBinding  (line 15, @0x00000000021e1960, libserver.so)
// calls: CEntityDissolve::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityDissolve::Schema_DynamicBinding(const CEntityDissolve *const this)
{
  CEntityDissolve::Schema_VerifyBindingIsRegistered();
  return CEntityDissolve::s_pSchemaBinding;
}


