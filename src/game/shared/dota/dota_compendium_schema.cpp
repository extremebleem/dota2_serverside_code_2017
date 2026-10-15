
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTACompendiumSchema::Get  (line 22, @0x0000000002477100, libserver.so)  // inlines: CBitVecT, CDOTACompendiumSchema, CLargeVarBitVec, CUtlHashMapLarge, CUtlMemory, CUtlVector, CUtlVectorBase, CVarBitVecBase, memset
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: CDOTAEventDefinition::GetPredictions, CDOTAInGamePredictionGameSystem::GameActivate, CDOTAInGamePredictionGameSystem::BuildActivePredictions, dota_test_in_game_prediction, CDOTAGCServerSystem::PostInit
// globals: `guard variable for'CDOTACompendiumSchema::Get(void)::s_instance, CDOTACompendiumSchema::Get(void)::s_instance, __dso_handle, CDOTACompendiumSchema::~CDOTACompendiumSchema()
CDOTACompendiumSchema_0 *__cdecl CDOTACompendiumSchema::Get()
{
  if ( `guard variable for'CDOTACompendiumSchema::Get(void)::s_instance != 0 )
    return &CDOTACompendiumSchema::Get(void)::s_instance;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTACompendiumSchema::Get(void)::s_instance) != 0 )
  {
    CDOTACompendiumSchema::Get(void)::s_instance.m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size = 0;
    CDOTACompendiumSchema::Get(void)::s_instance.m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_pMemory = 0;
    CDOTACompendiumSchema::Get(void)::s_instance.m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_nAllocationCount = 0;
    CDOTACompendiumSchema::Get(void)::s_instance.m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_nGrowSize = 0;
    *&CDOTACompendiumSchema::Get(void)::s_instance.m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numBits = 0;
    CDOTACompendiumSchema::Get(void)::s_instance.m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_pInt = 0;
    *CDOTACompendiumSchema::Get(void)::s_instance.m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_FixedStorage = 0;
    CDOTACompendiumSchema::Get(void)::s_instance.m_mapCompendiumDefinitions.m_memNodes.m_pMemory = 0;
    CDOTACompendiumSchema::Get(void)::s_instance.m_mapCompendiumDefinitions.m_memNodes.m_nAllocationCount = 0;
    CDOTACompendiumSchema::Get(void)::s_instance.m_mapCompendiumDefinitions.m_memNodes.m_nGrowSize = 0;
    CDOTACompendiumSchema::Get(void)::s_instance.m_mapCompendiumDefinitions.m_cElements = 0;
    CDOTACompendiumSchema::Get(void)::s_instance.m_mapCompendiumDefinitions.m_nMaxElement = 0;
    CDOTACompendiumSchema::Get(void)::s_instance.m_mapCompendiumDefinitions.m_nMinRehashedBucket = -1;
    CDOTACompendiumSchema::Get(void)::s_instance.m_mapCompendiumDefinitions.m_nMaxRehashedBucket = -1;
    CDOTACompendiumSchema::Get(void)::s_instance.m_mapCompendiumDefinitions.m_iNodeFreeListHead = -1;
    CDOTACompendiumSchema::Get(void)::s_instance.m_bIsInitialized = 0;
    __cxa_guard_release(&`guard variable for'CDOTACompendiumSchema::Get(void)::s_instance);
    __cxa_atexit(
      CDOTACompendiumSchema::~CDOTACompendiumSchema,
      &CDOTACompendiumSchema::Get(void)::s_instance,
      &_dso_handle);
  }
  return &CDOTACompendiumSchema::Get(void)::s_instance;
}


// CDOTACompendiumSchema::CDOTACompendiumSchema  (line 28, @0x0000000002477070, libserver.so)  // inlines: CBitVecT, CLargeVarBitVec, CUtlHashMapLarge, CUtlMemory, CUtlVector, CUtlVectorBase, CVarBitVecBase, ClearAll, memset
// calls: memset
void __fastcall CDOTACompendiumSchema::CDOTACompendiumSchema(CDOTACompendiumSchema_0 *const this)
{
  this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size = 0;
  this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_pMemory = 0;
  this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_nAllocationCount = 0;
  this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_nGrowSize = 0;
  *&this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numBits = 0;
  this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_pInt = 0;
  *this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_FixedStorage = 0;
  memset(0, 0, 0);
  this->m_mapCompendiumDefinitions.m_memNodes.m_pMemory = 0;
  this->m_mapCompendiumDefinitions.m_memNodes.m_nAllocationCount = 0;
  this->m_mapCompendiumDefinitions.m_memNodes.m_nGrowSize = 0;
  this->m_mapCompendiumDefinitions.m_cElements = 0;
  this->m_mapCompendiumDefinitions.m_nMaxElement = 0;
  this->m_mapCompendiumDefinitions.m_nMinRehashedBucket = -1;
  this->m_mapCompendiumDefinitions.m_nMaxRehashedBucket = -1;
  this->m_mapCompendiumDefinitions.m_iNodeFreeListHead = -1;
  this->m_bIsInitialized = 0;
}


// CDOTACompendiumSchema::~CDOTACompendiumSchema  (line 33, @0x0000000002496a30, libserver.so)  // inlines: FreeInts, GetEndMask, IsValidIndex, Purge, PurgeAndDeleteElements, ReallocInts, RemoveAll, Resize, memset, operator[], ~CBitVecT, ~CLargeVarBitVec, ~CUtlHashMapLarge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVecBase
// calls: CDOTACompendiumDefinition::~CDOTACompendiumDefinition, operator delete, CUtlMemory<CUtlHashMapLarge<unsigned int, CDOTACompendiumDefinition*>::Node_t, int>::Purge, CUtlMemory<CUtlHashMapLarge<unsigned int, CDOTACompendiumDefinition*>::HashBucket_t, int>::Purge, memset
// globals: GetEndMask(int)::bitStringEndMasks
void __fastcall CDOTACompendiumSchema::~CDOTACompendiumSchema(CDOTACompendiumSchema_0 *const this)
{
  __int64 v1; // r13
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t i; // r12d
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v4; // rax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::ElemType_t m_elem; // r14
  int m_numInts; // eax
  int m_numBits; // eax
  bool v8; // zf
  __int64 m_Size; // rax
  int v10; // edx
  int v11; // eax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *m_pMemory; // rdi
  int v13; // edx
  uint32 *v14; // rcx
  int v15; // eax
  uint32 *m_pInt; // rdx

  v1 = 0;
  for ( i = 0; this->m_mapCompendiumDefinitions.m_nMaxElement > i; ++v1 )
  {
    v4 = &this->m_mapCompendiumDefinitions.m_memNodes.m_pMemory[v1];
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
  m_numInts = this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numInts;
  this->m_mapCompendiumDefinitions.m_cElements = 0;
  this->m_mapCompendiumDefinitions.m_nMaxElement = 0;
  this->m_mapCompendiumDefinitions.m_iNodeFreeListHead = -1;
  this->m_mapCompendiumDefinitions.m_nMinRehashedBucket = -1;
  this->m_mapCompendiumDefinitions.m_nMaxRehashedBucket = -1;
  if ( m_numInts != 0 )
  {
    if ( this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_pInt != 0 )
    {
      if ( m_numInts > 1 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      m_numBits = this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numBits;
      this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_pInt = 0;
      if ( m_numBits <= 0 )
      {
        *(4LL * this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numInts - 4) &= GetEndMask(int)::bitStringEndMasks[m_numBits & 0x1F];
        memset(
          &this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_pInt[this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numInts],
          0,
          4LL * -this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numInts);
      }
    }
    this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numInts = 0;
  }
  else
  {
    v15 = this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numBits;
    if ( v15 <= 0 )
    {
      m_pInt = this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_pInt;
      if ( m_pInt != 0 )
        *(m_pInt - 1) &= GetEndMask(int)::bitStringEndMasks[v15 & 0x1F];
    }
  }
  v8 = (this->m_mapCompendiumDefinitions.m_memNodes.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numBits = 0;
  if ( v8 )
    CUtlMemory<CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition *,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::Node_t,int>::Purge(&this->m_mapCompendiumDefinitions.m_memNodes);
  this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size = 0;
  m_Size = 0;
  if ( (this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition *,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Purge(&this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory);
    m_Size = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size;
  }
  v10 = this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numInts;
  this->m_mapCompendiumDefinitions.m_cElements = 0;
  this->m_mapCompendiumDefinitions.m_nMaxElement = 0;
  this->m_mapCompendiumDefinitions.m_iNodeFreeListHead = -1;
  this->m_mapCompendiumDefinitions.m_nMinRehashedBucket = m_Size;
  this->m_mapCompendiumDefinitions.m_nMaxRehashedBucket = -1;
  if ( v10 != 0 )
  {
    if ( this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_pInt != 0 )
    {
      if ( v10 > 1 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      v11 = this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numBits;
      this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_pInt = 0;
      if ( v11 <= 0 )
      {
        *(4LL * this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numInts - 4) &= GetEndMask(int)::bitStringEndMasks[v11 & 0x1F];
        memset(
          &this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_pInt[this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numInts],
          0,
          4LL * -this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numInts);
      }
      m_Size = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size;
      this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numInts = 0;
    }
    else
    {
      this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numInts = 0;
    }
  }
  else
  {
    v13 = this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numBits;
    if ( v13 <= 0 )
    {
      v14 = this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_pInt;
      if ( v14 != 0 )
      {
        *(v14 - 1) &= GetEndMask(int)::bitStringEndMasks[v13 & 0x1F];
        m_Size = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size;
      }
    }
  }
  m_pMemory = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_pMemory;
  this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numBits = 0;
  memset(m_pMemory, 255, 4 * m_Size);
  if ( (this->m_mapCompendiumDefinitions.m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition *,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::Node_t,int>::Purge(&this->m_mapCompendiumDefinitions.m_memNodes);
  if ( this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_numInts > 1 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_pInt);
  v8 = (this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_pInt = 0;
  this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size = 0;
  if ( v8 )
  {
    CUtlMemory<CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition *,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Purge(&this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory);
    if ( (this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition *,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Purge(&this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory);
  }
}


// CDOTACompendiumSchema::Initialize  (line 38, @0x0000000002496a00, libserver.so)
// calls: CDOTACompendiumSchema::LoadCompendiumDefinitions
// callers: CDOTAGCServerSystem::PostInit
void __fastcall CDOTACompendiumSchema::Initialize(CDOTACompendiumSchema_0 *const this)
{
  if ( !this->m_bIsInitialized )
  {
    CDOTACompendiumSchema::LoadCompendiumDefinitions(this);
    this->m_bIsInitialized = 1;
  }
}


// CDOTACompendiumSchema::LoadPredictionTemplates  (line 49, @0x0000000002470a90, libserver.so)
void __fastcall CDOTACompendiumSchema::LoadPredictionTemplates(CDOTACompendiumSchema_0 *const this)
{
  ;
}


// CDOTACompendiumSchema::LoadCompendiumDefinitions  (line 74, @0x00000000024960b0, libserver.so)  // inlines: AddMultipleToTail, AllocNode, Bitvec_Set, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTACompendiumDefinition*>, CopyConstruct<unsigned int>, Destruct<CUtlString>, Element, EnsureCapacity, Find, FindInBucket, FreeNodeIDToIndex, Get, GrowMemory, GrowVector, IncrementalRehash, Insert, InsertInternal, InsertMultipleBefore, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<unsigned int>, Purge, RehashNodesInBucket, RemoveAll, Set, UnlinkNodeFromBucket, V_FileBase<long unsigned int>, V_strcpy_safe<260ul>, atoi, memcpy, memset, operator(), operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlHashMapLarge<unsigned int, CDOTACompendiumDefinition*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::PurgeAndDeleteElements, BuildFileList, CUtlString::Get, _V_strncpy, V_StripFilename, _V_FileBase, strtol, KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, CDOTACompendiumDefinition::LoadCompendiumDefinition, KeyValues::deleteThis (27 total)
// callers: CDOTACompendiumSchema::Initialize
// strings: "compendium_definition.txt", "scripts/compendiums"
void __fastcall CDOTACompendiumSchema::LoadCompendiumDefinitions(CDOTACompendiumSchema_0 *const this)
{
  const char *v2; // r12
  IBaseFileSystem *v3; // rsi
  uint32 v4; // r12d
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *m_pMemory; // r10
  unsigned int v6; // esi
  __int64 m_iNode; // rax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v8; // rcx
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v9; // rax
  __int64 m_iNextNode; // rax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_nMinRehashedBucket; // edi
  int i; // edx
  int v13; // ecx
  __int64 v14; // rax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v15; // rcx
  __int64 v16; // rax
  int m_Size; // ebx
  __int64 j; // r12
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_cElements; // eax
  int v20; // edx
  int v21; // r15d
  uint32 m_nGrowSize; // eax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v23; // rsi
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v24; // rax
  int v25; // eax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v26; // r14d
  int v27; // r13d
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v28; // rdi
  size_t v29; // rdx
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v30; // edx
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v31; // ecx
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_nMaxRehashedBucket; // r8d
  int v33; // eax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v34; // rax
  bool v35; // cc
  int v36; // r10d
  int v37; // r15d
  uint32 *m_pInt; // rax
  int v39; // r14d
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v40; // r12d
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v41; // edx
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v42; // r8
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v43; // rax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v44; // r15d
  int v45; // esi
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v46; // rcx
  __int64 v47; // rax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v48; // rcx
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v49; // edx
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v50; // rax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_iNodeFreeListHead; // esi
  __int64 v52; // r13
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v53; // rax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v54; // ecx
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v55; // rax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v56; // rax
  __int64 v57; // rax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v58; // rcx
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v59; // rax
  __int64 v60; // rax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v61; // eax
  int m_nAllocationCount; // eax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v63; // rax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v64; // r13
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v65; // rax
  CLargeVarBitVec *p_m_bitsMigratedBuckets; // [rsp+10h] [rbp-230h]
  CDOTACompendiumDefinition *pMem; // [rsp+20h] [rbp-220h]
  __int64 v68; // [rsp+38h] [rbp-208h]
  unsigned int v69; // [rsp+44h] [rbp-1FCh]
  uint32 nLeagueID; // [rsp+48h] [rbp-1F8h]
  KeyValues *pKeyValues; // [rsp+50h] [rbp-1F0h]
  unsigned __int64 v72; // [rsp+58h] [rbp-1E8h]
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > leagues; // [rsp+60h] [rbp-1E0h] BYREF
  char pLeagueID[128]; // [rsp+80h] [rbp-1C0h] BYREF
  char pTemp[260]; // [rsp+100h] [rbp-140h] BYREF
  unsigned __int64 v76; // [rsp+208h] [rbp-38h]

  v76 = __readfsqword(0x28u);
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition *,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::PurgeAndDeleteElements(&this->m_mapCompendiumDefinitions);
  leagues.m_Size = 0;
  leagues.m_Memory.m_pMemory = 0;
  leagues.m_Memory.m_nAllocationCount = 0;
  leagues.m_Memory.m_nGrowSize = 0;
  BuildFileList(
    "scripts/compendiums",
    "compendium_definition.txt",
    "GAME",
    1,
    BuildFileListType_t::BFL_TYPE_FILES_ONLY,
    &leagues);
  if ( leagues.m_Size <= 0 )
  {
    m_Size = leagues.m_Size;
    goto LABEL_23;
  }
  v72 = 0;
  v68 = 8LL * (leagues.m_Size - 1) + 8;
  p_m_bitsMigratedBuckets = &this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets;
  do
  {
    v2 = CUtlString::Get(&leagues.m_Memory.m_pMemory[v72 / 8]);
    _V_strncpy(pTemp, v2, 260);
    V_StripFilename(pTemp);
    _V_FileBase(pTemp, pLeagueID, 128);
    nLeagueID = strtol(pLeagueID, 0, 10);
    pKeyValues = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(pKeyValues, "root");
    v3 = 0;
    if ( g_pFullFileSystem != 0 )
      v3 = &g_pFullFileSystem->IBaseFileSystem;
    if ( KeyValues::LoadFromFile(pKeyValues, v3, v2, "GAME", 0) )
    {
      v4 = nLeagueID;
      if ( this->m_mapCompendiumDefinitions.m_cElements != 0 )
      {
        m_pMemory = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_pMemory;
        v6 = (-1028477387
            * ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13)))
           ^ ((-1028477387
             * ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13))) >> 16);
        m_iNode = m_pMemory[v6 & (this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size - 1)].m_iNode;
        if ( m_iNode != -1 )
        {
          v8 = this->m_mapCompendiumDefinitions.m_memNodes.m_pMemory;
          v9 = &v8[m_iNode];
          if ( nLeagueID == v9->m_key )
            goto LABEL_20;
          while ( 1 )
          {
            m_iNextNode = v9->m_iNextNode;
            if ( m_iNextNode == -1 )
              break;
            v9 = &v8[m_iNextNode];
            if ( nLeagueID == v9->m_key )
              goto LABEL_20;
          }
        }
        m_nMinRehashedBucket = this->m_mapCompendiumDefinitions.m_nMinRehashedBucket;
        for ( i = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size >> 1; i >= m_nMinRehashedBucket; i >>= 1 )
        {
          v13 = v6 & (i - 1);
          if ( ((1 << (((53
                       * ((107 * (nLeagueID ^ BYTE2(nLeagueID)))
                        ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13)))
                      ^ ((-1028477387
                        * ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID)))
                         ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13))) >> 16))
                     & (i - 1)))
              & this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_pInt[v13 >> 5]) == 0 )
          {
            v14 = m_pMemory[v13].m_iNode;
            if ( v14 != -1 )
            {
              v15 = this->m_mapCompendiumDefinitions.m_memNodes.m_pMemory;
              v9 = &v15[v14];
              if ( nLeagueID == v9->m_key )
                goto LABEL_20;
              while ( 1 )
              {
                v16 = v9->m_iNextNode;
                if ( v16 == -1 )
                  break;
                v9 = &v15[v16];
                if ( nLeagueID == v9->m_key )
                  goto LABEL_20;
              }
            }
          }
        }
      }
      pMem = operator new(0xC0u);
      CDOTACompendiumDefinition::CDOTACompendiumDefinition(pMem, nLeagueID);
      m_cElements = this->m_mapCompendiumDefinitions.m_cElements;
      v20 = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size;
      if ( m_cElements >= this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size )
      {
        v21 = 16;
        if ( 2 * v20 > 15 )
          v21 = 2 * v20;
        if ( v21 <= this->m_mapCompendiumDefinitions.m_memNodes.m_nAllocationCount
          || ((m_nGrowSize = this->m_mapCompendiumDefinitions.m_memNodes.m_nGrowSize) & 0x40000000) != 0 )
        {
          v26 = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size;
        }
        else
        {
          if ( (m_nGrowSize & 0xC0000000) != 0 )
          {
            v64 = this->m_mapCompendiumDefinitions.m_memNodes.m_pMemory;
            v65 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v21);
            this->m_mapCompendiumDefinitions.m_memNodes.m_pMemory = v65;
            if ( v64 != 0 )
              memcpy(v65, v64, 24LL * this->m_mapCompendiumDefinitions.m_memNodes.m_nAllocationCount);
            this->m_mapCompendiumDefinitions.m_memNodes.m_nGrowSize &= 0x3FFFFFFFu;
          }
          else
          {
            v23 = this->m_mapCompendiumDefinitions.m_memNodes.m_pMemory;
            if ( v23 != 0 )
              v24 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v23, 24LL * v21);
            else
              v24 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v21);
            this->m_mapCompendiumDefinitions.m_memNodes.m_pMemory = v24;
          }
          v25 = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size;
          this->m_mapCompendiumDefinitions.m_memNodes.m_nAllocationCount = v21;
          v26 = v25;
        }
        if ( v21 > v26 )
        {
          v27 = v26;
          if ( v26 > 15 || (v27 = 16, v21 > 16) )
          {
            do
              v27 *= 2;
            while ( v21 > v27 );
          }
          if ( v27 == v26 )
          {
            v28 = &this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_pMemory[v26];
            v29 = 0;
          }
          else
          {
            m_nAllocationCount = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_nAllocationCount;
            if ( m_nAllocationCount < v27 )
              CUtlMemory<CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition *,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Grow(
                &this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory,
                v27 - m_nAllocationCount);
            v63 = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_pMemory;
            this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size = v27;
            v29 = 4LL * (v27 - v26);
            v28 = &v63[v26];
          }
          memset(v28, -1, v29);
          m_cElements = this->m_mapCompendiumDefinitions.m_cElements;
          this->m_mapCompendiumDefinitions.m_nMinRehashedBucket = 0;
          this->m_mapCompendiumDefinitions.m_nMaxRehashedBucket = v26;
          if ( m_cElements <= 0 )
          {
            this->m_mapCompendiumDefinitions.m_nMinRehashedBucket = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size;
            goto LABEL_48;
          }
          CVarBitVecBase<int,32>::Resize(p_m_bitsMigratedBuckets, 0, 0);
          CVarBitVecBase<int,32>::Resize(
            p_m_bitsMigratedBuckets,
            this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size,
            0);
        }
        v30 = this->m_mapCompendiumDefinitions.m_memNodes.m_nAllocationCount;
        if ( v30 > this->m_mapCompendiumDefinitions.m_cElements )
          goto LABEL_49;
        goto LABEL_81;
      }
LABEL_48:
      v30 = this->m_mapCompendiumDefinitions.m_memNodes.m_nAllocationCount;
      if ( v30 <= m_cElements )
LABEL_81:
        CUtlMemory<CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition *,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::Node_t,int>::Grow(
          &this->m_mapCompendiumDefinitions.m_memNodes,
          2 * v30);
LABEL_49:
      v31 = this->m_mapCompendiumDefinitions.m_nMinRehashedBucket;
      m_nMaxRehashedBucket = this->m_mapCompendiumDefinitions.m_nMaxRehashedBucket;
      v33 = v31;
      if ( v31 < m_nMaxRehashedBucket )
      {
        v34 = &this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_pMemory[v31];
        while ( v34->m_iNode == -1
             || ((1 << v31) & this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_pInt[v31 >> 5]) != 0 )
        {
          ++v31;
          ++v34;
          this->m_mapCompendiumDefinitions.m_nMinRehashedBucket = v31;
          if ( v31 == m_nMaxRehashedBucket )
            goto LABEL_91;
        }
        CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition *,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::RehashNodesInBucket(
          &this->m_mapCompendiumDefinitions,
          v31);
        v33 = this->m_mapCompendiumDefinitions.m_nMinRehashedBucket + 1;
        v35 = v33 < this->m_mapCompendiumDefinitions.m_nMaxRehashedBucket;
        this->m_mapCompendiumDefinitions.m_nMinRehashedBucket = v33;
        if ( v35 )
          goto LABEL_55;
LABEL_91:
        v61 = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size;
        this->m_mapCompendiumDefinitions.m_nMaxRehashedBucket = -1;
        this->m_mapCompendiumDefinitions.m_nMinRehashedBucket = v61;
        CVarBitVecBase<int,32>::Resize(p_m_bitsMigratedBuckets, 0, 0);
        v33 = this->m_mapCompendiumDefinitions.m_nMinRehashedBucket;
      }
LABEL_55:
      v36 = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size >> 1;
      v69 = (-1028477387
           * ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13)))
          ^ ((-1028477387
            * ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13))) >> 16);
      v37 = v69 & (v36 - 1);
      if ( v37 >= v33 )
      {
        m_pInt = this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_pInt;
        if ( ((1 << v37) & m_pInt[v37 >> 5]) == 0 )
        {
          v39 = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size >> 1;
          v40 = v69 & (v36 - 1);
          do
          {
            m_pInt[v40 >> 5] |= 1 << v40;
            v41 = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_pMemory[v40].m_iNode;
            if ( v41 != -1 )
            {
              while ( 1 )
              {
                v42 = this->m_mapCompendiumDefinitions.m_memNodes.m_pMemory;
                v43 = &v42[v41];
                v44 = v43->m_iNextNode;
                LODWORD(v43) = -1028477387
                             * ((-2048144789 * (v43->m_key ^ HIWORD(v43->m_key)))
                              ^ ((-2048144789 * (v43->m_key ^ HIWORD(v43->m_key))) >> 13));
                v45 = (this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size - 1) & (v43 ^ (v43 >> 16));
                if ( v40 != v45 )
                {
                  v46 = &this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_pMemory[v40];
                  v47 = v46->m_iNode;
                  if ( v41 == v47 )
                  {
                    v46->m_iNode = v44;
                  }
                  else
                  {
                    while ( v47 != -1 )
                    {
                      v48 = &v42[v47];
                      v47 = v48->m_iNextNode;
                      if ( v41 == v47 )
                      {
                        v48->m_iNextNode = v44;
                        break;
                      }
                    }
                  }
                  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition *,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::LinkNodeIntoBucket(
                    &this->m_mapCompendiumDefinitions,
                    v45,
                    v41);
                }
                if ( v44 == -1 )
                  break;
                v41 = v44;
              }
            }
            v39 >>= 1;
            v40 = v69 & (v39 - 1);
            if ( v40 < this->m_mapCompendiumDefinitions.m_nMinRehashedBucket )
              break;
            m_pInt = this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_pInt;
          }
          while ( ((1 << v40) & m_pInt[v40 >> 5]) == 0 );
          v4 = nLeagueID;
        }
      }
      v49 = this->m_mapCompendiumDefinitions.m_cElements;
      if ( v49 == 0
        || (v57 = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_pMemory[v69
                                                                                     & (this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size
                                                                                      - 1)].m_iNode) == -1 )
      {
        v50 = this->m_mapCompendiumDefinitions.m_memNodes.m_pMemory;
        if ( v49 == this->m_mapCompendiumDefinitions.m_nMaxElement )
          goto LABEL_89;
      }
      else
      {
        v58 = this->m_mapCompendiumDefinitions.m_memNodes.m_pMemory;
        v52 = v57;
        v59 = &v58[v57];
        if ( nLeagueID == v59->m_key )
        {
LABEL_92:
          v59->m_elem = pMem;
LABEL_78:
          v9 = &this->m_mapCompendiumDefinitions.m_memNodes.m_pMemory[v52];
LABEL_20:
          CDOTACompendiumDefinition::LoadCompendiumDefinition(v9->m_elem, pKeyValues);
          goto LABEL_21;
        }
        while ( 1 )
        {
          v60 = v59->m_iNextNode;
          if ( v60 == -1 )
            break;
          v52 = v60;
          v59 = &v58[v60];
          if ( v4 == v59->m_key )
            goto LABEL_92;
        }
        v50 = this->m_mapCompendiumDefinitions.m_memNodes.m_pMemory;
        if ( v49 == this->m_mapCompendiumDefinitions.m_nMaxElement )
        {
LABEL_89:
          this->m_mapCompendiumDefinitions.m_cElements = v49 + 1;
          this->m_mapCompendiumDefinitions.m_nMaxElement = v49 + 1;
          v52 = v49;
          v50[v52].m_iNextNode = -1;
          v55 = &this->m_mapCompendiumDefinitions.m_memNodes.m_pMemory[v52];
          if ( v55 == 0 )
            goto LABEL_90;
          goto LABEL_74;
        }
      }
      m_iNodeFreeListHead = this->m_mapCompendiumDefinitions.m_iNodeFreeListHead;
      v52 = m_iNodeFreeListHead;
      v53 = &v50[v52];
      v54 = -3 - v53->m_iNextNode;
      this->m_mapCompendiumDefinitions.m_cElements = v49 + 1;
      v49 = m_iNodeFreeListHead;
      this->m_mapCompendiumDefinitions.m_iNodeFreeListHead = v54;
      v53->m_iNextNode = -1;
      v55 = &this->m_mapCompendiumDefinitions.m_memNodes.m_pMemory[v52];
      if ( v55 == 0 )
      {
LABEL_90:
        v56 = 0;
        goto LABEL_75;
      }
LABEL_74:
      v55->m_key = nLeagueID;
      v56 = &this->m_mapCompendiumDefinitions.m_memNodes.m_pMemory[v52];
LABEL_75:
      if ( v56 != -8LL )
        v56->m_elem = pMem;
      CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition *,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::LinkNodeIntoBucket(
        &this->m_mapCompendiumDefinitions,
        v69 & (this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size - 1),
        v49);
      goto LABEL_78;
    }
LABEL_21:
    KeyValues::deleteThis(pKeyValues);
    v72 += 8LL;
  }
  while ( v72 != v68 );
  m_Size = leagues.m_Size;
LABEL_23:
  for ( j = 8LL * m_Size - 8; --m_Size >= 0; j -= 8 )
  {
    if ( *(&leagues.m_Memory.m_pMemory->m_pString + j) != 0 )
      CUtlString::FreeMemoryBlock((leagues.m_Memory.m_pMemory + j));
  }
  leagues.m_Size = 0;
  if ( (leagues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&leagues.m_Memory);
    if ( (leagues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&leagues.m_Memory);
  }
}


// CDOTACompendiumSchema::GetCompendiumDefinition  (line 128, @0x0000000002470aa0, libserver.so)  // inlines: Find, FindInBucket, Get, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<unsigned int>, operator(), operator[]
// callers: CDOTAEventDefinition::GetPredictions, CDOTAInGamePredictionGameSystem::GameActivate, CDOTAInGamePredictionGameSystem::BuildActivePredictions, dota_test_in_game_prediction
const CDOTACompendiumDefinition *__fastcall CDOTACompendiumSchema::GetCompendiumDefinition(
        const CDOTACompendiumSchema_0 *const this,
        uint32 nLeagueID)
{
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *m_pMemory; // r9
  uint32 v3; // r8d
  __int64 m_iNode; // rax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v5; // rax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_nMinRehashedBucket; // r10d
  int v8; // edx
  int v9; // ecx
  __int64 v10; // rax
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v11; // rcx
  CUtlHashMapLarge<unsigned int,CDOTACompendiumDefinition*,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v12; // rax
  __int64 m_iNextNode; // rax

  if ( this->m_mapCompendiumDefinitions.m_cElements == 0 )
    return 0;
  m_pMemory = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Memory.m_pMemory;
  v3 = (-1028477387
      * ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13)))
     ^ ((-1028477387
       * ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13))) >> 16);
  m_iNode = m_pMemory[v3 & (this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size - 1)].m_iNode;
  if ( m_iNode == -1 )
  {
LABEL_7:
    m_nMinRehashedBucket = this->m_mapCompendiumDefinitions.m_nMinRehashedBucket;
    v8 = this->m_mapCompendiumDefinitions.m_vecHashBuckets.m_Size >> 1;
    if ( m_nMinRehashedBucket <= v8 )
    {
      do
      {
        v9 = v3 & (v8 - 1);
        if ( ((1 << (((53
                     * ((107 * (nLeagueID ^ BYTE2(nLeagueID))) ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13)))
                    ^ ((-1028477387
                      * ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID)))
                       ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13))) >> 16))
                   & (v8 - 1)))
            & this->m_mapCompendiumDefinitions.m_bitsMigratedBuckets.m_pInt[v9 >> 5]) == 0 )
        {
          v10 = m_pMemory[v9].m_iNode;
          if ( v10 != -1 )
          {
            v11 = this->m_mapCompendiumDefinitions.m_memNodes.m_pMemory;
            v12 = &v11[v10];
            if ( v12->m_key == nLeagueID )
              return v12->m_elem;
            while ( 1 )
            {
              m_iNextNode = v12->m_iNextNode;
              if ( m_iNextNode == -1 )
                break;
              v12 = &v11[m_iNextNode];
              if ( v12->m_key == nLeagueID )
                return v12->m_elem;
            }
          }
        }
        v8 >>= 1;
      }
      while ( m_nMinRehashedBucket <= v8 );
      return 0;
    }
    return 0;
  }
  while ( 1 )
  {
    v5 = &this->m_mapCompendiumDefinitions.m_memNodes.m_pMemory[m_iNode];
    if ( v5->m_key == nLeagueID )
      return v5->m_elem;
    m_iNode = v5->m_iNextNode;
    if ( m_iNode == -1 )
      goto LABEL_7;
  }
}


// CDOTACompendiumDefinition::CDOTACompendiumDefinition  (line 140, @0x0000000002495f80, libserver.so)  // inlines: CUtlMemory, CUtlStringMap, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CMsgDOTASeasonPredictions::CMsgDOTASeasonPredictions, CMemAllocSystemInitialize, CUtlSymbolTable::CUtlSymbolTable, CMsgDOTASeasonPredictions::~CMsgDOTASeasonPredictions, _Unwind_Resume, CUtlMemory<PredictionIdRange_t, int>::Purge
// callers: CDOTACompendiumSchema::LoadCompendiumDefinitions
void __fastcall CDOTACompendiumDefinition::CDOTACompendiumDefinition(
        CDOTACompendiumDefinition *const this,
        uint32 nLeagueID)
{
  *this = nLeagueID;
  CMsgDOTASeasonPredictions::CMsgDOTASeasonPredictions((this + 8));
  *(this + 22) = 0;
  *(this + 12) = 0;
  *(this + 26) = 32;
  *(this + 27) = 0;
  CMemAllocSystemInitialize();
  *(this + 12) = (**g_pMemAlloc)(g_pMemAlloc, 16LL * *(this + 26));
  CUtlSymbolTable::CUtlSymbolTable((this + 112), 0, 32, 1);
}


// CDOTACompendiumDefinition::~CDOTACompendiumDefinition  (line 144, @0x0000000002496050, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::~CUtlSymbolTable, CMsgDOTASeasonPredictions::~CMsgDOTASeasonPredictions, CUtlMemory<PredictionIdRange_t, int>::Purge
// callers: CUtlHashMapLarge<unsigned int, CDOTACompendiumDefinition*, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::PurgeAndDeleteElements, CDOTACompendiumSchema::~CDOTACompendiumSchema
void __fastcall CDOTACompendiumDefinition::~CDOTACompendiumDefinition(CDOTACompendiumDefinition *const this)
{
  bool v2; // zf

  CUtlSymbolTable::~CUtlSymbolTable((this + 112));
  v2 = (*(this + 27) & 0xC0000000) == 0;
  *(this + 22) = 0;
  if ( !v2 || (CUtlMemory<PredictionIdRange_t,int>::Purge(this + 6), (*(this + 27) & 0xC0000000) != 0) )
  {
    CMsgDOTASeasonPredictions::~CMsgDOTASeasonPredictions((this + 8));
  }
  else
  {
    CUtlMemory<PredictionIdRange_t,int>::Purge(this + 6);
    CMsgDOTASeasonPredictions::~CMsgDOTASeasonPredictions((this + 8));
  }
}


// CDOTACompendiumDefinition::LoadCompendiumDefinition  (line 148, @0x0000000002487b10, libserver.so)  // inlines: AddMultipleToTail, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, Mutable, Mutable<google::protobuf::RepeatedPtrField<CMsgDOTASeasonPredictions_Prediction>::TypeHandler>, mutable_predictions, operator const UtlSymId_t, operator[], set_has_lock_date, set_has_start_date, set_lock_date, set_start_date
// calls: ProtoBufHelper::ParseKV, KeyValues::FindKey, KeyValues::GetFirstTrueSubKey, KeyValues::GetName, KeyValues::GetInt, CUtlSymbolTable::AddString, KeyValues::GetNextTrueSubKey, CUtlMemory<PredictionIdRange_t, int>::Grow
// callers: CDOTACompendiumSchema::LoadCompendiumDefinitions
// strings: "prediction_ranges", "first_prediction_id", "last_prediction_id", "start_date", "lock_date"
void __fastcall CDOTACompendiumDefinition::LoadCompendiumDefinition(
        CDOTACompendiumDefinition *const this,
        KeyValues *pKeyValues)
{
  KeyValues *Key; // rax
  KeyValues *i; // rbx
  const char *Name; // r15
  unsigned int Int; // r12d
  unsigned int v8; // r13d
  int v9; // edx
  int v10; // eax
  int v11; // r10d
  int v12; // r11d
  unsigned int *v13; // rdx
  int v14; // edx
  __int64 v15; // r11
  __int64 v16; // rdx
  _DWORD *v17; // rsi
  unsigned int v18; // edi
  int v19; // edi
  int v20; // edx
  int v21; // [rsp+28h] [rbp-48h]
  int v22; // [rsp+2Ch] [rbp-44h]
  unsigned __int16 v23; // [rsp+30h] [rbp-40h]

  ProtoBufHelper::ParseKV((this + 8), pKeyValues, 0);
  Key = KeyValues::FindKey(pKeyValues, "prediction_ranges", 0);
  if ( Key != 0 )
  {
    for ( i = KeyValues::GetFirstTrueSubKey(Key); i != 0; i = KeyValues::GetNextTrueSubKey(i) )
    {
      Name = KeyValues::GetName(i);
      Int = KeyValues::GetInt(i, "first_prediction_id", 0);
      v8 = KeyValues::GetInt(i, "last_prediction_id", 0x7FFFFFFF);
      v21 = KeyValues::GetInt(i, "start_date", 0);
      v22 = KeyValues::GetInt(i, "lock_date", 0);
      CUtlSymbolTable::AddString((this + 112), Name);
      v9 = *(this + 22);
      v10 = v22;
      v11 = v21;
      if ( v23 >= v9 )
      {
        v12 = v23 + 1;
        if ( v9 < v12 )
        {
          v20 = *(this + 26);
          if ( v12 > v20 )
          {
            CUtlMemory<PredictionIdRange_t,int>::Grow(this + 6, v12 - v20);
            v10 = v22;
            v11 = v21;
            v12 = v23 + 1;
          }
          *(this + 22) = v12;
        }
      }
      v13 = (*(this + 12) + 16LL * v23);
      *v13 = Int;
      v13[1] = v8;
      v13[2] = v11;
      v13[3] = v10;
      v14 = *(this + 10);
      if ( v14 > 0 )
      {
        v15 = 8LL * (v14 - 1) + 8;
        v16 = 0;
        do
        {
          v17 = *(*(this + 4) + v16);
          v18 = v17[9];
          if ( Int <= v18 && v8 >= v18 )
          {
            v19 = v17[4];
            v17[16] = v11;
            v17[17] = v10;
            v17[4] = v19 | 0x30;
          }
          v16 += 8;
        }
        while ( v16 != v15 );
      }
    }
  }
}


// CDOTACompendiumDefinition::GetPredictionCount  (line 186, @0x0000000002470ba0, libserver.so)
int __fastcall CDOTACompendiumDefinition::GetPredictionCount(const CDOTACompendiumDefinition *const this)
{
  return *(this + 10);
}


// CDOTACompendiumDefinition::GetInGamePredictionCount  (line 191, @0x0000000002470bb0, libserver.so)
// callers: CDOTAInGamePredictionGameSystem::GameActivate, CDOTAInGamePredictionGameSystem::BuildActivePredictions
int __fastcall CDOTACompendiumDefinition::GetInGamePredictionCount(const CDOTACompendiumDefinition *const this)
{
  return *(this + 16);
}


// CDOTACompendiumDefinition::GetPrediction  (line 196, @0x0000000002470bc0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsgDOTASeasonPredictions_Prediction>::TypeHandler>, predictions
const CMsgDOTASeasonPredictions_Prediction *__fastcall CDOTACompendiumDefinition::GetPrediction(
        const CDOTACompendiumDefinition *const this,
        int nIndex)
{
  return *(*(this + 4) + 8LL * nIndex);
}


// CDOTACompendiumDefinition::GetInGamePrediction  (line 201, @0x0000000002470be0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsgDOTASeasonPredictions_InGamePrediction>::TypeHandler>, in_game_predictions
// callers: CDOTAInGamePredictionGameSystem::GameActivate, CDOTAInGamePredictionGameSystem::BuildActivePredictions
const CMsgDOTASeasonPredictions_InGamePrediction *__fastcall CDOTACompendiumDefinition::GetInGamePrediction(
        const CDOTACompendiumDefinition *const this,
        int nIndex)
{
  return *(*(this + 7) + 8LL * nIndex);
}


// CDOTACompendiumDefinition::FindPredictionBySelectionIndex  (line 207, @0x0000000002470c00, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsgDOTASeasonPredictions_Prediction>::TypeHandler>, GetPrediction, predictions
const CMsgDOTASeasonPredictions_Prediction *__fastcall CDOTACompendiumDefinition::FindPredictionBySelectionIndex(
        const CDOTACompendiumDefinition *const this,
        uint32 nIndex)
{
  int v2; // ecx
  const CMsgDOTASeasonPredictions_Prediction **v3; // rdx
  const CMsgDOTASeasonPredictions_Prediction *result; // rax
  const CMsgDOTASeasonPredictions_Prediction **v5; // rdx
  const CMsgDOTASeasonPredictions_Prediction **v6; // rcx

  v2 = *(this + 10);
  if ( v2 > 0 )
  {
    v3 = *(this + 4);
    result = *v3;
    if ( *(*v3 + 9) == nIndex )
      return result;
    v5 = v3 + 1;
    v6 = &v5[v2 - 1];
    while ( v5 != v6 )
    {
      result = *v5++;
      if ( *(result + 9) == nIndex )
        return result;
    }
  }
  return 0;
}


// CDOTACompendiumDefinition::FindInGamePredictionByID  (line 219, @0x0000000002470c40, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsgDOTASeasonPredictions_InGamePrediction>::TypeHandler>, GetInGamePrediction, in_game_predictions
const CMsgDOTASeasonPredictions_InGamePrediction *__fastcall CDOTACompendiumDefinition::FindInGamePredictionByID(
        const CDOTACompendiumDefinition *const this,
        uint32 nId)
{
  int v2; // ecx
  const CMsgDOTASeasonPredictions_InGamePrediction **v3; // rdx
  const CMsgDOTASeasonPredictions_InGamePrediction *result; // rax
  const CMsgDOTASeasonPredictions_InGamePrediction **v5; // rdx
  const CMsgDOTASeasonPredictions_InGamePrediction **v6; // rcx

  v2 = *(this + 16);
  if ( v2 > 0 )
  {
    v3 = *(this + 7);
    result = *v3;
    if ( *(*v3 + 8) == nId )
      return result;
    v5 = v3 + 1;
    v6 = &v5[v2 - 1];
    while ( v5 != v6 )
    {
      result = *v5++;
      if ( *(result + 8) == nId )
        return result;
    }
  }
  return 0;
}


// CDOTACompendiumDefinition::FindInGamePredictionByName  (line 231, @0x0000000002470c80, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsgDOTASeasonPredictions_InGamePrediction>::TypeHandler>, GetInGamePrediction, _M_data, c_str, in_game_predictions
// calls: V_stricmp_fast
// callers: dota_test_in_game_prediction
const CMsgDOTASeasonPredictions_InGamePrediction *__fastcall CDOTACompendiumDefinition::FindInGamePredictionByName(
        const CDOTACompendiumDefinition *const this,
        const char *pName)
{
  int v3; // eax
  __int64 v5; // rbx
  __int64 v6; // r14
  const CMsgDOTASeasonPredictions_InGamePrediction *v7; // r12

  v3 = *(this + 16);
  if ( v3 <= 0 )
    return 0;
  v5 = 0;
  v6 = 8LL * (v3 - 1) + 8;
  while ( 1 )
  {
    v7 = *(*(this + 7) + v5);
    if ( V_stricmp_fast(pName, **(v7 + 3)) == 0 )
      break;
    v5 += 8;
    if ( v5 == v6 )
      return 0;
  }
  return v7;
}


// CDOTACompendiumDefinition::FindPredictionIdRange  (line 244, @0x0000000002470d10, libserver.so)  // inlines: Find, operator const UtlSymId_t, operator[]
// calls: CUtlSymbolTable::Find
const PredictionIdRange_t *__fastcall CDOTACompendiumDefinition::FindPredictionIdRange(
        const CDOTACompendiumDefinition *const this,
        const char *pName)
{
  UtlSymId_t id; // [rsp+0h] [rbp-20h]

  CUtlSymbolTable::Find((this + 112), pName);
  if ( id == 0xFFFF )
    return 0;
  else
    return (*(this + 12) + 16LL * id);
}


// CDOTACompendiumDefinition::FindRangeForPrediction  (line 252, @0x0000000002470d50, libserver.so)
const PredictionIdRange_t *__fastcall CDOTACompendiumDefinition::FindRangeForPrediction(
        const CDOTACompendiumDefinition *const this,
        uint32 nPredictionID)
{
  int v2; // ecx
  const PredictionIdRange_t *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = *(this + 69);
  if ( v2 == 0 )
    return 0;
  result = *(this + 12);
  v4 = 0;
  v5 = 16 * ((v2 - 1) + 1LL);
  while ( result->m_nFirstID > nPredictionID || nPredictionID > result->m_nLastID )
  {
    v4 += 16;
    ++result;
    if ( v4 == v5 )
      return 0;
  }
  return result;
}


