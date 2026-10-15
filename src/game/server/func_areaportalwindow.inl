
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncAreaPortalWindow::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 22, @0x0000000001fd8380, libserver.so)
// globals: CFuncAreaPortalWindow::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncAreaPortalWindow::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncAreaPortalWindow::CEntityInstanceEntityClass *const this)
{
  return CFuncAreaPortalWindow::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncAreaPortalWindow::CEntityInstanceEntityClass::DestructInstance  (line 22, @0x0000000001fd8390, libserver.so)  // inlines: Destruct<CFuncAreaPortalWindow>
void __fastcall CFuncAreaPortalWindow::CEntityInstanceEntityClass::DestructInstance(
        CFuncAreaPortalWindow::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncAreaPortalWindow::CEntityInstanceEntityClass::FreeInstance  (line 22, @0x0000000001fd83b0, libserver.so)
void __fastcall CFuncAreaPortalWindow::CEntityInstanceEntityClass::FreeInstance(
        CFuncAreaPortalWindow::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncAreaPortalWindow::CEntityInstanceEntityClass::CanAllocate  (line 22, @0x0000000001fd83d0, libserver.so)
bool __fastcall CFuncAreaPortalWindow::CEntityInstanceEntityClass::CanAllocate(
        const CFuncAreaPortalWindow::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncAreaPortalWindow::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 22, @0x0000000001fd83e0, libserver.so)
// globals: CFuncAreaPortalWindow::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncAreaPortalWindow::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncAreaPortalWindow::CEntityInstanceEntityClass *const this)
{
  return CFuncAreaPortalWindow::s_pSchemaBinding;
}


// CFuncAreaPortalWindow::CEntityInstanceEntityClass::AllocateInstance  (line 22, @0x0000000001fd9720, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncAreaPortalWindow::CEntityInstanceEntityClass::AllocateInstance(
        CFuncAreaPortalWindow::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1192);
  memset(v1, 0, 0x4A8u);
  return v1;
}


// CFuncAreaPortalWindow::CEntityInstanceEntityClass::ConstructInstance  (line 22, @0x0000000001fd9c40, libserver.so)  // inlines: Construct<CFuncAreaPortalWindow>
// calls: CFuncAreaPortalWindow::CFuncAreaPortalWindow
CEntityInstance *__fastcall CFuncAreaPortalWindow::CEntityInstanceEntityClass::ConstructInstance(
        CFuncAreaPortalWindow::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFuncAreaPortalWindow::CFuncAreaPortalWindow(p);
  return p;
}


// CFuncAreaPortalWindow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x0000000001fdae90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncAreaPortalWindow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncAreaPortalWindow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncAreaPortalWindow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x0000000001fdaeb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncAreaPortalWindow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncAreaPortalWindow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncAreaPortalWindow::GetEntityClassInternal  (line 22, @0x0000000001fe0b30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CFuncAreaPortalBase::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "func_areaportalwindow", "CFuncAreaPortalWindow"
// globals: `guard variable for'CFuncAreaPortalWindow::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalWindowClass, CFuncAreaPortalWindow::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalWindowClass, __dso_handle, CFuncAreaPortalWindow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncAreaPortalWindow::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalWindowClassInfo, CFuncAreaPortalWindow::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalWindowClassInfo
CEntityClass *__cdecl CFuncAreaPortalWindow::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncAreaPortalWindow::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalWindowClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncAreaPortalWindow::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalWindowClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFuncAreaPortalWindow::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalWindowClass);
    CFuncAreaPortalWindow::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalWindowClass._vptr_CEntityClass = off_3FD8BB0;
    __cxa_guard_release(&`guard variable for'CFuncAreaPortalWindow::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalWindowClass);
    __cxa_atexit(
      CFuncAreaPortalWindow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncAreaPortalWindow::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalWindowClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncAreaPortalWindowClass != 0 )
    return &CFuncAreaPortalWindow::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalWindowClass;
  if ( `guard variable for'CFuncAreaPortalWindow::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalWindowClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncAreaPortalWindow::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalWindowClassInfo) != 0 )
  {
    EntityClassInfo = CFuncAreaPortalBase::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncAreaPortalWindow::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalWindowClassInfo,
      "CFuncAreaPortalWindow",
      "func_areaportalwindow",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncAreaPortalWindow::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalWindowClassInfo);
  }
  CFuncAreaPortalWindow::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalWindowClass.m_pClassInfo = &CFuncAreaPortalWindow::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalWindowClassInfo;
  CFuncAreaPortalWindow::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalWindowClass.m_pBaseClassInfo = CFuncAreaPortalWindow::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalWindowClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncAreaPortalWindowClass = &CFuncAreaPortalWindow::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalWindowClass;
  CFuncAreaPortalWindow::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalWindowClassInfo.m_pClass = &CFuncAreaPortalWindow::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalWindowClass;
  CFuncAreaPortalWindow::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalWindowClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncAreaPortalWindowClass->m_pComponentOverrides = 0;
  return &CFuncAreaPortalWindow::GetEntityClassInternal(void)::g_EntityCFuncAreaPortalWindowClass;
}


// CFuncAreaPortalWindow::GetEntityClass  (line 22, @0x00000000022450c0, libserver.so)
CEntityClass *__cdecl CFuncAreaPortalWindow::GetEntityClass()
{
  return g_pEntityCFuncAreaPortalWindowClass;
}


// CFuncAreaPortalWindow::Schema_DynamicBinding  (line 22, @0x00000000022472a0, libserver.so)
// calls: CFuncAreaPortalWindow::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFuncAreaPortalWindow::Schema_DynamicBinding(
        const CFuncAreaPortalWindow *const this)
{
  CFuncAreaPortalWindow::Schema_VerifyBindingIsRegistered();
  return CFuncAreaPortalWindow::s_pSchemaBinding;
}


