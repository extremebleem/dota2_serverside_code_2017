
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlBlockMemory<float const*, int>::ChangeSize  (line 255, @0x00000000031d32b0, libserver.so)  // inlines: LeafCodeInfo_t, NumElementsInBlock
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CUtlVectorBase<float const*, CUtlBlockMemory<float const*, int> >::SetCount
// strings: "../public/tier1/utlblockmemory.h", "ChangeSize", "CUtlBlockMemory overflow!\n"
void __fastcall CUtlBlockMemory<float const*,int>::ChangeSize(
        CUtlBlockMemory<float const*,int> *const this,
        int nBlocks)
{
  __int64 v2; // rax
  int m_nBlocks; // r13d
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r14
  const float **v7; // rsi
  const float ***v8; // rax
  const float ***m_pMemory; // r14
  __int64 v10; // rbx
  const float ***v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // [rsp+8h] [rbp-58h]
  LeafCodeInfo_t v19; // [rsp+10h] [rbp-50h] BYREF

  v2 = nBlocks;
  m_nBlocks = this->m_nBlocks;
  this->m_nBlocks = nBlocks;
  if ( m_nBlocks > nBlocks )
  {
    v5 = 8LL * nBlocks;
    v6 = 8 * (nBlocks + (m_nBlocks - 1 - nBlocks) + 1);
    do
    {
      v7 = this->m_pMemory[v5 / 8];
      v5 += 8LL;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v7);
    }
    while ( v5 != v6 );
    v2 = this->m_nBlocks;
  }
  if ( this->m_pMemory != 0 )
    v8 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_pMemory, 8 * v2);
  else
    v8 = (**g_pMemAlloc)(g_pMemAlloc, 8 * v2);
  this->m_pMemory = v8;
  m_pMemory = v8;
  if ( v8 == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v19.m_szFile = "../public/tier1/utlblockmemory.h";
      v19.m_szFunction = "ChangeSize";
      v19.m_nLine = 286;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v19, "CUtlBlockMemory overflow!\n");
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v14, v15, v12, v13, v16, v17) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
    JUMPOUT(0x31D3438);
  }
  if ( m_nBlocks < this->m_nBlocks )
  {
    v10 = m_nBlocks;
    v18 = 8LL * ((*(this + 3) & 0x7FFFFFF) + 1);
    while ( 1 )
    {
      v11 = &m_pMemory[v10];
      ++m_nBlocks;
      ++v10;
      *v11 = (**g_pMemAlloc)(g_pMemAlloc, v18);
      if ( this->m_nBlocks <= m_nBlocks )
        break;
      m_pMemory = this->m_pMemory;
    }
  }
}


// CUtlBlockMemory<float const*, int>::Purge  (line 353, @0x00000000031d2ec0, libserver.so)
// callers: WeldVertices
void __fastcall CUtlBlockMemory<float const*,int>::Purge(CUtlBlockMemory<float const*,int> *const this)
{
  const float ***m_pMemory; // rsi
  __int64 v3; // r12
  int v4; // ebx
  const float **v5; // rsi
  _QWORD *v6; // rdi

  m_pMemory = this->m_pMemory;
  if ( this->m_pMemory != 0 )
  {
    if ( this->m_nBlocks > 0 )
    {
      v3 = 0;
      v4 = 0;
      do
      {
        ++v4;
        v5 = m_pMemory[v3++];
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
        m_pMemory = this->m_pMemory;
      }
      while ( this->m_nBlocks > v4 );
    }
    v6 = g_pMemAlloc;
    this->m_nBlocks = 0;
    (*(*v6 + 16LL))(v6, m_pMemory);
    this->m_pMemory = 0;
  }
}


