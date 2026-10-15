
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// HashItem  (line 139, @0x0000000001ec13b0, libserver.so)
uint __fastcall HashItem(const CUtlStringToken *const token)
{
  return token->m_nHashCode;
}


// CUtlStringTokenHashMethod::Compare  (line 153, @0x0000000001ec13c0, libserver.so)
bool __fastcall CUtlStringTokenHashMethod::Compare(
        const CUtlStringToken *const nLHS,
        const CUtlStringToken *const nRHS)
{
  return nLHS->m_nHashCode == nRHS->m_nHashCode;
}


