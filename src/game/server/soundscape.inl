
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvSoundscape::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002002b40, libserver.so)
// globals: CEnvSoundscape::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvSoundscape::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvSoundscape::CEntityInstanceEntityClass *const this)
{
  return CEnvSoundscape::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvSoundscape::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002002b50, libserver.so)  // inlines: Destruct<CEnvSoundscape>
void __fastcall CEnvSoundscape::CEntityInstanceEntityClass::DestructInstance(
        CEnvSoundscape::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvSoundscape::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002002b70, libserver.so)
void __fastcall CEnvSoundscape::CEntityInstanceEntityClass::FreeInstance(
        CEnvSoundscape::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvSoundscape::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002002b90, libserver.so)
bool __fastcall CEnvSoundscape::CEntityInstanceEntityClass::CanAllocate(
        const CEnvSoundscape::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvSoundscape::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002002ba0, libserver.so)
// globals: CEnvSoundscape::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvSoundscape::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvSoundscape::CEntityInstanceEntityClass *const this)
{
  return CEnvSoundscape::s_pSchemaBinding;
}


// CEnvSoundscape::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002004e30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvSoundscape::CEntityInstanceEntityClass::AllocateInstance(
        CEnvSoundscape::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 896);
  memset(v1, 0, 0x380u);
  return v1;
}


// CEnvSoundscape::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x00000000020052c0, libserver.so)  // inlines: Construct<CEnvSoundscape>
// calls: CEnvSoundscape::CEnvSoundscape
CEntityInstance *__fastcall CEnvSoundscape::CEntityInstanceEntityClass::ConstructInstance(
        CEnvSoundscape::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CEnvSoundscape::CEnvSoundscape(p);
  return p;
}


// CEnvSoundscape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002006e60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvSoundscape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvSoundscape::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvSoundscape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002006e80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvSoundscape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvSoundscape::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvSoundscape::GetEntityClassInfo  (line 29, @0x000000000200b590, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CEnvSoundscapeProxy::GetEntityClassInternal, CEnvSoundscapeTriggerable::GetEntityClassInternal
// strings: "env_soundscape", "CEnvSoundscape", "CServerOnlyEntity", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CEnvSoundscape::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeClassInfo, CEnvSoundscape::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeClassInfo, `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo, CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CEnvSoundscape::GetEntityClassInfo()
{
  if ( `guard variable for'CEnvSoundscape::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeClassInfo != 0 )
    return &CEnvSoundscape::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CEnvSoundscape::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeClassInfo) == 0 )
    return &CEnvSoundscape::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeClassInfo;
  if ( `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
      {
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
          "CGameEntity",
          0,
          0,
          &g_EntityRootClassInfo);
        __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
        "CBaseEntity",
        0,
        0,
        &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo,
      "CServerOnlyEntity",
      0,
      0,
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CEnvSoundscape::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeClassInfo,
    "CEnvSoundscape",
    "env_soundscape",
    0,
    &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CEnvSoundscape::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeClassInfo);
  return &CEnvSoundscape::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeClassInfo;
}


// CEnvSoundscape::GetEntityClassInternal  (line 29, @0x000000000200d640, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp
// strings: "env_soundscape", "CEnvSoundscape", "CServerOnlyEntity"
// globals: `guard variable for'CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass, CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CEnvSoundscape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvSoundscape::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeClassInfo, CEnvSoundscape::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeClassInfo, `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo (9 total)
CEntityClass *__cdecl CEnvSoundscape::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass) != 0 )
  {
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_designerName.u.m_Id = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass._vptr_CEntityClass = off_3F79390;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_ComponentOffsets.m_Size = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_AllHelpers.m_Size = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_classInputs.m_Size = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_classOutputs.m_Size = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_requiredEHandle.m_Index = -1;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_hNetworkSerializer = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_pBaseClassInfo = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_pClassInfo = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_flags = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_nAllHelpersFlags = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_pScriptClassDesc = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_pInputs = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_nInputCount = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_pOutputs = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_nOutputCount = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_pGameClass = 0;
    CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass._vptr_CEntityClass = off_3FE0C70;
    __cxa_guard_release(&`guard variable for'CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass);
    __cxa_atexit(
      CEnvSoundscape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvSoundscapeClass != 0 )
    return &CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass;
  if ( `guard variable for'CEnvSoundscape::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvSoundscape::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeClassInfo) != 0 )
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
      &CEnvSoundscape::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeClassInfo,
      "CEnvSoundscape",
      "env_soundscape",
      0,
      &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvSoundscape::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeClassInfo);
  }
  CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_pClassInfo = &CEnvSoundscape::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeClassInfo;
  CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_pBaseClassInfo = CEnvSoundscape::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvSoundscapeClass = &CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass;
  CEnvSoundscape::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeClassInfo.m_pClass = &CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass;
  CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvSoundscapeClass->m_pComponentOverrides = 0;
  return &CEnvSoundscape::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeClass;
}


// CEnvSoundscape::GetEntityClass  (line 29, @0x00000000023a9550, libserver.so)
CEntityClass *__cdecl CEnvSoundscape::GetEntityClass()
{
  return g_pEntityCEnvSoundscapeClass;
}


// CEnvSoundscape::Schema_DynamicBinding  (line 29, @0x00000000023ab1e0, libserver.so)
// calls: CEnvSoundscape::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEnvSoundscape::Schema_DynamicBinding(const CEnvSoundscape *const this)
{
  CEnvSoundscape::Schema_VerifyBindingIsRegistered();
  return CEnvSoundscape::s_pSchemaBinding;
}


// CEnvSoundscapeProxy::~CEnvSoundscapeProxy  (line 77, @0x00000000023aabf0, libserver.so)  // inlines: ~CEnvSoundscape, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvSoundscapeProxy::~CEnvSoundscapeProxy(CEnvSoundscapeProxy *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvSoundscapeProxy::~CEnvSoundscapeProxy  (line 77, @0x00000000023aac10, libserver.so)  // inlines: ~CEnvSoundscape, ~CEnvSoundscapeProxy, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvSoundscapeProxy::~CEnvSoundscapeProxy(CEnvSoundscapeProxy *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvSoundscapeProxy::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 79, @0x0000000002002bb0, libserver.so)
// globals: CEnvSoundscapeProxy::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvSoundscapeProxy::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvSoundscapeProxy::CEntityInstanceEntityClass *const this)
{
  return CEnvSoundscapeProxy::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvSoundscapeProxy::CEntityInstanceEntityClass::DestructInstance  (line 79, @0x0000000002002bc0, libserver.so)  // inlines: Destruct<CEnvSoundscapeProxy>
void __fastcall CEnvSoundscapeProxy::CEntityInstanceEntityClass::DestructInstance(
        CEnvSoundscapeProxy::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvSoundscapeProxy::CEntityInstanceEntityClass::FreeInstance  (line 79, @0x0000000002002be0, libserver.so)
void __fastcall CEnvSoundscapeProxy::CEntityInstanceEntityClass::FreeInstance(
        CEnvSoundscapeProxy::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvSoundscapeProxy::CEntityInstanceEntityClass::CanAllocate  (line 79, @0x0000000002002c00, libserver.so)
bool __fastcall CEnvSoundscapeProxy::CEntityInstanceEntityClass::CanAllocate(
        const CEnvSoundscapeProxy::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvSoundscapeProxy::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 79, @0x0000000002002c10, libserver.so)
// globals: CEnvSoundscapeProxy::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvSoundscapeProxy::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvSoundscapeProxy::CEntityInstanceEntityClass *const this)
{
  return CEnvSoundscapeProxy::s_pSchemaBinding;
}


// CEnvSoundscapeProxy::CEntityInstanceEntityClass::AllocateInstance  (line 79, @0x0000000002004e70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvSoundscapeProxy::CEntityInstanceEntityClass::AllocateInstance(
        CEnvSoundscapeProxy::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 904);
  memset(v1, 0, 0x388u);
  return v1;
}


// CEnvSoundscapeProxy::CEntityInstanceEntityClass::ConstructInstance  (line 79, @0x00000000020052f0, libserver.so)  // inlines: Construct<CEnvSoundscapeProxy>
// calls: CEnvSoundscapeProxy::CEnvSoundscapeProxy
CEntityInstance *__fastcall CEnvSoundscapeProxy::CEntityInstanceEntityClass::ConstructInstance(
        CEnvSoundscapeProxy::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CEnvSoundscapeProxy::CEnvSoundscapeProxy(p);
  return p;
}


// CEnvSoundscapeProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 79, @0x0000000002006eb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvSoundscapeProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvSoundscapeProxy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvSoundscapeProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 79, @0x0000000002006ed0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvSoundscapeProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvSoundscapeProxy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvSoundscapeProxy::GetEntityClassInternal  (line 79, @0x000000000200d9d0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEnvSoundscape::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp
// strings: "env_soundscape_proxy", "CEnvSoundscapeProxy"
// globals: `guard variable for'CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass, CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CEnvSoundscapeProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvSoundscapeProxy::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeProxyClassInfo, CEnvSoundscapeProxy::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeProxyClassInfo
CEntityClass *__cdecl CEnvSoundscapeProxy::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass) != 0 )
  {
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_designerName.u.m_Id = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass._vptr_CEntityClass = off_3F79390;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_ComponentOffsets.m_Size = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_AllHelpers.m_Size = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_instanceUnserializer.m_atomicFields,
      4);
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_classInputs.m_Size = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_classInputs.m_Memory.m_pMemory = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_classOutputs.m_Size = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_requiredEHandle.m_Index = -1;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_hNetworkSerializer = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_pBaseClassInfo = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_pClassInfo = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_flags = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_nAllHelpersFlags = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_pScriptClassDesc = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_pInputs = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_nInputCount = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_pOutputs = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_nOutputCount = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_pGameClass = 0;
    CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass._vptr_CEntityClass = off_3FE0CF0;
    __cxa_guard_release(&`guard variable for'CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass);
    __cxa_atexit(
      CEnvSoundscapeProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvSoundscapeProxyClass != 0 )
    return &CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass;
  if ( `guard variable for'CEnvSoundscapeProxy::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeProxyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvSoundscapeProxy::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeProxyClassInfo) != 0 )
  {
    EntityClassInfo = CEnvSoundscape::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvSoundscapeProxy::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeProxyClassInfo,
      "CEnvSoundscapeProxy",
      "env_soundscape_proxy",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvSoundscapeProxy::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeProxyClassInfo);
  }
  CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_pClassInfo = &CEnvSoundscapeProxy::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeProxyClassInfo;
  CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_pBaseClassInfo = CEnvSoundscapeProxy::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeProxyClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvSoundscapeProxyClass = &CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass;
  CEnvSoundscapeProxy::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeProxyClassInfo.m_pClass = &CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass;
  CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvSoundscapeProxyClass->m_pComponentOverrides = 0;
  return &CEnvSoundscapeProxy::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeProxyClass;
}


// CEnvSoundscapeProxy::GetEntityClass  (line 79, @0x00000000023a9560, libserver.so)
CEntityClass *__cdecl CEnvSoundscapeProxy::GetEntityClass()
{
  return g_pEntityCEnvSoundscapeProxyClass;
}


// CEnvSoundscapeProxy::Schema_DynamicBinding  (line 79, @0x00000000023ab200, libserver.so)
// calls: CEnvSoundscapeProxy::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEnvSoundscapeProxy::Schema_DynamicBinding(
        const CEnvSoundscapeProxy *const this)
{
  CEnvSoundscapeProxy::Schema_VerifyBindingIsRegistered();
  return CEnvSoundscapeProxy::s_pSchemaBinding;
}


// CEnvSoundscapeProxy::Precache  (line 88, @0x00000000023a9570, libserver.so)
void __fastcall CEnvSoundscapeProxy::Precache(CEnvSoundscapeProxy *const this, const CEntityPrecacheContext *pContext)
{
  ;
}


// CEnvSoundscapeTriggerable::~CEnvSoundscapeTriggerable  (line 95, @0x00000000023aac40, libserver.so)  // inlines: ~CEnvSoundscape, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvSoundscapeTriggerable::~CEnvSoundscapeTriggerable(CEnvSoundscapeTriggerable *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvSoundscapeTriggerable::~CEnvSoundscapeTriggerable  (line 95, @0x00000000023aac60, libserver.so)  // inlines: ~CEnvSoundscape, ~CEnvSoundscapeTriggerable, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvSoundscapeTriggerable::~CEnvSoundscapeTriggerable(CEnvSoundscapeTriggerable *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 97, @0x0000000002002c20, libserver.so)
// globals: CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvSoundscapeTriggerable::CEntityInstanceEntityClass *const this)
{
  return CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::DestructInstance  (line 97, @0x0000000002002c30, libserver.so)  // inlines: Destruct<CEnvSoundscapeTriggerable>
void __fastcall CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::DestructInstance(
        CEnvSoundscapeTriggerable::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::FreeInstance  (line 97, @0x0000000002002c50, libserver.so)
void __fastcall CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::FreeInstance(
        CEnvSoundscapeTriggerable::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::CanAllocate  (line 97, @0x0000000002002c70, libserver.so)
bool __fastcall CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::CanAllocate(
        const CEnvSoundscapeTriggerable::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 97, @0x0000000002002c80, libserver.so)
// globals: CEnvSoundscapeTriggerable::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvSoundscapeTriggerable::CEntityInstanceEntityClass *const this)
{
  return CEnvSoundscapeTriggerable::s_pSchemaBinding;
}


// CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::AllocateInstance  (line 97, @0x0000000002004eb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::AllocateInstance(
        CEnvSoundscapeTriggerable::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 896);
  memset(v1, 0, 0x380u);
  return v1;
}


// CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::ConstructInstance  (line 97, @0x0000000002005320, libserver.so)  // inlines: Construct<CEnvSoundscapeTriggerable>
// calls: CEnvSoundscapeTriggerable::CEnvSoundscapeTriggerable
CEntityInstance *__fastcall CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::ConstructInstance(
        CEnvSoundscapeTriggerable::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CEnvSoundscapeTriggerable::CEnvSoundscapeTriggerable(p);
  return p;
}


// CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 97, @0x0000000002006f00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvSoundscapeTriggerable::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 97, @0x0000000002006f20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvSoundscapeTriggerable::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvSoundscapeTriggerable::GetEntityClassInternal  (line 97, @0x000000000200e070, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEnvSoundscape::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp
// strings: "env_soundscape_triggerable", "CEnvSoundscapeTriggerable"
// globals: `guard variable for'CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass, CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvSoundscapeTriggerable::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeTriggerableClassInfo, CEnvSoundscapeTriggerable::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeTriggerableClassInfo
CEntityClass *__cdecl CEnvSoundscapeTriggerable::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass) != 0 )
  {
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_designerName.u.m_Id = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass._vptr_CEntityClass = off_3F79390;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_ComponentOffsets.m_Size = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_AllHelpers.m_Size = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_instanceUnserializer.m_atomicFields,
      4);
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_classInputs.m_Size = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_classInputs.m_Memory.m_pMemory = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_classOutputs.m_Size = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_requiredEHandle.m_Index = -1;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_hNetworkSerializer = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_pBaseClassInfo = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_pClassInfo = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_flags = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_nAllHelpersFlags = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_pScriptClassDesc = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_pInputs = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_nInputCount = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_pOutputs = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_nOutputCount = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_pGameClass = 0;
    CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass._vptr_CEntityClass = off_3FE0D70;
    __cxa_guard_release(&`guard variable for'CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass);
    __cxa_atexit(
      CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvSoundscapeTriggerableClass != 0 )
    return &CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass;
  if ( `guard variable for'CEnvSoundscapeTriggerable::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeTriggerableClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvSoundscapeTriggerable::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeTriggerableClassInfo) != 0 )
  {
    EntityClassInfo = CEnvSoundscape::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvSoundscapeTriggerable::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeTriggerableClassInfo,
      "CEnvSoundscapeTriggerable",
      "env_soundscape_triggerable",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvSoundscapeTriggerable::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeTriggerableClassInfo);
  }
  CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_pClassInfo = &CEnvSoundscapeTriggerable::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeTriggerableClassInfo;
  CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_pBaseClassInfo = CEnvSoundscapeTriggerable::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeTriggerableClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvSoundscapeTriggerableClass = &CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass;
  CEnvSoundscapeTriggerable::GetEntityClassInfo(void)::g_EntityCEnvSoundscapeTriggerableClassInfo.m_pClass = &CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass;
  CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvSoundscapeTriggerableClass->m_pComponentOverrides = 0;
  return &CEnvSoundscapeTriggerable::GetEntityClassInternal(void)::g_EntityCEnvSoundscapeTriggerableClass;
}


// CEnvSoundscapeTriggerable::GetEntityClass  (line 97, @0x00000000023a9580, libserver.so)
CEntityClass *__cdecl CEnvSoundscapeTriggerable::GetEntityClass()
{
  return g_pEntityCEnvSoundscapeTriggerableClass;
}


// CEnvSoundscapeTriggerable::Schema_DynamicBinding  (line 97, @0x00000000023ab220, libserver.so)
// calls: CEnvSoundscapeTriggerable::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEnvSoundscapeTriggerable::Schema_DynamicBinding(
        const CEnvSoundscapeTriggerable *const this)
{
  CEnvSoundscapeTriggerable::Schema_VerifyBindingIsRegistered();
  return CEnvSoundscapeTriggerable::s_pSchemaBinding;
}


