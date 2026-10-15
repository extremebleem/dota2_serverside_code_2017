
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPushAwayEnumerator::EnumElement  (line 39, @0x00000000022b4fb0, libserver.so)
// calls: IsPushAwayEntity
IterationRetval_t __fastcall CPushAwayEnumerator::EnumElement(CPushAwayEnumerator *const this, CBaseEntity *pEnt)
{
  __int64 m_nAlreadyHit; // rax

  if ( IsPushAwayEntity(pEnt) )
  {
    m_nAlreadyHit = this->m_nAlreadyHit;
    if ( m_nAlreadyHit < this->m_nMaxHits )
    {
      this->m_AlreadyHit[m_nAlreadyHit] = pEnt;
      ++this->m_nAlreadyHit;
    }
  }
  return IterationRetval_t::ITERATION_CONTINUE;
}


