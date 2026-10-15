
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLight::~CLight  (line 18, @0x00000000022a9240, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLight::~CLight(CLight *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CLight::~CLight  (line 18, @0x00000000022a9260, libserver.so)  // inlines: ~CLight, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLight::~CLight(CLight *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLight::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 20, @0x0000000001feaaa0, libserver.so)
// globals: CLight::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLight::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLight::CEntityInstanceEntityClass *const this)
{
  return CLight::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLight::CEntityInstanceEntityClass::DestructInstance  (line 20, @0x0000000001feaab0, libserver.so)  // inlines: Destruct<CLight>
void __fastcall CLight::CEntityInstanceEntityClass::DestructInstance(
        CLight::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLight::CEntityInstanceEntityClass::FreeInstance  (line 20, @0x0000000001feaad0, libserver.so)
void __fastcall CLight::CEntityInstanceEntityClass::FreeInstance(
        CLight::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLight::CEntityInstanceEntityClass::CanAllocate  (line 20, @0x0000000001feaaf0, libserver.so)
bool __fastcall CLight::CEntityInstanceEntityClass::CanAllocate(const CLight::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLight::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 20, @0x0000000001feab00, libserver.so)
// globals: CLight::s_pSchemaBinding
const ISchemaBinding *__fastcall CLight::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLight::CEntityInstanceEntityClass *const this)
{
  return CLight::s_pSchemaBinding;
}


// CLight::CEntityInstanceEntityClass::AllocateInstance  (line 20, @0x0000000001febe20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLight::CEntityInstanceEntityClass::AllocateInstance(CLight::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 800);
  memset(v1, 0, 0x320u);
  return v1;
}


// CLight::CEntityInstanceEntityClass::ConstructInstance  (line 20, @0x0000000001fec020, libserver.so)  // inlines: CLight, CPointEntity, CUtlSymbolLarge, Construct<CLight>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLight::CEntityInstanceEntityClass::ConstructInstance(
        CLight::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = 0;
    *p = &off_40597D0;
  }
  return p;
}


// CLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x0000000001fecd10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x0000000001fecd30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLight::GetEntityClassInternal  (line 20, @0x0000000001ff3bb0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "light_s1", "CLight", "CPointEntity"
// globals: `guard variable for'CLight::GetEntityClassInternal(void)::g_EntityCLightClass, CLight::GetEntityClassInternal(void)::g_EntityCLightClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo, CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo, `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo (9 total)
CEntityClass *__cdecl CLight::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLight::GetEntityClassInternal(void)::g_EntityCLightClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLight::GetEntityClassInternal(void)::g_EntityCLightClass) != 0 )
  {
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_designerName.u.m_Id = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass._vptr_CEntityClass = off_3F79390;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_ComponentOffsets.m_Size = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_AllHelpers.m_Size = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_instanceUnserializer.m_atomicFields,
      4);
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CLight::GetEntityClassInternal(void)::g_EntityCLightClass;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_classInputs.m_Size = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_classInputs.m_Memory.m_pMemory = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_classOutputs.m_Size = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_requiredEHandle.m_Index = -1;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_hNetworkSerializer = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_pBaseClassInfo = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_pClassInfo = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_flags = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_nAllHelpersFlags = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_pScriptClassDesc = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_pInputs = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_nInputCount = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_pOutputs = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_nOutputCount = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_pGameClass = 0;
    CLight::GetEntityClassInternal(void)::g_EntityCLightClass._vptr_CEntityClass = off_3FDC3F0;
    __cxa_guard_release(&`guard variable for'CLight::GetEntityClassInternal(void)::g_EntityCLightClass);
    __cxa_atexit(
      CLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLight::GetEntityClassInternal(void)::g_EntityCLightClass,
      &_dso_handle);
  }
  if ( g_pEntityCLightClass != 0 )
    return &CLight::GetEntityClassInternal(void)::g_EntityCLightClass;
  if ( `guard variable for'CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo) != 0 )
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
      &CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo,
      "CLight",
      "light_s1",
      0,
      &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo);
  }
  CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_pClassInfo = &CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo;
  CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_pBaseClassInfo = CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo.m_pBaseClassInfo;
  g_pEntityCLightClass = &CLight::GetEntityClassInternal(void)::g_EntityCLightClass;
  CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo.m_pClass = &CLight::GetEntityClassInternal(void)::g_EntityCLightClass;
  CLight::GetEntityClassInternal(void)::g_EntityCLightClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLightClass->m_pComponentOverrides = 0;
  return &CLight::GetEntityClassInternal(void)::g_EntityCLightClass;
}


// CLight::GetEntityClass  (line 20, @0x00000000022a5450, libserver.so)
CEntityClass *__cdecl CLight::GetEntityClass()
{
  return g_pEntityCLightClass;
}


// CLight::Schema_DynamicBinding  (line 20, @0x00000000022a9f00, libserver.so)
// calls: CLight::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CLight::Schema_DynamicBinding(const CLight *const this)
{
  CLight::Schema_VerifyBindingIsRegistered();
  return CLight::s_pSchemaBinding;
}


// CLight::GetEntityClassInfo  (line 20, @0x00000000022afe00, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CLightDirectional::GetEntityClassInternal
// strings: "light_s1", "CLight", "CPointEntity"
// globals: `guard variable for'CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo, CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo, `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo, CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo
CEntityClassInfo *__cdecl CLight::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo != 0 )
    return &CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo) == 0 )
    return &CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo;
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
    &CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo,
    "CLight",
    "light_s1",
    0,
    &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo);
  return &CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo;
}


