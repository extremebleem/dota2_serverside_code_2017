
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CrossProduct  (line 1357, @0x000000000227d3b0, libserver.so)
// callers: CGameRules::RadiusDamage
void __fastcall CrossProduct(const Vector *const a, const Vector *const b, Vector *const result)
{
  result->x = (a->y * b->z) - (a->z * b->y);
  result->y = (a->z * b->x) - (a->x * b->z);
  result->z = (a->x * b->y) - (a->y * b->x);
}


// FloatsAreEqual  (line 1450, @0x000000000210a720, libserver.so)
// calls: frexpf
// callers: QuaternionsAreEqual, CCompositeParentSpaceState::operator==
char __fastcall FloatsAreEqual(float a1, float f1, float f2, float flTolerance)
{
  __m128i v4; // xmm0
  float v5; // ebx
  float v6; // xmm0_4
  char result; // al
  __int64 v8; // rax
  float v9; // xmm1_4
  __int64 v10; // rax
  float v11; // xmm1_4
  __m128i v12; // xmm4
  int nExp1; // [rsp+18h] [rbp-18h] BYREF
  int nExp2[5]; // [rsp+1Ch] [rbp-14h] BYREF

  *v4.m128i_i32 = frexpf(a1, &nExp1);
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  v6 = frexpf(f1, nExp2);
  if ( nExp1 > nExp2[0] )
  {
    result = 1;
    if ( nExp1 < -17 )
      return result;
    v8 = 1LL << (nExp1 - LOBYTE(nExp2[0]));
    if ( v8 < 0 )
      v9 = ((1 << (nExp1 - LOBYTE(nExp2[0]))) & 1 | ((1LL << (nExp1 - LOBYTE(nExp2[0]))) >> 1))
         + ((1 << (nExp1 - LOBYTE(nExp2[0]))) & 1 | ((1LL << (nExp1 - LOBYTE(nExp2[0]))) >> 1));
    else
      v9 = v8;
    v6 = v6 / v9;
    return f2 >= fabs(v5 - v6);
  }
  if ( nExp1 >= nExp2[0] )
  {
    if ( nExp1 != nExp2[0] )
      return f2 >= fabs(v5 - v6);
    result = 1;
    if ( nExp1 >= -17 )
      return f2 >= fabs(v5 - v6);
  }
  else
  {
    result = 1;
    if ( nExp2[0] >= -17 )
    {
      v10 = 1LL << (LOBYTE(nExp2[0]) - nExp1);
      if ( v10 < 0 )
        v11 = (v10 & 1 | ((1LL << (LOBYTE(nExp2[0]) - nExp1)) >> 1))
            + (v10 & 1 | ((1LL << (LOBYTE(nExp2[0]) - nExp1)) >> 1));
      else
        v11 = v10;
      v12 = _mm_cvtsi32_si128(LODWORD(v5));
      *v12.m128i_i32 = *v12.m128i_i32 / v11;
      v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
      return f2 >= fabs(v5 - v6);
    }
  }
  return result;
}


