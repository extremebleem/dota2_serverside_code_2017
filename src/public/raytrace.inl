
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CacheOptimizedTriangle_t::ExtractVerticesFromIntersectionFormat  (line 151, @0x00000000031e1f00, libserver.so)  // inlines: DotProduct, Init, IsFinite, IsValid, ProjectOntoPlaneFromAxis, operator=, operator[]
// callers: CGlViewBuffer::WriteKDTree, CGlViewBuffer::WriteKDTree_HalfLambert, CGlViewBuffer::WriteKDTreeMaterialColors, CGeoViewBuffer::WriteKDTree
bool __fastcall CacheOptimizedTriangle_t::ExtractVerticesFromIntersectionFormat(
        const CacheOptimizedTriangle_t *const this,
        Vector *const v0,
        Vector *const v1,
        Vector *const v2)
{
  float v5; // xmm4_4
  float v6; // xmm7_4
  float v7; // xmm1_4
  __int64 m_nCoordSelect0; // r10
  float v9; // xmm4_4
  float m_flNz; // xmm5_4
  float y; // xmm6_4
  float v12; // xmm1_4
  float m_flNx; // xmm0_4
  int m_nCoordSelect1; // r11d
  float v15; // xmm2_4
  float v16; // xmm1_4
  __int64 v17; // rdx
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float *v22; // rax
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm5_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  bool result; // al
  __m128i x_low; // xmm0
  __m128i y_low; // xmm1
  __m128i z_low; // xmm2
  Vector vNormal; // [rsp+0h] [rbp-20h]
  Vector v34; // [rsp+10h] [rbp-10h] BYREF

  v5 = this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[4];
  v6 = this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[1];
  v7 = this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[0] * v5;
  m_nCoordSelect0 = this->m_Data.m_IntersectData.m_nCoordSelect0;
  v9 = v5 * this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[2];
  m_flNz = this->m_Data.m_IntersectData.m_flNz;
  v12 = v7 - (this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[3] * v6);
  m_flNx = this->m_Data.m_IntersectData.m_flNx;
  m_nCoordSelect1 = this->m_Data.m_IntersectData.m_nCoordSelect1;
  vNormal.y = this->m_Data.m_IntersectData.m_flNy;
  y = vNormal.y;
  vNormal.x = m_flNx;
  v15 = 1.0 / v12;
  v16 = this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[5];
  vNormal.z = m_flNz;
  v17 = 4LL * (m_nCoordSelect1 + 1 - 3 * ((1431655766LL * (m_nCoordSelect1 + 1)) >> 32));
  *(&v0->x + m_nCoordSelect0) = (((v16 - 1.0) * v6) - v9) * v15;
  *(&v0->x + m_nCoordSelect1) = ((this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[3]
                                * this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[2])
                               - ((this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[5] - 1.0)
                                * this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[0]))
                              * v15;
  *(&v0->x + v17) = 0.0;
  *(&v1->x + m_nCoordSelect0) = ((this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[1]
                                * this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[5])
                               - (this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[4]
                                * this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[2]))
                              * v15;
  *(&v1->x + m_nCoordSelect1) = ((this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[3]
                                * this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[2])
                               - (this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[0]
                                * this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[5]))
                              * v15;
  *(&v1->x + v17) = 0.0;
  *(&v2->x + m_nCoordSelect0) = ((this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[1]
                                * this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[5])
                               - ((this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[2] - 1.0)
                                * this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[4]))
                              * v15;
  *(&v2->x + m_nCoordSelect1) = (((this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[2] - 1.0)
                                * this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[3])
                               - (this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[0]
                                * this->m_Data.m_IntersectData.m_ProjectedEdgeEquations[5]))
                              * v15;
  *(&v2->x + v17) = 0.0;
  v18 = v0->x * m_flNx;
  v19 = v0->y * y;
  *&v34.x = *&v0->x;
  v20 = v18 + v19;
  v21 = v0->z * m_flNz;
  v34.z = v0->z;
  v22 = (&v34.x + v17);
  v23 = v20 + v21;
  v24 = *(&vNormal.x + v17);
  *v22 = *v22 - ((v23 - this->m_Data.m_IntersectData.m_flD) / v24);
  *v0 = v34;
  v25 = (((v1->x * m_flNx) + (v1->y * y)) + (v1->z * m_flNz)) - this->m_Data.m_IntersectData.m_flD;
  v34 = *v1;
  *v22 = *(&v34.x + v17) - (v25 / v24);
  *v1 = v34;
  v26 = m_flNz * v2->z;
  v27 = (m_flNx * v2->x) + (y * v2->y);
  *&v34.x = *&v2->x;
  v28 = (v27 + v26) - this->m_Data.m_IntersectData.m_flD;
  v34.z = v2->z;
  *v22 = *v22 - (v28 / v24);
  result = 0;
  x_low = LODWORD(v34.x);
  y_low = LODWORD(v34.y);
  z_low = LODWORD(v34.z);
  *v2 = v34;
  if ( (LODWORD(v0->x) & 0x7F800000) != 0x7F800000
    && (LODWORD(v0->y) & 0x7F800000) != 0x7F800000
    && (LODWORD(v0->z) & 0x7F800000) != 0x7F800000
    && (LODWORD(v1->x) & 0x7F800000) != 0x7F800000
    && (LODWORD(v1->y) & 0x7F800000) != 0x7F800000
    && (LODWORD(v1->z) & 0x7F800000) != 0x7F800000
    && (_mm_cvtsi128_si32(x_low) & 0x7F800000) != 0x7F800000
    && (_mm_cvtsi128_si32(y_low) & 0x7F800000) != 0x7F800000 )
  {
    return (_mm_cvtsi128_si32(z_low) & 0x7F800000) != 2139095040;
  }
  return result;
}


