
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTonemapController2::~CTonemapController2  (line 30, @0x0000000001eec840, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CTonemapController2::~CTonemapController2(CTonemapController2 *const this)
{
  this->_vptr_IHandleEntity = &off_3FBB0B0;
  CBaseEntity::~CBaseEntity(this);
}


// CTonemapController2::~CTonemapController2  (line 30, @0x0000000001eec860, libserver.so)  // inlines: ~CTonemapController2
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CTonemapController2::~CTonemapController2(CTonemapController2 *const this)
{
  this->_vptr_IHandleEntity = &off_3FBB0B0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CTonemapController2::GetEntityClass  (line 32, @0x0000000001eea950, libserver.so)
CEntityClass *__cdecl CTonemapController2::GetEntityClass()
{
  return g_pEntityCTonemapController2Class;
}


// CTonemapController2::Schema_DynamicBinding  (line 32, @0x0000000001eea960, libserver.so)
// globals: CTonemapController2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTonemapController2::Schema_DynamicBinding(
        const CTonemapController2 *const this)
{
  return CTonemapController2::s_pSchemaBinding;
}


// CTonemapController2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x0000000001eea970, libserver.so)
// globals: CTonemapController2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTonemapController2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTonemapController2::CEntityInstanceEntityClass *const this)
{
  return CTonemapController2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTonemapController2::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x0000000001eea980, libserver.so)  // inlines: Destruct<CTonemapController2>
void __fastcall CTonemapController2::CEntityInstanceEntityClass::DestructInstance(
        CTonemapController2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTonemapController2::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x0000000001eea9a0, libserver.so)
void __fastcall CTonemapController2::CEntityInstanceEntityClass::FreeInstance(
        CTonemapController2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTonemapController2::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x0000000001eea9c0, libserver.so)
bool __fastcall CTonemapController2::CEntityInstanceEntityClass::CanAllocate(
        const CTonemapController2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTonemapController2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x0000000001eea9d0, libserver.so)
// globals: CTonemapController2::s_pSchemaBinding
const ISchemaBinding *__fastcall CTonemapController2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTonemapController2::CEntityInstanceEntityClass *const this)
{
  return CTonemapController2::s_pSchemaBinding;
}


// CTonemapController2::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x0000000001eebfe0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTonemapController2::CEntityInstanceEntityClass::AllocateInstance(
        CTonemapController2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 808);
  memset(v1, 0, 0x328u);
  return v1;
}


// CTonemapController2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000001eee030, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTonemapController2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTonemapController2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CTonemapController2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000001eee050, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTonemapController2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTonemapController2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTonemapController2::GetEntityClassInfo  (line 32, @0x0000000001ef11c0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal, CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::InitOptionalTables
// strings: "Entity for controlling tonemap values from the map.", "env_tonemap_controller", "CTonemapController2", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CTonemapController2::GetEntityClassInfo(void)::g_EntityCTonemapController2ClassInfo, CTonemapController2::GetEntityClassInfo(void)::g_EntityCTonemapController2ClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CTonemapController2::GetEntityClassInfo()
{
  if ( `guard variable for'CTonemapController2::GetEntityClassInfo(void)::g_EntityCTonemapController2ClassInfo != 0 )
    return &CTonemapController2::GetEntityClassInfo(void)::g_EntityCTonemapController2ClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CTonemapController2::GetEntityClassInfo(void)::g_EntityCTonemapController2ClassInfo) == 0 )
    return &CTonemapController2::GetEntityClassInfo(void)::g_EntityCTonemapController2ClassInfo;
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
    &CTonemapController2::GetEntityClassInfo(void)::g_EntityCTonemapController2ClassInfo,
    "CTonemapController2",
    "env_tonemap_controller",
    "Entity for controlling tonemap values from the map.",
    &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CTonemapController2::GetEntityClassInfo(void)::g_EntityCTonemapController2ClassInfo);
  return &CTonemapController2::GetEntityClassInfo(void)::g_EntityCTonemapController2ClassInfo;
}


// CTonemapController2::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x0000000001ef12d0, libserver.so)  // inlines: Construct<CTonemapController2>
// calls: CTonemapController2::CTonemapController2
CEntityInstance *__fastcall CTonemapController2::CEntityInstanceEntityClass::ConstructInstance(
        CTonemapController2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CTonemapController2::CTonemapController2(p);
  return p;
}


// CTonemapController2::GetEntityClassInternal  (line 32, @0x0000000001ef4b30, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "Entity for controlling tonemap values from the map.", "env_tonemap_controller", "CTonemapController2"
// globals: `guard variable for'CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class, CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CTonemapController2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTonemapController2::GetEntityClassInfo(void)::g_EntityCTonemapController2ClassInfo, CTonemapController2::GetEntityClassInfo(void)::g_EntityCTonemapController2ClassInfo
CEntityClass *__cdecl CTonemapController2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class) != 0 )
  {
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_designerName.u.m_Id = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class._vptr_CEntityClass = off_3F79390;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_ComponentOffsets.m_Size = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_AllHelpers.m_Size = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_AllHelpers.m_Memory.m_pMemory = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_instanceUnserializer.m_atomicFields,
      4);
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_classInputs.m_Size = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_classInputs.m_Memory.m_pMemory = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_classInputs.m_Memory.m_nGrowSize = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_classOutputs.m_Size = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_classOutputs.m_Memory.m_pMemory = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_requiredEHandle.m_Index = -1;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_hNetworkSerializer = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_pBaseClassInfo = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_pClassInfo = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_flags = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_nAllHelpersFlags = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_pScriptClassDesc = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_pInputs = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_nInputCount = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_pOutputs = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_nOutputCount = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_pGameClass = 0;
    CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class._vptr_CEntityClass = off_3FBA890;
    __cxa_guard_release(&`guard variable for'CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class);
    __cxa_atexit(
      CTonemapController2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class,
      &_dso_handle);
  }
  if ( g_pEntityCTonemapController2Class != 0 )
    return &CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class;
  if ( `guard variable for'CTonemapController2::GetEntityClassInfo(void)::g_EntityCTonemapController2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTonemapController2::GetEntityClassInfo(void)::g_EntityCTonemapController2ClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTonemapController2::GetEntityClassInfo(void)::g_EntityCTonemapController2ClassInfo,
      "CTonemapController2",
      "env_tonemap_controller",
      "Entity for controlling tonemap values from the map.",
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTonemapController2::GetEntityClassInfo(void)::g_EntityCTonemapController2ClassInfo);
  }
  CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_pClassInfo = &CTonemapController2::GetEntityClassInfo(void)::g_EntityCTonemapController2ClassInfo;
  CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_pBaseClassInfo = CTonemapController2::GetEntityClassInfo(void)::g_EntityCTonemapController2ClassInfo.m_pBaseClassInfo;
  g_pEntityCTonemapController2Class = &CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class;
  CTonemapController2::GetEntityClassInfo(void)::g_EntityCTonemapController2ClassInfo.m_pClass = &CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class;
  CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCTonemapController2Class->m_pComponentOverrides = 0;
  return &CTonemapController2::GetEntityClassInternal(void)::g_EntityCTonemapController2Class;
}


// CTonemapController2::UpdateTransmitState  (line 46, @0x0000000001eecb90, libserver.so)  // inlines: SetTransmitState
// calls: CNetworkTransmitComponent::SetTransmitState
int __fastcall CTonemapController2::UpdateTransmitState(CTonemapController2 *const this)
{
  return CNetworkTransmitComponent::SetTransmitState(&this->m_NetworkTransmitComponent, 4);
}


// CTonemapTrigger::~CTonemapTrigger  (line 140, @0x0000000001eed7a0, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTonemapTrigger::~CTonemapTrigger(CTonemapTrigger *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  this->m_hTouchingEntities.m_Size = 0;
  v2 = (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40BE1B0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hTouchingEntities.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTonemapTrigger::~CTonemapTrigger  (line 140, @0x0000000001eed8a0, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseToggle, ~CBaseTrigger, ~CTonemapTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTonemapTrigger::~CTonemapTrigger(CTonemapTrigger *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  this->m_hTouchingEntities.m_Size = 0;
  v2 = (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40BE1B0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hTouchingEntities.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTonemapTrigger::GetEntityClass  (line 142, @0x0000000001eea9e0, libserver.so)
CEntityClass *__cdecl CTonemapTrigger::GetEntityClass()
{
  return g_pEntityCTonemapTriggerClass;
}


// CTonemapTrigger::Schema_DynamicBinding  (line 142, @0x0000000001eea9f0, libserver.so)
// globals: CTonemapTrigger::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTonemapTrigger::Schema_DynamicBinding(const CTonemapTrigger *const this)
{
  return CTonemapTrigger::s_pSchemaBinding;
}


// CTonemapTrigger::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 142, @0x0000000001eeaa00, libserver.so)
// globals: CTonemapTrigger::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTonemapTrigger::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTonemapTrigger::CEntityInstanceEntityClass *const this)
{
  return CTonemapTrigger::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTonemapTrigger::CEntityInstanceEntityClass::DestructInstance  (line 142, @0x0000000001eeaa10, libserver.so)  // inlines: Destruct<CTonemapTrigger>
void __fastcall CTonemapTrigger::CEntityInstanceEntityClass::DestructInstance(
        CTonemapTrigger::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTonemapTrigger::CEntityInstanceEntityClass::FreeInstance  (line 142, @0x0000000001eeaa30, libserver.so)
void __fastcall CTonemapTrigger::CEntityInstanceEntityClass::FreeInstance(
        CTonemapTrigger::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTonemapTrigger::CEntityInstanceEntityClass::CanAllocate  (line 142, @0x0000000001eeaa50, libserver.so)
bool __fastcall CTonemapTrigger::CEntityInstanceEntityClass::CanAllocate(
        const CTonemapTrigger::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTonemapTrigger::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 142, @0x0000000001eeaa60, libserver.so)
// globals: CTonemapTrigger::s_pSchemaBinding
const ISchemaBinding *__fastcall CTonemapTrigger::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTonemapTrigger::CEntityInstanceEntityClass *const this)
{
  return CTonemapTrigger::s_pSchemaBinding;
}


// CTonemapTrigger::CEntityInstanceEntityClass::AllocateInstance  (line 142, @0x0000000001eec020, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTonemapTrigger::CEntityInstanceEntityClass::AllocateInstance(
        CTonemapTrigger::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1496);
  memset(v1, 0, 0x5D8u);
  return v1;
}


// CTonemapTrigger::CEntityInstanceEntityClass::ConstructInstance  (line 142, @0x0000000001eecae0, libserver.so)  // inlines: CEntityHandle, CTonemapTrigger, CUtlSymbolLarge, Construct<CTonemapTrigger>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CTonemapTrigger::CEntityInstanceEntityClass::ConstructInstance(
        CTonemapTrigger::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *(p + 185) = 0;
    *p = &off_3FBB750;
    *(p + 372) = -1;
  }
  return p;
}


// CTonemapTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 142, @0x0000000001eedc20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTonemapTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTonemapTrigger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CTonemapTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 142, @0x0000000001eedc40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTonemapTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTonemapTrigger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTonemapTrigger::GetEntityClassInternal  (line 142, @0x0000000001ef5bb0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "trigger_tonemap", "CTonemapTrigger"
// globals: `guard variable for'CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass, CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CTonemapTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTonemapTrigger::GetEntityClassInfo(void)::g_EntityCTonemapTriggerClassInfo, CTonemapTrigger::GetEntityClassInfo(void)::g_EntityCTonemapTriggerClassInfo
CEntityClass *__cdecl CTonemapTrigger::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass) != 0 )
  {
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_designerName.u.m_Id = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass._vptr_CEntityClass = off_3F79390;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_ComponentOffsets.m_Size = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_AllHelpers.m_Size = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_classInputs.m_Size = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_classOutputs.m_Size = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_requiredEHandle.m_Index = -1;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_hNetworkSerializer = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_pBaseClassInfo = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_pClassInfo = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_flags = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_nAllHelpersFlags = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_pScriptClassDesc = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_pInputs = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_nInputCount = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_pOutputs = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_nOutputCount = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_pGameClass = 0;
    CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass._vptr_CEntityClass = off_3FBA910;
    __cxa_guard_release(&`guard variable for'CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass);
    __cxa_atexit(
      CTonemapTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass,
      &_dso_handle);
  }
  if ( g_pEntityCTonemapTriggerClass != 0 )
    return &CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass;
  if ( `guard variable for'CTonemapTrigger::GetEntityClassInfo(void)::g_EntityCTonemapTriggerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTonemapTrigger::GetEntityClassInfo(void)::g_EntityCTonemapTriggerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTonemapTrigger::GetEntityClassInfo(void)::g_EntityCTonemapTriggerClassInfo,
      "CTonemapTrigger",
      "trigger_tonemap",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTonemapTrigger::GetEntityClassInfo(void)::g_EntityCTonemapTriggerClassInfo);
  }
  CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_pClassInfo = &CTonemapTrigger::GetEntityClassInfo(void)::g_EntityCTonemapTriggerClassInfo;
  CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_pBaseClassInfo = CTonemapTrigger::GetEntityClassInfo(void)::g_EntityCTonemapTriggerClassInfo.m_pBaseClassInfo;
  g_pEntityCTonemapTriggerClass = &CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass;
  CTonemapTrigger::GetEntityClassInfo(void)::g_EntityCTonemapTriggerClassInfo.m_pClass = &CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass;
  CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCTonemapTriggerClass->m_pComponentOverrides = 0;
  return &CTonemapTrigger::GetEntityClassInternal(void)::g_EntityCTonemapTriggerClass;
}


