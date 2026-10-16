
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntityKeyComplex<CEconItemView>::DeleteThis  (line 157, @0x0000000002653b40, libserver.so)  // inlines: ~CEntityKeyComplex
// calls: CEconItemView::~CEconItemView, operator delete
void __fastcall CEntityKeyComplex<CEconItemView>::DeleteThis(CEntityKeyComplex<CEconItemView> *const this)
{
  if ( this != 0 )
  {
    this->_vptr_IEntityKeyComplex = &off_41699A0;
    CEconItemView::~CEconItemView(&this->m_Value);
    operator delete(this);
  }
}


// CEntityKeyValues::FindKeyHash  (line 287, @0x00000000021e6790, libserver.so)  // inlines: Base, Element, operator[]
// callers: GetDebugHistory
int __fastcall CEntityKeyValues::FindKeyHash(const CEntityKeyValues *const this, EntityKeyId_t key)
{
  int result; // eax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // r8
  __int64 v4; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx

  result = -1;
  if ( this->m_keyHashes.m_nCount > 0 )
  {
    m_nAllocated = this->m_keyHashes.m_nAllocated;
    v4 = 0;
    do
    {
      result = v4;
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = this->m_keyHashes.m_pElements;
        if ( key.m_nHashCode == m_pElements[v4] )
          return result;
      }
      else if ( key.m_nHashCode == *(4 * v4) )
      {
        return result;
      }
      ++v4;
    }
    while ( this->m_keyHashes.m_nCount > v4 );
    return -1;
  }
  return result;
}


// CEntityKeyValues::AddKeyValue<CVariantBase<CEntityVariantAllocator> >  (line 298, @0x0000000001f990b0, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, Allocate, Allocate<QAngle>, Allocate<Quaternion>, Allocate<Vector2D>, AssignTo<CEntityVariantAllocator>, Base, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, Element, EnsureCapacity, Free, LeafCodeInfo_t, V_strlen, memcpy, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, CEntityVariantAllocator::Allocate, strlen, memcpy, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: SetupEntityKeyValuesFromTable, CEntityKeyValues::CopyFrom
// strings: "../../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow"
// globals: jpt_1F991CD
int __fastcall CEntityKeyValues::AddKeyValue<CVariantBase<CEntityVariantAllocator>>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        const CVariantBase<CEntityVariantAllocator> *const value,
        const char *pAttributeName)
{
  unsigned int m_nCount; // eax
  unsigned __int64 m_nAllocated; // rcx
  int v8; // r14d
  int v9; // edi
  uint32 m_nHashCode; // r9d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v12; // dx
  int v13; // ebx
  int v14; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v15; // rax
  __int64 v16; // rbx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // rax
  __int64 v18; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v19; // rbx
  uint16 m_flags; // ax
  int16 m_type; // si
  int v22; // edx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v23; // rax
  uint16 v24; // ax
  _DWORD *m_uint64; // r15
  _DWORD *v26; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v27; // rax
  uint16 v29; // ax
  _DWORD *v30; // r15
  _DWORD *v31; // rax
  uint16 v32; // ax
  _DWORD *v33; // r15
  _DWORD *v34; // rax
  uint16 v35; // ax
  uint16 v36; // ax
  const char *v37; // r15
  void *v38; // rax
  uint16 v39; // ax
  void *v40; // rcx
  unsigned __int64 v41; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rsi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // [rsp+0h] [rbp-60h]
  __int64 v50; // [rsp+8h] [rbp-58h]
  __int64 v51; // [rsp+8h] [rbp-58h]
  __int64 v52; // [rsp+8h] [rbp-58h]
  signed int v53; // [rsp+8h] [rbp-58h]
  LeafCodeInfo_t v55; // [rsp+10h] [rbp-50h] BYREF

  m_nCount = this->m_keyHashes.m_nCount;
  if ( m_nCount == 0x7FFF )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_60;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v46, v47, v44, v45) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_60:
      v55.m_szFile = "../../public/tier1/utlleanvector.h";
      v55.m_szFunction = "AddToTailGetPtr";
      v55.m_nLine = 557;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v55,
        "%s allocation count overflow",
        "AddToTailGetPtr");
    }
  }
  m_nAllocated = this->m_keyHashes.m_nAllocated;
  v8 = m_nCount;
  v9 = m_nCount + 1;
  m_nHashCode = key.m_nHashCode;
  v12 = m_nCount;
  if ( v9 > m_nAllocated )
  {
    LOWORD(v13) = m_nCount + 1;
    if ( v9 > 9 )
    {
      v13 = m_nAllocated;
      while ( 1 )
      {
        v14 = v13;
        if ( v9 <= v13 )
          break;
        if ( v13 <= 16382 )
        {
          v22 = 2 * v13;
          v13 = 8;
          if ( 2 * v14 > 7 )
            v13 = v22;
        }
        else
        {
          v13 = 0x7FFF;
        }
      }
    }
    if ( m_nAllocated > 9 )
    {
      v23 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_keyHashes.m_pElements, 4LL * v13);
      v12 = this->m_keyHashes.m_nCount;
      this->m_keyHashes.m_pElements = v23;
      m_nHashCode = key.m_nHashCode;
      v8 = v12;
    }
    else
    {
      v12 = m_nCount;
      if ( v13 > 9 )
      {
        v40 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v13, m_nCount);
        v41 = this->m_keyHashes.m_nAllocated;
        if ( v41 != 0 )
        {
          m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
          if ( v41 > 9 )
            m_pElements = this->m_keyHashes.m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        v43 = memcpy(v40, m_pElements, 4LL * this->m_keyHashes.m_nCount);
        v12 = this->m_keyHashes.m_nCount;
        this->m_keyHashes.m_pElements = v43;
        m_nHashCode = key.m_nHashCode;
        v8 = v12;
      }
    }
    this->m_keyHashes.m_nAllocated = v13;
    m_nAllocated = v13;
  }
  this->m_keyHashes.m_nCount = v12 + 1;
  if ( m_nAllocated != 0 )
  {
    v15 = (&this->m_keyHashes.m_nAllocAllocated + 1);
    if ( m_nAllocated > 9 )
      v15 = this->m_keyHashes.m_pElements;
  }
  else
  {
    v15 = 0;
  }
  v16 = v12;
  v15[v12] = m_nHashCode;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
  if ( this->m_keyValues.m_nAllocated != 0 )
    v17 = this->m_keyValues.m_pElements;
  else
    v17 = 0;
  v18 = 24 * v16;
  v19 = &v17[v16];
  m_flags = v19->m_value.m_flags;
  if ( (m_flags & 1) != 0 )
    v19->m_value.m_flags = m_flags & 0xFFFE;
  v19->m_value.m_uint64 = 0;
  v19->m_value.m_type = 0;
  m_type = value->m_type;
  switch ( m_type )
  {
    case 3:
      v24 = v19->m_value.m_flags;
      m_uint64 = value->m_uint64;
      if ( (v24 & 1) != 0 )
        v19->m_value.m_flags = v24 & 0xFFFE;
      v50 = v18;
      v19->m_value.m_type = 3;
      goto LABEL_26;
    case 4:
      v29 = v19->m_value.m_flags;
      v30 = value->m_uint64;
      if ( (v29 & 1) != 0 )
        v19->m_value.m_flags = v29 & 0xFFFE;
      v51 = v18;
      v19->m_value.m_type = 4;
      goto LABEL_33;
    case 25:
      v32 = v19->m_value.m_flags;
      v33 = value->m_uint64;
      if ( (v32 & 1) != 0 )
        v19->m_value.m_flags = v32 & 0xFFFE;
      v52 = v18;
      v19->m_value.m_type = 25;
      v34 = CEntityVariantAllocator::Allocate(8u);
      v18 = v52;
      v19->m_value.m_uint64 = v34;
      *v34 = *v33;
      v34[1] = v33[1];
      v19->m_value.m_flags |= 1u;
      goto LABEL_27;
    case 27:
      v35 = v19->m_value.m_flags;
      v30 = value->m_uint64;
      if ( (v35 & 1) != 0 )
        v19->m_value.m_flags = v35 & 0xFFFE;
      v51 = v18;
      v19->m_value.m_type = 27;
LABEL_33:
      v31 = CEntityVariantAllocator::Allocate(0x10u);
      v19->m_value.m_uint64 = v31;
      *v31 = *v30;
      v31[1] = v30[1];
      v31[2] = v30[2];
      v31[3] = v30[3];
      v19->m_value.m_flags |= 1u;
      v18 = v51;
      if ( this->m_keyValues.m_nAllocated == 0 )
        goto LABEL_34;
      goto LABEL_28;
    case 30:
      v36 = v19->m_value.m_flags;
      v37 = value->m_uint64;
      if ( (v36 & 1) != 0 )
        v19->m_value.m_flags = v36 & 0xFFFE;
      v19->m_value.m_type = 30;
      if ( v37 != 0 )
      {
        v48 = v18;
        v53 = strlen(v37) + 1;
        v38 = CEntityVariantAllocator::Allocate(v53);
        v19->m_value.m_uint64 = v38;
        memcpy(v38, v37, v53);
        v18 = v48;
        v19->m_value.m_flags |= 1u;
      }
      goto LABEL_27;
    case 39:
      v39 = v19->m_value.m_flags;
      m_uint64 = value->m_uint64;
      if ( (v39 & 1) != 0 )
        v19->m_value.m_flags = v39 & 0xFFFE;
      v50 = v18;
      v19->m_value.m_type = 39;
LABEL_26:
      v26 = CEntityVariantAllocator::Allocate(0xCu);
      v19->m_value.m_uint64 = v26;
      *v26 = *m_uint64;
      v26[1] = m_uint64[1];
      v26[2] = m_uint64[2];
      v19->m_value.m_flags |= 1u;
      v18 = v50;
      goto LABEL_27;
    default:
      v19->m_value.m_type = m_type;
      v19->m_value.m_uint64 = value->m_uint64;
LABEL_27:
      if ( this->m_keyValues.m_nAllocated != 0 )
LABEL_28:
        v27 = this->m_keyValues.m_pElements;
      else
LABEL_34:
        v27 = 0;
      *(&v27->m_pAttributeName + v18) = pAttributeName;
      return v8;
  }
}


// CEntityKeyValues::AddKeyValue<Vector>  (line 298, @0x0000000002e66ad0, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, Allocate, Allocate<QAngle>, Allocate<Quaternion>, Allocate<Vector2D>, Allocate<Vector>, AssignTo<CEntityVariantAllocator>, Base, CVariantBase, Construct<CEntityKeyValues::KeyValueInfo_t>, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, CopyData<Vector>, Destruct<CEntityKeyValues::KeyValueInfo_t>, Element, EnsureCapacity, Free, KeyValueInfo_t, LeafCodeInfo_t, V_strlen, memcpy, operator=, operator[], ~CVariantBase, ~KeyValueInfo_t
// calls: CEntityVariantAllocator::Allocate, strlen, memcpy, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CItemGeneration::SpawnItem
// strings: "../../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow"
// globals: jpt_2E66C94
// write access to const memory has been detected, the output may be wrong!
int __fastcall CEntityKeyValues::AddKeyValue<Vector>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        const Vector *const value,
        const char *pAttributeName)
{
  CEntityKeyValues *v4; // r13
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nCount; // si
  unsigned __int64 m_nAllocated; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v8; // r15
  int v9; // edx
  int v10; // ebx
  int v11; // eax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v12; // rax
  __int16 v13; // r15
  int v14; // edx
  int v15; // eax
  __int16 v16; // ax
  CEntityKeyValues *v17; // r9
  __int16 v18; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v19; // r15
  __int64 v20; // r12
  __int64 v21; // rbx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v22; // r12
  int16 m_type; // dx
  __int16 v24; // ax
  const char *v25; // rdx
  _DWORD *v26; // rax
  uint16 m_flags; // ax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v28; // ax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v29; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v30; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v31; // r8
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v32; // rbx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v33; // rbx
  uint16 v34; // ax
  vec_t *v35; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v36; // rax
  __int16 v38; // ax
  const char *v39; // rsi
  void *v40; // rax
  __int16 v41; // ax
  const char *v42; // rdx
  _DWORD *v43; // rax
  __int16 v44; // ax
  const char *v45; // rdx
  _DWORD *v46; // rax
  __int16 v47; // ax
  const char *v48; // rdx
  __int16 v49; // ax
  const char *m_uint64; // rdx
  bool v51; // cc
  int v52; // edi
  __int64 v53; // rax
  void *v54; // rcx
  unsigned __int64 v55; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rsi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdi
  __int64 v61; // rsi
  const char *v62; // rax
  CEntityKeyValues *v63; // [rsp+8h] [rbp-98h]
  CEntityKeyValues *src; // [rsp+10h] [rbp-90h]
  const char *srcb; // [rsp+10h] [rbp-90h]
  CEntityKeyValues *srca; // [rsp+10h] [rbp-90h]
  CEntityKeyValues *srcc; // [rsp+10h] [rbp-90h]
  const char *v68; // [rsp+18h] [rbp-88h]
  signed int v69; // [rsp+18h] [rbp-88h]
  const char *v70; // [rsp+18h] [rbp-88h]
  const char *v71; // [rsp+18h] [rbp-88h]
  __int64 v74; // [rsp+30h] [rbp-70h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v75; // [rsp+3Ah] [rbp-66h]
  int nIdx; // [rsp+3Ch] [rbp-64h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v77; // [rsp+40h] [rbp-60h]
  __int64 v78; // [rsp+48h] [rbp-58h]
  LeafCodeInfo_t v79; // [rsp+50h] [rbp-50h] BYREF

  v4 = this;
  m_nCount = this->m_keyHashes.m_nCount;
  if ( this->m_keyHashes.m_nCount == 0x7FFF )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v79.m_nLine = 557;
      v79.m_szFile = "../../public/tier1/utlleanvector.h";
      v62 = "AddToTailGetPtr";
      goto LABEL_92;
    }
    goto LABEL_88;
  }
  m_nAllocated = this->m_keyHashes.m_nAllocated;
  v8 = this->m_keyHashes.m_nCount;
  v9 = m_nCount + 1;
  nIdx = m_nCount;
  if ( v9 > m_nAllocated )
  {
    LOWORD(v10) = m_nCount + 1;
    if ( v9 > 9 )
    {
      v10 = this->m_keyHashes.m_nAllocated;
      while ( 1 )
      {
        v11 = v10;
        if ( v9 <= v10 )
          break;
        if ( v10 <= 16382 )
        {
          v52 = 2 * v10;
          v10 = 8;
          if ( 2 * v11 > 7 )
            v10 = v52;
        }
        else
        {
          v10 = 0x7FFF;
        }
      }
    }
    if ( m_nAllocated > 9 )
    {
      v53 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v4->m_keyHashes.m_pElements, 4LL * v10);
      v8 = v4->m_keyHashes.m_nCount;
      v4->m_keyHashes.m_pElements = v53;
      nIdx = v8;
    }
    else
    {
      v8 = m_nCount;
      if ( v10 > 9 )
      {
        v54 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v10);
        v55 = v4->m_keyHashes.m_nAllocated;
        if ( v55 != 0 )
        {
          m_pElements = (&v4->m_keyHashes.m_nAllocAllocated + 1);
          if ( v55 > 9 )
            m_pElements = v4->m_keyHashes.m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        v57 = memcpy(v54, m_pElements, 4LL * v4->m_keyHashes.m_nCount);
        v8 = v4->m_keyHashes.m_nCount;
        v4->m_keyHashes.m_pElements = v57;
        nIdx = v8;
      }
    }
    v4->m_keyHashes.m_nAllocated = v10;
    m_nAllocated = v10;
  }
  v4->m_keyHashes.m_nCount = v8 + 1;
  if ( m_nAllocated != 0 )
  {
    v12 = (&v4->m_keyHashes.m_nAllocAllocated + 1);
    if ( m_nAllocated > 9 )
      v12 = v4->m_keyHashes.m_pElements;
  }
  else
  {
    v12 = 0;
  }
  v12[v8] = key.m_nHashCode;
  v74 = v8;
  v75 = v4->m_keyValues.m_nCount;
  if ( v75 == 0x7FFF )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_91;
    while ( 1 )
    {
LABEL_88:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v60, v61, v58, v59) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_91:
      v79.m_nLine = 557;
      v79.m_szFile = "../../public/tier1/utlleanvector.h";
      v62 = "AddToTailGetPtr";
LABEL_92:
      v79.m_szFunction = v62;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v79, "%s allocation count overflow", v62);
    }
  }
  v13 = v4->m_keyValues.m_nAllocated;
  v14 = v75 + 1;
  v15 = v13;
  if ( v14 > v13 )
  {
    while ( v14 > v15 )
    {
      if ( v13 <= 16382 )
      {
        v13 *= 2;
        v51 = 2 * v15 <= 1;
        v15 = v13;
        if ( v51 )
        {
          v13 = 2;
          v15 = 2;
        }
      }
      else
      {
        v13 = 0x7FFF;
        v15 = 0x7FFF;
      }
    }
    v78 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v13);
    if ( v4->m_keyValues.m_nAllocated != 0 )
      v77 = v4->m_keyValues.m_pElements;
    else
      v77 = 0;
    v16 = v4->m_keyValues.m_nCount;
    if ( v13 <= v16 )
      v16 = v13;
    if ( v16 > 0 )
    {
      v17 = v4;
      v18 = v13;
      v19 = 0;
      do
      {
        v20 = v19;
        v21 = v20 * 24 + v78;
        if ( v20 * 24 + v78 != 0 )
        {
          v22 = &v77[v20];
          *v21 = 0;
          *(v21 + 10) = 0;
        }
        else
        {
          v22 = &v77[v20];
        }
        *v21 = 0;
        *(v21 + 8) = 0;
        m_type = v22->m_value.m_type;
        switch ( m_type )
        {
          case 3:
            v49 = *(v21 + 10);
            m_uint64 = v22->m_value.m_uint64;
            if ( (v49 & 1) != 0 )
              *(v21 + 10) = v49 & 0xFFFE;
            src = v17;
            v68 = m_uint64;
            *(v21 + 8) = 3;
            goto LABEL_32;
          case 4:
            v47 = *(v21 + 10);
            v48 = v22->m_value.m_uint64;
            if ( (v47 & 1) != 0 )
              *(v21 + 10) = v47 & 0xFFFE;
            srca = v17;
            v70 = v48;
            *(v21 + 8) = 4;
            goto LABEL_57;
          case 25:
            v44 = *(v21 + 10);
            v45 = v22->m_value.m_uint64;
            if ( (v44 & 1) != 0 )
              *(v21 + 10) = v44 & 0xFFFE;
            srcc = v17;
            *(v21 + 8) = 25;
            v71 = v45;
            v46 = CEntityVariantAllocator::Allocate(8u);
            *v21 = v46;
            v17 = srcc;
            *v46 = *v71;
            v46[1] = *(v71 + 1);
            *(v21 + 10) |= 1u;
            break;
          case 27:
            v41 = *(v21 + 10);
            v42 = v22->m_value.m_uint64;
            if ( (v41 & 1) != 0 )
              *(v21 + 10) = v41 & 0xFFFE;
            srca = v17;
            v70 = v42;
            *(v21 + 8) = 27;
LABEL_57:
            v43 = CEntityVariantAllocator::Allocate(0x10u);
            *v21 = v43;
            *v43 = *v70;
            v43[1] = *(v70 + 1);
            v43[2] = *(v70 + 2);
            v43[3] = *(v70 + 3);
            *(v21 + 10) |= 1u;
            v17 = srca;
            break;
          case 30:
            v38 = *(v21 + 10);
            v39 = v22->m_value.m_uint64;
            if ( (v38 & 1) != 0 )
              *(v21 + 10) = v38 & 0xFFFE;
            *(v21 + 8) = 30;
            if ( v39 != 0 )
            {
              v63 = v17;
              srcb = v39;
              v69 = strlen(v39) + 1;
              v40 = CEntityVariantAllocator::Allocate(v69);
              *v21 = v40;
              memcpy(v40, srcb, v69);
              v17 = v63;
              *(v21 + 10) |= 1u;
            }
            break;
          case 39:
            v24 = *(v21 + 10);
            v25 = v22->m_value.m_uint64;
            if ( (v24 & 1) != 0 )
              *(v21 + 10) = v24 & 0xFFFE;
            src = v17;
            v68 = v25;
            *(v21 + 8) = 39;
LABEL_32:
            v26 = CEntityVariantAllocator::Allocate(0xCu);
            *v21 = v26;
            *v26 = *v68;
            v26[1] = *(v68 + 1);
            v26[2] = *(v68 + 2);
            *(v21 + 10) |= 1u;
            v17 = src;
            break;
          default:
            *(v21 + 8) = m_type;
            *v21 = v22->m_value.m_uint64;
            break;
        }
        *(v21 + 16) = v22->m_pAttributeName;
        m_flags = v22->m_value.m_flags;
        if ( (m_flags & 1) != 0 )
          v22->m_value.m_flags = m_flags & 0xFFFE;
        v22->m_value.m_uint64 = 0;
        ++v19;
        v22->m_value.m_type = 0;
        v28 = v17->m_keyValues.m_nCount;
        if ( v18 <= v28 )
          v28 = v18;
      }
      while ( v19 < v28 );
      v13 = v18;
      v4 = v17;
    }
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v4->m_keyValues.m_pElements);
    v4->m_keyValues.m_nAllocated = v13;
    v4->m_keyValues.m_pElements = v78;
  }
  if ( v13 != 0 )
    v29 = v4->m_keyValues.m_pElements;
  else
    v29 = 0;
  v30 = &v29[v75];
  if ( v30 != 0 )
  {
    v30->m_value.m_uint64 = 0;
    v30->m_value.m_type = 0;
    v30->m_value.m_flags = 0;
    v31 = v4->m_keyValues.m_nAllocated;
    ++v4->m_keyValues.m_nCount;
    if ( v31 != 0 )
    {
LABEL_44:
      v32 = v4->m_keyValues.m_pElements;
      goto LABEL_45;
    }
  }
  else
  {
    ++v4->m_keyValues.m_nCount;
    if ( v13 != 0 )
      goto LABEL_44;
  }
  v32 = 0;
LABEL_45:
  v33 = &v32[v74];
  v34 = v33->m_value.m_flags;
  if ( (v34 & 1) != 0 )
    v33->m_value.m_flags = v34 & 0xFFFE;
  v33->m_value.m_uint64 = 0;
  v33->m_value.m_type = 3;
  v35 = CEntityVariantAllocator::Allocate(0xCu);
  v33->m_value.m_uint64 = v35;
  *v35 = value->x;
  v35[1] = value->y;
  v35[2] = value->z;
  v33->m_value.m_flags |= 1u;
  if ( v4->m_keyValues.m_nAllocated != 0 )
    v36 = v4->m_keyValues.m_pElements;
  else
    v36 = 0;
  v36[v74].m_pAttributeName = pAttributeName;
  return nIdx;
}


// CEntityKeyValues::AddKeyValue<char [260]>  (line 298, @0x00000000030aa1f0, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, Alloc, Allocate, Base, CopyData, Element, EnsureCapacity, Free, V_strlen, memcpy, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, strlen, CUtlScratchMemoryPool::AllocAligned, memcpy, CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr
// callers: ConvertTextDataToNewKeyValues
// globals: CEntityVariantAllocator::sm_pMemoryPool
int __fastcall CEntityKeyValues::AddKeyValue<char [260]>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        char (*const value)[260],
        const char *pAttributeName)
{
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nCount; // ax
  unsigned __int64 m_nAllocated; // rcx
  int v8; // r15d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v11; // di
  int v12; // edx
  int v13; // ebx
  int v14; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v15; // rax
  __int64 v16; // rbx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // rax
  __int64 v18; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v19; // rbx
  uint16 m_flags; // ax
  void *v21; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v22; // rax
  int v24; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v25; // rax
  void *v26; // rcx
  unsigned __int64 v27; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rsi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v29; // rax
  __int64 v30; // [rsp+0h] [rbp-40h]
  int v31; // [rsp+Ch] [rbp-34h]
  uint32 m_nHashCode; // [rsp+Ch] [rbp-34h]
  uint32 v33; // [rsp+Ch] [rbp-34h]

  m_nCount = this->m_keyHashes.m_nCount;
  if ( this->m_keyHashes.m_nCount == 0x7FFF )
  {
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&this->m_keyHashes);
    JUMPOUT(0x30AA465);
  }
  m_nAllocated = this->m_keyHashes.m_nAllocated;
  v8 = m_nCount;
  v11 = this->m_keyHashes.m_nCount;
  v12 = m_nCount + 1;
  if ( v12 > m_nAllocated )
  {
    LOWORD(v13) = m_nCount + 1;
    if ( v12 > 9 )
    {
      v13 = m_nAllocated;
      while ( 1 )
      {
        v14 = v13;
        if ( v12 <= v13 )
          break;
        if ( v13 <= 16382 )
        {
          v24 = 2 * v13;
          v13 = 8;
          if ( 2 * v14 > 7 )
            v13 = v24;
        }
        else
        {
          v13 = 0x7FFF;
        }
      }
    }
    if ( m_nAllocated > 9 )
    {
      m_nHashCode = key.m_nHashCode;
      v25 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_keyHashes.m_pElements, 4LL * v13);
      v11 = this->m_keyHashes.m_nCount;
      this->m_keyHashes.m_pElements = v25;
      key.m_nHashCode = m_nHashCode;
      v8 = v11;
    }
    else
    {
      v11 = m_nCount;
      if ( v13 > 9 )
      {
        v33 = key.m_nHashCode;
        v26 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v13);
        v27 = this->m_keyHashes.m_nAllocated;
        if ( v27 != 0 )
        {
          m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
          if ( v27 > 9 )
            m_pElements = this->m_keyHashes.m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        v29 = memcpy(v26, m_pElements, 4LL * this->m_keyHashes.m_nCount);
        v11 = this->m_keyHashes.m_nCount;
        this->m_keyHashes.m_pElements = v29;
        key.m_nHashCode = v33;
        v8 = v11;
      }
    }
    this->m_keyHashes.m_nAllocated = v13;
    m_nAllocated = v13;
  }
  this->m_keyHashes.m_nCount = v11 + 1;
  if ( m_nAllocated != 0 )
  {
    v15 = (&this->m_keyHashes.m_nAllocAllocated + 1);
    if ( m_nAllocated > 9 )
      v15 = this->m_keyHashes.m_pElements;
  }
  else
  {
    v15 = 0;
  }
  v16 = v11;
  v15[v11] = key.m_nHashCode;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
  if ( this->m_keyValues.m_nAllocated != 0 )
    v17 = this->m_keyValues.m_pElements;
  else
    v17 = 0;
  v18 = 24 * v16;
  v19 = &v17[v16];
  m_flags = v19->m_value.m_flags;
  if ( (m_flags & 1) != 0 )
    v19->m_value.m_flags = m_flags & 0xFFFE;
  v19->m_value.m_uint64 = 0;
  v19->m_value.m_type = 30;
  if ( value != 0 )
  {
    v30 = v18;
    v31 = strlen(value) + 1;
    v21 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, v31, 8 * (v31 >= 16) + 8);
    v19->m_value.m_uint64 = v21;
    memcpy(v21, value, v31);
    v18 = v30;
    v19->m_value.m_flags |= 1u;
  }
  if ( this->m_keyValues.m_nAllocated != 0 )
    v22 = this->m_keyValues.m_pElements;
  else
    v22 = 0;
  *(&v22->m_pAttributeName + v18) = pAttributeName;
  return v8;
}


// CEntityKeyValues::GetValue<int>  (line 407, @0x0000000002095430, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<int>, GetValue, Min<long long unsigned int>, Min<unsigned int>, atoi, operator[]
// calls: strtol, VariantFieldTypeName, Warning
// callers: CBaseProp::Spawn
// strings: "No conversion from %s to int now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_20954C6
int __fastcall CEntityKeyValues::GetValue<int>(const CEntityKeyValues *const this, EntityKeyId_t key)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v4; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v6; // rdx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  uint64 m_uint64; // rax
  const char *v10; // rax

  m_nCount = this->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_12:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_13;
  }
  m_nAllocated = this->m_keyHashes.m_nAllocated;
  v4 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v4) == key.m_nHashCode )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v4 )
      goto LABEL_12;
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
  p_m_value = &v6[v4].m_value;
LABEL_13:
  m_type = p_m_value->m_type;
  switch ( m_type )
  {
    case 0:
      LODWORD(m_uint64) = 0;
      break;
    case 1:
      LODWORD(m_uint64) = p_m_value->m_float;
      break;
    case 5:
      LODWORD(m_uint64) = p_m_value->m_int;
      break;
    case 6:
      LODWORD(m_uint64) = p_m_value->m_char;
      break;
    case 26:
      LODWORD(m_uint64) = 0x7FFFFFFF;
      if ( p_m_value->m_int64 <= 0x7FFFFFFF )
      {
        LODWORD(m_uint64) = 0x80000000;
        if ( p_m_value->m_uint64 >= 0xFFFFFFFF80000000LL )
          m_uint64 = p_m_value->m_uint64;
      }
      break;
    case 30:
      LODWORD(m_uint64) = strtol(p_m_value->m_pszString, 0, 10);
      break;
    case 33:
      LODWORD(m_uint64) = 0x7FFFFFFF;
      if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
        LODWORD(m_uint64) = p_m_value->m_uint64;
      break;
    case 34:
      LODWORD(m_uint64) = p_m_value->m_float64;
      break;
    case 37:
      LODWORD(m_uint64) = 0x7FFFFFFF;
      if ( p_m_value->m_int <= 0x7FFFFFFEu )
        LODWORD(m_uint64) = p_m_value->m_int;
      break;
    default:
      v10 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to int now\n", v10);
      LODWORD(m_uint64) = 0;
      break;
  }
  return m_uint64;
}


// CEntityKeyValues::GetValue<float>  (line 407, @0x0000000002218d40, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<float>, GetValue, atof, operator[]
// calls: strtod, VariantFieldTypeName, Warning
// callers: CFishPool::Spawn
// strings: "No conversion from %s to float now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_2218DD2
float __fastcall CEntityKeyValues::GetValue<float>(const CEntityKeyValues *const this, EntityKeyId_t key)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v4; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v6; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  float result; // xmm0_4
  const char *m_uint64; // rax
  const char *v11; // rax
  __int64 v12; // rdx

  m_nCount = this->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_12:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_13;
  }
  m_nAllocated = this->m_keyHashes.m_nAllocated;
  v4 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v4) == key.m_nHashCode )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v4 )
      goto LABEL_12;
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
  p_m_value = &v6[v4].m_value;
LABEL_13:
  m_type = p_m_value->m_type;
  switch ( m_type )
  {
    case 0:
      result = 0.0;
      break;
    case 1:
      result = p_m_value->m_float;
      break;
    case 5:
      result = p_m_value->m_int;
      break;
    case 6:
      result = p_m_value->m_char;
      break;
    case 26:
      result = p_m_value->m_uint64;
      break;
    case 30:
      result = strtod(p_m_value->m_pszString, 0);
      break;
    case 33:
      m_uint64 = p_m_value->m_uint64;
      if ( p_m_value->m_int64 >= 0 )
        goto LABEL_21;
      v12 = p_m_value->m_uint64 & 1 | (p_m_value->m_uint64 >> 1);
      result = v12 + v12;
      break;
    case 34:
      result = p_m_value->m_float64;
      break;
    case 37:
      LODWORD(m_uint64) = p_m_value->m_int;
LABEL_21:
      result = m_uint64;
      break;
    default:
      v11 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to float now\n", v11);
      result = 0.0;
      break;
  }
  return result;
}


// CEntityKeyValues::GetValue<bool>  (line 414, @0x000000000256b8d0, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, GetValue, _V_strcmp, operator[]
// calls: VariantFieldTypeName, Warning
// callers: CDOTACustomGameEvents::Spawn, OnCreateIllusionsSpawnCompletion
// strings: "false", "No conversion from %s to bool now\n", "true", "Invalid conversion : CString '%s' to bool\n"
// globals: jpt_256B95B, CEntityKeyValues::sm_EmptyVariant
bool __fastcall CEntityKeyValues::GetValue<bool>(
        const CEntityKeyValues *const this,
        EntityKeyId_t key,
        const bool *const defaultValue)
{
  int m_nCount; // r9d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // r8
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v7; // rcx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  const char *m_uint64; // rax
  const char *v12; // rax
  const bool *defaultValuea; // [rsp+8h] [rbp-8h]
  const bool *defaultValueb; // [rsp+8h] [rbp-8h]

  m_nCount = this->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = this->m_keyHashes.m_nAllocated;
    for ( i = 0; m_nCount > i; ++i )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = this->m_keyHashes.m_pElements;
        if ( m_pElements[i] == key.m_nHashCode )
        {
LABEL_9:
          if ( this->m_keyValues.m_nAllocated != 0 )
            v7 = this->m_keyValues.m_pElements;
          else
            v7 = 0;
          p_m_value = &v7[i].m_value;
          m_type = p_m_value->m_type;
          if ( m_type != 0 )
            goto LABEL_12;
          return *defaultValue;
        }
      }
      else if ( *(4 * i) == key.m_nHashCode )
      {
        goto LABEL_9;
      }
    }
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( m_type != 0 )
  {
LABEL_12:
    switch ( m_type )
    {
      case 1:
        return p_m_value->m_float != 0.0;
      case 5:
      case 37:
        return p_m_value->m_int != 0;
      case 6:
        return p_m_value->m_char;
      case 26:
      case 33:
        return p_m_value->m_uint64 != 0;
      case 30:
        m_uint64 = p_m_value->m_uint64;
        if ( strcmp(p_m_value->m_pszString, "0") == 0 || strcmp(m_uint64, "false") == 0 || strcmp(m_uint64, "no") == 0 )
          return 0;
        if ( strcmp(m_uint64, "1") == 0 || strcmp(m_uint64, "true") == 0 || strcmp(m_uint64, "yes") == 0 )
          return 1;
        defaultValueb = defaultValue;
        Warning("Invalid conversion : CString '%s' to bool\n", m_uint64);
        defaultValue = defaultValueb;
        break;
      case 34:
        return p_m_value->m_float64 != 0.0;
      default:
        defaultValuea = defaultValue;
        v12 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to bool now\n", v12);
        defaultValue = defaultValuea;
        return *defaultValue;
    }
  }
  return *defaultValue;
}


// CEntityKeyValues::GetValue<float>  (line 414, @0x000000000256ba90, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, GetValue, atof, operator[]
// calls: strtod, VariantFieldTypeName, Warning
// callers: CDOTACustomGameEvents::Spawn
// strings: "No conversion from %s to float now\n"
// globals: jpt_256BB1B, CEntityKeyValues::sm_EmptyVariant
float __fastcall CEntityKeyValues::GetValue<float>(
        const CEntityKeyValues *const this,
        EntityKeyId_t key,
        const float *const defaultValue)
{
  int m_nCount; // r9d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // r8
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v7; // rcx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  float result; // xmm0_4
  uint64 m_uint64; // rax
  __int64 v12; // rdx
  const char *v13; // rax
  const float *defaultValuea; // [rsp+8h] [rbp-8h]

  m_nCount = this->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = this->m_keyHashes.m_nAllocated;
    for ( i = 0; m_nCount > i; ++i )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = this->m_keyHashes.m_pElements;
        if ( m_pElements[i] == key.m_nHashCode )
        {
LABEL_9:
          if ( this->m_keyValues.m_nAllocated != 0 )
            v7 = this->m_keyValues.m_pElements;
          else
            v7 = 0;
          p_m_value = &v7[i].m_value;
          m_type = p_m_value->m_type;
          if ( m_type != 0 )
            goto LABEL_12;
          return *defaultValue;
        }
      }
      else if ( *(4 * i) == key.m_nHashCode )
      {
        goto LABEL_9;
      }
    }
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( m_type == 0 )
    return *defaultValue;
LABEL_12:
  switch ( m_type )
  {
    case 1:
      return p_m_value->m_float;
    case 5:
      return p_m_value->m_int;
    case 6:
      return p_m_value->m_char;
    case 26:
      return p_m_value->m_uint64;
    case 30:
      return strtod(p_m_value->m_pszString, 0);
    case 33:
      m_uint64 = p_m_value->m_uint64;
      if ( p_m_value->m_int64 >= 0 )
        goto LABEL_17;
      v12 = p_m_value->m_uint64 & 1 | (p_m_value->m_uint64 >> 1);
      result = v12 + v12;
      break;
    case 34:
      return p_m_value->m_float64;
    case 37:
      LODWORD(m_uint64) = p_m_value->m_int;
LABEL_17:
      result = m_uint64;
      break;
    default:
      defaultValuea = defaultValue;
      v13 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to float now\n", v13);
      defaultValue = defaultValuea;
      return *defaultValue;
  }
  return result;
}


// CEntityKeyValues::GetValue<CEntityInstance*>  (line 414, @0x00000000027d63e0, libserver.so)  // inlines: AssignTo, Base, CEntityHandle, Element, FindKeyHash, Get, GetValue, operator[]
// calls: CEntityHandle::operator CEntityInstance*, VariantFieldTypeName, Warning
// callers: OnCreateBotWearingSetSpawnComplete, OnCreateIllusionsSpawnCompletion
// strings: "No free conversion of %s variant to CEntityInstance * right now\n"
// globals: CEntityKeyValues::sm_EmptyVariant
CEntityInstance *__fastcall CEntityKeyValues::GetValue<CEntityInstance *>(
        const CEntityKeyValues *const this,
        EntityKeyId_t key,
        CEntityInstance *const *const defaultValue)
{
  __int64 v3; // rbp
  int m_nCount; // r9d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // r8
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rcx
  CEntityVariant *p_m_value; // rax
  int16 m_type; // cx
  uint32 m_int; // eax
  const char *v13; // rax
  CEntityHandle v15; // [rsp+8h] [rbp-18h] BYREF
  __int64 v16; // [rsp+18h] [rbp-8h]

  m_nCount = this->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_14:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type != 0 )
      goto LABEL_12;
    return *defaultValue;
  }
  m_nAllocated = this->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == key.m_nHashCode )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v6 )
      goto LABEL_14;
  }
  m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = this->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != key.m_nHashCode )
    goto LABEL_6;
LABEL_9:
  if ( this->m_keyValues.m_nAllocated != 0 )
    v8 = this->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
  m_type = p_m_value->m_type;
  if ( m_type == 0 )
    return *defaultValue;
LABEL_12:
  v16 = v3;
  m_int = p_m_value->m_int;
  if ( m_type == 13 )
  {
    v15.m_Index = m_int;
    return CEntityHandle::operator CEntityInstance *(&v15);
  }
  else
  {
    v13 = VariantFieldTypeName(m_type);
    Warning("No free conversion of %s variant to CEntityInstance * right now\n", v13);
    return *defaultValue;
  }
}


// CEntityKeyValues::GetValue<int>  (line 414, @0x00000000027d64c0, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, GetValue, Min<long long unsigned int>, Min<unsigned int>, atoi, operator[]
// calls: strtol, VariantFieldTypeName, Warning
// callers: OnCreateBotWearingSetSpawnComplete, OnCreateIllusionsSpawnCompletion, CDOTA_BaseNPC_Hero::BuildWearableSpawnList, CDOTA_BaseNPC_Hero::LoadNPCData, CDOTA_BaseNPC::Spawn
// strings: "No conversion from %s to int now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_27D6563
int __fastcall CEntityKeyValues::GetValue<int>(
        const CEntityKeyValues *const this,
        EntityKeyId_t key,
        const int *const defaultValue)
{
  int m_nCount; // r9d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // r8
  __int64 v5; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v7; // rcx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  uint64 m_uint64; // rax
  const char *v11; // rax

  m_nCount = this->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_14:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type == 0 )
      goto LABEL_12;
    goto LABEL_15;
  }
  m_nAllocated = this->m_keyHashes.m_nAllocated;
  v5 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v5) == key.m_nHashCode )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v5 )
      goto LABEL_14;
  }
  m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = this->m_keyHashes.m_pElements;
  if ( m_pElements[v5] != key.m_nHashCode )
    goto LABEL_6;
LABEL_9:
  if ( this->m_keyValues.m_nAllocated != 0 )
    v7 = this->m_keyValues.m_pElements;
  else
    v7 = 0;
  p_m_value = &v7[v5].m_value;
  m_type = p_m_value->m_type;
  if ( m_type == 0 )
  {
LABEL_12:
    LODWORD(m_uint64) = *defaultValue;
    return m_uint64;
  }
LABEL_15:
  switch ( m_type )
  {
    case 1:
      LODWORD(m_uint64) = p_m_value->m_float;
      break;
    case 5:
      LODWORD(m_uint64) = p_m_value->m_int;
      break;
    case 6:
      LODWORD(m_uint64) = p_m_value->m_char;
      break;
    case 26:
      LODWORD(m_uint64) = 0x7FFFFFFF;
      if ( p_m_value->m_int64 <= 0x7FFFFFFF )
      {
        LODWORD(m_uint64) = 0x80000000;
        if ( p_m_value->m_uint64 >= 0xFFFFFFFF80000000LL )
          m_uint64 = p_m_value->m_uint64;
      }
      break;
    case 30:
      LODWORD(m_uint64) = strtol(p_m_value->m_pszString, 0, 10);
      break;
    case 33:
      LODWORD(m_uint64) = 0x7FFFFFFF;
      if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
        LODWORD(m_uint64) = p_m_value->m_uint64;
      break;
    case 34:
      LODWORD(m_uint64) = p_m_value->m_float64;
      break;
    case 37:
      LODWORD(m_uint64) = 0x7FFFFFFF;
      if ( p_m_value->m_int <= 0x7FFFFFFEu )
        LODWORD(m_uint64) = p_m_value->m_int;
      break;
    default:
      v11 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to int now\n", v11);
      LODWORD(m_uint64) = *defaultValue;
      break;
  }
  return m_uint64;
}


// CEntityKeyValues::GetValueString  (line 448, @0x0000000001f836d0, libserver.so)  // inlines: Base, Element, FindKeyHash, GetValue, TempString, operator[]
// callers: CDynamicProp::SpawnServerSide, CGenericFlexCycler::Spawn, CMarkupVolumeTagged::Spawn, CDOTA_BaseNPC::SpawnWearables, CDotaQuest::Spawn, CDotaSubquestBuyItems::Spawn, CDotaSubquestEntityDeath::Spawn, CDOTA_BaseNPC_Hero::LoadNPCData, CDOTA_BaseNPC::Spawn
// globals: CEntityKeyValues::sm_EmptyVariant
const char *__fastcall CEntityKeyValues::GetValueString(
        const CEntityKeyValues *const this,
        EntityKeyId_t key,
        const char *pDefaultValue)
{
  int m_nCount; // r10d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // r9
  __int64 v5; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // r8
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v7; // rsi
  CEntityVariant *p_m_value; // rcx
  const char *result; // rax

  m_nCount = this->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_13:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    result = pDefaultValue;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type != 30 )
      return result;
    return p_m_value->m_uint64;
  }
  m_nAllocated = this->m_keyHashes.m_nAllocated;
  v5 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v5) == key.m_nHashCode )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v5 )
      goto LABEL_13;
  }
  m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = this->m_keyHashes.m_pElements;
  if ( m_pElements[v5] != key.m_nHashCode )
    goto LABEL_6;
LABEL_9:
  if ( this->m_keyValues.m_nAllocated != 0 )
    v7 = this->m_keyValues.m_pElements;
  else
    v7 = 0;
  p_m_value = &v7[v5].m_value;
  result = pDefaultValue;
  if ( p_m_value->m_type == 30 )
    return p_m_value->m_uint64;
  return result;
}


// CEntityKeyValues::SetValue  (line 464, @0x0000000001ea50d0, libserver.so)  // inlines: AddKeyValue<char const*>, AddToTail, AddToTailGetPtr, Allocate, Base, CopyData, Element, EnsureCapacity, FindKeyHash, Free, LeafCodeInfo_t, V_strlen, memcpy, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, strlen, CEntityVariantAllocator::Allocate, memcpy, Warning, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDevtestHierarchy2::Spawn, CreateTriggerInternal, Script_CreateTriggerRadiusApproximate, CScriptEntityIterator::CreateByClassname, Script_SpawnEntityListFromTableSynchronous, Script_SpawnEntityFromTableSynchronous, Script_SpawnEntityListFromTableAsynchronous, Script_SpawnEntityGroupFromTable, CGameEntitySystem::ComputeSpawnHierarchyDepth_r, UTIL_PrecacheOther, ConvertOldKeyValuesToNew, CBaseEntity::Create (102 total)
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "../../public/tier1/utlleanvector.h", "EnsureCapacity", "%s allocation count overflow", "AddToTailGetPtr"
void __fastcall CEntityKeyValues::SetValue(CEntityKeyValues *const this, EntityKeyId_t key, const char *pString)
{
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nCount; // dx
  int v7; // r9d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v8; // r8
  __int64 v9; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v10; // rcx
  unsigned __int64 m_nAllocated; // rcx
  int v12; // r9d
  int v13; // r14d
  int v14; // eax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int64 v16; // r14
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // r12
  __int64 v18; // r14
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v19; // r12
  uint16 m_flags; // ax
  signed int v21; // r15d
  void *v22; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v23; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int16 v27; // ax
  signed int v28; // r12d
  void *v29; // rax
  int v30; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v31; // rax
  void *v32; // rcx
  unsigned __int64 v33; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  const char *v39; // rax
  LeafCodeInfo_t v40; // [rsp+0h] [rbp-50h] BYREF

  if ( this->m_nQueuedForSpawnCount > 0 )
    return;
  m_nCount = this->m_keyHashes.m_nCount;
  v7 = this->m_keyHashes.m_nCount;
  if ( v7 <= 0 )
  {
LABEL_11:
    if ( m_nCount == 0x7FFF )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v40.m_nLine = 557;
        v40.m_szFile = "../../public/tier1/utlleanvector.h";
        v39 = "AddToTailGetPtr";
        goto LABEL_59;
      }
    }
    else
    {
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      v12 = v7 + 1;
      if ( v12 <= m_nAllocated )
      {
LABEL_22:
        this->m_keyHashes.m_nCount = m_nCount + 1;
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
        v16 = m_nCount;
        m_pElements[m_nCount] = key.m_nHashCode;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
        if ( this->m_keyValues.m_nAllocated != 0 )
          v17 = this->m_keyValues.m_pElements;
        else
          v17 = 0;
        v18 = v16;
        v19 = &v17[v18];
        m_flags = v19->m_value.m_flags;
        if ( (m_flags & 1) != 0 )
          v19->m_value.m_flags = m_flags & 0xFFFE;
        v19->m_value.m_uint64 = 0;
        v19->m_value.m_type = 30;
        if ( pString != 0 )
        {
          v21 = strlen(pString) + 1;
          v22 = CEntityVariantAllocator::Allocate(v21);
          v19->m_value.m_uint64 = v22;
          memcpy(v22, pString, v21);
          v19->m_value.m_flags |= 1u;
        }
        if ( this->m_keyValues.m_nAllocated != 0 )
          v23 = this->m_keyValues.m_pElements;
        else
          v23 = 0;
        v23[v18].m_pAttributeName = 0;
        return;
      }
      LOWORD(v13) = v12;
      if ( v12 <= 9 )
      {
LABEL_19:
        if ( m_nAllocated > 9 )
        {
          v31 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_keyHashes.m_pElements, 4LL * v13);
          m_nCount = this->m_keyHashes.m_nCount;
          this->m_keyHashes.m_pElements = v31;
        }
        else if ( v13 > 9 )
        {
          v32 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v13);
          v33 = this->m_keyHashes.m_nAllocated;
          if ( v33 != 0 )
          {
            v34 = (&this->m_keyHashes.m_nAllocAllocated + 1);
            if ( v33 > 9 )
              v34 = this->m_keyHashes.m_pElements;
          }
          else
          {
            v34 = 0;
          }
          this->m_keyHashes.m_pElements = memcpy(v32, v34, 4LL * this->m_keyHashes.m_nCount);
          m_nCount = this->m_keyHashes.m_nCount;
        }
        this->m_keyHashes.m_nAllocated = v13;
        m_nAllocated = v13;
        goto LABEL_22;
      }
      if ( v12 != 0x8000 )
      {
        v13 = this->m_keyHashes.m_nAllocated;
        while ( 1 )
        {
          v14 = v13;
          if ( v12 <= v13 )
            break;
          if ( v13 <= 16382 )
          {
            v30 = 2 * v13;
            v13 = 8;
            if ( 2 * v14 > 7 )
              v13 = v30;
          }
          else
          {
            v13 = 0x7FFF;
          }
        }
        goto LABEL_19;
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        goto LABEL_58;
    }
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v37, v38, v35, v36) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_58:
      v40.m_nLine = 104;
      v40.m_szFile = "../../public/tier1/utlleanvector.h";
      v39 = "EnsureCapacity";
LABEL_59:
      v40.m_szFunction = v39;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v40, "%s allocation count overflow", v39);
    }
  }
  v8 = this->m_keyHashes.m_nAllocated;
  v9 = 0;
  while ( 1 )
  {
    if ( v8 != 0 )
    {
      v10 = (&this->m_keyHashes.m_nAllocAllocated + 1);
      if ( v8 > 9 )
        v10 = this->m_keyHashes.m_pElements;
    }
    else
    {
      v10 = 0;
    }
    if ( v10[v9] == key.m_nHashCode )
      break;
    if ( v7 <= ++v9 )
      goto LABEL_11;
  }
  if ( this->m_keyValues.m_nAllocated != 0 )
  {
    v24 = this->m_keyValues.m_pElements;
    v25 = v9;
    if ( v24[v25].m_pAttributeName != 0 )
    {
LABEL_36:
      Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v24[v25].m_pAttributeName);
      return;
    }
    v26 = &v24[v25];
  }
  else
  {
    v25 = v9;
    v24 = 0;
    v26 = v25 * 24;
    if ( *(v25 * 24 + 16) != 0 )
      goto LABEL_36;
  }
  v27 = *(v26 + 10);
  if ( (v27 & 1) != 0 )
    *(v26 + 10) = v27 & 0xFFFE;
  *v26 = 0;
  *(v26 + 8) = 30;
  if ( pString != 0 )
  {
    v28 = strlen(pString) + 1;
    v29 = CEntityVariantAllocator::Allocate(v28);
    *v26 = v29;
    memcpy(v29, pString, v28);
    *(v26 + 10) |= 1u;
  }
}


// CEntityKeyValues::SetValue<CEntityHandle>  (line 498, @0x00000000021ece60, libserver.so)  // inlines: AddKeyValue<CEntityHandle>, AddToTail, Base, CEntityHandle, Element, FindKeyHash, Free, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, Warning
// callers: GetDebugHistory, CDOTA_Item_Ward_Dispenser::OnSpellStart, CDOTA_Item_ObserverWard::OnSpellStart, CDOTA_Item_SentryWard::OnSpellStart
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
void __fastcall CEntityKeyValues::SetValue<CEntityHandle>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        const CEntityHandle *const value)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v5; // di
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v7; // rcx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int16 v10; // r12
  uint32 m_Index; // esi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rcx
  __int64 v17; // rax
  const char *m_pAttributeName; // rsi
  uint32 v19; // esi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // rax
  uint16 v21; // dx

  if ( this->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = this->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_10:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&this->m_keyHashes);
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = this->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v10 = this->m_keyHashes.m_nCount - 1;
      m_pElements[v10] = key.m_nHashCode;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
      m_Index = value->m_Index;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v12 = this->m_keyValues.m_pElements;
      else
        v12 = 0;
      v13 = &v12[v10];
      m_flags = v13->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v13->m_value.m_flags = m_flags & 0xFFFE;
      v13->m_value.m_uint64 = 0;
      v13->m_value.m_type = 13;
      v13->m_value.m_int = m_Index;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v15 = this->m_keyValues.m_pElements;
      else
        v15 = 0;
      v15[v10].m_pAttributeName = 0;
    }
    else
    {
      v5 = this->m_keyHashes.m_nAllocated;
      v6 = 0;
      while ( 1 )
      {
        if ( v5 != 0 )
        {
          v7 = (&this->m_keyHashes.m_nAllocAllocated + 1);
          if ( v5 > 9 )
            v7 = this->m_keyHashes.m_pElements;
        }
        else
        {
          v7 = 0;
        }
        if ( v7[v6] == key.m_nHashCode )
          break;
        if ( m_nCount <= ++v6 )
          goto LABEL_10;
      }
      if ( this->m_keyValues.m_nAllocated != 0 )
      {
        v16 = this->m_keyValues.m_pElements;
        v17 = v6;
        m_pAttributeName = v16[v17].m_pAttributeName;
        if ( m_pAttributeName != 0 )
        {
LABEL_22:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
          return;
        }
        v19 = value->m_Index;
      }
      else
      {
        v17 = v6;
        m_pAttributeName = *(v17 * 24 + 16);
        if ( m_pAttributeName != 0 )
          goto LABEL_22;
        v19 = value->m_Index;
        v16 = 0;
      }
      v20 = &v16[v17];
      v21 = v20->m_value.m_flags;
      if ( (v21 & 1) != 0 )
        v20->m_value.m_flags = v21 & 0xFFFE;
      v20->m_value.m_uint64 = 0;
      v20->m_value.m_type = 13;
      v20->m_value.m_int = v19;
    }
  }
}


// CEntityKeyValues::SetValue<int>  (line 498, @0x00000000022194a0, libserver.so)  // inlines: AddKeyValue<int>, AddToTail, Base, Element, FindKeyHash, Free, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, Warning
// callers: ExplosionCreate, CBasePlayer::GiveNamedItem, CDOTAGamerules::PrecacheNextARDMHeroForPlayer, CDOTAGamerules::State_Enter_PRE_GAME, CDOTAGamerules::OnDemoHero, CDOTAGamerules::StartCreateHeroStatues, CDotaQuest::SpawnFromParms, CDOTAPlayer::CheckForSpawningFreeCourier, CDOTA_PlayerResource::ReplaceHeroWith, CDOTA_ProjectileManager::CreateLinearProjectile, CDOTA_ProjectileManager::CreateTrackingProjectileFiltered, DOTA_CreateUnitByName (29 total)
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
void __fastcall CEntityKeyValues::SetValue<int>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        const int *const value)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v5; // di
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v7; // rcx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int16 v10; // r12
  int v11; // esi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rcx
  __int64 v17; // rax
  const char *m_pAttributeName; // rsi
  int v19; // esi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // rax
  uint16 v21; // dx

  if ( this->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = this->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_10:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&this->m_keyHashes);
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = this->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v10 = this->m_keyHashes.m_nCount - 1;
      m_pElements[v10] = key.m_nHashCode;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
      v11 = *value;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v12 = this->m_keyValues.m_pElements;
      else
        v12 = 0;
      v13 = &v12[v10];
      m_flags = v13->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v13->m_value.m_flags = m_flags & 0xFFFE;
      v13->m_value.m_uint64 = 0;
      v13->m_value.m_type = 5;
      v13->m_value.m_int = v11;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v15 = this->m_keyValues.m_pElements;
      else
        v15 = 0;
      v15[v10].m_pAttributeName = 0;
    }
    else
    {
      v5 = this->m_keyHashes.m_nAllocated;
      v6 = 0;
      while ( 1 )
      {
        if ( v5 != 0 )
        {
          v7 = (&this->m_keyHashes.m_nAllocAllocated + 1);
          if ( v5 > 9 )
            v7 = this->m_keyHashes.m_pElements;
        }
        else
        {
          v7 = 0;
        }
        if ( v7[v6] == key.m_nHashCode )
          break;
        if ( m_nCount <= ++v6 )
          goto LABEL_10;
      }
      if ( this->m_keyValues.m_nAllocated != 0 )
      {
        v16 = this->m_keyValues.m_pElements;
        v17 = v6;
        m_pAttributeName = v16[v17].m_pAttributeName;
        if ( m_pAttributeName != 0 )
        {
LABEL_22:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
          return;
        }
        v19 = *value;
      }
      else
      {
        v17 = v6;
        m_pAttributeName = *(v17 * 24 + 16);
        if ( m_pAttributeName != 0 )
          goto LABEL_22;
        v19 = *value;
        v16 = 0;
      }
      v20 = &v16[v17];
      v21 = v20->m_value.m_flags;
      if ( (v21 & 1) != 0 )
        v20->m_value.m_flags = v21 & 0xFFFE;
      v20->m_value.m_uint64 = 0;
      v20->m_value.m_type = 5;
      v20->m_value.m_int = v19;
    }
  }
}


// CEntityKeyValues::SetValue<Vector>  (line 498, @0x0000000002250360, libserver.so)  // inlines: AddKeyValue<Vector>, AddToTail, Allocate<Vector>, Base, CopyData<Vector>, Element, FindKeyHash, Free, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, CEntityVariantAllocator::Allocate, Warning
// callers: CSource2Server::OnLoadSessionPersisters, CShatterGlassShard::GenerateProceduralShatterGlassShardModel, CreateServerRagdoll, CBasePlayer::GiveNamedItem, CBasePlayer::Activate, CPropZipline::Spawn, CC_Prop_Dynamic_Create, CreatePhysicsProp<CPhysicsProp>, BreakModelCreateSingle, CPropHMDAvatar::Spawn, phys_shoot, CPropZipline::LinkToZipline (24 total)
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
void __fastcall CEntityKeyValues::SetValue<Vector>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        const Vector *const value)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v5; // di
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v7; // rcx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int16 v10; // r12
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v11; // rax
  __int64 v12; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // r12
  uint16 m_flags; // ax
  vec_t *v15; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int16 v20; // ax
  Vector *v21; // rax

  if ( this->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = this->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_10:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&this->m_keyHashes);
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = this->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v10 = this->m_keyHashes.m_nCount - 1;
      m_pElements[v10] = key.m_nHashCode;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
      if ( this->m_keyValues.m_nAllocated != 0 )
        v11 = this->m_keyValues.m_pElements;
      else
        v11 = 0;
      v12 = v10;
      v13 = &v11[v12];
      m_flags = v11[v12].m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v13->m_value.m_flags = m_flags & 0xFFFE;
      v13->m_value.m_uint64 = 0;
      v13->m_value.m_type = 3;
      v15 = CEntityVariantAllocator::Allocate(0xCu);
      v13->m_value.m_uint64 = v15;
      *v15 = value->x;
      v15[1] = value->y;
      v15[2] = value->z;
      v13->m_value.m_flags |= 1u;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v16 = this->m_keyValues.m_pElements;
      else
        v16 = 0;
      v16[v12].m_pAttributeName = 0;
    }
    else
    {
      v5 = this->m_keyHashes.m_nAllocated;
      v6 = 0;
      while ( 1 )
      {
        if ( v5 != 0 )
        {
          v7 = (&this->m_keyHashes.m_nAllocAllocated + 1);
          if ( v5 > 9 )
            v7 = this->m_keyHashes.m_pElements;
        }
        else
        {
          v7 = 0;
        }
        if ( v7[v6] == key.m_nHashCode )
          break;
        if ( m_nCount <= ++v6 )
          goto LABEL_10;
      }
      if ( this->m_keyValues.m_nAllocated != 0 )
      {
        v17 = this->m_keyValues.m_pElements;
        v18 = v6;
        if ( v17[v18].m_pAttributeName != 0 )
        {
LABEL_22:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v17[v18].m_pAttributeName);
          return;
        }
        v19 = &v17[v18];
      }
      else
      {
        v18 = v6;
        v17 = 0;
        v19 = v18 * 24;
        if ( *(v18 * 24 + 16) != 0 )
          goto LABEL_22;
      }
      v20 = *(v19 + 10);
      if ( (v20 & 1) != 0 )
        *(v19 + 10) = v20 & 0xFFFE;
      *v19 = 0;
      *(v19 + 8) = 3;
      v21 = CEntityVariantAllocator::Allocate(0xCu);
      *v19 = v21;
      *v21 = *value;
      *(v19 + 10) |= 1u;
    }
  }
}


// CEntityKeyValues::SetValue<QAngle>  (line 498, @0x00000000022505a0, libserver.so)  // inlines: AddKeyValue<QAngle>, AddToTail, Allocate<QAngle>, Base, CopyData<QAngle>, Element, FindKeyHash, Free, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, CEntityVariantAllocator::Allocate, Warning
// callers: CSource2Server::OnLoadSessionPersisters, CShatterGlassShard::GenerateProceduralShatterGlassShardModel, CreateServerRagdoll, CBasePlayer::GiveNamedItem, CBasePlayer::Activate, CPropZipline::Spawn, CC_Prop_Dynamic_Create, CreatePhysicsProp<CPhysicsProp>, BreakModelCreateSingle, CPropHMDAvatar::Spawn, phys_shoot, CPropZipline::LinkToZipline (14 total)
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
void __fastcall CEntityKeyValues::SetValue<QAngle>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        const QAngle *const value)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v5; // di
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v7; // rcx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int16 v10; // r12
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v11; // rax
  __int64 v12; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // r12
  uint16 m_flags; // ax
  vec_t *v15; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int16 v20; // ax
  QAngle *v21; // rax

  if ( this->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = this->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_10:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&this->m_keyHashes);
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = this->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v10 = this->m_keyHashes.m_nCount - 1;
      m_pElements[v10] = key.m_nHashCode;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
      if ( this->m_keyValues.m_nAllocated != 0 )
        v11 = this->m_keyValues.m_pElements;
      else
        v11 = 0;
      v12 = v10;
      v13 = &v11[v12];
      m_flags = v11[v12].m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v13->m_value.m_flags = m_flags & 0xFFFE;
      v13->m_value.m_uint64 = 0;
      v13->m_value.m_type = 39;
      v15 = CEntityVariantAllocator::Allocate(0xCu);
      v13->m_value.m_uint64 = v15;
      *v15 = value->x;
      v15[1] = value->y;
      v15[2] = value->z;
      v13->m_value.m_flags |= 1u;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v16 = this->m_keyValues.m_pElements;
      else
        v16 = 0;
      v16[v12].m_pAttributeName = 0;
    }
    else
    {
      v5 = this->m_keyHashes.m_nAllocated;
      v6 = 0;
      while ( 1 )
      {
        if ( v5 != 0 )
        {
          v7 = (&this->m_keyHashes.m_nAllocAllocated + 1);
          if ( v5 > 9 )
            v7 = this->m_keyHashes.m_pElements;
        }
        else
        {
          v7 = 0;
        }
        if ( v7[v6] == key.m_nHashCode )
          break;
        if ( m_nCount <= ++v6 )
          goto LABEL_10;
      }
      if ( this->m_keyValues.m_nAllocated != 0 )
      {
        v17 = this->m_keyValues.m_pElements;
        v18 = v6;
        if ( v17[v18].m_pAttributeName != 0 )
        {
LABEL_22:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v17[v18].m_pAttributeName);
          return;
        }
        v19 = &v17[v18];
      }
      else
      {
        v18 = v6;
        v17 = 0;
        v19 = v18 * 24;
        if ( *(v18 * 24 + 16) != 0 )
          goto LABEL_22;
      }
      v20 = *(v19 + 10);
      if ( (v20 & 1) != 0 )
        *(v19 + 10) = v20 & 0xFFFE;
      *v19 = 0;
      *(v19 + 8) = 39;
      v21 = CEntityVariantAllocator::Allocate(0xCu);
      *v19 = v21;
      *v21 = *value;
      *(v19 + 10) |= 1u;
    }
  }
}


// CEntityKeyValues::SetValue<float>  (line 498, @0x000000000237b530, libserver.so)  // inlines: AddKeyValue<float>, AddToTail, Base, Element, FindKeyHash, Free, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, Warning
// callers: CPropZipline::LinkToZipline, CDOTA_Item_Ward_Dispenser::OnSpellStart
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
void __fastcall CEntityKeyValues::SetValue<float>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        const float *const value)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v5; // di
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v7; // rcx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int16 v10; // r12
  int v11; // xmm0_4
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rcx
  __int64 v17; // rax
  const char *m_pAttributeName; // rsi
  int v19; // xmm0_4
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // rax
  uint16 v21; // dx

  if ( this->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = this->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_10:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&this->m_keyHashes);
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = this->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v10 = this->m_keyHashes.m_nCount - 1;
      m_pElements[v10] = key.m_nHashCode;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
      v11 = *value;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v12 = this->m_keyValues.m_pElements;
      else
        v12 = 0;
      v13 = &v12[v10];
      m_flags = v13->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v13->m_value.m_flags = m_flags & 0xFFFE;
      v13->m_value.m_uint64 = 0;
      v13->m_value.m_type = 1;
      v13->m_value.m_int = v11;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v15 = this->m_keyValues.m_pElements;
      else
        v15 = 0;
      v15[v10].m_pAttributeName = 0;
    }
    else
    {
      v5 = this->m_keyHashes.m_nAllocated;
      v6 = 0;
      while ( 1 )
      {
        if ( v5 != 0 )
        {
          v7 = (&this->m_keyHashes.m_nAllocAllocated + 1);
          if ( v5 > 9 )
            v7 = this->m_keyHashes.m_pElements;
        }
        else
        {
          v7 = 0;
        }
        if ( v7[v6] == key.m_nHashCode )
          break;
        if ( m_nCount <= ++v6 )
          goto LABEL_10;
      }
      if ( this->m_keyValues.m_nAllocated != 0 )
      {
        v16 = this->m_keyValues.m_pElements;
        v17 = v6;
        m_pAttributeName = v16[v17].m_pAttributeName;
        if ( m_pAttributeName != 0 )
        {
LABEL_22:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
          return;
        }
        v19 = *value;
      }
      else
      {
        v17 = v6;
        m_pAttributeName = *(v17 * 24 + 16);
        if ( m_pAttributeName != 0 )
          goto LABEL_22;
        v19 = *value;
        v16 = 0;
      }
      v20 = &v16[v17];
      v21 = v20->m_value.m_flags;
      if ( (v21 & 1) != 0 )
        v20->m_value.m_flags = v21 & 0xFFFE;
      v20->m_value.m_uint64 = 0;
      v20->m_value.m_type = 1;
      v20->m_value.m_int = v19;
    }
  }
}


// CEntityKeyValues::SetValue<CDOTA_BaseNPC_Hero*>  (line 498, @0x0000000002574150, libserver.so)  // inlines: AddKeyValue<CDOTA_BaseNPC_Hero*>, AddToTail, AddToTailGetPtr, Base, CEntityHandle, Element, EnsureCapacity, FindKeyHash, Free, GetEHandle, GetEntryIndex, GetSerialNumber, Init, LeafCodeInfo_t, memcpy, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, Warning, memcpy, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDOTAGamerules::OnDemoHero
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "../../public/tier1/utlleanvector.h", "EnsureCapacity", "%s allocation count overflow", "AddToTailGetPtr"
void __fastcall CEntityKeyValues::SetValue<CDOTA_BaseNPC_Hero *>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        CDOTA_BaseNPC_Hero *const *const value)
{
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nCount; // dx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v7; // si
  __int64 v8; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v9; // rcx
  unsigned __int64 m_nAllocated; // rcx
  int v11; // edi
  int v12; // r14d
  int v13; // eax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int64 v15; // r14
  CDOTA_BaseNPC_Hero *v16; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rdx
  uint16 m_flags; // ax
  int v20; // eax
  CEntityIdentity *m_pEntity; // rcx
  int v22; // eax
  __int16 v23; // si
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v24; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v25; // rdx
  __int64 v26; // rax
  const char *m_pAttributeName; // rsi
  CDOTA_BaseNPC_Hero *v28; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v29; // rax
  uint16 v30; // dx
  int v31; // ecx
  CEntityIdentity *v32; // rsi
  __int16 v33; // di
  int v34; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v35; // rax
  void *v36; // rcx
  unsigned __int64 v37; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rsi
  const char *v43; // rax
  LeafCodeInfo_t v44; // [rsp+0h] [rbp-40h] BYREF

  if ( this->m_nQueuedForSpawnCount > 0 )
    return;
  m_nCount = this->m_keyHashes.m_nCount;
  if ( this->m_keyHashes.m_nCount <= 0 )
  {
LABEL_10:
    if ( m_nCount == 0x7FFF )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v44.m_nLine = 557;
        v44.m_szFile = "../../public/tier1/utlleanvector.h";
        v43 = "AddToTailGetPtr";
        goto LABEL_65;
      }
    }
    else
    {
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      v11 = m_nCount + 1;
      if ( v11 <= m_nAllocated )
      {
LABEL_21:
        this->m_keyHashes.m_nCount = m_nCount + 1;
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
        v15 = m_nCount;
        m_pElements[m_nCount] = key.m_nHashCode;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
        v16 = *value;
        if ( this->m_keyValues.m_nAllocated != 0 )
          v17 = this->m_keyValues.m_pElements;
        else
          v17 = 0;
        v18 = &v17[v15];
        m_flags = v18->m_value.m_flags;
        if ( (m_flags & 1) != 0 )
          v18->m_value.m_flags = m_flags & 0xFFFE;
        v18->m_value.m_uint64 = 0;
        v18->m_value.m_type = 13;
        v20 = -1;
        if ( v16 != 0 )
        {
          m_pEntity = v16->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v22 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v23 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v44.m_szFile) = v23 | v44.m_szFile & 0x8000;
            v20 = (v22 << 15) | v44.m_szFile & 0x7FFF;
          }
        }
        v18->m_value.m_int = v20;
        if ( this->m_keyValues.m_nAllocated != 0 )
          v24 = this->m_keyValues.m_pElements;
        else
          v24 = 0;
        v24[v15].m_pAttributeName = 0;
        return;
      }
      LOWORD(v12) = m_nCount + 1;
      if ( v11 <= 9 )
      {
LABEL_18:
        if ( m_nAllocated > 9 )
        {
          v35 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_keyHashes.m_pElements, 4LL * v12);
          m_nCount = this->m_keyHashes.m_nCount;
          this->m_keyHashes.m_pElements = v35;
        }
        else if ( v12 > 9 )
        {
          v36 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v12);
          v37 = this->m_keyHashes.m_nAllocated;
          if ( v37 != 0 )
          {
            v38 = (&this->m_keyHashes.m_nAllocAllocated + 1);
            if ( v37 > 9 )
              v38 = this->m_keyHashes.m_pElements;
          }
          else
          {
            v38 = 0;
          }
          this->m_keyHashes.m_pElements = memcpy(v36, v38, 4LL * this->m_keyHashes.m_nCount);
          m_nCount = this->m_keyHashes.m_nCount;
        }
        this->m_keyHashes.m_nAllocated = v12;
        m_nAllocated = v12;
        goto LABEL_21;
      }
      if ( m_nCount != 0x7FFF )
      {
        v12 = m_nAllocated;
        while ( 1 )
        {
          v13 = v12;
          if ( v11 <= v12 )
            break;
          if ( v12 <= 16382 )
          {
            v34 = 2 * v12;
            v12 = 8;
            if ( 2 * v13 > 7 )
              v12 = v34;
          }
          else
          {
            v12 = 0x7FFF;
          }
        }
        goto LABEL_18;
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        goto LABEL_64;
    }
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v41, v42, v39, v40) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_64:
      v44.m_nLine = 104;
      v44.m_szFile = "../../public/tier1/utlleanvector.h";
      v43 = "EnsureCapacity";
LABEL_65:
      v44.m_szFunction = v43;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v44, "%s allocation count overflow", v43);
    }
  }
  v7 = this->m_keyHashes.m_nAllocated;
  v8 = 0;
  while ( 1 )
  {
    if ( v7 != 0 )
    {
      v9 = (&this->m_keyHashes.m_nAllocAllocated + 1);
      if ( v7 > 9 )
        v9 = this->m_keyHashes.m_pElements;
    }
    else
    {
      v9 = 0;
    }
    if ( v9[v8] == key.m_nHashCode )
      break;
    if ( m_nCount <= ++v8 )
      goto LABEL_10;
  }
  if ( this->m_keyValues.m_nAllocated != 0 )
  {
    v25 = this->m_keyValues.m_pElements;
    v26 = v8;
    m_pAttributeName = v25[v26].m_pAttributeName;
    if ( m_pAttributeName != 0 )
    {
LABEL_38:
      Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
      return;
    }
    v28 = *value;
  }
  else
  {
    v26 = v8;
    m_pAttributeName = *(v26 * 24 + 16);
    if ( m_pAttributeName != 0 )
      goto LABEL_38;
    v28 = *value;
    v25 = 0;
  }
  v29 = &v25[v26];
  v30 = v29->m_value.m_flags;
  if ( (v30 & 1) != 0 )
    v29->m_value.m_flags = v30 & 0xFFFE;
  v29->m_value.m_uint64 = 0;
  v29->m_value.m_type = 13;
  v31 = -1;
  if ( v28 != 0 )
  {
    v32 = v28->m_pEntity;
    if ( v32 != 0 )
    {
      v33 = 0x7FFF;
      if ( v32->m_EHandle.m_Index != -1 )
        v33 = v32->m_EHandle.m_Index & 0x7FFF;
      v31 = (((v32->m_EHandle.m_Index >> 15) - (v32->m_flags & 1)) << 15) | v33 & 0x7FFF;
    }
  }
  v29->m_value.m_int = v31;
}


// CEntityKeyValues::SetValue<bool>  (line 498, @0x0000000002574560, libserver.so)  // inlines: AddKeyValue<bool>, AddToTail, AddToTailGetPtr, Base, Element, EnsureCapacity, FindKeyHash, Free, LeafCodeInfo_t, memcpy, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, Warning, memcpy, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDOTAGamerules::StartCreateHeroStatues, CDOTA_Tutorial::AddHeroAndBotController, DOTA_CreateIllusions, CDOTA_Ability_LoneDruid_SpiritBear::OnSpellStart, CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::OnIntervalThink, ConvertTextDataToNewKeyValues
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "../../public/tier1/utlleanvector.h", "EnsureCapacity", "%s allocation count overflow", "AddToTailGetPtr"
void __fastcall CEntityKeyValues::SetValue<bool>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        const bool *const value)
{
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nCount; // dx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v7; // si
  __int64 v8; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v9; // rcx
  unsigned __int64 m_nAllocated; // rcx
  int v11; // edi
  int v12; // r14d
  int v13; // eax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int64 v15; // r14
  bool v16; // si
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v21; // rdx
  __int64 v22; // rax
  const char *m_pAttributeName; // rsi
  bool v24; // cl
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v25; // rax
  uint16 v26; // dx
  int v27; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v28; // rax
  void *v29; // rcx
  unsigned __int64 v30; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  const char *v36; // rax
  LeafCodeInfo_t v37; // [rsp+0h] [rbp-40h] BYREF

  if ( this->m_nQueuedForSpawnCount > 0 )
    return;
  m_nCount = this->m_keyHashes.m_nCount;
  if ( this->m_keyHashes.m_nCount <= 0 )
  {
LABEL_10:
    if ( m_nCount == 0x7FFF )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v37.m_nLine = 557;
        v37.m_szFile = "../../public/tier1/utlleanvector.h";
        v36 = "AddToTailGetPtr";
        goto LABEL_55;
      }
    }
    else
    {
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      v11 = m_nCount + 1;
      if ( v11 <= m_nAllocated )
      {
LABEL_21:
        this->m_keyHashes.m_nCount = m_nCount + 1;
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
        v15 = m_nCount;
        m_pElements[m_nCount] = key.m_nHashCode;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
        v16 = *value;
        if ( this->m_keyValues.m_nAllocated != 0 )
          v17 = this->m_keyValues.m_pElements;
        else
          v17 = 0;
        v18 = &v17[v15];
        m_flags = v18->m_value.m_flags;
        if ( (m_flags & 1) != 0 )
          v18->m_value.m_flags = m_flags & 0xFFFE;
        v18->m_value.m_uint64 = 0;
        v18->m_value.m_type = 6;
        v18->m_value.m_char = v16;
        if ( this->m_keyValues.m_nAllocated != 0 )
          v20 = this->m_keyValues.m_pElements;
        else
          v20 = 0;
        v20[v15].m_pAttributeName = 0;
        return;
      }
      LOWORD(v12) = m_nCount + 1;
      if ( v11 <= 9 )
      {
LABEL_18:
        if ( m_nAllocated > 9 )
        {
          v28 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_keyHashes.m_pElements, 4LL * v12);
          m_nCount = this->m_keyHashes.m_nCount;
          this->m_keyHashes.m_pElements = v28;
        }
        else if ( v12 > 9 )
        {
          v29 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v12);
          v30 = this->m_keyHashes.m_nAllocated;
          if ( v30 != 0 )
          {
            v31 = (&this->m_keyHashes.m_nAllocAllocated + 1);
            if ( v30 > 9 )
              v31 = this->m_keyHashes.m_pElements;
          }
          else
          {
            v31 = 0;
          }
          this->m_keyHashes.m_pElements = memcpy(v29, v31, 4LL * this->m_keyHashes.m_nCount);
          m_nCount = this->m_keyHashes.m_nCount;
        }
        this->m_keyHashes.m_nAllocated = v12;
        m_nAllocated = v12;
        goto LABEL_21;
      }
      if ( m_nCount != 0x7FFF )
      {
        v12 = m_nAllocated;
        while ( 1 )
        {
          v13 = v12;
          if ( v11 <= v12 )
            break;
          if ( v12 <= 16382 )
          {
            v27 = 2 * v12;
            v12 = 8;
            if ( 2 * v13 > 7 )
              v12 = v27;
          }
          else
          {
            v12 = 0x7FFF;
          }
        }
        goto LABEL_18;
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        goto LABEL_54;
    }
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v34, v35, v32, v33) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_54:
      v37.m_nLine = 104;
      v37.m_szFile = "../../public/tier1/utlleanvector.h";
      v36 = "EnsureCapacity";
LABEL_55:
      v37.m_szFunction = v36;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v37, "%s allocation count overflow", v36);
    }
  }
  v7 = this->m_keyHashes.m_nAllocated;
  v8 = 0;
  while ( 1 )
  {
    if ( v7 != 0 )
    {
      v9 = (&this->m_keyHashes.m_nAllocAllocated + 1);
      if ( v7 > 9 )
        v9 = this->m_keyHashes.m_pElements;
    }
    else
    {
      v9 = 0;
    }
    if ( v9[v8] == key.m_nHashCode )
      break;
    if ( m_nCount <= ++v8 )
      goto LABEL_10;
  }
  if ( this->m_keyValues.m_nAllocated != 0 )
  {
    v21 = this->m_keyValues.m_pElements;
    v22 = v8;
    m_pAttributeName = v21[v22].m_pAttributeName;
    if ( m_pAttributeName != 0 )
    {
LABEL_33:
      Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
      return;
    }
    v24 = *value;
  }
  else
  {
    v22 = v8;
    m_pAttributeName = *(v22 * 24 + 16);
    if ( m_pAttributeName != 0 )
      goto LABEL_33;
    v24 = *value;
    v21 = 0;
  }
  v25 = &v21[v22];
  v26 = v25->m_value.m_flags;
  if ( (v26 & 1) != 0 )
    v25->m_value.m_flags = v26 & 0xFFFE;
  v25->m_value.m_uint64 = 0;
  v25->m_value.m_type = 6;
  v25->m_value.m_char = v24;
}


// CEntityKeyValues::SetValue<CHandle<CBaseEntity> >  (line 498, @0x00000000025748d0, libserver.so)  // inlines: AddKeyValue<CHandle<CBaseEntity> >, AddToTail, AddToTailGetPtr, Base, CEntityHandle, Element, EnsureCapacity, FindKeyHash, Free, LeafCodeInfo_t, memcpy, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, Warning, memcpy, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDOTAGamerules::StartCreateHeroStatues
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "../../public/tier1/utlleanvector.h", "EnsureCapacity", "%s allocation count overflow", "AddToTailGetPtr"
void __fastcall CEntityKeyValues::SetValue<CHandle<CBaseEntity>>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        const CHandle<CBaseEntity> *const value)
{
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nCount; // dx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v7; // si
  __int64 v8; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v9; // rcx
  unsigned __int64 m_nAllocated; // rcx
  int v11; // edi
  int v12; // r14d
  int v13; // eax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int64 v15; // r14
  uint32 m_Index; // esi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v21; // rdx
  __int64 v22; // rax
  const char *m_pAttributeName; // rsi
  uint32 v24; // ecx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v25; // rax
  uint16 v26; // dx
  int v27; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v28; // rax
  void *v29; // rcx
  unsigned __int64 v30; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  const char *v36; // rax
  LeafCodeInfo_t v37; // [rsp+0h] [rbp-40h] BYREF

  if ( this->m_nQueuedForSpawnCount > 0 )
    return;
  m_nCount = this->m_keyHashes.m_nCount;
  if ( this->m_keyHashes.m_nCount <= 0 )
  {
LABEL_10:
    if ( m_nCount == 0x7FFF )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v37.m_nLine = 557;
        v37.m_szFile = "../../public/tier1/utlleanvector.h";
        v36 = "AddToTailGetPtr";
        goto LABEL_55;
      }
    }
    else
    {
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      v11 = m_nCount + 1;
      if ( v11 <= m_nAllocated )
      {
LABEL_21:
        this->m_keyHashes.m_nCount = m_nCount + 1;
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
        v15 = m_nCount;
        m_pElements[m_nCount] = key.m_nHashCode;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
        m_Index = value->m_Index;
        if ( this->m_keyValues.m_nAllocated != 0 )
          v17 = this->m_keyValues.m_pElements;
        else
          v17 = 0;
        v18 = &v17[v15];
        m_flags = v18->m_value.m_flags;
        if ( (m_flags & 1) != 0 )
          v18->m_value.m_flags = m_flags & 0xFFFE;
        v18->m_value.m_uint64 = 0;
        v18->m_value.m_type = 13;
        v18->m_value.m_int = m_Index;
        if ( this->m_keyValues.m_nAllocated != 0 )
          v20 = this->m_keyValues.m_pElements;
        else
          v20 = 0;
        v20[v15].m_pAttributeName = 0;
        return;
      }
      LOWORD(v12) = m_nCount + 1;
      if ( v11 <= 9 )
      {
LABEL_18:
        if ( m_nAllocated > 9 )
        {
          v28 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_keyHashes.m_pElements, 4LL * v12);
          m_nCount = this->m_keyHashes.m_nCount;
          this->m_keyHashes.m_pElements = v28;
        }
        else if ( v12 > 9 )
        {
          v29 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v12);
          v30 = this->m_keyHashes.m_nAllocated;
          if ( v30 != 0 )
          {
            v31 = (&this->m_keyHashes.m_nAllocAllocated + 1);
            if ( v30 > 9 )
              v31 = this->m_keyHashes.m_pElements;
          }
          else
          {
            v31 = 0;
          }
          this->m_keyHashes.m_pElements = memcpy(v29, v31, 4LL * this->m_keyHashes.m_nCount);
          m_nCount = this->m_keyHashes.m_nCount;
        }
        this->m_keyHashes.m_nAllocated = v12;
        m_nAllocated = v12;
        goto LABEL_21;
      }
      if ( m_nCount != 0x7FFF )
      {
        v12 = m_nAllocated;
        while ( 1 )
        {
          v13 = v12;
          if ( v11 <= v12 )
            break;
          if ( v12 <= 16382 )
          {
            v27 = 2 * v12;
            v12 = 8;
            if ( 2 * v13 > 7 )
              v12 = v27;
          }
          else
          {
            v12 = 0x7FFF;
          }
        }
        goto LABEL_18;
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        goto LABEL_54;
    }
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v34, v35, v32, v33) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_54:
      v37.m_nLine = 104;
      v37.m_szFile = "../../public/tier1/utlleanvector.h";
      v36 = "EnsureCapacity";
LABEL_55:
      v37.m_szFunction = v36;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v37, "%s allocation count overflow", v36);
    }
  }
  v7 = this->m_keyHashes.m_nAllocated;
  v8 = 0;
  while ( 1 )
  {
    if ( v7 != 0 )
    {
      v9 = (&this->m_keyHashes.m_nAllocAllocated + 1);
      if ( v7 > 9 )
        v9 = this->m_keyHashes.m_pElements;
    }
    else
    {
      v9 = 0;
    }
    if ( v9[v8] == key.m_nHashCode )
      break;
    if ( m_nCount <= ++v8 )
      goto LABEL_10;
  }
  if ( this->m_keyValues.m_nAllocated != 0 )
  {
    v21 = this->m_keyValues.m_pElements;
    v22 = v8;
    m_pAttributeName = v21[v22].m_pAttributeName;
    if ( m_pAttributeName != 0 )
    {
LABEL_33:
      Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
      return;
    }
    v24 = value->m_Index;
  }
  else
  {
    v22 = v8;
    m_pAttributeName = *(v22 * 24 + 16);
    if ( m_pAttributeName != 0 )
      goto LABEL_33;
    v24 = value->m_Index;
    v21 = 0;
  }
  v25 = &v21[v22];
  v26 = v25->m_value.m_flags;
  if ( (v26 & 1) != 0 )
    v25->m_value.m_flags = v26 & 0xFFFE;
  v25->m_value.m_uint64 = 0;
  v25->m_value.m_type = 13;
  v25->m_value.m_int = v24;
}


// CEntityKeyValues::SetValue<CDOTA_Item*>  (line 498, @0x00000000025d4ca0, libserver.so)  // inlines: AddKeyValue<CDOTA_Item*>, AddToTail, Base, CEntityHandle, Element, FindKeyHash, Free, GetEHandle, GetEntryIndex, GetSerialNumber, Init, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, Warning
// callers: CreateItemOnPositionForLaunch, CreateItemOnPositionSync, CreateItemOnPositionAsync, CDOTA_ItemSpawner::InputSpawnItem
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
void __fastcall CEntityKeyValues::SetValue<CDOTA_Item *>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        CDOTA_Item *const *const value)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v5; // di
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v7; // rcx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int16 v10; // r12
  CDOTA_Item *v11; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rdx
  uint16 m_flags; // ax
  int v15; // eax
  CEntityIdentity *m_pEntity; // rcx
  __int16 v17; // si
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v19; // rcx
  __int64 v20; // rax
  const char *m_pAttributeName; // rsi
  CDOTA_Item *v22; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v23; // rax
  uint16 v24; // dx
  int v25; // edx
  CEntityIdentity *v26; // rcx
  __int16 v27; // si

  if ( this->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = this->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_10:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&this->m_keyHashes);
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = this->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v10 = this->m_keyHashes.m_nCount - 1;
      m_pElements[v10] = key.m_nHashCode;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
      v11 = *value;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v12 = this->m_keyValues.m_pElements;
      else
        v12 = 0;
      v13 = &v12[v10];
      m_flags = v13->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v13->m_value.m_flags = m_flags & 0xFFFE;
      v13->m_value.m_uint64 = 0;
      v13->m_value.m_type = 13;
      v15 = -1;
      if ( v11 != 0 )
      {
        m_pEntity = v11->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v17 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v15 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v17 & 0x7FFF;
        }
      }
      v13->m_value.m_int = v15;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v18 = this->m_keyValues.m_pElements;
      else
        v18 = 0;
      v18[v10].m_pAttributeName = 0;
    }
    else
    {
      v5 = this->m_keyHashes.m_nAllocated;
      v6 = 0;
      while ( 1 )
      {
        if ( v5 != 0 )
        {
          v7 = (&this->m_keyHashes.m_nAllocAllocated + 1);
          if ( v5 > 9 )
            v7 = this->m_keyHashes.m_pElements;
        }
        else
        {
          v7 = 0;
        }
        if ( v7[v6] == key.m_nHashCode )
          break;
        if ( m_nCount <= ++v6 )
          goto LABEL_10;
      }
      if ( this->m_keyValues.m_nAllocated != 0 )
      {
        v19 = this->m_keyValues.m_pElements;
        v20 = v6;
        m_pAttributeName = v19[v20].m_pAttributeName;
        if ( m_pAttributeName != 0 )
        {
LABEL_27:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
          return;
        }
        v22 = *value;
      }
      else
      {
        v20 = v6;
        m_pAttributeName = *(v20 * 24 + 16);
        if ( m_pAttributeName != 0 )
          goto LABEL_27;
        v22 = *value;
        v19 = 0;
      }
      v23 = &v19[v20];
      v24 = v23->m_value.m_flags;
      if ( (v24 & 1) != 0 )
        v23->m_value.m_flags = v24 & 0xFFFE;
      v23->m_value.m_uint64 = 0;
      v23->m_value.m_type = 13;
      v25 = -1;
      if ( v22 != 0 )
      {
        v26 = v22->m_pEntity;
        if ( v26 != 0 )
        {
          v27 = 0x7FFF;
          if ( v26->m_EHandle.m_Index != -1 )
            v27 = v26->m_EHandle.m_Index & 0x7FFF;
          v25 = (((v26->m_EHandle.m_Index >> 15) - (v26->m_flags & 1)) << 15) | v27 & 0x7FFF;
        }
      }
      v23->m_value.m_int = v25;
    }
  }
}


// CEntityKeyValues::SetValue<CDOTAPlayer*>  (line 498, @0x00000000025d4f10, libserver.so)  // inlines: AddKeyValue<CDOTAPlayer*>, AddToTail, Base, CEntityHandle, Element, FindKeyHash, Free, GetEHandle, GetEntryIndex, GetSerialNumber, Init, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, Warning
// callers: dota_preview_hero, DebugCreateUnit
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
void __fastcall CEntityKeyValues::SetValue<CDOTAPlayer *>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        CDOTAPlayer *const *const value)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v5; // di
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v7; // rcx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int16 v10; // r12
  CDOTAPlayer *v11; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rdx
  uint16 m_flags; // ax
  int v15; // eax
  CEntityIdentity *m_pEntity; // rcx
  __int16 v17; // si
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v19; // rcx
  __int64 v20; // rax
  const char *m_pAttributeName; // rsi
  CDOTAPlayer *v22; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v23; // rax
  uint16 v24; // dx
  int v25; // edx
  CEntityIdentity *v26; // rcx
  __int16 v27; // si

  if ( this->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = this->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_10:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&this->m_keyHashes);
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = this->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v10 = this->m_keyHashes.m_nCount - 1;
      m_pElements[v10] = key.m_nHashCode;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
      v11 = *value;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v12 = this->m_keyValues.m_pElements;
      else
        v12 = 0;
      v13 = &v12[v10];
      m_flags = v13->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v13->m_value.m_flags = m_flags & 0xFFFE;
      v13->m_value.m_uint64 = 0;
      v13->m_value.m_type = 13;
      v15 = -1;
      if ( v11 != 0 )
      {
        m_pEntity = v11->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v17 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v15 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v17 & 0x7FFF;
        }
      }
      v13->m_value.m_int = v15;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v18 = this->m_keyValues.m_pElements;
      else
        v18 = 0;
      v18[v10].m_pAttributeName = 0;
    }
    else
    {
      v5 = this->m_keyHashes.m_nAllocated;
      v6 = 0;
      while ( 1 )
      {
        if ( v5 != 0 )
        {
          v7 = (&this->m_keyHashes.m_nAllocAllocated + 1);
          if ( v5 > 9 )
            v7 = this->m_keyHashes.m_pElements;
        }
        else
        {
          v7 = 0;
        }
        if ( v7[v6] == key.m_nHashCode )
          break;
        if ( m_nCount <= ++v6 )
          goto LABEL_10;
      }
      if ( this->m_keyValues.m_nAllocated != 0 )
      {
        v19 = this->m_keyValues.m_pElements;
        v20 = v6;
        m_pAttributeName = v19[v20].m_pAttributeName;
        if ( m_pAttributeName != 0 )
        {
LABEL_27:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
          return;
        }
        v22 = *value;
      }
      else
      {
        v20 = v6;
        m_pAttributeName = *(v20 * 24 + 16);
        if ( m_pAttributeName != 0 )
          goto LABEL_27;
        v22 = *value;
        v19 = 0;
      }
      v23 = &v19[v20];
      v24 = v23->m_value.m_flags;
      if ( (v24 & 1) != 0 )
        v23->m_value.m_flags = v24 & 0xFFFE;
      v23->m_value.m_uint64 = 0;
      v23->m_value.m_type = 13;
      v25 = -1;
      if ( v22 != 0 )
      {
        v26 = v22->m_pEntity;
        if ( v26 != 0 )
        {
          v27 = 0x7FFF;
          if ( v26->m_EHandle.m_Index != -1 )
            v27 = v26->m_EHandle.m_Index & 0x7FFF;
          v25 = (((v26->m_EHandle.m_Index >> 15) - (v26->m_flags & 1)) << 15) | v27 & 0x7FFF;
        }
      }
      v23->m_value.m_int = v25;
    }
  }
}


// CEntityKeyValues::SetValue<CBaseEntity*>  (line 498, @0x00000000027dc080, libserver.so)  // inlines: AddKeyValue<CBaseEntity*>, AddToTail, Base, CEntityHandle, Element, FindKeyHash, Free, GetEHandle, GetEntryIndex, GetSerialNumber, Init, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, Warning
// callers: DOTA_CreateUnitByName, DOTA_Character_ScriptSpawn_Common<CDotaNPCSpawnerAsync<CDOTA_BaseNPC> >, DOTA_Character_ScriptSpawn_Common<CDotaNPCSpawner<CDOTA_BaseNPC> >, CDOTA_Item_Ward_Dispenser::OnSpellStart, CDOTA_Item_ObserverWard::OnSpellStart, CDOTA_Item_SentryWard::OnSpellStart
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
void __fastcall CEntityKeyValues::SetValue<CBaseEntity *>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        CBaseEntity *const *const value)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v5; // di
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v7; // rcx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int16 v10; // r12
  CBaseEntity *v11; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rdx
  uint16 m_flags; // ax
  int v15; // eax
  CEntityIdentity *m_pEntity; // rcx
  __int16 v17; // si
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v19; // rcx
  __int64 v20; // rax
  const char *m_pAttributeName; // rsi
  CBaseEntity *v22; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v23; // rax
  uint16 v24; // dx
  int v25; // edx
  CEntityIdentity *v26; // rcx
  __int16 v27; // si

  if ( this->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = this->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_10:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&this->m_keyHashes);
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = this->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v10 = this->m_keyHashes.m_nCount - 1;
      m_pElements[v10] = key.m_nHashCode;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
      v11 = *value;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v12 = this->m_keyValues.m_pElements;
      else
        v12 = 0;
      v13 = &v12[v10];
      m_flags = v13->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v13->m_value.m_flags = m_flags & 0xFFFE;
      v13->m_value.m_uint64 = 0;
      v13->m_value.m_type = 13;
      v15 = -1;
      if ( v11 != 0 )
      {
        m_pEntity = v11->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v17 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v15 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v17 & 0x7FFF;
        }
      }
      v13->m_value.m_int = v15;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v18 = this->m_keyValues.m_pElements;
      else
        v18 = 0;
      v18[v10].m_pAttributeName = 0;
    }
    else
    {
      v5 = this->m_keyHashes.m_nAllocated;
      v6 = 0;
      while ( 1 )
      {
        if ( v5 != 0 )
        {
          v7 = (&this->m_keyHashes.m_nAllocAllocated + 1);
          if ( v5 > 9 )
            v7 = this->m_keyHashes.m_pElements;
        }
        else
        {
          v7 = 0;
        }
        if ( v7[v6] == key.m_nHashCode )
          break;
        if ( m_nCount <= ++v6 )
          goto LABEL_10;
      }
      if ( this->m_keyValues.m_nAllocated != 0 )
      {
        v19 = this->m_keyValues.m_pElements;
        v20 = v6;
        m_pAttributeName = v19[v20].m_pAttributeName;
        if ( m_pAttributeName != 0 )
        {
LABEL_27:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
          return;
        }
        v22 = *value;
      }
      else
      {
        v20 = v6;
        m_pAttributeName = *(v20 * 24 + 16);
        if ( m_pAttributeName != 0 )
          goto LABEL_27;
        v22 = *value;
        v19 = 0;
      }
      v23 = &v19[v20];
      v24 = v23->m_value.m_flags;
      if ( (v24 & 1) != 0 )
        v23->m_value.m_flags = v24 & 0xFFFE;
      v23->m_value.m_uint64 = 0;
      v23->m_value.m_type = 13;
      v25 = -1;
      if ( v22 != 0 )
      {
        v26 = v22->m_pEntity;
        if ( v26 != 0 )
        {
          v27 = 0x7FFF;
          if ( v26->m_EHandle.m_Index != -1 )
            v27 = v26->m_EHandle.m_Index & 0x7FFF;
          v25 = (((v26->m_EHandle.m_Index >> 15) - (v26->m_flags & 1)) << 15) | v27 & 0x7FFF;
        }
      }
      v23->m_value.m_int = v25;
    }
  }
}


// CEntityKeyValues::SetValue<CDOTA_BaseNPC*>  (line 498, @0x00000000027dc2f0, libserver.so)  // inlines: AddKeyValue<CDOTA_BaseNPC*>, AddToTail, Base, CEntityHandle, Element, FindKeyHash, Free, GetEHandle, GetEntryIndex, GetSerialNumber, Init, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, Warning
// callers: DOTA_CreateUnitByName, DOTA_VScript_CreateUnitByNameAsync
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
void __fastcall CEntityKeyValues::SetValue<CDOTA_BaseNPC *>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        CDOTA_BaseNPC *const *const value)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v5; // di
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v7; // rcx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int16 v10; // r12
  CDOTA_BaseNPC *v11; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rdx
  uint16 m_flags; // ax
  int v15; // eax
  CEntityIdentity *m_pEntity; // rcx
  __int16 v17; // si
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v19; // rcx
  __int64 v20; // rax
  const char *m_pAttributeName; // rsi
  CDOTA_BaseNPC *v22; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v23; // rax
  uint16 v24; // dx
  int v25; // edx
  CEntityIdentity *v26; // rcx
  __int16 v27; // si

  if ( this->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = this->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_10:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&this->m_keyHashes);
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = this->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v10 = this->m_keyHashes.m_nCount - 1;
      m_pElements[v10] = key.m_nHashCode;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
      v11 = *value;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v12 = this->m_keyValues.m_pElements;
      else
        v12 = 0;
      v13 = &v12[v10];
      m_flags = v13->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v13->m_value.m_flags = m_flags & 0xFFFE;
      v13->m_value.m_uint64 = 0;
      v13->m_value.m_type = 13;
      v15 = -1;
      if ( v11 != 0 )
      {
        m_pEntity = v11->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v17 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v15 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v17 & 0x7FFF;
        }
      }
      v13->m_value.m_int = v15;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v18 = this->m_keyValues.m_pElements;
      else
        v18 = 0;
      v18[v10].m_pAttributeName = 0;
    }
    else
    {
      v5 = this->m_keyHashes.m_nAllocated;
      v6 = 0;
      while ( 1 )
      {
        if ( v5 != 0 )
        {
          v7 = (&this->m_keyHashes.m_nAllocAllocated + 1);
          if ( v5 > 9 )
            v7 = this->m_keyHashes.m_pElements;
        }
        else
        {
          v7 = 0;
        }
        if ( v7[v6] == key.m_nHashCode )
          break;
        if ( m_nCount <= ++v6 )
          goto LABEL_10;
      }
      if ( this->m_keyValues.m_nAllocated != 0 )
      {
        v19 = this->m_keyValues.m_pElements;
        v20 = v6;
        m_pAttributeName = v19[v20].m_pAttributeName;
        if ( m_pAttributeName != 0 )
        {
LABEL_27:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
          return;
        }
        v22 = *value;
      }
      else
      {
        v20 = v6;
        m_pAttributeName = *(v20 * 24 + 16);
        if ( m_pAttributeName != 0 )
          goto LABEL_27;
        v22 = *value;
        v19 = 0;
      }
      v23 = &v19[v20];
      v24 = v23->m_value.m_flags;
      if ( (v24 & 1) != 0 )
        v23->m_value.m_flags = v24 & 0xFFFE;
      v23->m_value.m_uint64 = 0;
      v23->m_value.m_type = 13;
      v25 = -1;
      if ( v22 != 0 )
      {
        v26 = v22->m_pEntity;
        if ( v26 != 0 )
        {
          v27 = 0x7FFF;
          if ( v26->m_EHandle.m_Index != -1 )
            v27 = v26->m_EHandle.m_Index & 0x7FFF;
          v25 = (((v26->m_EHandle.m_Index >> 15) - (v26->m_flags & 1)) << 15) | v27 & 0x7FFF;
        }
      }
      v23->m_value.m_int = v25;
    }
  }
}


// CEntityKeyValues::SetValue<short unsigned int>  (line 498, @0x00000000027dc560, libserver.so)  // inlines: AddKeyValue<short unsigned int>, AddToTail, Base, Element, FindKeyHash, Free, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, Warning
// callers: dota_create_bot_wearing_set, dota_create_bot_wearing_item
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
void __fastcall CEntityKeyValues::SetValue<unsigned short>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        const unsigned __int16 *const value)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v5; // di
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v7; // rcx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int16 v10; // r12
  int v11; // esi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rcx
  __int64 v17; // rax
  const char *m_pAttributeName; // rsi
  int v19; // esi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // rax
  uint16 v21; // dx

  if ( this->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = this->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_10:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&this->m_keyHashes);
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = this->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v10 = this->m_keyHashes.m_nCount - 1;
      m_pElements[v10] = key.m_nHashCode;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
      v11 = *value;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v12 = this->m_keyValues.m_pElements;
      else
        v12 = 0;
      v13 = &v12[v10];
      m_flags = v13->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v13->m_value.m_flags = m_flags & 0xFFFE;
      v13->m_value.m_uint64 = 0;
      v13->m_value.m_type = 5;
      v13->m_value.m_int = v11;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v15 = this->m_keyValues.m_pElements;
      else
        v15 = 0;
      v15[v10].m_pAttributeName = 0;
    }
    else
    {
      v5 = this->m_keyHashes.m_nAllocated;
      v6 = 0;
      while ( 1 )
      {
        if ( v5 != 0 )
        {
          v7 = (&this->m_keyHashes.m_nAllocAllocated + 1);
          if ( v5 > 9 )
            v7 = this->m_keyHashes.m_pElements;
        }
        else
        {
          v7 = 0;
        }
        if ( v7[v6] == key.m_nHashCode )
          break;
        if ( m_nCount <= ++v6 )
          goto LABEL_10;
      }
      if ( this->m_keyValues.m_nAllocated != 0 )
      {
        v16 = this->m_keyValues.m_pElements;
        v17 = v6;
        m_pAttributeName = v16[v17].m_pAttributeName;
        if ( m_pAttributeName != 0 )
        {
LABEL_22:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
          return;
        }
        v19 = *value;
      }
      else
      {
        v17 = v6;
        m_pAttributeName = *(v17 * 24 + 16);
        if ( m_pAttributeName != 0 )
          goto LABEL_22;
        v19 = *value;
        v16 = 0;
      }
      v20 = &v16[v17];
      v21 = v20->m_value.m_flags;
      if ( (v21 & 1) != 0 )
        v20->m_value.m_flags = v21 & 0xFFFE;
      v20->m_value.m_uint64 = 0;
      v20->m_value.m_type = 5;
      v20->m_value.m_int = v19;
    }
  }
}


// CEntityKeyValues::SetValue<CNetworkVarBase<int, CDOTA_BaseNPC_Hero::NetworkVar_m_iPlayerID> >  (line 498, @0x000000000297e2b0, libserver.so)  // inlines: AddKeyValue<CNetworkVarBase<int, CDOTA_BaseNPC_Hero::NetworkVar_m_iPlayerID> >, AddToTail, AddToTailGetPtr, Base, Element, EnsureCapacity, FindKeyHash, Free, LeafCodeInfo_t, memcpy, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, Warning, memcpy, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDOTA_BaseNPC_Hero::Precache
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "../../public/tier1/utlleanvector.h", "EnsureCapacity", "%s allocation count overflow", "AddToTailGetPtr"
void __fastcall CEntityKeyValues::SetValue<CNetworkVarBase<int,CDOTA_BaseNPC_Hero::NetworkVar_m_iPlayerID>>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        const CNetworkVarBase<int,CDOTA_BaseNPC_Hero::NetworkVar_m_iPlayerID> *const value)
{
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nCount; // dx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v7; // si
  __int64 v8; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v9; // rcx
  unsigned __int64 m_nAllocated; // rcx
  int v11; // edi
  int v12; // r14d
  int v13; // eax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int64 v15; // r14
  int m_Value; // esi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v21; // rdx
  __int64 v22; // rax
  const char *m_pAttributeName; // rsi
  int v24; // ecx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v25; // rax
  uint16 v26; // dx
  int v27; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v28; // rax
  void *v29; // rcx
  unsigned __int64 v30; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  const char *v36; // rax
  LeafCodeInfo_t v37; // [rsp+0h] [rbp-40h] BYREF

  if ( this->m_nQueuedForSpawnCount > 0 )
    return;
  m_nCount = this->m_keyHashes.m_nCount;
  if ( this->m_keyHashes.m_nCount <= 0 )
  {
LABEL_10:
    if ( m_nCount == 0x7FFF )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v37.m_nLine = 557;
        v37.m_szFile = "../../public/tier1/utlleanvector.h";
        v36 = "AddToTailGetPtr";
        goto LABEL_55;
      }
    }
    else
    {
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      v11 = m_nCount + 1;
      if ( v11 <= m_nAllocated )
      {
LABEL_21:
        this->m_keyHashes.m_nCount = m_nCount + 1;
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
        v15 = m_nCount;
        m_pElements[m_nCount] = key.m_nHashCode;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
        m_Value = value->m_Value;
        if ( this->m_keyValues.m_nAllocated != 0 )
          v17 = this->m_keyValues.m_pElements;
        else
          v17 = 0;
        v18 = &v17[v15];
        m_flags = v18->m_value.m_flags;
        if ( (m_flags & 1) != 0 )
          v18->m_value.m_flags = m_flags & 0xFFFE;
        v18->m_value.m_uint64 = 0;
        v18->m_value.m_type = 5;
        v18->m_value.m_int = m_Value;
        if ( this->m_keyValues.m_nAllocated != 0 )
          v20 = this->m_keyValues.m_pElements;
        else
          v20 = 0;
        v20[v15].m_pAttributeName = 0;
        return;
      }
      LOWORD(v12) = m_nCount + 1;
      if ( v11 <= 9 )
      {
LABEL_18:
        if ( m_nAllocated > 9 )
        {
          v28 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_keyHashes.m_pElements, 4LL * v12);
          m_nCount = this->m_keyHashes.m_nCount;
          this->m_keyHashes.m_pElements = v28;
        }
        else if ( v12 > 9 )
        {
          v29 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v12);
          v30 = this->m_keyHashes.m_nAllocated;
          if ( v30 != 0 )
          {
            v31 = (&this->m_keyHashes.m_nAllocAllocated + 1);
            if ( v30 > 9 )
              v31 = this->m_keyHashes.m_pElements;
          }
          else
          {
            v31 = 0;
          }
          this->m_keyHashes.m_pElements = memcpy(v29, v31, 4LL * this->m_keyHashes.m_nCount);
          m_nCount = this->m_keyHashes.m_nCount;
        }
        this->m_keyHashes.m_nAllocated = v12;
        m_nAllocated = v12;
        goto LABEL_21;
      }
      if ( m_nCount != 0x7FFF )
      {
        v12 = m_nAllocated;
        while ( 1 )
        {
          v13 = v12;
          if ( v11 <= v12 )
            break;
          if ( v12 <= 16382 )
          {
            v27 = 2 * v12;
            v12 = 8;
            if ( 2 * v13 > 7 )
              v12 = v27;
          }
          else
          {
            v12 = 0x7FFF;
          }
        }
        goto LABEL_18;
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        goto LABEL_54;
    }
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v34, v35, v32, v33) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_54:
      v37.m_nLine = 104;
      v37.m_szFile = "../../public/tier1/utlleanvector.h";
      v36 = "EnsureCapacity";
LABEL_55:
      v37.m_szFunction = v36;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v37, "%s allocation count overflow", v36);
    }
  }
  v7 = this->m_keyHashes.m_nAllocated;
  v8 = 0;
  while ( 1 )
  {
    if ( v7 != 0 )
    {
      v9 = (&this->m_keyHashes.m_nAllocAllocated + 1);
      if ( v7 > 9 )
        v9 = this->m_keyHashes.m_pElements;
    }
    else
    {
      v9 = 0;
    }
    if ( v9[v8] == key.m_nHashCode )
      break;
    if ( m_nCount <= ++v8 )
      goto LABEL_10;
  }
  if ( this->m_keyValues.m_nAllocated != 0 )
  {
    v21 = this->m_keyValues.m_pElements;
    v22 = v8;
    m_pAttributeName = v21[v22].m_pAttributeName;
    if ( m_pAttributeName != 0 )
    {
LABEL_33:
      Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
      return;
    }
    v24 = value->m_Value;
  }
  else
  {
    v22 = v8;
    m_pAttributeName = *(v22 * 24 + 16);
    if ( m_pAttributeName != 0 )
      goto LABEL_33;
    v24 = value->m_Value;
    v21 = 0;
  }
  v25 = &v21[v22];
  v26 = v25->m_value.m_flags;
  if ( (v26 & 1) != 0 )
    v25->m_value.m_flags = v26 & 0xFFFE;
  v25->m_value.m_uint64 = 0;
  v25->m_value.m_type = 5;
  v25->m_value.m_int = v24;
}


// CEntityKeyValues::SetValue<Vector2D>  (line 498, @0x00000000030a9af0, libserver.so)  // inlines: AddKeyValue<Vector2D>, AddToTail, Alloc, Allocate, Allocate<Vector2D>, Base, CopyData<Vector2D>, Element, FindKeyHash, Free, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, CUtlScratchMemoryPool::AllocAligned, Warning
// callers: ConvertTextDataToNewKeyValues
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityVariantAllocator::sm_pMemoryPool
void __fastcall CEntityKeyValues::SetValue<Vector2D>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        const Vector2D *const value)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v6; // di
  __int64 v7; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v8; // rcx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int16 v11; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rax
  __int64 v13; // r14
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v14; // r13
  uint16 m_flags; // ax
  CUtlScratchMemoryPool *v16; // rdi
  vec_t *v17; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int16 v22; // ax
  CUtlScratchMemoryPool *v23; // rdi
  vec_t *v24; // rax

  if ( this->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = this->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_10:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&this->m_keyHashes);
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = this->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v11 = this->m_keyHashes.m_nCount - 1;
      m_pElements[v11] = key.m_nHashCode;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
      if ( this->m_keyValues.m_nAllocated != 0 )
        v12 = this->m_keyValues.m_pElements;
      else
        v12 = 0;
      v13 = v11;
      v14 = &v12[v13];
      m_flags = v12[v13].m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v14->m_value.m_flags = m_flags & 0xFFFE;
      v14->m_value.m_uint64 = 0;
      v16 = CEntityVariantAllocator::sm_pMemoryPool;
      v14->m_value.m_type = 25;
      v17 = CUtlScratchMemoryPool::AllocAligned(v16, 8, 8);
      v14->m_value.m_uint64 = v17;
      *v17 = value->x;
      v17[1] = value->y;
      v14->m_value.m_flags |= 1u;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v18 = this->m_keyValues.m_pElements;
      else
        v18 = 0;
      v18[v13].m_pAttributeName = 0;
    }
    else
    {
      v6 = this->m_keyHashes.m_nAllocated;
      v7 = 0;
      while ( 1 )
      {
        if ( v6 != 0 )
        {
          v8 = (&this->m_keyHashes.m_nAllocAllocated + 1);
          if ( v6 > 9 )
            v8 = this->m_keyHashes.m_pElements;
        }
        else
        {
          v8 = 0;
        }
        if ( v8[v7] == key.m_nHashCode )
          break;
        if ( m_nCount <= ++v7 )
          goto LABEL_10;
      }
      if ( this->m_keyValues.m_nAllocated != 0 )
      {
        v19 = this->m_keyValues.m_pElements;
        v20 = v7;
        if ( v19[v20].m_pAttributeName != 0 )
        {
LABEL_22:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v19[v20].m_pAttributeName);
          return;
        }
        v21 = &v19[v20];
      }
      else
      {
        v20 = v7;
        v19 = 0;
        v21 = v20 * 24;
        if ( *(v20 * 24 + 16) != 0 )
          goto LABEL_22;
      }
      v22 = *(v21 + 10);
      if ( (v22 & 1) != 0 )
        *(v21 + 10) = v22 & 0xFFFE;
      *v21 = 0;
      v23 = CEntityVariantAllocator::sm_pMemoryPool;
      *(v21 + 8) = 25;
      v24 = CUtlScratchMemoryPool::AllocAligned(v23, 8, 8);
      *v21 = v24;
      *v24 = value->x;
      v24[1] = value->y;
      *(v21 + 10) |= 1u;
    }
  }
}


// CEntityKeyValues::SetValue<Vector4D>  (line 498, @0x00000000030a9d30, libserver.so)  // inlines: AddKeyValue<Vector4D>, AddToTail, Base, Element, FindKeyHash, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, CVariantBase<CEntityVariantAllocator>::CopyData<Vector4D>, Warning
// callers: ConvertTextDataToNewKeyValues
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
void __fastcall CEntityKeyValues::SetValue<Vector4D>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        const Vector4D *const value)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v5; // di
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v7; // rcx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int16 v10; // r12
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v11; // rdi
  __int64 v12; // r12
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v14; // rcx
  __int64 v15; // rax
  CVariantBase<CEntityVariantAllocator> *p_m_value; // rdi

  if ( this->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = this->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_10:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&this->m_keyHashes);
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = this->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v10 = this->m_keyHashes.m_nCount - 1;
      m_pElements[v10] = key.m_nHashCode;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
      if ( this->m_keyValues.m_nAllocated != 0 )
        v11 = this->m_keyValues.m_pElements;
      else
        v11 = 0;
      v12 = v10;
      CVariantBase<CEntityVariantAllocator>::CopyData<Vector4D>(&v11[v12].m_value, value, value);
      if ( this->m_keyValues.m_nAllocated != 0 )
        v13 = this->m_keyValues.m_pElements;
      else
        v13 = 0;
      v13[v12].m_pAttributeName = 0;
    }
    else
    {
      v5 = this->m_keyHashes.m_nAllocated;
      v6 = 0;
      while ( 1 )
      {
        if ( v5 != 0 )
        {
          v7 = (&this->m_keyHashes.m_nAllocAllocated + 1);
          if ( v5 > 9 )
            v7 = this->m_keyHashes.m_pElements;
        }
        else
        {
          v7 = 0;
        }
        if ( v7[v6] == key.m_nHashCode )
          break;
        if ( m_nCount <= ++v6 )
          goto LABEL_10;
      }
      if ( this->m_keyValues.m_nAllocated != 0 )
      {
        v14 = this->m_keyValues.m_pElements;
        v15 = v6;
        p_m_value = &v14[v15].m_value;
        if ( v14[v15].m_pAttributeName != 0 )
        {
LABEL_20:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v14[v15].m_pAttributeName);
          return;
        }
      }
      else
      {
        v15 = v6;
        v14 = 0;
        p_m_value = (v15 * 24);
        if ( *(v15 * 24 + 16) != 0 )
          goto LABEL_20;
      }
      CVariantBase<CEntityVariantAllocator>::CopyData<Vector4D>(p_m_value, value, value);
    }
  }
}


// CEntityKeyValues::SetValue<Color>  (line 498, @0x00000000030a9eb0, libserver.so)  // inlines: AddKeyValue<Color>, AddToTail, Base, Element, FindKeyHash, Free, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, Warning
// callers: ConvertTextDataToNewKeyValues
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
void __fastcall CEntityKeyValues::SetValue<Color>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        const Color *const value)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v5; // di
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v7; // rcx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int16 v10; // r12
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v11; // rax
  Color v12; // esi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rax
  uint16 m_flags; // dx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int16 v19; // ax
  Color v20; // edx

  if ( this->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = this->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_10:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&this->m_keyHashes);
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = this->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v10 = this->m_keyHashes.m_nCount - 1;
      m_pElements[v10] = key.m_nHashCode;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
      if ( this->m_keyValues.m_nAllocated != 0 )
        v11 = this->m_keyValues.m_pElements;
      else
        v11 = 0;
      v12 = *value;
      v13 = &v11[v10];
      m_flags = v13->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v13->m_value.m_flags = m_flags & 0xFFFE;
      v13->m_value.m_uint64 = 0;
      v13->m_value.m_type = 9;
      v13->m_value.m_int = v12;
      if ( this->m_keyValues.m_nAllocated != 0 )
        v15 = this->m_keyValues.m_pElements;
      else
        v15 = 0;
      v15[v10].m_pAttributeName = 0;
    }
    else
    {
      v5 = this->m_keyHashes.m_nAllocated;
      v6 = 0;
      while ( 1 )
      {
        if ( v5 != 0 )
        {
          v7 = (&this->m_keyHashes.m_nAllocAllocated + 1);
          if ( v5 > 9 )
            v7 = this->m_keyHashes.m_pElements;
        }
        else
        {
          v7 = 0;
        }
        if ( v7[v6] == key.m_nHashCode )
          break;
        if ( m_nCount <= ++v6 )
          goto LABEL_10;
      }
      if ( this->m_keyValues.m_nAllocated != 0 )
      {
        v16 = this->m_keyValues.m_pElements;
        v17 = v6;
        v18 = &v16[v17];
        if ( v16[v17].m_pAttributeName != 0 )
        {
LABEL_22:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v16[v17].m_pAttributeName);
          return;
        }
      }
      else
      {
        v17 = v6;
        v16 = 0;
        v18 = v17 * 24;
        if ( *(v17 * 24 + 16) != 0 )
          goto LABEL_22;
      }
      v19 = *(v18 + 10);
      v20 = *value;
      if ( (v19 & 1) != 0 )
        *(v18 + 10) = v19 & 0xFFFE;
      *v18 = 0;
      *(v18 + 8) = 9;
      *v18 = v20;
    }
  }
}


// CEntityKeyValues::SetValue<Quaternion>  (line 498, @0x00000000030aa070, libserver.so)  // inlines: AddKeyValue<Quaternion>, AddToTail, Base, Element, FindKeyHash, operator=, operator[]
// calls: CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, CVariantBase<CEntityVariantAllocator>::CopyData<Quaternion>, Warning
// callers: ConvertTextDataToNewKeyValues
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
void __fastcall CEntityKeyValues::SetValue<Quaternion>(
        CEntityKeyValues *const this,
        EntityKeyId_t key,
        const Quaternion *const value)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v5; // di
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v7; // rcx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int16 v10; // r12
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v11; // rdi
  __int64 v12; // r12
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v14; // rcx
  __int64 v15; // rax
  CVariantBase<CEntityVariantAllocator> *p_m_value; // rdi

  if ( this->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = this->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_10:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&this->m_keyHashes);
      m_nAllocated = this->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&this->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = this->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v10 = this->m_keyHashes.m_nCount - 1;
      m_pElements[v10] = key.m_nHashCode;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&this->m_keyValues);
      if ( this->m_keyValues.m_nAllocated != 0 )
        v11 = this->m_keyValues.m_pElements;
      else
        v11 = 0;
      v12 = v10;
      CVariantBase<CEntityVariantAllocator>::CopyData<Quaternion>(&v11[v12].m_value, value, value);
      if ( this->m_keyValues.m_nAllocated != 0 )
        v13 = this->m_keyValues.m_pElements;
      else
        v13 = 0;
      v13[v12].m_pAttributeName = 0;
    }
    else
    {
      v5 = this->m_keyHashes.m_nAllocated;
      v6 = 0;
      while ( 1 )
      {
        if ( v5 != 0 )
        {
          v7 = (&this->m_keyHashes.m_nAllocAllocated + 1);
          if ( v5 > 9 )
            v7 = this->m_keyHashes.m_pElements;
        }
        else
        {
          v7 = 0;
        }
        if ( v7[v6] == key.m_nHashCode )
          break;
        if ( m_nCount <= ++v6 )
          goto LABEL_10;
      }
      if ( this->m_keyValues.m_nAllocated != 0 )
      {
        v14 = this->m_keyValues.m_pElements;
        v15 = v6;
        p_m_value = &v14[v15].m_value;
        if ( v14[v15].m_pAttributeName != 0 )
        {
LABEL_20:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v14[v15].m_pAttributeName);
          return;
        }
      }
      else
      {
        v15 = v6;
        v14 = 0;
        p_m_value = (v15 * 24);
        if ( *(v15 * 24 + 16) != 0 )
          goto LABEL_20;
      }
      CVariantBase<CEntityVariantAllocator>::CopyData<Quaternion>(p_m_value, value, value);
    }
  }
}


