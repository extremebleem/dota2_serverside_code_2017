
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointCamera::~CPointCamera  (line 29, @0x0000000001eec8e0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPointCamera::~CPointCamera(CPointCamera *const this)
{
  this->_vptr_IHandleEntity = &off_3FC1830;
  CBaseEntity::~CBaseEntity(this);
}


// CPointCamera::~CPointCamera  (line 29, @0x0000000001eec900, libserver.so)  // inlines: ~CPointCamera
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPointCamera::~CPointCamera(CPointCamera *const this)
{
  this->_vptr_IHandleEntity = &off_3FC1830;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointCamera::GetEntityClass  (line 31, @0x0000000001eeafc0, libserver.so)
CEntityClass *__cdecl CPointCamera::GetEntityClass()
{
  return g_pEntityCPointCameraClass;
}


// CPointCamera::Schema_DynamicBinding  (line 31, @0x0000000001eecc70, libserver.so)
// calls: CPointCamera::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPointCamera::Schema_DynamicBinding(const CPointCamera *const this)
{
  CPointCamera::Schema_VerifyBindingIsRegistered();
  return CPointCamera::s_pSchemaBinding;
}


// CPointCamera::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 31, @0x0000000001efcfe0, libserver.so)
// globals: CPointCamera::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointCamera::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointCamera::CEntityInstanceEntityClass *const this)
{
  return CPointCamera::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointCamera::CEntityInstanceEntityClass::DestructInstance  (line 31, @0x0000000001efcff0, libserver.so)  // inlines: Destruct<CPointCamera>
void __fastcall CPointCamera::CEntityInstanceEntityClass::DestructInstance(
        CPointCamera::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointCamera::CEntityInstanceEntityClass::FreeInstance  (line 31, @0x0000000001efd010, libserver.so)
void __fastcall CPointCamera::CEntityInstanceEntityClass::FreeInstance(
        CPointCamera::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointCamera::CEntityInstanceEntityClass::CanAllocate  (line 31, @0x0000000001efd030, libserver.so)
bool __fastcall CPointCamera::CEntityInstanceEntityClass::CanAllocate(
        const CPointCamera::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointCamera::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 31, @0x0000000001efd040, libserver.so)
// globals: CPointCamera::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointCamera::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointCamera::CEntityInstanceEntityClass *const this)
{
  return CPointCamera::s_pSchemaBinding;
}


// CPointCamera::CEntityInstanceEntityClass::AllocateInstance  (line 31, @0x0000000001efd220, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointCamera::CEntityInstanceEntityClass::AllocateInstance(
        CPointCamera::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 856);
  memset(v1, 0, 0x358u);
  return v1;
}


// CPointCamera::CEntityInstanceEntityClass::ConstructInstance  (line 31, @0x0000000001efd260, libserver.so)  // inlines: Construct<CPointCamera>
// calls: CPointCamera::CPointCamera
CEntityInstance *__fastcall CPointCamera::CEntityInstanceEntityClass::ConstructInstance(
        CPointCamera::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPointCamera::CPointCamera(p);
  return p;
}


// CPointCamera::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000001efd290, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointCamera::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointCamera::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPointCamera::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000001efd2b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointCamera::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointCamera::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointCamera::GetEntityClassInternal  (line 31, @0x0000000001efd410, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CInterlockedIntT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, Purge, RemoveAll, SetClassInfo, SetupEntClassComponentOverrides, ThreadInterlockedExchange, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: __cxa_guard_acquire, CUtlMemoryPoolBase::CUtlMemoryPoolBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume, CUtlMemory<CEntityClass::ComponentHelper_t, int>::Purge, CUtlMemory<CEntityClass::ComponentOffsets_t, int>::Purge
// callers: _GLOBAL__sub_I__unity_entities_02.cpp
// strings: "point_camera", "CPointCamera"
// globals: `guard variable for'CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass, CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointCamera::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointCamera::GetEntityClassInfo(void)::g_EntityCPointCameraClassInfo, CPointCamera::GetEntityClassInfo(void)::g_EntityCPointCameraClassInfo
CEntityClass *__cdecl CPointCamera::GetEntityClassInternal()
{
  CPointCamera::CEntityInstanceEntityClass *v1; // rax
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass) != 0 )
  {
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass._vptr_CEntityClass = off_3F79390;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_designerName.u.m_Id = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_ComponentOffsets.m_Size = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_AllHelpers.m_Size = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlMemoryPoolBase::CUtlMemoryPoolBase(
      &CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_instanceUnserializer.m_atomicFields.m_EntryMemory,
      48,
      4,
      8,
      MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
      0);
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value = 0;
    _InterlockedExchange(
      &CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value,
      0);
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
    v1 = &CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass;
    do
    {
      v1->m_instanceUnserializer.m_atomicFields.m_aBuckets[0].m_pFirst = 0;
      v1 = (v1 + 16);
      v1->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_Blobs.m_pPop = 0;
    }
    while ( v1 != &CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_instanceUnserializer.m_atomicFields.m_aBuckets[3] );
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_classInputs.m_Size = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_classOutputs.m_Size = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_requiredEHandle.m_Index = -1;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_hNetworkSerializer = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_pBaseClassInfo = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_pClassInfo = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_flags = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_nAllHelpersFlags = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_pScriptClassDesc = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_pInputs = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_nInputCount = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_pOutputs = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_nOutputCount = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_pGameClass = 0;
    CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass._vptr_CEntityClass = off_3FC2250;
    __cxa_guard_release(&`guard variable for'CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass);
    __cxa_atexit(
      CPointCamera::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointCameraClass != 0 )
    return &CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass;
  if ( `guard variable for'CPointCamera::GetEntityClassInfo(void)::g_EntityCPointCameraClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointCamera::GetEntityClassInfo(void)::g_EntityCPointCameraClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointCamera::GetEntityClassInfo(void)::g_EntityCPointCameraClassInfo,
      "CPointCamera",
      "point_camera",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointCamera::GetEntityClassInfo(void)::g_EntityCPointCameraClassInfo);
  }
  CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_pClassInfo = &CPointCamera::GetEntityClassInfo(void)::g_EntityCPointCameraClassInfo;
  CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_pBaseClassInfo = CPointCamera::GetEntityClassInfo(void)::g_EntityCPointCameraClassInfo.m_pBaseClassInfo;
  g_pEntityCPointCameraClass = &CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass;
  CPointCamera::GetEntityClassInfo(void)::g_EntityCPointCameraClassInfo.m_pClass = &CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass;
  CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPointCameraClass->m_pComponentOverrides = 0;
  return &CPointCamera::GetEntityClassInternal(void)::g_EntityCPointCameraClass;
}


