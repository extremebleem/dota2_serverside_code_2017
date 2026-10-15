
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSkyCamera::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002002ad0, libserver.so)
// globals: CSkyCamera::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSkyCamera::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CSkyCamera::CEntityInstanceEntityClass *const this)
{
  return CSkyCamera::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CSkyCamera::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002002ae0, libserver.so)  // inlines: Destruct<CSkyCamera>
void __fastcall CSkyCamera::CEntityInstanceEntityClass::DestructInstance(
        CSkyCamera::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CSkyCamera::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002002b00, libserver.so)
void __fastcall CSkyCamera::CEntityInstanceEntityClass::FreeInstance(
        CSkyCamera::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CSkyCamera::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002002b20, libserver.so)
bool __fastcall CSkyCamera::CEntityInstanceEntityClass::CanAllocate(
        const CSkyCamera::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CSkyCamera::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002002b30, libserver.so)
// globals: CSkyCamera::s_pSchemaBinding
const ISchemaBinding *__fastcall CSkyCamera::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CSkyCamera::CEntityInstanceEntityClass *const this)
{
  return CSkyCamera::s_pSchemaBinding;
}


// CSkyCamera::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002004df0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CSkyCamera::CEntityInstanceEntityClass::AllocateInstance(
        CSkyCamera::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CSkyCamera::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002005290, libserver.so)  // inlines: Construct<CSkyCamera>
// calls: CSkyCamera::CSkyCamera
CEntityInstance *__fastcall CSkyCamera::CEntityInstanceEntityClass::ConstructInstance(
        CSkyCamera::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CSkyCamera::CSkyCamera(p);
  return p;
}


// CSkyCamera::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002007360, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CSkyCamera::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSkyCamera::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CSkyCamera::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002007380, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CSkyCamera::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSkyCamera::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CSkyCamera::GetEntityClassInternal  (line 30, @0x0000000002010520, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp
// strings: "sky_camera", "CSkyCamera", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass, CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CSkyCamera::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CSkyCamera::GetEntityClassInfo(void)::g_EntityCSkyCameraClassInfo, CSkyCamera::GetEntityClassInfo(void)::g_EntityCSkyCameraClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo (11 total)
CEntityClass *__cdecl CSkyCamera::GetEntityClassInternal()
{
  if ( `guard variable for'CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass == 0
    && __cxa_guard_acquire(&`guard variable for'CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass) != 0 )
  {
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_designerName.u.m_Id = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass._vptr_CEntityClass = off_3F79390;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_ComponentOffsets.m_Size = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_AllHelpers.m_Size = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_instanceUnserializer.m_atomicFields,
      4);
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_classInputs.m_Size = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_classInputs.m_Memory.m_pMemory = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_classOutputs.m_Size = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_requiredEHandle.m_Index = -1;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_hNetworkSerializer = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_pBaseClassInfo = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_pClassInfo = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_flags = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_nAllHelpersFlags = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_pScriptClassDesc = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_pInputs = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_nInputCount = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_pOutputs = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_nOutputCount = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_pGameClass = 0;
    CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass._vptr_CEntityClass = off_3FE08D0;
    __cxa_guard_release(&`guard variable for'CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass);
    __cxa_atexit(
      CSkyCamera::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass,
      &_dso_handle);
  }
  if ( g_pEntityCSkyCameraClass != 0 )
    return &CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass;
  if ( `guard variable for'CSkyCamera::GetEntityClassInfo(void)::g_EntityCSkyCameraClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CSkyCamera::GetEntityClassInfo(void)::g_EntityCSkyCameraClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
      {
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
          "CGameEntity",
          0,
          0,
          &g_EntityRootClassInfo);
        __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
        "CBaseEntity",
        0,
        0,
        &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CSkyCamera::GetEntityClassInfo(void)::g_EntityCSkyCameraClassInfo,
      "CSkyCamera",
      "sky_camera",
      0,
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CSkyCamera::GetEntityClassInfo(void)::g_EntityCSkyCameraClassInfo);
  }
  CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_pClassInfo = &CSkyCamera::GetEntityClassInfo(void)::g_EntityCSkyCameraClassInfo;
  CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_pBaseClassInfo = CSkyCamera::GetEntityClassInfo(void)::g_EntityCSkyCameraClassInfo.m_pBaseClassInfo;
  g_pEntityCSkyCameraClass = &CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass;
  CSkyCamera::GetEntityClassInfo(void)::g_EntityCSkyCameraClassInfo.m_pClass = &CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass;
  CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCSkyCameraClass->m_pComponentOverrides = 0;
  return &CSkyCamera::GetEntityClassInternal(void)::g_EntityCSkyCameraClass;
}


// CSkyCamera::GetEntityClass  (line 30, @0x00000000023a9130, libserver.so)
CEntityClass *__cdecl CSkyCamera::GetEntityClass()
{
  return g_pEntityCSkyCameraClass;
}


// CSkyCamera::Schema_DynamicBinding  (line 30, @0x00000000023ab1c0, libserver.so)
// calls: CSkyCamera::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CSkyCamera::Schema_DynamicBinding(const CSkyCamera *const this)
{
  CSkyCamera::Schema_VerifyBindingIsRegistered();
  return CSkyCamera::s_pSchemaBinding;
}


// CSkyCamera::NetworkVar_m_skyboxData::NetworkStateChanged  (line 55, @0x00000000023a9140, libserver.so)  // inlines: DispatchNetworkStateChanged<CSkyCamera>
void __fastcall CSkyCamera::NetworkVar_m_skyboxData::NetworkStateChanged(
        CSkyCamera::NetworkVar_m_skyboxData *const this)
{
  (*(*(this - 97) + 168LL))(this - 776);
}


// CSkyCamera::NetworkVar_m_skyboxData::NetworkStateChangedLog  (line 55, @0x00000000023a9160, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CSkyCamera>
void __fastcall CSkyCamera::NetworkVar_m_skyboxData::NetworkStateChangedLog(
        const CSkyCamera::NetworkVar_m_skyboxData *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 97) + 184LL))(this - 776, pVarName, pMsg);
}


// CSkyCamera::NetworkVar_m_skyboxData::NetworkStateChanged  (line 55, @0x00000000023a9180, libserver.so)  // inlines: DispatchNetworkStateChanged<CSkyCamera>
void __fastcall CSkyCamera::NetworkVar_m_skyboxData::NetworkStateChanged(
        CSkyCamera::NetworkVar_m_skyboxData *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 97) + 176LL))(this - 776, nLocalOffset + 776, nArrayIndex, nPathIndex.m_Value);
}


