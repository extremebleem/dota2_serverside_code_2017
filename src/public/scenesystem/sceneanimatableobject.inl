
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSceneAnimatableObject::~CSceneAnimatableObject  (line 64, @0x0000000001ec2910, libserver.so)  // inlines: Purge, RemoveAll, ~CSceneObject, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGenericInterface
// calls: CUtlMemory<float, int>::Purge, CUtlMemory<matrix3x4a_t, int>::Purge
void __fastcall CSceneAnimatableObject::~CSceneAnimatableObject(CSceneAnimatableObject *const this)
{
  bool v2; // zf
  CUtlVectorBase<float,CUtlMemory<float,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_flexControllerWeights.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGenericInterface = off_3FB5110;
  this->m_flexControllerWeights.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_flexControllerWeights.m_Memory;
    CUtlMemory<float,int>::Purge(&this->m_flexControllerWeights.m_Memory);
    if ( (this->m_flexControllerWeights.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<float,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_worldSpaceRenderBones.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_worldSpaceRenderBones.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<matrix3x4a_t,int>::Purge(&this->m_worldSpaceRenderBones.m_Memory);
    if ( (this->m_worldSpaceRenderBones.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<matrix3x4a_t,int>::Purge(&this->m_worldSpaceRenderBones.m_Memory);
  }
  this->_vptr_IGenericInterface = off_3F794B0;
  (*(*g_pSceneSystem + 800LL))(g_pSceneSystem, this);
  this->_vptr_IGenericInterface = off_3F79210;
}


// CSceneAnimatableObject::~CSceneAnimatableObject  (line 64, @0x0000000001ec29d0, libserver.so)  // inlines: Purge, RemoveAll, ~CSceneAnimatableObject, ~CSceneObject, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGenericInterface
// calls: operator delete, CUtlMemory<float, int>::Purge, CUtlMemory<matrix3x4a_t, int>::Purge
void __fastcall CSceneAnimatableObject::~CSceneAnimatableObject(CSceneAnimatableObject *const this)
{
  bool v2; // zf
  CUtlVectorBase<float,CUtlMemory<float,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_flexControllerWeights.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGenericInterface = off_3FB5110;
  this->m_flexControllerWeights.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_flexControllerWeights.m_Memory;
    CUtlMemory<float,int>::Purge(&this->m_flexControllerWeights.m_Memory);
    if ( (this->m_flexControllerWeights.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<float,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_worldSpaceRenderBones.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_worldSpaceRenderBones.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<matrix3x4a_t,int>::Purge(&this->m_worldSpaceRenderBones.m_Memory);
    if ( (this->m_worldSpaceRenderBones.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<matrix3x4a_t,int>::Purge(&this->m_worldSpaceRenderBones.m_Memory);
  }
  this->_vptr_IGenericInterface = off_3F794B0;
  (*(*g_pSceneSystem + 800LL))(g_pSceneSystem, this);
  this->_vptr_IGenericInterface = off_3F79210;
  operator delete(this);
}


// CSceneAnimatableObject::Init  (line 68, @0x0000000002185900, libserver.so)  // inlines: GetCurrentMeshGroupMask, GetData, GetSceneObjectData, IsValid, SetBounds, SetTransform, UpdateBoundingBoxToMatchTransform, Vector, VectorMax, VectorMin, fpmax, fpmin, memcpy, memset, operator=, operator[]
// calls: CModel::MasterSkeleton, CModelSkeleton::NumBones, CModel::GetAnimationStateCount, CModel::HasMesh, TransformAABB, CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount, memset, CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::SetCount, CModelSkeleton::GetBindPoseWorldTransforms, CModel::GetMeshData
// callers: CBaseEntity::DrawVCollide
void __fastcall CSceneAnimatableObject::Init(
        CSceneAnimatableObject *const this,
        const matrix3x4a_t *const modelToWorld,
        const CModel *pModel)
{
  const CModelSkeleton *v6; // r15
  int v7; // eax
  uint32 AnimationStateCount; // eax
  CMeshInstance *m_pMeshInstanceData; // rbx
  char v10; // r13
  uint8 m_nMeshGroupMaskSmall; // al
  __int64 m_nCurrentMeshGroupMask; // rdx
  CSceneObjectExtraData_t *m_pExtraData; // rax
  const CModel *const *m_pBinding; // rax
  const Vector *p_m_vMinBounds; // rsi
  CSceneObjectExtraData_t *v16; // rax
  ISceneObjectDesc *m_pDesc; // rdi
  const CModel *const *v18; // rax
  const CRenderMesh *MeshData; // rax
  vec_t v20; // xmm0_4
  vec_t v21; // xmm2_4
  signed int nFlexCounta; // [rsp+8h] [rbp-78h]
  int nFlexCount; // [rsp+8h] [rbp-78h]
  float v24; // [rsp+10h] [rbp-70h] BYREF
  float v25; // [rsp+14h] [rbp-6Ch]
  float v26; // [rsp+18h] [rbp-68h]
  float v27; // [rsp+20h] [rbp-60h] BYREF
  float v28; // [rsp+24h] [rbp-5Ch]
  float v29; // [rsp+28h] [rbp-58h]
  Vector v30; // [rsp+30h] [rbp-50h] BYREF
  Vector vecMaxsOut; // [rsp+40h] [rbp-40h] BYREF

  v6 = CModel::MasterSkeleton(pModel);
  v7 = CModelSkeleton::NumBones(v6);
  if ( v7 != 0 )
  {
    nFlexCount = v7;
    CUtlVectorBase<matrix3x4a_t,CUtlMemory<matrix3x4a_t,int>>::SetCount(&this->m_worldSpaceRenderBones, v7);
    CModelSkeleton::GetBindPoseWorldTransforms(
      v6,
      modelToWorld,
      nFlexCount,
      this->m_worldSpaceRenderBones.m_Memory.m_pMemory);
  }
  AnimationStateCount = CModel::GetAnimationStateCount(
                          pModel,
                          AnimationStateType_t::ANIMATION_STATE_TYPE_FLEX_CONTROLLERS);
  if ( AnimationStateCount != 0 )
  {
    nFlexCounta = AnimationStateCount;
    CUtlVectorBase<float,CUtlMemory<float,int>>::SetCount(&this->m_flexControllerWeights, AnimationStateCount);
    memset(this->m_flexControllerWeights.m_Memory.m_pMemory, 0, 4LL * nFlexCounta);
  }
  *&this->m_transform.m_flMatVal[0][0] = *&modelToWorld->m_flMatVal[0][0];
  *&this->m_transform.m_flMatVal[0][2] = *&modelToWorld->m_flMatVal[0][2];
  *&this->m_transform.m_flMatVal[1][0] = *&modelToWorld->m_flMatVal[1][0];
  *&this->m_transform.m_flMatVal[1][2] = *&modelToWorld->m_flMatVal[1][2];
  *&this->m_transform.m_flMatVal[2][0] = *&modelToWorld->m_flMatVal[2][0];
  *&this->m_transform.m_flMatVal[2][2] = *&modelToWorld->m_flMatVal[2][2];
  if ( (this->m_nObjectTypeFlags & 4) == 0 )
  {
    m_pDesc = this->m_pDesc;
    if ( m_pDesc != 0 )
      (*(m_pDesc->_vptr_ISceneObjectDesc + 14))(m_pDesc, this);
    goto LABEL_21;
  }
  if ( (*(&this->CSceneObject + 48) & 0x10) != 0 )
    goto LABEL_21;
  m_pMeshInstanceData = this->m_pMeshInstanceData;
  v10 = 0;
  v24 = 3.4028235e38;
  v25 = 3.4028235e38;
  v26 = 3.4028235e38;
  v27 = -3.4028235e38;
  v28 = -3.4028235e38;
  v29 = -3.4028235e38;
  if ( m_pMeshInstanceData == 0 )
    goto LABEL_31;
  do
  {
    while ( 1 )
    {
      m_nMeshGroupMaskSmall = this->m_nMeshGroupMaskSmall;
      m_nCurrentMeshGroupMask = m_nMeshGroupMaskSmall;
      if ( m_nMeshGroupMaskSmall == 0 )
      {
        m_pExtraData = this->m_pExtraData;
        m_nCurrentMeshGroupMask = -1;
        if ( m_pExtraData != 0 )
          m_nCurrentMeshGroupMask = m_pExtraData->m_nCurrentMeshGroupMask;
      }
      if ( (m_pMeshInstanceData->m_nMeshGroupMask & m_nCurrentMeshGroupMask) == 0 )
        goto LABEL_9;
      m_pBinding = m_pMeshInstanceData->m_hRenderMesh.m_hModel.m_pBinding;
      if ( m_pBinding == 0 || !CModel::HasMesh(*m_pBinding, m_pMeshInstanceData->m_hRenderMesh.m_iMesh) )
      {
        p_m_vMinBounds = &m_pMeshInstanceData->m_pFixedMeshDataOverride->m_vMinBounds;
        goto LABEL_17;
      }
      v18 = m_pMeshInstanceData->m_hRenderMesh.m_hModel.m_pBinding;
      if ( v18 != 0 )
      {
        MeshData = CModel::GetMeshData(*v18, m_pMeshInstanceData->m_hRenderMesh.m_iMesh);
        if ( MeshData == 0 )
          goto LABEL_9;
        p_m_vMinBounds = &m_pMeshInstanceData->m_pFixedMeshDataOverride->m_vMinBounds;
        if ( p_m_vMinBounds != 0 )
          break;
        p_m_vMinBounds = &MeshData->m_sceneObjects.m_Memory.m_pMemory[m_pMeshInstanceData->m_nSceneObjectIndex].m_vMinBounds;
LABEL_17:
        if ( p_m_vMinBounds != 0 )
          break;
      }
LABEL_9:
      m_pMeshInstanceData = m_pMeshInstanceData->m_pNext;
      if ( m_pMeshInstanceData == 0 )
        goto LABEL_19;
    }
    v10 = 1;
    TransformAABB(&this->m_transform, p_m_vMinBounds, p_m_vMinBounds + 1, &v30, &vecMaxsOut);
    m_pMeshInstanceData = m_pMeshInstanceData->m_pNext;
    v24 = fminf(v30.x, v24);
    v25 = fminf(v30.y, v25);
    v26 = fminf(v30.z, v26);
    v27 = fmaxf(vecMaxsOut.x, v27);
    v28 = fmaxf(vecMaxsOut.y, v28);
    v29 = fmaxf(vecMaxsOut.z, v29);
  }
  while ( m_pMeshInstanceData != 0 );
LABEL_19:
  if ( v10 != 0 )
  {
    (*(*g_pSceneSystem + 232LL))(g_pSceneSystem, this, &v24, &v27);
    goto LABEL_21;
  }
LABEL_31:
  v20 = this->m_transform.m_flMatVal[2][3];
  v21 = this->m_transform.m_flMatVal[0][3];
  vecMaxsOut.y = this->m_transform.m_flMatVal[1][3];
  vecMaxsOut.z = v20;
  vecMaxsOut.x = v21;
  (*(*g_pSceneSystem + 232LL))(g_pSceneSystem, this, &vecMaxsOut, &vecMaxsOut);
LABEL_21:
  v16 = this->m_pExtraData;
  if ( v16 != 0 && v16->m_childObjects.m_Size != 0 )
    (*(*g_pSceneSystem + 1040LL))(g_pSceneSystem, this);
}


