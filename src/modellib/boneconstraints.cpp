
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_boneconstraints.cpp  (line 0, @0x0000000001a6b0f0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_boneconstraints_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CModel::CalcProceduralBones  (line 24, @0x000000000315c870, libserver.so)
// calls: CModel::GetNumMeshes, CModel::GetMeshData
// callers: CSkeletonInstance::CalcWorldSpaceBones
bool __fastcall CModel::CalcProceduralBones(
        const CModel *const this,
        matrix3x4a_t *pWorldTransformsIn,
        CVarBitVec *pSubTree,
        const float *pFlexControlsIn)
{
  const CRenderMesh *MeshData; // rax
  const CRenderMesh *v7; // r14
  __int64 v8; // r12
  int v9; // ebx
  CBaseConstraint *v10; // rdi

  if ( CModel::GetNumMeshes(this) <= 0 )
    return 0;
  MeshData = CModel::GetMeshData(this, 0);
  v7 = MeshData;
  if ( MeshData->m_constraints.m_Size == 0 )
    return 0;
  v8 = 0;
  v9 = 0;
  if ( MeshData->m_constraints.m_Size > 0 )
  {
    do
    {
      ++v9;
      v10 = v7->m_constraints.m_Memory.m_pMemory[v8++];
      (*(v10->_vptr_CBaseConstraint + 7))(v10, this, pWorldTransformsIn, pFlexControlsIn);
    }
    while ( v7->m_constraints.m_Size > v9 );
  }
  return 1;
}


// CBaseConstraint::CBaseConstraint  (line 46, @0x000000000315c910, libserver.so)  // inlines: CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Vector
// callers: CPointConstraint::CPointConstraint, COrientConstraint::COrientConstraint, CAimConstraint::CAimConstraint, CTwistConstraint::CTwistConstraint, CTiltTwistConstraint::CTiltTwistConstraint, CMorphConstraint::CMorphConstraint
void __fastcall CBaseConstraint::CBaseConstraint(CBaseConstraint *const this)
{
  this->m_name.m_pString = 0;
  this->m_vUpVector.x = 0.0;
  this->m_vUpVector.y = 0.0;
  this->m_vUpVector.z = 0.0;
  this->_vptr_CBaseConstraint = &off_47C6F70;
  this->m_slaves.m_Size = 0;
  this->m_slaves.m_Memory.m_pMemory = 0;
  this->m_slaves.m_Memory.m_nAllocationCount = 0;
  this->m_slaves.m_Memory.m_nGrowSize = 0;
  this->m_targets.m_Size = 0;
  this->m_targets.m_Memory.m_pMemory = 0;
  this->m_targets.m_Memory.m_nAllocationCount = 0;
  this->m_targets.m_Memory.m_nGrowSize = 0;
}


// CBaseConstraint::Init  (line 51, @0x000000000315c980, libserver.so)
// calls: CUtlString::Set
void __fastcall CBaseConstraint::Init(CBaseConstraint *const this, const char *pName)
{
  CUtlString::Set(&this->m_name, pName);
}


// CBaseConstraint::Init  (line 56, @0x000000000315c990, libserver.so)  // inlines: operator=
// calls: CUtlString::Set
void __fastcall CBaseConstraint::Init(CBaseConstraint *const this, const char *pName, const Vector *const vUpVector)
{
  CUtlString::Set(&this->m_name, pName);
  this->m_vUpVector = *vUpVector;
}


// CBaseConstraint::AddSlave  (line 62, @0x000000000315db40, libserver.so)  // inlines: AddToTail, GrowMemory, operator=, operator[]
// calls: CUtlMemory<CConstraintSlave, int>::Grow
void __fastcall CBaseConstraint::AddSlave(
        CBaseConstraint *const this,
        uint32 nBoneHash,
        float flWeight,
        const Vector *const vBasePosition,
        const Quaternion *const qBaseOrientation)
{
  __int64 m_Size; // r12
  int v8; // eax
  CConstraintSlave *v9; // rax
  const Quaternion *qBaseOrientationa; // [rsp+8h] [rbp-38h]
  const Vector *vBasePositiona; // [rsp+10h] [rbp-30h]
  float flWeighta; // [rsp+1Ch] [rbp-24h]

  m_Size = this->m_slaves.m_Size;
  v8 = this->m_slaves.m_Size;
  if ( m_Size == this->m_slaves.m_Memory.m_nAllocationCount )
  {
    qBaseOrientationa = qBaseOrientation;
    vBasePositiona = vBasePosition;
    flWeighta = flWeight;
    CUtlMemory<CConstraintSlave,int>::Grow(&this->m_slaves.m_Memory, 1);
    v8 = this->m_slaves.m_Size;
    qBaseOrientation = qBaseOrientationa;
    vBasePosition = vBasePositiona;
    flWeight = flWeighta;
  }
  this->m_slaves.m_Size = v8 + 1;
  v9 = &this->m_slaves.m_Memory.m_pMemory[m_Size];
  v9->m_nBoneHash = nBoneHash;
  v9->m_flWeight = flWeight;
  v9->m_vBasePosition = *vBasePosition;
  v9->m_qBaseOrientation = *qBaseOrientation;
}


// CBaseConstraint::AddTarget  (line 71, @0x000000000315dc00, libserver.so)  // inlines: AddToTail, GrowMemory, operator=, operator[]
// calls: CUtlMemory<CConstraintTarget, int>::Grow
void __fastcall CBaseConstraint::AddTarget(
        CBaseConstraint *const this,
        uint32 nBoneHash,
        float flWeight,
        const Vector *const vOffset,
        const Quaternion *const qOffset,
        bool bIsAttachment)
{
  __int64 m_Size; // r12
  int v9; // eax
  CConstraintTarget *v10; // rax
  vec_t w; // xmm0_4
  const Quaternion *qOffseta; // [rsp+8h] [rbp-38h]
  const Vector *vOffseta; // [rsp+10h] [rbp-30h]
  bool v14; // [rsp+18h] [rbp-28h]
  float flWeighta; // [rsp+1Ch] [rbp-24h]

  m_Size = this->m_targets.m_Size;
  v9 = this->m_targets.m_Size;
  if ( m_Size == this->m_targets.m_Memory.m_nAllocationCount )
  {
    v14 = bIsAttachment;
    qOffseta = qOffset;
    vOffseta = vOffset;
    flWeighta = flWeight;
    CUtlMemory<CConstraintTarget,int>::Grow(&this->m_targets.m_Memory, 1);
    v9 = this->m_targets.m_Size;
    bIsAttachment = v14;
    qOffset = qOffseta;
    vOffset = vOffseta;
    flWeight = flWeighta;
  }
  this->m_targets.m_Size = v9 + 1;
  v10 = &this->m_targets.m_Memory.m_pMemory[m_Size];
  v10->m_nBoneHash = nBoneHash;
  v10->m_flWeight = flWeight;
  v10->m_vOffset = *vOffset;
  v10->m_qOffset.x = qOffset->x;
  v10->m_qOffset.y = qOffset->y;
  v10->m_qOffset.z = qOffset->z;
  w = qOffset->w;
  v10->m_bIsAttachment = bIsAttachment;
  v10->m_qOffset.w = w;
}


// CBaseConstraint::UsesBone  (line 81, @0x000000000315c7f0, libserver.so)
bool __fastcall CBaseConstraint::UsesBone(const CBaseConstraint *const this, uint32 nBoneHash)
{
  int m_Size; // edx
  CConstraintSlave *m_pMemory; // rax
  CConstraintSlave *v4; // rdx
  int v5; // edx
  CConstraintTarget *v6; // rax
  __int64 v7; // rdx

  m_Size = this->m_slaves.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_slaves.m_Memory.m_pMemory;
    if ( m_pMemory->m_nBoneHash == nBoneHash )
      return 1;
    v4 = &m_pMemory[m_Size - 1];
    while ( m_pMemory != v4 )
    {
      ++m_pMemory;
      if ( m_pMemory->m_nBoneHash == nBoneHash )
        return 1;
    }
  }
  v5 = this->m_targets.m_Size;
  if ( v5 > 0 )
  {
    v6 = this->m_targets.m_Memory.m_pMemory;
    v7 = &v6[(v5 - 1) + 1];
    while ( v6->m_bIsAttachment || nBoneHash != v6->m_nBoneHash )
    {
      if ( ++v6 == v7 )
        return 0;
    }
    return 1;
  }
  return 0;
}


// CPointConstraint::CPointConstraint  (line 105, @0x000000000315c9d0, libserver.so)
// calls: CBaseConstraint::CBaseConstraint
// callers: CRenderMesh::InitFromOldDiskData, CSchemaClassBinding<CPointConstraint>::Allocate, CSchemaClassBinding<CPointConstraint>::ConstructInPlace, CSchemaClassBinding<CPointConstraint>::AllocateAndCopyConstruct
void __fastcall CPointConstraint::CPointConstraint(CPointConstraint *const this)
{
  CBaseConstraint::CBaseConstraint(this);
  this->_vptr_CBaseConstraint = &off_47C7070;
}


// CPointConstraint::Init  (line 113, @0x000000000315c9f0, libserver.so)  // inlines: Init
// calls: CUtlString::Set
void __fastcall CPointConstraint::Init(CPointConstraint *const this, const char *pName)
{
  CUtlString::Set(&this->m_name, pName);
}


// CPointConstraint::Compute  (line 122, @0x000000000315c6f0, libserver.so)
// calls: CStudioConstraintBones::ComputePointConstraint
void __fastcall CPointConstraint::Compute(
        CPointConstraint *const this,
        const CModel *pModel,
        matrix3x4a_t *pWorldTransformsInOut,
        const float *pFlexControlsIn)
{
  CStudioConstraintBones::ComputePointConstraint(pWorldTransformsInOut, pModel, this);
}


// COrientConstraint::COrientConstraint  (line 131, @0x000000000315ca00, libserver.so)
// calls: CBaseConstraint::CBaseConstraint
// callers: CRenderMesh::InitFromOldDiskData, CSchemaClassBinding<COrientConstraint>::Allocate, CSchemaClassBinding<COrientConstraint>::ConstructInPlace, CSchemaClassBinding<COrientConstraint>::AllocateAndCopyConstruct
void __fastcall COrientConstraint::COrientConstraint(COrientConstraint *const this)
{
  CBaseConstraint::CBaseConstraint(this);
  this->_vptr_CBaseConstraint = &off_47C7170;
}


// COrientConstraint::Init  (line 139, @0x000000000315ca20, libserver.so)  // inlines: Init
// calls: CUtlString::Set
void __fastcall COrientConstraint::Init(COrientConstraint *const this, const char *pName)
{
  CUtlString::Set(&this->m_name, pName);
}


// COrientConstraint::Compute  (line 148, @0x000000000315c710, libserver.so)
// calls: CStudioConstraintBones::ComputeOrientConstraint
void __fastcall COrientConstraint::Compute(
        COrientConstraint *const this,
        const CModel *pModel,
        matrix3x4a_t *pWorldTransformsInOut,
        const float *pFlexControlsIn)
{
  CStudioConstraintBones::ComputeOrientConstraint(pWorldTransformsInOut, pModel, this);
}


// CAimConstraint::CAimConstraint  (line 157, @0x000000000315ca30, libserver.so)  // inlines: Quaternion
// calls: CBaseConstraint::CBaseConstraint
// callers: CRenderMesh::InitFromOldDiskData, CSchemaClassBinding<CAimConstraint>::Allocate, CSchemaClassBinding<CAimConstraint>::ConstructInPlace, CSchemaClassBinding<CAimConstraint>::AllocateAndCopyConstruct
void __fastcall CAimConstraint::CAimConstraint(CAimConstraint *const this)
{
  CBaseConstraint::CBaseConstraint(this);
  this->m_qAimOffset.w = 1.0;
  this->m_qAimOffset.x = 0.0;
  this->m_qAimOffset.y = 0.0;
  this->m_qAimOffset.z = 0.0;
  this->_vptr_CBaseConstraint = &off_47C7270;
}


// CAimConstraint::Init  (line 162, @0x000000000315ca70, libserver.so)  // inlines: Init, operator=
// calls: CUtlString::Set
void __fastcall CAimConstraint::Init(
        CAimConstraint *const this,
        const char *pName,
        const Quaternion *const qAimOffset,
        const Vector *const vUpVector,
        uint nUpType)
{
  vec_t w; // xmm0_4

  CUtlString::Set(&this->m_name, pName);
  this->m_vUpVector = *vUpVector;
  this->m_qAimOffset.x = qAimOffset->x;
  this->m_qAimOffset.y = qAimOffset->y;
  this->m_qAimOffset.z = qAimOffset->z;
  w = qAimOffset->w;
  this->m_nUpType = nUpType;
  this->m_qAimOffset.w = w;
}


// CAimConstraint::Compute  (line 169, @0x000000000315c730, libserver.so)
// calls: CStudioConstraintBones::ComputeAimConstraint
void __fastcall CAimConstraint::Compute(
        CAimConstraint *const this,
        const CModel *pModel,
        matrix3x4a_t *pWorldTransformsInOut,
        const float *pFlexControlsIn)
{
  CStudioConstraintBones::ComputeAimConstraint(pWorldTransformsInOut, pModel, this);
}


// CTwistConstraint::CTwistConstraint  (line 177, @0x000000000315caf0, libserver.so)  // inlines: Quaternion
// calls: CBaseConstraint::CBaseConstraint
// callers: CRenderMesh::InitFromOldDiskData, CSchemaClassBinding<CTwistConstraint>::Allocate, CSchemaClassBinding<CTwistConstraint>::ConstructInPlace, CSchemaClassBinding<CTwistConstraint>::AllocateAndCopyConstruct
void __fastcall CTwistConstraint::CTwistConstraint(CTwistConstraint *const this)
{
  CBaseConstraint::CBaseConstraint(this);
  this->m_bInverse = 0;
  this->m_qParentBindRotation.x = 0.0;
  this->m_qParentBindRotation.y = 0.0;
  this->m_qParentBindRotation.z = 0.0;
  this->_vptr_CBaseConstraint = &off_47C7370;
  this->m_qParentBindRotation.w = 1.0;
  this->m_qChildBindRotation.x = 0.0;
  this->m_qChildBindRotation.y = 0.0;
  this->m_qChildBindRotation.z = 0.0;
  this->m_qChildBindRotation.w = 1.0;
}


// CTwistConstraint::Init  (line 184, @0x000000000315cb50, libserver.so)  // inlines: Init, operator=
// calls: CUtlString::Set
void __fastcall CTwistConstraint::Init(
        CTwistConstraint *const this,
        const char *pName,
        bool bInverse,
        const Vector *const vUp,
        const Quaternion *const qParentBindRotation,
        const Quaternion *const qChildBindRotation)
{
  vec_t z; // xmm0_4

  CUtlString::Set(&this->m_name, pName);
  this->m_vUpVector.x = vUp->x;
  this->m_vUpVector.y = vUp->y;
  z = vUp->z;
  this->m_bInverse = bInverse;
  this->m_vUpVector.z = z;
  this->m_qParentBindRotation = *qParentBindRotation;
  this->m_qChildBindRotation = *qChildBindRotation;
}


// CTwistConstraint::Compute  (line 192, @0x000000000315c750, libserver.so)
// calls: CStudioConstraintBones::ComputeTwistConstraint
void __fastcall CTwistConstraint::Compute(
        CTwistConstraint *const this,
        const CModel *pModel,
        matrix3x4a_t *pWorldTransformsInOut,
        const float *pFlexControlsIn)
{
  CStudioConstraintBones::ComputeTwistConstraint(pWorldTransformsInOut, pModel, this);
}


// CTiltTwistConstraint::CTiltTwistConstraint  (line 200, @0x000000000315cc10, libserver.so)  // inlines: operator=
// calls: CBaseConstraint::CBaseConstraint
// callers: CRenderMesh::InitFromOldDiskData, CSchemaClassBinding<CTiltTwistConstraint>::Allocate, CSchemaClassBinding<CTiltTwistConstraint>::ConstructInPlace, CSchemaClassBinding<CTiltTwistConstraint>::AllocateAndCopyConstruct
void __fastcall CTiltTwistConstraint::CTiltTwistConstraint(CTiltTwistConstraint *const this)
{
  vec_t x; // xmm0_4

  CBaseConstraint::CBaseConstraint(this);
  this->m_bTwistLastValid = 0;
  this->m_nTargetAxis = 0;
  this->m_nSlaveAxis = 0;
  this->m_flTwistLast = 0.0;
  this->m_bCached = 0;
  this->_vptr_CBaseConstraint = &off_47C7470;
  this->m_nTargetBoneIndex = -1;
  this->m_nTargetParentBoneIndex = -1;
  this->m_nSlaveBoneIndex = -1;
  x = quat_identity.x;
  this->m_nSlaveParentBoneIndex = -1;
  this->m_qBindInverseParentSpace.x = x;
  this->m_qBindInverseParentSpace.y = quat_identity.y;
  this->m_qBindInverseParentSpace.z = quat_identity.z;
  this->m_qBindInverseParentSpace.w = quat_identity.w;
}


// CTiltTwistConstraint::Init  (line 216, @0x000000000315cca0, libserver.so)  // inlines: Init
// calls: CUtlString::Set
void __fastcall CTiltTwistConstraint::Init(
        CTiltTwistConstraint *const this,
        const char *pName,
        int nTargetAxis,
        int nSlaveAxis)
{
  CUtlString::Set(&this->m_name, pName);
  this->m_nTargetAxis = nTargetAxis;
  this->m_nSlaveAxis = nSlaveAxis;
}


// CTiltTwistConstraint::Compute  (line 224, @0x000000000315d610, libserver.so)  // inlines: Quaternion, RadianEuler, operator[]
// calls: CTiltTwistConstraint::CacheModelData, CTiltTwistConstraint::GetTwistMatrix, CTiltTwistConstraint::ComputeTwistAroundAxisInRadians, AngleQuaternion, MatrixInvert, ConcatTransforms_Aligned, QuaternionMatrixOrientationOnly, CStudioConstraintBones::UpdateWorldTransformAndChildren, CTiltTwistConstraint::ComputeNoFlipAngle
void __fastcall CTiltTwistConstraint::Compute(
        CTiltTwistConstraint *const this,
        const CModel *pModel,
        matrix3x4a_t *pWorldTransformsInOut,
        const float *pFlexControlsIn)
{
  CConstraintSlave *m_pMemory; // r15
  float v8; // xmm1_4
  vec_t v9; // xmm0_4
  __int64 m_nSlaveAxis; // rax
  matrix3x4a_t *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 m_nSlaveParentBoneIndex; // rax
  const matrix3x4a_t *mSlaveParentWorld; // [rsp+10h] [rbp-120h]
  RadianEuler eTwist; // [rsp+20h] [rbp-110h] BYREF
  Quaternion qTwist; // [rsp+30h] [rbp-100h] BYREF
  matrix3x4a_t mTargetTwist; // [rsp+40h] [rbp-F0h] BYREF
  matrix3x4a_t mSlaveWorld; // [rsp+70h] [rbp-C0h] BYREF
  matrix3x4a_t mSlaveLocal; // [rsp+A0h] [rbp-90h] BYREF
  matrix3x4a_t mSlaveParentWorldInverse; // [rsp+D0h] [rbp-60h] BYREF

  if ( CTiltTwistConstraint::CacheModelData(this, pModel) )
  {
    m_pMemory = this->m_slaves.m_Memory.m_pMemory;
    CTiltTwistConstraint::GetTwistMatrix(this, &mTargetTwist, pWorldTransformsInOut);
    v9 = CTiltTwistConstraint::ComputeTwistAroundAxisInRadians(&mTargetTwist, this->m_nTargetAxis, 0.000099999997, v8)
       * m_pMemory->m_flWeight;
    if ( this->m_bTwistLastValid )
      v9 = CTiltTwistConstraint::ComputeNoFlipAngle(this->m_flTwistLast, v9, this->m_flTwistLast);
    else
      this->m_bTwistLastValid = 1;
    m_nSlaveAxis = this->m_nSlaveAxis;
    this->m_flTwistLast = v9;
    eTwist.x = 0.0;
    eTwist.y = 0.0;
    eTwist.z = 0.0;
    *(&eTwist.x + m_nSlaveAxis) = v9;
    AngleQuaternion(&eTwist, &qTwist);
    v11 = &pWorldTransformsInOut[this->m_nSlaveBoneIndex];
    *&mSlaveWorld.m_flMatVal[0][0] = *&v11->m_flMatVal[0][0];
    *&mSlaveWorld.m_flMatVal[1][0] = *&v11->m_flMatVal[1][0];
    v12 = *&v11->m_flMatVal[2][0];
    v13 = *&v11->m_flMatVal[2][2];
    *&mSlaveWorld.m_flMatVal[2][0] = v12;
    *&mSlaveWorld.m_flMatVal[2][2] = v13;
    m_nSlaveParentBoneIndex = this->m_nSlaveParentBoneIndex;
    if ( m_nSlaveParentBoneIndex < 0 )
    {
      QuaternionMatrixOrientationOnly(&qTwist, &mSlaveWorld);
    }
    else
    {
      mSlaveParentWorld = &pWorldTransformsInOut[m_nSlaveParentBoneIndex];
      MatrixInvert(mSlaveParentWorld, &mSlaveParentWorldInverse);
      ConcatTransforms_Aligned(&mSlaveParentWorldInverse, &mSlaveWorld, &mSlaveLocal);
      QuaternionMatrixOrientationOnly(&qTwist, &mSlaveLocal);
      ConcatTransforms_Aligned(mSlaveParentWorld, &mSlaveLocal, &mSlaveWorld);
    }
    CStudioConstraintBones::UpdateWorldTransformAndChildren(
      pWorldTransformsInOut,
      pModel,
      this->m_nSlaveBoneIndex,
      &mSlaveWorld);
  }
}


// CTiltTwistConstraint::NormalizeAngle  (line 287, @0x000000000315cce0, libserver.so)
// calls: floorf
float __fastcall CTiltTwistConstraint::NormalizeAngle(float a1, float flAngle)
{
  float v2; // xmm0_4
  __m128d v3; // xmm1
  float flAngleOffset; // [rsp+Ch] [rbp-4h]

  flAngleOffset = a1 + 6.2831855;
  v2 = floorf((a1 + 6.2831855) / 12.566371);
  v3.m128d_f64[1] = flAngleOffset;
  v3.m128d_f64[0] = flAngleOffset - v2 * 12.56637096405029 - 6.283185482025146;
  return _mm_movedup_pd(v3).m128d_f64[0];
}


// CTiltTwistConstraint::ComputeNoFlipAngle  (line 304, @0x000000000315cd40, libserver.so)  // inlines: NormalizeAngle
// calls: floorf
// callers: CTiltTwistConstraint::Compute
float __fastcall CTiltTwistConstraint::ComputeNoFlipAngle(float a1, float flAngleOld, float flAngleNew)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v9; // [rsp+8h] [rbp-8h]

  if ( a1 == flAngleOld )
    return flAngleOld;
  v3 = (a1 + 6.2831855) - floorf((a1 + 6.2831855) / 12.566371) * 12.56637096405029 - 6.283185482025146;
  v9 = v3;
  v4 = (flAngleOld + 6.2831855) - floorf((flAngleOld + 6.2831855) / 12.566371) * 12.56637096405029 - 6.283185482025146;
  v5 = v4 - v9;
  if ( fabs(v4 - v9) < 3.1415927 )
    return v5 + a1;
  if ( v4 <= v9 )
    return (v5 + 6.2831855) + a1;
  return (v5 - 6.2831855) + a1;
}


// CTiltTwistConstraint::ComputeTwistAroundAxisInRadians  (line 341, @0x000000000315ce70, libserver.so)  // inlines: Clamp<float>, FloatsAreEqual, GetColumn, MatrixGetColumn, operator=, operator[]
// calls: MatrixNormalize, floorf, acos, frexpf, atan2, sincosf
// callers: CTiltTwistConstraint::Compute
float __fastcall CTiltTwistConstraint::ComputeTwistAroundAxisInRadians(
        matrix3x4a_t *const mRot,
        int nAxis,
        float a3,
        float flEps)
{
  matrix3x4a_t *v5; // rdx
  Vector *v6; // rcx
  vec_t v7; // xmm0_4
  vec_t v8; // xmm1_4
  vec_t v9; // xmm2_4
  Vector *v10; // r13
  float v11; // xmm1_4
  double v12; // xmm0_8
  float v13; // xmm0_4
  float v14; // xmm0_4
  __int64 v15; // rdx
  float v16; // xmm2_4
  float v17; // xmm1_4
  int v18; // esi
  __int64 v19; // r15
  int v20; // edx
  __int64 v21; // r12
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  float result; // xmm0_4
  __int64 v27; // rax
  float v28; // xmm1_4
  Vector *v29; // rbx
  float v30; // xmm0_4
  __int64 v31; // rdx
  float v32; // xmm3_4
  float v33; // xmm4_4
  float v34; // xmm3_4
  __int64 v35; // rax
  float v36; // xmm3_4
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // [rsp+18h] [rbp-C8h]
  float v40; // [rsp+18h] [rbp-C8h]
  float cosx; // [rsp+28h] [rbp-B8h] BYREF
  float sinx[4]; // [rsp+2Ch] [rbp-B4h] BYREF
  int exponent; // [rsp+3Ch] [rbp-A4h] BYREF
  Vector v45; // [rsp+40h] [rbp-A0h]
  Vector ijk_[3]; // [rsp+50h] [rbp-90h] BYREF
  matrix3x4a_t mRotNormalized; // [rsp+80h] [rbp-60h] BYREF
  Vector v48; // 0:kr00_12.12

  v48 = MatrixNormalize(mRot, &mRotNormalized);
  v5 = mRotNormalized.m_flMatVal[2];
  v6 = ijk_;
  v45 = v48;
  do
  {
    v7 = v5->m_flMatVal[0][0];
    v5 = (v5 + 4);
    ++v6;
    v8 = v5[-1].m_flMatVal[1][3];
    v9 = v5[-1].m_flMatVal[0][3];
    v6[-1].z = v7;
    v6[-1].y = v8;
    v6[-1].x = v9;
  }
  while ( v5 != &mRotNormalized.m_flMatVal[2][3] );
  v10 = &ijk_[nAxis];
  v39 = 4LL * nAxis;
  v11 = floorf((10000000.0 * *(&v10->x + v39)) + 0.5) / 10000000.0;
  if ( v11 < -1.0 )
  {
    v12 = 0.0;
  }
  else
  {
    v12 = 0.0;
    if ( v11 <= 1.0 )
    {
      if ( v11 < 0.0 )
        v12 = (v11 + 1.0);
      else
        v12 = (1.0 - v11);
    }
  }
  v13 = acos(v12);
  v14 = frexpf(v13, &exponent);
  if ( exponent <= 1 )
  {
    v17 = 0.78539819;
    if ( exponent != 1 )
    {
      v27 = 1LL << (1 - exponent);
      if ( v27 < 0 )
        v28 = (v27 & 1 | (v27 >> 1)) + (v27 & 1 | (v27 >> 1));
      else
        v28 = v27;
      v14 = v14 / v28;
      v17 = 0.78539819;
    }
  }
  else
  {
    v15 = 1LL << (exponent - 1);
    if ( v15 < 0 )
    {
      v37 = (1LL << (exponent - 1)) & 1 | ((1LL << (exponent - 1)) >> 1);
      v16 = v37 + v37;
    }
    else
    {
      v16 = v15;
    }
    v17 = 0.78539819 / v16;
  }
  v18 = (nAxis + 2) % 3;
  v19 = v18;
  v20 = (nAxis + 1) % 3;
  if ( a3 < fabs(v14 - v17) )
  {
    v21 = v20;
    v22 = atan2(*(&v10->x + v18), *(&v10->x + v20));
    sincosf(v22, sinx, &cosx);
    v23 = -*(&ijk_[v21].x + v39);
    v24 = (v23 * cosx) - (*(&ijk_[v19].x + v39) * sinx[0]);
    v25 = (v23 * sinx[0]) + (*(&ijk_[v19].x + v39) * cosx);
    return atan2(v25, v24);
  }
  v29 = &ijk_[v20];
  v40 = *(&v29->x + v20);
  v30 = frexpf(v40, &exponent);
  v24 = v40;
  if ( exponent <= 1 )
  {
    v33 = 0.5;
    if ( exponent != 1 )
    {
      v35 = 1LL << (1 - exponent);
      if ( v35 < 0 )
        v36 = (v35 & 1 | (v35 >> 1)) + (v35 & 1 | (v35 >> 1));
      else
        v36 = v35;
      v30 = v30 / v36;
      v33 = 0.5;
    }
  }
  else
  {
    v31 = 1LL << (exponent - 1);
    if ( v31 < 0 )
    {
      v38 = (1LL << (exponent - 1)) & 1 | ((1LL << (exponent - 1)) >> 1);
      v32 = v38 + v38;
    }
    else
    {
      v32 = v31;
    }
    v33 = 0.5 / v32;
  }
  v34 = v30;
  result = 0.0;
  if ( a3 < fabs(v34 - v33) )
  {
    v25 = *(&v29->x + v19);
    return atan2(v25, v24);
  }
  return result;
}


// CTiltTwistConstraint::CacheModelData  (line 415, @0x000000000315d280, libserver.so)
// calls: CModel::FindBoneIndexByHash, CModel::boneParent
// callers: CTiltTwistConstraint::Compute
bool __fastcall CTiltTwistConstraint::CacheModelData(CTiltTwistConstraint *const this, const CModel *pModel)
{
  char m_bCached; // r12
  int BoneIndexByHash; // r15d
  int v7; // r14d
  int v8; // eax
  int v9; // eax

  m_bCached = this->m_bCached;
  if ( m_bCached == 0 )
  {
    BoneIndexByHash = CModel::FindBoneIndexByHash(pModel, this->m_targets.m_Memory.m_pMemory->m_nBoneHash);
    v7 = CModel::FindBoneIndexByHash(pModel, this->m_slaves.m_Memory.m_pMemory->m_nBoneHash);
    if ( v7 >= 0 && BoneIndexByHash >= 0 )
    {
      this->m_nTargetBoneIndex = BoneIndexByHash;
      v8 = CModel::boneParent(pModel, BoneIndexByHash);
      this->m_nSlaveBoneIndex = v7;
      this->m_nTargetParentBoneIndex = v8;
      m_bCached = 1;
      v9 = CModel::boneParent(pModel, v7);
      this->m_bCached = 1;
      this->m_nSlaveParentBoneIndex = v9;
    }
  }
  return m_bCached;
}


// CTiltTwistConstraint::GetTwistMatrix  (line 443, @0x000000000315d320, libserver.so)  // inlines: MatrixQuaternion, QuaternionInvert, operator*, operator=
// calls: MatrixQuaternion, QuaternionInvert, QuaternionMatrix
// callers: CTiltTwistConstraint::Compute
void __fastcall CTiltTwistConstraint::GetTwistMatrix(
        const CTiltTwistConstraint *const this,
        matrix3x4a_t *const mTwist,
        matrix3x4a_t *pWorldTransformInOut)
{
  float x; // xmm0_4
  float y; // xmm3_4
  float z; // xmm8_4
  float w; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm1_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  Quaternion qTargetParentSpace; // [rsp+10h] [rbp-40h] BYREF
  Quaternion qTwist; // [rsp+20h] [rbp-30h] BYREF
  Quaternion v16; // 0:^0.16

  if ( this->m_nTargetParentBoneIndex < 0 )
  {
    MatrixQuaternion(&pWorldTransformInOut[this->m_nTargetBoneIndex], &qTargetParentSpace);
    w = qTargetParentSpace.w;
    z = qTargetParentSpace.z;
    y = qTargetParentSpace.y;
    x = qTargetParentSpace.x;
  }
  else
  {
    MatrixQuaternion(&pWorldTransformInOut[this->m_nTargetBoneIndex], &qTwist);
    v16 = qTwist;
    MatrixQuaternion(&pWorldTransformInOut[this->m_nTargetParentBoneIndex], &qTwist);
    qTargetParentSpace = qTwist;
    QuaternionInvert(&qTargetParentSpace, &qTwist);
    x = (((v16.w * qTwist.x) + (v16.z * qTwist.y)) - (v16.y * qTwist.z)) + (v16.x * qTwist.w);
    qTargetParentSpace.x = x;
    y = (((v16.z * -qTwist.x) + (v16.w * qTwist.y)) + (v16.x * qTwist.z)) + (v16.y * qTwist.w);
    qTargetParentSpace.y = y;
    qTargetParentSpace.z = (((qTwist.x * v16.y) - (v16.x * qTwist.y)) + (v16.w * qTwist.z)) + (v16.z * qTwist.w);
    z = qTargetParentSpace.z;
    qTargetParentSpace.w = (((v16.x * -qTwist.x) - (qTwist.y * v16.y)) - (qTwist.z * v16.z)) + (qTwist.w * v16.w);
    w = qTargetParentSpace.w;
  }
  v10 = this->m_qBindInverseParentSpace.y;
  v11 = this->m_qBindInverseParentSpace.x;
  v12 = this->m_qBindInverseParentSpace.z;
  v13 = this->m_qBindInverseParentSpace.w;
  qTwist.x = (((v11 * w) + (v10 * z)) - (v12 * y)) + (v13 * x);
  qTwist.y = (((-v11 * z) + (v10 * w)) + (v12 * x)) + (v13 * y);
  qTwist.z = (((v11 * y) - (v10 * x)) + (v12 * w)) + (v13 * z);
  qTwist.w = (((x * -v11) - (y * v10)) - (v12 * z)) + (v13 * w);
  QuaternionMatrix(&qTwist, mTwist);
}


// CTiltTwistConstraint::TransferPostLoadFn  (line 463, @0x000000000315d800, libserver.so)  // inlines: QuaternionInvert, operator=
// calls: QuaternionInvert
// callers: CTiltTwistConstraint::KV3TransferLoad_CTiltTwistConstraint
void __fastcall CTiltTwistConstraint::TransferPostLoadFn(
        CTiltTwistConstraint *const this,
        CKV3TransferLoadContext *pContext)
{
  Quaternion q; // [rsp+0h] [rbp-20h] BYREF

  if ( this->m_targets.m_Size != 0 )
  {
    QuaternionInvert(&this->m_targets.m_Memory.m_pMemory->m_qOffset, &q);
    this->m_qBindInverseParentSpace = q;
  }
}


// CMorphConstraint::CMorphConstraint  (line 475, @0x000000000315d860, libserver.so)  // inlines: CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase
// calls: CBaseConstraint::CBaseConstraint
// callers: CRenderMesh::InitFromOldDiskData, CSchemaClassBinding<CMorphConstraint>::Allocate, CSchemaClassBinding<CMorphConstraint>::ConstructInPlace, CSchemaClassBinding<CMorphConstraint>::AllocateAndCopyConstruct
void __fastcall CMorphConstraint::CMorphConstraint(CMorphConstraint *const this)
{
  CBaseConstraint::CBaseConstraint(this);
  this->m_bCacheAttempted = 0;
  this->m_sTargetMorph.m_pString = 0;
  this->m_nSlaveBoneList.m_Size = 0;
  this->m_nSlaveBoneList.m_Memory.m_pMemory = 0;
  this->m_bCacheOk = 0;
  this->_vptr_CBaseConstraint = &off_47C7570;
  this->m_nSlaveBoneList.m_Memory.m_nAllocationCount = 0;
  this->m_nSlaveBoneList.m_Memory.m_nGrowSize = 0;
  this->m_nSlaveChannel = 0;
  this->m_nTargetMorphControl = 0x7FFFFFFF;
  this->m_flMin = 0.0;
  this->m_flMax = 1.0;
}


// CMorphConstraint::Init  (line 485, @0x000000000315d8d0, libserver.so)  // inlines: Init
// calls: CUtlString::Set, CUtlString::operator=
void __fastcall CMorphConstraint::Init(
        CMorphConstraint *const this,
        const char *pName,
        const char *pszTargetMorph,
        int nSlaveChannel,
        int flMin,
        int flMax)
{
  int v11; // eax
  int v12; // edx

  CUtlString::Set(&this->m_name, pName);
  CUtlString::operator=(&this->m_sTargetMorph, pszTargetMorph);
  v11 = 5;
  if ( nSlaveChannel <= 5 )
    v11 = nSlaveChannel;
  v12 = 0;
  this->m_flMin = flMin;
  if ( v11 >= 0 )
    v12 = v11;
  this->m_nSlaveChannel = v12;
  this->m_flMax = flMax;
}


// CMorphConstraint::Compute  (line 495, @0x000000000315de70, libserver.so)  // inlines: RemapVal, operator[]
// calls: CMorphConstraint::CacheModelData, MatrixInvert, ConcatTransforms_Aligned, CMorphConstraint::CalcSlaveLocalMatrix, CStudioConstraintBones::UpdateWorldTransformAndChildren
void __fastcall CMorphConstraint::Compute(
        CMorphConstraint *const this,
        const CModel *pModel,
        matrix3x4a_t *pWorldTransformsInOut,
        const float *pFlexControlsIn)
{
  float y; // xmm0_4
  float x; // xmm1_4
  __m128 m_flMin_low; // xmm2
  float v10; // xmm3_4
  __int64 v11; // r14
  __int64 v12; // r13
  int v13; // r12d
  float v14; // xmm1_4
  int v15; // r8d
  CMorphConstraint::BoneParentPair_t *v16; // rax
  int m_nBoneIndex; // r8d
  __int64 m_nBoneParentIndex; // rdx
  matrix3x4a_t *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __m128 v22; // xmm3
  __m128 v23; // xmm0
  float flValue; // [rsp+8h] [rbp-E8h]
  float flValuea; // [rsp+8h] [rbp-E8h]
  int nSlaveBoneIndex; // [rsp+Ch] [rbp-E4h]
  const matrix3x4a_t *mSlaveParentWorld; // [rsp+10h] [rbp-E0h]
  int mSlaveParentWorlda; // [rsp+10h] [rbp-E0h]
  matrix3x4a_t mSlaveWorld; // [rsp+30h] [rbp-C0h] BYREF
  matrix3x4a_t mSlaveLocal; // [rsp+60h] [rbp-90h] BYREF
  matrix3x4a_t mSlaveParentWorldInverse; // [rsp+90h] [rbp-60h] BYREF

  if ( pFlexControlsIn != 0 && CMorphConstraint::CacheModelData(this, pModel) )
  {
    y = this->m_flTargetMorphControlMinMax.y;
    x = this->m_flTargetMorphControlMinMax.x;
    m_flMin_low = LODWORD(this->m_flMin);
    flValue = this->m_flMax;
    v10 = pFlexControlsIn[this->m_nTargetMorphControl];
    if ( y == x )
    {
      v22.m128_f32[0] = v10 - y;
      v23 = _mm_cmple_ss(0LL, v22);
      LODWORD(x) = LODWORD(flValue) & v23.m128_i32[0];
      LODWORD(flValuea) = _mm_andnot_ps(v23, m_flMin_low).m128_u32[0] | LODWORD(flValue) & v23.m128_i32[0];
    }
    else
    {
      flValuea = m_flMin_low.m128_f32[0] + (((v10 - x) * (flValue - m_flMin_low.m128_f32[0])) / (y - x));
    }
    if ( this->m_nSlaveBoneList.m_Size > 0 )
    {
      v11 = 0;
      v12 = 0;
      v13 = 0;
      do
      {
        v16 = &this->m_nSlaveBoneList.m_Memory.m_pMemory[v12];
        m_nBoneIndex = v16->m_nBoneIndex;
        m_nBoneParentIndex = v16->m_nBoneParentIndex;
        v19 = &pWorldTransformsInOut[v16->m_nBoneIndex];
        *&mSlaveWorld.m_flMatVal[0][0] = *&v19->m_flMatVal[0][0];
        *&mSlaveWorld.m_flMatVal[1][0] = *&v19->m_flMatVal[1][0];
        v20 = *&v19->m_flMatVal[2][0];
        v21 = *&v19->m_flMatVal[2][2];
        *&mSlaveWorld.m_flMatVal[2][0] = v20;
        *&mSlaveWorld.m_flMatVal[2][2] = v21;
        if ( m_nBoneParentIndex >= 0 )
        {
          nSlaveBoneIndex = m_nBoneIndex;
          mSlaveParentWorld = &pWorldTransformsInOut[m_nBoneParentIndex];
          MatrixInvert(mSlaveParentWorld, &mSlaveParentWorldInverse);
          ConcatTransforms_Aligned(&mSlaveParentWorldInverse, &mSlaveWorld, &mSlaveLocal);
          CMorphConstraint::CalcSlaveLocalMatrix(
            this,
            &mSlaveLocal,
            &this->m_slaves.m_Memory.m_pMemory[v11],
            flValuea,
            v14);
          ConcatTransforms_Aligned(mSlaveParentWorld, &mSlaveLocal, &mSlaveWorld);
          v15 = nSlaveBoneIndex;
        }
        else
        {
          mSlaveParentWorlda = m_nBoneIndex;
          CMorphConstraint::CalcSlaveLocalMatrix(
            this,
            &mSlaveWorld,
            &this->m_slaves.m_Memory.m_pMemory[v11],
            flValuea,
            x);
          v15 = mSlaveParentWorlda;
        }
        ++v13;
        ++v12;
        ++v11;
        CStudioConstraintBones::UpdateWorldTransformAndChildren(pWorldTransformsInOut, pModel, v15, &mSlaveWorld);
      }
      while ( v13 < this->m_nSlaveBoneList.m_Size );
    }
  }
}


// CMorphConstraint::CalcSlaveLocalMatrix  (line 539, @0x000000000315d940, libserver.so)  // inlines: MatrixSetColumn, SetColumn, operator*, operator=, operator[]
// calls: AxisAngleQuaternion, QuaternionSlerp, QuaternionMatrixOrientationOnly
// callers: CMorphConstraint::Compute
void __fastcall CMorphConstraint::CalcSlaveLocalMatrix(
        const CMorphConstraint *const this,
        matrix3x4a_t *const mSlaveLocal,
        const CConstraintSlave *const slave,
        float flValue,
        float a5)
{
  __int64 m_nSlaveChannel; // rax
  vec_t z; // ecx
  float y; // xmm8_4
  float x; // xmm1_4
  float v10; // xmm5_4
  float w; // xmm3_4
  float v12; // xmm9_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm7_4
  float v16; // xmm2_4
  float v17; // xmm5_4
  float m_flWeight; // xmm0_4
  float v19; // xmm0_4
  Vector vAxis; // [rsp+8h] [rbp-58h] BYREF
  Quaternion qConstraint; // [rsp+18h] [rbp-48h] BYREF
  Vector vTranslate; // [rsp+28h] [rbp-38h] BYREF

  m_nSlaveChannel = this->m_nSlaveChannel;
  if ( m_nSlaveChannel >= 0 )
  {
    if ( m_nSlaveChannel <= 2 )
    {
      v19 = flValue * slave->m_flWeight;
      vTranslate = slave->m_vBasePosition;
      *(&vTranslate.x + m_nSlaveChannel) = v19 + *(&vTranslate.x + m_nSlaveChannel);
      mSlaveLocal->m_flMatVal[0][3] = vTranslate.x;
      mSlaveLocal->m_flMatVal[1][3] = vTranslate.y;
      mSlaveLocal->m_flMatVal[2][3] = vTranslate.z;
    }
    else if ( m_nSlaveChannel <= 5 )
    {
      z = vec3_origin.z;
      *&vAxis.x = *&vec3_origin.x;
      vAxis.z = z;
      *(&vAxis + m_nSlaveChannel - 3) = 1065353216;
      AxisAngleQuaternion(&vAxis, flValue, a5, &qConstraint);
      y = slave->m_qBaseOrientation.y;
      x = slave->m_qBaseOrientation.x;
      v10 = slave->m_qBaseOrientation.z;
      w = slave->m_qBaseOrientation.w;
      v12 = qConstraint.x;
      v13 = -x;
      v14 = x * qConstraint.y;
      qConstraint.x = (((slave->m_qBaseOrientation.x * qConstraint.w) + (y * qConstraint.z)) - (v10 * qConstraint.y))
                    + (w * qConstraint.x);
      v15 = qConstraint.y * y;
      qConstraint.y = (((qConstraint.z * v13) + (qConstraint.w * y)) + (v10 * v12)) + (qConstraint.y * w);
      v16 = qConstraint.w * v10;
      v17 = v10 * qConstraint.z;
      qConstraint.z = ((v14 - (y * v12)) + v16) + (qConstraint.z * w);
      qConstraint.w = (((v13 * v12) - v15) - v17) + (w * qConstraint.w);
      m_flWeight = slave->m_flWeight;
      if ( m_flWeight == 1.0 )
      {
        QuaternionMatrixOrientationOnly(&qConstraint, mSlaveLocal);
      }
      else
      {
        QuaternionSlerp(&slave->m_qBaseOrientation, &qConstraint, m_flWeight, &vTranslate);
        QuaternionMatrixOrientationOnly(&vTranslate, mSlaveLocal);
      }
    }
  }
}


// CMorphConstraint::CacheModelData  (line 577, @0x000000000315dcd0, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, Element, GrowMemory, IsEmpty, operator++, operator[]
// calls: CModel::FindBoneIndexByHash, CModel::boneParent, CUtlMemory<CMorphConstraint::BoneParentPair_t, int>::Grow, CModel::NumFlexControllers, CModel::GetFlexControllerName, CUtlString::Get, V_stricmp_fast, CModel::GetFlexController
// callers: CMorphConstraint::Compute
bool __fastcall CMorphConstraint::CacheModelData(CMorphConstraint *const this, const CModel *pModel)
{
  char *m_pString; // rax
  __int64 v5; // rbx
  int v6; // r12d
  CMorphConstraint::BoneParentPair_t *v7; // rsi
  int BoneIndexByHash; // eax
  int v9; // r14d
  int v10; // eax
  __int64 m_Size; // r8
  int v12; // esi
  LocalFlexController_t v13; // r14d
  int v14; // ebx
  const char *FlexControllerName; // r12
  const char *v16; // rax
  const CFlexController *FlexController; // rax
  vec_t max; // xmm0_4
  CUtlVectorBase<CMorphConstraint::BoneParentPair_t,CUtlMemory<CMorphConstraint::BoneParentPair_t,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-48h]
  int v21; // [rsp+10h] [rbp-40h]
  int nSlaveBoneParentIndexa; // [rsp+14h] [rbp-3Ch]
  LocalFlexController_t nSlaveBoneParentIndex; // [rsp+14h] [rbp-3Ch]
  char m_bCacheAttempted; // [rsp+18h] [rbp-38h]

  m_bCacheAttempted = this->m_bCacheAttempted;
  if ( m_bCacheAttempted != 0 )
    return this->m_bCacheOk;
  m_pString = this->m_sTargetMorph.m_pString;
  this->m_bCacheAttempted = 1;
  if ( m_pString != 0 && *m_pString != 0 )
  {
    v5 = 0;
    v6 = 0;
    p_m_Memory = &this->m_nSlaveBoneList.m_Memory;
    if ( this->m_slaves.m_Size > 0 )
    {
      while ( 1 )
      {
        BoneIndexByHash = CModel::FindBoneIndexByHash(pModel, this->m_slaves.m_Memory.m_pMemory[v5].m_nBoneHash);
        v9 = BoneIndexByHash;
        if ( BoneIndexByHash < 0 )
          break;
        v10 = CModel::boneParent(pModel, BoneIndexByHash);
        m_Size = this->m_nSlaveBoneList.m_Size;
        v12 = this->m_nSlaveBoneList.m_Size;
        if ( m_Size == this->m_nSlaveBoneList.m_Memory.m_nAllocationCount )
        {
          v21 = this->m_nSlaveBoneList.m_Size;
          nSlaveBoneParentIndexa = v10;
          CUtlMemory<CMorphConstraint::BoneParentPair_t,int>::Grow(p_m_Memory, 1);
          v12 = this->m_nSlaveBoneList.m_Size;
          m_Size = v21;
          v10 = nSlaveBoneParentIndexa;
        }
        ++v6;
        ++v5;
        this->m_nSlaveBoneList.m_Size = v12 + 1;
        v7 = &this->m_nSlaveBoneList.m_Memory.m_pMemory[m_Size];
        v7->m_nBoneIndex = v9;
        v7->m_nBoneParentIndex = v10;
        if ( this->m_slaves.m_Size <= v6 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v13 = 0;
      v14 = 0;
      nSlaveBoneParentIndex = CModel::NumFlexControllers(pModel);
      if ( nSlaveBoneParentIndex < 0 )
        return this->m_bCacheOk;
      while ( 1 )
      {
        FlexControllerName = CModel::GetFlexControllerName(pModel, v13);
        v16 = CUtlString::Get(&this->m_sTargetMorph);
        if ( V_stricmp_fast(FlexControllerName, v16) == 0 )
          break;
        v13 = v14 + 1;
        if ( v14 + 1 > nSlaveBoneParentIndex )
          return this->m_bCacheOk;
        ++v14;
      }
      this->m_nTargetMorphControl = v14;
      FlexController = CModel::GetFlexController(pModel, v13);
      m_bCacheAttempted = 1;
      this->m_flTargetMorphControlMinMax.x = FlexController->min;
      max = FlexController->max;
      this->m_bCacheOk = 1;
      this->m_flTargetMorphControlMinMax.y = max;
    }
  }
  return m_bCacheAttempted;
}


