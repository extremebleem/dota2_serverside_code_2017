
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CVarBitVec::~CVarBitVec  (line 1165, @0x0000000001eeb150, libserver.so)  // inlines: FreeInts, ~CBitVecT, ~CVarBitVecBase, ~CVarBitVecT
void __fastcall CVarBitVec::~CVarBitVec(CVarBitVec *const this)
{
  if ( this->m_numInts > 1u )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_pInt);
  this->m_pInt = 0;
}


// CVarBitVecBase<int, 32>::Resize  (line 2423, @0x00000000024a6180, libserver.so)  // inlines: AllocInts, CalcNumIntsForBits, FreeInts, GetEndMask, ReallocInts, V_memcpy, memcpy, memset
// calls: memset, memcpy
// callers: CDOTACompendiumSchema::LoadCompendiumDefinitions, CDOTAGameManager::DestroyGameKeyValues, CDOTAGameManager::~CDOTAGameManager, CDOTAGameManager::SetupGameKeyValues, CEconItemSchema::~CEconItemSchema, CDOTAItemSchema::~CDOTAItemSchema, CDOTAItemSchema::BInitCustomGameTickets, CDOTAItemSchema::BuildAssociatedLeagueInfo, CDOTAItemSchema::AddInfoToLeagueCache, CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, MurmurHash3Functor<item_definition_index_t> >::InsertInternal, CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functor<CEconSchemaSymbol> >::InsertInternal, CEconItemSchema::BInitItems (34 total)
// globals: GetEndMask(int)::bitStringEndMasks
void __fastcall CVarBitVecBase<int,32>::Resize(CVarBitVecBase<int,32> *const this, int resizeNumBits, bool bClearAll)
{
  int v5; // r12d
  __int64 m_numInts; // rax
  int v8; // r12d
  CVarBitVecBase<int,32> *m_pInt; // r14
  uint32 *v10; // rcx
  uint32 *v11; // rax
  uint32 *v12; // rax
  unsigned int *m_FixedStorage; // [rsp+8h] [rbp-38h]

  v5 = resizeNumBits + 62;
  if ( resizeNumBits + 31 >= 0 )
    v5 = resizeNumBits + 31;
  m_numInts = this->m_numInts;
  v8 = v5 >> 5;
  if ( m_numInts == v8 )
  {
    if ( bClearAll )
    {
      m_pInt = this->m_pInt;
LABEL_12:
      if ( m_pInt != 0 )
        memset(m_pInt, 0, 4LL * v8);
      goto LABEL_14;
    }
    if ( resizeNumBits >= this->m_numBits )
    {
      v10 = this->m_pInt;
      if ( v10 != 0 )
        v10[m_numInts - 1] &= GetEndMask(int)::bitStringEndMasks[this->m_numBits & 0x1F];
    }
  }
  else
  {
    m_pInt = this->m_pInt;
    if ( m_pInt == 0 )
    {
      if ( v8 != 0 )
      {
        if ( v8 <= 1 )
        {
          m_pInt = this->m_FixedStorage;
          this->m_pInt = this->m_FixedStorage;
        }
        else
        {
          v11 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v8);
          this->m_pInt = v11;
          m_pInt = v11;
        }
      }
      goto LABEL_11;
    }
    if ( v8 != 0 )
    {
      if ( m_pInt == this->m_FixedStorage )
      {
        if ( v8 > 1 )
        {
          v12 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v8);
          this->m_pInt = v12;
          *v12 = m_pInt->m_numBits;
        }
      }
      else if ( v8 <= 1 )
      {
        m_FixedStorage = this->m_FixedStorage;
        memcpy(this->m_FixedStorage, m_pInt, 4LL * v8);
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_pInt);
        this->m_pInt = m_FixedStorage;
      }
      else
      {
        this->m_pInt = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_pInt, 4LL * v8);
      }
      if ( bClearAll )
      {
LABEL_10:
        m_pInt = this->m_pInt;
LABEL_11:
        this->m_numInts = v8;
        goto LABEL_12;
      }
    }
    else
    {
      if ( m_numInts > 1 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_pInt);
      this->m_pInt = 0;
      if ( bClearAll )
        goto LABEL_10;
    }
    if ( resizeNumBits >= this->m_numBits )
    {
      this->m_pInt[this->m_numInts - 1] &= GetEndMask(int)::bitStringEndMasks[this->m_numBits & 0x1F];
      memset(&this->m_pInt[this->m_numInts], 0, 4LL * (v8 - this->m_numInts));
    }
    this->m_numInts = v8;
  }
LABEL_14:
  this->m_numBits = resizeNumBits;
}


