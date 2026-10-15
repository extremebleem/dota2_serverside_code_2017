
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_entitykeyvalues.cpp  (line 0, @0x0000000001a67f00, libserver.so)  // inlines: CFieldPathHuffmanEncoder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixed, CVariantBase, Color, Purge, RemoveAll, SetColor, __static_initialization_and_destruction_0, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup, __cxa_atexit, _Unwind_Resume, CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int>::Purge, CUtlMemory<int, int>::Purge
// globals: UNSPECIFIED_LOGGING_COLOR, `guard variable for'CEntityKeyValues::sm_EmptyVariant, `guard variable for'g_HuffmanEncoder, g_HuffmanEncoder, __dso_handle, CFieldPathHuffmanEncoder::~CFieldPathHuffmanEncoder(), CEntityKeyValues::sm_EmptyVariant, CVariantBase<CEntityVariantAllocator>::~CVariantBase()
void __cdecl GLOBAL__sub_I_entitykeyvalues_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  if ( `guard variable for'CEntityKeyValues::sm_EmptyVariant == 0 )
  {
    `guard variable for'CEntityKeyValues::sm_EmptyVariant = 1;
    CEntityKeyValues::sm_EmptyVariant.m_type = 0;
    CEntityKeyValues::sm_EmptyVariant.m_flags = 0;
    CEntityKeyValues::sm_EmptyVariant.m_uint64 = 0;
    __cxa_atexit(CVariantBase<CEntityVariantAllocator>::~CVariantBase, &CEntityKeyValues::sm_EmptyVariant, &_dso_handle);
  }
  if ( `guard variable for'g_HuffmanEncoder == 0 )
  {
    `guard variable for'g_HuffmanEncoder = 1;
    g_HuffmanEncoder.m_pRoot = 0;
    g_HuffmanEncoder.m_Frequencies.m_Size = 0;
    g_HuffmanEncoder.m_Frequencies.m_Memory.m_pMemory = 0;
    g_HuffmanEncoder.m_Frequencies.m_Memory.m_nAllocationCount = 0;
    g_HuffmanEncoder.m_Frequencies.m_Memory.m_nGrowSize = 0;
    g_HuffmanEncoder.m_OpCodeToHuffmanLookup.m_Size = 0;
    g_HuffmanEncoder.m_FixedTree.m_Size = 0;
    g_HuffmanEncoder.m_FixedTree.m_Memory.m_pMemory = 0;
    g_HuffmanEncoder.m_FixedTree.m_Memory.m_nAllocationCount = 0;
    g_HuffmanEncoder.m_FixedTree.m_Memory.m_nGrowSize = 0;
    CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup(&g_HuffmanEncoder);
    __cxa_atexit(CFieldPathHuffmanEncoder::~CFieldPathHuffmanEncoder, &g_HuffmanEncoder, &_dso_handle);
  }
}


// CEntityVariantAllocator::Allocate  (line 25, @0x00000000030a2bd0, libserver.so)  // inlines: Alloc
// calls: CUtlScratchMemoryPool::AllocAligned
// callers: CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, CEntityKeyValues::SetValue, CDevtestHierarchy2::Spawn, CVariantBase<CEntityVariantAllocator>::AssignTo<CEntityVariantAllocator>, CreateTriggerInternal, Script_CreateTriggerRadiusApproximate, CScriptEntityIterator::CreateByClassname, CEntityKeyValues::AddKeyValue<CVariantBase<CEntityVariantAllocator> >, SetupEntityKeyValuesFromTable, CBreakableProp::SetEnableMotionPosition, UTIL_PrecacheOther, DispatchSpawn (59 total)
// globals: CEntityVariantAllocator::sm_pMemoryPool
void *__fastcall CEntityVariantAllocator::Allocate(uint nSize)
{
  return CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, nSize, 8 * (nSize >= 16) + 8);
}


// CEntityVariantAllocator::Activate  (line 35, @0x00000000030a2c00, libserver.so)
// callers: CEntitySystem::BuildComponentUnserializers
// globals: CEntityVariantAllocator::sm_pMemoryPool
void __fastcall CEntityVariantAllocator::Activate(CUtlScratchMemoryPool *pMemoryPool, bool bEnable)
{
  CUtlScratchMemoryPool *v2; // rax

  v2 = 0;
  if ( bEnable )
    v2 = pMemoryPool;
  CEntityVariantAllocator::sm_pMemoryPool = v2;
}


// CEntityKeyValues::CEntityKeyValues  (line 54, @0x00000000030a2c20, libserver.so)  // inlines: Base, CUtlLeanVector, CUtlLeanVectorBase, CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl, CUtlMemory, CUtlVector, CUtlVectorBase, Destruct<CEntityKeyValues::KeyValueInfo_t>, Free, Purge, RemoveAll, ~CUtlLeanVector, ~CUtlLeanVectorBase, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CVariantBase, ~KeyValueInfo_t
// calls: CUtlScratchMemoryPool::CUtlScratchMemoryPool, _Unwind_Resume
// callers: CEntitySpawnerBase<CDevtestHierarchyChild>::StartNewEntity, CEntitySpawner<CDevtestHierarchyChild>::StartNewEntity, CEntitySpawnerBase<CBaseEntity>::StartNewEntity, CEntitySpawnerBase<CTriggerMultiple>::StartNewEntity, CEntitySpawner<CTriggerMultiple>::StartNewEntity, CEntitySpawnerAsyncBase<CBaseEntity>::StartNewEntity, CEntitySpawner<CBaseEntity>::StartNewEntity, Script_CreateTriggerRadiusApproximate, Script_SpawnEntityListFromTableSynchronous, Script_SpawnEntityListFromTableAsynchronous, Script_SpawnEntityGroupFromTable, CLoopModeGameToolHooks::OnToolSpawnEntity (142 total)
void __fastcall CEntityKeyValues::CEntityKeyValues(CEntityKeyValues *const this)
{
  CUtlScratchMemoryPool *p_m_memoryPool; // rdi

  this->m_keyHashes.m_nCount = 0;
  this->m_keyHashes.m_nAllocated = 9;
  p_m_memoryPool = &this->m_memoryPool;
  LOWORD(p_m_memoryPool[-1].m_pFirstBlock) = 0;
  WORD1(p_m_memoryPool[-1].m_pFirstBlock) = 0;
  *&p_m_memoryPool[-1].m_nBlockSize = 0;
  CUtlScratchMemoryPool::CUtlScratchMemoryPool(p_m_memoryPool, 512, 0, 0);
  this->m_connectionDescs.m_Size = 0;
  this->m_connectionDescs.m_Memory.m_pMemory = 0;
  this->m_connectionDescs.m_Memory.m_nAllocationCount = 0;
  this->m_connectionDescs.m_Memory.m_nGrowSize = 0;
  this->m_nRefCount = 0;
  this->m_nQueuedForSpawnCount = 0;
  this->m_pComplexKeys = 0;
}


// CEntityKeyValues::~CEntityKeyValues  (line 66, @0x00000000030a2ed0, libserver.so)  // inlines: Base, Destruct<CEntityKeyValues::KeyValueInfo_t>, Free, Purge, RemoveAll, ~CUtlLeanVector, ~CUtlLeanVectorBase, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~KeyValueInfo_t
// calls: CEntityKeyValues::ReleaseAllComplexKeys, CUtlScratchMemoryPool::~CUtlScratchMemoryPool, CUtlMemory<EntityIOConnectionDescFat_t, int>::Purge
// callers: CEntitySpawnerBase<CDevtestHierarchyChild>::~CEntitySpawnerBase, CDevtestHierarchy2::Spawn, CEntitySpawnerBase<CBaseEntity>::~CEntitySpawnerBase, CEntitySpawnerBase<CTriggerMultiple>::~CEntitySpawnerBase, CreateTriggerInternal, Script_CreateTriggerRadiusApproximate, CScriptEntityIterator::CreateByClassname, Script_PrecacheEntityFromTable, Script_SpawnEntityListFromTableSynchronous, Script_SpawnEntityFromTableSynchronous, Script_SpawnEntityListFromTableAsynchronous, Script_SpawnEntityGroupFromTable (158 total)
void __fastcall CEntityKeyValues::~CEntityKeyValues(CEntityKeyValues *const this)
{
  bool v2; // zf
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t m_nAllocated; // ax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *m_pElements; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v5; // dx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v6; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v8; // ax
  void (__fastcall *v9)(_QWORD *, CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *); // rdx

  CEntityKeyValues::ReleaseAllComplexKeys(this);
  v2 = (this->m_connectionDescs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_connectionDescs.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<EntityIOConnectionDescFat_t,int>::Purge(&this->m_connectionDescs.m_Memory);
    if ( (this->m_connectionDescs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<EntityIOConnectionDescFat_t,int>::Purge(&this->m_connectionDescs.m_Memory);
  }
  CUtlScratchMemoryPool::~CUtlScratchMemoryPool(&this->m_memoryPool);
  m_nAllocated = this->m_keyValues.m_nAllocated;
  if ( m_nAllocated != 0 )
    m_pElements = this->m_keyValues.m_pElements;
  else
    m_pElements = 0;
  if ( this->m_keyValues.m_nCount > 0 )
  {
    v5 = 0;
    do
    {
      v6 = &m_pElements[v5];
      m_flags = v6->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v6->m_value.m_flags = m_flags & 0xFFFE;
      v6->m_value.m_uint64 = 0;
      ++v5;
      v6->m_value.m_type = 0;
    }
    while ( this->m_keyValues.m_nCount > v5 );
    m_nAllocated = this->m_keyValues.m_nAllocated;
  }
  this->m_keyValues.m_nCount = 0;
  if ( m_nAllocated > 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_keyValues.m_pElements);
    this->m_keyValues.m_pElements = 0;
  }
  v8 = this->m_keyHashes.m_nAllocated;
  this->m_keyValues.m_nAllocated = 0;
  this->m_keyHashes.m_nCount = 0;
  if ( v8 > 9 )
  {
    v9 = *(*g_pMemAlloc + 16LL);
    if ( v8 != 0 )
      v9(g_pMemAlloc, this->m_keyHashes.m_pElements);
    else
      v9(g_pMemAlloc, 0);
    this->m_keyHashes.m_nAllocated = 9;
  }
  else
  {
    this->m_keyHashes.m_nAllocated = 9;
  }
}


// CEntityKeyValues::ReleaseAllComplexKeys  (line 74, @0x00000000030a2d70, libserver.so)  // inlines: Release
// callers: CEntityKeyValues::RemoveAllKeys, CEntityKeyValues::~CEntityKeyValues
void __fastcall CEntityKeyValues::ReleaseAllComplexKeys(CEntityKeyValues *const this)
{
  CEntityKeyValues::EntityComplexKeyListElem_t *i; // rbx
  IEntityKeyComplex *m_pKey; // rdi
  int m_nRef; // eax

  for ( i = this->m_pComplexKeys; i != 0; i = i->m_pNext )
  {
    while ( 1 )
    {
      m_pKey = i->m_pKey;
      m_nRef = i->m_pKey->m_nRef;
      i->m_pKey->m_nRef = m_nRef - 1;
      if ( m_nRef == 1 )
        break;
      i = i->m_pNext;
      if ( i == 0 )
        goto LABEL_6;
    }
    (*m_pKey->_vptr_IEntityKeyComplex)(m_pKey);
  }
LABEL_6:
  this->m_pComplexKeys = 0;
}


// CEntityKeyValues::HasValue  (line 89, @0x00000000030a3020, libserver.so)  // inlines: Base, Element, FindKeyHash, operator[]
// callers: CDevtestHierarchy2::Spawn, CPointEntity::Spawn, CLogicalEntity::Spawn, CBaseEntity::SpawnShared, CreateTriggerInternal, Script_CreateTriggerRadiusApproximate, CScriptEntityIterator::CreateByClassname, Script_SpawnEntityListFromTableSynchronous, Script_SpawnEntityFromTableSynchronous, Script_SpawnEntityListFromTableAsynchronous, Script_SpawnEntityGroupFromTable, CModelPointEntity::Spawn (122 total)
bool __fastcall CEntityKeyValues::HasValue(const CEntityKeyValues *const this, EntityKeyId_t key)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v4; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v6; // rdx

  m_nCount = this->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
    return 0;
  m_nAllocated = this->m_keyHashes.m_nAllocated;
  v4 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v4) == key.m_nHashCode )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v4 )
      return 0;
  }
  m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = this->m_keyHashes.m_pElements;
  if ( m_pElements[v4] != key.m_nHashCode )
    goto LABEL_6;
LABEL_9:
  if ( this->m_keyValues.m_nAllocated != 0 )
    v6 = this->m_keyValues.m_pElements;
  else
    v6 = 0;
  return v6[v4].m_pAttributeName == 0;
}


// CEntityKeyValues::RemoveKey  (line 101, @0x00000000030a67d0, libserver.so)  // inlines: Base, Destruct<CEntityKeyValues::KeyValueInfo_t>, Element, FindKeyHash, Free, RemoveKeyValue, RemoveMultipleFromTail, operator=, operator[], ~CVariantBase, ~KeyValueInfo_t
// calls: CVariantBase<CEntityVariantAllocator>::AssignTo<CEntityVariantAllocator>
void __fastcall CEntityKeyValues::RemoveKey(CEntityKeyValues *const this, EntityKeyId_t key)
{
  int m_nCount; // edi
  unsigned __int64 m_nAllocated; // rcx
  __int64 v5; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  _DWORD *v7; // r8
  int v8; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v9; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v10; // rdx
  __int64 v11; // r12
  CVariantBase<CEntityVariantAllocator> *p_m_value; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v14; // ax
  __int16 v15; // dx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v18; // ax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v19; // ax

  if ( this->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = this->m_keyHashes.m_nCount;
    if ( m_nCount > 0 )
    {
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      v5 = 0;
      while ( 1 )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = this->m_keyHashes.m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        v7 = (4 * v5);
        if ( m_pElements[v5] == key.m_nHashCode )
          break;
        if ( m_nCount <= ++v5 )
          return;
      }
      v8 = m_nCount - 1;
      v9 = 0;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
        {
          v9 = (&this->m_keyHashes.m_nAllocAllocated + 1);
          v7 = (v7 + (&this->m_keyHashes.m_nAllocAllocated + 1));
        }
        else
        {
          v9 = this->m_keyHashes.m_pElements;
          v7 = (v7 + v9);
        }
      }
      *v7 = v9[v8];
      if ( this->m_keyValues.m_nAllocated != 0 )
      {
        v10 = this->m_keyValues.m_pElements;
        v11 = &v10[v8];
      }
      else
      {
        v10 = 0;
        v11 = 24LL * v8;
      }
      p_m_value = &v10[v5].m_value;
      CVariantBase<CEntityVariantAllocator>::AssignTo<CEntityVariantAllocator>(v11, p_m_value);
      p_m_value[1].m_uint64 = *(v11 + 16);
      --this->m_keyHashes.m_nCount;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v13 = this->m_keyValues.m_pElements;
      else
        v13 = 0;
      v14 = this->m_keyValues.m_nCount;
      v15 = v14 - 1;
      if ( __OFSUB__(v14, v14 - 1) )
      {
        v19 = v14 - 1;
      }
      else
      {
        do
        {
          v16 = &v13[v15];
          m_flags = v16->m_value.m_flags;
          if ( (m_flags & 1) != 0 )
            v16->m_value.m_flags = m_flags & 0xFFFE;
          v16->m_value.m_uint64 = 0;
          ++v15;
          v16->m_value.m_type = 0;
          v18 = this->m_keyValues.m_nCount;
        }
        while ( v15 < v18 );
        v19 = v18 - 1;
      }
      this->m_keyValues.m_nCount = v19;
    }
  }
}


// CEntityKeyValues::RemoveAllKeys  (line 112, @0x00000000030a2dc0, libserver.so)  // inlines: Base, Destruct<CEntityKeyValues::KeyValueInfo_t>, Free, Purge, RemoveAll, ~CVariantBase, ~KeyValueInfo_t
// calls: CEntityKeyValues::ReleaseAllComplexKeys
// callers: CEntityKeyValues::RemoveAllKeys, CEntityKeyValues::Unserialize, CEntityKeyValues::CopyFrom
void __fastcall CEntityKeyValues::RemoveAllKeys(CEntityKeyValues *const this)
{
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // ax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v3; // ax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *m_pElements; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v5; // dx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v6; // rax
  uint16 m_flags; // cx
  void (__fastcall *v8)(_QWORD *, CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *); // rdx

  m_nAllocated = this->m_keyHashes.m_nAllocated;
  this->m_keyHashes.m_nCount = 0;
  if ( m_nAllocated > 9 )
  {
    v8 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v8(g_pMemAlloc, this->m_keyHashes.m_pElements);
    else
      v8(g_pMemAlloc, 0);
  }
  v3 = this->m_keyValues.m_nAllocated;
  this->m_keyHashes.m_nAllocated = 9;
  if ( v3 != 0 )
    m_pElements = this->m_keyValues.m_pElements;
  else
    m_pElements = 0;
  if ( this->m_keyValues.m_nCount > 0 )
  {
    v5 = 0;
    do
    {
      v6 = &m_pElements[v5];
      m_flags = v6->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v6->m_value.m_flags = m_flags & 0xFFFE;
      v6->m_value.m_uint64 = 0;
      ++v5;
      v6->m_value.m_type = 0;
    }
    while ( this->m_keyValues.m_nCount > v5 );
    v3 = this->m_keyValues.m_nAllocated;
  }
  this->m_keyValues.m_nCount = 0;
  if ( v3 > 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_keyValues.m_pElements);
    this->m_keyValues.m_pElements = 0;
  }
  this->m_keyValues.m_nAllocated = 0;
  CEntityKeyValues::ReleaseAllComplexKeys(this);
}


// CEntityKeyValues::RemoveAllKeys  (line 112, @0x00000000030a30a0, libserver.so)
// calls: CEntityKeyValues::RemoveAllKeys
void __fastcall CEntityKeyValues::RemoveAllKeys(CEntityKeyValues *const this)
{
  if ( this->m_nQueuedForSpawnCount <= 0 )
    CEntityKeyValues::RemoveAllKeys(this);
}


// CEntityKeyValues::RemoveKeyForSpawn  (line 130, @0x00000000030a6930, libserver.so)  // inlines: Base, Destruct<CEntityKeyValues::KeyValueInfo_t>, Element, FindKeyHash, Free, RemoveKeyValue, RemoveMultipleFromTail, operator=, operator[], ~CVariantBase, ~KeyValueInfo_t
// calls: CVariantBase<CEntityVariantAllocator>::AssignTo<CEntityVariantAllocator>
// callers: CPointEntity::Spawn, CLogicalEntity::Spawn, CModelPointEntity::Spawn, CServerOnlyPointEntity::Spawn
void __fastcall CEntityKeyValues::RemoveKeyForSpawn(const CEntityKeyValues *const this, EntityKeyId_t key)
{
  int m_nCount; // edi
  unsigned __int64 m_nAllocated; // rcx
  __int64 v5; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  _DWORD *v7; // r8
  int v8; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v9; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v10; // rdx
  __int64 v11; // r12
  CVariantBase<CEntityVariantAllocator> *p_m_value; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v14; // ax
  __int16 v15; // dx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v18; // ax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v19; // ax

  m_nCount = this->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
    return;
  m_nAllocated = this->m_keyHashes.m_nAllocated;
  v5 = 0;
  while ( m_nAllocated == 0 )
  {
    v7 = (4 * v5);
    if ( *(4 * v5) == key.m_nHashCode )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v5 )
      return;
  }
  m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = this->m_keyHashes.m_pElements;
  v7 = (4 * v5);
  if ( m_pElements[v5] != key.m_nHashCode )
    goto LABEL_6;
LABEL_9:
  v8 = m_nCount - 1;
  v9 = 0;
  if ( m_nAllocated != 0 )
  {
    if ( m_nAllocated <= 9 )
    {
      v9 = (&this->m_keyHashes.m_nAllocAllocated + 1);
      v7 = (v7 + (&this->m_keyHashes.m_nAllocAllocated + 1));
    }
    else
    {
      v9 = this->m_keyHashes.m_pElements;
      v7 = (v7 + v9);
    }
  }
  *v7 = v9[v8];
  if ( this->m_keyValues.m_nAllocated != 0 )
  {
    v10 = this->m_keyValues.m_pElements;
    v11 = &v10[v8];
  }
  else
  {
    v10 = 0;
    v11 = 24LL * v8;
  }
  p_m_value = &v10[v5].m_value;
  CVariantBase<CEntityVariantAllocator>::AssignTo<CEntityVariantAllocator>(v11, p_m_value);
  p_m_value[1].m_uint64 = *(v11 + 16);
  --this->m_keyHashes.m_nCount;
  if ( this->m_keyValues.m_nAllocated != 0 )
    v13 = this->m_keyValues.m_pElements;
  else
    v13 = 0;
  v14 = this->m_keyValues.m_nCount;
  v15 = v14 - 1;
  if ( __OFSUB__(v14, v14 - 1) )
  {
    v19 = v14 - 1;
  }
  else
  {
    do
    {
      v16 = &v13[v15];
      m_flags = v16->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v16->m_value.m_flags = m_flags & 0xFFFE;
      v16->m_value.m_uint64 = 0;
      ++v15;
      v16->m_value.m_type = 0;
      v18 = this->m_keyValues.m_nCount;
    }
    while ( v15 < v18 );
    v19 = v18 - 1;
  }
  this->m_keyValues.m_nCount = v19;
}


// CEntityKeyValues::SerializeKeys  (line 138, @0x00000000030a55c0, libserver.so)  // inlines: Base, Element, GetType, LeafCodeInfo_t, LowLevelByteSwap<float>, LowLevelByteSwap<int>, LowLevelByteSwap<unsigned int>, PeekPut, PutChar, PutDouble, PutFloat, PutInt, PutInt64, PutTabs, PutType<double>, PutType<float>, PutType<int>, PutType<long long int>, PutType<long long unsigned int>, PutType<unsigned int>, PutTypeBin<char>, PutTypeBin<double>, PutTypeBin<float>, PutTypeBin<int>, PutTypeBin<long long int>, PutTypeBin<long long unsigned int>, PutTypeBin<unsigned int>, PutUnsignedInt, PutUnsignedInt64, SwapBufferToTargetEndian<double>, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<long long int>, SwapBufferToTargetEndian<long long unsigned int>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, WasLastCharacterCR, memcpy, operator const QAngle&, operator const Quaternion&, operator const Vector&, operator const Vector2D&, operator const Vector4D&, operator int64, operator uint, operator uint64, operator[]
// calls: CUtlBuffer::Printf, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CUtlBuffer::PutString, CUtlBuffer::PutType<int>, CUtlBuffer::PutType<float>, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CByteswap::SwapBufferToTargetEndian<double>, CByteswap::SwapBufferToTargetEndian<long long int>, CByteswap::SwapBufferToTargetEndian<long long unsigned int>
// callers: CEntityKeyValues::Serialize
// strings: "%.15lf", "entitykeyvalues.cpp", "SerializeKeys", "CEntityKeyValues::Serialize: Unsupported keyvalue variant type!\n"
// globals: jpt_30A5712
bool __fastcall CEntityKeyValues::SerializeKeys(
        const CEntityKeyValues *const this,
        CUtlBuffer *const buf,
        bool bSerializeAttributes)
{
  CUtlBuffer *v3; // rbx
  const CEntityKeyValues *v4; // r12
  CUtlBuffer *v5; // r8
  int v6; // r15d
  __int64 i; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // r14
  double *v9; // r14
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlBuffer *v12; // r8
  float v13; // xmm1_4
  bool v14; // al
  int v15; // eax
  bool v16; // al
  int m_Put; // eax
  bool result; // al
  unsigned __int8 *v19; // rdx
  unsigned __int8 *v20; // rdx
  __int64 v21; // r14
  CUtlBuffer *v22; // rbx
  const Quaternion *v23; // rax
  __int64 v24; // rbx
  CUtlBuffer *v25; // r12
  const Quaternion *v26; // r14
  __int64 v27; // r14
  int v28; // edx
  unsigned __int8 m_Flags; // al
  int m_nOffset; // edi
  int m_nTab; // ebx
  CUtlBuffer *v32; // r14
  const char *v33; // rsi
  __int64 v34; // rdx
  float v35; // edx
  int v36; // edx
  unsigned __int8 v37; // al
  int v38; // edi
  int v39; // ebx
  __int64 v40; // r14
  CUtlBuffer *v41; // rbx
  int v42; // eax
  const Vector4D *v43; // rax
  __int64 v44; // rbx
  const Vector4D *v45; // r14
  float x; // xmm0_4
  int v47; // eax
  bool v48; // al
  int v49; // ecx
  int v50; // eax
  bool v51; // al
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  bool v56; // al
  unsigned __int8 *v57; // rcx
  unsigned __int8 *v58; // rcx
  bool v59; // al
  int v60; // ecx
  bool v61; // al
  int v62; // eax
  bool v63; // al
  int v64; // ecx
  unsigned __int8 *v65; // rcx
  unsigned __int8 *v66; // rcx
  unsigned __int8 *v67; // rcx
  unsigned __int8 *v68; // rdx
  double *v69; // rsi
  unsigned __int8 *v70; // rdx
  __int64 *v71; // rsi
  unsigned __int64 *v72; // rsi
  CUtlBuffer *v73; // [rsp+8h] [rbp-C8h]
  CUtlBuffer *v74; // [rsp+8h] [rbp-C8h]
  CUtlBuffer *v75; // [rsp+8h] [rbp-C8h]
  CUtlBuffer *v76; // [rsp+8h] [rbp-C8h]
  CUtlBuffer *v77; // [rsp+8h] [rbp-C8h]
  CByteswap *p_m_Byteswap; // [rsp+28h] [rbp-A8h]
  CUtlBuffer *v79; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v80; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v81; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v82; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v83; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v84; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v85; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v86; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v87; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v88; // [rsp+30h] [rbp-A0h]
  unsigned __int8 v89; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v90; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v91; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v92; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v93; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v94; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v95; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v96; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v97; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v98; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v99; // [rsp+30h] [rbp-A0h]
  CUtlBuffer *v100; // [rsp+30h] [rbp-A0h]
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t v102; // [rsp+44h] [rbp-8Ch]
  int v103; // [rsp+48h] [rbp-88h]
  float v104; // [rsp+4Ch] [rbp-84h]
  int v105; // [rsp+50h] [rbp-80h]
  int v106; // [rsp+54h] [rbp-7Ch]
  float v107; // [rsp+58h] [rbp-78h]
  int v108; // [rsp+5Ch] [rbp-74h]
  int v109; // [rsp+60h] [rbp-70h]
  float v110; // [rsp+64h] [rbp-6Ch]
  __int64 v111; // [rsp+68h] [rbp-68h] BYREF
  unsigned __int64 v112; // [rsp+70h] [rbp-60h] BYREF
  __int64 v113; // [rsp+78h] [rbp-58h] BYREF
  LeafCodeInfo_t v114; // [rsp+80h] [rbp-50h] BYREF

  v3 = 0;
  if ( this->m_keyHashes.m_nCount > 0 )
  {
    v4 = this;
    v5 = buf;
    p_m_Byteswap = &buf->m_Byteswap;
    v6 = 0;
    for ( i = 0; ; ++i )
    {
      v8 = v4->m_keyValues.m_nAllocated != 0 ? v4->m_keyValues.m_pElements : 0LL;
      v9 = (&v8->m_value.m_float64 + v3);
      if ( (*(v9 + 2) != 0) == bSerializeAttributes )
        break;
LABEL_3:
      ++v6;
      v3 = (v3 + 24);
      if ( v4->m_keyHashes.m_nCount <= v6 )
        return 1;
    }
    m_nAllocated = v4->m_keyHashes.m_nAllocated;
    if ( m_nAllocated != 0 )
    {
      if ( m_nAllocated <= 9 )
        m_pElements = (&v4->m_keyHashes.m_nAllocAllocated + 1);
      else
        m_pElements = v4->m_keyHashes.m_pElements;
    }
    else
    {
      m_pElements = 0;
    }
    if ( (v5->m_Flags & 1) != 0 )
    {
      v79 = v5;
      CUtlBuffer::Printf(v5, "%u", m_pElements[i]);
      v12 = v79;
    }
    else
    {
      v82 = v5;
      v102 = m_pElements[i];
      v16 = CUtlBuffer::CheckPut(v5, 4);
      v12 = v82;
      if ( v16 )
      {
        if ( (*&v82->m_Byteswap & 1) != 0 )
        {
          m_Put = v82->m_Put;
          v19 = &v82->m_Memory.m_pMemory[m_Put - v82->m_nOffset];
          if ( v19 != 0 )
          {
            LOBYTE(v114.m_szFile) = HIBYTE(v102);
            BYTE1(v114.m_szFile) = BYTE2(v102);
            BYTE2(v114.m_szFile) = BYTE1(v102);
            BYTE3(v114.m_szFile) = v102;
            *v19 = v114.m_szFile;
            m_Put = v82->m_Put;
          }
        }
        else
        {
          *&v82->m_Memory.m_pMemory[v82->m_Put - v82->m_nOffset] = v102;
          m_Put = v82->m_Put;
        }
        v82->m_Put = m_Put + 4;
        CUtlBuffer::AddNullTermination(v82);
        v12 = v82;
        if ( !bSerializeAttributes )
        {
LABEL_13:
          if ( (v12->m_Flags & 1) != 0 )
          {
            v80 = v12;
            CUtlBuffer::Printf(v12, "%d", *(v9 + 4));
            v5 = v80;
          }
          else
          {
            v81 = v12;
            v103 = *(v9 + 4);
            v14 = CUtlBuffer::CheckPut(v12, 4);
            v5 = v81;
            if ( v14 )
            {
              if ( (*&v81->m_Byteswap & 1) != 0 )
              {
                v15 = v81->m_Put;
                v20 = &v81->m_Memory.m_pMemory[v15 - v81->m_nOffset];
                if ( v20 != 0 )
                {
                  LOBYTE(v114.m_szFile) = HIBYTE(v103);
                  BYTE1(v114.m_szFile) = BYTE2(v103);
                  BYTE2(v114.m_szFile) = BYTE1(v103);
                  BYTE3(v114.m_szFile) = v103;
                  *v20 = v114.m_szFile;
                  v15 = v81->m_Put;
                }
              }
              else
              {
                *&v81->m_Memory.m_pMemory[v81->m_Put - v81->m_nOffset] = v103;
                v15 = v81->m_Put;
              }
              v81->m_Put = v15 + 4;
              CUtlBuffer::AddNullTermination(v81);
              v5 = v81;
            }
          }
          switch ( *(v9 + 4) )
          {
            case 0:
              goto LABEL_3;
            case 1:
              v95 = v5;
              CUtlBuffer::PutType<float>(v5, *v9, v13);
              v5 = v95;
              goto LABEL_3;
            case 3:
              v86 = *v9;
              if ( *v9 == 0 )
                v86 = &vec3_origin;
              v73 = v3;
              v21 = 0;
              v22 = v5;
              do
              {
                if ( (v22->m_Flags & 1) != 0 )
                {
                  CUtlBuffer::Printf(v22, "%f", *(&v86->m_Memory.m_pMemory + v21));
                }
                else
                {
                  v106 = *(&v86->m_Memory.m_pMemory + v21);
                  if ( CUtlBuffer::CheckPut(v22, 4) )
                  {
                    if ( (*&v22->m_Byteswap & 1) != 0 )
                    {
                      v54 = v22->m_Put;
                      v66 = &v22->m_Memory.m_pMemory[v54 - v22->m_nOffset];
                      if ( v66 != 0 )
                      {
                        LOBYTE(v114.m_szFile) = HIBYTE(v106);
                        BYTE1(v114.m_szFile) = BYTE2(v106);
                        BYTE2(v114.m_szFile) = BYTE1(v106);
                        BYTE3(v114.m_szFile) = v106;
                        *v66 = v114.m_szFile;
                        v54 = v22->m_Put;
                      }
                    }
                    else
                    {
                      *&v22->m_Memory.m_pMemory[v22->m_Put - v22->m_nOffset] = v106;
                      v54 = v22->m_Put;
                    }
                    v22->m_Put = v54 + 4;
                    CUtlBuffer::AddNullTermination(v22);
                  }
                }
                v21 += 4;
              }
              while ( v21 != 12 );
              goto LABEL_43;
            case 4:
              v23 = *v9;
              if ( *v9 == 0 )
                v23 = &quat_identity;
              v87 = v3;
              v74 = v4;
              v24 = 0;
              v25 = v5;
              v26 = v23;
              do
              {
                if ( (v25->m_Flags & 1) != 0 )
                {
                  CUtlBuffer::Printf(v25, "%f", *(&v26->x + v24));
                }
                else
                {
                  v109 = *(&v26->x + v24);
                  if ( CUtlBuffer::CheckPut(v25, 4) )
                  {
                    if ( (*&v25->m_Byteswap & 1) != 0 )
                    {
                      v53 = v25->m_Put;
                      v57 = &v25->m_Memory.m_pMemory[v53 - v25->m_nOffset];
                      if ( v57 != 0 )
                      {
                        LOBYTE(v114.m_szFile) = HIBYTE(v109);
                        BYTE1(v114.m_szFile) = BYTE2(v109);
                        BYTE2(v114.m_szFile) = BYTE1(v109);
                        BYTE3(v114.m_szFile) = v109;
                        *v57 = v114.m_szFile;
                        v53 = v25->m_Put;
                      }
                    }
                    else
                    {
                      *&v25->m_Memory.m_pMemory[v25->m_Put - v25->m_nOffset] = v109;
                      v53 = v25->m_Put;
                    }
                    v25->m_Put = v53 + 4;
                    CUtlBuffer::AddNullTermination(v25);
                  }
                }
                v24 += 4;
              }
              while ( v24 != 16 );
              goto LABEL_50;
            case 5:
            case 0x26:
              v84 = v5;
              CUtlBuffer::PutType<int>(v5, *v9);
              v5 = v84;
              goto LABEL_3;
            case 6:
              v28 = v5->m_Put;
              v89 = *v9;
              m_Flags = v5->m_Flags;
              if ( (m_Flags & 1) == 0
                || (m_nOffset = v5->m_nOffset, v28 == m_nOffset)
                || v5->m_Memory.m_pMemory[v28 - 1 - m_nOffset] != 10 )
              {
                if ( v28 != 0 )
                  goto LABEL_126;
              }
              v75 = v3;
              if ( (m_Flags & 0x10) != 0 )
                m_nTab = 0;
              else
                m_nTab = v5->m_nTab;
              v32 = v5;
              while ( --m_nTab >= 0 )
              {
                if ( CUtlBuffer::CheckPut(v32, 1) )
                {
                  v32->m_Memory.m_pMemory[v32->m_Put - v32->m_nOffset] = 9;
                  ++v32->m_Put;
                  CUtlBuffer::AddNullTermination(v32);
                }
              }
              goto LABEL_154;
            case 8:
              v36 = v5->m_Put;
              v89 = *v9;
              v37 = v5->m_Flags;
              if ( (v37 & 1) == 0 || (v38 = v5->m_nOffset, v36 == v38) || v5->m_Memory.m_pMemory[v36 - 1 - v38] != 10 )
              {
                if ( v36 != 0 )
                  goto LABEL_126;
              }
              v75 = v3;
              if ( (v37 & 0x10) != 0 )
                v39 = 0;
              else
                v39 = v5->m_nTab;
              v32 = v5;
              while ( --v39 >= 0 )
              {
                if ( CUtlBuffer::CheckPut(v32, 1) )
                {
                  v32->m_Memory.m_pMemory[v32->m_Put - v32->m_nOffset] = 9;
                  ++v32->m_Put;
                  CUtlBuffer::AddNullTermination(v32);
                }
              }
LABEL_154:
              v3 = v75;
              v5 = v32;
LABEL_126:
              v77 = v5;
              v56 = CUtlBuffer::CheckPut(v5, 1);
              v5 = v77;
              if ( v56 )
              {
                v77->m_Memory.m_pMemory[v77->m_Put - v77->m_nOffset] = v89;
                ++v77->m_Put;
                CUtlBuffer::AddNullTermination(v77);
                v5 = v77;
              }
              goto LABEL_3;
            case 9:
              v35 = *v9;
              if ( (v5->m_Flags & 1) != 0 )
                goto LABEL_70;
              v98 = v5;
              v110 = *v9;
              v61 = CUtlBuffer::CheckPut(v5, 4);
              v5 = v98;
              if ( !v61 )
                goto LABEL_3;
              if ( (*&v98->m_Byteswap & 1) != 0 )
              {
                v52 = v98->m_Put;
                v70 = &v98->m_Memory.m_pMemory[v52 - v98->m_nOffset];
                if ( v70 != 0 )
                {
                  LOBYTE(v114.m_szFile) = HIBYTE(v110);
                  BYTE1(v114.m_szFile) = BYTE2(v110);
                  BYTE2(v114.m_szFile) = BYTE1(v110);
                  BYTE3(v114.m_szFile) = LOBYTE(v110);
                  *v70 = v114.m_szFile;
                  v52 = v98->m_Put;
                }
              }
              else
              {
                *&v98->m_Memory.m_pMemory[v98->m_Put - v98->m_nOffset] = v110;
                v52 = v98->m_Put;
              }
              goto LABEL_140;
            case 0x19:
              v93 = *v9;
              if ( *v9 == 0 )
                v93 = &vec2_origin;
              v76 = v3;
              v40 = 0;
              v41 = v5;
              do
              {
                if ( (v41->m_Flags & 1) != 0 )
                {
                  CUtlBuffer::Printf(v41, "%f", *(&v93->m_Memory.m_pMemory + v40));
                }
                else
                {
                  v105 = *(&v93->m_Memory.m_pMemory + v40);
                  if ( CUtlBuffer::CheckPut(v41, 4) )
                  {
                    if ( (*&v41->m_Byteswap & 1) != 0 )
                    {
                      v42 = v41->m_Put;
                      v67 = &v41->m_Memory.m_pMemory[v42 - v41->m_nOffset];
                      if ( v67 != 0 )
                      {
                        LOBYTE(v114.m_szFile) = HIBYTE(v105);
                        BYTE1(v114.m_szFile) = BYTE2(v105);
                        BYTE2(v114.m_szFile) = BYTE1(v105);
                        BYTE3(v114.m_szFile) = v105;
                        *v67 = v114.m_szFile;
                        v42 = v41->m_Put;
                      }
                    }
                    else
                    {
                      *&v41->m_Memory.m_pMemory[v41->m_Put - v41->m_nOffset] = v105;
                      v42 = v41->m_Put;
                    }
                    v41->m_Put = v42 + 4;
                    CUtlBuffer::AddNullTermination(v41);
                  }
                }
                v40 += 4;
              }
              while ( v40 != 8 );
              v5 = v41;
              v3 = v76;
              goto LABEL_3;
            case 0x1A:
              v33 = "%lld";
              v34 = *v9;
              if ( (v5->m_Flags & 1) != 0 )
                goto LABEL_68;
              v97 = v5;
              v111 = *v9;
              v59 = CUtlBuffer::CheckPut(v5, 8);
              v5 = v97;
              if ( !v59 )
                goto LABEL_3;
              if ( (*&v97->m_Byteswap & 1) != 0 )
              {
                v50 = v97->m_Put;
                v71 = &v97->m_Memory.m_pMemory[v50 - v97->m_nOffset];
                if ( v71 != 0 )
                {
                  CByteswap::SwapBufferToTargetEndian<long long>(p_m_Byteswap, v71, &v111, v60);
                  v5 = v97;
                  v50 = v97->m_Put;
                }
              }
              else
              {
                *&v97->m_Memory.m_pMemory[v97->m_Put - v97->m_nOffset] = v111;
                v50 = v97->m_Put;
              }
              goto LABEL_144;
            case 0x1B:
              v43 = *v9;
              if ( *v9 == 0 )
                v43 = &vec4_origin;
              v74 = v4;
              v25 = v5;
              v87 = v3;
              v44 = 0;
              v45 = v43;
              x = v43->x;
              if ( (v5->m_Flags & 1) != 0 )
                goto LABEL_95;
              break;
            case 0x1E:
              v92 = v5;
              CUtlBuffer::PutString(v5, *v9);
              v5 = v92;
              goto LABEL_3;
            case 0x21:
              v33 = "%llu";
              v34 = *v9;
              if ( (v5->m_Flags & 1) != 0 )
              {
LABEL_68:
                v90 = v5;
                CUtlBuffer::Printf(v5, v33, v34);
                v5 = v90;
                goto LABEL_3;
              }
              v94 = v5;
              v112 = *v9;
              v48 = CUtlBuffer::CheckPut(v5, 8);
              v5 = v94;
              if ( !v48 )
                goto LABEL_3;
              if ( (*&v94->m_Byteswap & 1) != 0 )
              {
                v50 = v94->m_Put;
                v72 = &v94->m_Memory.m_pMemory[v50 - v94->m_nOffset];
                if ( v72 != 0 )
                {
                  CByteswap::SwapBufferToTargetEndian<unsigned long long>(p_m_Byteswap, v72, &v112, v49);
                  v5 = v94;
                  v50 = v94->m_Put;
                }
              }
              else
              {
                *&v94->m_Memory.m_pMemory[v94->m_Put - v94->m_nOffset] = v112;
                v50 = v94->m_Put;
              }
              goto LABEL_144;
            case 0x22:
              if ( (v5->m_Flags & 1) != 0 )
              {
                v85 = v5;
                CUtlBuffer::Printf(v5, "%.15lf", *v9);
                v5 = v85;
                goto LABEL_3;
              }
              v99 = v5;
              v113 = *v9;
              v63 = CUtlBuffer::CheckPut(v5, 8);
              v5 = v99;
              if ( !v63 )
                goto LABEL_3;
              if ( (*&v99->m_Byteswap & 1) != 0 )
              {
                v50 = v99->m_Put;
                v69 = &v99->m_Memory.m_pMemory[v50 - v99->m_nOffset];
                if ( v69 != 0 )
                {
                  CByteswap::SwapBufferToTargetEndian<double>(p_m_Byteswap, v69, &v113, v64);
                  v5 = v99;
                  v50 = v99->m_Put;
                }
              }
              else
              {
                *&v99->m_Memory.m_pMemory[v99->m_Put - v99->m_nOffset] = v113;
                v50 = v99->m_Put;
              }
LABEL_144:
              v62 = v50 + 8;
              goto LABEL_145;
            case 0x25:
              v35 = *v9;
              if ( (v5->m_Flags & 1) != 0 )
              {
LABEL_70:
                v91 = v5;
                CUtlBuffer::Printf(v5, "%u", LODWORD(v35));
                v5 = v91;
              }
              else
              {
                v96 = v5;
                v104 = *v9;
                v51 = CUtlBuffer::CheckPut(v5, 4);
                v5 = v96;
                if ( v51 )
                {
                  if ( (*&v96->m_Byteswap & 1) != 0 )
                  {
                    v52 = v96->m_Put;
                    v68 = &v96->m_Memory.m_pMemory[v52 - v96->m_nOffset];
                    if ( v68 != 0 )
                    {
                      LOBYTE(v114.m_szFile) = HIBYTE(v104);
                      BYTE1(v114.m_szFile) = BYTE2(v104);
                      BYTE2(v114.m_szFile) = BYTE1(v104);
                      BYTE3(v114.m_szFile) = LOBYTE(v104);
                      *v68 = v114.m_szFile;
                      v52 = v96->m_Put;
                    }
                  }
                  else
                  {
                    *&v96->m_Memory.m_pMemory[v96->m_Put - v96->m_nOffset] = v104;
                    v52 = v96->m_Put;
                  }
LABEL_140:
                  v62 = v52 + 4;
LABEL_145:
                  v5->m_Put = v62;
                  v100 = v5;
                  CUtlBuffer::AddNullTermination(v5);
                  v5 = v100;
                }
              }
              goto LABEL_3;
            case 0x27:
              v88 = *v9;
              if ( *v9 == 0 )
                v88 = &vec3_angle;
              v73 = v3;
              v27 = 0;
              v22 = v5;
              do
              {
                if ( (v22->m_Flags & 1) != 0 )
                {
                  CUtlBuffer::Printf(v22, "%f", *(&v88->m_Memory.m_pMemory + v27));
                }
                else
                {
                  v108 = *(&v88->m_Memory.m_pMemory + v27);
                  if ( CUtlBuffer::CheckPut(v22, 4) )
                  {
                    if ( (*&v22->m_Byteswap & 1) != 0 )
                    {
                      v55 = v22->m_Put;
                      v65 = &v22->m_Memory.m_pMemory[v55 - v22->m_nOffset];
                      if ( v65 != 0 )
                      {
                        LOBYTE(v114.m_szFile) = HIBYTE(v108);
                        BYTE1(v114.m_szFile) = BYTE2(v108);
                        BYTE2(v114.m_szFile) = BYTE1(v108);
                        BYTE3(v114.m_szFile) = v108;
                        *v65 = v114.m_szFile;
                        v55 = v22->m_Put;
                      }
                    }
                    else
                    {
                      *&v22->m_Memory.m_pMemory[v22->m_Put - v22->m_nOffset] = v108;
                      v55 = v22->m_Put;
                    }
                    v22->m_Put = v55 + 4;
                    CUtlBuffer::AddNullTermination(v22);
                  }
                }
                v27 += 4;
              }
              while ( v27 != 12 );
LABEL_43:
              v5 = v22;
              v3 = v73;
              goto LABEL_3;
            default:
              result = LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4);
              if ( result )
              {
                v114.m_szFile = "entitykeyvalues.cpp";
                v114.m_szFunction = "SerializeKeys";
                v114.m_nLine = 224;
                LoggingSystem_Log(
                  LOG_ENTITY_SYSTEM,
                  LoggingSeverity_t::LS_ERROR,
                  &v114,
                  "CEntityKeyValues::Serialize: Unsupported keyvalue variant type!\n");
                return 0;
              }
              return result;
          }
LABEL_98:
          v107 = x;
          if ( CUtlBuffer::CheckPut(v25, 4) )
          {
            if ( (*&v25->m_Byteswap & 1) != 0 )
            {
              v47 = v25->m_Put;
              v58 = &v25->m_Memory.m_pMemory[v47 - v25->m_nOffset];
              if ( v58 != 0 )
              {
                LOBYTE(v114.m_szFile) = HIBYTE(v107);
                BYTE1(v114.m_szFile) = BYTE2(v107);
                BYTE2(v114.m_szFile) = BYTE1(v107);
                BYTE3(v114.m_szFile) = LOBYTE(v107);
                *v58 = v114.m_szFile;
                v47 = v25->m_Put;
              }
            }
            else
            {
              *&v25->m_Memory.m_pMemory[v25->m_Put - v25->m_nOffset] = v107;
              v47 = v25->m_Put;
            }
            v25->m_Put = v47 + 4;
            CUtlBuffer::AddNullTermination(v25);
          }
          while ( 1 )
          {
            v44 += 4;
            if ( v44 == 16 )
              break;
            x = *(&v45->x + v44);
            if ( (v25->m_Flags & 1) == 0 )
              goto LABEL_98;
LABEL_95:
            CUtlBuffer::Printf(v25, "%f", x);
          }
LABEL_50:
          v5 = v25;
          v3 = v87;
          v4 = v74;
          goto LABEL_3;
        }
LABEL_25:
        v83 = v12;
        CUtlBuffer::PutString(v12, *(v9 + 2));
        v12 = v83;
        goto LABEL_13;
      }
    }
    if ( !bSerializeAttributes )
      goto LABEL_13;
    goto LABEL_25;
  }
  return 1;
}


// CEntityKeyValues::UnserializeKeys  (line 232, @0x00000000030a39c0, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, Alloc, Allocate, Allocate<QAngle>, Allocate<Quaternion>, Allocate<Vector2D>, Base, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, CopyData<Vector>, EnsureCapacity, Free, GetChar, GetDouble, GetFloat, GetInt, GetInt64, GetType<double>, GetType<float>, GetType<int>, GetType<long long int>, GetType<long long unsigned int>, GetType<unsigned int>, GetTypeBin<char>, GetTypeBin<double>, GetTypeBin<float>, GetTypeBin<int>, GetTypeBin<long long int>, GetTypeBin<long long unsigned int>, GetTypeBin<unsigned int>, GetTypeText<double>, GetTypeText<float>, GetTypeText<int>, GetTypeText<long long int>, GetTypeText<long long unsigned int>, GetTypeText<unsigned int>, GetUnsignedInt, GetUnsignedInt64, LeafCodeInfo_t, LowLevelByteSwap<float>, LowLevelByteSwap<int>, LowLevelByteSwap<unsigned int>, PeekGet, StringToNumber<double>, StringToNumber<float>, StringToNumber<int>, StringToNumber<long long int>, StringToNumber<long long unsigned int>, StringToNumber<unsigned int>, SwapBufferToTargetEndian<double>, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<long long int>, SwapBufferToTargetEndian<long long unsigned int>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator=, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, CUtlBuffer::GetType<unsigned int>, CUtlBuffer::GetString, CVariantBase<CEntityVariantAllocator>::CopyData, CUtlBuffer::GetType<float>, CUtlBuffer::CheckGet, CUtlBuffer::GetType<int>, CUtlScratchMemoryPool::AllocAligned, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CUtlBuffer::PeekStringLength (21 total)
// callers: CEntityKeyValues::Unserialize
// strings: "entitykeyvalues.cpp", "UnserializeKeys", "CEntityKeyValues::Unserialize: Unsupported keyvalue variant type!\n"
// globals: jpt_30A3B51, CEntityVariantAllocator::sm_pMemoryPool
bool __fastcall CEntityKeyValues::UnserializeKeys(
        CEntityKeyValues *const this,
        CUtlBuffer *const buf,
        int nCount,
        bool bUnserializeAttributes)
{
  int v6; // r15d
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>,unsigned int,short int> *v7; // rdi
  __int64 m_nCount; // r13
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v10; // dx
  int v11; // ecx
  int v12; // r12d
  int v13; // edx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v14; // rax
  CEntityKeyValues::KeyValueInfo_t *Ptr; // rax
  CVariantBase<CEntityVariantAllocator> *p_m_value; // r12
  bool v17; // al
  __int64 v18; // rdx
  uint16 v19; // ax
  int v20; // edx
  uint16 v21; // ax
  int v22; // edx
  bool v23; // al
  double v24; // xmm0_8
  uint16 v25; // ax
  bool v26; // al
  __int64 v27; // rdx
  uint16 v28; // ax
  bool v29; // dl
  bool result; // al
  uint16 m_flags; // ax
  int v32; // xmm0_4
  bool v33; // al
  __int64 v34; // rdx
  uint16 v35; // ax
  uint16 v36; // ax
  int v37; // edx
  bool v38; // al
  unsigned __int8 v39; // dl
  uint16 v40; // ax
  bool v41; // al
  uint16 v42; // dx
  uint16 v43; // ax
  int v44; // edx
  LeafCodeInfo_t *v45; // r15
  bool v46; // al
  float v47; // xmm0_4
  uint16 v48; // ax
  LeafCodeInfo_t *v49; // r15
  bool v50; // al
  float v51; // xmm0_4
  uint16 v52; // ax
  LeafCodeInfo_t *v53; // r15
  bool v54; // al
  float v55; // xmm0_4
  uint16 v56; // ax
  _DWORD *v57; // rax
  __int64 j; // r13
  bool v59; // al
  float v60; // xmm0_4
  uint16 v61; // ax
  CUtlScratchMemoryPool *v62; // rdi
  _QWORD *v63; // rax
  LeafCodeInfo_t *v64; // r15
  bool v65; // al
  float v66; // xmm0_4
  uint16 v67; // ax
  _DWORD *v68; // rax
  int v69; // ecx
  int m_Get; // edx
  int v71; // esi
  int v72; // r13d
  char *v73; // rax
  int m_szFile; // r12d
  int v75; // r13d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v76; // rax
  void *v77; // rcx
  unsigned __int64 v78; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rsi
  int *v80; // rax
  int *v81; // rax
  bool v82; // al
  int v83; // eax
  bool v84; // al
  int v85; // eax
  bool v86; // al
  int v87; // eax
  bool v88; // al
  int v89; // eax
  bool v90; // al
  int v91; // eax
  bool v92; // al
  int v93; // ecx
  int v94; // eax
  bool v95; // al
  int v96; // ecx
  int v97; // eax
  bool v98; // al
  int v99; // eax
  unsigned __int8 *m_pMemory; // rcx
  bool v101; // zf
  int v102; // edx
  int v103; // eax
  int v104; // edx
  int v105; // eax
  int v106; // r13d
  int v107; // r13d
  int v108; // r13d
  int v109; // [rsp+8h] [rbp-4B8h]
  int v110; // [rsp+8h] [rbp-4B8h]
  int v111; // [rsp+10h] [rbp-4B0h]
  int v112; // [rsp+10h] [rbp-4B0h]
  int v113; // [rsp+10h] [rbp-4B0h]
  int i; // [rsp+3Ch] [rbp-484h]
  int v117; // [rsp+4Ch] [rbp-474h] BYREF
  int nIncrement[2]; // [rsp+50h] [rbp-470h] BYREF
  LeafCodeInfo_t v119; // [rsp+60h] [rbp-460h] BYREF
  char pAttributeValue[1032]; // [rsp+80h] [rbp-440h] BYREF
  unsigned __int64 v121; // [rsp+488h] [rbp-38h]

  v121 = __readfsqword(0x28u);
  if ( nCount > 0 )
  {
    for ( i = 0; i != nCount; ++i )
    {
      if ( (buf->m_Flags & 1) != 0 )
      {
        nIncrement[0] = 128;
        v6 = 0;
        if ( CUtlBuffer::CheckArbitraryPeekGet(buf, 0, nIncrement) )
        {
          v119.m_szFile = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
          m_szFile = v119.m_szFile;
          v117 = V_strtoui64(v119.m_szFile, &v119, 10);
          v6 = v117;
          if ( LODWORD(v119.m_szFile) != m_szFile )
            buf->m_Get += LODWORD(v119.m_szFile) - m_szFile;
        }
      }
      else
      {
        v6 = 0;
        if ( CUtlBuffer::CheckGet(buf, 4) )
        {
          if ( (*&buf->m_Byteswap & 1) != 0 )
          {
            m_Get = buf->m_Get;
            v81 = &buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
            if ( v81 == 0 )
              v81 = &v117;
            LODWORD(v119.m_szFile) = v117;
            LOBYTE(v119.m_szFile) = *(v81 + 3);
            BYTE1(v119.m_szFile) = *(v81 + 2);
            BYTE2(v119.m_szFile) = *(v81 + 1);
            BYTE3(v119.m_szFile) = *v81;
            v6 = v119.m_szFile;
          }
          else
          {
            m_Get = buf->m_Get;
            v6 = *&buf->m_Memory.m_pMemory[m_Get - buf->m_nOffset];
          }
          buf->m_Get = m_Get + 4;
        }
      }
      m_nCount = this->m_keyHashes.m_nCount;
      if ( m_nCount == 0x7FFF )
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(v7);
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      v10 = this->m_keyHashes.m_nCount;
      v11 = m_nCount + 1;
      if ( v11 > m_nAllocated )
      {
        LOWORD(v12) = m_nCount + 1;
        if ( v11 > 9 )
        {
          v12 = this->m_keyHashes.m_nAllocated;
          while ( 1 )
          {
            v13 = v12;
            if ( v11 <= v12 )
              break;
            if ( v12 <= 16382 )
            {
              v71 = 2 * v12;
              v12 = 8;
              if ( 2 * v13 > 7 )
                v12 = v71;
            }
            else
            {
              v12 = 0x7FFF;
            }
          }
        }
        if ( m_nAllocated > 9 )
        {
          v76 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_keyHashes.m_pElements, 4LL * v12);
          v10 = this->m_keyHashes.m_nCount;
          this->m_keyHashes.m_pElements = v76;
        }
        else
        {
          v10 = this->m_keyHashes.m_nCount;
          if ( v12 > 9 )
          {
            v77 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v12, m_nCount);
            v78 = this->m_keyHashes.m_nAllocated;
            if ( v78 != 0 )
            {
              m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
              if ( v78 > 9 )
                m_pElements = this->m_keyHashes.m_pElements;
            }
            else
            {
              m_pElements = 0;
            }
            this->m_keyHashes.m_pElements = memcpy(v77, m_pElements, 4LL * this->m_keyHashes.m_nCount);
            v10 = this->m_keyHashes.m_nCount;
          }
        }
        this->m_keyHashes.m_nAllocated = v12;
        m_nAllocated = v12;
      }
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          v14 = (&this->m_keyHashes.m_nAllocAllocated + 1);
        else
          v14 = this->m_keyHashes.m_pElements;
      }
      else
      {
        v14 = 0;
      }
      this->m_keyHashes.m_nCount = v10 + 1;
      v14[m_nCount] = v6;
      Ptr = CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
      p_m_value = &Ptr->m_value;
      if ( bUnserializeAttributes )
      {
        v72 = CUtlBuffer::PeekStringLength(buf);
        v73 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, v72, 8 * (v72 >= 16) + 8);
        p_m_value[1].m_uint64 = v73;
        CUtlBuffer::GetString(buf, v73, v72);
      }
      else
      {
        Ptr->m_pAttributeName = 0;
      }
      if ( (buf->m_Flags & 1) != 0 )
      {
        nIncrement[0] = 128;
        v17 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, nIncrement);
        v18 = 0;
        if ( v17 )
        {
          LOBYTE(v18) = 10;
          v119.m_szFile = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
          v75 = v119.m_szFile;
          v117 = V_strtoi64(v119.m_szFile, &v119, v18);
          LODWORD(v18) = v117;
          if ( LODWORD(v119.m_szFile) != v75 )
            buf->m_Get += LODWORD(v119.m_szFile) - v75;
        }
      }
      else
      {
        if ( !CUtlBuffer::CheckGet(buf, 4) )
          continue;
        if ( (*&buf->m_Byteswap & 1) != 0 )
        {
          v69 = buf->m_Get;
          v80 = &buf->m_Memory.m_pMemory[v69 - buf->m_nOffset];
          if ( v80 == 0 )
            v80 = &v117;
          LODWORD(v119.m_szFile) = v117;
          LOBYTE(v119.m_szFile) = *(v80 + 3);
          BYTE1(v119.m_szFile) = *(v80 + 2);
          BYTE2(v119.m_szFile) = *(v80 + 1);
          BYTE3(v119.m_szFile) = *v80;
          LODWORD(v18) = v119.m_szFile;
        }
        else
        {
          v69 = buf->m_Get;
          LODWORD(v18) = *&buf->m_Memory.m_pMemory[v69 - buf->m_nOffset];
        }
        buf->m_Get = v69 + 4;
      }
      switch ( v18 )
      {
        case 0:
          break;
        case 1:
          CUtlBuffer::GetType<float>(buf, &v119);
          m_flags = p_m_value->m_flags;
          v32 = v119.m_szFile;
          if ( (m_flags & 1) != 0 )
            p_m_value->m_flags = m_flags & 0xFFFE;
          p_m_value->m_uint64 = 0;
          p_m_value->m_type = 1;
          p_m_value->m_int = v32;
          break;
        case 3:
          v49 = &v119;
          do
          {
            if ( (buf->m_Flags & 1) != 0 )
            {
              v117 = 128;
              v50 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &v117);
              v51 = 0.0;
              if ( v50 )
              {
                *nIncrement = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
                v110 = nIncrement[0];
                v51 = V_strtod(*nIncrement, nIncrement);
                if ( nIncrement[0] != v110 )
                  buf->m_Get += nIncrement[0] - v110;
              }
            }
            else
            {
              v88 = CUtlBuffer::CheckGet(buf, 4);
              v51 = 0.0;
              if ( v88 )
              {
                v89 = buf->m_Get;
                v51 = *&buf->m_Memory.m_pMemory[v89 - buf->m_nOffset];
                if ( (*&buf->m_Byteswap & 1) != 0 )
                {
                  LOBYTE(nIncrement[0]) = HIBYTE(v51);
                  BYTE1(nIncrement[0]) = BYTE2(v51);
                  BYTE2(nIncrement[0]) = BYTE1(v51);
                  HIBYTE(nIncrement[0]) = LOBYTE(v51);
                  v51 = *nIncrement;
                }
                buf->m_Get = v89 + 4;
              }
            }
            *&v49->m_szFile = v51;
            v49 = (v49 + 4);
          }
          while ( v49 != (&v119.m_nLine + 1) );
          v52 = p_m_value->m_flags;
          if ( (v52 & 1) != 0 )
            p_m_value->m_flags = v52 & 0xFFFE;
          p_m_value->m_uint64 = 0;
          p_m_value->m_type = 3;
          goto LABEL_86;
        case 4:
          v45 = &v119;
          do
          {
            if ( (buf->m_Flags & 1) != 0 )
            {
              v117 = 128;
              v46 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &v117);
              v47 = 0.0;
              if ( v46 )
              {
                *nIncrement = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
                v112 = nIncrement[0];
                v47 = V_strtod(*nIncrement, nIncrement);
                if ( nIncrement[0] != v112 )
                  buf->m_Get += nIncrement[0] - v112;
              }
            }
            else
            {
              v84 = CUtlBuffer::CheckGet(buf, 4);
              v47 = 0.0;
              if ( v84 )
              {
                v85 = buf->m_Get;
                v47 = *&buf->m_Memory.m_pMemory[v85 - buf->m_nOffset];
                if ( (*&buf->m_Byteswap & 1) != 0 )
                {
                  LOBYTE(nIncrement[0]) = HIBYTE(v47);
                  BYTE1(nIncrement[0]) = BYTE2(v47);
                  BYTE2(nIncrement[0]) = BYTE1(v47);
                  HIBYTE(nIncrement[0]) = LOBYTE(v47);
                  v47 = *nIncrement;
                }
                buf->m_Get = v85 + 4;
              }
            }
            *&v45->m_szFile = v47;
            v45 = (v45 + 4);
          }
          while ( v45 != &v119.m_szFunction );
          v48 = p_m_value->m_flags;
          if ( (v48 & 1) != 0 )
            p_m_value->m_flags = v48 & 0xFFFE;
          p_m_value->m_uint64 = 0;
          p_m_value->m_type = 4;
          goto LABEL_101;
        case 5:
          CUtlBuffer::GetType<int>(buf, &v119);
          v43 = p_m_value->m_flags;
          v44 = v119.m_szFile;
          if ( (v43 & 1) != 0 )
            p_m_value->m_flags = v43 & 0xFFFE;
          p_m_value->m_uint64 = 0;
          p_m_value->m_type = 5;
          p_m_value->m_int = v44;
          break;
        case 6:
          v41 = CUtlBuffer::CheckGet(buf, 1);
          if ( !v41 )
          {
            v42 = p_m_value->m_flags;
            if ( (v42 & 1) == 0 )
              goto LABEL_61;
LABEL_60:
            p_m_value->m_flags = v42 & 0xFFFE;
            goto LABEL_61;
          }
          v102 = buf->m_Get;
          v103 = v102 + 1;
          LOBYTE(v102) = buf->m_Memory.m_pMemory[v102 - buf->m_nOffset];
          buf->m_Get = v103;
          v101 = v102 == 0;
          v42 = p_m_value->m_flags;
          v41 = !v101;
          if ( (v42 & 1) != 0 )
            goto LABEL_60;
LABEL_61:
          p_m_value->m_uint64 = 0;
          p_m_value->m_type = 6;
          p_m_value->m_char = v41;
          break;
        case 8:
          v38 = CUtlBuffer::CheckGet(buf, 1);
          v39 = 0;
          if ( !v38 )
          {
            v40 = p_m_value->m_flags;
            if ( (v40 & 1) == 0 )
              goto LABEL_57;
LABEL_56:
            p_m_value->m_flags = v40 & 0xFFFE;
            goto LABEL_57;
          }
          v104 = buf->m_Get;
          v105 = v104 + 1;
          v39 = buf->m_Memory.m_pMemory[v104 - buf->m_nOffset];
          buf->m_Get = v105;
          v40 = p_m_value->m_flags;
          if ( (v40 & 1) != 0 )
            goto LABEL_56;
LABEL_57:
          p_m_value->m_uint64 = 0;
          p_m_value->m_type = 8;
          p_m_value->m_char = v39;
          break;
        case 9:
          CUtlBuffer::GetType<unsigned int>(buf, &v119);
          v36 = p_m_value->m_flags;
          v37 = v119.m_szFile;
          if ( (v36 & 1) != 0 )
            p_m_value->m_flags = v36 & 0xFFFE;
          p_m_value->m_uint64 = 0;
          p_m_value->m_type = 9;
          p_m_value->m_int = v37;
          break;
        case 25:
          for ( j = 0; j != 2; ++j )
          {
            if ( (buf->m_Flags & 1) != 0 )
            {
              v117 = 128;
              v59 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &v117);
              v60 = 0.0;
              if ( v59 )
              {
                v119.m_szFile = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
                v113 = v119.m_szFile;
                v60 = V_strtod(v119.m_szFile, &v119);
                if ( LODWORD(v119.m_szFile) != v113 )
                  buf->m_Get += LODWORD(v119.m_szFile) - v113;
              }
            }
            else
            {
              v90 = CUtlBuffer::CheckGet(buf, 4);
              v60 = 0.0;
              if ( v90 )
              {
                v91 = buf->m_Get;
                v60 = *&buf->m_Memory.m_pMemory[v91 - buf->m_nOffset];
                if ( (*&buf->m_Byteswap & 1) != 0 )
                {
                  LOBYTE(v119.m_szFile) = HIBYTE(v60);
                  BYTE1(v119.m_szFile) = BYTE2(v60);
                  BYTE2(v119.m_szFile) = BYTE1(v60);
                  BYTE3(v119.m_szFile) = LOBYTE(v60);
                  v60 = *&v119.m_szFile;
                }
                buf->m_Get = v91 + 4;
              }
            }
            *&nIncrement[j] = v60;
          }
          v61 = p_m_value->m_flags;
          if ( (v61 & 1) != 0 )
            p_m_value->m_flags = v61 & 0xFFFE;
          p_m_value->m_uint64 = 0;
          v62 = CEntityVariantAllocator::sm_pMemoryPool;
          p_m_value->m_type = 25;
          v63 = CUtlScratchMemoryPool::AllocAligned(v62, 8, 8);
          p_m_value->m_uint64 = v63;
          *v63 = *nIncrement;
          p_m_value->m_flags |= 1u;
          break;
        case 26:
          if ( (buf->m_Flags & 1) != 0 )
          {
            v117 = 128;
            v33 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &v117);
            v34 = 0;
            if ( v33 )
            {
              LOBYTE(v34) = 10;
              v119.m_szFile = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
              v108 = v119.m_szFile;
              v34 = V_strtoi64(v119.m_szFile, &v119, v34);
              *nIncrement = v34;
              if ( LODWORD(v119.m_szFile) != v108 )
                buf->m_Get += LODWORD(v119.m_szFile) - v108;
            }
          }
          else
          {
            v95 = CUtlBuffer::CheckGet(buf, 8);
            v34 = 0;
            if ( v95 )
            {
              if ( (*&buf->m_Byteswap & 1) != 0 )
              {
                CByteswap::SwapBufferToTargetEndian<long long>(
                  &buf->m_Byteswap,
                  nIncrement,
                  &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset],
                  v96);
                v97 = buf->m_Get;
                v34 = *nIncrement;
              }
              else
              {
                v97 = buf->m_Get;
                v34 = *&buf->m_Memory.m_pMemory[v97 - buf->m_nOffset];
              }
              buf->m_Get = v97 + 8;
            }
          }
          v35 = p_m_value->m_flags;
          if ( (v35 & 1) != 0 )
            p_m_value->m_flags = v35 & 0xFFFE;
          p_m_value->m_uint64 = v34;
          p_m_value->m_type = 26;
          break;
        case 27:
          v64 = &v119;
          do
          {
            if ( (buf->m_Flags & 1) != 0 )
            {
              v117 = 128;
              v65 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &v117);
              v66 = 0.0;
              if ( v65 )
              {
                *nIncrement = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
                v111 = nIncrement[0];
                v66 = V_strtod(*nIncrement, nIncrement);
                if ( nIncrement[0] != v111 )
                  buf->m_Get += nIncrement[0] - v111;
              }
            }
            else
            {
              v82 = CUtlBuffer::CheckGet(buf, 4);
              v66 = 0.0;
              if ( v82 )
              {
                v83 = buf->m_Get;
                v66 = *&buf->m_Memory.m_pMemory[v83 - buf->m_nOffset];
                if ( (*&buf->m_Byteswap & 1) != 0 )
                {
                  LOBYTE(nIncrement[0]) = HIBYTE(v66);
                  BYTE1(nIncrement[0]) = BYTE2(v66);
                  BYTE2(nIncrement[0]) = BYTE1(v66);
                  HIBYTE(nIncrement[0]) = LOBYTE(v66);
                  v66 = *nIncrement;
                }
                buf->m_Get = v83 + 4;
              }
            }
            *&v64->m_szFile = v66;
            v64 = (v64 + 4);
          }
          while ( v64 != &v119.m_szFunction );
          v67 = p_m_value->m_flags;
          if ( (v67 & 1) != 0 )
            p_m_value->m_flags = v67 & 0xFFFE;
          p_m_value->m_uint64 = 0;
          p_m_value->m_type = 27;
LABEL_101:
          v68 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, 16, 16);
          p_m_value->m_uint64 = v68;
          *v68 = v119.m_szFile;
          v68[2] = v119.m_nLine;
          v68[3] = *(&v119.m_nLine + 1);
          p_m_value->m_flags |= 1u;
          break;
        case 30:
          CUtlBuffer::GetString(buf, pAttributeValue, 1024);
          CVariantBase<CEntityVariantAllocator>::CopyData(p_m_value, pAttributeValue, v29);
          break;
        case 33:
          if ( (buf->m_Flags & 1) != 0 )
          {
            v117 = 128;
            v26 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &v117);
            v27 = 0;
            if ( v26 )
            {
              LOBYTE(v27) = 10;
              v119.m_szFile = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
              v107 = v119.m_szFile;
              v27 = V_strtoui64(v119.m_szFile, &v119, v27);
              *nIncrement = v27;
              if ( LODWORD(v119.m_szFile) != v107 )
                buf->m_Get += LODWORD(v119.m_szFile) - v107;
            }
          }
          else
          {
            v92 = CUtlBuffer::CheckGet(buf, 8);
            v27 = 0;
            if ( v92 )
            {
              if ( (*&buf->m_Byteswap & 1) != 0 )
              {
                CByteswap::SwapBufferToTargetEndian<unsigned long long>(
                  &buf->m_Byteswap,
                  nIncrement,
                  &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset],
                  v93);
                v94 = buf->m_Get;
                v27 = *nIncrement;
              }
              else
              {
                v94 = buf->m_Get;
                v27 = *&buf->m_Memory.m_pMemory[v94 - buf->m_nOffset];
              }
              buf->m_Get = v94 + 8;
            }
          }
          v28 = p_m_value->m_flags;
          if ( (v28 & 1) != 0 )
            p_m_value->m_flags = v28 & 0xFFFE;
          p_m_value->m_uint64 = v27;
          p_m_value->m_type = 33;
          break;
        case 34:
          if ( (buf->m_Flags & 1) != 0 )
          {
            v117 = 128;
            v23 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &v117);
            v24 = 0.0;
            if ( v23 )
            {
              v119.m_szFile = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
              v106 = v119.m_szFile;
              v24 = V_strtod(v119.m_szFile, &v119);
              *nIncrement = v24;
              if ( LODWORD(v119.m_szFile) != v106 )
                buf->m_Get += LODWORD(v119.m_szFile) - v106;
            }
          }
          else
          {
            v98 = CUtlBuffer::CheckGet(buf, 8);
            v24 = 0.0;
            if ( v98 )
            {
              v99 = buf->m_Get;
              m_pMemory = buf->m_Memory.m_pMemory;
              v101 = (*&buf->m_Byteswap & 1) == 0;
              v24 = *&buf->m_Memory.m_pMemory[v99 - buf->m_nOffset];
              *nIncrement = v24;
              if ( !v101 )
              {
                CByteswap::SwapBufferToTargetEndian<double>(&buf->m_Byteswap, nIncrement, nIncrement, m_pMemory);
                v99 = buf->m_Get;
                v24 = *nIncrement;
              }
              buf->m_Get = v99 + 8;
            }
          }
          v25 = p_m_value->m_flags;
          if ( (v25 & 1) != 0 )
            p_m_value->m_flags = v25 & 0xFFFE;
          p_m_value->m_float64 = v24;
          p_m_value->m_type = 34;
          break;
        case 37:
          CUtlBuffer::GetType<unsigned int>(buf, &v119);
          v21 = p_m_value->m_flags;
          v22 = v119.m_szFile;
          if ( (v21 & 1) != 0 )
            p_m_value->m_flags = v21 & 0xFFFE;
          p_m_value->m_uint64 = 0;
          p_m_value->m_type = 37;
          p_m_value->m_int = v22;
          break;
        case 38:
          CUtlBuffer::GetType<unsigned int>(buf, &v119);
          v19 = p_m_value->m_flags;
          v20 = v119.m_szFile;
          if ( (v19 & 1) != 0 )
            p_m_value->m_flags = v19 & 0xFFFE;
          p_m_value->m_uint64 = 0;
          p_m_value->m_type = 38;
          p_m_value->m_int = v20;
          break;
        case 39:
          v53 = &v119;
          do
          {
            if ( (buf->m_Flags & 1) != 0 )
            {
              v117 = 128;
              v54 = CUtlBuffer::CheckArbitraryPeekGet(buf, 0, &v117);
              v55 = 0.0;
              if ( v54 )
              {
                *nIncrement = &buf->m_Memory.m_pMemory[buf->m_Get - buf->m_nOffset];
                v109 = nIncrement[0];
                v55 = V_strtod(*nIncrement, nIncrement);
                if ( nIncrement[0] != v109 )
                  buf->m_Get += nIncrement[0] - v109;
              }
            }
            else
            {
              v86 = CUtlBuffer::CheckGet(buf, 4);
              v55 = 0.0;
              if ( v86 )
              {
                v87 = buf->m_Get;
                v55 = *&buf->m_Memory.m_pMemory[v87 - buf->m_nOffset];
                if ( (*&buf->m_Byteswap & 1) != 0 )
                {
                  LOBYTE(nIncrement[0]) = HIBYTE(v55);
                  BYTE1(nIncrement[0]) = BYTE2(v55);
                  BYTE2(nIncrement[0]) = BYTE1(v55);
                  HIBYTE(nIncrement[0]) = LOBYTE(v55);
                  v55 = *nIncrement;
                }
                buf->m_Get = v87 + 4;
              }
            }
            *&v53->m_szFile = v55;
            v53 = (v53 + 4);
          }
          while ( v53 != (&v119.m_nLine + 1) );
          v56 = p_m_value->m_flags;
          if ( (v56 & 1) != 0 )
            p_m_value->m_flags = v56 & 0xFFFE;
          p_m_value->m_uint64 = 0;
          p_m_value->m_type = 39;
LABEL_86:
          v57 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, 12, 8);
          p_m_value->m_uint64 = v57;
          *v57 = v119.m_szFile;
          v57[2] = v119.m_nLine;
          p_m_value->m_flags |= 1u;
          break;
        default:
          result = LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4);
          if ( result )
          {
            v119.m_szFile = "entitykeyvalues.cpp";
            v119.m_szFunction = "UnserializeKeys";
            v119.m_nLine = 352;
            LoggingSystem_Log(
              LOG_ENTITY_SYSTEM,
              LoggingSeverity_t::LS_ERROR,
              &v119,
              "CEntityKeyValues::Unserialize: Unsupported keyvalue variant type!\n");
            return 0;
          }
          return result;
      }
    }
  }
  return 1;
}


// CEntityKeyValues::Serialize  (line 362, @0x00000000030a6490, libserver.so)  // inlines: Base, Element, LeafCodeInfo_t, LowLevelByteSwap<int>, PeekPut, PutInt, PutType<int>, PutTypeBin<int>, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CUtlBuffer::Printf, CEntityKeyValues::SerializeKeys, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "entitykeyvalues.cpp", "Serialize", "CEntityKeyValues::Serialize: Unable to write into a text-based utlbuffer!\n"
bool __fastcall CEntityKeyValues::Serialize(const CEntityKeyValues *const this, CUtlBuffer *const buf)
{
  int m_nCount; // eax
  int v4; // r14d
  int v5; // ebx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t m_nAllocated; // di
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v11; // rcx
  int m_Put; // eax
  int v14; // eax
  int v15; // eax
  unsigned __int8 *v16; // rdx
  unsigned __int8 *v17; // rdx
  unsigned __int8 *v18; // rdx
  LeafCodeInfo_t v19; // [rsp+10h] [rbp-40h] BYREF

  if ( (buf->m_Flags & 1) != 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
    {
      v19.m_szFile = "entitykeyvalues.cpp";
      v19.m_szFunction = "Serialize";
      v19.m_nLine = 366;
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        LoggingSeverity_t::LS_ERROR,
        &v19,
        "CEntityKeyValues::Serialize: Unable to write into a text-based utlbuffer!\n");
    }
    return 0;
  }
  m_nCount = this->m_keyHashes.m_nCount;
  v4 = 0;
  v5 = 0;
  if ( this->m_keyHashes.m_nCount > 0 )
  {
    m_nAllocated = this->m_keyValues.m_nAllocated;
    v4 = 0;
    v8 = 3LL * (m_nCount - 1) + 3;
    v5 = 0;
    v9 = 0;
    v10 = 8 * v8;
    do
    {
      while ( 1 )
      {
        v11 = m_nAllocated != 0 ? this->m_keyValues.m_pElements : 0LL;
        if ( v11[v9 / 0x18].m_pAttributeName == 0 )
          break;
        v9 += 24LL;
        ++v5;
        if ( v9 == v10 )
          goto LABEL_9;
      }
      v9 += 24LL;
      ++v4;
    }
    while ( v9 != v10 );
  }
LABEL_9:
  if ( CUtlBuffer::CheckPut(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      m_Put = buf->m_Put;
      v16 = &buf->m_Memory.m_pMemory[m_Put - buf->m_nOffset];
      if ( v16 != 0 )
      {
        LODWORD(v19.m_szFile) = 0x1000000;
        *v16 = 0x1000000;
        m_Put = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = 1;
      m_Put = buf->m_Put;
    }
    buf->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(buf);
  }
  if ( (buf->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buf, "%d", v4);
  }
  else if ( CUtlBuffer::CheckPut(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      v14 = buf->m_Put;
      v18 = &buf->m_Memory.m_pMemory[v14 - buf->m_nOffset];
      if ( v18 != 0 )
      {
        LOBYTE(v19.m_szFile) = HIBYTE(v4);
        BYTE1(v19.m_szFile) = BYTE2(v4);
        BYTE2(v19.m_szFile) = BYTE1(v4);
        BYTE3(v19.m_szFile) = v4;
        *v18 = v19.m_szFile;
        v14 = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v4;
      v14 = buf->m_Put;
    }
    buf->m_Put = v14 + 4;
    CUtlBuffer::AddNullTermination(buf);
    if ( (buf->m_Flags & 1) != 0 )
      goto LABEL_16;
    goto LABEL_24;
  }
  if ( (buf->m_Flags & 1) != 0 )
  {
LABEL_16:
    CUtlBuffer::Printf(buf, "%d", v5);
    goto LABEL_17;
  }
LABEL_24:
  if ( CUtlBuffer::CheckPut(buf, 4) )
  {
    if ( (*&buf->m_Byteswap & 1) != 0 )
    {
      v15 = buf->m_Put;
      v17 = &buf->m_Memory.m_pMemory[v15 - buf->m_nOffset];
      if ( v17 != 0 )
      {
        LOBYTE(v19.m_szFile) = HIBYTE(v5);
        BYTE1(v19.m_szFile) = BYTE2(v5);
        BYTE2(v19.m_szFile) = BYTE1(v5);
        BYTE3(v19.m_szFile) = v5;
        *v17 = v19.m_szFile;
        v15 = buf->m_Put;
      }
    }
    else
    {
      *&buf->m_Memory.m_pMemory[buf->m_Put - buf->m_nOffset] = v5;
      v15 = buf->m_Put;
    }
    buf->m_Put = v15 + 4;
    CUtlBuffer::AddNullTermination(buf);
  }
LABEL_17:
  if ( !CEntityKeyValues::SerializeKeys(this, buf, 0) )
    return 0;
  return CEntityKeyValues::SerializeKeys(this, buf, 1);
}


// CEntityKeyValues::Unserialize  (line 402, @0x00000000030a4c80, libserver.so)  // inlines: Alloc, Allocate, Allocate<QAngle>, Allocate<Quaternion>, Allocate<Vector2D>, AssignTo<CEntityVariantAllocator>, Base, CVariantBase, Construct<CEntityKeyValues::KeyValueInfo_t>, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, Destruct<CEntityKeyValues::KeyValueInfo_t>, EnsureCapacity, Free, GetInt, GetType<int>, GetTypeBin<int>, GetTypeText<int>, KeyValueInfo_t, LeafCodeInfo_t, LowLevelByteSwap<int>, PeekGet, RemoveAllKeys, StringToNumber<int>, SwapBufferToTargetEndian<int>, V_memcpy, V_strlen, memcpy, operator=, operator[], ~CVariantBase, ~KeyValueInfo_t
// calls: CEntityKeyValues::RemoveAllKeys, CUtlScratchMemoryPool::FreeAll, CUtlBuffer::CheckArbitraryPeekGet, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CUtlBuffer::CheckGet, V_strtoi64, CUtlScratchMemoryPool::AllocAligned, CEntityKeyValues::UnserializeKeys, strlen, memcpy, CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::EnsureCapacity (13 total)
// callers: CLoopModeGameToolHooks::OnToolSpawnEntity
// strings: "entitykeyvalues.cpp", "Unserialize", "CEntityKeyValues::Unserialize: Invalid version! Expected %d, encountered %d!\n", "CEntityKeyValues::Unserialize: Unable to read from a text-based utlbuffer!\n"
// globals: jpt_30A4F44, CEntityVariantAllocator::sm_pMemoryPool
// write access to const memory has been detected, the output may be wrong!
bool __fastcall CEntityKeyValues::Unserialize(CEntityKeyValues *const this, CUtlBuffer *const buf)
{
  CUtlBuffer *v4; // r14
  int v5; // ebx
  int m_Get; // edx
  int *v7; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int> *v8; // rdi
  int v9; // esi
  unsigned __int64 m_nAllocated; // rdx
  __int64 v11; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v12; // bx
  int v13; // ecx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v14; // r15
  __int64 m_type; // rdx
  void *v16; // r9
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t m_nCount; // ax
  __int64 v18; // rcx
  __int16 v19; // r14
  __int64 v20; // r12
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v21; // rbx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v22; // r12
  int m_szFile; // r12d
  uint16 v24; // ax
  const char *v25; // r10
  _DWORD *v26; // rax
  uint16 v27; // ax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v28; // ax
  uint16 v29; // ax
  const char *v30; // r10
  void *v31; // rax
  uint16 v32; // ax
  _DWORD *v33; // r10
  _DWORD *v34; // rax
  uint16 v35; // ax
  _DWORD *v36; // r10
  CUtlScratchMemoryPool *v37; // rdi
  _DWORD *v38; // rax
  uint16 v39; // ax
  _DWORD *v40; // r10
  uint16 m_flags; // ax
  const char *m_uint64; // r10
  int v43; // edx
  int v44; // edx
  int v45; // ebx
  int v46; // ebx
  void *v47; // rcx
  unsigned __int64 v48; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rsi
  int *v50; // rax
  int *v51; // rax
  CUtlBuffer *v52; // [rsp+0h] [rbp-A0h]
  void *v53; // [rsp+8h] [rbp-98h]
  void *src; // [rsp+10h] [rbp-90h]
  const char *srcb; // [rsp+10h] [rbp-90h]
  void *srca; // [rsp+10h] [rbp-90h]
  void *srcc; // [rsp+10h] [rbp-90h]
  const char *v58; // [rsp+18h] [rbp-88h]
  int v59; // [rsp+18h] [rbp-88h]
  _DWORD *v60; // [rsp+18h] [rbp-88h]
  _DWORD *v61; // [rsp+18h] [rbp-88h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v62; // [rsp+24h] [rbp-7Ch]
  int nAttributeCount; // [rsp+28h] [rbp-78h]
  int nValueCount; // [rsp+2Ch] [rbp-74h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v65; // [rsp+30h] [rbp-70h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v66; // [rsp+38h] [rbp-68h]
  int v67; // [rsp+48h] [rbp-58h] BYREF
  int nIncrement; // [rsp+4Ch] [rbp-54h] BYREF
  LeafCodeInfo_t v69; // [rsp+50h] [rbp-50h] BYREF

  if ( this->m_nQueuedForSpawnCount > 0 )
    return 0;
  v4 = buf;
  if ( (buf->m_Flags & 1) != 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
    {
      v69.m_szFile = "entitykeyvalues.cpp";
      v69.m_szFunction = "Unserialize";
      v69.m_nLine = 412;
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        LoggingSeverity_t::LS_ERROR,
        &v69,
        "CEntityKeyValues::Unserialize: Unable to read from a text-based utlbuffer!\n");
      return 0;
    }
    return 0;
  }
  CEntityKeyValues::RemoveAllKeys(this);
  CUtlScratchMemoryPool::FreeAll(&this->m_memoryPool);
  if ( (v4->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v5 = 0;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(v4, 0, &nIncrement) )
      goto LABEL_6;
    v69.m_szFile = &v4->m_Memory.m_pMemory[v4->m_Get - v4->m_nOffset];
    m_szFile = v69.m_szFile;
    v67 = V_strtoi64(v69.m_szFile, &v69, 10);
    v5 = v67;
    if ( LODWORD(v69.m_szFile) != m_szFile )
      v4->m_Get += LODWORD(v69.m_szFile) - m_szFile;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(v4, 4) )
    {
      v5 = 0;
LABEL_6:
      if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
      {
        v69.m_szFile = "entitykeyvalues.cpp";
        v69.m_szFunction = "Unserialize";
        v69.m_nLine = 423;
        LoggingSystem_Log(
          LOG_ENTITY_SYSTEM,
          LoggingSeverity_t::LS_ERROR,
          &v69,
          "CEntityKeyValues::Unserialize: Invalid version! Expected %d, encountered %d!\n",
          1,
          v5);
      }
      return 0;
    }
    if ( (*&v4->m_Byteswap & 1) != 0 )
    {
      m_Get = v4->m_Get;
      v7 = &v4->m_Memory.m_pMemory[m_Get - v4->m_nOffset];
      if ( v7 == 0 )
        v7 = &v67;
      LODWORD(v69.m_szFile) = v67;
      LOBYTE(v69.m_szFile) = *(v7 + 3);
      BYTE1(v69.m_szFile) = *(v7 + 2);
      BYTE2(v69.m_szFile) = *(v7 + 1);
      BYTE3(v69.m_szFile) = *v7;
      v5 = v69.m_szFile;
    }
    else
    {
      m_Get = v4->m_Get;
      v5 = *&v4->m_Memory.m_pMemory[m_Get - v4->m_nOffset];
    }
    v4->m_Get = m_Get + 4;
  }
  if ( v5 != 1 )
    goto LABEL_6;
  if ( (v4->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    nValueCount = 0;
    if ( CUtlBuffer::CheckArbitraryPeekGet(v4, 0, &nIncrement) )
    {
      v69.m_szFile = &v4->m_Memory.m_pMemory[v4->m_Get - v4->m_nOffset];
      v45 = v69.m_szFile;
      v67 = V_strtoi64(v69.m_szFile, &v69, 10);
      nValueCount = v67;
      if ( LODWORD(v69.m_szFile) != v45 )
        v4->m_Get += LODWORD(v69.m_szFile) - v45;
    }
  }
  else
  {
    nValueCount = 0;
    if ( CUtlBuffer::CheckGet(v4, 4) )
    {
      if ( (*&v4->m_Byteswap & 1) != 0 )
      {
        v43 = v4->m_Get;
        v50 = &v4->m_Memory.m_pMemory[v43 - v4->m_nOffset];
        if ( v50 == 0 )
          v50 = &v67;
        LODWORD(v69.m_szFile) = v67;
        LOBYTE(v69.m_szFile) = *(v50 + 3);
        BYTE1(v69.m_szFile) = *(v50 + 2);
        BYTE2(v69.m_szFile) = *(v50 + 1);
        BYTE3(v69.m_szFile) = *v50;
        nValueCount = v69.m_szFile;
      }
      else
      {
        v43 = v4->m_Get;
        nValueCount = *&v4->m_Memory.m_pMemory[v43 - v4->m_nOffset];
      }
      v4->m_Get = v43 + 4;
    }
  }
  if ( (v4->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    nAttributeCount = 0;
    if ( CUtlBuffer::CheckArbitraryPeekGet(v4, 0, &nIncrement) )
    {
      v69.m_szFile = &v4->m_Memory.m_pMemory[v4->m_Get - v4->m_nOffset];
      v46 = v69.m_szFile;
      v67 = V_strtoi64(v69.m_szFile, &v69, 10);
      nAttributeCount = v67;
      if ( LODWORD(v69.m_szFile) != v46 )
        v4->m_Get += LODWORD(v69.m_szFile) - v46;
    }
  }
  else
  {
    nAttributeCount = 0;
    if ( CUtlBuffer::CheckGet(v4, 4) )
    {
      if ( (*&v4->m_Byteswap & 1) != 0 )
      {
        v44 = v4->m_Get;
        v51 = &v4->m_Memory.m_pMemory[v44 - v4->m_nOffset];
        if ( v51 == 0 )
          v51 = &v67;
        LODWORD(v69.m_szFile) = v67;
        LOBYTE(v69.m_szFile) = *(v51 + 3);
        BYTE1(v69.m_szFile) = *(v51 + 2);
        BYTE2(v69.m_szFile) = *(v51 + 1);
        BYTE3(v69.m_szFile) = *v51;
        nAttributeCount = v69.m_szFile;
      }
      else
      {
        v44 = v4->m_Get;
        nAttributeCount = *&v4->m_Memory.m_pMemory[v44 - v4->m_nOffset];
      }
      v4->m_Get = v44 + 4;
    }
  }
  m_nAllocated = this->m_keyHashes.m_nAllocated;
  LODWORD(v11) = nAttributeCount + nValueCount + this->m_keyHashes.m_nCount;
  if ( v11 > m_nAllocated )
  {
    if ( v11 > 9 && v11 > 0x7FFF )
    {
LABEL_100:
      CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>::EnsureCapacity(v8, v9, m_nAllocated);
      JUMPOUT(0x30A55BB);
    }
    v12 = nAttributeCount + nValueCount + this->m_keyHashes.m_nCount;
    if ( m_nAllocated > 9 )
    {
      this->m_keyHashes.m_pElements = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_keyHashes.m_pElements, 4LL * v11);
    }
    else
    {
      v11 = v11;
      if ( v11 > 9 )
      {
        v47 = (**g_pMemAlloc)(g_pMemAlloc, 4 * v11);
        v48 = this->m_keyHashes.m_nAllocated;
        if ( v48 != 0 )
        {
          m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
          if ( v48 > 9 )
            m_pElements = this->m_keyHashes.m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        this->m_keyHashes.m_pElements = memcpy(v47, m_pElements, 4LL * this->m_keyHashes.m_nCount);
      }
    }
    this->m_keyHashes.m_nAllocated = v12;
  }
  v13 = nAttributeCount + nValueCount + this->m_keyValues.m_nCount;
  v62 = nAttributeCount + nValueCount + this->m_keyValues.m_nCount;
  if ( v13 == this->m_keyValues.m_nAllocated )
    goto LABEL_52;
  if ( v13 > 0x7FFF )
  {
    CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>::EnsureCapacity(v8, v9, m_nAllocated);
    goto LABEL_100;
  }
  v14 = nAttributeCount + nValueCount + this->m_keyValues.m_nCount;
  v66 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v13);
  if ( this->m_keyValues.m_nAllocated != 0 )
    v65 = this->m_keyValues.m_pElements;
  else
    v65 = 0;
  m_nCount = this->m_keyValues.m_nCount;
  if ( v62 <= m_nCount )
    m_nCount = v62;
  v18 = 0;
  if ( m_nCount > 0 )
  {
    v52 = v4;
    v19 = 0;
    do
    {
      v20 = v19;
      v21 = &v66[v20];
      if ( &v66[v20] != 0 )
      {
        v22 = &v65[v20];
        v21->m_value.m_uint64 = 0;
        v21->m_value.m_flags = 0;
      }
      else
      {
        v22 = &v65[v20];
      }
      v21->m_value.m_uint64 = 0;
      v21->m_value.m_type = 0;
      m_type = v22->m_value.m_type;
      switch ( m_type )
      {
        case 3:
          m_flags = v21->m_value.m_flags;
          m_uint64 = v22->m_value.m_uint64;
          if ( (m_flags & 1) != 0 )
            v21->m_value.m_flags = m_flags & 0xFFFE;
          v58 = m_uint64;
          src = v16;
          v21->m_value.m_type = 3;
          goto LABEL_44;
        case 4:
          v39 = v21->m_value.m_flags;
          v40 = v22->m_value.m_uint64;
          if ( (v39 & 1) != 0 )
            v21->m_value.m_flags = v39 & 0xFFFE;
          srca = v16;
          v60 = v40;
          v21->m_value.m_type = 4;
          goto LABEL_61;
        case 25:
          v35 = v21->m_value.m_flags;
          v36 = v22->m_value.m_uint64;
          if ( (v35 & 1) != 0 )
            v21->m_value.m_flags = v35 & 0xFFFE;
          v37 = CEntityVariantAllocator::sm_pMemoryPool;
          v21->m_value.m_type = 25;
          srcc = v16;
          v61 = v36;
          v38 = CUtlScratchMemoryPool::AllocAligned(v37, 8, 8);
          v21->m_value.m_uint64 = v38;
          v16 = srcc;
          *v38 = *v61;
          v38[1] = v61[1];
          v21->m_value.m_flags |= 1u;
          break;
        case 27:
          v32 = v21->m_value.m_flags;
          v33 = v22->m_value.m_uint64;
          if ( (v32 & 1) != 0 )
            v21->m_value.m_flags = v32 & 0xFFFE;
          srca = v16;
          v60 = v33;
          v21->m_value.m_type = 27;
LABEL_61:
          v34 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, 16, 16);
          v21->m_value.m_uint64 = v34;
          *v34 = *v60;
          v34[1] = v60[1];
          v34[2] = v60[2];
          v34[3] = v60[3];
          v21->m_value.m_flags |= 1u;
          v16 = srca;
          break;
        case 30:
          v29 = v21->m_value.m_flags;
          v30 = v22->m_value.m_uint64;
          if ( (v29 & 1) != 0 )
            v21->m_value.m_flags = v29 & 0xFFFE;
          v21->m_value.m_type = 30;
          if ( v30 != 0 )
          {
            v53 = v16;
            srcb = v30;
            v59 = strlen(v30) + 1;
            v31 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, v59, 8 * (v59 >= 16) + 8);
            v21->m_value.m_uint64 = v31;
            memcpy(v31, srcb, v59);
            v16 = v53;
            v21->m_value.m_flags |= 1u;
          }
          break;
        case 39:
          v24 = v21->m_value.m_flags;
          v25 = v22->m_value.m_uint64;
          if ( (v24 & 1) != 0 )
            v21->m_value.m_flags = v24 & 0xFFFE;
          src = v16;
          v58 = v25;
          v21->m_value.m_type = 39;
LABEL_44:
          v26 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, 12, 8);
          v21->m_value.m_uint64 = v26;
          *v26 = *v58;
          v26[1] = *(v58 + 1);
          v26[2] = *(v58 + 2);
          v21->m_value.m_flags |= 1u;
          v16 = src;
          break;
        default:
          v21->m_value.m_type = m_type;
          v21->m_value.m_uint64 = v22->m_value.m_uint64;
          break;
      }
      v21->m_pAttributeName = v22->m_pAttributeName;
      v27 = v22->m_value.m_flags;
      if ( (v27 & 1) != 0 )
        v22->m_value.m_flags = v27 & 0xFFFE;
      v22->m_value.m_uint64 = 0;
      ++v19;
      v22->m_value.m_type = 0;
      v28 = this->m_keyValues.m_nCount;
      if ( v14 <= v28 )
        v28 = v14;
    }
    while ( v19 < v28 );
    v4 = v52;
  }
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_keyValues.m_pElements, m_type, v18);
  this->m_keyValues.m_pElements = v66;
  this->m_keyValues.m_nAllocated = v62;
LABEL_52:
  if ( !CEntityKeyValues::UnserializeKeys(this, v4, nValueCount, 0) )
    return 0;
  return CEntityKeyValues::UnserializeKeys(this, v4, nAttributeCount, 1);
}


// CEntityKeyValues::AddConnectionDesc  (line 450, @0x00000000030a92c0, libserver.so)  // inlines: AddConnectionDesc, GetPtr, GetRawPtr, ResolveOffset
// calls: CEntityKeyValues::AddConnectionDesc
// callers: ParseConnections
void __fastcall CEntityKeyValues::AddConnectionDesc(
        CEntityKeyValues *const this,
        const EntityIOConnectionData_t *const connectionData)
{
  __int64 m_nOffset; // rax
  const char *v3; // r9
  const char *v4; // rax
  __int64 v5; // rax
  const char *v6; // r8
  const char *v7; // rax
  __int64 v8; // rax
  const char *v9; // rcx
  const char *v10; // rax
  __int64 v11; // rax
  const char *v12; // r10
  const char *v13; // rax

  m_nOffset = connectionData->m_overrideParam.m_nOffset;
  v3 = "";
  if ( m_nOffset != 0 )
  {
    v4 = &connectionData->m_overrideParam + m_nOffset;
    if ( v4 != 0 )
      v3 = v4;
  }
  v5 = connectionData->m_inputName.m_nOffset;
  v6 = "";
  if ( v5 != 0 )
  {
    v7 = &connectionData->m_inputName + v5;
    if ( v7 != 0 )
      v6 = v7;
  }
  v8 = connectionData->m_targetName.m_nOffset;
  v9 = "";
  if ( v8 != 0 )
  {
    v10 = &connectionData->m_targetName + v8;
    if ( v10 != 0 )
      v9 = v10;
  }
  v11 = connectionData->m_outputName.m_nOffset;
  v12 = "";
  if ( v11 != 0 )
  {
    v13 = connectionData + v11;
    if ( v13 != 0 )
      v12 = v13;
  }
  if ( this->m_nQueuedForSpawnCount <= 0 )
    CEntityKeyValues::AddConnectionDesc(
      this,
      v12,
      connectionData->m_targetType,
      v9,
      v6,
      v3,
      connectionData->m_flDelay,
      connectionData->m_nTimesToFire);
}


// CEntityKeyValues::AddConnectionDesc  (line 456, @0x00000000030a9070, libserver.so)  // inlines: AddToTail, Alloc, Allocate, CopyConstruct<EntityIOConnectionDescFat_t>, Element, GrowMemory, V_memcpy, V_strlen, memcpy, operator[]
// calls: strlen, CUtlScratchMemoryPool::AllocAligned, memcpy, CUtlMemory<EntityIOConnectionDescFat_t, int>::Grow
// callers: CEntityKeyValues::AddConnectionDesc, CEntityKeyValues::CopyFrom
// globals: CEntityVariantAllocator::sm_pMemoryPool
void __fastcall CEntityKeyValues::AddConnectionDesc(
        CEntityKeyValues *const this,
        const char *pOutputName,
        EntityIOTargetType_t nTargetType,
        const char *pTargetName,
        const char *pInputName,
        const char *pOverrideParam,
        float flDelay,
        int nTimesToFire)
{
  const char *v8; // r15
  int v13; // esi
  int v14; // eax
  int v15; // eax
  void *v16; // r15
  int v17; // eax
  int v18; // eax
  void *v19; // r13
  int v20; // eax
  int v21; // eax
  void *v22; // r12
  int v23; // eax
  __int64 m_Size; // rbx
  int v25; // eax
  EntityIOConnectionDescFat_t *v26; // rax
  void *desc; // [rsp+8h] [rbp-38h]

  v8 = pOutputName;
  if ( pOutputName != 0 )
  {
    v13 = strlen(pOutputName) + 1;
  }
  else
  {
    v8 = "";
    v13 = 1;
  }
  if ( pTargetName == 0 )
    pTargetName = "";
  if ( pInputName == 0 )
    pInputName = "";
  if ( pOverrideParam == 0 )
    pOverrideParam = "";
  desc = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, v13, 8 * (v13 >= 16) + 8);
  v14 = strlen(v8) + 1;
  if ( v14 < 0 )
    __debugbreak();
  memcpy(desc, v8, v14);
  v15 = strlen(pTargetName);
  v16 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, v15 + 1, 8 * (v15 + 1 >= 16) + 8);
  v17 = strlen(pTargetName) + 1;
  if ( v17 < 0 )
    __debugbreak();
  memcpy(v16, pTargetName, v17);
  v18 = strlen(pInputName);
  v19 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, v18 + 1, 8 * (v18 + 1 >= 16) + 8);
  v20 = strlen(pInputName) + 1;
  if ( v20 < 0 )
    __debugbreak();
  memcpy(v19, pInputName, v20);
  v21 = strlen(pOverrideParam);
  v22 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, v21 + 1, 8 * (v21 + 1 >= 16) + 8);
  v23 = strlen(pOverrideParam) + 1;
  if ( v23 < 0 )
    __debugbreak();
  memcpy(v22, pOverrideParam, v23);
  m_Size = this->m_connectionDescs.m_Size;
  v25 = this->m_connectionDescs.m_Size;
  if ( m_Size == this->m_connectionDescs.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<EntityIOConnectionDescFat_t,int>::Grow(&this->m_connectionDescs.m_Memory, 1);
    v25 = this->m_connectionDescs.m_Size;
  }
  this->m_connectionDescs.m_Size = v25 + 1;
  v26 = &this->m_connectionDescs.m_Memory.m_pMemory[m_Size];
  if ( v26 != 0 )
  {
    v26->m_pTargetName = v16;
    v26->m_pInputName = v19;
    v26->m_pOverrideParam = v22;
    v26->m_pOutputName = desc;
    v26->m_flDelay = flDelay;
    v26->m_nTimesToFire = nTimesToFire;
    v26->m_targetType = nTargetType;
  }
}


// CEntityKeyValues::AddConnectionDesc  (line 456, @0x00000000030a92a0, libserver.so)
// calls: CEntityKeyValues::AddConnectionDesc
void __fastcall CEntityKeyValues::AddConnectionDesc(
        CEntityKeyValues *const this,
        const char *pOutputName,
        EntityIOTargetType_t nTargetType,
        const char *pTargetName,
        const char *pInputName,
        const char *pOverrideParam,
        float flDelay,
        int nTimesToFire)
{
  if ( this->m_nQueuedForSpawnCount <= 0 )
    CEntityKeyValues::AddConnectionDesc(
      this,
      pOutputName,
      nTargetType,
      pTargetName,
      pInputName,
      pOverrideParam,
      flDelay,
      nTimesToFire);
}


// CEntityKeyValues::SetTargetNameForConnection  (line 503, @0x00000000030a30c0, libserver.so)  // inlines: Alloc, Allocate, V_memcpy, V_strlen, memcpy, operator[]
// calls: strlen, CUtlScratchMemoryPool::AllocAligned, memcpy
// callers: CGameEntitySystem::UniqueifyEntityNames, CCommentarySystem::ReplaceQuotesInEntityKeyValues
// globals: CEntityVariantAllocator::sm_pMemoryPool
void __fastcall CEntityKeyValues::SetTargetNameForConnection(
        CEntityKeyValues *const this,
        int nDesc,
        const char *pTargetName)
{
  __int64 v5; // r13
  EntityIOConnectionDescFat_t *v6; // r14
  int v7; // eax
  int v8; // eax
  bool v9; // sf
  int v10; // eax
  char *m_pTargetName; // rdi
  size_t v12; // rdx
  char *v13; // rax

  if ( this->m_nQueuedForSpawnCount <= 0 )
  {
    v5 = nDesc;
    v6 = &this->m_connectionDescs.m_Memory.m_pMemory[v5];
    if ( pTargetName != 0 )
    {
      v7 = strlen(pTargetName);
      v6->m_pTargetName = CUtlScratchMemoryPool::AllocAligned(
                            CEntityVariantAllocator::sm_pMemoryPool,
                            v7 + 1,
                            8 * (v7 + 1 >= 16) + 8);
      v8 = strlen(pTargetName);
      v9 = v8 + 1 < 0;
      v10 = v8 + 1;
      m_pTargetName = this->m_connectionDescs.m_Memory.m_pMemory[v5].m_pTargetName;
      if ( v9 )
        __debugbreak();
      v12 = v10;
    }
    else
    {
      v13 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, 1, 8);
      v12 = 1;
      v6->m_pTargetName = v13;
      m_pTargetName = this->m_connectionDescs.m_Memory.m_pMemory[v5].m_pTargetName;
    }
    memcpy(m_pTargetName, pTargetName, v12);
  }
}


// CEntityKeyValues::SetValueOverrideForConnection  (line 515, @0x00000000030a3190, libserver.so)  // inlines: Alloc, Allocate, V_memcpy, V_strlen, memcpy, operator[]
// calls: strlen, CUtlScratchMemoryPool::AllocAligned, memcpy
// callers: CGameEntitySystem::UniqueifyEntityNames
// globals: CEntityVariantAllocator::sm_pMemoryPool
void __fastcall CEntityKeyValues::SetValueOverrideForConnection(
        CEntityKeyValues *const this,
        int nDesc,
        const char *pValueOverride)
{
  __int64 v5; // r13
  EntityIOConnectionDescFat_t *v6; // r14
  int v7; // eax
  int v8; // eax
  bool v9; // sf
  int v10; // eax
  char *m_pOverrideParam; // rdi
  size_t v12; // rdx
  char *v13; // rax

  if ( this->m_nQueuedForSpawnCount <= 0 )
  {
    v5 = nDesc;
    v6 = &this->m_connectionDescs.m_Memory.m_pMemory[v5];
    if ( pValueOverride != 0 )
    {
      v7 = strlen(pValueOverride);
      v6->m_pOverrideParam = CUtlScratchMemoryPool::AllocAligned(
                               CEntityVariantAllocator::sm_pMemoryPool,
                               v7 + 1,
                               8 * (v7 + 1 >= 16) + 8);
      v8 = strlen(pValueOverride);
      v9 = v8 + 1 < 0;
      v10 = v8 + 1;
      m_pOverrideParam = this->m_connectionDescs.m_Memory.m_pMemory[v5].m_pOverrideParam;
      if ( v9 )
        __debugbreak();
      v12 = v10;
    }
    else
    {
      v13 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, 1, 8);
      v12 = 1;
      v6->m_pOverrideParam = v13;
      m_pOverrideParam = this->m_connectionDescs.m_Memory.m_pMemory[v5].m_pOverrideParam;
    }
    memcpy(m_pOverrideParam, pValueOverride, v12);
  }
}


// CEntityKeyValues::RemoveConnectionDesc  (line 527, @0x00000000030a3260, libserver.so)  // inlines: Element, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove
void __fastcall CEntityKeyValues::RemoveConnectionDesc(CEntityKeyValues *const this, int nDesc)
{
  int m_Size; // eax
  int v4; // edx
  EntityIOConnectionDescFat_t *v5; // rsi

  if ( this->m_nQueuedForSpawnCount <= 0 )
  {
    m_Size = this->m_connectionDescs.m_Size;
    v4 = m_Size - nDesc - 1;
    if ( v4 > 0 )
    {
      v5 = &this->m_connectionDescs.m_Memory.m_pMemory[nDesc + 1];
      memmove(&v5[-1], v5, 48LL * v4);
      m_Size = this->m_connectionDescs.m_Size;
    }
    this->m_connectionDescs.m_Size = m_Size - 1;
  }
}


// CEntityKeyValues::GetNumConnectionDescs  (line 538, @0x00000000030a32d0, libserver.so)
// callers: CGameEntitySystem::UniqueifyEntityNames, CCommentarySystem::ReplaceQuotesInEntityKeyValues, CEntityClass::Unserialize
int __fastcall CEntityKeyValues::GetNumConnectionDescs(const CEntityKeyValues *const this)
{
  return this->m_connectionDescs.m_Size;
}


// CEntityKeyValues::GetOutputName  (line 543, @0x00000000030a32e0, libserver.so)  // inlines: operator[]
// callers: CEntityClass::Unserialize
const char *__fastcall CEntityKeyValues::GetOutputName(const CEntityKeyValues *const this, int nDesc)
{
  return this->m_connectionDescs.m_Memory.m_pMemory[nDesc].m_pOutputName;
}


// CEntityKeyValues::GetConnectionDescFat  (line 548, @0x00000000030a3300, libserver.so)  // inlines: operator[]
const EntityIOConnectionDescFat_t *__fastcall CEntityKeyValues::GetConnectionDescFat(
        const CEntityKeyValues *const this,
        int nDesc)
{
  return &this->m_connectionDescs.m_Memory.m_pMemory[nDesc];
}


// CEntityKeyValues::CopyFrom  (line 554, @0x00000000030a9360, libserver.so)  // inlines: AddConnectionDesc, AddKeyValue<CVariantBase<CEntityVariantAllocator> >, AddRef, AddToTail, Alloc, Allocate, AttributeName, Base, Element, EnsureCapacity, FindKeyHash, Id, IsAttribute, IsValid, MakeStringToken, Next, RemoveAll, RemoveAllKeys, SetDynamicAttribute<CVariantBase<CEntityVariantAllocator> >, SetValue<CVariantBase<CEntityVariantAllocator> >, V_memcpy, V_strlen, Value, end, memcpy, operator=, operator[]
// calls: CUtlScratchMemoryPool::AllocAligned, CVariantBase<CEntityVariantAllocator>::AssignTo<CEntityVariantAllocator>, CEntityKeyValues::AddConnectionDesc, Warning, CEntityKeyValues::AddKeyValue<CVariantBase<CEntityVariantAllocator> >, strlen, memcpy, CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, MurmurHash2LowerCase, CEntityKeyValues::RemoveAllKeys, RegisterStringToken
// callers: CEntitySpawnerBase<CDevtestHierarchyChild>::StartNewEntity, CEntitySpawner<CDevtestHierarchyChild>::StartNewEntity, CEntitySpawnerBase<CBaseEntity>::StartNewEntity, CEntitySpawnerBase<CTriggerMultiple>::StartNewEntity, CEntitySpawner<CTriggerMultiple>::StartNewEntity, CEntitySpawnerAsyncBase<CBaseEntity>::StartNewEntity, CEntitySpawner<CBaseEntity>::StartNewEntity, Script_CreateTriggerRadiusApproximate, Script_SpawnEntityListFromTableSynchronous, Script_SpawnEntityListFromTableAsynchronous, Script_SpawnEntityGroupFromTable, CGameEntitySystem::UniqueifyEntityNames (127 total)
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "Attempted to set non-attribute value %s as if it was an attribute!\n"
// globals: CEntityVariantAllocator::sm_pMemoryPool, CEntityKeyValues::sm_EmptyVariant
void __fastcall CEntityKeyValues::CopyFrom(
        CEntityKeyValues *const this,
        const CEntityKeyValues *pOther,
        bool bDeleteCurrent)
{
  CEntityKeyValues::EntityComplexKeyListElem_t *i; // rbx
  CEntityKeyValues::EntityComplexKeyListElem_t *v6; // rax
  int m_nCount; // eax
  unsigned __int64 v8; // r15
  int v9; // ebx
  const CVariantBase<CEntityVariantAllocator> *v10; // rdx
  EntityKeyId_t v11; // esi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // r9
  __int64 v13; // rcx
  const CVariantBase<CEntityVariantAllocator> *v14; // r14
  const char *v15; // r10
  uint32 v16; // ecx
  int v17; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v18; // si
  __int64 v19; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v20; // rax
  __int64 v21; // rsi
  int m_Size; // ebx
  __int64 v23; // rax
  uint32 m_nGrowSize; // edx
  EntityIOConnectionDescFat_t *v25; // rsi
  EntityIOConnectionDescFat_t *v26; // rbx
  EntityIOConnectionDescFat_t *v27; // r13
  float m_flDelay; // xmm0_4
  const char *m_pOverrideParam; // r9
  const char *m_pInputName; // r8
  const char *m_pTargetName; // rcx
  EntityIOTargetType_t m_targetType; // edx
  const char *m_pOutputName; // rsi
  unsigned __int64 v34; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v35; // rcx
  int v36; // r9d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // di
  __int64 v38; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rsi
  int v43; // eax
  int v44; // r11d
  void *v45; // rax
  const char *v46; // r10
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t v47; // ecx
  size_t v48; // rdx
  __int16 v49; // dx
  unsigned __int64 v50; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v51; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v52; // rsi
  CVariantBase<CEntityVariantAllocator> *p_m_value; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v54; // rax
  uint32 v55; // eax
  bool v56; // zf
  EntityIOConnectionDescFat_t *m_pMemory; // r14
  EntityIOConnectionDescFat_t *v58; // rax
  const char *v59; // rsi
  void *v60; // rax
  int nTimesToFire; // [rsp+0h] [rbp-60h]
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t v62; // [rsp+Ch] [rbp-54h]
  const char *src; // [rsp+10h] [rbp-50h]
  uint32 srca; // [rsp+10h] [rbp-50h]
  uint32 v65; // [rsp+18h] [rbp-48h]
  int v66; // [rsp+18h] [rbp-48h]
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t v67; // [rsp+18h] [rbp-48h]
  __int64 v68; // [rsp+18h] [rbp-48h]
  __int64 v69; // [rsp+18h] [rbp-48h]
  int v70; // [rsp+18h] [rbp-48h]
  const char *v71; // [rsp+18h] [rbp-48h]
  const char *dest; // [rsp+20h] [rbp-40h]
  void *desta; // [rsp+20h] [rbp-40h]
  const char *destb; // [rsp+20h] [rbp-40h]
  uint32 destc; // [rsp+20h] [rbp-40h]

  if ( bDeleteCurrent && this->m_nQueuedForSpawnCount <= 0 )
    CEntityKeyValues::RemoveAllKeys(this);
  for ( i = pOther->m_pComplexKeys; i != 0; i = i->m_pNext )
  {
    v6 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, 16, 16);
    v6->m_pKey = i->m_pKey;
    v6->m_pNext = this->m_pComplexKeys;
    this->m_pComplexKeys = v6;
    ++v6->m_pKey->m_nRef;
  }
  m_nCount = pOther->m_keyHashes.m_nCount;
  v8 = 0;
  v9 = 0;
  if ( m_nCount > 0 )
  {
    while ( 1 )
    {
      v10 = &CEntityKeyValues::sm_EmptyVariant;
      v11.m_nHashCode = 0;
      if ( v9 >= m_nCount )
      {
        if ( this->m_nQueuedForSpawnCount > 0 )
          goto LABEL_9;
LABEL_44:
        v36 = this->m_keyHashes.m_nCount;
        if ( v36 <= 0 )
        {
LABEL_56:
          CEntityKeyValues::AddKeyValue<CVariantBase<CEntityVariantAllocator>>(this, v11, v10, 0);
          m_nCount = pOther->m_keyHashes.m_nCount;
          goto LABEL_9;
        }
        m_nAllocated = this->m_keyHashes.m_nAllocated;
        v38 = 0;
        while ( 1 )
        {
          if ( m_nAllocated != 0 )
          {
            m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
            if ( m_nAllocated > 9 )
              m_pElements = this->m_keyHashes.m_pElements;
            if ( v11.m_nHashCode == m_pElements[v38] )
            {
LABEL_52:
              if ( this->m_keyValues.m_nAllocated != 0 )
              {
                v40 = this->m_keyValues.m_pElements;
                v41 = v38;
                v42 = &v40[v41];
                if ( v40[v41].m_pAttributeName != 0 )
                {
LABEL_54:
                  Warning(
                    "Attempted to set attribute %s as if it was a non-attribute key!\n",
                    v40[v41].m_pAttributeName);
                  m_nCount = pOther->m_keyHashes.m_nCount;
                  goto LABEL_9;
                }
              }
              else
              {
                v40 = 0;
                v56 = *(&stru_10.m_Lock.gap0 + 3 * v38) == 0;
                v42 = 24 * v38;
                v41 = v38;
                if ( !v56 )
                  goto LABEL_54;
              }
              CVariantBase<CEntityVariantAllocator>::AssignTo<CEntityVariantAllocator>(v10, v42);
              m_nCount = pOther->m_keyHashes.m_nCount;
              goto LABEL_9;
            }
          }
          else if ( v11.m_nHashCode == *(4 * v38) )
          {
            goto LABEL_52;
          }
          if ( v36 <= ++v38 )
            goto LABEL_56;
        }
      }
      if ( pOther->m_keyValues.m_nAllocated != 0 )
      {
        v12 = pOther->m_keyValues.m_pElements;
        v13 = 6 * v8;
        if ( v12[v8 / 4].m_pAttributeName == 0 )
          goto LABEL_40;
      }
      else
      {
        v12 = 0;
        v13 = 6 * v8;
        if ( *(&stru_10.m_Lock.gap0 + 6 * v8) == 0 )
        {
LABEL_40:
          v10 = (&v12->m_value + v13);
          v34 = pOther->m_keyHashes.m_nAllocated;
          if ( v34 != 0 )
          {
            if ( v34 <= 9 )
              v35 = (&pOther->m_keyHashes.m_nAllocAllocated + 1);
            else
              v35 = pOther->m_keyHashes.m_pElements;
          }
          else
          {
            v35 = 0;
          }
          v11.m_nHashCode = v35[v8 / 4];
          if ( this->m_nQueuedForSpawnCount > 0 )
            goto LABEL_9;
          goto LABEL_44;
        }
      }
      v14 = (&v12->m_value + v13);
      v15 = *(&v12->m_pAttributeName + v13);
      if ( this->m_nQueuedForSpawnCount > 0 )
        goto LABEL_9;
      v16 = 0;
      if ( v15 != 0 && *v15 != 0 )
      {
        destb = v15;
        v55 = MurmurHash2LowerCase(v15, 0x31415926u);
        v15 = destb;
        if ( g_bUpdateStringTokenDatabase )
        {
          v59 = destb;
          v71 = destb;
          destc = v55;
          RegisterStringToken(v55, v59, 0, 1);
          v15 = v71;
          v16 = destc;
        }
        else
        {
          v16 = v55;
        }
      }
      v17 = this->m_keyHashes.m_nCount;
      if ( v17 <= 0 )
      {
LABEL_57:
        if ( v15 != 0 )
        {
          v65 = v16;
          dest = v15;
          v43 = strlen(v15);
          v44 = v43 + 1;
          src = dest;
          v62 = v65;
          if ( v43 + 1 <= 15 )
          {
            v70 = v43 + 1;
            desta = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, v44, 8);
            v46 = src;
            v47 = v62;
            if ( v70 < 0 )
              __debugbreak();
            v48 = v70;
          }
          else
          {
            v66 = v43 + 1;
            v45 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, v44, 16);
            v46 = dest;
            desta = v45;
            v47 = v62;
            v48 = v66;
          }
        }
        else
        {
          srca = v16;
          v60 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, 1, 8);
          v48 = 1;
          v46 = 0;
          desta = v60;
          v47 = srca;
        }
        v67 = v47;
        memcpy(desta, v46, v48);
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&this->m_keyHashes);
        v49 = this->m_keyHashes.m_nCount - 1;
        v50 = this->m_keyHashes.m_nAllocated;
        if ( v50 != 0 )
        {
          if ( v50 <= 9 )
            v51 = (&this->m_keyHashes.m_nAllocAllocated + 1);
          else
            v51 = this->m_keyHashes.m_pElements;
        }
        else
        {
          v51 = 0;
        }
        v51[v49] = v67;
        v68 = v49;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
        if ( this->m_keyValues.m_nAllocated != 0 )
          v52 = this->m_keyValues.m_pElements;
        else
          v52 = 0;
        p_m_value = &v52[v68].m_value;
        v69 = v68;
        CVariantBase<CEntityVariantAllocator>::AssignTo<CEntityVariantAllocator>(v14, p_m_value);
        if ( this->m_keyValues.m_nAllocated != 0 )
          v54 = this->m_keyValues.m_pElements;
        else
          v54 = 0;
        v54[v69].m_pAttributeName = desta;
        m_nCount = pOther->m_keyHashes.m_nCount;
        goto LABEL_9;
      }
      v18 = this->m_keyHashes.m_nAllocated;
      v19 = 0;
      while ( v18 == 0 )
      {
        if ( v16 == *(4 * v19) )
          goto LABEL_24;
LABEL_21:
        if ( v17 <= ++v19 )
          goto LABEL_57;
      }
      v20 = (&this->m_keyHashes.m_nAllocAllocated + 1);
      if ( v18 > 9 )
        v20 = this->m_keyHashes.m_pElements;
      if ( v16 != v20[v19] )
        goto LABEL_21;
LABEL_24:
      if ( this->m_keyValues.m_nAllocated != 0 )
      {
        v21 = &this->m_keyValues.m_pElements[v19];
        if ( *(v21 + 16) != 0 )
          goto LABEL_26;
LABEL_81:
        Warning("Attempted to set non-attribute value %s as if it was an attribute!\n", v15);
        m_nCount = pOther->m_keyHashes.m_nCount;
LABEL_9:
        ++v9;
        v8 += 4LL;
        if ( v9 >= m_nCount )
          break;
      }
      else
      {
        v21 = 24 * v19;
        if ( *(&stru_10.m_Lock.gap0 + 3 * v19) == 0 )
          goto LABEL_81;
LABEL_26:
        ++v9;
        v8 += 4LL;
        CVariantBase<CEntityVariantAllocator>::AssignTo<CEntityVariantAllocator>(v14, v21);
        m_nCount = pOther->m_keyHashes.m_nCount;
        if ( v9 >= m_nCount )
          break;
      }
    }
  }
  this->m_connectionDescs.m_Size = 0;
  m_Size = pOther->m_connectionDescs.m_Size;
  v23 = m_Size;
  if ( m_Size > this->m_connectionDescs.m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = this->m_connectionDescs.m_Memory.m_nGrowSize;
    v23 = m_Size;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_connectionDescs.m_Memory.m_pMemory;
        v58 = (**g_pMemAlloc)(g_pMemAlloc, 48LL * m_Size);
        this->m_connectionDescs.m_Memory.m_pMemory = v58;
        if ( m_pMemory != 0 )
          memcpy(v58, m_pMemory, 48LL * this->m_connectionDescs.m_Memory.m_nAllocationCount);
        this->m_connectionDescs.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v25 = this->m_connectionDescs.m_Memory.m_pMemory;
        if ( v25 != 0 )
          this->m_connectionDescs.m_Memory.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v25, 48LL * m_Size);
        else
          this->m_connectionDescs.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 48LL * m_Size);
      }
      this->m_connectionDescs.m_Memory.m_nAllocationCount = m_Size;
      v23 = pOther->m_connectionDescs.m_Size;
    }
  }
  v26 = pOther->m_connectionDescs.m_Memory.m_pMemory;
  v27 = &v26[v23];
  while ( v26 != v27 )
  {
    while ( 1 )
    {
      m_flDelay = v26->m_flDelay;
      m_pOverrideParam = v26->m_pOverrideParam;
      m_pInputName = v26->m_pInputName;
      m_pTargetName = v26->m_pTargetName;
      m_pOutputName = v26->m_pOutputName;
      if ( this->m_nQueuedForSpawnCount <= 0 )
        break;
      if ( ++v26 == v27 )
        return;
    }
    m_targetType = v26->m_targetType;
    nTimesToFire = v26->m_nTimesToFire;
    ++v26;
    CEntityKeyValues::AddConnectionDesc(
      this,
      m_pOutputName,
      m_targetType,
      m_pTargetName,
      m_pInputName,
      m_pOverrideParam,
      m_flDelay,
      nTimesToFire);
  }
}


// CEntityKeyValues::DumpToLog  (line 597, @0x00000000030a3320, libserver.so)  // inlines: AssignTo, AttributeName, Base, Element, Id, IsAttribute, IsValid, V_strncpy<unsigned int>, Value, VariantFieldTypeName, operator[]
// calls: V_snprintf, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, Warning, _V_strncpy
// strings: "%g %g %g %g", "<none>", "%s DynamicAtr:%s = '%s'\n", "js_raw_args", "No conversion from %s to string at the moment!\n", "(null)" (29 total)
// globals: jpt_30A337C, CEntityKeyValues::sm_EmptyVariant, CEntityKeyValues::DumpToLog(int,char const*)::pValueBuf, jpt_30A3718
void __fastcall CEntityKeyValues::DumpToLog(
        const CEntityKeyValues *const this,
        LoggingChannelID_t nChannel,
        const char *pPrefix)
{
  __int64 v3; // r15
  int m_nCount; // eax
  float **v6; // rdx
  __int16 v7; // ax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t v8; // r14d
  const char *v9; // rax
  const char *v10; // r12
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v11; // rax
  const char *m_pAttributeName; // r8
  const char *v13; // rsi
  double v14; // xmm0_8
  float *v15; // rsi
  const char *v16; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *m_pElements; // rax
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v19; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // rax

  v3 = 0;
  m_nCount = this->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    do
    {
      v6 = &CEntityKeyValues::sm_EmptyVariant;
      if ( m_nCount > v3 )
      {
        if ( this->m_keyValues.m_nAllocated != 0 )
          m_pElements = this->m_keyValues.m_pElements;
        else
          m_pElements = 0;
        v6 = &m_pElements[v3];
      }
      v7 = *(v6 + 4);
      switch ( v7 )
      {
        case 0:
          goto LABEL_21;
        case 1:
          v14 = *v6;
          goto LABEL_23;
        case 3:
        case 39:
          v8 = 0;
          V_snprintf(
            CEntityKeyValues::DumpToLog(int,char const*)const::pValueBuf,
            2048,
            "%g %g %g",
            **v6,
            (*v6)[1],
            (*v6)[2]);
          if ( this->m_keyHashes.m_nCount > v3 )
            goto LABEL_13;
          goto LABEL_6;
        case 4:
        case 27:
          V_snprintf(
            CEntityKeyValues::DumpToLog(int,char const*)const::pValueBuf,
            2048,
            "%g %g %g %g",
            **v6,
            (*v6)[1],
            (*v6)[2],
            (*v6)[3]);
          break;
        case 5:
          V_snprintf(CEntityKeyValues::DumpToLog(int,char const*)const::pValueBuf, 2048, "%d", *v6);
          break;
        case 6:
          v16 = "true";
          if ( *v6 == 0 )
            v16 = "false";
          V_snprintf(CEntityKeyValues::DumpToLog(int,char const*)const::pValueBuf, 2048, "%s", v16);
          break;
        case 8:
          V_snprintf(CEntityKeyValues::DumpToLog(int,char const*)const::pValueBuf, 2048, "%c", *v6);
          break;
        case 9:
          V_snprintf(
            CEntityKeyValues::DumpToLog(int,char const*)const::pValueBuf,
            2048,
            "%d %d %d %d",
            *v6,
            BYTE1(*v6),
            BYTE2(*v6),
            HIBYTE(*v6));
          break;
        case 25:
          V_snprintf(CEntityKeyValues::DumpToLog(int,char const*)const::pValueBuf, 2048, "%g %g", **v6, (*v6)[1]);
          break;
        case 26:
          V_snprintf(CEntityKeyValues::DumpToLog(int,char const*)const::pValueBuf, 2048, "%lld", *v6);
          break;
        case 30:
          v15 = *v6;
          if ( *v6 == 0 )
            v15 = "(null)";
          _V_strncpy(CEntityKeyValues::DumpToLog(int,char const*)const::pValueBuf, v15, 2048);
          break;
        case 33:
          V_snprintf(CEntityKeyValues::DumpToLog(int,char const*)const::pValueBuf, 2048, "%llu", *v6);
          break;
        case 34:
          v14 = *v6;
LABEL_23:
          V_snprintf(CEntityKeyValues::DumpToLog(int,char const*)const::pValueBuf, 2048, "%g", v14);
          break;
        case 37:
          V_snprintf(CEntityKeyValues::DumpToLog(int,char const*)const::pValueBuf, 2048, "%u", *v6);
          break;
        default:
          switch ( v7 )
          {
            case 0:
              v13 = "void";
              break;
            case 1:
              v13 = "float";
              break;
            case 3:
              v13 = "vector";
              break;
            case 4:
              v13 = "quaternion";
              break;
            case 5:
              v13 = "integer";
              break;
            case 6:
              v13 = "boolean";
              break;
            case 8:
              v13 = "character";
              break;
            case 9:
              v13 = "color";
              break;
            case 13:
              v13 = "ehandle";
              break;
            case 25:
              v13 = "vector2d";
              break;
            case 26:
              v13 = "int64";
              break;
            case 27:
              v13 = "vector4d";
              break;
            case 28:
              v13 = "resourcehandle";
              break;
            case 30:
              v13 = "cstring";
              break;
            case 31:
              v13 = "hscript";
              break;
            case 32:
              v13 = "variant";
              break;
            case 33:
              v13 = "uint64";
              break;
            case 34:
              v13 = "float64";
              break;
            case 37:
              v13 = "unsigned";
              break;
            case 38:
              v13 = "utlstringtoken";
              break;
            case 39:
              v13 = "qangle";
              break;
            case 48:
              v13 = "hscript_lightbinding";
              break;
            case 49:
              v13 = "js_value";
              break;
            case 50:
              v13 = "js_object";
              break;
            case 51:
              v13 = "js_array";
              break;
            case 52:
              v13 = "js_raw_args";
              break;
            default:
              v13 = "unknown_variant_type";
              break;
          }
          Warning("No conversion from %s to string at the moment!\n", v13);
LABEL_21:
          CEntityKeyValues::DumpToLog(int,char const*)const::pValueBuf[0] = 0;
          break;
      }
      v8 = 0;
      if ( this->m_keyHashes.m_nCount > v3 )
      {
LABEL_13:
        if ( this->m_keyValues.m_nAllocated != 0 )
          v11 = this->m_keyValues.m_pElements;
        else
          v11 = 0;
        if ( v11[v3].m_pAttributeName != 0 )
        {
          if ( LoggingSystem_IsChannelEnabled(nChannel, 1) != 0 )
          {
            m_pAttributeName = "<none>";
            if ( this->m_keyHashes.m_nCount > v3 )
            {
              if ( this->m_keyValues.m_nAllocated != 0 )
                v20 = this->m_keyValues.m_pElements;
              else
                v20 = 0;
              m_pAttributeName = v20[v3].m_pAttributeName;
            }
            LoggingSystem_Log(
              nChannel,
              1,
              "%s DynamicAtr:%s = '%s'\n",
              pPrefix,
              m_pAttributeName,
              CEntityKeyValues::DumpToLog(int,char const*)const::pValueBuf);
          }
          goto LABEL_10;
        }
        m_nAllocated = this->m_keyHashes.m_nAllocated;
        if ( m_nAllocated != 0 )
        {
          if ( m_nAllocated <= 9 )
            v19 = (&this->m_keyHashes.m_nAllocAllocated + 1);
          else
            v19 = this->m_keyHashes.m_pElements;
        }
        else
        {
          v19 = 0;
        }
        v8 = v19[v3];
      }
LABEL_6:
      v9 = (*(*g_pStringTokenSystem + 88LL))(g_pStringTokenSystem, v8);
      v10 = v9;
      if ( v9 != 0 && *v9 != 0 )
      {
        if ( LoggingSystem_IsChannelEnabled(nChannel, 1) != 0 )
          LoggingSystem_Log(
            nChannel,
            1,
            "%s0x%08X:%s = \"%s\"\n",
            pPrefix,
            v8,
            v10,
            CEntityKeyValues::DumpToLog(int,char const*)const::pValueBuf);
      }
      else if ( LoggingSystem_IsChannelEnabled(nChannel, 1) != 0 )
      {
        LoggingSystem_Log(
          nChannel,
          1,
          "%s0x%08X %s = \"%s\"\n",
          pPrefix,
          v8,
          "",
          CEntityKeyValues::DumpToLog(int,char const*)const::pValueBuf);
      }
LABEL_10:
      m_nCount = this->m_keyHashes.m_nCount;
      ++v3;
    }
    while ( m_nCount > v3 );
  }
}


// ConvertTextDataToNewKeyValues  (line 633, @0x00000000030a6a90, libserver.so)  // inlines: AddKeyValue<char>, AddKeyValue<double>, AddKeyValue<float>, AddKeyValue<int>, AddKeyValue<long long int>, AddKeyValue<long long unsigned int>, AddKeyValue<unsigned int>, AddToTail, Alloc, Allocate, As<CSchemaType_Atomic>, As<CSchemaType_Builtin>, As<CSchemaType_DeclaredEnum>, As<CSchemaType_FixedArray>, Base, Color, Element, FindKeyHash, Free, GetEnum, GetName, InternalAs, IsResourceStrongHandle, LeafCodeInfo_t, LookupEnum, MakeEntityKeyId, MakeStringToken, SetDynamicAttribute<float>, SetDynamicAttribute<int>, SetValue<char [260]>, SetValue<char>, SetValue<double>, SetValue<float>, SetValue<long long int>, SetValue<long long unsigned int>, SetValue<unsigned int>, V_isdigit, V_memcpy, V_strlen, atof, atoi, memcpy, operator=, operator[]
// calls: KeyValues::GetString, KeyValues::GetName, SchemaTypeOf<CUtlString>, SchemaTypeOf<CUtlStringToken>, SchemaTypeOf<CEntityHandle>, SchemaTypeOf<CUtlSymbolLarge>, SchemaTypeOf<CVariantBase<CVariantDefaultAllocator> >, SchemaTypeOf<char>, SchemaTypeOf<Vector>, SchemaTypeOf<RadianEuler>, SchemaTypeOf<DegreeEuler>, SchemaTypeOf<Quaternion> (58 total)
// callers: ConvertMapDataKV
// strings: "entitykeyvalues.cpp", "ConvertTextDataToNewKeyValues", "Unsupported field type for conversion from old KeyValues, field %s of type %s\n", "Unsupported field type for entity attribute, field %s\n", "true", "Unsupported field type for conversion from old KeyValues, field %s\n" (10 total)
// globals: `guard variable for'ConvertTextDataToNewKeyValues(CEntityKeyValues *,KeyValues *,CSchemaType *)::nPrefixLen, ConvertTextDataToNewKeyValues(CEntityKeyValues *,KeyValues *,CSchemaType *)::nPrefixLen, jpt_30A6FF3, CEntityVariantAllocator::sm_pMemoryPool
void __fastcall ConvertTextDataToNewKeyValues(
        CEntityKeyValues *pKeyValues,
        KeyValues *pSubKey,
        CSchemaType *pFieldType)
{
  const char *String; // r13
  const char *Name; // rax
  const char *v8; // r14
  EntityKeyId_t v9; // r15d
  bool v10; // zf
  CSchemaType *v11; // rax
  const char *v12; // rax
  const char *v13; // r14
  CKeyValues_Data::types_t DataType; // eax
  float v15; // xmm1_4
  float Float; // xmm0_4
  uint32 v17; // ebx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v19; // cx
  __int64 v20; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v21; // rdx
  int Int; // r13d
  uint32 v23; // ebx
  int v24; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v25; // si
  __int64 v26; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v27; // rcx
  uint32 v28; // eax
  int v29; // eax
  __int64 v30; // rsi
  CSchemaType *v31; // rdx
  int v32; // eax
  int v33; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v34; // cx
  __int64 v35; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v36; // rdx
  double v37; // xmm0_8
  int v38; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v39; // cx
  __int64 v40; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v41; // rdx
  int v42; // ebx
  int v43; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v44; // si
  __int64 v45; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v46; // rcx
  int v47; // eax
  int v48; // edx
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  char v55; // bl
  int v56; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v57; // cx
  __int64 v58; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v59; // rdx
  unsigned __int64 v60; // rbx
  int v61; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v62; // si
  __int64 v63; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v64; // rcx
  __int64 v65; // rbx
  int v66; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v67; // si
  __int64 v68; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v69; // rcx
  double v70; // xmm0_8
  int v71; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v72; // cx
  __int64 v73; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rax
  CVariantBase<CEntityVariantAllocator> *v77; // rdi
  int v78; // r15d
  void *v79; // rax
  float v80; // xmm0_4
  void *v81; // r13
  __int16 v82; // r14
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v85; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v86; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v88; // rax
  int v89; // eax
  int v90; // ecx
  void *v91; // rax
  int v92; // ecx
  void *v93; // r15
  __int16 v94; // r14
  unsigned __int64 v95; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v96; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v97; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v98; // rax
  uint16 v99; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v100; // rax
  __int64 v101; // rax
  __int16 v102; // dx
  __int64 v103; // rax
  __int16 v104; // dx
  uint32 v105; // eax
  unsigned __int64 v106; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v107; // rax
  __int64 v108; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v109; // rax
  __int64 v110; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v111; // rax
  uint16 v112; // dx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v113; // rax
  unsigned __int64 v114; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v115; // rax
  __int64 v116; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v117; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v118; // rax
  uint16 v119; // dx
  unsigned __int64 v120; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v121; // rax
  __int64 v122; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v123; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v124; // rax
  uint16 v125; // dx
  unsigned __int64 v126; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v127; // rax
  __int64 v128; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v129; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v130; // rax
  uint16 v131; // dx
  unsigned __int64 v132; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v133; // rax
  __int64 v134; // rbx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v135; // rax
  __int64 v136; // rbx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v137; // rax
  uint16 v138; // dx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v139; // rax
  unsigned __int64 v140; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v141; // rax
  __int64 v142; // rbx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v143; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v144; // rax
  uint16 v145; // dx
  __int64 v146; // rax
  __int16 v147; // dx
  __int64 v148; // rax
  __int16 v149; // dx
  __int64 v150; // rax
  __int16 v151; // dx
  __int64 v152; // rax
  __int16 v153; // dx
  __int64 v154; // rax
  __int16 v155; // dx
  void *v156; // rax
  void *v157; // rax
  const char *v158; // rax
  void *v159; // rax
  void *v160; // rax
  int v161; // eax
  const CSchemaEnumeratorInfo *MemberByValue; // rax
  EnumIntrospectionHandle_t hEnumIntrospection; // [rsp+8h] [rbp-288h]
  EnumIntrospectionHandle_t hEnumIntrospectiong; // [rsp+8h] [rbp-288h]
  const CSchemaEnumInfo *hEnumIntrospectiona; // [rsp+8h] [rbp-288h]
  uint32 hEnumIntrospectionh; // [rsp+8h] [rbp-288h]
  float hEnumIntrospectionb; // [rsp+8h] [rbp-288h]
  int hEnumIntrospectionc; // [rsp+8h] [rbp-288h]
  int hEnumIntrospectioni; // [rsp+8h] [rbp-288h]
  float hEnumIntrospectiond; // [rsp+8h] [rbp-288h]
  EnumIntrospectionHandle_t hEnumIntrospectione; // [rsp+8h] [rbp-288h]
  float hEnumIntrospectionf; // [rsp+8h] [rbp-288h]
  int hEnumIntrospectionj; // [rsp+8h] [rbp-288h]
  EnumIntrospectionHandle_t hEnumIntrospectionk; // [rsp+8h] [rbp-288h]
  float hEnumIntrospectionl; // [rsp+8h] [rbp-288h]
  QAngle a; // [rsp+10h] [rbp-280h] BYREF
  Vector4D v_0; // [rsp+20h] [rbp-270h] BYREF
  const char *v178; // [rsp+30h] [rbp-260h]
  Color v; // [rsp+40h] [rbp-250h] BYREF
  char szKVStringScratch[256]; // [rsp+50h] [rbp-240h] BYREF
  char pResourceName[260]; // [rsp+150h] [rbp-140h] BYREF
  unsigned __int64 v182; // [rsp+258h] [rbp-38h]

  v182 = __readfsqword(0x28u);
  String = KeyValues::GetString(pSubKey, 0, 0, szKVStringScratch, 0x100u);
  if ( String == 0 )
    return;
  Name = KeyValues::GetName(pSubKey);
  v8 = Name;
  if ( pFieldType == 0 )
  {
    if ( `guard variable for'ConvertTextDataToNewKeyValues(CEntityKeyValues *,KeyValues *,CSchemaType *)::nPrefixLen == 0
      && __cxa_guard_acquire(&`guard variable for'ConvertTextDataToNewKeyValues(CEntityKeyValues *,KeyValues *,CSchemaType *)::nPrefixLen) != 0 )
    {
      ConvertTextDataToNewKeyValues(CEntityKeyValues *,KeyValues *,CSchemaType *)::nPrefixLen = 6;
      __cxa_guard_release(&`guard variable for'ConvertTextDataToNewKeyValues(CEntityKeyValues *,KeyValues *,CSchemaType *)::nPrefixLen);
    }
    v13 = &v8[ConvertTextDataToNewKeyValues(CEntityKeyValues *,KeyValues *,CSchemaType *)::nPrefixLen];
    DataType = KeyValues::GetDataType(pSubKey, 0);
    if ( DataType != CKeyValues_Data::types_t::TYPE_INT )
    {
      if ( DataType != CKeyValues_Data::types_t::TYPE_FLOAT )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
        {
          *&v_0.x = "entitykeyvalues.cpp";
          v178 = "ConvertTextDataToNewKeyValues";
          LODWORD(v_0.z) = 655;
          LoggingSystem_Log(
            LOG_ENTITY_SYSTEM,
            LoggingSeverity_t::LS_ERROR,
            &v_0,
            "Unsupported field type for entity attribute, field %s\n",
            v13);
        }
        return;
      }
      Float = KeyValues::GetFloat(pSubKey, 0, 0.0, v15);
      if ( pKeyValues->m_nQueuedForSpawnCount > 0 )
        return;
      v17 = 0;
      if ( v13 != 0 && *v13 != 0 )
      {
        hEnumIntrospectiond = Float;
        v105 = MurmurHash2LowerCase(v13, 0x31415926u);
        Float = hEnumIntrospectiond;
        v17 = v105;
        if ( g_bUpdateStringTokenDatabase )
        {
          RegisterStringToken(v105, v13, 0, 1);
          Float = hEnumIntrospectiond;
        }
      }
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      if ( m_nCount <= 0 )
      {
LABEL_169:
        if ( v13 != 0 )
        {
          hEnumIntrospectionb = Float;
          v78 = strlen(v13) + 1;
          if ( v78 <= 15 )
          {
            v156 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, v78, 8);
            v80 = hEnumIntrospectionb;
            v81 = v156;
            if ( v78 < 0 )
              __debugbreak();
          }
          else
          {
            v79 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, v78, 16);
            v80 = hEnumIntrospectionb;
            v81 = v79;
          }
        }
        else
        {
          v78 = 1;
          hEnumIntrospectionl = Float;
          v159 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, 1, 8);
          v80 = hEnumIntrospectionl;
          v81 = v159;
        }
        hEnumIntrospectionc = LODWORD(v80);
        memcpy(v81, v13, v78);
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&pKeyValues->m_keyHashes);
        v82 = pKeyValues->m_keyHashes.m_nCount - 1;
        m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
        if ( m_nAllocated != 0 )
        {
          if ( m_nAllocated <= 9 )
            m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          else
            m_pElements = pKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        m_pElements[v82] = v17;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&pKeyValues->m_keyValues);
        if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
          v85 = pKeyValues->m_keyValues.m_pElements;
        else
          v85 = 0;
        v86 = &v85[v82];
        m_flags = v86->m_value.m_flags;
        if ( (m_flags & 1) != 0 )
          v86->m_value.m_flags = m_flags & 0xFFFE;
        v86->m_value.m_uint64 = 0;
        v86->m_value.m_type = 1;
        v86->m_value.m_int = hEnumIntrospectionc;
        if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
          v88 = pKeyValues->m_keyValues.m_pElements;
        else
          v88 = 0;
        v88[v82].m_pAttributeName = v81;
        return;
      }
      v19 = pKeyValues->m_keyHashes.m_nAllocated;
      v20 = 0;
      while ( 1 )
      {
        if ( v19 != 0 )
        {
          v21 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v19 > 9 )
            v21 = pKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v21 = 0;
        }
        if ( v17 == v21[v20] )
          break;
        if ( m_nCount <= ++v20 )
          goto LABEL_169;
      }
      if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
      {
        v101 = &pKeyValues->m_keyValues.m_pElements[v20];
        if ( *(v101 + 16) != 0 )
        {
LABEL_197:
          v102 = *(v101 + 10);
          if ( (v102 & 1) != 0 )
            *(v101 + 10) = v102 & 0xFFFE;
          *v101 = 0;
          *(v101 + 8) = 1;
          *v101 = Float;
          return;
        }
      }
      else
      {
        v101 = 24 * v20;
        if ( *(v101 + 16) != 0 )
          goto LABEL_197;
      }
LABEL_303:
      Warning("Attempted to set non-attribute value %s as if it was an attribute!\n", v13);
      return;
    }
    Int = KeyValues::GetInt(pSubKey, 0, 0);
    if ( pKeyValues->m_nQueuedForSpawnCount > 0 )
      return;
    v23 = 0;
    if ( v13 != 0 && *v13 != 0 )
    {
      v23 = MurmurHash2LowerCase(v13, 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
        RegisterStringToken(v23, v13, 0, 1);
    }
    v24 = pKeyValues->m_keyHashes.m_nCount;
    if ( v24 <= 0 )
    {
LABEL_182:
      if ( v13 != 0 )
      {
        v89 = strlen(v13);
        v90 = v89 + 1;
        if ( v89 + 1 <= 15 )
        {
          hEnumIntrospectionj = v89 + 1;
          v157 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, v90, 8);
          v92 = hEnumIntrospectionj;
          v93 = v157;
          if ( hEnumIntrospectionj < 0 )
            __debugbreak();
        }
        else
        {
          hEnumIntrospectioni = v89 + 1;
          v91 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, v90, 16);
          v92 = hEnumIntrospectioni;
          v93 = v91;
        }
      }
      else
      {
        v160 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, 1, 8);
        v92 = 1;
        v93 = v160;
      }
      memcpy(v93, v13, v92);
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&pKeyValues->m_keyHashes);
      v94 = pKeyValues->m_keyHashes.m_nCount - 1;
      v95 = pKeyValues->m_keyHashes.m_nAllocated;
      if ( v95 != 0 )
      {
        if ( v95 <= 9 )
          v96 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          v96 = pKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v96 = 0;
      }
      v96[v94] = v23;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&pKeyValues->m_keyValues);
      if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
        v97 = pKeyValues->m_keyValues.m_pElements;
      else
        v97 = 0;
      v98 = &v97[v94];
      v99 = v98->m_value.m_flags;
      if ( (v99 & 1) != 0 )
        v98->m_value.m_flags = v99 & 0xFFFE;
      v98->m_value.m_uint64 = 0;
      v98->m_value.m_type = 5;
      v98->m_value.m_int = Int;
      if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
        v100 = pKeyValues->m_keyValues.m_pElements;
      else
        v100 = 0;
      v100[v94].m_pAttributeName = v93;
      return;
    }
    v25 = pKeyValues->m_keyHashes.m_nAllocated;
    v26 = 0;
    while ( 1 )
    {
      if ( v25 != 0 )
      {
        v27 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v25 > 9 )
          v27 = pKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v27 = 0;
      }
      if ( v23 == v27[v26] )
        break;
      if ( v24 <= ++v26 )
        goto LABEL_182;
    }
    if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v103 = &pKeyValues->m_keyValues.m_pElements[v26];
      if ( *(v103 + 16) == 0 )
        goto LABEL_303;
    }
    else
    {
      v103 = 24 * v26;
      if ( *(&stru_10.m_Lock.gap0 + 3 * v26) == 0 )
        goto LABEL_303;
    }
    v104 = *(v103 + 10);
    if ( (v104 & 1) != 0 )
      *(v103 + 10) = v104 & 0xFFFE;
    *v103 = 0;
    *(v103 + 8) = 5;
    *v103 = Int;
    return;
  }
  v9.m_nHashCode = 0;
  if ( Name != 0 && *Name != 0 )
  {
    v28 = MurmurHash2LowerCase(Name, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      hEnumIntrospectionh = v28;
      RegisterStringToken(v28, v8, 0, 1);
      v28 = hEnumIntrospectionh;
    }
    v9.m_nHashCode = v28;
  }
  if ( (**pFieldType)(pFieldType) != 4 )
    goto LABEL_7;
  v29 = (**pFieldType)(pFieldType);
  v31 = 0;
  if ( v29 == 4 )
  {
    (*(*pFieldType + 48LL))(pFieldType, v30, 0);
    v31 = pFieldType;
  }
  v32 = *(v31 + 16);
  if ( (v32 - 4007) > 2 && v32 != 4000 )
  {
LABEL_7:
    if ( (**pFieldType)(pFieldType) == 0 && (*(*pFieldType + 48LL))(pFieldType) == 4 )
    {
      switch ( *(pFieldType + 12) )
      {
        case 2:
          v55 = 127;
          if ( strtol(String, 0, 10) <= 127 )
          {
            v55 = 0x80;
            if ( strtol(String, 0, 10) >= -128 )
              v55 = strtol(String, 0, 10);
          }
          if ( pKeyValues->m_nQueuedForSpawnCount > 0 )
            return;
          v56 = pKeyValues->m_keyHashes.m_nCount;
          if ( v56 <= 0 )
            goto LABEL_212;
          v57 = pKeyValues->m_keyHashes.m_nAllocated;
          v58 = 0;
          while ( 1 )
          {
            if ( v57 != 0 )
            {
              v59 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
              if ( v57 > 9 )
                v59 = pKeyValues->m_keyHashes.m_pElements;
            }
            else
            {
              v59 = 0;
            }
            if ( v9.m_nHashCode == v59[v58] )
              break;
            if ( v56 <= ++v58 )
            {
LABEL_212:
              CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&pKeyValues->m_keyHashes);
              v106 = pKeyValues->m_keyHashes.m_nAllocated;
              if ( v106 != 0 )
              {
                if ( v106 <= 9 )
                  v107 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
                else
                  v107 = pKeyValues->m_keyHashes.m_pElements;
              }
              else
              {
                v107 = 0;
              }
              v108 = (pKeyValues->m_keyHashes.m_nCount - 1);
              v107[v108] = v9.m_nHashCode;
              CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&pKeyValues->m_keyValues);
              if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
                v109 = pKeyValues->m_keyValues.m_pElements;
              else
                v109 = 0;
              v110 = v108;
              v111 = &v109[v110];
              v112 = v111->m_value.m_flags;
              if ( (v112 & 1) != 0 )
                v111->m_value.m_flags = v112 & 0xFFFE;
              v111->m_value.m_uint64 = 0;
              v111->m_value.m_type = 8;
              v111->m_value.m_char = v55;
              if ( pKeyValues->m_keyValues.m_nAllocated == 0 )
                goto LABEL_230;
              goto LABEL_220;
            }
          }
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
          {
            v75 = pKeyValues->m_keyValues.m_pElements;
            v76 = 24 * v58;
            if ( *(v75 + v76 + 16) != 0 )
              goto LABEL_162;
          }
          else
          {
            v76 = 24 * v58;
            v75 = 0;
            if ( *(v76 + 16) != 0 )
              goto LABEL_162;
          }
          v146 = v75 + v76;
          v147 = *(v146 + 10);
          if ( (v147 & 1) != 0 )
            *(v146 + 10) = v147 & 0xFFFE;
          *v146 = 0;
          *(v146 + 8) = 8;
          *v146 = v55;
          return;
        case 3:
          v53 = strtol(String, 0, 10);
          v48 = 127;
          if ( v53 <= 127 )
          {
            LOBYTE(v48) = 10;
            v54 = strtol(String, 0, v48);
            v48 = -128;
            if ( v54 >= -128 )
              goto LABEL_106;
          }
          goto LABEL_103;
        case 4:
          v51 = strtol(String, 0, 10);
          v48 = 255;
          if ( v51 > 255 )
            goto LABEL_103;
          LOBYTE(v48) = 10;
          goto LABEL_109;
        case 5:
          v49 = strtol(String, 0, 10);
          v48 = 0x7FFF;
          if ( v49 <= 0x7FFF )
          {
            LOWORD(v48) = 10;
            v50 = strtol(String, 0, v48);
            v48 = -32768;
            if ( v50 >= -32768 )
LABEL_106:
              v48 = strtol(String, 0, 10);
          }
          goto LABEL_103;
        case 6:
          v47 = strtol(String, 0, 10);
          v48 = 0xFFFF;
          if ( v47 <= 0xFFFF )
          {
            LOWORD(v48) = 10;
LABEL_109:
            v52 = strtol(String, 0, v48);
            v48 = 0;
            if ( v52 >= 0 )
            {
              LOBYTE(v48) = 10;
              v48 = strtol(String, 0, v48);
            }
          }
LABEL_103:
          LODWORD(v_0.x) = v48;
          CEntityKeyValues::SetValue<int>(pKeyValues, v9, &v_0);
          return;
        case 7:
          LODWORD(v_0.x) = strtol(String, 0, 10);
          CEntityKeyValues::SetValue<int>(pKeyValues, v9, &v_0);
          return;
        case 8:
          v42 = strtoul(String, 0, 10);
          if ( pKeyValues->m_nQueuedForSpawnCount > 0 )
            return;
          v43 = pKeyValues->m_keyHashes.m_nCount;
          if ( v43 <= 0 )
            goto LABEL_240;
          v44 = pKeyValues->m_keyHashes.m_nAllocated;
          v45 = 0;
          while ( 1 )
          {
            if ( v44 != 0 )
            {
              v46 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
              if ( v44 > 9 )
                v46 = pKeyValues->m_keyHashes.m_pElements;
            }
            else
            {
              v46 = 0;
            }
            if ( v9.m_nHashCode == v46[v45] )
              break;
            if ( v43 <= ++v45 )
            {
LABEL_240:
              CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&pKeyValues->m_keyHashes);
              v126 = pKeyValues->m_keyHashes.m_nAllocated;
              if ( v126 != 0 )
              {
                if ( v126 <= 9 )
                  v127 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
                else
                  v127 = pKeyValues->m_keyHashes.m_pElements;
              }
              else
              {
                v127 = 0;
              }
              v128 = (pKeyValues->m_keyHashes.m_nCount - 1);
              v127[v128] = v9.m_nHashCode;
              CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&pKeyValues->m_keyValues);
              if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
                v129 = pKeyValues->m_keyValues.m_pElements;
              else
                v129 = 0;
              v110 = v128;
              v130 = &v129[v110];
              v131 = v130->m_value.m_flags;
              if ( (v131 & 1) != 0 )
                v130->m_value.m_flags = v131 & 0xFFFE;
              v130->m_value.m_uint64 = 0;
              v130->m_value.m_type = 37;
              v130->m_value.m_int = v42;
              if ( pKeyValues->m_keyValues.m_nAllocated == 0 )
              {
                v113 = 0;
                goto LABEL_221;
              }
              goto LABEL_220;
            }
          }
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
          {
            v76 = pKeyValues->m_keyValues.m_pElements;
            v75 = 24 * v45;
            if ( *(v76 + v75 + 16) != 0 )
              goto LABEL_162;
          }
          else
          {
            v75 = 24 * v45;
            v76 = 0;
            if ( *(v75 + 16) != 0 )
              goto LABEL_162;
          }
          v154 = v75 + v76;
          v155 = *(v154 + 10);
          if ( (v155 & 1) != 0 )
            *(v154 + 10) = v155 & 0xFFFE;
          *v154 = 0;
          *(v154 + 8) = 37;
          *v154 = v42;
          return;
        case 9:
          v65 = strtoll(String, 0, 10);
          if ( pKeyValues->m_nQueuedForSpawnCount > 0 )
            return;
          v66 = pKeyValues->m_keyHashes.m_nCount;
          if ( v66 <= 0 )
            goto LABEL_222;
          v67 = pKeyValues->m_keyHashes.m_nAllocated;
          v68 = 0;
          while ( 1 )
          {
            if ( v67 != 0 )
            {
              v69 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
              if ( v67 > 9 )
                v69 = pKeyValues->m_keyHashes.m_pElements;
            }
            else
            {
              v69 = 0;
            }
            if ( v9.m_nHashCode == v69[v68] )
              break;
            if ( v66 <= ++v68 )
            {
LABEL_222:
              CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&pKeyValues->m_keyHashes);
              v114 = pKeyValues->m_keyHashes.m_nAllocated;
              if ( v114 != 0 )
              {
                if ( v114 <= 9 )
                  v115 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
                else
                  v115 = pKeyValues->m_keyHashes.m_pElements;
              }
              else
              {
                v115 = 0;
              }
              v116 = (pKeyValues->m_keyHashes.m_nCount - 1);
              v115[v116] = v9.m_nHashCode;
              CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&pKeyValues->m_keyValues);
              if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
                v117 = pKeyValues->m_keyValues.m_pElements;
              else
                v117 = 0;
              v110 = v116;
              v118 = &v117[v110];
              v119 = v118->m_value.m_flags;
              if ( (v119 & 1) != 0 )
                v118->m_value.m_flags = v119 & 0xFFFE;
              v118->m_value.m_type = 26;
              v118->m_value.m_uint64 = v65;
              if ( pKeyValues->m_keyValues.m_nAllocated == 0 )
              {
LABEL_230:
                v113 = 0;
                goto LABEL_221;
              }
              goto LABEL_220;
            }
          }
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
          {
            v76 = pKeyValues->m_keyValues.m_pElements;
            v75 = 24 * v68;
            if ( *(v76 + v75 + 16) != 0 )
              goto LABEL_162;
          }
          else
          {
            v75 = 24 * v68;
            v76 = 0;
            if ( *(v75 + 16) != 0 )
              goto LABEL_162;
          }
          v150 = v75 + v76;
          v151 = *(v150 + 10);
          if ( (v151 & 1) != 0 )
            *(v150 + 10) = v151 & 0xFFFE;
          *(v150 + 8) = 26;
          *v150 = v65;
          return;
        case 0xA:
          v60 = strtoull(String, 0, 10);
          if ( pKeyValues->m_nQueuedForSpawnCount > 0 )
            return;
          v61 = pKeyValues->m_keyHashes.m_nCount;
          if ( v61 <= 0 )
            goto LABEL_231;
          v62 = pKeyValues->m_keyHashes.m_nAllocated;
          v63 = 0;
          while ( 1 )
          {
            if ( v62 != 0 )
            {
              v64 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
              if ( v62 > 9 )
                v64 = pKeyValues->m_keyHashes.m_pElements;
            }
            else
            {
              v64 = 0;
            }
            if ( v9.m_nHashCode == v64[v63] )
              break;
            if ( v61 <= ++v63 )
            {
LABEL_231:
              CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&pKeyValues->m_keyHashes);
              v120 = pKeyValues->m_keyHashes.m_nAllocated;
              if ( v120 != 0 )
              {
                if ( v120 <= 9 )
                  v121 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
                else
                  v121 = pKeyValues->m_keyHashes.m_pElements;
              }
              else
              {
                v121 = 0;
              }
              v122 = (pKeyValues->m_keyHashes.m_nCount - 1);
              v121[v122] = v9.m_nHashCode;
              CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&pKeyValues->m_keyValues);
              if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
                v123 = pKeyValues->m_keyValues.m_pElements;
              else
                v123 = 0;
              v110 = v122;
              v124 = &v123[v110];
              v125 = v124->m_value.m_flags;
              if ( (v125 & 1) != 0 )
                v124->m_value.m_flags = v125 & 0xFFFE;
              v124->m_value.m_type = 33;
              v124->m_value.m_uint64 = v60;
              if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
LABEL_220:
                v113 = pKeyValues->m_keyValues.m_pElements;
              else
                v113 = 0;
LABEL_221:
              v113[v110].m_pAttributeName = 0;
              return;
            }
          }
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
          {
            v76 = pKeyValues->m_keyValues.m_pElements;
            v75 = 24 * v63;
            if ( *(v76 + v75 + 16) != 0 )
              goto LABEL_162;
          }
          else
          {
            v75 = 24 * v63;
            v76 = 0;
            if ( *(v75 + 16) != 0 )
              goto LABEL_162;
          }
          v148 = v75 + v76;
          v149 = *(v148 + 10);
          if ( (v149 & 1) != 0 )
            *(v148 + 10) = v149 & 0xFFFE;
          *(v148 + 8) = 33;
          *v148 = v60;
          return;
        case 0xB:
          v70 = strtod(String, 0);
          if ( pKeyValues->m_nQueuedForSpawnCount > 0 )
            return;
          v71 = pKeyValues->m_keyHashes.m_nCount;
          Float = v70;
          if ( v71 <= 0 )
            goto LABEL_259;
          v72 = pKeyValues->m_keyHashes.m_nAllocated;
          v73 = 0;
          while ( 1 )
          {
            if ( v72 != 0 )
            {
              v74 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
              if ( v72 > 9 )
                v74 = pKeyValues->m_keyHashes.m_pElements;
            }
            else
            {
              v74 = 0;
            }
            if ( v9.m_nHashCode == v74[v73] )
              break;
            if ( v71 <= ++v73 )
            {
LABEL_259:
              hEnumIntrospectionf = Float;
              CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&pKeyValues->m_keyHashes);
              v140 = pKeyValues->m_keyHashes.m_nAllocated;
              if ( v140 != 0 )
              {
                if ( v140 <= 9 )
                  v141 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
                else
                  v141 = pKeyValues->m_keyHashes.m_pElements;
              }
              else
              {
                v141 = 0;
              }
              v142 = (pKeyValues->m_keyHashes.m_nCount - 1);
              v141[v142] = v9.m_nHashCode;
              CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&pKeyValues->m_keyValues);
              if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
                v143 = pKeyValues->m_keyValues.m_pElements;
              else
                v143 = 0;
              v136 = v142;
              v144 = &v143[v136];
              v145 = v144->m_value.m_flags;
              if ( (v145 & 1) != 0 )
                v144->m_value.m_flags = v145 & 0xFFFE;
              v144->m_value.m_uint64 = 0;
              v144->m_value.m_type = 1;
              v144->m_value.m_float = hEnumIntrospectionf;
              if ( pKeyValues->m_keyValues.m_nAllocated == 0 )
                goto LABEL_267;
LABEL_257:
              v139 = pKeyValues->m_keyValues.m_pElements;
              goto LABEL_258;
            }
          }
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
          {
            v75 = pKeyValues->m_keyValues.m_pElements;
            v76 = 24 * v73;
            if ( *(v75 + v76 + 16) != 0 )
              goto LABEL_162;
          }
          else
          {
            v76 = 24 * v73;
            v75 = 0;
            if ( *(v76 + 16) != 0 )
              goto LABEL_162;
          }
          v101 = v75 + v76;
          goto LABEL_197;
        case 0xC:
          v37 = strtod(String, 0);
          if ( pKeyValues->m_nQueuedForSpawnCount > 0 )
            return;
          v38 = pKeyValues->m_keyHashes.m_nCount;
          if ( v38 <= 0 )
            goto LABEL_249;
          v39 = pKeyValues->m_keyHashes.m_nAllocated;
          v40 = 0;
          while ( 1 )
          {
            if ( v39 != 0 )
            {
              v41 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
              if ( v39 > 9 )
                v41 = pKeyValues->m_keyHashes.m_pElements;
            }
            else
            {
              v41 = 0;
            }
            if ( v9.m_nHashCode == v41[v40] )
              break;
            if ( v38 <= ++v40 )
            {
LABEL_249:
              hEnumIntrospectione = *&v37;
              CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&pKeyValues->m_keyHashes);
              v132 = pKeyValues->m_keyHashes.m_nAllocated;
              if ( v132 != 0 )
              {
                if ( v132 <= 9 )
                  v133 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
                else
                  v133 = pKeyValues->m_keyHashes.m_pElements;
              }
              else
              {
                v133 = 0;
              }
              v134 = (pKeyValues->m_keyHashes.m_nCount - 1);
              v133[v134] = v9.m_nHashCode;
              CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&pKeyValues->m_keyValues);
              if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
                v135 = pKeyValues->m_keyValues.m_pElements;
              else
                v135 = 0;
              v136 = v134;
              v137 = &v135[v136];
              v138 = v137->m_value.m_flags;
              if ( (v138 & 1) != 0 )
                v137->m_value.m_flags = v138 & 0xFFFE;
              v137->m_value.m_type = 34;
              v137->m_value.m_uint64 = hEnumIntrospectione;
              if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
                goto LABEL_257;
LABEL_267:
              v139 = 0;
LABEL_258:
              v139[v136].m_pAttributeName = 0;
              return;
            }
          }
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
          {
            v75 = pKeyValues->m_keyValues.m_pElements;
            v76 = 24 * v40;
            if ( *(v75 + v76 + 16) != 0 )
              goto LABEL_162;
          }
          else
          {
            v76 = 24 * v40;
            v75 = 0;
            if ( *(v76 + 16) != 0 )
              goto LABEL_162;
          }
          v152 = v75 + v76;
          v153 = *(v152 + 10);
          if ( (v153 & 1) != 0 )
            *(v152 + 10) = v153 & 0xFFFE;
          *(v152 + 8) = 34;
          *v152 = v37;
          return;
        case 0xD:
          if ( V_stricmp_fast(String, "true") != 0 )
          {
            LOBYTE(v_0.x) = V_stricmp_fast(String, "false") != 0 && strtol(String, 0, 10) != 0;
            CEntityKeyValues::SetValue<bool>(pKeyValues, v9, &v_0);
          }
          else
          {
            LOBYTE(v_0.x) = 1;
            CEntityKeyValues::SetValue<bool>(pKeyValues, v9, &v_0);
          }
          return;
        default:
          if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
          {
            *&v_0.x = "entitykeyvalues.cpp";
            v178 = "ConvertTextDataToNewKeyValues";
            LODWORD(v_0.z) = 721;
            LoggingSystem_Log(
              LOG_ENTITY_SYSTEM,
              LoggingSeverity_t::LS_ERROR,
              &v_0,
              "Unsupported field type for conversion from old KeyValues, field %s\n",
              v8);
          }
          return;
      }
    }
    if ( (**pFieldType)(pFieldType) == 6
      && (*(*pFieldType + 48LL))(pFieldType) == 4
      && ((hEnumIntrospectiona = *(pFieldType + 6)) != 0
       || (hEnumIntrospectionk = *(**(pFieldType + 5) + 288LL),
           v158 = CUtlString::Get(pFieldType + 1),
           (hEnumIntrospectionk)(*(pFieldType + 5), pFieldType + 48, v158),
           (hEnumIntrospectiona = *(pFieldType + 6)) != 0)) )
    {
      if ( CSchemaEnumInfo::FindMemberByName(hEnumIntrospectiona, String) == 0 )
      {
        if ( (*String - 48) <= 9u
          && (v161 = strtol(String, 0, 10),
              (MemberByValue = CSchemaEnumInfo::FindMemberByValue(hEnumIntrospectiona, v161)) != 0) )
        {
          String = MemberByValue->m_Name.m_pImplChars;
        }
        else if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
        {
          LoggingSystem_Log(LOG_ENTITY_SYSTEM, 2, "Encountered unknown enum value %s for field %s\n", String, v8);
        }
      }
    }
    else
    {
      hEnumIntrospection = 0;
      if ( (**pFieldType)(pFieldType) == 3 )
      {
        v10 = (*(*pFieldType + 48LL))(pFieldType) == 4;
        v11 = 0;
        if ( v10 )
          v11 = pFieldType;
        hEnumIntrospection = v11;
      }
      if ( pFieldType != SchemaTypeOf<CUtlString>()
        && pFieldType != SchemaTypeOf<CUtlStringToken>()
        && pFieldType != SchemaTypeOf<CEntityHandle>()
        && pFieldType != SchemaTypeOf<CUtlSymbolLarge>()
        && pFieldType != SchemaTypeOf<CVariantBase<CVariantDefaultAllocator>>()
        && (hEnumIntrospection == 0
         || (hEnumIntrospectiong = (*(hEnumIntrospection->m_Name.m_pImplChars + 12))(hEnumIntrospection)) != SchemaTypeOf<char>())
        && pFieldType != SchemaTypeOf<CUtlSymbolLarge>() )
      {
        if ( pFieldType == SchemaTypeOf<Vector>()
          || pFieldType == SchemaTypeOf<RadianEuler>()
          || pFieldType == SchemaTypeOf<DegreeEuler>() )
        {
          V_StringToVector(&v_0, String);
          CEntityKeyValues::SetValue<Vector>(pKeyValues, v9, &v_0);
        }
        else if ( pFieldType == SchemaTypeOf<Quaternion>() )
        {
          if ( V_StringToFloatArray(&v_0, 4, String) != 4 )
          {
            V_StringToVector(&a, String);
            AngleQuaternion(&a, &v_0);
          }
          CEntityKeyValues::SetValue<Quaternion>(pKeyValues, v9, &v_0);
        }
        else if ( pFieldType == SchemaTypeOf<QAngle>() )
        {
          V_StringToVector(&v_0, String);
          CEntityKeyValues::SetValue<QAngle>(pKeyValues, v9, &v_0);
        }
        else if ( pFieldType == SchemaTypeOf<Vector2D>() )
        {
          V_StringToFloatArray(&v_0, 2, String);
          CEntityKeyValues::SetValue<Vector2D>(pKeyValues, v9, &v_0);
        }
        else if ( pFieldType == SchemaTypeOf<Vector4D>() )
        {
          V_StringToFloatArray(&v_0, 4, String);
          CEntityKeyValues::SetValue<Vector4D>(pKeyValues, v9, &v_0);
        }
        else if ( pFieldType == SchemaTypeOf<Color>() || pFieldType == SchemaTypeOf<Color>() )
        {
          v = 0;
          V_StringToColor(&v, String);
          *pResourceName = v;
          CEntityKeyValues::SetValue<Color>(pKeyValues, v9, pResourceName);
        }
        else if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 4) != 0 )
        {
          v12 = CUtlString::Get(pFieldType + 1);
          LODWORD(v_0.z) = 826;
          *&v_0.x = "entitykeyvalues.cpp";
          v178 = "ConvertTextDataToNewKeyValues";
          LoggingSystem_Log(
            LOG_ENTITY_SYSTEM,
            LoggingSeverity_t::LS_ERROR,
            &v_0,
            "Unsupported field type for conversion from old KeyValues, field %s of type %s\n",
            v8,
            v12);
        }
        return;
      }
    }
LABEL_158:
    CEntityKeyValues::SetValue(pKeyValues, v9, String);
    return;
  }
  GenerateResourceNameFromFileName(String, pResourceName, 260);
  if ( pResourceName[0] == 0 )
    goto LABEL_158;
  if ( pKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    v33 = pKeyValues->m_keyHashes.m_nCount;
    if ( v33 <= 0 )
    {
LABEL_159:
      CEntityKeyValues::AddKeyValue<char [260]>(pKeyValues, v9, pResourceName, 0);
      return;
    }
    v34 = pKeyValues->m_keyHashes.m_nAllocated;
    v35 = 0;
    while ( 1 )
    {
      if ( v34 != 0 )
      {
        v36 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v34 > 9 )
          v36 = pKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v36 = 0;
      }
      if ( v9.m_nHashCode == v36[v35] )
        break;
      if ( v33 <= ++v35 )
        goto LABEL_159;
    }
    if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v75 = pKeyValues->m_keyValues.m_pElements;
      v76 = 24 * v35;
      v77 = (v75 + v76);
      if ( *(v75 + v76 + 16) != 0 )
      {
LABEL_162:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", *(v76 + v75 + 16));
        return;
      }
    }
    else
    {
      v76 = 24 * v35;
      v75 = 0;
      v77 = v76;
      if ( *(v76 + 16) != 0 )
        goto LABEL_162;
    }
    CVariantBase<CEntityVariantAllocator>::CopyData(v77, pResourceName, v75);
  }
}


// FindUnserializerInfo  (line 831, @0x00000000030a2a90, libserver.so)  // inlines: Find, MakeStringToken
// calls: MurmurHash2LowerCase, RegisterStringToken
// callers: ConvertMapDataKV
bool __fastcall FindUnserializerInfo(
        const char *pKeyFieldName,
        const ComponentUnserializerClassInfo_t *pInfo,
        CSchemaType **ppOutType)
{
  uint32 v3; // eax
  int v6; // edx
  volatile CUtlMemoryPoolBase::CBlob *volatile *v8; // rsi
  volatile CUtlMemoryPoolBase::CBlob *volatile v9; // rdx
  volatile CUtlMemoryPoolBase::CBlob *volatile v10; // rcx
  int m_Size; // r14d
  unsigned __int64 v12; // rbx
  __int64 v13; // r14
  bool result; // al
  uint32 v15; // [rsp+Ch] [rbp-34h]

  v3 = 0;
  v6 = 0;
  if ( pKeyFieldName != 0 && *pKeyFieldName != 0 )
  {
    v3 = MurmurHash2LowerCase(pKeyFieldName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v15 = v3;
      RegisterStringToken(v3, pKeyFieldName, 0, 1);
      v3 = v15;
    }
    v6 = v3 & 0xF;
  }
  v8 = &(&pInfo->m_atomicFields.m_EntryMemory.m_Blobs.m_pPop)[2 * v6] + 1;
  v9 = *v8;
  if ( *v8 != 0 )
  {
    v10 = *v8;
    if ( v3 == LODWORD(v9->m_pNext) )
    {
      v10 = *v8;
LABEL_17:
      *ppOutType = v10[1].m_pNext;
      return 1;
    }
    while ( 1 )
    {
      v10 = *&v10->m_NumBytes;
      if ( v10 == 0 )
        break;
      if ( v3 == LODWORD(v10->m_pNext) )
        goto LABEL_17;
    }
  }
  v10 = v8[1];
  if ( v10 != 0 && v9 != v10 )
  {
    while ( v3 != LODWORD(v10->m_pNext) )
    {
      v10 = *&v10->m_NumBytes;
      if ( v9 == v10 )
        goto LABEL_10;
    }
    goto LABEL_17;
  }
LABEL_10:
  m_Size = pInfo->m_ptrFields.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v12 = 0;
  v13 = 16 * ((m_Size - 1) + 1LL);
  while ( 1 )
  {
    result = FindUnserializerInfo(
               pKeyFieldName,
               pInfo->m_ptrFields.m_Memory.m_pMemory[v12 / 0x10].m_pClassInfo,
               ppOutType);
    if ( result )
      break;
    v12 += 16LL;
    if ( v12 == v13 )
      return 0;
  }
  return result;
}


// ConvertMapDataKV  (line 875, @0x00000000030a8280, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, Call<char const*, char const*>, CopyData, Find, Free, Get, GetNumStrings, GetToken, GetVScriptTypeToSchemaType, GetValue, IsEmpty, MakeStringToken, Purge, RemoveAll, SchemaTypeInvalid, SchemaTypeOf<CUtlString>, SchemaTypeOf<CUtlStringToken>, SchemaTypeOf<QAngle>, SchemaTypeOf<Quaternion>, SchemaTypeOf<Vector2D>, SchemaTypeOf<Vector4D>, SchemaTypeOf<Vector>, SchemaTypeOf<bool>, SchemaTypeOf<char>, SchemaTypeOf<double>, SchemaTypeOf<float>, SchemaTypeOf<int>, SchemaTypeScope, String, TempString, ToString, V_strncmp<int>, _V_strcmp, operator const UtlSymId_t, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: CEntitySystem::FindClassByDesignName, CEntityClass::GetEntityUnserializer, KeyValues::GetFirstValue, KeyValues::GetName, FindUnserializerInfo, ConvertTextDataToNewKeyValues, KeyValues::GetNextValue, CUtlSymbolTable::String, CEntityKeyValues::HasValue, CUtlString::Get, KeyValues::KeyValues, KeyValues::~KeyValues (27 total)
// callers: ConvertOldKeyValuesToNew, AppendNPCKeyValues
// strings: "tmp", "EntityUtils", "GetClassFieldType", "_attr_", "CUtlString", "QAngle" (9 total)
// globals: `guard variable for'GetVScriptTypeToSchemaType(void)::g_stringToSchemaType, GetVScriptTypeToSchemaType(void)::g_stringToSchemaType, `guard variable for'ConvertMapDataKV(char const*,CEntityKeyValues *,int,ComponentUnserializerClassInfo_t const**,IScriptVM *,CUtlStringMap<FGDFieldInfo_t,CUtlSy, ConvertMapDataKV(char const*,CEntityKeyValues *,int,ComponentUnserializerClassInfo_t const**,IScriptVM *,CUtlStringMap<FGDFieldInfo_t,CUtlSymbolTable> *,KeyValu, SchemaTypeOf<CUtlString>(void)::s_pTypeOf, CSchemaManipulator<CUtlString>::StaticAccessor(void)::m, CAtomicManipulator<CUtlString>::Get(void)::val, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf (31 total)
void __fastcall ConvertMapDataKV(
        const char *pClassName,
        CEntityKeyValues *pKeyValues,
        int nUnserializerCount,
        const ComponentUnserializerClassInfo_t **ppInfo,
        IScriptVM *pScriptVM,
        FGDFieldDict_t *pFgdFieldDict,
        KeyValues *pOldKeyValues,
        bool bCompileTime)
{
  CEntityClass *ClassByDesignName; // rax
  KeyValues *FirstValue; // r15
  const char *Name; // r12
  const ComponentUnserializerClassInfo_t **v11; // rbx
  CSchemaType *m_pType; // rdx
  __int64 v13; // r13
  int v14; // ebx
  char *v15; // rax
  EntityKeyId_t v16; // esi
  const char *v17; // r12
  FGDFieldInfo_t *v18; // r15
  char *m_pString; // rax
  const char *v20; // rax
  CSchemaType *v21; // r12
  KeyValues *v22; // rax
  char v23; // bl
  __int64 v24; // rsi
  int v25; // eax
  int *v26; // rbx
  int *p_m_nAllocationCount; // rdx
  const char *v28; // rsi
  char **v29; // rbx
  const char **v30; // r12
  CSchemaType *v31; // rax
  char v32; // al
  uint32 v33; // r15d
  __int64 (__fastcall *v34)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v36; // rax
  CSchemaType *v37; // rax
  CSchemaType *v38; // rax
  CSchemaType *v39; // rax
  CSchemaType *v40; // rax
  CSchemaType *v41; // rax
  CSchemaType *v42; // rax
  __int64 v43; // rax
  CSchemaType *v44; // rax
  CSchemaType *v45; // rax
  CSchemaType *v46; // rax
  CSchemaType *v47; // rax
  CSchemaType *v48; // rax
  CSchemaType *v49; // rax
  CSchemaType *v50; // rax
  const char *v51; // rsi
  __int64 v52; // rax
  const char *v53; // rsi
  __int64 v54; // rax
  const char *v55; // rsi
  __int64 v56; // rax
  const char *v57; // rsi
  __int64 v58; // rax
  const char *v59; // rsi
  __int64 v60; // rax
  const char *v61; // rsi
  __int64 v62; // rax
  const char *v63; // rsi
  __int64 v64; // rax
  const char *v65; // rsi
  __int64 v66; // rax
  const char *v67; // rsi
  __int64 v68; // rax
  const char *v69; // rsi
  __int64 v70; // rax
  const char *v71; // rsi
  __int64 v72; // rax
  const char *v73; // rsi
  __int64 v74; // rax
  const char *v75; // rsi
  __int64 v76; // rax
  const char *v77; // rsi
  __int64 v78; // rax
  const char *v79; // rsi
  __int64 v80; // rax
  int pKeyFieldNamea; // [rsp+10h] [rbp-120h]
  const char *pKeyFieldName; // [rsp+10h] [rbp-120h]
  const char *pKeyFieldNamep; // [rsp+10h] [rbp-120h]
  const char *pKeyFieldNameb; // [rsp+10h] [rbp-120h]
  const char *pKeyFieldNameo; // [rsp+10h] [rbp-120h]
  const char *pKeyFieldNamen; // [rsp+10h] [rbp-120h]
  const char *pKeyFieldNamem; // [rsp+10h] [rbp-120h]
  const char *pKeyFieldNamel; // [rsp+10h] [rbp-120h]
  const char *pKeyFieldNamek; // [rsp+10h] [rbp-120h]
  const char *pKeyFieldNamej; // [rsp+10h] [rbp-120h]
  const char *pKeyFieldNamei; // [rsp+10h] [rbp-120h]
  const char *pKeyFieldNameh; // [rsp+10h] [rbp-120h]
  const char *pKeyFieldNameg; // [rsp+10h] [rbp-120h]
  const char *pKeyFieldNamef; // [rsp+10h] [rbp-120h]
  const char *pKeyFieldNamee; // [rsp+10h] [rbp-120h]
  const char *pKeyFieldNamed; // [rsp+10h] [rbp-120h]
  const char *pKeyFieldNamec; // [rsp+10h] [rbp-120h]
  char *s1a; // [rsp+18h] [rbp-118h]
  char *s1; // [rsp+18h] [rbp-118h]
  HSCRIPT hFunc; // [rsp+38h] [rbp-F8h]
  char hFunca; // [rsp+38h] [rbp-F8h]
  int nUnserializerCounta; // [rsp+58h] [rbp-D8h]
  CSchemaType *pType; // [rsp+78h] [rbp-B8h] BYREF
  ScriptVariant_t entityUtils; // [rsp+80h] [rbp-B0h] BYREF
  ScriptVariant_t hField; // [rsp+90h] [rbp-A0h] BYREF
  CUtlVector<ComponentUnserializerClassInfo_t*,CUtlMemory<ComponentUnserializerClassInfo_t*,int> > unserializerInfo; // [rsp+A0h] [rbp-90h] BYREF
  const char *v112; // [rsp+C0h] [rbp-70h] BYREF
  __int16 v113; // [rsp+C8h] [rbp-68h]
  __int16 v114; // [rsp+CAh] [rbp-66h]
  const char *v115; // [rsp+D0h] [rbp-60h] BYREF
  __int16 v116; // [rsp+D8h] [rbp-58h]
  __int16 v117; // [rsp+DAh] [rbp-56h]
  KeyValues fakeKey; // [rsp+E0h] [rbp-50h] BYREF
  unsigned __int64 v119; // [rsp+F8h] [rbp-38h]

  nUnserializerCounta = nUnserializerCount;
  v119 = __readfsqword(0x28u);
  if ( pOldKeyValues != 0 )
  {
    unserializerInfo.m_Size = 0;
    unserializerInfo.m_Memory.m_pMemory = 0;
    unserializerInfo.m_Memory.m_nAllocationCount = 0;
    unserializerInfo.m_Memory.m_nGrowSize = 0;
    if ( nUnserializerCount == 0 && pFgdFieldDict == 0 )
    {
      if ( g_pEntitySystem != 0
        && (ClassByDesignName = CEntitySystem::FindClassByDesignName(g_pEntitySystem, pClassName, 0)) != 0 )
      {
        CEntityClass::GetEntityUnserializer(ClassByDesignName, &unserializerInfo);
        nUnserializerCounta = unserializerInfo.m_Size;
        ppInfo = unserializerInfo.m_Memory.m_pMemory;
      }
      else
      {
        nUnserializerCounta = 0;
      }
    }
    FirstValue = KeyValues::GetFirstValue(pOldKeyValues);
    if ( FirstValue != 0 )
    {
      while ( 1 )
      {
        Name = KeyValues::GetName(FirstValue);
        pType = 0;
        v11 = ppInfo;
        if ( nUnserializerCounta > 0 )
        {
          while ( !FindUnserializerInfo(Name, *v11, &pType) )
          {
            if ( ++v11 == &ppInfo[(nUnserializerCounta - 1) + 1] )
              goto LABEL_24;
          }
LABEL_12:
          m_pType = pType;
          goto LABEL_13;
        }
LABEL_24:
        v23 = 0;
        if ( pScriptVM != 0 )
          break;
LABEL_48:
        if ( pFgdFieldDict != 0 )
        {
          CUtlSymbolTable::Find(&entityUtils, &pFgdFieldDict->m_SymbolTable, Name);
          if ( LOWORD(entityUtils.m_float) != 0xFFFF )
          {
            m_pType = pFgdFieldDict->m_Vector.m_Memory.m_pMemory[LOWORD(entityUtils.m_uint)].m_pType;
            pType = m_pType;
            goto LABEL_13;
          }
          if ( !bCompileTime )
            goto LABEL_57;
        }
        else if ( !bCompileTime )
        {
          goto LABEL_56;
        }
        if ( `guard variable for'ConvertMapDataKV(char const*,CEntityKeyValues *,int,ComponentUnserializerClassInfo_t const**,IScriptVM *,CUtlStringMap<FGDFieldInfo_t,CUtlSymbolTable> *,KeyValues *,bool)::nPrefixLen == 0
          && __cxa_guard_acquire(&`guard variable for'ConvertMapDataKV(char const*,CEntityKeyValues *,int,ComponentUnserializerClassInfo_t const**,IScriptVM *,CUtlStringMap<FGDFieldInfo_t,CUtlSymbolTable> *,KeyValues *,bool)::nPrefixLen) != 0 )
        {
          ConvertMapDataKV(char const*,CEntityKeyValues *,int,ComponentUnserializerClassInfo_t const**,IScriptVM *,CUtlStringMap<FGDFieldInfo_t,CUtlSymbolTable> *,KeyValues *,bool)::nPrefixLen = 6;
          __cxa_guard_release(&`guard variable for'ConvertMapDataKV(char const*,CEntityKeyValues *,int,ComponentUnserializerClassInfo_t const**,IScriptVM *,CUtlStringMap<FGDFieldInfo_t,CUtlSymbolTable> *,KeyValues *,bool)::nPrefixLen);
        }
        if ( KeyValues::GetDataType(FirstValue, 0) == CKeyValues_Data::types_t::TYPE_STRING
          || _V_strncmp(
               Name,
               "_attr_",
               ConvertMapDataKV(char const*,CEntityKeyValues *,int,ComponentUnserializerClassInfo_t const**,IScriptVM *,CUtlStringMap<FGDFieldInfo_t,CUtlSymbolTable> *,KeyValues *,bool)::nPrefixLen) != 0 )
        {
LABEL_57:
          m_pType = SchemaTypeOf<CUtlString>(void)::s_pTypeOf;
          if ( SchemaTypeOf<CUtlString>(void)::s_pTypeOf == 0 )
          {
            v34 = *(*g_pSchemaSystem + 104LL);
            NameOfModule = GetNameOfModule();
            v36 = v34(g_pSchemaSystem, NameOfModule);
            m_pType = (*(*v36 + 56LL))(
                        v36,
                        "CUtlString",
                        3003,
                        CAtomicManipulator<CUtlString>::Get(void)::val,
                        CSchemaManipulator<CUtlString>::StaticAccessor(void)::m);
            SchemaTypeOf<CUtlString>(void)::s_pTypeOf = m_pType;
          }
          pType = m_pType;
          goto LABEL_13;
        }
        pType = 0;
        m_pType = 0;
LABEL_13:
        ConvertTextDataToNewKeyValues(pKeyValues, FirstValue, m_pType);
        FirstValue = KeyValues::GetNextValue(FirstValue);
        if ( FirstValue == 0 )
          goto LABEL_14;
      }
      entityUtils.m_flags = 0;
      entityUtils.m_type = 0;
      entityUtils.m_uint64 = 0;
      if ( (*(*pScriptVM + 312LL))(pScriptVM, 0, "EntityUtils", &entityUtils) == 0
        || (v24 = (*(*pScriptVM + 144LL))(pScriptVM, "GetClassFieldType", entityUtils.m_uint64, 0), hFunc = v24, v24 == 0) )
      {
        v32 = 1;
        v23 = 0;
        goto LABEL_45;
      }
      hField.m_type = 0;
      hField.m_flags = 0;
      v114 = 0;
      v117 = 0;
      v113 = 30;
      hField.m_uint64 = 0;
      v115 = Name;
      v112 = pClassName;
      v116 = 30;
      v25 = (*(*pScriptVM + 160LL))(pScriptVM, v24, &v112, 2, &hField, 0, 1);
      v26 = &v115;
      p_m_nAllocationCount = &unserializerInfo.m_Memory.m_nAllocationCount;
      do
      {
        if ( (*(v26 + 10) & 1) != 0 )
        {
          pKeyFieldNamea = v25;
          s1a = p_m_nAllocationCount;
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *v26);
          v25 = pKeyFieldNamea;
          *(v26 + 5) &= ~1u;
          p_m_nAllocationCount = s1a;
        }
        *v26 = 0;
        v26 -= 4;
        *(v26 + 12) = 0;
      }
      while ( v26 != p_m_nAllocationCount );
      if ( v25 != 0 || hField.m_type == 0 )
      {
        v23 = 0;
LABEL_42:
        (*(*pScriptVM + 152LL))(pScriptVM, hFunc);
        if ( (hField.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, hField.m_uint64);
        v32 = v23 ^ 1;
LABEL_45:
        if ( (entityUtils.m_flags & 1) != 0 )
        {
          hFunca = v32;
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, entityUtils.m_uint64);
          v32 = hFunca;
        }
        if ( v32 == 0 )
        {
LABEL_56:
          if ( v23 == 0 )
            goto LABEL_57;
          goto LABEL_12;
        }
        goto LABEL_48;
      }
      if ( hField.m_type == 30 )
      {
        s1 = hField.m_uint64;
        if ( `guard variable for'GetVScriptTypeToSchemaType(void)::g_stringToSchemaType != 0 )
        {
LABEL_35:
          v28 = GetVScriptTypeToSchemaType(void)::g_stringToSchemaType;
          v29 = &GetVScriptTypeToSchemaType(void)::g_stringToSchemaType;
          if ( GetVScriptTypeToSchemaType(void)::g_stringToSchemaType != 0 )
          {
            pKeyFieldName = Name;
            v30 = &GetVScriptTypeToSchemaType(void)::g_stringToSchemaType;
            do
            {
              if ( s1 != 0 && strcmp(s1, v28) == 0 )
                break;
              v30 += 2;
              v28 = *v30;
            }
            while ( *v30 != 0 );
            v29 = v30;
            Name = pKeyFieldName;
          }
          v31 = v29[1];
          v23 = 1;
          pType = v31;
          goto LABEL_42;
        }
      }
      else
      {
        CVariantBase<CVariantDefaultAllocator>::AssignTo(
          &hField,
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          0x200u);
        s1 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        if ( `guard variable for'GetVScriptTypeToSchemaType(void)::g_stringToSchemaType != 0 )
          goto LABEL_35;
      }
      if ( __cxa_guard_acquire(&`guard variable for'GetVScriptTypeToSchemaType(void)::g_stringToSchemaType) != 0 )
      {
        v37 = SchemaTypeOf<bool>(void)::s_pTypeOf;
        if ( SchemaTypeOf<bool>(void)::s_pTypeOf == 0 )
        {
          pKeyFieldNameb = *(*g_pSchemaSystem + 104LL);
          v53 = GetNameOfModule();
          v54 = (pKeyFieldNameb)(g_pSchemaSystem, v53);
          v37 = (*(*v54 + 40LL))(v54, 13);
          SchemaTypeOf<bool>(void)::s_pTypeOf = v37;
        }
        qword_4A6A6C8 = v37;
        v38 = SchemaTypeOf<char>(void)::s_pTypeOf;
        if ( SchemaTypeOf<char>(void)::s_pTypeOf == 0 )
        {
          pKeyFieldNamec = *(*g_pSchemaSystem + 104LL);
          v79 = GetNameOfModule();
          v80 = (pKeyFieldNamec)(g_pSchemaSystem, v79);
          v38 = (*(*v80 + 40LL))(v80, 2);
          SchemaTypeOf<char>(void)::s_pTypeOf = v38;
        }
        qword_4A6A6D8 = v38;
        v39 = SchemaTypeOf<CUtlString>(void)::s_pTypeOf;
        if ( SchemaTypeOf<CUtlString>(void)::s_pTypeOf == 0 )
        {
          pKeyFieldNamed = *(*g_pSchemaSystem + 104LL);
          v77 = GetNameOfModule();
          v78 = (pKeyFieldNamed)(g_pSchemaSystem, v77);
          v39 = (*(*v78 + 56LL))(
                  v78,
                  "CUtlString",
                  3003,
                  CAtomicManipulator<CUtlString>::Get(void)::val,
                  CSchemaManipulator<CUtlString>::StaticAccessor(void)::m);
          SchemaTypeOf<CUtlString>(void)::s_pTypeOf = v39;
        }
        qword_4A6A6E8 = v39;
        v40 = SchemaTypeOf<CUtlStringToken>(void)::s_pTypeOf;
        if ( SchemaTypeOf<CUtlStringToken>(void)::s_pTypeOf == 0 )
        {
          pKeyFieldNamee = *(*g_pSchemaSystem + 104LL);
          v75 = GetNameOfModule();
          v76 = (pKeyFieldNamee)(g_pSchemaSystem, v75);
          v40 = (*(*v76 + 56LL))(
                  v76,
                  "CUtlStringToken",
                  3010,
                  CAtomicManipulator<CUtlStringToken>::Get(void)::val,
                  CSchemaManipulator<CUtlStringToken>::StaticAccessor(void)::m);
          SchemaTypeOf<CUtlStringToken>(void)::s_pTypeOf = v40;
        }
        qword_4A6A6F8 = v40;
        v41 = SchemaTypeOf<int>(void)::s_pTypeOf;
        if ( SchemaTypeOf<int>(void)::s_pTypeOf == 0 )
        {
          pKeyFieldNamef = *(*g_pSchemaSystem + 104LL);
          v73 = GetNameOfModule();
          v74 = (pKeyFieldNamef)(g_pSchemaSystem, v73);
          v41 = (*(*v74 + 40LL))(v74, 7);
          SchemaTypeOf<int>(void)::s_pTypeOf = v41;
        }
        qword_4A6A708 = v41;
        v42 = SchemaTypeOf<float>(void)::s_pTypeOf;
        if ( SchemaTypeOf<float>(void)::s_pTypeOf == 0 )
        {
          pKeyFieldNameg = *(*g_pSchemaSystem + 104LL);
          v71 = GetNameOfModule();
          v72 = (pKeyFieldNameg)(g_pSchemaSystem, v71);
          v42 = (*(*v72 + 40LL))(v72, 11);
          SchemaTypeOf<float>(void)::s_pTypeOf = v42;
        }
        qword_4A6A718 = v42;
        v43 = SchemaTypeOf<double>(void)::s_pTypeOf;
        if ( SchemaTypeOf<double>(void)::s_pTypeOf == 0 )
        {
          pKeyFieldNameh = *(*g_pSchemaSystem + 104LL);
          v69 = GetNameOfModule();
          v70 = (pKeyFieldNameh)(g_pSchemaSystem, v69);
          v43 = (*(*v70 + 40LL))(v70, 12);
          SchemaTypeOf<double>(void)::s_pTypeOf = v43;
        }
        qword_4A6A728 = v43;
        v44 = SchemaTypeOf<int>(void)::s_pTypeOf;
        if ( SchemaTypeOf<int>(void)::s_pTypeOf == 0 )
        {
          pKeyFieldNamei = *(*g_pSchemaSystem + 104LL);
          v67 = GetNameOfModule();
          v68 = (pKeyFieldNamei)(g_pSchemaSystem, v67);
          v44 = (*(*v68 + 40LL))(v68, 7);
          SchemaTypeOf<int>(void)::s_pTypeOf = v44;
        }
        qword_4A6A738 = v44;
        v45 = SchemaTypeOf<Vector>(void)::s_pTypeOf;
        if ( SchemaTypeOf<Vector>(void)::s_pTypeOf == 0 )
        {
          pKeyFieldNamej = *(*g_pSchemaSystem + 104LL);
          v65 = GetNameOfModule();
          v66 = (pKeyFieldNamej)(g_pSchemaSystem, v65);
          v45 = (*(*v66 + 56LL))(
                  v66,
                  "Vector",
                  2010,
                  CAtomicManipulator<Vector>::Get(void)::val,
                  CSchemaManipulator<Vector>::StaticAccessor(void)::m);
          SchemaTypeOf<Vector>(void)::s_pTypeOf = v45;
        }
        qword_4A6A748 = v45;
        v46 = SchemaTypeOf<Vector2D>(void)::s_pTypeOf;
        if ( SchemaTypeOf<Vector2D>(void)::s_pTypeOf == 0 )
        {
          pKeyFieldNamek = *(*g_pSchemaSystem + 104LL);
          v63 = GetNameOfModule();
          v64 = (pKeyFieldNamek)(g_pSchemaSystem, v63);
          v46 = (*(*v64 + 56LL))(
                  v64,
                  "Vector2D",
                  2001,
                  CAtomicManipulator<Vector2D>::Get(void)::val,
                  CSchemaManipulator<Vector2D>::StaticAccessor(void)::m);
          SchemaTypeOf<Vector2D>(void)::s_pTypeOf = v46;
        }
        qword_4A6A758 = v46;
        v47 = SchemaTypeOf<Vector4D>(void)::s_pTypeOf;
        if ( SchemaTypeOf<Vector4D>(void)::s_pTypeOf == 0 )
        {
          pKeyFieldNamel = *(*g_pSchemaSystem + 104LL);
          v61 = GetNameOfModule();
          v62 = (pKeyFieldNamel)(g_pSchemaSystem, v61);
          v47 = (*(*v62 + 56LL))(
                  v62,
                  "Vector4D",
                  2002,
                  CAtomicManipulator<Vector4D>::Get(void)::val,
                  &CSchemaManipulator<Vector4D>::StaticAccessor(void)::m);
          SchemaTypeOf<Vector4D>(void)::s_pTypeOf = v47;
        }
        qword_4A6A768 = v47;
        v48 = SchemaTypeOf<QAngle>(void)::s_pTypeOf;
        if ( SchemaTypeOf<QAngle>(void)::s_pTypeOf == 0 )
        {
          pKeyFieldNamem = *(*g_pSchemaSystem + 104LL);
          v59 = GetNameOfModule();
          v60 = (pKeyFieldNamem)(g_pSchemaSystem, v59);
          v48 = (*(*v60 + 56LL))(
                  v60,
                  "QAngle",
                  2005,
                  CAtomicManipulator<QAngle>::Get(void)::val,
                  CSchemaManipulator<QAngle>::StaticAccessor(void)::m);
          SchemaTypeOf<QAngle>(void)::s_pTypeOf = v48;
        }
        qword_4A6A778 = v48;
        v49 = SchemaTypeOf<Quaternion>(void)::s_pTypeOf;
        if ( SchemaTypeOf<Quaternion>(void)::s_pTypeOf == 0 )
        {
          pKeyFieldNamen = *(*g_pSchemaSystem + 104LL);
          v57 = GetNameOfModule();
          v58 = (pKeyFieldNamen)(g_pSchemaSystem, v57);
          v49 = (*(*v58 + 56LL))(
                  v58,
                  "Quaternion",
                  2006,
                  CAtomicManipulator<Quaternion>::Get(void)::val,
                  &CSchemaManipulator<Quaternion>::StaticAccessor(void)::m);
          SchemaTypeOf<Quaternion>(void)::s_pTypeOf = v49;
        }
        qword_4A6A788 = v49;
        v50 = SchemaTypeOf<CUtlString>(void)::s_pTypeOf;
        if ( SchemaTypeOf<CUtlString>(void)::s_pTypeOf == 0 )
        {
          pKeyFieldNameo = *(*g_pSchemaSystem + 104LL);
          v55 = GetNameOfModule();
          v56 = (pKeyFieldNameo)(g_pSchemaSystem, v55);
          v50 = (*(*v56 + 56LL))(
                  v56,
                  "CUtlString",
                  3003,
                  CAtomicManipulator<CUtlString>::Get(void)::val,
                  CSchemaManipulator<CUtlString>::StaticAccessor(void)::m);
          SchemaTypeOf<CUtlString>(void)::s_pTypeOf = v50;
        }
        qword_4A6A798 = v50;
        pKeyFieldNamep = *(*g_pSchemaSystem + 104LL);
        v51 = GetNameOfModule();
        v52 = (pKeyFieldNamep)(g_pSchemaSystem, v51);
        qword_4A6A7A8 = (*(*v52 + 40LL))(v52, 0);
        __cxa_guard_release(&`guard variable for'GetVScriptTypeToSchemaType(void)::g_stringToSchemaType);
      }
      goto LABEL_35;
    }
LABEL_14:
    if ( pFgdFieldDict != 0 && pFgdFieldDict->m_SymbolTable.m_Lookup.m_NumElements != 0 )
    {
      v13 = 0;
      v14 = 0;
      do
      {
        LOWORD(hField.m_float) = v14;
        v15 = CUtlSymbolTable::String(&pFgdFieldDict->m_SymbolTable, &hField);
        v16.m_nHashCode = 0;
        v17 = v15;
        if ( v15 != 0 && *v15 != 0 )
        {
          v33 = MurmurHash2LowerCase(v15, 0x31415926u);
          if ( g_bUpdateStringTokenDatabase )
            RegisterStringToken(v33, v17, 0, 1);
          v16.m_nHashCode = v33;
        }
        if ( !CEntityKeyValues::HasValue(pKeyValues, v16) )
        {
          v18 = &pFgdFieldDict->m_Vector.m_Memory.m_pMemory[v13];
          m_pString = v18->m_defaultValue.m_pString;
          if ( m_pString != 0 && *m_pString != 0 )
          {
            v20 = CUtlString::Get(&v18->m_defaultValue);
            KeyValues::KeyValues(&fakeKey, "tmp", v17, v20);
            v21 = v18->m_pType;
            v22 = KeyValues::GetFirstValue(&fakeKey);
            ConvertTextDataToNewKeyValues(pKeyValues, v22, v21);
            KeyValues::~KeyValues(&fakeKey);
          }
        }
        ++v14;
        ++v13;
      }
      while ( v14 < pFgdFieldDict->m_SymbolTable.m_Lookup.m_NumElements );
    }
    unserializerInfo.m_Size = 0;
    if ( (unserializerInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<ComponentUnserializerClassInfo_t *,int>::Purge(&unserializerInfo.m_Memory);
      if ( (unserializerInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<ComponentUnserializerClassInfo_t *,int>::Purge(&unserializerInfo.m_Memory);
    }
  }
}


// CEntityKeyValuesModifyScope::BeginModify  (line 987, @0x00000000030a3970, libserver.so)  // inlines: Activate
// callers: CEntitySpawnerBase<CDevtestHierarchyChild>::StartNewEntity, CEntitySpawner<CDevtestHierarchyChild>::StartNewEntity, CDevtestHierarchy2::Spawn, CEntitySpawnerBase<CBaseEntity>::StartNewEntity, CEntitySpawnerBase<CTriggerMultiple>::StartNewEntity, CEntitySpawner<CTriggerMultiple>::StartNewEntity, CEntitySpawnerAsyncBase<CBaseEntity>::StartNewEntity, CEntitySpawner<CBaseEntity>::StartNewEntity, CEntitySpawner<CBaseEntity>::CEntitySpawner, CEntitySpawnerAsync<CBaseEntity>::CEntitySpawnerAsync, CreateTriggerInternal, Script_CreateTriggerRadiusApproximate (208 total)
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityVariantAllocator::sm_pMemoryPool
void __fastcall CEntityKeyValuesModifyScope::BeginModify(
        CEntityKeyValuesModifyScope *const this,
        CEntityKeyValues *pKeyValues)
{
  CUtlScratchMemoryPool *p_m_memoryPool; // rax

  this->m_pKeyValues = pKeyValues;
  if ( pKeyValues != 0 )
  {
    p_m_memoryPool = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    if ( CEntityKeyValuesModifyScope::sm_pAllocatorOverride == 0 )
      p_m_memoryPool = &pKeyValues->m_memoryPool;
    this->m_pPrevAllocator = p_m_memoryPool;
    CEntityVariantAllocator::sm_pMemoryPool = p_m_memoryPool;
  }
}


// CEntityKeyValuesModifyScope::Release  (line 1007, @0x00000000030a39a0, libserver.so)  // inlines: Activate
// callers: CEntitySpawnerBase<CDevtestHierarchyChild>::~CEntitySpawnerBase, CDevtestHierarchy2::Spawn, CEntitySpawnerBase<CBaseEntity>::~CEntitySpawnerBase, CEntitySpawnerBase<CTriggerMultiple>::~CEntitySpawnerBase, CreateTriggerInternal, Script_CreateTriggerRadiusApproximate, CScriptEntityIterator::CreateByClassname, Script_PrecacheEntityFromTable, Script_SpawnEntityListFromTableSynchronous, Script_SpawnEntityFromTableSynchronous, Script_SpawnEntityListFromTableAsynchronous, Script_SpawnEntityGroupFromTable (154 total)
// globals: CEntityVariantAllocator::sm_pMemoryPool
void __fastcall CEntityKeyValuesModifyScope::Release(CEntityKeyValuesModifyScope *const this)
{
  if ( this->m_pKeyValues != 0 )
  {
    CEntityVariantAllocator::sm_pMemoryPool = 0;
    this->m_pKeyValues = 0;
  }
}


