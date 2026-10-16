
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase  (line 315, @0x0000000001ea4290, libserver.so)  // inlines: CInterlockedIntT, CUtlMemoryPool, ThreadInterlockedExchange, operator=
// calls: CUtlMemoryPoolBase::CUtlMemoryPoolBase
// callers: CDevtestHierarchy::GetEntityClassInternal, CDevtestHierarchyChild::GetEntityClassInternal, CDevtestHierarchy2::GetEntityClassInternal, CLightDirectionalEntity::GetEntityClassInternal, CTonemapController2::GetEntityClassInternal, CPointEntity::GetEntityClassInternal, CInfoTarget::GetEntityClassInternal, CInfoWorldLayer::GetEntityClassInternal, CEnvCubemapBox::GetEntityClassInternal, CTonemapTrigger::GetEntityClassInternal, CFogTrigger::GetEntityClassInternal, CLightEnvironmentEntity::GetEntityClassInternal (429 total)
void __fastcall CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
        CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex> *const this,
        int nAllocationCount)
{
  __int64 i; // rax

  CUtlMemoryPoolBase::CUtlMemoryPoolBase(
    &this->m_EntryMemory,
    48,
    nAllocationCount,
    8,
    MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
    0);
  this->m_ContentionCheck.m_value = 0;
  _InterlockedExchange(&this->m_ContentionCheck.m_value, 0);
  this->m_bNeedsCommit = 0;
  for ( i = 0; i != 16; ++i )
  {
    this->m_aBuckets[i].m_pFirst = 0;
    this->m_aBuckets[i].m_pFirstUncommitted = 0;
  }
}


// CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::RemoveAll  (line 674, @0x0000000001ea54a0, libserver.so)  // inlines: Count, operator int
// calls: CUtlMemoryPoolBase::Clear
void __fastcall CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::RemoveAll(
        CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex> *const this)
{
  volatile int m_value; // eax
  __int64 i; // rdx
  CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::HashFixedData_t *j; // rax

  m_value = this->m_EntryMemory.m_BlocksAllocated.m_value;
  this->m_bNeedsCommit = 0;
  if ( m_value != 0 )
  {
    for ( i = 0; i != 16; ++i )
    {
      for ( j = this->m_aBuckets[i].m_pFirstUncommitted; j != 0; j = j->m_pNext )
        ;
      this->m_aBuckets[i].m_pFirst = 0;
      this->m_aBuckets[i].m_pFirstUncommitted = 0;
    }
    CUtlMemoryPoolBase::Clear(&this->m_EntryMemory);
  }
}


// CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMethod<2048, CUtlSymbolTableLargeBaseTreeEntry_t*, true>, CThreadSpinRWLock>::RemoveAll  (line 674, @0x00000000030c3630, libserver.so)  // inlines: AssignIf, Count, LockForWrite, ThreadInterlockedAssignIf128, ThreadInterlockedIncrement, ThreadPause, TryLockForWrite, operator int, operator++
// calls: ThreadGetCurrentId, CThreadSpinRWLock::SpinLockForWrite(ulong long), CThreadSpinRWLock::UnlockWrite(void), CUtlMemoryPoolBase::Clear
// callers: CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>::~CUtlSymbolTableLargeBase, CEntitySystem::~CEntitySystem, CEntitySystem::FreeAllPooledStrings
// globals: CThreadSpinRWLock::TryLockForWrite(ulong long)::oldValue
void __fastcall CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t *,2048,CUtlSymbolTableLargeBaseTreeEntry_t *,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t *,true>,CThreadSpinRWLock>::RemoveAll(
        CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *const this)
{
  int64 *p_m_nReaders; // r15
  int i; // r12d
  __int64 CurrentId; // rsi
  int64 j; // rax
  __int64 v6; // rax
  __int128 v7; // rt0
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashBucket_t *bucket; // [rsp+8h] [rbp-38h]

  this->m_bNeedsCommit = 0;
  if ( this->m_EntryMemory.m_BlocksAllocated.m_value != 0 )
  {
    p_m_nReaders = &this->m_aBuckets[0].m_lockInfo.m_nReaders;
    for ( i = 2048; i != 0; --i )
    {
      bucket = (p_m_nReaders - 1);
      CurrentId = ThreadGetCurrentId();
      _InterlockedAdd(p_m_nReaders + 2, 1u);
      if ( *p_m_nReaders > 0
        || (v6 = *(p_m_nReaders - 1)) != 0 && CurrentId != v6
        || (v7 = 0u, _InterlockedCompareExchange128(bucket, 0, CurrentId, &v7) == 0) )
      {
        _mm_pause();
        CThreadSpinRWLock::SpinLockForWrite(bucket, CurrentId);
      }
      for ( j = p_m_nReaders[3]; j != 0; j = *(j + 8) )
        ;
      p_m_nReaders[2] = 0;
      p_m_nReaders += 6;
      *(p_m_nReaders - 3) = 0;
      CThreadSpinRWLock::UnlockWrite(bucket);
    }
    CUtlMemoryPoolBase::Clear(&this->m_EntryMemory);
  }
}


// CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMethod<2048, CUtlSymbolTableLargeBaseTreeEntry_t*, true>, CThreadSpinRWLock>::Find  (line 716, @0x00000000030ab960, libserver.so)  // inlines: Compare
// calls: V_stricmp_fast
// callers: CEntitySystem::AllocPooledString, MakeEntitySystemString, CEntitySystem::AddEntityIOEvent, CEntitySystem::UnserializeForPrecache
CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *__fastcall CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t *,2048,CUtlSymbolTableLargeBaseTreeEntry_t *,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t *,true>,CThreadSpinRWLock>::Find(
        const CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *const this,
        CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *uiKey,
        CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *pFirstElement,
        CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *pLastElement)
{
  MemoryPoolGrowType_t *p_m_GrowMode; // r14
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *v7; // rbx

  p_m_GrowMode = &this->m_EntryMemory.m_GrowMode;
  v7 = uiKey;
  if ( pFirstElement == uiKey )
    return 0;
  while ( v7->m_uiKey->m_Hash != *&this->m_EntryMemory.m_BlockSize
       || V_stricmp_fast(v7->m_uiKey->m_String, p_m_GrowMode) != 0 )
  {
    v7 = v7->m_pNext;
    if ( v7 == pFirstElement )
      return 0;
  }
  return v7;
}


// CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMethod<2048, CUtlSymbolTableLargeBaseTreeEntry_t*, true>, CThreadSpinRWLock>::Find  (line 738, @0x00000000030c44b0, libserver.so)  // inlines: Compare, Find, LockForRead, UnlockRead
// calls: V_stricmp_fast, CThreadSpinRWLock::LockForRead(void), CThreadSpinRWLock::UnlockRead(void)
// callers: CEntitySystem::AllocPooledString, MakeEntitySystemString
UtlTSHashHandle_t __fastcall CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t *,2048,CUtlSymbolTableLargeBaseTreeEntry_t *,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t *,true>,CThreadSpinRWLock>::Find(
        const CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock> *const this,
        CUtlSymbolTableLargeBaseTreeEntry_t *uiKey)
{
  LargeSymbolTableHashDecoration_t m_Hash; // rdx
  LargeSymbolTableHashDecoration_t v4; // rax
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashBucket_t *v5; // r12
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *m_pFirst; // rbx
  char *m_String; // r13
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *v9; // r15
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *m_pFirstUncommitted; // rbx
  UtlTSHashHandle_t v11; // rax
  UtlTSHashHandle_t v12; // [rsp+8h] [rbp-38h]

  m_Hash = uiKey->m_Hash;
  v4 = uiKey->m_Hash & 0x7FF;
  v5 = &this->m_aBuckets[v4];
  m_pFirst = this->m_aBuckets[v4].m_pFirst;
  if ( m_pFirst != 0 )
  {
    m_String = uiKey->m_String;
    while ( m_pFirst->m_uiKey->m_Hash != m_Hash || V_stricmp_fast(m_pFirst->m_uiKey->m_String, m_String) != 0 )
    {
      m_pFirst = m_pFirst->m_pNext;
      if ( m_pFirst == 0 )
        goto LABEL_8;
      m_Hash = uiKey->m_Hash;
    }
    return m_pFirst;
  }
  else
  {
LABEL_8:
    if ( v5->m_pFirstUncommitted != 0 )
    {
      CThreadSpinRWLock::LockForRead(v5);
      v9 = v5->m_pFirst;
      m_pFirstUncommitted = v5->m_pFirstUncommitted;
      if ( v9 == m_pFirstUncommitted )
      {
LABEL_16:
        v11 = 0;
      }
      else
      {
        while ( m_pFirstUncommitted->m_uiKey->m_Hash != uiKey->m_Hash
             || V_stricmp_fast(m_pFirstUncommitted->m_uiKey->m_String, uiKey->m_String) != 0 )
        {
          m_pFirstUncommitted = m_pFirstUncommitted->m_pNext;
          if ( v9 == m_pFirstUncommitted )
            goto LABEL_16;
        }
        v11 = m_pFirstUncommitted;
      }
      v12 = v11;
      CThreadSpinRWLock::UnlockRead(v5);
      return v12;
    }
    else
    {
      return 0;
    }
  }
}


// CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod, CUtlTSOpenHashConcurrencyModelLockFree>::Insert  (line 1125, @0x0000000001ef8a70, libserver.so)  // inlines: AddToTail, AddToTail<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::HashTable_t, CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::HashTable_t>, Compare, FindEntry_Inline, Hash, Head, InterlockedAssignIf<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::HashEntry_t>, Lock, LockForPageModification, NewTable, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, UnlockForPageModification
// calls: ThreadGetCurrentId, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint)
// callers: CBaseEntity::SetDamageOptions, CBaseEntity::ScriptSetAttributeIntValue, CBaseEntity::ScriptSetAttributeFloatValue, CBaseVRHandAttachment::OnAttachedToHand, CPropVRHand::InitVRHand, CEntityClass::Unserialize, CAttributeDictSaveDataOps::Restore, CEntityInstance::SetIntAttr
bool __fastcall CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::Insert(
        CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree> *const this,
        unsigned int key,
        unsigned int data,
        unsigned int *pOldData)
{
  __int64 v4; // r14
  __int64 v6; // r12
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree> *v7; // rbx
  unsigned int v8; // r15d
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *m_pHead; // r10
  int m_nCurrentTableSize; // r8d
  int v11; // r8d
  int v12; // eax
  unsigned int v13; // edx
  unsigned __int64 v14; // rcx
  signed __int64 CurrentId; // rsi
  int v17; // r11d
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *v18; // r9
  int v19; // r8d
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *v20; // rsi
  int v21; // eax
  unsigned int m_key; // edx
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *v23; // rtt
  unsigned int *v24; // rax
  unsigned int *v25; // rcx
  int v26; // edx
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *v27; // rdx
  unsigned __int64 v28; // [rsp+0h] [rbp-40h]
  CUtlTSOpenHashConcurrencyModelLockFree *p_m_concurrencyModel; // [rsp+8h] [rbp-38h]

  v4 = data;
  v6 = key;
  v7 = this;
  p_m_concurrencyModel = &this->m_concurrencyModel;
  v8 = key & 0x7FFFFFF;
  m_pHead = this->m_tables.m_pHead;
  v28 = data << 32;
  m_nCurrentTableSize = this->m_nCurrentTableSize;
LABEL_2:
  while ( 1 )
  {
    v11 = m_nCurrentTableSize - 1;
    if ( m_pHead != 0 )
      break;
LABEL_12:
    CurrentId = ThreadGetCurrentId(this);
    if ( CurrentId != v7->m_concurrencyModel.m_mutex.m_ownerID
      && _InterlockedCompareExchange64(p_m_concurrencyModel, CurrentId, 0) != 0 )
    {
      _mm_pause();
      CThreadFastMutex::Lock(p_m_concurrencyModel, CurrentId, 0);
    }
    else
    {
      ++v7->m_concurrencyModel.m_mutex.m_depth;
    }
    v17 = v7->m_nCurrentTableSize;
    v18 = v7->m_tables.m_pHead;
    v19 = v17 - 1;
    this = ((v17 - 1) & v8);
    if ( v7->m_tables.m_pHead != 0 )
    {
      v20 = v7->m_tables.m_pHead;
LABEL_17:
      while ( 2 )
      {
        v21 = (v17 - 1) & v8;
        do
        {
          m_key = v20->m_entries[v21].m_key;
          if ( ((m_key ^ v6) & 0x7FFFFFF) == 0 )
            goto LABEL_21;
          if ( m_key == v7->m_nEmptyKeyValue )
          {
            v20 = v20->m_pNext;
            if ( v20 != 0 )
              goto LABEL_17;
LABEL_21:
            if ( --v7->m_concurrencyModel.m_mutex.m_depth == 0 )
              goto LABEL_38;
            m_pHead = v18;
            m_nCurrentTableSize = v17;
            goto LABEL_2;
          }
          v21 = v19 & (v21 + 1);
        }
        while ( this != v21 );
        v20 = v20->m_pNext;
        if ( v20 != 0 )
          continue;
        break;
      }
    }
    v24 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v19 + 16);
    if ( v7->m_nCurrentTableSize > 0 )
    {
      v25 = v24;
      v26 = 0;
      do
      {
        ++v26;
        v25 += 2;
        *v25 = v7->m_nEmptyKeyValue;
      }
      while ( v26 < v7->m_nCurrentTableSize );
    }
    *v24 = 0;
    v27 = v7->m_tables.m_pHead;
    if ( v7->m_tables.m_pHead != 0 )
    {
      while ( v27->m_pNext != 0 )
        v27 = v27->m_pNext;
      v27->m_pNext = v24;
    }
    else
    {
      v7->m_tables.m_pHead = v24;
    }
    if ( --v7->m_concurrencyModel.m_mutex.m_depth != 0 )
    {
LABEL_25:
      m_nCurrentTableSize = v7->m_nCurrentTableSize;
      m_pHead = v7->m_tables.m_pHead;
    }
    else
    {
LABEL_38:
      ThreadInterlockedExchange64(p_m_concurrencyModel, 0);
      m_nCurrentTableSize = v7->m_nCurrentTableSize;
      m_pHead = v7->m_tables.m_pHead;
    }
  }
LABEL_3:
  v12 = v8 & v11;
  while ( 1 )
  {
    this = &m_pHead->m_entries[v12];
    v13 = this->m_tables.m_pHead;
    if ( ((LODWORD(this->m_tables.m_pHead) ^ v6) & 0x7FFFFFF) == 0 )
      break;
    if ( v13 == v7->m_nEmptyKeyValue )
    {
      m_pHead = m_pHead->m_pNext;
      if ( m_pHead != 0 )
        goto LABEL_3;
      v23 = this->m_tables.m_pHead;
      if ( v23 == _InterlockedCompareExchange64(this, v28 | v6, (HIDWORD(this->m_tables.m_pHead) << 32) | v13) )
        return 0;
      goto LABEL_25;
    }
    v12 = v11 & (v12 + 1);
    if ( (v8 & v11) == v12 )
    {
      m_pHead = m_pHead->m_pNext;
      if ( m_pHead != 0 )
        goto LABEL_3;
      goto LABEL_12;
    }
  }
  if ( pOldData != 0 )
    *pOldData = m_pHead->m_entries[v12].m_value;
  if ( v6 == v13 )
  {
    m_pHead->m_entries[v12].m_value = v4;
    return 1;
  }
  else
  {
    v14 = m_pHead->m_entries[v12].m_value << 32;
    return (v14 | v13) == _InterlockedCompareExchange64(this, (v4 << 32) | v6, v14 | v13);
  }
}


