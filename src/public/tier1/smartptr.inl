
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSmartPtr<CEmoteMap::IFunction, CRefCountAccessor>::operator=  (line 302, @0x000000000256b0f0, libserver.so)  // inlines: AddRef, AddRef<CEmoteMap::IFunction>, DoAddRef, DoRelease, Increment, Release, Release<CEmoteMap::IFunction>, ThreadInterlockedIncrement
CEmoteMap::IFunction *__fastcall CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>::operator=(
        CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor> *const this,
        CEmoteMap::IFunction *pObj)
{
  CEmoteMap::IFunction *m_pObj; // rbx
  char v5; // al
  CEmoteMap::IFunction *pObja; // [rsp+8h] [rbp-18h]

  m_pObj = this->m_pObj;
  if ( this->m_pObj != pObj )
  {
    if ( pObj != 0 )
    {
      _InterlockedAdd(&pObj->m_iRefs, 1u);
      m_pObj = this->m_pObj;
    }
    if ( m_pObj != 0 && _InterlockedSub(&m_pObj->m_iRefs, 1u) == 0 )
    {
      pObja = pObj;
      v5 = (*(m_pObj->_vptr_CRefCountServiceBase + 2))(m_pObj);
      pObj = pObja;
      if ( v5 != 0 )
      {
        (*(m_pObj->_vptr_CRefCountServiceBase + 1))(m_pObj);
        pObj = pObja;
      }
    }
    this->m_pObj = pObj;
  }
  return pObj;
}


