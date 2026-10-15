
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvSky::GetEntityClass  (line 37, @0x0000000001eea8c0, libserver.so)
CEntityClass *__cdecl CEnvSky::GetEntityClass()
{
  return g_pEntityCEnvSkyClass;
}


// CEnvSky::Schema_DynamicBinding  (line 37, @0x0000000001eea8d0, libserver.so)
// globals: CEnvSky::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvSky::Schema_DynamicBinding(const CEnvSky *const this)
{
  return CEnvSky::s_pSchemaBinding;
}


// CEnvSky::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 37, @0x0000000001eea8e0, libserver.so)
// globals: CEnvSky::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvSky::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvSky::CEntityInstanceEntityClass *const this)
{
  return CEnvSky::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvSky::CEntityInstanceEntityClass::DestructInstance  (line 37, @0x0000000001eea8f0, libserver.so)  // inlines: Destruct<CEnvSky>
void __fastcall CEnvSky::CEntityInstanceEntityClass::DestructInstance(
        CEnvSky::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvSky::CEntityInstanceEntityClass::FreeInstance  (line 37, @0x0000000001eea910, libserver.so)
void __fastcall CEnvSky::CEntityInstanceEntityClass::FreeInstance(
        CEnvSky::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvSky::CEntityInstanceEntityClass::CanAllocate  (line 37, @0x0000000001eea930, libserver.so)
bool __fastcall CEnvSky::CEntityInstanceEntityClass::CanAllocate(const CEnvSky::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvSky::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 37, @0x0000000001eea940, libserver.so)
// globals: CEnvSky::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvSky::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvSky::CEntityInstanceEntityClass *const this)
{
  return CEnvSky::s_pSchemaBinding;
}


// CEnvSky::CEntityInstanceEntityClass::AllocateInstance  (line 37, @0x0000000001eebfa0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvSky::CEntityInstanceEntityClass::AllocateInstance(CEnvSky::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1224);
  memset(v1, 0, 0x4C8u);
  return v1;
}


// CEnvSky::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000001eedcc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvSky::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvSky::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEnvSky::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000001eedce0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvSky::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvSky::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvSky::CEntityInstanceEntityClass::ConstructInstance  (line 37, @0x0000000001ef2df0, libserver.so)  // inlines: Construct<CEnvSky>
// calls: CEnvSky::CEnvSky
CEntityInstance *__fastcall CEnvSky::CEntityInstanceEntityClass::ConstructInstance(
        CEnvSky::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CEnvSky::CEnvSky(p);
  return p;
}


// CEnvSky::GetEntityClassInternal  (line 37, @0x0000000001ef8370, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEnvSky::SetupEntClassInputs, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "Draws the 2D skybox", "env_sky", "CEnvSky"
// globals: `guard variable for'CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass, CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CEnvSky::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvSky::GetEntityClassInfo(void)::g_EntityCEnvSkyClassInfo, CEnvSky::GetEntityClassInfo(void)::g_EntityCEnvSkyClassInfo
CEntityClass *__cdecl CEnvSky::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass) != 0 )
  {
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_designerName.u.m_Id = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass._vptr_CEntityClass = off_3F79390;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_ComponentOffsets.m_Size = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_AllHelpers.m_Size = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_instanceUnserializer.m_atomicFields,
      4);
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_classInputs.m_Size = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_classInputs.m_Memory.m_pMemory = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_classOutputs.m_Size = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_requiredEHandle.m_Index = -1;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_hNetworkSerializer = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_pBaseClassInfo = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_pClassInfo = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_flags = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_nAllHelpersFlags = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_pScriptClassDesc = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_pInputs = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_nInputCount = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_pOutputs = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_nOutputCount = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_pGameClass = 0;
    CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass._vptr_CEntityClass = off_3FBA010;
    __cxa_guard_release(&`guard variable for'CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass);
    __cxa_atexit(
      CEnvSky::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvSkyClass != 0 )
    return &CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass;
  if ( `guard variable for'CEnvSky::GetEntityClassInfo(void)::g_EntityCEnvSkyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvSky::GetEntityClassInfo(void)::g_EntityCEnvSkyClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvSky::GetEntityClassInfo(void)::g_EntityCEnvSkyClassInfo,
      "CEnvSky",
      "env_sky",
      "Draws the 2D skybox",
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvSky::GetEntityClassInfo(void)::g_EntityCEnvSkyClassInfo);
  }
  CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_pClassInfo = &CEnvSky::GetEntityClassInfo(void)::g_EntityCEnvSkyClassInfo;
  CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_pBaseClassInfo = CEnvSky::GetEntityClassInfo(void)::g_EntityCEnvSkyClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvSkyClass = &CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass;
  CEnvSky::GetEntityClassInfo(void)::g_EntityCEnvSkyClassInfo.m_pClass = &CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass;
  CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  CEnvSky::SetupEntClassInputs(g_pEntityCEnvSkyClass);
  g_pEntityCEnvSkyClass->m_pComponentOverrides = 0;
  return &CEnvSky::GetEntityClassInternal(void)::g_EntityCEnvSkyClass;
}


