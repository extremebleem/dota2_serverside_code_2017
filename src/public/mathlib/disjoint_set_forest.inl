
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDisjointSetForest::Union  (line 87, @0x00000000031d25e0, libserver.so)  // inlines: Find, operator[]
// callers: BuildIslandMap, CMesh::BuildIslandMap
void __fastcall CDisjointSetForest::Union(CDisjointSetForest *const this, int nNodeA, int nNodeB)
{
  CDisjointSetForest::Node_t *m_pMemory; // rax
  int i; // r8d
  int nParent; // ecx
  CDisjointSetForest::Node_t *v6; // r8
  int v7; // r9d
  int j; // r8d
  int v9; // esi
  CDisjointSetForest::Node_t *v10; // r8
  int v11; // r9d
  CDisjointSetForest::Node_t *v12; // r8
  CDisjointSetForest::Node_t *v13; // rax

  m_pMemory = this->m_Nodes.m_Memory.m_pMemory;
  for ( i = nNodeA; ; i = m_pMemory[i].nParent )
  {
    nParent = m_pMemory[i].nParent;
    if ( i == nParent )
      break;
  }
  v6 = &m_pMemory[nNodeA];
  v7 = v6->nParent;
  if ( nNodeA != v7 )
  {
    while ( 1 )
    {
      v6->nParent = nParent;
      m_pMemory = this->m_Nodes.m_Memory.m_pMemory;
      v6 = &m_pMemory[v7];
      if ( v6->nParent == v7 )
        break;
      v7 = v6->nParent;
    }
  }
  for ( j = nNodeB; ; j = m_pMemory[j].nParent )
  {
    v9 = m_pMemory[j].nParent;
    if ( j == v9 )
      break;
  }
  v10 = &m_pMemory[nNodeB];
  v11 = v10->nParent;
  if ( nNodeB != v11 )
  {
    while ( 1 )
    {
      v10->nParent = v9;
      m_pMemory = this->m_Nodes.m_Memory.m_pMemory;
      v10 = &m_pMemory[v11];
      if ( v10->nParent == v11 )
        break;
      v11 = v10->nParent;
    }
  }
  v12 = &m_pMemory[nParent];
  v13 = &m_pMemory[v9];
  if ( v12->nRank > v13->nRank )
  {
    v13->nParent = nParent;
  }
  else if ( v12->nRank < v13->nRank )
  {
    v12->nParent = v9;
  }
  else if ( nParent != v9 )
  {
    v13->nParent = nParent;
    ++this->m_Nodes.m_Memory.m_pMemory[nParent].nRank;
  }
}


