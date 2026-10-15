
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_transform.cpp  (line 0, @0x0000000001a6a490, libserver.so)  // inlines: CTransform, Color, Init, QuaternionAligned, SetColor, VectorAligned, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR, g_TransformIdentity
void __cdecl GLOBAL__sub_I_transform_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  g_TransformIdentity.m_vPosition.x = 0.0;
  g_TransformIdentity.m_vPosition.y = 0.0;
  g_TransformIdentity.m_vPosition.z = 0.0;
  g_TransformIdentity.m_vPosition.w = 0.0;
  g_TransformIdentity.m_orientation.x = 0.0;
  g_TransformIdentity.m_orientation.y = 0.0;
  g_TransformIdentity.m_orientation.z = 0.0;
  g_TransformIdentity.m_orientation.w = 1.0;
}


// SetIdentityTransform  (line 19, @0x00000000030ecbe0, libserver.so)  // inlines: Init, operator=
// callers: CBodyComponent::SetupAttachmentTransform, CSkeletonInstance::SetupAttachmentTransform, CModel::SetupAttachments, CModel::SetupAttachmentTransform
void __fastcall SetIdentityTransform(CTransform *const out)
{
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  vec_t z; // xmm1_4
  vec_t v4; // xmm2_4
  vec_t v5; // xmm3_4

  out->m_vPosition.w = 0.0;
  y = vec3_origin.y;
  x = vec3_origin.x;
  out->m_vPosition.z = vec3_origin.z;
  out->m_vPosition.y = y;
  out->m_vPosition.x = x;
  z = quat_identity.z;
  v4 = quat_identity.y;
  out->m_orientation.w = quat_identity.w;
  v5 = quat_identity.x;
  out->m_orientation.z = z;
  out->m_orientation.y = v4;
  out->m_orientation.x = v5;
}


// ConcatTransforms  (line 25, @0x00000000030ecc40, libserver.so)  // inlines: CTransform, Init, VectorAligned, operator+=, operator=
// calls: QuaternionMult, QuaternionMultiply
// callers: ComputeModelSpaceBonesFromParentSpaceBones, CSkeletonInstance::BuildTransformations, CRagdollProp::VPhysicsUpdate, CRagdollProp::UpdateNetworkDataFromVPhysics, TransformToWorldSpace, TransformToParentSpace, CModelSkeleton::GetBindPoseWorldTransform, CModelSkeleton::GetBindPoseWorldTransforms, CModelSkeleton::ComputeParentSpaceTransformsFromWorldSpaceTransforms
void __fastcall ConcatTransforms(const CTransform *const in1, const CTransform *const in2, CTransform *const out)
{
  QuaternionAligned *p_m_orientation; // r13
  vec_t v7; // xmm1_4
  vec_t v8; // xmm2_4
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  CTransform result; // [rsp+0h] [rbp-50h] BYREF

  p_m_orientation = &in1->m_orientation;
  result.m_vPosition.w = 0.0;
  QuaternionMult(&in1->m_orientation, &in2->m_orientation, &result.m_orientation);
  QuaternionMultiply(p_m_orientation, &in2->m_vPosition, &result.m_vPosition);
  v7 = result.m_vPosition.y + in1->m_vPosition.y;
  v8 = result.m_vPosition.x + in1->m_vPosition.x;
  out->m_vPosition.z = result.m_vPosition.z + in1->m_vPosition.z;
  x = result.m_orientation.x;
  out->m_vPosition.y = v7;
  out->m_orientation.x = x;
  y = result.m_orientation.y;
  out->m_vPosition.x = v8;
  out->m_orientation.y = y;
  out->m_orientation.z = result.m_orientation.z;
  out->m_orientation.w = result.m_orientation.w;
}


// VectorIRotate  (line 35, @0x00000000030eccf0, libserver.so)  // inlines: TransformMatrix, VectorIRotate
// calls: QuaternionMatrix, VectorIRotate
// callers: CPhysMotor::Activate
void __fastcall VectorIRotate(const Vector *const v, const CTransform *const t, Vector *const out)
{
  matrix3x4_t m; // [rsp+0h] [rbp-50h] BYREF

  QuaternionMatrix(&t->m_orientation, &t->m_vPosition, &m);
  VectorIRotate(&v->x, &m, &out->x);
}


// VectorITransform  (line 43, @0x00000000030ecd30, libserver.so)  // inlines: TransformMatrix, VectorITransform
// calls: QuaternionMatrix, VectorITransform
void __fastcall VectorITransform(const Vector *const v, const CTransform *const t, Vector *const out)
{
  matrix3x4_t m; // [rsp+0h] [rbp-50h] BYREF

  QuaternionMatrix(&t->m_orientation, &t->m_vPosition, &m);
  VectorITransform(&v->x, &m, &out->x);
}


// TransformSlerp  (line 51, @0x00000000030ecd70, libserver.so)  // inlines: VectorLerp
// calls: QuaternionSlerp
void __fastcall TransformSlerp(const CTransform *const p, const CTransform *const q, float t, CTransform *const qt)
{
  QuaternionSlerp(&p->m_orientation, &q->m_orientation, t, &qt->m_orientation);
  qt->m_vPosition.x = ((q->m_vPosition.x - p->m_vPosition.x) * t) + p->m_vPosition.x;
  qt->m_vPosition.y = ((q->m_vPosition.y - p->m_vPosition.y) * t) + p->m_vPosition.y;
  qt->m_vPosition.z = ((q->m_vPosition.z - p->m_vPosition.z) * t) + p->m_vPosition.z;
}


// TransformLerp  (line 57, @0x00000000030ece10, libserver.so)  // inlines: VectorLerp
// calls: QuaternionBlend
// callers: ConvertSweep, CGamePhysicsQueryInterface::ContactPlane, CCompositeParentSpaceState::LerpFrom, CSkeletonInstance::BuildInterpolatedTransformations, CGamePhysicsQueryInterface::FindClosestPointToTarget, CSkeletonInstance::SweepShapeAgainstHitboxes, NDebugOverlay::Sweep, CShatterGlassShard::ResetRestoreMove, CAnimationState::LerpFrom, BlendOverrideTransforms
void __fastcall TransformLerp(const CTransform *const p, const CTransform *const q, __m128 t, CTransform *const qt)
{
  float ta; // [rsp+Ch] [rbp-24h]

  ta = t.m128_f32[0];
  QuaternionBlend(&p->m_orientation, &q->m_orientation, t, &qt->m_orientation);
  qt->m_vPosition.x = ((q->m_vPosition.x - p->m_vPosition.x) * ta) + p->m_vPosition.x;
  qt->m_vPosition.y = ((q->m_vPosition.y - p->m_vPosition.y) * ta) + p->m_vPosition.y;
  qt->m_vPosition.z = ((q->m_vPosition.z - p->m_vPosition.z) * ta) + p->m_vPosition.z;
}


// TransformMatrix  (line 63, @0x00000000030eceb0, libserver.so)
// calls: QuaternionMatrix
// callers: CPhysicsGameSystem::CreateDebugRenderBuffers, CPhysicsGameSystem::PushDynamicTransformsWorker, CreatePiece, Studio_BuildMatrices, ComputeWorldSpaceBonesFromParentSpaceBone, CSkeletonInstance::GetAnimationStateWorldSpaceTransform, CSkeletonInstance::GetAnimationStateWorldSpaceTransforms, CSkeletonInstance::CalculateWorldTransforms_R, CSkeletonInstance::BuildTransformations, CAnimationState::GetBonesInWorldSpace, CModelSkeleton::GetBindPoseWorldTransforms, CGlViewBuffer::WriteCMeshWireframe (13 total)
void __fastcall TransformMatrix(const CTransform *const in, matrix3x4_t *const out)
{
  QuaternionMatrix(&in->m_orientation, &in->m_vPosition, out);
}


// TransformMatrix  (line 68, @0x00000000030eced0, libserver.so)
// calls: QuaternionMatrix
void __fastcall TransformMatrix(const CTransformUnaligned *const in, matrix3x4_t *const out)
{
  QuaternionMatrix(&in->m_orientation, &in->m_vPosition, out);
}


// TransformMatrix  (line 73, @0x00000000030ecef0, libserver.so)
// calls: QuaternionMatrix
void __fastcall TransformMatrix(const CTransform *const in, const Vector *const vScaleIn, matrix3x4_t *const out)
{
  QuaternionMatrix(&in->m_orientation, &in->m_vPosition, vScaleIn, out);
}


// MatrixTransform  (line 78, @0x00000000030ecf10, libserver.so)  // inlines: GetColumn, MatrixGetColumn, operator=
// calls: MatrixQuaternion
void __fastcall MatrixTransform(const matrix3x4_t *const in, CTransformUnaligned *const out)
{
  vec_t v4; // xmm2_4
  vec_t v5; // xmm0_4

  MatrixQuaternion(in, &out->m_orientation);
  v4 = in->m_flMatVal[1][3];
  v5 = in->m_flMatVal[0][3];
  out->m_vPosition.z = in->m_flMatVal[2][3];
  out->m_vPosition.y = v4;
  out->m_vPosition.x = v5;
}


// MatrixTransform  (line 84, @0x00000000030ecf50, libserver.so)  // inlines: GetColumn, MatrixGetColumn, operator=
// calls: MatrixQuaternion
// callers: CPhysicsGameSystem::TeleportToAnimationState, CPhysicsGameSystem::CreateHierarchyConstraint, CSkeletonInstance::BuildTransformations, CShatterGlassShard::ResetRestoreMove, CGenericConstraint::CreateConstraint, CRagdollProp::VPhysicsUpdate, CRagdollProp::UpdateNetworkDataFromVPhysics, CPropVRTrackedObject::NotifySystemEvent, CPropVRHand::IsSafeLocationForObject, SolveBone, CModelSkeletonBuilder::AppendSkeleton
void __fastcall MatrixTransform(const matrix3x4_t *const in, CTransform *const out)
{
  vec_t v4; // xmm2_4
  vec_t v5; // xmm0_4

  MatrixQuaternion(in, &out->m_orientation);
  v4 = in->m_flMatVal[1][3];
  v5 = in->m_flMatVal[0][3];
  out->m_vPosition.z = in->m_flMatVal[2][3];
  out->m_vPosition.y = v4;
  out->m_vPosition.x = v5;
}


// MatrixTransform  (line 90, @0x00000000030ecf90, libserver.so)  // inlines: MatrixGetColumn, MatrixTransform, operator=
// calls: MatrixNormalize, MatrixQuaternion
// callers: Physics_CreateAggregate, CPhysicsGameSystem::TeleportToAnimationState, CPhysicsGameSystem::ForceUpdateIfKeyframed, CPhysicsGameSystem::SetPhysGroupMask, CAnimationState::SetBonesFromWorldSpace
void __fastcall MatrixTransform(const matrix3x4_t *const in, CTransform *const out, Vector *const vScaleOut)
{
  matrix3x4_t norm; // [rsp+10h] [rbp-50h] BYREF

  *vScaleOut = MatrixNormalize(in, &norm);
  MatrixQuaternion(&norm, &out->m_orientation);
  out->m_vPosition.x = norm.m_flMatVal[0][3];
  out->m_vPosition.y = norm.m_flMatVal[1][3];
  out->m_vPosition.z = norm.m_flMatVal[2][3];
}


// AngleTransform  (line 97, @0x00000000030ed010, libserver.so)  // inlines: Init, operator=
// calls: AngleQuaternion
// callers: CRagdollProp::UpdateNetworkDataFromVPhysics
void __fastcall AngleTransform(const QAngle *const angles, const Vector *const origin, CTransform *const out)
{
  vec_t y; // xmm2_4
  vec_t x; // xmm0_4

  AngleQuaternion(angles, &out->m_orientation);
  y = origin->y;
  x = origin->x;
  out->m_vPosition.z = origin->z;
  out->m_vPosition.y = y;
  out->m_vPosition.x = x;
  out->m_vPosition.w = 0.0;
}


// TransformInvert  (line 103, @0x00000000030ed060, libserver.so)  // inlines: operator*=
// calls: QuaternionInvert, QuaternionMultiply
// callers: CRagdollProp::VPhysicsUpdate, CRagdollProp::UpdateNetworkDataFromVPhysics, TransformToParentSpace, CModelSkeleton::ComputeParentSpaceTransformsFromWorldSpaceTransforms
void __fastcall TransformInvert(const CTransform *const in, CTransform *const out)
{
  QuaternionAligned *p_m_orientation; // r12

  p_m_orientation = &out->m_orientation;
  QuaternionInvert(&in->m_orientation, &out->m_orientation);
  QuaternionMultiply(p_m_orientation, &in->m_vPosition, &out->m_vPosition);
  out->m_vPosition.x = -out->m_vPosition.x;
  out->m_vPosition.y = -out->m_vPosition.y;
  out->m_vPosition.z = -out->m_vPosition.z;
}


// AxisAngleTransform  (line 110, @0x00000000030ed0d0, libserver.so)  // inlines: Init, operator=
// calls: AxisAngleQuaternion
void __fastcall AxisAngleTransform(const Vector *const vecAxis, float a2, float flAngleDegrees, CTransform *const out)
{
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4

  AxisAngleQuaternion(vecAxis, a2, flAngleDegrees, &out->m_orientation);
  out->m_vPosition.w = 0.0;
  y = vec3_origin.y;
  x = vec3_origin.x;
  out->m_vPosition.z = vec3_origin.z;
  out->m_vPosition.y = y;
  out->m_vPosition.x = x;
}


// TransformVectorsFLU  (line 116, @0x00000000030ed120, libserver.so)
// calls: QuaternionVectorsFLU
void __fastcall TransformVectorsFLU(const CTransform *const in, Vector *pForward, Vector *pLeft, Vector *pUp)
{
  QuaternionVectorsFLU(&in->m_orientation, pForward, pLeft, pUp);
}


// TransformVectorsForward  (line 121, @0x00000000030ed130, libserver.so)
// calls: QuaternionVectorsForward
// callers: CLightQueryGameSystem::OnPostSimulate, DrawBone
void __fastcall TransformVectorsForward(const CTransform *const in, Vector *pForward)
{
  QuaternionVectorsForward(&in->m_orientation, pForward);
}


// TransformsAreEqual  (line 126, @0x00000000030ed140, libserver.so)  // inlines: FloatMakePositive, FloatsAreEqual, QuaternionsAreEqual, QuaternionsAreEqualInternal, VectorsAreEqual
// calls: frexpf
bool __fastcall TransformsAreEqual(
        const CTransform *const src1,
        const CTransform *const src2,
        float a3,
        float flPosTolerance,
        float flRotTolerance)
{
  bool result; // al
  __m128i v8; // xmm0
  float v9; // r15d
  float v10; // xmm0_4
  float v11; // xmm1_4
  __int64 v12; // rax
  float v13; // xmm2_4
  vec_t y; // xmm2_4
  float v15; // r15d
  __m128i v16; // xmm0
  float v17; // r13d
  float v18; // xmm0_4
  __int64 v19; // rax
  float v20; // xmm4_4
  __int64 v21; // rdx
  float v22; // xmm2_4
  __m128i v23; // xmm7
  __m128i v24; // xmm0
  float v25; // r13d
  float v26; // xmm0_4
  __int64 v27; // rdx
  float v28; // xmm2_4
  __m128i v29; // xmm4
  __m128i v30; // xmm0
  float v31; // r13d
  float v32; // xmm0_4
  __int64 v33; // rax
  float v34; // xmm2_4
  __m128i v35; // xmm0
  float v36; // ebx
  float v37; // xmm0_4
  __int64 v38; // rax
  float v39; // xmm2_4
  __m128i v40; // xmm0
  float v41; // r15d
  float v42; // xmm0_4
  __int64 v43; // rax
  float v44; // xmm2_4
  __m128i v45; // xmm0
  float v46; // r15d
  float v47; // xmm0_4
  __int64 v48; // rax
  float v49; // xmm2_4
  __int64 v50; // rdx
  float v51; // xmm4_4
  __m128i v52; // xmm5
  __int64 v53; // rdx
  float v54; // xmm2_4
  __m128i v55; // xmm7
  __int64 v56; // rax
  float v57; // xmm2_4
  __int64 v58; // rdx
  float v59; // xmm2_4
  __m128i v60; // xmm4
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __m128i v63; // xmm0
  float v64; // r15d
  float v65; // xmm0_4
  __int64 v66; // rax
  float v67; // xmm2_4
  __int64 v68; // rdx
  float v69; // xmm2_4
  __m128i v70; // xmm5
  __int64 v71; // rdx
  float v72; // xmm2_4
  __m128i v73; // xmm7
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  float v79; // xmm2_4
  __m128i v80; // xmm4
  unsigned __int64 v81; // rdx
  unsigned __int64 v82; // rdx
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rdx
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  float flRotToleranceb; // [rsp+10h] [rbp-70h]
  float v91; // [rsp+20h] [rbp-60h]
  float v92; // [rsp+20h] [rbp-60h]
  float z; // [rsp+20h] [rbp-60h]
  float w; // [rsp+20h] [rbp-60h]
  float v95; // [rsp+34h] [rbp-4Ch]
  float v96; // [rsp+38h] [rbp-48h]
  float x; // [rsp+3Ch] [rbp-44h]
  int exponent; // [rsp+48h] [rbp-38h] BYREF
  int v99[13]; // [rsp+4Ch] [rbp-34h] BYREF

  result = 0;
  if ( fabs(src1->m_vPosition.x - src2->m_vPosition.x) > a3
    || fabs(src1->m_vPosition.y - src2->m_vPosition.y) > a3
    || a3 < fabs(src1->m_vPosition.z - src2->m_vPosition.z) )
  {
    return result;
  }
  v96 = src1->m_orientation.x;
  x = src2->m_orientation.x;
  *v8.m128i_i32 = frexpf(v96, &exponent);
  v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
  v10 = frexpf(x, v99);
  v11 = flPosTolerance;
  if ( exponent <= v99[0] )
  {
    if ( exponent >= v99[0] )
    {
      if ( exponent == v99[0] && exponent < -17 )
        goto LABEL_48;
    }
    else
    {
      if ( v99[0] < -17 )
        goto LABEL_48;
      v21 = 1LL << (LOBYTE(v99[0]) - exponent);
      if ( v21 < 0 )
      {
        v61 = v21 & 1 | ((1LL << (LOBYTE(v99[0]) - exponent)) >> 1);
        v22 = v61 + v61;
      }
      else
      {
        v22 = v21;
      }
      v23 = _mm_cvtsi32_si128(LODWORD(v9));
      *v23.m128i_i32 = *v23.m128i_i32 / v22;
      v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v23));
    }
  }
  else
  {
    if ( exponent < -17 )
      goto LABEL_48;
    v12 = 1LL << (exponent - LOBYTE(v99[0]));
    if ( v12 < 0 )
    {
      v62 = (1LL << (exponent - LOBYTE(v99[0]))) & 1 | ((1LL << (exponent - LOBYTE(v99[0]))) >> 1);
      v13 = v62 + v62;
    }
    else
    {
      v13 = v12;
    }
    v10 = v10 / v13;
  }
  if ( flPosTolerance < fabs(v9 - v10) )
  {
LABEL_10:
    y = src2->m_orientation.y;
    v15 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(src2->m_orientation.z)));
    goto LABEL_11;
  }
LABEL_48:
  v92 = src2->m_orientation.y;
  *v40.m128i_i32 = frexpf(src1->m_orientation.y, &exponent);
  v41 = COERCE_FLOAT(_mm_cvtsi128_si32(v40));
  v42 = frexpf(v92, v99);
  v11 = flPosTolerance;
  if ( exponent <= v99[0] )
  {
    if ( exponent < v99[0] )
    {
      if ( v99[0] < -17 )
        goto LABEL_58;
      v53 = 1LL << (LOBYTE(v99[0]) - exponent);
      if ( v53 < 0 )
      {
        v77 = v53 & 1 | ((1LL << (LOBYTE(v99[0]) - exponent)) >> 1);
        v54 = v77 + v77;
      }
      else
      {
        v54 = v53;
      }
      v55 = _mm_cvtsi32_si128(LODWORD(v41));
      *v55.m128i_i32 = *v55.m128i_i32 / v54;
      v41 = COERCE_FLOAT(_mm_cvtsi128_si32(v55));
    }
    else if ( exponent == v99[0] && exponent < -17 )
    {
      goto LABEL_58;
    }
  }
  else
  {
    if ( exponent < -17 )
      goto LABEL_58;
    v43 = 1LL << (exponent - LOBYTE(v99[0]));
    if ( v43 < 0 )
    {
      v74 = (1LL << (exponent - LOBYTE(v99[0]))) & 1 | ((1LL << (exponent - LOBYTE(v99[0]))) >> 1);
      v44 = v74 + v74;
    }
    else
    {
      v44 = v43;
    }
    v42 = v42 / v44;
  }
  if ( flPosTolerance < fabs(v41 - v42) )
  {
    y = v92;
    v15 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(src2->m_orientation.z)));
    goto LABEL_11;
  }
LABEL_58:
  z = src2->m_orientation.z;
  *v45.m128i_i32 = frexpf(src1->m_orientation.z, &exponent);
  v46 = COERCE_FLOAT(_mm_cvtsi128_si32(v45));
  v47 = frexpf(z, v99);
  v11 = flPosTolerance;
  if ( exponent <= v99[0] )
  {
    if ( exponent >= v99[0] )
    {
      if ( exponent != v99[0] || exponent >= -17 )
        goto LABEL_63;
    }
    else if ( v99[0] >= -17 )
    {
      v58 = 1LL << (LOBYTE(v99[0]) - exponent);
      if ( v58 < 0 )
      {
        v84 = v58 & 1 | ((1LL << (LOBYTE(v99[0]) - exponent)) >> 1);
        v59 = v84 + v84;
      }
      else
      {
        v59 = v58;
      }
      v60 = _mm_cvtsi32_si128(LODWORD(v46));
      *v60.m128i_i32 = *v60.m128i_i32 / v59;
      v46 = COERCE_FLOAT(_mm_cvtsi128_si32(v60));
      goto LABEL_63;
    }
LABEL_86:
    w = src2->m_orientation.w;
    *v63.m128i_i32 = frexpf(src1->m_orientation.w, &exponent);
    v64 = COERCE_FLOAT(_mm_cvtsi128_si32(v63));
    v65 = frexpf(w, v99);
    v11 = flPosTolerance;
    if ( exponent <= v99[0] )
    {
      if ( exponent >= v99[0] )
      {
        if ( exponent == v99[0] && exponent < -17 )
          return 1;
      }
      else
      {
        if ( v99[0] < -17 )
          return 1;
        v68 = 1LL << (LOBYTE(v99[0]) - exponent);
        if ( v68 < 0 )
        {
          v88 = v68 & 1 | ((1LL << (LOBYTE(v99[0]) - exponent)) >> 1);
          v69 = v88 + v88;
        }
        else
        {
          v69 = v68;
        }
        v70 = _mm_cvtsi32_si128(LODWORD(v64));
        *v70.m128i_i32 = *v70.m128i_i32 / v69;
        v64 = COERCE_FLOAT(_mm_cvtsi128_si32(v70));
      }
    }
    else
    {
      if ( exponent < -17 )
        return 1;
      v66 = 1LL << (exponent - LOBYTE(v99[0]));
      if ( v66 < 0 )
      {
        v86 = (1LL << (exponent - LOBYTE(v99[0]))) & 1 | ((1LL << (exponent - LOBYTE(v99[0]))) >> 1);
        v67 = v86 + v86;
      }
      else
      {
        v67 = v66;
      }
      v65 = v65 / v67;
    }
    if ( flPosTolerance < fabs(v64 - v65) )
      goto LABEL_10;
    return 1;
  }
  if ( exponent < -17 )
    goto LABEL_86;
  v48 = 1LL << (exponent - LOBYTE(v99[0]));
  if ( v48 < 0 )
  {
    v81 = (1LL << (exponent - LOBYTE(v99[0]))) & 1 | ((1LL << (exponent - LOBYTE(v99[0]))) >> 1);
    v49 = v81 + v81;
  }
  else
  {
    v49 = v48;
  }
  v47 = v47 / v49;
LABEL_63:
  if ( flPosTolerance >= fabs(v46 - v47) )
    goto LABEL_86;
  y = src2->m_orientation.y;
  v15 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(z)));
LABEL_11:
  flRotToleranceb = v11;
  v91 = y;
  v95 = src2->m_orientation.w;
  *v16.m128i_i32 = frexpf(v96, &exponent);
  v17 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
  v18 = frexpf(-x, v99);
  if ( exponent <= v99[0] )
  {
    if ( exponent < v99[0] )
    {
      if ( v99[0] < -17 )
        goto LABEL_27;
      v50 = 1LL << (LOBYTE(v99[0]) - exponent);
      if ( v50 < 0 )
      {
        v76 = v50 & 1 | ((1LL << (LOBYTE(v99[0]) - exponent)) >> 1);
        v51 = v76 + v76;
      }
      else
      {
        v51 = v50;
      }
      v52 = _mm_cvtsi32_si128(LODWORD(v17));
      *v52.m128i_i32 = *v52.m128i_i32 / v51;
      v17 = COERCE_FLOAT(_mm_cvtsi128_si32(v52));
    }
    else if ( exponent == v99[0] && exponent < -17 )
    {
      goto LABEL_27;
    }
  }
  else
  {
    if ( exponent < -17 )
      goto LABEL_27;
    v19 = 1LL << (exponent - LOBYTE(v99[0]));
    if ( v19 < 0 )
    {
      v75 = (1LL << (exponent - LOBYTE(v99[0]))) & 1 | ((1LL << (exponent - LOBYTE(v99[0]))) >> 1);
      v20 = v75 + v75;
    }
    else
    {
      v20 = v19;
    }
    v18 = v18 / v20;
  }
  if ( flRotToleranceb < fabs(v17 - v18) )
    return 0;
LABEL_27:
  *v24.m128i_i32 = frexpf(src1->m_orientation.y, &exponent);
  v25 = COERCE_FLOAT(_mm_cvtsi128_si32(v24));
  v26 = frexpf(-v91, v99);
  if ( exponent > v99[0] )
  {
    if ( exponent < -17 )
      goto LABEL_34;
    v56 = 1LL << (exponent - LOBYTE(v99[0]));
    if ( v56 < 0 )
    {
      v82 = (1LL << (exponent - LOBYTE(v99[0]))) & 1 | ((1LL << (exponent - LOBYTE(v99[0]))) >> 1);
      v57 = v82 + v82;
    }
    else
    {
      v57 = v56;
    }
    v26 = v26 / v57;
  }
  else if ( exponent >= v99[0] )
  {
    if ( exponent == v99[0] && exponent < -17 )
      goto LABEL_34;
  }
  else
  {
    if ( v99[0] < -17 )
      goto LABEL_34;
    v27 = 1LL << (LOBYTE(v99[0]) - exponent);
    if ( v27 < 0 )
    {
      v83 = v27 & 1 | ((1LL << (LOBYTE(v99[0]) - exponent)) >> 1);
      v28 = v83 + v83;
    }
    else
    {
      v28 = v27;
    }
    v29 = _mm_cvtsi32_si128(LODWORD(v25));
    *v29.m128i_i32 = *v29.m128i_i32 / v28;
    v25 = COERCE_FLOAT(_mm_cvtsi128_si32(v29));
  }
  if ( flRotToleranceb < fabs(v25 - v26) )
    return 0;
LABEL_34:
  *v30.m128i_i32 = frexpf(src1->m_orientation.z, &exponent);
  v31 = COERCE_FLOAT(_mm_cvtsi128_si32(v30));
  v32 = frexpf(-v15, v99);
  if ( exponent <= v99[0] )
  {
    if ( exponent >= v99[0] )
    {
      if ( exponent == v99[0] && exponent < -17 )
        goto LABEL_40;
    }
    else
    {
      if ( v99[0] < -17 )
        goto LABEL_40;
      v71 = 1LL << (LOBYTE(v99[0]) - exponent);
      if ( v71 < 0 )
      {
        v87 = v71 & 1 | ((1LL << (LOBYTE(v99[0]) - exponent)) >> 1);
        v72 = v87 + v87;
      }
      else
      {
        v72 = v71;
      }
      v73 = _mm_cvtsi32_si128(LODWORD(v31));
      *v73.m128i_i32 = *v73.m128i_i32 / v72;
      v31 = COERCE_FLOAT(_mm_cvtsi128_si32(v73));
    }
  }
  else
  {
    if ( exponent < -17 )
      goto LABEL_40;
    v33 = 1LL << (exponent - LOBYTE(v99[0]));
    if ( v33 < 0 )
    {
      v85 = (1LL << (exponent - LOBYTE(v99[0]))) & 1 | ((1LL << (exponent - LOBYTE(v99[0]))) >> 1);
      v34 = v85 + v85;
    }
    else
    {
      v34 = v33;
    }
    v32 = v32 / v34;
  }
  if ( flRotToleranceb < fabs(v31 - v32) )
    return 0;
LABEL_40:
  *v35.m128i_i32 = frexpf(src1->m_orientation.w, &exponent);
  v36 = COERCE_FLOAT(_mm_cvtsi128_si32(v35));
  v37 = frexpf(-v95, v99);
  if ( exponent <= v99[0] )
  {
    if ( exponent >= v99[0] )
    {
      if ( exponent != v99[0] )
        return flRotToleranceb >= fabs(v36 - v37);
      result = 1;
      if ( exponent >= -17 )
        return flRotToleranceb >= fabs(v36 - v37);
    }
    else
    {
      result = 1;
      if ( v99[0] >= -17 )
      {
        v78 = 1LL << (LOBYTE(v99[0]) - exponent);
        if ( v78 < 0 )
          v79 = (v78 & 1 | ((1LL << (LOBYTE(v99[0]) - exponent)) >> 1))
              + (v78 & 1 | ((1LL << (LOBYTE(v99[0]) - exponent)) >> 1));
        else
          v79 = v78;
        v80 = _mm_cvtsi32_si128(LODWORD(v36));
        *v80.m128i_i32 = *v80.m128i_i32 / v79;
        v36 = COERCE_FLOAT(_mm_cvtsi128_si32(v80));
        return flRotToleranceb >= fabs(v36 - v37);
      }
    }
  }
  else
  {
    result = 1;
    if ( exponent >= -17 )
    {
      v38 = 1LL << (exponent - LOBYTE(v99[0]));
      if ( v38 < 0 )
        v39 = ((1 << (exponent - LOBYTE(v99[0]))) & 1 | ((1LL << (exponent - LOBYTE(v99[0]))) >> 1))
            + ((1 << (exponent - LOBYTE(v99[0]))) & 1 | ((1LL << (exponent - LOBYTE(v99[0]))) >> 1));
      else
        v39 = v38;
      v37 = v37 / v39;
      return flRotToleranceb >= fabs(v36 - v37);
    }
  }
  return result;
}


// TransformToWorldSpace  (line 134, @0x00000000030edaa0, libserver.so)
// calls: ConcatTransforms
void __fastcall TransformToWorldSpace(
        int nRootTransformCount,
        int nTransformCount,
        const int *pParentIndices,
        CTransform *pTransforms)
{
  const int *v5; // r12
  const int *v6; // r14
  CTransform *v7; // rbx
  __int64 v8; // rdi
  CTransform *v9; // rdx
  const CTransform *v10; // rsi

  if ( nRootTransformCount < nTransformCount )
  {
    v5 = &pParentIndices[nRootTransformCount];
    v6 = &pParentIndices[(nTransformCount - 1 - nRootTransformCount) + 1 + nRootTransformCount];
    v7 = &pTransforms[nRootTransformCount];
    do
    {
      v8 = *v5;
      v9 = v7;
      v10 = v7;
      ++v5;
      ++v7;
      ConcatTransforms(&pTransforms[v8], v10, v9);
    }
    while ( v5 != v6 );
  }
}


// TransformToParentSpace  (line 152, @0x00000000030edb00, libserver.so)  // inlines: memset
// calls: memset, ConcatTransforms, TransformInvert, __stack_chk_fail
void __fastcall TransformToParentSpace(
        int nRootTransformCount,
        int nTransformCount,
        const int *pParentIndices,
        CTransform *pTransforms)
{
  __int64 v6; // r13
  int v7; // ebx
  void *v8; // rsp
  unsigned __int64 v9; // r12
  __int64 v10; // rdx
  void *v11; // rsp
  unsigned __int64 v12; // r13
  const int *v13; // r14
  CTransform *v14; // r15
  const CTransform *v15; // r8
  CTransform *v16; // rdx
  const CTransform *v17; // rsi
  __int64 v18; // rdi
  _BYTE *v19; // rdx
  unsigned __int64 v20; // rdi
  _BYTE *v22; // [rsp+8h] [rbp-58h]
  const CTransform *v23; // [rsp+10h] [rbp-50h] BYREF
  int nRootTransformCounta; // [rsp+1Ch] [rbp-44h]
  unsigned __int64 v25; // [rsp+28h] [rbp-38h]

  v6 = nTransformCount;
  nRootTransformCounta = nRootTransformCount;
  v25 = __readfsqword(0x28u);
  v7 = nTransformCount - 1;
  v8 = alloca(((nTransformCount + 31LL) & 0xFFFFFFFFFFFFFFF0LL) + 16);
  v9 = &v23 & 0xFFFFFFFFFFFFFFEFLL;
  memset((&v23 & 0xFFFFFFFFFFFFFFEFLL), 0, nTransformCount);
  v10 = v6;
  v11 = alloca(32 * v6 + 32);
  v12 = &v23 & 0xFFFFFFFFFFFFFFEFLL;
  if ( nRootTransformCount <= v7 )
  {
    v13 = &pParentIndices[v7];
    v14 = &pTransforms[v10 - 1];
    do
    {
      v18 = *v13;
      v19 = (v9 + v18);
      if ( *(v9 + v18) != 0 )
      {
        v15 = (v12 + 32 * v18);
      }
      else
      {
        v20 = 32 * v18;
        v22 = v19;
        v23 = (v12 + v20);
        TransformInvert(&pTransforms[v20 / 0x20], (v12 + v20));
        v15 = v23;
        *v22 = 1;
      }
      v16 = v14;
      v17 = v14;
      --v7;
      --v13;
      --v14;
      ConcatTransforms(v15, v17, v16);
    }
    while ( v7 >= nRootTransformCounta );
  }
}


