
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPathTrack::~CPathTrack  (line 41, @0x0000000002306870, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPathTrack::~CPathTrack(CPathTrack *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CPathTrack::~CPathTrack  (line 41, @0x0000000002306890, libserver.so)  // inlines: ~CPathTrack, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPathTrack::~CPathTrack(CPathTrack *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPathTrack::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 43, @0x0000000002002660, libserver.so)
// globals: CPathTrack::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPathTrack::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPathTrack::CEntityInstanceEntityClass *const this)
{
  return CPathTrack::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPathTrack::CEntityInstanceEntityClass::DestructInstance  (line 43, @0x0000000002002670, libserver.so)  // inlines: Destruct<CPathTrack>
void __fastcall CPathTrack::CEntityInstanceEntityClass::DestructInstance(
        CPathTrack::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPathTrack::CEntityInstanceEntityClass::FreeInstance  (line 43, @0x0000000002002690, libserver.so)
void __fastcall CPathTrack::CEntityInstanceEntityClass::FreeInstance(
        CPathTrack::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPathTrack::CEntityInstanceEntityClass::CanAllocate  (line 43, @0x00000000020026b0, libserver.so)
bool __fastcall CPathTrack::CEntityInstanceEntityClass::CanAllocate(
        const CPathTrack::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPathTrack::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 43, @0x00000000020026c0, libserver.so)
// globals: CPathTrack::s_pSchemaBinding
const ISchemaBinding *__fastcall CPathTrack::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPathTrack::CEntityInstanceEntityClass *const this)
{
  return CPathTrack::s_pSchemaBinding;
}


// CPathTrack::CEntityInstanceEntityClass::AllocateInstance  (line 43, @0x0000000002004bb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPathTrack::CEntityInstanceEntityClass::AllocateInstance(
        CPathTrack::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 848);
  memset(v1, 0, 0x350u);
  return v1;
}


// CPathTrack::CEntityInstanceEntityClass::ConstructInstance  (line 43, @0x00000000020051a0, libserver.so)  // inlines: Construct<CPathTrack>
// calls: CPathTrack::CPathTrack
CEntityInstance *__fastcall CPathTrack::CEntityInstanceEntityClass::ConstructInstance(
        CPathTrack::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPathTrack::CPathTrack(p);
  return p;
}


// CPathTrack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002006ff0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPathTrack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPathTrack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPathTrack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002007010, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPathTrack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPathTrack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPathTrack::GetEntityClassInternal  (line 43, @0x000000000200f100, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp
// strings: "CPathTrack"
// globals: `guard variable for'CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass, CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPathTrack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPathTrack::GetEntityClassInfo(void)::g_EntityCPathTrackClassInfo, CPathTrack::GetEntityClassInfo(void)::g_EntityCPathTrackClassInfo
CEntityClass *__cdecl CPathTrack::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass) != 0 )
  {
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_designerName.u.m_Id = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass._vptr_CEntityClass = off_3F79390;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_ComponentOffsets.m_Size = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_AllHelpers.m_Size = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_classInputs.m_Size = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_classOutputs.m_Size = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_requiredEHandle.m_Index = -1;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_hNetworkSerializer = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_pBaseClassInfo = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_pClassInfo = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_flags = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_nAllHelpersFlags = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_pScriptClassDesc = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_pInputs = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_nInputCount = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_pOutputs = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_nOutputCount = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_pGameClass = 0;
    CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass._vptr_CEntityClass = off_3FDE730;
    __cxa_guard_release(&`guard variable for'CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass);
    __cxa_atexit(
      CPathTrack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass,
      &_dso_handle);
  }
  if ( g_pEntityCPathTrackClass != 0 )
    return &CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass;
  if ( `guard variable for'CPathTrack::GetEntityClassInfo(void)::g_EntityCPathTrackClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPathTrack::GetEntityClassInfo(void)::g_EntityCPathTrackClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPathTrack::GetEntityClassInfo(void)::g_EntityCPathTrackClassInfo,
      "CPathTrack",
      "path_track",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPathTrack::GetEntityClassInfo(void)::g_EntityCPathTrackClassInfo);
  }
  CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_pClassInfo = &CPathTrack::GetEntityClassInfo(void)::g_EntityCPathTrackClassInfo;
  CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_pBaseClassInfo = CPathTrack::GetEntityClassInfo(void)::g_EntityCPathTrackClassInfo.m_pBaseClassInfo;
  g_pEntityCPathTrackClass = &CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass;
  CPathTrack::GetEntityClassInfo(void)::g_EntityCPathTrackClassInfo.m_pClass = &CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass;
  CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPathTrackClass->m_pComponentOverrides = 0;
  return &CPathTrack::GetEntityClassInternal(void)::g_EntityCPathTrackClass;
}


// CPathTrack::GetEntityClass  (line 43, @0x0000000002303190, libserver.so)
CEntityClass *__cdecl CPathTrack::GetEntityClass()
{
  return g_pEntityCPathTrackClass;
}


// CPathTrack::Schema_DynamicBinding  (line 43, @0x00000000023071a0, libserver.so)
// calls: CPathTrack::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPathTrack::Schema_DynamicBinding(const CPathTrack *const this)
{
  CPathTrack::Schema_VerifyBindingIsRegistered();
  return CPathTrack::s_pSchemaBinding;
}


