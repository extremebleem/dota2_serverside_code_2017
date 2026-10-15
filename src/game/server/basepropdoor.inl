
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBasePropDoor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 55, @0x0000000001fb7870, libserver.so)
// globals: CBasePropDoor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBasePropDoor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBasePropDoor::CEntityInstanceEntityClass *const this)
{
  return CBasePropDoor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBasePropDoor::CEntityInstanceEntityClass::AllocateInstance  (line 55, @0x0000000001fb7880, libserver.so)
void *__fastcall CBasePropDoor::CEntityInstanceEntityClass::AllocateInstance(
        CBasePropDoor::CEntityInstanceEntityClass *const this)
{
  return 0;
}


// CBasePropDoor::CEntityInstanceEntityClass::ConstructInstance  (line 55, @0x0000000001fb7890, libserver.so)
CEntityInstance *__fastcall CBasePropDoor::CEntityInstanceEntityClass::ConstructInstance(
        CBasePropDoor::CEntityInstanceEntityClass *const this,
        void *p)
{
  return p;
}


// CBasePropDoor::CEntityInstanceEntityClass::DestructInstance  (line 55, @0x0000000001fb78a0, libserver.so)
void __fastcall CBasePropDoor::CEntityInstanceEntityClass::DestructInstance(
        CBasePropDoor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  ;
}


// CBasePropDoor::CEntityInstanceEntityClass::FreeInstance  (line 55, @0x0000000001fb78b0, libserver.so)
void __fastcall CBasePropDoor::CEntityInstanceEntityClass::FreeInstance(
        CBasePropDoor::CEntityInstanceEntityClass *const this,
        void *p)
{
  ;
}


// CBasePropDoor::CEntityInstanceEntityClass::CanAllocate  (line 55, @0x0000000001fb78c0, libserver.so)
bool __fastcall CBasePropDoor::CEntityInstanceEntityClass::CanAllocate(
        const CBasePropDoor::CEntityInstanceEntityClass *const this)
{
  return 0;
}


// CBasePropDoor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 55, @0x0000000001fb78d0, libserver.so)
// globals: CBasePropDoor::s_pSchemaBinding
const ISchemaBinding *__fastcall CBasePropDoor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBasePropDoor::CEntityInstanceEntityClass *const this)
{
  return CBasePropDoor::s_pSchemaBinding;
}


// CBasePropDoor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 55, @0x0000000001fbda30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBasePropDoor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBasePropDoor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CBasePropDoor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 55, @0x0000000001fbda50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBasePropDoor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBasePropDoor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBasePropDoor::GetEntityClassInternal  (line 55, @0x0000000001fccc00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseAnimating>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBreakableProp::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "CBasePropDoor", "prop_dynamic", "CDynamicProp"
// globals: `guard variable for'CBasePropDoor::GetEntityClassInternal(void)::g_EntityCBasePropDoorClass, CBasePropDoor::GetEntityClassInternal(void)::g_EntityCBasePropDoorClass, __dso_handle, CBasePropDoor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo, CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo, `guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo, CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo
CEntityClass *__cdecl CBasePropDoor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBasePropDoor::GetEntityClassInternal(void)::g_EntityCBasePropDoorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBasePropDoor::GetEntityClassInternal(void)::g_EntityCBasePropDoorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBasePropDoor::GetEntityClassInternal(void)::g_EntityCBasePropDoorClass);
    CBasePropDoor::GetEntityClassInternal(void)::g_EntityCBasePropDoorClass._vptr_CEntityClass = off_3FD22B0;
    __cxa_guard_release(&`guard variable for'CBasePropDoor::GetEntityClassInternal(void)::g_EntityCBasePropDoorClass);
    __cxa_atexit(
      CBasePropDoor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBasePropDoor::GetEntityClassInternal(void)::g_EntityCBasePropDoorClass,
      &_dso_handle);
  }
  if ( g_pEntityCBasePropDoorClass != 0 )
    return &CBasePropDoor::GetEntityClassInternal(void)::g_EntityCBasePropDoorClass;
  if ( `guard variable for'CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo) != 0 )
  {
    if ( `guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo) != 0 )
    {
      EntityClassInfo = CBreakableProp::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo,
        "CDynamicProp",
        "prop_dynamic",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo,
      "CBasePropDoor",
      0,
      0,
      &CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo);
    __cxa_guard_release(&`guard variable for'CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo);
  }
  CBasePropDoor::GetEntityClassInternal(void)::g_EntityCBasePropDoorClass.m_pClassInfo = &CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo;
  CBasePropDoor::GetEntityClassInternal(void)::g_EntityCBasePropDoorClass.m_pBaseClassInfo = CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo.m_pBaseClassInfo;
  g_pEntityCBasePropDoorClass = &CBasePropDoor::GetEntityClassInternal(void)::g_EntityCBasePropDoorClass;
  CBasePropDoor::GetEntityClassInfo(void)::g_EntityCBasePropDoorClassInfo.m_pClass = &CBasePropDoor::GetEntityClassInternal(void)::g_EntityCBasePropDoorClass;
  CBasePropDoor::GetEntityClassInternal(void)::g_EntityCBasePropDoorClass.m_pScriptClassDesc = GetScriptDesc<CBaseAnimating>(0);
  g_pEntityCBasePropDoorClass->m_pComponentOverrides = 0;
  return &CBasePropDoor::GetEntityClassInternal(void)::g_EntityCBasePropDoorClass;
}


// CBasePropDoor::GetEntityClass  (line 55, @0x0000000002370940, libserver.so)
CEntityClass *__cdecl CBasePropDoor::GetEntityClass()
{
  return g_pEntityCBasePropDoorClass;
}


// CBasePropDoor::Schema_DynamicBinding  (line 55, @0x0000000002372fd0, libserver.so)
// calls: CBasePropDoor::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBasePropDoor::Schema_DynamicBinding(const CBasePropDoor *const this)
{
  CBasePropDoor::Schema_VerifyBindingIsRegistered();
  return CBasePropDoor::s_pSchemaBinding;
}


// CBasePropDoor::IsCheckpointExitDoor  (line 77, @0x0000000002370950, libserver.so)
bool __fastcall CBasePropDoor::IsCheckpointExitDoor(const CBasePropDoor *const this)
{
  return 0;
}


// CBasePropDoor::IsDoorLocked  (line 101, @0x0000000002370960, libserver.so)
bool __fastcall CBasePropDoor::IsDoorLocked(CBasePropDoor *const this)
{
  return this->m_bLocked.m_Value;
}


// CBasePropDoor::DoorCanClose  (line 110, @0x0000000002370970, libserver.so)
bool __fastcall CBasePropDoor::DoorCanClose(CBasePropDoor *const this, bool bAutoClose)
{
  return 1;
}


// CBasePropDoor::DoorCanOpen  (line 111, @0x0000000002370980, libserver.so)
bool __fastcall CBasePropDoor::DoorCanOpen(CBasePropDoor *const this)
{
  return 1;
}


