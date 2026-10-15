
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAItemDefinition::GetSlotTypeName  (line 107, @0x0000000002e4ea60, libserver.so)  // inlines: String
const char *__fastcall CDOTAItemDefinition::GetSlotTypeName(const CDOTAItemDefinition *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_symSlotType.u.m_Id != 0 )
    return this->m_symSlotType.u.m_pAsString;
  return result;
}


// CDOTAItemDefinition::GetHeroID  (line 109, @0x0000000002e4ea80, libserver.so)
int __fastcall CDOTAItemDefinition::GetHeroID(const CDOTAItemDefinition *const this)
{
  return this->m_nHeroID;
}


// CDOTAItemDefinition::GetLoadoutSlot  (line 113, @0x0000000002e4ea90, libserver.so)
int __fastcall CDOTAItemDefinition::GetLoadoutSlot(const CDOTAItemDefinition *const this)
{
  return this->m_nSlotType;
}


// CDOTAItemSchema::~CDOTAItemSchema  (line 273, @0x0000000002e63710, libserver.so)  // inlines: First, FreeInts, GetEndMask, IsIdxValid, IsValidIndex, LeftChild, Next, Purge, ReallocInts, RemoveAll, Resize, SetLeftChild, SetRightChild, memset, operator==, operator[], ~CBitVecT, ~CLargeVarBitVec, ~CUtlDict, ~CUtlHashMapLarge, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase
// calls: CVarBitVecBase<int, 32>::Resize, memset, CUtlMemory<CUtlHashMapLarge<long long unsigned int, CUtlVector<item_definition_index_t>*>::Node_t, int>::Purge, CUtlMemory<CUtlHashMapLarge<item_definition_index_t, CDOTAItemSchema::AssociatedLeagueInfo_t>::Node_t, int>::Purge, CUtlDict<customizable_courier_t*, int>::Purge, CUtlRBTree<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, CUtlDict<item_definition_index_t, int>::Purge, CUtlRBTree<CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, CUtlDict<unsigned int, int>::Purge, CUtlRBTree<CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge (21 total)
// callers: CEconItemSystem::~CEconItemSystem
// globals: GetEndMask(int)::bitStringEndMasks
void __fastcall CDOTAItemSchema::~CDOTAItemSchema(CDOTAItemSchema *const this)
{
  int m_Size; // eax
  CLargeVarBitVec *p_m_bitsMigratedBuckets; // rdi
  bool v4; // zf
  int m_numInts; // edx
  __int64 v6; // rax
  int m_numBits; // eax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *m_pMemory; // rdi
  int v9; // edx
  __int64 v10; // rax
  int v11; // eax
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::HashBucket_t *v12; // rdi
  unsigned __int16 index; // si
  __int64 m_nAllocationCount; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  UtlRBTreeNode_t<CUtlMap<unsigned int,CEconSchemaSymbol>::Node_t,short unsigned int> *v17; // rcx
  int v18; // edx
  uint32 *v19; // rcx
  int v20; // edx
  uint32 *m_pInt; // rcx

  this->_vptr_IEconItemSchema = &off_47A0830;
  m_Size = this->m_mapCustomGameTickets.m_vecHashBuckets.m_Size;
  p_m_bitsMigratedBuckets = &this->m_mapCustomGameTickets.m_bitsMigratedBuckets;
  p_m_bitsMigratedBuckets[1].m_FixedStorage[1] = 0;
  p_m_bitsMigratedBuckets[2].m_numBits = 0;
  p_m_bitsMigratedBuckets[1].m_FixedStorage[0] = -1;
  p_m_bitsMigratedBuckets[2].m_numInts = m_Size;
  LODWORD(p_m_bitsMigratedBuckets[2].m_pInt) = -1;
  CVarBitVecBase<int,32>::Resize(p_m_bitsMigratedBuckets, 0, 0);
  memset(
    this->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_pMemory,
    255,
    4LL * this->m_mapCustomGameTickets.m_vecHashBuckets.m_Size);
  CUtlMemory<CUtlHashMapLarge<unsigned long long,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int>> *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Node_t,int>::Purge(&this->m_mapCustomGameTickets.m_memNodes);
  if ( this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_pInt);
  v4 = (this->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_pInt = 0;
  this->m_mapCustomGameTickets.m_vecHashBuckets.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CUtlHashMapLarge<unsigned long long,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int>> *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::HashBucket_t,int>::Purge(&this->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory);
    if ( (this->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<unsigned long long,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int>> *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::HashBucket_t,int>::Purge(&this->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory);
  }
  this->m_LeagueDefIndex.m_cElements = 0;
  m_numInts = this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_numInts;
  v6 = this->m_LeagueDefIndex.m_vecHashBuckets.m_Size;
  this->m_LeagueDefIndex.m_nMaxElement = 0;
  this->m_LeagueDefIndex.m_iNodeFreeListHead = -1;
  this->m_LeagueDefIndex.m_nMaxRehashedBucket = -1;
  this->m_LeagueDefIndex.m_nMinRehashedBucket = v6;
  if ( m_numInts != 0 )
  {
    if ( this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_pInt != 0 )
    {
      if ( m_numInts > 1 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      m_numBits = this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_numBits;
      this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_pInt = 0;
      if ( m_numBits <= 0 )
      {
        *(4LL * this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_numInts - 4) &= GetEndMask(int)::bitStringEndMasks[m_numBits & 0x1F];
        memset(
          &this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_pInt[this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_numInts],
          0,
          4LL * -this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_numInts);
      }
      v6 = this->m_LeagueDefIndex.m_vecHashBuckets.m_Size;
      this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_numInts = 0;
    }
    else
    {
      this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_numInts = 0;
    }
  }
  else
  {
    v20 = this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_numBits;
    if ( v20 <= 0 )
    {
      m_pInt = this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_pInt;
      if ( m_pInt != 0 )
      {
        *(m_pInt - 1) &= GetEndMask(int)::bitStringEndMasks[v20 & 0x1F];
        v6 = this->m_LeagueDefIndex.m_vecHashBuckets.m_Size;
      }
    }
  }
  m_pMemory = this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_pMemory;
  this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_numBits = 0;
  memset(m_pMemory, 255, 4 * v6);
  if ( (this->m_LeagueDefIndex.m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_LeagueDefIndex.m_memNodes.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_LeagueDefIndex.m_memNodes.m_pMemory = 0;
    }
    this->m_LeagueDefIndex.m_memNodes.m_nAllocationCount = 0;
  }
  if ( this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_pInt);
  v4 = (this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_pInt = 0;
  this->m_LeagueDefIndex.m_vecHashBuckets.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Purge(&this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory);
    if ( (this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Purge(&this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory);
  }
  this->m_ItemDefToAssociatedLeague.m_cElements = 0;
  v9 = this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numInts;
  v10 = this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size;
  this->m_ItemDefToAssociatedLeague.m_nMaxElement = 0;
  this->m_ItemDefToAssociatedLeague.m_iNodeFreeListHead = -1;
  this->m_ItemDefToAssociatedLeague.m_nMaxRehashedBucket = -1;
  this->m_ItemDefToAssociatedLeague.m_nMinRehashedBucket = v10;
  if ( v9 != 0 )
  {
    if ( this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_pInt != 0 )
    {
      if ( v9 > 1 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      v11 = this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numBits;
      this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_pInt = 0;
      if ( v11 <= 0 )
      {
        *(4LL * this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numInts - 4) &= GetEndMask(int)::bitStringEndMasks[v11 & 0x1F];
        memset(
          &this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_pInt[this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numInts],
          0,
          4LL * -this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numInts);
      }
      v10 = this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size;
      this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numInts = 0;
    }
    else
    {
      this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numInts = 0;
    }
  }
  else
  {
    v18 = this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numBits;
    if ( v18 <= 0 )
    {
      v19 = this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_pInt;
      if ( v19 != 0 )
      {
        *(v19 - 1) &= GetEndMask(int)::bitStringEndMasks[v18 & 0x1F];
        v10 = this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size;
      }
    }
  }
  v12 = this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_pMemory;
  this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numBits = 0;
  memset(v12, 255, 4 * v10);
  if ( (this->m_ItemDefToAssociatedLeague.m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::Node_t,int>::Purge(&this->m_ItemDefToAssociatedLeague.m_memNodes);
  if ( this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_pInt);
  v4 = (this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_pInt = 0;
  this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::HashBucket_t,int>::Purge(&this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory);
    if ( (this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::HashBucket_t,int>::Purge(&this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory);
  }
  CUtlDict<customizable_courier_t *,int>::Purge(&this->m_dictCustomizableCouriers);
  CUtlRBTree<CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_dictCustomizableCouriers.m_Elements.m_Tree);
  if ( (this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_Elements);
  CUtlDict<item_definition_index_t,int>::Purge(&this->m_dictCustomizableCourierSlotItems);
  CUtlRBTree<CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree);
  if ( (this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_Elements);
  v4 = (this->m_vecItemizedHeroIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecItemizedHeroIDs.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<unsigned int,int>::Purge(&this->m_vecItemizedHeroIDs.m_Memory);
    if ( (this->m_vecItemizedHeroIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&this->m_vecItemizedHeroIDs.m_Memory);
  }
  CUtlDict<unsigned int,int>::Purge(&this->m_dictHeroIDs);
  CUtlRBTree<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_dictHeroIDs.m_Elements.m_Tree);
  if ( (this->m_dictHeroIDs.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_dictHeroIDs.m_Elements.m_Tree.m_Elements);
  index = this->m_mapHeroNames.m_Tree.m_LastAlloc.index;
  if ( index != 0xFFFF )
  {
    m_nAllocationCount = this->m_mapHeroNames.m_Tree.m_Elements.m_nAllocationCount;
    v15 = 0;
    v16 = 0;
    if ( m_nAllocationCount > 0 )
    {
      do
      {
        if ( v16 < m_nAllocationCount && v16 <= index )
        {
          v17 = &this->m_mapHeroNames.m_Tree.m_Elements.m_pMemory[v15];
          if ( v16 != v17->m_Left )
          {
            v17->m_Right = this->m_mapHeroNames.m_Tree.m_FirstFree;
            this->m_mapHeroNames.m_Tree.m_Elements.m_pMemory[v15].m_Left = v16;
            index = this->m_mapHeroNames.m_Tree.m_LastAlloc.index;
            this->m_mapHeroNames.m_Tree.m_FirstFree = v16;
          }
        }
        if ( v16 == index )
          break;
        m_nAllocationCount = this->m_mapHeroNames.m_Tree.m_Elements.m_nAllocationCount;
        if ( (v16 + 1) >= m_nAllocationCount )
          break;
        ++v16;
        ++v15;
      }
      while ( v16 != 0xFFFF );
    }
    this->m_mapHeroNames.m_Tree.m_Root = -1;
    this->m_mapHeroNames.m_Tree.m_NumElements = 0;
  }
  v4 = (this->m_mapHeroNames.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapHeroNames.m_Tree.m_FirstFree = -1;
  if ( v4 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CEconSchemaSymbol,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapHeroNames.m_Tree.m_Elements);
    v4 = (this->m_mapHeroNames.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapHeroNames.m_Tree.m_LastAlloc.index = -1;
    if ( v4 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CEconSchemaSymbol,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapHeroNames.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapHeroNames.m_Tree.m_LastAlloc.index = -1;
  }
  v4 = (this->m_vecPlayerLoadoutSlots.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecPlayerLoadoutSlots.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<int,int>::Purge(&this->m_vecPlayerLoadoutSlots.m_Memory);
    if ( (this->m_vecPlayerLoadoutSlots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_vecPlayerLoadoutSlots.m_Memory);
  }
  v4 = (this->m_vecItemContextRecipes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecItemContextRecipes.m_Size = 0;
  if ( !v4
    || (CUtlMemory<CDOTAItemDefinition const*,int>::Purge(&this->m_vecItemContextRecipes.m_Memory),
        (this->m_vecItemContextRecipes.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CEconItemSchema::~CEconItemSchema(this);
  }
  else
  {
    CUtlMemory<CDOTAItemDefinition const*,int>::Purge(&this->m_vecItemContextRecipes.m_Memory);
    CEconItemSchema::~CEconItemSchema(this);
  }
}


// CDOTAItemSchema::~CDOTAItemSchema  (line 273, @0x0000000002e63e70, libserver.so)  // inlines: First, FreeInts, GetEndMask, IsIdxValid, IsValidIndex, LeftChild, Next, Purge, ReallocInts, RemoveAll, Resize, SetLeftChild, SetRightChild, memset, operator==, operator[], ~CBitVecT, ~CDOTAItemSchema, ~CLargeVarBitVec, ~CUtlDict, ~CUtlHashMapLarge, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase
// calls: memset, CUtlMemory<CUtlHashMapLarge<long long unsigned int, CUtlVector<item_definition_index_t>*>::Node_t, int>::Purge, CVarBitVecBase<int, 32>::Resize, CUtlMemory<CUtlHashMapLarge<item_definition_index_t, CDOTAItemSchema::AssociatedLeagueInfo_t>::Node_t, int>::Purge, CUtlDict<customizable_courier_t*, int>::Purge, CUtlRBTree<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, CUtlDict<item_definition_index_t, int>::Purge, CUtlRBTree<CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, CUtlDict<unsigned int, int>::Purge, CUtlRBTree<CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge (22 total)
// globals: GetEndMask(int)::bitStringEndMasks
void __fastcall CDOTAItemSchema::~CDOTAItemSchema(CDOTAItemSchema *const this)
{
  int m_numInts; // edx
  __int64 m_Size; // rax
  int m_numBits; // eax
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::HashBucket_t *m_pMemory; // rdi
  bool v6; // zf
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v7; // eax
  int v8; // edx
  __int64 v9; // rax
  int v10; // eax
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::HashBucket_t *v11; // rdi
  unsigned __int16 index; // si
  __int64 m_nAllocationCount; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  UtlRBTreeNode_t<CUtlMap<unsigned int,CEconSchemaSymbol>::Node_t,short unsigned int> *v16; // rcx
  int v17; // edx
  uint32 *v18; // rcx
  int v19; // edx
  uint32 *m_pInt; // rcx

  m_numInts = this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_numInts;
  this->_vptr_IEconItemSchema = &off_47A0830;
  m_Size = this->m_mapCustomGameTickets.m_vecHashBuckets.m_Size;
  this->m_mapCustomGameTickets.m_cElements = 0;
  this->m_mapCustomGameTickets.m_nMaxElement = 0;
  this->m_mapCustomGameTickets.m_iNodeFreeListHead = -1;
  this->m_mapCustomGameTickets.m_nMaxRehashedBucket = -1;
  this->m_mapCustomGameTickets.m_nMinRehashedBucket = m_Size;
  if ( m_numInts != 0 )
  {
    if ( this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_pInt != 0 )
    {
      if ( m_numInts > 1 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      m_numBits = this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_numBits;
      this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_pInt = 0;
      if ( m_numBits <= 0 )
      {
        *(4LL * this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_numInts - 4) &= GetEndMask(int)::bitStringEndMasks[m_numBits & 0x1F];
        memset(
          &this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_pInt[this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_numInts],
          0,
          4LL * -this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_numInts);
      }
      m_Size = this->m_mapCustomGameTickets.m_vecHashBuckets.m_Size;
      this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_numInts = 0;
    }
    else
    {
      this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_numInts = 0;
    }
  }
  else
  {
    v19 = this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_numBits;
    if ( v19 <= 0 )
    {
      m_pInt = this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_pInt;
      if ( m_pInt != 0 )
      {
        *(m_pInt - 1) &= GetEndMask(int)::bitStringEndMasks[v19 & 0x1F];
        m_Size = this->m_mapCustomGameTickets.m_vecHashBuckets.m_Size;
      }
    }
  }
  m_pMemory = this->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_pMemory;
  this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_numBits = 0;
  memset(m_pMemory, 255, 4 * m_Size);
  CUtlMemory<CUtlHashMapLarge<unsigned long long,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int>> *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Node_t,int>::Purge(&this->m_mapCustomGameTickets.m_memNodes);
  if ( this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_pInt);
  v6 = (this->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_pInt = 0;
  this->m_mapCustomGameTickets.m_vecHashBuckets.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CUtlHashMapLarge<unsigned long long,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int>> *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::HashBucket_t,int>::Purge(&this->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory);
    if ( (this->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<unsigned long long,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int>> *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::HashBucket_t,int>::Purge(&this->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory);
  }
  v7 = this->m_LeagueDefIndex.m_vecHashBuckets.m_Size;
  this->m_LeagueDefIndex.m_cElements = 0;
  this->m_LeagueDefIndex.m_nMaxElement = 0;
  this->m_LeagueDefIndex.m_iNodeFreeListHead = -1;
  this->m_LeagueDefIndex.m_nMinRehashedBucket = v7;
  this->m_LeagueDefIndex.m_nMaxRehashedBucket = -1;
  CVarBitVecBase<int,32>::Resize(&this->m_LeagueDefIndex.m_bitsMigratedBuckets, 0, 0);
  memset(
    this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_pMemory,
    255,
    4LL * this->m_LeagueDefIndex.m_vecHashBuckets.m_Size);
  if ( (this->m_LeagueDefIndex.m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_LeagueDefIndex.m_memNodes.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_LeagueDefIndex.m_memNodes.m_pMemory = 0;
    }
    this->m_LeagueDefIndex.m_memNodes.m_nAllocationCount = 0;
  }
  if ( this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_pInt);
  v6 = (this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_pInt = 0;
  this->m_LeagueDefIndex.m_vecHashBuckets.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Purge(&this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory);
    if ( (this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Purge(&this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory);
  }
  this->m_ItemDefToAssociatedLeague.m_cElements = 0;
  v8 = this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numInts;
  v9 = this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size;
  this->m_ItemDefToAssociatedLeague.m_nMaxElement = 0;
  this->m_ItemDefToAssociatedLeague.m_iNodeFreeListHead = -1;
  this->m_ItemDefToAssociatedLeague.m_nMaxRehashedBucket = -1;
  this->m_ItemDefToAssociatedLeague.m_nMinRehashedBucket = v9;
  if ( v8 != 0 )
  {
    if ( this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_pInt != 0 )
    {
      if ( v8 > 1 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      v10 = this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numBits;
      this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_pInt = 0;
      if ( v10 <= 0 )
      {
        *(4LL * this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numInts - 4) &= GetEndMask(int)::bitStringEndMasks[v10 & 0x1F];
        memset(
          &this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_pInt[this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numInts],
          0,
          4LL * -this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numInts);
      }
      v9 = this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size;
      this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numInts = 0;
    }
    else
    {
      this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numInts = 0;
    }
  }
  else
  {
    v17 = this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numBits;
    if ( v17 <= 0 )
    {
      v18 = this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_pInt;
      if ( v18 != 0 )
      {
        *(v18 - 1) &= GetEndMask(int)::bitStringEndMasks[v17 & 0x1F];
        v9 = this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size;
      }
    }
  }
  v11 = this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_pMemory;
  this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numBits = 0;
  memset(v11, 255, 4 * v9);
  if ( (this->m_ItemDefToAssociatedLeague.m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::Node_t,int>::Purge(&this->m_ItemDefToAssociatedLeague.m_memNodes);
  if ( this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_pInt);
  v6 = (this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_pInt = 0;
  this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::HashBucket_t,int>::Purge(&this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory);
    if ( (this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::HashBucket_t,int>::Purge(&this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory);
  }
  CUtlDict<customizable_courier_t *,int>::Purge(&this->m_dictCustomizableCouriers);
  CUtlRBTree<CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_dictCustomizableCouriers.m_Elements.m_Tree);
  if ( (this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_Elements);
  CUtlDict<item_definition_index_t,int>::Purge(&this->m_dictCustomizableCourierSlotItems);
  CUtlRBTree<CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree);
  if ( (this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_Elements);
  v6 = (this->m_vecItemizedHeroIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecItemizedHeroIDs.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<unsigned int,int>::Purge(&this->m_vecItemizedHeroIDs.m_Memory);
    if ( (this->m_vecItemizedHeroIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&this->m_vecItemizedHeroIDs.m_Memory);
  }
  CUtlDict<unsigned int,int>::Purge(&this->m_dictHeroIDs);
  CUtlRBTree<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_dictHeroIDs.m_Elements.m_Tree);
  if ( (this->m_dictHeroIDs.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_dictHeroIDs.m_Elements.m_Tree.m_Elements);
  index = this->m_mapHeroNames.m_Tree.m_LastAlloc.index;
  if ( index != 0xFFFF )
  {
    m_nAllocationCount = this->m_mapHeroNames.m_Tree.m_Elements.m_nAllocationCount;
    v14 = 0;
    v15 = 0;
    if ( m_nAllocationCount > 0 )
    {
      do
      {
        if ( v15 < m_nAllocationCount && v15 <= index )
        {
          v16 = &this->m_mapHeroNames.m_Tree.m_Elements.m_pMemory[v14];
          if ( v15 != v16->m_Left )
          {
            v16->m_Right = this->m_mapHeroNames.m_Tree.m_FirstFree;
            this->m_mapHeroNames.m_Tree.m_Elements.m_pMemory[v14].m_Left = v15;
            index = this->m_mapHeroNames.m_Tree.m_LastAlloc.index;
            this->m_mapHeroNames.m_Tree.m_FirstFree = v15;
          }
        }
        if ( v15 == index )
          break;
        m_nAllocationCount = this->m_mapHeroNames.m_Tree.m_Elements.m_nAllocationCount;
        if ( (v15 + 1) >= m_nAllocationCount )
          break;
        ++v15;
        ++v14;
      }
      while ( v15 != 0xFFFF );
    }
    this->m_mapHeroNames.m_Tree.m_Root = -1;
    this->m_mapHeroNames.m_Tree.m_NumElements = 0;
  }
  v6 = (this->m_mapHeroNames.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapHeroNames.m_Tree.m_FirstFree = -1;
  if ( v6 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CEconSchemaSymbol,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapHeroNames.m_Tree.m_Elements);
    v6 = (this->m_mapHeroNames.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_mapHeroNames.m_Tree.m_LastAlloc.index = -1;
    if ( v6 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CEconSchemaSymbol,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapHeroNames.m_Tree.m_Elements);
  }
  else
  {
    this->m_mapHeroNames.m_Tree.m_LastAlloc.index = -1;
  }
  v6 = (this->m_vecPlayerLoadoutSlots.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecPlayerLoadoutSlots.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<int,int>::Purge(&this->m_vecPlayerLoadoutSlots.m_Memory);
    if ( (this->m_vecPlayerLoadoutSlots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_vecPlayerLoadoutSlots.m_Memory);
  }
  v6 = (this->m_vecItemContextRecipes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecItemContextRecipes.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CDOTAItemDefinition const*,int>::Purge(&this->m_vecItemContextRecipes.m_Memory);
    if ( (this->m_vecItemContextRecipes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTAItemDefinition const*,int>::Purge(&this->m_vecItemContextRecipes.m_Memory);
  }
  CEconItemSchema::~CEconItemSchema(this);
  operator delete(this);
}


// CDOTAItemSchema::GetLoadoutSlotCount  (line 337, @0x0000000002e4eaa0, libserver.so)
int __fastcall CDOTAItemSchema::GetLoadoutSlotCount(CDOTAItemSchema *const this)
{
  return 45;
}


// CDOTAItemSchema::GetLoadoutSlotName  (line 338, @0x0000000002e4eab0, libserver.so)  // inlines: GetDOTASlotName
// globals: GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings
const char *__fastcall CDOTAItemSchema::GetLoadoutSlotName(CDOTAItemSchema *const this, int iSlot)
{
  if ( iSlot > 0x2C )
    return 0;
  else
    return *(&GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings + iSlot);
}


// CDOTAItemSchema::GetLoadoutSlot  (line 339, @0x0000000002e53cd0, libserver.so)  // inlines: GetDOTASlotType, _V_strcmp
// calls: strcmp
// globals: GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings
int __fastcall CDOTAItemSchema::GetLoadoutSlot(CDOTAItemSchema *const this, const char *pszSlotName)
{
  __int64 v3; // rbx

  if ( pszSlotName == 0 )
    return -1;
  v3 = 0;
  while ( strcmp(*(&GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings + v3), pszSlotName) != 0 )
  {
    if ( ++v3 == 45 )
      return -1;
  }
  return v3;
}


