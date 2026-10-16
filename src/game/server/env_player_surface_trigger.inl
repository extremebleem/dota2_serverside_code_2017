
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 21, @0x0000000001fd7eb0, libserver.so)
// globals: CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass *const this)
{
  return CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::DestructInstance  (line 21, @0x0000000001fd7ec0, libserver.so)  // inlines: Destruct<CEnvPlayerSurfaceTrigger>
void __fastcall CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::DestructInstance(
        CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::FreeInstance  (line 21, @0x0000000001fd7ee0, libserver.so)
void __fastcall CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::FreeInstance(
        CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::CanAllocate  (line 21, @0x0000000001fd7f00, libserver.so)
bool __fastcall CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::CanAllocate(
        const CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 21, @0x0000000001fd7f10, libserver.so)
// globals: CEnvPlayerSurfaceTrigger::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass *const this)
{
  return CEnvPlayerSurfaceTrigger::s_pSchemaBinding;
}


// CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::AllocateInstance  (line 21, @0x0000000001fd9460, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::AllocateInstance(
        CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 840);
  memset(v1, 0, 0x348u);
  return v1;
}


// CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::ConstructInstance  (line 21, @0x0000000001fd9800, libserver.so)  // inlines: CEntityIOOutput, CEnvPlayerSurfaceTrigger, CPointEntity, Construct<CEnvPlayerSurfaceTrigger>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::ConstructInstance(
        CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40282B0;
    *(p + 99) = off_3F7C190;
    *(p + 102) = off_3F7C190;
  }
  return p;
}


// CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 21, @0x0000000001fdaa30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 21, @0x0000000001fdaa50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvPlayerSurfaceTrigger::GetEntityClassInternal  (line 21, @0x0000000001fde800, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "env_player_surface_trigger", "CEnvPlayerSurfaceTrigger"
// globals: `guard variable for'CEnvPlayerSurfaceTrigger::GetEntityClassInternal(void)::g_EntityCEnvPlayerSurfaceTriggerClass, CEnvPlayerSurfaceTrigger::GetEntityClassInternal(void)::g_EntityCEnvPlayerSurfaceTriggerClass, __dso_handle, CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvPlayerSurfaceTrigger::GetEntityClassInfo(void)::g_EntityCEnvPlayerSurfaceTriggerClassInfo, CEnvPlayerSurfaceTrigger::GetEntityClassInfo(void)::g_EntityCEnvPlayerSurfaceTriggerClassInfo
CEntityClass *__cdecl CEnvPlayerSurfaceTrigger::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvPlayerSurfaceTrigger::GetEntityClassInternal(void)::g_EntityCEnvPlayerSurfaceTriggerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvPlayerSurfaceTrigger::GetEntityClassInternal(void)::g_EntityCEnvPlayerSurfaceTriggerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvPlayerSurfaceTrigger::GetEntityClassInternal(void)::g_EntityCEnvPlayerSurfaceTriggerClass);
    CEnvPlayerSurfaceTrigger::GetEntityClassInternal(void)::g_EntityCEnvPlayerSurfaceTriggerClass._vptr_CEntityClass = off_3FD7110;
    __cxa_guard_release(&`guard variable for'CEnvPlayerSurfaceTrigger::GetEntityClassInternal(void)::g_EntityCEnvPlayerSurfaceTriggerClass);
    __cxa_atexit(
      CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvPlayerSurfaceTrigger::GetEntityClassInternal(void)::g_EntityCEnvPlayerSurfaceTriggerClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvPlayerSurfaceTriggerClass != 0 )
    return &CEnvPlayerSurfaceTrigger::GetEntityClassInternal(void)::g_EntityCEnvPlayerSurfaceTriggerClass;
  if ( `guard variable for'CEnvPlayerSurfaceTrigger::GetEntityClassInfo(void)::g_EntityCEnvPlayerSurfaceTriggerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvPlayerSurfaceTrigger::GetEntityClassInfo(void)::g_EntityCEnvPlayerSurfaceTriggerClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvPlayerSurfaceTrigger::GetEntityClassInfo(void)::g_EntityCEnvPlayerSurfaceTriggerClassInfo,
      "CEnvPlayerSurfaceTrigger",
      "env_player_surface_trigger",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvPlayerSurfaceTrigger::GetEntityClassInfo(void)::g_EntityCEnvPlayerSurfaceTriggerClassInfo);
  }
  CEnvPlayerSurfaceTrigger::GetEntityClassInternal(void)::g_EntityCEnvPlayerSurfaceTriggerClass.m_pClassInfo = &CEnvPlayerSurfaceTrigger::GetEntityClassInfo(void)::g_EntityCEnvPlayerSurfaceTriggerClassInfo;
  CEnvPlayerSurfaceTrigger::GetEntityClassInternal(void)::g_EntityCEnvPlayerSurfaceTriggerClass.m_pBaseClassInfo = CEnvPlayerSurfaceTrigger::GetEntityClassInfo(void)::g_EntityCEnvPlayerSurfaceTriggerClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvPlayerSurfaceTriggerClass = &CEnvPlayerSurfaceTrigger::GetEntityClassInternal(void)::g_EntityCEnvPlayerSurfaceTriggerClass;
  CEnvPlayerSurfaceTrigger::GetEntityClassInfo(void)::g_EntityCEnvPlayerSurfaceTriggerClassInfo.m_pClass = &CEnvPlayerSurfaceTrigger::GetEntityClassInternal(void)::g_EntityCEnvPlayerSurfaceTriggerClass;
  CEnvPlayerSurfaceTrigger::GetEntityClassInternal(void)::g_EntityCEnvPlayerSurfaceTriggerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvPlayerSurfaceTriggerClass->m_pComponentOverrides = 0;
  return &CEnvPlayerSurfaceTrigger::GetEntityClassInternal(void)::g_EntityCEnvPlayerSurfaceTriggerClass;
}


// CEnvPlayerSurfaceTrigger::GetEntityClass  (line 21, @0x00000000021df440, libserver.so)
CEntityClass *__cdecl CEnvPlayerSurfaceTrigger::GetEntityClass()
{
  return g_pEntityCEnvPlayerSurfaceTriggerClass;
}


// CEnvPlayerSurfaceTrigger::Schema_DynamicBinding  (line 21, @0x00000000021e19c0, libserver.so)
// calls: CEnvPlayerSurfaceTrigger::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEnvPlayerSurfaceTrigger::Schema_DynamicBinding(
        const CEnvPlayerSurfaceTrigger *const this)
{
  CEnvPlayerSurfaceTrigger::Schema_VerifyBindingIsRegistered();
  return CEnvPlayerSurfaceTrigger::s_pSchemaBinding;
}


