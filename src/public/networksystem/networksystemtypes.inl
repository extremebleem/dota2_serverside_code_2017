
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ChangeAccessorFieldPathIndexInfo_t::IgnoreCache_t::IgnoreCache_t  (line 318, @0x000000000217d4f0, libserver.so)  // inlines: ChangeAccessorFieldPathIndex_t, V_memset, memset
// callers: CBaseEntity::AddedToEntityDatabase
void __fastcall ChangeAccessorFieldPathIndexInfo_t::IgnoreCache_t::IgnoreCache_t(
        ChangeAccessorFieldPathIndexInfo_t::IgnoreCache_t *const this)
{
  ChangeAccessorFieldPathIndex_t *m_FieldPaths; // rax

  m_FieldPaths = this->m_FieldPaths;
  do
  {
    ++m_FieldPaths;
    m_FieldPaths[-1].m_Value = -1;
  }
  while ( m_FieldPaths != &this->m_nCount );
  this->m_nCount = 0;
  this->m_nFirstElement = 0;
  *this->m_Offsets = -1;
  *&this->m_Offsets[4] = -1;
  *&this->m_Offsets[8] = -1;
  *&this->m_Offsets[12] = -1;
  *&this->m_FieldPaths[0].m_Value = -1;
  *&this->m_FieldPaths[4].m_Value = -1;
  *&this->m_FieldPaths[8].m_Value = -1;
  *&this->m_FieldPaths[12].m_Value = -1;
}


