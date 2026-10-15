
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEconWearable::~CEconWearable  (line 31, @0x0000000002e54d20, libserver.so)  // inlines: Purge, RemoveAll, ~CAttributeContainer, ~CAttributeManager, ~CEconEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NetworkVar_m_AttributeManager, ~NetworkVar_m_Item
// calls: CEconItemView::~CEconItemView, CBaseFlex::~CBaseFlex, CUtlMemory<CAttributeManager::cached_attribute_float_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CEconWearable::~CEconWearable(CEconWearable *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_47A27D0;
  this->_vptr_IHasAttributes = off_47A3058;
  this->m_AttributeManager._vptr_CAttributeManager = &off_479F550;
  this->m_AttributeManager.m_Item._vptr_IEconItemInterface = &off_479F2B0;
  CEconItemView::~CEconItemView(&this->m_AttributeManager.m_Item);
  v2 = (this->m_AttributeManager.m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttributeManager._vptr_CAttributeManager = off_479F4D0;
  this->m_AttributeManager.m_CachedResults.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_AttributeManager.m_CachedResults.m_Memory);
    if ( (this->m_AttributeManager.m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_AttributeManager.m_CachedResults.m_Memory);
  }
  v2 = (this->m_AttributeManager.m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttributeManager.m_Receivers.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Receivers.m_Memory);
    if ( (this->m_AttributeManager.m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Receivers.m_Memory);
  }
  v2 = (this->m_AttributeManager.m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttributeManager.m_Providers.m_Size = 0;
  if ( !v2
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Providers.m_Memory),
        (this->m_AttributeManager.m_Providers.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseFlex::~CBaseFlex(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Providers.m_Memory);
    CBaseFlex::~CBaseFlex(this);
  }
}


// CEconWearable::~CEconWearable  (line 31, @0x0000000002e550e0, libserver.so)  // inlines: Purge, RemoveAll, ~CAttributeContainer, ~CAttributeManager, ~CEconEntity, ~CEconWearable, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NetworkVar_m_AttributeManager, ~NetworkVar_m_Item
// calls: CEconItemView::~CEconItemView, CBaseFlex::~CBaseFlex, CBaseEntity::operator delete, CUtlMemory<CAttributeManager::cached_attribute_float_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CEconWearable::~CEconWearable(CEconWearable *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_47A27D0;
  this->_vptr_IHasAttributes = off_47A3058;
  this->m_AttributeManager._vptr_CAttributeManager = &off_479F550;
  this->m_AttributeManager.m_Item._vptr_IEconItemInterface = &off_479F2B0;
  CEconItemView::~CEconItemView(&this->m_AttributeManager.m_Item);
  v2 = (this->m_AttributeManager.m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttributeManager._vptr_CAttributeManager = off_479F4D0;
  this->m_AttributeManager.m_CachedResults.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_AttributeManager.m_CachedResults.m_Memory);
    if ( (this->m_AttributeManager.m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_AttributeManager.m_CachedResults.m_Memory);
  }
  v2 = (this->m_AttributeManager.m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttributeManager.m_Receivers.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Receivers.m_Memory);
    if ( (this->m_AttributeManager.m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Receivers.m_Memory);
  }
  v2 = (this->m_AttributeManager.m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttributeManager.m_Providers.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Providers.m_Memory);
    if ( (this->m_AttributeManager.m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Providers.m_Memory);
  }
  CBaseFlex::~CBaseFlex(this);
  CBaseEntity::operator delete(this);
}


// CEconWearable::CEntityInstanceEntityClass::DestructInstance  (line 33, @0x0000000002a602b0, libserver.so)  // inlines: Destruct<CEconWearable>
void __fastcall CEconWearable::CEntityInstanceEntityClass::DestructInstance(
        CEconWearable::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEconWearable::CEntityInstanceEntityClass::FreeInstance  (line 33, @0x0000000002a602d0, libserver.so)
void __fastcall CEconWearable::CEntityInstanceEntityClass::FreeInstance(
        CEconWearable::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEconWearable::CEntityInstanceEntityClass::CanAllocate  (line 33, @0x0000000002a602f0, libserver.so)
bool __fastcall CEconWearable::CEntityInstanceEntityClass::CanAllocate(
        const CEconWearable::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEconWearable::CEntityInstanceEntityClass::AllocateInstance  (line 33, @0x0000000002a63ab0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEconWearable::CEntityInstanceEntityClass::AllocateInstance(
        CEconWearable::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1704);
  memset(v1, 0, 0x6A8u);
  return v1;
}


// CEconWearable::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 33, @0x0000000002a64860, libserver.so)  // inlines: Schema_StaticBinding
// calls: CEconWearable::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CEconWearable::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEconWearable::CEntityInstanceEntityClass *const this)
{
  CEconWearable::Schema_VerifyBindingIsRegistered();
  return CEconWearable::s_pSchemaBinding;
}


// CEconWearable::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 33, @0x0000000002a64880, libserver.so)
// calls: CEconWearable::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEconWearable::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEconWearable::CEntityInstanceEntityClass *const this)
{
  CEconWearable::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CEconWearable::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEconWearable::CEntityInstanceEntityClass::ConstructInstance  (line 33, @0x0000000002a648a0, libserver.so)  // inlines: Construct<CEconWearable>
// calls: CEconWearable::CEconWearable
CEntityInstance *__fastcall CEconWearable::CEntityInstanceEntityClass::ConstructInstance(
        CEconWearable::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CEconWearable::CEconWearable(p);
  return p;
}


// CEconWearable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000002a6a780, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEconWearable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEconWearable::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEconWearable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000002a6a7a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEconWearable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEconWearable::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEconWearable::GetEntityClassInfo  (line 33, @0x0000000002a6f6c0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseFlex::GetEntityClassInfo
// callers: CDOTA_Tiny_ScepterTree::GetEntityClassInternal, CTFWearableItem::GetEntityClassInternal
// strings: "wearable_item", "CEconWearable", "CEconEntity"
// globals: `guard variable for'CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo, CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo, `guard variable for'CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo, CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo
CEntityClassInfo *__cdecl CEconWearable::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo != 0 )
    return &CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo) == 0 )
    return &CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo;
  if ( `guard variable for'CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseFlex::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo,
      "CEconEntity",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo,
    "CEconWearable",
    "wearable_item",
    0,
    &CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo);
  return &CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo;
}


// CEconWearable::GetEntityClass  (line 33, @0x0000000002ea1b70, libserver.so)
CEntityClass *__cdecl CEconWearable::GetEntityClass()
{
  return g_pEntityCEconWearableClass;
}


// CEconWearable::Schema_DynamicBinding  (line 33, @0x0000000002ea1b80, libserver.so)
// globals: CEconWearable::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEconWearable::Schema_DynamicBinding(const CEconWearable *const this)
{
  return CEconWearable::s_pSchemaBinding;
}


// CEconWearable::GetEntityClassInternal  (line 33, @0x0000000002eab980, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseFlex::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseFlex::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_economy_02.cpp
// strings: "wearable_item", "CEconWearable", "CEconEntity"
// globals: `guard variable for'CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass, CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CEconWearable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo, CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo, `guard variable for'CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo (9 total)
CEntityClass *__cdecl CEconWearable::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass) != 0 )
  {
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_designerName.u.m_Id = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass._vptr_CEntityClass = off_3F79390;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_ComponentOffsets.m_Size = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_AllHelpers.m_Size = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_instanceUnserializer.m_atomicFields,
      4);
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_classInputs.m_Size = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_classInputs.m_Memory.m_pMemory = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_classOutputs.m_Size = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_requiredEHandle.m_Index = -1;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_hNetworkSerializer = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_pBaseClassInfo = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_pClassInfo = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_flags = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_nAllHelpersFlags = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_pScriptClassDesc = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_pInputs = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_nInputCount = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_pOutputs = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_nOutputCount = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_pGameClass = 0;
    CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass._vptr_CEntityClass = off_438EBF0;
    __cxa_guard_release(&`guard variable for'CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass);
    __cxa_atexit(
      CEconWearable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass,
      &_dso_handle);
  }
  if ( g_pEntityCEconWearableClass != 0 )
    return &CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass;
  if ( `guard variable for'CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo) != 0 )
  {
    if ( `guard variable for'CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseFlex::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo,
        "CEconEntity",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo,
      "CEconWearable",
      "wearable_item",
      0,
      &CEconEntity::GetEntityClassInfo(void)::g_EntityCEconEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo);
  }
  CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_pClassInfo = &CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo;
  CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_pBaseClassInfo = CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo.m_pBaseClassInfo;
  g_pEntityCEconWearableClass = &CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass;
  CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo.m_pClass = &CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass;
  CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass.m_pScriptClassDesc = CBaseFlex::InitScriptDesc();
  g_pEntityCEconWearableClass->m_pComponentOverrides = 0;
  return &CEconWearable::GetEntityClassInternal(void)::g_EntityCEconWearableClass;
}


// CEconWearable::IsWearable  (line 40, @0x0000000002a60300, libserver.so)
bool __fastcall CEconWearable::IsWearable(const CEconWearable *const this)
{
  return 1;
}


// CEconWearable::CanEquip  (line 46, @0x0000000002a60310, libserver.so)
bool __fastcall CEconWearable::CanEquip(CEconWearable *const this, CBaseEntity *pOther)
{
  return 1;
}


// CTFWearableItem::~CTFWearableItem  (line 92, @0x0000000002ea3d30, libserver.so)  // inlines: ~CEconWearable
// calls: CEconEntity::~CEconEntity
void __fastcall CTFWearableItem::~CTFWearableItem(CTFWearableItem *const this)
{
  this->_vptr_IHandleEntity = &off_47A96B0;
  this->_vptr_IHasAttributes = &off_47A9F78;
  CEconEntity::~CEconEntity(this);
}


// CTFWearableItem::~CTFWearableItem  (line 92, @0x0000000002ea3d60, libserver.so)  // inlines: ~CEconWearable, ~CTFWearableItem
// calls: CEconEntity::~CEconEntity, CBaseEntity::operator delete
void __fastcall CTFWearableItem::~CTFWearableItem(CTFWearableItem *const this)
{
  this->_vptr_IHandleEntity = &off_47A96B0;
  this->_vptr_IHasAttributes = &off_47A9F78;
  CEconEntity::~CEconEntity(this);
  CBaseEntity::operator delete(this);
}


// CTFWearableItem::GetEntityClass  (line 94, @0x0000000002ea1ba0, libserver.so)
CEntityClass *__cdecl CTFWearableItem::GetEntityClass()
{
  return g_pEntityCTFWearableItemClass;
}


// CTFWearableItem::Schema_DynamicBinding  (line 94, @0x0000000002ea1bb0, libserver.so)
// globals: CTFWearableItem::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTFWearableItem::Schema_DynamicBinding(const CTFWearableItem *const this)
{
  return CTFWearableItem::s_pSchemaBinding;
}


// CTFWearableItem::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 94, @0x0000000002ea1bd0, libserver.so)
// globals: CTFWearableItem::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTFWearableItem::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTFWearableItem::CEntityInstanceEntityClass *const this)
{
  return CTFWearableItem::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTFWearableItem::CEntityInstanceEntityClass::DestructInstance  (line 94, @0x0000000002ea1be0, libserver.so)  // inlines: Destruct<CTFWearableItem>
void __fastcall CTFWearableItem::CEntityInstanceEntityClass::DestructInstance(
        CTFWearableItem::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTFWearableItem::CEntityInstanceEntityClass::FreeInstance  (line 94, @0x0000000002ea1c00, libserver.so)
void __fastcall CTFWearableItem::CEntityInstanceEntityClass::FreeInstance(
        CTFWearableItem::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTFWearableItem::CEntityInstanceEntityClass::CanAllocate  (line 94, @0x0000000002ea1c20, libserver.so)
bool __fastcall CTFWearableItem::CEntityInstanceEntityClass::CanAllocate(
        const CTFWearableItem::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTFWearableItem::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 94, @0x0000000002ea1c30, libserver.so)
// globals: CTFWearableItem::s_pSchemaBinding
const ISchemaBinding *__fastcall CTFWearableItem::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTFWearableItem::CEntityInstanceEntityClass *const this)
{
  return CTFWearableItem::s_pSchemaBinding;
}


// CTFWearableItem::CEntityInstanceEntityClass::AllocateInstance  (line 94, @0x0000000002ea33c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTFWearableItem::CEntityInstanceEntityClass::AllocateInstance(
        CTFWearableItem::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1704);
  memset(v1, 0, 0x6A8u);
  return v1;
}


// CTFWearableItem::CEntityInstanceEntityClass::ConstructInstance  (line 94, @0x0000000002ea3ce0, libserver.so)  // inlines: CEconWearable, CTFWearableItem, Construct<CTFWearableItem>
// calls: CEconEntity::CEconEntity
CEntityInstance *__fastcall CTFWearableItem::CEntityInstanceEntityClass::ConstructInstance(
        CTFWearableItem::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CEconEntity::CEconEntity(p);
    *(p + 1696) = 0;
    *p = &off_47A9FD0;
    *(p + 170) = &off_47AA898;
  }
  return p;
}


// CTFWearableItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 94, @0x0000000002ea5090, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTFWearableItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTFWearableItem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CTFWearableItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 94, @0x0000000002ea50b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTFWearableItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTFWearableItem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTFWearableItem::GetEntityClassInternal  (line 94, @0x0000000002eabd10, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseFlex::InitScriptDesc, CEconWearable::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_economy_02.cpp
// strings: "CTFWearableItem"
// globals: `guard variable for'CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass, CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CTFWearableItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTFWearableItem::GetEntityClassInfo(void)::g_EntityCTFWearableItemClassInfo, CTFWearableItem::GetEntityClassInfo(void)::g_EntityCTFWearableItemClassInfo
CEntityClass *__cdecl CTFWearableItem::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass) != 0 )
  {
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_designerName.u.m_Id = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass._vptr_CEntityClass = off_3F79390;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_ComponentOffsets.m_Size = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_AllHelpers.m_Size = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_instanceUnserializer.m_atomicFields,
      4);
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_classInputs.m_Size = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_classInputs.m_Memory.m_pMemory = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_classOutputs.m_Size = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_requiredEHandle.m_Index = -1;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_hNetworkSerializer = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_pBaseClassInfo = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_pClassInfo = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_flags = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_nAllHelpersFlags = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_pScriptClassDesc = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_pInputs = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_nInputCount = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_pOutputs = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_nOutputCount = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_pGameClass = 0;
    CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass._vptr_CEntityClass = off_47A5FF0;
    __cxa_guard_release(&`guard variable for'CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass);
    __cxa_atexit(
      CTFWearableItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass,
      &_dso_handle);
  }
  if ( g_pEntityCTFWearableItemClass != 0 )
    return &CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass;
  if ( `guard variable for'CTFWearableItem::GetEntityClassInfo(void)::g_EntityCTFWearableItemClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTFWearableItem::GetEntityClassInfo(void)::g_EntityCTFWearableItemClassInfo) != 0 )
  {
    EntityClassInfo = CEconWearable::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTFWearableItem::GetEntityClassInfo(void)::g_EntityCTFWearableItemClassInfo,
      "CTFWearableItem",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTFWearableItem::GetEntityClassInfo(void)::g_EntityCTFWearableItemClassInfo);
  }
  CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_pClassInfo = &CTFWearableItem::GetEntityClassInfo(void)::g_EntityCTFWearableItemClassInfo;
  CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_pBaseClassInfo = CTFWearableItem::GetEntityClassInfo(void)::g_EntityCTFWearableItemClassInfo.m_pBaseClassInfo;
  g_pEntityCTFWearableItemClass = &CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass;
  CTFWearableItem::GetEntityClassInfo(void)::g_EntityCTFWearableItemClassInfo.m_pClass = &CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass;
  CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass.m_pScriptClassDesc = CBaseFlex::InitScriptDesc();
  g_pEntityCTFWearableItemClass->m_pComponentOverrides = 0;
  return &CTFWearableItem::GetEntityClassInternal(void)::g_EntityCTFWearableItemClass;
}


