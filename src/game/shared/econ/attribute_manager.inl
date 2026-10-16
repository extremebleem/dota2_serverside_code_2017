
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CAttributeManager::Schema_DynamicBinding  (line 48, @0x0000000002e4ec00, libserver.so)
// globals: CAttributeManager::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CAttributeManager::Schema_DynamicBinding(const CAttributeManager *const this)
{
  return CAttributeManager::s_pSchemaBinding;
}


// CAttributeManager::NetworkStateChanged  (line 54, @0x0000000002e4ec10, libserver.so)
void __fastcall CAttributeManager::NetworkStateChanged(CAttributeManager *const this)
{
  ;
}


// CAttributeManager::NetworkStateChanged  (line 54, @0x0000000002e4ec20, libserver.so)
void __fastcall CAttributeManager::NetworkStateChanged(
        CAttributeManager *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CAttributeManager::NetworkStateChangedLog  (line 54, @0x0000000002e4ec30, libserver.so)
void __fastcall CAttributeManager::NetworkStateChangedLog(
        const CAttributeManager *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CAttributeManager::~CAttributeManager  (line 57, @0x0000000002e53fb0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CAttributeManager::cached_attribute_float_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
// callers: CSchemaClassBinding<CAttributeContainer>::ConstructInPlace, CSchemaClassBinding<CAttributeContainer>::Allocate, CEconEntity::CEconEntity, CSchemaClassBinding<CAttributeContainer>::AllocateAndCopyConstruct
void __fastcall CAttributeManager::~CAttributeManager(CAttributeManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<CAttributeManager::cached_attribute_float_t,CUtlMemory<CAttributeManager::cached_attribute_float_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CAttributeManager = off_479F4D0;  // vptr: CAttributeManager
  this->m_CachedResults.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_CachedResults.m_Memory,
        CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_CachedResults.m_Memory),
        (this->m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Receivers.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(p_m_Memory);
    v2 = (this->m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Receivers.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Receivers.m_Memory);
  if ( (this->m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Receivers.m_Memory);
    v2 = (this->m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Providers.m_Size = 0;
    if ( !v2 )
      return;
    goto LABEL_9;
  }
LABEL_3:
  v2 = (this->m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Providers.m_Size = 0;
  if ( !v2 )
    return;
LABEL_9:
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Providers.m_Memory);
  if ( (this->m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Providers.m_Memory);
}


// CAttributeManager::~CAttributeManager  (line 57, @0x0000000002e54080, libserver.so)  // inlines: Purge, RemoveAll, ~CAttributeManager, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<CAttributeManager::cached_attribute_float_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CAttributeManager::~CAttributeManager(CAttributeManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<CAttributeManager::cached_attribute_float_t,CUtlMemory<CAttributeManager::cached_attribute_float_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CAttributeManager = off_479F4D0;  // vptr: CAttributeManager
  this->m_CachedResults.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_CachedResults.m_Memory,
        CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_CachedResults.m_Memory),
        (this->m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Receivers.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(p_m_Memory);
    v2 = (this->m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Receivers.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Receivers.m_Memory);
  if ( (this->m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
LABEL_3:
    v2 = (this->m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Providers.m_Size = 0;
    if ( v2 )
      goto LABEL_9;
LABEL_4:
    operator delete(this);
    return;
  }
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Receivers.m_Memory);
  v2 = (this->m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Providers.m_Size = 0;
  if ( !v2 )
    goto LABEL_4;
LABEL_9:
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Providers.m_Memory);
  if ( (this->m_Providers.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    goto LABEL_4;
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Providers.m_Memory);
  operator delete(this);
}


// CAttributeManager::OnAttributeValuesChanged  (line 130, @0x0000000002e56e50, libserver.so)  // inlines: ClearCache
// calls: CAttributeManager::ClearCache
void __fastcall CAttributeManager::OnAttributeValuesChanged(CAttributeManager *const this)
{
  if ( !this->m_bPreventLoopback )
    CAttributeManager::ClearCache(this);
}


// CAttributeContainer::~CAttributeContainer  (line 161, @0x0000000002e54160, libserver.so)  // inlines: Purge, RemoveAll, ~CAttributeManager, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NetworkVar_m_Item
// calls: CEconItemView::~CEconItemView, CUtlMemory<CAttributeManager::cached_attribute_float_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CAttributeContainer::~CAttributeContainer(CAttributeContainer *const this)
{
  bool v2; // zf

  this->_vptr_CAttributeManager = &off_479F550;
  this->m_Item._vptr_IEconItemInterface = &off_479F2B0;
  CEconItemView::~CEconItemView(&this->m_Item);
  v2 = (this->m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CAttributeManager = off_479F4D0;  // vptr: CAttributeManager
  this->m_CachedResults.m_Size = 0;
  if ( !v2
    || (CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_CachedResults.m_Memory),
        (this->m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Receivers.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_CachedResults.m_Memory);
    v2 = (this->m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Receivers.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Receivers.m_Memory);
  if ( (this->m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Receivers.m_Memory);
    v2 = (this->m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Providers.m_Size = 0;
    if ( !v2 )
      return;
    goto LABEL_9;
  }
LABEL_3:
  v2 = (this->m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Providers.m_Size = 0;
  if ( !v2 )
    return;
LABEL_9:
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Providers.m_Memory);
  if ( (this->m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Providers.m_Memory);
}


// CAttributeContainer::~CAttributeContainer  (line 161, @0x0000000002e54c20, libserver.so)  // inlines: Purge, RemoveAll, ~CAttributeContainer, ~CAttributeManager, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NetworkVar_m_Item
// calls: CEconItemView::~CEconItemView, operator delete, CUtlMemory<CAttributeManager::cached_attribute_float_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CAttributeContainer::~CAttributeContainer(CAttributeContainer *const this)
{
  bool v2; // zf

  this->_vptr_CAttributeManager = &off_479F550;
  this->m_Item._vptr_IEconItemInterface = &off_479F2B0;
  CEconItemView::~CEconItemView(&this->m_Item);
  v2 = (this->m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CAttributeManager = off_479F4D0;  // vptr: CAttributeManager
  this->m_CachedResults.m_Size = 0;
  if ( !v2
    || (CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_CachedResults.m_Memory),
        (this->m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Receivers.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_CachedResults.m_Memory);
    v2 = (this->m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Receivers.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Receivers.m_Memory);
  if ( (this->m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
LABEL_3:
    v2 = (this->m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Providers.m_Size = 0;
    if ( v2 )
      goto LABEL_9;
LABEL_4:
    operator delete(this);
    return;
  }
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Receivers.m_Memory);
  v2 = (this->m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Providers.m_Size = 0;
  if ( !v2 )
    goto LABEL_4;
LABEL_9:
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Providers.m_Memory);
  if ( (this->m_Providers.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    goto LABEL_4;
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Providers.m_Memory);
  operator delete(this);
}


// CAttributeContainer::Schema_DynamicBinding  (line 169, @0x0000000002e4ec40, libserver.so)
// globals: CAttributeContainer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CAttributeContainer::Schema_DynamicBinding(
        const CAttributeContainer *const this)
{
  return CAttributeContainer::s_pSchemaBinding;
}


// CAttributeContainer::NetworkStateChanged  (line 172, @0x0000000002e4ec50, libserver.so)
void __fastcall CAttributeContainer::NetworkStateChanged(CAttributeContainer *const this)
{
  ;
}


// CAttributeContainer::NetworkStateChanged  (line 172, @0x0000000002e4ec60, libserver.so)
void __fastcall CAttributeContainer::NetworkStateChanged(
        CAttributeContainer *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CAttributeContainer::NetworkStateChangedLog  (line 172, @0x0000000002e4ec70, libserver.so)
void __fastcall CAttributeContainer::NetworkStateChangedLog(
        const CAttributeContainer *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CAttributeContainer::OnAttributeValuesChanged  (line 191, @0x0000000002e56e70, libserver.so)  // inlines: ClearCache, OnAttributeValuesChanged
// calls: CAttributeManager::ClearCache, CEconItemView::MarkDescriptionDirty, CEconItemView::CacheAssetModifiers
void __fastcall CAttributeContainer::OnAttributeValuesChanged(CAttributeContainer *const this)
{
  if ( !this->m_bPreventLoopback )
    CAttributeManager::ClearCache(this);
  (*(this->m_Item._vptr_IEconItemInterface + 30))(&this->m_Item);
  CEconItemView::MarkDescriptionDirty(&this->m_Item);
  CEconItemView::CacheAssetModifiers(&this->m_Item);
}


// CAttributeContainer::NetworkVar_m_Item::NetworkStateChanged  (line 199, @0x0000000002e4ec80, libserver.so)  // inlines: DispatchNetworkStateChanged<CAttributeContainer>
void __fastcall CAttributeContainer::NetworkVar_m_Item::NetworkStateChanged(
        CAttributeContainer::NetworkVar_m_Item *const this)
{
  (*(*(this - 13) + 16LL))(this - 104);
}


// CAttributeContainer::NetworkVar_m_Item::NetworkStateChangedLog  (line 199, @0x0000000002e4eca0, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CAttributeContainer>
void __fastcall CAttributeContainer::NetworkVar_m_Item::NetworkStateChangedLog(
        const CAttributeContainer::NetworkVar_m_Item *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 13) + 32LL))(this - 104, pVarName, pMsg);
}


// CAttributeContainer::NetworkVar_m_Item::NetworkStateChanged  (line 199, @0x0000000002e4ecc0, libserver.so)  // inlines: DispatchNetworkStateChanged<CAttributeContainer>
void __fastcall CAttributeContainer::NetworkVar_m_Item::NetworkStateChanged(
        CAttributeContainer::NetworkVar_m_Item *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 13) + 24LL))(this - 104, nLocalOffset + 104, nArrayIndex, nPathIndex.m_Value);
}


// CAttributeContainer::NetworkVar_m_Item::~NetworkVar_m_Item  (line 199, @0x0000000002e51610, libserver.so)
// calls: CEconItemView::~CEconItemView
void __fastcall CAttributeContainer::NetworkVar_m_Item::~NetworkVar_m_Item(
        CAttributeContainer::NetworkVar_m_Item *const this)
{
  this->_vptr_IEconItemInterface = &off_479F2B0;
  CEconItemView::~CEconItemView(this);
}


// CAttributeContainer::NetworkVar_m_Item::~NetworkVar_m_Item  (line 199, @0x0000000002e51630, libserver.so)  // inlines: ~NetworkVar_m_Item
// calls: CEconItemView::~CEconItemView, operator delete
void __fastcall CAttributeContainer::NetworkVar_m_Item::~NetworkVar_m_Item(
        CAttributeContainer::NetworkVar_m_Item *const this)
{
  this->_vptr_IEconItemInterface = &off_479F2B0;
  CEconItemView::~CEconItemView(this);
  operator delete(this);
}


