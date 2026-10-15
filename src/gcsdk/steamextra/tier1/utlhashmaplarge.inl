
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t, CUtlHashMapLargeDefEquals<long long int>, MurmurHash3Functor<long long int> >::CUtlHashMapLarge  (line 103, @0x000000000322c680, libserver.so)  // inlines: CBitVecT, CLargeVarBitVec, CUtlMemory, CUtlVector, CUtlVectorBase, CVarBitVecBase, ClearAll, memset
// calls: memset
// callers: GCSDK::CJobMgr::DumpJobSummary
void __fastcall CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::CUtlHashMapLarge(
        CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >_0 *const this)
{
  this->m_vecHashBuckets.m_Size = 0;
  this->m_vecHashBuckets.m_Memory.m_pMemory = 0;
  this->m_vecHashBuckets.m_Memory.m_nAllocationCount = 0;
  this->m_vecHashBuckets.m_Memory.m_nGrowSize = 0;
  *&this->m_bitsMigratedBuckets.m_numBits = 0;
  this->m_bitsMigratedBuckets.m_pInt = 0;
  *this->m_bitsMigratedBuckets.m_FixedStorage = 0;
  memset(0, 0, 0);
  this->m_memNodes.m_pMemory = 0;
  this->m_memNodes.m_nAllocationCount = 0;
  this->m_memNodes.m_nGrowSize = 0;
  this->m_cElements = 0;
  this->m_nMaxElement = 0;
  this->m_nMinRehashedBucket = -1;
  this->m_nMaxRehashedBucket = -1;
  this->m_iNodeFreeListHead = -1;
}


// CUtlHashMapLarge<int, KeyValues*, CUtlHashMapLargeDefEquals<int>, MurmurHash3Functor<int> >::~CUtlHashMapLarge  (line 122, @0x000000000256b2b0, libserver.so)  // inlines: FreeInts, GetEndMask, Purge, ReallocInts, RemoveAll, Resize, memset, ~CBitVecT, ~CLargeVarBitVec, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase
// calls: memset, CUtlMemory<CUtlHashMapLarge<int, KeyValues*>::Node_t, int>::Purge, CUtlMemory<CUtlHashMapLarge<int, KeyValues*>::HashBucket_t, int>::Purge
// callers: CDOTAGameManager::CDOTAGameManager
// globals: GetEndMask(int)::bitStringEndMasks
void __fastcall CUtlHashMapLarge<int,KeyValues *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::~CUtlHashMapLarge(
        CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> > *const this)
{
  int m_numInts; // eax
  __int64 m_Size; // rdx
  int m_numBits; // eax
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::HashBucket_t *m_pMemory; // rdi
  bool v6; // zf
  int v7; // eax
  uint32 *m_pInt; // rcx

  m_numInts = this->m_bitsMigratedBuckets.m_numInts;
  this->m_cElements = 0;
  m_Size = this->m_vecHashBuckets.m_Size;
  this->m_nMaxElement = 0;
  this->m_iNodeFreeListHead = -1;
  this->m_nMaxRehashedBucket = -1;
  this->m_nMinRehashedBucket = m_Size;
  if ( m_numInts != 0 )
  {
    if ( this->m_bitsMigratedBuckets.m_pInt != 0 )
    {
      if ( m_numInts > 1 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      m_numBits = this->m_bitsMigratedBuckets.m_numBits;
      this->m_bitsMigratedBuckets.m_pInt = 0;
      if ( m_numBits <= 0 )
      {
        *(4LL * this->m_bitsMigratedBuckets.m_numInts - 4) &= GetEndMask(int)::bitStringEndMasks[m_numBits & 0x1F];
        memset(
          &this->m_bitsMigratedBuckets.m_pInt[this->m_bitsMigratedBuckets.m_numInts],
          0,
          4LL * -this->m_bitsMigratedBuckets.m_numInts);
      }
      m_Size = this->m_vecHashBuckets.m_Size;
      this->m_bitsMigratedBuckets.m_numInts = 0;
    }
    else
    {
      this->m_bitsMigratedBuckets.m_numInts = 0;
    }
  }
  else
  {
    v7 = this->m_bitsMigratedBuckets.m_numBits;
    if ( v7 <= 0 )
    {
      m_pInt = this->m_bitsMigratedBuckets.m_pInt;
      if ( m_pInt != 0 )
      {
        *(m_pInt - 1) &= GetEndMask(int)::bitStringEndMasks[v7 & 0x1F];
        m_Size = this->m_vecHashBuckets.m_Size;
      }
    }
  }
  m_pMemory = this->m_vecHashBuckets.m_Memory.m_pMemory;
  this->m_bitsMigratedBuckets.m_numBits = 0;
  memset(m_pMemory, 255, 4 * m_Size);
  if ( (this->m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashMapLarge<int,KeyValues *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::Node_t,int>::Purge(&this->m_memNodes);
  if ( this->m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_bitsMigratedBuckets.m_pInt);
  v6 = (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_bitsMigratedBuckets.m_pInt = 0;
  this->m_vecHashBuckets.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CUtlHashMapLarge<int,KeyValues *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
    if ( (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<int,KeyValues *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
  }
}


// CUtlHashMapLarge<int, CDOTAGameManager::HeroInfo_t, CUtlHashMapLargeDefEquals<int>, MurmurHash3Functor<int> >::~CUtlHashMapLarge  (line 122, @0x000000000256b440, libserver.so)  // inlines: FreeInts, GetEndMask, Purge, ReallocInts, RemoveAll, Resize, memset, ~CBitVecT, ~CLargeVarBitVec, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase
// calls: memset, CUtlMemory<CUtlHashMapLarge<int, CDOTAGameManager::HeroInfo_t>::Node_t, int>::Purge, CUtlMemory<CUtlHashMapLarge<int, CDOTAGameManager::HeroInfo_t>::HashBucket_t, int>::Purge
// callers: CDOTAGameManager::CDOTAGameManager
// globals: GetEndMask(int)::bitStringEndMasks
void __fastcall CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::~CUtlHashMapLarge(
        CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> > *const this)
{
  int m_numInts; // eax
  __int64 m_Size; // rdx
  int m_numBits; // eax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::HashBucket_t *m_pMemory; // rdi
  bool v6; // zf
  int v7; // eax
  uint32 *m_pInt; // rcx

  m_numInts = this->m_bitsMigratedBuckets.m_numInts;
  this->m_cElements = 0;
  m_Size = this->m_vecHashBuckets.m_Size;
  this->m_nMaxElement = 0;
  this->m_iNodeFreeListHead = -1;
  this->m_nMaxRehashedBucket = -1;
  this->m_nMinRehashedBucket = m_Size;
  if ( m_numInts != 0 )
  {
    if ( this->m_bitsMigratedBuckets.m_pInt != 0 )
    {
      if ( m_numInts > 1 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      m_numBits = this->m_bitsMigratedBuckets.m_numBits;
      this->m_bitsMigratedBuckets.m_pInt = 0;
      if ( m_numBits <= 0 )
      {
        *(4LL * this->m_bitsMigratedBuckets.m_numInts - 4) &= GetEndMask(int)::bitStringEndMasks[m_numBits & 0x1F];
        memset(
          &this->m_bitsMigratedBuckets.m_pInt[this->m_bitsMigratedBuckets.m_numInts],
          0,
          4LL * -this->m_bitsMigratedBuckets.m_numInts);
      }
      m_Size = this->m_vecHashBuckets.m_Size;
      this->m_bitsMigratedBuckets.m_numInts = 0;
    }
    else
    {
      this->m_bitsMigratedBuckets.m_numInts = 0;
    }
  }
  else
  {
    v7 = this->m_bitsMigratedBuckets.m_numBits;
    if ( v7 <= 0 )
    {
      m_pInt = this->m_bitsMigratedBuckets.m_pInt;
      if ( m_pInt != 0 )
      {
        *(m_pInt - 1) &= GetEndMask(int)::bitStringEndMasks[v7 & 0x1F];
        m_Size = this->m_vecHashBuckets.m_Size;
      }
    }
  }
  m_pMemory = this->m_vecHashBuckets.m_Memory.m_pMemory;
  this->m_bitsMigratedBuckets.m_numBits = 0;
  memset(m_pMemory, 255, 4 * m_Size);
  if ( (this->m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::Node_t,int>::Purge(&this->m_memNodes);
  if ( this->m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_bitsMigratedBuckets.m_pInt);
  v6 = (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_bitsMigratedBuckets.m_pInt = 0;
  this->m_vecHashBuckets.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
    if ( (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
  }
}


// CUtlHashMapLarge<int, CUtlVector<CSteamID, CUtlMemory<CSteamID, int> >*, CUtlHashMapLargeDefEquals<int>, MurmurHash3Functor<int> >::~CUtlHashMapLarge  (line 122, @0x000000000256c4c0, libserver.so)  // inlines: FreeInts, GetEndMask, Purge, ReallocInts, RemoveAll, Resize, memset, ~CBitVecT, ~CLargeVarBitVec, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase
// calls: memset, CUtlMemory<CUtlHashMapLarge<int, CUtlVector<CSteamID>*>::HashBucket_t, int>::Purge
// callers: CDOTAGamerules::BroadcastItemDropBonusStatus
// globals: GetEndMask(int)::bitStringEndMasks
void __fastcall CUtlHashMapLarge<int,CUtlVector<CSteamID,CUtlMemory<CSteamID,int>> *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::~CUtlHashMapLarge(
        CUtlHashMapLarge<int,CUtlVector<CSteamID,CUtlMemory<CSteamID,int> >*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> > *const this)
{
  int m_numInts; // eax
  __int64 m_Size; // rdx
  int m_numBits; // eax
  CUtlHashMapLarge<int,CUtlVector<CSteamID,CUtlMemory<CSteamID,int> >*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::HashBucket_t *m_pMemory; // rdi
  bool v6; // zf
  int v7; // eax
  uint32 *m_pInt; // rcx

  m_numInts = this->m_bitsMigratedBuckets.m_numInts;
  this->m_cElements = 0;
  m_Size = this->m_vecHashBuckets.m_Size;
  this->m_nMaxElement = 0;
  this->m_iNodeFreeListHead = -1;
  this->m_nMaxRehashedBucket = -1;
  this->m_nMinRehashedBucket = m_Size;
  if ( m_numInts != 0 )
  {
    if ( this->m_bitsMigratedBuckets.m_pInt != 0 )
    {
      if ( m_numInts > 1 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      m_numBits = this->m_bitsMigratedBuckets.m_numBits;
      this->m_bitsMigratedBuckets.m_pInt = 0;
      if ( m_numBits <= 0 )
      {
        *(4LL * this->m_bitsMigratedBuckets.m_numInts - 4) &= GetEndMask(int)::bitStringEndMasks[m_numBits & 0x1F];
        memset(
          &this->m_bitsMigratedBuckets.m_pInt[this->m_bitsMigratedBuckets.m_numInts],
          0,
          4LL * -this->m_bitsMigratedBuckets.m_numInts);
      }
      m_Size = this->m_vecHashBuckets.m_Size;
      this->m_bitsMigratedBuckets.m_numInts = 0;
    }
    else
    {
      this->m_bitsMigratedBuckets.m_numInts = 0;
    }
  }
  else
  {
    v7 = this->m_bitsMigratedBuckets.m_numBits;
    if ( v7 <= 0 )
    {
      m_pInt = this->m_bitsMigratedBuckets.m_pInt;
      if ( m_pInt != 0 )
      {
        *(m_pInt - 1) &= GetEndMask(int)::bitStringEndMasks[v7 & 0x1F];
        m_Size = this->m_vecHashBuckets.m_Size;
      }
    }
  }
  m_pMemory = this->m_vecHashBuckets.m_Memory.m_pMemory;
  this->m_bitsMigratedBuckets.m_numBits = 0;
  memset(m_pMemory, 255, 4 * m_Size);
  if ( (this->m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_memNodes.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_memNodes.m_pMemory = 0;
    }
    this->m_memNodes.m_nAllocationCount = 0;
  }
  if ( this->m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_bitsMigratedBuckets.m_pInt);
  v6 = (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_bitsMigratedBuckets.m_pInt = 0;
  this->m_vecHashBuckets.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CUtlHashMapLarge<int,CUtlVector<CSteamID,CUtlMemory<CSteamID,int>> *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
    if ( (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<int,CUtlVector<CSteamID,CUtlMemory<CSteamID,int>> *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
  }
}


// CUtlHashMapLarge<item_definition_index_t, CDOTAItemSchema::AssociatedLeagueInfo_t, CUtlHashMapLargeDefEquals<item_definition_index_t>, MurmurHash3Functor<item_definition_index_t> >::~CUtlHashMapLarge  (line 122, @0x0000000002e599e0, libserver.so)  // inlines: FreeInts, GetEndMask, Purge, ReallocInts, RemoveAll, Resize, memset, ~CBitVecT, ~CLargeVarBitVec, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase
// calls: memset, CUtlMemory<CUtlHashMapLarge<item_definition_index_t, CDOTAItemSchema::AssociatedLeagueInfo_t>::Node_t, int>::Purge, CUtlMemory<CUtlHashMapLarge<item_definition_index_t, CDOTAItemSchema::AssociatedLeagueInfo_t>::HashBucket_t, int>::Purge
// globals: GetEndMask(int)::bitStringEndMasks
void __fastcall CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::~CUtlHashMapLarge(
        CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> > *const this)
{
  int m_numInts; // eax
  __int64 m_Size; // rdx
  int m_numBits; // eax
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::HashBucket_t *m_pMemory; // rdi
  bool v6; // zf
  int v7; // eax
  uint32 *m_pInt; // rcx

  m_numInts = this->m_bitsMigratedBuckets.m_numInts;
  this->m_cElements = 0;
  m_Size = this->m_vecHashBuckets.m_Size;
  this->m_nMaxElement = 0;
  this->m_iNodeFreeListHead = -1;
  this->m_nMaxRehashedBucket = -1;
  this->m_nMinRehashedBucket = m_Size;
  if ( m_numInts != 0 )
  {
    if ( this->m_bitsMigratedBuckets.m_pInt != 0 )
    {
      if ( m_numInts > 1 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      m_numBits = this->m_bitsMigratedBuckets.m_numBits;
      this->m_bitsMigratedBuckets.m_pInt = 0;
      if ( m_numBits <= 0 )
      {
        *(4LL * this->m_bitsMigratedBuckets.m_numInts - 4) &= GetEndMask(int)::bitStringEndMasks[m_numBits & 0x1F];
        memset(
          &this->m_bitsMigratedBuckets.m_pInt[this->m_bitsMigratedBuckets.m_numInts],
          0,
          4LL * -this->m_bitsMigratedBuckets.m_numInts);
      }
      m_Size = this->m_vecHashBuckets.m_Size;
      this->m_bitsMigratedBuckets.m_numInts = 0;
    }
    else
    {
      this->m_bitsMigratedBuckets.m_numInts = 0;
    }
  }
  else
  {
    v7 = this->m_bitsMigratedBuckets.m_numBits;
    if ( v7 <= 0 )
    {
      m_pInt = this->m_bitsMigratedBuckets.m_pInt;
      if ( m_pInt != 0 )
      {
        *(m_pInt - 1) &= GetEndMask(int)::bitStringEndMasks[v7 & 0x1F];
        m_Size = this->m_vecHashBuckets.m_Size;
      }
    }
  }
  m_pMemory = this->m_vecHashBuckets.m_Memory.m_pMemory;
  this->m_bitsMigratedBuckets.m_numBits = 0;
  memset(m_pMemory, 255, 4 * m_Size);
  if ( (this->m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::Node_t,int>::Purge(&this->m_memNodes);
  if ( this->m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_bitsMigratedBuckets.m_pInt);
  v6 = (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_bitsMigratedBuckets.m_pInt = 0;
  this->m_vecHashBuckets.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
    if ( (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
  }
}


// CUtlHashMapLarge<unsigned int, CDOTAItemSchema::LeagueInfo_t, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::~CUtlHashMapLarge  (line 122, @0x0000000002e59b70, libserver.so)  // inlines: FreeInts, GetEndMask, Purge, ReallocInts, RemoveAll, Resize, memset, ~CBitVecT, ~CLargeVarBitVec, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase
// calls: memset, CUtlMemory<CUtlHashMapLarge<unsigned int, CDOTAItemSchema::LeagueInfo_t>::HashBucket_t, int>::Purge
// globals: GetEndMask(int)::bitStringEndMasks
void __fastcall CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::~CUtlHashMapLarge(
        CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> > *const this)
{
  int m_numInts; // eax
  __int64 m_Size; // rdx
  int m_numBits; // eax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *m_pMemory; // rdi
  bool v6; // zf
  int v7; // eax
  uint32 *m_pInt; // rcx

  m_numInts = this->m_bitsMigratedBuckets.m_numInts;
  this->m_cElements = 0;
  m_Size = this->m_vecHashBuckets.m_Size;
  this->m_nMaxElement = 0;
  this->m_iNodeFreeListHead = -1;
  this->m_nMaxRehashedBucket = -1;
  this->m_nMinRehashedBucket = m_Size;
  if ( m_numInts != 0 )
  {
    if ( this->m_bitsMigratedBuckets.m_pInt != 0 )
    {
      if ( m_numInts > 1 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      m_numBits = this->m_bitsMigratedBuckets.m_numBits;
      this->m_bitsMigratedBuckets.m_pInt = 0;
      if ( m_numBits <= 0 )
      {
        *(4LL * this->m_bitsMigratedBuckets.m_numInts - 4) &= GetEndMask(int)::bitStringEndMasks[m_numBits & 0x1F];
        memset(
          &this->m_bitsMigratedBuckets.m_pInt[this->m_bitsMigratedBuckets.m_numInts],
          0,
          4LL * -this->m_bitsMigratedBuckets.m_numInts);
      }
      m_Size = this->m_vecHashBuckets.m_Size;
      this->m_bitsMigratedBuckets.m_numInts = 0;
    }
    else
    {
      this->m_bitsMigratedBuckets.m_numInts = 0;
    }
  }
  else
  {
    v7 = this->m_bitsMigratedBuckets.m_numBits;
    if ( v7 <= 0 )
    {
      m_pInt = this->m_bitsMigratedBuckets.m_pInt;
      if ( m_pInt != 0 )
      {
        *(m_pInt - 1) &= GetEndMask(int)::bitStringEndMasks[v7 & 0x1F];
        m_Size = this->m_vecHashBuckets.m_Size;
      }
    }
  }
  m_pMemory = this->m_vecHashBuckets.m_Memory.m_pMemory;
  this->m_bitsMigratedBuckets.m_numBits = 0;
  memset(m_pMemory, 255, 4 * m_Size);
  if ( (this->m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_memNodes.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_memNodes.m_pMemory = 0;
    }
    this->m_memNodes.m_nAllocationCount = 0;
  }
  if ( this->m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_bitsMigratedBuckets.m_pInt);
  v6 = (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_bitsMigratedBuckets.m_pInt = 0;
  this->m_vecHashBuckets.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
    if ( (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
  }
}


// CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, MurmurHash3Functor<item_definition_index_t> >::~CUtlHashMapLarge  (line 122, @0x0000000002ea7e00, libserver.so)  // inlines: FreeInts, GetEndMask, Purge, ReallocInts, RemoveAll, Resize, memset, ~CBitVecT, ~CLargeVarBitVec, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase
// calls: memset, CUtlMemory<CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*>::Node_t, int>::Purge, CUtlMemory<CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*>::HashBucket_t, int>::Purge
// callers: CEconItemSchema::CEconItemSchema
// globals: GetEndMask(int)::bitStringEndMasks
void __fastcall CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition *,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::~CUtlHashMapLarge(
        CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> > *const this)
{
  int m_numInts; // eax
  __int64 m_Size; // rdx
  int m_numBits; // eax
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::HashBucket_t *m_pMemory; // rdi
  bool v6; // zf
  int v7; // eax
  uint32 *m_pInt; // rcx

  m_numInts = this->m_bitsMigratedBuckets.m_numInts;
  this->m_cElements = 0;
  m_Size = this->m_vecHashBuckets.m_Size;
  this->m_nMaxElement = 0;
  this->m_iNodeFreeListHead = -1;
  this->m_nMaxRehashedBucket = -1;
  this->m_nMinRehashedBucket = m_Size;
  if ( m_numInts != 0 )
  {
    if ( this->m_bitsMigratedBuckets.m_pInt != 0 )
    {
      if ( m_numInts > 1 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      m_numBits = this->m_bitsMigratedBuckets.m_numBits;
      this->m_bitsMigratedBuckets.m_pInt = 0;
      if ( m_numBits <= 0 )
      {
        *(4LL * this->m_bitsMigratedBuckets.m_numInts - 4) &= GetEndMask(int)::bitStringEndMasks[m_numBits & 0x1F];
        memset(
          &this->m_bitsMigratedBuckets.m_pInt[this->m_bitsMigratedBuckets.m_numInts],
          0,
          4LL * -this->m_bitsMigratedBuckets.m_numInts);
      }
      m_Size = this->m_vecHashBuckets.m_Size;
      this->m_bitsMigratedBuckets.m_numInts = 0;
    }
    else
    {
      this->m_bitsMigratedBuckets.m_numInts = 0;
    }
  }
  else
  {
    v7 = this->m_bitsMigratedBuckets.m_numBits;
    if ( v7 <= 0 )
    {
      m_pInt = this->m_bitsMigratedBuckets.m_pInt;
      if ( m_pInt != 0 )
      {
        *(m_pInt - 1) &= GetEndMask(int)::bitStringEndMasks[v7 & 0x1F];
        m_Size = this->m_vecHashBuckets.m_Size;
      }
    }
  }
  m_pMemory = this->m_vecHashBuckets.m_Memory.m_pMemory;
  this->m_bitsMigratedBuckets.m_numBits = 0;
  memset(m_pMemory, 255, 4 * m_Size);
  if ( (this->m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition *,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::Node_t,int>::Purge(&this->m_memNodes);
  if ( this->m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_bitsMigratedBuckets.m_pInt);
  v6 = (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_bitsMigratedBuckets.m_pInt = 0;
  this->m_vecHashBuckets.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition *,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
    if ( (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition *,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
  }
}


// CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functor<CEconSchemaSymbol> >::~CUtlHashMapLarge  (line 122, @0x0000000002ea7f90, libserver.so)  // inlines: FreeInts, GetEndMask, Purge, ReallocInts, RemoveAll, Resize, memset, ~CBitVecT, ~CLargeVarBitVec, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase
// calls: memset, CUtlMemory<CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*>::Node_t, int>::Purge, CUtlMemory<CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*>::HashBucket_t, int>::Purge
// callers: CEconItemSchema::CEconItemSchema
// globals: GetEndMask(int)::bitStringEndMasks
void __fastcall CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition *,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol>>::~CUtlHashMapLarge(
        CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> > *const this)
{
  int m_numInts; // eax
  __int64 m_Size; // rdx
  int m_numBits; // eax
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::HashBucket_t *m_pMemory; // rdi
  bool v6; // zf
  int v7; // eax
  uint32 *m_pInt; // rcx

  m_numInts = this->m_bitsMigratedBuckets.m_numInts;
  this->m_cElements = 0;
  m_Size = this->m_vecHashBuckets.m_Size;
  this->m_nMaxElement = 0;
  this->m_iNodeFreeListHead = -1;
  this->m_nMaxRehashedBucket = -1;
  this->m_nMinRehashedBucket = m_Size;
  if ( m_numInts != 0 )
  {
    if ( this->m_bitsMigratedBuckets.m_pInt != 0 )
    {
      if ( m_numInts > 1 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      m_numBits = this->m_bitsMigratedBuckets.m_numBits;
      this->m_bitsMigratedBuckets.m_pInt = 0;
      if ( m_numBits <= 0 )
      {
        *(4LL * this->m_bitsMigratedBuckets.m_numInts - 4) &= GetEndMask(int)::bitStringEndMasks[m_numBits & 0x1F];
        memset(
          &this->m_bitsMigratedBuckets.m_pInt[this->m_bitsMigratedBuckets.m_numInts],
          0,
          4LL * -this->m_bitsMigratedBuckets.m_numInts);
      }
      m_Size = this->m_vecHashBuckets.m_Size;
      this->m_bitsMigratedBuckets.m_numInts = 0;
    }
    else
    {
      this->m_bitsMigratedBuckets.m_numInts = 0;
    }
  }
  else
  {
    v7 = this->m_bitsMigratedBuckets.m_numBits;
    if ( v7 <= 0 )
    {
      m_pInt = this->m_bitsMigratedBuckets.m_pInt;
      if ( m_pInt != 0 )
      {
        *(m_pInt - 1) &= GetEndMask(int)::bitStringEndMasks[v7 & 0x1F];
        m_Size = this->m_vecHashBuckets.m_Size;
      }
    }
  }
  m_pMemory = this->m_vecHashBuckets.m_Memory.m_pMemory;
  this->m_bitsMigratedBuckets.m_numBits = 0;
  memset(m_pMemory, 255, 4 * m_Size);
  if ( (this->m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition *,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol>>::Node_t,int>::Purge(&this->m_memNodes);
  if ( this->m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_bitsMigratedBuckets.m_pInt);
  v6 = (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_bitsMigratedBuckets.m_pInt = 0;
  this->m_vecHashBuckets.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition *,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
    if ( (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition *,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
  }
}


// CUtlHashMapLarge<unsigned int, int, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::~CUtlHashMapLarge  (line 122, @0x000000000322d270, libserver.so)  // inlines: FreeInts, Purge, RemoveAll, memset, ~CBitVecT, ~CLargeVarBitVec, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase
// calls: CVarBitVecBase<int, 32>::Resize, memset, CUtlMemory<CUtlHashMapLarge<unsigned int, int>::HashBucket_t, int>::Purge
// callers: GCSDK::CJobMgr::CJobMgr
void __fastcall CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::~CUtlHashMapLarge(
        CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >_0 *const this)
{
  int m_Size; // eax
  CLargeVarBitVec *p_m_bitsMigratedBuckets; // rdi
  bool v4; // zf

  m_Size = this->m_vecHashBuckets.m_Size;
  this->m_cElements = 0;
  p_m_bitsMigratedBuckets = &this->m_bitsMigratedBuckets;
  p_m_bitsMigratedBuckets[2].m_numBits = 0;
  p_m_bitsMigratedBuckets[1].m_FixedStorage[0] = -1;
  LODWORD(p_m_bitsMigratedBuckets[2].m_pInt) = -1;
  p_m_bitsMigratedBuckets[2].m_numInts = m_Size;
  CVarBitVecBase<int,32>::Resize(p_m_bitsMigratedBuckets, 0, 0);
  memset(this->m_vecHashBuckets.m_Memory.m_pMemory, 255, 4LL * this->m_vecHashBuckets.m_Size);
  if ( (this->m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_memNodes.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_memNodes.m_pMemory = 0;
    }
    this->m_memNodes.m_nAllocationCount = 0;
  }
  if ( this->m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_bitsMigratedBuckets.m_pInt);
  v4 = (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_bitsMigratedBuckets.m_pInt = 0;
  this->m_vecHashBuckets.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
    if ( (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
  }
}


// CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::~CUtlHashMapLarge  (line 122, @0x000000000322d350, libserver.so)  // inlines: FreeInts, Purge, RemoveAll, memset, ~CBitVecT, ~CLargeVarBitVec, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase
// calls: CVarBitVecBase<int, 32>::Resize, memset, CUtlMemory<CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*>::HashBucket_t, int>::Purge
// callers: GCSDK::CJobMgr::CJobMgr
void __fastcall CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::~CUtlHashMapLarge(
        CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >_0 *const this)
{
  int m_Size; // eax
  CLargeVarBitVec *p_m_bitsMigratedBuckets; // rdi
  bool v4; // zf

  m_Size = this->m_vecHashBuckets.m_Size;
  this->m_cElements = 0;
  p_m_bitsMigratedBuckets = &this->m_bitsMigratedBuckets;
  p_m_bitsMigratedBuckets[2].m_numBits = 0;
  p_m_bitsMigratedBuckets[1].m_FixedStorage[0] = -1;
  LODWORD(p_m_bitsMigratedBuckets[2].m_pInt) = -1;
  p_m_bitsMigratedBuckets[2].m_numInts = m_Size;
  CVarBitVecBase<int,32>::Resize(p_m_bitsMigratedBuckets, 0, 0);
  memset(this->m_vecHashBuckets.m_Memory.m_pMemory, 255, 4LL * this->m_vecHashBuckets.m_Size);
  if ( (this->m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_memNodes.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_memNodes.m_pMemory = 0;
    }
    this->m_memNodes.m_nAllocationCount = 0;
  }
  if ( this->m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_bitsMigratedBuckets.m_pInt);
  v4 = (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_bitsMigratedBuckets.m_pInt = 0;
  this->m_vecHashBuckets.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
    if ( (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
  }
}


// CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::~CUtlHashMapLarge  (line 122, @0x000000000322d430, libserver.so)  // inlines: FreeInts, Purge, RemoveAll, memset, ~CBitVecT, ~CLargeVarBitVec, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase
// calls: CVarBitVecBase<int, 32>::Resize, memset, CUtlMemory<CUtlHashMapLarge<long long unsigned int, int>::HashBucket_t, int>::Purge
// callers: GCSDK::CJobMgr::CJobMgr
void __fastcall CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::~CUtlHashMapLarge(
        CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >_0 *const this)
{
  int m_Size; // eax
  CLargeVarBitVec *p_m_bitsMigratedBuckets; // rdi
  bool v4; // zf

  m_Size = this->m_vecHashBuckets.m_Size;
  this->m_cElements = 0;
  p_m_bitsMigratedBuckets = &this->m_bitsMigratedBuckets;
  p_m_bitsMigratedBuckets[2].m_numBits = 0;
  p_m_bitsMigratedBuckets[1].m_FixedStorage[0] = -1;
  LODWORD(p_m_bitsMigratedBuckets[2].m_pInt) = -1;
  p_m_bitsMigratedBuckets[2].m_numInts = m_Size;
  CVarBitVecBase<int,32>::Resize(p_m_bitsMigratedBuckets, 0, 0);
  memset(this->m_vecHashBuckets.m_Memory.m_pMemory, 255, 4LL * this->m_vecHashBuckets.m_Size);
  if ( (this->m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_memNodes.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_memNodes.m_pMemory = 0;
    }
    this->m_memNodes.m_nAllocationCount = 0;
  }
  if ( this->m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_bitsMigratedBuckets.m_pInt);
  v4 = (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_bitsMigratedBuckets.m_pInt = 0;
  this->m_vecHashBuckets.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
    if ( (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
  }
}


// CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::~CUtlHashMapLarge  (line 122, @0x000000000322d510, libserver.so)  // inlines: FreeInts, Purge, RemoveAll, memset, ~CBitVecT, ~CLargeVarBitVec, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase
// calls: CVarBitVecBase<int, 32>::Resize, memset, CUtlMemory<CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*>::HashBucket_t, int>::Purge
void __fastcall CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::~CUtlHashMapLarge(
        CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> > *const this)
{
  int m_Size; // eax
  CLargeVarBitVec *p_m_bitsMigratedBuckets; // rdi
  bool v4; // zf

  m_Size = this->m_vecHashBuckets.m_Size;
  this->m_cElements = 0;
  p_m_bitsMigratedBuckets = &this->m_bitsMigratedBuckets;
  p_m_bitsMigratedBuckets[2].m_numBits = 0;
  p_m_bitsMigratedBuckets[1].m_FixedStorage[0] = -1;
  LODWORD(p_m_bitsMigratedBuckets[2].m_pInt) = -1;
  p_m_bitsMigratedBuckets[2].m_numInts = m_Size;
  CVarBitVecBase<int,32>::Resize(p_m_bitsMigratedBuckets, 0, 0);
  memset(this->m_vecHashBuckets.m_Memory.m_pMemory, 255, 4LL * this->m_vecHashBuckets.m_Size);
  if ( (this->m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_memNodes.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_memNodes.m_pMemory = 0;
    }
    this->m_memNodes.m_nAllocationCount = 0;
  }
  if ( this->m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_bitsMigratedBuckets.m_pInt);
  v4 = (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_bitsMigratedBuckets.m_pInt = 0;
  this->m_vecHashBuckets.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
    if ( (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
  }
}


// CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::~CUtlHashMapLarge  (line 122, @0x000000000322d5f0, libserver.so)  // inlines: FreeInts, Purge, RemoveAll, memset, ~CBitVecT, ~CLargeVarBitVec, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase
// calls: CVarBitVecBase<int, 32>::Resize, memset, CUtlMemory<CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::HashBucket_t, int>::Purge
void __fastcall CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::~CUtlHashMapLarge(
        CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr> *const this)
{
  int m_Size; // eax
  CLargeVarBitVec *p_m_bitsMigratedBuckets; // rdi
  bool v4; // zf

  m_Size = this->m_vecHashBuckets.m_Size;
  this->m_cElements = 0;
  p_m_bitsMigratedBuckets = &this->m_bitsMigratedBuckets;
  p_m_bitsMigratedBuckets[2].m_numBits = 0;
  p_m_bitsMigratedBuckets[1].m_FixedStorage[0] = -1;
  LODWORD(p_m_bitsMigratedBuckets[2].m_pInt) = -1;
  p_m_bitsMigratedBuckets[2].m_numInts = m_Size;
  CVarBitVecBase<int,32>::Resize(p_m_bitsMigratedBuckets, 0, 0);
  memset(this->m_vecHashBuckets.m_Memory.m_pMemory, 255, 4LL * this->m_vecHashBuckets.m_Size);
  if ( (this->m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_memNodes.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_memNodes.m_pMemory = 0;
    }
    this->m_memNodes.m_nAllocationCount = 0;
  }
  if ( this->m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_bitsMigratedBuckets.m_pInt);
  v4 = (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_bitsMigratedBuckets.m_pInt = 0;
  this->m_vecHashBuckets.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
    if ( (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
  }
}


// CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t, CUtlHashMapLargeDefEquals<long long int>, MurmurHash3Functor<long long int> >::~CUtlHashMapLarge  (line 122, @0x000000000322d6d0, libserver.so)  // inlines: FreeInts, Purge, RemoveAll, memset, ~CBitVecT, ~CLargeVarBitVec, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase
// calls: CVarBitVecBase<int, 32>::Resize, memset, CUtlMemory<CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t>::HashBucket_t, int>::Purge
// callers: GCSDK::CJobMgr::DumpJobSummary, GCSDK::CJobMgr::CJobMgr
void __fastcall CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::~CUtlHashMapLarge(
        CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >_0 *const this)
{
  int m_Size; // eax
  CLargeVarBitVec *p_m_bitsMigratedBuckets; // rdi
  bool v4; // zf

  m_Size = this->m_vecHashBuckets.m_Size;
  this->m_cElements = 0;
  p_m_bitsMigratedBuckets = &this->m_bitsMigratedBuckets;
  p_m_bitsMigratedBuckets[2].m_numBits = 0;
  p_m_bitsMigratedBuckets[1].m_FixedStorage[0] = -1;
  LODWORD(p_m_bitsMigratedBuckets[2].m_pInt) = -1;
  p_m_bitsMigratedBuckets[2].m_numInts = m_Size;
  CVarBitVecBase<int,32>::Resize(p_m_bitsMigratedBuckets, 0, 0);
  memset(this->m_vecHashBuckets.m_Memory.m_pMemory, 255, 4LL * this->m_vecHashBuckets.m_Size);
  if ( (this->m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_memNodes.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_memNodes.m_pMemory = 0;
    }
    this->m_memNodes.m_nAllocationCount = 0;
  }
  if ( this->m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_bitsMigratedBuckets.m_pInt);
  v4 = (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_bitsMigratedBuckets.m_pInt = 0;
  this->m_vecHashBuckets.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
    if ( (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
  }
}


// CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::Remove  (line 198, @0x000000000322f280, libserver.so)  // inlines: Find, FindInBucket, FreeNodeIndexToID, Get, IsValidIndex, ModPowerOf2<unsigned int, int>, MurmurHash3Item<long long unsigned int>, RemoveAt, RemoveNodeFromBucket, operator(), operator[]
// calls: MurmurHash3_32, CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::UnlinkNodeFromBucket
// callers: GCSDK::CJobMgr::CheckForJobTimeouts
bool __fastcall CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Remove(
        CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >_0 *const this,
        const CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::KeyType_t *const key)
{
  uint32 v4; // eax
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::HashBucket_t *m_pMemory; // rdi
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_iNode; // r13d
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v7; // r8
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v8; // rcx
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_iNextNode; // edx
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_nMinRehashedBucket; // r9d
  int i; // esi
  int v12; // ecx
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v13; // rcx
  int *v14; // rdi
  uint32 v15; // eax
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::HashBucket_t *v16; // r8
  int v17; // esi
  __int64 v18; // rbx
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t v19; // edi
  int v20; // edx
  int v21; // ecx
  int v22; // edx
  bool v23; // zf

  if ( this->m_cElements == 0 )
    return 0;
  v4 = MurmurHash3_32(key, 8u, 0x417u, 0);
  m_pMemory = this->m_vecHashBuckets.m_Memory.m_pMemory;
  m_iNode = m_pMemory[v4 & (this->m_vecHashBuckets.m_Size - 1)].m_iNode;
  if ( m_iNode == -1 )
  {
LABEL_7:
    m_nMinRehashedBucket = this->m_nMinRehashedBucket;
    for ( i = this->m_vecHashBuckets.m_Size >> 1; i >= m_nMinRehashedBucket; i >>= 1 )
    {
      v12 = v4 & (i - 1);
      if ( ((1 << (v4 & (i - 1))) & this->m_bitsMigratedBuckets.m_pInt[v12 >> 5]) == 0 )
      {
        m_iNextNode = m_pMemory[v12].m_iNode;
        if ( m_iNextNode != -1 )
        {
          v7 = this->m_memNodes.m_pMemory;
          v13 = &v7[m_iNextNode];
          if ( *key == v13->m_key )
            goto LABEL_15;
          while ( 1 )
          {
            m_iNextNode = v13->m_iNextNode;
            if ( m_iNextNode == -1 )
              break;
            v13 = &v7[m_iNextNode];
            if ( v13->m_key == *key )
              goto LABEL_15;
          }
        }
      }
    }
    return 0;
  }
  v7 = this->m_memNodes.m_pMemory;
  v8 = &v7[m_iNode];
  if ( *key != v8->m_key )
  {
    do
    {
      m_iNextNode = v8->m_iNextNode;
      if ( m_iNextNode == -1 )
        goto LABEL_7;
      v8 = &v7[m_iNextNode];
    }
    while ( v8->m_key != *key );
LABEL_15:
    m_iNode = m_iNextNode;
  }
  if ( m_iNode < 0 )
    return 1;
  if ( this->m_nMaxElement <= m_iNode )
    return 1;
  v14 = &v7[m_iNode];
  if ( v14[3] < -1 )
    return 1;
  v15 = MurmurHash3_32(v14, 8u, 0x417u, 0);
  v16 = this->m_vecHashBuckets.m_Memory.m_pMemory;
  v17 = v15 & (this->m_vecHashBuckets.m_Size - 1);
  v18 = v16[v17].m_iNode;
  if ( v18 != -1 )
  {
    if ( v18 == m_iNode )
    {
LABEL_37:
      v22 = m_iNode;
      goto LABEL_33;
    }
    while ( 1 )
    {
      LODWORD(v18) = this->m_memNodes.m_pMemory[v18].m_iNextNode;
      if ( v18 == -1 )
        break;
      if ( v18 == m_iNode )
        goto LABEL_37;
    }
  }
  v19 = this->m_nMinRehashedBucket;
  v20 = this->m_vecHashBuckets.m_Size >> 1;
  if ( v20 < v19 )
    return 1;
  while ( 1 )
  {
    v21 = v15 & (v20 - 1);
    if ( ((1 << (v15 & (v20 - 1))) & this->m_bitsMigratedBuckets.m_pInt[v21 >> 5]) == 0 )
    {
      v18 = v16[v21].m_iNode;
      if ( v18 != -1 )
        break;
    }
LABEL_26:
    v20 >>= 1;
    if ( v20 < v19 )
      return 1;
  }
  while ( v18 != m_iNode )
  {
    LODWORD(v18) = this->m_memNodes.m_pMemory[v18].m_iNextNode;
    if ( v18 == -1 )
      goto LABEL_26;
  }
  v22 = m_iNode;
  v17 = v21;
LABEL_33:
  CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::UnlinkNodeFromBucket(
    this,
    v17,
    v22);
  this->m_memNodes.m_pMemory[v18].m_iNextNode = -3 - this->m_iNodeFreeListHead;
  v23 = this->m_cElements-- == 1;
  this->m_iNodeFreeListHead = v18;
  if ( v23 )
    this->m_nMinRehashedBucket = this->m_vecHashBuckets.m_Size;
  return 1;
}


// CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, MurmurHash3Functor<item_definition_index_t> >::InsertInternal  (line 358, @0x0000000002ebc2e0, libserver.so)  // inlines: AddMultipleToTail, AllocNode, Bitvec_Set, CopyConstruct<CEconItemDefinition*>, CopyConstruct<item_definition_index_t>, EnsureCapacity, FindInBucket, FreeNodeIDToIndex, Get, GrowMemory, GrowVector, IncrementalRehash, InsertMultipleBefore, ModPowerOf2<unsigned int, int>, MurmurHash3Item<item_definition_index_t>, RehashNodesInBucket, Set, memcpy, memset, operator(), operator==, operator[]
// calls: memset, MurmurHash3_32, CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, MurmurHash3Functor<item_definition_index_t> >::UnlinkNodeFromBucket, CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, MurmurHash3Functor<item_definition_index_t> >::LinkNodeIntoBucket, CVarBitVecBase<int, 32>::Resize, CUtlMemory<CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*>::Node_t, int>::Grow, CUtlMemory<CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*>::HashBucket_t, int>::Grow, memcpy
// callers: CEconItemSchema::BInitItems, CEconItemSchema::ItemTesting_CreateTestItemDefinitionNoClone
int __fastcall CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition *,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::InsertInternal(
        CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> > *const this,
        const CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::KeyType_t *const key,
        const CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::ElemType_t *const insert,
        CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::EInsertPolicy ePolicy)
{
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t m_cElements; // eax
  int m_Size; // edx
  int v7; // r12d
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t v8; // r13d
  uint32 m_nGrowSize; // eax
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v10; // rsi
  int v11; // ebx
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::HashBucket_t *v12; // rdi
  size_t v13; // rdx
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t v14; // edx
  int m_nMinRehashedBucket; // r13d
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t m_nMaxRehashedBucket; // edi
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::HashBucket_t *v17; // r9
  __int64 v18; // rax
  uint32 *m_pInt; // rdx
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t m_iNode; // ebx
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v21; // rdi
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t m_iNextNode; // r12d
  uint32 v23; // r14d
  int v24; // eax
  bool v25; // cc
  int v26; // r13d
  uint32 *i; // rax
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t v28; // ebx
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v29; // rdi
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t v30; // r12d
  uint32 v31; // r14d
  __int64 v32; // rcx
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v33; // rsi
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t m_nMaxElement; // ebx
  __int64 v35; // rdx
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v36; // rsi
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t v37; // edi
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v38; // rax
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v39; // rdx
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t v41; // eax
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v42; // rdx
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t v43; // eax
  int m_nAllocationCount; // eax
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::HashBucket_t *v45; // rax
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *m_pMemory; // rbx
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v47; // rax
  uint32 hash; // [rsp+18h] [rbp-38h]
  int cBucketsToModAgainst; // [rsp+1Ch] [rbp-34h]

  m_cElements = this->m_cElements;
  m_Size = this->m_vecHashBuckets.m_Size;
  if ( m_cElements >= this->m_vecHashBuckets.m_Size )
  {
    v7 = 16;
    v8 = this->m_vecHashBuckets.m_Size;
    if ( 2 * m_Size > 15 )
      v7 = 2 * m_Size;
    if ( v7 > this->m_memNodes.m_nAllocationCount )
    {
      m_nGrowSize = this->m_memNodes.m_nGrowSize;
      if ( (m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (m_nGrowSize & 0xC0000000) != 0 )
        {
          m_pMemory = this->m_memNodes.m_pMemory;
          v47 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v7);
          this->m_memNodes.m_pMemory = v47;
          if ( m_pMemory != 0 )
            memcpy(v47, m_pMemory, 24LL * this->m_memNodes.m_nAllocationCount);
          this->m_memNodes.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          v10 = this->m_memNodes.m_pMemory;
          if ( v10 != 0 )
            this->m_memNodes.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v10, 24LL * v7);
          else
            this->m_memNodes.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v7);
        }
        v8 = this->m_vecHashBuckets.m_Size;
        this->m_memNodes.m_nAllocationCount = v7;
      }
    }
    if ( v7 > v8 )
    {
      v11 = v8;
      if ( v8 > 15 || (v11 = 16, v7 > 16) )
      {
        do
          v11 *= 2;
        while ( v7 > v11 );
      }
      if ( v11 == v8 )
      {
        v12 = &this->m_vecHashBuckets.m_Memory.m_pMemory[v8];
        v13 = 0;
      }
      else
      {
        m_nAllocationCount = this->m_vecHashBuckets.m_Memory.m_nAllocationCount;
        if ( m_nAllocationCount < v11 )
          CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition *,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::HashBucket_t,int>::Grow(
            &this->m_vecHashBuckets.m_Memory,
            v11 - m_nAllocationCount);
        v45 = this->m_vecHashBuckets.m_Memory.m_pMemory;
        this->m_vecHashBuckets.m_Size = v11;
        v13 = 4LL * (v11 - v8);
        v12 = &v45[v8];
      }
      memset(v12, -1, v13);
      m_cElements = this->m_cElements;
      this->m_nMaxRehashedBucket = v8;
      this->m_nMinRehashedBucket = 0;
      if ( m_cElements <= 0 )
      {
        this->m_nMinRehashedBucket = this->m_vecHashBuckets.m_Size;
        goto LABEL_18;
      }
      CVarBitVecBase<int,32>::Resize(&this->m_bitsMigratedBuckets, 0, 0);
      CVarBitVecBase<int,32>::Resize(&this->m_bitsMigratedBuckets, this->m_vecHashBuckets.m_Size, 0);
    }
    v14 = this->m_memNodes.m_nAllocationCount;
    if ( v14 > this->m_cElements )
      goto LABEL_19;
    goto LABEL_53;
  }
LABEL_18:
  v14 = this->m_memNodes.m_nAllocationCount;
  if ( v14 <= m_cElements )
LABEL_53:
    CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition *,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::Node_t,int>::Grow(
      &this->m_memNodes,
      2 * v14);
LABEL_19:
  m_nMinRehashedBucket = this->m_nMinRehashedBucket;
  m_nMaxRehashedBucket = this->m_nMaxRehashedBucket;
  if ( m_nMinRehashedBucket < m_nMaxRehashedBucket )
  {
    v17 = this->m_vecHashBuckets.m_Memory.m_pMemory;
    v18 = m_nMinRehashedBucket;
    while ( 1 )
    {
      if ( v17[v18].m_iNode != -1 )
      {
        m_pInt = this->m_bitsMigratedBuckets.m_pInt;
        if ( ((1 << m_nMinRehashedBucket) & m_pInt[m_nMinRehashedBucket >> 5]) == 0 )
          break;
      }
      ++m_nMinRehashedBucket;
      ++v18;
      this->m_nMinRehashedBucket = m_nMinRehashedBucket;
      if ( m_nMinRehashedBucket == m_nMaxRehashedBucket )
        goto LABEL_56;
    }
    m_pInt[m_nMinRehashedBucket >> 5] |= 1 << m_nMinRehashedBucket;
    m_iNode = this->m_vecHashBuckets.m_Memory.m_pMemory[v18].m_iNode;
    if ( m_iNode != -1 )
    {
      while ( 1 )
      {
        v21 = &this->m_memNodes.m_pMemory[m_iNode];
        m_iNextNode = v21->m_iNextNode;
        v23 = (this->m_vecHashBuckets.m_Size - 1) & MurmurHash3_32(v21, 2u, 0x417u, 0);
        if ( m_nMinRehashedBucket != v23 )
        {
          CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition *,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::UnlinkNodeFromBucket(
            this,
            m_nMinRehashedBucket,
            m_iNode);
          CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition *,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::LinkNodeIntoBucket(
            this,
            v23,
            m_iNode);
        }
        if ( m_iNextNode == -1 )
          break;
        m_iNode = m_iNextNode;
      }
    }
    v24 = this->m_nMinRehashedBucket + 1;
    v25 = v24 < this->m_nMaxRehashedBucket;
    this->m_nMinRehashedBucket = v24;
    if ( !v25 )
    {
LABEL_56:
      v41 = this->m_vecHashBuckets.m_Size;
      this->m_nMaxRehashedBucket = -1;
      this->m_nMinRehashedBucket = v41;
      CVarBitVecBase<int,32>::Resize(&this->m_bitsMigratedBuckets, 0, 0);
    }
  }
  hash = MurmurHash3_32(key, 2u, 0x417u, 0);
  cBucketsToModAgainst = this->m_vecHashBuckets.m_Size >> 1;
  v26 = hash & (cBucketsToModAgainst - 1);
  if ( v26 >= this->m_nMinRehashedBucket )
  {
    for ( i = this->m_bitsMigratedBuckets.m_pInt; ((1 << v26) & i[v26 >> 5]) == 0; i = this->m_bitsMigratedBuckets.m_pInt )
    {
      i[v26 >> 5] |= 1 << v26;
      v28 = this->m_vecHashBuckets.m_Memory.m_pMemory[v26].m_iNode;
      if ( v28 != -1 )
      {
        while ( 1 )
        {
          v29 = &this->m_memNodes.m_pMemory[v28];
          v30 = v29->m_iNextNode;
          v31 = (this->m_vecHashBuckets.m_Size - 1) & MurmurHash3_32(v29, 2u, 0x417u, 0);
          if ( v26 != v31 )
          {
            CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition *,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::UnlinkNodeFromBucket(
              this,
              v26,
              v28);
            CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition *,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::LinkNodeIntoBucket(
              this,
              v31,
              v28);
          }
          if ( v30 == -1 )
            break;
          v28 = v30;
        }
      }
      cBucketsToModAgainst >>= 1;
      v26 = hash & (cBucketsToModAgainst - 1);
      if ( this->m_nMinRehashedBucket > v26 )
        break;
    }
  }
  v32 = this->m_cElements;
  if ( ePolicy == CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::EInsertPolicy::eInsert_CreateDupes
    || v32 == 0
    || (m_nMaxElement = this->m_vecHashBuckets.m_Memory.m_pMemory[hash & (this->m_vecHashBuckets.m_Size - 1)].m_iNode) == -1 )
  {
    v33 = this->m_memNodes.m_pMemory;
  }
  else
  {
    v33 = this->m_memNodes.m_pMemory;
    v42 = &v33[m_nMaxElement];
    if ( v42->m_key.m_Data == key->m_Data )
    {
LABEL_62:
      if ( ePolicy == CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::EInsertPolicy::eInsert_UpdateExisting )
        v33[m_nMaxElement].m_elem = *insert;
      return m_nMaxElement;
    }
    while ( 1 )
    {
      v43 = v42->m_iNextNode;
      if ( v43 == -1 )
        break;
      v42 = &v33[v43];
      if ( key->m_Data == v42->m_key.m_Data )
      {
        m_nMaxElement = v43;
        goto LABEL_62;
      }
    }
  }
  m_nMaxElement = this->m_nMaxElement;
  if ( m_nMaxElement == v32 )
  {
    v35 = v32;
    this->m_cElements = v32 + 1;
    this->m_nMaxElement = v32 + 1;
    v33[v32].m_iNextNode = -1;
    v38 = &this->m_memNodes.m_pMemory[v32];
    if ( v38 != 0 )
      goto LABEL_46;
LABEL_55:
    v39 = 0;
    goto LABEL_47;
  }
  m_nMaxElement = this->m_iNodeFreeListHead;
  v35 = m_nMaxElement;
  v36 = &v33[v35];
  v37 = -3 - v36->m_iNextNode;
  this->m_cElements = v32 + 1;
  this->m_iNodeFreeListHead = v37;
  v36->m_iNextNode = -1;
  v38 = &this->m_memNodes.m_pMemory[v35];
  if ( v38 == 0 )
    goto LABEL_55;
LABEL_46:
  v38->m_key = key->m_Data;
  v39 = &this->m_memNodes.m_pMemory[v35];
LABEL_47:
  if ( v39 != -8LL )
    v39->m_elem = *insert;
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition *,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::LinkNodeIntoBucket(
    this,
    hash & (this->m_vecHashBuckets.m_Size - 1),
    m_nMaxElement);
  return m_nMaxElement;
}


// CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functor<CEconSchemaSymbol> >::InsertInternal  (line 358, @0x0000000002ebc930, libserver.so)  // inlines: AddMultipleToTail, AllocNode, Bitvec_Set, CEconSchemaSymbol, CUtlSymbolLarge, CopyConstruct<CEconItemDefinition*>, CopyConstruct<CEconSchemaSymbol>, EnsureCapacity, FindInBucket, FreeNodeIDToIndex, Get, GrowMemory, GrowVector, IncrementalRehash, InsertMultipleBefore, ModPowerOf2<unsigned int, int>, MurmurHash3Item<CEconSchemaSymbol>, RehashNodesInBucket, Set, memcpy, memset, operator(), operator==, operator[]
// calls: memset, MurmurHash3_32, CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functor<CEconSchemaSymbol> >::UnlinkNodeFromBucket, CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functor<CEconSchemaSymbol> >::LinkNodeIntoBucket, CVarBitVecBase<int, 32>::Resize, CUtlMemory<CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*>::Node_t, int>::Grow, CUtlMemory<CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*>::HashBucket_t, int>::Grow, memcpy
// callers: CEconItemSchema::ItemTesting_CreateTestItemDefinitionNoClone
int __fastcall CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition *,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol>>::InsertInternal(
        CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> > *const this,
        const CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::KeyType_t *const key,
        const CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::ElemType_t *const insert,
        CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::EInsertPolicy ePolicy)
{
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::IndexType_t m_cElements; // eax
  int m_Size; // edx
  int v7; // r12d
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::IndexType_t v8; // r13d
  uint32 m_nGrowSize; // eax
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::Node_t *v10; // rsi
  int v11; // ebx
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::HashBucket_t *v12; // rdi
  size_t v13; // rdx
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::IndexType_t v14; // edx
  int m_nMinRehashedBucket; // r13d
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::IndexType_t m_nMaxRehashedBucket; // edi
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::HashBucket_t *v17; // r9
  __int64 v18; // rax
  uint32 *m_pInt; // rdx
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::IndexType_t m_iNode; // ebx
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::Node_t *v21; // rdi
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::IndexType_t m_iNextNode; // r12d
  uint32 v23; // r14d
  int v24; // eax
  bool v25; // cc
  int v26; // r13d
  uint32 *i; // rax
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::IndexType_t v28; // ebx
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::Node_t *v29; // rdi
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::IndexType_t v30; // r12d
  uint32 v31; // r14d
  __int64 v32; // rcx
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::Node_t *v33; // rsi
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::IndexType_t m_nMaxElement; // ebx
  __int64 v35; // rdx
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::Node_t *v36; // rsi
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::IndexType_t v37; // edi
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::Node_t *v38; // rax
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::Node_t *v39; // rdx
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::IndexType_t v41; // eax
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::Node_t *v42; // rdx
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::IndexType_t v43; // eax
  int m_nAllocationCount; // eax
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::HashBucket_t *v45; // rax
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::Node_t *m_pMemory; // rbx
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::Node_t *v47; // rax
  uint32 hash; // [rsp+18h] [rbp-38h]
  int cBucketsToModAgainst; // [rsp+1Ch] [rbp-34h]

  m_cElements = this->m_cElements;
  m_Size = this->m_vecHashBuckets.m_Size;
  if ( m_cElements >= this->m_vecHashBuckets.m_Size )
  {
    v7 = 16;
    v8 = this->m_vecHashBuckets.m_Size;
    if ( 2 * m_Size > 15 )
      v7 = 2 * m_Size;
    if ( v7 > this->m_memNodes.m_nAllocationCount )
    {
      m_nGrowSize = this->m_memNodes.m_nGrowSize;
      if ( (m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (m_nGrowSize & 0xC0000000) != 0 )
        {
          m_pMemory = this->m_memNodes.m_pMemory;
          v47 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v7);
          this->m_memNodes.m_pMemory = v47;
          if ( m_pMemory != 0 )
            memcpy(v47, m_pMemory, 24LL * this->m_memNodes.m_nAllocationCount);
          this->m_memNodes.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          v10 = this->m_memNodes.m_pMemory;
          if ( v10 != 0 )
            this->m_memNodes.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v10, 24LL * v7);
          else
            this->m_memNodes.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v7);
        }
        v8 = this->m_vecHashBuckets.m_Size;
        this->m_memNodes.m_nAllocationCount = v7;
      }
    }
    if ( v7 > v8 )
    {
      v11 = v8;
      if ( v8 > 15 || (v11 = 16, v7 > 16) )
      {
        do
          v11 *= 2;
        while ( v7 > v11 );
      }
      if ( v11 == v8 )
      {
        v12 = &this->m_vecHashBuckets.m_Memory.m_pMemory[v8];
        v13 = 0;
      }
      else
      {
        m_nAllocationCount = this->m_vecHashBuckets.m_Memory.m_nAllocationCount;
        if ( m_nAllocationCount < v11 )
          CUtlMemory<CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition *,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol>>::HashBucket_t,int>::Grow(
            &this->m_vecHashBuckets.m_Memory,
            v11 - m_nAllocationCount);
        v45 = this->m_vecHashBuckets.m_Memory.m_pMemory;
        this->m_vecHashBuckets.m_Size = v11;
        v13 = 4LL * (v11 - v8);
        v12 = &v45[v8];
      }
      memset(v12, -1, v13);
      m_cElements = this->m_cElements;
      this->m_nMaxRehashedBucket = v8;
      this->m_nMinRehashedBucket = 0;
      if ( m_cElements <= 0 )
      {
        this->m_nMinRehashedBucket = this->m_vecHashBuckets.m_Size;
        goto LABEL_18;
      }
      CVarBitVecBase<int,32>::Resize(&this->m_bitsMigratedBuckets, 0, 0);
      CVarBitVecBase<int,32>::Resize(&this->m_bitsMigratedBuckets, this->m_vecHashBuckets.m_Size, 0);
    }
    v14 = this->m_memNodes.m_nAllocationCount;
    if ( v14 > this->m_cElements )
      goto LABEL_19;
    goto LABEL_53;
  }
LABEL_18:
  v14 = this->m_memNodes.m_nAllocationCount;
  if ( v14 <= m_cElements )
LABEL_53:
    CUtlMemory<CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition *,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol>>::Node_t,int>::Grow(
      &this->m_memNodes,
      2 * v14);
LABEL_19:
  m_nMinRehashedBucket = this->m_nMinRehashedBucket;
  m_nMaxRehashedBucket = this->m_nMaxRehashedBucket;
  if ( m_nMinRehashedBucket < m_nMaxRehashedBucket )
  {
    v17 = this->m_vecHashBuckets.m_Memory.m_pMemory;
    v18 = m_nMinRehashedBucket;
    while ( 1 )
    {
      if ( v17[v18].m_iNode != -1 )
      {
        m_pInt = this->m_bitsMigratedBuckets.m_pInt;
        if ( ((1 << m_nMinRehashedBucket) & m_pInt[m_nMinRehashedBucket >> 5]) == 0 )
          break;
      }
      ++m_nMinRehashedBucket;
      ++v18;
      this->m_nMinRehashedBucket = m_nMinRehashedBucket;
      if ( m_nMinRehashedBucket == m_nMaxRehashedBucket )
        goto LABEL_56;
    }
    m_pInt[m_nMinRehashedBucket >> 5] |= 1 << m_nMinRehashedBucket;
    m_iNode = this->m_vecHashBuckets.m_Memory.m_pMemory[v18].m_iNode;
    if ( m_iNode != -1 )
    {
      while ( 1 )
      {
        v21 = &this->m_memNodes.m_pMemory[m_iNode];
        m_iNextNode = v21->m_iNextNode;
        v23 = (this->m_vecHashBuckets.m_Size - 1) & MurmurHash3_32(v21, 8u, 0x417u, 0);
        if ( m_nMinRehashedBucket != v23 )
        {
          CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition *,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol>>::UnlinkNodeFromBucket(
            this,
            m_nMinRehashedBucket,
            m_iNode);
          CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition *,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol>>::LinkNodeIntoBucket(
            this,
            v23,
            m_iNode);
        }
        if ( m_iNextNode == -1 )
          break;
        m_iNode = m_iNextNode;
      }
    }
    v24 = this->m_nMinRehashedBucket + 1;
    v25 = v24 < this->m_nMaxRehashedBucket;
    this->m_nMinRehashedBucket = v24;
    if ( !v25 )
    {
LABEL_56:
      v41 = this->m_vecHashBuckets.m_Size;
      this->m_nMaxRehashedBucket = -1;
      this->m_nMinRehashedBucket = v41;
      CVarBitVecBase<int,32>::Resize(&this->m_bitsMigratedBuckets, 0, 0);
    }
  }
  hash = MurmurHash3_32(key, 8u, 0x417u, 0);
  cBucketsToModAgainst = this->m_vecHashBuckets.m_Size >> 1;
  v26 = hash & (cBucketsToModAgainst - 1);
  if ( v26 >= this->m_nMinRehashedBucket )
  {
    for ( i = this->m_bitsMigratedBuckets.m_pInt; ((1 << v26) & i[v26 >> 5]) == 0; i = this->m_bitsMigratedBuckets.m_pInt )
    {
      i[v26 >> 5] |= 1 << v26;
      v28 = this->m_vecHashBuckets.m_Memory.m_pMemory[v26].m_iNode;
      if ( v28 != -1 )
      {
        while ( 1 )
        {
          v29 = &this->m_memNodes.m_pMemory[v28];
          v30 = v29->m_iNextNode;
          v31 = (this->m_vecHashBuckets.m_Size - 1) & MurmurHash3_32(v29, 8u, 0x417u, 0);
          if ( v26 != v31 )
          {
            CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition *,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol>>::UnlinkNodeFromBucket(
              this,
              v26,
              v28);
            CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition *,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol>>::LinkNodeIntoBucket(
              this,
              v31,
              v28);
          }
          if ( v30 == -1 )
            break;
          v28 = v30;
        }
      }
      cBucketsToModAgainst >>= 1;
      v26 = hash & (cBucketsToModAgainst - 1);
      if ( this->m_nMinRehashedBucket > v26 )
        break;
    }
  }
  v32 = this->m_cElements;
  if ( ePolicy == CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::EInsertPolicy::eInsert_CreateDupes
    || v32 == 0
    || (m_nMaxElement = this->m_vecHashBuckets.m_Memory.m_pMemory[hash & (this->m_vecHashBuckets.m_Size - 1)].m_iNode) == -1 )
  {
    v33 = this->m_memNodes.m_pMemory;
  }
  else
  {
    v33 = this->m_memNodes.m_pMemory;
    v42 = &v33[m_nMaxElement];
    if ( key->u.m_Id == v42->m_key.u.m_Id )
    {
LABEL_62:
      if ( ePolicy == CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::EInsertPolicy::eInsert_UpdateExisting )
        v33[m_nMaxElement].m_elem = *insert;
      return m_nMaxElement;
    }
    while ( 1 )
    {
      v43 = v42->m_iNextNode;
      if ( v43 == -1 )
        break;
      v42 = &v33[v43];
      if ( key->u.m_Id == v42->m_key.u.m_Id )
      {
        m_nMaxElement = v43;
        goto LABEL_62;
      }
    }
  }
  m_nMaxElement = this->m_nMaxElement;
  if ( m_nMaxElement == v32 )
  {
    v35 = v32;
    this->m_cElements = v32 + 1;
    this->m_nMaxElement = v32 + 1;
    v33[v32].m_iNextNode = -1;
    v38 = &this->m_memNodes.m_pMemory[v32];
    if ( v38 != 0 )
      goto LABEL_46;
LABEL_55:
    v39 = 0;
    goto LABEL_47;
  }
  m_nMaxElement = this->m_iNodeFreeListHead;
  v35 = m_nMaxElement;
  v36 = &v33[v35];
  v37 = -3 - v36->m_iNextNode;
  this->m_cElements = v32 + 1;
  this->m_iNodeFreeListHead = v37;
  v36->m_iNextNode = -1;
  v38 = &this->m_memNodes.m_pMemory[v35];
  if ( v38 == 0 )
    goto LABEL_55;
LABEL_46:
  v38->m_key = key->u.m_Id;
  v39 = &this->m_memNodes.m_pMemory[v35];
LABEL_47:
  if ( v39 != -8LL )
    v39->m_elem = *insert;
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition *,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol>>::LinkNodeIntoBucket(
    this,
    hash & (this->m_vecHashBuckets.m_Size - 1),
    m_nMaxElement);
  return m_nMaxElement;
}


// CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::EnsureCapacity  (line 420, @0x0000000003231110, libserver.so)  // inlines: AddMultipleToTail, EnsureCapacity, GrowMemory, GrowVector, InsertMultipleBefore, memcpy, memset, operator[]
// calls: memset, CVarBitVecBase<int, 32>::Resize, CUtlMemory<CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*>::HashBucket_t, int>::Grow, memcpy
// callers: GCSDK::CJobMgr::InsertJob
void __fastcall CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::EnsureCapacity(
        CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >_0 *const this,
        int amount)
{
  uint32 m_nGrowSize; // eax
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v5; // rsi
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_Size; // r14d
  int v7; // ebx
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::HashBucket_t *v8; // rdi
  size_t v9; // rdx
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_cElements; // r9d
  int m_nAllocationCount; // eax
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::HashBucket_t *v12; // rax
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *m_pMemory; // rbx
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v14; // rax

  if ( amount > this->m_memNodes.m_nAllocationCount )
  {
    m_nGrowSize = this->m_memNodes.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_memNodes.m_pMemory;
        v14 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * amount);
        this->m_memNodes.m_pMemory = v14;
        if ( m_pMemory != 0 )
          memcpy(v14, m_pMemory, 24LL * this->m_memNodes.m_nAllocationCount);
        this->m_memNodes.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v5 = this->m_memNodes.m_pMemory;
        if ( v5 != 0 )
          this->m_memNodes.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v5, 24LL * amount);
        else
          this->m_memNodes.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 24LL * amount);
      }
      this->m_memNodes.m_nAllocationCount = amount;
    }
  }
  m_Size = this->m_vecHashBuckets.m_Size;
  if ( amount > this->m_vecHashBuckets.m_Size )
  {
    v7 = this->m_vecHashBuckets.m_Size;
    if ( m_Size > 15 || (v7 = 16, amount > 16) )
    {
      do
        v7 *= 2;
      while ( amount > v7 );
    }
    if ( v7 == m_Size )
    {
      v8 = &this->m_vecHashBuckets.m_Memory.m_pMemory[m_Size];
      v9 = 0;
    }
    else
    {
      m_nAllocationCount = this->m_vecHashBuckets.m_Memory.m_nAllocationCount;
      if ( m_nAllocationCount < v7 )
        CUtlMemory<CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::HashBucket_t,int>::Grow(
          &this->m_vecHashBuckets.m_Memory,
          v7 - m_nAllocationCount);
      v12 = this->m_vecHashBuckets.m_Memory.m_pMemory;
      this->m_vecHashBuckets.m_Size = v7;
      v9 = 4LL * (v7 - m_Size);
      v8 = &v12[m_Size];
    }
    memset(v8, -1, v9);
    m_cElements = this->m_cElements;
    this->m_nMaxRehashedBucket = m_Size;
    this->m_nMinRehashedBucket = 0;
    if ( m_cElements > 0 )
    {
      CVarBitVecBase<int,32>::Resize(&this->m_bitsMigratedBuckets, 0, 0);
      CVarBitVecBase<int,32>::Resize(&this->m_bitsMigratedBuckets, this->m_vecHashBuckets.m_Size, 0);
    }
    else
    {
      this->m_nMinRehashedBucket = this->m_vecHashBuckets.m_Size;
    }
  }
}


// CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t, CUtlHashMapLargeDefEquals<long long int>, MurmurHash3Functor<long long int> >::EnsureCapacity  (line 420, @0x00000000032313c0, libserver.so)  // inlines: AddMultipleToTail, EnsureCapacity, GrowMemory, GrowVector, InsertMultipleBefore, memcpy, memset, operator[]
// calls: memset, CVarBitVecBase<int, 32>::Resize, CUtlMemory<CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t>::HashBucket_t, int>::Grow, memcpy
// callers: GCSDK::CJobMgr::AccumulateStatsofJob, GCSDK::CJobMgr::DumpJobSummary
void __fastcall CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::EnsureCapacity(
        CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >_0 *const this,
        int amount)
{
  uint32 m_nGrowSize; // eax
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::Node_t *v5; // rsi
  __int64 v6; // rax
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::IndexType_t m_Size; // r14d
  int v8; // ebx
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::HashBucket_t *v9; // rdi
  size_t v10; // rdx
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::IndexType_t m_cElements; // r10d
  int m_nAllocationCount; // eax
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::HashBucket_t *v13; // rax
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::Node_t *m_pMemory; // rbx
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::Node_t *v15; // rax

  if ( amount > this->m_memNodes.m_nAllocationCount )
  {
    m_nGrowSize = this->m_memNodes.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_memNodes.m_pMemory;
        v15 = (**g_pMemAlloc)(g_pMemAlloc, 240LL * amount);
        this->m_memNodes.m_pMemory = v15;
        if ( m_pMemory != 0 )
          memcpy(v15, m_pMemory, 240LL * this->m_memNodes.m_nAllocationCount);
        this->m_memNodes.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v5 = this->m_memNodes.m_pMemory;
        v6 = *g_pMemAlloc;
        if ( v5 != 0 )
          this->m_memNodes.m_pMemory = (*(v6 + 8))(g_pMemAlloc, v5, 240LL * amount);
        else
          this->m_memNodes.m_pMemory = (*v6)(g_pMemAlloc, 240LL * amount);
      }
      this->m_memNodes.m_nAllocationCount = amount;
    }
  }
  m_Size = this->m_vecHashBuckets.m_Size;
  if ( amount > this->m_vecHashBuckets.m_Size )
  {
    v8 = this->m_vecHashBuckets.m_Size;
    if ( m_Size > 15 || (v8 = 16, amount > 16) )
    {
      do
        v8 *= 2;
      while ( amount > v8 );
    }
    if ( v8 == m_Size )
    {
      v9 = &this->m_vecHashBuckets.m_Memory.m_pMemory[m_Size];
      v10 = 0;
    }
    else
    {
      m_nAllocationCount = this->m_vecHashBuckets.m_Memory.m_nAllocationCount;
      if ( m_nAllocationCount < v8 )
        CUtlMemory<CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::HashBucket_t,int>::Grow(
          &this->m_vecHashBuckets.m_Memory,
          v8 - m_nAllocationCount);
      v13 = this->m_vecHashBuckets.m_Memory.m_pMemory;
      this->m_vecHashBuckets.m_Size = v8;
      v10 = 4LL * (v8 - m_Size);
      v9 = &v13[m_Size];
    }
    memset(v9, -1, v10);
    m_cElements = this->m_cElements;
    this->m_nMaxRehashedBucket = m_Size;
    this->m_nMinRehashedBucket = 0;
    if ( m_cElements > 0 )
    {
      CVarBitVecBase<int,32>::Resize(&this->m_bitsMigratedBuckets, 0, 0);
      CVarBitVecBase<int,32>::Resize(&this->m_bitsMigratedBuckets, this->m_vecHashBuckets.m_Size, 0);
    }
    else
    {
      this->m_nMinRehashedBucket = this->m_vecHashBuckets.m_Size;
    }
  }
}


// CUtlHashMapLarge<unsigned int, int, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::EnsureCapacity  (line 420, @0x0000000003231680, libserver.so)  // inlines: AddMultipleToTail, EnsureCapacity, GrowMemory, GrowVector, InsertMultipleBefore, memcpy, memset, operator[]
// calls: memset, CVarBitVecBase<int, 32>::Resize, CUtlMemory<CUtlHashMapLarge<unsigned int, int>::HashBucket_t, int>::Grow, memcpy
// callers: GCSDK::CJobMgr::RecordOrphanedMessage
void __fastcall CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::EnsureCapacity(
        CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >_0 *const this,
        int amount)
{
  uint32 m_nGrowSize; // eax
  CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v5; // rsi
  CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_Size; // r14d
  int v7; // ebx
  CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v8; // rdi
  size_t v9; // rdx
  CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_cElements; // eax
  int m_nAllocationCount; // eax
  CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v12; // rax
  CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *m_pMemory; // rbx
  CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v14; // rax

  if ( amount > this->m_memNodes.m_nAllocationCount )
  {
    m_nGrowSize = this->m_memNodes.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_memNodes.m_pMemory;
        v14 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * amount);
        this->m_memNodes.m_pMemory = v14;
        if ( m_pMemory != 0 )
          memcpy(v14, m_pMemory, 12LL * this->m_memNodes.m_nAllocationCount);
        this->m_memNodes.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v5 = this->m_memNodes.m_pMemory;
        if ( v5 != 0 )
          this->m_memNodes.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v5, 12LL * amount);
        else
          this->m_memNodes.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 12LL * amount);
      }
      this->m_memNodes.m_nAllocationCount = amount;
    }
  }
  m_Size = this->m_vecHashBuckets.m_Size;
  if ( amount > this->m_vecHashBuckets.m_Size )
  {
    v7 = this->m_vecHashBuckets.m_Size;
    if ( m_Size > 15 || (v7 = 16, amount > 16) )
    {
      do
        v7 *= 2;
      while ( amount > v7 );
    }
    if ( v7 == m_Size )
    {
      v8 = &this->m_vecHashBuckets.m_Memory.m_pMemory[m_Size];
      v9 = 0;
    }
    else
    {
      m_nAllocationCount = this->m_vecHashBuckets.m_Memory.m_nAllocationCount;
      if ( m_nAllocationCount < v7 )
        CUtlMemory<CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Grow(
          &this->m_vecHashBuckets.m_Memory,
          v7 - m_nAllocationCount);
      v12 = this->m_vecHashBuckets.m_Memory.m_pMemory;
      this->m_vecHashBuckets.m_Size = v7;
      v9 = 4LL * (v7 - m_Size);
      v8 = &v12[m_Size];
    }
    memset(v8, -1, v9);
    m_cElements = this->m_cElements;
    this->m_nMaxRehashedBucket = m_Size;
    this->m_nMinRehashedBucket = 0;
    if ( m_cElements > 0 )
    {
      CVarBitVecBase<int,32>::Resize(&this->m_bitsMigratedBuckets, 0, 0);
      CVarBitVecBase<int,32>::Resize(&this->m_bitsMigratedBuckets, this->m_vecHashBuckets.m_Size, 0);
    }
    else
    {
      this->m_nMinRehashedBucket = this->m_vecHashBuckets.m_Size;
    }
  }
}


// CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::EnsureCapacity  (line 420, @0x0000000003231930, libserver.so)  // inlines: AddMultipleToTail, EnsureCapacity, GrowMemory, GrowVector, InsertMultipleBefore, memcpy, memset, operator[]
// calls: memset, CVarBitVecBase<int, 32>::Resize, CUtlMemory<CUtlHashMapLarge<long long unsigned int, int>::HashBucket_t, int>::Grow, memcpy
// callers: GCSDK::CJobMgr::MarkJobPause
void __fastcall CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::EnsureCapacity(
        CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >_0 *const this,
        int amount)
{
  uint32 m_nGrowSize; // eax
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v5; // rsi
  __int64 v6; // rax
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_Size; // r14d
  int v8; // ebx
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::HashBucket_t *v9; // rdi
  size_t v10; // rdx
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_cElements; // esi
  int m_nAllocationCount; // eax
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::HashBucket_t *v13; // rax
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *m_pMemory; // rbx
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v15; // rax

  if ( amount > this->m_memNodes.m_nAllocationCount )
  {
    m_nGrowSize = this->m_memNodes.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_memNodes.m_pMemory;
        v15 = (**g_pMemAlloc)(g_pMemAlloc, 16LL * amount);
        this->m_memNodes.m_pMemory = v15;
        if ( m_pMemory != 0 )
          memcpy(v15, m_pMemory, 16LL * this->m_memNodes.m_nAllocationCount);
        this->m_memNodes.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v5 = this->m_memNodes.m_pMemory;
        v6 = *g_pMemAlloc;
        if ( v5 != 0 )
          this->m_memNodes.m_pMemory = (*(v6 + 8))(g_pMemAlloc, v5, 16LL * amount);
        else
          this->m_memNodes.m_pMemory = (*v6)(g_pMemAlloc, 16LL * amount);
      }
      this->m_memNodes.m_nAllocationCount = amount;
    }
  }
  m_Size = this->m_vecHashBuckets.m_Size;
  if ( amount > this->m_vecHashBuckets.m_Size )
  {
    v8 = this->m_vecHashBuckets.m_Size;
    if ( m_Size > 15 || (v8 = 16, amount > 16) )
    {
      do
        v8 *= 2;
      while ( amount > v8 );
    }
    if ( v8 == m_Size )
    {
      v9 = &this->m_vecHashBuckets.m_Memory.m_pMemory[m_Size];
      v10 = 0;
    }
    else
    {
      m_nAllocationCount = this->m_vecHashBuckets.m_Memory.m_nAllocationCount;
      if ( m_nAllocationCount < v8 )
        CUtlMemory<CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::HashBucket_t,int>::Grow(
          &this->m_vecHashBuckets.m_Memory,
          v8 - m_nAllocationCount);
      v13 = this->m_vecHashBuckets.m_Memory.m_pMemory;
      this->m_vecHashBuckets.m_Size = v8;
      v10 = 4LL * (v8 - m_Size);
      v9 = &v13[m_Size];
    }
    memset(v9, -1, v10);
    m_cElements = this->m_cElements;
    this->m_nMaxRehashedBucket = m_Size;
    this->m_nMinRehashedBucket = 0;
    if ( m_cElements > 0 )
    {
      CVarBitVecBase<int,32>::Resize(&this->m_bitsMigratedBuckets, 0, 0);
      CVarBitVecBase<int,32>::Resize(&this->m_bitsMigratedBuckets, this->m_vecHashBuckets.m_Size, 0);
    }
    else
    {
      this->m_nMinRehashedBucket = this->m_vecHashBuckets.m_Size;
    }
  }
}


// CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::EnsureCapacity  (line 420, @0x0000000003231bd0, libserver.so)  // inlines: AddMultipleToTail, EnsureCapacity, GrowMemory, GrowVector, InsertMultipleBefore, memcpy, memset, operator[]
// calls: memset, CVarBitVecBase<int, 32>::Resize, CUtlMemory<CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*>::HashBucket_t, int>::Grow, memcpy
// callers: GCSDK::CJobMgr::RegisterJobType
void __fastcall CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::EnsureCapacity(
        CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> > *const this,
        int amount)
{
  uint32 m_nGrowSize; // eax
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v5; // rsi
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_Size; // r14d
  int v7; // ebx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v8; // rdi
  size_t v9; // rdx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_cElements; // edi
  int m_nAllocationCount; // eax
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v12; // rax
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *m_pMemory; // rbx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v14; // rax

  if ( amount > this->m_memNodes.m_nAllocationCount )
  {
    m_nGrowSize = this->m_memNodes.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_memNodes.m_pMemory;
        v14 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * amount);
        this->m_memNodes.m_pMemory = v14;
        if ( m_pMemory != 0 )
          memcpy(v14, m_pMemory, 24LL * this->m_memNodes.m_nAllocationCount);
        this->m_memNodes.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v5 = this->m_memNodes.m_pMemory;
        if ( v5 != 0 )
          this->m_memNodes.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v5, 24LL * amount);
        else
          this->m_memNodes.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 24LL * amount);
      }
      this->m_memNodes.m_nAllocationCount = amount;
    }
  }
  m_Size = this->m_vecHashBuckets.m_Size;
  if ( amount > this->m_vecHashBuckets.m_Size )
  {
    v7 = this->m_vecHashBuckets.m_Size;
    if ( m_Size > 15 || (v7 = 16, amount > 16) )
    {
      do
        v7 *= 2;
      while ( amount > v7 );
    }
    if ( v7 == m_Size )
    {
      v8 = &this->m_vecHashBuckets.m_Memory.m_pMemory[m_Size];
      v9 = 0;
    }
    else
    {
      m_nAllocationCount = this->m_vecHashBuckets.m_Memory.m_nAllocationCount;
      if ( m_nAllocationCount < v7 )
        CUtlMemory<CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Grow(
          &this->m_vecHashBuckets.m_Memory,
          v7 - m_nAllocationCount);
      v12 = this->m_vecHashBuckets.m_Memory.m_pMemory;
      this->m_vecHashBuckets.m_Size = v7;
      v9 = 4LL * (v7 - m_Size);
      v8 = &v12[m_Size];
    }
    memset(v8, -1, v9);
    m_cElements = this->m_cElements;
    this->m_nMaxRehashedBucket = m_Size;
    this->m_nMinRehashedBucket = 0;
    if ( m_cElements > 0 )
    {
      CVarBitVecBase<int,32>::Resize(&this->m_bitsMigratedBuckets, 0, 0);
      CVarBitVecBase<int,32>::Resize(&this->m_bitsMigratedBuckets, this->m_vecHashBuckets.m_Size, 0);
    }
    else
    {
      this->m_nMinRehashedBucket = this->m_vecHashBuckets.m_Size;
    }
  }
}


// CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::EnsureCapacity  (line 420, @0x0000000003231e80, libserver.so)  // inlines: AddMultipleToTail, EnsureCapacity, GrowMemory, GrowVector, InsertMultipleBefore, memcpy, memset, operator[]
// calls: memset, CVarBitVecBase<int, 32>::Resize, CUtlMemory<CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::HashBucket_t, int>::Grow, memcpy
// callers: GCSDK::CJobMgr::RegisterJobType
void __fastcall CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::EnsureCapacity(
        CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr> *const this,
        int amount)
{
  uint32 m_nGrowSize; // eax
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Node_t *v5; // rsi
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::IndexType_t m_Size; // r14d
  int v7; // ebx
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::HashBucket_t *v8; // rdi
  size_t v9; // rdx
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::IndexType_t m_cElements; // r8d
  int m_nAllocationCount; // eax
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::HashBucket_t *v12; // rax
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Node_t *m_pMemory; // rbx
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Node_t *v14; // rax

  if ( amount > this->m_memNodes.m_nAllocationCount )
  {
    m_nGrowSize = this->m_memNodes.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_memNodes.m_pMemory;
        v14 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * amount);
        this->m_memNodes.m_pMemory = v14;
        if ( m_pMemory != 0 )
          memcpy(v14, m_pMemory, 24LL * this->m_memNodes.m_nAllocationCount);
        this->m_memNodes.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v5 = this->m_memNodes.m_pMemory;
        if ( v5 != 0 )
          this->m_memNodes.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v5, 24LL * amount);
        else
          this->m_memNodes.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 24LL * amount);
      }
      this->m_memNodes.m_nAllocationCount = amount;
    }
  }
  m_Size = this->m_vecHashBuckets.m_Size;
  if ( amount > this->m_vecHashBuckets.m_Size )
  {
    v7 = this->m_vecHashBuckets.m_Size;
    if ( m_Size > 15 || (v7 = 16, amount > 16) )
    {
      do
        v7 *= 2;
      while ( amount > v7 );
    }
    if ( v7 == m_Size )
    {
      v8 = &this->m_vecHashBuckets.m_Memory.m_pMemory[m_Size];
      v9 = 0;
    }
    else
    {
      m_nAllocationCount = this->m_vecHashBuckets.m_Memory.m_nAllocationCount;
      if ( m_nAllocationCount < v7 )
        CUtlMemory<CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::HashBucket_t,int>::Grow(
          &this->m_vecHashBuckets.m_Memory,
          v7 - m_nAllocationCount);
      v12 = this->m_vecHashBuckets.m_Memory.m_pMemory;
      this->m_vecHashBuckets.m_Size = v7;
      v9 = 4LL * (v7 - m_Size);
      v8 = &v12[m_Size];
    }
    memset(v8, -1, v9);
    m_cElements = this->m_cElements;
    this->m_nMaxRehashedBucket = m_Size;
    this->m_nMinRehashedBucket = 0;
    if ( m_cElements > 0 )
    {
      CVarBitVecBase<int,32>::Resize(&this->m_bitsMigratedBuckets, 0, 0);
      CVarBitVecBase<int,32>::Resize(&this->m_bitsMigratedBuckets, this->m_vecHashBuckets.m_Size, 0);
    }
    else
    {
      this->m_nMinRehashedBucket = this->m_vecHashBuckets.m_Size;
    }
  }
}


// CUtlHashMapLarge<unsigned int, CDOTACompendiumDefinition*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::RehashNodesInBucket  (line 484, @0x00000000024ae2c0, libserver.so)  // inlines: Bitvec_Set, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<unsigned int>, Set, UnlinkNodeFromBucket, operator(), operator[]
// calls: CUtlHashMapLarge<unsigned int, CDOTACompendiumDefinition*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::LinkNodeIntoBucket
// callers: CDOTACompendiumSchema::LoadCompendiumDefinitions
void __fastcall CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition *,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::RehashNodesInBucket(
        CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >_0 *const this,
        int iBucketSrc)
{
  __int64 v4; // rbx
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_iNode; // edx
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *m_pMemory; // r9
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v7; // rax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_iNextNode; // r13d
  int v9; // esi
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v10; // rcx
  __int64 v11; // rax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v12; // r8

  this->m_bitsMigratedBuckets.m_pInt[iBucketSrc >> 5] |= 1 << iBucketSrc;
  v4 = iBucketSrc;
  m_iNode = this->m_vecHashBuckets.m_Memory.m_pMemory[v4].m_iNode;
  if ( m_iNode != -1 )
  {
    while ( 1 )
    {
      m_pMemory = this->m_memNodes.m_pMemory;
      v7 = &m_pMemory[m_iNode];
      m_iNextNode = v7->m_iNextNode;
      LODWORD(v7) = -1028477387
                  * ((-2048144789 * (v7->m_key ^ HIWORD(v7->m_key)))
                   ^ ((-2048144789 * (v7->m_key ^ HIWORD(v7->m_key))) >> 13));
      v9 = (this->m_vecHashBuckets.m_Size - 1) & (v7 ^ (v7 >> 16));
      if ( iBucketSrc != v9 )
      {
        v10 = &this->m_vecHashBuckets.m_Memory.m_pMemory[v4];
        v11 = v10->m_iNode;
        if ( m_iNode == v11 )
        {
          v10->m_iNode = m_iNextNode;
        }
        else
        {
          while ( v11 != -1 )
          {
            v12 = &m_pMemory[v11];
            v11 = v12->m_iNextNode;
            if ( m_iNode == v11 )
            {
              v12->m_iNextNode = m_iNextNode;
              break;
            }
          }
        }
        CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition *,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::LinkNodeIntoBucket(
          this,
          v9,
          m_iNode);
      }
      if ( m_iNextNode == -1 )
        break;
      m_iNode = m_iNextNode;
    }
  }
}


// CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t, CUtlHashMapLargeDefEquals<long long int>, MurmurHash3Functor<long long int> >::RehashNodesInBucket  (line 484, @0x000000000322db20, libserver.so)  // inlines: Bitvec_Set, ModPowerOf2<unsigned int, int>, MurmurHash3Item<long long int>, Set, UnlinkNodeFromBucket, operator(), operator[]
// calls: MurmurHash3_32, CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t, CUtlHashMapLargeDefEquals<long long int>, MurmurHash3Functor<long long int> >::LinkNodeIntoBucket
// callers: GCSDK::CJobMgr::AccumulateStatsofJob, GCSDK::CJobMgr::DumpJobSummary
void __fastcall CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::RehashNodesInBucket(
        CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >_0 *const this,
        int iBucketSrc)
{
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::IndexType_t m_iNode; // r14d
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::Node_t *v5; // rdi
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::IndexType_t m_iNextNode; // ebx
  uint32 v7; // eax
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::Node_t *m_pMemory; // rdi
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::HashBucket_t *v9; // rdx
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::IndexType_t v10; // esi
  __int64 v11; // rcx
  CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >::Node_t *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // [rsp+8h] [rbp-38h]

  this->m_bitsMigratedBuckets.m_pInt[iBucketSrc >> 5] |= 1 << iBucketSrc;
  v14 = iBucketSrc;
  m_iNode = this->m_vecHashBuckets.m_Memory.m_pMemory[v14].m_iNode;
  if ( m_iNode != -1 )
  {
    while ( 1 )
    {
      v5 = &this->m_memNodes.m_pMemory[m_iNode];
      m_iNextNode = v5->m_iNextNode;
      v7 = (this->m_vecHashBuckets.m_Size - 1) & MurmurHash3_32(v5, 8u, 0x417u, 0);
      if ( iBucketSrc != v7 )
      {
        m_pMemory = this->m_memNodes.m_pMemory;
        v9 = &this->m_vecHashBuckets.m_Memory.m_pMemory[v14];
        v10 = m_pMemory[m_iNode].m_iNextNode;
        v11 = v9->m_iNode;
        if ( m_iNode == v11 )
        {
          v9->m_iNode = v10;
        }
        else if ( v11 != -1 )
        {
          v12 = &m_pMemory[v11];
          v13 = v12->m_iNextNode;
          if ( m_iNode == v13 )
          {
LABEL_12:
            v12->m_iNextNode = v10;
          }
          else
          {
            while ( v13 != -1 )
            {
              v12 = &m_pMemory[v13];
              v13 = v12->m_iNextNode;
              if ( m_iNode == v13 )
                goto LABEL_12;
            }
          }
        }
        CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::LinkNodeIntoBucket(
          this,
          v7,
          m_iNode);
      }
      if ( m_iNextNode == -1 )
        break;
      m_iNode = m_iNextNode;
    }
  }
}


// CUtlHashMapLarge<unsigned int, int, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::RehashNodesInBucket  (line 484, @0x000000000322ddc0, libserver.so)  // inlines: Bitvec_Set, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<unsigned int>, Set, UnlinkNodeFromBucket, operator(), operator[]
// calls: CUtlHashMapLarge<unsigned int, int, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::LinkNodeIntoBucket
// callers: GCSDK::CJobMgr::RecordOrphanedMessage
void __fastcall CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::RehashNodesInBucket(
        CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >_0 *const this,
        int iBucketSrc)
{
  __int64 v4; // rbx
  CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_iNode; // edx
  CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *m_pMemory; // r9
  CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v7; // rax
  CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_iNextNode; // r13d
  int v9; // esi
  CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v10; // rcx
  __int64 v11; // rax
  CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v12; // r8

  this->m_bitsMigratedBuckets.m_pInt[iBucketSrc >> 5] |= 1 << iBucketSrc;
  v4 = iBucketSrc;
  m_iNode = this->m_vecHashBuckets.m_Memory.m_pMemory[v4].m_iNode;
  if ( m_iNode != -1 )
  {
    while ( 1 )
    {
      m_pMemory = this->m_memNodes.m_pMemory;
      v7 = &m_pMemory[m_iNode];
      m_iNextNode = v7->m_iNextNode;
      LODWORD(v7) = -1028477387
                  * ((-2048144789 * (v7->m_key ^ HIWORD(v7->m_key)))
                   ^ ((-2048144789 * (v7->m_key ^ HIWORD(v7->m_key))) >> 13));
      v9 = (this->m_vecHashBuckets.m_Size - 1) & (v7 ^ (v7 >> 16));
      if ( iBucketSrc != v9 )
      {
        v10 = &this->m_vecHashBuckets.m_Memory.m_pMemory[v4];
        v11 = v10->m_iNode;
        if ( m_iNode == v11 )
        {
          v10->m_iNode = m_iNextNode;
        }
        else
        {
          while ( v11 != -1 )
          {
            v12 = &m_pMemory[v11];
            v11 = v12->m_iNextNode;
            if ( m_iNode == v11 )
            {
              v12->m_iNextNode = m_iNextNode;
              break;
            }
          }
        }
        CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::LinkNodeIntoBucket(
          this,
          v9,
          m_iNode);
      }
      if ( m_iNextNode == -1 )
        break;
      m_iNode = m_iNextNode;
    }
  }
}


// CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::RehashNodesInBucket  (line 484, @0x000000000322e990, libserver.so)  // inlines: Bitvec_Set, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<unsigned int>, Set, operator(), operator[]
// calls: CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::UnlinkNodeFromBucket, CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::LinkNodeIntoBucket
// callers: GCSDK::CJobMgr::RegisterJobType
void __fastcall CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::RehashNodesInBucket(
        CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> > *const this,
        int iBucketSrc)
{
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_iNode; // r13d
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v5; // rax
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_iNextNode; // r15d
  int v7; // ebx

  this->m_bitsMigratedBuckets.m_pInt[iBucketSrc >> 5] |= 1 << iBucketSrc;
  m_iNode = this->m_vecHashBuckets.m_Memory.m_pMemory[iBucketSrc].m_iNode;
  if ( m_iNode != -1 )
  {
    while ( 1 )
    {
      v5 = &this->m_memNodes.m_pMemory[m_iNode];
      m_iNextNode = v5->m_iNextNode;
      LODWORD(v5) = -1028477387
                  * ((-2048144789 * (v5->m_key ^ HIWORD(v5->m_key)))
                   ^ ((-2048144789 * (v5->m_key ^ HIWORD(v5->m_key))) >> 13));
      v7 = (this->m_vecHashBuckets.m_Size - 1) & (v5 ^ (v5 >> 16));
      if ( iBucketSrc != v7 )
      {
        CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::UnlinkNodeFromBucket(
          this,
          iBucketSrc,
          m_iNode);
        CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::LinkNodeIntoBucket(
          this,
          v7,
          m_iNode);
      }
      if ( m_iNextNode == -1 )
        break;
      m_iNode = m_iNextNode;
    }
  }
}


// CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::RehashNodesInBucket  (line 484, @0x000000000322eab0, libserver.so)  // inlines: Bitvec_Set, ModPowerOf2<unsigned int, int>, MurmurHash3String, Set, operator(), operator[]
// calls: strlen, MurmurHash3_32, CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::UnlinkNodeFromBucket, CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::LinkNodeIntoBucket
// callers: GCSDK::CJobMgr::RegisterJobType
void __fastcall CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::RehashNodesInBucket(
        CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr> *const this,
        int iBucketSrc)
{
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::IndexType_t m_iNode; // r13d
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Node_t *v5; // rax
  const char *m_key; // rbx
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::IndexType_t m_iNextNode; // r14d
  size_t v8; // rax
  uint32 v9; // ebx

  this->m_bitsMigratedBuckets.m_pInt[iBucketSrc >> 5] |= 1 << iBucketSrc;
  m_iNode = this->m_vecHashBuckets.m_Memory.m_pMemory[iBucketSrc].m_iNode;
  if ( m_iNode != -1 )
  {
    while ( 1 )
    {
      v5 = &this->m_memNodes.m_pMemory[m_iNode];
      m_key = v5->m_key;
      m_iNextNode = v5->m_iNextNode;
      v8 = strlen(v5->m_key);
      v9 = (this->m_vecHashBuckets.m_Size - 1) & MurmurHash3_32(m_key, v8, 0x417u, 0);
      if ( iBucketSrc != v9 )
      {
        CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::UnlinkNodeFromBucket(
          this,
          iBucketSrc,
          m_iNode);
        CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::LinkNodeIntoBucket(
          this,
          v9,
          m_iNode);
      }
      if ( m_iNextNode == -1 )
        break;
      m_iNode = m_iNextNode;
    }
  }
}


// CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::RehashNodesInBucket  (line 484, @0x000000000322ebd0, libserver.so)  // inlines: Bitvec_Set, ModPowerOf2<unsigned int, int>, MurmurHash3Item<long long unsigned int>, Set, operator(), operator[]
// calls: MurmurHash3_32, CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::UnlinkNodeFromBucket, CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::LinkNodeIntoBucket
// callers: GCSDK::CJobMgr::InsertJob
void __fastcall CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::RehashNodesInBucket(
        CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >_0 *const this,
        int iBucketSrc)
{
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_iNode; // r13d
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v5; // rdi
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_iNextNode; // r14d
  uint32 v7; // ebx

  this->m_bitsMigratedBuckets.m_pInt[iBucketSrc >> 5] |= 1 << iBucketSrc;
  m_iNode = this->m_vecHashBuckets.m_Memory.m_pMemory[iBucketSrc].m_iNode;
  if ( m_iNode != -1 )
  {
    while ( 1 )
    {
      v5 = &this->m_memNodes.m_pMemory[m_iNode];
      m_iNextNode = v5->m_iNextNode;
      v7 = (this->m_vecHashBuckets.m_Size - 1) & MurmurHash3_32(v5, 8u, 0x417u, 0);
      if ( iBucketSrc != v7 )
      {
        CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::UnlinkNodeFromBucket(
          this,
          iBucketSrc,
          m_iNode);
        CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::LinkNodeIntoBucket(
          this,
          v7,
          m_iNode);
      }
      if ( m_iNextNode == -1 )
        break;
      m_iNode = m_iNextNode;
    }
  }
}


// CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::RehashNodesInBucket  (line 484, @0x000000000322f1d0, libserver.so)  // inlines: Bitvec_Set, ModPowerOf2<unsigned int, int>, MurmurHash3Item<long long unsigned int>, Set, operator(), operator[]
// calls: MurmurHash3_32, CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::UnlinkNodeFromBucket, CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::LinkNodeIntoBucket
// callers: GCSDK::CJobMgr::MarkJobPause
void __fastcall CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::RehashNodesInBucket(
        CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >_0 *const this,
        int iBucketSrc)
{
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_iNode; // r12d
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v5; // rdi
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_iNextNode; // r13d
  uint32 v7; // ebx

  this->m_bitsMigratedBuckets.m_pInt[iBucketSrc >> 5] |= 1 << iBucketSrc;
  m_iNode = this->m_vecHashBuckets.m_Memory.m_pMemory[iBucketSrc].m_iNode;
  if ( m_iNode != -1 )
  {
    while ( 1 )
    {
      v5 = &this->m_memNodes.m_pMemory[m_iNode];
      m_iNextNode = v5->m_iNextNode;
      v7 = (this->m_vecHashBuckets.m_Size - 1) & MurmurHash3_32(v5, 8u, 0x417u, 0);
      if ( iBucketSrc != v7 )
      {
        CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::UnlinkNodeFromBucket(
          this,
          iBucketSrc,
          m_iNode);
        CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::LinkNodeIntoBucket(
          this,
          v7,
          m_iNode);
      }
      if ( m_iNextNode == -1 )
        break;
      m_iNode = m_iNextNode;
    }
  }
}


// CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::Find  (line 521, @0x000000000322bfb0, libserver.so)  // inlines: FindInBucket, Get, ModPowerOf2<unsigned int, int>, MurmurHash3Item<long long unsigned int>, operator(), operator[]
// calls: MurmurHash3_32
// callers: GCSDK::CJobMgr::BJobExists, GCSDK::CJobMgr::GetPJob, GCSDK::CJobMgr::BGetIJob, GCSDK::CJobMgr::BResumeSleepingJobs, GCSDK::CJobMgr::BResumeYieldingJobsFromList, GCSDK::CJobMgr::CheckForJobTimeouts, GCSDK::CJobMgr::RemoveJob, GCSDK::CJobMgr::BRouteMsgToJob
int __fastcall CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Find(
        const CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >_0 *const this,
        const CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::KeyType_t *const key)
{
  uint32 v4; // eax
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::HashBucket_t *m_pMemory; // rdi
  int m_iNode; // ecx
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v7; // r9
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v8; // rdx
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_nMinRehashedBucket; // r8d
  int i; // esi
  int v11; // ecx
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v12; // r13
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v13; // rdx

  if ( this->m_cElements != 0 )
  {
    v4 = MurmurHash3_32(key, 8u, 0x417u, 0);
    m_pMemory = this->m_vecHashBuckets.m_Memory.m_pMemory;
    m_iNode = m_pMemory[v4 & (this->m_vecHashBuckets.m_Size - 1)].m_iNode;
    if ( m_iNode != -1 )
    {
      v7 = this->m_memNodes.m_pMemory;
      v8 = &v7[m_iNode];
      if ( *key == v8->m_key )
        return m_iNode;
      while ( 1 )
      {
        m_iNode = v8->m_iNextNode;
        if ( m_iNode == -1 )
          break;
        v8 = &v7[m_iNode];
        if ( v8->m_key == *key )
          return m_iNode;
      }
    }
    m_nMinRehashedBucket = this->m_nMinRehashedBucket;
    for ( i = this->m_vecHashBuckets.m_Size >> 1; m_nMinRehashedBucket <= i; i >>= 1 )
    {
      v11 = v4 & (i - 1);
      if ( ((1 << (v4 & (i - 1))) & this->m_bitsMigratedBuckets.m_pInt[v11 >> 5]) == 0 )
      {
        m_iNode = m_pMemory[v11].m_iNode;
        if ( m_iNode != -1 )
        {
          v12 = this->m_memNodes.m_pMemory;
          v13 = &v12[m_iNode];
          if ( *key == v13->m_key )
            return m_iNode;
          while ( 1 )
          {
            m_iNode = v13->m_iNextNode;
            if ( m_iNode == -1 )
              break;
            v13 = &v12[m_iNode];
            if ( *key == v13->m_key )
              return m_iNode;
          }
        }
      }
    }
  }
  return -1;
}


// CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::Find  (line 521, @0x000000000322c0e0, libserver.so)  // inlines: FindInBucket, Get, ModPowerOf2<unsigned int, int>, MurmurHash3Item<long long unsigned int>, operator(), operator[]
// calls: MurmurHash3_32
// callers: GCSDK::CJobMgr::CheckForJobTimeouts, GCSDK::CJobMgr::MarkJobPause
int __fastcall CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Find(
        const CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >_0 *const this,
        const CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::KeyType_t *const key)
{
  uint32 v4; // eax
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::HashBucket_t *m_pMemory; // r8
  int m_iNode; // ecx
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v7; // r9
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v8; // rdx
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_nMinRehashedBucket; // r9d
  int i; // esi
  int v11; // ecx
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v12; // r13
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v13; // rdx

  if ( this->m_cElements != 0 )
  {
    v4 = MurmurHash3_32(key, 8u, 0x417u, 0);
    m_pMemory = this->m_vecHashBuckets.m_Memory.m_pMemory;
    m_iNode = m_pMemory[v4 & (this->m_vecHashBuckets.m_Size - 1)].m_iNode;
    if ( m_iNode != -1 )
    {
      v7 = this->m_memNodes.m_pMemory;
      v8 = &v7[m_iNode];
      if ( *key == v8->m_key )
        return m_iNode;
      while ( 1 )
      {
        m_iNode = v8->m_iNextNode;
        if ( m_iNode == -1 )
          break;
        v8 = &v7[m_iNode];
        if ( v8->m_key == *key )
          return m_iNode;
      }
    }
    m_nMinRehashedBucket = this->m_nMinRehashedBucket;
    for ( i = this->m_vecHashBuckets.m_Size >> 1; m_nMinRehashedBucket <= i; i >>= 1 )
    {
      v11 = v4 & (i - 1);
      if ( ((1 << (v4 & (i - 1))) & this->m_bitsMigratedBuckets.m_pInt[v11 >> 5]) == 0 )
      {
        m_iNode = m_pMemory[v11].m_iNode;
        if ( m_iNode != -1 )
        {
          v12 = this->m_memNodes.m_pMemory;
          v13 = &v12[m_iNode];
          if ( *key == v13->m_key )
            return m_iNode;
          while ( 1 )
          {
            m_iNode = v13->m_iNextNode;
            if ( m_iNode == -1 )
              break;
            v13 = &v12[m_iNode];
            if ( *key == v13->m_key )
              return m_iNode;
          }
        }
      }
    }
  }
  return -1;
}


// CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::Find  (line 521, @0x000000000322c2e0, libserver.so)  // inlines: FindInBucket, Get, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<unsigned int>, operator(), operator[]
// callers: GCSDK::CJobMgr::UnregisterJobByName
int __fastcall CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::Find(
        const CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> > *const this,
        const CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::KeyType_t *const key)
{
  int result; // eax
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::KeyType_t v3; // esi
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *m_pMemory; // r10
  unsigned int v5; // r9d
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v6; // rcx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v7; // rdx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_nMinRehashedBucket; // r11d
  int v9; // r8d
  int v10; // ecx
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v11; // rdx

  result = -1;
  if ( this->m_cElements != 0 )
  {
    v3 = *key;
    m_pMemory = this->m_vecHashBuckets.m_Memory.m_pMemory;
    v5 = (-1028477387 * ((-2048144789 * (v3 ^ HIWORD(v3))) ^ ((-2048144789 * (v3 ^ HIWORD(v3))) >> 13)))
       ^ ((-1028477387 * ((-2048144789 * (v3 ^ HIWORD(v3))) ^ ((-2048144789 * (v3 ^ HIWORD(v3))) >> 13))) >> 16);
    result = m_pMemory[v5 & (this->m_vecHashBuckets.m_Size - 1)].m_iNode;
    if ( result != -1 )
    {
      v6 = this->m_memNodes.m_pMemory;
      v7 = &v6[result];
      if ( v3 == v7->m_key )
        return result;
      while ( 1 )
      {
        result = v7->m_iNextNode;
        if ( result == -1 )
          break;
        v7 = &v6[result];
        if ( v3 == v7->m_key )
          return result;
      }
    }
    m_nMinRehashedBucket = this->m_nMinRehashedBucket;
    v9 = this->m_vecHashBuckets.m_Size >> 1;
    result = -1;
    if ( m_nMinRehashedBucket <= v9 )
    {
      while ( 1 )
      {
        v10 = v5 & (v9 - 1);
        if ( ((1 << (((53 * ((107 * (v3 ^ BYTE2(v3))) ^ ((-2048144789 * (v3 ^ HIWORD(v3))) >> 13)))
                    ^ ((-1028477387 * ((-2048144789 * (v3 ^ HIWORD(v3))) ^ ((-2048144789 * (v3 ^ HIWORD(v3))) >> 13))) >> 16))
                   & (v9 - 1)))
            & this->m_bitsMigratedBuckets.m_pInt[v10 >> 5]) == 0 )
        {
          result = m_pMemory[v10].m_iNode;
          if ( result != -1 )
            break;
        }
LABEL_9:
        v9 >>= 1;
        if ( m_nMinRehashedBucket > v9 )
          return -1;
      }
      while ( 1 )
      {
        v11 = &this->m_memNodes.m_pMemory[result];
        if ( v3 == v11->m_key )
          break;
        result = v11->m_iNextNode;
        if ( result == -1 )
          goto LABEL_9;
      }
    }
  }
  return result;
}


// CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::Find  (line 521, @0x000000000322c3f0, libserver.so)  // inlines: FindInBucket, Get, ModPowerOf2<unsigned int, int>, MurmurHash3String, operator(), operator[]
// calls: strlen, MurmurHash3_32, strcmp
// callers: GCSDK::CJobMgr::BIsJobCurrentlyRegistered, GCSDK::CJobMgr::GetJobInfoForMsg, GCSDK::CJobMgr::UnregisterJobByID, GCSDK::CJobMgr::UnregisterJobByName
int __fastcall CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Find(
        const CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr> *const this,
        const CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::KeyType_t *const key)
{
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::KeyType_t v2; // rbx
  size_t v3; // rax
  int m_Size; // r13d
  int m_iNode; // r15d
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Node_t *v6; // r12
  const char *v7; // rbx
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Node_t *v8; // r14
  int v10; // ebx
  int v11; // ecx
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Node_t *v12; // r13
  const char *v13; // r12
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Node_t *v14; // r14
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::HashBucket_t *m_pMemory; // [rsp+8h] [rbp-58h]
  uint32 *m_pInt; // [rsp+20h] [rbp-40h]
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::IndexType_t m_nMinRehashedBucket; // [rsp+28h] [rbp-38h]
  uint32 v20; // [rsp+2Ch] [rbp-34h]

  if ( this->m_cElements != 0 )
  {
    v2 = *key;
    v3 = strlen(*key);
    v20 = MurmurHash3_32(v2, v3, 0x417u, 0);
    m_Size = this->m_vecHashBuckets.m_Size;
    m_pMemory = this->m_vecHashBuckets.m_Memory.m_pMemory;
    m_iNode = m_pMemory[v20 & (this->m_vecHashBuckets.m_Size - 1)].m_iNode;
    if ( m_iNode != -1 )
    {
      v6 = this->m_memNodes.m_pMemory;
      v7 = *key;
      do
      {
        v8 = &v6[m_iNode];
        if ( strcmp(v7, v8->m_key) == 0 )
          return m_iNode;
        m_iNode = v8->m_iNextNode;
      }
      while ( m_iNode != -1 );
    }
    v10 = m_Size >> 1;
    m_nMinRehashedBucket = this->m_nMinRehashedBucket;
    if ( m_nMinRehashedBucket <= m_Size >> 1 )
    {
      m_pInt = this->m_bitsMigratedBuckets.m_pInt;
      while ( 1 )
      {
        v11 = v20 & (v10 - 1);
        if ( ((1 << (v20 & (v10 - 1))) & m_pInt[v11 >> 5]) == 0 )
        {
          m_iNode = m_pMemory[v11].m_iNode;
          if ( m_iNode != -1 )
            break;
        }
LABEL_9:
        v10 >>= 1;
        if ( m_nMinRehashedBucket > v10 )
          return -1;
      }
      v12 = this->m_memNodes.m_pMemory;
      v13 = *key;
      while ( 1 )
      {
        v14 = &v12[m_iNode];
        if ( strcmp(v13, v14->m_key) == 0 )
          return m_iNode;
        m_iNode = v14->m_iNextNode;
        if ( m_iNode == -1 )
          goto LABEL_9;
      }
    }
  }
  return -1;
}


// CUtlHashMapLarge<unsigned int, CDOTACompendiumDefinition*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::LinkNodeIntoBucket  (line 712, @0x00000000024ae290, libserver.so)  // inlines: operator[]
// callers: CUtlHashMapLarge<unsigned int, CDOTACompendiumDefinition*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::RehashNodesInBucket, CDOTACompendiumSchema::LoadCompendiumDefinitions
void __fastcall CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition *,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::LinkNodeIntoBucket(
        CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >_0 *const this,
        int iBucket,
        int iNewNode)
{
  this->m_memNodes.m_pMemory[iNewNode].m_iNextNode = this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode;
  this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode = iNewNode;
}


// CUtlHashMapLarge<int, KeyValues*, CUtlHashMapLargeDefEquals<int>, MurmurHash3Functor<int> >::LinkNodeIntoBucket  (line 712, @0x000000000257b6c0, libserver.so)  // inlines: operator[]
// callers: CDOTAGameManager::SetupGameKeyValues
void __fastcall CUtlHashMapLarge<int,KeyValues *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::LinkNodeIntoBucket(
        CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> > *const this,
        int iBucket,
        int iNewNode)
{
  this->m_memNodes.m_pMemory[iNewNode].m_iNextNode = this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode;
  this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode = iNewNode;
}


// CUtlHashMapLarge<int, CDOTAGameManager::HeroInfo_t, CUtlHashMapLargeDefEquals<int>, MurmurHash3Functor<int> >::LinkNodeIntoBucket  (line 712, @0x000000000257b800, libserver.so)  // inlines: operator[]
// callers: CDOTAGameManager::SetupGameKeyValues
void __fastcall CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::LinkNodeIntoBucket(
        CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> > *const this,
        int iBucket,
        int iNewNode)
{
  this->m_memNodes.m_pMemory[iNewNode].m_iNextNode = this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode;
  this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode = iNewNode;
}


// CUtlHashMapLarge<long long unsigned int, CUtlVector<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::LinkNodeIntoBucket  (line 712, @0x0000000002e5fbe0, libserver.so)  // inlines: operator[]
// callers: CDOTAItemSchema::BInitCustomGameTickets
void __fastcall CUtlHashMapLarge<unsigned long long,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int>> *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::LinkNodeIntoBucket(
        CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> > *const this,
        int iBucket,
        int iNewNode)
{
  this->m_memNodes.m_pMemory[iNewNode].m_iNextNode = this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode;
  this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode = iNewNode;
}


// CUtlHashMapLarge<item_definition_index_t, CDOTAItemSchema::AssociatedLeagueInfo_t, CUtlHashMapLargeDefEquals<item_definition_index_t>, MurmurHash3Functor<item_definition_index_t> >::LinkNodeIntoBucket  (line 712, @0x0000000002e5fd20, libserver.so)  // inlines: operator[]
// callers: CDOTAItemSchema::BuildAssociatedLeagueInfo
void __fastcall CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::LinkNodeIntoBucket(
        CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> > *const this,
        int iBucket,
        int iNewNode)
{
  this->m_memNodes.m_pMemory[iNewNode].m_iNextNode = this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode;
  this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode = iNewNode;
}


// CUtlHashMapLarge<unsigned int, CDOTAItemSchema::LeagueInfo_t, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::LinkNodeIntoBucket  (line 712, @0x0000000002e60000, libserver.so)  // inlines: operator[]
// callers: CDOTAItemSchema::AddInfoToLeagueCache
void __fastcall CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::LinkNodeIntoBucket(
        CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> > *const this,
        int iBucket,
        int iNewNode)
{
  this->m_memNodes.m_pMemory[iNewNode].m_iNextNode = this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode;
  this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode = iNewNode;
}


// CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, MurmurHash3Functor<item_definition_index_t> >::LinkNodeIntoBucket  (line 712, @0x0000000002eada50, libserver.so)  // inlines: operator[]
// callers: CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, MurmurHash3Functor<item_definition_index_t> >::InsertInternal
void __fastcall CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition *,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::LinkNodeIntoBucket(
        CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> > *const this,
        int iBucket,
        int iNewNode)
{
  this->m_memNodes.m_pMemory[iNewNode].m_iNextNode = this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode;
  this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode = iNewNode;
}


// CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functor<CEconSchemaSymbol> >::LinkNodeIntoBucket  (line 712, @0x0000000002eadba0, libserver.so)  // inlines: operator[]
// callers: CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functor<CEconSchemaSymbol> >::InsertInternal, CEconItemSchema::BInitItems
void __fastcall CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition *,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol>>::LinkNodeIntoBucket(
        CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> > *const this,
        int iBucket,
        int iNewNode)
{
  this->m_memNodes.m_pMemory[iNewNode].m_iNextNode = this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode;
  this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode = iNewNode;
}


// CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::LinkNodeIntoBucket  (line 712, @0x000000000322d970, libserver.so)  // inlines: operator[]
// callers: CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::RehashNodesInBucket, GCSDK::CJobMgr::InsertJob
void __fastcall CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::LinkNodeIntoBucket(
        CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >_0 *const this,
        int iBucket,
        int iNewNode)
{
  this->m_memNodes.m_pMemory[iNewNode].m_iNextNode = this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode;
  this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode = iNewNode;
}


// CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t, CUtlHashMapLargeDefEquals<long long int>, MurmurHash3Functor<long long int> >::LinkNodeIntoBucket  (line 712, @0x000000000322dae0, libserver.so)  // inlines: operator[]
// callers: CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t, CUtlHashMapLargeDefEquals<long long int>, MurmurHash3Functor<long long int> >::RehashNodesInBucket, GCSDK::CJobMgr::AccumulateStatsofJob, GCSDK::CJobMgr::DumpJobSummary
void __fastcall CUtlHashMapLarge<long long,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long>,MurmurHash3Functor<long long>>::LinkNodeIntoBucket(
        CUtlHashMapLarge<long long int,GCSDK::JobStatsBucket_t,CUtlHashMapLargeDefEquals<long long int>,MurmurHash3Functor<long long int> >_0 *const this,
        int iBucket,
        int iNewNode)
{
  this->m_memNodes.m_pMemory[iNewNode].m_iNextNode = this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode;
  this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode = iNewNode;
}


// CUtlHashMapLarge<unsigned int, int, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::LinkNodeIntoBucket  (line 712, @0x000000000322dd90, libserver.so)  // inlines: operator[]
// callers: CUtlHashMapLarge<unsigned int, int, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::RehashNodesInBucket, GCSDK::CJobMgr::RecordOrphanedMessage
void __fastcall CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::LinkNodeIntoBucket(
        CUtlHashMapLarge<unsigned int,int,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >_0 *const this,
        int iBucket,
        int iNewNode)
{
  this->m_memNodes.m_pMemory[iNewNode].m_iNextNode = this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode;
  this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode = iNewNode;
}


// CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::LinkNodeIntoBucket  (line 712, @0x000000000322e160, libserver.so)  // inlines: operator[]
// callers: CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::RehashNodesInBucket, GCSDK::CJobMgr::MarkJobPause
void __fastcall CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::LinkNodeIntoBucket(
        CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >_0 *const this,
        int iBucket,
        int iNewNode)
{
  this->m_memNodes.m_pMemory[iNewNode].m_iNextNode = this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode;
  this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode = iNewNode;
}


// CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::LinkNodeIntoBucket  (line 712, @0x000000000322e7b0, libserver.so)  // inlines: operator[]
// callers: CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::RehashNodesInBucket, GCSDK::CJobMgr::RegisterJobType
void __fastcall CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::LinkNodeIntoBucket(
        CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> > *const this,
        int iBucket,
        int iNewNode)
{
  this->m_memNodes.m_pMemory[iNewNode].m_iNextNode = this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode;
  this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode = iNewNode;
}


// CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::LinkNodeIntoBucket  (line 712, @0x000000000322e900, libserver.so)  // inlines: operator[]
// callers: CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::RehashNodesInBucket, GCSDK::CJobMgr::RegisterJobType
void __fastcall CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::LinkNodeIntoBucket(
        CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr> *const this,
        int iBucket,
        int iNewNode)
{
  this->m_memNodes.m_pMemory[iNewNode].m_iNextNode = this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode;
  this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket].m_iNode = iNewNode;
}


// CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, MurmurHash3Functor<item_definition_index_t> >::UnlinkNodeFromBucket  (line 724, @0x0000000002eaf230, libserver.so)  // inlines: operator[]
// callers: CEconItemSchema::ItemTesting_DiscardTestItemDefinition, CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, MurmurHash3Functor<item_definition_index_t> >::InsertInternal
void __fastcall CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition *,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::UnlinkNodeFromBucket(
        CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> > *const this,
        int iBucket,
        int iNodeToUnlink)
{
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *m_pMemory; // r8
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t m_iNextNode; // r9d
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::HashBucket_t *v5; // rcx
  __int64 m_iNode; // rax
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v7; // rcx

  m_pMemory = this->m_memNodes.m_pMemory;
  m_iNextNode = m_pMemory[iNodeToUnlink].m_iNextNode;
  v5 = &this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket];
  m_iNode = v5->m_iNode;
  if ( m_iNode == iNodeToUnlink )
  {
    v5->m_iNode = m_iNextNode;
  }
  else
  {
    while ( m_iNode != -1 )
    {
      v7 = &m_pMemory[m_iNode];
      m_iNode = v7->m_iNextNode;
      if ( iNodeToUnlink == m_iNode )
      {
        v7->m_iNextNode = m_iNextNode;
        return;
      }
    }
  }
}


// CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functor<CEconSchemaSymbol> >::UnlinkNodeFromBucket  (line 724, @0x0000000002eaf290, libserver.so)  // inlines: operator[]
// callers: CEconItemSchema::ItemTesting_DiscardTestItemDefinition, CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functor<CEconSchemaSymbol> >::InsertInternal, CEconItemSchema::BInitItems
void __fastcall CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition *,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol>>::UnlinkNodeFromBucket(
        CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> > *const this,
        int iBucket,
        int iNodeToUnlink)
{
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::Node_t *m_pMemory; // r8
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::IndexType_t m_iNextNode; // r9d
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::HashBucket_t *v5; // rcx
  __int64 m_iNode; // rax
  CUtlHashMapLarge<CEconSchemaSymbol,CEconItemDefinition*,CUtlHashMapLargeDefEquals<CEconSchemaSymbol>,MurmurHash3Functor<CEconSchemaSymbol> >::Node_t *v7; // rcx

  m_pMemory = this->m_memNodes.m_pMemory;
  m_iNextNode = m_pMemory[iNodeToUnlink].m_iNextNode;
  v5 = &this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket];
  m_iNode = v5->m_iNode;
  if ( m_iNode == iNodeToUnlink )
  {
    v5->m_iNode = m_iNextNode;
  }
  else
  {
    while ( m_iNode != -1 )
    {
      v7 = &m_pMemory[m_iNode];
      m_iNode = v7->m_iNextNode;
      if ( iNodeToUnlink == m_iNode )
      {
        v7->m_iNextNode = m_iNextNode;
        return;
      }
    }
  }
}


// CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::UnlinkNodeFromBucket  (line 724, @0x000000000322e930, libserver.so)  // inlines: operator[]
// callers: CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::RehashNodesInBucket, GCSDK::CJobMgr::UnregisterJobByID, GCSDK::CJobMgr::UnregisterJobByName, GCSDK::CJobMgr::RegisterJobType
void __fastcall CUtlHashMapLarge<unsigned int,GCSDK::JobType_t const*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::UnlinkNodeFromBucket(
        CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> > *const this,
        int iBucket,
        int iNodeToUnlink)
{
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *m_pMemory; // r8
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_iNextNode; // r9d
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v5; // rcx
  __int64 m_iNode; // rax
  CUtlHashMapLarge<unsigned int,const GCSDK::JobType_t*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v7; // rcx

  m_pMemory = this->m_memNodes.m_pMemory;
  m_iNextNode = m_pMemory[iNodeToUnlink].m_iNextNode;
  v5 = &this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket];
  m_iNode = v5->m_iNode;
  if ( m_iNode == iNodeToUnlink )
  {
    v5->m_iNode = m_iNextNode;
  }
  else
  {
    while ( m_iNode != -1 )
    {
      v7 = &m_pMemory[m_iNode];
      m_iNode = v7->m_iNextNode;
      if ( iNodeToUnlink == m_iNode )
      {
        v7->m_iNextNode = m_iNextNode;
        return;
      }
    }
  }
}


// CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::UnlinkNodeFromBucket  (line 724, @0x000000000322ea50, libserver.so)  // inlines: operator[]
// callers: CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::RehashNodesInBucket, GCSDK::CJobMgr::UnregisterJobByID, GCSDK::CJobMgr::UnregisterJobByName, GCSDK::CJobMgr::RegisterJobType
void __fastcall CUtlHashMapLarge<char const*,GCSDK::JobType_t const*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::UnlinkNodeFromBucket(
        CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr> *const this,
        int iBucket,
        int iNodeToUnlink)
{
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Node_t *m_pMemory; // r8
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::IndexType_t m_iNextNode; // r9d
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::HashBucket_t *v5; // rcx
  __int64 m_iNode; // rax
  CUtlHashMapLarge<char const*,const GCSDK::JobType_t*,CaseSensitiveStrEquals,MurmurHash3ConstCharPtr>::Node_t *v7; // rcx

  m_pMemory = this->m_memNodes.m_pMemory;
  m_iNextNode = m_pMemory[iNodeToUnlink].m_iNextNode;
  v5 = &this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket];
  m_iNode = v5->m_iNode;
  if ( m_iNode == iNodeToUnlink )
  {
    v5->m_iNode = m_iNextNode;
  }
  else
  {
    while ( m_iNode != -1 )
    {
      v7 = &m_pMemory[m_iNode];
      m_iNode = v7->m_iNextNode;
      if ( iNodeToUnlink == m_iNode )
      {
        v7->m_iNextNode = m_iNextNode;
        return;
      }
    }
  }
}


// CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::UnlinkNodeFromBucket  (line 724, @0x000000000322eb70, libserver.so)  // inlines: operator[]
// callers: CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::RehashNodesInBucket, GCSDK::CJobMgr::InsertJob, GCSDK::CJobMgr::RemoveJob
void __fastcall CUtlHashMapLarge<unsigned long long,GCSDK::CJob *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::UnlinkNodeFromBucket(
        CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >_0 *const this,
        int iBucket,
        int iNodeToUnlink)
{
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *m_pMemory; // r8
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_iNextNode; // r9d
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::HashBucket_t *v5; // rcx
  __int64 m_iNode; // rax
  CUtlHashMapLarge<long long unsigned int,GCSDK::CJob*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v7; // rcx

  m_pMemory = this->m_memNodes.m_pMemory;
  m_iNextNode = m_pMemory[iNodeToUnlink].m_iNextNode;
  v5 = &this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket];
  m_iNode = v5->m_iNode;
  if ( m_iNode == iNodeToUnlink )
  {
    v5->m_iNode = m_iNextNode;
  }
  else
  {
    while ( m_iNode != -1 )
    {
      v7 = &m_pMemory[m_iNode];
      m_iNode = v7->m_iNextNode;
      if ( iNodeToUnlink == m_iNode )
      {
        v7->m_iNextNode = m_iNextNode;
        return;
      }
    }
  }
}


// CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::UnlinkNodeFromBucket  (line 724, @0x000000000322f160, libserver.so)  // inlines: operator[]
// callers: CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::RehashNodesInBucket, CUtlHashMapLarge<long long unsigned int, int, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::Remove, GCSDK::CJobMgr::CheckForJobTimeouts, GCSDK::CJobMgr::MarkJobPause
void __fastcall CUtlHashMapLarge<unsigned long long,int,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::UnlinkNodeFromBucket(
        CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >_0 *const this,
        int iBucket,
        int iNodeToUnlink)
{
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *m_pMemory; // r8
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_iNextNode; // r9d
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::HashBucket_t *v5; // rax
  __int64 m_iNode; // rcx
  CUtlHashMapLarge<long long unsigned int,int,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v7; // rcx
  __int64 v8; // rax

  m_pMemory = this->m_memNodes.m_pMemory;
  m_iNextNode = m_pMemory[iNodeToUnlink].m_iNextNode;
  v5 = &this->m_vecHashBuckets.m_Memory.m_pMemory[iBucket];
  m_iNode = v5->m_iNode;
  if ( m_iNode == iNodeToUnlink )
  {
    v5->m_iNode = m_iNextNode;
  }
  else if ( m_iNode != -1 )
  {
    v7 = &m_pMemory[m_iNode];
    v8 = v7->m_iNextNode;
    if ( iNodeToUnlink == v8 )
    {
LABEL_8:
      v7->m_iNextNode = m_iNextNode;
    }
    else
    {
      while ( v8 != -1 )
      {
        v7 = &m_pMemory[v8];
        v8 = v7->m_iNextNode;
        if ( iNodeToUnlink == v8 )
          goto LABEL_8;
      }
    }
  }
}


// CUtlHashMapLarge<int, KeyValues*, CUtlHashMapLargeDefEquals<int>, MurmurHash3Functor<int> >::RemoveAll  (line 829, @0x000000000256b5d0, libserver.so)  // inlines: FreeInts, GetEndMask, ReallocInts, Resize, memset
// calls: memset
// callers: CDOTAGameManager::SetupGameKeyValues
// globals: GetEndMask(int)::bitStringEndMasks
void __fastcall CUtlHashMapLarge<int,KeyValues *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::RemoveAll(
        CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> > *const this)
{
  int m_numInts; // eax
  __int64 m_Size; // rdx
  int m_numBits; // eax
  int v5; // eax
  uint32 *m_pInt; // rcx

  this->m_cElements = 0;
  m_numInts = this->m_bitsMigratedBuckets.m_numInts;
  this->m_nMaxElement = 0;
  m_Size = this->m_vecHashBuckets.m_Size;
  this->m_iNodeFreeListHead = -1;
  this->m_nMaxRehashedBucket = -1;
  this->m_nMinRehashedBucket = m_Size;
  if ( m_numInts != 0 )
  {
    if ( this->m_bitsMigratedBuckets.m_pInt != 0 )
    {
      if ( m_numInts > 1 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      m_numBits = this->m_bitsMigratedBuckets.m_numBits;
      this->m_bitsMigratedBuckets.m_pInt = 0;
      if ( m_numBits <= 0 )
      {
        *(4LL * this->m_bitsMigratedBuckets.m_numInts - 4) &= GetEndMask(int)::bitStringEndMasks[m_numBits & 0x1F];
        memset(
          &this->m_bitsMigratedBuckets.m_pInt[this->m_bitsMigratedBuckets.m_numInts],
          0,
          4LL * -this->m_bitsMigratedBuckets.m_numInts);
      }
      m_Size = this->m_vecHashBuckets.m_Size;
      this->m_bitsMigratedBuckets.m_numInts = 0;
    }
    else
    {
      this->m_bitsMigratedBuckets.m_numInts = 0;
    }
  }
  else
  {
    v5 = this->m_bitsMigratedBuckets.m_numBits;
    if ( v5 <= 0 )
    {
      m_pInt = this->m_bitsMigratedBuckets.m_pInt;
      if ( m_pInt != 0 )
      {
        *(m_pInt - 1) &= GetEndMask(int)::bitStringEndMasks[v5 & 0x1F];
        m_Size = this->m_vecHashBuckets.m_Size;
      }
    }
  }
  this->m_bitsMigratedBuckets.m_numBits = 0;
  memset(this->m_vecHashBuckets.m_Memory.m_pMemory, 255, 4 * m_Size);
}


// CUtlHashMapLarge<int, CDOTAGameManager::HeroInfo_t, CUtlHashMapLargeDefEquals<int>, MurmurHash3Functor<int> >::RemoveAll  (line 829, @0x000000000256b6e0, libserver.so)  // inlines: FreeInts, GetEndMask, ReallocInts, Resize, memset
// calls: memset
// callers: CDOTAGameManager::SetupGameKeyValues
// globals: GetEndMask(int)::bitStringEndMasks
void __fastcall CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::RemoveAll(
        CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> > *const this)
{
  int m_numInts; // eax
  __int64 m_Size; // rdx
  int m_numBits; // eax
  int v5; // eax
  uint32 *m_pInt; // rcx

  this->m_cElements = 0;
  m_numInts = this->m_bitsMigratedBuckets.m_numInts;
  this->m_nMaxElement = 0;
  m_Size = this->m_vecHashBuckets.m_Size;
  this->m_iNodeFreeListHead = -1;
  this->m_nMaxRehashedBucket = -1;
  this->m_nMinRehashedBucket = m_Size;
  if ( m_numInts != 0 )
  {
    if ( this->m_bitsMigratedBuckets.m_pInt != 0 )
    {
      if ( m_numInts > 1 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      m_numBits = this->m_bitsMigratedBuckets.m_numBits;
      this->m_bitsMigratedBuckets.m_pInt = 0;
      if ( m_numBits <= 0 )
      {
        *(4LL * this->m_bitsMigratedBuckets.m_numInts - 4) &= GetEndMask(int)::bitStringEndMasks[m_numBits & 0x1F];
        memset(
          &this->m_bitsMigratedBuckets.m_pInt[this->m_bitsMigratedBuckets.m_numInts],
          0,
          4LL * -this->m_bitsMigratedBuckets.m_numInts);
      }
      m_Size = this->m_vecHashBuckets.m_Size;
      this->m_bitsMigratedBuckets.m_numInts = 0;
    }
    else
    {
      this->m_bitsMigratedBuckets.m_numInts = 0;
    }
  }
  else
  {
    v5 = this->m_bitsMigratedBuckets.m_numBits;
    if ( v5 <= 0 )
    {
      m_pInt = this->m_bitsMigratedBuckets.m_pInt;
      if ( m_pInt != 0 )
      {
        *(m_pInt - 1) &= GetEndMask(int)::bitStringEndMasks[v5 & 0x1F];
        m_Size = this->m_vecHashBuckets.m_Size;
      }
    }
  }
  this->m_bitsMigratedBuckets.m_numBits = 0;
  memset(this->m_vecHashBuckets.m_Memory.m_pMemory, 255, 4 * m_Size);
}


// CUtlHashMapLarge<unsigned int, CDOTACompendiumDefinition*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::PurgeAndDeleteElements  (line 875, @0x00000000024b4000, libserver.so)  // inlines: FreeInts, GetEndMask, IsValidIndex, Purge, ReallocInts, RemoveAll, Resize, memset, operator[]
// calls: CDOTACompendiumDefinition::~CDOTACompendiumDefinition, operator delete, CUtlMemory<CUtlHashMapLarge<unsigned int, CDOTACompendiumDefinition*>::Node_t, int>::Purge, CUtlMemory<CUtlHashMapLarge<unsigned int, CDOTACompendiumDefinition*>::HashBucket_t, int>::Purge, memset
// callers: CDOTACompendiumSchema::LoadCompendiumDefinitions
// globals: GetEndMask(int)::bitStringEndMasks
void __fastcall CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition *,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::PurgeAndDeleteElements(
        CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >_0 *const this)
{
  __int64 v1; // r13
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t i; // r12d
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v4; // rax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::ElemType_t m_elem; // r14
  int m_numInts; // eax
  int m_numBits; // eax
  bool v8; // zf
  int v9; // eax
  uint32 *m_pInt; // rdx

  v1 = 0;
  for ( i = 0; this->m_nMaxElement > i; ++v1 )
  {
    v4 = &this->m_memNodes.m_pMemory[v1];
    if ( v4->m_iNextNode >= -1 )
    {
      m_elem = v4->m_elem;
      if ( m_elem != 0 )
      {
        CDOTACompendiumDefinition::~CDOTACompendiumDefinition(v4->m_elem);
        operator delete(m_elem);
      }
    }
    ++i;
  }
  m_numInts = this->m_bitsMigratedBuckets.m_numInts;
  this->m_cElements = 0;
  this->m_nMaxElement = 0;
  this->m_iNodeFreeListHead = -1;
  this->m_nMinRehashedBucket = -1;
  this->m_nMaxRehashedBucket = -1;
  if ( m_numInts != 0 )
  {
    if ( this->m_bitsMigratedBuckets.m_pInt != 0 )
    {
      if ( m_numInts > 1 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      m_numBits = this->m_bitsMigratedBuckets.m_numBits;
      this->m_bitsMigratedBuckets.m_pInt = 0;
      if ( m_numBits <= 0 )
      {
        *(4LL * this->m_bitsMigratedBuckets.m_numInts - 4) &= GetEndMask(int)::bitStringEndMasks[m_numBits & 0x1F];
        memset(
          &this->m_bitsMigratedBuckets.m_pInt[this->m_bitsMigratedBuckets.m_numInts],
          0,
          4LL * -this->m_bitsMigratedBuckets.m_numInts);
      }
    }
    this->m_bitsMigratedBuckets.m_numInts = 0;
  }
  else
  {
    v9 = this->m_bitsMigratedBuckets.m_numBits;
    if ( v9 <= 0 )
    {
      m_pInt = this->m_bitsMigratedBuckets.m_pInt;
      if ( m_pInt != 0 )
        *(m_pInt - 1) &= GetEndMask(int)::bitStringEndMasks[v9 & 0x1F];
    }
  }
  v8 = (this->m_memNodes.m_nGrowSize & 0xC0000000) == 0;
  this->m_bitsMigratedBuckets.m_numBits = 0;
  if ( v8 )
    CUtlMemory<CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition *,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::Node_t,int>::Purge(&this->m_memNodes);
  v8 = (this->m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecHashBuckets.m_Size = 0;
  if ( v8 )
    CUtlMemory<CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition *,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Purge(&this->m_vecHashBuckets.m_Memory);
}


