
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncAreaPortalBase::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 20, @0x0000000001fd8310, libserver.so)
// globals: CFuncAreaPortalBase::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncAreaPortalBase::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncAreaPortalBase::CEntityInstanceEntityClass *const this)
{
  return CFuncAreaPortalBase::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncAreaPortalBase::CEntityInstanceEntityClass::DestructInstance  (line 20, @0x0000000001fd8320, libserver.so)  // inlines: Destruct<CFuncAreaPortalBase>
void __fastcall CFuncAreaPortalBase::CEntityInstanceEntityClass::DestructInstance(
        CFuncAreaPortalBase::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncAreaPortalBase::CEntityInstanceEntityClass::FreeInstance  (line 20, @0x0000000001fd8340, libserver.so)
void __fastcall CFuncAreaPortalBase::CEntityInstanceEntityClass::FreeInstance(
        CFuncAreaPortalBase::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncAreaPortalBase::CEntityInstanceEntityClass::CanAllocate  (line 20, @0x0000000001fd8360, libserver.so)
bool __fastcall CFuncAreaPortalBase::CEntityInstanceEntityClass::CanAllocate(
        const CFuncAreaPortalBase::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncAreaPortalBase::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 20, @0x0000000001fd8370, libserver.so)
// globals: CFuncAreaPortalBase::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncAreaPortalBase::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncAreaPortalBase::CEntityInstanceEntityClass *const this)
{
  return CFuncAreaPortalBase::s_pSchemaBinding;
}


// CFuncAreaPortalBase::CEntityInstanceEntityClass::AllocateInstance  (line 20, @0x0000000001fd96e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncAreaPortalBase::CEntityInstanceEntityClass::AllocateInstance(
        CFuncAreaPortalBase::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1168);
  memset(v1, 0, 0x490u);
  return v1;
}


// CFuncAreaPortalBase::CEntityInstanceEntityClass::ConstructInstance  (line 20, @0x0000000001fd9c10, libserver.so)  // inlines: Construct<CFuncAreaPortalBase>
// calls: CFuncAreaPortalBase::CFuncAreaPortalBase
CEntityInstance *__fastcall CFuncAreaPortalBase::CEntityInstanceEntityClass::ConstructInstance(
        CFuncAreaPortalBase::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFuncAreaPortalBase::CFuncAreaPortalBase(p);
  return p;
}


// CFuncAreaPortalBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x0000000001fdae40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncAreaPortalBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncAreaPortalBase::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFuncAreaPortalBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x0000000001fdae60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncAreaPortalBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncAreaPortalBase::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncAreaPortalBase::GetEntityClassInfo  (line 20, @0x0000000001fe0810, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CFuncAreaPortalWindow::GetEntityClassInternal
// strings: "CFuncAreaPortalBase", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo, CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo
CEntityClassInfo *__cdecl CFuncAreaPortalBase::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo != 0 )
    return &CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo) == 0 )
    return &CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo;
  if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
      "CBaseModelEntity",
      "basemodelentity",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo,
    "CFuncAreaPortalBase",
    0,
    0,
    &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo);
  return &CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo;
}


// CFuncAreaPortalBase::GetEntityClassInternal  (line 20, @0x0000000001fe08d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "CFuncAreaPortalBase"
// globals: `guard variable for'CFuncAreaPortalBase::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalBaseClass, CFuncAreaPortalBase::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalBaseClass, __dso_handle, CFuncAreaPortalBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo, CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo
CEntityClass *__cdecl CFuncAreaPortalBase::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncAreaPortalBase::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalBaseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncAreaPortalBase::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalBaseClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFuncAreaPortalBase::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalBaseClass);
    CFuncAreaPortalBase::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalBaseClass._vptr_CEntityClass = off_3FD89F0;
    __cxa_guard_release(&`guard variable for'CFuncAreaPortalBase::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalBaseClass);
    __cxa_atexit(
      CFuncAreaPortalBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncAreaPortalBase::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalBaseClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncAreaPortalBaseClass != 0 )
    return &CFuncAreaPortalBase::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalBaseClass;
  if ( `guard variable for'CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo,
      "CFuncAreaPortalBase",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo);
  }
  CFuncAreaPortalBase::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalBaseClass.m_pClassInfo = &CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo;
  CFuncAreaPortalBase::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalBaseClass.m_pBaseClassInfo = CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncAreaPortalBaseClass = &CFuncAreaPortalBase::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalBaseClass;
  CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo.m_pClass = &CFuncAreaPortalBase::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalBaseClass;
  CFuncAreaPortalBase::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalBaseClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncAreaPortalBaseClass->m_pComponentOverrides = 0;
  return &CFuncAreaPortalBase::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalBaseClass;
}


// CFuncAreaPortalBase::GetEntityClass  (line 20, @0x0000000002245020, libserver.so)
CEntityClass *__cdecl CFuncAreaPortalBase::GetEntityClass()
{
  return g_pEntityCFuncAreaPortalBaseClass;
}


// CFuncAreaPortalBase::Schema_DynamicBinding  (line 20, @0x0000000002247280, libserver.so)
// calls: CFuncAreaPortalBase::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFuncAreaPortalBase::Schema_DynamicBinding(
        const CFuncAreaPortalBase *const this)
{
  CFuncAreaPortalBase::Schema_VerifyBindingIsRegistered();
  return CFuncAreaPortalBase::s_pSchemaBinding;
}


// CFuncAreaPortalBase::ObjectCaps  (line 28, @0x0000000002246c20, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CFuncAreaPortalBase::ObjectCaps(CFuncAreaPortalBase *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


