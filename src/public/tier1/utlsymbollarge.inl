
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul>::AddString  (line 348, @0x0000000002ebae70, libserver.so)  // inlines: AddString, CUtlSymbolLarge, CUtlSymbolLarge_Hash, Element, FindInsertionPosition, FindPoolWithSpace, HashStringFastCaseless, Insert, InsertAt, RightChild, ToSymbol, V_memcpy, V_strlen, memcpy, operator!=, operator(), operator[]
// calls: strlen, CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul>::Find, CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, int> >::AddToTail, MurmurHash2LowerCase, memcpy, V_stricmp_fast, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<true>, true>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::NewNode, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<true>, true>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::LinkToParent
// callers: CEconItemSchema::BInitDefinitionPrefabs, CEconItemSchema::ItemTest_CreateTestItemSet, CEconItemSchema::ItemTesting_DiscardTestItemSet, CEconItemSchema::ItemTesting_DiscardAllTestItemSets, CEconItemAssetInfo::InitAlternateIcons, CEconItemQualityDefinition::BInitFromKV, CEconItemRarityDefinition::BInitFromKV, CEconItemSetDefinition::BInitFromKV, CEconLootListDefinition::operator=, CEconItemAttributeDefinition::BInitFromKV, CEconStyleInfo::BInitFromKV, CEconItemSchema::BInitAutographs (26 total)
CUtlSymbolLarge __fastcall CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::AddString(
        char **a1,
        CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul> *const this,
        const char *pString)
{
  int v6; // eax
  int v7; // r15d
  char *m_String; // rax
  int m_Size; // r9d
  signed int v11; // edx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **m_pMemory; // rsi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v13; // rdi
  int m_SpaceUsed; // eax
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v15; // rsi
  int v16; // r8d
  unsigned int v17; // r14d
  __int64 v18; // rsi
  int v19; // eax
  char *v20; // r14
  __int64 m_Root; // r12
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v22; // rdx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v23; // rdi
  unsigned int v24; // eax
  __int64 m_Right; // rsi
  bool v26; // r15
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v27; // rcx
  CUtlSymbolTableLargeBaseTreeEntry_t *m_Data; // rsi
  unsigned int v29; // eax
  __int64 v30; // r14
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v31; // rcx
  char *v32; // [rsp+10h] [rbp-40h] BYREF
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *src[7]; // [rsp+18h] [rbp-38h] BYREF

  if ( pString != 0 )
  {
    v6 = strlen(pString);
    v7 = v6;
    if ( v6 > 0 && *pString != 0 )
    {
      CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::Find(&v32, this, pString, v6);
      m_String = v32;
      if ( v32 != 0 )
      {
LABEL_7:
        *a1 = m_String;
        return a1;
      }
      m_Size = this->m_StringPools.m_Size;
      v11 = (v7 + 16) & 0xFFFFFFF8;
      if ( m_Size > 0 )
      {
        m_pMemory = this->m_StringPools.m_Memory.m_pMemory;
        v13 = *m_pMemory;
        m_SpaceUsed = (*m_pMemory)->m_SpaceUsed;
        if ( v11 <= (*m_pMemory)->m_TotalLen - m_SpaceUsed )
        {
LABEL_16:
          v20 = v13 + m_SpaceUsed;
          v13->m_SpaceUsed = v11 + m_SpaceUsed;
          *(v20 + 1) = MurmurHash2LowerCase(pString, 0x3501A674u);
          memcpy(v20 + 16, pString, v7);
          v20[v7 + 16] = 0;
          m_Root = this->m_Lookup.m_Root;
          src[0] = (v20 + 8);
          if ( m_Root == -1 )
          {
            v26 = 0;
          }
          else
          {
            v22 = this->m_Lookup.m_Elements.m_pMemory;
            v23 = (v20 + 8);
            while ( 1 )
            {
              v27 = &v22[m_Root];
              m_Data = v27->m_Data;
              if ( *&v23->m_TotalLen == m_Data->m_Hash )
              {
                v29 = V_stricmp_fast(v23->m_Data, m_Data->m_String);
                v22 = this->m_Lookup.m_Elements.m_pMemory;
                v24 = v29 >> 31;
                v27 = &v22[m_Root];
              }
              else
              {
                LOBYTE(v24) = *&v23->m_TotalLen < m_Data->m_Hash;
              }
              m_Right = v27->m_Right;
              v26 = v24 != 0;
              if ( v24 != 0 )
                m_Right = v27->m_Left;
              if ( m_Right == -1 )
                break;
              v23 = src[0];
              m_Root = m_Right;
            }
          }
          v30 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
                  &this->m_Lookup,
                  src);
          CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
            &this->m_Lookup,
            v30,
            m_Root,
            v26);
          v31 = this->m_Lookup.m_Elements.m_pMemory;
          ++this->m_Lookup.m_NumElements;
          m_String = v31[v30].m_Data->m_String;
          goto LABEL_7;
        }
        v15 = m_pMemory + 1;
        v16 = 0;
        while ( ++v16 != m_Size )
        {
          v13 = *v15++;
          m_SpaceUsed = v13->m_SpaceUsed;
          if ( v11 <= v13->m_TotalLen - m_SpaceUsed )
          {
            if ( v16 == -1 )
              break;
            goto LABEL_16;
          }
        }
      }
      if ( (v11 + 12LL) <= 0x800 )
      {
        v17 = 2036;
        v18 = 2048;
      }
      else
      {
        v17 = (v7 + 16) & 0xFFFFFFF8;
        v18 = v11 + 12;
      }
      src[0] = (**g_pMemAlloc)(g_pMemAlloc, v18);
      src[0]->m_TotalLen = v17;
      src[0]->m_SpaceUsed = 0;
      v19 = CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
              &this->m_StringPools,
              src);
      v11 = (v7 + 16) & 0xFFFFFFF8;
      v13 = this->m_StringPools.m_Memory.m_pMemory[v19];
      m_SpaceUsed = v13->m_SpaceUsed;
      goto LABEL_16;
    }
  }
  *a1 = 0;
  return a1;
}


// CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>::AddString  (line 348, @0x00000000030c7100, libserver.so)  // inlines: AddString, Alloc, CUtlSymbolLarge, CUtlSymbolLarge_Hash, Compare, CopyConstruct<CUtlSymbolTableLargeBaseTreeEntry_t*>, Find, FindPoolWithSpace, HashStringFastCaseless, Insert, InsertUncommitted, LockForRead, ToSymbol, UnlockRead, V_memcpy, V_strlen, memcpy, operator!=
// calls: strlen, CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>::Find, CUtlVectorBase<CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true>::StringPool_t*, int> >::AddToTail, MurmurHash2LowerCase, memcpy, V_stricmp_fast, CThreadSpinRWLock::LockForRead(void), CThreadSpinRWLock::UnlockRead(void), CThreadSpinRWLock::LockForWrite, CThreadSpinRWLock::UnlockWrite(void), CUtlMemoryPoolBase::Alloc
// callers: CEntitySystem::DoConstructEntity
CUtlSymbolLarge __fastcall CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::AddString(
        char **a1,
        CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul> *const this,
        const char *pString)
{
  int v6; // eax
  int v7; // r15d
  char *m_String; // rax
  int m_Size; // edx
  signed int v11; // r14d
  CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t **m_pMemory; // rdi
  CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *v13; // r8
  int m_SpaceUsed; // eax
  CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t **v15; // rdi
  int v16; // esi
  unsigned int v17; // edx
  __int64 v18; // rsi
  char *v19; // r14
  CUtlSymbolTableLargeBaseTreeEntry_t *v20; // rcx
  LargeSymbolTableHashDecoration_t m_Hash; // rax
  __int64 v22; // rdx
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashBucket_t *v23; // r15
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *m_pFirst; // rbx
  int v25; // eax
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *v26; // rdx
  CUtlSymbolTableLargeBaseTreeEntry_t *v27; // rcx
  int v28; // eax
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *v29; // rdx
  CUtlSymbolTableLargeBaseTreeEntry_t *v30; // rcx
  int v31; // eax
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *v32; // [rsp+0h] [rbp-50h]
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *v33; // [rsp+0h] [rbp-50h]
  int v34; // [rsp+8h] [rbp-48h]
  char *v35; // [rsp+8h] [rbp-48h]
  CUtlSymbolTableLargeBaseTreeEntry_t *v36; // [rsp+8h] [rbp-48h]
  CUtlSymbolTableLargeBaseTreeEntry_t *v37; // [rsp+8h] [rbp-48h]
  CUtlSymbolTableLargeBaseTreeEntry_t *v38; // [rsp+8h] [rbp-48h]
  CUtlSymbolTableLargeBaseTreeEntry_t *v39; // [rsp+8h] [rbp-48h]
  CUtlSymbolTableLargeBaseTreeEntry_t *v40; // [rsp+8h] [rbp-48h]
  CUtlSymbolTableLargeBaseTreeEntry_t *v41; // [rsp+8h] [rbp-48h]
  CUtlSymbolTableLargeBaseTreeEntry_t *v42; // [rsp+8h] [rbp-48h]
  char *v43; // [rsp+10h] [rbp-40h] BYREF
  CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *src; // [rsp+18h] [rbp-38h] BYREF

  if ( pString != 0 )
  {
    v6 = strlen(pString);
    v7 = v6;
    if ( v6 > 0 && *pString != 0 )
    {
      CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::Find(&v43, this, pString, v6);
      m_String = v43;
      if ( v43 != 0 )
      {
LABEL_7:
        *a1 = m_String;
        return a1;
      }
      m_Size = this->m_StringPools.m_Size;
      v11 = (v7 + 16) & 0xFFFFFFF8;
      if ( m_Size > 0 )
      {
        m_pMemory = this->m_StringPools.m_Memory.m_pMemory;
        v13 = *m_pMemory;
        m_SpaceUsed = (*m_pMemory)->m_SpaceUsed;
        if ( v11 <= (*m_pMemory)->m_TotalLen - m_SpaceUsed )
          goto LABEL_16;
        v15 = m_pMemory + 1;
        v16 = 0;
        while ( ++v16 != m_Size )
        {
          v13 = *v15++;
          m_SpaceUsed = v13->m_SpaceUsed;
          if ( v11 <= v13->m_TotalLen - m_SpaceUsed )
          {
            if ( v16 != -1 )
              goto LABEL_16;
            break;
          }
        }
      }
      if ( (v11 + 12LL) <= 0x800 )
      {
        v17 = 2036;
        v18 = 2048;
      }
      else
      {
        v17 = (v7 + 16) & 0xFFFFFFF8;
        v18 = v11 + 12;
      }
      v34 = v17;
      src = (**g_pMemAlloc)(g_pMemAlloc, v18);
      src->m_TotalLen = v34;
      src->m_SpaceUsed = 0;
      v13 = this->m_StringPools.m_Memory.m_pMemory[CUtlVectorBase<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>>::AddToTail(
                                                     &this->m_StringPools,
                                                     &src)];
      m_SpaceUsed = v13->m_SpaceUsed;
LABEL_16:
      v13->m_SpaceUsed = v11 + m_SpaceUsed;
      v35 = v13 + m_SpaceUsed;
      v19 = v35 + 16;
      *(v35 + 1) = MurmurHash2LowerCase(pString, 0x3501A674u);
      memcpy(v35 + 16, pString, v7);
      v20 = (v35 + 8);
      v35[v7 + 16] = 0;
      m_Hash = *(v35 + 1);
      v22 = m_Hash & 0x7FF;
      v23 = &this->m_Lookup.m_aBuckets[v22];
      m_pFirst = this->m_Lookup.m_aBuckets[v22].m_pFirst;
      if ( m_pFirst != 0 )
      {
        while ( 1 )
        {
          if ( m_Hash == m_pFirst->m_uiKey->m_Hash )
          {
            v36 = v20;
            v25 = V_stricmp_fast(m_pFirst->m_uiKey->m_String, v19);
            v20 = v36;
            if ( v25 == 0 )
              goto LABEL_22;
          }
          m_pFirst = m_pFirst->m_pNext;
          if ( m_pFirst == 0 )
            break;
          m_Hash = v20->m_Hash;
        }
      }
      if ( v23->m_pFirstUncommitted != 0 )
      {
        v37 = v20;
        CThreadSpinRWLock::LockForRead(v23);
        v26 = v23->m_pFirst;
        m_pFirst = v23->m_pFirstUncommitted;
        v27 = v37;
        if ( v26 != m_pFirst )
        {
          while ( 1 )
          {
            if ( m_pFirst->m_uiKey->m_Hash == v27->m_Hash )
            {
              v32 = v26;
              v38 = v27;
              v28 = V_stricmp_fast(m_pFirst->m_uiKey->m_String, v19);
              v27 = v38;
              v26 = v32;
              if ( v28 == 0 )
                break;
            }
            m_pFirst = m_pFirst->m_pNext;
            if ( v26 == m_pFirst )
              goto LABEL_32;
          }
          CThreadSpinRWLock::UnlockRead(v23);
          goto LABEL_22;
        }
LABEL_32:
        v39 = v27;
        CThreadSpinRWLock::UnlockRead(v23);
        v20 = v39;
      }
      v40 = v20;
      CThreadSpinRWLock::LockForWrite(v23);
      v29 = v23->m_pFirst;
      m_pFirst = v23->m_pFirstUncommitted;
      v30 = v40;
      if ( v29 == m_pFirst )
      {
LABEL_39:
        this->m_Lookup.m_bNeedsCommit = 1;
        v42 = v30;
        m_pFirst = CUtlMemoryPoolBase::Alloc(&this->m_Lookup.m_EntryMemory);
        m_pFirst->m_pNext = v23->m_pFirstUncommitted;
        v23->m_pFirstUncommitted = m_pFirst;
        m_pFirst->m_uiKey = v42;
        m_pFirst->m_Data = v42;
      }
      else
      {
        while ( 1 )
        {
          if ( m_pFirst->m_uiKey->m_Hash == v30->m_Hash )
          {
            v33 = v29;
            v41 = v30;
            v31 = V_stricmp_fast(m_pFirst->m_uiKey->m_String, v19);
            v30 = v41;
            v29 = v33;
            if ( v31 == 0 )
              break;
          }
          m_pFirst = m_pFirst->m_pNext;
          if ( v29 == m_pFirst )
            goto LABEL_39;
        }
      }
      CThreadSpinRWLock::UnlockWrite(v23);
LABEL_22:
      m_String = m_pFirst->m_Data->m_String;
      goto LABEL_7;
    }
  }
  *a1 = 0;
  return a1;
}


// CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul>::~CUtlSymbolTableLargeBase  (line 463, @0x000000000257b9e0, libserver.so)  // inlines: Purge, RemoveAll, ~CNonThreadsafeTree, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::Purge, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*, int>::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int>::Purge
// callers: CDotaDictManager::CDotaDictManager, CDOTAGameManager::CDOTAGameManager, SaveKV3Binary
void __fastcall CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::~CUtlSymbolTableLargeBase(
        CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul> *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v4; // rsi
  bool v5; // zf

  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&this->m_Lookup);
  if ( this->m_StringPools.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v4 = this->m_StringPools.m_Memory.m_pMemory[v2++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v4);
    }
    while ( v3 < this->m_StringPools.m_Size );
  }
  v5 = (this->m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_StringPools.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_StringPools.m_Memory);
    v5 = (this->m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_StringPools.m_Size = 0;
    if ( v5 )
    {
      CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_StringPools.m_Memory);
      if ( (this->m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_StringPools.m_Memory);
    }
  }
  else
  {
    this->m_StringPools.m_Size = 0;
  }
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&this->m_Lookup);
  if ( (this->m_Lookup.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>::Purge(&this->m_Lookup.m_Elements);
}


// CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul>::~CUtlSymbolTableLargeBase  (line 463, @0x000000000257bcf0, libserver.so)  // inlines: Purge, RemoveAll, ~CNonThreadsafeTree, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<true>, true>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::Purge, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, int>::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int>::Purge
void __fastcall CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::~CUtlSymbolTableLargeBase(
        CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul> *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v4; // rsi
  bool v5; // zf

  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&this->m_Lookup);
  if ( this->m_StringPools.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v4 = this->m_StringPools.m_Memory.m_pMemory[v2++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v4);
    }
    while ( v3 < this->m_StringPools.m_Size );
  }
  v5 = (this->m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_StringPools.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>::Purge(&this->m_StringPools.m_Memory);
    v5 = (this->m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_StringPools.m_Size = 0;
    if ( v5 )
    {
      CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>::Purge(&this->m_StringPools.m_Memory);
      if ( (this->m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>::Purge(&this->m_StringPools.m_Memory);
    }
  }
  else
  {
    this->m_StringPools.m_Size = 0;
  }
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&this->m_Lookup);
  if ( (this->m_Lookup.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>::Purge(&this->m_Lookup.m_Elements);
}


// CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>::~CUtlSymbolTableLargeBase  (line 463, @0x00000000030c3730, libserver.so)  // inlines: AssignIf, Count, LockForWrite, Purge, RemoveAll, ThreadInterlockedAssignIf128, ThreadInterlockedIncrement, ThreadPause, TryLockForWrite, operator int, operator++, ~CThreadsafeTree, ~CUtlMemory, ~CUtlMemoryPool, ~CUtlTSHash, ~CUtlTSHashBase, ~CUtlVector, ~CUtlVectorBase
// calls: ThreadGetCurrentId, CThreadSpinRWLock::SpinLockForWrite(ulong long), CThreadSpinRWLock::UnlockWrite(void), CUtlMemoryPoolBase::Clear, CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMethod<2048, CUtlSymbolTableLargeBaseTreeEntry_t*, true>, CThreadSpinRWLock>::RemoveAll, CUtlMemoryPoolBase::~CUtlMemoryPoolBase, CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true>::StringPool_t*, int>::Purge
// callers: CEntitySystem::CEntitySystem
// globals: CThreadSpinRWLock::TryLockForWrite(ulong long)::oldValue
void __fastcall CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::~CUtlSymbolTableLargeBase(
        CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul> *const this)
{
  int64 *p_m_nReaders; // r15
  int v3; // r12d
  __int64 CurrentId; // rsi
  int64 i; // rax
  __int64 v6; // r12
  int v7; // ebx
  CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *v8; // rsi
  bool v9; // zf
  __int64 v10; // rax
  __int128 v11; // rt0
  CThreadSpinRWLock *v12; // [rsp+8h] [rbp-38h]

  p_m_nReaders = &this->m_Lookup.m_aBuckets[0].m_lockInfo.m_nReaders;
  v3 = 0;
  this->m_Lookup.m_bNeedsCommit = 0;
  if ( this->m_Lookup.m_EntryMemory.m_BlocksAllocated.m_value != 0 )
  {
    do
    {
      v12 = (p_m_nReaders - 1);
      CurrentId = ThreadGetCurrentId();
      _InterlockedAdd(p_m_nReaders + 2, 1u);
      if ( *p_m_nReaders > 0
        || (v10 = *(p_m_nReaders - 1)) != 0 && CurrentId != v10
        || (v11 = 0u, _InterlockedCompareExchange128(v12, 0, CurrentId, &v11) == 0) )
      {
        _mm_pause();
        CThreadSpinRWLock::SpinLockForWrite(v12, CurrentId);
      }
      for ( i = p_m_nReaders[3]; i != 0; i = *(i + 8) )
        ;
      p_m_nReaders[2] = 0;
      ++v3;
      p_m_nReaders[3] = 0;
      p_m_nReaders += 6;
      CThreadSpinRWLock::UnlockWrite(v12);
    }
    while ( v3 != 2048 );
    CUtlMemoryPoolBase::Clear(&this->m_Lookup.m_EntryMemory);
  }
  if ( this->m_StringPools.m_Size > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      ++v7;
      v8 = this->m_StringPools.m_Memory.m_pMemory[v6++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8);
    }
    while ( v7 < this->m_StringPools.m_Size );
  }
  v9 = (this->m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_StringPools.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>::Purge(&this->m_StringPools.m_Memory);
    v9 = (this->m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_StringPools.m_Size = 0;
    if ( v9 )
    {
      CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>::Purge(&this->m_StringPools.m_Memory);
      if ( (this->m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>::Purge(&this->m_StringPools.m_Memory);
    }
  }
  else
  {
    this->m_StringPools.m_Size = 0;
  }
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t *,2048,CUtlSymbolTableLargeBaseTreeEntry_t *,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t *,true>,CThreadSpinRWLock>::RemoveAll(&this->m_Lookup);
  CUtlMemoryPoolBase::~CUtlMemoryPoolBase(&this->m_Lookup.m_EntryMemory);
}


// CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul>::Find  (line 470, @0x0000000002571e30, libserver.so)  // inlines: CUtlSymbolLarge, CUtlSymbolLarge_Hash, Element, Find, LeftChild, RightChild, ToSymbol, V_memcpy, memcpy, operator(), operator[]
// calls: HashString, memcpy, strcmp, __stack_chk_fail
// callers: CDOTAGameManager::GetAbilityIndex, CDotaDict::DestroyEntry, CDotaDictManager::DestroyDictionary, CDotaDict::CreateEntry, CDOTAGameManager::SetupItemSymbolsAndDictionary, CDOTAGameManager::SetupCustomItemSymbolsAndDictionary, CDotaDictManager::CreateDictionary, CGridStringPrinter::SetString, CGridStringPrinter::SetColumnHeader, CKeyValues3Context::AllocSharedString, GatherSymbols_R
CUtlSymbolLarge __fastcall CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::Find(
        char **a1,
        const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul> *const this,
        const char *pString,
        int nStringLen)
{
  void *v8; // rsp
  size_t v9; // r14
  __int64 m_Root; // rbx
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *m_pMemory; // r8
  LargeSymbolTableHashDecoration_t v12; // r14
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v13; // r12
  CUtlSymbolTableLargeBaseTreeEntry_t *m_Data; // r13
  unsigned int v15; // eax
  int v16; // eax
  const char *v17; // rdi
  unsigned int v18; // eax
  void *v19; // [rsp+8h] [rbp-58h]
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v20; // [rsp+10h] [rbp-50h] BYREF
  char *nStringLena; // [rsp+18h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  if ( pString != 0 && nStringLen > 0 && *pString != 0 )
  {
    LODWORD(nStringLena) = nStringLen;
    v8 = alloca(((nStringLen + 1 + 39LL) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    v9 = nStringLen;
    *(&v20 & 0xFFFFFFFFFFFFFFEFLL) = HashString(pString);
    v19 = ((&v20 & 0xFFFFFFFFFFFFFFEFLL) + 8);
    memcpy(v19, pString, v9);
    *((&v20 & 0xFFFFFFFFFFFFFFEFLL) + v9 + 8) = 0;
    m_Root = this->m_Lookup.m_Root;
    if ( m_Root != -1 )
    {
      m_pMemory = this->m_Lookup.m_Elements.m_pMemory;
      v12 = *(&v20 & 0xFFFFFFFFFFFFFFEFLL);
      do
      {
        v13 = &m_pMemory[m_Root];
        m_Data = v13->m_Data;
        if ( m_Data->m_Hash == v12 )
        {
          v20 = m_pMemory;
          nStringLena = m_Data->m_String;
          v16 = strcmp(v19, m_Data->m_String);
          m_pMemory = v20;
          if ( v16 < 0 )
          {
LABEL_8:
            m_Root = v13->m_Left;
            continue;
          }
          v17 = nStringLena;
          nStringLena = v20;
          v18 = strcmp(v17, v19);
          m_pMemory = nStringLena;
          v15 = v18 >> 31;
        }
        else
        {
          if ( m_Data->m_Hash > v12 )
            goto LABEL_8;
          LOBYTE(v15) = m_Data->m_Hash < v12;
        }
        if ( v15 == 0 )
        {
          *a1 = m_Data->m_String;
          return a1;
        }
        m_Root = v13->m_Right;
      }
      while ( m_Root != -1 );
    }
  }
  *a1 = 0;
  return a1;
}


// CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul>::Find  (line 470, @0x000000000257bde0, libserver.so)  // inlines: CUtlSymbolLarge, CUtlSymbolLarge_Hash, Element, Find, HashStringFastCaseless, LeftChild, RightChild, ToSymbol, V_memcpy, memcpy, operator(), operator[]
// calls: MurmurHash2LowerCase, memcpy, V_stricmp_fast, __stack_chk_fail
// callers: CDOTAGameManager::ReloadPortraitData, CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true, 2048ul>::AddString, CEconSchemaSymbol::operator=, CEconSchemaSymbol::CEconSchemaSymbol, CEconItemSchema::FindItemSetByName, CEconItemSchema::GetItemDefinitionByName, CEconItemSchema::FindDefinitionPrefabByName, CEconTool_SupplyCrate::BInitFromKV, CEconItemDefinition::BInitBundleFromKV, CItemLevelingDefinition::BInitFromKV, CEconTool_ItemRedemption::BInitFromKV, IEconTool::IEconTool (23 total)
CUtlSymbolLarge __fastcall CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::Find(
        char **a1,
        const CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul> *const this,
        const char *pString,
        int nStringLen)
{
  void *v8; // rsp
  LargeSymbolTableHashDecoration_t *v9; // r13
  __int64 m_Root; // rbx
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *m_pMemory; // r8
  unsigned __int64 v12; // r12
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v13; // rdx
  CUtlSymbolTableLargeBaseTreeEntry_t *m_Data; // rcx
  unsigned int v15; // eax
  CUtlSymbolTableLargeBaseTreeEntry_t *v16; // rdi
  unsigned int v17; // eax
  unsigned int v18; // eax
  void *v20; // [rsp+8h] [rbp-48h]
  _QWORD v21[8]; // [rsp+10h] [rbp-40h] BYREF

  v21[1] = __readfsqword(0x28u);
  if ( pString != 0 && nStringLen > 0 && *pString != 0 )
  {
    v8 = alloca(((nStringLen + 1 + 39LL) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    v9 = (v21 & 0xFFFFFFFFFFFFFFEFLL);
    *(v21 & 0xFFFFFFFFFFFFFFEFLL) = MurmurHash2LowerCase(pString, 0x3501A674u);
    v20 = ((v21 & 0xFFFFFFFFFFFFFFEFLL) + 8);
    memcpy(v20, pString, nStringLen);
    *(&stru_8.gap0 + (v21 & 0xFFFFFFFFFFFFFFEFLL) + nStringLen) = 0;
    m_Root = this->m_Lookup.m_Root;
    if ( m_Root != -1 )
    {
      m_pMemory = this->m_Lookup.m_Elements.m_pMemory;
      do
      {
        v12 = m_Root;
        v13 = &m_pMemory[m_Root];
        m_Data = v13->m_Data;
        if ( *v9 == m_Data->m_Hash )
        {
          v18 = V_stricmp_fast(v20, m_Data->m_String);
          m_pMemory = this->m_Lookup.m_Elements.m_pMemory;
          v15 = v18 >> 31;
          v13 = &m_pMemory[v12];
        }
        else
        {
          LOBYTE(v15) = *v9 < m_Data->m_Hash;
        }
        if ( v15 != 0 )
        {
          m_Root = v13->m_Left;
        }
        else
        {
          v16 = v13->m_Data;
          LOBYTE(v17) = v16->m_Hash < *v9;
          if ( v16->m_Hash == *v9 )
            v17 = V_stricmp_fast(v16->m_String, v20) >> 31;
          if ( v17 == 0 )
          {
            *a1 = this->m_Lookup.m_Elements.m_pMemory[v12].m_Data->m_String;
            return a1;
          }
          m_pMemory = this->m_Lookup.m_Elements.m_pMemory;
          m_Root = m_pMemory[v12].m_Right;
        }
      }
      while ( m_Root != -1 );
    }
  }
  *a1 = 0;
  return a1;
}


// CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>::Find  (line 470, @0x00000000030c1fc0, libserver.so)  // inlines: CUtlSymbolLarge, CUtlSymbolLarge_Hash, Compare, Find, HashStringFastCaseless, LockForRead, ToSymbol, UnlockRead, V_memcpy, memcpy
// calls: MurmurHash2LowerCase, memcpy, V_stricmp_fast, CThreadSpinRWLock::LockForRead(void), CThreadSpinRWLock::UnlockRead(void), __stack_chk_fail
// callers: CEntitySystem::FindPooledString, CEntitySystem::FindEntitiesByNameExact, EntityInstanceByNameIter_t::EntityInstanceByNameIter_t, CEntitySystem::AddEntityIOEvent, CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>::AddString, CEntitySystem::AllocPooledString, MakeEntitySystemString, CEntitySystem::UnserializeForPrecache
CUtlSymbolLarge __fastcall CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul>::Find(
        char **a1,
        const CUtlSymbolTableLargeBase<CThreadsafeTree<true>,true,2048ul> *const this,
        const char *pString,
        int nStringLen)
{
  void *v8; // rsp
  __int64 *v9; // r14
  __int64 v10; // rcx
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashBucket_t *v11; // r12
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *m_pFirst; // rbx
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *v13; // rdx
  int v14; // eax
  CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*,2048,CUtlSymbolTableLargeBaseTreeEntry_t*,CCThreadsafeTreeHashMethod<2048,CUtlSymbolTableLargeBaseTreeEntry_t*,true>,CThreadSpinRWLock>::HashFixedData_t *nStringLenb; // [rsp+8h] [rbp-48h]
  _QWORD v17[8]; // [rsp+10h] [rbp-40h] BYREF

  v17[1] = __readfsqword(0x28u);
  if ( pString == 0 || nStringLen <= 0 || *pString == 0 )
    goto LABEL_4;
  v8 = alloca(((nStringLen + 1 + 39LL) & 0xFFFFFFFFFFFFFFF0LL) + 16);
  v9 = (v17 & 0xFFFFFFFFFFFFFFEFLL);
  *(v17 & 0xFFFFFFFFFFFFFFEFLL) = MurmurHash2LowerCase(pString, 0x3501A674u);
  memcpy(((v17 & 0xFFFFFFFFFFFFFFEFLL) + 8), pString, nStringLen);
  *(&stru_8.gap0 + (v17 & 0xFFFFFFFFFFFFFFEFLL) + nStringLen) = 0;
  v10 = *(v17 & 0xFFFFFFFFFFFFFFEFLL);
  v11 = &this->m_Lookup.m_aBuckets[v10 & 0x7FF];
  m_pFirst = v11->m_pFirst;
  if ( m_pFirst != 0 )
  {
    while ( m_pFirst->m_uiKey->m_Hash != v10
         || V_stricmp_fast(m_pFirst->m_uiKey->m_String, (v17 & 0xFFFFFFFFFFFFFFEFLL) + 8) != 0 )
    {
      m_pFirst = m_pFirst->m_pNext;
      if ( m_pFirst == 0 )
        goto LABEL_13;
      v10 = *v9;
    }
    goto LABEL_12;
  }
LABEL_13:
  if ( v11->m_pFirstUncommitted != 0 )
  {
    CThreadSpinRWLock::LockForRead(v11);
    v13 = v11->m_pFirst;
    m_pFirst = v11->m_pFirstUncommitted;
    if ( v13 == m_pFirst )
    {
LABEL_20:
      CThreadSpinRWLock::UnlockRead(v11);
      goto LABEL_4;
    }
    while ( 1 )
    {
      if ( m_pFirst->m_uiKey->m_Hash == *v9 )
      {
        nStringLenb = v13;
        v14 = V_stricmp_fast(m_pFirst->m_uiKey->m_String, (v17 & 0xFFFFFFFFFFFFFFEFLL) + 8);
        v13 = nStringLenb;
        if ( v14 == 0 )
          break;
      }
      m_pFirst = m_pFirst->m_pNext;
      if ( v13 == m_pFirst )
        goto LABEL_20;
    }
    CThreadSpinRWLock::UnlockRead(v11);
LABEL_12:
    *a1 = m_pFirst->m_Data->m_String;
    return a1;
  }
LABEL_4:
  *a1 = 0;
  return a1;
}


// CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul>::FindElement  (line 493, @0x000000000313c1d0, libserver.so)  // inlines: CUtlSymbolLarge_Hash, Find, V_memcpy, memcpy
// calls: memcpy, HashString, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::Find, __stack_chk_fail
// callers: SaveKV3Binary_R
int __fastcall CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::FindElement(
        const CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul> *const this,
        const char *pString,
        int nStringLen)
{
  __int64 v3; // r13
  void *v5; // rsp
  _QWORD *v6; // rbx
  const char *v7; // rax
  __int64 v8; // rax
  CUtlSymbolTableLargeBaseTreeEntry_t *v10[2]; // [rsp+0h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+10h] [rbp-20h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( pString == 0 )
    goto LABEL_5;
  if ( nStringLen <= 0 )
    goto LABEL_5;
  if ( *pString == 0 )
    goto LABEL_5;
  v3 = nStringLen;
  v5 = alloca(((nStringLen + 1 + 39LL) & 0xFFFFFFFFFFFFFFF0LL) + 16);
  v6 = (v11 & 0xFFFFFFFFFFFFFFEFLL);
  v7 = memcpy(((v11 & 0xFFFFFFFFFFFFFFEFLL) + 8), pString, nStringLen);
  *(v6 + v3 + 8) = 0;
  v10[0] = (v11 & 0xFFFFFFFFFFFFFFEFLL);
  *v6 = HashString(v7);
  v8 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Find(
         &this->m_Lookup,
         v10);
  if ( v8 == -1 )
LABEL_5:
    LODWORD(v8) = -1;
  return v8;
}


