
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_studioboneconstraints.cpp  (line 0, @0x0000000001a6b120, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_studioboneconstraints_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CStudioConstraintBones::ComputeTargetPosition  (line 33, @0x000000000315e510, libserver.so)  // inlines: MatrixPosition, operator=
// calls: CModel::GetAttachmentHandle, CModel::FindBoneIndexByHash, CModel::SetupAttachmentTransform, CConstraintBones::ComputeTargetPosition, __stack_chk_fail
// callers: CStudioConstraintBones::ComputePointConstraint, CStudioConstraintBones::ComputeAimConstraint
float __fastcall CStudioConstraintBones::ComputeTargetPosition(
        Vector *const vTargetPosition,
        const CConstraintTarget *pTargets,
        int nTargetCount,
        const matrix3x4a_t *pWorldSpaceTransformsIn,
        const CModel *pModel)
{
  void *v6; // rsp
  signed __int64 v7; // rdx
  void *v8; // rsp
  void *v9; // rsp
  const CConstraintTarget *v10; // rbx
  Vector *v11; // r13
  float *v12; // r14
  Vector *p_m_vOffset; // r15
  Vector *v14; // r12
  AttachmentHandle_t AttachmentHandle; // al
  uint32 m_nBoneHash; // esi
  int BoneIndexByHash; // eax
  const matrix3x4a_t *v18; // rax
  matrix3x4a_t *worldTransformOut; // [rsp+10h] [rbp-B0h] BYREF
  int v22; // [rsp+1Ch] [rbp-A4h]
  Vector *pvTargetOffsets; // [rsp+20h] [rbp-A0h]
  Vector *pvTargetPositions; // [rsp+28h] [rbp-98h]
  float *pflTargetWeights; // [rsp+30h] [rbp-90h]
  const matrix3x4a_t *pWorldSpaceTransformsIna; // [rsp+38h] [rbp-88h]
  const CConstraintTarget *v27; // [rsp+40h] [rbp-80h]
  CModel *v28; // [rsp+48h] [rbp-78h]
  matrix3x4a_t attachmentTransform; // [rsp+50h] [rbp-70h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp-38h]

  v22 = nTargetCount;
  v30 = __readfsqword(0x28u);
  v28 = pModel;
  pWorldSpaceTransformsIna = pWorldSpaceTransformsIn;
  v6 = alloca(((4LL * nTargetCount + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
  v7 = ((12LL * nTargetCount + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  pflTargetWeights = (&worldTransformOut & 0xFFFFFFFFFFFFFFEFLL);
  v8 = alloca(v7);
  v9 = alloca(v7);
  pvTargetPositions = (&worldTransformOut & 0xFFFFFFFFFFFFFFEFLL);
  pvTargetOffsets = (&worldTransformOut & 0xFFFFFFFFFFFFFFEFLL);
  if ( nTargetCount > 0 )
  {
    v10 = pTargets;
    v27 = &pTargets[(v22 - 1) + 1];
    worldTransformOut = &attachmentTransform;
    v11 = pvTargetOffsets;
    v12 = pflTargetWeights;
    p_m_vOffset = &pTargets->m_vOffset;
    v14 = pvTargetPositions;
    do
    {
      *v12 = v10->m_flWeight;
      v11->x = p_m_vOffset->x;
      v11->y = p_m_vOffset->y;
      v11->z = p_m_vOffset->z;
      m_nBoneHash = v10->m_nBoneHash;
      if ( v10->m_bIsAttachment )
      {
        AttachmentHandle = CModel::GetAttachmentHandle(v28, m_nBoneHash);
        if ( AttachmentHandle != 0 )
        {
          CModel::SetupAttachmentTransform(v28, AttachmentHandle, pWorldSpaceTransformsIna, worldTransformOut);
          v14->x = attachmentTransform.m_flMatVal[0][3];
          v14->y = attachmentTransform.m_flMatVal[1][3];
          v14->z = attachmentTransform.m_flMatVal[2][3];
        }
      }
      else
      {
        BoneIndexByHash = CModel::FindBoneIndexByHash(v28, m_nBoneHash);
        if ( BoneIndexByHash >= 0 )
        {
          v18 = &pWorldSpaceTransformsIna[BoneIndexByHash];
          v14->x = v18->m_flMatVal[0][3];
          v14->y = v18->m_flMatVal[1][3];
          v14->z = v18->m_flMatVal[2][3];
        }
      }
      ++v10;
      ++v12;
      p_m_vOffset = (p_m_vOffset + 40);
      ++v11;
      ++v14;
    }
    while ( v10 != v27 );
  }
  return CConstraintBones::ComputeTargetPosition(
           vTargetPosition,
           v22,
           pflTargetWeights,
           pvTargetPositions,
           pvTargetOffsets);
}


// CStudioConstraintBones::ComputeTargetOrientation  (line 82, @0x000000000315e780, libserver.so)  // inlines: operator=
// calls: CModel::GetAttachmentHandle, CModel::SetupAttachmentTransform, MatrixQuaternion, QuaternionNormalize, CModel::FindBoneIndexByHash, CConstraintBones::ComputeTargetOrientation, __stack_chk_fail
// callers: CStudioConstraintBones::ComputeOrientConstraint
float __fastcall CStudioConstraintBones::ComputeTargetOrientation(
        Quaternion *const qTargetOrientation,
        const CConstraintTarget *pTargets,
        int nTargetCount,
        const matrix3x4a_t *pWorldSpaceTransformsIn,
        const CModel *pModel)
{
  __int64 v6; // rax
  signed __int64 v7; // rdx
  void *v8; // rsp
  void *v9; // rsp
  void *v10; // rsp
  Quaternion *p_m_qOffset; // r14
  Quaternion *v12; // rbx
  float *v13; // r15
  const CConstraintTarget *v14; // r13
  Quaternion *v15; // r12
  AttachmentHandle_t AttachmentHandle; // al
  uint32 m_nBoneHash; // esi
  int BoneIndexByHash; // eax
  _BYTE v21[4]; // [rsp+10h] [rbp-B0h] BYREF
  int v22; // [rsp+14h] [rbp-ACh]
  Quaternion *pqTargetOffsets; // [rsp+18h] [rbp-A8h]
  Quaternion *pqTargetOrientations; // [rsp+20h] [rbp-A0h]
  float *pflTargetWeights; // [rsp+28h] [rbp-98h]
  const matrix3x4a_t *pWorldSpaceTransformsIna; // [rsp+30h] [rbp-90h]
  matrix3x4a_t *worldTransformOut; // [rsp+38h] [rbp-88h]
  const CConstraintTarget *v28; // [rsp+40h] [rbp-80h]
  CModel *v29; // [rsp+48h] [rbp-78h]
  matrix3x4a_t attachmentTransform; // [rsp+50h] [rbp-70h] BYREF
  unsigned __int64 v31; // [rsp+88h] [rbp-38h]

  v22 = nTargetCount;
  v31 = __readfsqword(0x28u);
  pWorldSpaceTransformsIna = pWorldSpaceTransformsIn;
  v6 = 4LL * nTargetCount + 31;
  v29 = pModel;
  v7 = 16LL * nTargetCount + 32;
  v8 = alloca((v6 & 0xFFFFFFFFFFFFFFF0LL) + 16);
  v9 = alloca(v7);
  v10 = alloca(v7);
  pflTargetWeights = (v21 & 0xFFFFFFFFFFFFFFEFLL);
  pqTargetOrientations = (v21 & 0xFFFFFFFFFFFFFFEFLL);
  pqTargetOffsets = (v21 & 0xFFFFFFFFFFFFFFEFLL);
  if ( nTargetCount > 0 )
  {
    p_m_qOffset = &pTargets->m_qOffset;
    v12 = pqTargetOrientations;
    v13 = pflTargetWeights;
    v28 = &pTargets[(v22 - 1) + 1];
    worldTransformOut = &attachmentTransform;
    v14 = pTargets;
    v15 = pqTargetOffsets;
    do
    {
      *v13 = v14->m_flWeight;
      v15->x = p_m_qOffset->x;
      v15->y = p_m_qOffset->y;
      v15->z = p_m_qOffset->z;
      v15->w = p_m_qOffset->w;
      m_nBoneHash = v14->m_nBoneHash;
      if ( v14->m_bIsAttachment )
      {
        AttachmentHandle = CModel::GetAttachmentHandle(v29, m_nBoneHash);
        CModel::SetupAttachmentTransform(v29, AttachmentHandle, pWorldSpaceTransformsIna, worldTransformOut);
        MatrixQuaternion(worldTransformOut, v12);
        QuaternionNormalize(v12);
      }
      else
      {
        BoneIndexByHash = CModel::FindBoneIndexByHash(v29, m_nBoneHash);
        if ( BoneIndexByHash >= 0 )
        {
          MatrixQuaternion(&pWorldSpaceTransformsIna[BoneIndexByHash], v12);
          QuaternionNormalize(v12);
        }
      }
      ++v14;
      ++v13;
      p_m_qOffset = (p_m_qOffset + 40);
      ++v15;
      ++v12;
    }
    while ( v14 != v28 );
  }
  return CConstraintBones::ComputeTargetOrientation(
           qTargetOrientation,
           v22,
           pflTargetWeights,
           pqTargetOrientations,
           pqTargetOffsets);
}


// CStudioConstraintBones::ComputeTargetPositionOrientation  (line 125, @0x000000000315e9b0, libserver.so)
float __fastcall CStudioConstraintBones::ComputeTargetPositionOrientation(
        Vector *const vTargetPosition,
        Quaternion *const qTargetOrientation,
        const CConstraintTarget *pTargets,
        int nTargetCount,
        const matrix3x4a_t *pWorldSpaceTransformsIn,
        const CModel *pModel)
{
  return 0.0;
}


// CStudioConstraintBones::ComputePointConstraint  (line 171, @0x000000000315f4f0, libserver.so)  // inlines: FloatsAreEqual, Lerp<Vector>, MatrixPosition, MatrixSetColumn, PositionMatrix, SetColumn, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator[]
// calls: frexpf, CStudioConstraintBones::ComputeTargetPosition, CModel::FindBoneIndexByHash, CStudioConstraintBones::UpdateWorldTransformAndChildren
// callers: CPointConstraint::Compute
void __fastcall CStudioConstraintBones::ComputePointConstraint(
        matrix3x4a_t *pWorldTransformsInOut,
        const CModel *pModel,
        const CPointConstraint *pConstraint)
{
  __int64 v4; // r12
  int v5; // ebx
  float v6; // xmm1_4
  float v7; // xmm1_4
  CConstraintSlave *v8; // r13
  float v9; // xmm0_4
  __int64 v10; // rax
  float v11; // xmm1_4
  int BoneIndexByHash; // r13d
  float v13; // xmm0_4
  __int64 v14; // rdx
  float v15; // xmm2_4
  float v16; // xmm2_4
  __int64 v17; // rax
  float v18; // xmm2_4
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  float flWeight; // [rsp+1Ch] [rbp-84h]
  float flWeighta; // [rsp+1Ch] [rbp-84h]
  int exponent; // [rsp+2Ch] [rbp-74h] BYREF
  Vector vTargetWorldPos; // [rsp+30h] [rbp-70h] BYREF
  matrix3x4a_t mSlaveWorldMatrix; // [rsp+40h] [rbp-60h] BYREF

  if ( pConstraint->m_slaves.m_Size > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      while ( 1 )
      {
        v8 = &pConstraint->m_slaves.m_Memory.m_pMemory[v4];
        flWeight = v8->m_flWeight;
        v9 = frexpf(flWeight, &mSlaveWorldMatrix);
        if ( SLODWORD(mSlaveWorldMatrix.m_flMatVal[0][0]) > 0 )
        {
          if ( 1LL << SLOBYTE(mSlaveWorldMatrix.m_flMatVal[0][0]) < 0 )
          {
            v19 = (1LL << SLOBYTE(mSlaveWorldMatrix.m_flMatVal[0][0])) & 1
                | ((1LL << SLOBYTE(mSlaveWorldMatrix.m_flMatVal[0][0])) >> 1);
            v6 = v19 + v19;
          }
          else
          {
            v6 = (1LL << SLOBYTE(mSlaveWorldMatrix.m_flMatVal[0][0]));
          }
          v7 = 0.0 / v6;
        }
        else
        {
          v7 = 0.0;
          if ( LODWORD(mSlaveWorldMatrix.m_flMatVal[0][0]) != 0 )
          {
            v10 = 1LL << -LOBYTE(mSlaveWorldMatrix.m_flMatVal[0][0]);
            if ( v10 < 0 )
            {
              v20 = (1LL << -LOBYTE(mSlaveWorldMatrix.m_flMatVal[0][0])) & 1
                  | ((1LL << -LOBYTE(mSlaveWorldMatrix.m_flMatVal[0][0])) >> 1);
              v11 = v20 + v20;
            }
            else
            {
              v11 = v10;
            }
            v9 = v9 / v11;
            v7 = 0.0;
          }
        }
        if ( fabs(v9 - v7) > 0.000099999997 )
          break;
        ++v5;
        ++v4;
        if ( pConstraint->m_slaves.m_Size <= v5 )
          return;
      }
      flWeighta = flWeight
                * CStudioConstraintBones::ComputeTargetPosition(
                    &vTargetWorldPos,
                    pConstraint->m_targets.m_Memory.m_pMemory,
                    pConstraint->m_targets.m_Size,
                    pWorldTransformsInOut,
                    pModel);
      BoneIndexByHash = CModel::FindBoneIndexByHash(pModel, v8->m_nBoneHash);
      mSlaveWorldMatrix = pWorldTransformsInOut[BoneIndexByHash];
      v13 = frexpf(flWeighta, &exponent);
      if ( exponent <= 1 )
      {
        v16 = 0.5;
        if ( exponent != 1 )
        {
          v17 = 1LL << (1 - exponent);
          if ( v17 < 0 )
            v18 = (v17 & 1 | (v17 >> 1)) + (v17 & 1 | (v17 >> 1));
          else
            v18 = v17;
          v13 = v13 / v18;
          v16 = 0.5;
        }
      }
      else
      {
        v14 = 1LL << (exponent - 1);
        if ( v14 < 0 )
        {
          v21 = (1LL << (exponent - 1)) & 1 | ((1LL << (exponent - 1)) >> 1);
          v15 = v21 + v21;
        }
        else
        {
          v15 = v14;
        }
        v16 = 0.5 / v15;
      }
      if ( fabs(v13 - v16) <= 0.000099999997 )
      {
        mSlaveWorldMatrix.m_flMatVal[0][3] = vTargetWorldPos.x;
        mSlaveWorldMatrix.m_flMatVal[1][3] = vTargetWorldPos.y;
        mSlaveWorldMatrix.m_flMatVal[2][3] = vTargetWorldPos.z;
      }
      else
      {
        mSlaveWorldMatrix.m_flMatVal[1][3] = ((vTargetWorldPos.y - mSlaveWorldMatrix.m_flMatVal[1][3]) * flWeighta)
                                           + mSlaveWorldMatrix.m_flMatVal[1][3];
        mSlaveWorldMatrix.m_flMatVal[2][3] = ((vTargetWorldPos.z - mSlaveWorldMatrix.m_flMatVal[2][3]) * flWeighta)
                                           + mSlaveWorldMatrix.m_flMatVal[2][3];
        mSlaveWorldMatrix.m_flMatVal[0][3] = ((vTargetWorldPos.x - mSlaveWorldMatrix.m_flMatVal[0][3]) * flWeighta)
                                           + mSlaveWorldMatrix.m_flMatVal[0][3];
      }
      ++v5;
      ++v4;
      CStudioConstraintBones::UpdateWorldTransformAndChildren(
        pWorldTransformsInOut,
        pModel,
        BoneIndexByHash,
        &mSlaveWorldMatrix);
    }
    while ( pConstraint->m_slaves.m_Size > v5 );
  }
}


// CStudioConstraintBones::ComputeOrientConstraint  (line 216, @0x000000000315f830, libserver.so)  // inlines: FloatsAreEqual, operator[]
// calls: CStudioConstraintBones::ComputeTargetOrientation, CModel::FindBoneIndexByHash, frexpf, MatrixQuaternion, QuaternionSlerp, QuaternionMatrixOrientationOnly, CStudioConstraintBones::UpdateWorldTransformAndChildren
// callers: COrientConstraint::Compute
void __fastcall CStudioConstraintBones::ComputeOrientConstraint(
        matrix3x4a_t *pWorldTransformsInOut,
        const CModel *pModel,
        const COrientConstraint *pConstraint)
{
  __int64 v4; // r13
  int v5; // r15d
  float v6; // xmm1_4
  float v7; // xmm1_4
  int BoneIndexByHash; // r14d
  matrix3x4a_t *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  float v12; // xmm0_4
  __int64 v13; // rdx
  float v14; // xmm1_4
  float v15; // xmm1_4
  CConstraintSlave *v16; // r14
  float v17; // xmm0_4
  __int64 v18; // rax
  float v19; // xmm1_4
  __int64 v20; // rax
  float v21; // xmm1_4
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  float flWeight; // [rsp+1Ch] [rbp-A4h]
  float flWeighta; // [rsp+1Ch] [rbp-A4h]
  Quaternion qTargetWorldOrientation; // [rsp+30h] [rbp-90h] BYREF
  Quaternion qSlaveBaseWorldOrientation; // [rsp+40h] [rbp-80h] BYREF
  Quaternion qFinalWorldOrientation; // [rsp+50h] [rbp-70h] BYREF
  matrix3x4a_t mSlaveWorldMatrix; // [rsp+60h] [rbp-60h] BYREF

  if ( pConstraint->m_slaves.m_Size > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v16 = &pConstraint->m_slaves.m_Memory.m_pMemory[v4];
      flWeighta = v16->m_flWeight;
      v17 = frexpf(flWeighta, &mSlaveWorldMatrix);
      if ( SLODWORD(mSlaveWorldMatrix.m_flMatVal[0][0]) > 0 )
      {
        if ( 1LL << SLOBYTE(mSlaveWorldMatrix.m_flMatVal[0][0]) < 0 )
        {
          v22 = (1LL << SLOBYTE(mSlaveWorldMatrix.m_flMatVal[0][0])) & 1
              | ((1LL << SLOBYTE(mSlaveWorldMatrix.m_flMatVal[0][0])) >> 1);
          v6 = v22 + v22;
        }
        else
        {
          v6 = (1LL << SLOBYTE(mSlaveWorldMatrix.m_flMatVal[0][0]));
        }
        v7 = 0.0 / v6;
      }
      else
      {
        v7 = 0.0;
        if ( LODWORD(mSlaveWorldMatrix.m_flMatVal[0][0]) != 0 )
        {
          v18 = 1LL << -LOBYTE(mSlaveWorldMatrix.m_flMatVal[0][0]);
          if ( v18 < 0 )
          {
            v24 = (1LL << -LOBYTE(mSlaveWorldMatrix.m_flMatVal[0][0])) & 1
                | ((1LL << -LOBYTE(mSlaveWorldMatrix.m_flMatVal[0][0])) >> 1);
            v19 = v24 + v24;
          }
          else
          {
            v19 = v18;
          }
          v17 = v17 / v19;
          v7 = 0.0;
        }
      }
      if ( fabs(v17 - v7) <= 0.000099999997 )
        break;
      flWeight = flWeighta
               * CStudioConstraintBones::ComputeTargetOrientation(
                   &qTargetWorldOrientation,
                   pConstraint->m_targets.m_Memory.m_pMemory,
                   pConstraint->m_targets.m_Size,
                   pWorldTransformsInOut,
                   pModel);
      BoneIndexByHash = CModel::FindBoneIndexByHash(pModel, v16->m_nBoneHash);
      v9 = &pWorldTransformsInOut[BoneIndexByHash];
      *&mSlaveWorldMatrix.m_flMatVal[0][0] = *&v9->m_flMatVal[0][0];
      *&mSlaveWorldMatrix.m_flMatVal[1][0] = *&v9->m_flMatVal[1][0];
      v10 = *&v9->m_flMatVal[2][0];
      v11 = *&v9->m_flMatVal[2][2];
      *&mSlaveWorldMatrix.m_flMatVal[2][0] = v10;
      *&mSlaveWorldMatrix.m_flMatVal[2][2] = v11;
      v12 = frexpf(flWeight, &qFinalWorldOrientation);
      if ( SLODWORD(qFinalWorldOrientation.x) <= 1 )
      {
        v15 = 0.5;
        if ( LODWORD(qFinalWorldOrientation.x) != 1 )
        {
          v20 = 1LL << (1 - LOBYTE(qFinalWorldOrientation.x));
          if ( v20 < 0 )
            v21 = (v20 & 1 | (v20 >> 1)) + (v20 & 1 | (v20 >> 1));
          else
            v21 = v20;
          v12 = v12 / v21;
          v15 = 0.5;
        }
      }
      else
      {
        v13 = 1LL << (LOBYTE(qFinalWorldOrientation.x) - 1);
        if ( v13 < 0 )
        {
          v23 = (1LL << (LOBYTE(qFinalWorldOrientation.x) - 1)) & 1
              | ((1LL << (LOBYTE(qFinalWorldOrientation.x) - 1)) >> 1);
          v14 = v23 + v23;
        }
        else
        {
          v14 = v13;
        }
        v15 = 0.5 / v14;
      }
      if ( fabs(v12 - v15) <= 0.000099999997 )
      {
        QuaternionMatrixOrientationOnly(&qTargetWorldOrientation, &mSlaveWorldMatrix);
      }
      else
      {
        MatrixQuaternion(&mSlaveWorldMatrix, &qSlaveBaseWorldOrientation);
        QuaternionSlerp(&qSlaveBaseWorldOrientation, &qTargetWorldOrientation, flWeight, &qFinalWorldOrientation);
        QuaternionMatrixOrientationOnly(&qFinalWorldOrientation, &mSlaveWorldMatrix);
      }
      ++v5;
      ++v4;
      CStudioConstraintBones::UpdateWorldTransformAndChildren(
        pWorldTransformsInOut,
        pModel,
        BoneIndexByHash,
        &mSlaveWorldMatrix);
    }
    while ( pConstraint->m_slaves.m_Size > v5 );
  }
}


// CStudioConstraintBones::ComputeAimConstraint  (line 259, @0x000000000315fb70, libserver.so)  // inlines: FloatsAreEqual, Get, MatrixPosition, Tail, VectorCopy, VectorTransform, operator[]
// calls: frexpf, CModel::GetAttachmentHandle, CModel::SetupAttachmentTransform, CStudioConstraintBones::ComputeTargetPosition, CModel::FindBoneIndexByHash, CModel::boneParent, MatrixInvert, VectorTransform, CConstraintBones::ComputeAimConstraint, QuaternionMult, MatrixQuaternion, QuaternionSlerp (17 total)
// callers: CAimConstraint::Compute
// strings: "AimConstraint: %s - Cannot Find Aim Up Target Bone\n", "<unknown>", "AimConstraint: %s - Cannot Find Aim Up Target Attachment: %s\n"
void __fastcall CStudioConstraintBones::ComputeAimConstraint(
        matrix3x4a_t *pWorldTransformsInOut,
        const CModel *pModel,
        const CAimConstraint *pConstraint)
{
  int m_Size; // r15d
  int v5; // r15d
  CConstraintSlave *m_pMemory; // r14
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  CConstraintTarget *v11; // rax
  uint32 m_nBoneHash; // r12d
  AttachmentHandle_t AttachmentHandle; // al
  __int64 v14; // rax
  float v15; // xmm1_4
  int v16; // r14d
  int v17; // eax
  matrix3x4a_t *v18; // r15
  matrix3x4a_t *v19; // r14
  float v20; // xmm1_4
  __int64 v21; // rdx
  float v22; // xmm0_4
  float v23; // xmm0_4
  int BoneIndexByHash; // eax
  const char *v25; // rax
  __int64 v26; // rsi
  float v27; // xmm2_4
  const char *v28; // rax
  const char *v29; // r12
  const char *v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  const matrix3x4a_t *mat; // [rsp+18h] [rbp-148h]
  matrix3x4a_t *pmUpToWorld; // [rsp+28h] [rbp-138h]
  int nSlaveBoneIndex; // [rsp+30h] [rbp-130h]
  float flWeight; // [rsp+34h] [rbp-12Ch]
  float flWeighta; // [rsp+34h] [rbp-12Ch]
  Vector vTargetPos; // [rsp+40h] [rbp-120h] BYREF
  Vector vTargetWorldPos; // [rsp+50h] [rbp-110h] BYREF
  Vector vSlaveLocalPos; // [rsp+60h] [rbp-100h] BYREF
  Quaternion qTargetOrientation; // [rsp+70h] [rbp-F0h] BYREF
  Quaternion qOffsetOrientation; // [rsp+80h] [rbp-E0h] BYREF
  Quaternion qParentToWorld; // [rsp+90h] [rbp-D0h] BYREF
  Quaternion qSlaveWorldSpace; // [rsp+A0h] [rbp-C0h] BYREF
  Quaternion qBaseSlaveWorldSpace; // [rsp+B0h] [rbp-B0h] BYREF
  Quaternion qFinalOrientation; // [rsp+C0h] [rbp-A0h] BYREF
  matrix3x4a_t mUpToWorld; // [rsp+D0h] [rbp-90h] BYREF
  matrix3x4a_t mSlaveWorldToParent; // [rsp+100h] [rbp-60h] BYREF

  m_Size = pConstraint->m_targets.m_Size;
  if ( m_Size <= 1 )
    return;
  v5 = m_Size - 1;
  if ( (pConstraint->m_nUpType & 0xFFFFFFFD) != 0 )
    goto LABEL_3;
  v11 = &pConstraint->m_targets.m_Memory.m_pMemory[v5];
  m_nBoneHash = v11->m_nBoneHash;
  if ( v11->m_nBoneHash == 0 )
  {
    v25 = CUtlString::Get(&pConstraint->m_name);
    Warning("AimConstraint: %s - Cannot Find Aim Up Target Bone\n", v25);
    SetIdentityMatrix(&mUpToWorld);
    pmUpToWorld = &mUpToWorld;
    goto LABEL_4;
  }
  if ( v11->m_bIsAttachment )
  {
    AttachmentHandle = CModel::GetAttachmentHandle(pModel, m_nBoneHash);
    if ( AttachmentHandle != 0 )
    {
      CModel::SetupAttachmentTransform(pModel, AttachmentHandle, pWorldTransformsInOut, &mUpToWorld);
    }
    else
    {
      v28 = "";
      if ( g_pStringTokenSystem != 0 )
        v28 = (*(*g_pStringTokenSystem + 88LL))(g_pStringTokenSystem, m_nBoneHash);
      v29 = "<unknown>";
      if ( *v28 != 0 )
        v29 = v28;
      v30 = CUtlString::Get(&pConstraint->m_name);
      Warning("AimConstraint: %s - Cannot Find Aim Up Target Attachment: %s\n", v30, v29);
      SetIdentityMatrix(&mUpToWorld);
    }
    pmUpToWorld = &mUpToWorld;
    goto LABEL_4;
  }
  BoneIndexByHash = CModel::FindBoneIndexByHash(pModel, m_nBoneHash);
  if ( BoneIndexByHash < 0 )
LABEL_3:
    pmUpToWorld = &mUpToWorld;
  else
    pmUpToWorld = &pWorldTransformsInOut[BoneIndexByHash];
LABEL_4:
  m_pMemory = pConstraint->m_slaves.m_Memory.m_pMemory;
  flWeight = m_pMemory->m_flWeight;
  v8 = frexpf(flWeight, &mSlaveWorldToParent);
  if ( SLODWORD(mSlaveWorldToParent.m_flMatVal[0][0]) <= 0 )
  {
    v10 = 0.0;
    if ( LODWORD(mSlaveWorldToParent.m_flMatVal[0][0]) != 0 )
    {
      v14 = 1LL << -LOBYTE(mSlaveWorldToParent.m_flMatVal[0][0]);
      if ( v14 < 0 )
      {
        v33 = (1LL << -LOBYTE(mSlaveWorldToParent.m_flMatVal[0][0])) & 1
            | ((1LL << -LOBYTE(mSlaveWorldToParent.m_flMatVal[0][0])) >> 1);
        v15 = v33 + v33;
      }
      else
      {
        v15 = v14;
      }
      v8 = v8 / v15;
      v10 = 0.0;
    }
  }
  else
  {
    if ( 1LL << SLOBYTE(mSlaveWorldToParent.m_flMatVal[0][0]) < 0 )
    {
      v31 = (1LL << SLOBYTE(mSlaveWorldToParent.m_flMatVal[0][0])) & 1
          | ((1LL << SLOBYTE(mSlaveWorldToParent.m_flMatVal[0][0])) >> 1);
      v9 = v31 + v31;
    }
    else
    {
      v9 = (1LL << SLOBYTE(mSlaveWorldToParent.m_flMatVal[0][0]));
    }
    v10 = 0.0 / v9;
  }
  if ( fabs(v8 - v10) > 0.000099999997 )
  {
    flWeighta = flWeight
              * CStudioConstraintBones::ComputeTargetPosition(
                  &vTargetPos,
                  pConstraint->m_targets.m_Memory.m_pMemory,
                  v5,
                  pWorldTransformsInOut,
                  pModel);
    v16 = CModel::FindBoneIndexByHash(pModel, m_pMemory->m_nBoneHash);
    nSlaveBoneIndex = v16;
    v17 = CModel::boneParent(pModel, v16);
    vTargetWorldPos = vTargetPos;
    if ( v17 < 0 )
    {
      v19 = &pWorldTransformsInOut[v16];
      vSlaveLocalPos.x = v19->m_flMatVal[0][3];
      mat = &g_MatrixIdentity;
      v18 = &g_MatrixIdentity;
      vSlaveLocalPos.y = v19->m_flMatVal[1][3];
      vSlaveLocalPos.z = v19->m_flMatVal[2][3];
    }
    else
    {
      v18 = &pWorldTransformsInOut[v17];
      mat = v18;
      MatrixInvert(v18, &mSlaveWorldToParent);
      v19 = &pWorldTransformsInOut[v16];
      qFinalOrientation.x = v19->m_flMatVal[0][3];
      qFinalOrientation.y = v19->m_flMatVal[1][3];
      qFinalOrientation.z = v19->m_flMatVal[2][3];
      VectorTransform(&qFinalOrientation.x, &mSlaveWorldToParent, &vSlaveLocalPos.x);
    }
    CConstraintBones::ComputeAimConstraint(
      &qTargetOrientation,
      &vTargetWorldPos,
      v18,
      &pConstraint->m_vUpVector,
      &vSlaveLocalPos,
      pmUpToWorld,
      pConstraint->m_nUpType);
    QuaternionMult(&qTargetOrientation, &pConstraint->m_qAimOffset, &qOffsetOrientation);
    MatrixQuaternion(mat, &qParentToWorld);
    QuaternionMult(&qParentToWorld, &qOffsetOrientation, &qSlaveWorldSpace);
    mSlaveWorldToParent = *v19;
    v20 = frexpf(flWeighta, &qFinalOrientation);
    if ( SLODWORD(qFinalOrientation.x) > 0 )
    {
      v23 = 0.5;
      if ( LODWORD(qFinalOrientation.x) != 1 )
      {
        v26 = 1LL << (LOBYTE(qFinalOrientation.x) - 1);
        if ( v26 < 0 )
        {
          v32 = (1LL << (LOBYTE(qFinalOrientation.x) - 1)) & 1 | ((1LL << (LOBYTE(qFinalOrientation.x) - 1)) >> 1);
          v27 = v32 + v32;
        }
        else
        {
          v27 = v26;
        }
        v23 = 0.5 / v27;
      }
    }
    else
    {
      v21 = 1LL << (1 - LOBYTE(qFinalOrientation.x));
      if ( v21 < 0 )
        v22 = (v21 & 1 | (v21 >> 1)) + (v21 & 1 | (v21 >> 1));
      else
        v22 = v21;
      v20 = v20 / v22;
      v23 = 0.5;
    }
    if ( fabs(v23 - v20) <= 0.000099999997 )
    {
      QuaternionMatrixOrientationOnly(&qSlaveWorldSpace, &mSlaveWorldToParent);
    }
    else
    {
      MatrixQuaternion(v19, &qBaseSlaveWorldSpace);
      QuaternionSlerp(&qBaseSlaveWorldSpace, &qSlaveWorldSpace, flWeighta, &qFinalOrientation);
      QuaternionMatrixOrientationOnly(&qFinalOrientation, &mSlaveWorldToParent);
    }
    CStudioConstraintBones::UpdateWorldTransformAndChildren(
      pWorldTransformsInOut,
      pModel,
      nSlaveBoneIndex,
      &mSlaveWorldToParent);
  }
}


// CStudioConstraintBones::ComputeParentConstraint  (line 403, @0x000000000315e9c0, libserver.so)
void __fastcall CStudioConstraintBones::ComputeParentConstraint(
        matrix3x4a_t *pWorldTransformsInOut,
        const CModel *pModel,
        const CParentConstraint *pConstraint)
{
  ;
}


// ComputeTwistBones  (line 480, @0x000000000315e9d0, libserver.so)  // inlines: CrossProduct, DotProduct, FloatMakePositive, FloatsAreEqual, LengthSqr, RAD2DEG, V_memcpy, VectorSubtract, memcpy, operator*=, operator=
// calls: MatrixAngles, VectorNormalize, QuaternionMult, VectorRotate, frexpf, acos, AxisAngleQuaternion, QuaternionScale, memcpy
// callers: CStudioConstraintBones::ComputeTwistConstraint
void __fastcall ComputeTwistBones(
        Quaternion *pqTwists,
        int nCount,
        bool bInverse,
        const Vector *const vUp,
        const Quaternion *const qParent,
        const matrix3x4a_t *const mChild,
        const Quaternion *const qBaseInv,
        const float *pflWeights,
        const Quaternion *pqTwistBinds)
{
  float x; // xmm9_4
  float y; // xmm8_4
  float z; // xmm7_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  __int64 v17; // rdx
  float v18; // xmm10_4
  float v19; // xmm9_4
  double v20; // xmm0_8
  double v21; // xmm0_8
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  const float *p_y; // rax
  const Quaternion *v26; // r12
  Quaternion *v27; // r13
  const float *v28; // r15
  Quaternion *v29; // rdx
  const Quaternion *v30; // rsi
  __int64 v31; // rax
  float v32; // xmm9_4
  float *v33; // rax
  const Quaternion *v34; // r12
  Quaternion *v35; // r13
  const float *v36; // r15
  Quaternion *v37; // rdx
  const Quaternion *v38; // rsi
  unsigned __int64 v39; // rax
  double v40; // xmm0_8
  float v41; // [rsp+4h] [rbp-FCh]
  float v42; // [rsp+8h] [rbp-F8h]
  float v43; // [rsp+Ch] [rbp-F4h]
  float v44; // [rsp+10h] [rbp-F0h]
  float v45; // [rsp+14h] [rbp-ECh]
  float qParentb; // [rsp+20h] [rbp-E0h]
  float v48; // [rsp+28h] [rbp-D8h]
  Quaternion *pqTwistsb; // [rsp+48h] [rbp-B8h]
  Quaternion *pqTwistsc; // [rsp+48h] [rbp-B8h]
  Vector vUpRotate; // [rsp+50h] [rbp-B0h] BYREF
  Vector vLocalTranslation; // [rsp+60h] [rbp-A0h] BYREF
  Vector vRotatedTranslation; // [rsp+70h] [rbp-90h] BYREF
  Vector vTmp0; // [rsp+80h] [rbp-80h] BYREF
  Vector vUpProject; // [rsp+90h] [rbp-70h] BYREF
  Vector vUpRotateProject; // [rsp+A0h] [rbp-60h] BYREF
  Quaternion qTmp0; // [rsp+B0h] [rbp-50h] BYREF
  Quaternion qChild; // [rsp+C0h] [rbp-40h] BYREF

  MatrixAngles(mChild, &qChild, &vLocalTranslation);
  if ( (((vLocalTranslation.x * vLocalTranslation.x) + (vLocalTranslation.y * vLocalTranslation.y))
      + (vLocalTranslation.z * vLocalTranslation.z)) < 1.4210855e-12 )
    goto LABEL_18;
  VectorNormalize(&vLocalTranslation);
  if ( bInverse )
  {
    QuaternionMult(qBaseInv, qParent, &qTmp0);
    VectorRotate(vUp, &qTmp0, &vUpRotate);
    VectorRotate(&vLocalTranslation, &qTmp0, &vRotatedTranslation);
  }
  else
  {
    QuaternionMult(qBaseInv, &qChild, &qTmp0);
    VectorRotate(vUp, &qTmp0, &vUpRotate);
    VectorRotate(&vLocalTranslation, qBaseInv, &vRotatedTranslation);
  }
  x = vUp->x;
  y = vUp->y;
  z = vUp->z;
  v14 = ((vRotatedTranslation.x * vUp->x) + (vRotatedTranslation.y * y)) + (vRotatedTranslation.z * z);
  if ( (1.0 - fabs(v14)) < 0.0000011920929
    || (1.0
      - fabs(
          ((vUpRotate.x * vRotatedTranslation.x) + (vUpRotate.y * vRotatedTranslation.y))
        + (vUpRotate.z * vRotatedTranslation.z))) < 0.0000011920929 )
  {
    goto LABEL_18;
  }
  vTmp0.x = vRotatedTranslation.x * v14;
  vTmp0.y = vRotatedTranslation.y * v14;
  vTmp0.z = v14 * vRotatedTranslation.z;
  vUpProject.x = x - (vRotatedTranslation.x * v14);
  vUpProject.y = y - (vRotatedTranslation.y * v14);
  vUpProject.z = z - (v14 * vRotatedTranslation.z);
  VectorNormalize(&vUpProject);
  v15 = ((vRotatedTranslation.x * vUpRotate.x) + (vRotatedTranslation.y * vUpRotate.y))
      + (vRotatedTranslation.z * vUpRotate.z);
  vTmp0.x = vRotatedTranslation.x * v15;
  vTmp0.y = vRotatedTranslation.y * v15;
  vTmp0.z = v15 * vRotatedTranslation.z;
  vUpRotateProject.x = vUpRotate.x - (vRotatedTranslation.x * v15);
  vUpRotateProject.y = vUpRotate.y - (vRotatedTranslation.y * v15);
  vUpRotateProject.z = vUpRotate.z - (v15 * vRotatedTranslation.z);
  VectorNormalize(&vUpRotateProject);
  v41 = vUpProject.x;
  v43 = vUpProject.y;
  v42 = vUpRotateProject.x;
  v44 = vUpRotateProject.y;
  v45 = vUpProject.z;
  v48 = vUpRotateProject.z;
  qParentb = ((vUpProject.x * vUpRotateProject.x) + (vUpProject.y * vUpRotateProject.y))
           + (vUpProject.z * vUpRotateProject.z);
  v16 = frexpf(fabs(qParentb), &qChild);
  if ( SLODWORD(qChild.x) <= 1 )
  {
    v19 = 0.5;
    if ( LODWORD(qChild.x) != 1 )
    {
      v31 = 1LL << (1 - LOBYTE(qChild.x));
      if ( v31 < 0 )
        v32 = (v31 & 1 | (v31 >> 1)) + (v31 & 1 | (v31 >> 1));
      else
        v32 = v31;
      v16 = v16 / v32;
      v19 = 0.5;
    }
  }
  else
  {
    v17 = 1LL << (LOBYTE(qChild.x) - 1);
    if ( v17 < 0 )
    {
      v39 = (1LL << (LOBYTE(qChild.x) - 1)) & 1 | ((1LL << (LOBYTE(qChild.x) - 1)) >> 1);
      v18 = v39 + v39;
    }
    else
    {
      v18 = v17;
    }
    v19 = 0.5 / v18;
  }
  if ( fabs(v16 - v19) <= 0.001 )
  {
LABEL_18:
    memcpy(pqTwists, pqTwistBinds, 16LL * nCount);
  }
  else
  {
    vTmp0.x = (v43 * v48) - (v44 * v45);
    vTmp0.y = (v45 * v42) - (v48 * v41);
    vTmp0.z = (v44 * v41) - (v43 * v42);
    VectorNormalize(&vTmp0);
    v20 = qParentb;
    if ( (((vTmp0.x * vRotatedTranslation.x) + (vTmp0.y * vRotatedTranslation.y)) + (vTmp0.z * vRotatedTranslation.z)) < 0.0 )
    {
      v40 = acos(v20);
      v22 = 0.0;
      v21 = -v40;
    }
    else
    {
      v21 = acos(v20);
    }
    v23 = v21;
    AxisAngleQuaternion(&vLocalTranslation, v23 * 57.295776, v22, &qTmp0);
    if ( bInverse )
    {
      if ( nCount > 0 )
      {
        p_y = pflWeights;
        v26 = pqTwistBinds;
        v27 = pqTwists;
        v28 = &pflWeights[nCount - 1 + 1];
        do
        {
          pqTwistsb = p_y;
          QuaternionScale(&qTmp0, *p_y - 1.0, v24, &qChild);
          v29 = v27;
          v30 = v26++;
          ++v27;
          QuaternionMult(&qChild, v30, v29);
          p_y = &pqTwistsb->y;
        }
        while ( &pqTwistsb->y != v28 );
      }
    }
    else if ( nCount > 0 )
    {
      v33 = pflWeights;
      v34 = pqTwistBinds;
      v35 = pqTwists;
      v36 = &pflWeights[nCount - 1 + 1];
      do
      {
        pqTwistsc = v33;
        QuaternionScale(&qTmp0, *v33, v24, &qChild);
        v37 = v35;
        v38 = v34++;
        ++v35;
        QuaternionMult(&qChild, v38, v37);
        v33 = &pqTwistsc->y;
      }
      while ( &pqTwistsc->y != v36 );
    }
  }
}


// CStudioConstraintBones::ComputeTwistConstraint  (line 627, @0x0000000003160190, libserver.so)  // inlines: operator=, operator[]
// calls: CModel::FindBoneIndexByHash, CModel::boneParent, MatrixInvert, ConcatTransforms_Aligned, MatrixQuaternion, QuaternionInvert, ComputeTwistBones, QuaternionMatrixOrientationOnly, CStudioConstraintBones::UpdateWorldTransformAndChildren, SetIdentityMatrix, __stack_chk_fail
// callers: CTwistConstraint::Compute
void __fastcall CStudioConstraintBones::ComputeTwistConstraint(
        matrix3x4a_t *pWorldTransformsInOut,
        const CModel *pModel,
        const CTwistConstraint *pConstraint)
{
  int BoneIndexByHash; // eax
  __int64 v7; // r12
  matrix3x4a_t *v8; // rbx
  int v9; // eax
  int m_Size; // esi
  signed __int64 v11; // rdx
  void *v12; // rsp
  void *v13; // rsp
  void *v14; // rsp
  const Quaternion *v15; // r14
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  _DWORD *v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  int v23; // r12d
  int v24; // eax
  matrix3x4a_t *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  const matrix3x4a_t *v28; // r15
  const CModel *pModela; // [rsp+18h] [rbp-198h]
  __int64 v30; // [rsp+30h] [rbp-180h] BYREF
  int nParentBoneIndex; // [rsp+3Ch] [rbp-174h]
  matrix3x4_t *out; // [rsp+40h] [rbp-170h]
  matrix3x4a_t *pWorldTransformsInOuta; // [rsp+48h] [rbp-168h]
  matrix3x4a_t *m1; // [rsp+50h] [rbp-160h]
  Quaternion *qParent; // [rsp+58h] [rbp-158h]
  Quaternion qParentLocal; // [rsp+60h] [rbp-150h] BYREF
  Quaternion qBindInv; // [rsp+70h] [rbp-140h] BYREF
  matrix3x4a_t mParentWorldInverse; // [rsp+80h] [rbp-130h] BYREF
  matrix3x4a_t mBoneLocal; // [rsp+B0h] [rbp-100h] BYREF
  matrix3x4a_t mSlaveWorld; // [rsp+E0h] [rbp-D0h] BYREF
  matrix3x4a_t mSlaveLocal; // [rsp+110h] [rbp-A0h] BYREF
  matrix3x4a_t mSlaveParentWorldInverse; // [rsp+140h] [rbp-70h] BYREF
  unsigned __int64 v43; // [rsp+178h] [rbp-38h]

  pWorldTransformsInOuta = pWorldTransformsInOut;
  v43 = __readfsqword(0x28u);
  pModela = pModel;
  if ( pConstraint->m_targets.m_Size <= 1 )
  {
    qParentLocal = quat_identity;
    SetIdentityMatrix(&mBoneLocal);
    nParentBoneIndex = -1;
    qParent = &qParentLocal;
  }
  else
  {
    BoneIndexByHash = CModel::FindBoneIndexByHash(pModel, pConstraint->m_targets.m_Memory.m_pMemory[1].m_nBoneHash);
    pModela = pModel;
    v7 = BoneIndexByHash;
    pWorldTransformsInOuta = pWorldTransformsInOut;
    nParentBoneIndex = CModel::boneParent(pModel, BoneIndexByHash);
    v8 = &pWorldTransformsInOut[nParentBoneIndex];
    MatrixInvert(v8, &mParentWorldInverse);
    ConcatTransforms_Aligned(&mParentWorldInverse, &pWorldTransformsInOut[v7], &mBoneLocal);
    v9 = CModel::boneParent(pModel, nParentBoneIndex);
    if ( v9 < 0 )
    {
      qParent = &qParentLocal;
      MatrixQuaternion(v8, &qParentLocal);
    }
    else
    {
      MatrixInvert(&pWorldTransformsInOuta[v9], &mSlaveLocal);
      ConcatTransforms_Aligned(&mSlaveLocal, v8, &mSlaveParentWorldInverse);
      qParent = &qParentLocal;
      MatrixQuaternion(&mSlaveParentWorldInverse, &qParentLocal);
    }
  }
  if ( pConstraint->m_bInverse )
    QuaternionInvert(&pConstraint->m_qParentBindRotation, &qBindInv);
  else
    QuaternionInvert(&pConstraint->m_qChildBindRotation, &qBindInv);
  m_Size = pConstraint->m_slaves.m_Size;
  v11 = 16LL * m_Size + 32;
  v12 = alloca(v11);
  v13 = alloca(((4LL * m_Size + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
  v14 = alloca(v11);
  v15 = (&v30 & 0xFFFFFFFFFFFFFFEFLL);
  if ( m_Size <= 0 )
  {
    ComputeTwistBones(
      (&v30 & 0xFFFFFFFFFFFFFFEFLL),
      m_Size,
      pConstraint->m_bInverse,
      &pConstraint->m_vUpVector,
      qParent,
      &mBoneLocal,
      &qBindInv,
      (&v30 & 0xFFFFFFFFFFFFFFEFLL),
      (&v30 & 0xFFFFFFFFFFFFFFEFLL));
  }
  else
  {
    v16 = &v30 & 0xFFFFFFFFFFFFFFEFLL;
    v17 = 0;
    v18 = (m_Size - 1) + 1LL;
    do
    {
      v19 = 9 * v17;
      v17 += 4;
      v16 += 16LL;
      *(v17 + (&v30 & 0xFFFFFFFFFFFFFFEFLL) - 4) = *(&pConstraint->m_slaves.m_Memory.m_pMemory->m_flWeight + v19);
      v20 = (&pConstraint->m_slaves.m_Memory.m_pMemory->m_nBoneHash + v19);
      *(v16 - 16) = v20[5];
      *(v16 - 12) = v20[6];
      *(v16 - 8) = v20[7];
      *(v16 - 4) = v20[8];
    }
    while ( v17 != 4 * v18 );
    ComputeTwistBones(
      (&v30 & 0xFFFFFFFFFFFFFFEFLL),
      m_Size,
      pConstraint->m_bInverse,
      &pConstraint->m_vUpVector,
      qParent,
      &mBoneLocal,
      &qBindInv,
      (&v30 & 0xFFFFFFFFFFFFFFEFLL),
      (&v30 & 0xFFFFFFFFFFFFFFEFLL));
    v21 = 36 * v18;
    v22 = 0;
    v30 = v21;
    qParent = &mSlaveWorld;
    out = &mSlaveParentWorldInverse;
    m1 = &mSlaveLocal;
    do
    {
      v23 = CModel::FindBoneIndexByHash(pModela, pConstraint->m_slaves.m_Memory.m_pMemory[v22 / 0x24].m_nBoneHash);
      v24 = CModel::boneParent(pModela, v23);
      v25 = &pWorldTransformsInOuta[v23];
      *&mSlaveWorld.m_flMatVal[0][0] = *&v25->m_flMatVal[0][0];
      *&mSlaveWorld.m_flMatVal[1][0] = *&v25->m_flMatVal[1][0];
      v26 = *&v25->m_flMatVal[2][0];
      v27 = *&v25->m_flMatVal[2][2];
      *&mSlaveWorld.m_flMatVal[2][0] = v26;
      *&mSlaveWorld.m_flMatVal[2][2] = v27;
      if ( v24 < 0 )
      {
        QuaternionMatrixOrientationOnly(v15, qParent);
      }
      else
      {
        v28 = &pWorldTransformsInOuta[v24];
        if ( nParentBoneIndex == v24 )
        {
          ConcatTransforms_Aligned(&mParentWorldInverse, qParent, m1);
        }
        else
        {
          MatrixInvert(&pWorldTransformsInOuta[v24], out);
          ConcatTransforms_Aligned(out, qParent, m1);
        }
        QuaternionMatrixOrientationOnly(v15, m1);
        ConcatTransforms_Aligned(v28, m1, qParent);
      }
      v22 += 36LL;
      ++v15;
      CStudioConstraintBones::UpdateWorldTransformAndChildren(pWorldTransformsInOuta, pModela, v23, qParent);
    }
    while ( v22 != v30 );
  }
}


// CStudioConstraintBones::UpdateWorldTransformAndChildren  (line 745, @0x000000000315f050, libserver.so)  // inlines: AllocInts, BitVec_FindNextSetBit<short unsigned int, false>, CBitVecT, CUtlMemory, CUtlVector, CUtlVectorBase, CVarBitVec, CVarBitVecBase, CVarBitVecT, CalcNumIntsForBits, ClearAll, FindNextSetBit, FirstBitInWord, FirstBitInWordThatIsKnownToBeNonZero, FreeInts, GetEndMask, GetStartBitMask, Purge, RemoveAll, memset, ~CBitVecT, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVec, ~CVarBitVecBase, ~CVarBitVecT
// calls: MatrixInvert, ConcatTransforms_Aligned, MatricesAreEqual, CModel::NumBones, memset, CModel::MasterSkeleton, CModelSkeleton::GetBoneSubtree, CUtlMemory<int, int>::Purge, _Unwind_Resume
// callers: CTiltTwistConstraint::Compute, CMorphConstraint::Compute, CStudioConstraintBones::ComputePointConstraint, CStudioConstraintBones::ComputeOrientConstraint, CStudioConstraintBones::ComputeAimConstraint, CStudioConstraintBones::ComputeTwistConstraint
// globals: GetEndMask(int)::bitStringEndMasks, GetStartBitMask(int)::g_StartMask
void __fastcall CStudioConstraintBones::UpdateWorldTransformAndChildren(
        matrix3x4a_t *pWorldTransformsInOut,
        const CModel *pModel,
        int nBoneIndex,
        const matrix3x4a_t *const mNewWorldTransform)
{
  matrix3x4a_t *v7; // r12
  float v8; // xmm1_4
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // eax
  uint32 *v13; // rax
  __int64 m_numInts; // rdx
  unsigned int *m_FixedStorage; // rdi
  const CModelSkeleton *v16; // rax
  unsigned __int16 m_numBits; // di
  unsigned __int16 v18; // r9
  uint32 *m_pInt; // rsi
  int v20; // r8d
  uint32 *v21; // rcx
  signed int v22; // ebx
  unsigned int *v23; // rax
  unsigned int v24; // edx
  unsigned int v25; // r8d
  int v26; // ebx
  int v27; // r8d
  uint32 *v28; // rdx
  uint32 *v29; // rcx
  unsigned int v30; // eax
  unsigned int *v31; // rax
  unsigned int v32; // edx
  unsigned int v33; // r8d
  bool v34; // zf
  CVarBitVec subTree; // [rsp+10h] [rbp-D0h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > subTreeIndices; // [rsp+30h] [rbp-B0h] BYREF
  matrix3x4a_t mOldWorldTransform; // [rsp+50h] [rbp-90h] BYREF
  matrix3x4a_t mDeltaTransform; // [rsp+80h] [rbp-60h] BYREF

  v7 = &pWorldTransformsInOut[nBoneIndex];
  MatrixInvert(v7, &mOldWorldTransform);
  ConcatTransforms_Aligned(mNewWorldTransform, &mOldWorldTransform, &mDeltaTransform);
  if ( MatricesAreEqual(&g_MatrixIdentity, &mDeltaTransform, 0.000099999997, v8) != 0 )
    return;
  v9 = CModel::NumBones(pModel);
  subTree.m_pInt = 0;
  v10 = v9 + 62;
  subTree.m_numBits = v9;
  v11 = v9 + 31;
  if ( v11 < 0 )
    v11 = v10;
  v12 = v11 >> 5;
  subTree.m_numInts = v12;
  if ( v12 != 0 )
  {
    if ( v12 == 1 )
    {
      m_FixedStorage = subTree.m_FixedStorage;
      m_numInts = v12;
      subTree.m_pInt = subTree.m_FixedStorage;
    }
    else
    {
      v13 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v12);
      m_numInts = subTree.m_numInts;
      subTree.m_pInt = v13;
      m_FixedStorage = v13;
    }
  }
  else
  {
    m_numInts = 0;
    m_FixedStorage = 0;
  }
  memset(m_FixedStorage, 0, 4 * m_numInts);
  v16 = CModel::MasterSkeleton(pModel);
  CModelSkeleton::GetBoneSubtree(v16, nBoneIndex, &subTree);
  m_numBits = subTree.m_numBits;
  subTreeIndices.m_Size = 0;
  subTreeIndices.m_Memory.m_pMemory = 0;
  v18 = subTree.m_numInts;
  subTreeIndices.m_Memory.m_nAllocationCount = 0;
  m_pInt = subTree.m_pInt;
  subTreeIndices.m_Memory.m_nGrowSize = 0;
  v20 = GetEndMask(int)::bitStringEndMasks[subTree.m_numBits & 0x1F];
  if ( subTree.m_numBits == 0 )
    goto LABEL_17;
  v21 = &subTree.m_pInt[subTree.m_numInts - 1];
  v22 = GetStartBitMask(int)::g_StartMask[0] & *subTree.m_pInt;
  if ( subTree.m_pInt == v21 )
  {
    v22 &= v20;
    if ( v22 == 0 )
      goto LABEL_17;
    goto LABEL_24;
  }
  if ( v22 != 0 )
  {
LABEL_24:
    _BitScanForward(&v22, v22);
    goto LABEL_25;
  }
  v23 = subTree.m_pInt + 1;
  if ( v21 == subTree.m_pInt + 1 )
  {
LABEL_16:
    v25 = *v21 & v20;
    if ( v25 == 0 )
      goto LABEL_17;
    _BitScanForward(&v25, v25);
    v22 = v25 + 32 * ((4LL * subTree.m_numInts - 4) >> 2);
    goto LABEL_25;
  }
  v24 = subTree.m_pInt[1];
  if ( v24 == 0 )
  {
    do
    {
      if ( v21 == ++v23 )
        goto LABEL_16;
      v24 = *v23;
    }
    while ( *v23 == 0 );
  }
  _BitScanForward(&v24, v24);
  v22 = v24 + 32 * (v23 - subTree.m_pInt);
LABEL_25:
  if ( v22 >= 0 )
  {
    while ( 1 )
    {
      if ( v22 != nBoneIndex )
      {
        ConcatTransforms_Aligned(&mDeltaTransform, &pWorldTransformsInOut[v22], &pWorldTransformsInOut[v22]);
        v18 = subTree.m_numInts;
        m_numBits = subTree.m_numBits;
        m_pInt = subTree.m_pInt;
      }
      v26 = v22 + 1;
      v27 = GetEndMask(int)::bitStringEndMasks[m_numBits & 0x1F];
      if ( v26 >= m_numBits )
      {
LABEL_39:
        subTreeIndices.m_Size = 0;
        v34 = (subTreeIndices.m_Memory.m_nGrowSize & 0xC0000000) == 0;
        *&v7->m_flMatVal[0][0] = *&mNewWorldTransform->m_flMatVal[0][0];
        *&v7->m_flMatVal[0][2] = *&mNewWorldTransform->m_flMatVal[0][2];
        *&v7->m_flMatVal[1][0] = *&mNewWorldTransform->m_flMatVal[1][0];
        *&v7->m_flMatVal[1][2] = *&mNewWorldTransform->m_flMatVal[1][2];
        *&v7->m_flMatVal[2][0] = *&mNewWorldTransform->m_flMatVal[2][0];
        *&v7->m_flMatVal[2][2] = *&mNewWorldTransform->m_flMatVal[2][2];
        if ( v34 )
          goto LABEL_18;
        goto LABEL_20;
      }
      v28 = &m_pInt[v26 >> 5];
      v29 = &m_pInt[v18 - 1];
      v30 = GetStartBitMask(int)::g_StartMask[v26 & 0x1F] & *v28;
      if ( v28 == v29 )
        break;
      if ( v30 != 0 )
        goto LABEL_42;
      v31 = v28 + 1;
      if ( v29 == v28 + 1 )
        goto LABEL_36;
      v32 = v28[1];
      if ( v32 == 0 )
      {
        while ( v29 != ++v31 )
        {
          v32 = *v31;
          if ( *v31 != 0 )
            goto LABEL_43;
        }
LABEL_36:
        v33 = *v29 & v27;
        if ( v33 == 0 )
          goto LABEL_39;
        _BitScanForward(&v33, v33);
        v22 = v33 + 32 * ((4LL * v18 - 4) >> 2);
        goto LABEL_38;
      }
LABEL_43:
      _BitScanForward(&v32, v32);
      v22 = v32 + 32 * (v31 - m_pInt);
LABEL_38:
      if ( v22 < 0 )
        goto LABEL_39;
    }
    v30 &= v27;
    if ( v30 == 0 )
      goto LABEL_39;
LABEL_42:
    _BitScanForward(&v30, v30);
    v22 = v30 + 32 * ((4LL * (v26 >> 5)) >> 2);
    goto LABEL_38;
  }
LABEL_17:
  subTreeIndices.m_Size = 0;
  *&v7->m_flMatVal[0][0] = *&mNewWorldTransform->m_flMatVal[0][0];
  *&v7->m_flMatVal[0][2] = *&mNewWorldTransform->m_flMatVal[0][2];
  *&v7->m_flMatVal[1][0] = *&mNewWorldTransform->m_flMatVal[1][0];
  *&v7->m_flMatVal[1][2] = *&mNewWorldTransform->m_flMatVal[1][2];
  *&v7->m_flMatVal[2][0] = *&mNewWorldTransform->m_flMatVal[2][0];
  *&v7->m_flMatVal[2][2] = *&mNewWorldTransform->m_flMatVal[2][2];
LABEL_18:
  CUtlMemory<int,int>::Purge(&subTreeIndices.m_Memory);
  if ( (subTreeIndices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<int,int>::Purge(&subTreeIndices.m_Memory);
LABEL_20:
  if ( subTree.m_numInts > 1u )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, subTree.m_pInt);
}


