// Reconstructed from DWARF by pahole; not original source.

// src/mathlib/randsse.cpp:21
class SIMDRandStreamContext {
private:

	float m_RandY __attribute__ ((__vector_size__ (16)))[55];  // +0x0
	fltx4 * m_pRand_J;  // +0x370
	fltx4 * m_pRand_K;  // +0x378
	void Seed(uint32);
	fltx4 RandSIMD();

	// sizeof = 896
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_randsse.cpp  (line 0, @0x0000000001a6a430, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_randsse_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// SeedRandSIMD  (line 70, @0x00000000030ec760, libserver.so)
// callers: MathLib_Init
// globals: s_nRandSIMDSeed
void __fastcall SeedRandSIMD(uint32 seed)
{
  s_nRandSIMDSeed = seed;
}


// RandSIMD  (line 75, @0x00000000030ec770, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, AndSIMD<(ESIMDLevel)20u>, CmpGeSIMD<(ESIMDLevel)20u>, RandSIMD, SubSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_and_ps, _mm_cmpge_ps, _mm_sub_ps
// globals: s_pSIMDRandContexts
fltx4_0 __fastcall RandSIMD(int nContextIndex)
{
  SIMDRandStreamContext *v1; // rax
  __m128 *m_pRand_K; // rdx
  __m128 v3; // xmm0
  fltx4_0 result; // xmm0
  unsigned __int64 v5; // rdx
  fltx4_0 *v6; // rsi
  fltx4_0 *v7; // rdx

  v1 = s_pSIMDRandContexts[nContextIndex];
  m_pRand_K = v1->m_pRand_K;
  v3 = _mm_add_ps(*m_pRand_K, *v1->m_pRand_J);
  result = _mm_sub_ps(v3, _mm_and_ps(_mm_cmple_ps(Four_Ones, v3), Four_Ones));
  *m_pRand_K = result;
  v5 = &v1->m_pRand_J[-1];
  if ( v5 < v1 )
    v5 = &v1->gap0[864];
  v6 = v1->m_pRand_K;
  v1->m_pRand_J = v5;
  v7 = v6 - 1;
  if ( v1 > &v6[-1] )
    v7 = &v1->gap0[864];
  v1->m_pRand_K = v7;
  return result;
}


// GetSIMDRandContext  (line 80, @0x00000000030ec7f0, libserver.so)  // inlines: Seed, ThreadInterlockedAssignIf
// calls: ThreadSleep, operator new
// globals: s_nRandContextsInUse, s_pSIMDRandContexts, s_nRandSIMDSeed
int __cdecl GetSIMDRandContext()
{
  __int64 v0; // rsi
  int v1; // r12d
  __int64 v2; // rbx
  SIMDRandStreamContext *v4; // rax
  __m128d v5; // xmm0
  uint32 v6; // ecx
  int v7; // r8d
  SIMDRandStreamContext *v8; // rdi
  unsigned int v9; // ecx
  __int64 i; // rdx
  int v11; // esi

  v1 = 0;
LABEL_2:
  v2 = 0;
  while ( s_nRandContextsInUse[v2] != 0 || _InterlockedCompareExchange(&s_nRandContextsInUse[v2], 1, 0) != 0 )
  {
    v2 = ++v1;
    if ( v1 > 7 )
    {
      v1 = 0;
      ThreadSleep(0, v0, s_nRandContextsInUse);
      goto LABEL_2;
    }
  }
  if ( s_pSIMDRandContexts[v2] != 0 )
    return v1;
  v4 = operator new(0x380u);
  v6 = s_nRandSIMDSeed;
  v7 = 55;
  s_pSIMDRandContexts[v2] = v4;
  v8 = v4;
  v4->m_pRand_J = &v4->gap0[368];
  v4->m_pRand_K = &v4->gap0[864];
  v9 = v1 + v6;
  do
  {
    for ( i = 0; i != 16; i += 4 )
    {
      v11 = HIWORD(v9);
      v9 = -1153374675 * (v9 + 1);
      v5.m128d_f64[0] = v11 * 0.0000152587890625;
      *&v8->gap0[i] = _mm_movedup_pd(v5).m128d_f64[0];
    }
    v8 = (v8 + 16);
    --v7;
  }
  while ( v7 != 0 );
  return v1;
}


// ReleaseSIMDRandContext  (line 105, @0x00000000030ec900, libserver.so)
// globals: s_nRandContextsInUse
void __fastcall ReleaseSIMDRandContext(int nContext)
{
  s_nRandContextsInUse[nContext] = 0;
}


