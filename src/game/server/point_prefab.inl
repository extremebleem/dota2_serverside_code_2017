
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointPrefab::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 21, @0x0000000002002980, libserver.so)
// globals: CPointPrefab::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointPrefab::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointPrefab::CEntityInstanceEntityClass *const this)
{
  return CPointPrefab::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointPrefab::CEntityInstanceEntityClass::DestructInstance  (line 21, @0x0000000002002990, libserver.so)  // inlines: Destruct<CPointPrefab>
void __fastcall CPointPrefab::CEntityInstanceEntityClass::DestructInstance(
        CPointPrefab::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointPrefab::CEntityInstanceEntityClass::FreeInstance  (line 21, @0x00000000020029b0, libserver.so)
void __fastcall CPointPrefab::CEntityInstanceEntityClass::FreeInstance(
        CPointPrefab::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointPrefab::CEntityInstanceEntityClass::CanAllocate  (line 21, @0x00000000020029d0, libserver.so)
bool __fastcall CPointPrefab::CEntityInstanceEntityClass::CanAllocate(
        const CPointPrefab::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointPrefab::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 21, @0x00000000020029e0, libserver.so)
// globals: CPointPrefab::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointPrefab::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointPrefab::CEntityInstanceEntityClass *const this)
{
  return CPointPrefab::s_pSchemaBinding;
}


// CPointPrefab::CEntityInstanceEntityClass::AllocateInstance  (line 21, @0x0000000002004d30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointPrefab::CEntityInstanceEntityClass::AllocateInstance(
        CPointPrefab::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 792);
  memset(v1, 0, 0x318u);
  return v1;
}


// CPointPrefab::CEntityInstanceEntityClass::ConstructInstance  (line 21, @0x0000000002005200, libserver.so)  // inlines: Construct<CPointPrefab>
// calls: CPointPrefab::CPointPrefab
CEntityInstance *__fastcall CPointPrefab::CEntityInstanceEntityClass::ConstructInstance(
        CPointPrefab::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPointPrefab::CPointPrefab(p);
  return p;
}


// CPointPrefab::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 21, @0x0000000002006dc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointPrefab::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointPrefab::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPointPrefab::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 21, @0x0000000002006de0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointPrefab::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointPrefab::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointPrefab::GetEntityClassInternal  (line 21, @0x000000000200faf0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CServerOnlyEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp
// strings: "point_prefab", "CPointPrefab", "CServerOnlyPointEntity"
// globals: `guard variable for'CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass, CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointPrefab::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointPrefab::GetEntityClassInfo(void)::g_EntityCPointPrefabClassInfo, CPointPrefab::GetEntityClassInfo(void)::g_EntityCPointPrefabClassInfo, `guard variable for'CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo (9 total)
CEntityClass *__cdecl CPointPrefab::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass) != 0 )
  {
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_designerName.u.m_Id = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass._vptr_CEntityClass = off_3F79390;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_ComponentOffsets.m_Size = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_AllHelpers.m_Size = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_classInputs.m_Size = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_classOutputs.m_Size = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_requiredEHandle.m_Index = -1;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_hNetworkSerializer = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_pBaseClassInfo = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_pClassInfo = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_flags = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_nAllHelpersFlags = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_pScriptClassDesc = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_pInputs = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_nInputCount = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_pOutputs = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_nOutputCount = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_pGameClass = 0;
    CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass._vptr_CEntityClass = off_3FDFD90;
    __cxa_guard_release(&`guard variable for'CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass);
    __cxa_atexit(
      CPointPrefab::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointPrefabClass != 0 )
    return &CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass;
  if ( `guard variable for'CPointPrefab::GetEntityClassInfo(void)::g_EntityCPointPrefabClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointPrefab::GetEntityClassInfo(void)::g_EntityCPointPrefabClassInfo) != 0 )
  {
    if ( `guard variable for'CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo) != 0 )
    {
      EntityClassInfo = CServerOnlyEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo,
        "CServerOnlyPointEntity",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointPrefab::GetEntityClassInfo(void)::g_EntityCPointPrefabClassInfo,
      "CPointPrefab",
      "point_prefab",
      0,
      &CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointPrefab::GetEntityClassInfo(void)::g_EntityCPointPrefabClassInfo);
  }
  CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_pClassInfo = &CPointPrefab::GetEntityClassInfo(void)::g_EntityCPointPrefabClassInfo;
  CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_pBaseClassInfo = CPointPrefab::GetEntityClassInfo(void)::g_EntityCPointPrefabClassInfo.m_pBaseClassInfo;
  g_pEntityCPointPrefabClass = &CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass;
  CPointPrefab::GetEntityClassInfo(void)::g_EntityCPointPrefabClassInfo.m_pClass = &CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass;
  CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPointPrefabClass->m_pComponentOverrides = 0;
  return &CPointPrefab::GetEntityClassInternal(void)::g_EntityCPointPrefabClass;
}


// CPointPrefab::GetEntityClass  (line 21, @0x0000000002339e20, libserver.so)
CEntityClass *__cdecl CPointPrefab::GetEntityClass()
{
  return g_pEntityCPointPrefabClass;
}


// CPointPrefab::Schema_DynamicBinding  (line 21, @0x000000000233baa0, libserver.so)
// calls: CPointPrefab::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPointPrefab::Schema_DynamicBinding(const CPointPrefab *const this)
{
  CPointPrefab::Schema_VerifyBindingIsRegistered();
  return CPointPrefab::s_pSchemaBinding;
}


