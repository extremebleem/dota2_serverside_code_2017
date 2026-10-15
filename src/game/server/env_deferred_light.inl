
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvDeferredLight::~CEnvDeferredLight  (line 11, @0x00000000027cf740, libserver.so)  // inlines: ~CModelPointEntity
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CEnvDeferredLight::~CEnvDeferredLight(CEnvDeferredLight *const this)
{
  this->_vptr_IHandleEntity = &off_3FEF570;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CEnvDeferredLight::~CEnvDeferredLight  (line 11, @0x00000000027cf760, libserver.so)  // inlines: ~CEnvDeferredLight, ~CModelPointEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CEnvDeferredLight::~CEnvDeferredLight(CEnvDeferredLight *const this)
{
  this->_vptr_IHandleEntity = &off_3FEF570;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvDeferredLight::GetEntityClass  (line 13, @0x00000000027ceaa0, libserver.so)
CEntityClass *__cdecl CEnvDeferredLight::GetEntityClass()
{
  return g_pEntityCEnvDeferredLightClass;
}


// CEnvDeferredLight::Schema_DynamicBinding  (line 13, @0x00000000027ceab0, libserver.so)
// globals: CEnvDeferredLight::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvDeferredLight::Schema_DynamicBinding(const CEnvDeferredLight *const this)
{
  return CEnvDeferredLight::s_pSchemaBinding;
}


// CEnvDeferredLight::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 13, @0x00000000027ceac0, libserver.so)
// globals: CEnvDeferredLight::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvDeferredLight::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvDeferredLight::CEntityInstanceEntityClass *const this)
{
  return CEnvDeferredLight::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvDeferredLight::CEntityInstanceEntityClass::DestructInstance  (line 13, @0x00000000027cead0, libserver.so)  // inlines: Destruct<CEnvDeferredLight>
void __fastcall CEnvDeferredLight::CEntityInstanceEntityClass::DestructInstance(
        CEnvDeferredLight::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvDeferredLight::CEntityInstanceEntityClass::FreeInstance  (line 13, @0x00000000027ceaf0, libserver.so)
void __fastcall CEnvDeferredLight::CEntityInstanceEntityClass::FreeInstance(
        CEnvDeferredLight::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvDeferredLight::CEntityInstanceEntityClass::CanAllocate  (line 13, @0x00000000027ceb10, libserver.so)
bool __fastcall CEnvDeferredLight::CEntityInstanceEntityClass::CanAllocate(
        const CEnvDeferredLight::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvDeferredLight::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 13, @0x00000000027ceb20, libserver.so)
// globals: CEnvDeferredLight::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvDeferredLight::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvDeferredLight::CEntityInstanceEntityClass *const this)
{
  return CEnvDeferredLight::s_pSchemaBinding;
}


// CEnvDeferredLight::CEntityInstanceEntityClass::AllocateInstance  (line 13, @0x00000000027cf5c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvDeferredLight::CEntityInstanceEntityClass::AllocateInstance(
        CEnvDeferredLight::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1456);
  memset(v1, 0, 0x5B0u);
  return v1;
}


// CEnvDeferredLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 13, @0x00000000027d1900, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvDeferredLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvDeferredLight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEnvDeferredLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 13, @0x00000000027d1920, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvDeferredLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvDeferredLight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvDeferredLight::GetEntityClassInfo  (line 13, @0x00000000027d58c0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CEnvDeferredSpotLight::GetEntityClassInternal
// strings: "env_deferred_light", "CEnvDeferredLight", "CModelPointEntity", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CEnvDeferredLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredLightClassInfo, CEnvDeferredLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredLightClassInfo, `guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo, CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo
CEntityClassInfo *__cdecl CEnvDeferredLight::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvDeferredLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredLightClassInfo != 0 )
    return &CEnvDeferredLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredLightClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CEnvDeferredLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredLightClassInfo) == 0 )
    return &CEnvDeferredLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredLightClassInfo;
  if ( `guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
        "CBaseModelEntity",
        "basemodelentity",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo,
      "CModelPointEntity",
      0,
      0,
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CEnvDeferredLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredLightClassInfo,
    "CEnvDeferredLight",
    "env_deferred_light",
    0,
    &CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CEnvDeferredLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredLightClassInfo);
  return &CEnvDeferredLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredLightClassInfo;
}


// CEnvDeferredLight::CEntityInstanceEntityClass::ConstructInstance  (line 13, @0x00000000027d59d0, libserver.so)  // inlines: Construct<CEnvDeferredLight>
// calls: CEnvDeferredLight::CEnvDeferredLight
CEntityInstance *__fastcall CEnvDeferredLight::CEntityInstanceEntityClass::ConstructInstance(
        CEnvDeferredLight::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CEnvDeferredLight::CEnvDeferredLight(p);
  return p;
}


// CEnvDeferredLight::GetEntityClassInternal  (line 13, @0x00000000027dc720, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_08.cpp
// strings: "env_deferred_light", "CEnvDeferredLight", "CModelPointEntity", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass, CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CEnvDeferredLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvDeferredLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredLightClassInfo, CEnvDeferredLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredLightClassInfo, `guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo (11 total)
CEntityClass *__cdecl CEnvDeferredLight::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass) != 0 )
  {
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_designerName.u.m_Id = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass._vptr_CEntityClass = off_3F79390;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_ComponentOffsets.m_Size = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_AllHelpers.m_Size = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_instanceUnserializer.m_atomicFields,
      4);
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_classInputs.m_Size = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_classInputs.m_Memory.m_pMemory = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_classOutputs.m_Size = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_requiredEHandle.m_Index = -1;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_hNetworkSerializer = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_pBaseClassInfo = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_pClassInfo = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_flags = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_nAllHelpersFlags = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_pScriptClassDesc = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_pInputs = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_nInputCount = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_pOutputs = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_nOutputCount = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_pGameClass = 0;
    CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass._vptr_CEntityClass = off_42B4D50;
    __cxa_guard_release(&`guard variable for'CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass);
    __cxa_atexit(
      CEnvDeferredLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvDeferredLightClass != 0 )
    return &CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass;
  if ( `guard variable for'CEnvDeferredLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredLightClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvDeferredLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredLightClassInfo) != 0 )
  {
    if ( `guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
      {
        EntityClassInfo = CBaseEntity::GetEntityClassInfo();
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
          "CBaseModelEntity",
          "basemodelentity",
          0,
          EntityClassInfo);
        __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo,
        "CModelPointEntity",
        0,
        0,
        &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvDeferredLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredLightClassInfo,
      "CEnvDeferredLight",
      "env_deferred_light",
      0,
      &CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvDeferredLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredLightClassInfo);
  }
  CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_pClassInfo = &CEnvDeferredLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredLightClassInfo;
  CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_pBaseClassInfo = CEnvDeferredLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredLightClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvDeferredLightClass = &CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass;
  CEnvDeferredLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredLightClassInfo.m_pClass = &CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass;
  CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCEnvDeferredLightClass->m_pComponentOverrides = 0;
  return &CEnvDeferredLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredLightClass;
}


