
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_sseconst.cpp  (line 0, @0x0000000001a6a460, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_sseconst_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// FourVectors::RotateManyBy  (line 246, @0x00000000030ec920, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, LoadUnalignedSIMD<(ESIMDLevel)20u>, MaddSIMD<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, SplatXSIMD<(ESIMDLevel)20u>, SplatYSIMD<(ESIMDLevel)20u>, SplatZSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_loadu_ps, _mm_mul_ps, _mm_shuffle_ps
void __fastcall FourVectors::RotateManyBy(
        FourVectors *pVectors,
        unsigned int numVectors,
        const matrix3x4_t *const rotationMatrix)
{
  __m128 v3; // xmm11
  __m128 v4; // xmm8
  __m128 v5; // xmm5
  FourVectors *v6; // rax
  __m128 v7; // xmm13
  __m128 v8; // xmm12
  __m128 v9; // xmm10
  __m128 v10; // xmm9
  __m128 v11; // xmm7
  __m128 v12; // xmm6
  __m128 v13; // xmm11
  __m128 v14; // xmm8
  __m128 i; // xmm5
  __m128 v16; // xmm4
  __m128 v17; // xmm3
  __m128 v18; // xmm0

  if ( numVectors != 0 )
  {
    v3 = *&rotationMatrix->m_flMatVal[0][0];
    v4 = *&rotationMatrix->m_flMatVal[1][0];
    v5 = *&rotationMatrix->m_flMatVal[2][0];
    v6 = &pVectors[numVectors];
    v7 = _mm_shuffle_ps(v3, v3, 0);
    v8 = _mm_shuffle_ps(*&rotationMatrix->m_flMatVal[0][0], *&rotationMatrix->m_flMatVal[0][0], 85);
    v9 = _mm_shuffle_ps(v4, v4, 0);
    v10 = _mm_shuffle_ps(v4, v4, 85);
    v11 = _mm_shuffle_ps(v5, v5, 0);
    v12 = _mm_shuffle_ps(v5, v5, 85);
    v13 = _mm_shuffle_ps(v3, v3, 170);
    v14 = _mm_shuffle_ps(v4, v4, 170);
    for ( i = _mm_shuffle_ps(v5, v5, 170);
          v6 > pVectors;
          *&pVectors[-1].gap0[32] = _mm_add_ps(
                                      _mm_mul_ps(v18, i),
                                      _mm_add_ps(_mm_mul_ps(v17, v11), _mm_mul_ps(v16, v12))) )
    {
      v16 = *&pVectors->gap0[16];
      ++pVectors;
      v17 = *pVectors[-1].gap0;
      v18 = *&pVectors[-1].gap0[32];
      *pVectors[-1].gap0 = _mm_add_ps(_mm_mul_ps(v18, v13), _mm_add_ps(_mm_mul_ps(v17, v7), _mm_mul_ps(v16, v8)));
      *&pVectors[-1].gap0[16] = _mm_add_ps(_mm_mul_ps(v18, v14), _mm_add_ps(_mm_mul_ps(v17, v9), _mm_mul_ps(v16, v10)));
    }
  }
}


// FourVectors::CalcClosestPointOnLineSIMD  (line 379, @0x00000000030eca90, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, ApplyBinaryUpdateFunction<AddSIMD<(ESIMDLevel)20u> >, MulSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_mul_ps, operator*=, operator+=, operator=
// calls: FourVectors::CalcClosestPointToLineTSIMD
void __fastcall FourVectors::CalcClosestPointOnLineSIMD(
        const FourVectors *const P,
        const FourVectors *const vLineA,
        const FourVectors *const vLineB,
        FourVectors *const vClosest,
        fltx4_0 *outT)
{
  fltx4_0 v8; // xmm0
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  __m128 v11; // xmm3
  FourVectors vDir; // [rsp+0h] [rbp-50h] BYREF

  v8 = FourVectors::CalcClosestPointToLineTSIMD(P, vLineA, vLineB, &vDir);
  if ( outT != 0 )
    *outT = v8;
  v9 = _mm_mul_ps(*&vDir.gap0[16], v8);
  v10 = _mm_mul_ps(*&vDir.gap0[32], v8);
  v11 = _mm_mul_ps(*vDir.gap0, v8);
  *&vClosest->gap0[16] = v9;
  *&vClosest->gap0[32] = v10;
  *vClosest->gap0 = v11;
  *vClosest->gap0 = _mm_add_ps(v11, *vLineA->gap0);
  *&vClosest->gap0[16] = _mm_add_ps(v9, *&vLineA->gap0[16]);
  *&vClosest->gap0[32] = _mm_add_ps(v10, *&vLineA->gap0[32]);
}


// FourVectors::CalcClosestPointToLineTSIMD  (line 389, @0x00000000030eca00, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, ApplyBinaryUpdateFunction<SubSIMD<(ESIMDLevel)20u> >, CmpLtSIMD<(ESIMDLevel)20u>, DivSIMD<(ESIMDLevel)20u>, MaddSIMD<(ESIMDLevel)20u>, MaskedAssign<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, SubSIMD<(ESIMDLevel)20u>, XorSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_cmplt_ps, _mm_div_ps, _mm_mul_ps, _mm_sub_ps, _mm_xor_ps, operator*, operator-=, operator=
// callers: FourVectors::CalcClosestPointOnLineSIMD
fltx4_0 __fastcall FourVectors::CalcClosestPointToLineTSIMD(
        const FourVectors *const P,
        const FourVectors *const vLineA,
        const FourVectors *const vLineB,
        FourVectors *const vDir)
{
  __m128 v4; // xmm3
  __m128 v5; // xmm2
  __m128 v6; // xmm1
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  __m128 v10; // xmm4

  v4 = *vLineB->gap0;
  *vDir->gap0 = *vLineB->gap0;
  v5 = *&vLineB->gap0[16];
  *&vDir->gap0[16] = v5;
  v6 = *&vLineB->gap0[32];
  *&vDir->gap0[32] = v6;
  v7 = _mm_sub_ps(v4, *vLineA->gap0);
  *vDir->gap0 = v7;
  v8 = _mm_sub_ps(v5, *&vLineA->gap0[16]);
  *&vDir->gap0[16] = v8;
  v9 = _mm_sub_ps(v6, *&vLineA->gap0[32]);
  *&vDir->gap0[32] = v9;
  v10 = _mm_add_ps(_mm_mul_ps(v9, v9), _mm_add_ps(_mm_mul_ps(v8, v8), _mm_mul_ps(v7, v7)));
  return _mm_andnot_ps(
           _mm_cmplt_ps(v10, xmmword_3517580),
           _mm_div_ps(
             _mm_sub_ps(
               _mm_add_ps(
                 _mm_mul_ps(v9, *&P->gap0[32]),
                 _mm_add_ps(_mm_mul_ps(v8, *&P->gap0[16]), _mm_mul_ps(v7, *P->gap0))),
               _mm_add_ps(
                 _mm_mul_ps(*&vLineA->gap0[32], v9),
                 _mm_add_ps(_mm_mul_ps(*&vLineA->gap0[16], v8), _mm_mul_ps(*vLineA->gap0, v7)))),
             v10));
}


// FourVectors::RotateManyBy  (line 407, @0x00000000030ecb00, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, LoadUnalignedSIMD<(ESIMDLevel)20u>, MaddSIMD<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, SplatXSIMD<(ESIMDLevel)20u>, SplatYSIMD<(ESIMDLevel)20u>, SplatZSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_loadu_ps, _mm_mul_ps, _mm_shuffle_ps
void __fastcall FourVectors::RotateManyBy(
        FourVectors *pVectors,
        unsigned int numVectors,
        const matrix3x4_t *const rotationMatrix,
        FourVectors *pOut)
{
  __m128 v4; // xmm11
  __m128 v5; // xmm8
  __m128 v6; // xmm5
  FourVectors *v7; // rax
  __m128 v8; // xmm13
  __m128 v9; // xmm12
  __m128 v10; // xmm10
  __m128 v11; // xmm9
  __m128 v12; // xmm7
  __m128 v13; // xmm6
  __m128 v14; // xmm11
  __m128 v15; // xmm8
  __m128 i; // xmm5
  __m128 v17; // xmm4
  __m128 v18; // xmm3
  __m128 v19; // xmm0

  if ( numVectors != 0 )
  {
    v4 = *&rotationMatrix->m_flMatVal[0][0];
    v5 = *&rotationMatrix->m_flMatVal[1][0];
    v6 = *&rotationMatrix->m_flMatVal[2][0];
    v7 = &pVectors[numVectors];
    v8 = _mm_shuffle_ps(v4, v4, 0);
    v9 = _mm_shuffle_ps(*&rotationMatrix->m_flMatVal[0][0], *&rotationMatrix->m_flMatVal[0][0], 85);
    v10 = _mm_shuffle_ps(v5, v5, 0);
    v11 = _mm_shuffle_ps(v5, v5, 85);
    v12 = _mm_shuffle_ps(v6, v6, 0);
    v13 = _mm_shuffle_ps(v6, v6, 85);
    v14 = _mm_shuffle_ps(v4, v4, 170);
    v15 = _mm_shuffle_ps(v5, v5, 170);
    for ( i = _mm_shuffle_ps(v6, v6, 170);
          v7 > pVectors;
          *&pOut[-1].gap0[32] = _mm_add_ps(_mm_mul_ps(v19, i), _mm_add_ps(_mm_mul_ps(v18, v12), _mm_mul_ps(v17, v13))) )
    {
      v17 = *&pVectors->gap0[16];
      ++pVectors;
      ++pOut;
      v18 = *pVectors[-1].gap0;
      v19 = *&pVectors[-1].gap0[32];
      *pOut[-1].gap0 = _mm_add_ps(_mm_mul_ps(v19, v14), _mm_add_ps(_mm_mul_ps(v18, v8), _mm_mul_ps(v17, v9)));
      *&pOut[-1].gap0[16] = _mm_add_ps(_mm_mul_ps(v19, v15), _mm_add_ps(_mm_mul_ps(v18, v10), _mm_mul_ps(v17, v11)));
    }
  }
}


