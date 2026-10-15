
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CJointIndexData::CompareHash  (line 34, @0x000000000316fe00, libserver.so)
int __fastcall CJointIndexData::CompareHash(const CJointIndexData *pLeft, const CJointIndexData *pRight)
{
  uint32 m_nHashCode; // eax

  m_nHashCode = pRight->m_hash.m_nHashCode;
  if ( pLeft->m_hash.m_nHashCode == m_nHashCode )
    return 0;
  else
    return pLeft->m_hash.m_nHashCode < m_nHashCode ? -1 : 1;
}


// CJointIndexData::CompareString  (line 40, @0x000000000316fe20, libserver.so)  // inlines: IsEmpty, String
// calls: V_stricmp_fast, CUtlString::Get
int __fastcall CJointIndexData::CompareString(const CJointIndexData *pLeft, const CJointIndexData *pRight)
{
  const char *v3; // rbx
  char *m_pString; // rdx
  char *v5; // rdx
  const char *v7; // rax

  v3 = "";
  m_pString = pLeft->m_String.m_pString;
  if ( m_pString != 0 && *m_pString != 0 )
    v3 = CUtlString::Get(&pLeft->m_String);
  v5 = pRight->m_String.m_pString;
  if ( v5 == 0 || *v5 == 0 )
    return V_stricmp_fast(v3, "");
  v7 = CUtlString::Get(&pRight->m_String);
  return V_stricmp_fast(v3, v7);
}


