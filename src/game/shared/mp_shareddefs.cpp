
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetMPConceptIndexFromString  (line 84, @0x000000000229b100, libserver.so)
// calls: V_stricmp_fast
// callers: CMultiplayRules::LoadVoiceCommandScript
// globals: g_pszMPConcepts
int __fastcall GetMPConceptIndexFromString(const char *pszConcept)
{
  __int64 i; // rbx

  for ( i = 0; i != 63; ++i )
  {
    if ( V_stricmp_fast(pszConcept, g_pszMPConcepts[i]) == 0 )
      return i;
  }
  return -1;
}


