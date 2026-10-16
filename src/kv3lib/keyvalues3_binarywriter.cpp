// Reconstructed from DWARF by pahole; not original source.

// src/kv3lib/keyvalues3_binarywriter.cpp:22
struct KV3BinarySaveContext_t {
	CUtlSymbolTableLarge m_Symbols;  // +0x10
	KV3BinarySaveContext_t();
	~KV3BinarySaveContext_t();

	// sizeof = 104
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_keyvalues3_binarywriter.cpp  (line 0, @0x0000000001a6adf0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_keyvalues3_binarywriter_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// GatherSymbols_R  (line 32, @0x000000000313b8d0, libserver.so)  // inlines: AddString, AddToTail, CUtlSymbolLarge_Hash, CopyConstruct<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*>, Element, FindPoolWithSpace, GrowMemory, Insert, V_memcpy, V_strlen, memcpy, operator[]
// calls: KeyValues3::GetType, KeyValues3::GetStringRaw, strlen, CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul>::Find, HashString, memcpy, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::Insert, KeyValues3::GetMemberCount, KeyValues3::GetMember, KeyValues3::GetMemberName, KeyValues3::GetArrayElementCount, KeyValues3::GetArrayElement (13 total)
// callers: SaveKV3Binary
bool __fastcall GatherSymbols_R(KV3BinarySaveContext_t *const saveContext, const KeyValues3 *pData)
{
  KeyValues3Type_t Type; // al
  const char *StringRaw; // rax
  const char *v7; // rbx
  int v8; // eax
  int v9; // r14d
  CUtlSymbolTableLarge *p_m_Symbols; // r12
  int m_Size; // eax
  signed int v12; // r15d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **m_pMemory; // rsi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v14; // rdi
  int m_SpaceUsed; // r8d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v16; // rsi
  int v17; // ecx
  unsigned int v18; // edx
  __int64 v19; // rsi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v20; // rax
  __int64 v21; // rdx
  int v22; // ecx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v23; // rcx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v24; // rsi
  char *v25; // r13
  int MemberCount; // r14d
  int v27; // ebx
  const KeyValues3 *Member; // rax
  const char *MemberName; // rax
  const char *v30; // r15
  int v31; // eax
  int v32; // r9d
  int v33; // r11d
  signed int v34; // edx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v35; // rax
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v36; // r10
  int v37; // edi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v38; // rax
  int v39; // esi
  unsigned int v40; // ecx
  __int64 v41; // rsi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v42; // rax
  __int64 v43; // rcx
  int v44; // esi
  __int64 v45; // rcx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v46; // rsi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v47; // rcx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v48; // rax
  int v49; // ebx
  int ArrayElementCount; // r14d
  const KeyValues3 *ArrayElement; // rax
  int v52; // [rsp+10h] [rbp-80h]
  int v53; // [rsp+10h] [rbp-80h]
  int v54; // [rsp+18h] [rbp-78h]
  char *v55; // [rsp+18h] [rbp-78h]
  int v56; // [rsp+18h] [rbp-78h]
  unsigned int v57; // [rsp+20h] [rbp-70h]
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v58; // [rsp+20h] [rbp-70h]
  CUtlSymbolTableLarge *v59; // [rsp+30h] [rbp-60h]
  int v60; // [rsp+30h] [rbp-60h]
  unsigned int v61; // [rsp+38h] [rbp-58h]
  int v62; // [rsp+38h] [rbp-58h]
  unsigned int v63; // [rsp+38h] [rbp-58h]
  char *v64; // [rsp+38h] [rbp-58h]
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v65; // [rsp+38h] [rbp-58h]
  CUtlSymbolTableLargeBaseTreeEntry_t *insert[2]; // [rsp+40h] [rbp-50h] BYREF
  char *v67[8]; // [rsp+50h] [rbp-40h] BYREF

  Type = KeyValues3::GetType(pData);
  if ( Type != KeyValues3Type_t::KEYVALUES3_TYPE_ARRAY )
  {
    if ( Type != KeyValues3Type_t::KEYVALUES3_TYPE_TABLE )
    {
      if ( Type != KeyValues3Type_t::KEYVALUES3_TYPE_STRING )
        return 1;
      StringRaw = KeyValues3::GetStringRaw(pData, 0);
      v7 = StringRaw;
      if ( StringRaw == 0 )
        return 1;
      v8 = strlen(StringRaw);
      v9 = v8;
      if ( v8 <= 0 )
        return 1;
      if ( *v7 == 0 )
        return 1;
      p_m_Symbols = &saveContext->m_Symbols;
      CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::Find(v67, &saveContext->m_Symbols, v7, v8);
      if ( v67[0] != 0 )
        return 1;
      m_Size = saveContext->m_Symbols.m_StringPools.m_Size;
      v12 = (v9 + 16) & 0xFFFFFFF8;
      if ( m_Size > 0 )
      {
        m_pMemory = saveContext->m_Symbols.m_StringPools.m_Memory.m_pMemory;
        v14 = *m_pMemory;
        m_SpaceUsed = (*m_pMemory)->m_SpaceUsed;
        if ( v12 <= (*m_pMemory)->m_TotalLen - m_SpaceUsed )
        {
LABEL_21:
          v25 = v14 + m_SpaceUsed;
          v14->m_SpaceUsed = v12 + m_SpaceUsed;
          *(v25 + 1) = HashString(v7);
          memcpy(v25 + 16, v7, v9);
          v25[v9 + 16] = 0;
          insert[0] = (v25 + 8);
          CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Insert(
            &p_m_Symbols->m_Lookup,
            insert,
            ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
          return 1;
        }
        v16 = m_pMemory + 1;
        v17 = 0;
        while ( ++v17 != m_Size )
        {
          v14 = *v16++;
          m_SpaceUsed = v14->m_SpaceUsed;
          if ( v12 <= v14->m_TotalLen - m_SpaceUsed )
          {
            if ( v17 != -1 )
              goto LABEL_21;
            break;
          }
        }
      }
      if ( (v12 + 12LL) <= 0x800 )
      {
        v18 = 2036;
        v19 = 2048;
      }
      else
      {
        v18 = (v9 + 16) & 0xFFFFFFF8;
        v19 = v12 + 12;
      }
      v61 = v18;
      v20 = (**g_pMemAlloc)(g_pMemAlloc, v19);
      v20->m_SpaceUsed = 0;
      v20->m_TotalLen = v61;
      v21 = saveContext->m_Symbols.m_StringPools.m_Size;
      v22 = saveContext->m_Symbols.m_StringPools.m_Size;
      if ( v21 == saveContext->m_Symbols.m_StringPools.m_Memory.m_nAllocationCount )
      {
        v60 = saveContext->m_Symbols.m_StringPools.m_Size;
        v65 = v20;
        CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Grow(
          &saveContext->m_Symbols.m_StringPools.m_Memory,
          1);
        v22 = saveContext->m_Symbols.m_StringPools.m_Size;
        v21 = v60;
        v20 = v65;
      }
      saveContext->m_Symbols.m_StringPools.m_Size = v22 + 1;
      v23 = saveContext->m_Symbols.m_StringPools.m_Memory.m_pMemory;
      v24 = &v23[v21];
      if ( v24 != 0 )
      {
        *v24 = v20;
        v23 = saveContext->m_Symbols.m_StringPools.m_Memory.m_pMemory;
      }
      v14 = v23[v21];
      m_SpaceUsed = v14->m_SpaceUsed;
      goto LABEL_21;
    }
    MemberCount = KeyValues3::GetMemberCount(pData);
    if ( MemberCount <= 0 )
      return 1;
    v27 = 0;
    v59 = &saveContext->m_Symbols;
    while ( 1 )
    {
      MemberName = KeyValues3::GetMemberName(pData, v27);
      v30 = MemberName;
      if ( MemberName == 0 )
        goto LABEL_24;
      v31 = strlen(MemberName);
      if ( v31 <= 0 )
        goto LABEL_24;
      if ( *v30 == 0 )
        goto LABEL_24;
      v62 = v31;
      CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::Find(insert, v59, v30, v31);
      v32 = v62;
      if ( insert[0] != 0 )
        goto LABEL_24;
      v33 = saveContext->m_Symbols.m_StringPools.m_Size;
      v34 = (v62 + 16) & 0xFFFFFFF8;
      if ( v33 <= 0 )
        goto LABEL_35;
      v35 = saveContext->m_Symbols.m_StringPools.m_Memory.m_pMemory;
      v36 = *v35;
      v37 = (*v35)->m_SpaceUsed;
      if ( (*v35)->m_TotalLen - v37 < v34 )
        break;
LABEL_48:
      v48 = v36;
LABEL_49:
      v48->m_SpaceUsed = v37 + v34;
      v52 = v32;
      v55 = &v48->m_Data[v37];
      v64 = v48 + v37;
      *(v64 + 1) = HashString(v30);
      memcpy(v64 + 16, v30, v52);
      v64[v52 + 16] = 0;
      v67[0] = v55;
      CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Insert(
        &v59->m_Lookup,
        v67,
        ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
LABEL_24:
      Member = KeyValues3::GetMember(pData, v27);
      if ( !GatherSymbols_R(saveContext, Member) )
        return 0;
      if ( ++v27 == MemberCount )
        return 1;
    }
    v38 = v35 + 1;
    v39 = 0;
    while ( ++v39 != v33 )
    {
      v36 = *v38++;
      v37 = v36->m_SpaceUsed;
      if ( v34 <= v36->m_TotalLen - v37 )
      {
        if ( v39 == -1 )
          break;
        goto LABEL_48;
      }
    }
LABEL_35:
    if ( (v34 + 12LL) > 0x800 )
    {
      v40 = (v62 + 16) & 0xFFFFFFF8;
      v41 = v34 + 12;
    }
    else
    {
      v40 = 2036;
      v41 = 2048;
    }
    v54 = v62;
    v57 = v40;
    v63 = (v62 + 16) & 0xFFFFFFF8;
    v42 = (**g_pMemAlloc)(g_pMemAlloc, v41);
    v42->m_SpaceUsed = 0;
    v34 = v63;
    v32 = v54;
    v42->m_TotalLen = v57;
    v43 = saveContext->m_Symbols.m_StringPools.m_Size;
    v44 = saveContext->m_Symbols.m_StringPools.m_Size;
    if ( v43 == saveContext->m_Symbols.m_StringPools.m_Memory.m_nAllocationCount )
    {
      v53 = v54;
      v56 = saveContext->m_Symbols.m_StringPools.m_Size;
      v58 = v42;
      CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Grow(
        &saveContext->m_Symbols.m_StringPools.m_Memory,
        1);
      v44 = saveContext->m_Symbols.m_StringPools.m_Size;
      v32 = v53;
      v43 = v56;
      v42 = v58;
      v34 = v63;
    }
    v45 = v43;
    saveContext->m_Symbols.m_StringPools.m_Size = v44 + 1;
    v46 = &saveContext->m_Symbols.m_StringPools.m_Memory.m_pMemory[v45];
    if ( v46 != 0 )
    {
      *v46 = v42;
      v47 = &saveContext->m_Symbols.m_StringPools.m_Memory.m_pMemory[v45];
    }
    else
    {
      v47 = 0;
    }
    v48 = *v47;
    v37 = (*v47)->m_SpaceUsed;
    goto LABEL_49;
  }
  v49 = 0;
  ArrayElementCount = KeyValues3::GetArrayElementCount(pData);
  if ( ArrayElementCount <= 0 )
    return 1;
  while ( 1 )
  {
    ArrayElement = KeyValues3::GetArrayElement(pData, v49);
    if ( !GatherSymbols_R(saveContext, ArrayElement) )
      break;
    if ( ++v49 == ArrayElementCount )
      return 1;
  }
  return 0;
}


// PutTypeAndFlags  (line 82, @0x000000000313acf0, libserver.so)  // inlines: PeekPut, PutType<short unsigned int>, PutTypeBin<unsigned char>, PutUnsignedChar, PutUnsignedShort, operator[]
// calls: KeyValues3::GetAllFlags, CUtlBuffer::Printf, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: SaveKV3Binary_R
// strings: "%hu"
void __fastcall PutTypeAndFlags(
        KV3BinarySaveContext_t *const saveContext,
        const KeyValues3 *pData,
        KeyValues3BinaryType_t nType)
{
  unsigned __int8 v3; // r13
  CUtlBuffer *v6; // rbx
  int v7; // edx
  unsigned __int8 v8; // r13
  unsigned __int8 AllFlags; // al
  CUtlBuffer *m_pDestBuffer; // r15
  unsigned __int8 v11; // r12
  unsigned __int8 v12; // r14

  v3 = nType;
  if ( KeyValues3::GetAllFlags(pData) != KeyValues3Flag_t::KEYVALUES3_FLAG_NONE )
  {
    v8 = v3 | 0x80;
    AllFlags = KeyValues3::GetAllFlags(pData);
    m_pDestBuffer = saveContext->m_pDestBuffer;
    v11 = AllFlags;
    v12 = AllFlags;
    if ( (m_pDestBuffer->m_Flags & 1) != 0 )
    {
      CUtlBuffer::Printf(saveContext->m_pDestBuffer, "%hu", v8);
    }
    else if ( CUtlBuffer::CheckPut(saveContext->m_pDestBuffer, 1) )
    {
      m_pDestBuffer->m_Memory.m_pMemory[m_pDestBuffer->m_Put - m_pDestBuffer->m_nOffset] = v8;
      ++m_pDestBuffer->m_Put;
      CUtlBuffer::AddNullTermination(m_pDestBuffer);
    }
    v6 = saveContext->m_pDestBuffer;
    v7 = v12;
    if ( (v6->m_Flags & 1) != 0 )
      goto LABEL_3;
    if ( !CUtlBuffer::CheckPut(v6, 1) )
      return;
    v6->m_Memory.m_pMemory[v6->m_Put - v6->m_nOffset] = v11;
LABEL_11:
    ++v6->m_Put;
    CUtlBuffer::AddNullTermination(v6);
    return;
  }
  v6 = saveContext->m_pDestBuffer;
  v7 = v3;
  if ( (v6->m_Flags & 1) != 0 )
  {
LABEL_3:
    CUtlBuffer::Printf(v6, "%hu", v7);
    return;
  }
  if ( CUtlBuffer::CheckPut(v6, 1) )
  {
    v6->m_Memory.m_pMemory[v6->m_Put - v6->m_nOffset] = v3;
    goto LABEL_11;
  }
}


// SaveKV3Binary_R  (line 99, @0x000000000313ae50, libserver.so)  // inlines: FindElement, LowLevelByteSwap<double>, LowLevelByteSwap<int>, LowLevelByteSwap<long long int>, LowLevelByteSwap<long long unsigned int>, PeekPut, PutDouble, PutInt, PutInt64, PutType<double>, PutType<int>, PutType<long long int>, PutType<long long unsigned int>, PutType<short unsigned int>, PutTypeBin<double>, PutTypeBin<int>, PutTypeBin<long long int>, PutTypeBin<long long unsigned int>, PutTypeBin<unsigned char>, PutUnsignedChar, PutUnsignedInt64, PutUnsignedShort, SwapBufferToTargetEndian<double>, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<long long int>, SwapBufferToTargetEndian<long long unsigned int>, V_memcpy, V_strlen, memcpy, operator[]
// calls: KeyValues3::GetType, PutTypeAndFlags, KeyValues3::GetMemberCount, CUtlBuffer::Printf, KeyValues3::GetMember, KeyValues3::GetMemberName, strlen, CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul>::FindElement, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, KeyValues3::GetDouble, KeyValues3::GetStringRaw (20 total)
// callers: SaveKV3BinaryUncompressed
// strings: "%.15lf", "%hu"
// globals: jpt_313AE8C
bool __fastcall SaveKV3Binary_R(KV3BinarySaveContext_t *const saveContext, const KeyValues3 *pData)
{
  CUtlBuffer *m_pDestBuffer; // rbx
  int MemberCount; // eax
  int v6; // r15d
  int v7; // r13d
  int v8; // esi
  const KeyValues3 *Member; // rax
  const char *MemberName; // rax
  const char *v11; // rsi
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // eax
  bool result; // al
  double Double; // xmm0_8
  const char *StringRaw; // rax
  CUtlSymbolTableLarge *p_m_Symbols; // r14
  const char *v20; // r12
  int v21; // edx
  int Element; // eax
  int v23; // r12d
  int BinaryBlobSize; // eax
  int v25; // r13d
  const uint8 *BinaryBlobBase; // rax
  int ArrayElementCount; // eax
  int v28; // r13d
  int v29; // ebx
  int v30; // esi
  const KeyValues3 *ArrayElement; // rax
  int64 Int64; // rax
  uint64 v33; // r12
  uint64 Uint64; // rax
  bool Bool; // al
  bool v36; // r12
  unsigned __int8 *v37; // rdx
  int v38; // eax
  bool v39; // al
  int v40; // eax
  bool v41; // al
  int v42; // edx
  bool v43; // al
  int m_Put; // edx
  unsigned __int8 *v45; // r11
  __int64 v46; // rsi
  __int64 i; // rdx
  char v48; // r8
  _BYTE *v49; // rdi
  __int64 v50; // rsi
  __int64 j; // rdx
  char v52; // r8
  _BYTE *v53; // rdi
  int v54; // eax
  unsigned __int8 *v55; // rdx
  unsigned __int8 *v56; // r11
  __int64 v57; // rdx
  __int64 v58; // rsi
  char v59; // r8
  _BYTE *v60; // rdi
  unsigned __int8 *v61; // rcx
  unsigned __int8 *v62; // rdx
  unsigned __int8 *v63; // rdx
  const char *pNameb; // [rsp+8h] [rbp-78h]
  int pName; // [rsp+8h] [rbp-78h]
  bool pNamec; // [rsp+8h] [rbp-78h]
  bool pNamed; // [rsp+8h] [rbp-78h]
  const char *pNamea; // [rsp+8h] [rbp-78h]
  bool pNamee; // [rsp+8h] [rbp-78h]
  int v70; // [rsp+1Ch] [rbp-64h]
  int v71; // [rsp+20h] [rbp-60h]
  int v72; // [rsp+24h] [rbp-5Ch]
  int v73; // [rsp+28h] [rbp-58h]
  int v74; // [rsp+2Ch] [rbp-54h]
  int64 v75; // [rsp+30h] [rbp-50h]
  _QWORD v76[2]; // [rsp+38h] [rbp-48h]
  _QWORD v77[7]; // [rsp+48h] [rbp-38h] BYREF

  m_pDestBuffer = saveContext->m_pDestBuffer;
  switch ( KeyValues3::GetType(pData) )
  {
    case KeyValues3Type_t::KEYVALUES3_TYPE_NULL:
      PutTypeAndFlags(saveContext, pData, KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_NULL);
      return 1;
    case KeyValues3Type_t::KEYVALUES3_TYPE_BOOL:
      PutTypeAndFlags(saveContext, pData, KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_BOOL);
      Bool = KeyValues3::GetBool(pData);
      v36 = Bool;
      if ( (m_pDestBuffer->m_Flags & 1) != 0 )
      {
        CUtlBuffer::Printf(m_pDestBuffer, "%hu", Bool);
        return 1;
      }
      else
      {
        v39 = CUtlBuffer::CheckPut(m_pDestBuffer, 1);
        if ( !v39 )
          goto LABEL_25;
        pNamec = v39;
        m_pDestBuffer->m_Memory.m_pMemory[m_pDestBuffer->m_Put - m_pDestBuffer->m_nOffset] = v36;
        ++m_pDestBuffer->m_Put;
        CUtlBuffer::AddNullTermination(m_pDestBuffer);
        return pNamec;
      }
    case KeyValues3Type_t::KEYVALUES3_TYPE_INT64:
      PutTypeAndFlags(saveContext, pData, KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_INT64);
      Int64 = KeyValues3::GetInt64(pData);
      v33 = Int64;
      if ( (m_pDestBuffer->m_Flags & 1) == 0 )
      {
        v75 = Int64;
        v43 = CUtlBuffer::CheckPut(m_pDestBuffer, 8);
        if ( !v43 )
          goto LABEL_25;
        if ( (*&m_pDestBuffer->m_Byteswap & 1) == 0 )
          goto LABEL_75;
        m_Put = m_pDestBuffer->m_Put;
        v45 = &m_pDestBuffer->m_Memory.m_pMemory[m_Put - m_pDestBuffer->m_nOffset];
        if ( v45 == 0 )
          goto LABEL_58;
        v46 = 0;
        v77[0] = *v45;
        for ( i = 8; i != 0; --i )
        {
          v48 = *(&v74 + i + 3);
          v49 = v77 + v46;
          v46 = 9 - i;
          *v49 = v48;
        }
        goto LABEL_64;
      }
      CUtlBuffer::Printf(m_pDestBuffer, "%lld", Int64);
      return 1;
    case KeyValues3Type_t::KEYVALUES3_TYPE_UINT64:
      PutTypeAndFlags(saveContext, pData, KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_UINT64);
      Uint64 = KeyValues3::GetUint64(pData);
      v33 = Uint64;
      if ( (m_pDestBuffer->m_Flags & 1) == 0 )
      {
        v76[0] = Uint64;
        v43 = CUtlBuffer::CheckPut(m_pDestBuffer, 8);
        if ( !v43 )
          goto LABEL_25;
        if ( (*&m_pDestBuffer->m_Byteswap & 1) != 0 )
        {
          m_Put = m_pDestBuffer->m_Put;
          v45 = &m_pDestBuffer->m_Memory.m_pMemory[m_Put - m_pDestBuffer->m_nOffset];
          if ( v45 != 0 )
          {
            v50 = 0;
            v77[0] = *v45;
            for ( j = 8; j != 0; --j )
            {
              v52 = *(&v75 + j + 7);
              v53 = v77 + v50;
              v50 = 9 - j;
              *v53 = v52;
            }
LABEL_64:
            *v45 = v77[0];
            m_Put = m_pDestBuffer->m_Put;
          }
        }
        else
        {
LABEL_75:
          *&m_pDestBuffer->m_Memory.m_pMemory[m_pDestBuffer->m_Put - m_pDestBuffer->m_nOffset] = v33;
          m_Put = m_pDestBuffer->m_Put;
        }
        goto LABEL_58;
      }
      CUtlBuffer::Printf(m_pDestBuffer, "%llu", Uint64);
      return 1;
    case KeyValues3Type_t::KEYVALUES3_TYPE_DOUBLE:
      PutTypeAndFlags(saveContext, pData, KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_DOUBLE);
      Double = KeyValues3::GetDouble(pData);
      if ( (m_pDestBuffer->m_Flags & 1) != 0 )
      {
        CUtlBuffer::Printf(m_pDestBuffer, "%.15lf", Double);
        return 1;
      }
      else
      {
        *&v76[1] = Double;
        pNamea = *&Double;
        v43 = CUtlBuffer::CheckPut(m_pDestBuffer, 8);
        if ( !v43 )
          goto LABEL_25;
        if ( (*&m_pDestBuffer->m_Byteswap & 1) != 0 )
        {
          m_Put = m_pDestBuffer->m_Put;
          v56 = &m_pDestBuffer->m_Memory.m_pMemory[m_Put - m_pDestBuffer->m_nOffset];
          if ( v56 != 0 )
          {
            v57 = 8;
            v58 = 0;
            v77[0] = *v56;
            do
            {
              v59 = *(v76 + v57 + 7);
              v60 = v77 + v58;
              v58 = 9 - v57--;
              *v60 = v59;
            }
            while ( v57 != 0 );
            *v56 = v77[0];
            m_Put = m_pDestBuffer->m_Put;
          }
        }
        else
        {
          *&m_pDestBuffer->m_Memory.m_pMemory[m_pDestBuffer->m_Put - m_pDestBuffer->m_nOffset] = pNamea;
          m_Put = m_pDestBuffer->m_Put;
        }
LABEL_58:
        pNamee = v43;
        m_pDestBuffer->m_Put = m_Put + 8;
        CUtlBuffer::AddNullTermination(m_pDestBuffer);
        return pNamee;
      }
    case KeyValues3Type_t::KEYVALUES3_TYPE_STRING:
      PutTypeAndFlags(saveContext, pData, KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_STRING);
      StringRaw = KeyValues3::GetStringRaw(pData, 0);
      p_m_Symbols = &saveContext->m_Symbols;
      v20 = StringRaw;
      if ( StringRaw != 0 )
        v21 = strlen(StringRaw);
      else
        v21 = 0;
      Element = CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::FindElement(p_m_Symbols, v20, v21);
      v23 = Element;
      if ( (m_pDestBuffer->m_Flags & 1) != 0 )
      {
        CUtlBuffer::Printf(m_pDestBuffer, "%d", Element);
        return 1;
      }
      else
      {
        v70 = Element;
        v41 = CUtlBuffer::CheckPut(m_pDestBuffer, 4);
        if ( !v41 )
          goto LABEL_25;
        if ( (*&m_pDestBuffer->m_Byteswap & 1) != 0 )
        {
          v42 = m_pDestBuffer->m_Put;
          v61 = &m_pDestBuffer->m_Memory.m_pMemory[v42 - m_pDestBuffer->m_nOffset];
          if ( v61 != 0 )
          {
            LOBYTE(v77[0]) = HIBYTE(v70);
            BYTE1(v77[0]) = BYTE2(v70);
            BYTE2(v77[0]) = BYTE1(v70);
            BYTE3(v77[0]) = v70;
            *v61 = v77[0];
            v42 = m_pDestBuffer->m_Put;
          }
        }
        else
        {
          *&m_pDestBuffer->m_Memory.m_pMemory[m_pDestBuffer->m_Put - m_pDestBuffer->m_nOffset] = v23;
          v42 = m_pDestBuffer->m_Put;
        }
        pNamed = v41;
        m_pDestBuffer->m_Put = v42 + 4;
        CUtlBuffer::AddNullTermination(m_pDestBuffer);
        return pNamed;
      }
    case KeyValues3Type_t::KEYVALUES3_TYPE_BINARY_BLOB:
      PutTypeAndFlags(saveContext, pData, KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_BINARY_BLOB);
      BinaryBlobSize = KeyValues3::GetBinaryBlobSize(pData);
      v25 = BinaryBlobSize;
      if ( (m_pDestBuffer->m_Flags & 1) != 0 )
      {
        CUtlBuffer::Printf(m_pDestBuffer, "%d", BinaryBlobSize);
      }
      else
      {
        v71 = BinaryBlobSize;
        if ( CUtlBuffer::CheckPut(m_pDestBuffer, 4) )
        {
          if ( (*&m_pDestBuffer->m_Byteswap & 1) != 0 )
          {
            v40 = m_pDestBuffer->m_Put;
            v62 = &m_pDestBuffer->m_Memory.m_pMemory[v40 - m_pDestBuffer->m_nOffset];
            if ( v62 != 0 )
            {
              LOBYTE(v77[0]) = HIBYTE(v71);
              BYTE1(v77[0]) = BYTE2(v71);
              BYTE2(v77[0]) = BYTE1(v71);
              BYTE3(v77[0]) = v71;
              *v62 = v77[0];
              v40 = m_pDestBuffer->m_Put;
            }
          }
          else
          {
            *&m_pDestBuffer->m_Memory.m_pMemory[m_pDestBuffer->m_Put - m_pDestBuffer->m_nOffset] = v25;
            v40 = m_pDestBuffer->m_Put;
          }
          m_pDestBuffer->m_Put = v40 + 4;
          CUtlBuffer::AddNullTermination(m_pDestBuffer);
        }
      }
      BinaryBlobBase = KeyValues3::GetBinaryBlobBase(pData);
      CUtlBuffer::Put(m_pDestBuffer, BinaryBlobBase, v25);
      goto LABEL_25;
    case KeyValues3Type_t::KEYVALUES3_TYPE_ARRAY:
      PutTypeAndFlags(saveContext, pData, KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_ARRAY);
      ArrayElementCount = KeyValues3::GetArrayElementCount(pData);
      v28 = ArrayElementCount;
      if ( (m_pDestBuffer->m_Flags & 1) != 0 )
      {
        CUtlBuffer::Printf(m_pDestBuffer, "%d", ArrayElementCount);
      }
      else
      {
        v72 = ArrayElementCount;
        if ( CUtlBuffer::CheckPut(m_pDestBuffer, 4) )
        {
          if ( (*&m_pDestBuffer->m_Byteswap & 1) != 0 )
          {
            v54 = m_pDestBuffer->m_Put;
            v63 = &m_pDestBuffer->m_Memory.m_pMemory[v54 - m_pDestBuffer->m_nOffset];
            if ( v63 != 0 )
            {
              LOBYTE(v77[0]) = HIBYTE(v72);
              BYTE1(v77[0]) = BYTE2(v72);
              BYTE2(v77[0]) = BYTE1(v72);
              BYTE3(v77[0]) = v72;
              *v63 = v77[0];
              v54 = m_pDestBuffer->m_Put;
            }
          }
          else
          {
            *&m_pDestBuffer->m_Memory.m_pMemory[m_pDestBuffer->m_Put - m_pDestBuffer->m_nOffset] = v28;
            v54 = m_pDestBuffer->m_Put;
          }
          m_pDestBuffer->m_Put = v54 + 4;
          CUtlBuffer::AddNullTermination(m_pDestBuffer);
        }
      }
      v29 = 0;
      if ( v28 > 0 )
      {
        do
        {
          v30 = v29++;
          ArrayElement = KeyValues3::GetArrayElement(pData, v30);
          SaveKV3Binary_R(saveContext, ArrayElement);
        }
        while ( v29 != v28 );
      }
      goto LABEL_25;
    case KeyValues3Type_t::KEYVALUES3_TYPE_TABLE:
      PutTypeAndFlags(saveContext, pData, KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_TABLE);
      MemberCount = KeyValues3::GetMemberCount(pData);
      v6 = MemberCount;
      if ( (m_pDestBuffer->m_Flags & 1) != 0 )
      {
        CUtlBuffer::Printf(m_pDestBuffer, "%d", MemberCount);
      }
      else
      {
        v73 = MemberCount;
        if ( CUtlBuffer::CheckPut(m_pDestBuffer, 4) )
        {
          if ( (*&m_pDestBuffer->m_Byteswap & 1) != 0 )
          {
            v38 = m_pDestBuffer->m_Put;
            v55 = &m_pDestBuffer->m_Memory.m_pMemory[v38 - m_pDestBuffer->m_nOffset];
            if ( v55 != 0 )
            {
              LOBYTE(v77[0]) = HIBYTE(v73);
              BYTE1(v77[0]) = BYTE2(v73);
              BYTE2(v77[0]) = BYTE1(v73);
              BYTE3(v77[0]) = v73;
              *v55 = v77[0];
              v38 = m_pDestBuffer->m_Put;
            }
          }
          else
          {
            *&m_pDestBuffer->m_Memory.m_pMemory[m_pDestBuffer->m_Put - m_pDestBuffer->m_nOffset] = v6;
            v38 = m_pDestBuffer->m_Put;
          }
          m_pDestBuffer->m_Put = v38 + 4;
          CUtlBuffer::AddNullTermination(m_pDestBuffer);
        }
      }
      v7 = 0;
      if ( v6 > 0 )
      {
        do
        {
          MemberName = KeyValues3::GetMemberName(pData, v7);
          v11 = MemberName;
          if ( MemberName != 0 )
          {
            pNameb = MemberName;
            v12 = strlen(MemberName);
            v11 = pNameb;
            v13 = v12;
          }
          else
          {
            v13 = 0;
          }
          v14 = CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::FindElement(
                  &saveContext->m_Symbols,
                  v11,
                  v13);
          if ( (m_pDestBuffer->m_Flags & 1) != 0 )
          {
            CUtlBuffer::Printf(m_pDestBuffer, "%d", v14);
          }
          else
          {
            v74 = v14;
            pName = v14;
            if ( CUtlBuffer::CheckPut(m_pDestBuffer, 4) )
            {
              if ( (*&m_pDestBuffer->m_Byteswap & 1) != 0 )
              {
                v15 = m_pDestBuffer->m_Put;
                v37 = &m_pDestBuffer->m_Memory.m_pMemory[v15 - m_pDestBuffer->m_nOffset];
                if ( v37 != 0 )
                {
                  LOBYTE(v77[0]) = HIBYTE(v74);
                  BYTE1(v77[0]) = BYTE2(v74);
                  BYTE2(v77[0]) = BYTE1(v74);
                  BYTE3(v77[0]) = v74;
                  *v37 = v77[0];
                  v15 = m_pDestBuffer->m_Put;
                }
              }
              else
              {
                *&m_pDestBuffer->m_Memory.m_pMemory[m_pDestBuffer->m_Put - m_pDestBuffer->m_nOffset] = pName;
                v15 = m_pDestBuffer->m_Put;
              }
              m_pDestBuffer->m_Put = v15 + 4;
              CUtlBuffer::AddNullTermination(m_pDestBuffer);
            }
          }
          v8 = v7++;
          Member = KeyValues3::GetMember(pData, v8);
          SaveKV3Binary_R(saveContext, Member);
        }
        while ( v7 != v6 );
      }
LABEL_25:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// SaveKV3BinaryUncompressed  (line 195, @0x000000000313b6f0, libserver.so)  // inlines: GetElementString, LowLevelByteSwap<int>, LowLevelByteSwap<unsigned int>, PeekPut, PutInt, PutType<int>, PutType<unsigned int>, PutTypeBin<int>, PutTypeBin<unsigned int>, PutUnsignedInt, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::Printf, CUtlBuffer::PutString, SaveKV3Binary_R, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: SaveKV3Binary
bool __fastcall SaveKV3BinaryUncompressed(KV3BinarySaveContext_t *const saveContext, const KeyValues3 *pRoot)
{
  CUtlBuffer *m_pDestBuffer; // rbx
  __int64 m_NumElements; // r13
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  CUtlSymbolTableLargeBaseTreeEntry_t *m_Data; // rax
  bool v9; // bl
  int m_Put; // eax
  CUtlBuffer *v12; // r12
  unsigned __int8 *v13; // rdx
  bool v14; // r13
  int v15; // eax
  unsigned __int8 *v16; // rdx
  int v17; // [rsp+Ch] [rbp-24h]

  m_pDestBuffer = saveContext->m_pDestBuffer;
  m_NumElements = saveContext->m_Symbols.m_Lookup.m_NumElements;
  if ( (m_pDestBuffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(saveContext->m_pDestBuffer, "%d", m_NumElements);
  }
  else if ( CUtlBuffer::CheckPut(saveContext->m_pDestBuffer, 4) )
  {
    if ( (*&m_pDestBuffer->m_Byteswap & 1) != 0 )
    {
      m_Put = m_pDestBuffer->m_Put;
      v13 = &m_pDestBuffer->m_Memory.m_pMemory[m_Put - m_pDestBuffer->m_nOffset];
      if ( v13 != 0 )
      {
        LOBYTE(v17) = BYTE3(m_NumElements);
        BYTE1(v17) = BYTE2(m_NumElements);
        BYTE2(v17) = BYTE1(m_NumElements);
        HIBYTE(v17) = m_NumElements;
        *v13 = v17;
        m_Put = m_pDestBuffer->m_Put;
      }
    }
    else
    {
      *&m_pDestBuffer->m_Memory.m_pMemory[m_pDestBuffer->m_Put - m_pDestBuffer->m_nOffset] = m_NumElements;
      m_Put = m_pDestBuffer->m_Put;
    }
    m_pDestBuffer->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(m_pDestBuffer);
  }
  if ( m_NumElements > 0 )
  {
    v6 = 0;
    v7 = 8 * (5LL * (m_NumElements - 1) + 5);
    do
    {
      m_Data = saveContext->m_Symbols.m_Lookup.m_Elements.m_pMemory[v6 / 0x28].m_Data;
      v6 += 40LL;
      CUtlBuffer::PutString(saveContext->m_pDestBuffer, m_Data->m_String);
    }
    while ( v6 != v7 );
  }
  v9 = SaveKV3Binary_R(saveContext, pRoot);
  if ( !v9 )
    return v9;
  v12 = saveContext->m_pDestBuffer;
  if ( (v12->m_Flags & 1) == 0 )
  {
    v14 = CUtlBuffer::CheckPut(v12, 4);
    if ( v14 )
    {
      if ( (*&v12->m_Byteswap & 1) != 0 )
      {
        v15 = v12->m_Put;
        v16 = &v12->m_Memory.m_pMemory[v15 - v12->m_nOffset];
        if ( v16 != 0 )
        {
          *v16 = -1;
          v15 = v12->m_Put;
        }
      }
      else
      {
        *&v12->m_Memory.m_pMemory[v12->m_Put - v12->m_nOffset] = -1;
        v15 = v12->m_Put;
      }
      v9 = v14;
      v12->m_Put = v15 + 4;
      CUtlBuffer::AddNullTermination(v12);
    }
    return v9;
  }
  CUtlBuffer::Printf(v12, "%u", -1);
  return v9;
}


// SaveKV3Binary  (line 218, @0x000000000313bd80, libserver.so)  // inlines: CNonThreadsafeTree, CUtlMemory, CUtlRBTree, CUtlSymbolTableLargeBase, CUtlVector, CUtlVectorBase, KV3BinarySaveContext_t, LowLevelByteSwap<unsigned int>, PeekPut, Plat_CompareUUIDs, Purge, PutType<unsigned int>, PutTypeBin<unsigned int>, PutUnsignedInt, RemoveAll, ResetDbgInfo, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator!=, operator==, operator[], ~CNonThreadsafeTree, ~CUtlBuffer, ~CUtlMemory, ~CUtlRBTree, ~CUtlSymbolTableLargeBase, ~CUtlVector, ~CUtlVectorBase, ~KV3BinarySaveContext_t
// calls: memcmp, CUtlString::operator=, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CUtlBuffer::Put, CMemAllocSystemInitialize, GatherSymbols_R, CUtlBuffer::CUtlBuffer, SaveKV3BinaryUncompressed, CUtlBuffer::EnsureCapacity, CBlockCompress::FastCompress, CUtlBuffer::SeekPut (18 total)
// callers: SaveKV3
// strings: "Unsupported binary encoding id.", "Can't write binary data to a text buffer."
// globals: KV3_ENCODING_BINARY_BLOCK_COMPRESSED, KV3_ENCODING_BINARY_UNCOMPRESSED
bool __fastcall SaveKV3Binary(
        const V_uuid_t *const encodingId,
        const V_uuid_t *const formatId,
        const KeyValues3 *pRoot,
        CUtlString *pOutErrorMessage,
        CUtlBuffer *pDestBuffer)
{
  CUtlString *v9; // rdi
  bool v10; // r13
  int m_Put; // eax
  __int64 v12; // rdi
  uint32 v13; // eax
  __int64 v14; // r14
  int v15; // r12d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v16; // rsi
  unsigned __int8 *v18; // rdx
  uint32 pRootb; // [rsp+8h] [rbp-F8h]
  CUtlBuffer tempBuffer; // [rsp+10h] [rbp-F0h] BYREF
  KV3BinarySaveContext_t saveContext; // [rsp+60h] [rbp-A0h] BYREF

  if ( (pDestBuffer->m_Flags & 1) != 0 )
  {
    v10 = 0;
    CUtlString::operator=(pOutErrorMessage, "Can't write binary data to a text buffer.");
  }
  else if ( memcmp(encodingId, &KV3_ENCODING_BINARY_BLOCK_COMPRESSED, 0x10u) == 0
         || memcmp(encodingId, &KV3_ENCODING_BINARY_UNCOMPRESSED, 0x10u) == 0 )
  {
    if ( CUtlBuffer::CheckPut(pDestBuffer, 4) )
    {
      if ( (*&pDestBuffer->m_Byteswap & 1) != 0 )
      {
        m_Put = pDestBuffer->m_Put;
        v18 = &pDestBuffer->m_Memory.m_pMemory[m_Put - pDestBuffer->m_nOffset];
        if ( v18 != 0 )
        {
          LODWORD(saveContext.m_pOutErrorMessage) = 1447777795;
          *v18 = 1447777795;
          m_Put = pDestBuffer->m_Put;
        }
      }
      else
      {
        *&pDestBuffer->m_Memory.m_pMemory[pDestBuffer->m_Put - pDestBuffer->m_nOffset] = &unk_3564B56;
        m_Put = pDestBuffer->m_Put;
      }
      pDestBuffer->m_Put = m_Put + 4;
      CUtlBuffer::AddNullTermination(pDestBuffer);
    }
    CUtlBuffer::Put(pDestBuffer, encodingId, 16);
    CUtlBuffer::Put(pDestBuffer, formatId, 16);
    saveContext.m_Symbols.m_Lookup.m_Elements.m_nAllocationCount = 16;
    saveContext.m_Symbols.m_Lookup.m_Elements.m_pMemory = 0;
    saveContext.m_Symbols.m_Lookup.m_Elements.m_nGrowSize = 0;
    CMemAllocSystemInitialize(v12);
    saveContext.m_Symbols.m_Lookup.m_Elements.m_pMemory = (**g_pMemAlloc)(
                                                            g_pMemAlloc,
                                                            40LL
                                                          * saveContext.m_Symbols.m_Lookup.m_Elements.m_nAllocationCount);
    saveContext.m_Symbols.m_Lookup.m_Root = -1;
    saveContext.m_Symbols.m_Lookup.m_NumElements = 0;
    saveContext.m_Symbols.m_Lookup.m_FirstFree = -1;
    saveContext.m_Symbols.m_Lookup.m_LastAlloc.index = -1;
    saveContext.m_Symbols.m_Lookup.m_pElements = saveContext.m_Symbols.m_Lookup.m_Elements.m_pMemory;
    saveContext.m_Symbols.m_StringPools.m_Size = 0;
    saveContext.m_Symbols.m_StringPools.m_Memory.m_pMemory = 0;
    saveContext.m_Symbols.m_StringPools.m_Memory.m_nAllocationCount = 0;
    saveContext.m_Symbols.m_StringPools.m_Memory.m_nGrowSize = 8;
    saveContext.m_pOutErrorMessage = pOutErrorMessage;
    saveContext.m_pDestBuffer = 0;
    v10 = GatherSymbols_R(&saveContext, pRoot);
    if ( v10 )
    {
      if ( memcmp(encodingId, &KV3_ENCODING_BINARY_BLOCK_COMPRESSED, 0x10u) == 0 )
      {
        CUtlBuffer::CUtlBuffer(&tempBuffer, 0, 0, 0);
        saveContext.m_pDestBuffer = &tempBuffer;
        v10 = SaveKV3BinaryUncompressed(&saveContext, pRoot);
        if ( v10 )
        {
          pRootb = tempBuffer.m_nMaxPut;
          CUtlBuffer::EnsureCapacity(pDestBuffer, pDestBuffer->m_Put + tempBuffer.m_nMaxPut + 4);
          v13 = CBlockCompress::FastCompress(
                  tempBuffer.m_Memory.m_pMemory,
                  pRootb,
                  &pDestBuffer->m_Memory.m_pMemory[pDestBuffer->m_Put],
                  pRootb + 4);
          CUtlBuffer::SeekPut(pDestBuffer, CUtlBuffer::SeekType_t::SEEK_CURRENT, v13);
        }
        CUtlMemory<unsigned char,int>::Purge(&tempBuffer.m_Memory);
      }
      else
      {
        saveContext.m_pDestBuffer = pDestBuffer;
        v10 = SaveKV3BinaryUncompressed(&saveContext, pRoot);
      }
    }
    v14 = 0;
    v15 = 0;
    CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&saveContext.m_Symbols.m_Lookup);
    if ( saveContext.m_Symbols.m_StringPools.m_Size > 0 )
    {
      do
      {
        ++v15;
        v16 = saveContext.m_Symbols.m_StringPools.m_Memory.m_pMemory[v14++];
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v16);
      }
      while ( v15 < saveContext.m_Symbols.m_StringPools.m_Size );
    }
    saveContext.m_Symbols.m_StringPools.m_Size = 0;
    if ( (saveContext.m_Symbols.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    {
      saveContext.m_Symbols.m_StringPools.m_Size = 0;
    }
    else
    {
      CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&saveContext.m_Symbols.m_StringPools.m_Memory);
      saveContext.m_Symbols.m_StringPools.m_Size = 0;
      if ( (saveContext.m_Symbols.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&saveContext.m_Symbols.m_StringPools.m_Memory);
        if ( (saveContext.m_Symbols.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&saveContext.m_Symbols.m_StringPools.m_Memory);
      }
    }
    CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&saveContext.m_Symbols.m_Lookup);
    if ( (saveContext.m_Symbols.m_Lookup.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>::Purge(&saveContext.m_Symbols.m_Lookup.m_Elements);
  }
  else
  {
    v9 = pOutErrorMessage;
    v10 = 0;
    CUtlString::operator=(v9, "Unsupported binary encoding id.");
  }
  return v10;
}


