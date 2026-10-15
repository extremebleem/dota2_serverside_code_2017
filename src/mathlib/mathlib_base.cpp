// Reconstructed from DWARF by pahole; not original source.

// src/mathlib/mathlib_base.cpp:4428
struct MathLib_InitGlobalConstructor {
	MathLib_InitGlobalConstructor();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_mathlib_base.cpp  (line 0, @0x0000000001a6a200, libserver.so)  // inlines: Color, IntVector3D, MathLib_InitGlobalConstructor, QAngle, Quaternion, SetColor, Vector, Vector2D, Vector4D, __static_initialization_and_destruction_0, matrix3x4a_t
// calls: MathLib_Init
// globals: UNSPECIFIED_LOGGING_COLOR, vec3_origin, vec3_angle, quat_identity, vec3_invalid, vec4_origin, vec4_invalid, vec2_origin (16 total)
void __cdecl GLOBAL__sub_I_mathlib_base_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  vec3_origin.x = 0.0;
  vec3_origin.y = 0.0;
  vec3_origin.z = 0.0;
  vec3_angle.x = 0.0;
  vec3_angle.y = 0.0;
  vec3_angle.z = 0.0;
  quat_identity.x = 0.0;
  quat_identity.y = 0.0;
  quat_identity.z = 0.0;
  quat_identity.w = 1.0;
  vec3_invalid.x = 3.4028235e38;
  vec3_invalid.y = 3.4028235e38;
  vec3_invalid.z = 3.4028235e38;
  vec4_origin.x = 0.0;
  vec4_origin.y = 0.0;
  vec4_origin.z = 0.0;
  vec4_origin.w = 0.0;
  vec4_invalid.x = 3.4028235e38;
  vec4_invalid.y = 3.4028235e38;
  vec4_invalid.z = 3.4028235e38;
  vec4_invalid.w = 3.4028235e38;
  vec2_origin.x = 0.0;
  vec2_origin.y = 0.0;
  vec2_invalid.x = 3.4028235e38;
  vec2_invalid.y = 3.4028235e38;
  INT_VECTOR3_ORIGIN.x = 0;
  INT_VECTOR3_ORIGIN.y = 0;
  INT_VECTOR3_ORIGIN.z = 0;
  INT_VECTOR3_AXIS_X.x = 1;
  INT_VECTOR3_AXIS_X.y = 0;
  INT_VECTOR3_AXIS_X.z = 0;
  INT_VECTOR3_AXIS_Y.x = 0;
  INT_VECTOR3_AXIS_Y.y = 1;
  INT_VECTOR3_AXIS_Y.z = 0;
  INT_VECTOR3_AXIS_Z.x = 0;
  INT_VECTOR3_AXIS_Z.y = 0;
  INT_VECTOR3_AXIS_Z.z = 1;
  *&g_MatrixIdentity.m_flMatVal[0][0] = 0x3F800000u;
  *&g_MatrixIdentity.m_flMatVal[1][0] = 0x3F80000000000000uLL;
  *&g_MatrixIdentity.m_flMatVal[2][0] = 0;
  *&g_MatrixIdentity.m_flMatVal[2][2] = 1065353216;
  if ( !s_bMathlibInitialized )
  {
    MathLib_Init();
    s_bMathlibInitializedGlobalConstructorOnly = 1;
  }
}


// _sqrtf  (line 73, @0x00000000030dee30, libserver.so)
// calls: sqrtf
float __fastcall _sqrtf(float a1, float x)
{
  return fsqrt(a1);
}


// _rsqrtf  (line 79, @0x00000000030dee50, libserver.so)  // inlines: _sqrtf
// calls: sqrtf
float __fastcall _rsqrtf(float a1, float x)
{
  return 1.0 / fsqrt(a1);
}


// VectorNormalize  (line 93, @0x00000000030dee80, libserver.so)  // inlines: FastSqrt, Length, VectorDivide, VectorLength, VectorMultiply, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator/, operator/=, operator=
// callers: CLightComponent::ComputeLightDesc, CBaseEntity::DrawAutoAimOverlay, Script_CalcClosestPointOnEntityOBB, Script_CalcDistanceBetweenEntityOBB, CDecalGameSystem::FillVertexDataForDecal, CreatePiecesFromPropData, IsPlayerAbleToLockOrUnlockDoor, CreatePiece, CreateGibsFromList, CBaseAnimatingController::CalculateIKLocks, CBreakableProp::HandleInteractionStick, CBreakableProp::HandleFirstCollisionInteractions (464 total)
float __fastcall VectorNormalize(Vector *const vec)
{
  float x; // xmm3_4
  float y; // xmm2_4
  float z; // xmm1_4
  float result; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm5_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm4_4

  x = vec->x;
  y = vec->y;
  z = vec->z;
  result = fsqrt(((x * x) + (y * y)) + (z * z));
  if ( result >= 9.9999998e-18 )
  {
    if ( result >= 9.9999998e16 )
    {
      v12 = x * 8.4703295e-22;
      v13 = y * 8.4703295e-22;
      v14 = z * 8.4703295e-22;
      v15 = fsqrt(((v12 * v12) + (v13 * v13)) + (v14 * v14));
      v16 = 1.0 / v15;
      result = v15 * 1.1805916e21;
      v9 = v12 * v16;
      v10 = v13 * v16;
      v11 = v14 * v16;
    }
    else
    {
      v9 = x * (1.0 / result);
      v10 = y * (1.0 / result);
      v11 = z * (1.0 / result);
    }
    vec->x = v9;
    vec->y = v10;
    vec->z = v11;
  }
  else
  {
    v5 = y * 1.1805916e21;
    v6 = x * 1.1805916e21;
    v7 = z * 1.1805916e21;
    v8 = fsqrt(((v6 * v6) + (v5 * v5)) + (v7 * v7));
    result = 0.0;
    if ( v8 != 0.0 )
    {
      vec->x = v6 * (1.0 / v8);
      vec->y = v5 * (1.0 / v8);
      vec->z = v7 * (1.0 / v8);
      return v8 * 8.4703295e-22;
    }
  }
  return result;
}


// _VectorNormalizeFast  (line 137, @0x00000000030dec50, libserver.so)  // inlines: IsFinite
// calls: sqrtf
void __fastcall _VectorNormalizeFast(Vector *const vec)
{
  __m128i z_low; // xmm0
  vec_t v2; // xmm1_4
  vec_t v3; // xmm2_4
  vec_t v4; // xmm0_4
  vec_t v5; // xmm1_4

  z_low = LODWORD(vec->z);
  *z_low.m128i_i32 = fsqrt(((vec->x * vec->x) + (vec->y * vec->y)) + (*z_low.m128i_i32 * *z_low.m128i_i32));
  if ( *z_low.m128i_i32 > 9.9999997e-21 )
    goto LABEL_5;
  if ( *z_low.m128i_i32 != 0.0 && (_mm_cvtsi128_si32(z_low) & 0x7F800000) != 0x7F800000 )
  {
    v2 = vec->x * (1.0 / *z_low.m128i_i32);
    v3 = vec->y * (1.0 / *z_low.m128i_i32);
    v4 = (1.0 / *z_low.m128i_i32) * vec->z;
    vec->x = v2;
    vec->y = v3;
    vec->z = v4;
    *z_low.m128i_i32 = fsqrt(((v2 * v2) + (v3 * v3)) + (v4 * v4));
LABEL_5:
    vec->x = vec->x * (1.0 / *z_low.m128i_i32);
    v5 = (1.0 / *z_low.m128i_i32) * vec->z;
    vec->y = vec->y * (1.0 / *z_low.m128i_i32);
    vec->z = v5;
  }
}


// _InvRSquared  (line 176, @0x00000000030df010, libserver.so)  // inlines: DotProduct
float __fastcall _InvRSquared(const float *v)
{
  float v1; // xmm1_4
  float result; // xmm0_4

  v1 = ((*v * *v) + (v[1] * v[1])) + (v[2] * v[2]);
  result = 1.0;
  if ( v1 >= 1.0 )
    return 1.0 / v1;
  return result;
}


// Vector::Random  (line 183, @0x00000000030df050, libserver.so)
// calls: RandomFloat
// callers: CDefaultPlayerPickupVPhysics::PhysGunLaunchAngularImpulse, CBreakableProp::PhysGunLaunchAngularImpulse, CEntityDissolve::ElectrocuteThink, CFourWheelVehiclePhysics::PlaceWheelDust, CGib::InitGib, CRagdollProp::PhysGunLaunchAngularImpulse, CBasePlayer::PostThink, Pickup_PhysGunLaunchAngularImpulse, CTriggerImpact::StartTouch, CDOTA_Ability_Greevil_Miniboss_Purple_PlagueWard::OnSpellStart, CDOTA_Modifier_Leshrac_Diabolic_Edict::OnIntervalThink, CDOTA_Modifier_Rattletrap_BatteryAssault::OnIntervalThink (14 total)
void __fastcall Vector::Random(Vector *const this, double a2, vec_t minVal, vec_t maxVal)
{
  int minVala; // [rsp+Ch] [rbp-14h]

  minVala = LODWORD(a2);
  this->x = RandomFloat(a2, minVal);
  this->y = RandomFloat(COERCE_DOUBLE(minVala), minVal);
  this->z = RandomFloat(COERCE_DOUBLE(minVala), minVal);
}


// VectorsEqual  (line 197, @0x00000000030df0b0, libserver.so)
bool __fastcall VectorsEqual(const float *v1, const float *v2)
{
  return *v1 == *v2 && v1[1] == v2[1] && v1[2] == v2[2];
}


// MatrixAngles  (line 214, @0x00000000030df470, libserver.so)  // inlines: GetColumn, MatrixAngles, MatrixGetColumn, RadianEuler, operator=
// calls: MatrixAngles
void __fastcall MatrixAngles(const matrix3x4_t *const matrix, RadianEuler *const angles, Vector *const position)
{
  vec_t v4; // xmm2_4
  vec_t v5; // xmm0_4
  vec_t v6; // xmm2_4
  vec_t v7; // xmm0_4
  QAngle v8; // [rsp+0h] [rbp-20h] BYREF

  v4 = matrix->m_flMatVal[1][3];
  v5 = matrix->m_flMatVal[0][3];
  position->z = matrix->m_flMatVal[2][3];
  position->y = v4;
  position->x = v5;
  MatrixAngles(matrix, &v8);
  v6 = v8.x * 0.017453292;
  v7 = 0.017453292 * v8.z;
  angles->z = v8.y * 0.017453292;
  angles->y = v6;
  angles->x = v7;
}


// MatrixAngles  (line 220, @0x00000000030e2fa0, libserver.so)  // inlines: GetColumn, MatrixGetColumn, operator=
// calls: QuaternionNormalize
// callers: CalcBoneVelocityFromDerivative, RagdollApplyAnimationAsVelocity, SolveTransform, CIKTarget::UpdateOwner, CIKTarget::SetNormal, CIKContext::SolveDependencies, CIKContext::UpdateTargets, MatrixAngles, CModelSkeletonBuilder::AppendRenderMeshSkeleton, ComputeTwistBones, CConstraintBones::ComputeTargetPositionOrientation
void __fastcall MatrixAngles(const matrix3x4_t *const matrix, Quaternion *const q, Vector *const pos)
{
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm3_4
  float v8; // xmm0_4
  vec_t v9; // xmm0_4
  float v10; // xmm0_4
  vec_t v11; // xmm2_4
  vec_t v12; // xmm0_4
  vec_t v13; // xmm1_4

  v5 = matrix->m_flMatVal[0][0];
  v6 = matrix->m_flMatVal[1][1];
  v7 = matrix->m_flMatVal[2][2];
  v8 = ((matrix->m_flMatVal[0][0] + v6) + v7) + 1.0;
  if ( v8 > 1.0000001 )
  {
    q->x = matrix->m_flMatVal[2][1] - matrix->m_flMatVal[1][2];
    q->y = matrix->m_flMatVal[0][2] - matrix->m_flMatVal[2][0];
    v13 = matrix->m_flMatVal[1][0] - matrix->m_flMatVal[0][1];
    q->w = v8;
    q->z = v13;
  }
  else if ( v5 <= v6 || v5 <= v7 )
  {
    if ( v6 > v7 )
    {
      q->x = matrix->m_flMatVal[0][1] + matrix->m_flMatVal[1][0];
      q->y = ((v6 + 1.0) - v5) - v7;
      q->z = matrix->m_flMatVal[2][1] + matrix->m_flMatVal[1][2];
      v10 = matrix->m_flMatVal[0][2] - matrix->m_flMatVal[2][0];
    }
    else
    {
      q->x = matrix->m_flMatVal[0][2] + matrix->m_flMatVal[2][0];
      v9 = matrix->m_flMatVal[2][1] + matrix->m_flMatVal[1][2];
      q->z = ((v7 + 1.0) - v5) - v6;
      q->y = v9;
      v10 = matrix->m_flMatVal[1][0] - matrix->m_flMatVal[0][1];
    }
    q->w = v10;
  }
  else
  {
    q->x = ((v5 + 1.0) - v6) - v7;
    q->y = matrix->m_flMatVal[1][0] + matrix->m_flMatVal[0][1];
    q->z = matrix->m_flMatVal[0][2] + matrix->m_flMatVal[2][0];
    q->w = matrix->m_flMatVal[2][1] - matrix->m_flMatVal[1][2];
  }
  QuaternionNormalize(q);
  v11 = matrix->m_flMatVal[1][3];
  v12 = matrix->m_flMatVal[0][3];
  pos->z = matrix->m_flMatVal[2][3];
  pos->y = v11;
  pos->x = v12;
}


// ComputeMatrixScale  (line 278, @0x00000000030df0f0, libserver.so)
// calls: sqrtf
// callers: MatrixNormalize
Vector __fastcall ComputeMatrixScale(const matrix3x4_t *const in)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  result.z = fsqrt(
               ((in->m_flMatVal[0][2] * in->m_flMatVal[0][2]) + (in->m_flMatVal[1][2] * in->m_flMatVal[1][2]))
             + (in->m_flMatVal[2][2] * in->m_flMatVal[2][2]));
  *&result.x = __PAIR64__(
                 COERCE_UNSIGNED_INT(
                   fsqrt(
                     ((in->m_flMatVal[0][1] * in->m_flMatVal[0][1]) + (in->m_flMatVal[1][1] * in->m_flMatVal[1][1]))
                   + (in->m_flMatVal[2][1] * in->m_flMatVal[2][1]))),
                 COERCE_UNSIGNED_INT(
                   fsqrt(
                     ((in->m_flMatVal[0][0] * in->m_flMatVal[0][0]) + (in->m_flMatVal[1][0] * in->m_flMatVal[1][0]))
                   + (in->m_flMatVal[2][0] * in->m_flMatVal[2][0]))));
  return result;
}


// MatrixNormalize  (line 287, @0x00000000030df1e0, libserver.so)
// calls: ComputeMatrixScale
// callers: IDebugOverlay::EntityBounds, IDebugOverlay::EntityHitboxes, CSkeletonInstance::SweepShapeAgainstHitboxes, MatrixAngles, MatrixTransform, CTiltTwistConstraint::ComputeTwistAroundAxisInRadians
Vector __fastcall MatrixNormalize(const matrix3x4_t *const in, matrix3x4_t *const out)
{
  Vector v6; // 0:kr00_12.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v6 = ComputeMatrixScale(in);
  *&result.x = *&v6.x;
  result.z = v6.z;
  out->m_flMatVal[0][0] = in->m_flMatVal[0][0] * (1.0 / v6.x);
  out->m_flMatVal[1][0] = in->m_flMatVal[1][0] * (1.0 / v6.x);
  out->m_flMatVal[2][0] = (1.0 / v6.x) * in->m_flMatVal[2][0];
  out->m_flMatVal[0][1] = in->m_flMatVal[0][1] * (1.0 / v6.y);
  out->m_flMatVal[1][1] = in->m_flMatVal[1][1] * (1.0 / v6.y);
  out->m_flMatVal[2][1] = (1.0 / v6.y) * in->m_flMatVal[2][1];
  out->m_flMatVal[0][2] = in->m_flMatVal[0][2] * (1.0 / v6.z);
  out->m_flMatVal[1][2] = in->m_flMatVal[1][2] * (1.0 / v6.z);
  out->m_flMatVal[2][2] = (1.0 / v6.z) * in->m_flMatVal[2][2];
  out->m_flMatVal[0][3] = in->m_flMatVal[0][3];
  out->m_flMatVal[1][3] = in->m_flMatVal[1][3];
  out->m_flMatVal[2][3] = in->m_flMatVal[2][3];
  return result;
}


// MatrixAngles  (line 303, @0x00000000030e3140, libserver.so)  // inlines: operator=
// calls: MatrixNormalize, MatrixAngles
// callers: DecomposeMatrixForNode, CIKContext::SolveDependencies, CModel::SetupAttachment
void __fastcall MatrixAngles(
        const matrix3x4_t *const mat,
        Quaternion *const q,
        Vector *const position,
        Vector *const vScale)
{
  matrix3x4_t norm; // [rsp+10h] [rbp-50h] BYREF

  *vScale = MatrixNormalize(mat, &norm);
  MatrixAngles(&norm, q, position);
}


// MatrixAngles  (line 310, @0x00000000030df2e0, libserver.so)  // inlines: RAD2DEG
// calls: V_atan2f, sqrtf
// callers: CDevtestHierarchy::ResetDynamicChildPosition, CBaseEntity::SetLocalTransform, CBaseEntity::SetEntityToWorldTransform, RotateOrientation, CDecalGameSystem::RenderDebugDecal, CreatePiecesFromPropData, CreatePiece, CreateGibsFromList, CBaseAnimating::GetBonePosition, CGameSceneNode::SetAbsAngles, CSkeletonInstance::GetAttachment, CSkeletonInstance::GetAttachmentLocal (44 total)
void __fastcall MatrixAngles(const matrix3x4_t *const matrix, QAngle *const angles)
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

  *&v3 = LODWORD(matrix->m_flMatVal[0][0]);
  *&v4 = LODWORD(matrix->m_flMatVal[1][0]);
  v5 = _mm_cvtsi128_si32(LODWORD(matrix->m_flMatVal[2][0]));
  v6 = matrix->m_flMatVal[2][2];
  v7 = fsqrt((*&v3 * *&v3) + (*&v4 * *&v4));
  if ( v7 > 0.001 )
  {
    v9 = v7;
    v11 = matrix->m_flMatVal[2][1];
    angles->y = V_atan2f(v4, v3) * 57.295776;
    angles->x = V_atan2f(
                  COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*_mm_cvtsi32_si128(v5).m128i_i64) ^ 0x80000000),
                  COERCE_DOUBLE(LODWORD(v9)))
              * 57.295776;
    angles->z = V_atan2f(COERCE_DOUBLE(LODWORD(v11)), COERCE_DOUBLE(LODWORD(v6))) * 57.295776;
  }
  else
  {
    xyDist = v7;
    angles->y = V_atan2f(
                  COERCE_DOUBLE(LODWORD(matrix->m_flMatVal[0][1]) ^ 0x80000000LL),
                  COERCE_DOUBLE(LODWORD(matrix->m_flMatVal[1][1])))
              * 57.295776;
    v8 = V_atan2f(
           COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*_mm_cvtsi32_si128(v5).m128i_i64) ^ 0x80000000),
           COERCE_DOUBLE(LODWORD(xyDist)));
    angles->z = 0.0;
    angles->x = v8 * 57.295776;
  }
}


// MatrixAngles  (line 359, @0x00000000030df4e0, libserver.so)  // inlines: MatrixAngles, MatrixPosition, operator=
// calls: MatrixNormalize, MatrixAngles
// callers: CGameSceneNode::SetNodeToWorldInternal, CGameSceneNode::SetNodeToParentInternal, CGameSceneNode::WriteTransformValue, CGameSceneNode::AttachToParent, CSkeletonInstance::DebugShowHitboxes, Model_AlignIKMatrix
void __fastcall MatrixAngles(
        const matrix3x4_t *const matrix,
        QAngle *const angles,
        Vector *const position,
        Vector *const vScale)
{
  matrix3x4_t norm; // [rsp+10h] [rbp-50h] BYREF

  *vScale = MatrixNormalize(matrix, &norm);
  MatrixAngles(&norm, angles);
  position->x = norm.m_flMatVal[0][3];
  position->y = norm.m_flMatVal[1][3];
  position->z = norm.m_flMatVal[2][3];
}


// VectorTransform  (line 367, @0x00000000030df560, libserver.so)  // inlines: DotProduct
// callers: CBaseEntity::WorldSpaceCenter, CBaseEntity::ComputeAbsPosition, CDecalGameSystem::FillVertexDataForDecal, CDecalGameSystem::OnShootDecal, CDecalSaveRestoreBlockHandler::Restore, CreateGibsFromList, CBaseAnimating::GetHitboxesFrontside, IDebugOverlay::EntityText, CSkeletonInstance::TraceRayAgainstHitboxes, CBasePlayer::FindUseEntity, CBeam::SetAbsStartPos, CBeam::SetAbsEndPos (53 total)
void __fastcall VectorTransform(const float *in1, const matrix3x4_t *const in2, float *out)
{
  float v3; // xmm0_4
  float v4; // xmm3_4
  float v5; // xmm2_4

  v3 = *in1;
  v4 = in1[1];
  v5 = in1[2];
  *out = (((in2->m_flMatVal[0][0] * *in1) + (in2->m_flMatVal[0][1] * v4)) + (in2->m_flMatVal[0][2] * v5))
       + in2->m_flMatVal[0][3];
  out[1] = (((in2->m_flMatVal[1][0] * v3) + (in2->m_flMatVal[1][1] * v4)) + (in2->m_flMatVal[1][2] * v5))
         + in2->m_flMatVal[1][3];
  out[2] = (((v3 * in2->m_flMatVal[2][0]) + (v4 * in2->m_flMatVal[2][1])) + (v5 * in2->m_flMatVal[2][2]))
         + in2->m_flMatVal[2][3];
}


// BoundingBoxSizeTransform  (line 376, @0x00000000030df5f0, libserver.so)
void __fastcall BoundingBoxSizeTransform(const Vector *const in1, const matrix3x4_t *const in2, Vector *const out)
{
  out->x = (fabs(in2->m_flMatVal[0][0] * in1->x) + fabs(in2->m_flMatVal[0][1] * in1->y))
         + fabs(in2->m_flMatVal[0][2] * in1->z);
  out->y = (fabs(in2->m_flMatVal[1][0] * in1->x) + fabs(in2->m_flMatVal[1][1] * in1->y))
         + fabs(in2->m_flMatVal[1][2] * in1->z);
  out->z = (fabs(in2->m_flMatVal[2][0] * in1->x) + fabs(in2->m_flMatVal[2][1] * in1->y))
         + fabs(in2->m_flMatVal[2][2] * in1->z);
}


// VectorITransform  (line 387, @0x00000000030df6a0, libserver.so)
// callers: CPhysicsGameSystem::UpdateHierarchyJoint, CPhysicsGameSystem::CreateHierarchyConstraint, CreateGibsFromList, CGameEntitySystem::FindEntityInSphere, CGameEntitySystem::FindEntityByClassnameWithin, CGameEntitySystem::FindEntityInheritingFromWithin, CGameSceneNode::SetAbsOrigin, CSkeletonInstance::TraceRayAgainstHitboxes, CDecal::StaticDecal, CCollisionProperty::WorldToNormalizedSpace, CCollisionProperty::IsPointInBounds, CCollisionProperty::CalcNearestPoint (25 total)
void __fastcall VectorITransform(const float *in1, const matrix3x4_t *const in2, float *out)
{
  float v3; // xmm0_4
  float v4; // xmm3_4
  float v5; // xmm2_4

  v3 = *in1 - in2->m_flMatVal[0][3];
  v4 = in1[1] - in2->m_flMatVal[1][3];
  v5 = in1[2] - in2->m_flMatVal[2][3];
  *out = ((in2->m_flMatVal[0][0] * v3) + (in2->m_flMatVal[1][0] * v4)) + (in2->m_flMatVal[2][0] * v5);
  out[1] = ((in2->m_flMatVal[0][1] * v3) + (in2->m_flMatVal[1][1] * v4)) + (in2->m_flMatVal[2][1] * v5);
  out[2] = ((v3 * in2->m_flMatVal[0][2]) + (v4 * in2->m_flMatVal[1][2])) + (v5 * in2->m_flMatVal[2][2]);
}


// VectorRotate  (line 403, @0x00000000030df730, libserver.so)  // inlines: DotProduct
// callers: CBaseEntity::ComputeAbsDirection, CDecalGameSystem::FillVertexDataForDecal, CDecalGameSystem::OnShootDecal, CDecalSaveRestoreBlockHandler::Restore, CBaseAnimating::GetVelocity, CBreakableProp::Break, CSkeletonInstance::TraceRayAgainstHitboxes, CBaseEntity::CalcAbsoluteVelocity, CBaseButton::Spawn, CBaseDoor::Spawn, CFuncMoveLinear::Spawn, CreateServerRagdoll (33 total)
void __fastcall VectorRotate(const float *in1, const matrix3x4_t *const in2, float *out)
{
  float v3; // xmm4_4
  float v4; // xmm3_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm5_4
  float v9; // xmm3_4

  v3 = in1[1];
  v4 = in1[2];
  v5 = ((in2->m_flMatVal[1][0] * *in1) + (in2->m_flMatVal[1][1] * v3)) + (in2->m_flMatVal[1][2] * v4);
  v6 = (in2->m_flMatVal[2][0] * *in1) + (in2->m_flMatVal[2][1] * v3);
  v7 = (*in1 * in2->m_flMatVal[0][0]) + (v3 * in2->m_flMatVal[0][1]);
  v8 = in2->m_flMatVal[2][2] * v4;
  v9 = v4 * in2->m_flMatVal[0][2];
  out[1] = v5;
  out[2] = v6 + v8;
  *out = v7 + v9;
}


// VectorRotate  (line 418, @0x00000000030e1a50, libserver.so)  // inlines: VectorRotate
// calls: AngleMatrix, VectorRotate
// callers: CDOTA_BotMode_EvasiveManeuvers::CalculateDesiredLocation
void __fastcall VectorRotate(const Vector *const in1, const QAngle *const in2, Vector *const out)
{
  matrix3x4_t matRotate; // [rsp+0h] [rbp-50h] BYREF

  AngleMatrix(in2, &matRotate);
  VectorRotate(&in1->x, &matRotate, &out->x);
}


// VectorRotate  (line 426, @0x00000000030e3f40, libserver.so)  // inlines: QuaternionMatrix, VectorRotate
// calls: QuaternionMatrixOrientationOnly, VectorRotate
// callers: CDOTA_ActionRunner::GetThinkerLineEndpoints, ComputeTwistBones
void __fastcall VectorRotate(const Vector *const in1, const Quaternion *const in2, Vector *const out)
{
  matrix3x4_t matRotate; // [rsp+0h] [rbp-50h] BYREF

  QuaternionMatrixOrientationOnly(in2, &matRotate);
  matRotate.m_flMatVal[0][3] = 0.0;
  matRotate.m_flMatVal[1][3] = 0.0;
  matRotate.m_flMatVal[2][3] = 0.0;
  VectorRotate(&in1->x, &matRotate, &out->x);
}


// VectorIRotate  (line 435, @0x00000000030df7b0, libserver.so)
// callers: CBaseEntity::SetAbsVelocity, CPhysTorque::SetupForces, CPhysSlideConstraint::CreateConstraint, CKeepUpright::Simulate, CTriggerPush::InputSetPushDirection, CTriggerPush::Spawn, IntersectRayWithOBB, IsRayIntersectingOBB, IRotateAABB, VectorIRotate, Distance
void __fastcall VectorIRotate(const float *in1, const matrix3x4_t *const in2, float *out)
{
  float v3; // xmm4_4
  float v4; // xmm3_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm5_4
  float v9; // xmm3_4

  v3 = in1[1];
  v4 = in1[2];
  v5 = ((in2->m_flMatVal[0][1] * *in1) + (in2->m_flMatVal[1][1] * v3)) + (in2->m_flMatVal[2][1] * v4);
  v6 = (in2->m_flMatVal[0][2] * *in1) + (in2->m_flMatVal[1][2] * v3);
  v7 = (*in1 * in2->m_flMatVal[0][0]) + (v3 * in2->m_flMatVal[1][0]);
  v8 = in2->m_flMatVal[2][2] * v4;
  v9 = v4 * in2->m_flMatVal[2][0];
  out[1] = v5;
  out[2] = v6 + v8;
  *out = v7 + v9;
}


// TransformAnglesToLocalSpace  (line 451, @0x00000000030e1d20, libserver.so)
// calls: MatrixInvert, AngleMatrix, ConcatTransforms, MatrixAngles
QAngle __fastcall TransformAnglesToLocalSpace(const QAngle *const angles, const matrix3x4_t *const parentMatrix)
{
  QAngle out; // [rsp+10h] [rbp-D0h] BYREF
  matrix3x4_t angToWorld; // [rsp+30h] [rbp-B0h] BYREF
  matrix3x4_t worldToParent; // [rsp+60h] [rbp-80h] BYREF
  matrix3x4_t localMatrix; // [rsp+90h] [rbp-50h] BYREF
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  MatrixInvert(parentMatrix, &worldToParent);
  AngleMatrix(angles, &angToWorld);
  ConcatTransforms(&worldToParent, &angToWorld, &localMatrix);
  MatrixAngles(&localMatrix, &out);
  *&result.x = *&out.x;
  result.z = out.z;
  return result;
}


// TransformAnglesToWorldSpace  (line 464, @0x00000000030e1cb0, libserver.so)
// calls: AngleMatrix, ConcatTransforms, MatrixAngles
// callers: Pickup_GetPreferredCarryAngles
QAngle __fastcall TransformAnglesToWorldSpace(const QAngle *const angles, const matrix3x4_t *const parentMatrix)
{
  QAngle out; // [rsp+10h] [rbp-A0h] BYREF
  matrix3x4_t angToParent; // [rsp+30h] [rbp-80h] BYREF
  matrix3x4_t angToWorld; // [rsp+60h] [rbp-50h] BYREF
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  AngleMatrix(angles, &angToParent);
  ConcatTransforms(parentMatrix, &angToParent, &angToWorld);
  MatrixAngles(&angToWorld, &out);
  *&result.x = *&out.x;
  result.z = out.z;
  return result;
}


// MatrixInitializeXYZ  (line 476, @0x00000000030df830, libserver.so)  // inlines: MatrixSetColumn, SetColumn
void __fastcall MatrixInitializeXYZ(
        matrix3x4_t *const mat,
        const Vector *const vecOrigin,
        const Vector *const vecXAxis,
        const Vector *const vecYAxis,
        const Vector *const vecZAxis)
{
  mat->m_flMatVal[0][0] = vecXAxis->x;
  mat->m_flMatVal[1][0] = vecXAxis->y;
  mat->m_flMatVal[2][0] = vecXAxis->z;
  mat->m_flMatVal[0][1] = vecYAxis->x;
  mat->m_flMatVal[1][1] = vecYAxis->y;
  mat->m_flMatVal[2][1] = vecYAxis->z;
  mat->m_flMatVal[0][2] = vecZAxis->x;
  mat->m_flMatVal[1][2] = vecZAxis->y;
  mat->m_flMatVal[2][2] = vecZAxis->z;
  mat->m_flMatVal[0][3] = vecOrigin->x;
  mat->m_flMatVal[1][3] = vecOrigin->y;
  mat->m_flMatVal[2][3] = vecOrigin->z;
}


// MatrixInitializeFLU  (line 484, @0x00000000030df8b0, libserver.so)  // inlines: MatrixSetColumn, SetColumn
void __fastcall MatrixInitializeFLU(
        matrix3x4_t *const mat,
        const Vector *const vecOrigin,
        const Vector *const vForward,
        const Vector *const vLeft,
        const Vector *const vUp)
{
  mat->m_flMatVal[0][0] = vForward->x;
  mat->m_flMatVal[1][0] = vForward->y;
  mat->m_flMatVal[2][0] = vForward->z;
  mat->m_flMatVal[0][1] = vLeft->x;
  mat->m_flMatVal[1][1] = vLeft->y;
  mat->m_flMatVal[2][1] = vLeft->z;
  mat->m_flMatVal[0][2] = vUp->x;
  mat->m_flMatVal[1][2] = vUp->y;
  mat->m_flMatVal[2][2] = vUp->z;
  mat->m_flMatVal[0][3] = vecOrigin->x;
  mat->m_flMatVal[1][3] = vecOrigin->y;
  mat->m_flMatVal[2][3] = vecOrigin->z;
}


// MatrixCopy  (line 492, @0x00000000030df930, libserver.so)  // inlines: memcpy
// callers: CPhysicsGameSystem::TeleportToAnimationState, CBaseAnimating::GetBoneTransform, CBaseAnimating::HitboxToWorldTransforms, CBaseAnimating::DrawVCollide, CSave::WriteMatrix3x4Worldspace, CRestore::ReadMatrix3x4Worldspace, CSkeletonBoneSetupHelper::SetRootTransform, CSkeletonInstance::GetAttachment, CPhysicsPushedEntities::RotateRootEntity, CRagdollProp::Teleport
void __fastcall MatrixCopy(const matrix3x4_t *const in, matrix3x4_t *const out)
{
  *out = *in;
}


// MatricesAreEqual  (line 501, @0x00000000030df970, libserver.so)
// callers: CStudioConstraintBones::UpdateWorldTransformAndChildren
__int64 __fastcall MatricesAreEqual(
        const matrix3x4_t *const src1,
        const matrix3x4_t *const src2,
        float a3,
        float flTolerance)
{
  __int64 v4; // rdx
  __int64 i; // rax

  v4 = 0;
  while ( 2 )
  {
    for ( i = 0; i != 4; ++i )
    {
      if ( fabs(src1->m_flMatVal[v4][i] - src2->m_flMatVal[v4][i]) > a3 )
        return 0;
    }
    if ( ++v4 != 3 )
      continue;
    break;
  }
  return 1;
}


// RotationsAreEqual  (line 518, @0x00000000030df9d0, libserver.so)
// callers: CEntityClass::Unserialize
__int64 __fastcall RotationsAreEqual(
        const matrix3x4_t *const src1,
        const matrix3x4_t *const src2,
        float a3,
        float flTolerance)
{
  __int64 v4; // rdx
  __int64 i; // rax

  v4 = 0;
  while ( 2 )
  {
    for ( i = 0; i != 3; ++i )
    {
      if ( fabs(src1->m_flMatVal[v4][i] - src2->m_flMatVal[v4][i]) > a3 )
        return 0;
    }
    if ( ++v4 != 3 )
      continue;
    break;
  }
  return 1;
}


// MatrixInvertTR  (line 533, @0x00000000030dfa30, libserver.so)  // inlines: DotProduct, V_swap<float>
// callers: CPhysicsGameSystem::PushDynamicTransformsWorker, MatrixInvert
void __fastcall MatrixInvertTR(const matrix3x4_t *const in, matrix3x4_t *const out)
{
  float v2; // xmm2_4
  float v3; // xmm3_4
  float v4; // xmm11_4
  float v5; // xmm6_4
  float v6; // xmm12_4
  float v7; // xmm1_4
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm0_4
  float v11; // xmm5_4
  float v12; // xmm10_4
  float v13; // xmm4_4
  float v14; // xmm9_4
  float v15; // xmm6_4
  float v16; // xmm5_4
  float v17; // xmm4_4

  if ( in == out )
  {
    v7 = in->m_flMatVal[0][1];
    v4 = in->m_flMatVal[1][0];
    v10 = in->m_flMatVal[0][2];
    in->m_flMatVal[1][0] = v7;
    v6 = in->m_flMatVal[2][0];
    in->m_flMatVal[0][1] = v4;
    v12 = in->m_flMatVal[1][2];
    in->m_flMatVal[2][0] = v10;
    v9 = in->m_flMatVal[2][1];
    in->m_flMatVal[0][2] = v6;
    in->m_flMatVal[2][1] = v12;
    v2 = in->m_flMatVal[0][0];
    in->m_flMatVal[1][2] = v9;
    v8 = in->m_flMatVal[1][1];
    v14 = in->m_flMatVal[2][2];
  }
  else
  {
    v2 = in->m_flMatVal[0][0];
    out->m_flMatVal[0][0] = in->m_flMatVal[0][0];
    v3 = in->m_flMatVal[1][0];
    out->m_flMatVal[0][1] = v3;
    v4 = v3;
    v5 = in->m_flMatVal[2][0];
    out->m_flMatVal[0][2] = v5;
    v6 = v5;
    v7 = in->m_flMatVal[0][1];
    out->m_flMatVal[1][0] = v7;
    v8 = in->m_flMatVal[1][1];
    out->m_flMatVal[1][1] = v8;
    v9 = in->m_flMatVal[2][1];
    out->m_flMatVal[1][2] = v9;
    v10 = in->m_flMatVal[0][2];
    out->m_flMatVal[2][0] = v10;
    v11 = in->m_flMatVal[1][2];
    out->m_flMatVal[2][1] = v11;
    v12 = v11;
    v13 = in->m_flMatVal[2][2];
    out->m_flMatVal[2][2] = v13;
    v14 = v13;
  }
  v15 = in->m_flMatVal[0][3];
  v16 = in->m_flMatVal[1][3];
  v17 = in->m_flMatVal[2][3];
  out->m_flMatVal[0][3] = -(((v2 * v15) + (v4 * v16)) + (v6 * v17));
  out->m_flMatVal[1][3] = -(((v7 * v15) + (v8 * v16)) + (v9 * v17));
  out->m_flMatVal[2][3] = -(((v10 * v15) + (v16 * v12)) + (v17 * v14));
}


// MatrixInvert  (line 570, @0x00000000030dfb80, libserver.so)
// calls: MatrixInvertTR
// callers: CDecalGameSystem::OnShootDecal, notify_teleport_params_t::CalculateRelativeTransform, CDecalSaveRestoreBlockHandler::Restore, CreatePiece, CBaseAnimating::ComputeEntitySpaceHitboxSurroundingBox, CSkeletonInstance::BuildTransformations, CGameSceneNode::SetAbsAngles, CGameSceneNode::SetNodeToWorldTransform, CSkeletonInstance::GetAttachmentLocal, CGameSceneNode::WriteTransformValue, CGameSceneNode::AttachToParent, CGameSceneNode::Spawn (53 total)
void __fastcall MatrixInvert(const matrix3x4_t *const in, matrix3x4_t *const out)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm1_4

  MatrixInvertTR(in, out);
  v4 = ((in->m_flMatVal[0][0] * in->m_flMatVal[0][0]) + (in->m_flMatVal[1][0] * in->m_flMatVal[1][0]))
     + (in->m_flMatVal[2][0] * in->m_flMatVal[2][0]);
  v5 = 1.0;
  if ( fabs(v4 - 1.0) >= 0.001 )
  {
    if ( v4 != 0.0 )
      v5 = 1.0 / v4;
    out->m_flMatVal[0][0] = out->m_flMatVal[0][0] * v5;
    out->m_flMatVal[0][1] = out->m_flMatVal[0][1] * v5;
    out->m_flMatVal[0][2] = out->m_flMatVal[0][2] * v5;
    out->m_flMatVal[0][3] = out->m_flMatVal[0][3] * v5;
    out->m_flMatVal[1][0] = out->m_flMatVal[1][0] * v5;
    out->m_flMatVal[1][1] = out->m_flMatVal[1][1] * v5;
    out->m_flMatVal[1][2] = out->m_flMatVal[1][2] * v5;
    out->m_flMatVal[1][3] = out->m_flMatVal[1][3] * v5;
    out->m_flMatVal[2][0] = out->m_flMatVal[2][0] * v5;
    out->m_flMatVal[2][1] = out->m_flMatVal[2][1] * v5;
    v6 = out->m_flMatVal[2][2] * v5;
    v7 = v5 * out->m_flMatVal[2][3];
    out->m_flMatVal[2][2] = v6;
    out->m_flMatVal[2][3] = v7;
  }
}


// MatrixInvertGeneral  (line 589, @0x00000000030dfcc0, libserver.so)  // inlines: Init, Set3x4, VMatrix, memcpy
// calls: VMatrix::InverseGeneral
bool __fastcall MatrixInvertGeneral(const matrix3x4_t *const in, matrix3x4_t *const out)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  bool result; // al
  VMatrix v6; // [rsp+0h] [rbp-90h] BYREF
  VMatrix matrix; // [rsp+40h] [rbp-50h] BYREF

  *&matrix.m[3][0] = 0;
  v3 = *&in->m_flMatVal[0][0];
  *&matrix.m[3][2] = 0x3F80000000000000LL;
  *&matrix.m[0][0] = v3;
  *&matrix.m[0][2] = *&in->m_flMatVal[0][2];
  *&matrix.m[1][0] = *&in->m_flMatVal[1][0];
  v4 = *&in->m_flMatVal[2][2];
  *&matrix.m[2][0] = *&in->m_flMatVal[2][0];
  *&matrix.m[2][2] = v4;
  result = VMatrix::InverseGeneral(&matrix, &v6);
  if ( result )
  {
    *&out->m_flMatVal[0][0] = *&v6.m[0][0];
    *&out->m_flMatVal[1][0] = *&v6.m[1][0];
    *&out->m_flMatVal[2][0] = *&v6.m[2][0];
  }
  return result;
}


// VectorCompare  (line 601, @0x00000000030dfd70, libserver.so)
int __fastcall VectorCompare(const float *v1, const float *v2)
{
  __int64 rax1; // rax

  rax1 = 0;
  while ( v1[rax1] == v2[rax1] )
  {
    if ( ++rax1 == 3 )
      return 1;
  }
  return 0;
}


// CrossProduct  (line 617, @0x00000000030dfda0, libserver.so)
// callers: ComputeSeparatingPlane
void __fastcall CrossProduct(const float *v1, const float *v2, float *cross)
{
  *cross = (v1[1] * v2[2]) - (v1[2] * v2[1]);
  cross[1] = (v1[2] * *v2) - (*v1 * v2[2]);
  cross[2] = (*v1 * v2[1]) - (v1[1] * *v2);
}


// Q_log2  (line 627, @0x00000000030dfe00, libserver.so)
// callers: CParticleSystem::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CDOTA_Unit_Courier::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CDOTA_Item_EmptyBottle::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, rr2::CResponseDB::GuessMatchListSize, rr2::CResponseDB::FindMatches
uint32 __fastcall Q_log2(unsigned int val)
{
  uint32 result; // eax
  unsigned int i; // edi

  result = 0;
  for ( i = val >> 1; i != 0; i >>= 1 )
    ++result;
  return result;
}


// MatrixVectorsFLU  (line 642, @0x00000000030dfe20, libserver.so)  // inlines: GetColumn, MatrixGetColumn, operator=
void __fastcall MatrixVectorsFLU(const matrix3x4_t *const matrix, Vector *pForward, Vector *pLeft, Vector *pUp)
{
  vec_t v4; // xmm2_4
  vec_t v5; // xmm0_4
  vec_t v6; // xmm2_4
  vec_t v7; // xmm0_4
  vec_t v8; // xmm2_4
  vec_t v9; // xmm0_4

  v4 = matrix->m_flMatVal[1][0];
  v5 = matrix->m_flMatVal[0][0];
  pForward->z = matrix->m_flMatVal[2][0];
  pForward->y = v4;
  pForward->x = v5;
  v6 = matrix->m_flMatVal[1][1];
  v7 = matrix->m_flMatVal[0][1];
  pLeft->z = matrix->m_flMatVal[2][1];
  pLeft->y = v6;
  pLeft->x = v7;
  v8 = matrix->m_flMatVal[1][2];
  v9 = matrix->m_flMatVal[0][2];
  pUp->z = matrix->m_flMatVal[2][2];
  pUp->y = v8;
  pUp->x = v9;
}


// MatrixVectors  (line 652, @0x00000000030dfe80, libserver.so)  // inlines: GetColumn, MatrixGetColumn, operator*=, operator=
void __fastcall MatrixVectors(const matrix3x4_t *const matrix, Vector *pForward, Vector *pRight, Vector *pUp)
{
  vec_t v4; // xmm2_4
  vec_t v5; // xmm0_4
  vec_t v6; // xmm2_4
  vec_t v7; // xmm0_4
  vec_t v8; // xmm0_4
  vec_t v9; // xmm2_4

  v4 = matrix->m_flMatVal[1][0];
  v5 = matrix->m_flMatVal[0][0];
  pForward->z = matrix->m_flMatVal[2][0];
  pForward->y = v4;
  pForward->x = v5;
  v6 = matrix->m_flMatVal[1][1];
  v7 = matrix->m_flMatVal[0][1];
  pRight->z = matrix->m_flMatVal[2][1];
  pRight->y = v6;
  pRight->x = v7;
  v8 = matrix->m_flMatVal[0][2];
  v9 = matrix->m_flMatVal[1][2];
  pUp->z = matrix->m_flMatVal[2][2];
  pUp->x = v8;
  pUp->y = v9;
  pRight->x = -pRight->x;
  pRight->y = -pRight->y;
  pRight->z = -pRight->z;
}


// VectorVectorsFLU  (line 660, @0x00000000030dff10, libserver.so)  // inlines: CrossProduct, operator[]
// calls: VectorNormalize
// callers: VectorMatrix, LightDesc_t::BuildShadowFrustumForSpotlight, LightDesc_t::CalculateBounds
void __fastcall VectorVectorsFLU(const Vector *const vForward, Vector *const vLeft, Vector *const vUp)
{
  float z; // xmm0_4
  float y; // xmm2_4

  if ( fabs(vForward->x) >= 0.001 )
  {
    y = vForward->y;
  }
  else
  {
    if ( fabs(vForward->y) < 0.001 )
    {
      vLeft->x = 0.0;
      vLeft->y = 1.0;
      vLeft->z = 0.0;
      z = vForward->z;
      vUp->y = 0.0;
      vUp->z = 0.0;
      vUp->x = -z;
      return;
    }
    y = vForward->y;
  }
  vLeft->x = (vForward->z * 0.0) - y;
  vLeft->y = vForward->x - (vForward->z * 0.0);
  vLeft->z = (vForward->y * 0.0) - (0.0 * vForward->x);
  VectorNormalize(vLeft);
  vUp->x = (vForward->y * vLeft->z) - (vForward->z * vLeft->y);
  vUp->y = (vForward->z * vLeft->x) - (vForward->x * vLeft->z);
  vUp->z = (vForward->x * vLeft->y) - (vForward->y * vLeft->x);
  VectorNormalize(vUp);
}


// VectorVectors  (line 688, @0x00000000030e0080, libserver.so)  // inlines: CrossProduct, operator[]
// calls: VectorNormalize
// callers: CBaseEntity::FireBullets, CRagdollMagnet::DistToPoint, NDebugOverlay::VertArrow, CEnvGunfire::ShootThink, CGameMovement::LadderMove, CDOTA_ActionRunner::GetThinkerLineEndpoints, CDOTA_ActionRunner::PerformAction_CreateThinkerWall, CDOTA_Modifier_Tiny_CraggyExterior::OnAttackLanded, CDOTA_Modifier_Nian_Tail_Swipe_Wall::OnCreated, CDOTA_Modifier_DarkSeer_WallOfReplica::OnCreated, CDOTA_Modifier_DarkSeer_WallOfReplica::OnIntervalThink, CDOTA_Ability_EarthSpirit_BoulderSmash::OnSpellStart (19 total)
void __fastcall VectorVectors(const Vector *const forward, Vector *const right, Vector *const up)
{
  float z; // xmm0_4
  float y; // xmm2_4

  if ( fabs(forward->x) >= 0.001 )
  {
    y = forward->y;
  }
  else
  {
    if ( fabs(forward->y) < 0.001 )
    {
      right->x = 0.0;
      right->y = -1.0;
      right->z = 0.0;
      z = forward->z;
      up->y = 0.0;
      up->z = 0.0;
      up->x = -z;
      return;
    }
    y = forward->y;
  }
  right->x = y - (forward->z * 0.0);
  right->y = (forward->z * 0.0) - forward->x;
  right->z = (forward->x * 0.0) - (0.0 * forward->y);
  VectorNormalize(right);
  up->x = (right->y * forward->z) - (right->z * forward->y);
  up->y = (right->z * forward->x) - (right->x * forward->z);
  up->z = (right->x * forward->y) - (right->y * forward->x);
  VectorNormalize(up);
}


// BuildBasis  (line 715, @0x00000000030e01f0, libserver.so)  // inlines: CrossProduct, DotProduct, Init, NormalizeInPlace, operator=
// calls: VectorNormalize
// callers: CPointValueRemapper::UpdateInternal
void __fastcall BuildBasis(Vector *const vecDir, Vector *const vecRight, Vector *const vecUp)
{
  float v6; // xmm2_4
  float y; // xmm6_4
  float z; // xmm1_4
  float v9; // xmm4_4
  float v10; // xmm5_4
  float v11; // xmm7_4
  float x; // xmm3_4
  vec_t v13; // xmm4_4
  vec_t v14; // xmm2_4
  vec_t v15; // xmm1_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  vec_t v18; // xmm0_4
  vec_t v19; // xmm2_4
  vec_t v20; // xmm4_4

  VectorNormalize(vecDir);
  v6 = 1.0;
  *&vecRight->x = 1065353216;
  vecRight->z = 0.0;
  y = vecDir->y;
  z = vecDir->z;
  v9 = y * 0.0;
  v10 = z * 0.0;
  if ( fabs((vecDir->x + (y * 0.0)) + (z * 0.0)) <= 0.999 )
  {
    x = vecDir->x;
    v11 = 1.0;
    v6 = 0.0;
  }
  else
  {
    vecRight->x = 0.0;
    v11 = 0.0;
    vecRight->y = 1.0;
    z = vecDir->z;
    v9 = vecDir->y * 0.0;
    x = vecDir->x;
    v10 = z;
    y = v9;
  }
  v13 = v9 - v10;
  vecUp->x = v13;
  v14 = (v6 * x) - y;
  v15 = (z * v11) - (0.0 * x);
  vecUp->z = v14;
  vecUp->y = v15;
  v16 = vecDir->y;
  v17 = vecDir->z;
  v18 = (v15 * v17) - (v14 * v16);
  v19 = (v14 * vecDir->x) - (v17 * v13);
  v20 = (v13 * v16) - (v15 * vecDir->x);
  vecRight->x = v18;
  vecRight->y = v19;
  vecRight->z = v20;
  VectorNormalize(vecUp);
  VectorNormalize(vecRight);
}


// VectorMatrix  (line 733, @0x00000000030e0340, libserver.so)  // inlines: MatrixSetColumn, SetColumn
// calls: VectorVectorsFLU
void __fastcall VectorMatrix(const Vector *const vForward, matrix3x4_t *const matrix)
{
  Vector vLeft; // [rsp+0h] [rbp-30h] BYREF
  Vector vUp; // [rsp+10h] [rbp-20h] BYREF

  VectorVectorsFLU(vForward, &vLeft, &vUp);
  matrix->m_flMatVal[0][0] = vForward->x;
  matrix->m_flMatVal[1][0] = vForward->y;
  matrix->m_flMatVal[2][0] = vForward->z;
  matrix->m_flMatVal[0][1] = vLeft.x;
  matrix->m_flMatVal[1][1] = vLeft.y;
  matrix->m_flMatVal[2][1] = vLeft.z;
  matrix->m_flMatVal[0][2] = vUp.x;
  matrix->m_flMatVal[1][2] = vUp.y;
  matrix->m_flMatVal[2][2] = vUp.z;
}


// VectorPerpendicularToVector  (line 747, @0x00000000030e03d0, libserver.so)  // inlines: DotProduct, NormalizeInPlace, RemapVal, VectorMultiply, operator*, operator-=, operator[]
// calls: VectorNormalize
// callers: RnCapsule_t::GetTriangulation
void __fastcall VectorPerpendicularToVector(const Vector *const in, Vector *pvecOut)
{
  float y; // xmm0_4
  float z; // xmm2_4
  float v6; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  vec_t v9; // xmm3_4
  vec_t v10; // xmm1_4

  y = in->y;
  z = in->z;
  pvecOut->y = 0.0;
  pvecOut->x = ((y * y) * (1.0 - z)) + z;
  pvecOut->z = -in->x;
  VectorNormalize(pvecOut);
  v6 = in->y;
  v7 = in->z;
  v8 = ((pvecOut->x * in->x) + (pvecOut->y * v6)) + (pvecOut->z * v7);
  v9 = pvecOut->y - (v6 * v8);
  v10 = pvecOut->z - (v8 * v7);
  pvecOut->x = pvecOut->x - (in->x * v8);
  pvecOut->y = v9;
  pvecOut->z = v10;
  VectorNormalize(pvecOut);
}


// ConcatRotations  (line 767, @0x00000000030e04a0, libserver.so)
// callers: CPhysicsGameSystem::UpdateHierarchyJoint, CPhysicsGameSystem::CreateHierarchyConstraint, CEntityClass::UnserializeKey
void __fastcall ConcatRotations(const matrix3x4_t *const in1, const matrix3x4_t *const in2, matrix3x4_t *const out)
{
  out->m_flMatVal[0][0] = ((in1->m_flMatVal[0][0] * in2->m_flMatVal[0][0])
                         + (in1->m_flMatVal[0][1] * in2->m_flMatVal[1][0]))
                        + (in1->m_flMatVal[0][2] * in2->m_flMatVal[2][0]);
  out->m_flMatVal[0][1] = ((in1->m_flMatVal[0][0] * in2->m_flMatVal[0][1])
                         + (in1->m_flMatVal[0][1] * in2->m_flMatVal[1][1]))
                        + (in1->m_flMatVal[0][2] * in2->m_flMatVal[2][1]);
  out->m_flMatVal[0][2] = ((in1->m_flMatVal[0][0] * in2->m_flMatVal[0][2])
                         + (in1->m_flMatVal[0][1] * in2->m_flMatVal[1][2]))
                        + (in1->m_flMatVal[0][2] * in2->m_flMatVal[2][2]);
  out->m_flMatVal[1][0] = ((in1->m_flMatVal[1][0] * in2->m_flMatVal[0][0])
                         + (in1->m_flMatVal[1][1] * in2->m_flMatVal[1][0]))
                        + (in1->m_flMatVal[1][2] * in2->m_flMatVal[2][0]);
  out->m_flMatVal[1][1] = ((in1->m_flMatVal[1][0] * in2->m_flMatVal[0][1])
                         + (in1->m_flMatVal[1][1] * in2->m_flMatVal[1][1]))
                        + (in1->m_flMatVal[1][2] * in2->m_flMatVal[2][1]);
  out->m_flMatVal[1][2] = ((in1->m_flMatVal[1][0] * in2->m_flMatVal[0][2])
                         + (in1->m_flMatVal[1][1] * in2->m_flMatVal[1][2]))
                        + (in1->m_flMatVal[1][2] * in2->m_flMatVal[2][2]);
  out->m_flMatVal[2][0] = ((in1->m_flMatVal[2][0] * in2->m_flMatVal[0][0])
                         + (in1->m_flMatVal[2][1] * in2->m_flMatVal[1][0]))
                        + (in1->m_flMatVal[2][2] * in2->m_flMatVal[2][0]);
  out->m_flMatVal[2][1] = ((in1->m_flMatVal[2][0] * in2->m_flMatVal[0][1])
                         + (in1->m_flMatVal[2][1] * in2->m_flMatVal[1][1]))
                        + (in1->m_flMatVal[2][2] * in2->m_flMatVal[2][1]);
  out->m_flMatVal[2][2] = ((in1->m_flMatVal[2][0] * in2->m_flMatVal[0][2])
                         + (in1->m_flMatVal[2][1] * in2->m_flMatVal[1][2]))
                        + (in1->m_flMatVal[2][2] * in2->m_flMatVal[2][2]);
}


// ConcatTransforms_Aligned  (line 792, @0x00000000030e0630, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, AndSIMD<(ESIMDLevel)20u>, LoadAlignedSIMD<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, SplatXSIMD<(ESIMDLevel)20u>, SplatYSIMD<(ESIMDLevel)20u>, SplatZSIMD<(ESIMDLevel)20u>, StoreAlignedSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_and_ps, _mm_load_ps, _mm_mul_ps, _mm_shuffle_ps, _mm_store_ps
// callers: CDecalGameSystem::RenderDebugDecal, SolveBone, SolveTransform, CIKTarget::UpdateOwner, CIKContext::SolveDependencies, CIKContext::UpdateTargets, CModelSkeletonBuilder::GetBoneToWorld, CTiltTwistConstraint::Compute, CMorphConstraint::Compute, CStudioConstraintBones::UpdateWorldTransformAndChildren, CStudioConstraintBones::ComputeTwistConstraint
void __fastcall ConcatTransforms_Aligned(
        const matrix3x4a_t *const m0,
        const matrix3x4a_t *const m1,
        matrix3x4a_t *const out)
{
  __m128 v3; // xmm10
  __m128 v4; // xmm9
  __m128 v5; // xmm11
  __m128 v6; // xmm4
  __m128 v7; // xmm3
  __m128 v8; // xmm7
  __m128 v9; // xmm1

  v3 = *&m1->m_flMatVal[1][0];
  v4 = *&m1->m_flMatVal[2][0];
  v5 = *&m1->m_flMatVal[0][0];
  v6 = *&m0->m_flMatVal[1][0];
  v7 = *&m0->m_flMatVal[2][0];
  v8 = *&g_SIMD_ComponentMask[3][0];
  v9 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), *&m1->m_flMatVal[0][0]);
  *&out->m_flMatVal[0][0] = _mm_add_ps(
                              _mm_add_ps(
                                _mm_mul_ps(
                                  _mm_shuffle_ps(*&m0->m_flMatVal[0][0], *&m0->m_flMatVal[0][0], 0),
                                  *&m1->m_flMatVal[0][0]),
                                _mm_add_ps(
                                  _mm_mul_ps(_mm_shuffle_ps(*&m0->m_flMatVal[0][0], *&m0->m_flMatVal[0][0], 85), v3),
                                  _mm_mul_ps(_mm_shuffle_ps(*&m0->m_flMatVal[0][0], *&m0->m_flMatVal[0][0], 170), v4))),
                              _mm_and_ps(*&m0->m_flMatVal[0][0], v8));
  *&out->m_flMatVal[1][0] = _mm_add_ps(
                              _mm_add_ps(
                                v9,
                                _mm_add_ps(
                                  _mm_mul_ps(_mm_shuffle_ps(v6, v6, 85), v3),
                                  _mm_mul_ps(_mm_shuffle_ps(v6, v6, 170), v4))),
                              _mm_and_ps(v6, v8));
  *&out->m_flMatVal[2][0] = _mm_add_ps(
                              _mm_add_ps(
                                _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v5),
                                _mm_add_ps(
                                  _mm_mul_ps(_mm_shuffle_ps(v7, v7, 85), v3),
                                  _mm_mul_ps(_mm_shuffle_ps(v7, v7, 170), v4))),
                              _mm_and_ps(v7, v8));
}


// ConcatScaleTransforms_Aligned  (line 850, @0x00000000030e06f0, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, AndSIMD<(ESIMDLevel)20u>, LoadAlignedSIMD<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, SplatXSIMD<(ESIMDLevel)20u>, SplatYSIMD<(ESIMDLevel)20u>, SplatZSIMD<(ESIMDLevel)20u>, StoreAlignedSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_and_ps, _mm_load_ps, _mm_mul_ps, _mm_shuffle_ps, _mm_store_ps
void __fastcall ConcatScaleTransforms_Aligned(
        const matrix3x4a_t *const m0,
        const matrix3x4a_t *const m1,
        matrix3x4a_t *const out,
        const fltx4_0 *const vfScale)
{
  __m128 v4; // xmm10
  __m128 v5; // xmm5
  __m128 v6; // xmm9
  __m128 v7; // xmm11
  __m128 v8; // xmm7
  __m128 v9; // xmm4
  __m128 v10; // xmm3
  __m128 v11; // xmm1

  v4 = *&m1->m_flMatVal[1][0];
  v5 = _mm_mul_ps(*&m0->m_flMatVal[0][0], *vfScale);
  v6 = *&m1->m_flMatVal[2][0];
  v7 = *&m1->m_flMatVal[0][0];
  v8 = *&g_SIMD_ComponentMask[3][0];
  v9 = _mm_mul_ps(*&m0->m_flMatVal[1][0], *vfScale);
  v10 = _mm_mul_ps(*vfScale, *&m0->m_flMatVal[2][0]);
  v11 = _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *&m1->m_flMatVal[0][0]);
  *&out->m_flMatVal[0][0] = _mm_add_ps(
                              _mm_add_ps(
                                _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), *&m1->m_flMatVal[0][0]),
                                _mm_add_ps(
                                  _mm_mul_ps(_mm_shuffle_ps(v5, v5, 85), v4),
                                  _mm_mul_ps(_mm_shuffle_ps(v5, v5, 170), v6))),
                              _mm_and_ps(v5, v8));
  *&out->m_flMatVal[1][0] = _mm_add_ps(
                              _mm_add_ps(
                                v11,
                                _mm_add_ps(
                                  _mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), v4),
                                  _mm_mul_ps(_mm_shuffle_ps(v9, v9, 170), v6))),
                              _mm_and_ps(v9, v8));
  *&out->m_flMatVal[2][0] = _mm_add_ps(
                              _mm_add_ps(
                                _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v7),
                                _mm_add_ps(
                                  _mm_mul_ps(_mm_shuffle_ps(v10, v10, 85), v4),
                                  _mm_mul_ps(_mm_shuffle_ps(v10, v10, 170), v6))),
                              _mm_and_ps(v10, v8));
}


// ConcatTransforms  (line 912, @0x00000000030e07c0, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, AndSIMD<(ESIMDLevel)20u>, LoadUnalignedSIMD<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, SplatXSIMD<(ESIMDLevel)20u>, SplatYSIMD<(ESIMDLevel)20u>, SplatZSIMD<(ESIMDLevel)20u>, StoreUnalignedSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_and_ps, _mm_loadu_ps, _mm_mul_ps, _mm_shuffle_ps, _mm_storeu_ps
// callers: CDevtestHierarchy::SpinThink, RotateOrientation, notify_teleport_params_t::CalculateRelativeTransform, CPhysicsGameSystem::PushDynamicTransformsWorker, CreatePiece, Studio_BuildMatrices, CBaseAnimating::ComputeEntitySpaceHitboxSurroundingBox, ComputeWorldSpaceBonesFromParentSpaceBone, CSkeletonInstance::GetAnimationStateWorldSpaceTransform, CSkeletonInstance::GetAnimationStateWorldSpaceTransforms, CSkeletonInstance::CalculateWorldTransforms_R, CSkeletonInstance::BuildTransformations (64 total)
void __fastcall ConcatTransforms(const matrix3x4_t *const in1, const matrix3x4_t *const in2, matrix3x4_t *const out)
{
  __m128 v3; // xmm10
  __m128 v4; // xmm9
  __m128 v5; // xmm11
  __m128 v6; // xmm4
  __m128 v7; // xmm3
  __m128 v8; // xmm7
  __m128 v9; // xmm1

  v3 = *&in2->m_flMatVal[1][0];
  v4 = *&in2->m_flMatVal[2][0];
  v5 = *&in2->m_flMatVal[0][0];
  v6 = *&in1->m_flMatVal[1][0];
  v7 = *&in1->m_flMatVal[2][0];
  v8 = *&g_SIMD_ComponentMask[3][0];
  v9 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), *&in2->m_flMatVal[0][0]);
  *&out->m_flMatVal[0][0] = _mm_add_ps(
                              _mm_add_ps(
                                _mm_mul_ps(
                                  _mm_shuffle_ps(*&in1->m_flMatVal[0][0], *&in1->m_flMatVal[0][0], 0),
                                  *&in2->m_flMatVal[0][0]),
                                _mm_add_ps(
                                  _mm_mul_ps(_mm_shuffle_ps(*&in1->m_flMatVal[0][0], *&in1->m_flMatVal[0][0], 85), v3),
                                  _mm_mul_ps(_mm_shuffle_ps(*&in1->m_flMatVal[0][0], *&in1->m_flMatVal[0][0], 170), v4))),
                              _mm_and_ps(*&in1->m_flMatVal[0][0], v8));
  *&out->m_flMatVal[1][0] = _mm_add_ps(
                              _mm_add_ps(
                                v9,
                                _mm_add_ps(
                                  _mm_mul_ps(_mm_shuffle_ps(v6, v6, 85), v3),
                                  _mm_mul_ps(_mm_shuffle_ps(v6, v6, 170), v4))),
                              _mm_and_ps(v6, v8));
  *&out->m_flMatVal[2][0] = _mm_add_ps(
                              _mm_add_ps(
                                _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v5),
                                _mm_add_ps(
                                  _mm_mul_ps(_mm_shuffle_ps(v7, v7, 85), v3),
                                  _mm_mul_ps(_mm_shuffle_ps(v7, v7, 170), v4))),
                              _mm_and_ps(v7, v8));
}


// TransformToWorldSpace  (line 976, @0x00000000030e0880, libserver.so)
// calls: ConcatTransforms
void __fastcall TransformToWorldSpace(
        int nRootTransformCount,
        int nTransformCount,
        const int *pParentIndices,
        matrix3x4a_t *pTransforms)
{
  const int *v5; // r12
  matrix3x4a_t *v6; // rbx
  matrix3x4a_t *v7; // r14
  __int64 v8; // rax
  matrix3x4_t *v9; // rdx
  const matrix3x4_t *v10; // rsi

  if ( nRootTransformCount < nTransformCount )
  {
    v5 = &pParentIndices[nRootTransformCount];
    v6 = &pTransforms[nRootTransformCount];
    v7 = &pTransforms[(nTransformCount - 1 - nRootTransformCount) + 1 + nRootTransformCount];
    do
    {
      v8 = *v5;
      v9 = v6;
      v10 = v6++;
      ++v5;
      ConcatTransforms(&pTransforms[v8], v10, v9);
    }
    while ( v6 != v7 );
  }
}


// FloorDivMod  (line 1004, @0x00000000030e0900, libserver.so)  // inlines: Floor2Int
// calls: floor, floorf
void __fastcall FloorDivMod(double a1, double numer, double denom, int *quotient, int *rem)
{
  double v7; // xmm0_8
  int v8; // r13d
  __m128d v9; // xmm2
  int v10; // eax
  double v11; // xmm0_8
  int v12; // r13d
  __m128d v13; // xmm2
  unsigned __int64 v15; // [rsp-10h] [rbp-38h]

  if ( a1 < 0.0 )
  {
    *&v15 = -a1;
    v11 = floor(-a1 / numer);
    v12 = v11;
    v13 = v15;
    v13.m128d_f64[0] = *&v15 - v11 * numer;
    *&v11 = _mm_movedup_pd(v13).m128d_f64[0];
    v10 = floorf(*&v11);
    if ( v10 != 0 )
    {
      v8 = ~v12;
      v10 = numer - v10;
    }
    else
    {
      v8 = -v12;
    }
  }
  else
  {
    v7 = floor(a1 / numer);
    v8 = v7;
    v9 = *&a1;
    v9.m128d_f64[0] = a1 - numer * v7;
    *&v7 = _mm_movedup_pd(v9).m128d_f64[0];
    v10 = floorf(*&v7);
  }
  *quotient = v8;
  *rem = v10;
}


// GreatestCommonDivisor  (line 1052, @0x00000000030e09e0, libserver.so)
int __fastcall GreatestCommonDivisor(int i1, int i2)
{
  int result; // eax

  while ( i1 <= i2 )
  {
LABEL_4:
    result = i2;
    if ( i1 == 0 )
      return result;
    i2 %= i1;
  }
  while ( 1 )
  {
    result = i1;
    if ( i2 == 0 )
      return result;
    i1 = i2;
    i2 = result % i2;
    if ( i1 <= i2 )
      goto LABEL_4;
  }
}


// IsDenormal  (line 1070, @0x00000000030e0a20, libserver.so)
bool __fastcall IsDenormal(const float *const val)
{
  return (*val & 0x7F800000) == 0 && (*val & 0x7FFFFF) != 0;
}


// SignbitsForPlane  (line 1079, @0x00000000030e0a40, libserver.so)
uint8 __fastcall SignbitsForPlane(cplane_t *out)
{
  __int64 v1; // rax

  v1 = out->normal.x < 0.0;
  if ( out->normal.y < 0.0 )
    LOBYTE(v1) = (out->normal.x < 0.0) | 2;
  if ( out->normal.z < 0.0 )
    LOBYTE(v1) = v1 | 4;
  return v1;
}


// BoxOnPlaneSide  (line 1103, @0x00000000030e0a70, libserver.so)  // inlines: operator[]
// globals: jpt_30E0ACD
int __fastcall BoxOnPlaneSide(const float *emins, const float *emaxs, const cplane_t *p)
{
  uint8 type; // al
  float v4; // xmm0_4
  __int64 v5; // rdx
  __int64 v6; // rax
  float x; // xmm0_4
  float y; // xmm3_4
  float z; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float dist; // xmm2_4

  type = p->type;
  if ( type > 2u )
  {
    x = p->normal.x;
    y = p->normal.y;
    z = p->normal.z;
    v10 = p->normal.x;
    switch ( p->signbits )
    {
      case 0u:
        v11 = ((v10 * *emaxs) + (emaxs[1] * y)) + (emaxs[2] * z);
        v12 = ((x * *emins) + (y * emins[1])) + (z * emins[2]);
        break;
      case 1u:
        v11 = ((v10 * *emins) + (emaxs[1] * y)) + (emaxs[2] * z);
        v12 = ((x * *emaxs) + (y * emins[1])) + (z * emins[2]);
        break;
      case 2u:
        v11 = ((v10 * *emaxs) + (emins[1] * y)) + (emaxs[2] * z);
        v12 = ((x * *emins) + (y * emaxs[1])) + (z * emins[2]);
        break;
      case 3u:
        v11 = ((v10 * *emins) + (emins[1] * y)) + (emaxs[2] * z);
        v12 = ((x * *emaxs) + (y * emaxs[1])) + (z * emins[2]);
        break;
      case 4u:
        v11 = ((v10 * *emaxs) + (emaxs[1] * y)) + (emins[2] * z);
        v12 = ((x * *emins) + (y * emins[1])) + (z * emaxs[2]);
        break;
      case 5u:
        v11 = ((v10 * *emins) + (emaxs[1] * y)) + (emins[2] * z);
        v12 = ((x * *emaxs) + (y * emins[1])) + (z * emaxs[2]);
        break;
      case 6u:
        v11 = ((v10 * *emaxs) + (emins[1] * y)) + (emins[2] * z);
        v12 = ((x * *emins) + (y * emaxs[1])) + (z * emaxs[2]);
        break;
      case 7u:
        v11 = ((v10 * *emins) + (emins[1] * y)) + (emins[2] * z);
        v12 = ((x * *emaxs) + (y * emaxs[1])) + (z * emaxs[2]);
        break;
      default:
        v12 = 0.0;
        v11 = 0.0;
        break;
    }
    dist = p->dist;
    v6 = v11 >= dist;
    if ( dist > v12 )
      LODWORD(v6) = (v11 >= dist) | 2;
  }
  else
  {
    v4 = p->dist;
    v5 = type;
    LODWORD(v6) = 1;
    if ( emins[v5] < v4 )
      LODWORD(v6) = 3 - (v4 >= emaxs[v5]);
  }
  return v6;
}


// AngleVectorsForward  (line 1175, @0x00000000030e0cf0, libserver.so)  // inlines: SinCos, SinCos2Scaled
// calls: sincosf
// callers: CBaseAnimatingController::GetGroundSpeedVelocity, CDecal::GetDecalEntityAndPosition
void __fastcall AngleVectorsForward(const QAngle *const angles, Vector *pForward)
{
  float v4; // xmm0_4
  vec_t v5; // xmm1_4
  float v6; // [rsp+0h] [rbp-30h]
  float v7; // [rsp+4h] [rbp-2Ch]
  float cosx; // [rsp+8h] [rbp-28h] BYREF
  float sinx[9]; // [rsp+Ch] [rbp-24h] BYREF

  sincosf(0.017453292 * angles->y, sinx, &cosx);
  v6 = cosx;
  v7 = sinx[0];
  sincosf(0.017453292 * angles->x, sinx, &cosx);
  v4 = sinx[0];
  v5 = cosx * v7;
  pForward->x = v6 * cosx;
  pForward->y = v5;
  pForward->z = -v4;
}


// AngleVectorsFLU  (line 1198, @0x00000000030e0d90, libserver.so)  // inlines: SinCos, SinCos3Scaled
// calls: sincosf
// callers: CDecal::GetDecalEntityAndPosition, GeneratePerspectiveFrustumFLU, Frustum_t::CreatePerspectiveFrustum, Camera_t::ComputeGeometry
void __fastcall AngleVectorsFLU(const QAngle *const angles, Vector *pForward, Vector *pLeft, Vector *pUp)
{
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // [rsp+0h] [rbp-50h]
  float v11; // [rsp+4h] [rbp-4Ch]
  float v12; // [rsp+8h] [rbp-48h]
  float v13; // [rsp+Ch] [rbp-44h]
  float cosx; // [rsp+18h] [rbp-38h] BYREF
  float sinx[13]; // [rsp+1Ch] [rbp-34h] BYREF

  sincosf(0.017453292 * angles->x, sinx, &cosx);
  v10 = cosx;
  v11 = sinx[0];
  sincosf(0.017453292 * angles->y, sinx, &cosx);
  v12 = cosx;
  v13 = sinx[0];
  sincosf(0.017453292 * angles->z, sinx, &cosx);
  v8 = cosx;
  v9 = sinx[0];
  if ( pForward != 0 )
  {
    pForward->x = v10 * v12;
    pForward->y = v10 * v13;
    pForward->z = -v11;
  }
  if ( pLeft != 0 )
  {
    pLeft->x = ((v11 * v9) * v12) - (v13 * v8);
    pLeft->y = ((v11 * v9) * v13) + (v12 * v8);
    pLeft->z = v10 * v9;
  }
  if ( pUp != 0 )
  {
    pUp->z = v8 * v10;
    pUp->x = ((v11 * v8) * v12) + (v13 * v9);
    pUp->y = (v13 * (v11 * v8)) - (v12 * v9);
  }
}


// AngleVectors  (line 1236, @0x00000000030e0f10, libserver.so)  // inlines: SinCos, SinCos3Scaled
// calls: sincosf
// callers: CFogController::Activate, CBaseEntity::DrawAutoAimOverlay, CFogController::InputSetAngles, CBaseCombatCharacter::BodyDirection3D, CBasePlayer::CalcRoll, CBaseCombatCharacter::Weapon_ShootPosition, CBaseCombatCharacter::IsLookingTowards, CBaseCombatCharacter::IsInFieldOfView, CBaseCombatCharacter::CheckTraceHullAttack, CBaseCombatWeapon::BaseForceFire, CBaseCombatCharacter::GetDeathActivity, CBaseCombatCharacter::Weapon_DropAll (228 total)
void __fastcall AngleVectors(const QAngle *const angles, Vector *forward, Vector *right, Vector *up)
{
  float v8; // xmm0_4
  float v9; // xmm4_4
  float v10; // [rsp+0h] [rbp-50h]
  float v11; // [rsp+4h] [rbp-4Ch]
  float v12; // [rsp+8h] [rbp-48h]
  float v13; // [rsp+Ch] [rbp-44h]
  float cosx; // [rsp+18h] [rbp-38h] BYREF
  float sinx[13]; // [rsp+1Ch] [rbp-34h] BYREF

  sincosf(0.017453292 * angles->x, sinx, &cosx);
  v10 = cosx;
  v11 = sinx[0];
  sincosf(0.017453292 * angles->y, sinx, &cosx);
  v12 = cosx;
  v13 = sinx[0];
  sincosf(0.017453292 * angles->z, sinx, &cosx);
  v8 = cosx;
  v9 = sinx[0];
  if ( forward != 0 )
  {
    forward->x = v10 * v12;
    forward->y = v10 * v13;
    forward->z = -v11;
  }
  if ( right != 0 )
  {
    right->z = -v9 * v10;
    right->x = ((-v9 * v11) * v12) + (v13 * v8);
    right->y = ((-v9 * v11) * v13) - (v8 * v12);
  }
  if ( up != 0 )
  {
    up->z = v8 * v10;
    up->x = ((v11 * v8) * v12) + (v13 * v9);
    up->y = (v13 * (v11 * v8)) - (v12 * v9);
  }
}


// AngleVectorsTranspose  (line 1275, @0x00000000030e10a0, libserver.so)  // inlines: SinCos, SinCos3Scaled
// calls: sincosf
// callers: CFuncTrackChange::UpdateTrain
void __fastcall AngleVectorsTranspose(const QAngle *const angles, Vector *forward, Vector *right, Vector *up)
{
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // [rsp+0h] [rbp-50h]
  float v11; // [rsp+4h] [rbp-4Ch]
  float v12; // [rsp+8h] [rbp-48h]
  float v13; // [rsp+Ch] [rbp-44h]
  float cosx; // [rsp+18h] [rbp-38h] BYREF
  float sinx[13]; // [rsp+1Ch] [rbp-34h] BYREF

  sincosf(0.017453292 * angles->x, sinx, &cosx);
  v10 = cosx;
  v11 = sinx[0];
  sincosf(0.017453292 * angles->y, sinx, &cosx);
  v12 = cosx;
  v13 = sinx[0];
  sincosf(0.017453292 * angles->z, sinx, &cosx);
  v8 = cosx;
  v9 = sinx[0];
  if ( forward != 0 )
  {
    forward->x = v10 * v12;
    forward->y = ((v11 * v9) * v12) - (v13 * v8);
    forward->z = ((v11 * v8) * v12) + (v13 * v9);
  }
  if ( right != 0 )
  {
    right->x = v10 * v13;
    right->y = ((v11 * v9) * v13) + (v12 * v8);
    right->z = ((v11 * v8) * v13) - (v12 * v9);
  }
  if ( up != 0 )
  {
    up->x = -v11;
    up->y = v9 * v10;
    up->z = v8 * v10;
  }
}


// VectorAngles  (line 1313, @0x00000000030e1230, libserver.so)  // inlines: FastSqrt, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator[]
// calls: V_atan2f
// callers: VectorToAngles, Script_CreateEffect, CBaseEntity::ScriptSetForward, UTIL_Tracer, CBaseCombatCharacter::Weapon_DropAll, CBaseCombatCharacter::Weapon_Drop, CC_Player_TestDispatchEffect, CPointCommentaryNode::UpdateViewThink, NDebugOverlay::Circle, NDebugOverlay::Cone, CDynamicLight::DynamicLightThink, CEnvExplosion::InputExplode (60 total)
void __fastcall VectorAngles(const Vector *const vForward, QAngle *const angles)
{
  double v4; // xmm0_8
  double v5; // xmm1_8
  __m128d v6; // xmm0
  float v7; // xmm3_4
  double v8; // xmm1_8
  float v9; // xmm0_4
  vec_t v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // [rsp-18h] [rbp-20h]
  unsigned int v13; // [rsp-14h] [rbp-1Ch]

  *&v4 = LODWORD(vForward->y);
  *&v5 = LODWORD(vForward->x);
  if ( *&v4 == 0.0 && *&v5 == 0.0 )
  {
    if ( vForward->z <= 0.0 )
      v11 = 90.0;
    else
      v11 = 270.0;
    v10 = 0.0;
  }
  else
  {
    v6.m128d_f64[1] = (V_atan2f(v4, v5) * 180.0);
    v6.m128d_f64[0] = v6.m128d_f64[1] / 3.141592653589793;
    v7 = _mm_movedup_pd(v6).m128d_f64[0];
    if ( v7 < 0.0 )
      v7 = v7 + 360.0;
    v12 = v7;
    *&v13 = (vForward->x * vForward->x) + (vForward->y * vForward->y);
    *&v8 = v13;
    *&v8 = fsqrt(*&v13);
    v9 = V_atan2f(COERCE_DOUBLE(LODWORD(vForward->z) ^ 0x80000000LL), v8);
    v10 = v12;
    v11 = (v9 * 180.0) / 3.141592653589793;
    if ( v11 < 0.0 )
      v11 = v11 + 360.0;
  }
  angles->x = v11;
  angles->y = v10;
  angles->z = 0.0;
}


// VectorAngles  (line 1346, @0x00000000030e1380, libserver.so)  // inlines: CrossProduct, FastRSqrt, FastRSqrtFast, RAD2DEG, VectorNormalizeFast, _mm_load_ss, _mm_rsqrt_ss, _mm_set_ss
// calls: V_atan2f, sqrtf
// callers: CPointCommentaryNode::TeleportTo, CDOTA_Ability_Elder_Titan_AncestralSpirit::ReturnSpirit, CDOTA_Ability_Elder_Titan_AncestralSpirit::OnSpellStart, CDOTA_Ability_Elder_Titan_AncestralSpirit::OnProjectileThink
void __fastcall VectorAngles(const Vector *const vForward, const Vector *const vPseudoUp, QAngle *const angles)
{
  float y; // xmm6_4
  float z; // xmm2_4
  float v7; // xmm4_4
  float v8; // xmm0_4
  float v9; // xmm5_4
  double v10; // xmm1_8
  __int64 y_low; // xmm3_8
  float v12; // xmm2_4
  float v13; // xmm8_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  double v16; // xmm5_8
  double v17; // xmm1_8
  float v18; // [rsp+0h] [rbp-30h]
  float v19; // [rsp+4h] [rbp-2Ch]
  float xyDist; // [rsp+Ch] [rbp-24h]
  float xyDista; // [rsp+Ch] [rbp-24h]
  float v22; // [rsp+10h] [rbp-20h]

  *&v10 = LODWORD(vPseudoUp->z);
  y = vForward->y;
  y_low = LODWORD(vPseudoUp->y);
  z = vForward->z;
  *&y_low = (*&y_low * z) - (vPseudoUp->z * y);
  *&v10 = (*&v10 * vForward->x) - (z * vPseudoUp->x);
  v7 = (vPseudoUp->x * y) - (vPseudoUp->y * vForward->x);
  v8 = fsqrt((((*&y_low * *&y_low) + 0.00000011920929) + (*&v10 * *&v10)) + (v7 * v7));
  v9 = (0.5 * (1.0 / v8))
     * (3.0 - ((((((*&y_low * *&y_low) + 0.00000011920929) + (*&v10 * *&v10)) + (v7 * v7)) * (1.0 / v8)) * (1.0 / v8)));
  *&v10 = *&v10 * v9;
  *&y_low = *&y_low * v9;
  v12 = fsqrt((vForward->x * vForward->x) + (y * y));
  v13 = *&v10;
  if ( v12 > 0.001 )
  {
    v19 = (vPseudoUp->x * y) - (vPseudoUp->y * vForward->x);
    xyDista = *&y_low;
    v22 = v9;
    v18 = v12;
    angles->y = V_atan2f(COERCE_DOUBLE(LODWORD(vForward->y)), COERCE_DOUBLE(LODWORD(vForward->x))) * 57.295776;
    v15 = V_atan2f(COERCE_DOUBLE(LODWORD(vForward->z) ^ 0x80000000LL), COERCE_DOUBLE(LODWORD(v18)));
    *&v16 = LODWORD(v22);
    angles->x = v15 * 57.295776;
    *&v17 = LODWORD(vForward->x);
    *&v16 = v22 * v19;
    *&v17 = (*&v17 * v13) - (xyDista * vForward->y);
    angles->z = V_atan2f(v16, v17) * 57.295776;
  }
  else
  {
    xyDist = v12;
    angles->y = V_atan2f(COERCE_DOUBLE(y_low ^ 0x80000000LL), v10) * 57.295776;
    v14 = V_atan2f(COERCE_DOUBLE(LODWORD(vForward->z) ^ 0x80000000LL), COERCE_DOUBLE(LODWORD(xyDist)));
    angles->z = 0.0;
    angles->x = v14 * 57.295776;
  }
}


// SetIdentityMatrix  (line 1383, @0x00000000030e15c0, libserver.so)  // inlines: memset
// callers: ISceneViewDebugOverlays::AddSphereOverlay, CBaseEntity::GetParentToWorldTransform, CInfoWorldLayer::SpawnLayerEntityLump, CResourcePrecacher::DispatchPrecache, EntityBodyTransform, CMapSpawnGroup::GetWorldGroupId, CSpawnGroupMgrGameSystem::OnSpawnGroupLoad, CPhysicsGameSystem::CreateDebugRenderBuffers, CSpawnGroupMgrGameSystem::GetWorldGroupId, CEntitySpawnerAsync<CBaseEntity>::CEntitySpawnerAsync, CSpawnGroupMgrGameSystem::SpawnGroupSaveEntities, CSpawnGroupMgrGameSystem::StreamEntitiesToFile (88 total)
void __fastcall SetIdentityMatrix(matrix3x4_t *const matrix)
{
  memset(matrix, 0, sizeof(matrix3x4_t));
  matrix->m_flMatVal[0][0] = 1.0;
  matrix->m_flMatVal[1][1] = 1.0;
  matrix->m_flMatVal[2][2] = 1.0;
}


// SetScaleMatrix  (line 1395, @0x00000000030e15f0, libserver.so)
// callers: CCollisionProperty::CollisionToWorldTransform
void __fastcall SetScaleMatrix(float a1, float x, float y, float z, matrix3x4_t *const dst)
{
  dst->m_flMatVal[0][0] = a1;
  dst->m_flMatVal[1][1] = x;
  *&dst->m_flMatVal[0][1] = 0;
  dst->m_flMatVal[0][3] = 0.0;
  dst->m_flMatVal[1][0] = 0.0;
  *&dst->m_flMatVal[1][2] = 0;
  *&dst->m_flMatVal[2][0] = 0;
  *&dst->m_flMatVal[2][2] = LODWORD(y);
}


// ScaleMatrixColumns  (line 1405, @0x00000000030e1640, libserver.so)
void __fastcall ScaleMatrixColumns(const Vector *const vecScale, matrix3x4_t *const mat)
{
  matrix3x4_t *v2; // rax
  float v3; // xmm0_4

  v2 = mat + 1;
  do
  {
    v3 = mat->m_flMatVal[0][0];
    mat = (mat + 16);
    mat[-1].m_flMatVal[2][0] = v3 * vecScale->x;
    mat[-1].m_flMatVal[2][1] = mat[-1].m_flMatVal[2][1] * vecScale->y;
    mat[-1].m_flMatVal[2][2] = mat[-1].m_flMatVal[2][2] * vecScale->z;
  }
  while ( mat != v2 );
}


// MatrixBuildRotationAboutAxis  (line 1424, @0x00000000030e1680, libserver.so)  // inlines: operator[]
// calls: V_sinf, V_cosf
// callers: CDevtestHierarchy::SpinThink, CGenericFlexCycler::GetBoneTransformOverride, CShatterGlassShard::DentShardInwards, CDOTA_ActionRunner::PerformAction_CreateThinkerWall, CDOTA_Ability_Creature_Fire_Breath::OnSpellStart, CDOTA_Ability_Holdout_Multishot::DoMultishot, CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::OnSpellStart, MatrixBuildRotationAboutAxis, MatrixBuildRotation
void __fastcall MatrixBuildRotationAboutAxis(
        const Vector *const vAxisOfRot,
        float a2,
        float angleDegrees,
        matrix3x4_t *const dst)
{
  __m128d v4; // xmm0
  float v7; // xmm0_4
  float v8; // xmm6_4
  float v9; // xmm4_4
  float radians; // [rsp+0h] [rbp-20h]
  float fSin; // [rsp+4h] [rbp-1Ch]

  v4.m128d_f64[1] = a2;
  v4.m128d_f64[0] = a2 * 0.0174532925199433;
  v4.m128d_f64[0] = _mm_movedup_pd(v4).m128d_f64[0];
  radians = *v4.m128d_f64;
  fSin = V_sinf(v4.m128d_f64[0]);
  v7 = V_cosf(radians);
  v8 = vAxisOfRot->y * vAxisOfRot->y;
  v9 = vAxisOfRot->z * vAxisOfRot->z;
  dst->m_flMatVal[0][0] = ((1.0 - (vAxisOfRot->x * vAxisOfRot->x)) * v7) + (vAxisOfRot->x * vAxisOfRot->x);
  dst->m_flMatVal[1][0] = ((vAxisOfRot->x * vAxisOfRot->y) * (1.0 - v7)) + (vAxisOfRot->z * fSin);
  dst->m_flMatVal[2][0] = ((vAxisOfRot->z * vAxisOfRot->x) * (1.0 - v7)) - (vAxisOfRot->y * fSin);
  dst->m_flMatVal[0][1] = ((vAxisOfRot->x * vAxisOfRot->y) * (1.0 - v7)) - (vAxisOfRot->z * fSin);
  dst->m_flMatVal[1][1] = ((1.0 - v8) * v7) + v8;
  dst->m_flMatVal[2][1] = ((vAxisOfRot->y * vAxisOfRot->z) * (1.0 - v7)) + (vAxisOfRot->x * fSin);
  dst->m_flMatVal[0][2] = ((vAxisOfRot->z * vAxisOfRot->x) * (1.0 - v7)) + (vAxisOfRot->y * fSin);
  dst->m_flMatVal[1][2] = ((vAxisOfRot->y * vAxisOfRot->z) * (1.0 - v7)) - (fSin * vAxisOfRot->x);
  dst->m_flMatVal[0][3] = 0.0;
  dst->m_flMatVal[2][2] = ((1.0 - v9) * v7) + v9;
  dst->m_flMatVal[1][3] = 0.0;
  dst->m_flMatVal[2][3] = 0.0;
}


// MatrixTranspose  (line 1459, @0x00000000030e1820, libserver.so)
void __fastcall MatrixTranspose(matrix3x4_t *const mat)
{
  float v1; // xmm0_4
  float v2; // xmm1_4
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm0_4

  v1 = mat->m_flMatVal[1][0];
  mat->m_flMatVal[1][0] = mat->m_flMatVal[0][1];
  v2 = mat->m_flMatVal[0][2];
  mat->m_flMatVal[0][1] = v1;
  v3 = mat->m_flMatVal[2][0];
  mat->m_flMatVal[2][0] = v2;
  v4 = mat->m_flMatVal[1][2];
  mat->m_flMatVal[0][2] = v3;
  v5 = mat->m_flMatVal[2][1];
  mat->m_flMatVal[2][1] = v4;
  mat->m_flMatVal[1][2] = v5;
}


// MatrixTranspose  (line 1467, @0x00000000030e1870, libserver.so)
// callers: CPhysicsGameSystem::UpdateHierarchyJoint, CPhysicsGameSystem::CreateHierarchyConstraint
void __fastcall MatrixTranspose(const matrix3x4_t *const src, matrix3x4_t *const dst)
{
  dst->m_flMatVal[0][0] = src->m_flMatVal[0][0];
  dst->m_flMatVal[0][1] = src->m_flMatVal[1][0];
  *&dst->m_flMatVal[0][2] = LODWORD(src->m_flMatVal[2][0]);
  dst->m_flMatVal[1][0] = src->m_flMatVal[0][1];
  dst->m_flMatVal[1][1] = src->m_flMatVal[1][1];
  *&dst->m_flMatVal[1][2] = LODWORD(src->m_flMatVal[2][1]);
  dst->m_flMatVal[2][0] = src->m_flMatVal[0][2];
  dst->m_flMatVal[2][1] = src->m_flMatVal[1][2];
  *&dst->m_flMatVal[2][2] = LODWORD(src->m_flMatVal[2][2]);
}


// AngleMatrix  (line 1484, @0x00000000030e1ad0, libserver.so)  // inlines: MatrixSetColumn, SetColumn
// calls: AngleMatrix
// callers: CIKContext::SolveDependencies, CModelSkeletonBuilder::GetBoneToWorld, CConstraintBones::ComputeTargetPositionOrientation
void __fastcall AngleMatrix(const RadianEuler *const angles, const Vector *const position, matrix3x4_t *const matrix)
{
  AngleMatrix(angles, matrix);
  matrix->m_flMatVal[0][3] = position->x;
  matrix->m_flMatVal[1][3] = position->y;
  matrix->m_flMatVal[2][3] = position->z;
}


// AngleMatrix  (line 1490, @0x00000000030e1a90, libserver.so)  // inlines: QAngle, RAD2DEG
// calls: AngleMatrix
// callers: AngleMatrix
void __fastcall AngleMatrix(const RadianEuler *const angles, matrix3x4_t *const matrix)
{
  vec_t v2; // xmm2_4
  vec_t v3; // xmm0_4
  QAngle quakeEuler; // [rsp+0h] [rbp-10h] BYREF

  v2 = angles->z * 57.295776;
  v3 = 57.295776 * angles->y;
  quakeEuler.z = angles->x * 57.295776;
  quakeEuler.y = v2;
  quakeEuler.x = v3;
  AngleMatrix(&quakeEuler, matrix);
}


// AngleMatrix  (line 1498, @0x00000000030e1b10, libserver.so)  // inlines: MatrixSetColumn, SetColumn
// calls: AngleMatrix
// callers: notify_teleport_params_t::CalculateRelativeTransform, CPhysicsGameSystem::FinishSimulateFrame, CSpawnGroupMgrGameSystem::OnSpawnGroupLoad, CreatePiece, CreateGibsFromList, Studio_BuildMatrices, CBaseAnimatingController::UpdateIK, CGameEntitySystem::HandlePointPrefab, ComputePushStartMatrix, NDebugOverlay::Circle, NDebugOverlay::Sphere, NDebugOverlay::Cone (31 total)
void __fastcall AngleMatrix(const QAngle *const angles, const Vector *const position, matrix3x4_t *const matrix)
{
  AngleMatrix(angles, matrix);
  matrix->m_flMatVal[0][3] = position->x;
  matrix->m_flMatVal[1][3] = position->y;
  matrix->m_flMatVal[2][3] = position->z;
}


// AngleMatrix  (line 1504, @0x00000000030e1b50, libserver.so)  // inlines: MatrixSetColumn, SetColumn
// calls: AngleMatrix
// callers: AngleMatrix
void __fastcall AngleMatrix(
        const QAngle *const angles,
        const Vector *const position,
        const Vector *const vScale,
        matrix3x4_t *const mat)
{
  AngleMatrix(angles, mat);
  mat->m_flMatVal[0][0] = mat->m_flMatVal[0][0] * vScale->x;
  mat->m_flMatVal[1][0] = mat->m_flMatVal[1][0] * vScale->x;
  mat->m_flMatVal[2][0] = mat->m_flMatVal[2][0] * vScale->x;
  mat->m_flMatVal[0][1] = mat->m_flMatVal[0][1] * vScale->y;
  mat->m_flMatVal[1][1] = mat->m_flMatVal[1][1] * vScale->y;
  mat->m_flMatVal[2][1] = mat->m_flMatVal[2][1] * vScale->y;
  mat->m_flMatVal[0][2] = mat->m_flMatVal[0][2] * vScale->z;
  mat->m_flMatVal[1][2] = mat->m_flMatVal[1][2] * vScale->z;
  mat->m_flMatVal[2][2] = mat->m_flMatVal[2][2] * vScale->z;
  mat->m_flMatVal[0][3] = position->x;
  mat->m_flMatVal[1][3] = position->y;
  mat->m_flMatVal[2][3] = position->z;
}


// AngleMatrix  (line 1513, @0x00000000030e1c30, libserver.so)  // inlines: AngleMatrix, MatrixSetColumn, SetColumn, Vector
// calls: AngleMatrix
// callers: CGameSceneNode::ComputeNodeToParent, CGameSceneNode::SetNodeToWorldInternal, CGameSceneNode::PerformHierarchySetupWork, CGameSceneNode::CalcAbsolutePositionWhenDirty, CGameSceneNode::SetAbsAngles, CGameSceneNode::PreInstanceSpawn, CGameSceneNode::Spawn
void __fastcall AngleMatrix(
        const QAngle *const angles,
        const Vector *const position,
        vec_t flScale,
        matrix3x4_t *const mat)
{
  Vector vScale; // [rsp+0h] [rbp-20h] BYREF

  if ( flScale == 1.0 )
  {
    AngleMatrix(angles, mat);
    mat->m_flMatVal[0][3] = position->x;
    mat->m_flMatVal[1][3] = position->y;
    mat->m_flMatVal[2][3] = position->z;
  }
  else
  {
    vScale.x = flScale;
    vScale.y = flScale;
    vScale.z = flScale;
    AngleMatrix(angles, position, &vScale, mat);
  }
}


// AngleMatrix  (line 1525, @0x00000000030e18e0, libserver.so)  // inlines: SinCos, SinCos3Scaled
// calls: sincosf
// callers: CEnvSky::UpdateSceneObjects, RotateOrientation, CreatePiecesFromPropData, CreateGibsFromList, CBaseAnimating::GetVelocity, CBasePlayer::EyeAngles, CBaseDoor::Spawn, CFourWheelVehiclePhysics::GetVehicleViewPosition, CPlayerMove::SetupMove, CRagdollProp::Teleport, CRagdollProp::ApplyActivationRecord, CPointHMDAnchor::ReceiveClientMsg_RotateAnchor (23 total)
void __fastcall AngleMatrix(const QAngle *const angles, matrix3x4_t *const matrix)
{
  float v4; // xmm4_4
  float v5; // xmm0_4
  float v6; // [rsp+8h] [rbp-38h]
  float v7; // [rsp+Ch] [rbp-34h]
  float v8; // [rsp+10h] [rbp-30h]
  float v9; // [rsp+14h] [rbp-2Ch]
  float cosx; // [rsp+18h] [rbp-28h] BYREF
  float sinx[9]; // [rsp+1Ch] [rbp-24h] BYREF

  sincosf(0.017453292 * angles->x, sinx, &cosx);
  v6 = cosx;
  v7 = sinx[0];
  sincosf(0.017453292 * angles->y, sinx, &cosx);
  v8 = cosx;
  v9 = sinx[0];
  sincosf(0.017453292 * angles->z, sinx, &cosx);
  v4 = sinx[0];
  v5 = cosx;
  matrix->m_flMatVal[0][0] = v6 * v8;
  matrix->m_flMatVal[1][0] = v6 * v9;
  matrix->m_flMatVal[2][0] = -v7;
  matrix->m_flMatVal[0][1] = ((v7 * v4) * v8) - (v9 * v5);
  matrix->m_flMatVal[1][1] = ((v7 * v4) * v9) + (v8 * v5);
  matrix->m_flMatVal[0][3] = 0.0;
  matrix->m_flMatVal[1][3] = 0.0;
  matrix->m_flMatVal[2][3] = 0.0;
  matrix->m_flMatVal[2][1] = v6 * v4;
  matrix->m_flMatVal[2][2] = v6 * v5;
  matrix->m_flMatVal[0][2] = ((v7 * v5) * v8) + (v9 * v4);
  matrix->m_flMatVal[1][2] = (v9 * (v7 * v5)) - (v8 * v4);
}


// AngleIMatrix  (line 1559, @0x00000000030e1f10, libserver.so)  // inlines: QAngle, RAD2DEG
// calls: AngleIMatrix
void __fastcall AngleIMatrix(const RadianEuler *const angles, matrix3x4_t *const matrix)
{
  vec_t v2; // xmm2_4
  vec_t v3; // xmm0_4
  QAngle quakeEuler; // [rsp+0h] [rbp-10h] BYREF

  v2 = angles->z * 57.295776;
  v3 = 57.295776 * angles->y;
  quakeEuler.z = angles->x * 57.295776;
  quakeEuler.y = v2;
  quakeEuler.x = v3;
  AngleIMatrix(&quakeEuler, matrix);
}


// AngleIMatrix  (line 1566, @0x00000000030e1da0, libserver.so)  // inlines: SinCos, SinCos3Scaled
// calls: sincosf
// callers: ComputeSeparatingPlane, AngleIMatrix
void __fastcall AngleIMatrix(const QAngle *const angles, matrix3x4_t *const matrix)
{
  float v4; // xmm4_4
  float v5; // xmm0_4
  float v6; // [rsp+8h] [rbp-38h]
  float v7; // [rsp+Ch] [rbp-34h]
  float v8; // [rsp+10h] [rbp-30h]
  float v9; // [rsp+14h] [rbp-2Ch]
  float cosx; // [rsp+18h] [rbp-28h] BYREF
  float sinx[9]; // [rsp+1Ch] [rbp-24h] BYREF

  sincosf(0.017453292 * angles->x, sinx, &cosx);
  v6 = cosx;
  v7 = sinx[0];
  sincosf(0.017453292 * angles->y, sinx, &cosx);
  v8 = cosx;
  v9 = sinx[0];
  sincosf(0.017453292 * angles->z, sinx, &cosx);
  v4 = sinx[0];
  v5 = cosx;
  matrix->m_flMatVal[0][0] = v6 * v8;
  matrix->m_flMatVal[0][1] = v6 * v9;
  matrix->m_flMatVal[0][2] = -v7;
  matrix->m_flMatVal[1][0] = ((v7 * v4) * v8) - (v9 * v5);
  matrix->m_flMatVal[1][1] = ((v7 * v4) * v9) + (v8 * v5);
  matrix->m_flMatVal[0][3] = 0.0;
  matrix->m_flMatVal[1][3] = 0.0;
  matrix->m_flMatVal[2][3] = 0.0;
  matrix->m_flMatVal[1][2] = v6 * v4;
  matrix->m_flMatVal[2][2] = v6 * v5;
  matrix->m_flMatVal[2][0] = ((v7 * v5) * v8) + (v9 * v4);
  matrix->m_flMatVal[2][1] = (v9 * (v7 * v5)) - (v8 * v4);
}


// AngleIMatrix  (line 1594, @0x00000000030e1f50, libserver.so)  // inlines: MatrixSetColumn, SetColumn, VectorRotate, operator*=
// calls: AngleIMatrix, VectorRotate
// callers: CLogicMeasureMovement::MeasureThink, IsPointInOBB, IsRayIntersectingOBB, CIKTarget::UpdateOwner
void __fastcall AngleIMatrix(const QAngle *const angles, const Vector *const position, matrix3x4_t *const mat)
{
  float z; // xmm1_4
  float x; // xmm3_4
  Vector vecTranslation; // [rsp+0h] [rbp-20h] BYREF

  AngleIMatrix(angles, mat);
  VectorRotate(&position->x, mat, &vecTranslation.x);
  z = vecTranslation.z;
  x = vecTranslation.x;
  mat->m_flMatVal[1][3] = -vecTranslation.y;
  mat->m_flMatVal[2][3] = -z;
  mat->m_flMatVal[0][3] = -x;
}


// ClearBounds  (line 1609, @0x00000000030e1fb0, libserver.so)
// callers: CSkeletonInstance::GetPoseSpaceHitboxBounds, CSkeletonInstance::GetWorldSpaceHitboxBounds, RagdollComputeApproximateBbox, CalculateAABBFromProjectionMatrixInverse, CFrustum::ComputeBounds
void __fastcall ClearBounds(Vector *const mins, Vector *const maxs)
{
  mins->z = 3.4028235e38;
  mins->y = 3.4028235e38;
  mins->x = 3.4028235e38;
  maxs->z = -3.4028235e38;
  maxs->y = -3.4028235e38;
  maxs->x = -3.4028235e38;
}


// AddPointToBounds  (line 1616, @0x00000000030e1ff0, libserver.so)  // inlines: operator[]
// callers: CSkeletonInstance::GetPoseSpaceHitboxBounds, CSkeletonInstance::GetWorldSpaceHitboxBounds, CSkeletonInstance::SweepShapeAgainstHitboxes, CalculateAABBFromProjectionMatrixInverse, VPhysics2ShapeDef_t::GetBbox, FillTriangles, CreatePhysicsEdgeSceneObject, CFrustum::ComputeBounds, CMesh::GetBounds, CNavGenOutput::ComputeBounds
void __fastcall AddPointToBounds(const Vector *const v, Vector *const mins, Vector *const maxs)
{
  __int64 i; // rax
  float v4; // xmm0_4

  for ( i = 0; i != 12; i += 4 )
  {
    v4 = *(&v->x + i);
    if ( *(&mins->x + i) > v4 )
      *(&mins->x + i) = v4;
    if ( v4 > *(&maxs->x + i) )
      *(&maxs->x + i) = v4;
  }
}


// AreBoundsValid  (line 1632, @0x00000000030e2030, libserver.so)
bool __fastcall AreBoundsValid(const Vector *const vMin, const Vector *const vMax)
{
  __int64 v2; // rax

  v2 = 0;
  while ( *(&vMin->x + v2) <= *(&vMax->x + v2) )
  {
    v2 += 4;
    if ( v2 == 12 )
      return 1;
  }
  return 0;
}


// IsPointInBounds  (line 1645, @0x00000000030e2060, libserver.so)  // inlines: operator[]
// callers: CGamePhysicsQueryInterface::EntitiesInBox
bool __fastcall IsPointInBounds(const Vector *const vPoint, const Vector *const vMin, const Vector *const vMax)
{
  __int64 v3; // rax
  float v4; // xmm0_4

  v3 = 0;
  while ( 1 )
  {
    v4 = *(&vPoint->x + v3);
    if ( *(&vMin->x + v3) > v4 || v4 > *(&vMax->x + v3) )
      break;
    v3 += 4;
    if ( v3 == 12 )
      return 1;
  }
  return 0;
}


// SolveQuadratic  (line 1659, @0x00000000030e20a0, libserver.so)
// calls: sqrtf
// callers: LightDesc_t::DistanceAtWhichBrightnessIsLessThan
__int64 __fastcall SolveQuadratic(float a1, float a, float b, float c, float *const root1, float *const root2)
{
  __int64 result; // rax
  float v8; // xmm5_4
  float v9; // xmm0_4
  float v10; // xmm4_4
  float v11; // xmm2_4

  if ( a1 == 0.0 )
  {
    if ( a == 0.0 )
    {
      if ( b == 0.0 )
      {
        *root2 = 0.0;
        *root1 = 0.0;
        return 1;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      v11 = -b / a;
      *root2 = v11;
      *root1 = v11;
      return 1;
    }
  }
  else
  {
    result = 0;
    v8 = (a * a) - ((4.0 * a1) * b);
    if ( v8 >= 0.0 )
    {
      v9 = fsqrt(v8);
      v10 = a1 + a1;
      result = 1;
      *root1 = (v9 - a) / v10;
      *root2 = (-a - v9) / v10;
    }
  }
  return result;
}


// SolveInverseQuadratic  (line 1694, @0x00000000030e21a0, libserver.so)
// callers: SolveInverseQuadraticMonotonic
__int64 __fastcall SolveInverseQuadratic(
        float x1,
        float y1,
        float x2,
        float y2,
        float x3,
        float y3,
        float *const a,
        float *const b,
        float *const c)
{
  float v9; // xmm6_4
  __int64 result; // rax

  v9 = ((x1 - x2) * (x1 - x3)) * (x2 - x3);
  result = 0;
  if ( v9 != 0.0 )
  {
    *a = ((((y2 - y1) * x3) + ((y1 - y3) * x2)) + ((y3 - y2) * x1)) / v9;
    *b = ((((y1 - y2) * (x3 * x3)) + ((y2 - y3) * (x1 * x1))) + ((y3 - y1) * (x2 * x2))) / v9;
    *c = (((((x1 * x3) * (x3 - x1)) * y2) + (((x3 * y1) - (x1 * y3)) * (x2 * x2)))
        + (((y3 * (x1 * x1)) - (y1 * (x3 * x3))) * x2))
       / v9;
    return 1;
  }
  return result;
}


// SolveInverseQuadraticMonotonic  (line 1711, @0x00000000030e22c0, libserver.so)  // inlines: V_swap<float>
// calls: SolveInverseQuadratic
// callers: LightDesc_t::SetupNewStyleAttenuation
__m128 __fastcall SolveInverseQuadraticMonotonic(
        float x1,
        float y1,
        float x2,
        float y2,
        float x3,
        float y3,
        float *const a,
        float *const b,
        float *const c)
{
  float v9; // xmm9_4
  float v10; // xmm8_4
  float v11; // xmm6_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm5_4
  int v18; // ebx
  float v19; // xmm7_4
  __m128 result; // xmm0
  __m128d v21; // xmm0
  float x3a; // [rsp+4h] [rbp-3Ch]
  float x1a; // [rsp+8h] [rbp-38h]
  float x2a; // [rsp+Ch] [rbp-34h]
  float v25; // [rsp+10h] [rbp-30h]
  float blend_to_linear_factor; // [rsp+18h] [rbp-28h]

  v9 = y3;
  v10 = y1;
  v11 = y2;
  x1a = x1;
  x2a = x2;
  x3a = x3;
  if ( x1 > x2 )
  {
    v10 = y2;
    v11 = y1;
    x1a = x2;
    x2a = x1;
  }
  if ( x2a > x3 )
  {
    v15 = v11;
    v11 = y3;
    v9 = v15;
    x3a = x2a;
    x2a = x3;
  }
  if ( x1a > x2a )
  {
    v16 = v10;
    v10 = v11;
    v11 = v16;
    v17 = x2a;
    x2a = x1a;
    x1a = v17;
  }
  v18 = 20;
  v19 = 0.0;
  do
  {
    v25 = v11;
    blend_to_linear_factor = v19;
    if ( SolveInverseQuadratic(
           x1a,
           v10,
           x2a,
           (((((x2a - x1a) * (v9 - v10)) / (x3a - x1a)) + v10) * v19) + ((1.0 - v19) * v11),
           x3a,
           v9,
           a,
           b,
           c) == 0 )
      break;
    v11 = v25;
    v21 = _mm_cvtps_pd(*a);
    v21.m128d_f64[0] = v21.m128d_f64[0] + v21.m128d_f64[0] + *b;
    result = _mm_cvtpd_ps(_mm_unpacklo_pd(v21, v21));
    if ( v25 <= v10 || v9 <= v25 )
    {
      if ( v10 <= v25 || v25 <= v9 || result.m128_f32[0] <= 0.0 )
        return result;
    }
    else if ( result.m128_f32[0] >= 0.0 )
    {
      return result;
    }
    --v18;
    v19 = blend_to_linear_factor + 0.05;
  }
  while ( v18 != 0 );
  return result;
}


// SolveInverseReciprocalQuadratic  (line 1763, @0x00000000030e24a0, libserver.so)
__int64 __fastcall SolveInverseReciprocalQuadratic(
        float x1,
        float y1,
        float x2,
        float y2,
        float x3,
        float y3,
        float *const a,
        float *const b,
        float *const c)
{
  float v9; // xmm6_4
  float v10; // xmm9_4
  __int64 result; // rax

  v9 = (((((x1 - x2) * (x1 - x3)) * (x2 - x3)) * y1) * y2) * y3;
  result = 0;
  if ( v9 != 0.0 )
  {
    v10 = (x1 * x1) * y1;
    *a = ((((x1 * y1) * (y2 - y3)) + (((y1 - y2) * x3) * y3)) + ((y3 - y1) * (x2 * y2))) / v9;
    *b = (((((x2 * x2) * y2) * (y1 - y3)) + (((y2 - y1) * (x3 * x3)) * y3)) + ((y3 - y2) * v10)) / v9;
    *c = ((((((x2 * (x2 - x3)) * x3) * y2) * y3) + (((x2 * y2) - (x3 * y3)) * v10))
        + (((((x3 * x3) * y1) * y3) - ((y1 * (x2 * x2)) * y2)) * x1))
       / v9;
    return 1;
  }
  return result;
}


// VectorYawRotate  (line 1782, @0x00000000030e2600, libserver.so)  // inlines: DEG2RAD, SinCos, operator=, operator[]
// calls: sincosf
// callers: CBaseAnimatingController::GetIntervalMovement, CDOTA_BotMode_Laning_Pudge::BuildHookStartLocationListForTarget, CDOTA_Modifier_Move_From_Activity::UpdateHorizontalMotion, CDOTA_Ability_ChaosKnight_Reality_Rift::OnSpellStart
void __fastcall VectorYawRotate(Vector *vIn, float a2, float flYaw, Vector *const out)
{
  float v6; // xmm2_4
  float v7; // xmm0_4
  float cosx; // [rsp+8h] [rbp-28h] BYREF
  float sinx; // [rsp+Ch] [rbp-24h] BYREF
  Vector tmp; // [rsp+10h] [rbp-20h] BYREF

  if ( vIn == out )
  {
    tmp.x = vIn->x;
    tmp.y = vIn->y;
    VectorYawRotate(&tmp, vIn->z, vIn);
  }
  else
  {
    sincosf(a2 * 0.017453292, &sinx, &cosx);
    v6 = cosx;
    v7 = sinx;
    out->x = (vIn->x * cosx) - (vIn->y * sinx);
    out->y = (v7 * vIn->x) + (v6 * vIn->y);
    out->z = vIn->z;
  }
}


// Bias  (line 1804, @0x00000000030e26b0, libserver.so)
// calls: V_powf, V_logf
// callers: CEnvWindShared::UpdateWindSound, CShatterGlassShard::ResetRestoreMove, CDOTABehaviorCreatureInvade::UpdateMoveRate, Gain
// globals: Bias(float,float)::lastExponent
float __fastcall Bias(double a1, float x, float biasAmt, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int xa; // [rsp+Ch] [rbp-4h]

  if ( x == -1.0 )
    return V_powf(a1, Bias(float,float)::lastExponent);
  xa = LODWORD(a1);
  Bias(float,float)::lastExponent = V_logf(a4, a5, a6, a7, x) * -1.4427;
  return V_powf(COERCE_DOUBLE(xa), Bias(float,float)::lastExponent);
}


// Gain  (line 1817, @0x00000000030e2710, libserver.so)
// calls: Bias
// callers: SmoothCurve_Tweak
float __fastcall Gain(double a1, float x, float biasAmt, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  if ( *&a1 >= 0.5 )
    return 1.0
         - (Bias(COERCE_DOUBLE(COERCE_UNSIGNED_INT(2.0 - (*&a1 + *&a1))), 1.0 - x, *&a1 + *&a1, a4, a5, a6, a7) * 0.5);
  *&a1 = *&a1 + *&a1;
  return Bias(a1, 1.0 - x, 1.0 - x, a4, a5, a6, a7) * 0.5;
}


// SmoothCurve  (line 1827, @0x00000000030e2790, libserver.so)
// calls: V_cosf
float __fastcall SmoothCurve(float a1, float x)
{
  float v2; // xmm0_4

  v2 = a1 * 3.141592653589793;
  return (1.0 - V_cosf(v2)) * 0.5;
}


// SmoothCurve_Tweak  (line 1843, @0x00000000030e27d0, libserver.so)  // inlines: MovePeak, SmoothCurve
// calls: Gain, V_cosf
float __fastcall SmoothCurve_Tweak(
        double a1,
        float x,
        float flPeakPos,
        float flPeakSharpness,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  float v9; // xmm1_4
  __m128d v10; // xmm1
  float v11; // xmm0_4

  v9 = flPeakPos;
  if ( x > *&a1 )
  {
    *&a1 = (*&a1 * 0.5) / x;
  }
  else
  {
    flPeakPos = 0.0;
    a1 = (*&a1 - x) * 0.5 / (1.0 - x) + 0.5;
  }
  v10.m128d_f64[1] = Gain(a1, v9, flPeakPos, a5, a6, a7, a8);
  v10.m128d_f64[0] = v10.m128d_f64[1] * 3.141592653589793;
  v11 = _mm_movedup_pd(v10).m128d_f64[0];
  return (1.0 - V_cosf(v11)) * 0.5;
}


// QuaternionAlign  (line 1854, @0x00000000030e2890, libserver.so)  // inlines: operator[]
// callers: QuaternionSlerp, QuaternionAdd, QuaternionMult, QuaternionAverageExponential, QuaternionAccumulate, Hermite_Spline
void __fastcall QuaternionAlign(const Quaternion *const p, const Quaternion *const q, Quaternion *const qt)
{
  float v3; // xmm3_4
  __int64 v4; // rax
  float v5; // xmm4_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  __int64 i; // rax

  v3 = 0.0;
  v4 = 0;
  v5 = 0.0;
  do
  {
    v6 = *(&p->x + v4);
    v7 = *(&q->x + v4);
    v4 += 4;
    v5 = v5 + ((v6 - v7) * (v6 - v7));
    v3 = v3 + ((v7 + v6) * (v7 + v6));
  }
  while ( v4 != 16 );
  if ( v5 <= v3 )
  {
    if ( qt != q )
    {
      for ( i = 0; i != 16; i += 4 )
        *(&qt->x + i) = *(&q->x + i);
    }
  }
  else
  {
    LOBYTE(v4) = 0;
    do
    {
      *(&qt->x + v4) = -*(&q->x + v4);
      v4 += 4;
    }
    while ( v4 != 16 );
  }
}


// QuaternionBlend  (line 1890, @0x00000000030e2920 libserver.so, @0x00000000030e29f0 libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, AndSIMD<(ESIMDLevel)20u>, CmpEqSIMD<(ESIMDLevel)20u>, CmpGtSIMD<(ESIMDLevel)20u>, Dot4SIMD<(ESIMDLevel)20u>, LoadUnalignedSIMD<(ESIMDLevel)20u>, LoadZeroSIMD<(ESIMDLevel)20u>, MaddSIMD<(ESIMDLevel)20u>, MaskedAssign<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, NegSIMD<(ESIMDLevel)20u>, QuaternionAlignSIMD<(ESIMDLevel)20u>, QuaternionBlendInternal<(ESIMDLevel)20u, false>, QuaternionBlendNoAlignSIMD<(ESIMDLevel)20u>, QuaternionBlendSIMD<(ESIMDLevel)20u>, QuaternionNormalizeSIMD<(ESIMDLevel)20u>, ReciprocalSqrtEstSIMD<(ESIMDLevel)20u>, ReciprocalSqrtSIMD<(ESIMDLevel)20u>, ReplicateX4<(ESIMDLevel)20u>, RotateLeft2<(ESIMDLevel)20u>, StoreUnalignedSIMD<(ESIMDLevel)20u>, SubSIMD<(ESIMDLevel)20u>, XorSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_and_ps, _mm_cmpeq_ps, _mm_cmpgt_ps, _mm_loadu_ps, _mm_mul_ps, _mm_rsqrt_ps, _mm_set1_ps, _mm_shuffle_ps, _mm_storeu_ps, _mm_sub_ps, _mm_xor_ps
// callers: CBaseEntity::ComputeStepSimulationNetwork
void __fastcall QuaternionBlend(__m128 *p, __m128 *q, __m128 t, __m128 *qt)
{
  __m128 v4; // xmm0
  __m128 v5; // xmm2
  __m128 v6; // xmm1
  __m128 v7; // xmm2
  __m128 v8; // xmm1
  __m128 v9; // xmm4
  __m128 v10; // xmm6
  __m128 v11; // xmm4
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  __m128 v14; // xmm2
  __m128 v15; // xmm0
  __m128 v16; // xmm2
  __m128 v17; // xmm4
  __m128 v18; // xmm0

  v4 = _mm_shuffle_ps(t, t, 0);
  v5 = _mm_sub_ps(*p, *q);
  v6 = _mm_add_ps(*p, *q);
  v7 = _mm_mul_ps(v5, v5);
  v8 = _mm_mul_ps(v6, v6);
  v9 = _mm_add_ps(_mm_shuffle_ps(v7, v7, 177), v7);
  v10 = _mm_add_ps(_mm_shuffle_ps(v9, v9, 78), v9);
  v11 = _mm_add_ps(_mm_shuffle_ps(v8, v8, 177), v8);
  v12 = _mm_add_ps(
          _mm_mul_ps(
            _mm_xor_ps(
              _mm_and_ps(
                _mm_xor_ps(_mm_sub_ps(Four_Zeros, *q), *q),
                _mm_cmplt_ps(_mm_add_ps(_mm_shuffle_ps(v11, v11, 78), v11), v10)),
              *q),
            v4),
          _mm_mul_ps(_mm_sub_ps(Four_Ones, v4), *p));
  v13 = _mm_mul_ps(v12, v12);
  v14 = _mm_add_ps(_mm_shuffle_ps(v13, v13, 177), v13);
  v15 = _mm_add_ps(_mm_shuffle_ps(v14, v14, 78), v14);
  v16 = _mm_rsqrt_ps(v15);
  v17 = _mm_cmpeq_ps(Four_Zeros, v15);
  v18 = _mm_mul_ps(
          _mm_mul_ps(_mm_mul_ps(_mm_sub_ps(Four_Threes, _mm_mul_ps(_mm_mul_ps(v16, v16), v15)), v16), Four_PointFives),
          v12);
  *qt = _mm_xor_ps(_mm_and_ps(_mm_xor_ps(v12, v18), v17), v18);
}


// QuaternionBlendNoAlign  (line 1902, @0x00000000030e31a0, libserver.so)
// calls: QuaternionNormalize
float __fastcall QuaternionBlendNoAlign(
        const Quaternion *const p,
        const Quaternion *const q,
        float t,
        Quaternion *const qt)
{
  __int64 i; // rax

  for ( i = 0; i != 16; i += 4 )
    *(&qt->x + i) = (*(&p->x + i) * (1.0 - t)) + (*(&q->x + i) * t);
  return QuaternionNormalize(qt);
}


// QuaternionIdentityBlend  (line 1919, @0x00000000030e31e0, libserver.so)
// calls: QuaternionNormalize
float __fastcall QuaternionIdentityBlend(const Quaternion *const p, float a2, float t, Quaternion *const qt)
{
  float v4; // xmm1_4

  qt->x = p->x * (1.0 - a2);
  qt->y = p->y * (1.0 - a2);
  qt->z = p->z * (1.0 - a2);
  v4 = (1.0 - a2) * p->w;
  if ( qt->w < 0.0 )
    qt->w = v4 - a2;
  else
    qt->w = v4 + a2;
  return QuaternionNormalize(qt);
}


// QuaternionSlerp  (line 1944, @0x00000000030e2ca0, libserver.so)
// calls: QuaternionAlign, QuaternionSlerpNoAlign
// callers: Script_SplineQuaternions, CGameSceneNode::Lerp_NoCopy, CGameSceneNode::Lerp_Hermite_NoCopy, CClothSnapshotState::LerpHermiteFrom, CClothSnapshotState::LerpFrom, CPointCommentaryNode::UpdateViewPostThink, CLagCompensationManager::BacktrackEntity, CFuncTrackTrain::UpdateOrientationBlend, RotationInterpolatorFunc_Linear, Interpolator_CurveInterpolate_NonNormalized, CIKContext::SolveDependencies, CIKContext::UpdateTargets (16 total)
void __fastcall QuaternionSlerp(const Quaternion *const p, const Quaternion *const q, float t, Quaternion *const qt)
{
  Quaternion q2; // [rsp+10h] [rbp-30h] BYREF

  QuaternionAlign(p, q, &q2);
  QuaternionSlerpNoAlign(p, &q2, t, qt);
}


// QuaternionSlerpNoAlign  (line 1956, @0x00000000030e2ac0, libserver.so)  // inlines: operator[]
// calls: V_sinf, V_acosf
// callers: QuaternionSlerp
void __fastcall QuaternionSlerpNoAlign(
        const Quaternion *const p,
        const Quaternion *const q,
        float t,
        Quaternion *const qt)
{
  float v4; // xmm2_4
  float y; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm4_4
  __int64 j; // rax
  float v11; // xmm0_4
  __int64 i; // rax
  double v13; // xmm0_8
  float v14; // xmm4_4
  double v15; // xmm0_8
  float v16; // xmm0_4
  const Quaternion *qa; // [rsp+8h] [rbp-28h]
  float v18; // [rsp+10h] [rbp-20h]
  float v20; // [rsp+14h] [rbp-1Ch]
  float sinoma; // [rsp+18h] [rbp-18h]
  float sclp; // [rsp+1Ch] [rbp-14h]
  float sclpa; // [rsp+1Ch] [rbp-14h]

  v4 = t;
  y = q->y;
  v8 = (((p->x * q->x) + (p->y * y)) + (p->z * q->z)) + (p->w * q->w);
  if ( (v8 + 1.0) <= 0.000001 )
  {
    qt->x = -y;
    qt->y = q->x;
    qt->z = -q->w;
    qt->w = q->z;
    sclp = V_sinf((1.0 - t) * 1.570796326794897);
    v11 = V_sinf(t * 1.570796326794897);
    for ( i = 0; i != 12; i += 4 )
      *(&qt->x + i) = (*(&p->x + i) * sclp) + (*(&qt->x + i) * v11);
  }
  else
  {
    if ( (1.0 - v8) > 0.000001 )
    {
      qa = q;
      *&v13 = V_acosf(v8);
      sclpa = *&v13;
      sinoma = V_sinf(v13);
      v18 = t;
      v14 = V_sinf(COERCE_DOUBLE(COERCE_UNSIGNED_INT((1.0 - t) * sclpa)));
      *&v15 = LODWORD(sclpa);
      v20 = v14 / sinoma;
      *&v15 = sclpa * v18;
      v16 = V_sinf(v15);
      v9 = v20;
      q = qa;
      v4 = v16 / sinoma;
    }
    else
    {
      v9 = 1.0 - t;
    }
    for ( j = 0; j != 16; j += 4 )
      *(&qt->x + j) = (*(&p->x + j) * v9) + (*(&q->x + j) * v4);
  }
}


// QuaternionAngleDiff  (line 2003, @0x00000000030e35a0, libserver.so)  // inlines: QuaternionConjugate, RAD2DEG
// calls: QuaternionMult, V_asinf, sqrtf
// callers: CFuncTrackTrain::UpdateOrientationBlend
float __fastcall QuaternionAngleDiff(const Quaternion *const p, const Quaternion *const q)
{
  vec_t w; // xmm0_4
  double v3; // xmm0_8
  double v4; // xmm0_8
  Quaternion qInv; // [rsp+0h] [rbp-20h] BYREF
  Quaternion diff; // [rsp+10h] [rbp-10h] BYREF

  qInv.x = -q->x;
  qInv.y = -q->y;
  w = q->w;
  qInv.z = -q->z;
  qInv.w = w;
  QuaternionMult(p, &qInv, &diff);
  *&v3 = 1065353216;
  if ( fsqrt(((diff.x * diff.x) + (diff.y * diff.y)) + (diff.z * diff.z)) <= 1.0 )
  {
    *&v3 = LODWORD(diff.z);
    *&v3 = fsqrt(((diff.x * diff.x) + (diff.y * diff.y)) + (*&v3 * *&v3));
  }
  v4 = V_asinf(v3);
  return (*&v4 + *&v4) * 57.295776;
}


// QuaternionConjugate  (line 2041, @0x00000000030e2cf0, libserver.so)
// callers: CPhysFixed::CreateConstraint, CPhysHinge::CreateConstraint, CPhysMotor::Activate, CPropVRTrackedObject::PostSetModel
void __fastcall QuaternionConjugate(const Quaternion *const p, Quaternion *const q)
{
  q->x = -p->x;
  q->y = -p->y;
  q->z = -p->z;
  q->w = p->w;
}


// QuaternionInvert  (line 2052, @0x00000000030e2d30, libserver.so)  // inlines: QuaternionConjugate, QuaternionDotProduct
// callers: TransformInvert, CTiltTwistConstraint::GetTwistMatrix, CTiltTwistConstraint::TransferPostLoadFn, CStudioConstraintBones::ComputeTwistConstraint, CTiltTwistConstraint::InitFromOldDiskData, CConstraintBones::ComputeAimConstraintOffset
void __fastcall QuaternionInvert(const Quaternion *const p, Quaternion *const q)
{
  float v2; // xmm6_4
  float v3; // xmm5_4
  float v4; // xmm4_4
  float w; // xmm7_4
  float v6; // xmm0_4

  v2 = -p->x;
  q->x = v2;
  v3 = -p->y;
  q->y = v3;
  v4 = -p->z;
  q->z = v4;
  w = p->w;
  q->w = w;
  v6 = (((p->x * p->x) + (p->y * p->y)) + (p->z * p->z)) + (p->w * p->w);
  if ( v6 != 0.0 )
  {
    q->x = v2 * (1.0 / v6);
    q->y = v3 * (1.0 / v6);
    q->z = v4 * (1.0 / v6);
    q->w = (1.0 / v6) * w;
  }
}


// QuaternionMultiply  (line 2072, @0x00000000030e2de0, libserver.so)  // inlines: CrossProduct, VectorMA, operator*=, operator+=
// callers: MayaIk2BSolve, ConcatTransforms, TransformInvert
void __fastcall QuaternionMultiply(const Quaternion *const q, const Vector *const v, Vector *const result)
{
  float y; // xmm5_4
  float z; // xmm6_4
  float v5; // xmm0_4
  float v6; // xmm2_4
  float w; // xmm5_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  vec_t v13; // xmm7_4
  vec_t v14; // xmm6_4
  vec_t v15; // xmm5_4
  float v16; // xmm8_4
  float v17; // xmm3_4
  float x; // xmm9_4

  y = v->y;
  z = v->z;
  v5 = (q->y * z) - (q->z * y);
  v6 = q->x * y;
  w = q->w;
  v8 = v5 + v5;
  v9 = (q->z * v->x) - (z * q->x);
  v10 = v6 - (q->y * v->x);
  v11 = v9 + v9;
  v12 = v10 + v10;
  v13 = (w * v8) + v->x;
  result->x = v13;
  v14 = (w * v11) + v->y;
  result->y = v14;
  v15 = (w * v12) + v->z;
  result->z = v15;
  v16 = q->y;
  v17 = q->z;
  x = q->x;
  result->x = ((v12 * v16) - (v11 * v17)) + v13;
  result->y = ((v17 * v8) - (v12 * x)) + v14;
  result->z = ((v11 * x) - (v8 * v16)) + v15;
}


// QuaternionNormalize  (line 2086, @0x00000000030e2ed0, libserver.so)
// calls: sqrtf
// callers: CPhysicsGameSystem::TeleportToAnimationState, CPhysicsGameSystem::ForceUpdateIfKeyframed, CSkeletonInstance::SweepShapeAgainstHitboxes, CIKContext::AddRule, MatrixAngles, QuaternionBlendNoAlign, QuaternionIdentityBlend, QuaternionLookAt, QuaternionLookAtFLU, RotateBetween, QuaternionSM, QuaternionMA (17 total)
float __fastcall QuaternionNormalize(Quaternion *const q)
{
  float x; // xmm3_4
  float y; // xmm4_4
  float z; // xmm5_4
  float w; // xmm6_4
  float v5; // xmm1_4
  float result; // xmm0_4

  x = q->x;
  y = q->y;
  z = q->z;
  w = q->w;
  v5 = (((x * x) + (y * y)) + (z * z)) + (w * w);
  if ( v5 == 0.0 )
  {
    q->z = 0.0;
    q->y = 0.0;
    q->w = 1.0;
    q->x = 0.0;
    return 1.0;
  }
  else
  {
    result = fsqrt(v5);
    q->w = w * (1.0 / result);
    q->z = z * (1.0 / result);
    q->y = y * (1.0 / result);
    q->x = x * (1.0 / result);
  }
  return result;
}


// QuaternionScale  (line 2116, @0x00000000030e3260, libserver.so)  // inlines: DotProduct, VectorScale
// calls: V_asinf, V_sinf, sqrtf
// callers: CIKContext::AddRule, CIKContext::SolveDependencies, CIKContext::UpdateTargets, QuaternionSM, QuaternionMA, RotationDeltaAxisAngle, ComputeTwistBones
void __fastcall QuaternionScale(const Quaternion *const p, float a2, float t, Quaternion *const q)
{
  __m128 z_low; // xmm0
  __m128 v7; // xmm1
  double v8; // xmm0_8
  float v9; // xmm0_4
  __m128 v10; // xmm3
  float v11; // xmm4_4
  float v12; // xmm0_4
  float sinom; // [rsp+8h] [rbp-18h]

  z_low = LODWORD(p->z);
  z_low.m128_f32[0] = fsqrt(((p->x * p->x) + (p->y * p->y)) + (z_low.m128_f32[0] * z_low.m128_f32[0]));
  v7 = _mm_cmplt_ss(z_low, 0x3F800000u);
  z_low.m128_u64[0] = COERCE_UNSIGNED_INT64(*_mm_andnot_ps(v7, 0x3F800000u).m128_u64)
                    | z_low.m128_u64[0] & v7.m128_u64[0];
  sinom = z_low.m128_f32[0];
  v8 = V_asinf(*z_low.m128_u64);
  *&v8 = *&v8 * a2;
  v9 = V_sinf(v8);
  v10 = 0x3F800000u;
  v11 = v9 / (sinom + 0.00000011920929);
  v10.m128_f32[0] = 1.0 - (v9 * v9);
  q->x = p->x * v11;
  q->y = p->y * v11;
  q->z = v11 * p->z;
  v12 = fsqrt(COERCE_FLOAT(_mm_cmpge_ss(v10, 0LL).m128_u32[0] & v10.m128_i32[0]));
  if ( p->w < 0.0 )
    q->w = -v12;
  else
    q->w = v12;
}


// QuaternionAdd  (line 2165, @0x00000000030e33a0, libserver.so)
// calls: QuaternionAlign
void __fastcall QuaternionAdd(const Quaternion *const p, const Quaternion *const q, Quaternion *const qt)
{
  Quaternion q2; // [rsp+0h] [rbp-20h] BYREF

  QuaternionAlign(p, q, &q2);
  qt->x = q2.x + p->x;
  qt->y = q2.y + p->y;
  qt->z = q2.z + p->z;
  qt->w = q2.w + p->w;
}


// QuaternionDotProduct  (line 2185, @0x00000000030e3410, libserver.so)
// callers: CSkeletonInstance::SweepShapeAgainstHitboxes
float __fastcall QuaternionDotProduct(const Quaternion *const p, const Quaternion *const q)
{
  return (((p->x * q->x) + (p->y * q->y)) + (p->z * q->z)) + (p->w * q->w);
}


// QuaternionMult  (line 2196, @0x00000000030e3450, libserver.so)
// calls: QuaternionAlign
// callers: Script_RotateQuaternionByAxisAngle, QuaternionAngleDiff, QuaternionSM, QuaternionMA, RotationDeltaAxisAngle, ConcatTransforms, ComputeTwistBones, CStudioConstraintBones::ComputeAimConstraint, CConstraintBones::ComputeTargetOrientation, CConstraintBones::ComputeAimConstraintOffset
void __fastcall QuaternionMult(const Quaternion *const p, const Quaternion *const q, Quaternion *const qt)
{
  float w; // xmm1_4
  float z; // xmm2_4
  float y; // xmm3_4
  float x; // xmm4_4
  __int64 v9; // rax
  Quaternion p2; // [rsp+0h] [rbp-20h] BYREF

  if ( p == qt )
  {
    v9 = *&p->x;
    *&p2.z = *&p->z;
    *&p2.x = v9;
    QuaternionMult(&p2, q, p);
  }
  else
  {
    QuaternionAlign(p, q, &p2);
    w = p2.w;
    z = p2.z;
    y = p2.y;
    x = p2.x;
    qt->x = (((p->x * p2.w) + (p->y * p2.z)) - (p->z * p2.y)) + (p->w * p2.x);
    qt->y = (((p->y * w) - (p->x * z)) + (p->z * x)) + (p->w * y);
    qt->z = (((p->x * y) - (p->y * x)) + (p->z * w)) + (p->w * z);
    qt->w = (((-p->x * x) - (y * p->y)) - (z * p->z)) + (w * p->w);
  }
}


// QuaternionExp  (line 2219, @0x00000000030e3690, libserver.so)  // inlines: Init, operator[]
// calls: V_expf, V_sinf, V_cosf, sqrtf
// callers: QuaternionAverageExponential
void __fastcall QuaternionExp(const Quaternion *const p, Quaternion *const q)
{
  float v4; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  vec_t v9; // xmm2_4
  vec_t v10; // xmm3_4
  vec_t v11; // xmm1_4
  float s; // [rsp+8h] [rbp-18h]
  float sa; // [rsp+8h] [rbp-18h]
  float et; // [rsp+Ch] [rbp-14h]

  s = fsqrt(((p->x * p->x) + (p->y * p->y)) + (p->z * p->z));
  v4 = V_expf(p->w);
  v5 = s;
  v6 = 0.0;
  et = v4;
  if ( s >= 0.0000099999997 )
  {
    v7 = V_sinf(COERCE_DOUBLE(LODWORD(s)));
    v5 = s;
    v6 = (et * v7) / s;
  }
  sa = v6;
  v8 = V_cosf(v5);
  v9 = p->z * sa;
  v10 = p->y * sa;
  v11 = sa * p->x;
  q->w = v8 * et;
  q->z = v9;
  q->y = v10;
  q->x = v11;
}


// QuaternionLnIm  (line 2228, @0x00000000030e3770, libserver.so)  // inlines: operator[]
// calls: V_atan2f, sqrtf
Vector __fastcall QuaternionLnIm(const Quaternion *const p)
{
  double v2; // xmm2_8
  float v3; // xmm0_4
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&v2 = LODWORD(p->y);
  *&v2 = fsqrt(((p->x * p->x) + (*&v2 * *&v2)) + (p->z * p->z));
  v3 = 0.0;
  if ( *&v2 > 0.0000099999997 )
    v3 = V_atan2f(v2, COERCE_DOUBLE(LODWORD(p->w))) / *&v2;
  result.z = p->z * v3;
  *&result.x = __PAIR64__(p->y * v3, v3 * p->x);
  return result;
}


// QuaternionLn  (line 2235, @0x00000000030e3810, libserver.so)  // inlines: Init, operator[]
// calls: V_atan2f, V_logf, sqrtf
// callers: QuaternionAverageExponential
void __fastcall QuaternionLn(const Quaternion *const p, Quaternion *const q)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  double v6; // xmm2_8
  float v7; // xmm5_4
  float v8; // xmm0_4
  vec_t v9; // xmm1_4
  vec_t v10; // xmm2_4
  vec_t v11; // xmm5_4
  float t; // [rsp+Ch] [rbp-14h]

  *&v6 = LODWORD(p->y);
  *&v6 = fsqrt(((p->x * p->x) + (*&v6 * *&v6)) + (p->z * p->z));
  v7 = 0.0;
  if ( *&v6 > 0.0000099999997 )
    v7 = V_atan2f(v6, COERCE_DOUBLE(LODWORD(p->w))) / *&v6;
  t = v7;
  v8 = V_logf(p, q, v2, v3, (((p->x * p->x) + (p->y * p->y)) + (p->z * p->z)) + (p->w * p->w));
  v9 = p->z * t;
  v10 = p->y * t;
  v11 = t * p->x;
  q->w = v8 * 0.5;
  q->z = v9;
  q->y = v10;
  q->x = v11;
}


// QuaternionAverageExponential  (line 2246, @0x00000000030e3910, libserver.so)  // inlines: Quaternion, operator=
// calls: QuaternionAlign, QuaternionLn, QuaternionExp
// callers: CModel::SetupAttachment, CConstraintBones::ComputeTargetOrientation, CConstraintBones::ComputeTargetPositionOrientation
void __fastcall QuaternionAverageExponential(
        Quaternion *const q,
        int nCount,
        const Quaternion *pQuaternions,
        const float *pflWeights)
{
  __int64 v5; // rax
  float v6; // xmm0_4
  const Quaternion *v7; // r12
  __int64 v8; // r13
  float v9; // xmm1_4
  __int64 i; // rax
  __int64 v12; // [rsp+10h] [rbp-80h]
  float weight; // [rsp+20h] [rbp-70h]
  float v15; // [rsp+24h] [rbp-6Ch]
  Quaternion sum; // [rsp+30h] [rbp-60h] BYREF
  Quaternion alignedQuat; // [rsp+40h] [rbp-50h] BYREF
  Quaternion qLn; // [rsp+50h] [rbp-40h] BYREF

  if ( nCount == 1 )
  {
    *q = *pQuaternions;
  }
  else
  {
    if ( nCount <= 0 )
    {
      sum.x = 0.0;
      sum.y = 0.0;
      sum.z = 0.0;
      sum.w = 0.0;
    }
    else
    {
      v5 = 0;
      v6 = 0.0;
      do
      {
        while ( pflWeights != 0 )
        {
          v6 = v6 + pflWeights[v5++];
          if ( nCount <= v5 )
            goto LABEL_7;
        }
        ++v5;
        v6 = v6 + 1.0;
      }
      while ( nCount > v5 );
LABEL_7:
      if ( v6 <= 0.0 )
        weight = 1.0;
      else
        weight = 1.0 / v6;
      v7 = pQuaternions;
      sum.x = 0.0;
      sum.y = 0.0;
      v8 = 0;
      v12 = (nCount - 1) + 1LL;
      sum.z = 0.0;
      sum.w = 0.0;
      do
      {
        v9 = weight;
        if ( pflWeights != 0 )
          v9 = weight * pflWeights[v8];
        v15 = v9;
        QuaternionAlign(pQuaternions, v7, &alignedQuat);
        QuaternionLn(&alignedQuat, &qLn);
        for ( i = 0; i != 16; i += 4 )
          *(&sum.x + i) = (*(&qLn.x + i) * v15) + *(&sum.x + i);
        ++v8;
        ++v7;
      }
      while ( v8 != v12 );
    }
    QuaternionExp(&sum, q);
  }
}


// QuaternionLookAt  (line 2307, @0x00000000030e3ad0, libserver.so)  // inlines: Cross, CrossProduct, DotProduct, Init, NormalizeInPlace, VectorMultiply, VectorSubtract, operator*, operator-
// calls: VectorNormalize, QuaternionNormalize
void __fastcall QuaternionLookAt(const Vector *const vecForward, const Vector *const referenceUp, Quaternion *const q)
{
  float y; // xmm3_4
  float z; // xmm1_4
  float v7; // xmm0_4
  vec_t v8; // xmm2_4
  vec_t v9; // xmm3_4
  vec_t v10; // xmm0_4
  Vector forward; // [rsp+0h] [rbp-40h] BYREF
  Vector up; // [rsp+10h] [rbp-30h] BYREF
  Vector right; // [rsp+20h] [rbp-20h] BYREF

  forward = *vecForward;
  VectorNormalize(&forward);
  y = referenceUp->y;
  z = referenceUp->z;
  v7 = ((forward.x * referenceUp->x) + (forward.y * y)) + (forward.z * z);
  up.x = referenceUp->x - (forward.x * v7);
  up.y = y - (forward.y * v7);
  up.z = z - (v7 * forward.z);
  VectorNormalize(&up);
  right.x = (forward.y * up.z) - (forward.z * up.y);
  right.y = (forward.z * up.x) - (up.z * forward.x);
  right.z = (forward.x * up.y) - (up.x * forward.y);
  VectorNormalize(&right);
  v8 = up.x - right.z;
  v9 = forward.z - up.y;
  v10 = ((right.x + forward.y) + up.z) + 1.0;
  q->z = right.y - forward.x;
  q->y = v8;
  q->x = v9;
  q->w = v10;
  QuaternionNormalize(q);
}


// QuaternionLookAtFLU  (line 2343, @0x00000000030e3c20, libserver.so)  // inlines: Cross, CrossProduct, DotProduct, Init, NormalizeInPlace, VectorMultiply, VectorSubtract, operator*, operator-
// calls: VectorNormalize, QuaternionNormalize
void __fastcall QuaternionLookAtFLU(
        const Vector *const vecForward,
        const Vector *const referenceUp,
        Quaternion *const q)
{
  float y; // xmm3_4
  float z; // xmm1_4
  float v7; // xmm0_4
  vec_t v8; // xmm3_4
  vec_t v9; // xmm1_4
  vec_t v10; // xmm0_4
  Vector forward; // [rsp+0h] [rbp-40h] BYREF
  Vector up; // [rsp+10h] [rbp-30h] BYREF
  Vector right; // [rsp+20h] [rbp-20h] BYREF

  forward = *vecForward;
  VectorNormalize(&forward);
  y = referenceUp->y;
  z = referenceUp->z;
  v7 = ((forward.x * referenceUp->x) + (forward.y * y)) + (forward.z * z);
  up.x = referenceUp->x - (forward.x * v7);
  up.y = y - (forward.y * v7);
  up.z = z - (v7 * forward.z);
  VectorNormalize(&up);
  right.x = (forward.y * up.z) - (forward.z * up.y);
  right.y = (forward.z * up.x) - (up.z * forward.x);
  right.z = (forward.x * up.y) - (up.x * forward.y);
  VectorNormalize(&right);
  v8 = up.x - forward.z;
  v9 = -right.z - up.y;
  v10 = ((forward.x - right.y) + up.z) + 1.0;
  q->z = right.x + forward.y;
  q->y = v8;
  q->x = v9;
  q->w = v10;
  QuaternionNormalize(q);
}


// QuaternionMatrix  (line 2376, @0x00000000030e3f90, libserver.so)  // inlines: QuaternionMatrix
// calls: QuaternionMatrixOrientationOnly
// callers: CDebugOverlayScriptHelper::Capsule, CDebugOverlayScriptHelper::Axis, CIKTarget::UpdateOwner, CIKContext::SolveDependencies, CIKContext::UpdateTargets, CEntityClass::UnserializeKey, VectorIRotate, VectorITransform, TransformMatrix, CModelSkeleton::GetBindPoseParentTransform, CModelSkeleton::GetBindPoseWorldTransforms, CModel::GetAttachmentOffset
void __fastcall QuaternionMatrix(const Quaternion *const q, const Vector *const pos, matrix3x4_t *const matrix)
{
  QuaternionMatrixOrientationOnly(q, matrix);
  matrix->m_flMatVal[0][3] = 0.0;
  matrix->m_flMatVal[1][3] = 0.0;
  matrix->m_flMatVal[2][3] = 0.0;
  matrix->m_flMatVal[0][3] = pos->x;
  matrix->m_flMatVal[1][3] = pos->y;
  matrix->m_flMatVal[2][3] = pos->z;
}


// QuaternionMatrix  (line 2387, @0x00000000030e3fe0, libserver.so)  // inlines: QuaternionMatrix
// calls: QuaternionMatrixOrientationOnly
// callers: CPhysicsGameSystem::PushDynamicTransformsWorker, CGameSceneNode::WriteTransformValue, CIKContext::SolveDependencies, TransformMatrix, CModel::SetupAttachment
void __fastcall QuaternionMatrix(
        const Quaternion *const q,
        const Vector *const pos,
        const Vector *const vScale,
        matrix3x4_t *const mat)
{
  QuaternionMatrixOrientationOnly(q, mat);
  mat->m_flMatVal[0][3] = 0.0;
  mat->m_flMatVal[1][3] = 0.0;
  mat->m_flMatVal[2][3] = 0.0;
  mat->m_flMatVal[0][0] = mat->m_flMatVal[0][0] * vScale->x;
  mat->m_flMatVal[1][0] = mat->m_flMatVal[1][0] * vScale->x;
  mat->m_flMatVal[2][0] = mat->m_flMatVal[2][0] * vScale->x;
  mat->m_flMatVal[0][1] = mat->m_flMatVal[0][1] * vScale->y;
  mat->m_flMatVal[1][1] = mat->m_flMatVal[1][1] * vScale->y;
  mat->m_flMatVal[2][1] = mat->m_flMatVal[2][1] * vScale->y;
  mat->m_flMatVal[0][2] = mat->m_flMatVal[0][2] * vScale->z;
  mat->m_flMatVal[1][2] = mat->m_flMatVal[1][2] * vScale->z;
  mat->m_flMatVal[2][2] = mat->m_flMatVal[2][2] * vScale->z;
  mat->m_flMatVal[0][3] = pos->x;
  mat->m_flMatVal[1][3] = pos->y;
  mat->m_flMatVal[2][3] = pos->z;
}


// QuaternionMatrixOrientationOnly  (line 2401, @0x00000000030e3d80, libserver.so)
// callers: VectorRotate, QuaternionMatrix, QuaternionAngles, QuaternionionGetYaw, QuaternionionGetPitch, QuaternionionGetRoll, UnitTestRotateBetween, MatrixQuaternionTest, MatrixQuaternionFastTest, MatrixQuaternionTest2, CTiltTwistConstraint::Compute, CMorphConstraint::CalcSlaveLocalMatrix (15 total)
void __fastcall QuaternionMatrixOrientationOnly(const Quaternion *const q, matrix3x4_t *const matrix)
{
  __m128d v2; // xmm0
  __m128d v3; // xmm0
  __m128d v4; // xmm0

  v2 = 0x3FF0000000000000uLL;
  v2.m128d_f64[0] = 1.0 - (q->y + q->y) * q->y - (q->z + q->z) * q->z;
  matrix->m_flMatVal[0][0] = _mm_movedup_pd(v2).m128d_f64[0];
  v3 = _mm_cvtps_pd(LODWORD(q->x));
  v3.m128d_f64[0] = (v3.m128d_f64[0] + v3.m128d_f64[0]) * q->y + (q->w + q->w) * q->z;
  matrix->m_flMatVal[1][0] = _mm_movedup_pd(v3).m128d_f64[0];
  v4 = _mm_cvtps_pd(LODWORD(q->x));
  v4.m128d_f64[0] = (v4.m128d_f64[0] + v4.m128d_f64[0]) * q->z - (q->w + q->w) * q->y;
  matrix->m_flMatVal[2][0] = _mm_movedup_pd(v4).m128d_f64[0];
  matrix->m_flMatVal[0][1] = ((q->x + q->x) * q->y) - ((q->w + q->w) * q->z);
  matrix->m_flMatVal[1][1] = (1.0 - ((q->x + q->x) * q->x)) - ((q->z + q->z) * q->z);
  matrix->m_flMatVal[2][1] = ((q->y + q->y) * q->z) + ((q->w + q->w) * q->x);
  matrix->m_flMatVal[0][2] = ((q->x + q->x) * q->z) + ((q->w + q->w) * q->y);
  matrix->m_flMatVal[1][2] = ((q->y + q->y) * q->z) - ((q->w + q->w) * q->x);
  matrix->m_flMatVal[2][2] = (1.0 - ((q->x + q->x) * q->x)) - ((q->y + q->y) * q->y);
}


// QuaternionMatrix  (line 2457, @0x00000000030e40d0, libserver.so)
// calls: QuaternionMatrixOrientationOnly
// callers: CDebugOverlayScriptHelper::Circle, CalcOOBB2dFrom3d, CIKTarget::SetNormal, CEntityClass::UnserializeKey, CTiltTwistConstraint::GetTwistMatrix
void __fastcall QuaternionMatrix(const Quaternion *const q, matrix3x4_t *const matrix)
{
  QuaternionMatrixOrientationOnly(q, matrix);
  matrix->m_flMatVal[0][3] = 0.0;
  matrix->m_flMatVal[1][3] = 0.0;
  matrix->m_flMatVal[2][3] = 0.0;
}


// Quaternion::GetForward  (line 2471, @0x00000000030e4100, libserver.so)
// callers: QuaternionVectorsFLU, QuaternionVectorsForward
Vector __fastcall Quaternion::GetForward(const Quaternion *const this)
{
  __m128d v1; // xmm2
  double z; // xmm3_8
  __m128d v3; // xmm4
  double v4; // xmm1_8
  double v5; // xmm0_8
  double v6; // xmm6_8
  double v7; // xmm1_8
  float v10[4]; // [rsp+0h] [rbp-10h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v1 = _mm_cvtps_pd(LODWORD(this->y));
  z = this->z;
  v3 = 0x3FF0000000000000uLL;
  v4 = this->x + this->x;
  v5 = this->w + this->w;
  v3.m128d_f64[0] = 1.0 - (v1.m128d_f64[0] + v1.m128d_f64[0]) * v1.m128d_f64[0] - (z + z) * z;
  v6 = _mm_movedup_pd(v3).m128d_f64[0];
  v3.m128d_f64[1] = v1.m128d_f64[1];
  v10[0] = v6;
  v3.m128d_f64[0] = v1.m128d_f64[0] * v4 + z * v5;
  v7 = v4 * z - v5 * v1.m128d_f64[0];
  v10[1] = _mm_movedup_pd(v3).m128d_f64[0];
  *&result.x = *v10;
  result.z = v7;
  return result;
}


// Quaternion::GetLeft  (line 2481, @0x00000000030e41a0, libserver.so)
// callers: QuaternionVectorsFLU
Vector __fastcall Quaternion::GetLeft(const Quaternion *const this)
{
  float x; // xmm4_4
  float z; // xmm2_4
  float y; // xmm1_4
  float v4; // xmm0_4
  float v7[4]; // [rsp+0h] [rbp-10h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  x = this->x;
  z = this->z;
  y = this->y;
  v4 = this->w + this->w;
  v7[0] = ((x + x) * y) - (v4 * z);
  result.z = ((y + y) * z) + (x * v4);
  v7[1] = (1.0 - ((x + x) * x)) - ((z + z) * z);
  *&result.x = *v7;
  return result;
}


// Quaternion::GetUp  (line 2492, @0x00000000030e4220, libserver.so)
// callers: QuaternionVectorsFLU
Vector __fastcall Quaternion::GetUp(const Quaternion *const this)
{
  float x; // xmm5_4
  float y; // xmm2_4
  float z; // xmm6_4
  float v4; // xmm0_4
  float v7[4]; // [rsp+0h] [rbp-10h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  x = this->x;
  y = this->y;
  z = this->z;
  v4 = this->w + this->w;
  v7[0] = ((x + x) * z) + (v4 * y);
  result.z = (1.0 - ((x + x) * x)) - (y * (y + y));
  v7[1] = (z * (y + y)) - (v4 * x);
  *&result.x = *v7;
  return result;
}


// RotateBetween  (line 2503, @0x00000000030e42a0, libserver.so)  // inlines: CrossProduct, DotProduct, Init, LengthSqr, VectorAdd, VectorMultiply, operator*, operator+
// calls: QuaternionNormalize
// callers: UnitTestRotateBetween
Quaternion __fastcall RotateBetween(const Vector *const v1, const Vector *const v2)
{
  float x; // xmm4_4
  float y; // xmm5_4
  float z; // xmm6_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  Quaternion qOut; // [rsp+0h] [rbp-10h] BYREF
  Quaternion result; // 0:xmm0_8.8,8:xmm1_8.8

  x = v1->x;
  y = v1->y;
  z = v1->z;
  v5 = (v2->x + v1->x) * 0.5;
  v6 = (v2->y + y) * 0.5;
  v7 = (v2->z + z) * 0.5;
  if ( (((v5 * v5) + (v6 * v6)) + (v7 * v7)) > 9.9999997e-10 )
  {
    qOut.x = (y * v7) - (z * v6);
    qOut.y = (z * v5) - (x * v7);
    qOut.z = (x * v6) - (y * v5);
    qOut.w = ((v5 * x) + (v6 * y)) + (v7 * z);
  }
  else
  {
    if ( fabs(x) > 0.5 )
    {
      qOut.x = v1->y;
      qOut.z = 0.0;
      qOut.y = -x;
    }
    else
    {
      qOut.x = 0.0;
      qOut.y = z;
      qOut.z = -y;
    }
    qOut.w = 0.0;
  }
  QuaternionNormalize(&qOut);
  *&result.x = *&qOut.x;
  *&result.z = *&qOut.z;
  return result;
}


// UnitTestQuatExpLog  (line 2541, @0x00000000030eb970, libserver.so)  // inlines: Exp, FastSqrt, Length, Log, VectorLength, VectorMultiply, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*
// calls: V_asinf, V_sinf, V_cosf, RandomQuaternion
void __cdecl UnitTestQuatExpLog()
{
  Elf64_Rela *v0; // rbx
  double v1; // xmm0_8
  double v2; // xmm0_8
  float x; // xmm1_4
  float y; // xmm5_4
  float z; // xmm4_4
  float v6; // xmm0_4
  double v7; // xmm1_8
  float v8; // xmm3_4
  float v9; // [rsp+1Ch] [rbp-14h]
  unsigned int v10; // [rsp+1Ch] [rbp-14h]
  float v11; // [rsp+1Ch] [rbp-14h]
  Quaternion v12; // 0:kr00_16.16

  v0 = &stru_493E0;
  do
  {
    v12 = RandomQuaternion();
    x = v12.x;
    y = v12.y;
    z = v12.z;
    v8 = fsqrt(((v12.x * v12.x) + (v12.y * v12.y)) + (z * z));
    if ( v8 > 0.001 )
    {
      HIDWORD(v1) = 0;
      v9 = v8;
      *&v1 = fminf(v8, 1.0);
      v2 = V_asinf(v1);
      x = v12.x;
      y = v12.y;
      z = v12.z;
      if ( v12.w < 0.0 )
        *&v2 = 3.1415927 - *&v2;
      v6 = *&v2 / v9;
    }
    else
    {
      v6 = ((0.16666667 * (v8 * v8)) + 1.0) + (((v8 * v8) * (v8 * v8)) * 0.075000003);
      if ( v12.w < 0.0 )
        v6 = -v6;
    }
    *&v10 = (((x * v6) * (x * v6)) + ((y * v6) * (y * v6))) + ((v6 * z) * (v6 * z));
    *&v7 = v10;
    *&v7 = fsqrt(*&v10);
    if ( *&v7 >= 0.001 )
    {
      v11 = *&v7;
      V_sinf(v7);
      V_cosf(v11);
    }
    LODWORD(v0) = v0 - 1;
  }
  while ( v0 != 0 );
}


// UnitTestRotateBetween  (line 2553, @0x00000000030eb550, libserver.so)  // inlines: QuaternionMatrix, VectorTransform
// calls: RandomSeed, RandomVectorOnUnitSphere, RotateBetween, QuaternionMatrixOrientationOnly, VectorTransform
void __cdecl UnitTestRotateBetween()
{
  Elf64_Rela *v0; // rbx
  Vector u; // [rsp+10h] [rbp-A0h] BYREF
  Vector v; // [rsp+20h] [rbp-90h] BYREF
  float v3[4]; // [rsp+30h] [rbp-80h] BYREF
  Quaternion q; // [rsp+40h] [rbp-70h] BYREF
  matrix3x4_t matrix; // [rsp+50h] [rbp-60h] BYREF

  v0 = &stru_2DC6C0;
  RandomSeed(1);
  do
  {
    u = RandomVectorOnUnitSphere();
    v = RandomVectorOnUnitSphere();
    q = RotateBetween(&u, &v);
    QuaternionMatrixOrientationOnly(&q, &matrix);
    matrix.m_flMatVal[0][3] = 0.0;
    matrix.m_flMatVal[1][3] = 0.0;
    matrix.m_flMatVal[2][3] = 0.0;
    VectorTransform(&u.x, &matrix, v3);
    LODWORD(v0) = v0 - 1;
  }
  while ( v0 != 0 );
}


// QuaternionAngles  (line 2579, @0x00000000030e43f0, libserver.so)  // inlines: QuaternionMatrix
// calls: QuaternionMatrixOrientationOnly, MatrixAngles
// callers: CBreakableProp::Break, CBreakableProp::HandleInteractionStick, CGameSceneNode::SetLocalOrientation, CGameSceneNode::WriteTransformValue, CGameEntitySystem::HandlePointPrefab, CClothSnapshotState::LerpHermiteFrom, CClothSnapshotState::LerpFrom, CBaseEntity::ComputeStepSimulationNetwork, NDebugOverlay::Sphere, CPointCommentaryNode::UpdateViewPostThink, CFourWheelVehiclePhysics::DrawEntityDebugOverlays, CFourWheelVehiclePhysics::VPhysicsUpdate (27 total)
void __fastcall QuaternionAngles(const Quaternion *const q, QAngle *const angles)
{
  matrix3x4_t matrix; // [rsp+0h] [rbp-40h] BYREF

  QuaternionMatrixOrientationOnly(q, &matrix);
  matrix.m_flMatVal[0][3] = 0.0;
  matrix.m_flMatVal[1][3] = 0.0;
  matrix.m_flMatVal[2][3] = 0.0;
  MatrixAngles(&matrix, angles);
}


// QuaternionionGetYaw  (line 2611, @0x00000000030e4430, libserver.so)  // inlines: QuaternionMatrix
// calls: QuaternionMatrixOrientationOnly, MatrixAngles
float __fastcall QuaternionionGetYaw(const Quaternion *const q)
{
  QAngle angles; // [rsp+0h] [rbp-50h] BYREF
  matrix3x4_t matrix; // [rsp+10h] [rbp-40h] BYREF

  QuaternionMatrixOrientationOnly(q, &matrix);
  matrix.m_flMatVal[0][3] = 0.0;
  matrix.m_flMatVal[1][3] = 0.0;
  matrix.m_flMatVal[2][3] = 0.0;
  MatrixAngles(&matrix, &angles);
  return angles.y;
}


// QuaternionionGetPitch  (line 2621, @0x00000000030e4470, libserver.so)  // inlines: QuaternionMatrix
// calls: QuaternionMatrixOrientationOnly, MatrixAngles
float __fastcall QuaternionionGetPitch(const Quaternion *const q)
{
  QAngle angles; // [rsp+0h] [rbp-50h] BYREF
  matrix3x4_t matrix; // [rsp+10h] [rbp-40h] BYREF

  QuaternionMatrixOrientationOnly(q, &matrix);
  matrix.m_flMatVal[0][3] = 0.0;
  matrix.m_flMatVal[1][3] = 0.0;
  matrix.m_flMatVal[2][3] = 0.0;
  MatrixAngles(&matrix, &angles);
  return angles.x;
}


// QuaternionionGetRoll  (line 2631, @0x00000000030e44b0, libserver.so)  // inlines: QuaternionMatrix
// calls: QuaternionMatrixOrientationOnly, MatrixAngles
float __fastcall QuaternionionGetRoll(const Quaternion *const q)
{
  QAngle angles; // [rsp+0h] [rbp-50h] BYREF
  matrix3x4_t matrix; // [rsp+10h] [rbp-40h] BYREF

  QuaternionMatrixOrientationOnly(q, &matrix);
  matrix.m_flMatVal[0][3] = 0.0;
  matrix.m_flMatVal[1][3] = 0.0;
  matrix.m_flMatVal[2][3] = 0.0;
  MatrixAngles(&matrix, &angles);
  return angles.z;
}


// QuaternionVectorsFLU  (line 2647, @0x00000000030e44f0, libserver.so)  // inlines: operator=
// calls: Quaternion::GetForward, Quaternion::GetLeft, Quaternion::GetUp
// callers: CDebugOverlayScriptHelper::VectorText3D, CDebugOverlayScriptHelper::Cross3DOriented, UnitTestVectorFLU, TransformVectorsFLU
void __fastcall QuaternionVectorsFLU(const Quaternion *const q, Vector *pForward, Vector *pLeft, Vector *pUp)
{
  *pForward = Quaternion::GetForward(q);
  *pLeft = Quaternion::GetLeft(q);
  *pUp = Quaternion::GetUp(q);
}


// QuaternionVectorsForward  (line 2669, @0x00000000030e45a0, libserver.so)  // inlines: operator=
// calls: Quaternion::GetForward
// callers: UnitTestVectorFLU, TransformVectorsForward
void __fastcall QuaternionVectorsForward(const Quaternion *const q, Vector *pForward)
{
  *pForward = Quaternion::GetForward(q);
}


// UnitTestVectorFLU  (line 2687, @0x00000000030ebb00, libserver.so)
// calls: RandomQuaternion, QuaternionVectorsForward, QuaternionVectorsFLU
void __cdecl UnitTestVectorFLU()
{
  int i; // ebx
  Vector forward; // [rsp+0h] [rbp-70h] BYREF
  Vector left; // [rsp+10h] [rbp-60h] BYREF
  Vector up; // [rsp+20h] [rbp-50h] BYREF
  Quaternion q; // [rsp+30h] [rbp-40h] BYREF

  for ( i = 100000; i != 0; --i )
  {
    q = RandomQuaternion();
    QuaternionVectorsForward(&q, &forward);
    QuaternionVectorsFLU(&q, &forward, &left, &up);
  }
}


// QuaternionAxisAngle  (line 2703, @0x00000000030e45e0, libserver.so)  // inlines: RAD2DEG
// calls: V_acosf, VectorNormalize
// callers: CalcBoneVelocityFromDerivative, RagdollApplyAnimationAsVelocity, RotationDeltaAxisAngle
void __fastcall QuaternionAxisAngle(const Quaternion *const q, Vector *const axis, float *const angle)
{
  float v6; // xmm0_4
  float v7; // xmm0_4

  v6 = V_acosf(q->w);
  v7 = (v6 + v6) * 57.295776;
  if ( v7 > 180.0 )
    v7 = v7 - 360.0;
  *angle = v7;
  axis->x = q->x;
  axis->y = q->y;
  axis->z = q->z;
  VectorNormalize(axis);
}


// AxisAngleQuaternion  (line 2719, @0x00000000030e4660, libserver.so)  // inlines: DEG2RAD, SinCos
// calls: sincosf
// callers: Script_AxisAngleToQuaternion, Script_RotateQuaternionByAxisAngle, QuaternionRotateVectorAIntoB, MayaIk2BSolve, AxisAngleTransform, CMorphConstraint::CalcSlaveLocalMatrix, ComputeTwistBones
void __fastcall AxisAngleQuaternion(const Vector *const axis, float a2, float angle, Quaternion *const q)
{
  float v6; // xmm0_4
  vec_t ca; // [rsp+8h] [rbp-18h] BYREF
  float sinx[5]; // [rsp+Ch] [rbp-14h] BYREF

  sincosf((a2 * 0.017453292) * 0.5, sinx, &ca);
  v6 = sinx[0];
  q->x = axis->x * sinx[0];
  q->y = axis->y * v6;
  q->z = v6 * axis->z;
  q->w = ca;
}


// AngleQuaternion  (line 2737, @0x00000000030e46d0, libserver.so)  // inlines: SinCos, SinCos3Scaled
// calls: sincosf
// callers: CPhysFixed::CreateConstraint, CPropVRTrackedObject::PostSetModel, CPropVRTrackedObject::Spawn, CPropVRTrackedObject::UpdateTrackingData, CDOTA_ActionRunner::GetThinkerLineEndpoints, CalcOOBB2dFrom3d, CTiltTwistConstraint::Compute
void __fastcall AngleQuaternion(const RadianEuler *const angles, Quaternion *const outQuat)
{
  float v4; // xmm5_4
  float v5; // xmm4_4
  vec_t v6; // xmm0_4
  float v7; // [rsp+8h] [rbp-38h]
  float v8; // [rsp+Ch] [rbp-34h]
  float v9; // [rsp+10h] [rbp-30h]
  float v10; // [rsp+14h] [rbp-2Ch]
  float cosx; // [rsp+18h] [rbp-28h] BYREF
  float sinx[9]; // [rsp+1Ch] [rbp-24h] BYREF

  sincosf(0.5 * angles->y, sinx, &cosx);
  v7 = cosx;
  v8 = sinx[0];
  sincosf(0.5 * angles->z, sinx, &cosx);
  v9 = cosx;
  v10 = sinx[0];
  sincosf(0.5 * angles->x, sinx, &cosx);
  v4 = v7 * cosx;
  v5 = v8 * sinx[0];
  v6 = ((v8 * cosx) * v9) + ((v7 * sinx[0]) * v10);
  outQuat->x = ((v7 * sinx[0]) * v9) - ((v8 * cosx) * v10);
  outQuat->y = v6;
  outQuat->z = (v4 * v10) - (v5 * v9);
  outQuat->w = (v9 * v4) + (v5 * v10);
}


// AngleQuaternion  (line 2840, @0x00000000030e4800, libserver.so)  // inlines: SinCos, SinCos3Scaled
// calls: sincosf
// callers: ISceneViewDebugOverlays::AddBoxOverlay2, ISceneViewDebugOverlays::AddBoxOverlay, ISceneViewDebugOverlays::AddSweptBoxOverlay, CDecalGameSystem::RenderDebugDecal, IDebugOverlay::BoxDirection, CGameSceneNode::ReadTransformValue, CClothSnapshotState::LerpHermiteFrom, CClothSnapshotState::LerpFrom, CBaseEntity::AddStepDiscontinuity, CPointCommentaryNode::UpdateViewPostThink, CPathKeyFrame::Spawn, CPathKeyFrame::SetKeyAngles (28 total)
void __fastcall AngleQuaternion(const QAngle *const angles, Quaternion *const outQuat)
{
  float v4; // xmm5_4
  float v5; // xmm4_4
  vec_t v6; // xmm0_4
  float v7; // [rsp+8h] [rbp-38h]
  float v8; // [rsp+Ch] [rbp-34h]
  float v9; // [rsp+10h] [rbp-30h]
  float v10; // [rsp+14h] [rbp-2Ch]
  float cosx; // [rsp+18h] [rbp-28h] BYREF
  float sinx[9]; // [rsp+1Ch] [rbp-24h] BYREF

  sincosf(0.0087266462 * angles->x, sinx, &cosx);
  v7 = cosx;
  v8 = sinx[0];
  sincosf(0.0087266462 * angles->y, sinx, &cosx);
  v9 = cosx;
  v10 = sinx[0];
  sincosf(0.0087266462 * angles->z, sinx, &cosx);
  v4 = v7 * cosx;
  v5 = v8 * sinx[0];
  v6 = ((v8 * cosx) * v9) + ((v7 * sinx[0]) * v10);
  outQuat->x = ((v7 * sinx[0]) * v9) - ((v8 * cosx) * v10);
  outQuat->y = v6;
  outQuat->z = (v4 * v10) - (v5 * v9);
  outQuat->w = (v9 * v4) + (v5 * v10);
}


// BasisToQuaternion  (line 2869, @0x00000000030e4930, libserver.so)  // inlines: MatrixSetColumn, SetColumn, VectorMultiply
// calls: MatrixAngles, AngleQuaternion
void __fastcall BasisToQuaternion(
        const Vector *const vecForward,
        const Vector *const vecRight,
        const Vector *const vecUp,
        Quaternion *const q)
{
  float y; // xmm2_4
  float z; // xmm1_4
  vec_t x; // xmm0_4
  QAngle angles; // [rsp+0h] [rbp-50h] BYREF
  matrix3x4_t mat; // [rsp+10h] [rbp-40h] BYREF

  y = vecRight->y;
  z = vecRight->z;
  mat.m_flMatVal[0][1] = -vecRight->x;
  x = vecForward->x;
  mat.m_flMatVal[1][1] = -y;
  mat.m_flMatVal[2][1] = -z;
  mat.m_flMatVal[0][0] = x;
  mat.m_flMatVal[1][0] = vecForward->y;
  mat.m_flMatVal[2][0] = vecForward->z;
  mat.m_flMatVal[0][2] = vecUp->x;
  mat.m_flMatVal[1][2] = vecUp->y;
  mat.m_flMatVal[2][2] = vecUp->z;
  MatrixAngles(&mat, &angles);
  AngleQuaternion(&angles, q);
}


// BasisToQuaternionFLU  (line 2947, @0x00000000030e49d0, libserver.so)  // inlines: InitFLU
// calls: MatrixAngles, AngleQuaternion
// globals: vec3_origin
void __fastcall BasisToQuaternionFLU(
        const Vector *const vecForward,
        const Vector *const vecLeft,
        const Vector *const vecUp,
        Quaternion *const q)
{
  QAngle angles; // [rsp+0h] [rbp-50h] BYREF
  matrix3x4_t mat; // [rsp+10h] [rbp-40h] BYREF

  mat.m_flMatVal[0][0] = vecForward->x;
  mat.m_flMatVal[0][1] = vecLeft->x;
  mat.m_flMatVal[0][2] = vecUp->x;
  mat.m_flMatVal[0][3] = vec3_origin.x;
  mat.m_flMatVal[1][0] = vecForward->y;
  mat.m_flMatVal[1][1] = vecLeft->y;
  mat.m_flMatVal[1][2] = vecUp->y;
  mat.m_flMatVal[1][3] = vec3_origin.y;
  mat.m_flMatVal[2][0] = vecForward->z;
  mat.m_flMatVal[2][1] = vecLeft->z;
  mat.m_flMatVal[2][2] = vecUp->z;
  mat.m_flMatVal[2][3] = vec3_origin.z;
  MatrixAngles(&mat, &angles);
  AngleQuaternion(&angles, q);
}


// MatrixQuaternion  (line 3018, @0x00000000030e4a80, libserver.so)
// calls: sqrtf
// callers: CPhysicsGameSystem::UpdateHierarchyJoint, CPhysicsGameSystem::CreateHierarchyConstraint, CPhysicsGameSystem::LoadSpawnGroupPhysics, IDebugOverlay::EntityBounds, IDebugOverlay::EntityHitboxes, CSkeletonInstance::SweepShapeAgainstHitboxes, CPhysHinge::CreateConstraint, CPhysMotor::Activate, CEntityClass::UnserializeKey, MatrixQuaternionTest, MatrixQuaternionTest2, MatrixTransform (18 total)
void __fastcall MatrixQuaternion(const matrix3x4_t *const mat, Quaternion *const q)
{
  float v2; // xmm1_4
  float v3; // xmm2_4
  float v4; // xmm0_4
  float v5; // xmm4_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm2_4

  v2 = mat->m_flMatVal[0][0];
  v3 = mat->m_flMatVal[1][1];
  v4 = mat->m_flMatVal[2][2];
  v5 = mat->m_flMatVal[0][0] + v3;
  if ( (v5 + v4) >= 0.0 )
  {
    v8 = fsqrt((v5 + v4) + 1.0);
    q->w = v8 * 0.5;
    q->x = (mat->m_flMatVal[2][1] - mat->m_flMatVal[1][2]) * (0.5 / v8);
    q->y = (mat->m_flMatVal[0][2] - mat->m_flMatVal[2][0]) * (0.5 / v8);
    q->z = (mat->m_flMatVal[1][0] - mat->m_flMatVal[0][1]) * (0.5 / v8);
  }
  else if ( v4 > v2 )
  {
    if ( v4 <= v3 )
      goto LABEL_4;
    v7 = fsqrt((v4 - v5) + 1.0);
    q->z = v7 * 0.5;
    q->x = (mat->m_flMatVal[2][0] + mat->m_flMatVal[0][2]) * (0.5 / v7);
    q->y = (mat->m_flMatVal[1][2] + mat->m_flMatVal[2][1]) * (0.5 / v7);
    q->w = (mat->m_flMatVal[1][0] - mat->m_flMatVal[0][1]) * (0.5 / v7);
  }
  else
  {
    if ( v2 < v3 )
    {
LABEL_4:
      v6 = fsqrt((v3 - (v4 + v2)) + 1.0);
      q->y = v6 * 0.5;
      q->z = (mat->m_flMatVal[1][2] + mat->m_flMatVal[2][1]) * (0.5 / v6);
      q->x = (mat->m_flMatVal[0][1] + mat->m_flMatVal[1][0]) * (0.5 / v6);
      q->w = (mat->m_flMatVal[0][2] - mat->m_flMatVal[2][0]) * (0.5 / v6);
      return;
    }
    v9 = fsqrt((v2 - (v4 + v3)) + 1.0);
    q->x = v9 * 0.5;
    q->y = (mat->m_flMatVal[0][1] + mat->m_flMatVal[1][0]) * (0.5 / v9);
    q->z = (mat->m_flMatVal[2][0] + mat->m_flMatVal[0][2]) * (0.5 / v9);
    q->w = (mat->m_flMatVal[2][1] - mat->m_flMatVal[1][2]) * (0.5 / v9);
  }
}


// MatrixQuaternionFast  (line 3082, @0x00000000030e4d20, libserver.so)  // inlines: Init, operator*, operator=
// calls: sqrtf
// callers: MatrixQuaternionFastTest
void __fastcall MatrixQuaternionFast(const matrix3x4_t *const mat, Quaternion *const q)
{
  float v2; // xmm0_4
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm1_4
  vec_t v6; // xmm2_4
  float v7; // xmm1_4
  vec_t v8; // xmm0_4
  float v9; // xmm1_4
  vec_t v10; // xmm2_4
  vec_t v11; // xmm0_4
  vec_t v12; // xmm3_4
  vec_t v13; // xmm1_4
  float v14; // xmm1_4
  vec_t v15; // xmm2_4
  vec_t v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm1_4

  v2 = mat->m_flMatVal[2][2];
  v3 = mat->m_flMatVal[0][0];
  v4 = mat->m_flMatVal[1][1];
  if ( v2 < 0.0 )
  {
    if ( v3 <= v4 )
    {
      v20 = (1.0 - v3) + v4;
      v18 = mat->m_flMatVal[1][2] + mat->m_flMatVal[2][1];
      v7 = v20 - v2;
      v19 = mat->m_flMatVal[0][2] - mat->m_flMatVal[2][0];
      q->x = mat->m_flMatVal[0][1] + mat->m_flMatVal[1][0];
      q->y = v7;
    }
    else
    {
      v17 = (v3 + 1.0) - v4;
      v18 = mat->m_flMatVal[2][0] + mat->m_flMatVal[0][2];
      v7 = v17 - v2;
      v19 = mat->m_flMatVal[2][1] - mat->m_flMatVal[1][2];
      q->y = mat->m_flMatVal[0][1] + mat->m_flMatVal[1][0];
      q->x = v7;
    }
    q->z = v18;
    q->w = v19;
  }
  else if ( -v4 > v3 )
  {
    v14 = (1.0 - v3) - v4;
    v15 = mat->m_flMatVal[1][2] + mat->m_flMatVal[2][1];
    v7 = v14 + v2;
    v16 = mat->m_flMatVal[1][0] - mat->m_flMatVal[0][1];
    q->x = mat->m_flMatVal[2][0] + mat->m_flMatVal[0][2];
    q->y = v15;
    q->z = v7;
    q->w = v16;
  }
  else
  {
    v5 = (v3 + 1.0) + v4;
    v6 = mat->m_flMatVal[0][2] - mat->m_flMatVal[2][0];
    v7 = v5 + v2;
    v8 = mat->m_flMatVal[1][0] - mat->m_flMatVal[0][1];
    q->x = mat->m_flMatVal[2][1] - mat->m_flMatVal[1][2];
    q->y = v6;
    q->w = v7;
    q->z = v8;
  }
  v9 = 0.5 / fsqrt(v7);
  v10 = q->z * v9;
  v11 = q->w * v9;
  v12 = q->y * v9;
  v13 = v9 * q->x;
  q->z = v10;
  q->w = v11;
  q->y = v12;
  q->x = v13;
}


// MatrixQuaternionTest  (line 3115, @0x00000000030ebb70, libserver.so)  // inlines: QuaternionDotProduct, QuaternionMatrix, Sqr, operator-
// calls: RandomQuaternion, QuaternionMatrixOrientationOnly, MatrixQuaternion
float __fastcall MatrixQuaternionTest(uint nCount)
{
  float v1; // xmm10_4
  int i; // ebx
  float x; // xmm6_4
  float y; // xmm7_4
  float z; // xmm8_4
  float w; // xmm9_4
  Quaternion q; // [rsp+10h] [rbp-80h] BYREF
  Quaternion r; // [rsp+20h] [rbp-70h] BYREF
  matrix3x4_t mat; // [rsp+30h] [rbp-60h] BYREF

  v1 = 0.0;
  if ( nCount != 0 )
  {
    v1 = 0.0;
    for ( i = 0; i != nCount; ++i )
    {
      q = RandomQuaternion();
      QuaternionMatrixOrientationOnly(&q, &mat);
      mat.m_flMatVal[0][3] = 0.0;
      mat.m_flMatVal[1][3] = 0.0;
      mat.m_flMatVal[2][3] = 0.0;
      MatrixQuaternion(&mat, &r);
      x = r.x;
      y = r.y;
      z = r.z;
      w = r.w;
      if ( ((((q.x * r.x) + (q.y * r.y)) + (q.z * r.z)) + (q.w * r.w)) < 0.0 )
      {
        w = -r.w;
        z = -r.z;
        y = -r.y;
        x = -r.x;
      }
      v1 = v1
         + (((((q.x - x) * (q.x - x)) + ((q.y - y) * (q.y - y))) + ((q.z - z) * (q.z - z))) + ((q.w - w) * (q.w - w)));
    }
  }
  return v1 / nCount;
}


// MatrixQuaternionFastTest  (line 3140, @0x00000000030ebce0, libserver.so)  // inlines: QuaternionDotProduct, QuaternionMatrix, Sqr, operator-
// calls: RandomQuaternion, QuaternionMatrixOrientationOnly, MatrixQuaternionFast
float __fastcall MatrixQuaternionFastTest(uint nCount)
{
  float v1; // xmm10_4
  int i; // ebx
  float x; // xmm6_4
  float y; // xmm7_4
  float z; // xmm8_4
  float w; // xmm9_4
  Quaternion q; // [rsp+10h] [rbp-80h] BYREF
  Quaternion r; // [rsp+20h] [rbp-70h] BYREF
  matrix3x4_t mat; // [rsp+30h] [rbp-60h] BYREF

  v1 = 0.0;
  if ( nCount != 0 )
  {
    v1 = 0.0;
    for ( i = 0; i != nCount; ++i )
    {
      q = RandomQuaternion();
      QuaternionMatrixOrientationOnly(&q, &mat);
      mat.m_flMatVal[0][3] = 0.0;
      mat.m_flMatVal[1][3] = 0.0;
      mat.m_flMatVal[2][3] = 0.0;
      MatrixQuaternionFast(&mat, &r);
      x = r.x;
      y = r.y;
      z = r.z;
      w = r.w;
      if ( ((((q.x * r.x) + (q.y * r.y)) + (q.z * r.z)) + (q.w * r.w)) < 0.0 )
      {
        w = -r.w;
        z = -r.z;
        y = -r.y;
        x = -r.x;
      }
      v1 = v1
         + (((((q.x - x) * (q.x - x)) + ((q.y - y) * (q.y - y))) + ((q.z - z) * (q.z - z))) + ((q.w - w) * (q.w - w)));
    }
  }
  return v1 / nCount;
}


// MatrixQuaternionTest2  (line 3167, @0x00000000030ebe50, libserver.so)  // inlines: MatrixQuaternion, QuaternionDotProduct, QuaternionMatrix, Sqr, operator-
// calls: RandomQuaternion, QuaternionMatrixOrientationOnly, MatrixQuaternion
float __fastcall MatrixQuaternionTest2(uint nCount)
{
  float v1; // xmm10_4
  int i; // ebx
  float x; // xmm8_4
  float y; // xmm7_4
  float z; // xmm6_4
  float w; // xmm5_4
  Quaternion q; // [rsp+10h] [rbp-80h] BYREF
  Quaternion v10; // [rsp+20h] [rbp-70h] BYREF
  matrix3x4_t mat; // [rsp+30h] [rbp-60h] BYREF

  v1 = 0.0;
  if ( nCount != 0 )
  {
    v1 = 0.0;
    for ( i = 0; i != nCount; ++i )
    {
      q = RandomQuaternion();
      QuaternionMatrixOrientationOnly(&q, &mat);
      mat.m_flMatVal[0][3] = 0.0;
      mat.m_flMatVal[1][3] = 0.0;
      mat.m_flMatVal[2][3] = 0.0;
      MatrixQuaternion(&mat, &v10);
      x = v10.x;
      y = v10.y;
      z = v10.z;
      w = v10.w;
      if ( ((((q.x * v10.x) + (q.y * v10.y)) + (q.z * v10.z)) + (q.w * v10.w)) < 0.0 )
      {
        w = -v10.w;
        z = -v10.z;
        y = -v10.y;
        x = -v10.x;
      }
      v1 = v1
         + (((((q.x - x) * (q.x - x)) + ((q.y - y) * (q.y - y))) + ((q.z - z) * (q.z - z))) + ((q.w - w) * (q.w - w)));
    }
  }
  return v1 / nCount;
}


// QuaternionAngles  (line 3197, @0x00000000030e4ef0, libserver.so)  // inlines: MatrixAngles, QuaternionMatrix, RadianEuler
// calls: QuaternionMatrixOrientationOnly, MatrixAngles
// callers: CIKContext::SolveDependencies, CModelSkeletonBuilder::GetBoneToWorld, CConstraintBones::ComputeTargetPositionOrientation
void __fastcall QuaternionAngles(const Quaternion *const q, RadianEuler *const angles)
{
  vec_t v3; // xmm2_4
  vec_t v4; // xmm0_4
  QAngle v5; // [rsp+0h] [rbp-50h] BYREF
  matrix3x4_t matrix; // [rsp+10h] [rbp-40h] BYREF

  QuaternionMatrixOrientationOnly(q, &matrix);
  matrix.m_flMatVal[0][3] = 0.0;
  matrix.m_flMatVal[1][3] = 0.0;
  matrix.m_flMatVal[2][3] = 0.0;
  MatrixAngles(&matrix, &v5);
  v3 = v5.x * 0.017453292;
  v4 = 0.017453292 * v5.z;
  angles->z = v5.y * 0.017453292;
  angles->y = v3;
  angles->x = v4;
}


// QuaternionSM  (line 3214, @0x00000000030e4f60, libserver.so)
// calls: QuaternionScale, QuaternionMult, QuaternionNormalize
// callers: CIKContext::UpdateTargets
void __fastcall QuaternionSM(
        float s,
        const Quaternion *const p,
        const Quaternion *const q,
        Quaternion *const qt,
        float a5)
{
  Quaternion p1; // [rsp+0h] [rbp-40h] BYREF
  Quaternion q1; // [rsp+10h] [rbp-30h] BYREF

  QuaternionScale(p, s, a5, &p1);
  QuaternionMult(&p1, q, &q1);
  QuaternionNormalize(&q1);
  *qt = q1;
}


// QuaternionMA  (line 3230, @0x00000000030e4fd0, libserver.so)
// calls: QuaternionScale, QuaternionMult, QuaternionNormalize
// callers: CIKContext::UpdateTargets
void __fastcall QuaternionMA(
        const Quaternion *const p,
        float s,
        const Quaternion *const q,
        Quaternion *const qt,
        float a5)
{
  Quaternion p1; // [rsp+0h] [rbp-40h] BYREF
  Quaternion q1; // [rsp+10h] [rbp-30h] BYREF

  QuaternionScale(q, s, a5, &q1);
  QuaternionMult(p, &q1, &p1);
  QuaternionNormalize(&p1);
  *qt = p1;
}


// QuaternionAccumulate  (line 3246, @0x00000000030e5050, libserver.so)
// calls: QuaternionAlign
// callers: CIKContext::AddRule
void __fastcall QuaternionAccumulate(
        const Quaternion *const p,
        float s,
        const Quaternion *const q,
        Quaternion *const qt)
{
  float v6; // xmm0_4
  Quaternion q2; // [rsp+8h] [rbp-20h] BYREF

  QuaternionAlign(p, q, &q2);
  qt->x = (q2.x * s) + p->x;
  qt->y = (q2.y * s) + p->y;
  v6 = s * q2.w;
  qt->z = (q2.z * s) + p->z;
  qt->w = v6 + p->w;
}


// Spline_Normalize  (line 3265, @0x00000000030e50d0, libserver.so)  // inlines: VectorLerp, operator=
// callers: Catmull_Rom_Spline_NormalizeX, Kochanek_Bartels_Spline_NormalizeX, Cubic_Spline_NormalizeX, BSpline_NormalizeX, Parabolic_Spline_NormalizeX
void __fastcall Spline_Normalize(
        const Vector *const pt1,
        const Vector *const pt2,
        const Vector *const pt3,
        const Vector *const pt4,
        Vector *const p1n,
        Vector *const p4n)
{
  float v6; // xmm0_4
  float x; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm1_4

  v6 = pt3->x - pt2->x;
  *p1n = *pt1;
  *p4n = *pt4;
  if ( v6 != 0.0 )
  {
    x = pt1->x;
    v8 = pt2->x;
    if ( x != v8 )
    {
      p1n->x = ((x - v8) * (v6 / (v8 - x))) + v8;
      p1n->y = ((pt1->y - pt2->y) * (v6 / (v8 - x))) + pt2->y;
      p1n->z = ((pt1->z - pt2->z) * (v6 / (v8 - x))) + pt2->z;
    }
    v11 = pt3->x;
    if ( pt4->x != pt3->x )
    {
      v9 = pt4->x - v11;
      v10 = v6 / v9;
      p4n->x = (v9 * v10) + v11;
      p4n->y = ((pt4->y - pt3->y) * v10) + pt3->y;
      p4n->z = ((pt4->z - pt3->z) * v10) + pt3->z;
    }
  }
}


// Catmull_Rom_Spline  (line 3298, @0x00000000030e5230, libserver.so)  // inlines: Init, VectorAdd, VectorMultiply, VectorScale
// callers: CPositionInterpolator_CatmullRom::InterpolatePosition, Interpolator_CurveInterpolate, Interpolator_CurveInterpolate_NonNormalized, Catmull_Rom_Spline_Normalize, Catmull_Rom_Spline_NormalizeX
void __fastcall Catmull_Rom_Spline(
        const Vector *const pt1,
        const Vector *const pt2,
        const Vector *const pt3,
        const Vector *const pt4,
        float t,
        Vector *const vOutput)
{
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm3_4
  float v11; // xmm14_4
  float v12; // xmm10_4
  float v13; // xmm9_4
  float v14; // xmm5_4
  float v15; // xmm13_4
  float v16; // xmm7_4
  float v17; // xmm4_4
  float v18; // xmm6_4
  float v19; // xmm11_4
  float v20; // xmm3_4
  float v21; // xmm5_4
  float v22; // xmm4_4
  float v23; // xmm12_4
  vec_t v24; // xmm7_4
  float v25; // xmm13_4
  float v26; // xmm9_4
  float v27; // xmm10_4
  float v28; // xmm1_4
  float v29; // xmm8_4
  vec_t v30; // xmm6_4
  vec_t v31; // xmm3_4
  float v32; // xmm4_4
  vec_t v33; // xmm5_4
  vec_t v34; // xmm1_4
  vec_t v35; // xmm4_4
  float v36; // xmm3_4
  float v37; // xmm2_4
  float v38; // xmm0_4
  vec_t v39; // xmm3_4
  float v40; // xmm5_4
  float x; // xmm4_4
  vec_t v42; // xmm2_4
  vec_t v43; // xmm0_4

  v7 = t * t;
  v8 = t * 0.5;
  v9 = v7 * 0.5;
  vOutput->x = 0.0;
  vOutput->y = 0.0;
  vOutput->z = 0.0;
  v10 = t * v9;
  v11 = 4.0 * v9;
  v12 = 3.0 * v10;
  v13 = -3.0 * v10;
  v14 = pt3->y * (-3.0 * v10);
  v15 = (pt1->z * -v10) + 0.0;
  v16 = pt4->y * v10;
  v17 = (pt2->y * (3.0 * v10)) + ((pt1->y * -v10) + 0.0);
  v18 = pt4->z * v10;
  v19 = (-v10 * pt1->x) + 0.0;
  v20 = v10 * pt4->x;
  v21 = v14 + v17;
  v22 = pt3->z * v13;
  v23 = (pt2->z * v12) + v15;
  v24 = v16 + v21;
  v25 = -5.0 * v9;
  v26 = (v13 * pt3->x) + ((v12 * pt2->x) + v19);
  vOutput->y = v24;
  v27 = v9 + v9;
  v28 = -v9;
  v29 = -v8;
  v30 = v18 + (v22 + v23);
  v31 = v20 + v26;
  vOutput->z = v30;
  vOutput->x = v31;
  v32 = pt4->z * v28;
  v33 = (pt4->y * v28) + ((pt3->y * v11) + ((pt2->y * v25) + ((pt1->y * v27) + v24)));
  v34 = (v28 * pt4->x) + ((pt3->x * v11) + ((pt2->x * v25) + ((v27 * pt1->x) + v31)));
  v35 = v32 + ((pt3->z * v11) + ((pt2->z * v25) + ((pt1->z * v27) + v30)));
  vOutput->x = v34;
  vOutput->y = v33;
  vOutput->z = v35;
  v36 = pt3->y * v8;
  v37 = pt3->z * v8;
  v38 = v8 * pt3->x;
  v39 = v36 + ((pt1->y * v29) + v33);
  v40 = (pt1->z * v29) + v35;
  x = pt1->x;
  vOutput->y = v39;
  v42 = v37 + v40;
  vOutput->z = v42;
  v43 = v38 + ((x * v29) + v34);
  vOutput->x = v43;
  vOutput->x = v43 + pt2->x;
  vOutput->y = v39 + pt2->y;
  vOutput->z = v42 + pt2->z;
}


// Catmull_Rom_Spline_Tangent  (line 3353, @0x00000000030e54b0, libserver.so)  // inlines: Init, VectorAdd, VectorMultiply, VectorScale
// callers: Interpolator_CurveInterpolate
void __fastcall Catmull_Rom_Spline_Tangent(
        const Vector *const pt1,
        const Vector *const pt2,
        const Vector *const pt3,
        const Vector *const pt4,
        float t,
        Vector *const vOutput)
{
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm9_4
  float v10; // xmm8_4
  float v11; // xmm7_4
  float v12; // xmm12_4
  float v13; // xmm6_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm10_4
  float v17; // xmm1_4
  float v18; // xmm7_4
  float v19; // xmm4_4
  float v20; // xmm11_4
  vec_t v21; // xmm6_4
  float v22; // xmm8_4
  vec_t v23; // xmm5_4
  vec_t v24; // xmm1_4
  vec_t v25; // xmm4_4
  vec_t v26; // xmm2_4
  vec_t v27; // xmm0_4
  float z; // xmm1_4
  float v29; // xmm3_4
  float v30; // xmm6_4
  float v31; // xmm7_4
  float v32; // xmm4_4

  vOutput->x = 0.0;
  vOutput->y = 0.0;
  vOutput->z = 0.0;
  v6 = (t * 3.0) * t;
  v7 = (t + t) * 0.5;
  v8 = v6 * 0.5;
  v9 = 3.0 * v8;
  v10 = -3.0 * v8;
  v11 = pt3->y * (-3.0 * v8);
  v12 = (pt1->z * -v8) + 0.0;
  v13 = pt4->y * v8;
  v14 = (pt2->y * (3.0 * v8)) + ((pt1->y * -v8) + 0.0);
  v15 = pt4->z * v8;
  v16 = (-v8 * pt1->x) + 0.0;
  v17 = v8 * pt4->x;
  v18 = v11 + v14;
  v19 = pt3->z * v10;
  v20 = (pt2->z * v9) + v12;
  v21 = v13 + v18;
  v22 = (v10 * pt3->x) + ((v9 * pt2->x) + v16);
  vOutput->y = v21;
  v23 = v15 + (v19 + v20);
  v24 = v17 + v22;
  vOutput->z = v23;
  vOutput->x = v24;
  v25 = (pt4->y * -v7) + ((pt3->y * (4.0 * v7)) + ((pt2->y * (-5.0 * v7)) + ((pt1->y * (v7 + v7)) + v21)));
  v26 = (pt4->z * -v7) + ((pt3->z * (4.0 * v7)) + ((pt2->z * (-5.0 * v7)) + ((pt1->z * (v7 + v7)) + v23)));
  v27 = (pt4->x * -v7) + ((pt3->x * (4.0 * v7)) + (((-5.0 * v7) * pt2->x) + (((v7 + v7) * pt1->x) + v24)));
  vOutput->x = v27;
  vOutput->z = v26;
  vOutput->y = v25;
  z = pt3->z;
  v29 = 0.5 * pt3->x;
  v30 = (pt1->y * -0.5) + v25;
  v31 = -0.5 * pt1->x;
  v32 = (pt1->z * -0.5) + v26;
  vOutput->y = (pt3->y * 0.5) + v30;
  vOutput->z = (z * 0.5) + v32;
  vOutput->x = v29 + (v31 + v27);
}


// Catmull_Rom_Spline_Integral  (line 3406, @0x00000000030e5710, libserver.so)  // inlines: VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// callers: Catmull_Rom_Spline_Integral_Normalize
void __fastcall Catmull_Rom_Spline_Integral(
        const Vector *const pt1,
        const Vector *const pt2,
        const Vector *const pt3,
        const Vector *const pt4,
        float t,
        Vector *const vOutput)
{
  float y; // xmm4_4
  float v7; // xmm9_4
  float z; // xmm3_4
  float v9; // xmm10_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  float v12; // xmm14_4
  float v13; // xmm13_4

  y = pt1->y;
  v7 = pt2->y;
  z = pt1->z;
  v9 = pt3->y;
  v10 = pt3->z;
  v11 = pt2->z;
  v12 = pt4->y;
  v13 = pt4->z;
  vOutput->x = ((((((((4.0 * pt3->x) + ((pt1->x + pt1->x) - (5.0 * pt2->x))) - pt4->x) * 0.16666667) * t) * t) * t)
              + ((t * pt2->x) - ((((pt1->x - pt3->x) * 0.25) * t) * t)))
             - ((((((((pt3->x * 3.0) + (pt1->x - (pt2->x * 3.0))) - pt4->x) * 0.125) * t) * t) * t) * t);
  vOutput->y = ((((((((4.0 * v9) + ((y + y) - (5.0 * v7))) - v12) * 0.16666667) * t) * t) * t)
              + ((t * v7) - ((((y - v9) * 0.25) * t) * t)))
             - ((((((((v9 * 3.0) + (y - (v7 * 3.0))) - v12) * 0.125) * t) * t) * t) * t);
  vOutput->z = ((((((((4.0 * v10) + ((z + z) - (5.0 * v11))) - v13) * 0.16666667) * t) * t) * t)
              + ((t * v11) - ((((z - v10) * 0.25) * t) * t)))
             - ((((((((v10 * 3.0) + (z - (v11 * 3.0))) - v13) * 0.125) * t) * t) * t) * t);
}


// Catmull_Rom_Spline_Integral  (line 3422, @0x00000000030e5970, libserver.so)  // inlines: VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
void __fastcall Catmull_Rom_Spline_Integral(
        const Vector *const pt1,
        const Vector *const pt2,
        const Vector *const pt3,
        const Vector *const pt4,
        Vector *const vOutput)
{
  float v5; // xmm6_4
  float v6; // xmm5_4
  float v7; // xmm0_4
  float x; // xmm2_4
  float v9; // xmm3_4

  v5 = -0.25 * pt1->x;
  v6 = 0.25 * pt4->x;
  v7 = ((pt3->z * 3.25) + ((pt2->z * 3.25) + (pt1->z * -0.25))) - (pt4->z * 0.25);
  x = pt3->x;
  v9 = 3.25 * pt2->x;
  vOutput->y = (((pt3->y * 3.25) + ((pt2->y * 3.25) + (pt1->y * -0.25))) - (pt4->y * 0.25)) * 0.16666667;
  vOutput->z = v7 * 0.16666667;
  vOutput->x = (((x * 3.25) + (v9 + v5)) - v6) * 0.16666667;
}


// Catmull_Rom_Spline_Normalize  (line 3433, @0x00000000030e5a40, libserver.so)  // inlines: DistTo, FastSqrt, Length, VectorLength, VectorMA, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: VectorNormalize, Catmull_Rom_Spline
// callers: Interpolator_CurveInterpolate
void __fastcall Catmull_Rom_Spline_Normalize(
        const Vector *const pt1,
        const Vector *const pt2,
        const Vector *const pt3,
        const Vector *const pt4,
        float t,
        Vector *const vOutput)
{
  float x; // xmm7_4
  float y; // xmm6_4
  float v10; // xmm10_4
  float v11; // xmm9_4
  float z; // xmm5_4
  float v13; // xmm8_4
  vec_t v14; // xmm2_4
  float v15; // xmm0_4
  vec_t v16; // xmm2_4
  vec_t v17; // xmm1_4
  float dt; // [rsp+Ch] [rbp-44h]
  Vector p1n; // [rsp+10h] [rbp-40h] BYREF
  Vector p4n; // [rsp+20h] [rbp-30h] BYREF

  x = pt3->x;
  y = pt3->y;
  v10 = pt2->x;
  v11 = pt2->y;
  z = pt3->z;
  v13 = pt2->z;
  p1n.x = pt1->x - pt2->x;
  p1n.y = pt1->y - v11;
  v14 = pt4->y - y;
  p1n.z = pt1->z - v13;
  v15 = pt4->x;
  p4n.y = v14;
  v16 = pt4->z - z;
  dt = fsqrt((((x - v10) * (x - v10)) + ((y - v11) * (y - v11))) + ((z - v13) * (z - v13)));
  p4n.x = v15 - x;
  p4n.z = v16;
  VectorNormalize(&p1n);
  VectorNormalize(&p4n);
  p1n.x = (p1n.x * dt) + pt2->x;
  p1n.y = (p1n.y * dt) + pt2->y;
  p1n.z = (p1n.z * dt) + pt2->z;
  p4n.x = (p4n.x * dt) + pt3->x;
  v17 = (dt * p4n.z) + pt3->z;
  p4n.y = (p4n.y * dt) + pt3->y;
  p4n.z = v17;
  Catmull_Rom_Spline(&p1n, pt2, pt3, &p4n, t, vOutput);
}


// Catmull_Rom_Spline_Integral_Normalize  (line 3458, @0x00000000030e5bd0, libserver.so)  // inlines: DistTo, FastSqrt, Length, VectorLength, VectorMA, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: VectorNormalize, Catmull_Rom_Spline_Integral
void __fastcall Catmull_Rom_Spline_Integral_Normalize(
        const Vector *const pt1,
        const Vector *const pt2,
        const Vector *const pt3,
        const Vector *const pt4,
        float t,
        Vector *const vOutput)
{
  float x; // xmm7_4
  float y; // xmm6_4
  float v10; // xmm10_4
  float v11; // xmm9_4
  float z; // xmm5_4
  float v13; // xmm8_4
  vec_t v14; // xmm2_4
  float v15; // xmm0_4
  vec_t v16; // xmm2_4
  vec_t v17; // xmm1_4
  float dt; // [rsp+Ch] [rbp-44h]
  Vector p1n; // [rsp+10h] [rbp-40h] BYREF
  Vector p4n; // [rsp+20h] [rbp-30h] BYREF

  x = pt3->x;
  y = pt3->y;
  v10 = pt2->x;
  v11 = pt2->y;
  z = pt3->z;
  v13 = pt2->z;
  p1n.x = pt1->x - pt2->x;
  p1n.y = pt1->y - v11;
  v14 = pt4->y - y;
  p1n.z = pt1->z - v13;
  v15 = pt4->x;
  p4n.y = v14;
  v16 = pt4->z - z;
  dt = fsqrt((((x - v10) * (x - v10)) + ((y - v11) * (y - v11))) + ((z - v13) * (z - v13)));
  p4n.x = v15 - x;
  p4n.z = v16;
  VectorNormalize(&p1n);
  VectorNormalize(&p4n);
  p1n.x = (p1n.x * dt) + pt2->x;
  p1n.y = (p1n.y * dt) + pt2->y;
  p1n.z = (p1n.z * dt) + pt2->z;
  p4n.x = (p4n.x * dt) + pt3->x;
  v17 = (dt * p4n.z) + pt3->z;
  p4n.y = (p4n.y * dt) + pt3->y;
  p4n.z = v17;
  Catmull_Rom_Spline_Integral(&p1n, pt2, pt3, &p4n, t, vOutput);
}


// Catmull_Rom_Spline_NormalizeX  (line 3483, @0x00000000030e5d60, libserver.so)
// calls: Spline_Normalize, Catmull_Rom_Spline
// callers: Interpolator_CurveInterpolate, CChoreoEvent::GetOriginalPercentageFromPlaybackPercentage, CChoreoEvent::GetPlaybackPercentageFromOriginalPercentage
void __fastcall Catmull_Rom_Spline_NormalizeX(
        const Vector *const pt1,
        const Vector *const pt2,
        const Vector *const pt3,
        const Vector *const pt4,
        float t,
        Vector *const vOutput)
{
  Vector p1n; // [rsp+8h] [rbp-50h] BYREF
  Vector p4n; // [rsp+18h] [rbp-40h] BYREF

  Spline_Normalize(pt1, pt2, pt3, pt4, &p1n, &p4n);
  Catmull_Rom_Spline(&p1n, pt2, pt3, &p4n, t, vOutput);
}


// Hermite_Spline  (line 3503, @0x00000000030e5dc0, libserver.so)  // inlines: VectorMA, VectorMultiply, VectorScale
// callers: Hermite_Spline
void __fastcall Hermite_Spline(
        const Vector *const p1,
        const Vector *const p2,
        const Vector *const d1,
        const Vector *const d2,
        float t,
        Vector *const vOutput)
{
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm1_4
  float v9; // xmm7_4
  vec_t v10; // xmm4_4
  float v11; // xmm6_4
  float v12; // xmm2_4
  vec_t v13; // xmm3_4
  vec_t v14; // xmm1_4
  vec_t v15; // xmm0_4
  vec_t v16; // xmm4_4
  vec_t v17; // xmm3_4
  vec_t v18; // xmm1_4
  vec_t v19; // xmm0_4
  vec_t v20; // xmm2_4

  v6 = t * (t * t);
  v7 = v6 - (t * t);
  v8 = ((v6 + v6) - (3.0 * (t * t))) + 1.0;
  v9 = v6 - ((t * t) + (t * t));
  v10 = p1->x * v8;
  v11 = 1.0 - v8;
  v12 = v9 + t;
  vOutput->x = v10;
  v13 = p1->y * v8;
  vOutput->y = v13;
  v14 = v8 * p1->z;
  vOutput->z = v14;
  v15 = (p2->x * v11) + v10;
  vOutput->x = v15;
  v16 = (p2->y * v11) + v13;
  vOutput->y = v16;
  v17 = (v11 * p2->z) + v14;
  vOutput->z = v17;
  v18 = (d1->x * v12) + v15;
  vOutput->x = v18;
  v19 = (d1->y * v12) + v16;
  vOutput->y = v19;
  v20 = (v12 * d1->z) + v17;
  vOutput->z = v20;
  vOutput->x = (d2->x * v7) + v18;
  vOutput->y = (d2->y * v7) + v19;
  vOutput->z = (v7 * d2->z) + v20;
}


// Hermite_Spline  (line 3531, @0x00000000030e5ee0, libserver.so)
float __fastcall Hermite_Spline(float a1, float p1, float p2, float d1, float d2, float t)
{
  float v6; // xmm8_4
  float v7; // xmm5_4

  v6 = d2 * (d2 * d2);
  v7 = ((v6 + v6) - (3.0 * (d2 * d2))) + 1.0;
  return ((v6 - (d2 * d2)) * d1) + ((((v6 - ((d2 * d2) + (d2 * d2))) + d2) * p2) + (((1.0 - v7) * p1) + (a1 * v7)));
}


// Hermite_SplineBasis  (line 3557, @0x00000000030e5f60, libserver.so)
void __fastcall Hermite_SplineBasis(float a1, float t, float *basis)
{
  float v3; // xmm3_4
  float v4; // xmm1_4

  v3 = a1 * (a1 * a1);
  basis[3] = v3 - (a1 * a1);
  v4 = ((v3 + v3) - (3.0 * (a1 * a1))) + 1.0;
  *basis = v4;
  basis[1] = 1.0 - v4;
  basis[2] = (v3 - ((a1 * a1) + (a1 * a1))) + a1;
}


// Hermite_Spline  (line 3576, @0x00000000030e5fd0, libserver.so)  // inlines: VectorSubtract
// calls: Hermite_Spline
// callers: CBaseEntity::ComputeStepSimulationNetwork
void __fastcall Hermite_Spline(
        const Vector *const p0,
        const Vector *const p1,
        const Vector *const p2,
        float t,
        Vector *const vOutput)
{
  float x; // xmm4_4
  float y; // xmm3_4
  float z; // xmm2_4
  Vector e10; // [rsp+0h] [rbp-20h] BYREF
  Vector e21; // [rsp+10h] [rbp-10h] BYREF

  x = p1->x;
  y = p1->y;
  z = p1->z;
  e10.x = p1->x - p0->x;
  e10.y = y - p0->y;
  e10.z = z - p0->z;
  e21.x = p2->x - x;
  e21.y = p2->y - y;
  e21.z = p2->z - z;
  Hermite_Spline(p1, p2, &e10, &e21, t, vOutput);
}


// Hermite_Spline  (line 3585, @0x00000000030e6050, libserver.so)  // inlines: Hermite_Spline
// callers: Hermite_Spline
float __fastcall Hermite_Spline(float a1, float p0, float p1, float p2, float t)
{
  float v5; // xmm7_4
  float v6; // xmm5_4

  v5 = p2 * (p2 * p2);
  v6 = ((v5 + v5) - (3.0 * (p2 * p2))) + 1.0;
  return (((p0 * v6) + ((1.0 - v6) * p1)) + ((p0 - a1) * ((v5 - ((p2 * p2) + (p2 * p2))) + p2)))
       + ((p1 - p0) * (v5 - (p2 * p2)));
}


// Hermite_Spline  (line 3591, @0x00000000030e60e0, libserver.so)
// calls: QuaternionAlign, Hermite_Spline, QuaternionNormalize
// callers: CBaseEntity::ComputeStepSimulationNetwork
void __fastcall Hermite_Spline(
        const Quaternion *const q0,
        const Quaternion *const q1,
        const Quaternion *const q2,
        float t,
        Quaternion *const qOutput)
{
  float v8; // xmm4_4
  float v9; // xmm4_4
  float v10; // xmm4_4
  float v11; // xmm4_4
  Quaternion q0a; // [rsp+10h] [rbp-40h] BYREF
  Quaternion q1a; // [rsp+20h] [rbp-30h] BYREF

  QuaternionAlign(q2, q0, &q0a);
  QuaternionAlign(q2, q1, &q1a);
  qOutput->x = Hermite_Spline(q0a.x, q1a.x, q2->x, t, v8);
  qOutput->y = Hermite_Spline(q0a.y, q1a.y, q2->y, t, v9);
  qOutput->z = Hermite_Spline(q0a.z, q1a.z, q2->z, t, v10);
  qOutput->w = Hermite_Spline(q0a.w, q1a.w, q2->w, t, v11);
  QuaternionNormalize(qOutput);
}


// Kochanek_Bartels_Spline  (line 3621, @0x00000000030e61b0, libserver.so)  // inlines: Init, VectorAdd, VectorMultiply, VectorScale
// callers: Interpolator_CurveInterpolate_NonNormalized, Kochanek_Bartels_Spline_NormalizeX
void __fastcall Kochanek_Bartels_Spline(
        float tension,
        float bias,
        float continuity,
        const Vector *const pt1,
        const Vector *const pt2,
        const Vector *const pt3,
        const Vector *const pt4,
        float t,
        Vector *const vOutput)
{
  float v9; // xmm6_4
  float v10; // xmm0_4
  float v11; // xmm8_4
  float v12; // xmm4_4
  float v13; // xmm9_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm5_4
  float v17; // xmm15_4
  float v18; // xmm13_4
  float v19; // xmm3_4
  float v20; // xmm5_4
  float v21; // xmm10_4
  float v22; // xmm12_4
  float v23; // xmm13_4
  float v24; // xmm14_4
  vec_t v25; // xmm7_4
  float v26; // xmm6_4
  float v27; // xmm5_4
  float v28; // xmm10_4
  float x; // xmm12_4
  float v30; // xmm11_4
  vec_t v31; // xmm6_4
  vec_t v32; // xmm5_4
  float v33; // xmm10_4
  float v34; // xmm8_4
  float v35; // xmm2_4
  float v36; // xmm10_4
  vec_t v37; // xmm12_4
  vec_t v38; // xmm9_4
  vec_t v39; // xmm8_4
  float v40; // xmm15_4
  float v41; // xmm4_4
  float v42; // xmm15_4
  float v43; // xmm1_4
  float v44; // xmm5_4
  float v45; // xmm2_4
  float v46; // xmm0_4
  float v47; // xmm7_4
  float v48; // xmm1_4
  float v49; // xmm15_4
  float v50; // xmm6_4
  float v51; // xmm5_4
  float v52; // xmm4_4
  vec_t v53; // xmm2_4
  vec_t v54; // xmm0_4
  vec_t v55; // xmm1_4
  float ta; // [rsp+4h] [rbp-4h]

  v9 = 1.0 - tension;
  v10 = (continuity + 1.0) * (1.0 - tension);
  v11 = (1.0 - bias) * v10;
  v12 = v10 * (bias + 1.0);
  v13 = (bias + 1.0) * ((1.0 - continuity) * v9);
  v14 = ((1.0 - continuity) * v9) * (1.0 - bias);
  v15 = (t * t) * 0.5;
  vOutput->x = 0.0;
  v16 = t * v15;
  vOutput->y = 0.0;
  vOutput->z = 0.0;
  ta = t * 0.5;
  v17 = -v12 * (t * v15);
  v18 = (((v12 + 4.0) - v14) - v13) * (t * v15);
  v19 = (((v14 - 4.0) + v13) - v11) * (t * v15);
  v20 = v16 * v11;
  v21 = (pt2->y * v18) + ((pt1->y * v17) + 0.0);
  v22 = pt2->z * v18;
  v23 = v18 * pt2->x;
  v24 = pt1->x * v17;
  v25 = (pt4->y * v20) + ((pt3->y * v19) + v21);
  v26 = pt4->z * v20;
  v27 = v20 * pt4->x;
  v28 = (pt3->z * v19) + (v22 + ((pt1->z * v17) + 0.0));
  x = pt3->x;
  vOutput->y = v25;
  v30 = (v15 + v15) * v12;
  v31 = v26 + v28;
  vOutput->z = v31;
  v32 = v27 + ((x * v19) + (v23 + (v24 + 0.0)));
  vOutput->x = v32;
  v33 = ((6.0 - (v14 + v14)) - v13) + v11;
  v34 = -v11 * v15;
  v35 = (((-6.0 - (v12 + v12)) + (v14 + v14)) + v13) * v15;
  v36 = v33 * v15;
  v37 = (pt4->y * v34) + ((pt3->y * v36) + ((pt2->y * v35) + ((pt1->y * v30) + v25)));
  v38 = (pt4->z * v34) + ((pt3->z * v36) + ((pt2->z * v35) + ((pt1->z * v30) + v31)));
  v39 = (v34 * pt4->x) + ((v36 * pt3->x) + ((v35 * pt2->x) + ((v30 * pt1->x) + v32)));
  vOutput->x = v39;
  v40 = -v12;
  vOutput->y = v37;
  vOutput->z = v38;
  v41 = (v12 - v14) * ta;
  v42 = v40 * ta;
  v43 = v14 * ta;
  v44 = pt1->y * v42;
  v45 = pt3->y * v43;
  v46 = pt3->z * v43;
  v47 = (pt1->z * v42) + v38;
  v48 = v43 * pt3->x;
  v49 = (v42 * pt1->x) + v39;
  v50 = (pt2->y * v41) + (v44 + v37);
  v51 = pt2->z * v41;
  v52 = v41 * pt2->x;
  v53 = v45 + v50;
  vOutput->y = v53;
  v54 = v46 + (v51 + v47);
  v55 = v48 + (v52 + v49);
  vOutput->z = v54;
  vOutput->x = v55;
  vOutput->x = v55 + pt2->x;
  vOutput->y = v53 + pt2->y;
  vOutput->z = v54 + pt2->z;
}


// Kochanek_Bartels_Spline_NormalizeX  (line 3693, @0x00000000030e6530, libserver.so)
// calls: Spline_Normalize, Kochanek_Bartels_Spline
// callers: Interpolator_CurveInterpolate
void __fastcall Kochanek_Bartels_Spline_NormalizeX(
        float tension,
        float bias,
        float continuity,
        const Vector *const pt1,
        const Vector *const pt2,
        const Vector *const pt3,
        const Vector *const pt4,
        float t,
        Vector *const vOutput)
{
  Vector p1n; // [rsp+10h] [rbp-50h] BYREF
  Vector p4n; // [rsp+20h] [rbp-40h] BYREF

  Spline_Normalize(pt1, pt2, pt3, pt4, &p1n, &p4n);
  Kochanek_Bartels_Spline(tension, bias, continuity, &p1n, pt2, pt3, &p4n, t, vOutput);
}


// Cubic_Spline  (line 3709, @0x00000000030e65b0, libserver.so)  // inlines: Init, VectorAdd, VectorMultiply, VectorScale
// callers: Interpolator_CurveInterpolate_NonNormalized, Cubic_Spline_NormalizeX
void __fastcall Cubic_Spline(
        const Vector *const pt1,
        const Vector *const pt2,
        const Vector *const pt3,
        const Vector *const pt4,
        float t,
        Vector *const vOutput)
{
  float v6; // xmm3_4
  float v7; // xmm0_4
  float v8; // xmm7_4
  float v9; // xmm0_4
  vec_t v10; // xmm5_4
  vec_t v11; // xmm4_4
  vec_t v12; // xmm0_4
  float v13; // xmm7_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  vec_t v18; // xmm2_4
  float v19; // xmm5_4
  float x; // xmm4_4
  vec_t v21; // xmm1_4
  vec_t v22; // xmm3_4

  vOutput->x = 0.0;
  v6 = t * t;
  vOutput->y = 0.0;
  vOutput->z = 0.0;
  v7 = t * (t * t);
  v8 = v7 + v7;
  v9 = v7 * -2.0;
  v10 = (pt3->y * v9) + ((pt2->y * v8) + 0.0);
  v11 = (pt3->z * v9) + ((pt2->z * v8) + 0.0);
  v12 = (v9 * pt3->x) + ((v8 * pt2->x) + 0.0);
  vOutput->y = v10;
  v13 = -3.0 * v6;
  vOutput->z = v11;
  vOutput->x = v12;
  v14 = v6 * 3.0;
  v15 = pt3->y * v14;
  v16 = pt3->z * v14;
  v17 = v14 * pt3->x;
  v18 = v15 + ((pt2->y * v13) + v10);
  v19 = (pt2->z * v13) + v11;
  x = pt2->x;
  vOutput->y = v18;
  v21 = v16 + v19;
  vOutput->z = v21;
  v22 = v17 + ((x * v13) + v12);
  vOutput->x = v22;
  vOutput->x = v22 + pt2->x;
  vOutput->y = v18 + pt2->y;
  vOutput->z = v21 + pt2->z;
}


// Cubic_Spline_NormalizeX  (line 3754, @0x00000000030e66d0, libserver.so)
// calls: Spline_Normalize, Cubic_Spline
// callers: Interpolator_CurveInterpolate
void __fastcall Cubic_Spline_NormalizeX(
        const Vector *const pt1,
        const Vector *const pt2,
        const Vector *const pt3,
        const Vector *const pt4,
        float t,
        Vector *const vOutput)
{
  Vector p1n; // [rsp+8h] [rbp-50h] BYREF
  Vector p4n; // [rsp+18h] [rbp-40h] BYREF

  Spline_Normalize(pt1, pt2, pt3, pt4, &p1n, &p4n);
  Cubic_Spline(&p1n, pt2, pt3, &p4n, t, vOutput);
}


// BSpline  (line 3767, @0x00000000030e6730, libserver.so)  // inlines: Init, VectorAdd, VectorMultiply, VectorScale
// callers: Interpolator_CurveInterpolate, Interpolator_CurveInterpolate_NonNormalized, BSpline_NormalizeX
void __fastcall BSpline(
        const Vector *const pt1,
        const Vector *const pt2,
        const Vector *const pt3,
        const Vector *const pt4,
        float t,
        Vector *const vOutput)
{
  float v7; // xmm4_4
  float v8; // xmm0_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm13_4
  float v12; // xmm12_4
  float v13; // xmm10_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  float v16; // xmm6_4
  float v17; // xmm5_4
  float v18; // xmm3_4
  float v19; // xmm7_4
  float v20; // xmm2_4
  float v21; // xmm4_4
  float v22; // xmm6_4
  float v23; // xmm14_4
  vec_t v24; // xmm8_4
  float v25; // xmm11_4
  float v26; // xmm0_4
  float v27; // xmm10_4
  vec_t v28; // xmm5_4
  vec_t v29; // xmm3_4
  vec_t v30; // xmm7_4
  vec_t v31; // xmm6_4
  vec_t v32; // xmm5_4
  float v33; // xmm3_4
  float v34; // xmm2_4
  float v35; // xmm0_4
  vec_t v36; // xmm2_4
  vec_t v37; // xmm3_4
  float v38; // xmm6_4
  vec_t v39; // xmm0_4
  float z; // xmm4_4
  float v41; // xmm6_4
  float v42; // xmm7_4
  float v43; // xmm8_4
  float x; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm3_4

  v7 = t * t;
  vOutput->x = 0.0;
  v8 = t * 0.16666667;
  vOutput->y = 0.0;
  vOutput->z = 0.0;
  v9 = v7 * 0.16666667;
  v10 = t * v9;
  v11 = -v10;
  v12 = v10 * 3.0;
  v13 = v10 * -3.0;
  v14 = pt3->y * (v10 * -3.0);
  v15 = pt4->y * v10;
  v16 = (pt2->y * (v10 * 3.0)) + ((pt1->y * -v10) + 0.0);
  v17 = pt4->z * v10;
  v18 = v10 * pt4->x;
  v19 = v14 + v16;
  v20 = v9 * 3.0;
  v21 = v9 * -6.0;
  v22 = pt3->z * v13;
  v23 = (pt2->z * v12) + ((pt1->z * v11) + 0.0);
  v24 = v15 + v19;
  v25 = -3.0 * v8;
  v26 = v8 * 3.0;
  v27 = (v13 * pt3->x) + ((v12 * pt2->x) + ((v11 * pt1->x) + 0.0));
  vOutput->y = v24;
  v28 = v17 + (v22 + v23);
  v29 = v18 + v27;
  vOutput->z = v28;
  vOutput->x = v29;
  v30 = (pt3->y * v20) + ((pt2->y * v21) + ((pt1->y * v20) + v24));
  v31 = (pt3->z * v20) + ((pt2->z * v21) + ((pt1->z * v20) + v28));
  v32 = (pt3->x * v20) + ((v21 * pt2->x) + ((v20 * pt1->x) + v29));
  vOutput->x = v32;
  vOutput->y = v30;
  vOutput->z = v31;
  v33 = pt3->y * v26;
  v34 = pt3->z * v26;
  v35 = v26 * pt3->x;
  v36 = v34 + ((pt1->z * v25) + v31);
  v37 = v33 + ((pt1->y * v25) + v30);
  v38 = (pt1->x * v25) + v32;
  vOutput->z = v36;
  vOutput->y = v37;
  v39 = v35 + v38;
  vOutput->x = v39;
  z = pt3->z;
  v41 = (pt2->y * 0.66666669) + ((pt1->y * 0.16666667) + v37);
  v42 = 0.66666669 * pt2->x;
  v43 = (pt1->z * 0.16666667) + v36;
  x = pt3->x;
  v45 = 0.16666667 * pt1->x;
  v46 = (pt2->z * 0.66666669) + v43;
  vOutput->y = (pt3->y * 0.16666667) + v41;
  vOutput->z = (z * 0.16666667) + v46;
  vOutput->x = (x * 0.16666667) + (v42 + (v45 + v39));
}


// BSpline_NormalizeX  (line 3831, @0x00000000030e69e0, libserver.so)
// calls: Spline_Normalize, BSpline
void __fastcall BSpline_NormalizeX(
        const Vector *const pt1,
        const Vector *const pt2,
        const Vector *const pt3,
        const Vector *const pt4,
        float t,
        Vector *const vOutput)
{
  Vector p1n; // [rsp+8h] [rbp-50h] BYREF
  Vector p4n; // [rsp+18h] [rbp-40h] BYREF

  Spline_Normalize(pt1, pt2, pt3, pt4, &p1n, &p4n);
  BSpline(&p1n, pt2, pt3, &p4n, t, vOutput);
}


// Parabolic_Spline  (line 3844, @0x00000000030e6a40, libserver.so)  // inlines: Init, VectorAdd, VectorMultiply, VectorScale
// callers: Parabolic_Spline_NormalizeX
void __fastcall Parabolic_Spline(
        const Vector *const pt1,
        const Vector *const pt2,
        const Vector *const pt3,
        const Vector *const pt4,
        float t,
        Vector *const vOutput)
{
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm5_4
  float v10; // xmm10_4
  float v11; // xmm0_4
  float v12; // xmm9_4
  vec_t v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm4_4
  float v16; // xmm1_4
  vec_t v17; // xmm5_4
  vec_t v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  vec_t v22; // xmm3_4
  float v23; // xmm6_4
  float x; // xmm5_4
  vec_t v25; // xmm1_4
  vec_t v26; // xmm0_4
  vec_t v27; // xmm5_4
  vec_t v28; // xmm4_4

  v6 = t * t;
  vOutput->x = 0.0;
  v7 = t * 0.5;
  vOutput->y = 0.0;
  vOutput->z = 0.0;
  v8 = v6 * 0.5;
  v9 = pt3->z * v8;
  v10 = -2.0 * v7;
  v11 = v7 + v7;
  v12 = (v8 * -2.0) * pt2->x;
  v13 = (pt3->y * v8) + ((pt2->y * (v8 * -2.0)) + ((pt1->y * v8) + 0.0));
  v14 = (pt2->z * (v8 * -2.0)) + ((pt1->z * v8) + 0.0);
  v15 = pt3->x * v8;
  v16 = v8 * pt1->x;
  v17 = v9 + v14;
  vOutput->y = v13;
  vOutput->z = v17;
  v18 = v15 + (v12 + (v16 + 0.0));
  vOutput->x = v18;
  v19 = pt2->y * v11;
  v20 = pt2->z * v11;
  v21 = v11 * pt2->x;
  v22 = v19 + ((pt1->y * v10) + v13);
  v23 = (pt1->z * v10) + v17;
  x = pt1->x;
  vOutput->y = v22;
  v25 = v20 + v23;
  vOutput->z = v25;
  v26 = v21 + ((x * v10) + v18);
  vOutput->x = v26;
  v27 = (pt2->y * 0.5) + ((pt1->y * 0.5) + v22);
  v28 = (pt2->z * 0.5) + ((pt1->z * 0.5) + v25);
  vOutput->x = (pt2->x * 0.5) + ((0.5 * pt1->x) + v26);
  vOutput->y = v27;
  vOutput->z = v28;
}


// Parabolic_Spline_NormalizeX  (line 3894, @0x00000000030e6bd0, libserver.so)
// calls: Spline_Normalize, Parabolic_Spline
void __fastcall Parabolic_Spline_NormalizeX(
        const Vector *const pt1,
        const Vector *const pt2,
        const Vector *const pt3,
        const Vector *const pt4,
        float t,
        Vector *const vOutput)
{
  Vector p1n; // [rsp+8h] [rbp-50h] BYREF
  Vector p4n; // [rsp+18h] [rbp-40h] BYREF

  Spline_Normalize(pt1, pt2, pt3, pt4, &p1n, &p4n);
  Parabolic_Spline(&p1n, pt2, pt3, &p4n, t, vOutput);
}


// CubicBasis0  (line 3914, @0x00000000030e6c30, libserver.so)
float __fastcall CubicBasis0(float a1, float t)
{
  return ((1.0 - a1) * (1.0 - a1)) * (1.0 - a1);
}


// CubicBasis1  (line 3919, @0x00000000030e6c50, libserver.so)
float __fastcall CubicBasis1(float a1, float t)
{
  return ((a1 * 3.0) * (1.0 - a1)) * (1.0 - a1);
}


// CubicBasis2  (line 3924, @0x00000000030e6c80, libserver.so)
float __fastcall CubicBasis2(float a1, float t)
{
  return ((3.0 * a1) * a1) * (1.0 - a1);
}


// CubicBasis3  (line 3929, @0x00000000030e6cb0, libserver.so)
float __fastcall CubicBasis3(float a1, float t)
{
  return (a1 * a1) * a1;
}


// RangeCompressor  (line 3938, @0x00000000030e6cd0, libserver.so)  // inlines: Hermite_Spline
// callers: CBaseAnimatingController::EdgeLimitPoseParameter
float __fastcall RangeCompressor(float a1, float flValue, float flMin, float flMax, float flBase)
{
  float v5; // xmm4_4
  __m128 v6; // xmm0
  float v7; // xmm3_4
  __m128d v8; // xmm3
  float v9; // xmm6_4
  __m128 v10; // xmm6
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v14; // xmm8_4
  float v15; // xmm0_4
  float v16; // xmm7_4

  v5 = fminf(flMin, fmaxf(flValue, flMax));
  v6.m128_f32[0] = ((((a1 + v5) - flValue) / (flMin - flValue)) + (((a1 + v5) - flValue) / (flMin - flValue))) - 1.0;
  v7 = fabs(v6.m128_f32[0]);
  if ( v7 <= 0.75 )
  {
    v11 = (v6.m128_f32[0] + 1.0) * 0.5;
    v12 = 1.0 - v11;
  }
  else
  {
    v8.m128d_f64[1] = v7;
    v8.m128d_f64[0] = (v7 - 0.75) / 1.25;
    v9 = _mm_movedup_pd(v8).m128d_f64[0];
    if ( v9 < 1.0 )
    {
      v14 = v9 * (v9 * v9);
      if ( v6.m128_f32[0] <= 0.0 )
      {
        v16 = (((v9 * (v9 * v9)) + v14) - (3.0 * (v9 * v9))) + 1.0;
        v11 = (1.0
             - ((((1.0 - v16) + (v16 * 0.75)) + (((v14 - ((v9 * v9) + (v9 * v9))) + v9) * 0.75))
              + ((v14 - (v9 * v9)) * 0.0)))
            * 0.5;
      }
      else
      {
        v15 = ((v14 + v14) - (3.0 * (v9 * v9))) + 1.0;
        v11 = (((((1.0 - v15) + (v15 * 0.75)) + (((v14 - ((v9 * v9) + (v9 * v9))) + v9) * 0.75))
              + ((v14 - (v9 * v9)) * 0.0))
             + 1.0)
            * 0.5;
      }
      v12 = 1.0 - v11;
    }
    else
    {
      v10 = _mm_cmplt_ss(0LL, v6);
      LODWORD(v11) = v10.m128_i32[0] & 0x3F800000;
      v12 = _mm_andnot_ps(v10, 0x3F800000u).m128_f32[0];
    }
  }
  return ((v12 * flValue) + (v11 * flMin)) - v5;
}


// TransformAABB  (line 3986, @0x00000000030e6ed0, libserver.so)  // inlines: DotProductAbs, FloatMakePositive, VectorAdd, VectorSubtract, VectorTransform, operator*=
// calls: VectorTransform
// callers: CEnvSky::UpdateSceneObjects, CPhysicsGameSystem::CreateDebugRenderBuffers, CBaseAnimating::ComputeHitboxSurroundingBox, CBaseAnimating::ComputeEntitySpaceHitboxSurroundingBox, CSkeletonInstance::GetRenderBoundsWorldSpace, CSkeletonInstance::GetPoseSpaceHitboxBounds, CSkeletonInstance::GetWorldSpaceHitboxBounds, CSkeletonInstance::SweepShapeAgainstHitboxes, CSceneAnimatableObject::Init, CCollisionProperty::CollisionAABBToWorldAABB, CDOTAFogOfWarSystem::ComputeFOWBoundsForSpawnGroup, CNavVolumeMarkupVolume::ParamsChanged (13 total)
void __fastcall TransformAABB(
        const matrix3x4_t *const transform,
        const Vector *const vecMinsIn,
        const Vector *const vecMaxsIn,
        Vector *const vecMinsOut,
        Vector *const vecMaxsOut)
{
  float x; // xmm1_4
  float y; // xmm5_4
  float z; // xmm4_4
  vec_t v11; // xmm0_4
  vec_t v12; // xmm3_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  vec_t v16; // xmm0_4
  float v17; // xmm4_4
  vec_t v18; // xmm3_4
  vec_t v19; // xmm6_4
  vec_t v20; // xmm1_4
  float v21; // [rsp+4h] [rbp-4Ch]
  float v22; // [rsp+8h] [rbp-48h]
  float v23; // [rsp+Ch] [rbp-44h]
  Vector localCenter; // [rsp+10h] [rbp-40h] BYREF
  Vector worldCenter; // [rsp+20h] [rbp-30h] BYREF

  x = vecMaxsIn->x;
  y = vecMaxsIn->y;
  z = vecMaxsIn->z;
  v11 = (vecMinsIn->z + z) * 0.5;
  v12 = (vecMinsIn->x + vecMaxsIn->x) * 0.5;
  localCenter.y = (vecMinsIn->y + y) * 0.5;
  localCenter.z = v11;
  localCenter.x = v12;
  v22 = y - localCenter.y;
  v23 = z - v11;
  v21 = x - v12;
  VectorTransform(&localCenter.x, transform, &worldCenter.x);
  v13 = (fabs(transform->m_flMatVal[0][0] * v21) + fabs(transform->m_flMatVal[0][1] * v22))
      + fabs(transform->m_flMatVal[0][2] * v23);
  v14 = (fabs(transform->m_flMatVal[1][0] * v21) + fabs(transform->m_flMatVal[1][1] * v22))
      + fabs(transform->m_flMatVal[1][2] * v23);
  v15 = (fabs(v21 * transform->m_flMatVal[2][0]) + fabs(v22 * transform->m_flMatVal[2][1]))
      + fabs(v23 * transform->m_flMatVal[2][2]);
  v16 = worldCenter.x - v13;
  v17 = worldCenter.y;
  v18 = v13 + worldCenter.x;
  vecMinsOut->x = v16;
  vecMinsOut->y = v17 - v14;
  v19 = worldCenter.z - v15;
  v20 = v15 + worldCenter.z;
  vecMinsOut->z = v19;
  vecMaxsOut->x = v18;
  vecMaxsOut->y = v14 + v17;
  vecMaxsOut->z = v20;
}


// ITransformAABB  (line 4011, @0x00000000030e7050, libserver.so)  // inlines: FloatMakePositive, VectorAdd, VectorITransform, VectorSubtract, operator*=
// calls: VectorITransform
void __fastcall ITransformAABB(
        const matrix3x4_t *const transform,
        const Vector *const vecMinsIn,
        const Vector *const vecMaxsIn,
        Vector *const vecMinsOut,
        Vector *const vecMaxsOut)
{
  float x; // xmm1_4
  float y; // xmm5_4
  float z; // xmm4_4
  vec_t v11; // xmm0_4
  vec_t v12; // xmm3_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  vec_t v16; // xmm0_4
  float v17; // xmm4_4
  vec_t v18; // xmm3_4
  vec_t v19; // xmm6_4
  vec_t v20; // xmm1_4
  float v21; // [rsp+4h] [rbp-4Ch]
  float v22; // [rsp+8h] [rbp-48h]
  float v23; // [rsp+Ch] [rbp-44h]
  Vector worldCenter; // [rsp+10h] [rbp-40h] BYREF
  Vector localCenter; // [rsp+20h] [rbp-30h] BYREF

  x = vecMaxsIn->x;
  y = vecMaxsIn->y;
  z = vecMaxsIn->z;
  v11 = (vecMinsIn->z + z) * 0.5;
  v12 = (vecMinsIn->x + vecMaxsIn->x) * 0.5;
  worldCenter.y = (vecMinsIn->y + y) * 0.5;
  worldCenter.z = v11;
  worldCenter.x = v12;
  v22 = y - worldCenter.y;
  v23 = z - v11;
  v21 = x - v12;
  VectorITransform(&worldCenter.x, transform, &localCenter.x);
  v13 = (fabs(transform->m_flMatVal[0][0] * v21) + fabs(transform->m_flMatVal[1][0] * v22))
      + fabs(transform->m_flMatVal[2][0] * v23);
  v14 = (fabs(transform->m_flMatVal[0][1] * v21) + fabs(transform->m_flMatVal[1][1] * v22))
      + fabs(transform->m_flMatVal[2][1] * v23);
  v15 = (fabs(v21 * transform->m_flMatVal[0][2]) + fabs(v22 * transform->m_flMatVal[1][2]))
      + fabs(v23 * transform->m_flMatVal[2][2]);
  v16 = localCenter.x - v13;
  v17 = localCenter.y;
  v18 = v13 + localCenter.x;
  vecMinsOut->x = v16;
  vecMinsOut->y = v17 - v14;
  v19 = localCenter.z - v15;
  v20 = v15 + localCenter.z;
  vecMinsOut->z = v19;
  vecMaxsOut->x = v18;
  vecMaxsOut->y = v14 + v17;
  vecMaxsOut->z = v20;
}


// RotateAABB  (line 4043, @0x00000000030e71d0, libserver.so)  // inlines: DotProductAbs, FloatMakePositive, VectorAdd, VectorRotate, VectorSubtract, operator*=
// calls: VectorRotate
// callers: CCollisionProperty::ComputeRotationExpandedSequenceBounds, CBaseDoor::Spawn
void __fastcall RotateAABB(
        const matrix3x4_t *const transform,
        const Vector *const vecMinsIn,
        const Vector *const vecMaxsIn,
        Vector *const vecMinsOut,
        Vector *const vecMaxsOut)
{
  float x; // xmm1_4
  float y; // xmm5_4
  float z; // xmm4_4
  vec_t v11; // xmm0_4
  vec_t v12; // xmm3_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  vec_t v16; // xmm0_4
  float v17; // xmm4_4
  vec_t v18; // xmm3_4
  vec_t v19; // xmm6_4
  vec_t v20; // xmm1_4
  float v21; // [rsp+4h] [rbp-4Ch]
  float v22; // [rsp+8h] [rbp-48h]
  float v23; // [rsp+Ch] [rbp-44h]
  Vector localCenter; // [rsp+10h] [rbp-40h] BYREF
  Vector newCenter; // [rsp+20h] [rbp-30h] BYREF

  x = vecMaxsIn->x;
  y = vecMaxsIn->y;
  z = vecMaxsIn->z;
  v11 = (vecMinsIn->z + z) * 0.5;
  v12 = (vecMinsIn->x + vecMaxsIn->x) * 0.5;
  localCenter.y = (vecMinsIn->y + y) * 0.5;
  localCenter.z = v11;
  localCenter.x = v12;
  v22 = y - localCenter.y;
  v23 = z - v11;
  v21 = x - v12;
  VectorRotate(&localCenter.x, transform, &newCenter.x);
  v13 = (fabs(transform->m_flMatVal[0][0] * v21) + fabs(transform->m_flMatVal[0][1] * v22))
      + fabs(transform->m_flMatVal[0][2] * v23);
  v14 = (fabs(transform->m_flMatVal[1][0] * v21) + fabs(transform->m_flMatVal[1][1] * v22))
      + fabs(transform->m_flMatVal[1][2] * v23);
  v15 = (fabs(v21 * transform->m_flMatVal[2][0]) + fabs(v22 * transform->m_flMatVal[2][1]))
      + fabs(v23 * transform->m_flMatVal[2][2]);
  v16 = newCenter.x - v13;
  v17 = newCenter.y;
  v18 = v13 + newCenter.x;
  vecMinsOut->x = v16;
  vecMinsOut->y = v17 - v14;
  v19 = newCenter.z - v15;
  v20 = v15 + newCenter.z;
  vecMinsOut->z = v19;
  vecMaxsOut->x = v18;
  vecMaxsOut->y = v14 + v17;
  vecMaxsOut->z = v20;
}


// IRotateAABB  (line 4068, @0x00000000030e7350, libserver.so)  // inlines: FloatMakePositive, VectorAdd, VectorIRotate, VectorSubtract, operator*=
// calls: VectorIRotate
void __fastcall IRotateAABB(
        const matrix3x4_t *const transform,
        const Vector *const vecMinsIn,
        const Vector *const vecMaxsIn,
        Vector *const vecMinsOut,
        Vector *const vecMaxsOut)
{
  float x; // xmm1_4
  float y; // xmm5_4
  float z; // xmm4_4
  vec_t v11; // xmm0_4
  vec_t v12; // xmm3_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  vec_t v16; // xmm0_4
  float v17; // xmm4_4
  vec_t v18; // xmm3_4
  vec_t v19; // xmm6_4
  vec_t v20; // xmm1_4
  float v21; // [rsp+4h] [rbp-4Ch]
  float v22; // [rsp+8h] [rbp-48h]
  float v23; // [rsp+Ch] [rbp-44h]
  Vector oldCenter; // [rsp+10h] [rbp-40h] BYREF
  Vector newCenter; // [rsp+20h] [rbp-30h] BYREF

  x = vecMaxsIn->x;
  y = vecMaxsIn->y;
  z = vecMaxsIn->z;
  v11 = (vecMinsIn->z + z) * 0.5;
  v12 = (vecMinsIn->x + vecMaxsIn->x) * 0.5;
  oldCenter.y = (vecMinsIn->y + y) * 0.5;
  oldCenter.z = v11;
  oldCenter.x = v12;
  v22 = y - oldCenter.y;
  v23 = z - v11;
  v21 = x - v12;
  VectorIRotate(&oldCenter.x, transform, &newCenter.x);
  v13 = (fabs(transform->m_flMatVal[0][0] * v21) + fabs(transform->m_flMatVal[1][0] * v22))
      + fabs(transform->m_flMatVal[2][0] * v23);
  v14 = (fabs(transform->m_flMatVal[0][1] * v21) + fabs(transform->m_flMatVal[1][1] * v22))
      + fabs(transform->m_flMatVal[2][1] * v23);
  v15 = (fabs(v21 * transform->m_flMatVal[0][2]) + fabs(v22 * transform->m_flMatVal[1][2]))
      + fabs(v23 * transform->m_flMatVal[2][2]);
  v16 = newCenter.x - v13;
  v17 = newCenter.y;
  v18 = v13 + newCenter.x;
  vecMinsOut->x = v16;
  vecMinsOut->y = v17 - v14;
  v19 = newCenter.z - v15;
  v20 = v15 + newCenter.z;
  vecMinsOut->z = v19;
  vecMaxsOut->x = v18;
  vecMaxsOut->y = v14 + v17;
  vecMaxsOut->z = v20;
}


// CalcSqrDistanceToAABB  (line 4096, @0x00000000030e74d0, libserver.so)
// callers: CSoundscapeSystem::CacheClusterInfoForSpawnGroup, CalcDistanceToAABB
float __fastcall CalcSqrDistanceToAABB(const Vector *const mins, const Vector *const maxs, const Vector *const vPoint)
{
  float x; // xmm1_4
  float result; // xmm0_4
  float y; // xmm1_4
  float v6; // xmm2_4
  float z; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm2_4
  float v10; // xmm2_4
  float v11; // xmm1_4

  x = vPoint->x;
  if ( mins->x <= vPoint->x )
  {
    if ( x <= maxs->x )
      result = 0.0;
    else
      result = ((x - maxs->x) * (x - maxs->x)) + 0.0;
  }
  else
  {
    result = ((mins->x - x) * (mins->x - x)) + 0.0;
  }
  y = vPoint->y;
  v6 = mins->y;
  if ( v6 > y )
  {
    result = result + ((v6 - y) * (v6 - y));
    goto LABEL_5;
  }
  v10 = maxs->y;
  if ( y <= v10 )
  {
LABEL_5:
    z = vPoint->z;
    v8 = mins->z;
    if ( v8 <= z )
      goto LABEL_6;
    return result + ((v8 - z) * (v8 - z));
  }
  v11 = y - v10;
  v8 = mins->z;
  result = result + (v11 * v11);
  z = vPoint->z;
  if ( v8 > z )
    return result + ((v8 - z) * (v8 - z));
LABEL_6:
  v9 = maxs->z;
  if ( z > v9 )
    return result + ((z - v9) * (z - v9));
  return result;
}


// CalcDistanceToAABB  (line 4137, @0x00000000030e75b0, libserver.so)
// calls: CalcSqrDistanceToAABB, sqrtf
float __fastcall CalcDistanceToAABB(const Vector *const mins, const Vector *const maxs, const Vector *const vPoint)
{
  return fsqrt(CalcSqrDistanceToAABB(mins, maxs, vPoint));
}


// CalcClosestPointOnAABB  (line 4143, @0x00000000030e75e0, libserver.so)
// callers: CCollisionProperty::CalcNearestPoint, CCollisionProperty::CalcDistanceFromPoint, CCollisionProperty::CalcSqrDistanceFromPoint, CNavAreaExtended::ComputeVisibility
void __fastcall CalcClosestPointOnAABB(
        const Vector *const mins,
        const Vector *const maxs,
        const Vector *const vPoint,
        Vector *const closestOut)
{
  float x; // xmm0_4
  float y; // xmm1_4
  float v6; // xmm0_4
  float z; // xmm1_4
  float v8; // xmm0_4

  x = maxs->x;
  if ( vPoint->x <= maxs->x )
    x = fmaxf(mins->x, vPoint->x);
  closestOut->x = x;
  y = vPoint->y;
  v6 = maxs->y;
  if ( y <= v6 )
    v6 = fmaxf(mins->y, y);
  closestOut->y = v6;
  z = vPoint->z;
  v8 = maxs->z;
  if ( z <= v8 )
    v8 = fmaxf(mins->z, z);
  closestOut->z = v8;
}


// CalcSqrDistAndClosestPointOnAABB  (line 4150, @0x00000000030e7640, libserver.so)  // inlines: operator[]
void __fastcall CalcSqrDistAndClosestPointOnAABB(
        const Vector *const mins,
        const Vector *const maxs,
        const Vector *const vPoint,
        Vector *const closestOut,
        float *const distSqrOut)
{
  __int64 v5; // rax
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm0_4

  v5 = 0;
  *distSqrOut = 0.0;
  do
  {
    v6 = *(&vPoint->x + v5);
    v7 = *(&mins->x + v5);
    if ( v7 <= v6 )
    {
      v8 = *(&maxs->x + v5);
      if ( v6 <= v8 )
      {
        *(&closestOut->x + v5) = v6;
      }
      else
      {
        *(&closestOut->x + v5) = v8;
        *distSqrOut = ((v8 - *(&maxs->x + v5)) * (v8 - *(&maxs->x + v5))) + *distSqrOut;
      }
    }
    else
    {
      *(&closestOut->x + v5) = v7;
      *distSqrOut = ((v7 - *(&mins->x + v5)) * (v7 - *(&mins->x + v5))) + *distSqrOut;
    }
    v5 += 4;
  }
  while ( v5 != 12 );
}


// CalcClosestPointToLineT  (line 4175, @0x00000000030e76b0, libserver.so)  // inlines: Dot, DotProduct, VectorSubtract
// callers: CalcClosestPointOnLine, CalcClosestPointOnLineSegment
float __fastcall CalcClosestPointToLineT(
        const Vector *const P,
        const Vector *const vLineA,
        const Vector *const vLineB,
        Vector *const vDir)
{
  float v4; // xmm3_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm4_4

  v4 = vLineB->x - vLineA->x;
  vDir->x = v4;
  v5 = vLineB->y - vLineA->y;
  vDir->y = v5;
  v6 = vLineB->z - vLineA->z;
  vDir->z = v6;
  v7 = ((v4 * v4) + (v5 * v5)) + (v6 * v6);
  if ( v7 < 0.0000099999997 )
    return 0.0;
  else
    return ((((P->x * v4) + (P->y * v5)) + (P->z * v6)) - (((v4 * vLineA->x) + (v5 * vLineA->y)) + (v6 * vLineA->z)))
         / v7;
}


// CalcClosestPointOnLine  (line 4193, @0x00000000030e7760, libserver.so)  // inlines: MulAdd
// calls: CalcClosestPointToLineT
// callers: CPhysMotor::Activate, CPointValueRemapper::UpdateInternal, CDOTA_Modifier_Juggernaut_Omnislash::OnIntervalThink, CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker::OnDestroy, PlayerLocomotion::Approach, CalcDistanceToLine, CalcDistanceSqrToLine
void __fastcall CalcClosestPointOnLine(
        const Vector *const P,
        const Vector *const vLineA,
        const Vector *const vLineB,
        Vector *const vClosest,
        float *outT)
{
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  Vector vDir; // [rsp+0h] [rbp-30h] BYREF

  v8 = CalcClosestPointToLineT(P, vLineA, vLineB, &vDir);
  if ( outT != 0 )
    *outT = v8;
  vClosest->x = (vDir.x * v8) + vLineA->x;
  v9 = vDir.y * v8;
  v10 = v8 * vDir.z;
  vClosest->y = v9 + vLineA->y;
  vClosest->z = v10 + vLineA->z;
}


// CalcDistanceToLine  (line 4203, @0x00000000030e77d0, libserver.so)  // inlines: DistTo, FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CalcClosestPointOnLine
// callers: CDOTA_ProjectileManager::FrameUpdatePostEntityThink, CDOTA_Modifier_Jakiro_IcePath_Thinker::OnIntervalThink
float __fastcall CalcDistanceToLine(
        const Vector *const P,
        const Vector *const vLineA,
        const Vector *const vLineB,
        float *outT)
{
  Vector vClosest; // [rsp+10h] [rbp-20h] BYREF

  CalcClosestPointOnLine(P, vLineA, vLineB, &vClosest, outT);
  return fsqrt(
           (((P->x - vClosest.x) * (P->x - vClosest.x)) + ((P->y - vClosest.y) * (P->y - vClosest.y)))
         + ((P->z - vClosest.z) * (P->z - vClosest.z)));
}


// CalcDistanceSqrToLine  (line 4211, @0x00000000030e7830, libserver.so)  // inlines: DistToSqr, LengthSqr
// calls: CalcClosestPointOnLine
// callers: InsideTriangle
float __fastcall CalcDistanceSqrToLine(
        const Vector *const P,
        const Vector *const vLineA,
        const Vector *const vLineB,
        float *outT)
{
  Vector vClosest; // [rsp+0h] [rbp-20h] BYREF

  CalcClosestPointOnLine(P, vLineA, vLineB, &vClosest, outT);
  return (((P->x - vClosest.x) * (P->x - vClosest.x)) + ((P->y - vClosest.y) * (P->y - vClosest.y)))
       + ((P->z - vClosest.z) * (P->z - vClosest.z));
}


// CalcClosestPointOnLineSegment  (line 4219, @0x00000000030e7880, libserver.so)  // inlines: MulAdd
// calls: CalcClosestPointToLineT
// callers: CRagdollMagnet::GetForceVector, IntersectRayWithAACylinder, CNavAreaExtended::GetLightIntensity, CPathData::GetClosestPosition, CPathData::MoveCursorToClosestPosition, NextBotManager::GetBotUnderCrosshair, CalcDistanceToLineSegment, CalcDistanceSqrToLineSegment, CNavOrientedPortal::CalcClosestPoint, CNavOrientedPortal::CalcClosestPointToRay, CNavOrientedPortal::CalcClosestPointWithWindowedOffset
void __fastcall CalcClosestPointOnLineSegment(
        const Vector *const P,
        const Vector *const vLineA,
        const Vector *const vLineB,
        Vector *const vClosest,
        float *outT)
{
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  Vector vDir; // [rsp+0h] [rbp-30h] BYREF

  v8 = CalcClosestPointToLineT(P, vLineA, vLineB, &vDir);
  v9 = 1.0;
  if ( v8 <= 1.0 )
    v9 = fmaxf(0.0, v8);
  if ( outT != 0 )
    *outT = v9;
  vClosest->x = (vDir.x * v9) + vLineA->x;
  v10 = v9 * vDir.z;
  vClosest->y = (vDir.y * v9) + vLineA->y;
  vClosest->z = v10 + vLineA->z;
}


// CalcDistanceToLineSegment  (line 4232, @0x00000000030e7910, libserver.so)  // inlines: DistTo, FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CalcClosestPointOnLineSegment
// callers: CDOTA_Bot_AbilityUsage_Pudge_MeatHook::IsHookPathClear
float __fastcall CalcDistanceToLineSegment(
        const Vector *const P,
        const Vector *const vLineA,
        const Vector *const vLineB,
        float *outT)
{
  Vector vClosest; // [rsp+10h] [rbp-20h] BYREF

  CalcClosestPointOnLineSegment(P, vLineA, vLineB, &vClosest, outT);
  return fsqrt(
           (((P->x - vClosest.x) * (P->x - vClosest.x)) + ((P->y - vClosest.y) * (P->y - vClosest.y)))
         + ((P->z - vClosest.z) * (P->z - vClosest.z)));
}


// CalcDistanceSqrToLineSegment  (line 4240, @0x00000000030e7970, libserver.so)  // inlines: DistToSqr, LengthSqr
// calls: CalcClosestPointOnLineSegment
// callers: CDOTAGamerules::CategorizePosition
float __fastcall CalcDistanceSqrToLineSegment(
        const Vector *const P,
        const Vector *const vLineA,
        const Vector *const vLineB,
        float *outT)
{
  Vector vClosest; // [rsp+0h] [rbp-20h] BYREF

  CalcClosestPointOnLineSegment(P, vLineA, vLineB, &vClosest, outT);
  return (((P->x - vClosest.x) * (P->x - vClosest.x)) + ((P->y - vClosest.y) * (P->y - vClosest.y)))
       + ((P->z - vClosest.z) * (P->z - vClosest.z));
}


// CalcClosestPointToLineT2D  (line 4248, @0x00000000030e79c0, libserver.so)  // inlines: Dot, DotProduct2D, Vector2DSubtract
// callers: CalcClosestPointOnLine2D, CalcClosestPointOnLineSegment2D
float __fastcall CalcClosestPointToLineT2D(
        const Vector2D *const P,
        const Vector2D *const vLineA,
        const Vector2D *const vLineB,
        Vector2D *const vDir)
{
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm3_4

  v4 = vLineB->x - vLineA->x;
  vDir->x = v4;
  v5 = vLineB->y - vLineA->y;
  vDir->y = v5;
  v6 = (v4 * v4) + (v5 * v5);
  if ( v6 < 0.0000099999997 )
    return 0.0;
  else
    return (((P->x * v4) + (P->y * v5)) - ((v4 * vLineA->x) + (v5 * vLineA->y))) / v6;
}


// CalcClosestPointOnLine2D  (line 4266, @0x00000000030e7a40, libserver.so)  // inlines: MulAdd
// calls: CalcClosestPointToLineT2D
// callers: CalcDistanceToLine2D, CalcDistanceSqrToLine2D
void __fastcall CalcClosestPointOnLine2D(
        const Vector2D *const P,
        const Vector2D *const vLineA,
        const Vector2D *const vLineB,
        Vector2D *const vClosest,
        float *outT)
{
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  Vector2D vDir; // [rsp+0h] [rbp-30h] BYREF

  v8 = CalcClosestPointToLineT2D(P, vLineA, vLineB, &vDir);
  if ( outT != 0 )
    *outT = v8;
  v9 = vDir.x * v8;
  v10 = v8 * vDir.y;
  vClosest->x = v9 + vLineA->x;
  vClosest->y = v10 + vLineA->y;
}


// CalcDistanceToLine2D  (line 4275, @0x00000000030e7aa0, libserver.so)  // inlines: DistTo, FastSqrt, Length, Vector2DLength, Vector2DSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CalcClosestPointOnLine2D
// callers: CNavOrientedPortal::TestLineToPortalXY
float __fastcall CalcDistanceToLine2D(
        const Vector2D *const P,
        const Vector2D *const vLineA,
        const Vector2D *const vLineB,
        float *outT)
{
  Vector2D vClosest; // [rsp+10h] [rbp-20h] BYREF

  CalcClosestPointOnLine2D(P, vLineA, vLineB, &vClosest, outT);
  return fsqrt(((P->x - vClosest.x) * (P->x - vClosest.x)) + ((P->y - vClosest.y) * (P->y - vClosest.y)));
}


// CalcDistanceSqrToLine2D  (line 4283, @0x00000000030e7af0, libserver.so)  // inlines: DistToSqr, LengthSqr, Vector2DSubtract
// calls: CalcClosestPointOnLine2D
float __fastcall CalcDistanceSqrToLine2D(
        const Vector2D *const P,
        const Vector2D *const vLineA,
        const Vector2D *const vLineB,
        float *outT)
{
  Vector2D vClosest; // [rsp+0h] [rbp-20h] BYREF

  CalcClosestPointOnLine2D(P, vLineA, vLineB, &vClosest, outT);
  return ((P->x - vClosest.x) * (P->x - vClosest.x)) + ((P->y - vClosest.y) * (P->y - vClosest.y));
}


// CalcClosestPointOnLineSegment2D  (line 4291, @0x00000000030e7b30, libserver.so)  // inlines: MulAdd
// calls: CalcClosestPointToLineT2D
// callers: CalcDistanceToLineSegment2D, CalcDistanceSqrToLineSegment2D
void __fastcall CalcClosestPointOnLineSegment2D(
        const Vector2D *const P,
        const Vector2D *const vLineA,
        const Vector2D *const vLineB,
        Vector2D *const vClosest,
        float *outT)
{
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  Vector2D vDir; // [rsp+0h] [rbp-30h] BYREF

  v8 = CalcClosestPointToLineT2D(P, vLineA, vLineB, &vDir);
  v9 = 1.0;
  if ( v8 <= 1.0 )
    v9 = fmaxf(0.0, v8);
  if ( outT != 0 )
    *outT = v9;
  v10 = v9 * vDir.y;
  vClosest->x = (vDir.x * v9) + vLineA->x;
  vClosest->y = v10 + vLineA->y;
}


// CalcDistanceToLineSegment2D  (line 4303, @0x00000000030e7bb0, libserver.so)  // inlines: DistTo, FastSqrt, Length, Vector2DLength, Vector2DSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CalcClosestPointOnLineSegment2D
// callers: Script_CalcDistanceToLineSegment2D, CDOTA_ActionRunner::SelectActionTargets, CDOTA_Modifier_TutorialNPCBlocker::GetModifierMoveSpeed_Limit, CDOTA_Modifier_Nian_Tail_Swipe_Wall::OnIntervalThink, CDOTA_Modifier_DarkSeer_WallOfReplica::OnIntervalThink, CDOTA_Modifier_Wisp_Tether::OnIntervalThink
float __fastcall CalcDistanceToLineSegment2D(
        const Vector2D *const P,
        const Vector2D *const vLineA,
        const Vector2D *const vLineB,
        float *outT)
{
  Vector2D vClosest; // [rsp+10h] [rbp-20h] BYREF

  CalcClosestPointOnLineSegment2D(P, vLineA, vLineB, &vClosest, outT);
  return fsqrt(((P->x - vClosest.x) * (P->x - vClosest.x)) + ((P->y - vClosest.y) * (P->y - vClosest.y)));
}


// CalcDistanceSqrToLineSegment2D  (line 4311, @0x00000000030e7c00, libserver.so)  // inlines: DistToSqr, LengthSqr, Vector2DSubtract
// calls: CalcClosestPointOnLineSegment2D
float __fastcall CalcDistanceSqrToLineSegment2D(
        const Vector2D *const P,
        const Vector2D *const vLineA,
        const Vector2D *const vLineB,
        float *outT)
{
  Vector2D vClosest; // [rsp+0h] [rbp-20h] BYREF

  CalcClosestPointOnLineSegment2D(P, vLineA, vLineB, &vClosest, outT);
  return ((P->x - vClosest.x) * (P->x - vClosest.x)) + ((P->y - vClosest.y) * (P->y - vClosest.y));
}


// CalcDistanceToPlane  (line 4319, @0x00000000030e7c40, libserver.so)  // inlines: DotProduct, Normalized, VectorSubtract, operator-
// calls: VectorNormalize
// callers: CPointValueRemapper::UpdateInternal
float __fastcall CalcDistanceToPlane(
        const Vector *const vecPoint,
        const Vector *const vecPlaneNormal,
        const Vector *const vecAnyPointOnThePlane)
{
  Vector vec; // [rsp+0h] [rbp-20h] BYREF

  vec = *vecPlaneNormal;
  VectorNormalize(&vec);
  return fabs(
           (((vecPoint->x - vecAnyPointOnThePlane->x) * vec.x) + ((vecPoint->y - vecAnyPointOnThePlane->y) * vec.y))
         + ((vecPoint->z - vecAnyPointOnThePlane->z) * vec.z));
}


// CalcFarthestDistanceFromRayToPointSet  (line 4327, @0x00000000030e7cc0, libserver.so)  // inlines: DotProduct, VectorSubtract, operator-
float __fastcall CalcFarthestDistanceFromRayToPointSet(
        const Vector *const vRayOrigin,
        const Vector *const vRayDir,
        const Vector *pPoints,
        int nPoints)
{
  const Vector *v4; // rax
  float result; // xmm0_4
  float x; // xmm1_4

  if ( nPoints <= 0 )
    return -3.4028235e38;
  v4 = &pPoints[(nPoints - 1) + 1];
  result = -3.4028235e38;
  do
  {
    x = pPoints->x;
    ++pPoints;
    result = fmaxf(
               (((x - vRayOrigin->x) * vRayDir->x) + ((pPoints[-1].y - vRayOrigin->y) * vRayDir->y))
             + ((pPoints[-1].z - vRayOrigin->z) * vRayDir->z),
               result);
  }
  while ( pPoints != v4 );
  return result;
}


// CalcFarthestDistanceFromAABBToAABB  (line 4339, @0x00000000030e7d50, libserver.so)  // inlines: FastSqrt, Length, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, fpmax
float __fastcall CalcFarthestDistanceFromAABBToAABB(
        const Vector *const vMins0,
        const Vector *const vMaxs0,
        const Vector *const vMins1,
        const Vector *const vMaxs1)
{
  float v4; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm1_4

  v4 = fmaxf(vMaxs1->x - vMins0->x, vMaxs0->x - vMins1->x);
  v5 = fmaxf(vMaxs1->y - vMins0->y, vMaxs0->y - vMins1->y);
  v6 = fmaxf(vMaxs1->z - vMins0->z, vMaxs0->z - vMins1->z);
  return fsqrt(((v4 * v4) + (v5 * v5)) + (v6 * v6));
}


// CalcLineToLineIntersectionSegment  (line 4364, @0x00000000030e7dc0, libserver.so)
bool __fastcall CalcLineToLineIntersectionSegment(
        const Vector *const pt1,
        const Vector *const pt2,
        const Vector *const pt3,
        const Vector *const pt4,
        Vector *s1,
        Vector *s2,
        float *t1,
        float *t2)
{
  float v8; // xmm1_4
  float y; // xmm12_4
  float v10; // xmm11_4
  float v11; // xmm3_4
  float v12; // xmm5_4
  float x; // xmm14_4
  bool result; // al
  float v15; // xmm2_4
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm4_4
  float v19; // xmm8_4
  float v20; // xmm0_4
  float v21; // xmm14_4
  float v22; // xmm12_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  float z; // [rsp+0h] [rbp-8h]
  float v26; // [rsp+4h] [rbp-4h]

  v8 = pt4->x - pt3->x;
  y = pt3->y;
  z = pt1->z;
  v10 = pt3->z;
  v26 = pt1->y;
  v11 = pt4->y - y;
  v12 = pt4->z - v10;
  x = pt1->x;
  if ( fabs(v8) >= 0.000001 || fabs(v11) >= 0.000001 || (result = 0, fabs(v12) >= 0.000001) )
  {
    v15 = pt2->x - x;
    v16 = pt2->y - v26;
    v17 = pt2->z - z;
    if ( fabs(v15) >= 0.000001 || fabs(v16) >= 0.000001 || (result = 0, fabs(v17) >= 0.000001) )
    {
      result = 0;
      v18 = ((v8 * v15) + (v11 * v16)) + (v12 * v17);
      v19 = ((v8 * v8) + (v11 * v11)) + (v12 * v12);
      v20 = ((((v15 * v15) + (v16 * v16)) + (v17 * v17)) * v19) - (v18 * v18);
      if ( fabs(v20) >= 0.000001 )
      {
        v21 = x - pt3->x;
        result = s1 != 0 && s2 != 0;
        v22 = v26 - y;
        v23 = ((v21 * v8) + (v22 * v11)) + ((z - v10) * v12);
        v24 = ((v23 * v18) - ((((v21 * v15) + (v22 * v16)) + ((z - v10) * v17)) * v19)) / v20;
        *t1 = v24;
        *t2 = ((v18 * v24) + v23) / v19;
        if ( result )
        {
          s1->x = (v15 * *t1) + pt1->x;
          s1->y = (v16 * *t1) + pt1->y;
          s1->z = (v17 * *t1) + pt1->z;
          s2->x = (v8 * *t2) + pt3->x;
          s2->y = (v11 * *t2) + pt3->y;
          s2->z = (v12 * *t2) + pt3->z;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}


// SetSIMDLEVEL  (line 4446, @0x00000000030e8040, libserver.so)
// globals: g_nCPUSIMDLevel
void __fastcall SetSIMDLEVEL(ESIMDLevel n)
{
  g_nCPUSIMDLevel = n;
}


// MathLib_Init  (line 4451, @0x00000000030e8050, libserver.so)  // inlines: LeafCodeInfo_t, SetSIMDLEVEL, _mm_getcsr, _mm_setcsr
// calls: GetCPUInformation, CommandLine, SeedRandSIMD, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CGameConfiguration::Init, CSource2Server::Init, CTier1AppSystemDict::Init, _GLOBAL__sub_I_mathlib_base.cpp
// strings: "-sse2", "-sse3", "-sse4", "mathlib_base.cpp", "MathLib_Init", "SSE and SSE2 are required."
// globals: s_bMathlibInitialized, s_bMathlibInitializedGlobalConstructorOnly, g_nCPUSIMDLevel
void __cdecl MathLib_Init()
{
  __int64 CPUInformation; // rax
  char v1; // al
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  LeafCodeInfo_t v11; // [rsp+10h] [rbp-30h] BYREF

  if ( !s_bMathlibInitialized || s_bMathlibInitializedGlobalConstructorOnly )
  {
    CPUInformation = GetCPUInformation();
    if ( (*(CPUInformation + 6) & 0x10) == 0 || (*(CPUInformation + 6) & 0x20) == 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v11.m_szFile = "mathlib_base.cpp";
        v11.m_szFunction = "MathLib_Init";
        v11.m_nLine = 4471;
        LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v11, "SSE and SSE2 are required.");
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v7, v8, v5, v6, v9, v10) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
      JUMPOUT(0x30E81D2);
    }
    v1 = *(CPUInformation + 7);
    if ( (v1 & 2) != 0 )
      g_nCPUSIMDLevel = ESIMDLevel::SIMDLEVEL_SSE3;
    if ( (v1 & 0x10) != 0 )
      g_nCPUSIMDLevel = ESIMDLevel::SIMDLEVEL_SSE4;
    if ( (v1 & 0x20) != 0 )
      g_nCPUSIMDLevel = ESIMDLevel::SIMDLEVEL_SSE42;
    v2 = CommandLine();
    if ( (*(*v2 + 24LL))(v2, "-sse2", 0) != 0 )
      g_nCPUSIMDLevel = ESIMDLevel::SIMDLEVEL_SSE2;
    v3 = CommandLine();
    if ( (*(*v3 + 24LL))(v3, "-sse3", 0) != 0 )
      g_nCPUSIMDLevel = ESIMDLevel::SIMDLEVEL_SSE3;
    v4 = CommandLine();
    if ( (*(*v4 + 24LL))(v4, "-sse4", 0) != 0 )
      g_nCPUSIMDLevel = ESIMDLevel::SIMDLEVEL_SSE4;
    _mm_setcsr(_mm_getcsr() | 0x8040);
    s_bMathlibInitialized = 1;
    s_bMathlibInitializedGlobalConstructorOnly = 0;
    SeedRandSIMD(0x31415926u);
  }
}


// ApproachAngle  (line 4518, @0x00000000030e81e0, libserver.so)  // inlines: anglemod
// callers: CFuncTrackTrain::DoUpdateOrientation, PlayerBody::Upkeep
float __fastcall ApproachAngle(float a1, float target, float value, float speed)
{
  float v4; // xmm3_4
  float v5; // xmm0_4
  float v6; // xmm1_4

  v4 = (a1 * 182.04445) * 0.0054931641;
  v5 = (target * 182.04445) * 0.0054931641;
  v6 = v4 - v5;
  if ( value < 0.0 )
    value = -value;
  if ( v6 < -180.0 )
  {
    v6 = v6 + 360.0;
  }
  else if ( v6 > 180.0 )
  {
    v6 = v6 - 360.0;
    if ( v6 > value )
      return v5 + value;
LABEL_6:
    if ( -value <= v6 )
      return v4;
    else
      return v5 - value;
  }
  if ( v6 <= value )
    goto LABEL_6;
  return v5 + value;
}


// AngleDiff  (line 4546, @0x00000000030e82a0, libserver.so)
// calls: V_fmodf
// callers: CPointCommentaryNode::UpdateViewThink, CFuncRotating::UpdateSpeed, CFuncRotating::RotateMove, SharedVehicleViewSmoothing, CGridNavPath::Update, CDOTALocomotor::UpdateFacing, CDOTALocomotor::GetCastAngle, CDOTALocomotor::IsFacingLocation, CDOTALocomotor::ShouldTurnAnimate, CDOTA_Modifier_Phoenix_SunRay::UpdateHorizontalMotion, NextBotGroundLocomotion::FaceTowards, PlayerBody::Upkeep (13 total)
float __fastcall AngleDiff(float a1, float destAngle, float srcAngle)
{
  float result; // xmm0_4

  V_fmodf(a1 - destAngle, 360.0, srcAngle);
  if ( a1 <= destAngle )
  {
    if ( result <= -180.0 )
      return result + 360.0;
  }
  else if ( result >= 180.0 )
  {
    return result - 360.0;
  }
  return result;
}


// AngleDistance  (line 4565, @0x00000000030e8310, libserver.so)
// callers: CFuncTrackTrain::DoUpdateOrientation
float __fastcall AngleDistance(float a1, float next, float cur)
{
  float result; // xmm0_4

  result = a1 - next;
  if ( result <= -180.0 )
    return result + 360.0;
  if ( result > 180.0 )
    return result - 360.0;
  return result;
}


// AngleNormalize  (line 4578, @0x00000000030e8350, libserver.so)
// calls: V_fmodf
// callers: CBasePlayerAnimState::ConvergeAngles, CBasePlayerAnimState::ComputePoseParam_BodyYaw, CBasePlayerAnimState::Update, CBasePlayerAnimState::EstimateYaw, CBasePlayerAnimState::ComputePoseParam_MoveYaw, CBasePlayerAnimState::UpdateFootYaws, CPointCommentaryNode::UpdateViewThink, RemapAngleRange, CPropDoorRotating::CalculateOpenAngles, RemapViewAngles, PlayerBody::Upkeep
float __fastcall AngleNormalize(float a1, float angle, float a3)
{
  float result; // xmm0_4

  V_fmodf(a1, 360.0, a3);
  if ( result > 180.0 )
    result = result - 360.0;
  if ( result <= -180.0 )
    return result + 360.0;
  return result;
}


// AngleNormalizePositive  (line 4594, @0x00000000030e8390, libserver.so)
// calls: V_fmodf
// callers: CNormalizedAngle::Serialize
float __fastcall AngleNormalizePositive(float a1, float angle, float a3)
{
  float result; // xmm0_4

  V_fmodf(a1, 360.0, a3);
  if ( result < 0.0 )
    return result + 360.0;
  return result;
}


// AnglesAreEqual  (line 4607, @0x00000000030e83c0, libserver.so)
// calls: AngleDiff
// callers: CGameSceneNode::SetNodeToParentInternal, CGameSceneNode::SetNodeToWorldTransform, CGameSceneNode::WriteTransformValue
bool __fastcall AnglesAreEqual(float a1, float a, float b, float tolerance)
{
  return b > fabs(AngleDiff(a1, a, b));
}


// RotationDeltaAxisAngle  (line 4612, @0x00000000030e83f0, libserver.so)
// calls: AngleQuaternion, QuaternionScale, QuaternionMult, QuaternionNormalize, QuaternionAxisAngle
// callers: Script_RotationDeltaAsAngularVelocity, CBaseEntity::VPhysicsUpdatePusher, CalcBoneDerivatives
void __fastcall RotationDeltaAxisAngle(
        const QAngle *const srcAngles,
        const QAngle *const destAngles,
        Vector *const deltaAxis,
        float *const deltaAngle)
{
  float v7; // xmm1_4
  Quaternion srcQuat; // [rsp+0h] [rbp-70h] BYREF
  Quaternion destQuat; // [rsp+10h] [rbp-60h] BYREF
  Quaternion srcQuatInv; // [rsp+20h] [rbp-50h] BYREF
  Quaternion out; // [rsp+30h] [rbp-40h] BYREF

  AngleQuaternion(srcAngles, &srcQuat);
  AngleQuaternion(destAngles, &destQuat);
  QuaternionScale(&srcQuat, -1.0, v7, &srcQuatInv);
  QuaternionMult(&destQuat, &srcQuatInv, &out);
  QuaternionNormalize(&out);
  QuaternionAxisAngle(&out, deltaAxis, deltaAngle);
}


// RotationDelta  (line 4624, @0x00000000030e8480, libserver.so)  // inlines: operator=
// calls: AngleMatrix, MatrixInvert, ConcatTransforms, MatrixAngles
// callers: Script_RotationDelta
void __fastcall RotationDelta(const QAngle *const srcAngles, const QAngle *const destAngles, QAngle *out)
{
  QAngle xformAngles; // [rsp+0h] [rbp-F0h] BYREF
  matrix3x4_t src; // [rsp+10h] [rbp-E0h] BYREF
  matrix3x4_t srcInv; // [rsp+40h] [rbp-B0h] BYREF
  matrix3x4_t dest; // [rsp+70h] [rbp-80h] BYREF
  matrix3x4_t xform; // [rsp+A0h] [rbp-50h] BYREF

  AngleMatrix(srcAngles, &src);
  AngleMatrix(destAngles, &dest);
  MatrixInvert(&src, &srcInv);
  ConcatTransforms(&dest, &srcInv, &xform);
  MatrixAngles(&xform, &xformAngles);
  if ( out != 0 )
    *out = xformAngles;
}


// ClipLineSegmentToPlane  (line 4642, @0x00000000030e8530, libserver.so)  // inlines: Dot, DotProduct, VectorAdd, VectorDivide, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator/, operator=
// globals: vec3_invalid
void __fastcall ClipLineSegmentToPlane(
        const Vector *const vNormal,
        const Vector *const vPlanePoint,
        Vector *p1,
        Vector *p2,
        float flBias)
{
  float x; // xmm10_4
  float y; // xmm9_4
  float v7; // xmm3_4
  float v8; // xmm6_4
  float z; // xmm8_4
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm13_4
  float v13; // xmm12_4
  float v14; // xmm11_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm0_4

  x = p1->x;
  y = p1->y;
  v7 = vPlanePoint->y;
  v8 = vNormal->y;
  z = p1->z;
  v10 = vPlanePoint->z;
  v11 = vNormal->z;
  v12 = p2->x;
  v13 = p2->y;
  v14 = p2->z;
  v15 = ((((p1->x - vPlanePoint->x) * vNormal->x) + ((y - v7) * v8)) + ((z - v10) * v11)) + flBias;
  v16 = ((((p2->x - vPlanePoint->x) * vNormal->x) + ((v13 - v7) * v8)) + ((v14 - v10) * v11)) + flBias;
  if ( v15 < 0.0 )
  {
    if ( v16 < 0.0 )
    {
      *p1 = vec3_invalid;
      *p2 = vec3_invalid;
    }
    else
    {
      v18 = 1.0 / (v16 - v15);
      p1->x = (((x - v12) * v16) * v18) + v12;
      p1->y = (((y - v13) * v16) * v18) + v13;
      p1->z = (((z - v14) * v16) * v18) + v14;
    }
  }
  else if ( v16 < 0.0 )
  {
    v17 = 1.0 / (v15 - v16);
    p2->x = (((v12 - x) * v15) * v17) + x;
    p2->y = (((v13 - y) * v15) * v17) + y;
    p2->z = (((v14 - z) * v15) * v17) + z;
  }
}


// ComputeTrianglePlane  (line 4673, @0x00000000030e8710, libserver.so)  // inlines: CrossProduct, DotProduct, VectorSubtract
// calls: VectorNormalize
// callers: CMesh::CalculateSmoothNormals
void __fastcall ComputeTrianglePlane(
        const Vector *const v1,
        const Vector *const v2,
        const Vector *const v3,
        Vector *const normal,
        float *const intercept)
{
  float y; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float z; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm5_4
  float v15; // xmm4_4

  y = v1->y;
  v9 = v2->x - v1->x;
  v10 = v3->x - v1->x;
  z = v1->z;
  v12 = v2->y - y;
  v13 = v3->y - y;
  v14 = v2->z - z;
  v15 = v3->z - z;
  normal->x = (v12 * v15) - (v14 * v13);
  normal->y = (v14 * v10) - (v15 * v9);
  normal->z = (v13 * v9) - (v10 * v12);
  VectorNormalize(normal);
  *intercept = ((normal->x * v1->x) + (normal->y * v1->y)) + (normal->z * v1->z);
}


// TetrahedronVolume  (line 4691, @0x00000000030e87f0, libserver.so)  // inlines: CrossProduct, DotProduct, VectorSubtract, operator-
float __fastcall TetrahedronVolume(
        const Vector *const p0,
        const Vector *const p1,
        const Vector *const p2,
        const Vector *const p3)
{
  float y; // xmm9_4
  float z; // xmm8_4
  float result; // xmm0_4

  y = p0->y;
  z = p0->z;
  result = ((((p1->x - p0->x) * (((p2->y - y) * (p3->z - z)) - ((p2->z - z) * (p3->y - y))))
           + ((p1->y - y) * (((p2->z - z) * (p3->x - p0->x)) - ((p3->z - z) * (p2->x - p0->x)))))
          + ((p1->z - z) * (((p3->y - y) * (p2->x - p0->x)) - ((p3->x - p0->x) * (p2->y - y)))))
         * 0.16666667;
  if ( result < 0.0 )
    return -result;
  return result;
}


// TriangleArea  (line 4709, @0x00000000030e88c0, libserver.so)  // inlines: CrossProduct, FastSqrt, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
float __fastcall TriangleArea(const Vector *const v0, const Vector *const v1, const Vector *const v2)
{
  float y; // xmm6_4
  float v4; // xmm5_4
  float v5; // xmm3_4
  float z; // xmm0_4
  float v7; // xmm4_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm6_4

  y = v0->y;
  v4 = v1->x - v0->x;
  v5 = v2->x - v0->x;
  z = v0->z;
  v7 = v1->y - y;
  v8 = v2->y - y;
  v9 = v1->z - z;
  v10 = v2->z - z;
  return fsqrt(
           ((((v7 * v10) - (v9 * v8)) * ((v7 * v10) - (v9 * v8))) + (((v9 * v5) - (v10 * v4)) * ((v9 * v5) - (v10 * v4))))
         + (((v8 * v4) - (v5 * v7)) * ((v8 * v4) - (v5 * v7))))
       * 0.5;
}


// PolyFromPlane  (line 4725, @0x00000000030e8960, libserver.so)  // inlines: CrossProduct, DotProduct, VectorAdd, VectorCopy, VectorMA, VectorMultiply, VectorScale, VectorSubtract
// calls: VectorNormalize
// callers: CSGPlaneList
// globals: vec3_origin
__int64 __fastcall PolyFromPlane(Vector *outVerts, const Vector *const normal, float a3, float dist, float fHalfScale)
{
  __int64 v6; // rax
  int v7; // edx
  float v10; // xmm3_4
  float v11; // xmm2_4
  float x; // xmm8_4
  float z; // xmm7_4
  float y; // xmm0_4
  float v15; // xmm2_4
  vec_t v16; // xmm3_4
  vec_t v17; // xmm0_4
  vec_t v18; // xmm2_4
  float v20; // xmm2_4
  float v21; // xmm10_4
  float v22; // xmm11_4
  float v23; // xmm12_4
  float v24; // xmm5_4
  float v25; // xmm6_4
  float v26; // xmm4_4
  float v27; // xmm7_4
  float v28; // xmm8_4
  float v29; // xmm3_4
  float v30; // xmm4_4
  vec_t v31; // xmm9_4
  float v32; // xmm2_4
  vec_t v33; // xmm8_4
  float v34; // xmm1_4
  float v35; // xmm3_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  float dista; // [rsp+Ch] [rbp-24h]
  Vector vup; // [rsp+10h] [rbp-20h] BYREF

  v6 = 0;
  v7 = -1;
  v10 = -16384.0;
  do
  {
    v11 = fabs(*(&normal->x + v6));
    if ( v11 > v10 )
    {
      v10 = v11;
      v7 = v6;
    }
    ++v6;
  }
  while ( v6 != 3 );
  if ( v7 == -1 )
    return 0;
  x = vec3_origin.x;
  z = vec3_origin.z;
  if ( v7 >= 0 )
  {
    if ( v7 <= 1 )
    {
      z = 1.0;
    }
    else if ( v7 == 2 )
    {
      x = 1.0;
    }
  }
  y = normal->y;
  dista = a3;
  v15 = -(((normal->x * x) + (vec3_origin.y * y)) + (normal->z * z));
  v16 = (normal->x * v15) + x;
  v17 = (y * v15) + vec3_origin.y;
  v18 = (v15 * normal->z) + z;
  vup.x = v16;
  vup.y = v17;
  vup.z = v18;
  VectorNormalize(&vup);
  v20 = normal->y;
  v21 = normal->z;
  v22 = dista * v20;
  v23 = dista * normal->x;
  v24 = dist * vup.z;
  v25 = dist * vup.y;
  v26 = ((v21 * vup.y) - (v20 * vup.z)) * dist;
  v27 = dist * vup.x;
  v28 = v23 - v26;
  v29 = ((vup.z * normal->x) - (v21 * vup.x)) * dist;
  v30 = v26 + v23;
  v31 = (dist * vup.x) + v28;
  v32 = ((v20 * vup.x) - (vup.y * normal->x)) * dist;
  v33 = v28 - (dist * vup.x);
  v34 = v22 - v29;
  outVerts->x = v31;
  v35 = v29 + v22;
  outVerts[3].x = v33;
  v36 = (dista * v21) - v32;
  v37 = v32 + (dista * v21);
  outVerts->y = v25 + v34;
  outVerts[3].y = v34 - v25;
  outVerts->z = v24 + v36;
  outVerts[3].z = v36 - v24;
  outVerts[1].x = v27 + v30;
  outVerts[2].x = v30 - v27;
  outVerts[1].y = v25 + v35;
  outVerts[2].y = v35 - v25;
  outVerts[1].z = v24 + v37;
  outVerts[2].z = v37 - v24;
  return 4;
}


// ClipPolyToPlane  (line 4803, @0x00000000030e8bf0, libserver.so)  // inlines: DotProduct, VectorCopy, operator[]
// calls: __stack_chk_fail
// callers: UTIL_CalcFrustumThroughConvexPolygon, CNavPoly::ClipPolyVertsToHullClearance
// globals: vec3_origin
__int64 __fastcall ClipPolyToPlane(
        Vector *inVerts,
        int vertCount,
        Vector *outVerts,
        const Vector *const normal,
        float dist,
        float fOnPlaneEpsilon)
{
  signed __int64 v7; // rax
  void *v8; // rsp
  void *v9; // rsp
  char *v10; // r12
  char *v11; // rdx
  _DWORD *v12; // r8
  signed __int64 v13; // rbx
  Vector *v14; // r10
  Vector *v15; // rax
  __int64 v16; // r9
  float v17; // xmm2_4
  __int64 result; // rax
  Vector *v19; // r10
  _DWORD *v20; // r9
  int v21; // r12d
  unsigned int v22; // r13d
  __int64 v23; // rax
  Vector *v24; // rax
  int v25; // eax
  int v26; // r8d
  float v27; // xmm5_4
  __int64 i; // rdx
  float v29; // xmm1_4
  __int64 v30; // rax
  Vector *v31; // rdx
  vec_t x; // xmm0_4
  __int64 v33; // rax
  Vector *v34; // rax
  int counts[3]; // [rsp+0h] [rbp-50h]
  Vector mid; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-28h]

  counts[2] = 0;
  v37 = __readfsqword(0x28u);
  counts[1] = 0;
  v7 = 4 * (4LL * vertCount + 8);
  counts[0] = 0;
  v8 = alloca(v7);
  v9 = alloca(v7);
  v10 = (&mid & 0xFFFFFFFFFFFFFFEFLL);
  mid = vec3_origin;
  v11 = (&mid & 0xFFFFFFFFFFFFFFEFLL);
  if ( vertCount <= 0 )
    return 0;
  v12 = (&mid & 0xFFFFFFFFFFFFFFEFLL);
  v13 = v10 - v11;
  v14 = &inVerts[(vertCount - 1) + 1];
  v15 = inVerts;
  do
  {
    v17 = (((v15->x * normal->x) + (v15->y * normal->y)) + (v15->z * normal->z)) - dist;
    *(v12 + v13) = v17;
    if ( v17 > fOnPlaneEpsilon )
    {
      *v12 = 0;
      v16 = 0;
    }
    else if ( -fOnPlaneEpsilon <= v17 )
    {
      *v12 = 2;
      v16 = 2;
    }
    else
    {
      *v12 = 1;
      v16 = 1;
    }
    ++counts[v16];
    ++v15;
    ++v12;
  }
  while ( v15 != v14 );
  result = counts[0];
  *&v11[4 * vertCount] = *v11;
  *&v10[4 * vertCount] = *v10;
  if ( result != 0 )
  {
    if ( counts[1] != 0 )
    {
      v19 = inVerts;
      v20 = (&mid & 0xFFFFFFFFFFFFFFEFLL);
      v21 = 1;
      v22 = 0;
      do
      {
        if ( *v20 == 2 )
        {
          v33 = v22++;
          v26 = v21;
          v34 = &outVerts[v33];
          v34->x = v19->x;
          v34->y = v19->y;
          v34->z = v19->z;
        }
        else
        {
          if ( *v20 == 0 )
          {
            v23 = v22++;
            v24 = &outVerts[v23];
            v24->x = v19->x;
            v24->y = v19->y;
            v24->z = v19->z;
          }
          v25 = v20[1];
          v26 = v21;
          if ( v25 != 2 && v25 != *v20 )
          {
            v27 = *(v20 + v13) / (*(v20 + v13) - *(v20 + v13 + 4));
            for ( i = 0; i != 12; i += 4 )
            {
              v29 = *(&normal->x + i);
              if ( v29 == 1.0 )
              {
                *(&mid.x + i) = dist;
              }
              else if ( v29 == -1.0 )
              {
                *(&mid.x + i) = -dist;
              }
              else
              {
                *(&mid.x + i) = ((*(&inVerts[v21 % vertCount].x + i) - *(&v19->x + i)) * v27) + *(&v19->x + i);
              }
            }
            v30 = v22++;
            outVerts[v30] = mid;
          }
        }
        ++v20;
        ++v21;
        ++v19;
      }
      while ( vertCount > v26 );
      return v22;
    }
    else
    {
      v31 = outVerts;
      do
      {
        x = inVerts->x;
        ++inVerts;
        ++v31;
        v31[-1].x = x;
        v31[-1].y = inVerts[-1].y;
        v31[-1].z = inVerts[-1].z;
      }
      while ( inVerts != v14 );
      return vertCount;
    }
  }
  return result;
}


// ClipPolyToPlane_Precise  (line 4893, @0x00000000030e8f40, libserver.so)
// calls: __stack_chk_fail
__int64 __fastcall ClipPolyToPlane_Precise(
        double *inVerts,
        int vertCount,
        double *outVerts,
        const double *normal,
        double dist,
        double fOnPlaneEpsilon)
{
  signed __int64 v6; // rax
  void *v7; // rsp
  void *v8; // rsp
  _QWORD *v9; // rbx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r8
  double *v12; // rax
  __int64 v13; // r9
  double v14; // xmm2_8
  __int64 result; // rax
  double *v16; // r8
  int v17; // r13d
  __int64 v18; // r9
  unsigned int v19; // r12d
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  int v24; // r14d
  __int64 v25; // rcx
  double v26; // xmm2_8
  int v27; // eax
  __int64 v28; // rax
  __int64 i; // rax
  __int64 v30; // rax
  int counts[3]; // [rsp+0h] [rbp-50h]
  double mid[3]; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-28h]

  memset(mid, 0, sizeof(mid));
  v33 = __readfsqword(0x28u);
  v6 = 4 * (8LL * vertCount + 8);
  v7 = alloca(v6);
  counts[2] = 0;
  v8 = alloca(v6);
  counts[1] = 0;
  counts[0] = 0;
  v9 = (mid & 0xFFFFFFFFFFFFFFEFLL);
  v10 = mid & 0xFFFFFFFFFFFFFFEFLL;
  if ( vertCount <= 0 )
    return 0;
  v11 = mid & 0xFFFFFFFFFFFFFFEFLL;
  v12 = inVerts;
  do
  {
    v14 = *v12 * *normal + v12[1] * normal[1] + v12[2] * normal[2] - dist;
    *(v9 + 2 * v11 + -2 * v10) = v14;
    if ( v14 > fOnPlaneEpsilon )
    {
      *v11 = 0;
      v13 = 0;
    }
    else if ( -fOnPlaneEpsilon <= v14 )
    {
      *v11 = 2;
      v13 = 2;
    }
    else
    {
      *v11 = 1;
      v13 = 1;
    }
    ++counts[v13];
    v12 += 3;
    v11 += 4LL;
  }
  while ( v12 != &inVerts[3 * (vertCount - 1) + 3] );
  result = counts[0];
  *(v10 + 4LL * vertCount) = *v10;
  v9[vertCount] = *v9;
  if ( result != 0 )
  {
    if ( counts[1] != 0 )
    {
      v16 = inVerts;
      v17 = 1;
      v18 = 0;
      v19 = 0;
      do
      {
        v20 = *(v18 + v10);
        if ( v20 == 2 )
        {
          v24 = v17;
          v30 = (3 * v19++);
          outVerts[v30++] = *v16;
          outVerts[v30] = v16[1];
          outVerts[v30 + 1] = v16[2];
        }
        else
        {
          if ( v20 == 0 )
          {
            v21 = 3 * v19++;
            outVerts[v21] = *v16;
            v22 = v21 + 1LL;
            outVerts[v22] = v16[1];
            outVerts[v22 + 1] = v16[2];
          }
          v23 = *(v18 + v10 + 4);
          v24 = v17;
          if ( v23 != 2 && v23 != *(v18 + v10) )
          {
            v25 = 0;
            v26 = *((mid & 0xFFFFFFFFFFFFFFEFLL) + 2 * v18)
                / (*((mid & 0xFFFFFFFFFFFFFFEFLL) + 2 * v18) - *(&stru_8.gap0 + 2 * v18 + (mid & 0xFFFFFFFFFFFFFFEFLL)));
            do
            {
              mid[v25] = (inVerts[3 * (v17 % vertCount) + v25] - v16[v25]) * v26 + v16[v25];
              ++v25;
            }
            while ( v25 != 3 );
            v27 = 3 * v19++;
            outVerts[v27] = mid[0];
            v28 = v27 + 1LL;
            outVerts[v28] = mid[1];
            outVerts[v28 + 1] = mid[2];
          }
        }
        v18 += 4;
        ++v17;
        v16 += 3;
      }
      while ( vertCount > v24 );
      return v19;
    }
    else
    {
      for ( i = 0; 3 * vertCount > i; ++i )
        outVerts[i] = inVerts[i];
      return vertCount;
    }
  }
  return result;
}


// CeilPow2  (line 5002, @0x00000000030e9250, libserver.so)
int __fastcall CeilPow2(int in)
{
  int result; // eax

  for ( result = 1; in > result; result *= 2 )
    ;
  return result;
}


// FloorPow2  (line 5012, @0x00000000030e9270, libserver.so)
int __fastcall FloorPow2(int in)
{
  int i; // eax

  if ( in <= 1 )
    return 0;
  for ( i = 1; i < in; i *= 2 )
    ;
  return i >> 1;
}


// CalcFovY  (line 5027, @0x00000000030e9290, libserver.so)  // inlines: RAD2DEG
// calls: V_tanf, V_atanf
// callers: GeneratePerspectiveFrustum
float __fastcall CalcFovY(float a1, float flFovX, float flAspect)
{
  bool v4; // cc
  double v5; // xmm0_8
  float v6; // xmm0_4
  float v7; // xmm0_4

  v4 = a1 >= 1.0;
  *&v5 = 1061752795;
  if ( v4 && a1 <= 179.0 )
  {
    HIDWORD(v5) = 0;
    *&v5 = 0.5 * (a1 * 0.017453292);
  }
  v6 = V_tanf(v5);
  v7 = V_atanf(v6 / flFovX);
  return (v7 * 57.295776) + (v7 * 57.295776);
}


// CalcFovX  (line 5048, @0x00000000030e9300, libserver.so)  // inlines: DEG2RAD, RAD2DEG
// calls: V_tanf, V_atanf
float __fastcall CalcFovX(double a1, float flFovY, float flAspect)
{
  float v3; // xmm0_4
  float v4; // xmm0_4

  *&a1 = (*&a1 * 0.017453292) * 0.5;
  v3 = V_tanf(a1);
  v4 = V_atanf(v3 * flFovY);
  return (v4 * 57.295776) + (v4 * 57.295776);
}


// GeneratePerspectiveFrustumFLU  (line 5057, @0x00000000030e9340, libserver.so)  // inlines: DEG2RAD, Dot, DotProduct, Init, VectorMA, operator-, operator=
// calls: V_tanf, VectorNormalize
// callers: GeneratePerspectiveFrustumFLU, Frustum_t::CreatePerspectiveFrustumFLU, Frustum_t::CreatePerspectiveFrustum
void __fastcall GeneratePerspectiveFrustumFLU(
        const Vector *const origin,
        const Vector *const forward,
        const Vector *const vLeft,
        const Vector *const up,
        float flZNear,
        float flZFar,
        double flFovX,
        float flAspect,
        VPlane *pPlanesOut)
{
  float y; // xmm11_4
  float z; // xmm10_4
  float v15; // xmm4_4
  vec_t v16; // xmm1_4
  float v17; // xmm0_4
  vec_t v18; // xmm3_4
  vec_t v19; // xmm2_4
  vec_t v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm6_4
  float v24; // xmm4_4
  float v25; // xmm6_4
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm6_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm7_4
  float v33; // xmm5_4
  float v34; // xmm6_4
  vec_t v35; // xmm2_4
  vec_t v36; // xmm2_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm4_4
  float v40; // xmm3_4
  float v41; // xmm4_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  float v45; // xmm4_4
  float x; // [rsp+Ch] [rbp-64h]
  float flTanYa; // [rsp+10h] [rbp-60h]
  float v49; // [rsp+14h] [rbp-5Ch]
  float vec; // [rsp+18h] [rbp-58h]
  Vector normalPos; // [rsp+20h] [rbp-50h] BYREF
  Vector normalNeg; // [rsp+30h] [rbp-40h] BYREF

  y = forward->y;
  z = forward->z;
  x = vLeft->x;
  v49 = vLeft->y;
  vec = vLeft->z;
  *&flFovX = (*&flFovX * 0.5) * 0.017453292;
  v15 = ((origin->x * forward->x) + (origin->y * y)) + (origin->z * z);
  pPlanesOut[5].m_Normal.x = -forward->x;
  pPlanesOut[5].m_Normal.y = -y;
  pPlanesOut[5].m_Normal.z = -z;
  pPlanesOut[5].m_Dist = -flZFar - v15;
  pPlanesOut[4].m_Normal.x = forward->x;
  pPlanesOut[4].m_Normal.y = forward->y;
  v16 = forward->z;
  pPlanesOut[4].m_Dist = flZNear + v15;
  pPlanesOut[4].m_Normal.z = v16;
  v17 = V_tanf(flFovX);
  v18 = (forward->z * v17) - vec;
  v19 = (forward->x * v17) - x;
  normalPos.y = (forward->y * v17) - v49;
  normalPos.z = v18;
  normalPos.x = v19;
  normalNeg.y = normalPos.y - (v49 * -2.0);
  normalNeg.z = v18 - (vec * -2.0);
  normalNeg.x = (x + x) + v19;
  flTanYa = v17 / flAspect;
  VectorNormalize(&normalPos);
  VectorNormalize(&normalNeg);
  v20 = normalPos.y;
  v21 = normalPos.z;
  v22 = (origin->x * normalPos.x) + (origin->y * normalPos.y);
  v23 = origin->z;
  pPlanesOut[1].m_Normal.x = normalPos.x;
  pPlanesOut[1].m_Normal.y = v20;
  v24 = normalNeg.x;
  v25 = v23 * v21;
  pPlanesOut[1].m_Normal.z = v21;
  v26 = normalNeg.y;
  v27 = normalNeg.z;
  pPlanesOut[1].m_Dist = v22 + v25;
  v28 = (origin->x * v24) + (origin->y * v26);
  v29 = origin->z;
  pPlanesOut->m_Normal.x = v24;
  pPlanesOut->m_Normal.y = v26;
  pPlanesOut->m_Normal.z = v27;
  pPlanesOut->m_Dist = v28 + (v29 * v27);
  v30 = forward->x * flTanYa;
  v31 = up->x;
  v32 = up->y;
  v33 = flTanYa * forward->z;
  v34 = up->z;
  v35 = (forward->y * flTanYa) + v32;
  normalPos.x = v30 + up->x;
  normalPos.y = v35;
  normalPos.z = v33 + v34;
  normalNeg.x = (v31 * -2.0) + (v30 + v31);
  normalNeg.y = (v32 * -2.0) + v35;
  normalNeg.z = (-2.0 * v34) + (v33 + v34);
  VectorNormalize(&normalPos);
  VectorNormalize(&normalNeg);
  v36 = normalPos.y;
  v37 = normalPos.z;
  v38 = (origin->x * normalPos.x) + (origin->y * normalPos.y);
  v39 = origin->z;
  pPlanesOut[3].m_Normal.x = normalPos.x;
  pPlanesOut[3].m_Normal.y = v36;
  v40 = normalNeg.x;
  v41 = v39 * v37;
  pPlanesOut[3].m_Normal.z = v37;
  v42 = normalNeg.y;
  v43 = normalNeg.z;
  pPlanesOut[3].m_Dist = v38 + v41;
  v44 = (origin->x * v40) + (origin->y * v42);
  v45 = origin->z;
  pPlanesOut[2].m_Normal.x = v40;
  pPlanesOut[2].m_Normal.y = v42;
  pPlanesOut[2].m_Normal.z = v43;
  pPlanesOut[2].m_Dist = v44 + (v45 * v43);
}


// GeneratePerspectiveFrustum  (line 5104, @0x00000000030e96b0, libserver.so)  // inlines: DEG2RAD, Dot, DotProduct, Init, VectorMA, operator-, operator=
// calls: V_tanf, VectorNormalize
// callers: GeneratePerspectiveFrustum
void __fastcall GeneratePerspectiveFrustum(
        const Vector *const origin,
        const Vector *const forward,
        const Vector *const right,
        const Vector *const up,
        float flZNear,
        float flZFar,
        double flFovX,
        float flFovY,
        VPlane *pPlanesOut)
{
  float y; // xmm8_4
  float z; // xmm7_4
  float v16; // xmm4_4
  vec_t v17; // xmm6_4
  vec_t v18; // xmm1_4
  float x; // xmm5_4
  float v20; // xmm7_4
  float v21; // xmm0_4
  vec_t v22; // xmm3_4
  float v23; // xmm2_4
  vec_t v24; // xmm3_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm5_4
  float v28; // xmm4_4
  float v29; // xmm5_4
  float v30; // xmm3_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  float v33; // xmm5_4
  float v34; // xmm3_4
  float v35; // xmm4_4
  float v36; // xmm7_4
  float v37; // xmm6_4
  float v38; // xmm5_4
  vec_t v39; // xmm2_4
  vec_t v40; // xmm2_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  float v43; // xmm4_4
  float v44; // xmm3_4
  float v45; // xmm4_4
  float v46; // xmm2_4
  float v47; // xmm1_4
  float v48; // xmm0_4
  float v49; // xmm4_4
  float flTanY; // [rsp+0h] [rbp-60h]
  float flTanX; // [rsp+8h] [rbp-58h]
  Vector normalPos; // [rsp+10h] [rbp-50h] BYREF
  Vector normalNeg; // [rsp+20h] [rbp-40h] BYREF

  y = forward->y;
  z = forward->z;
  *&flFovX = (*&flFovX * 0.5) * 0.017453292;
  v16 = ((origin->x * forward->x) + (origin->y * y)) + (origin->z * z);
  v17 = -forward->x;
  pPlanesOut[5].m_Normal.y = -y;
  pPlanesOut[5].m_Normal.x = v17;
  pPlanesOut[5].m_Normal.z = -z;
  pPlanesOut[5].m_Dist = -flZFar - v16;
  pPlanesOut[4].m_Normal.x = forward->x;
  pPlanesOut[4].m_Normal.y = forward->y;
  v18 = forward->z;
  pPlanesOut[4].m_Dist = flZNear + v16;
  pPlanesOut[4].m_Normal.z = v18;
  flTanX = V_tanf(flFovX);
  flTanY = V_tanf(COERCE_DOUBLE(COERCE_UNSIGNED_INT((0.5 * flFovY) * 0.017453292)));
  x = right->x;
  v20 = right->y;
  v21 = right->z;
  v22 = (forward->y * flTanX) + v20;
  v23 = flTanX * forward->z;
  normalPos.x = (forward->x * flTanX) + right->x;
  normalPos.y = v22;
  normalNeg.x = (x * -2.0) + normalPos.x;
  normalNeg.y = (v20 * -2.0) + v22;
  normalPos.z = v23 + v21;
  normalNeg.z = (v21 * -2.0) + (v23 + v21);
  VectorNormalize(&normalPos);
  VectorNormalize(&normalNeg);
  v24 = normalPos.y;
  v25 = normalPos.z;
  v26 = (origin->x * normalPos.x) + (origin->y * normalPos.y);
  v27 = origin->z;
  pPlanesOut[1].m_Normal.x = normalPos.x;
  pPlanesOut[1].m_Normal.y = v24;
  v28 = normalNeg.x;
  v29 = v27 * v25;
  pPlanesOut[1].m_Normal.z = v25;
  v30 = normalNeg.y;
  v31 = normalNeg.z;
  pPlanesOut[1].m_Dist = v26 + v29;
  v32 = (origin->x * v28) + (origin->y * v30);
  v33 = origin->z;
  pPlanesOut->m_Normal.z = v31;
  pPlanesOut->m_Normal.x = v28;
  pPlanesOut->m_Normal.y = v30;
  pPlanesOut->m_Dist = v32 + (v33 * v31);
  v34 = forward->x * flTanY;
  v35 = up->x;
  v36 = up->y;
  v37 = flTanY * forward->z;
  v38 = up->z;
  v39 = (forward->y * flTanY) + v36;
  normalPos.x = v34 + up->x;
  normalPos.y = v39;
  normalPos.z = v37 + v38;
  normalNeg.x = (v35 * -2.0) + (v34 + v35);
  normalNeg.y = (v36 * -2.0) + v39;
  normalNeg.z = (-2.0 * v38) + (v37 + v38);
  VectorNormalize(&normalPos);
  VectorNormalize(&normalNeg);
  v40 = normalPos.y;
  v41 = normalPos.z;
  v42 = (origin->x * normalPos.x) + (origin->y * normalPos.y);
  v43 = origin->z;
  pPlanesOut[3].m_Normal.x = normalPos.x;
  pPlanesOut[3].m_Normal.y = v40;
  v44 = normalNeg.x;
  v45 = v43 * v41;
  pPlanesOut[3].m_Normal.z = v41;
  v46 = normalNeg.y;
  v47 = normalNeg.z;
  pPlanesOut[3].m_Dist = v42 + v45;
  v48 = (origin->x * v44) + (origin->y * v46);
  v49 = origin->z;
  pPlanesOut[2].m_Normal.x = v44;
  pPlanesOut[2].m_Normal.y = v46;
  pPlanesOut[2].m_Normal.z = v47;
  pPlanesOut[2].m_Dist = v48 + (v49 * v47);
}


// GenerateOrthoFrustumFLU  (line 5145, @0x00000000030e9a10, libserver.so)  // inlines: DotProduct, Init, operator*=, operator-, operator=
// callers: Frustum_t::CreateOrthoFrustumFLU, Frustum_t::CreateOrthoFrustum
void __fastcall GenerateOrthoFrustumFLU(
        const Vector *const origin,
        const Vector *const forward,
        const Vector *const vLeft,
        const Vector *const up,
        float flLeft,
        float flRight,
        float flBottom,
        float flTop,
        float flZNear,
        float flZFar,
        VPlane *pPlanesOut)
{
  vec_t x; // xmm15_4
  float y; // xmm14_4
  float z; // xmm13_4
  vec_t v14; // xmm12_4
  float v15; // xmm7_4
  float v16; // xmm8_4
  float v17; // xmm7_4
  float v18; // xmm8_4
  float v19; // xmm9_4
  vec_t v20; // xmm4_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  float v23; // xmm4_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm4_4
  vec_t v29; // xmm1_4

  x = vLeft->x;
  y = vLeft->y;
  z = vLeft->z;
  v14 = -vLeft->x;
  v15 = (origin->x * forward->x) + (origin->y * forward->y);
  v16 = origin->z * forward->z;
  pPlanesOut[4].m_Normal = *forward;
  v17 = v15 + v16;
  pPlanesOut[4].m_Dist = flZNear + v17;
  v18 = forward->y;
  v19 = forward->x;
  v20 = -forward->z;
  pPlanesOut[5].m_Dist = -flZFar - v17;
  pPlanesOut[5].m_Normal.z = v20;
  pPlanesOut[5].m_Normal.y = -v18;
  pPlanesOut[5].m_Normal.x = -v19;
  v21 = (origin->x * v14) + (origin->y * -y);
  v22 = origin->z;
  pPlanesOut->m_Normal.x = x;
  pPlanesOut->m_Normal.y = y;
  pPlanesOut->m_Normal.z = z;
  pPlanesOut[1].m_Normal.x = v14;
  pPlanesOut[1].m_Normal.y = -y;
  v23 = v21 + (v22 * -z);
  pPlanesOut->m_Dist = -flRight - v23;
  pPlanesOut[1].m_Normal.z = -z;
  pPlanesOut[1].m_Dist = flLeft + v23;
  v24 = (origin->x * up->x) + (origin->y * up->y);
  v25 = origin->z * up->z;
  pPlanesOut[3].m_Normal = *up;
  v26 = v24 + v25;
  pPlanesOut[3].m_Dist = flBottom + v26;
  v27 = up->y;
  v28 = up->x;
  v29 = -up->z;
  pPlanesOut[2].m_Dist = -flTop - v26;
  pPlanesOut[2].m_Normal.z = v29;
  pPlanesOut[2].m_Normal.y = -v27;
  pPlanesOut[2].m_Normal.x = -v28;
}


// GeneratePerspectiveFrustumFLU  (line 5170, @0x00000000030e9fd0, libserver.so)
// calls: AngleVectorsFLU, GeneratePerspectiveFrustumFLU, Frustum_t::SetPlanes
void __fastcall GeneratePerspectiveFrustumFLU(
        const Vector *const origin,
        const QAngle *const angles,
        float flZNear,
        float flZFar,
        float flFovX,
        float flAspectRatio,
        Frustum_t *const frustum)
{
  Vector vecForward; // [rsp+20h] [rbp-C0h] BYREF
  Vector vLeft; // [rsp+30h] [rbp-B0h] BYREF
  Vector vecUp; // [rsp+40h] [rbp-A0h] BYREF
  VPlane planes[6]; // [rsp+50h] [rbp-90h] BYREF

  AngleVectorsFLU(angles, &vecForward, &vLeft, &vecUp);
  GeneratePerspectiveFrustumFLU(
    origin,
    &vecForward,
    &vLeft,
    &vecUp,
    flZNear,
    flZFar,
    COERCE_DOUBLE(LODWORD(flFovX)),
    flAspectRatio,
    planes);
  Frustum_t::SetPlanes(frustum, planes);
}


// GeneratePerspectiveFrustum  (line 5179, @0x00000000030ea090, libserver.so)
// calls: AngleVectors, CalcFovY, GeneratePerspectiveFrustum, Frustum_t::SetPlanes
// callers: CDOTABehaviorRoquelaireIdle::Update
void __fastcall GeneratePerspectiveFrustum(
        const Vector *const origin,
        const QAngle *const angles,
        float flZNear,
        float flZFar,
        float flFovX,
        float flAspectRatio,
        Frustum_t *const frustum)
{
  float v8; // xmm0_4
  Vector vecForward; // [rsp+20h] [rbp-C0h] BYREF
  Vector vecRight; // [rsp+30h] [rbp-B0h] BYREF
  Vector vecUp; // [rsp+40h] [rbp-A0h] BYREF
  VPlane planes[6]; // [rsp+50h] [rbp-90h] BYREF

  AngleVectors(angles, &vecForward, &vecRight, &vecUp);
  v8 = CalcFovY(flFovX, flAspectRatio, flFovX);
  GeneratePerspectiveFrustum(
    origin,
    &vecForward,
    &vecRight,
    &vecUp,
    flZNear,
    flZFar,
    COERCE_DOUBLE(LODWORD(flFovX)),
    v8,
    planes);
  Frustum_t::SetPlanes(frustum, planes);
}


// fourplanes_t::ComputeSignbits  (line 5189, @0x00000000030e9bc0, libserver.so)  // inlines: AndSIMD<(ESIMDLevel)20u>, CmpLtSIMD<(ESIMDLevel)20u>, LoadAlignedSIMD<(ESIMDLevel)20u>, _mm_and_ps, _mm_cmplt_ps, _mm_load_ps, fabs<(ESIMDLevel)20u>
void __fastcall fourplanes_t::ComputeSignbits(fourplanes_t *const this)
{
  __m128 v1; // xmm4
  __m128 v2; // xmm3
  __m128 v3; // xmm2

  v1 = *this->gap0;
  v2 = *&this->gap0[16];
  v3 = *&this->gap0[32];
  *&this->gap0[64] = _mm_cmplt_ps(*this->gap0, Four_Zeros);
  *&this->gap0[80] = _mm_cmplt_ps(v2, Four_Zeros);
  *&this->gap0[96] = _mm_cmplt_ps(v3, Four_Zeros);
  *&this->gap0[112] = _mm_and_ps(v1, *g_SIMD_clear_signmask);
  *&this->gap0[128] = _mm_and_ps(v2, *g_SIMD_clear_signmask);
  *&this->gap0[144] = _mm_and_ps(*g_SIMD_clear_signmask, v3);
}


// fourplanes_t::GetPlane  (line 5199, @0x00000000030e9c30, libserver.so)  // inlines: SubFloat<(ESIMDLevel)20u>
void __fastcall fourplanes_t::GetPlane(const fourplanes_t *const this, int index, Vector *pNormalOut, float *pDistOut)
{
  __int64 v4; // rax

  v4 = 4LL * index;
  pNormalOut->x = *&this->gap0[v4];
  pNormalOut->y = *&this->gap0[v4 + 16];
  pNormalOut->z = *&this->gap0[v4 + 32];
  *pDistOut = *&this->gap0[v4 + 48];
}


// fourplanes_t::SetPlane  (line 5206, @0x00000000030e9c70, libserver.so)  // inlines: AndSIMD<(ESIMDLevel)20u>, CmpLtSIMD<(ESIMDLevel)20u>, ComputeSignbits, LoadAlignedSIMD<(ESIMDLevel)20u>, SubFloat<(ESIMDLevel)20u>, _mm_and_ps, _mm_cmplt_ps, _mm_load_ps, fabs<(ESIMDLevel)20u>
// callers: Frustum_t::SetPlane
void __fastcall fourplanes_t::SetPlane(
        fourplanes_t *const this,
        int index,
        const Vector *const vecNormal,
        float planeDist)
{
  __int64 v4; // rax
  vec_t z; // xmm1_4
  __m128 v6; // xmm4
  __m128 v7; // xmm3
  __m128 v8; // xmm2

  v4 = 4LL * index;
  *&this->gap0[v4] = vecNormal->x;
  *&this->gap0[v4 + 16] = vecNormal->y;
  z = vecNormal->z;
  *&this->gap0[v4 + 48] = planeDist;
  *&this->gap0[v4 + 32] = z;
  v6 = *this->gap0;
  v7 = *&this->gap0[16];
  v8 = *&this->gap0[32];
  *&this->gap0[64] = _mm_cmplt_ps(*this->gap0, Four_Zeros);
  *&this->gap0[80] = _mm_cmplt_ps(v7, Four_Zeros);
  *&this->gap0[96] = _mm_cmplt_ps(v8, Four_Zeros);
  *&this->gap0[112] = _mm_and_ps(v6, *g_SIMD_clear_signmask);
  *&this->gap0[128] = _mm_and_ps(v7, *g_SIMD_clear_signmask);
  *&this->gap0[144] = _mm_and_ps(*g_SIMD_clear_signmask, v8);
}


// fourplanes_t::Set4Planes  (line 5215, @0x00000000030e9d10, libserver.so)  // inlines: AndSIMD<(ESIMDLevel)20u>, CmpLtSIMD<(ESIMDLevel)20u>, ComputeSignbits, LoadAlignedSIMD<(ESIMDLevel)20u>, LoadUnalignedSIMD<(ESIMDLevel)20u>, TransposeSIMD<(ESIMDLevel)20u>, _mm_and_ps, _mm_cmplt_ps, _mm_load_ps, _mm_loadu_ps, fabs<(ESIMDLevel)20u>
// callers: Frustum_t::SetPlanes
void __fastcall fourplanes_t::Set4Planes(fourplanes_t *const this, const VPlane *pPlanes)
{
  VPlane v2; // xmm3
  __m128 v3; // xmm1
  __m128 v4; // xmm5
  __m128 v5; // xmm4
  __m128 v6; // xmm0
  __m128 v7; // xmm2
  __m128 v8; // xmm6
  __m128 v9; // xmm0
  __m128 v10; // xmm1
  __m128 v11; // xmm2
  __m128 v12; // xmm3
  __m128 v13; // xmm2

  v2 = *pPlanes;
  *this->gap0 = *pPlanes;
  v3 = pPlanes[1];
  *&this->gap0[16] = v3;
  v4 = _mm_unpacklo_ps(v2, v3);
  v5 = _mm_unpackhi_ps(v2, v3);
  v6 = pPlanes[2];
  *&this->gap0[32] = v6;
  v7 = v6;
  v8 = pPlanes[3];
  v9 = _mm_unpackhi_ps(v6, v8);
  v10 = _mm_movelh_ps(v5, v9);
  v11 = _mm_unpacklo_ps(v7, v8);
  *&this->gap0[48] = _mm_movehl_ps(v9, v5);
  v12 = _mm_movelh_ps(v4, v11);
  v13 = _mm_movehl_ps(v11, v4);
  *this->gap0 = v12;
  *&this->gap0[16] = v13;
  *&this->gap0[32] = v10;
  *&this->gap0[64] = _mm_cmplt_ps(v12, Four_Zeros);
  *&this->gap0[96] = _mm_cmplt_ps(v10, Four_Zeros);
  *&this->gap0[80] = _mm_cmplt_ps(v13, Four_Zeros);
  *&this->gap0[112] = _mm_and_ps(v12, *g_SIMD_clear_signmask);
  *&this->gap0[128] = _mm_and_ps(v13, *g_SIMD_clear_signmask);
  *&this->gap0[144] = _mm_and_ps(*g_SIMD_clear_signmask, v10);
}


// fourplanes_t::Set2Planes  (line 5225, @0x00000000030e9dc0, libserver.so)  // inlines: AndSIMD<(ESIMDLevel)20u>, CmpLtSIMD<(ESIMDLevel)20u>, ComputeSignbits, LoadAlignedSIMD<(ESIMDLevel)20u>, LoadUnalignedSIMD<(ESIMDLevel)20u>, TransposeSIMD<(ESIMDLevel)20u>, _mm_and_ps, _mm_cmplt_ps, _mm_load_ps, _mm_loadu_ps, fabs<(ESIMDLevel)20u>
// callers: Frustum_t::SetPlanes
void __fastcall fourplanes_t::Set2Planes(fourplanes_t *const this, const VPlane *pPlanes)
{
  VPlane v2; // xmm1
  __m128 v3; // xmm3
  __m128 v4; // xmm4
  __m128 v5; // xmm6
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 v8; // xmm5
  __m128 v9; // xmm1
  __m128 v10; // xmm2

  v2 = *pPlanes;
  *this->gap0 = *pPlanes;
  v3 = pPlanes[1];
  v4 = _mm_unpackhi_ps(v2, v3);
  v5 = _mm_unpacklo_ps(v2, v3);
  v6 = _mm_unpacklo_ps(Four_Zeros, Four_Zeros);
  v7 = _mm_movelh_ps(v5, v6);
  v8 = _mm_unpackhi_ps(Four_Zeros, Four_Zeros);
  v9 = _mm_movelh_ps(v4, v8);
  v10 = _mm_movehl_ps(v6, v5);
  *this->gap0 = v7;
  *&this->gap0[16] = v10;
  *&this->gap0[64] = _mm_cmplt_ps(v7, Four_Zeros);
  *&this->gap0[32] = v9;
  *&this->gap0[48] = _mm_movehl_ps(v8, v4);
  *&this->gap0[96] = _mm_cmplt_ps(v9, Four_Zeros);
  *&this->gap0[80] = _mm_cmplt_ps(v10, Four_Zeros);
  *&this->gap0[112] = _mm_and_ps(v7, *g_SIMD_clear_signmask);
  *&this->gap0[128] = _mm_and_ps(v10, *g_SIMD_clear_signmask);
  *&this->gap0[144] = _mm_and_ps(*g_SIMD_clear_signmask, v9);
}


// fourplanes_t::Get4Planes  (line 5235, @0x00000000030e9e60, libserver.so)  // inlines: StoreUnalignedSIMD<(ESIMDLevel)20u>, TransposeSIMD<(ESIMDLevel)20u>, _mm_storeu_ps
void __fastcall fourplanes_t::Get4Planes(const fourplanes_t *const this, VPlane *pPlanesOut)
{
  __m128 v2; // xmm4
  __m128 v3; // xmm5
  __m128 v4; // xmm3
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm0

  v2 = *&this->gap0[48];
  v3 = *&this->gap0[16];
  v4 = _mm_unpacklo_ps(*&this->gap0[32], v2);
  v5 = _mm_unpackhi_ps(*&this->gap0[32], v2);
  v6 = _mm_unpacklo_ps(*this->gap0, v3);
  v7 = _mm_unpackhi_ps(*this->gap0, v3);
  *pPlanesOut = _mm_movelh_ps(v6, v4);
  pPlanesOut[1] = _mm_movehl_ps(v4, v6);
  pPlanesOut[2] = _mm_movelh_ps(v7, v5);
  pPlanesOut[3] = _mm_movehl_ps(v5, v7);
}


// fourplanes_t::Get2Planes  (line 5248, @0x00000000030e9eb0, libserver.so)  // inlines: StoreUnalignedSIMD<(ESIMDLevel)20u>, TransposeSIMD<(ESIMDLevel)20u>, _mm_storeu_ps
void __fastcall fourplanes_t::Get2Planes(const fourplanes_t *const this, VPlane *pPlanesOut)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm1

  v2 = _mm_unpacklo_ps(*this->gap0, *&this->gap0[16]);
  v3 = _mm_unpacklo_ps(*&this->gap0[32], *&this->gap0[48]);
  *pPlanesOut = _mm_movelh_ps(v2, v3);
  pPlanesOut[1] = _mm_movehl_ps(v3, v2);
}


// Frustum_t::Frustum_t  (line 5260, @0x00000000030e9ee0, libserver.so)  // inlines: memset
// callers: CDOTABehaviorRoquelaireIdle::Update, CFrustum::CFrustum
void __fastcall Frustum_t::Frustum_t(Frustum_t *const this)
{
  memset(this, 0, sizeof(Frustum_t));
}


// Frustum_t::SetPlane  (line 5265, @0x00000000030e9ef0, libserver.so)
// calls: fourplanes_t::SetPlane
void __fastcall Frustum_t::SetPlane(Frustum_t *const this, int i, const Vector *const vecNormal, float dist)
{
  if ( i > 3 )
  {
    i -= 4;
    this = (this + 160);
  }
  fourplanes_t::SetPlane(this->planes, i, vecNormal, dist);
}


// Frustum_t::GetPlane  (line 5277, @0x00000000030e9f10, libserver.so)  // inlines: GetPlane, SubFloat<(ESIMDLevel)20u>
// callers: Frustum_t::Contains
void __fastcall Frustum_t::GetPlane(const Frustum_t *const this, int i, Vector *pNormalOut, float *pDistOut)
{
  __int64 v4; // rsi
  int v5; // xmm0_4
  __int64 v6; // rax

  if ( i <= 3 )
  {
    v6 = 4LL * i;
    pNormalOut->x = *&this->planes[0].gap0[v6];
    pNormalOut->y = *&this->planes[0].gap0[v6 + 16];
    pNormalOut->z = *&this->planes[0].gap0[v6 + 32];
    v5 = *&this->planes[0].gap0[v6 + 48];
  }
  else
  {
    v4 = 4LL * (i - 4);
    pNormalOut->x = *&this->planes[1].gap0[v4];
    pNormalOut->y = *&this->planes[1].gap0[v4 + 16];
    pNormalOut->z = *&this->planes[1].gap0[v4 + 32];
    v5 = *&this->planes[1].gap0[v4 + 48];
  }
  *pDistOut = v5;
}


// Frustum_t::SetPlanes  (line 5289, @0x00000000030e9fa0, libserver.so)
// calls: fourplanes_t::Set4Planes, fourplanes_t::Set2Planes
// callers: GeneratePerspectiveFrustumFLU, GeneratePerspectiveFrustum, Frustum_t::CreatePerspectiveFrustumFLU, Frustum_t::CreatePerspectiveFrustum, Frustum_t::CreateOrthoFrustumFLU, Frustum_t::CreateOrthoFrustum, FrustumPlanesFromMatrix, FrustumFromViewProj, CFrustum::BuildShadowFrustum
void __fastcall Frustum_t::SetPlanes(Frustum_t *const this, const VPlane *pPlanes)
{
  fourplanes_t::Set4Planes(this->planes, pPlanes);
  fourplanes_t::Set2Planes(&this->planes[1], pPlanes + 4);
}


// Frustum_t::GetPlanes  (line 5295, @0x00000000030ea180, libserver.so)  // inlines: Get2Planes, Get4Planes, StoreUnalignedSIMD<(ESIMDLevel)20u>, TransposeSIMD<(ESIMDLevel)20u>, _mm_storeu_ps
// callers: Frustum_t::Intersects, Frustum_t::GetCorners
void __fastcall Frustum_t::GetPlanes(const Frustum_t *const this, VPlane *pPlanesOut)
{
  __m128 v2; // xmm4
  __m128 v3; // xmm5
  __m128 v4; // xmm3
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  __m128 v9; // xmm1

  v2 = *&this->planes[0].gap0[48];
  v3 = *&this->planes[0].gap0[16];
  v4 = _mm_unpacklo_ps(*&this->planes[0].gap0[32], v2);
  v5 = _mm_unpackhi_ps(*&this->planes[0].gap0[32], v2);
  v6 = _mm_unpacklo_ps(*this->planes[0].gap0, v3);
  v7 = _mm_unpackhi_ps(*this->planes[0].gap0, v3);
  *pPlanesOut = _mm_movelh_ps(v6, v4);
  pPlanesOut[2] = _mm_movelh_ps(v7, v5);
  pPlanesOut[1] = _mm_movehl_ps(v4, v6);
  pPlanesOut[3] = _mm_movehl_ps(v5, v7);
  v8 = _mm_unpacklo_ps(*this->planes[1].gap0, *&this->planes[1].gap0[16]);
  v9 = _mm_unpacklo_ps(*&this->planes[1].gap0[32], *&this->planes[1].gap0[48]);
  pPlanesOut[4] = _mm_movelh_ps(v8, v9);
  pPlanesOut[5] = _mm_movehl_ps(v9, v8);
}


// Frustum_t::Contains  (line 5303, @0x00000000030ea200, libserver.so)  // inlines: DotProduct, operator=
// calls: Frustum_t::GetPlane
bool __fastcall Frustum_t::Contains(const Frustum_t *const this, const Vector *const mins, const Vector *const maxs)
{
  Vector *v3; // r14
  vec_t y; // xmm4_4
  vec_t z; // xmm0_4
  vec_t v7; // xmm1_4
  vec_t v8; // xmm3_4
  vec_t x; // xmm2_4
  int v10; // r15d
  float v12; // [rsp+Ch] [rbp-BCh]
  float v13; // [rsp+10h] [rbp-B8h]
  float v14; // [rsp+14h] [rbp-B4h]
  float dist; // [rsp+24h] [rbp-A4h] BYREF
  Vector vNormal; // [rsp+28h] [rbp-A0h] BYREF
  Vector vCorners[8]; // [rsp+38h] [rbp-90h] BYREF

  v3 = vCorners;
  y = mins->y;
  z = maxs->z;
  vCorners[0].x = mins->x;
  v7 = maxs->y;
  vCorners[1].x = vCorners[0].x;
  v8 = mins->z;
  vCorners[2].x = vCorners[0].x;
  vCorners[3].x = vCorners[0].x;
  x = maxs->x;
  vCorners[0].y = y;
  vCorners[0].z = v8;
  vCorners[1].y = y;
  vCorners[1].z = z;
  vCorners[2].y = v7;
  vCorners[2].z = v8;
  vCorners[3].y = v7;
  vCorners[3].z = z;
  vCorners[4].x = x;
  vCorners[4].y = y;
  vCorners[4].z = v8;
  vCorners[5].x = x;
  vCorners[5].y = y;
  vCorners[5].z = z;
  vCorners[6].x = x;
  vCorners[6].y = v7;
  vCorners[6].z = v8;
  vCorners[7].x = x;
  vCorners[7].y = v7;
  vCorners[7].z = z;
  while ( 2 )
  {
    v10 = 0;
    v12 = v3->x;
    v14 = v3->y;
    v13 = v3->z;
    do
    {
      Frustum_t::GetPlane(this, v10, &vNormal, &dist);
      if ( (((v12 * vNormal.x) + (v14 * vNormal.y)) + (v13 * vNormal.z)) <= 0.0 )
        return 0;
      ++v10;
    }
    while ( v10 != 8 );
    if ( ++v3 != &vCorners[6] )
      continue;
    break;
  }
  return 1;
}


// Frustum_t::Intersects  (line 5337, @0x00000000030eaaf0, libserver.so)
// calls: Frustum_t::GetCorners, Frustum_t::Intersects
bool __fastcall Frustum_t::Intersects(const Frustum_t *const this, Frustum_t *const otherFrustum)
{
  Vector pPointsA[8]; // [rsp+0h] [rbp-E0h] BYREF
  Vector pPointsB[8]; // [rsp+60h] [rbp-80h] BYREF

  Frustum_t::GetCorners(this, pPointsA);
  Frustum_t::GetCorners(otherFrustum, pPointsB);
  return Frustum_t::Intersects(this, otherFrustum, pPointsA, pPointsB);
}


// Frustum_t::Intersects  (line 5352, @0x00000000030ea3a0, libserver.so)  // inlines: DistTo, Dot, DotProduct
// calls: Frustum_t::GetPlanes
// callers: Frustum_t::Intersects
bool __fastcall Frustum_t::Intersects(
        const Frustum_t *const this,
        Frustum_t *const otherFrustum,
        Vector *pPointsA,
        Vector *pPointsB)
{
  VPlane *v7; // rbx
  VPlane *v8; // rsi
  Vector *v9; // rax
  int v10; // edi
  Vector *v12; // rax
  int v13; // ecx
  VPlane pPlanesA[6]; // [rsp+0h] [rbp-F0h] BYREF
  VPlane pPlanesB[6]; // [rsp+60h] [rbp-90h] BYREF
  char v16; // [rsp+C0h] [rbp-30h] BYREF

  v7 = pPlanesB;
  Frustum_t::GetPlanes(this, pPlanesA);
  Frustum_t::GetPlanes(otherFrustum, pPlanesB);
  v8 = pPlanesA;
  do
  {
    v9 = pPointsB;
    v10 = 8;
    while ( ((((v9->x * v8->m_Normal.x) + (v9->y * v8->m_Normal.y)) + (v9->z * v8->m_Normal.z)) - v8->m_Dist) <= 0.0 )
    {
      ++v9;
      if ( --v10 == 0 )
        return 0;
    }
    ++v8;
  }
  while ( v8 != pPlanesB );
  do
  {
    v12 = pPointsA;
    v13 = 8;
    while ( ((((v12->x * v7->m_Normal.x) + (v12->y * v7->m_Normal.y)) + (v12->z * v7->m_Normal.z)) - v7->m_Dist) <= 0.0 )
    {
      ++v12;
      if ( --v13 == 0 )
        return 0;
    }
    ++v7;
  }
  while ( v7 != &v16 );
  return 1;
}


// Frustum_t::Intersects  (line 5411, @0x00000000030ea4e0, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, AndSIMD<(ESIMDLevel)20u>, CmpLtSIMD<(ESIMDLevel)20u>, IsAnyNegative<(ESIMDLevel)20u>, LoadUnalignedSIMD<(ESIMDLevel)20u>, MaskedAssign<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, SplatXSIMD<(ESIMDLevel)20u>, SplatYSIMD<(ESIMDLevel)20u>, SplatZSIMD<(ESIMDLevel)20u>, TestSignSIMD<(ESIMDLevel)20u>, XorSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_and_ps, _mm_cmplt_ps, _mm_loadu_ps, _mm_movemask_ps, _mm_mul_ps, _mm_shuffle_ps, _mm_xor_ps
// callers: IsBoundingBoxInFrustum, CDOTABehaviorRoquelaireIdle::Update
bool __fastcall Frustum_t::Intersects(const Frustum_t *const this, const Vector *const mins, const Vector *const maxs)
{
  __m128 v3; // xmm0
  int v4; // eax
  __m128 v5; // xmm8
  __m128 v6; // xmm7
  __m128 v7; // xmm6
  __m128 v8; // xmm5
  __m128 v9; // xmm4
  __m128 v10; // xmm3

  v3 = *&mins->x;
  v4 = 0;
  v5 = _mm_shuffle_ps(*&maxs->x, *&maxs->x, 0);
  v6 = _mm_shuffle_ps(*&maxs->x, *&maxs->x, 85);
  v7 = _mm_shuffle_ps(*&maxs->x, *&maxs->x, 170);
  v8 = _mm_xor_ps(_mm_shuffle_ps(v3, v3, 0), v5);
  v9 = _mm_xor_ps(_mm_shuffle_ps(v3, v3, 85), v6);
  v10 = _mm_xor_ps(_mm_shuffle_ps(v3, v3, 170), v7);
  while ( _mm_movemask_ps(
            _mm_cmplt_ps(
              _mm_add_ps(
                _mm_mul_ps(_mm_xor_ps(_mm_and_ps(*&this->planes[0].gap0[64], v8), v5), *this->planes[0].gap0),
                _mm_add_ps(
                  _mm_mul_ps(_mm_xor_ps(_mm_and_ps(*&this->planes[0].gap0[80], v9), v6), *&this->planes[0].gap0[16]),
                  _mm_mul_ps(_mm_xor_ps(_mm_and_ps(*&this->planes[0].gap0[96], v10), v7), *&this->planes[0].gap0[32]))),
              *&this->planes[0].gap0[48])) == 0 )
  {
    ++v4;
    this = (this + 160);
    if ( v4 == 2 )
      return 1;
  }
  return 0;
}


// Frustum_t::Intersects  (line 5438, @0x00000000030ea580, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, AndSIMD<(ESIMDLevel)20u>, CmpLtSIMD<(ESIMDLevel)20u>, IsAnyNegative<(ESIMDLevel)20u>, MaskedAssign<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, SplatXSIMD<(ESIMDLevel)20u>, SplatYSIMD<(ESIMDLevel)20u>, SplatZSIMD<(ESIMDLevel)20u>, TestSignSIMD<(ESIMDLevel)20u>, XorSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_and_ps, _mm_cmplt_ps, _mm_movemask_ps, _mm_mul_ps, _mm_shuffle_ps, _mm_xor_ps
bool __fastcall Frustum_t::Intersects(
        const Frustum_t *const this,
        const fltx4_0 *const mins4,
        const fltx4_0 *const maxs4)
{
  fltx4_0 v3; // xmm0
  int v4; // eax
  __m128 v5; // xmm8
  __m128 v6; // xmm7
  __m128 v7; // xmm6
  __m128 v8; // xmm5
  __m128 v9; // xmm4
  __m128 v10; // xmm3

  v3 = *mins4;
  v4 = 0;
  v5 = _mm_shuffle_ps(*maxs4, *maxs4, 0);
  v6 = _mm_shuffle_ps(*maxs4, *maxs4, 85);
  v7 = _mm_shuffle_ps(*maxs4, *maxs4, 170);
  v8 = _mm_xor_ps(_mm_shuffle_ps(v3, v3, 0), v5);
  v9 = _mm_xor_ps(_mm_shuffle_ps(v3, v3, 85), v6);
  v10 = _mm_xor_ps(_mm_shuffle_ps(v3, v3, 170), v7);
  while ( _mm_movemask_ps(
            _mm_cmplt_ps(
              _mm_add_ps(
                _mm_mul_ps(_mm_xor_ps(_mm_and_ps(*&this->planes[0].gap0[64], v8), v5), *this->planes[0].gap0),
                _mm_add_ps(
                  _mm_mul_ps(_mm_xor_ps(_mm_and_ps(*&this->planes[0].gap0[80], v9), v6), *&this->planes[0].gap0[16]),
                  _mm_mul_ps(_mm_xor_ps(_mm_and_ps(*&this->planes[0].gap0[96], v10), v7), *&this->planes[0].gap0[32]))),
              *&this->planes[0].gap0[48])) == 0 )
  {
    ++v4;
    this = (this + 160);
    if ( v4 == 2 )
      return 1;
  }
  return 0;
}


// Frustum_t::IntersectsCenterExtents  (line 5463, @0x00000000030ea620, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, CmpLtSIMD<(ESIMDLevel)20u>, IsAnyNegative<(ESIMDLevel)20u>, LoadUnalignedSIMD<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, SplatXSIMD<(ESIMDLevel)20u>, SplatYSIMD<(ESIMDLevel)20u>, SplatZSIMD<(ESIMDLevel)20u>, TestSignSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_cmplt_ps, _mm_loadu_ps, _mm_movemask_ps, _mm_mul_ps, _mm_shuffle_ps
bool __fastcall Frustum_t::IntersectsCenterExtents(
        const Frustum_t *const this,
        const Vector *const center,
        const Vector *const extents)
{
  __m128 v3; // xmm0
  int v4; // eax
  __m128 v5; // xmm9
  __m128 v6; // xmm8
  __m128 v7; // xmm7
  __m128 v8; // xmm6
  __m128 v9; // xmm5
  __m128 v10; // xmm4

  v3 = *&center->x;
  v4 = 0;
  v5 = _mm_shuffle_ps(v3, v3, 0);
  v6 = _mm_shuffle_ps(v3, v3, 85);
  v7 = _mm_shuffle_ps(v3, v3, 170);
  v8 = _mm_shuffle_ps(*&extents->x, *&extents->x, 0);
  v9 = _mm_shuffle_ps(*&extents->x, *&extents->x, 85);
  v10 = _mm_shuffle_ps(*&extents->x, *&extents->x, 170);
  while ( _mm_movemask_ps(
            _mm_cmplt_ps(
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(*this->planes[0].gap0, v5), _mm_mul_ps(*&this->planes[0].gap0[112], v8)),
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(*&this->planes[0].gap0[16], v6), _mm_mul_ps(*&this->planes[0].gap0[128], v9)),
                  _mm_add_ps(_mm_mul_ps(*&this->planes[0].gap0[32], v7), _mm_mul_ps(*&this->planes[0].gap0[144], v10)))),
              *&this->planes[0].gap0[48])) == 0 )
  {
    ++v4;
    this = (this + 160);
    if ( v4 == 2 )
      return 1;
  }
  return 0;
}


// Frustum_t::IntersectsCenterExtents  (line 5490, @0x00000000030ea6d0, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, CmpLtSIMD<(ESIMDLevel)20u>, IsAnyNegative<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, SplatXSIMD<(ESIMDLevel)20u>, SplatYSIMD<(ESIMDLevel)20u>, SplatZSIMD<(ESIMDLevel)20u>, TestSignSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_cmplt_ps, _mm_movemask_ps, _mm_mul_ps, _mm_shuffle_ps
bool __fastcall Frustum_t::IntersectsCenterExtents(
        const Frustum_t *const this,
        const fltx4_0 *const fl4Center,
        const fltx4_0 *const fl4Extents)
{
  fltx4_0 v3; // xmm0
  int v4; // eax
  __m128 v5; // xmm9
  __m128 v6; // xmm8
  __m128 v7; // xmm7
  __m128 v8; // xmm6
  __m128 v9; // xmm5
  __m128 v10; // xmm4

  v3 = *fl4Center;
  v4 = 0;
  v5 = _mm_shuffle_ps(v3, v3, 0);
  v6 = _mm_shuffle_ps(v3, v3, 85);
  v7 = _mm_shuffle_ps(v3, v3, 170);
  v8 = _mm_shuffle_ps(*fl4Extents, *fl4Extents, 0);
  v9 = _mm_shuffle_ps(*fl4Extents, *fl4Extents, 85);
  v10 = _mm_shuffle_ps(*fl4Extents, *fl4Extents, 170);
  while ( _mm_movemask_ps(
            _mm_cmplt_ps(
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(*this->planes[0].gap0, v5), _mm_mul_ps(*&this->planes[0].gap0[112], v8)),
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(*&this->planes[0].gap0[16], v6), _mm_mul_ps(*&this->planes[0].gap0[128], v9)),
                  _mm_add_ps(_mm_mul_ps(*&this->planes[0].gap0[32], v7), _mm_mul_ps(*&this->planes[0].gap0[144], v10)))),
              *&this->planes[0].gap0[48])) == 0 )
  {
    ++v4;
    this = (this + 160);
    if ( v4 == 2 )
      return 1;
  }
  return 0;
}


// Frustum_t::CreatePerspectiveFrustumFLU  (line 5516, @0x00000000030ea780, libserver.so)
// calls: GeneratePerspectiveFrustumFLU, Frustum_t::SetPlanes
void __fastcall Frustum_t::CreatePerspectiveFrustumFLU(
        Frustum_t *const this,
        const Vector *const vOrigin,
        const Vector *const vForward,
        const Vector *const vLeft,
        const Vector *const vUp,
        float flZNear,
        float flZFar,
        double flFovX,
        float flAspect)
{
  VPlane fplanes[6]; // [rsp+0h] [rbp-70h] BYREF

  GeneratePerspectiveFrustumFLU(vOrigin, vForward, vLeft, vUp, flZNear, flZFar, flFovX, flAspect, fplanes);
  Frustum_t::SetPlanes(this, fplanes);
}


// Frustum_t::CreatePerspectiveFrustum  (line 5526, @0x00000000030ea7c0, libserver.so)  // inlines: CreatePerspectiveFrustumFLU, operator*=
// calls: GeneratePerspectiveFrustumFLU, Frustum_t::SetPlanes
// callers: CFrustum::BuildFrustumFromVectors
void __fastcall Frustum_t::CreatePerspectiveFrustum(
        Frustum_t *const this,
        const Vector *const origin,
        const Vector *const forward,
        const Vector *const right,
        const Vector *const up,
        float flZNear,
        float flZFar,
        double flFovX,
        float flAspect)
{
  float z; // eax
  Vector vLeft; // [rsp+0h] [rbp-80h] BYREF
  VPlane pPlanesOut; // [rsp+10h] [rbp-70h] BYREF

  z = right->z;
  *&vLeft.x = *&right->x ^ 0x8000000080000000LL;
  vLeft.z = -z;
  GeneratePerspectiveFrustumFLU(origin, forward, &vLeft, up, flZNear, flZFar, flFovX, flAspect, &pPlanesOut);
  Frustum_t::SetPlanes(this, &pPlanesOut);
}


// Frustum_t::CreatePerspectiveFrustum  (line 5537, @0x00000000030ea840, libserver.so)
// calls: AngleVectorsFLU, GeneratePerspectiveFrustumFLU, Frustum_t::SetPlanes
void __fastcall Frustum_t::CreatePerspectiveFrustum(
        Frustum_t *const this,
        const Vector *const origin,
        const QAngle *const angles,
        float flZNear,
        float flZFar,
        float flFovX,
        float flAspectRatio)
{
  Vector vecForward; // [rsp+20h] [rbp-C0h] BYREF
  Vector vecLeft; // [rsp+30h] [rbp-B0h] BYREF
  Vector vecUp; // [rsp+40h] [rbp-A0h] BYREF
  VPlane fplanes[6]; // [rsp+50h] [rbp-90h] BYREF

  AngleVectorsFLU(angles, &vecForward, &vecLeft, &vecUp);
  GeneratePerspectiveFrustumFLU(
    origin,
    &vecForward,
    &vecLeft,
    &vecUp,
    flZNear,
    flZFar,
    COERCE_DOUBLE(LODWORD(flFovX)),
    flAspectRatio,
    fplanes);
  Frustum_t::SetPlanes(this, fplanes);
}


// Frustum_t::CreateOrthoFrustumFLU  (line 5547, @0x00000000030ea900, libserver.so)
// calls: GenerateOrthoFrustumFLU, Frustum_t::SetPlanes
void __fastcall Frustum_t::CreateOrthoFrustumFLU(
        Frustum_t *const this,
        const Vector *const origin,
        const Vector *const forward,
        const Vector *const vLeft,
        const Vector *const up,
        float flLeft,
        float flRight,
        float flBottom,
        float flTop,
        float flZNear,
        float flZFar)
{
  VPlane fplanes[6]; // [rsp+0h] [rbp-70h] BYREF

  GenerateOrthoFrustumFLU(origin, forward, vLeft, up, flLeft, flRight, flBottom, flTop, flZNear, flZFar, fplanes);
  Frustum_t::SetPlanes(this, fplanes);
}


// Frustum_t::CreateOrthoFrustum  (line 5555, @0x00000000030ea940, libserver.so)  // inlines: CreateOrthoFrustumFLU, operator*=
// calls: GenerateOrthoFrustumFLU, Frustum_t::SetPlanes
void __fastcall Frustum_t::CreateOrthoFrustum(
        Frustum_t *const this,
        const Vector *const origin,
        const Vector *const forward,
        const Vector *const right,
        const Vector *const up,
        float flLeft,
        float flRight,
        float flBottom,
        float flTop,
        float flZNear,
        float flZFar)
{
  float z; // eax
  Vector vLeft; // [rsp+0h] [rbp-80h] BYREF
  VPlane pPlanesOut; // [rsp+10h] [rbp-70h] BYREF

  z = right->z;
  *&vLeft.x = *&right->x ^ 0x8000000080000000LL;
  vLeft.z = -z;
  GenerateOrthoFrustumFLU(origin, forward, &vLeft, up, flLeft, flRight, flBottom, flTop, flZNear, flZFar, &pPlanesOut);
  Frustum_t::SetPlanes(this, &pPlanesOut);
}


// Frustum_t::GetCorners  (line 5571, @0x00000000030ea9c0, libserver.so)
// calls: Frustum_t::GetPlanes, PlaneIntersection
// callers: Frustum_t::Intersects
bool __fastcall Frustum_t::GetCorners(const Frustum_t *const this, Vector *pPoints)
{
  VPlane fplanes[6]; // [rsp+10h] [rbp-90h] BYREF

  Frustum_t::GetPlanes(this, fplanes);
  return PlaneIntersection(&fplanes[4], &fplanes[1], &fplanes[3], pPoints)
      && PlaneIntersection(&fplanes[4], fplanes, &fplanes[3], pPoints + 1)
      && PlaneIntersection(&fplanes[4], &fplanes[1], &fplanes[2], pPoints + 2)
      && PlaneIntersection(&fplanes[4], fplanes, &fplanes[2], pPoints + 3)
      && PlaneIntersection(&fplanes[5], &fplanes[1], &fplanes[3], pPoints + 4)
      && PlaneIntersection(&fplanes[5], fplanes, &fplanes[3], pPoints + 5)
      && PlaneIntersection(&fplanes[5], &fplanes[1], &fplanes[2], pPoints + 6)
      && PlaneIntersection(&fplanes[5], fplanes, &fplanes[2], pPoints + 7);
}


// CalcTriangleTangentSpace  (line 5620, @0x00000000030eab50, libserver.so)  // inlines: CrossProduct, Init
// calls: VectorNormalize
// callers: CMesh::CalculateTangents
void __fastcall CalcTriangleTangentSpace(
        const Vector *const p0,
        const Vector *const p1,
        const Vector *const p2,
        const Vector2D *const t0,
        const Vector2D *const t1,
        const Vector2D *const t2,
        Vector *const sVect,
        Vector *const tVect)
{
  float y; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float x; // xmm8_4
  float v14; // xmm10_4
  float v15; // xmm0_4
  double v16; // xmm5_8
  float v17; // xmm9_4
  float v18; // xmm2_4
  float v19; // xmm8_4
  float v20; // xmm10_4
  float v21; // xmm9_4
  float v22; // xmm2_4
  float z; // xmm9_4
  float v24; // xmm7_4
  float v25; // xmm8_4

  sVect->x = 0.0;
  sVect->y = 0.0;
  sVect->z = 0.0;
  tVect->x = 0.0;
  tVect->y = 0.0;
  tVect->z = 0.0;
  y = t0->y;
  v9 = t1->y - y;
  v10 = t1->x - t0->x;
  v11 = t2->y - y;
  v12 = t2->x - t0->x;
  x = p0->x;
  v14 = p2->x;
  v15 = (v10 * v11) - (v9 * v12);
  v16 = fabs(v15);
  if ( v16 > 1.0e-12 )
  {
    v17 = p1->x - x;
    sVect->x = (-((v9 * (v14 - x)) - (v11 * v17)) / v15) + sVect->x;
    tVect->x = (-((v12 * v17) - (v10 * (v14 - x))) / v15) + tVect->x;
    v18 = t0->y;
    v9 = t1->y - v18;
    v11 = t2->y - v18;
    v10 = t1->x - t0->x;
    v12 = t2->x - t0->x;
    v15 = (v10 * v11) - (v9 * v12);
    v16 = fabs(v15);
  }
  v19 = p0->y;
  v20 = p2->y;
  if ( v16 > 1.0e-12 )
  {
    v21 = p1->y - v19;
    sVect->y = (-((v9 * (v20 - v19)) - (v11 * v21)) / v15) + sVect->y;
    tVect->y = (-((v12 * v21) - (v10 * (v20 - v19))) / v15) + tVect->y;
    v22 = t0->y;
    v9 = t1->y - v22;
    v11 = t2->y - v22;
    v10 = t1->x - t0->x;
    v12 = t2->x - t0->x;
    v15 = (v10 * v11) - (v9 * v12);
    v16 = fabs(v15);
  }
  z = p1->z;
  v24 = p0->z;
  v25 = p2->z;
  if ( v16 > 1.0e-12 )
  {
    sVect->z = (-((v9 * (v25 - v24)) - (v11 * (z - v24))) / v15) + sVect->z;
    tVect->z = (-((v12 * (z - v24)) - (v10 * (v25 - v24))) / v15) + tVect->z;
  }
  VectorNormalize(sVect);
  VectorNormalize(tVect);
}


// RGBtoHSV  (line 5671, @0x00000000030eade0, libserver.so)
void __fastcall RGBtoHSV(const Vector *const rgb, Vector *const hsv)
{
  float y; // xmm1_4
  float z; // xmm2_4
  float v4; // xmm3_4
  float v5; // xmm0_4
  float v6; // xmm2_4
  float v7; // xmm5_4
  float x; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm0_4

  y = rgb->y;
  z = rgb->z;
  v4 = fminf(rgb->x, y);
  v5 = fmaxf(fmaxf(rgb->x, y), z);
  hsv->z = v5;
  v6 = fminf(v4, z);
  if ( v5 == 0.0 )
  {
    hsv->y = 0.0;
LABEL_8:
    hsv->x = 0.0;
    return;
  }
  v7 = v5 - v6;
  hsv->y = (v5 - v6) / v5;
  if ( (v7 / v5) == 0.0 )
    goto LABEL_8;
  x = rgb->x;
  if ( v5 == x )
  {
    v10 = (rgb->y - rgb->z) / v7;
    hsv->x = v10;
  }
  else
  {
    v9 = rgb->y;
    if ( v5 == v9 )
      v10 = ((rgb->z - x) / v7) + 2.0;
    else
      v10 = ((x - v9) / v7) + 4.0;
    hsv->x = v10;
  }
  v11 = v10 * 60.0;
  if ( v11 < 0.0 )
    v11 = v11 + 360.0;
  hsv->x = v11;
}


// HSVtoRGB  (line 5723, @0x00000000030eaee0, libserver.so)  // inlines: Init
// globals: jpt_30EAF72
void __fastcall HSVtoRGB(const Vector *const hsv, Vector *const rgb)
{
  float y; // xmm0_4
  float x; // xmm1_4
  float v4; // xmm1_4
  int v5; // eax
  float v6; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm5_4
  float v10; // xmm1_4
  vec_t z; // xmm0_4

  y = hsv->y;
  if ( y == 0.0 )
  {
    z = hsv->z;
    rgb->x = z;
    rgb->y = z;
    rgb->z = z;
  }
  else
  {
    x = hsv->x;
    if ( x == 360.0 )
    {
      v7 = hsv->z;
      v10 = (1.0 - y) * v7;
      v8 = v10;
LABEL_6:
      rgb->x = v7;
      rgb->y = v10;
      rgb->z = v8;
    }
    else
    {
      v4 = x / 60.0;
      v5 = v4;
      v6 = v4 - v4;
      v7 = hsv->z;
      v8 = (1.0 - y) * v7;
      v9 = (1.0 - (y * v6)) * v7;
      v10 = (1.0 - ((1.0 - v6) * y)) * v7;
      switch ( v5 )
      {
        case 0:
          goto LABEL_6;
        case 1:
          rgb->x = v9;
          rgb->y = v7;
          rgb->z = v8;
          break;
        case 2:
          rgb->x = v8;
          rgb->y = v7;
          rgb->z = v10;
          break;
        case 3:
          rgb->x = v8;
          rgb->y = v9;
          rgb->z = v7;
          break;
        case 4:
          rgb->x = v10;
          rgb->y = v8;
          rgb->z = v7;
          break;
        case 5:
          rgb->x = v7;
          rgb->y = v8;
          rgb->z = v9;
          break;
        default:
          return;
      }
    }
  }
}


// RGBtoHSL  (line 5757, @0x00000000030eb020, libserver.so)
void __fastcall RGBtoHSL(const Vector *const rgb, Vector *const hsl)
{
  float y; // xmm2_4
  float z; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float x; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4

  y = rgb->y;
  z = rgb->z;
  v4 = fmaxf(fmaxf(rgb->x, y), z);
  v5 = fminf(fminf(rgb->x, y), z);
  v6 = v4 - v5;
  v7 = v5 + v4;
  hsl->z = v7 * 0.5;
  if ( fabs(v6) < 0.000099999997 )
  {
    hsl->y = 0.0;
LABEL_3:
    hsl->x = 0.0;
    return;
  }
  if ( (v7 * 0.5) < 0.5 )
    v8 = v6 / v7;
  else
    v8 = v6 / (2.0 - v7);
  hsl->y = v8;
  if ( v8 == 0.0 )
    goto LABEL_3;
  x = rgb->x;
  v10 = rgb->y;
  if ( v4 == rgb->x )
  {
    v11 = (v10 - rgb->z) / v6;
    hsl->x = v11;
  }
  else
  {
    if ( v4 == v10 )
      v11 = ((rgb->z - x) / v6) + 2.0;
    else
      v11 = ((x - v10) / v6) + 4.0;
    hsl->x = v11;
  }
  v12 = v11 * 60.0;
  if ( v12 < 0.0 )
    v12 = v12 + 360.0;
  hsl->x = v12;
}


// HSLtoRGB  (line 5817, @0x00000000030eb170, libserver.so)  // inlines: Init
// calls: V_fmodf
// globals: jpt_30EB26A
void __fastcall HSLtoRGB(const Vector *const hsl, Vector *const rgb)
{
  vec_t z; // xmm0_4
  double v5; // xmm0_8
  double v6; // xmm0_8
  float x; // xmm4_4
  float v8; // xmm5_4
  float y; // xmm1_4
  float v10; // xmm0_4
  float v11; // [rsp-18h] [rbp-20h]
  float v12; // [rsp-14h] [rbp-1Ch]

  if ( hsl->y == 0.0 )
  {
    z = hsl->z;
    rgb->x = z;
    rgb->y = z;
    rgb->z = z;
  }
  else
  {
    v5 = V_fmodf(hsl->x, 360.0);
    v12 = *&v5 / 60.0;
    v11 = (1.0 - fabs((hsl->z + hsl->z) - 1.0)) * hsl->y;
    v6 = V_fmodf(*&v5 / 60.0, 2.0);
    x = (1.0 - fabs(*&v6 - 1.0)) * v11;
    switch ( v12 )
    {
      case 0:
        rgb->y = x;
        y = x;
        v8 = 0.0;
        rgb->x = v11;
        x = v11;
        rgb->z = 0.0;
        break;
      case 1:
        rgb->x = x;
        y = v11;
        v8 = 0.0;
        rgb->y = v11;
        rgb->z = 0.0;
        break;
      case 2:
        rgb->z = x;
        v8 = x;
        y = v11;
        rgb->x = 0.0;
        x = 0.0;
        rgb->y = v11;
        break;
      case 3:
        rgb->y = x;
        y = x;
        v8 = v11;
        rgb->x = 0.0;
        x = 0.0;
        rgb->z = v11;
        break;
      case 4:
        rgb->x = x;
        v8 = v11;
        y = 0.0;
        rgb->y = 0.0;
        rgb->z = v11;
        break;
      case 5:
        rgb->z = x;
        v8 = x;
        y = 0.0;
        rgb->x = v11;
        x = v11;
        rgb->y = 0.0;
        break;
      default:
        x = rgb->x;
        y = rgb->y;
        v8 = rgb->z;
        break;
    }
    v10 = hsl->z - (v11 * 0.5);
    rgb->x = x + v10;
    rgb->y = y + v10;
    rgb->z = v10 + v8;
  }
}


// GetInterpolationData  (line 5848, @0x00000000030eb390, libserver.so)  // inlines: FLerp
void __fastcall GetInterpolationData(
        const float *pKnotPositions,
        float *pKnotValues,
        int nNumValuesinList,
        int nInterpolationRange,
        float flPositionToInterpolateAt,
        bool bWrap,
        float *pValueA,
        float *pValueB,
        float *pInterpolationValue)
{
  const float *v9; // r10
  __int64 i; // r11
  int v11; // eax
  float v12; // xmm1_4
  float v13; // xmm3_4
  __int64 v14; // rcx
  __int64 v15; // rdx
  float v16; // xmm0_4
  float v17; // xmm1_4
  int v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm2_4
  __int64 v21; // rax
  float v22; // xmm0_4
  float v23; // xmm2_4

  if ( nNumValuesinList > 0 && *pKnotPositions <= flPositionToInterpolateAt )
  {
    v9 = pKnotPositions + 1;
    for ( i = 0; ; i = v11 )
    {
      v11 = i + 1;
      if ( i + 1 == nNumValuesinList )
      {
        if ( bWrap )
        {
          v12 = nInterpolationRange;
          v13 = pKnotPositions[i];
          v14 = 0;
          v15 = i;
          v16 = flPositionToInterpolateAt - v13;
          v17 = (v12 - v13) + *pKnotPositions;
          goto LABEL_9;
        }
        if ( nNumValuesinList == 1 )
        {
          v22 = *pKnotValues;
        }
        else
        {
          v21 = nNumValuesinList;
          v22 = pKnotValues[v21 - 2];
          pKnotValues = &pKnotValues[v21 - 1];
        }
        *pValueA = v22;
        *pValueB = *pKnotValues;
        *pInterpolationValue = 1.0;
        return;
      }
      if ( *v9++ > flPositionToInterpolateAt )
        break;
    }
    if ( i == -1 )
      goto LABEL_11;
    v23 = pKnotPositions[i];
    v15 = i;
    v14 = v11;
    v16 = flPositionToInterpolateAt - v23;
    v17 = pKnotPositions[v14] - v23;
    goto LABEL_9;
  }
LABEL_11:
  if ( bWrap && *pKnotPositions != flPositionToInterpolateAt )
  {
    v19 = nInterpolationRange;
    v14 = 0;
    v15 = nNumValuesinList - 1;
    v20 = v19 - pKnotPositions[v15];
    v17 = *pKnotPositions + v20;
    v16 = flPositionToInterpolateAt + v20;
LABEL_9:
    *pValueA = pKnotValues[v15];
    *pValueB = pKnotValues[v14];
    *pInterpolationValue = (v16 / v17) + 0.0;
    return;
  }
  *pValueA = *pKnotValues;
  if ( nNumValuesinList <= 1 )
    v18 = *pKnotValues;
  else
    v18 = *(pKnotValues + 1);
  *pValueB = v18;
  *pInterpolationValue = 0.0;
}


// RandomVectorOnUnitSphere  (line 5918, @0x00000000030ded80, libserver.so)  // inlines: SinCos
// calls: V_acosf, sincosf
// callers: RandomVectorOnUnitSphere
__m128i __fastcall RandomVectorOnUnitSphere(float a1, float u, float v)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  float flSinPhi; // [rsp+4h] [rbp-48h]
  float flCosTheta; // [rsp+24h] [rbp-28h] BYREF
  float flSinTheta; // [rsp+28h] [rbp-24h] BYREF
  __m128i v10; // [rsp+2Ch] [rbp-20h] BYREF

  v3 = V_acosf(1.0 - (a1 + a1));
  sincosf(v3, &flSinTheta, &flCosTheta);
  flSinPhi = flSinTheta;
  v4 = u * 6.283185307179586;
  sincosf(v4, &flSinTheta, &flCosTheta);
  *&v10.m128i_i32[1] = flSinTheta * flSinPhi;
  *v10.m128i_i32 = flCosTheta * flSinPhi;
  return _mm_loadl_epi64(&v10);
}


// RandomVectorOnUnitSphere  (line 5932, @0x00000000030eb510, libserver.so)
// calls: RandomFloat, RandomVectorOnUnitSphere
// callers: UnitTestRotateBetween, RandomVectorInUnitSphere
Vector __cdecl RandomVectorOnUnitSphere()
{
  float v0; // xmm0_4
  float u; // [rsp+0h] [rbp-2Ch]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  u = RandomFloat(0.0, 1.0);
  v0 = RandomFloat(0.0, 1.0);
  *&result.x = RandomVectorOnUnitSphere(u, v0, u).m128i_u64[0];
  return result;
}


// RandomVectorOnUnitSphere  (line 5942, @0x00000000030eb620, libserver.so)
// calls: RandomVectorOnUnitSphere
// callers: RandomVectorInUnitSphere
Vector __fastcall RandomVectorOnUnitSphere(IUniformRandomStream *pRnd)
{
  float v2; // xmm0_4
  float v5; // [rsp-34h] [rbp-3Ch]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v5 = (*(*pRnd + 8LL))(pRnd, 0.0, 1.0);
  v2 = (*(*pRnd + 8LL))(pRnd, 0.0, 1.0);
  *&result.x = RandomVectorOnUnitSphere(v2, v5, v5).m128i_u64[0];
  return result;
}


// RandomVectorInUnitSphere  (line 5948, @0x00000000030eb670, libserver.so)  // inlines: VectorMultiply, operator*, operator=
// calls: RandomFloat, V_powf, RandomVectorOnUnitSphere
// callers: RandomVectorInUnitSphere
float __fastcall RandomVectorInUnitSphere(Vector *pVector)
{
  double v2; // xmm0_8
  float flRadius; // [rsp+0h] [rbp-2Ch]
  Vector v5; // 0:kr00_12.12

  *&v2 = RandomFloat(0.0, 1.0);
  flRadius = V_powf(v2, 0.33333334);
  v5 = RandomVectorOnUnitSphere();
  pVector->z = v5.z * flRadius;
  pVector->y = v5.y * flRadius;
  pVector->x = v5.x * flRadius;
  return flRadius;
}


// RandomVectorInUnitSphere  (line 5960, @0x00000000030eb6e0, libserver.so)
// calls: RandomVectorInUnitSphere
// callers: CreatePiecesFromPropData, CreatePiece, CreateGibsFromList
Vector __cdecl RandomVectorInUnitSphere()
{
  Vector vOut; // [rsp+10h] [rbp-20h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  RandomVectorInUnitSphere(&vOut);
  *&result.x = *&vOut.x;
  result.z = vOut.z;
  return result;
}


// RandomVectorInUnitSphere  (line 5967, @0x00000000030eb710, libserver.so)  // inlines: VectorMultiply, operator*
// calls: V_powf, RandomVectorOnUnitSphere
Vector __fastcall RandomVectorInUnitSphere(IUniformRandomStream *pRnd)
{
  double v2; // xmm0_8
  float flRadius; // [rsp+0h] [rbp-3Ch]
  __int64 v6; // [rsp+14h] [rbp-28h]
  Vector v7; // 0:kr00_12.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (*(*pRnd + 8LL))(pRnd, 0.0, 1.0);
  flRadius = V_powf(v2, 0.33333334);
  v7 = RandomVectorOnUnitSphere(pRnd);
  result.z = v7.z * flRadius;
  *&v6 = v7.x * flRadius;
  *(&v6 + 1) = v7.y * flRadius;
  *&result.x = v6;
  return result;
}


// RandomVectorInUnitCircle  (line 5980, @0x00000000030eb780, libserver.so)  // inlines: SinCos
// calls: RandomFloat, V_powf, sincosf
float __fastcall RandomVectorInUnitCircle(Vector2D *pVector)
{
  float v2; // xmm0_4
  vec_t v3; // xmm2_4
  float flRadius; // [rsp+0h] [rbp-28h]
  float flRadiusa; // [rsp+0h] [rbp-28h]
  float v7; // [rsp+4h] [rbp-24h]
  float v8; // [rsp+8h] [rbp-20h] BYREF
  float v9; // [rsp+Ch] [rbp-1Ch] BYREF

  flRadius = RandomFloat(0.0, 1.0);
  v7 = RandomFloat(0.0, 1.0);
  flRadiusa = V_powf(COERCE_DOUBLE(LODWORD(flRadius)), 0.5);
  v2 = v7 * 6.283185307179586;
  sincosf(v2, &v9, &v8);
  v3 = v8 * flRadiusa;
  pVector->y = v9 * flRadiusa;
  pVector->x = v3;
  return flRadiusa;
}


// RandomQuaternion  (line 5999, @0x00000000030eb820, libserver.so)
// calls: RandomFloat, V_sinf, V_acosf, V_cosf
// callers: UnitTestQuatExpLog, UnitTestVectorFLU, MatrixQuaternionTest, MatrixQuaternionFastTest, MatrixQuaternionTest2
Quaternion __cdecl RandomQuaternion()
{
  double v0; // xmm0_8
  float v1; // xmm0_4
  double v2; // xmm0_8
  float v3; // xmm0_4
  double v4; // xmm0_8
  __m128i v5; // xmm0
  float u; // [rsp+0h] [rbp-20h]
  float v; // [rsp+4h] [rbp-1Ch]
  float w; // [rsp+8h] [rbp-18h]
  float v11; // [rsp+Ch] [rbp-14h]
  unsigned int v12; // [rsp+Ch] [rbp-14h]
  float v13; // [rsp+10h] [rbp-10h]
  float v14; // [rsp+10h] [rbp-10h]
  unsigned int v15; // [rsp+10h] [rbp-10h]
  float v16; // [rsp+14h] [rbp-Ch]
  unsigned int v17; // [rsp+14h] [rbp-Ch]
  Quaternion result; // 0:xmm0_8.8,8:xmm1_8.8

  *&v0 = RandomFloat(0.0, 6.2831855);
  u = *&v0;
  v16 = V_sinf(v0);
  v1 = RandomFloat(COERCE_DOUBLE(3212836864LL), 1.0);
  *&v2 = V_acosf(v1);
  v = *&v2;
  v11 = V_sinf(v2);
  v13 = RandomFloat(0.0, 3.1415927);
  v3 = RandomFloat(0.0, 1.0);
  v4 = ((V_acosf(v3) + v13) + 1.570796326794897) * 0.5;
  w = *&v4;
  v14 = v11 * v16;
  *&v12 = V_sinf(v4) * (v11 * v16);
  *&v15 = V_cosf(w) * v14;
  *&v17 = v16 * V_cosf(v);
  *v5.m128i_i32 = V_cosf(u);
  *&result.x = (_mm_cvtsi128_si32(v17) << 32) | _mm_cvtsi128_si32(v5);
  *&result.z = (_mm_cvtsi128_si32(v12) << 32) | _mm_cvtsi128_si32(v15);
  return result;
}


// RandomQuaternion  (line 6009, @0x00000000030ebfc0, libserver.so)
// calls: V_sinf, V_acosf, V_cosf
Quaternion __fastcall RandomQuaternion(IUniformRandomStream *pRnd)
{
  double v2; // xmm0_8
  float v3; // xmm0_4
  double v4; // xmm0_8
  float v5; // xmm0_4
  double v6; // xmm0_8
  __m128i v7; // xmm0
  float u; // [rsp+0h] [rbp-30h]
  float v; // [rsp+4h] [rbp-2Ch]
  float w; // [rsp+8h] [rbp-28h]
  float v13; // [rsp+Ch] [rbp-24h]
  unsigned int v14; // [rsp+Ch] [rbp-24h]
  float v15; // [rsp+10h] [rbp-20h]
  float v16; // [rsp+10h] [rbp-20h]
  unsigned int v17; // [rsp+10h] [rbp-20h]
  float v18; // [rsp+14h] [rbp-1Ch]
  unsigned int v19; // [rsp+14h] [rbp-1Ch]
  Quaternion result; // 0:xmm0_8.8,8:xmm1_8.8

  v2 = (*(*pRnd + 8LL))(pRnd, 0.0, 6.2831855);
  u = *&v2;
  v18 = V_sinf(v2);
  v3 = (*(*pRnd + 8LL))(pRnd, -1.0, 1.0);
  *&v4 = V_acosf(v3);
  v = *&v4;
  v13 = V_sinf(v4);
  v15 = (*(*pRnd + 8LL))(pRnd, 0.0, 3.1415927);
  v5 = (*(*pRnd + 8LL))(pRnd, 0.0, 1.0);
  v6 = ((V_acosf(v5) + v15) + 1.570796326794897) * 0.5;
  w = *&v6;
  v16 = v13 * v18;
  *&v14 = V_sinf(v6) * (v13 * v18);
  *&v17 = V_cosf(w) * v16;
  *&v19 = v18 * V_cosf(v);
  *v7.m128i_i32 = V_cosf(u);
  *&result.x = (_mm_cvtsi128_si32(v19) << 32) | _mm_cvtsi128_si32(v7);
  *&result.z = (_mm_cvtsi128_si32(v14) << 32) | _mm_cvtsi128_si32(v17);
  return result;
}


// PlaneEquation  (line 6030, @0x00000000030ec130, libserver.so)  // inlines: FastSqrt, Init, Length, VectorLength, VectorMultiply, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+=, operator=
// callers: CTriangulatedPolygon::ConstructPolygon
void __fastcall PlaneEquation(const Vector *pVerts, int nVertCount, Vector *pOutNormal, float *pOutPlaneDistance)
{
  float v4; // xmm6_4
  const Vector *v5; // r9
  float v6; // xmm10_4
  float v7; // xmm9_4
  float v8; // xmm8_4
  float v9; // xmm7_4
  float v10; // xmm11_4
  int v11; // r8d
  float y; // xmm1_4
  float z; // xmm0_4
  const Vector *v14; // rax
  float v15; // xmm3_4
  float v16; // xmm4_4
  float x; // xmm2_4
  float v18; // xmm6_4
  float v19; // xmm0_4
  float v20; // xmm1_4

  if ( nVertCount <= 0 )
  {
    v19 = 0.0;
    v7 = 0.0;
    v8 = 0.0;
    v18 = -0.0;
    v9 = 0.0;
  }
  else
  {
    v4 = 0.0;
    v5 = pVerts;
    v6 = 0.0;
    v7 = 0.0;
    v8 = 0.0;
    v9 = 0.0;
    v10 = 0.0;
    v11 = 0;
    do
    {
      ++v11;
      y = v5->y;
      ++v5;
      z = v5[-1].z;
      v4 = v4 + y;
      v6 = v6 + z;
      v14 = &pVerts[v11 % nVertCount];
      v15 = v14->z;
      v16 = v14->y;
      v7 = v7 + ((y - v16) * (z + v15));
      x = v5[-1].x;
      v10 = v10 + x;
      v8 = v8 + ((z - v15) * (x + v14->x));
      v9 = v9 + ((x - v14->x) * (v16 + y));
    }
    while ( v11 != nVertCount );
    v18 = -(((v4 * v8) + (v10 * v7)) + (v6 * v9));
    v19 = ((v7 * v7) + (v8 * v8)) + (v9 * v9);
  }
  v20 = fsqrt(v19) + 0.00000011920929;
  pOutNormal->x = v7 * (1.0 / v20);
  pOutNormal->y = v8 * (1.0 / v20);
  pOutNormal->z = v9 * (1.0 / v20);
  *pOutPlaneDistance = v18 / (nVertCount * v20);
}


// GetBarycentricCoords3D  (line 6076, @0x00000000030ec2b0, libserver.so)  // inlines: Cross, CrossProduct, FastSqrt, FloatMakePositive, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// callers: CNavAreaExtended::GetLightIntensity, CTriangulatedPolygon::ComputeTextureCoordinateForPoint
bool __fastcall GetBarycentricCoords3D(
        const Vector *const v0,
        const Vector *const v1,
        const Vector *const v2,
        const Vector *const pt,
        float *const c0,
        float *const c1,
        float *const c2)
{
  float v7; // xmm13_4
  float v8; // xmm1_4
  float v9; // xmm10_4
  float y; // xmm3_4
  float v11; // xmm5_4
  float z; // xmm0_4
  float v13; // xmm9_4
  float v14; // xmm12_4
  float v15; // xmm11_4
  float v16; // xmm3_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm5_4
  float v21; // xmm0_4
  float v22; // xmm9_4
  float v23; // xmm10_4
  float x; // xmm11_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm9_4
  float v29; // xmm8_4
  float v30; // xmm7_4
  float v31; // xmm4_4
  float v32; // xmm9_4
  float v33; // xmm6_4
  float v34; // xmm1_4
  float v35; // xmm8_4
  float v36; // xmm8_4
  float v37; // xmm7_4
  float v38; // xmm4_4
  float v39; // xmm9_4
  float v40; // xmm6_4
  float v41; // xmm1_4
  float v42; // xmm2_4
  float v43; // xmm8_4
  float v44; // xmm0_4

  v9 = v1->x - v0->x;
  y = v0->y;
  v11 = v2->x - v0->x;
  z = v0->z;
  v13 = v1->y - y;
  v14 = v1->z - z;
  v15 = v2->z - z;
  v16 = v2->y - y;
  v17 = (v13 * v15) - (v14 * v16);
  v18 = v14 * v11;
  v19 = (v16 * v9) - (v11 * v13);
  v20 = 0.0;
  v21 = fsqrt(((v17 * v17) + ((v18 - (v15 * v9)) * (v18 - (v15 * v9)))) + (v19 * v19)) * 0.5;
  if ( v21 != 0.0 )
    v20 = 1.0 / v21;
  v22 = pt->z;
  v23 = pt->y;
  x = pt->x;
  v25 = v1->y - v23;
  v26 = v1->x - pt->x;
  v27 = v2->z - v22;
  v28 = v1->z - v22;
  v8 = v2->y;
  v7 = v2->x;
  *c0 = (fsqrt(
           ((((v25 * v27) - (v28 * (v8 - v23))) * ((v25 * v27) - (v28 * (v8 - v23))))
          + (((v28 * (v7 - x)) - (v27 * v26)) * ((v28 * (v7 - x)) - (v27 * v26))))
         + ((((v8 - v23) * v26) - ((v7 - x) * v25)) * (((v8 - v23) * v26) - ((v7 - x) * v25))))
       * 0.5)
      * v20;
  v29 = pt->y;
  v30 = v2->x - pt->x;
  v31 = v0->x - pt->x;
  v32 = pt->z;
  v33 = v2->y - v29;
  v34 = v0->y - v29;
  v35 = v0->z - v32;
  *c1 = (fsqrt(
           ((((v33 * v35) - ((v2->z - v32) * v34)) * ((v33 * v35) - ((v2->z - v32) * v34)))
          + ((((v2->z - v32) * v31) - (v35 * v30)) * (((v2->z - v32) * v31) - (v35 * v30))))
         + (((v34 * v30) - (v31 * v33)) * ((v34 * v30) - (v31 * v33))))
       * 0.5)
      * v20;
  v36 = pt->y;
  v37 = v0->x - pt->x;
  v38 = v1->x - pt->x;
  v39 = pt->z;
  v40 = v0->y - v36;
  v41 = v1->y - v36;
  v42 = v0->z - v39;
  v43 = v1->z - v39;
  v44 = (fsqrt(
           ((((v40 * v43) - (v42 * v41)) * ((v40 * v43) - (v42 * v41)))
          + (((v42 * v38) - (v43 * v37)) * ((v42 * v38) - (v43 * v37))))
         + (((v41 * v37) - (v38 * v40)) * ((v41 * v37) - (v38 * v40))))
       * 0.5)
      * v20;
  *c2 = v44;
  return fabs(1.0 - ((*c0 + *c1) + v44)) < 0.001;
}


// PointsFromBox  (line 6133, @0x00000000030ec5c0, libserver.so)  // inlines: operator[]
// callers: BuildTransformedBox
void __fastcall PointsFromBox(const Vector *const mins, const Vector *const maxs, Vector *points)
{
  *points = *mins;
  points[1].x = mins->x;
  points[1].y = mins->y;
  points[1].z = maxs->z;
  points[2].x = mins->x;
  points[2].y = maxs->y;
  points[2].z = mins->z;
  points[3].x = mins->x;
  points[3].y = maxs->y;
  points[3].z = maxs->z;
  points[4].x = maxs->x;
  points[4].y = mins->y;
  points[4].z = mins->z;
  points[5].x = maxs->x;
  points[5].y = mins->y;
  points[5].z = maxs->z;
  points[6].x = maxs->x;
  points[6].y = maxs->y;
  points[6].z = mins->z;
  points[7] = *maxs;
}


// BuildTransformedBox  (line 6168, @0x00000000030ec6b0, libserver.so)  // inlines: VectorTransform
// calls: PointsFromBox, VectorTransform
void __fastcall BuildTransformedBox(
        Vector *v2,
        const Vector *const bbmin,
        const Vector *const bbmax,
        const matrix3x4_t *const m)
{
  Vector v[8]; // [rsp+0h] [rbp-80h] BYREF

  PointsFromBox(bbmin, bbmax, v);
  VectorTransform(&v[0].x, m, &v2->x);
  VectorTransform(&v[1].x, m, &v2[1].x);
  VectorTransform(&v[2].x, m, &v2[2].x);
  VectorTransform(&v[3].x, m, &v2[3].x);
  VectorTransform(&v[4].x, m, &v2[4].x);
  VectorTransform(&v[5].x, m, &v2[5].x);
  VectorTransform(&v[6].x, m, &v2[6].x);
  VectorTransform(&v[7].x, m, &v2[7].x);
}


