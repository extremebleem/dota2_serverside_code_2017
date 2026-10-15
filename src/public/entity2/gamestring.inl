
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameString::~CGameString  (line 34, @0x00000000021b2e30, libserver.so)
void __fastcall CGameString::~CGameString(CGameString *const this)
{
  if ( *(this + 19) < 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_pszString);
}


