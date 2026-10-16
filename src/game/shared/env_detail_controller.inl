
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvDetailController::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000001f0f240, libserver.so)
// globals: CEnvDetailController::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvDetailController::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvDetailController::CEntityInstanceEntityClass *const this)
{
  return CEnvDetailController::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvDetailController::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000001f0f250, libserver.so)  // inlines: Destruct<CEnvDetailController>
void __fastcall CEnvDetailController::CEntityInstanceEntityClass::DestructInstance(
        CEnvDetailController::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvDetailController::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000001f0f270, libserver.so)
void __fastcall CEnvDetailController::CEntityInstanceEntityClass::FreeInstance(
        CEnvDetailController::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvDetailController::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000001f0f290, libserver.so)
bool __fastcall CEnvDetailController::CEntityInstanceEntityClass::CanAllocate(
        const CEnvDetailController::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvDetailController::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000001f0f2a0, libserver.so)
// globals: CEnvDetailController::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvDetailController::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvDetailController::CEntityInstanceEntityClass *const this)
{
  return CEnvDetailController::s_pSchemaBinding;
}


// CEnvDetailController::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000001f10e10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvDetailController::CEntityInstanceEntityClass::AllocateInstance(
        CEnvDetailController::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CEnvDetailController::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000001f11150, libserver.so)  // inlines: Construct<CEnvDetailController>
// calls: CEnvDetailController::CEnvDetailController
CEntityInstance *__fastcall CEnvDetailController::CEntityInstanceEntityClass::ConstructInstance(
        CEnvDetailController::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CEnvDetailController::CEnvDetailController(p);
  return p;
}


// CEnvDetailController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000001f12c20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvDetailController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvDetailController::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvDetailController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000001f12c40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvDetailController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvDetailController::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvDetailController::GetEntityClassInternal  (line 29, @0x0000000001f17e50, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_game_shared_header_files_01.cpp
// strings: "env_detail_controller", "CEnvDetailController"
// globals: `guard variable for'CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass, CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CEnvDetailController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvDetailController::GetEntityClassInfo(void)::g_EntityCEnvDetailControllerClassInfo, CEnvDetailController::GetEntityClassInfo(void)::g_EntityCEnvDetailControllerClassInfo
CEntityClass *__cdecl CEnvDetailController::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass) != 0 )
  {
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_designerName.u.m_Id = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass._vptr_CEntityClass = off_3F79390;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_ComponentOffsets.m_Size = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_AllHelpers.m_Size = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_classInputs.m_Size = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_classOutputs.m_Size = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_requiredEHandle.m_Index = -1;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_hNetworkSerializer = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_pBaseClassInfo = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_pClassInfo = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_flags = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_nAllHelpersFlags = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_pScriptClassDesc = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_pInputs = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_nInputCount = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_pOutputs = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_nOutputCount = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_pGameClass = 0;
    CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass._vptr_CEntityClass = off_3FC5BF0;
    __cxa_guard_release(&`guard variable for'CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass);
    __cxa_atexit(
      CEnvDetailController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvDetailControllerClass != 0 )
    return &CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass;
  if ( `guard variable for'CEnvDetailController::GetEntityClassInfo(void)::g_EntityCEnvDetailControllerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvDetailController::GetEntityClassInfo(void)::g_EntityCEnvDetailControllerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvDetailController::GetEntityClassInfo(void)::g_EntityCEnvDetailControllerClassInfo,
      "CEnvDetailController",
      "env_detail_controller",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvDetailController::GetEntityClassInfo(void)::g_EntityCEnvDetailControllerClassInfo);
  }
  CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_pClassInfo = &CEnvDetailController::GetEntityClassInfo(void)::g_EntityCEnvDetailControllerClassInfo;
  CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_pBaseClassInfo = CEnvDetailController::GetEntityClassInfo(void)::g_EntityCEnvDetailControllerClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvDetailControllerClass = &CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass;
  CEnvDetailController::GetEntityClassInfo(void)::g_EntityCEnvDetailControllerClassInfo.m_pClass = &CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass;
  CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvDetailControllerClass->m_pComponentOverrides = 0;
  return &CEnvDetailController::GetEntityClassInternal(void)::g_EntityCEnvDetailControllerClass;
}


// CEnvDetailController::Schema_DynamicBinding  (line 29, @0x00000000021e1980, libserver.so)
// calls: CEnvDetailController::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEnvDetailController::Schema_DynamicBinding(
        const CEnvDetailController *const this)
{
  CEnvDetailController::Schema_VerifyBindingIsRegistered();
  return CEnvDetailController::s_pSchemaBinding;
}


