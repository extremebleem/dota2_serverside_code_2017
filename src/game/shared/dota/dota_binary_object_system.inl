
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BinaryObject::~CDOTA_BinaryObject  (line 24, @0x0000000002499880, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDOTA_BinaryObject::~CDOTA_BinaryObject(CDOTA_BinaryObject *const this)
{
  this->_vptr_IHandleEntity = &off_40DD8F0;
  CBaseEntity::~CBaseEntity(this);
}


// CDOTA_BinaryObject::~CDOTA_BinaryObject  (line 24, @0x00000000024998a0, libserver.so)  // inlines: ~CDOTA_BinaryObject
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDOTA_BinaryObject::~CDOTA_BinaryObject(CDOTA_BinaryObject *const this)
{
  this->_vptr_IHandleEntity = &off_40DD8F0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BinaryObject::Schema_DynamicBinding  (line 26, @0x0000000002496ea0, libserver.so)
// globals: CDOTA_BinaryObject::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BinaryObject::Schema_DynamicBinding(
        const CDOTA_BinaryObject *const this)
{
  return CDOTA_BinaryObject::s_pSchemaBinding;
}


// CDOTA_BinaryObject::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 26, @0x0000000002496eb0, libserver.so)
// globals: CDOTA_BinaryObject::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BinaryObject::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BinaryObject::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BinaryObject::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BinaryObject::CEntityInstanceEntityClass::DestructInstance  (line 26, @0x0000000002496ec0, libserver.so)  // inlines: Destruct<CDOTA_BinaryObject>
void __fastcall CDOTA_BinaryObject::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BinaryObject::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BinaryObject::CEntityInstanceEntityClass::FreeInstance  (line 26, @0x0000000002496ee0, libserver.so)
void __fastcall CDOTA_BinaryObject::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BinaryObject::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BinaryObject::CEntityInstanceEntityClass::CanAllocate  (line 26, @0x0000000002496f00, libserver.so)
bool __fastcall CDOTA_BinaryObject::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BinaryObject::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BinaryObject::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 26, @0x0000000002496f10, libserver.so)
// globals: CDOTA_BinaryObject::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BinaryObject::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BinaryObject::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BinaryObject::s_pSchemaBinding;
}


// CDOTA_BinaryObject::CEntityInstanceEntityClass::AllocateInstance  (line 26, @0x0000000002499300, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BinaryObject::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BinaryObject::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CDOTA_BinaryObject::CEntityInstanceEntityClass::ConstructInstance  (line 26, @0x0000000002499780, libserver.so)  // inlines: CDOTA_BinaryObject, Construct<CDOTA_BinaryObject>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDOTA_BinaryObject::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BinaryObject::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 776) = 0;
    *p = &off_40DD8F0;
    *(p + 195) = -1;
  }
  return p;
}


// CDOTA_BinaryObject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 26, @0x000000000249d7c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BinaryObject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BinaryObject::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BinaryObject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 26, @0x000000000249d7e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BinaryObject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BinaryObject::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BinaryObject::GetEntityClassInternal  (line 26, @0x00000000024a9820, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
// strings: "CDOTA_BinaryObject"
// globals: `guard variable for'CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass, CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BinaryObject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo, CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo
CEntityClass *__cdecl CDOTA_BinaryObject::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass) != 0 )
  {
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_designerName.u.m_Id = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_AllHelpers.m_Size = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_classInputs.m_Size = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_classOutputs.m_Size = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_hNetworkSerializer = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pBaseClassInfo = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pClassInfo = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_flags = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_nAllHelpersFlags = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pScriptClassDesc = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pInputs = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_nInputCount = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pOutputs = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_nOutputCount = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pGameClass = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass._vptr_CEntityClass = off_40DC9D0;
    __cxa_guard_release(&`guard variable for'CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass);
    __cxa_atexit(
      CDOTA_BinaryObject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BinaryObjectClass != 0 )
    return &CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass;
  if ( `guard variable for'CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo,
      "CDOTA_BinaryObject",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo);
  }
  CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pClassInfo = &CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo;
  CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pBaseClassInfo = CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BinaryObjectClass = &CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass;
  CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo.m_pClass = &CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass;
  CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTA_BinaryObjectClass->m_pComponentOverrides = 0;
  return &CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass;
}


// CDOTA_BinaryObjectSystem::~CDOTA_BinaryObjectSystem  (line 46, @0x00000000024a43d0, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate, CUtlMemory<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate, int> >::RemoveAll, IGameSystem::~IGameSystem, CUtlMemory<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate, int>::Purge, CUtlMemory<CDOTA_BinaryObject*, int>::Purge
void __fastcall CDOTA_BinaryObjectSystem::~CDOTA_BinaryObjectSystem(CDOTA_BinaryObjectSystem *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = &off_40DDF90;
  CUtlVectorBase<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate,CUtlMemory<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate,int>>::RemoveAll(&this->m_PendingActivates);
  if ( (this->m_PendingActivates.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate,int>::Purge(&this->m_PendingActivates.m_Memory),
        (this->m_PendingActivates.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_BinaryObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_BinaryObjects.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate,int>::Purge(&this->m_PendingActivates.m_Memory);
    v2 = (this->m_BinaryObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_BinaryObjects.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<CDOTA_BinaryObject *,int>::Purge(&this->m_BinaryObjects.m_Memory);
  if ( (this->m_BinaryObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CDOTA_BinaryObject *,int>::Purge(&this->m_BinaryObjects.m_Memory);
LABEL_3:
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CDOTA_BinaryObjectSystem::~CDOTA_BinaryObjectSystem  (line 46, @0x00000000024a4470, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CDOTA_BinaryObjectSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate, CUtlMemory<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate, int> >::RemoveAll, IGameSystem::~IGameSystem, operator delete, CUtlMemory<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate, int>::Purge, CUtlMemory<CDOTA_BinaryObject*, int>::Purge
void __fastcall CDOTA_BinaryObjectSystem::~CDOTA_BinaryObjectSystem(CDOTA_BinaryObjectSystem *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = &off_40DDF90;
  CUtlVectorBase<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate,CUtlMemory<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate,int>>::RemoveAll(&this->m_PendingActivates);
  if ( (this->m_PendingActivates.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate,int>::Purge(&this->m_PendingActivates.m_Memory),
        (this->m_PendingActivates.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_BinaryObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_BinaryObjects.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate,int>::Purge(&this->m_PendingActivates.m_Memory);
    v2 = (this->m_BinaryObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_BinaryObjects.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<CDOTA_BinaryObject *,int>::Purge(&this->m_BinaryObjects.m_Memory);
  if ( (this->m_BinaryObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CDOTA_BinaryObject *,int>::Purge(&this->m_BinaryObjects.m_Memory);
LABEL_3:
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTA_BinaryObjectSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 48, @0x0000000002496f20, libserver.so)
void __fastcall CDOTA_BinaryObjectSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTA_BinaryObjectSystem *const this)
{
  ;
}


// CDOTA_BinaryObjectSystem::DoesGameSystemReallocate  (line 48, @0x0000000002496f30, libserver.so)
// globals: CDOTA_BinaryObjectSystem::sm_Factory
bool __fastcall CDOTA_BinaryObjectSystem::DoesGameSystemReallocate(const CDOTA_BinaryObjectSystem *const this)
{
  return (*(CDOTA_BinaryObjectSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_BinaryObjectSystem::sm_Factory);
}


// CDOTA_BinaryObjectSystem::SetGameSystemGlobalPtrs  (line 48, @0x0000000002496f50, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_BinaryObjectSystem::sm_Factory
void __fastcall CDOTA_BinaryObjectSystem::SetGameSystemGlobalPtrs(CDOTA_BinaryObjectSystem *const this, void *pValue)
{
  if ( CDOTA_BinaryObjectSystem::sm_Factory != 0 )
    (*(CDOTA_BinaryObjectSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CDOTA_BinaryObjectSystem::sm_Factory,
      pValue);
}


