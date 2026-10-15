
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CParticleSystem::~CParticleSystem  (line 31, @0x00000000021137f0, libserver.so)  // inlines: ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CBaseModelEntity::~CBaseModelEntity
void __fastcall CParticleSystem::~CParticleSystem(CParticleSystem *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CParticleSystem::NetworkVar_m_iEffectIndex> *p_m_iEffectIndex; // rdi

  p_m_iEffectIndex = &this->m_iEffectIndex;
  p_m_iEffectIndex[-178].m_Value.m_pBinding = &off_3FFB9B0;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_iEffectIndex->m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CParticleSystem::~CParticleSystem  (line 31, @0x0000000002113830, libserver.so)  // inlines: ~CNetworkVarBase, ~CParticleSystem, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CParticleSystem::~CParticleSystem(CParticleSystem *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CParticleSystem::NetworkVar_m_iEffectIndex> *p_m_iEffectIndex; // rdi

  p_m_iEffectIndex = &this->m_iEffectIndex;
  p_m_iEffectIndex[-178].m_Value.m_pBinding = &off_3FFB9B0;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_iEffectIndex->m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CParticleSystem::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 33, @0x0000000001feadb0, libserver.so)
// globals: CParticleSystem::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CParticleSystem::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CParticleSystem::CEntityInstanceEntityClass *const this)
{
  return CParticleSystem::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CParticleSystem::CEntityInstanceEntityClass::DestructInstance  (line 33, @0x0000000001feadc0, libserver.so)  // inlines: Destruct<CParticleSystem>
void __fastcall CParticleSystem::CEntityInstanceEntityClass::DestructInstance(
        CParticleSystem::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CParticleSystem::CEntityInstanceEntityClass::FreeInstance  (line 33, @0x0000000001feade0, libserver.so)
void __fastcall CParticleSystem::CEntityInstanceEntityClass::FreeInstance(
        CParticleSystem::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CParticleSystem::CEntityInstanceEntityClass::CanAllocate  (line 33, @0x0000000001feae00, libserver.so)
bool __fastcall CParticleSystem::CEntityInstanceEntityClass::CanAllocate(
        const CParticleSystem::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CParticleSystem::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 33, @0x0000000001feae10, libserver.so)
// globals: CParticleSystem::s_pSchemaBinding
const ISchemaBinding *__fastcall CParticleSystem::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CParticleSystem::CEntityInstanceEntityClass *const this)
{
  return CParticleSystem::s_pSchemaBinding;
}


// CParticleSystem::CEntityInstanceEntityClass::AllocateInstance  (line 33, @0x0000000001febfe0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CParticleSystem::CEntityInstanceEntityClass::AllocateInstance(
        CParticleSystem::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 2336);
  memset(v1, 0, 0x920u);
  return v1;
}


// CParticleSystem::CEntityInstanceEntityClass::ConstructInstance  (line 33, @0x0000000001fec440, libserver.so)  // inlines: Construct<CParticleSystem>
// calls: CParticleSystem::CParticleSystem
CEntityInstance *__fastcall CParticleSystem::CEntityInstanceEntityClass::ConstructInstance(
        CParticleSystem::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CParticleSystem::CParticleSystem(p);
  return p;
}


// CParticleSystem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000001fed170, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CParticleSystem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CParticleSystem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CParticleSystem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000001fed190, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CParticleSystem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CParticleSystem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CParticleSystem::GetEntityClassInternal  (line 33, @0x0000000001ff3510, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "info_particle_system", "CParticleSystem"
// globals: `guard variable for'CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass, CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CParticleSystem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CParticleSystem::GetEntityClassInfo(void)::g_EntityCParticleSystemClassInfo, CParticleSystem::GetEntityClassInfo(void)::g_EntityCParticleSystemClassInfo
CEntityClass *__cdecl CParticleSystem::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass == 0
    && __cxa_guard_acquire(&`guard variable for'CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass) != 0 )
  {
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_designerName.u.m_Id = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass._vptr_CEntityClass = off_3F79390;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_ComponentOffsets.m_Size = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_AllHelpers.m_Size = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_instanceUnserializer.m_atomicFields,
      4);
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_classInputs.m_Size = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_classInputs.m_Memory.m_pMemory = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_classOutputs.m_Size = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_requiredEHandle.m_Index = -1;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_hNetworkSerializer = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_pBaseClassInfo = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_pClassInfo = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_flags = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_nAllHelpersFlags = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_pScriptClassDesc = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_pInputs = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_nInputCount = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_pOutputs = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_nOutputCount = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_pGameClass = 0;
    CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass._vptr_CEntityClass = off_3FDD150;
    __cxa_guard_release(&`guard variable for'CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass);
    __cxa_atexit(
      CParticleSystem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass,
      &_dso_handle);
  }
  if ( g_pEntityCParticleSystemClass != 0 )
    return &CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass;
  if ( `guard variable for'CParticleSystem::GetEntityClassInfo(void)::g_EntityCParticleSystemClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CParticleSystem::GetEntityClassInfo(void)::g_EntityCParticleSystemClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CParticleSystem::GetEntityClassInfo(void)::g_EntityCParticleSystemClassInfo,
      "CParticleSystem",
      "info_particle_system",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CParticleSystem::GetEntityClassInfo(void)::g_EntityCParticleSystemClassInfo);
  }
  CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_pClassInfo = &CParticleSystem::GetEntityClassInfo(void)::g_EntityCParticleSystemClassInfo;
  CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_pBaseClassInfo = CParticleSystem::GetEntityClassInfo(void)::g_EntityCParticleSystemClassInfo.m_pBaseClassInfo;
  g_pEntityCParticleSystemClass = &CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass;
  CParticleSystem::GetEntityClassInfo(void)::g_EntityCParticleSystemClassInfo.m_pClass = &CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass;
  CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCParticleSystemClass->m_pComponentOverrides = 0;
  return &CParticleSystem::GetEntityClassInternal(void)::g_EntityCParticleSystemClass;
}


// CParticleSystem::GetEntityClass  (line 33, @0x00000000020f1b90, libserver.so)
CEntityClass *__cdecl CParticleSystem::GetEntityClass()
{
  return g_pEntityCParticleSystemClass;
}


// CParticleSystem::Schema_DynamicBinding  (line 33, @0x00000000020f5f60, libserver.so)
// calls: CParticleSystem::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CParticleSystem::Schema_DynamicBinding(const CParticleSystem *const this)
{
  CParticleSystem::Schema_VerifyBindingIsRegistered();
  return CParticleSystem::s_pSchemaBinding;
}


