
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CInfoSpawnGroupLandmark::~CInfoSpawnGroupLandmark  (line 16, @0x0000000002f676e0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoSpawnGroupLandmark::~CInfoSpawnGroupLandmark(CInfoSpawnGroupLandmark *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoSpawnGroupLandmark::~CInfoSpawnGroupLandmark  (line 16, @0x0000000002f67700, libserver.so)  // inlines: ~CInfoSpawnGroupLandmark, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoSpawnGroupLandmark::~CInfoSpawnGroupLandmark(CInfoSpawnGroupLandmark *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoSpawnGroupLandmark::Schema_DynamicBinding  (line 18, @0x0000000002f67260, libserver.so)
// globals: CInfoSpawnGroupLandmark::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoSpawnGroupLandmark::Schema_DynamicBinding(
        const CInfoSpawnGroupLandmark *const this)
{
  return CInfoSpawnGroupLandmark::s_pSchemaBinding;
}


// CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 18, @0x0000000002f67270, libserver.so)
// globals: CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoSpawnGroupLandmark::CEntityInstanceEntityClass *const this)
{
  return CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::DestructInstance  (line 18, @0x0000000002f67280, libserver.so)  // inlines: Destruct<CInfoSpawnGroupLandmark>
void __fastcall CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::DestructInstance(
        CInfoSpawnGroupLandmark::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::FreeInstance  (line 18, @0x0000000002f672a0, libserver.so)
void __fastcall CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::FreeInstance(
        CInfoSpawnGroupLandmark::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::CanAllocate  (line 18, @0x0000000002f672c0, libserver.so)
bool __fastcall CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::CanAllocate(
        const CInfoSpawnGroupLandmark::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 18, @0x0000000002f672d0, libserver.so)
// globals: CInfoSpawnGroupLandmark::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoSpawnGroupLandmark::CEntityInstanceEntityClass *const this)
{
  return CInfoSpawnGroupLandmark::s_pSchemaBinding;
}


// CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::AllocateInstance  (line 18, @0x0000000002f675b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::AllocateInstance(
        CInfoSpawnGroupLandmark::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::ConstructInstance  (line 18, @0x0000000002f676b0, libserver.so)  // inlines: CInfoSpawnGroupLandmark, CPointEntity, Construct<CInfoSpawnGroupLandmark>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::ConstructInstance(
        CInfoSpawnGroupLandmark::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_47BC8B0;
  }
  return p;
}


// CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 18, @0x0000000002f67b80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoSpawnGroupLandmark::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 18, @0x0000000002f67ba0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoSpawnGroupLandmark::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoSpawnGroupLandmark::GetEntityClassInternal  (line 18, @0x0000000002f68df0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_source2_stuff_01.cpp
// strings: "info_spawngroup_landmark", "CInfoSpawnGroupLandmark", "CPointEntity"
// globals: `guard variable for'CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass, CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoSpawnGroupLandmark::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLandmarkClassInfo, CInfoSpawnGroupLandmark::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLandmarkClassInfo, `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo (9 total)
CEntityClass *__cdecl CInfoSpawnGroupLandmark::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass) != 0 )
  {
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_designerName.u.m_Id = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass._vptr_CEntityClass = off_3F79390;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_ComponentOffsets.m_Size = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_AllHelpers.m_Size = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_instanceUnserializer.m_atomicFields,
      4);
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_classInputs.m_Size = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_classInputs.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_classOutputs.m_Size = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_requiredEHandle.m_Index = -1;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_hNetworkSerializer = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_pBaseClassInfo = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_pClassInfo = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_flags = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_nAllHelpersFlags = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_pScriptClassDesc = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_pInputs = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_nInputCount = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_pOutputs = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_nOutputCount = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_pGameClass = 0;
    CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass._vptr_CEntityClass = off_47BC830;
    __cxa_guard_release(&`guard variable for'CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass);
    __cxa_atexit(
      CInfoSpawnGroupLandmark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoSpawnGroupLandmarkClass != 0 )
    return &CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass;
  if ( `guard variable for'CInfoSpawnGroupLandmark::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLandmarkClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoSpawnGroupLandmark::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLandmarkClassInfo) != 0 )
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
      &CInfoSpawnGroupLandmark::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLandmarkClassInfo,
      "CInfoSpawnGroupLandmark",
      "info_spawngroup_landmark",
      0,
      &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoSpawnGroupLandmark::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLandmarkClassInfo);
  }
  CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_pClassInfo = &CInfoSpawnGroupLandmark::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLandmarkClassInfo;
  CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_pBaseClassInfo = CInfoSpawnGroupLandmark::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLandmarkClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoSpawnGroupLandmarkClass = &CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass;
  CInfoSpawnGroupLandmark::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLandmarkClassInfo.m_pClass = &CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass;
  CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoSpawnGroupLandmarkClass->m_pComponentOverrides = 0;
  return &CInfoSpawnGroupLandmark::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLandmarkClass;
}


// CInfoSpawnGroupLoadUnload::~CInfoSpawnGroupLoadUnload  (line 60, @0x0000000002f67730, libserver.so)  // inlines: ~CEntityLumpRequest, ~CLogicalEntity, ~CServerOnlyEntity, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CBaseEntity::~CBaseEntity
void __fastcall CInfoSpawnGroupLoadUnload::~CInfoSpawnGroupLoadUnload(CInfoSpawnGroupLoadUnload *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_47BDE70;
  v2 = this->m_Request.m_sLandmarkName.m_pString == 0;
  this->m_Request._vptr_IComputeWorldOriginCallback = &off_47BDE40;
  if ( !v2 )
    CUtlString::FreeMemoryBlock(&this->m_Request.m_sLandmarkName);
  if ( this->m_Request.m_sLevelName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_Request.m_sLevelName);
  if ( this->m_sFixedSpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sFixedSpawnGroupName);
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoSpawnGroupLoadUnload::~CInfoSpawnGroupLoadUnload  (line 60, @0x0000000002f678e0, libserver.so)  // inlines: ~CEntityLumpRequest, ~CInfoSpawnGroupLoadUnload, ~CLogicalEntity, ~CServerOnlyEntity, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoSpawnGroupLoadUnload::~CInfoSpawnGroupLoadUnload(CInfoSpawnGroupLoadUnload *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_47BDE70;
  v2 = this->m_Request.m_sLandmarkName.m_pString == 0;
  this->m_Request._vptr_IComputeWorldOriginCallback = &off_47BDE40;
  if ( !v2 )
    CUtlString::FreeMemoryBlock(&this->m_Request.m_sLandmarkName);
  if ( this->m_Request.m_sLevelName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_Request.m_sLevelName);
  if ( this->m_sFixedSpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sFixedSpawnGroupName);
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoSpawnGroupLoadUnload::GetEntityClass  (line 62, @0x0000000002f672e0, libserver.so)
CEntityClass *__cdecl CInfoSpawnGroupLoadUnload::GetEntityClass()
{
  return g_pEntityCInfoSpawnGroupLoadUnloadClass;
}


// CInfoSpawnGroupLoadUnload::Schema_DynamicBinding  (line 62, @0x0000000002f672f0, libserver.so)
// globals: CInfoSpawnGroupLoadUnload::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoSpawnGroupLoadUnload::Schema_DynamicBinding(
        const CInfoSpawnGroupLoadUnload *const this)
{
  return CInfoSpawnGroupLoadUnload::s_pSchemaBinding;
}


// CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 62, @0x0000000002f67300, libserver.so)
// globals: CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass *const this)
{
  return CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::DestructInstance  (line 62, @0x0000000002f67310, libserver.so)  // inlines: Destruct<CInfoSpawnGroupLoadUnload>
void __fastcall CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::DestructInstance(
        CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::FreeInstance  (line 62, @0x0000000002f67330, libserver.so)
void __fastcall CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::FreeInstance(
        CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::CanAllocate  (line 62, @0x0000000002f67350, libserver.so)
bool __fastcall CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::CanAllocate(
        const CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 62, @0x0000000002f67360, libserver.so)
// globals: CInfoSpawnGroupLoadUnload::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass *const this)
{
  return CInfoSpawnGroupLoadUnload::s_pSchemaBinding;
}


// CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::AllocateInstance  (line 62, @0x0000000002f675f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::AllocateInstance(
        CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 968);
  memset(v1, 0, 0x3C8u);
  return v1;
}


// CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 62, @0x0000000002f67a90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 62, @0x0000000002f67ab0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoSpawnGroupLoadUnload::GetEntityClassInfo  (line 62, @0x0000000002f680b0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal, CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal, CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::InitOptionalTables, CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::InitOptionalTables
// strings: "info_spawngroup_load_unload", "CInfoSpawnGroupLoadUnload", "CLogicalEntity", "CServerOnlyEntity"
// globals: `guard variable for'CInfoSpawnGroupLoadUnload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadClassInfo, CInfoSpawnGroupLoadUnload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadClassInfo, `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo, CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo, `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo, CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo
CEntityClassInfo *__cdecl CInfoSpawnGroupLoadUnload::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoSpawnGroupLoadUnload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadClassInfo != 0 )
    return &CInfoSpawnGroupLoadUnload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CInfoSpawnGroupLoadUnload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadClassInfo) == 0 )
    return &CInfoSpawnGroupLoadUnload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadClassInfo;
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
    &CInfoSpawnGroupLoadUnload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadClassInfo,
    "CInfoSpawnGroupLoadUnload",
    "info_spawngroup_load_unload",
    0,
    &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CInfoSpawnGroupLoadUnload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadClassInfo);
  return &CInfoSpawnGroupLoadUnload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadClassInfo;
}


// CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::ConstructInstance  (line 62, @0x0000000002f681c0, libserver.so)  // inlines: Construct<CInfoSpawnGroupLoadUnload>
// calls: CInfoSpawnGroupLoadUnload::CInfoSpawnGroupLoadUnload
CEntityInstance *__fastcall CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::ConstructInstance(
        CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CInfoSpawnGroupLoadUnload::CInfoSpawnGroupLoadUnload(p);
  return p;
}


// CInfoSpawnGroupLoadUnload::GetEntityClassInternal  (line 62, @0x0000000002f686d0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_source2_stuff_01.cpp
// strings: "info_spawngroup_load_unload", "CInfoSpawnGroupLoadUnload", "CLogicalEntity", "CServerOnlyEntity"
// globals: `guard variable for'CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass, CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoSpawnGroupLoadUnload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadClassInfo, CInfoSpawnGroupLoadUnload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadClassInfo, `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo (11 total)
CEntityClass *__cdecl CInfoSpawnGroupLoadUnload::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass) != 0 )
  {
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_designerName.u.m_Id = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass._vptr_CEntityClass = off_3F79390;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_ComponentOffsets.m_Size = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_AllHelpers.m_Size = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_instanceUnserializer.m_atomicFields,
      4);
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_classInputs.m_Size = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_classInputs.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_classOutputs.m_Size = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_requiredEHandle.m_Index = -1;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_hNetworkSerializer = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_pBaseClassInfo = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_pClassInfo = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_flags = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_nAllHelpersFlags = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_pScriptClassDesc = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_pInputs = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_nInputCount = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_pOutputs = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_nOutputCount = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_pGameClass = 0;
    CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass._vptr_CEntityClass = off_47BCF50;
    __cxa_guard_release(&`guard variable for'CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass);
    __cxa_atexit(
      CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoSpawnGroupLoadUnloadClass != 0 )
    return &CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass;
  if ( `guard variable for'CInfoSpawnGroupLoadUnload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoSpawnGroupLoadUnload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadClassInfo) != 0 )
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
      &CInfoSpawnGroupLoadUnload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadClassInfo,
      "CInfoSpawnGroupLoadUnload",
      "info_spawngroup_load_unload",
      0,
      &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoSpawnGroupLoadUnload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadClassInfo);
  }
  CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_pClassInfo = &CInfoSpawnGroupLoadUnload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadClassInfo;
  CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_pBaseClassInfo = CInfoSpawnGroupLoadUnload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoSpawnGroupLoadUnloadClass = &CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass;
  CInfoSpawnGroupLoadUnload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadClassInfo.m_pClass = &CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass;
  CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoSpawnGroupLoadUnloadClass->m_pComponentOverrides = 0;
  return &CInfoSpawnGroupLoadUnload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadClass;
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::Schema_DynamicBinding  (line 107, @0x0000000002f67370, libserver.so)
// globals: CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::Schema_DynamicBinding(
        const CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load *const this)
{
  return CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::s_pSchemaBinding;
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 107, @0x0000000002f67380, libserver.so)
// globals: CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass *const this)
{
  return CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::DestructInstance  (line 107, @0x0000000002f67390, libserver.so)  // inlines: Destruct<CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load>
void __fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::DestructInstance(
        CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::FreeInstance  (line 107, @0x0000000002f673b0, libserver.so)
void __fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::FreeInstance(
        CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::CanAllocate  (line 107, @0x0000000002f673d0, libserver.so)
bool __fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::CanAllocate(
        const CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 107, @0x0000000002f673e0, libserver.so)
// globals: CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass *const this)
{
  return CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::s_pSchemaBinding;
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::AllocateInstance  (line 107, @0x0000000002f67630, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::AllocateInstance(
        CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 968);
  memset(v1, 0, 0x3C8u);
  return v1;
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::~CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load  (line 107, @0x0000000002f67850, libserver.so)  // inlines: ~CEntityLumpRequest, ~CInfoSpawnGroupLoadUnload, ~CLogicalEntity, ~CServerOnlyEntity, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CBaseEntity::~CBaseEntity
void __fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::~CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load(
        CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_47BDE70;
  v2 = this->m_Request.m_sLandmarkName.m_pString == 0;
  this->m_Request._vptr_IComputeWorldOriginCallback = &off_47BDE40;
  if ( !v2 )
    CUtlString::FreeMemoryBlock(&this->m_Request.m_sLandmarkName);
  if ( this->m_Request.m_sLevelName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_Request.m_sLevelName);
  if ( this->m_sFixedSpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sFixedSpawnGroupName);
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::~CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load  (line 107, @0x0000000002f67a00, libserver.so)  // inlines: ~CEntityLumpRequest, ~CInfoSpawnGroupLoadUnload, ~CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load, ~CLogicalEntity, ~CServerOnlyEntity, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::~CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load(
        CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_47BDE70;
  v2 = this->m_Request.m_sLandmarkName.m_pString == 0;
  this->m_Request._vptr_IComputeWorldOriginCallback = &off_47BDE40;
  if ( !v2 )
    CUtlString::FreeMemoryBlock(&this->m_Request.m_sLandmarkName);
  if ( this->m_Request.m_sLevelName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_Request.m_sLevelName);
  if ( this->m_sFixedSpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sFixedSpawnGroupName);
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 107, @0x0000000002f67ae0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 107, @0x0000000002f67b00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::ConstructInstance  (line 107, @0x0000000002f681f0, libserver.so)  // inlines: CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load, Construct<CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load>
// calls: CInfoSpawnGroupLoadUnload::CInfoSpawnGroupLoadUnload
CEntityInstance *__fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::ConstructInstance(
        CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CInfoSpawnGroupLoadUnload::CInfoSpawnGroupLoadUnload(p);
    *p = &off_47BD050;
  }
  return p;
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal  (line 107, @0x0000000002f69180, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CInfoSpawnGroupLoadUnload::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_source2_stuff_01.cpp
// strings: "info_spawngroup_load", "CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load"
// globals: `guard variable for'CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_lo, CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadCl, CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClassInfo
CEntityClass *__cdecl CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass) != 0 )
  {
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_designerName.u.m_Id = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass._vptr_CEntityClass = off_3F79390;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_ComponentOffsets.m_Size = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_AllHelpers.m_Size = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_instanceUnserializer.m_atomicFields,
      4);
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_classInputs.m_Size = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_classInputs.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_classOutputs.m_Size = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_requiredEHandle.m_Index = -1;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_hNetworkSerializer = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_pBaseClassInfo = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_pClassInfo = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_flags = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_nAllHelpersFlags = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_pScriptClassDesc = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_pInputs = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_nInputCount = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_pOutputs = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_nOutputCount = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_pGameClass = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass._vptr_CEntityClass = off_47BCFD0;
    __cxa_guard_release(&`guard variable for'CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass);
    __cxa_atexit(
      CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass != 0 )
    return &CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass;
  if ( `guard variable for'CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClassInfo) != 0 )
  {
    EntityClassInfo = CInfoSpawnGroupLoadUnload::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClassInfo,
      "CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load",
      "info_spawngroup_load",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClassInfo);
  }
  CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_pClassInfo = &CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClassInfo;
  CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_pBaseClassInfo = CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass = &CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass;
  CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClassInfo.m_pClass = &CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass;
  CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass->m_pComponentOverrides = 0;
  return &CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_loadClass;
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::Schema_DynamicBinding  (line 108, @0x0000000002f673f0, libserver.so)
// globals: CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::Schema_DynamicBinding(
        const CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload *const this)
{
  return CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::s_pSchemaBinding;
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 108, @0x0000000002f67400, libserver.so)
// globals: CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass *const this)
{
  return CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::DestructInstance  (line 108, @0x0000000002f67410, libserver.so)  // inlines: Destruct<CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload>
void __fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::DestructInstance(
        CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::FreeInstance  (line 108, @0x0000000002f67430, libserver.so)
void __fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::FreeInstance(
        CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::CanAllocate  (line 108, @0x0000000002f67450, libserver.so)
bool __fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::CanAllocate(
        const CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 108, @0x0000000002f67460, libserver.so)
// globals: CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass *const this)
{
  return CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::s_pSchemaBinding;
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::AllocateInstance  (line 108, @0x0000000002f67670, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::AllocateInstance(
        CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 968);
  memset(v1, 0, 0x3C8u);
  return v1;
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::~CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload  (line 108, @0x0000000002f677c0, libserver.so)  // inlines: ~CEntityLumpRequest, ~CInfoSpawnGroupLoadUnload, ~CLogicalEntity, ~CServerOnlyEntity, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CBaseEntity::~CBaseEntity
void __fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::~CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload(
        CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_47BDE70;
  v2 = this->m_Request.m_sLandmarkName.m_pString == 0;
  this->m_Request._vptr_IComputeWorldOriginCallback = &off_47BDE40;
  if ( !v2 )
    CUtlString::FreeMemoryBlock(&this->m_Request.m_sLandmarkName);
  if ( this->m_Request.m_sLevelName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_Request.m_sLevelName);
  if ( this->m_sFixedSpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sFixedSpawnGroupName);
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::~CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload  (line 108, @0x0000000002f67970, libserver.so)  // inlines: ~CEntityLumpRequest, ~CInfoSpawnGroupLoadUnload, ~CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload, ~CLogicalEntity, ~CServerOnlyEntity, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::~CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload(
        CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_47BDE70;
  v2 = this->m_Request.m_sLandmarkName.m_pString == 0;
  this->m_Request._vptr_IComputeWorldOriginCallback = &off_47BDE40;
  if ( !v2 )
    CUtlString::FreeMemoryBlock(&this->m_Request.m_sLandmarkName);
  if ( this->m_Request.m_sLevelName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_Request.m_sLevelName);
  if ( this->m_sFixedSpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sFixedSpawnGroupName);
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 108, @0x0000000002f67b30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 108, @0x0000000002f67b50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::ConstructInstance  (line 108, @0x0000000002f68220, libserver.so)  // inlines: CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload, Construct<CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload>
// calls: CInfoSpawnGroupLoadUnload::CInfoSpawnGroupLoadUnload
CEntityInstance *__fastcall CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::ConstructInstance(
        CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CInfoSpawnGroupLoadUnload::CInfoSpawnGroupLoadUnload(p);
    *p = &off_47BD790;
  }
  return p;
}


// CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal  (line 108, @0x0000000002f68aa0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CInfoSpawnGroupLoadUnload::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_source2_stuff_01.cpp
// strings: "info_spawngroup_unload", "CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload"
// globals: `guard variable for'CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_, CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unlo, CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClassInfo
CEntityClass *__cdecl CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass) != 0 )
  {
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_designerName.u.m_Id = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass._vptr_CEntityClass = off_3F79390;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_ComponentOffsets.m_Size = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_AllHelpers.m_Size = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_instanceUnserializer.m_atomicFields,
      4);
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_classInputs.m_Size = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_classInputs.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_classOutputs.m_Size = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_requiredEHandle.m_Index = -1;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_hNetworkSerializer = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_pBaseClassInfo = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_pClassInfo = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_flags = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_nAllHelpersFlags = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_pScriptClassDesc = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_pInputs = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_nInputCount = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_pOutputs = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_nOutputCount = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_pGameClass = 0;
    CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass._vptr_CEntityClass = off_47BD710;
    __cxa_guard_release(&`guard variable for'CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass);
    __cxa_atexit(
      CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass != 0 )
    return &CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass;
  if ( `guard variable for'CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClassInfo) != 0 )
  {
    EntityClassInfo = CInfoSpawnGroupLoadUnload::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClassInfo,
      "CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload",
      "info_spawngroup_unload",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClassInfo);
  }
  CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_pClassInfo = &CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClassInfo;
  CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_pBaseClassInfo = CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass = &CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass;
  CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInfo(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClassInfo.m_pClass = &CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass;
  CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass->m_pComponentOverrides = 0;
  return &CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::GetEntityClassInternal(void)::g_EntityCInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unloadClass;
}


