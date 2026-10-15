
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvDOFController::~CEnvDOFController  (line 25, @0x00000000021e1220, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvDOFController::~CEnvDOFController(CEnvDOFController *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvDOFController::~CEnvDOFController  (line 25, @0x00000000021e1240, libserver.so)  // inlines: ~CEnvDOFController, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvDOFController::~CEnvDOFController(CEnvDOFController *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvDOFController::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 27, @0x0000000001fd7e40, libserver.so)
// globals: CEnvDOFController::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvDOFController::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvDOFController::CEntityInstanceEntityClass *const this)
{
  return CEnvDOFController::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvDOFController::CEntityInstanceEntityClass::DestructInstance  (line 27, @0x0000000001fd7e50, libserver.so)  // inlines: Destruct<CEnvDOFController>
void __fastcall CEnvDOFController::CEntityInstanceEntityClass::DestructInstance(
        CEnvDOFController::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvDOFController::CEntityInstanceEntityClass::FreeInstance  (line 27, @0x0000000001fd7e70, libserver.so)
void __fastcall CEnvDOFController::CEntityInstanceEntityClass::FreeInstance(
        CEnvDOFController::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvDOFController::CEntityInstanceEntityClass::CanAllocate  (line 27, @0x0000000001fd7e90, libserver.so)
bool __fastcall CEnvDOFController::CEntityInstanceEntityClass::CanAllocate(
        const CEnvDOFController::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvDOFController::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 27, @0x0000000001fd7ea0, libserver.so)
// globals: CEnvDOFController::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvDOFController::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvDOFController::CEntityInstanceEntityClass *const this)
{
  return CEnvDOFController::s_pSchemaBinding;
}


// CEnvDOFController::CEntityInstanceEntityClass::AllocateInstance  (line 27, @0x0000000001fd9420, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvDOFController::CEntityInstanceEntityClass::AllocateInstance(
        CEnvDOFController::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 824);
  memset(v1, 0, 0x338u);
  return v1;
}


// CEnvDOFController::CEntityInstanceEntityClass::ConstructInstance  (line 27, @0x0000000001fda200, libserver.so)  // inlines: CEntityHandle, CEnvDOFController, CHandle, CNetworkVarBase, CPointEntity, CUtlSymbolLarge, Construct<CEnvDOFController>, EnsureValidValue<bool>, EnsureValidValue<float>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvDOFController::CEntityInstanceEntityClass::ConstructInstance(
        CEnvDOFController::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = 0;
    *(p + 198) = -1;
    *(p + 796) = 0;
    *(p + 200) = 0;
    *(p + 201) = 0;
    *p = &off_4025890;
    *(p + 202) = 0;
    *(p + 203) = 0;
    *(p + 204) = 0;
    *(p + 205) = 0;
  }
  return p;
}


// CEnvDOFController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 27, @0x0000000001fda9e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvDOFController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvDOFController::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEnvDOFController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 27, @0x0000000001fdaa00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvDOFController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvDOFController::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvDOFController::GetEntityClassInternal  (line 27, @0x0000000001fde590, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "env_dof_controller", "CEnvDOFController"
// globals: `guard variable for'CEnvDOFController::GetEntityClassInternal(void)::g_EntityCEnvDOFControllerClass, CEnvDOFController::GetEntityClassInternal(void)::g_EntityCEnvDOFControllerClass, __dso_handle, CEnvDOFController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvDOFController::GetEntityClassInfo(void)::g_EntityCEnvDOFControllerClassInfo, CEnvDOFController::GetEntityClassInfo(void)::g_EntityCEnvDOFControllerClassInfo
CEntityClass *__cdecl CEnvDOFController::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvDOFController::GetEntityClassInternal(void)::g_EntityCEnvDOFControllerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvDOFController::GetEntityClassInternal(void)::g_EntityCEnvDOFControllerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvDOFController::GetEntityClassInternal(void)::g_EntityCEnvDOFControllerClass);
    CEnvDOFController::GetEntityClassInternal(void)::g_EntityCEnvDOFControllerClass._vptr_CEntityClass = off_3FD6F50;
    __cxa_guard_release(&`guard variable for'CEnvDOFController::GetEntityClassInternal(void)::g_EntityCEnvDOFControllerClass);
    __cxa_atexit(
      CEnvDOFController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvDOFController::GetEntityClassInternal(void)::g_EntityCEnvDOFControllerClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvDOFControllerClass != 0 )
    return &CEnvDOFController::GetEntityClassInternal(void)::g_EntityCEnvDOFControllerClass;
  if ( `guard variable for'CEnvDOFController::GetEntityClassInfo(void)::g_EntityCEnvDOFControllerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvDOFController::GetEntityClassInfo(void)::g_EntityCEnvDOFControllerClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvDOFController::GetEntityClassInfo(void)::g_EntityCEnvDOFControllerClassInfo,
      "CEnvDOFController",
      "env_dof_controller",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvDOFController::GetEntityClassInfo(void)::g_EntityCEnvDOFControllerClassInfo);
  }
  CEnvDOFController::GetEntityClassInternal(void)::g_EntityCEnvDOFControllerClass.m_pClassInfo = &CEnvDOFController::GetEntityClassInfo(void)::g_EntityCEnvDOFControllerClassInfo;
  CEnvDOFController::GetEntityClassInternal(void)::g_EntityCEnvDOFControllerClass.m_pBaseClassInfo = CEnvDOFController::GetEntityClassInfo(void)::g_EntityCEnvDOFControllerClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvDOFControllerClass = &CEnvDOFController::GetEntityClassInternal(void)::g_EntityCEnvDOFControllerClass;
  CEnvDOFController::GetEntityClassInfo(void)::g_EntityCEnvDOFControllerClassInfo.m_pClass = &CEnvDOFController::GetEntityClassInternal(void)::g_EntityCEnvDOFControllerClass;
  CEnvDOFController::GetEntityClassInternal(void)::g_EntityCEnvDOFControllerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvDOFControllerClass->m_pComponentOverrides = 0;
  return &CEnvDOFController::GetEntityClassInternal(void)::g_EntityCEnvDOFControllerClass;
}


// CEnvDOFController::GetEntityClass  (line 27, @0x00000000021df1f0, libserver.so)
CEntityClass *__cdecl CEnvDOFController::GetEntityClass()
{
  return g_pEntityCEnvDOFControllerClass;
}


// CEnvDOFController::Schema_DynamicBinding  (line 27, @0x00000000021e19a0, libserver.so)
// calls: CEnvDOFController::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEnvDOFController::Schema_DynamicBinding(const CEnvDOFController *const this)
{
  CEnvDOFController::Schema_VerifyBindingIsRegistered();
  return CEnvDOFController::s_pSchemaBinding;
}


