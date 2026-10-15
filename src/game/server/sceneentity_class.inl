
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSceneListManager::~CSceneListManager  (line 31, @0x00000000023ac4f0, libserver.so)  // inlines: Purge, RemoveAll, ~CLogicalEntity, ~CServerOnlyEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CUtlMemory<CHandle<CSceneListManager>, int>::Purge
void __fastcall CSceneListManager::~CSceneListManager(CSceneListManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_hListManagers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40A7E90;
  this->m_hListManagers.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hListManagers.m_Memory;
    CUtlMemory<CHandle<CSceneListManager>,int>::Purge(&this->m_hListManagers.m_Memory);
    if ( (this->m_hListManagers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CSceneListManager>,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CSceneListManager::~CSceneListManager  (line 31, @0x00000000023ac560, libserver.so)  // inlines: Purge, RemoveAll, ~CLogicalEntity, ~CSceneListManager, ~CServerOnlyEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CSceneListManager>, int>::Purge
void __fastcall CSceneListManager::~CSceneListManager(CSceneListManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_hListManagers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40A7E90;
  this->m_hListManagers.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hListManagers.m_Memory;
    CUtlMemory<CHandle<CSceneListManager>,int>::Purge(&this->m_hListManagers.m_Memory);
    if ( (this->m_hListManagers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CSceneListManager>,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CSceneListManager::GetEntityClass  (line 33, @0x00000000023a8c20, libserver.so)
CEntityClass *__cdecl CSceneListManager::GetEntityClass()
{
  return g_pEntityCSceneListManagerClass;
}


// CSceneListManager::Schema_DynamicBinding  (line 33, @0x00000000023a8c30, libserver.so)
// globals: CSceneListManager::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSceneListManager::Schema_DynamicBinding(const CSceneListManager *const this)
{
  return CSceneListManager::s_pSchemaBinding;
}


// CSceneListManager::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 33, @0x00000000023a8c40, libserver.so)
// globals: CSceneListManager::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSceneListManager::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CSceneListManager::CEntityInstanceEntityClass *const this)
{
  return CSceneListManager::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CSceneListManager::CEntityInstanceEntityClass::DestructInstance  (line 33, @0x00000000023a8c50, libserver.so)  // inlines: Destruct<CSceneListManager>
void __fastcall CSceneListManager::CEntityInstanceEntityClass::DestructInstance(
        CSceneListManager::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CSceneListManager::CEntityInstanceEntityClass::FreeInstance  (line 33, @0x00000000023a8c70, libserver.so)
void __fastcall CSceneListManager::CEntityInstanceEntityClass::FreeInstance(
        CSceneListManager::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CSceneListManager::CEntityInstanceEntityClass::CanAllocate  (line 33, @0x00000000023a8c90, libserver.so)
bool __fastcall CSceneListManager::CEntityInstanceEntityClass::CanAllocate(
        const CSceneListManager::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CSceneListManager::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 33, @0x00000000023a8ca0, libserver.so)
// globals: CSceneListManager::s_pSchemaBinding
const ISchemaBinding *__fastcall CSceneListManager::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CSceneListManager::CEntityInstanceEntityClass *const this)
{
  return CSceneListManager::s_pSchemaBinding;
}


// CSceneListManager::CEntityInstanceEntityClass::AllocateInstance  (line 33, @0x00000000023aa7b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CSceneListManager::CEntityInstanceEntityClass::AllocateInstance(
        CSceneListManager::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 992);
  memset(v1, 0, 0x3E0u);
  return v1;
}


// CSceneListManager::CEntityInstanceEntityClass::ConstructInstance  (line 33, @0x00000000023ac090, libserver.so)  // inlines: CEntityHandle, CHandle, CLogicalEntity, CSceneListManager, CServerOnlyEntity, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Construct<CSceneListManager>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CSceneListManager::CEntityInstanceEntityClass::ConstructInstance(
        CSceneListManager::CEntityInstanceEntityClass *const this,
        void *p)
{
  _QWORD *v3; // rdx

  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = 0;
    *p = &off_40A7E90;
    v3 = p + 800;
    *(p + 98) = 0;
    *(p + 198) = 0;
    *(p + 199) = 0;
    do
      *v3++ = 0;
    while ( v3 != (p + 928) );
    do
    {
      *v3 = -1;
      v3 = (v3 + 4);
    }
    while ( v3 != (p + 992) );
  }
  return p;
}


// CSceneListManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x00000000023ac980, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CSceneListManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSceneListManager::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CSceneListManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x00000000023ac9a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CSceneListManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSceneListManager::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CSceneListManager::GetEntityClassInternal  (line 33, @0x00000000023b3810, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "logic_scene_list_manager", "CSceneListManager", "CLogicalEntity", "CServerOnlyEntity"
// globals: `guard variable for'CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass, CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CSceneListManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CSceneListManager::GetEntityClassInfo(void)::g_EntityCSceneListManagerClassInfo, CSceneListManager::GetEntityClassInfo(void)::g_EntityCSceneListManagerClassInfo, `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo (11 total)
CEntityClass *__cdecl CSceneListManager::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass) != 0 )
  {
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_designerName.u.m_Id = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass._vptr_CEntityClass = off_3F79390;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_ComponentOffsets.m_Size = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_AllHelpers.m_Size = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_classInputs.m_Size = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_classOutputs.m_Size = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_requiredEHandle.m_Index = -1;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_hNetworkSerializer = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_pBaseClassInfo = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_pClassInfo = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_flags = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_nAllHelpersFlags = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_pScriptClassDesc = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_pInputs = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_nInputCount = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_pOutputs = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_nOutputCount = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_pGameClass = 0;
    CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass._vptr_CEntityClass = off_40A6110;
    __cxa_guard_release(&`guard variable for'CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass);
    __cxa_atexit(
      CSceneListManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass,
      &_dso_handle);
  }
  if ( g_pEntityCSceneListManagerClass != 0 )
    return &CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass;
  if ( `guard variable for'CSceneListManager::GetEntityClassInfo(void)::g_EntityCSceneListManagerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CSceneListManager::GetEntityClassInfo(void)::g_EntityCSceneListManagerClassInfo) != 0 )
  {
    if ( `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo) != 0 )
      {
        EntityClassInfo = CBaseEntity::GetEntityClassInfo();
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo,
          "CServerOnlyEntity",
          0,
          0,
          EntityClassInfo);
        __cxa_guard_release(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo,
        "CLogicalEntity",
        0,
        0,
        &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CSceneListManager::GetEntityClassInfo(void)::g_EntityCSceneListManagerClassInfo,
      "CSceneListManager",
      "logic_scene_list_manager",
      0,
      &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CSceneListManager::GetEntityClassInfo(void)::g_EntityCSceneListManagerClassInfo);
  }
  CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_pClassInfo = &CSceneListManager::GetEntityClassInfo(void)::g_EntityCSceneListManagerClassInfo;
  CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_pBaseClassInfo = CSceneListManager::GetEntityClassInfo(void)::g_EntityCSceneListManagerClassInfo.m_pBaseClassInfo;
  g_pEntityCSceneListManagerClass = &CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass;
  CSceneListManager::GetEntityClassInfo(void)::g_EntityCSceneListManagerClassInfo.m_pClass = &CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass;
  CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCSceneListManagerClass->m_pComponentOverrides = 0;
  return &CSceneListManager::GetEntityClassInternal(void)::g_EntityCSceneListManagerClass;
}


// CSceneManager::~CSceneManager  (line 56, @0x00000000023aff90, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CSceneManager::CRestoreSceneSound, CUtlMemory<CSceneManager::CRestoreSceneSound, int> >::RemoveAll, CUtlVectorBase<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >::RemoveAll, IGameSystem::~IGameSystem, CUtlMemory<CSceneManager::CRestoreSceneSound, int>::Purge, CUtlMemory<CHandle<CSceneEntity>, int>::Purge
void __fastcall CSceneManager::~CSceneManager(CSceneManager *const this)
{
  this->_vptr_IGameSystem = off_40A7D30;
  CUtlVectorBase<CSceneManager::CRestoreSceneSound,CUtlMemory<CSceneManager::CRestoreSceneSound,int>>::RemoveAll(&this->m_QueuedSceneSounds);
  if ( (this->m_QueuedSceneSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CSceneManager::CRestoreSceneSound,int>::Purge(&this->m_QueuedSceneSounds.m_Memory);
    if ( (this->m_QueuedSceneSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSceneManager::CRestoreSceneSound,int>::Purge(&this->m_QueuedSceneSounds.m_Memory);
  }
  CUtlVectorBase<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>::RemoveAll(&this->m_ActiveScenes);
  if ( (this->m_ActiveScenes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CSceneEntity>,int>::Purge(&this->m_ActiveScenes.m_Memory);
    if ( (this->m_ActiveScenes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CSceneEntity>,int>::Purge(&this->m_ActiveScenes.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CSceneManager::~CSceneManager  (line 56, @0x00000000023b0020, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CSceneManager, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CSceneManager::CRestoreSceneSound, CUtlMemory<CSceneManager::CRestoreSceneSound, int> >::RemoveAll, CUtlVectorBase<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >::RemoveAll, IGameSystem::~IGameSystem, operator delete, CUtlMemory<CSceneManager::CRestoreSceneSound, int>::Purge, CUtlMemory<CHandle<CSceneEntity>, int>::Purge
void __fastcall CSceneManager::~CSceneManager(CSceneManager *const this)
{
  this->_vptr_IGameSystem = off_40A7D30;
  CUtlVectorBase<CSceneManager::CRestoreSceneSound,CUtlMemory<CSceneManager::CRestoreSceneSound,int>>::RemoveAll(&this->m_QueuedSceneSounds);
  if ( (this->m_QueuedSceneSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CSceneManager::CRestoreSceneSound,int>::Purge(&this->m_QueuedSceneSounds.m_Memory);
    if ( (this->m_QueuedSceneSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSceneManager::CRestoreSceneSound,int>::Purge(&this->m_QueuedSceneSounds.m_Memory);
  }
  CUtlVectorBase<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>::RemoveAll(&this->m_ActiveScenes);
  if ( (this->m_ActiveScenes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CSceneEntity>,int>::Purge(&this->m_ActiveScenes.m_Memory);
    if ( (this->m_ActiveScenes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CSceneEntity>,int>::Purge(&this->m_ActiveScenes.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CSceneManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 58, @0x00000000023a8cb0, libserver.so)
void __fastcall CSceneManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CSceneManager *const this)
{
  ;
}


// CSceneManager::DoesGameSystemReallocate  (line 58, @0x00000000023a8cc0, libserver.so)
// globals: CSceneManager::sm_Factory
bool __fastcall CSceneManager::DoesGameSystemReallocate(const CSceneManager *const this)
{
  return (*(CSceneManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CSceneManager::sm_Factory);
}


// CSceneManager::SetGameSystemGlobalPtrs  (line 58, @0x00000000023a8ce0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CSceneManager::sm_Factory
void __fastcall CSceneManager::SetGameSystemGlobalPtrs(CSceneManager *const this, void *pValue)
{
  if ( CSceneManager::sm_Factory != 0 )
    (*(CSceneManager::sm_Factory->_vptr_IGameSystemFactory + 7))(CSceneManager::sm_Factory, pValue);
}


// CSceneEntity::GetEntityClass  (line 116, @0x00000000023a8d10, libserver.so)
CEntityClass *__cdecl CSceneEntity::GetEntityClass()
{
  return g_pEntityCSceneEntityClass;
}


// CSceneEntity::Schema_DynamicBinding  (line 116, @0x00000000023a8d20, libserver.so)
// globals: CSceneEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSceneEntity::Schema_DynamicBinding(const CSceneEntity *const this)
{
  return CSceneEntity::s_pSchemaBinding;
}


// CSceneEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 116, @0x00000000023a8d30, libserver.so)
// globals: CSceneEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSceneEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CSceneEntity::CEntityInstanceEntityClass *const this)
{
  return CSceneEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CSceneEntity::CEntityInstanceEntityClass::DestructInstance  (line 116, @0x00000000023a8d40, libserver.so)  // inlines: Destruct<CSceneEntity>
void __fastcall CSceneEntity::CEntityInstanceEntityClass::DestructInstance(
        CSceneEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CSceneEntity::CEntityInstanceEntityClass::FreeInstance  (line 116, @0x00000000023a8d60, libserver.so)
void __fastcall CSceneEntity::CEntityInstanceEntityClass::FreeInstance(
        CSceneEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CSceneEntity::CEntityInstanceEntityClass::CanAllocate  (line 116, @0x00000000023a8d80, libserver.so)
bool __fastcall CSceneEntity::CEntityInstanceEntityClass::CanAllocate(
        const CSceneEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CSceneEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 116, @0x00000000023a8d90, libserver.so)
// globals: CSceneEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CSceneEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CSceneEntity::CEntityInstanceEntityClass *const this)
{
  return CSceneEntity::s_pSchemaBinding;
}


// CSceneEntity::CEntityInstanceEntityClass::AllocateInstance  (line 116, @0x00000000023aa7f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CSceneEntity::CEntityInstanceEntityClass::AllocateInstance(
        CSceneEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1592);
  memset(v1, 0, 0x638u);
  return v1;
}


// CSceneEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 116, @0x00000000023ac9d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CSceneEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSceneEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CSceneEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 116, @0x00000000023ac9f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CSceneEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSceneEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CSceneEntity::GetEntityClassInfo  (line 116, @0x00000000023ae030, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal, CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::InitOptionalTables
// strings: "CSceneEntity", "CPointEntity"
// globals: `guard variable for'CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo, CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo, `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo, CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo
CEntityClassInfo *__cdecl CSceneEntity::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo != 0 )
    return &CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo) == 0 )
    return &CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo;
  if ( `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo,
      "CPointEntity",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo,
    "CSceneEntity",
    "scripted_scene",
    0,
    &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo);
  return &CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo;
}


// CSceneEntity::CEntityInstanceEntityClass::ConstructInstance  (line 116, @0x00000000023afb80, libserver.so)  // inlines: Construct<CSceneEntity>
// calls: CSceneEntity::CSceneEntity
CEntityInstance *__fastcall CSceneEntity::CEntityInstanceEntityClass::ConstructInstance(
        CSceneEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CSceneEntity::CSceneEntity(p);
  return p;
}


// CSceneEntity::GetEntityClassInternal  (line 116, @0x00000000023b4ad0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CSceneEntity>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CSceneEntity", "CPointEntity"
// globals: `guard variable for'CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass, CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CSceneEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo, CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo, `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo (9 total)
CEntityClass *__cdecl CSceneEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass) != 0 )
  {
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_designerName.u.m_Id = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass._vptr_CEntityClass = off_3F79390;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_ComponentOffsets.m_Size = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_AllHelpers.m_Size = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_classInputs.m_Size = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_classOutputs.m_Size = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_requiredEHandle.m_Index = -1;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_hNetworkSerializer = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_pBaseClassInfo = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_pClassInfo = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_flags = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_nAllHelpersFlags = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_pScriptClassDesc = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_pInputs = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_nInputCount = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_pOutputs = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_nOutputCount = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_pGameClass = 0;
    CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass._vptr_CEntityClass = off_40A6190;
    __cxa_guard_release(&`guard variable for'CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass);
    __cxa_atexit(
      CSceneEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCSceneEntityClass != 0 )
    return &CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass;
  if ( `guard variable for'CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo) != 0 )
  {
    if ( `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo,
        "CPointEntity",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo,
      "CSceneEntity",
      "scripted_scene",
      0,
      &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo);
  }
  CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_pClassInfo = &CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo;
  CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_pBaseClassInfo = CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCSceneEntityClass = &CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass;
  CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo.m_pClass = &CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass;
  CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass.m_pScriptClassDesc = GetScriptDesc<CSceneEntity>(0);
  g_pEntityCSceneEntityClass->m_pComponentOverrides = 0;
  return &CSceneEntity::GetEntityClassInternal(void)::g_EntityCSceneEntityClass;
}


// CSceneEntity::IsPlayingBack  (line 171, @0x00000000023a8da0, libserver.so)
bool __fastcall CSceneEntity::IsPlayingBack(const CSceneEntity *const this)
{
  return this->m_bIsPlayingBack.m_Value;
}


// CSceneEntity::IsPaused  (line 172, @0x00000000023a8db0, libserver.so)
bool __fastcall CSceneEntity::IsPaused(const CSceneEntity *const this)
{
  return this->m_bPaused.m_Value;
}


// CSceneEntity::GetPostSpeakDelay  (line 277, @0x00000000023a8dc0, libserver.so)
float __fastcall CSceneEntity::GetPostSpeakDelay(CSceneEntity *const this)
{
  return 1.0;
}


// CSceneEntity::Think  (line 367, @0x00000000023a8dd0, libserver.so)
void __fastcall CSceneEntity::Think(CSceneEntity *const this)
{
  ;
}


