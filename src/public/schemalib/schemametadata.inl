
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSchemaMetadataSet::GetPtr  (line 77, @0x0000000001ec3f20, libserver.so)  // inlines: Count, _V_strcmp
// calls: strcmp
// callers: CSchemaClassInfo::MetaGetPtr, CSchemaFieldIterator::GetMetaPtr
void *__fastcall CSchemaMetadataSet::GetPtr(const CSchemaMetadataSet *const this, const char *pTagName)
{
  unsigned int v4; // eax
  char *m_pImplElements; // rbx
  char *v6; // r13
  unsigned int v8; // eax
  __int64 v9; // r13

  v4 = abs32(this->m_StaticEntries.m_Data.m_nImplLength);
  if ( v4 != 0 )
  {
    m_pImplElements = this->m_StaticEntries.m_Data.m_pImplElements;
    v6 = this->m_StaticEntries.m_Data.m_pImplElements + 32 * v4;
    while ( strcmp(*m_pImplElements, pTagName) != 0 )
    {
      m_pImplElements += 32;
      if ( m_pImplElements == v6 )
        goto LABEL_6;
    }
    return *(m_pImplElements + 3);
  }
LABEL_6:
  v8 = abs32(this->m_DynamicEntries.m_Data.m_nImplLength);
  if ( v8 != 0 )
  {
    m_pImplElements = this->m_DynamicEntries.m_Data.m_pImplElements;
    v9 = &m_pImplElements[32 * v8];
    while ( strcmp(*m_pImplElements, pTagName) != 0 )
    {
      m_pImplElements += 32;
      if ( m_pImplElements == v9 )
        return 0;
    }
    return *(m_pImplElements + 3);
  }
  return 0;
}


// CSchemaMetadataSet::AddDynamicEntry  (line 148, @0x0000000001eee120, libserver.so)  // inlines: AddToTailDynamic, Count, DeallocateDynamic, Element, MemAlloc_AllocAlignedFunc, MemAlloc_FreeAlignedFunc, MemAlloc_ReallocAlignedFunc, SetCountDynamic, SetDynamic, V_memcpy, V_memset, V_strlen, V_strncpy<long unsigned int>, memcpy, memset, operator[]
// calls: memcpy, strlen, _V_strncpy, Plat_IsInDebugSessionRaw, MemAlloc_AllocAlignedFunc
// callers: InitDataDescSchema
void __fastcall CSchemaMetadataSet::AddDynamicEntry(
        CSchemaMetadataSet *const this,
        const char *pTagName,
        CSchemaType *pTagDataType,
        void *pTagData)
{
  int32 m_nImplLength; // eax
  signed int v8; // r15d
  int v9; // r10d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r9
  void *m_pImplElements; // r11
  __int64 v13; // rax
  _QWORD *v14; // rcx
  int *v15; // rbx
  unsigned int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r9
  int v23; // eax
  __int64 v24; // r15
  __int64 v25; // rax
  void *v26; // rax
  size_t v27; // rdx
  _QWORD *v28; // rax
  void *v29; // [rsp+8h] [rbp-58h]
  void *srca; // [rsp+10h] [rbp-50h]
  int src; // [rsp+10h] [rbp-50h]
  unsigned __int64 v32; // [rsp+18h] [rbp-48h]
  int v33; // [rsp+18h] [rbp-48h]
  unsigned __int64 v34; // [rsp+18h] [rbp-48h]
  int nb; // [rsp+20h] [rbp-40h]
  _QWORD *n; // [rsp+20h] [rbp-40h]
  size_t na; // [rsp+20h] [rbp-40h]

  m_nImplLength = this->m_DynamicEntries.m_Data.m_nImplLength;
  v8 = abs32(m_nImplLength);
  v9 = v8 + 1;
  v10 = 32LL * v8;
  v11 = v10 + 32;
  if ( m_nImplLength >= 0 )
  {
    m_pImplElements = this->m_DynamicEntries.m_Data.m_pImplElements;
    if ( v10 == -32 )
    {
      v14 = 0;
    }
    else
    {
      srca = this->m_DynamicEntries.m_Data.m_pImplElements;
      v13 = (**g_pMemAlloc)(g_pMemAlloc, v10 + 47);
      v9 = v8 + 1;
      v11 = v10 + 32;
      m_pImplElements = srca;
      v14 = ((v13 + 15) & 0xFFFFFFFFFFFFFFF8LL);
      *(v14 - 1) = v13;
    }
    this->m_DynamicEntries.m_Data.m_pImplElements = v14;
    if ( v8 != 0 )
    {
      if ( v9 <= v8 )
        v8 = v9;
      v32 = v11;
      nb = v9;
      memcpy(v14, m_pImplElements, 32LL * v8);
      v14 = this->m_DynamicEntries.m_Data.m_pImplElements;
      v9 = nb;
      v11 = v32;
    }
    if ( v10 >= v11 )
      goto LABEL_9;
LABEL_15:
    v20 = &v14[v10 / 8];
    *v20 = 0;
    v20[1] = 0;
    v20[2] = 0;
    v20[3] = 0;
    v14 = this->m_DynamicEntries.m_Data.m_pImplElements;
    goto LABEL_9;
  }
  v21 = this->m_DynamicEntries.m_Data.m_pImplElements;
  if ( v21 != 0 )
  {
    if ( v10 == -32 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((v21 & 0xFFFFFFFFFFFFFFF8LL) - 8));
      v9 = v8 + 1;
      v14 = 0;
      v22 = 0;
    }
    else if ( (v21 & 7) != 0 )
    {
      v23 = Plat_IsInDebugSessionRaw();
      v14 = 0;
      v9 = v8 + 1;
      v22 = v10 + 32;
      if ( v23 != 0 )
        __debugbreak();
    }
    else
    {
      v33 = v8 + 1;
      v24 = *((v21 & 0xFFFFFFFFFFFFFFF8LL) - 8);
      n = this->m_DynamicEntries.m_Data.m_pImplElements;
      v25 = (*(*g_pMemAlloc + 128LL))(g_pMemAlloc, v24);
      v14 = n;
      v22 = v10 + 32;
      v9 = v33;
      if ( v10 + 32 > v25 + v24 - n )
      {
        src = v33;
        v29 = n;
        v34 = v25 + v24 - n;
        v26 = MemAlloc_AllocAlignedFunc(v10 + 32, 8u);
        v27 = v34;
        na = v26;
        if ( v34 > v10 + 32 )
          v27 = v10 + 32;
        memcpy(v26, v29, v27);
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v24);
        v9 = src;
        v22 = v10 + 32;
        v14 = na;
      }
    }
  }
  else
  {
    v28 = MemAlloc_AllocAlignedFunc(v10 + 32, 8u);
    v22 = v10 + 32;
    v14 = v28;
    v9 = v8 + 1;
  }
  this->m_DynamicEntries.m_Data.m_pImplElements = v14;
  if ( v10 < v22 )
    goto LABEL_15;
LABEL_9:
  v15 = &v14[v10 / 8];
  this->m_DynamicEntries.m_Data.m_nImplLength = -v9;
  if ( v15[2] < 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *v15);
  *v15 = 0;
  v15[2] = 0;
  if ( pTagName != 0 && *pTagName != 0 )
  {
    v16 = strlen(pTagName) + 1;
    v17 = (**g_pMemAlloc)(g_pMemAlloc, v16);
    *v15 = v17;
    _V_strncpy(v17, pTagName, v16, v18, v19);
    v15[2] = -v16;
  }
  *(v15 + 3) = pTagData;
  *(v15 + 2) = pTagDataType;
}


