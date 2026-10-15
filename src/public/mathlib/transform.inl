
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTransform::operator!=  (line 362, @0x000000000210aea0, libserver.so)  // inlines: operator!=, operator==
// callers: TransformHistory_t::operator==
bool __fastcall CTransform::operator!=(const CTransform *const this, const CTransform *const t)
{
  return this->m_vPosition.x != t->m_vPosition.x
      || this->m_vPosition.y != t->m_vPosition.y
      || this->m_vPosition.z != t->m_vPosition.z
      || t->m_orientation.x != this->m_orientation.x
      || t->m_orientation.y != this->m_orientation.y
      || t->m_orientation.z != this->m_orientation.z
      || t->m_orientation.w != this->m_orientation.w;
}


