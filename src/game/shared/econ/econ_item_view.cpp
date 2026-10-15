// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_item_view.cpp:616
class CEconItemAttributeIterator_EconItemViewWrapper : public IEconItemAttributeIterator {
public:

private:

	const CAttributeList * m_pAttributeList;  // +0x8
	CEconItemAttributeIterator_EconItemViewWrapper(CEconItemAttributeIterator_EconItemViewWrapper &);
	CEconItemAttributeIterator_EconItemViewWrapper(const CEconItemAttributeIterator_EconItemViewWrapper &);
	CEconItemAttributeIterator_EconItemViewWrapper(const CAttributeList *, IEconItemAttributeIterator *);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, attrib_value_t);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, float);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, uint64);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_String &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_ItemDynamicRecipeComponent &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_Socket &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_HeroStatue &);
	virtual ~CEconItemAttributeIterator_EconItemViewWrapper();

	// vtable[2] OnIterateAttributeValue
	// vtable[3] OnIterateAttributeValue
	// vtable[4] OnIterateAttributeValue
	// vtable[5] OnIterateAttributeValue
	// vtable[6] OnIterateAttributeValue
	// vtable[7] OnIterateAttributeValue
	// vtable[8] OnIterateAttributeValue
	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEconItemAttribute::CEconItemAttribute  (line 95, @0x0000000002e6ffe0, libserver.so)  // inlines: CEntityOwnerPtr, CNetworkVarBase, CSmartPtr, ChangeAccessorFieldPathIndex_t, EnsureValidValue<float>, EnsureValidValue<short unsigned int>
// calls: CEconItemAttribute::Init
// callers: CSchemaClassBinding<CEconItemAttribute>::Allocate, CSchemaClassBinding<CEconItemAttribute>::ConstructInPlace, CSchemaUtlVectorManipulator<CUtlVector<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> >, CEconItemAttribute>::SwapItems, CSchemaClassBinding<CEconItemAttribute>::AllocateAndCopyConstruct, CAttributeList::SetRuntimeAttributeValue, CUtlVectorBase<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> >::SetCount, CSchemaUtlVectorManipulator<CUtlVector<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> >, CEconItemAttribute>::InsertMultipleBefore
void __fastcall CEconItemAttribute::CEconItemAttribute(CEconItemAttribute *const this)
{
  this->_vptr_CEconItemAttribute = &off_47A5F80;
  this->m_flValue.m_Value = 0.0;
  this->__m_pChainEntity.m_pObj = CEntitySpawnHelper::gm_pCurEntityPtr;
  this->__m_PathIndex.m_Value = -1;
  this->m_iAttributeDefinitionIndex.m_Value = 0;
  CEconItemAttribute::Init(this);
}


// CEconItemAttribute::Init  (line 103, @0x0000000002e6ff40, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<float>, operator=<short unsigned int>
// callers: CEconItemAttribute::CEconItemAttribute
void __fastcall CEconItemAttribute::Init(CEconItemAttribute *const this)
{
  CEntityInstance *m_pObj; // rdi
  CEntityInstance *v3; // rdi

  if ( this->m_iAttributeDefinitionIndex.m_Value != 0xFFFF )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 18, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_iAttributeDefinitionIndex.m_Value = -1;
  }
  if ( this->m_flValue.m_Value != 0.0 )
  {
    v3 = this->__m_pChainEntity.m_pObj;
    if ( v3 != 0 && (v3->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(v3->_vptr_IHandleEntity + 22))(v3, 20, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value, 0.0);
    this->m_flValue.m_Value = 0.0;
  }
}


// CEconItemAttribute::operator=  (line 112, @0x0000000002e70020, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=
// callers: CSchemaUtlVectorManipulator<CUtlVector<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> >, CEconItemAttribute>::SwapItems, CSchemaClassBinding<CEconItemAttribute>::AllocateAndCopyConstruct, CSchemaClassBinding<CEconItemAttribute>::Copy, CEconItemView::CopyInternal, CAtomicManipulator<CUtlVector<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> > >::Copy, CAtomicManipulator<CUtlVector<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> > >::AllocateAndCopy, CAttributeList::operator=, CSchemaClassBinding<CAttributeList>::Copy, CSchemaClassBinding<CAttributeList>::AllocateAndCopyConstruct
void __fastcall CEconItemAttribute::operator=(CEconItemAttribute *const this, const CEconItemAttribute *const val)
{
  unsigned __int16 m_Value; // ax
  CEntityInstance *m_pObj; // rdi
  float v6; // xmm0_4
  CEntityInstance *v7; // rdi

  m_Value = val->m_iAttributeDefinitionIndex.m_Value;
  if ( this->m_iAttributeDefinitionIndex.m_Value != m_Value )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 18, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      m_Value = val->m_iAttributeDefinitionIndex.m_Value;
    }
    this->m_iAttributeDefinitionIndex.m_Value = m_Value;
  }
  v6 = val->m_flValue.m_Value;
  if ( v6 != this->m_flValue.m_Value )
  {
    v7 = this->__m_pChainEntity.m_pObj;
    if ( v7 != 0 && (v7->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v7->_vptr_IHandleEntity + 22))(v7, 20, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v6 = val->m_flValue.m_Value;
    }
    this->m_flValue.m_Value = v6;
  }
}


// CEconItemAttribute::GetStaticData  (line 121, @0x0000000002e99020, libserver.so)  // inlines: GetItemSchema
// calls: ItemSystem, CEconItemSchema::GetAttributeDefinition
// callers: CAttributeList::IterateAttributes, CAttributeList::RemoveAttribute, CAttributeList::GetAttributeByID, CAttributeList::GetAttributeByName
const CEconItemAttributeDefinition *__fastcall CEconItemAttribute::GetStaticData(const CEconItemAttribute *const this)
{
  int m_Value; // ebx
  CEconItemSystem *v2; // rax

  m_Value = this->m_iAttributeDefinitionIndex.m_Value;
  v2 = ItemSystem();
  return CEconItemSchema::GetAttributeDefinition(&v2->m_itemSchema, m_Value);
}


// CAttributeList::GetDataDescMap  (line 140, @0x0000000002e695a0, libserver.so)
// globals: CAttributeList::m_DataMap
datamap_t *__fastcall CAttributeList::GetDataDescMap(CAttributeList *const this)
{
  return &CAttributeList::m_DataMap;
}


// CAttributeList::AddDatadescMetadataKeys  (line 140, @0x0000000002e700e0, libserver.so)
void __fastcall CAttributeList::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CAttributeList::GetBaseMap  (line 140, @0x0000000002e700f0, libserver.so)
datamap_t *__cdecl CAttributeList::GetBaseMap()
{
  return 0;
}


// DataMapInit<CAttributeList>  (line 140, @0x0000000002e70100, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_economy_02.cpp
// strings: "CAttributeList"
// globals: `guard variable for'DataMapInit<CAttributeList>(CAttributeList *)::nameHolder, DataMapInit<CAttributeList>(CAttributeList *)::dataDesc, CAttributeList::m_DataMap, DataMapInit<CAttributeList>(CAttributeList *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CAttributeList>(CAttributeList *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CAttributeList>(CAttributeList *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CAttributeList>(CAttributeList *)::nameHolder) != 0 )
  {
    DataMapInit<CAttributeList>(CAttributeList *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CAttributeList>(CAttributeList *)::nameHolder.m_pszBase = "CAttributeList";
    DataMapInit<CAttributeList>(CAttributeList *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CAttributeList>(CAttributeList *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CAttributeList>(CAttributeList *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CAttributeList>(CAttributeList *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CAttributeList>(CAttributeList *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CAttributeList>(CAttributeList *)::nameHolder,
      &_dso_handle);
  }
  CAttributeList::m_DataMap.baseMap = 0;
  CAttributeList::m_DataMap.dataDesc = DataMapInit<CAttributeList>(CAttributeList *)::dataDesc;
  CAttributeList::m_DataMap.dataNumFields = 1;
  return &CAttributeList::m_DataMap;
}


// CEconItemView::GetDataDescMap  (line 177, @0x0000000002e695b0, libserver.so)
// globals: CEconItemView::m_DataMap
datamap_t *__fastcall CEconItemView::GetDataDescMap(CEconItemView *const this)
{
  return &CEconItemView::m_DataMap;
}


// CEconItemView::AddDatadescMetadataKeys  (line 177, @0x0000000002e701c0, libserver.so)
void __fastcall CEconItemView::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CEconItemView::GetBaseMap  (line 177, @0x0000000002e701d0, libserver.so)
datamap_t *__cdecl CEconItemView::GetBaseMap()
{
  return 0;
}


// DataMapInit<CEconItemView>  (line 177, @0x0000000002e701e0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_economy_02.cpp
// strings: "CEconItemView"
// globals: `guard variable for'DataMapInit<CEconItemView>(CEconItemView *)::nameHolder, CEconItemView::m_DataMap, DataMapInit<CEconItemView>(CEconItemView *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEconItemView>(CEconItemView *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEconItemView>(CEconItemView *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEconItemView>(CEconItemView *)::nameHolder) != 0 )
  {
    DataMapInit<CEconItemView>(CEconItemView *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEconItemView>(CEconItemView *)::nameHolder.m_pszBase = "CEconItemView";
    DataMapInit<CEconItemView>(CEconItemView *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEconItemView>(CEconItemView *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEconItemView>(CEconItemView *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEconItemView>(CEconItemView *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEconItemView>(CEconItemView *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEconItemView>(CEconItemView *)::nameHolder,
      &_dso_handle);
  }
  CEconItemView::m_DataMap.baseMap = 0;
  CEconItemView::m_DataMap.dataDesc = &DataMapInit<CEconItemView>(CEconItemView *)::dataDesc[1];
  CEconItemView::m_DataMap.dataNumFields = 6;
  return &CEconItemView::m_DataMap;
}


// CEconItemView::CEconItemView  (line 199, @0x0000000002e77700, libserver.so)  // inlines: CNetworkVarBase, EnsureValidValue<bool>, EnsureValidValue<int>, EnsureValidValue<style_index_t>, EnsureValidValue<unsigned int>, NetworkStateChanged, NetworkVar_m_AttributeList, Set, SetItemID, item_definition_index_t, itemid_t, operator=<bool>, operator=<int>, operator=<item_definition_index_t>, operator=<itemid_t>, operator=<style_index_t>, ~IEconItemInterface
// calls: CAttributeList::CAttributeList, CAssetModifierContainer::CAssetModifierContainer, CAssetModifierContainer::~CAssetModifierContainer, CEconItemView::NetworkVar_m_AttributeList::~NetworkVar_m_AttributeList, _Unwind_Resume
// callers: CDOTA_BaseNPC::PrecacheWearables, CDOTA_BaseNPC::SpawnWearables, CDOTA_BaseNPC_Hero::Precache, CDOTA_BaseNPC_Effigy_Statue::GetBaseModelName, CDOTA_BaseNPC_Effigy_Statue::Precache, CDOTA_BaseNPC_Effigy_Statue::Spawn, CEconItemLoadout::CEconItemLoadout, CSchemaClassBinding<CAttributeContainer>::ConstructInPlace, CSchemaClassBinding<CAttributeContainer>::Allocate, CEconEntity::CEconEntity, CDOTAInventoryManager::CDOTAInventoryManager, CDOTAPlayerInventory::GetEconItemViewInFreeLoadout (22 total)
// globals: INVALID_ITEM_DEF_INDEX, INVALID_STYLE_INDEX
void __fastcall CEconItemView::CEconItemView(CEconItemView *const this)
{
  uint16 m_Data; // r12
  uint8 v3; // r12
  unsigned int m_Value; // eax
  bool v5; // zf
  unsigned int v6; // eax

  this->_vptr_IEconItemInterface = &off_47A92F0;
  this->m_iItemDefinitionIndex.m_Value.m_Data = 0;
  this->m_iEntityQuality.m_Value = 0;
  this->m_iEntityLevel.m_Value = 0;
  this->m_iItemID.m_Value.m_Data = 0;
  this->m_iAccountID.m_Value = 0;
  this->m_iInventoryPosition.m_Value = 0;
  this->m_bInitialized.m_Value = 0;
  this->m_nOverrideStyle.m_Value.m_Data = 0;
  CAttributeList::CAttributeList(&this->m_AttributeList);
  this->m_AttributeList._vptr_CAttributeList = &off_47A5FB0;
  CAssetModifierContainer::CAssetModifierContainer(&this->m_AssetModifiers);
  m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
  if ( INVALID_ITEM_DEF_INDEX.m_Data != this->m_iItemDefinitionIndex.m_Value.m_Data )
  {
    (*(this->_vptr_IEconItemInterface + 31))(this, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iItemDefinitionIndex.m_Value.m_Data = m_Data;
  }
  if ( this->m_iEntityQuality.m_Value != -1 )
  {
    (*(this->_vptr_IEconItemInterface + 31))(this, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iEntityQuality.m_Value = -1;
  }
  if ( this->m_iEntityLevel.m_Value != 0 )
  {
    (*(this->_vptr_IEconItemInterface + 31))(this, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iEntityLevel.m_Value = 0;
  }
  if ( this->m_iItemID.m_Value.m_Data != 0 )
  {
    (*(this->_vptr_IEconItemInterface + 31))(this, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_Value = this->m_iInventoryPosition.m_Value;
    this->m_iItemID.m_Value.m_Data = 0;
    if ( m_Value == 0 )
    {
LABEL_9:
      if ( !this->m_bInitialized.m_Value )
        goto LABEL_10;
LABEL_15:
      (*(this->_vptr_IEconItemInterface + 31))(this, 48, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v6 = this->m_iAccountID.m_Value;
      this->m_bInitialized.m_Value = 0;
      if ( v6 == 0 )
        goto LABEL_11;
      goto LABEL_16;
    }
  }
  else if ( this->m_iInventoryPosition.m_Value == 0 )
  {
    goto LABEL_9;
  }
  (*(this->_vptr_IEconItemInterface + 31))(this, 36, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v5 = !this->m_bInitialized.m_Value;
  this->m_iInventoryPosition.m_Value = 0;
  if ( !v5 )
    goto LABEL_15;
LABEL_10:
  if ( this->m_iAccountID.m_Value != 0 )
  {
LABEL_16:
    (*(this->_vptr_IEconItemInterface + 31))(this, 32, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iAccountID.m_Value = 0;
  }
LABEL_11:
  v3 = INVALID_STYLE_INDEX.m_Data;
  this->m_bHasComputedAttachedParticles = 0;
  this->m_bHasAttachedParticles = 0;
  this->m_pNonSOEconItem = 0;
  if ( this->m_nOverrideStyle.m_Value.m_Data != v3 )
  {
    (*(this->_vptr_IEconItemInterface + 31))(this, 49, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nOverrideStyle.m_Value.m_Data = v3;
  }
}


// CEconItemView::~CEconItemView  (line 227, @0x0000000002e771c0, libserver.so)  // inlines: Purge, ~CAttributeList, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector, ~IEconItemInterface, ~NetworkVar_m_AttributeList
// calls: CAssetModifierContainer::~CAssetModifierContainer, operator delete, CUtlVectorBase<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> >::RemoveAll, CUtlMemory<CEconItemAttribute, int>::Purge
// callers: CDOTA_BaseNPC::SpawnWearables, CEntityKeyComplex<CEconItemView>::DeleteThis, CDOTA_BaseNPC_Effigy_Statue::GetBaseModelName, CDOTA_BaseNPC_Effigy_Statue::Precache, CDOTA_BaseNPC_Effigy_Statue::Spawn, CAttributeContainer::NetworkVar_m_Item::~NetworkVar_m_Item, CAttributeContainer::~CAttributeContainer, CEconEntity::NetworkVar_m_AttributeManager::~NetworkVar_m_AttributeManager, CEconEntity::~CEconEntity, CEconWearable::~CEconWearable, CDOTAWearableItem::~CDOTAWearableItem, CBaseAttributableItem::~CBaseAttributableItem (16 total)
void __fastcall CEconItemView::~CEconItemView(CEconItemView *const this)
{
  CEconItem *m_pNonSOEconItem; // rdi
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rdi

  this->_vptr_IEconItemInterface = &off_47A92F0;
  m_pNonSOEconItem = this->m_pNonSOEconItem;
  if ( m_pNonSOEconItem != 0 )
  {
    (*(m_pNonSOEconItem->_vptr_CSharedObject + 1))(m_pNonSOEconItem);
    this->m_pNonSOEconItem = 0;
  }
  CAssetModifierContainer::~CAssetModifierContainer(&this->m_AssetModifiers);
  m_pArraySizeChangedDelegate = this->m_AttributeList.m_Attributes.m_pArraySizeChangedDelegate;
  this->m_AttributeList._vptr_CAttributeList = off_47A92B0;
  operator delete(m_pArraySizeChangedDelegate);
  CUtlVectorBase<CEconItemAttribute,CNetworkUtlVector_MemoryType<CEconItemAttribute,-1>>::RemoveAll(&this->m_AttributeList.m_Attributes.m_Vector);
  if ( (this->m_AttributeList.m_Attributes.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CEconItemAttribute,int>::Purge(&this->m_AttributeList.m_Attributes.m_Vector.m_Memory),
        (this->m_AttributeList.m_Attributes.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    this->_vptr_IEconItemInterface = &off_47A67F0;
  }
  else
  {
    CUtlMemory<CEconItemAttribute,int>::Purge(&this->m_AttributeList.m_Attributes.m_Vector.m_Memory);
    this->_vptr_IEconItemInterface = &off_47A67F0;
  }
}


// CEconItemView::~CEconItemView  (line 227, @0x0000000002e77260, libserver.so)
// calls: CEconItemView::~CEconItemView, operator delete
void __fastcall CEconItemView::~CEconItemView(CEconItemView *const this)
{
  CEconItemView::~CEconItemView(this);
  operator delete(this);
}


// CEconItemView::CEconItemView  (line 244, @0x0000000002e78c70, libserver.so)  // inlines: CNetworkVarBase, EnsureValidValue<bool>, EnsureValidValue<int>, EnsureValidValue<style_index_t>, EnsureValidValue<unsigned int>, NetworkVar_m_AttributeList, item_definition_index_t, itemid_t, ~IEconItemInterface
// calls: CAttributeList::CAttributeList, CAssetModifierContainer::CAssetModifierContainer, CEconItemView::operator=, _Unwind_Resume, CAssetModifierContainer::~CAssetModifierContainer, CEconItemView::NetworkVar_m_AttributeList::~NetworkVar_m_AttributeList
// callers: CDOTA_BaseNPC::UpdateAssetModifiers, CDOTA_BaseNPC::PrecacheWearables, CDOTA_Modifier_MudGolem_RockDestroy::OnDeath, CDOTA_BaseNPC_Hero::BuildWearableSpawnList, CDOTA_BaseNPC_Hero::Precache
void __fastcall CEconItemView::CEconItemView(CEconItemView *const this, const CEconItemView *const src)
{
  this->_vptr_IEconItemInterface = &off_47A92F0;
  this->m_iItemDefinitionIndex.m_Value.m_Data = 0;
  this->m_iEntityQuality.m_Value = 0;
  this->m_iEntityLevel.m_Value = 0;
  this->m_iItemID.m_Value.m_Data = 0;
  this->m_iAccountID.m_Value = 0;
  this->m_iInventoryPosition.m_Value = 0;
  this->m_bInitialized.m_Value = 0;
  this->m_nOverrideStyle.m_Value.m_Data = 0;
  CAttributeList::CAttributeList(&this->m_AttributeList);
  this->m_AttributeList._vptr_CAttributeList = &off_47A5FB0;
  CAssetModifierContainer::CAssetModifierContainer(&this->m_AssetModifiers);
  this->m_pNonSOEconItem = 0;
  CEconItemView::operator=(this, src);
}


// CEconItemView::InitInternal  (line 258, @0x0000000002e9a390, libserver.so)  // inlines: Clear, Get, GetPathData, Init, IsUsingFixedPaths, LeafCodeInfo_t, MakeTestItemID, NetworkStateChanged, OnSizeChanged, Path_RemoveAll, Path_SetCount, Purge, Resolve, RollItemLevel, Set, SetItemID, SetNonSOEconItem, V_memcpy, memcpy, operator CEntityInstance*, operator(), operator=, operator=<bool>, operator=<int>, operator=<item_definition_index_t>, operator=<itemid_t>, operator=<style_index_t>, operator=<unsigned char>, operator=<unsigned int>
// calls: GetNetworkSerializerForEntityInstance, memcpy, CUtlVectorBase<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> >::RemoveAll, CUtlMemory<CEconItemAttribute, int>::Purge, CEconItemView::GetStaticData, ItemSystem, EntityInstanceSetNetworkStateChanged, RandomInt, CUtlVectorEmbeddedNetworkVar<CEconItemAttribute, CAttributeList::NetworkVar_m_Attributes, -1>::Resolve, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess (13 total)
// callers: CEconItemView::Init, CPlayerInventory::AddTestItem, CPlayerInventory::FilloutItemFromEconItem
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CEconItemView::InitInternal(
        CEconItemView *const this,
        item_definition_index_t iDefIndex,
        int iQuality,
        int iLevel,
        uint32 iAccountID,
        CEconItem *pNonSOEconItem,
        style_index_t unStyleOverride)
{
  CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1> *p_m_Attributes; // r11
  CEntityInstance *m_pObj; // rcx
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rdx
  void **v15; // rax
  __int64 v16; // rdx
  size_t v17; // rdx
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v20; // rdi
  const GameItemDefinition_t *StaticData; // r13
  CEconItemSystem *v22; // rax
  CEconItem *m_pNonSOEconItem; // rdi
  int m_nItemQuality; // ebx
  unsigned int v25; // ebx
  CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1> *v26; // [rsp+8h] [rbp-98h]
  CEntityInstance *v27; // [rsp+18h] [rbp-88h]
  void (__fastcall *testItemID)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1> *, bool *); // [rsp+20h] [rbp-80h]
  itemid_t testItemIDb; // [rsp+20h] [rbp-80h]
  itemid_t testItemIDa; // [rsp+20h] [rbp-80h]
  LeafCodeInfo_t v32; // [rsp+30h] [rbp-70h] BYREF
  void *src[2]; // [rsp+50h] [rbp-50h] BYREF
  __int16 v34; // [rsp+60h] [rbp-40h]
  char v35; // [rsp+62h] [rbp-3Eh]

  p_m_Attributes = &this->m_AttributeList.m_Attributes;
  if ( this->m_AttributeList.m_Attributes.m_Vector.m_Size > 0 )
  {
    if ( !this->m_AttributeList.m_Attributes.m_bResolved )
    {
      m_pObj = this->m_AttributeList.m_Attributes.m_pOwnerEntity.m_pObj;
      this->m_AttributeList.m_Attributes.m_bResolved = 1;
      if ( m_pObj != 0 )
      {
        v26 = &this->m_AttributeList.m_Attributes;
        v27 = m_pObj;
        testItemID = *(*g_pFlattenedSerializers + 272LL);
        NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
        testItemID(
          src,
          g_pFlattenedSerializers,
          NetworkSerializerForEntityInstance,
          v27,
          v26,
          &this->m_AttributeList.m_Attributes.m_bIsNetworkVarExcluded);
        v15 = src;
        p_m_Attributes = v26;
        if ( &this->m_AttributeList.m_Attributes.m_PathToVector != src )
        {
          v16 = v34;
          this->m_AttributeList.m_Attributes.m_PathToVector.m_bUsingExternalPaths = 0;
          if ( v16 > 6 )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
              goto LABEL_58;
            while ( 1 )
            {
              if ( Plat_ShouldCollectMiniDumpsForFatalErrors() != 0 )
                loc_0 = -559038737;
              Plat_ExitProcess(1);
LABEL_58:
              v32.m_szFile = "../../public/tier2/fieldpath.h";
              v32.m_szFunction = "Path_SetCount";
              v32.m_nLine = 442;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v32,
                "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                6);
            }
          }
          this->m_AttributeList.m_Attributes.m_PathToVector.m_nCount = v16;
          if ( v16 > 0 )
          {
            v17 = 2 * v16;
            if ( v35 != 0 )
              v15 = src[0];
            memcpy(&this->m_AttributeList.m_Attributes.m_PathToVector, v15, v17);
            p_m_Attributes = v26;
          }
        }
      }
      else
      {
        if ( this->m_AttributeList.m_Attributes.m_PathToVector.m_bUsingExternalPaths )
          CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1>::Resolve(this);
        this->m_AttributeList.m_Attributes.m_PathToVector.m_nCount = 0;
      }
    }
    if ( !this->m_AttributeList.m_Attributes.m_bIsNetworkVarExcluded )
    {
      testItemIDa.m_Data = p_m_Attributes;
      EntityInstanceSetNetworkStateChanged(this->m_AttributeList.m_Attributes.m_pOwnerEntity.m_pObj);
      p_m_Attributes = testItemIDa.m_Data;
    }
  }
  CUtlVectorBase<CEconItemAttribute,CNetworkUtlVector_MemoryType<CEconItemAttribute,-1>>::RemoveAll(&p_m_Attributes->m_Vector);
  if ( (this->m_AttributeList.m_Attributes.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CEconItemAttribute,int>::Purge(&this->m_AttributeList.m_Attributes.m_Vector.m_Memory);
  m_pArraySizeChangedDelegate = this->m_AttributeList.m_Attributes.m_pArraySizeChangedDelegate;
  if ( m_pArraySizeChangedDelegate != 0 )
  {
    pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
    v20 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v20 - 1);
    pfn(v20);
  }
  if ( iDefIndex.m_Data != this->m_iItemDefinitionIndex.m_Value.m_Data )
  {
    (*(this->_vptr_IEconItemInterface + 31))(this, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iItemDefinitionIndex.m_Value = iDefIndex;
  }
  StaticData = CEconItemView::GetStaticData(this);
  if ( StaticData != 0 )
  {
    v22 = ItemSystem();
    if ( (*(v22->m_itemSchema._vptr_IEconItemSchema + 46))(
           &v22->m_itemSchema,
           this->m_iItemDefinitionIndex.m_Value.m_Data) != 0 )
    {
      if ( this->m_iItemDefinitionIndex.m_Value.m_Data - 65537LL != this->m_iItemID.m_Value.m_Data )
      {
        testItemIDb.m_Data = this->m_iItemDefinitionIndex.m_Value.m_Data - 65537LL;
        (*(this->_vptr_IEconItemInterface + 31))(this, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_iItemID.m_Value = testItemIDb;
      }
    }
    else if ( this->m_iItemID.m_Value.m_Data != 0 )
    {
      (*(this->_vptr_IEconItemInterface + 31))(this, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iItemID.m_Value.m_Data = 0;
    }
    if ( !this->m_bInitialized.m_Value )
    {
      (*(this->_vptr_IEconItemInterface + 31))(this, 48, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bInitialized.m_Value = 1;
    }
    if ( iAccountID != this->m_iAccountID.m_Value )
    {
      (*(this->_vptr_IEconItemInterface + 31))(this, 32, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iAccountID.m_Value = iAccountID;
    }
    if ( this->m_nOverrideStyle.m_Value.m_Data == unStyleOverride.m_Data )
    {
      if ( iQuality != 9999 )
        goto LABEL_30;
    }
    else
    {
      (*(this->_vptr_IEconItemInterface + 31))(this, 49, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nOverrideStyle.m_Value = unStyleOverride;
      if ( iQuality != 9999 )
      {
LABEL_30:
        if ( iQuality == 255 )
        {
          if ( this->m_iEntityQuality.m_Value != 4 )
          {
            (*(this->_vptr_IEconItemInterface + 31))(this, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_iEntityQuality.m_Value = 4;
          }
        }
        else if ( iQuality != this->m_iEntityQuality.m_Value )
        {
          (*(this->_vptr_IEconItemInterface + 31))(this, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_iEntityQuality.m_Value = iQuality;
        }
LABEL_33:
        if ( iLevel == 9999 )
        {
          v25 = RandomInt(StaticData->m_unMinItemLevel, StaticData->m_unMaxItemLevel);
          if ( v25 != this->m_iEntityLevel.m_Value )
          {
            (*(this->_vptr_IEconItemInterface + 31))(this, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_iEntityLevel.m_Value = v25;
          }
        }
        else if ( iLevel != this->m_iEntityLevel.m_Value )
        {
          (*(this->_vptr_IEconItemInterface + 31))(this, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_iEntityLevel.m_Value = iLevel;
        }
        m_pNonSOEconItem = this->m_pNonSOEconItem;
        if ( m_pNonSOEconItem != 0 )
          (*(m_pNonSOEconItem->_vptr_CSharedObject + 1))(m_pNonSOEconItem);
        this->m_pNonSOEconItem = pNonSOEconItem;
        return;
      }
    }
    m_nItemQuality = StaticData->m_nItemQuality;
    if ( m_nItemQuality != this->m_iEntityQuality.m_Value )
    {
      (*(this->_vptr_IEconItemInterface + 31))(this, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iEntityQuality.m_Value = m_nItemQuality;
    }
    if ( m_nItemQuality == 255 )
    {
      (*(this->_vptr_IEconItemInterface + 31))(this, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iEntityQuality.m_Value = 0;
    }
    goto LABEL_33;
  }
}


// CEconItemView::Init  (line 321, @0x0000000002e9a890, libserver.so)
// calls: CEconItemView::InitInternal, CEconItemView::CacheAssetModifiers
// callers: CDOTA_BaseNPC::PrecacheWearables, CDOTA_BaseNPC::SpawnWearables, CDOTA_BaseNPC_Effigy_Statue::GetBaseModelName, CDOTA_BaseNPC_Effigy_Statue::Precache, CDOTA_BaseNPC_Effigy_Statue::Spawn, CDOTAPlayerInventory::GetEconItemViewInFreeLoadout, CDOTAInventoryManager::SetHeroDemoModeItems, CDOTAInventoryManager::GenerateBaseItems, CItemGeneration::SpawnItem, CItemGeneration::PrecacheItem
void __fastcall CEconItemView::Init(
        CEconItemView *const this,
        item_definition_index_t iDefIndex,
        int iQuality,
        int iLevel,
        uint32 iAccountID,
        CEconItem *pNonSOEconItem,
        style_index_t unStyleOverride)
{
  CEconItemView::InitInternal(this, iDefIndex, iQuality, iLevel, iAccountID, pNonSOEconItem, unStyleOverride);
  CEconItemView::CacheAssetModifiers(this);
}


// CEconItemView::Init  (line 331, @0x0000000002e9b320, libserver.so)  // inlines: NetworkStateChanged, Set, SetInventoryPosition, SetItemID, operator=<itemid_t>, operator=<unsigned int>
// calls: CEconItemView::InitInternal, CEconItemView::CacheAssetModifiers
// callers: CEconItemLoadout::SetItems, CDOTAInventoryManager::SetUpDemoHeroItems
bool __fastcall CEconItemView::Init(CEconItemView *const this, CEconItem *pItem, style_index_t unStyleOverride)
{
  uint32 v6; // r14d
  int v7; // r13d
  int v8; // eax
  uint64 v10; // r13
  unsigned int v11; // ebx

  v6 = (*(pItem->_vptr_CSharedObject + 13))(pItem);
  v7 = (*(pItem->_vptr_CSharedObject + 14))(pItem);
  v8 = (*(pItem->_vptr_CSharedObject + 15))(pItem);
  CEconItemView::InitInternal(this, pItem->m_unDefIndex, v8, v7, v6, 0, unStyleOverride);
  if ( this->m_bInitialized.m_Value )
  {
    v10 = (*(pItem->_vptr_CSharedObject + 12))(pItem);
    if ( this->m_iItemID.m_Value.m_Data != v10 )
    {
      (*(this->_vptr_IEconItemInterface + 31))(this, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iItemID.m_Value.m_Data = v10;
    }
    v11 = (*(pItem->_vptr_CSharedObject + 16))(pItem);
    if ( v11 != this->m_iInventoryPosition.m_Value )
    {
      (*(this->_vptr_IEconItemInterface + 31))(this, 36, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iInventoryPosition.m_Value = v11;
    }
  }
  CEconItemView::CacheAssetModifiers(this);
  return this->m_bInitialized.m_Value;
}


// CEconItemView::CopyInternal  (line 349, @0x0000000002e78880, libserver.so)  // inlines: GetPathData, LeafCodeInfo_t, NetworkStateChanged, Path_SetCount, Set, SetItemID, V_memcpy, memcpy, operator=, operator=<itemid_t>, operator[]
// calls: operator new, CEconItem::CEconItem, CUtlVectorBase<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> >::SetCount, CEconItemAttribute::operator=, memcpy, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, operator delete, _Unwind_Resume
// callers: CEconItemView::operator=, CEconItemView::Init
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CEconItemView::CopyInternal(CEconItemView *const this, const CEconItemView *const src)
{
  uint64 m_Size; // r13
  CEconItem *m_pNonSOEconItem; // rdi
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rdi
  CEntityInstance *m_pObj; // rax
  __int16 m_nCount; // ax
  __int64 v11; // rdx
  CFieldPath *p_m_PathToVector; // rsi
  size_t v13; // rdx
  bool m_bResolved; // al
  int v15; // ebx
  int v16; // edx
  int v17; // ecx
  int v18; // esi
  int v19; // r8d
  int v20; // r9d
  LeafCodeInfo_t v21; // [rsp+10h] [rbp-50h] BYREF

  if ( src->m_iItemDefinitionIndex.m_Value.m_Data != this->m_iItemDefinitionIndex.m_Value.m_Data )
  {
    (*(this->_vptr_IEconItemInterface + 31))(this, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iItemDefinitionIndex.m_Value.m_Data = src->m_iItemDefinitionIndex.m_Value.m_Data;
  }
  if ( this->m_iEntityQuality.m_Value != src->m_iEntityQuality.m_Value )
  {
    (*(this->_vptr_IEconItemInterface + 31))(this, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iEntityQuality.m_Value = src->m_iEntityQuality.m_Value;
  }
  if ( this->m_iEntityLevel.m_Value != src->m_iEntityLevel.m_Value )
  {
    (*(this->_vptr_IEconItemInterface + 31))(this, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iEntityLevel.m_Value = src->m_iEntityLevel.m_Value;
  }
  m_Size = (*(src->_vptr_IEconItemInterface + 14))(src);
  if ( m_Size != this->m_iItemID.m_Value.m_Data )
  {
    (*(this->_vptr_IEconItemInterface + 31))(this, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iItemID.m_Value.m_Data = m_Size;
  }
  if ( this->m_iInventoryPosition.m_Value != src->m_iInventoryPosition.m_Value )
  {
    (*(this->_vptr_IEconItemInterface + 31))(this, 36, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iInventoryPosition.m_Value = src->m_iInventoryPosition.m_Value;
  }
  if ( this->m_bInitialized.m_Value != src->m_bInitialized.m_Value )
  {
    (*(this->_vptr_IEconItemInterface + 31))(this, 48, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bInitialized.m_Value = src->m_bInitialized.m_Value;
  }
  if ( this->m_iAccountID.m_Value != src->m_iAccountID.m_Value )
  {
    (*(this->_vptr_IEconItemInterface + 31))(this, 32, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iAccountID.m_Value = src->m_iAccountID.m_Value;
  }
  if ( src->m_nOverrideStyle.m_Value.m_Data != this->m_nOverrideStyle.m_Value.m_Data )
  {
    (*(this->_vptr_IEconItemInterface + 31))(this, 49, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nOverrideStyle.m_Value.m_Data = src->m_nOverrideStyle.m_Value.m_Data;
  }
  m_pNonSOEconItem = this->m_pNonSOEconItem;
  this->m_bHasComputedAttachedParticles = src->m_bHasComputedAttachedParticles;
  this->m_bHasAttachedParticles = src->m_bHasAttachedParticles;
  if ( m_pNonSOEconItem != 0 )
  {
    (*(m_pNonSOEconItem->_vptr_CSharedObject + 1))(m_pNonSOEconItem);
    this->m_pNonSOEconItem = 0;
  }
  if ( src->m_pNonSOEconItem != 0 )
  {
    m_Size = operator new(0x50u);
    CEconItem::CEconItem(m_Size, src->m_pNonSOEconItem);
    this->m_pNonSOEconItem = m_Size;
  }
  if ( &src->m_AttributeList.m_Attributes != &this->m_AttributeList.m_Attributes )
  {
    m_Size = src->m_AttributeList.m_Attributes.m_Vector.m_Size;
    CUtlVectorBase<CEconItemAttribute,CNetworkUtlVector_MemoryType<CEconItemAttribute,-1>>::SetCount(
      &this->m_AttributeList.m_Attributes.m_Vector,
      src->m_AttributeList.m_Attributes.m_Vector.m_Size);
    if ( m_Size > 0 )
    {
      v6 = 0;
      m_Size = 8 * (3LL * (m_Size - 1) + 3);
      do
      {
        v7 = v6;
        v8 = v6;
        v6 += 24;
        CEconItemAttribute::operator=(
          (this->m_AttributeList.m_Attributes.m_Vector.m_Memory.m_pMemory + v8),
          (src->m_AttributeList.m_Attributes.m_Vector.m_Memory.m_pMemory + v7));
      }
      while ( v6 != m_Size );
    }
  }
  m_pObj = src->m_AttributeList.m_Attributes.m_pOwnerEntity.m_pObj;
  if ( m_pObj != this->m_AttributeList.m_Attributes.m_pOwnerEntity.m_pObj )
    this->m_AttributeList.m_Attributes.m_pOwnerEntity.m_pObj = m_pObj;
  if ( &src->m_AttributeList.m_Attributes != &this->m_AttributeList.m_Attributes )
  {
    this->m_AttributeList.m_Attributes.m_PathToVector.m_bUsingExternalPaths = 0;
    m_nCount = src->m_AttributeList.m_Attributes.m_PathToVector.m_nCount;
    if ( m_nCount > 6 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v21.m_szFile = "../../public/tier2/fieldpath.h";
        v21.m_szFunction = "Path_SetCount";
        v21.m_nLine = 442;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v21,
          "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors() != 0 )
        loc_0 = -559038737;
      v15 = Plat_ExitProcess(1);
      operator delete(m_Size);
      Unwind_Resume(v15, v18, v16, v17, v19, v20);
    }
    this->m_AttributeList.m_Attributes.m_PathToVector.m_nCount = m_nCount;
    v11 = src->m_AttributeList.m_Attributes.m_PathToVector.m_nCount;
    if ( v11 > 0 )
    {
      p_m_PathToVector = &src->m_AttributeList.m_Attributes.m_PathToVector;
      v13 = 2 * v11;
      if ( src->m_AttributeList.m_Attributes.m_PathToVector.m_bUsingExternalPaths )
        p_m_PathToVector = src->m_AttributeList.m_Attributes.m_PathToVector.u.m_pPaths;
      memcpy(&this->m_AttributeList.m_Attributes.m_PathToVector, p_m_PathToVector, v13);
    }
  }
  this->m_AttributeList.m_Attributes.m_pArraySizeChangedDelegate = src->m_AttributeList.m_Attributes.m_pArraySizeChangedDelegate;
  this->m_AttributeList.m_Attributes.m_bIsNetworkVarExcluded = src->m_AttributeList.m_Attributes.m_bIsNetworkVarExcluded;
  m_bResolved = src->m_AttributeList.m_Attributes.m_bResolved;
  this->m_AttributeList.m_pManager = 0;
  this->m_AttributeList.m_Attributes.m_bResolved = m_bResolved;
}


// CEconItemView::Init  (line 381, @0x0000000002e96460, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<style_index_t>
// calls: CEconItemView::CopyInternal, CEconItemView::CacheAssetModifiers
void __fastcall CEconItemView::Init(
        CEconItemView *const this,
        const CEconItemView *pItemView,
        style_index_t unStyleOverride)
{
  if ( pItemView != 0 )
  {
    CEconItemView::CopyInternal(this, pItemView);
    if ( unStyleOverride.m_Data != this->m_nOverrideStyle.m_Value.m_Data )
    {
      (*(this->_vptr_IEconItemInterface + 31))(this, 49, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nOverrideStyle.m_Value = unStyleOverride;
    }
    CEconItemView::CacheAssetModifiers(this);
  }
}


// CEconItemView::operator=  (line 399, @0x0000000002e78c10, libserver.so)
// calls: CEconItemView::CopyInternal, CAssetModifierContainer::PurgeAndDeleteElements, CAssetModifierContainer::CopyAssetModifiers
// callers: CEconItemLoadout::CEconItemLoadout, CEconItemLoadout::SetItems, CSchemaClassBinding<CAttributeContainer>::AllocateAndCopyConstruct, CSchemaClassBinding<CAttributeContainer>::Copy, CSchemaClassBinding<CEconItemView>::Copy, CSchemaClassBinding<CEconItemView>::AllocateAndCopyConstruct, CEconItemView::CEconItemView, CEconWearable::Precache
CEconItemView *__fastcall CEconItemView::operator=(CEconItemView *const this, const CEconItemView *const src)
{
  if ( src != this )
  {
    CEconItemView::CopyInternal(this, src);
    CAssetModifierContainer::PurgeAndDeleteElements(&this->m_AssetModifiers);
    CAssetModifierContainer::CopyAssetModifiers(&this->m_AssetModifiers, &src->m_AssetModifiers, 0, -1);
  }
  return this;
}


// CEconItemView::operator==  (line 417, @0x0000000002e702a0, libserver.so)
// calls: _Unwind_Resume
// callers: CDOTA_BaseNPC_Hero::CheckForCourierChange, CDOTA_BaseNPC_Hero::CheckForWardChange, CEconItemLoadout::operator==
bool __fastcall CEconItemView::operator==(const CEconItemView *const this, const CEconItemView *const other)
{
  __int64 v5; // r13

  return this->m_bInitialized.m_Value == other->m_bInitialized.m_Value
      && ((*(this->_vptr_IEconItemInterface + 14))(this) == 0 && (*(other->_vptr_IEconItemInterface + 14))(other) == 0
       || (v5 = (*(other->_vptr_IEconItemInterface + 14))(other)) == (*(this->_vptr_IEconItemInterface + 14))(this))
      && other->m_iItemDefinitionIndex.m_Value.m_Data == this->m_iItemDefinitionIndex.m_Value.m_Data;
}


// CEconItemView::GetStaticData  (line 431, @0x0000000002e996c0, libserver.so)  // inlines: GetItemDefinition, GetItemSchema
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionMutable, __dynamic_cast
// callers: CDOTA_BaseNPC::ApplyWearableModifiers, CDOTA_BaseNPC_Hero::ValidateEconItems, CDOTA_Unit_Hero_Legion_Commander::IsDemon, CDOTA_Item_TeleportScroll::OnAbilityPhaseStart, CEconItemView::GetItemDefinition, CItemGeneration::PrecacheItem, CDOTAPlayerInventory::HasItemsForHero, CDOTAWearableItem::ShouldMatchCycleToParent, CEconEntity::TranslateViewmodelHandActivity, CDOTAPlayerInventory::GetItemInLoadout, CDOTAPlayerInventory::RemoveItemFromLoadout, CItemGeneration::SpawnItem (27 total)
// globals: `typeinfo for'CEconItemDefinition
const GameItemDefinition_t *__fastcall CEconItemView::GetStaticData(const CEconItemView *const this)
{
  CEconItemSystem *v2; // rax
  CEconItemDefinition *ItemDefinitionMutable; // rax

  v2 = ItemSystem();
  ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(
                            &v2->m_itemSchema,
                            this->m_iItemDefinitionIndex.m_Value.m_Data,
                            0);
  if ( ItemDefinitionMutable != 0 )
    return __dynamic_cast(
             ItemDefinitionMutable,
             &`typeinfo for'CEconItemDefinition,
             &`typeinfo for'CDOTAItemDefinition,
             0);
  else
    return 0;
}


// CEconItemView::GetQuality  (line 444, @0x0000000002e8be40, libserver.so)  // inlines: GetItemQuality
// calls: CEconItemView::GetSOCData
int32 __fastcall CEconItemView::GetQuality(const CEconItemView *const this)
{
  CEconItem *SOCData; // rax
  int v4; // eax
  int32 v5; // edx

  if ( CEconItemView::GetSOCData(this) != 0 )
  {
    SOCData = CEconItemView::GetSOCData(this);
    return (*(SOCData->_vptr_CSharedObject + 15))(SOCData);
  }
  else
  {
    v4 = (*(this->_vptr_IEconItemInterface + 18))(this);
    v5 = 0;
    if ( v4 != -1 )
      return this->m_iEntityQuality.m_Value;
    return v5;
  }
}


// CEconItemView::GetStyle  (line 460, @0x0000000002e8be90, libserver.so)
// calls: CEconItemView::GetSOCData
// globals: INVALID_STYLE_INDEX
style_index_t __fastcall CEconItemView::GetStyle(const CEconItemView *const this)
{
  style_index_t result; // al
  CEconItem *SOCData; // rdi

  result.m_Data = this->m_nOverrideStyle.m_Value.m_Data;
  if ( INVALID_STYLE_INDEX.m_Data == result.m_Data )
  {
    SOCData = CEconItemView::GetSOCData(this);
    result.m_Data = 0;
    if ( SOCData != 0 )
      return (*(SOCData->_vptr_CSharedObject + 20))(SOCData);
  }
  return result;
}


// CEconItemView::SetStyleOverride  (line 473, @0x0000000002e964d0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<style_index_t>
// calls: CEconItemView::CacheAssetModifiers
// callers: CEconItemView::SelectAutoStyle, CEconWearable::SetStyleOverride
bool __fastcall CEconItemView::SetStyleOverride(CEconItemView *const this, style_index_t nOverrideStyle)
{
  bool result; // al

  result = 0;
  if ( nOverrideStyle.m_Data != this->m_nOverrideStyle.m_Value.m_Data )
  {
    (*(this->_vptr_IEconItemInterface + 31))(this, 49, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nOverrideStyle.m_Value = nOverrideStyle;
    CEconItemView::CacheAssetModifiers(this);
    return 1;
  }
  return result;
}


// CEconItemView::SelectAutoStyle  (line 485, @0x0000000002e99ad0, libserver.so)
// calls: CEconItemView::ComputeAutoStyle, CEconItemView::SetStyleOverride
// callers: CEconWearable::SelectAutoStyle
// globals: INVALID_STYLE_INDEX
bool __fastcall CEconItemView::SelectAutoStyle(CEconItemView *const this, const CAutoStyleCriteria *const criteria)
{
  style_index_t v3; // si
  bool result; // al

  v3.m_Data = CEconItemView::ComputeAutoStyle(this, criteria).m_Data;
  result = 0;
  if ( INVALID_STYLE_INDEX.m_Data != v3.m_Data )
    return CEconItemView::SetStyleOverride(this, v3);
  return result;
}


// CEconItemView::ComputeAutoStyle  (line 496, @0x0000000002e998a0, libserver.so)  // inlines: DoLookup<const CUtlStringToken&>, Find, GetAssetInfo, GetStyle, GetStyleCount, HashItem<unsigned int>, IdealIndex, IsValidIndex, operator(), operator==, operator[]
// calls: CEconItemView::GetStaticData, CExpressionCalculator::FirstVariable, CExpressionCalculator::SetVariable, CExpressionCalculator::NextVariable, CExpressionCalculator::InvalidVariable, CExpressionCalculator::VariableName, MurmurHash2, CExpressionCalculator::Evaluate
// callers: CEconItemView::SelectAutoStyle
// globals: INVALID_STYLE_INDEX
style_index_t __fastcall CEconItemView::ComputeAutoStyle(
        CEconItemView *const this,
        const CAutoStyleCriteria *const criteria)
{
  int i; // r15d
  CUtlVector<CEconStyleInfo*,CUtlMemory<CEconStyleInfo*,int> > *m_pStyles; // rax
  CUtlVector<CEconStyleInfo*,CUtlMemory<CEconStyleInfo*,int> > *v6; // rax
  CEconStyleInfo *v7; // rax
  CExpressionCalculator *m_pExpression; // r12
  ExprVarHandle_t j; // ebx
  uint32 v10; // eax
  float v11; // xmm1_4
  CUtlHashtableEntry<CUtlStringToken,float> *m_pMemory; // r8
  int v13; // edi
  CUtlHashtableEntry<CUtlStringToken,float>::storage_t flags_and_hash; // esi
  unsigned int k; // edx
  CUtlStringToken varName; // [rsp+20h] [rbp-40h] BYREF

  for ( i = 0; ; ++i )
  {
    m_pStyles = CEconItemView::GetStaticData(this)->m_pAssetInfo->m_pStyles;
    if ( m_pStyles == 0 )
      break;
    if ( i >= m_pStyles->m_Size )
      return INVALID_STYLE_INDEX;
LABEL_5:
    if ( (*(this->_vptr_IEconItemInterface + 24))(this, i) != 0 )
    {
      v6 = CEconItemView::GetStaticData(this)->m_pAssetInfo->m_pStyles;
      if ( v6 != 0 && i < v6->m_Size )
        v7 = v6->m_Memory.m_pMemory[i];
      else
        v7 = 0;
      m_pExpression = v7->m_pExpression;
      if ( m_pExpression != 0 )
      {
        for ( j = CExpressionCalculator::FirstVariable(v7->m_pExpression);
              j != CExpressionCalculator::InvalidVariable(m_pExpression);
              j = CExpressionCalculator::NextVariable(m_pExpression, j) )
        {
          varName.m_nHashCode = CExpressionCalculator::VariableName(m_pExpression, j).m_nHashCode;
          v10 = MurmurHash2(&varName, 4, 0x3501A674u);
          if ( criteria->m_criteria.m_nUsed != 0 )
          {
            m_pMemory = criteria->m_criteria.m_table.m_pMemory;
            v13 = criteria->m_criteria.m_table.m_nAllocationCount - 1;
            flags_and_hash = criteria->m_criteria.m_table.m_pMemory[v13 & v10].flags_and_hash;
            if ( (v13 & v10) == (v13 & flags_and_hash | (flags_and_hash >> 31)) )
            {
              for ( k = v13 & v10;
                    (v13 & v10) != (v13 & flags_and_hash | (flags_and_hash >> 31))
                 || (((v10 ^ flags_and_hash) & 0x3FFFFFFF) != 0 || varName.m_nHashCode != m_pMemory[k].data[0])
                 && (flags_and_hash & 0x40000000) == 0;
                    flags_and_hash = m_pMemory[k].flags_and_hash )
              {
                k = v13 & (k + 1);
              }
            }
          }
          CExpressionCalculator::SetVariable(m_pExpression, j, v11);
        }
        if ( CExpressionCalculator::Evaluate(m_pExpression, &varName.m_nHashCode) && *&varName.m_nHashCode == 1.0 )
          return i;
      }
    }
  }
  if ( i < 0 )
    goto LABEL_5;
  return INVALID_STYLE_INDEX;
}


// CEconItemView::GetFlags  (line 531, @0x0000000002e8bec0, libserver.so)
// calls: CEconItemView::GetSOCData
uint8 __fastcall CEconItemView::GetFlags(const CEconItemView *const this)
{
  CEconItem *SOCData; // rax

  if ( CEconItemView::GetSOCData(this) == 0 )
    return 0;
  SOCData = CEconItemView::GetSOCData(this);
  return (*(SOCData->_vptr_CSharedObject + 18))(SOCData);
}


// CEconItemView::GetOrigin  (line 545, @0x0000000002e8bf10, libserver.so)
// calls: CEconItemView::GetSOCData
eEconItemOrigin __fastcall CEconItemView::GetOrigin(const CEconItemView *const this)
{
  CEconItem *SOCData; // rax

  if ( CEconItemView::GetSOCData(this) == 0 )
    return eEconItemOrigin::kEconItemOrigin_Invalid;
  SOCData = CEconItemView::GetSOCData(this);
  return (*(SOCData->_vptr_CSharedObject + 19))(SOCData);
}


// CEconItemView::GetQuantity  (line 560, @0x0000000002e8c030, libserver.so)
// calls: CEconItemView::GetItemQuantity
uint16 __fastcall CEconItemView::GetQuantity(const CEconItemView *const this)
{
  return CEconItemView::GetItemQuantity(this);
}


// CEconItemView::GetCustomName  (line 568, @0x0000000002e8bf60, libserver.so)
// calls: CEconItemView::GetSOCData
const char *__fastcall CEconItemView::GetCustomName(const CEconItemView *const this)
{
  CEconItem *SOCData; // rax

  if ( CEconItemView::GetSOCData(this) == 0 )
    return 0;
  SOCData = CEconItemView::GetSOCData(this);
  return (*(SOCData->_vptr_CSharedObject + 22))(SOCData);
}


// CEconItemView::GetCustomDesc  (line 576, @0x0000000002e8bfb0, libserver.so)
// calls: CEconItemView::GetSOCData
const char *__fastcall CEconItemView::GetCustomDesc(const CEconItemView *const this)
{
  CEconItem *SOCData; // rax

  if ( CEconItemView::GetSOCData(this) == 0 )
    return 0;
  SOCData = CEconItemView::GetSOCData(this);
  return (*(SOCData->_vptr_CSharedObject + 23))(SOCData);
}


// CEconItemView::SetNonSOEconItem  (line 584, @0x0000000002e70340, libserver.so)
// callers: CDOTA_BaseNPC::UpdateAssetModifiers, CDOTA_BaseNPC::PrecacheWearables
void __fastcall CEconItemView::SetNonSOEconItem(CEconItemView *const this, CEconItem *pItem)
{
  CEconItem *m_pNonSOEconItem; // rdi

  m_pNonSOEconItem = this->m_pNonSOEconItem;
  if ( m_pNonSOEconItem != 0 )
    (*(m_pNonSOEconItem->_vptr_CSharedObject + 1))(m_pNonSOEconItem);
  this->m_pNonSOEconItem = pItem;
}


// CEconItemView::Invalidate  (line 598, @0x0000000002e70370, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>, operator=<item_definition_index_t>, operator=<itemid_t>
// callers: CEconItemLoadout::ClearItems
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CEconItemView::Invalidate(CEconItemView *const this)
{
  uint16 m_Data; // r12
  CEconItem *m_pNonSOEconItem; // rdi
  bool v4; // zf

  if ( !this->m_bInitialized.m_Value )
  {
    m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
    if ( INVALID_ITEM_DEF_INDEX.m_Data == this->m_iItemDefinitionIndex.m_Value.m_Data )
      goto LABEL_3;
LABEL_8:
    (*(this->_vptr_IEconItemInterface + 31))(this, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4 = this->m_iItemID.m_Value.m_Data == 0;
    this->m_iItemDefinitionIndex.m_Value.m_Data = m_Data;
    if ( v4 )
      goto LABEL_4;
    goto LABEL_9;
  }
  (*(this->_vptr_IEconItemInterface + 31))(this, 48, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
  this->m_bInitialized.m_Value = 0;
  if ( m_Data != this->m_iItemDefinitionIndex.m_Value.m_Data )
    goto LABEL_8;
LABEL_3:
  if ( this->m_iItemID.m_Value.m_Data != 0 )
  {
LABEL_9:
    (*(this->_vptr_IEconItemInterface + 31))(this, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iItemID.m_Value.m_Data = 0;
  }
LABEL_4:
  m_pNonSOEconItem = this->m_pNonSOEconItem;
  if ( m_pNonSOEconItem != 0 )
  {
    (*(m_pNonSOEconItem->_vptr_CSharedObject + 1))(m_pNonSOEconItem);
    this->m_pNonSOEconItem = 0;
  }
}


// CEconItemAttributeIterator_EconItemViewWrapper::~CEconItemAttributeIterator_EconItemViewWrapper  (line 616, @0x0000000002ea2070, libserver.so)  // inlines: ~IEconItemAttributeIterator
void __fastcall CEconItemAttributeIterator_EconItemViewWrapper::~CEconItemAttributeIterator_EconItemViewWrapper(
        CEconItemAttributeIterator_EconItemViewWrapper *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;
}


// CEconItemAttributeIterator_EconItemViewWrapper::~CEconItemAttributeIterator_EconItemViewWrapper  (line 616, @0x0000000002ea3120, libserver.so)  // inlines: ~CEconItemAttributeIterator_EconItemViewWrapper, ~IEconItemAttributeIterator
// calls: operator delete
void __fastcall CEconItemAttributeIterator_EconItemViewWrapper::~CEconItemAttributeIterator_EconItemViewWrapper(
        CEconItemAttributeIterator_EconItemViewWrapper *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;
  operator delete(this);
}


// CEconItemAttributeIterator_EconItemViewWrapper::OnIterateAttributeValue  (line 627, @0x0000000002ebd870, libserver.so)
// calls: CAttributeList::GetAttributeByID
bool __fastcall CEconItemAttributeIterator_EconItemViewWrapper::OnIterateAttributeValue(
        CEconItemAttributeIterator_EconItemViewWrapper *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        attrib_value_t value)
{
  unsigned __int16 v6; // ax

  v6 = (*pAttrDef->_vptr_IEconItemAttributeDefinition)(pAttrDef);
  return CAttributeList::GetAttributeByID(this->m_pAttributeList, v6) != 0
      || (*(this->m_pIterator->_vptr_IEconItemAttributeIterator + 2))(this->m_pIterator, pAttrDef, value);
}


// CEconItemAttributeIterator_EconItemViewWrapper::OnIterateAttributeValue  (line 636, @0x0000000002ebd8d0, libserver.so)
// calls: CAttributeList::GetAttributeByID
bool __fastcall CEconItemAttributeIterator_EconItemViewWrapper::OnIterateAttributeValue(
        CEconItemAttributeIterator_EconItemViewWrapper *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        double a3,
        float value)
{
  unsigned __int16 v6; // ax
  float valuea; // [rsp+Ch] [rbp-14h]

  valuea = *&a3;
  v6 = (*pAttrDef->_vptr_IEconItemAttributeDefinition)(pAttrDef, a3, value);
  return CAttributeList::GetAttributeByID(this->m_pAttributeList, v6) != 0
      || (*(this->m_pIterator->_vptr_IEconItemAttributeIterator + 3))(this->m_pIterator, pAttrDef, valuea);
}


// CEconItemAttributeIterator_EconItemViewWrapper::OnIterateAttributeValue  (line 645, @0x0000000002ebd940, libserver.so)
// calls: CAttributeList::GetAttributeByID
bool __fastcall CEconItemAttributeIterator_EconItemViewWrapper::OnIterateAttributeValue(
        CEconItemAttributeIterator_EconItemViewWrapper *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        uint64 value)
{
  unsigned __int16 v6; // ax

  v6 = (*pAttrDef->_vptr_IEconItemAttributeDefinition)(pAttrDef);
  return CAttributeList::GetAttributeByID(this->m_pAttributeList, v6) != 0
      || (*(this->m_pIterator->_vptr_IEconItemAttributeIterator + 4))(this->m_pIterator, pAttrDef, value);
}


// CEconItemAttributeIterator_EconItemViewWrapper::OnIterateAttributeValue  (line 654, @0x0000000002ebd9a0, libserver.so)
// calls: CAttributeList::GetAttributeByID
bool __fastcall CEconItemAttributeIterator_EconItemViewWrapper::OnIterateAttributeValue(
        CEconItemAttributeIterator_EconItemViewWrapper *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_String *const value)
{
  unsigned __int16 v6; // ax

  v6 = (*pAttrDef->_vptr_IEconItemAttributeDefinition)(pAttrDef);
  return CAttributeList::GetAttributeByID(this->m_pAttributeList, v6) != 0
      || (*(this->m_pIterator->_vptr_IEconItemAttributeIterator + 5))(this->m_pIterator, pAttrDef, value);
}


// CEconItemAttributeIterator_EconItemViewWrapper::OnIterateAttributeValue  (line 663, @0x0000000002ebda00, libserver.so)
// calls: CAttributeList::GetAttributeByID
bool __fastcall CEconItemAttributeIterator_EconItemViewWrapper::OnIterateAttributeValue(
        CEconItemAttributeIterator_EconItemViewWrapper *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_ItemDynamicRecipeComponent *const value)
{
  unsigned __int16 v6; // ax

  v6 = (*pAttrDef->_vptr_IEconItemAttributeDefinition)(pAttrDef);
  return CAttributeList::GetAttributeByID(this->m_pAttributeList, v6) != 0
      || (*(this->m_pIterator->_vptr_IEconItemAttributeIterator + 6))(this->m_pIterator, pAttrDef, value);
}


// CEconItemAttributeIterator_EconItemViewWrapper::OnIterateAttributeValue  (line 672, @0x0000000002ebda60, libserver.so)
// calls: CAttributeList::GetAttributeByID
bool __fastcall CEconItemAttributeIterator_EconItemViewWrapper::OnIterateAttributeValue(
        CEconItemAttributeIterator_EconItemViewWrapper *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_Socket *const value)
{
  unsigned __int16 v6; // ax

  v6 = (*pAttrDef->_vptr_IEconItemAttributeDefinition)(pAttrDef);
  return CAttributeList::GetAttributeByID(this->m_pAttributeList, v6) != 0
      || (*(this->m_pIterator->_vptr_IEconItemAttributeIterator + 7))(this->m_pIterator, pAttrDef, value);
}


// CEconItemAttributeIterator_EconItemViewWrapper::OnIterateAttributeValue  (line 682, @0x0000000002ebdac0, libserver.so)
// calls: CAttributeList::GetAttributeByID
bool __fastcall CEconItemAttributeIterator_EconItemViewWrapper::OnIterateAttributeValue(
        CEconItemAttributeIterator_EconItemViewWrapper *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_HeroStatue *const value)
{
  unsigned __int16 v6; // ax

  v6 = (*pAttrDef->_vptr_IEconItemAttributeDefinition)(pAttrDef);
  return CAttributeList::GetAttributeByID(this->m_pAttributeList, v6) != 0
      || (*(this->m_pIterator->_vptr_IEconItemAttributeIterator + 8))(this->m_pIterator, pAttrDef, value);
}


// CEconItemView::IterateAttributes  (line 697, @0x0000000002e997f0, libserver.so)  // inlines: CEconItemAttributeIterator_EconItemViewWrapper, IterateAttributes
// calls: CAttributeList::IterateAttributes, CEconItemView::GetSOCData, CEconItemView::GetStaticData, InternalIterateItemDefAttributes<CIterateAllAttributes>
void __fastcall CEconItemView::IterateAttributes(
        const CEconItemView *const this,
        IEconItemAttributeIterator *pIterator)
{
  CEconItemView::NetworkVar_m_AttributeList *p_m_AttributeList; // r13
  CEconItem *SOCData; // rax
  const GameItemDefinition_t *StaticData; // rax
  const CIterateAllAttributes *const v7; // rdx
  CEconItemAttributeIterator_EconItemViewWrapper iteratorWrapper; // [rsp+0h] [rbp-40h] BYREF

  p_m_AttributeList = &this->m_AttributeList;
  if ( this != -88LL )
    CAttributeList::IterateAttributes(&this->m_AttributeList, pIterator);
  iteratorWrapper.m_pAttributeList = p_m_AttributeList;
  iteratorWrapper._vptr_IEconItemAttributeIterator = off_47A9410;
  iteratorWrapper.m_pIterator = pIterator;
  SOCData = CEconItemView::GetSOCData(this);
  if ( SOCData != 0 )
  {
    (*(SOCData->_vptr_CSharedObject + 11))(SOCData, &iteratorWrapper);
  }
  else if ( CEconItemView::GetStaticData(this) != 0 )
  {
    StaticData = CEconItemView::GetStaticData(this);
    InternalIterateItemDefAttributes<CIterateAllAttributes>(StaticData, &iteratorWrapper, v7);
  }
}


// CEconItemView::EnsureDescriptionIsBuilt  (line 730, @0x0000000002e70440, libserver.so)
void __fastcall CEconItemView::EnsureDescriptionIsBuilt(const CEconItemView *const this)
{
  ;
}


// CEconItemView::MarkDescriptionDirty  (line 755, @0x0000000002e70450, libserver.so)
// callers: CAttributeContainer::OnAttributeValuesChanged
void __fastcall CEconItemView::MarkDescriptionDirty(CEconItemView *const this)
{
  ;
}


// CEconItemView::GetDescriptionUTF8  (line 766, @0x0000000002e70460, libserver.so)
const char *__fastcall CEconItemView::GetDescriptionUTF8(
        const CEconItemView *const this,
        int nFilterFlags,
        char *pScratchBuf,
        int nBufLen)
{
  *pScratchBuf = 0;
  return pScratchBuf;
}


// CEconItemView::SetGrayedOutReason  (line 803, @0x0000000002e70470, libserver.so)
void __fastcall CEconItemView::SetGrayedOutReason(CEconItemView *const this, const char *pszGrayedOutReason)
{
  ;
}


// CEconItemView::GetItemQuantity  (line 824, @0x0000000002e8c000, libserver.so)
// calls: CEconItemView::GetSOCData
// callers: CDOTABaseAbility::CastAbility, UseEconItem, CEconItemView::GetQuantity
int __fastcall CEconItemView::GetItemQuantity(const CEconItemView *const this)
{
  CEconItem *SOCData; // rdi
  int result; // eax

  SOCData = CEconItemView::GetSOCData(this);
  result = 1;
  if ( SOCData != 0 )
    return (*(SOCData->_vptr_CSharedObject + 17))(SOCData);
  return result;
}


// CEconItemView::IsEquipped  (line 841, @0x0000000002e8c040, libserver.so)  // inlines: operator==
// calls: CEconItemView::GetSOCData, CEconItem::IsEquipped
bool __fastcall CEconItemView::IsEquipped(const CEconItemView *const this)
{
  CEconItem *SOCData; // rax
  CEconItem *v3; // rbx
  char v5; // bl

  SOCData = CEconItemView::GetSOCData(this);
  v3 = SOCData;
  if ( SOCData == 0 || !CEconItem::IsEquipped(SOCData) )
    return 0;
  v5 = (*(v3->_vptr_CSharedObject + 20))(v3);
  return v5 == (*(this->_vptr_IEconItemInterface + 16))(this);
}


// CEconItemView::GetAssetInfo  (line 857, @0x0000000002e99880, libserver.so)
// calls: CEconItemView::GetStaticData
// callers: CDOTA_BaseNPC::ApplyWearableModifiers, CDOTA_Unit_Courier::OnAssetModifiersUpdated, CDOTA_Ability_Venomancer_PlagueWard::CreateWard
CEconItemAssetInfo *__fastcall CEconItemView::GetAssetInfo(const CEconItemView *const this)
{
  return CEconItemView::GetStaticData(this)->m_pAssetInfo;
}


// CEconItemView::GetSOCData  (line 900, @0x0000000002e8bd20, libserver.so)
// calls: InventoryManager, CPlayerInventory::GetSOCDataForItem, GetEconItemFromStringTable
// callers: CDOTA_BaseNPC::OnSpawnWearable, CDOTA_BaseNPC::UpdateAssetModifiers, CDOTA_BaseNPC::PrecacheWearables, CDOTAGamerules::FinalizeHeroSelections, CDOTA_BaseNPC_Hero::CheckForCourierChange, CDOTA_BaseNPC_Hero::CheckForWardChange, CDOTA_BaseNPC_Hero::UpdateSharedEconItemSlots, CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer, CEconItemView::GetInUse, CEconItemView::GetInventoryToken, CDOTAPlayerInventory::RemoveItemFromLoadout, CPlayerInventory::HasInventoryItemByDefinition (24 total)
CEconItem *__fastcall CEconItemView::GetSOCData(const CEconItemView *const this)
{
  CEconItem *result; // rax
  CInventoryManager *v3; // rax
  CPlayerInventory *v4; // r12
  itemid_t v5; // rax

  result = this->m_pNonSOEconItem;
  if ( result == 0 )
  {
    v3 = InventoryManager();
    v4 = (*(v3->_vptr_IGameSystem + 40))(v3, this->m_iAccountID.m_Value, 1);
    v5.m_Data = (*(this->_vptr_IEconItemInterface + 14))(this);
    if ( v4 != 0 )
      return CPlayerInventory::GetSOCDataForItem(v4, v5);
    else
      return GetEconItemFromStringTable(v5);
  }
  return result;
}


// CEconItemView::GetInventoryModel  (line 931, @0x0000000002e99c60, libserver.so)  // inlines: GetInventoryModel, GetWithNull, String
// calls: CEconItemView::GetStaticData
const char *__fastcall CEconItemView::GetInventoryModel(CEconItemView *const this)
{
  if ( CEconItemView::GetStaticData(this) != 0 )
    return CEconItemView::GetStaticData(this)->m_symInventoryModel.u.m_pAsString;
  else
    return 0;
}


// CEconItemView::GetInventoryImage  (line 941, @0x0000000002e9cde0, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CSchemaFieldHandle, FindAttribute<IEconItemInterface, unsigned int>, FindAttribute<unsigned int>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, IEconItemInterface>, GEconItemSchema, Get, GetAssetInfo, GetStyle, GetTypedRef, IsValidIndex, operator const CEconItemAttributeDefinition*
// calls: CEconItemView::GetStaticData, __cxa_guard_acquire, ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, CEconItemAssetInfo::GetAlternateIcon, GetEggColor, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "alternate icon"
// globals: `guard variable for'CEconItemView::GetInventoryImage(void)::pAttr_AlternateIcon, CEconItemView::GetInventoryImage(void)::pAttr_AlternateIcon, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
const char *__fastcall CEconItemView::GetInventoryImage(CEconItemView *const this)
{
  __int64 v2; // r12
  CUtlVector<CEconStyleInfo*,CUtlMemory<CEconStyleInfo*,int> > *m_pStyles; // rdx
  CEconStyleInfo *v4; // r12
  uint32 v5; // r13d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r14
  CEconItemSystem *v8; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  int EggColor; // r12d
  const GameItemDefinition_t *StaticData; // rax
  const GameItemDefinition_t *v13; // rax
  CEconItemSystem *v14; // rax
  uint32 m_unResetCount; // eax
  uint32 iAlternateIcon; // [rsp+Ch] [rbp-44h] BYREF
  _QWORD v17[3]; // [rsp+10h] [rbp-40h] BYREF
  char v18; // [rsp+28h] [rbp-28h]

  v2 = (*(this->_vptr_IEconItemInterface + 16))(this);
  m_pStyles = CEconItemView::GetStaticData(this)->m_pAssetInfo->m_pStyles;
  if ( m_pStyles != 0 && v2 < m_pStyles->m_Size )
    v4 = m_pStyles->m_Memory.m_pMemory[v2];
  else
    v4 = 0;
  if ( `guard variable for'CEconItemView::GetInventoryImage(void)::pAttr_AlternateIcon == 0
    && __cxa_guard_acquire(&`guard variable for'CEconItemView::GetInventoryImage(void)::pAttr_AlternateIcon) != 0 )
  {
    CEconItemView::GetInventoryImage(void)::pAttr_AlternateIcon.m_szName = "alternate icon";
    v14 = ItemSystem();
    CEconItemView::GetInventoryImage(void)::pAttr_AlternateIcon.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                           &v14->m_itemSchema,
                                                                           "alternate icon");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    CEconItemView::GetInventoryImage(void)::pAttr_AlternateIcon.m_bDestructName = 0;
    CEconItemView::GetInventoryImage(void)::pAttr_AlternateIcon.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'CEconItemView::GetInventoryImage(void)::pAttr_AlternateIcon);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CEconItemView::GetInventoryImage(void)::pAttr_AlternateIcon,
      &_dso_handle);
  }
  iAlternateIcon = 0;
  if ( (BYTE2(CEconItemView::GetStaticData(this)->m_iCapabilities) & 2) != 0 )
  {
    EggColor = GetEggColor(this);
  }
  else
  {
    if ( CEconItemView::GetInventoryImage(void)::pAttr_AlternateIcon.m_szName == 0 )
      goto LABEL_22;
    v5 = ItemSystem()->m_itemSchema.m_unResetCount;
    m_pRef = CEconItemView::GetInventoryImage(void)::pAttr_AlternateIcon.m_pRef;
    if ( v5 != CEconItemView::GetInventoryImage(void)::pAttr_AlternateIcon.m_unSchemaGeneration )
    {
      m_szName = CEconItemView::GetInventoryImage(void)::pAttr_AlternateIcon.m_szName;
      v8 = ItemSystem();
      m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v8->m_itemSchema, m_szName);
      CEconItemView::GetInventoryImage(void)::pAttr_AlternateIcon.m_unSchemaGeneration = v5;
      CEconItemView::GetInventoryImage(void)::pAttr_AlternateIcon.m_pRef = m_pRef;
    }
    if ( m_pRef != 0
      && (v17[1] = m_pRef,
          v17[2] = &iAlternateIcon,
          vptr_IEconItemInterface = this->_vptr_IEconItemInterface,
          v17[0] = &wrapper,
          v18 = 0,
          vptr_IEconItemInterface[28](this, v17),
          v18 != 0) )
    {
      EggColor = iAlternateIcon;
    }
    else
    {
LABEL_22:
      if ( v4 == 0 || (EggColor = v4->m_iIcon) == 0 )
      {
        StaticData = CEconItemView::GetStaticData(this);
        return (*(StaticData->_vptr_IEconItemDefinition + 5))(StaticData);
      }
    }
  }
  v13 = CEconItemView::GetStaticData(this);
  return CEconItemAssetInfo::GetAlternateIcon(v13->m_pAssetInfo, EggColor);
}


// CEconItemView::GetInventoryImageData  (line 971, @0x0000000002e99ca0, libserver.so)  // inlines: GetInventoryImagePosition, GetInventoryImageSize
// calls: CEconItemView::GetStaticData
bool __fastcall CEconItemView::GetInventoryImageData(CEconItemView *const this, int *iPosition, int *iSize)
{
  if ( CEconItemView::GetStaticData(this) == 0 )
    return 0;
  *iPosition = CEconItemView::GetStaticData(this)->m_iInventoryImagePosition[0];
  *iSize = CEconItemView::GetStaticData(this)->m_iInventoryImageSize[0];
  iPosition[1] = CEconItemView::GetStaticData(this)->m_iInventoryImagePosition[1];
  iSize[1] = CEconItemView::GetStaticData(this)->m_iInventoryImageSize[1];
  return 1;
}


// CEconItemView::GetInventoryOverlayImage  (line 986, @0x0000000002e99d30, libserver.so)  // inlines: GetInventoryOverlayImage, GetWithNull, String
// calls: CEconItemView::GetStaticData
const char *__fastcall CEconItemView::GetInventoryOverlayImage(CEconItemView *const this)
{
  if ( CEconItemView::GetStaticData(this) != 0 )
    return CEconItemView::GetStaticData(this)->m_symInventoryOverlayImage.u.m_pAsString;
  else
    return 0;
}


// CEconItemView::GetPlayerDisplayModel  (line 996, @0x0000000002e99d70, libserver.so)  // inlines: GetAssetInfo, GetBasePlayerDisplayModel, GetStyle, GetStyleCount, GetWithNull, IsValidIndex, String
// calls: CEconItemView::GetStaticData
// callers: CItemGeneration::SpawnItem, CEconWearable::Spawn
const char *__fastcall CEconItemView::GetPlayerDisplayModel(const CEconItemView *const this, int iClass)
{
  const GameItemDefinition_t *StaticData; // r12
  CUtlVector<CEconStyleInfo*,CUtlMemory<CEconStyleInfo*,int> > *m_pStyles; // rax
  __int64 v6; // r14
  CUtlVector<CEconStyleInfo*,CUtlMemory<CEconStyleInfo*,int> > *v7; // rdx
  CEconStyleInfo *v8; // rax

  StaticData = CEconItemView::GetStaticData(this);
  if ( StaticData == 0 )
    return 0;
  m_pStyles = CEconItemView::GetStaticData(this)->m_pAssetInfo->m_pStyles;
  if ( m_pStyles != 0
    && m_pStyles->m_Size != 0
    && (v6 = (*(this->_vptr_IEconItemInterface + 16))(this),
        (v7 = CEconItemView::GetStaticData(this)->m_pAssetInfo->m_pStyles) != 0)
    && v6 < v7->m_Size
    && (v8 = v7->m_Memory.m_pMemory[v6]) != 0
    && v8->m_symBasePlayerModel.u.m_Id != 0 )
  {
    return v8->m_symBasePlayerModel.u.m_pAsString;
  }
  else
  {
    return (*(StaticData->_vptr_IEconItemDefinition + 7))(StaticData, iClass);
  }
}


// CEconItemView::GetSkin  (line 1045, @0x0000000002e99b00, libserver.so)  // inlines: GetAssetInfo, GetStyle, GetStyleCount, GetStyleSkin, IsValidIndex
// calls: CEconItemView::GetStaticData
// callers: CDOTA_BaseNPC::ApplyWearableModifiers, CDOTA_BaseNPC::ManageModelChanges, CItemGeneration::SpawnItem, CEconWearable::SelectAutoStyle, CEconWearable::SetStyleOverride
int __fastcall CEconItemView::GetSkin(const CEconItemView *const this)
{
  CUtlVector<CEconStyleInfo*,CUtlMemory<CEconStyleInfo*,int> > *m_pStyles; // rax
  __int64 v3; // r12
  CUtlVector<CEconStyleInfo*,CUtlMemory<CEconStyleInfo*,int> > *v4; // rdx
  CEconStyleInfo *v5; // rax

  m_pStyles = CEconItemView::GetStaticData(this)->m_pAssetInfo->m_pStyles;
  if ( m_pStyles == 0 || m_pStyles->m_Size == 0 )
    return CEconItemView::GetStaticData(this)->m_pAssetInfo->m_iSkin;
  v3 = (*(this->_vptr_IEconItemInterface + 16))(this);
  v4 = CEconItemView::GetStaticData(this)->m_pAssetInfo->m_pStyles;
  if ( v4 != 0 && v3 < v4->m_Size && (v5 = v4->m_Memory.m_pMemory[v3]) != 0 )
    return v5->m_iSkin;
  else
    return -1;
}


// CEconItemView::GetQualityParticleType  (line 1059, @0x0000000002e70480, libserver.so)
int __fastcall CEconItemView::GetQualityParticleType(const CEconItemView *const this)
{
  return 0;
}


// CEconItemView::GetAnimationSlot  (line 1079, @0x0000000002e99ee0, libserver.so)
// calls: CEconItemView::GetStaticData
int __fastcall CEconItemView::GetAnimationSlot(CEconItemView *const this)
{
  if ( CEconItemView::GetStaticData(this) != 0 )
    CEconItemView::GetStaticData(this);
  return -1;
}


// CEconItemView::GetDropType  (line 1094, @0x0000000002e99f10, libserver.so)
// calls: CEconItemView::GetStaticData
// callers: CEconWearable::GetDropType
int __fastcall CEconItemView::GetDropType(CEconItemView *const this)
{
  const GameItemDefinition_t *StaticData; // rax
  int v3; // edx

  StaticData = CEconItemView::GetStaticData(this);
  v3 = 0;
  if ( StaticData != 0 )
    return CEconItemView::GetStaticData(this)->m_iDropType;
  return v3;
}


// CEconItemView::GetModifiedRGBValue  (line 1126, @0x0000000002e9cff0, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CSchemaFieldHandle, FindAttribute_UnsafeBitwiseCast<unsigned int, float, CEconItemView>, GEconItemSchema, Get, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: __cxa_guard_acquire, ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "set item tint rgb", "set item tint rgb 2"
// globals: `guard variable for'CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint, `guard variable for'CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint2, CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint, CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint2, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
int __fastcall CEconItemView::GetModifiedRGBValue(CEconItemView *const this, bool bAltColor)
{
  uint32 v4; // r12d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r14
  CEconItemSystem *v7; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  int v9; // r12d
  int v10; // r15d
  uint32 v11; // edx
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  CEconItemSystem *v13; // rax
  int (**v14)(...); // rax
  int result; // eax
  CEconItemSystem *v16; // rax
  uint32 m_unResetCount; // eax
  CEconItemSystem *v18; // rax
  uint32 v19; // eax
  uint32 v20; // [rsp+4h] [rbp-6Ch]
  char *pszDefName; // [rsp+8h] [rbp-68h]
  float fRGB; // [rsp+18h] [rbp-58h] BYREF
  float fRGBAlt; // [rsp+1Ch] [rbp-54h] BYREF
  __int64 (__fastcall **v24)(); // [rsp+20h] [rbp-50h] BYREF
  const CEconItemAttributeDefinition *v25; // [rsp+28h] [rbp-48h]
  float *p_fRGB; // [rsp+30h] [rbp-40h]
  char v27; // [rsp+38h] [rbp-38h]

  if ( `guard variable for'CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint == 0
    && __cxa_guard_acquire(&`guard variable for'CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint) != 0 )
  {
    CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint.m_szName = "set item tint rgb";
    v16 = ItemSystem();
    CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                     &v16->m_itemSchema,
                                                                     "set item tint rgb");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint.m_bDestructName = 0;
    CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint,
      &_dso_handle);
  }
  if ( `guard variable for'CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint2 == 0
    && __cxa_guard_acquire(&`guard variable for'CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint2) != 0 )
  {
    CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint2.m_szName = "set item tint rgb 2";
    v18 = ItemSystem();
    CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint2.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                      &v18->m_itemSchema,
                                                                      "set item tint rgb 2");
    v19 = ItemSystem()->m_itemSchema.m_unResetCount;
    CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint2.m_bDestructName = 0;
    CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint2.m_unSchemaGeneration = v19;
    __cxa_guard_release(&`guard variable for'CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint2);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint2,
      &_dso_handle);
  }
  if ( CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint.m_szName == 0 )
    return 0;
  v4 = ItemSystem()->m_itemSchema.m_unResetCount;
  m_pRef = CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint.m_pRef;
  if ( v4 != CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint.m_unSchemaGeneration )
  {
    m_szName = CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint.m_szName;
    v7 = ItemSystem();
    m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v7->m_itemSchema, m_szName);
    CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint.m_unSchemaGeneration = v4;
    CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint.m_pRef = m_pRef;
  }
  if ( m_pRef == 0 )
    return 0;
  v25 = m_pRef;
  p_fRGB = &fRGB;
  vptr_IEconItemInterface = this->_vptr_IEconItemInterface;
  v24 = off_40FDAF0;
  v27 = 0;
  vptr_IEconItemInterface[28](this, &v24);
  if ( v27 == 0 )
    return 0;
  v9 = fRGB;
  v10 = fRGB;
  if ( fRGB == 1 )
  {
    v9 = 5801378;
    v10 = 12073019;
  }
  else if ( CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint2.m_szName != 0 )
  {
    v11 = ItemSystem()->m_itemSchema.m_unResetCount;
    AttributeDefinitionByName = CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint2.m_pRef;
    if ( v11 != CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint2.m_unSchemaGeneration )
    {
      v20 = v11;
      pszDefName = CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint2.m_szName;
      v13 = ItemSystem();
      AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v13->m_itemSchema, pszDefName);
      CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint2.m_pRef = AttributeDefinitionByName;
      CEconItemView::GetModifiedRGBValue(bool)::pAttr_Paint2.m_unSchemaGeneration = v20;
    }
    if ( AttributeDefinitionByName != 0 )
    {
      v25 = AttributeDefinitionByName;
      p_fRGB = &fRGBAlt;
      v14 = this->_vptr_IEconItemInterface;
      v24 = off_40FDAF0;
      v27 = 0;
      v14[28](this, &v24);
      if ( v27 != 0 )
        v9 = fRGBAlt;
    }
  }
  result = v9;
  if ( !bAltColor )
    return v10;
  return result;
}


// CEconItemView::IsStyleUnlocked  (line 1166, @0x0000000002e9bb90, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CSchemaFieldHandle, Element, FindAttribute<IEconItemInterface, unsigned int>, FindAttribute<unsigned int>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, IEconItemInterface>, GEconItemSchema, Get, GetAssetInfo, GetStyle, GetTypedRef, GetWithNull, IsLockable, IsValidIndex, operator const CEconItemAttributeDefinition*, operator[]
// calls: CEconItemView::GetStaticData, ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "unlocked styles"
// globals: INVALID_ITEM_DEF_INDEX, `guard variable for'CEconItemView::IsStyleUnlocked(style_index_t)::pAttr_UnlockedStyles, CEconItemView::IsStyleUnlocked(style_index_t)::pAttr_UnlockedStyles, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
bool __fastcall CEconItemView::IsStyleUnlocked(const CEconItemView *const this, style_index_t iStyle)
{
  CUtlVector<CEconStyleInfo*,CUtlMemory<CEconStyleInfo*,int> > *m_pStyles; // rax
  CEconStyleInfo *v5; // rax
  uint32 v6; // r13d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r14
  CEconItemSystem *v9; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  CEconItemSystem *v12; // rax
  uint32 m_unResetCount; // eax
  uint32 nUnlockedStyles; // [rsp+Ch] [rbp-44h] BYREF
  _QWORD v15[3]; // [rsp+10h] [rbp-40h] BYREF
  char v16; // [rsp+28h] [rbp-28h]

  m_pStyles = CEconItemView::GetStaticData(this)->m_pAssetInfo->m_pStyles;
  if ( m_pStyles != 0 && iStyle.m_Data < m_pStyles->m_Size )
  {
    v5 = m_pStyles->m_Memory.m_pMemory[iStyle.m_Data];
    if ( v5 != 0
      && v5->m_UnlockInfo.m_unItemIndex.m_Data == INVALID_ITEM_DEF_INDEX.m_Data
      && v5->m_UnlockInfo.pszAttrib.u.m_Id == 0
      && v5->m_UnlockInfo.pszGemTypeField.u.m_Id == 0 )
    {
      return 1;
    }
  }
  if ( `guard variable for'CEconItemView::IsStyleUnlocked(style_index_t)::pAttr_UnlockedStyles == 0
    && __cxa_guard_acquire(&`guard variable for'CEconItemView::IsStyleUnlocked(style_index_t)::pAttr_UnlockedStyles) != 0 )
  {
    CEconItemView::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_szName = "unlocked styles";
    v12 = ItemSystem();
    CEconItemView::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                        &v12->m_itemSchema,
                                                                                        "unlocked styles");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    CEconItemView::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_bDestructName = 0;
    CEconItemView::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'CEconItemView::IsStyleUnlocked(style_index_t)::pAttr_UnlockedStyles);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CEconItemView::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles,
      &_dso_handle);
  }
  if ( CEconItemView::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_szName == 0 )
    return 0;
  v6 = ItemSystem()->m_itemSchema.m_unResetCount;
  m_pRef = CEconItemView::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_pRef;
  if ( v6 != CEconItemView::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_unSchemaGeneration )
  {
    m_szName = CEconItemView::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_szName;
    v9 = ItemSystem();
    m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v9->m_itemSchema, m_szName);
    CEconItemView::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_unSchemaGeneration = v6;
    CEconItemView::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_pRef = m_pRef;
  }
  if ( m_pRef != 0
    && (v15[1] = m_pRef,
        v15[2] = &nUnlockedStyles,
        vptr_IEconItemInterface = this->_vptr_IEconItemInterface,
        v15[0] = &wrapper,
        v16 = 0,
        vptr_IEconItemInterface[28](this, v15),
        v16 != 0)
    && ((1 << iStyle.m_Data) & nUnlockedStyles) != 0 )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}


// CEconItemView::CanCollect  (line 1187, @0x0000000002e70490, libserver.so)
bool __fastcall CEconItemView::CanCollect(CEconItemView *const this, CEconItemView *const subject)
{
  return 0;
}


// CEconItemView::GetCustomUserTextureID  (line 1243, @0x0000000002e9cb30, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CSchemaFieldHandle, FindAttribute<IEconItemInterface, unsigned int>, FindAttribute<unsigned int>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, IEconItemInterface>, GEconItemSchema, Get, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: __cxa_guard_acquire, ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "custom texture lo", "custom texture hi"
// globals: `guard variable for'CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureLo, `guard variable for'CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureHi, CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureLo, CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureHi, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
uint64 __fastcall CEconItemView::GetCustomUserTextureID(CEconItemView *const this)
{
  uint32 v2; // r12d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r13
  CEconItemSystem *v5; // rax
  bool v6; // r13
  int (**vptr_IEconItemInterface)(...); // rax
  uint32 v8; // r12d
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const char *v10; // r14
  CEconItemSystem *v11; // rax
  int (**v12)(...); // rax
  CEconItemSystem *v14; // rax
  uint32 m_unResetCount; // eax
  CEconItemSystem *v16; // rax
  uint32 v17; // eax
  uint32 unLowVal; // [rsp+8h] [rbp-48h] BYREF
  uint32 unHighVal; // [rsp+Ch] [rbp-44h] BYREF
  CIterateAllAttributes *v20; // [rsp+10h] [rbp-40h] BYREF
  const CEconItemAttributeDefinition *v21; // [rsp+18h] [rbp-38h]
  uint32 *p_unLowVal; // [rsp+20h] [rbp-30h]
  bool bHasHighVal; // [rsp+28h] [rbp-28h]

  if ( `guard variable for'CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureLo == 0
    && __cxa_guard_acquire(&`guard variable for'CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureLo) != 0 )
  {
    CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureLo.m_szName = "custom texture lo";
    v14 = ItemSystem();
    CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureLo.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                  &v14->m_itemSchema,
                                                                                  "custom texture lo");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureLo.m_bDestructName = 0;
    CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureLo.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureLo);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureLo,
      &_dso_handle);
  }
  if ( `guard variable for'CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureHi == 0
    && __cxa_guard_acquire(&`guard variable for'CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureHi) != 0 )
  {
    CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureHi.m_szName = "custom texture hi";
    v16 = ItemSystem();
    CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureHi.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                  &v16->m_itemSchema,
                                                                                  "custom texture hi");
    v17 = ItemSystem()->m_itemSchema.m_unResetCount;
    CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureHi.m_bDestructName = 0;
    CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureHi.m_unSchemaGeneration = v17;
    __cxa_guard_release(&`guard variable for'CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureHi);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureHi,
      &_dso_handle);
  }
  if ( CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureLo.m_szName != 0 )
  {
    v2 = ItemSystem()->m_itemSchema.m_unResetCount;
    m_pRef = CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureLo.m_pRef;
    if ( v2 != CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureLo.m_unSchemaGeneration )
    {
      m_szName = CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureLo.m_szName;
      v5 = ItemSystem();
      m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v5->m_itemSchema, m_szName);
      CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureLo.m_unSchemaGeneration = v2;
      CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureLo.m_pRef = m_pRef;
    }
    v6 = 0;
    if ( m_pRef != 0 )
    {
      v21 = m_pRef;
      p_unLowVal = &unLowVal;
      vptr_IEconItemInterface = this->_vptr_IEconItemInterface;
      v20 = &wrapper;
      bHasHighVal = 0;
      vptr_IEconItemInterface[28](this, &v20);
      v6 = bHasHighVal;
    }
  }
  else
  {
    v6 = 0;
  }
  if ( CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureHi.m_szName == 0 )
    return 0;
  v8 = ItemSystem()->m_itemSchema.m_unResetCount;
  AttributeDefinitionByName = CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureHi.m_pRef;
  if ( v8 != CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureHi.m_unSchemaGeneration )
  {
    v10 = CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureHi.m_szName;
    v11 = ItemSystem();
    AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v11->m_itemSchema, v10);
    CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureHi.m_unSchemaGeneration = v8;
    CEconItemView::GetCustomUserTextureID(void)::pAttr_CustomTextureHi.m_pRef = AttributeDefinitionByName;
  }
  if ( AttributeDefinitionByName != 0
    && (v21 = AttributeDefinitionByName,
        p_unLowVal = &unHighVal,
        v12 = this->_vptr_IEconItemInterface,
        v20 = &wrapper,
        bHasHighVal = 0,
        v12[28](this, &v20),
        v6)
    && bHasHighVal )
  {
    return unLowVal | (unHighVal << 32);
  }
  else
  {
    return 0;
  }
}


// CEconItemView::ComputeItemCriteria  (line 1296, @0x0000000002e704a0, libserver.so)  // inlines: AddCriteria, AddToTail, AddToTailGetPtr, Base, CUtlStringToken, Construct<CAssetModifierCriteria::CriteriaVal_t>, CriteriaVal_t, EnsureCapacity, LeafCodeInfo_t
// calls: CDOTA_PlayerResource::GetPlayerIDByAccountID, CDOTA_PlayerResource::GetEventLevelForPlayerID, CDOTA_PlayerResource::GetEventEffectsMaskForPlayerID, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CEconItemView::CacheAssetModifiers
// strings: "../../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow"
void __fastcall CEconItemView::ComputeItemCriteria(CEconItemView *const this, CAssetModifierCriteria *const criteria)
{
  unsigned __int8 v4; // al
  __int64 m_nCount; // r14
  int v6; // r15d
  unsigned __int64 m_nAllocated; // rsi
  int v8; // ecx
  int v9; // ebx
  int v10; // edx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v11; // rax
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v12; // rax
  int v13; // eax
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *m_pElements; // rdi
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::IndexType_t i; // dx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v18; // rcx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t v19; // rsi
  AccountID_t v20; // eax
  int PlayerIDByAccountID; // r13d
  signed int EventLevelForPlayerID; // r15d
  uint32 EventEffectsMaskForPlayerID; // r13d
  __int64 v24; // r14
  unsigned __int64 v25; // rsi
  int v26; // ecx
  int v27; // ebx
  int v28; // edx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v29; // rax
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v30; // rax
  __int64 v31; // r14
  unsigned __int64 v32; // rcx
  int v33; // edx
  int v34; // ebx
  int v35; // eax
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v36; // rax
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v37; // rax
  int v38; // eax
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v39; // rax
  unsigned __int64 v40; // rdx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v41; // rdi
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::IndexType_t j; // dx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v43; // rcx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t v44; // rsi
  int v45; // esi
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v48; // rdi
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::IndexType_t k; // dx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v50; // rcx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t v51; // rsi
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v52; // r15
  unsigned __int64 v53; // rax
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v54; // rax
  __int64 n; // rdx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v56; // rcx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t v57; // rsi
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v58; // rax
  unsigned __int64 v59; // rdx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v60; // rdi
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::IndexType_t m; // dx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v62; // rcx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t v63; // rsi
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v64; // rax
  unsigned __int64 v65; // rdx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v66; // rdi
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::IndexType_t ii; // dx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v68; // rcx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t v69; // rsi
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v70; // [rsp+8h] [rbp-58h]
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v71; // [rsp+8h] [rbp-58h]
  LeafCodeInfo_t v72; // [rsp+10h] [rbp-50h] BYREF

  v4 = (*(this->_vptr_IEconItemInterface + 16))(this);
  m_nCount = criteria->m_values.m_nCount;
  v6 = v4;
  if ( m_nCount == 0x7FFF )
    goto LABEL_121;
  m_nAllocated = criteria->m_values.m_nAllocated;
  v8 = m_nCount + 1;
  if ( v8 > m_nAllocated )
  {
    LOWORD(v9) = m_nCount + 1;
    if ( v8 > 8 )
    {
      v9 = criteria->m_values.m_nAllocated;
      while ( 1 )
      {
        v10 = v9;
        if ( v8 <= v9 )
          break;
        if ( v9 <= 16382 )
        {
          v13 = 2 * v9;
          v9 = 4;
          if ( 2 * v10 > 3 )
            v9 = v13;
        }
        else
        {
          v9 = 0x7FFF;
        }
      }
    }
    if ( m_nAllocated > 8 )
    {
      v14 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v9);
      v15 = criteria->m_values.m_nAllocated;
      if ( v15 != 0 )
      {
        m_pElements = (&criteria->m_values.m_nAllocAllocated + 1);
        if ( v15 > 8 )
          m_pElements = criteria->m_values.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      for ( i = 0; criteria->m_values.m_nCount > i; *v18 = v19 )
      {
        v18 = (v14 + 8LL * i);
        if ( v18 != 0 )
          v18->m_id.m_nHashCode = 0;
        v19 = m_pElements[i++];
      }
      v70 = v14;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, criteria->m_values.m_pElements);
      criteria->m_values.m_pElements = v70;
    }
    else if ( v9 > 8 )
    {
      v39 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v9);
      v40 = criteria->m_values.m_nAllocated;
      if ( v40 != 0 )
      {
        v41 = (&criteria->m_values.m_nAllocAllocated + 1);
        if ( v40 > 8 )
          v41 = criteria->m_values.m_pElements;
      }
      else
      {
        v41 = 0;
      }
      for ( j = 0; criteria->m_values.m_nCount > j; *v43 = v44 )
      {
        v43 = &v39[j];
        if ( v43 != 0 )
          v43->m_id.m_nHashCode = 0;
        v44 = v41[j++];
      }
      criteria->m_values.m_pElements = v39;
    }
    criteria->m_values.m_nAllocated = v9;
    m_nAllocated = v9;
  }
  if ( m_nAllocated != 0 )
  {
    v11 = (&criteria->m_values.m_nAllocAllocated + 1);
    if ( m_nAllocated > 8 )
      v11 = criteria->m_values.m_pElements;
  }
  else
  {
    v11 = 0;
  }
  v12 = &v11[m_nCount];
  if ( v12 != 0 )
    v12->m_id.m_nHashCode = 0;
  ++criteria->m_values.m_nCount;
  v12->m_id.m_nHashCode = -1690322209;
  v12->m_nValue = v6;
  if ( g_pDOTAPlayerResource != 0 && (*(this->_vptr_IEconItemInterface + 13))(this) != 0 && this->m_pNonSOEconItem == 0 )
  {
    v20 = (*(this->_vptr_IEconItemInterface + 13))(this);
    PlayerIDByAccountID = CDOTA_PlayerResource::GetPlayerIDByAccountID(g_pDOTAPlayerResource, v20);
    EventLevelForPlayerID = CDOTA_PlayerResource::GetEventLevelForPlayerID(g_pDOTAPlayerResource, PlayerIDByAccountID);
    EventEffectsMaskForPlayerID = CDOTA_PlayerResource::GetEventEffectsMaskForPlayerID(
                                    g_pDOTAPlayerResource,
                                    PlayerIDByAccountID);
    if ( EventLevelForPlayerID >= 0 )
    {
      v24 = criteria->m_values.m_nCount;
      if ( v24 == 0x7FFF )
        goto LABEL_121;
      v25 = criteria->m_values.m_nAllocated;
      v26 = v24 + 1;
      if ( v26 > v25 )
      {
        LOWORD(v27) = v24 + 1;
        if ( v26 > 8 )
        {
          v27 = criteria->m_values.m_nAllocated;
          while ( 1 )
          {
            v28 = v27;
            if ( v26 <= v27 )
              break;
            if ( v27 <= 16382 )
            {
              v38 = 2 * v27;
              v27 = 4;
              if ( 2 * v28 > 3 )
                v27 = v38;
            }
            else
            {
              v27 = 0x7FFF;
            }
          }
        }
        if ( v25 > 8 )
        {
          v46 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v27);
          v47 = criteria->m_values.m_nAllocated;
          if ( v47 != 0 )
          {
            v48 = (&criteria->m_values.m_nAllocAllocated + 1);
            if ( v47 > 8 )
              v48 = criteria->m_values.m_pElements;
          }
          else
          {
            v48 = 0;
          }
          for ( k = 0; criteria->m_values.m_nCount > k; *v50 = v51 )
          {
            v50 = (v46 + 8LL * k);
            if ( v50 != 0 )
              v50->m_id.m_nHashCode = 0;
            v51 = v48[k++];
          }
          v71 = v46;
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, criteria->m_values.m_pElements);
          criteria->m_values.m_pElements = v71;
        }
        else if ( v27 > 8 )
        {
          v58 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v27);
          v59 = criteria->m_values.m_nAllocated;
          if ( v59 != 0 )
          {
            v60 = (&criteria->m_values.m_nAllocAllocated + 1);
            if ( v59 > 8 )
              v60 = criteria->m_values.m_pElements;
          }
          else
          {
            v60 = 0;
          }
          for ( m = 0; m < criteria->m_values.m_nCount; *v62 = v63 )
          {
            v62 = &v58[m];
            if ( v62 != 0 )
              v62->m_id.m_nHashCode = 0;
            v63 = v60[m++];
          }
          criteria->m_values.m_pElements = v58;
        }
        criteria->m_values.m_nAllocated = v27;
        v25 = v27;
      }
      if ( v25 != 0 )
      {
        v29 = (&criteria->m_values.m_nAllocAllocated + 1);
        if ( v25 > 8 )
          v29 = criteria->m_values.m_pElements;
      }
      else
      {
        v29 = 0;
      }
      v30 = &v29[v24];
      if ( v30 != 0 )
        v30->m_id.m_nHashCode = 0;
      ++criteria->m_values.m_nCount;
      v30->m_id.m_nHashCode = -63377644;
      v30->m_nValue = EventLevelForPlayerID;
    }
    if ( EventEffectsMaskForPlayerID == 0 )
      return;
    v31 = criteria->m_values.m_nCount;
    if ( v31 != 0x7FFF )
    {
      v32 = criteria->m_values.m_nAllocated;
      v33 = v31 + 1;
      if ( v33 > v32 )
      {
        LOWORD(v34) = v31 + 1;
        if ( v33 > 8 )
        {
          v34 = criteria->m_values.m_nAllocated;
          while ( 1 )
          {
            v35 = v34;
            if ( v33 <= v34 )
              break;
            if ( v34 <= 16382 )
            {
              v45 = 2 * v34;
              v34 = 4;
              if ( 2 * v35 > 3 )
                v34 = v45;
            }
            else
            {
              v34 = 0x7FFF;
            }
          }
        }
        if ( v32 > 8 )
        {
          v52 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v34);
          v53 = criteria->m_values.m_nAllocated;
          if ( v53 != 0 )
          {
            if ( v53 <= 8 )
              v54 = (&criteria->m_values.m_nAllocAllocated + 1);
            else
              v54 = criteria->m_values.m_pElements;
          }
          else
          {
            v54 = 0;
          }
          for ( n = 0; criteria->m_values.m_nCount > n; *v56 = v57 )
          {
            v56 = &v52[n];
            if ( v56 != 0 )
              v56->m_id.m_nHashCode = 0;
            v57 = v54[n];
            n = (n + 1);
          }
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, criteria->m_values.m_pElements, n);
          criteria->m_values.m_pElements = v52;
        }
        else if ( v34 > 8 )
        {
          v64 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v34);
          v65 = criteria->m_values.m_nAllocated;
          if ( v65 != 0 )
          {
            v66 = (&criteria->m_values.m_nAllocAllocated + 1);
            if ( v65 > 8 )
              v66 = criteria->m_values.m_pElements;
          }
          else
          {
            v66 = 0;
          }
          for ( ii = 0; criteria->m_values.m_nCount > ii; *v68 = v69 )
          {
            v68 = &v64[ii];
            if ( v68 != 0 )
              v68->m_id.m_nHashCode = 0;
            v69 = v66[ii++];
          }
          criteria->m_values.m_pElements = v64;
        }
        criteria->m_values.m_nAllocated = v34;
        v32 = v34;
      }
      if ( v32 != 0 )
      {
        v36 = (&criteria->m_values.m_nAllocAllocated + 1);
        if ( v32 > 8 )
          v36 = criteria->m_values.m_pElements;
      }
      else
      {
        v36 = 0;
      }
      v37 = &v36[v31];
      if ( v37 != 0 )
        v37->m_id.m_nHashCode = 0;
      ++criteria->m_values.m_nCount;
      v37->m_id.m_nHashCode = -1769998124;
      v37->m_nValue = EventEffectsMaskForPlayerID;
      return;
    }
LABEL_121:
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_125;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors() != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_125:
      v72.m_nLine = 557;
      v72.m_szFile = "../../public/tier1/utlleanvector.h";
      v72.m_szFunction = "AddToTailGetPtr";
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v72,
        "%s allocation count overflow",
        "AddToTailGetPtr");
    }
  }
}


// CEconItemView::CacheAssetModifiers  (line 1359, @0x0000000002e96100, libserver.so)  // inlines: Base, CAssetModifierCriteria, CSocketIterator, CSocketPair, CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl, GetItemSocket, GetSlotIndexBySlotType, GetSocket, GetSocketAttribute, GetSocketAttributeDefinition, Purge, RemoveAll, TSocketIterator, ~CAssetModifierCriteria, ~CEconItemSpecificAttributeIterator, ~CSocketIterator, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~IEconItemAttributeIterator, ~TSocketIterator
// calls: CAssetModifierContainer::PurgeAndDeleteElements, DOTAInventoryManager, CDOTAInventoryManager::GetItemSlotsForHero, CEconItemDefinition::GetRarityName, V_stricmp_fast, CEconItemView::ComputeItemCriteria, CAssetModifierContainer::CopyAssetModifiers, CItemSocket_AssetModifier::GetAssetModifier, CAssetModifierContainer::CopyAssetModifier, CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t, 8u, short int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CAttributeContainer::OnAttributeValuesChanged, CPlayerInventory::ItemHasBeenUpdated, CEconItemView::Init, CEconItemView::SetStyleOverride, CPlayerInventory::AddTestItem, CPlayerInventory::FilloutItemFromEconItem
void __fastcall CEconItemView::CacheAssetModifiers(CEconItemView *const this)
{
  int (**vptr_IEconItemInterface)(...); // rax
  CEconItemDefinition *v3; // rax
  const CEconItemDefinition *v4; // r12
  int m_pKVItem; // r13d
  int v6; // r14d
  CDOTAInventoryManager *v7; // rax
  CDOTAHeroSlots *ItemSlotsForHero; // rax
  __int64 v9; // rdx
  const char *RarityName; // r13
  const CAssetModifierContainer *v11; // rsi
  TSocketIterator<CItemSocket_AssetModifier> *m_Sockets; // rax
  int (**v13)(...); // rax
  const CItemSocket_AssetModifier *const *v14; // rax
  const AssetModifier_t *AssetModifier; // r13
  int m_nSocketCount; // eax
  const CEconItemAttributeDefinition *v17; // rdx
  int v18; // r14d
  __int64 v19; // r12
  int v20; // ebx
  void (__fastcall *v21)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *); // rdx
  int v22; // eax
  int v23; // edx
  const CEconItemAttributeDefinition **p_m_pAttributeDefinition; // [rsp+8h] [rbp-158h]
  int nPriority; // [rsp+10h] [rbp-150h]
  int iSocket; // [rsp+14h] [rbp-14Ch]
  CAssetModifierContainer *p_m_AssetModifiers; // [rsp+18h] [rbp-148h]
  TSocketIterator<CItemSocket_AssetModifier> socketIterator; // [rsp+20h] [rbp-140h] BYREF
  CAssetModifierCriteria criteria; // [rsp+E0h] [rbp-80h] BYREF
  unsigned __int64 v30; // [rsp+128h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  p_m_AssetModifiers = &this->m_AssetModifiers;
  CAssetModifierContainer::PurgeAndDeleteElements(&this->m_AssetModifiers);
  vptr_IEconItemInterface = this->_vptr_IEconItemInterface;
  this->m_bHasComputedAttachedParticles = 0;
  v3 = (vptr_IEconItemInterface[12])(this);
  nPriority = -1;
  v4 = v3;
  if ( v3 != 0 )
  {
    m_pKVItem = v3[1].m_pKVItem;
    v6 = (*(v3->_vptr_IEconItemDefinition + 9))(v3);
    v7 = DOTAInventoryManager();
    ItemSlotsForHero = CDOTAInventoryManager::GetItemSlotsForHero(v7, v6);
    if ( ItemSlotsForHero != 0 )
    {
      v9 = 0;
      while ( m_pKVItem != ItemSlotsForHero->m_nSlotTypes[v9] )
      {
        if ( ++v9 == 16 )
        {
          nPriority = -1;
          goto LABEL_7;
        }
      }
      nPriority = 16 - v9;
    }
LABEL_7:
    RarityName = CEconItemDefinition::GetRarityName(v4);
    if ( V_stricmp_fast(RarityName, "arcana") != 0 )
    {
      v22 = V_stricmp_fast(RarityName, "immortal");
      v23 = nPriority + 16;
      if ( v22 != 0 )
        v23 = nPriority;
      nPriority = v23;
    }
    else
    {
      nPriority += 32;
    }
  }
  criteria.m_values.0 = 0x80000;
  CEconItemView::ComputeItemCriteria(this, &criteria);
  if ( v4 != 0 )
  {
    v11 = &v4->m_pAssetInfo->m_AssetModifiers;
    if ( v11 != 0 )
      CAssetModifierContainer::CopyAssetModifiers(p_m_AssetModifiers, v11, &criteria, nPriority);
  }
  m_Sockets = socketIterator.m_Sockets;
  do
  {
    m_Sockets->_vptr_IEconItemAttributeIterator = 0;
    m_Sockets = (m_Sockets + 16);
    *&m_Sockets[-1].m_unAttribStorageTypeFlags = 0;
  }
  while ( m_Sockets != &socketIterator.m_nSocketCount );
  socketIterator._vptr_IEconItemAttributeIterator = off_47A8130;
  v13 = this->_vptr_IEconItemInterface;
  socketIterator.m_nSocketCount = 0;
  socketIterator.m_nGemCount = 0;
  socketIterator.m_unAttribStorageTypeFlags = 3;
  v13[28](this, &socketIterator, &socketIterator.m_nSocketCount);
  if ( socketIterator.m_nGemCount > 0 && socketIterator.m_nSocketCount > 0 )
  {
    iSocket = 0;
    p_m_pAttributeDefinition = &socketIterator.m_Sockets[0].m_pAttributeDefinition;
    do
    {
      v14 = *(p_m_pAttributeDefinition - 1);
      if ( v14 != 0 && *v14 != 0 )
      {
        AssetModifier = CItemSocket_AssetModifier::GetAssetModifier(*v14);
        m_nSocketCount = socketIterator.m_nSocketCount;
        if ( AssetModifier == 0 )
          goto LABEL_28;
        v17 = 0;
        if ( socketIterator.m_nSocketCount > iSocket )
          v17 = *p_m_pAttributeDefinition;
        v18 = nPriority;
        if ( (v17->m_iStorageTypeFlags & 1) != 0 )
          v18 = nPriority + 64;
        if ( AssetModifier->m_vecModifiers.m_Size <= 0 )
          goto LABEL_28;
        v19 = 0;
        v20 = 0;
        do
        {
          CAssetModifierContainer::CopyAssetModifier(
            p_m_AssetModifiers,
            AssetModifier->m_vecModifiers.m_Memory.m_pMemory[v19],
            &criteria,
            v18);
          ++v20;
          ++v19;
        }
        while ( AssetModifier->m_vecModifiers.m_Size > v20 );
      }
      m_nSocketCount = socketIterator.m_nSocketCount;
LABEL_28:
      ++iSocket;
      p_m_pAttributeDefinition += 2;
    }
    while ( iSocket < m_nSocketCount );
  }
  socketIterator._vptr_IEconItemAttributeIterator = off_40DB570;
  criteria.m_values.m_nCount = 0;
  if ( criteria.m_values.m_nAllocated > 8 )
  {
    v21 = *(*g_pMemAlloc + 16LL);
    if ( criteria.m_values.m_nAllocated != 0 )
      v21(g_pMemAlloc, criteria.m_values.m_pElements);
    else
      v21(g_pMemAlloc, 0);
  }
}


// CEconItemView::GetEconTool  (line 1432, @0x0000000002e70b70, libserver.so)
const IEconTool *__fastcall CEconItemView::GetEconTool(const CEconItemView *const this)
{
  __int64 v2; // rax

  if ( (*(this->_vptr_IEconItemInterface + 14))(this) != 0 && (v2 = (*(this->_vptr_IEconItemInterface + 12))(this)) != 0 )
    return *(v2 + 192);
  else
    return 0;
}


// CEconItemView::IsSocketable  (line 1445, @0x0000000002e8c0a0, libserver.so)
// calls: CEconItemView::GetSOCData
bool __fastcall CEconItemView::IsSocketable(const CEconItemView *const this)
{
  CEconItem *SOCData; // rax

  if ( CEconItemView::GetSOCData(this) == 0 )
    return 0;
  SOCData = CEconItemView::GetSOCData(this);
  return (*(SOCData->_vptr_CSharedObject + 28))(SOCData);
}


// CEconItemView::CanAddSockets  (line 1450, @0x0000000002e8c0f0, libserver.so)
// calls: CEconItemView::GetSOCData
bool __fastcall CEconItemView::CanAddSockets(const CEconItemView *const this, int nSocketCount)
{
  CEconItem *SOCData; // rax

  if ( CEconItemView::GetSOCData(this) == 0 )
    return 0;
  SOCData = CEconItemView::GetSOCData(this);
  return (*(SOCData->_vptr_CSharedObject + 29))(SOCData, nSocketCount);
}


// CEconItemView::GetGemInfo  (line 1455, @0x0000000002e8c130, libserver.so)
// calls: CEconItemView::GetSOCData
bool __fastcall CEconItemView::GetGemInfo(const CEconItemView *const this, GemInfo_t *pInfo)
{
  CEconItem *SOCData; // rax

  if ( CEconItemView::GetSOCData(this) == 0 )
    return 0;
  SOCData = CEconItemView::GetSOCData(this);
  return (*(SOCData->_vptr_CSharedObject + 30))(SOCData, pInfo);
}


// CEconItemView::IsBaseItem  (line 1463, @0x0000000002e70bc0, libserver.so)
// callers: CDOTA_BaseNPC::OnSpawnWearable, CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer
bool __fastcall CEconItemView::IsBaseItem(const CEconItemView *const this)
{
  __int64 v1; // rax

  v1 = (*(this->_vptr_IEconItemInterface + 12))(this);
  return v1 != 0 && (*(*v1 + 112LL))(v1);
}


// CEconItemView::GetAttachedParticles  (line 1473, @0x0000000002e9b840, libserver.so)  // inlines: AttachedParticleFilter_t, CUtlString, ~AttachedParticleFilter_t, ~CUtlString
// calls: CUtlString::operator=, CEconItemView::GetAttachedParticles, CUtlString::FreeMemoryBlock, _Unwind_Resume
void __fastcall CEconItemView::GetAttachedParticles(
        CEconItemView *const this,
        CUtlVector<AttachedParticlesOnItem_t,CUtlMemory<AttachedParticlesOnItem_t,int> > *const out,
        const char *pUnitName)
{
  AttachedParticleFilter_t filter; // [rsp+0h] [rbp-40h] BYREF

  memset(&filter, 0, 20);
  CUtlString::operator=(&filter.m_unitName, pUnitName);
  CEconItemView::GetAttachedParticles(this, out, &filter);
  if ( filter.m_unitName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&filter.m_unitName);
}


// CEconItemView::DoesSystemPassFilter  (line 1480, @0x0000000002e70bf0, libserver.so)
// callers: CEconItemView::GetAttachedParticles
bool __fastcall CEconItemView::DoesSystemPassFilter(
        CEconItemView *const this,
        const attachedparticlesystem_t *pAttachedParticleSystem,
        const AttachedParticleFilter_t *const filter)
{
  bool result; // al

  if ( pAttachedParticleSystem == 0 )
    return 0;
  result = filter->m_bSuppressAllEffects;
  if ( result )
    return 0;
  if ( (!pAttachedParticleSystem->bFlyingCourier
     || filter->m_nCourierType == AttachedParticleCourierType_t::ATTACHED_PARTICLE_COURIER_FLYING)
    && (!pAttachedParticleSystem->bGroundCourier
     || filter->m_nCourierType == AttachedParticleCourierType_t::ATTACHED_PARTICLE_COURIER_GROUND)
    && (!pAttachedParticleSystem->bDireOnly || filter->m_nTeamType == AttachedParticleTeam_t::ATTACHED_PARTICLE_TEAM_DIRE) )
  {
    result = 1;
    if ( pAttachedParticleSystem->bRadiantOnly )
      return filter->m_nTeamType == AttachedParticleTeam_t::ATTACHED_PARTICLE_TEAM_RADIANT;
  }
  return result;
}


// CEconItemView::GetAttachedParticles  (line 1506, @0x0000000002e9b410, libserver.so)  // inlines: AddToTail, CSocketIterator, CSocketPair, EnsureCapacity, GetItemSocket, GetSocket, GetSocketAttribute, GrowMemory, IsFakeSystem, ShouldDestroyImmediately, TSocketIterator, memcpy, operator char const*, operator[]
// calls: GetAssetModifiers<CEconItemView, CParticleCreateModifier>, CUtlString::Get, CItemSocket_Effect::GetAttributeControlledParticleSystem, CEconItemView::DoesSystemPassFilter, ItemSystem, CUtlMemory<AttachedParticlesOnItem_t, int>::Grow, memcpy
// callers: CDOTA_Modifier_MonkeyKing_Transform::OnIntervalThink, CEconItemView::GetAttachedParticles
void __fastcall CEconItemView::GetAttachedParticles(
        CEconItemView *const this,
        CUtlVector<AttachedParticlesOnItem_t,CUtlMemory<AttachedParticlesOnItem_t,int> > *const out,
        const AttachedParticleFilter_t *const filter)
{
  const CUtlVector<const CParticleCreateModifier*,CUtlMemory<const CParticleCreateModifier*,int> > *v5; // rax
  const CUtlVector<const CParticleCreateModifier*,CUtlMemory<const CParticleCreateModifier*,int> > *v6; // r15
  int m_Size; // r13d
  TSocketIterator<CItemSocket_Effect> *m_Sockets; // rdx
  int v9; // ecx
  uint32 m_nGrowSize; // eax
  AttachedParticlesOnItem_t *m_pMemory; // rsi
  __int64 v12; // rax
  AttachedParticlesOnItem_t *v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  char *v16; // r13
  __int64 v17; // r14
  const char *v18; // rax
  __int64 i; // r15
  const CItemSocket_Effect *m_pSocket; // rdi
  const CAttribute_Socket *m_pAttribute; // rax
  const attachedparticlesystem_t *AttributeControlledParticleSystem; // r13
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rax
  CEconItemSystem *v26; // rax
  __int64 v27; // rax
  int v28; // edx
  AttachedParticlesOnItem_t *v29; // rsi
  __int64 v30; // rax
  AttachedParticlesOnItem_t *v31; // rax
  char *src; // [rsp+10h] [rbp-110h]
  int srcb; // [rsp+10h] [rbp-110h]
  AttachedParticlesOnItem_t *srca; // [rsp+10h] [rbp-110h]
  int v35; // [rsp+18h] [rbp-108h]
  int m_nSocketCount; // [rsp+1Ch] [rbp-104h]
  int pAttachedParticleSystem; // [rsp+28h] [rbp-F8h]
  const attachedparticlesystem_t *pAttachedParticleSystemc; // [rsp+28h] [rbp-F8h]
  const attachedparticlesystem_t *pAttachedParticleSystema; // [rsp+28h] [rbp-F8h]
  int pAttachedParticleSystemb; // [rsp+28h] [rbp-F8h]
  TSocketIterator<CItemSocket_Effect> socketIterator; // [rsp+30h] [rbp-F0h] BYREF

  v5 = GetAssetModifiers<CEconItemView,CParticleCreateModifier>(this);
  v6 = v5;
  if ( v5 != 0 )
    m_Size = v5->m_Size;
  else
    m_Size = 0;
  m_Sockets = socketIterator.m_Sockets;
  do
  {
    m_Sockets->_vptr_IEconItemAttributeIterator = 0;
    m_Sockets = (m_Sockets + 16);
    *&m_Sockets[-1].m_unAttribStorageTypeFlags = 0;
  }
  while ( m_Sockets != &socketIterator.m_nSocketCount );
  socketIterator.m_nSocketCount = 0;
  socketIterator._vptr_IEconItemAttributeIterator = off_47A9470;
  socketIterator.m_nGemCount = 0;
  socketIterator.m_unAttribStorageTypeFlags = 1;
  (*(this->_vptr_IEconItemInterface + 28))(this, &socketIterator);
  v9 = socketIterator.m_nSocketCount + m_Size + out->m_Size;
  m_nSocketCount = socketIterator.m_nSocketCount;
  if ( v9 > out->m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = out->m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        pAttachedParticleSystemb = socketIterator.m_nSocketCount + m_Size + out->m_Size;
        srca = out->m_Memory.m_pMemory;
        v31 = (**g_pMemAlloc)(g_pMemAlloc, 16LL * v9);
        out->m_Memory.m_pMemory = v31;
        v14 = pAttachedParticleSystemb;
        if ( srca != 0 )
        {
          memcpy(v31, srca, 16LL * out->m_Memory.m_nAllocationCount);
          v14 = pAttachedParticleSystemb;
        }
        out->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        m_pMemory = out->m_Memory.m_pMemory;
        v12 = *g_pMemAlloc;
        pAttachedParticleSystem = socketIterator.m_nSocketCount + m_Size + out->m_Size;
        if ( m_pMemory != 0 )
          v13 = (*(v12 + 8))(g_pMemAlloc, m_pMemory, 16LL * v9);
        else
          v13 = (*v12)(g_pMemAlloc, 16LL * v9);
        v14 = pAttachedParticleSystem;
        out->m_Memory.m_pMemory = v13;
      }
      out->m_Memory.m_nAllocationCount = v14;
    }
  }
  if ( m_Size > 0 )
  {
    v15 = 8LL * (m_Size - 1) + 8;
    v16 = 0;
    src = v15;
    do
    {
      while ( 1 )
      {
        v17 = *(v6->m_Memory.m_pMemory + v16);
        if ( filter->m_bIsInLoadout || (*(v17 + 48) & 1) == 0 )
        {
          pAttachedParticleSystemc = *(*v17 + 48LL);
          v18 = CUtlString::Get(&filter->m_unitName);
          if ( (pAttachedParticleSystemc)(v17, v18) != 0
            && (!filter->m_bIsInLoadout
             || (!filter->m_bSkipIntroLoadoutEffects || (*(v17 + 48) & 4) == 0)
             && (filter->m_bIsAlternateLoadout || (*(v17 + 48) & 2) == 0)) )
          {
            v26 = ItemSystem();
            pAttachedParticleSystema = (*(v26->m_itemSchema._vptr_IEconItemSchema + 15))(
                                         &v26->m_itemSchema,
                                         *(v17 + 44));
            if ( CEconItemView::DoesSystemPassFilter(this, pAttachedParticleSystema, filter) )
              break;
          }
        }
        v16 += 8;
        if ( v16 == src )
          goto LABEL_21;
      }
      v27 = out->m_Size;
      v28 = out->m_Size;
      if ( v27 == out->m_Memory.m_nAllocationCount )
      {
        v35 = out->m_Size;
        CUtlMemory<AttachedParticlesOnItem_t,int>::Grow(&out->m_Memory, 1);
        v28 = out->m_Size;
        v27 = v35;
      }
      v29 = out->m_Memory.m_pMemory;
      v30 = v27;
      out->m_Size = v28 + 1;
      v16 += 8;
      v29[v30].m_bIsFakeSystem = (*(v17 + 48) & 8) != 0;
      out->m_Memory.m_pMemory[v30].m_bShouldDestroyImmediately = (*(v17 + 48) & 0x10) != 0;
      out->m_Memory.m_pMemory[v30].m_pAttachedSystem = pAttachedParticleSystema;
    }
    while ( v16 != src );
  }
LABEL_21:
  for ( i = 0; m_nSocketCount > i; out->m_Memory.m_pMemory[v25].m_pAttachedSystem = AttributeControlledParticleSystem )
  {
    while ( 1 )
    {
      m_pSocket = 0;
      if ( socketIterator.m_nSocketCount > i )
      {
        m_pAttribute = socketIterator.m_Sockets[i].m_pAttribute;
        if ( m_pAttribute != 0 )
          m_pSocket = m_pAttribute->m_pSocket;
      }
      AttributeControlledParticleSystem = CItemSocket_Effect::GetAttributeControlledParticleSystem(m_pSocket);
      if ( CEconItemView::DoesSystemPassFilter(this, AttributeControlledParticleSystem, filter) )
        break;
      if ( m_nSocketCount <= ++i )
        return;
    }
    v23 = out->m_Size;
    v24 = out->m_Size;
    if ( v23 == out->m_Memory.m_nAllocationCount )
    {
      srcb = out->m_Size;
      CUtlMemory<AttachedParticlesOnItem_t,int>::Grow(&out->m_Memory, 1);
      v24 = out->m_Size;
      v23 = srcb;
    }
    v25 = v23;
    ++i;
    out->m_Size = v24 + 1;
    out->m_Memory.m_pMemory[v25].m_bIsFakeSystem = 0;
    out->m_Memory.m_pMemory[v25].m_bShouldDestroyImmediately = 1;
  }
}


// CEconItemView::HasAttachedParticles  (line 1561, @0x0000000002e781a0, libserver.so)  // inlines: CSocketIterator, CSocketPair, HasSocket<CItemSocket_Effect>, TSocketIterator
// calls: GetAssetModifiers<CEconItemView, CParticleCreateModifier>
// callers: CEconEntity::HasCustomParticleSystems
bool __fastcall CEconItemView::HasAttachedParticles(CEconItemView *const this)
{
  const CUtlVector<const CParticleCreateModifier*,CUtlMemory<const CParticleCreateModifier*,int> > *v3; // rax
  __int64 *v4; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+8h] [rbp-C8h] BYREF
  int v8; // [rsp+A8h] [rbp-28h] BYREF
  int v9; // [rsp+ACh] [rbp-24h]
  int v10; // [rsp+B0h] [rbp-20h]

  if ( this->m_bHasComputedAttachedParticles )
    return this->m_bHasAttachedParticles;
  this->m_bHasComputedAttachedParticles = 1;
  this->m_bHasAttachedParticles = 0;
  v3 = GetAssetModifiers<CEconItemView,CParticleCreateModifier>(this);
  if ( v3 == 0 || v3->m_Size <= 0 )
  {
    v4 = &v7;
    do
    {
      *v4 = 0;
      v4 += 2;
      *(v4 - 1) = 0;
    }
    while ( v4 != &v8 );
    v8 = 0;
    v6 = off_47A9470;
    vptr_IEconItemInterface = this->_vptr_IEconItemInterface;
    v9 = 0;
    v10 = 1;
    vptr_IEconItemInterface[28](this, &v6, &v8);
    if ( v9 <= 0 )
      return this->m_bHasAttachedParticles;
  }
  this->m_bHasAttachedParticles = 1;
  return 1;
}


// CEconItemView::GetItemCategories  (line 1583, @0x0000000002e9ba30, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CSchemaFieldHandle, FindAttribute<IEconItemInterface, unsigned int>, FindAttribute<unsigned int>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, IEconItemInterface>, GEconItemSchema, Get, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: __cxa_guard_acquire, ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "inventory categories"
// globals: `guard variable for'CEconItemView::GetItemCategories(void)::pAttrDef_InventoryCategories, CEconItemView::GetItemCategories(void)::pAttrDef_InventoryCategories, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
uint32 __fastcall CEconItemView::GetItemCategories(const CEconItemView *const this)
{
  uint32 v2; // r12d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r13
  CEconItemSystem *v5; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  CEconItemSystem *v8; // rax
  uint32 m_unResetCount; // eax
  uint32 uValue; // [rsp+Ch] [rbp-44h] BYREF
  _QWORD v11[3]; // [rsp+10h] [rbp-40h] BYREF
  char v12; // [rsp+28h] [rbp-28h]

  if ( `guard variable for'CEconItemView::GetItemCategories(void)::pAttrDef_InventoryCategories == 0
    && __cxa_guard_acquire(&`guard variable for'CEconItemView::GetItemCategories(void)::pAttrDef_InventoryCategories) != 0 )
  {
    CEconItemView::GetItemCategories(void)const::pAttrDef_InventoryCategories.m_szName = "inventory categories";
    v8 = ItemSystem();
    CEconItemView::GetItemCategories(void)const::pAttrDef_InventoryCategories.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                         &v8->m_itemSchema,
                                                                                         "inventory categories");
    m_unResetCount = ItemSystem()->m_itemSchema.m_unResetCount;
    CEconItemView::GetItemCategories(void)const::pAttrDef_InventoryCategories.m_bDestructName = 0;
    CEconItemView::GetItemCategories(void)const::pAttrDef_InventoryCategories.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'CEconItemView::GetItemCategories(void)::pAttrDef_InventoryCategories);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CEconItemView::GetItemCategories(void)const::pAttrDef_InventoryCategories,
      &_dso_handle);
  }
  if ( CEconItemView::GetItemCategories(void)const::pAttrDef_InventoryCategories.m_szName == 0 )
    return 0;
  v2 = ItemSystem()->m_itemSchema.m_unResetCount;
  m_pRef = CEconItemView::GetItemCategories(void)const::pAttrDef_InventoryCategories.m_pRef;
  if ( v2 != CEconItemView::GetItemCategories(void)const::pAttrDef_InventoryCategories.m_unSchemaGeneration )
  {
    m_szName = CEconItemView::GetItemCategories(void)const::pAttrDef_InventoryCategories.m_szName;
    v5 = ItemSystem();
    m_pRef = CEconItemSchema::GetAttributeDefinitionByName(&v5->m_itemSchema, m_szName);
    CEconItemView::GetItemCategories(void)const::pAttrDef_InventoryCategories.m_unSchemaGeneration = v2;
    CEconItemView::GetItemCategories(void)const::pAttrDef_InventoryCategories.m_pRef = m_pRef;
  }
  if ( m_pRef != 0
    && (v11[1] = m_pRef,
        v11[2] = &uValue,
        vptr_IEconItemInterface = this->_vptr_IEconItemInterface,
        v11[0] = &wrapper,
        v12 = 0,
        vptr_IEconItemInterface[28](this, v11),
        v12 != 0) )
  {
    return uValue;
  }
  else
  {
    return 0;
  }
}


// CAttributeList::CAttributeList  (line 1597, @0x0000000002e77600, libserver.so)  // inlines: CEntityOwnerPtr, CFieldPath, CNetworkUtlVector_MemoryType, CSmartPtr, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorEmbeddedNetworkVar, CUtlVectorEmbeddedNetworkVar_ChainingHelper, CUtlVectorEmbeddedNetworkVar_Vector, OnSizeChanged, Purge, operator(), ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: CUtlVectorBase<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> >::RemoveAll, CUtlMemory<CEconItemAttribute, int>::Purge, operator delete, _Unwind_Resume
// callers: CSchemaClassBinding<CAttributeList>::Allocate, CSchemaClassBinding<CAttributeList>::ConstructInPlace, CEconItemView::CEconItemView, CSchemaClassBinding<CAttributeList>::AllocateAndCopyConstruct
void __fastcall CAttributeList::CAttributeList(CAttributeList *const this)
{
  CUtlVectorBase<CEconItemAttribute,CNetworkUtlVector_MemoryType<CEconItemAttribute,-1> >::CAllocator *p_m_Memory; // r13
  CEntityInstance *v3; // rax
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v6; // rdi

  this->_vptr_CAttributeList = off_47A92B0;
  p_m_Memory = &this->m_Attributes.m_Vector.m_Memory;
  this->m_Attributes.m_Vector.m_Size = 0;
  this->m_Attributes.m_Vector.m_Memory.m_pMemory = 0;
  this->m_Attributes.m_Vector.m_Memory.m_nAllocationCount = 0;
  v3 = CEntitySpawnHelper::gm_pCurEntityPtr;
  this->m_Attributes.m_Vector.m_Memory.m_nGrowSize = 0;
  this->m_Attributes.m_PathToVector.m_bUsingExternalPaths = 0;
  this->m_Attributes.m_pArraySizeChangedDelegate = 0;
  this->m_Attributes.m_bIsNetworkVarExcluded = 0;
  this->m_Attributes.m_pOwnerEntity.m_pObj = v3;
  this->m_Attributes.m_PathToVector.m_nCount = 0;
  this->m_Attributes.m_bResolved = 0;
  this->m_pManager = 0;
  CUtlVectorBase<CEconItemAttribute,CNetworkUtlVector_MemoryType<CEconItemAttribute,-1>>::RemoveAll(&this->m_Attributes.m_Vector);
  if ( (this->m_Attributes.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CEconItemAttribute,int>::Purge(p_m_Memory);
  m_pArraySizeChangedDelegate = this->m_Attributes.m_pArraySizeChangedDelegate;
  if ( m_pArraySizeChangedDelegate != 0 )
  {
    pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
    v6 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v6 - 1);
    pfn(v6);
  }
}


// CAttributeList::SetManager  (line 1609, @0x0000000002e70c60, libserver.so)
// callers: CAttributeContainer::InitializeAttributes
void __fastcall CAttributeList::SetManager(CAttributeList *const this, CAttributeManager *pManager)
{
  this->m_pManager = pManager;
}


// CAttributeList::Init  (line 1618, @0x0000000002e77280, libserver.so)  // inlines: Clear, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, NetworkStateChanged, OnSizeChanged, Path_RemoveAll, Path_SetCount, Purge, Resolve, V_memcpy, memcpy, operator CEntityInstance*, operator(), operator=
// calls: GetNetworkSerializerForEntityInstance, memcpy, CUtlVectorBase<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> >::RemoveAll, CUtlMemory<CEconItemAttribute, int>::Purge, EntityInstanceSetNetworkStateChanged, CUtlVectorEmbeddedNetworkVar<CEconItemAttribute, CAttributeList::NetworkVar_m_Attributes, -1>::Resolve, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CAttributeList::Init(CAttributeList *const this)
{
  CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1> *p_m_Attributes; // r12
  CEntityInstance *m_pObj; // r13
  void (__fastcall *v4)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1> *, bool *); // r15
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v6; // rdx
  size_t v7; // rdx
  void **v8; // rsi
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v11; // rdi
  LeafCodeInfo_t v12; // [rsp+0h] [rbp-70h] BYREF
  void *src[2]; // [rsp+20h] [rbp-50h] BYREF
  __int16 v14; // [rsp+30h] [rbp-40h]
  char v15; // [rsp+32h] [rbp-3Eh]

  p_m_Attributes = &this->m_Attributes;
  if ( this->m_Attributes.m_Vector.m_Size > 0 )
  {
    if ( !this->m_Attributes.m_bResolved )
    {
      m_pObj = this->m_Attributes.m_pOwnerEntity.m_pObj;
      this->m_Attributes.m_bResolved = 1;
      if ( m_pObj != 0 )
      {
        v4 = *(*g_pFlattenedSerializers + 272LL);
        NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
        v4(
          src,
          g_pFlattenedSerializers,
          NetworkSerializerForEntityInstance,
          m_pObj,
          p_m_Attributes,
          &this->m_Attributes.m_bIsNetworkVarExcluded);
        if ( &this->m_Attributes.m_PathToVector != src )
        {
          v6 = v14;
          this->m_Attributes.m_PathToVector.m_bUsingExternalPaths = 0;
          if ( v6 > 6 )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
              goto LABEL_26;
            while ( 1 )
            {
              if ( Plat_ShouldCollectMiniDumpsForFatalErrors() != 0 )
                loc_0 = -559038737;
              Plat_ExitProcess(1);
LABEL_26:
              v12.m_szFile = "../../public/tier2/fieldpath.h";
              v12.m_szFunction = "Path_SetCount";
              v12.m_nLine = 442;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v12,
                "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                6);
            }
          }
          this->m_Attributes.m_PathToVector.m_nCount = v6;
          if ( v6 > 0 )
          {
            v7 = 2 * v6;
            v8 = src;
            if ( v15 != 0 )
              v8 = src[0];
            memcpy(&this->m_Attributes.m_PathToVector, v8, v7);
          }
        }
      }
      else
      {
        if ( this->m_Attributes.m_PathToVector.m_bUsingExternalPaths )
          CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1>::Resolve(this);
        this->m_Attributes.m_PathToVector.m_nCount = 0;
      }
    }
    if ( !this->m_Attributes.m_bIsNetworkVarExcluded )
      EntityInstanceSetNetworkStateChanged(this->m_Attributes.m_pOwnerEntity.m_pObj);
  }
  CUtlVectorBase<CEconItemAttribute,CNetworkUtlVector_MemoryType<CEconItemAttribute,-1>>::RemoveAll(&p_m_Attributes->m_Vector);
  if ( (this->m_Attributes.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CEconItemAttribute,int>::Purge(&this->m_Attributes.m_Vector.m_Memory);
  m_pArraySizeChangedDelegate = this->m_Attributes.m_pArraySizeChangedDelegate;
  if ( m_pArraySizeChangedDelegate != 0 )
  {
    pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
    v11 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v11 - 1);
    pfn(v11);
  }
}


// CAttributeList::IterateAttributes  (line 1626, @0x0000000002e99050, libserver.so)  // inlines: Element, operator[]
// calls: CEconItemAttribute::GetStaticData
// callers: CEconItemView::IterateAttributes
void __fastcall CAttributeList::IterateAttributes(
        const CAttributeList *const this,
        IEconItemAttributeIterator *pIterator)
{
  int v4; // r12d
  __int64 i; // rbx
  CEconItemAttribute *v6; // r14
  const CEconItemAttributeDefinition *StaticData; // rax
  const ISchemaAttributeType *m_pAttrType; // rdi
  attribute_data_union_t value; // [rsp+10h] [rbp-40h] BYREF

  v4 = 0;
  for ( i = 0; v4 < this->m_Attributes.m_Vector.m_Size; ++i )
  {
    v6 = &this->m_Attributes.m_Vector.m_Memory.m_pMemory[i];
    StaticData = CEconItemAttribute::GetStaticData(v6);
    if ( StaticData != 0 )
    {
      m_pAttrType = StaticData->m_pAttrType;
      value.asUint32 = LODWORD(v6->m_flValue.m_Value);
      if ( (*(m_pAttrType->_vptr_ISchemaAttributeType + 10))(m_pAttrType, pIterator, StaticData, &value) == 0 )
        break;
    }
    ++v4;
  }
}


// CAttributeList::DestroyAllAttributes  (line 1656, @0x0000000002e77430, libserver.so)  // inlines: Clear, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, NetworkStateChanged, NotifyManagerOfAttributeValueChanges, OnSizeChanged, Path_RemoveAll, Path_SetCount, Purge, Resolve, V_memcpy, memcpy, operator CEntityInstance*, operator(), operator=
// calls: GetNetworkSerializerForEntityInstance, memcpy, CUtlVectorBase<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> >::RemoveAll, CUtlMemory<CEconItemAttribute, int>::Purge, EntityInstanceSetNetworkStateChanged, CUtlVectorEmbeddedNetworkVar<CEconItemAttribute, CAttributeList::NetworkVar_m_Attributes, -1>::Resolve, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CAttributeList::DestroyAllAttributes(CAttributeList *const this)
{
  int m_Size; // eax
  CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1> *p_m_Attributes; // r12
  CEntityInstance *m_pObj; // r13
  void (__fastcall *v5)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1> *, bool *); // r15
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v7; // rdx
  size_t v8; // rdx
  void **v9; // rsi
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v12; // rdi
  CAttributeManager *m_pManager; // rdi
  LeafCodeInfo_t v14; // [rsp+0h] [rbp-70h] BYREF
  void *src[2]; // [rsp+20h] [rbp-50h] BYREF
  __int16 v16; // [rsp+30h] [rbp-40h]
  char v17; // [rsp+32h] [rbp-3Eh]

  m_Size = this->m_Attributes.m_Vector.m_Size;
  if ( m_Size != 0 )
  {
    p_m_Attributes = &this->m_Attributes;
    if ( m_Size > 0 )
    {
      if ( !this->m_Attributes.m_bResolved )
      {
        m_pObj = this->m_Attributes.m_pOwnerEntity.m_pObj;
        this->m_Attributes.m_bResolved = 1;
        if ( m_pObj != 0 )
        {
          v5 = *(*g_pFlattenedSerializers + 272LL);
          NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
          v5(
            src,
            g_pFlattenedSerializers,
            NetworkSerializerForEntityInstance,
            m_pObj,
            p_m_Attributes,
            &this->m_Attributes.m_bIsNetworkVarExcluded);
          if ( &this->m_Attributes.m_PathToVector != src )
          {
            v7 = v16;
            this->m_Attributes.m_PathToVector.m_bUsingExternalPaths = 0;
            if ( v7 > 6 )
            {
              if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
              {
                v14.m_szFile = "../../public/tier2/fieldpath.h";
                v14.m_szFunction = "Path_SetCount";
                v14.m_nLine = 442;
                LoggingSystem_Log(
                  LOG_GENERAL,
                  LoggingSeverity_t::LS_ERROR,
                  &v14,
                  "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                  6);
              }
              if ( Plat_ShouldCollectMiniDumpsForFatalErrors() != 0 )
                loc_0 = -559038737;
              Plat_ExitProcess(1);
              JUMPOUT(0x2E775FE);
            }
            this->m_Attributes.m_PathToVector.m_nCount = v7;
            if ( v7 > 0 )
            {
              v8 = 2 * v7;
              v9 = src;
              if ( v17 != 0 )
                v9 = src[0];
              memcpy(&this->m_Attributes.m_PathToVector, v9, v8);
            }
          }
        }
        else
        {
          if ( this->m_Attributes.m_PathToVector.m_bUsingExternalPaths )
            CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1>::Resolve(this);
          this->m_Attributes.m_PathToVector.m_nCount = 0;
        }
      }
      if ( !this->m_Attributes.m_bIsNetworkVarExcluded )
        EntityInstanceSetNetworkStateChanged(this->m_Attributes.m_pOwnerEntity.m_pObj);
    }
    CUtlVectorBase<CEconItemAttribute,CNetworkUtlVector_MemoryType<CEconItemAttribute,-1>>::RemoveAll(&p_m_Attributes->m_Vector);
    if ( (this->m_Attributes.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconItemAttribute,int>::Purge(&this->m_Attributes.m_Vector.m_Memory);
    m_pArraySizeChangedDelegate = this->m_Attributes.m_pArraySizeChangedDelegate;
    if ( m_pArraySizeChangedDelegate != 0 )
    {
      pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
      v12 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
      if ( (pfn & 1) != 0 )
        pfn = *(pfn + *v12 - 1);
      pfn(v12);
    }
    m_pManager = this->m_pManager;
    if ( m_pManager != 0 )
      (*(m_pManager->_vptr_CAttributeManager + 9))(m_pManager);
  }
}


// CAttributeList::SetRuntimeAttributeValue  (line 1668, @0x0000000002e78270, libserver.so)  // inlines: AddToTail, AssignPathIdToElement, CEconItemAttribute, CEntityOwnerPtr, CFieldPath, CSmartPtr, Clear, CopyConstruct<CEconItemAttribute>, Element, Get, GetAttribIndex, GetAttribute, GetPathData, GrowMemory, IsUsingFixedPaths, LeafCodeInfo_t, NetworkStateChanged, NotifyManagerOfAttributeValueChanges, OnSizeChanged, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator(), operator=, operator=<float>, operator=<short unsigned int>, operator[]
// calls: CEconItemAttribute::CEconItemAttribute, GetNetworkSerializerForEntityInstance, memcpy, EntityInstanceSetNetworkStateChanged, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, CUtlVectorEmbeddedNetworkVar<CEconItemAttribute, CAttributeList::NetworkVar_m_Attributes, -1>::Resolve, CUtlMemory<CEconItemAttribute, int>::Grow, CUtlVectorEmbeddedNetworkVar<CEconItemAttribute, CAttributeList::NetworkVar_m_Attributes, -1>::AssignPathIdToElement (13 total)
// strings: "../../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CAttributeList::SetRuntimeAttributeValue(
        CAttributeList *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        double a3,
        double flValue)
{
  int m_Size; // eax
  unsigned __int64 v7; // rbx
  CEconItemAttribute *v8; // r14
  unsigned __int16 m_Value; // r13
  double v10; // xmm2_8
  CAttributeManager *m_pManager; // rdi
  unsigned __int16 v12; // ax
  CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1> *m_pObj; // rdi
  int v14; // esi
  CEntityInstance *v15; // rbx
  void (__fastcall *v16)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1> *, bool *); // r15
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v18; // r13
  __int64 v19; // rax
  void **v20; // rsi
  unsigned int *v21; // rbx
  int v22; // eax
  char *v23; // rax
  CEntityInstance *v24; // r15
  FlattenedSerializerHandle_t v25; // rax
  __int64 m_szFunction_low; // rax
  const void *m_szFile; // rsi
  __int64 m_nCount; // rax
  CFieldPath *p_m_PathToVector; // rsi
  __int64 v30; // rax
  CEntityInstance *v31; // rdi
  ChangeAccessorFieldPathIndex_t *v32; // r13
  CEntityInstance *v33; // rax
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  _QWORD *v36; // rdi
  CEntityInstance *v37; // rdi
  const LeafCodeInfo_t *p_path; // rdx
  float flValuea; // [rsp+0h] [rbp-C0h]
  void (__fastcall *flValueb)(LeafCodeInfo_t *, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1> *, bool *); // [rsp+0h] [rbp-C0h]
  __int64 v41; // [rsp+8h] [rbp-B8h]
  unsigned __int16 v42; // [rsp+8h] [rbp-B8h]
  CEconItemAttribute attribute; // [rsp+10h] [rbp-B0h] BYREF
  void *src[2]; // [rsp+30h] [rbp-90h] BYREF
  __int16 v45; // [rsp+40h] [rbp-80h]
  char v46; // [rsp+42h] [rbp-7Eh]
  CFieldPath path; // [rsp+50h] [rbp-70h] BYREF
  LeafCodeInfo_t v48; // [rsp+70h] [rbp-50h] BYREF

  flValuea = *&a3;
  m_Size = this->m_Attributes.m_Vector.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_9:
    CEconItemAttribute::CEconItemAttribute(&attribute);
    v12 = (*pAttrDef->_vptr_IEconItemAttributeDefinition)(pAttrDef);
    if ( v12 != attribute.m_iAttributeDefinitionIndex.m_Value )
    {
      m_pObj = attribute.__m_pChainEntity.m_pObj;
      if ( attribute.__m_pChainEntity.m_pObj != 0
        && (attribute.__m_pChainEntity.m_pObj->m_pEntity->m_flags & 0x400) == 0
        && attribute.__m_PathIndex.m_Value != -1 )
      {
        v42 = v12;
        (*(attribute.__m_pChainEntity.m_pObj->_vptr_IHandleEntity + 22))(
          attribute.__m_pChainEntity.m_pObj,
          18,
          0xFFFFFFFFLL,
          attribute.__m_PathIndex.m_Value);
        v12 = v42;
      }
      attribute.m_iAttributeDefinitionIndex.m_Value = v12;
    }
    *&flValue = LODWORD(flValuea);
    if ( flValuea != attribute.m_flValue.m_Value )
    {
      m_pObj = attribute.__m_pChainEntity.m_pObj;
      if ( attribute.__m_pChainEntity.m_pObj != 0
        && (attribute.__m_pChainEntity.m_pObj->m_pEntity->m_flags & 0x400) == 0
        && attribute.__m_PathIndex.m_Value != -1 )
      {
        (*(attribute.__m_pChainEntity.m_pObj->_vptr_IHandleEntity + 22))(
          attribute.__m_pChainEntity.m_pObj,
          20,
          0xFFFFFFFFLL,
          attribute.__m_PathIndex.m_Value,
          a3,
          flValuea);
      }
      attribute.m_flValue.m_Value = flValuea;
    }
    if ( !this->m_Attributes.m_bResolved )
    {
      v15 = this->m_Attributes.m_pOwnerEntity.m_pObj;
      this->m_Attributes.m_bResolved = 1;
      if ( v15 != 0 )
      {
        v16 = *(*g_pFlattenedSerializers + 272LL);
        NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(v15);
        v18 = src;
        v16(
          src,
          g_pFlattenedSerializers,
          NetworkSerializerForEntityInstance,
          v15,
          &this->m_Attributes,
          &this->m_Attributes.m_bIsNetworkVarExcluded);
        m_pObj = &this->m_Attributes.m_PathToVector;
        if ( &this->m_Attributes.m_PathToVector != src )
        {
          v19 = v45;
          this->m_Attributes.m_PathToVector.m_bUsingExternalPaths = 0;
          if ( v19 > 6 )
          {
LABEL_80:
            v21 = &LOG_GENERAL;
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
              goto LABEL_48;
            v48.m_nLine = 442;
            v48.m_szFile = "../../public/tier2/fieldpath.h";
            v48.m_szFunction = "Path_SetCount";
            p_path = &v48;
            goto LABEL_79;
          }
          this->m_Attributes.m_PathToVector.m_nCount = v19;
          if ( v19 > 0 )
          {
            v20 = src;
            if ( v46 != 0 )
              v20 = src[0];
            memcpy(m_pObj, v20, 2 * v19);
          }
        }
      }
      else
      {
        if ( this->m_Attributes.m_PathToVector.m_bUsingExternalPaths )
          goto LABEL_73;
        v14 = 0;
        this->m_Attributes.m_PathToVector.m_nCount = 0;
      }
    }
    if ( !this->m_Attributes.m_bIsNetworkVarExcluded )
      EntityInstanceSetNetworkStateChanged(this->m_Attributes.m_pOwnerEntity.m_pObj);
    LODWORD(v21) = this->m_Attributes.m_Vector.m_Size;
    v22 = v21;
    if ( v21 == this->m_Attributes.m_Vector.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CEconItemAttribute,int>::Grow(&this->m_Attributes.m_Vector.m_Memory, 1);
      v22 = this->m_Attributes.m_Vector.m_Size;
    }
    this->m_Attributes.m_Vector.m_Size = v22 + 1;
    v18 = 24LL * v21;
    v23 = this->m_Attributes.m_Vector.m_Memory.m_pMemory + v18;
    if ( v23 != 0 )
    {
      *(v23 + 1) = 0;
      *v23 = &off_47A5F80;
      if ( attribute.__m_pChainEntity.m_pObj != 0 )
        *(v23 + 1) = attribute.__m_pChainEntity.m_pObj;
      *(v23 + 8) = attribute.__m_PathIndex.m_Value;
      *(v23 + 9) = attribute.m_iAttributeDefinitionIndex.m_Value;
      *&a3 = LODWORD(attribute.m_flValue.m_Value);
      *(v23 + 5) = LODWORD(attribute.m_flValue.m_Value);
    }
    if ( !this->m_Attributes.m_bResolved )
    {
      v24 = this->m_Attributes.m_pOwnerEntity.m_pObj;
      this->m_Attributes.m_bResolved = 1;
      if ( v24 != 0 )
      {
        flValueb = *(*g_pFlattenedSerializers + 272LL);
        v25 = GetNetworkSerializerForEntityInstance(v24);
        flValueb(
          &v48,
          g_pFlattenedSerializers,
          v25,
          v24,
          &this->m_Attributes,
          &this->m_Attributes.m_bIsNetworkVarExcluded);
        m_pObj = &this->m_Attributes.m_PathToVector;
        if ( &this->m_Attributes.m_PathToVector != &v48 )
        {
          m_szFunction_low = SLOWORD(v48.m_szFunction);
          this->m_Attributes.m_PathToVector.m_bUsingExternalPaths = 0;
          if ( m_szFunction_low > 6 )
          {
            v21 = &LOG_GENERAL;
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
              goto LABEL_48;
            *&path.u.m_FixedPaths[4].m_nValue = 442;
            path.u.m_pPaths = "../../public/tier2/fieldpath.h";
            *&path.m_nCount = "Path_SetCount";
            p_path = &path;
LABEL_79:
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              p_path,
              "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
              6);
            goto LABEL_48;
          }
          this->m_Attributes.m_PathToVector.m_nCount = m_szFunction_low;
          if ( m_szFunction_low > 0 )
          {
            m_szFile = &v48;
            if ( BYTE2(v48.m_szFunction) != 0 )
              m_szFile = v48.m_szFile;
            memcpy(m_pObj, m_szFile, 2 * m_szFunction_low);
          }
        }
        goto LABEL_40;
      }
      if ( this->m_Attributes.m_PathToVector.m_bUsingExternalPaths )
LABEL_73:
        CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1>::Resolve(m_pObj);
      this->m_Attributes.m_PathToVector.m_nCount = 0;
    }
LABEL_40:
    if ( this->m_Attributes.m_bIsNetworkVarExcluded )
    {
LABEL_56:
      m_pArraySizeChangedDelegate = this->m_Attributes.m_pArraySizeChangedDelegate;
      if ( m_pArraySizeChangedDelegate != 0 )
      {
        pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
        v36 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis
             + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v36 - 1);
        (pfn)(v36, a3, flValue);
      }
      goto LABEL_6;
    }
    m_nCount = this->m_Attributes.m_PathToVector.m_nCount;
    path.m_bUsingExternalPaths = 0;
    path.m_nCount = 0;
    if ( m_nCount <= 6 )
    {
      path.m_nCount = m_nCount;
      if ( m_nCount <= 0 )
        goto LABEL_51;
      p_m_PathToVector = &this->m_Attributes.m_PathToVector;
      if ( this->m_Attributes.m_PathToVector.m_bUsingExternalPaths )
        p_m_PathToVector = this->m_Attributes.m_PathToVector.u.m_pPaths;
      __memcpy_chk(&path, p_m_PathToVector, 2 * m_nCount, 24);
      if ( path.m_bUsingExternalPaths )
      {
        v21 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v48.m_szFile = "../../public/tier2/fieldpath.h";
          v48.m_szFunction = "Path_AddToTail";
          v48.m_nLine = 428;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v48,
            "Path_AddToTail failed for read only CFieldPath");
        }
LABEL_48:
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors() != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(&loc_0 + 1);
      }
LABEL_51:
      v30 = path.m_nCount;
      if ( path.m_nCount > 5 )
        CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1>::AssignPathIdToElement(
          m_pObj,
          v14);
      v31 = this->m_Attributes.m_pOwnerEntity.m_pObj;
      v32 = (this->m_Attributes.m_Vector.m_Memory.m_pMemory + v18);
      ++path.m_nCount;
      path.u.m_FixedPaths[v30].m_nValue = v21;
      if ( v31 != 0 )
        v32[8].m_Value = EntityInstanceAddChangeAccessorPath(v31, &path).m_Value;
      else
        v32[8].m_Value = -1;
      v33 = this->m_Attributes.m_pOwnerEntity.m_pObj;
      if ( v33 != *&v32[4].m_Value )
        *&v32[4].m_Value = v33;
      goto LABEL_56;
    }
    goto LABEL_80;
  }
  v7 = 0;
  v41 = 8 * (3LL * (m_Size - 1) + 3);
  while ( 1 )
  {
    v8 = &this->m_Attributes.m_Vector.m_Memory.m_pMemory[v7 / 0x18];
    m_Value = v8->m_iAttributeDefinitionIndex.m_Value;
    if ( (*pAttrDef->_vptr_IEconItemAttributeDefinition)(pAttrDef, a3, flValue) == m_Value )
      break;
    v7 += 24LL;
    if ( v7 == v41 )
      goto LABEL_9;
  }
  *&v10 = LODWORD(flValuea);
  if ( flValuea != v8->m_flValue.m_Value )
  {
    v37 = v8->__m_pChainEntity.m_pObj;
    if ( v37 != 0 && (v37->m_pEntity->m_flags & 0x400) == 0 && v8->__m_PathIndex.m_Value != -1 )
      (*(v37->_vptr_IHandleEntity + 22))(v37, 20, 0xFFFFFFFFLL, v8->__m_PathIndex.m_Value, a3, flValue, flValuea);
    v8->m_flValue.m_Value = flValuea;
  }
LABEL_6:
  m_pManager = this->m_pManager;
  if ( m_pManager != 0 )
    (*(m_pManager->_vptr_CAttributeManager + 9))(m_pManager, a3, flValue, v10);
}


// CAttributeList::RemoveAttribute  (line 1699, @0x0000000002e990e0, libserver.so)  // inlines: AssignPathIdToElement, CFieldPath, Clear, Destruct<CEconItemAttribute>, Element, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, NetworkStateChanged, NotifyManagerOfAttributeValueChanges, OnSizeChanged, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, ReassignPathIds, Remove, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator(), operator=, operator[], ~CEconItemAttribute
// calls: CEconItemAttribute::GetStaticData, GetNetworkSerializerForEntityInstance, memcpy, EntityInstanceSetNetworkStateChanged, CUtlVectorBase<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> >::ShiftElementsLeft, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, CUtlVectorEmbeddedNetworkVar<CEconItemAttribute, CAttributeList::NetworkVar_m_Attributes, -1>::Resolve, CUtlVectorEmbeddedNetworkVar<CEconItemAttribute, CAttributeList::NetworkVar_m_Attributes, -1>::AssignPathIdToElement (13 total)
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath"
void __fastcall CAttributeList::RemoveAttribute(
        CAttributeList *const this,
        const CEconItemAttributeDefinition *pAttrDef)
{
  const CFieldPath *p_path; // r13
  CEntityInstance *v4; // r12
  CAttributeList *v5; // rbx
  int m_Size; // r14d
  CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1> *p_m_PathToVector; // rdi
  CEntityInstance *m_pObj; // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  void **v10; // r15
  __int64 v11; // rax
  void **v12; // rsi
  int v13; // esi
  FlattenedSerializerHandle_t v14; // rax
  __int64 v15; // rax
  void **v16; // rsi
  CEntityInstance *v17; // rcx
  FlattenedSerializerHandle_t v18; // rax
  __int64 m_szFunction_low; // rdx
  size_t v20; // rdx
  const char *m_szFile; // rsi
  __int64 m_nCount; // rdx
  CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1> *v23; // rdi
  __int64 v24; // rdx
  const CFieldPath::Path_t *m_pPaths; // rsi
  int16 v26; // cx
  __int64 v27; // rax
  ChangeAccessorFieldPathIndex_t *v28; // rdx
  ChangeAccessorFieldPathIndex_t v29; // ax
  CEntityInstance *v30; // rax
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v33; // rdi
  CAttributeManager *m_pManager; // rdi
  const LeafCodeInfo_t *v35; // rdx
  bool *p_m_bIsNetworkVarExcluded; // [rsp+0h] [rbp-E0h]
  CUtlVectorBase<CEconItemAttribute,CNetworkUtlVector_MemoryType<CEconItemAttribute,-1> > *p_m_Vector; // [rsp+8h] [rbp-D8h]
  void (__fastcall *v38)(CEntityInstance *, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorBase<CEconItemAttribute,CNetworkUtlVector_MemoryType<CEconItemAttribute,-1> > *, bool *); // [rsp+18h] [rbp-C8h]
  CEntityInstance *v39; // [rsp+20h] [rbp-C0h]
  ChangeAccessorFieldPathIndex_t *v40; // [rsp+20h] [rbp-C0h]
  CEntityInstance *dest; // [rsp+28h] [rbp-B8h]
  void *src[2]; // [rsp+30h] [rbp-B0h] BYREF
  __int16 v43; // [rsp+40h] [rbp-A0h]
  char v44; // [rsp+42h] [rbp-9Eh]
  void *v45[2]; // [rsp+50h] [rbp-90h] BYREF
  __int16 v46; // [rsp+60h] [rbp-80h]
  char v47; // [rsp+62h] [rbp-7Eh]
  CFieldPath path; // [rsp+70h] [rbp-70h] BYREF
  LeafCodeInfo_t v49; // [rsp+90h] [rbp-50h] BYREF

  p_path = 0;
  v4 = 0;
  v5 = this;
  m_Size = this->m_Attributes.m_Vector.m_Size;
  if ( m_Size <= 0 )
    return;
  while ( CEconItemAttribute::GetStaticData((v5->m_Attributes.m_Vector.m_Memory.m_pMemory + v4)) != pAttrDef )
  {
    p_path = (p_path + 1);
    v4 = (v4 + 24);
    if ( p_path == m_Size )
      return;
  }
  p_m_Vector = &v5->m_Attributes.m_Vector;
  if ( !v5->m_Attributes.m_bResolved )
  {
    m_pObj = v5->m_Attributes.m_pOwnerEntity.m_pObj;
    v5->m_Attributes.m_bResolved = 1;
    if ( m_pObj != 0 )
    {
      dest = *(*g_pFlattenedSerializers + 272LL);
      NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
      v10 = src;
      (dest)(
        src,
        g_pFlattenedSerializers,
        NetworkSerializerForEntityInstance,
        m_pObj,
        p_m_Vector,
        &v5->m_Attributes.m_bIsNetworkVarExcluded);
      if ( &v5->m_Attributes.m_PathToVector != src )
      {
        v11 = v43;
        v5->m_Attributes.m_PathToVector.m_bUsingExternalPaths = 0;
        if ( v11 > 6 )
          goto LABEL_69;
        v5->m_Attributes.m_PathToVector.m_nCount = v11;
        if ( v11 > 0 )
        {
          v12 = src;
          if ( v44 != 0 )
            v12 = src[0];
          memcpy(&v5->m_Attributes.m_PathToVector, v12, 2 * v11);
        }
      }
    }
    else
    {
      if ( v5->m_Attributes.m_PathToVector.m_bUsingExternalPaths )
        goto LABEL_64;
      v5->m_Attributes.m_PathToVector.m_nCount = 0;
    }
  }
  if ( !v5->m_Attributes.m_bIsNetworkVarExcluded )
    EntityInstanceSetNetworkStateChanged(v5->m_Attributes.m_pOwnerEntity.m_pObj);
  LODWORD(v10) = v5 + 8;
  *(&v5->m_Attributes.m_Vector.m_Memory.m_pMemory->_vptr_CEconItemAttribute + v4) = &off_47A5F80;
  CUtlVectorBase<CEconItemAttribute,CNetworkUtlVector_MemoryType<CEconItemAttribute,-1>>::ShiftElementsLeft(
    p_m_Vector,
    p_path,
    1);
  --v5->m_Attributes.m_Vector.m_Size;
  if ( v5->m_Attributes.m_bResolved )
    goto LABEL_23;
  v4 = v5->m_Attributes.m_pOwnerEntity.m_pObj;
  v5->m_Attributes.m_bResolved = 1;
  if ( v4 == 0 )
  {
    if ( !v5->m_Attributes.m_PathToVector.m_bUsingExternalPaths )
    {
      v5->m_Attributes.m_PathToVector.m_nCount = 0;
      goto LABEL_23;
    }
LABEL_64:
    CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1>::Resolve(p_m_PathToVector);
  }
  m_pObj = *(*g_pFlattenedSerializers + 272LL);
  v14 = GetNetworkSerializerForEntityInstance(v4);
  p_path = v45;
  (m_pObj)(v45, g_pFlattenedSerializers, v14, v4, p_m_Vector, &v5->m_Attributes.m_bIsNetworkVarExcluded);
  p_m_PathToVector = &v5->m_Attributes.m_PathToVector;
  if ( &v5->m_Attributes.m_PathToVector != v45 )
  {
    v15 = v46;
    v5->m_Attributes.m_PathToVector.m_bUsingExternalPaths = 0;
    if ( v15 > 6 )
      goto LABEL_69;
    v5->m_Attributes.m_PathToVector.m_nCount = v15;
    if ( v15 > 0 )
    {
      v16 = v45;
      if ( v47 != 0 )
        v16 = v45[0];
      memcpy(p_m_PathToVector, v16, 2 * v15);
    }
  }
LABEL_23:
  if ( !v5->m_Attributes.m_bIsNetworkVarExcluded && v5->m_Attributes.m_Vector.m_Size > 0 )
  {
    v4 = 0;
    LODWORD(v10) = 0;
    p_m_bIsNetworkVarExcluded = &v5->m_Attributes.m_bIsNetworkVarExcluded;
    m_pObj = &v49;
    dest = &v5->m_Attributes.m_PathToVector;
    p_path = &path;
    do
    {
      if ( !v5->m_Attributes.m_bResolved )
      {
        v17 = v5->m_Attributes.m_pOwnerEntity.m_pObj;
        v5->m_Attributes.m_bResolved = 1;
        if ( v17 != 0 )
        {
          v39 = v17;
          v38 = *(*g_pFlattenedSerializers + 272LL);
          v18 = GetNetworkSerializerForEntityInstance(v17);
          v38(m_pObj, g_pFlattenedSerializers, v18, v39, p_m_Vector, p_m_bIsNetworkVarExcluded);
          if ( dest != m_pObj )
          {
            m_szFunction_low = SLOWORD(v49.m_szFunction);
            v5->m_Attributes.m_PathToVector.m_bUsingExternalPaths = 0;
            if ( m_szFunction_low > 6 )
            {
              v5 = &LOG_GENERAL;
              if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
                goto LABEL_42;
              *&path.u.m_FixedPaths[4].m_nValue = 442;
              path.u.m_pPaths = "../../public/tier2/fieldpath.h";
              *&path.m_nCount = "Path_SetCount";
              v35 = &path;
              goto LABEL_71;
            }
            v5->m_Attributes.m_PathToVector.m_nCount = m_szFunction_low;
            if ( m_szFunction_low > 0 )
            {
              v20 = 2 * m_szFunction_low;
              m_szFile = m_pObj;
              if ( BYTE2(v49.m_szFunction) != 0 )
                m_szFile = v49.m_szFile;
              memcpy(dest, m_szFile, v20);
            }
          }
        }
        else
        {
          if ( v5->m_Attributes.m_PathToVector.m_bUsingExternalPaths )
            goto LABEL_64;
          v5->m_Attributes.m_PathToVector.m_nCount = 0;
        }
      }
      if ( !v5->m_Attributes.m_bIsNetworkVarExcluded )
      {
        m_nCount = v5->m_Attributes.m_PathToVector.m_nCount;
        v23 = 0;
        path.m_bUsingExternalPaths = 0;
        path.m_nCount = 0;
        if ( m_nCount <= 6 )
        {
          path.m_nCount = m_nCount;
          if ( m_nCount <= 0 )
            goto LABEL_45;
          v24 = 2 * m_nCount;
          if ( v5->m_Attributes.m_PathToVector.m_bUsingExternalPaths )
            m_pPaths = v5->m_Attributes.m_PathToVector.u.m_pPaths;
          else
            m_pPaths = dest;
          __memcpy_chk(p_path, m_pPaths, v24, 24);
          v26 = v10;
          if ( path.m_bUsingExternalPaths )
          {
            v5 = &LOG_GENERAL;
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            {
              v49.m_szFile = "../../public/tier2/fieldpath.h";
              v49.m_szFunction = "Path_AddToTail";
              v49.m_nLine = 428;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v49,
                "Path_AddToTail failed for read only CFieldPath");
            }
LABEL_42:
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors() != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(&loc_0 + 1);
LABEL_45:
            v26 = v10;
          }
          v27 = path.m_nCount;
          if ( path.m_nCount > 5 )
            CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1>::AssignPathIdToElement(
              v23,
              v13);
          p_m_PathToVector = v5->m_Attributes.m_pOwnerEntity.m_pObj;
          ++path.m_nCount;
          v28 = (v5->m_Attributes.m_Vector.m_Memory.m_pMemory + v4);
          p_path->u.m_FixedPaths[v27].m_nValue = v26;
          if ( p_m_PathToVector != 0 )
          {
            v40 = v28;
            v29.m_Value = EntityInstanceAddChangeAccessorPath(p_m_PathToVector, p_path).m_Value;
            v28 = v40;
            v40[8].m_Value = v29.m_Value;
          }
          else
          {
            v13 = -1;
            v28[8].m_Value = -1;
          }
          v30 = v5->m_Attributes.m_pOwnerEntity.m_pObj;
          if ( v30 != *&v28[4].m_Value )
            *&v28[4].m_Value = v30;
          goto LABEL_51;
        }
LABEL_69:
        v5 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
          goto LABEL_42;
        v49.m_nLine = 442;
        v49.m_szFile = "../../public/tier2/fieldpath.h";
        v49.m_szFunction = "Path_SetCount";
        v35 = &v49;
LABEL_71:
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          v35,
          "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
        goto LABEL_42;
      }
LABEL_51:
      LODWORD(v10) = v10 + 1;
      v4 = (v4 + 24);
    }
    while ( v10 < v5->m_Attributes.m_Vector.m_Size );
  }
  m_pArraySizeChangedDelegate = v5->m_Attributes.m_pArraySizeChangedDelegate;
  if ( m_pArraySizeChangedDelegate != 0 )
  {
    pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
    v33 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v33 - 1);
    pfn(v33);
  }
  m_pManager = v5->m_pManager;
  if ( m_pManager != 0 )
    (*(m_pManager->_vptr_CAttributeManager + 9))(m_pManager);
}


// CAttributeList::RemoveAttributeByIndex  (line 1716, @0x0000000002e77ad0, libserver.so)  // inlines: AssignPathIdToElement, CFieldPath, Clear, Destruct<CEconItemAttribute>, Element, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, NetworkStateChanged, NotifyManagerOfAttributeValueChanges, OnSizeChanged, Path_AddToTail, Path_RemoveAll, Path_SetCount, Push, ReassignPathIds, Remove, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator(), operator=, operator[], ~CEconItemAttribute
// calls: GetNetworkSerializerForEntityInstance, memcpy, EntityInstanceSetNetworkStateChanged, CUtlVectorBase<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> >::ShiftElementsLeft, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, CUtlVectorEmbeddedNetworkVar<CEconItemAttribute, CAttributeList::NetworkVar_m_Attributes, -1>::Resolve, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CUtlVectorEmbeddedNetworkVar<CEconItemAttribute, CAttributeList::NetworkVar_m_Attributes, -1>::AssignPathIdToElement
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed for read only CFieldPath"
void __fastcall CAttributeList::RemoveAttributeByIndex(CAttributeList *const this, int iIndex)
{
  unsigned __int64 v2; // r12
  CAttributeList *v3; // rbx
  CEntityInstance *m_pObj; // r13
  void (__fastcall *v5)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1> *, bool *); // r15
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  LeafCodeInfo_t *v7; // r14
  __int64 v8; // rax
  void **v9; // rsi
  int v10; // esi
  FlattenedSerializerHandle_t v11; // rax
  __int64 v12; // rax
  void **v13; // rsi
  CEntityInstance *v14; // rcx
  FlattenedSerializerHandle_t v15; // rax
  __int64 m_szFunction_low; // rdx
  size_t v17; // rdx
  const char *m_szFile; // rsi
  __int64 m_nCount; // rdx
  __int64 v20; // rdx
  const CFieldPath::Path_t *m_pPaths; // rsi
  __int16 v22; // cx
  __int64 v23; // rax
  ChangeAccessorFieldPathIndex_t *v24; // rdx
  ChangeAccessorFieldPathIndex_t v25; // ax
  CEntityInstance *v26; // rax
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v29; // rdi
  CAttributeManager *m_pManager; // rdi
  const LeafCodeInfo_t *p_path; // rdx
  bool *p_m_bIsNetworkVarExcluded; // [rsp+0h] [rbp-E0h]
  CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1> *p_m_Attributes; // [rsp+8h] [rbp-D8h]
  void (__fastcall *v34)(LeafCodeInfo_t *, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1> *, bool *); // [rsp+18h] [rbp-C8h]
  CEntityInstance *v35; // [rsp+20h] [rbp-C0h]
  ChangeAccessorFieldPathIndex_t *v36; // [rsp+20h] [rbp-C0h]
  LeafCodeInfo_t *dest; // [rsp+28h] [rbp-B8h]
  void *src[2]; // [rsp+30h] [rbp-B0h] BYREF
  __int16 v39; // [rsp+40h] [rbp-A0h]
  char v40; // [rsp+42h] [rbp-9Eh]
  void *v41[2]; // [rsp+50h] [rbp-90h] BYREF
  __int16 v42; // [rsp+60h] [rbp-80h]
  char v43; // [rsp+62h] [rbp-7Eh]
  CFieldPath path; // [rsp+70h] [rbp-70h] BYREF
  LeafCodeInfo_t v45; // [rsp+90h] [rbp-50h] BYREF

  v2 = iIndex;
  if ( iIndex < 0 )
    return;
  v3 = this;
  if ( iIndex >= this->m_Attributes.m_Vector.m_Size )
    return;
  p_m_Attributes = &this->m_Attributes;
  if ( !this->m_Attributes.m_bResolved )
  {
    m_pObj = this->m_Attributes.m_pOwnerEntity.m_pObj;
    this->m_Attributes.m_bResolved = 1;
    if ( m_pObj != 0 )
    {
      v5 = *(*g_pFlattenedSerializers + 272LL);
      NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
      v7 = src;
      v5(
        src,
        g_pFlattenedSerializers,
        NetworkSerializerForEntityInstance,
        m_pObj,
        p_m_Attributes,
        &v3->m_Attributes.m_bIsNetworkVarExcluded);
      if ( &v3->m_Attributes.m_PathToVector != src )
      {
        v8 = v39;
        v3->m_Attributes.m_PathToVector.m_bUsingExternalPaths = 0;
        if ( v8 > 6 )
          goto LABEL_66;
        v3->m_Attributes.m_PathToVector.m_nCount = v8;
        if ( v8 > 0 )
        {
          v9 = src;
          if ( v40 != 0 )
            v9 = src[0];
          memcpy(&v3->m_Attributes.m_PathToVector, v9, 2 * v8);
        }
      }
    }
    else
    {
      if ( this->m_Attributes.m_PathToVector.m_bUsingExternalPaths )
        goto LABEL_62;
      this->m_Attributes.m_PathToVector.m_nCount = 0;
    }
  }
  if ( !v3->m_Attributes.m_bIsNetworkVarExcluded )
    EntityInstanceSetNetworkStateChanged(v3->m_Attributes.m_pOwnerEntity.m_pObj);
  LODWORD(v5) = p_m_Attributes;
  v3->m_Attributes.m_Vector.m_Memory.m_pMemory[v2]._vptr_CEconItemAttribute = &off_47A5F80;
  CUtlVectorBase<CEconItemAttribute,CNetworkUtlVector_MemoryType<CEconItemAttribute,-1>>::ShiftElementsLeft(
    &p_m_Attributes->m_Vector,
    v2,
    1);
  --v3->m_Attributes.m_Vector.m_Size;
  if ( v3->m_Attributes.m_bResolved )
    goto LABEL_21;
  v2 = v3->m_Attributes.m_pOwnerEntity.m_pObj;
  v3->m_Attributes.m_bResolved = 1;
  if ( v2 != 0 )
  {
    v7 = *(*g_pFlattenedSerializers + 272LL);
    v11 = GetNetworkSerializerForEntityInstance(v2);
    m_pObj = v41;
    (v7)(v41, g_pFlattenedSerializers, v11, v2, p_m_Attributes, &v3->m_Attributes.m_bIsNetworkVarExcluded);
    this = &v3->m_Attributes.m_PathToVector;
    if ( &v3->m_Attributes.m_PathToVector != v41 )
    {
      v12 = v42;
      v3->m_Attributes.m_PathToVector.m_bUsingExternalPaths = 0;
      if ( v12 > 6 )
        goto LABEL_66;
      v3->m_Attributes.m_PathToVector.m_nCount = v12;
      if ( v12 > 0 )
      {
        v13 = v41;
        if ( v43 != 0 )
          v13 = v41[0];
        memcpy(this, v13, 2 * v12);
      }
    }
    goto LABEL_21;
  }
  if ( v3->m_Attributes.m_PathToVector.m_bUsingExternalPaths )
LABEL_62:
    CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1>::Resolve(this);
  this = 0;
  v3->m_Attributes.m_PathToVector.m_nCount = 0;
LABEL_21:
  if ( !v3->m_Attributes.m_bIsNetworkVarExcluded && v3->m_Attributes.m_Vector.m_Size > 0 )
  {
    v2 = 0;
    LODWORD(v5) = 0;
    p_m_bIsNetworkVarExcluded = &v3->m_Attributes.m_bIsNetworkVarExcluded;
    v7 = &v45;
    dest = &v3->m_Attributes.m_PathToVector;
    m_pObj = &path;
    do
    {
      if ( !v3->m_Attributes.m_bResolved )
      {
        v14 = v3->m_Attributes.m_pOwnerEntity.m_pObj;
        v3->m_Attributes.m_bResolved = 1;
        if ( v14 != 0 )
        {
          v35 = v14;
          v34 = *(*g_pFlattenedSerializers + 272LL);
          v15 = GetNetworkSerializerForEntityInstance(v14);
          v34(v7, g_pFlattenedSerializers, v15, v35, p_m_Attributes, p_m_bIsNetworkVarExcluded);
          if ( dest != v7 )
          {
            m_szFunction_low = SLOWORD(v45.m_szFunction);
            v3->m_Attributes.m_PathToVector.m_bUsingExternalPaths = 0;
            if ( m_szFunction_low > 6 )
            {
              v3 = &LOG_GENERAL;
              if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
                goto LABEL_40;
              *&path.u.m_FixedPaths[4].m_nValue = 442;
              path.u.m_pPaths = "../../public/tier2/fieldpath.h";
              *&path.m_nCount = "Path_SetCount";
              p_path = &path;
              goto LABEL_68;
            }
            v3->m_Attributes.m_PathToVector.m_nCount = m_szFunction_low;
            if ( m_szFunction_low > 0 )
            {
              v17 = 2 * m_szFunction_low;
              m_szFile = v7;
              if ( BYTE2(v45.m_szFunction) != 0 )
                m_szFile = v45.m_szFile;
              memcpy(dest, m_szFile, v17);
            }
          }
        }
        else
        {
          if ( v3->m_Attributes.m_PathToVector.m_bUsingExternalPaths )
            goto LABEL_62;
          v10 = 0;
          v3->m_Attributes.m_PathToVector.m_nCount = 0;
        }
      }
      if ( !v3->m_Attributes.m_bIsNetworkVarExcluded )
      {
        m_nCount = v3->m_Attributes.m_PathToVector.m_nCount;
        path.m_bUsingExternalPaths = 0;
        path.m_nCount = 0;
        if ( m_nCount <= 6 )
        {
          path.m_nCount = m_nCount;
          if ( m_nCount <= 0 )
            goto LABEL_43;
          v20 = 2 * m_nCount;
          if ( v3->m_Attributes.m_PathToVector.m_bUsingExternalPaths )
            m_pPaths = v3->m_Attributes.m_PathToVector.u.m_pPaths;
          else
            m_pPaths = dest;
          __memcpy_chk(m_pObj, m_pPaths, v20, 24);
          v22 = v5;
          if ( path.m_bUsingExternalPaths )
          {
            v3 = &LOG_GENERAL;
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            {
              v45.m_szFile = "../../public/tier2/fieldpath.h";
              v45.m_szFunction = "Path_AddToTail";
              v45.m_nLine = 428;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v45,
                "Path_AddToTail failed for read only CFieldPath");
            }
LABEL_40:
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors() != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(&loc_0 + 1);
LABEL_43:
            v22 = v5;
          }
          v23 = path.m_nCount;
          if ( path.m_nCount > 5 )
            CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1>::AssignPathIdToElement(
              this,
              v10);
          this = v3->m_Attributes.m_pOwnerEntity.m_pObj;
          ++path.m_nCount;
          v24 = (v3->m_Attributes.m_Vector.m_Memory.m_pMemory + v2);
          *(&m_pObj->_vptr_IHandleEntity + v23) = v22;
          if ( this != 0 )
          {
            v36 = v24;
            v25.m_Value = EntityInstanceAddChangeAccessorPath(this, m_pObj).m_Value;
            v24 = v36;
            v36[8].m_Value = v25.m_Value;
          }
          else
          {
            v24[8].m_Value = -1;
          }
          v26 = v3->m_Attributes.m_pOwnerEntity.m_pObj;
          if ( v26 != *&v24[4].m_Value )
            *&v24[4].m_Value = v26;
          goto LABEL_49;
        }
LABEL_66:
        v3 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
          goto LABEL_40;
        v45.m_nLine = 442;
        v45.m_szFile = "../../public/tier2/fieldpath.h";
        v45.m_szFunction = "Path_SetCount";
        p_path = &v45;
LABEL_68:
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          p_path,
          "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
        goto LABEL_40;
      }
LABEL_49:
      LODWORD(v5) = v5 + 1;
      v2 += 24LL;
    }
    while ( v5 < v3->m_Attributes.m_Vector.m_Size );
  }
  m_pArraySizeChangedDelegate = v3->m_Attributes.m_pArraySizeChangedDelegate;
  if ( m_pArraySizeChangedDelegate != 0 )
  {
    pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
    v29 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v29 - 1);
    pfn(v29);
  }
  m_pManager = v3->m_pManager;
  if ( m_pManager != 0 )
    (*(m_pManager->_vptr_CAttributeManager + 9))(m_pManager);
}


// CAttributeList::GetAttributeByID  (line 1728, @0x0000000002e99640, libserver.so)  // inlines: Element, operator[]
// calls: CEconItemAttribute::GetStaticData
// callers: CEconItemAttributeIterator_EconItemViewWrapper::OnIterateAttributeValue
const CEconItemAttribute *__fastcall CAttributeList::GetAttributeByID(
        const CAttributeList *const this,
        int iAttributeID)
{
  int m_Size; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  const CEconItemAttributeDefinition *StaticData; // rax

  m_Size = this->m_Attributes.m_Vector.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v5 = 0;
  v6 = 8 * (3LL * (m_Size - 1) + 3);
  while ( 1 )
  {
    StaticData = CEconItemAttribute::GetStaticData(&this->m_Attributes.m_Vector.m_Memory.m_pMemory[v5 / 0x18]);
    if ( (*StaticData->_vptr_IEconItemAttributeDefinition)(StaticData) == iAttributeID )
      break;
    v5 += 24LL;
    if ( v5 == v6 )
      return 0;
  }
  return &this->m_Attributes.m_Vector.m_Memory.m_pMemory[v5 / 0x18];
}


// CAttributeList::GetAttributeByName  (line 1743, @0x0000000002e9a2e0, libserver.so)  // inlines: Element, GetItemSchema, operator[]
// calls: ItemSystem, CEconItemSchema::GetAttributeDefinitionByName, CEconItemAttribute::GetStaticData
const CEconItemAttribute *__fastcall CAttributeList::GetAttributeByName(
        const CAttributeList *const this,
        const char *pszAttribDefName)
{
  CEconItemSystem *v4; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // r12
  int m_Size; // eax
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  const CEconItemAttributeDefinition *StaticData; // rax
  __int16 v10; // r15

  v4 = ItemSystem();
  AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(&v4->m_itemSchema, pszAttribDefName);
  if ( AttributeDefinitionByName == 0 )
    return 0;
  m_Size = this->m_Attributes.m_Vector.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v7 = 0;
  v8 = 8 * (3LL * (m_Size - 1) + 3);
  while ( 1 )
  {
    StaticData = CEconItemAttribute::GetStaticData(&this->m_Attributes.m_Vector.m_Memory.m_pMemory[v7 / 0x18]);
    v10 = (*StaticData->_vptr_IEconItemAttributeDefinition)(StaticData);
    if ( v10 == (*AttributeDefinitionByName->_vptr_IEconItemAttributeDefinition)(AttributeDefinitionByName) )
      break;
    v7 += 24LL;
    if ( v7 == v8 )
      return 0;
  }
  return &this->m_Attributes.m_Vector.m_Memory.m_pMemory[v7 / 0x18];
}


// CAttributeList::operator=  (line 1762, @0x0000000002e78d40, libserver.so)  // inlines: GetPathData, LeafCodeInfo_t, Path_SetCount, V_memcpy, memcpy, operator=, operator[]
// calls: CUtlVectorBase<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> >::SetCount, CEconItemAttribute::operator=, memcpy, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CAttributeList::operator=(CAttributeList *const this, const CAttributeList *const src)
{
  CUtlVectorEmbeddedNetworkVar<CEconItemAttribute,CAttributeList::NetworkVar_m_Attributes,-1> *p_m_Attributes; // rdi
  int m_Size; // ebx
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdi
  CEntityInstance *m_pObj; // rax
  __int16 m_nCount; // ax
  __int64 v13; // rdx
  CFieldPath *p_m_PathToVector; // rsi
  size_t v15; // rdx
  bool m_bResolved; // al
  LeafCodeInfo_t v17; // [rsp+0h] [rbp-40h] BYREF

  p_m_Attributes = &this->m_Attributes;
  if ( p_m_Attributes != &src->m_Attributes )
  {
    m_Size = src->m_Attributes.m_Vector.m_Size;
    CUtlVectorBase<CEconItemAttribute,CNetworkUtlVector_MemoryType<CEconItemAttribute,-1>>::SetCount(
      &p_m_Attributes->m_Vector,
      m_Size);
    if ( m_Size > 0 )
    {
      v6 = 3LL * (m_Size - 1) + 3;
      v7 = 0;
      v8 = 8 * v6;
      do
      {
        v9 = v7;
        v10 = v7;
        v7 += 24;
        CEconItemAttribute::operator=(
          (this->m_Attributes.m_Vector.m_Memory.m_pMemory + v10),
          (src->m_Attributes.m_Vector.m_Memory.m_pMemory + v9));
      }
      while ( v7 != v8 );
    }
  }
  m_pObj = src->m_Attributes.m_pOwnerEntity.m_pObj;
  if ( m_pObj != this->m_Attributes.m_pOwnerEntity.m_pObj )
    this->m_Attributes.m_pOwnerEntity.m_pObj = m_pObj;
  if ( src != this )
  {
    this->m_Attributes.m_PathToVector.m_bUsingExternalPaths = 0;
    m_nCount = src->m_Attributes.m_PathToVector.m_nCount;
    if ( m_nCount > 6 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v17.m_szFile = "../../public/tier2/fieldpath.h";
        v17.m_szFunction = "Path_SetCount";
        v17.m_nLine = 442;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v17,
          "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
          6);
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors() != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
      JUMPOUT(0x2E78E97);
    }
    this->m_Attributes.m_PathToVector.m_nCount = m_nCount;
    v13 = src->m_Attributes.m_PathToVector.m_nCount;
    if ( v13 > 0 )
    {
      p_m_PathToVector = &src->m_Attributes.m_PathToVector;
      v15 = 2 * v13;
      if ( src->m_Attributes.m_PathToVector.m_bUsingExternalPaths )
        p_m_PathToVector = src->m_Attributes.m_PathToVector.u.m_pPaths;
      memcpy(&this->m_Attributes.m_PathToVector, p_m_PathToVector, v15);
    }
  }
  this->m_Attributes.m_pArraySizeChangedDelegate = src->m_Attributes.m_pArraySizeChangedDelegate;
  this->m_Attributes.m_bIsNetworkVarExcluded = src->m_Attributes.m_bIsNetworkVarExcluded;
  m_bResolved = src->m_Attributes.m_bResolved;
  this->m_pManager = 0;
  this->m_Attributes.m_bResolved = m_bResolved;
}


// CAttributeList::NotifyManagerOfAttributeValueChanges  (line 1779, @0x0000000002e70c70, libserver.so)
void __fastcall CAttributeList::NotifyManagerOfAttributeValueChanges(CAttributeList *const this)
{
  CAttributeManager *m_pManager; // rdi

  m_pManager = this->m_pManager;
  if ( m_pManager != 0 )
    (*(m_pManager->_vptr_CAttributeManager + 9))(m_pManager);
}


