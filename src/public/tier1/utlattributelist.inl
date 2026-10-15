
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlAttributeList<Vector4D, 4, Vector4D>::~CUtlAttributeList  (line 262, @0x000000000210c830, libserver.so)  // inlines: Clear, ClearButLeaveParentPointerAlone, Purge, StoreAlignedIntSIMD<(ESIMDLevel)20u>, _mm_store_ps
// calls: operator delete
// callers: CLoopModeGame::CLoopModeGame, CRenderAttributes::CRenderAttributes, GetNewAttributeObjectFromPool
void __fastcall CUtlAttributeList<Vector4D,4,Vector4D>::~CUtlAttributeList(
        CUtlAttributeList<Vector4D,4,Vector4D> *const this)
{
  CUtlAttributeList<Vector4D,4,Vector4D>::OverflowChunk_t *m_pHead; // rdi
  CUtlAttributeList<Vector4D,4,Vector4D>::OverflowChunk_t *m_pNext; // rbx
  CUtlAttributeList<Vector4D,4,Vector4D> *v4; // rax

  m_pHead = this->m_pOverflow.m_pHead;
  if ( m_pHead != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pHead->m_pNext;
      operator delete(m_pHead);
      this->m_pOverflow.m_pHead = m_pNext;
      if ( m_pNext == 0 )
        break;
      m_pHead = m_pNext;
    }
  }
  v4 = this;
  do
  {
    v4->m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
    v4 = (v4 + 16);
  }
  while ( this->m_fixedStorage.m_FixedValues != v4 );
  this->m_pParent = 0;
}


// CUtlAttributeList<VMatrix, 4, VMatrix>::~CUtlAttributeList  (line 262, @0x000000000210c890, libserver.so)  // inlines: Clear, ClearButLeaveParentPointerAlone, Purge, StoreAlignedIntSIMD<(ESIMDLevel)20u>, _mm_store_ps
// calls: operator delete
// callers: CLoopModeGame::CLoopModeGame, CRenderAttributes::CRenderAttributes, GetNewAttributeObjectFromPool
void __fastcall CUtlAttributeList<VMatrix,4,VMatrix>::~CUtlAttributeList(
        CUtlAttributeList<VMatrix,4,VMatrix> *const this)
{
  CUtlAttributeList<VMatrix,4,VMatrix>::OverflowChunk_t *m_pHead; // rdi
  CUtlAttributeList<VMatrix,4,VMatrix>::OverflowChunk_t *m_pNext; // rbx
  CUtlAttributeList<VMatrix,4,VMatrix> *v4; // rax

  m_pHead = this->m_pOverflow.m_pHead;
  if ( m_pHead != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pHead->m_pNext;
      operator delete(m_pHead);
      this->m_pOverflow.m_pHead = m_pNext;
      if ( m_pNext == 0 )
        break;
      m_pHead = m_pNext;
    }
  }
  v4 = this;
  do
  {
    v4->m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
    v4 = (v4 + 16);
  }
  while ( this->m_fixedStorage.m_FixedValues != v4 );
  this->m_pParent = 0;
}


// CUtlAttributeList<int, 8, int>::~CUtlAttributeList  (line 262, @0x000000000210c900, libserver.so)  // inlines: Clear, ClearButLeaveParentPointerAlone, Purge, StoreAlignedIntSIMD<(ESIMDLevel)20u>, _mm_store_ps
// calls: operator delete
// callers: CLoopModeGame::CLoopModeGame, CRenderAttributes::CRenderAttributes, GetNewAttributeObjectFromPool
void __fastcall CUtlAttributeList<int,8,int>::~CUtlAttributeList(CUtlAttributeList<int,8,int> *const this)
{
  CUtlAttributeList<int,8,int>::OverflowChunk_t *m_pHead; // rdi
  CUtlAttributeList<int,8,int>::OverflowChunk_t *m_pNext; // rbx
  CUtlAttributeList<int,8,int> *v4; // rax

  m_pHead = this->m_pOverflow.m_pHead;
  if ( m_pHead != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pHead->m_pNext;
      operator delete(m_pHead);
      this->m_pOverflow.m_pHead = m_pNext;
      if ( m_pNext == 0 )
        break;
      m_pHead = m_pNext;
    }
  }
  v4 = this;
  do
  {
    v4->m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
    v4 = (v4 + 16);
  }
  while ( this->m_fixedStorage.m_FixedValues != v4 );
  this->m_pParent = 0;
}


// CUtlAttributeList<CRenderAttributes::TextureAttr_t, 4, CRenderAttributes::TextureAttrForStorage_t>::~CUtlAttributeList  (line 262, @0x000000000210c960, libserver.so)  // inlines: Clear, ClearButLeaveParentPointerAlone, Init, Purge, ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>, StoreAlignedIntSIMD<(ESIMDLevel)20u>, _mm_store_ps, operator=
// calls: operator delete
// callers: CLoopModeGame::CLoopModeGame, CRenderAttributes::CRenderAttributes, GetNewAttributeObjectFromPool
void __fastcall CUtlAttributeList<CRenderAttributes::TextureAttr_t,4,CRenderAttributes::TextureAttrForStorage_t>::~CUtlAttributeList(
        CUtlAttributeList<CRenderAttributes::TextureAttr_t,4,CRenderAttributes::TextureAttrForStorage_t> *const this)
{
  CUtlAttributeList<CRenderAttributes::TextureAttr_t,4,CRenderAttributes::TextureAttrForStorage_t>::OverflowChunk_t *m_pHead; // rdi
  CUtlAttributeList<CRenderAttributes::TextureAttr_t,4,CRenderAttributes::TextureAttrForStorage_t>::OverflowChunk_t *m_pNext; // rbx
  __int64 i; // rax
  CUtlAttributeList<CRenderAttributes::TextureAttr_t,4,CRenderAttributes::TextureAttrForStorage_t> *v5; // rax

  m_pHead = this->m_pOverflow.m_pHead;
  if ( m_pHead != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pHead->m_pNext;
      operator delete(m_pHead);
      this->m_pOverflow.m_pHead = m_pNext;
      if ( m_pNext == 0 )
        break;
      m_pHead = m_pNext;
    }
  }
  for ( i = 0; i != 4; ++i )
  {
    if ( this->m_fixedStorage.m_nFixedKeys[0].m_i32[i] != 0 )
      this->m_fixedStorage.m_FixedValues[i].texture.m_pBinding = 0;
  }
  v5 = this;
  do
  {
    v5->m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
    v5 = (v5 + 16);
  }
  while ( this->m_fixedStorage.m_FixedValues != v5 );
  this->m_pParent = 0;
}


// CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::~CUtlAttributeList  (line 262, @0x000000000210c9f0, libserver.so)  // inlines: Clear, ClearButLeaveParentPointerAlone, Purge, StoreAlignedIntSIMD<(ESIMDLevel)20u>, _mm_store_ps
// calls: operator delete
// callers: CLoopModeGame::CLoopModeGame, CRenderAttributes::CRenderAttributes, GetNewAttributeObjectFromPool
void __fastcall CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t,4,CRenderAttributes::ConstantBufferAttr_t>::~CUtlAttributeList(
        CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t,4,CRenderAttributes::ConstantBufferAttr_t> *const this)
{
  CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t,4,CRenderAttributes::ConstantBufferAttr_t>::OverflowChunk_t *m_pHead; // rdi
  CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t,4,CRenderAttributes::ConstantBufferAttr_t>::OverflowChunk_t *m_pNext; // rbx
  CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t,4,CRenderAttributes::ConstantBufferAttr_t> *v4; // rax

  m_pHead = this->m_pOverflow.m_pHead;
  if ( m_pHead != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pHead->m_pNext;
      operator delete(m_pHead);
      this->m_pOverflow.m_pHead = m_pNext;
      if ( m_pNext == 0 )
        break;
      m_pHead = m_pNext;
    }
  }
  v4 = this;
  do
  {
    v4->m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
    v4 = (v4 + 16);
  }
  while ( this->m_fixedStorage.m_FixedValues != v4 );
  this->m_pParent = 0;
}


// CUtlAttributeList<void*, 4, void*>::~CUtlAttributeList  (line 262, @0x000000000210ca50, libserver.so)  // inlines: Clear, ClearButLeaveParentPointerAlone, Purge, StoreAlignedIntSIMD<(ESIMDLevel)20u>, _mm_store_ps
// calls: operator delete
// callers: CLoopModeGame::CLoopModeGame, CRenderAttributes::CRenderAttributes, GetNewAttributeObjectFromPool
void __fastcall CUtlAttributeList<void *,4,void *>::~CUtlAttributeList(CUtlAttributeList<void*,4,void*> *const this)
{
  CUtlAttributeList<void*,4,void*>::OverflowChunk_t *m_pHead; // rdi
  CUtlAttributeList<void*,4,void*>::OverflowChunk_t *m_pNext; // rbx
  CUtlAttributeList<void*,4,void*> *v4; // rax

  m_pHead = this->m_pOverflow.m_pHead;
  if ( m_pHead != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pHead->m_pNext;
      operator delete(m_pHead);
      this->m_pOverflow.m_pHead = m_pNext;
      if ( m_pNext == 0 )
        break;
      m_pHead = m_pNext;
    }
  }
  v4 = this;
  do
  {
    v4->m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
    v4 = (v4 + 16);
  }
  while ( this->m_fixedStorage.m_FixedValues != v4 );
  this->m_pParent = 0;
}


// CUtlAttributeList<CUtlSymbolLarge, 16, CUtlSymbolLarge>::GetValue  (line 348, @0x0000000001ff0ab0, libserver.so)  // inlines: CmpEqSIMD<(ESIMDLevel)20u>, FindIndexOfMatch, Head, ReplicateIX4<(ESIMDLevel)20u>, TestSignSIMD<(ESIMDLevel)20u>, _mm_cmpeq_epi32, _mm_movemask_ps, _mm_set1_epi32, _mm_set_epi32, begin, operator++, operator=
// callers: CInfoData::QueryFloat, CInfoData::QueryInt, CInfoData::QueryNumber
bool __fastcall CUtlAttributeList<CUtlSymbolLarge,16,CUtlSymbolLarge>::GetValue(
        const CUtlAttributeList<CUtlSymbolLarge,16,CUtlSymbolLarge> *const this,
        CUtlSymbolLarge *pOutputValue,
        const CUtlStringToken *const attrName)
{
  __m128i v3; // xmm1
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  CUtlAttributeList<CUtlSymbolLarge,16,CUtlSymbolLarge>::OverflowChunk_t *m_pHead; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax

  v3 = _mm_shuffle_epi32(_mm_cvtsi32_si128(attrName->m_nHashCode), 0);
LABEL_2:
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&this->m_fixedStorage.m_nFixedKeys[v5]), v3));
    if ( v6 != 0 )
      break;
    v5 = v4 + 1;
    if ( v4 == 3 )
    {
LABEL_7:
      m_pHead = this->m_pOverflow.m_pHead;
      if ( m_pHead != 0 )
      {
        while ( 2 )
        {
          v9 = 0;
          v10 = 0;
          while ( 1 )
          {
            v11 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(&m_pHead->m_storage.m_nFixedKeys[v10]), v3));
            if ( v11 != 0 )
              break;
            v10 = v9 + 1;
            if ( v9 == 3 )
              goto LABEL_13;
            ++v9;
          }
          v7 = g_nSIMDBitMaskToIndex[v11] + 4 * v9;
          if ( v7 != -1 )
          {
            this = &m_pHead->m_storage;
            goto LABEL_17;
          }
LABEL_13:
          m_pHead = m_pHead->m_pNext;
          if ( m_pHead != 0 )
            continue;
          break;
        }
      }
      this = this->m_pParent;
      if ( this == 0 )
        return 0;
      goto LABEL_2;
    }
    ++v4;
  }
  v7 = g_nSIMDBitMaskToIndex[v6] + 4 * v4;
  if ( v7 == -1 )
    goto LABEL_7;
LABEL_17:
  if ( pOutputValue != 0 )
    pOutputValue->u.m_Id = this->m_fixedStorage.m_FixedValues[v7];
  return 1;
}


// CUtlAttributeList<Vector4D, 4, Vector4D>::SetValue  (line 418, @0x0000000001ec5530, libserver.so)  // inlines: AddToHead, AddToHead<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t, CUtlAttributeList<Vector4D, 4>::OverflowChunk_t>, CUtlAttributeListChunk, Clear, CmpEqSIMD<(ESIMDLevel)20u>, FindIndexOfMatch, Head, OverflowChunk_t, ReplicateIX4<(ESIMDLevel)20u>, StoreAlignedIntSIMD<(ESIMDLevel)20u>, TestSignSIMD<(ESIMDLevel)20u>, _mm_cmpeq_epi32, _mm_movemask_ps, _mm_set1_epi32, _mm_set_epi32, _mm_store_ps, begin, memset, operator++, operator=
// calls: operator new
// callers: CRenderComponent::UpdateEntityRenderAttrs
void __fastcall CUtlAttributeList<Vector4D,4,Vector4D>::SetValue(
        CUtlAttributeList<Vector4D,4,Vector4D> *const this,
        uint32 nKey,
        Vector4D nValue,
        _DWORD *a4)
{
  __m128i v4; // xmm2
  CUtlAttributeList<Vector4D,4,Vector4D> *v5; // rbx
  __m128i si128; // xmm1
  int v7; // eax
  CUtlAttributeList<Vector4D,4,Vector4D>::OverflowChunk_t *m_pHead; // r8
  const __m128i *v9; // rax
  int v10; // ecx
  __int64 v11; // rcx
  Vector4D *v12; // rax
  int v13; // ecx
  const __m128i *v14; // rcx
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rax
  fltx4_0 *v18; // rdi
  _QWORD *v19; // rax
  fltx4_0 *v20; // r8
  _DWORD *v21; // [rsp-20h] [rbp-28h]
  uint32 v22; // [rsp-14h] [rbp-1Ch]

  v4 = _mm_shuffle_epi32(_mm_cvtsi32_si128(nKey), 0);
  v5 = this;
  si128 = _mm_load_si128(this);
  v7 = _mm_movemask_ps(_mm_cmpeq_epi32(si128, v4));
  if ( v7 != 0 )
  {
    v11 = g_nSIMDBitMaskToIndex[v7];
    if ( v11 != -1 )
    {
LABEL_8:
      v12 = &v5->m_fixedStorage.m_FixedValues[v11];
      v12->x = *a4;
      v12->y = a4[1];
      v12->z = a4[2];
      v12->w = a4[3];
      return;
    }
  }
  m_pHead = this->m_pOverflow.m_pHead;
  if ( m_pHead != 0 )
  {
    v9 = this->m_pOverflow.m_pHead;
    while ( 1 )
    {
      v10 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v9 + 1), v4));
      if ( v10 != 0 )
      {
        v11 = g_nSIMDBitMaskToIndex[v10];
        if ( v11 != -1 )
          break;
      }
      v9 = v9->m128i_i64[0];
      if ( v9 == 0 )
        goto LABEL_9;
    }
    v5 = &v9[1];
    goto LABEL_8;
  }
LABEL_9:
  v13 = _mm_movemask_ps(_mm_cmpeq_epi32(0LL, si128));
  if ( v13 == 0 || (v16 = g_nSIMDBitMaskToIndex[v13]) == -1 )
  {
    if ( m_pHead == 0 )
    {
LABEL_18:
      v21 = a4;
      v22 = nKey;
      v19 = operator new(0x60u);
      nKey = v22;
      v19[2] = 0;
      a4 = v21;
      v18 = (v19 + 4);
      v19[3] = 0;
      if ( v19 + 2 != v19 + 4 )
      {
        v20 = (v19 + 2);
        do
          *v20++ = Four_Zeros;
        while ( v18 != v20 );
      }
      *v19 = v5->m_pOverflow.m_pHead;
      v5->m_pOverflow.m_pHead = v19;
      v5 = (v19 + 2);
      v17 = 0;
      goto LABEL_17;
    }
    v14 = v5->m_pOverflow.m_pHead;
    while ( 1 )
    {
      v15 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v14 + 1), 0LL));
      if ( v15 != 0 )
      {
        v16 = g_nSIMDBitMaskToIndex[v15];
        if ( v16 != -1 )
          break;
      }
      v14 = v14->m128i_i64[0];
      if ( v14 == 0 )
        goto LABEL_18;
    }
    v5 = &v14[1];
  }
  v17 = v16;
  v18 = &v5->m_fixedStorage.m_FixedValues[v16];
LABEL_17:
  v5->m_fixedStorage.m_nFixedKeys[0].m_i32[v17] = nKey;
  v18->m128_i32[0] = *a4;
  v18->m128_i32[1] = a4[1];
  v18->m128_i32[2] = a4[2];
  v18->m128_i32[3] = a4[3];
}


