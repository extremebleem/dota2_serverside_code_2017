
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLogicBranch::~CLogicBranch  (line 17, @0x00000000022aa690, libserver.so)  // inlines: Purge, RemoveAll, ~CLogicalEntity, ~CServerOnlyEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CLogicBranch::~CLogicBranch(CLogicBranch *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Listeners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4062290;
  this->m_Listeners.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_Listeners.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Listeners.m_Memory);
    if ( (this->m_Listeners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CLogicBranch::~CLogicBranch  (line 17, @0x00000000022aa850, libserver.so)  // inlines: Purge, RemoveAll, ~CLogicBranch, ~CLogicalEntity, ~CServerOnlyEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CLogicBranch::~CLogicBranch(CLogicBranch *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Listeners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4062290;
  this->m_Listeners.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_Listeners.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Listeners.m_Memory);
    if ( (this->m_Listeners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLogicBranch::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 19, @0x0000000001feab10, libserver.so)
// globals: CLogicBranch::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicBranch::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLogicBranch::CEntityInstanceEntityClass *const this)
{
  return CLogicBranch::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLogicBranch::CEntityInstanceEntityClass::DestructInstance  (line 19, @0x0000000001feab20, libserver.so)  // inlines: Destruct<CLogicBranch>
void __fastcall CLogicBranch::CEntityInstanceEntityClass::DestructInstance(
        CLogicBranch::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLogicBranch::CEntityInstanceEntityClass::FreeInstance  (line 19, @0x0000000001feab40, libserver.so)
void __fastcall CLogicBranch::CEntityInstanceEntityClass::FreeInstance(
        CLogicBranch::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLogicBranch::CEntityInstanceEntityClass::CanAllocate  (line 19, @0x0000000001feab60, libserver.so)
bool __fastcall CLogicBranch::CEntityInstanceEntityClass::CanAllocate(
        const CLogicBranch::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLogicBranch::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 19, @0x0000000001feab70, libserver.so)
// globals: CLogicBranch::s_pSchemaBinding
const ISchemaBinding *__fastcall CLogicBranch::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLogicBranch::CEntityInstanceEntityClass *const this)
{
  return CLogicBranch::s_pSchemaBinding;
}


// CLogicBranch::CEntityInstanceEntityClass::AllocateInstance  (line 19, @0x0000000001febe60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLogicBranch::CEntityInstanceEntityClass::AllocateInstance(
        CLogicBranch::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 856);
  memset(v1, 0, 0x358u);
  return v1;
}


// CLogicBranch::CEntityInstanceEntityClass::ConstructInstance  (line 19, @0x0000000001fec600, libserver.so)  // inlines: CEntityIOOutput, CLogicBranch, CLogicalEntity, CServerOnlyEntity, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CLogicBranch>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLogicBranch::CEntityInstanceEntityClass::ConstructInstance(
        CLogicBranch::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 196) = 0;
    *(p + 99) = 0;
    *(p + 200) = 0;
    *(p + 201) = 0;
    *p = &off_4062290;
    *(p + 101) = off_3F7C190;
    *(p + 104) = off_3F7C190;
  }
  return p;
}


// CLogicBranch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x0000000001fecc20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLogicBranch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicBranch::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CLogicBranch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x0000000001fecc40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLogicBranch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicBranch::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLogicBranch::GetEntityClassInternal  (line 19, @0x0000000001ff5360, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "logic_branch", "CLogicBranch"
// globals: `guard variable for'CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass, CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CLogicBranch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLogicBranch::GetEntityClassInfo(void)::g_EntityCLogicBranchClassInfo, CLogicBranch::GetEntityClassInfo(void)::g_EntityCLogicBranchClassInfo
CEntityClass *__cdecl CLogicBranch::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass) != 0 )
  {
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_designerName.u.m_Id = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass._vptr_CEntityClass = off_3F79390;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_ComponentOffsets.m_Size = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_AllHelpers.m_Size = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_instanceUnserializer.m_atomicFields,
      4);
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_classInputs.m_Size = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_classInputs.m_Memory.m_pMemory = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_classOutputs.m_Size = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_requiredEHandle.m_Index = -1;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_hNetworkSerializer = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_pBaseClassInfo = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_pClassInfo = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_flags = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_nAllHelpersFlags = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_pScriptClassDesc = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_pInputs = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_nInputCount = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_pOutputs = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_nOutputCount = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_pGameClass = 0;
    CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass._vptr_CEntityClass = off_3FDC650;
    __cxa_guard_release(&`guard variable for'CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass);
    __cxa_atexit(
      CLogicBranch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass,
      &_dso_handle);
  }
  if ( g_pEntityCLogicBranchClass != 0 )
    return &CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass;
  if ( `guard variable for'CLogicBranch::GetEntityClassInfo(void)::g_EntityCLogicBranchClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicBranch::GetEntityClassInfo(void)::g_EntityCLogicBranchClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicBranch::GetEntityClassInfo(void)::g_EntityCLogicBranchClassInfo,
      "CLogicBranch",
      "logic_branch",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicBranch::GetEntityClassInfo(void)::g_EntityCLogicBranchClassInfo);
  }
  CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_pClassInfo = &CLogicBranch::GetEntityClassInfo(void)::g_EntityCLogicBranchClassInfo;
  CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_pBaseClassInfo = CLogicBranch::GetEntityClassInfo(void)::g_EntityCLogicBranchClassInfo.m_pBaseClassInfo;
  g_pEntityCLogicBranchClass = &CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass;
  CLogicBranch::GetEntityClassInfo(void)::g_EntityCLogicBranchClassInfo.m_pClass = &CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass;
  CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLogicBranchClass->m_pComponentOverrides = 0;
  return &CLogicBranch::GetEntityClassInternal(void)::g_EntityCLogicBranchClass;
}


// CLogicBranch::GetEntityClass  (line 19, @0x00000000022a58a0, libserver.so)
CEntityClass *__cdecl CLogicBranch::GetEntityClass()
{
  return g_pEntityCLogicBranchClass;
}


// CLogicBranch::Schema_DynamicBinding  (line 19, @0x00000000022a9f40, libserver.so)
// calls: CLogicBranch::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CLogicBranch::Schema_DynamicBinding(const CLogicBranch *const this)
{
  CLogicBranch::Schema_VerifyBindingIsRegistered();
  return CLogicBranch::s_pSchemaBinding;
}


