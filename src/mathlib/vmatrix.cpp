
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_vmatrix.cpp  (line 0, @0x0000000001a6a500, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_vmatrix_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// SetupMatrixIdentity  (line 30, @0x00000000030edc30, libserver.so)  // inlines: Init, VMatrix
VMatrix *__cdecl SetupMatrixIdentity(VMatrix *__return_ptr retstr)
{
  *&retstr->m[0][0] = 0x3F800000u;
  retstr->m[1][0] = 0.0;
  *&retstr->m[1][1] = 1065353216;
  retstr->m[1][3] = 0.0;
  *&retstr->m[2][0] = 0;
  *&retstr->m[2][2] = 1065353216;
  *&retstr->m[3][0] = 0;
  retstr->m[3][2] = 0.0;
  retstr->m[3][3] = 1.0;
  return retstr;
}


// SetupMatrixTranslation  (line 39, @0x00000000030edca0, libserver.so)  // inlines: Init, VMatrix
VMatrix *__fastcall SetupMatrixTranslation(VMatrix *__return_ptr retstr, const Vector *const vTranslation)
{
  vec_t z; // xmm2_4
  vec_t y; // xmm3_4
  vec_t x; // xmm4_4

  z = vTranslation->z;
  y = vTranslation->y;
  retstr->m[0][0] = 1.0;
  x = vTranslation->x;
  *&retstr->m[0][1] = 0;
  retstr->m[0][3] = x;
  retstr->m[1][0] = 0.0;
  *&retstr->m[1][1] = 1065353216;
  retstr->m[1][3] = y;
  *&retstr->m[2][0] = 0;
  retstr->m[2][2] = 1.0;
  retstr->m[2][3] = z;
  *&retstr->m[3][0] = 0;
  retstr->m[3][2] = 0.0;
  retstr->m[3][3] = 1.0;
  return retstr;
}


// SetupMatrixScale  (line 49, @0x00000000030edd20, libserver.so)  // inlines: Init, VMatrix
VMatrix *__fastcall SetupMatrixScale(VMatrix *__return_ptr retstr, const Vector *const vScale)
{
  vec_t x; // xmm0_4
  vec_t z; // xmm1_4
  vec_t y; // xmm2_4

  x = vScale->x;
  z = vScale->z;
  retstr->m[3][3] = 1.0;
  y = vScale->y;
  retstr->m[0][0] = x;
  retstr->m[2][2] = z;
  *&retstr->m[0][1] = 0;
  retstr->m[0][3] = 0.0;
  retstr->m[1][0] = 0.0;
  *&retstr->m[1][1] = LODWORD(y);
  retstr->m[1][3] = 0.0;
  *&retstr->m[2][0] = 0;
  retstr->m[2][3] = 0.0;
  *&retstr->m[3][0] = 0;
  retstr->m[3][2] = 0.0;
  return retstr;
}


// SetupMatrixReflection  (line 59, @0x00000000030ee990, libserver.so)  // inlines: GetPointOnPlane, Identity, Init, MatrixSetIdentity, SetTranslation, VectorMultiply, operator*, operator-, operator=
// calls: VMatrix::MatrixMul
VMatrix *__fastcall SetupMatrixReflection(VMatrix *__return_ptr retstr, const VPlane *const thePlane)
{
  float y; // xmm3_4
  float z; // xmm2_4
  float x; // xmm4_4
  float m_Dist; // xmm5_4
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  VMatrix mReflect; // [rsp+0h] [rbp-110h] BYREF
  VMatrix mBack; // [rsp+40h] [rbp-D0h] BYREF
  VMatrix mForward; // [rsp+80h] [rbp-90h] BYREF
  VMatrix out; // [rsp+C0h] [rbp-50h] BYREF

  y = thePlane->m_Normal.y;
  z = thePlane->m_Normal.z;
  x = thePlane->m_Normal.x;
  *&mBack.m[0][0] = 1065353216;
  mReflect.m[0][0] = ((-2.0 * x) * x) + 1.0;
  mReflect.m[0][1] = (-2.0 * x) * y;
  mReflect.m[0][2] = (-2.0 * x) * z;
  mReflect.m[0][3] = 0.0;
  mReflect.m[1][3] = 0.0;
  mReflect.m[2][3] = 0.0;
  mReflect.m[1][0] = (y * -2.0) * x;
  *&mReflect.m[3][0] = 0;
  *&mReflect.m[3][2] = 0x3F80000000000000LL;
  mReflect.m[1][2] = (y * -2.0) * z;
  mBack.m[0][2] = 0.0;
  *&mBack.m[1][0] = 0x3F80000000000000LL;
  mBack.m[1][2] = 0.0;
  mReflect.m[1][1] = ((y * -2.0) * y) + 1.0;
  mReflect.m[2][0] = (z * -2.0) * x;
  *&mBack.m[2][0] = 0;
  mReflect.m[2][1] = (z * -2.0) * y;
  mReflect.m[2][2] = ((z * -2.0) * z) + 1.0;
  m_Dist = thePlane->m_Dist;
  v7 = x * m_Dist;
  mBack.m[2][2] = 1.0;
  v8 = y * m_Dist;
  *&mBack.m[3][0] = 0;
  v9 = z * m_Dist;
  *&mBack.m[3][2] = 0x3F80000000000000LL;
  mBack.m[0][3] = -v7;
  *&mForward.m[0][0] = 1065353216;
  mBack.m[1][3] = -v8;
  mBack.m[2][3] = -v9;
  mForward.m[0][2] = 0.0;
  *&mForward.m[1][0] = 0x3F80000000000000LL;
  mForward.m[1][2] = 0.0;
  *&mForward.m[2][0] = 0;
  mForward.m[2][2] = 1.0;
  *&mForward.m[3][0] = 0;
  *&mForward.m[3][2] = 0x3F80000000000000LL;
  mForward.m[0][3] = v7;
  mForward.m[1][3] = v8;
  mForward.m[2][3] = v9;
  VMatrix::MatrixMul(&mForward, &mReflect, &out);
  VMatrix::MatrixMul(&out, &mBack, retstr);
  return retstr;
}


// SetupMatrixProjection  (line 86, @0x00000000030edd90, libserver.so)  // inlines: operator[]
VMatrix *__fastcall SetupMatrixProjection(
        VMatrix *__return_ptr retstr,
        const Vector *const vOrigin,
        const VPlane *const thePlane)
{
  float x; // xmm8_4
  float v5; // xmm5_4
  float y; // xmm7_4
  float v7; // xmm11_4
  float v8; // xmm4_4
  float v9; // xmm1_4
  float z; // xmm6_4
  float v11; // xmm3_4
  float m_Dist; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm11_4

  x = vOrigin->x;
  v5 = thePlane->m_Normal.x;
  y = vOrigin->y;
  v7 = vOrigin->x;
  v8 = thePlane->m_Normal.y;
  v9 = vOrigin->x * thePlane->m_Normal.x;
  z = vOrigin->z;
  v11 = thePlane->m_Normal.z;
  m_Dist = thePlane->m_Dist;
  retstr->m[0][3] = vOrigin->x * m_Dist;
  v13 = (((x * v5) + (y * v8)) + (z * v11)) - m_Dist;
  retstr->m[1][3] = y * m_Dist;
  v14 = -v7;
  retstr->m[0][0] = v13 - v9;
  retstr->m[1][1] = v13 - (y * v8);
  retstr->m[2][3] = z * m_Dist;
  retstr->m[0][2] = v14 * v11;
  retstr->m[0][1] = v14 * v8;
  retstr->m[1][2] = -y * v11;
  retstr->m[1][0] = -y * v5;
  retstr->m[3][1] = -v8;
  retstr->m[3][0] = -v5;
  retstr->m[3][2] = -v11;
  retstr->m[2][1] = -z * v8;
  retstr->m[2][0] = -z * v5;
  retstr->m[3][3] = v13 + m_Dist;
  retstr->m[2][2] = v13 - (z * v11);
  return retstr;
}


// SetupMatrixAxisRot  (line 123, @0x00000000030edec0, libserver.so)  // inlines: Init, SinCos, VMatrix
// calls: sincosf
const Vector *__fastcall SetupMatrixAxisRot(const Vector *a1, float a2, float *a3)
{
  float v5; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm12_4
  float v13; // xmm8_4
  float v14; // xmm10_4
  float v15; // xmm6_4
  float v16; // [rsp-18h] [rbp-20h] BYREF
  float v17; // [rsp-14h] [rbp-1Ch] BYREF

  v5 = a2 * 0.0174532925199433;
  sincosf(v5, &v17, &v16);
  v7 = v16;
  v8 = *a3;
  a1[5].x = 1.0;
  v9 = a3[1];
  v10 = a3[2];
  v11 = v8 * (1.0 - v7);
  v12 = v9 * (1.0 - v7);
  v13 = v8 * v17;
  v14 = v9 * v17;
  v15 = v17 * v10;
  a1->x = (v11 * v8) + v7;
  a1[1].z = (v9 * v12) + v7;
  a1->y = (v11 * v9) - v15;
  a1[1].y = v15 + (v11 * v9);
  a1[3].y = (((1.0 - v7) * v10) * v10) + v7;
  a1[2].x = (v12 * v10) - v13;
  a1->z = v14 + (v11 * v10);
  a1[2].z = (v11 * v10) - v14;
  a1[1].x = 0.0;
  a1[2].y = 0.0;
  a1[3].x = v13 + (v12 * v10);
  a1[3].z = 0.0;
  a1[4].x = 0.0;
  a1[4].y = 0.0;
  a1[4].z = 0.0;
  return a1;
}


// SetupMatrixAxisToAxisRot  (line 149, @0x00000000030ee010, libserver.so)  // inlines: Cross, CrossProduct, Dot, DotProduct, FastSqrt, Init, Length, SetupMatrixIdentity, VMatrix, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*=
VMatrix *__fastcall SetupMatrixAxisToAxisRot(
        VMatrix *__return_ptr retstr,
        const Vector *const vFromAxis,
        const Vector *const vToAxis)
{
  VMatrix *result; // rax
  float y; // xmm9_4
  float z; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm8_4
  float x; // xmm10_4
  float v9; // xmm1_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm5_4
  float v14; // xmm1_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm8_4
  float v19; // xmm13_4
  float v20; // xmm11_4
  float v21; // xmm9_4
  float v22; // xmm5_4

  result = retstr;
  y = vFromAxis->y;
  z = vFromAxis->z;
  v6 = vToAxis->z;
  v7 = vToAxis->y;
  x = vToAxis->x;
  v9 = vFromAxis->x;
  v10 = (y * v6) - (z * v7);
  v11 = (z * vToAxis->x) - (v6 * vFromAxis->x);
  v12 = (v7 * vFromAxis->x) - (y * vToAxis->x);
  v13 = fsqrt(((v10 * v10) + (v11 * v11)) + (v12 * v12));
  if ( v13 <= 0.0 )
  {
    *&retstr->m[0][0] = 0x3F800000u;
    retstr->m[1][0] = 0.0;
    *&retstr->m[1][1] = 1065353216;
    retstr->m[1][3] = 0.0;
    *&retstr->m[2][0] = 0;
    *&retstr->m[2][2] = 1065353216;
    *&retstr->m[3][0] = 0;
    retstr->m[3][2] = 0.0;
    retstr->m[3][3] = 1.0;
  }
  else
  {
    retstr->m[0][3] = 0.0;
    retstr->m[1][3] = 0.0;
    retstr->m[2][3] = 0.0;
    *&retstr->m[3][0] = 0;
    retstr->m[3][2] = 0.0;
    v14 = ((v9 * x) + (v7 * y)) + (z * v6);
    retstr->m[3][3] = 1.0;
    v15 = v10 * (1.0 / v13);
    v16 = v11 * (1.0 / v13);
    v17 = v12 * (1.0 / v13);
    v18 = (1.0 - v14) * v15;
    v19 = (1.0 - v14) * v16;
    v20 = v13 * v16;
    v21 = v13 * v15;
    v22 = v13 * v17;
    retstr->m[0][0] = (v15 * v18) + v14;
    retstr->m[1][1] = (v16 * v19) + v14;
    retstr->m[0][1] = (v18 * v16) - v22;
    retstr->m[1][2] = (v19 * v17) - v21;
    retstr->m[1][0] = v22 + (v18 * v16);
    retstr->m[2][1] = v21 + (v19 * v17);
    retstr->m[0][2] = v20 + (v18 * v17);
    retstr->m[2][0] = (v18 * v17) - v20;
    retstr->m[2][2] = (((1.0 - v14) * v17) * v17) + v14;
  }
  return result;
}


// SetupMatrixAngles  (line 183, @0x00000000030ef590, libserver.so)  // inlines: MatrixFromAngles
// calls: VMatrix::SetupMatrixOrgAngles
// callers: CFuncTrackTrain::OnControls
VMatrix *__fastcall SetupMatrixAngles(VMatrix *__return_ptr retstr, const QAngle *const vAngles)
{
  VMatrix::SetupMatrixOrgAngles(retstr, &vec3_origin, vAngles);
  return retstr;
}


// SetupMatrixOrgAngles  (line 190, @0x00000000030ef570, libserver.so)
// calls: VMatrix::SetupMatrixOrgAngles
VMatrix *__fastcall SetupMatrixOrgAngles(
        VMatrix *__return_ptr retstr,
        const Vector *const origin,
        const QAngle *const vAngles)
{
  VMatrix::SetupMatrixOrgAngles(retstr, origin, vAngles);
  return retstr;
}


// PlaneIntersection  (line 201, @0x00000000030ee230, libserver.so)  // inlines: CrossProduct, DotProduct, VectorAdd, VectorMultiply, operator*, operator+, operator=
// callers: Frustum_t::GetCorners
bool __fastcall PlaneIntersection(
        const VPlane *const vp1,
        const VPlane *const vp2,
        const VPlane *const vp3,
        Vector *const vOut)
{
  float x; // xmm10_4
  bool result; // al
  float y; // xmm11_4
  float v7; // xmm8_4
  float v8; // xmm9_4
  float z; // xmm13_4
  float v10; // xmm12_4
  float v11; // xmm5_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm4_4
  float v17; // xmm0_4
  vec_t m_Dist; // xmm15_4
  float v19; // xmm14_4
  float v20; // xmm15_4
  float v21; // xmm0_4
  float v22; // xmm14_4
  float v23; // xmm1_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  __int64 v27; // [rsp-8h] [rbp-8h]

  x = vp2->m_Normal.x;
  result = 0;
  y = vp2->m_Normal.y;
  v7 = vp3->m_Normal.y;
  v8 = vp3->m_Normal.x;
  z = vp2->m_Normal.z;
  v10 = vp3->m_Normal.z;
  v11 = vp1->m_Normal.x;
  v12 = vp1->m_Normal.y;
  v13 = vp1->m_Normal.z;
  v14 = (vp2->m_Normal.x * v7) - (y * vp3->m_Normal.x);
  v15 = (vp3->m_Normal.x * z) - (vp2->m_Normal.x * v10);
  v16 = (y * v10) - (v7 * z);
  v17 = ((v16 * vp1->m_Normal.x) + (v15 * v12)) + (v14 * v13);
  if ( fabs(v17) >= 0.00000011920929 )
  {
    m_Dist = vp2->m_Dist;
    v19 = vp3->m_Dist;
    *(&v27 - 1) = v19;
    *(&v27 - 2) = m_Dist;
    v20 = vp1->m_Dist;
    *(&v27 - 3) = 1.0 / v17;
    v21 = ((z * v12) - (y * v13)) * v19;
    v22 = *(&v27 - 2);
    v23 = (((v7 * v13) - (v10 * v12)) * v22) + (v16 * v20);
    v24 = *(&v27 - 3);
    v25 = v21 + v23;
    v26 = *(&v27 - 1);
    vOut->x = v25 * v24;
    vOut->y = ((((x * v13) - (z * v11)) * v26) + ((((v10 * v11) - (v13 * v8)) * v22) + (v15 * v20))) * v24;
    vOut->z = ((((y * v11) - (x * v12)) * v26) + ((((v12 * v8) - (v11 * v7)) * v22) + (v14 * v20))) * v24;
    return 1;
  }
  return result;
}


// VMatrix::operator=  (line 244, @0x00000000030ee400, libserver.so)
// callers: ComputeViewMatrices, CRender::ExtractMatrices, CRender::Push3DView, CRender::Push2DView, CSave::WriteVMatrixWorldspace, CRestore::ReadVMatrixWorldspace, MatricesFromCamera, FrustumFromMatrices, ViewProjFromVectors, CFrustum::CalcViewProj, CFrustum::UpdateProjectionFromCamera, CFrustum::BuildFrustumFromVectors (13 total)
VMatrix *__fastcall VMatrix::operator=(VMatrix *const this, const VMatrix *const mOther)
{
  *this = *mOther;
  return this;
}


// VMatrix::operator==  (line 269, @0x00000000030ee4b0, libserver.so)
// calls: memcmp
bool __fastcall VMatrix::operator==(const VMatrix *const this, const VMatrix *const src)
{
  return memcmp(src, this, 0x40u) == 0;
}


// VMatrix::MatrixMul  (line 274, @0x00000000030ee4d0, libserver.so)  // inlines: Init
// callers: SetupMatrixReflection, VMatrix::operator*
void __fastcall VMatrix::MatrixMul(const VMatrix *const this, const VMatrix *const vm, VMatrix *const out)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm14_4
  float v6; // xmm13_4
  float v7; // xmm12_4
  float v8; // xmm11_4
  float v9; // xmm6_4
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm10_4
  float v14; // xmm9_4
  float v15; // xmm8_4
  float v16; // xmm7_4
  float v17; // [rsp+0h] [rbp-48h]
  float v18; // [rsp+4h] [rbp-44h]
  float v19; // [rsp+8h] [rbp-40h]
  float v20; // [rsp+Ch] [rbp-3Ch]
  float v21; // [rsp+10h] [rbp-38h]
  float v22; // [rsp+14h] [rbp-34h]
  float v23; // [rsp+18h] [rbp-30h]
  float v24; // [rsp+1Ch] [rbp-2Ch]
  float v25; // [rsp+20h] [rbp-28h]
  float v26; // [rsp+24h] [rbp-24h]
  float v27; // [rsp+28h] [rbp-20h]
  float v28; // [rsp+2Ch] [rbp-1Ch]
  float v29; // [rsp+30h] [rbp-18h]
  float v30; // [rsp+34h] [rbp-14h]
  float v31; // [rsp+38h] [rbp-10h]
  float v32; // [rsp+3Ch] [rbp-Ch]
  float v33; // [rsp+40h] [rbp-8h]
  float v34; // [rsp+44h] [rbp-4h]

  v28 = vm->m[1][3];
  v20 = this->m[3][0];
  v29 = vm->m[0][3];
  v19 = this->m[3][1];
  v18 = this->m[3][2];
  v27 = vm->m[2][3];
  v17 = this->m[3][3];
  v26 = vm->m[3][3];
  v24 = vm->m[0][2];
  v23 = vm->m[1][2];
  v22 = vm->m[2][2];
  v21 = vm->m[3][2];
  v25 = vm->m[0][1];
  v34 = vm->m[1][1];
  v33 = vm->m[2][1];
  v32 = vm->m[3][1];
  v3 = vm->m[0][0];
  v4 = vm->m[1][0];
  v5 = this->m[0][0];
  v6 = this->m[0][1];
  v7 = this->m[0][2];
  v31 = vm->m[2][0];
  v8 = this->m[0][3];
  v30 = vm->m[3][0];
  v9 = this->m[2][0];
  v10 = this->m[2][1];
  v11 = this->m[2][2];
  v12 = this->m[2][3];
  v13 = this->m[1][0];
  v14 = this->m[1][1];
  v15 = this->m[1][2];
  v16 = this->m[1][3];
  out->m[0][0] = (((vm->m[0][0] * this->m[0][0]) + (v4 * v6)) + (v31 * v7)) + (v30 * v8);
  out->m[0][1] = (((v25 * v5) + (v34 * v6)) + (v33 * v7)) + (v32 * v8);
  out->m[0][2] = (((v24 * v5) + (v23 * v6)) + (v22 * v7)) + (v21 * v8);
  out->m[0][3] = (((v5 * v29) + (v6 * v28)) + (v7 * v27)) + (v8 * v26);
  out->m[1][0] = (((v3 * v13) + (v4 * v14)) + (v31 * v15)) + (v30 * v16);
  out->m[1][1] = (((v25 * v13) + (v34 * v14)) + (v33 * v15)) + (v32 * v16);
  out->m[1][2] = (((v24 * v13) + (v23 * v14)) + (v22 * v15)) + (v21 * v16);
  out->m[1][3] = (((v13 * v29) + (v14 * v28)) + (v15 * v27)) + (v16 * v26);
  out->m[2][0] = (((v3 * v9) + (v4 * v10)) + (v31 * v11)) + (v30 * v12);
  out->m[2][1] = (((v25 * v9) + (v34 * v10)) + (v33 * v11)) + (v32 * v12);
  out->m[2][2] = (((v24 * v9) + (v23 * v10)) + (v22 * v11)) + (v21 * v12);
  out->m[2][3] = (((v9 * v29) + (v10 * v28)) + (v11 * v27)) + (v12 * v26);
  out->m[3][0] = (((v3 * v20) + (v4 * v19)) + (v31 * v18)) + (v30 * v17);
  out->m[3][1] = (((v25 * v20) + (v34 * v19)) + (v33 * v18)) + (v32 * v17);
  out->m[3][2] = (((v24 * v20) + (v23 * v19)) + (v22 * v18)) + (v21 * v17);
  out->m[3][3] = (((v20 * v29) + (v19 * v28)) + (v18 * v27)) + (v17 * v26);
}


// VMatrix::operator*  (line 301, @0x00000000030eebe0, libserver.so)
// calls: VMatrix::MatrixMul
// callers: FrustumFromMatrices, ViewProjFromVectors, CFrustum::CalcViewProj, CFrustum::BuildFrustumFromVectors, CFrustum::BuildShadowFrustum
VMatrix *__fastcall VMatrix::operator*(
        VMatrix *__return_ptr retstr,
        const VMatrix *const this,
        const VMatrix *const vm)
{
  VMatrix::MatrixMul(this, vm, retstr);
  return retstr;
}


// VMatrix::InverseGeneral  (line 310, @0x00000000030eedf0, libserver.so)
// calls: MatrixInverseGeneral
// callers: MatrixInvertGeneral, CFrustum::CalcViewProj, CFrustum::BuildFrustumFromVectors, CFrustum::BuildShadowFrustum
bool __fastcall VMatrix::InverseGeneral(const VMatrix *const this, VMatrix *const vInverse)
{
  return MatrixInverseGeneral(this, vInverse);
}


// MatrixInverseGeneral  (line 316, @0x00000000030eec00, libserver.so)  // inlines: FloatMakePositive
// callers: VMatrix::InverseGeneral, MatrixInverseTranspose, CalculateAABBFromProjectionMatrix, CalculateSphereFromProjectionMatrix, CFrustum::BuildFrustumFromVectors, CalcTextureBasisFromUVs
bool __fastcall MatrixInverseGeneral(const VMatrix *const src, VMatrix *const dst)
{
  int v2; // ecx
  int *v3; // r9
  float *v4; // rdx
  float *v5; // r11
  int *v6; // r8
  __int64 i; // rax
  __int64 j; // r8
  int v9; // eax
  __int64 v10; // rdi
  float v11; // xmm1_4
  float v12; // xmm0_4
  __int64 v13; // rcx
  __int64 v14; // rax
  float *v15; // rcx
  float *v16; // rdx
  float v17; // xmm1_4
  __int64 k; // rdi
  __int64 v19; // rax
  float *v20; // rdx
  float v21; // xmm1_4
  __int64 v22; // rax
  float *v23; // rdx
  int rowMap[4]; // [rsp+0h] [rbp-A0h] BYREF
  float mat[36]; // [rsp+10h] [rbp-90h] BYREF

  v2 = 0;
  v3 = rowMap;
  v4 = mat;
  v5 = &mat[4];
  v6 = rowMap;
  do
  {
    for ( i = 0; i != 4; ++i )
      v4[i] = src->m[0][i];
    *v6 = v2++;
    v5 += 9;
    v4[4] = 0.0;
    ++v6;
    src = (src + 16);
    v4[5] = 0.0;
    v4 += 8;
    *(v4 - 2) = 0.0;
    *(v4 - 1) = 0.0;
    *(v5 - 9) = 1.0;
  }
  while ( v2 != 4 );
  for ( j = 0; j != 4; ++j )
  {
    v9 = j;
    v10 = -1;
    v11 = 0.000001;
    do
    {
      v12 = fabs(mat[8 * rowMap[v9] + j]);
      if ( v12 > v11 )
      {
        v10 = v9;
        v11 = v12;
      }
      ++v9;
    }
    while ( v9 != 4 );
    if ( v10 == -1 )
      return 0;
    v13 = rowMap[v10];
    rowMap[v10] = rowMap[j];
    v14 = 0;
    rowMap[j] = v13;
    v15 = &mat[8 * v13];
    v16 = &v15[j];
    v17 = 1.0 / *v16;
    do
    {
      v15[v14] = v15[v14] * v17;
      ++v14;
    }
    while ( v14 != 8 );
    *v16 = 1.0;
    for ( k = 0; k != 4; ++k )
    {
      if ( j != k )
      {
        v19 = 0;
        v20 = &mat[8 * rowMap[k]];
        v21 = -v20[j];
        do
        {
          v20[v19] = (v15[v19] * v21) + v20[v19];
          ++v19;
        }
        while ( v19 != 8 );
        v20[j] = 0.0;
      }
    }
  }
  do
  {
    v22 = 0;
    v23 = &mat[8 * *v3];
    do
    {
      dst->m[0][v22] = v23[v22 + 4];
      ++v22;
    }
    while ( v22 != 4 );
    ++v3;
    dst = (dst + 16);
  }
  while ( v3 != mat );
  return 1;
}


// MatrixInverseTR  (line 436, @0x00000000030f0130, libserver.so)  // inlines: Init, MatrixSetColumn
// calls: Vector3DMultiply
// callers: VMatrix::InverseTR
void __fastcall MatrixInverseTR(const VMatrix *const src, VMatrix *const dst)
{
  float v3; // xmm2_4
  float v4; // xmm3_4
  vec_t x; // xmm0_4
  Vector vTrans; // [rsp+0h] [rbp-30h] BYREF
  Vector vNewTrans; // [rsp+10h] [rbp-20h] BYREF

  dst->m[0][0] = src->m[0][0];
  dst->m[0][1] = src->m[1][0];
  dst->m[0][2] = src->m[2][0];
  dst->m[1][0] = src->m[0][1];
  dst->m[1][1] = src->m[1][1];
  dst->m[1][2] = src->m[2][1];
  dst->m[2][0] = src->m[0][2];
  dst->m[2][1] = src->m[1][2];
  dst->m[2][2] = src->m[2][2];
  v3 = src->m[1][3];
  v4 = src->m[0][3];
  vTrans.z = -src->m[2][3];
  vTrans.y = -v3;
  vTrans.x = -v4;
  Vector3DMultiply(dst, &vTrans, &vNewTrans);
  x = vNewTrans.x;
  dst->m[3][3] = 1.0;
  dst->m[0][3] = x;
  dst->m[1][3] = vNewTrans.y;
  dst->m[2][3] = vNewTrans.z;
  *&dst->m[3][1] = 0;
  dst->m[3][0] = 0.0;
}


// VMatrix::InverseTR  (line 456, @0x00000000030f0220, libserver.so)
// calls: MatrixInverseTR
void __fastcall VMatrix::InverseTR(const VMatrix *const this, VMatrix *const ret)
{
  MatrixInverseTR(this, ret);
}


// MatrixInverseTranspose  (line 461, @0x00000000030ef900, libserver.so)  // inlines: InverseGeneral
// calls: MatrixInverseGeneral, MatrixTranspose
void __fastcall MatrixInverseTranspose(const VMatrix *const src, VMatrix *const dst)
{
  MatrixInverseGeneral(src, dst);
  MatrixTranspose(dst, dst);
}


// MatrixInverseTranspose  (line 470, @0x00000000030ef930, libserver.so)  // inlines: CopyFrom3x4, InverseGeneral, MatrixInverseTranspose, Set3x4, memcpy
// calls: MatrixInverseGeneral, MatrixTranspose
void __fastcall MatrixInverseTranspose(const matrix3x4_t *const src, matrix3x4_t *const dst)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  VMatrix tmp; // [rsp+0h] [rbp-98h] BYREF
  VMatrix out; // [rsp+40h] [rbp-58h] BYREF

  v3 = *&src->m_flMatVal[0][0];
  *&tmp.m[3][1] = 0;
  tmp.m[3][0] = 0.0;
  tmp.m[3][3] = 1.0;
  *&tmp.m[0][0] = v3;
  *&tmp.m[0][2] = *&src->m_flMatVal[0][2];
  *&tmp.m[1][0] = *&src->m_flMatVal[1][0];
  v4 = *&src->m_flMatVal[2][2];
  *&tmp.m[2][0] = *&src->m_flMatVal[2][0];
  *&tmp.m[2][2] = v4;
  MatrixInverseGeneral(&tmp, &out);
  MatrixTranspose(&out, &out);
  *dst = *&out.m[0][0];
}


// VMatrix::InverseTR  (line 481, @0x00000000030f0230, libserver.so)
// calls: MatrixInverseTR
VMatrix *__fastcall VMatrix::InverseTR(VMatrix *__return_ptr retstr, const VMatrix *const this)
{
  MatrixInverseTR(this, retstr);
  return retstr;
}


// VMatrix::GetScale  (line 488, @0x00000000030eee00, libserver.so)  // inlines: FastSqrt, GetBasisVectors, Length, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
Vector __fastcall VMatrix::GetScale(const VMatrix *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  result.z = fsqrt(((this->m[0][2] * this->m[0][2]) + (this->m[1][2] * this->m[1][2])) + (this->m[2][2] * this->m[2][2]));
  *&result.x = __PAIR64__(
                 COERCE_UNSIGNED_INT(
                   fsqrt(
                     ((this->m[0][1] * this->m[0][1]) + (this->m[1][1] * this->m[1][1]))
                   + (this->m[2][1] * this->m[2][1]))),
                 COERCE_UNSIGNED_INT(
                   fsqrt(
                     ((this->m[0][0] * this->m[0][0]) + (this->m[1][0] * this->m[1][0]))
                   + (this->m[2][0] * this->m[2][0]))));
  return result;
}


// VMatrix::Scale  (line 501, @0x00000000030eeeb0, libserver.so)  // inlines: Init, VMatrix
VMatrix *__fastcall VMatrix::Scale(VMatrix *__return_ptr retstr, VMatrix *const this, const Vector *const vScale)
{
  float z; // xmm2_4
  float y; // xmm1_4
  float x; // xmm0_4
  float v7; // xmm6_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  float v10; // xmm12_4
  float v11; // xmm10_4
  float v12; // xmm13_4
  float v13; // xmm11_4
  float v14; // xmm12_4
  float v15; // xmm3_4
  float v16; // xmm13_4
  float v17; // xmm4_4
  float v18; // xmm14_4
  float v19; // xmm2_4
  float v20; // xmm14_4
  float v21; // xmm5_4
  float v22; // xmm1_4
  float v23; // xmm0_4

  z = vScale->z;
  y = vScale->y;
  x = vScale->x;
  v7 = this->m[3][2] * z;
  v8 = this->m[3][0] * vScale->x;
  v9 = this->m[2][2] * z;
  v10 = this->m[1][2];
  v11 = this->m[2][1] * y;
  v12 = this->m[1][1];
  v13 = this->m[2][0] * vScale->x;
  retstr->m[3][1] = this->m[3][1] * y;
  v14 = v10 * z;
  v15 = this->m[2][3];
  retstr->m[3][0] = v8;
  v16 = v12 * y;
  v17 = this->m[1][3];
  retstr->m[2][2] = v9;
  v18 = this->m[1][0];
  retstr->m[2][1] = v11;
  v19 = z * this->m[0][2];
  retstr->m[1][3] = v17;
  v20 = v18 * x;
  v21 = this->m[0][3];
  retstr->m[1][2] = v14;
  v22 = y * this->m[0][1];
  retstr->m[1][1] = v16;
  v23 = x * this->m[0][0];
  retstr->m[0][3] = v21;
  retstr->m[0][2] = v19;
  retstr->m[1][0] = v20;
  retstr->m[0][1] = v22;
  retstr->m[0][0] = v23;
  retstr->m[2][0] = v13;
  retstr->m[2][3] = v15;
  retstr->m[3][2] = v7;
  retstr->m[3][3] = 1.0;
  return retstr;
}


// VMatrix::NormalizeBasisVectors  (line 511, @0x00000000030eefa0, libserver.so)  // inlines: GetBasisVectors, Init, SetBasisVectors, SetForward, SetLeft, SetUp
// calls: VectorNormalize
VMatrix *__fastcall VMatrix::NormalizeBasisVectors(VMatrix *__return_ptr retstr, const VMatrix *const this)
{
  vec_t v3; // xmm1_4
  vec_t v4; // xmm2_4
  vec_t v5; // xmm0_4
  vec_t v6; // xmm1_4
  vec_t v7; // xmm2_4
  vec_t v8; // xmm0_4
  vec_t v9; // xmm1_4
  vec_t v10; // xmm2_4
  vec_t x; // xmm0_4
  Vector vecs[3]; // [rsp+0h] [rbp-40h] BYREF

  v3 = this->m[1][0];
  v4 = this->m[0][0];
  vecs[0].z = this->m[2][0];
  vecs[0].y = v3;
  v5 = this->m[2][1];
  v6 = this->m[1][1];
  vecs[0].x = v4;
  v7 = this->m[0][1];
  vecs[1].z = v5;
  vecs[1].y = v6;
  v8 = this->m[2][2];
  v9 = this->m[1][2];
  vecs[1].x = v7;
  v10 = this->m[0][2];
  vecs[2].z = v8;
  vecs[2].y = v9;
  vecs[2].x = v10;
  VectorNormalize(vecs);
  VectorNormalize(&vecs[1]);
  VectorNormalize(&vecs[2]);
  x = vecs[0].x;
  retstr->m[3][3] = 1.0;
  retstr->m[0][0] = x;
  retstr->m[1][0] = vecs[0].y;
  retstr->m[2][0] = vecs[0].z;
  retstr->m[0][1] = vecs[1].x;
  retstr->m[1][1] = vecs[1].y;
  retstr->m[2][1] = vecs[1].z;
  retstr->m[0][2] = vecs[2].x;
  retstr->m[1][2] = vecs[2].y;
  retstr->m[2][2] = vecs[2].z;
  *&retstr->m[3][1] = 0;
  retstr->m[3][0] = 0.0;
  return retstr;
}


// VMatrix::Transpose  (line 532, @0x00000000030ef0b0, libserver.so)  // inlines: Init, VMatrix
// callers: ViewMatrixRH
VMatrix *__fastcall VMatrix::Transpose(VMatrix *__return_ptr retstr, const VMatrix *const this)
{
  float v3; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm10_4
  float v13; // xmm11_4
  float v14; // xmm12_4
  float v15; // xmm13_4
  float v16; // xmm14_4
  float v17; // xmm15_4

  v3 = this->m[2][3];
  v4 = this->m[1][3];
  retstr->m[3][3] = this->m[3][3];
  v5 = this->m[0][3];
  retstr->m[3][2] = v3;
  v6 = this->m[3][2];
  retstr->m[3][1] = v4;
  v7 = this->m[2][2];
  retstr->m[3][0] = v5;
  v8 = this->m[1][2];
  retstr->m[2][3] = v6;
  v9 = this->m[0][2];
  retstr->m[2][2] = v7;
  v10 = this->m[3][1];
  retstr->m[2][1] = v8;
  v11 = this->m[2][1];
  retstr->m[2][0] = v9;
  v12 = this->m[1][1];
  retstr->m[1][3] = v10;
  v13 = this->m[0][1];
  retstr->m[1][2] = v11;
  v14 = this->m[3][0];
  retstr->m[1][1] = v12;
  v15 = this->m[2][0];
  retstr->m[1][0] = v13;
  v16 = this->m[1][0];
  retstr->m[0][3] = v14;
  v17 = this->m[0][0];
  retstr->m[0][2] = v15;
  retstr->m[0][1] = v16;
  retstr->m[0][0] = v17;
  return retstr;
}


// VMatrix::Transpose3x3  (line 542, @0x00000000030ef170, libserver.so)  // inlines: Init, VMatrix
VMatrix *__fastcall VMatrix::Transpose3x3(VMatrix *__return_ptr retstr, const VMatrix *const this)
{
  float v3; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm10_4
  float v13; // xmm11_4
  float v14; // xmm12_4
  float v15; // xmm13_4
  float v16; // xmm14_4
  float v17; // xmm15_4

  v3 = this->m[3][2];
  v4 = this->m[3][1];
  retstr->m[3][3] = this->m[3][3];
  v5 = this->m[3][0];
  retstr->m[3][2] = v3;
  v6 = this->m[2][3];
  retstr->m[3][1] = v4;
  v7 = this->m[2][2];
  retstr->m[3][0] = v5;
  v8 = this->m[1][2];
  retstr->m[2][3] = v6;
  v9 = this->m[0][2];
  retstr->m[2][2] = v7;
  v10 = this->m[1][3];
  retstr->m[2][1] = v8;
  v11 = this->m[2][1];
  retstr->m[2][0] = v9;
  v12 = this->m[1][1];
  retstr->m[1][3] = v10;
  v13 = this->m[0][1];
  retstr->m[1][2] = v11;
  v14 = this->m[0][3];
  retstr->m[1][1] = v12;
  v15 = this->m[2][0];
  retstr->m[1][0] = v13;
  v16 = this->m[1][0];
  retstr->m[0][3] = v14;
  v17 = this->m[0][0];
  retstr->m[0][2] = v15;
  retstr->m[0][1] = v16;
  retstr->m[0][0] = v17;
  return retstr;
}


// VMatrix::IsRotationMatrix  (line 554, @0x00000000030ef230, libserver.so)  // inlines: Dot, DotProduct, FastSqrt, FloatMakePositive, Length, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
bool __fastcall VMatrix::IsRotationMatrix(const VMatrix *const this)
{
  float v1; // xmm3_4
  float v2; // xmm2_4
  float v3; // xmm1_4
  float v4; // xmm9_4
  float v5; // xmm8_4
  float v6; // xmm7_4
  float v7; // xmm12_4
  float v8; // xmm11_4
  float v9; // xmm10_4
  bool result; // al

  v1 = this->m[0][0];
  v2 = this->m[0][1];
  v3 = this->m[0][2];
  result = fabs(1.0 - fsqrt(((v1 * v1) + (v2 * v2)) + (v3 * v3))) < 0.0099999998
        && (v4 = this->m[1][0],
            v5 = this->m[1][1],
            v6 = this->m[1][2],
            fabs(1.0 - fsqrt(((v4 * v4) + (v5 * v5)) + (v6 * v6))) < 0.0099999998)
        && (v7 = this->m[2][0],
            v8 = this->m[2][1],
            v9 = this->m[2][2],
            fabs(1.0 - fsqrt(((v7 * v7) + (v8 * v8)) + (v9 * v9))) < 0.0099999998)
        && fabs(((v1 * v4) + (v2 * v5)) + (v3 * v6)) < 0.0099999998
        && fabs(((v1 * v7) + (v2 * v8)) + (v3 * v9)) < 0.0099999998
        && fabs(((v4 * v7) + (v5 * v8)) + (v6 * v9)) < 0.0099999998;
  return result;
}


// VMatrix::SetupMatrixOrgAngles  (line 569, @0x00000000030ef3c0, libserver.so)  // inlines: SinCos, SinCos3Scaled
// calls: sincosf
// callers: RotatePosition, EntityMatrix::InitFromEntity, EntityMatrix::InitFromEntityAttachmentName, EntityMatrix::InitFromEntityAttachmentHandle, EntityMatrix::InitFromEntityLocal, CScriptNavBlocker::Spawn, SetupMatrixOrgAngles, SetupMatrixAngles, MatrixFromAngles
void __fastcall VMatrix::SetupMatrixOrgAngles(
        VMatrix *const this,
        const Vector *const origin,
        const QAngle *const vAngles)
{
  float v6; // xmm4_4
  float v7; // xmm0_4
  vec_t z; // xmm1_4
  float v9; // [rsp+8h] [rbp-48h]
  float v10; // [rsp+Ch] [rbp-44h]
  float v11; // [rsp+10h] [rbp-40h]
  float v12; // [rsp+14h] [rbp-3Ch]
  float cosx; // [rsp+18h] [rbp-38h] BYREF
  float sinx[13]; // [rsp+1Ch] [rbp-34h] BYREF

  sincosf(0.017453292 * vAngles->x, sinx, &cosx);
  v9 = cosx;
  v10 = sinx[0];
  sincosf(0.017453292 * vAngles->y, sinx, &cosx);
  v11 = cosx;
  v12 = sinx[0];
  sincosf(0.017453292 * vAngles->z, sinx, &cosx);
  v6 = sinx[0];
  v7 = cosx;
  this->m[0][0] = v9 * v11;
  this->m[1][0] = v9 * v12;
  this->m[2][0] = -v10;
  this->m[0][1] = ((v10 * v6) * v11) - (v12 * v7);
  this->m[1][1] = ((v10 * v6) * v12) + (v11 * v7);
  this->m[0][3] = 0.0;
  this->m[1][3] = 0.0;
  this->m[2][3] = 0.0;
  this->m[2][1] = v9 * v6;
  this->m[2][2] = v9 * v7;
  this->m[0][2] = ((v10 * v7) * v11) + (v12 * v6);
  this->m[1][2] = (v12 * (v10 * v7)) - (v11 * v6);
  this->m[0][3] = origin->x;
  this->m[1][3] = origin->y;
  z = origin->z;
  this->m[3][0] = 0.0;
  this->m[3][1] = 0.0;
  this->m[2][3] = z;
  this->m[3][2] = 0.0;
  this->m[3][3] = 1.0;
}


// MatrixSetIdentity  (line 608, @0x00000000030ef5c0, libserver.so)
// callers: EntityMatrix::InitFromEntity, EntityMatrix::InitFromEntityAttachmentName, EntityMatrix::InitFromEntityAttachmentHandle, EntityMatrix::InitFromEntityLocal
void __fastcall MatrixSetIdentity(VMatrix *const dst)
{
  *&dst->m[0][0] = 0x3F800000u;
  dst->m[1][0] = 0.0;
  *&dst->m[1][1] = 1065353216;
  dst->m[1][3] = 0.0;
  *&dst->m[2][0] = 0;
  *&dst->m[2][2] = 1065353216;
  *&dst->m[3][0] = 0;
  dst->m[3][2] = 0.0;
  dst->m[3][3] = 1.0;
}


// MatrixFromAngles  (line 620, @0x00000000030ef620, libserver.so)
// calls: VMatrix::SetupMatrixOrgAngles
// callers: CC_Ent_Rotate, CVGuiScreen::Spawn
void __fastcall MatrixFromAngles(const QAngle *const vAngles, VMatrix *const dst)
{
  VMatrix::SetupMatrixOrgAngles(dst, &vec3_origin, vAngles);
}


// MatrixToAngles  (line 629, @0x00000000030ef640, libserver.so)  // inlines: RAD2DEG
// calls: V_atan2f, sqrtf
// callers: CC_Ent_Rotate, CC_Prop_Dynamic_Create, CVGuiScreen::Spawn
void __fastcall MatrixToAngles(const VMatrix *const src, QAngle *const vAngles)
{
  double v3; // xmm5_8
  double v4; // xmm4_8
  unsigned int v5; // r14d
  float v6; // xmm8_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // [rsp+18h] [rbp-28h]
  float xyDist; // [rsp+1Ch] [rbp-24h]
  float v11; // [rsp+20h] [rbp-20h]

  *&v3 = LODWORD(src->m[0][0]);
  *&v4 = LODWORD(src->m[1][0]);
  v5 = _mm_cvtsi128_si32(LODWORD(src->m[2][0]));
  v6 = src->m[2][2];
  v7 = fsqrt((*&v3 * *&v3) + (*&v4 * *&v4));
  if ( v7 > 0.001 )
  {
    v9 = v7;
    v11 = src->m[2][1];
    vAngles->y = V_atan2f(v4, v3) * 57.295776;
    vAngles->x = V_atan2f(
                   COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*_mm_cvtsi32_si128(v5).m128i_i64) ^ 0x80000000),
                   COERCE_DOUBLE(LODWORD(v9)))
               * 57.295776;
    vAngles->z = V_atan2f(COERCE_DOUBLE(LODWORD(v11)), COERCE_DOUBLE(LODWORD(v6))) * 57.295776;
  }
  else
  {
    xyDist = v7;
    vAngles->y = V_atan2f(COERCE_DOUBLE(LODWORD(src->m[0][1]) ^ 0x80000000LL), COERCE_DOUBLE(LODWORD(src->m[1][1])))
               * 57.295776;
    v8 = V_atan2f(
           COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*_mm_cvtsi32_si128(v5).m128i_i64) ^ 0x80000000),
           COERCE_DOUBLE(LODWORD(xyDist)));
    vAngles->z = 0.0;
    vAngles->x = v8 * 57.295776;
  }
}


// MatrixTranspose  (line 680, @0x00000000030ef7d0, libserver.so)  // inlines: Swap<float>
// callers: MatrixInverseTranspose
void __fastcall MatrixTranspose(const VMatrix *const src, VMatrix *const dst)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4

  if ( src == dst )
  {
    v2 = src->m[1][0];
    src->m[1][0] = src->m[0][1];
    v3 = src->m[0][2];
    src->m[0][1] = v2;
    v4 = src->m[2][0];
    src->m[2][0] = v3;
    v5 = src->m[0][3];
    src->m[0][2] = v4;
    v6 = src->m[3][0];
    src->m[3][0] = v5;
    v7 = src->m[1][2];
    src->m[0][3] = v6;
    v8 = src->m[2][1];
    src->m[2][1] = v7;
    v9 = src->m[1][3];
    src->m[1][2] = v8;
    v10 = src->m[3][1];
    src->m[3][1] = v9;
    v11 = src->m[2][3];
    src->m[1][3] = v10;
    v12 = src->m[3][2];
    src->m[3][2] = v11;
    src->m[2][3] = v12;
  }
  else
  {
    dst->m[0][0] = src->m[0][0];
    dst->m[0][1] = src->m[1][0];
    dst->m[0][2] = src->m[2][0];
    dst->m[0][3] = src->m[3][0];
    dst->m[1][0] = src->m[0][1];
    dst->m[1][1] = src->m[1][1];
    dst->m[1][2] = src->m[2][1];
    dst->m[1][3] = src->m[3][1];
    dst->m[2][0] = src->m[0][2];
    dst->m[2][1] = src->m[1][2];
    dst->m[2][2] = src->m[2][2];
    dst->m[2][3] = src->m[3][2];
    dst->m[3][0] = src->m[0][3];
    dst->m[3][1] = src->m[1][3];
    dst->m[3][2] = src->m[2][3];
    dst->m[3][3] = src->m[3][3];
  }
}


// MatrixCopy  (line 705, @0x00000000030ef9f0, libserver.so)  // inlines: memcpy
void __fastcall MatrixCopy(const VMatrix *const src, VMatrix *const dst)
{
  if ( src != dst )
    *dst = *src;
}


// MatrixMultiply  (line 718, @0x00000000030efa40, libserver.so)  // inlines: MatrixCopy, memcpy
// callers: ComputeViewMatrices, CRenderGameSystem::GetMatricesForView, CC_Ent_Rotate, CVGuiScreen::Spawn, MatrixBuildPerspective, ComputeViewMatrix, ComputeScreenSpacePosition
void __fastcall MatrixMultiply(const VMatrix *const src1, const VMatrix *const src2, VMatrix *const dst)
{
  float *p_tmp1; // rcx
  float *p_tmp2; // rax
  VMatrix tmp1; // [rsp+0h] [rbp-80h] BYREF
  VMatrix tmp2; // [rsp+40h] [rbp-40h] BYREF

  p_tmp1 = &tmp1;
  if ( src1 != dst )
    p_tmp1 = src1;
  p_tmp2 = &tmp2;
  if ( src2 != dst )
    p_tmp2 = src2;
  if ( src1 == dst )
    tmp1 = *dst;
  if ( src2 == dst )
    tmp2 = *dst;
  dst->m[0][0] = (((*p_tmp1 * *p_tmp2) + (p_tmp1[1] * p_tmp2[4])) + (p_tmp1[2] * p_tmp2[8])) + (p_tmp1[3] * p_tmp2[12]);
  dst->m[0][1] = (((*p_tmp1 * p_tmp2[1]) + (p_tmp1[1] * p_tmp2[5])) + (p_tmp1[2] * p_tmp2[9]))
               + (p_tmp1[3] * p_tmp2[13]);
  dst->m[0][2] = (((*p_tmp1 * p_tmp2[2]) + (p_tmp1[1] * p_tmp2[6])) + (p_tmp1[2] * p_tmp2[10]))
               + (p_tmp1[3] * p_tmp2[14]);
  dst->m[0][3] = (((*p_tmp1 * p_tmp2[3]) + (p_tmp1[1] * p_tmp2[7])) + (p_tmp1[2] * p_tmp2[11]))
               + (p_tmp1[3] * p_tmp2[15]);
  dst->m[1][0] = (((p_tmp1[4] * *p_tmp2) + (p_tmp1[5] * p_tmp2[4])) + (p_tmp1[6] * p_tmp2[8]))
               + (p_tmp1[7] * p_tmp2[12]);
  dst->m[1][1] = (((p_tmp1[4] * p_tmp2[1]) + (p_tmp1[5] * p_tmp2[5])) + (p_tmp1[6] * p_tmp2[9]))
               + (p_tmp1[7] * p_tmp2[13]);
  dst->m[1][2] = (((p_tmp1[4] * p_tmp2[2]) + (p_tmp1[5] * p_tmp2[6])) + (p_tmp1[6] * p_tmp2[10]))
               + (p_tmp1[7] * p_tmp2[14]);
  dst->m[1][3] = (((p_tmp1[4] * p_tmp2[3]) + (p_tmp1[5] * p_tmp2[7])) + (p_tmp1[6] * p_tmp2[11]))
               + (p_tmp1[7] * p_tmp2[15]);
  dst->m[2][0] = (((p_tmp1[8] * *p_tmp2) + (p_tmp1[9] * p_tmp2[4])) + (p_tmp1[10] * p_tmp2[8]))
               + (p_tmp1[11] * p_tmp2[12]);
  dst->m[2][1] = (((p_tmp1[8] * p_tmp2[1]) + (p_tmp1[9] * p_tmp2[5])) + (p_tmp1[10] * p_tmp2[9]))
               + (p_tmp1[11] * p_tmp2[13]);
  dst->m[2][2] = (((p_tmp1[8] * p_tmp2[2]) + (p_tmp1[9] * p_tmp2[6])) + (p_tmp1[10] * p_tmp2[10]))
               + (p_tmp1[11] * p_tmp2[14]);
  dst->m[2][3] = (((p_tmp1[8] * p_tmp2[3]) + (p_tmp1[9] * p_tmp2[7])) + (p_tmp1[10] * p_tmp2[11]))
               + (p_tmp1[11] * p_tmp2[15]);
  dst->m[3][0] = (((p_tmp1[12] * *p_tmp2) + (p_tmp1[13] * p_tmp2[4])) + (p_tmp1[14] * p_tmp2[8]))
               + (p_tmp1[15] * p_tmp2[12]);
  dst->m[3][1] = (((p_tmp1[12] * p_tmp2[1]) + (p_tmp1[13] * p_tmp2[5])) + (p_tmp1[14] * p_tmp2[9]))
               + (p_tmp1[15] * p_tmp2[13]);
  dst->m[3][2] = (((p_tmp1[12] * p_tmp2[2]) + (p_tmp1[13] * p_tmp2[6])) + (p_tmp1[14] * p_tmp2[10]))
               + (p_tmp1[15] * p_tmp2[14]);
  dst->m[3][3] = (((p_tmp1[12] * p_tmp2[3]) + (p_tmp1[13] * p_tmp2[7])) + (p_tmp1[14] * p_tmp2[11]))
               + (p_tmp1[15] * p_tmp2[15]);
}


// Vector4DMultiply  (line 763, @0x00000000030efe90, libserver.so)  // inlines: Vector4DCopy
void __fastcall Vector4DMultiply(const VMatrix *const src1, const Vector4D *const src2, Vector4D *const dst)
{
  float x; // xmm0_4
  float y; // xmm3_4
  float z; // xmm2_4
  float w; // xmm1_4
  Vector4D tmp; // [rsp+0h] [rbp-10h] BYREF

  if ( src2 == dst )
  {
    x = dst->x;
    src2 = &tmp;
    y = dst->y;
    z = dst->z;
    tmp.x = dst->x;
    w = dst->w;
    tmp.y = y;
    tmp.z = z;
    tmp.w = w;
  }
  else
  {
    x = src2->x;
    y = src2->y;
    z = src2->z;
    w = src2->w;
  }
  dst->x = (((x * src1->m[0][0]) + (y * src1->m[0][1])) + (z * src1->m[0][2])) + (w * src1->m[0][3]);
  dst->y = (((src1->m[1][0] * src2->x) + (src1->m[1][1] * src2->y)) + (src1->m[1][2] * src2->z))
         + (src1->m[1][3] * src2->w);
  dst->z = (((src1->m[2][0] * src2->x) + (src1->m[2][1] * src2->y)) + (src1->m[2][2] * src2->z))
         + (src1->m[2][3] * src2->w);
  dst->w = (((src1->m[3][0] * src2->x) + (src1->m[3][1] * src2->y)) + (src1->m[3][2] * src2->z))
         + (src1->m[3][3] * src2->w);
}


// Vector4DMultiplyPosition  (line 784, @0x00000000030effb0, libserver.so)
void __fastcall Vector4DMultiplyPosition(const VMatrix *const src1, const Vector *const src2, Vector4D *const dst)
{
  float x; // xmm0_4
  float y; // xmm3_4
  float z; // xmm2_4

  if ( dst == src2 )
  {
    z = 0.0;
    y = 0.0;
    x = 0.0;
  }
  else
  {
    x = src2->x;
    y = src2->y;
    z = src2->z;
  }
  dst->x = (((src1->m[0][0] * x) + (src1->m[0][1] * y)) + (src1->m[0][2] * z)) + src1->m[0][3];
  dst->y = (((src1->m[1][0] * x) + (src1->m[1][1] * y)) + (src1->m[1][2] * z)) + src1->m[1][3];
  dst->z = (((src1->m[2][0] * x) + (src1->m[2][1] * y)) + (src1->m[2][2] * z)) + src1->m[2][3];
  dst->w = (((x * src1->m[3][0]) + (y * src1->m[3][1])) + (z * src1->m[3][2])) + src1->m[3][3];
}


// Vector3DMultiply  (line 807, @0x00000000030f0090, libserver.so)
// callers: CBaseCombatCharacter::ThrowDirForWeaponStrip, MatrixInverseTR, MatrixTransformPlane, VMatrix::operator*
void __fastcall Vector3DMultiply(const VMatrix *const src1, const Vector *const src2, Vector *const dst)
{
  float x; // xmm0_4
  float y; // xmm3_4
  float z; // xmm2_4

  if ( src2 == dst )
  {
    z = 0.0;
    y = 0.0;
    x = 0.0;
  }
  else
  {
    x = src2->x;
    y = src2->y;
    z = src2->z;
  }
  dst->x = ((src1->m[0][0] * x) + (src1->m[0][1] * y)) + (src1->m[0][2] * z);
  dst->y = ((src1->m[1][0] * x) + (src1->m[1][1] * y)) + (src1->m[1][2] * z);
  dst->z = ((x * src1->m[2][0]) + (y * src1->m[2][1])) + (z * src1->m[2][2]);
}


// Vector3DMultiplyPositionProjective  (line 828, @0x00000000030f0260, libserver.so)  // inlines: operator*=
// callers: CalculateAABBFromProjectionMatrixInverse, CalculateSphereFromProjectionMatrixInverse, FrustumPlanesFromMatrix, ComputeScreenSpacePosition, CFrustum::ViewToWorld, CFrustum::WorldToView, CFrustum::BuildRay
void __fastcall Vector3DMultiplyPositionProjective(
        const VMatrix *const src1,
        const Vector *const src2,
        Vector *const dst)
{
  float x; // xmm1_4
  float y; // xmm5_4
  float z; // xmm4_4
  float v6; // xmm0_4
  vec_t v7; // xmm3_4
  vec_t v8; // xmm2_4
  float v9; // xmm1_4

  if ( src2 == dst )
  {
    z = 0.0;
    y = 0.0;
    x = 0.0;
  }
  else
  {
    x = src2->x;
    y = src2->y;
    z = src2->z;
  }
  v6 = (((src1->m[3][0] * x) + (src1->m[3][1] * y)) + (src1->m[3][2] * z)) + src1->m[3][3];
  if ( v6 != 0.0 )
    v6 = 1.0 / v6;
  v7 = (((src1->m[0][0] * x) + (src1->m[0][1] * y)) + (src1->m[0][2] * z)) + src1->m[0][3];
  dst->x = v7;
  v8 = (((src1->m[1][0] * x) + (src1->m[1][1] * y)) + (src1->m[1][2] * z)) + src1->m[1][3];
  dst->y = v8;
  v9 = (((x * src1->m[2][0]) + (y * src1->m[2][1])) + (z * src1->m[2][2])) + src1->m[2][3];
  dst->x = v7 * v6;
  dst->y = v8 * v6;
  dst->z = v9 * v6;
}


// Vector3DMultiplyProjective  (line 855, @0x00000000030f0370, libserver.so)  // inlines: operator/=, operator=
void __fastcall Vector3DMultiplyProjective(const VMatrix *const src1, const Vector *const src2, Vector *const dst)
{
  float x; // xmm3_4
  float y; // xmm5_4
  float z; // xmm4_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm0_4

  if ( src2 == dst )
  {
    z = 0.0;
    y = 0.0;
    x = 0.0;
  }
  else
  {
    x = src2->x;
    y = src2->y;
    z = src2->z;
  }
  v6 = ((src1->m[0][0] * x) + (src1->m[0][1] * y)) + (src1->m[0][2] * z);
  dst->x = v6;
  v7 = ((src1->m[1][0] * x) + (src1->m[1][1] * y)) + (src1->m[1][2] * z);
  dst->y = v7;
  v8 = ((src1->m[2][0] * x) + (src1->m[2][1] * y)) + (src1->m[2][2] * z);
  dst->z = v8;
  v9 = ((x * src1->m[3][0]) + (y * src1->m[3][1])) + (z * src1->m[3][2]);
  if ( v9 == 0.0 )
  {
    dst->x = vec3_origin.x;
    dst->y = vec3_origin.y;
    v10 = vec3_origin.z;
  }
  else
  {
    v10 = v8 * (1.0 / v9);
    dst->x = v6 * (1.0 / v9);
    dst->y = v7 * (1.0 / v9);
  }
  dst->z = v10;
}


// Vector4DMultiplyTranspose  (line 884, @0x00000000030f0490, libserver.so)  // inlines: Vector4DCopy
void __fastcall Vector4DMultiplyTranspose(const VMatrix *const src1, const Vector4D *const src2, Vector4D *const dst)
{
  float x; // xmm0_4
  float y; // xmm3_4
  float z; // xmm2_4
  float w; // xmm1_4
  Vector4D tmp; // [rsp+0h] [rbp-10h] BYREF

  if ( src2 == dst )
  {
    x = dst->x;
    src2 = &tmp;
    y = dst->y;
    z = dst->z;
    tmp.x = dst->x;
    w = dst->w;
    tmp.y = y;
    tmp.z = z;
    tmp.w = w;
  }
  else
  {
    x = src2->x;
    y = src2->y;
    z = src2->z;
    w = src2->w;
  }
  dst->x = (((x * src1->m[0][0]) + (y * src1->m[1][0])) + (z * src1->m[2][0])) + (w * src1->m[3][0]);
  dst->y = (((src1->m[0][1] * src2->x) + (src1->m[1][1] * src2->y)) + (src1->m[2][1] * src2->z))
         + (src1->m[3][1] * src2->w);
  dst->z = (((src1->m[0][2] * src2->x) + (src1->m[1][2] * src2->y)) + (src1->m[2][2] * src2->z))
         + (src1->m[3][2] * src2->w);
  dst->w = (((src1->m[0][3] * src2->x) + (src1->m[1][3] * src2->y)) + (src1->m[2][3] * src2->z))
         + (src1->m[3][3] * src2->w);
}


// Vector3DMultiplyTranspose  (line 906, @0x00000000030f05b0, libserver.so)
void __fastcall Vector3DMultiplyTranspose(const VMatrix *const src1, const Vector *const src2, Vector *const dst)
{
  float x; // xmm0_4
  float y; // xmm3_4
  float z; // xmm2_4

  if ( src2 == dst )
  {
    z = 0.0;
    y = 0.0;
    x = 0.0;
  }
  else
  {
    x = src2->x;
    y = src2->y;
    z = src2->z;
  }
  dst->x = ((src1->m[0][0] * x) + (src1->m[1][0] * y)) + (src1->m[2][0] * z);
  dst->y = ((src1->m[0][1] * x) + (src1->m[1][1] * y)) + (src1->m[2][1] * z);
  dst->z = ((x * src1->m[0][2]) + (y * src1->m[1][2])) + (z * src1->m[2][2]);
}


// MatrixTransformPlane  (line 928, @0x00000000030f0650, libserver.so)  // inlines: DotProduct
// calls: Vector3DMultiply
void __fastcall MatrixTransformPlane(const VMatrix *const src, const cplane_t *const inPlane, cplane_t *const outPlane)
{
  float x; // xmm1_4
  float y; // xmm3_4
  float z; // xmm2_4
  float v9; // xmm0_4

  Vector3DMultiply(src, &inPlane->normal, &outPlane->normal);
  x = outPlane->normal.x;
  y = outPlane->normal.y;
  z = outPlane->normal.z;
  v9 = (((x * x) + (y * y)) + (z * z)) * inPlane->dist;
  outPlane->dist = v9;
  outPlane->dist = (((x * src->m[0][3]) + (y * src->m[1][3])) + (z * src->m[2][3])) + v9;
}


// VMatrix::operator*  (line 954, @0x00000000030f06d0, libserver.so)  // inlines: DotProduct, TransformPlane
// calls: Vector3DMultiply
VPlane __fastcall VMatrix::operator*(const VMatrix *const this, const VPlane *const thePlane)
{
  VPlane ret; // [rsp+10h] [rbp-30h] BYREF
  VPlane result; // 0:xmm0_8.8,8:xmm1_8.8

  Vector3DMultiply(this, &thePlane->m_Normal, &ret.m_Normal);
  ret.m_Dist = ((((ret.m_Normal.x * ret.m_Normal.x) + (ret.m_Normal.y * ret.m_Normal.y))
               + (ret.m_Normal.z * ret.m_Normal.z))
              * thePlane->m_Dist)
             + (((ret.m_Normal.x * this->m[0][3]) + (ret.m_Normal.y * this->m[1][3])) + (ret.m_Normal.z * this->m[2][3]));
  *&result.m_Normal.x = *&ret.m_Normal.x;
  *&result.m_Normal.z = *&ret.m_Normal.z;
  return result;
}


// MatrixBuildTranslation  (line 967, @0x00000000030f0750, libserver.so)  // inlines: MatrixSetIdentity
// callers: CFrustum::BuildShadowFrustum
void __fastcall MatrixBuildTranslation(VMatrix *const dst, float a2, float x, float y, float z)
{
  *&dst->m[0][0] = 1065353216;
  dst->m[0][2] = 0.0;
  dst->m[1][0] = 0.0;
  *&dst->m[1][1] = 1065353216;
  *&dst->m[2][0] = 0;
  dst->m[2][2] = 1.0;
  *&dst->m[3][0] = 0;
  dst->m[3][2] = 0.0;
  dst->m[3][3] = 1.0;
  dst->m[0][3] = a2;
  dst->m[1][3] = x;
  dst->m[2][3] = y;
}


// MatrixBuildTranslation  (line 975, @0x00000000030f07b0, libserver.so)  // inlines: MatrixSetIdentity, operator[]
// callers: ComputeViewMatrices
void __fastcall MatrixBuildTranslation(VMatrix *const dst, const Vector *const translation)
{
  dst->m[0][3] = 0.0;
  dst->m[1][3] = 0.0;
  dst->m[2][3] = 0.0;
  *&dst->m[0][0] = 1065353216;
  dst->m[0][2] = 0.0;
  dst->m[1][0] = 0.0;
  *&dst->m[1][1] = 1065353216;
  *&dst->m[2][0] = 0;
  dst->m[2][2] = 1.0;
  *&dst->m[3][0] = 0;
  dst->m[3][2] = 0.0;
  dst->m[3][3] = 1.0;
  dst->m[0][3] = translation->x;
  dst->m[1][3] = translation->y;
  dst->m[2][3] = translation->z;
}


// MatrixBuildRotationAboutAxis  (line 995, @0x00000000030f0830, libserver.so)
// calls: MatrixBuildRotationAboutAxis
// callers: ComputeViewMatrices, CVGuiScreen::Spawn, ComputeViewMatrix
void __fastcall MatrixBuildRotationAboutAxis(
        matrix3x4_t *dst,
        const Vector *const vAxisOfRot,
        float a3,
        float angleDegrees)
{
  MatrixBuildRotationAboutAxis(vAxisOfRot, a3, angleDegrees, dst);
  dst[1].m_flMatVal[0][3] = 1.0;
  dst[1].m_flMatVal[0][0] = 0.0;
  dst[1].m_flMatVal[0][1] = 0.0;
  dst[1].m_flMatVal[0][2] = 0.0;
}


// MatrixBuildRotation  (line 1008, @0x00000000030f0870, libserver.so)  // inlines: CrossProduct, DotProduct, FloatMakePositive, Init, MatrixBuildRotationAboutAxis, MatrixSetIdentity, VectorMA, operator[]
// calls: VectorNormalize, MatrixBuildRotationAboutAxis, V_acos
void __fastcall MatrixBuildRotation(
        VMatrix *const dst,
        const Vector *const initialDirection,
        const Vector *const finalDirection)
{
  float x; // xmm6_4
  float y; // xmm5_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float z; // xmm7_4
  float v9; // xmm3_4
  double v10; // xmm4_8
  __int64 v11; // rax
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  double v15; // [rsp+8h] [rbp-28h]
  Vector axis; // [rsp+10h] [rbp-20h] BYREF

  x = initialDirection->x;
  y = initialDirection->y;
  v6 = finalDirection->x;
  v7 = finalDirection->y;
  z = initialDirection->z;
  v9 = finalDirection->z;
  v10 = (((initialDirection->x * finalDirection->x) + (y * v7)) + (z * v9));
  if ( v10 - 1.0 > -0.001 )
  {
    *&dst->m[0][0] = 0x3F800000u;
    dst->m[1][0] = 0.0;
    *&dst->m[1][1] = 1065353216;
    dst->m[1][3] = 0.0;
    *&dst->m[2][0] = 0;
    *&dst->m[2][2] = 1065353216;
    *&dst->m[3][0] = 0;
    dst->m[3][2] = 0.0;
    dst->m[3][3] = 1.0;
  }
  else
  {
    if ( v10 + 1.0 >= 0.001 )
    {
      v15 = (((initialDirection->x * v6) + (initialDirection->y * v7)) + (initialDirection->z * v9));
      axis.x = (y * v9) - (v7 * z);
      axis.y = (z * v6) - (v9 * x);
      axis.z = (v7 * x) - (v6 * y);
      VectorNormalize(&axis);
      v14 = V_acos(v15) * 180.0 / 3.141592653589793;
    }
    else
    {
      axis.x = 0.0;
      axis.y = 0.0;
      axis.z = 0.0;
      v11 = 4LL * (fabs(v6) > fabs(v7));
      if ( fabs(*(&finalDirection->x + v11)) > fabs(v9) )
        v11 = 8;
      *(&axis.x + v11) = 1.0;
      v12 = -(((v6 * axis.x) + (v7 * axis.y)) + (v9 * axis.z));
      axis.x = (v6 * v12) + axis.x;
      axis.y = (v7 * v12) + axis.y;
      axis.z = (v12 * v9) + axis.z;
      VectorNormalize(&axis);
      v14 = 180.0;
    }
    MatrixBuildRotationAboutAxis(&axis, v14, v13, dst);
    dst->m[3][0] = 0.0;
    dst->m[3][1] = 0.0;
    dst->m[3][2] = 0.0;
    dst->m[3][3] = 1.0;
  }
}


// MatrixBuildRotateZ  (line 1060, @0x00000000030f0af0, libserver.so)  // inlines: SinCos
// calls: sincosf
// callers: CBaseCombatCharacter::ThrowDirForWeaponStrip, CC_Ent_Rotate, CVGuiScreen::Spawn
void __fastcall MatrixBuildRotateZ(VMatrix *const dst, float a2, float angleDegrees)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // [rsp-18h] [rbp-20h] BYREF
  float v8; // [rsp-14h] [rbp-1Ch] BYREF

  v4 = a2 * 0.0174532925199433;
  sincosf(v4, &v8, &v7);
  v5 = v7;
  v6 = v8;
  dst->m[0][0] = v7;
  dst->m[1][1] = v5;
  dst->m[1][0] = v6;
  dst->m[0][1] = -v6;
  dst->m[2][2] = 1.0;
  dst->m[0][2] = 0.0;
  dst->m[0][3] = 0.0;
  dst->m[1][2] = 0.0;
  dst->m[1][3] = 0.0;
  dst->m[2][0] = 0.0;
  dst->m[2][1] = 0.0;
  dst->m[2][3] = 0.0;
  dst->m[3][0] = 0.0;
  dst->m[3][1] = 0.0;
  dst->m[3][2] = 0.0;
  dst->m[3][3] = 1.0;
}


// MatrixBuildScale  (line 1075, @0x00000000030f0ba0, libserver.so)
void __fastcall MatrixBuildScale(VMatrix *const dst, float a2, float x, float y, float z)
{
  dst->m[0][0] = a2;
  dst->m[1][1] = x;
  *&dst->m[0][1] = 0;
  dst->m[0][3] = 0.0;
  dst->m[1][0] = 0.0;
  *&dst->m[1][2] = 0;
  *&dst->m[2][0] = 0;
  *&dst->m[2][2] = LODWORD(y);
  *&dst->m[3][0] = 0;
  dst->m[3][2] = 0.0;
  dst->m[3][3] = 1.0;
}


// MatrixBuildScale  (line 1083, @0x00000000030f0c00, libserver.so)  // inlines: MatrixBuildScale
void __fastcall MatrixBuildScale(VMatrix *const dst, const Vector *const scale)
{
  vec_t z; // xmm1_4
  vec_t y; // xmm2_4

  z = scale->z;
  y = scale->y;
  dst->m[0][0] = scale->x;
  dst->m[2][2] = z;
  *&dst->m[0][1] = 0;
  dst->m[0][3] = 0.0;
  dst->m[1][0] = 0.0;
  *&dst->m[1][1] = LODWORD(y);
  dst->m[1][3] = 0.0;
  *&dst->m[2][0] = 0;
  dst->m[2][3] = 0.0;
  *&dst->m[3][0] = 0;
  dst->m[3][2] = 0.0;
  dst->m[3][3] = 1.0;
}


// MatrixBuildPerspective  (line 1088, @0x00000000030f0c70, libserver.so)  // inlines: Identity, MatrixSetIdentity, memset
// calls: V_tan, MatrixMultiply
void __fastcall MatrixBuildPerspective(VMatrix *const dst, float a2, float fovX, float fovY, float zNear, float zFar)
{
  double v7; // xmm0_8
  float v8; // xmm1_4
  float v12; // [rsp+Ch] [rbp-ECh]
  double v13; // [rsp+10h] [rbp-E8h]
  double v14; // [rsp+18h] [rbp-E0h]
  VMatrix negateXY; // [rsp+20h] [rbp-D8h] BYREF
  VMatrix addW; // [rsp+60h] [rbp-98h] BYREF
  VMatrix scaleHalf; // [rsp+A0h] [rbp-58h] BYREF

  v12 = fovY + fovY;
  v13 = (fovY + fovY);
  v14 = V_tan(a2 * 0.0174532925199433 * 0.5);
  v7 = V_tan(fovX * 0.0174532925199433 * 0.5);
  memset(dst, 0, sizeof(VMatrix));
  v8 = v7 * v13;
  *&v7 = v14 * v13;
  dst->m[3][2] = 1.0;
  negateXY.m[2][2] = 1.0;
  negateXY.m[3][3] = 1.0;
  dst->m[1][1] = v12 / v8;
  dst->m[0][0] = v12 / *&v7;
  dst->m[2][3] = (fovY * zNear) / (fovY - zNear);
  negateXY.m[0][0] = -1.0;
  negateXY.m[1][1] = -1.0;
  dst->m[2][2] = -zNear / (fovY - zNear);
  *&negateXY.m[0][1] = 0;
  negateXY.m[0][3] = 0.0;
  negateXY.m[1][0] = 0.0;
  *&negateXY.m[1][2] = 0;
  *&negateXY.m[2][0] = 0;
  negateXY.m[2][3] = 0.0;
  *&negateXY.m[3][0] = 0;
  negateXY.m[3][2] = 0.0;
  MatrixMultiply(&negateXY, dst, dst);
  *&addW.m[0][0] = 1065353216;
  *&addW.m[0][2] = 0x3F80000000000000LL;
  *&addW.m[1][0] = 0x3F80000000000000LL;
  *&addW.m[1][2] = 0x3F80000000000000LL;
  *&addW.m[2][0] = 0;
  *&addW.m[2][2] = 1065353216;
  *&addW.m[3][0] = 0;
  *&addW.m[3][2] = 0x3F80000000000000LL;
  MatrixMultiply(&addW, dst, dst);
  scaleHalf.m[1][0] = 0.0;
  scaleHalf.m[1][3] = 0.0;
  *&scaleHalf.m[2][0] = 0;
  *&scaleHalf.m[3][0] = 0;
  *&scaleHalf.m[3][2] = 0x3F80000000000000LL;
  *&scaleHalf.m[2][2] = 1065353216;
  *&scaleHalf.m[0][0] = 0x3F000000u;
  *&scaleHalf.m[1][1] = 1056964608;
  MatrixMultiply(&scaleHalf, dst, dst);
}


// CalculateAABBFromProjectionMatrixInverse  (line 1143, @0x00000000030f0f50, libserver.so)  // inlines: CalculateAABBForNormalizedFrustum_Helper, Vector
// calls: ClearBounds, Vector3DMultiplyPositionProjective, AddPointToBounds
// callers: CalculateAABBFromProjectionMatrix
void __fastcall CalculateAABBFromProjectionMatrixInverse(
        const VMatrix *const volumeToWorld,
        Vector *pMins,
        Vector *pMaxs)
{
  Vector src2; // [rsp+0h] [rbp-50h] BYREF
  Vector dst; // [rsp+10h] [rbp-40h] BYREF

  ClearBounds(pMins, pMaxs);
  src2.x = 0.0;
  src2.y = 0.0;
  src2.z = 0.0;
  Vector3DMultiplyPositionProjective(volumeToWorld, &src2, &dst);
  AddPointToBounds(&dst, pMins, pMaxs);
  src2.x = 0.0;
  src2.y = 0.0;
  src2.z = 1.0;
  Vector3DMultiplyPositionProjective(volumeToWorld, &src2, &dst);
  AddPointToBounds(&dst, pMins, pMaxs);
  src2.x = 0.0;
  src2.y = 1.0;
  src2.z = 0.0;
  Vector3DMultiplyPositionProjective(volumeToWorld, &src2, &dst);
  AddPointToBounds(&dst, pMins, pMaxs);
  src2.x = 0.0;
  src2.y = 1.0;
  src2.z = 1.0;
  Vector3DMultiplyPositionProjective(volumeToWorld, &src2, &dst);
  AddPointToBounds(&dst, pMins, pMaxs);
  src2.x = 1.0;
  src2.y = 0.0;
  src2.z = 0.0;
  Vector3DMultiplyPositionProjective(volumeToWorld, &src2, &dst);
  AddPointToBounds(&dst, pMins, pMaxs);
  src2.x = 1.0;
  src2.y = 0.0;
  src2.z = 1.0;
  Vector3DMultiplyPositionProjective(volumeToWorld, &src2, &dst);
  AddPointToBounds(&dst, pMins, pMaxs);
  src2.x = 1.0;
  src2.y = 1.0;
  src2.z = 0.0;
  Vector3DMultiplyPositionProjective(volumeToWorld, &src2, &dst);
  AddPointToBounds(&dst, pMins, pMaxs);
  src2.x = 1.0;
  src2.y = 1.0;
  src2.z = 1.0;
  Vector3DMultiplyPositionProjective(volumeToWorld, &src2, &dst);
  AddPointToBounds(&dst, pMins, pMaxs);
}


// CalculateAABBFromProjectionMatrix  (line 1157, @0x00000000030f1120, libserver.so)
// calls: MatrixInverseGeneral, CalculateAABBFromProjectionMatrixInverse
void __fastcall CalculateAABBFromProjectionMatrix(const VMatrix *const worldToVolume, Vector *pMins, Vector *pMaxs)
{
  VMatrix volumeToWorld; // [rsp+0h] [rbp-60h] BYREF

  MatrixInverseGeneral(worldToVolume, &volumeToWorld);
  CalculateAABBFromProjectionMatrixInverse(&volumeToWorld, pMins, pMaxs);
}


// CalculateSphereFromProjectionMatrixInverse  (line 1168, @0x00000000030f1160, libserver.so)  // inlines: DistToSqr, FastSqrt, Length, LengthSqr, Vector, VectorLength, VectorMA, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: Vector3DMultiplyPositionProjective, sqrtf
// callers: CalculateSphereFromProjectionMatrix
void __fastcall CalculateSphereFromProjectionMatrixInverse(
        const VMatrix *const volumeToWorld,
        Vector *pCenter,
        float *pflRadius)
{
  float v6; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  vec_t v9; // xmm10_4
  vec_t v10; // xmm2_4
  Vector vecCenterNear; // [rsp+10h] [rbp-70h] BYREF
  Vector vecCenterFar; // [rsp+20h] [rbp-60h] BYREF
  Vector vecNearEdge; // [rsp+30h] [rbp-50h] BYREF
  Vector vecFarEdge; // [rsp+40h] [rbp-40h] BYREF
  Vector src2; // [rsp+50h] [rbp-30h] BYREF

  src2.x = 0.5;
  src2.y = 0.5;
  src2.z = 0.0;
  Vector3DMultiplyPositionProjective(volumeToWorld, &src2, &vecCenterNear);
  src2.x = 0.5;
  src2.y = 0.5;
  src2.z = 1.0;
  Vector3DMultiplyPositionProjective(volumeToWorld, &src2, &vecCenterFar);
  src2.x = 0.0;
  src2.y = 0.0;
  src2.z = 0.0;
  Vector3DMultiplyPositionProjective(volumeToWorld, &src2, &vecNearEdge);
  src2.x = 0.0;
  src2.y = 0.0;
  src2.z = 1.0;
  Vector3DMultiplyPositionProjective(volumeToWorld, &src2, &vecFarEdge);
  v6 = fsqrt(
         (((vecCenterFar.x - vecCenterNear.x) * (vecCenterFar.x - vecCenterNear.x))
        + ((vecCenterFar.y - vecCenterNear.y) * (vecCenterFar.y - vecCenterNear.y)))
       + ((vecCenterFar.z - vecCenterNear.z) * (vecCenterFar.z - vecCenterNear.z)));
  v7 = (((vecCenterNear.x - vecNearEdge.x) * (vecCenterNear.x - vecNearEdge.x))
      + ((vecCenterNear.y - vecNearEdge.y) * (vecCenterNear.y - vecNearEdge.y)))
     + ((vecCenterNear.z - vecNearEdge.z) * (vecCenterNear.z - vecNearEdge.z));
  v8 = (((v6 * v6)
       + ((((vecCenterFar.x - vecFarEdge.x) * (vecCenterFar.x - vecFarEdge.x))
         + ((vecCenterFar.y - vecFarEdge.y) * (vecCenterFar.y - vecFarEdge.y)))
        + ((vecCenterFar.z - vecFarEdge.z) * (vecCenterFar.z - vecFarEdge.z))))
      - v7)
     / (v6 + v6);
  v9 = ((vecCenterFar.y - vecCenterNear.y) * (v8 / v6)) + vecCenterNear.y;
  v10 = ((v8 / v6) * (vecCenterFar.z - vecCenterNear.z)) + vecCenterNear.z;
  pCenter->x = ((vecCenterFar.x - vecCenterNear.x) * (v8 / v6)) + vecCenterNear.x;
  pCenter->y = v9;
  pCenter->z = v10;
  *pflRadius = fsqrt((v8 * v8) + v7);
}


// CalculateSphereFromProjectionMatrix  (line 1206, @0x00000000030f1350, libserver.so)
// calls: MatrixInverseGeneral, CalculateSphereFromProjectionMatrixInverse
void __fastcall CalculateSphereFromProjectionMatrix(
        const VMatrix *const worldToVolume,
        Vector *pCenter,
        float *pflRadius)
{
  VMatrix volumeToWorld; // [rsp+0h] [rbp-60h] BYREF

  MatrixInverseGeneral(worldToVolume, &volumeToWorld);
  CalculateSphereFromProjectionMatrixInverse(&volumeToWorld, pCenter, pflRadius);
}


// FrustumPlanesFromMatrix  (line 1230, @0x00000000030f1390, libserver.so)  // inlines: CrossProduct, DotProduct, FrustumPlanesFromMatrixHelper, Vector, VectorSubtract
// calls: Vector3DMultiplyPositionProjective, VectorNormalize, Frustum_t::SetPlanes
void __fastcall FrustumPlanesFromMatrix(const VMatrix *const clipToWorld, Frustum_t *const frustum)
{
  Vector v4; // [rsp+20h] [rbp-F8h] BYREF
  Vector v5; // [rsp+30h] [rbp-E8h] BYREF
  Vector v6; // [rsp+40h] [rbp-D8h] BYREF
  Vector v7; // [rsp+50h] [rbp-C8h] BYREF
  Vector v8; // [rsp+60h] [rbp-B8h] BYREF
  Vector v9; // [rsp+70h] [rbp-A8h] BYREF
  VPlane planes[6]; // [rsp+80h] [rbp-98h] BYREF

  v6.x = 0.0;
  *&v6.y = 1065353216;
  v5.x = 1.0;
  v5.y = 0.0;
  v5.z = 0.0;
  v4.x = 0.0;
  v4.y = 0.0;
  v4.z = 0.0;
  Vector3DMultiplyPositionProjective(clipToWorld, &v4, &v7);
  Vector3DMultiplyPositionProjective(clipToWorld, &v5, &v8);
  Vector3DMultiplyPositionProjective(clipToWorld, &v6, &v9);
  planes[4].m_Normal.x = ((v8.y - v7.y) * (v9.z - v7.z)) - ((v8.z - v7.z) * (v9.y - v7.y));
  planes[4].m_Normal.y = ((v8.z - v7.z) * (v9.x - v7.x)) - ((v9.z - v7.z) * (v8.x - v7.x));
  planes[4].m_Normal.z = ((v9.y - v7.y) * (v8.x - v7.x)) - ((v9.x - v7.x) * (v8.y - v7.y));
  VectorNormalize(&planes[4].m_Normal);
  v6.x = 1.0;
  v6.y = 0.0;
  v6.z = 1.0;
  v5.x = 0.0;
  v5.y = 1.0;
  v5.z = 1.0;
  v4.x = 0.0;
  v4.y = 0.0;
  v4.z = 1.0;
  planes[4].m_Dist = ((planes[4].m_Normal.x * v7.x) + (planes[4].m_Normal.y * v7.y)) + (planes[4].m_Normal.z * v7.z);
  Vector3DMultiplyPositionProjective(clipToWorld, &v4, &v7);
  Vector3DMultiplyPositionProjective(clipToWorld, &v5, &v8);
  Vector3DMultiplyPositionProjective(clipToWorld, &v6, &v9);
  planes[5].m_Normal.x = ((v8.y - v7.y) * (v9.z - v7.z)) - ((v8.z - v7.z) * (v9.y - v7.y));
  planes[5].m_Normal.y = ((v8.z - v7.z) * (v9.x - v7.x)) - ((v9.z - v7.z) * (v8.x - v7.x));
  planes[5].m_Normal.z = ((v9.y - v7.y) * (v8.x - v7.x)) - ((v9.x - v7.x) * (v8.y - v7.y));
  VectorNormalize(&planes[5].m_Normal);
  v6.x = 1.0;
  v6.y = 1.0;
  v6.z = 0.0;
  v5.x = 1.0;
  v5.y = 1.0;
  v5.z = 1.0;
  v4.x = 1.0;
  v4.y = 0.0;
  v4.z = 0.0;
  planes[5].m_Dist = ((planes[5].m_Normal.x * v7.x) + (planes[5].m_Normal.y * v7.y)) + (planes[5].m_Normal.z * v7.z);
  Vector3DMultiplyPositionProjective(clipToWorld, &v4, &v7);
  Vector3DMultiplyPositionProjective(clipToWorld, &v5, &v8);
  Vector3DMultiplyPositionProjective(clipToWorld, &v6, &v9);
  planes[0].m_Normal.x = ((v8.y - v7.y) * (v9.z - v7.z)) - ((v8.z - v7.z) * (v9.y - v7.y));
  planes[0].m_Normal.y = ((v8.z - v7.z) * (v9.x - v7.x)) - ((v9.z - v7.z) * (v8.x - v7.x));
  planes[0].m_Normal.z = ((v9.y - v7.y) * (v8.x - v7.x)) - ((v9.x - v7.x) * (v8.y - v7.y));
  VectorNormalize(&planes[0].m_Normal);
  v6.x = 0.0;
  v6.y = 0.0;
  v6.z = 1.0;
  v5.x = 0.0;
  v5.y = 1.0;
  v5.z = 1.0;
  v4.x = 0.0;
  v4.y = 0.0;
  v4.z = 0.0;
  planes[0].m_Dist = ((planes[0].m_Normal.x * v7.x) + (planes[0].m_Normal.y * v7.y)) + (planes[0].m_Normal.z * v7.z);
  Vector3DMultiplyPositionProjective(clipToWorld, &v4, &v7);
  Vector3DMultiplyPositionProjective(clipToWorld, &v5, &v8);
  Vector3DMultiplyPositionProjective(clipToWorld, &v6, &v9);
  planes[1].m_Normal.x = ((v8.y - v7.y) * (v9.z - v7.z)) - ((v8.z - v7.z) * (v9.y - v7.y));
  planes[1].m_Normal.y = ((v8.z - v7.z) * (v9.x - v7.x)) - ((v9.z - v7.z) * (v8.x - v7.x));
  planes[1].m_Normal.z = ((v9.y - v7.y) * (v8.x - v7.x)) - ((v9.x - v7.x) * (v8.y - v7.y));
  VectorNormalize(&planes[1].m_Normal);
  v6.y = 1.0;
  v6.x = 0.0;
  v6.z = 1.0;
  v5.x = 1.0;
  v5.y = 1.0;
  v5.z = 1.0;
  v4.x = 1.0;
  v4.y = 1.0;
  v4.z = 0.0;
  planes[1].m_Dist = ((planes[1].m_Normal.x * v7.x) + (planes[1].m_Normal.y * v7.y)) + (planes[1].m_Normal.z * v7.z);
  Vector3DMultiplyPositionProjective(clipToWorld, &v4, &v7);
  Vector3DMultiplyPositionProjective(clipToWorld, &v5, &v8);
  Vector3DMultiplyPositionProjective(clipToWorld, &v6, &v9);
  planes[2].m_Normal.x = ((v8.y - v7.y) * (v9.z - v7.z)) - ((v8.z - v7.z) * (v9.y - v7.y));
  planes[2].m_Normal.y = ((v8.z - v7.z) * (v9.x - v7.x)) - ((v9.z - v7.z) * (v8.x - v7.x));
  planes[2].m_Normal.z = ((v9.y - v7.y) * (v8.x - v7.x)) - ((v9.x - v7.x) * (v8.y - v7.y));
  VectorNormalize(&planes[2].m_Normal);
  v6.y = 0.0;
  v6.x = 1.0;
  v6.z = 1.0;
  v5.x = 0.0;
  v5.y = 0.0;
  v5.z = 1.0;
  v4.x = 1.0;
  v4.y = 0.0;
  v4.z = 0.0;
  planes[2].m_Dist = ((planes[2].m_Normal.x * v7.x) + (planes[2].m_Normal.y * v7.y)) + (planes[2].m_Normal.z * v7.z);
  Vector3DMultiplyPositionProjective(clipToWorld, &v4, &v7);
  Vector3DMultiplyPositionProjective(clipToWorld, &v5, &v8);
  Vector3DMultiplyPositionProjective(clipToWorld, &v6, &v9);
  planes[3].m_Normal.x = ((v8.y - v7.y) * (v9.z - v7.z)) - ((v8.z - v7.z) * (v9.y - v7.y));
  planes[3].m_Normal.y = ((v8.z - v7.z) * (v9.x - v7.x)) - ((v9.z - v7.z) * (v8.x - v7.x));
  planes[3].m_Normal.z = ((v9.y - v7.y) * (v8.x - v7.x)) - ((v9.x - v7.x) * (v8.y - v7.y));
  VectorNormalize(&planes[3].m_Normal);
  planes[3].m_Dist = ((planes[3].m_Normal.x * v7.x) + (planes[3].m_Normal.y * v7.y)) + (planes[3].m_Normal.z * v7.z);
  Frustum_t::SetPlanes(frustum, planes);
}


// MatrixBuildOrtho  (line 1255, @0x00000000030f1ce0, libserver.so)  // inlines: Init
// callers: ComputeViewMatrices
void __fastcall MatrixBuildOrtho(
        VMatrix *const dst,
        __m128 a2,
        double left,
        double top,
        __m128 right,
        double bottom,
        double zNear,
        double zFar)
{
  __m128d v8; // xmm8
  float v9; // xmm6_4
  __m128d v10; // xmm6
  __m128d v11; // xmm0
  float v12; // xmm2_4
  double v13; // xmm3_8
  __m128d v14; // xmm0

  v8 = 0x4000000000000000uLL;
  dst->m[3][3] = 1.0;
  *&dst->m[0][1] = 0;
  dst->m[1][0] = 0.0;
  dst->m[1][2] = 0.0;
  *&dst->m[2][0] = 0;
  *&dst->m[3][0] = 0;
  dst->m[3][2] = 0.0;
  v9 = 2.0 / (top - *a2.m128_u64);
  dst->m[0][0] = v9;
  *&v10.m128d_f64[1] = a2.m128_u64[1];
  v10.m128d_f64[0] = (*a2.m128_u64 + top) / (*a2.m128_u64 - top);
  dst->m[2][3] = bottom / (bottom - zNear);
  v8.m128d_f64[0] = 2.0 / (*right.m128_u64 - left);
  *&v11.m128d_f64[1] = right.m128_u64[1];
  v12 = _mm_movedup_pd(v10).m128d_f64[0];
  dst->m[0][3] = v12;
  v11.m128d_f64[0] = (*right.m128_u64 + left) / (left - *right.m128_u64);
  dst->m[1][1] = _mm_movedup_pd(v8).m128d_f64[0];
  v13 = _mm_movedup_pd(v11).m128d_f64[0];
  v14 = 0x3FF0000000000000uLL;
  dst->m[1][3] = v13;
  v14.m128d_f64[0] = 1.0 / (bottom - zNear);
  dst->m[2][2] = _mm_movedup_pd(v14).m128d_f64[0];
}


// MatrixBuildOrthoLH  (line 1288, @0x00000000030f1dd0, libserver.so)  // inlines: Init
void __fastcall MatrixBuildOrthoLH(
        VMatrix *const dst,
        __m128 a2,
        double left,
        double top,
        __m128 right,
        __m128d bottom,
        double zNear,
        double zFar)
{
  __m128d v8; // xmm8
  float v9; // xmm7_4
  __m128d v10; // xmm7
  __m128d v11; // xmm0
  float v12; // xmm2_4
  double v13; // xmm3_8
  __m128d v14; // xmm0

  v8 = 0x4000000000000000uLL;
  dst->m[3][3] = 1.0;
  *&dst->m[0][1] = 0;
  dst->m[1][0] = 0.0;
  dst->m[1][2] = 0.0;
  *&dst->m[2][0] = 0;
  *&dst->m[3][0] = 0;
  dst->m[3][2] = 0.0;
  v9 = 2.0 / (top - *a2.m128_u64);
  dst->m[0][0] = v9;
  *&v10.m128d_f64[1] = a2.m128_u64[1];
  v10.m128d_f64[0] = (*a2.m128_u64 + top) / (*a2.m128_u64 - top);
  v8.m128d_f64[0] = 2.0 / (*right.m128_u64 - left);
  *&v11.m128d_f64[1] = right.m128_u64[1];
  v12 = _mm_movedup_pd(v10).m128d_f64[0];
  dst->m[0][3] = v12;
  v11.m128d_f64[0] = (*right.m128_u64 + left) / (left - *right.m128_u64);
  dst->m[1][1] = _mm_movedup_pd(v8).m128d_f64[0];
  v13 = _mm_movedup_pd(v11).m128d_f64[0];
  v14 = 0x3FF0000000000000uLL;
  *&v13 = v13;
  dst->m[1][3] = *&v13;
  v14.m128d_f64[0] = 1.0 / (zNear - bottom.m128d_f64[0]);
  dst->m[2][2] = _mm_movedup_pd(v14).m128d_f64[0];
  bottom.m128d_f64[0] = bottom.m128d_f64[0] / (bottom.m128d_f64[0] - zNear);
  dst->m[2][3] = _mm_movedup_pd(bottom).m128d_f64[0];
}


// MatrixBuildPerspectiveX  (line 1298, @0x00000000030f1ed0, libserver.so)  // inlines: Init
// calls: V_tanf
// callers: ComputeViewMatrices
void __fastcall MatrixBuildPerspectiveX(
        VMatrix *const dst,
        double a2,
        double flFovX,
        double flAspect,
        double flZNear,
        double flZFar)
{
  float v7; // xmm0_4
  __m128d v8; // xmm5
  __m128d v9; // xmm2
  float v10; // xmm0_4
  double v11; // xmm0_8
  float v12; // xmm7_4
  float v13; // xmm7_4
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]

  *&v17 = flAspect + flAspect;
  v7 = V_tanf(a2 * 3.141592653589793 / 360.0);
  v8 = v17;
  dst->m[3][2] = -1.0;
  v9 = *&flAspect;
  v10 = v7 * *&v17;
  v11 = v10;
  v12 = _mm_movedup_pd(COERCE_UNSIGNED_INT64(*&v17 / v11)).m128d_f64[0];
  dst->m[0][1] = 0.0;
  dst->m[0][0] = v12;
  dst->m[0][2] = 0.0;
  dst->m[0][3] = 0.0;
  dst->m[1][0] = 0.0;
  dst->m[1][2] = 0.0;
  dst->m[1][3] = 0.0;
  dst->m[2][0] = 0.0;
  dst->m[2][1] = 0.0;
  dst->m[3][0] = 0.0;
  dst->m[3][1] = 0.0;
  dst->m[3][3] = 0.0;
  v9.m128d_f64[0] = flAspect * flZNear / (flAspect - flZNear);
  *&v11 = v11 / flFovX;
  v8.m128d_f64[0] = *&v17 / *&v11;
  dst->m[2][3] = _mm_movedup_pd(v9).m128d_f64[0];
  v13 = _mm_movedup_pd(v8).m128d_f64[0];
  dst->m[1][1] = v13;
  dst->m[2][2] = _mm_movedup_pd(COERCE_UNSIGNED_INT64(flZNear / (flAspect - flZNear))).m128d_f64[0];
}


// MatrixBuildPerspectiveOffCenterX  (line 1308, @0x00000000030f2000, libserver.so)  // inlines: Init
// calls: V_tanf
// callers: ComputeViewMatrices
void __fastcall MatrixBuildPerspectiveOffCenterX(
        VMatrix *const dst,
        double a2,
        double flFovX,
        double flAspect,
        double flZNear,
        double flZFar,
        double bottom,
        double top,
        double left)
{
  __m128d v10; // xmm8
  double v11; // xmm12_8
  __m128d v12; // xmm0
  float v13; // xmm13_4
  double v14; // xmm12_8
  float v15; // xmm13_4
  __m128d v16; // xmm2
  double v17; // xmm14_8^8
  float v18; // xmm9_4
  double v19; // xmm10_8
  double v20; // xmm1_8
  float v21; // xmm5_4
  double v29; // [rsp+38h] [rbp-20h]

  v29 = flAspect + flAspect;
  v10 = COERCE_UNSIGNED_INT64(flAspect + flAspect);
  v11 = V_tanf(a2 * 3.141592653589793 / 360.0) * (flAspect + flAspect);
  dst->m[3][2] = -1.0;
  v12 = 0x3FF0000000000000uLL;
  v13 = v11;
  v14 = v13 / flFovX;
  v15 = v13 * 0.5;
  v16 = *&flAspect;
  v17 = -v15;
  v18 = (1.0 - top) * v17 + top * v15;
  *&v14 = v14 * 0.5;
  v19 = -*&v14;
  v12.m128d_f64[0] = (1.0 - bottom) * v19;
  v20 = (1.0 - flZFar) * v19;
  *&v19 = (1.0 - left) * v17 + left * v15;
  v12.m128d_f64[0] = v12.m128d_f64[0] + *&v14 * bottom;
  v21 = _mm_movedup_pd(v12).m128d_f64[0];
  *&v20 = v20 + flZFar * *&v14;
  dst->m[0][2] = (*&v19 + v18) / (*&v19 - v18);
  dst->m[1][2] = (*&v20 + v21) / (v21 - *&v20);
  v10.m128d_f64[0] = v29 / (v21 - *&v20);
  *v12.m128d_f64 = v29 / (*&v19 - v18);
  dst->m[0][0] = *v12.m128d_f64;
  dst->m[0][1] = 0.0;
  dst->m[0][3] = 0.0;
  dst->m[1][0] = 0.0;
  dst->m[1][3] = 0.0;
  dst->m[2][0] = 0.0;
  dst->m[2][1] = 0.0;
  dst->m[3][0] = 0.0;
  dst->m[3][1] = 0.0;
  dst->m[3][3] = 0.0;
  dst->m[1][1] = _mm_movedup_pd(v10).m128d_f64[0];
  v16.m128d_f64[0] = flAspect * flZNear / (flAspect - flZNear);
  dst->m[2][2] = _mm_movedup_pd(COERCE_UNSIGNED_INT64(flZNear / (flAspect - flZNear))).m128d_f64[0];
  dst->m[2][3] = _mm_movedup_pd(v16).m128d_f64[0];
}


// ExtractClipPlanesFromNonTransposedMatrix  (line 1330, @0x00000000030f2260, libserver.so)  // inlines: Init, MatrixGetRowAsVector4D, Vector4D, Vector4DAdd, operator*=, operator+, operator=
// calls: sqrtf
// callers: FrustumFromViewProj, CFrustum::BuildShadowFrustum
void __fastcall ExtractClipPlanesFromNonTransposedMatrix(
        const VMatrix *const viewProjMatrix,
        VPlane *pPlanesOut,
        bool bD3DClippingRange)
{
  vec_t v3; // xmm2_4
  float v4; // xmm1_4
  vec_t v5; // xmm4_4
  vec_t v6; // xmm2_4
  float v7; // xmm1_4
  vec_t v8; // xmm4_4
  vec_t v9; // xmm3_4
  vec_t v10; // xmm2_4
  vec_t v11; // xmm1_4
  vec_t v12; // xmm3_4
  vec_t v13; // xmm2_4
  vec_t v14; // xmm4_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  VPlane *v19; // r12
  int v20; // ebx
  float v21; // xmm1_4
  vec_t v22; // xmm2_4
  vec_t v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  float x; // xmm1_4
  float v27; // xmm5_4
  vec_t v28; // xmm1_4
  vec_t v29; // xmm0_4
  float y; // xmm1_4

  v3 = viewProjMatrix->m[3][2] + viewProjMatrix->m[0][2];
  v4 = viewProjMatrix->m[3][3] + viewProjMatrix->m[0][3];
  v5 = viewProjMatrix->m[3][0] + viewProjMatrix->m[0][0];
  pPlanesOut[1].m_Normal.y = viewProjMatrix->m[3][1] + viewProjMatrix->m[0][1];
  pPlanesOut[1].m_Normal.z = v3;
  pPlanesOut[1].m_Dist = -v4;
  pPlanesOut[1].m_Normal.x = v5;
  v6 = viewProjMatrix->m[3][2] - viewProjMatrix->m[0][2];
  v7 = viewProjMatrix->m[3][3] - viewProjMatrix->m[0][3];
  v8 = viewProjMatrix->m[3][0] - viewProjMatrix->m[0][0];
  pPlanesOut->m_Normal.y = viewProjMatrix->m[3][1] - viewProjMatrix->m[0][1];
  pPlanesOut->m_Normal.z = v6;
  pPlanesOut->m_Dist = -v7;
  pPlanesOut->m_Normal.x = v8;
  v9 = viewProjMatrix->m[3][1] + viewProjMatrix->m[1][1];
  v10 = viewProjMatrix->m[3][2] + viewProjMatrix->m[1][2];
  v11 = -(viewProjMatrix->m[3][3] + viewProjMatrix->m[1][3]);
  pPlanesOut[3].m_Normal.x = viewProjMatrix->m[3][0] + viewProjMatrix->m[1][0];
  pPlanesOut[3].m_Normal.y = v9;
  pPlanesOut[3].m_Normal.z = v10;
  pPlanesOut[3].m_Dist = v11;
  v12 = viewProjMatrix->m[3][1] - viewProjMatrix->m[1][1];
  v13 = viewProjMatrix->m[3][2] - viewProjMatrix->m[1][2];
  v14 = viewProjMatrix->m[3][0] - viewProjMatrix->m[1][0];
  pPlanesOut[2].m_Dist = -(viewProjMatrix->m[3][3] - viewProjMatrix->m[1][3]);
  pPlanesOut[2].m_Normal.y = v12;
  pPlanesOut[2].m_Normal.z = v13;
  pPlanesOut[2].m_Normal.x = v14;
  if ( bD3DClippingRange )
  {
    v15 = viewProjMatrix->m[2][0];
    v16 = viewProjMatrix->m[2][1];
    v17 = viewProjMatrix->m[2][2];
    v18 = viewProjMatrix->m[2][3];
  }
  else
  {
    v15 = viewProjMatrix->m[3][0] + viewProjMatrix->m[2][0];
    v16 = viewProjMatrix->m[3][1] + viewProjMatrix->m[2][1];
    v17 = viewProjMatrix->m[3][2] + viewProjMatrix->m[2][2];
    v18 = viewProjMatrix->m[3][3] + viewProjMatrix->m[2][3];
  }
  pPlanesOut[4].m_Normal.x = v15;
  v19 = pPlanesOut;
  pPlanesOut[4].m_Normal.y = v16;
  v20 = 0;
  pPlanesOut[4].m_Normal.z = v17;
  pPlanesOut[4].m_Dist = -v18;
  v21 = viewProjMatrix->m[3][3] - viewProjMatrix->m[2][3];
  v22 = viewProjMatrix->m[3][2] - viewProjMatrix->m[2][2];
  v23 = viewProjMatrix->m[3][0] - viewProjMatrix->m[2][0];
  pPlanesOut[5].m_Normal.y = viewProjMatrix->m[3][1] - viewProjMatrix->m[2][1];
  pPlanesOut[5].m_Dist = -v21;
  pPlanesOut[5].m_Normal.z = v22;
  pPlanesOut[5].m_Normal.x = v23;
  do
  {
    while ( 1 )
    {
      v24 = ((v19->m_Normal.x * v19->m_Normal.x) + (v19->m_Normal.y * v19->m_Normal.y))
          + (v19->m_Normal.z * v19->m_Normal.z);
      if ( v24 >= 9.999999999999999e-21 )
        break;
      ++v20;
      ++v19;
      if ( v20 == 6 )
        return;
    }
    v25 = fsqrt(v24);
    x = v19->m_Normal.x;
    ++v20;
    v27 = 1.0 / v25;
    ++v19;
    v28 = x * (1.0 / v25);
    v29 = (1.0 / v25) * v19[-1].m_Dist;
    v19[-1].m_Normal.x = v28;
    y = v19[-1].m_Normal.y;
    v19[-1].m_Dist = v29;
    v19[-1].m_Normal.y = y * v27;
    v19[-1].m_Normal.z = v19[-1].m_Normal.z * v27;
  }
  while ( v20 != 6 );
}


// MatrixBuildAxisAngle  (line 1391, @0x00000000030f2500, libserver.so)  // inlines: SinCos, operator[]
// calls: sincosf
void __fastcall MatrixBuildAxisAngle(VMatrix *const Matrix, const Vector *const Axis, float a3, float fAngle)
{
  float v6; // xmm0_4
  float v7; // xmm7_4
  float v8; // xmm2_4
  float v9; // xmm6_4
  float v10; // xmm5_4
  float v11; // xmm0_4
  float x; // xmm6_4
  float v13; // xmm0_4
  float v14; // [rsp-18h] [rbp-20h] BYREF
  float v15; // [rsp-14h] [rbp-1Ch] BYREF

  v6 = a3 * 3.141592653589793 / 180.0;
  sincosf(v6, &v15, &v14);
  v7 = v14;
  v8 = v15;
  v9 = Axis->y * Axis->y;
  v10 = Axis->z * Axis->z;
  Matrix->m[0][0] = ((1.0 - (Axis->x * Axis->x)) * v14) + (Axis->x * Axis->x);
  Matrix->m[1][0] = ((Axis->x * Axis->y) * (1.0 - v7)) + (Axis->z * v8);
  v11 = ((Axis->z * Axis->x) * (1.0 - v7)) - (Axis->y * v8);
  Matrix->m[3][0] = 0.0;
  Matrix->m[2][0] = v11;
  Matrix->m[0][1] = ((Axis->x * Axis->y) * (1.0 - v7)) - (Axis->z * v8);
  Matrix->m[1][1] = ((1.0 - v9) * v7) + v9;
  x = Axis->x;
  v13 = Axis->y * Axis->z;
  Matrix->m[3][1] = 0.0;
  Matrix->m[2][1] = (v13 * (1.0 - v7)) + (x * v8);
  Matrix->m[0][2] = ((Axis->z * Axis->x) * (1.0 - v7)) + (Axis->y * v8);
  Matrix->m[1][2] = ((Axis->y * Axis->z) * (1.0 - v7)) - (v8 * Axis->x);
  Matrix->m[3][2] = 0.0;
  Matrix->m[0][3] = 0.0;
  Matrix->m[1][3] = 0.0;
  Matrix->m[2][3] = 0.0;
  Matrix->m[3][3] = 1.0;
  Matrix->m[2][2] = ((1.0 - v10) * v7) + v10;
}


