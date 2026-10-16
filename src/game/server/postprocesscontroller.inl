
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPostProcessController::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 25, @0x0000000002002420, libserver.so)
// globals: CPostProcessController::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPostProcessController::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPostProcessController::CEntityInstanceEntityClass *const this)
{
  return CPostProcessController::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPostProcessController::CEntityInstanceEntityClass::DestructInstance  (line 25, @0x0000000002002430, libserver.so)  // inlines: Destruct<CPostProcessController>
void __fastcall CPostProcessController::CEntityInstanceEntityClass::DestructInstance(
        CPostProcessController::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPostProcessController::CEntityInstanceEntityClass::FreeInstance  (line 25, @0x0000000002002450, libserver.so)
void __fastcall CPostProcessController::CEntityInstanceEntityClass::FreeInstance(
        CPostProcessController::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPostProcessController::CEntityInstanceEntityClass::CanAllocate  (line 25, @0x0000000002002470, libserver.so)
bool __fastcall CPostProcessController::CEntityInstanceEntityClass::CanAllocate(
        const CPostProcessController::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPostProcessController::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 25, @0x0000000002002480, libserver.so)
// globals: CPostProcessController::s_pSchemaBinding
const ISchemaBinding *__fastcall CPostProcessController::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPostProcessController::CEntityInstanceEntityClass *const this)
{
  return CPostProcessController::s_pSchemaBinding;
}


// CPostProcessController::CEntityInstanceEntityClass::AllocateInstance  (line 25, @0x0000000002004a70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPostProcessController::CEntityInstanceEntityClass::AllocateInstance(
        CPostProcessController::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 816);
  memset(v1, 0, 0x330u);
  return v1;
}


// CPostProcessController::CEntityInstanceEntityClass::ConstructInstance  (line 25, @0x0000000002005110, libserver.so)  // inlines: Construct<CPostProcessController>
// calls: CPostProcessController::CPostProcessController
CEntityInstance *__fastcall CPostProcessController::CEntityInstanceEntityClass::ConstructInstance(
        CPostProcessController::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPostProcessController::CPostProcessController(p);
  return p;
}


// CPostProcessController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 25, @0x00000000020072c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPostProcessController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPostProcessController::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPostProcessController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 25, @0x00000000020072e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPostProcessController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPostProcessController::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPostProcessController::GetEntityClassInternal  (line 25, @0x000000000200fe80, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp
// strings: "postprocess_controller", "CPostProcessController"
// globals: `guard variable for'CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass, CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPostProcessController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPostProcessController::GetEntityClassInfo(void)::g_EntityCPostProcessControllerClassInfo, CPostProcessController::GetEntityClassInfo(void)::g_EntityCPostProcessControllerClassInfo
CEntityClass *__cdecl CPostProcessController::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass) != 0 )
  {
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_designerName.u.m_Id = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass._vptr_CEntityClass = off_3F79390;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_ComponentOffsets.m_Size = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_AllHelpers.m_Size = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_classInputs.m_Size = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_classOutputs.m_Size = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_requiredEHandle.m_Index = -1;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_hNetworkSerializer = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_pBaseClassInfo = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_pClassInfo = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_flags = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_nAllHelpersFlags = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_pScriptClassDesc = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_pInputs = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_nInputCount = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_pOutputs = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_nOutputCount = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_pGameClass = 0;
    CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass._vptr_CEntityClass = off_3FDE4B0;
    __cxa_guard_release(&`guard variable for'CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass);
    __cxa_atexit(
      CPostProcessController::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass,
      &_dso_handle);
  }
  if ( g_pEntityCPostProcessControllerClass != 0 )
    return &CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass;
  if ( `guard variable for'CPostProcessController::GetEntityClassInfo(void)::g_EntityCPostProcessControllerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPostProcessController::GetEntityClassInfo(void)::g_EntityCPostProcessControllerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPostProcessController::GetEntityClassInfo(void)::g_EntityCPostProcessControllerClassInfo,
      "CPostProcessController",
      "postprocess_controller",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPostProcessController::GetEntityClassInfo(void)::g_EntityCPostProcessControllerClassInfo);
  }
  CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_pClassInfo = &CPostProcessController::GetEntityClassInfo(void)::g_EntityCPostProcessControllerClassInfo;
  CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_pBaseClassInfo = CPostProcessController::GetEntityClassInfo(void)::g_EntityCPostProcessControllerClassInfo.m_pBaseClassInfo;
  g_pEntityCPostProcessControllerClass = &CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass;
  CPostProcessController::GetEntityClassInfo(void)::g_EntityCPostProcessControllerClassInfo.m_pClass = &CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass;
  CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPostProcessControllerClass->m_pComponentOverrides = 0;
  return &CPostProcessController::GetEntityClassInternal(void)::g_EntityCPostProcessControllerClass;
}


// CPostProcessController::GetEntityClass  (line 25, @0x0000000002370600, libserver.so)
CEntityClass *__cdecl CPostProcessController::GetEntityClass()
{
  return g_pEntityCPostProcessControllerClass;
}


// CPostProcessController::Schema_DynamicBinding  (line 25, @0x0000000002372d20, libserver.so)
// calls: CPostProcessController::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPostProcessController::Schema_DynamicBinding(
        const CPostProcessController *const this)
{
  CPostProcessController::Schema_VerifyBindingIsRegistered();
  return CPostProcessController::s_pSchemaBinding;
}


// CPostProcessSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 78, @0x0000000002370610, libserver.so)
void __fastcall CPostProcessSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CPostProcessSystem *const this)
{
  ;
}


// CPostProcessSystem::DoesGameSystemReallocate  (line 78, @0x0000000002370620, libserver.so)
// globals: CPostProcessSystem::sm_Factory
bool __fastcall CPostProcessSystem::DoesGameSystemReallocate(const CPostProcessSystem *const this)
{
  return (*(CPostProcessSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CPostProcessSystem::sm_Factory);
}


// CPostProcessSystem::SetGameSystemGlobalPtrs  (line 78, @0x0000000002370640, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CPostProcessSystem::sm_Factory
void __fastcall CPostProcessSystem::SetGameSystemGlobalPtrs(CPostProcessSystem *const this, void *pValue)
{
  if ( CPostProcessSystem::sm_Factory != 0 )
    (*(CPostProcessSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CPostProcessSystem::sm_Factory, pValue);
}


// CPostProcessSystem::~CPostProcessSystem  (line 87, @0x0000000002374600, libserver.so)  // inlines: Set, StopListeningForAllEvents, operator=, ~CAutoGameSystem, ~CGameEventListener, ~IGameEventListener2
// calls: IGameSystem::~IGameSystem
void __fastcall CPostProcessSystem::~CPostProcessSystem(CPostProcessSystem *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = off_40965B0;  // vptr: CPostProcessSystem
  v2 = !this->m_bRegisteredForEvents;
  this->m_hMasterController.m_Index = -1;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CPostProcessSystem::~CPostProcessSystem  (line 87, @0x0000000002374760, libserver.so)  // inlines: Set, StopListeningForAllEvents, operator=, ~CAutoGameSystem, ~CGameEventListener, ~CPostProcessSystem, ~IGameEventListener2
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CPostProcessSystem::~CPostProcessSystem(CPostProcessSystem *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = off_40965B0;  // vptr: CPostProcessSystem
  v2 = !this->m_bRegisteredForEvents;
  this->m_hMasterController.m_Index = -1;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


