
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// rr2::CriterionStatic::CriterionStatic  (line 148, @0x000000000204e7c0, libserver.so)  // inlines: CUtlSymbol, CriterionBase, NextFloat, PrevFloat, Symbol, rr_intfloat
// callers: CRuleScriptBridge::AddCriterionFromScript
void __fastcall rr2::CriterionStatic::CriterionStatic(
        rr2::CriterionStatic *const this,
        const rr2::Symbol *const keyname,
        __m128i bottom,
        __m128i top,
        bool bNot,
        bool bMinUseGeq,
        bool bMaxUseLeq,
        rr2::MatchScore_t weight)
{
  UtlSymId_t m_Id; // ax
  int v9; // r9d
  int v10; // xmm1_4
  int v11; // eax
  int v12; // xmm0_4

  m_Id = keyname->m_Sym.m_Id;
  v9 = _mm_cvtsi128_si32(top);
  this->m_score = weight;
  v10 = bottom.m128i_i32[0];
  this->m_name.m_Sym.m_Id = m_Id;
  *(this + 8) = (2 * bNot) | *(this + 8) & 0xFC;
  if ( !bMinUseGeq )
  {
    v11 = _mm_cvtsi128_si32(bottom);
    if ( v11 < 0 )
    {
      v10 = bottom.m128i_i32[0];
      if ( v11 <= 0xFF7FFFFF )
      {
        v10 = 1;
        if ( v11 != 0x80000000 )
          v10 = v11 - 1;
      }
    }
    else if ( v11 <= 0x7F7FFFFF )
    {
      v10 = v11 + 1;
    }
  }
  this->m_symbol = v10;
  v12 = v9;
  if ( bMaxUseLeq )
    goto LABEL_9;
  if ( v9 < 0 )
  {
    if ( v9 <= 0xFF7FFFFF )
      v12 = v9 + 1;
    goto LABEL_9;
  }
  if ( v9 <= 0x7F7FFFFF )
  {
    v12 = -2147483647;
    if ( v9 == 0 )
    {
LABEL_9:
      LODWORD(this->m_floats.fb) = v12;
      return;
    }
    --v9;
  }
  LODWORD(this->m_floats.fb) = v9;
}


