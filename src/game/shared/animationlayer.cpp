
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CAnimationLayer::AddDatadescMetadataKeys  (line 39, @0x000000000205ec70, libserver.so)
void __fastcall CAnimationLayer::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CAnimationLayer::GetBaseMap  (line 39, @0x000000000205ec80, libserver.so)
datamap_t *__cdecl CAnimationLayer::GetBaseMap()
{
  return 0;
}


// DataMapInit<CAnimationLayer>  (line 39, @0x000000000205ec90, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, ActivityDataOps, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "CAnimationLayer"
// globals: `guard variable for'DataMapInit<CAnimationLayer>(CAnimationLayer *)::nameHolder, `guard variable for'DataMapInit<CAnimationLayer>(CAnimationLayer *)::dataDesc, CAnimationLayer::m_DataMap, DataMapInit<CAnimationLayer>(CAnimationLayer *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CAnimationLayer>(CAnimationLayer *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CAnimationLayer>(CAnimationLayer *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CAnimationLayer>(CAnimationLayer *)::nameHolder) != 0 )
  {
    DataMapInit<CAnimationLayer>(CAnimationLayer *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CAnimationLayer>(CAnimationLayer *)::nameHolder.m_pszBase = "CAnimationLayer";
    DataMapInit<CAnimationLayer>(CAnimationLayer *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CAnimationLayer>(CAnimationLayer *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CAnimationLayer>(CAnimationLayer *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CAnimationLayer>(CAnimationLayer *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CAnimationLayer>(CAnimationLayer *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CAnimationLayer>(CAnimationLayer *)::nameHolder,
      &_dso_handle);
  }
  CAnimationLayer::m_DataMap.baseMap = 0;
  if ( `guard variable for'datamap_t * DataMapInit<CAnimationLayer>(CAnimationLayer *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CAnimationLayer>(CAnimationLayer *)::dataDesc) != 0 )
  {
    DataMapInit<CAnimationLayer>(CAnimationLayer *)::dataDesc[7].pSaveRestoreOps = ActivityDataOps();
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CAnimationLayer>(CAnimationLayer *)::dataDesc);
  }
  CAnimationLayer::m_DataMap.dataNumFields = 13;
  CAnimationLayer::m_DataMap.dataDesc = &DataMapInit<CAnimationLayer>(CAnimationLayer *)::dataDesc[1];
  return &CAnimationLayer::m_DataMap;
}


// CAnimationLayer::CAnimationLayer  (line 93, @0x000000000205f060, libserver.so)  // inlines: CEntityOwnerPtr, CNetworkVarBase, CNetworkedQuantizedFloat, CSmartPtr, ChangeAccessorFieldPathIndex_t, EnsureValidValue<bool>, EnsureValidValue<int>, Get, GetEncoder, GetQuantizedFloatEncoderByIndex, Init<true>, NetworkStateChanged, NetworkVar_m_op, Set, operator CEntityInstance*
// calls: CNetworkedSequenceOperation::CNetworkedSequenceOperation, FindOrCreateQuantizedFloatEncoder, CAnimationLayer::Init
// callers: CSchemaUtlVectorManipulator<CUtlVector<CAnimationLayer, CUtlMemory<CAnimationLayer, int> >, CAnimationLayer>::SwapItems, CSchemaUtlVectorManipulator<CUtlVector<CAnimationLayer, CUtlMemory<CAnimationLayer, int> >, CAnimationLayer>::InsertMultipleBefore, CUtlVectorBase<CAnimationLayer, CUtlMemory<CAnimationLayer, int> >::SetCount, CSchemaClassBinding<CAnimationLayer>::Allocate, CSchemaClassBinding<CAnimationLayer>::ConstructInPlace, CSchemaClassBinding<CAnimationLayer>::AllocateAndCopyConstruct, CSchemaUtlVectorManipulator<CUtlVector<CAnimationLayer, CNetworkUtlVector_MemoryType<CAnimationLayer, -1> >, CAnimationLayer>::SwapItems, CUtlVectorBase<CAnimationLayer, CNetworkUtlVector_MemoryType<CAnimationLayer, -1> >::SetCount, CSchemaUtlVectorManipulator<CUtlVector<CAnimationLayer, CNetworkUtlVector_MemoryType<CAnimationLayer, -1> >, CAnimationLayer>::InsertMultipleBefore, CBaseAnimatingOverlayController::AddOverlays, CSequenceTransitioner::UpdateCurrent, CSequenceTransitioner::CheckForSequenceChange
// strings: "m_flPlaybackRate"
void __fastcall CAnimationLayer::CAnimationLayer(CAnimationLayer *const this)
{
  CAnimationLayer::NetworkVar_m_op *p_m_op; // rdi
  uint16 QuantizedFloatEncoder; // ax
  __int64 v4; // rdx
  float v5; // xmm0_4
  float v6; // xmm1_4
  CEntityInstance *m_pObj; // rdi
  bool v8; // [rsp+6h] [rbp-1Ah]

  p_m_op = &this->m_op;
  *&p_m_op[-1].m_flCycle.m_Value = off_3FEC7F0;
  *&p_m_op[-1].m_flWeight.m_Value.m_nEncoder = CEntitySpawnHelper::gm_pCurEntityPtr;
  LOWORD(p_m_op[-1].m_flPrevCycleFromDiscontinuity) = -1;
  CNetworkedSequenceOperation::CNetworkedSequenceOperation(p_m_op);
  this->m_op._vptr_CNetworkedSequenceOperation = off_3FEC7B0;
  this->m_nOrder.m_Value = 0;
  QuantizedFloatEncoder = FindOrCreateQuantizedFloatEncoder(1, "m_flPlaybackRate", 511164315, 10, 8, 0.0, 5.0);
  v4 = g_pQuantizedFloatEncoders + 32LL * QuantizedFloatEncoder;
  v5 = *(v4 + 12);
  if ( v5 >= 0.0 )
    v5 = fmaxf(*(v4 + 8), 0.0);
  this->m_flPlaybackRate.m_Value.m_nEncoder = QuantizedFloatEncoder;
  this->m_flPlaybackRate.m_Value.m_Value = v5;
  this->m_flPlaybackRate.m_Value.m_bUnflattened = v8;
  v6 = *(v4 + 12);
  if ( v5 <= v6 )
    v6 = fmaxf(*(v4 + 8), v5);
  m_pObj = this->__m_pChainEntity.m_pObj;
  this->m_flPlaybackRate.m_Value.m_Value = v6;
  if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 68, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
  this->m_bLooping.m_Value = 0;
  this->m_nNewSequenceParity.m_Value = 0;
  this->m_pOwner = 0;
  CAnimationLayer::Init(this);
}


// CAnimationLayer::~CAnimationLayer  (line 99, @0x000000000205edb0, libserver.so)
// callers: CSchemaUtlVectorManipulator<CUtlVector<CAnimationLayer, CUtlMemory<CAnimationLayer, int> >, CAnimationLayer>::SwapItems, CSchemaUtlVectorManipulator<CUtlVector<CAnimationLayer, CUtlMemory<CAnimationLayer, int> >, CAnimationLayer>::RemoveMultiple, CSchemaClassBinding<CSequenceTransitioner>::DestructInPlace, CAtomicManipulator<CUtlVector<CAnimationLayer, CUtlMemory<CAnimationLayer, int> > >::Deallocate, CSchemaClassBinding<CSequenceTransitioner>::Deallocate, CSchemaUtlVectorManipulator<CUtlVector<CAnimationLayer, CUtlMemory<CAnimationLayer, int> >, CAnimationLayer>::DeallocateUtlVector, CUtlVectorBase<CAnimationLayer, CUtlMemory<CAnimationLayer, int> >::SetCount, CSchemaClassBinding<CAnimationLayer>::Deallocate, CSchemaClassBinding<CAnimationLayer>::DestructInPlace, CSchemaUtlVectorManipulator<CUtlVector<CAnimationLayer, CNetworkUtlVector_MemoryType<CAnimationLayer, -1> >, CAnimationLayer>::SwapItems, CSchemaUtlVectorManipulator<CUtlVector<CAnimationLayer, CNetworkUtlVector_MemoryType<CAnimationLayer, -1> >, CAnimationLayer>::RemoveMultiple, CAtomicManipulator<CUtlVector<CAnimationLayer, CNetworkUtlVector_MemoryType<CAnimationLayer, -1> > >::Deallocate (18 total)
void __fastcall CAnimationLayer::~CAnimationLayer(CAnimationLayer *const this)
{
  this->_vptr_CAnimationLayer = off_3FEC7F0;  // vptr: CAnimationLayer
}


// CAnimationLayer::SetOwner  (line 103, @0x000000000205edc0, libserver.so)
// callers: CSequenceTransitioner::UpdateCurrent, CSequenceTransitioner::CheckForSequenceChange
void __fastcall CAnimationLayer::SetOwner(CAnimationLayer *const this, CBaseAnimatingOverlayController *pOverlay)
{
  this->m_pOwner = pOverlay;
}


// CAnimationLayer::Init  (line 108, @0x000000000205f180, libserver.so)  // inlines: SetOwner
// calls: CAnimationLayer::Init
void __fastcall CAnimationLayer::Init(CAnimationLayer *const this, CBaseAnimatingOverlayController *pOverlay)
{
  this->m_pOwner = pOverlay;
  CAnimationLayer::Init(this);
}


// CAnimationLayer::Init  (line 117, @0x000000000205edd0, libserver.so)  // inlines: CAnimationOperationWriter, Get, GetEncoder, GetQuantizedFloatEncoderByIndex, HSequence, Init, NetworkStateChanged, Set, SetSequence, SetWeight, operator CEntityInstance*, operator=, operator=<CBaseAnimatingOverlayController::<anonymous enum> >, operator=<bool>, operator=<double>, operator=<int>, rendertime, simorrendertime, ~CAnimationOperationWriter
// calls: CAnimationOperationWriter::LatchAnimationOperation, CGlobalVarsBase::curtime, _Unwind_Resume
// callers: CAnimationLayer::CAnimationLayer, CAnimationLayer::Init, CBaseAnimatingOverlayController::FastRemoveLayer, CBaseAnimatingOverlayController::AnimationFrameAdvance, CBaseAnimatingOverlayController::AddOverlays
void __fastcall CAnimationLayer::Init(CAnimationLayer *const this)
{
  bool v2; // zf
  float m_flRenderTime; // xmm0_4
  int m_Value; // eax
  CBaseAnimatingOverlayController *m_pOwner; // rax
  CEntityInstance *v6; // rax
  int32 m_Data; // eax
  float32 v8; // xmm0_4
  CEntityInstance *v9; // rdi
  CEntityInstance *v10; // rdi
  CEntityInstance *v11; // rdi
  __int64 v12; // rax
  float v13; // xmm1_4
  CEntityInstance *m_pObj; // rdi
  CAnimationOperationWriter writer; // [rsp+10h] [rbp-30h] BYREF

  this->m_nFlags = 0;
  if ( this->m_bLooping.m_Value )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 76, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_bLooping.m_Value = 0;
  }
  this->m_flLastEventCycle = 0.0;
  this->m_bSequenceFinished = 0;
  v2 = this->m_flPlaybackRate.m_Value.m_Value == 1.0;
  this->m_nActivity = -1;
  this->m_nPriority = 0;
  this->m_flKillRate = 100.0;
  this->m_flKillDelay = 0.0;
  if ( !v2 )
  {
    v11 = this->__m_pChainEntity.m_pObj;
    if ( v11 != 0 && (v11->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(v11->_vptr_IHandleEntity + 22))(v11, 68, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    v12 = g_pQuantizedFloatEncoders + 32LL * this->m_flPlaybackRate.m_Value.m_nEncoder;
    v13 = *(v12 + 12);
    if ( v13 >= 1.0 )
      v13 = fmaxf(*(v12 + 8), 1.0);
    this->m_flPlaybackRate.m_Value.m_Value = v13;
  }
  m_flRenderTime = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( gpGlobals->m_bInSimulation )
      m_flRenderTime = CGlobalVarsBase::curtime(gpGlobals, 0);
    else
      m_flRenderTime = gpGlobals->m_flRenderTime;
  }
  m_Value = this->m_nNewSequenceParity.m_Value;
  this->m_flLastAccess = m_flRenderTime;
  this->m_flLayerAnimtime = 0.0;
  this->m_flLayerFadeOuttime = 0.0;
  if ( m_Value != 0 )
  {
    v10 = this->__m_pChainEntity.m_pObj;
    if ( v10 != 0 && (v10->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(v10->_vptr_IHandleEntity + 22))(v10, 80, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_nNewSequenceParity.m_Value = 0;
  }
  m_pOwner = this->m_pOwner;
  writer.m_hSequence.m_Data = -1;
  if ( m_pOwner != 0 )
    v6 = m_pOwner->m_pSkeletonInstance->m_pOwner;
  else
    v6 = 0;
  writer.m_pEntity = v6;
  m_Data = this->m_op.m_hSequence.m_Value.m_Data;
  v8 = this->m_op.m_flWeight.m_Value.m_Value;
  writer.m_pOp = &this->m_op;
  writer.m_flWeight = v8;
  writer.m_hSequence.m_Data = m_Data;
  if ( m_Data != 0 )
    writer.m_hSequence.m_Data = 0;
  writer.m_flPrevCycle = 0.0;
  writer.m_flCycle = 0.0;
  if ( v8 != 0.0 )
    writer.m_flWeight = 0.0;
  if ( this->m_nOrder.m_Value != 15 )
  {
    v9 = this->__m_pChainEntity.m_pObj;
    if ( v9 != 0 && (v9->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(v9->_vptr_IHandleEntity + 22))(v9, 64, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_nOrder.m_Value = 15;
  }
  CAnimationOperationWriter::LatchAnimationOperation(&writer);
}


// CAnimationLayer::GetSkeletonInstance  (line 139, @0x000000000205f1a0, libserver.so)
CSkeletonInstance *__fastcall CAnimationLayer::GetSkeletonInstance(CAnimationLayer *const this)
{
  CBaseAnimatingOverlayController *m_pOwner; // rax

  m_pOwner = this->m_pOwner;
  if ( m_pOwner != 0 )
    return m_pOwner->m_pSkeletonInstance;
  else
    return 0;
}


// CAnimationLayer::GetSkeletonInstance  (line 144, @0x000000000205f1d0, libserver.so)
const CSkeletonInstance *__fastcall CAnimationLayer::GetSkeletonInstance(const CAnimationLayer *const this)
{
  CBaseAnimatingOverlayController *m_pOwner; // rax

  m_pOwner = this->m_pOwner;
  if ( m_pOwner != 0 )
    return m_pOwner->m_pSkeletonInstance;
  else
    return 0;
}


// CAnimationLayer::Reset  (line 149, @0x000000000205f200, libserver.so)  // inlines: CAnimationOperationWriter, Get, GetEncoder, GetQuantizedFloatEncoderByIndex, GetSkeletonInstance, GetWeight, Init, LatchAnimationOperation, NetworkStateChanged, Set, SetWeight, operator CEntityInstance*, operator=, operator=<CBaseAnimatingOverlayController::<anonymous enum> >, operator=<HSequence>, operator=<float>, operator=<int>, ~CAnimationOperationWriter
// callers: CBaseViewModel::SendViewModelMatchingSequence, CDOTAAnimState::ResetGestureSlot
void __fastcall CAnimationLayer::Reset(CAnimationLayer *const this)
{
  CBaseAnimatingOverlayController *m_pOwner; // rax
  CSkeletonInstance *m_pSkeletonInstance; // r13
  bool v4; // r12
  float m_Value; // xmm1_4
  CAnimationLayer::NetworkVar_m_op *p_m_op; // r15
  unsigned int v7; // r14d
  bool v8; // zf
  bool v9; // zf
  int32 m_Data; // eax
  bool v11; // zf
  __int64 v12; // rax
  float v13; // xmm2_4
  bool v14; // zf
  CEntityInstance *m_pObj; // rdi
  __int64 v16; // rax
  float v17; // xmm1_4
  bool v18; // zf
  float v19; // xmm2_4
  CEntityInstance *v20; // rdi
  float v21; // [rsp+Ch] [rbp-34h]
  float v22; // [rsp+Ch] [rbp-34h]
  float v23; // [rsp+Ch] [rbp-34h]
  float v24; // [rsp+Ch] [rbp-34h]

  m_pOwner = this->m_pOwner;
  if ( m_pOwner != 0 )
  {
    m_pSkeletonInstance = m_pOwner->m_pSkeletonInstance;
    v4 = m_pSkeletonInstance != 0;
  }
  else
  {
    v4 = 0;
    m_pSkeletonInstance = 0;
  }
  if ( this->m_nOrder.m_Value == 15 )
  {
    m_Value = this->m_op.m_flWeight.m_Value.m_Value;
    v4 = 0;
    v7 = 0;
    p_m_op = &this->m_op;
    v19 = this->m_op.m_flPrevCycle.m_Value;
    v18 = m_Value == 0.0;
  }
  else
  {
    m_Value = this->m_op.m_flWeight.m_Value.m_Value;
    if ( this->m_op.m_hSequence.m_Value.m_Data != -1 && m_Value != 0.0 )
    {
      p_m_op = &this->m_op;
      v7 = 80;
      m_Value = 0.0;
      v8 = this->m_op.m_flPrevCycle.m_Value == 0.0;
      goto LABEL_24;
    }
    v18 = m_Value == 0.0;
    v7 = 16;
    v19 = this->m_op.m_flPrevCycle.m_Value;
    p_m_op = &this->m_op;
  }
  if ( !v18 )
    m_Value = 0.0;
  v8 = v19 == 0.0;
LABEL_24:
  if ( v8 )
  {
    v9 = this->m_op.m_flCycle.m_Value == 0.0;
  }
  else
  {
    v21 = m_Value;
    (*(this->m_op._vptr_CNetworkedSequenceOperation + 3))(p_m_op, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_op.m_flPrevCycle.m_Value = 0.0;
    m_Value = v21;
    v9 = this->m_op.m_flCycle.m_Value == 0.0;
  }
  if ( v9 )
  {
    if ( this->m_op.m_hSequence.m_Value.m_Data == 0 )
      goto LABEL_28;
LABEL_9:
    v23 = m_Value;
    (*(this->m_op._vptr_CNetworkedSequenceOperation + 3))(p_m_op, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_Value = v23;
    this->m_op.m_hSequence.m_Value.m_Data = 0;
    v11 = v23 == this->m_op.m_flWeight.m_Value.m_Value;
    goto LABEL_29;
  }
  v22 = m_Value;
  (*(this->m_op._vptr_CNetworkedSequenceOperation + 3))(p_m_op, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  m_Data = this->m_op.m_hSequence.m_Value.m_Data;
  this->m_op.m_flCycle.m_Value = 0.0;
  m_Value = v22;
  if ( m_Data != 0 )
    goto LABEL_9;
LABEL_28:
  v11 = m_Value == this->m_op.m_flWeight.m_Value.m_Value;
LABEL_29:
  if ( v11 )
  {
    v14 = this->m_flPlaybackRate.m_Value.m_Value == 0.0;
  }
  else
  {
    v24 = m_Value;
    (*(this->m_op._vptr_CNetworkedSequenceOperation + 3))(p_m_op, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v12 = g_pQuantizedFloatEncoders + 32LL * this->m_op.m_flWeight.m_Value.m_nEncoder;
    v13 = *(v12 + 12);
    if ( v24 <= v13 )
      v13 = fmaxf(*(v12 + 8), v24);
    v14 = this->m_flPlaybackRate.m_Value.m_Value == 0.0;
    this->m_op.m_flWeight.m_Value.m_Value = v13;
  }
  if ( !v14 )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 68, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    v16 = g_pQuantizedFloatEncoders + 32LL * this->m_flPlaybackRate.m_Value.m_nEncoder;
    v17 = *(v16 + 12);
    if ( v17 >= 0.0 )
      v17 = fmaxf(*(v16 + 8), 0.0);
    this->m_flPlaybackRate.m_Value.m_Value = v17;
  }
  v8 = this->m_nOrder.m_Value == 15;
  this->m_flLayerAnimtime = 0.0;
  this->m_flLayerFadeOuttime = 0.0;
  this->m_bSequenceFinished = 0;
  this->m_flLastEventCycle = 0.0;
  if ( !v8 )
  {
    v20 = this->__m_pChainEntity.m_pObj;
    if ( v20 != 0 && (v20->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(v20->_vptr_IHandleEntity + 22))(v20, 64, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_nOrder.m_Value = 15;
  }
  if ( v4 )
    (*(m_pSkeletonInstance->_vptr_CGameSceneNode + 11))(m_pSkeletonInstance, v7);
}


// CAnimationLayer::SetAnimTime  (line 185, @0x000000000205f540, libserver.so)
// callers: CBaseViewModel::SendViewModelMatchingSequence, CBaseViewModel::FadePreviousLayer, CSequenceTransitioner::UpdateCurrent, CSequenceTransitioner::CheckForSequenceChange, CDOTAAnimState::ResetSlotActivity, CDOTAAnimState::AddToGestureSlot
void __fastcall CAnimationLayer::SetAnimTime(CAnimationLayer *const this, float a2, float flTime)
{
  this->m_flLayerAnimtime = a2;
}


// CAnimationLayer::SetPriority  (line 190, @0x000000000205f550, libserver.so)
void __fastcall CAnimationLayer::SetPriority(CAnimationLayer *const this, int nPriority)
{
  this->m_nPriority = nPriority;
}


// CAnimationLayer::SetSequenceFinished  (line 195, @0x000000000205f560, libserver.so)
void __fastcall CAnimationLayer::SetSequenceFinished(CAnimationLayer *const this, bool bFinished)
{
  this->m_bSequenceFinished = bFinished;
}


// CAnimationLayer::SetLastEventCheck  (line 200, @0x000000000205f570, libserver.so)
void __fastcall CAnimationLayer::SetLastEventCheck(CAnimationLayer *const this, float a2, float flLastCheckCycle)
{
  this->m_flLastEventCycle = a2;
}


// CAnimationLayer::SetFadeOutTime  (line 205, @0x000000000205f580, libserver.so)
// callers: CBaseViewModel::FadePreviousLayer, CSequenceTransitioner::CheckForSequenceChange, CDOTAAnimState::ResetSlotActivity, CDOTAAnimState::AddToGestureSlot
void __fastcall CAnimationLayer::SetFadeOutTime(CAnimationLayer *const this, float a2, float flFadeOutTime)
{
  this->m_flLayerFadeOuttime = a2;
}


// CAnimationLayer::MarkActive  (line 210, @0x000000000205f590, libserver.so)  // inlines: curtime
void __fastcall CAnimationLayer::MarkActive(CAnimationLayer *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_flCurrentTime = 0.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  this->m_flLastAccess = m_flCurrentTime;
}


// CAnimationLayer::SetKillDelay  (line 215, @0x000000000205f5f0, libserver.so)
void __fastcall CAnimationLayer::SetKillDelay(CAnimationLayer *const this, float a2, float flKillDelay)
{
  this->m_flKillDelay = a2;
}


// CAnimationLayer::SetKillRate  (line 220, @0x000000000205f600, libserver.so)
void __fastcall CAnimationLayer::SetKillRate(CAnimationLayer *const this, float a2, float flKillRate)
{
  this->m_flKillRate = a2;
}


// CAnimationLayer::SetActivity  (line 225, @0x000000000205f610, libserver.so)
void __fastcall CAnimationLayer::SetActivity(CAnimationLayer *const this, Activity act)
{
  this->m_nActivity = act;
}


// CAnimationLayer::SetFlags  (line 230, @0x000000000205f620, libserver.so)
// callers: CBasePlayerAnimState::UpdateAimSequenceLayers, CBaseViewModel::SendViewModelMatchingSequence, CDOTAAnimState::AddToGestureSlot
void __fastcall CAnimationLayer::SetFlags(CAnimationLayer *const this, int fFlagsToSet)
{
  this->m_nFlags |= fFlagsToSet;
}


// CAnimationLayer::ClearFlags  (line 235, @0x000000000205f630, libserver.so)
void __fastcall CAnimationLayer::ClearFlags(CAnimationLayer *const this, int fFlagsToClear)
{
  this->m_nFlags &= ~fFlagsToClear;
}


// CAnimationLayer::ClearFlags  (line 240, @0x000000000205f640, libserver.so)
// callers: CBasePlayerAnimState::ClearAnimationLayers, CBasePlayerAnimState::OptimizeLayerWeights
void __fastcall CAnimationLayer::ClearFlags(CAnimationLayer *const this)
{
  this->m_nFlags = 0;
}


// CAnimationLayer::SetLooping  (line 245, @0x000000000205f650, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<bool>
// callers: CBaseAnimatingOverlayController::SetLayerLooping, CBaseAnimatingOverlayController::AddLayeredSequence, CBaseViewModel::SendViewModelMatchingSequence
void __fastcall CAnimationLayer::SetLooping(CAnimationLayer *const this, bool bLooping)
{
  CEntityInstance *m_pObj; // rdi

  if ( this->m_bLooping.m_Value != bLooping )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 76, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_bLooping.m_Value = bLooping;
  }
}


// CAnimationLayer::SetPlaybackRate  (line 250, @0x000000000205f6a0, libserver.so)  // inlines: Get, GetEncoder, GetExactEncodeTestCase, GetForModify, GetQuantizedFloatEncoderByIndex, NetworkStateChanged, QuantizeFloat<true, true>, QuantizeInPlace, Set, operator CEntityInstance*, operator=, operator=<float>
// calls: Warning, CNetworkedQuantizedFloat::QuantizeInPlace
// callers: CBaseAnimatingOverlayController::SetLayerDuration, CBaseAnimatingOverlayController::SetLayerPlaybackRate, CBaseAnimatingOverlayController::AddLayeredSequence, CBaseAnimatingOverlayController::AddGestureSequence, CBaseViewModel::SendViewModelMatchingSequence, CBaseViewModel::FadePreviousLayer, CSequenceTransitioner::UpdateCurrent, CDOTAAnimState::ResetSlotActivity, CDOTAAnimState::SetGesturePlaybackRate, CDOTAAnimState::AddToGestureSlot, CDOTAAnimState::RestartGesture, TE_UnitAnimation
// strings: "Field %s tried to quantize an out-of-range value (%f, range is %f->%f) clamping.\n", "Field %s tried to quantize an out-of-range value (%f, range is %f->%f), clamping.\n"
void __fastcall CAnimationLayer::SetPlaybackRate(CAnimationLayer *const this, double a2, double flPlaybackRate)
{
  bool v4; // zf
  CEntityInstance *m_pObj; // rdi
  __int64 m_nEncoder; // rbx
  float m_Value; // xmm0_4
  float *v8; // rbx
  float v9; // xmm1_4
  float v10; // xmm2_4
  int v11; // ecx
  int v12; // eax
  float v13; // xmm3_4
  float32 v14; // xmm1_4
  __int64 v15; // rax
  unsigned int flPlaybackRatea; // [rsp+Ch] [rbp-14h]

  v4 = *&a2 == this->m_flPlaybackRate.m_Value.m_Value;
  m_pObj = this->__m_pChainEntity.m_pObj;
  if ( !v4 )
  {
    if ( m_pObj != 0 )
    {
      if ( (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      {
        flPlaybackRatea = LODWORD(a2);
        (*(m_pObj->_vptr_IHandleEntity + 22))(
          m_pObj,
          68,
          0xFFFFFFFFLL,
          this->__m_PathIndex.m_Value,
          a2,
          *&flPlaybackRate);
        m_pObj = this->__m_pChainEntity.m_pObj;
        *&a2 = flPlaybackRatea;
      }
    }
    else
    {
      m_pObj = 0;
    }
    v15 = g_pQuantizedFloatEncoders + 32LL * this->m_flPlaybackRate.m_Value.m_nEncoder;
    *&flPlaybackRate = *(v15 + 12);
    if ( *&a2 <= *&flPlaybackRate )
    {
      *&flPlaybackRate = *(v15 + 8);
      *&flPlaybackRate = fmaxf(*&flPlaybackRate, *&a2);
    }
    this->m_flPlaybackRate.m_Value.m_Value = *&flPlaybackRate;
  }
  if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 68, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value, a2, flPlaybackRate);
  m_nEncoder = this->m_flPlaybackRate.m_Value.m_nEncoder;
  if ( m_nEncoder == 0xFFFF )
  {
    CNetworkedQuantizedFloat::QuantizeInPlace(m_pObj);
    JUMPOUT(0x205F90E);
  }
  m_Value = this->m_flPlaybackRate.m_Value.m_Value;
  v8 = (g_pQuantizedFloatEncoders + 32 * m_nEncoder);
  if ( (*(v8 + 30) & 1) == 0 )
  {
    v9 = v8[2];
    if ( v9 <= m_Value )
    {
      v10 = v8[3];
      if ( m_Value > v10 )
      {
        if ( (*(v8 + 29) & 1) == 0 )
        {
          Warning(
            "Field %s tried to quantize an out-of-range value (%f, range is %f->%f) clamping.\n",
            *v8,
            m_Value,
            v9,
            v10);
          v10 = v8[3];
        }
        this->m_flPlaybackRate.m_Value.m_Value = v10;
      }
      else
      {
        v11 = 0;
        while ( 1 )
        {
          v12 = 1 << v11;
          if ( ((*(v8 + 29) >> 4) & (1 << v11)) != 0 )
          {
            v13 = v8[2];
            if ( (v12 & 1) == 0 )
            {
              v13 = v8[3];
              if ( (v12 & 2) == 0 )
                v13 = 0.0;
            }
            if ( m_Value == v13 )
              break;
          }
          if ( ++v11 == 3 )
          {
            v14 = ((m_Value - v9) * v8[4]) * v8[5];
            this->m_flPlaybackRate.m_Value.m_Value = v14;
            this->m_flPlaybackRate.m_Value.m_Value = ((v8[3] - v8[2]) * v14) + v8[2];
            return;
          }
        }
        this->m_flPlaybackRate.m_Value.m_Value = v13;
      }
    }
    else if ( (*(v8 + 29) & 2) != 0 )
    {
      this->m_flPlaybackRate.m_Value.m_Value = v9;
    }
    else
    {
      Warning(
        "Field %s tried to quantize an out-of-range value (%f, range is %f->%f), clamping.\n",
        *v8,
        m_Value,
        v9,
        v8[3]);
      this->m_flPlaybackRate.m_Value.m_Value = v8[2];
    }
  }
}


// CAnimationLayer::OnClientSideAnimCycleReset  (line 256, @0x000000000205f910, libserver.so)  // inlines: CAnimationOperationWriter, GetEncoder, GetQuantizedFloatEncoderByIndex, HSequence, Init, LatchAnimationOperation, NetworkStateChanged, Set, SetCycle, SetPrevCycle, operator=, operator=<HSequence>, operator=<float>, ~CAnimationOperationWriter
// calls: CAnimationOperationWriter::LatchAnimationOperation, _Unwind_Resume
void __fastcall CAnimationLayer::OnClientSideAnimCycleReset(CAnimationLayer *const this)
{
  CBaseAnimatingOverlayController *m_pOwner; // rax
  CAnimationLayer::NetworkVar_m_op *v2; // rbx
  __int64 v3; // rax
  float v4; // xmm1_4
  CAnimationLayer::NetworkVar_m_op *writer; // [rsp+0h] [rbp-30h]
  int32 writer_8; // [rsp+8h] [rbp-28h]
  float writer_12; // [rsp+Ch] [rbp-24h]
  float writer_16; // [rsp+10h] [rbp-20h]
  float writer_20; // [rsp+14h] [rbp-1Ch]

  m_pOwner = this->m_pOwner;
  if ( m_pOwner->m_bClientSideAnimation.m_Value )
  {
    writer = &this->m_op;
    writer_20 = this->m_op.m_flWeight.m_Value.m_Value;
    writer_12 = this->m_op.m_flPrevCycle.m_Value;
    writer_16 = this->m_op.m_flCycle.m_Value;
    writer_8 = this->m_op.m_hSequence.m_Value.m_Data;
    if ( this->m_op.m_flPrevCycle.m_Value != 0.0 )
      writer_12 = 0.0;
    if ( this->m_op.m_flCycle.m_Value != 0.0 )
      writer_16 = 0.0;
    (*(m_pOwner->m_pSkeletonInstance->_vptr_CGameSceneNode + 11))(m_pOwner->m_pSkeletonInstance, 16);
    v2 = writer;
    if ( writer_12 != writer->m_flPrevCycle.m_Value )
    {
      (*(writer->_vptr_CNetworkedSequenceOperation + 3))(writer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      writer->m_flPrevCycle.m_Value = writer_12;
      v2 = writer;
    }
    if ( writer_16 != v2->m_flCycle.m_Value )
    {
      (*(v2->_vptr_CNetworkedSequenceOperation + 3))(v2, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v2->m_flCycle.m_Value = writer_16;
      v2 = writer;
    }
    if ( v2->m_hSequence.m_Value.m_Data != writer_8 )
    {
      (*(v2->_vptr_CNetworkedSequenceOperation + 3))(v2, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v2->m_hSequence.m_Value.m_Data = writer_8;
      v2 = writer;
    }
    if ( writer_20 != v2->m_flWeight.m_Value.m_Value )
    {
      (*(v2->_vptr_CNetworkedSequenceOperation + 3))(v2, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v3 = g_pQuantizedFloatEncoders + 32LL * v2->m_flWeight.m_Value.m_nEncoder;
      v4 = *(v3 + 12);
      if ( writer_20 <= v4 )
        v4 = fmaxf(*(v3 + 8), writer_20);
      v2->m_flWeight.m_Value.m_Value = v4;
    }
  }
}


// CAnimationLayer::OnOrderChanged  (line 268, @0x000000000205fb00, libserver.so)  // inlines: CAnimationOperationWriter, Get, GetSkeletonInstance, HSequence, Init, NetworkStateChanged, Set, SetCycle, SetPrevCycle, operator CEntityInstance*, operator=<int>, operator==<CBaseAnimatingOverlay::<anonymous enum> >, ~CAnimationOperationWriter
// calls: CAnimationOperationWriter::LatchAnimationOperation, CBaseEntity::MarkInterpolationLatchFlagsDirty
void __fastcall CAnimationLayer::OnOrderChanged(
        CAnimationLayer *const this,
        CEntityInstance *pInstance,
        const int *pOrder)
{
  int m_Value; // r13d
  int v6; // r12d
  CEntityInstance *m_pObj; // rdi
  CBaseAnimatingOverlayController *m_pOwner; // rax
  float v9; // xmm0_4
  CSkeletonInstance *m_pSkeletonInstance; // rax
  float v11; // xmm1_4
  float v12; // xmm2_4
  CEntityInstance *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  CBaseAnimatingOverlayController *v19; // rax
  CSkeletonInstance *v20; // rdi
  CAnimationOperationWriter writer; // [rsp+0h] [rbp-40h] BYREF

  m_Value = this->m_nOrder.m_Value;
  v6 = *pOrder;
  if ( m_Value != *pOrder )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 64, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_nOrder.m_Value = v6;
  }
  m_pOwner = this->m_pOwner;
  if ( m_pOwner->m_bClientSideAnimation.m_Value && (m_Value == 15) != (this->m_nOrder.m_Value == 15) )
  {
    writer.m_hSequence.m_Data = -1;
    v9 = this->m_op.m_flWeight.m_Value.m_Value;
    m_pSkeletonInstance = m_pOwner->m_pSkeletonInstance;
    writer.m_pOp = &this->m_op;
    v11 = this->m_op.m_flPrevCycle.m_Value;
    writer.m_flWeight = v9;
    v12 = this->m_op.m_flCycle.m_Value;
    writer.m_flPrevCycle = v11;
    v13 = m_pSkeletonInstance->m_pOwner;
    writer.m_flCycle = v12;
    writer.m_pEntity = v13;
    writer.m_hSequence.m_Data = this->m_op.m_hSequence.m_Value.m_Data;
    if ( v11 != 0.0 )
      writer.m_flPrevCycle = 0.0;
    if ( v12 != 0.0 )
      writer.m_flCycle = 0.0;
    CAnimationOperationWriter::LatchAnimationOperation(&writer);
  }
  CBaseEntity::MarkInterpolationLatchFlagsDirty(pInstance, EInterpolatedVarFlagBits::LATCH_ANIMATION_BIT);
  v18 = 16;
  if ( this->m_nOrder.m_Value != 15 )
    v18 = 80;
  v19 = this->m_pOwner;
  if ( v19 != 0 )
    v20 = v19->m_pSkeletonInstance;
  else
    v20 = 0;
  (*(v20->_vptr_CGameSceneNode + 11))(
    v20,
    v18,
    v14,
    v15,
    v16,
    v17,
    writer.m_pEntity,
    writer.m_pOp,
    *&writer.m_hSequence.m_Data,
    *&writer.m_flCycle);
}


// CAnimationLayer::OnAnimationOpChanged  (line 354, @0x000000000205fc30, libserver.so)  // inlines: DidSequenceNetworkUpdateOccur, GetSkeletonInstance
// calls: CSkeletonAnimationController::GetOwnerEntity, CBaseEntity::MarkInterpolationLatchFlagsDirty
void __fastcall CAnimationLayer::OnAnimationOpChanged(CAnimationLayer *const this, CEntityInstance *pInstance)
{
  CBaseEntity *OwnerEntity; // rax
  bool m_bSequenceChangeNetworked; // al
  bool v5; // cf
  CBaseAnimatingOverlayController *m_pOwner; // rax
  __int64 v7; // rsi

  OwnerEntity = CSkeletonAnimationController::GetOwnerEntity(this->m_pOwner);
  CBaseEntity::MarkInterpolationLatchFlagsDirty(OwnerEntity, EInterpolatedVarFlagBits::LATCH_ANIMATION_BIT);
  m_bSequenceChangeNetworked = this->m_op.m_bSequenceChangeNetworked;
  this->m_op.m_bSequenceChangeNetworked = 0;
  v5 = !m_bSequenceChangeNetworked;
  m_pOwner = this->m_pOwner;
  v7 = v5 ? 16 : 80;
  if ( m_pOwner != 0 )
    (*(m_pOwner->m_pSkeletonInstance->_vptr_CGameSceneNode + 11))(m_pOwner->m_pSkeletonInstance, v7);
  else
    (*(loc_0 + 88LL))(0, v7);
}


// CAnimationLayer::SetSequence  (line 369, @0x000000000205fca0, libserver.so)  // inlines: CAnimationOperationWriter, Get, GetEncoder, GetQuantizedFloatEncoderByIndex, GetSequence, GetSkeletonInstance, HSequence, Init, LatchAnimationOperation, NetworkStateChanged, Set, SetSequence, operator CEntityInstance*, operator=, operator=<HSequence>, operator=<float>, operator=<int>, ~CAnimationOperationWriter
// calls: CAnimationOperationWriter::LatchAnimationOperation, _Unwind_Resume
// callers: CBaseAnimatingOverlayController::SetLayerSequence, CBaseViewModel::SendViewModelMatchingSequence, CBaseViewModel::FadePreviousLayer, CGenericFlexCycler::ResetSequencesThink, CLagCompensationManager::RestoreEntityFromRecords, CLagCompensationManager::BacktrackEntity, CSequenceTransitioner::UpdateCurrent, CSequenceTransitioner::CheckForSequenceChange, CDOTAAnimState::ResetSlotActivity, CDOTAAnimState::AddToGestureSlot, CDOTAAnimState::RestartGesture, CDOTAAnimState::OnNewModel
void __fastcall CAnimationLayer::SetSequence(
        CAnimationLayer *const this,
        HSequence hSequence,
        SetSequenceBehavior_t behavior,
        LayerChangeBehavior_t changeBehavior)
{
  CAnimationLayer::NetworkVar_m_op *p_m_op; // r12
  int32 m_Data; // esi
  CBaseAnimatingOverlayController *m_pOwner; // rax
  CSkeletonInstance *m_pSkeletonInstance; // rdi
  float m_Value; // xmm0_4
  float v11; // xmm1_4
  double v12; // xmm0_8
  __int64 v13; // rax
  float v14; // xmm1_4
  int v15; // eax
  int v16; // r13d
  CEntityInstance *m_pObj; // rdi
  SetSequenceBehavior_t behaviora; // [rsp+Ch] [rbp-44h]
  SetSequenceBehavior_t behaviorb; // [rsp+Ch] [rbp-44h]
  int32 writer_16; // [rsp+20h] [rbp-30h]
  float writer_24; // [rsp+28h] [rbp-28h]
  float writer_28; // [rsp+2Ch] [rbp-24h]

  p_m_op = &this->m_op;
  m_Data = this->m_op.m_hSequence.m_Value.m_Data;
  if ( hSequence.m_Data != m_Data )
    behavior = SetSequenceBehavior_t::SET_SEQUENCE_RESET_CYCLE;
  if ( changeBehavior == LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS )
  {
    m_pOwner = this->m_pOwner;
    if ( m_pOwner != 0 )
    {
      m_pSkeletonInstance = m_pOwner->m_pSkeletonInstance;
      if ( m_pSkeletonInstance != 0 && this->m_nOrder.m_Value != 15 )
      {
        if ( hSequence.m_Data == m_Data || this->m_op.m_flWeight.m_Value.m_Value == 0.0 )
        {
          if ( behavior == SetSequenceBehavior_t::SET_SEQUENCE_RESET_CYCLE )
          {
            (*(m_pSkeletonInstance->_vptr_CGameSceneNode + 11))(m_pSkeletonInstance, 16);
            behavior = SetSequenceBehavior_t::SET_SEQUENCE_RESET_CYCLE;
          }
        }
        else
        {
          behaviora = behavior;
          (*(m_pSkeletonInstance->_vptr_CGameSceneNode + 11))(m_pSkeletonInstance, 64, 0.0);
          behavior = behaviora;
        }
      }
    }
  }
  writer_28 = this->m_op.m_flWeight.m_Value.m_Value;
  writer_24 = this->m_op.m_flCycle.m_Value;
  m_Value = this->m_op.m_flPrevCycle.m_Value;
  writer_16 = this->m_op.m_hSequence.m_Value.m_Data;
  if ( hSequence.m_Data != writer_16 )
    writer_16 = hSequence.m_Data;
  v11 = this->m_op.m_flPrevCycle.m_Value;
  if ( behavior == SetSequenceBehavior_t::SET_SEQUENCE_RESET_CYCLE )
  {
    v15 = this->m_nNewSequenceParity.m_Value;
    v11 = 0.0;
    this->m_bSequenceFinished = 0;
    writer_24 = 0.0;
    this->m_flLastEventCycle = 0.0;
    v16 = (v15 + 1) & 7;
    if ( v15 != v16 )
    {
      m_pObj = this->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      {
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 80, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
        v11 = 0.0;
      }
      this->m_nNewSequenceParity.m_Value = v16;
      m_Value = p_m_op->m_flPrevCycle.m_Value;
    }
  }
  if ( m_Value != v11 )
  {
    behaviorb = LODWORD(v11);
    (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    LODWORD(p_m_op->m_flPrevCycle.m_Value) = behaviorb;
  }
  *&v12 = LODWORD(writer_24);
  if ( writer_24 != p_m_op->m_flCycle.m_Value )
  {
    (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v12 = LODWORD(writer_24);
    p_m_op->m_flCycle.m_Value = writer_24;
  }
  if ( p_m_op->m_hSequence.m_Value.m_Data != writer_16 )
  {
    (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v12);
    p_m_op->m_hSequence.m_Value.m_Data = writer_16;
  }
  if ( writer_28 != p_m_op->m_flWeight.m_Value.m_Value )
  {
    (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v13 = g_pQuantizedFloatEncoders + 32LL * p_m_op->m_flWeight.m_Value.m_nEncoder;
    v14 = *(v13 + 12);
    if ( writer_28 <= v14 )
      v14 = fmaxf(*(v13 + 8), writer_28);
    p_m_op->m_flWeight.m_Value.m_Value = v14;
  }
}


// CAnimationLayer::SetPrevCycle  (line 403, @0x000000000205ff90, libserver.so)  // inlines: CAnimationOperationWriter, GetEncoder, GetQuantizedFloatEncoderByIndex, Init, LatchAnimationOperation, NetworkStateChanged, Set, SetPrevCycle, operator=, operator=<HSequence>, operator=<float>, ~CAnimationOperationWriter
// callers: CBaseViewModel::SendViewModelMatchingSequence, CBaseViewModel::FadePreviousLayer, CDOTAAnimState::OnNewModel, CDOTAAnimState::UpdateGestureLayer
void __fastcall CAnimationLayer::SetPrevCycle(CAnimationLayer *const this, float a2, float flPrevCycle)
{
  CAnimationLayer::NetworkVar_m_op *p_m_op; // r13
  int32 m_Data; // r12d
  float m_Value; // xmm3_4
  float v7; // xmm2_4
  bool v8; // zf
  __int64 v9; // rax
  float v10; // xmm0_4
  float v12; // [rsp+8h] [rbp-28h]
  float v13; // [rsp+8h] [rbp-28h]
  float32 v14; // [rsp+Ch] [rbp-24h]
  float v15; // [rsp+Ch] [rbp-24h]
  float v16; // [rsp+Ch] [rbp-24h]
  float v17; // [rsp+Ch] [rbp-24h]

  p_m_op = &this->m_op;
  m_Data = this->m_op.m_hSequence.m_Value.m_Data;
  m_Value = this->m_op.m_flWeight.m_Value.m_Value;
  v7 = this->m_op.m_flCycle.m_Value;
  if ( a2 == this->m_op.m_flPrevCycle.m_Value )
  {
    v8 = 1;
  }
  else
  {
    v12 = this->m_op.m_flCycle.m_Value;
    v14 = this->m_op.m_flWeight.m_Value.m_Value;
    (*(this->m_op._vptr_CNetworkedSequenceOperation + 3))(&this->m_op, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v7 = v12;
    this->m_op.m_flPrevCycle.m_Value = a2;
    m_Value = v14;
    v8 = v12 == this->m_op.m_flCycle.m_Value;
  }
  if ( v8 )
  {
    if ( this->m_op.m_hSequence.m_Value.m_Data == m_Data )
      goto LABEL_5;
  }
  else
  {
    v13 = v7;
    v16 = m_Value;
    (*(this->m_op._vptr_CNetworkedSequenceOperation + 3))(p_m_op, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v8 = this->m_op.m_hSequence.m_Value.m_Data == m_Data;
    m_Value = v16;
    this->m_op.m_flCycle.m_Value = v13;
    if ( v8 )
      goto LABEL_5;
  }
  v17 = m_Value;
  (*(this->m_op._vptr_CNetworkedSequenceOperation + 3))(p_m_op, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_op.m_hSequence.m_Value.m_Data = m_Data;
  m_Value = v17;
LABEL_5:
  if ( m_Value != this->m_op.m_flWeight.m_Value.m_Value )
  {
    v15 = m_Value;
    (*(this->m_op._vptr_CNetworkedSequenceOperation + 3))(p_m_op, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v9 = g_pQuantizedFloatEncoders + 32LL * this->m_op.m_flWeight.m_Value.m_nEncoder;
    v10 = *(v9 + 12);
    if ( v15 <= v10 )
      v10 = fmaxf(*(v9 + 8), v15);
    this->m_op.m_flWeight.m_Value.m_Value = v10;
  }
}


// CAnimationLayer::SetCycle  (line 409, @0x0000000002060120, libserver.so)  // inlines: CAnimationOperationWriter, GetEncoder, GetQuantizedFloatEncoderByIndex, GetSkeletonInstance, Init, LatchAnimationOperation, NetworkStateChanged, Set, SetCycle, operator=, operator=<HSequence>, operator=<float>, ~CAnimationOperationWriter
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CBasePlayerAnimState::UpdateAimSequenceLayers, CBaseViewModel::SendViewModelMatchingSequence, CBaseViewModel::ItemPostFrame, CBaseViewModel::FadePreviousLayer, CLagCompensationManager::RestoreEntityFromRecords, CLagCompensationManager::BacktrackEntity, CSequenceTransitioner::UpdateCurrent, CDOTAAnimState::RestartGesture, CDOTAAnimState::OnNewModel, CDOTAAnimState::UpdateGestureLayer
// strings: "SV", "%s:  set cycle %.3f\n"
void __fastcall CAnimationLayer::SetCycle(
        CAnimationLayer *const this,
        float a2,
        float flCycle,
        LayerChangeBehavior_t behavior)
{
  float v4; // xmm1_4
  CBaseAnimatingOverlayController *m_pOwner; // rax
  CSkeletonInstance *m_pSkeletonInstance; // rdi
  float m_Value; // xmm2_4
  int32 m_Data; // r12d
  float v10; // xmm3_4
  __int64 v11; // rax
  float v12; // xmm0_4
  double v13; // xmm0_8
  bool v14; // zf
  char IsChannelEnabled; // al
  float v16; // [rsp+8h] [rbp-28h]
  float flCyclea; // [rsp+Ch] [rbp-24h]
  float32 flCycleb; // [rsp+Ch] [rbp-24h]
  float flCyclec; // [rsp+Ch] [rbp-24h]

  v4 = a2;
  if ( behavior == LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS )
  {
    m_pOwner = this->m_pOwner;
    if ( m_pOwner != 0 )
    {
      m_pSkeletonInstance = m_pOwner->m_pSkeletonInstance;
      if ( m_pSkeletonInstance != 0
        && a2 != this->m_op.m_flCycle.m_Value
        && this->m_nOrder.m_Value != 15
        && this->m_op.m_flWeight.m_Value.m_Value != 0.0 )
      {
        (*(m_pSkeletonInstance->_vptr_CGameSceneNode + 11))(m_pSkeletonInstance, 16, 0.0);
        v4 = a2;
      }
    }
  }
  if ( (this->m_nFlags & 0x1000) != 0 )
  {
    flCyclec = v4;
    IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_SERVER, 1);
    v4 = flCyclec;
    if ( IsChannelEnabled != 0 )
    {
      LoggingSystem_Log(LOG_SERVER, 1, "%s:  set cycle %.3f\n", "SV", flCyclec);
      v4 = flCyclec;
    }
  }
  m_Value = this->m_op.m_flCycle.m_Value;
  m_Data = this->m_op.m_hSequence.m_Value.m_Data;
  v10 = this->m_op.m_flWeight.m_Value.m_Value;
  if ( v4 == m_Value )
    v4 = this->m_op.m_flCycle.m_Value;
  if ( v4 != m_Value )
  {
    v16 = v4;
    flCycleb = this->m_op.m_flWeight.m_Value.m_Value;
    (*(this->m_op._vptr_CNetworkedSequenceOperation + 3))(
      &this->m_op,
      16,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      COERCE_DOUBLE(LODWORD(this->m_op.m_flPrevCycle.m_Value)));
    v14 = this->m_op.m_hSequence.m_Value.m_Data == m_Data;
    v10 = flCycleb;
    this->m_op.m_flCycle.m_Value = v16;
    if ( !v14 )
    {
      (*(this->m_op._vptr_CNetworkedSequenceOperation + 3))(&this->m_op, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v13);
      this->m_op.m_hSequence.m_Value.m_Data = m_Data;
      v10 = flCycleb;
    }
  }
  if ( v10 != this->m_op.m_flWeight.m_Value.m_Value )
  {
    flCyclea = v10;
    (*(this->m_op._vptr_CNetworkedSequenceOperation + 3))(&this->m_op, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v11 = g_pQuantizedFloatEncoders + 32LL * this->m_op.m_flWeight.m_Value.m_nEncoder;
    v12 = *(v11 + 12);
    if ( flCyclea <= v12 )
      v12 = fmaxf(*(v11 + 8), flCyclea);
    this->m_op.m_flWeight.m_Value.m_Value = v12;
  }
}


// CAnimationLayer::SetWeight  (line 428, @0x0000000002060370, libserver.so)  // inlines: CAnimationOperationWriter, GetEncoder, GetQuantizedFloatEncoderByIndex, GetSkeletonInstance, GetWeight, Init, LatchAnimationOperation, NetworkStateChanged, Set, SetWeight, operator=, operator=<HSequence>, operator=<float>, ~CAnimationOperationWriter
// callers: CBaseAnimatingOverlayController::AnimationFrameAdvance, CBasePlayerAnimState::UpdateAimSequenceLayers, CBasePlayerAnimState::OptimizeLayerWeights, CBaseViewModel::SendViewModelMatchingSequence, CBaseViewModel::ItemPostFrame, CBaseViewModel::FadePreviousLayer, CLagCompensationManager::RestoreEntityFromRecords, CLagCompensationManager::BacktrackEntity, CSequenceTransitioner::UpdateCurrent, CDOTAAnimState::ResetGestureSlot, CDOTAAnimState::AddToGestureSlot, CDOTAAnimState::OnNewModel (13 total)
void __fastcall CAnimationLayer::SetWeight(
        CAnimationLayer *const this,
        double a2,
        float flWeight,
        LayerChangeBehavior_t behavior)
{
  CBaseAnimatingOverlayController *m_pOwner; // rax
  CSkeletonInstance *m_pSkeletonInstance; // rdi
  float m_Value; // xmm3_4
  CAnimationLayer::NetworkVar_m_op *p_m_op; // rbx
  int32 m_Data; // r13d
  float v10; // xmm2_4
  double v11; // xmm1_8
  __int64 v12; // rsi
  __int64 v13; // rax
  float v14; // xmm1_4
  unsigned int v15; // [rsp+8h] [rbp-28h]
  unsigned int flWeightb; // [rsp+Ch] [rbp-24h]
  float flWeighta; // [rsp+Ch] [rbp-24h]
  unsigned int flWeightd; // [rsp+Ch] [rbp-24h]
  float flWeightc; // [rsp+Ch] [rbp-24h]

  if ( behavior == LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS )
  {
    m_pOwner = this->m_pOwner;
    if ( m_pOwner != 0 )
    {
      m_pSkeletonInstance = m_pOwner->m_pSkeletonInstance;
      if ( m_pSkeletonInstance != 0 )
      {
        m_Value = this->m_op.m_flWeight.m_Value.m_Value;
        if ( *&a2 == m_Value )
        {
          p_m_op = &this->m_op;
          m_Data = this->m_op.m_hSequence.m_Value.m_Data;
          *&a2 = LODWORD(this->m_op.m_flWeight.m_Value.m_Value);
          v10 = this->m_op.m_flCycle.m_Value;
          *&v11 = LODWORD(this->m_op.m_flPrevCycle.m_Value);
          goto LABEL_12;
        }
        if ( this->m_nOrder.m_Value == 15 )
        {
          p_m_op = &this->m_op;
          m_Data = this->m_op.m_hSequence.m_Value.m_Data;
          v10 = this->m_op.m_flCycle.m_Value;
          *&v11 = LODWORD(this->m_op.m_flPrevCycle.m_Value);
          goto LABEL_12;
        }
        if ( m_Value == 0.0 || *&a2 == 0.0 )
          v12 = 80;
        else
          v12 = 16;
        flWeightb = LODWORD(a2);
        (*(m_pSkeletonInstance->_vptr_CGameSceneNode + 11))(m_pSkeletonInstance, v12, a2, 0.0);
        *&a2 = flWeightb;
      }
    }
  }
  p_m_op = &this->m_op;
  m_Data = this->m_op.m_hSequence.m_Value.m_Data;
  v10 = this->m_op.m_flCycle.m_Value;
  *&v11 = LODWORD(this->m_op.m_flPrevCycle.m_Value);
  if ( *&a2 == this->m_op.m_flWeight.m_Value.m_Value )
    *&a2 = LODWORD(this->m_op.m_flWeight.m_Value.m_Value);
LABEL_12:
  if ( v10 != p_m_op->m_flCycle.m_Value )
  {
    v15 = LODWORD(a2);
    flWeightc = v10;
    (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, v11);
    *&a2 = v15;
    p_m_op->m_flCycle.m_Value = flWeightc;
  }
  if ( p_m_op->m_hSequence.m_Value.m_Data != m_Data )
  {
    flWeightd = LODWORD(a2);
    (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, v11);
    p_m_op->m_hSequence.m_Value.m_Data = m_Data;
    *&a2 = flWeightd;
  }
  if ( *&a2 != p_m_op->m_flWeight.m_Value.m_Value )
  {
    flWeighta = *&a2;
    (*(p_m_op->_vptr_CNetworkedSequenceOperation + 3))(p_m_op, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, v11);
    v13 = g_pQuantizedFloatEncoders + 32LL * p_m_op->m_flWeight.m_Value.m_nEncoder;
    v14 = *(v13 + 12);
    if ( flWeighta <= v14 )
      v14 = fmaxf(*(v13 + 8), flWeighta);
    p_m_op->m_flWeight.m_Value.m_Value = v14;
  }
}


// CAnimationLayer::SetOrder  (line 448, @0x00000000020605b0, libserver.so)  // inlines: Get, GetSkeletonInstance, NetworkStateChanged, Set, operator CEntityInstance*, operator!=<int>, operator=<int>
// callers: CBaseAnimatingOverlayController::SetLayerPriority, CBaseAnimatingOverlayController::FastRemoveLayer, CBaseAnimatingOverlayController::AllocateLayer, CBasePlayerAnimState::ClearAnimationLayers, CBasePlayerAnimState::UpdateAimSequenceLayers, CBasePlayerAnimState::OptimizeLayerWeights, CBaseViewModel::SendViewModelMatchingSequence, CBaseViewModel::ItemPostFrame, CBaseViewModel::FadePreviousLayer, CLagCompensationManager::RestoreEntityFromRecords, CLagCompensationManager::BacktrackEntity, CDOTAAnimState::ResetGestureSlot (13 total)
void __fastcall CAnimationLayer::SetOrder(CAnimationLayer *const this, int nOrder, LayerChangeBehavior_t behavior)
{
  double v3; // xmm0_8
  CBaseAnimatingOverlayController *m_pOwner; // rax
  CSkeletonInstance *m_pSkeletonInstance; // rdi
  int m_Value; // eax
  __int64 v9; // rsi
  CEntityInstance *m_pObj; // rdi

  if ( behavior != LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS
    || (m_pOwner = this->m_pOwner) == 0
    || (m_pSkeletonInstance = m_pOwner->m_pSkeletonInstance) == 0 )
  {
    if ( nOrder == this->m_nOrder.m_Value )
      return;
    goto LABEL_10;
  }
  m_Value = this->m_nOrder.m_Value;
  if ( nOrder != m_Value )
  {
    v3 = 0.0;
    if ( this->m_op.m_flWeight.m_Value.m_Value == 0.0 )
      goto LABEL_10;
    v9 = 80;
    if ( m_Value != 15 && nOrder != 15 )
      v9 = 16;
    (*(m_pSkeletonInstance->_vptr_CGameSceneNode + 11))(m_pSkeletonInstance, v9, 0.0);
    if ( nOrder != this->m_nOrder.m_Value )
    {
LABEL_10:
      m_pObj = this->__m_pChainEntity.m_pObj;
      if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 64, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value, v3);
      this->m_nOrder.m_Value = nOrder;
    }
  }
}


// CAnimationLayer::IsActive  (line 467, @0x0000000002060660, libserver.so)
// callers: CBasePlayerAnimState::OptimizeLayerWeights, CBasePlayerAnimState::DebugShowAnimState
bool __fastcall CAnimationLayer::IsActive(const CAnimationLayer *const this)
{
  return this->m_nFlags & 1;
}


// CAnimationLayer::CopyFrom  (line 477, @0x0000000002060670, libserver.so)  // inlines: CAnimationOperationWriter, Get, GetCycle, GetEncoder, GetOrder, GetPlaybackRate, GetPrevCycle, GetQuantizedFloatEncoderByIndex, GetSequence, GetWeight, HSequence, Init, IsLooping, NetworkStateChanged, Set, SetCycle, SetPrevCycle, SetSequence, SetWeight, operator CEntityInstance*, operator=, operator=<bool>, operator=<float>, operator=<int>, ~CAnimationOperationWriter
// calls: CAnimationOperationWriter::LatchAnimationOperation, _Unwind_Resume
// callers: CSchemaUtlVectorManipulator<CUtlVector<CAnimationLayer, CUtlMemory<CAnimationLayer, int> >, CAnimationLayer>::SwapItems, CSchemaClassBinding<CSequenceTransitioner>::AllocateAndCopyConstruct, CAtomicManipulator<CUtlVector<CAnimationLayer, CUtlMemory<CAnimationLayer, int> > >::Copy, CSchemaClassBinding<CSequenceTransitioner>::Copy, CAtomicManipulator<CUtlVector<CAnimationLayer, CUtlMemory<CAnimationLayer, int> > >::AllocateAndCopy, CSchemaClassBinding<CAnimationLayer>::AllocateAndCopyConstruct, CSchemaClassBinding<CAnimationLayer>::Copy, CSchemaUtlVectorManipulator<CUtlVector<CAnimationLayer, CNetworkUtlVector_MemoryType<CAnimationLayer, -1> >, CAnimationLayer>::SwapItems, CSchemaClassBinding<CBaseAnimatingOverlayController>::AllocateAndCopyConstruct, CAtomicManipulator<CUtlVector<CAnimationLayer, CNetworkUtlVector_MemoryType<CAnimationLayer, -1> > >::Copy, CAtomicManipulator<CUtlVector<CAnimationLayer, CNetworkUtlVector_MemoryType<CAnimationLayer, -1> > >::AllocateAndCopy, CSchemaClassBinding<CBaseAnimatingOverlayController>::Copy (14 total)
void __fastcall CAnimationLayer::CopyFrom(CAnimationLayer *const this, CAnimationLayer *pSrc)
{
  CBaseAnimatingOverlayController *m_pOwner; // rax
  CEntityInstance *v5; // rax
  int32 m_Data; // edx
  int32 v7; // eax
  float32 m_Value; // xmm1_4
  float v9; // xmm2_4
  int v10; // r13d
  CEntityInstance *m_pObj; // rdi
  bool v12; // r13
  CEntityInstance *v13; // rdi
  CEntityInstance *v14; // rdi
  __int64 v15; // rax
  float v16; // xmm0_4
  float v17; // [rsp+Ch] [rbp-44h]
  CAnimationOperationWriter writer; // [rsp+10h] [rbp-40h] BYREF

  writer.m_hSequence.m_Data = -1;
  m_pOwner = this->m_pOwner;
  if ( m_pOwner != 0 )
    v5 = m_pOwner->m_pSkeletonInstance->m_pOwner;
  else
    v5 = 0;
  writer.m_pOp = &this->m_op;
  m_Data = pSrc->m_op.m_hSequence.m_Value.m_Data;
  writer.m_pEntity = v5;
  v7 = this->m_op.m_hSequence.m_Value.m_Data;
  m_Value = this->m_op.m_flWeight.m_Value.m_Value;
  writer.m_flWeight = m_Value;
  writer.m_hSequence.m_Data = v7;
  if ( v7 != m_Data )
    writer.m_hSequence.m_Data = m_Data;
  v9 = pSrc->m_op.m_flCycle.m_Value;
  writer.m_flPrevCycle = 0.0;
  writer.m_flCycle = 0.0;
  if ( v9 != 0.0 )
    writer.m_flCycle = v9;
  if ( pSrc->m_op.m_flPrevCycle.m_Value != 0.0 )
    writer.m_flPrevCycle = pSrc->m_op.m_flPrevCycle.m_Value;
  if ( m_Value != pSrc->m_op.m_flWeight.m_Value.m_Value )
    writer.m_flWeight = pSrc->m_op.m_flWeight.m_Value.m_Value;
  v10 = pSrc->m_nOrder.m_Value;
  if ( v10 != this->m_nOrder.m_Value )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 64, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_nOrder.m_Value = v10;
  }
  this->m_nFlags = pSrc->m_nFlags;
  this->m_bSequenceFinished = pSrc->m_bSequenceFinished;
  v12 = pSrc->m_bLooping.m_Value;
  if ( v12 != this->m_bLooping.m_Value )
  {
    v13 = this->__m_pChainEntity.m_pObj;
    if ( v13 != 0 && (v13->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(v13->_vptr_IHandleEntity + 22))(v13, 76, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_bLooping.m_Value = v12;
  }
  v17 = pSrc->m_flPlaybackRate.m_Value.m_Value;
  if ( pSrc->m_flPlaybackRate.m_Value.m_Value != this->m_flPlaybackRate.m_Value.m_Value )
  {
    v14 = this->__m_pChainEntity.m_pObj;
    if ( v14 != 0 && (v14->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(v14->_vptr_IHandleEntity + 22))(v14, 68, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    v15 = g_pQuantizedFloatEncoders + 32LL * this->m_flPlaybackRate.m_Value.m_nEncoder;
    v16 = *(v15 + 12);
    if ( v17 <= v16 )
      v16 = fmaxf(*(v15 + 8), v17);
    this->m_flPlaybackRate.m_Value.m_Value = v16;
  }
  this->m_flKillRate = pSrc->m_flKillRate;
  this->m_flKillDelay = pSrc->m_flKillDelay;
  this->m_flLayerAnimtime = pSrc->m_flLayerAnimtime;
  this->m_flLayerFadeOuttime = pSrc->m_flLayerFadeOuttime;
  this->m_nActivity = pSrc->m_nActivity;
  this->m_nPriority = pSrc->m_nPriority;
  this->m_flLastEventCycle = pSrc->m_flLastEventCycle;
  this->m_flLastAccess = pSrc->m_flLastAccess;
  CAnimationOperationWriter::LatchAnimationOperation(&writer);
}


// CAnimationLayer::AnimationFrameAdvance  (line 504, @0x0000000002066b70, libserver.so)  // inlines: CAnimationOperationWriter, GetEncoder, GetModelData, GetModelPtr, GetQuantizedFloatEncoderByIndex, GetSequenceCycleRate, HSequence, Init, LatchAnimationOperation, NetworkStateChanged, Set, SetCycle, SetPrevCycle, operator const RuntimeClass_t*, operator=, operator=<HSequence>, operator=<float>, ~CAnimationOperationWriter
// calls: CBaseAnimatingController::GetSequenceCycleRate, CAnimationOperationWriter::LatchAnimationOperation, _Unwind_Resume
// callers: CBaseAnimatingOverlayController::AnimationFrameAdvance
void __fastcall CAnimationLayer::AnimationFrameAdvance(CAnimationLayer *const this, float a2, float flInterval)
{
  CAnimationLayer::NetworkVar_m_op *p_m_op; // rdx
  CBaseAnimatingOverlayController *m_pOwner; // rdi
  const CModel **m_pBinding; // rax
  const CModel *v7; // rsi
  float SequenceCycleRate; // xmm0_4
  int v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm2_4
  int32 v12; // r12d
  float v13; // xmm0_4
  bool v14; // zf
  CAnimationLayer::NetworkVar_m_op *v15; // rbx
  __int64 v16; // rax
  float v17; // xmm1_4
  float flIntervalc; // [rsp+Ch] [rbp-34h]
  float flIntervalb; // [rsp+Ch] [rbp-34h]
  CAnimationLayer::NetworkVar_m_op *writer_8; // [rsp+18h] [rbp-28h]
  int32 writer_16; // [rsp+20h] [rbp-20h]
  float writer_20; // [rsp+24h] [rbp-1Ch]
  float writer_24; // [rsp+28h] [rbp-18h]
  float writer_28; // [rsp+2Ch] [rbp-14h]

  p_m_op = &this->m_op;
  m_pOwner = this->m_pOwner;
  writer_8 = p_m_op;
  writer_28 = this->m_op.m_flWeight.m_Value.m_Value;
  writer_24 = this->m_op.m_flCycle.m_Value;
  writer_16 = this->m_op.m_hSequence.m_Value.m_Data;
  writer_20 = this->m_op.m_flPrevCycle.m_Value;
  m_pBinding = m_pOwner->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    v7 = *m_pBinding;
  else
    v7 = 0;
  SequenceCycleRate = CBaseAnimatingController::GetSequenceCycleRate(m_pOwner, v7, this->m_op.m_hSequence.m_Value);
  *&v9 = 0.0;
  v10 = ((SequenceCycleRate * a2) * this->m_flPlaybackRate.m_Value.m_Value) + writer_24;
  if ( v10 >= 0.0 )
  {
    *&v9 = 1.0;
    if ( v10 < 1.0 )
      goto LABEL_8;
    this->m_bSequenceFinished = 1;
  }
  if ( this->m_bLooping.m_Value )
    v10 = v10 - v10;
  else
    v10 = *&v9;
LABEL_8:
  v11 = writer_20;
  if ( writer_24 != writer_20 )
    v11 = writer_24;
  v15 = writer_8;
  if ( v10 != writer_24 )
    writer_24 = v10;
  if ( v11 != writer_8->m_flPrevCycle.m_Value )
  {
    flIntervalc = v11;
    (*(writer_8->_vptr_CNetworkedSequenceOperation + 3))(writer_8, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    writer_8->m_flPrevCycle.m_Value = flIntervalc;
    v15 = writer_8;
  }
  if ( writer_24 == writer_8->m_flCycle.m_Value )
  {
    v12 = writer_16;
    if ( v15->m_hSequence.m_Value.m_Data == writer_16 )
    {
LABEL_15:
      v13 = writer_28;
      v14 = writer_28 == v15->m_flWeight.m_Value.m_Value;
      goto LABEL_16;
    }
  }
  else
  {
    (*(v15->_vptr_CNetworkedSequenceOperation + 3))(v15, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v15->m_flCycle.m_Value = writer_24;
    v15 = writer_8;
    v12 = writer_16;
    if ( writer_8->m_hSequence.m_Value.m_Data == writer_16 )
      goto LABEL_15;
  }
  (*(v15->_vptr_CNetworkedSequenceOperation + 3))(v15, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v15->m_hSequence.m_Value.m_Data = v12;
  v15 = writer_8;
  v13 = writer_28;
  v14 = writer_28 == writer_8->m_flWeight.m_Value.m_Value;
LABEL_16:
  if ( !v14 )
  {
    flIntervalb = v13;
    (*(v15->_vptr_CNetworkedSequenceOperation + 3))(v15, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v16 = g_pQuantizedFloatEncoders + 32LL * v15->m_flWeight.m_Value.m_nEncoder;
    v17 = *(v16 + 12);
    if ( flIntervalb <= v17 )
      v17 = fmaxf(*(v16 + 8), flIntervalb);
    v15->m_flWeight.m_Value.m_Value = v17;
  }
}


// CAnimationLayer::IsAbandoned  (line 542, @0x0000000002060910, libserver.so)  // inlines: IsActive, curtime
bool __fastcall CAnimationLayer::IsAbandoned(CAnimationLayer *const this)
{
  int m_nFlags; // eax
  float m_flLastAccess; // xmm0_4
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  bool result; // al

  m_nFlags = this->m_nFlags;
  if ( (m_nFlags & 1) == 0 )
    return 0;
  if ( (m_nFlags & 6) != 0 )
    return 0;
  m_flLastAccess = this->m_flLastAccess;
  m_flCurrentTime = 0.0;
  if ( m_flLastAccess <= 0.0 )
    return 0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        m_flLastAccess = this->m_flLastAccess;
      }
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  result = 1;
  if ( (m_flCurrentTime - m_flLastAccess) <= 0.2 )
    return 0;
  return result;
}


// CAnimationLayer::SetAutofadeDisabled  (line 550, @0x00000000020609a0, libserver.so)  // inlines: ClearFlags, SetFlags
// callers: CBaseViewModel::SendViewModelMatchingSequence, CBaseViewModel::FadePreviousLayer, CDOTAAnimState::ResetGestureSlot
void __fastcall CAnimationLayer::SetAutofadeDisabled(CAnimationLayer *const this, bool bDisable)
{
  if ( bDisable )
    this->m_nFlags |= 0x80u;
  else
    this->m_nFlags &= ~0x80u;
}


// CAnimationLayer::ComputeMaxAnimEvents  (line 562, @0x00000000020609d0, libserver.so)  // inlines: GetModelData, GetModelPtr, operator const RuntimeClass_t*
// calls: GetAnimationEventCount
int __fastcall CAnimationLayer::ComputeMaxAnimEvents(const CAnimationLayer *const this)
{
  const CModel **m_pBinding; // rdx

  m_pBinding = this->m_pOwner->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    return GetAnimationEventCount(*m_pBinding, this->m_op.m_hSequence.m_Value);
  else
    return GetAnimationEventCount(0, this->m_op.m_hSequence.m_Value);
}


// CAnimationLayer::DetectAnimEvents  (line 568, @0x0000000002069b60, libserver.so)  // inlines: AnimEventDetectionQuery_t, GetCycle, GetModel, GetModelData, GetModelPtr, GetSkeletonInstance, HSequence, SequenceLoops, SetLastEventCheck, curtime, operator CWeakHandle<InfoForResourceTypeCModel>, operator const RuntimeClass_t*
// calls: CBaseAnimatingController::IsSequenceLooping, CBaseEntity::InPrediction, CEntityInstance::GetEntityIndex, GetAnimationEvents, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CBaseEntity::IsFirstTimePredicted
// callers: CBaseAnimatingOverlayController::DispatchAnimEvents
// strings: "SV", "%s:  cycle %.3f -> %.3f found %d events [%s]\n"
__int64 __fastcall CAnimationLayer::DetectAnimEvents(
        CAnimationLayer *const this,
        __m128i flStartAnimTime,
        float flEndAnimTime,
        int nMaxEventCount,
        animevent_t *pAnimEvents)
{
  float v5; // r15d
  CBaseAnimatingOverlayController *m_pOwner; // r12
  const ResourceBindingBase_t *m_pBinding; // rax
  HSequence v11; // eax
  const ResourceBindingBase_t *v12; // rcx
  const CModel *v13; // rsi
  bool IsSequenceLooping; // al
  bool v15; // zf
  unsigned int v16; // r12d
  bool v18; // al
  float v19; // xmm1_4
  CBaseAnimatingOverlayController *m_pSkeletonInstance; // rax
  const CModel **v21; // rdx
  const CModel *v22; // rdx
  int32 m_Data; // edx
  const CEntityInstance *v24; // rdi
  int m_Value; // edx
  CGlobalVars *v26; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int AnimationEvents; // eax
  bool IsFirstTimePredicted; // al
  float flStartCycle; // [rsp+0h] [rbp-7Ch]
  float flEndAnimTimea; // [rsp+4h] [rbp-78h]
  float flEndAnimTimeb; // [rsp+4h] [rbp-78h]
  float flEndCycle; // [rsp+8h] [rbp-74h]
  AnimEventDetectionQuery_t query; // [rsp+Ch] [rbp-70h] BYREF

  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(flStartAnimTime));
  m_pOwner = this->m_pOwner;
  flStartCycle = this->m_flLastEventCycle;
  flEndCycle = this->m_op.m_flCycle.m_Value;
  m_pBinding = m_pOwner->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 && m_pBinding->m_pData != 0 )
  {
    flEndAnimTimea = flEndAnimTime;
    v11.m_Data = (*(m_pOwner->_vptr_CSkeletonAnimationController + 24))(m_pOwner);
    v12 = m_pOwner->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
    v13 = v12 != 0 ? v12->m_pData : 0LL;
    IsSequenceLooping = CBaseAnimatingController::IsSequenceLooping(m_pOwner, v13, v11);
    flEndAnimTime = flEndAnimTimea;
    if ( !IsSequenceLooping && this->m_bSequenceFinished )
      flEndCycle = 1.01;
  }
  v15 = this->m_flPlaybackRate.m_Value.m_Value == 0.0;
  this->m_flLastEventCycle = flEndCycle;
  if ( v15 )
    return 0;
  flEndAnimTimeb = flEndAnimTime;
  v18 = CBaseEntity::InPrediction();
  v19 = flEndAnimTimeb;
  if ( v18 && (IsFirstTimePredicted = CBaseEntity::IsFirstTimePredicted(), v19 = flEndAnimTimeb, !IsFirstTimePredicted) )
  {
    return 0;
  }
  else
  {
    m_pSkeletonInstance = this->m_pOwner;
    query.m_hSequence.m_Data = -1;
    if ( m_pSkeletonInstance != 0 )
      m_pSkeletonInstance = m_pSkeletonInstance->m_pSkeletonInstance;
    v21 = *&m_pSkeletonInstance->m_SequenceTransitioner.m_transitioningLayers[2].m_op.m_flCycle.m_Value;
    query.m_pSkeletonInstance = m_pSkeletonInstance;
    if ( v21 != 0 )
      v22 = *v21;
    else
      v22 = 0;
    query.m_pModel = v22;
    m_Data = this->m_op.m_hSequence.m_Value.m_Data;
    v24 = *&m_pSkeletonInstance->m_bSequenceFinished;
    query.m_flStartAnimTime = v5;
    query.m_flEndAnimTime = v19;
    query.m_bIsServerDLL = 1;
    query.m_hSequence.m_Data = m_Data;
    m_Value = this->m_nOrder.m_Value;
    query.m_flStartCycle = flStartCycle;
    query.m_flEndCycle = flEndCycle;
    query.m_nOrder = m_Value;
    query.m_nEntityIndex = CEntityInstance::GetEntityIndex(v24).m_Data;
    v26 = gpGlobals;
    query.m_nTickcount = gpGlobals->tickcount;
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    query.m_flCurrentTime = v26->m_flCurrentTime;
    AnimationEvents = GetAnimationEvents(&query, nMaxEventCount, pAnimEvents);
    v16 = AnimationEvents;
    if ( (this->m_nFlags & 0x1000) != 0 && AnimationEvents > 0 && LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
      LoggingSystem_Log(
        LOG_SERVER,
        1,
        "%s:  cycle %.3f -> %.3f found %d events [%s]\n",
        "SV",
        v16,
        pAnimEvents->options,
        flStartCycle,
        flEndCycle);
  }
  return v16;
}


// CAnimationLayer::GetOperation  (line 614, @0x0000000002060a10, libserver.so)  // inlines: GetModelData, GetModelPtr, GetOperation, SimpleSpline, operator const RuntimeClass_t*
// calls: CModel::pSeqdesc
// callers: CBaseAnimatingOverlayController::SetupSequences, CBaseAnimatingOverlayController::GatherSequences
void __fastcall CAnimationLayer::GetOperation(const CAnimationLayer *const this, CAnimationDecodeOp *pOp)
{
  float32 m_Value; // xmm0_4
  int32 m_Data; // eax
  const CModel *const *m_pBinding; // rax
  const ISequence *v7; // rax
  const ISequence *v8; // r13
  double v9; // xmm0_8
  float v10; // xmm0_4
  double v11; // xmm0_8
  float v12; // xmm0_4
  float v13; // xmm1_4
  double v14; // xmm0_8
  float flDuration; // [rsp+8h] [rbp-28h]
  float flElapsedTime; // [rsp+Ch] [rbp-24h]
  float flElapsedTimea; // [rsp+Ch] [rbp-24h]
  float flElapsedTimeb; // [rsp+Ch] [rbp-24h]

  pOp->m_flCycle = this->m_op.m_flCycle.m_Value;
  m_Value = this->m_op.m_flWeight.m_Value.m_Value;
  pOp->m_flWeight = m_Value;
  m_Data = this->m_op.m_hSequence.m_Value.m_Data;
  pOp->m_source = animopsource_t::ANIM_OP_OVERLAY;
  pOp->m_hSequence.m_Data = m_Data;
  if ( SLOBYTE(this->m_nFlags) >= 0 && !this->m_bLooping.m_Value && m_Value != 0.0 && pOp->m_hSequence.m_Data != -1 )
  {
    m_pBinding = this->m_pOwner->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
    if ( m_pBinding != 0 && *m_pBinding != 0 )
    {
      v7 = CModel::pSeqdesc(*m_pBinding, pOp->m_hSequence);
      v8 = v7;
      if ( v7 != 0 && (*(v7->_vptr_IBaseSequence + 18))(v7) == 0 )
      {
        v9 = (*(this->m_pOwner->_vptr_CSkeletonAnimationController + 21))(this->m_pOwner, pOp->m_hSequence.m_Data);
        flDuration = *&v9;
        flElapsedTime = *&v9 * pOp->m_flCycle;
        v10 = (*(v8->_vptr_IBaseSequence + 41))(v8);
        if ( v10 > flElapsedTime )
        {
          v14 = (*(v8->_vptr_IBaseSequence + 41))(v8, v10, flDuration);
          flElapsedTimeb = *&v14 - flElapsedTime;
          (*(v8->_vptr_IBaseSequence + 41))(v8);
        }
        else
        {
          flElapsedTimea = flDuration - flElapsedTime;
          if ( (*(v8->_vptr_IBaseSequence + 42))(v8) <= flElapsedTimea )
            return;
          v11 = (*(v8->_vptr_IBaseSequence + 42))(v8);
          flElapsedTimeb = *&v11 - flElapsedTimea;
          v12 = (*(v8->_vptr_IBaseSequence + 42))(v8);
        }
        v13 = 1.0 - (flElapsedTimeb / v12);
        pOp->m_flWeight = ((3.0 * (v13 * v13)) - (((v13 * v13) + (v13 * v13)) * v13)) * pOp->m_flWeight;
      }
    }
  }
}


// CAnimationLayer::Debug  (line 655, @0x0000000002060bd0, libserver.so)
int __fastcall CAnimationLayer::Debug(const CAnimationLayer *const this, int nLine)
{
  return nLine;
}


