
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_bone_constraints.cpp  (line 0, @0x0000000001a6ec60, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: `guard variable for'g_AnimOpSourceColors, UNSPECIFIED_LOGGING_COLOR, g_AnimOpSourceColors
void __cdecl GLOBAL__sub_I_bone_constraints_cpp()
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


// CConstraintBones::ComputeTargetPosition  (line 39, @0x00000000032659b0, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator*=, operator+, operator+=, operator=
// callers: CStudioConstraintBones::ComputeTargetPosition
float __fastcall CConstraintBones::ComputeTargetPosition(
        Vector *const vTargetPosition,
        int nTargetCount,
        float *flTargetWeights,
        Vector *vTargetPositions,
        Vector *vTargetOffsets)
{
  float result; // xmm0_4
  float x; // xmm5_4
  float y; // xmm6_4
  float z; // xmm7_4
  float v9; // xmm4_4
  Vector *v10; // rax
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm3_4

  result = 0.0;
  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  vTargetPosition->x = vec3_origin.x;
  vTargetPosition->y = y;
  vTargetPosition->z = z;
  if ( nTargetCount > 0 )
  {
    v9 = 0.0;
    v10 = &vTargetPositions[(nTargetCount - 1) + 1];
    while ( 1 )
    {
      v11 = vTargetPositions->y;
      ++vTargetPositions;
      ++vTargetOffsets;
      v12 = *flTargetWeights++;
      v13 = ((v11 + vTargetOffsets[-1].y) * v12) + y;
      v14 = ((vTargetPositions[-1].z + vTargetOffsets[-1].z) * v12) + z;
      v15 = ((vTargetPositions[-1].x + vTargetOffsets[-1].x) * v12) + x;
      vTargetPosition->y = v13;
      vTargetPosition->z = v14;
      vTargetPosition->x = v15;
      v9 = v9 + *(flTargetWeights - 1);
      if ( vTargetPositions == v10 )
        break;
      z = v14;
      y = v13;
      x = v15;
    }
    if ( v9 > 0.0 )
    {
      vTargetPosition->x = v15 * (1.0 / v9);
      vTargetPosition->y = v13 * (1.0 / v9);
      vTargetPosition->z = v14 * (1.0 / v9);
    }
    return fminf(1.0, v9);
  }
  return result;
}


// CConstraintBones::ComputeTargetOrientation  (line 68, @0x0000000003265aa0, libserver.so)  // inlines: operator=
// calls: QuaternionMult, QuaternionAverageExponential, __stack_chk_fail
// callers: CStudioConstraintBones::ComputeTargetOrientation
float __fastcall CConstraintBones::ComputeTargetOrientation(
        Quaternion *const qTargetOrientation,
        int nTargetCount,
        float *pflTargetWeights,
        Quaternion *pqTargetOrientations,
        Quaternion *pqTargetOffsets)
{
  int v6; // ebx
  bool v7; // cc
  float result; // xmm0_4
  float *v9; // r13
  float v10; // xmm0_4
  void *v11; // rsp
  unsigned __int64 v12; // r15
  char *v13; // r12
  char *v14; // rbx
  const Quaternion *v15; // rsi
  Quaternion *v16; // rdx
  const Quaternion *v17; // rdi
  unsigned __int64 v19; // [rsp+10h] [rbp-50h] BYREF
  int nTargetCounta; // [rsp+18h] [rbp-48h]
  float flWeightSum; // [rsp+1Ch] [rbp-44h]
  unsigned __int64 v22; // [rsp+28h] [rbp-38h]

  nTargetCounta = nTargetCount;
  v22 = __readfsqword(0x28u);
  if ( nTargetCount == 1 )
  {
    QuaternionMult(pqTargetOrientations, pqTargetOffsets, qTargetOrientation);
    result = *pflTargetWeights;
    if ( *pflTargetWeights <= 1.0 )
      return result;
    return 1.0;
  }
  v6 = nTargetCounta;
  v7 = nTargetCounta <= 0;
  *qTargetOrientation = quat_identity;
  result = 0.0;
  if ( !v7 )
  {
    v9 = pflTargetWeights;
    v10 = 0.0;
    v11 = alloca(16LL * v6 + 32);
    v19 = (&v19 & 0xFFFFFFFFFFFFFFEFLL) + 16LL * (v6 - 1) + 16;
    v12 = &v19 & 0xFFFFFFFFFFFFFFEFLL;
    v13 = pqTargetOffsets - (&v19 & 0xFFFFFFFFFFFFFFEFLL);
    v14 = pqTargetOrientations - (&v19 & 0xFFFFFFFFFFFFFFEFLL);
    do
    {
      v15 = &v13[v12];
      v16 = v12;
      flWeightSum = v10;
      v17 = &v14[v12];
      v12 += 16LL;
      ++v9;
      QuaternionMult(v17, v15, v16);
      v10 = flWeightSum + *(v9 - 1);
    }
    while ( v12 != v19 );
    flWeightSum = flWeightSum + *(v9 - 1);
    QuaternionAverageExponential(qTargetOrientation, nTargetCounta, (&v19 & 0xFFFFFFFFFFFFFFEFLL), pflTargetWeights);
    result = flWeightSum;
    if ( flWeightSum > 1.0 )
      return 1.0;
  }
  return result;
}


// CConstraintBones::ComputeTargetPositionOrientation  (line 109, @0x0000000003265c10, libserver.so)  // inlines: RadianEuler, VectorMultiply, operator*, operator*=, operator+=, operator=
// calls: QuaternionAngles, AngleMatrix, ConcatTransforms, MatrixAngles, QuaternionAverageExponential, __stack_chk_fail
float __fastcall CConstraintBones::ComputeTargetPositionOrientation(
        Vector *const vTargetPosition,
        Quaternion *const qTargetOrientation,
        int nTargetCount,
        float *pflTargetWeights,
        Vector *pvTargetPositions,
        Vector *pvTargetOffsets,
        Quaternion *pqTargetOrientations,
        Quaternion *pqTargetOffsets)
{
  void *v8; // rsp
  float v11; // xmm4_4
  Quaternion *v12; // r12
  Vector *v13; // rax
  float *v14; // r15
  float v15; // xmm0_4
  const Vector *v16; // rsi
  const Vector *v17; // rsi
  Quaternion *v18; // rsi
  float v19; // xmm0_4
  bool v20; // zf
  float v21; // xmm4_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  Quaternion *qTargetOrientationa; // [rsp+10h] [rbp-130h] BYREF
  Quaternion *pQuats; // [rsp+18h] [rbp-128h]
  signed __int64 v30; // [rsp+20h] [rbp-120h]
  signed __int64 v31; // [rsp+28h] [rbp-118h]
  Vector *pos; // [rsp+30h] [rbp-110h]
  float *v33; // [rsp+38h] [rbp-108h]
  float *p_x; // [rsp+40h] [rbp-100h]
  float flWeightSum; // [rsp+48h] [rbp-F8h]
  float flWeight; // [rsp+4Ch] [rbp-F4h]
  matrix3x4_t *matrix; // [rsp+50h] [rbp-F0h]
  matrix3x4_t *in2; // [rsp+58h] [rbp-E8h]
  Vector vPos; // [rsp+60h] [rbp-E0h] BYREF
  matrix3x4a_t mTarget; // [rsp+70h] [rbp-D0h] BYREF
  matrix3x4a_t mOffset; // [rsp+A0h] [rbp-A0h] BYREF
  matrix3x4a_t mAbs; // [rsp+D0h] [rbp-70h] BYREF
  unsigned __int64 v43; // [rsp+108h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  qTargetOrientationa = qTargetOrientation;
  v8 = alloca(16LL * nTargetCount + 32);
  pQuats = (&qTargetOrientationa & 0xFFFFFFFFFFFFFFEFLL);
  *vTargetPosition = vec3_origin;
  *qTargetOrientation = quat_identity;
  if ( nTargetCount <= 0 )
  {
    QuaternionAverageExponential(qTargetOrientationa, nTargetCount, pQuats, pflTargetWeights);
    return 0.0;
  }
  else
  {
    v11 = 0.0;
    v33 = &pflTargetWeights[nTargetCount - 1 + 1];
    matrix = &mTarget;
    in2 = &mOffset;
    v12 = pQuats;
    pos = &vPos;
    v13 = vTargetPosition;
    v14 = pflTargetWeights;
    v31 = pqTargetOrientations - pQuats;
    v30 = pqTargetOffsets - pQuats;
    do
    {
      p_x = &v13->x;
      v15 = *v14;
      flWeightSum = v11;
      ++v14;
      flWeight = v15;
      QuaternionAngles((v12 + v31), &mAbs);
      v16 = pvTargetPositions++;
      AngleMatrix(&mAbs, v16, matrix);
      QuaternionAngles((v12 + v30), &mAbs);
      v17 = pvTargetOffsets++;
      AngleMatrix(&mAbs, v17, in2);
      ConcatTransforms(matrix, in2, &mAbs);
      v18 = v12++;
      MatrixAngles(&mAbs, v18, pos);
      v19 = flWeight;
      v13 = p_x;
      v20 = v14 == v33;
      v21 = flWeightSum;
      v22 = (vPos.y * flWeight) + p_x[1];
      v23 = (vPos.x * flWeight) + *p_x;
      v24 = (vPos.z * flWeight) + p_x[2];
      p_x[1] = v22;
      v11 = v21 + v19;
      v13->x = v23;
      v13->z = v24;
    }
    while ( !v20 );
    if ( v11 > 0.0 )
    {
      v13->x = v23 * (1.0 / v11);
      v13->y = v22 * (1.0 / v11);
      v13->z = v24 * (1.0 / v11);
    }
    LODWORD(matrix) = 1065353216;
    *&in2 = v11;
    QuaternionAverageExponential(qTargetOrientationa, nTargetCount, pQuats, pflTargetWeights);
    return fminf(*&matrix, *&in2);
  }
}


// CConstraintBones::ComputeTargetPositionOrientation  (line 163, @0x0000000003265f20, libserver.so)  // inlines: VectorMultiply, operator*, operator*=, operator+=, operator=
// calls: ConcatTransforms, MatrixAngles, QuaternionAverageExponential, __stack_chk_fail
float __fastcall CConstraintBones::ComputeTargetPositionOrientation(
        Vector *const vTargetPosition,
        Quaternion *const qTargetOrientation,
        int nTargetCount,
        float *pflTargetWeights,
        matrix3x4a_t *pmTargets,
        matrix3x4a_t *pmOffsets)
{
  void *v7; // rsp
  Quaternion *v8; // rbx
  float *v10; // r14
  float v12; // xmm4_4
  matrix3x4a_t *v13; // rsi
  matrix3x4a_t *v14; // rdi
  float v15; // xmm0_4
  Quaternion *v16; // rsi
  bool v17; // zf
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  Quaternion *qTargetOrientationa; // [rsp+10h] [rbp-B0h] BYREF
  Quaternion *pQuats; // [rsp+18h] [rbp-A8h]
  Vector *pos; // [rsp+20h] [rbp-A0h]
  float *v27; // [rsp+28h] [rbp-98h]
  float flWeightSum; // [rsp+30h] [rbp-90h]
  float flWeight; // [rsp+34h] [rbp-8Ch]
  matrix3x4_t *out; // [rsp+38h] [rbp-88h]
  Vector vPos; // [rsp+40h] [rbp-80h] BYREF
  matrix3x4a_t mAbs; // [rsp+50h] [rbp-70h] BYREF
  unsigned __int64 v33; // [rsp+88h] [rbp-38h]

  qTargetOrientationa = qTargetOrientation;
  v33 = __readfsqword(0x28u);
  v7 = alloca(16LL * nTargetCount + 32);
  pQuats = (&qTargetOrientationa & 0xFFFFFFFFFFFFFFEFLL);
  *vTargetPosition = vec3_origin;
  *qTargetOrientation = quat_identity;
  if ( nTargetCount <= 0 )
  {
    QuaternionAverageExponential(qTargetOrientationa, nTargetCount, pQuats, pflTargetWeights);
    return 0.0;
  }
  else
  {
    v8 = pQuats;
    v10 = pflTargetWeights;
    v27 = &pflTargetWeights[nTargetCount - 1 + 1];
    v12 = 0.0;
    out = &mAbs;
    pos = &vPos;
    do
    {
      v13 = pmOffsets;
      v14 = pmTargets;
      v15 = *v10++;
      ++pmTargets;
      flWeightSum = v12;
      ++pmOffsets;
      flWeight = v15;
      ConcatTransforms(v14, v13, out);
      v16 = v8++;
      MatrixAngles(out, v16, pos);
      v17 = v10 == v27;
      v18 = (vPos.y * flWeight) + vTargetPosition->y;
      v19 = (vPos.z * flWeight) + vTargetPosition->z;
      v12 = flWeightSum + flWeight;
      v20 = (vPos.x * flWeight) + vTargetPosition->x;
      vTargetPosition->y = v18;
      vTargetPosition->z = v19;
      vTargetPosition->x = v20;
    }
    while ( !v17 );
    if ( v12 > 0.0 )
    {
      vTargetPosition->x = v20 * (1.0 / v12);
      vTargetPosition->y = v18 * (1.0 / v12);
      vTargetPosition->z = v19 * (1.0 / v12);
    }
    flWeight = 1.0;
    *&out = v12;
    QuaternionAverageExponential(qTargetOrientationa, nTargetCount, pQuats, pflTargetWeights);
    return fminf(flWeight, *&out);
  }
}


// CConstraintBones::ComputeAimConstraintOffset  (line 208, @0x0000000003266560, libserver.so)  // inlines: operator=
// calls: CConstraintBones::ComputeAimConstraint, QuaternionInvert, QuaternionMult
void __fastcall CConstraintBones::ComputeAimConstraintOffset(
        Quaternion *const qAimOffset,
        bool bPreserveOffset,
        const Vector *const vTargetWorldPos,
        const matrix3x4a_t *const mSlaveParentToWorld,
        const Vector *const vUp,
        const Vector *const vSlaveLocalPos,
        const Quaternion *const qSlaveLocal,
        matrix3x4a_t *pmUpToWorld,
        CConstraintBones::AimConstraintUpType_t eUpType)
{
  Quaternion qAim; // [rsp+10h] [rbp-40h] BYREF
  Quaternion qAimInv; // [rsp+20h] [rbp-30h] BYREF

  if ( bPreserveOffset )
  {
    CConstraintBones::ComputeAimConstraint(
      &qAim,
      vTargetWorldPos,
      mSlaveParentToWorld,
      vUp,
      vSlaveLocalPos,
      pmUpToWorld,
      eUpType);
    QuaternionInvert(&qAim, &qAimInv);
    QuaternionMult(&qAimInv, qSlaveLocal, qAimOffset);
  }
  else
  {
    *qAimOffset = quat_identity;
  }
}


// CConstraintBones::ComputeAimConstraintAimAt  (line 243, @0x0000000003266190, libserver.so)  // inlines: Cross, CrossProduct, DotProduct, Init, MatrixSetColumn, NormalizeInPlace, SetColumn, VectorMultiply, VectorSubtract, operator*, operator-
// calls: VectorNormalize, MatrixQuaternion, QuaternionNormalize
// callers: CConstraintBones::ComputeAimConstraint
void __fastcall CConstraintBones::ComputeAimConstraintAimAt(
        Quaternion *const qAim,
        const Vector *const vForward,
        const Vector *const vReferenceUp)
{
  float y; // xmm3_4
  float z; // xmm1_4
  float v7; // xmm0_4
  vec_t x; // xmm9_4
  vec_t v9; // xmm10_4
  vec_t v10; // xmm11_4
  vec_t v11; // xmm6_4
  vec_t v12; // xmm8_4
  vec_t v13; // xmm5_4
  float v14; // xmm3_4
  vec_t v15; // xmm12_4
  vec_t v16; // xmm0_4
  vec_t v17; // xmm4_4
  float v18; // xmm7_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  vec_t v21; // xmm2_4
  vec_t v22; // xmm1_4
  Vector vFwd; // [rsp+0h] [rbp-70h] BYREF
  Vector vUp; // [rsp+10h] [rbp-60h] BYREF
  Vector vRight; // [rsp+20h] [rbp-50h] BYREF
  matrix3x4_t mRot; // [rsp+30h] [rbp-40h] BYREF

  vFwd = *vForward;
  VectorNormalize(&vFwd);
  y = vReferenceUp->y;
  z = vReferenceUp->z;
  v7 = ((vFwd.x * vReferenceUp->x) + (vFwd.y * y)) + (vFwd.z * z);
  vUp.x = vReferenceUp->x - (vFwd.x * v7);
  vUp.y = y - (vFwd.y * v7);
  vUp.z = z - (v7 * vFwd.z);
  VectorNormalize(&vUp);
  vRight.x = (vFwd.y * vUp.z) - (vFwd.z * vUp.y);
  vRight.y = (vFwd.z * vUp.x) - (vUp.z * vFwd.x);
  vRight.z = (vFwd.x * vUp.y) - (vUp.x * vFwd.y);
  VectorNormalize(&vRight);
  x = vRight.x;
  v9 = vUp.x;
  v10 = vFwd.z;
  v11 = vFwd.y;
  v12 = vRight.z;
  v13 = vUp.y;
  v14 = vUp.x - vRight.z;
  v15 = vRight.y;
  v16 = vFwd.z - vUp.y;
  v17 = vUp.z;
  v18 = vFwd.x;
  v19 = vRight.y;
  v20 = (vRight.x + vFwd.y) + vUp.z;
  qAim->y = vUp.x - vRight.z;
  v21 = v19 - v18;
  qAim->x = v16;
  v22 = v20 + 1.0;
  qAim->z = v21;
  qAim->w = v22;
  if ( ((((v16 * v16) + (v14 * v14)) + (v21 * v21)) + (v22 * v22)) > 0.00000011920929 )
  {
    QuaternionNormalize(qAim);
  }
  else
  {
    *&mRot.m_flMatVal[0][0] = __PAIR64__(LODWORD(v18), LODWORD(x));
    *&mRot.m_flMatVal[1][0] = __PAIR64__(LODWORD(v11), LODWORD(v15));
    *&mRot.m_flMatVal[2][0] = __PAIR64__(LODWORD(v10), LODWORD(v12));
    mRot.m_flMatVal[0][2] = v9;
    mRot.m_flMatVal[1][2] = v13;
    mRot.m_flMatVal[2][2] = v17;
    MatrixQuaternion(&mRot, qAim);
  }
}


// CConstraintBones::ComputeAimConstraint  (line 283, @0x0000000003266470, libserver.so)  // inlines: NormalizeInPlace, VectorRotate, VectorSubtract, VectorTransform, operator-
// calls: MatrixInvert, CConstraintBones::ComputeWorldUpVector, VectorRotate, VectorTransform, VectorNormalize, CConstraintBones::ComputeAimConstraintAimAt
// callers: CStudioConstraintBones::ComputeAimConstraint, CConstraintBones::ComputeAimConstraintOffset
void __fastcall CConstraintBones::ComputeAimConstraint(
        Quaternion *const qAim,
        const Vector *const vTargetWorldPos,
        const matrix3x4a_t *const mParentToWorld,
        const Vector *const vUp,
        const Vector *const vSlaveLocalPos,
        const matrix3x4a_t *pmUpToWorld,
        CConstraintBones::AimConstraintUpType_t eUpType)
{
  vec_t v10; // xmm2_4
  vec_t v11; // xmm0_4
  Vector vWorldUp; // [rsp+20h] [rbp-A0h] BYREF
  Vector vLocalUp; // [rsp+30h] [rbp-90h] BYREF
  Vector vTargetLocalPos; // [rsp+40h] [rbp-80h] BYREF
  Vector vLocalForward; // [rsp+50h] [rbp-70h] BYREF
  matrix3x4a_t mWorldToParent; // [rsp+60h] [rbp-60h] BYREF

  MatrixInvert(mParentToWorld, &mWorldToParent);
  CConstraintBones::ComputeWorldUpVector(&vWorldUp, mParentToWorld, vUp, vSlaveLocalPos, pmUpToWorld, eUpType);
  VectorRotate(&vWorldUp.x, &mWorldToParent, &vLocalUp.x);
  VectorTransform(&vTargetWorldPos->x, &mWorldToParent, &vTargetLocalPos.x);
  v10 = vTargetLocalPos.x - vSlaveLocalPos->x;
  v11 = vTargetLocalPos.z - vSlaveLocalPos->z;
  vLocalForward.y = vTargetLocalPos.y - vSlaveLocalPos->y;
  vLocalForward.x = v10;
  vLocalForward.z = v11;
  VectorNormalize(&vLocalForward);
  CConstraintBones::ComputeAimConstraintAimAt(qAim, &vLocalForward, &vLocalUp);
}


// CConstraintBones::ComputeWorldUpVector  (line 319, @0x0000000003266380, libserver.so)  // inlines: MatrixPosition, VectorCopy, VectorRotate, VectorSubtract, VectorTransform
// calls: VectorRotate, VectorTransform, VectorNormalize
// callers: CConstraintBones::ComputeAimConstraint
void __fastcall CConstraintBones::ComputeWorldUpVector(
        Vector *pvWorldUp,
        const matrix3x4_t *const mParentToWorld,
        const Vector *const vUp,
        const Vector *const vSlaveLocalPos,
        const matrix3x4_t *pmUpToWorld,
        CConstraintBones::AimConstraintUpType_t eUpType)
{
  vec_t v7; // xmm1_4
  vec_t v8; // xmm0_4
  float v9; // [rsp+4h] [rbp-2Ch]
  float v10; // [rsp+8h] [rbp-28h]
  float v11; // [rsp+Ch] [rbp-24h]
  Vector vSlaveWorldPos; // [rsp+10h] [rbp-20h] BYREF

  if ( eUpType == CConstraintBones::AimConstraintUpType_t::AC_UP_TYPE_OBJECT )
  {
    if ( pmUpToWorld == 0 )
    {
LABEL_7:
      *pvWorldUp = *vUp;
      return;
    }
    v9 = pmUpToWorld->m_flMatVal[0][3];
    v10 = pmUpToWorld->m_flMatVal[1][3];
    v11 = pmUpToWorld->m_flMatVal[2][3];
    VectorTransform(&vSlaveLocalPos->x, mParentToWorld, &vSlaveWorldPos.x);
    v7 = v10 - vSlaveWorldPos.y;
    v8 = v11 - vSlaveWorldPos.z;
    pvWorldUp->x = v9 - vSlaveWorldPos.x;
    pvWorldUp->y = v7;
    pvWorldUp->z = v8;
    VectorNormalize(pvWorldUp);
  }
  else
  {
    if ( eUpType != CConstraintBones::AimConstraintUpType_t::AC_UP_TYPE_PARENT_ROTATION )
    {
      if ( eUpType != CConstraintBones::AimConstraintUpType_t::AC_UP_TYPE_VECTOR && pmUpToWorld != 0 )
      {
        VectorRotate(&vUp->x, pmUpToWorld, &pvWorldUp->x);
        return;
      }
      goto LABEL_7;
    }
    VectorRotate(&vUp->x, mParentToWorld, &pvWorldUp->x);
  }
}


