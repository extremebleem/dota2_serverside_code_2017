
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFish::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 23, @0x0000000001fd8150, libserver.so)
// globals: CFish::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFish::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFish::CEntityInstanceEntityClass *const this)
{
  return CFish::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFish::CEntityInstanceEntityClass::DestructInstance  (line 23, @0x0000000001fd8160, libserver.so)  // inlines: Destruct<CFish>
void __fastcall CFish::CEntityInstanceEntityClass::DestructInstance(
        CFish::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFish::CEntityInstanceEntityClass::FreeInstance  (line 23, @0x0000000001fd8180, libserver.so)
void __fastcall CFish::CEntityInstanceEntityClass::FreeInstance(CFish::CEntityInstanceEntityClass *const this, void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFish::CEntityInstanceEntityClass::CanAllocate  (line 23, @0x0000000001fd81a0, libserver.so)
bool __fastcall CFish::CEntityInstanceEntityClass::CanAllocate(const CFish::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFish::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 23, @0x0000000001fd81b0, libserver.so)
// globals: CFish::s_pSchemaBinding
const ISchemaBinding *__fastcall CFish::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFish::CEntityInstanceEntityClass *const this)
{
  return CFish::s_pSchemaBinding;
}


// CFish::CEntityInstanceEntityClass::AllocateInstance  (line 23, @0x0000000001fd95e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFish::CEntityInstanceEntityClass::AllocateInstance(CFish::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1480);
  memset(v1, 0, 0x5C8u);
  return v1;
}


// CFish::CEntityInstanceEntityClass::ConstructInstance  (line 23, @0x0000000001fd9b30, libserver.so)  // inlines: Construct<CFish>
// calls: CFish::CFish
CEntityInstance *__fastcall CFish::CEntityInstanceEntityClass::ConstructInstance(
        CFish::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFish::CFish(p);
  return p;
}


// CFish::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x0000000001fdad00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFish::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFish::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFish::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x0000000001fdad20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFish::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFish::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFish::GetEntityClassInternal  (line 23, @0x0000000001fdfcd0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "fish", "CFish"
// globals: `guard variable for'CFish::GetEntityClassInternal(void)::g_EntityCFishClass, CFish::GetEntityClassInternal(void)::g_EntityCFishClass, __dso_handle, CFish::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFish::GetEntityClassInfo(void)::g_EntityCFishClassInfo, CFish::GetEntityClassInfo(void)::g_EntityCFishClassInfo
CEntityClass *__cdecl CFish::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFish::GetEntityClassInternal(void)::g_EntityCFishClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFish::GetEntityClassInternal(void)::g_EntityCFishClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFish::GetEntityClassInternal(void)::g_EntityCFishClass);
    CFish::GetEntityClassInternal(void)::g_EntityCFishClass._vptr_CEntityClass = off_3FD8250;
    __cxa_guard_release(&`guard variable for'CFish::GetEntityClassInternal(void)::g_EntityCFishClass);
    __cxa_atexit(
      CFish::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFish::GetEntityClassInternal(void)::g_EntityCFishClass,
      &_dso_handle);
  }
  if ( g_pEntityCFishClass != 0 )
    return &CFish::GetEntityClassInternal(void)::g_EntityCFishClass;
  if ( `guard variable for'CFish::GetEntityClassInfo(void)::g_EntityCFishClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFish::GetEntityClassInfo(void)::g_EntityCFishClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFish::GetEntityClassInfo(void)::g_EntityCFishClassInfo,
      "CFish",
      "fish",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFish::GetEntityClassInfo(void)::g_EntityCFishClassInfo);
  }
  CFish::GetEntityClassInternal(void)::g_EntityCFishClass.m_pClassInfo = &CFish::GetEntityClassInfo(void)::g_EntityCFishClassInfo;
  CFish::GetEntityClassInternal(void)::g_EntityCFishClass.m_pBaseClassInfo = CFish::GetEntityClassInfo(void)::g_EntityCFishClassInfo.m_pBaseClassInfo;
  g_pEntityCFishClass = &CFish::GetEntityClassInternal(void)::g_EntityCFishClass;
  CFish::GetEntityClassInfo(void)::g_EntityCFishClassInfo.m_pClass = &CFish::GetEntityClassInternal(void)::g_EntityCFishClass;
  CFish::GetEntityClassInternal(void)::g_EntityCFishClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCFishClass->m_pComponentOverrides = 0;
  return &CFish::GetEntityClassInternal(void)::g_EntityCFishClass;
}


// CFish::GetEntityClass  (line 23, @0x000000000220ec50, libserver.so)
CEntityClass *__cdecl CFish::GetEntityClass()
{
  return g_pEntityCFishClass;
}


// CFish::Schema_DynamicBinding  (line 23, @0x0000000002211110, libserver.so)
// calls: CFish::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFish::Schema_DynamicBinding(const CFish *const this)
{
  CFish::Schema_VerifyBindingIsRegistered();
  return CFish::s_pSchemaBinding;
}


// CFishPool::~CFishPool  (line 95, @0x0000000002211d00, libserver.so)  // inlines: Purge, RemoveAll, StopListeningForAllEvents, ~CGameEventListener, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2
// calls: CBaseEntity::~CBaseEntity, CUtlMemory<CHandle<CFish>, int>::Purge
void __fastcall CFishPool::~CFishPool(CFishPool *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_fishes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_403C430;
  this->_vptr_IGameEventListener2 = off_403CAC0;
  this->m_fishes.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_fishes.m_Memory;
    CUtlMemory<CHandle<CFish>,int>::Purge(&this->m_fishes.m_Memory);
    if ( (this->m_fishes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CFish>,int>::Purge(p_m_Memory);
  }
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  CBaseEntity::~CBaseEntity(this);
}


// CFishPool::~CFishPool  (line 95, @0x0000000002211dd0, libserver.so)  // inlines: Purge, RemoveAll, StopListeningForAllEvents, ~CFishPool, ~CGameEventListener, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CFish>, int>::Purge
void __fastcall CFishPool::~CFishPool(CFishPool *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_fishes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_403C430;
  this->_vptr_IGameEventListener2 = off_403CAC0;
  this->m_fishes.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_fishes.m_Memory;
    CUtlMemory<CHandle<CFish>,int>::Purge(&this->m_fishes.m_Memory);
    if ( (this->m_fishes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CFish>,int>::Purge(p_m_Memory);
  }
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CFishPool::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 97, @0x0000000001fd81c0, libserver.so)
// globals: CFishPool::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFishPool::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFishPool::CEntityInstanceEntityClass *const this)
{
  return CFishPool::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFishPool::CEntityInstanceEntityClass::DestructInstance  (line 97, @0x0000000001fd81d0, libserver.so)  // inlines: Destruct<CFishPool>
void __fastcall CFishPool::CEntityInstanceEntityClass::DestructInstance(
        CFishPool::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFishPool::CEntityInstanceEntityClass::FreeInstance  (line 97, @0x0000000001fd81f0, libserver.so)
void __fastcall CFishPool::CEntityInstanceEntityClass::FreeInstance(
        CFishPool::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFishPool::CEntityInstanceEntityClass::CanAllocate  (line 97, @0x0000000001fd8210, libserver.so)
bool __fastcall CFishPool::CEntityInstanceEntityClass::CanAllocate(
        const CFishPool::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFishPool::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 97, @0x0000000001fd8220, libserver.so)
// globals: CFishPool::s_pSchemaBinding
const ISchemaBinding *__fastcall CFishPool::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFishPool::CEntityInstanceEntityClass *const this)
{
  return CFishPool::s_pSchemaBinding;
}


// CFishPool::CEntityInstanceEntityClass::AllocateInstance  (line 97, @0x0000000001fd9620, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFishPool::CEntityInstanceEntityClass::AllocateInstance(
        CFishPool::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 856);
  memset(v1, 0, 0x358u);
  return v1;
}


// CFishPool::CEntityInstanceEntityClass::ConstructInstance  (line 97, @0x0000000001fd9b60, libserver.so)  // inlines: Construct<CFishPool>
// calls: CFishPool::CFishPool
CEntityInstance *__fastcall CFishPool::CEntityInstanceEntityClass::ConstructInstance(
        CFishPool::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFishPool::CFishPool(p);
  return p;
}


// CFishPool::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 97, @0x0000000001fdaf80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFishPool::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFishPool::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFishPool::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 97, @0x0000000001fdafa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFishPool::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFishPool::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFishPool::GetEntityClassInternal  (line 97, @0x0000000001fdfe20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "func_fish_pool", "CFishPool"
// globals: `guard variable for'CFishPool::GetEntityClassInternal(void)::g_EntityCFishPoolClass, CFishPool::GetEntityClassInternal(void)::g_EntityCFishPoolClass, __dso_handle, CFishPool::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFishPool::GetEntityClassInfo(void)::g_EntityCFishPoolClassInfo, CFishPool::GetEntityClassInfo(void)::g_EntityCFishPoolClassInfo
CEntityClass *__cdecl CFishPool::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFishPool::GetEntityClassInternal(void)::g_EntityCFishPoolClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFishPool::GetEntityClassInternal(void)::g_EntityCFishPoolClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFishPool::GetEntityClassInternal(void)::g_EntityCFishPoolClass);
    CFishPool::GetEntityClassInternal(void)::g_EntityCFishPoolClass._vptr_CEntityClass = off_3FD82D0;
    __cxa_guard_release(&`guard variable for'CFishPool::GetEntityClassInternal(void)::g_EntityCFishPoolClass);
    __cxa_atexit(
      CFishPool::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFishPool::GetEntityClassInternal(void)::g_EntityCFishPoolClass,
      &_dso_handle);
  }
  if ( g_pEntityCFishPoolClass != 0 )
    return &CFishPool::GetEntityClassInternal(void)::g_EntityCFishPoolClass;
  if ( `guard variable for'CFishPool::GetEntityClassInfo(void)::g_EntityCFishPoolClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFishPool::GetEntityClassInfo(void)::g_EntityCFishPoolClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFishPool::GetEntityClassInfo(void)::g_EntityCFishPoolClassInfo,
      "CFishPool",
      "func_fish_pool",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFishPool::GetEntityClassInfo(void)::g_EntityCFishPoolClassInfo);
  }
  CFishPool::GetEntityClassInternal(void)::g_EntityCFishPoolClass.m_pClassInfo = &CFishPool::GetEntityClassInfo(void)::g_EntityCFishPoolClassInfo;
  CFishPool::GetEntityClassInternal(void)::g_EntityCFishPoolClass.m_pBaseClassInfo = CFishPool::GetEntityClassInfo(void)::g_EntityCFishPoolClassInfo.m_pBaseClassInfo;
  g_pEntityCFishPoolClass = &CFishPool::GetEntityClassInternal(void)::g_EntityCFishPoolClass;
  CFishPool::GetEntityClassInfo(void)::g_EntityCFishPoolClassInfo.m_pClass = &CFishPool::GetEntityClassInternal(void)::g_EntityCFishPoolClass;
  CFishPool::GetEntityClassInternal(void)::g_EntityCFishPoolClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCFishPoolClass->m_pComponentOverrides = 0;
  return &CFishPool::GetEntityClassInternal(void)::g_EntityCFishPoolClass;
}


// CFishPool::GetEntityClass  (line 97, @0x000000000220ec60, libserver.so)
CEntityClass *__cdecl CFishPool::GetEntityClass()
{
  return g_pEntityCFishPoolClass;
}


// CFishPool::Schema_DynamicBinding  (line 97, @0x0000000002211130, libserver.so)
// calls: CFishPool::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFishPool::Schema_DynamicBinding(const CFishPool *const this)
{
  CFishPool::Schema_VerifyBindingIsRegistered();
  return CFishPool::s_pSchemaBinding;
}


