
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavArea::SetPlace  (line 267, @0x00000000031e7c40, libserver.so)
void __fastcall CNavArea::SetPlace(CNavArea *const this, Place place)
{
  ;
}


// CNavArea::GetPlace  (line 268, @0x00000000031e7c50, libserver.so)
Place __fastcall CNavArea::GetPlace(const CNavArea *const this)
{
  return 0;
}


// CNavArea::OnRoundRestartPreEntity  (line 386, @0x000000000220e300, libserver.so)
void __fastcall CNavArea::OnRoundRestartPreEntity(CNavArea *const this)
{
  ;
}


// CNavArea::OnEnter  (line 387, @0x000000000220e310, libserver.so)
void __fastcall CNavArea::OnEnter(CNavArea *const this, const IHandleEntity *pWho, const CNavArea *pAreaJustLeft)
{
  ;
}


// CNavArea::OnExit  (line 388, @0x000000000220e320, libserver.so)
void __fastcall CNavArea::OnExit(CNavArea *const this, const IHandleEntity *pWho, const CNavArea *pAreaJustEntered)
{
  ;
}


// CNavArea::OnAreaIndexChangeNotify  (line 428, @0x000000000220e330, libserver.so)
void __fastcall CNavArea::OnAreaIndexChangeNotify(CNavArea *const this, int nOldIndex, int nNewIndex)
{
  ;
}


// CNavArea::OnEditCreateNotify  (line 429, @0x000000000220e340, libserver.so)
void __fastcall CNavArea::OnEditCreateNotify(CNavArea *const this, CNavArea *const rNewArea)
{
  ;
}


// CNavArea::OnEditDestroyNotify  (line 430, @0x000000000220e350, libserver.so)
void __fastcall CNavArea::OnEditDestroyNotify(CNavArea *const this, const CNavArea *pDeadArea)
{
  ;
}


// CNavArea::OnEditDestroyNotify  (line 431, @0x000000000220e360, libserver.so)
void __fastcall CNavArea::OnEditDestroyNotify(CNavArea *const this, const CNavLadder *pDeadLadder)
{
  ;
}


// CNavArea::CustomAnalysis  (line 464, @0x000000000220e370, libserver.so)
void __fastcall CNavArea::CustomAnalysis(CNavArea *const this, bool bIsIncremental)
{
  ;
}


// CNavConnectOutIterator::Next  (line 586, @0x00000000031e7ca0, libserver.so)  // inlines: Count
// callers: CNavArea::MergeAdjacentConnections
void __fastcall CNavConnectOutIterator::Next(CNavConnectOutIterator *const this)
{
  const CNavArea *m_rArea; // rsi
  int m_nEdge; // eax
  int i; // r8d
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rcx
  int v5; // edx

  m_rArea = this->m_rArea;
  m_nEdge = this->m_nEdge;
  if ( m_nEdge != this->m_rArea->m_nVerts )
  {
    for ( i = this->m_nCurArea; ; i = -1 )
    {
      m_pData = m_rArea->m_connect[m_nEdge].m_pData;
      v5 = -1;
      if ( m_pData != 0 )
        v5 = m_pData->m_Size - 1;
      if ( i < v5 )
        break;
      ++m_nEdge;
      this->m_nCurArea = -1;
      this->m_nEdge = m_nEdge;
      if ( m_nEdge == m_rArea->m_nVerts )
        return;
    }
    this->m_nCurArea = i + 1;
  }
}


// CNavArea::GetSavedAttributes  (line 821, @0x000000000220e380, libserver.so)
CNavAttribute __fastcall CNavArea::GetSavedAttributes(const CNavArea *const this)
{
  return 61443LL;
}


// CNavArea::OnServerActivate  (line 975, @0x00000000031e7c60, libserver.so)
void __fastcall CNavArea::OnServerActivate(CNavArea *const this)
{
  ;
}


// CNavArea::OnRoundRestart  (line 981, @0x00000000031e7c70, libserver.so)
void __fastcall CNavArea::OnRoundRestart(CNavArea *const this)
{
  ;
}


// CNavArea::OnDestroyNotify  (line 994, @0x0000000002211000, libserver.so)
// calls: CNavArea::Disconnect
void __fastcall CNavArea::OnDestroyNotify(CNavArea *const this, CNavLadder *pDeadLadder)
{
  CNavArea::Disconnect(this, pDeadLadder);
}


