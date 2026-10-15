
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRagdollLowViolenceManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 48, @0x000000000235fa40, libserver.so)
void __cdecl CRagdollLowViolenceManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CRagdollLowViolenceManager::ActiveSpawnGroupChanged  (line 50, @0x000000000234cd00, libserver.so)  // inlines: GetBool, GetInt, operator char const*
// calls: UTIL_IsLowViolence, CUtlString::Get, V_stricmp_fast
// strings: "ep1_citadel_02", "d3_citadel_03", "d3_citadel_04", "d3_citadel_05", "d3_breen_01", "ep1_citadel_02b" (7 total)
void __fastcall CRagdollLowViolenceManager::ActiveSpawnGroupChanged(
        CRagdollLowViolenceManager *const this,
        const EventActiveSpawnGroupChanged_t *const msg)
{
  const char *v4; // r12

  this->m_bLowViolence = UTIL_IsLowViolence();
  if ( g_pGameRules != 0 && (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) != 0 )
    this->m_bLowViolence = 0;
  v4 = CUtlString::Get(&msg->m_SpawnGroupName);
  if ( hl2_episodic.m_pParent->m_Value.m_nValue != 0 )
  {
    if ( V_stricmp_fast(v4, "ep1_citadel_02") != 0
      && V_stricmp_fast(v4, "ep1_citadel_02b") != 0
      && V_stricmp_fast(v4, "ep1_citadel_03") != 0 )
    {
      return;
    }
LABEL_6:
    this->m_bLowViolence = 0;
    return;
  }
  if ( V_stricmp_fast(v4, "d3_citadel_03") == 0
    || V_stricmp_fast(v4, "d3_citadel_04") == 0
    || V_stricmp_fast(v4, "d3_citadel_05") == 0
    || V_stricmp_fast(v4, "d3_breen_01") == 0 )
  {
    goto LABEL_6;
  }
}


// RagdollBuildParentIndices  (line 141, @0x000000000236e320, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, RemoveAll, operator[]
// calls: CUtlMemory<int, int>::Grow
void __fastcall RagdollBuildParentIndices(
        CSkeletonInstance *pSkeletonInstance,
        CUtlVector<int,CUtlMemory<int,int> > *const parentIndices)
{
  IPhysAggregateInstance *m_pVPhysicsAggregate; // rbx
  int v4; // r15d
  __int64 v5; // rax
  __int64 v6; // rbx
  int *v7; // rdx
  __int64 m_Size; // r13
  int v9; // r14d
  int *v10; // rdx
  int v11; // edx
  __int64 v12; // [rsp+0h] [rbp-40h]
  __int64 v13; // [rsp+0h] [rbp-40h]
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-38h]

  parentIndices->m_Size = 0;
  m_pVPhysicsAggregate = pSkeletonInstance->m_modelState.m_pVPhysicsAggregate;
  if ( m_pVPhysicsAggregate != 0 )
  {
    v4 = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 9))(pSkeletonInstance->m_modelState.m_pVPhysicsAggregate);
    v5 = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 41))(m_pVPhysicsAggregate);
    if ( v4 > 0 )
    {
      v6 = 0;
      p_m_Memory = &parentIndices->m_Memory;
      while ( 1 )
      {
        m_Size = parentIndices->m_Size;
        v9 = *(*(v5 + 72) + 2 * v6);
        v11 = parentIndices->m_Size;
        if ( v9 != v6 )
          break;
        if ( m_Size == parentIndices->m_Memory.m_nAllocationCount )
        {
          v13 = v5;
          CUtlMemory<int,int>::Grow(p_m_Memory, 1);
          v11 = parentIndices->m_Size;
          v5 = v13;
        }
        parentIndices->m_Size = v11 + 1;
        v10 = &parentIndices->m_Memory.m_pMemory[m_Size];
        if ( v10 != 0 )
        {
          ++v6;
          *v10 = -1;
          if ( v4 <= v6 )
            return;
        }
        else
        {
LABEL_8:
          if ( v4 <= ++v6 )
            return;
        }
      }
      if ( m_Size == parentIndices->m_Memory.m_nAllocationCount )
      {
        v12 = v5;
        CUtlMemory<int,int>::Grow(p_m_Memory, 1);
        v11 = parentIndices->m_Size;
        v5 = v12;
      }
      parentIndices->m_Size = v11 + 1;
      v7 = &parentIndices->m_Memory.m_pMemory[m_Size];
      if ( v7 != 0 )
        *v7 = v9;
      goto LABEL_8;
    }
  }
}


// RagdollActivate  (line 172, @0x000000000235fa50, libserver.so)
// calls: PhysSetGameFlags
// callers: CRagdollProp::ApplyActivationRecord, CRagdollPropAttached::ApplyAttachedActivationRecord
void __fastcall RagdollActivate(ragdoll_t *const ragdoll, HModel modelIndex, bool bForceWake)
{
  int v5; // r12d
  IPhysicsObject **p_pObject; // rbx
  IPhysicsObject *v7; // rdi

  v5 = 0;
  p_pObject = &ragdoll->list[0].pObject;
  while ( ragdoll->listCount > v5 )
  {
    while ( 1 )
    {
      if ( *p_pObject != 0 )
      {
        PhysSetGameFlags(*p_pObject, 0x10u);
        if ( bForceWake )
          break;
      }
      ++v5;
      p_pObject += 5;
      if ( ragdoll->listCount <= v5 )
        return;
    }
    v7 = *p_pObject;
    ++v5;
    p_pObject += 5;
    (*(*v7 + 1592LL))(v7);
  }
}


// RagdollInit  (line 188, @0x000000000235fac0, libserver.so)  // inlines: GetBoneHash, GetModelData, LengthSqr, RagdollInitObjects, VectorITransform, VectorMultiply, memset, operator const RuntimeClass_t*, operator!=, operator*, operator=, operator[]
// calls: memset, CModel::MasterSkeleton, VectorITransform, CModelSkeleton::FindBoneIndexByHash, CModelSkeleton::GetPosParentSpace, Warning
// callers: CRagdollProp::OnRestore, CRagdollProp::ApplyActivationRecord
// strings: "Ragdoll with %d bones, Source1 legacy code will only see %d\n", "Ragdoll_Prop with %d bones != %d shapes\n"
bool __fastcall RagdollInit(
        ragdoll_t *const ragdoll,
        const ragdollparams_t *const params,
        CSkeletonInstance *pSkeletonInstance)
{
  ragdoll_t *v3; // r14
  int v5; // eax
  vec_t *p_x; // r12
  __int64 v7; // r13
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // rdi
  const CModelSkeleton *v10; // rax
  int v11; // ebx
  int listCount; // edx
  __int64 v13; // r15
  ragdollelement_t *i; // rbx
  __int64 v15; // rsi
  vec_t *v16; // rdx
  vec_t v17; // xmm1_4
  vec_t v18; // xmm0_4
  __int64 v19; // rax
  __int64 v20; // r14
  int BoneIndexByHash; // eax
  const matrix3x4_t *pCurrentBones; // rsi
  __int64 v23; // rdi
  int forceBoneIndex; // r12d
  char *v25; // rbx
  __int64 v26; // rdi
  vec_t v27; // xmm1_4
  bool v28; // zf
  IPhysicsObject **p_pObject; // r13
  int v30; // ebx
  IPhysicsObject *v31; // rdi
  ragdoll_t *v32; // r15
  int v33; // ebx
  IPhysicsObject *pObject; // rdi
  float v35; // xmm0_4
  IPhysicsObject *v36; // rdi
  float v37; // xmm0_4
  void (__fastcall *v38)(IPhysicsObject *, Vector *, Vector *); // rax
  IPhysAggregateInstance *m_pVPhysicsAggregate; // [rsp+18h] [rbp-98h]
  CModelSkeleton *v42; // [rsp+28h] [rbp-88h]
  int v43; // [rsp+34h] [rbp-7Ch]
  int v44; // [rsp+40h] [rbp-70h]
  ragdoll_t *totalMass; // [rsp+48h] [rbp-68h]
  float totalMassa; // [rsp+48h] [rbp-68h]
  Vector nudgeForce; // [rsp+50h] [rbp-60h] BYREF
  Vector forcePosition; // [rsp+60h] [rbp-50h] BYREF
  Vector v49[5]; // [rsp+70h] [rbp-40h] BYREF
  Vector PosParentSpace; // 0:kr00_12.12

  v3 = ragdoll;
  m_pVPhysicsAggregate = pSkeletonInstance->m_modelState.m_pVPhysicsAggregate;
  v5 = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 9))(ragdoll);
  v3->listCount = v5;
  if ( v5 > 32 )
  {
    Warning("Ragdoll with %d bones, Source1 legacy code will only see %d\n", v5, 32);
    v3->listCount = 32;
  }
  p_x = &v3->list[0].originParentSpace.x;
  v3->allowStretch = params->allowStretch;
  memset(v3->list, 0, sizeof(v3->list));
  v7 = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 41))(m_pVPhysicsAggregate);
  m_pBinding = pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    m_pData = m_pBinding->m_pData;
  else
    m_pData = 0;
  v10 = CModel::MasterSkeleton(m_pData);
  v11 = *(v7 + 32);
  listCount = v3->listCount;
  v42 = v10;
  if ( v11 < v3->listCount )
  {
    Warning("Ragdoll_Prop with %d bones != %d shapes\n", v11, listCount);
    v3->listCount = v11;
    listCount = v11;
  }
  if ( listCount > 0 )
  {
    v13 = 0;
    totalMass = v3;
    for ( i = &v3->list[1]; ; ++i )
    {
      v19 = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 10))(m_pVPhysicsAggregate, v13);
      i[-1].pObject = v19;
      v20 = v19;
      BoneIndexByHash = CModelSkeleton::FindBoneIndexByHash(v42, *(*(v7 + 24) + 4 * v13));
      totalMass->boneIndex[v13] = BoneIndexByHash;
      pCurrentBones = params->pCurrentBones;
      if ( pCurrentBones != 0 )
      {
        v43 = BoneIndexByHash;
        (*(*i[-1].pObject + 1672LL))(i[-1].pObject, &pCurrentBones[BoneIndexByHash], 1);
        BoneIndexByHash = v43;
      }
      v23 = *(*(v7 + 72) + 2 * v13);
      if ( v13 == v23 )
      {
        PosParentSpace = CModelSkeleton::GetPosParentSpace(v42, BoneIndexByHash);
        *&v49[0].x = *&PosParentSpace.x;
        p_x[2] = PosParentSpace.z;
        v49[0].z = PosParentSpace.z;
        *p_x = PosParentSpace.x;
        p_x[1] = v49[0].y;
        i[-1].parentIndex = -1;
      }
      else
      {
        v15 = *(v7 + 88);
        v44 = v23;
        v16 = (v15 + 48 * v13);
        v17 = v16[11];
        v18 = v16[3];
        v49[0].y = v16[7];
        v49[0].z = v17;
        v49[0].x = v18;
        VectorITransform(&v49[0].x, (48 * v23 + v15), &forcePosition.x);
        *p_x = forcePosition;
        i[-1].parentIndex = v44;
        i[-1].hConstraint = (*(*v20 + 1152LL))(v20, totalMass->list[v44].pObject);
      }
      ++v13;
      listCount = totalMass->listCount;
      if ( totalMass->listCount <= v13 )
        break;
      p_x = &i->originParentSpace.x;
    }
    v3 = totalMass;
  }
  forceBoneIndex = params->forceBoneIndex;
  nudgeForce = params->forceVector;
  forcePosition = params->forcePosition;
  if ( (((nudgeForce.x * nudgeForce.x) + (nudgeForce.y * nudgeForce.y)) + (nudgeForce.z * nudgeForce.z)) > 0.0 )
  {
    if ( forceBoneIndex >= 0 && listCount > forceBoneIndex && (v25 = v3 + 40 * forceBoneIndex, (v26 = *(v25 + 3)) != 0) )
    {
      (*(*v26 + 1776LL))(v26, &nudgeForce);
      *&v49[0].x = (*(**(v25 + 3) + 368LL))(*(v25 + 3));
      v49[0].z = v27;
      forcePosition = v49[0];
      v28 = v49[0].x == vec3_origin.x;
    }
    else
    {
      v28 = forcePosition.x == vec3_origin.x;
    }
    if ( (!v28 || vec3_origin.y != forcePosition.y || vec3_origin.z != forcePosition.z) && v3->listCount > 0 )
    {
      p_pObject = &v3->list[0].pObject;
      v30 = 0;
      totalMassa = 0.0;
      do
      {
        v31 = *p_pObject;
        ++v30;
        p_pObject += 5;
        totalMassa = (*(*v31 + 208LL))(v31) + totalMassa;
      }
      while ( v3->listCount > v30 );
      if ( v3->listCount > 0 )
      {
        v32 = v3;
        v33 = 0;
        do
        {
          if ( forceBoneIndex != v33 )
          {
            pObject = v32->list[0].pObject;
            if ( pObject != 0 )
            {
              v35 = (*(*pObject + 208LL))(pObject);
              v36 = v32->list[0].pObject;
              v37 = v35 / totalMassa;
              v38 = *(*v36 + 1784LL);
              v49[0].y = nudgeForce.y * v37;
              v49[0].x = v37 * nudgeForce.x;
              v49[0].z = nudgeForce.z * v37;
              v38(v36, v49, &forcePosition);
            }
          }
          ++v33;
          v32 = (v32 + 40);
        }
        while ( v3->listCount > v33 );
      }
    }
  }
  return 1;
}


// CalcBoneDerivatives  (line 232, @0x000000000235ff90, libserver.so)  // inlines: MatrixAngles, MatrixPosition, VectorMultiply, VectorScale
// calls: MatrixAngles, RotationDeltaAxisAngle
// callers: RagdollApplyAnimationAsVelocity
void __fastcall CalcBoneDerivatives(
        Vector *const velocity,
        AngularImpulse *const angVel,
        const matrix3x4_t *const prev,
        const matrix3x4_t *const current,
        float dt)
{
  float v9; // xmm1_4
  float v10; // xmm3_4
  vec_t v11; // xmm2_4
  float v12; // xmm1_4
  vec_t v13; // xmm0_4
  vec_t v14; // xmm1_4
  float scale; // [rsp+0h] [rbp-80h]
  float startPosition; // [rsp+4h] [rbp-7Ch]
  float startPosition_4; // [rsp+8h] [rbp-78h]
  float startPosition_8; // [rsp+Ch] [rbp-74h]
  float deltaAngle; // [rsp+1Ch] [rbp-64h] BYREF
  Vector deltaAxis; // [rsp+20h] [rbp-60h] BYREF
  QAngle endAngles; // [rsp+30h] [rbp-50h] BYREF
  QAngle startAngles; // [rsp+40h] [rbp-40h] BYREF

  v9 = 1.0;
  if ( dt > 0.0 )
    v9 = 1.0 / dt;
  scale = v9;
  MatrixAngles(prev, &startAngles);
  startPosition_8 = prev->m_flMatVal[0][3];
  startPosition_4 = prev->m_flMatVal[1][3];
  startPosition = prev->m_flMatVal[2][3];
  MatrixAngles(current, &endAngles);
  v10 = current->m_flMatVal[0][3] - startPosition_8;
  v11 = (current->m_flMatVal[1][3] - startPosition_4) * scale;
  velocity->z = (current->m_flMatVal[2][3] - startPosition) * scale;
  velocity->x = v10 * scale;
  velocity->y = v11;
  RotationDeltaAxisAngle(&startAngles, &endAngles, &deltaAxis, &deltaAngle);
  v12 = scale * deltaAngle;
  angVel->x = deltaAxis.x * (scale * deltaAngle);
  v13 = deltaAxis.y * v12;
  v14 = v12 * deltaAxis.z;
  angVel->y = v13;
  angVel->z = v14;
}


// CalcBoneVelocityFromDerivative  (line 254, @0x00000000023600b0, libserver.so)  // inlines: VectorTransform, operator*=
// calls: MatrixAngles, QuaternionAxisAngle, AngleMatrix, VectorTransform
void __fastcall CalcBoneVelocityFromDerivative(
        const QAngle *const vecAngles,
        Vector *const velocity,
        AngularImpulse *const angVel,
        const matrix3x4_t *const current)
{
  float angle; // [rsp+1Ch] [rbp-94h] BYREF
  Vector vecLocalVelocity; // [rsp+20h] [rbp-90h] BYREF
  AngularImpulse LocalAngVel; // [rsp+30h] [rbp-80h] BYREF
  Quaternion q; // [rsp+40h] [rbp-70h] BYREF
  matrix3x4a_t matAngles; // [rsp+50h] [rbp-60h] BYREF

  MatrixAngles(current, &q, &vecLocalVelocity);
  QuaternionAxisAngle(&q, &LocalAngVel, &angle);
  LocalAngVel.x = LocalAngVel.x * angle;
  LocalAngVel.y = LocalAngVel.y * angle;
  LocalAngVel.z = angle * LocalAngVel.z;
  AngleMatrix(vecAngles, &matAngles);
  VectorTransform(&vecLocalVelocity.x, &matAngles, &velocity->x);
  VectorTransform(&LocalAngVel.x, &matAngles, &angVel->x);
}


// RagdollApplyAnimationAsVelocity  (line 272, @0x0000000002360170, libserver.so)
// calls: CalcBoneDerivatives
// callers: CRagdollProp::ApplyActivationRecord
void __fastcall RagdollApplyAnimationAsVelocity(
        ragdoll_t *const ragdoll,
        const matrix3x4_t *pPrevBones,
        const matrix3x4_t *pCurrentBones,
        float dt)
{
  int v4; // ebx
  int *boneIndex; // r13
  IPhysicsObject **p_pObject; // r12
  IPhysicsObject *v7; // r14
  Vector vVelocity; // [rsp+30h] [rbp-50h] BYREF
  AngularImpulse angVel; // [rsp+40h] [rbp-40h] BYREF

  if ( ragdoll->listCount > 0 )
  {
    v4 = 0;
    boneIndex = ragdoll->boneIndex;
    p_pObject = &ragdoll->list[0].pObject;
    do
    {
      CalcBoneDerivatives(&vVelocity, &angVel, &pPrevBones[*boneIndex], &pCurrentBones[*boneIndex], dt);
      v7 = *p_pObject;
      if ( *p_pObject != 0 )
      {
        (*(*v7 + 552LL))(*p_pObject, &vVelocity);
        (*(*v7 + 1712LL))(v7, &angVel);
      }
      ++v4;
      ++boneIndex;
      p_pObject += 5;
    }
    while ( ragdoll->listCount > v4 );
  }
}


// RagdollApplyAnimationAsVelocity  (line 290, @0x0000000002360240, libserver.so)  // inlines: operator*=, operator=
// calls: MatrixInvert, MatrixAngles, QuaternionAxisAngle
void __fastcall RagdollApplyAnimationAsVelocity(ragdoll_t *const ragdoll, const matrix3x4_t *pBoneToWorld)
{
  int v3; // ebx
  IPhysicsObject **p_pObject; // r12
  IPhysicsObject *v5; // r14
  bool v6; // zf
  float flSpin; // [rsp+4Ch] [rbp-B4h] BYREF
  Vector pos; // [rsp+50h] [rbp-B0h] BYREF
  Vector vVelocity; // [rsp+60h] [rbp-A0h] BYREF
  Vector vLocalVelocity; // [rsp+70h] [rbp-90h] BYREF
  AngularImpulse localAngVelocity; // [rsp+80h] [rbp-80h] BYREF
  Quaternion q; // [rsp+90h] [rbp-70h] BYREF
  matrix3x4_t inverse; // [rsp+A0h] [rbp-60h] BYREF

  if ( ragdoll->listCount > 0 )
  {
    v3 = 0;
    p_pObject = &ragdoll->list[0].pObject;
    do
    {
      MatrixInvert(pBoneToWorld, &inverse);
      MatrixAngles(&inverse, &q, &pos);
      QuaternionAxisAngle(&q, &localAngVelocity, &flSpin);
      v5 = *p_pObject;
      v6 = *p_pObject == 0;
      localAngVelocity.x = localAngVelocity.x * flSpin;
      localAngVelocity.y = localAngVelocity.y * flSpin;
      localAngVelocity.z = flSpin * localAngVelocity.z;
      vLocalVelocity = pos;
      if ( !v6 )
      {
        (*(*v5 + 1760LL))(v5, &vVelocity, &vLocalVelocity);
        (*(*v5 + 552LL))(v5, &vVelocity);
        (*(*v5 + 1720LL))(v5, &localAngVelocity);
      }
      ++v3;
      ++pBoneToWorld;
      p_pObject += 5;
    }
    while ( ragdoll->listCount > v3 );
  }
}


// RagdollGetBoneMatrix  (line 321, @0x00000000023603e0, libserver.so)
bool __fastcall RagdollGetBoneMatrix(
        const ragdoll_t *const ragdoll,
        CBoneAccessor<matrix3x4a_t> *const pBoneToWorld,
        int objectIndex)
{
  return 0;
}


// RagdollComputeApproximateBbox  (line 349, @0x00000000023603f0, libserver.so)  // inlines: fpmax, fpmin, operator=
// calls: ClearBounds
// callers: CRagdoll::VPhysicsUpdate
void __fastcall RagdollComputeApproximateBbox(
        const ragdoll_t *const ragdoll,
        const Vector *const origin,
        Vector *const outMins,
        Vector *const outMaxs)
{
  int v4; // r12d
  float *p_pObject; // r13
  double v7; // xmm0_8
  float v8; // xmm2_4
  __int64 v9; // rax
  vec_t v10; // xmm1_4
  float v11; // xmm3_4
  Vector mins; // [rsp+10h] [rbp-60h] BYREF
  Vector maxs; // [rsp+20h] [rbp-50h] BYREF
  Vector objectOrg; // [rsp+30h] [rbp-40h]

  v4 = 0;
  p_pObject = &ragdoll->list[0].pObject;
  ClearBounds(&mins, &maxs);
  if ( ragdoll->listCount > 0 )
  {
    do
    {
      if ( *p_pObject != 0 )
      {
        v7 = (*(**p_pObject + 368LL))(*p_pObject);
        v8 = p_pObject[5];
        v9 = 0;
        *&objectOrg.x = v7;
        objectOrg.z = v10;
        do
        {
          v11 = *(&objectOrg.x + v9);
          *(&maxs.x + v9) = fmaxf(*(&maxs.x + v9), v11 + v8);
          *(&mins.x + v9) = fminf(*(&mins.x + v9), v11 - v8);
          v9 += 4;
        }
        while ( v9 != 12 );
      }
      ++v4;
      p_pObject += 10;
    }
    while ( ragdoll->listCount > v4 );
  }
  *outMins = mins;
  *outMaxs = maxs;
}


// RagdollIsAsleep  (line 372, @0x00000000023604f0, libserver.so)
// callers: CRagdollProp::VPhysicsUpdate, CRagdoll::VPhysicsUpdate
bool __fastcall RagdollIsAsleep(const ragdoll_t *const ragdoll)
{
  int v2; // r12d
  IPhysicsObject **p_pObject; // rbx
  bool result; // al

  v2 = 0;
  p_pObject = &ragdoll->list[0].pObject;
  if ( ragdoll->listCount <= 0 )
    return 1;
  while ( 1 )
  {
    if ( *p_pObject != 0 )
    {
      result = (*(**p_pObject + 1464LL))(*p_pObject);
      if ( !result )
        break;
    }
    ++v2;
    p_pObject += 5;
    if ( ragdoll->listCount <= v2 )
      return 1;
  }
  return result;
}


// RagdollSolveSeparation  (line 383, @0x0000000002360750, libserver.so)  // inlines: CGameTrace, DidHit, EnableInteractsWith, Init, LengthSqr, MatrixSetColumn, Ray_t, RnCollisionAttr_t, SetColumn, TraceRay, UTIL_TraceRay, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator-, operator=
// calls: PhysHasContactWithOtherInDirection, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, DevMsg, __stack_chk_fail
// callers: CRagdollProp::VPhysicsUpdate
// strings: "TICK:%5d:Ragdoll separation count: %d\n"
// local variable allocation has failed, the output may be wrong!
void __fastcall RagdollSolveSeparation(ragdoll_t *const ragdoll, CBaseEntity *pEntity)
{
  double v2; // xmm0_8
  double v3; // xmm1_8
  ragdollelement_t *v4; // rbx
  int v5; // r12d
  unsigned __int8 *v6; // r15
  int v8; // r13d
  bool v9; // zf
  __int64 parentIndex; // rax
  IPhysicsObject *pObject; // rdi
  double v12; // xmm0_8
  __int64 v13; // rax
  float v14; // xmm1_4
  IPhysicsObject *v15; // rdi
  ragdoll_t *v16; // r15
  ragdollelement_t *v17; // r14
  __int64 v18; // rbx
  IPhysicsObject *v19; // rdi
  IPhysicsObject *v20; // rdi
  IPhysicsObject *v21; // rdi
  ragdollelement_t *list; // [rsp+8h] [rbp-2E8h]
  float mass; // [rsp+28h] [rbp-2C8h]
  int fixCount; // [rsp+3Ch] [rbp-2B4h]
  float v26; // [rsp+40h] [rbp-2B0h]
  float pTraceFilter; // [rsp+48h] [rbp-2A8h]
  Vector target; // [rsp+50h] [rbp-2A0h] BYREF
  Vector dir; // [rsp+60h] [rbp-290h] BYREF
  __int128 target_0; // [rsp+70h] [rbp-280h] OVERLAPPED BYREF
  Vector velocity; // [rsp+B0h] [rbp-240h] BYREF
  int v32; // [rsp+BCh] [rbp-234h]
  float v33; // [rsp+C0h] [rbp-230h]
  float v34; // [rsp+C4h] [rbp-22Ch]
  float v35; // [rsp+C8h] [rbp-228h]
  int v36; // [rsp+CCh] [rbp-224h]
  int v37; // [rsp+D0h] [rbp-220h]
  int v38; // [rsp+D4h] [rbp-21Ch]
  int v39; // [rsp+D8h] [rbp-218h]
  int v40; // [rsp+DCh] [rbp-214h]
  int v41; // [rsp+E0h] [rbp-210h]
  int v42; // [rsp+E4h] [rbp-20Ch]
  int v43; // [rsp+E8h] [rbp-208h]
  int v44; // [rsp+ECh] [rbp-204h]
  int v45; // [rsp+F0h] [rbp-200h]
  char v46; // [rsp+F4h] [rbp-1FCh]
  bool v47; // [rsp+F5h] [rbp-1FBh]
  matrix3x4_t xform; // [rsp+100h] [rbp-1F0h] BYREF
  char v49; // [rsp+138h] [rbp-1B8h]
  __int64 v50; // [rsp+168h] [rbp-188h]
  __int64 v51; // [rsp+170h] [rbp-180h]
  __int64 v52; // [rsp+178h] [rbp-178h]
  int v53; // [rsp+180h] [rbp-170h]
  __int16 v54; // [rsp+184h] [rbp-16Ch]
  char v55; // [rsp+186h] [rbp-16Ah]
  char v56; // [rsp+187h] [rbp-169h]
  unsigned __int8 needsFix[264]; // [rsp+1B0h] [rbp-140h] BYREF
  unsigned __int64 v58; // [rsp+2B8h] [rbp-38h]

  v58 = __readfsqword(0x28u);
  if ( ragdoll->listCount > 0 )
  {
    list = ragdoll->list;
    v4 = ragdoll->list;
    v5 = 0;
    v6 = needsFix;
    v8 = 0;
    do
    {
      v9 = v4->hConstraint == 0;
      *v6 = 0;
      if ( !v9 )
      {
        parentIndex = v4->parentIndex;
        if ( parentIndex >= 0 )
        {
          pObject = v4->pObject;
          if ( pObject != 0 && ragdoll->list[parentIndex].pObject != 0 )
          {
            v12 = (*(*pObject + 368LL))(pObject);
            v13 = v4->parentIndex;
            *&xform.m_flMatVal[0][0] = v12;
            xform.m_flMatVal[0][2] = v14;
            pTraceFilter = v14;
            v26 = *&v12;
            fixCount = SHIDWORD(v12);
            (*(*ragdoll->list[v13].pObject + 1744LL))(ragdoll->list[v13].pObject, &target, v4);
            *&v3 = LODWORD(pTraceFilter);
            if ( needsFix[v4->parentIndex] != 0 )
              goto LABEL_3;
            *&v2 = LODWORD(target.x);
            dir.x = target.x - v26;
            dir.y = target.y - *&fixCount;
            dir.z = target.z - pTraceFilter;
            *&v2 = ((dir.x * dir.x) + (dir.y * dir.y)) + (dir.z * dir.z);
            if ( *&v2 > 1.0 )
            {
              mass = (*(*v4->pObject + 208LL))(v4->pObject);
              v15 = ragdoll->list[v4->parentIndex].pObject;
              *&v2 = (*(*v15 + 208LL))(v15);
              *&v3 = LODWORD(pTraceFilter);
              if ( *&v2 > (mass + mass) )
                goto LABEL_3;
              if ( PhysHasContactWithOtherInDirection(v4->pObject, &dir) )
              {
                v55 = 0;
                v54 = 0;
                v32 = 0;
                v36 = 0;
                v40 = 0;
                v44 = 0;
                v50 = 0;
                v51 = 0;
                v52 = 0;
                v56 = 7;
                v53 = 0;
                CGameTrace::Init(&xform);
                v45 = 0;
                velocity = target;
                v43 = 0;
                v42 = 0;
                v33 = v26 - target.x;
                v34 = *&fixCount - target.y;
                v41 = 0;
                v35 = pTraceFilter - target.z;
                v46 = 1;
                v39 = 0;
                v38 = 0;
                v37 = 0;
                v47 = (((v33 * v33) + (v34 * v34)) + (v35 * v35)) != 0.0;
                CTraceFilterSimple::CTraceFilterSimple(&target_0, pEntity, 4, 0);
                *(&target_0 + 1) |= 0x87001uLL;
                CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &velocity, &target_0, &xform);
                if ( xform.m_flMatVal[2][3] < 1.0 || v49 != 0 )
                {
LABEL_3:
                  *v6 = 1;
                  ++v8;
                }
              }
            }
          }
        }
      }
      ++v5;
      ++v6;
      ++v4;
    }
    while ( ragdoll->listCount > v5 );
    v16 = ragdoll;
    if ( v8 != 0 )
    {
      if ( ragdoll->listCount > 0 )
      {
        v17 = list;
        v18 = 0;
        do
        {
          if ( needsFix[v18] != 0 )
          {
            v19 = v16->list[v17->parentIndex].pObject;
            if ( v19 != 0 && v17->pObject != 0 )
            {
              (*(*v19 + 1744LL))(v19, &target_0, v17, v2, v3);
              v20 = v16->list[v17->parentIndex].pObject;
              (*(*v20 + 1728LL))(v20, &target_0, &velocity);
              (*(*v17->pObject + 1680LL))(v17->pObject, &xform);
              v21 = v17->pObject;
              xform.m_flMatVal[1][3] = *(&target_0 + 1);
              LODWORD(xform.m_flMatVal[0][3]) = target_0;
              xform.m_flMatVal[2][3] = *(&target_0 + 2);
              (*(*v21 + 1672LL))(v21, &xform, 1);
              (*(*v17->pObject + 544LL))(v17->pObject, &velocity);
              (*(*v17->pObject + 1696LL))(v17->pObject, &vec3_origin);
            }
          }
          ++v17;
          ++v18;
        }
        while ( v18 < v16->listCount );
      }
      DevMsg(2, "TICK:%5d:Ragdoll separation count: %d\n", gpGlobals->tickcount, v8);
    }
  }
}


// CRagdollLRURetirement::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 480, @0x0000000002360d00, libserver.so)
void __cdecl CRagdollLRURetirement::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CRagdollLRURetirement::GameInit  (line 483, @0x00000000023615f0, libserver.so)
// calls: CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::RemoveAll
void __fastcall CRagdollLRURetirement::GameInit(CRagdollLRURetirement *const this, const EventGameInit_t *const msg)
{
  CUtlLinkedList<CHandle<CBaseAnimating>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int>,short unsigned int> > *p_m_LRUImportantRagdolls; // rdi

  p_m_LRUImportantRagdolls = &this->m_LRUImportantRagdolls;
  LODWORD(p_m_LRUImportantRagdolls[1].m_Memory.m_pMemory) = -1;
  CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::RemoveAll(p_m_LRUImportantRagdolls);
  CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::RemoveAll(&this->m_LRU);
}


// ShouldRemoveThisRagdoll  (line 490, @0x0000000002360d10, libserver.so)  // inlines: GetBool, GetInt, VectorAdd, operator+
// calls: UTIL_GetLocalPlayer, UTIL_FindClientInPVS, CBaseEntity::GetAbsOrigin, NDebugOverlay::Line
// callers: CRagdollLRURetirement::Update
// globals: g_pRagdollLVManager
bool __fastcall ShouldRemoveThisRagdoll(CBaseAnimating *pRagdoll)
{
  char m_bLowViolence; // bl
  CBasePlayer *LocalPlayer; // r13
  const Vector *AbsOrigin; // rax
  vec_t v6; // xmm2_4
  vec_t v7; // xmm1_4
  const Vector *v8; // rax
  const Vector *v9; // rax
  vec_t v10; // xmm2_4
  vec_t v11; // xmm1_4
  const Vector *v12; // rax
  Vector target; // [rsp+0h] [rbp-30h] BYREF

  m_bLowViolence = g_pRagdollLVManager->m_bLowViolence;
  if ( m_bLowViolence == 0 )
  {
    LocalPlayer = UTIL_GetLocalPlayer();
    if ( UTIL_FindClientInPVS(pRagdoll) != 0 )
    {
      if ( (*(LocalPlayer->_vptr_IHandleEntity + 264))(LocalPlayer, pRagdoll) != 0 )
        return m_bLowViolence;
      if ( g_debug_ragdoll_removal.m_pParent->m_Value.m_nValue != 0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(pRagdoll);
        v6 = AbsOrigin->y + 0.0;
        v7 = AbsOrigin->x + 0.0;
        target.z = AbsOrigin->z + 64.0;
        target.y = v6;
        target.x = v7;
        v8 = CBaseEntity::GetAbsOrigin(pRagdoll);
        NDebugOverlay::Line(v8, &target, 0, 0, 0xFFu, 1, 5.0);
      }
    }
    else if ( g_debug_ragdoll_removal.m_pParent->m_Value.m_nValue != 0 )
    {
      m_bLowViolence = 1;
      v9 = CBaseEntity::GetAbsOrigin(pRagdoll);
      v10 = v9->y + 0.0;
      v11 = v9->x + 0.0;
      target.z = v9->z + 64.0;
      target.y = v10;
      target.x = v11;
      v12 = CBaseEntity::GetAbsOrigin(pRagdoll);
      NDebugOverlay::Line(v12, &target, 0, 0xFFu, 0, 1, 5.0);
      return m_bLowViolence;
    }
  }
  return 1;
}


// CRagdollLRURetirement::Update  (line 716, @0x000000000236e430, libserver.so)  // inlines: CEntityHandle, Free, Get, GetEffectEntity, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, Init, InternalElement, IsValid, LookupEntity, Next, Remove, operator CEntityInstance*, operator[]
// calls: CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::Unlink, CBaseEntity::VPhysicsGetObject, ShouldRemoveThisRagdoll, CBaseModelEntity::SUB_StartFadeOut
// globals: g_pRagdollLVManager, CEntityHandle::gm_pEntityList
void __fastcall CRagdollLRURetirement::Update(CRagdollLRURetirement *const this, const EventClientUpdate_t *const msg)
{
  int m_Head; // ebx
  bool v4; // zf
  int v5; // eax
  float v6; // xmm1_4
  __int64 v7; // r13
  UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int> *v8; // rax
  uint32 m_Index; // ecx
  int m_Next; // r12d
  __int16 v11; // si
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  const CBaseEntity *m_pInstance; // rdi
  IPhysicsObject *Object; // rax
  int v16; // r13d
  __int16 v17; // si
  CEntityIdentity *v18; // rax
  CEntityInstance *v19; // rdi
  CEntityIdentity *v20; // rax
  UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int> *v21; // rax
  uint32 v22; // ecx
  int v23; // r12d
  unsigned __int16 v24; // cx
  int v25; // esi
  int v26; // eax
  CEntityIdentity *v27; // rcx
  CEntityIdentity *v28; // rcx
  CUtlLinkedList<CHandle<CBaseAnimating>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int>,short unsigned int> > *p_m_LRU; // [rsp+8h] [rbp-58h]
  CBaseAnimating *pRagdoll; // [rsp+10h] [rbp-50h]
  int iMaxRagdollCount; // [rsp+1Ch] [rbp-44h]
  int iMaxRagdollCounta; // [rsp+1Ch] [rbp-44h]

  iMaxRagdollCount = this->m_iMaxRagdolls;
  if ( iMaxRagdollCount == -1 )
    iMaxRagdollCount = g_ragdoll_maxcount.m_pParent->m_Value.m_nValue;
  m_Head = this->m_LRU.m_Head;
  v4 = !g_pRagdollLVManager->m_bLowViolence;
  v5 = 0;
  this->m_iRagdollCount = 0;
  this->m_iSimulatedRagdollCount = 0;
  if ( v4 )
    v5 = iMaxRagdollCount;
  iMaxRagdollCounta = v5;
  p_m_LRU = &this->m_LRU;
  if ( m_Head != 0xFFFF )
  {
    while ( 1 )
    {
      v7 = m_Head;
      v8 = &this->m_LRU.m_Memory.m_pMemory[v7];
      m_Index = v8->m_Element.m_Index;
      m_Next = v8->m_Next;
      if ( v8->m_Element.m_Index + 2 <= 1 )
        goto LABEL_7;
      v11 = v8->m_Element.m_Index;
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Element.m_Index) >> 9) & 0x3F];
      if ( v12 != 0
        && (v13 = &v12[v11 & 0x1FF]) != 0
        && m_Index == v13->m_EHandle.m_Index
        && (m_pInstance = v13->m_pInstance, pRagdoll = v13->m_pInstance, v13->m_pInstance != 0) )
      {
        ++this->m_iRagdollCount;
        Object = CBaseEntity::VPhysicsGetObject(m_pInstance);
        if ( Object != 0 && (*(*Object + 1464LL))(Object) == 0 )
          ++this->m_iSimulatedRagdollCount;
        if ( iMaxRagdollCounta < this->m_LRU.m_ElementCount && ShouldRemoveThisRagdoll(pRagdoll) )
        {
          CBaseModelEntity::SUB_StartFadeOut(pRagdoll, 0.0, v6, 1);
          CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::Unlink(
            &this->m_LRU,
            m_Head);
          this->m_LRU.m_Memory.m_pMemory[v7].m_Next = this->m_LRU.m_FirstFree;
          this->m_LRU.m_FirstFree = m_Head;
          return;
        }
      }
      else
      {
LABEL_7:
        CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::Unlink(
          p_m_LRU,
          m_Head);
        this->m_LRU.m_Memory.m_pMemory[v7].m_Next = this->m_LRU.m_FirstFree;
        this->m_LRU.m_FirstFree = m_Head;
      }
      if ( m_Next == 0xFFFF )
        break;
      m_Head = m_Next;
    }
    v16 = this->m_LRU.m_Head;
    if ( v16 != 0xFFFF && iMaxRagdollCounta < this->m_LRU.m_ElementCount )
    {
      while ( 1 )
      {
        v21 = &this->m_LRU.m_Memory.m_pMemory[v16];
        v22 = v21->m_Element.m_Index;
        v23 = v21->m_Next;
        if ( v21->m_Element.m_Index + 2 <= 1 )
          break;
        v17 = v21->m_Element.m_Index;
        v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v21->m_Element.m_Index) >> 9) & 0x3F];
        if ( v18 == 0 )
          break;
        v19 = 0;
        v20 = &v18[v17 & 0x1FF];
        if ( v20 == 0 )
          goto LABEL_28;
        if ( v22 != v20->m_EHandle.m_Index )
          goto LABEL_28;
        v19 = v20->m_pInstance;
        if ( v20->m_pInstance == 0 )
          goto LABEL_28;
        if ( LODWORD(v19[11].m_pEntity) == -1 )
        {
          v24 = 0x7FFF;
          v25 = 0x7FFF;
        }
        else
        {
          v24 = v19[11].m_pEntity & 0x7FFF;
          v25 = v24;
        }
        v26 = (LODWORD(v19[11].m_pEntity) >> 15 << 15) | v24 & 0x7FFF;
        if ( (v26 + 2) <= 1 )
          goto LABEL_28;
        v27 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v25 >> 9];
        if ( v27 == 0 )
          goto LABEL_28;
        v28 = &v27[v25 & 0x1FF];
        if ( v28 == 0 || v26 != v28->m_EHandle.m_Index || v28->m_pInstance == 0 )
          goto LABEL_28;
LABEL_29:
        if ( v23 == 0xFFFF || iMaxRagdollCounta >= this->m_LRU.m_ElementCount )
          return;
        v16 = v23;
      }
      v19 = 0;
LABEL_28:
      CBaseModelEntity::SUB_StartFadeOut(v19, 0.0, v6, 1);
      CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::Unlink(
        &this->m_LRU,
        v16);
      this->m_LRU.m_Memory.m_pMemory[v16].m_Next = this->m_LRU.m_FirstFree;
      this->m_LRU.m_FirstFree = v16;
      goto LABEL_29;
    }
  }
}


// CRagdollLRURetirement::CleanRagdolls  (line 809, @0x0000000002361620, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Next, operator CEntityInstance*, operator[]
// calls: CBaseModelEntity::SUB_StartFadeOut, CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::RemoveAll
// globals: CEntityHandle::gm_pEntityList
void __fastcall CRagdollLRURetirement::CleanRagdolls(CRagdollLRURetirement *const this)
{
  float v1; // xmm1_4
  __int64 m_Head; // rax
  UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int> *m_pMemory; // rdx
  __int64 v5; // r12
  UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int> *v6; // rax
  CEntityIdentity *v7; // rsi
  CEntityIdentity *v8; // rsi

  m_Head = this->m_LRU.m_Head;
  if ( m_Head != 0xFFFF )
  {
    m_pMemory = this->m_LRU.m_Memory.m_pMemory;
    do
    {
      while ( 1 )
      {
        v5 = m_Head;
        v6 = &m_pMemory[m_Head];
        if ( v6->m_Element.m_Index + 2 > 1 )
        {
          v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Element.m_Index) >> 9) & 0x3F];
          if ( v7 != 0 )
          {
            v8 = &v7[v6->m_Element.m_Index & 0x1FF];
            if ( v8 != 0 && v6->m_Element.m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
              break;
          }
        }
        m_Head = v6->m_Next;
        if ( m_Head == 0xFFFF )
          goto LABEL_10;
      }
      CBaseModelEntity::SUB_StartFadeOut(v8->m_pInstance, 0.0, v1, 1);
      m_pMemory = this->m_LRU.m_Memory.m_pMemory;
      m_Head = m_pMemory[v5].m_Next;
    }
    while ( m_Head != 0xFFFF );
  }
LABEL_10:
  CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::RemoveAll(&this->m_LRUImportantRagdolls);
  CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::RemoveAll(&this->m_LRU);
}


// CRagdollLRURetirement::FrameUpdatePostEntityThink  (line 830, @0x000000000234b630, libserver.so)
void __fastcall CRagdollLRURetirement::FrameUpdatePostEntityThink(
        CRagdollLRURetirement *const this,
        const EventServerPostEntityThink_t *const msg)
{
  int (**vptr_IGameSystem)(...); // rax
  EventClientUpdate_t msg2; // [rsp+0h] [rbp-10h] BYREF

  vptr_IGameSystem = this->_vptr_IGameSystem;
  msg2.m_flFrameTime = 0.0;
  vptr_IGameSystem[22](this, &msg2);
}


// CRagdollLRURetirement::MoveToTopOfLRU  (line 842, @0x000000000236fff0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, Free, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Remove, Set, operator CEntityInstance*, operator[]
// calls: CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::InsertBefore, CEntityHandle::operator CEntityInstance*, CBaseModelEntity::SUB_StartFadeOut, CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::Unlink
// callers: CRagdollProp::OnPhysGunPickup, CRagdollProp::OnPhysGunDrop, CreateServerRagdoll
// globals: CEntityHandle::gm_pEntityList
void __fastcall CRagdollLRURetirement::MoveToTopOfLRU(
        CRagdollLRURetirement *const this,
        CBaseAnimating *pRagdoll,
        bool bImportant)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  unsigned __int16 m_Head; // r12
  CBaseModelEntity *v8; // rax
  float v9; // xmm1_4
  int m_Next; // ebx
  UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int> *m_pMemory; // rdi
  CBaseAnimating *m_pInstance; // r8
  unsigned __int64 v13; // r12
  UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int> *v14; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v16; // rcx
  CEntityIdentity *v17; // rcx
  CUtlLinkedList<CHandle<CBaseAnimating>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int>,short unsigned int> > *p_m_LRU; // r15
  CEntityIdentity *v19; // rdx
  __int16 v20; // cx
  CHandle<CBaseAnimating> src; // [rsp+0h] [rbp-40h] BYREF

  if ( bImportant )
  {
    src.m_Index = -1;
    if ( pRagdoll != 0 )
    {
      m_pEntity = pRagdoll->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v6 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
      }
    }
    CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::InsertBefore(
      &this->m_LRUImportantRagdolls,
      0xFFFFu,
      &src);
    if ( this->m_LRUImportantRagdolls.m_ElementCount > g_ragdoll_important_maxcount.m_pParent->m_Value.m_nValue )
    {
      m_Head = this->m_LRUImportantRagdolls.m_Head;
      v8 = CEntityHandle::operator CEntityInstance *(&this->m_LRUImportantRagdolls.m_Memory.m_pMemory[m_Head]);
      if ( v8 != 0 )
      {
        CBaseModelEntity::SUB_StartFadeOut(v8, 0.0, v9, 1);
        CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::Unlink(
          &this->m_LRUImportantRagdolls,
          m_Head);
        this->m_LRUImportantRagdolls.m_Memory.m_pMemory[m_Head].m_Next = this->m_LRUImportantRagdolls.m_FirstFree;
        this->m_LRUImportantRagdolls.m_FirstFree = m_Head;
      }
    }
  }
  else
  {
    m_Next = this->m_LRU.m_Head;
    if ( m_Next == 0xFFFF )
    {
LABEL_20:
      p_m_LRU = &this->m_LRU;
    }
    else
    {
      m_pMemory = this->m_LRU.m_Memory.m_pMemory;
      while ( 1 )
      {
        m_pInstance = 0;
        v13 = m_Next;
        v14 = &m_pMemory[v13];
        m_Index = m_pMemory[v13].m_Element.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v14->m_Element.m_Index) >> 9) & 0x3F];
          if ( v16 != 0 )
          {
            v17 = &v16[v14->m_Element.m_Index & 0x1FF];
            if ( v17 != 0 && m_Index == v17->m_EHandle.m_Index )
              m_pInstance = v17->m_pInstance;
          }
        }
        if ( pRagdoll == m_pInstance )
          break;
        m_Next = v14->m_Next;
        if ( m_Next == 0xFFFF )
          goto LABEL_20;
      }
      p_m_LRU = &this->m_LRU;
      CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::Unlink(
        &this->m_LRU,
        m_Next);
      this->m_LRU.m_Memory.m_pMemory[v13].m_Next = this->m_LRU.m_FirstFree;
      this->m_LRU.m_FirstFree = m_Next;
    }
    src.m_Index = -1;
    if ( pRagdoll != 0 )
    {
      v19 = pRagdoll->m_pEntity;
      if ( v19 != 0 )
      {
        v20 = 0x7FFF;
        if ( v19->m_EHandle.m_Index != -1 )
          v20 = v19->m_EHandle.m_Index & 0x7FFF;
        src.m_Index = (((v19->m_EHandle.m_Index >> 15) - (v19->m_flags & 1)) << 15) | v20 & 0x7FFF;
      }
    }
    CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::InsertBefore(
      p_m_LRU,
      0xFFFFu,
      &src);
  }
}


// CBaseAnimating::TransferDissolveFrom  (line 1052, @0x0000000002360e70, libserver.so)  // inlines: CEntityHandle, Get, GetDissolveType, GetDissolverOrigin, GetEffectEntity, GetEntryIndex, GetHandleEntity, GetInstance, GetMagnitude, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, SetDissolveType, SetDissolverOrigin, SetMagnitude, operator!=, operator=, operator=<float>, operator=<int>
// calls: CEntityDissolve::Create, CBaseEntity::AddFlag, __dynamic_cast
// callers: CreateServerRagdoll
void __fastcall CBaseAnimating::TransferDissolveFrom(CBaseAnimating *const this, CBaseAnimating *pAnim)
{
  CEntityDissolve *v4; // r12
  unsigned __int16 v5; // dx
  int v6; // esi
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  float *v10; // rax
  float *v11; // rbx
  EntityDisolveType_t v12; // r13d
  unsigned int v13; // ebx
  vec_t v14; // [rsp+4h] [rbp-3Ch]
  vec_t v15; // [rsp+8h] [rbp-38h]
  vec_t v16; // [rsp+Ch] [rbp-34h]

  if ( pAnim != 0 && (pAnim->m_fFlags.m_Value & 0x10000000) != 0 )
  {
    v4 = CEntityDissolve::Create(this, pAnim);
    if ( v4 != 0 )
    {
      CBaseEntity::AddFlag(this, 0x10000000);
      this->m_flDissolveStartTime = pAnim->m_flDissolveStartTime;
      if ( pAnim->m_hEffectEntity.m_Value.m_Index == -1 )
      {
        v5 = 0x7FFF;
        v6 = 0x7FFF;
      }
      else
      {
        v5 = pAnim->m_hEffectEntity.m_Value.m_Index & 0x7FFF;
        v6 = v5;
      }
      v7 = (pAnim->m_hEffectEntity.m_Value.m_Index >> 15 << 15) | v5 & 0x7FFF;
      if ( v7 + 2 > 1 )
      {
        v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
        if ( v8 != 0 )
        {
          v9 = &v8[v6 & 0x1FF];
          if ( v9 != 0 && v7 == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
          {
            v10 = __dynamic_cast(v9->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CEntityDissolve, 0);
            v11 = v10;
            if ( v10 != 0 )
            {
              if ( v10[296] != v4->m_vDissolverOrigin.m_Value.x
                || v10[297] != v4->m_vDissolverOrigin.m_Value.y
                || v10[298] != v4->m_vDissolverOrigin.m_Value.z )
              {
                v14 = v10[298];
                v15 = v10[297];
                v16 = v10[296];
                (*(v4->_vptr_IHandleEntity + 22))(v4, 1184, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                v4->m_vDissolverOrigin.m_Value.x = v16;
                v4->m_vDissolverOrigin.m_Value.y = v15;
                v4->m_vDissolverOrigin.m_Value.z = v14;
              }
              v12 = *(v11 + 295);
              if ( v12 != v4->m_nDissolveType.m_Value )
              {
                (*(v4->_vptr_IHandleEntity + 22))(v4, 1180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                v4->m_nDissolveType.m_Value = v12;
                v12 = *(v11 + 295);
              }
              if ( v12 == EntityDisolveType_t::ENTITY_DISSOLVE_CORE )
              {
                v13 = *(v11 + 299);
                if ( v13 != v4->m_nMagnitude.m_Value )
                {
                  (*(v4->_vptr_IHandleEntity + 22))(v4, 1196, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                  v4->m_nMagnitude.m_Value = v13;
                }
                if ( v4->m_flFadeOutStart.m_Value != 0.2 )
                {
                  (*(v4->_vptr_IHandleEntity + 22))(v4, 1172, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                  v4->m_flFadeOutStart.m_Value = 0.2;
                }
                if ( v4->m_flFadeOutModelStart.m_Value != 0.1 )
                {
                  (*(v4->_vptr_IHandleEntity + 22))(v4, 1164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                  v4->m_flFadeOutModelStart.m_Value = 0.1;
                }
                if ( v4->m_flFadeOutModelLength.m_Value != 0.050000001 )
                {
                  (*(v4->_vptr_IHandleEntity + 22))(v4, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                  v4->m_flFadeOutModelLength.m_Value = 0.050000001;
                }
                if ( v4->m_flFadeInLength.m_Value != 0.1 )
                {
                  (*(v4->_vptr_IHandleEntity + 22))(v4, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                  v4->m_flFadeInLength.m_Value = 0.1;
                }
              }
            }
          }
        }
      }
    }
  }
}


