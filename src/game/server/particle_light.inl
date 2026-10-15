
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CParticleLight::~CParticleLight  (line 24, @0x00000000022a99e0, libserver.so)  // inlines: ~CServerOnlyEntity, ~CServerOnlyPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CParticleLight::~CParticleLight(CParticleLight *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CParticleLight::~CParticleLight  (line 24, @0x00000000022a9a00, libserver.so)  // inlines: ~CParticleLight, ~CServerOnlyEntity, ~CServerOnlyPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CParticleLight::~CParticleLight(CParticleLight *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CParticleLight::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 26, @0x0000000001fead40, libserver.so)
// globals: CParticleLight::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CParticleLight::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CParticleLight::CEntityInstanceEntityClass *const this)
{
  return CParticleLight::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CParticleLight::CEntityInstanceEntityClass::DestructInstance  (line 26, @0x0000000001fead50, libserver.so)  // inlines: Destruct<CParticleLight>
void __fastcall CParticleLight::CEntityInstanceEntityClass::DestructInstance(
        CParticleLight::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CParticleLight::CEntityInstanceEntityClass::FreeInstance  (line 26, @0x0000000001fead70, libserver.so)
void __fastcall CParticleLight::CEntityInstanceEntityClass::FreeInstance(
        CParticleLight::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CParticleLight::CEntityInstanceEntityClass::CanAllocate  (line 26, @0x0000000001fead90, libserver.so)
bool __fastcall CParticleLight::CEntityInstanceEntityClass::CanAllocate(
        const CParticleLight::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CParticleLight::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 26, @0x0000000001feada0, libserver.so)
// globals: CParticleLight::s_pSchemaBinding
const ISchemaBinding *__fastcall CParticleLight::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CParticleLight::CEntityInstanceEntityClass *const this)
{
  return CParticleLight::s_pSchemaBinding;
}


// CParticleLight::CEntityInstanceEntityClass::AllocateInstance  (line 26, @0x0000000001febfa0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CParticleLight::CEntityInstanceEntityClass::AllocateInstance(
        CParticleLight::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 808);
  memset(v1, 0, 0x328u);
  return v1;
}


// CParticleLight::CEntityInstanceEntityClass::ConstructInstance  (line 26, @0x0000000001fec410, libserver.so)  // inlines: Construct<CParticleLight>
// calls: CParticleLight::CParticleLight
CEntityInstance *__fastcall CParticleLight::CEntityInstanceEntityClass::ConstructInstance(
        CParticleLight::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CParticleLight::CParticleLight(p);
  return p;
}


// CParticleLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 26, @0x0000000001fecbd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CParticleLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CParticleLight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CParticleLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 26, @0x0000000001fecbf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CParticleLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CParticleLight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CParticleLight::GetEntityClassInternal  (line 26, @0x0000000001ff56b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CServerOnlyEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "env_particlelight", "CParticleLight", "CServerOnlyPointEntity"
// globals: `guard variable for'CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass, CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CParticleLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CParticleLight::GetEntityClassInfo(void)::g_EntityCParticleLightClassInfo, CParticleLight::GetEntityClassInfo(void)::g_EntityCParticleLightClassInfo, `guard variable for'CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo (9 total)
CEntityClass *__cdecl CParticleLight::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass == 0
    && __cxa_guard_acquire(&`guard variable for'CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass) != 0 )
  {
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_designerName.u.m_Id = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass._vptr_CEntityClass = off_3F79390;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_ComponentOffsets.m_Size = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_AllHelpers.m_Size = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_instanceUnserializer.m_atomicFields,
      4);
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_classInputs.m_Size = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_classInputs.m_Memory.m_pMemory = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_classOutputs.m_Size = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_requiredEHandle.m_Index = -1;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_hNetworkSerializer = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_pBaseClassInfo = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_pClassInfo = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_flags = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_nAllHelpersFlags = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_pScriptClassDesc = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_pInputs = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_nInputCount = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_pOutputs = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_nOutputCount = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_pGameClass = 0;
    CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass._vptr_CEntityClass = off_3FDCF90;
    __cxa_guard_release(&`guard variable for'CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass);
    __cxa_atexit(
      CParticleLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass,
      &_dso_handle);
  }
  if ( g_pEntityCParticleLightClass != 0 )
    return &CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass;
  if ( `guard variable for'CParticleLight::GetEntityClassInfo(void)::g_EntityCParticleLightClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CParticleLight::GetEntityClassInfo(void)::g_EntityCParticleLightClassInfo) != 0 )
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
      &CParticleLight::GetEntityClassInfo(void)::g_EntityCParticleLightClassInfo,
      "CParticleLight",
      "env_particlelight",
      0,
      &CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CParticleLight::GetEntityClassInfo(void)::g_EntityCParticleLightClassInfo);
  }
  CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_pClassInfo = &CParticleLight::GetEntityClassInfo(void)::g_EntityCParticleLightClassInfo;
  CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_pBaseClassInfo = CParticleLight::GetEntityClassInfo(void)::g_EntityCParticleLightClassInfo.m_pBaseClassInfo;
  g_pEntityCParticleLightClass = &CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass;
  CParticleLight::GetEntityClassInfo(void)::g_EntityCParticleLightClassInfo.m_pClass = &CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass;
  CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCParticleLightClass->m_pComponentOverrides = 0;
  return &CParticleLight::GetEntityClassInternal(void)::g_EntityCParticleLightClass;
}


// CParticleLight::GetEntityClass  (line 26, @0x00000000022a6b90, libserver.so)
CEntityClass *__cdecl CParticleLight::GetEntityClass()
{
  return g_pEntityCParticleLightClass;
}


// CParticleLight::Schema_DynamicBinding  (line 26, @0x00000000022a9fd0, libserver.so)
// calls: CParticleLight::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CParticleLight::Schema_DynamicBinding(const CParticleLight *const this)
{
  CParticleLight::Schema_VerifyBindingIsRegistered();
  return CParticleLight::s_pSchemaBinding;
}


