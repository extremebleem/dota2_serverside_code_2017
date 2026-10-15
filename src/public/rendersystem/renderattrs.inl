
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRenderAttributes::CRenderAttributes  (line 542, @0x00000000030c0d90, libserver.so)  // inlines: CUtlAttributeList, CUtlAttributeListChunk, CUtlIntrusiveList, CUtlString, CWeakHandle, Clear, ConstantBufferAttr_t, FromUntypedHandleUnchecked, Init, ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>, ReleaseValueFromAttribute<CUtlString>, StaticInvalidHandle, StoreAlignedIntSIMD<(ESIMDLevel)20u>, TextureAttrForStorage_t, _mm_store_ps, memset, operator=, ~CUtlString
// calls: CUtlString::Clear, CUtlString::FreeMemoryBlock, CUtlAttributeList<void*, 4, void*>::~CUtlAttributeList, CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::~CUtlAttributeList, CUtlAttributeList<CRenderAttributes::TextureAttr_t, 4, CRenderAttributes::TextureAttrForStorage_t>::~CUtlAttributeList, CUtlAttributeList<int, 8, int>::~CUtlAttributeList, CUtlAttributeList<VMatrix, 4, VMatrix>::~CUtlAttributeList, CUtlAttributeList<Vector4D, 4, Vector4D>::~CUtlAttributeList, _Unwind_Resume
// callers: GetNewAttributeObjectFromPool
void __fastcall CRenderAttributes::CRenderAttributes(CRenderAttributes *const this)
{
  CRenderAttributes *v2; // rax
  CRenderAttributes *p_m_matrix4x4Attrs; // rax
  CRenderAttributes *p_m_intAttrs; // rax
  CRenderAttributes::TextureAttrForStorage_t *m_FixedValues; // rdx
  CUtlAttributeList<CRenderAttributes::TextureAttr_t,4,CRenderAttributes::TextureAttrForStorage_t> *p_m_textureAttrs; // r15
  CRenderAttributes *v7; // rax
  __int64 v8; // rax
  CUtlAttributeList<CRenderAttributes::TextureAttr_t,4,CRenderAttributes::TextureAttrForStorage_t> *v9; // rax
  CRenderAttributes *v10; // rdx
  CRenderAttributes *v11; // rax
  CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t,4,CRenderAttributes::ConstantBufferAttr_t> *p_m_constantBufferAttrs; // rax
  CRenderAttributes *p_m_ptrAttrs; // rax
  __int64 v14; // r12
  CUtlString *v15; // r13
  CUtlString *v16; // r14
  fltx4_0 *v17; // r15
  CUtlAttributeList<CUtlString,4,CUtlString> *p_m_stringAttrs; // [rsp+28h] [rbp-38h]

  *this->m_vec4Attrs.m_fixedStorage.m_nFixedKeys[0].m_i32 = 0;
  *&this->m_vec4Attrs.m_fixedStorage.m_nFixedKeys[0].m_i32[2] = 0;
  v2 = this;
  do
  {
    v2->m_vec4Attrs.m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
    v2 = (v2 + 16);
  }
  while ( this->m_vec4Attrs.m_fixedStorage.m_FixedValues != v2 );
  this->m_vec4Attrs.m_pParent = 0;
  this->m_vec4Attrs.m_pOverflow.m_pHead = 0;
  *this->m_matrix4x4Attrs.m_fixedStorage.m_nFixedKeys[0].m_i32 = 0;
  *&this->m_matrix4x4Attrs.m_fixedStorage.m_nFixedKeys[0].m_i32[2] = 0;
  if ( &this->m_matrix4x4Attrs != this->m_matrix4x4Attrs.m_fixedStorage.m_FixedValues )
  {
    p_m_matrix4x4Attrs = &this->m_matrix4x4Attrs;
    do
    {
      p_m_matrix4x4Attrs->m_vec4Attrs.m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
      p_m_matrix4x4Attrs = (p_m_matrix4x4Attrs + 16);
    }
    while ( this->m_matrix4x4Attrs.m_fixedStorage.m_FixedValues != p_m_matrix4x4Attrs );
  }
  this->m_matrix4x4Attrs.m_pParent = 0;
  this->m_matrix4x4Attrs.m_pOverflow.m_pHead = 0;
  *this->m_intAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32 = 0;
  *&this->m_intAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32[2] = 0;
  *this->m_intAttrs.m_fixedStorage.m_nFixedKeys[1].m_i32 = 0;
  *&this->m_intAttrs.m_fixedStorage.m_nFixedKeys[1].m_i32[2] = 0;
  if ( &this->m_intAttrs != this->m_intAttrs.m_fixedStorage.m_FixedValues )
  {
    p_m_intAttrs = &this->m_intAttrs;
    do
    {
      p_m_intAttrs->m_vec4Attrs.m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
      p_m_intAttrs = (p_m_intAttrs + 16);
    }
    while ( this->m_intAttrs.m_fixedStorage.m_FixedValues != p_m_intAttrs );
  }
  m_FixedValues = this->m_textureAttrs.m_fixedStorage.m_FixedValues;
  this->m_intAttrs.m_pParent = 0;
  this->m_intAttrs.m_pOverflow.m_pHead = 0;
  p_m_textureAttrs = &this->m_textureAttrs;
  v7 = this->m_textureAttrs.m_fixedStorage.m_FixedValues;
  do
  {
    *v7->m_vec4Attrs.m_fixedStorage.m_nFixedKeys[0].m_i32 = 0;
    v7 = (v7 + 16);
    *(&v7[-1].m_pParent + 2) = -1;
  }
  while ( v7 != &this->m_textureAttrs.m_pParent );
  *this->m_textureAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32 = 0;
  v8 = 0;
  *&this->m_textureAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32[2] = 0;
  do
  {
    if ( p_m_textureAttrs->m_fixedStorage.m_nFixedKeys[0].m_i32[v8] != 0 )
      this->m_textureAttrs.m_fixedStorage.m_FixedValues[v8].texture.m_pBinding = 0;
    ++v8;
  }
  while ( v8 != 4 );
  if ( p_m_textureAttrs != m_FixedValues )
  {
    v9 = &this->m_textureAttrs;
    do
    {
      v9->m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
      v9 = (v9 + 16);
    }
    while ( m_FixedValues != v9 );
  }
  this->m_textureAttrs.m_pParent = 0;
  v10 = this->m_constantBufferAttrs.m_fixedStorage.m_FixedValues;
  this->m_textureAttrs.m_pOverflow.m_pHead = 0;
  v11 = this->m_constantBufferAttrs.m_fixedStorage.m_FixedValues;
  do
  {
    *v11->m_vec4Attrs.m_fixedStorage.m_nFixedKeys[0].m_i32 = 0;
    v11 = (v11 + 16);
    *(&v11[-1].m_pParent + 2) = 0;
  }
  while ( v11 != &this->m_constantBufferAttrs.m_pParent );
  *this->m_constantBufferAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32 = 0;
  *&this->m_constantBufferAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32[2] = 0;
  if ( &this->m_constantBufferAttrs != v10 )
  {
    p_m_constantBufferAttrs = &this->m_constantBufferAttrs;
    do
    {
      p_m_constantBufferAttrs->m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
      p_m_constantBufferAttrs = (p_m_constantBufferAttrs + 16);
    }
    while ( v10 != p_m_constantBufferAttrs );
  }
  this->m_constantBufferAttrs.m_pParent = 0;
  this->m_constantBufferAttrs.m_pOverflow.m_pHead = 0;
  *this->m_ptrAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32 = 0;
  *&this->m_ptrAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32[2] = 0;
  if ( &this->m_ptrAttrs != this->m_ptrAttrs.m_fixedStorage.m_FixedValues )
  {
    p_m_ptrAttrs = &this->m_ptrAttrs;
    do
    {
      p_m_ptrAttrs->m_vec4Attrs.m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
      p_m_ptrAttrs = (p_m_ptrAttrs + 16);
    }
    while ( this->m_ptrAttrs.m_fixedStorage.m_FixedValues != p_m_ptrAttrs );
  }
  v14 = 0;
  this->m_ptrAttrs.m_pParent = 0;
  v15 = this->m_stringAttrs.m_fixedStorage.m_FixedValues;
  p_m_stringAttrs = &this->m_stringAttrs;
  this->m_ptrAttrs.m_pOverflow.m_pHead = 0;
  v16 = this->m_stringAttrs.m_fixedStorage.m_FixedValues;
  this->m_stringAttrs.m_fixedStorage.m_FixedValues[0].m_pString = 0;
  this->m_stringAttrs.m_fixedStorage.m_FixedValues[1].m_pString = 0;
  this->m_stringAttrs.m_fixedStorage.m_FixedValues[2].m_pString = 0;
  this->m_stringAttrs.m_fixedStorage.m_FixedValues[3].m_pString = 0;
  *this->m_stringAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32 = 0;
  *&this->m_stringAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32[2] = 0;
  do
  {
    if ( p_m_stringAttrs->m_fixedStorage.m_nFixedKeys[0].m_i32[v14] != 0 )
      CUtlString::Clear(v16);
    ++v14;
    ++v16;
  }
  while ( v14 != 4 );
  v17 = p_m_stringAttrs;
  do
    *v17++ = Four_Zeros;
  while ( v15 != v17 );
  this->m_stringAttrs.m_pParent = 0;
  this->m_stringAttrs.m_pOverflow.m_pHead = 0;
  this->m_pParent = 0;
}


// CRenderAttributes::~CRenderAttributes  (line 546, @0x000000000210b360, libserver.so)  // inlines: Clear, ClearButLeaveParentPointerAlone, Init, Purge, ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>, ReleaseValueFromAttribute<CUtlString>, StoreAlignedIntSIMD<(ESIMDLevel)20u>, _mm_store_ps, operator=, ~CUtlAttributeList, ~CUtlAttributeListChunk, ~CUtlString, ~OverflowChunk_t
// calls: CUtlString::FreeMemoryBlock, operator delete, CUtlString::Clear
// callers: CLoopModeGame::CLoopModeGame, CAttributeObjectPool::~CAttributeObjectPool, GetNewAttributeObjectFromPool
void __fastcall CRenderAttributes::~CRenderAttributes(CRenderAttributes *const this)
{
  CUtlString *v2; // r15
  CUtlString *m_FixedValues; // r13
  __int64 v4; // r12
  CUtlAttributeList<CUtlString,4,CUtlString> *p_m_stringAttrs; // r15
  CUtlString *v6; // r14
  CUtlAttributeList<CUtlString,4,CUtlString> *v7; // rax
  const CUtlAttributeList<CUtlString,4,CUtlString>::ThisType_t **p_m_pParent; // r12
  CUtlAttributeList<void*,4,void*>::OverflowChunk_t *m_pHead; // rdi
  CUtlAttributeList<void*,4,void*>::OverflowChunk_t *v10; // r12
  CRenderAttributes *i; // rax
  CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t,4,CRenderAttributes::ConstantBufferAttr_t>::OverflowChunk_t *v12; // rdi
  CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t,4,CRenderAttributes::ConstantBufferAttr_t>::OverflowChunk_t *v13; // r12
  CRenderAttributes *j; // rax
  CUtlAttributeList<CRenderAttributes::TextureAttr_t,4,CRenderAttributes::TextureAttrForStorage_t>::OverflowChunk_t *v15; // rdi
  CUtlAttributeList<CRenderAttributes::TextureAttr_t,4,CRenderAttributes::TextureAttrForStorage_t>::OverflowChunk_t *v16; // r12
  CRenderAttributes *p_m_textureAttrs; // rax
  __int64 k; // rdx
  CUtlAttributeList<int,8,int>::OverflowChunk_t *v19; // rdi
  CUtlAttributeList<int,8,int>::OverflowChunk_t *v20; // r12
  CRenderAttributes *m; // rax
  CUtlAttributeList<VMatrix,4,VMatrix>::OverflowChunk_t *v22; // rdi
  CUtlAttributeList<VMatrix,4,VMatrix>::OverflowChunk_t *v23; // r12
  CRenderAttributes *n; // rax
  CUtlAttributeList<Vector4D,4,Vector4D>::OverflowChunk_t *v25; // rdi
  CUtlAttributeList<Vector4D,4,Vector4D>::OverflowChunk_t *v26; // r12
  CRenderAttributes *v27; // rax
  CUtlAttributeList<CUtlString,4,CUtlString>::OverflowChunk_t *m_pNext; // [rsp+0h] [rbp-40h]
  CUtlAttributeList<CUtlString,4,CUtlString>::OverflowChunk_t *pMem; // [rsp+8h] [rbp-38h]

  pMem = this->m_stringAttrs.m_pOverflow.m_pHead;
  if ( pMem != 0 )
  {
    while ( 1 )
    {
      v2 = &pMem[1];
      m_pNext = pMem->m_pNext;
      do
      {
        --v2;
        if ( v2->m_pString != 0 )
          CUtlString::FreeMemoryBlock(v2);
      }
      while ( pMem->m_storage.m_FixedValues != v2 );
      operator delete(pMem);
      this->m_stringAttrs.m_pOverflow.m_pHead = m_pNext;
      if ( m_pNext == 0 )
        break;
      pMem = m_pNext;
    }
  }
  m_FixedValues = this->m_stringAttrs.m_fixedStorage.m_FixedValues;
  v4 = 0;
  p_m_stringAttrs = &this->m_stringAttrs;
  v6 = this->m_stringAttrs.m_fixedStorage.m_FixedValues;
  do
  {
    if ( p_m_stringAttrs->m_fixedStorage.m_nFixedKeys[0].m_i32[v4] != 0 )
      CUtlString::Clear(v6);
    ++v4;
    ++v6;
  }
  while ( v4 != 4 );
  if ( p_m_stringAttrs != m_FixedValues )
  {
    v7 = &this->m_stringAttrs;
    do
    {
      v7->m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
      v7 = (v7 + 16);
    }
    while ( m_FixedValues != v7 );
  }
  this->m_stringAttrs.m_pParent = 0;
  p_m_pParent = &this->m_stringAttrs.m_pParent;
  while ( m_FixedValues != p_m_pParent )
  {
    if ( *--p_m_pParent != 0 )
      CUtlString::FreeMemoryBlock(p_m_pParent);
  }
  m_pHead = this->m_ptrAttrs.m_pOverflow.m_pHead;
  if ( m_pHead != 0 )
  {
    while ( 1 )
    {
      v10 = m_pHead->m_pNext;
      operator delete(m_pHead);
      this->m_ptrAttrs.m_pOverflow.m_pHead = v10;
      if ( v10 == 0 )
        break;
      m_pHead = v10;
    }
  }
  for ( i = &this->m_ptrAttrs; this->m_ptrAttrs.m_fixedStorage.m_FixedValues != i; i = (i + 16) )
    i->m_vec4Attrs.m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
  v12 = this->m_constantBufferAttrs.m_pOverflow.m_pHead;
  this->m_ptrAttrs.m_pParent = 0;
  if ( v12 != 0 )
  {
    while ( 1 )
    {
      v13 = v12->m_pNext;
      operator delete(v12);
      this->m_constantBufferAttrs.m_pOverflow.m_pHead = v13;
      if ( v13 == 0 )
        break;
      v12 = v13;
    }
  }
  for ( j = &this->m_constantBufferAttrs; this->m_constantBufferAttrs.m_fixedStorage.m_FixedValues != j; j = (j + 16) )
    j->m_vec4Attrs.m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
  v15 = this->m_textureAttrs.m_pOverflow.m_pHead;
  this->m_constantBufferAttrs.m_pParent = 0;
  if ( v15 != 0 )
  {
    while ( 1 )
    {
      v16 = v15->m_pNext;
      operator delete(v15);
      this->m_textureAttrs.m_pOverflow.m_pHead = v16;
      if ( v16 == 0 )
        break;
      v15 = v16;
    }
  }
  p_m_textureAttrs = &this->m_textureAttrs;
  for ( k = 0; k != 4; ++k )
  {
    if ( p_m_textureAttrs->m_vec4Attrs.m_fixedStorage.m_nFixedKeys[0].m_i32[k] != 0 )
      this->m_textureAttrs.m_fixedStorage.m_FixedValues[k].texture.m_pBinding = 0;
  }
  for ( ; this->m_textureAttrs.m_fixedStorage.m_FixedValues != p_m_textureAttrs; p_m_textureAttrs = (p_m_textureAttrs + 16) )
    p_m_textureAttrs->m_vec4Attrs.m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
  v19 = this->m_intAttrs.m_pOverflow.m_pHead;
  this->m_textureAttrs.m_pParent = 0;
  if ( v19 != 0 )
  {
    while ( 1 )
    {
      v20 = v19->m_pNext;
      operator delete(v19);
      this->m_intAttrs.m_pOverflow.m_pHead = v20;
      if ( v20 == 0 )
        break;
      v19 = v20;
    }
  }
  for ( m = &this->m_intAttrs; this->m_intAttrs.m_fixedStorage.m_FixedValues != m; m = (m + 16) )
    m->m_vec4Attrs.m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
  v22 = this->m_matrix4x4Attrs.m_pOverflow.m_pHead;
  this->m_intAttrs.m_pParent = 0;
  if ( v22 != 0 )
  {
    while ( 1 )
    {
      v23 = v22->m_pNext;
      operator delete(v22);
      this->m_matrix4x4Attrs.m_pOverflow.m_pHead = v23;
      if ( v23 == 0 )
        break;
      v22 = v23;
    }
  }
  for ( n = &this->m_matrix4x4Attrs; this->m_matrix4x4Attrs.m_fixedStorage.m_FixedValues != n; n = (n + 16) )
    n->m_vec4Attrs.m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
  this->m_matrix4x4Attrs.m_pParent = 0;
  v25 = this->m_vec4Attrs.m_pOverflow.m_pHead;
  if ( v25 != 0 )
  {
    while ( 1 )
    {
      v26 = v25->m_pNext;
      operator delete(v25);
      this->m_vec4Attrs.m_pOverflow.m_pHead = v26;
      if ( v26 == 0 )
        break;
      v25 = v26;
    }
  }
  v27 = this;
  do
  {
    v27->m_vec4Attrs.m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
    v27 = (v27 + 16);
  }
  while ( this->m_vec4Attrs.m_fixedStorage.m_FixedValues != v27 );
  this->m_vec4Attrs.m_pParent = 0;
}


