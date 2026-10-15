
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CResourceSystemProfileScope::~CResourceSystemProfileScope  (line 439, @0x000000000326aca0, libserver.so)  // inlines: End, ThreadInterlockedExchangeAdd64, operator+=
// calls: Plat_RelativeTicks
// callers: CIntrospectedResourceDataHandler::InitNoFixup, CIntrospectedResourceDataHandler::FixupExternalReferences, CBaseIntrospectedTypeManager::AllocateResource
void __fastcall CResourceSystemProfileScope::~CResourceSystemProfileScope(CResourceSystemProfileScope *const this)
{
  __int64 v2; // rax
  CInterlockedUInt64 *m_pCycles; // rdx
  uint64 v4; // rax

  if ( this->m_bGathered )
  {
    v2 = Plat_RelativeTicks();
    m_pCycles = this->m_pCycles;
    v4 = v2 - this->m_Timer.m_Duration.m_Int64;
    this->m_Timer.m_Duration.m_Int64 = v4;
    _InterlockedAdd64(m_pCycles, v4);
  }
}


// CResourceProfileEventSpanScope::~CResourceProfileEventSpanScope  (line 532, @0x000000000326acd0, libserver.so)
// callers: CIntrospectedResourceDataHandler::InitNoFixup, CIntrospectedResourceDataHandler::FixupExternalReferences, CIntrospectedResourceDataHandler::CleanupAllocation, CBaseIntrospectedTypeManager::AllocateResource
void __fastcall CResourceProfileEventSpanScope::~CResourceProfileEventSpanScope(
        CResourceProfileEventSpanScope *const this)
{
  void (__fastcall ***v2)(_QWORD, ResourceHandle_t, _QWORD, __int64); // rax

  v2 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
  (**v2)(v2, this->m_hResource, this->m_nEvent, 2);
}


