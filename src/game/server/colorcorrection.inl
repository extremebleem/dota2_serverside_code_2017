
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CColorCorrection::~CColorCorrection  (line 30, @0x00000000021b2650, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CColorCorrection::~CColorCorrection(CColorCorrection *const this)
{
  this->_vptr_IHandleEntity = &off_40106B0;
  CBaseEntity::~CBaseEntity(this);
}


// CColorCorrection::~CColorCorrection  (line 30, @0x00000000021b2670, libserver.so)  // inlines: ~CColorCorrection
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CColorCorrection::~CColorCorrection(CColorCorrection *const this)
{
  this->_vptr_IHandleEntity = &off_40106B0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CColorCorrection::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x0000000001fb76d0, libserver.so)
// globals: CColorCorrection::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CColorCorrection::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CColorCorrection::CEntityInstanceEntityClass *const this)
{
  return CColorCorrection::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CColorCorrection::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x0000000001fb76e0, libserver.so)  // inlines: Destruct<CColorCorrection>
void __fastcall CColorCorrection::CEntityInstanceEntityClass::DestructInstance(
        CColorCorrection::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CColorCorrection::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x0000000001fb7700, libserver.so)
void __fastcall CColorCorrection::CEntityInstanceEntityClass::FreeInstance(
        CColorCorrection::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CColorCorrection::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x0000000001fb7720, libserver.so)
bool __fastcall CColorCorrection::CEntityInstanceEntityClass::CanAllocate(
        const CColorCorrection::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CColorCorrection::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x0000000001fb7730, libserver.so)
// globals: CColorCorrection::s_pSchemaBinding
const ISchemaBinding *__fastcall CColorCorrection::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CColorCorrection::CEntityInstanceEntityClass *const this)
{
  return CColorCorrection::s_pSchemaBinding;
}


// CColorCorrection::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x0000000001fb99e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CColorCorrection::CEntityInstanceEntityClass::AllocateInstance(
        CColorCorrection::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1096);
  memset(v1, 0, 0x448u);
  return v1;
}


// CColorCorrection::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x0000000001fb9eb0, libserver.so)  // inlines: Construct<CColorCorrection>
// calls: CColorCorrection::CColorCorrection
CEntityInstance *__fastcall CColorCorrection::CEntityInstanceEntityClass::ConstructInstance(
        CColorCorrection::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CColorCorrection::CColorCorrection(p);
  return p;
}


// CColorCorrection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000001fbda80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CColorCorrection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CColorCorrection::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CColorCorrection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000001fbdaa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CColorCorrection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CColorCorrection::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CColorCorrection::GetEntityClassInternal  (line 32, @0x0000000001fcb870, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseEntity>, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "color_correction", "CColorCorrection"
// globals: `guard variable for'CColorCorrection::GetEntityClassInternal(void)::g_EntityCColorCorrectionClass, CColorCorrection::GetEntityClassInternal(void)::g_EntityCColorCorrectionClass, __dso_handle, CColorCorrection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CColorCorrection::GetEntityClassInfo(void)::g_EntityCColorCorrectionClassInfo, CColorCorrection::GetEntityClassInfo(void)::g_EntityCColorCorrectionClassInfo
CEntityClass *__cdecl CColorCorrection::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CColorCorrection::GetEntityClassInternal(void)::g_EntityCColorCorrectionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CColorCorrection::GetEntityClassInternal(void)::g_EntityCColorCorrectionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CColorCorrection::GetEntityClassInternal(void)::g_EntityCColorCorrectionClass);
    CColorCorrection::GetEntityClassInternal(void)::g_EntityCColorCorrectionClass._vptr_CEntityClass = off_3FD0610;
    __cxa_guard_release(&`guard variable for'CColorCorrection::GetEntityClassInternal(void)::g_EntityCColorCorrectionClass);
    __cxa_atexit(
      CColorCorrection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CColorCorrection::GetEntityClassInternal(void)::g_EntityCColorCorrectionClass,
      &_dso_handle);
  }
  if ( g_pEntityCColorCorrectionClass != 0 )
    return &CColorCorrection::GetEntityClassInternal(void)::g_EntityCColorCorrectionClass;
  if ( `guard variable for'CColorCorrection::GetEntityClassInfo(void)::g_EntityCColorCorrectionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CColorCorrection::GetEntityClassInfo(void)::g_EntityCColorCorrectionClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CColorCorrection::GetEntityClassInfo(void)::g_EntityCColorCorrectionClassInfo,
      "CColorCorrection",
      "color_correction",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CColorCorrection::GetEntityClassInfo(void)::g_EntityCColorCorrectionClassInfo);
  }
  CColorCorrection::GetEntityClassInternal(void)::g_EntityCColorCorrectionClass.m_pClassInfo = &CColorCorrection::GetEntityClassInfo(void)::g_EntityCColorCorrectionClassInfo;
  CColorCorrection::GetEntityClassInternal(void)::g_EntityCColorCorrectionClass.m_pBaseClassInfo = CColorCorrection::GetEntityClassInfo(void)::g_EntityCColorCorrectionClassInfo.m_pBaseClassInfo;
  g_pEntityCColorCorrectionClass = &CColorCorrection::GetEntityClassInternal(void)::g_EntityCColorCorrectionClass;
  CColorCorrection::GetEntityClassInfo(void)::g_EntityCColorCorrectionClassInfo.m_pClass = &CColorCorrection::GetEntityClassInternal(void)::g_EntityCColorCorrectionClass;
  CColorCorrection::GetEntityClassInternal(void)::g_EntityCColorCorrectionClass.m_pScriptClassDesc = GetScriptDesc<CBaseEntity>(0);
  g_pEntityCColorCorrectionClass->m_pComponentOverrides = 0;
  return &CColorCorrection::GetEntityClassInternal(void)::g_EntityCColorCorrectionClass;
}


// CColorCorrection::GetEntityClass  (line 32, @0x00000000021b0bc0, libserver.so)
CEntityClass *__cdecl CColorCorrection::GetEntityClass()
{
  return g_pEntityCColorCorrectionClass;
}


// CColorCorrection::Schema_DynamicBinding  (line 32, @0x00000000021b2570, libserver.so)
// calls: CColorCorrection::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CColorCorrection::Schema_DynamicBinding(const CColorCorrection *const this)
{
  CColorCorrection::Schema_VerifyBindingIsRegistered();
  return CColorCorrection::s_pSchemaBinding;
}


// CColorCorrection::ObjectCaps  (line 50, @0x00000000021b22f0, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CColorCorrection::ObjectCaps(CColorCorrection *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CColorCorrectionSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 100, @0x00000000021b0bd0, libserver.so)
void __fastcall CColorCorrectionSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CColorCorrectionSystem *const this)
{
  ;
}


// CColorCorrectionSystem::DoesGameSystemReallocate  (line 100, @0x00000000021b0be0, libserver.so)
// globals: CColorCorrectionSystem::sm_Factory
bool __fastcall CColorCorrectionSystem::DoesGameSystemReallocate(const CColorCorrectionSystem *const this)
{
  return (*(CColorCorrectionSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CColorCorrectionSystem::sm_Factory);
}


// CColorCorrectionSystem::SetGameSystemGlobalPtrs  (line 100, @0x00000000021b0c00, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CColorCorrectionSystem::sm_Factory
void __fastcall CColorCorrectionSystem::SetGameSystemGlobalPtrs(CColorCorrectionSystem *const this, void *pValue)
{
  if ( CColorCorrectionSystem::sm_Factory != 0 )
    (*(CColorCorrectionSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CColorCorrectionSystem::sm_Factory, pValue);
}


// CColorCorrectionSystem::~CColorCorrectionSystem  (line 109, @0x00000000021b3300, libserver.so)  // inlines: Set, StopListeningForAllEvents, operator=, ~CAutoGameSystem, ~CGameEventListener, ~IGameEventListener2
// calls: IGameSystem::~IGameSystem
void __fastcall CColorCorrectionSystem::~CColorCorrectionSystem(CColorCorrectionSystem *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = off_4010DB0;
  v2 = !this->m_bRegisteredForEvents;
  this->m_hMasterController.m_Index = -1;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CColorCorrectionSystem::~CColorCorrectionSystem  (line 109, @0x00000000021b3380, libserver.so)  // inlines: Set, StopListeningForAllEvents, operator=, ~CAutoGameSystem, ~CColorCorrectionSystem, ~CGameEventListener, ~IGameEventListener2
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CColorCorrectionSystem::~CColorCorrectionSystem(CColorCorrectionSystem *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = off_4010DB0;
  v2 = !this->m_bRegisteredForEvents;
  this->m_hMasterController.m_Index = -1;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


