
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseDoor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 72, @0x0000000001fd7b80, libserver.so)
// globals: CBaseDoor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseDoor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseDoor::CEntityInstanceEntityClass *const this)
{
  return CBaseDoor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseDoor::CEntityInstanceEntityClass::DestructInstance  (line 72, @0x0000000001fd7b90, libserver.so)  // inlines: Destruct<CBaseDoor>
void __fastcall CBaseDoor::CEntityInstanceEntityClass::DestructInstance(
        CBaseDoor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseDoor::CEntityInstanceEntityClass::FreeInstance  (line 72, @0x0000000001fd7bb0, libserver.so)
void __fastcall CBaseDoor::CEntityInstanceEntityClass::FreeInstance(
        CBaseDoor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseDoor::CEntityInstanceEntityClass::CanAllocate  (line 72, @0x0000000001fd7bd0, libserver.so)
bool __fastcall CBaseDoor::CEntityInstanceEntityClass::CanAllocate(
        const CBaseDoor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseDoor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 72, @0x0000000001fd7be0, libserver.so)
// globals: CBaseDoor::s_pSchemaBinding
const ISchemaBinding *__fastcall CBaseDoor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseDoor::CEntityInstanceEntityClass *const this)
{
  return CBaseDoor::s_pSchemaBinding;
}


// CBaseDoor::CEntityInstanceEntityClass::AllocateInstance  (line 72, @0x0000000001fd92a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseDoor::CEntityInstanceEntityClass::AllocateInstance(
        CBaseDoor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1704);
  memset(v1, 0, 0x6A8u);
  return v1;
}


// CBaseDoor::CEntityInstanceEntityClass::ConstructInstance  (line 72, @0x0000000001fd9950, libserver.so)  // inlines: Construct<CBaseDoor>
// calls: CBaseDoor::CBaseDoor
CEntityInstance *__fastcall CBaseDoor::CEntityInstanceEntityClass::ConstructInstance(
        CBaseDoor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CBaseDoor::CBaseDoor(p);
  return p;
}


// CBaseDoor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 72, @0x0000000001fdab70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseDoor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseDoor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CBaseDoor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 72, @0x0000000001fdab90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseDoor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseDoor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseDoor::GetEntityClassInternal  (line 72, @0x0000000001fdd5b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "func_door", "CBaseDoor", "CBaseToggle"
// globals: `guard variable for'CBaseDoor::GetEntityClassInternal(void)::g_EntityCBaseDoorClass, CBaseDoor::GetEntityClassInternal(void)::g_EntityCBaseDoorClass, __dso_handle, CBaseDoor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseDoor::GetEntityClassInfo(void)::g_EntityCBaseDoorClassInfo, CBaseDoor::GetEntityClassInfo(void)::g_EntityCBaseDoorClassInfo, `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo, CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo
CEntityClass *__cdecl CBaseDoor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseDoor::GetEntityClassInternal(void)::g_EntityCBaseDoorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseDoor::GetEntityClassInternal(void)::g_EntityCBaseDoorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBaseDoor::GetEntityClassInternal(void)::g_EntityCBaseDoorClass);
    CBaseDoor::GetEntityClassInternal(void)::g_EntityCBaseDoorClass._vptr_CEntityClass = off_3FD4D50;
    __cxa_guard_release(&`guard variable for'CBaseDoor::GetEntityClassInternal(void)::g_EntityCBaseDoorClass);
    __cxa_atexit(
      CBaseDoor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseDoor::GetEntityClassInternal(void)::g_EntityCBaseDoorClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseDoorClass != 0 )
    return &CBaseDoor::GetEntityClassInternal(void)::g_EntityCBaseDoorClass;
  if ( `guard variable for'CBaseDoor::GetEntityClassInfo(void)::g_EntityCBaseDoorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseDoor::GetEntityClassInfo(void)::g_EntityCBaseDoorClassInfo) != 0 )
  {
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
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseDoor::GetEntityClassInfo(void)::g_EntityCBaseDoorClassInfo,
      "CBaseDoor",
      "func_door",
      0,
      &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseDoor::GetEntityClassInfo(void)::g_EntityCBaseDoorClassInfo);
  }
  CBaseDoor::GetEntityClassInternal(void)::g_EntityCBaseDoorClass.m_pClassInfo = &CBaseDoor::GetEntityClassInfo(void)::g_EntityCBaseDoorClassInfo;
  CBaseDoor::GetEntityClassInternal(void)::g_EntityCBaseDoorClass.m_pBaseClassInfo = CBaseDoor::GetEntityClassInfo(void)::g_EntityCBaseDoorClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseDoorClass = &CBaseDoor::GetEntityClassInternal(void)::g_EntityCBaseDoorClass;
  CBaseDoor::GetEntityClassInfo(void)::g_EntityCBaseDoorClassInfo.m_pClass = &CBaseDoor::GetEntityClassInternal(void)::g_EntityCBaseDoorClass;
  CBaseDoor::GetEntityClassInternal(void)::g_EntityCBaseDoorClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCBaseDoorClass->m_pComponentOverrides = 0;
  return &CBaseDoor::GetEntityClassInternal(void)::g_EntityCBaseDoorClass;
}


// CBaseDoor::GetEntityClass  (line 72, @0x00000000021de310, libserver.so)
CEntityClass *__cdecl CBaseDoor::GetEntityClass()
{
  return g_pEntityCBaseDoorClass;
}


// CBaseDoor::Schema_DynamicBinding  (line 72, @0x00000000021e18e0, libserver.so)
// calls: CBaseDoor::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseDoor::Schema_DynamicBinding(const CBaseDoor *const this)
{
  CBaseDoor::Schema_VerifyBindingIsRegistered();
  return CBaseDoor::s_pSchemaBinding;
}


// CBaseDoor::GetEntityClassInfo  (line 72, @0x00000000021e67f0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseModelEntity::GetEntityClassInfo
// callers: CFuncWater::GetEntityClassInternal, CRotDoor::GetEntityClassInternal
// strings: "func_door", "CBaseDoor", "CBaseToggle"
// globals: `guard variable for'CBaseDoor::GetEntityClassInfo(void)::g_EntityCBaseDoorClassInfo, CBaseDoor::GetEntityClassInfo(void)::g_EntityCBaseDoorClassInfo, `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo, CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo
CEntityClassInfo *__cdecl CBaseDoor::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseDoor::GetEntityClassInfo(void)::g_EntityCBaseDoorClassInfo != 0 )
    return &CBaseDoor::GetEntityClassInfo(void)::g_EntityCBaseDoorClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CBaseDoor::GetEntityClassInfo(void)::g_EntityCBaseDoorClassInfo) == 0 )
    return &CBaseDoor::GetEntityClassInfo(void)::g_EntityCBaseDoorClassInfo;
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
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CBaseDoor::GetEntityClassInfo(void)::g_EntityCBaseDoorClassInfo,
    "CBaseDoor",
    "func_door",
    0,
    &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
  __cxa_guard_release(&`guard variable for'CBaseDoor::GetEntityClassInfo(void)::g_EntityCBaseDoorClassInfo);
  return &CBaseDoor::GetEntityClassInfo(void)::g_EntityCBaseDoorClassInfo;
}


// CBaseDoor::ObjectCaps  (line 99, @0x00000000021e0e00, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CBaseDoor::ObjectCaps(CBaseDoor *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  if ( (this->m_spawnflags.m_Value & 0x100) != 0 )
    return result | 0x21;
  return result;
}


// CBaseDoor::IsRotatingDoor  (line 114, @0x00000000021de320, libserver.so)
bool __fastcall CBaseDoor::IsRotatingDoor(const CBaseDoor *const this)
{
  return 0;
}


