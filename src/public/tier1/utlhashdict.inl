
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlHashDict<const CMorphData*, false, false>::~CUtlHashDict  (line 117, @0x0000000003169700, libserver.so)  // inlines: Destruct<CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, false>::Entry_t, int> > >, Element, Purge, RemoveAll, operator[], ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CUtlHashDict<const CMorphData*, false, false>::Entry_t, int>::Purge, CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, false>::Entry_t, int> >, int>::Purge
// callers: CMorphSet::Initialize
void __fastcall CUtlHashDict<CMorphData const*,false,false>::~CUtlHashDict(
        CUtlHashDict<const CMorphData*,false,false> *const this)
{
  int m_Size; // r13d
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  CUtlVector<CUtlHashDict<const CMorphData*,false,false>::Entry_t,CUtlMemory<CUtlHashDict<const CMorphData*,false,false>::Entry_t,int> > *v5; // rdi
  bool v6; // zf
  unsigned __int64 v7; // rbx
  __int64 v8; // r13
  CUtlVector<CUtlHashDict<const CMorphData*,false,false>::Entry_t,CUtlMemory<CUtlHashDict<const CMorphData*,false,false>::Entry_t,int> > *v9; // rdi
  __int64 i; // r14
  char *v11; // rbx

  m_Size = this->m_Elements.m_Buckets.m_Size;
  if ( this->m_Elements.m_Buckets.m_Size <= 0 )
  {
    this->m_nCount = 0;
  }
  else
  {
    v3 = 0;
    v4 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      while ( 1 )
      {
        v5 = &this->m_Elements.m_Buckets.m_Memory.m_pMemory[v3 / 0x18];
        v6 = (v5->m_Memory.m_nGrowSize & 0xC0000000) == 0;
        v5->m_Size = 0;
        if ( v6 )
          break;
        v3 += 24LL;
        if ( v3 == v4 )
          goto LABEL_6;
      }
      v3 += 24LL;
      CUtlMemory<CUtlHashDict<CMorphData const*,false,false>::Entry_t,int>::Purge(&v5->m_Memory);
    }
    while ( v3 != v4 );
LABEL_6:
    this->m_nCount = 0;
    m_Size = this->m_Elements.m_Buckets.m_Size;
    if ( this->m_Elements.m_Buckets.m_Size > 0 )
    {
      v7 = 0;
      v8 = 8 * (3LL * (m_Size - 1) + 3);
      do
      {
        while ( 1 )
        {
          v9 = &this->m_Elements.m_Buckets.m_Memory.m_pMemory[v7 / 0x18];
          v6 = (v9->m_Memory.m_nGrowSize & 0xC0000000) == 0;
          v9->m_Size = 0;
          if ( v6 )
            break;
          v7 += 24LL;
          if ( v7 == v8 )
            goto LABEL_11;
        }
        v7 += 24LL;
        CUtlMemory<CUtlHashDict<CMorphData const*,false,false>::Entry_t,int>::Purge(&v9->m_Memory);
      }
      while ( v7 != v8 );
LABEL_11:
      m_Size = this->m_Elements.m_Buckets.m_Size;
    }
  }
  for ( i = 24LL * m_Size - 24; --m_Size >= 0; i -= 24 )
  {
    v11 = this->m_Elements.m_Buckets.m_Memory.m_pMemory + i;
    v6 = (*(v11 + 5) & 0xC0000000) == 0;
    *v11 = 0;
    if ( v6 )
    {
      CUtlMemory<CUtlHashDict<CMorphData const*,false,false>::Entry_t,int>::Purge((v11 + 8));
      if ( (*(v11 + 5) & 0xC0000000) == 0 )
        CUtlMemory<CUtlHashDict<CMorphData const*,false,false>::Entry_t,int>::Purge((v11 + 8));
    }
  }
  v6 = (this->m_Elements.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Elements.m_Buckets.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CUtlVector<CUtlHashDict<CMorphData const*,false,false>::Entry_t,CUtlMemory<CUtlHashDict<CMorphData const*,false,false>::Entry_t,int>>,int>::Purge(&this->m_Elements.m_Buckets.m_Memory);
    if ( (this->m_Elements.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CUtlHashDict<CMorphData const*,false,false>::Entry_t,CUtlMemory<CUtlHashDict<CMorphData const*,false,false>::Entry_t,int>>,int>::Purge(&this->m_Elements.m_Buckets.m_Memory);
  }
}


