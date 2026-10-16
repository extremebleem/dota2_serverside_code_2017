
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDotaSubquestBase::~CDotaSubquestBase  (line 87, @0x00000000026a08d0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDotaSubquestBase::~CDotaSubquestBase(CDotaSubquestBase *const this)
{
  this->_vptr_IHandleEntity = &off_4172050;
  CBaseEntity::~CBaseEntity(this);
}


// CDotaSubquestBase::~CDotaSubquestBase  (line 87, @0x00000000026a08f0, libserver.so)  // inlines: ~CDotaSubquestBase
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDotaSubquestBase::~CDotaSubquestBase(CDotaSubquestBase *const this)
{
  this->_vptr_IHandleEntity = &off_4172050;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDotaSubquestBase::Schema_DynamicBinding  (line 89, @0x000000000269d140, libserver.so)
// globals: CDotaSubquestBase::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaSubquestBase::Schema_DynamicBinding(const CDotaSubquestBase *const this)
{
  return CDotaSubquestBase::s_pSchemaBinding;
}


// CDotaSubquestBase::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 89, @0x000000000269d150, libserver.so)
// globals: CDotaSubquestBase::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaSubquestBase::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDotaSubquestBase::CEntityInstanceEntityClass *const this)
{
  return CDotaSubquestBase::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDotaSubquestBase::CEntityInstanceEntityClass::DestructInstance  (line 89, @0x000000000269d160, libserver.so)  // inlines: Destruct<CDotaSubquestBase>
void __fastcall CDotaSubquestBase::CEntityInstanceEntityClass::DestructInstance(
        CDotaSubquestBase::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDotaSubquestBase::CEntityInstanceEntityClass::FreeInstance  (line 89, @0x000000000269d180, libserver.so)
void __fastcall CDotaSubquestBase::CEntityInstanceEntityClass::FreeInstance(
        CDotaSubquestBase::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDotaSubquestBase::CEntityInstanceEntityClass::CanAllocate  (line 89, @0x000000000269d1a0, libserver.so)
bool __fastcall CDotaSubquestBase::CEntityInstanceEntityClass::CanAllocate(
        const CDotaSubquestBase::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDotaSubquestBase::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 89, @0x000000000269d1b0, libserver.so)
// globals: CDotaSubquestBase::s_pSchemaBinding
const ISchemaBinding *__fastcall CDotaSubquestBase::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDotaSubquestBase::CEntityInstanceEntityClass *const this)
{
  return CDotaSubquestBase::s_pSchemaBinding;
}


// CDotaSubquestBase::CEntityInstanceEntityClass::AllocateInstance  (line 89, @0x00000000026a0340, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDotaSubquestBase::CEntityInstanceEntityClass::AllocateInstance(
        CDotaSubquestBase::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1376);
  memset(v1, 0, 0x560u);
  return v1;
}


// CDotaSubquestBase::CEntityInstanceEntityClass::ConstructInstance  (line 89, @0x00000000026a06c0, libserver.so)  // inlines: CDotaSubquestBase, CNetworkVarBase, Construct<CDotaSubquestBase>, EnsureValidValue<bool>, EnsureValidValue<int>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDotaSubquestBase::CEntityInstanceEntityClass::ConstructInstance(
        CDotaSubquestBase::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 1032) = 0;
    *p = &off_4172050;
    *(p + 1033) = 0;
    *(p + 1034) = 0;
    *(p + 259) = 0;
    *(p + 278) = 0;
  }
  return p;
}


// CDotaSubquestBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 89, @0x00000000026a5ea0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDotaSubquestBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaSubquestBase::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDotaSubquestBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 89, @0x00000000026a5ec0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDotaSubquestBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaSubquestBase::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDotaSubquestBase::GetEntityClassInfo  (line 89, @0x00000000026a8670, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CDotaSubquestBuyItems::GetEntityClassInternal, CDotaSubquestEntityDeath::GetEntityClassInternal, CDotaSubquestTutorialEvent::GetEntityClassInternal, CDotaSubquestPlayerStat::GetEntityClassInternal, CDotaSubquestAbilityCastCount::GetEntityClassInternal
// strings: "subquest_base", "CDotaSubquestBase", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CDotaSubquestBase::GetEntityClassInfo(void)::g_EntityCDotaSubquestBaseClassInfo, CDotaSubquestBase::GetEntityClassInfo(void)::g_EntityCDotaSubquestBaseClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CDotaSubquestBase::GetEntityClassInfo()
{
  if ( `guard variable for'CDotaSubquestBase::GetEntityClassInfo(void)::g_EntityCDotaSubquestBaseClassInfo != 0 )
    return &CDotaSubquestBase::GetEntityClassInfo(void)::g_EntityCDotaSubquestBaseClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDotaSubquestBase::GetEntityClassInfo(void)::g_EntityCDotaSubquestBaseClassInfo) == 0 )
    return &CDotaSubquestBase::GetEntityClassInfo(void)::g_EntityCDotaSubquestBaseClassInfo;
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
    &CDotaSubquestBase::GetEntityClassInfo(void)::g_EntityCDotaSubquestBaseClassInfo,
    "CDotaSubquestBase",
    "subquest_base",
    0,
    &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CDotaSubquestBase::GetEntityClassInfo(void)::g_EntityCDotaSubquestBaseClassInfo);
  return &CDotaSubquestBase::GetEntityClassInfo(void)::g_EntityCDotaSubquestBaseClassInfo;
}


// CDotaSubquestBase::GetEntityClassInternal  (line 89, @0x00000000026b2470, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDotaSubquestBase>, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_06.cpp
// strings: "subquest_base", "CDotaSubquestBase"
// globals: `guard variable for'CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass, CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDotaSubquestBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDotaSubquestBase::GetEntityClassInfo(void)::g_EntityCDotaSubquestBaseClassInfo, CDotaSubquestBase::GetEntityClassInfo(void)::g_EntityCDotaSubquestBaseClassInfo
CEntityClass *__cdecl CDotaSubquestBase::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass) != 0 )
  {
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_designerName.u.m_Id = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass._vptr_CEntityClass = off_3F79390;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_ComponentOffsets.m_Size = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_AllHelpers.m_Size = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_classInputs.m_Size = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_classOutputs.m_Size = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_requiredEHandle.m_Index = -1;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_hNetworkSerializer = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_pBaseClassInfo = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_pClassInfo = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_flags = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_nAllHelpersFlags = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_pScriptClassDesc = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_pInputs = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_nInputCount = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_pOutputs = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_nOutputCount = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_pGameClass = 0;
    CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass._vptr_CEntityClass = off_416DD90;
    __cxa_guard_release(&`guard variable for'CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass);
    __cxa_atexit(
      CDotaSubquestBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDotaSubquestBaseClass != 0 )
    return &CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass;
  if ( `guard variable for'CDotaSubquestBase::GetEntityClassInfo(void)::g_EntityCDotaSubquestBaseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaSubquestBase::GetEntityClassInfo(void)::g_EntityCDotaSubquestBaseClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDotaSubquestBase::GetEntityClassInfo(void)::g_EntityCDotaSubquestBaseClassInfo,
      "CDotaSubquestBase",
      "subquest_base",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDotaSubquestBase::GetEntityClassInfo(void)::g_EntityCDotaSubquestBaseClassInfo);
  }
  CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_pClassInfo = &CDotaSubquestBase::GetEntityClassInfo(void)::g_EntityCDotaSubquestBaseClassInfo;
  CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_pBaseClassInfo = CDotaSubquestBase::GetEntityClassInfo(void)::g_EntityCDotaSubquestBaseClassInfo.m_pBaseClassInfo;
  g_pEntityCDotaSubquestBaseClass = &CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass;
  CDotaSubquestBase::GetEntityClassInfo(void)::g_EntityCDotaSubquestBaseClassInfo.m_pClass = &CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass;
  CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass.m_pScriptClassDesc = GetScriptDesc<CDotaSubquestBase>(0);
  g_pEntityCDotaSubquestBaseClass->m_pComponentOverrides = 0;
  return &CDotaSubquestBase::GetEntityClassInternal(void)::g_EntityCDotaSubquestBaseClass;
}


// CDotaSubquestBase::GetSubquestClass  (line 96, @0x000000000269d1c0, libserver.so)
subquest_classes_t __fastcall CDotaSubquestBase::GetSubquestClass(CDotaSubquestBase *const this)
{
  return subquest_classes_t::SUBQUEST_CLASS_BASE;
}


// CDotaQuest::~CDotaQuest  (line 147, @0x00000000026a0a10, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDotaQuest::~CDotaQuest(CDotaQuest *const this)
{
  this->_vptr_IHandleEntity = &off_4171290;
  CBaseEntity::~CBaseEntity(this);
}


// CDotaQuest::~CDotaQuest  (line 147, @0x00000000026a0a30, libserver.so)  // inlines: ~CDotaQuest
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDotaQuest::~CDotaQuest(CDotaQuest *const this)
{
  this->_vptr_IHandleEntity = &off_4171290;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDotaQuest::Schema_DynamicBinding  (line 149, @0x000000000269d1d0, libserver.so)
// globals: CDotaQuest::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaQuest::Schema_DynamicBinding(const CDotaQuest *const this)
{
  return CDotaQuest::s_pSchemaBinding;
}


// CDotaQuest::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 149, @0x000000000269d1e0, libserver.so)
// globals: CDotaQuest::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaQuest::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDotaQuest::CEntityInstanceEntityClass *const this)
{
  return CDotaQuest::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDotaQuest::CEntityInstanceEntityClass::DestructInstance  (line 149, @0x000000000269d1f0, libserver.so)  // inlines: Destruct<CDotaQuest>
void __fastcall CDotaQuest::CEntityInstanceEntityClass::DestructInstance(
        CDotaQuest::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDotaQuest::CEntityInstanceEntityClass::FreeInstance  (line 149, @0x000000000269d210, libserver.so)
void __fastcall CDotaQuest::CEntityInstanceEntityClass::FreeInstance(
        CDotaQuest::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDotaQuest::CEntityInstanceEntityClass::CanAllocate  (line 149, @0x000000000269d230, libserver.so)
bool __fastcall CDotaQuest::CEntityInstanceEntityClass::CanAllocate(
        const CDotaQuest::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDotaQuest::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 149, @0x000000000269d240, libserver.so)
// globals: CDotaQuest::s_pSchemaBinding
const ISchemaBinding *__fastcall CDotaQuest::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDotaQuest::CEntityInstanceEntityClass *const this)
{
  return CDotaQuest::s_pSchemaBinding;
}


// CDotaQuest::CEntityInstanceEntityClass::AllocateInstance  (line 149, @0x00000000026a0380, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDotaQuest::CEntityInstanceEntityClass::AllocateInstance(
        CDotaQuest::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1928);
  memset(v1, 0, 0x788u);
  return v1;
}


// CDotaQuest::CEntityInstanceEntityClass::ConstructInstance  (line 149, @0x00000000026a3da0, libserver.so)  // inlines: CDotaQuest, CEntityHandle, CHandle, CNetworkArrayBase, CNetworkVarBase, Construct<CDotaQuest>, EnsureValidValue<bool>, EnsureValidValue<int>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDotaQuest::CEntityInstanceEntityClass::ConstructInstance(
        CDotaQuest::CEntityInstanceEntityClass *const this,
        void *p)
{
  _DWORD *v3; // rdx

  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 322) = 0;
    *p = &off_4171290;
    v3 = p + 1292;
    do
      *v3++ = -1;
    while ( v3 != (p + 1324) );
    *(p + 1324) = 0;
    *(p + 1325) = 0;
    *(p + 1326) = 0;
    *(p + 1327) = 0;
    *(p + 416) = 0;
  }
  return p;
}


// CDotaQuest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 149, @0x00000000026a6080, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDotaQuest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaQuest::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDotaQuest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 149, @0x00000000026a60a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDotaQuest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaQuest::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDotaQuest::GetEntityClassInternal  (line 149, @0x00000000026b3850, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDotaQuest>, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_06.cpp
// strings: "CDotaQuest"
// globals: `guard variable for'CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass, CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDotaQuest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDotaQuest::GetEntityClassInfo(void)::g_EntityCDotaQuestClassInfo, CDotaQuest::GetEntityClassInfo(void)::g_EntityCDotaQuestClassInfo
CEntityClass *__cdecl CDotaQuest::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass) != 0 )
  {
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_designerName.u.m_Id = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass._vptr_CEntityClass = off_3F79390;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_ComponentOffsets.m_Size = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_AllHelpers.m_Size = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_classInputs.m_Size = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_classOutputs.m_Size = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_requiredEHandle.m_Index = -1;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_hNetworkSerializer = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_pBaseClassInfo = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_pClassInfo = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_flags = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_nAllHelpersFlags = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_pScriptClassDesc = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_pInputs = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_nInputCount = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_pOutputs = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_nOutputCount = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_pGameClass = 0;
    CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass._vptr_CEntityClass = off_416DE10;
    __cxa_guard_release(&`guard variable for'CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass);
    __cxa_atexit(
      CDotaQuest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass,
      &_dso_handle);
  }
  if ( g_pEntityCDotaQuestClass != 0 )
    return &CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass;
  if ( `guard variable for'CDotaQuest::GetEntityClassInfo(void)::g_EntityCDotaQuestClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaQuest::GetEntityClassInfo(void)::g_EntityCDotaQuestClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDotaQuest::GetEntityClassInfo(void)::g_EntityCDotaQuestClassInfo,
      "CDotaQuest",
      "quest",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDotaQuest::GetEntityClassInfo(void)::g_EntityCDotaQuestClassInfo);
  }
  CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_pClassInfo = &CDotaQuest::GetEntityClassInfo(void)::g_EntityCDotaQuestClassInfo;
  CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_pBaseClassInfo = CDotaQuest::GetEntityClassInfo(void)::g_EntityCDotaQuestClassInfo.m_pBaseClassInfo;
  g_pEntityCDotaQuestClass = &CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass;
  CDotaQuest::GetEntityClassInfo(void)::g_EntityCDotaQuestClassInfo.m_pClass = &CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass;
  CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass.m_pScriptClassDesc = GetScriptDesc<CDotaQuest>(0);
  g_pEntityCDotaQuestClass->m_pComponentOverrides = 0;
  return &CDotaQuest::GetEntityClassInternal(void)::g_EntityCDotaQuestClass;
}


// CDotaQuest::Script_AddSubquest  (line 164, @0x00000000026a9d70, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDotaQuest::AddSubquest
// globals: `typeinfo for'CDotaSubquestBase
void __fastcall CDotaQuest::Script_AddSubquest(CDotaQuest *const this, HSCRIPT hSubquest)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  const void *v6; // rax
  CDotaSubquestBase *v7; // rax

  if ( hSubquest != 0
    && (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hSubquest, Script)) != 0) )
  {
    v7 = __dynamic_cast(v6, &`typeinfo for'CBaseEntity, &`typeinfo for'CDotaSubquestBase, 0);
    CDotaQuest::AddSubquest(this, v7);
  }
  else
  {
    CDotaQuest::AddSubquest(this, 0);
  }
}


// CDotaQuest::Script_RemoveSubquest  (line 166, @0x00000000026a9e00, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDotaQuest::RemoveSubquest
// globals: `typeinfo for'CDotaSubquestBase
void __fastcall CDotaQuest::Script_RemoveSubquest(CDotaQuest *const this, HSCRIPT hSubquest)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  const void *v6; // rax
  CDotaSubquestBase *v7; // rax

  if ( hSubquest != 0
    && (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hSubquest, Script)) != 0) )
  {
    v7 = __dynamic_cast(v6, &`typeinfo for'CBaseEntity, &`typeinfo for'CDotaSubquestBase, 0);
    CDotaQuest::RemoveSubquest(this, v7);
  }
  else
  {
    CDotaQuest::RemoveSubquest(this, 0);
  }
}


// CDotaQuest::Script_GetSubquestByName  (line 168, @0x00000000026a9e90, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CDotaQuest::GetSubquestByName, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CDotaQuest::Script_GetSubquestByName(CDotaQuest *const this, const char *pszName)
{
  CDotaSubquestBase *SubquestByName; // rax
  CDotaSubquestBase *v4; // [rsp+8h] [rbp-8h]

  SubquestByName = CDotaQuest::GetSubquestByName(this, pszName);
  if ( SubquestByName == 0 )
    return 0;
  if ( SubquestByName->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return SubquestByName->m_pEntity->m_hPublicScope.m_hScope;
  v4 = SubquestByName;
  CEntityInstance::CreatePublicScriptScope(SubquestByName, 0);
  return v4->m_pEntity->m_hPublicScope.m_hScope;
}


// CDotaQuest::Script_GetSubquest  (line 171, @0x00000000026a62c0, libserver.so)  // inlines: EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, GetSubquest, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDotaQuest::Script_GetSubquest(CDotaQuest *const this, int nIndex)
{
  HSCRIPT result; // rax
  CHandle<CDotaSubquestBase> *v3; // rcx
  uint32 m_Index; // edx
  __int16 v5; // si
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CEntityInstance *m_pInstance; // rbx

  result = 0;
  if ( nIndex <= 7 )
  {
    v3 = &this->m_hSubquests.m_Value[nIndex];
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


// CDotaSubquestBuyItems::~CDotaSubquestBuyItems  (line 229, @0x00000000026a4110, libserver.so)  // inlines: Purge, RemoveAll, ~CCopyableUtlVector, ~CDotaSubquestBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CUtlMemory<char const*, int>::Purge
void __fastcall CDotaSubquestBuyItems::~CDotaSubquestBuyItems(CDotaSubquestBuyItems *const this)
{
  bool v2; // zf
  CUtlVectorBase<char const*,CUtlMemory<char const*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_itemList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4172770;
  this->m_itemList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_itemList.m_Memory;
    CUtlMemory<char const*,int>::Purge(&this->m_itemList.m_Memory);
    if ( (this->m_itemList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char const*,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_4172050;
  CBaseEntity::~CBaseEntity(this);
}


// CDotaSubquestBuyItems::~CDotaSubquestBuyItems  (line 229, @0x00000000026a4540, libserver.so)  // inlines: Purge, RemoveAll, ~CCopyableUtlVector, ~CDotaSubquestBase, ~CDotaSubquestBuyItems, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<char const*, int>::Purge
void __fastcall CDotaSubquestBuyItems::~CDotaSubquestBuyItems(CDotaSubquestBuyItems *const this)
{
  bool v2; // zf
  CUtlVectorBase<char const*,CUtlMemory<char const*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_itemList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4172770;
  this->m_itemList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_itemList.m_Memory;
    CUtlMemory<char const*,int>::Purge(&this->m_itemList.m_Memory);
    if ( (this->m_itemList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char const*,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_4172050;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDotaSubquestBuyItems::Schema_DynamicBinding  (line 231, @0x000000000269d250, libserver.so)
// globals: CDotaSubquestBuyItems::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaSubquestBuyItems::Schema_DynamicBinding(
        const CDotaSubquestBuyItems *const this)
{
  return CDotaSubquestBuyItems::s_pSchemaBinding;
}


// CDotaSubquestBuyItems::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 231, @0x000000000269d260, libserver.so)
// globals: CDotaSubquestBuyItems::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaSubquestBuyItems::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDotaSubquestBuyItems::CEntityInstanceEntityClass *const this)
{
  return CDotaSubquestBuyItems::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDotaSubquestBuyItems::CEntityInstanceEntityClass::DestructInstance  (line 231, @0x000000000269d270, libserver.so)  // inlines: Destruct<CDotaSubquestBuyItems>
void __fastcall CDotaSubquestBuyItems::CEntityInstanceEntityClass::DestructInstance(
        CDotaSubquestBuyItems::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDotaSubquestBuyItems::CEntityInstanceEntityClass::FreeInstance  (line 231, @0x000000000269d290, libserver.so)
void __fastcall CDotaSubquestBuyItems::CEntityInstanceEntityClass::FreeInstance(
        CDotaSubquestBuyItems::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDotaSubquestBuyItems::CEntityInstanceEntityClass::CanAllocate  (line 231, @0x000000000269d2b0, libserver.so)
bool __fastcall CDotaSubquestBuyItems::CEntityInstanceEntityClass::CanAllocate(
        const CDotaSubquestBuyItems::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDotaSubquestBuyItems::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 231, @0x000000000269d2c0, libserver.so)
// globals: CDotaSubquestBuyItems::s_pSchemaBinding
const ISchemaBinding *__fastcall CDotaSubquestBuyItems::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDotaSubquestBuyItems::CEntityInstanceEntityClass *const this)
{
  return CDotaSubquestBuyItems::s_pSchemaBinding;
}


// CDotaSubquestBuyItems::CEntityInstanceEntityClass::AllocateInstance  (line 231, @0x00000000026a03c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDotaSubquestBuyItems::CEntityInstanceEntityClass::AllocateInstance(
        CDotaSubquestBuyItems::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1400);
  memset(v1, 0, 0x578u);
  return v1;
}


// CDotaSubquestBuyItems::CEntityInstanceEntityClass::ConstructInstance  (line 231, @0x00000000026a3ca0, libserver.so)  // inlines: CCopyableUtlVector, CDotaSubquestBase, CDotaSubquestBuyItems, CNetworkVarBase, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDotaSubquestBuyItems>, EnsureValidValue<bool>, EnsureValidValue<int>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDotaSubquestBuyItems::CEntityInstanceEntityClass::ConstructInstance(
        CDotaSubquestBuyItems::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 1032) = 0;
    *(p + 1033) = 0;
    *(p + 1034) = 0;
    *(p + 259) = 0;
    *(p + 278) = 0;
    *p = &off_4172770;
    *(p + 344) = 0;
    *(p + 173) = 0;
    *(p + 348) = 0;
    *(p + 349) = 0;
  }
  return p;
}


// CDotaSubquestBuyItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 231, @0x00000000026a5ef0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDotaSubquestBuyItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaSubquestBuyItems::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDotaSubquestBuyItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 231, @0x00000000026a5f10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDotaSubquestBuyItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaSubquestBuyItems::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDotaSubquestBuyItems::GetEntityClassInternal  (line 231, @0x00000000026b27c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDotaSubquestBase>, CDotaSubquestBase::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_06.cpp
// strings: "subquest_buy_items", "CDotaSubquestBuyItems"
// globals: `guard variable for'CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass, CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDotaSubquestBuyItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDotaSubquestBuyItems::GetEntityClassInfo(void)::g_EntityCDotaSubquestBuyItemsClassInfo, CDotaSubquestBuyItems::GetEntityClassInfo(void)::g_EntityCDotaSubquestBuyItemsClassInfo
CEntityClass *__cdecl CDotaSubquestBuyItems::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass) != 0 )
  {
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_designerName.u.m_Id = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass._vptr_CEntityClass = off_3F79390;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_ComponentOffsets.m_Size = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_AllHelpers.m_Size = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_classInputs.m_Size = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_classOutputs.m_Size = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_requiredEHandle.m_Index = -1;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_hNetworkSerializer = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_pBaseClassInfo = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_pClassInfo = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_flags = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_nAllHelpersFlags = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_pScriptClassDesc = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_pInputs = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_nInputCount = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_pOutputs = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_nOutputCount = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_pGameClass = 0;
    CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass._vptr_CEntityClass = off_416DE90;
    __cxa_guard_release(&`guard variable for'CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass);
    __cxa_atexit(
      CDotaSubquestBuyItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDotaSubquestBuyItemsClass != 0 )
    return &CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass;
  if ( `guard variable for'CDotaSubquestBuyItems::GetEntityClassInfo(void)::g_EntityCDotaSubquestBuyItemsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaSubquestBuyItems::GetEntityClassInfo(void)::g_EntityCDotaSubquestBuyItemsClassInfo) != 0 )
  {
    EntityClassInfo = CDotaSubquestBase::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDotaSubquestBuyItems::GetEntityClassInfo(void)::g_EntityCDotaSubquestBuyItemsClassInfo,
      "CDotaSubquestBuyItems",
      "subquest_buy_items",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDotaSubquestBuyItems::GetEntityClassInfo(void)::g_EntityCDotaSubquestBuyItemsClassInfo);
  }
  CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_pClassInfo = &CDotaSubquestBuyItems::GetEntityClassInfo(void)::g_EntityCDotaSubquestBuyItemsClassInfo;
  CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_pBaseClassInfo = CDotaSubquestBuyItems::GetEntityClassInfo(void)::g_EntityCDotaSubquestBuyItemsClassInfo.m_pBaseClassInfo;
  g_pEntityCDotaSubquestBuyItemsClass = &CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass;
  CDotaSubquestBuyItems::GetEntityClassInfo(void)::g_EntityCDotaSubquestBuyItemsClassInfo.m_pClass = &CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass;
  CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass.m_pScriptClassDesc = GetScriptDesc<CDotaSubquestBase>(0);
  g_pEntityCDotaSubquestBuyItemsClass->m_pComponentOverrides = 0;
  return &CDotaSubquestBuyItems::GetEntityClassInternal(void)::g_EntityCDotaSubquestBuyItemsClass;
}


// CDotaSubquestBuyItems::GetSubquestClass  (line 237, @0x000000000269d2d0, libserver.so)
subquest_classes_t __fastcall CDotaSubquestBuyItems::GetSubquestClass(CDotaSubquestBuyItems *const this)
{
  return subquest_classes_t::SUBQUEST_CLASS_BUY_ITEMS;
}


// CDotaSubquestEntityDeath::~CDotaSubquestEntityDeath  (line 258, @0x00000000026a4bf0, libserver.so)  // inlines: Purge, RemoveAll, ~CDotaSubquestBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CUtlMemory<CUtlSymbolLarge, int>::Purge
void __fastcall CDotaSubquestEntityDeath::~CDotaSubquestEntityDeath(CDotaSubquestEntityDeath *const this)
{
  bool v2; // zf
  CUtlMemory<CUtlSymbolLarge,int> *p_m_Memory; // r12

  v2 = (this->m_entityNameList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4172E10;
  this->m_entityNameList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_entityNameList.m_Memory;
    CUtlMemory<CUtlSymbolLarge,int>::Purge(&this->m_entityNameList.m_Memory);
    if ( (this->m_entityNameList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSymbolLarge,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_4172050;
  CBaseEntity::~CBaseEntity(this);
}


// CDotaSubquestEntityDeath::~CDotaSubquestEntityDeath  (line 258, @0x00000000026a4c60, libserver.so)  // inlines: Purge, RemoveAll, ~CDotaSubquestBase, ~CDotaSubquestEntityDeath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CUtlSymbolLarge, int>::Purge
void __fastcall CDotaSubquestEntityDeath::~CDotaSubquestEntityDeath(CDotaSubquestEntityDeath *const this)
{
  bool v2; // zf
  CUtlMemory<CUtlSymbolLarge,int> *p_m_Memory; // r12

  v2 = (this->m_entityNameList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4172E10;
  this->m_entityNameList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_entityNameList.m_Memory;
    CUtlMemory<CUtlSymbolLarge,int>::Purge(&this->m_entityNameList.m_Memory);
    if ( (this->m_entityNameList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSymbolLarge,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_4172050;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDotaSubquestEntityDeath::Schema_DynamicBinding  (line 260, @0x000000000269d2e0, libserver.so)
// globals: CDotaSubquestEntityDeath::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaSubquestEntityDeath::Schema_DynamicBinding(
        const CDotaSubquestEntityDeath *const this)
{
  return CDotaSubquestEntityDeath::s_pSchemaBinding;
}


// CDotaSubquestEntityDeath::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 260, @0x000000000269d2f0, libserver.so)
// globals: CDotaSubquestEntityDeath::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaSubquestEntityDeath::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDotaSubquestEntityDeath::CEntityInstanceEntityClass *const this)
{
  return CDotaSubquestEntityDeath::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDotaSubquestEntityDeath::CEntityInstanceEntityClass::DestructInstance  (line 260, @0x000000000269d300, libserver.so)  // inlines: Destruct<CDotaSubquestEntityDeath>
void __fastcall CDotaSubquestEntityDeath::CEntityInstanceEntityClass::DestructInstance(
        CDotaSubquestEntityDeath::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDotaSubquestEntityDeath::CEntityInstanceEntityClass::FreeInstance  (line 260, @0x000000000269d320, libserver.so)
void __fastcall CDotaSubquestEntityDeath::CEntityInstanceEntityClass::FreeInstance(
        CDotaSubquestEntityDeath::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDotaSubquestEntityDeath::CEntityInstanceEntityClass::CanAllocate  (line 260, @0x000000000269d340, libserver.so)
bool __fastcall CDotaSubquestEntityDeath::CEntityInstanceEntityClass::CanAllocate(
        const CDotaSubquestEntityDeath::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDotaSubquestEntityDeath::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 260, @0x000000000269d350, libserver.so)
// globals: CDotaSubquestEntityDeath::s_pSchemaBinding
const ISchemaBinding *__fastcall CDotaSubquestEntityDeath::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDotaSubquestEntityDeath::CEntityInstanceEntityClass *const this)
{
  return CDotaSubquestEntityDeath::s_pSchemaBinding;
}


// CDotaSubquestEntityDeath::CEntityInstanceEntityClass::AllocateInstance  (line 260, @0x00000000026a0400, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDotaSubquestEntityDeath::CEntityInstanceEntityClass::AllocateInstance(
        CDotaSubquestEntityDeath::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1400);
  memset(v1, 0, 0x578u);
  return v1;
}


// CDotaSubquestEntityDeath::CEntityInstanceEntityClass::ConstructInstance  (line 260, @0x00000000026a3d20, libserver.so)  // inlines: CDotaSubquestBase, CDotaSubquestEntityDeath, CNetworkVarBase, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDotaSubquestEntityDeath>, EnsureValidValue<bool>, EnsureValidValue<int>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDotaSubquestEntityDeath::CEntityInstanceEntityClass::ConstructInstance(
        CDotaSubquestEntityDeath::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 1032) = 0;
    *(p + 1033) = 0;
    *(p + 1034) = 0;
    *(p + 259) = 0;
    *(p + 278) = 0;
    *p = &off_4172E10;
    *(p + 344) = 0;
    *(p + 173) = 0;
    *(p + 348) = 0;
    *(p + 349) = 0;
  }
  return p;
}


// CDotaSubquestEntityDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 260, @0x00000000026a5f40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDotaSubquestEntityDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaSubquestEntityDeath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDotaSubquestEntityDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 260, @0x00000000026a5f60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDotaSubquestEntityDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaSubquestEntityDeath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDotaSubquestEntityDeath::GetEntityClassInternal  (line 260, @0x00000000026b2b10, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDotaSubquestBase>, CDotaSubquestBase::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_06.cpp
// strings: "subquest_entity_death", "CDotaSubquestEntityDeath"
// globals: `guard variable for'CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass, CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDotaSubquestEntityDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDotaSubquestEntityDeath::GetEntityClassInfo(void)::g_EntityCDotaSubquestEntityDeathClassInfo, CDotaSubquestEntityDeath::GetEntityClassInfo(void)::g_EntityCDotaSubquestEntityDeathClassInfo
CEntityClass *__cdecl CDotaSubquestEntityDeath::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass) != 0 )
  {
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_designerName.u.m_Id = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass._vptr_CEntityClass = off_3F79390;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_ComponentOffsets.m_Size = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_AllHelpers.m_Size = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_classInputs.m_Size = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_classOutputs.m_Size = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_requiredEHandle.m_Index = -1;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_hNetworkSerializer = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_pBaseClassInfo = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_pClassInfo = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_flags = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_nAllHelpersFlags = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_pScriptClassDesc = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_pInputs = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_nInputCount = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_pOutputs = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_nOutputCount = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_pGameClass = 0;
    CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass._vptr_CEntityClass = off_416DF10;
    __cxa_guard_release(&`guard variable for'CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass);
    __cxa_atexit(
      CDotaSubquestEntityDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass,
      &_dso_handle);
  }
  if ( g_pEntityCDotaSubquestEntityDeathClass != 0 )
    return &CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass;
  if ( `guard variable for'CDotaSubquestEntityDeath::GetEntityClassInfo(void)::g_EntityCDotaSubquestEntityDeathClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaSubquestEntityDeath::GetEntityClassInfo(void)::g_EntityCDotaSubquestEntityDeathClassInfo) != 0 )
  {
    EntityClassInfo = CDotaSubquestBase::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDotaSubquestEntityDeath::GetEntityClassInfo(void)::g_EntityCDotaSubquestEntityDeathClassInfo,
      "CDotaSubquestEntityDeath",
      "subquest_entity_death",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDotaSubquestEntityDeath::GetEntityClassInfo(void)::g_EntityCDotaSubquestEntityDeathClassInfo);
  }
  CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_pClassInfo = &CDotaSubquestEntityDeath::GetEntityClassInfo(void)::g_EntityCDotaSubquestEntityDeathClassInfo;
  CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_pBaseClassInfo = CDotaSubquestEntityDeath::GetEntityClassInfo(void)::g_EntityCDotaSubquestEntityDeathClassInfo.m_pBaseClassInfo;
  g_pEntityCDotaSubquestEntityDeathClass = &CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass;
  CDotaSubquestEntityDeath::GetEntityClassInfo(void)::g_EntityCDotaSubquestEntityDeathClassInfo.m_pClass = &CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass;
  CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass.m_pScriptClassDesc = GetScriptDesc<CDotaSubquestBase>(0);
  g_pEntityCDotaSubquestEntityDeathClass->m_pComponentOverrides = 0;
  return &CDotaSubquestEntityDeath::GetEntityClassInternal(void)::g_EntityCDotaSubquestEntityDeathClass;
}


// CDotaSubquestEntityDeath::GetSubquestClass  (line 266, @0x000000000269d360, libserver.so)
subquest_classes_t __fastcall CDotaSubquestEntityDeath::GetSubquestClass(CDotaSubquestEntityDeath *const this)
{
  return subquest_classes_t::SUBQUEST_CLASS_ENTITY_DEATH;
}


// CDotaSubquestTutorialEvent::~CDotaSubquestTutorialEvent  (line 287, @0x00000000026a0920, libserver.so)  // inlines: ~CDotaSubquestBase
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDotaSubquestTutorialEvent::~CDotaSubquestTutorialEvent(CDotaSubquestTutorialEvent *const this)
{
  this->_vptr_IHandleEntity = &off_4172050;
  CBaseEntity::~CBaseEntity(this);
}


// CDotaSubquestTutorialEvent::~CDotaSubquestTutorialEvent  (line 287, @0x00000000026a0940, libserver.so)  // inlines: ~CDotaSubquestBase, ~CDotaSubquestTutorialEvent
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDotaSubquestTutorialEvent::~CDotaSubquestTutorialEvent(CDotaSubquestTutorialEvent *const this)
{
  this->_vptr_IHandleEntity = &off_4172050;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDotaSubquestTutorialEvent::Schema_DynamicBinding  (line 289, @0x000000000269d370, libserver.so)
// globals: CDotaSubquestTutorialEvent::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaSubquestTutorialEvent::Schema_DynamicBinding(
        const CDotaSubquestTutorialEvent *const this)
{
  return CDotaSubquestTutorialEvent::s_pSchemaBinding;
}


// CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 289, @0x000000000269d380, libserver.so)
// globals: CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDotaSubquestTutorialEvent::CEntityInstanceEntityClass *const this)
{
  return CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::DestructInstance  (line 289, @0x000000000269d390, libserver.so)  // inlines: Destruct<CDotaSubquestTutorialEvent>
void __fastcall CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::DestructInstance(
        CDotaSubquestTutorialEvent::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::FreeInstance  (line 289, @0x000000000269d3b0, libserver.so)
void __fastcall CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::FreeInstance(
        CDotaSubquestTutorialEvent::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::CanAllocate  (line 289, @0x000000000269d3d0, libserver.so)
bool __fastcall CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::CanAllocate(
        const CDotaSubquestTutorialEvent::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 289, @0x000000000269d3e0, libserver.so)
// globals: CDotaSubquestTutorialEvent::s_pSchemaBinding
const ISchemaBinding *__fastcall CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDotaSubquestTutorialEvent::CEntityInstanceEntityClass *const this)
{
  return CDotaSubquestTutorialEvent::s_pSchemaBinding;
}


// CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::AllocateInstance  (line 289, @0x00000000026a0440, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::AllocateInstance(
        CDotaSubquestTutorialEvent::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1384);
  memset(v1, 0, 0x568u);
  return v1;
}


// CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::ConstructInstance  (line 289, @0x00000000026a0720, libserver.so)  // inlines: CDotaSubquestBase, CDotaSubquestTutorialEvent, CNetworkVarBase, CUtlSymbolLarge, Construct<CDotaSubquestTutorialEvent>, EnsureValidValue<bool>, EnsureValidValue<int>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::ConstructInstance(
        CDotaSubquestTutorialEvent::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 1032) = 0;
    *(p + 1033) = 0;
    *(p + 1034) = 0;
    *(p + 259) = 0;
    *(p + 278) = 0;
    *p = &off_41734B0;
    *(p + 172) = 0;
  }
  return p;
}


// CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 289, @0x00000000026a5f90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaSubquestTutorialEvent::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 289, @0x00000000026a5fb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaSubquestTutorialEvent::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDotaSubquestTutorialEvent::GetEntityClassInternal  (line 289, @0x00000000026b2e60, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDotaSubquestBase>, CDotaSubquestBase::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_06.cpp
// strings: "subquest_tutorial_event", "CDotaSubquestTutorialEvent"
// globals: `guard variable for'CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass, CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDotaSubquestTutorialEvent::GetEntityClassInfo(void)::g_EntityCDotaSubquestTutorialEventClassInfo, CDotaSubquestTutorialEvent::GetEntityClassInfo(void)::g_EntityCDotaSubquestTutorialEventClassInfo
CEntityClass *__cdecl CDotaSubquestTutorialEvent::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass) != 0 )
  {
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_designerName.u.m_Id = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass._vptr_CEntityClass = off_3F79390;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_ComponentOffsets.m_Size = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_AllHelpers.m_Size = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_classInputs.m_Size = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_classOutputs.m_Size = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_requiredEHandle.m_Index = -1;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_hNetworkSerializer = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_pBaseClassInfo = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_pClassInfo = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_flags = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_nAllHelpersFlags = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_pScriptClassDesc = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_pInputs = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_nInputCount = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_pOutputs = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_nOutputCount = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_pGameClass = 0;
    CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass._vptr_CEntityClass = off_416DF90;
    __cxa_guard_release(&`guard variable for'CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass);
    __cxa_atexit(
      CDotaSubquestTutorialEvent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass,
      &_dso_handle);
  }
  if ( g_pEntityCDotaSubquestTutorialEventClass != 0 )
    return &CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass;
  if ( `guard variable for'CDotaSubquestTutorialEvent::GetEntityClassInfo(void)::g_EntityCDotaSubquestTutorialEventClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaSubquestTutorialEvent::GetEntityClassInfo(void)::g_EntityCDotaSubquestTutorialEventClassInfo) != 0 )
  {
    EntityClassInfo = CDotaSubquestBase::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDotaSubquestTutorialEvent::GetEntityClassInfo(void)::g_EntityCDotaSubquestTutorialEventClassInfo,
      "CDotaSubquestTutorialEvent",
      "subquest_tutorial_event",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDotaSubquestTutorialEvent::GetEntityClassInfo(void)::g_EntityCDotaSubquestTutorialEventClassInfo);
  }
  CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_pClassInfo = &CDotaSubquestTutorialEvent::GetEntityClassInfo(void)::g_EntityCDotaSubquestTutorialEventClassInfo;
  CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_pBaseClassInfo = CDotaSubquestTutorialEvent::GetEntityClassInfo(void)::g_EntityCDotaSubquestTutorialEventClassInfo.m_pBaseClassInfo;
  g_pEntityCDotaSubquestTutorialEventClass = &CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass;
  CDotaSubquestTutorialEvent::GetEntityClassInfo(void)::g_EntityCDotaSubquestTutorialEventClassInfo.m_pClass = &CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass;
  CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass.m_pScriptClassDesc = GetScriptDesc<CDotaSubquestBase>(0);
  g_pEntityCDotaSubquestTutorialEventClass->m_pComponentOverrides = 0;
  return &CDotaSubquestTutorialEvent::GetEntityClassInternal(void)::g_EntityCDotaSubquestTutorialEventClass;
}


// CDotaSubquestTutorialEvent::GetSubquestClass  (line 295, @0x000000000269d3f0, libserver.so)
subquest_classes_t __fastcall CDotaSubquestTutorialEvent::GetSubquestClass(CDotaSubquestTutorialEvent *const this)
{
  return subquest_classes_t::SUBQUEST_CLASS_TUTORIAL_EVENT;
}


// CDotaSubquestPlayerStat::~CDotaSubquestPlayerStat  (line 329, @0x00000000026a0970, libserver.so)  // inlines: ~CDotaSubquestBase
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDotaSubquestPlayerStat::~CDotaSubquestPlayerStat(CDotaSubquestPlayerStat *const this)
{
  this->_vptr_IHandleEntity = &off_4172050;
  CBaseEntity::~CBaseEntity(this);
}


// CDotaSubquestPlayerStat::~CDotaSubquestPlayerStat  (line 329, @0x00000000026a0990, libserver.so)  // inlines: ~CDotaSubquestBase, ~CDotaSubquestPlayerStat
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDotaSubquestPlayerStat::~CDotaSubquestPlayerStat(CDotaSubquestPlayerStat *const this)
{
  this->_vptr_IHandleEntity = &off_4172050;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDotaSubquestPlayerStat::Schema_DynamicBinding  (line 331, @0x000000000269d400, libserver.so)
// globals: CDotaSubquestPlayerStat::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaSubquestPlayerStat::Schema_DynamicBinding(
        const CDotaSubquestPlayerStat *const this)
{
  return CDotaSubquestPlayerStat::s_pSchemaBinding;
}


// CDotaSubquestPlayerStat::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 331, @0x000000000269d410, libserver.so)
// globals: CDotaSubquestPlayerStat::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaSubquestPlayerStat::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDotaSubquestPlayerStat::CEntityInstanceEntityClass *const this)
{
  return CDotaSubquestPlayerStat::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDotaSubquestPlayerStat::CEntityInstanceEntityClass::DestructInstance  (line 331, @0x000000000269d420, libserver.so)  // inlines: Destruct<CDotaSubquestPlayerStat>
void __fastcall CDotaSubquestPlayerStat::CEntityInstanceEntityClass::DestructInstance(
        CDotaSubquestPlayerStat::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDotaSubquestPlayerStat::CEntityInstanceEntityClass::FreeInstance  (line 331, @0x000000000269d440, libserver.so)
void __fastcall CDotaSubquestPlayerStat::CEntityInstanceEntityClass::FreeInstance(
        CDotaSubquestPlayerStat::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDotaSubquestPlayerStat::CEntityInstanceEntityClass::CanAllocate  (line 331, @0x000000000269d460, libserver.so)
bool __fastcall CDotaSubquestPlayerStat::CEntityInstanceEntityClass::CanAllocate(
        const CDotaSubquestPlayerStat::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDotaSubquestPlayerStat::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 331, @0x000000000269d470, libserver.so)
// globals: CDotaSubquestPlayerStat::s_pSchemaBinding
const ISchemaBinding *__fastcall CDotaSubquestPlayerStat::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDotaSubquestPlayerStat::CEntityInstanceEntityClass *const this)
{
  return CDotaSubquestPlayerStat::s_pSchemaBinding;
}


// CDotaSubquestPlayerStat::CEntityInstanceEntityClass::AllocateInstance  (line 331, @0x00000000026a0480, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDotaSubquestPlayerStat::CEntityInstanceEntityClass::AllocateInstance(
        CDotaSubquestPlayerStat::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1384);
  memset(v1, 0, 0x568u);
  return v1;
}


// CDotaSubquestPlayerStat::CEntityInstanceEntityClass::ConstructInstance  (line 331, @0x00000000026a0790, libserver.so)  // inlines: CDotaSubquestBase, CDotaSubquestPlayerStat, CNetworkVarBase, Construct<CDotaSubquestPlayerStat>, EnsureValidValue<bool>, EnsureValidValue<int>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDotaSubquestPlayerStat::CEntityInstanceEntityClass::ConstructInstance(
        CDotaSubquestPlayerStat::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 1032) = 0;
    *(p + 1033) = 0;
    *(p + 1034) = 0;
    *(p + 259) = 0;
    *(p + 278) = 0;
    *p = &off_4173B50;
  }
  return p;
}


// CDotaSubquestPlayerStat::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 331, @0x00000000026a5fe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDotaSubquestPlayerStat::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaSubquestPlayerStat::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDotaSubquestPlayerStat::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 331, @0x00000000026a6000, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDotaSubquestPlayerStat::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaSubquestPlayerStat::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDotaSubquestPlayerStat::GetEntityClassInternal  (line 331, @0x00000000026b31b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDotaSubquestBase>, CDotaSubquestBase::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_06.cpp
// strings: "subquest_player_stat", "CDotaSubquestPlayerStat"
// globals: `guard variable for'CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass, CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDotaSubquestPlayerStat::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDotaSubquestPlayerStat::GetEntityClassInfo(void)::g_EntityCDotaSubquestPlayerStatClassInfo, CDotaSubquestPlayerStat::GetEntityClassInfo(void)::g_EntityCDotaSubquestPlayerStatClassInfo
CEntityClass *__cdecl CDotaSubquestPlayerStat::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass) != 0 )
  {
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_designerName.u.m_Id = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass._vptr_CEntityClass = off_3F79390;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_ComponentOffsets.m_Size = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_AllHelpers.m_Size = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_classInputs.m_Size = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_classOutputs.m_Size = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_requiredEHandle.m_Index = -1;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_hNetworkSerializer = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_pBaseClassInfo = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_pClassInfo = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_flags = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_nAllHelpersFlags = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_pScriptClassDesc = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_pInputs = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_nInputCount = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_pOutputs = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_nOutputCount = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_pGameClass = 0;
    CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass._vptr_CEntityClass = off_416E010;
    __cxa_guard_release(&`guard variable for'CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass);
    __cxa_atexit(
      CDotaSubquestPlayerStat::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass,
      &_dso_handle);
  }
  if ( g_pEntityCDotaSubquestPlayerStatClass != 0 )
    return &CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass;
  if ( `guard variable for'CDotaSubquestPlayerStat::GetEntityClassInfo(void)::g_EntityCDotaSubquestPlayerStatClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaSubquestPlayerStat::GetEntityClassInfo(void)::g_EntityCDotaSubquestPlayerStatClassInfo) != 0 )
  {
    EntityClassInfo = CDotaSubquestBase::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDotaSubquestPlayerStat::GetEntityClassInfo(void)::g_EntityCDotaSubquestPlayerStatClassInfo,
      "CDotaSubquestPlayerStat",
      "subquest_player_stat",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDotaSubquestPlayerStat::GetEntityClassInfo(void)::g_EntityCDotaSubquestPlayerStatClassInfo);
  }
  CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_pClassInfo = &CDotaSubquestPlayerStat::GetEntityClassInfo(void)::g_EntityCDotaSubquestPlayerStatClassInfo;
  CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_pBaseClassInfo = CDotaSubquestPlayerStat::GetEntityClassInfo(void)::g_EntityCDotaSubquestPlayerStatClassInfo.m_pBaseClassInfo;
  g_pEntityCDotaSubquestPlayerStatClass = &CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass;
  CDotaSubquestPlayerStat::GetEntityClassInfo(void)::g_EntityCDotaSubquestPlayerStatClassInfo.m_pClass = &CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass;
  CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass.m_pScriptClassDesc = GetScriptDesc<CDotaSubquestBase>(0);
  g_pEntityCDotaSubquestPlayerStatClass->m_pComponentOverrides = 0;
  return &CDotaSubquestPlayerStat::GetEntityClassInternal(void)::g_EntityCDotaSubquestPlayerStatClass;
}


// CDotaSubquestPlayerStat::GetSubquestClass  (line 337, @0x000000000269d480, libserver.so)
subquest_classes_t __fastcall CDotaSubquestPlayerStat::GetSubquestClass(CDotaSubquestPlayerStat *const this)
{
  return subquest_classes_t::SUBQUEST_CLASS_PLAYER_STAT;
}


// CDotaSubquestAbilityCastCount::~CDotaSubquestAbilityCastCount  (line 361, @0x00000000026a09c0, libserver.so)  // inlines: ~CDotaSubquestBase
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDotaSubquestAbilityCastCount::~CDotaSubquestAbilityCastCount(
        CDotaSubquestAbilityCastCount *const this)
{
  this->_vptr_IHandleEntity = &off_4172050;
  CBaseEntity::~CBaseEntity(this);
}


// CDotaSubquestAbilityCastCount::~CDotaSubquestAbilityCastCount  (line 361, @0x00000000026a09e0, libserver.so)  // inlines: ~CDotaSubquestAbilityCastCount, ~CDotaSubquestBase
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDotaSubquestAbilityCastCount::~CDotaSubquestAbilityCastCount(
        CDotaSubquestAbilityCastCount *const this)
{
  this->_vptr_IHandleEntity = &off_4172050;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDotaSubquestAbilityCastCount::Schema_DynamicBinding  (line 363, @0x000000000269d490, libserver.so)
// globals: CDotaSubquestAbilityCastCount::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaSubquestAbilityCastCount::Schema_DynamicBinding(
        const CDotaSubquestAbilityCastCount *const this)
{
  return CDotaSubquestAbilityCastCount::s_pSchemaBinding;
}


// CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 363, @0x000000000269d4a0, libserver.so)
// globals: CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass *const this)
{
  return CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::DestructInstance  (line 363, @0x000000000269d4b0, libserver.so)  // inlines: Destruct<CDotaSubquestAbilityCastCount>
void __fastcall CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::DestructInstance(
        CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::FreeInstance  (line 363, @0x000000000269d4d0, libserver.so)
void __fastcall CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::FreeInstance(
        CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::CanAllocate  (line 363, @0x000000000269d4f0, libserver.so)
bool __fastcall CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::CanAllocate(
        const CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 363, @0x000000000269d500, libserver.so)
// globals: CDotaSubquestAbilityCastCount::s_pSchemaBinding
const ISchemaBinding *__fastcall CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass *const this)
{
  return CDotaSubquestAbilityCastCount::s_pSchemaBinding;
}


// CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::AllocateInstance  (line 363, @0x00000000026a04c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::AllocateInstance(
        CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1392);
  memset(v1, 0, 0x570u);
  return v1;
}


// CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::ConstructInstance  (line 363, @0x00000000026a07f0, libserver.so)  // inlines: CDotaSubquestAbilityCastCount, CDotaSubquestBase, CNetworkVarBase, Construct<CDotaSubquestAbilityCastCount>, EnsureValidValue<bool>, EnsureValidValue<int>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::ConstructInstance(
        CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 1032) = 0;
    *(p + 1033) = 0;
    *(p + 1034) = 0;
    *(p + 259) = 0;
    *(p + 278) = 0;
    *p = &off_41741F0;
  }
  return p;
}


// CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 363, @0x00000000026a6030, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 363, @0x00000000026a6050, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDotaSubquestAbilityCastCount::GetEntityClassInternal  (line 363, @0x00000000026b3500, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDotaSubquestBase>, CDotaSubquestBase::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_06.cpp
// strings: "subquest_ability_cast_count", "CDotaSubquestAbilityCastCount"
// globals: `guard variable for'CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass, CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDotaSubquestAbilityCastCount::GetEntityClassInfo(void)::g_EntityCDotaSubquestAbilityCastCountClassInfo, CDotaSubquestAbilityCastCount::GetEntityClassInfo(void)::g_EntityCDotaSubquestAbilityCastCountClassInfo
CEntityClass *__cdecl CDotaSubquestAbilityCastCount::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass) != 0 )
  {
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_designerName.u.m_Id = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass._vptr_CEntityClass = off_3F79390;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_ComponentOffsets.m_Size = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_AllHelpers.m_Size = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_classInputs.m_Size = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_classOutputs.m_Size = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_requiredEHandle.m_Index = -1;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_hNetworkSerializer = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_pBaseClassInfo = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_pClassInfo = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_flags = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_nAllHelpersFlags = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_pScriptClassDesc = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_pInputs = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_nInputCount = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_pOutputs = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_nOutputCount = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_pGameClass = 0;
    CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass._vptr_CEntityClass = off_416E090;
    __cxa_guard_release(&`guard variable for'CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass);
    __cxa_atexit(
      CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass,
      &_dso_handle);
  }
  if ( g_pEntityCDotaSubquestAbilityCastCountClass != 0 )
    return &CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass;
  if ( `guard variable for'CDotaSubquestAbilityCastCount::GetEntityClassInfo(void)::g_EntityCDotaSubquestAbilityCastCountClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaSubquestAbilityCastCount::GetEntityClassInfo(void)::g_EntityCDotaSubquestAbilityCastCountClassInfo) != 0 )
  {
    EntityClassInfo = CDotaSubquestBase::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDotaSubquestAbilityCastCount::GetEntityClassInfo(void)::g_EntityCDotaSubquestAbilityCastCountClassInfo,
      "CDotaSubquestAbilityCastCount",
      "subquest_ability_cast_count",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDotaSubquestAbilityCastCount::GetEntityClassInfo(void)::g_EntityCDotaSubquestAbilityCastCountClassInfo);
  }
  CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_pClassInfo = &CDotaSubquestAbilityCastCount::GetEntityClassInfo(void)::g_EntityCDotaSubquestAbilityCastCountClassInfo;
  CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_pBaseClassInfo = CDotaSubquestAbilityCastCount::GetEntityClassInfo(void)::g_EntityCDotaSubquestAbilityCastCountClassInfo.m_pBaseClassInfo;
  g_pEntityCDotaSubquestAbilityCastCountClass = &CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass;
  CDotaSubquestAbilityCastCount::GetEntityClassInfo(void)::g_EntityCDotaSubquestAbilityCastCountClassInfo.m_pClass = &CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass;
  CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass.m_pScriptClassDesc = GetScriptDesc<CDotaSubquestBase>(0);
  g_pEntityCDotaSubquestAbilityCastCountClass->m_pComponentOverrides = 0;
  return &CDotaSubquestAbilityCastCount::GetEntityClassInternal(void)::g_EntityCDotaSubquestAbilityCastCountClass;
}


// CDotaSubquestAbilityCastCount::GetSubquestClass  (line 369, @0x000000000269d510, libserver.so)
subquest_classes_t __fastcall CDotaSubquestAbilityCastCount::GetSubquestClass(
        CDotaSubquestAbilityCastCount *const this)
{
  return subquest_classes_t::SUBQUEST_CLASS_ABILITY_CAST_COUNT;
}


// CDOTA_QuestSystem::~CDOTA_QuestSystem  (line 390, @0x00000000026a4ef0, libserver.so)  // inlines: StopListeningForAllEvents, ~CGameEventListener, ~IGameEventListener2
// calls: IGameSystem::~IGameSystem
void __fastcall CDOTA_QuestSystem::~CDOTA_QuestSystem(CDOTA_QuestSystem *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = off_4174890;  // vptr: CDOTA_QuestSystem
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  IGameSystem::~IGameSystem(this);
}


// CDOTA_QuestSystem::~CDOTA_QuestSystem  (line 390, @0x00000000026a50b0, libserver.so)  // inlines: StopListeningForAllEvents, ~CDOTA_QuestSystem, ~CGameEventListener, ~IGameEventListener2
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CDOTA_QuestSystem::~CDOTA_QuestSystem(CDOTA_QuestSystem *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = off_4174890;  // vptr: CDOTA_QuestSystem
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTA_QuestSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 392, @0x000000000269d520, libserver.so)
void __fastcall CDOTA_QuestSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CDOTA_QuestSystem *const this)
{
  ;
}


// CDOTA_QuestSystem::DoesGameSystemReallocate  (line 392, @0x000000000269d530, libserver.so)
// globals: CDOTA_QuestSystem::sm_Factory
bool __fastcall CDOTA_QuestSystem::DoesGameSystemReallocate(const CDOTA_QuestSystem *const this)
{
  return (*(CDOTA_QuestSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_QuestSystem::sm_Factory);
}


// CDOTA_QuestSystem::SetGameSystemGlobalPtrs  (line 392, @0x000000000269d550, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_QuestSystem::sm_Factory
void __fastcall CDOTA_QuestSystem::SetGameSystemGlobalPtrs(CDOTA_QuestSystem *const this, void *pValue)
{
  if ( CDOTA_QuestSystem::sm_Factory != 0 )
    (*(CDOTA_QuestSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTA_QuestSystem::sm_Factory, pValue);
}


