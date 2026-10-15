
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CInterpolatedVarHistory<EnableRenderingInfo_t>::EnsureCapacity  (line 163, @0x0000000001eb6070, libserver.so)  // inlines: V_memcpy, memcpy, memset
// calls: malloc, memset, free
// callers: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::LatchChangedTick
void __fastcall CInterpolatedVarHistory<EnableRenderingInfo_t>::EnsureCapacity(
        CInterpolatedVarHistory<EnableRenderingInfo_t> *const this,
        int capSize)
{
  int v2; // r12d
  int v4; // ecx
  int v5; // ecx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v6; // r13
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *m_pElements; // rdi
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v8; // rdx
  int v9; // eax
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v10; // r8
  int v11; // esi
  unsigned __int16 v12; // r11
  int v13; // r9d
  int v14; // r10d
  int v15; // ecx
  __int64 v16; // r11
  int v17; // eax
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v18; // rcx
  __int64 v19; // r8
  int32 m_nChangeTick; // eax

  v2 = 32;
  v4 = (*(this + 11) >> 1) & 0x3F;
  v5 = (v4 + capSize - 1) / v4 * v4;
  if ( v5 <= 32 )
    v2 = v5;
  v6 = malloc(v2 * (4LL * ((*(this + 4) >> 6) & 0x3F) + 8));
  memset(v6, 0, 8LL * v2);
  m_pElements = this->m_pElements;
  v8 = &v6[v2];
  if ( this->m_pElements != 0 )
  {
    v9 = (*(this + 2) >> 13) & 0x3F;
    if ( v9 != 0 )
    {
      v10 = v6;
      v11 = 0;
      v12 = *(this + 5);
      v13 = (v12 >> 3) & 0x3F;
      v14 = *(this + 8) & 0x3F;
      do
      {
        v15 = v14 + v11;
        if ( v14 + v11 >= v13 )
          v15 = v14 + v11 - v13;
        ++v11;
        ++v10;
        v10[-1] = m_pElements[v15];
      }
      while ( v11 < v9 );
    }
    else
    {
      v12 = *(this + 5);
    }
    *(this + 8) &= 0xC0u;
    v16 = (v12 >> 3) & 0x3F;
    v17 = ((*(this + 4) >> 6) & 0x3F) * v16;
    v18 = &m_pElements[v16];
    if ( v17 != 0 )
    {
      v19 = (&v8->m_nIndex + 2 * (v17 - 1));
      do
      {
        m_nChangeTick = v18->m_nChangeTick;
        v8 = (v8 + 4);
        v18 = (v18 + 4);
        *&v8[-1].m_nIndex = m_nChangeTick;
      }
      while ( v8 != v19 );
    }
  }
  *(this + 5) = (8 * (v2 & 0x3F)) | *(this + 5) & 0xFE07;
  free(m_pElements);
  this->m_pElements = v6;
}


// CInterpolatedVarHistory<EnableRenderingInfo_t>::AddToHead  (line 256, @0x0000000001eca6f0, libserver.so)  // inlines: AllocateData, EnsureCapacity, FirstBitInWord, FirstBitInWordThatIsKnownToBeNonZero, V_memcpy, memcpy, memset
// calls: malloc, memset, free
int __fastcall CInterpolatedVarHistory<EnableRenderingInfo_t>::AddToHead(
        CInterpolatedVarHistory<EnableRenderingInfo_t> *const this)
{
  int v2; // ecx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v3; // r12
  unsigned int v4; // edx
  int v5; // edx
  int v6; // eax
  unsigned __int8 v7; // dl
  __int16 v8; // si
  char v9; // cl
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v10; // rdi
  uint32 m_nFreeDataElements; // edx
  int v12; // ecx
  int v14; // r13d
  int v15; // ecx
  int v16; // ecx
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *m_pElements; // rdi
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v18; // rdx
  int v19; // eax
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v20; // r8
  int v21; // esi
  unsigned __int16 v22; // r11
  int v23; // r9d
  int v24; // r10d
  int v25; // ecx
  __int64 v26; // r11
  int v27; // eax
  CInterpolatedVarHistory<EnableRenderingInfo_t>::InterpolatedVarEntry_t *v28; // rcx
  __int64 v29; // r8
  int32 m_nChangeTick; // eax
  unsigned int v31; // ecx

  v2 = (*(this + 2) >> 13) & 0x3F;
  if ( v2 + 1 > ((*(this + 5) >> 3) & 0x3F) && ((*(this + 5) >> 3) & 0x3Fu) <= 0x1F )
  {
    v14 = 32;
    v15 = (*(this + 11) >> 1) & 0x3F;
    v16 = (((*(this + 2) >> 13) & 0x3F) + v15) / v15 * v15;
    if ( v16 <= 32 )
      v14 = v16;
    v3 = malloc(v14 * (4LL * ((*(this + 4) >> 6) & 0x3F) + 8));
    memset(v3, 0, 8LL * v14);
    m_pElements = this->m_pElements;
    v18 = &v3[v14];
    if ( this->m_pElements != 0 )
    {
      v19 = (*(this + 2) >> 13) & 0x3F;
      if ( v19 != 0 )
      {
        v20 = v3;
        v21 = 0;
        v22 = *(this + 5);
        v23 = (v22 >> 3) & 0x3F;
        v24 = *(this + 8) & 0x3F;
        do
        {
          v25 = v24 + v21;
          if ( v24 + v21 >= v23 )
            v25 = v24 + v21 - v23;
          ++v21;
          ++v20;
          v20[-1] = m_pElements[v25];
        }
        while ( v21 < v19 );
      }
      else
      {
        v22 = *(this + 5);
      }
      *(this + 8) &= 0xC0u;
      v26 = (v22 >> 3) & 0x3F;
      v27 = ((*(this + 4) >> 6) & 0x3F) * v26;
      v28 = &m_pElements[v26];
      if ( v27 != 0 )
      {
        v29 = (&v18->m_nIndex + 2 * (v27 - 1));
        do
        {
          m_nChangeTick = v28->m_nChangeTick;
          v18 = (v18 + 4);
          v28 = (v28 + 4);
          *&v18[-1].m_nIndex = m_nChangeTick;
        }
        while ( v18 != v29 );
      }
    }
    *(this + 5) = (8 * (v14 & 0x3F)) | *(this + 5) & 0xFE07;
    free(m_pElements);
    v31 = *(this + 2);
    this->m_pElements = v3;
    v2 = (v31 >> 13) & 0x3F;
  }
  else
  {
    v3 = this->m_pElements;
  }
  v4 = (((v2 + 1) & 0x3F) << 13) | *(this + 2) & 0xFFF81FFF;
  *(this + 2) = v4;
  v5 = v4 & 0x3F;
  if ( v5 == 0 )
    LOWORD(v5) = (*(this + 5) >> 3) & 0x3F;
  v6 = -1;
  v7 = (v5 + 63) & 0x3F;
  v8 = -1;
  v9 = v7 | *(this + 8) & 0xC0;
  v10 = &v3[v7];
  m_nFreeDataElements = this->m_nFreeDataElements;
  *(this + 8) = v9;
  if ( m_nFreeDataElements != 0 )
  {
    _BitScanForward(&v12, m_nFreeDataElements);
    LOBYTE(v6) = -2;
    v8 = v12;
    v6 = __ROL4__(v6, v12);
  }
  this->m_nFreeDataElements = m_nFreeDataElements & v6;
  v10->m_nIndex = v8;
  return 0;
}


