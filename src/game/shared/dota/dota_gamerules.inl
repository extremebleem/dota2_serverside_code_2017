
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAGameEvents::~CDOTAGameEvents  (line 284, @0x0000000002555800, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDOTAGameEvents::~CDOTAGameEvents(CDOTAGameEvents *const this)
{
  this->_vptr_IHandleEntity = &off_40F99B0;
  CBaseEntity::~CBaseEntity(this);
}


// CDOTAGameEvents::~CDOTAGameEvents  (line 284, @0x0000000002555820, libserver.so)  // inlines: ~CDOTAGameEvents
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDOTAGameEvents::~CDOTAGameEvents(CDOTAGameEvents *const this)
{
  this->_vptr_IHandleEntity = &off_40F99B0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTAGameEvents::GetEntityClass  (line 286, @0x00000000025520a0, libserver.so)
CEntityClass *__cdecl CDOTAGameEvents::GetEntityClass()
{
  return g_pEntityCDOTAGameEventsClass;
}


// CDOTAGameEvents::Schema_DynamicBinding  (line 286, @0x00000000025520b0, libserver.so)
// globals: CDOTAGameEvents::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAGameEvents::Schema_DynamicBinding(const CDOTAGameEvents *const this)
{
  return CDOTAGameEvents::s_pSchemaBinding;
}


// CDOTAGameEvents::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 286, @0x00000000025520c0, libserver.so)
// globals: CDOTAGameEvents::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAGameEvents::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTAGameEvents::CEntityInstanceEntityClass *const this)
{
  return CDOTAGameEvents::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTAGameEvents::CEntityInstanceEntityClass::DestructInstance  (line 286, @0x00000000025520d0, libserver.so)  // inlines: Destruct<CDOTAGameEvents>
void __fastcall CDOTAGameEvents::CEntityInstanceEntityClass::DestructInstance(
        CDOTAGameEvents::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTAGameEvents::CEntityInstanceEntityClass::FreeInstance  (line 286, @0x00000000025520f0, libserver.so)
void __fastcall CDOTAGameEvents::CEntityInstanceEntityClass::FreeInstance(
        CDOTAGameEvents::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTAGameEvents::CEntityInstanceEntityClass::CanAllocate  (line 286, @0x0000000002552110, libserver.so)
bool __fastcall CDOTAGameEvents::CEntityInstanceEntityClass::CanAllocate(
        const CDOTAGameEvents::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTAGameEvents::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 286, @0x0000000002552120, libserver.so)
// globals: CDOTAGameEvents::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTAGameEvents::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTAGameEvents::CEntityInstanceEntityClass *const this)
{
  return CDOTAGameEvents::s_pSchemaBinding;
}


// CDOTAGameEvents::CEntityInstanceEntityClass::AllocateInstance  (line 286, @0x0000000002555310, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTAGameEvents::CEntityInstanceEntityClass::AllocateInstance(
        CDOTAGameEvents::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTAGameEvents::CEntityInstanceEntityClass::ConstructInstance  (line 286, @0x00000000025555a0, libserver.so)  // inlines: CDOTAGameEvents, CEntityIOOutput, Construct<CDOTAGameEvents>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDOTAGameEvents::CEntityInstanceEntityClass::ConstructInstance(
        CDOTAGameEvents::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40F99B0;
    *(p + 97) = off_3F7C190;
    *(p + 100) = off_3F7C190;
    *(p + 103) = off_3F7C190;
    *(p + 106) = off_3F7C190;
    *(p + 109) = off_3F7C190;
    *(p + 112) = off_3F7C190;
  }
  return p;
}


// CDOTAGameEvents::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 286, @0x00000000025607c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTAGameEvents::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTAGameEvents::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTAGameEvents::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 286, @0x00000000025607e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTAGameEvents::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTAGameEvents::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTAGameEvents::GetEntityClassInfo  (line 286, @0x0000000002567ad0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CDOTACustomGameEvents::GetEntityClassInternal
// strings: "ent_dota_game_events", "CDOTAGameEvents", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CDOTAGameEvents::GetEntityClassInfo(void)::g_EntityCDOTAGameEventsClassInfo, CDOTAGameEvents::GetEntityClassInfo(void)::g_EntityCDOTAGameEventsClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CDOTAGameEvents::GetEntityClassInfo()
{
  if ( `guard variable for'CDOTAGameEvents::GetEntityClassInfo(void)::g_EntityCDOTAGameEventsClassInfo != 0 )
    return &CDOTAGameEvents::GetEntityClassInfo(void)::g_EntityCDOTAGameEventsClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTAGameEvents::GetEntityClassInfo(void)::g_EntityCDOTAGameEventsClassInfo) == 0 )
    return &CDOTAGameEvents::GetEntityClassInfo(void)::g_EntityCDOTAGameEventsClassInfo;
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
    &CDOTAGameEvents::GetEntityClassInfo(void)::g_EntityCDOTAGameEventsClassInfo,
    "CDOTAGameEvents",
    "ent_dota_game_events",
    0,
    &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTAGameEvents::GetEntityClassInfo(void)::g_EntityCDOTAGameEventsClassInfo);
  return &CDOTAGameEvents::GetEntityClassInfo(void)::g_EntityCDOTAGameEventsClassInfo;
}


// CDOTAGameEvents::GetEntityClassInternal  (line 286, @0x00000000025751b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
// strings: "ent_dota_game_events", "CDOTAGameEvents"
// globals: `guard variable for'CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass, CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTAGameEvents::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTAGameEvents::GetEntityClassInfo(void)::g_EntityCDOTAGameEventsClassInfo, CDOTAGameEvents::GetEntityClassInfo(void)::g_EntityCDOTAGameEventsClassInfo
CEntityClass *__cdecl CDOTAGameEvents::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass) != 0 )
  {
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_designerName.u.m_Id = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass._vptr_CEntityClass = off_3F79390;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_ComponentOffsets.m_Size = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_AllHelpers.m_Size = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_classInputs.m_Size = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_classOutputs.m_Size = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_requiredEHandle.m_Index = -1;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_hNetworkSerializer = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_pBaseClassInfo = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_pClassInfo = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_flags = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_nAllHelpersFlags = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_pScriptClassDesc = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_pInputs = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_nInputCount = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_pOutputs = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_nOutputCount = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_pGameClass = 0;
    CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass._vptr_CEntityClass = off_40F5A10;
    __cxa_guard_release(&`guard variable for'CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass);
    __cxa_atexit(
      CDOTAGameEvents::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTAGameEventsClass != 0 )
    return &CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass;
  if ( `guard variable for'CDOTAGameEvents::GetEntityClassInfo(void)::g_EntityCDOTAGameEventsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAGameEvents::GetEntityClassInfo(void)::g_EntityCDOTAGameEventsClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTAGameEvents::GetEntityClassInfo(void)::g_EntityCDOTAGameEventsClassInfo,
      "CDOTAGameEvents",
      "ent_dota_game_events",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTAGameEvents::GetEntityClassInfo(void)::g_EntityCDOTAGameEventsClassInfo);
  }
  CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_pClassInfo = &CDOTAGameEvents::GetEntityClassInfo(void)::g_EntityCDOTAGameEventsClassInfo;
  CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_pBaseClassInfo = CDOTAGameEvents::GetEntityClassInfo(void)::g_EntityCDOTAGameEventsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTAGameEventsClass = &CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass;
  CDOTAGameEvents::GetEntityClassInfo(void)::g_EntityCDOTAGameEventsClassInfo.m_pClass = &CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass;
  CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTAGameEventsClass->m_pComponentOverrides = 0;
  return &CDOTAGameEvents::GetEntityClassInternal(void)::g_EntityCDOTAGameEventsClass;
}


// CDOTACustomGameEvents::~CDOTACustomGameEvents  (line 329, @0x0000000002555850, libserver.so)  // inlines: ~CDOTAGameEvents
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDOTACustomGameEvents::~CDOTACustomGameEvents(CDOTACustomGameEvents *const this)
{
  this->_vptr_IHandleEntity = &off_40F99B0;
  CBaseEntity::~CBaseEntity(this);
}


// CDOTACustomGameEvents::~CDOTACustomGameEvents  (line 329, @0x0000000002555870, libserver.so)  // inlines: ~CDOTACustomGameEvents, ~CDOTAGameEvents
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDOTACustomGameEvents::~CDOTACustomGameEvents(CDOTACustomGameEvents *const this)
{
  this->_vptr_IHandleEntity = &off_40F99B0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTACustomGameEvents::GetEntityClass  (line 331, @0x0000000002552130, libserver.so)
CEntityClass *__cdecl CDOTACustomGameEvents::GetEntityClass()
{
  return g_pEntityCDOTACustomGameEventsClass;
}


// CDOTACustomGameEvents::Schema_DynamicBinding  (line 331, @0x0000000002552140, libserver.so)
// globals: CDOTACustomGameEvents::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTACustomGameEvents::Schema_DynamicBinding(
        const CDOTACustomGameEvents *const this)
{
  return CDOTACustomGameEvents::s_pSchemaBinding;
}


// CDOTACustomGameEvents::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 331, @0x0000000002552150, libserver.so)
// globals: CDOTACustomGameEvents::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTACustomGameEvents::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTACustomGameEvents::CEntityInstanceEntityClass *const this)
{
  return CDOTACustomGameEvents::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTACustomGameEvents::CEntityInstanceEntityClass::DestructInstance  (line 331, @0x0000000002552160, libserver.so)  // inlines: Destruct<CDOTACustomGameEvents>
void __fastcall CDOTACustomGameEvents::CEntityInstanceEntityClass::DestructInstance(
        CDOTACustomGameEvents::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTACustomGameEvents::CEntityInstanceEntityClass::FreeInstance  (line 331, @0x0000000002552180, libserver.so)
void __fastcall CDOTACustomGameEvents::CEntityInstanceEntityClass::FreeInstance(
        CDOTACustomGameEvents::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTACustomGameEvents::CEntityInstanceEntityClass::CanAllocate  (line 331, @0x00000000025521a0, libserver.so)
bool __fastcall CDOTACustomGameEvents::CEntityInstanceEntityClass::CanAllocate(
        const CDOTACustomGameEvents::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTACustomGameEvents::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 331, @0x00000000025521b0, libserver.so)
// globals: CDOTACustomGameEvents::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTACustomGameEvents::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTACustomGameEvents::CEntityInstanceEntityClass *const this)
{
  return CDOTACustomGameEvents::s_pSchemaBinding;
}


// CDOTACustomGameEvents::CEntityInstanceEntityClass::AllocateInstance  (line 331, @0x0000000002555350, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTACustomGameEvents::CEntityInstanceEntityClass::AllocateInstance(
        CDOTACustomGameEvents::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTACustomGameEvents::CEntityInstanceEntityClass::ConstructInstance  (line 331, @0x0000000002555600, libserver.so)  // inlines: CDOTACustomGameEvents, CDOTAGameEvents, CEntityIOOutput, Construct<CDOTACustomGameEvents>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDOTACustomGameEvents::CEntityInstanceEntityClass::ConstructInstance(
        CDOTACustomGameEvents::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 97) = off_3F7C190;
    *(p + 100) = off_3F7C190;
    *(p + 103) = off_3F7C190;
    *(p + 106) = off_3F7C190;
    *(p + 109) = off_3F7C190;
    *(p + 112) = off_3F7C190;
    *p = &off_40FA050;
  }
  return p;
}


// CDOTACustomGameEvents::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 331, @0x0000000002560810, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTACustomGameEvents::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTACustomGameEvents::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTACustomGameEvents::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 331, @0x0000000002560830, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTACustomGameEvents::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTACustomGameEvents::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTACustomGameEvents::GetEntityClassInternal  (line 331, @0x00000000025772c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CDOTAGameEvents::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
// strings: "dota_custom_game_events", "CDOTACustomGameEvents"
// globals: `guard variable for'CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass, CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTACustomGameEvents::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTACustomGameEvents::GetEntityClassInfo(void)::g_EntityCDOTACustomGameEventsClassInfo, CDOTACustomGameEvents::GetEntityClassInfo(void)::g_EntityCDOTACustomGameEventsClassInfo
CEntityClass *__cdecl CDOTACustomGameEvents::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass) != 0 )
  {
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_designerName.u.m_Id = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass._vptr_CEntityClass = off_3F79390;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_ComponentOffsets.m_Size = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_AllHelpers.m_Size = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_classInputs.m_Size = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_classOutputs.m_Size = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_requiredEHandle.m_Index = -1;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_hNetworkSerializer = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_pBaseClassInfo = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_pClassInfo = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_flags = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_nAllHelpersFlags = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_pScriptClassDesc = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_pInputs = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_nInputCount = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_pOutputs = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_nOutputCount = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_pGameClass = 0;
    CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass._vptr_CEntityClass = off_40F5A90;
    __cxa_guard_release(&`guard variable for'CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass);
    __cxa_atexit(
      CDOTACustomGameEvents::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTACustomGameEventsClass != 0 )
    return &CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass;
  if ( `guard variable for'CDOTACustomGameEvents::GetEntityClassInfo(void)::g_EntityCDOTACustomGameEventsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTACustomGameEvents::GetEntityClassInfo(void)::g_EntityCDOTACustomGameEventsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTAGameEvents::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTACustomGameEvents::GetEntityClassInfo(void)::g_EntityCDOTACustomGameEventsClassInfo,
      "CDOTACustomGameEvents",
      "dota_custom_game_events",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTACustomGameEvents::GetEntityClassInfo(void)::g_EntityCDOTACustomGameEventsClassInfo);
  }
  CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_pClassInfo = &CDOTACustomGameEvents::GetEntityClassInfo(void)::g_EntityCDOTACustomGameEventsClassInfo;
  CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_pBaseClassInfo = CDOTACustomGameEvents::GetEntityClassInfo(void)::g_EntityCDOTACustomGameEventsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTACustomGameEventsClass = &CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass;
  CDOTACustomGameEvents::GetEntityClassInfo(void)::g_EntityCDOTACustomGameEventsClassInfo.m_pClass = &CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass;
  CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTACustomGameEventsClass->m_pComponentOverrides = 0;
  return &CDOTACustomGameEvents::GetEntityClassInternal(void)::g_EntityCDOTACustomGameEventsClass;
}


// CDOTAGamerulesProxy::~CDOTAGamerulesProxy  (line 351, @0x00000000025557b0, libserver.so)  // inlines: ~CGameRulesProxy
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDOTAGamerulesProxy::~CDOTAGamerulesProxy(CDOTAGamerulesProxy *const this)
{
  this->_vptr_IHandleEntity = &off_404F510;
  CBaseEntity::~CBaseEntity(this);
}


// CDOTAGamerulesProxy::~CDOTAGamerulesProxy  (line 351, @0x00000000025557d0, libserver.so)  // inlines: ~CDOTAGamerulesProxy, ~CGameRulesProxy
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDOTAGamerulesProxy::~CDOTAGamerulesProxy(CDOTAGamerulesProxy *const this)
{
  this->_vptr_IHandleEntity = &off_404F510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTAGamerulesProxy::Schema_DynamicBinding  (line 353, @0x00000000025521c0, libserver.so)
// globals: CDOTAGamerulesProxy::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAGamerulesProxy::Schema_DynamicBinding(
        const CDOTAGamerulesProxy *const this)
{
  return CDOTAGamerulesProxy::s_pSchemaBinding;
}


// CDOTAGamerulesProxy::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 353, @0x00000000025521d0, libserver.so)
// globals: CDOTAGamerulesProxy::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAGamerulesProxy::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTAGamerulesProxy::CEntityInstanceEntityClass *const this)
{
  return CDOTAGamerulesProxy::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTAGamerulesProxy::CEntityInstanceEntityClass::DestructInstance  (line 353, @0x00000000025521e0, libserver.so)  // inlines: Destruct<CDOTAGamerulesProxy>
void __fastcall CDOTAGamerulesProxy::CEntityInstanceEntityClass::DestructInstance(
        CDOTAGamerulesProxy::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTAGamerulesProxy::CEntityInstanceEntityClass::FreeInstance  (line 353, @0x0000000002552200, libserver.so)
void __fastcall CDOTAGamerulesProxy::CEntityInstanceEntityClass::FreeInstance(
        CDOTAGamerulesProxy::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTAGamerulesProxy::CEntityInstanceEntityClass::CanAllocate  (line 353, @0x0000000002552220, libserver.so)
bool __fastcall CDOTAGamerulesProxy::CEntityInstanceEntityClass::CanAllocate(
        const CDOTAGamerulesProxy::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTAGamerulesProxy::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 353, @0x0000000002552230, libserver.so)
// globals: CDOTAGamerulesProxy::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTAGamerulesProxy::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTAGamerulesProxy::CEntityInstanceEntityClass *const this)
{
  return CDOTAGamerulesProxy::s_pSchemaBinding;
}


// CDOTAGamerulesProxy::CEntityInstanceEntityClass::AllocateInstance  (line 353, @0x0000000002555390, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTAGamerulesProxy::CEntityInstanceEntityClass::AllocateInstance(
        CDOTAGamerulesProxy::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CDOTAGamerulesProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 353, @0x00000000025605e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTAGamerulesProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTAGamerulesProxy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTAGamerulesProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 353, @0x0000000002560600, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTAGamerulesProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTAGamerulesProxy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTAGamerulesProxy::CEntityInstanceEntityClass::ConstructInstance  (line 353, @0x0000000002569240, libserver.so)  // inlines: Construct<CDOTAGamerulesProxy>
// calls: CDOTAGamerulesProxy::CDOTAGamerulesProxy
CEntityInstance *__fastcall CDOTAGamerulesProxy::CEntityInstanceEntityClass::ConstructInstance(
        CDOTAGamerulesProxy::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTAGamerulesProxy::CDOTAGamerulesProxy(p);
  return p;
}


// CDOTAGamerulesProxy::GetEntityClassInternal  (line 353, @0x0000000002577610, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
// strings: "dota_gamerules", "CDOTAGamerulesProxy", "CGameRulesProxy"
// globals: `guard variable for'CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass, CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTAGamerulesProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTAGamerulesProxy::GetEntityClassInfo(void)::g_EntityCDOTAGamerulesProxyClassInfo, CDOTAGamerulesProxy::GetEntityClassInfo(void)::g_EntityCDOTAGamerulesProxyClassInfo, `guard variable for'CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo (9 total)
CEntityClass *__cdecl CDOTAGamerulesProxy::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass) != 0 )
  {
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_designerName.u.m_Id = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass._vptr_CEntityClass = off_3F79390;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_ComponentOffsets.m_Size = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_AllHelpers.m_Size = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_classInputs.m_Size = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_classOutputs.m_Size = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_requiredEHandle.m_Index = -1;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_hNetworkSerializer = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_pBaseClassInfo = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_pClassInfo = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_flags = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_nAllHelpersFlags = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_pScriptClassDesc = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_pInputs = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_nInputCount = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_pOutputs = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_nOutputCount = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_pGameClass = 0;
    CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass._vptr_CEntityClass = off_40F5B10;
    __cxa_guard_release(&`guard variable for'CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass);
    __cxa_atexit(
      CDOTAGamerulesProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTAGamerulesProxyClass != 0 )
    return &CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass;
  if ( `guard variable for'CDOTAGamerulesProxy::GetEntityClassInfo(void)::g_EntityCDOTAGamerulesProxyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAGamerulesProxy::GetEntityClassInfo(void)::g_EntityCDOTAGamerulesProxyClassInfo) != 0 )
  {
    if ( `guard variable for'CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo,
        "CGameRulesProxy",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTAGamerulesProxy::GetEntityClassInfo(void)::g_EntityCDOTAGamerulesProxyClassInfo,
      "CDOTAGamerulesProxy",
      "dota_gamerules",
      0,
      &CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTAGamerulesProxy::GetEntityClassInfo(void)::g_EntityCDOTAGamerulesProxyClassInfo);
  }
  CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_pClassInfo = &CDOTAGamerulesProxy::GetEntityClassInfo(void)::g_EntityCDOTAGamerulesProxyClassInfo;
  CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_pBaseClassInfo = CDOTAGamerulesProxy::GetEntityClassInfo(void)::g_EntityCDOTAGamerulesProxyClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTAGamerulesProxyClass = &CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass;
  CDOTAGamerulesProxy::GetEntityClassInfo(void)::g_EntityCDOTAGamerulesProxyClassInfo.m_pClass = &CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass;
  CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTAGamerulesProxyClass->m_pComponentOverrides = 0;
  return &CDOTAGamerulesProxy::GetEntityClassInternal(void)::g_EntityCDOTAGamerulesProxyClass;
}


// CDOTA_ItemStockInfo::Schema_DynamicBinding  (line 586, @0x0000000002552240, libserver.so)
// globals: CDOTA_ItemStockInfo::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_ItemStockInfo::Schema_DynamicBinding(
        const CDOTA_ItemStockInfo *const this)
{
  return CDOTA_ItemStockInfo::s_pSchemaBinding;
}


// CHeroesPerPlayer::Schema_DynamicBinding  (line 604, @0x0000000002552250, libserver.so)
// globals: CHeroesPerPlayer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CHeroesPerPlayer::Schema_DynamicBinding(const CHeroesPerPlayer *const this)
{
  return CHeroesPerPlayer::s_pSchemaBinding;
}


// CHeroStatueLiked::Schema_DynamicBinding  (line 615, @0x0000000002552260, libserver.so)
// globals: CHeroStatueLiked::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CHeroStatueLiked::Schema_DynamicBinding(const CHeroStatueLiked *const this)
{
  return CHeroStatueLiked::s_pSchemaBinding;
}


// DOTA_AssassinMinigameNetworkState::Schema_DynamicBinding  (line 627, @0x0000000002552270, libserver.so)
// globals: DOTA_AssassinMinigameNetworkState::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall DOTA_AssassinMinigameNetworkState::Schema_DynamicBinding(
        const DOTA_AssassinMinigameNetworkState *const this)
{
  return DOTA_AssassinMinigameNetworkState::s_pSchemaBinding;
}


// DOTA_AssassinMinigameNetworkState::NetworkStateChanged  (line 631, @0x0000000002552280, libserver.so)
void __fastcall DOTA_AssassinMinigameNetworkState::NetworkStateChanged(DOTA_AssassinMinigameNetworkState *const this)
{
  ;
}


// DOTA_AssassinMinigameNetworkState::NetworkStateChanged  (line 631, @0x0000000002552290, libserver.so)
// callers: CSchemaClassBinding<DOTA_AssassinMinigameNetworkState>::AllocateAndCopyConstruct
void __fastcall DOTA_AssassinMinigameNetworkState::NetworkStateChanged(
        DOTA_AssassinMinigameNetworkState *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// DOTA_AssassinMinigameNetworkState::NetworkStateChangedLog  (line 631, @0x00000000025522a0, libserver.so)
void __fastcall DOTA_AssassinMinigameNetworkState::NetworkStateChangedLog(
        const DOTA_AssassinMinigameNetworkState *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CDOTA_AbilityDraftAbilityState::Schema_DynamicBinding  (line 648, @0x00000000025522b0, libserver.so)
// globals: CDOTA_AbilityDraftAbilityState::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_AbilityDraftAbilityState::Schema_DynamicBinding(
        const CDOTA_AbilityDraftAbilityState *const this)
{
  return CDOTA_AbilityDraftAbilityState::s_pSchemaBinding;
}


// CDOTAGamerules::NetworkStateChanged  (line 721, @0x00000000024b5970 libserver.so, @0x0000000002828430 libserver.so)  // inlines: Get, operator CEntityInstance*
// callers: CDOTAGamerules::State_Enter_DISCONNECT, CDOTAGamerules::HeroPickState_Leave_CM_CAPTAINPICK, CDOTAGamerules::HeroPickState_Leave_CD_CAPTAINPICK, CDOTAGamerules::PreSpawnGroupUnload, CDOTAGamerules::DestroyStandardEntities, CDOTAFogOfWarSystem::UpdateFogOfWar, CGCClientJobTeamFanfare::BYieldingRunJob, CDOTAGamerules::OnLobbyUpdated, CDOTAGamerules::SetGamePaused, CDOTAGamerules::AD_AddBannedHero, CDOTAGamerules::OnPlayerTeamChanged, CDOTAGamerules::State_Think_POST_GAME (39 total)
void __fastcall CDOTAGamerules::NetworkStateChanged(CDOTAGamerules *const this, uint32 nLocalOffset, int32 nArrayIndex)
{
  CEntityInstance *m_pObj; // rax

  m_pObj = this->__m_pChainEntity.m_pObj;
  if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
    (*(m_pObj->_vptr_IHandleEntity + 22))(
      this->__m_pChainEntity.m_pObj,
      nLocalOffset,
      nArrayIndex,
      this->__m_pChainEntity.m_PathIndex.m_Value);
}


// CDOTAGamerules::Schema_DynamicBinding  (line 722, @0x00000000025522c0, libserver.so)
// globals: CDOTAGamerules::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAGamerules::Schema_DynamicBinding(const CDOTAGamerules *const this)
{
  return CDOTAGamerules::s_pSchemaBinding;
}


// CDOTAGamerules::Damage_NoPhysicsForce  (line 747, @0x00000000025522d0, libserver.so)
bool __fastcall CDOTAGamerules::Damage_NoPhysicsForce(CDOTAGamerules *const this, int iDmgType)
{
  return 1;
}


// CDOTAGamerules::FAllowNPCs  (line 774, @0x00000000025522e0, libserver.so)
bool __fastcall CDOTAGamerules::FAllowNPCs(CDOTAGamerules *const this)
{
  return 0;
}


// CDOTAGamerules::GetTimeOfDay  (line 875, @0x000000000255d0a0, libserver.so)  // inlines: RemapValClamped, clamp<float, float>
float __fastcall CDOTAGamerules::GetTimeOfDay(CDOTAGamerules *const this)
{
  float result; // xmm0_4
  float v2; // xmm1_4

  result = 0.0;
  v2 = this->m_iNetTimeOfDay.m_Value / 65535.0;
  if ( v2 >= 0.0 )
  {
    result = 1.0;
    if ( v2 <= 1.0 )
      return v2 + 0.0;
  }
  return result;
}


// CDOTAGamerules::IsDaytime  (line 876, @0x000000000255d180, libserver.so)  // inlines: GetTimeOfDay, RemapValClamped, clamp<float, float>
bool __fastcall CDOTAGamerules::IsDaytime(CDOTAGamerules *const this)
{
  bool result; // al
  float v2; // xmm0_4

  result = 0;
  if ( !this->m_bIsNightstalkerNight.m_Value && !this->m_bIsTemporaryNight.m_Value )
  {
    v2 = this->m_iNetTimeOfDay.m_Value / 65535.0;
    if ( v2 >= 0.0 && v2 <= 1.0 && (v2 + 0.0) >= 0.25 )
      return (v2 + 0.0) <= 0.75;
  }
  return result;
}


// CDOTAGamerules::IsNightstalkerNight  (line 878, @0x00000000025522f0, libserver.so)
bool __fastcall CDOTAGamerules::IsNightstalkerNight(CDOTAGamerules *const this)
{
  return this->m_bIsNightstalkerNight.m_Value;
}


// CDOTAGamerules::IsTemporaryNight  (line 879, @0x0000000002552300, libserver.so)
bool __fastcall CDOTAGamerules::IsTemporaryNight(CDOTAGamerules *const this)
{
  return this->m_bIsTemporaryNight.m_Value;
}


// CDOTAGamerules::IsGamePaused  (line 890, @0x0000000002552310, libserver.so)
bool __fastcall CDOTAGamerules::IsGamePaused(CDOTAGamerules *const this)
{
  return this->m_bGamePaused.m_Value;
}


// CDOTAGamerules::GetGameTime  (line 891, @0x0000000002552320, libserver.so)
float __fastcall CDOTAGamerules::GetGameTime(CDOTAGamerules *const this)
{
  return this->m_fGameTime.m_Value;
}


// CDOTAGamerules::Script_GetDOTATime  (line 901, @0x0000000002569e90, libserver.so)  // inlines: GetDOTATime
// calls: CDOTAGamerules::GameTimeToDOTATime
float __fastcall CDOTAGamerules::Script_GetDOTATime(
        CDOTAGamerules *const this,
        bool bIncludePreGame,
        bool bIncludeNegativeTime)
{
  return CDOTAGamerules::GameTimeToDOTATime(this, this->m_fGameTime.m_Value, bIncludePreGame, bIncludeNegativeTime);
}


// CDOTAGamerules::SetCustomGameDifficulty  (line 909, @0x0000000002561450, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<int>
// callers: CDOTAGamerules::GameInit
void __fastcall CDOTAGamerules::SetCustomGameDifficulty(CDOTAGamerules *const this, int nDifficulty)
{
  CEntityInstance *m_pObj; // rdi

  if ( this->m_nCustomGameDifficulty.m_Value != nDifficulty )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 2008, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
    this->m_nCustomGameDifficulty.m_Value = nDifficulty;
  }
}


// CDOTAGamerules::Script_SetOverlayHealthBarUnit  (line 911, @0x00000000025637a0, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, HScriptToEntity<CBaseEntity>, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetOverlayHealthBarUnit, ToDOTABaseNPC, ToEnt, operator CEntityInstance*, operator!=, operator=, operator=<int>
// calls: GetScriptDesc<CEntityInstance>
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAGamerules::Script_SetOverlayHealthBarUnit(CDOTAGamerules *const this, HSCRIPT hNPC, int nType)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  __int64 v8; // rax
  __int64 v9; // r12
  uint32 m_Index; // edx
  CEntityInstance *m_pInstance; // rcx
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  CEntityInstance *v14; // rdi
  CEntityInstance *m_pObj; // rdi
  __int64 v16; // rdx
  int v17; // eax
  __int16 v18; // cx

  if ( hNPC != 0
    && (v6 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v8 = v6(g_pScriptVM, hNPC, Script)) != 0)
    && *(v8 + 339) != 0 )
  {
    v9 = v8;
  }
  else
  {
    v9 = 0;
  }
  m_Index = this->m_hOverlayHealthBarUnit.m_Value.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOverlayHealthBarUnit.m_Value.m_Index) >> 9)
                                                         & 0x3F];
    if ( v12 != 0 )
    {
      v13 = &v12[this->m_hOverlayHealthBarUnit.m_Value.m_Index & 0x1FF];
      if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
        m_pInstance = v13->m_pInstance;
    }
  }
  if ( v9 != m_pInstance )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 832, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
    if ( v9 != 0 && (v16 = *(v9 + 8)) != 0 )
    {
      v17 = (*(v16 + 16) >> 15) - (*(v16 + 48) & 1);
      if ( *(v16 + 16) == -1 )
        v18 = 0x7FFF;
      else
        v18 = *(v16 + 16) & 0x7FFF;
      LOWORD(this->m_hOverlayHealthBarUnit.m_Value.m_Index) = v18
                                                            | this->m_hOverlayHealthBarUnit.m_Value.m_Index & 0x8000;
      this->m_hOverlayHealthBarUnit.m_Value.m_Index = (v17 << 15)
                                                    | this->m_hOverlayHealthBarUnit.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hOverlayHealthBarUnit.m_Value.m_Index = -1;
    }
  }
  if ( nType != this->m_nOverlayHealthBarType.m_Value )
  {
    v14 = this->__m_pChainEntity.m_pObj;
    if ( v14 != 0 && (v14->m_pEntity->m_flags & 0x400) == 0 )
      (*(v14->_vptr_IHandleEntity + 22))(v14, 836, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
    this->m_nOverlayHealthBarType.m_Value = nType;
  }
}


// CDOTAGamerules::GetCustomGameDifficulty  (line 924, @0x0000000002552330, libserver.so)
int __fastcall CDOTAGamerules::GetCustomGameDifficulty(CDOTAGamerules *const this)
{
  return this->m_nCustomGameDifficulty.m_Value;
}


// CDOTAGamerules::SetStartingGold  (line 933, @0x0000000002552340, libserver.so)
void __fastcall CDOTAGamerules::SetStartingGold(CDOTAGamerules *const this, int nStartingGold)
{
  this->m_nStartingGold = nStartingGold;
}


// CDOTAGamerules::SetGoldPerTick  (line 935, @0x0000000002552350, libserver.so)
void __fastcall CDOTAGamerules::SetGoldPerTick(CDOTAGamerules *const this, int nGoldPerTick)
{
  this->m_nGoldPerTick = nGoldPerTick;
}


// CDOTAGamerules::SetGoldTickTime  (line 937, @0x0000000002552360, libserver.so)
void __fastcall CDOTAGamerules::SetGoldTickTime(CDOTAGamerules *const this, float a2, float flGoldTickTime)
{
  this->m_flGoldTickTime = a2;
}


// CDOTAGamerules::GetMatchID  (line 967, @0x0000000002552370, libserver.so)
MatchID_t __fastcall CDOTAGamerules::GetMatchID(const CDOTAGamerules *const this)
{
  return this->m_unMatchID64.m_Value;
}


// CDOTAGamerules::GetMatchSignoutComplete  (line 970, @0x0000000002552380, libserver.so)
bool __fastcall CDOTAGamerules::GetMatchSignoutComplete(CDOTAGamerules *const this)
{
  return this->m_bMatchSignoutComplete.m_Value;
}


// CDOTAGamerules::Script_IsCheatMode  (line 1001, @0x0000000002569eb0, libserver.so)
// calls: CDOTAGamerules::IsCheatMode
bool __fastcall CDOTAGamerules::Script_IsCheatMode(CDOTAGamerules *const this)
{
  return CDOTAGamerules::IsCheatMode();
}


// CDOTAGamerules::Script_State_Get  (line 1182, @0x0000000002552390, libserver.so)  // inlines: State_Get, State_Order
// globals: DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING
int __fastcall CDOTAGamerules::Script_State_Get(CDOTAGamerules *const this)
{
  __int64 m_Value; // rdx
  int result; // eax

  m_Value = this->m_nGameState.m_Value;
  result = 0;
  if ( m_Value <= 0xA )
    return DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[m_Value];
  return result;
}


// CDOTAGamerules::SetSameHeroSelectionEnabled  (line 1424, @0x0000000002561330, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<bool>
void __fastcall CDOTAGamerules::SetSameHeroSelectionEnabled(CDOTAGamerules *const this, bool bValue)
{
  CEntityInstance *m_pObj; // rdi

  if ( this->m_bSameHeroSelectionEnabled.m_Value != bValue )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 960, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
    this->m_bSameHeroSelectionEnabled.m_Value = bValue;
  }
}


// CDOTAGamerules::SetUseCustomHeroXPValues  (line 1425, @0x0000000002561510, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<bool>
void __fastcall CDOTAGamerules::SetUseCustomHeroXPValues(CDOTAGamerules *const this, bool bValue)
{
  CEntityInstance *m_pObj; // rdi

  if ( this->m_bUseCustomHeroXPValue.m_Value != bValue )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 961, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
    this->m_bUseCustomHeroXPValue.m_Value = bValue;
  }
}


// CDOTAGamerules::SetUseBaseGoldBountyOnHeroes  (line 1426, @0x00000000025614b0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<bool>
void __fastcall CDOTAGamerules::SetUseBaseGoldBountyOnHeroes(CDOTAGamerules *const this, bool bValue)
{
  CEntityInstance *m_pObj; // rdi

  if ( this->m_bUseBaseGoldBountyOnHeroes.m_Value != bValue )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 962, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
    this->m_bUseBaseGoldBountyOnHeroes.m_Value = bValue;
  }
}


// CDOTAGamerules::SetUseUniversalShopMode  (line 1427, @0x0000000002561390, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<bool>
void __fastcall CDOTAGamerules::SetUseUniversalShopMode(CDOTAGamerules *const this, bool bValue)
{
  CEntityInstance *m_pObj; // rdi

  if ( this->m_bUseUniversalShopMode.m_Value != bValue )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 963, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
    this->m_bUseUniversalShopMode.m_Value = bValue;
  }
}


// CDOTAGamerules::SetHideKillMessageHeaders  (line 1428, @0x0000000002561570, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<bool>
void __fastcall CDOTAGamerules::SetHideKillMessageHeaders(CDOTAGamerules *const this, bool bValue)
{
  CEntityInstance *m_pObj; // rdi

  if ( this->m_bHideKillMessageHeaders.m_Value != bValue )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 964, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
    this->m_bHideKillMessageHeaders.m_Value = bValue;
  }
}


// CDOTAGamerules::SetCustomVictoryMessage  (line 1429, @0x00000000025616d0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, V_strcpy_safe<256ul>, operator CEntityInstance*
// calls: _V_strncpy
void __fastcall CDOTAGamerules::SetCustomVictoryMessage(CDOTAGamerules *const this, const char *pVictoryMessage)
{
  CEntityInstance *m_pObj; // rdi

  _V_strncpy(&this->m_CustomVictoryMessage, pVictoryMessage, 256);
  m_pObj = this->__m_pChainEntity.m_pObj;
  if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
    (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 980, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
}


// CDOTAGamerules::SetCustomGameEndDelay  (line 1430, @0x0000000002561890, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<float>
void __fastcall CDOTAGamerules::SetCustomGameEndDelay(CDOTAGamerules *const this, double a2, float flDelay)
{
  CEntityInstance *m_pObj; // rdi
  int flDelaya; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flCustomGameEndDelay.m_Value )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
    {
      flDelaya = LODWORD(a2);
      (*(m_pObj->_vptr_IHandleEntity + 22))(
        m_pObj,
        1236,
        0xFFFFFFFFLL,
        this->__m_pChainEntity.m_PathIndex.m_Value,
        a2,
        flDelay);
      LODWORD(a2) = flDelaya;
    }
    this->m_flCustomGameEndDelay.m_Value = *&a2;
  }
}


// CDOTAGamerules::SetCustomVictoryMessageDuration  (line 1431, @0x00000000025617b0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<float>
void __fastcall CDOTAGamerules::SetCustomVictoryMessageDuration(
        CDOTAGamerules *const this,
        double a2,
        float flDuration)
{
  CEntityInstance *m_pObj; // rdi
  int flDurationa; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flCustomVictoryMessageDuration.m_Value )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
    {
      flDurationa = LODWORD(a2);
      (*(m_pObj->_vptr_IHandleEntity + 22))(
        m_pObj,
        1248,
        0xFFFFFFFFLL,
        this->__m_pChainEntity.m_PathIndex.m_Value,
        a2,
        flDuration);
      LODWORD(a2) = flDurationa;
    }
    this->m_flCustomVictoryMessageDuration.m_Value = *&a2;
  }
}


// CDOTAGamerules::IsHeroRespawnEnabled  (line 1460, @0x00000000025523b0, libserver.so)
bool __fastcall CDOTAGamerules::IsHeroRespawnEnabled(CDOTAGamerules *const this)
{
  return this->m_bHeroRespawnEnabled.m_Value;
}


// CDOTAGamerules::SetHeroRespawnEnabled  (line 1461, @0x00000000025613f0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<bool>
void __fastcall CDOTAGamerules::SetHeroRespawnEnabled(CDOTAGamerules *const this, bool bHeroRespawnEnabled)
{
  CEntityInstance *m_pObj; // rdi

  if ( this->m_bHeroRespawnEnabled.m_Value != bHeroRespawnEnabled )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 1441, 0xFFFFFFFFLL, this->__m_pChainEntity.m_PathIndex.m_Value);
    this->m_bHeroRespawnEnabled.m_Value = bHeroRespawnEnabled;
  }
}


// CDOTAGamerules::SetHeroMinimapIconScale  (line 1472, @0x0000000002561740, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<float>
void __fastcall CDOTAGamerules::SetHeroMinimapIconScale(
        CDOTAGamerules *const this,
        double a2,
        float flHeroMinimapIconScale)
{
  CEntityInstance *m_pObj; // rdi
  int flHeroMinimapIconScalea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flHeroMinimapIconScale.m_Value )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
    {
      flHeroMinimapIconScalea = LODWORD(a2);
      (*(m_pObj->_vptr_IHandleEntity + 22))(
        m_pObj,
        968,
        0xFFFFFFFFLL,
        this->__m_pChainEntity.m_PathIndex.m_Value,
        a2,
        flHeroMinimapIconScale);
      LODWORD(a2) = flHeroMinimapIconScalea;
    }
    this->m_flHeroMinimapIconScale.m_Value = *&a2;
  }
}


// CDOTAGamerules::SetCreepMinimapIconScale  (line 1475, @0x0000000002561820, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<float>
void __fastcall CDOTAGamerules::SetCreepMinimapIconScale(
        CDOTAGamerules *const this,
        double a2,
        float flCreepMinimapIconScale)
{
  CEntityInstance *m_pObj; // rdi
  int flCreepMinimapIconScalea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flCreepMinimapIconScale.m_Value )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
    {
      flCreepMinimapIconScalea = LODWORD(a2);
      (*(m_pObj->_vptr_IHandleEntity + 22))(
        m_pObj,
        972,
        0xFFFFFFFFLL,
        this->__m_pChainEntity.m_PathIndex.m_Value,
        a2,
        flCreepMinimapIconScale);
      LODWORD(a2) = flCreepMinimapIconScalea;
    }
    this->m_flCreepMinimapIconScale.m_Value = *&a2;
  }
}


// CDOTAGamerules::SetRuneMinimapIconScale  (line 1478, @0x0000000002561900, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<float>
void __fastcall CDOTAGamerules::SetRuneMinimapIconScale(
        CDOTAGamerules *const this,
        double a2,
        float flRuneMinimapIconScale)
{
  CEntityInstance *m_pObj; // rdi
  int flRuneMinimapIconScalea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flRuneMinimapIconScale.m_Value )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
    {
      flRuneMinimapIconScalea = LODWORD(a2);
      (*(m_pObj->_vptr_IHandleEntity + 22))(
        m_pObj,
        976,
        0xFFFFFFFFLL,
        this->__m_pChainEntity.m_PathIndex.m_Value,
        a2,
        flRuneMinimapIconScale);
      LODWORD(a2) = flRuneMinimapIconScalea;
    }
    this->m_flRuneMinimapIconScale.m_Value = *&a2;
  }
}


// CDOTAGamerules::NetworkVar_m_flStateTransitionTime::NetworkStateChanged  (line 1579, @0x00000000024b93d0, libserver.so)  // inlines: Get, NetworkStateChanged, operator CEntityInstance*
// callers: CDOTAGamerules::GameInit, CDOTAGamerules::State_Enter_PRE_GAME, CDOTAGamerules::WaitForPlayersSuccess
void __fastcall CDOTAGamerules::NetworkVar_m_flStateTransitionTime::NetworkStateChanged(char *ptr, int32 nArrayIndex)
{
  _QWORD *v2; // rax

  v2 = *(ptr - 188);
  if ( v2 != 0 && (*(v2[1] + 49LL) & 4) == 0 )
    (*(*v2 + 176LL))(*(ptr - 188), 908, 0xFFFFFFFFLL, *(ptr - 90));
}


// CDOTAGamerules::NetworkVar_m_flHeroPickStateTransitionTime::NetworkStateChanged  (line 1595, @0x00000000024b9420, libserver.so)  // inlines: Get, NetworkStateChanged, operator CEntityInstance*
// callers: CDOTAGamerules::HeroPickState_Think_Ability_Draft_SELECT, CDOTAGamerules::HeroPickState_Enter_Ability_Draft_SELECT, CDOTAGamerules::HeroPickState_Enter_BD_SELECT
void __fastcall CDOTAGamerules::NetworkVar_m_flHeroPickStateTransitionTime::NetworkStateChanged(
        char *ptr,
        int32 nArrayIndex)
{
  _QWORD *v2; // rax

  v2 = *(ptr - 228);
  if ( v2 != 0 && (*(v2[1] + 49LL) & 4) == 0 )
    (*(*v2 + 176LL))(*(ptr - 228), 948, 0xFFFFFFFFLL, *(ptr - 110));
}


// CDOTAGamerules::NetworkVar_m_iPauseTeam::NetworkStateChanged  (line 1617, @0x00000000024b9470, libserver.so)  // inlines: Get, NetworkStateChanged, operator CEntityInstance*
// callers: CDOTAGamerules::State_Think_POST_GAME, CDOTAGamerules::Think
void __fastcall CDOTAGamerules::NetworkVar_m_iPauseTeam::NetworkStateChanged(_QWORD *ptr, int32 nArrayIndex)
{
  _QWORD *v2; // rax

  v2 = *(ptr - 68);
  if ( v2 != 0 && (*(v2[1] + 49LL) & 4) == 0 )
    (*(*v2 + 176LL))(*(ptr - 68), 1264, 0xFFFFFFFFLL, *(ptr - 268));
}


// CDOTAGamerules::NetworkVar_m_AssassinMiniGameNetData::NetworkStateChanged  (line 1712, @0x00000000025523c0, libserver.so)  // inlines: DispatchNetworkStateChanged<CDOTAGamerules>, Get, NetworkStateChanged, operator CEntityInstance*
void __fastcall CDOTAGamerules::NetworkVar_m_AssassinMiniGameNetData::NetworkStateChanged(
        CDOTAGamerules::NetworkVar_m_AssassinMiniGameNetData *const this)
{
  _QWORD *v1; // rdi

  v1 = *(this - 207);
  if ( v1 != 0 && (*(v1[1] + 49LL) & 4) == 0 )
    (*(*v1 + 168LL))(v1);
}


// CDOTAGamerules::NetworkVar_m_AssassinMiniGameNetData::NetworkStateChangedLog  (line 1712, @0x0000000002552400, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CDOTAGamerules>, Get, NetworkStateChangedLog, operator const CEntityInstance*
void __fastcall CDOTAGamerules::NetworkVar_m_AssassinMiniGameNetData::NetworkStateChangedLog(
        const CDOTAGamerules::NetworkVar_m_AssassinMiniGameNetData *const this,
        const char *pVarName,
        const char *pMsg)
{
  _QWORD *v3; // rdi

  v3 = *(this - 207);
  if ( v3 != 0 && (*(v3[1] + 49LL) & 4) == 0 )
    (*(*v3 + 184LL))(v3, pVarName, pMsg);
}


// CDOTAGamerules::NetworkVar_m_AssassinMiniGameNetData::NetworkStateChanged  (line 1712, @0x00000000025612e0, libserver.so)  // inlines: DispatchNetworkStateChanged<CDOTAGamerules>, Get, NetworkStateChanged, operator CEntityInstance*
void __fastcall CDOTAGamerules::NetworkVar_m_AssassinMiniGameNetData::NetworkStateChanged(
        CDOTAGamerules::NetworkVar_m_AssassinMiniGameNetData *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  _QWORD *v4; // rax

  v4 = *(this - 207);
  if ( v4 != 0 && (*(v4[1] + 49LL) & 4) == 0 )
    (*(*v4 + 176LL))(*(this - 207), nLocalOffset + 2376, nArrayIndex, *(this - 824));
}


// CDOTAGamerules::NetworkVar_m_bGamePaused::NetworkStateChanged  (line 1751, @0x00000000024b9510, libserver.so)  // inlines: Get, NetworkStateChanged, operator CEntityInstance*
// callers: CDOTAGamerules::State_Think_POST_GAME, CDOTAGamerules::Think
void __fastcall CDOTAGamerules::NetworkVar_m_bGamePaused::NetworkStateChanged(char *ptr, int32 nArrayIndex)
{
  _QWORD *v2; // rax

  v2 = *(ptr - 2053);
  if ( v2 != 0 && (*(v2[1] + 49LL) & 4) == 0 )
    (*(*v2 + 176LL))(*(ptr - 2053), 2773, 0xFFFFFFFFLL, *(ptr - 2045));
}


// CDOTAGamerules::NetworkVar_m_nAbilityDraftPlayerTracker::NetworkStateChanged  (line 1783, @0x00000000024b94c0, libserver.so)  // inlines: Get, NetworkStateChanged, operator CEntityInstance*
// callers: CDOTAGamerules::HeroPickState_Think_Ability_Draft_SELECT
void __fastcall CDOTAGamerules::NetworkVar_m_nAbilityDraftPlayerTracker::NetworkStateChanged(
        _QWORD *ptr,
        int32 nArrayIndex)
{
  _QWORD *v2; // rax

  v2 = *(ptr - 287);
  if ( v2 != 0 && (*(v2[1] + 49LL) & 4) == 0 )
    (*(*v2 + 176LL))(*(ptr - 287), 3016, 0xFFFFFFFFLL, *(ptr - 1144));
}


// CDOTAGamerules::GetGameDescription  (line 1982, @0x0000000002552440, libserver.so)
// strings: "Dota 2"
const char *__fastcall CDOTAGamerules::GetGameDescription(CDOTAGamerules *const this)
{
  return "Dota 2";
}


// CDOTAGamerules::SetFirstBloodActive  (line 2018, @0x0000000002552450, libserver.so)
void __fastcall CDOTAGamerules::SetFirstBloodActive(CDOTAGamerules *const this, bool bState)
{
  this->m_bFirstBlood = bState;
}


// CDOTAGamerules::BeginTemporaryNight  (line 2025, @0x0000000002560e40, libserver.so)  // inlines: GetRemainingTime, NetworkStateChanged, Set, Start, operator=<float>
// calls: CountdownTimer::Now
void __fastcall CDOTAGamerules::BeginTemporaryNight(CDOTAGamerules *const this, float a2, float flDuration)
{
  CountdownTimer *p_m_TempNightTimer; // r12
  double v5; // xmm0_8
  double v6; // xmm1_8
  double v7; // xmm2_8
  float flDurationb; // [rsp+8h] [rbp-18h]
  float m_Value; // [rsp+Ch] [rbp-14h]
  float v11; // [rsp+Ch] [rbp-14h]
  float v12; // [rsp+Ch] [rbp-14h]

  p_m_TempNightTimer = &this->m_TempNightTimer;
  m_Value = this->m_TempNightTimer.m_timestamp.m_Value;
  if ( (m_Value - CountdownTimer::Now(&this->m_TempNightTimer)) > a2 )
  {
    v12 = this->m_TempNightTimer.m_timestamp.m_Value;
    v11 = v12 - CountdownTimer::Now(p_m_TempNightTimer);
  }
  else
  {
    v11 = a2;
  }
  *&v5 = CountdownTimer::Now(p_m_TempNightTimer) + v11;
  if ( *&v5 != this->m_TempNightTimer.m_timestamp.m_Value )
  {
    flDurationb = *&v5;
    (*(this->m_TempNightTimer._vptr_CountdownTimer + 2))(p_m_TempNightTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v5 = LODWORD(flDurationb);
    this->m_TempNightTimer.m_timestamp.m_Value = flDurationb;
  }
  if ( v11 != this->m_TempNightTimer.m_duration.m_Value )
  {
    (*(this->m_TempNightTimer._vptr_CountdownTimer + 2))(
      p_m_TempNightTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v5,
      v6,
      v7,
      v11);
    this->m_TempNightTimer.m_duration.m_Value = v11;
  }
}


// CDOTAGamerules::BeginNightstalkerNight  (line 2026, @0x0000000002560d20, libserver.so)  // inlines: GetRemainingTime, NetworkStateChanged, Set, Start, operator=<float>
// calls: CountdownTimer::Now
void __fastcall CDOTAGamerules::BeginNightstalkerNight(CDOTAGamerules *const this, float a2, float flDuration)
{
  CountdownTimer *p_m_NightstalkerNightTimer; // r12
  double v5; // xmm0_8
  double v6; // xmm1_8
  double v7; // xmm2_8
  float flDurationb; // [rsp+8h] [rbp-18h]
  float m_Value; // [rsp+Ch] [rbp-14h]
  float v11; // [rsp+Ch] [rbp-14h]
  float v12; // [rsp+Ch] [rbp-14h]

  p_m_NightstalkerNightTimer = &this->m_NightstalkerNightTimer;
  m_Value = this->m_NightstalkerNightTimer.m_timestamp.m_Value;
  if ( (m_Value - CountdownTimer::Now(&this->m_NightstalkerNightTimer)) > a2 )
  {
    v12 = this->m_NightstalkerNightTimer.m_timestamp.m_Value;
    v11 = v12 - CountdownTimer::Now(p_m_NightstalkerNightTimer);
  }
  else
  {
    v11 = a2;
  }
  *&v5 = CountdownTimer::Now(p_m_NightstalkerNightTimer) + v11;
  if ( *&v5 != this->m_NightstalkerNightTimer.m_timestamp.m_Value )
  {
    flDurationb = *&v5;
    (*(this->m_NightstalkerNightTimer._vptr_CountdownTimer + 2))(
      p_m_NightstalkerNightTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    *&v5 = LODWORD(flDurationb);
    this->m_NightstalkerNightTimer.m_timestamp.m_Value = flDurationb;
  }
  if ( v11 != this->m_NightstalkerNightTimer.m_duration.m_Value )
  {
    (*(this->m_NightstalkerNightTimer._vptr_CountdownTimer + 2))(
      p_m_NightstalkerNightTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v5,
      v6,
      v7,
      v11);
    this->m_NightstalkerNightTimer.m_duration.m_Value = v11;
  }
}


// CDOTAGamerules::NumDroppedItems  (line 2054, @0x0000000002552460, libserver.so)
int __fastcall CDOTAGamerules::NumDroppedItems(CDOTAGamerules *const this)
{
  return this->m_hDroppedItems.m_Size;
}


// CDOTAGamerules::Script_GetDroppedItem  (line 2056, @0x0000000002560f60, libserver.so)  // inlines: EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*, operator[]
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDOTAGamerules::Script_GetDroppedItem(CDOTAGamerules *const this, int iIndex)
{
  HSCRIPT result; // rax
  CHandle<CBaseEntity> *v3; // rdx
  uint32 m_Index; // esi
  __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rbx

  result = 0;
  if ( iIndex >= 0 && iIndex < this->m_hDroppedItems.m_Size )
  {
    v3 = &this->m_hDroppedItems.m_Memory.m_pMemory[iIndex];
    m_Index = v3->m_Index;
    if ( v3->m_Index + 2 > 1 )
    {
      v5 = v3->m_Index;
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[v5 & 0x1FF];
        if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0 )
          {
            result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
            if ( result == 0 )
            {
              CEntityInstance::CreatePublicScriptScope(v7->m_pInstance, 0);
              return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
            }
          }
        }
      }
    }
  }
  return result;
}


// CDOTAGamerules::SetSafeToLeave  (line 2084, @0x0000000002552470, libserver.so)
void __fastcall CDOTAGamerules::SetSafeToLeave(CDOTAGamerules *const this, bool bSafeToLeave)
{
  this->m_bGameIsForcedSafeToLeave = bSafeToLeave;
}


// CDOTAGamerules::DefaultFOV  (line 2150, @0x0000000002552480, libserver.so)
int __fastcall CDOTAGamerules::DefaultFOV(CDOTAGamerules *const this)
{
  return 70;
}


// CDOTA_DisplacementVisibility::~CDOTA_DisplacementVisibility  (line 2357, @0x00000000025558a0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDOTA_DisplacementVisibility::~CDOTA_DisplacementVisibility(CDOTA_DisplacementVisibility *const this)
{
  this->_vptr_IHandleEntity = &off_40FC070;
  CBaseEntity::~CBaseEntity(this);
}


// CDOTA_DisplacementVisibility::~CDOTA_DisplacementVisibility  (line 2357, @0x00000000025558c0, libserver.so)  // inlines: ~CDOTA_DisplacementVisibility
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDOTA_DisplacementVisibility::~CDOTA_DisplacementVisibility(CDOTA_DisplacementVisibility *const this)
{
  this->_vptr_IHandleEntity = &off_40FC070;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_DisplacementVisibility::GetEntityClass  (line 2359, @0x0000000002552490, libserver.so)
CEntityClass *__cdecl CDOTA_DisplacementVisibility::GetEntityClass()
{
  return g_pEntityCDOTA_DisplacementVisibilityClass;
}


// CDOTA_DisplacementVisibility::Schema_DynamicBinding  (line 2359, @0x00000000025524a0, libserver.so)
// globals: CDOTA_DisplacementVisibility::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_DisplacementVisibility::Schema_DynamicBinding(
        const CDOTA_DisplacementVisibility *const this)
{
  return CDOTA_DisplacementVisibility::s_pSchemaBinding;
}


// CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2359, @0x00000000025524b0, libserver.so)
// globals: CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_DisplacementVisibility::CEntityInstanceEntityClass *const this)
{
  return CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::DestructInstance  (line 2359, @0x00000000025524c0, libserver.so)  // inlines: Destruct<CDOTA_DisplacementVisibility>
void __fastcall CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_DisplacementVisibility::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::FreeInstance  (line 2359, @0x00000000025524e0, libserver.so)
void __fastcall CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_DisplacementVisibility::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::CanAllocate  (line 2359, @0x0000000002552500, libserver.so)
bool __fastcall CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_DisplacementVisibility::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2359, @0x0000000002552510, libserver.so)
// globals: CDOTA_DisplacementVisibility::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_DisplacementVisibility::CEntityInstanceEntityClass *const this)
{
  return CDOTA_DisplacementVisibility::s_pSchemaBinding;
}


// CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::AllocateInstance  (line 2359, @0x00000000025553d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_DisplacementVisibility::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2359, @0x0000000002560860, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_DisplacementVisibility::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2359, @0x0000000002560880, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_DisplacementVisibility::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::ConstructInstance  (line 2359, @0x0000000002569ec0, libserver.so)  // inlines: Construct<CDOTA_DisplacementVisibility>
// calls: CDOTA_DisplacementVisibility::CDOTA_DisplacementVisibility
CEntityInstance *__fastcall CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_DisplacementVisibility::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTA_DisplacementVisibility::CDOTA_DisplacementVisibility(p);
  return p;
}


// CDOTA_DisplacementVisibility::GetEntityClassInternal  (line 2359, @0x0000000002575ee0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
// strings: "dota_displacement_visibility", "CDOTA_DisplacementVisibility"
// globals: `guard variable for'CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass, CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_DisplacementVisibility::GetEntityClassInfo(void)::g_EntityCDOTA_DisplacementVisibilityClassInfo, CDOTA_DisplacementVisibility::GetEntityClassInfo(void)::g_EntityCDOTA_DisplacementVisibilityClassInfo
CEntityClass *__cdecl CDOTA_DisplacementVisibility::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass) != 0 )
  {
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_designerName.u.m_Id = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass._vptr_CEntityClass = off_3F79390;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_AllHelpers.m_Size = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_classInputs.m_Size = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_classOutputs.m_Size = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_requiredEHandle.m_Index = -1;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_hNetworkSerializer = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_pBaseClassInfo = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_pClassInfo = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_flags = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_nAllHelpersFlags = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_pScriptClassDesc = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_pInputs = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_nInputCount = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_pOutputs = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_nOutputCount = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_pGameClass = 0;
    CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass._vptr_CEntityClass = off_40F62D0;
    __cxa_guard_release(&`guard variable for'CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass);
    __cxa_atexit(
      CDOTA_DisplacementVisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_DisplacementVisibilityClass != 0 )
    return &CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass;
  if ( `guard variable for'CDOTA_DisplacementVisibility::GetEntityClassInfo(void)::g_EntityCDOTA_DisplacementVisibilityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_DisplacementVisibility::GetEntityClassInfo(void)::g_EntityCDOTA_DisplacementVisibilityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_DisplacementVisibility::GetEntityClassInfo(void)::g_EntityCDOTA_DisplacementVisibilityClassInfo,
      "CDOTA_DisplacementVisibility",
      "dota_displacement_visibility",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_DisplacementVisibility::GetEntityClassInfo(void)::g_EntityCDOTA_DisplacementVisibilityClassInfo);
  }
  CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_pClassInfo = &CDOTA_DisplacementVisibility::GetEntityClassInfo(void)::g_EntityCDOTA_DisplacementVisibilityClassInfo;
  CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_pBaseClassInfo = CDOTA_DisplacementVisibility::GetEntityClassInfo(void)::g_EntityCDOTA_DisplacementVisibilityClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_DisplacementVisibilityClass = &CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass;
  CDOTA_DisplacementVisibility::GetEntityClassInfo(void)::g_EntityCDOTA_DisplacementVisibilityClassInfo.m_pClass = &CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass;
  CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTA_DisplacementVisibilityClass->m_pComponentOverrides = 0;
  return &CDOTA_DisplacementVisibility::GetEntityClassInternal(void)::g_EntityCDOTA_DisplacementVisibilityClass;
}


// CDOTA_DisplacementVisibility::UpdateTransmitState  (line 2370, @0x0000000002555730, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CDOTA_DisplacementVisibility::UpdateTransmitState(CDOTA_DisplacementVisibility *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// GetGameTime  (line 2419, @0x0000000002719370, libserver.so)  // inlines: DOTAGameRules, GetGameTime
float __cdecl GetGameTime()
{
  float result; // xmm0_4

  result = 0.0;
  if ( g_pGameRules != 0 )
    return *&g_pGameRules[18].m_szQuestName[20];
  return result;
}


// CDOTAGameConfiguration::~CDOTAGameConfiguration  (line 2484, @0x0000000002558050, libserver.so)  // inlines: ~CSource1GameConfiguration
// calls: CGameConfiguration::~CGameConfiguration
void __fastcall CDOTAGameConfiguration::~CDOTAGameConfiguration(CDOTAGameConfiguration *const this)
{
  this->CSource1GameConfiguration::CGameConfiguration::CTier4AppSystem<IGameConfiguration,0>::CTier3AppSystem<IGameConfiguration,0>::CTier2AppSystem<IGameConfiguration,0>::CTier1AppSystem<IGameConfiguration,0>::CTier0AppSystem<IGameConfiguration>::CBaseAppSystem<IGameConfiguration>::IGameConfiguration::ISource2ClientConfig::IAppSystem::_vptr_IAppSystem = off_3FFC7D0;
  this->CSource1GameConfiguration::CGameConfiguration::CTier4AppSystem<IGameConfiguration,0>::CTier3AppSystem<IGameConfiguration,0>::CTier2AppSystem<IGameConfiguration,0>::CTier1AppSystem<IGameConfiguration,0>::CTier0AppSystem<IGameConfiguration>::CBaseAppSystem<IGameConfiguration>::IGameConfiguration::ISource2ServerConfig::IAppSystem::_vptr_IAppSystem = off_3FFC948;
  CGameConfiguration::~CGameConfiguration(this);
}


