
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTASpecGraphPlayerData::~CDOTASpecGraphPlayerData  (line 45, @0x0000000002736de0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDOTASpecGraphPlayerData::~CDOTASpecGraphPlayerData(CDOTASpecGraphPlayerData *const this)
{
  this->_vptr_IHandleEntity = &off_42A9170;
  CBaseEntity::~CBaseEntity(this);
}


// CDOTASpecGraphPlayerData::~CDOTASpecGraphPlayerData  (line 45, @0x0000000002736e00, libserver.so)  // inlines: ~CDOTASpecGraphPlayerData
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDOTASpecGraphPlayerData::~CDOTASpecGraphPlayerData(CDOTASpecGraphPlayerData *const this)
{
  this->_vptr_IHandleEntity = &off_42A9170;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTASpecGraphPlayerData::Schema_DynamicBinding  (line 47, @0x00000000027283b0, libserver.so)
// globals: CDOTASpecGraphPlayerData::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTASpecGraphPlayerData::Schema_DynamicBinding(
        const CDOTASpecGraphPlayerData *const this)
{
  return CDOTASpecGraphPlayerData::s_pSchemaBinding;
}


// CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 47, @0x00000000027283c0, libserver.so)
// globals: CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTASpecGraphPlayerData::CEntityInstanceEntityClass *const this)
{
  return CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::DestructInstance  (line 47, @0x00000000027283d0, libserver.so)  // inlines: Destruct<CDOTASpecGraphPlayerData>
void __fastcall CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::DestructInstance(
        CDOTASpecGraphPlayerData::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::FreeInstance  (line 47, @0x00000000027283f0, libserver.so)
void __fastcall CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::FreeInstance(
        CDOTASpecGraphPlayerData::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::CanAllocate  (line 47, @0x0000000002728410, libserver.so)
bool __fastcall CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::CanAllocate(
        const CDOTASpecGraphPlayerData::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 47, @0x0000000002728420, libserver.so)
// globals: CDOTASpecGraphPlayerData::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTASpecGraphPlayerData::CEntityInstanceEntityClass *const this)
{
  return CDOTASpecGraphPlayerData::s_pSchemaBinding;
}


// CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::AllocateInstance  (line 47, @0x0000000002736880, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::AllocateInstance(
        CDOTASpecGraphPlayerData::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1296);
  memset(v1, 0, 0x510u);
  return v1;
}


// CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::ConstructInstance  (line 47, @0x0000000002736c30, libserver.so)  // inlines: CDOTASpecGraphPlayerData, CNetworkVarBase, Construct<CDOTASpecGraphPlayerData>, EnsureValidValue<int>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::ConstructInstance(
        CDOTASpecGraphPlayerData::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 322) = 0;
    *p = &off_42A9170;
  }
  return p;
}


// CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 47, @0x000000000274d1e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTASpecGraphPlayerData::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 47, @0x000000000274d200, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTASpecGraphPlayerData::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTASpecGraphPlayerData::GetEntityClassInternal  (line 47, @0x000000000279e090, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_07.cpp
// strings: "dota_spec_graph_player_data", "CDOTASpecGraphPlayerData"
// globals: `guard variable for'CDOTASpecGraphPlayerData::GetEntityClassInternal(void)::g_EntityCDOTASpecGraphPlayerDataClass, CDOTASpecGraphPlayerData::GetEntityClassInternal(void)::g_EntityCDOTASpecGraphPlayerDataClass, __dso_handle, CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTASpecGraphPlayerData::GetEntityClassInfo(void)::g_EntityCDOTASpecGraphPlayerDataClassInfo, CDOTASpecGraphPlayerData::GetEntityClassInfo(void)::g_EntityCDOTASpecGraphPlayerDataClassInfo
CEntityClass *__cdecl CDOTASpecGraphPlayerData::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTASpecGraphPlayerData::GetEntityClassInternal(void)::g_EntityCDOTASpecGraphPlayerDataClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTASpecGraphPlayerData::GetEntityClassInternal(void)::g_EntityCDOTASpecGraphPlayerDataClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTASpecGraphPlayerData::GetEntityClassInternal(void)::g_EntityCDOTASpecGraphPlayerDataClass);
    CDOTASpecGraphPlayerData::GetEntityClassInternal(void)::g_EntityCDOTASpecGraphPlayerDataClass._vptr_CEntityClass = off_42A8FB0;
    __cxa_guard_release(&`guard variable for'CDOTASpecGraphPlayerData::GetEntityClassInternal(void)::g_EntityCDOTASpecGraphPlayerDataClass);
    __cxa_atexit(
      CDOTASpecGraphPlayerData::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTASpecGraphPlayerData::GetEntityClassInternal(void)::g_EntityCDOTASpecGraphPlayerDataClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTASpecGraphPlayerDataClass != 0 )
    return &CDOTASpecGraphPlayerData::GetEntityClassInternal(void)::g_EntityCDOTASpecGraphPlayerDataClass;
  if ( `guard variable for'CDOTASpecGraphPlayerData::GetEntityClassInfo(void)::g_EntityCDOTASpecGraphPlayerDataClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTASpecGraphPlayerData::GetEntityClassInfo(void)::g_EntityCDOTASpecGraphPlayerDataClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTASpecGraphPlayerData::GetEntityClassInfo(void)::g_EntityCDOTASpecGraphPlayerDataClassInfo,
      "CDOTASpecGraphPlayerData",
      "dota_spec_graph_player_data",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTASpecGraphPlayerData::GetEntityClassInfo(void)::g_EntityCDOTASpecGraphPlayerDataClassInfo);
  }
  CDOTASpecGraphPlayerData::GetEntityClassInternal(void)::g_EntityCDOTASpecGraphPlayerDataClass.m_pClassInfo = &CDOTASpecGraphPlayerData::GetEntityClassInfo(void)::g_EntityCDOTASpecGraphPlayerDataClassInfo;
  CDOTASpecGraphPlayerData::GetEntityClassInternal(void)::g_EntityCDOTASpecGraphPlayerDataClass.m_pBaseClassInfo = CDOTASpecGraphPlayerData::GetEntityClassInfo(void)::g_EntityCDOTASpecGraphPlayerDataClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTASpecGraphPlayerDataClass = &CDOTASpecGraphPlayerData::GetEntityClassInternal(void)::g_EntityCDOTASpecGraphPlayerDataClass;
  CDOTASpecGraphPlayerData::GetEntityClassInfo(void)::g_EntityCDOTASpecGraphPlayerDataClassInfo.m_pClass = &CDOTASpecGraphPlayerData::GetEntityClassInternal(void)::g_EntityCDOTASpecGraphPlayerDataClass;
  CDOTASpecGraphPlayerData::GetEntityClassInternal(void)::g_EntityCDOTASpecGraphPlayerDataClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTASpecGraphPlayerDataClass->m_pComponentOverrides = 0;
  return &CDOTASpecGraphPlayerData::GetEntityClassInternal(void)::g_EntityCDOTASpecGraphPlayerDataClass;
}


// CDOTASpecGraphPlayerData::UpdateTransmitState  (line 54, @0x0000000002736ca0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CDOTASpecGraphPlayerData::UpdateTransmitState(CDOTASpecGraphPlayerData *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CDOTASpectatorGraphManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 110, @0x0000000002728430, libserver.so)
void __fastcall CDOTASpectatorGraphManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTASpectatorGraphManager *const this)
{
  ;
}


// CDOTASpectatorGraphManager::DoesGameSystemReallocate  (line 110, @0x0000000002728440, libserver.so)
// globals: CDOTASpectatorGraphManager::sm_Factory
bool __fastcall CDOTASpectatorGraphManager::DoesGameSystemReallocate(const CDOTASpectatorGraphManager *const this)
{
  return (*(CDOTASpectatorGraphManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTASpectatorGraphManager::sm_Factory);
}


// CDOTASpectatorGraphManager::SetGameSystemGlobalPtrs  (line 110, @0x0000000002728460, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTASpectatorGraphManager::sm_Factory
void __fastcall CDOTASpectatorGraphManager::SetGameSystemGlobalPtrs(
        CDOTASpectatorGraphManager *const this,
        void *pValue)
{
  if ( CDOTASpectatorGraphManager::sm_Factory != 0 )
    (*(CDOTASpectatorGraphManager::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CDOTASpectatorGraphManager::sm_Factory,
      pValue);
}


// CDOTASpectatorGraphManager::Schema_DynamicBinding  (line 115, @0x0000000002728490, libserver.so)
// globals: CDOTASpectatorGraphManager::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTASpectatorGraphManager::Schema_DynamicBinding(
        const CDOTASpectatorGraphManager *const this)
{
  return CDOTASpectatorGraphManager::s_pSchemaBinding;
}


// CDOTASpectatorGraphManagerProxy::Schema_DynamicBinding  (line 223, @0x00000000027284a0, libserver.so)
// globals: CDOTASpectatorGraphManagerProxy::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTASpectatorGraphManagerProxy::Schema_DynamicBinding(
        const CDOTASpectatorGraphManagerProxy *const this)
{
  return CDOTASpectatorGraphManagerProxy::s_pSchemaBinding;
}


// CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 223, @0x00000000027284b0, libserver.so)
// globals: CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass *const this)
{
  return CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::DestructInstance  (line 223, @0x00000000027284c0, libserver.so)  // inlines: Destruct<CDOTASpectatorGraphManagerProxy>
void __fastcall CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::DestructInstance(
        CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::FreeInstance  (line 223, @0x00000000027284e0, libserver.so)
void __fastcall CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::FreeInstance(
        CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::CanAllocate  (line 223, @0x0000000002728500, libserver.so)
bool __fastcall CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::CanAllocate(
        const CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 223, @0x0000000002728510, libserver.so)
// globals: CDOTASpectatorGraphManagerProxy::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass *const this)
{
  return CDOTASpectatorGraphManagerProxy::s_pSchemaBinding;
}


// CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::AllocateInstance  (line 223, @0x00000000027368c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::AllocateInstance(
        CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 223, @0x000000000274d230, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 223, @0x000000000274d250, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTASpectatorGraphManagerProxy::GetEntityClassInternal  (line 223, @0x000000000279e1e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_07.cpp
// strings: "dota_spectator_graph_manager", "CDOTASpectatorGraphManagerProxy"
// globals: `guard variable for'CDOTASpectatorGraphManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTASpectatorGraphManagerProxyClass, CDOTASpectatorGraphManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTASpectatorGraphManagerProxyClass, __dso_handle, CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTASpectatorGraphManagerProxy::GetEntityClassInfo(void)::g_EntityCDOTASpectatorGraphManagerProxyClassInfo, CDOTASpectatorGraphManagerProxy::GetEntityClassInfo(void)::g_EntityCDOTASpectatorGraphManagerProxyClassInfo
CEntityClass *__cdecl CDOTASpectatorGraphManagerProxy::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTASpectatorGraphManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTASpectatorGraphManagerProxyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTASpectatorGraphManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTASpectatorGraphManagerProxyClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTASpectatorGraphManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTASpectatorGraphManagerProxyClass);
    CDOTASpectatorGraphManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTASpectatorGraphManagerProxyClass._vptr_CEntityClass = off_42A9030;
    __cxa_guard_release(&`guard variable for'CDOTASpectatorGraphManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTASpectatorGraphManagerProxyClass);
    __cxa_atexit(
      CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTASpectatorGraphManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTASpectatorGraphManagerProxyClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTASpectatorGraphManagerProxyClass != 0 )
    return &CDOTASpectatorGraphManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTASpectatorGraphManagerProxyClass;
  if ( `guard variable for'CDOTASpectatorGraphManagerProxy::GetEntityClassInfo(void)::g_EntityCDOTASpectatorGraphManagerProxyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTASpectatorGraphManagerProxy::GetEntityClassInfo(void)::g_EntityCDOTASpectatorGraphManagerProxyClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTASpectatorGraphManagerProxy::GetEntityClassInfo(void)::g_EntityCDOTASpectatorGraphManagerProxyClassInfo,
      "CDOTASpectatorGraphManagerProxy",
      "dota_spectator_graph_manager",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTASpectatorGraphManagerProxy::GetEntityClassInfo(void)::g_EntityCDOTASpectatorGraphManagerProxyClassInfo);
  }
  CDOTASpectatorGraphManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTASpectatorGraphManagerProxyClass.m_pClassInfo = &CDOTASpectatorGraphManagerProxy::GetEntityClassInfo(void)::g_EntityCDOTASpectatorGraphManagerProxyClassInfo;
  CDOTASpectatorGraphManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTASpectatorGraphManagerProxyClass.m_pBaseClassInfo = CDOTASpectatorGraphManagerProxy::GetEntityClassInfo(void)::g_EntityCDOTASpectatorGraphManagerProxyClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTASpectatorGraphManagerProxyClass = &CDOTASpectatorGraphManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTASpectatorGraphManagerProxyClass;
  CDOTASpectatorGraphManagerProxy::GetEntityClassInfo(void)::g_EntityCDOTASpectatorGraphManagerProxyClassInfo.m_pClass = &CDOTASpectatorGraphManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTASpectatorGraphManagerProxyClass;
  CDOTASpectatorGraphManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTASpectatorGraphManagerProxyClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTASpectatorGraphManagerProxyClass->m_pComponentOverrides = 0;
  return &CDOTASpectatorGraphManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTASpectatorGraphManagerProxyClass;
}


// CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::ConstructInstance  (line 223, @0x000000000279e330, libserver.so)  // inlines: Construct<CDOTASpectatorGraphManagerProxy>
// calls: CDOTASpectatorGraphManagerProxy::CDOTASpectatorGraphManagerProxy
CEntityInstance *__fastcall CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass::ConstructInstance(
        CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTASpectatorGraphManagerProxy::CDOTASpectatorGraphManagerProxy(p);
  return p;
}


// CDOTASpectatorGraphManagerProxy::UpdateTransmitState  (line 232, @0x0000000002736cb0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CDOTASpectatorGraphManagerProxy::UpdateTransmitState(CDOTASpectatorGraphManagerProxy *const this)
{
  return CBaseEntity::SetTransmitState(this, 0);
}


