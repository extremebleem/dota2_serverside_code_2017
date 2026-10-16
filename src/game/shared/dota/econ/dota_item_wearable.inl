
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAWearableItem::~CDOTAWearableItem  (line 20, @0x0000000002e54e60, libserver.so)  // inlines: Purge, RemoveAll, ~CAttributeContainer, ~CAttributeManager, ~CEconEntity, ~CEconWearable, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NetworkVar_m_AttributeManager, ~NetworkVar_m_Item
// calls: CEconItemView::~CEconItemView, CBaseFlex::~CBaseFlex, CUtlMemory<CAttributeManager::cached_attribute_float_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTAWearableItem::~CDOTAWearableItem(CDOTAWearableItem *const this)
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


// CDOTAWearableItem::~CDOTAWearableItem  (line 20, @0x0000000002e55340, libserver.so)  // inlines: Purge, RemoveAll, ~CAttributeContainer, ~CAttributeManager, ~CDOTAWearableItem, ~CEconEntity, ~CEconWearable, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NetworkVar_m_AttributeManager, ~NetworkVar_m_Item
// calls: CEconItemView::~CEconItemView, CBaseFlex::~CBaseFlex, CBaseEntity::operator delete, CUtlMemory<CAttributeManager::cached_attribute_float_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTAWearableItem::~CDOTAWearableItem(CDOTAWearableItem *const this)
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


// CDOTAWearableItem::CEntityInstanceEntityClass::DestructInstance  (line 22, @0x0000000002a617e0, libserver.so)  // inlines: Destruct<CDOTAWearableItem>
void __fastcall CDOTAWearableItem::CEntityInstanceEntityClass::DestructInstance(
        CDOTAWearableItem::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTAWearableItem::CEntityInstanceEntityClass::FreeInstance  (line 22, @0x0000000002a61800, libserver.so)
void __fastcall CDOTAWearableItem::CEntityInstanceEntityClass::FreeInstance(
        CDOTAWearableItem::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTAWearableItem::CEntityInstanceEntityClass::CanAllocate  (line 22, @0x0000000002a61820, libserver.so)
bool __fastcall CDOTAWearableItem::CEntityInstanceEntityClass::CanAllocate(
        const CDOTAWearableItem::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTAWearableItem::CEntityInstanceEntityClass::AllocateInstance  (line 22, @0x0000000002a641b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTAWearableItem::CEntityInstanceEntityClass::AllocateInstance(
        CDOTAWearableItem::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1712);
  memset(v1, 0, 0x6B0u);
  return v1;
}


// CDOTAWearableItem::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 22, @0x0000000002a67cd0, libserver.so)  // inlines: Schema_StaticBinding
// calls: CDOTAWearableItem::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CDOTAWearableItem::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTAWearableItem::CEntityInstanceEntityClass *const this)
{
  CDOTAWearableItem::Schema_VerifyBindingIsRegistered();
  return CDOTAWearableItem::s_pSchemaBinding;
}


// CDOTAWearableItem::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 22, @0x0000000002a67cf0, libserver.so)
// calls: CDOTAWearableItem::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CDOTAWearableItem::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTAWearableItem::CEntityInstanceEntityClass *const this)
{
  CDOTAWearableItem::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CDOTAWearableItem::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTAWearableItem::CEntityInstanceEntityClass::ConstructInstance  (line 22, @0x0000000002a67d10, libserver.so)  // inlines: Construct<CDOTAWearableItem>
// calls: CDOTAWearableItem::CDOTAWearableItem
CEntityInstance *__fastcall CDOTAWearableItem::CEntityInstanceEntityClass::ConstructInstance(
        CDOTAWearableItem::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTAWearableItem::CDOTAWearableItem(p);
  return p;
}


// CDOTAWearableItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x0000000002a6a7d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTAWearableItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTAWearableItem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTAWearableItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x0000000002a6a7f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTAWearableItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTAWearableItem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTAWearableItem::GetEntityClass  (line 22, @0x0000000002e4f0c0, libserver.so)
CEntityClass *__cdecl CDOTAWearableItem::GetEntityClass()
{
  return g_pEntityCDOTAWearableItemClass;
}


// CDOTAWearableItem::Schema_DynamicBinding  (line 22, @0x0000000002e4f0d0, libserver.so)
// globals: CDOTAWearableItem::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAWearableItem::Schema_DynamicBinding(const CDOTAWearableItem *const this)
{
  return CDOTAWearableItem::s_pSchemaBinding;
}


// CDOTAWearableItem::GetEntityClassInternal  (line 22, @0x0000000002e5d030, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseFlex::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CEconEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: __static_initialization_and_destruction_0
// strings: "dota_item_wearable", "CDOTAWearableItem", "wearable_item", "CEconWearable"
// globals: `guard variable for'CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass, CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTAWearableItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTAWearableItem::GetEntityClassInfo(void)::g_EntityCDOTAWearableItemClassInfo, CDOTAWearableItem::GetEntityClassInfo(void)::g_EntityCDOTAWearableItemClassInfo, `guard variable for'CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo (9 total)
CEntityClass *__cdecl CDOTAWearableItem::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass) != 0 )
  {
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_designerName.u.m_Id = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass._vptr_CEntityClass = off_3F79390;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_ComponentOffsets.m_Size = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_AllHelpers.m_Size = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_classInputs.m_Size = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_classOutputs.m_Size = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_requiredEHandle.m_Index = -1;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_hNetworkSerializer = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_pBaseClassInfo = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_pClassInfo = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_flags = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_nAllHelpersFlags = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_pScriptClassDesc = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_pInputs = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_nInputCount = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_pOutputs = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_nOutputCount = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_pGameClass = 0;
    CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass._vptr_CEntityClass = off_43ACE70;
    __cxa_guard_release(&`guard variable for'CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass);
    __cxa_atexit(
      CDOTAWearableItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTAWearableItemClass != 0 )
    return &CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass;
  if ( `guard variable for'CDOTAWearableItem::GetEntityClassInfo(void)::g_EntityCDOTAWearableItemClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAWearableItem::GetEntityClassInfo(void)::g_EntityCDOTAWearableItemClassInfo) != 0 )
  {
    if ( `guard variable for'CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo) != 0 )
    {
      EntityClassInfo = CEconEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo,
        "CEconWearable",
        "wearable_item",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTAWearableItem::GetEntityClassInfo(void)::g_EntityCDOTAWearableItemClassInfo,
      "CDOTAWearableItem",
      "dota_item_wearable",
      0,
      &CEconWearable::GetEntityClassInfo(void)::g_EntityCEconWearableClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTAWearableItem::GetEntityClassInfo(void)::g_EntityCDOTAWearableItemClassInfo);
  }
  CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_pClassInfo = &CDOTAWearableItem::GetEntityClassInfo(void)::g_EntityCDOTAWearableItemClassInfo;
  CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_pBaseClassInfo = CDOTAWearableItem::GetEntityClassInfo(void)::g_EntityCDOTAWearableItemClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTAWearableItemClass = &CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass;
  CDOTAWearableItem::GetEntityClassInfo(void)::g_EntityCDOTAWearableItemClassInfo.m_pClass = &CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass;
  CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass.m_pScriptClassDesc = CBaseFlex::InitScriptDesc();
  g_pEntityCDOTAWearableItemClass->m_pComponentOverrides = 0;
  return &CDOTAWearableItem::GetEntityClassInternal(void)::g_EntityCDOTAWearableItemClass;
}


