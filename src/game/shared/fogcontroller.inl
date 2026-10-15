
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFogController::GetEntityClass  (line 40, @0x0000000001eea270, libserver.so)
CEntityClass *__cdecl CFogController::GetEntityClass()
{
  return g_pEntityCFogControllerClass;
}


// CFogController::Schema_DynamicBinding  (line 40, @0x0000000001eea280, libserver.so)
// globals: CFogController::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFogController::Schema_DynamicBinding(const CFogController *const this)
{
  return CFogController::s_pSchemaBinding;
}


// CFogController::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000001eea290, libserver.so)
// globals: CFogController::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFogController::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFogController::CEntityInstanceEntityClass *const this)
{
  return CFogController::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFogController::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000001eea2a0, libserver.so)  // inlines: Destruct<CFogController>
void __fastcall CFogController::CEntityInstanceEntityClass::DestructInstance(
        CFogController::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFogController::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000001eea2c0, libserver.so)
void __fastcall CFogController::CEntityInstanceEntityClass::FreeInstance(
        CFogController::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFogController::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000001eea2e0, libserver.so)
bool __fastcall CFogController::CEntityInstanceEntityClass::CanAllocate(
        const CFogController::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFogController::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000001eea2f0, libserver.so)
// globals: CFogController::s_pSchemaBinding
const ISchemaBinding *__fastcall CFogController::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFogController::CEntityInstanceEntityClass *const this)
{
  return CFogController::s_pSchemaBinding;
}


// CFogController::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000001eebde0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFogController::CEntityInstanceEntityClass::AllocateInstance(
        CFogController::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 880);
  memset(v1, 0, 0x370u);
  return v1;
}


// CFogController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000001eede50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFogController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFogController::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFogController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000001eede70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFogController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFogController::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFogController::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000001ef1690, libserver.so)  // inlines: Construct<CFogController>
// calls: CFogController::CFogController
CEntityInstance *__fastcall CFogController::CEntityInstanceEntityClass::ConstructInstance(
        CFogController::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFogController::CFogController(p);
  return p;
}


// CFogController::GetEntityClassInternal  (line 40, @0x0000000001ef6c40, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "env_fog_controller", "CFogController"
// globals: `guard variable for'CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass, CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFogController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFogController::GetEntityClassInfo(void)::g_EntityCFogControllerClassInfo, CFogController::GetEntityClassInfo(void)::g_EntityCFogControllerClassInfo
CEntityClass *__cdecl CFogController::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass) != 0 )
  {
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_designerName.u.m_Id = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass._vptr_CEntityClass = off_3F79390;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_ComponentOffsets.m_Size = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_AllHelpers.m_Size = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_classInputs.m_Size = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_classOutputs.m_Size = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_requiredEHandle.m_Index = -1;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_hNetworkSerializer = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_pBaseClassInfo = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_pClassInfo = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_flags = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_nAllHelpersFlags = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_pScriptClassDesc = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_pInputs = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_nInputCount = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_pOutputs = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_nOutputCount = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_pGameClass = 0;
    CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass._vptr_CEntityClass = off_3FB6330;
    __cxa_guard_release(&`guard variable for'CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass);
    __cxa_atexit(
      CFogController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass,
      &_dso_handle);
  }
  if ( g_pEntityCFogControllerClass != 0 )
    return &CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass;
  if ( `guard variable for'CFogController::GetEntityClassInfo(void)::g_EntityCFogControllerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFogController::GetEntityClassInfo(void)::g_EntityCFogControllerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFogController::GetEntityClassInfo(void)::g_EntityCFogControllerClassInfo,
      "CFogController",
      "env_fog_controller",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFogController::GetEntityClassInfo(void)::g_EntityCFogControllerClassInfo);
  }
  CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_pClassInfo = &CFogController::GetEntityClassInfo(void)::g_EntityCFogControllerClassInfo;
  CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_pBaseClassInfo = CFogController::GetEntityClassInfo(void)::g_EntityCFogControllerClassInfo.m_pBaseClassInfo;
  g_pEntityCFogControllerClass = &CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass;
  CFogController::GetEntityClassInfo(void)::g_EntityCFogControllerClassInfo.m_pClass = &CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass;
  CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCFogControllerClass->m_pComponentOverrides = 0;
  return &CFogController::GetEntityClassInternal(void)::g_EntityCFogControllerClass;
}


// CFogController::NetworkVar_m_fog::NetworkStateChanged  (line 87, @0x0000000001eea300, libserver.so)  // inlines: DispatchNetworkStateChanged<CFogController>
void __fastcall CFogController::NetworkVar_m_fog::NetworkStateChanged(CFogController::NetworkVar_m_fog *const this)
{
  (*(*(this - 97) + 168LL))(this - 776);
}


// CFogController::NetworkVar_m_fog::NetworkStateChangedLog  (line 87, @0x0000000001eea320, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CFogController>
void __fastcall CFogController::NetworkVar_m_fog::NetworkStateChangedLog(
        const CFogController::NetworkVar_m_fog *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 97) + 184LL))(this - 776, pVarName, pMsg);
}


// CFogController::NetworkVar_m_fog::NetworkStateChanged  (line 87, @0x0000000001eea340, libserver.so)  // inlines: DispatchNetworkStateChanged<CFogController>
// callers: CFogController::CFogController
void __fastcall CFogController::NetworkVar_m_fog::NetworkStateChanged(
        CFogController::NetworkVar_m_fog *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 97) + 176LL))(this - 776, nLocalOffset + 776, nArrayIndex, nPathIndex.m_Value);
}


// CFogSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 100, @0x0000000001eea370, libserver.so)
void __fastcall CFogSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CFogSystem *const this)
{
  ;
}


// CFogSystem::DoesGameSystemReallocate  (line 100, @0x0000000001eea380, libserver.so)
// globals: CFogSystem::sm_Factory
bool __fastcall CFogSystem::DoesGameSystemReallocate(const CFogSystem *const this)
{
  return (*(CFogSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CFogSystem::sm_Factory);
}


// CFogSystem::SetGameSystemGlobalPtrs  (line 100, @0x0000000001eea3a0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CFogSystem::sm_Factory
void __fastcall CFogSystem::SetGameSystemGlobalPtrs(CFogSystem *const this, void *pValue)
{
  if ( CFogSystem::sm_Factory != 0 )
    (*(CFogSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CFogSystem::sm_Factory, pValue);
}


// CFogSystem::~CFogSystem  (line 110, @0x0000000001eec5f0, libserver.so)  // inlines: Set, operator=, ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CFogSystem::~CFogSystem(CFogSystem *const this)
{
  this->m_hMasterController.m_Index = -1;
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CFogSystem::~CFogSystem  (line 110, @0x0000000001eec610, libserver.so)  // inlines: Set, operator=, ~CAutoGameSystem, ~CFogSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CFogSystem::~CFogSystem(CFogSystem *const this)
{
  this->m_hMasterController.m_Index = -1;
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


