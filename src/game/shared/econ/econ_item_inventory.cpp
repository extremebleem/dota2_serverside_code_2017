
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CInventoryListLess::Less  (line 87, @0x0000000002e6c800, libserver.so)  // inlines: operator<
bool __fastcall CInventoryListLess::Less(
        CInventoryListLess *const this,
        const CEconItemView *src1,
        const CEconItemView *src2,
        void *pCtx)
{
  unsigned __int64 v5; // r12

  v5 = (*(src2->_vptr_IEconItemInterface + 14))(src2);
  return (*(src1->_vptr_IEconItemInterface + 14))(src1) < v5;
}


// CInventoryManager::CInventoryManager  (line 95, @0x0000000002e6c830, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CDOTAInventoryManager::CDOTAInventoryManager
void __fastcall CInventoryManager::CInventoryManager(CInventoryManager *const this)
{
  this->_vptr_IGameSystem = off_47A6E10;  // vptr: CInventoryManager
  this->m_inventories.m_Size = 0;
  this->m_inventories.m_Memory.m_pMemory = 0;
  this->m_inventories.m_Memory.m_nAllocationCount = 0;
  this->m_inventories.m_Memory.m_nGrowSize = 0;
}


// CInventoryManager::RegisterNonLocalPlayerInventory  (line 112, @0x0000000002e74b90, libserver.so)  // inlines: AddToTail, GrowMemory
// calls: CPlayerInventory::SetOwner, CUtlMemory<CInventoryManager::inventories_t, int>::Grow
// callers: ClientActive
CPlayerInventory *__fastcall CInventoryManager::RegisterNonLocalPlayerInventory(
        CInventoryManager *const this,
        const CSteamID *const steamID,
        bool bPopulateInventoryFromSteam)
{
  CPlayerInventory *result; // rax
  __int64 v7; // rax
  __int64 m_Size; // r15
  CPlayerInventory *v9; // r14
  int v10; // eax
  CSteamID::SteamID_t v11; // rax
  GCSDK::SOID_t ownerSOID; // [rsp+0h] [rbp-40h] BYREF

  result = (*(this->_vptr_IGameSystem + 40))(this, LODWORD(steamID->m_steamid.m_unAll64Bits), 1);
  if ( result == 0 )
  {
    v7 = (*(this->_vptr_IGameSystem + 42))(this);
    m_Size = this->m_inventories.m_Size;
    v9 = v7;
    v10 = this->m_inventories.m_Size;
    if ( m_Size == this->m_inventories.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CInventoryManager::inventories_t,int>::Grow(&this->m_inventories.m_Memory, 1);
      v10 = this->m_inventories.m_Size;
    }
    this->m_inventories.m_Size = v10 + 1;
    this->m_inventories.m_Memory.m_pMemory[m_Size].m_pInventory = v9;
    v11.m_comp = steamID->m_steamid;
    ownerSOID.m_type = 1;
    ownerSOID.m_padding = 0;
    ownerSOID.m_id = v11.m_unAll64Bits;
    CPlayerInventory::SetOwner(v9, &ownerSOID, bPopulateInventoryFromSteam);
    return v9;
  }
  return result;
}


// CInventoryManager::UnregisterAllNonLocalInventories  (line 129, @0x0000000002e6c860, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<CInventoryManager::inventories_t, int>::Purge
// callers: CInventoryManager::GameShutdown
void __fastcall CInventoryManager::UnregisterAllNonLocalInventories(CInventoryManager *const this)
{
  int m_Size; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  CPlayerInventory *m_pInventory; // rdi
  bool v6; // zf

  m_Size = this->m_inventories.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 8LL * (m_Size - 1) + 8;
    do
    {
      m_pInventory = this->m_inventories.m_Memory.m_pMemory[v3 / 8].m_pInventory;
      if ( m_pInventory != 0 )
        (*(m_pInventory->_vptr_ISharedObjectListener + 6))(m_pInventory);
      v3 += 8LL;
    }
    while ( v3 != v4 );
  }
  v6 = (this->m_inventories.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_inventories.m_Size = 0;
  if ( v6 )
    CUtlMemory<CInventoryManager::inventories_t,int>::Purge(&this->m_inventories.m_Memory);
}


// CInventoryManager::GameServerSteamAPIActivated  (line 143, @0x0000000002e6c8e0, libserver.so)
void __fastcall CInventoryManager::GameServerSteamAPIActivated(CInventoryManager *const this)
{
  ;
}


// CInventoryManager::GetInventoryForAccount  (line 153, @0x0000000002e6b9c0, libserver.so)
CPlayerInventory *__fastcall CInventoryManager::GetInventoryForAccount(
        CInventoryManager *const this,
        uint32 iAccountID,
        bool bPreferLocalInventory)
{
  int m_Size; // r8d
  __int64 v4; // rdx
  CPlayerInventory *result; // rax
  GCSDK::SOID_t::ID_t m_id; // rcx

  m_Size = this->m_inventories.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    result = this->m_inventories.m_Memory.m_pMemory[v4].m_pInventory;
    m_id = result->m_OwnerID.m_id;
    if ( result->m_OwnerID.m_type != 1 )
      LODWORD(m_id) = 0;
    if ( iAccountID == m_id )
      break;
    if ( m_Size <= ++v4 )
      return 0;
  }
  return result;
}


// CInventoryManager::Init  (line 198, @0x0000000002e697f0, libserver.so)
// calls: GCSDK::CSharedObject::RegisterFactory
// strings: "Update(CEconItem)", "Create(CEconItem)", "BuildCacheSubscribed(CEconItem)", "CEconItem", "Update(CEconItemDropRateBonus)", "Create(CEconItemDropRateBonus)" (20 total)
// globals: GCSDK::CreateSharedObjectSubclass<CEconItem>(void), GCSDK::CreateSharedObjectSubclass<CEconItemDropRateBonus>(void), GCSDK::CreateSharedObjectSubclass<CEconItemLeagueViewPass>(void), GCSDK::CreateSharedObjectSubclass<CEconItemEventTicket>(void), GCSDK::CreateSharedObjectSubclass<CEconItemTournamentPassport>(void)
bool __fastcall CInventoryManager::Init(CInventoryManager *const this)
{
  GCSDK::CSharedObject::RegisterFactory(
    1,
    GCSDK::CreateSharedObjectSubclass<CEconItem>,
    0,
    "CEconItem",
    "BuildCacheSubscribed(CEconItem)",
    "Create(CEconItem)",
    "Update(CEconItem)");
  GCSDK::CSharedObject::RegisterFactory(
    38,
    GCSDK::CreateSharedObjectSubclass<CEconItemDropRateBonus>,
    0,
    "CEconItemDropRateBonus",
    "BuildCacheSubscribed(CEconItemDropRateBonus)",
    "Create(CEconItemDropRateBonus)",
    "Update(CEconItemDropRateBonus)");
  GCSDK::CSharedObject::RegisterFactory(
    39,
    GCSDK::CreateSharedObjectSubclass<CEconItemLeagueViewPass>,
    0,
    "CEconItemLeagueViewPass",
    "BuildCacheSubscribed(CEconItemLeagueViewPass)",
    "Create(CEconItemLeagueViewPass)",
    "Update(CEconItemLeagueViewPass)");
  GCSDK::CSharedObject::RegisterFactory(
    40,
    GCSDK::CreateSharedObjectSubclass<CEconItemEventTicket>,
    0,
    "CEconItemEventTicket",
    "BuildCacheSubscribed(CEconItemEventTicket)",
    "Create(CEconItemEventTicket)",
    "Update(CEconItemEventTicket)");
  GCSDK::CSharedObject::RegisterFactory(
    42,
    GCSDK::CreateSharedObjectSubclass<CEconItemTournamentPassport>,
    0,
    "CEconItemTournamentPassport",
    "BuildCacheSubscribed(CEconItemTournamentPassport)",
    "Create(CEconItemTournamentPassport)",
    "Update(CEconItemTournamentPassport)");
  return 1;
}


// CInventoryManager::PostInit  (line 227, @0x0000000002e8c6f0, libserver.so)
// calls: ItemSystem, CEconItemSystem::Init
// callers: CDOTAInventoryManager::PostInit
void __fastcall CInventoryManager::PostInit(CInventoryManager *const this)
{
  CEconItemSystem *v1; // rax

  v1 = ItemSystem();
  CEconItemSystem::Init(v1);
}


// CInventoryManager::PreInitGC  (line 238, @0x0000000002e6c8f0, libserver.so)
// callers: CDOTAInventoryManager::GameInit
void __fastcall CInventoryManager::PreInitGC(CInventoryManager *const this)
{
  ;
}


// CInventoryManager::PostInitGC  (line 246, @0x0000000002e6c900, libserver.so)
void __fastcall CInventoryManager::PostInitGC(CInventoryManager *const this)
{
  ;
}


// CInventoryManager::GameInit  (line 258, @0x0000000002e8c710, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FStrEq, GetDefinitionName, GetItemDefinition, GetWithNull, IsAddOnGame, IsValidIndex, Purge, SetHasBeenLoaded, String, _V_strcmp, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: AppIsDedicatedServer, ItemSystem, CEconItemSystem::ResetAttribStringCache, CEconItemSystem::ReloadWhitelist, DOTAGameManager, LoggingSystem_IsChannelEnabled, CEconItemSchema::GetItemDefinitionMutable, LoggingSystem_Log, CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::RemoveAll, CUtlMemory<item_definition_index_t, int>::Purge, CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTAInventoryManager::GameInit
// strings: "hero_demo", "workshop_testbed", "(null)", "  %d:  %u == '%s'\n", "CInventoryManager::GameInit:  preserving %d test items\n"
void __fastcall CInventoryManager::GameInit(CInventoryManager *const this, const EventGameInit_t *const msg)
{
  CEconItemSystem *v2; // rax
  CEconItemSystem *v3; // rax
  __int64 v4; // rcx
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t i; // edx
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v6; // rsi
  CEconItemSystem *v7; // rax
  CEconItemSystem *v8; // rax
  CDOTAGameManager *v9; // rax
  char *m_szAddOnGame; // rax
  CEconItemSystem *v11; // rax
  __int64 v12; // rbx
  int v13; // r12d
  item_definition_index_t *v14; // r13
  CEconItemSystem *v15; // rax
  CEconItemDefinition *ItemDefinitionMutable; // r13
  const char *m_pAsString; // r9
  CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> > testitems; // [rsp+0h] [rbp-50h] BYREF

  if ( !AppIsDedicatedServer()
    && DOTAGameManager() != 0
    && ((v9 = DOTAGameManager())->m_bCustomGame || v9->m_bEventGame)
    && ((m_szAddOnGame = DOTAGameManager()->m_szAddOnGame) == "hero_demo"
     || strcmp(m_szAddOnGame, "hero_demo") == 0
     || m_szAddOnGame == "workshop_testbed"
     || strcmp(m_szAddOnGame, "workshop_testbed") == 0) )
  {
    testitems.m_Size = 0;
    testitems.m_Memory.m_pMemory = 0;
    testitems.m_Memory.m_nAllocationCount = 0;
    testitems.m_Memory.m_nGrowSize = 0;
    v11 = ItemSystem();
    (*(v11->m_itemSchema._vptr_IEconItemSchema + 51))(&v11->m_itemSchema, &testitems);
    if ( testitems.m_Size > 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
        LoggingSystem_Log(LOG_SERVER, 1, "CInventoryManager::GameInit:  preserving %d test items\n", testitems.m_Size);
      if ( testitems.m_Size > 0 )
      {
        v12 = 0;
        v13 = 0;
        do
        {
          v14 = &testitems.m_Memory.m_pMemory[v12];
          v15 = ItemSystem();
          ItemDefinitionMutable = CEconItemSchema::GetItemDefinitionMutable(&v15->m_itemSchema, v14->m_Data, 0);
          if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
          {
            m_pAsString = "(null)";
            if ( ItemDefinitionMutable != 0 )
              m_pAsString = ItemDefinitionMutable->m_symDefinitionName.u.m_pAsString;
            LoggingSystem_Log(
              LOG_SERVER,
              1,
              "  %d:  %u == '%s'\n",
              v13,
              testitems.m_Memory.m_pMemory[v12].m_Data,
              m_pAsString);
          }
          ++v13;
          ++v12;
        }
        while ( testitems.m_Size > v13 );
      }
    }
    CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int>>::RemoveAll(&testitems);
    if ( (testitems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<item_definition_index_t,int>::Purge(&testitems.m_Memory);
      if ( (testitems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<item_definition_index_t,int>::Purge(&testitems.m_Memory);
    }
  }
  else
  {
    v2 = ItemSystem();
    (*(v2->m_itemSchema._vptr_IEconItemSchema + 45))(&v2->m_itemSchema);
  }
  v3 = ItemSystem();
  v4 = 0;
  for ( i = 0; v3->m_itemSchema.m_mapItems.m_nMaxElement > i; ++v4 )
  {
    v6 = &v3->m_itemSchema.m_mapItems.m_memNodes.m_pMemory[v4];
    if ( v6->m_iNextNode >= -1 )
      *(v6->m_elem + 274) |= 4u;
    ++i;
  }
  v7 = ItemSystem();
  CEconItemSystem::ResetAttribStringCache(v7);
  v8 = ItemSystem();
  CEconItemSystem::ReloadWhitelist(v8);
}


// CInventoryManager::GameShutdown  (line 317, @0x0000000002e8c970, libserver.so)
// calls: ItemSystem, CEconItemSystem::ResetAttribStringCache, CInventoryManager::UnregisterAllNonLocalInventories
void __fastcall CInventoryManager::GameShutdown(CInventoryManager *const this, const EventGameShutdown_t *const msg)
{
  CEconItemSystem *v3; // rax

  v3 = ItemSystem();
  CEconItemSystem::ResetAttribStringCache(v3);
  CInventoryManager::UnregisterAllNonLocalInventories(this);
}


// CInventoryManager::FindItemInSOCache  (line 342, @0x0000000002e6c910, libserver.so)  // inlines: GetCount, GetObject, operator[]
// calls: GCSDK::CSharedObjectCache::FindBaseTypeCache
// callers: CDOTAInventoryManager::SetUpDemoHeroItems, CInventoryManager::FindItemInSOCache
CEconItem *__fastcall CInventoryManager::FindItemInSOCache(GCSDK::CSharedObjectCache *pSOCache, itemid_t ulItemID)
{
  GCSDK::CSharedObjectTypeCache *BaseTypeCache; // rax
  GCSDK::CSharedObjectTypeCache *v4; // r15
  int m_Size; // r13d
  int v6; // ebx
  CEconItem *v7; // r12

  BaseTypeCache = GCSDK::CSharedObjectCache::FindBaseTypeCache(pSOCache, 1);
  v4 = BaseTypeCache;
  if ( BaseTypeCache == 0 )
    return 0;
  m_Size = BaseTypeCache->m_vecObjects.m_Size;
  if ( m_Size == 0 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = v4->m_vecObjects.m_Memory.m_pMemory[v6];
    if ( (*(v7->_vptr_CSharedObject + 12))(v7) == ulItemID.m_Data )
      break;
    if ( ++v6 == m_Size )
      return 0;
  }
  return v7;
}


// CInventoryManager::FindItemInSOCache  (line 361, @0x0000000002e6c9a0, libserver.so)
// calls: CInventoryManager::FindItemInSOCache
const CEconItem *__fastcall CInventoryManager::FindItemInSOCache(
        const GCSDK::CSharedObjectCache *pSOCache,
        itemid_t ulItemID)
{
  return CInventoryManager::FindItemInSOCache(pSOCache, ulItemID);
}


// CPlayerInventory::CPlayerInventory  (line 1101, @0x0000000002e72390, libserver.so)  // inlines: CUtlMemory, CUtlSortVector, CUtlVector, CUtlVectorBase, Purge, PurgeAndDeleteElements, RemoveAll, SOID_t, ~CUtlSortVector, ~CUtlVector
// calls: CUtlMemory<CEconItemView*, int>::Purge, CUtlVectorBase<CEconItemView*, CUtlMemory<CEconItemView*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTAPlayerInventory::CDOTAPlayerInventory, CInventoryManager::GeneratePlayerInventoryObject
void __fastcall CPlayerInventory::CPlayerInventory(CPlayerInventory *const this)
{
  CUtlVectorBase<CEconItemView*,CUtlMemory<CEconItemView*,int> >::CAllocator *p_m_Memory; // rdi

  this->_vptr_ISharedObjectListener = off_47A6F90;  // vptr: CPlayerInventory
  p_m_Memory = &this->m_aInventoryItems.m_Memory;
  *&p_m_Memory[-2].m_nAllocationCount = 0;
  LODWORD(p_m_Memory[-1].m_pMemory) = 0;
  HIDWORD(p_m_Memory[-1].m_pMemory) = 0;
  p_m_Memory->m_pMemory = 0;
  p_m_Memory->m_nAllocationCount = 0;
  p_m_Memory->m_nGrowSize = 0;
  p_m_Memory[1].m_pMemory = 0;
  LOBYTE(p_m_Memory[1].m_nAllocationCount) = 0;
  BYTE2(p_m_Memory[2].m_pMemory) = 0;
  LOBYTE(p_m_Memory[2].m_pMemory) = 0;
  p_m_Memory[-1].m_nAllocationCount = 0;
  CUtlMemory<CEconItemView *,int>::Purge(p_m_Memory);
  this->m_pSOCache = 0;
  this->m_bHasTestItems = 0;
}


// CPlayerInventory::~CPlayerInventory  (line 1113, @0x0000000002e6bf20, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlSortVector, ~CUtlVector, ~CUtlVectorBase
// calls: CPlayerInventory::SOClear, CUtlMemory<CEconItemView*, int>::Purge
// callers: CDOTAPlayerInventory::~CDOTAPlayerInventory
void __fastcall CPlayerInventory::~CPlayerInventory(CPlayerInventory *const this)
{
  bool v2; // zf

  this->_vptr_ISharedObjectListener = off_47A6F90;  // vptr: CPlayerInventory
  CPlayerInventory::SOClear(this);
  v2 = (this->m_aInventoryItems.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_aInventoryItems.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CEconItemView *,int>::Purge(&this->m_aInventoryItems.m_Memory);
    if ( (this->m_aInventoryItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconItemView *,int>::Purge(&this->m_aInventoryItems.m_Memory);
  }
}


// CPlayerInventory::~CPlayerInventory  (line 1113, @0x0000000002e6bf80, libserver.so)  // inlines: Purge, RemoveAll, ~CPlayerInventory, ~CUtlMemory, ~CUtlSortVector, ~CUtlVector, ~CUtlVectorBase
// calls: CPlayerInventory::SOClear, operator delete, CUtlMemory<CEconItemView*, int>::Purge
void __fastcall CPlayerInventory::~CPlayerInventory(CPlayerInventory *const this)
{
  bool v2; // zf

  this->_vptr_ISharedObjectListener = off_47A6F90;  // vptr: CPlayerInventory
  CPlayerInventory::SOClear(this);
  v2 = (this->m_aInventoryItems.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_aInventoryItems.m_Size = 0;
  if ( !v2
    || (CUtlMemory<CEconItemView *,int>::Purge(&this->m_aInventoryItems.m_Memory),
        (this->m_aInventoryItems.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<CEconItemView *,int>::Purge(&this->m_aInventoryItems.m_Memory);
    operator delete(this);
  }
}


// CPlayerInventory::SOClear  (line 1121, @0x0000000002e69900, libserver.so)  // inlines: GCClientSystem
// calls: GCSDK::CGCClient::RemoveSOCacheListener
// callers: CPlayerInventory::~CPlayerInventory
// globals: s_pCGCGameSpecificClientSystem
void __fastcall CPlayerInventory::SOClear(CPlayerInventory *const this)
{
  if ( s_pCGCGameSpecificClientSystem != 0 && this->m_bIsListeningToSOCache )
    GCSDK::CGCClient::RemoveSOCacheListener((s_pCGCGameSpecificClientSystem + 24), this);
  this->m_bIsListeningToSOCache = 0;
  this->m_pSOCache = 0;
}


// CPlayerInventory::SetOwner  (line 1136, @0x0000000002e6c9f0, libserver.so)  // inlines: operator!=
// calls: CPlayerInventory::RequestInventory
// callers: CInventoryManager::RegisterNonLocalPlayerInventory
void __fastcall CPlayerInventory::SetOwner(
        CPlayerInventory *const this,
        GCSDK::SOID_t *const ownerID,
        bool bPopulateInventoryFromSteam)
{
  GCSDK::SOID_t::ID_t m_id; // rdx
  __int64 v7; // rdx

  m_id = this->m_OwnerID.m_id;
  if ( this->m_OwnerID.m_type != ownerID->m_type || m_id != ownerID->m_id )
  {
    (*(this->_vptr_ISharedObjectListener + 13))(this, ownerID, m_id);
    v7 = *&ownerID->m_type;
    this->m_OwnerID.m_id = ownerID->m_id;
    *&this->m_OwnerID.m_type = v7;
    if ( bPopulateInventoryFromSteam )
      CPlayerInventory::RequestInventory(this);
  }
}


// CPlayerInventory::RequestInventory  (line 1158, @0x0000000002e6c9b0, libserver.so)  // inlines: GCClientSystem
// calls: GCSDK::CGCClient::AddSOCacheListener
// callers: CPlayerInventory::SetOwner
// globals: s_pCGCGameSpecificClientSystem
void __fastcall CPlayerInventory::RequestInventory(CPlayerInventory *const this)
{
  CGCClientSystem *v1; // rax

  if ( this->m_OwnerID.m_type != 0 )
  {
    v1 = s_pCGCGameSpecificClientSystem;
    if ( s_pCGCGameSpecificClientSystem != 0 && !this->m_bIsListeningToSOCache )
    {
      this->m_bIsListeningToSOCache = 1;
      GCSDK::CGCClient::AddSOCacheListener((v1 + 24), this);
    }
  }
}


// CPlayerInventory::RemoveTestItems  (line 1170, @0x0000000002e6ca70, libserver.so)  // inlines: IsTestItemID
void __fastcall CPlayerInventory::RemoveTestItems(CPlayerInventory *const this)
{
  int v2; // eax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r12
  void (__fastcall *v5)(CPlayerInventory *const, __int64); // r14
  __int64 v6; // rax

  v2 = this->m_aInventoryItems.m_Size - 1;
  if ( v2 >= 0 )
  {
    v3 = 8LL * v2;
    v4 = 8 * (v2 - v2) - 8;
    do
    {
      if ( ((*(this->m_aInventoryItems.m_Memory.m_pMemory[v3 / 8]->_vptr_IEconItemInterface + 14))(this->m_aInventoryItems.m_Memory.m_pMemory[v3 / 8])
          + 65537) <= 0xFFFF )
      {
        v5 = *(this->_vptr_ISharedObjectListener + 15);
        v6 = (*(this->m_aInventoryItems.m_Memory.m_pMemory[v3 / 8]->_vptr_IEconItemInterface + 14))(this->m_aInventoryItems.m_Memory.m_pMemory[v3 / 8]);
        v5(this, v6);
      }
      v3 -= 8LL;
    }
    while ( v3 != v4 );
  }
}


// CPlayerInventory::FindFirstItemByDefIndex  (line 1181, @0x0000000002e6caf0, libserver.so)
// callers: CPlayerInventory::RemoveTestItemByItemDefIndex, CPlayerInventory::AddTestItem
int __fastcall CPlayerInventory::FindFirstItemByDefIndex(
        CPlayerInventory *const this,
        item_definition_index_t unDefIndex)
{
  __int64 v4; // rbx
  CEconItemView *v5; // rdi
  unsigned __int16 (__fastcall ***v6)(_QWORD); // rax

  v4 = 0;
  if ( this->m_aInventoryItems.m_Size <= 0 )
    return -1;
  while ( 1 )
  {
    v5 = this->m_aInventoryItems.m_Memory.m_pMemory[v4];
    v6 = (*(v5->_vptr_IEconItemInterface + 12))(v5);
    if ( (**v6)(v6) == unDefIndex.m_Data )
      break;
    if ( this->m_aInventoryItems.m_Size <= ++v4 )
      return -1;
  }
  return v4;
}


// CPlayerInventory::RemoveTestItemByItemDefIndex  (line 1193, @0x0000000002e728f0, libserver.so)  // inlines: Remove, operator[]
// calls: CPlayerInventory::FindFirstItemByDefIndex, CUtlVectorBase<CEconItemView*, CUtlMemory<CEconItemView*, int> >::Remove, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CEconItemSchema::ItemTesting_DiscardTestItemDefinition
// strings: "CPlayerInventory::RemoveTestItemByItemDefIndex no such item definition index: %u\n"
void __fastcall CPlayerInventory::RemoveTestItemByItemDefIndex(
        CPlayerInventory *const this,
        item_definition_index_t unDefIndex)
{
  int FirstItemByDefIndex; // eax
  int v5; // r12d
  CEconItemView *v6; // r13

  FirstItemByDefIndex = CPlayerInventory::FindFirstItemByDefIndex(this, unDefIndex);
  v5 = FirstItemByDefIndex;
  if ( FirstItemByDefIndex == -1 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
      LoggingSystem_Log(
        LOG_SERVER,
        2,
        "CPlayerInventory::RemoveTestItemByItemDefIndex no such item definition index: %u\n",
        unDefIndex.m_Data);
  }
  else
  {
    v6 = this->m_aInventoryItems.m_Memory.m_pMemory[FirstItemByDefIndex];
    if ( v6 != 0 )
    {
      (*(this->_vptr_ISharedObjectListener + 21))(this, v6);
      CUtlVectorBase<CEconItemView *,CUtlMemory<CEconItemView *,int>>::Remove(&this->m_aInventoryItems, v5);
      (*(v6->_vptr_IEconItemInterface + 2))(v6);
    }
  }
}


// CPlayerInventory::AddTestItem  (line 1219, @0x0000000002e9a8c0, libserver.so)  // inlines: Element, Init, Remove, operator[]
// calls: CPlayerInventory::FindFirstItemByDefIndex, CUtlVectorBase<CEconItemView*, CUtlMemory<CEconItemView*, int> >::Remove, operator new, CEconItemView::CEconItemView, CEconItemView::InitInternal, CEconItemView::CacheAssetModifiers, CUtlSortVector<CEconItemView*, CInventoryListLess, CUtlVector<CEconItemView*, CUtlMemory<CEconItemView*, int> > >::Insert, operator delete, _Unwind_Resume
// callers: CEconItemSchema::ItemTesting_CreateTestItemDefinitionNoClone
// globals: INVALID_STYLE_INDEX
void __fastcall CPlayerInventory::AddTestItem(CPlayerInventory *const this, CEconItemDefinition *pTestItem)
{
  item_definition_index_t v4; // ax
  int FirstItemByDefIndex; // eax
  CEconItemView *v6; // rdi
  CEconItemView *v7; // r13
  int (**vptr_IEconItemDefinition)(...); // rax
  item_definition_index_t v9; // ax
  int slot; // [rsp+Ch] [rbp-34h]
  CEconItemView *pView; // [rsp+18h] [rbp-28h] BYREF

  this->m_bHasTestItems = 1;
  v4.m_Data = pTestItem->GetDefinitionIndex();
  FirstItemByDefIndex = CPlayerInventory::FindFirstItemByDefIndex(this, v4);
  if ( FirstItemByDefIndex != -1 )
  {
    v6 = this->m_aInventoryItems.m_Memory.m_pMemory[FirstItemByDefIndex];
    if ( v6 != 0 )
    {
      slot = FirstItemByDefIndex;
      (*(v6->_vptr_IEconItemInterface + 2))(v6);
      FirstItemByDefIndex = slot;
    }
    CUtlVectorBase<CEconItemView *,CUtlMemory<CEconItemView *,int>>::Remove(
      &this->m_aInventoryItems,
      FirstItemByDefIndex);
  }
  v7 = operator new(0xD8u);
  CEconItemView::CEconItemView(v7);
  vptr_IEconItemDefinition = pTestItem->_vptr_IEconItemDefinition;
  pView = v7;
  v9.m_Data = (*vptr_IEconItemDefinition)(pTestItem);
  CEconItemView::InitInternal(v7, v9, 0, 0, 0, 0, INVALID_STYLE_INDEX);
  CEconItemView::CacheAssetModifiers(v7);
  CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::Insert(
    &this->m_aInventoryItems,
    &pView);
  (*(this->_vptr_ISharedObjectListener + 20))(this, pView, 0, 0);
}


// CPlayerInventory::AddEconItem  (line 1248, @0x0000000002e9af60, libserver.so)  // inlines: operator[]
// calls: operator new, CEconItemView::CEconItemView, CPlayerInventory::FilloutItemFromEconItem, CUtlSortVector<CEconItemView*, CInventoryListLess, CUtlVector<CEconItemView*, CUtlMemory<CEconItemView*, int> > >::Insert, operator delete, _Unwind_Resume
// callers: CPlayerInventory::SOCreated, CPlayerInventory::SOCacheSubscribed, CPlayerInventory::SOUpdated
bool __fastcall CPlayerInventory::AddEconItem(
        CPlayerInventory *const this,
        CEconItem *pItem,
        bool bUpdateAckFile,
        bool bWriteAckFile,
        bool bCheckForNewItems)
{
  CEconItemView *v9; // rbx
  bool v10; // bl
  int v12; // eax
  CEconItemView *pNewItem; // [rsp+8h] [rbp-38h] BYREF

  v9 = operator new(0xD8u);
  CEconItemView::CEconItemView(v9);
  pNewItem = v9;
  v10 = CPlayerInventory::FilloutItemFromEconItem(this, v9, pItem);
  if ( v10 )
  {
    v12 = CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::Insert(
            &this->m_aInventoryItems,
            &pNewItem);
    (*(this->_vptr_ISharedObjectListener + 20))(
      this,
      this->m_aInventoryItems.m_Memory.m_pMemory[v12],
      bUpdateAckFile,
      bWriteAckFile);
  }
  else if ( pNewItem != 0 )
  {
    (*(pNewItem->_vptr_IEconItemInterface + 2))(pNewItem);
  }
  return v10;
}


// CPlayerInventory::GetItemsUsingTool  (line 1289, @0x0000000002e74d10, libserver.so)  // inlines: AddToTail, CopyConstruct<CEconItemView*>, Element, GetTypeName, GrowMemory, String, operator[]
// calls: V_stricmp_fast, CUtlMemory<CEconItemView*, int>::Grow
void __fastcall CPlayerInventory::GetItemsUsingTool(
        CPlayerInventory *const this,
        const char *pToolName,
        CUtlVector<CEconItemView*,CUtlMemory<CEconItemView*,int> > *const items)
{
  __int64 v5; // r12
  int v6; // ebx
  CEconItemView *v7; // r15
  __int64 v8; // rax
  const char *v9; // rdi
  __int64 m_Size; // rax
  int v11; // ecx
  CEconItemView **v12; // rax
  int v13; // [rsp+Ch] [rbp-44h]
  CUtlVectorBase<CEconItemView*,CUtlMemory<CEconItemView*,int> >::CAllocator *i; // [rsp+10h] [rbp-40h]

  v5 = 0;
  v6 = 0;
  for ( i = &items->m_Memory; this->m_aInventoryItems.m_Size > v6; ++v5 )
  {
    v7 = this->m_aInventoryItems.m_Memory.m_pMemory[v5];
    v8 = *((*(v7->_vptr_IEconItemInterface + 12))(v7) + 192);
    if ( v8 != 0 )
    {
      v9 = "";
      if ( *(v8 + 8) != 0 )
        v9 = *(v8 + 8);
      if ( V_stricmp_fast(v9, pToolName) == 0 )
      {
        m_Size = items->m_Size;
        if ( m_Size == items->m_Memory.m_nAllocationCount )
        {
          v13 = items->m_Size;
          CUtlMemory<CEconItemView *,int>::Grow(i, 1);
          v11 = items->m_Size;
          m_Size = v13;
        }
        else
        {
          v11 = items->m_Size;
        }
        items->m_Size = v11 + 1;
        v12 = &items->m_Memory.m_pMemory[m_Size];
        if ( v12 != 0 )
          *v12 = v7;
      }
    }
    ++v6;
  }
}


// CPlayerInventory::GetGemsUsableWithItem  (line 1302, @0x0000000002e74de0, libserver.so)  // inlines: AddToTail, CSocketIterator, CSocketPair, CopyConstruct<CEconItemView*>, EconItemUtils, Element, GemInfo_t, GetItemSocket, GetSocket, GetSocketAttribute, GetSocketAttributeDefinition, GrowMemory, operator[]
// calls: CUtlMemory<CEconItemView*, int>::Grow
// globals: s_pEconItemUtils
void __fastcall CPlayerInventory::GetGemsUsableWithItem(
        CPlayerInventory *const this,
        CEconItemView *pItem,
        attrib_definition_index_t nSocketId,
        GemUsabilityQuery_t queryType,
        CUtlVector<CEconItemView*,CUtlMemory<CEconItemView*,int> > *const gems)
{
  CEconItemView *v5; // r13
  CSocketIterator *m_Sockets; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  const CEconItemAttributeDefinition **p_m_pAttributeDefinition; // rbx
  int v9; // r13d
  int v10; // r14d
  const IItemSocket **v11; // rax
  const IItemSocket *v12; // r15
  __int64 v13; // rax
  bool v14; // cc
  int v15; // r12d
  __int64 v16; // r14
  CEconItemView *v17; // rbx
  __int64 v18; // r13
  __int64 m_Size; // rax
  int v20; // edx
  CEconItemView **v21; // rax
  __int64 v22; // rax
  int v23; // edx
  CUtlVectorBase<CEconItemView*,CUtlMemory<CEconItemView*,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-168h]
  CEconItemView *v25; // [rsp+10h] [rbp-160h]
  int v26; // [rsp+18h] [rbp-158h]
  int v27; // [rsp+18h] [rbp-158h]
  CEconItemView *pItema; // [rsp+30h] [rbp-140h]
  GemInfo_t gemInfo; // [rsp+40h] [rbp-130h] BYREF
  const IItemSocket *ppSockets[5]; // [rsp+50h] [rbp-120h]
  CSocketIterator socketIterator; // [rsp+80h] [rbp-F0h] BYREF

  v5 = pItem;
  if ( pItem != 0 && (*(pItem->_vptr_IEconItemInterface + 25))(pItem) != 0 )
  {
    socketIterator._vptr_IEconItemAttributeIterator = off_47A8B30;
    m_Sockets = socketIterator.m_Sockets;
    do
    {
      m_Sockets->_vptr_IEconItemAttributeIterator = 0;
      m_Sockets = (m_Sockets + 16);
      *&m_Sockets[-1].m_unAttribStorageTypeFlags = 0;
    }
    while ( m_Sockets != &socketIterator.m_nSocketCount );
    vptr_IEconItemInterface = v5->_vptr_IEconItemInterface;
    socketIterator.m_nSocketCount = 0;
    socketIterator.m_nGemCount = 0;
    socketIterator.m_unAttribStorageTypeFlags = 1;
    vptr_IEconItemInterface[28](v5, &socketIterator, &socketIterator.m_nSocketCount);
    if ( socketIterator.m_nSocketCount <= 0 )
    {
      v15 = 0;
    }
    else
    {
      pItema = v5;
      p_m_pAttributeDefinition = &socketIterator.m_Sockets[0].m_pAttributeDefinition;
      v9 = 0;
      v10 = 0;
      do
      {
        while ( 1 )
        {
          v11 = *(p_m_pAttributeDefinition - 1);
          if ( v11 != 0 )
          {
            v12 = *v11;
            if ( *v11 != 0
              && (nSocketId == 0xFFFF
               || nSocketId == (*(*p_m_pAttributeDefinition)->_vptr_IEconItemAttributeDefinition)(*p_m_pAttributeDefinition)) )
            {
              break;
            }
          }
          ++v10;
          p_m_pAttributeDefinition += 2;
          if ( socketIterator.m_nSocketCount <= v10 )
            goto LABEL_13;
        }
        ++v10;
        v13 = v9;
        p_m_pAttributeDefinition += 2;
        ++v9;
        v14 = socketIterator.m_nSocketCount <= v10;
        ppSockets[v13] = v12;
      }
      while ( !v14 );
LABEL_13:
      v15 = v9;
      v5 = pItema;
    }
    v16 = 0;
    p_m_Memory = &gems->m_Memory;
    if ( this->m_aInventoryItems.m_Size > 0 )
    {
      v25 = v5;
      do
      {
        v17 = this->m_aInventoryItems.m_Memory.m_pMemory[v16];
        gemInfo.m_bIsUnremovableGem = 0;
        gemInfo.m_nGemType = ESocketType::SocketType_None;
        gemInfo.m_nRequiredHeroID = -1;
        gemInfo.m_nRequiredItemSlot = -1;
        gemInfo.m_bIsUntradable = 0;
        if ( (*(v17->_vptr_IEconItemInterface + 27))(v17, &gemInfo) != 0
          && (queryType == GemUsabilityQuery_t::ALL_GEM_TYPES
           || (s_pEconItemUtils->IsGemTypeValidForSocketType(gemInfo.m_nGemType, 0) ^ 1) == (queryType == GemUsabilityQuery_t::RARE_GEM_TYPES)) )
        {
          v18 = 0;
          if ( v15 == 0 )
            goto LABEL_28;
          while ( (*(s_pEconItemUtils->_vptr_CEconItemUtils + 2))(s_pEconItemUtils, v25, ppSockets[v18], v17) != 0 )
          {
            if ( v15 <= ++v18 )
              goto LABEL_28;
          }
          m_Size = gems->m_Size;
          v20 = gems->m_Size;
          if ( m_Size == gems->m_Memory.m_nAllocationCount )
          {
            v26 = gems->m_Size;
            CUtlMemory<CEconItemView *,int>::Grow(p_m_Memory, 1);
            v20 = gems->m_Size;
            m_Size = v26;
          }
          gems->m_Size = v20 + 1;
          v21 = &gems->m_Memory.m_pMemory[m_Size];
          if ( v21 == 0 )
          {
LABEL_28:
            if ( v15 != 0
              || nSocketId != 0xFFFF
              || (*(s_pEconItemUtils->_vptr_CEconItemUtils + 1))(s_pEconItemUtils, v25, 0, v17) != 0 )
            {
              goto LABEL_26;
            }
            v22 = gems->m_Size;
            v23 = gems->m_Size;
            if ( v22 == gems->m_Memory.m_nAllocationCount )
            {
              v27 = gems->m_Size;
              CUtlMemory<CEconItemView *,int>::Grow(p_m_Memory, 1);
              v23 = gems->m_Size;
              v22 = v27;
            }
            gems->m_Size = v23 + 1;
            v21 = &gems->m_Memory.m_pMemory[v22];
            if ( v21 == 0 )
              goto LABEL_26;
          }
          *v21 = v17;
        }
LABEL_26:
        ++v16;
      }
      while ( v16 < this->m_aInventoryItems.m_Size );
    }
  }
}


// CPlayerInventory::SOCreated  (line 1375, @0x0000000002e9b020, libserver.so)  // inlines: operator!=
// calls: CPlayerInventory::AddEconItem
void __fastcall CPlayerInventory::SOCreated(
        CPlayerInventory *const this,
        GCSDK::SOID_t owner,
        CEconItem *pObject,
        GCSDK::ESOCacheEvent eEvent)
{
  GCSDK::SOID_t::ID_t m_id; // r14
  GCSDK::SOID_t::Type_t m_type; // r13d
  void (__fastcall *v9)(CPlayerInventory *const, _QWORD, _QWORD, __int64); // r13
  __int64 v10; // rax

  m_id = owner.m_id;
  m_type = owner.m_type;
  if ( (*(pObject->_vptr_CSharedObject + 2))(pObject) == 1
    && this->m_OwnerID.m_type == m_type
    && m_id == this->m_OwnerID.m_id
    && this->m_pSOCache != 0
    && eEvent == GCSDK::ESOCacheEvent::eSOCacheEvent_Incremental )
  {
    CPlayerInventory::AddEconItem(this, pObject, 1, 1, 1);
    v9 = *(this->_vptr_ISharedObjectListener + 16);
    v10 = (*(pObject->_vptr_CSharedObject + 12))(pObject);
    v9(this, 0, pObject->m_unDefIndex.m_Data, v10);
  }
}


// CPlayerInventory::SOUpdated  (line 1406, @0x0000000002e9b210, libserver.so)  // inlines: RedoSort, ResortInventory, operator!=
// calls: CPlayerInventory::GetInventoryItemByItemID, CPlayerInventory::FilloutItemFromEconItem, CUtlSortVector<CEconItemView*, CInventoryListLess, CUtlVector<CEconItemView*, CUtlMemory<CEconItemView*, int> > >::QuickSort, CPlayerInventory::AddEconItem
// callers: CDOTAPlayerInventory::SOUpdated
void __fastcall CPlayerInventory::SOUpdated(
        CPlayerInventory *const this,
        GCSDK::SOID_t owner,
        CEconItem *pObject,
        GCSDK::ESOCacheEvent eEvent)
{
  GCSDK::SOID_t::ID_t m_id; // r14
  GCSDK::SOID_t::Type_t m_type; // r13d
  itemid_t v9; // rax
  CEconItemView *InventoryItemByItemID; // rax
  CEconItemView *v11; // r13
  int v12; // edx
  int v13; // ecx
  void (__fastcall *v14)(CPlayerInventory *const, __int64, _QWORD, __int64); // r13
  __int64 v15; // rax
  CInventoryListLess less; // [rsp+Fh] [rbp-31h] BYREF

  m_id = owner.m_id;
  m_type = owner.m_type;
  if ( (*(pObject->_vptr_CSharedObject + 2))(pObject) == 1
    && this->m_OwnerID.m_type == m_type
    && m_id == this->m_OwnerID.m_id
    && this->m_pSOCache != 0
    && eEvent == GCSDK::ESOCacheEvent::eSOCacheEvent_Incremental )
  {
    v9.m_Data = (*(pObject->_vptr_CSharedObject + 12))(pObject);
    InventoryItemByItemID = CPlayerInventory::GetInventoryItemByItemID(this, v9, 0);
    v11 = InventoryItemByItemID;
    if ( InventoryItemByItemID != 0 )
    {
      if ( CPlayerInventory::FilloutItemFromEconItem(this, InventoryItemByItemID, pObject) )
        (*(this->_vptr_ISharedObjectListener + 20))(this, v11, 0, 0);
      goto LABEL_10;
    }
    if ( CPlayerInventory::AddEconItem(this, pObject, 0, 0, 0) )
    {
LABEL_10:
      this->m_aInventoryItems.m_bNeedsSort = 0;
      CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::QuickSort(
        &this->m_aInventoryItems,
        &less,
        v12,
        v13);
      v14 = *(this->_vptr_ISharedObjectListener + 16);
      v15 = (*(pObject->_vptr_CSharedObject + 12))(pObject);
      v14(this, 2, pObject->m_unDefIndex.m_Data, v15);
    }
  }
}


// CPlayerInventory::SODestroyed  (line 1472, @0x0000000002e69f70, libserver.so)  // inlines: operator!=
// callers: CDOTAPlayerInventory::SODestroyed
void __fastcall CPlayerInventory::SODestroyed(
        CPlayerInventory *const this,
        GCSDK::SOID_t owner,
        const GCSDK::CSharedObject *pObject,
        GCSDK::ESOCacheEvent eEvent)
{
  GCSDK::SOID_t::ID_t m_id; // r14
  GCSDK::SOID_t::Type_t m_type; // r13d
  void (__fastcall *v9)(CPlayerInventory *const, __int64); // r13
  __int64 v10; // rax
  void (__fastcall *v11)(CPlayerInventory *const, __int64, _QWORD, __int64); // r13
  __int64 v12; // rax

  m_id = owner.m_id;
  m_type = owner.m_type;
  if ( (*(pObject->_vptr_CSharedObject + 2))(pObject) == 1
    && this->m_OwnerID.m_type == m_type
    && m_id == this->m_OwnerID.m_id
    && this->m_pSOCache != 0
    && eEvent == GCSDK::ESOCacheEvent::eSOCacheEvent_Incremental )
  {
    v9 = *(this->_vptr_ISharedObjectListener + 15);
    v10 = (*(pObject->_vptr_CSharedObject + 12))(pObject);
    v9(this, v10);
    v11 = *(this->_vptr_ISharedObjectListener + 16);
    v12 = (*(pObject->_vptr_CSharedObject + 12))(pObject);
    v11(this, 1, LOWORD(pObject[5]._vptr_CSharedObject), v12);
  }
}


// CPlayerInventory::ClearInventoryItems  (line 1509, @0x0000000002e8df10, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEconItemView*>, Element, GetItemIndex, GetItemSchema, GrowMemory, Purge, PurgeAndDeleteElements, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: ItemSystem, CUtlSortVector<CEconItemView*, CInventoryListLess, CUtlVector<CEconItemView*, CUtlMemory<CEconItemView*, int> > >::Insert, CUtlMemory<CEconItemView*, int>::Grow, CUtlMemory<CEconItemView*, int>::Purge, CUtlVectorBase<CEconItemView*, CUtlMemory<CEconItemView*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CPlayerInventory::SOCacheUnsubscribed, CPlayerInventory::SOCacheSubscribed
void __fastcall CPlayerInventory::ClearInventoryItems(CPlayerInventory *const this)
{
  bool v2; // zf
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  CEconItemSystem *v5; // rax
  __int64 v6; // r15
  int v7; // eax
  CEconItemView **v8; // rax
  CUtlSortVector<CEconItemView*,CInventoryListLess,CUtlVector<CEconItemView*,CUtlMemory<CEconItemView*,int> > > *p_m_aInventoryItems; // r14
  __int64 v10; // r12
  int v11; // ebx
  CEconItemView *v12; // rdi
  unsigned __int64 v13; // rbx
  CEconItemView **v14; // [rsp+10h] [rbp-60h]
  __int64 v15; // [rsp+18h] [rbp-58h]
  CUtlVector<CEconItemView*,CUtlMemory<CEconItemView*,int> > testItems; // [rsp+20h] [rbp-50h] BYREF

  testItems.m_Size = 0;
  v2 = !this->m_bHasTestItems;
  testItems.m_Memory.m_pMemory = 0;
  testItems.m_Memory.m_nAllocationCount = 0;
  m_Size = this->m_aInventoryItems.m_Size;
  testItems.m_Memory.m_nGrowSize = 0;
  if ( !v2 )
  {
    if ( m_Size <= 0 )
    {
      p_m_aInventoryItems = &this->m_aInventoryItems;
      goto LABEL_16;
    }
    v4 = 0;
    v15 = 8LL * (m_Size - 1) + 8;
    do
    {
      while ( 1 )
      {
        v5 = ItemSystem();
        if ( (*(v5->m_itemSchema._vptr_IEconItemSchema + 46))(
               &v5->m_itemSchema,
               this->m_aInventoryItems.m_Memory.m_pMemory[v4 / 8]->m_iItemDefinitionIndex.m_Value.m_Data) != 0 )
          break;
        v4 += 8LL;
        if ( v4 == v15 )
          goto LABEL_11;
      }
      v6 = testItems.m_Size;
      v14 = &this->m_aInventoryItems.m_Memory.m_pMemory[v4 / 8];
      v7 = testItems.m_Size;
      if ( testItems.m_Size == testItems.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CEconItemView *,int>::Grow(&testItems.m_Memory, 1);
        v7 = testItems.m_Size;
      }
      testItems.m_Size = v7 + 1;
      v8 = &testItems.m_Memory.m_pMemory[v6];
      if ( v8 != 0 )
        *v8 = *v14;
      this->m_aInventoryItems.m_Memory.m_pMemory[v4 / 8] = 0;
      v4 += 8LL;
    }
    while ( v4 != v15 );
LABEL_11:
    m_Size = this->m_aInventoryItems.m_Size;
  }
  p_m_aInventoryItems = &this->m_aInventoryItems;
  v10 = 0;
  v11 = 0;
  if ( m_Size > 0 )
  {
    do
    {
      v12 = this->m_aInventoryItems.m_Memory.m_pMemory[v10];
      if ( v12 != 0 )
        (*(v12->_vptr_IEconItemInterface + 2))(v12);
      ++v11;
      ++v10;
    }
    while ( v11 < this->m_aInventoryItems.m_Size );
  }
LABEL_16:
  v2 = (this->m_aInventoryItems.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_aInventoryItems.m_Size = 0;
  if ( v2 )
    CUtlMemory<CEconItemView *,int>::Purge(&this->m_aInventoryItems.m_Memory);
  if ( testItems.m_Size > 0 )
  {
    v13 = 0;
    do
    {
      CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::Insert(
        p_m_aInventoryItems,
        &testItems.m_Memory.m_pMemory[v13 / 8]);
      v13 += 8LL;
    }
    while ( v13 != 8LL * (testItems.m_Size - 1) + 8 );
  }
  if ( (testItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEconItemView *,int>::Purge(&testItems.m_Memory);
    if ( (testItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconItemView *,int>::Purge(&testItems.m_Memory);
  }
}


// CPlayerInventory::SOCacheSubscribed  (line 1536, @0x0000000002e9b0c0, libserver.so)  // inlines: FindTypeCache, GetObject, GetSOCache, RedoSort, ResortInventory, operator!=, operator[]
// calls: LoggingSystem_IsChannelEnabled, GCSDK::SOIDRender_t::SOIDRender_t, LoggingSystem_Log, CPlayerInventory::ClearInventoryItems, GCSDK::CGCClient::FindSOCache, GCSDK::CSharedObjectCache::FindBaseTypeCache, CPlayerInventory::AddEconItem, CUtlSortVector<CEconItemView*, CInventoryListLess, CUtlVector<CEconItemView*, CUtlMemory<CEconItemView*, int> > >::QuickSort, __stack_chk_fail
// callers: CDOTAPlayerInventory::SOCacheSubscribed
// strings: "CL:  CPlayerInventory::SOCacheSubscribed %s\n"
// globals: s_pCGCGameSpecificClientSystem
void __fastcall CPlayerInventory::SOCacheSubscribed(
        CPlayerInventory *const this,
        GCSDK::SOID_t owner,
        GCSDK::ESOCacheEvent eEvent)
{
  GCSDK::SOID_t::ID_t m_id; // rbx
  char IsChannelEnabled; // al
  GCSDK::CGCClientSharedObjectCache *SOCache; // rax
  GCSDK::CSharedObjectTypeCache *BaseTypeCache; // rax
  int v8; // edx
  int v9; // ecx
  GCSDK::CSharedObjectTypeCache *v10; // r13
  int v11; // ebx
  __int64 v12; // rdx
  __int64 id; // [rsp+8h] [rbp-C8h]
  CInventoryListLess less; // [rsp+1Fh] [rbp-B1h] BYREF
  GCSDK::SOIDRender_t v15; // [rsp+20h] [rbp-B0h] BYREF
  unsigned __int64 v16; // [rsp+A8h] [rbp-28h]
  GCSDK::SOID_t v17; // 0:rsi.8,8:rdx.8

  v16 = __readfsqword(0x28u);
  if ( this->m_OwnerID.m_type == owner.m_type )
  {
    m_id = owner.m_id;
    if ( owner.m_id == this->m_OwnerID.m_id )
    {
      id = *&owner.m_type;
      IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_SERVER, 0);
      *&v17.m_type = id;
      if ( IsChannelEnabled != 0 )
      {
        v17.m_id = m_id;
        GCSDK::SOIDRender_t::SOIDRender_t(&v15, v17);
        LoggingSystem_Log(LOG_SERVER, 0, "CL:  CPlayerInventory::SOCacheSubscribed %s\n", v15.m_buf);
      }
      CPlayerInventory::ClearInventoryItems(this);
      SOCache = GCSDK::CGCClient::FindSOCache((s_pCGCGameSpecificClientSystem + 24), this->m_OwnerID);
      this->m_pSOCache = SOCache;
      if ( SOCache != 0 )
      {
        BaseTypeCache = GCSDK::CSharedObjectCache::FindBaseTypeCache(SOCache, 1);
        v10 = BaseTypeCache;
        if ( BaseTypeCache != 0 && BaseTypeCache->m_vecObjects.m_Size != 0 )
        {
          v11 = 0;
          do
          {
            v12 = v11++;
            CPlayerInventory::AddEconItem(this, v10->m_vecObjects.m_Memory.m_pMemory[v12], 1, 0, 1);
          }
          while ( v11 < v10->m_vecObjects.m_Size );
        }
        this->m_bGotItemsFromSteam = 1;
        this->m_aInventoryItems.m_bNeedsSort = 0;
        CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::QuickSort(
          &this->m_aInventoryItems,
          &less,
          v8,
          v9);
      }
    }
  }
}


// CPlayerInventory::ValidateInventoryPositions  (line 1610, @0x0000000002e69440, libserver.so)
// callers: CDOTAPlayerInventory::ValidateInventoryPositions
void __fastcall CPlayerInventory::ValidateInventoryPositions(CPlayerInventory *const this)
{
  ;
}


// CPlayerInventory::ItemHasBeenUpdated  (line 1623, @0x0000000002e96450, libserver.so)
// calls: CEconItemView::CacheAssetModifiers
// callers: CDOTAPlayerInventory::ItemHasBeenUpdated
void __fastcall CPlayerInventory::ItemHasBeenUpdated(
        CPlayerInventory *const this,
        CEconItemView *pItem,
        bool bUpdateAckFile,
        bool bWriteAckFile)
{
  CEconItemView::CacheAssetModifiers(pItem);
}


// CPlayerInventory::SOCacheUnsubscribed  (line 1650, @0x0000000002e8e120, libserver.so)  // inlines: operator!=
// calls: CPlayerInventory::ClearInventoryItems
void __fastcall CPlayerInventory::SOCacheUnsubscribed(
        CPlayerInventory *const this,
        GCSDK::SOID_t ID,
        GCSDK::ESOCacheEvent eEvent)
{
  if ( this->m_OwnerID.m_type == ID.m_type && ID.m_id == this->m_OwnerID.m_id )
  {
    this->m_pSOCache = 0;
    this->m_bGotItemsFromSteam = 0;
    CPlayerInventory::ClearInventoryItems(this);
  }
}


// CPlayerInventory::SendInventoryUpdateEvent  (line 1665, @0x0000000002e69450, libserver.so)
// callers: CDOTAPlayerInventory::SendInventoryUpdateEvent
void __fastcall CPlayerInventory::SendInventoryUpdateEvent(
        CPlayerInventory *const this,
        InventoryChangeReason_t reason,
        item_definition_index_t unItemDef,
        itemid_t unItemID)
{
  ;
}


// CPlayerInventory::FilloutItemFromEconItem  (line 1688, @0x0000000002e9adb0, libserver.so)  // inlines: GetInventoryPosition, Init, IsValid, NetworkStateChanged, Set, SetInventoryPosition, SetItemID, operator=<itemid_t>, operator=<unsigned int>
// calls: CEconItemView::InitInternal, CEconItemView::CacheAssetModifiers
// callers: CPlayerInventory::AddEconItem, CPlayerInventory::SOUpdated
// globals: INVALID_STYLE_INDEX
bool __fastcall CPlayerInventory::FilloutItemFromEconItem(
        CPlayerInventory *const this,
        CEconItemView *pScriptItem,
        CEconItem *pEconItem)
{
  unsigned int m_Value; // r14d
  __int64 (__fastcall *v7)(CPlayerInventory *const, _QWORD); // r15
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v15; // r15d
  int v16; // eax
  __int64 v17; // rax
  _BOOL4 v18; // r8d
  uint64 v19; // r15
  unsigned int v20; // eax
  bool v21; // r8
  unsigned int v22; // r12d
  void (__fastcall *v23)(CPlayerInventory *const, __int64); // r13
  __int64 v24; // rax
  char bWasInThisBag; // [rsp+Ch] [rbp-34h]
  uint32 bWasInThisBagc; // [rsp+Ch] [rbp-34h]
  _BOOL4 bWasInThisBaga; // [rsp+Ch] [rbp-34h]
  _BOOL4 bWasInThisBagb; // [rsp+Ch] [rbp-34h]
  bool bWasInThisBagd; // [rsp+Ch] [rbp-34h]
  bool bWasInThisBage; // [rsp+Ch] [rbp-34h]

  m_Value = pScriptItem->m_iInventoryPosition.m_Value;
  bWasInThisBag = (*(this->_vptr_ISharedObjectListener + 10))(this, m_Value);
  v7 = *(this->_vptr_ISharedObjectListener + 10);
  v8 = (*(pEconItem->_vptr_CSharedObject + 16))(pEconItem);
  v9 = v7(this, v8);
  if ( v9 == 0 )
  {
    if ( bWasInThisBag != 0 )
    {
      bWasInThisBage = v9;
      (*(this->_vptr_ISharedObjectListener + 20))(this, pScriptItem, 0, 0);
      v23 = *(this->_vptr_ISharedObjectListener + 15);
      v24 = (*(pEconItem->_vptr_CSharedObject + 12))(pEconItem);
      v23(this, v24);
      return bWasInThisBage;
    }
    return 0;
  }
  bWasInThisBagc = (*(pEconItem->_vptr_CSharedObject + 13))(pEconItem, v12, v10, v11, v9);
  v15 = (*(pEconItem->_vptr_CSharedObject + 14))(pEconItem);
  v16 = (*(pEconItem->_vptr_CSharedObject + 15))(pEconItem);
  CEconItemView::InitInternal(pScriptItem, pEconItem->m_unDefIndex, v16, v15, bWasInThisBagc, 0, INVALID_STYLE_INDEX);
  CEconItemView::CacheAssetModifiers(pScriptItem);
  if ( !pScriptItem->m_bInitialized.m_Value )
    return 0;
  bWasInThisBaga = pScriptItem->m_bInitialized.m_Value;
  v17 = (*(pEconItem->_vptr_CSharedObject + 12))(pEconItem);
  v18 = bWasInThisBaga;
  v19 = v17;
  if ( pScriptItem->m_iItemID.m_Value.m_Data != v17 )
  {
    (*(pScriptItem->_vptr_IEconItemInterface + 31))(pScriptItem, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL, bWasInThisBaga);
    v18 = bWasInThisBaga;
    pScriptItem->m_iItemID.m_Value.m_Data = v19;
  }
  bWasInThisBagb = v18;
  v20 = (*(pEconItem->_vptr_CSharedObject + 16))(pEconItem);
  v21 = bWasInThisBagb;
  v22 = v20;
  if ( v20 != pScriptItem->m_iInventoryPosition.m_Value )
  {
    (*(pScriptItem->_vptr_IEconItemInterface + 31))(pScriptItem, 36, 0xFFFFFFFFLL, 0xFFFFFFFFLL, bWasInThisBagb);
    v21 = bWasInThisBagb;
    pScriptItem->m_iInventoryPosition.m_Value = v22;
  }
  bWasInThisBagd = v21;
  (*(this->_vptr_ISharedObjectListener + 18))(this, pScriptItem, m_Value);
  return bWasInThisBagd;
}


// CPlayerInventory::DumpInventoryToConsole  (line 1741, @0x0000000002e99720, libserver.so)  // inlines: GetDefinitionName, GetWithNull, String
// calls: Msg, CEconItemView::GetStaticData
// strings: "(SERVER) Inventory for account (%d):\n", "  Version: %llu:\n", "   Num items: %d\n", "      %s (ID %llu)\n"
void __fastcall CPlayerInventory::DumpInventoryToConsole(CPlayerInventory *const this, bool bRoot)
{
  int m_id; // esi
  GCSDK::CGCClientSharedObjectCache *m_pSOCache; // rax
  __int64 m_ulVersion; // rsi
  int m_Size; // ebx
  unsigned __int64 v7; // xmm0_8
  __int64 v8; // r14
  unsigned __int64 v9; // rbx
  __int64 v10; // r13
  const CEconItemView *v11; // rdi
  const GameItemDefinition_t *StaticData; // rax

  if ( bRoot )
  {
    m_id = 0;
    if ( this->m_OwnerID.m_type == 1 )
      m_id = this->m_OwnerID.m_id;
    Msg("(SERVER) Inventory for account (%d):\n", m_id);
    m_pSOCache = this->m_pSOCache;
    m_ulVersion = -1;
    if ( m_pSOCache != 0 )
      m_ulVersion = m_pSOCache->m_ulVersion;
    Msg("  Version: %llu:\n", m_ulVersion);
  }
  m_Size = this->m_aInventoryItems.m_Size;
  v7 = Msg("   Num items: %d\n", m_Size).m128_u64[0];
  if ( m_Size > 0 )
  {
    v8 = 8LL * (m_Size - 1) + 8;
    v9 = 0;
    do
    {
      v10 = (*(this->m_aInventoryItems.m_Memory.m_pMemory[v9 / 8]->_vptr_IEconItemInterface + 14))(
              this->m_aInventoryItems.m_Memory.m_pMemory[v9 / 8],
              *&v7);
      v11 = this->m_aInventoryItems.m_Memory.m_pMemory[v9 / 8];
      v9 += 8LL;
      StaticData = CEconItemView::GetStaticData(v11);
      v7 = Msg("      %s (ID %llu)\n", StaticData->m_symDefinitionName.u.m_pAsString, v10).m128_u64[0];
    }
    while ( v9 != v8 );
  }
}


// CPlayerInventory::RemoveItem  (line 1766, @0x0000000002e77a40, libserver.so)  // inlines: Remove
// calls: CPlayerInventory::GetInventoryItemByItemID, CUtlVectorBase<CEconItemView*, CUtlMemory<CEconItemView*, int> >::Remove
void __fastcall CPlayerInventory::RemoveItem(CPlayerInventory *const this, itemid_t iItemID)
{
  CEconItemView *InventoryItemByItemID; // r12
  int iIndex[5]; // [rsp+Ch] [rbp-14h] BYREF

  InventoryItemByItemID = CPlayerInventory::GetInventoryItemByItemID(this, iItemID, iIndex);
  if ( InventoryItemByItemID != 0 )
  {
    (*(this->_vptr_ISharedObjectListener + 21))(this, InventoryItemByItemID);
    CUtlVectorBase<CEconItemView *,CUtlMemory<CEconItemView *,int>>::Remove(&this->m_aInventoryItems, iIndex[0]);
    (*(InventoryItemByItemID->_vptr_IEconItemInterface + 2))(InventoryItemByItemID);
  }
}


// CPlayerInventory::GetInventoryItemsByItemDef  (line 1787, @0x0000000002e74c50, libserver.so)  // inlines: AddToTail, CopyConstruct<CEconItemView*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CEconItemView*, int>::Grow
// callers: CDOTABaseAbility::CastAbility
void __fastcall CPlayerInventory::GetInventoryItemsByItemDef(
        const CPlayerInventory *const this,
        item_definition_index_t unDefIndex,
        CUtlVector<CEconItemView*,CUtlMemory<CEconItemView*,int> > *const items)
{
  CUtlVectorBase<CEconItemView*,CUtlMemory<CEconItemView*,int> >::CAllocator *p_m_Memory; // r8
  __int64 v6; // r12
  int i; // ebx
  CEconItemView *v8; // r14
  __int64 m_Size; // rax
  int v10; // ecx
  CEconItemView **v11; // rax
  CUtlVector<CEconItemView*,CUtlMemory<CEconItemView*,int> > *v12; // [rsp+8h] [rbp-48h]
  int v13; // [rsp+14h] [rbp-3Ch]
  CUtlVectorBase<CEconItemView*,CUtlMemory<CEconItemView*,int> >::CAllocator *v14; // [rsp+18h] [rbp-38h]

  p_m_Memory = &items->m_Memory;
  v6 = 0;
  for ( i = 0; this->m_aInventoryItems.m_Size > i; ++v6 )
  {
    while ( 1 )
    {
      v8 = this->m_aInventoryItems.m_Memory.m_pMemory[v6];
      if ( v8->m_iItemDefinitionIndex.m_Value.m_Data == unDefIndex.m_Data )
      {
        m_Size = items->m_Size;
        v10 = items->m_Size;
        if ( m_Size == items->m_Memory.m_nAllocationCount )
        {
          v12 = items;
          v13 = items->m_Size;
          v14 = p_m_Memory;
          CUtlMemory<CEconItemView *,int>::Grow(p_m_Memory, 1);
          items = v12;
          m_Size = v13;
          p_m_Memory = v14;
          v10 = v12->m_Size;
        }
        items->m_Size = v10 + 1;
        v11 = &items->m_Memory.m_pMemory[m_Size];
        if ( v11 != 0 )
          break;
      }
      ++i;
      ++v6;
      if ( this->m_aInventoryItems.m_Size <= i )
        return;
    }
    *v11 = v8;
    ++i;
  }
}


// CPlayerInventory::GetInventoryItemByItemID  (line 1803, @0x0000000002e77960, libserver.so)  // inlines: NetworkStateChanged, Set, SetItemID, operator=<itemid_t>, operator[]
// calls: CEconItemView::CEconItemView, CUtlSortVector<CEconItemView*, CInventoryListLess, CUtlVector<CEconItemView*, CUtlMemory<CEconItemView*, int> > >::Find<CEconItemView*>, CEconItemView::~CEconItemView, _Unwind_Resume
// callers: UseEconItemID, CDOTAPlayerInventory::GetStyleIndexForItems, CDOTAPlayerInventory::GetItemInLoadout, CPlayerInventory::RemoveItem, CPlayerInventory::GetIndexForItem, CPlayerInventory::SOUpdated
CEconItemView *__fastcall CPlayerInventory::GetInventoryItemByItemID(
        CPlayerInventory *const this,
        itemid_t iIndex,
        int *pIndex)
{
  int v6; // eax
  CEconItemView *v7; // r12
  CEconItemView *src; // [rsp+8h] [rbp-108h] BYREF
  CEconItemView searchItemView; // [rsp+10h] [rbp-100h] BYREF

  CEconItemView::CEconItemView(&searchItemView);
  if ( searchItemView.m_iItemID.m_Value.m_Data != iIndex.m_Data )
  {
    (*(searchItemView._vptr_IEconItemInterface + 31))(&searchItemView, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    searchItemView.m_iItemID.m_Value = iIndex;
  }
  src = &searchItemView;
  v6 = CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::Find<CEconItemView *>(
         &this->m_aInventoryItems,
         &src);
  if ( v6 == -1 )
  {
    if ( pIndex != 0 )
      *pIndex = -1;
    v7 = 0;
  }
  else
  {
    if ( pIndex != 0 )
      *pIndex = v6;
    v7 = this->m_aInventoryItems.m_Memory.m_pMemory[v6];
  }
  CEconItemView::~CEconItemView(&searchItemView);
  return v7;
}


// CPlayerInventory::GetHighestInventoryItemID  (line 1826, @0x0000000002e6cb60, libserver.so)  // inlines: Tail, operator[]
itemid_t __fastcall CPlayerInventory::GetHighestInventoryItemID(const CPlayerInventory *const this)
{
  int m_Size; // eax
  CEconItemView *v3; // rdi

  m_Size = this->m_aInventoryItems.m_Size;
  if ( m_Size == 0 )
    return 0;
  v3 = this->m_aInventoryItems.m_Memory.m_pMemory[m_Size - 1];
  return (*(v3->_vptr_IEconItemInterface + 14))(v3);
}


// CPlayerInventory::HasInventoryItemByDefinition  (line 1835, @0x0000000002e8bd90, libserver.so)
// calls: CEconItemView::GetSOCData
bool __fastcall CPlayerInventory::HasInventoryItemByDefinition(
        const CPlayerInventory *const this,
        item_definition_index_t iDefinition,
        bool bIgnorePurgatoryItems)
{
  int v6; // r12d
  __int64 v7; // rbx
  CEconItemView *v8; // rdi
  CEconItem *SOCData; // rax

  v6 = 0;
  v7 = 0;
  if ( this->m_aInventoryItems.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v8 = this->m_aInventoryItems.m_Memory.m_pMemory[v7];
    if ( v8->m_iItemDefinitionIndex.m_Value.m_Data == iDefinition.m_Data )
    {
      if ( !bIgnorePurgatoryItems )
        break;
      if ( CEconItemView::GetSOCData(v8) == 0 )
        break;
      SOCData = CEconItemView::GetSOCData(this->m_aInventoryItems.m_Memory.m_pMemory[v7]);
      if ( ((*(SOCData->_vptr_CSharedObject + 16))(SOCData) & 0x20000000) == 0 )
        break;
    }
    ++v6;
    ++v7;
    if ( this->m_aInventoryItems.m_Size <= v6 )
      return 0;
  }
  return 1;
}


// CPlayerInventory::GetItemCount  (line 1854, @0x0000000002e6cb90, libserver.so)  // inlines: GetItem, operator==
// callers: CDOTA_BaseNPC_HallofFame::FindPlayersWithGlowEnabled
int __fastcall CPlayerInventory::GetItemCount(CPlayerInventory *const this, item_definition_index_t unItemDef)
{
  int m_Size; // r8d
  CEconItemView **m_pMemory; // rdi
  __int64 v4; // rdx
  int result; // eax
  CEconItemView *v6; // rcx

  m_Size = this->m_aInventoryItems.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_aInventoryItems.m_Memory.m_pMemory;
  v4 = 0;
  result = 0;
  do
  {
    v6 = m_pMemory[v4];
    if ( v6 != 0 )
      result += v6->m_iItemDefinitionIndex.m_Value.m_Data == unItemDef.m_Data;
    ++v4;
  }
  while ( m_Size > v4 );
  return result;
}


// CPlayerInventory::GetItemByPosition  (line 1875, @0x0000000002e6cbd0, libserver.so)  // inlines: GetInventoryPosition, operator[]
CEconItemView *__fastcall CPlayerInventory::GetItemByPosition(CPlayerInventory *const this, int iPosition, int *pIndex)
{
  int m_Size; // r11d
  CEconItemView **m_pMemory; // r10
  __int64 v5; // rcx
  int v6; // eax

  m_Size = this->m_aInventoryItems.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_aInventoryItems.m_Memory.m_pMemory;
  if ( iPosition != (*m_pMemory)->m_iInventoryPosition.m_Value )
  {
    v5 = 1;
    v6 = 0;
    while ( ++v6 != m_Size )
    {
      if ( m_pMemory[v5]->m_iInventoryPosition.m_Value == iPosition )
        goto LABEL_9;
      ++v5;
    }
    return 0;
  }
  v5 = 0;
  v6 = 0;
LABEL_9:
  if ( pIndex != 0 )
  {
    *pIndex = v6;
    m_pMemory = this->m_aInventoryItems.m_Memory.m_pMemory;
  }
  return m_pMemory[v5];
}


// CPlayerInventory::GetIndexForItem  (line 1897, @0x0000000002e77a90, libserver.so)
// calls: CPlayerInventory::GetInventoryItemByItemID
int __fastcall CPlayerInventory::GetIndexForItem(CPlayerInventory *const this, CEconItemView *pItem)
{
  itemid_t v3; // rax
  int i[5]; // [rsp+Ch] [rbp-14h] BYREF

  i[0] = -1;
  v3.m_Data = (*(pItem->_vptr_IEconItemInterface + 14))(pItem);
  CPlayerInventory::GetInventoryItemByItemID(this, v3, i);
  return i[0];
}


// CPlayerInventory::GetSOCDataForItem  (line 1907, @0x0000000002e8bc70, libserver.so)
// calls: CEconItem::CEconItem, CEconItem::SetItemID, GCSDK::CSharedObjectCache::FindSharedObject, CEconItem::~CEconItem, GetEconItemFromStringTable, _Unwind_Resume
// callers: CEconItemView::GetSOCData
CEconItem *__fastcall CPlayerInventory::GetSOCDataForItem(CPlayerInventory *const this, itemid_t iItemID)
{
  CEconItem *SharedObject; // rbx
  CEconItem *result; // rax
  CEconItem soIndex; // [rsp+0h] [rbp-70h] BYREF

  if ( iItemID.m_Data == 0 )
    return 0;
  if ( this->m_pSOCache != 0 || (result = GetEconItemFromStringTable(iItemID), this->m_pSOCache != 0) && result == 0 )
  {
    CEconItem::CEconItem(&soIndex);
    CEconItem::SetItemID(&soIndex, iItemID);
    SharedObject = GCSDK::CSharedObjectCache::FindSharedObject(this->m_pSOCache, &soIndex);
    CEconItem::~CEconItem(&soIndex);
    return SharedObject;
  }
  return result;
}


// CPlayerInventory::GetItemStyleCount  (line 1954, @0x0000000002e6cc40, libserver.so)  // inlines: GetItem
int __fastcall CPlayerInventory::GetItemStyleCount(
        CPlayerInventory *const this,
        item_definition_index_t unItemDef,
        uint32 unStyleIndex)
{
  int m_Size; // eax
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  int v8; // r13d
  CEconItemView *v9; // rdi
  unsigned __int8 v11; // [rsp+Ch] [rbp-34h]

  m_Size = this->m_aInventoryItems.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v6 = 0;
  v7 = 8LL * (m_Size - 1) + 8;
  v8 = 0;
  v11 = unStyleIndex;
  do
  {
    while ( 1 )
    {
      v9 = this->m_aInventoryItems.m_Memory.m_pMemory[v6 / 8];
      if ( v9 != 0 && v9->m_iItemDefinitionIndex.m_Value.m_Data == unItemDef.m_Data )
        break;
      v6 += 8LL;
      if ( v6 == v7 )
        return v8;
    }
    v8 -= ((*(v9->_vptr_IEconItemInterface + 24))(v9, v11) == 0) - 1;
    v6 += 8LL;
  }
  while ( v6 != v7 );
  return v8;
}


