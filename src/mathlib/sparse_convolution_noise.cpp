
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_sparse_convolution_noise.cpp  (line 0, @0x0000000001a6ed70, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_sparse_convolution_noise_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CellNoise  (line 44, @0x00000000032668f0, libserver.so)  // inlines: Hash4D
// calls: sqrtf
// callers: SparseConvolutionNoise, TileableSparseConvolutionNoise
// globals: perm_a, perm_d, impulse_xcoords, impulse_ycoords, impulse_zcoords, perm_b, perm_c
float __fastcall CellNoise(
        int ix,
        char iy,
        char iz,
        float xfrac,
        float yfrac,
        float zfrac,
        float (*pNoiseShapeFunction)(float))
{
  float v8; // xmm8_4
  __int64 v9; // rbx
  __int64 v10; // xmm6_8
  int v11; // edx
  __int64 v12; // rax
  float v13; // xmm0_4
  double v15; // xmm7_8
  float v16; // xmm0_4
  float v17; // [rsp+Ch] [rbp-54h]
  float v18; // [rsp+10h] [rbp-50h]
  float v19; // [rsp+18h] [rbp-48h]
  int v20; // [rsp+1Ch] [rbp-44h]
  unsigned int v21; // [rsp+24h] [rbp-3Ch]
  float (*ret)(float); // [rsp+28h] [rbp-38h]

  v8 = 0.0;
  v9 = 0;
  v10 = 1065353216;
  v11 = perm_c[(LOBYTE(perm_b[(LOBYTE(perm_a[ix]) + iy)]) + iz)];
  do
  {
    v12 = perm_d[(v11 + v9)];
    v13 = fsqrt(
            (((impulse_xcoords[v12] - xfrac) * (impulse_xcoords[v12] - xfrac))
           + ((impulse_ycoords[v12] - yfrac) * (impulse_ycoords[v12] - yfrac)))
          + ((impulse_zcoords[v12] - zfrac) * (impulse_zcoords[v12] - zfrac)));
    if ( *&v10 > v13 )
    {
      v19 = xfrac;
      HIDWORD(v15) = HIDWORD(v10);
      *&v15 = *&v10 - v13;
      v17 = zfrac;
      v18 = yfrac;
      v20 = v11;
      v21 = v10;
      ret = pNoiseShapeFunction;
      v16 = pNoiseShapeFunction(v15);
      zfrac = v17;
      v8 = v8 + v16;
      yfrac = v18;
      xfrac = v19;
      v11 = v20;
      v10 = v21;
      pNoiseShapeFunction = ret;
    }
    ++v9;
  }
  while ( v9 != 5 );
  return v8;
}


// SparseConvolutionNoise  (line 64, @0x0000000003266c10, libserver.so)
// calls: SparseConvolutionNoise
// globals: QuinticInterpolatingPolynomial(float)
float __fastcall SparseConvolutionNoise(const Vector *const pnt)
{
  return SparseConvolutionNoise(pnt, QuinticInterpolatingPolynomial);
}


// SparseConvolutionNoiseNormalized  (line 70, @0x0000000003266e80, libserver.so)
// calls: SparseConvolutionNoise, V_powf
// globals: QuinticInterpolatingPolynomial(float)
float __fastcall SparseConvolutionNoiseNormalized(const Vector *const pnt)
{
  double v1; // xmm0_8

  *&v1 = SparseConvolutionNoise(pnt, QuinticInterpolatingPolynomial);
  return V_powf(v1, 0.68150002);
}


// FractalNoise  (line 79, @0x0000000003266c30, libserver.so)  // inlines: SparseConvolutionNoise, operator*=
// calls: SparseConvolutionNoise
// globals: QuinticInterpolatingPolynomial(float)
float __fastcall FractalNoise(const Vector *const pnt, int n_octaves)
{
  float v3; // xmm2_4
  float v4; // xmm3_4
  int v6; // ebx
  float v7; // xmm4_4
  float v8; // xmm1_4
  float z; // eax
  float v10; // xmm0_4
  double v11; // xmm4_8
  double v12; // xmm3_8
  float iscale; // [rsp+0h] [rbp-40h]
  float sumscale; // [rsp+4h] [rbp-3Ch]
  float ret; // [rsp+8h] [rbp-38h]
  float scale; // [rsp+Ch] [rbp-34h]
  Vector p1; // [rsp+10h] [rbp-30h] BYREF

  if ( n_octaves <= 0 )
  {
    v12 = 0.0;
    v11 = 0.0;
  }
  else
  {
    v3 = 1.0;
    v4 = 0.0;
    v6 = 0;
    v7 = 0.0;
    v8 = 1.0;
    do
    {
      iscale = v3;
      ++v6;
      sumscale = v4;
      ret = v7;
      *&p1.x = *&pnt->x;
      z = pnt->z;
      scale = v8;
      p1.x = p1.x * v8;
      p1.y = p1.y * v8;
      p1.z = v8 * z;
      v10 = SparseConvolutionNoise(&p1, QuinticInterpolatingPolynomial);
      v4 = sumscale + iscale;
      v3 = iscale * 0.5;
      v8 = scale + scale;
      v7 = ret + (v10 * iscale);
    }
    while ( v6 != n_octaves );
    v11 = v7;
    v12 = v4;
  }
  return 1.0 / v12 * v11;
}


// Turbulence  (line 97, @0x0000000003266d40, libserver.so)  // inlines: SparseConvolutionNoise, operator*=
// calls: SparseConvolutionNoise
// globals: QuinticInterpolatingPolynomial(float)
float __fastcall Turbulence(const Vector *const pnt, int n_octaves)
{
  float v3; // xmm2_4
  float v4; // xmm5_4
  int v6; // ebx
  float v7; // xmm3_4
  float v8; // xmm1_4
  float z; // eax
  float v10; // xmm0_4
  double v11; // xmm3_8
  double v12; // xmm5_8
  float iscale; // [rsp+0h] [rbp-40h]
  float sumscale; // [rsp+4h] [rbp-3Ch]
  float ret; // [rsp+8h] [rbp-38h]
  float scale; // [rsp+Ch] [rbp-34h]
  Vector p1; // [rsp+10h] [rbp-30h] BYREF

  if ( n_octaves <= 0 )
  {
    v12 = 0.0;
    v11 = 0.0;
  }
  else
  {
    v3 = 1.0;
    v4 = 0.0;
    v6 = 0;
    v7 = 0.0;
    v8 = 1.0;
    do
    {
      iscale = v3;
      ++v6;
      sumscale = v4;
      ret = v7;
      *&p1.x = *&pnt->x;
      z = pnt->z;
      scale = v8;
      p1.x = p1.x * v8;
      p1.y = p1.y * v8;
      p1.z = v8 * z;
      v10 = SparseConvolutionNoise(&p1, QuinticInterpolatingPolynomial);
      v4 = sumscale + iscale;
      v3 = iscale * 0.5;
      v8 = scale + scale;
      v7 = ret + iscale * fabs(v10 - 0.5 + v10 - 0.5);
    }
    while ( v6 != n_octaves );
    v11 = v7;
    v12 = v4;
  }
  return 1.0 / v12 * v11;
}


// SparseConvolutionNoise  (line 120, @0x0000000003266a70, libserver.so)  // inlines: LatticeCoord, RemapValClamped, clamp<float, float>
// calls: floorf, CellNoise
// callers: SparseConvolutionNoise, FractalNoise, Turbulence, SparseConvolutionNoiseNormalized
float __fastcall SparseConvolutionNoise(const Vector *const pnt, float (*pNoiseShapeFunction)(float))
{
  float v3; // xmm0_4
  float v4; // xmm4_4
  char v5; // r14
  int i; // ebx
  int j; // r15d
  float v8; // xmm0_4
  char v9; // dl
  float result; // xmm0_4
  float v11; // xmm1_4
  int v12; // [rsp+4h] [rbp-5Ch]
  float xfrac; // [rsp+8h] [rbp-58h]
  int ox; // [rsp+Ch] [rbp-54h]
  float yfrac; // [rsp+14h] [rbp-4Ch]
  float zfraca; // [rsp+20h] [rbp-40h]
  float zfrac; // [rsp+20h] [rbp-40h]
  float y; // [rsp+24h] [rbp-3Ch]
  float v20; // [rsp+28h] [rbp-38h]
  float sum_outa; // [rsp+2Ch] [rbp-34h]
  float sum_out; // [rsp+2Ch] [rbp-34h]

  yfrac = pnt->x;
  zfraca = floorf(pnt->x);
  y = pnt->y;
  v12 = zfraca;
  v20 = floorf(y);
  sum_outa = pnt->z;
  v3 = floorf(sum_outa);
  ox = -1;
  v4 = sum_outa;
  sum_out = 0.0;
  v5 = v3;
  xfrac = yfrac - zfraca;
  zfrac = v4 - v3;
  do
  {
    for ( i = -1; i != 2; ++i )
    {
      for ( j = -1; j != 2; ++j )
      {
        v8 = j;
        v9 = j + v5;
        sum_out = CellNoise(v12 + ox, i + v20, v9, xfrac - ox, (y - v20) - i, zfrac - v8, pNoiseShapeFunction) + sum_out;
      }
    }
    ++ox;
  }
  while ( ox != 2 );
  result = 0.0;
  v11 = (sum_out - 0.544487) / 8.6746893;
  if ( v11 >= 0.0 )
  {
    result = 1.0;
    if ( v11 <= 1.0 )
      return v11 + 0.0;
  }
  return result;
}


// TileableSparseConvolutionNoise  (line 150, @0x0000000003266ea0, libserver.so)  // inlines: LatticeCoord, RemapValClamped, clamp<float, float>
// calls: floorf, CellNoise
float __fastcall TileableSparseConvolutionNoise(const Vector *const pnt, float (*pNoiseShapeFunction)(float))
{
  float v3; // xmm0_4
  float v4; // xmm4_4
  char v5; // r14
  int i; // ebx
  int j; // r15d
  float v8; // xmm0_4
  char v9; // dl
  float result; // xmm0_4
  float v11; // xmm1_4
  int v12; // [rsp+4h] [rbp-5Ch]
  float xfrac; // [rsp+8h] [rbp-58h]
  int ox; // [rsp+Ch] [rbp-54h]
  float yfrac; // [rsp+14h] [rbp-4Ch]
  float zfraca; // [rsp+20h] [rbp-40h]
  float zfrac; // [rsp+20h] [rbp-40h]
  float y; // [rsp+24h] [rbp-3Ch]
  float v20; // [rsp+28h] [rbp-38h]
  float sum_outa; // [rsp+2Ch] [rbp-34h]
  float sum_out; // [rsp+2Ch] [rbp-34h]

  yfrac = pnt->x;
  zfraca = floorf(pnt->x);
  y = pnt->y;
  v12 = zfraca;
  v20 = floorf(y);
  sum_outa = pnt->z;
  v3 = floorf(sum_outa);
  ox = -1;
  v4 = sum_outa;
  sum_out = 0.0;
  v5 = v3;
  xfrac = yfrac - zfraca;
  zfrac = v4 - v3;
  do
  {
    for ( i = -1; i != 2; ++i )
    {
      for ( j = -1; j != 2; ++j )
      {
        v8 = j;
        v9 = j + v5;
        sum_out = CellNoise(v12 + ox, i + v20, v9, xfrac - ox, (y - v20) - i, zfrac - v8, pNoiseShapeFunction) + sum_out;
      }
    }
    ++ox;
  }
  while ( ox != 2 );
  result = 0.0;
  v11 = (sum_out - 0.544487) / 8.6746893;
  if ( v11 >= 0.0 )
  {
    result = 1.0;
    if ( v11 <= 1.0 )
      return v11 + 0.0;
  }
  return result;
}


// NoiseGradient  (line 186, @0x0000000003267040, libserver.so)
// callers: ImprovedPerlinNoise
float __fastcall NoiseGradient(char hash, float a2, float x, float y, float z)
{
  float v6; // xmm3_4

  if ( (hash & 0xFu) > 7 )
  {
    v6 = x;
  }
  else
  {
    if ( (hash & 0xFu) <= 3 )
      goto LABEL_3;
    v6 = a2;
  }
  if ( (hash & 0xD) == 0xC )
  {
    x = a2;
    a2 = v6;
  }
  else
  {
    a2 = v6;
    x = y;
  }
LABEL_3:
  if ( (hash & 1) != 0 )
    a2 = -a2;
  if ( (hash & 2) != 0 )
    x = -x;
  return a2 + x;
}


// NoiseHashIndex  (line 194, @0x00000000032670b0, libserver.so)
// globals: NoiseHashIndex(int)::s_permutation
int __fastcall NoiseHashIndex(int i)
{
  return NoiseHashIndex(int)::s_permutation[i];
}


// ImprovedPerlinNoise  (line 216, @0x00000000032670d0, libserver.so)  // inlines: Lerp<float>, NoiseHashIndex, QuinticInterpolatingPolynomial
// calls: floorf, NoiseGradient
// callers: CExpressionCalculator::Eval3ArgFunc
// globals: NoiseHashIndex(int)::s_permutation
float __fastcall ImprovedPerlinNoise(const Vector *const pnt)
{
  const Vector *v1; // rbx
  float v2; // xmm0_4
  float v3; // xmm4_4
  int v4; // eax
  unsigned __int8 v5; // si
  int v6; // eax
  int v7; // r15d
  int v8; // r12d
  int v9; // r13d
  float v10; // xmm3_4
  float v11; // xmm3_4
  __m128i v12; // xmm0
  float v13; // r13d
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v18; // [rsp+Ch] [rbp-64h]
  float v19; // [rsp+10h] [rbp-60h]
  float v20; // [rsp+14h] [rbp-5Ch]
  float g0; // [rsp+18h] [rbp-58h]
  float g1; // [rsp+1Ch] [rbp-54h]
  float g2; // [rsp+20h] [rbp-50h]
  float g3; // [rsp+24h] [rbp-4Ch]
  float v25; // [rsp+28h] [rbp-48h]
  float g4; // [rsp+2Ch] [rbp-44h]
  float g4a; // [rsp+2Ch] [rbp-44h]
  float g4b; // [rsp+2Ch] [rbp-44h]
  float g6; // [rsp+30h] [rbp-40h]
  float g6a; // [rsp+30h] [rbp-40h]
  float g6b; // [rsp+30h] [rbp-40h]
  float y; // [rsp+34h] [rbp-3Ch]
  float ya; // [rsp+34h] [rbp-3Ch]
  float yb; // [rsp+34h] [rbp-3Ch]
  float fy; // [rsp+38h] [rbp-38h]
  float fya; // [rsp+38h] [rbp-38h]
  float fyb; // [rsp+38h] [rbp-38h]
  float z; // [rsp+3Ch] [rbp-34h]
  float v39; // [rsp+3Ch] [rbp-34h]

  v1 = pnt;
  g4 = pnt->x;
  g6 = floorf(pnt->x);
  y = v1->y;
  fy = floorf(y);
  z = v1->z;
  v2 = floorf(z);
  v3 = y - fy;
  v4 = fy;
  ya = z - v2;
  fya = v3;
  v5 = v4 + NoiseHashIndex(int)::s_permutation[g6];
  v6 = NoiseHashIndex(int)::s_permutation[(g6 + 1)] + v4;
  v7 = v2 + NoiseHashIndex(int)::s_permutation[v5];
  v8 = v2 + NoiseHashIndex(int)::s_permutation[(v5 + 1)];
  v9 = v2 + NoiseHashIndex(int)::s_permutation[v6];
  LODWORD(v1) = NoiseHashIndex(int)::s_permutation[(v6 + 1)] + v2;
  v18 = (((g4 - g6) * (g4 - g6)) * (g4 - g6)) * (((((g4 - g6) * 6.0) - 15.0) * (g4 - g6)) + 10.0);
  v19 = ((v3 * v3) * v3) * ((((v3 * 6.0) - 15.0) * v3) + 10.0);
  v20 = (((z - v2) * (z - v2)) * (z - v2)) * ((((6.0 * (z - v2)) - 15.0) * (z - v2)) + 10.0);
  g0 = NoiseGradient(NoiseHashIndex(int)::s_permutation[v7], g4 - g6, v3, z - v2, g4 - g6);
  g6a = g4 - g6;
  v39 = g6a - 1.0;
  g1 = NoiseGradient(NoiseHashIndex(int)::s_permutation[v9], g6a - 1.0, fya, ya, g6a);
  g4a = fya;
  fyb = fya - 1.0;
  g2 = NoiseGradient(NoiseHashIndex(int)::s_permutation[v8], g6a, fyb, ya, g6a);
  g3 = NoiseGradient(NoiseHashIndex(int)::s_permutation[v1], g6a - 1.0, fyb, ya, v10);
  yb = ya - 1.0;
  v25 = g4a;
  g4b = NoiseGradient(NoiseHashIndex(int)::s_permutation[(v7 + 1)], g6a, g4a, yb, g6a);
  *v12.m128i_i32 = NoiseGradient(NoiseHashIndex(int)::s_permutation[(v9 + 1)], g6a - 1.0, v25, yb, v11);
  v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  g6b = NoiseGradient(NoiseHashIndex(int)::s_permutation[(v8 + 1)], g6a, fyb, yb, g6a);
  v15 = NoiseGradient(NoiseHashIndex(int)::s_permutation[(v1 + 1)], v39, fyb, yb, v14);
  v16 = (((((g3 - g2) * v18) + g2) - (((g1 - g0) * v18) + g0)) * v19) + (((g1 - g0) * v18) + g0);
  return ((((((((v15 - g6b) * v18) + g6b) - (((v13 - g4b) * v18) + g4b)) * v19) + (((v13 - g4b) * v18) + g4b)) - v16)
        * v20)
       + v16;
}


