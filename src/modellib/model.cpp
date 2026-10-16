
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_model.cpp  (line 0, @0x0000000001a6aed0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// calls: __cxa_atexit
// globals: `guard variable for'g_AnimOpSourceColors, UNSPECIFIED_LOGGING_COLOR, g_AnimOpSourceColors, __dso_handle, s_EmptySequence, CEmptySequence::~CEmptySequence()
void __cdecl GLOBAL__sub_I_model_cpp()
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
  __cxa_atexit(CEmptySequence::~CEmptySequence, &s_EmptySequence, &_dso_handle);
}


// CModelSkeleton::NumBones  (line 32, @0x000000000313f7b0, libserver.so)
// callers: CBaseAnimating::DrawVCollide, CGameSceneNode::BuildBoneMergeWork, CModelState::UpdateModelCachedValues, CSceneAnimatableObject::Init
int __fastcall CModelSkeleton::NumBones(const CModelSkeleton *const this)
{
  return this->m_nParent.m_Size;
}


// CModelSkeleton::GetParent  (line 39, @0x000000000313f7c0, libserver.so)  // inlines: operator[]
// callers: CModelSkeleton::GetBindPoseWorldTransform, CModelSkeleton::GetBindPoseWorldTransforms, CModelSkeleton::ComputeParentSpaceTransformsFromWorldSpaceTransforms, CModel::boneParent, CModelSkeleton::GetBoneSubtree
int __fastcall CModelSkeleton::GetParent(const CModelSkeleton *const this, int nBoneIndex)
{
  int result; // eax

  result = -1;
  if ( nBoneIndex >= 0 && nBoneIndex < this->m_nParent.m_Size )
    return this->m_nParent.m_Memory.m_pMemory[nBoneIndex];
  return result;
}


// CModelSkeleton::GetFlags  (line 48, @0x000000000313f7e0, libserver.so)  // inlines: operator[]
// callers: CModel::boneFlags
CModelSkeleton::BoneFlags_t __fastcall CModelSkeleton::GetFlags(const CModelSkeleton *const this, int nBoneIndex)
{
  CModelSkeleton::BoneFlags_t result; // eax

  result = CModelSkeleton::BoneFlags_t::FLAG_NO_BONE_FLAGS;
  if ( nBoneIndex >= 0 && nBoneIndex < this->m_nParent.m_Size )
    return this->m_nFlag.m_Memory.m_pMemory[nBoneIndex];
  return result;
}


// CModelSkeleton::GetBoneNameByIndex  (line 57, @0x000000000313f800, libserver.so)  // inlines: operator char const*, operator[]
// calls: CUtlString::Get
// callers: CModelSkeleton::BuildBoneMergeList, CModel::boneName
const char *__fastcall CModelSkeleton::GetBoneNameByIndex(const CModelSkeleton *const this, int nBoneIndex)
{
  if ( nBoneIndex < 0 || nBoneIndex >= this->m_nParent.m_Size )
    return "root";
  else
    return CUtlString::Get(&this->m_boneName.m_Memory.m_pMemory[nBoneIndex]);
}


// CModelSkeleton::Sphere  (line 66, @0x000000000313f830, libserver.so)  // inlines: operator[]
// callers: CModel::GetBoneSphereRadius
float __fastcall CModelSkeleton::Sphere(const CModelSkeleton *const this, int nBoneIndex)
{
  if ( nBoneIndex < 0 || nBoneIndex >= this->m_nParent.m_Size )
    return 0.0;
  else
    return this->m_boneSphere.m_Memory.m_pMemory[nBoneIndex];
}


// CModelSkeleton::GetPosParentSpace  (line 75, @0x000000000313f860, libserver.so)  // inlines: operator[]
// callers: RagdollInit, CModel::bonePosParentSpace
Vector __fastcall CModelSkeleton::GetPosParentSpace(const CModelSkeleton *const this, int nBoneIndex)
{
  Vector *v4; // rax
  int v5; // [rsp+8h] [rbp-8h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( nBoneIndex >= 0 && nBoneIndex < this->m_nParent.m_Size )
  {
    v4 = &this->m_bonePosParent.m_Memory.m_pMemory[nBoneIndex];
    *&result.x = *&v4->x;
    result.z = v4->z;
  }
  else
  {
    v5 = 0;
    *&result.x = 0;
    result.z = 0.0;
  }
  return result;
}


// CModelSkeleton::GetRotParentSpace  (line 84, @0x000000000313f8c0, libserver.so)  // inlines: operator[]
// callers: CModel::boneRotParentSpace
Quaternion __fastcall CModelSkeleton::GetRotParentSpace(const CModelSkeleton *const this, int nBoneIndex)
{
  Quaternion *v4; // rsi
  Quaternion result; // 0:xmm0_8.8,8:xmm1_8.8

  if ( nBoneIndex >= 0 && nBoneIndex < this->m_nParent.m_Size )
  {
    v4 = &this->m_boneRotParent.m_Memory.m_pMemory[nBoneIndex];
    *&result.x = *&v4->x;
    *&result.z = *&v4->z;
  }
  else
  {
    *&result.x = *&quat_identity.x;
    *&result.z = *&quat_identity.z;
  }
  return result;
}


// CModelSkeleton::GetBindPoseParentTransform  (line 93, @0x000000000313f910, libserver.so)  // inlines: operator[]
// calls: QuaternionMatrix
// callers: CGenericFlexCycler::GetBoneTransformOverride
void __fastcall CModelSkeleton::GetBindPoseParentTransform(
        const CModelSkeleton *const this,
        int nBone,
        matrix3x4a_t *const mBindPoseParent)
{
  if ( nBone >= 0 && nBone < this->m_nParent.m_Size )
    QuaternionMatrix(
      &this->m_boneRotParent.m_Memory.m_pMemory[nBone],
      &this->m_bonePosParent.m_Memory.m_pMemory[nBone],
      mBindPoseParent);
}


// CModelSkeleton::GetBindPoseParentTransform  (line 100, @0x000000000313f950, libserver.so)  // inlines: Init, operator=, operator[]
void __fastcall CModelSkeleton::GetBindPoseParentTransform(
        const CModelSkeleton *const this,
        int nBone,
        CTransform *const tBindPoseParent)
{
  Quaternion *v3; // rax
  vec_t w; // xmm1_4
  vec_t x; // xmm0_4
  vec_t y; // xmm3_4
  Vector *v7; // rax
  vec_t v8; // xmm2_4
  vec_t v9; // xmm0_4

  if ( nBone >= 0 && nBone < this->m_nParent.m_Size )
  {
    v3 = &this->m_boneRotParent.m_Memory.m_pMemory[nBone];
    w = v3->w;
    x = v3->x;
    y = v3->y;
    tBindPoseParent->m_orientation.z = v3->z;
    tBindPoseParent->m_orientation.x = x;
    tBindPoseParent->m_orientation.y = y;
    tBindPoseParent->m_orientation.w = w;
    v7 = &this->m_bonePosParent.m_Memory.m_pMemory[nBone];
    v8 = v7->y;
    v9 = v7->x;
    tBindPoseParent->m_vPosition.z = v7->z;
    tBindPoseParent->m_vPosition.y = v8;
    tBindPoseParent->m_vPosition.x = v9;
    tBindPoseParent->m_vPosition.w = 0.0;
  }
}


// CModelSkeleton::GetBindPoseParentTransforms  (line 109, @0x000000000313f9d0, libserver.so)  // inlines: Init, operator=, operator[]
// callers: CAnimationState::InitializeState
void __fastcall CModelSkeleton::GetBindPoseParentTransforms(
        const CModelSkeleton *const this,
        int nCount,
        CTransform *pBindPoseParentTransforms)
{
  int m_Size; // r10d
  CTransform *v4; // rax
  __int64 v5; // r9
  QuaternionAligned *p_m_orientation; // rsi
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 v9; // rcx
  int *v10; // rcx
  int v11; // xmm0_4
  int v12; // xmm1_4
  int v13; // xmm2_4
  int v14; // xmm3_4
  CTransform *v15; // rcx
  signed __int64 v16; // rcx
  __int64 v17; // rcx
  vec_t *v18; // rcx
  vec_t v19; // xmm2_4
  vec_t v20; // xmm0_4

  m_Size = this->m_nParent.m_Size;
  if ( m_Size > nCount )
    m_Size = nCount;
  if ( m_Size > 0 )
  {
    v4 = pBindPoseParentTransforms;
    v5 = 0;
    p_m_orientation = &pBindPoseParentTransforms->m_orientation;
    v7 = 0;
    v8 = 16 * ((m_Size - 1) + 1LL);
    do
    {
      v9 = v7;
      v7 += 16;
      v10 = (this->m_boneRotParent.m_Memory.m_pMemory + v9);
      v11 = v10[3];
      v12 = v10[2];
      v13 = v10[1];
      v14 = *v10;
      v15 = v4++;
      v16 = v15 - pBindPoseParentTransforms;
      *(&p_m_orientation->x + v16) = v14;
      *(&p_m_orientation->y + v16) = v13;
      *(&p_m_orientation->z + v16) = v12;
      *(&p_m_orientation->w + v16) = v11;
      v17 = v5;
      v5 += 12;
      v18 = (&this->m_bonePosParent.m_Memory.m_pMemory->x + v17);
      v19 = v18[1];
      v20 = *v18;
      v4[-1].m_vPosition.z = v18[2];
      v4[-1].m_vPosition.y = v19;
      v4[-1].m_vPosition.x = v20;
      v4[-1].m_vPosition.w = 0.0;
    }
    while ( v7 != v8 );
  }
}


// CModelSkeleton::GetBindPoseParentTransforms  (line 120, @0x000000000313fa90, libserver.so)  // inlines: Init, VectorMultiply, operator*, operator=, operator[]
// callers: CModelState::SetBindPose
void __fastcall CModelSkeleton::GetBindPoseParentTransforms(
        const CModelSkeleton *const this,
        float flScale,
        int nCount,
        CTransform *pBindPoseParentTransforms)
{
  int m_Size; // r10d
  CTransform *v5; // rax
  __int64 v6; // r9
  QuaternionAligned *p_m_orientation; // rsi
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rcx
  int *v11; // rcx
  int v12; // xmm1_4
  int v13; // xmm2_4
  int v14; // xmm3_4
  int v15; // xmm4_4
  CTransform *v16; // rcx
  signed __int64 v17; // rcx
  __int64 v18; // rcx
  float *v19; // rcx
  float v20; // xmm1_4
  float v21; // xmm3_4
  vec_t v22; // xmm2_4

  m_Size = this->m_nParent.m_Size;
  if ( m_Size > nCount )
    m_Size = nCount;
  if ( m_Size > 0 )
  {
    v5 = pBindPoseParentTransforms;
    v6 = 0;
    p_m_orientation = &pBindPoseParentTransforms->m_orientation;
    v8 = 0;
    v9 = 16 * ((m_Size - 1) + 1LL);
    do
    {
      v10 = v8;
      v8 += 16;
      v11 = (this->m_boneRotParent.m_Memory.m_pMemory + v10);
      v12 = v11[3];
      v13 = v11[2];
      v14 = v11[1];
      v15 = *v11;
      v16 = v5++;
      v17 = v16 - pBindPoseParentTransforms;
      *(&p_m_orientation->x + v17) = v15;
      *(&p_m_orientation->y + v17) = v14;
      *(&p_m_orientation->z + v17) = v13;
      *(&p_m_orientation->w + v17) = v12;
      v18 = v6;
      v6 += 12;
      v19 = (&this->m_bonePosParent.m_Memory.m_pMemory->x + v18);
      v20 = v19[2];
      v21 = *v19;
      v22 = v19[1] * flScale;
      v5[-1].m_vPosition.w = 0.0;
      v5[-1].m_vPosition.y = v22;
      v5[-1].m_vPosition.z = v20 * flScale;
      v5[-1].m_vPosition.x = v21 * flScale;
    }
    while ( v8 != v9 );
  }
}


// CModelSkeleton::GetBindPoseWorldTransform  (line 130, @0x000000000313fb60, libserver.so)  // inlines: CTransform, Init, VectorAligned, operator=, operator[]
// calls: CModelSkeleton::GetParent, ConcatTransforms
void __fastcall CModelSkeleton::GetBindPoseWorldTransform(
        const CModelSkeleton *const this,
        const CTransform *const skeletonToWorld,
        int nBoneIndex,
        CTransform *pBindPoseWorldTransform)
{
  Quaternion *m_pMemory; // r13
  Vector *v7; // r12
  Quaternion *v8; // rax
  vec_t y; // xmm3_4
  vec_t z; // xmm2_4
  vec_t w; // xmm1_4
  Vector *v12; // rax
  vec_t v13; // xmm2_4
  vec_t v14; // xmm1_4
  int Parent; // r14d
  Quaternion *v16; // rdx
  Vector *v17; // rdi
  Quaternion *v18; // rdx
  vec_t x; // xmm0_4
  vec_t v20; // xmm2_4
  vec_t v21; // xmm1_4
  Vector *v22; // rdx
  vec_t v23; // xmm2_4
  vec_t v24; // xmm1_4
  CTransform tBindPoseBoneToParent; // [rsp+10h] [rbp-70h] BYREF
  CTransform tBindPoseToWorld; // [rsp+30h] [rbp-50h] BYREF

  tBindPoseBoneToParent.m_vPosition.w = 0.0;
  m_pMemory = this->m_boneRotParent.m_Memory.m_pMemory;
  tBindPoseToWorld.m_vPosition.w = 0.0;
  v7 = this->m_bonePosParent.m_Memory.m_pMemory;
  v8 = &m_pMemory[nBoneIndex];
  y = v8->y;
  z = v8->z;
  w = v8->w;
  tBindPoseToWorld.m_orientation.x = v8->x;
  tBindPoseToWorld.m_orientation.y = y;
  v12 = &v7[nBoneIndex];
  tBindPoseToWorld.m_orientation.z = z;
  tBindPoseToWorld.m_orientation.w = w;
  v13 = v12->y;
  v14 = v12->z;
  tBindPoseToWorld.m_vPosition.x = v12->x;
  tBindPoseToWorld.m_vPosition.y = v13;
  tBindPoseToWorld.m_vPosition.z = v14;
  Parent = CModelSkeleton::GetParent(this, nBoneIndex);
  if ( Parent != -1 )
  {
    v16 = m_pMemory;
    v17 = v7;
    while ( 1 )
    {
      v18 = &v16[Parent];
      x = v18->x;
      v20 = v18->z;
      v21 = v18->w;
      tBindPoseBoneToParent.m_orientation.y = v18->y;
      v22 = &v17[Parent];
      tBindPoseBoneToParent.m_orientation.x = x;
      tBindPoseBoneToParent.m_orientation.z = v20;
      tBindPoseBoneToParent.m_orientation.w = v21;
      v23 = v22->y;
      v24 = v22->z;
      tBindPoseBoneToParent.m_vPosition.x = v22->x;
      tBindPoseBoneToParent.m_vPosition.y = v23;
      tBindPoseBoneToParent.m_vPosition.z = v24;
      tBindPoseBoneToParent.m_vPosition.w = 0.0;
      ConcatTransforms(&tBindPoseBoneToParent, &tBindPoseToWorld, &tBindPoseToWorld);
      Parent = CModelSkeleton::GetParent(this, Parent);
      if ( Parent == -1 )
        break;
      v17 = this->m_bonePosParent.m_Memory.m_pMemory;
      v16 = this->m_boneRotParent.m_Memory.m_pMemory;
    }
  }
  ConcatTransforms(skeletonToWorld, &tBindPoseToWorld, pBindPoseWorldTransform);
}


// CModelSkeleton::GetBindPoseWorldTransforms  (line 148, @0x000000000313fcd0, libserver.so)  // inlines: CTransform, Init, VectorAligned, operator=, operator[]
// calls: CModelSkeleton::GetParent, ConcatTransforms
// callers: CModelSkeleton::GetBindPoseWorldTransforms, CModel::GetBindPoseWorldTransforms
void __fastcall CModelSkeleton::GetBindPoseWorldTransforms(
        const CModelSkeleton *const this,
        const CTransform *const skeletonToWorld,
        int nCount,
        CTransform *pBindPoseWorldTransforms)
{
  int m_Size; // r12d
  CTransform *v7; // rbx
  __int64 v8; // r15
  Quaternion *v9; // rax
  vec_t y; // xmm3_4
  vec_t z; // xmm2_4
  vec_t w; // xmm1_4
  Vector *m_pMemory; // rax
  Vector *v14; // rax
  vec_t v15; // xmm2_4
  vec_t v16; // xmm1_4
  int Parent; // eax
  const CTransform *v18; // rdi
  CTransform *v19; // rdx
  CTransform tBindPoseParent; // [rsp+10h] [rbp-50h] BYREF

  m_Size = this->m_nParent.m_Size;
  tBindPoseParent.m_vPosition.w = 0.0;
  if ( m_Size > nCount )
    m_Size = nCount;
  if ( m_Size > 0 )
  {
    v7 = pBindPoseWorldTransforms;
    v8 = 0;
    do
    {
      v9 = &this->m_boneRotParent.m_Memory.m_pMemory[v8];
      y = v9->y;
      z = v9->z;
      w = v9->w;
      tBindPoseParent.m_orientation.x = v9->x;
      m_pMemory = this->m_bonePosParent.m_Memory.m_pMemory;
      tBindPoseParent.m_orientation.y = y;
      tBindPoseParent.m_orientation.z = z;
      tBindPoseParent.m_orientation.w = w;
      v14 = &m_pMemory[v8];
      v15 = v14->y;
      v16 = v14->z;
      tBindPoseParent.m_vPosition.x = v14->x;
      tBindPoseParent.m_vPosition.y = v15;
      tBindPoseParent.m_vPosition.z = v16;
      tBindPoseParent.m_vPosition.w = 0.0;
      Parent = CModelSkeleton::GetParent(this, v8);
      v18 = skeletonToWorld;
      if ( Parent >= 0 )
        v18 = &pBindPoseWorldTransforms[Parent];
      v19 = v7;
      ++v8;
      ++v7;
      ConcatTransforms(v18, &tBindPoseParent, v19);
    }
    while ( m_Size > v8 );
  }
}


// CModelSkeleton::GetBindPoseWorldTransforms  (line 164, @0x000000000313fdd0, libserver.so)  // inlines: CTransform, Init, VectorAligned, VectorMultiply, operator*, operator=, operator[]
// calls: CModelSkeleton::GetParent, ConcatTransforms
// callers: CModelState::SetBindPose, CModelSkeleton::GetBindPoseWorldTransforms
void __fastcall CModelSkeleton::GetBindPoseWorldTransforms(
        const CModelSkeleton *const this,
        const CTransform *const skeletonToWorld,
        float flScale,
        int nCount,
        CTransform *pBindPoseWorldTransforms)
{
  int m_Size; // r12d
  CTransform *v8; // rbx
  __int64 v9; // r15
  Quaternion *v10; // rax
  vec_t y; // xmm3_4
  vec_t z; // xmm2_4
  vec_t w; // xmm1_4
  Vector *m_pMemory; // rax
  float *p_x; // rax
  vec_t v16; // xmm1_4
  vec_t v17; // xmm0_4
  vec_t v18; // xmm2_4
  int Parent; // eax
  const CTransform *v20; // rdi
  CTransform *v21; // rdx
  CTransform tBindPoseParent; // [rsp+20h] [rbp-50h] BYREF

  m_Size = this->m_nParent.m_Size;
  tBindPoseParent.m_vPosition.w = 0.0;
  if ( m_Size > nCount )
    m_Size = nCount;
  if ( m_Size > 0 )
  {
    v8 = pBindPoseWorldTransforms;
    v9 = 0;
    do
    {
      v10 = &this->m_boneRotParent.m_Memory.m_pMemory[v9];
      y = v10->y;
      z = v10->z;
      w = v10->w;
      tBindPoseParent.m_orientation.x = v10->x;
      m_pMemory = this->m_bonePosParent.m_Memory.m_pMemory;
      tBindPoseParent.m_orientation.z = z;
      tBindPoseParent.m_orientation.y = y;
      tBindPoseParent.m_orientation.w = w;
      p_x = &m_pMemory[v9].x;
      v16 = p_x[1] * flScale;
      v17 = p_x[2] * flScale;
      v18 = flScale * *p_x;
      tBindPoseParent.m_vPosition.w = 0.0;
      tBindPoseParent.m_vPosition.y = v16;
      tBindPoseParent.m_vPosition.z = v17;
      tBindPoseParent.m_vPosition.x = v18;
      Parent = CModelSkeleton::GetParent(this, v9);
      v20 = skeletonToWorld;
      if ( Parent >= 0 )
        v20 = &pBindPoseWorldTransforms[Parent];
      v21 = v8;
      ++v9;
      ++v8;
      ConcatTransforms(v20, &tBindPoseParent, v21);
    }
    while ( m_Size > v9 );
  }
}


// CModelSkeleton::GetBindPoseWorldTransforms  (line 180, @0x000000000313fef0, libserver.so)
// calls: CModelSkeleton::GetBindPoseWorldTransforms, TransformMatrix, __stack_chk_fail
void __fastcall CModelSkeleton::GetBindPoseWorldTransforms(
        const CModelSkeleton *const this,
        const CTransform *const skeletonToWorld,
        int nBaseIndex,
        int nCount,
        matrix3x4a_t *pBindPoseWorldTransforms)
{
  __int64 v6; // r12
  int v7; // edx
  void *v9; // rsp
  const CTransform *v10; // r12
  matrix3x4a_t *v11; // r13
  matrix3x4a_t *v12; // rsi
  _BYTE v13[32]; // [rsp+10h] [rbp-20h] BYREF

  v6 = nBaseIndex;
  v7 = nBaseIndex + nCount;
  v9 = alloca(32LL * v7 + 32);
  CModelSkeleton::GetBindPoseWorldTransforms(this, skeletonToWorld, v7, (v13 & 0xFFFFFFFFFFFFFFEFLL));
  if ( nCount > 0 )
  {
    v10 = ((v13 & 0xFFFFFFFFFFFFFFEFLL) + 32 * v6);
    v11 = &pBindPoseWorldTransforms[(nCount - 1) + 1];
    do
    {
      v12 = pBindPoseWorldTransforms++;
      TransformMatrix(v10++, v12);
    }
    while ( pBindPoseWorldTransforms != v11 );
  }
}


// CModelSkeleton::GetBindPoseWorldTransforms  (line 193, @0x000000000313ffa0, libserver.so)  // inlines: operator[]
// calls: QuaternionMatrix, CModelSkeleton::GetParent, ConcatTransforms
// callers: CSceneAnimatableObject::Init, CModel::GetBindPoseWorldTransforms
void __fastcall CModelSkeleton::GetBindPoseWorldTransforms(
        const CModelSkeleton *const this,
        const matrix3x4a_t *const skeletonToWorld,
        int nCount,
        matrix3x4a_t *pBindPoseWorldTransforms)
{
  int m_Size; // r15d
  matrix3x4a_t *v6; // r13
  __int64 v7; // rbx
  int Parent; // eax
  const matrix3x4a_t *v9; // rdi
  matrix3x4a_t mBindPoseParent; // [rsp+10h] [rbp-60h] BYREF

  m_Size = this->m_nParent.m_Size;
  if ( m_Size > nCount )
    m_Size = nCount;
  if ( m_Size > 0 )
  {
    v6 = pBindPoseWorldTransforms;
    v7 = 0;
    do
    {
      QuaternionMatrix(
        &this->m_boneRotParent.m_Memory.m_pMemory[v7],
        &this->m_bonePosParent.m_Memory.m_pMemory[v7],
        &mBindPoseParent);
      Parent = CModelSkeleton::GetParent(this, v7);
      v9 = skeletonToWorld;
      if ( Parent >= 0 )
        v9 = &pBindPoseWorldTransforms[Parent];
      ++v7;
      ConcatTransforms(v9, &mBindPoseParent, v6++);
    }
    while ( m_Size > v7 );
  }
}


// CModelSkeleton::GetBindPoseWorldTransforms  (line 207, @0x0000000003140050, libserver.so)
// calls: CModelSkeleton::GetBindPoseWorldTransforms, TransformMatrix, __stack_chk_fail
// callers: GetPlacementOriginTransform
void __fastcall CModelSkeleton::GetBindPoseWorldTransforms(
        const CModelSkeleton *const this,
        const CTransform *const skeletonToWorld,
        float flScale,
        int nBaseIndex,
        int nCount,
        matrix3x4a_t *pBindPoseWorldTransforms)
{
  __int64 v7; // r12
  int v8; // edx
  void *v10; // rsp
  const CTransform *v11; // r12
  matrix3x4a_t *v12; // r13
  matrix3x4a_t *v13; // rsi
  _BYTE v14[32]; // [rsp+10h] [rbp-20h] BYREF

  v7 = nBaseIndex;
  v8 = nBaseIndex + nCount;
  v10 = alloca(32LL * v8 + 32);
  CModelSkeleton::GetBindPoseWorldTransforms(this, skeletonToWorld, flScale, v8, (v14 & 0xFFFFFFFFFFFFFFEFLL));
  if ( nCount > 0 )
  {
    v11 = ((v14 & 0xFFFFFFFFFFFFFFEFLL) + 32 * v7);
    v12 = &pBindPoseWorldTransforms[(nCount - 1) + 1];
    do
    {
      v13 = pBindPoseWorldTransforms++;
      TransformMatrix(v11++, v13);
    }
    while ( pBindPoseWorldTransforms != v12 );
  }
}


// CModelSkeleton::GetBoneSubtree  (line 222, @0x0000000003144360, libserver.so)  // inlines: Bitvec_Set, CDisjointSetForest, CUtlMemory, CUtlVector, CUtlVectorBase, ComputeSubtree<CModelSkeleton, CVarBitVec>, Find, GetNumBits, Purge, RemoveAll, Set, Union, operator[], ~CDisjointSetForest, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::SetCount, CModelSkeleton::GetParent, CUtlMemory<CDisjointSetForest::Node_t, int>::Purge, _Unwind_Resume
// callers: CStudioConstraintBones::UpdateWorldTransformAndChildren
void __fastcall CModelSkeleton::GetBoneSubtree(
        const CModelSkeleton *const this,
        int nSubtreeTipBone,
        CVarBitVec *pSubtree)
{
  int m_numBits; // ebx
  __int64 v5; // rax
  __int64 v6; // r15
  CDisjointSetForest::Node_t *m_pMemory; // r14
  int Parent; // eax
  int i; // esi
  int nParent; // ecx
  CDisjointSetForest::Node_t *v11; // rsi
  int v12; // edi
  int j; // edi
  int v14; // esi
  CDisjointSetForest::Node_t *v15; // rdi
  int v16; // r9d
  CDisjointSetForest::Node_t *v17; // rax
  __int64 v18; // rdi
  CDisjointSetForest::Node_t *v19; // rsi
  int k; // eax
  int v21; // r8d
  CDisjointSetForest::Node_t *v22; // rax
  int v23; // edx
  __int64 v24; // r9
  int v25; // ecx
  int m; // edx
  int v27; // eax
  CDisjointSetForest::Node_t *v28; // rdx
  int v29; // esi
  CUtlVectorBase<CDisjointSetForest::Node_t,CUtlMemory<CDisjointSetForest::Node_t,int> > v32; // [rsp+20h] [rbp-50h] BYREF

  m_numBits = pSubtree->m_numBits;
  if ( nSubtreeTipBone >= m_numBits || nSubtreeTipBone < 0 )
    return;
  v32.m_Size = 0;
  v32.m_Memory.m_pMemory = 0;
  v32.m_Memory.m_nAllocationCount = 0;
  v32.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<CDisjointSetForest::Node_t,CUtlMemory<CDisjointSetForest::Node_t,int>>::SetCount(&v32, m_numBits);
  v5 = 0;
  do
  {
    v32.m_Memory.m_pMemory[v5].nRank = 0;
    v32.m_Memory.m_pMemory[v5].nParent = v5;
    ++v5;
  }
  while ( m_numBits > v5 );
  v6 = 0;
  m_pMemory = v32.m_Memory.m_pMemory;
  do
  {
    while ( 1 )
    {
      if ( nSubtreeTipBone == v6 )
        goto LABEL_7;
      Parent = CModelSkeleton::GetParent(this, v6);
      if ( m_numBits <= Parent || Parent < 0 )
        goto LABEL_7;
      for ( i = v6; ; i = m_pMemory[i].nParent )
      {
        nParent = m_pMemory[i].nParent;
        if ( i == nParent )
          break;
      }
      v11 = &m_pMemory[v6];
      v12 = v11->nParent;
      if ( v12 != v6 )
      {
        while ( 1 )
        {
          v11->nParent = nParent;
          m_pMemory = v32.m_Memory.m_pMemory;
          v11 = &v32.m_Memory.m_pMemory[v12];
          if ( v11->nParent == v12 )
            break;
          v12 = v11->nParent;
        }
      }
      for ( j = Parent; ; j = m_pMemory[j].nParent )
      {
        v14 = m_pMemory[j].nParent;
        if ( j == v14 )
          break;
      }
      v15 = &m_pMemory[Parent];
      v16 = v15->nParent;
      if ( Parent != v16 )
      {
        while ( 1 )
        {
          v15->nParent = v14;
          m_pMemory = v32.m_Memory.m_pMemory;
          v15 = &v32.m_Memory.m_pMemory[v16];
          if ( v15->nParent == v16 )
            break;
          v16 = v15->nParent;
        }
      }
      v17 = &m_pMemory[v14];
      v18 = nParent;
      if ( m_pMemory[v18].nRank > v17->nRank )
      {
        v17->nParent = nParent;
        m_pMemory = v32.m_Memory.m_pMemory;
        goto LABEL_7;
      }
      if ( m_pMemory[nParent].nRank < v17->nRank )
      {
        m_pMemory[v18].nParent = v14;
        m_pMemory = v32.m_Memory.m_pMemory;
        goto LABEL_7;
      }
      if ( nParent != v14 )
        break;
LABEL_7:
      if ( m_numBits <= ++v6 )
        goto LABEL_29;
    }
    v17->nParent = nParent;
    ++v6;
    ++v32.m_Memory.m_pMemory[nParent].nRank;
    m_pMemory = v32.m_Memory.m_pMemory;
  }
  while ( m_numBits > v6 );
LABEL_29:
  v19 = m_pMemory;
  for ( k = nSubtreeTipBone; ; k = m_pMemory[k].nParent )
  {
    v21 = m_pMemory[k].nParent;
    if ( k == v21 )
      break;
  }
  v22 = &m_pMemory[nSubtreeTipBone];
  v23 = v22->nParent;
  if ( nSubtreeTipBone != v23 )
  {
    while ( 1 )
    {
      v22->nParent = v21;
      v19 = v32.m_Memory.m_pMemory;
      v22 = &v32.m_Memory.m_pMemory[v23];
      if ( v22->nParent == v23 )
        break;
      v23 = v22->nParent;
    }
  }
  v24 = 0;
  while ( 2 )
  {
    v25 = v24;
    for ( m = v24; ; m = v19[m].nParent )
    {
      v27 = v19[m].nParent;
      if ( m == v27 )
        break;
    }
    v28 = &v19[v24];
    v29 = v28->nParent;
    if ( v24 != v29 )
    {
      while ( 1 )
      {
        v28->nParent = v27;
        v28 = &v32.m_Memory.m_pMemory[v29];
        if ( v29 == v28->nParent )
          break;
        v29 = v28->nParent;
      }
    }
    if ( v21 != v27 )
    {
      if ( m_numBits <= ++v24 )
        break;
      goto LABEL_46;
    }
    ++v24;
    pSubtree->m_pInt[v25 >> 5] |= 1 << v25;
    if ( m_numBits > v24 )
    {
LABEL_46:
      v19 = v32.m_Memory.m_pMemory;
      continue;
    }
    break;
  }
  v32.m_Size = 0;
  if ( (v32.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDisjointSetForest::Node_t,int>::Purge(&v32.m_Memory);
    if ( (v32.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDisjointSetForest::Node_t,int>::Purge(&v32.m_Memory);
  }
}


// CModelSkeleton::CModelSkeleton  (line 227, @0x0000000003144750, libserver.so)  // inlines: AddMultipleToTail, BoneDict_t, CUtlHash, CUtlMemory, CUtlVector, CUtlVectorBase, GrowMemory, GrowVector, InsertMultipleBefore, RemoveMultipleFromTail, SetCount, SetGrowSize, V_memset, memset, operator[], ~CUtlVector
// calls: CUtlVectorBase<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >, CUtlMemory<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >, int> >::SetCount, CUtlMemory<BoneHashPairing_t, int>::Grow, CUtlVectorBase<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >, CUtlMemory<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CModel::CModel
// globals: BoneHashPairing_CompareFunc(BoneHashPairing_t const&,BoneHashPairing_t const&), BoneHashPairing_KeyFunc(BoneHashPairing_t const&)
void __fastcall CModelSkeleton::CModelSkeleton(CModelSkeleton *const this)
{
  __int64 i; // rbx
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v3; // rax
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v4; // r12
  int m_nAllocationCount; // esi

  this->m_boneDict.m_CompareFunc = BoneHashPairing_CompareFunc;
  this->m_boneDict.m_Buckets.m_Size = 0;
  this->m_boneDict.m_Buckets.m_Memory.m_pMemory = 0;
  this->m_boneDict.m_Buckets.m_Memory.m_nAllocationCount = 0;
  this->m_boneDict.m_Buckets.m_Memory.m_nGrowSize = 0;
  this->m_boneDict.m_KeyFunc = BoneHashPairing_KeyFunc;
  CUtlVectorBase<CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int>>,CUtlMemory<CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int>>,int>>::SetCount(
    &this->m_boneDict.m_Buckets,
    32);
  for ( i = 0; i != 32; ++i )
  {
    v4 = &this->m_boneDict.m_Buckets.m_Memory.m_pMemory[i];
    if ( -v4->m_Size < 0 || v4->m_Size == 0 )
    {
      v3 = &this->m_boneDict.m_Buckets.m_Memory.m_pMemory[i];
      if ( v4->m_Size == 0 )
        goto LABEL_3;
    }
    else
    {
      m_nAllocationCount = v4->m_Memory.m_nAllocationCount;
      if ( m_nAllocationCount < 0 )
        CUtlMemory<BoneHashPairing_t,int>::Grow(&v4->m_Memory, -m_nAllocationCount);
    }
    v4->m_Size = 0;
    v3 = &this->m_boneDict.m_Buckets.m_Memory.m_pMemory[i];
LABEL_3:
    v3->m_Memory.m_nGrowSize &= 0xC0000000;
  }
  this->m_boneDict.m_bPowerOfTwo = 1;
  this->m_boneDict.m_ModMask = 31;
  this->m_boneName.m_Size = 0;
  this->m_boneName.m_Memory.m_pMemory = 0;
  this->m_boneName.m_Memory.m_nAllocationCount = 0;
  this->m_boneName.m_Memory.m_nGrowSize = 0;
  this->m_nParent.m_Size = 0;
  this->m_nParent.m_Memory.m_pMemory = 0;
  this->m_nParent.m_Memory.m_nAllocationCount = 0;
  this->m_nParent.m_Memory.m_nGrowSize = 0;
  this->m_boneSphere.m_Size = 0;
  this->m_boneSphere.m_Memory.m_pMemory = 0;
  this->m_boneSphere.m_Memory.m_nAllocationCount = 0;
  this->m_boneSphere.m_Memory.m_nGrowSize = 0;
  this->m_nFlag.m_Size = 0;
  this->m_nFlag.m_Memory.m_pMemory = 0;
  this->m_nFlag.m_Memory.m_nAllocationCount = 0;
  this->m_nFlag.m_Memory.m_nGrowSize = 0;
  this->m_bonePosParent.m_Size = 0;
  this->m_bonePosParent.m_Memory.m_pMemory = 0;
  this->m_bonePosParent.m_Memory.m_nAllocationCount = 0;
  this->m_bonePosParent.m_Memory.m_nGrowSize = 0;
  this->m_boneRotParent.m_Size = 0;
  this->m_boneRotParent.m_Memory.m_pMemory = 0;
  this->m_boneRotParent.m_Memory.m_nAllocationCount = 0;
  this->m_boneRotParent.m_Memory.m_nGrowSize = 0;
  *this->m_pBonesPerLod = 0;
  *&this->m_pBonesPerLod[4] = 0;
}


// CModelSkeleton::NumBonesForLOD  (line 232, @0x0000000003140100, libserver.so)
int __fastcall CModelSkeleton::NumBonesForLOD(const CModelSkeleton *const this, int nLod)
{
  if ( (nLod - 1) <= 6 )
    return this->m_pBonesPerLod[nLod];
  else
    return this->m_nParent.m_Size;
}


// CModelSkeleton::GetParentArray  (line 243, @0x0000000003140130, libserver.so)
const CModelSkeleton::ParentIndex_t *__fastcall CModelSkeleton::GetParentArray(const CModelSkeleton *const this)
{
  return this->m_nParent.m_Memory.m_pMemory;
}


// CModelSkeleton::GetSphereArray  (line 248, @0x0000000003140140, libserver.so)
const float *__fastcall CModelSkeleton::GetSphereArray(const CModelSkeleton *const this)
{
  return this->m_boneSphere.m_Memory.m_pMemory;
}


// CModelSkeleton::BuildBoneMergeList  (line 253, @0x0000000003140390, libserver.so)  // inlines: SetToIdentity
// calls: CModelSkeleton::GetBoneNameByIndex, CModelSkeleton::FindBoneIndex, SetIdentityMatrix
// callers: CGameSceneNode::BuildBoneMergeWork
int __fastcall CModelSkeleton::BuildBoneMergeList(
        const CModelSkeleton *const this,
        const CModelSkeleton *pDestSkeleton,
        bone_merge_list_t *pListOut,
        int nListMax)
{
  int m_Size; // r12d
  int v7; // r15d
  int v8; // ebx
  const char *BoneNameByIndex; // rax
  int BoneIndex; // eax
  bone_merge_list_t *v11; // rdi

  m_Size = pDestSkeleton->m_nParent.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v7 = 0;
  v8 = 0;
  do
  {
    BoneNameByIndex = CModelSkeleton::GetBoneNameByIndex(pDestSkeleton, v7);
    BoneIndex = CModelSkeleton::FindBoneIndex(this, BoneNameByIndex);
    if ( BoneIndex >= 0 )
    {
      if ( nListMax > v8 )
      {
        v11 = &pListOut[v8];
        v11->m_nDestIndex = v7;
        v11 = (v11 + 16);
        LODWORD(v11[-1].m_mSourceToDestTransform.m_flMatVal[2][0]) = BoneIndex;
        SetIdentityMatrix(v11);
      }
      ++v8;
    }
    ++v7;
  }
  while ( v7 != m_Size );
  return v8;
}


// CModelSkeleton::ComputeParentSpaceTransformsFromWorldSpaceTransforms  (line 275, @0x0000000003140150, libserver.so)  // inlines: CTransform, VectorAligned
// calls: TransformInvert, ConcatTransforms, CModelSkeleton::GetParent
void __fastcall CModelSkeleton::ComputeParentSpaceTransformsFromWorldSpaceTransforms(
        const CModelSkeleton *const this,
        const CTransform *const rootToWorld,
        int nCount,
        const CTransform *pWorldSpaceTransforms,
        CTransform *pParentSpaceTransforms)
{
  const CTransform *v6; // r13
  int v8; // ebx
  CTransform *v9; // rdx
  const CTransform *v10; // rsi
  int Parent; // eax
  CTransform *v12; // rdx
  const CTransform *v13; // rsi
  CTransform worldToParent; // [rsp+20h] [rbp-70h] BYREF
  CTransform worldToRoot; // [rsp+40h] [rbp-50h] BYREF

  v6 = pWorldSpaceTransforms;
  v8 = 0;
  worldToParent.m_vPosition.w = 0.0;
  worldToRoot.m_vPosition.w = 0.0;
  TransformInvert(rootToWorld, &worldToRoot);
  if ( nCount > 0 )
  {
    do
    {
      while ( 1 )
      {
        Parent = CModelSkeleton::GetParent(this, v8);
        if ( Parent < 0 )
          break;
        ++v8;
        TransformInvert(&pWorldSpaceTransforms[Parent], &worldToParent);
        v9 = pParentSpaceTransforms;
        v10 = v6++;
        ++pParentSpaceTransforms;
        ConcatTransforms(&worldToParent, v10, v9);
        if ( v8 == nCount )
          return;
      }
      v12 = pParentSpaceTransforms;
      v13 = v6;
      ++v8;
      ++v6;
      ++pParentSpaceTransforms;
      ConcatTransforms(&worldToRoot, v13, v12);
    }
    while ( v8 != nCount );
  }
}


// CModelSkeleton::FindBoneIndex  (line 297, @0x0000000003140310, libserver.so)  // inlines: MakeStringToken
// calls: CModelSkeleton::FindBoneIndexByHash, MurmurHash2LowerCase, RegisterStringToken
// callers: CModelSkeleton::BuildBoneMergeList, CModel::IsDataElementNeeded, CModel::FindBoneIndex
int __fastcall CModelSkeleton::FindBoneIndex(const CModelSkeleton *const this, const char *pBoneName)
{
  uint32 v5; // eax
  uint32 v6; // esi
  uint32 v7; // [rsp+Ch] [rbp-14h]

  if ( pBoneName == 0 || *pBoneName == 0 )
    return CModelSkeleton::FindBoneIndexByHash(this, 0);
  v5 = MurmurHash2LowerCase(pBoneName, 0x31415926u);
  if ( g_bUpdateStringTokenDatabase )
  {
    v7 = v5;
    RegisterStringToken(v5, pBoneName, 0, 1);
    v6 = v7;
  }
  else
  {
    v6 = v5;
  }
  return CModelSkeleton::FindBoneIndexByHash(this, v6);
}


// CModelSkeleton::FindBoneIndexByHash  (line 303, @0x0000000003140220, libserver.so)  // inlines: BuildHandle, DoFind, Element, Find, GetBucketIndex, operator[]
// callers: CGameSceneNode::StartHierarchicalAttachment, CSkeletonInstance::DetermineHierarchyAttachType, CGameSceneNode::ComputeBoneOrAttachmentToWorld, RagdollInit, CModelSkeleton::FindBoneIndex, CModel::GetBoneFlexDriverBoneIndex, CModel::GetBoneIndexForHitbox, CModel::FindBoneIndexByHash
int __fastcall CModelSkeleton::FindBoneIndexByHash(const CModelSkeleton *const this, uint32 nHash)
{
  unsigned int v3; // eax
  CUtlVector<BoneHashPairing_t,CUtlMemory<BoneHashPairing_t,int> > *v4; // r13
  int m_Size; // r12d
  __int64 v6; // r14
  int v7; // r15d
  unsigned int v8; // edx
  int result; // eax
  unsigned int v10; // [rsp+4h] [rbp-4Ch]
  BoneHashPairing_t findPairing; // [rsp+10h] [rbp-40h] BYREF

  findPairing.m_nBoneHash = nHash;
  findPairing.m_nBoneIndex = 0;
  v3 = this->m_boneDict.m_KeyFunc(&findPairing);
  if ( this->m_boneDict.m_bPowerOfTwo )
    v10 = this->m_boneDict.m_ModMask & v3;
  else
    v10 = v3 % this->m_boneDict.m_Buckets.m_Size;
  v4 = &this->m_boneDict.m_Buckets.m_Memory.m_pMemory[v10];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    while ( !this->m_boneDict.m_CompareFunc(&v4->m_Memory.m_pMemory[v6], &findPairing) )
    {
      ++v7;
      ++v6;
      if ( v7 == m_Size )
        return -1;
    }
  }
  if ( m_Size == v7 )
    return -1;
  v8 = v7 | (v10 << 16);
  result = v8;
  if ( v8 != -1 )
    return this->m_boneDict.m_Buckets.m_Memory.m_pMemory[HIWORD(v8)].m_Memory.m_pMemory[v8].m_nBoneIndex;
  return result;
}


// DefaultMaterialGroupIndex_CompareFunc  (line 326, @0x000000000313e8c0, libserver.so)  // inlines: operator==
bool __fastcall DefaultMaterialGroupIndex_CompareFunc(
        const DefaultMaterialGroupIndex_t *const a,
        const DefaultMaterialGroupIndex_t *const b)
{
  return b->m_nMaterialId.m_Data == a->m_nMaterialId.m_Data;
}


// DefaultMaterialGroupIndex_KeyFunc  (line 331, @0x000000000313e8d0, libserver.so)
unsigned int __fastcall DefaultMaterialGroupIndex_KeyFunc(const DefaultMaterialGroupIndex_t *const a)
{
  return a->m_nMaterialId.m_Data;
}


// CModel::CModel  (line 339, @0x00000000031453a0, libserver.so)  // inlines: CStrongHandle, CUtlHash, CUtlMemory, CUtlString, CUtlStringMap, CUtlVector, CUtlVectorBase, Destruct<CStrongHandle<InfoForResourceTypeCRenderMesh> >, Element, Purge, RemoveAll, SetGrowSize, operator[], ~CStrongHandle, ~CUtlHash, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CModelSkeleton::CModelSkeleton, CUtlVectorBase<CUtlVector<DefaultMaterialGroupIndex_t, CUtlMemory<DefaultMaterialGroupIndex_t, int> >, CUtlMemory<CUtlVector<DefaultMaterialGroupIndex_t, CUtlMemory<DefaultMaterialGroupIndex_t, int> >, int> >::SetCount, CUtlVectorBase<DefaultMaterialGroupIndex_t, CUtlMemory<DefaultMaterialGroupIndex_t, int> >::SetCount, CUtlMemory<int, int>::CUtlMemory, CUtlSymbolTable::CUtlSymbolTable, CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::~CUtlVectorBase, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase, CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown, CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase, CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown, CUtlVectorBase<CModelExtPart, CUtlMemory<CModelExtPart, int> >::~CUtlVectorBase, CUtlString::FreeMemoryBlock (28 total)
// globals: DefaultMaterialGroupIndex_CompareFunc(DefaultMaterialGroupIndex_t const&,DefaultMaterialGroupIndex_t const&), DefaultMaterialGroupIndex_KeyFunc(DefaultMaterialGroupIndex_t const&)
void __fastcall CModel::CModel(CModel *const this)
{
  __int64 i; // r12
  __int64 v3; // rax

  this->_vptr_CModel = &off_47C59B0;
  this->m_name.m_pString = 0;
  this->m_nRuntimeFlags = ModelFlags_t::MODEL_FLAG_NONE;
  this->m_nInherentFlags = ModelFlags_t::MODEL_FLAG_NONE;
  this->m_sSurfaceProperty.m_pString = 0;
  this->m_keyValueText.m_pString = 0;
  this->m_ExtParts.m_Size = 0;
  this->m_ExtParts.m_Memory.m_pMemory = 0;
  this->m_ExtParts.m_Memory.m_nAllocationCount = 0;
  this->m_ExtParts.m_Memory.m_nGrowSize = 0;
  this->m_refMeshes.m_Size = 0;
  this->m_refMeshes.m_Memory.m_pMemory = 0;
  this->m_refMeshes.m_Memory.m_nAllocationCount = 0;
  this->m_refMeshes.m_Memory.m_nGrowSize = 0;
  this->m_refMeshGroupMasks.m_Size = 0;
  this->m_refMeshGroupMasks.m_Memory.m_pMemory = 0;
  this->m_refMeshGroupMasks.m_Memory.m_nAllocationCount = 0;
  this->m_refMeshGroupMasks.m_Memory.m_nGrowSize = 0;
  this->m_refLODGroupMasks.m_Size = 0;
  this->m_refLODGroupMasks.m_Memory.m_pMemory = 0;
  this->m_refLODGroupMasks.m_Memory.m_nAllocationCount = 0;
  this->m_refLODGroupMasks.m_Memory.m_nGrowSize = 0;
  this->m_lodGroupSwitchDistances.m_Size = 0;
  this->m_lodGroupSwitchDistances.m_Memory.m_pMemory = 0;
  this->m_lodGroupSwitchDistances.m_Memory.m_nAllocationCount = 0;
  this->m_lodGroupSwitchDistances.m_Memory.m_nGrowSize = 0;
  this->m_refPhysicsData.m_pBinding = 0;
  this->m_AnimGroups.m_Size = 0;
  this->m_AnimGroups.m_Memory.m_pMemory = 0;
  this->m_AnimGroups.m_Memory.m_nAllocationCount = 0;
  this->m_AnimGroups.m_Memory.m_nGrowSize = 0;
  this->m_meshGroups.m_Size = 0;
  this->m_meshGroups.m_Memory.m_pMemory = 0;
  this->m_meshGroups.m_Memory.m_nAllocationCount = 0;
  this->m_meshGroups.m_Memory.m_nGrowSize = 0;
  this->m_materialGroups.m_Size = 0;
  this->m_materialGroups.m_Memory.m_pMemory = 0;
  this->m_materialGroups.m_Memory.m_nAllocationCount = 0;
  this->m_materialGroups.m_Memory.m_nGrowSize = 0;
  CModelSkeleton::CModelSkeleton(&this->m_modelSkeleton);
  this->m_remappingTable.m_Size = 0;
  this->m_defaultMaterialIndexMap.m_CompareFunc = DefaultMaterialGroupIndex_CompareFunc;
  this->m_remappingTable.m_Memory.m_pMemory = 0;
  this->m_remappingTable.m_Memory.m_nAllocationCount = 0;
  this->m_remappingTable.m_Memory.m_nGrowSize = 0;
  this->m_remappingTableStarts.m_Size = 0;
  this->m_remappingTableStarts.m_Memory.m_pMemory = 0;
  this->m_remappingTableStarts.m_Memory.m_nAllocationCount = 0;
  this->m_remappingTableStarts.m_Memory.m_nGrowSize = 0;
  this->m_boneFlexDrivers.m_Size = 0;
  this->m_boneFlexDrivers.m_Memory.m_pMemory = 0;
  this->m_boneFlexDrivers.m_Memory.m_nAllocationCount = 0;
  this->m_boneFlexDrivers.m_Memory.m_nGrowSize = 0;
  this->m_meshGroupMap.m_Size = 0;
  this->m_meshGroupMap.m_Memory.m_pMemory = 0;
  this->m_meshGroupMap.m_Memory.m_nAllocationCount = 0;
  this->m_meshGroupMap.m_Memory.m_nGrowSize = 0;
  this->m_bodyPartMap.m_Size = 0;
  this->m_bodyPartMap.m_Memory.m_pMemory = 0;
  this->m_bodyPartMap.m_Memory.m_nAllocationCount = 0;
  this->m_bodyPartMap.m_Memory.m_nGrowSize = 0;
  this->m_materialGroupNames.m_Size = 0;
  this->m_materialGroupNames.m_Memory.m_pMemory = 0;
  this->m_materialGroupNames.m_Memory.m_nAllocationCount = 0;
  this->m_materialGroupNames.m_Memory.m_nGrowSize = 0;
  this->m_defaultMaterialIndexMap.m_Buckets.m_Size = 0;
  this->m_defaultMaterialIndexMap.m_Buckets.m_Memory.m_pMemory = 0;
  this->m_defaultMaterialIndexMap.m_Buckets.m_Memory.m_nAllocationCount = 0;
  this->m_defaultMaterialIndexMap.m_Buckets.m_Memory.m_nGrowSize = 0;
  this->m_defaultMaterialIndexMap.m_KeyFunc = DefaultMaterialGroupIndex_KeyFunc;
  CUtlVectorBase<CUtlVector<DefaultMaterialGroupIndex_t,CUtlMemory<DefaultMaterialGroupIndex_t,int>>,CUtlMemory<CUtlVector<DefaultMaterialGroupIndex_t,CUtlMemory<DefaultMaterialGroupIndex_t,int>>,int>>::SetCount(
    &this->m_defaultMaterialIndexMap.m_Buckets,
    16);
  for ( i = 0; i != 16; ++i )
  {
    CUtlVectorBase<DefaultMaterialGroupIndex_t,CUtlMemory<DefaultMaterialGroupIndex_t,int>>::SetCount(
      &this->m_defaultMaterialIndexMap.m_Buckets.m_Memory.m_pMemory[i],
      0);
    v3 = i * 24;
    *(&this->m_defaultMaterialIndexMap.m_Buckets.m_Memory.m_pMemory->m_Memory.m_nGrowSize + v3) &= 0xC0000000;
  }
  this->m_defaultMaterialIndexMap.m_bPowerOfTwo = 1;
  this->m_defaultMaterialIndexMap.m_ModMask = 15;
  this->m_attachmentMap.m_Size = 0;
  this->m_attachmentMap.m_Memory.m_pMemory = 0;
  this->m_attachmentMap.m_Memory.m_nAllocationCount = 0;
  this->m_attachmentMap.m_Memory.m_nGrowSize = 0;
  this->m_boneAndFlexCountsForMesh.m_Size = 0;
  this->m_boneAndFlexCountsForMesh.m_Memory.m_pMemory = 0;
  this->m_boneAndFlexCountsForMesh.m_Memory.m_nAllocationCount = 0;
  this->m_boneAndFlexCountsForMesh.m_Memory.m_nGrowSize = 0;
  this->m_namedFlexControllers.m_Vector.m_Size = 0;
  CUtlMemory<int,int>::CUtlMemory(&this->m_namedFlexControllers.m_Vector.m_Memory, 0, 32);
  CUtlSymbolTable::CUtlSymbolTable(&this->m_namedFlexControllers.m_SymbolTable, 0, 32, 1);
  this->m_flexControllersModelToGlobal.m_Size = 0;
  this->m_flexControllersModelToGlobal.m_Memory.m_pMemory = 0;
  this->m_flexControllersModelToGlobal.m_Memory.m_nAllocationCount = 0;
  this->m_flexControllersModelToGlobal.m_Memory.m_nGrowSize = 0;
  this->m_flexControllers.m_Size = 0;
  this->m_flexControllers.m_Memory.m_pMemory = 0;
  this->m_flexControllers.m_Memory.m_nAllocationCount = 0;
  this->m_flexControllers.m_Memory.m_nGrowSize = 0;
  this->m_pAnimContainer = 0;
  this->m_pActivityToSequence = 0;
}


// CModel::~CModel  (line 346, @0x0000000003144930, libserver.so)  // inlines: Destruct<CBoneFlexDriver>, Destruct<CModel::BodyPart_t>, Destruct<CModelExtPart>, Destruct<CModelMaterialGroup>, Destruct<CStrongHandle<InfoForResourceTypeCRenderMesh> >, Destruct<CUtlString>, Destruct<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> > >, Destruct<CUtlVector<DefaultMaterialGroupIndex_t, CUtlMemory<DefaultMaterialGroupIndex_t, int> > >, Element, Purge, RemoveAll, operator[], ~BodyPart_t, ~CActivityToSequenceMapping, ~CBoneFlexDriver, ~CModelExtPart, ~CModelMaterialGroup, ~CStrongHandle, ~CUtlHash, ~CUtlMemory, ~CUtlString, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete [], CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> >::RemoveAll, CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::Purge, CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> >, int>::Purge, operator delete, CUtlSymbolTable::~CUtlSymbolTable, CUtlVectorBase<DefaultMaterialGroupIndex_t, CUtlMemory<DefaultMaterialGroupIndex_t, int> >::RemoveAll, CUtlMemory<DefaultMaterialGroupIndex_t, int>::Purge, CUtlString::FreeMemoryBlock, CUtlMemory<int, int>::Purge, CUtlVectorBase<CBoneFlexDriverControl, CUtlMemory<CBoneFlexDriverControl, int> >::RemoveAll, CUtlMemory<CBoneFlexDriverControl, int>::Purge (34 total)
// callers: CModel::~CModel
void __fastcall CModel::~CModel(CModel *const this)
{
  CActivityToSequenceMapping *m_pActivityToSequence; // r14
  int m_Size; // r13d
  unsigned __int64 v4; // r12
  __int64 v5; // r15
  CUtlVectorBase<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v6; // r13
  __int64 i; // r15
  CUtlVectorBase<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int> > *v8; // r12
  bool v9; // zf
  int v10; // r13d
  unsigned __int64 v11; // r12
  __int64 v12; // r14
  CUtlVector<DefaultMaterialGroupIndex_t,CUtlMemory<DefaultMaterialGroupIndex_t,int> > *v13; // r13
  __int64 j; // r14
  CUtlVectorBase<DefaultMaterialGroupIndex_t,CUtlMemory<DefaultMaterialGroupIndex_t,int> > *v15; // r12
  int v16; // r13d
  __int64 k; // r14
  char *v18; // r12
  int v19; // r13d
  __int64 m; // r14
  char *v21; // r12
  int v22; // r13d
  __int64 n; // r14
  char *v24; // r12
  int v25; // r12d
  __int64 ii; // r13
  CUtlString *v27; // rdi
  int v28; // eax
  __int64 v29; // r12
  unsigned __int64 v30; // r13
  __int64 v31; // rdi
  int v32; // r13d
  __int64 jj; // r14
  char *v34; // r12

  this->_vptr_CModel = &off_47C59B0;
  m_pActivityToSequence = this->m_pActivityToSequence;
  if ( m_pActivityToSequence != 0 )
  {
    if ( m_pActivityToSequence->m_pSequenceTuples != 0 )
      operator delete[](m_pActivityToSequence->m_pSequenceTuples);
    m_Size = m_pActivityToSequence->m_ActToSeqHash.m_Buckets.m_Size;
    if ( m_Size > 0 )
    {
      v4 = 0;
      v5 = 8 * (3LL * (m_Size - 1) + 3);
      do
      {
        v6 = &m_pActivityToSequence->m_ActToSeqHash.m_Buckets.m_Memory.m_pMemory[v4 / 0x18];
        CUtlVectorBase<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int>>::RemoveAll(v6);
        if ( (v6->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CActivityToSequenceMapping::HashValueType,int>::Purge(&v6->m_Memory);
        v4 += 24LL;
      }
      while ( v4 != v5 );
      m_Size = m_pActivityToSequence->m_ActToSeqHash.m_Buckets.m_Size;
    }
    for ( i = 24LL * m_Size - 24; --m_Size >= 0; i -= 24 )
    {
      v8 = (m_pActivityToSequence->m_ActToSeqHash.m_Buckets.m_Memory.m_pMemory + i);
      CUtlVectorBase<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int>>::RemoveAll(v8);
      if ( (v8->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CActivityToSequenceMapping::HashValueType,int>::Purge(&v8->m_Memory);
        if ( (v8->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CActivityToSequenceMapping::HashValueType,int>::Purge(&v8->m_Memory);
      }
    }
    v9 = (m_pActivityToSequence->m_ActToSeqHash.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    m_pActivityToSequence->m_ActToSeqHash.m_Buckets.m_Size = 0;
    if ( v9 )
    {
      CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int>>,int>::Purge(&m_pActivityToSequence->m_ActToSeqHash.m_Buckets.m_Memory);
      if ( (m_pActivityToSequence->m_ActToSeqHash.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType,CUtlMemory<CActivityToSequenceMapping::HashValueType,int>>,int>::Purge(&m_pActivityToSequence->m_ActToSeqHash.m_Buckets.m_Memory);
    }
    operator delete(m_pActivityToSequence);
  }
  v9 = (this->m_flexControllers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_pActivityToSequence = 0;
  this->m_flexControllers.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<CFlexController const*,int>::Purge(&this->m_flexControllers.m_Memory);
    if ( (this->m_flexControllers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CFlexController const*,int>::Purge(&this->m_flexControllers.m_Memory);
  }
  v9 = (this->m_flexControllersModelToGlobal.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_flexControllersModelToGlobal.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<int,int>::Purge(&this->m_flexControllersModelToGlobal.m_Memory);
    if ( (this->m_flexControllersModelToGlobal.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_flexControllersModelToGlobal.m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_namedFlexControllers.m_SymbolTable);
  v9 = (this->m_namedFlexControllers.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_namedFlexControllers.m_Vector.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<int,int>::Purge(&this->m_namedFlexControllers.m_Vector.m_Memory);
    if ( (this->m_namedFlexControllers.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_namedFlexControllers.m_Vector.m_Memory);
  }
  v9 = (this->m_boneAndFlexCountsForMesh.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_boneAndFlexCountsForMesh.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<unsigned short,int>::Purge(&this->m_boneAndFlexCountsForMesh.m_Memory);
    if ( (this->m_boneAndFlexCountsForMesh.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned short,int>::Purge(&this->m_boneAndFlexCountsForMesh.m_Memory);
  }
  v9 = (this->m_attachmentMap.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_attachmentMap.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<AttachmentPairing_t,int>::Purge(&this->m_attachmentMap.m_Memory);
    if ( (this->m_attachmentMap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<AttachmentPairing_t,int>::Purge(&this->m_attachmentMap.m_Memory);
  }
  v10 = this->m_defaultMaterialIndexMap.m_Buckets.m_Size;
  if ( v10 > 0 )
  {
    v11 = 0;
    v12 = 8 * (3LL * (v10 - 1) + 3);
    do
    {
      v13 = &this->m_defaultMaterialIndexMap.m_Buckets.m_Memory.m_pMemory[v11 / 0x18];
      CUtlVectorBase<DefaultMaterialGroupIndex_t,CUtlMemory<DefaultMaterialGroupIndex_t,int>>::RemoveAll(v13);
      if ( (v13->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<DefaultMaterialGroupIndex_t,int>::Purge(&v13->m_Memory);
      v11 += 24LL;
    }
    while ( v11 != v12 );
    v10 = this->m_defaultMaterialIndexMap.m_Buckets.m_Size;
  }
  for ( j = 24LL * v10 - 24; --v10 >= 0; j -= 24 )
  {
    v15 = (this->m_defaultMaterialIndexMap.m_Buckets.m_Memory.m_pMemory + j);
    CUtlVectorBase<DefaultMaterialGroupIndex_t,CUtlMemory<DefaultMaterialGroupIndex_t,int>>::RemoveAll(v15);
    if ( (v15->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<DefaultMaterialGroupIndex_t,int>::Purge(&v15->m_Memory);
      if ( (v15->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<DefaultMaterialGroupIndex_t,int>::Purge(&v15->m_Memory);
    }
  }
  v9 = (this->m_defaultMaterialIndexMap.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_defaultMaterialIndexMap.m_Buckets.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<CUtlVector<DefaultMaterialGroupIndex_t,CUtlMemory<DefaultMaterialGroupIndex_t,int>>,int>::Purge(&this->m_defaultMaterialIndexMap.m_Buckets.m_Memory);
    if ( (this->m_defaultMaterialIndexMap.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<DefaultMaterialGroupIndex_t,CUtlMemory<DefaultMaterialGroupIndex_t,int>>,int>::Purge(&this->m_defaultMaterialIndexMap.m_Buckets.m_Memory);
  }
  v9 = (this->m_materialGroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_materialGroupNames.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<CUtlStringToken,int>::Purge(&this->m_materialGroupNames.m_Memory);
    if ( (this->m_materialGroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlStringToken,int>::Purge(&this->m_materialGroupNames.m_Memory);
  }
  v16 = this->m_bodyPartMap.m_Size;
  for ( k = 48LL * v16 - 48; --v16 >= 0; k -= 48 )
  {
    v18 = this->m_bodyPartMap.m_Memory.m_pMemory + k;
    v9 = (*(v18 + 9) & 0xC0000000) == 0;
    *(v18 + 4) = 0;
    if ( v9 )
    {
      CUtlMemory<int,int>::Purge((v18 + 24));
      if ( (*(v18 + 9) & 0xC0000000) == 0 )
        CUtlMemory<int,int>::Purge((v18 + 24));
    }
    if ( *(v18 + 1) != 0 )
      CUtlString::FreeMemoryBlock(v18 + 1);
  }
  v9 = (this->m_bodyPartMap.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_bodyPartMap.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<CModel::BodyPart_t,int>::Purge(&this->m_bodyPartMap.m_Memory);
    if ( (this->m_bodyPartMap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CModel::BodyPart_t,int>::Purge(&this->m_bodyPartMap.m_Memory);
  }
  v9 = (this->m_meshGroupMap.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_meshGroupMap.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<CUtlStringToken,int>::Purge(&this->m_meshGroupMap.m_Memory);
    if ( (this->m_meshGroupMap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlStringToken,int>::Purge(&this->m_meshGroupMap.m_Memory);
  }
  v19 = this->m_boneFlexDrivers.m_Size;
  for ( m = 40LL * v19 - 40; --v19 >= 0; m -= 40 )
  {
    v21 = this->m_boneFlexDrivers.m_Memory.m_pMemory + m;
    CUtlVectorBase<CBoneFlexDriverControl,CUtlMemory<CBoneFlexDriverControl,int>>::RemoveAll((v21 + 16));
    if ( (*(v21 + 9) & 0xC0000000) == 0 )
    {
      CUtlMemory<CBoneFlexDriverControl,int>::Purge((v21 + 24));
      if ( (*(v21 + 9) & 0xC0000000) == 0 )
        CUtlMemory<CBoneFlexDriverControl,int>::Purge((v21 + 24));
    }
    if ( *v21 != 0 )
      CUtlString::FreeMemoryBlock(v21);
  }
  v9 = (this->m_boneFlexDrivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_boneFlexDrivers.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<CBoneFlexDriver,int>::Purge(&this->m_boneFlexDrivers.m_Memory);
    if ( (this->m_boneFlexDrivers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBoneFlexDriver,int>::Purge(&this->m_boneFlexDrivers.m_Memory);
  }
  v9 = (this->m_remappingTableStarts.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_remappingTableStarts.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<unsigned short,int>::Purge(&this->m_remappingTableStarts.m_Memory);
    if ( (this->m_remappingTableStarts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned short,int>::Purge(&this->m_remappingTableStarts.m_Memory);
  }
  v9 = (this->m_remappingTable.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_remappingTable.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<short,int>::Purge(&this->m_remappingTable.m_Memory);
    if ( (this->m_remappingTable.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(&this->m_remappingTable.m_Memory);
  }
  CModelSkeleton::~CModelSkeleton(&this->m_modelSkeleton);
  v22 = this->m_materialGroups.m_Size;
  for ( n = 32LL * v22 - 32; --v22 >= 0; n -= 32 )
  {
    v24 = this->m_materialGroups.m_Memory.m_pMemory + n;
    CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>,int>>::RemoveAll((v24 + 8));
    if ( (*(v24 + 7) & 0xC0000000) == 0 )
    {
      CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>,int>::Purge(v24 + 1);
      if ( (*(v24 + 7) & 0xC0000000) == 0 )
        CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>,int>::Purge(v24 + 1);
    }
    if ( *v24 != 0 )
      CUtlString::FreeMemoryBlock(v24);
  }
  v9 = (this->m_materialGroups.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_materialGroups.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<CModelMaterialGroup,int>::Purge(&this->m_materialGroups.m_Memory);
    if ( (this->m_materialGroups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CModelMaterialGroup,int>::Purge(&this->m_materialGroups.m_Memory);
  }
  v25 = this->m_meshGroups.m_Size;
  for ( ii = 8LL * v25 - 8; --v25 >= 0; ii -= 8 )
  {
    v27 = (this->m_meshGroups.m_Memory.m_pMemory + ii);
    if ( v27->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v27);
  }
  v9 = (this->m_meshGroups.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_meshGroups.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_meshGroups.m_Memory);
    if ( (this->m_meshGroups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_meshGroups.m_Memory);
  }
  v9 = (this->m_AnimGroups.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AnimGroups.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<CAnimationGroupResource *,int>::Purge(&this->m_AnimGroups.m_Memory);
    if ( (this->m_AnimGroups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAnimationGroupResource *,int>::Purge(&this->m_AnimGroups.m_Memory);
  }
  CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown(&this->m_refPhysicsData);
  v9 = (this->m_lodGroupSwitchDistances.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_lodGroupSwitchDistances.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<float,int>::Purge(&this->m_lodGroupSwitchDistances.m_Memory);
    if ( (this->m_lodGroupSwitchDistances.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<float,int>::Purge(&this->m_lodGroupSwitchDistances.m_Memory);
  }
  v9 = (this->m_refLODGroupMasks.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_refLODGroupMasks.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<unsigned char,int>::Purge(&this->m_refLODGroupMasks.m_Memory);
    if ( (this->m_refLODGroupMasks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned char,int>::Purge(&this->m_refLODGroupMasks.m_Memory);
  }
  v9 = (this->m_refMeshGroupMasks.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_refMeshGroupMasks.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<unsigned long long,int>::Purge(&this->m_refMeshGroupMasks.m_Memory);
    if ( (this->m_refMeshGroupMasks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned long long,int>::Purge(&this->m_refMeshGroupMasks.m_Memory);
  }
  v28 = this->m_refMeshes.m_Size - 1;
  if ( v28 >= 0 )
  {
    v29 = 8LL * v28;
    v30 = 8 * (v28 - v28) - 8;
    do
    {
      v31 = v29;
      v29 -= 8;
      CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown((this->m_refMeshes.m_Memory.m_pMemory + v31));
    }
    while ( v29 != v30 );
  }
  v9 = (this->m_refMeshes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_refMeshes.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>,int>::Purge(&this->m_refMeshes.m_Memory);
    if ( (this->m_refMeshes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>,int>::Purge(&this->m_refMeshes.m_Memory);
  }
  v32 = this->m_ExtParts.m_Size;
  for ( jj = (v32 << 6) - 64; --v32 >= 0; jj -= 64 )
  {
    v34 = this->m_ExtParts.m_Memory.m_pMemory + jj;
    CStrongHandle<InfoForResourceTypeCModel>::Shutdown(v34 + 6);
    if ( *(v34 + 4) != 0 )
      CUtlString::FreeMemoryBlock(v34 + 4);
  }
  v9 = (this->m_ExtParts.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ExtParts.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<CModelExtPart,int>::Purge(&this->m_ExtParts.m_Memory);
    if ( (this->m_ExtParts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CModelExtPart,int>::Purge(&this->m_ExtParts.m_Memory);
  }
  if ( this->m_keyValueText.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_keyValueText);
  if ( this->m_sSurfaceProperty.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sSurfaceProperty);
  if ( this->m_name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_name);
}


// CModel::~CModel  (line 346, @0x0000000003145380, libserver.so)
// calls: CModel::~CModel, operator delete
void __fastcall CModel::~CModel(CModel *const this)
{
  CModel::~CModel(this);
  operator delete(this);
}


// CModel::GetMeshGroupMaskForMesh  (line 352, @0x0000000003140430, libserver.so)  // inlines: operator[]
MeshGroupMask_t __fastcall CModel::GetMeshGroupMaskForMesh(const CModel *const this, int iMesh)
{
  MeshGroupMask_t result; // rax

  result = -1;
  if ( iMesh >= 0 && iMesh < this->m_refMeshGroupMasks.m_Size )
    return this->m_refMeshGroupMasks.m_Memory.m_pMemory[iMesh];
  return result;
}


// CModel::GetDefaultMeshGroupMask  (line 360, @0x0000000003140460, libserver.so)
// callers: CModelState::SetupJointState, CSkeletonInstance::SetModel
MeshGroupMask_t __fastcall CModel::GetDefaultMeshGroupMask(const CModel *const this)
{
  return this->m_nDefaultMeshGroupMask;
}


// CModel::GetMaskForMeshGroup  (line 368, @0x0000000003140470, libserver.so)
// callers: CSkeletonInstance::SetSingleMeshGroup, CModel::GetMaskForMeshGroup
MeshGroupMask_t __fastcall CModel::GetMaskForMeshGroup(const CModel *const this, CUtlStringToken nMeshGroupToken)
{
  int m_Size; // edx
  MeshGroupMask_t result; // rax
  CUtlStringToken *m_pMemory; // rax
  int v5; // ecx

  m_Size = this->m_meshGroupMap.m_Size;
  result = -1;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_meshGroupMap.m_Memory.m_pMemory;
    v5 = 0;
    if ( nMeshGroupToken.m_nHashCode == m_pMemory->m_nHashCode )
    {
      return 1;
    }
    else
    {
      do
      {
        if ( ++v5 == m_Size )
          return -1;
        ++m_pMemory;
      }
      while ( nMeshGroupToken.m_nHashCode != m_pMemory->m_nHashCode );
      return 1LL << v5;
    }
  }
  return result;
}


// CModel::GetMaskForMeshGroup  (line 382, @0x00000000031404d0, libserver.so)  // inlines: MakeStringToken
// calls: CModel::GetMaskForMeshGroup, MurmurHash2LowerCase, RegisterStringToken
MeshGroupMask_t __fastcall CModel::GetMaskForMeshGroup(const CModel *const this, const char *pMeshGroupName)
{
  CUtlStringToken v4; // esi
  uint32 v6; // eax
  uint32 v7; // [rsp+Ch] [rbp-14h]

  v4.m_nHashCode = 0;
  if ( pMeshGroupName != 0 && *pMeshGroupName != 0 )
  {
    v6 = MurmurHash2LowerCase(pMeshGroupName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v7 = v6;
      RegisterStringToken(v6, pMeshGroupName, 0, 1);
      v4.m_nHashCode = v7;
    }
    else
    {
      v4.m_nHashCode = v6;
    }
  }
  return CModel::GetMaskForMeshGroup(this, v4);
}


// CModel::GetNumMeshesInMeshGroup  (line 387, @0x0000000003140540, libserver.so)
int __fastcall CModel::GetNumMeshesInMeshGroup(const CModel *const this, int nMeshGroup)
{
  char v2; // cl
  int m_Size; // esi
  unsigned __int64 *m_pMemory; // rdi
  __int64 v5; // rdx
  int result; // eax

  v2 = nMeshGroup;
  m_Size = this->m_refMeshes.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_refMeshGroupMasks.m_Memory.m_pMemory;
  v5 = 0;
  result = 0;
  do
    result -= ((m_pMemory[v5++] & (1LL << v2)) == 0) - 1;
  while ( m_Size > v5 );
  return result;
}


// CModel::GetIndexForMeshGroup  (line 406, @0x0000000003140590, libserver.so)
int __fastcall CModel::GetIndexForMeshGroup(const CModel *const this, CUtlStringToken nMeshGroupToken)
{
  int m_Size; // ecx
  int result; // eax
  CUtlStringToken *m_pMemory; // rdx

  m_Size = this->m_meshGroupMap.m_Size;
  result = -1;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_meshGroupMap.m_Memory.m_pMemory;
    result = 0;
    if ( nMeshGroupToken.m_nHashCode != m_pMemory->m_nHashCode )
    {
      while ( ++result != m_Size )
      {
        ++m_pMemory;
        if ( nMeshGroupToken.m_nHashCode == m_pMemory->m_nHashCode )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CModel::GetNumMeshGroups  (line 420, @0x00000000031405d0, libserver.so)
int __fastcall CModel::GetNumMeshGroups(const CModel *const this)
{
  return this->m_meshGroups.m_Size;
}


// CModel::GetMeshGroupName  (line 425, @0x00000000031405e0, libserver.so)  // inlines: operator[]
// calls: CUtlString::Get
const char *__fastcall CModel::GetMeshGroupName(const CModel *const this, int nMeshGroup)
{
  return CUtlString::Get(&this->m_meshGroups.m_Memory.m_pMemory[nMeshGroup]);
}


// CModel::GetBodyPartForName  (line 434, @0x0000000003140600, libserver.so)
// callers: CModel::GetBodyPartForName
int __fastcall CModel::GetBodyPartForName(const CModel *const this, CUtlStringToken nBodyPartToken)
{
  int m_Size; // ecx
  int result; // eax
  CModel::BodyPart_t *m_pMemory; // rdx

  m_Size = this->m_bodyPartMap.m_Size;
  result = -1;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_bodyPartMap.m_Memory.m_pMemory;
    result = 0;
    if ( nBodyPartToken.m_nHashCode != m_pMemory->m_bodyPartToken.m_nHashCode )
    {
      while ( ++result != m_Size )
      {
        ++m_pMemory;
        if ( nBodyPartToken.m_nHashCode == m_pMemory->m_bodyPartToken.m_nHashCode )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CModel::GetBodyPartForName  (line 448, @0x0000000003140640, libserver.so)  // inlines: MakeStringToken
// calls: CModel::GetBodyPartForName, MurmurHash2LowerCase, RegisterStringToken
// callers: CStudioHdr::bodypartbyname, FindBodygroupByName
int __fastcall CModel::GetBodyPartForName(const CModel *const this, const char *pName)
{
  CUtlStringToken v4; // esi
  uint32 v6; // eax
  uint32 v7; // [rsp+Ch] [rbp-14h]

  v4.m_nHashCode = 0;
  if ( pName != 0 && *pName != 0 )
  {
    v6 = MurmurHash2LowerCase(pName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v7 = v6;
      RegisterStringToken(v6, pName, 0, 1);
      v4.m_nHashCode = v7;
    }
    else
    {
      v4.m_nHashCode = v6;
    }
  }
  return CModel::GetBodyPartForName(this, v4);
}


// CModel::GetBodyPartName  (line 453, @0x00000000031406b0, libserver.so)  // inlines: operator[]
// calls: CUtlString::Get
// callers: CStudioHdr::bodypartname, GetBodygroupName
const char *__fastcall CModel::GetBodyPartName(const CModel *const this, int nPart)
{
  return CUtlString::Get(&this->m_bodyPartMap.m_Memory.m_pMemory[nPart].m_bodyPartName);
}


// CModel::GetBodyPartMeshName  (line 458, @0x0000000003140b20, libserver.so)  // inlines: V_strncpy<int>, operator[]
// calls: CModel::GetMeshName, _V_strncpy
// callers: CStudioHdr::bodypartmeshname, GetBodygroupPartName
void __fastcall CModel::GetBodyPartMeshName(
        const CModel *const this,
        int nPart,
        int nMesh,
        char *pResourceName,
        int nSizeResourceName)
{
  int v5; // esi

  v5 = this->m_bodyPartMap.m_Memory.m_pMemory[nPart].m_meshList.m_Memory.m_pMemory[nMesh];
  if ( v5 == -1 )
    _V_strncpy(pResourceName, "", nSizeResourceName);
  else
    CModel::GetMeshName(this, v5, pResourceName, nSizeResourceName);
}


// CModel::GetNumBodyParts  (line 471, @0x00000000031406d0, libserver.so)
// callers: CStudioHdr::numbodyparts, SetBodygroup, GetBodygroup, GetBodygroupName, GetBodygroupPartName, GetBodygroupCount, GetNumBodyGroups
int __fastcall CModel::GetNumBodyParts(const CModel *const this)
{
  return this->m_bodyPartMap.m_Size;
}


// CModel::GetNumBodyPartMeshes  (line 476, @0x00000000031406e0, libserver.so)  // inlines: operator[]
// callers: CStudioHdr::numbodypartmeshes, SetBodygroup, GetBodygroupPartName, GetBodygroupCount
int __fastcall CModel::GetNumBodyPartMeshes(const CModel *const this, int nPart)
{
  return this->m_bodyPartMap.m_Memory.m_pMemory[nPart].m_meshList.m_Size;
}


// CModel::GetBodyPartMask  (line 481, @0x0000000003140700, libserver.so)  // inlines: operator[]
// callers: CStudioHdr::bodypartmask, SetBodygroup
MeshGroupMask_t __fastcall CModel::GetBodyPartMask(const CModel *const this, int nPart)
{
  return this->m_bodyPartMap.m_Memory.m_pMemory[nPart].m_nBodyPartMask;
}


// CModel::GetBodyPartMeshMask  (line 486, @0x0000000003140720, libserver.so)  // inlines: operator[]
// callers: CStudioHdr::bodypartmeshmask, SetBodygroup
MeshGroupMask_t __fastcall CModel::GetBodyPartMeshMask(const CModel *const this, int nPart, int nMesh)
{
  MeshGroupMask_t result; // rax
  __int64 v4; // rdx

  result = 0;
  if ( nMesh >= 0 )
  {
    v4 = this->m_bodyPartMap.m_Memory.m_pMemory[nPart].m_meshList.m_Memory.m_pMemory[nMesh];
    if ( v4 != -1 )
      return this->m_refMeshGroupMasks.m_Memory.m_pMemory[v4];
  }
  return result;
}


// CModel::FindMeshIndexForMask  (line 498, @0x0000000003140760, libserver.so)  // inlines: GetBodyPartMask, operator[]
// callers: CStudioHdr::bodypartmeshindexformask, GetBodygroup
int __fastcall CModel::FindMeshIndexForMask(const CModel *const this, int nPart, MeshGroupMask_t nMask)
{
  __int64 v3; // rax
  CModel::BodyPart_t *v4; // rcx
  int m_Size; // esi
  MeshGroupMask_t v6; // rdx
  int *m_pMemory; // r8
  __int64 v8; // rcx

  LODWORD(v3) = -1;
  v4 = &this->m_bodyPartMap.m_Memory.m_pMemory[nPart];
  m_Size = v4->m_meshList.m_Size;
  v6 = v4->m_nBodyPartMask & nMask;
  if ( m_Size > 0 )
  {
    m_pMemory = v4->m_meshList.m_Memory.m_pMemory;
    v3 = 0;
    while ( 1 )
    {
      v8 = m_pMemory[v3];
      if ( v8 != -1 && v6 == this->m_refMeshGroupMasks.m_Memory.m_pMemory[v8] )
        break;
      if ( m_Size <= ++v3 )
      {
        LODWORD(v3) = -1;
        return v3;
      }
    }
  }
  return v3;
}


// CModel::GetMaterialGroupIndex  (line 522, @0x0000000003140800, libserver.so)
// calls: CModel::GetMaterialGroupIndex
// callers: CBaseAnimating::GetS1Skin, CBasePropDoor::CalcDoorSounds, CPropDoorRotatingBreakable::PrecacheBreakables, CStudioHdr::getindexforskintoken
int __fastcall CModel::GetMaterialGroupIndex(const CModel *const this, CUtlStringToken nGroup)
{
  return CModel::GetMaterialGroupIndex(this, nGroup.m_nHashCode);
}


// CModel::GetMaterialGroupIndex  (line 527, @0x00000000031407c0, libserver.so)
// callers: CModel::GetMaterialGroupIndex
int __fastcall CModel::GetMaterialGroupIndex(const CModel *const this, uint32 nGroupHash)
{
  int m_Size; // ecx
  int result; // eax
  CUtlStringToken *m_pMemory; // rdx

  m_Size = this->m_materialGroupNames.m_Size;
  result = -1;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_materialGroupNames.m_Memory.m_pMemory;
    result = 0;
    if ( m_pMemory->m_nHashCode != nGroupHash )
    {
      while ( ++result != m_Size )
      {
        ++m_pMemory;
        if ( m_pMemory->m_nHashCode == nGroupHash )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CModel::GetMaterialGroupList  (line 540, @0x0000000003144680, libserver.so)  // inlines: Element, operator[]
// calls: CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::SetCount, CModel::GetMaterialGroupName, CUtlString::operator=
void __fastcall CModel::GetMaterialGroupList(
        const CModel *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pGroupList)
{
  int m_Size; // r12d
  __int64 v5; // rbx
  const char *MaterialGroupName; // rax
  CUtlString *v7; // rdi

  m_Size = this->m_materialGroups.m_Size;
  if ( m_Size != 0 )
  {
    CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::SetCount(pGroupList, m_Size);
    if ( m_Size > 0 )
    {
      v5 = 0;
      do
      {
        MaterialGroupName = CModel::GetMaterialGroupName(this, v5);
        v7 = &pGroupList->m_Memory.m_pMemory[v5++];
        CUtlString::operator=(v7, MaterialGroupName);
      }
      while ( m_Size > v5 );
    }
  }
}


// CModel::GetMaterialGroupMaterials  (line 554, @0x0000000003143d80, libserver.so)  // inlines: AddToTail, CWeakHandle, CopyConstruct<CWeakHandle<InfoForResourceTypeIMaterial2> >, Element, GetHandle, GrowMemory, Init, RemoveAll, operator[]
// calls: CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Grow
void __fastcall CModel::GetMaterialGroupMaterials(
        const CModel *const this,
        int nGroupIndex,
        CUtlVector<CWeakHandle<InfoForResourceTypeIMaterial2>,CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>,int> > *pOutGroupMaterials)
{
  CModelMaterialGroup *v4; // r15
  __int64 v5; // r14
  __int64 v6; // r12
  int v7; // r13d
  CWeakHandle<InfoForResourceTypeIMaterial2> *v8; // rax
  const ResourceBindingBase_t *m_pBinding; // rcx
  int m_Size; // eax
  CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>,CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-40h]
  const ResourceBindingBase_t *v12; // [rsp+8h] [rbp-38h]

  pOutGroupMaterials->m_Size = 0;
  if ( nGroupIndex < this->m_materialGroups.m_Size )
  {
    v4 = &this->m_materialGroups.m_Memory.m_pMemory[nGroupIndex];
    if ( v4->m_materials.m_Size > 0 )
    {
      v5 = 0;
      v6 = 0;
      v7 = 0;
      p_m_Memory = &pOutGroupMaterials->m_Memory;
      while ( 1 )
      {
        m_pBinding = v4->m_materials.m_Memory.m_pMemory[v5].m_pBinding;
        m_Size = v6;
        if ( v6 == pOutGroupMaterials->m_Memory.m_nAllocationCount )
        {
          v12 = v4->m_materials.m_Memory.m_pMemory[v5].m_pBinding;
          CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>,int>::Grow(p_m_Memory, 1);
          m_Size = pOutGroupMaterials->m_Size;
          m_pBinding = v12;
        }
        pOutGroupMaterials->m_Size = m_Size + 1;
        v8 = &pOutGroupMaterials->m_Memory.m_pMemory[v6];
        if ( v8 != 0 )
          v8->m_pBinding = m_pBinding;
        ++v7;
        ++v5;
        if ( v4->m_materials.m_Size <= v7 )
          break;
        v6 = pOutGroupMaterials->m_Size;
      }
    }
  }
}


// CModel::GetNumMaterialGroups  (line 567, @0x0000000003140810, libserver.so)
int __fastcall CModel::GetNumMaterialGroups(const CModel *const this)
{
  return this->m_materialGroups.m_Size;
}


// CModel::GetMaterialGroupName  (line 572, @0x0000000003140820, libserver.so)  // inlines: operator[]
// calls: CUtlString::Get
// callers: CModel::GetMaterialGroupList
const char *__fastcall CModel::GetMaterialGroupName(const CModel *const this, int iGroup)
{
  return CUtlString::Get(&this->m_materialGroups.m_Memory.m_pMemory[iGroup].m_name);
}


// CModel::GetMaterialReplacementForGroup  (line 577, @0x0000000003140840, libserver.so)  // inlines: BuildHandle, CWeakHandle, DoFind, Element, Find, FromUntypedHandleUnchecked, GetBucketIndex, GetHandle, InitUntypedUnchecked, StaticInvalidHandle, operator[]
HMaterial __fastcall CModel::GetMaterialReplacementForGroup(
        const ResourceBindingBase_t **a1,
        const CModel *const this,
        int nGroupIndex,
        ResourceId_t nDefaultMaterialID)
{
  unsigned int v5; // eax
  CUtlVector<DefaultMaterialGroupIndex_t,CUtlMemory<DefaultMaterialGroupIndex_t,int> > *v6; // r13
  int m_Size; // r12d
  __int64 v8; // r14
  int v9; // r15d
  __int64 m_nIndex; // rdx
  CModelMaterialGroup *v12; // rax
  unsigned int v14; // [rsp+Ch] [rbp-54h]
  DefaultMaterialGroupIndex_t defaultIndexSearch; // [rsp+20h] [rbp-40h] BYREF

  *&defaultIndexSearch.m_nIndex = 0;
  defaultIndexSearch.m_nMaterialId = nDefaultMaterialID;
  v5 = this->m_defaultMaterialIndexMap.m_KeyFunc(&defaultIndexSearch);
  if ( this->m_defaultMaterialIndexMap.m_bPowerOfTwo )
    v14 = this->m_defaultMaterialIndexMap.m_ModMask & v5;
  else
    v14 = v5 % this->m_defaultMaterialIndexMap.m_Buckets.m_Size;
  v6 = &this->m_defaultMaterialIndexMap.m_Buckets.m_Memory.m_pMemory[v14];
  m_Size = v6->m_Size;
  if ( v6->m_Size <= 0 )
  {
    v9 = 0;
  }
  else
  {
    v8 = 0;
    v9 = 0;
    while ( !this->m_defaultMaterialIndexMap.m_CompareFunc(&v6->m_Memory.m_pMemory[v8], &defaultIndexSearch) )
    {
      ++v9;
      ++v8;
      if ( v9 == m_Size )
        goto LABEL_10;
    }
  }
  if ( m_Size == v9
    || (v9 | (v14 << 16)) == 0xFFFFFFFF
    || (m_nIndex = this->m_defaultMaterialIndexMap.m_Buckets.m_Memory.m_pMemory[(v9 | (v14 << 16)) >> 16].m_Memory.m_pMemory[v9].m_nIndex,
        this->m_materialGroups.m_Size <= nGroupIndex)
    || (v12 = &this->m_materialGroups.m_Memory.m_pMemory[nGroupIndex], m_nIndex >= v12->m_materials.m_Size) )
  {
LABEL_10:
    *a1 = 0;
  }
  else
  {
    *a1 = v12->m_materials.m_Memory.m_pMemory[m_nIndex].m_pBinding;
  }
  return a1;
}


// CModel::GetMaterialGroupTokenForIndex  (line 596, @0x0000000003140990, libserver.so)  // inlines: operator[]
// callers: CreatePiecesFromPropData, CreatePiece, CreateGibsFromList, CBaseAnimating::SetSkin, CStudioHdr::gettokenforskinindex
CUtlStringToken __fastcall CModel::GetMaterialGroupTokenForIndex(const CModel *const this, int nGroupIndex)
{
  if ( nGroupIndex >= 0 && nGroupIndex < this->m_materialGroupNames.m_Size )
    return this->m_materialGroupNames.m_Memory.m_pMemory[nGroupIndex].m_nHashCode;
  else
    return 0;
}


// CModel::GetAllMaterials  (line 604, @0x0000000003143e40, libserver.so)  // inlines: AddToTail, CWeakHandle, CopyConstruct<CWeakHandle<InfoForResourceTypeIMaterial2> >, Element, FromUntypedHandleUnchecked, GetHandle, GrowMemory, Init, InitUntypedUnchecked, end, operator[]
// calls: CModel::GetMeshData, CMaterialDrawDescriptor::GetMaterial, CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int> >::Find, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>::Grow
void __fastcall CModel::GetAllMaterials(
        const CModel *const this,
        CUtlVector<CWeakHandle<InfoForResourceTypeIMaterial2>,CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>,int> > *const materialList)
{
  __int64 v3; // r14
  int v4; // r13d
  char *v5; // r15
  __int64 m_Size; // rax
  int v7; // esi
  CWeakHandle<InfoForResourceTypeIMaterial2> *v8; // rax
  CModelMaterialGroup *m_pMemory; // r15
  __int64 v10; // r14
  int v11; // ebx
  const ResourceBindingBase_t *m_pBinding; // r13
  __int64 v13; // rax
  int v14; // esi
  CWeakHandle<InfoForResourceTypeIMaterial2> *v15; // rax
  CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>,CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>,int> >::CAllocator *j; // [rsp+0h] [rbp-70h]
  int i; // [rsp+10h] [rbp-60h]
  int v19; // [rsp+14h] [rbp-5Ch]
  int v20; // [rsp+14h] [rbp-5Ch]
  CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>,int> *v21; // [rsp+18h] [rbp-58h]
  int __for_end; // [rsp+20h] [rbp-50h]
  CUtlVectorBase<CModelMaterialGroup,CUtlMemory<CModelMaterialGroup,int> >::const_iterator __for_enda; // [rsp+20h] [rbp-50h]
  const CRenderMesh *pMesh; // [rsp+28h] [rbp-48h]
  HMaterial hMat; // [rsp+30h] [rbp-40h] BYREF

  i = 0;
  for ( j = &materialList->m_Memory; i < this->m_refMeshes.m_Size; ++i )
  {
    v21 = 0;
    pMesh = CModel::GetMeshData(this, i);
    for ( __for_end = 0; pMesh->m_sceneObjects.m_Size > __for_end; v21 = (v21 + 72) )
    {
      v3 = 0;
      v4 = 0;
      v5 = pMesh->m_sceneObjects.m_Memory.m_pMemory + v21;
      if ( *(v5 + 8) > 0 )
      {
        do
        {
          CMaterialDrawDescriptor::GetMaterial((*(v5 + 5) + v3));
          if ( CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>,CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>,int>>::Find(
                 materialList,
                 &hMat) < 0 )
          {
            m_Size = materialList->m_Size;
            v7 = materialList->m_Size;
            if ( m_Size == materialList->m_Memory.m_nAllocationCount )
            {
              v19 = materialList->m_Size;
              CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>,int>::Grow(j, 1);
              v7 = materialList->m_Size;
              m_Size = v19;
            }
            materialList->m_Size = v7 + 1;
            v8 = &materialList->m_Memory.m_pMemory[m_Size];
            if ( v8 != 0 )
            {
              v8->m_pBinding = 0;
              v8->m_pBinding = hMat.m_pBinding;
            }
          }
          ++v4;
          v3 += 200;
        }
        while ( *(v5 + 8) > v4 );
      }
      ++__for_end;
    }
  }
  m_pMemory = this->m_materialGroups.m_Memory.m_pMemory;
  for ( __for_enda = &m_pMemory[this->m_materialGroups.m_Size]; __for_enda != m_pMemory; ++m_pMemory )
  {
    if ( m_pMemory->m_materials.m_Size > 0 )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        while ( 1 )
        {
          m_pBinding = m_pMemory->m_materials.m_Memory.m_pMemory[v10].m_pBinding;
          hMat.m_pBinding = m_pBinding;
          if ( CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>,CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>,int>>::Find(
                 materialList,
                 &hMat) < 0 )
          {
            v13 = materialList->m_Size;
            v14 = materialList->m_Size;
            if ( v13 == materialList->m_Memory.m_nAllocationCount )
            {
              v20 = materialList->m_Size;
              CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>,int>::Grow(&materialList->m_Memory, 1);
              v14 = materialList->m_Size;
              v13 = v20;
            }
            materialList->m_Size = v14 + 1;
            v15 = &materialList->m_Memory.m_pMemory[v13];
            if ( v15 != 0 )
              break;
          }
          ++v11;
          ++v10;
          if ( m_pMemory->m_materials.m_Size <= v11 )
            goto LABEL_22;
        }
        v15->m_pBinding = m_pBinding;
        ++v11;
        ++v10;
      }
      while ( m_pMemory->m_materials.m_Size > v11 );
    }
LABEL_22:
    ;
  }
}


// CModel::IsTranslucent  (line 636, @0x00000000031409c0, libserver.so)  // inlines: flags, operator|
bool __fastcall CModel::IsTranslucent(const CModel *const this)
{
  return (this->m_nRuntimeFlags | this->m_nInherentFlags) & 1;
}


// CModel::IsTranslucentTwoPass  (line 641, @0x00000000031409d0, libserver.so)  // inlines: flags, operator|
bool __fastcall CModel::IsTranslucentTwoPass(const CModel *const this)
{
  return ((LOBYTE(this->m_nRuntimeFlags) | LOBYTE(this->m_nInherentFlags)) & 2) != 0;
}


// CModel::IsRuntimeCombined  (line 646, @0x00000000031409f0, libserver.so)  // inlines: flags, operator|
bool __fastcall CModel::IsRuntimeCombined(const CModel *const this)
{
  return ((LOBYTE(this->m_nRuntimeFlags) | LOBYTE(this->m_nInherentFlags)) & 4) != 0;
}


// CModel::flags  (line 652, @0x0000000003140a10, libserver.so)  // inlines: operator|
// callers: CBaseAnimating::GetGlobalFadeScale, CBaseAnimating::Spawn, CBreakableProp::Spawn, CRagdollProp::Spawn, CStudioHdr::flags
ModelFlags_t __fastcall CModel::flags(const CModel *const this)
{
  return this->m_nRuntimeFlags | this->m_nInherentFlags;
}


// CModel::pszName  (line 657, @0x0000000003140a20, libserver.so)
// calls: CUtlString::Get
// callers: CBaseFlex::FindSceneFile, CPhysicsGameSystem::LogUpdater, CGameSceneNode::StartHierarchicalAttachment, CStudioHdr::pszName, CIKContext::AutoIKRelease, CActivityToSequenceMapping::GetSequenceVariantForActivity, GetSequenceActivityName
const char *__fastcall CModel::pszName(const CModel *const this)
{
  return CUtlString::Get(&this->m_name);
}


// CModel::name  (line 662, @0x0000000003140a30, libserver.so)
// calls: CUtlString::Get
// callers: CBreakModelsPrecached::ComputeServerSideSpawn, CBaseProp::ParsePropData, CDynamicProp::ShouldSetCreateTime, CSkeletonInstance::SetModel, CPhysBox::Spawn, CRagdollProp::HasPhysgunInteraction, CRagdoll::Init, CPhysicsProp::GetPropDataAngles, CPhysicsProp::GetCarryDistanceOffset, CPropDoorRotatingBreakable::OnTakeDamage, CPhysicsProp::Spawn, CBaseServerVehicle::ParseEntryExitAnims
const char *__fastcall CModel::name(const CModel *const this)
{
  return CUtlString::Get(&this->m_name);
}


// CModel::GetNumMeshes  (line 670, @0x0000000003140a40, libserver.so)
// callers: CreatePiecesFromBreakModelList, IDebugOverlay::EntityHitboxes, CModelState::GetRenderBounds, CModel::CalcProceduralBones
int __fastcall CModel::GetNumMeshes(const CModel *const this)
{
  return this->m_refMeshes.m_Size;
}


// CModel::GetMeshHandle_DEPRECATED  (line 675, @0x0000000003140a50, libserver.so)  // inlines: FromUntypedHandleUnchecked, InitUntypedUnchecked, operator CWeakHandle<InfoForResourceTypeCRenderMesh>, operator[]
HRenderMesh_Internal __fastcall CModel::GetMeshHandle_DEPRECATED(
        const ResourceBindingBase_t **a1,
        const CModel *const this,
        int m)
{
  *a1 = this->m_refMeshes.m_Memory.m_pMemory[m].m_pBinding;
  return a1;
}


// CModel::HasMesh  (line 680, @0x0000000003140a70, libserver.so)
// callers: CEnvSky::UpdateSceneObjects, CPhysicsGameSystem::CreateDebugRenderBuffers, CSceneAnimatableObject::Init
bool __fastcall CModel::HasMesh(const CModel *const this, int iMesh)
{
  bool result; // al

  result = 0;
  if ( iMesh >= 0 )
    return iMesh < this->m_refMeshes.m_Size;
  return result;
}


// CModel::GetMeshData  (line 688, @0x0000000003140a90, libserver.so)  // inlines: GetData, GetHandle, operator[]
// callers: CHitboxComponent::Activate, CEnvSky::UpdateSceneObjects, CPhysicsGameSystem::CreateDebugRenderBuffers, IDebugOverlay::EntityHitboxes, CModelState::GetRenderBounds, CSkeletonInstance::GetHitboxByIndex, CSceneAnimatableObject::Init, CModel::GetMeshBounds, CModel::AllMeshesSkinnedToOneBone, CModel::FindHitboxSetIndexByName, CModel::FindHitboxSetByName, CModel::GetHitboxSetByIndex (20 total)
const CRenderMesh *__fastcall CModel::GetMeshData(const CModel *const this, int iMesh)
{
  const CRenderMesh *result; // rax
  const CRenderMesh **m_pBinding; // rdx

  result = 0;
  if ( iMesh >= 0 && iMesh < this->m_refMeshes.m_Size )
  {
    m_pBinding = this->m_refMeshes.m_Memory.m_pMemory[iMesh].m_pBinding;
    if ( m_pBinding != 0 )
      return *m_pBinding;
  }
  return result;
}


// CModel::HasSkinnedMeshes  (line 696, @0x0000000003140ac0, libserver.so)  // inlines: flags, operator|
// callers: CSkeletonInstance::IsRigidSkeleton
bool __fastcall CModel::HasSkinnedMeshes(const CModel *const this)
{
  return ((LOWORD(this->m_nRuntimeFlags) | LOWORD(this->m_nInherentFlags)) & 0x400) != 0;
}


// CModel::AllMeshesSkinnedToOneBone  (line 705, @0x00000000031412a0, libserver.so)
// calls: CModel::GetMeshData, CRenderSkeleton::GetBoneCount, CModel::GetLocalToMasterTableForMesh
int16 __fastcall CModel::AllMeshesSkinnedToOneBone(const CModel *const this)
{
  int16 v1; // r13
  int v3; // ebx
  int m_Size; // r14d
  const CRenderMesh *MeshData; // rax
  int16 v6; // ax

  v1 = -1;
  v3 = 0;
  m_Size = this->m_refMeshes.m_Size;
  if ( m_Size > 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        MeshData = CModel::GetMeshData(this, v3);
        if ( MeshData != 0 )
          break;
LABEL_4:
        if ( ++v3 == m_Size )
          return v1;
      }
      if ( CRenderSkeleton::GetBoneCount(&MeshData->m_skeleton) != 1 )
        return -1;
      v6 = *CModel::GetLocalToMasterTableForMesh(this, v3);
      if ( v1 != -1 )
      {
        if ( v6 != v1 )
          return -1;
        goto LABEL_4;
      }
      ++v3;
      v1 = v6;
      if ( v3 == m_Size )
        return v1;
    }
  }
  return -1;
}


// CModel::GetMeshName  (line 740, @0x0000000003140ae0, libserver.so)  // inlines: GetMeshHandle_DEPRECATED, GetResourceName, ResourceGetName, String, V_strncpy<int>, operator CWeakHandle<InfoForResourceTypeCRenderMesh>, operator[]
// calls: _V_strncpy
// callers: CModel::GetBodyPartMeshName
void __fastcall CModel::GetMeshName(const CModel *const this, int iMesh, char *pOutName, int nBufferSize)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const char *v5; // rsi
  const char **m_Name; // rax

  m_pBinding = this->m_refMeshes.m_Memory.m_pMemory[iMesh].m_pBinding;
  v5 = "";
  if ( m_pBinding != 0 )
  {
    m_Name = m_pBinding->m_Name;
    if ( m_Name != 0 && *m_Name != 0 )
      v5 = *m_Name;
  }
  _V_strncpy(pOutName, v5, nBufferSize);
}


// CModel::GetMeshBounds  (line 746, @0x0000000003140b70, libserver.so)  // inlines: Init, Max, Min, operator=
// calls: CModel::GetMeshData, CRenderMesh::GetBounds
// callers: CModel::GetSequenceBounds
void __fastcall CModel::GetMeshBounds(const CModel *const this, Vector *pOutMins, Vector *pOutMaxs)
{
  int m_Size; // r12d
  int v7; // ebx
  const CRenderMesh *MeshData; // rax
  vec_t v9; // xmm1_4
  vec_t v10; // xmm2_4
  vec_t v11; // xmm1_4
  vec_t v12; // xmm2_4
  Vector min; // [rsp+10h] [rbp-50h] BYREF
  Vector max; // [rsp+20h] [rbp-40h] BYREF

  m_Size = this->m_refMeshes.m_Size;
  if ( m_Size != 0 )
  {
    pOutMins->x = 3.4028235e38;
    v7 = 0;
    pOutMins->y = 3.4028235e38;
    pOutMins->z = 3.4028235e38;
    pOutMaxs->x = -3.4028235e38;
    pOutMaxs->y = -3.4028235e38;
    pOutMaxs->z = -3.4028235e38;
    if ( m_Size > 0 )
    {
      do
      {
        MeshData = CModel::GetMeshData(this, v7);
        if ( MeshData != 0 )
        {
          CRenderMesh::GetBounds(MeshData, &min, &max);
          v9 = fminf(pOutMins->y, min.y);
          v10 = fminf(pOutMins->x, min.x);
          pOutMins->z = fminf(pOutMins->z, min.z);
          pOutMins->y = v9;
          pOutMins->x = v10;
          v11 = fmaxf(pOutMaxs->y, max.y);
          v12 = fmaxf(pOutMaxs->x, max.x);
          pOutMaxs->z = fmaxf(pOutMaxs->z, max.z);
          pOutMaxs->y = v11;
          pOutMaxs->x = v12;
        }
        ++v7;
      }
      while ( v7 != m_Size );
    }
  }
  else
  {
    pOutMins->x = 0.0;
    pOutMins->y = 0.0;
    pOutMins->z = 0.0;
    pOutMaxs->x = 0.0;
    pOutMaxs->y = 0.0;
    pOutMaxs->z = 0.0;
  }
}


// CModel::GetPhysicsBounds  (line 772, @0x0000000003140cc0, libserver.so)  // inlines: GetData, GetPhysicsContainer, Init, Max, Min, TransformAABB, operator=, operator[]
// calls: VPhysics2ShapeDef_t::GetBbox, TransformAABB
void __fastcall CModel::GetPhysicsBounds(const CModel *const this, Vector *pOutMins, Vector *pOutMaxs)
{
  const ResourceBindingBase_t *m_pBinding; // rdx
  _DWORD *m_pData; // r14
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // r15
  vec_t v10; // xmm1_4
  vec_t v11; // xmm2_4
  vec_t v12; // xmm1_4
  vec_t v13; // xmm2_4
  const matrix3x4_t *v14; // rdi
  vec_t v15; // xmm1_4
  vec_t v16; // xmm2_4
  vec_t v17; // xmm1_4
  vec_t v18; // xmm2_4
  __int64 v19; // [rsp+20h] [rbp-80h]
  AABB_t boxLocal; // [rsp+30h] [rbp-70h] BYREF
  AABB_t boxWorld; // [rsp+50h] [rbp-50h] BYREF

  pOutMins->x = 3.4028235e38;
  pOutMins->y = 3.4028235e38;
  pOutMins->z = 3.4028235e38;
  pOutMaxs->x = -3.4028235e38;
  pOutMaxs->y = -3.4028235e38;
  pOutMaxs->z = -3.4028235e38;
  m_pBinding = this->m_refPhysicsData.m_pBinding;
  if ( m_pBinding != 0 )
  {
    m_pData = m_pBinding->m_pData;
    if ( m_pBinding->m_pData != 0 )
    {
      v7 = m_pData[26];
      if ( v7 > 0 )
      {
        v8 = 0;
        v9 = 0;
        v19 = 8LL * (v7 - 1) + 8;
        VPhysics2ShapeDef_t::GetBbox(&boxLocal, (**(m_pData + 14) + 8LL));
        while ( 1 )
        {
          if ( m_pData[24] != 0 )
          {
            v9 += 8;
            v14 = (*(m_pData + 11) + v8);
            v8 += 48;
            TransformAABB(
              v14,
              &boxLocal.m_vMinBounds,
              &boxLocal.m_vMaxBounds,
              &boxWorld.m_vMinBounds,
              &boxWorld.m_vMaxBounds);
            v15 = fminf(pOutMins->y, boxWorld.m_vMinBounds.y);
            v16 = fminf(pOutMins->x, boxWorld.m_vMinBounds.x);
            pOutMins->z = fminf(pOutMins->z, boxWorld.m_vMinBounds.z);
            pOutMins->y = v15;
            pOutMins->x = v16;
            v17 = fmaxf(pOutMaxs->y, boxWorld.m_vMaxBounds.y);
            v18 = fmaxf(pOutMaxs->x, boxWorld.m_vMaxBounds.x);
            pOutMaxs->z = fmaxf(pOutMaxs->z, boxWorld.m_vMaxBounds.z);
            pOutMaxs->y = v17;
            pOutMaxs->x = v18;
            if ( v9 == v19 )
              return;
          }
          else
          {
            v9 += 8;
            v8 += 48;
            v10 = fminf(pOutMins->y, boxLocal.m_vMinBounds.y);
            v11 = fminf(pOutMins->x, boxLocal.m_vMinBounds.x);
            pOutMins->z = fminf(pOutMins->z, boxLocal.m_vMinBounds.z);
            pOutMins->y = v10;
            pOutMins->x = v11;
            v12 = fmaxf(pOutMaxs->y, boxLocal.m_vMaxBounds.y);
            v13 = fmaxf(pOutMaxs->x, boxLocal.m_vMaxBounds.x);
            pOutMaxs->z = fmaxf(pOutMaxs->z, boxLocal.m_vMaxBounds.z);
            pOutMaxs->y = v12;
            pOutMaxs->x = v13;
            if ( v9 == v19 )
              return;
          }
          VPhysics2ShapeDef_t::GetBbox(&boxLocal, (*(*(m_pData + 14) + v9) + 8LL));
        }
      }
    }
  }
  pOutMins->x = 0.0;
  pOutMins->y = 0.0;
  pOutMins->z = 0.0;
  pOutMaxs->x = 0.0;
  pOutMaxs->y = 0.0;
  pOutMaxs->z = 0.0;
}


// CModel::GetModelRenderBounds  (line 808, @0x0000000003140f10, libserver.so)  // inlines: VectorCompare, VectorCopy, operator==
void __fastcall CModel::GetModelRenderBounds(const CModel *const this, Vector *pOutMins, Vector *pOutMaxs)
{
  float x; // xmm0_4
  float y; // xmm2_4
  float z; // xmm3_4

  x = this->m_vViewMin.x;
  if ( x == vec3_origin.x
    && (y = vec3_origin.y) == this->m_vViewMin.y
    && (z = vec3_origin.z) == this->m_vViewMin.z
    && vec3_origin.x == this->m_vViewMax.x
    && y == this->m_vViewMax.y
    && z == this->m_vViewMax.z )
  {
    *pOutMins = this->m_vHullMin;
    *pOutMaxs = this->m_vHullMax;
  }
  else
  {
    pOutMins->x = x;
    pOutMins->y = this->m_vViewMin.y;
    pOutMins->z = this->m_vViewMin.z;
    *pOutMaxs = this->m_vViewMax;
  }
}


// CModel::HasCollision  (line 828, @0x0000000003140ff0, libserver.so)  // inlines: IsValid
// callers: Physics_GetAggregateData, PropBreakableCreateAll, CreateGibsFromList, CBaseAnimating::DrawVCollide, CModelState::SetupPhysics, CModelState::OnMeshGroupMaskChanged, CBaseEntity::DrawVCollide, CreateServerRagdollAttached, CRagdoll::Init, CreatePhysicsProp<CPhysicsProp>
bool __fastcall CModel::HasCollision(const CModel *const this)
{
  return this->m_refPhysicsData.m_pBinding != 0;
}


// CModel::GetCollisionEmbeddedKeyvalues  (line 833, @0x0000000003141010, libserver.so)  // inlines: GetData, GetPhysicsContainer
// callers: PrecacheGibsForModel, BreakModelList
const char *__fastcall CModel::GetCollisionEmbeddedKeyvalues(const CModel *const this)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  void *m_pData; // rax

  m_pBinding = this->m_refPhysicsData.m_pBinding;
  if ( m_pBinding != 0 && (m_pData = m_pBinding->m_pData) != 0 )
    return *(m_pData + 23);
  else
    return 0;
}


// CModel::GetPhysicsContainer  (line 839, @0x0000000003141040, libserver.so)  // inlines: GetData
// callers: CreatePiecesFromBreakModelList, CFuncShatterglass::Spawn, PhysModelParseSolidByIndex
const CPhysAggregateData_1 *__fastcall CModel::GetPhysicsContainer(const CModel *const this)
{
  const CPhysAggregateData_1 **m_pBinding; // rax

  m_pBinding = this->m_refPhysicsData.m_pBinding;
  if ( m_pBinding != 0 )
    return *m_pBinding;
  else
    return 0;
}


// CModel::GetPhysicsHandle_Internal  (line 844, @0x0000000003141060, libserver.so)  // inlines: FromUntypedHandleUnchecked, GetHandle, InitUntypedUnchecked
// callers: CPhysicsDataCombiner::Add
HPhysAggregateData_Internal __fastcall CModel::GetPhysicsHandle_Internal(
        const ResourceBindingBase_t **a1,
        const CModel *const this)
{
  *a1 = this->m_refPhysicsData.m_pBinding;
  return a1;
}


// CModel::GetBoneFlexDriverCount  (line 849, @0x0000000003141080, libserver.so)
int __fastcall CModel::GetBoneFlexDriverCount(const CModel *const this)
{
  return this->m_boneFlexDrivers.m_Size;
}


// CModel::GetBoneFlexDriverBoneIndex  (line 855, @0x0000000003141090, libserver.so)  // inlines: FindBoneIndexByHash, GetHashCode, operator[]
// calls: CModelSkeleton::FindBoneIndexByHash
int __fastcall CModel::GetBoneFlexDriverBoneIndex(const CModel *const this, int iFlex)
{
  return CModelSkeleton::FindBoneIndexByHash(
           &this->m_modelSkeleton,
           this->m_boneFlexDrivers.m_Memory.m_pMemory[iFlex].m_boneNameToken.m_nHashCode);
}


// CModel::GetBoneFlexDriverControllerCount  (line 861, @0x00000000031410c0, libserver.so)  // inlines: operator[]
int __fastcall CModel::GetBoneFlexDriverControllerCount(const CModel *const this, int iFlex)
{
  return this->m_boneFlexDrivers.m_Memory.m_pMemory[iFlex].m_controls.m_Size;
}


// CModel::LookupBoneFlexDriverControllerLocal  (line 867, @0x0000000003141160, libserver.so)  // inlines: operator[]
// calls: CUtlString::Get, CModel::LookupFlexController
LocalFlexController_t __fastcall CModel::LookupBoneFlexDriverControllerLocal(
        const CModel *const this,
        int iFlex,
        int iController)
{
  const char *v4; // rax

  v4 = CUtlString::Get(&this->m_boneFlexDrivers.m_Memory.m_pMemory[iFlex].m_controls.m_Memory.m_pMemory[iController].m_flexController);
  return CModel::LookupFlexController(this, v4);
}


// CModel::GetBoneFlexDriverControllerInfo  (line 878, @0x00000000031410e0, libserver.so)  // inlines: operator[]
void __fastcall CModel::GetBoneFlexDriverControllerInfo(
        const CModel *const this,
        int iFlex,
        int iController,
        BoneFlexComponent_t *pOutBoneComponent,
        float *pOutMin,
        float *pOutMax)
{
  CBoneFlexDriverControl *v6; // rdx

  v6 = &this->m_boneFlexDrivers.m_Memory.m_pMemory[iFlex].m_controls.m_Memory.m_pMemory[iController];
  *pOutBoneComponent = v6->m_nBoneComponent;
  *pOutMin = v6->m_flMin;
  *pOutMax = v6->m_flMax;
}


// CModel::LookupFlexController  (line 890, @0x0000000003141120, libserver.so)  // inlines: Find, operator const UtlSymId_t
// calls: CUtlSymbolTable::Find
// callers: CModel::LookupBoneFlexDriverControllerLocal
LocalFlexController_t __fastcall CModel::LookupFlexController(const CModel *const this, const char *_pszName)
{
  LocalFlexController_t result; // eax
  unsigned __int16 v4[16]; // [rsp+0h] [rbp-20h] BYREF

  CUtlSymbolTable::Find(v4, &this->m_namedFlexControllers.m_SymbolTable, _pszName);
  result = LocalFlexController_t::DUMMY_FLEX_CONTROLLER|0x80000000;
  if ( v4[0] != 0xFFFF )
    return this->m_namedFlexControllers.m_Vector.m_Memory.m_pMemory[v4[0]];
  return result;
}


// CModel::NumFlexControllers  (line 900, @0x00000000031411b0, libserver.so)
// callers: CBaseAnimatingController::GetNumFlexControllers, CModelState::UpdateModelCachedValues, CSkeletonInstance::IsRigidSkeleton, CStudioHdr::numflexcontrollers, CMorphConstraint::CacheModelData
LocalFlexController_t __fastcall CModel::NumFlexControllers(const CModel *const this)
{
  return this->m_flexControllers.m_Size;
}


// CModel::GetFlexControllerName  (line 905, @0x00000000031411c0, libserver.so)  // inlines: operator[], pszName
// calls: CUtlString::Get
// callers: CBaseAnimatingController::GetFlexControllerName, CMorphConstraint::CacheModelData
const char *__fastcall CModel::GetFlexControllerName(const CModel *const this, LocalFlexController_t nFlexController)
{
  return CUtlString::Get(&this->m_flexControllers.m_Memory.m_pMemory[nFlexController]->m_szName);
}


// CModel::GetFlexControllerType  (line 910, @0x00000000031411e0, libserver.so)  // inlines: operator[], pszType
// calls: CUtlString::Get
// callers: CBaseAnimatingController::GetFlexControllerType
const char *__fastcall CModel::GetFlexControllerType(const CModel *const this, LocalFlexController_t nFlexController)
{
  return CUtlString::Get(&this->m_flexControllers.m_Memory.m_pMemory[nFlexController]->m_szType);
}


// CModel::GetFlexControllerModelToGlobal  (line 915, @0x0000000003141200, libserver.so)  // inlines: operator[]
int __fastcall CModel::GetFlexControllerModelToGlobal(const CModel *const this, LocalFlexController_t nFlexController)
{
  return this->m_flexControllersModelToGlobal.m_Memory.m_pMemory[nFlexController];
}


// CModel::GetFlexController  (line 920, @0x0000000003141220, libserver.so)  // inlines: operator[]
// callers: CBaseFlex::SetFlexWeight, CBaseFlex::GetFlexWeight, CSkeletonInstance::GetFlexControllerName, CSkeletonInstance::GetFlexControllerType, CSkeletonInstance::GetFlexControllerWeights, CStudioHdr::pFlexcontroller, CMorphConstraint::CacheModelData
const CFlexController *__fastcall CModel::GetFlexController(
        const CModel *const this,
        LocalFlexController_t nFlexController)
{
  return this->m_flexControllers.m_Memory.m_pMemory[nFlexController];
}


// CModel::SetFlexControllerModelToGlobal  (line 925, @0x0000000003141240, libserver.so)  // inlines: operator[]
void __fastcall CModel::SetFlexControllerModelToGlobal(
        CModel *const this,
        LocalFlexController_t nFlexController,
        int nModelToGlobal)
{
  this->m_flexControllersModelToGlobal.m_Memory.m_pMemory[nFlexController] = nModelToGlobal;
}


// CModel::GetLocalToMasterTableForMesh  (line 930, @0x0000000003141260, libserver.so)  // inlines: operator[]
// callers: CModel::AllMeshesSkinnedToOneBone, CModel::GetBoneIndexForHitboxForMesh
const int16 *__fastcall CModel::GetLocalToMasterTableForMesh(const CModel *const this, int nMesh)
{
  if ( this->m_remappingTableStarts.m_Size != 0 )
    return &this->m_remappingTable.m_Memory.m_pMemory[this->m_remappingTableStarts.m_Memory.m_pMemory[nMesh]];
  else
    return 0;
}


// CModel::HasAnimationDrivenFlexes  (line 935, @0x0000000003141340, libserver.so)  // inlines: flags, operator|
bool __fastcall CModel::HasAnimationDrivenFlexes(const CModel *const this)
{
  return ((this->m_nRuntimeFlags | this->m_nInherentFlags) & 0x200000) != 0;
}


// CModel::GetBoneIndexForHitboxForMesh  (line 940, @0x0000000003141360, libserver.so)  // inlines: LeafCodeInfo_t, pszName
// calls: CModel::GetLocalToMasterTableForMesh, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, CUtlString::Get, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: IDebugOverlay::EntityHitboxes, CModel::GetBoneIndexForHitbox
// strings: "model.cpp", "GetBoneIndexForHitboxForMesh", "Model %s missing bone and flex counts (%d < %d), init %d\n"
int __fastcall CModel::GetBoneIndexForHitboxForMesh(const CModel *const this, const CHitBox *pHitBox, int nMesh)
{
  int v3; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned __int8 v10; // al
  int m_Size; // r15d
  int v12; // r14d
  const char *v13; // rax
  LeafCodeInfo_t v14; // [rsp+10h] [rbp-50h] BYREF

  v3 = nMesh;
  if ( this->m_boneAndFlexCountsForMesh.m_Size <= nMesh )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v8, v9, v6, v7) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_7:
      ++v3;
      v10 = (*(this->_vptr_CModel + 4))(this);
      m_Size = this->m_boneAndFlexCountsForMesh.m_Size;
      v12 = v10;
      v13 = CUtlString::Get(&this->m_name);
      v14.m_szFile = "model.cpp";
      v14.m_szFunction = "GetBoneIndexForHitboxForMesh";
      v14.m_nLine = 952;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v14,
        "Model %s missing bone and flex counts (%d < %d), init %d\n",
        v13,
        m_Size,
        v3,
        v12);
    }
  }
  return CModel::GetLocalToMasterTableForMesh(this, nMesh)[this->m_boneAndFlexCountsForMesh.m_Memory.m_pMemory[nMesh]
                                                         + pHitBox->m_nHitBoxIndex];
}


// CModel::FindHitboxSetIndexByName  (line 961, @0x0000000003141460, libserver.so)  // inlines: Element, operator[]
// calls: CModel::GetMeshData, CUtlString::Get, V_stricmp_fast
// callers: CStudioHdr::FindHitboxSetIndexByName, FindHitboxSetByName
int __fastcall CModel::FindHitboxSetIndexByName(const CModel *const this, const char *pName, int nMesh)
{
  const CRenderMesh *MeshData; // rax
  const CRenderMesh *v5; // r13
  int m_NumElements; // r14d
  __int64 v7; // r12
  int v8; // ebx
  const char *v9; // rax

  MeshData = CModel::GetMeshData(this, nMesh);
  v5 = MeshData;
  if ( MeshData == 0 )
    return -1;
  m_NumElements = MeshData->m_hitboxsets.m_Elements.m_Tree.m_NumElements;
  if ( m_NumElements <= 0 )
    return -1;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = CUtlString::Get(&v5->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Data.elem.m_name);
    if ( V_stricmp_fast(v9, pName) == 0 )
      break;
    ++v8;
    ++v7;
    if ( v8 == m_NumElements )
      return -1;
  }
  return v8;
}


// CModel::FindHitboxSetByName  (line 979, @0x0000000003141500, libserver.so)  // inlines: Element, operator[]
// calls: CModel::GetMeshData, CUtlString::Get, V_stricmp_fast
const CHitBoxSet *__fastcall CModel::FindHitboxSetByName(const CModel *const this, const char *pName, int nMesh)
{
  const CRenderMesh *MeshData; // rax
  const CRenderMesh *v5; // r12
  int m_NumElements; // eax
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  const char *v9; // rax

  MeshData = CModel::GetMeshData(this, nMesh);
  v5 = MeshData;
  if ( MeshData == 0 )
    return 0;
  m_NumElements = MeshData->m_hitboxsets.m_Elements.m_Tree.m_NumElements;
  if ( m_NumElements <= 0 )
    return 0;
  v7 = 0;
  v8 = 8 * (9LL * (m_NumElements - 1) + 9);
  while ( 1 )
  {
    v9 = CUtlString::Get(&v5->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory[v7 / 0x48].m_Data.elem.m_name);
    if ( V_stricmp_fast(v9, pName) == 0 )
      break;
    v7 += 72LL;
    if ( v7 == v8 )
      return 0;
  }
  return &v5->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory[v7 / 0x48].m_Data.elem;
}


// CModel::GetHitboxSetByIndex  (line 998, @0x00000000031415a0, libserver.so)  // inlines: Element, operator[]
// calls: CModel::GetMeshData
// callers: CBaseAnimating::GetHitboxBone, CBaseAnimating::GetHitboxesFrontside, CBaseServerVehicle::GetEntryAnimForPoint, CStudioHdr::pHitboxSet, GetHitboxSetName
const CHitBoxSet *__fastcall CModel::GetHitboxSetByIndex(const CModel *const this, int nIndex, int nMesh)
{
  __int64 v3; // rbx
  const CRenderMesh *MeshData; // rax

  v3 = nIndex;
  MeshData = CModel::GetMeshData(this, nMesh);
  if ( MeshData != 0 && v3 < MeshData->m_hitboxsets.m_Elements.m_Tree.m_NumElements && v3 >= 0 )
    return &MeshData->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem;
  else
    return 0;
}


// CModel::GetHitboxSetCount  (line 1011, @0x00000000031415f0, libserver.so)
// calls: CModel::GetMeshData
// callers: CStudioHdr::numhitboxsets, GetHitboxSetCount
int __fastcall CModel::GetHitboxSetCount(const CModel *const this, int nMesh)
{
  const CRenderMesh *MeshData; // rax

  MeshData = CModel::GetMeshData(this, nMesh);
  if ( MeshData != 0 )
    return MeshData->m_hitboxsets.m_Elements.m_Tree.m_NumElements;
  else
    return 0;
}


// CModel::GetBoneIndexForHitbox  (line 1021, @0x0000000003141620, libserver.so)  // inlines: FindBoneIndexByHash
// calls: CModelSkeleton::FindBoneIndexByHash
// callers: CBaseAnimating::GetHitboxBone, CBaseAnimating::GetHitboxesFrontside, CBaseServerVehicle::GetEntryAnimForPoint
int __fastcall CModel::GetBoneIndexForHitbox(const CModel *const this, const CHitBox *pHitBox)
{
  return CModelSkeleton::FindBoneIndexByHash(&this->m_modelSkeleton, pHitBox->m_nBoneNameHash);
}


// CModel::GetHitboxSetsForMeshGroupMask  (line 1026, @0x0000000003144070, libserver.so)  // inlines: AddToTail, Element, GrowMemory, operator[]
// calls: CModel::GetMeshData, CUtlMemory<HitBoxSetAndMesh_t, int>::Grow
// callers: CBaseAnimating::GetHitboxSet, CSkeletonInstance::GetHitboxSetList
void __fastcall CModel::GetHitboxSetsForMeshGroupMask(
        const CModel *const this,
        CHitboxSetList *const hitBoxSets,
        MeshGroupMask_t nActiveMask,
        CUtlStringToken hitboxSetName)
{
  const CModel *v4; // r10
  __int64 v5; // r14
  int m_Size; // r15d
  const CRenderMesh *MeshData; // rax
  int m_NumElements; // esi
  unsigned __int64 v10; // rbx
  int v11; // r9d
  __int64 v12; // r8
  __int64 v13; // r13
  int v14; // esi
  __int64 v15; // r13
  CUtlVectorBase<HitBoxSetAndMesh_t,CUtlMemoryFixedGrowable<HitBoxSetAndMesh_t,16ul,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-68h]
  __int64 v17; // [rsp+10h] [rbp-60h]
  uint32 v18; // [rsp+1Ch] [rbp-54h]
  MeshGroupMask_t v19; // [rsp+20h] [rbp-50h]
  uint32 m_nHashCode; // [rsp+28h] [rbp-48h]
  const CModel *v21; // [rsp+28h] [rbp-48h]
  MeshGroupMask_t v22; // [rsp+30h] [rbp-40h]
  int v23; // [rsp+30h] [rbp-40h]
  const CModel *v24; // [rsp+38h] [rbp-38h]
  const CRenderMesh *v25; // [rsp+38h] [rbp-38h]

  v4 = this;
  v5 = 0;
  p_m_Memory = &hitBoxSets->m_Memory;
  m_Size = this->m_refMeshes.m_Size;
  if ( m_Size > 0 )
  {
    do
    {
      if ( (nActiveMask & v4->m_refMeshGroupMasks.m_Memory.m_pMemory[v5]) != 0 )
      {
        m_nHashCode = hitboxSetName.m_nHashCode;
        v22 = nActiveMask;
        v24 = v4;
        MeshData = CModel::GetMeshData(v4, v5);
        v4 = v24;
        m_NumElements = MeshData->m_hitboxsets.m_Elements.m_Tree.m_NumElements;
        nActiveMask = v22;
        hitboxSetName.m_nHashCode = m_nHashCode;
        if ( m_NumElements > 0 )
        {
          v10 = 0;
          v11 = v5;
          v12 = 8 * (9LL * (m_NumElements - 1) + 9);
          do
          {
            if ( hitboxSetName.m_nHashCode == 0
              || MeshData->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory[v10 / 0x48].m_Data.elem.m_nNameHash == hitboxSetName.m_nHashCode )
            {
              v13 = hitBoxSets->m_Size;
              if ( v13 == hitBoxSets->m_Memory.m_nAllocationCount )
              {
                v17 = v12;
                v18 = hitboxSetName.m_nHashCode;
                v19 = nActiveMask;
                v21 = v4;
                v23 = v11;
                v25 = MeshData;
                CUtlMemory<HitBoxSetAndMesh_t,int>::Grow(p_m_Memory, 1);
                v14 = hitBoxSets->m_Size;
                v12 = v17;
                hitboxSetName.m_nHashCode = v18;
                nActiveMask = v19;
                v4 = v21;
                v11 = v23;
                MeshData = v25;
              }
              else
              {
                v14 = hitBoxSets->m_Size;
              }
              v15 = v13;
              hitBoxSets->m_Size = v14 + 1;
              hitBoxSets->m_Memory.m_pMemory[v15].m_pHitBoxSet = &MeshData->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory[v10 / 0x48].m_Data.elem;
              hitBoxSets->m_Memory.m_pMemory[v15].m_nRenderMesh = v11;
            }
            v10 += 72LL;
          }
          while ( v10 != v12 );
        }
      }
      ++v5;
    }
    while ( m_Size > v5 );
  }
}


// CModel::GetHitboxesForMeshGroupMask  (line 1051, @0x00000000031441c0, libserver.so)  // inlines: AddToTail, Element, GrowMemory, operator[]
// calls: CModel::GetMeshData, CUtlMemory<HitBoxAndMesh_t, int>::Grow
// callers: CSkeletonInstance::GetHitBoxList
void __fastcall CModel::GetHitboxesForMeshGroupMask(
        const CModel *const this,
        CHitboxList *const hitBoxes,
        MeshGroupMask_t nActiveMask,
        CUtlStringToken hitboxSetName)
{
  const CRenderMesh *MeshData; // rax
  int m_NumElements; // ecx
  int v7; // r12d
  __int64 v8; // rbx
  const CRenderMesh *v9; // r14
  char *v10; // rax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // r8
  __int64 v16; // rsi
  HitBoxAndMesh_t *m_pMemory; // rdx
  __int64 v18; // rax
  int m_Size; // ebx
  int v20; // eax
  int nMeshes; // [rsp+Ch] [rbp-64h]
  __int64 v24; // [rsp+18h] [rbp-58h]
  CUtlVectorBase<HitBoxAndMesh_t,CUtlMemoryFixedGrowable<HitBoxAndMesh_t,32ul,int> >::CAllocator *p_m_Memory; // [rsp+20h] [rbp-50h]
  __int64 m; // [rsp+28h] [rbp-48h]
  __int64 v27; // [rsp+30h] [rbp-40h]
  int v29; // [rsp+3Ch] [rbp-34h]

  m = 0;
  p_m_Memory = &hitBoxes->m_Memory;
  nMeshes = this->m_refMeshes.m_Size;
  if ( nMeshes > 0 )
  {
    do
    {
      if ( (nActiveMask & this->m_refMeshGroupMasks.m_Memory.m_pMemory[m]) != 0 )
      {
        MeshData = CModel::GetMeshData(this, m);
        m_NumElements = MeshData->m_hitboxsets.m_Elements.m_Tree.m_NumElements;
        if ( m_NumElements > 0 )
        {
          v7 = m;
          v8 = 0;
          v9 = MeshData;
          v24 = 8 * (9LL * (m_NumElements - 1) + 9);
          do
          {
            v10 = v9->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory + v8;
            if ( hitboxSetName.m_nHashCode == 0 || *(v10 + 8) == hitboxSetName.m_nHashCode )
            {
              v11 = *(v10 + 10);
              if ( v11 > 0 )
              {
                v12 = v7;
                v13 = 0;
                v14 = v8;
                v15 = 120 * ((v11 - 1) + 1LL);
                do
                {
                  m_Size = hitBoxes->m_Size;
                  v20 = hitBoxes->m_Size;
                  if ( hitBoxes->m_Size == hitBoxes->m_Memory.m_nAllocationCount )
                  {
                    v27 = v15;
                    v29 = v12;
                    CUtlMemory<HitBoxAndMesh_t,int>::Grow(p_m_Memory, 1);
                    v20 = hitBoxes->m_Size;
                    v15 = v27;
                    v12 = v29;
                  }
                  v16 = v13;
                  m_pMemory = hitBoxes->m_Memory.m_pMemory;
                  hitBoxes->m_Size = v20 + 1;
                  v13 += 120;
                  v18 = m_Size;
                  m_pMemory[v18].m_pHitBox = (*(&v9->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory->m_Data.elem.m_HitBoxes.m_Memory.m_pMemory
                                              + v14)
                                            + v16);
                  hitBoxes->m_Memory.m_pMemory[v18].m_nRenderMesh = v12;
                }
                while ( v13 != v15 );
                v8 = v14;
                v7 = v12;
              }
            }
            v8 += 72;
          }
          while ( v8 != v24 );
        }
      }
      ++m;
    }
    while ( nMeshes > m );
  }
}


// CModel::GetBoneIndexForHitbox  (line 1081, @0x0000000003141640, libserver.so)
// calls: CModel::GetBoneIndexForHitboxForMesh
// callers: CSkeletonInstance::GetPoseSpaceHitboxBounds, CSkeletonInstance::GetHitBoxListAndTransforms, CSkeletonInstance::TraceRayAgainstHitboxes, CSkeletonInstance::SweepShapeAgainstHitboxes
int __fastcall CModel::GetBoneIndexForHitbox(const CModel *const this, HitBoxAndMesh_t *const hitBox)
{
  return CModel::GetBoneIndexForHitboxForMesh(this, hitBox->m_pHitBox, hitBox->m_nRenderMesh);
}


// AttachmentHandleToIndex  (line 1091, @0x0000000003141650, libserver.so)
int __fastcall AttachmentHandleToIndex(AttachmentHandle_t hAttachment)
{
  return hAttachment - 1;
}


// IndexToAttachmentHandle  (line 1096, @0x0000000003141660, libserver.so)
AttachmentHandle_t __fastcall IndexToAttachmentHandle(int nIndex)
{
  return nIndex + 1;
}


// CModel::SetupAttachments  (line 1101, @0x00000000031437a0, libserver.so)  // inlines: operator[]
// calls: CModel::SetupAttachment
// callers: CModel::SetupAttachments
void __fastcall CModel::SetupAttachments(
        const CModel *const this,
        const CTransform *pSimWorldTransformsIn,
        const CTransform *const rootTransform,
        CTransform *pAttachmentWorldTransformsOut)
{
  __int64 v4; // r15
  int i; // r14d
  AttachmentPairing_t *v9; // rax

  v4 = 0;
  for ( i = 0; this->m_attachmentMap.m_Size > i; ++i )
  {
    v9 = &this->m_attachmentMap.m_Memory.m_pMemory[v4++];
    CModel::SetupAttachment(
      v9->m_pAttachment->m_nInfluences,
      v9->m_nTransformIndices,
      v9->m_pWeights,
      v9->m_pAttachment->m_vInfluenceOffsets,
      v9->m_pAttachment->m_vInfluenceRotations,
      pSimWorldTransformsIn,
      rootTransform,
      &pAttachmentWorldTransformsOut[v9->m_nAttachmentIndex]);
  }
}


// CModel::SetupAttachments  (line 1112, @0x0000000003143840, libserver.so)  // inlines: CTransform, VectorAligned
// calls: SetIdentityTransform, CModel::SetupAttachments
void __fastcall CModel::SetupAttachments(
        const CModel *const this,
        const CTransform *pSimWorldTransformsIn,
        CTransform *pAttachmentWorldTransformsOut)
{
  CTransform identity; // [rsp+0h] [rbp-40h] BYREF

  identity.m_vPosition.w = 0.0;
  SetIdentityTransform(&identity);
  CModel::SetupAttachments(this, pSimWorldTransformsIn, &identity, pAttachmentWorldTransformsOut);
}


// CModel::SetupAttachments  (line 1119, @0x0000000003143970, libserver.so)  // inlines: operator[]
// calls: CModel::SetupAttachment
// callers: IDebugOverlay::EntityAttachments, CSkeletonInstance::CalcWorldSpaceAttachments
void __fastcall CModel::SetupAttachments(
        const CModel *const this,
        const matrix3x4a_t *pSimWorldTransformsIn,
        const matrix3x4a_t *const rootTransform,
        matrix3x4a_t *pAttachmentWorldTransformsOut)
{
  __int64 v4; // r15
  int i; // r14d
  AttachmentPairing_t *v9; // rax

  v4 = 0;
  for ( i = 0; this->m_attachmentMap.m_Size > i; ++i )
  {
    v9 = &this->m_attachmentMap.m_Memory.m_pMemory[v4++];
    CModel::SetupAttachment(
      v9->m_pAttachment->m_nInfluences,
      v9->m_nTransformIndices,
      v9->m_pWeights,
      v9->m_pAttachment->m_vInfluenceOffsets,
      v9->m_pAttachment->m_vInfluenceRotations,
      pSimWorldTransformsIn,
      rootTransform,
      &pAttachmentWorldTransformsOut[v9->m_nAttachmentIndex]);
  }
}


// CModel::SetupAttachmentTransform  (line 1130, @0x0000000003143900, libserver.so)
// calls: CModel::SetupAttachmentTransform
bool __fastcall CModel::SetupAttachmentTransform(
        const CModel *const this,
        AttachmentHandle_t hAttachment,
        const CTransform *pSimWorldTransformsIn,
        CTransform *const worldTransformOut)
{
  return CModel::SetupAttachmentTransform(
           this,
           hAttachment,
           &g_TransformIdentity,
           pSimWorldTransformsIn,
           worldTransformOut);
}


// CModel::SetupAttachmentTransform  (line 1135, @0x0000000003143a10, libserver.so)  // inlines: AttachmentHandleToIndex, operator[]
// calls: CModel::SetupAttachment, SetIdentityMatrix
// callers: CGameSceneNode::ComputeNodeToWorldForHierarchy, CModel::SetupAttachmentTransform
bool __fastcall CModel::SetupAttachmentTransform(
        const CModel *const this,
        AttachmentHandle_t hAttachment,
        const matrix3x4a_t *const worldSpaceRootTransform,
        const matrix3x4a_t *pSimWorldTransformsIn,
        matrix3x4a_t *const worldTransformOut)
{
  AttachmentPairing_t *v5; // rsi

  if ( hAttachment != 0 )
  {
    v5 = &this->m_attachmentMap.m_Memory.m_pMemory[hAttachment - 1];
    CModel::SetupAttachment(
      v5->m_pAttachment->m_nInfluences,
      v5->m_nTransformIndices,
      v5->m_pWeights,
      v5->m_pAttachment->m_vInfluenceOffsets,
      v5->m_pAttachment->m_vInfluenceRotations,
      pSimWorldTransformsIn,
      worldSpaceRootTransform,
      worldTransformOut);
    return 1;
  }
  else
  {
    SetIdentityMatrix(worldTransformOut);
    return 0;
  }
}


// CModel::SetupAttachmentTransform  (line 1149, @0x0000000003143a80, libserver.so)
// calls: CModel::SetupAttachmentTransform
// callers: GetPlacementOriginTransform, CStudioHdr::SetupAttachmentTransform, CStudioConstraintBones::ComputeTargetPosition, CStudioConstraintBones::ComputeTargetOrientation, CStudioConstraintBones::ComputeAimConstraint
bool __fastcall CModel::SetupAttachmentTransform(
        const CModel *const this,
        AttachmentHandle_t hAttachment,
        const matrix3x4a_t *pSimWorldTransformsIn,
        matrix3x4a_t *const worldTransformOut)
{
  return CModel::SetupAttachmentTransform(
           this,
           hAttachment,
           &g_MatrixIdentity,
           pSimWorldTransformsIn,
           worldTransformOut);
}


// CModel::SetupAttachmentTransform  (line 1154, @0x0000000003143890, libserver.so)  // inlines: AttachmentHandleToIndex, operator[]
// calls: CModel::SetupAttachment, SetIdentityTransform
// callers: CSkeletonInstance::SetupAttachmentTransform, CModel::SetupAttachmentTransform
bool __fastcall CModel::SetupAttachmentTransform(
        const CModel *const this,
        AttachmentHandle_t hAttachment,
        const CTransform *const worldSpaceRootTransform,
        const CTransform *pSimWorldTransformsIn,
        CTransform *const worldTransformOut)
{
  AttachmentPairing_t *v5; // rsi

  if ( hAttachment != 0 )
  {
    v5 = &this->m_attachmentMap.m_Memory.m_pMemory[hAttachment - 1];
    CModel::SetupAttachment(
      v5->m_pAttachment->m_nInfluences,
      v5->m_nTransformIndices,
      v5->m_pWeights,
      v5->m_pAttachment->m_vInfluenceOffsets,
      v5->m_pAttachment->m_vInfluenceRotations,
      pSimWorldTransformsIn,
      worldSpaceRootTransform,
      worldTransformOut);
    return 1;
  }
  else
  {
    SetIdentityTransform(worldTransformOut);
    return 0;
  }
}


// CModel::GetSimAttachmentTransformIndex  (line 1169, @0x0000000003141670, libserver.so)  // inlines: AttachmentHandleToIndex
// callers: CSkeletonInstance::GetAttachment
int __fastcall CModel::GetSimAttachmentTransformIndex(const CModel *const this, AttachmentHandle_t hAttachment)
{
  return hAttachment - 1;
}


// CModel::GetAttachmentHandleFromIndex  (line 1174, @0x0000000003141680, libserver.so)  // inlines: IndexToAttachmentHandle
AttachmentHandle_t __fastcall CModel::GetAttachmentHandleFromIndex(const CModel *const this, int nIndex)
{
  return nIndex + 1;
}


// CModel::GetNumAttachments  (line 1179, @0x0000000003141690, libserver.so)
// callers: IDebugOverlay::EntityAttachments, CSkeletonInstance::GetAttachmentCount, CSkeletonInstance::GetAttachmentBoneCount, CSkeletonInstance::GetAttachmentBone, CModelState::SetupJointState, CSkeletonInstance::GetAttachment, CStudioHdr::GetNumAttachments
int __fastcall CModel::GetNumAttachments(const CModel *const this)
{
  return this->m_attachmentMap.m_Size;
}


// CModel::GetAttachmentHandle  (line 1184, @0x00000000031416a0, libserver.so)
// callers: GetPlacementOriginTransform, CSkeletonInstance::LookupAttachment, CDOTA_ParticleManager::ChangeParticleControlPointAttachmentForModelSwap, CStudioHdr::GetAttachmentHandle, Studio_FindAttachment, CStudioConstraintBones::ComputeTargetPosition, CStudioConstraintBones::ComputeTargetOrientation, CStudioConstraintBones::ComputeAimConstraint
AttachmentHandle_t __fastcall CModel::GetAttachmentHandle(const CModel *const this, CUtlStringToken nAttachmentToken)
{
  int m_Size; // ecx
  AttachmentPairing_t *m_pMemory; // rdx
  int v4; // eax

  m_Size = this->m_attachmentMap.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_attachmentMap.m_Memory.m_pMemory;
    v4 = 0;
    if ( nAttachmentToken.m_nHashCode == m_pMemory->m_nAttachmentHash )
      return 1;
    while ( ++v4 != m_Size )
    {
      ++m_pMemory;
      if ( nAttachmentToken.m_nHashCode == m_pMemory->m_nAttachmentHash )
        return v4 + 1;
    }
  }
  return 0;
}


// CModel::GetAttachmentNameToken  (line 1197, @0x00000000031416f0, libserver.so)  // inlines: AttachmentHandleToIndex, operator[]
// callers: CSkeletonInstance::GetAttachmentNameToken
CUtlStringToken __fastcall CModel::GetAttachmentNameToken(
        const CModel *const this,
        AttachmentHandle_t nAttachmentHandle)
{
  int v2; // esi

  v2 = nAttachmentHandle - 1;
  if ( v2 == -1 || this->m_attachmentMap.m_Size <= v2 )
    return 0;
  else
    return this->m_attachmentMap.m_Memory.m_pMemory[v2].m_nAttachmentHash;
}


// CModel::GetAttachmentData  (line 1206, @0x00000000031446f0, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<const CAttachment*, CUtlMemory<const CAttachment*, int> >::SetCount
// callers: IDebugOverlay::EntityAttachments
void __fastcall CModel::GetAttachmentData(
        const CModel *const this,
        CUtlVector<const CAttachment*,CUtlMemory<const CAttachment*,int> > *const attachmentList)
{
  __int64 v4; // rdx
  int i; // eax
  __int64 v6; // rcx

  CUtlVectorBase<CAttachment const*,CUtlMemory<CAttachment const*,int>>::SetCount(
    attachmentList,
    this->m_attachmentMap.m_Size);
  v4 = 0;
  for ( i = 0;
        this->m_attachmentMap.m_Size > i;
        attachmentList->m_Memory.m_pMemory[*(&this->m_attachmentMap.m_Memory.m_pMemory->m_pWeights[3] + v6)] = *(&this->m_attachmentMap.m_Memory.m_pMemory->m_pAttachment + v6) )
  {
    v6 = v4;
    ++i;
    v4 += 48;
  }
}


// CModel::FirstAttachmentHandle  (line 1217, @0x0000000003141730, libserver.so)
// callers: CSkeletonInstance::FirstAttachmentHandle, CDOTA_ParticleManager::ChangeParticleControlPointAttachmentForModelSwap, CStudioHdr::FirstAttachmentHandle, Model_FindRandomAttachment
AttachmentHandle_t __fastcall CModel::FirstAttachmentHandle(const CModel *const this)
{
  return this->m_attachmentMap.m_Size > 0;
}


// CModel::NextAttachmentHandle  (line 1225, @0x0000000003141750, libserver.so)  // inlines: AttachmentHandleToIndex, IndexToAttachmentHandle
// callers: CSkeletonInstance::NextAttachmentHandle, CDOTA_ParticleManager::ChangeParticleControlPointAttachmentForModelSwap, CStudioHdr::NextAttachmentHandle, Model_FindRandomAttachment
AttachmentHandle_t __fastcall CModel::NextAttachmentHandle(const CModel *const this, AttachmentHandle_t hAttachment)
{
  AttachmentHandle_t result; // al
  int v3; // edx
  AttachmentHandle_t v4; // si

  result = 0;
  if ( hAttachment != 0 )
  {
    v3 = hAttachment;
    v4 = hAttachment + 1;
    if ( this->m_attachmentMap.m_Size > v3 )
      return v4;
  }
  return result;
}


// CModel::GetAttachmentName  (line 1239, @0x0000000003141770, libserver.so)  // inlines: AttachmentHandleToIndex, operator[]
// calls: CUtlString::Get
// callers: CSkeletonInstance::GetAttachmentName, CDOTA_ParticleManager::ChangeParticleControlPointAttachmentForModelSwap, CStudioHdr::GetAttachmentName, Model_FindRandomAttachment
const char *__fastcall CModel::GetAttachmentName(const CModel *const this, AttachmentHandle_t hAttachment)
{
  return CUtlString::Get(&this->m_attachmentMap.m_Memory.m_pMemory[hAttachment - 1].m_pAttachment->m_name);
}


// CModel::GetAttachmentBoneCount  (line 1244, @0x00000000031417a0, libserver.so)  // inlines: AttachmentHandleToIndex, operator[]
// callers: CSkeletonInstance::GetAttachmentBoneCount, CStudioHdr::GetAttachmentBoneCount, CStudioHdr::GetAttachmentBone
int __fastcall CModel::GetAttachmentBoneCount(const CModel *const this, AttachmentHandle_t hAttachment)
{
  return this->m_attachmentMap.m_Memory.m_pMemory[hAttachment - 1].m_pAttachment->m_nInfluences;
}


// CModel::GetAttachmentBone  (line 1249, @0x00000000031417d0, libserver.so)  // inlines: AttachmentHandleToIndex, operator[]
// callers: CSkeletonInstance::GetAttachmentBone, CStudioHdr::GetAttachmentBone
int __fastcall CModel::GetAttachmentBone(const CModel *const this, AttachmentHandle_t hAttachment, int nIndex)
{
  return this->m_attachmentMap.m_Memory.m_pMemory[hAttachment - 1].m_nTransformIndices[nIndex];
}


// CModel::GetAttachmentOffset  (line 1254, @0x0000000003141800, libserver.so)  // inlines: AttachmentHandleToIndex, operator=, operator[]
// callers: CModel::GetAttachmentOffset
void __fastcall CModel::GetAttachmentOffset(
        const CModel *const this,
        AttachmentHandle_t hAttachment,
        int nIndex,
        float *pWeight,
        Vector *pOffset,
        Quaternion *pQuatOffset)
{
  if ( pWeight != 0 )
    *pWeight = this->m_attachmentMap.m_Memory.m_pMemory[hAttachment - 1].m_pAttachment->m_influenceWeights[nIndex];
  if ( pOffset != 0 )
    *pOffset = this->m_attachmentMap.m_Memory.m_pMemory[hAttachment - 1].m_pAttachment->m_vInfluenceOffsets[nIndex];
  if ( pQuatOffset != 0 )
    *pQuatOffset = this->m_attachmentMap.m_Memory.m_pMemory[hAttachment - 1].m_pAttachment->m_vInfluenceRotations[nIndex];
}


// CModel::GetAttachmentOffset  (line 1272, @0x00000000031418e0, libserver.so)
// calls: CModel::GetAttachmentOffset, QuaternionAngles
void __fastcall CModel::GetAttachmentOffset(
        const CModel *const this,
        AttachmentHandle_t hAttachment,
        int nIndex,
        float *pWeight,
        Vector *pOffset,
        QAngle *pAngleOffset)
{
  Quaternion angles; // [rsp+0h] [rbp-20h] BYREF

  if ( pAngleOffset != 0 )
  {
    CModel::GetAttachmentOffset(this, hAttachment, nIndex, pWeight, pOffset, &angles);
    QuaternionAngles(&angles, pAngleOffset);
  }
  else
  {
    CModel::GetAttachmentOffset(this, hAttachment, nIndex, pWeight, pOffset, 0);
  }
}


// CModel::GetAttachmentOffset  (line 1282, @0x0000000003141940, libserver.so)
// calls: CModel::GetAttachmentOffset, QuaternionMatrix
void __fastcall CModel::GetAttachmentOffset(
        const CModel *const this,
        AttachmentHandle_t hAttachment,
        int nIndex,
        float *pWeight,
        matrix3x4a_t *pOffset)
{
  Vector origin; // [rsp+0h] [rbp-40h] BYREF
  Quaternion angles; // [rsp+10h] [rbp-30h] BYREF

  if ( pOffset != 0 )
  {
    CModel::GetAttachmentOffset(this, hAttachment, nIndex, pWeight, &origin, &angles);
    QuaternionMatrix(&angles, &origin, pOffset);
  }
  else
  {
    CModel::GetAttachmentOffset(this, hAttachment, nIndex, pWeight, 0, 0);
  }
}


// CModel::GetAnimationStateSize  (line 1297, @0x00000000031419b0, libserver.so)  // inlines: GetUserDataSizeof
// callers: CAnimationState::ComputeHasNonTransformAnimationData, CAnimationState::GetAnimationStateSize, CAnimationState::CopyNonTransformAnimationData, CAnimationState::Init
uint32 __fastcall CModel::GetAnimationStateSize(const CModel *const this)
{
  CAnimContainer *m_pAnimContainer; // rcx
  int v2; // edx
  int v3; // esi

  m_pAnimContainer = this->m_pAnimContainer;
  v2 = 32 * this->m_modelSkeleton.m_nParent.m_Size;
  v3 = 4 * this->m_flexControllers.m_Size;
  if ( m_pAnimContainer != 0 )
    return v3 + v2 + m_pAnimContainer->m_nUserDataSize;
  else
    return v3 + v2;
}


// CModel::GetAnimationStateCount  (line 1306, @0x00000000031419f0, libserver.so)  // inlines: NumFlexControllers, NumUserDataElements
// callers: CCompositeParentSpaceState::operator==, CCompositeParentSpaceState::GetBones, CCompositeParentSpaceState::GetBonesForModify, CCompositeParentSpaceState::LerpFrom, CSkeletonInstance::GetAnimationStateParentSpaceTransform, CSkeletonInstance::GetAnimationStateWorldSpaceTransforms, CModelState::SetBindPose, CModelState::SetupJointState, CSkeletonInstance::GetNumFlexControllers, CSkeletonInstance::GetFlexControllerWeights, CSkeletonInstance::CalculateWorldTransforms_R, CSkeletonInstance::BuildInterpolatedTransformations (21 total)
uint32 __fastcall CModel::GetAnimationStateCount(const CModel *const this, AnimationStateType_t nStateType)
{
  CAnimContainer *m_pAnimContainer; // rax

  switch ( nStateType )
  {
    case AnimationStateType_t::ANIMATION_STATE_TYPE_FLEX_CONTROLLERS:
      return this->m_flexControllers.m_Size;
    case AnimationStateType_t::ANIMATION_STATE_TYPE_USER_DATA:
      m_pAnimContainer = this->m_pAnimContainer;
      if ( m_pAnimContainer == 0 )
        return 0;
      return m_pAnimContainer->m_userDataMap.m_Size;
    case AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS:
      return this->m_modelSkeleton.m_nParent.m_Size;
    default:
      return 0;
  }
}


// CModel::GetAnimationStateOffset  (line 1323, @0x0000000003141a40, libserver.so)
// callers: CCompositeParentSpaceState::GetBones, CCompositeParentSpaceState::GetBonesForModify, CCompositeParentSpaceState::LerpFrom, CSkeletonInstance::GetAnimationStateParentSpaceTransform, CSkeletonInstance::GetAnimationStateWorldSpaceTransforms, CSkeletonInstance::GetBoneMergeBoneToRoot, CModelState::SetBindPose, CSkeletonInstance::GetFlexControllerWeights, CSkeletonInstance::CalculateWorldTransforms_R, CSkeletonInstance::BuildInterpolatedTransformations, CSkeletonInstance::CalcWorldSpaceBones, CSkeletonInstance::BuildTransformations (19 total)
uint32 __fastcall CModel::GetAnimationStateOffset(const CModel *const this, AnimationStateType_t nStateType)
{
  if ( nStateType == AnimationStateType_t::ANIMATION_STATE_TYPE_FLEX_CONTROLLERS )
    return 32 * this->m_modelSkeleton.m_nParent.m_Size;
  if ( nStateType == AnimationStateType_t::ANIMATION_STATE_TYPE_USER_DATA )
    return 32 * this->m_modelSkeleton.m_nParent.m_Size + 4 * this->m_flexControllers.m_Size;
  return 0;
}


// CModel::IsDataElementNeeded  (line 1341, @0x0000000003141a80, libserver.so)  // inlines: FindBoneIndex
// calls: V_stricmp_fast, CModelSkeleton::FindBoneIndex
// strings: "BoneChannel"
bool __fastcall CModel::IsDataElementNeeded(
        const CModel *const this,
        const char *szChannelClass,
        const char *szElementName)
{
  int v5; // eax
  bool v6; // cl

  v5 = V_stricmp_fast(szChannelClass, "BoneChannel");
  v6 = 1;
  if ( v5 == 0 )
    return CModelSkeleton::FindBoneIndex(&this->m_modelSkeleton, szElementName) != -1;
  return v6;
}


// CModel::MasterSkeleton  (line 1351, @0x0000000003141ad0, libserver.so)
// callers: GetPlacementOriginTransform, IDebugOverlay::EntitySkeleton, CBaseAnimating::DrawVCollide, CGameSceneNode::BuildBoneMergeWork, CModelState::SetBindPose, CModelState::UpdateModelCachedValues, CGameSceneNode::StartHierarchicalAttachment, CSkeletonInstance::DetermineHierarchyAttachType, CGameSceneNode::ComputeBoneOrAttachmentToWorld, CSceneAnimatableObject::Init, CBaseEntity::DrawVCollide, CGenericFlexCycler::GetBoneTransformOverride (15 total)
const CModelSkeleton *__fastcall CModel::MasterSkeleton(const CModel *const this)
{
  return &this->m_modelSkeleton;
}


// CModel::FindBoneIndex  (line 1356, @0x0000000003141ae0, libserver.so)
// calls: CModelSkeleton::FindBoneIndex
// callers: CSkeletonInstance::LookupBone, CSkeletonInstance::GetWorldSpaceTransform, CGenericFlexCycler::Activate, Studio_BoneIndexByName
int __fastcall CModel::FindBoneIndex(const CModel *const this, const char *szBoneName)
{
  return CModelSkeleton::FindBoneIndex(&this->m_modelSkeleton, szBoneName);
}


// CModel::FindBoneIndexByHash  (line 1361, @0x0000000003141b00, libserver.so)
// calls: CModelSkeleton::FindBoneIndexByHash
// callers: CBaseAnimating::HitboxToWorldTransforms, CBaseAnimating::ComputeEntitySpaceHitboxSurroundingBox, CModelState::ConstructClothBoneMap, CModelState::ConstructPhysicsBoneMap, CStudioHdr::GetBoneIndexForHitbox, CTiltTwistConstraint::CacheModelData, CMorphConstraint::CacheModelData, CStudioConstraintBones::ComputeTargetPosition, CStudioConstraintBones::ComputeTargetOrientation, CStudioConstraintBones::ComputePointConstraint, CStudioConstraintBones::ComputeOrientConstraint, CStudioConstraintBones::ComputeAimConstraint (13 total)
int __fastcall CModel::FindBoneIndexByHash(const CModel *const this, uint32 nHashCode)
{
  return CModelSkeleton::FindBoneIndexByHash(&this->m_modelSkeleton, nHashCode);
}


// CModel::GetBoneSphereRadius  (line 1366, @0x0000000003141b20, libserver.so)
// calls: CModelSkeleton::Sphere
float __fastcall CModel::GetBoneSphereRadius(const CModel *const this, uint nBoneIndex)
{
  return CModelSkeleton::Sphere(&this->m_modelSkeleton, nBoneIndex);
}


// CModel::FindUserDataIndex  (line 1372, @0x0000000003141b40, libserver.so)  // inlines: BuildHandle, DoFind, Element, Find, GetBucketIndex, HashStringFastCaseless, operator(), operator[]
// calls: MurmurHash2LowerCase, V_stricmp_fast
int __fastcall CModel::FindUserDataIndex(const CModel *const this, const char *szDataElementName, int nFieldType)
{
  CAnimContainer *m_pAnimContainer; // rbx
  uint32 v5; // eax
  __int64 v6; // r14
  int v7; // r13d
  __int64 v8; // r15
  int v9; // ebx
  int v11; // [rsp+4h] [rbp-3Ch]

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer == 0 || szDataElementName == 0 )
    return -1;
  v5 = MurmurHash2LowerCase(szDataElementName, 0x3501A674u);
  v11 = m_pAnimContainer->m_userDataTable.m_Elements.m_bPowerOfTwo
      ? m_pAnimContainer->m_userDataTable.m_Elements.m_ModMask & v5
      : v5 % m_pAnimContainer->m_userDataTable.m_Elements.m_Buckets.m_Size;
  v6 = &m_pAnimContainer->m_userDataTable.m_Elements.m_Buckets.m_Memory.m_pMemory[v11];
  v7 = *v6;
  if ( *v6 <= 0 )
  {
    v9 = 0;
  }
  else
  {
    v8 = 0;
    v9 = 0;
    while ( V_stricmp_fast(*(*(v6 + 8) + v8), szDataElementName) != 0 )
    {
      ++v9;
      v8 += 24;
      if ( v9 == v7 )
        return -1;
    }
  }
  if ( v7 == v9 || (v9 | (v11 << 16)) == 0xFFFFFFFF )
    return -1;
  else
    return this->m_pAnimContainer->m_userDataTable.m_Elements.m_Buckets.m_Memory.m_pMemory[(v9 | (v11 << 16)) >> 16].m_Memory.m_pMemory[v9].value.m_nIndex;
}


// CModel::NumUserDataElements  (line 1386, @0x0000000003141c70, libserver.so)
int __fastcall CModel::NumUserDataElements(const CModel *const this)
{
  CAnimContainer *m_pAnimContainer; // rax

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer != 0 )
    return m_pAnimContainer->m_userDataMap.m_Size;
  else
    return 0;
}


// CModel::GetUserDataSizeof  (line 1395, @0x0000000003141ca0, libserver.so)
int __fastcall CModel::GetUserDataSizeof(const CModel *const this)
{
  CAnimContainer *m_pAnimContainer; // rax

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer != 0 )
    return m_pAnimContainer->m_nUserDataSize;
  else
    return 0;
}


// CModel::GetAnimContainer  (line 1405, @0x0000000003141cd0, libserver.so)
const CAnimContainer *__fastcall CModel::GetAnimContainer(const CModel *const this)
{
  return this->m_pAnimContainer;
}


// CModel::IsValidAnimation  (line 1413, @0x0000000003141ce0, libserver.so)  // inlines: GetNumAnim
bool __fastcall CModel::IsValidAnimation(const CModel *const this, int nAnimation)
{
  bool result; // al
  CAnimContainer *m_pAnimContainer; // rdx

  result = 0;
  if ( nAnimation >= 0 )
  {
    m_pAnimContainer = this->m_pAnimContainer;
    if ( m_pAnimContainer != 0 )
      return nAnimation < m_pAnimContainer->m_anim.m_Size;
  }
  return result;
}


// CModel::pAnimdesc  (line 1439, @0x0000000003141d10, libserver.so)  // inlines: GetAnimdesc, IsValidAnimation, get, operator[], pLocalHAnim
// callers: CAnimationBlendList::pAnimdesc, CAnimationBlendList::AddSequence, CModel::GetAnimationName
const CAnimDesc *__fastcall CModel::pAnimdesc(const CModel *const this, int nAnimation)
{
  CAnimContainer *m_pAnimContainer; // rdx
  const CAnimDesc *result; // rax
  AnimInstanceMap_t *v4; // rsi

  m_pAnimContainer = this->m_pAnimContainer;
  result = 0;
  if ( m_pAnimContainer != 0 && nAnimation >= 0 && nAnimation < m_pAnimContainer->m_anim.m_Size )
  {
    v4 = &m_pAnimContainer->m_anim.m_Memory.m_pMemory[nAnimation];
    return (*(*(*(*(*(m_pAnimContainer->m_AnimGroupArray.m_Memory.m_pMemory[v4->m_nAnimGroup] + 2) + 32LL)
                + 8LL * v4->m_nHAnimIndex)
              + 8LL)
            + 48LL)
          + 272LL * v4->m_nLocalIndex);
  }
  return result;
}


// CModel::GetNumAnim  (line 1448, @0x0000000003141d80, libserver.so)
int __fastcall CModel::GetNumAnim(const CModel *const this)
{
  CAnimContainer *m_pAnimContainer; // rax

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer != 0 )
    return m_pAnimContainer->m_anim.m_Size;
  else
    return 0;
}


// CModel::LookupAnimation  (line 1457, @0x0000000003141db0, libserver.so)  // inlines: BuildHandle, DoFind, Element, Find, GetBucketIndex, HashStringFastCaseless, operator(), operator[]
// calls: MurmurHash2LowerCase, V_stricmp_fast
int __fastcall CModel::LookupAnimation(const CModel *const this, const char *_pszName)
{
  CAnimContainer *m_pAnimContainer; // rax
  CUtlHashDict<short int,true,false> *m_pAnimTable; // rbx
  uint32 v5; // eax
  __int64 v6; // r14
  int v7; // r13d
  __int64 v8; // r15
  int v9; // ebx
  int v11; // [rsp+4h] [rbp-3Ch]

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer == 0 )
    return -1;
  m_pAnimTable = m_pAnimContainer->m_pAnimTable;
  if ( _pszName == 0 )
    return -1;
  v5 = MurmurHash2LowerCase(_pszName, 0x3501A674u);
  v11 = m_pAnimTable->m_Elements.m_bPowerOfTwo
      ? m_pAnimTable->m_Elements.m_ModMask & v5
      : v5 % m_pAnimTable->m_Elements.m_Buckets.m_Size;
  v6 = &m_pAnimTable->m_Elements.m_Buckets.m_Memory.m_pMemory[v11];
  v7 = *v6;
  if ( *v6 <= 0 )
  {
    v9 = 0;
  }
  else
  {
    v8 = 0;
    v9 = 0;
    while ( V_stricmp_fast(*(*(v6 + 8) + v8), _pszName) != 0 )
    {
      ++v9;
      v8 += 16;
      if ( v9 == v7 )
        return -1;
    }
  }
  if ( v7 == v9 || (v9 | (v11 << 16)) == 0xFFFFFFFF )
    return -1;
  else
    return this->m_pAnimContainer->m_pAnimTable->m_Elements.m_Buckets.m_Memory.m_pMemory[(v9 | (v11 << 16)) >> 16].m_Memory.m_pMemory[v9].value;
}


// CModel::GetAnimationName  (line 1470, @0x0000000003141ee0, libserver.so)  // inlines: Get, GetName, GetPtr
// calls: CModel::pAnimdesc
const char *__fastcall CModel::GetAnimationName(const CModel *const this, int nAnimation)
{
  const char *result; // rax

  result = "";
  if ( this->m_pAnimContainer != 0 )
  {
    result = CModel::pAnimdesc(this, nAnimation);
    if ( (result[15] & 2) == 0 )
    {
      result = *result;
      if ( result == 0 )
        return "";
    }
  }
  return result;
}


// CAnimContainer::pSeqGroupInstance  (line 1477, @0x0000000003141f20, libserver.so)  // inlines: operator[]
const CSeqGroupInstance *__fastcall CAnimContainer::pSeqGroupInstance(const CAnimContainer *const this, int nGroup)
{
  return &this->m_seqGroup.m_Memory.m_pMemory[nGroup];
}


// CAnimContainer::GetAnimDecodeSwizzle  (line 1482, @0x0000000003141f40, libserver.so)  // inlines: operator[]
const CAnimDecodeSwizzle *__fastcall CAnimContainer::GetAnimDecodeSwizzle(
        const CAnimContainer *const this,
        int nAnimation)
{
  return &this->m_animDecodeSwizzle.m_Memory.m_pMemory[this->m_anim.m_Memory.m_pMemory[nAnimation].m_nSwizzleIndex];
}


// CAnimContainer::GetAnimResourceDataChannel  (line 1487, @0x0000000003141f60, libserver.so)  // inlines: operator[]
const CAnimDataChannelDesc *__fastcall CAnimContainer::GetAnimResourceDataChannel(
        const CAnimContainer *const this,
        int nChannel)
{
  CAnimDataChannel *v2; // rsi

  v2 = &this->m_channelArray.m_Memory.m_pMemory[nChannel];
  return &this->m_animDecodeSwizzle.m_Memory.m_pMemory[v2->m_nSwizzleIndex].m_pAnimKey->m_dataChannelArray.m_Memory.m_pMemory[v2->m_nChannel];
}


// CAnimContainer::GetAnimGroupIndex  (line 1493, @0x0000000003141fa0, libserver.so)
int __fastcall CAnimContainer::GetAnimGroupIndex(
        const CAnimContainer *const this,
        const CAnimationGroupResource *pAnimGroup)
{
  int m_Size; // ecx
  const CAnimationGroupResource **m_pMemory; // rdx
  const CAnimationGroupResource **v4; // rdx
  int result; // eax

  m_Size = this->m_AnimGroupArray.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_AnimGroupArray.m_Memory.m_pMemory;
    if ( *m_pMemory != pAnimGroup )
    {
      v4 = m_pMemory + 1;
      result = 0;
      while ( ++result != m_Size )
      {
        if ( *v4++ == pAnimGroup )
          return result;
      }
    }
  }
  return 0;
}


// CAnimContainer::GetAnimRetarget  (line 1504, @0x0000000003142000, libserver.so)  // inlines: operator[]
// calls: CAnimContainer::GetAnimGroupRetarget
// callers: CAnimContainer::GetXYMovementScaleAnim, CModel::GetXYMovementScaleAnim
const CAnimRetarget *__fastcall CAnimContainer::GetAnimRetarget(const CAnimContainer *const this, int nAnimation)
{
  return CAnimContainer::GetAnimGroupRetarget(this, this->m_anim.m_Memory.m_pMemory[nAnimation].m_nAnimGroup);
}


// CAnimContainer::GetAnimGroupRetarget  (line 1509, @0x0000000003141fe0, libserver.so)  // inlines: operator[]
// callers: CAnimContainer::GetAnimRetarget
const CAnimRetarget *__fastcall CAnimContainer::GetAnimGroupRetarget(const CAnimContainer *const this, int nGroup)
{
  return &this->m_animRetarget.m_Memory.m_pMemory[this->m_nRetaretingIndexArray.m_Memory.m_pMemory[nGroup]];
}


// CAnimContainer::GetAnimGroupRetargetName  (line 1514, @0x0000000003142020, libserver.so)  // inlines: operator[]
// calls: CUtlString::Get
// callers: CAnimContainer::EncodeAnimGroupBonename
const char *__fastcall CAnimContainer::GetAnimGroupRetargetName(const CAnimContainer *const this, int nGroup)
{
  return CUtlString::Get(&this->m_animRetarget.m_Memory.m_pMemory[this->m_nRetaretingIndexArray.m_Memory.m_pMemory[nGroup]].m_RetargetName);
}


// CAnimContainer::EncodeAnimGroupBonename  (line 1519, @0x0000000003142050, libserver.so)  // inlines: operator[]
// calls: CAnimContainer::GetAnimGroupRetargetName, CUtlString::Format, CUtlString::operator=
// strings: "RetargetSrc.%s.%s"
bool __fastcall CAnimContainer::EncodeAnimGroupBonename(
        const CAnimContainer *const this,
        CUtlString *const sDstBoneName,
        const char *pSrcBoneName,
        int nAnimGroup)
{
  const char *AnimGroupRetargetName; // rax

  if ( this->m_nRetaretingIndexArray.m_Memory.m_pMemory[nAnimGroup] != 0 )
  {
    AnimGroupRetargetName = CAnimContainer::GetAnimGroupRetargetName(this, nAnimGroup);
    CUtlString::Format(sDstBoneName, "RetargetSrc.%s.%s", AnimGroupRetargetName, pSrcBoneName);
  }
  else
  {
    CUtlString::operator=(sDstBoneName, pSrcBoneName);
  }
  return 1;
}


// CAnimContainer::GetXYMovementScaleAnim  (line 1533, @0x00000000031420b0, libserver.so)
// calls: CAnimContainer::GetAnimRetarget
float __fastcall CAnimContainer::GetXYMovementScaleAnim(const CAnimContainer *const this, int nAnimation)
{
  return CAnimContainer::GetAnimRetarget(this, nAnimation)->m_flXYMovementScale;
}


// CModel::IsValidSequence  (line 1544, @0x00000000031420c0, libserver.so)
// callers: CBaseAnimatingController::GetSequenceKeyValues, CBaseAnimatingController::IsValidSequence, CBaseAnimatingController::SequenceDuration, CBaseAnimatingController::GetSequenceCycleRate, CBaseAnimatingController::GetOneMinusLastVisibleCycle, CBaseAnimatingController::GetSequenceGroundSpeed, CBaseAnimatingController::HasAnimEvent, CBaseAnimatingController::AnimationFrameAdvance, CBaseAnimating::DrawDebugTextOverlays, CBaseAnimatingController::DescribeSequences, CNetworkedSequenceOperation::Spawn, CSkeletonAnimationController::Lerp_NoCopy (30 total)
bool __fastcall CModel::IsValidSequence(const CModel *const this, HSequence hSequence)
{
  CAnimContainer *m_pAnimContainer; // rdx
  bool result; // al

  m_pAnimContainer = this->m_pAnimContainer;
  result = 0;
  if ( m_pAnimContainer != 0 && hSequence.m_Data >= 0 )
    return hSequence.m_Data < m_pAnimContainer->m_pISequenceArray.m_Size;
  return result;
}


// CModel::FirstSequence  (line 1557, @0x00000000031420f0, libserver.so)
// callers: CBaseEntity::PrecacheModelComponents, CBodyGameSystem::DecodeAnimationsAtSpawn, CBaseAnimatingController::SequenceDuration, CBaseAnimatingController::OnNewModel, CSkeletonInstance::AddAnimationDecode, CSkeletonInstance::IsRigidSkeleton, CDOTA_BaseNPC::ManageModelChanges, CDOTA_BaseNPC::Spawn, BuildAllAnimationEventIndexes, IndexModelSequences, LookupActivity, FindTransitionSequence (17 total)
HSequence __fastcall CModel::FirstSequence(const CModel *const this)
{
  CAnimContainer *m_pAnimContainer; // rdx
  HSequence result; // eax

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer == 0 )
    return -1;
  result.m_Data = 0;
  if ( m_pAnimContainer->m_pISequenceArray.m_Size <= 0 )
    return -1;
  return result;
}


// CModel::NextSequence  (line 1566, @0x0000000003142120, libserver.so)
// callers: CBaseEntity::PrecacheModelComponents, CFlexCycler::InputAddSequenceLayer, CFlexCycler::OnTakeDamage, BuildAllAnimationEventIndexes, CActivityToSequenceMapping::SelectWeightedSequence, IndexModelSequences, LookupActivity, FindTransitionSequence, GotoSequence, SelectHeaviestSequence, CActivityToSequenceMapping::Initialize, SelectWeightedSequence (13 total)
HSequence __fastcall CModel::NextSequence(const CModel *const this, HSequence hSequence)
{
  CAnimContainer *m_pAnimContainer; // rax
  int m_Size; // edx
  HSequence result; // eax

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer == 0 )
    return -1;
  if ( hSequence.m_Data < 0 )
    return -1;
  m_Size = m_pAnimContainer->m_pISequenceArray.m_Size;
  result.m_Data = hSequence.m_Data + 1;
  if ( m_Size - 1 <= hSequence.m_Data )
    return -1;
  return result;
}


// CModel::LookupSequence  (line 1578, @0x0000000003142160, libserver.so)  // inlines: BuildHandle, DoFind, Element, Find, GetBucketIndex, HashStringFastCaseless, operator(), operator[]
// calls: MurmurHash2LowerCase, V_stricmp_fast
// callers: CBaseAnimatingController::OnNewModel, CNetworkedSequenceOperation::Spawn, CSkeletonInstance::LookupSequence, LookupSequence
HSequence __fastcall CModel::LookupSequence(const CModel *const this, const char *_pszName)
{
  CAnimContainer *m_pAnimContainer; // rax
  CUtlHashDict<short int,true,false> *m_pSeqTable; // rbx
  uint32 v5; // eax
  __int64 v6; // r14
  int v7; // r13d
  __int64 v8; // r15
  int v9; // ebx
  int v12; // [rsp+Ch] [rbp-34h]

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer == 0 )
    return -1;
  m_pSeqTable = m_pAnimContainer->m_pSeqTable;
  if ( _pszName == 0 )
    return -1;
  v5 = MurmurHash2LowerCase(_pszName, 0x3501A674u);
  v12 = m_pSeqTable->m_Elements.m_bPowerOfTwo
      ? m_pSeqTable->m_Elements.m_ModMask & v5
      : v5 % m_pSeqTable->m_Elements.m_Buckets.m_Size;
  v6 = &m_pSeqTable->m_Elements.m_Buckets.m_Memory.m_pMemory[v12];
  v7 = *v6;
  if ( *v6 <= 0 )
  {
    v9 = 0;
  }
  else
  {
    v8 = 0;
    v9 = 0;
    while ( V_stricmp_fast(*(*(v6 + 8) + v8), _pszName) != 0 )
    {
      ++v9;
      v8 += 16;
      if ( v9 == v7 )
        return -1;
    }
  }
  if ( v7 == v9 || (v9 | (v12 << 16)) == 0xFFFFFFFF )
    return -1;
  else
    return this->m_pAnimContainer->m_pSeqTable->m_Elements.m_Buckets.m_Memory.m_pMemory[(v9 | (v12 << 16)) >> 16].m_Memory.m_pMemory[v9].value;
}


// CModel::GetSequenceName  (line 1591, @0x0000000003142440, libserver.so)  // inlines: IsValidSequence
// calls: CModel::pSeqdesc
// callers: CBaseAnimating::DrawDebugTextOverlays, CBaseAnimatingController::DescribeSequences, CBaseAnimatingController::OnNewModel
const char *__fastcall CModel::GetSequenceName(const CModel *const this, HSequence hSequence)
{
  CAnimContainer *m_pAnimContainer; // rax
  const ISequence *v3; // rax

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer == 0 )
    return "";
  if ( hSequence.m_Data < 0 )
  {
    hSequence.m_Data = 0;
  }
  else if ( hSequence.m_Data >= m_pAnimContainer->m_pISequenceArray.m_Size )
  {
    hSequence.m_Data = 0;
  }
  v3 = CModel::pSeqdesc(this, hSequence);
  return (*(v3->_vptr_IBaseSequence + 11))(v3);
}


// CModel::eyeposition  (line 1611, @0x0000000003142290, libserver.so)
// callers: CStudioHdr::eyeposition, GetEyePosition
Vector __fastcall CModel::eyeposition(const CModel *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vEyePosition.x;
  result.z = this->m_vEyePosition.z;
  return result;
}


// CModel::MaxEyeDeflection  (line 1616, @0x00000000031422b0, libserver.so)
// callers: CStudioHdr::MaxEyeDeflection
float __fastcall CModel::MaxEyeDeflection(const CModel *const this)
{
  return this->m_flMaxEyeDeflection;
}


// CModel::pszSurfaceProp  (line 1621, @0x00000000031422c0, libserver.so)  // inlines: operator char const*
// calls: CUtlString::Get
// callers: CBreakableProp::Break, CPhysMagnet::VPhysicsCollision, CStudioHdr::pszSurfaceProp, CStudioHdr::GetSurfaceProp, CStudioHdr::GetSurfacePropForHitbox
const char *__fastcall CModel::pszSurfaceProp(const CModel *const this)
{
  return CUtlString::Get(&this->m_sSurfaceProperty);
}


// CModel::GetSurfaceProp  (line 1626, @0x00000000031422d0, libserver.so)  // inlines: MakeStringToken, operator char const*, pszSurfaceProp
// calls: CUtlString::Get, MurmurHash2LowerCase, RegisterStringToken
CUtlStringToken __fastcall CModel::GetSurfaceProp(const CModel *const this)
{
  const char *v1; // rbx
  CUtlStringToken result; // eax
  CUtlStringToken v3; // [rsp+Ch] [rbp-14h]

  v1 = CUtlString::Get(&this->m_sSurfaceProperty);
  result.m_nHashCode = 0;
  if ( v1 != 0 && *v1 != 0 )
  {
    result.m_nHashCode = MurmurHash2LowerCase(v1, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v3.m_nHashCode = result.m_nHashCode;
      RegisterStringToken(result.m_nHashCode, v1, 0, 1);
      return v3;
    }
  }
  return result;
}


// CModel::mass  (line 1631, @0x0000000003142340, libserver.so)
// callers: CreateServerRagdoll, CStudioHdr::mass
float __fastcall CModel::mass(const CModel *const this)
{
  return this->m_flMass;
}


// CModel::hull_min  (line 1636, @0x0000000003142350, libserver.so)
// callers: CStudioHdr::hull_min, GetMDLBoundingBox
Vector __fastcall CModel::hull_min(const CModel *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vHullMin.x;
  result.z = this->m_vHullMin.z;
  return result;
}


// CModel::hull_max  (line 1641, @0x0000000003142370, libserver.so)
// callers: CStudioHdr::hull_max, GetMDLBoundingBox
Vector __fastcall CModel::hull_max(const CModel *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vHullMax.x;
  result.z = this->m_vHullMax.z;
  return result;
}


// CModel::view_bbmin  (line 1646, @0x0000000003142390, libserver.so)
// callers: CStudioHdr::view_bbmin, GetMDLBoundingBox
Vector __fastcall CModel::view_bbmin(const CModel *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vViewMin.x;
  result.z = this->m_vViewMin.z;
  return result;
}


// CModel::view_bbmax  (line 1651, @0x00000000031423b0, libserver.so)
// callers: CStudioHdr::view_bbmax, GetMDLBoundingBox
Vector __fastcall CModel::view_bbmax(const CModel *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vViewMax.x;
  result.z = this->m_vViewMax.z;
  return result;
}


// CModel::KeyValueText  (line 1656, @0x00000000031423d0, libserver.so)  // inlines: operator char const*
// calls: CUtlString::Get
// callers: CBaseEntity::PrecacheModelComponents, CBreakModelsPrecached::ComputeServerSideSpawn, CBaseProp::ParsePropData, CRagdollProp::HasPhysgunInteraction, CPhysicsProp::GetPropDataAngles, CPhysicsProp::GetCarryDistanceOffset, CPropDoorRotatingBreakable::OnTakeDamage, CPhysicsProp::Spawn, CBaseServerVehicle::ParseEntryExitAnims, CStudioHdr::KeyValueText
const char *__fastcall CModel::KeyValueText(const CModel *const this)
{
  return CUtlString::Get(&this->m_keyValueText);
}


// CModel::numskinfamilies  (line 1661, @0x00000000031423e0, libserver.so)
// callers: CreatePiece, CreateGibsFromList, CStudioHdr::numskinfamilies
int __fastcall CModel::numskinfamilies(const CModel *const this)
{
  return this->m_materialGroups.m_Size + 1;
}


// CModel::pSeqdesc  (line 1671, @0x00000000031423f0, libserver.so)  // inlines: IsValidSequence
// callers: CBaseEntity::PrecacheModelComponents, CAnimationLayer::GetOperation, CBaseAnimatingController::GetSequenceKeyValues, CBaseAnimatingController::GetOneMinusLastVisibleCycle, CBaseAnimatingController::HasAnimEvent, CBaseAnimatingController::HasPoseParameter, CBaseAnimatingController::GetInstantaneousVelocity, CBaseAnimatingController::GetEntryVelocity, CBaseAnimatingController::GetExitVelocity, CBaseFlex::HandleStartSequenceSceneEvent, CBaseFlex::HandleStartGestureSceneEvent, CBaseFlex::ProcessSequenceSceneEvent (50 total)
// globals: s_EmptySequence
const ISequence *__fastcall CModel::pSeqdesc(const CModel *const this, HSequence hSequence)
{
  CAnimContainer *m_pAnimContainer; // rax
  __int64 m_Data; // rdx

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer == 0 )
    return &s_EmptySequence;
  m_Data = 0;
  if ( hSequence.m_Data >= 0 && hSequence.m_Data < m_pAnimContainer->m_pISequenceArray.m_Size )
    m_Data = hSequence.m_Data;
  return m_pAnimContainer->m_pISequenceArray.m_Memory.m_pMemory[m_Data];
}


// CModel::IsSequenceLooping  (line 1690, @0x0000000003142490, libserver.so)
// calls: CModel::pSeqdesc
// callers: CBaseAnimatingController::IsSequenceLooping, CSkeletonAnimationController::Lerp_NoCopy, CSkeletonAnimationController::Lerp_Hermite_NoCopy, CAnimationOpHistory::Interpolate
bool __fastcall CModel::IsSequenceLooping(const CModel *const this, HSequence hSequence)
{
  const ISequence *v2; // rax

  if ( this->m_pAnimContainer == 0 )
    return 0;
  v2 = CModel::pSeqdesc(this, hSequence);
  return (*(v2->_vptr_IBaseSequence + 13))(v2);
}


// CModel::LookupPoseParameter  (line 1701, @0x00000000031424c0, libserver.so)  // inlines: BuildHandle, DoFind, Element, Find, GetBucketIndex, HashStringFastCaseless, operator(), operator[]
// calls: MurmurHash2LowerCase, V_stricmp_fast
// callers: CBaseAnimatingController::LookupPoseParameter, CBaseAnimatingController::OnNewModel, CGenericFlexCycler::OscillatePoseParametersThink, CGenericFlexCycler::Spawn
int __fastcall CModel::LookupPoseParameter(const CModel *const this, const char *_pszName)
{
  CAnimContainer *m_pAnimContainer; // rbx
  uint32 v4; // eax
  __int64 v5; // r14
  int v6; // r13d
  __int64 v7; // r15
  int v8; // ebx
  int v10; // [rsp+4h] [rbp-3Ch]

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer == 0 || _pszName == 0 )
    return -1;
  v4 = MurmurHash2LowerCase(_pszName, 0x3501A674u);
  v10 = m_pAnimContainer->m_poseTable.m_Elements.m_bPowerOfTwo
      ? m_pAnimContainer->m_poseTable.m_Elements.m_ModMask & v4
      : v4 % m_pAnimContainer->m_poseTable.m_Elements.m_Buckets.m_Size;
  v5 = &m_pAnimContainer->m_poseTable.m_Elements.m_Buckets.m_Memory.m_pMemory[v10];
  v6 = *v5;
  if ( *v5 <= 0 )
  {
    v8 = 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    while ( V_stricmp_fast(*(*(v5 + 8) + v7), _pszName) != 0 )
    {
      ++v8;
      v7 += 16;
      if ( v8 == v6 )
        return -1;
    }
  }
  if ( v6 == v8 || (v8 | (v10 << 16)) == 0xFFFFFFFF )
    return -1;
  else
    return this->m_pAnimContainer->m_poseTable.m_Elements.m_Buckets.m_Memory.m_pMemory[(v8 | (v10 << 16)) >> 16].m_Memory.m_pMemory[v8].value;
}


// CModel::GetNumPoseParameters  (line 1718, @0x00000000031425f0, libserver.so)
// callers: CBaseAnimatingController::SetPoseParameter, CBaseAnimating::InitPoseParameters, CBaseAnimatingController::GetNumPoseParameters, CBaseAnimatingController::GetPoseParameter, CBaseAnimatingController::GetPoseParameterNormalized, CBaseAnimatingController::GetPoseParameterRange, CBaseAnimatingController::EdgeLimitPoseParameter, CBaseAnimatingController::OnNewModel, CStudioHdr::GetNumPoseParameters, CAnimationDecodeContext::AddAnimationDecodeDesc, Model_CalcDefaultPoseParameters
int __fastcall CModel::GetNumPoseParameters(const CModel *const this)
{
  CAnimContainer *m_pAnimContainer; // rax

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer != 0 )
    return m_pAnimContainer->m_poseArray.m_Size;
  else
    return 0;
}


// CModel::pPoseParameter  (line 1727, @0x0000000003142620, libserver.so)  // inlines: operator[]
// callers: CBaseAnimatingController::GetPoseParameterRange, CBaseAnimatingController::EdgeLimitPoseParameter, CGenericFlexCycler::OscillatePoseParametersThink, CGenericFlexCycler::Spawn, CStudioHdr::pPoseParameter, Model_CalcDefaultPoseParameters
const PoseParamDesc_t *__fastcall CModel::pPoseParameter(const CModel *const this, int iParameter)
{
  CAnimContainer *m_pAnimContainer; // rax

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer != 0 )
    return &m_pAnimContainer->m_poseArray.m_Memory.m_pMemory[iParameter];
  else
    return 0;
}


// CModel::GetPoseParameterName  (line 1736, @0x0000000003142650, libserver.so)  // inlines: Element, GetBucketIndex, GetElementName, operator[]
// callers: CBaseAnimatingController::OnNewModel, CStudioHdr::GetPoseParameterName
const char *__fastcall CModel::GetPoseParameterName(const CModel *const this, int iParameter)
{
  CAnimContainer *m_pAnimContainer; // rdx
  unsigned int m_handle; // ecx

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer == 0 )
    return 0;
  m_handle = m_pAnimContainer->m_poseArray.m_Memory.m_pMemory[iParameter].m_handle;
  return m_pAnimContainer->m_poseTable.m_Elements.m_Buckets.m_Memory.m_pMemory[HIWORD(m_handle)].m_Memory.m_pMemory[m_handle].pszSymbol;
}


// CModel::EncodePoseParameter  (line 1746, @0x00000000031426b0, libserver.so)  // inlines: GetNumPoseParameters, operator[], pPoseParameter
// calls: floorf
// callers: CBaseAnimatingController::SetPoseParameter
float __fastcall CModel::EncodePoseParameter(
        const CModel *const this,
        int iParameter,
        float flValue,
        float *const flNormalizedValue)
{
  CAnimContainer *m_pAnimContainer; // rax
  float v5; // xmm1_4
  float *p_m_start; // rbx
  float v7; // xmm3_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  __m128d v10; // xmm3
  float v11; // xmm2_4
  double v12; // xmm1_8
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float *v18; // [rsp-38h] [rbp-38h]
  float v19; // [rsp-2Ch] [rbp-2Ch]
  double v20; // [rsp-28h] [rbp-28h]
  float v21; // [rsp-20h] [rbp-20h]

  if ( iParameter >= 0
    && (m_pAnimContainer = this->m_pAnimContainer) != 0
    && iParameter < m_pAnimContainer->m_poseArray.m_Size )
  {
    v5 = flValue;
    p_m_start = &m_pAnimContainer->m_poseArray.m_Memory.m_pMemory[iParameter].m_start;
    v7 = p_m_start[2];
    if ( v7 == 0.0 )
    {
      v11 = *p_m_start;
      v13 = p_m_start[1];
    }
    else
    {
      v18 = flNormalizedValue;
      v19 = *p_m_start;
      v21 = p_m_start[1];
      v20 = v7;
      v8 = (*p_m_start + v21) * 0.5 + 0.5 * v7;
      v9 = floorf(((v7 - v8) + v5) / v7);
      flNormalizedValue = v18;
      v10.m128d_f64[1] = flValue;
      v11 = v19;
      v10.m128d_f64[0] = flValue - v9 * v20;
      v12 = _mm_movedup_pd(v10).m128d_f64[0];
      v13 = v21;
      v5 = v12;
    }
    v14 = v5 - v11;
    v15 = 1.0;
    v16 = v14 / (v13 - v11);
    if ( v16 <= 1.0 )
      v15 = fmaxf(0.0, v16);
    *flNormalizedValue = v15;
    return ((p_m_start[1] - *p_m_start) * v15) + *p_m_start;
  }
  else
  {
    *flNormalizedValue = 0.0;
    return 0.0;
  }
}


// CModel::DecodePoseParameter  (line 1778, @0x0000000003142820, libserver.so)  // inlines: GetNumPoseParameters, operator[], pPoseParameter
// callers: CBaseAnimatingController::GetPoseParameter
float __fastcall CModel::DecodePoseParameter(const CModel *const this, int iParameter, float a3, float ctlValue)
{
  CAnimContainer *m_pAnimContainer; // rax
  float *p_m_start; // rax

  if ( iParameter < 0 )
    return 0.0;
  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer == 0 || iParameter >= m_pAnimContainer->m_poseArray.m_Size )
    return 0.0;
  p_m_start = &m_pAnimContainer->m_poseArray.m_Memory.m_pMemory[iParameter].m_start;
  return ((p_m_start[1] - *p_m_start) * a3) + *p_m_start;
}


// CModel::LookupWeightlist  (line 1795, @0x0000000003142880, libserver.so)  // inlines: BuildHandle, DoFind, Element, Find, GetBucketIndex, HashStringFastCaseless, operator(), operator[]
// calls: MurmurHash2LowerCase, V_stricmp_fast
int __fastcall CModel::LookupWeightlist(const CModel *const this, const char *_pszName)
{
  CAnimContainer *m_pAnimContainer; // rbx
  uint32 v4; // eax
  __int64 v5; // r14
  int v6; // r13d
  __int64 v7; // r15
  int v8; // ebx
  int v10; // [rsp+4h] [rbp-3Ch]

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer == 0 || _pszName == 0 )
    return -1;
  v4 = MurmurHash2LowerCase(_pszName, 0x3501A674u);
  v10 = m_pAnimContainer->m_weightlistTable.m_Elements.m_bPowerOfTwo
      ? m_pAnimContainer->m_weightlistTable.m_Elements.m_ModMask & v4
      : v4 % m_pAnimContainer->m_weightlistTable.m_Elements.m_Buckets.m_Size;
  v5 = &m_pAnimContainer->m_weightlistTable.m_Elements.m_Buckets.m_Memory.m_pMemory[v10];
  v6 = *v5;
  if ( *v5 <= 0 )
  {
    v8 = 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    while ( V_stricmp_fast(*(*(v5 + 8) + v7), _pszName) != 0 )
    {
      ++v8;
      v7 += 16;
      if ( v8 == v6 )
        return -1;
    }
  }
  if ( v6 == v8 || (v8 | (v10 << 16)) == 0xFFFFFFFF )
    return -1;
  else
    return this->m_pAnimContainer->m_weightlistTable.m_Elements.m_Buckets.m_Memory.m_pMemory[(v8 | (v10 << 16)) >> 16].m_Memory.m_pMemory[v8].value;
}


// CModel::GetNumWeightlists  (line 1808, @0x00000000031429b0, libserver.so)
int __fastcall CModel::GetNumWeightlists(const CModel *const this)
{
  CAnimContainer *m_pAnimContainer; // rax

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer != 0 )
    return m_pAnimContainer->m_weightlistArray.m_Size;
  else
    return 0;
}


// CModel::pChannelWeightlist  (line 1814, @0x00000000031429e0, libserver.so)  // inlines: operator[]
const ChannelWeightlist_t *__fastcall CModel::pChannelWeightlist(const CModel *const this, int nWeightlist)
{
  CAnimContainer *m_pAnimContainer; // rdx

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer != 0 )
    return &m_pAnimContainer->m_weightlistArray.m_Memory.m_pMemory[nWeightlist];
  else
    return 0;
}


// CModel::GetWeightlistName  (line 1823, @0x0000000003142a20, libserver.so)  // inlines: operator[], pChannelWeightlist
// calls: CUtlString::Get
const char *__fastcall CModel::GetWeightlistName(const CModel *const this, int nWeightlist)
{
  CAnimContainer *m_pAnimContainer; // rax
  const CUtlString *p_m_name; // rdi

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer != 0
    && (p_m_name = &m_pAnimContainer->m_weightlistArray.m_Memory.m_pMemory[nWeightlist].m_name) != 0 )
  {
    return CUtlString::Get(p_m_name);
  }
  else
  {
    return 0;
  }
}


// CModel::numikchains  (line 1835, @0x0000000003142a60, libserver.so)  // inlines: GetNumIKChains
// callers: CBaseAnimatingController::UpdateIK, CModelState::ExtendBoneFlags, CStudioHdr::numikchains, CIKContext::SolveDependencies, CIKContext::AutoIKRelease, CIKContext::AddDependencies, CIKContext::Init
int __fastcall CModel::numikchains(const CModel *const this)
{
  CAnimContainer *m_pAnimContainer; // rax

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer != 0 )
    return m_pAnimContainer->m_ikChainsFromLua.m_nCount;
  else
    return 0;
}


// CModel::GetNumIKChains  (line 1840, @0x0000000003142a90, libserver.so)  // inlines: GetNumIKChains
// callers: CStudioHdr::GetNumIKChains
int __fastcall CModel::GetNumIKChains(const CModel *const this)
{
  CAnimContainer *m_pAnimContainer; // rax

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer != 0 )
    return m_pAnimContainer->m_ikChainsFromLua.m_nCount;
  else
    return 0;
}


// CModel::pIKChain  (line 1850, @0x0000000003142ac0, libserver.so)  // inlines: Base, Element, GetIKChain, operator[]
// callers: CBaseAnimatingController::UpdateIK, CModelState::ExtendBoneFlags, CStudioHdr::pIKChain, CIKContext::SolveDependencies, CIKContext::AutoIKRelease, CIKContext::UpdateTargets, CIKContext::AddDependencies
const CAnimIKChain *__fastcall CModel::pIKChain(const CModel *const this, int i)
{
  CAnimContainer *m_pAnimContainer; // rdx
  const CAnimIKChain *result; // rax
  CUtlLeanVectorBase<CAnimIKChain,short int>::ElemType_t *m_pElements; // rax

  m_pAnimContainer = this->m_pAnimContainer;
  result = 0;
  if ( m_pAnimContainer != 0 && i >= 0 && i < m_pAnimContainer->m_ikChainsFromLua.m_nCount )
  {
    if ( m_pAnimContainer->m_ikChainsFromLua.m_nAllocated != 0 )
      m_pElements = m_pAnimContainer->m_ikChainsFromLua.m_pElements;
    else
      m_pElements = 0;
    return &m_pElements[i];
  }
  return result;
}


// CModel::GetNumAutoplaySequences  (line 1863, @0x0000000003142b20, libserver.so)
int __fastcall CModel::GetNumAutoplaySequences(const CModel *const this)
{
  CAnimContainer *m_pAnimContainer; // rax

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer != 0 )
    return m_pAnimContainer->m_autoplaySequences.m_Size;
  else
    return 0;
}


// CModel::GetAutoplaySequence  (line 1872, @0x0000000003142b50, libserver.so)  // inlines: IsValidIndex, operator[]
HSequence __fastcall CModel::GetAutoplaySequence(const CModel *const this, int nAutoplaySequenceIndex)
{
  CAnimContainer *m_pAnimContainer; // rax

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer != 0
    && nAutoplaySequenceIndex >= 0
    && nAutoplaySequenceIndex < m_pAnimContainer->m_autoplaySequences.m_Size )
  {
    return m_pAnimContainer->m_autoplaySequences.m_Memory.m_pMemory[nAutoplaySequenceIndex].m_Data;
  }
  else
  {
    return -1;
  }
}


// CModel::EntryNode  (line 1885, @0x0000000003142b90, libserver.so)
// calls: CModel::pSeqdesc
// callers: FindTransitionSequence, GotoSequence
int __fastcall CModel::EntryNode(const CModel *const this, HSequence hSequence)
{
  const ISequence *v2; // rax

  v2 = CModel::pSeqdesc(this, hSequence);
  return (*(v2->_vptr_IBaseSequence + 46))(v2);
}


// CModel::ExitNode  (line 1896, @0x0000000003142bb0, libserver.so)
// calls: CModel::pSeqdesc
// callers: FindTransitionSequence, GotoSequence
int __fastcall CModel::ExitNode(const CModel *const this, HSequence hSequence)
{
  const ISequence *v2; // rax

  v2 = CModel::pSeqdesc(this, hSequence);
  return (*(v2->_vptr_IBaseSequence + 47))(v2);
}


// CModel::pszNodeName  (line 1907, @0x0000000003142bd0, libserver.so)
// callers: FindTransitionSequence
const char *__fastcall CModel::pszNodeName(const CModel *const this, int iNode)
{
  return (*(this->m_pAnimContainer->_vptr_CAnimContainer + 3))(this->m_pAnimContainer, iNode);
}


// CModel::GetNodeTransition  (line 1918, @0x0000000003142bf0, libserver.so)
// callers: FindTransitionSequence, GotoSequence
int __fastcall CModel::GetNodeTransition(const CModel *const this, int iFromNode, int iToNode)
{
  return (*(this->m_pAnimContainer->_vptr_CAnimContainer + 4))(this->m_pAnimContainer, iFromNode, iToNode);
}


// CModel::GetAnimationGraph  (line 1923, @0x0000000003142c10, libserver.so)
// callers: GetAnimationGraph
IAnimationGraph *__fastcall CModel::GetAnimationGraph(const CModel *const this)
{
  CAnimContainer *m_pAnimContainer; // rdi

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer != 0 )
    return (*(m_pAnimContainer->_vptr_CAnimContainer + 5))(m_pAnimContainer);
  else
    return 0;
}


// CModel::GetNumIKAutoplayLocks  (line 1935, @0x0000000003142c40, libserver.so)
// callers: CStudioHdr::GetNumIKAutoplayLocks
int __fastcall CModel::GetNumIKAutoplayLocks(const CModel *const this)
{
  return this->m_pAnimContainer->m_iklock.m_Size;
}


// CModel::pIKAutoplayLock  (line 1940, @0x0000000003142c60, libserver.so)
// callers: CStudioHdr::pIKAutoplayLock
const CSeqIKLock *__fastcall CModel::pIKAutoplayLock(const CModel *const this, int i)
{
  return 0;
}


// CModel::RemapSeqBone  (line 1954, @0x0000000003142c70, libserver.so)
int __fastcall CModel::RemapSeqBone(const CModel *const this, HSequence hSequence, int nLocalBone)
{
  return nLocalBone;
}


// CModel::RemapAnimBone  (line 1971, @0x0000000003142c80, libserver.so)
int __fastcall CModel::RemapAnimBone(const CModel *const this, int iAnim, int nLocalBone)
{
  return nLocalBone;
}


// CModel::NumBonesForLOD  (line 1985, @0x0000000003142c90, libserver.so)  // inlines: NumBonesForLOD
int __fastcall CModel::NumBonesForLOD(const CModel *const this, int nLod)
{
  if ( (nLod - 1) <= 6 )
    return this->m_modelSkeleton.m_pBonesPerLod[nLod];
  else
    return this->m_modelSkeleton.m_nParent.m_Size;
}


// CModel::NumBones  (line 1990, @0x0000000003142cc0, libserver.so)
// callers: IsAnimatedPhysics, CDecalGameSystem::AddDecalAndAssignToSlot, GetPlacementOriginTransform, CBaseAnimating::GetBonePosition, CBaseAnimating::DrawRawSkeleton, Studio_BuildMatrices, DrawRawSkeleton, InitPose, IDebugOverlay::EntityAttachments, IDebugOverlay::EntityJointInfo, CBaseAnimatingController::UpdateIK, CBaseAnimating::DrawVCollide (29 total)
int __fastcall CModel::NumBones(const CModel *const this)
{
  return this->m_modelSkeleton.m_nParent.m_Size;
}


// CModel::boneFlags  (line 1995, @0x0000000003142cd0, libserver.so)
// calls: CModelSkeleton::GetFlags
// callers: CSkeletonBoneSetupHelper::ComputeWorldSpaceBones, CModelState::ComputeModelBoneFlags, CStudioHdr::boneFlags, CIKContext::SolveDependencies, CIKContext::AutoIKRelease, CIKContext::AddDependencies
CModelSkeleton::BoneFlags_t __fastcall CModel::boneFlags(const CModel *const this, int iBone)
{
  return CModelSkeleton::GetFlags(&this->m_modelSkeleton, iBone);
}


// CModel::boneName  (line 2000, @0x0000000003142cf0, libserver.so)
// calls: CModelSkeleton::GetBoneNameByIndex
// callers: DrawBone, IDebugOverlay::EntityJointInfo, CCompositeParentSpaceState::GetDebugString, CBaseCombatCharacter::Weapon_Drop, CStudioHdr::boneName, CStudioHdr::BoneNameMatches, GetDebugBoneIndex, CAnimationState::GetDebugString
const char *__fastcall CModel::boneName(const CModel *const this, int iBone)
{
  return CModelSkeleton::GetBoneNameByIndex(&this->m_modelSkeleton, iBone);
}


// CModel::boneParent  (line 2005, @0x0000000003142d10, libserver.so)
// calls: CModelSkeleton::GetParent
// callers: CBaseAnimating::DrawRawSkeleton, Studio_BuildMatrices, DrawBone, CSkeletonBoneSetupHelper::ComputeWorldSpaceBones, ComputeModelSpaceBonesFromParentSpaceBones, ComputeWorldSpaceBonesFromParentSpaceBone, CModelState::ExtendBoneFlags, CSkeletonInstance::GetAnimationStateWorldSpaceTransform, CSkeletonInstance::GetAnimationStateWorldSpaceTransforms, CSkeletonInstance::CalculateWorldTransforms_R, CSkeletonInstance::BuildTransformations, CStudioHdr::boneParent (20 total)
int __fastcall CModel::boneParent(const CModel *const this, int iBone)
{
  return CModelSkeleton::GetParent(&this->m_modelSkeleton, iBone);
}


// CModel::bonePosParentSpace  (line 2010, @0x0000000003142d30, libserver.so)
// calls: CModelSkeleton::GetPosParentSpace
// callers: InitPose, CStudioHdr::bonePosParentSpace
Vector __fastcall CModel::bonePosParentSpace(const CModel *const this, int iBone)
{
  return CModelSkeleton::GetPosParentSpace(&this->m_modelSkeleton, iBone);
}


// CModel::boneRotParentSpace  (line 2015, @0x0000000003142d50, libserver.so)
// calls: CModelSkeleton::GetRotParentSpace
// callers: InitPose, CStudioHdr::boneRotParentSpace
Quaternion __fastcall CModel::boneRotParentSpace(const CModel *const this, int iBone)
{
  return CModelSkeleton::GetRotParentSpace(&this->m_modelSkeleton, iBone);
}


// CModel::GetXYMovementScaleAnim  (line 2020, @0x0000000003142d70, libserver.so)  // inlines: GetXYMovementScaleAnim
// calls: CAnimContainer::GetAnimRetarget
// callers: CAnimationBlendList::flScale
float __fastcall CModel::GetXYMovementScaleAnim(const CModel *const this, int nAnim)
{
  CAnimContainer *m_pAnimContainer; // rdi

  m_pAnimContainer = this->m_pAnimContainer;
  if ( m_pAnimContainer != 0 )
    return CAnimContainer::GetAnimRetarget(m_pAnimContainer, nAnim)->m_flXYMovementScale;
  else
    return 1.0;
}


// CModel::GetBindPoseWorldTransforms  (line 2029, @0x0000000003142da0, libserver.so)
// calls: CModelSkeleton::GetBindPoseWorldTransforms
void __fastcall CModel::GetBindPoseWorldTransforms(
        const CModel *const this,
        const CTransform *const skeletonToWorld,
        int nCount,
        CTransform *pBindPoseWorldTransforms)
{
  CModelSkeleton::GetBindPoseWorldTransforms(&this->m_modelSkeleton, skeletonToWorld, nCount, pBindPoseWorldTransforms);
}


// CModel::GetBindPoseWorldTransforms  (line 2034, @0x0000000003142dc0, libserver.so)
// calls: CModelSkeleton::GetBindPoseWorldTransforms
// callers: CSkeletonInstance::GetPoseSpaceHitboxBounds
void __fastcall CModel::GetBindPoseWorldTransforms(
        const CModel *const this,
        const matrix3x4a_t *const skeletonToWorld,
        int nCount,
        matrix3x4a_t *pBindPoseWorldTransforms)
{
  CModelSkeleton::GetBindPoseWorldTransforms(&this->m_modelSkeleton, skeletonToWorld, nCount, pBindPoseWorldTransforms);
}


// CModel::AcquirePhysicsRef  (line 2039, @0x0000000003142de0, libserver.so)  // inlines: AddRef<CPhysAggregateData>, CSmartPtr, Release<CPhysAggregateData>, operator const RuntimeClass_t*, operator=
// calls: CPhysAggregateData::AddRef, CPhysAggregateData::Release
// callers: Physics_GetAggregateData, CPhysicsGameSystem::SetPhysGroupMask, CBaseAnimating::DrawVCollide, CBaseEntity::DrawVCollide
CSmartPtr<CPhysAggregateData,CRefCountAccessor> __fastcall CModel::AcquirePhysicsRef(
        const CPhysAggregateData **a1,
        const CModel *const this)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const CPhysAggregateData *m_pData; // r12

  m_pBinding = this->m_refPhysicsData.m_pBinding;
  if ( m_pBinding != 0 && (m_pData = m_pBinding->m_pData, m_pBinding->m_pData != 0) )
  {
    *a1 = 0;
    CPhysAggregateData::AddRef(m_pData);
    if ( *a1 != 0 )
      CPhysAggregateData::Release(*a1);
    *a1 = m_pData;
    return a1;
  }
  else
  {
    *a1 = 0;
    return a1;
  }
}


// CModel::GetSequenceBounds  (line 2051, @0x0000000003142e40, libserver.so)
// calls: CModel::pSeqdesc, CModel::GetMeshBounds
// callers: CBaseAnimatingController::GetSequenceBounds, CBaseAnimatingOverlayController::GetSequenceBounds, CCollisionProperty::ComputeRotationExpandedSequenceBounds, ExtractBbox
void __fastcall CModel::GetSequenceBounds(
        const CModel *const this,
        HSequence hSequence,
        Vector *pVecMins,
        Vector *pVecMaxs)
{
  const ISequence *v6; // rax

  if ( this->m_pAnimContainer != 0 )
  {
    v6 = CModel::pSeqdesc(this, hSequence);
    (*(v6->_vptr_IBaseSequence + 24))(v6, pVecMins, pVecMaxs);
  }
  else
  {
    CModel::GetMeshBounds(this, pVecMins, pVecMaxs);
  }
}


// CModel::SetupAttachment  (line 2066, @0x0000000003142e90, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, AndSIMD<(ESIMDLevel)20u>, CmpGtSIMD<(ESIMDLevel)20u>, Dot4SIMD<(ESIMDLevel)20u>, ExtractFloat<0, (ESIMDLevel)20u>, ExtractFloat<1, (ESIMDLevel)20u>, ExtractFloat<2, (ESIMDLevel)20u>, ExtractFloat<3, (ESIMDLevel)20u>, Init, InsertFloat<0, (ESIMDLevel)20u>, InsertFloat<1, (ESIMDLevel)20u>, InsertFloat<2, (ESIMDLevel)20u>, InsertFloat<3, (ESIMDLevel)20u>, LoadUnalignedSIMD<(ESIMDLevel)20u>, LoadZeroSIMD<(ESIMDLevel)20u>, MaskedAssign<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, NegSIMD<(ESIMDLevel)20u>, QuaternionAlignSIMD<(ESIMDLevel)20u>, QuaternionMult, QuaternionMultSIMD<(ESIMDLevel)20u>, RotateLeft2<(ESIMDLevel)20u>, SubSIMD<(ESIMDLevel)20u>, TransformPoint<CTransform>, VectorMultiply, XorSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_and_ps, _mm_cmpgt_ps, _mm_loadu_ps, _mm_mul_ps, _mm_shuffle_ps, _mm_sub_ps, _mm_xor_ps, operator*, operator+=, operator=
// calls: QuaternionAverageExponential
// callers: CModel::SetupAttachments, CModel::SetupAttachmentTransform
void __fastcall CModel::SetupAttachment(
        int nInfluences,
        const int32 *pInfluenceIndices,
        const float *pInfluenceWeights,
        const Vector *pInfluenceOffsets,
        const Quaternion *pInfluenceRotations,
        const CTransform *pSimWorldTransformsIn,
        const CTransform *const rootTransform,
        CTransform *pAttachmentWorldTransformOut)
{
  __m128 v8; // xmm15
  __int64 v9; // rbx
  int v10; // eax
  const CTransform *v11; // r11
  float v12; // xmm11_4
  const Vector *v13; // r15
  float v14; // xmm3_4
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm4_4
  float v18; // xmm7_4
  float v19; // xmm14_4
  float v20; // xmm13_4
  float v21; // xmm12_4
  float v22; // xmm10_4
  float v23; // xmm6_4
  float v24; // xmm11_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm10_4
  __m128 v28; // xmm5
  float v29; // xmm13_4
  float v30; // xmm4_4
  float v31; // xmm3_4
  float v32; // xmm4_4
  float v33; // xmm2_4
  float v34; // xmm13_4
  __m128 v35; // xmm10
  float v36; // xmm12_4
  float v37; // xmm8_4
  __m128 v38; // xmm4
  __m128 v39; // xmm2
  __m128 v40; // xmm4
  __m128 v41; // xmm2
  __m128 v42; // xmm6
  __m128 v43; // xmm4
  __m128 v44; // xmm9
  float v45; // xmm7_4
  float v46; // xmm3_4
  float v47; // xmm11_4
  __m128 v48; // xmm14
  __m128 v49; // xmm15
  __m128 v50; // xmm15
  __m128 v51; // xmm2
  __m128 v52; // xmm15
  __m128 v53; // xmm7
  float v54; // xmm0_4
  __int64 v55; // r11
  Quaternion *v56; // rbx
  float y; // xmm10_4
  float z; // xmm2_4
  const Vector *v59; // r11
  float x; // xmm4_4
  float v61; // xmm5_4
  float v62; // xmm3_4
  float v63; // xmm1_4
  float v64; // xmm13_4
  float v65; // xmm11_4
  float v66; // xmm6_4
  float v67; // xmm14_4
  float v68; // xmm12_4
  float v69; // xmm10_4
  float v70; // xmm1_4
  float v71; // xmm14_4
  float v72; // xmm9_4
  __m128 v73; // xmm4
  float v74; // xmm12_4
  float v75; // xmm3_4
  float v76; // xmm11_4
  QuaternionAligned m_orientation; // xmm2
  float v78; // xmm12_4
  float v79; // xmm11_4
  float v80; // xmm7_4
  __m128 v81; // xmm3
  __m128 v82; // xmm1
  __m128 v83; // xmm3
  __m128 v84; // xmm1
  __m128 v85; // xmm5
  __m128 v86; // xmm3
  __m128 v87; // xmm8
  float v88; // xmm6_4
  float v89; // xmm10_4
  __m128 v90; // xmm1
  __m128 v91; // xmm13
  float v92; // xmm9_4
  __m128 v93; // xmm13
  __m128 v94; // xmm5
  vec_t v95; // xmm2_4
  vec_t v96; // xmm1_4
  vec_t w; // xmm1_4
  vec_t v98; // xmm3_4
  vec_t v99; // xmm0_4
  __m128 v100; // [rsp+0h] [rbp-B0h]
  __m128 v101; // [rsp+0h] [rbp-B0h]
  float v102; // [rsp+10h] [rbp-A0h]
  float v103; // [rsp+10h] [rbp-A0h]
  float v104; // [rsp+14h] [rbp-9Ch]
  float v105; // [rsp+18h] [rbp-98h]
  float v106; // [rsp+1Ch] [rbp-94h]
  float v107; // [rsp+20h] [rbp-90h]
  float v108; // [rsp+20h] [rbp-90h]
  __m128 v109; // [rsp+20h] [rbp-90h]
  float pWeights[4]; // [rsp+30h] [rbp-80h] BYREF
  Quaternion vBlendedOrientation; // [rsp+40h] [rbp-70h] BYREF
  Quaternion pQuaternions[3]; // [rsp+50h] [rbp-60h] BYREF

  if ( nInfluences != 0 )
  {
    if ( nInfluences > 0 )
    {
      v9 = 0;
      v10 = 0;
      v104 = 0.0;
      v105 = 0.0;
      v106 = 0.0;
      while ( 1 )
      {
        v54 = pInfluenceWeights[v10];
        if ( v54 == 0.0 )
          goto LABEL_5;
        pWeights[v9] = v54;
        v55 = pInfluenceIndices[v10];
        if ( v55 == -2 )
        {
          y = rootTransform->m_orientation.y;
          z = rootTransform->m_orientation.z;
          v59 = &pInfluenceOffsets[v10];
          x = rootTransform->m_orientation.x;
          v61 = v59->z;
          v103 = y + y;
          v62 = (z + z) * z;
          v63 = rootTransform->m_orientation.w + rootTransform->m_orientation.w;
          v64 = y * (x + x);
          v65 = z * (x + x);
          v66 = v59->y;
          v67 = 1.0 - ((y + y) * y);
          v68 = z * v63;
          v108 = (y + y) * y;
          v69 = y * v63;
          v70 = v63 * x;
          v71 = ((((v67 - v62) * v59->x) + rootTransform->m_vPosition.x) + ((v64 - v68) * v66)) + ((v65 + v69) * v61);
          v72 = 1.0 - ((x + x) * x);
          v73 = pInfluenceRotations[v10];
          v74 = (((v68 + v64) * v59->x) + rootTransform->m_vPosition.y) + ((v72 - v62) * v66);
          v75 = z * v103;
          v76 = (((v65 - v69) * v59->x) + rootTransform->m_vPosition.z) + (((z * v103) + v70) * v66);
          m_orientation = rootTransform->m_orientation;
          v78 = v74 + ((v75 - v70) * v61);
          v79 = v76 + ((v72 - v108) * v61);
          v80 = _mm_shuffle_ps(m_orientation, m_orientation, 85).m128_f32[0];
          v81 = _mm_sub_ps(m_orientation, v73);
          v82 = _mm_add_ps(m_orientation, v73);
          v83 = _mm_mul_ps(v81, v81);
          v84 = _mm_mul_ps(v82, v82);
          v85 = _mm_add_ps(_mm_shuffle_ps(v83, v83, 177), v83);
          v86 = _mm_add_ps(_mm_shuffle_ps(v84, v84, 177), v84);
          v87 = _mm_xor_ps(
                  _mm_and_ps(
                    _mm_xor_ps(_mm_sub_ps(Four_Zeros, v73), v73),
                    _mm_cmplt_ps(
                      _mm_add_ps(_mm_shuffle_ps(v86, v86, 78), v86),
                      _mm_add_ps(_mm_shuffle_ps(v85, v85, 78), v85))),
                  v73);
          v86.m128_f32[0] = _mm_shuffle_ps(v87, v87, 255).m128_f32[0];
          v85.m128_f32[0] = _mm_unpackhi_ps(v87, v87).m128_f32[0];
          v73.m128_f32[0] = _mm_unpackhi_ps(m_orientation, m_orientation).m128_f32[0];
          v88 = _mm_shuffle_ps(v87, v87, 85).m128_f32[0];
          m_orientation.x = _mm_shuffle_ps(m_orientation, m_orientation, 255).m128_f32[0];
          v89 = -rootTransform->m_orientation.x;
          v100.m128_f32[0] = (((COERCE_FLOAT(*&rootTransform->m_orientation) * v86.m128_f32[0]) + (v80 * v85.m128_f32[0]))
                            - (v73.m128_f32[0] * v88))
                           + (m_orientation.x * v87.m128_f32[0]);
          v109 = v100;
          v101 = _mm_unpacklo_ps(v109, v109);
          v101.m128_f32[0] = (((v85.m128_f32[0] * v89) + (v86.m128_f32[0] * v80)) + (v73.m128_f32[0] * v87.m128_f32[0]))
                           + (v88 * m_orientation.x);
          v90 = _mm_shuffle_ps(v101, v109, 225);
          v91 = v90;
          v92 = (((COERCE_FLOAT(*&rootTransform->m_orientation) * v88) - (v80 * v87.m128_f32[0]))
               + (v86.m128_f32[0] * v73.m128_f32[0]))
              + (v85.m128_f32[0] * m_orientation.x);
          v87.m128_f32[0] = (((v87.m128_f32[0] * v89) - (v88 * v80)) - (v73.m128_f32[0] * v85.m128_f32[0]))
                          + (m_orientation.x * v86.m128_f32[0]);
          v91.m128_f32[0] = v92;
          v93 = _mm_shuffle_ps(v90, v91, 196);
          v94 = v93;
          v94.m128_f32[0] = v87.m128_f32[0];
          v100 = _mm_shuffle_ps(v93, v94, 36);
          pQuaternions[v9] = v100;
          v106 = (v71 * v54) + v106;
          v105 = (v78 * v54) + v105;
          v104 = (v79 * v54) + v104;
          goto LABEL_5;
        }
        if ( v55 == -1 )
        {
          ++v10;
          v56 = &pQuaternions[v9];
          v56->x = 0.0;
          v56->y = 0.0;
          v56->z = 0.0;
          v56->w = 1.0;
          v9 = v10;
          if ( nInfluences <= v10 )
            goto LABEL_10;
        }
        else
        {
          v11 = &pSimWorldTransformsIn[v55];
          v12 = v11->m_orientation.y;
          v13 = &pInfluenceOffsets[v10];
          v14 = v11->m_orientation.z;
          v15 = v11->m_orientation.x;
          v102 = v12 + v12;
          v16 = v11->m_orientation.w + v11->m_orientation.w;
          v17 = (v14 + v14) * v14;
          v18 = v13->y;
          v19 = v12 * (v15 + v15);
          v20 = v14 * v16;
          v21 = v14 * (v15 + v15);
          v22 = (v12 + v12) * v12;
          v23 = v13->z;
          v24 = v12 * v16;
          v107 = v22;
          v25 = v16 * v15;
          v26 = (((((1.0 - v22) - v17) * v13->x) + v11->m_vPosition.x) + ((v19 - v20) * v18)) + ((v21 + v24) * v23);
          v27 = 1.0 - ((v15 + v15) * v15);
          v28 = pInfluenceRotations[v10];
          v29 = (((v20 + v19) * v13->x) + v11->m_vPosition.y) + ((v27 - v17) * v18);
          v30 = v14 * v102;
          v31 = (v14 * v102) + v25;
          v32 = v30 - v25;
          v33 = (v27 - v107) * v23;
          v106 = (v26 * v54) + v106;
          v34 = v29 + (v32 * v23);
          v35 = v11->m_orientation;
          v36 = ((((v21 - v24) * v13->x) + v11->m_vPosition.z) + (v31 * v18)) + v33;
          v37 = _mm_shuffle_ps(v35, v35, 85).m128_f32[0];
          v38 = _mm_sub_ps(v35, v28);
          v39 = _mm_add_ps(v35, v28);
          v40 = _mm_mul_ps(v38, v38);
          v41 = _mm_mul_ps(v39, v39);
          v42 = _mm_add_ps(_mm_shuffle_ps(v40, v40, 177), v40);
          v43 = _mm_add_ps(_mm_shuffle_ps(v41, v41, 177), v41);
          v44 = _mm_xor_ps(
                  _mm_and_ps(
                    _mm_xor_ps(_mm_sub_ps(Four_Zeros, v28), v28),
                    _mm_cmplt_ps(
                      _mm_add_ps(_mm_shuffle_ps(v43, v43, 78), v43),
                      _mm_add_ps(_mm_shuffle_ps(v42, v42, 78), v42))),
                  v28);
          v43.m128_f32[0] = _mm_shuffle_ps(v44, v44, 255).m128_f32[0];
          v42.m128_f32[0] = _mm_unpackhi_ps(v44, v44).m128_f32[0];
          v28.m128_f32[0] = _mm_unpackhi_ps(v35, v35).m128_f32[0];
          v45 = _mm_shuffle_ps(v44, v44, 85).m128_f32[0];
          v46 = _mm_shuffle_ps(v35, v35, 255).m128_f32[0];
          v47 = -v35.m128_f32[0];
          v8.m128_f32[0] = (((v35.m128_f32[0] * v43.m128_f32[0]) + (v37 * v42.m128_f32[0])) - (v28.m128_f32[0] * v45))
                         + (v46 * v44.m128_f32[0]);
          v48 = v8;
          v49 = _mm_unpacklo_ps(v8, v8);
          v49.m128_f32[0] = (((v42.m128_f32[0] * -v35.m128_f32[0]) + (v43.m128_f32[0] * v37))
                           + (v28.m128_f32[0] * v44.m128_f32[0]))
                          + (v45 * v46);
          v50 = _mm_shuffle_ps(v49, v48, 225);
          v35.m128_f32[0] = (((v35.m128_f32[0] * v45) - (v37 * v44.m128_f32[0])) + (v43.m128_f32[0] * v28.m128_f32[0]))
                          + (v42.m128_f32[0] * v46);
          v51 = v50;
          v44.m128_f32[0] = (((v44.m128_f32[0] * v47) - (v45 * v37)) - (v28.m128_f32[0] * v42.m128_f32[0]))
                          + (v46 * v43.m128_f32[0]);
          v51.m128_f32[0] = v35.m128_f32[0];
          v52 = _mm_shuffle_ps(v50, v51, 196);
          v53 = v52;
          v53.m128_f32[0] = v44.m128_f32[0];
          v8 = _mm_shuffle_ps(v52, v53, 36);
          pQuaternions[v9] = v8;
          v105 = (v34 * v54) + v105;
          v104 = (v36 * v54) + v104;
LABEL_5:
          v9 = ++v10;
          if ( nInfluences <= v10 )
            goto LABEL_10;
        }
      }
    }
    v104 = 0.0;
    v105 = 0.0;
    v106 = 0.0;
LABEL_10:
    QuaternionAverageExponential(&vBlendedOrientation, nInfluences, pQuaternions, pWeights);
    pAttachmentWorldTransformOut->m_vPosition.w = 0.0;
    pAttachmentWorldTransformOut->m_vPosition.x = v106;
    pAttachmentWorldTransformOut->m_vPosition.y = v105;
    pAttachmentWorldTransformOut->m_vPosition.z = v104;
    pAttachmentWorldTransformOut->m_orientation = vBlendedOrientation;
  }
  else
  {
    v95 = rootTransform->m_vPosition.y;
    v96 = rootTransform->m_vPosition.z;
    pAttachmentWorldTransformOut->m_vPosition.x = rootTransform->m_vPosition.x;
    pAttachmentWorldTransformOut->m_vPosition.y = v95;
    pAttachmentWorldTransformOut->m_vPosition.z = v96;
    w = rootTransform->m_orientation.w;
    v98 = rootTransform->m_orientation.y;
    v99 = rootTransform->m_orientation.x;
    pAttachmentWorldTransformOut->m_orientation.z = rootTransform->m_orientation.z;
    pAttachmentWorldTransformOut->m_orientation.y = v98;
    pAttachmentWorldTransformOut->m_orientation.x = v99;
    pAttachmentWorldTransformOut->m_orientation.w = w;
  }
}


// CModel::SetupAttachment  (line 2119, @0x000000000313efe0, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, AndSIMD<(ESIMDLevel)20u>, CmpGtSIMD<(ESIMDLevel)20u>, Dot4SIMD<(ESIMDLevel)20u>, ExtractFloat<0, (ESIMDLevel)20u>, ExtractFloat<1, (ESIMDLevel)20u>, ExtractFloat<2, (ESIMDLevel)20u>, ExtractFloat<3, (ESIMDLevel)20u>, Init, InsertFloat<0, (ESIMDLevel)20u>, InsertFloat<1, (ESIMDLevel)20u>, InsertFloat<2, (ESIMDLevel)20u>, InsertFloat<3, (ESIMDLevel)20u>, LoadUnalignedSIMD<(ESIMDLevel)20u>, LoadZeroSIMD<(ESIMDLevel)20u>, MaskedAssign<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, NegSIMD<(ESIMDLevel)20u>, QuaternionAlignSIMD<(ESIMDLevel)20u>, QuaternionMult, QuaternionMultSIMD<(ESIMDLevel)20u>, RotateLeft2<(ESIMDLevel)20u>, SubSIMD<(ESIMDLevel)20u>, Vector, VectorMultiply, VectorTransform, XorSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_and_ps, _mm_cmpgt_ps, _mm_loadu_ps, _mm_mul_ps, _mm_shuffle_ps, _mm_sub_ps, _mm_xor_ps, operator*, operator+=, operator=
// calls: MatrixAngles, VectorTransform, QuaternionAverageExponential, QuaternionMatrix
// callers: CModel::SetupAttachment
void __fastcall CModel::SetupAttachment(
        int nInfluences,
        const int32 *pInfluenceIndices,
        const float *pInfluenceWeights,
        const Vector *pInfluenceOffsets,
        const Quaternion *pInfluenceRotations,
        const matrix3x4a_t *pSimWorldTransformsIn,
        const matrix3x4a_t *const rootTransform,
        matrix3x4a_t *pAttachmentWorldTransformOut)
{
  __m128 v8; // xmm0
  __m128 v9; // xmm7
  int v12; // r9d
  unsigned __int8 i; // r12
  __int64 v14; // r15
  __m128 v15; // xmm0
  Quaternion *v16; // r9
  Quaternion v17; // xmm3
  __m128 v18; // xmm5
  __m128 v19; // xmm4
  __m128 v20; // xmm1
  float v21; // xmm11_4
  __m128 v22; // xmm4
  __m128 v23; // xmm1
  __m128 v24; // xmm6
  __m128 v25; // xmm8
  __m128 v26; // xmm6
  __m128 v27; // xmm4
  __m128 v28; // xmm1
  float v29; // xmm9_4
  float v30; // xmm10_4
  __m128 v31; // xmm13
  __m128 v32; // xmm0
  __m128 v33; // xmm0
  __m128 v34; // xmm7
  __m128 v35; // xmm0
  __m128 v36; // xmm7
  float v37; // xmm2_4
  __int64 v38; // rdx
  Quaternion *v39; // r9
  float y; // xmm1_4
  vec_t v41; // xmm1_4
  vec_t v42; // xmm2_4
  __int64 v43; // r15
  __m128 v44; // xmm7
  Quaternion *v45; // r9
  Quaternion v46; // xmm3
  __m128 v47; // xmm5
  __m128 v48; // xmm4
  __m128 v49; // xmm1
  float v50; // xmm11_4
  __m128 v51; // xmm4
  __m128 v52; // xmm1
  __m128 v53; // xmm6
  __m128 v54; // xmm8
  __m128 v55; // xmm6
  __m128 v56; // xmm4
  __m128 v57; // xmm1
  float v58; // xmm9_4
  float v59; // xmm10_4
  __m128 v60; // xmm13
  __m128 v61; // xmm7
  __m128 v62; // xmm7
  __m128 v63; // xmm0
  __m128 v64; // xmm7
  __m128 v65; // xmm0
  __m128 v69; // [rsp+30h] [rbp-130h]
  __m128 v70; // [rsp+40h] [rbp-120h]
  __m128 v71; // [rsp+40h] [rbp-120h]
  float flWeight; // [rsp+50h] [rbp-110h]
  __m128 flWeighta; // [rsp+50h] [rbp-110h]
  float v74; // [rsp+68h] [rbp-F8h]
  const matrix3x4a_t *in2; // [rsp+80h] [rbp-E0h]
  Vector vBlendedPos; // [rsp+90h] [rbp-D0h] BYREF
  Vector vBlendedScale; // [rsp+A0h] [rbp-C0h] BYREF
  float pWeights[4]; // [rsp+B0h] [rbp-B0h] BYREF
  Vector vPos; // [rsp+C0h] [rbp-A0h] BYREF
  Vector vScale; // [rsp+D0h] [rbp-90h] BYREF
  Quaternion qRot; // [rsp+E0h] [rbp-80h] BYREF
  Vector vLocalPos; // [rsp+F0h] [rbp-70h] BYREF
  Quaternion pQuaternions[3]; // [rsp+100h] [rbp-60h] BYREF

  vBlendedPos.x = 0.0;
  vBlendedPos.y = 0.0;
  vBlendedPos.z = 0.0;
  vBlendedScale.x = 0.0;
  vBlendedScale.y = 0.0;
  vBlendedScale.z = 0.0;
  if ( nInfluences > 0 )
  {
    v12 = 0;
    for ( i = 0; i < nInfluences; v12 = ++i )
    {
      v37 = pInfluenceWeights[i];
      pWeights[v12] = v37;
      v38 = pInfluenceIndices[i];
      if ( v38 == -2 )
      {
        v43 = v12;
        v71 = v8;
        flWeighta = v9;
        v74 = v37;
        MatrixAngles(rootTransform, &qRot, &vPos, &vScale);
        VectorTransform(&pInfluenceOffsets[i].x, rootTransform, &vLocalPos.x);
        v44 = flWeighta;
        v45 = &pQuaternions[v43];
        v46 = qRot;
        v47 = pInfluenceRotations[i];
        v48 = _mm_sub_ps(qRot, v47);
        v49 = _mm_add_ps(qRot, v47);
        v50 = _mm_shuffle_ps(v46, v46, 85).m128_f32[0];
        v51 = _mm_mul_ps(v48, v48);
        v52 = _mm_mul_ps(v49, v49);
        v53 = _mm_add_ps(_mm_shuffle_ps(v51, v51, 177), v51);
        v54 = _mm_add_ps(_mm_shuffle_ps(v53, v53, 78), v53);
        v55 = _mm_add_ps(_mm_shuffle_ps(v52, v52, 177), v52);
        v56 = _mm_cmplt_ps(_mm_add_ps(_mm_shuffle_ps(v55, v55, 78), v55), v54);
        v54.m128_f32[0] = _mm_unpackhi_ps(v46, v46).m128_f32[0];
        v57 = _mm_xor_ps(_mm_and_ps(_mm_xor_ps(_mm_sub_ps(Four_Zeros, v47), v47), v56), v47);
        v55.m128_f32[0] = _mm_shuffle_ps(v57, v57, 255).m128_f32[0];
        v58 = _mm_unpackhi_ps(v57, v57).m128_f32[0];
        v46.x = _mm_shuffle_ps(v46, v46, 255).m128_f32[0];
        v59 = _mm_shuffle_ps(v57, v57, 85).m128_f32[0];
        v44.m128_f32[0] = (((qRot.x * v55.m128_f32[0]) + (v50 * v58)) - (v54.m128_f32[0] * v59))
                        + (v46.x * v57.m128_f32[0]);
        v60 = v44;
        v61 = _mm_unpacklo_ps(v44, v44);
        v61.m128_f32[0] = (((v58 * -qRot.x) + (v55.m128_f32[0] * v50)) + (v54.m128_f32[0] * v57.m128_f32[0]))
                        + (v59 * v46.x);
        v62 = _mm_shuffle_ps(v61, v60, 225);
        v63 = v62;
        v63.m128_f32[0] = (((qRot.x * v59) - (v50 * v57.m128_f32[0])) + (v55.m128_f32[0] * v54.m128_f32[0]))
                        + (v58 * v46.x);
        v64 = _mm_shuffle_ps(v62, v63, 196);
        v65 = v64;
        v65.m128_f32[0] = (((v57.m128_f32[0] * -qRot.x) - (v59 * v50)) - (v54.m128_f32[0] * v58))
                        + (v46.x * v55.m128_f32[0]);
        v9 = _mm_shuffle_ps(v64, v65, 36);
        v57.m128_f32[0] = (vLocalPos.z * v74) + vBlendedPos.z;
        LODWORD(v45->x) = v9.m128_i32[0];
        LODWORD(vBlendedPos.z) = v57.m128_i32[0];
        v57.m128_i32[0] = LODWORD(vScale.z);
        LODWORD(v45->y) = v9.m128_i32[1];
        v56.m128_f32[0] = vLocalPos.x * v74;
        LODWORD(v45->z) = v9.m128_i32[2];
        v46.x = vLocalPos.y * v74;
        v56.m128_f32[0] = v56.m128_f32[0] + vBlendedPos.x;
        LODWORD(v45->w) = v9.m128_i32[3];
        LODWORD(vBlendedPos.x) = v56.m128_i32[0];
        vBlendedPos.y = v46.x + vBlendedPos.y;
        vBlendedScale.x = (v74 * vScale.x) + vBlendedScale.x;
        vBlendedScale.y = (vScale.y * v74) + vBlendedScale.y;
        v8 = v71;
        vBlendedScale.z = (v57.m128_f32[0] * v74) + vBlendedScale.z;
      }
      else if ( v38 == -1 )
      {
        v39 = &pQuaternions[v12];
        vBlendedScale.x = vBlendedScale.x + v37;
        y = vBlendedScale.y;
        v39->x = 0.0;
        v41 = y + v37;
        v39->y = 0.0;
        v42 = v37 + vBlendedScale.z;
        v39->z = 0.0;
        v39->w = 1.0;
        vBlendedScale.y = v41;
        vBlendedScale.z = v42;
      }
      else
      {
        v14 = v12;
        v69 = v8;
        v70 = v9;
        flWeight = v37;
        in2 = &pSimWorldTransformsIn[v38];
        MatrixAngles(in2, &qRot, &vPos, &vScale);
        VectorTransform(&pInfluenceOffsets[i].x, in2, &vLocalPos.x);
        v15 = v69;
        v16 = &pQuaternions[v14];
        v17 = qRot;
        v18 = pInfluenceRotations[i];
        v19 = _mm_sub_ps(qRot, v18);
        v20 = _mm_add_ps(qRot, v18);
        v21 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
        v22 = _mm_mul_ps(v19, v19);
        v23 = _mm_mul_ps(v20, v20);
        v24 = _mm_add_ps(_mm_shuffle_ps(v22, v22, 177), v22);
        v25 = _mm_add_ps(_mm_shuffle_ps(v24, v24, 78), v24);
        v26 = _mm_add_ps(_mm_shuffle_ps(v23, v23, 177), v23);
        v27 = _mm_cmplt_ps(_mm_add_ps(_mm_shuffle_ps(v26, v26, 78), v26), v25);
        v25.m128_f32[0] = _mm_unpackhi_ps(v17, v17).m128_f32[0];
        v28 = _mm_xor_ps(_mm_and_ps(_mm_xor_ps(_mm_sub_ps(Four_Zeros, v18), v18), v27), v18);
        v26.m128_f32[0] = _mm_shuffle_ps(v28, v28, 255).m128_f32[0];
        v29 = _mm_unpackhi_ps(v28, v28).m128_f32[0];
        v17.x = _mm_shuffle_ps(v17, v17, 255).m128_f32[0];
        v30 = _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
        v15.m128_f32[0] = (((qRot.x * v26.m128_f32[0]) + (v21 * v29)) - (v25.m128_f32[0] * v30))
                        + (v17.x * v28.m128_f32[0]);
        v31 = v15;
        v32 = _mm_unpacklo_ps(v15, v15);
        v32.m128_f32[0] = (((v29 * -qRot.x) + (v26.m128_f32[0] * v21)) + (v25.m128_f32[0] * v28.m128_f32[0]))
                        + (v30 * v17.x);
        v33 = _mm_shuffle_ps(v32, v31, 225);
        v34 = v33;
        v34.m128_f32[0] = (((qRot.x * v30) - (v21 * v28.m128_f32[0])) + (v26.m128_f32[0] * v25.m128_f32[0]))
                        + (v29 * v17.x);
        v35 = _mm_shuffle_ps(v33, v34, 196);
        v36 = v35;
        v36.m128_f32[0] = (((v28.m128_f32[0] * -qRot.x) - (v30 * v21)) - (v25.m128_f32[0] * v29))
                        + (v17.x * v26.m128_f32[0]);
        v8 = _mm_shuffle_ps(v35, v36, 36);
        v28.m128_f32[0] = (vLocalPos.z * flWeight) + vBlendedPos.z;
        LODWORD(v16->x) = v8.m128_i32[0];
        LODWORD(vBlendedPos.z) = v28.m128_i32[0];
        v28.m128_i32[0] = LODWORD(vScale.z);
        LODWORD(v16->y) = v8.m128_i32[1];
        v27.m128_f32[0] = vLocalPos.x * flWeight;
        LODWORD(v16->z) = v8.m128_i32[2];
        v17.x = vLocalPos.y * flWeight;
        v27.m128_f32[0] = v27.m128_f32[0] + vBlendedPos.x;
        LODWORD(v16->w) = v8.m128_i32[3];
        LODWORD(vBlendedPos.x) = v27.m128_i32[0];
        vBlendedPos.y = v17.x + vBlendedPos.y;
        vBlendedScale.x = (flWeight * vScale.x) + vBlendedScale.x;
        vBlendedScale.y = (vScale.y * flWeight) + vBlendedScale.y;
        v9 = v70;
        vBlendedScale.z = (v28.m128_f32[0] * flWeight) + vBlendedScale.z;
      }
    }
  }
  QuaternionAverageExponential(&vLocalPos, nInfluences, pQuaternions, pWeights);
  QuaternionMatrix(&vLocalPos, &vBlendedPos, &vBlendedScale, pAttachmentWorldTransformOut);
}


// CModel::SetupAttachment  (line 2119, @0x0000000003143920, libserver.so)
// calls: CModel::SetupAttachment
// callers: CModel::SetupAttachments, CModel::SetupAttachmentTransform
void __fastcall CModel::SetupAttachment(
        int nInfluences,
        const int32 *pInfluenceIndices,
        const float *pInfluenceWeights,
        const Vector *pInfluenceOffsets,
        const Quaternion *pInfluenceRotations,
        const matrix3x4a_t *pSimWorldTransformsIn,
        const matrix3x4a_t *const rootTransform,
        matrix3x4a_t *pAttachmentWorldTransformOut)
{
  if ( nInfluences != 0 )
    CModel::SetupAttachment(
      nInfluences,
      pInfluenceIndices,
      pInfluenceWeights,
      pInfluenceOffsets,
      pInfluenceRotations,
      pSimWorldTransformsIn,
      rootTransform,
      pAttachmentWorldTransformOut);
  else
    *pAttachmentWorldTransformOut = *rootTransform;
}


// CModel::GetNumProceduralBones  (line 2189, @0x0000000003143aa0, libserver.so)
// calls: CModel::GetMeshData
// callers: CModelState::UpdateModelCachedValues
int __fastcall CModel::GetNumProceduralBones(const CModel *const this)
{
  int result; // eax

  result = 0;
  if ( this->m_refMeshes.m_Size > 0 )
    return CModel::GetMeshData(this, 0)->m_constraints.m_Size;
  return result;
}


// CModel::GetProceduralBone  (line 2202, @0x0000000003143ac0, libserver.so)  // inlines: IsValidIndex
// calls: CModel::GetMeshData
const CBaseConstraint *__fastcall CModel::GetProceduralBone(const CModel *const this, int nProceduralBoneIndex)
{
  __int64 v2; // rbx
  const CRenderMesh *MeshData; // rdx
  const CBaseConstraint *result; // rax

  v2 = nProceduralBoneIndex;
  if ( this->m_refMeshes.m_Size <= 0 )
    return 0;
  MeshData = CModel::GetMeshData(this, 0);
  result = 0;
  if ( v2 >= 0 && v2 < MeshData->m_constraints.m_Size )
    return MeshData->m_constraints.m_Memory.m_pMemory[v2];
  return result;
}


// CModel::GetMeshToolsGeometryInfo  (line 2218, @0x0000000003143b00, libserver.so)
// calls: CModel::GetMeshData
void __fastcall CModel::GetMeshToolsGeometryInfo(
        const CModel *const this,
        int iMesh,
        const CUtlVector<TraceDataForDraw_t,CUtlMemory<TraceDataForDraw_t,int> > **ppOutTraceData)
{
  IMeshSystem *v4; // rbx
  const CRenderMesh *MeshData; // rax

  v4 = g_pMeshSystem;
  MeshData = CModel::GetMeshData(this, iMesh);
  (*(*v4 + 280LL))(v4, MeshData, ppOutTraceData);
}


// CModel::ComputeMaxLODLevelUsedByModel  (line 2224, @0x0000000003143b40, libserver.so)
int __fastcall CModel::ComputeMaxLODLevelUsedByModel(const CModel *const this)
{
  int result; // eax
  int m_Size; // r8d
  __int64 v3; // rax
  int v4; // esi
  unsigned __int8 v5; // cl
  unsigned __int8 v6; // dl
  int v7; // esi
  int i; // ecx

  result = -1;
  m_Size = this->m_refLODGroupMasks.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = this->m_refLODGroupMasks.m_Memory.m_pMemory[v3];
      v4 += v6 == 0xFF;
      if ( v5 < v6 )
        v5 = this->m_refLODGroupMasks.m_Memory.m_pMemory[v3];
      ++v3;
    }
    while ( m_Size > v3 );
    if ( v5 == 0 || v4 == m_Size )
    {
      return -1;
    }
    else
    {
      v7 = v5;
      result = -1;
      for ( i = 0; i != 8; ++i )
      {
        if ( ((v7 >> i) & 1) != 0 )
          result = i;
      }
    }
  }
  return result;
}


// CModel::LODLevelForScreenSize  (line 2253, @0x0000000003143bc0, libserver.so)
float __fastcall CModel::LODLevelForScreenSize(const CModel *const this, float result, float flScreenWidthInPixels)
{
  float v3; // xmm2_4
  int v4; // eax
  float *v5; // rdx

  v3 = 0.0;
  if ( result > 0.0 )
    v3 = 50.0 / result;
  v4 = this->m_lodGroupSwitchDistances.m_Size - 1;
  if ( v4 < 0 )
    v4 = 0;
  if ( v4 != 0 )
  {
    v5 = &this->m_lodGroupSwitchDistances.m_Memory.m_pMemory[v4];
    do
    {
      result = *v5;
      if ( *v5 > 0.0 && v3 > result )
        break;
      --v5;
      --v4;
    }
    while ( v4 != 0 );
  }
  return result;
}


// CModel::GetLODMaskForMesh  (line 2275, @0x0000000003143c20, libserver.so)  // inlines: operator[]
LODGroupMask_t __fastcall CModel::GetLODMaskForMesh(const CModel *const this, int nMesh)
{
  return this->m_refLODGroupMasks.m_Memory.m_pMemory[nMesh];
}


// CModel::GetNumExtParts  (line 2280, @0x0000000003143c40, libserver.so)
// callers: CreatePiecesFromBreakModelList
int __fastcall CModel::GetNumExtParts(const CModel *const this)
{
  return this->m_ExtParts.m_Size;
}


// CModel::GetExtPartTransform  (line 2285, @0x0000000003143c50, libserver.so)  // inlines: operator[]
// callers: CreatePiecesFromBreakModelList
CTransform *__fastcall CModel::GetExtPartTransform(
        CTransform *__return_ptr retstr,
        const CModel *const this,
        int iPart)
{
  CModelExtPart *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx

  v4 = &this->m_ExtParts.m_Memory.m_pMemory[iPart];
  retstr->m_vPosition = v4->m_Transform.m_vPosition;
  v5 = *&v4->m_Transform.m_orientation.x;
  v6 = *&v4->m_Transform.m_orientation.z;
  *&retstr->m_orientation.x = v5;
  *&retstr->m_orientation.z = v6;
  return retstr;
}


// CModel::GetExtPartName  (line 2290, @0x0000000003143c90, libserver.so)  // inlines: operator[]
// calls: CUtlString::Get
const char *__fastcall CModel::GetExtPartName(const CModel *const this, int iPart)
{
  return CUtlString::Get(&this->m_ExtParts.m_Memory.m_pMemory[iPart].m_Name);
}


// CModel::GetExtPartParent  (line 2295, @0x0000000003143cb0, libserver.so)  // inlines: operator[]
int __fastcall CModel::GetExtPartParent(const CModel *const this, int iPart)
{
  return this->m_ExtParts.m_Memory.m_pMemory[iPart].m_nParent;
}


// CModel::GetExtPartModel  (line 2300, @0x0000000003143cd0, libserver.so)  // inlines: FromUntypedHandleUnchecked, GetHandle, InitUntypedUnchecked, operator[]
// callers: CreatePiecesFromBreakModelList
HModel __fastcall CModel::GetExtPartModel(const ResourceBindingBase_t **a1, const CModel *const this, int iPart)
{
  *a1 = this->m_ExtParts.m_Memory.m_pMemory[iPart].m_refModel.m_pBinding;
  return a1;
}


// GetWeight  (line 2305, @0x0000000003143cf0, libserver.so)
float __fastcall GetWeight(uint nJoint, const TraceVertex_t *const tv)
{
  float result; // xmm0_4
  __int64 v3; // rax

  if ( tv->m_nBoneIndices[0] == nJoint )
  {
    v3 = 0;
    return tv->m_flBoneWeights[v3];
  }
  if ( tv->m_nBoneIndices[1] == nJoint )
  {
    v3 = 1;
    return tv->m_flBoneWeights[v3];
  }
  if ( tv->m_nBoneIndices[2] == nJoint )
  {
    v3 = 2;
    return tv->m_flBoneWeights[v3];
  }
  result = 0.0;
  v3 = 3;
  if ( tv->m_nBoneIndices[3] == nJoint )
    return tv->m_flBoneWeights[v3];
  return result;
}


// GetWeight  (line 2318, @0x0000000003143d40, libserver.so)  // inlines: BitVec_IsBitSet, IsBitSet
float __fastcall GetWeight(const CVarBitVec *const joints, const TraceVertex_t *const tv)
{
  __int64 v2; // rax
  float result; // xmm0_4

  v2 = 0;
  result = 0.0;
  do
  {
    if ( ((1 << tv->m_nBoneIndices[v2]) & joints->m_pInt[tv->m_nBoneIndices[v2] >> 5]) != 0 )
      result = result + tv->m_flBoneWeights[v2];
    ++v2;
  }
  while ( v2 != 4 );
  return result;
}


