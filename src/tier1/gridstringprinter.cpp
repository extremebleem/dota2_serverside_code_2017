
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_gridstringprinter.cpp  (line 0, @0x0000000001a670c0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_gridstringprinter_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CGridStringPrinter::SetColumnJustification  (line 4, @0x0000000002f72420, libserver.so)  // inlines: AddToTail, CUtlSymbolLarge, ColumnHeader_t, CopyConstruct<CGridStringPrinter::ColumnHeader_t>, Element, EnsureColumnCount, GrowMemory, operator[]
// calls: CUtlMemory<CGridStringPrinter::ColumnHeader_t, int>::Grow
// callers: CSave::InitGridPrinter
void __fastcall CGridStringPrinter::SetColumnJustification(CGridStringPrinter *const this, int column, bool bLeft)
{
  __int64 v3; // r15
  CUtlVectorBase<CGridStringPrinter::ColumnHeader_t,CUtlMemory<CGridStringPrinter::ColumnHeader_t,int> >::CAllocator *p_m_Memory; // r13
  int i; // r12d
  int v8; // edx
  CGridStringPrinter::ColumnHeader_t *v9; // rax

  v3 = column;
  p_m_Memory = &this->m_ColumnHeaders.m_Memory;
  for ( i = this->m_ColumnHeaders.m_Size; v3 >= i; i = this->m_ColumnHeaders.m_Size )
  {
    while ( 1 )
    {
      if ( i == this->m_ColumnHeaders.m_Memory.m_nAllocationCount )
        CUtlMemory<CGridStringPrinter::ColumnHeader_t,int>::Grow(p_m_Memory, 1);
      v8 = this->m_ColumnHeaders.m_Size + 1;
      this->m_ColumnHeaders.m_Size = v8;
      v9 = &this->m_ColumnHeaders.m_Memory.m_pMemory[i];
      if ( v9 != 0 )
        break;
      i = v8;
      if ( v3 < v8 )
        goto LABEL_8;
    }
    v9->m_Header.u.m_Id = 0;
    v9->m_bLeftJustify = 0;
  }
LABEL_8:
  this->m_ColumnHeaders.m_Memory.m_pMemory[v3].m_bLeftJustify = bLeft;
}


// CGridStringPrinter::Clear  (line 10, @0x0000000002f72170, libserver.so)  // inlines: Destruct<CCopyableUtlVector<CUtlSymbolLarge> >, Element, Purge, RemoveAll, operator[], ~CCopyableUtlVector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CUtlSymbolLarge, int>::Purge
// callers: CSave::FlushDetailedSpew
void __fastcall CGridStringPrinter::Clear(CGridStringPrinter *const this)
{
  int m_Size; // r12d
  __int64 i; // r13
  char *v4; // rbx
  bool v5; // zf

  m_Size = this->m_Database.m_Size;
  for ( i = 24LL * this->m_Database.m_Size - 24; --m_Size >= 0; i -= 24 )
  {
    v4 = this->m_Database.m_Memory.m_pMemory + i;
    v5 = (*(v4 + 5) & 0xC0000000) == 0;
    *v4 = 0;
    if ( v5 )
    {
      CUtlMemory<CUtlSymbolLarge,int>::Purge((v4 + 8));
      if ( (*(v4 + 5) & 0xC0000000) == 0 )
        CUtlMemory<CUtlSymbolLarge,int>::Purge((v4 + 8));
    }
  }
  v5 = (this->m_Database.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Database.m_Size = 0;
  if ( v5 )
  {
    if ( this->m_Database.m_Memory.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_Database.m_Memory.m_pMemory = 0;
    }
    this->m_Database.m_Memory.m_nAllocationCount = 0;
  }
}


// CGridStringPrinter::EnsureColumnCount  (line 15, @0x0000000002f723a0, libserver.so)  // inlines: AddToTail, CUtlSymbolLarge, ColumnHeader_t, CopyConstruct<CGridStringPrinter::ColumnHeader_t>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CGridStringPrinter::ColumnHeader_t, int>::Grow
void __fastcall CGridStringPrinter::EnsureColumnCount(CGridStringPrinter *const this, int colCount)
{
  CUtlVectorBase<CGridStringPrinter::ColumnHeader_t,CUtlMemory<CGridStringPrinter::ColumnHeader_t,int> >::CAllocator *p_m_Memory; // r13
  int i; // r12d
  int v6; // edx
  CGridStringPrinter::ColumnHeader_t *v7; // rax

  p_m_Memory = &this->m_ColumnHeaders.m_Memory;
  for ( i = this->m_ColumnHeaders.m_Size; colCount > i; i = this->m_ColumnHeaders.m_Size )
  {
    while ( 1 )
    {
      if ( i == this->m_ColumnHeaders.m_Memory.m_nAllocationCount )
        CUtlMemory<CGridStringPrinter::ColumnHeader_t,int>::Grow(p_m_Memory, 1);
      v6 = this->m_ColumnHeaders.m_Size + 1;
      this->m_ColumnHeaders.m_Size = v6;
      v7 = &this->m_ColumnHeaders.m_Memory.m_pMemory[i];
      if ( v7 != 0 )
        break;
      i = v6;
      if ( colCount <= v6 )
        return;
    }
    v7->m_Header.u.m_Id = 0;
    v7->m_bLeftJustify = 0;
  }
}


// CGridStringPrinter::EnsureRowCount  (line 23, @0x0000000002f724c0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CCopyableUtlVector<CUtlSymbolLarge> >, Element, GrowMemory, operator[]
// calls: CUtlMemory<CCopyableUtlVector<CUtlSymbolLarge>, int>::Grow
void __fastcall CGridStringPrinter::EnsureRowCount(CGridStringPrinter *const this, int rowCount)
{
  CUtlVectorBase<CCopyableUtlVector<CUtlSymbolLarge>,CUtlMemory<CCopyableUtlVector<CUtlSymbolLarge>,int> >::CAllocator *p_m_Memory; // r13
  __int64 m_Size; // rbx
  int v6; // edx
  CCopyableUtlVector<CUtlSymbolLarge> *m_pMemory; // rax
  int v8; // edx
  CCopyableUtlVector<CUtlSymbolLarge> *v9; // rax

  p_m_Memory = &this->m_Database.m_Memory;
  while ( 1 )
  {
    m_Size = this->m_Database.m_Size;
    if ( rowCount <= m_Size )
      break;
    while ( 1 )
    {
      v6 = m_Size;
      if ( this->m_Database.m_Memory.m_nAllocationCount == m_Size )
      {
        CUtlMemory<CCopyableUtlVector<CUtlSymbolLarge>,int>::Grow(p_m_Memory, 1);
        v6 = this->m_Database.m_Size;
      }
      m_pMemory = this->m_Database.m_Memory.m_pMemory;
      v8 = v6 + 1;
      this->m_Database.m_Size = v8;
      v9 = &m_pMemory[m_Size];
      if ( v9 != 0 )
        break;
      m_Size = v8;
      if ( rowCount <= v8 )
        return;
    }
    v9->m_Size = 0;
    v9->m_Memory.m_pMemory = 0;
    v9->m_Memory.m_nAllocationCount = 0;
    v9->m_Memory.m_nGrowSize = 0;
  }
}


// CGridStringPrinter::SetString  (line 31, @0x0000000002f73150, libserver.so)  // inlines: AddString, AddToTail, CCopyableUtlVector, CUtlMemory, CUtlSymbolLarge, CUtlSymbolLarge_Hash, CUtlVector, CUtlVectorBase, ColumnHeader_t, Construct<CCopyableUtlVector<CUtlSymbolLarge> >, CopyConstruct<CGridStringPrinter::ColumnHeader_t>, CopyConstruct<CUtlSymbolLarge>, CopyConstruct<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*>, Element, EnsureColumnCount, EnsureRowCount, FindInsertionPosition, FindPoolWithSpace, GrowMemory, Insert, InsertAt, LeftChild, RightChild, ToSymbol, V_memcpy, V_strlen, memcpy, operator(), operator=, operator[]
// calls: CUtlMemory<CGridStringPrinter::ColumnHeader_t, int>::Grow, CUtlMemory<CUtlSymbolLarge, int>::Grow, CUtlMemory<CCopyableUtlVector<CUtlSymbolLarge>, int>::Grow, strlen, CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul>::Find, HashString, memcpy, strcmp, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::NewNode, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::LinkToParent, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*, int>::Grow
// callers: CSave::Log
void __fastcall CGridStringPrinter::SetString(CGridStringPrinter *const this, int row, int column, const char *pString)
{
  __int64 v4; // r15
  CUtlVectorBase<CGridStringPrinter::ColumnHeader_t,CUtlMemory<CGridStringPrinter::ColumnHeader_t,int> >::CAllocator *p_m_Memory; // r12
  int i; // r14d
  int v9; // edx
  CGridStringPrinter::ColumnHeader_t *v10; // rax
  __int64 m_Size; // r12
  int v12; // edx
  CCopyableUtlVector<CUtlSymbolLarge> *m_pMemory; // rax
  int v14; // edx
  CCopyableUtlVector<CUtlSymbolLarge> *v15; // rax
  CCopyableUtlVector<CUtlSymbolLarge> *v16; // r12
  __int64 j; // r15
  int v18; // edx
  CUtlSymbolLarge *v19; // rax
  CUtlSymbolLarge *v20; // rax
  __int64 m_String; // rax
  int v22; // r14d
  int v23; // r10d
  signed int v24; // r15d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v25; // rax
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v26; // rsi
  int m_SpaceUsed; // edi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v28; // rax
  int v29; // ecx
  unsigned int v30; // edx
  __int64 v31; // rsi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v32; // rax
  __int64 v33; // rdx
  int v34; // ecx
  __int64 v35; // rdx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v36; // rcx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v37; // rdx
  __int64 m_Root; // r8
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v39; // r14
  LargeSymbolTableHashDecoration_t v40; // r15
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v41; // r10
  CUtlSymbolTableLargeBaseTreeEntry_t *m_Data; // rsi
  unsigned int v43; // eax
  __int64 m_Right; // rdx
  bool v45; // al
  unsigned int v46; // eax
  bool v47; // r15
  __int64 v48; // rax
  __int64 v49; // r8
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v50; // r11
  CUtlSymbolTableLarge *p_m_Symbols; // [rsp+10h] [rbp-60h]
  char *s1; // [rsp+18h] [rbp-58h]
  int s1a; // [rsp+18h] [rbp-58h]
  unsigned int v54; // [rsp+20h] [rbp-50h]
  char *v55; // [rsp+20h] [rbp-50h]
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v56; // [rsp+20h] [rbp-50h]
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v57; // [rsp+20h] [rbp-50h]
  const char *pStringb; // [rsp+28h] [rbp-48h]
  const char *pStringc; // [rsp+28h] [rbp-48h]
  __int64 pStringd; // [rsp+28h] [rbp-48h]
  __int64 v62; // [rsp+30h] [rbp-40h]
  CUtlSymbolTableLargeBaseTreeEntry_t *pCopyFrom; // [rsp+38h] [rbp-38h] BYREF

  v4 = row;
  p_m_Memory = &this->m_ColumnHeaders.m_Memory;
  for ( i = this->m_ColumnHeaders.m_Size; column >= i; i = this->m_ColumnHeaders.m_Size )
  {
    while ( 1 )
    {
      if ( i == this->m_ColumnHeaders.m_Memory.m_nAllocationCount )
        CUtlMemory<CGridStringPrinter::ColumnHeader_t,int>::Grow(p_m_Memory, 1);
      v9 = this->m_ColumnHeaders.m_Size + 1;
      this->m_ColumnHeaders.m_Size = v9;
      v10 = &this->m_ColumnHeaders.m_Memory.m_pMemory[i];
      if ( v10 != 0 )
        break;
      i = v9;
      if ( column < v9 )
        goto LABEL_10;
    }
    v10->m_Header.u.m_Id = 0;
    v10->m_bLeftJustify = 0;
  }
LABEL_10:
  while ( 1 )
  {
    m_Size = this->m_Database.m_Size;
    if ( v4 < m_Size )
      break;
    while ( 1 )
    {
      v12 = m_Size;
      if ( this->m_Database.m_Memory.m_nAllocationCount == m_Size )
      {
        CUtlMemory<CCopyableUtlVector<CUtlSymbolLarge>,int>::Grow(&this->m_Database.m_Memory, 1);
        v12 = this->m_Database.m_Size;
      }
      m_pMemory = this->m_Database.m_Memory.m_pMemory;
      v14 = v12 + 1;
      this->m_Database.m_Size = v14;
      v15 = &m_pMemory[m_Size];
      if ( v15 != 0 )
        break;
      m_Size = v14;
      if ( v4 < v14 )
        goto LABEL_15;
    }
    v15->m_Size = 0;
    v15->m_Memory.m_pMemory = 0;
    v15->m_Memory.m_nAllocationCount = 0;
    v15->m_Memory.m_nGrowSize = 0;
  }
LABEL_15:
  v16 = &this->m_Database.m_Memory.m_pMemory[v4];
  for ( j = v16->m_Size; column >= j; j = v16->m_Size )
  {
    while ( 1 )
    {
      if ( j == v16->m_Memory.m_nAllocationCount )
        CUtlMemory<CUtlSymbolLarge,int>::Grow(&v16->m_Memory, 1);
      v18 = v16->m_Size + 1;
      v19 = v16->m_Memory.m_pMemory;
      v16->m_Size = v18;
      v20 = &v19[j];
      if ( v20 != 0 )
        break;
      j = v18;
      if ( column < v18 )
        goto LABEL_22;
    }
    v20->u.m_Id = 0;
  }
LABEL_22:
  m_String = 0;
  if ( pString != 0 )
  {
    v22 = strlen(pString);
    m_String = 0;
    if ( v22 > 0 && *pString != 0 )
    {
      p_m_Symbols = &this->m_Symbols;
      CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::Find(&this->m_Symbols, pString, v22);
      m_String = v62;
      if ( v62 == 0 )
      {
        v23 = this->m_Symbols.m_StringPools.m_Size;
        v24 = (v22 + 16) & 0xFFFFFFF8;
        if ( v23 > 0 )
        {
          v25 = this->m_Symbols.m_StringPools.m_Memory.m_pMemory;
          v26 = *v25;
          m_SpaceUsed = (*v25)->m_SpaceUsed;
          if ( (*v25)->m_TotalLen - m_SpaceUsed >= v24 )
          {
LABEL_39:
            v26->m_SpaceUsed = v24 + m_SpaceUsed;
            v55 = v26 + m_SpaceUsed;
            *(v55 + 1) = HashString(pString);
            s1 = v55 + 16;
            memcpy(v55 + 16, pString, v22);
            v55[v22 + 16] = 0;
            pCopyFrom = (v55 + 8);
            m_Root = this->m_Symbols.m_Lookup.m_Root;
            if ( m_Root == -1 )
            {
              v47 = 0;
            }
            else
            {
              v39 = this->m_Symbols.m_Lookup.m_Elements.m_pMemory;
              v40 = *(v55 + 1);
              while ( 1 )
              {
                v41 = &v39[m_Root];
                m_Data = v41->m_Data;
                LOBYTE(v43) = m_Data->m_Hash > v40;
                if ( m_Data->m_Hash == v40 )
                {
                  v56 = &v39[m_Root];
                  pStringb = m_Root;
                  v46 = strcmp(s1, m_Data->m_String);
                  m_Root = pStringb;
                  v43 = v46 >> 31;
                  v41 = v56;
                }
                m_Right = v41->m_Right;
                if ( v43 != 0 )
                  m_Right = v41->m_Left;
                v45 = v43 != 0;
                if ( m_Right == -1 )
                  break;
                m_Root = m_Right;
              }
              v47 = v45;
            }
            pStringc = m_Root;
            v48 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
                    &p_m_Symbols->m_Lookup,
                    &pCopyFrom);
            v49 = pStringc;
            pStringd = v48;
            CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
              &p_m_Symbols->m_Lookup,
              v48,
              v49,
              v47);
            v50 = this->m_Symbols.m_Lookup.m_Elements.m_pMemory;
            ++this->m_Symbols.m_Lookup.m_NumElements;
            m_String = v50[pStringd].m_Data->m_String;
            goto LABEL_25;
          }
          v28 = v25 + 1;
          v29 = 0;
          while ( ++v29 != v23 )
          {
            v26 = *v28++;
            m_SpaceUsed = v26->m_SpaceUsed;
            if ( v24 <= v26->m_TotalLen - m_SpaceUsed )
            {
              if ( v29 != -1 )
                goto LABEL_39;
              break;
            }
          }
        }
        if ( (v24 + 12LL) <= 0x800 )
        {
          v30 = 2036;
          v31 = 2048;
        }
        else
        {
          v30 = (v22 + 16) & 0xFFFFFFF8;
          v31 = v24 + 12;
        }
        v54 = v30;
        v32 = (**g_pMemAlloc)(g_pMemAlloc, v31);
        v32->m_SpaceUsed = 0;
        v32->m_TotalLen = v54;
        v33 = this->m_Symbols.m_StringPools.m_Size;
        v34 = this->m_Symbols.m_StringPools.m_Size;
        if ( v33 == this->m_Symbols.m_StringPools.m_Memory.m_nAllocationCount )
        {
          s1a = this->m_Symbols.m_StringPools.m_Size;
          v57 = v32;
          CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Grow(
            &this->m_Symbols.m_StringPools.m_Memory,
            1);
          v34 = this->m_Symbols.m_StringPools.m_Size;
          v33 = s1a;
          v32 = v57;
        }
        v35 = v33;
        this->m_Symbols.m_StringPools.m_Size = v34 + 1;
        v36 = &this->m_Symbols.m_StringPools.m_Memory.m_pMemory[v35];
        if ( v36 != 0 )
        {
          *v36 = v32;
          v37 = &this->m_Symbols.m_StringPools.m_Memory.m_pMemory[v35];
        }
        else
        {
          v37 = 0;
        }
        v26 = *v37;
        m_SpaceUsed = (*v37)->m_SpaceUsed;
        goto LABEL_39;
      }
    }
  }
LABEL_25:
  v16->m_Memory.m_pMemory[column].u.m_Id = m_String;
}


// CGridStringPrinter::SetColumnHeader  (line 44, @0x0000000002f73550, libserver.so)  // inlines: AddString, AddToTail, CUtlSymbolLarge, CUtlSymbolLarge_Hash, ColumnHeader_t, CopyConstruct<CGridStringPrinter::ColumnHeader_t>, CopyConstruct<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*>, Element, EnsureColumnCount, FindInsertionPosition, FindPoolWithSpace, GrowMemory, Insert, InsertAt, LeftChild, RightChild, ToSymbol, V_memcpy, V_strlen, memcpy, operator(), operator=, operator[]
// calls: CUtlMemory<CGridStringPrinter::ColumnHeader_t, int>::Grow, strlen, CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul>::Find, HashString, memcpy, strcmp, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::NewNode, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::LinkToParent, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*, int>::Grow
// callers: CSave::InitGridPrinter
void __fastcall CGridStringPrinter::SetColumnHeader(CGridStringPrinter *const this, int column, const char *pString)
{
  __int64 v3; // r15
  CUtlVectorBase<CGridStringPrinter::ColumnHeader_t,CUtlMemory<CGridStringPrinter::ColumnHeader_t,int> >::CAllocator *p_m_Memory; // r14
  int i; // r12d
  int v8; // edx
  CGridStringPrinter::ColumnHeader_t *v9; // rax
  UtlSymLargeId_t m_String; // rax
  int v11; // r12d
  int m_Size; // r9d
  signed int v13; // r14d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **m_pMemory; // rsi
  int m_SpaceUsed; // edi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v16; // rsi
  int v17; // ecx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rsi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v21; // rax
  __int64 v22; // rdx
  int v23; // ecx
  __int64 v24; // rdx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v25; // rcx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v26; // rdx
  __int64 m_Root; // r13
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v28; // r12
  LargeSymbolTableHashDecoration_t v29; // r14
  __int64 m_Right; // rdx
  bool v31; // al
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v32; // r8
  CUtlSymbolTableLargeBaseTreeEntry_t *m_Data; // rsi
  unsigned int v34; // eax
  unsigned int v35; // eax
  bool v36; // r14
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v37; // r12
  CUtlSymbolTableLarge *p_m_Symbols; // [rsp+8h] [rbp-58h]
  int s1; // [rsp+10h] [rbp-50h]
  unsigned int v40; // [rsp+18h] [rbp-48h]
  char *v41; // [rsp+18h] [rbp-48h]
  __int64 v42; // [rsp+18h] [rbp-48h]
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v43; // [rsp+18h] [rbp-48h]
  UtlSymLargeId_t v44; // [rsp+20h] [rbp-40h]
  CUtlSymbolTableLargeBaseTreeEntry_t *pCopyFrom; // [rsp+28h] [rbp-38h] BYREF

  v3 = column;
  p_m_Memory = &this->m_ColumnHeaders.m_Memory;
  for ( i = this->m_ColumnHeaders.m_Size; v3 >= i; i = this->m_ColumnHeaders.m_Size )
  {
    while ( 1 )
    {
      if ( i == this->m_ColumnHeaders.m_Memory.m_nAllocationCount )
        CUtlMemory<CGridStringPrinter::ColumnHeader_t,int>::Grow(p_m_Memory, 1);
      v8 = this->m_ColumnHeaders.m_Size + 1;
      this->m_ColumnHeaders.m_Size = v8;
      v9 = &this->m_ColumnHeaders.m_Memory.m_pMemory[i];
      if ( v9 != 0 )
        break;
      i = v8;
      if ( v3 < v8 )
        goto LABEL_8;
    }
    v9->m_Header.u.m_Id = 0;
    v9->m_bLeftJustify = 0;
  }
LABEL_8:
  m_String = 0;
  if ( pString != 0 )
  {
    v11 = strlen(pString);
    m_String = 0;
    if ( v11 > 0 && *pString != 0 )
    {
      p_m_Symbols = &this->m_Symbols;
      CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::Find(&this->m_Symbols, pString, v11);
      m_String = v44;
      if ( v44 == 0 )
      {
        m_Size = this->m_Symbols.m_StringPools.m_Size;
        v13 = (v11 + 16) & 0xFFFFFFF8;
        if ( m_Size > 0 )
        {
          m_pMemory = this->m_Symbols.m_StringPools.m_Memory.m_pMemory;
          m_SpaceUsed = (*m_pMemory)->m_SpaceUsed;
          if ( v13 <= (*m_pMemory)->m_TotalLen - m_SpaceUsed )
          {
            v18 = *m_pMemory;
LABEL_25:
            v18->m_SpaceUsed = v13 + m_SpaceUsed;
            v41 = v18 + m_SpaceUsed;
            *(v41 + 1) = HashString(pString);
            memcpy(v41 + 16, pString, v11);
            v41[v11 + 16] = 0;
            m_Root = this->m_Symbols.m_Lookup.m_Root;
            pCopyFrom = (v41 + 8);
            if ( m_Root == -1 )
            {
              v36 = 0;
            }
            else
            {
              v28 = this->m_Symbols.m_Lookup.m_Elements.m_pMemory;
              v29 = *(v41 + 1);
              while ( 1 )
              {
                v32 = &v28[m_Root];
                m_Data = v32->m_Data;
                LOBYTE(v34) = v29 < m_Data->m_Hash;
                if ( v29 == m_Data->m_Hash )
                {
                  v35 = strcmp(v41 + 16, m_Data->m_String);
                  v32 = &v28[m_Root];
                  v34 = v35 >> 31;
                }
                m_Right = v32->m_Right;
                if ( v34 != 0 )
                  m_Right = v32->m_Left;
                v31 = v34 != 0;
                if ( m_Right == -1 )
                  break;
                m_Root = m_Right;
              }
              v36 = v31;
            }
            v42 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
                    &p_m_Symbols->m_Lookup,
                    &pCopyFrom);
            CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
              &p_m_Symbols->m_Lookup,
              v42,
              m_Root,
              v36);
            v37 = this->m_Symbols.m_Lookup.m_Elements.m_pMemory;
            ++this->m_Symbols.m_Lookup.m_NumElements;
            m_String = v37[v42].m_Data->m_String;
            goto LABEL_11;
          }
          v16 = m_pMemory + 1;
          v17 = 0;
          while ( ++v17 != m_Size )
          {
            v18 = *v16++;
            m_SpaceUsed = v18->m_SpaceUsed;
            if ( v13 <= v18->m_TotalLen - m_SpaceUsed )
            {
              if ( v17 != -1 )
                goto LABEL_25;
              break;
            }
          }
        }
        if ( (v13 + 12LL) <= 0x800 )
        {
          v19 = 2036;
          v20 = 2048;
        }
        else
        {
          v19 = (v11 + 16) & 0xFFFFFFF8;
          v20 = v13 + 12;
        }
        v40 = v19;
        v21 = (**g_pMemAlloc)(g_pMemAlloc, v20);
        v21->m_SpaceUsed = 0;
        v21->m_TotalLen = v40;
        v22 = this->m_Symbols.m_StringPools.m_Size;
        v23 = this->m_Symbols.m_StringPools.m_Size;
        if ( v22 == this->m_Symbols.m_StringPools.m_Memory.m_nAllocationCount )
        {
          s1 = this->m_Symbols.m_StringPools.m_Size;
          v43 = v21;
          CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Grow(
            &this->m_Symbols.m_StringPools.m_Memory,
            1);
          v23 = this->m_Symbols.m_StringPools.m_Size;
          v22 = s1;
          v21 = v43;
        }
        v24 = v22;
        this->m_Symbols.m_StringPools.m_Size = v23 + 1;
        v25 = &this->m_Symbols.m_StringPools.m_Memory.m_pMemory[v24];
        if ( v25 != 0 )
        {
          *v25 = v21;
          v26 = &this->m_Symbols.m_StringPools.m_Memory.m_pMemory[v24];
        }
        else
        {
          v26 = 0;
        }
        v18 = *v26;
        m_SpaceUsed = (*v26)->m_SpaceUsed;
        goto LABEL_25;
      }
    }
  }
LABEL_11:
  this->m_ColumnHeaders.m_Memory.m_pMemory[v3].m_Header.u.m_Id = m_String;
}


// CGridStringPrinter::GetLines  (line 51, @0x0000000002f72560, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<CUtlString>, Destruct<CUtlString>, Element, EnsureCount, FillWithValue, GrowMemory, GrowVector, InsertMultipleBefore, Purge, RemoveAll, String, V_strlen, operator char const*, operator=, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CGridStringPrinter::NumColumns, CUtlMemory<int, int>::Grow, strlen, CFmtStrN<256, false>::CFmtStrN, CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, CUtlMemory<char, int>::Grow, CUtlMemory<CUtlString, int>::Grow, CGridStringPrinter::GetColumnHeader, CUtlString::operator+=, CUtlString::Clear (17 total)
// callers: CSaveRestoreGridPrinter::Spew
// strings: " %%%d.%ds ", " %%-%d.%ds "
void __fastcall CGridStringPrinter::GetLines(
        const CGridStringPrinter *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const lines)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rbx
  int i; // r12d
  int v8; // edx
  int *v9; // r14
  CGridStringPrinter::ColumnHeader_t *v10; // rax
  __int64 v11; // r13
  int j; // r12d
  __int64 v13; // rbx
  int v14; // r15d
  CCopyableUtlVector<CUtlSymbolLarge> *v15; // r14
  const char **v16; // rdx
  int v17; // eax
  int *v18; // rdx
  int *m_pMemory; // rax
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // r12
  int v23; // ebx
  __int64 v24; // r14
  int v25; // eax
  CUtlString *v26; // r14
  const char *v27; // rax
  int v28; // edx
  __int64 m_Size; // r14
  int v30; // eax
  CUtlString *v31; // r14
  const char *v32; // rax
  char *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r12
  int v36; // ebx
  const char *v37; // r13
  const char *v38; // rax
  int v39; // eax
  __int64 v40; // rbx
  CUtlString *v41; // rbx
  const char *v42; // rax
  __int64 v43; // r12
  int v44; // ebx
  char *v45; // r13
  const char *v46; // rax
  int v47; // eax
  __int64 v48; // rbx
  CUtlString *v49; // rbx
  const char *v50; // rax
  CCopyableUtlVector<CUtlSymbolLarge> *v51; // r15
  __int64 v52; // r12
  int v53; // ebx
  const char *v54; // rax
  int v55; // eax
  const char *m_pAsString; // r13
  __int64 v57; // rbx
  CUtlString *v58; // rbx
  const char *v59; // rax
  int v60; // ebx
  __int64 k; // r12
  __int64 v62; // [rsp+8h] [rbp-318h]
  int v63; // [rsp+10h] [rbp-310h]
  int longest; // [rsp+30h] [rbp-2F0h]
  CUtlString header; // [rsp+40h] [rbp-2E0h] BYREF
  CUtlString v68; // [rsp+50h] [rbp-2D0h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > colWidths; // [rsp+60h] [rbp-2C0h] BYREF
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > sFormatSpecifiers; // [rsp+80h] [rbp-2A0h] BYREF
  CUtlString rowString; // [rsp+A0h] [rbp-280h] BYREF
  CUtlMemory<char,int> v72; // [rsp+A8h] [rbp-278h] BYREF
  CFmtStr sColumnDivider; // [rsp+C0h] [rbp-260h] BYREF
  CFmtStrN<256,false> v74; // [rsp+1D0h] [rbp-150h] BYREF
  unsigned __int64 v75; // [rsp+2E8h] [rbp-38h]

  v75 = __readfsqword(0x28u);
  if ( this->m_Database.m_Size == 0 )
    return;
  colWidths.m_Size = 0;
  colWidths.m_Memory.m_pMemory = 0;
  colWidths.m_Memory.m_nAllocationCount = 0;
  colWidths.m_Memory.m_nGrowSize = 0;
  v2 = CGridStringPrinter::NumColumns(this);
  v3 = v2;
  if ( v2 > 0 )
  {
    CUtlMemory<int,int>::Grow(&colWidths.m_Memory, v2);
    colWidths.m_Size = v3;
    v4 = 0;
    v5 = 0;
    do
    {
      ++v5;
      colWidths.m_Memory.m_pMemory[v4++] = 0;
    }
    while ( v5 < colWidths.m_Size );
  }
  v6 = 0;
  for ( i = 0; this->m_ColumnHeaders.m_Size > i; ++v6 )
  {
    v8 = 0;
    v9 = &colWidths.m_Memory.m_pMemory[v6];
    v10 = &this->m_ColumnHeaders.m_Memory.m_pMemory[v6];
    if ( v10->m_Header.u.m_Id != 0 )
      v8 = strlen(v10->m_Header.u.m_pAsString);
    *v9 = v8;
    ++i;
  }
  v11 = 0;
  for ( j = 0; this->m_Database.m_Size > j; ++v11 )
  {
    v13 = 0;
    v14 = 0;
    v15 = &this->m_Database.m_Memory.m_pMemory[v11];
    if ( v15->m_Size > 0 )
    {
      do
      {
        v16 = &v15->m_Memory.m_pMemory[v13];
        v17 = 0;
        if ( *v16 != 0 )
          v17 = strlen(*v16);
        v18 = &colWidths.m_Memory.m_pMemory[v13];
        if ( v17 < colWidths.m_Memory.m_pMemory[v13] )
          v17 = colWidths.m_Memory.m_pMemory[v13];
        ++v14;
        ++v13;
        *v18 = v17;
      }
      while ( v15->m_Size > v14 );
    }
    ++j;
  }
  if ( colWidths.m_Size > 0 )
  {
    m_pMemory = colWidths.m_Memory.m_pMemory;
    v20 = 0;
    v21 = 1;
    do
    {
      if ( v21 < colWidths.m_Memory.m_pMemory[v20] )
        v21 = colWidths.m_Memory.m_pMemory[v20];
      ++v20;
    }
    while ( colWidths.m_Size > v20 );
    longest = v21;
    v22 = 0;
    v23 = 0;
    sFormatSpecifiers.m_Size = 0;
    sFormatSpecifiers.m_Memory.m_pMemory = 0;
    sFormatSpecifiers.m_Memory.m_nAllocationCount = 0;
    sFormatSpecifiers.m_Memory.m_nGrowSize = 0;
    while ( 1 )
    {
      v28 = m_pMemory[v22];
      if ( this->m_ColumnHeaders.m_Size <= v23 || !this->m_ColumnHeaders.m_Memory.m_pMemory[v22].m_bLeftJustify )
        break;
      CFmtStrN<256,false>::CFmtStrN(&v74, " %%-%d.%ds ", v28, v28);
      header.m_pString = 0;
      CUtlString::Set(&header, v74.m_szBuf);
      m_Size = sFormatSpecifiers.m_Size;
      v30 = sFormatSpecifiers.m_Size;
      if ( sFormatSpecifiers.m_Size == sFormatSpecifiers.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&sFormatSpecifiers.m_Memory, 1);
        v30 = sFormatSpecifiers.m_Size;
      }
      sFormatSpecifiers.m_Size = v30 + 1;
      v31 = &sFormatSpecifiers.m_Memory.m_pMemory[m_Size];
      if ( v31 != 0 )
      {
        v31->m_pString = 0;
        v32 = CUtlString::Get(&header);
        CUtlString::Set(v31, v32);
      }
      if ( header.m_pString == 0 )
        goto LABEL_30;
      ++v23;
      ++v22;
      CUtlString::FreeMemoryBlock(&header);
      if ( colWidths.m_Size <= v23 )
        goto LABEL_40;
LABEL_31:
      m_pMemory = colWidths.m_Memory.m_pMemory;
    }
    CFmtStrN<256,false>::CFmtStrN(&v74, " %%%d.%ds ", v28, v28);
    rowString.m_pString = 0;
    CUtlString::Set(&rowString, v74.m_szBuf);
    v24 = sFormatSpecifiers.m_Size;
    v25 = sFormatSpecifiers.m_Size;
    if ( sFormatSpecifiers.m_Size == sFormatSpecifiers.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CUtlString,int>::Grow(&sFormatSpecifiers.m_Memory, 1);
      v25 = sFormatSpecifiers.m_Size;
    }
    sFormatSpecifiers.m_Size = v25 + 1;
    v26 = &sFormatSpecifiers.m_Memory.m_pMemory[v24];
    if ( v26 != 0 )
    {
      v26->m_pString = 0;
      v27 = CUtlString::Get(&rowString);
      CUtlString::Set(v26, v27);
    }
    if ( rowString.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&rowString);
LABEL_30:
    ++v23;
    ++v22;
    if ( colWidths.m_Size <= v23 )
      goto LABEL_40;
    goto LABEL_31;
  }
  sFormatSpecifiers.m_Size = 0;
  sFormatSpecifiers.m_Memory.m_pMemory = 0;
  sFormatSpecifiers.m_Memory.m_nAllocationCount = 0;
  sFormatSpecifiers.m_Memory.m_nGrowSize = 0;
  longest = 1;
LABEL_40:
  CFmtStrN<256,false>::CFmtStrN(&sColumnDivider, "%c", this->m_cColumnDivider);
  if ( this->m_ColumnHeaders.m_Size > 0 )
  {
    LODWORD(rowString.m_pString) = 0;
    v72.m_pMemory = 0;
    v72.m_nAllocationCount = 0;
    v72.m_nGrowSize = 0;
    CUtlMemory<char,int>::Grow(&v72, longest + 1);
    LODWORD(rowString.m_pString) = longest + 1;
    v33 = v72.m_pMemory;
    v34 = 0;
    while ( 1 )
    {
      v33[v34++] = this->m_cHeaderDivider;
      if ( SLODWORD(rowString.m_pString) <= v34 )
        break;
      v33 = v72.m_pMemory;
    }
    v72.m_pMemory[LODWORD(rowString.m_pString) - 1] = 0;
    header.m_pString = 0;
    if ( colWidths.m_Size > 0 )
    {
      v35 = 0;
      v36 = 0;
      do
      {
        CGridStringPrinter::GetColumnHeader(&v68, this, v36);
        v37 = CUtlString::Get(&v68);
        v38 = CUtlString::Get(&sFormatSpecifiers.m_Memory.m_pMemory[v35]);
        CFmtStrN<256,false>::CFmtStrN(&v74, v38, v37);
        CUtlString::operator+=(&header, v74.m_szBuf);
        if ( v68.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v68);
        v39 = colWidths.m_Size;
        if ( v36 != colWidths.m_Size - 1 )
        {
          CUtlString::operator+=(&header, sColumnDivider.m_szBuf);
          v39 = colWidths.m_Size;
        }
        ++v36;
        ++v35;
      }
      while ( v36 < v39 );
    }
    v40 = lines->m_Size;
    if ( v40 == lines->m_Memory.m_nAllocationCount )
      CUtlMemory<CUtlString,int>::Grow(&lines->m_Memory, 1);
    ++lines->m_Size;
    v41 = &lines->m_Memory.m_pMemory[v40];
    if ( v41 != 0 )
    {
      v41->m_pString = 0;
      v42 = CUtlString::Get(&header);
      CUtlString::Set(v41, v42);
    }
    CUtlString::Clear(&header);
    if ( colWidths.m_Size > 0 )
    {
      v43 = 0;
      v44 = 0;
      do
      {
        v45 = v72.m_pMemory;
        v46 = CUtlString::Get(&sFormatSpecifiers.m_Memory.m_pMemory[v43]);
        CFmtStrN<256,false>::CFmtStrN(&v74, v46, v45);
        CUtlString::operator+=(&header, v74.m_szBuf);
        v47 = colWidths.m_Size;
        if ( v44 != colWidths.m_Size - 1 )
        {
          CUtlString::operator+=(&header, sColumnDivider.m_szBuf);
          v47 = colWidths.m_Size;
        }
        ++v44;
        ++v43;
      }
      while ( v44 < v47 );
    }
    v48 = lines->m_Size;
    if ( v48 == lines->m_Memory.m_nAllocationCount )
      CUtlMemory<CUtlString,int>::Grow(&lines->m_Memory, 1);
    ++lines->m_Size;
    v49 = &lines->m_Memory.m_pMemory[v48];
    if ( v49 != 0 )
    {
      v49->m_pString = 0;
      v50 = CUtlString::Get(&header);
      CUtlString::Set(v49, v50);
    }
    if ( header.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&header);
    LODWORD(rowString.m_pString) = 0;
    if ( (v72.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char,int>::Purge(&v72);
      if ( (v72.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<char,int>::Purge(&v72);
    }
  }
  if ( this->m_Database.m_Size > 0 )
  {
    v62 = 0;
    v63 = 0;
    do
    {
      rowString.m_pString = 0;
      v51 = &this->m_Database.m_Memory.m_pMemory[v62];
      if ( colWidths.m_Size > 0 )
      {
        v52 = 0;
        v53 = 0;
        do
        {
          m_pAsString = "";
          if ( v51->m_Size > v53 && v51->m_Memory.m_pMemory[v52].u.m_Id != 0 )
            m_pAsString = v51->m_Memory.m_pMemory[v52].u.m_pAsString;
          v54 = CUtlString::Get(&sFormatSpecifiers.m_Memory.m_pMemory[v52]);
          CFmtStrN<256,false>::CFmtStrN(&v74, v54, m_pAsString);
          CUtlString::operator+=(&rowString, v74.m_szBuf);
          v55 = colWidths.m_Size;
          if ( v53 != colWidths.m_Size - 1 )
          {
            CUtlString::operator+=(&rowString, sColumnDivider.m_szBuf);
            v55 = colWidths.m_Size;
          }
          ++v53;
          ++v52;
        }
        while ( v53 < v55 );
      }
      v57 = lines->m_Size;
      if ( v57 == lines->m_Memory.m_nAllocationCount )
        CUtlMemory<CUtlString,int>::Grow(&lines->m_Memory, 1);
      ++lines->m_Size;
      v58 = &lines->m_Memory.m_pMemory[v57];
      if ( v58 != 0 )
      {
        v58->m_pString = 0;
        v59 = CUtlString::Get(&rowString);
        CUtlString::Set(v58, v59);
      }
      if ( rowString.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&rowString);
      ++v63;
      ++v62;
    }
    while ( this->m_Database.m_Size > v63 );
  }
  v60 = sFormatSpecifiers.m_Size;
  for ( k = 8LL * sFormatSpecifiers.m_Size - 8; --v60 >= 0; k -= 8 )
  {
    if ( *(&sFormatSpecifiers.m_Memory.m_pMemory->m_pString + k) != 0 )
      CUtlString::FreeMemoryBlock((sFormatSpecifiers.m_Memory.m_pMemory + k));
  }
  sFormatSpecifiers.m_Size = 0;
  if ( (sFormatSpecifiers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&sFormatSpecifiers.m_Memory);
    if ( (sFormatSpecifiers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&sFormatSpecifiers.m_Memory);
  }
  colWidths.m_Size = 0;
  if ( (colWidths.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&colWidths.m_Memory);
    if ( (colWidths.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&colWidths.m_Memory);
  }
}


// CGridStringPrinter::NumColumns  (line 175, @0x0000000002f72230, libserver.so)
// callers: CGridStringPrinter::GetLines
int __fastcall CGridStringPrinter::NumColumns(const CGridStringPrinter *const this)
{
  int m_Size; // eax
  CCopyableUtlVector<CUtlSymbolLarge> *m_pMemory; // rcx
  CCopyableUtlVector<CUtlSymbolLarge> *v3; // rdx
  __int64 v4; // rsi
  int result; // eax
  int v6; // ecx

  m_Size = this->m_Database.m_Size;
  if ( this->m_Database.m_Size == 0 )
    return this->m_ColumnHeaders.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_Database.m_Memory.m_pMemory;
  v3 = m_pMemory + 1;
  v4 = &m_pMemory[(m_Size - 1) + 1];
  result = 0;
  while ( 1 )
  {
    v6 = m_pMemory->m_Size;
    if ( result < v6 )
      result = v6;
    m_pMemory = v3;
    if ( v3 == v4 )
      break;
    ++v3;
  }
  return result;
}


// CGridStringPrinter::NumRows  (line 190, @0x0000000002f72280, libserver.so)
// callers: CSave::Log
int __fastcall CGridStringPrinter::NumRows(const CGridStringPrinter *const this)
{
  return this->m_Database.m_Size;
}


// CGridStringPrinter::GetString  (line 195, @0x0000000002f72290, libserver.so)  // inlines: CUtlString, String, operator[]
// calls: CUtlString::operator=, CUtlString::FreeMemoryBlock, _Unwind_Resume
CUtlString __fastcall CGridStringPrinter::GetString(
        CUtlString *a1,
        const CGridStringPrinter *const this,
        int nRow,
        int nColumn)
{
  CCopyableUtlVector<CUtlSymbolLarge> *v6; // rax
  const char *v7; // rsi
  const char **v8; // rax

  a1->m_pString = 0;
  if ( nRow >= 0 && nColumn >= 0 && nRow <= this->m_Database.m_Size )
  {
    v6 = &this->m_Database.m_Memory.m_pMemory[nRow];
    if ( nColumn < v6->m_Size )
    {
      v7 = "";
      v8 = &v6->m_Memory.m_pMemory[nColumn];
      if ( *v8 != 0 )
        v7 = *v8;
      CUtlString::operator=(a1, v7);
    }
  }
  return a1;
}


// CGridStringPrinter::GetColumnHeader  (line 211, @0x0000000002f72320, libserver.so)  // inlines: CUtlString, String, operator[]
// calls: CUtlString::operator=, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CGridStringPrinter::GetLines
CUtlString __fastcall CGridStringPrinter::GetColumnHeader(
        CUtlString *a1,
        const CGridStringPrinter *const this,
        int nColumn)
{
  CGridStringPrinter::ColumnHeader_t *v5; // rdx

  a1->m_pString = 0;
  if ( nColumn < 0 || nColumn >= this->m_ColumnHeaders.m_Size )
    return a1;
  v5 = &this->m_ColumnHeaders.m_Memory.m_pMemory[nColumn];
  if ( v5->m_Header.u.m_Id != 0 )
    CUtlString::operator=(a1, v5->m_Header.u.m_pAsString);
  else
    CUtlString::operator=(a1, "");
  return a1;
}


