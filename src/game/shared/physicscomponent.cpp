
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// Physics_GetAggregateData  (line 26, @0x0000000001eba270, libserver.so)  // inlines: CSmartPtr, GetModel, HasPhysics, ResourceHandleToData<InfoForResourceTypeCModel>, RnCollisionAttr_t, VectorSubtract, operator CWeakHandle<InfoForResourceTypeCModel>, operator int, operator-, operator=
// calls: CModel::HasCollision, CModel::AcquirePhysicsRef, CPhysBodyDesc::CPhysBodyDesc, CPhysBodyDesc::AddHull, CreateAggregateData, CCollisionProperty::GetCapsule, CPhysBodyDesc::AddCapsule, CPhysBodyDesc::~CPhysBodyDesc, _Unwind_Resume
// callers: Physics_CreateAggregate
CSmartPtr<CPhysAggregateData,CRefCountAccessor> __fastcall Physics_GetAggregateData(
        uint64 *a1,
        CSkeletonInstance *pSkeletonInstance,
        CCollisionProperty *pCollisionProp,
        MeshGroupMask_t nPhysGroupMask,
        SolidType_t nSolidType)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // r12
  uint64 m_nInteractsAs; // r12
  vec_t v10; // xmm1_4
  float *v11; // rax
  float v12; // xmm1_4
  float v13; // xmm2_4
  RnHull_t *v14; // rax
  Vector vCenter; // [rsp+10h] [rbp-120h] BYREF
  Vector vExtents; // [rsp+20h] [rbp-110h] BYREF
  RnCollisionAttr_t rAttributes; // [rsp+40h] [rbp-F0h] BYREF
  CPhysBodyDesc_0 boxDesc; // [rsp+60h] [rbp-D0h] BYREF

  if ( (nSolidType - 2) <= 1u )
  {
    *&vCenter.x = (*(pCollisionProp->_vptr_ICollideable + 19))(
                    pCollisionProp,
                    pSkeletonInstance,
                    pCollisionProp,
                    nPhysGroupMask);
    vCenter.z = v10;
    v11 = (*(pCollisionProp->_vptr_ICollideable + 2))(pCollisionProp);
    v12 = v11[1] - vCenter.y;
    v13 = v11[2] - vCenter.z;
    vExtents.x = *v11 - vCenter.x;
    vExtents.y = v12;
    vExtents.z = v13;
    if ( vExtents.x <= 0.0 || v12 <= 0.0 || v13 <= 0.0 )
    {
      m_nInteractsAs = 0;
      goto LABEL_8;
    }
    CPhysBodyDesc::CPhysBodyDesc(&boxDesc, 1);
    memset(&rAttributes, 0, 31);
    rAttributes.m_nCollisionFunctionMask = 7;
    v14 = (*(g_pVPhysics2->_vptr_IAppSystem + 28))(g_pVPhysics2, &vExtents, &vCenter, 0, 0);
    CPhysBodyDesc::AddHull(&boxDesc, v14, &rAttributes);
    boxDesc.m_flMass = 1000.0;
    CreateAggregateData(&boxDesc, 1);
LABEL_17:
    m_nInteractsAs = rAttributes.m_nInteractsAs;
    CPhysBodyDesc::~CPhysBodyDesc(&boxDesc);
    goto LABEL_8;
  }
  if ( nSolidType == SolidType_t::SOLID_CAPSULE )
  {
    CCollisionProperty::GetCapsule(&vExtents, 1.0);
    CPhysBodyDesc::CPhysBodyDesc(&boxDesc, 1);
    memset(&rAttributes, 0, 31);
    rAttributes.m_nCollisionFunctionMask = 7;
    CPhysBodyDesc::AddCapsule(&boxDesc, &vExtents, &rAttributes);
    boxDesc.m_flMass = 1000.0;
    CreateAggregateData(&boxDesc, 1);
    goto LABEL_17;
  }
  m_pBinding = pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  m_pData = 0;
  if ( m_pBinding != 0 && m_pBinding->m_nRefCount.m_value > 0 )
    m_pData = m_pBinding->m_pData;
  if ( !CModel::HasCollision(m_pData) )
  {
    *a1 = 0;
    return a1;
  }
  CModel::AcquirePhysicsRef(m_pData);
  m_nInteractsAs = *&boxDesc.m_flMass;
LABEL_8:
  *a1 = m_nInteractsAs;
  return a1;
}


// Physics_CreateAggregate  (line 75, @0x0000000001eba520, libserver.so)  // inlines: CEntityHandle, CGameSceneNodeHandle, CNetworkVarBase, CSmartPtr, CTransform, CalcAbsolutePosition, EnsureValidValue<CEntityHandle>, GetClassNameAsCStr, GetEHandle, GetEntityNameAsCStr, GetEntryIndex, GetName, GetSerialNumber, Init, LargestComponentValue, Load, MatrixTransform, NodeToWorldTransform, Release<CPhysAggregateData>, String, ToInt, V_strncat<long unsigned int>, VectorAligned, operator=, operator=<CEntityInstance*>, ~CSmartPtr
// calls: MatrixTransform, CBaseEntity::VPhysicsWorld, _V_strncat, CPhysAggregateData::Release, CGameSceneNode::CalcAbsolutePositionWhenDirty, Physics_GetAggregateData, __stack_chk_fail, _Unwind_Resume
// callers: CModelState::SetupPhysics
IPhysAggregateInstance *__fastcall Physics_CreateAggregate(
        CSkeletonInstance *pSkeletonInstance,
        MeshGroupMask_t nPhysGroupMask,
        VPhysicsMotionType_t nIdealMotionType,
        CPhysAggregateData *pPhysModelCustom)
{
  const CBaseEntity *m_pOwner; // r13
  CCollisionProperty *m_pCollision; // r12
  CEntityInstance *v8; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v10; // cx
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm3_4
  const CPhysAggregateData *v14; // r15
  IVPhysics2World *v15; // rax
  __int64 v16; // rax
  IPhysAggregateInstance *v17; // r13
  const ResourceBindingBase_t *m_pBinding; // rsi
  const char *m_pAsString; // rsi
  CEntityIdentity *v20; // rax
  const char *v21; // rsi
  CEntityIdentity *v22; // rax
  __int64 v23; // rax
  __int64 v25; // [rsp+10h] [rbp-1A0h]
  SolidType_t nSolidType; // [rsp+33h] [rbp-17Dh]
  vec_t flScale; // [rsp+38h] [rbp-178h]
  float flScale_0; // [rsp+3Ch] [rbp-174h]
  Vector vScaleOut; // [rsp+40h] [rbp-170h] BYREF
  CTransform rootToWorld; // [rsp+50h] [rbp-160h] BYREF
  char name[264]; // [rsp+70h] [rbp-140h] BYREF
  unsigned __int64 v34; // [rsp+178h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  m_pOwner = pSkeletonInstance->m_pOwner;
  if ( m_pOwner != 0 )
  {
    m_pCollision = m_pOwner->m_pCollision;
    nSolidType = (*(m_pCollision->_vptr_ICollideable + 7))(m_pCollision);
    v8 = pSkeletonInstance->m_pOwner;
    if ( v8 != 0 && (m_pEntity = v8->m_pEntity) != 0 )
    {
      v10 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LODWORD(rootToWorld.m_vPosition.x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                         | v10 & 0x7FFF;
      flScale = rootToWorld.m_vPosition.x;
    }
    else
    {
      flScale = NAN;
    }
  }
  else
  {
    m_pCollision = 0;
    nSolidType = SolidType_t::SOLID_VPHYSICS;
    flScale = NAN;
  }
  LODWORD(v25) = pSkeletonInstance->m_name.m_Value.m_nHashCode;
  if ( pSkeletonInstance->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(pSkeletonInstance);
  rootToWorld.m_vPosition.w = 0.0;
  MatrixTransform(&pSkeletonInstance->m_mNodeToWorld, &rootToWorld, &vScaleOut);
  v11 = fabs(vScaleOut.x);
  v12 = fabs(vScaleOut.y);
  v13 = fabs(vScaleOut.z);
  flScale_0 = v13;
  if ( v11 > v12 )
  {
    if ( v11 <= v13 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( v12 > v13 )
  {
    if ( v11 > v12 )
    {
LABEL_11:
      flScale_0 = v11;
      goto LABEL_12;
    }
    flScale_0 = v12;
  }
LABEL_12:
  v14 = 0;
  if ( pPhysModelCustom == 0 )
  {
    Physics_GetAggregateData(&vScaleOut, pSkeletonInstance, m_pCollision, nPhysGroupMask, nSolidType);
    pPhysModelCustom = *&vScaleOut.x;
    if ( *&vScaleOut.x == 0 )
      return 0;
    v14 = *&vScaleOut.x;
  }
  v15 = CBaseEntity::VPhysicsWorld(m_pOwner);
  v16 = (*(*v15 + 120LL))(
          v15,
          pPhysModelCustom,
          &rootToWorld,
          (v25 << 32) | LODWORD(flScale),
          nIdealMotionType,
          flScale_0);
  v17 = v16;
  if ( v16 != 0 )
  {
    (*(*v16 + 40LL))(v16, 4391);
    m_pBinding = pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
    *name = 2127475;
    memset(&name[8], 0, 0xF8u);
    (*(*g_pResourceSystem + 328LL))(g_pResourceSystem, m_pBinding, &name[3], 253);
    _V_strncat(name, ":", 256, 0xFFFFFFFFLL);
    m_pAsString = "";
    v20 = pSkeletonInstance->m_pOwner->m_pEntity;
    if ( v20->m_designerName.u.m_Id != 0 )
      m_pAsString = v20->m_designerName.u.m_pAsString;
    _V_strncat(name, m_pAsString, 256, 0xFFFFFFFFLL);
    _V_strncat(name, ":", 256, 0xFFFFFFFFLL);
    v21 = "";
    v22 = pSkeletonInstance->m_pOwner->m_pEntity;
    if ( v22->m_name.u.m_Id != 0 )
      v21 = v22->m_name.u.m_pAsString;
    _V_strncat(name, v21, 256, 0xFFFFFFFFLL);
    (*(v17->_vptr_IPhysAggregateInstance + 36))(v17, name);
    if ( m_pCollision != 0 )
    {
      v23 = (*(m_pCollision->_vptr_ICollideable + 20))(m_pCollision);
      (*(v17->_vptr_IPhysAggregateInstance + 23))(v17, v23);
    }
  }
  else
  {
    v17 = 0;
  }
  if ( v14 != 0 )
    CPhysAggregateData::Release(v14);
  return v17;
}


