
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSequenceTransitioner::CheckForSequenceChange  (line 21, @0x00000000023a3d40, libserver.so)  // inlines: AddToTail, Construct<CAnimationLayer>, Element, GetWeight, GrowMemory, IsInSimulation, operator[]
// calls: CAnimationLayer::SetSequence, CAnimationLayer::SetAnimTime, CAnimationLayer::SetFadeOutTime, CModel::IsValidSequence, CModel::pSeqdesc, CAnimationLayer::CAnimationLayer, CAnimationLayer::SetOwner, CUtlVectorBase<CAnimationLayer, CUtlMemory<CAnimationLayer, int> >::RemoveAll, CUtlMemory<CAnimationLayer, int>::Grow
void __fastcall CSequenceTransitioner::CheckForSequenceChange(
        CSequenceTransitioner *const this,
        const CModel *pModel,
        HSequence hCurSequence,
        bool bForceNewSequence,
        bool bInterpolate)
{
  int m_Size; // eax
  int v10; // edx
  CAnimationLayer *v11; // rbx
  float v12; // xmm1_4
  float v13; // xmm1_4
  const ISequence *v14; // rax
  const ISequence *v15; // r13
  float v16; // xmm0_4
  int v17; // eax
  float v18; // xmm3_4
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  CAnimationLayer *v22; // rdx
  float m_Value; // xmm2_4
  CAnimationLayer *m_pMemory; // rdi
  __int64 v25; // rbx
  int v26; // edx
  CAnimationLayer *v27; // rax
  int v28; // edx
  CAnimationLayer *v29; // rdi
  float flFadeOutTime; // [rsp+Ch] [rbp-34h]
  bool flFadeOutTimeb; // [rsp+Ch] [rbp-34h]
  bool flFadeOutTimec; // [rsp+Ch] [rbp-34h]
  bool flFadeOutTimea; // [rsp+Ch] [rbp-34h]

  if ( pModel != 0 && (gpGlobals == 0 || gpGlobals->m_bInSimulation) )
  {
    m_Size = this->m_animationQueue.m_Size;
    v10 = this->m_animationQueue.m_Size;
    if ( this->m_animationQueue.m_Size == 0 )
    {
      if ( this->m_animationQueue.m_Memory.m_nAllocationCount == 0 )
      {
        flFadeOutTimea = bForceNewSequence;
        CUtlMemory<CAnimationLayer,int>::Grow(&this->m_animationQueue.m_Memory, 1);
        m_Size = this->m_animationQueue.m_Size;
        bForceNewSequence = flFadeOutTimea;
      }
      m_pMemory = this->m_animationQueue.m_Memory.m_pMemory;
      this->m_animationQueue.m_Size = m_Size + 1;
      if ( m_pMemory != 0 )
      {
        flFadeOutTimeb = bForceNewSequence;
        CAnimationLayer::CAnimationLayer(m_pMemory);
        m_pMemory = this->m_animationQueue.m_Memory.m_pMemory;
        bForceNewSequence = flFadeOutTimeb;
      }
      flFadeOutTimec = bForceNewSequence;
      CAnimationLayer::SetOwner(m_pMemory, 0);
      v10 = this->m_animationQueue.m_Size;
      bForceNewSequence = flFadeOutTimec;
    }
    v11 = &this->m_animationQueue.m_Memory.m_pMemory[v10 - 1];
    if ( v11->m_flLayerAnimtime != 0.0
      && (hCurSequence.m_Data != v11->m_op.m_hSequence.m_Value.m_Data || bForceNewSequence) )
    {
      if ( CModel::IsValidSequence(pModel, hCurSequence)
        && (v14 = CModel::pSeqdesc(pModel, hCurSequence), (*(v14->_vptr_IBaseSequence + 18))(v14) == 0)
        && bInterpolate )
      {
        v15 = CModel::pSeqdesc(pModel, v11->m_op.m_hSequence.m_Value);
        flFadeOutTime = (*(v15->_vptr_IBaseSequence + 42))(v15);
        if ( (*(v15->_vptr_IBaseSequence + 41))(v15) <= flFadeOutTime )
          (*(v15->_vptr_IBaseSequence + 41))(v15);
        else
          (*(v15->_vptr_IBaseSequence + 42))(v15);
        v17 = this->m_animationQueue.m_Size - 2;
        if ( v17 < 0 )
        {
          v18 = 1.0;
        }
        else
        {
          v18 = 1.0;
          v19 = -136 * (v17 + 1LL);
          v20 = v17;
          v21 = 0;
          v22 = &this->m_animationQueue.m_Memory.m_pMemory[v20];
          do
          {
            m_Value = v22[v21 / 0x88].m_op.m_flWeight.m_Value.m_Value;
            if ( m_Value > 0.0 )
              v18 = v18 * (1.0 - m_Value);
            v21 -= 136LL;
          }
          while ( v21 != v19 );
        }
        CAnimationLayer::SetFadeOutTime(v11, v16 * v18, 0.0);
      }
      else
      {
        CUtlVectorBase<CAnimationLayer,CUtlMemory<CAnimationLayer,int>>::RemoveAll(&this->m_animationQueue);
      }
      v25 = this->m_animationQueue.m_Size;
      v26 = this->m_animationQueue.m_Size;
      if ( v25 == this->m_animationQueue.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CAnimationLayer,int>::Grow(&this->m_animationQueue.m_Memory, 1);
        v26 = this->m_animationQueue.m_Size;
      }
      v27 = this->m_animationQueue.m_Memory.m_pMemory;
      v28 = v26 + 1;
      this->m_animationQueue.m_Size = v28;
      v29 = &v27[v25];
      if ( v29 != 0 )
      {
        CAnimationLayer::CAnimationLayer(v29);
        v28 = this->m_animationQueue.m_Size;
        v27 = this->m_animationQueue.m_Memory.m_pMemory;
      }
      v11 = &v27[v28 - 1];
      CAnimationLayer::SetOwner(v11, 0);
    }
    CAnimationLayer::SetSequence(
      v11,
      -1,
      SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE,
      LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
    CAnimationLayer::SetAnimTime(v11, 0.0, v12);
    CAnimationLayer::SetFadeOutTime(v11, 0.0, v13);
  }
}


// CSequenceTransitioner::UpdateCurrent  (line 101, @0x00000000023a39b0, libserver.so)  // inlines: AddToTail, Construct<CAnimationLayer>, Destruct<CAnimationLayer>, Element, GetFadeout, GrowMemory, IsInSimulation, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: CAnimationLayer::SetWeight, CAnimationLayer::~CAnimationLayer, CAnimationLayer::SetSequence, CAnimationLayer::SetAnimTime, CAnimationLayer::SetCycle, CAnimationLayer::SetPlaybackRate, CAnimationLayer::CAnimationLayer, CAnimationLayer::SetOwner, memmove, CUtlMemory<CAnimationLayer, int>::Grow
void __fastcall CSequenceTransitioner::UpdateCurrent(
        CSequenceTransitioner *const this,
        const CModel *pModel,
        HSequence hCurSequence,
        __m128i flCurCycle,
        float flCurPlaybackRate)
{
  float v7; // ebx
  int m_Size; // eax
  int v9; // ecx
  int v10; // ebx
  __int64 v11; // xmm1_8
  int v12; // eax
  float m_flInterpolatedTime; // xmm3_4
  __int64 v14; // r14
  CAnimationLayer *v15; // rdi
  float m_flLayerFadeOuttime; // xmm2_4
  float m_flLayerAnimtime; // xmm4_4
  double v18; // xmm6_8
  double v19; // xmm0_8
  CAnimationLayer *v20; // rdi
  int v21; // eax
  CAnimationLayer *v22; // rax
  float v23; // xmm2_4
  float v24; // xmm7_4
  float v25; // xmm0_4
  CAnimationLayer *v26; // r14
  float v27; // xmm1_4
  float v28; // xmm1_4
  CAnimationLayer *m_pMemory; // rdi
  unsigned int v30; // [rsp-3Ch] [rbp-3Ch]
  unsigned int v31; // [rsp-3Ch] [rbp-3Ch]
  unsigned int v32; // [rsp-3Ch] [rbp-3Ch]
  float v33; // [rsp-3Ch] [rbp-3Ch]
  float v34; // [rsp-3Ch] [rbp-3Ch]
  float v35; // [rsp-3Ch] [rbp-3Ch]
  float v36; // [rsp-3Ch] [rbp-3Ch]

  if ( pModel != 0 )
  {
    v7 = COERCE_FLOAT(_mm_cvtsi128_si32(flCurCycle));
    m_Size = this->m_animationQueue.m_Size;
    v9 = this->m_animationQueue.m_Size;
    if ( this->m_animationQueue.m_Size == 0 )
    {
      if ( this->m_animationQueue.m_Memory.m_nAllocationCount == 0 )
      {
        v36 = flCurPlaybackRate;
        CUtlMemory<CAnimationLayer,int>::Grow(&this->m_animationQueue.m_Memory, 1);
        m_Size = this->m_animationQueue.m_Size;
        flCurPlaybackRate = v36;
      }
      m_pMemory = this->m_animationQueue.m_Memory.m_pMemory;
      this->m_animationQueue.m_Size = m_Size + 1;
      if ( m_pMemory != 0 )
      {
        v34 = flCurPlaybackRate;
        CAnimationLayer::CAnimationLayer(m_pMemory);
        m_pMemory = this->m_animationQueue.m_Memory.m_pMemory;
        flCurPlaybackRate = v34;
      }
      v35 = flCurPlaybackRate;
      CAnimationLayer::SetOwner(m_pMemory, 0);
      v9 = this->m_animationQueue.m_Size;
      flCurPlaybackRate = v35;
    }
    if ( gpGlobals == 0 || gpGlobals->m_bInSimulation )
    {
      v33 = flCurPlaybackRate;
      v26 = &this->m_animationQueue.m_Memory.m_pMemory[v9 - 1];
      CAnimationLayer::SetSequence(
        v26,
        hCurSequence,
        SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE,
        LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
      CAnimationLayer::SetAnimTime(v26, this->m_flInterpolatedTime, v27);
      CAnimationLayer::SetCycle(v26, v7, v28, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
      CAnimationLayer::SetPlaybackRate(v26, COERCE_DOUBLE(LODWORD(v33)), COERCE_DOUBLE(LODWORD(v33)));
      v9 = this->m_animationQueue.m_Size;
    }
    if ( v9 > 1 )
    {
      v10 = 0;
      v11 = 1065353216;
      while ( 1 )
      {
        m_flInterpolatedTime = this->m_flInterpolatedTime;
        v14 = v10;
        v15 = &this->m_animationQueue.m_Memory.m_pMemory[v14];
        m_flLayerFadeOuttime = v15->m_flLayerFadeOuttime;
        m_flLayerAnimtime = v15->m_flLayerAnimtime;
        if ( m_flLayerFadeOuttime <= 0.0 )
          goto LABEL_21;
        HIDWORD(v18) = HIDWORD(v11);
        *&v18 = *&v11 - ((m_flInterpolatedTime - m_flLayerAnimtime) / m_flLayerFadeOuttime);
        v19 = v18;
        if ( *&v18 > 0.0 && *&v11 >= *&v18 )
        {
          *&v19 = COERCE_UNSIGNED_INT(((3.0 * *&v18) * *&v18) - (((*&v18 + *&v18) * *&v18) * *&v18));
        }
        else if ( *&v18 > *&v11 )
        {
          v19 = *&v11;
LABEL_14:
          if ( m_flLayerAnimtime > m_flInterpolatedTime )
          {
            v30 = v11;
            CAnimationLayer::SetWeight(v15, 0.0, *&v11, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
            v12 = this->m_animationQueue.m_Size;
            v11 = v30;
            goto LABEL_8;
          }
          goto LABEL_15;
        }
        if ( *&v19 >= *&v11 )
          goto LABEL_14;
LABEL_15:
        if ( *&v19 <= 0.0 )
        {
LABEL_21:
          v32 = v11;
          CAnimationLayer::SetWeight(v15, 0.0, *&v11, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
          v11 = v32;
          if ( gpGlobals != 0 && !gpGlobals->m_bInSimulation )
          {
            v20 = &this->m_animationQueue.m_Memory.m_pMemory[v14];
LABEL_24:
            CAnimationLayer::~CAnimationLayer(v20);
            v21 = this->m_animationQueue.m_Size;
            v11 = v32;
            if ( this->m_animationQueue.m_Size - v10 - 1 > 0 )
            {
              memmove(
                &this->m_animationQueue.m_Memory.m_pMemory[v14],
                &this->m_animationQueue.m_Memory.m_pMemory[v14 + 1],
                136LL * (this->m_animationQueue.m_Size - v10 - 1));
              v21 = this->m_animationQueue.m_Size;
              v11 = v32;
            }
            v12 = v21 - 1;
            --v10;
            this->m_animationQueue.m_Size = v12;
            goto LABEL_8;
          }
          v22 = &this->m_animationQueue.m_Memory.m_pMemory[v14];
          v23 = v22->m_flLayerFadeOuttime;
          if ( v23 > 0.0 )
          {
            v24 = 1.0 - (((this->m_flInterpolatedTime - 0.2) - v22->m_flLayerAnimtime) / v23);
            v25 = v24;
            if ( v24 > 0.0 && v24 <= 1.0 )
            {
              v25 = ((3.0 * v24) * v24) - (((v24 + v24) * v24) * v24);
            }
            else
            {
              v20 = &this->m_animationQueue.m_Memory.m_pMemory[v14];
              if ( v24 > 1.0 )
                goto LABEL_24;
            }
            if ( v25 != 0.0 )
            {
              v20 = &this->m_animationQueue.m_Memory.m_pMemory[v14];
              goto LABEL_24;
            }
          }
          v12 = this->m_animationQueue.m_Size;
LABEL_8:
          if ( v12 - 1 <= ++v10 )
            return;
        }
        else
        {
          v31 = v11;
          ++v10;
          CAnimationLayer::SetWeight(v15, v19, *&v11, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
          v11 = v31;
          if ( this->m_animationQueue.m_Size - 1 <= v10 )
            return;
        }
      }
    }
  }
}


// TransitioningLayer_t::AddDatadescMetadataKeys  (line 171, @0x000000000238e070, libserver.so)
void __fastcall TransitioningLayer_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// TransitioningLayer_t::GetBaseMap  (line 171, @0x000000000238e080, libserver.so)
datamap_t *__cdecl TransitioningLayer_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<TransitioningLayer_t>  (line 171, @0x000000000238e090, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "TransitioningLayer_t"
// globals: `guard variable for'DataMapInit<TransitioningLayer_t>(TransitioningLayer_t *)::nameHolder, TransitioningLayer_t::m_DataMap, DataMapInit<TransitioningLayer_t>(TransitioningLayer_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<TransitioningLayer_t>(TransitioningLayer_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<TransitioningLayer_t>(TransitioningLayer_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<TransitioningLayer_t>(TransitioningLayer_t *)::nameHolder) != 0 )
  {
    DataMapInit<TransitioningLayer_t>(TransitioningLayer_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<TransitioningLayer_t>(TransitioningLayer_t *)::nameHolder.m_pszBase = "TransitioningLayer_t";
    DataMapInit<TransitioningLayer_t>(TransitioningLayer_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<TransitioningLayer_t>(TransitioningLayer_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<TransitioningLayer_t>(TransitioningLayer_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<TransitioningLayer_t>(TransitioningLayer_t *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<TransitioningLayer_t>(TransitioningLayer_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<TransitioningLayer_t>(TransitioningLayer_t *)::nameHolder,
      &_dso_handle);
  }
  TransitioningLayer_t::m_DataMap.baseMap = 0;
  TransitioningLayer_t::m_DataMap.dataDesc = &DataMapInit<TransitioningLayer_t>(TransitioningLayer_t *)::dataDesc[1];
  TransitioningLayer_t::m_DataMap.dataNumFields = 7;
  return &TransitioningLayer_t::m_DataMap;
}


// CSequenceTransitioner2::GetDataDescMap  (line 181, @0x0000000002380b80, libserver.so)
// globals: CSequenceTransitioner2::m_DataMap
datamap_t *__fastcall CSequenceTransitioner2::GetDataDescMap(CSequenceTransitioner2 *const this)
{
  return &CSequenceTransitioner2::m_DataMap;
}


// CSequenceTransitioner2::AddDatadescMetadataKeys  (line 181, @0x000000000238e150, libserver.so)
void __fastcall CSequenceTransitioner2::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CSequenceTransitioner2::GetBaseMap  (line 181, @0x000000000238e160, libserver.so)
datamap_t *__cdecl CSequenceTransitioner2::GetBaseMap()
{
  return 0;
}


// DataMapInit<CSequenceTransitioner2>  (line 181, @0x000000000238e170, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CSequenceTransitioner2"
// globals: `guard variable for'DataMapInit<CSequenceTransitioner2>(CSequenceTransitioner2 *)::nameHolder, CSequenceTransitioner2::m_DataMap, DataMapInit<CSequenceTransitioner2>(CSequenceTransitioner2 *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CSequenceTransitioner2>(CSequenceTransitioner2 *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CSequenceTransitioner2>(CSequenceTransitioner2 *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSequenceTransitioner2>(CSequenceTransitioner2 *)::nameHolder) != 0 )
  {
    DataMapInit<CSequenceTransitioner2>(CSequenceTransitioner2 *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CSequenceTransitioner2>(CSequenceTransitioner2 *)::nameHolder.m_pszBase = "CSequenceTransitioner2";
    DataMapInit<CSequenceTransitioner2>(CSequenceTransitioner2 *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CSequenceTransitioner2>(CSequenceTransitioner2 *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CSequenceTransitioner2>(CSequenceTransitioner2 *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CSequenceTransitioner2>(CSequenceTransitioner2 *)::nameHolder.m_nLenBase = 22;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSequenceTransitioner2>(CSequenceTransitioner2 *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CSequenceTransitioner2>(CSequenceTransitioner2 *)::nameHolder,
      &_dso_handle);
  }
  CSequenceTransitioner2::m_DataMap.baseMap = 0;
  CSequenceTransitioner2::m_DataMap.dataDesc = &DataMapInit<CSequenceTransitioner2>(CSequenceTransitioner2 *)::dataDesc[1];
  CSequenceTransitioner2::m_DataMap.dataNumFields = 4;
  return &CSequenceTransitioner2::m_DataMap;
}


// CSequenceTransitioner2::CSequenceTransitioner2  (line 189, @0x000000000238e230, libserver.so)  // inlines: TransitioningLayer_t
// calls: CNetworkedSequenceOperation::CNetworkedSequenceOperation
// callers: CSchemaClassBinding<CSequenceTransitioner2>::Allocate, CSchemaClassBinding<CSequenceTransitioner2>::ConstructInPlace, CSchemaClassBinding<CSequenceTransitioner2>::AllocateAndCopyConstruct, CBaseAnimatingController::CBaseAnimatingController
void __fastcall CSequenceTransitioner2::CSequenceTransitioner2(CSequenceTransitioner2 *const this)
{
  CNetworkedSequenceOperation *p_m_currentOp; // rdi
  CSequenceTransitioner2 *p_m_op; // rbx
  CNetworkedSequenceOperation *v4; // rdi

  p_m_currentOp = &this->m_currentOp;
  p_m_op = &this->m_transitioningLayers[0].m_op;
  *&p_m_currentOp[-1].m_flPrevCycleFromDiscontinuity = off_40A8C10;
  CNetworkedSequenceOperation::CNetworkedSequenceOperation(p_m_currentOp);
  do
  {
    v4 = p_m_op;
    p_m_op = (p_m_op + 72);
    p_m_op[-1].m_transitioningLayers[3]._vptr_TransitioningLayer_t = off_3FC8030;
    CNetworkedSequenceOperation::CNetworkedSequenceOperation(v4);
  }
  while ( p_m_op != this + 1 );
  this->m_pOwner = 0;
}


// CSequenceTransitioner2::Init  (line 197, @0x000000000238e2a0, libserver.so)  // inlines: CAnimationOperationWriter, GetEncoder, GetQuantizedFloatEncoderByIndex, Init, LatchAnimationOperation, NetworkStateChanged, Set, operator=, operator=<HSequence>, operator=<float>, ~CAnimationOperationWriter
// callers: CBaseAnimatingController::Connect, CBaseAnimatingOverlayController::Connect
void __fastcall CSequenceTransitioner2::Init(CSequenceTransitioner2 *const this, CBaseAnimatingController *pOwner)
{
  CNetworkedSequenceOperation *p_m_currentOp; // r12
  float m_Value; // xmm1_4
  __int64 v5; // rax
  float v6; // xmm0_4
  float v7; // [rsp-14h] [rbp-1Ch]
  float v8; // [rsp-14h] [rbp-1Ch]
  float v9; // [rsp-14h] [rbp-1Ch]
  float32 v10; // [rsp-14h] [rbp-1Ch]

  p_m_currentOp = &this->m_currentOp;
  this->m_pOwner = pOwner;
  m_Value = this->m_currentOp.m_flWeight.m_Value.m_Value;
  if ( this->m_currentOp.m_flPrevCycle.m_Value != 0.0 )
  {
    v10 = this->m_currentOp.m_flWeight.m_Value.m_Value;
    (*(this->m_currentOp._vptr_CNetworkedSequenceOperation + 3))(&this->m_currentOp, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_currentOp.m_flPrevCycle.m_Value = 0.0;
    m_Value = v10;
  }
  if ( this->m_currentOp.m_flCycle.m_Value != 0.0 )
  {
    v9 = m_Value;
    (*(this->m_currentOp._vptr_CNetworkedSequenceOperation + 3))(p_m_currentOp, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_currentOp.m_flCycle.m_Value = 0.0;
    m_Value = v9;
  }
  if ( this->m_currentOp.m_hSequence.m_Value.m_Data != -1 )
  {
    v8 = m_Value;
    (*(this->m_currentOp._vptr_CNetworkedSequenceOperation + 3))(p_m_currentOp, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_currentOp.m_hSequence.m_Value.m_Data = -1;
    m_Value = v8;
  }
  if ( m_Value != this->m_currentOp.m_flWeight.m_Value.m_Value )
  {
    v7 = m_Value;
    (*(this->m_currentOp._vptr_CNetworkedSequenceOperation + 3))(p_m_currentOp, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v5 = g_pQuantizedFloatEncoders + 32LL * this->m_currentOp.m_flWeight.m_Value.m_nEncoder;
    v6 = *(v5 + 12);
    if ( v7 <= v6 )
      v6 = fmaxf(*(v5 + 8), v7);
    this->m_currentOp.m_flWeight.m_Value.m_Value = v6;
  }
  this->m_flCurrentPlaybackRate = 1.0;
  this->m_transitioningLayers[0].m_nOrder = 15;
  this->m_transitioningLayers[1].m_nOrder = 15;
  this->m_transitioningLayers[2].m_nOrder = 15;
  this->m_transitioningLayers[3].m_nOrder = 15;
}


// CSequenceTransitioner2::SetupAnimationHistoryContext  (line 222, @0x000000000238e430, libserver.so)
void __fastcall CSequenceTransitioner2::SetupAnimationHistoryContext(
        CSequenceTransitioner2 *const this,
        ISkeletonAnimationHistoryContext *pContext)
{
  ;
}


// CSequenceTransitioner2::FinishTransitioningLayer  (line 229, @0x000000000238e440, libserver.so)
void __fastcall CSequenceTransitioner2::FinishTransitioningLayer(CSequenceTransitioner2 *const this, int nLayerIndex)
{
  __int64 i; // rax
  int m_nOrder; // edx

  for ( i = 0; i != 4; ++i )
  {
    m_nOrder = this->m_transitioningLayers[i].m_nOrder;
    if ( m_nOrder != 15 && m_nOrder > this->m_transitioningLayers[nLayerIndex].m_nOrder )
      this->m_transitioningLayers[i].m_nOrder = m_nOrder - 1;
  }
  this->m_transitioningLayers[nLayerIndex].m_nOrder = 15;
}


// CSequenceTransitioner2::AddCurrentSequenceToTransition  (line 244, @0x000000000238e640, libserver.so)  // inlines: CAnimationOperationWriter, FinishTransitioningLayer, GetClassNameAsCStr, GetClassname, GetCycle, GetEncoder, GetModelData, GetModelPtr, GetQuantizedFloatEncoderByIndex, GetSequence, GetSequenceCycleRate, GetWeight, HSequence, Init, IsSequenceLooping, NetworkStateChanged, Set, SetCycle, SetPrevCycle, String, operator const RuntimeClass_t*, operator=, ~CAnimationOperationWriter
// calls: CModel::IsValidSequence, CModel::pSeqdesc, CBaseAnimatingController::IsSequenceDebugging, LoggingSystem_IsChannelEnabled, CAnimationOperationWriter::LatchAnimationOperation, CSequenceTransitioner2::Reset, CBaseAnimatingController::GetSequenceName, CSkeletonAnimationController::GetOwnerEntity, CGlobalVarsBase::curtime, Plat_FloatTime, LoggingSystem_Log, CBaseAnimatingController::GetSequenceCycleRate (15 total)
// callers: CSequenceTransitioner2::ForcePreviousSequenceIntoTransitionLayer, CSequenceTransitioner2::AnimationFrameAdvance
// strings: "SV", "%s:  %f tick(%d) curtime(%f) AddCurrentSequenceToTransition: %s : %d=[%s] : %6.4f -> %6.4
void __fastcall CSequenceTransitioner2::AddCurrentSequenceToTransition(
        CSequenceTransitioner2 *const this,
        __m128i a2,
        float flAnimTime)
{
  int32 m_Data; // esi
  const CModel *const *m_pBinding; // rax
  const CModel *v6; // r13
  unsigned int v7; // r14d
  int m_nOrder; // edx
  __int64 i; // rax
  int v10; // ecx
  TransitioningLayer_t *m_transitioningLayers; // rdi
  TransitioningLayer_t *v12; // r12
  int v13; // eax
  float v14; // xmm1_4
  TransitioningLayer_t *v15; // rdx
  __int64 v16; // rsi
  const ISequence *v17; // rax
  const ISequence *v18; // r15
  float v19; // xmm0_4
  float32 v20; // xmm0_4
  CBaseAnimatingController *m_pOwner; // rdi
  CEntityInstance *v22; // rax
  float v23; // xmm0_4
  __m128i v24; // xmm2
  int32 v25; // eax
  float v26; // r14d
  float v27; // xmm0_4
  const ISequence *v28; // rax
  int v29; // edx
  TransitioningLayer_t *j; // rax
  float m_Value; // xmm1_4
  __int64 v32; // rax
  float v33; // xmm0_4
  const char *SequenceName; // r14
  int32 v35; // r15d
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // r13
  double v38; // r12
  unsigned int tickcount; // ebx
  double v40; // xmm0_8
  const CModel **v41; // rax
  const CModel *v42; // rsi
  float SequenceCycleRate; // xmm0_4
  CBaseAnimatingController *v44; // rdi
  const CModel **v45; // rax
  const CModel *v46; // rsi
  bool IsSequenceLooping; // al
  float v48; // xmm1_4
  float v49; // xmm0_4
  double v50; // [rsp+18h] [rbp-78h]
  double v51; // [rsp+20h] [rbp-70h]
  double m_flPlaybackRate; // [rsp+28h] [rbp-68h]
  double m_flFadeOutDuration; // [rsp+30h] [rbp-60h]
  float v54; // [rsp+30h] [rbp-60h]
  double flCycle; // [rsp+38h] [rbp-58h]
  float flCyclea; // [rsp+38h] [rbp-58h]
  float flCycleb; // [rsp+38h] [rbp-58h]
  CAnimationOperationWriter writer; // [rsp+40h] [rbp-50h] BYREF

  m_Data = this->m_currentOp.m_hSequence.m_Value.m_Data;
  if ( m_Data != -1 )
  {
    m_pBinding = this->m_pOwner->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
    if ( m_pBinding != 0 )
    {
      v6 = *m_pBinding;
      if ( *m_pBinding != 0 )
      {
        v7 = _mm_cvtsi128_si32(a2);
        if ( CModel::IsValidSequence(*m_pBinding, m_Data) )
        {
          if ( CModel::IsValidSequence(v6, this->m_pOwner->m_baseLayer.m_hSequence.m_Value)
            && (v28 = CModel::pSeqdesc(v6, this->m_pOwner->m_baseLayer.m_hSequence.m_Value),
                (*(v28->_vptr_IBaseSequence + 18))(v28) != 0) )
          {
            CSequenceTransitioner2::Reset(this);
          }
          else if ( this->m_currentOp.m_flWeight.m_Value.m_Value != 0.0 )
          {
            for ( i = 0; i != 4; ++i )
            {
              m_nOrder = this->m_transitioningLayers[i].m_nOrder;
              if ( m_nOrder != 15 )
                this->m_transitioningLayers[i].m_nOrder = m_nOrder + 1;
            }
            v10 = this->m_transitioningLayers[0].m_nOrder;
            m_transitioningLayers = this->m_transitioningLayers;
            if ( v10 == 15 )
            {
              v12 = this->m_transitioningLayers;
            }
            else
            {
              v12 = this->m_transitioningLayers;
              v13 = 0;
              v14 = 3.4028235e38;
              v15 = &this->m_transitioningLayers[1];
              v16 = -1;
              while ( 1 )
              {
                if ( v14 > (v12->m_flStartAnimTime + v12->m_flFadeOutDuration) )
                {
                  v14 = v12->m_flStartAnimTime + v12->m_flFadeOutDuration;
                  v16 = v13;
                }
                if ( ++v13 == 4 )
                  break;
                v12 = v15++;
                if ( v15[-1].m_nOrder == 15 )
                  goto LABEL_17;
              }
              v29 = 4;
              v12 = &this->m_transitioningLayers[v16];
              for ( j = &this->m_transitioningLayers[1]; ; ++j )
              {
                if ( v10 != 15 && this->m_transitioningLayers[v16].m_nOrder < v10 )
                  m_transitioningLayers->m_nOrder = v10 - 1;
                if ( --v29 == 0 )
                  break;
                m_transitioningLayers = j;
                v10 = j->m_nOrder;
              }
              this->m_transitioningLayers[v16].m_nOrder = 15;
            }
LABEL_17:
            v17 = CModel::pSeqdesc(v6, this->m_currentOp.m_hSequence.m_Value);
            LODWORD(v12->m_flStartAnimTime) = v7;
            v18 = v17;
            LODWORD(v17) = v12->m_op.m_hSequence.m_Value.m_Data;
            LODWORD(v12->m_flAnimTime) = v7;
            if ( this->m_currentOp.m_hSequence.m_Value.m_Data != v17 )
            {
              (*(v12->m_op._vptr_CNetworkedSequenceOperation + 3))(&v12->m_op, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              v12->m_op.m_hSequence.m_Value.m_Data = this->m_currentOp.m_hSequence.m_Value.m_Data;
            }
            if ( v12->m_op.m_flPrevCycle.m_Value != this->m_currentOp.m_flPrevCycle.m_Value )
            {
              (*(v12->m_op._vptr_CNetworkedSequenceOperation + 3))(&v12->m_op, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              v12->m_op.m_flPrevCycle.m_Value = this->m_currentOp.m_flPrevCycle.m_Value;
            }
            if ( v12->m_op.m_flCycle.m_Value != this->m_currentOp.m_flCycle.m_Value )
            {
              (*(v12->m_op._vptr_CNetworkedSequenceOperation + 3))(&v12->m_op, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              v12->m_op.m_flCycle.m_Value = this->m_currentOp.m_flCycle.m_Value;
            }
            if ( v12->m_op.m_flWeight.m_Value.m_Value != this->m_currentOp.m_flWeight.m_Value.m_Value )
            {
              (*(v12->m_op._vptr_CNetworkedSequenceOperation + 3))(&v12->m_op, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              m_Value = this->m_currentOp.m_flWeight.m_Value.m_Value;
              v32 = g_pQuantizedFloatEncoders + 32LL * v12->m_op.m_flWeight.m_Value.m_nEncoder;
              v33 = *(v32 + 12);
              if ( m_Value <= v33 )
                v33 = fmaxf(*(v32 + 8), m_Value);
              v12->m_op.m_flWeight.m_Value.m_Value = v33;
            }
            v12->m_op.m_bSequenceChangeNetworked = this->m_currentOp.m_bSequenceChangeNetworked;
            v12->m_op.m_bDiscontinuity = this->m_currentOp.m_bDiscontinuity;
            v12->m_op.m_flPrevCycleFromDiscontinuity = this->m_currentOp.m_flPrevCycleFromDiscontinuity;
            v12->m_op.m_flPrevCycleForAnimEventDetection = this->m_currentOp.m_flPrevCycleForAnimEventDetection;
            v12->m_flPlaybackRate = this->m_flCurrentPlaybackRate;
            v19 = (*(v18->_vptr_IBaseSequence + 42))(v18);
            writer.m_hSequence.m_Data = -1;
            v12->m_flFadeOutDuration = v19 * this->m_currentOp.m_flWeight.m_Value.m_Value;
            v20 = this->m_currentOp.m_flWeight.m_Value.m_Value;
            v12->m_nOrder = 0;
            v12->m_flStartWeight = v20;
            m_pOwner = this->m_pOwner;
            if ( m_pOwner != 0 )
              v22 = m_pOwner->m_pSkeletonInstance->m_pOwner;
            else
              v22 = 0;
            v23 = v12->m_op.m_flWeight.m_Value.m_Value;
            v24 = _mm_cvtsi32_si128(v7);
            writer.m_pEntity = v22;
            *v24.m128i_i32 = *v24.m128i_i32 - this->m_flCurrentAnimTime;
            writer.m_pOp = &v12->m_op;
            v25 = v12->m_op.m_hSequence.m_Value.m_Data;
            writer.m_flWeight = v23;
            v26 = COERCE_FLOAT(_mm_cvtsi128_si32(v24));
            writer.m_flCycle = v12->m_op.m_flCycle.m_Value;
            v27 = v12->m_op.m_flPrevCycle.m_Value;
            writer.m_hSequence.m_Data = v25;
            writer.m_flPrevCycle = v27;
            if ( *v24.m128i_i32 != 0.0 )
            {
              v41 = m_pOwner->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
              v54 = this->m_currentOp.m_flCycle.m_Value;
              flCyclea = v26 * this->m_flCurrentPlaybackRate;
              if ( v41 != 0 )
                v42 = *v41;
              else
                v42 = 0;
              SequenceCycleRate = CBaseAnimatingController::GetSequenceCycleRate(
                                    m_pOwner,
                                    v42,
                                    this->m_currentOp.m_hSequence.m_Value);
              v44 = this->m_pOwner;
              v45 = v44->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
              flCycleb = (flCyclea * SequenceCycleRate) + v54;
              if ( v45 != 0 )
                v46 = *v45;
              else
                v46 = 0;
              IsSequenceLooping = CBaseAnimatingController::IsSequenceLooping(
                                    v44,
                                    v46,
                                    this->m_currentOp.m_hSequence.m_Value);
              v49 = ClampCycle(flCycleb, v48, IsSequenceLooping);
              if ( v49 != writer.m_flCycle )
                writer.m_flCycle = v49;
              m_pOwner = this->m_pOwner;
            }
            if ( v26 > 0.0 && this->m_currentOp.m_flCycle.m_Value != writer.m_flPrevCycle )
              writer.m_flPrevCycle = this->m_currentOp.m_flCycle.m_Value;
            if ( CBaseAnimatingController::IsSequenceDebugging(m_pOwner)
              && LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
            {
              flCycle = v12->m_op.m_flWeight.m_Value.m_Value;
              m_flFadeOutDuration = v12->m_flFadeOutDuration;
              m_flPlaybackRate = v12->m_flPlaybackRate;
              v51 = v12->m_op.m_flCycle.m_Value;
              v50 = v12->m_op.m_flPrevCycle.m_Value;
              SequenceName = CBaseAnimatingController::GetSequenceName(this->m_pOwner, v12->m_op.m_hSequence.m_Value);
              v35 = v12->m_op.m_hSequence.m_Value.m_Data;
              m_pEntity = CSkeletonAnimationController::GetOwnerEntity(this->m_pOwner)->m_pEntity;
              m_pAsString = "";
              if ( m_pEntity->m_designerName.u.m_Id != 0 )
                m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
              v38 = CGlobalVarsBase::curtime(gpGlobals, 0);
              tickcount = gpGlobals->tickcount;
              v40 = Plat_FloatTime();
              LoggingSystem_Log(
                LOG_SERVER,
                1,
                "%s:  %f tick(%d) curtime(%f) AddCurrentSequenceToTransition: %s : %d=[%s] : %6.4f -> %6.4f rate %6.3f fa"
                "de %6.3f weight %5.3f\n",
                "SV",
                tickcount,
                m_pAsString,
                v40,
                v38,
                v50,
                v51,
                m_flPlaybackRate,
                m_flFadeOutDuration,
                flCycle,
                v35,
                SequenceName);
            }
            CAnimationOperationWriter::LatchAnimationOperation(&writer);
          }
        }
      }
    }
  }
}


// CSequenceTransitioner2::ForcePreviousSequenceIntoTransitionLayer  (line 375, @0x000000000238ec50, libserver.so)  // inlines: CAnimationOperationWriter, GetEncoder, GetQuantizedFloatEncoderByIndex, Init, LatchAnimationOperation, NetworkStateChanged, Set, operator=, operator=<HSequence>, operator=<float>, ~CAnimationOperationWriter
// calls: CSequenceTransitioner2::AddCurrentSequenceToTransition
// callers: CBaseAnimatingController::ResetClientsideFrame, CBaseAnimatingController::SetSequence
void __fastcall CSequenceTransitioner2::ForcePreviousSequenceIntoTransitionLayer(
        CSequenceTransitioner2 *const this,
        __m128i a2,
        float flAnimTime)
{
  CNetworkedSequenceOperation *p_m_currentOp; // r12
  float m_Value; // xmm1_4
  __int64 v6; // rax
  float v7; // xmm0_4
  float v8; // [rsp+Ch] [rbp-14h]
  float v9; // [rsp+Ch] [rbp-14h]
  float v10; // [rsp+Ch] [rbp-14h]
  float32 v11; // [rsp+Ch] [rbp-14h]

  p_m_currentOp = &this->m_currentOp;
  CSequenceTransitioner2::AddCurrentSequenceToTransition(this, a2, flAnimTime);
  m_Value = this->m_currentOp.m_flWeight.m_Value.m_Value;
  if ( this->m_currentOp.m_flPrevCycle.m_Value != 0.0 )
  {
    v11 = this->m_currentOp.m_flWeight.m_Value.m_Value;
    (*(this->m_currentOp._vptr_CNetworkedSequenceOperation + 3))(p_m_currentOp, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_currentOp.m_flPrevCycle.m_Value = 0.0;
    m_Value = v11;
  }
  if ( this->m_currentOp.m_flCycle.m_Value != 0.0 )
  {
    v10 = m_Value;
    (*(this->m_currentOp._vptr_CNetworkedSequenceOperation + 3))(p_m_currentOp, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_currentOp.m_flCycle.m_Value = 0.0;
    m_Value = v10;
  }
  if ( this->m_currentOp.m_hSequence.m_Value.m_Data != -1 )
  {
    v9 = m_Value;
    (*(this->m_currentOp._vptr_CNetworkedSequenceOperation + 3))(p_m_currentOp, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_currentOp.m_hSequence.m_Value.m_Data = -1;
    m_Value = v9;
  }
  if ( m_Value != this->m_currentOp.m_flWeight.m_Value.m_Value )
  {
    v8 = m_Value;
    (*(this->m_currentOp._vptr_CNetworkedSequenceOperation + 3))(p_m_currentOp, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v6 = g_pQuantizedFloatEncoders + 32LL * this->m_currentOp.m_flWeight.m_Value.m_nEncoder;
    v7 = *(v6 + 12);
    if ( v8 <= v7 )
      v7 = fmaxf(*(v6 + 8), v8);
    this->m_currentOp.m_flWeight.m_Value.m_Value = v7;
  }
  (*(this->m_pOwner->m_pSkeletonInstance->_vptr_CGameSceneNode + 11))(this->m_pOwner->m_pSkeletonInstance, 16);
}


// CSequenceTransitioner2::AnimationFrameAdvance  (line 388, @0x000000000238edc0, libserver.so)  // inlines: CAnimationOperationWriter, FinishTransitioningLayer, GetEncoder, GetModelData, GetModelPtr, GetPlaybackRate, GetQuantizedFloatEncoderByIndex, GetSequence, GetSequenceCycleRate, GetWeight, HSequence, Init, IsSequenceLooping, NetworkStateChanged, Set, SetCycle, SetPrevCycle, SetWeight, operator const RuntimeClass_t*, operator=, ~CAnimationOperationWriter
// calls: CBaseAnimatingController::IsSequenceDebugging, CSequenceTransitioner2::AddCurrentSequenceToTransition, CBaseAnimatingController::GetSequenceCycleRate, CBaseAnimatingController::IsSequenceLooping, ClampCycle, LoggingSystem_IsChannelEnabled, CAnimationOperationWriter::LatchAnimationOperation, CBaseAnimatingController::GetSequenceName, CGlobalVarsBase::curtime, Plat_FloatTime, LoggingSystem_Log, _Unwind_Resume
// callers: CBaseAnimatingController::AdvanceSequenceTransitioner, CBaseAnimatingController::AnimationFrameAdvanceInternal
// strings: "AnimationFrameAdvance", "SV", "%s:  %f tick(%d) curtime(%f) %24.24s %d: %s %6.4f -> %6.4f rate %6.3f fade %6.3f weight %
__int64 __fastcall CSequenceTransitioner2::AnimationFrameAdvance(
        CSequenceTransitioner2 *const this,
        float a2,
        float flNextAnimTime)
{
  unsigned int v3; // r15d
  bool IsSequenceDebugging; // al
  float v6; // xmm1_4
  CBaseAnimatingController *m_pOwner; // rbx
  bool v8; // r14
  int32 m_Data; // eax
  char v10; // cl
  float32 m_flPrevCycleForAnimEventDetection; // xmm0_4
  CNetworkedSequenceOperation *p_m_op; // rbx
  float v13; // xmm0_4
  __int64 i; // rax
  int m_nOrder; // edx
  float v17; // xmm1_4
  CBaseAnimatingController *v18; // rax
  CEntityInstance *v19; // rax
  int32 v20; // edx
  float v21; // xmm4_4
  CBaseAnimatingController *v22; // rdi
  float v23; // xmm0_4
  float v24; // xmm2_4
  const CModel **m_pBinding; // rax
  const CModel *v26; // rsi
  float SequenceCycleRate; // xmm0_4
  CBaseAnimatingController *v28; // rdi
  const CModel **v29; // rax
  const CModel *v30; // rsi
  bool IsSequenceLooping; // al
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm6_4
  float m_Value; // xmm1_4
  __int64 v36; // rax
  float v37; // xmm0_4
  unsigned int tickcount; // r15d
  double v39; // xmm0_8
  __int64 v40; // [rsp+0h] [rbp-B0h]
  double v41; // [rsp+18h] [rbp-98h]
  const char *SequenceName; // [rsp+20h] [rbp-90h]
  double v43; // [rsp+28h] [rbp-88h]
  double v44; // [rsp+30h] [rbp-80h]
  double v45; // [rsp+38h] [rbp-78h]
  double v46; // [rsp+40h] [rbp-70h]
  float v47; // [rsp+48h] [rbp-68h]
  double v48; // [rsp+48h] [rbp-68h]
  float flCycle; // [rsp+58h] [rbp-58h]
  float flCyclea; // [rsp+58h] [rbp-58h]
  int32 flCycleb; // [rsp+58h] [rbp-58h]
  CAnimationOperationWriter writer; // [rsp+60h] [rbp-50h] BYREF

  v3 = 0;
  IsSequenceDebugging = CBaseAnimatingController::IsSequenceDebugging(this->m_pOwner);
  m_pOwner = this->m_pOwner;
  v8 = IsSequenceDebugging;
  m_Data = this->m_currentOp.m_hSequence.m_Value.m_Data;
  if ( m_pOwner->m_baseLayer.m_hSequence.m_Value.m_Data != m_Data )
  {
    v3 = 1;
    CSequenceTransitioner2::AddCurrentSequenceToTransition(this, LODWORD(a2), v6);
    m_pOwner = this->m_pOwner;
    m_Data = this->m_currentOp.m_hSequence.m_Value.m_Data;
  }
  this->m_flCurrentAnimTime = a2;
  this->m_flCurrentPlaybackRate = m_pOwner->m_flPlaybackRate.m_Value.m_Value;
  if ( m_pOwner->m_baseLayer.m_hSequence.m_Value.m_Data != m_Data )
  {
    (*(this->m_currentOp._vptr_CNetworkedSequenceOperation + 3))(&this->m_currentOp, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_currentOp.m_hSequence.m_Value.m_Data = m_pOwner->m_baseLayer.m_hSequence.m_Value.m_Data;
  }
  if ( this->m_currentOp.m_flPrevCycle.m_Value != m_pOwner->m_baseLayer.m_flPrevCycle.m_Value )
  {
    (*(this->m_currentOp._vptr_CNetworkedSequenceOperation + 3))(&this->m_currentOp, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_currentOp.m_flPrevCycle.m_Value = m_pOwner->m_baseLayer.m_flPrevCycle.m_Value;
  }
  if ( this->m_currentOp.m_flCycle.m_Value != m_pOwner->m_baseLayer.m_flCycle.m_Value )
  {
    (*(this->m_currentOp._vptr_CNetworkedSequenceOperation + 3))(&this->m_currentOp, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_currentOp.m_flCycle.m_Value = m_pOwner->m_baseLayer.m_flCycle.m_Value;
  }
  if ( this->m_currentOp.m_flWeight.m_Value.m_Value != m_pOwner->m_baseLayer.m_flWeight.m_Value.m_Value )
  {
    (*(this->m_currentOp._vptr_CNetworkedSequenceOperation + 3))(&this->m_currentOp, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_Value = m_pOwner->m_baseLayer.m_flWeight.m_Value.m_Value;
    v36 = g_pQuantizedFloatEncoders + 32LL * this->m_currentOp.m_flWeight.m_Value.m_nEncoder;
    v37 = *(v36 + 12);
    if ( m_Value <= v37 )
      v37 = fmaxf(*(v36 + 8), m_Value);
    this->m_currentOp.m_flWeight.m_Value.m_Value = v37;
  }
  v10 = 0;
  this->m_currentOp.m_bSequenceChangeNetworked = m_pOwner->m_baseLayer.m_bSequenceChangeNetworked;
  this->m_currentOp.m_bDiscontinuity = m_pOwner->m_baseLayer.m_bDiscontinuity;
  this->m_currentOp.m_flPrevCycleFromDiscontinuity = m_pOwner->m_baseLayer.m_flPrevCycleFromDiscontinuity;
  m_flPrevCycleForAnimEventDetection = m_pOwner->m_baseLayer.m_flPrevCycleForAnimEventDetection;
  p_m_op = &this->m_transitioningLayers[0].m_op;
  this->m_currentOp.m_flPrevCycleForAnimEventDetection = m_flPrevCycleForAnimEventDetection;
  do
  {
    if ( LODWORD(p_m_op[1].m_flPrevCycle.m_Value) != 15 )
    {
      v13 = p_m_op->m_flWeight.m_Value.m_Value;
      if ( v13 == 0.0 )
      {
        for ( i = 0; i != 4; ++i )
        {
          m_nOrder = this->m_transitioningLayers[i].m_nOrder;
          if ( m_nOrder != 15 && m_nOrder > SLODWORD(p_m_op[1].m_flPrevCycle.m_Value) )
            this->m_transitioningLayers[i].m_nOrder = m_nOrder - 1;
        }
        LODWORD(p_m_op[1].m_flPrevCycle.m_Value) = 15;
        v3 = 1;
      }
      else
      {
        v17 = *&p_m_op[1].m_hSequence.m_Value.m_Data;
        if ( v17 >= a2 )
        {
          v3 = 1;
        }
        else
        {
          v18 = this->m_pOwner;
          writer.m_hSequence.m_Data = -1;
          if ( v18 != 0 )
            v19 = v18->m_pSkeletonInstance->m_pOwner;
          else
            v19 = 0;
          writer.m_flWeight = v13;
          v20 = p_m_op->m_hSequence.m_Value.m_Data;
          writer.m_pOp = p_m_op;
          *&p_m_op[1].m_hSequence.m_Value.m_Data = a2;
          v21 = p_m_op->m_flCycle.m_Value;
          v22 = this->m_pOwner;
          writer.m_pEntity = v19;
          v23 = p_m_op->m_flPrevCycle.m_Value;
          writer.m_flCycle = v21;
          writer.m_hSequence.m_Data = v20;
          v24 = (a2 - v17) * p_m_op[1].m_flCycle.m_Value;
          writer.m_flPrevCycle = v23;
          v47 = v21;
          flCycle = v24;
          m_pBinding = v22->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
          if ( m_pBinding != 0 )
            v26 = *m_pBinding;
          else
            v26 = 0;
          SequenceCycleRate = CBaseAnimatingController::GetSequenceCycleRate(v22, v26, v20);
          v28 = this->m_pOwner;
          v29 = v28->m_pSkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
          flCyclea = (flCycle * SequenceCycleRate) + v47;
          if ( v29 != 0 )
            v30 = *v29;
          else
            v30 = 0;
          IsSequenceLooping = CBaseAnimatingController::IsSequenceLooping(v28, v30, p_m_op->m_hSequence.m_Value);
          v33 = ClampCycle(flCyclea, v32, IsSequenceLooping);
          if ( writer.m_flCycle != writer.m_flPrevCycle )
            writer.m_flPrevCycle = writer.m_flCycle;
          if ( v33 != writer.m_flCycle )
            writer.m_flCycle = v33;
          v34 = fmaxf(
                  0.0,
                  ((p_m_op[1].m_flWeight.m_Value.m_Value - (a2 - *&p_m_op[1]._vptr_CNetworkedSequenceOperation))
                 / p_m_op[1].m_flWeight.m_Value.m_Value)
                * *(&p_m_op[1]._vptr_CNetworkedSequenceOperation + 1));
          if ( v34 != writer.m_flWeight )
            writer.m_flWeight = v34;
          if ( v8 && LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
          {
            v48 = p_m_op->m_flWeight.m_Value.m_Value;
            v46 = p_m_op[1].m_flWeight.m_Value.m_Value;
            v45 = p_m_op[1].m_flCycle.m_Value;
            v44 = p_m_op->m_flCycle.m_Value;
            v43 = p_m_op->m_flPrevCycle.m_Value;
            SequenceName = CBaseAnimatingController::GetSequenceName(this->m_pOwner, p_m_op->m_hSequence.m_Value);
            flCycleb = p_m_op->m_hSequence.m_Value.m_Data;
            v41 = CGlobalVarsBase::curtime(gpGlobals, 0);
            tickcount = gpGlobals->tickcount;
            v39 = Plat_FloatTime();
            LODWORD(v40) = flCycleb;
            LoggingSystem_Log(
              LOG_SERVER,
              1,
              "%s:  %f tick(%d) curtime(%f) %24.24s %d: %s %6.4f -> %6.4f rate %6.3f fade %6.3f weight %5.3f\n",
              "SV",
              tickcount,
              "AnimationFrameAdvance",
              v39,
              v41,
              v43,
              v44,
              v45,
              v46,
              v48,
              v40,
              SequenceName);
          }
          v3 = 1;
          CAnimationOperationWriter::LatchAnimationOperation(&writer);
          v10 = 1;
        }
      }
    }
    p_m_op = (p_m_op + 72);
  }
  while ( p_m_op != (this + 1) );
  if ( v10 != 0 )
    (*(this->m_pOwner->m_pSkeletonInstance->_vptr_CGameSceneNode + 11))(this->m_pOwner->m_pSkeletonInstance, 16);
  return v3;
}


// CSequenceTransitioner2::GetDecodeOperationsCount  (line 470, @0x000000000238e480, libserver.so)
// callers: CBaseAnimatingController::GatherSequences
int __fastcall CSequenceTransitioner2::GetDecodeOperationsCount(const CSequenceTransitioner2 *const this)
{
  __int64 v1; // rdx
  int result; // eax
  __int64 v3; // rcx

  v1 = 0;
  result = 0;
  do
  {
    v3 = this->m_transitioningLayers[v1++].m_nOrder != 15;
    result += v3;
  }
  while ( v1 != 4 );
  return result;
}


// CSequenceTransitioner2::GetDecodeOperations  (line 483, @0x00000000023a4cd0, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, Element, GetCycle, GetPrevCycle, GetSequence, GetWeight, GrowMemory, operator[]
// calls: CUtlMemory<TransitioningLaterMetaInfo_t, int>::Grow
// callers: CBaseAnimatingController::SetupSequences, CBaseAnimatingOverlayController::SetupSequences, CBaseAnimatingController::GatherSequences
int __fastcall CSequenceTransitioner2::GetDecodeOperations(
        const CSequenceTransitioner2 *const this,
        int nMaxOps,
        CAnimationDecodeOp *pOps,
        CUtlVector<TransitioningLaterMetaInfo_t,CUtlMemory<TransitioningLaterMetaInfo_t,int> > *pOptionalMetaInfo)
{
  const CSequenceTransitioner2 *v4; // r8
  int v5; // eax
  __int64 m_nOrder; // r9
  int *v9; // r12
  __int64 v10; // rax
  __int64 v11; // r8
  CUtlVectorBase<TransitioningLaterMetaInfo_t,CUtlMemory<TransitioningLaterMetaInfo_t,int> >::CAllocator *p_m_Memory; // r9
  TransitioningLayer_t *v13; // rbx
  int32 m_Data; // esi
  int result; // eax
  CAnimationDecodeOp *v16; // r8
  float m_Value; // xmm0_4
  __int64 m_Size; // r8
  int v19; // esi
  TransitioningLaterMetaInfo_t *v20; // rsi
  CUtlVector<TransitioningLaterMetaInfo_t,CUtlMemory<TransitioningLaterMetaInfo_t,int> > *v21; // [rsp+0h] [rbp-60h]
  CAnimationDecodeOp *v22; // [rsp+8h] [rbp-58h]
  int v23; // [rsp+10h] [rbp-50h]
  int nOpCount; // [rsp+14h] [rbp-4Ch]
  CUtlVectorBase<TransitioningLaterMetaInfo_t,CUtlMemory<TransitioningLaterMetaInfo_t,int> >::CAllocator *v25; // [rsp+18h] [rbp-48h]
  int pLayerIndices[4]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v27[48]; // [rsp+30h] [rbp-30h] BYREF

  v4 = this;
  v5 = 0;
  pLayerIndices[0] = 15;
  pLayerIndices[1] = 15;
  pLayerIndices[2] = 15;
  pLayerIndices[3] = 15;
  do
  {
    m_nOrder = v4->m_transitioningLayers[0].m_nOrder;
    if ( m_nOrder != 15 )
      pLayerIndices[m_nOrder] = v5;
    ++v5;
    v4 = (v4 + 72);
  }
  while ( v5 != 4 );
  v9 = pLayerIndices;
  v10 = pLayerIndices[0];
  v11 = 0;
  p_m_Memory = &pOptionalMetaInfo->m_Memory;
  if ( pLayerIndices[0] == 15 )
    goto LABEL_13;
  while ( 1 )
  {
    v13 = &this->m_transitioningLayers[v10];
    m_Data = this->m_transitioningLayers[v10].m_op.m_hSequence.m_Value.m_Data;
    result = v11 + 1;
    v16 = &pOps[v11];
    v16->m_hSequence.m_Data = m_Data;
    v16->m_flCycle = v13->m_op.m_flCycle.m_Value;
    m_Value = v13->m_op.m_flWeight.m_Value.m_Value;
    v16->m_source = animopsource_t::ANIM_OP_SEQUENCE_TRANSITIONER;
    v16->m_flWeight = m_Value;
    if ( pOptionalMetaInfo != 0 )
    {
      m_Size = pOptionalMetaInfo->m_Size;
      v19 = pOptionalMetaInfo->m_Size;
      if ( m_Size == pOptionalMetaInfo->m_Memory.m_nAllocationCount )
      {
        v21 = pOptionalMetaInfo;
        v22 = pOps;
        v23 = pOptionalMetaInfo->m_Size;
        nOpCount = result;
        v25 = p_m_Memory;
        CUtlMemory<TransitioningLaterMetaInfo_t,int>::Grow(p_m_Memory, 1);
        pOptionalMetaInfo = v21;
        pOps = v22;
        m_Size = v23;
        result = nOpCount;
        v19 = v21->m_Size;
        p_m_Memory = v25;
      }
      pOptionalMetaInfo->m_Size = v19 + 1;
      v20 = &pOptionalMetaInfo->m_Memory.m_pMemory[m_Size];
      v20->m_flPlaybackRate = v13->m_flPlaybackRate;
      v20->m_flPrevCycle = v13->m_op.m_flPrevCycle.m_Value;
      v20->m_flStartTime = v13->m_flStartAnimTime;
    }
    if ( result >= nMaxOps )
      break;
    if ( ++v9 == v27 )
      break;
    while ( 1 )
    {
      v11 = result;
      v10 = *v9;
      if ( v10 != 15 )
        break;
LABEL_13:
      ++v9;
      result = v11;
      if ( v9 == v27 )
        return result;
    }
  }
  return result;
}


// CSequenceTransitioner2::Reset  (line 531, @0x000000000238e4b0, libserver.so)  // inlines: CAnimationOperationWriter, GetEncoder, GetQuantizedFloatEncoderByIndex, Init, LatchAnimationOperation, NetworkStateChanged, Set, operator=, operator=<HSequence>, operator=<float>, ~CAnimationOperationWriter
// callers: CBaseAnimatingController::OnNewModel, CSequenceTransitioner2::AddCurrentSequenceToTransition
void __fastcall CSequenceTransitioner2::Reset(CSequenceTransitioner2 *const this)
{
  CNetworkedSequenceOperation *p_m_currentOp; // r12
  float m_Value; // xmm1_4
  CBaseAnimatingController *m_pOwner; // rax
  __int64 v5; // rax
  float v6; // xmm0_4
  float v7; // [rsp-14h] [rbp-1Ch]
  float v8; // [rsp-14h] [rbp-1Ch]
  float v9; // [rsp-14h] [rbp-1Ch]
  float32 v10; // [rsp-14h] [rbp-1Ch]

  p_m_currentOp = &this->m_currentOp;
  m_Value = this->m_currentOp.m_flWeight.m_Value.m_Value;
  if ( this->m_currentOp.m_flPrevCycle.m_Value != 0.0 )
  {
    v10 = this->m_currentOp.m_flWeight.m_Value.m_Value;
    (*(this->m_currentOp._vptr_CNetworkedSequenceOperation + 3))(&this->m_currentOp, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_currentOp.m_flPrevCycle.m_Value = 0.0;
    m_Value = v10;
  }
  if ( this->m_currentOp.m_flCycle.m_Value != 0.0 )
  {
    v9 = m_Value;
    (*(this->m_currentOp._vptr_CNetworkedSequenceOperation + 3))(p_m_currentOp, 16, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_currentOp.m_flCycle.m_Value = 0.0;
    m_Value = v9;
  }
  if ( this->m_currentOp.m_hSequence.m_Value.m_Data != -1 )
  {
    v8 = m_Value;
    (*(this->m_currentOp._vptr_CNetworkedSequenceOperation + 3))(p_m_currentOp, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_currentOp.m_hSequence.m_Value.m_Data = -1;
    m_Value = v8;
  }
  if ( m_Value != this->m_currentOp.m_flWeight.m_Value.m_Value )
  {
    v7 = m_Value;
    (*(this->m_currentOp._vptr_CNetworkedSequenceOperation + 3))(p_m_currentOp, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v5 = g_pQuantizedFloatEncoders + 32LL * this->m_currentOp.m_flWeight.m_Value.m_nEncoder;
    v6 = *(v5 + 12);
    if ( v7 <= v6 )
      v6 = fmaxf(*(v5 + 8), v7);
    this->m_currentOp.m_flWeight.m_Value.m_Value = v6;
  }
  m_pOwner = this->m_pOwner;
  this->m_transitioningLayers[0].m_nOrder = 15;
  this->m_transitioningLayers[1].m_nOrder = 15;
  this->m_transitioningLayers[2].m_nOrder = 15;
  this->m_transitioningLayers[3].m_nOrder = 15;
  (*(m_pOwner->m_pSkeletonInstance->_vptr_CGameSceneNode + 11))(m_pOwner->m_pSkeletonInstance, 16);
}


// CSequenceTransitioner2::CopyFrom  (line 545, @0x000000000238f330, libserver.so)  // inlines: V_memcpy, memcpy
// calls: memcpy
// callers: CBaseAnimatingController::CopySequenceTransitions
void __fastcall CSequenceTransitioner2::CopyFrom(CSequenceTransitioner2 *const this, CSequenceTransitioner2 *pCopyFrom)
{
  memcpy(this->m_transitioningLayers, pCopyFrom->m_transitioningLayers, sizeof(this->m_transitioningLayers));
}


// CSequenceTransitioner2::BlendInLinearVelocity  (line 550, @0x000000000238f350, libserver.so)
void __fastcall CSequenceTransitioner2::BlendInLinearVelocity(
        CSequenceTransitioner2 *const this,
        const CModel *pModel,
        const float *pPoseParameters,
        Vector *pVec)
{
  ;
}


