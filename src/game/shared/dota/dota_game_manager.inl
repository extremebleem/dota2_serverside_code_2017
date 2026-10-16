
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAGameManager::~CDOTAGameManager  (line 64, @0x000000000257f430, libserver.so)  // inlines: FreeInts, Purge, RemoveAll, StopListeningForAllEvents, memset, ~CAutoGameSystem, ~CBitVecT, ~CGameEventListener, ~CLargeVarBitVec, ~CNonThreadsafeTree, ~CUtlDict, ~CUtlHashMapLarge, ~CUtlHashtable, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlStringMap, ~CUtlSymbolTableLargeBase, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase, ~IGameEventListener2
// calls: CUtlSymbolTable::~CUtlSymbolTable, CUtlDict<char const*, int>::Purge, CUtlRBTree<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, CUtlRBTree<CUtlMap<unsigned int, KeyValues*>::Node_t, short unsigned int, CUtlMap<unsigned int, KeyValues*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, KeyValues*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, KeyValues*>::Node_t, short unsigned int>, short unsigned int>::Purge, CVarBitVecBase<int, 32>::Resize, memset, CUtlDict<int, int>::Purge, CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::RemoveAll (30 total)
// callers: CDOTAGameManager::~CDOTAGameManager
void __fastcall CDOTAGameManager::~CDOTAGameManager(CDOTAGameManager *const this)
{
  CUtlSymbolTable *p_m_SymbolTable; // rdi
  bool v3; // zf
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t m_Size; // eax
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v5; // eax
  __int64 v6; // r13
  int v7; // r12d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v8; // rsi
  __int64 v9; // r13
  int v10; // r12d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v11; // rsi

  p_m_SymbolTable = &this->m_ServerPortraitInfo.m_SymbolTable;
  *&p_m_SymbolTable[-19].m_bInsensitive = &off_40F9250;
  *&p_m_SymbolTable[-19].m_StringPools.m_Size = off_40F93B8;
  *&p_m_SymbolTable[-19].m_StringPools.m_Memory.m_nAllocationCount = &off_40F93E0;
  CUtlSymbolTable::~CUtlSymbolTable(p_m_SymbolTable);
  v3 = (this->m_ServerPortraitInfo.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ServerPortraitInfo.m_Vector.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CUtlSymbolLarge,int>::Purge(&this->m_ServerPortraitInfo.m_Vector.m_Memory);
    if ( (this->m_ServerPortraitInfo.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSymbolLarge,int>::Purge(&this->m_ServerPortraitInfo.m_Vector.m_Memory);
  }
  CUtlDict<char const*,int>::Purge(&this->m_CountryDict);
  CUtlRBTree<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_CountryDict.m_Elements.m_Tree);
  if ( (this->m_CountryDict.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_CountryDict.m_Elements.m_Tree.m_Elements);
  CUtlRBTree<CUtlMap<unsigned int,KeyValues *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,KeyValues *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,KeyValues *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapRegionToKeyValues.m_Tree);
  if ( (this->m_mapRegionToKeyValues.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,KeyValues *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapRegionToKeyValues.m_Tree.m_Elements);
  m_Size = this->m_mapHeroesByID.m_vecHashBuckets.m_Size;
  this->m_mapHeroesByID.m_cElements = 0;
  this->m_mapHeroesByID.m_nMaxElement = 0;
  this->m_mapHeroesByID.m_iNodeFreeListHead = -1;
  this->m_mapHeroesByID.m_nMinRehashedBucket = m_Size;
  this->m_mapHeroesByID.m_nMaxRehashedBucket = -1;
  CVarBitVecBase<int,32>::Resize(&this->m_mapHeroesByID.m_bitsMigratedBuckets, 0, 0);
  memset(
    this->m_mapHeroesByID.m_vecHashBuckets.m_Memory.m_pMemory,
    255,
    4LL * this->m_mapHeroesByID.m_vecHashBuckets.m_Size);
  if ( (this->m_mapHeroesByID.m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::Node_t,int>::Purge(&this->m_mapHeroesByID.m_memNodes);
  if ( this->m_mapHeroesByID.m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_mapHeroesByID.m_bitsMigratedBuckets.m_pInt);
  v3 = (this->m_mapHeroesByID.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapHeroesByID.m_bitsMigratedBuckets.m_pInt = 0;
  this->m_mapHeroesByID.m_vecHashBuckets.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::HashBucket_t,int>::Purge(&this->m_mapHeroesByID.m_vecHashBuckets.m_Memory);
    if ( (this->m_mapHeroesByID.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::HashBucket_t,int>::Purge(&this->m_mapHeroesByID.m_vecHashBuckets.m_Memory);
  }
  v5 = this->m_mapAbilitiesByID.m_vecHashBuckets.m_Size;
  this->m_mapAbilitiesByID.m_cElements = 0;
  this->m_mapAbilitiesByID.m_nMaxElement = 0;
  this->m_mapAbilitiesByID.m_iNodeFreeListHead = -1;
  this->m_mapAbilitiesByID.m_nMinRehashedBucket = v5;
  this->m_mapAbilitiesByID.m_nMaxRehashedBucket = -1;
  CVarBitVecBase<int,32>::Resize(&this->m_mapAbilitiesByID.m_bitsMigratedBuckets, 0, 0);
  memset(
    this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory.m_pMemory,
    255,
    4LL * this->m_mapAbilitiesByID.m_vecHashBuckets.m_Size);
  if ( (this->m_mapAbilitiesByID.m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashMapLarge<int,KeyValues *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::Node_t,int>::Purge(&this->m_mapAbilitiesByID.m_memNodes);
  if ( this->m_mapAbilitiesByID.m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_mapAbilitiesByID.m_bitsMigratedBuckets.m_pInt);
  v3 = (this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapAbilitiesByID.m_bitsMigratedBuckets.m_pInt = 0;
  this->m_mapAbilitiesByID.m_vecHashBuckets.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CUtlHashMapLarge<int,KeyValues *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::HashBucket_t,int>::Purge(&this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory);
    if ( (this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<int,KeyValues *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::HashBucket_t,int>::Purge(&this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory);
  }
  CUtlDict<int,int>::Purge(&this->m_AddOnUnitNames);
  CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_AddOnUnitNames.m_Elements.m_Tree);
  if ( (this->m_AddOnUnitNames.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_AddOnUnitNames.m_Elements.m_Tree.m_Elements);
  CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::RemoveAll(&this->m_AddOnAbilitiesIDToIndexMap);
  if ( (this->m_AddOnAbilitiesIDToIndexMap.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>::Purge(&this->m_AddOnAbilitiesIDToIndexMap.m_table);
  CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::RemoveAll(&this->m_AddOnAbilitiesIndexToIDMap);
  if ( (this->m_AddOnAbilitiesIndexToIDMap.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>::Purge(&this->m_AddOnAbilitiesIndexToIDMap.m_table);
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_AddOnAbilitiesDataDict.m_Tree);
  if ( (this->m_AddOnAbilitiesDataDict.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_AddOnAbilitiesDataDict.m_Tree.m_Elements);
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_AddOnAbilitiesDict.m_Tree);
  if ( (this->m_AddOnAbilitiesDict.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_AddOnAbilitiesDict.m_Tree.m_Elements);
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&this->m_AddOnAbilityNameTable.m_Lookup);
  if ( this->m_AddOnAbilityNameTable.m_StringPools.m_Size > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      ++v7;
      v8 = this->m_AddOnAbilityNameTable.m_StringPools.m_Memory.m_pMemory[v6++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8);
    }
    while ( v7 < this->m_AddOnAbilityNameTable.m_StringPools.m_Size );
  }
  v3 = (this->m_AddOnAbilityNameTable.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AddOnAbilityNameTable.m_StringPools.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_AddOnAbilityNameTable.m_StringPools.m_Memory);
    v3 = (this->m_AddOnAbilityNameTable.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_AddOnAbilityNameTable.m_StringPools.m_Size = 0;
    if ( v3 )
    {
      CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_AddOnAbilityNameTable.m_StringPools.m_Memory);
      if ( (this->m_AddOnAbilityNameTable.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_AddOnAbilityNameTable.m_StringPools.m_Memory);
    }
  }
  else
  {
    this->m_AddOnAbilityNameTable.m_StringPools.m_Size = 0;
  }
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&this->m_AddOnAbilityNameTable.m_Lookup);
  if ( (this->m_AddOnAbilityNameTable.m_Lookup.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>::Purge(&this->m_AddOnAbilityNameTable.m_Lookup.m_Elements);
  CUtlScratchMemoryPool::~CUtlScratchMemoryPool(&this->m_AddOnMemPool);
  CUtlDict<int,int>::Purge(&this->m_UnitNames);
  CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_UnitNames.m_Elements.m_Tree);
  if ( (this->m_UnitNames.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_UnitNames.m_Elements.m_Tree.m_Elements);
  CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::RemoveAll(&this->m_AbilitiesIDToIndexMap);
  if ( (this->m_AbilitiesIDToIndexMap.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>::Purge(&this->m_AbilitiesIDToIndexMap.m_table);
  CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::RemoveAll(&this->m_AbilitiesIndexToIDMap);
  if ( (this->m_AbilitiesIndexToIDMap.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>::Purge(&this->m_AbilitiesIndexToIDMap.m_table);
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_AbilitiesDataDict.m_Tree);
  if ( (this->m_AbilitiesDataDict.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_AbilitiesDataDict.m_Tree.m_Elements);
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_AbilitiesDict.m_Tree);
  if ( (this->m_AbilitiesDict.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_AbilitiesDict.m_Tree.m_Elements);
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&this->m_AbilityNameTable.m_Lookup);
  if ( this->m_AbilityNameTable.m_StringPools.m_Size > 0 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      ++v10;
      v11 = this->m_AbilityNameTable.m_StringPools.m_Memory.m_pMemory[v9++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v11);
    }
    while ( v10 < this->m_AbilityNameTable.m_StringPools.m_Size );
  }
  v3 = (this->m_AbilityNameTable.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AbilityNameTable.m_StringPools.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_AbilityNameTable.m_StringPools.m_Memory);
    v3 = (this->m_AbilityNameTable.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_AbilityNameTable.m_StringPools.m_Size = 0;
    if ( v3 )
    {
      CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_AbilityNameTable.m_StringPools.m_Memory);
      if ( (this->m_AbilityNameTable.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_AbilityNameTable.m_StringPools.m_Memory);
    }
  }
  else
  {
    this->m_AbilityNameTable.m_StringPools.m_Size = 0;
  }
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&this->m_AbilityNameTable.m_Lookup);
  if ( (this->m_AbilityNameTable.m_Lookup.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>::Purge(&this->m_AbilityNameTable.m_Lookup.m_Elements);
  CUtlScratchMemoryPool::~CUtlScratchMemoryPool(&this->m_BaseMemPool);
  v3 = (this->m_vecLocalizedItemNames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecLocalizedItemNames.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CDOTAGameManager::LocalizedToScriptNameItem_t,int>::Purge(&this->m_vecLocalizedItemNames.m_Memory);
    if ( (this->m_vecLocalizedItemNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTAGameManager::LocalizedToScriptNameItem_t,int>::Purge(&this->m_vecLocalizedItemNames.m_Memory);
  }
  v3 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v3 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CDOTAGameManager::~CDOTAGameManager  (line 64, @0x000000000257fb30, libserver.so)
// calls: CDOTAGameManager::~CDOTAGameManager, operator delete
void __fastcall CDOTAGameManager::~CDOTAGameManager(CDOTAGameManager *const this)
{
  CDOTAGameManager::~CDOTAGameManager(this);
  operator delete(this);
}


// CDOTAGameManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 66, @0x0000000002552030, libserver.so)
void __fastcall CDOTAGameManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CDOTAGameManager *const this)
{
  ;
}


// CDOTAGameManager::DoesGameSystemReallocate  (line 66, @0x0000000002552040, libserver.so)
// globals: CDOTAGameManager::sm_Factory
bool __fastcall CDOTAGameManager::DoesGameSystemReallocate(const CDOTAGameManager *const this)
{
  return (*(CDOTAGameManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTAGameManager::sm_Factory);
}


// CDOTAGameManager::SetGameSystemGlobalPtrs  (line 66, @0x0000000002552060, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTAGameManager::sm_Factory
void __fastcall CDOTAGameManager::SetGameSystemGlobalPtrs(CDOTAGameManager *const this, void *pValue)
{
  if ( CDOTAGameManager::sm_Factory != 0 )
    (*(CDOTAGameManager::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTAGameManager::sm_Factory, pValue);
}


// CDOTAGameManager::Schema_DynamicBinding  (line 70, @0x0000000002552090, libserver.so)
// globals: CDOTAGameManager::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAGameManager::Schema_DynamicBinding(const CDOTAGameManager *const this)
{
  return CDOTAGameManager::s_pSchemaBinding;
}


