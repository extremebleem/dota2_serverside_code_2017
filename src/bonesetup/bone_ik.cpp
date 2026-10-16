
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_bone_ik.cpp  (line 0, @0x0000000001a67690, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: `guard variable for'g_AnimOpSourceColors, UNSPECIFIED_LOGGING_COLOR, g_AnimOpSourceColors
void __cdecl GLOBAL__sub_I_bone_ik_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  // init once: g_AnimOpSourceColors
  g_AnimOpSourceColors[0]._color[0] = -1;
  g_AnimOpSourceColors[0]._color[1] = -1;
  g_AnimOpSourceColors[0]._color[2] = 0;
  g_AnimOpSourceColors[0]._color[3] = -1;
  g_AnimOpSourceColors[1]._color[0] = -36;
  g_AnimOpSourceColors[1]._color[1] = -36;
  g_AnimOpSourceColors[1]._color[2] = -36;
  g_AnimOpSourceColors[1]._color[3] = -1;
  g_AnimOpSourceColors[2]._color[0] = 0;
  g_AnimOpSourceColors[2]._color[1] = -1;
  g_AnimOpSourceColors[2]._color[2] = 50;
  g_AnimOpSourceColors[2]._color[3] = -1;
  g_AnimOpSourceColors[3]._color[0] = -1;
  g_AnimOpSourceColors[3]._color[1] = 50;
  g_AnimOpSourceColors[3]._color[2] = 50;
  g_AnimOpSourceColors[3]._color[3] = -1;
}


// DrawBone  (line 31, @0x000000000306d6a0, libserver.so)  // inlines: FastSqrt, GetForward, GetOrigin, HorzArrow, Length, Line, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, VertexColor_t, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-
// calls: CModel::boneParent, TransformVectorsForward, CModel::boneName, ISceneViewDebugOverlays::Text
// callers: DebugDrawIKChains
void __fastcall DrawBone(
        ISceneViewDebugOverlays *debugoverlay,
        const CModel *pModel,
        const CTransform *xforms,
        int nBoneIndex,
        const float flTime)
{
  int v9; // eax
  int (**vptr_ISceneViewDebugOverlays)(...); // rdx
  const CTransform *v11; // rax
  const CTransform *v12; // rbx
  vec_t y; // xmm2_4
  vec_t z; // xmm0_4
  vec_t v15; // xmm2_4
  vec_t v16; // xmm0_4
  double v17; // xmm0_8
  int (*v18)(...); // r11
  int (**v19)(...); // rax
  vec_t v20; // xmm3_4
  vec_t v21; // xmm2_4
  vec_t v22; // xmm3_4
  vec_t v23; // xmm0_4
  int (*v24)(...); // rax
  const char *v25; // rax
  vec_t v26; // xmm2_4
  vec_t v27; // xmm1_4
  double v28; // [rsp+0h] [rbp-80h]
  const CTransform *x2a; // [rsp+18h] [rbp-68h]
  char v31; // [rsp+20h] [rbp-60h] BYREF
  char v32; // [rsp+21h] [rbp-5Fh]
  char v33; // [rsp+22h] [rbp-5Eh]
  char v34; // [rsp+23h] [rbp-5Dh]
  float x; // [rsp+30h] [rbp-50h] BYREF
  vec_t v36; // [rsp+34h] [rbp-4Ch]
  vec_t v37; // [rsp+38h] [rbp-48h]
  Vector pForward; // [rsp+40h] [rbp-40h] BYREF

  if ( debugoverlay != 0 )
  {
    v9 = CModel::boneParent(pModel, nBoneIndex);
    if ( v9 != -1 )
    {
      vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
      v11 = &xforms[v9];
      v12 = &xforms[nBoneIndex];
      v28 = flTime;
      y = v11->m_vPosition.y;
      z = v11->m_vPosition.z;
      pForward.x = v11->m_vPosition.x;
      pForward.y = y;
      pForward.z = z;
      v15 = v12->m_vPosition.y;
      v16 = v12->m_vPosition.z;
      x = v12->m_vPosition.x;
      v36 = v15;
      v37 = v16;
      v17 = flTime;
      v18 = vptr_ISceneViewDebugOverlays[13];
      x2a = v11;
      v31 = -1;
      v32 = -1;
      v33 = 0;
      v34 = -1;
      v18(debugoverlay, &x, &pForward, &v31, 1, v17);
      LODWORD(x2a) = fsqrt(
                       (((x2a->m_vPosition.x - v12->m_vPosition.x) * (x2a->m_vPosition.x - v12->m_vPosition.x))
                      + ((x2a->m_vPosition.y - v12->m_vPosition.y) * (x2a->m_vPosition.y - v12->m_vPosition.y)))
                     + ((x2a->m_vPosition.z - v12->m_vPosition.z) * (x2a->m_vPosition.z - v12->m_vPosition.z)));
      TransformVectorsForward(v12, &pForward);
      v19 = debugoverlay->_vptr_ISceneViewDebugOverlays;
      v20 = ((pForward.z * *&x2a) * 0.5) + v12->m_vPosition.z;
      v21 = ((*&x2a * pForward.x) * 0.5) + v12->m_vPosition.x;
      pForward.y = ((pForward.y * *&x2a) * 0.5) + v12->m_vPosition.y;
      pForward.z = v20;
      pForward.x = v21;
      v22 = v12->m_vPosition.x;
      v23 = v12->m_vPosition.z;
      v36 = v12->m_vPosition.y;
      x = v22;
      v37 = v23;
      v24 = v19[34];
      v31 = 0;
      v32 = -1;
      v33 = 0;
      v34 = -1;
      v24(debugoverlay, &x, &pForward, &v31, 1, 1.0, v28);
      v25 = CModel::boneName(pModel, nBoneIndex);
      v26 = v12->m_vPosition.x;
      v27 = v12->m_vPosition.y;
      pForward.z = v12->m_vPosition.z;
      pForward.x = v26;
      pForward.y = v27;
      ISceneViewDebugOverlays::Text(debugoverlay, &pForward, 0.0, "%d: %s", nBoneIndex, v25);
    }
  }
}


// DebugDrawIKChains  (line 60, @0x000000000306d8e0, libserver.so)  // inlines: SetOrigin, SetToIdentity, Sphere, VertexColor_t
// calls: SetIdentityMatrix, DrawBone
void __fastcall DebugDrawIKChains(
        ISceneViewDebugOverlays *debugoverlay,
        const CModel *pModel,
        const matrix3x4_t *boneToWorld,
        const CTransform *xforms,
        const CAnimIKChain *pChain,
        const ikchainresult_t *pChainResult,
        float flTime)
{
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  __int64 v12; // r12
  int v13; // ebx
  int32 bone; // ecx
  _BYTE v17[16]; // [rsp+10h] [rbp-70h] BYREF
  matrix3x4_t matrix; // [rsp+20h] [rbp-60h] BYREF

  if ( debugoverlay != 0 )
  {
    v17[0] = -1;
    v17[1] = -1;
    v17[2] = 0;
    v17[3] = -1;
    SetIdentityMatrix(&matrix);
    vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
    matrix.m_flMatVal[0][3] = pChainResult->pos.x;
    matrix.m_flMatVal[1][3] = pChainResult->pos.y;
    matrix.m_flMatVal[2][3] = pChainResult->pos.z;
    vptr_ISceneViewDebugOverlays[18](debugoverlay, &matrix, v17, 1, 0.5, flTime);
    if ( pChain->m_linkArray.m_Size > 0 )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        ++v13;
        bone = pChain->m_linkArray.m_Memory.m_pMemory[v12++].bone;
        DrawBone(debugoverlay, pModel, xforms, bone, flTime);
      }
      while ( pChain->m_linkArray.m_Size > v13 );
    }
  }
}


// C2JointIKSolver::findD  (line 107, @0x000000000306d9c0, libserver.so)
float __fastcall C2JointIKSolver::findD(float a1, float a, float b, float c)
{
  return ((((a1 * a1) - (a * a)) / b) + b) * 0.5;
}


// C2JointIKSolver::findE  (line 110, @0x000000000306d9f0, libserver.so)
// calls: sqrtf
float __fastcall C2JointIKSolver::findE(float a1, float a, float d)
{
  return fsqrt((a1 * a1) - (a * a));
}


// C2JointIKSolver::solve  (line 117, @0x000000000306dc70, libserver.so)  // inlines: findD, findE
// calls: C2JointIKSolver::defineM, C2JointIKSolver::rot, C2JointIKSolver::length, sqrtf
// callers: Solve2JointIK
bool __fastcall C2JointIKSolver::solve(
        C2JointIKSolver *const this,
        float A,
        float B,
        const float *P,
        const float *D,
        float *Q)
{
  float v9; // xmm0_4
  float v10; // xmm5_4
  bool result; // al
  float v12; // [rsp+0h] [rbp-50h]
  float v13; // [rsp+4h] [rbp-4Ch]
  float r; // [rsp+8h] [rbp-48h]
  float R[4]; // [rsp+10h] [rbp-40h] BYREF
  float S[12]; // [rsp+20h] [rbp-30h] BYREF

  C2JointIKSolver::defineM(this, P, D);
  C2JointIKSolver::rot(this->Minv, P, R);
  v9 = C2JointIKSolver::length(R);
  v10 = A;
  v12 = B;
  v13 = v9;
  r = ((((v10 * v10) - (B * B)) / v9) + v9) * 0.5;
  S[0] = r;
  S[2] = 0.0;
  S[1] = fsqrt((v10 * v10) - (S[0] * S[0]));
  C2JointIKSolver::rot(this->Mfwd, S, Q);
  result = 0;
  if ( r > (v13 - v12) )
    return A > r;
  return result;
}


// C2JointIKSolver::defineM  (line 134, @0x000000000306db30, libserver.so)  // inlines: dot
// calls: C2JointIKSolver::normalize, C2JointIKSolver::cross
// callers: C2JointIKSolver::solve
void __fastcall C2JointIKSolver::defineM(C2JointIKSolver *const this, const float *P, const float *D)
{
  float *v3; // r14
  float *v4; // r15
  float *v5; // r13
  __int64 v8; // rax
  float v9; // xmm1_4
  C2JointIKSolver *v10; // rdx
  __int64 i; // rax
  float v12; // xmm0_4

  v3 = this->Minv[0];
  v4 = this->Minv[1];
  v5 = this->Minv[2];
  *&this->Minv[0][0] = *P;
  this->Minv[0][2] = P[2];
  C2JointIKSolver::normalize(this->Minv[0]);
  v8 = 0;
  v9 = ((*D * this->Minv[0][0]) + (D[1] * this->Minv[0][1])) + (D[2] * this->Minv[0][2]);
  do
  {
    v4[v8] = D[v8] - (v3[v8] * v9);
    ++v8;
  }
  while ( v8 != 3 );
  C2JointIKSolver::normalize(v4);
  C2JointIKSolver::cross(v3, v4, v5);
  v10 = this;
  for ( i = 0; i != 3; ++i )
  {
    v10 = (v10 + 12);
    v10[-1].Minv[2][0] = this->Minv[0][i];
    v10[-1].Minv[2][1] = this->Minv[1][i];
    v12 = this->Minv[2][i];
    v10[-1].Minv[2][2] = v12;
  }
}


// C2JointIKSolver::dot  (line 165, @0x000000000306da20, libserver.so)
float __fastcall C2JointIKSolver::dot(const float *a, const float *b)
{
  return ((*a * *b) + (a[1] * b[1])) + (a[2] * b[2]);
}


// C2JointIKSolver::length  (line 167, @0x000000000306da50, libserver.so)  // inlines: dot
// calls: sqrtf
// callers: C2JointIKSolver::normalize, C2JointIKSolver::solve
float __fastcall C2JointIKSolver::length(const float *v)
{
  return fsqrt(((*v * *v) + (v[1] * v[1])) + (v[2] * v[2]));
}


// C2JointIKSolver::normalize  (line 169, @0x000000000306da90, libserver.so)
// calls: C2JointIKSolver::length
// callers: C2JointIKSolver::defineM
void __fastcall C2JointIKSolver::normalize(float *v)
{
  float v2; // xmm0_4

  v2 = C2JointIKSolver::length(v);
  *v = *v / v2;
  v[1] = v[1] / v2;
  v[2] = v[2] / v2;
}


// C2JointIKSolver::cross  (line 175, @0x000000000306dad0, libserver.so)
// callers: C2JointIKSolver::defineM
void __fastcall C2JointIKSolver::cross(const float *a, const float *b, float *c)
{
  *c = (a[1] * b[2]) - (a[2] * b[1]);
  c[1] = (a[2] * *b) - (*a * b[2]);
  c[2] = (*a * b[1]) - (a[1] * *b);
}


// C2JointIKSolver::rot  (line 181, @0x000000000306dc30, libserver.so)  // inlines: dot
// callers: C2JointIKSolver::solve
void __fastcall C2JointIKSolver::rot(float (*M)[3], const float *src, float *dst)
{
  __int64 i; // rax
  float v4; // xmm0_4

  for ( i = 0; i != 3; ++i )
  {
    v4 = (*M++)[0];
    dst[i] = ((v4 * *src) + ((*M)[-2] * src[1])) + ((*M)[-1] * src[2]);
  }
}


// Solve2JointIK  (line 202, @0x000000000306e7a0, libserver.so)  // inlines: LengthSqr, MatrixPosition, VectorRotate
// calls: VectorRotate, Solve2JointIK
// callers: CIKContext::SolveDependencies
bool __fastcall Solve2JointIK(const CAnimIKChain *pikchain, const Vector *const targetFoot, matrix3x4a_t *pBoneToWorld)
{
  CAnimIKLink *m_pMemory; // rax
  CAnimIKLink *v7; // rax
  int bone; // esi
  int v9; // edx
  vec_t *v10; // rdi
  Vector targetKneeDir; // [rsp+10h] [rbp-50h] BYREF
  Vector targetKneePos; // [rsp+20h] [rbp-40h] BYREF
  Vector tmp; // [rsp+30h] [rbp-30h] BYREF

  m_pMemory = pikchain->m_linkArray.m_Memory.m_pMemory;
  if ( (((m_pMemory->kneeDir.x * m_pMemory->kneeDir.x) + (m_pMemory->kneeDir.y * m_pMemory->kneeDir.y))
      + (m_pMemory->kneeDir.z * m_pMemory->kneeDir.z)) <= 0.0 )
    return Solve2JointIK(m_pMemory->bone, m_pMemory[1].bone, m_pMemory[2].bone, targetFoot, pBoneToWorld);
  tmp = m_pMemory->kneeDir;
  VectorRotate(&tmp.x, &pBoneToWorld[m_pMemory->bone], &targetKneeDir.x);
  v7 = pikchain->m_linkArray.m_Memory.m_pMemory;
  bone = v7[1].bone;
  v9 = v7[2].bone;
  v10 = &pBoneToWorld[bone];
  targetKneePos.x = v10[3];
  targetKneePos.y = v10[7];
  targetKneePos.z = v10[11];
  return Solve2JointIK(v7->bone, bone, v9, targetFoot, &targetKneePos, &targetKneeDir, pBoneToWorld);
}


// Solve2JointIK  (line 225, @0x000000000306e580, libserver.so)  // inlines: FastSqrt, Length, MatrixPosition, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator-
// calls: VectorNormalize, Solve2JointIK
// callers: Solve2JointIK
bool __fastcall Solve2JointIK(
        int iThigh,
        int iKnee,
        int iFoot,
        const Vector *const targetFoot,
        matrix3x4a_t *pBoneToWorld)
{
  float *v6; // rax
  float v7; // xmm10_4
  float v8; // xmm9_4
  float v9; // xmm8_4
  vec_t *v10; // rax
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  float *v16; // rax
  float v17; // xmm13_4
  float v18; // xmm12_4
  float v19; // xmm11_4
  float v20; // xmm4_4
  float v21; // xmm0_4
  float v22; // xmm3_4
  float v23; // xmm13_4
  float v24; // xmm12_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  bool result; // al
  float v30; // xmm4_4
  Vector worldKnee; // [rsp+20h] [rbp-30h] BYREF
  Vector ikKneeDir; // [rsp+30h] [rbp-20h] BYREF

  v6 = &pBoneToWorld[iThigh];
  v7 = v6[3];
  v8 = v6[7];
  v9 = v6[11];
  v10 = &pBoneToWorld[iKnee];
  v11 = v10[7];
  v12 = v10[11];
  v13 = v10[3] - v7;
  worldKnee.x = v10[3];
  v14 = v11 - v8;
  worldKnee.y = v11;
  v15 = v12 - v9;
  worldKnee.z = v12;
  v16 = &pBoneToWorld[iFoot];
  v17 = v16[3];
  v18 = v16[7];
  v19 = v16[11];
  v20 = fsqrt(((v13 * v13) + (v14 * v14)) + (v15 * v15));
  v21 = v17 - worldKnee.x;
  v22 = v18 - v11;
  v23 = v17 - v7;
  v24 = v18 - v8;
  v25 = (v21 * v21) + (v22 * v22);
  v26 = v19 - v9;
  v27 = fsqrt(v25 + ((v19 - v12) * (v19 - v12)));
  v28 = fsqrt(((v23 * v23) + (v24 * v24)) + (v26 * v26));
  result = v27 == 0.0 || v20 == 0.0;
  if ( result )
    return 0;
  if ( v28 != 0.0 && v28 <= ((v27 + v20) * 0.99980003) )
  {
    v30 = v20 / v28;
    ikKneeDir.x = v13 - (v23 * v30);
    ikKneeDir.y = v14 - (v24 * v30);
    ikKneeDir.z = v15 - (v30 * v26);
    VectorNormalize(&ikKneeDir);
    return Solve2JointIK(iThigh, iKnee, iFoot, targetFoot, &worldKnee, &ikKneeDir, pBoneToWorld);
  }
  return result;
}


// Model_AlignIKMatrix  (line 269, @0x000000000306dd90, libserver.so)  // inlines: ConcatTransforms, Cross, CrossProduct, GetColumn, InitFromDiagonal, LargestComponentValue, MatrixAngles, MatrixGetColumn, MatrixSetColumn, SetColumn, SetToIdentity, memcpy, operator=
// calls: MatrixAngles, VectorNormalize, SetIdentityMatrix, ConcatTransforms
// callers: Solve2JointIK
void __fastcall Model_AlignIKMatrix(matrix3x4a_t *const mMat, const Vector *const vAlignTo)
{
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float z; // xmm3_4
  float v8; // xmm6_4
  float y; // xmm8_4
  float x; // xmm0_4
  float v11; // xmm7_4
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm4_4
  float flScale; // [rsp+Ch] [rbp-C4h]
  Vector vPosition; // [rsp+10h] [rbp-C0h] BYREF
  QAngle qAngles; // [rsp+20h] [rbp-B0h] BYREF
  Vector vX; // [rsp+30h] [rbp-A0h] BYREF
  Vector vY; // [rsp+40h] [rbp-90h] BYREF
  matrix3x4_t mScaleMatrix; // [rsp+50h] [rbp-80h] BYREF
  matrix3x4a_t vScale; // [rsp+80h] [rbp-50h] BYREF

  MatrixAngles(mMat, &qAngles, &vPosition, &vScale);
  v4 = fabs(vScale.m_flMatVal[0][0]);
  v5 = fabs(vScale.m_flMatVal[0][1]);
  v6 = fabs(vScale.m_flMatVal[0][2]);
  if ( v4 <= v5 )
  {
    if ( v5 > v6 )
    {
      v6 = v5;
      if ( v4 > v5 )
        goto LABEL_3;
    }
  }
  else if ( v4 > v6 )
  {
LABEL_3:
    v6 = v4;
  }
  flScale = v6;
  vX = *vAlignTo;
  VectorNormalize(&vX);
  z = vX.z;
  v8 = mMat->m_flMatVal[1][2];
  y = vX.y;
  mMat->m_flMatVal[1][0] = vX.y;
  x = vX.x;
  mMat->m_flMatVal[2][0] = z;
  v11 = mMat->m_flMatVal[0][2];
  v12 = mMat->m_flMatVal[2][2];
  mMat->m_flMatVal[0][0] = x;
  vY.x = (z * v8) - (y * v12);
  vY.y = (v12 * x) - (z * v11);
  vY.z = (y * v11) - (x * v8);
  VectorNormalize(&vY);
  v13 = vY.y;
  v14 = vY.z;
  v15 = vY.x;
  mMat->m_flMatVal[1][1] = vY.y;
  v16 = vX.y;
  mMat->m_flMatVal[2][1] = v14;
  v17 = vX.x;
  mMat->m_flMatVal[0][1] = v15;
  v18 = vX.z * v15;
  mMat->m_flMatVal[0][2] = (v14 * v16) - (v13 * vX.z);
  mMat->m_flMatVal[1][2] = v18 - (v14 * v17);
  mMat->m_flMatVal[2][2] = (v13 * v17) - (v15 * v16);
  SetIdentityMatrix(&mScaleMatrix);
  mScaleMatrix.m_flMatVal[0][0] = flScale;
  mScaleMatrix.m_flMatVal[1][1] = flScale;
  mScaleMatrix.m_flMatVal[2][2] = flScale;
  ConcatTransforms(mMat, &mScaleMatrix, &vScale);
  *mMat = vScale;
}


// Solve2JointIK  (line 308, @0x000000000306dfb0, libserver.so)  // inlines: FastSqrt, Length, MatrixPosition, VectorAdd, VectorLength, VectorMultiply, VectorScale, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=
// calls: C2JointIKSolver::solve, Model_AlignIKMatrix, VectorNormalize
// callers: Solve2JointIK
bool __fastcall Solve2JointIK(
        int nThighBone,
        int nKneeBone,
        int nFootBone,
        const Vector *const vTargetFootPosition,
        const Vector *const vTargetKneePosition,
        const Vector *const vTargetKneeDirection,
        matrix3x4a_t *pBoneToWorld)
{
  matrix3x4a_t *v7; // r13
  matrix3x4a_t *v8; // rbx
  float y; // xmm11_4
  float *v10; // r12
  float v11; // xmm6_4
  float v12; // xmm14_4
  float v13; // xmm13_4
  float v14; // xmm8_4
  vec_t v15; // xmm10_4
  float v16; // xmm12_4
  vec_t v17; // xmm4_4
  float v18; // xmm2_4
  float x; // xmm5_4
  float v20; // xmm7_4
  vec_t v21; // xmm11_4
  float v22; // xmm6_4
  float v23; // xmm15_4
  float v24; // xmm9_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm3_4
  vec_t v29; // xmm5_4
  vec_t v30; // xmm4_4
  vec_t v31; // xmm3_4
  __m128d v32; // xmm3
  float v33; // xmm4_4
  bool result; // al
  float v35; // xmm8_4
  float v36; // xmm7_4
  float v37; // xmm6_4
  float flFootToKneeLength; // [rsp+Ch] [rbp-E4h]
  float flKneeToThighLength; // [rsp+10h] [rbp-E0h]
  float v40; // [rsp+18h] [rbp-D8h]
  float v41; // [rsp+18h] [rbp-D8h]
  float v42; // [rsp+1Ch] [rbp-D4h]
  float v43; // [rsp+1Ch] [rbp-D4h]
  float minDist; // [rsp+20h] [rbp-D0h]
  float minDista; // [rsp+20h] [rbp-D0h]
  float vWorldThighPosition; // [rsp+24h] [rbp-CCh]
  bool vWorldThighPosition_4a; // [rsp+28h] [rbp-C8h]
  float vWorldThighPosition_4; // [rsp+28h] [rbp-C8h]
  float vWorldThighPosition_8; // [rsp+2Ch] [rbp-C4h]
  Vector vTargetFootDeltaFromThigh; // [rsp+30h] [rbp-C0h] BYREF
  Vector vTargetKneePositionFromThigh; // [rsp+40h] [rbp-B0h] BYREF
  Vector ikTargetKnee; // [rsp+50h] [rbp-A0h] BYREF
  Vector vAlignTo; // [rsp+60h] [rbp-90h] BYREF
  C2JointIKSolver ik; // [rsp+70h] [rbp-80h] BYREF

  v7 = &pBoneToWorld[nThighBone];
  v8 = &pBoneToWorld[nKneeBone];
  y = vTargetKneePosition->y;
  v10 = &pBoneToWorld[nFootBone];
  v11 = v7->m_flMatVal[1][3];
  v12 = v8->m_flMatVal[0][3];
  vWorldThighPosition_8 = v7->m_flMatVal[2][3];
  v13 = v8->m_flMatVal[1][3];
  v14 = v7->m_flMatVal[0][3];
  v15 = vTargetKneePosition->z - vWorldThighPosition_8;
  v16 = v8->m_flMatVal[2][3];
  v17 = vTargetFootPosition->y - v11;
  v18 = v13 - v11;
  vWorldThighPosition = v11;
  x = vTargetFootPosition->x;
  v20 = v10[3];
  vTargetFootDeltaFromThigh.z = vTargetFootPosition->z - vWorldThighPosition_8;
  v21 = y - v11;
  v22 = v10[7];
  v23 = v10[11];
  vTargetFootDeltaFromThigh.y = v17;
  v24 = vTargetKneePosition->x;
  vTargetKneePositionFromThigh.y = v21;
  vTargetFootDeltaFromThigh.x = x - v14;
  vTargetKneePositionFromThigh.z = v15;
  vTargetKneePositionFromThigh.x = v24 - v14;
  v25 = fsqrt((((v12 - v14) * (v12 - v14)) + (v18 * v18)) + ((v16 - vWorldThighPosition_8)
                                                           * (v16 - vWorldThighPosition_8)));
  v26 = fsqrt((((v20 - v12) * (v20 - v12)) + ((v22 - v13) * (v22 - v13))) + ((v23 - v16) * (v23 - v16)));
  v27 = fsqrt((((x - v14) * (x - v14)) + (v17 * v17)) + (vTargetFootDeltaFromThigh.z * vTargetFootDeltaFromThigh.z));
  v28 = 100.0 * fmaxf(v25 + v26, v27 - fminf(v25, v26));
  v29 = (vTargetKneeDirection->y * v28) + v21;
  v30 = (vTargetKneeDirection->z * v28) + v15;
  v31 = (v28 * vTargetKneeDirection->x) + (v24 - v14);
  ikTargetKnee.y = v29;
  ikTargetKnee.z = v30;
  ikTargetKnee.x = v31;
  if ( v27 > ((v25 + v26) * 0.99980003) )
  {
    flFootToKneeLength = v26;
    flKneeToThighLength = v25;
    v41 = v22;
    v43 = v20;
    vWorldThighPosition_4 = (v25 + v26) * 0.99980003;
    VectorNormalize(&vTargetFootDeltaFromThigh);
    v26 = flFootToKneeLength;
    v25 = flKneeToThighLength;
    vTargetFootDeltaFromThigh.x = vTargetFootDeltaFromThigh.x * vWorldThighPosition_4;
    v22 = v41;
    vTargetFootDeltaFromThigh.y = vTargetFootDeltaFromThigh.y * vWorldThighPosition_4;
    v20 = v43;
    vTargetFootDeltaFromThigh.z = vWorldThighPosition_4 * vTargetFootDeltaFromThigh.z;
    v27 = fsqrt(
            ((vTargetFootDeltaFromThigh.x * vTargetFootDeltaFromThigh.x)
           + (vTargetFootDeltaFromThigh.y * vTargetFootDeltaFromThigh.y))
          + (vTargetFootDeltaFromThigh.z * vTargetFootDeltaFromThigh.z));
  }
  v32.m128d_f64[1] = fabs(v25 - v26);
  v32.m128d_f64[0] = v32.m128d_f64[1] * 1.149999976158142;
  if ( v26 > v25 )
  {
    v33 = 0.15000001 * v25;
    if ( v32.m128d_f64[0] <= (0.15000001 * v25) )
      goto LABEL_5;
LABEL_10:
    v33 = _mm_movedup_pd(v32).m128d_f64[0];
    if ( v33 <= v27 )
      goto LABEL_6;
    goto LABEL_11;
  }
  v33 = v26 * 0.15000001;
  if ( v32.m128d_f64[0] > (v26 * 0.15000001) )
    goto LABEL_10;
  if ( v26 > v25 )
    v33 = 0.15000001 * v25;
LABEL_5:
  if ( v33 <= v27 )
    goto LABEL_6;
LABEL_11:
  v40 = v26;
  v42 = v25;
  minDista = v33;
  vTargetFootDeltaFromThigh.x = v20 - v14;
  vTargetFootDeltaFromThigh.y = v22 - vWorldThighPosition;
  vTargetFootDeltaFromThigh.z = v23 - vWorldThighPosition_8;
  VectorNormalize(&vTargetFootDeltaFromThigh);
  v26 = v40;
  v25 = v42;
  vTargetFootDeltaFromThigh.x = vTargetFootDeltaFromThigh.x * minDista;
  vTargetFootDeltaFromThigh.y = vTargetFootDeltaFromThigh.y * minDista;
  vTargetFootDeltaFromThigh.z = minDista * vTargetFootDeltaFromThigh.z;
LABEL_6:
  result = C2JointIKSolver::solve(
             &ik,
             v25,
             v26,
             &vTargetFootDeltaFromThigh.x,
             &ikTargetKnee.x,
             &vTargetKneePositionFromThigh.x);
  if ( result )
  {
    vWorldThighPosition_4a = result;
    minDist = v14;
    Model_AlignIKMatrix(v7, &vTargetKneePositionFromThigh);
    vAlignTo.z = vTargetFootDeltaFromThigh.z - vTargetKneePositionFromThigh.z;
    vAlignTo.y = vTargetFootDeltaFromThigh.y - vTargetKneePositionFromThigh.y;
    vAlignTo.x = vTargetFootDeltaFromThigh.x - vTargetKneePositionFromThigh.x;
    Model_AlignIKMatrix(v8, &vAlignTo);
    v35 = v14 + vTargetFootDeltaFromThigh.x;
    result = vWorldThighPosition_4a;
    v8->m_flMatVal[0][3] = vTargetKneePositionFromThigh.x + minDist;
    v36 = vWorldThighPosition + vTargetFootDeltaFromThigh.y;
    v8->m_flMatVal[1][3] = vTargetKneePositionFromThigh.y + vWorldThighPosition;
    v37 = vWorldThighPosition_8 + vTargetFootDeltaFromThigh.z;
    v8->m_flMatVal[2][3] = vTargetKneePositionFromThigh.z + vWorldThighPosition_8;
    v10[3] = v35;
    v10[7] = v36;
    v10[11] = v37;
  }
  return result;
}


// Model_IKRuleWeight  (line 402, @0x000000000306e8a0, libserver.so)  // inlines: MaxFrame
// callers: CIKContext::CalcGoalOffset
float __fastcall Model_IKRuleWeight(
        const CAnimIKRule *const ikRule,
        const CAnimDesc *panim,
        float flCycle,
        int *const iFrame,
        float *const fraq)
{
  float result; // xmm0_4
  float start; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float peak; // xmm3_4
  float v11; // xmm2_4
  float tail; // xmm3_4
  float end; // xmm4_4
  float v14; // xmm0_4

  result = 1.0;
  if ( ikRule->end <= 1.0 )
  {
    start = ikRule->start;
  }
  else
  {
    start = ikRule->start;
    if ( start > flCycle )
    {
      flCycle = flCycle + 1.0;
      start = ikRule->start;
    }
  }
  v8 = ((panim->m_pData->m_nFrames - 1) * (flCycle - start)) + ikRule->iStart;
  *fraq = v8;
  *iFrame = v8;
  *fraq = *fraq - v8;
  v9 = ikRule->start;
  if ( v9 > flCycle )
  {
    *iFrame = ikRule->iStart;
    *fraq = 0.0;
    return 0.0;
  }
  peak = ikRule->peak;
  if ( peak > flCycle )
  {
    v11 = (flCycle - v9) / (peak - v9);
    return (3.0 * (v11 * v11)) - (((v11 * v11) + (v11 * v11)) * v11);
  }
  tail = ikRule->tail;
  if ( tail <= flCycle )
  {
    end = ikRule->end;
    if ( end <= flCycle )
    {
      v14 = ((panim->m_pData->m_nFrames - 1) * (end - v9)) + ikRule->iStart;
      *fraq = v14;
      *iFrame = v14;
      *fraq = *fraq - v14;
      return 0.0;
    }
    v11 = 1.0 - ((flCycle - tail) / (end - tail));
    return (3.0 * (v11 * v11)) - (((v11 * v11) + (v11 * v11)) * v11);
  }
  return result;
}


// Model_IKRuleWeight  (line 446, @0x000000000306e9f0, libserver.so)
// callers: CIKContext::AddRule
float __fastcall Model_IKRuleWeight(ikcontextikrule_t *const ikRule, float a2, float flCycle)
{
  float end; // xmm4_4
  float v4; // xmm1_4
  float start; // xmm2_4
  float result; // xmm0_4
  float peak; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float tail; // xmm2_4

  end = ikRule->end;
  v4 = a2;
  start = ikRule->start;
  if ( end > 1.0 )
  {
    if ( start <= a2 )
      goto LABEL_6;
    v4 = a2 + 1.0;
  }
  result = 0.0;
  if ( start > v4 )
    return result;
LABEL_6:
  peak = ikRule->peak;
  if ( peak > v4 )
  {
    v8 = (v4 - start) / (peak - start);
    v9 = v8;
    return ((v9 * 3.0) * v8) - (((v8 + v8) * v8) * v8);
  }
  tail = ikRule->tail;
  result = 1.0;
  if ( tail <= v4 )
  {
    if ( end <= v4 )
      return 0.0;
    v9 = 1.0 - ((v4 - tail) / (end - tail));
    v8 = v9;
    return ((v9 * 3.0) * v8) - (((v8 + v8) * v8) * v8);
  }
  return result;
}


// Studio_IKShouldLatch  (line 477, @0x000000000306eaa0, libserver.so)
bool __fastcall Studio_IKShouldLatch(ikcontextikrule_t *const ikRule, float a2, float flCycle)
{
  float end; // xmm1_4
  bool result; // al

  end = ikRule->end;
  if ( end > 1.0 && ikRule->start > a2 )
    a2 = a2 + 1.0;
  result = 0;
  if ( ikRule->peak <= a2 )
    return end > a2;
  return result;
}


// Studio_IKTail  (line 499, @0x000000000306eae0, libserver.so)
float __fastcall Studio_IKTail(ikcontextikrule_t *const ikRule, float a2, float flCycle)
{
  float end; // xmm1_4
  float tail; // xmm2_4

  end = ikRule->end;
  if ( end > 1.0 && ikRule->start > a2 )
    a2 = a2 + 1.0;
  tail = ikRule->tail;
  if ( tail >= a2 || end <= a2 )
    return 0.0;
  else
    return (a2 - tail) / (end - tail);
}


// ExtractAnimValue  (line 517, @0x000000000306eb30, libserver.so)
void __fastcall ExtractAnimValue(int frame, const CAnimValue *panimvalue, float scale, float *const v1)
{
  int total; // eax
  __int64 valid; // rax
  int value; // eax

  if ( panimvalue != 0 )
  {
    total = panimvalue->num.total;
    while ( frame >= total )
    {
      frame -= total;
      panimvalue += panimvalue->num.valid + 1;
      total = panimvalue->num.total;
      if ( total == 0 )
        goto LABEL_8;
    }
    valid = panimvalue->num.valid;
    if ( frame < valid )
      value = panimvalue[frame + 1].value;
    else
      value = panimvalue[valid].value;
    *v1 = value * scale;
  }
  else
  {
LABEL_8:
    *v1 = 0.0;
  }
}


// ExtractAnimValue  (line 552, @0x000000000306eba0, libserver.so)
void __fastcall ExtractAnimValue(
        int frame,
        const CAnimValue *panimvalue,
        float scale,
        float *const v1,
        float *const v2)
{
  int total; // eax
  __int64 valid; // rax
  float v7; // xmm1_4
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // edi
  __int64 v11; // r8
  float v12; // xmm1_4

  if ( panimvalue != 0 )
  {
    if ( panimvalue->value == 257 )
    {
      v12 = panimvalue[1].value * scale;
      *v2 = v12;
      *v1 = v12;
    }
    else
    {
      total = panimvalue->num.total;
      while ( frame >= total )
      {
        frame -= total;
        panimvalue += panimvalue->num.valid + 1;
        total = panimvalue->num.total;
        if ( total == 0 )
          goto LABEL_11;
      }
      valid = panimvalue->num.valid;
      if ( frame >= valid )
      {
        v7 = panimvalue[valid].value * scale;
        *v1 = v7;
        if ( panimvalue->num.total > frame + 1 )
        {
LABEL_10:
          *v2 = v7;
          return;
        }
        v8 = panimvalue->num.valid;
LABEL_9:
        v7 = panimvalue[v8 + 2].value * scale;
        goto LABEL_10;
      }
      v9 = frame;
      v10 = frame + 1;
      v11 = v9 + 1;
      v7 = panimvalue[v11].value * scale;
      *v1 = v7;
      v8 = panimvalue->num.valid;
      if ( v8 <= v10 )
      {
        if ( v10 < panimvalue->num.total )
          goto LABEL_10;
        goto LABEL_9;
      }
      *v2 = panimvalue[v11 + 1].value * scale;
    }
  }
  else
  {
LABEL_11:
    *v2 = 0.0;
    *v1 = 0.0;
  }
}


// CIKContext::CalcGoalOffset  (line 670, @0x000000000306eca0, libserver.so)  // inlines: operator=, operator[]
// calls: Model_IKRuleWeight
// callers: CIKContext::AddRule
__int64 __fastcall CIKContext::CalcGoalOffset(
        CIKContext *const this,
        const CAnimIKRule *pRule,
        const CAnimDesc *panim,
        float flCycle,
        Vector *const pos,
        Quaternion *const q,
        float *const flWeight)
{
  float v11; // xmm1_4
  int m_Size; // eax
  CTransform *v14; // rax
  vec_t y; // xmm5_4
  vec_t z; // xmm4_4
  vec_t x; // xmm3_4
  vec_t v18; // xmm2_4
  vec_t v19; // xmm1_4
  vec_t w; // xmm0_4
  float fraq; // [rsp+10h] [rbp-28h] BYREF
  int iFrame[9]; // [rsp+14h] [rbp-24h] BYREF

  if ( pRule == 0 )
    return 0;
  v11 = Model_IKRuleWeight(pRule, panim, flCycle, iFrame, &fraq);
  *flWeight = v11;
  if ( v11 <= 1.0 )
  {
    if ( v11 < 0.0 )
    {
      *flWeight = 0.0;
      if ( pRule->type != 3 )
        return 0;
    }
    else if ( pRule->type != 3 )
    {
      if ( v11 < 0.000099999997 )
        return 0;
      m_Size = pRule->m_IKOffsets.m_Size;
      if ( m_Size == 0 )
        return 0;
      goto LABEL_6;
    }
  }
  else
  {
    *flWeight = 1.0;
  }
  m_Size = pRule->m_IKOffsets.m_Size;
  if ( m_Size == 0 )
    return 0;
LABEL_6:
  v14 = &pRule->m_IKOffsets.m_Memory.m_pMemory[(m_Size * flCycle)];
  y = v14->m_vPosition.y;
  z = v14->m_vPosition.z;
  x = v14->m_orientation.x;
  v18 = v14->m_orientation.y;
  v19 = v14->m_orientation.z;
  w = v14->m_orientation.w;
  pos->x = v14->m_vPosition.x;
  pos->y = y;
  pos->z = z;
  q->x = x;
  q->y = v18;
  q->z = v19;
  q->w = w;
  return 1;
}


// CIKContext::AddRule  (line 716, @0x000000000306edf0, libserver.so)  // inlines: GetAttachmentName, Init, String, Studio_IKShouldLatch, Studio_IKTail, VectorAdd, VectorMultiply, VectorScale, flWeight, memset, operator*, operator+, operator=, operator[]
// calls: CAnimationBlendList::pAnimdesc, Model_IKRuleWeight, CIKContext::CalcGoalOffset, CUtlString::Get, QuaternionNormalize, QuaternionAccumulate, QuaternionScale
// callers: CIKContext::AddDependencies
__int64 __fastcall CIKContext::AddRule(
        CIKContext *const this,
        float flCycle,
        int iRule,
        const CAnimationBlendList *const blendList,
        ikcontextikrule_t *const ikRule)
{
  const CAnimDesc *v7; // r15
  float v8; // xmm1_4
  const CAnimationBlendList *v9; // r13
  float v10; // xmm3_4
  int v11; // r12d
  float v12; // xmm1_4
  float v13; // xmm0_4
  const CAnimDesc *v14; // rax
  float v15; // xmm2_4
  int m_Size; // esi
  float *p_index; // rsi
  float start; // xmm0_4
  float v19; // xmm0_4
  __int64 v21; // rdi
  float v22; // xmm1_4
  float v23; // xmm0_4
  float end; // xmm0_4
  const CAnimationBlendList *v25; // r12
  int v26; // r15d
  __int64 v27; // r13
  float v28; // xmm3_4
  float tail; // xmm4_4
  float v30; // xmm2_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  const CAnimDesc *v33; // rax
  float v34; // xmm1_4
  const CAnimIKRule *v35; // r10
  int type; // edx
  unsigned int v37; // ecx
  float v38; // xmm0_4
  vec_t z; // edx
  char v40; // al
  float v41; // xmm1_4
  Quaternion *p_q; // rbx
  CAnimIKRuleStallFrame *v43; // rdx
  int slot; // edx
  vec_t v45; // xmm0_4
  vec_t v46; // xmm3_4
  vec_t v47; // xmm1_4
  __int64 v48; // [rsp+10h] [rbp-A0h]
  float s; // [rsp+38h] [rbp-78h]
  const CAnimIKRule *sa; // [rsp+38h] [rbp-78h]
  const CAnimIKRule *iRuleb; // [rsp+40h] [rbp-70h]
  float iRulec; // [rsp+40h] [rbp-70h]
  float total; // [rsp+4Ch] [rbp-64h]
  float totala; // [rsp+4Ch] [rbp-64h]
  float w; // [rsp+5Ch] [rbp-54h] BYREF
  Vector pos1; // [rsp+60h] [rbp-50h] BYREF
  Quaternion q1; // [rsp+70h] [rbp-40h] BYREF

  memset(ikRule, 0, sizeof(ikcontextikrule_t));
  v7 = CAnimationBlendList::pAnimdesc(blendList, 0);
  if ( blendList->m_nCount > 0 )
  {
    v9 = blendList;
    v10 = 0.0;
    v11 = 0;
    while ( 1 )
    {
      total = v10;
      v14 = CAnimationBlendList::pAnimdesc(blendList, v11);
      v15 = v9->m_flWeight[0];
      m_Size = v14->m_IKRuleArray.m_Size;
      v10 = total;
      if ( m_Size <= iRule || m_Size != v7->m_IKRuleArray.m_Size )
        return 0;
      p_index = &v14->m_IKRuleArray.m_Memory.m_pMemory[iRule].index;
      if ( p_index == 0 )
      {
        v21 = &v14->m_IKRuleZeroFrameArray.m_Memory.m_pMemory[iRule];
        if ( v21 == 0 )
          return 0;
        if ( total == 0.0 )
        {
          v10 = *(v21 + 4);
          v22 = v10;
          goto LABEL_24;
        }
        v22 = *(v21 + 4);
        if ( (v22 - total) <= 0.5 )
        {
          if ( (v22 - total) >= -0.5 )
LABEL_24:
            v23 = 0.0;
          else
            v23 = 1.0;
        }
        else
        {
          v23 = -1.0;
        }
        ikRule->start = ((v22 + v23) * v15) + ikRule->start;
        ikRule->peak = ((*(v21 + 8) + v23) * v15) + ikRule->peak;
        v8 = ((*(v21 + 12) + v23) * v15) + ikRule->tail;
        ikRule->tail = v8;
        ikRule->end = ((v23 + *(v21 + 16)) * v15) + ikRule->end;
        goto LABEL_7;
      }
      if ( total == 0.0 )
        break;
      v12 = p_index[23];
      if ( (v12 - total) > 0.5 )
      {
        v13 = -1.0;
        goto LABEL_6;
      }
      if ( (v12 - total) >= -0.5 )
        goto LABEL_13;
      v13 = 1.0;
LABEL_6:
      ikRule->start = ((v12 + v13) * v15) + ikRule->start;
      ikRule->peak = ((p_index[24] + v13) * v15) + ikRule->peak;
      v8 = ((p_index[25] + v13) * v15) + ikRule->tail;
      ikRule->tail = v8;
      ikRule->end = ((v13 + p_index[26]) * v15) + ikRule->end;
LABEL_7:
      ++v11;
      v9 = (v9 + 4);
      if ( blendList->m_nCount <= v11 )
        goto LABEL_15;
    }
    v10 = p_index[23];
    v12 = v10;
LABEL_13:
    v13 = 0.0;
    goto LABEL_6;
  }
LABEL_15:
  start = ikRule->start;
  if ( start <= 1.0 )
  {
    if ( start < 0.0 )
    {
      ikRule->start = start + 1.0;
      ikRule->peak = ikRule->peak + 1.0;
      ikRule->tail = ikRule->tail + 1.0;
      ikRule->end = ikRule->end + 1.0;
    }
  }
  else
  {
    ikRule->start = start - 1.0;
    ikRule->peak = ikRule->peak - 1.0;
    ikRule->tail = ikRule->tail - 1.0;
    ikRule->end = ikRule->end - 1.0;
  }
  v19 = Model_IKRuleWeight(ikRule, flCycle, v8);
  ikRule->flWeight = v19;
  if ( v19 <= 0.001 )
  {
    if ( !v7->m_flags.m_bLooping )
      return 0;
    if ( v7->m_IKRuleArray.m_Memory.m_pMemory[iRule].type != 3 )
      return 0;
    end = ikRule->end;
    if ( (end - ikRule->start) <= 0.75 )
      return 0;
    ikRule->flWeight = 0.001;
    flCycle = end - 0.001;
  }
  ikRule->pos.x = 0.0;
  ikRule->pos.y = 0.0;
  ikRule->pos.z = 0.0;
  ikRule->q.x = 0.0;
  ikRule->q.y = 0.0;
  ikRule->q.z = 0.0;
  ikRule->q.w = 0.0;
  if ( blendList->m_nCount <= 0 )
    return 0;
  v25 = blendList;
  totala = 0.0;
  v26 = 0;
  v27 = iRule << 7;
  v48 = iRule;
  do
  {
    while ( 1 )
    {
      v33 = CAnimationBlendList::pAnimdesc(blendList, v26);
      v34 = v25->m_flWeight[0];
      v35 = (v33->m_IKRuleArray.m_Memory.m_pMemory + v27);
      if ( v35 != 0 )
      {
        ikRule->chain = v35->chain;
        ikRule->bone = v35->bone;
        type = v35->type;
        ikRule->type = type;
        ikRule->slot = v35->slot;
        v37 = type - 1;
        ikRule->height = (v35->height * v34) + ikRule->height;
        ikRule->floor = (v35->floor * v34) + ikRule->floor;
        ikRule->radius = (v35->radius * v34) + ikRule->radius;
        ikRule->drop = (v35->drop * v34) + ikRule->drop;
        ikRule->top = (v35->top * v34) + ikRule->top;
      }
      else
      {
        v43 = &v33->m_IKRuleZeroFrameArray.m_Memory.m_pMemory[v48];
        if ( v43 == 0 )
          return 0;
        ikRule->type = 4;
        ikRule->chain = v43->chain;
        v37 = 3;
        slot = v43->slot;
        ikRule->bone = -1;
        ikRule->slot = slot;
        type = 4;
      }
      v38 = ikRule->end;
      if ( v38 > 1.0 && ikRule->start > flCycle )
        v28 = flCycle + 1.0;
      else
        v28 = flCycle;
      tail = ikRule->tail;
      v30 = 0.0;
      if ( tail < v28 )
      {
        v30 = 0.0;
        if ( v38 > v28 )
          v30 = (v28 - tail) / (v38 - tail);
      }
      ikRule->release = (v30 * v34) + ikRule->release;
      if ( v37 <= 4 && ((1LL << v37) & 0x17) != 0 )
      {
        s = v34;
        iRuleb = v35;
        z = vec3_origin.z;
        *&pos1.x = *&vec3_origin.x;
        pos1.z = z;
        q1 = quat_identity;
        v40 = CIKContext::CalcGoalOffset(this, v35, v33, flCycle, &pos1, &q1, &w);
        v35 = iRuleb;
        v41 = s;
        if ( v40 != 0 )
        {
          sa = iRuleb;
          iRulec = v41;
          v45 = (pos1.z * v41) + ikRule->pos.z;
          v46 = (pos1.x * v41) + ikRule->pos.x;
          ikRule->pos.y = (pos1.y * v41) + ikRule->pos.y;
          ikRule->pos.z = v45;
          ikRule->pos.x = v46;
          QuaternionAccumulate(&ikRule->q, v41, &q1, &ikRule->q);
          v35 = sa;
          totala = iRulec + totala;
        }
        type = ikRule->type;
        v38 = ikRule->end;
      }
      else
      {
        totala = v34 + totala;
      }
      v31 = v38 <= 1.0 || ikRule->start <= flCycle ? flCycle : flCycle + 1.0;
      v32 = 0.0;
      if ( ikRule->peak <= v31 )
        v32 = (v38 > v31);
      ikRule->latched = v32 * ikRule->flWeight;
      if ( type == 5 )
        break;
      ++v26;
      v25 = (v25 + 4);
      if ( blendList->m_nCount <= v26 )
        goto LABEL_58;
    }
    ++v26;
    v25 = (v25 + 4);
    ikRule->szLabel = CUtlString::Get(&v35->m_szAttachmentName);
  }
  while ( blendList->m_nCount > v26 );
LABEL_58:
  if ( totala <= 0.000099999997 )
    return 0;
  p_q = &ikRule->q;
  if ( totala < 0.99900001 )
  {
    p_q = &ikRule->q;
    ikRule->pos.x = ikRule->pos.x * (1.0 / totala);
    ikRule->pos.y = ikRule->pos.y * (1.0 / totala);
    v47 = ikRule->pos.z * (1.0 / totala);
    ikRule->pos.z = v47;
    QuaternionScale(&ikRule->q, v47, &ikRule->q);
  }
  QuaternionNormalize(p_q);
  return 1;
}


// CIKContext::CIKContext  (line 952, @0x0000000003071190, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CUtlMemory, CUtlMemoryFixed, CUtlVector, CUtlVectorBase, CUtlVectorFixed
// calls: CUtlVectorBase<CIKTarget, CUtlMemoryFixed<CIKTarget, 12ul> >::SetCount, Plat_IsInDebugSessionRaw
// callers: CBaseAnimatingController::UpdateIK
void __fastcall CIKContext::CIKContext(CIKContext *const this)
{
  int v1; // eax
  CIKContext *thisa; // [rsp+8h] [rbp-8h]

  this->m_target.m_Size = 0;
  if ( (this & 7) != 0 )
  {
    thisa = this;
    v1 = Plat_IsInDebugSessionRaw(this);
    this = thisa;
    if ( v1 != 0 )
      __debugbreak();
  }
  this->m_ikChainRule.m_Size = 0;
  this->m_ikChainRule.m_Memory.m_pMemory = 0;
  this->m_ikChainRule.m_Memory.m_nAllocationCount = 0;
  this->m_ikChainRule.m_Memory.m_nGrowSize = 0;
  this->m_ikLock.m_Size = 0;
  this->m_ikLock.m_Memory.m_pMemory = 0;
  this->m_ikLock.m_Memory.m_nAllocationCount = 0;
  this->m_ikLock.m_Memory.m_nGrowSize = 0;
  this->m_pDebugOverlay = 0;
  this->m_iFramecounter = -1;
  this->m_pModel = 0;
  this->m_flTime = -1.0;
  CUtlVectorBase<CIKTarget,CUtlMemoryFixed<CIKTarget,12ul>>::SetCount(&this->m_target, 0);
}


// CIKContext::Init  (line 961, @0x0000000003072dd0, libserver.so)  // inlines: memset
// calls: CUtlVectorBase<CUtlVector<ikcontextikrule_t, CUtlMemory<ikcontextikrule_t, int> >, CUtlMemory<CUtlVector<ikcontextikrule_t, CUtlMemory<ikcontextikrule_t, int> >, int> >::RemoveAll, CModel::numikchains, CUtlVectorBase<CUtlVector<ikcontextikrule_t, CUtlMemory<ikcontextikrule_t, int> >, CUtlMemory<CUtlVector<ikcontextikrule_t, CUtlMemory<ikcontextikrule_t, int> >, int> >::SetCount, AngleMatrix, CUtlVectorBase<CIKTarget, CUtlMemoryFixed<CIKTarget, 12ul> >::SetCount, memset, CIKContext::ClearTargets
// callers: CIKContext::Init
void __fastcall CIKContext::Init(
        CIKContext *const this,
        const CModel *pModel,
        const QAngle *const angles,
        const Vector *const pos,
        float flTime,
        int iFramecounter,
        int boneMask)
{
  CUtlVector<CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int> >,CUtlMemory<CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int> >,int> > *p_m_ikChainRule; // r12
  int v12; // eax

  p_m_ikChainRule = &this->m_ikChainRule;
  this->m_pModel = pModel;
  CUtlVectorBase<CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int>>,CUtlMemory<CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int>>,int>>::RemoveAll(&this->m_ikChainRule);
  if ( CModel::numikchains(pModel) != 0 )
  {
    v12 = CModel::numikchains(pModel);
    CUtlVectorBase<CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int>>,CUtlMemory<CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int>>,int>>::SetCount(
      p_m_ikChainRule,
      v12);
    if ( this->m_target.m_Size == 0 )
    {
      CUtlVectorBase<CIKTarget,CUtlMemoryFixed<CIKTarget,12ul>>::SetCount(&this->m_target, 12);
      memset(&this->m_target.m_Memory, 0, 352LL * this->m_target.m_Size);
      CIKContext::ClearTargets(this);
    }
  }
  else
  {
    CUtlVectorBase<CIKTarget,CUtlMemoryFixed<CIKTarget,12ul>>::SetCount(&this->m_target, 0);
  }
  AngleMatrix(angles, pos, &this->m_rootxform);
  this->m_iFramecounter = iFramecounter;
  this->m_boneMask = boneMask;
  this->m_flTime = flTime;
}


// CIKContext::Init  (line 989, @0x0000000003072ec0, libserver.so)  // inlines: MatrixAngles, MatrixPosition, ResourceHandleToData<InfoForResourceTypeCModel>, operator int
// calls: MatrixAngles, CIKContext::Init
// callers: CBaseAnimatingController::UpdateIK
void __fastcall CIKContext::Init(
        CIKContext *const this,
        HModel hModel,
        const matrix3x4a_t *const t,
        float flTime,
        int iFramecounter)
{
  const CModel *v7; // r13
  const CModel **m_pData; // rax
  Vector vOrigin; // [rsp+10h] [rbp-50h] BYREF
  QAngle angles; // [rsp+20h] [rbp-40h] BYREF

  v7 = 0;
  m_pData = hModel.m_pBinding->m_pData;
  if ( hModel.m_pBinding->m_pData != 0 && *(m_pData + 6) > 0 )
    v7 = *m_pData;
  MatrixAngles(t, &angles);
  vOrigin.x = t->m_flMatVal[0][3];
  vOrigin.y = t->m_flMatVal[1][3];
  vOrigin.z = t->m_flMatVal[2][3];
  CIKContext::Init(this, v7, &angles, &vOrigin, flTime, iFramecounter, 0xFFFFF);
}


// CIKContext::Init  (line 998, @0x0000000003072f50, libserver.so)  // inlines: ResourceHandleToData<InfoForResourceTypeCModel>, operator int
// calls: QuaternionAngles, CIKContext::Init
void __fastcall CIKContext::Init(
        CIKContext *const this,
        HModel hModel,
        const CTransform *const t,
        float flTime,
        int iFramecounter)
{
  const CModel *v7; // r13
  const CModel **m_pData; // rax
  QAngle angles; // [rsp+10h] [rbp-40h] BYREF

  v7 = 0;
  m_pData = hModel.m_pBinding->m_pData;
  if ( hModel.m_pBinding->m_pData != 0 && *(m_pData + 6) > 0 )
    v7 = *m_pData;
  QuaternionAngles(&t->m_orientation, &angles);
  CIKContext::Init(this, v7, &angles, &t->m_vPosition, flTime, iFramecounter, 0xFFFFF);
}


// CIKContext::AddDependencies  (line 1006, @0x00000000030729f0, libserver.so)  // inlines: AddToTail, Element, GrowMemory, memset, operator=, operator[]
// calls: CModel::numikchains, CModel::pSeqdesc, CIKContext::AddRule, CModel::pIKChain, CModel::boneFlags, CUtlVectorBase<ikcontextikrule_t, CUtlMemory<ikcontextikrule_t, int> >::RemoveAll, CUtlVectorBase<CIKTarget, CUtlMemoryFixed<CIKTarget, 12ul> >::SetCount, memset, CIKContext::ClearTargets, CUtlMemory<ikcontextikrule_t, int>::Grow
// callers: CBaseAnimatingController::UpdateIK
void __fastcall CIKContext::AddDependencies(
        CIKContext *const this,
        HSequence hSequence,
        float flCycle,
        const CAnimationBlendList *const blendList,
        float flWeight)
{
  const ISequence *v8; // r13
  float v9; // xmm0_4
  int i; // ebx
  const CAnimIKChain *v11; // rax
  CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int> > *v12; // rax
  __int64 m_Size; // rcx
  int v14; // edx
  int v15; // [rsp+4h] [rbp-DCh]
  CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int> > *v16; // [rsp+8h] [rbp-D8h]
  float flWeightb; // [rsp+18h] [rbp-C8h]
  ikcontextikrule_t ikrule; // [rsp+20h] [rbp-C0h] BYREF

  if ( CModel::numikchains(this->m_pModel) != 0 )
  {
    v8 = CModel::pSeqdesc(this->m_pModel, hSequence);
    if ( (*(v8->_vptr_IBaseSequence + 5))(v8) != 0 )
    {
      v9 = 1.0;
      if ( flWeight <= 1.0 )
        v9 = fmaxf(0.0, flWeight);
      flWeightb = v9;
      for ( i = 0; i < (*(v8->_vptr_IBaseSequence + 5))(v8); ++i )
      {
        if ( CIKContext::AddRule(this, flCycle, i, blendList, &ikrule) != 0 )
        {
          v11 = CModel::pIKChain(this->m_pModel, ikrule.chain);
          if ( (CModel::boneFlags(this->m_pModel, v11->m_linkArray.m_Memory.m_pMemory[2].bone) & this->m_boneMask) != 0
            && (ikrule.bone < 0 || (CModel::boneFlags(this->m_pModel, ikrule.bone) & this->m_boneMask) != 0) )
          {
            if ( this->m_target.m_Size == 0 )
            {
              CUtlVectorBase<CIKTarget,CUtlMemoryFixed<CIKTarget,12ul>>::SetCount(&this->m_target, 12);
              memset(&this->m_target.m_Memory, 0, 352LL * this->m_target.m_Size);
              CIKContext::ClearTargets(this);
            }
            ikrule.flRuleWeight = flWeightb;
            if ( (ikrule.flWeight * flWeightb) <= 0.99900001
              || ikrule.type == 6
              || (CUtlVectorBase<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int>>::RemoveAll(&this->m_ikChainRule.m_Memory.m_pMemory[ikrule.chain]),
                  ikrule.type != 4) )
            {
              v12 = &this->m_ikChainRule.m_Memory.m_pMemory[ikrule.chain];
              m_Size = v12->m_Size;
              if ( m_Size == v12->m_Memory.m_nAllocationCount )
              {
                v15 = v12->m_Size;
                v16 = &this->m_ikChainRule.m_Memory.m_pMemory[ikrule.chain];
                CUtlMemory<ikcontextikrule_t,int>::Grow(&v12->m_Memory, 1);
                v12 = v16;
                m_Size = v15;
                v14 = v16->m_Size;
              }
              else
              {
                v14 = v12->m_Size;
              }
              v12->m_Size = v14 + 1;
              this->m_ikChainRule.m_Memory.m_pMemory[ikrule.chain].m_Memory.m_pMemory[m_Size] = ikrule;
            }
          }
        }
      }
    }
  }
}


// CIKContext::AddAutoplayLocks  (line 1092, @0x000000000306f610, libserver.so)
void __fastcall CIKContext::AddAutoplayLocks(CIKContext *const this, CTransform *xforms)
{
  ;
}


// CIKContext::AddSequenceLocks  (line 1149, @0x000000000306f620, libserver.so)
void __fastcall CIKContext::AddSequenceLocks(CIKContext *const this, HSequence hSequence, CTransform *xforms)
{
  ;
}


// SolveBone  (line 1210, @0x000000000306f630, libserver.so)
// calls: CModel::boneParent, MatrixInvert, ConcatTransforms_Aligned, MatrixTransform
// callers: CIKContext::SolveDependencies
void __fastcall SolveBone(const CModel *pModel, int iBone, matrix3x4a_t *pBoneToWorld, CTransform *transform)
{
  __int64 v6; // rbx
  matrix3x4a_t *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  matrix3x4a_t mParentBoneToWorld; // [rsp+0h] [rbp-E0h] BYREF
  matrix3x4a_t mParentWorldToBone; // [rsp+30h] [rbp-B0h] BYREF
  matrix3x4a_t mBoneToWorld; // [rsp+60h] [rbp-80h] BYREF
  matrix3x4a_t mBoneInParentSpace; // [rsp+90h] [rbp-50h] BYREF

  v6 = iBone;
  v7 = &pBoneToWorld[CModel::boneParent(pModel, iBone)];
  *&mParentBoneToWorld.m_flMatVal[0][0] = *&v7->m_flMatVal[0][0];
  *&mParentBoneToWorld.m_flMatVal[1][0] = *&v7->m_flMatVal[1][0];
  v8 = *&v7->m_flMatVal[2][0];
  v9 = *&v7->m_flMatVal[2][2];
  *&mParentBoneToWorld.m_flMatVal[2][0] = v8;
  *&mParentBoneToWorld.m_flMatVal[2][2] = v9;
  MatrixInvert(&mParentBoneToWorld, &mParentWorldToBone);
  mBoneToWorld = pBoneToWorld[v6];
  ConcatTransforms_Aligned(&mParentWorldToBone, &mBoneToWorld, &mBoneInParentSpace);
  MatrixTransform(&mBoneInParentSpace, &transform[v6]);
}


// SolveTransform  (line 1232, @0x000000000306f730, libserver.so)
// calls: CModel::boneParent, MatrixInvert, ConcatTransforms_Aligned, MatrixAngles
void __fastcall SolveTransform(
        const CModel *pModel,
        int nBone,
        matrix3x4a_t *pBoneToWorldArray,
        CTransform *pTransformArray)
{
  __int64 v6; // rbx
  int v7; // eax
  matrix3x4a_t worldToBone; // [rsp+0h] [rbp-90h] BYREF
  matrix3x4a_t local; // [rsp+30h] [rbp-60h] BYREF

  v6 = nBone;
  v7 = CModel::boneParent(pModel, nBone);
  if ( v7 == -1 )
  {
    MatrixAngles(&pBoneToWorldArray[v6], &pTransformArray[v6].m_orientation, &pTransformArray[v6].m_vPosition);
  }
  else
  {
    MatrixInvert(&pBoneToWorldArray[v7], &worldToBone);
    ConcatTransforms_Aligned(&worldToBone, &pBoneToWorldArray[v6], &local);
    MatrixAngles(&local, &pTransformArray[v6].m_orientation, &pTransformArray[v6].m_vPosition);
  }
}


// CIKTarget::SetOwner  (line 1259, @0x000000000306f7f0, libserver.so)  // inlines: operator=
// callers: CBaseAnimatingController::CalculateIKLocks
void __fastcall CIKTarget::SetOwner(
        CIKTarget *const this,
        int entindex,
        const Vector *const pos,
        const QAngle *const angles)
{
  this->latched.owner = entindex;
  this->latched.absOrigin = *pos;
  this->latched.absAngles = *angles;
}


// CIKTarget::ClearOwner  (line 1269, @0x000000000306f850, libserver.so)
// callers: CBaseAnimatingController::CalculateIKLocks
void __fastcall CIKTarget::ClearOwner(CIKTarget *const this)
{
  this->latched.owner = -1;
}


// CIKTarget::GetOwner  (line 1277, @0x000000000306f860, libserver.so)
// callers: CBaseAnimatingController::UpdateIKLocks
int __fastcall CIKTarget::GetOwner(CIKTarget *const this)
{
  return this->latched.owner;
}


// CIKTarget::UpdateOwner  (line 1286, @0x000000000306f870, libserver.so)  // inlines: operator==
// calls: AngleMatrix, AngleIMatrix, QuaternionMatrix, ConcatTransforms_Aligned, MatrixAngles
// callers: CBaseAnimatingController::UpdateIKLocks
void __fastcall CIKTarget::UpdateOwner(
        CIKTarget *const this,
        int entindex,
        const Vector *const pos,
        const QAngle *const angles)
{
  Vector *p_pos; // r13
  Quaternion *p_q; // rbx
  matrix3x4a_t in; // [rsp+10h] [rbp-F0h] BYREF
  matrix3x4a_t out; // [rsp+40h] [rbp-C0h] BYREF
  matrix3x4a_t tmp1; // [rsp+70h] [rbp-90h] BYREF
  matrix3x4a_t tmp2; // [rsp+A0h] [rbp-60h] BYREF

  if ( this->latched.absOrigin.x != pos->x
    || this->latched.absOrigin.y != pos->y
    || this->latched.absOrigin.z != pos->z
    || this->latched.absAngles.x != angles->x
    || this->latched.absAngles.y != angles->y
    || this->latched.absAngles.z != angles->z )
  {
    AngleMatrix(angles, pos, &in);
    AngleIMatrix(&this->latched.absAngles, &this->latched.absOrigin, &out);
    p_pos = &this->latched.pos;
    p_q = &this->latched.q;
    QuaternionMatrix(p_q, p_pos, &tmp1);
    ConcatTransforms_Aligned(&out, &tmp1, &tmp2);
    ConcatTransforms_Aligned(&in, &tmp2, &tmp1);
    MatrixAngles(&tmp1, p_q, p_pos);
  }
}


// CIKTarget::SetPos  (line 1308, @0x000000000306f9c0, libserver.so)  // inlines: operator=
// callers: CBaseAnimatingController::CalculateIKLocks
void __fastcall CIKTarget::SetPos(CIKTarget *const this, const Vector *const pos)
{
  this->est.pos = *pos;
}


// CIKTarget::SetAngles  (line 1317, @0x000000000306f9f0, libserver.so)
// calls: AngleQuaternion
// callers: CBaseAnimatingController::CalculateIKLocks
void __fastcall CIKTarget::SetAngles(CIKTarget *const this, const QAngle *const angles)
{
  AngleQuaternion(angles, &this->est.q);
}


// CIKTarget::SetQuaternion  (line 1326, @0x000000000306fa10, libserver.so)  // inlines: operator=
void __fastcall CIKTarget::SetQuaternion(CIKTarget *const this, const Quaternion *const q)
{
  this->est.q = *q;
}


// CIKTarget::SetNormal  (line 1336, @0x000000000306fa40, libserver.so)  // inlines: CrossProduct, GetColumn, MatrixGetColumn, MatrixSetColumn, SetColumn
// calls: QuaternionMatrix, MatrixAngles
// callers: CBaseAnimatingController::CalculateIKLocks
void __fastcall CIKTarget::SetNormal(CIKTarget *const this, const Vector *const normal)
{
  Quaternion *p_q; // r13
  float x; // xmm2_4
  float v5; // xmm4_4
  Vector p1; // [rsp+0h] [rbp-60h] BYREF
  matrix3x4a_t m1; // [rsp+10h] [rbp-50h] BYREF

  p_q = &this->est.q;
  QuaternionMatrix(&this->est.q, &m1);
  x = normal->x;
  m1.m_flMatVal[1][2] = normal->y;
  m1.m_flMatVal[0][2] = x;
  m1.m_flMatVal[2][2] = normal->z;
  m1.m_flMatVal[2][0] = (m1.m_flMatVal[0][1] * m1.m_flMatVal[1][2]) - (m1.m_flMatVal[1][1] * x);
  v5 = (m1.m_flMatVal[2][1] * x) - (m1.m_flMatVal[0][1] * m1.m_flMatVal[2][2]);
  m1.m_flMatVal[1][0] = v5;
  m1.m_flMatVal[0][0] = (m1.m_flMatVal[1][1] * m1.m_flMatVal[2][2]) - (m1.m_flMatVal[2][1] * m1.m_flMatVal[1][2]);
  m1.m_flMatVal[0][1] = (m1.m_flMatVal[1][2] * m1.m_flMatVal[2][0]) - (m1.m_flMatVal[2][2] * v5);
  m1.m_flMatVal[1][1] = (m1.m_flMatVal[2][2] * m1.m_flMatVal[0][0]) - (m1.m_flMatVal[2][0] * x);
  m1.m_flMatVal[2][1] = (v5 * x) - (m1.m_flMatVal[0][0] * m1.m_flMatVal[1][2]);
  MatrixAngles(&m1, p_q, &p1);
}


// CIKTarget::SetPosWithNormalOffset  (line 1360, @0x000000000306fb30, libserver.so)  // inlines: operator=
// calls: sqrt
// callers: CBaseAnimatingController::CalculateIKLocks
void __fastcall CIKTarget::SetPosWithNormalOffset(
        CIKTarget *const this,
        const Vector *const pos,
        const Vector *const normal)
{
  float z; // xmm1_4
  float v4; // xmm0_4

  this->est.pos.x = pos->x;
  this->est.pos.y = pos->y;
  z = pos->z;
  this->est.pos.z = z;
  v4 = normal->z;
  if ( v4 <= 0.99989998 )
  {
    if ( v4 > 0.70700002 )
      this->est.pos.z = this->est.pos.z - ((sqrt((1.0 - (v4 * v4))) / normal->z) * this->est.radius);
    else
      this->est.pos.z = z - this->est.radius;
  }
}


// CIKTarget::SetOnWorld  (line 1384, @0x000000000306fbe0, libserver.so)
// callers: CBaseAnimatingController::CalculateIKLocks
void __fastcall CIKTarget::SetOnWorld(CIKTarget *const this, bool bOnWorld)
{
  this->est.onWorld = bOnWorld;
}


// CIKTarget::IsActive  (line 1392, @0x000000000306fbf0, libserver.so)
// callers: CBaseAnimatingController::UpdateIKLocks, CBaseAnimatingController::CalculateIKLocks
bool __fastcall CIKTarget::IsActive(CIKTarget *const this)
{
  return this->est.flWeight > 0.0;
}


// CIKTarget::IKFailed  (line 1400, @0x000000000306fc10, libserver.so)  // inlines: Init, operator=
// callers: CBaseAnimatingController::CalculateIKLocks
void __fastcall CIKTarget::IKFailed(CIKTarget *const this)
{
  vec_t x; // xmm1_4
  vec_t y; // xmm1_4
  vec_t z; // xmm1_4
  vec_t v4; // xmm1_4
  vec_t v5; // xmm1_4
  vec_t v6; // xmm1_4
  vec_t w; // xmm1_4

  x = this->ideal.pos.x;
  this->latched.deltaPos.x = 0.0;
  this->latched.pos.x = x;
  y = this->ideal.pos.y;
  this->latched.deltaPos.y = 0.0;
  this->latched.pos.y = y;
  z = this->ideal.pos.z;
  this->latched.deltaPos.z = 0.0;
  this->latched.pos.z = z;
  v4 = this->ideal.q.x;
  this->latched.deltaQ.x = 0.0;
  this->latched.q.x = v4;
  v5 = this->ideal.q.y;
  this->latched.deltaQ.y = 0.0;
  this->latched.q.y = v5;
  v6 = this->ideal.q.z;
  this->latched.deltaQ.z = 0.0;
  this->latched.q.z = v6;
  w = this->ideal.q.w;
  this->latched.deltaQ.w = 0.0;
  this->latched.q.w = w;
  this->est.latched = 0.0;
  this->est.flWeight = 0.0;
  this->est.onWorld = 0;
}


// CIKTarget::MoveReferenceFrame  (line 1414, @0x000000000306fcc0, libserver.so)  // inlines: operator-=
void __fastcall CIKTarget::MoveReferenceFrame(CIKTarget *const this, Vector *const deltaPos, QAngle *const deltaAngles)
{
  this->est.pos.x = this->est.pos.x - deltaPos->x;
  this->est.pos.y = this->est.pos.y - deltaPos->y;
  this->est.pos.z = this->est.pos.z - deltaPos->z;
  this->latched.pos.x = this->latched.pos.x - deltaPos->x;
  this->latched.pos.y = this->latched.pos.y - deltaPos->y;
  this->latched.pos.z = this->latched.pos.z - deltaPos->z;
  this->offset.pos.x = this->offset.pos.x - deltaPos->x;
  this->offset.pos.y = this->offset.pos.y - deltaPos->y;
  this->offset.pos.z = this->offset.pos.z - deltaPos->z;
  this->ideal.pos.x = this->ideal.pos.x - deltaPos->x;
  this->ideal.pos.y = this->ideal.pos.y - deltaPos->y;
  this->ideal.pos.z = this->ideal.pos.z - deltaPos->z;
}


// CIKContext::ClearTargets  (line 1426, @0x000000000306fd90, libserver.so)
// callers: CBaseAnimatingController::OnTeleported, CIKContext::AddDependencies, CIKContext::Init
void __fastcall CIKContext::ClearTargets(CIKContext *const this)
{
  int v1; // eax
  CUtlVectorBase<CIKTarget,CUtlMemoryFixed<CIKTarget,12ul> >::CAllocator *i; // rdx

  v1 = 0;
  for ( i = &this->m_target.m_Memory; this->m_target.m_Size > v1; i = (i + 352) )
  {
    *&i->m_Memory.m_Data[216] = -9999;
    ++v1;
  }
}


// CIKContext::UpdateTargets  (line 1440, @0x0000000003071780, libserver.so)  // inlines: BitVec_IsBitSet, Element, FastSqrt, Init, Length, Lerp<Vector>, Lerp<float>, MatrixPosition, VectorAdd, VectorLength, VectorMultiply, VectorScale, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=, operator[]
// calls: CIKContext::AutoIKRelease, CModel::pIKChain, QuaternionMatrix, MatrixInvert, ConcatTransforms_Aligned, MatrixAngles, QuaternionMA, VectorNormalize, QuaternionSlerp, QuaternionScale, QuaternionSM
// callers: CBaseAnimatingController::UpdateIK
void __fastcall CIKContext::UpdateTargets(
        CIKContext *const this,
        uint32 *pIKChainsToEvaluate,
        CTransform *xforms,
        matrix3x4a_t *boneToWorld)
{
  CIKContext *v5; // rbx
  CUtlVectorBase<CIKTarget,CUtlMemoryFixed<CIKTarget,12ul> >::CAllocator *p_m_Memory; // r8
  int v7; // edi
  unsigned __int8 *v8; // rsi
  CUtlVectorBase<CIKTarget,CUtlMemoryFixed<CIKTarget,12ul> >::CAllocator *v9; // rax
  unsigned __int8 *v10; // rcx
  signed __int64 v11; // rdx
  float v12; // xmm5_4
  CIKContext *v13; // r9
  CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int> > *m_pMemory; // rsi
  int v15; // r8d
  __int64 v16; // rbx
  int v17; // xmm4_4
  float v18; // xmm3_4
  CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int> > *v19; // rax
  __int64 v20; // r14
  float v21; // xmm2_4
  __int64 v22; // rax
  __int64 v23; // r13
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rax
  float v27; // xmm1_4
  CUtlVectorBase<CIKTarget,CUtlMemoryFixed<CIKTarget,12ul> >::CAllocator *v28; // r15
  CIKContext *v29; // r9
  __int64 v30; // r13
  CUtlVectorBase<CIKTarget,CUtlMemoryFixed<CIKTarget,12ul> >::CAllocator *v31; // r12
  Quaternion *v32; // r10
  unsigned __int8 *v33; // rcx
  unsigned __int8 *v34; // rdx
  int v35; // ebx
  __int64 bone; // r14
  int m_iFramecounter; // eax
  int v38; // edx
  matrix3x4a_t *v39; // r10
  int v40; // xmm5_4
  signed __int64 v41; // r14
  CIKContext *v42; // r9
  int v43; // xmm4_4
  int v44; // xmm3_4
  int v45; // xmm2_4
  float v46; // xmm12_4
  signed __int64 v47; // rax
  float v48; // xmm11_4
  float v49; // xmm10_4
  unsigned __int8 v50; // dl
  float v51; // xmm1_4
  float v52; // xmm2_4
  float v53; // xmm10_4
  float v54; // xmm12_4
  signed __int64 v55; // rax
  signed __int64 v56; // rax
  CAnimIKLink *v57; // rax
  float *v58; // rcx
  float v59; // xmm3_4
  float v60; // xmm2_4
  float v61; // xmm1_4
  float *v62; // rcx
  float v63; // xmm8_4
  float *v64; // rax
  float v65; // xmm7_4
  float v66; // xmm6_4
  float v67; // xmm4_4
  float v68; // xmm9_4
  float v69; // xmm0_4
  float v70; // xmm5_4
  float v71; // xmm13_4
  float v72; // xmm4_4
  float v73; // xmm0_4
  float z; // xmm5_4
  float y; // xmm6_4
  float v76; // xmm7_4
  float v77; // xmm5_4
  __int64 v78; // r15
  float v79; // xmm0_4
  float v80; // xmm0_4
  float v81; // xmm7_4
  float v82; // xmm8_4
  float v83; // xmm0_4
  float v84; // xmm6_4
  float v85; // xmm1_4
  float v86; // xmm0_4
  float v87; // xmm1_4
  float v88; // xmm0_4
  float v89; // xmm1_4
  float v90; // xmm0_4
  float v91; // xmm1_4
  float v92; // xmm0_4
  float v93; // xmm1_4
  float v94; // xmm4_4
  float v95; // xmm14_4
  float v96; // xmm13_4
  float v97; // xmm4_4
  float v98; // xmm4_4
  float v99; // xmm0_4
  double v100; // xmm0_8^8
  float v101; // xmm0_4
  float v102; // xmm0_4
  float v103; // xmm3_4
  signed __int64 v104; // rdx
  float v105; // xmm2_4
  float v106; // xmm3_4
  signed __int64 v107; // rax
  signed __int64 v108; // rax
  signed __int64 v109; // rax
  unsigned __int8 *v110; // [rsp+8h] [rbp-188h]
  unsigned __int8 *v111; // [rsp+10h] [rbp-180h]
  unsigned __int8 *v112; // [rsp+18h] [rbp-178h]
  unsigned __int8 *v113; // [rsp+20h] [rbp-170h]
  unsigned __int8 *v114; // [rsp+28h] [rbp-168h]
  CIKContext *v115; // [rsp+40h] [rbp-150h]
  matrix3x4a_t *v116; // [rsp+48h] [rbp-148h]
  float v117; // [rsp+58h] [rbp-138h]
  float d2; // [rsp+5Ch] [rbp-134h]
  CIKContext *d1; // [rsp+60h] [rbp-130h]
  float v120; // [rsp+68h] [rbp-128h]
  matrix3x4a_t *v121; // [rsp+68h] [rbp-128h]
  matrix3x4a_t *v122; // [rsp+70h] [rbp-120h]
  float v123; // [rsp+70h] [rbp-120h]
  signed __int64 v124; // [rsp+70h] [rbp-120h]
  CIKContext *v125; // [rsp+78h] [rbp-118h]
  CIKContext *v126; // [rsp+78h] [rbp-118h]
  float v127; // [rsp+78h] [rbp-118h]
  matrix3x4a_t *m1; // [rsp+80h] [rbp-110h]
  float m1a; // [rsp+80h] [rbp-110h]
  float latched; // [rsp+88h] [rbp-108h]
  float latcheda; // [rsp+88h] [rbp-108h]
  float latchedb; // [rsp+88h] [rbp-108h]
  const CAnimIKChain *pchain; // [rsp+90h] [rbp-100h]
  float pchaina; // [rsp+90h] [rbp-100h]
  uint32 *pIKChainsToEvaluatea; // [rsp+A0h] [rbp-F0h]
  unsigned __int8 *v137; // [rsp+A8h] [rbp-E8h]
  unsigned __int8 *v138; // [rsp+B0h] [rbp-E0h]
  unsigned __int8 *v139; // [rsp+B8h] [rbp-D8h]
  unsigned __int8 *v140; // [rsp+C0h] [rbp-D0h]
  CIKContext *v141; // [rsp+C0h] [rbp-D0h]
  unsigned __int8 *v142; // [rsp+C8h] [rbp-C8h]
  int v143; // [rsp+C8h] [rbp-C8h]
  Quaternion *qt; // [rsp+D0h] [rbp-C0h]
  int qta; // [rsp+D0h] [rbp-C0h]
  Quaternion *q; // [rsp+D8h] [rbp-B8h]
  float qa; // [rsp+D8h] [rbp-B8h]
  unsigned __int8 *v148; // [rsp+E0h] [rbp-B0h]
  float v149; // [rsp+E0h] [rbp-B0h]
  unsigned __int8 *v150; // [rsp+E8h] [rbp-A8h]
  float v151; // [rsp+E8h] [rbp-A8h]
  Vector dt; // [rsp+F0h] [rbp-A0h] BYREF
  matrix3x4a_t local; // [rsp+100h] [rbp-90h] BYREF
  matrix3x4a_t worldFootpad; // [rsp+130h] [rbp-60h] BYREF

  v5 = this;
  if ( this->m_target.m_Size > 0 )
  {
    p_m_Memory = &this->m_target.m_Memory;
    v7 = 0;
    v8 = &v5->m_target.m_Memory.m_Memory.m_Data[16];
    v9 = p_m_Memory;
    v10 = &v5->m_target.m_Memory.m_Memory.m_Data[28];
    do
    {
      *&v9->m_Memory.m_Data[100] = 0;
      ++v7;
      v11 = v9 - p_m_Memory;
      *&v9->m_Memory.m_Data[76] = 1065353216;
      v9 = (v9 + 352);
      *&v9[-1].m_Memory.m_Data[3952] = 1065353216;
      *&v9[-1].m_Memory.m_Data[3956] = 0;
      *&v9[-1].m_Memory.m_Data[3960] = 0;
      *&v9[-1].m_Memory.m_Data[3964] = 0;
      *&v8[v11] = 0;
      *&v8[v11 + 4] = 0;
      *&v8[v11 + 8] = 0;
      *&v10[v11] = 0;
      *&v10[v11 + 4] = 0;
      *&v10[v11 + 8] = 0;
      *&v10[v11 + 12] = 0;
    }
    while ( v5->m_target.m_Size > v7 );
  }
  CIKContext::AutoIKRelease(v5);
  if ( v5->m_ikChainRule.m_Size > 0 )
  {
    v12 = 1.0;
    v13 = v5;
    m_pMemory = v5->m_ikChainRule.m_Memory.m_pMemory;
    v15 = 0;
    v16 = 0;
    *&v17 = 1.0;
    v18 = 0.0;
    while ( 1 )
    {
      v19 = &m_pMemory[v16];
      if ( m_pMemory[v16].m_Size > 0 )
        break;
LABEL_21:
      ++v15;
      ++v16;
      if ( v13->m_ikChainRule.m_Size <= v15 )
      {
        v5 = v13;
        goto LABEL_23;
      }
    }
    v20 = 0;
    v21 = 1.0;
    while ( 1 )
    {
      v23 = &v19->m_Memory.m_pMemory[v20];
      v24 = *(v23 + 8);
      if ( ((1 << v24) & pIKChainsToEvaluate[v24 >> 5]) == 0 )
        goto LABEL_14;
      v25 = *(v23 + 4);
      if ( v25 == 4 )
      {
        v26 = &v13->m_target.m_Memory + 352 * *(v23 + 16);
        if ( *(v23 + 100) <= v18 )
        {
          v27 = v12;
          *(v26 + 76) = fminf(*(v26 + 76), v12 - *(v23 + 92));
        }
        else
        {
          *&v13->m_target.m_Memory.m_Memory.m_Data[352 * *(v23 + 16) + 76] = 0;
          v27 = *&v17;
        }
        *(v26 + 100) = (v27 - (*(v23 + 92) * *(v23 + 96))) * *(v26 + 100);
LABEL_20:
        m_pMemory = v13->m_ikChainRule.m_Memory.m_pMemory;
        ++v20;
        v19 = &m_pMemory[v16];
        if ( m_pMemory[v16].m_Size <= v20 )
          goto LABEL_21;
      }
      else
      {
        if ( v25 <= 4 )
        {
          if ( v25 != 3 )
            goto LABEL_14;
        }
        else if ( v25 != 5 )
        {
          if ( v25 == 6 )
          {
            if ( *(v23 + 100) <= 0.0 )
            {
              v22 = &v13->m_target.m_Memory + 352 * *(v23 + 16);
              *(v22 + 76) = fminf(*(v22 + 76), 1.0 - *(v23 + 92));
            }
            else
            {
              *&v13->m_target.m_Memory.m_Memory.m_Data[352 * *(v23 + 16) + 76] = 0;
            }
            m_pMemory = v13->m_ikChainRule.m_Memory.m_pMemory;
          }
          goto LABEL_14;
        }
        v78 = &v13->m_target.m_Memory + 352 * *(v23 + 16);
        *v78 = v24;
        *(v78 + 4) = *(v23 + 4);
        if ( *(v23 + 4) == 5 )
          *(v78 + 8) = *(v23 + 104);
        else
          *(v78 + 8) = 0;
        v79 = *(v23 + 96);
        if ( v79 == v21 || *(v78 + 100) == 0.0 )
        {
          *(v78 + 28) = *(v23 + 44);
          *(v78 + 32) = *(v23 + 48);
          *(v78 + 36) = *(v23 + 52);
          *(v78 + 40) = *(v23 + 56);
          *(v78 + 16) = *(v23 + 32);
          *(v78 + 20) = *(v23 + 36);
          *(v78 + 24) = *(v23 + 40);
          *(v78 + 84) = *(v23 + 20);
          *(v78 + 88) = *(v23 + 28);
          *(v78 + 92) = *(v23 + 24);
          *(v78 + 76) = *(v23 + 100) * *(v23 + 96);
          *(v78 + 80) = *(v23 + 88);
          *(v78 + 100) = *(v23 + 92) * *(v23 + 96);
        }
        else
        {
          v141 = v13;
          v143 = v15;
          qta = v17;
          qa = v12;
          v149 = v18;
          v151 = v21;
          QuaternionSlerp((v78 + 28), (v23 + 44), v79, (v78 + 28));
          v81 = *(v23 + 96);
          v82 = *(v78 + 16);
          v13 = v141;
          v15 = v143;
          v17 = qta;
          v12 = qa;
          v18 = v149;
          v21 = v151;
          v83 = ((*(v23 + 40) - *(v78 + 24)) * v81) + *(v78 + 24);
          v84 = *(v23 + 32);
          *(v78 + 20) = ((*(v23 + 36) - *(v78 + 20)) * v81) + *(v78 + 20);
          v85 = *(v78 + 84);
          *(v78 + 24) = v83;
          *(v78 + 16) = ((v84 - v82) * v81) + v82;
          v86 = ((*(v23 + 20) - v85) * *(v23 + 96)) + v85;
          v87 = *(v78 + 88);
          *(v78 + 84) = v86;
          v88 = ((*(v23 + 28) - v87) * *(v23 + 96)) + v87;
          v89 = *(v78 + 92);
          *(v78 + 88) = v88;
          v90 = ((*(v23 + 24) - v89) * *(v23 + 96)) + v89;
          v91 = *(v78 + 80);
          *(v78 + 92) = v90;
          *(v78 + 76) = fminf(*(v78 + 76), *(v23 + 100));
          v92 = ((*(v23 + 88) - v91) * *(v23 + 96)) + v91;
          v93 = *(v78 + 100);
          *(v78 + 80) = v92;
          *(v78 + 100) = ((*(v23 + 92) - v93) * *(v23 + 96)) + v93;
        }
        if ( *(v23 + 4) != 3 )
          goto LABEL_20;
        v80 = *(v78 + 88);
        *(v78 + 284) = 0;
        *(v78 + 112) = v80 + v13->m_rootxform.m_flMatVal[2][3];
        m_pMemory = v13->m_ikChainRule.m_Memory.m_pMemory;
LABEL_14:
        ++v20;
        v19 = &m_pMemory[v16];
        if ( m_pMemory[v16].m_Size <= v20 )
          goto LABEL_21;
      }
    }
  }
LABEL_23:
  if ( v5->m_target.m_Size > 0 )
  {
    pIKChainsToEvaluatea = pIKChainsToEvaluate;
    v28 = &v5->m_target.m_Memory;
    v29 = v5;
    v30 = 0;
    q = &v5->m_target.m_Memory.m_Memory.m_Data[288];
    v31 = &v5->m_target.m_Memory;
    v112 = &v5->m_target.m_Memory.m_Memory.m_Data[276];
    v32 = &v5->m_target.m_Memory.m_Memory.m_Data[116];
    v33 = &v5->m_target.m_Memory.m_Memory.m_Data[248];
    v113 = &v5->m_target.m_Memory.m_Memory.m_Data[116];
    v34 = &v5->m_target.m_Memory.m_Memory.m_Data[260];
    v114 = &v5->m_target.m_Memory.m_Memory.m_Data[104];
    v35 = 0;
    v111 = v33;
    qt = v32;
    v110 = v34;
    v142 = v33;
    v140 = v114;
    v139 = v34;
    v138 = v112;
    v137 = v33;
    v150 = v114;
    v148 = v112;
    while ( 1 )
    {
      if ( ((1 << *v31->m_Memory.m_Data) & pIKChainsToEvaluatea[*v31->m_Memory.m_Data >> 5]) == 0
        || *&v31->m_Memory.m_Data[100] <= 0.0 )
      {
        goto LABEL_41;
      }
      v122 = v32;
      v125 = v29;
      pchain = CModel::pIKChain(v29->m_pModel, *v31->m_Memory.m_Data);
      bone = pchain->m_linkArray.m_Memory.m_pMemory[2].bone;
      QuaternionMatrix(&v28->m_Memory.m_Data[v30 + 28], &v28->m_Memory.m_Data[v30 + 16], &local);
      MatrixInvert(&local, &local);
      ConcatTransforms_Aligned(&boneToWorld[bone], &local, &worldFootpad);
      v31->m_Memory.m_Data[208] = *&v31->m_Memory.m_Data[76] == 1.0;
      m_iFramecounter = v125->m_iFramecounter;
      if ( m_iFramecounter < 0 || (v38 = *&v31->m_Memory.m_Data[216]) < m_iFramecounter - 1 || m_iFramecounter < v38 )
      {
        v31->m_Memory.m_Data[209] = 0;
        *&v31->m_Memory.m_Data[212] = 0;
        m_iFramecounter = v125->m_iFramecounter;
      }
      *&v31->m_Memory.m_Data[216] = m_iFramecounter;
      MatrixAngles(&worldFootpad, &v28->m_Memory.m_Data[v30 + 60], &v28->m_Memory.m_Data[v30 + 48]);
      v39 = v122;
      v40 = *&v28->m_Memory.m_Data[v30 + 60];
      v41 = v122 - v28;
      *&v113[v41 - 116] = v40;
      v42 = v125;
      v43 = *&v28->m_Memory.m_Data[v30 + 64];
      *&v113[v41 - 112] = v43;
      v44 = *&v28->m_Memory.m_Data[v30 + 68];
      *&v113[v41 - 108] = v44;
      v45 = *&v28->m_Memory.m_Data[v30 + 72];
      *&v113[v41 - 104] = v45;
      v46 = *&v28->m_Memory.m_Data[v30 + 48];
      v47 = v150 - v28;
      *&v114[v47 - 104] = v46;
      v48 = *&v28->m_Memory.m_Data[v30 + 52];
      *&v114[v47 - 100] = v48;
      v49 = *&v28->m_Memory.m_Data[v30 + 56];
      *&v114[v47 - 96] = v49;
      v50 = v31->m_Memory.m_Data[209];
      v51 = *&v31->m_Memory.m_Data[76];
      if ( v50 != 0 )
      {
        if ( v51 == 1.0 )
        {
          v124 = v150 - v28;
          d1 = v125;
          v121 = v39;
          v127 = *&v31->m_Memory.m_Data[76];
          v104 = v138 - v28;
          v105 = *&v111[v137 - v28 - 240] - v49;
          v106 = *&v111[v137 - v28 - 248] - v46;
          *&v112[v104 - 272] = *&v111[v137 - v28 - 244] - v48;
          *&v112[v104 - 268] = v105;
          *&v112[v104 - 276] = v106;
          QuaternionSM(-1.0, qt, &v28->m_Memory.m_Data[v30 + 260], q);
          *&v113[v41 - 116] = *&v28->m_Memory.m_Data[v30 + 260];
          *&v113[v41 - 112] = *&v28->m_Memory.m_Data[v30 + 264];
          v51 = v127;
          v39 = v121;
          *&v113[v41 - 108] = *&v28->m_Memory.m_Data[v30 + 268];
          v42 = d1;
          *&v113[v41 - 104] = *&v28->m_Memory.m_Data[v30 + 272];
          v46 = *&v111[v137 - v28 - 248];
          *&v114[v124 - 104] = v46;
          v48 = *&v111[v137 - v28 - 244];
          *&v114[v124 - 100] = v48;
          v49 = *&v111[v137 - v28 - 240];
          *&v114[v124 - 96] = v49;
          v50 = v31->m_Memory.m_Data[209];
        }
        else if ( v51 <= 0.0 )
        {
          v50 = 0;
          v31->m_Memory.m_Data[209] = 0;
          v107 = v139 - v28;
          *&v110[v107 - 248] = v45;
          *&v110[v107 - 260] = v40;
          *&v110[v107 - 256] = v43;
          *&v110[v107 - 252] = v44;
          v108 = v142 - v28;
          *&v111[v108 - 248] = v46;
          *&v111[v108 - 244] = v48;
          *&v111[v108 - 240] = v49;
          v109 = v138 - v28;
          *&v112[v109 - 276] = 0;
          *&v112[v109 - 272] = 0;
          *&v112[v109 - 268] = 0;
          *&v28->m_Memory.m_Data[v30 + 288] = 0;
          *&v28->m_Memory.m_Data[v30 + 292] = 0;
          *&v28->m_Memory.m_Data[v30 + 296] = 0;
          *&v28->m_Memory.m_Data[v30 + 300] = 0;
        }
        else
        {
          v52 = *&v31->m_Memory.m_Data[212];
          if ( v52 > v51 )
          {
            v103 = v52 - v51;
            if ( v52 > 0.0 )
              v103 = v103 / v52;
            latchedb = *&v31->m_Memory.m_Data[76];
            *&v28->m_Memory.m_Data[v30 + 276] = *&v112[v148 - v28 - 276] * (1.0 - v103);
            *&v28->m_Memory.m_Data[v30 + 280] = *&v112[v148 - v28 - 272] * (1.0 - v103);
            *&v28->m_Memory.m_Data[v30 + 284] = *&v112[v148 - v28 - 268] * (1.0 - v103);
            QuaternionScale(q, v51, q);
            v42 = v125;
            v39 = v122;
            v51 = latchedb;
            v46 = *&v114[v140 - v28 - 104];
            v48 = *&v114[v140 - v28 - 100];
            v49 = *&v114[v140 - v28 - 96];
            v47 = v150 - v28;
          }
          v126 = v42;
          m1 = v39;
          latched = v51;
          v53 = v49 + *&v112[v148 - v28 - 268];
          v54 = v46 + *&v112[v148 - v28 - 276];
          *&v114[v47 - 100] = v48 + *&v112[v148 - v28 - 272];
          *&v114[v47 - 96] = v53;
          *&v114[v47 - 104] = v54;
          QuaternionMA(qt, 1.0, q, qt);
          v55 = v139 - v28;
          *&v110[v55 - 260] = *&v28->m_Memory.m_Data[v30 + 116];
          v39 = m1;
          v42 = v126;
          *&v110[v55 - 256] = *&v28->m_Memory.m_Data[v30 + 120];
          v51 = latched;
          *&v110[v55 - 252] = *&v28->m_Memory.m_Data[v30 + 124];
          *&v110[v55 - 248] = *&v28->m_Memory.m_Data[v30 + 128];
          v46 = *&v114[v140 - v28 - 104];
          v56 = v142 - v28;
          *&v111[v56 - 248] = v46;
          v48 = *&v114[v140 - v28 - 100];
          *&v111[v56 - 244] = v48;
          v49 = *&v114[v140 - v28 - 96];
          *&v111[v56 - 240] = v49;
          v50 = v31->m_Memory.m_Data[209];
        }
        *&v31->m_Memory.m_Data[212] = v51;
      }
      v57 = pchain->m_linkArray.m_Memory.m_pMemory;
      v58 = &boneToWorld[v57->bone];
      v59 = v58[3];
      v60 = v58[7];
      v61 = v58[11];
      v62 = &boneToWorld[v57[1].bone];
      v63 = v62[3];
      v64 = &boneToWorld[v57[2].bone];
      v65 = v62[7];
      v66 = v62[11];
      v67 = v64[3];
      v68 = fsqrt((((v63 - v59) * (v63 - v59)) + ((v65 - v60) * (v65 - v60))) + ((v66 - v61) * (v66 - v61)));
      v69 = fsqrt((((v67 - v63) * (v67 - v63)) + ((v64[7] - v65) * (v64[7] - v65))) + ((v64[11] - v66) * (v64[11] - v66)));
      v70 = v69;
      if ( v50 == 0 )
      {
        v71 = v68 - v69;
        v72 = v68 + v69;
        goto LABEL_40;
      }
      v94 = (v67 + *&v112[v148 - v28 - 276]) - v59;
      v95 = (v64[7] + *&v112[v148 - v28 - 272]) - v60;
      v96 = (v64[11] + *&v112[v148 - v28 - 268]) - v61;
      v97 = ((v94 * v94) + (v95 * v95)) + (v96 * v96);
      v71 = v68 - v69;
      v98 = fsqrt(v97);
      if ( fabs(v68 - v69) > v98 )
        break;
      v102 = v98 * 0.94999999;
      v72 = v68 + v70;
      if ( v102 > (v68 + v70) )
        goto LABEL_58;
      v99 = *&v31->m_Memory.m_Data[76];
LABEL_65:
      if ( v99 > 0.2 )
        goto LABEL_60;
LABEL_40:
      v115 = v42;
      v116 = v39;
      v117 = v72;
      d2 = v70;
      v120 = v66;
      v123 = v65;
      m1a = v59;
      latcheda = v60;
      pchaina = v61;
      dt.x = v46 - v59;
      dt.y = v48 - v60;
      dt.z = v49 - v61;
      *&v31->m_Memory.m_Data[136] = VectorNormalize(&dt);
      *&v31->m_Memory.m_Data[144] = d2;
      *&v31->m_Memory.m_Data[140] = v68;
      *&v28->m_Memory.m_Data[v30 + 176] = v123;
      v73 = 1.01 * fabs(v71);
      *&v28->m_Memory.m_Data[v30 + 148] = m1a;
      *&v28->m_Memory.m_Data[v30 + 152] = latcheda;
      *&v28->m_Memory.m_Data[v30 + 156] = pchaina;
      *&v28->m_Memory.m_Data[v30 + 172] = v63;
      *&v28->m_Memory.m_Data[v30 + 180] = v120;
      z = dt.z;
      y = dt.y;
      v76 = dt.x * v117;
      *&v28->m_Memory.m_Data[v30 + 160] = (v73 * dt.x) + m1a;
      *&v28->m_Memory.m_Data[v30 + 168] = (v73 * z) + pchaina;
      *&v28->m_Memory.m_Data[v30 + 164] = (v73 * y) + latcheda;
      *&v28->m_Memory.m_Data[v30 + 192] = ((z * v117) * 0.99000001) + pchaina;
      *&v28->m_Memory.m_Data[v30 + 184] = (v76 * 0.99000001) + m1a;
      *&v28->m_Memory.m_Data[v30 + 188] = ((y * v117) * 0.99000001) + latcheda;
      v77 = (0.0 * v117) * 0.99000001;
      *&v28->m_Memory.m_Data[v30 + 196] = m1a + v77;
      *&v28->m_Memory.m_Data[v30 + 200] = v77 + latcheda;
      *&v28->m_Memory.m_Data[v30 + 204] = pchaina - (v117 * 0.99000001);
      v29 = v115;
      v32 = v116;
LABEL_41:
      ++v35;
      v30 += 352;
      v31 = (v31 + 352);
      v148 += 352;
      v32 += 22;
      v150 += 352;
      v137 += 352;
      v138 += 352;
      qt += 22;
      q += 22;
      v139 += 352;
      v140 += 352;
      v142 += 352;
      if ( v29->m_target.m_Size <= v35 )
        return;
    }
    v72 = v68 + v69;
LABEL_58:
    v99 = *&v31->m_Memory.m_Data[76];
    if ( v99 > 0.2 )
    {
      *&v31->m_Memory.m_Data[332] = v42->m_flTime;
LABEL_60:
      v100 = fabs(*&v31->m_Memory.m_Data[300]);
      v101 = v100 + v100 - 1.0;
      if ( v101 < 0.70700002 )
        *&v31->m_Memory.m_Data[332] = v42->m_flTime;
      goto LABEL_40;
    }
    goto LABEL_65;
  }
}


// CIKContext::AutoIKRelease  (line 1689, @0x0000000003071250, libserver.so)  // inlines: AddToTail, Element, GrowMemory, SimpleSpline, operator=, operator[]
// calls: CModel::numikchains, CModel::pIKChain, CModel::NumBones, CModel::boneFlags, CModel::pszName, DevWarning, CUtlMemory<ikcontextikrule_t, int>::Grow
// callers: CIKContext::UpdateTargets
// strings: "AutoIKRelease (%s) got an out of range chain %d (%d)\n", "AutoIKRelease (%s) got an out of range bone %d (%d)\n", "AutoIKRelease (%s) got a NULL pchain %d\n"
void __fastcall CIKContext::AutoIKRelease(CIKContext *const this)
{
  int v1; // r13d
  CUtlVectorBase<CIKTarget,CUtlMemoryFixed<CIKTarget,12ul> >::CAllocator *i; // rbx
  float m_flTime; // xmm1_4
  float v5; // xmm0_4
  __m128 v6; // xmm2
  float v7; // xmm4_4
  __m128 v8; // xmm5
  float v9; // xmm1_4
  float v10; // xmm0_4
  __m128 v11; // xmm1
  int v12; // r14d
  const CAnimIKChain *v13; // rax
  int bone; // r15d
  CModelSkeleton::BoneFlags_t v15; // eax
  float v16; // xmm2_4
  float v17; // xmm1_4
  int v18; // eax
  int v19; // r14d
  int v20; // r15d
  const char *v21; // rax
  int v22; // r14d
  const char *v23; // rax
  __int64 v24; // rdx
  CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int> > *v25; // r15
  __int64 m_Size; // rax
  int v27; // ecx
  ikcontextikrule_t *v28; // rax
  int v29; // r14d
  const char *v30; // rax
  int v31; // [rsp+14h] [rbp-CCh]
  float v32; // [rsp+18h] [rbp-C8h]
  unsigned __int32 v33; // [rsp+1Ch] [rbp-C4h]
  int ikrule; // [rsp+20h] [rbp-C0h]
  float ikrule_20; // [rsp+34h] [rbp-ACh]
  float ikrule_24; // [rsp+38h] [rbp-A8h]
  float ikrule_28; // [rsp+3Ch] [rbp-A4h]
  vec_t ikrule_32; // [rsp+40h] [rbp-A0h]
  vec_t ikrule_36; // [rsp+44h] [rbp-9Ch]
  vec_t ikrule_40; // [rsp+48h] [rbp-98h]
  vec_t ikrule_44; // [rsp+4Ch] [rbp-94h]
  vec_t ikrule_48; // [rsp+50h] [rbp-90h]
  vec_t ikrule_52; // [rsp+54h] [rbp-8Ch]
  vec_t ikrule_56; // [rsp+58h] [rbp-88h]
  float ikrule_60; // [rsp+5Ch] [rbp-84h]
  float ikrule_64; // [rsp+60h] [rbp-80h]
  float ikrule_68; // [rsp+64h] [rbp-7Ch]
  float ikrule_72; // [rsp+68h] [rbp-78h]
  float ikrule_76; // [rsp+6Ch] [rbp-74h]
  float ikrule_80; // [rsp+70h] [rbp-70h]
  float ikrule_84; // [rsp+74h] [rbp-6Ch]
  float ikrule_88; // [rsp+78h] [rbp-68h]
  const char *ikrule_104; // [rsp+88h] [rbp-58h]
  vec_t ikrule_112; // [rsp+90h] [rbp-50h]
  vec_t ikrule_116; // [rsp+94h] [rbp-4Ch]
  vec_t ikrule_120; // [rsp+98h] [rbp-48h]
  vec_t ikrule_124; // [rsp+9Ch] [rbp-44h]
  vec_t ikrule_128; // [rsp+A0h] [rbp-40h]
  vec_t ikrule_132; // [rsp+A4h] [rbp-3Ch]

  v1 = 0;
  for ( i = &this->m_target.m_Memory; this->m_target.m_Size > v1; i = (i + 352) )
  {
    m_flTime = this->m_flTime;
    v5 = *&i->m_Memory.m_Data[332];
    v6 = LODWORD(m_flTime);
    v6.m128_f32[0] = m_flTime - v5;
    if ( i->m_Memory.m_Data[344] != 0 )
    {
      v5 = *&i->m_Memory.m_Data[336];
      v7 = *&i->m_Memory.m_Data[340];
    }
    else
    {
      if ( v6.m128_f32[0] >= 0.5 )
        goto LABEL_13;
      *&i->m_Memory.m_Data[336] = v5;
      v7 = 0.0;
      *&i->m_Memory.m_Data[340] = 0;
      i->m_Memory.m_Data[344] = 1;
      m_flTime = this->m_flTime;
    }
    v8.m128_i32[0] = 1048576000;
    v9 = (m_flTime - v5) * 4.0;
    if ( v6.m128_f32[0] >= 0.25 )
    {
      v10 = fmaxf(v7 - v9, 0.0);
      *&i->m_Memory.m_Data[340] = v10;
      if ( v10 <= 0.0 )
      {
LABEL_20:
        i->m_Memory.m_Data[344] = 0;
        goto LABEL_18;
      }
    }
    else
    {
      v10 = fminf(v9 + v7, 1.0);
      *&i->m_Memory.m_Data[340] = v10;
      if ( v10 <= 0.0 )
        goto LABEL_20;
    }
    v11 = 0x40400000u;
    v12 = *i->m_Memory.m_Data;
    v11.m128_f32[0] = (3.0 * (v10 * v10)) - (((v10 * v10) + (v10 * v10)) * v10);
    v32 = v11.m128_f32[0];
    v33 = _mm_andnot_ps(_mm_cmplt_ss(v6, v8), v11).m128_u32[0];
    if ( *i->m_Memory.m_Data < 0 || v12 >= CModel::numikchains(this->m_pModel) )
    {
      v18 = CModel::numikchains(this->m_pModel);
      v19 = *i->m_Memory.m_Data;
      v20 = v18;
      v21 = CModel::pszName(this->m_pModel);
      DevWarning(1, "AutoIKRelease (%s) got an out of range chain %d (%d)\n", v21, v19, v20);
LABEL_18:
      *&i->m_Memory.m_Data[336] = this->m_flTime;
      goto LABEL_13;
    }
    v13 = CModel::pIKChain(this->m_pModel, *i->m_Memory.m_Data);
    if ( v13 == 0 )
    {
      v29 = *i->m_Memory.m_Data;
      v30 = CModel::pszName(this->m_pModel);
      DevWarning(1, "AutoIKRelease (%s) got a NULL pchain %d\n", v30, v29);
      goto LABEL_18;
    }
    bone = v13->m_linkArray.m_Memory.m_pMemory[2].bone;
    if ( bone < 0 || bone >= CModel::NumBones(this->m_pModel) )
    {
      v22 = CModel::NumBones(this->m_pModel);
      v23 = CModel::pszName(this->m_pModel);
      DevWarning(1, "AutoIKRelease (%s) got an out of range bone %d (%d)\n", v23, bone, v22);
      goto LABEL_18;
    }
    v15 = CModel::boneFlags(this->m_pModel, bone);
    v16 = *&v33;
    v17 = v32;
    if ( (v15 & this->m_boneMask) != 0 )
    {
      v24 = v12;
      v25 = &this->m_ikChainRule.m_Memory.m_pMemory[v24];
      m_Size = v25->m_Size;
      v27 = v25->m_Size;
      if ( m_Size == v25->m_Memory.m_nAllocationCount )
      {
        v31 = v25->m_Size;
        CUtlMemory<ikcontextikrule_t,int>::Grow(&v25->m_Memory, 1);
        v27 = v25->m_Size;
        v24 = v12;
        m_Size = v31;
        v17 = v32;
        v16 = *&v33;
      }
      v25->m_Size = v27 + 1;
      v28 = &this->m_ikChainRule.m_Memory.m_pMemory[v24].m_Memory.m_pMemory[m_Size];
      v28->height = ikrule_20;
      v28->index = ikrule;
      v28->radius = ikrule_24;
      v28->type = 4;
      v28->floor = ikrule_28;
      v28->chain = v12;
      v28->pos.x = ikrule_32;
      v28->bone = 0;
      v28->pos.y = ikrule_36;
      v28->slot = v1;
      v28->pos.z = ikrule_40;
      v28->q.x = ikrule_44;
      v28->q.y = ikrule_48;
      v28->q.z = ikrule_52;
      v28->q.w = ikrule_56;
      v28->start = ikrule_60;
      v28->peak = ikrule_64;
      v28->tail = ikrule_68;
      v28->flWeight = v17;
      v28->end = ikrule_72;
      v28->flRuleWeight = 1.0;
      v28->top = ikrule_76;
      v28->latched = v16;
      v28->drop = ikrule_80;
      v28->szLabel = ikrule_104;
      v28->commit = ikrule_84;
      v28->release = ikrule_88;
      v28->kneeDir.x = ikrule_112;
      v28->kneeDir.y = ikrule_116;
      v28->kneeDir.z = ikrule_120;
      v28->kneePos.x = ikrule_124;
      v28->kneePos.y = ikrule_128;
      v28->kneePos.z = ikrule_132;
      goto LABEL_18;
    }
    i->m_Memory.m_Data[344] = 0;
LABEL_13:
    ++v1;
  }
}


// CIKContext::SolveDependencies  (line 1777, @0x000000000306fdd0, libserver.so)  // inlines: BitVec_IsBitSet, Element, GetColumn, Lerp<float>, MatrixGetColumn, RadianEuler, Vector, VectorAdd, VectorMultiply, VectorScale, operator*, operator+, operator=, operator[]
// calls: CModel::numikchains, CModel::pIKChain, CModel::boneFlags, MatrixAngles, QuaternionSlerp, QuaternionMatrix, ConcatTransforms_Aligned, QuaternionAngles, AngleMatrix, Solve2JointIK, QuaternionScale, SolveBone
// callers: CBaseAnimatingController::UpdateIK
void __fastcall CIKContext::SolveDependencies(
        CIKContext *const this,
        uint32 *pIKChainsToEvaluate,
        CTransform *xforms,
        matrix3x4a_t *boneToWorld)
{
  int v4; // r15d
  Quaternion *p_q; // r12
  const CAnimIKChain *v8; // rax
  const CModel *m_pModel; // rdi
  CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int> > *m_pMemory; // rdx
  __int64 v11; // r12
  CUtlVector<ikcontextikrule_t,CUtlMemory<ikcontextikrule_t,int> > *v12; // rax
  int v13; // r13d
  __int64 v14; // r15
  const CAnimIKChain *v15; // rax
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm4_4
  float v19; // xmm1_4
  vec_t v20; // xmm1_4
  float v21; // xmm3_4
  ikcontextikrule_t *v22; // r11
  __int64 chain; // rcx
  ikchainresult_t *v24; // r14
  int type; // eax
  __int64 v26; // rdx
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm1_4
  vec_t v31; // xmm1_4
  float v32; // xmm4_4
  CIKContext *v33; // r8
  uint32 *v34; // r10
  CUtlVectorBase<CIKTarget,CUtlMemoryFixed<CIKTarget,12ul> >::CAllocator *p_m_Memory; // r14
  __int64 v36; // r15
  int v37; // r13d
  CUtlVectorBase<CIKTarget,CUtlMemoryFixed<CIKTarget,12ul> >::CAllocator *v38; // rbx
  __int64 v39; // rcx
  float v40; // xmm0_4
  float y; // xmm1_4
  float v42; // xmm2_4
  float z; // xmm3_4
  float v44; // xmm4_4
  vec_t v45; // xmm2_4
  float v46; // xmm1_4
  vec_t v47; // xmm1_4
  float v48; // xmm3_4
  Quaternion *v49; // r12
  int i; // r14d
  const CAnimIKChain *v51; // rax
  const CAnimIKChain *v52; // r15
  float v53; // xmm1_4
  __int64 x_low; // rax
  Quaternion *v55; // rax
  matrix3x4a_t *v56; // rcx
  vec_t v57; // xmm1_4
  vec_t v58; // xmm2_4
  float x; // xmm0_4
  int j; // [rsp+1Ch] [rbp-624h]
  uint32 *v62; // [rsp+20h] [rbp-620h]
  float flWeight; // [rsp+28h] [rbp-618h]
  CIKContext *flWeighta; // [rsp+28h] [rbp-618h]
  float ta; // [rsp+30h] [rbp-610h]
  ikcontextikrule_t *t; // [rsp+30h] [rbp-610h]
  ikchainresult_t *tb; // [rsp+30h] [rbp-610h]
  CIKContext *thisa; // [rsp+50h] [rbp-5F0h]
  int bone; // [rsp+58h] [rbp-5E8h]
  Vector p2; // [rsp+60h] [rbp-5E0h] BYREF
  Quaternion q2; // [rsp+70h] [rbp-5D0h] BYREF
  matrix3x4a_t worldTarget; // [rsp+80h] [rbp-5C0h] BYREF
  Vector p3; // [rsp+B0h] [rbp-590h] BYREF
  matrix3x4a_t local; // [rsp+E0h] [rbp-560h] BYREF
  ikchainresult_t chainResult[32]; // [rsp+110h] [rbp-530h] BYREF

  v4 = 0;
  p_q = &chainResult[0].q;
  while ( v4 < CModel::numikchains(this->m_pModel) )
  {
    if ( ((1 << v4) & pIKChainsToEvaluate[v4 >> 5]) != 0 )
    {
      v8 = CModel::pIKChain(this->m_pModel, v4);
      m_pModel = this->m_pModel;
      LODWORD(v8) = v8->m_linkArray.m_Memory.m_pMemory[2].bone;
      p_q[-1].x = NAN;
      p_q[1].y = 0.0;
      p_q[1].x = -1.0;
      bone = v8;
      if ( (CModel::boneFlags(m_pModel, v8) & this->m_boneMask) != 0 )
        MatrixAngles(&boneToWorld[bone], p_q, &p_q[-1].y);
    }
    ++v4;
    p_q = (p_q + 40);
  }
  if ( this->m_ikChainRule.m_Size > 0 )
  {
    m_pMemory = this->m_ikChainRule.m_Memory.m_pMemory;
    v11 = 0;
    j = 0;
    thisa = this;
    do
    {
      v12 = &m_pMemory[v11];
      if ( m_pMemory[v11].m_Size > 0 )
      {
        v13 = 0;
        v14 = 0;
        do
        {
          v22 = &v12->m_Memory.m_pMemory[v14];
          chain = v22->chain;
          if ( ((1 << chain) & pIKChainsToEvaluate[chain >> 5]) != 0 )
          {
            v24 = &chainResult[chain];
            v24->target = -1;
            type = v22->type;
            if ( type == 1 )
            {
              t = v22;
              QuaternionMatrix(&v22->q, &v22->pos, &local);
              v26 = t->bone;
              if ( v26 == -1 )
                ConcatTransforms_Aligned(&thisa->m_rootxform, &local, &worldTarget);
              else
                ConcatTransforms_Aligned(&boneToWorld[v26], &local, &worldTarget);
              flWeight = t->flWeight * t->flRuleWeight;
              v24->flWeight = ((1.0 - flWeight) * v24->flWeight) + flWeight;
              MatrixAngles(&worldTarget, &p3, &p2, &q2);
              v27 = v24->pos.z * (1.0 - flWeight);
              v28 = p2.y * flWeight;
              v24->flScale = ((q2.x - v24->flScale) * flWeight) + v24->flScale;
              v29 = (1.0 - flWeight) * v24->pos.x;
              v30 = p2.z * flWeight;
              v24->pos.y = v28 + (v24->pos.y * (1.0 - flWeight));
              v31 = v30 + v27;
              v32 = p2.x * flWeight;
              v24->pos.z = v31;
              v24->pos.x = v32 + v29;
              QuaternionSlerp(&v24->q, &p3, flWeight, &v24->q);
              m_pMemory = thisa->m_ikChainRule.m_Memory.m_pMemory;
            }
            else if ( type == 4 )
            {
              ta = v22->flWeight * v22->flRuleWeight;
              v15 = CModel::pIKChain(thisa->m_pModel, v22->chain);
              MatrixAngles(&boneToWorld[v15->m_linkArray.m_Memory.m_pMemory[2].bone], &local, &q2, &p3);
              v16 = v24->pos.z * (1.0 - ta);
              v17 = q2.y * ta;
              v24->flScale = ((p3.x - v24->flScale) * ta) + v24->flScale;
              v18 = (1.0 - ta) * v24->pos.x;
              v19 = q2.z * ta;
              v24->pos.y = v17 + (v24->pos.y * (1.0 - ta));
              v20 = v19 + v16;
              v21 = q2.x * ta;
              v24->pos.z = v20;
              v24->pos.x = v21 + v18;
              QuaternionSlerp(&v24->q, &local, ta, &v24->q);
              m_pMemory = thisa->m_ikChainRule.m_Memory.m_pMemory;
            }
          }
          v12 = &m_pMemory[v11];
          ++v13;
          ++v14;
        }
        while ( m_pMemory[v11].m_Size > v13 );
      }
      ++j;
      ++v11;
    }
    while ( thisa->m_ikChainRule.m_Size > j );
    this = thisa;
  }
  if ( this->m_target.m_Size > 0 )
  {
    v33 = this;
    v34 = pIKChainsToEvaluate;
    p_m_Memory = &this->m_target.m_Memory;
    v36 = 0;
    v37 = 0;
    v38 = p_m_Memory;
    do
    {
      v39 = *p_m_Memory->m_Memory.m_Data;
      if ( ((1 << v39) & v34[v39 >> 5]) != 0 )
      {
        if ( *&p_m_Memory->m_Memory.m_Data[100] > 0.0 )
        {
          v62 = v34;
          flWeighta = v33;
          tb = &chainResult[v39];
          QuaternionAngles(&v38->m_Memory.m_Data[v36 + 28], &p3);
          AngleMatrix(&p3, &v38->m_Memory.m_Data[v36 + 16], &local);
          QuaternionAngles(&v38->m_Memory.m_Data[v36 + 116], &q2);
          AngleMatrix(&q2, &v38->m_Memory.m_Data[v36 + 104], &p3);
          ConcatTransforms_Aligned(&p3, &local, &worldTarget);
          MatrixAngles(&worldTarget, &q2, &p2);
          v40 = *&p_m_Memory->m_Memory.m_Data[100];
          y = tb->pos.y;
          v42 = p2.y * v40;
          z = tb->pos.z;
          tb->flWeight = v40;
          v44 = (1.0 - v40) * tb->pos.x;
          v45 = v42 + (y * (1.0 - v40));
          v46 = p2.z * v40;
          tb->pos.y = v45;
          v47 = v46 + (z * (1.0 - v40));
          v48 = p2.x * v40;
          tb->pos.z = v47;
          tb->pos.x = v48 + v44;
          QuaternionSlerp(&tb->q, &q2, v40, &tb->q);
          v34 = v62;
          v33 = flWeighta;
        }
        if ( p_m_Memory->m_Memory.m_Data[208] != 0 )
        {
          p_m_Memory->m_Memory.m_Data[209] = 1;
          *&v38->m_Memory.m_Data[v36 + 260] = *&v38->m_Memory.m_Data[v36 + 116];
          *&v38->m_Memory.m_Data[v36 + 264] = *&v38->m_Memory.m_Data[v36 + 120];
          *&v38->m_Memory.m_Data[v36 + 268] = *&v38->m_Memory.m_Data[v36 + 124];
          *&v38->m_Memory.m_Data[v36 + 272] = *&v38->m_Memory.m_Data[v36 + 128];
          *&v38->m_Memory.m_Data[v36 + 248] = *&v38->m_Memory.m_Data[v36 + 104];
          *&v38->m_Memory.m_Data[v36 + 252] = *&v38->m_Memory.m_Data[v36 + 108];
          *&v38->m_Memory.m_Data[v36 + 256] = *&v38->m_Memory.m_Data[v36 + 112];
        }
      }
      ++v37;
      v36 += 352;
      p_m_Memory = (p_m_Memory + 352);
    }
    while ( v33->m_target.m_Size > v37 );
    this = v33;
    pIKChainsToEvaluate = v34;
  }
  v49 = &chainResult[0].q;
  for ( i = 0; i < CModel::numikchains(this->m_pModel); ++i )
  {
    if ( ((1 << i) & pIKChainsToEvaluate[i >> 5]) != 0 )
    {
      v51 = CModel::pIKChain(this->m_pModel, i);
      v52 = v51;
      if ( v49[1].y > 0.0 )
      {
        if ( Solve2JointIK(v51, &v49[-1].y, boneToWorld) )
        {
          v56 = &boneToWorld[v52->m_linkArray.m_Memory.m_pMemory[2].bone];
          v57 = v56->m_flMatVal[1][3];
          v58 = v56->m_flMatVal[0][3];
          p3.z = v56->m_flMatVal[2][3];
          x = v49[1].x;
          p3.y = v57;
          p3.x = v58;
          local.m_flMatVal[0][0] = x;
          local.m_flMatVal[0][1] = x;
          local.m_flMatVal[0][2] = x;
          QuaternionMatrix(v49, &p3, &local, v56);
          SolveBone(this->m_pModel, v52->m_linkArray.m_Memory.m_pMemory[2].bone, boneToWorld, xforms);
          SolveBone(this->m_pModel, v52->m_linkArray.m_Memory.m_pMemory[1].bone, boneToWorld, xforms);
          SolveBone(this->m_pModel, v52->m_linkArray.m_Memory.m_pMemory->bone, boneToWorld, xforms);
        }
        else
        {
          x_low = SLODWORD(v49[-1].x);
          if ( x_low != -1 )
          {
            v55 = (&this->m_target.m_Memory + 352 * x_low);
            v55[17].y = 0.80000001 * v55[17].y;
            v55[17].z = 0.80000001 * v55[17].z;
            v55[17].w = 0.80000001 * v55[17].w;
            QuaternionScale(v55 + 18, v53, v55 + 18);
          }
        }
      }
    }
    v49 = (v49 + 40);
  }
}


// CIKContext::SolveAutoplayLocks  (line 2024, @0x0000000003070730, libserver.so)
void __fastcall CIKContext::SolveAutoplayLocks(CIKContext *const this, CTransform *xforms)
{
  ;
}


// CIKContext::SolveSequenceLocks  (line 2044, @0x0000000003070740, libserver.so)
void __fastcall CIKContext::SolveSequenceLocks(CIKContext *const this, HSequence hSequence, CTransform *xforms)
{
  ;
}


// CIKContext::AddAllLocks  (line 2064, @0x0000000003070750, libserver.so)
void __fastcall CIKContext::AddAllLocks(CIKContext *const this, CTransform *xforms)
{
  ;
}


// CIKContext::SolveAllLocks  (line 2120, @0x0000000003070760, libserver.so)
void __fastcall CIKContext::SolveAllLocks(CIKContext *const this, CTransform *xforms)
{
  ;
}


// CIKContext::SolveLock  (line 2146, @0x0000000003070770, libserver.so)
void __fastcall CIKContext::SolveLock(
        CIKContext *const this,
        const CSeqIKLock *plock,
        int i,
        Vector *pos,
        Quaternion *q,
        matrix3x4a_t *boneToWorld,
        CBoneBitList *const boneComputed)
{
  ;
}


// VectorsAreParallel  (line 2205, @0x000000000306d600, libserver.so)  // inlines: DotProduct
// calls: VectorNormalize
// callers: MayaIk2BSolve
bool __fastcall VectorsAreParallel(const Vector *const vA, const Vector *const vB, float flTolerance)
{
  Vector vANormalized; // [rsp+0h] [rbp-30h] BYREF
  Vector vBNormalized; // [rsp+10h] [rbp-20h] BYREF

  vANormalized = *vA;
  VectorNormalize(&vANormalized);
  vBNormalized = *vB;
  VectorNormalize(&vBNormalized);
  return fabs(
           fabs(((vANormalized.x * vBNormalized.x) + (vANormalized.y * vBNormalized.y)) + (vANormalized.z
                                                                                         * vBNormalized.z))
         - 1.0) < 0.00009999999747378752;
}


// QuaternionRotateVectorAIntoB  (line 2222, @0x000000000306d390, libserver.so)  // inlines: Clamp<float>, CrossProduct, DotProduct, FastSqrt, Length, LengthSqr, NormalizeInPlace, RAD2DEG, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator()
// calls: acosf, VectorNormalize, AxisAngleQuaternion, sqrtf
// callers: MayaIk2BSolve
__int64 __fastcall QuaternionRotateVectorAIntoB(const Vector *const a, const Vector *const b, float flEps)
{
  float x; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm5_4
  float v6; // xmm3_4
  float v7; // xmm4_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm4_4
  float y; // xmm5_4
  float v12; // xmm2_4
  float v13; // xmm7_4
  float z; // xmm6_4
  float v15; // xmm3_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm9_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v24; // xmm5_4
  float v25; // xmm6_4
  float v26; // xmm8_4
  __int64 v27; // r8
  __int64 v28; // rcx
  Vector *p_y; // rdx
  Vector *p_z; // rax
  Vector *p_vPivot; // rsi
  Vector vPivot; // [rsp+10h] [rbp-30h] BYREF
  Quaternion q; // [rsp+20h] [rbp-20h] BYREF

  x = a->x;
  v4 = b->x;
  v5 = a->y * a->y;
  v6 = b->y * b->y;
  v7 = a->z * a->z;
  v8 = b->z * b->z;
  q = quat_identity;
  v9 = fsqrt((((x * x) + v5) + v7) * (((v4 * v4) + v6) + v8));
  if ( fabs(v9) <= 0.0000099999997 )
    return *&q.z;
  v10 = a->x;
  y = a->y;
  v12 = b->x;
  v13 = b->y;
  z = a->z;
  v15 = b->z;
  v16 = (((a->x * b->x) + (y * v13)) + (z * v15)) / v9;
  v17 = (a->x * v13) - (b->x * y);
  v18 = a->x * v15;
  vPivot.z = v17;
  v19 = (v12 * z) - v18;
  v20 = (v15 * y) - (v13 * z);
  vPivot.y = v19;
  vPivot.x = v20;
  if ( v16 < 0.0 && fsqrt(((v20 * v20) + (v19 * v19)) + (v17 * v17)) < 0.0000099999997 )
  {
    v24 = fabs(y);
    v25 = fabs(z);
    v26 = fabs(v10);
    if ( v26 > v24 )
    {
      if ( v26 > v25 )
      {
        v27 = 4;
        v28 = 0;
        p_z = &vPivot.z;
        p_vPivot = &vPivot;
        p_y = &vPivot.y;
        goto LABEL_11;
      }
    }
    else if ( v24 > v25 )
    {
      v27 = 8;
      v28 = 4;
      p_y = &vPivot.z;
      p_z = &vPivot;
      p_vPivot = &vPivot.y;
LABEL_11:
      p_vPivot->x = -*(&a->x + v27);
      p_y->x = *(&a->x + v28);
      p_z->x = 0.0;
      goto LABEL_3;
    }
    v27 = 0;
    v28 = 8;
    p_z = &vPivot.y;
    p_y = &vPivot;
    p_vPivot = &vPivot.z;
    goto LABEL_11;
  }
LABEL_3:
  v21 = -1.0;
  if ( v16 >= -1.0 )
    v21 = fminf(1.0, v16);
  acosf(v21);
  VectorNormalize(&vPivot);
  AxisAngleQuaternion(&vPivot, v22, &q);
  return *&q.z;
}


// MayaIk2BSolve  (line 2280, @0x0000000003070780, libserver.so)  // inlines: Clamp<float>, CrossProduct, DotProduct, FastSqrt, Length, LengthSqr, Normalized, RAD2DEG, Vector, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=
// calls: acosf, VectorNormalize, AxisAngleQuaternion, QuaternionMultiply, QuaternionRotateVectorAIntoB, VectorsAreParallel, sqrtf
void __fastcall MayaIk2BSolve(
        const Vector *const vStartPos,
        const Vector *const vMidPos,
        const Vector *const vEndEffectorPos,
        const Vector *const vHandlePos,
        const Vector *const vPoleVector,
        double flTwistValue,
        Quaternion *const qStart,
        float flEps,
        Quaternion *const qMid)
{
  float y; // xmm11_4
  float x; // xmm8_4
  float v13; // xmm0_4
  float z; // xmm10_4
  float v15; // xmm6_4
  vec_t v16; // xmm7_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm9_4
  float v20; // xmm5_4
  float v21; // xmm1_4
  vec_t v22; // xmm2_4
  float v23; // xmm13_4
  vec_t v24; // xmm1_4
  float v25; // xmm10_4
  float v26; // xmm5_4
  float v27; // xmm11_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  __int64 v32; // xmm0_8
  __int64 v33; // xmm1_8
  float v34; // xmm0_4
  bool v35; // al
  float v36; // xmm0_4
  float v37; // xmm2_4
  bool v38; // al
  float v39; // xmm2_4
  float v40; // xmm10_4
  float v41; // xmm8_4
  float v42; // xmm0_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm6_4
  float v48; // xmm5_4
  float w; // xmm4_4
  float v50; // xmm7_4
  float v51; // xmm8_4
  float v52; // xmm10_4
  float v53; // xmm9_4
  float v54; // xmm3_4
  float v55; // xmm0_4
  float v56; // xmm1_4
  float v57; // xmm12_4
  float v58; // xmm0_4
  float v59; // xmm8_4
  float v60; // xmm4_4
  float v61; // xmm6_4
  float v62; // xmm5_4
  float v63; // xmm7_4
  float v64; // xmm3_4
  float v65; // xmm9_4
  float v66; // xmm0_4
  float v67; // xmm1_4
  float v68; // xmm10_4
  __int64 v69; // xmm1_8
  __int64 v70; // rax
  vec_t v71; // xmm0_4
  vec_t v72; // xmm0_4^4
  float v74; // [rsp+8h] [rbp-118h]
  float flVectorAngle12; // [rsp+10h] [rbp-110h]
  float fla; // [rsp+20h] [rbp-100h]
  float flb; // [rsp+24h] [rbp-FCh]
  Vector v1; // [rsp+30h] [rbp-F0h] BYREF
  Vector v2; // [rsp+40h] [rbp-E0h] BYREF
  Vector vH; // [rsp+50h] [rbp-D0h] BYREF
  Vector vO; // [rsp+60h] [rbp-C0h] BYREF
  Vector v2Rot; // [rsp+70h] [rbp-B0h] BYREF
  Vector vERot; // [rsp+80h] [rbp-A0h] BYREF
  Vector v1Rot; // [rsp+90h] [rbp-90h] BYREF
  Vector vN; // [rsp+A0h] [rbp-80h] BYREF
  Vector vHNormalized_0; // [rsp+B0h] [rbp-70h] BYREF
  Quaternion vqEH; // [rsp+C0h] [rbp-60h] BYREF
  Quaternion vqNP; // [rsp+D0h] [rbp-50h] BYREF
  Quaternion vqTwist; // [rsp+E0h] [rbp-40h] BYREF

  y = vEndEffectorPos->y;
  x = vEndEffectorPos->x;
  v13 = vMidPos->x;
  z = vEndEffectorPos->z;
  v15 = vMidPos->z;
  v16 = y - vMidPos->y;
  v17 = vMidPos->y;
  v18 = vStartPos->x;
  v2.x = vEndEffectorPos->x - vMidPos->x;
  v19 = vStartPos->y;
  v2.y = v16;
  v20 = vStartPos->z;
  v2.z = z - v15;
  v21 = vHandlePos->z;
  v22 = v15 - v20;
  v23 = vHandlePos->y;
  v1.x = v13 - v18;
  v24 = v21 - v20;
  v1.y = v17 - v19;
  v25 = z - v20;
  v26 = vHandlePos->x;
  v1.z = v22;
  vH.z = v24;
  v27 = y - v19;
  vH.x = v26 - v18;
  vH.y = v23 - v19;
  fla = fsqrt(((v1.x * v1.x) + (v1.y * v1.y)) + (v22 * v22));
  flb = fsqrt(((v2.x * v2.x) + (v16 * v16)) + (v2.z * v2.z));
  v28 = ((((v13 - v18) * (x - v18)) + ((v17 - v19) * v27)) + (v22 * v25))
      / ((((x - v18) * (x - v18)) + (v27 * v27)) + (v25 * v25));
  vO.x = (v13 - v18) - ((x - v18) * v28);
  vO.z = v22 - (v28 * v25);
  vO.y = (v17 - v19) - (v27 * v28);
  acosf((((v13 - v18) * v2.x) + ((v17 - v19) * v16)) + (v22 * v2.z));
  v29 = -1.0;
  v30 = (((((vH.x * vH.x) + (vH.y * vH.y)) + (vH.z * vH.z)) - (fla * fla)) - (flb * flb)) / ((fla + fla) * flb);
  if ( v30 >= -1.0 )
    v29 = fminf(1.0, v30);
  v74 = ((vH.x * vH.x) + (vH.y * vH.y)) + (vH.z * vH.z);
  acosf(v29);
  vqTwist.x = (v1.y * v2.z) - (v1.z * v2.y);
  vqTwist.y = (v2.x * v1.z) - (v1.x * v2.z);
  vqTwist.z = (v1.x * v2.y) - (v1.y * v2.x);
  VectorNormalize(&vqTwist);
  AxisAngleQuaternion(&vqTwist, v31, qMid);
  QuaternionMultiply(qMid, &v2, &v2Rot);
  vERot.y = v1.y + v2Rot.y;
  vERot.z = v1.z + v2Rot.z;
  vERot.x = v1.x + v2Rot.x;
  QuaternionRotateVectorAIntoB(&vERot, &vH, v1.z + v2Rot.z);
  *&vqEH.x = v32;
  *&vqEH.z = v33;
  QuaternionMultiply(&vqEH, &v1, &v1Rot);
  v35 = VectorsAreParallel(&v1Rot, &vH, v34);
  v37 = v74;
  if ( v35 )
  {
    QuaternionMultiply(&vqEH, &vO, &v1Rot);
    v37 = v74;
  }
  flVectorAngle12 = v37;
  vqNP = quat_identity;
  v38 = VectorsAreParallel(vPoleVector, &vH, v36);
  v39 = flVectorAngle12;
  if ( v38 || flVectorAngle12 == 0.0 )
  {
    v46 = vqNP.x;
    v47 = vqNP.y;
    v48 = vqNP.z;
    w = vqNP.w;
  }
  else
  {
    v40 = vPoleVector->y;
    v41 = vPoleVector->z;
    vN.x = v1Rot.x - (((((v1Rot.x * vH.x) + (v1Rot.y * vH.y)) + (v1Rot.z * vH.z)) / flVectorAngle12) * vH.x);
    v42 = vPoleVector->x;
    vN.y = v1Rot.y - (((((v1Rot.x * vH.x) + (v1Rot.y * vH.y)) + (v1Rot.z * vH.z)) / flVectorAngle12) * vH.y);
    vN.z = v1Rot.z - (((((v1Rot.x * vH.x) + (v1Rot.y * vH.y)) + (v1Rot.z * vH.z)) / flVectorAngle12) * vH.z);
    v43 = (((vH.x * v42) + (vH.y * v40)) + (vH.z * v41)) / flVectorAngle12;
    vHNormalized_0.x = v42 - (v43 * vH.x);
    vHNormalized_0.y = v40 - (v43 * vH.y);
    vHNormalized_0.z = v41 - (v43 * vH.z);
    v44 = fabs(
            ((((vHNormalized_0.x * vN.x) + (vHNormalized_0.y * vN.y)) + (vHNormalized_0.z * vN.z))
           / (fsqrt(((vN.x * vN.x) + (vN.y * vN.y)) + (vN.z * vN.z))
            * fsqrt(
                ((vHNormalized_0.x * vHNormalized_0.x) + (vHNormalized_0.y * vHNormalized_0.y))
              + (vHNormalized_0.z * vHNormalized_0.z))))
          + 1.0);
    if ( flEps <= v44 )
    {
      QuaternionRotateVectorAIntoB(&vN, &vHNormalized_0, v44);
      v39 = flVectorAngle12;
      v70 = v69;
      v46 = v71;
      vqNP.x = v71;
      v48 = *&v70;
      *&vqNP.z = v70;
      v47 = v72;
      vqNP.y = v72;
      w = *(&v70 + 1);
    }
    else
    {
      v45 = fsqrt(flVectorAngle12);
      vqTwist.y = vH.y / v45;
      vqTwist.x = vH.x / v45;
      vqTwist.z = vH.z / v45;
      AxisAngleQuaternion(&vqTwist, NAN, &vqNP);
      v46 = vqNP.x;
      v47 = vqNP.y;
      v48 = vqNP.z;
      w = vqNP.w;
      v39 = flVectorAngle12;
    }
  }
  v50 = vqEH.w;
  v51 = vqEH.z;
  v52 = -v46;
  v53 = vqEH.y;
  v54 = vqEH.w * v46;
  v55 = vqEH.x;
  v56 = v46 * vqEH.y;
  v57 = vqEH.w * v47;
  qStart->x = ((v54 + (vqEH.z * v47)) - (vqEH.y * v48)) + (vqEH.x * w);
  qStart->y = (((v51 * v52) + v57) + (v55 * v48)) + (v53 * w);
  qStart->z = ((v56 - (v55 * v47)) + (v50 * v48)) + (v51 * w);
  qStart->w = (((v55 * v52) - (v47 * v53)) - (v48 * v51)) + (w * v50);
  if ( flTwistValue != 0.0 )
  {
    v58 = fsqrt(v39);
    vHNormalized_0.z = vH.z / v58;
    vHNormalized_0.y = vH.y / v58;
    vHNormalized_0.x = vH.x / v58;
    AxisAngleQuaternion(&vHNormalized_0, vH.z / v58, &vqTwist);
    v59 = vqTwist.y;
    v60 = qStart->w;
    v61 = qStart->z;
    v62 = vqTwist.z;
    v63 = qStart->y;
    v64 = vqTwist.w;
    v65 = qStart->x;
    v66 = -vqTwist.x;
    v67 = vqTwist.x * v63;
    v68 = v60 * vqTwist.y;
    qStart->x = (((vqTwist.x * v60) + (vqTwist.y * v61)) - (vqTwist.z * v63)) + (vqTwist.w * qStart->x);
    qStart->y = (((v61 * v66) + v68) + (v62 * v65)) + (v63 * v64);
    qStart->z = ((v67 - (v59 * v65)) + (v60 * v62)) + (v61 * v64);
    qStart->w = (((v66 * v65) - (v63 * v59)) - (v62 * v61)) + (v64 * v60);
  }
}


