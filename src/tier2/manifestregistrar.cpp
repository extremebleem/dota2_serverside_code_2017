
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_manifestregistrar.cpp  (line 0, @0x0000000001a6ab80, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_manifestregistrar_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CManifestRegistrar::CManifestRegistrar  (line 20, @0x000000000312d4d0, libserver.so)
// callers: __static_initialization_and_destruction_0, _GLOBAL__sub_I__unity_base_01.cpp, _GLOBAL__sub_I__unity_base_02.cpp, _GLOBAL__sub_I__unity_base_03.cpp, _GLOBAL__sub_I__unity_base_08.cpp, _GLOBAL__sub_I__unity_base_10.cpp, _GLOBAL__sub_I__unity_base_13.cpp, _GLOBAL__sub_I__unity_dota_02.cpp, _GLOBAL__sub_I__unity_dota_06.cpp, _GLOBAL__sub_I__unity_economy_02.cpp, _GLOBAL__sub_I__unity_nextbot_01.cpp
// globals: s_pFirst, s_nManifestCount
void __fastcall CManifestRegistrar::CManifestRegistrar(CManifestRegistrar *const this, ResourceManifestDesc_t *pDesc)
{
  CManifestRegistrar *v2; // rax

  v2 = s_pFirst;
  s_pFirst = this;
  ++s_nManifestCount;
  this->m_pDesc = pDesc;
  this->m_pNext = v2;
}


// CManifestRegistrar::RegisterAll  (line 32, @0x000000000312d500, libserver.so)
// callers: RegisterTier2Manifests
// globals: s_pFirst
void __cdecl CManifestRegistrar::RegisterAll()
{
  CManifestRegistrar *i; // rbx
  ResourceManifestDesc_t *m_pDesc; // rax

  for ( i = s_pFirst; i != 0; i = i->m_pNext )
  {
    while ( 1 )
    {
      m_pDesc = i->m_pDesc;
      if ( !m_pDesc->m_bRegistered && !m_pDesc->m_bDisallowRegistration )
        break;
      i = i->m_pNext;
      if ( i == 0 )
        return;
    }
    m_pDesc->m_bRegistered = 1;
    (*(*g_pResourceManifestRegistry + 16LL))(g_pResourceManifestRegistry, i->m_pDesc);
  }
}


// CManifestRegistrar::UnregisterManifest  (line 51, @0x000000000312d4a0, libserver.so)
// callers: CManifestRegistrar::UnregisterManifest, CManifestRegistrar::UnregisterManifests, CManifestRegistrar::UnregisterAll
void __fastcall CManifestRegistrar::UnregisterManifest(ResourceManifestDesc_t *pManifest)
{
  (*(*g_pResourceManifestRegistry + 24LL))(g_pResourceManifestRegistry, pManifest);
  pManifest->m_bRegistered = 0;
}


// CManifestRegistrar::UnregisterManifest  (line 51, @0x000000000312d570, libserver.so)
// calls: CManifestRegistrar::UnregisterManifest
void __fastcall CManifestRegistrar::UnregisterManifest(ResourceManifestDesc_t *pManifest)
{
  if ( pManifest->m_bRegistered )
    CManifestRegistrar::UnregisterManifest(pManifest);
}


// CManifestRegistrar::UnregisterManifests  (line 65, @0x000000000312d590, libserver.so)  // inlines: UnregisterManifest
// calls: CManifestRegistrar::UnregisterManifest
// callers: DisconnectTier2ManualManifests
void __fastcall CManifestRegistrar::UnregisterManifests(ResourceManifestDesc_t **pManifests, int nManifests)
{
  ResourceManifestDesc_t **v2; // r12
  ResourceManifestDesc_t **v3; // rbx

  if ( nManifests > 0 )
  {
    v2 = &pManifests[(nManifests - 1) + 1];
    v3 = pManifests;
    do
    {
      while ( !(*v3)->m_bRegistered )
      {
        if ( ++v3 == v2 )
          return;
      }
      CManifestRegistrar::UnregisterManifest(*v3++);
    }
    while ( v3 != v2 );
  }
}


// CManifestRegistrar::UnregisterAll  (line 77, @0x000000000312d5e0, libserver.so)  // inlines: UnregisterManifest
// calls: CManifestRegistrar::UnregisterManifest
// callers: DisconnectTier2Libraries
// globals: s_pFirst
void __cdecl CManifestRegistrar::UnregisterAll()
{
  CManifestRegistrar *i; // rbx
  ResourceManifestDesc_t *m_pDesc; // rdi

  for ( i = s_pFirst; i != 0; i = i->m_pNext )
  {
    while ( 1 )
    {
      m_pDesc = i->m_pDesc;
      if ( m_pDesc->m_bRegistered )
        break;
      i = i->m_pNext;
      if ( i == 0 )
        return;
    }
    CManifestRegistrar::UnregisterManifest(m_pDesc);
  }
}


// GetResourceManifestCount  (line 91, @0x000000000312d630, libserver.so)
// globals: s_nManifestCount
int __cdecl GetResourceManifestCount()
{
  return s_nManifestCount;
}


// GetResourceManifests  (line 96, @0x000000000312d640, libserver.so)
// globals: s_pFirst
int __fastcall GetResourceManifests(int nFirstIndex, ResourceManifestDesc_t **ppDesc, size_t nDescCount)
{
  CManifestRegistrar *v3; // rcx
  __int64 v4; // rax
  int i; // r8d

  v3 = s_pFirst;
  if ( s_pFirst == 0 )
  {
    LODWORD(v4) = 0;
    return v4;
  }
  v4 = 0;
  for ( i = 0; nFirstIndex > i; ++i )
  {
LABEL_6:
    v3 = v3->m_pNext;
    if ( v3 == 0 )
      return v4;
  }
  ppDesc[v4] = v3->m_pDesc;
  if ( v4 + 1 < nDescCount )
  {
    ++v4;
    goto LABEL_6;
  }
  LODWORD(v4) = v4 + 1;
  return v4;
}


