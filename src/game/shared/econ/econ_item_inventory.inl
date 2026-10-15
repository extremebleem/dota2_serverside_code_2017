
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IInventoryUpdateListener::SOCreated  (line 43, @0x000000000269cf60, libserver.so)
void __fastcall IInventoryUpdateListener::SOCreated(
        IInventoryUpdateListener *const this,
        GCSDK::SOID_t owner,
        const GCSDK::CSharedObject *pObject,
        GCSDK::ESOCacheEvent eEvent)
{
  (*(this->_vptr_ISharedObjectListener + 5))(this, 0, *&owner.m_type, pObject, eEvent);
}


// IInventoryUpdateListener::SOUpdated  (line 44, @0x000000000269cf70, libserver.so)
void __fastcall IInventoryUpdateListener::SOUpdated(
        IInventoryUpdateListener *const this,
        GCSDK::SOID_t owner,
        const GCSDK::CSharedObject *pObject,
        GCSDK::ESOCacheEvent eEvent)
{
  (*(this->_vptr_ISharedObjectListener + 5))(this, 0, *&owner.m_type, pObject, eEvent);
}


// IInventoryUpdateListener::SODestroyed  (line 45, @0x000000000269cf80, libserver.so)
void __fastcall IInventoryUpdateListener::SODestroyed(
        IInventoryUpdateListener *const this,
        GCSDK::SOID_t owner,
        const GCSDK::CSharedObject *pObject,
        GCSDK::ESOCacheEvent eEvent)
{
  (*(this->_vptr_ISharedObjectListener + 5))(this, 0, *&owner.m_type, pObject, eEvent);
}


// IInventoryUpdateListener::SOCacheSubscribed  (line 46, @0x000000000269cf90, libserver.so)
void __fastcall IInventoryUpdateListener::SOCacheSubscribed(
        IInventoryUpdateListener *const this,
        GCSDK::SOID_t owner,
        GCSDK::ESOCacheEvent eEvent)
{
  (*(this->_vptr_ISharedObjectListener + 5))(this, 0, *&owner.m_type, eEvent);
}


// IInventoryUpdateListener::SOCacheUnsubscribed  (line 47, @0x000000000269cfa0, libserver.so)
void __fastcall IInventoryUpdateListener::SOCacheUnsubscribed(
        IInventoryUpdateListener *const this,
        GCSDK::SOID_t owner,
        GCSDK::ESOCacheEvent eEvent)
{
  (*(this->_vptr_ISharedObjectListener + 5))(this, 0, *&owner.m_type, eEvent);
}


// CPlayerInventory::CanPurchaseItems  (line 85, @0x0000000002e4ee30, libserver.so)
bool __fastcall CPlayerInventory::CanPurchaseItems(const CPlayerInventory *const this, int iItemCount)
{
  return ((*(this->_vptr_ISharedObjectListener + 8))(this) - this->m_aInventoryItems.m_Size) >= iItemCount;
}


// CPlayerInventory::GetMaxItemCount  (line 86, @0x0000000002ea1c40, libserver.so)
int __fastcall CPlayerInventory::GetMaxItemCount(const CPlayerInventory *const this)
{
  return 10000;
}


// CPlayerInventory::GetItemInLoadout  (line 89, @0x0000000002ea1c50, libserver.so)
CEconItemView *__fastcall CPlayerInventory::GetItemInLoadout(CPlayerInventory *const this, int iClass, int iSlot)
{
  return 0;
}


// CPlayerInventory::ItemShouldBeIncluded  (line 111, @0x0000000002e4ee60, libserver.so)
bool __fastcall CPlayerInventory::ItemShouldBeIncluded(CPlayerInventory *const this, int iItemPosition)
{
  return 1;
}


// CPlayerInventory::GetPreviewItemDef  (line 121, @0x0000000002e4ee70, libserver.so)
int __fastcall CPlayerInventory::GetPreviewItemDef(const CPlayerInventory *const this)
{
  return 0;
}


// CPlayerInventory::NotifyHasNewItems  (line 126, @0x0000000002e4ee80, libserver.so)
void __fastcall CPlayerInventory::NotifyHasNewItems(CPlayerInventory *const this)
{
  ;
}


// CPlayerInventory::OnHasNewItems  (line 148, @0x0000000002ea1c60, libserver.so)
void __fastcall CPlayerInventory::OnHasNewItems(CPlayerInventory *const this, int nCount, itemid_t *pNewItems)
{
  ;
}


// CPlayerInventory::OnItemChangedPosition  (line 149, @0x0000000002e4ee90, libserver.so)
void __fastcall CPlayerInventory::OnItemChangedPosition(
        CPlayerInventory *const this,
        CEconItemView *pItem,
        uint32 iOldPos)
{
  ;
}


// CPlayerInventory::ItemIsBeingRemoved  (line 162, @0x0000000002ea1c70, libserver.so)
void __fastcall CPlayerInventory::ItemIsBeingRemoved(CPlayerInventory *const this, CEconItemView *pItem)
{
  ;
}


// CInventoryManager::~CInventoryManager  (line 198, @0x0000000002ea4490, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, CUtlMemory<CInventoryManager::inventories_t, int>::Purge
void __fastcall CInventoryManager::~CInventoryManager(CInventoryManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<CInventoryManager::inventories_t,CUtlMemory<CInventoryManager::inventories_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_inventories.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_47A6E10;
  this->m_inventories.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_inventories.m_Memory;
    CUtlMemory<CInventoryManager::inventories_t,int>::Purge(&this->m_inventories.m_Memory);
    if ( (this->m_inventories.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CInventoryManager::inventories_t,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CInventoryManager::~CInventoryManager  (line 198, @0x0000000002ea44f0, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CInventoryManager, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, operator delete, CUtlMemory<CInventoryManager::inventories_t, int>::Purge
void __fastcall CInventoryManager::~CInventoryManager(CInventoryManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<CInventoryManager::inventories_t,CUtlMemory<CInventoryManager::inventories_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_inventories.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_47A6E10;
  this->m_inventories.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_inventories.m_Memory;
    CUtlMemory<CInventoryManager::inventories_t,int>::Purge(&this->m_inventories.m_Memory);
    if ( (this->m_inventories.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CInventoryManager::inventories_t,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CInventoryManager::GetBackpackPositionFromBackend  (line 330, @0x0000000002e4eea0, libserver.so)  // inlines: ExtractBackpackPositionFromBackend, IsUnacknowledged
int __fastcall CInventoryManager::GetBackpackPositionFromBackend(
        CInventoryManager *const this,
        uint32 iBackendPosition)
{
  int result; // eax

  result = 0;
  if ( iBackendPosition != 0 && (iBackendPosition & 0x40000000) == 0 )
    return iBackendPosition;
  return result;
}


// CInventoryManager::GeneratePlayerInventoryObject  (line 333, @0x0000000002ea8260, libserver.so)
// calls: operator new, CPlayerInventory::CPlayerInventory, operator delete, _Unwind_Resume
CPlayerInventory *__fastcall CInventoryManager::GeneratePlayerInventoryObject(const CInventoryManager *const this)
{
  CPlayerInventory *v1; // rbx

  v1 = operator new(0x50u);
  CPlayerInventory::CPlayerInventory(v1);
  return v1;
}


