
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseAnimatingController::operator=  (line 67, @0x0000000001fc3530, libserver.so)  // inlines: GetEncoder, GetQuantizedFloatEncoderByIndex, NetworkStateChanged, Set, operator=
// callers: CSchemaClassBinding<CBaseAnimatingOverlayController>::AllocateAndCopyConstruct, CSchemaClassBinding<CBaseAnimatingOverlayController>::Copy
CBaseAnimatingController *__fastcall CBaseAnimatingController::operator=(
        CBaseAnimatingController *const this,
        __int64 a2)
{
  __int64 v4; // r13
  CNetworkedSequenceOperation *p_m_op; // r8
  CNetworkedSequenceOperation *v6; // r15
  CNetworkVarBase<float,CNetworkedSequenceOperation::NetworkVar_m_flCycle> *p_m_flCycle; // r11
  __int64 v8; // r9
  TransitioningLayer_t *v9; // r14
  signed __int64 v10; // rbx
  __int64 v11; // r12
  float v13; // xmm1_4
  __int64 v14; // rax
  float v15; // xmm0_4
  float v16; // xmm1_4
  __int64 v17; // rax
  float v18; // xmm0_4
  float v19; // xmm1_4
  __int64 v20; // rax
  float v21; // xmm0_4
  float v22; // xmm1_4
  __int64 v23; // rax
  float v24; // xmm0_4
  __int64 v25; // [rsp+8h] [rbp-88h]
  CBaseAnimatingController *thisa; // [rsp+10h] [rbp-80h]
  __int64 v27; // [rsp+18h] [rbp-78h]
  __int64 v28; // [rsp+18h] [rbp-78h]
  __int64 v29; // [rsp+18h] [rbp-78h]
  __int64 v30; // [rsp+18h] [rbp-78h]
  CNetworkVarBase<float,CNetworkedSequenceOperation::NetworkVar_m_flCycle> *v31; // [rsp+20h] [rbp-70h]
  CNetworkVarBase<float,CNetworkedSequenceOperation::NetworkVar_m_flCycle> *v32; // [rsp+20h] [rbp-70h]
  CNetworkVarBase<float,CNetworkedSequenceOperation::NetworkVar_m_flCycle> *v33; // [rsp+20h] [rbp-70h]
  CNetworkVarBase<float,CNetworkedSequenceOperation::NetworkVar_m_flCycle> *v34; // [rsp+20h] [rbp-70h]
  CNetworkedSequenceOperation *v35; // [rsp+28h] [rbp-68h]
  CNetworkedSequenceOperation *v36; // [rsp+28h] [rbp-68h]
  CNetworkedSequenceOperation *v37; // [rsp+28h] [rbp-68h]
  CNetworkedSequenceOperation *v38; // [rsp+28h] [rbp-68h]
  __int64 v39; // [rsp+30h] [rbp-60h]
  CBaseAnimatingController **p_m_pOwner; // [rsp+38h] [rbp-58h]
  __int64 v41; // [rsp+40h] [rbp-50h]
  CNetworkVarBase<HSequence,CNetworkedSequenceOperation::NetworkVar_m_hSequence> *p_m_hSequence; // [rsp+48h] [rbp-48h]
  CNetworkVarBase<float,CNetworkedSequenceOperation::NetworkVar_m_flPrevCycle> *p_m_flPrevCycle; // [rsp+50h] [rbp-40h]
  TransitioningLayer_t *m_transitioningLayers; // [rsp+58h] [rbp-38h]

  this->m_pSkeletonInstance = *(a2 + 8);
  if ( *(a2 + 32) != this->m_baseLayer.m_hSequence.m_Value.m_Data )
  {
    (*(this->m_baseLayer._vptr_CNetworkedSequenceOperation + 3))(&this->m_baseLayer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_baseLayer.m_hSequence.m_Value.m_Data = *(a2 + 32);
  }
  if ( this->m_baseLayer.m_flPrevCycle.m_Value != *(a2 + 36) )
  {
    (*(this->m_baseLayer._vptr_CNetworkedSequenceOperation + 3))(&this->m_baseLayer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_baseLayer.m_flPrevCycle.m_Value = *(a2 + 36);
  }
  if ( this->m_baseLayer.m_flCycle.m_Value != *(a2 + 40) )
  {
    (*(this->m_baseLayer._vptr_CNetworkedSequenceOperation + 3))(&this->m_baseLayer, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_baseLayer.m_flCycle.m_Value = *(a2 + 40);
  }
  if ( this->m_baseLayer.m_flWeight.m_Value.m_Value != *(a2 + 44) )
  {
    (*(this->m_baseLayer._vptr_CNetworkedSequenceOperation + 3))(&this->m_baseLayer, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v19 = *(a2 + 44);
    v20 = g_pQuantizedFloatEncoders + 32LL * this->m_baseLayer.m_flWeight.m_Value.m_nEncoder;
    v21 = *(v20 + 12);
    if ( v19 <= v21 )
      v21 = fmaxf(*(v20 + 8), v19);
    this->m_baseLayer.m_flWeight.m_Value.m_Value = v21;
  }
  this->m_baseLayer.m_bSequenceChangeNetworked = *(a2 + 52);
  this->m_baseLayer.m_bDiscontinuity = *(a2 + 53);
  this->m_baseLayer.m_flPrevCycleFromDiscontinuity = *(a2 + 56);
  this->m_baseLayer.m_flPrevCycleForAnimEventDetection = *(a2 + 60);
  this->m_bSequenceFinished = *(a2 + 64);
  this->m_flGroundSpeed = *(a2 + 68);
  this->m_flLastEventCycle = *(a2 + 72);
  this->m_flLastEventAnimTime = *(a2 + 76);
  if ( this->m_flPlaybackRate.m_Value.m_Value != *(a2 + 80) )
  {
    (*(this->_vptr_CSkeletonAnimationController + 27))(this, 80, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v22 = *(a2 + 80);
    v23 = g_pQuantizedFloatEncoders + 32LL * this->m_flPlaybackRate.m_Value.m_nEncoder;
    v24 = *(v23 + 12);
    if ( v22 <= v24 )
      v24 = fmaxf(*(v23 + 8), v22);
    this->m_flPlaybackRate.m_Value.m_Value = v24;
  }
  this->m_flPrevAnimTime = *(a2 + 88);
  *this->m_flPoseParameter.m_Value = *(a2 + 92);
  *&this->m_flPoseParameter.m_Value[2] = *(a2 + 100);
  *&this->m_flPoseParameter.m_Value[4] = *(a2 + 108);
  *&this->m_flPoseParameter.m_Value[6] = *(a2 + 116);
  *&this->m_flPoseParameter.m_Value[8] = *(a2 + 124);
  *&this->m_flPoseParameter.m_Value[10] = *(a2 + 132);
  *&this->m_flPoseParameter.m_Value[12] = *(a2 + 140);
  *&this->m_flPoseParameter.m_Value[14] = *(a2 + 148);
  *&this->m_flPoseParameter.m_Value[16] = *(a2 + 156);
  *&this->m_flPoseParameter.m_Value[18] = *(a2 + 164);
  *&this->m_flPoseParameter.m_Value[20] = *(a2 + 172);
  *&this->m_flPoseParameter.m_Value[22] = *(a2 + 180);
  if ( this->m_bClientSideAnimation.m_Value != *(a2 + 188) )
  {
    (*(this->_vptr_CSkeletonAnimationController + 27))(this, 188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bClientSideAnimation.m_Value = *(a2 + 188);
  }
  this->m_bEnableIK = *(a2 + 189);
  this->m_bNetworkedAnimationInputsChanged = *(a2 + 190);
  if ( this->m_nNewSequenceParity.m_Value != *(a2 + 192) )
  {
    (*(this->_vptr_CSkeletonAnimationController + 27))(this, 192, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nNewSequenceParity.m_Value = *(a2 + 192);
  }
  if ( this->m_nResetEventsParity.m_Value != *(a2 + 196) )
  {
    (*(this->_vptr_CSkeletonAnimationController + 27))(this, 196, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nResetEventsParity.m_Value = *(a2 + 196);
  }
  this->m_flIKGroundContactTime = *(a2 + 200);
  this->m_flIKGroundMinHeight = *(a2 + 204);
  this->m_flIKGroundMaxHeight = *(a2 + 208);
  this->m_flEstIkFloor = *(a2 + 212);
  this->m_flEstIkOffset = *(a2 + 216);
  this->m_pIk = *(a2 + 224);
  this->m_iIKCounter = *(a2 + 232);
  this->m_flCachedSequenceCycleRate = *(a2 + 236);
  this->m_flCachedGroundSpeed = *(a2 + 240);
  this->m_flCachedOneMinusLastVisibleCycle = *(a2 + 244);
  this->m_bModelHasNoPoseParams = *(a2 + 248);
  this->m_bNotifyWhenSequenceFinished = *(a2 + 249);
  if ( *(a2 + 272) != this->m_SequenceTransitioner.m_currentOp.m_hSequence.m_Value.m_Data )
  {
    (*(this->m_SequenceTransitioner.m_currentOp._vptr_CNetworkedSequenceOperation + 3))(
      &this->m_SequenceTransitioner.m_currentOp,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_SequenceTransitioner.m_currentOp.m_hSequence.m_Value.m_Data = *(a2 + 272);
  }
  if ( this->m_SequenceTransitioner.m_currentOp.m_flPrevCycle.m_Value != *(a2 + 276) )
  {
    (*(this->m_SequenceTransitioner.m_currentOp._vptr_CNetworkedSequenceOperation + 3))(
      &this->m_SequenceTransitioner.m_currentOp,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_SequenceTransitioner.m_currentOp.m_flPrevCycle.m_Value = *(a2 + 276);
  }
  if ( this->m_SequenceTransitioner.m_currentOp.m_flCycle.m_Value != *(a2 + 280) )
  {
    (*(this->m_SequenceTransitioner.m_currentOp._vptr_CNetworkedSequenceOperation + 3))(
      &this->m_SequenceTransitioner.m_currentOp,
      16,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_SequenceTransitioner.m_currentOp.m_flCycle.m_Value = *(a2 + 280);
  }
  if ( this->m_SequenceTransitioner.m_currentOp.m_flWeight.m_Value.m_Value != *(a2 + 284) )
  {
    (*(this->m_SequenceTransitioner.m_currentOp._vptr_CNetworkedSequenceOperation + 3))(
      &this->m_SequenceTransitioner.m_currentOp,
      20,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    v16 = *(a2 + 284);
    v17 = g_pQuantizedFloatEncoders + 32LL * this->m_SequenceTransitioner.m_currentOp.m_flWeight.m_Value.m_nEncoder;
    v18 = *(v17 + 12);
    if ( v16 <= v18 )
      v18 = fmaxf(*(v17 + 8), v16);
    this->m_SequenceTransitioner.m_currentOp.m_flWeight.m_Value.m_Value = v18;
  }
  thisa = this;
  v41 = a2 + 312;
  v4 = a2 + 312;
  p_m_op = &this->m_SequenceTransitioner.m_transitioningLayers[0].m_op;
  v6 = &this->m_SequenceTransitioner.m_transitioningLayers[0].m_op;
  p_m_pOwner = &this->m_SequenceTransitioner.m_pOwner;
  p_m_flCycle = &this->m_SequenceTransitioner.m_transitioningLayers[0].m_op.m_flCycle;
  this->m_SequenceTransitioner.m_currentOp.m_bSequenceChangeNetworked = *(a2 + 292);
  v8 = a2 + 320;
  v25 = a2;
  this->m_SequenceTransitioner.m_currentOp.m_bDiscontinuity = *(a2 + 293);
  m_transitioningLayers = this->m_SequenceTransitioner.m_transitioningLayers;
  v9 = this->m_SequenceTransitioner.m_transitioningLayers;
  this->m_SequenceTransitioner.m_currentOp.m_flPrevCycleFromDiscontinuity = *(a2 + 296);
  v39 = a2 + 328;
  p_m_hSequence = &this->m_SequenceTransitioner.m_transitioningLayers[0].m_op.m_hSequence;
  this->m_SequenceTransitioner.m_currentOp.m_flPrevCycleForAnimEventDetection = *(a2 + 300);
  p_m_flPrevCycle = &this->m_SequenceTransitioner.m_transitioningLayers[0].m_op.m_flPrevCycle;
  this->m_SequenceTransitioner.m_flCurrentPlaybackRate = *(a2 + 304);
  this->m_SequenceTransitioner.m_flCurrentAnimTime = *(a2 + 308);
  do
  {
    v10 = v9 - m_transitioningLayers;
    v11 = v4 - v41;
    if ( *(v4 - v41 + v39) != *(&p_m_hSequence->m_Value.m_Data + v9 - m_transitioningLayers) )
    {
      v30 = v8;
      v34 = p_m_flCycle;
      v38 = p_m_op;
      (*(&p_m_op->_vptr_CNetworkedSequenceOperation + v10))[3](v6, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v8 = v30;
      p_m_flCycle = v34;
      p_m_op = v38;
      *(p_m_hSequence + v10) = *(v4 + 16);
    }
    if ( *(&p_m_flPrevCycle->m_Value + v10) != *(v4 + 20) )
    {
      v29 = v8;
      v33 = p_m_flCycle;
      v37 = p_m_op;
      (*(&p_m_op->_vptr_CNetworkedSequenceOperation + v10))[3](v6, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v8 = v29;
      p_m_flCycle = v33;
      *(p_m_flPrevCycle + v10) = *(v4 + 20);
      p_m_op = v37;
    }
    if ( *(&p_m_flCycle->m_Value + v10) != *(v4 + 24) )
    {
      v28 = v8;
      v32 = p_m_flCycle;
      v36 = p_m_op;
      (*(&p_m_op->_vptr_CNetworkedSequenceOperation + v10))[3](v6, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      p_m_flCycle = v32;
      v8 = v28;
      p_m_op = v36;
      *(v32 + v10) = *(v4 + 24);
    }
    if ( v9->m_op.m_flWeight.m_Value.m_Value != *(v4 + 28) )
    {
      v27 = v8;
      v31 = p_m_flCycle;
      v35 = p_m_op;
      (*(&p_m_op->_vptr_CNetworkedSequenceOperation + v10))[3](v6, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v13 = *(v4 + 28);
      p_m_op = v35;
      p_m_flCycle = v31;
      v14 = g_pQuantizedFloatEncoders + 32LL * v9->m_op.m_flWeight.m_Value.m_nEncoder;
      v8 = v27;
      v15 = *(v14 + 12);
      if ( v13 <= v15 )
        v15 = fmaxf(*(v14 + 8), v13);
      v9->m_op.m_flWeight.m_Value.m_Value = v15;
    }
    ++v9;
    v4 += 72;
    v6 = (v6 + 72);
    *(&p_m_op->m_bSequenceChangeNetworked + v10) = *(v11 + v8 + 28);
    *(&p_m_op->m_bDiscontinuity + v10) = *(v11 + v8 + 29);
    *(&p_m_op->m_flPrevCycleFromDiscontinuity + v10) = *(v11 + v8 + 32);
    *(&p_m_op->m_flPrevCycleForAnimEventDetection + v10) = *(v11 + v8 + 36);
    v9[-1].m_flStartAnimTime = *(v4 - 24);
    v9[-1].m_flStartWeight = *(v4 - 20);
    v9[-1].m_flAnimTime = *(v4 - 16);
    v9[-1].m_nOrder = *(v4 - 12);
    v9[-1].m_flPlaybackRate = *(v4 - 8);
    v9[-1].m_flFadeOutDuration = *(v4 - 4);
  }
  while ( v9 != p_m_pOwner );
  thisa->m_SequenceTransitioner.m_pOwner = *(v25 + 600);
  return thisa;
}


// CBaseAnimatingController::NetworkStateChanged  (line 70, @0x000000000208e700, libserver.so)
void __fastcall CBaseAnimatingController::NetworkStateChanged(CBaseAnimatingController *const this)
{
  ;
}


// CBaseAnimatingController::NetworkStateChanged  (line 70, @0x000000000208e710, libserver.so)
void __fastcall CBaseAnimatingController::NetworkStateChanged(
        CBaseAnimatingController *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CBaseAnimatingController::NetworkStateChangedLog  (line 70, @0x000000000208e720, libserver.so)
void __fastcall CBaseAnimatingController::NetworkStateChangedLog(
        const CBaseAnimatingController *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CBaseAnimatingController::NetworkVar_m_baseLayer::NetworkStateChanged  (line 335, @0x000000000208e730, libserver.so)  // inlines: DispatchNetworkStateChanged<CBaseAnimatingController>
void __fastcall CBaseAnimatingController::NetworkVar_m_baseLayer::NetworkStateChanged(
        CBaseAnimatingController::NetworkVar_m_baseLayer *const this)
{
  (*(*(this - 3) + 208LL))(this - 24);
}


// CBaseAnimatingController::NetworkVar_m_baseLayer::NetworkStateChangedLog  (line 335, @0x000000000208e750, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CBaseAnimatingController>
void __fastcall CBaseAnimatingController::NetworkVar_m_baseLayer::NetworkStateChangedLog(
        const CBaseAnimatingController::NetworkVar_m_baseLayer *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 3) + 224LL))(this - 24, pVarName, pMsg);
}


// CBaseAnimatingController::NetworkVar_m_baseLayer::NetworkStateChanged  (line 335, @0x000000000208e770, libserver.so)  // inlines: DispatchNetworkStateChanged<CBaseAnimatingController>
void __fastcall CBaseAnimatingController::NetworkVar_m_baseLayer::NetworkStateChanged(
        CBaseAnimatingController::NetworkVar_m_baseLayer *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 3) + 216LL))(this - 24, nLocalOffset + 24, nArrayIndex, nPathIndex.m_Value);
}


// CBaseAnimatingController::Schema_DynamicBinding  (line 397, @0x000000000208fbb0, libserver.so)
// calls: CBaseAnimatingController::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseAnimatingController::Schema_DynamicBinding(
        const CBaseAnimatingController *const this)
{
  CBaseAnimatingController::Schema_VerifyBindingIsRegistered();
  return CBaseAnimatingController::s_pSchemaBinding;
}


// CBaseAnimatingController::HackToMakeAVTable  (line 399, @0x000000000208e790, libserver.so)
void __fastcall CBaseAnimatingController::HackToMakeAVTable(const CBaseAnimatingController *const this)
{
  ;
}


// CBaseAnimatingController::GetSequence  (line 482, @0x000000000208e7a0, libserver.so)
HSequence __fastcall CBaseAnimatingController::GetSequence(const CBaseAnimatingController *const this)
{
  return this->m_baseLayer.m_hSequence.m_Value.m_Data;
}


// CBaseAnimatingController::IsSequenceFinished  (line 497, @0x000000000208e7b0, libserver.so)
bool __fastcall CBaseAnimatingController::IsSequenceFinished(const CBaseAnimatingController *const this)
{
  return this->m_bSequenceFinished;
}


// CBaseAnimatingController::SequenceDuration  (line 522, @0x0000000002094f50, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: CBaseAnimatingController::SequenceDuration
float __fastcall CBaseAnimatingController::SequenceDuration(
        const CBaseAnimatingController *const this,
        HSequence hSequence)
{
  const CModel **m_pBinding; // rax

  m_pBinding = this->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    return CBaseAnimatingController::SequenceDuration(this, *m_pBinding, hSequence);
  else
    return CBaseAnimatingController::SequenceDuration(this, 0, hSequence);
}


// CBodyComponentBaseAnimating::GetAnimationController  (line 574, @0x000000000208e7c0, libserver.so)
CSkeletonAnimationController *__fastcall CBodyComponentBaseAnimating::GetAnimationController(
        CBodyComponentBaseAnimating *const this)
{
  return &this->m_animationController;
}


// CBodyComponentBaseAnimating::NetworkVar_m_animationController::NetworkStateChanged  (line 576, @0x00000000020928b0, libserver.so)  // inlines: DispatchNetworkStateChanged<CBodyComponentSkeletonInstance>, Get, NetworkStateChanged, operator CEntityInstance*
void __fastcall CBodyComponentBaseAnimating::NetworkVar_m_animationController::NetworkStateChanged(
        CBodyComponentBaseAnimating::NetworkVar_m_animationController *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  _QWORD *v4; // rax

  v4 = *(this - 3);
  if ( v4 != 0 && (*(v4[1] + 49LL) & 4) == 0 )
    (*(*v4 + 176LL))(*(this - 3), nLocalOffset + 888, nArrayIndex, *(this - 8));
}


// CBodyComponentBaseAnimating::NetworkVar_m_animationController::NetworkStateChangedLog  (line 576, @0x00000000020928f0, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CBodyComponentSkeletonInstance>, Get, NetworkStateChangedLog, operator const CEntityInstance*
void __fastcall CBodyComponentBaseAnimating::NetworkVar_m_animationController::NetworkStateChangedLog(
        const CBodyComponentBaseAnimating::NetworkVar_m_animationController *const this,
        const char *pVarName,
        const char *pMsg)
{
  _QWORD *v3; // rdi

  v3 = *(this - 3);
  if ( v3 != 0 && (*(v3[1] + 49LL) & 4) == 0 )
    (*(*v3 + 184LL))(v3, pVarName, pMsg);
}


// CBodyComponentBaseAnimating::NetworkVar_m_animationController::NetworkStateChanged  (line 576, @0x0000000002092920, libserver.so)  // inlines: DispatchNetworkStateChanged<CBodyComponentSkeletonInstance>, Get, NetworkStateChanged, operator CEntityInstance*
void __fastcall CBodyComponentBaseAnimating::NetworkVar_m_animationController::NetworkStateChanged(
        CBodyComponentBaseAnimating::NetworkVar_m_animationController *const this)
{
  _QWORD *v1; // rdi

  v1 = *(this - 3);
  if ( v1 != 0 && (*(v1[1] + 49LL) & 4) == 0 )
    (*(*v1 + 168LL))(v1);
}


// CBodyComponentBaseAnimating::Schema_DynamicBinding  (line 582, @0x000000000208fbd0, libserver.so)
// calls: CBodyComponentBaseAnimating::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBodyComponentBaseAnimating::Schema_DynamicBinding(
        const CBodyComponentBaseAnimating *const this)
{
  CBodyComponentBaseAnimating::Schema_VerifyBindingIsRegistered();
  return CBodyComponentBaseAnimating::s_pSchemaBinding;
}


// CBodyComponentBaseAnimating::HackToMakeAVTable  (line 585, @0x000000000208e7d0, libserver.so)
void __fastcall CBodyComponentBaseAnimating::HackToMakeAVTable(const CBodyComponentBaseAnimating *const this)
{
  ;
}


