
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSkeletonAnimationController::Schema_DynamicBinding  (line 98, @0x00000000020f55c0, libserver.so)
// calls: CSkeletonAnimationController::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CSkeletonAnimationController::Schema_DynamicBinding(
        const CSkeletonAnimationController *const this)
{
  CSkeletonAnimationController::Schema_VerifyBindingIsRegistered();
  return CSkeletonAnimationController::s_pSchemaBinding;
}


// CSkeletonAnimationController::HackToMakeAVTable  (line 99, @0x00000000020f1300, libserver.so)
void __fastcall CSkeletonAnimationController::HackToMakeAVTable(const CSkeletonAnimationController *const this)
{
  ;
}


// CSkeletonAnimationController::UpdateOnRemove  (line 113, @0x00000000020f1310, libserver.so)
void __fastcall CSkeletonAnimationController::UpdateOnRemove(
        CSkeletonAnimationController *const this,
        CEntityInstance *pEntity)
{
  ;
}


// CSkeletonAnimationController::OnSetDormant  (line 114, @0x00000000020f1320, libserver.so)
void __fastcall CSkeletonAnimationController::OnSetDormant(
        CSkeletonAnimationController *const this,
        CEntityInstance *pEntity,
        EntityDormancyType_t nPrevDormancyType,
        EntityDormancyType_t nDormancyType)
{
  ;
}


// CSkeletonAnimationController::PreDataUpdate  (line 115, @0x000000000208e650, libserver.so)
void __fastcall CSkeletonAnimationController::PreDataUpdate(
        CSkeletonAnimationController *const this,
        CEntityInstance *pEntity,
        DataUpdateType_t updateType)
{
  ;
}


// CSkeletonAnimationController::PostDataUpdate  (line 116, @0x00000000020f1330, libserver.so)
void __fastcall CSkeletonAnimationController::PostDataUpdate(
        CSkeletonAnimationController *const this,
        CEntityInstance *pEntity,
        DataUpdateType_t updateType)
{
  ;
}


// CSkeletonAnimationController::OnRestore  (line 117, @0x000000000208e660, libserver.so)
void __fastcall CSkeletonAnimationController::OnRestore(
        CSkeletonAnimationController *const this,
        CEntityInstance *pEntity)
{
  ;
}


// CSkeletonAnimationController::DispatchAnimEvents  (line 121, @0x00000000020f1340, libserver.so)
void __fastcall CSkeletonAnimationController::DispatchAnimEvents(
        CSkeletonAnimationController *const this,
        double a2,
        float flAnimTime,
        CBaseEntity *pAlternateEventHandler)
{
  ;
}


// CSkeletonAnimationController::VerifyValidity  (line 126, @0x000000000208e670, libserver.so)
void __fastcall CSkeletonAnimationController::VerifyValidity(CSkeletonAnimationController *const this)
{
  ;
}


// CNetworkedSequenceOperation::Schema_DynamicBinding  (line 227, @0x000000000208fb70, libserver.so)
// calls: CNetworkedSequenceOperation::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CNetworkedSequenceOperation::Schema_DynamicBinding(
        const CNetworkedSequenceOperation *const this)
{
  CNetworkedSequenceOperation::Schema_VerifyBindingIsRegistered();
  return CNetworkedSequenceOperation::s_pSchemaBinding;
}


// CNetworkedSequenceOperation::HackToMakeAVTable  (line 229, @0x000000000208e680, libserver.so)
void __fastcall CNetworkedSequenceOperation::HackToMakeAVTable(const CNetworkedSequenceOperation *const this)
{
  ;
}


// CNetworkedSequenceOperation::NetworkStateChanged  (line 230, @0x00000000020f1350, libserver.so)
void __fastcall CNetworkedSequenceOperation::NetworkStateChanged(CNetworkedSequenceOperation *const this)
{
  ;
}


// CNetworkedSequenceOperation::NetworkStateChanged  (line 230, @0x00000000020f1360, libserver.so)
void __fastcall CNetworkedSequenceOperation::NetworkStateChanged(
        CNetworkedSequenceOperation *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CNetworkedSequenceOperation::NetworkStateChangedLog  (line 230, @0x00000000020f1370, libserver.so)
void __fastcall CNetworkedSequenceOperation::NetworkStateChangedLog(
        const CNetworkedSequenceOperation *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CAnimationOperationWriter::LatchAnimationOperation  (line 336, @0x0000000002094b10, libserver.so)  // inlines: GetEncoder, GetQuantizedFloatEncoderByIndex, NetworkStateChanged, Set, operator=, operator=<HSequence>, operator=<float>
// callers: CAnimationLayer::Init, CAnimationLayer::OnClientSideAnimCycleReset, CAnimationLayer::OnOrderChanged, CAnimationLayer::SetSequence, CAnimationLayer::CopyFrom, CAnimationLayer::AnimationFrameAdvance, CBaseAnimatingController::AnimationFrameAdvanceInternal, CBaseAnimatingController::SetSequence, CBaseAnimatingOverlayController::SetLayerCycle, CBaseAnimatingOverlayController::SetLayerWeight, CBaseAnimatingOverlayController::AddLayeredSequence, CNetworkedSequenceOperation::Spawn (14 total)
void __fastcall CAnimationOperationWriter::LatchAnimationOperation(CAnimationOperationWriter *const this)
{
  CNetworkedSequenceOperation *m_pOp; // rbx
  int32 m_Data; // r13d
  __int64 v4; // rax
  float v5; // xmm1_4
  float m_flWeight; // [rsp+Ch] [rbp-24h]
  float m_flCycle; // [rsp+Ch] [rbp-24h]
  float m_flPrevCycle; // [rsp+Ch] [rbp-24h]

  m_pOp = this->m_pOp;
  if ( this->m_flPrevCycle != m_pOp->m_flPrevCycle.m_Value )
  {
    m_flPrevCycle = this->m_flPrevCycle;
    (*(m_pOp->_vptr_CNetworkedSequenceOperation + 3))(m_pOp, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_pOp->m_flPrevCycle.m_Value = m_flPrevCycle;
    m_pOp = this->m_pOp;
  }
  if ( this->m_flCycle != m_pOp->m_flCycle.m_Value )
  {
    m_flCycle = this->m_flCycle;
    (*(m_pOp->_vptr_CNetworkedSequenceOperation + 3))(m_pOp, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_pOp->m_flCycle.m_Value = m_flCycle;
    m_pOp = this->m_pOp;
  }
  m_Data = this->m_hSequence.m_Data;
  if ( m_Data != m_pOp->m_hSequence.m_Value.m_Data )
  {
    (*(m_pOp->_vptr_CNetworkedSequenceOperation + 3))(m_pOp, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_pOp->m_hSequence.m_Value.m_Data = m_Data;
    m_pOp = this->m_pOp;
  }
  if ( this->m_flWeight != m_pOp->m_flWeight.m_Value.m_Value )
  {
    m_flWeight = this->m_flWeight;
    (*(m_pOp->_vptr_CNetworkedSequenceOperation + 3))(m_pOp, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4 = g_pQuantizedFloatEncoders + 32LL * m_pOp->m_flWeight.m_Value.m_nEncoder;
    v5 = *(v4 + 12);
    if ( m_flWeight <= v5 )
      v5 = fmaxf(*(v4 + 8), m_flWeight);
    m_pOp->m_flWeight.m_Value.m_Value = v5;
  }
}


