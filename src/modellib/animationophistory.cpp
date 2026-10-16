
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_animationophistory.cpp  (line 0, @0x0000000001a6ae20, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: `guard variable for'g_AnimOpSourceColors, UNSPECIFIED_LOGGING_COLOR, g_AnimOpSourceColors
void __cdecl GLOBAL__sub_I_animationophistory_cpp()
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
}


// CAnimationOpHistory::AddAnimationOp  (line 24, @0x000000000313c500, libserver.so)  // inlines: AllocateNewState, ApplyNewState, NextState, PrevState, V_memcpy, memcpy, operator[]
// calls: Msg
// callers: CAnimationOpHistory::AddAnimationOp
// strings: "setting m_SimulationState[%d].m_flSimulationTime=%f\n", "ApplyNewState %d at %f\n", "advanced to state %d at %f\n", "%f is before m_SimulationState[%d].m_flSimulationTime %f\n"
void __fastcall CAnimationOpHistory::AddAnimationOp(
        CAnimationOpHistory *const this,
        float a2,
        float flTimeStamp,
        const AnimationOperationHistory_t *const op)
{
  float v4; // xmm2_4
  unsigned int m_nCurrentSimState; // r13d
  CTimestampedDataContainer<AnimationOperationHistory_t,3>::InternalData_t *m_pMemory; // rcx
  __int64 v9; // rbx
  float m_flSimulationTime; // xmm1_4
  int v11; // edx
  float v12; // xmm0_4
  CTimestampedDataContainer<AnimationOperationHistory_t,3>::InternalData_t *v13; // rax
  int v14; // edx
  __int64 m_nNextSimState; // rax
  float v16; // [rsp+Ch] [rbp-24h]
  float v17; // [rsp+Ch] [rbp-24h]

  v4 = a2;
  m_nCurrentSimState = this->m_nCurrentSimState;
  m_pMemory = this->m_SimulationState.m_Memory.m_pMemory;
  v9 = m_nCurrentSimState;
  m_flSimulationTime = m_pMemory[v9].m_flSimulationTime;
  if ( m_flSimulationTime > a2 )
  {
    if ( !this->m_bDebug
      || (Msg("%f is before m_SimulationState[%d].m_flSimulationTime %f\n", m_nCurrentSimState, a2, m_flSimulationTime),
          m_nCurrentSimState = this->m_nCurrentSimState,
          m_pMemory = this->m_SimulationState.m_Memory.m_pMemory,
          v4 = a2,
          v9 = m_nCurrentSimState,
          (m_flSimulationTime = m_pMemory[v9].m_flSimulationTime) > a2) )
    {
      if ( m_flSimulationTime != -1.0 )
      {
        do
        {
          if ( this->m_bDebug )
          {
            v16 = v4;
            Msg("setting m_SimulationState[%d].m_flSimulationTime=%f\n", m_nCurrentSimState, v4);
            m_pMemory = this->m_SimulationState.m_Memory.m_pMemory;
            v4 = v16;
          }
          m_pMemory[v9].m_flSimulationTime = v4;
          v11 = (this->m_SimulationState.m_Size + m_nCurrentSimState - 1) % this->m_SimulationState.m_Size;
          m_pMemory = this->m_SimulationState.m_Memory.m_pMemory;
          m_nCurrentSimState = v11;
          v9 = v11;
          v12 = m_pMemory[v9].m_flSimulationTime;
        }
        while ( v12 > v4 && v12 != -1.0 );
        m_nCurrentSimState = this->m_nCurrentSimState;
      }
    }
  }
  v13 = 0;
  if ( m_nCurrentSimState == this->m_nNextSimState )
  {
    v14 = (m_nCurrentSimState + 1) % this->m_SimulationState.m_Size;
    this->m_nNextSimState = v14;
    m_pMemory[v14].m_flSimulationTime = -1.0;
    if ( this->m_bDebug )
    {
      v17 = v4;
      Msg("advanced to state %d at %f\n", this->m_nNextSimState, v4);
      v4 = v17;
    }
    v13 = &this->m_SimulationState.m_Memory.m_pMemory[this->m_nNextSimState];
  }
  *&v13->m_data.m_hSequence.m_Data = *&op->m_hSequence.m_Data;
  *&v13->m_data.m_flWeight = *&op->m_flWeight;
  *&v13->m_data.m_flPrevCycle = *&op->m_flPrevCycle;
  *&v13->m_data.m_nOrder = *&op->m_nOrder;
  m_nNextSimState = this->m_nNextSimState;
  this->m_nCurrentSimState = m_nNextSimState;
  this->m_SimulationState.m_Memory.m_pMemory[m_nNextSimState].m_flSimulationTime = v4;
  if ( this->m_bDebug )
    Msg("ApplyNewState %d at %f\n", this->m_nCurrentSimState, v4);
}


// CAnimationOpHistory::AddAnimationOp  (line 31, @0x000000000313c720, libserver.so)  // inlines: AnimationOperationHistory_t
// calls: CAnimationOpHistory::AddAnimationOp
void __fastcall CAnimationOpHistory::AddAnimationOp(
        CAnimationOpHistory *const this,
        float a2,
        float flTimeStamp,
        float flPrevCycle,
        const CAnimationDecodeOp *const op)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  AnimationOperationHistory_t histOp; // [rsp+0h] [rbp-20h] BYREF

  v5 = *&op->m_hSequence.m_Data;
  histOp.m_nOrder = 0;
  v6 = *&op->m_flWeight;
  histOp.m_nSequenceParity = 0;
  histOp.m_bInterpolationHadDiscontinuity = 0;
  histOp.m_flPrevCycle = flTimeStamp;
  *&histOp.m_hSequence.m_Data = v5;
  *&histOp.m_flWeight = v6;
  CAnimationOpHistory::AddAnimationOp(this, a2, flTimeStamp, &histOp);
}


// CAnimationOpHistory::ChangeModel  (line 41, @0x000000000313c760, libserver.so)  // inlines: ClearHistory
// calls: Msg
// strings: "ClearHistory\n"
void __fastcall CAnimationOpHistory::ChangeModel(CAnimationOpHistory *const this, HModel hOldModel, HModel hNewModel)
{
  int m_Size; // edx
  CTimestampedDataContainer<AnimationOperationHistory_t,3>::InternalData_t *m_pMemory; // rax
  __int64 v5; // rdx

  m_Size = this->m_SimulationState.m_Size;
  m_pMemory = this->m_SimulationState.m_Memory.m_pMemory;
  if ( m_Size > 0 )
  {
    v5 = &m_pMemory[(m_Size - 1) + 1];
    do
    {
      m_pMemory->m_flSimulationTime = -1.0;
      ++m_pMemory;
    }
    while ( m_pMemory != v5 );
  }
  if ( this->m_bDebug )
    Msg("ClearHistory\n", hOldModel.m_pBinding);
}


// CAnimationOpHistory::Interpolate  (line 48, @0x000000000313c7b0, libserver.so)  // inlines: Lerp<float>, Lerp_Hermite<float>, LoopingLerp<float>, PrevState, operator==, operator[]
// calls: CModel::IsValidSequence, CModel::IsSequenceLooping, LoopingLerp_Hermite<float>
__int64 __fastcall CAnimationOpHistory::Interpolate(
        const CAnimationOpHistory *const this,
        float flInterpTime,
        const CModel *pModel,
        CAnimationDecodeOp *pOp,
        float *pPrevCycle)
{
  int m_nCurrentSimState; // eax
  CTimestampedDataContainer<AnimationOperationHistory_t,3>::InternalData_t *m_pMemory; // r12
  __int64 v8; // r10
  CTimestampedDataContainer<AnimationOperationHistory_t,3>::InternalData_t *v9; // r14
  __int64 v10; // rax
  unsigned int v11; // edx
  int m_Size; // esi
  int v15; // et2
  int v16; // esi
  CTimestampedDataContainer<AnimationOperationHistory_t,3>::InternalData_t *v17; // rbx
  CTimestampedDataContainer<AnimationOperationHistory_t,3>::InternalData_t *v18; // r15
  int v19; // eax
  float m_flSimulationTime; // xmm1_4
  __int64 v21; // rax
  float v22; // xmm3_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  unsigned int v25; // eax
  float v26; // xmm0_4
  __int64 v27; // rdi
  const CModel *v28; // rdi
  bool IsSequenceLooping; // al
  int32 m_Data; // esi
  float m_flCycle; // xmm1_4
  float m_flPrevCycle; // xmm2_4
  float v33; // xmm1_4
  CTimestampedDataContainer<AnimationOperationHistory_t,3>::InternalData_t *v34; // rdx
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm3_4
  const CTimestampedDataContainer<AnimationOperationHistory_t,3>::InternalData_t *pPrev; // [rsp+8h] [rbp-78h]
  float *pPrevCyclea; // [rsp+18h] [rbp-68h]
  __int64 v41; // [rsp+28h] [rbp-58h]
  float flPercent; // [rsp+34h] [rbp-4Ch]
  unsigned int flPercenta; // [rsp+34h] [rbp-4Ch]
  const CModel *pModela; // [rsp+38h] [rbp-48h]
  float pModelb; // [rsp+38h] [rbp-48h]
  float flTempPrevCycle; // [rsp+4Ch] [rbp-34h] BYREF

  if ( pPrevCycle == 0 )
    pPrevCycle = &flTempPrevCycle;
  *pPrevCycle = 0.0;
  m_nCurrentSimState = this->m_nCurrentSimState;
  m_pMemory = this->m_SimulationState.m_Memory.m_pMemory;
  v8 = m_nCurrentSimState;
  v9 = &m_pMemory[v8];
  if ( flInterpTime < m_pMemory[v8].m_flSimulationTime )
  {
    m_Size = this->m_SimulationState.m_Size;
    v15 = (m_Size + m_nCurrentSimState - 1) % m_Size;
    v16 = m_Size - 1;
    v17 = &m_pMemory[v15];
    if ( v16 <= 0 )
    {
      return 0;
    }
    else
    {
      v18 = &m_pMemory[v8];
      v19 = 0;
      while ( 1 )
      {
        if ( m_pMemory > v17 )
          v17 = &m_pMemory[v16];
        m_flSimulationTime = v17->m_flSimulationTime;
        if ( m_flSimulationTime == -1.0 )
        {
          v21 = *&v18->m_data.m_hSequence.m_Data;
          *&pOp->m_flWeight = *&v18->m_data.m_flWeight;
          v11 = 0;
          *&pOp->m_hSequence.m_Data = v21;
          return v11;
        }
        if ( m_flSimulationTime <= flInterpTime )
          break;
        if ( ++v19 == v16 )
          return 0;
        v18 = v17--;
      }
      pPrev = v17;
      v22 = v18->m_flSimulationTime - m_flSimulationTime;
      if ( v22 < 0.001 )
      {
        v24 = 1.0;
      }
      else
      {
        v23 = (flInterpTime - m_flSimulationTime) / v22;
        if ( v23 <= 1.0 )
          v24 = fmaxf(0.0, v23);
        else
          v24 = 1.0;
      }
      flPercent = v24;
      pModela = pModel;
      pPrevCyclea = pPrevCycle;
      v41 = v16;
      LOBYTE(v25) = CModel::IsValidSequence(pModel, v17->m_data.m_hSequence);
      v11 = v25;
      v26 = flPercent;
      if ( v25 != 0 )
      {
        v28 = pModela;
        flPercenta = v25;
        pModelb = v26;
        IsSequenceLooping = CModel::IsSequenceLooping(v28, v18->m_data.m_hSequence);
        m_Data = v18->m_data.m_hSequence.m_Data;
        v11 = flPercenta;
        if ( v18->m_data.m_hSequence.m_Data == v17->m_data.m_hSequence.m_Data )
        {
          v34 = v17 - 1;
          if ( &v17[-1] < m_pMemory )
            v34 = &this->m_SimulationState.m_Memory.m_pMemory[v41];
          if ( v34->m_flSimulationTime != -1.0 && v34 != v9 && m_Data == v34->m_data.m_hSequence.m_Data )
            v17 = v34;
          pOp->m_hSequence.m_Data = v18->m_data.m_hSequence.m_Data;
          pOp->m_flWeight = ((v18->m_data.m_flWeight - pPrev->m_data.m_flWeight) * pModelb) + pPrev->m_data.m_flWeight;
          if ( IsSequenceLooping )
          {
            v35 = LoopingLerp_Hermite<float>(
                    &v17->m_data.m_flCycle,
                    pModelb,
                    &v17->m_data.m_flCycle,
                    &pPrev->m_data.m_flCycle,
                    &v18->m_data.m_flCycle);
          }
          else
          {
            v37 = pModelb * (pModelb * pModelb);
            v35 = ((((((v37 + v37) - (3.0 * (pModelb * pModelb))) + 1.0) * pPrev->m_data.m_flCycle)
                  + (((-2.0 * v37) + (3.0 * (pModelb * pModelb))) * v18->m_data.m_flCycle))
                 + ((pPrev->m_data.m_flCycle - v17->m_data.m_flCycle)
                  * ((v37 - ((pModelb * pModelb) + (pModelb * pModelb))) + pModelb)))
                + ((v18->m_data.m_flCycle - pPrev->m_data.m_flCycle) * (v37 - (pModelb * pModelb)));
          }
          v36 = 2.0;
          if ( v35 <= 2.0 )
            v36 = fmaxf(-2.0, v35);
          pOp->m_flCycle = v36;
          return 0;
        }
        else
        {
          pOp->m_hSequence.m_Data = m_Data;
          pOp->m_flWeight = v18->m_data.m_flWeight;
          if ( IsSequenceLooping )
          {
            m_flCycle = v18->m_data.m_flCycle;
            m_flPrevCycle = v18->m_data.m_flPrevCycle;
            if ( fabs(m_flCycle - m_flPrevCycle) >= 0.5 )
            {
              if ( m_flCycle <= m_flPrevCycle )
                m_flCycle = m_flCycle + 1.0;
              else
                m_flPrevCycle = m_flPrevCycle + 1.0;
            }
            v33 = ((m_flCycle * pModelb) + ((1.0 - pModelb) * m_flPrevCycle))
                - ((m_flCycle * pModelb) + ((1.0 - pModelb) * m_flPrevCycle));
            if ( v33 < 0.0 )
              v33 = v33 + 1.0;
          }
          else
          {
            v33 = ((v18->m_data.m_flCycle - v18->m_data.m_flPrevCycle) * pModelb) + v18->m_data.m_flPrevCycle;
          }
          pOp->m_flCycle = v33;
          *pPrevCyclea = v18->m_data.m_flPrevCycle;
        }
      }
      else
      {
        v27 = *&v18->m_data.m_flWeight;
        *&pOp->m_hSequence.m_Data = *&v18->m_data.m_hSequence.m_Data;
        *&pOp->m_flWeight = v27;
      }
    }
  }
  else
  {
    v10 = *&v9->m_data.m_hSequence.m_Data;
    *&pOp->m_flWeight = *&v9->m_data.m_flWeight;
    v11 = 0;
    *&pOp->m_hSequence.m_Data = v10;
  }
  return v11;
}


// CAnimationDecodeContext::CAnimationDecodeContext  (line 174, @0x000000000313cb60, libserver.so)
// callers: CSkeletonInstance::CalcAnimationState
void __fastcall CAnimationDecodeContext::CAnimationDecodeContext(CAnimationDecodeContext *const this)
{
  this->m_flRealTimeBase = 0.0;
  this->m_pAllocator = 0;
  this->m_bOwnsAllocator = 0;
}


// CAnimationDecodeContext::~CAnimationDecodeContext  (line 178, @0x000000000313cc60, libserver.so)
// calls: CAnimationDecodeContext::Shutdown
// callers: CSkeletonInstance::CalcAnimationState
void __fastcall CAnimationDecodeContext::~CAnimationDecodeContext(CAnimationDecodeContext *const this)
{
  CAnimationDecodeContext::Shutdown(this);
}


// CAnimationDecodeContext::Init  (line 183, @0x000000000313cb80, libserver.so)
// calls: operator new, CUtlScratchMemoryPool::CUtlScratchMemoryPool, operator delete, _Unwind_Resume
// callers: CSkeletonInstance::CalcAnimationState, DecodeAnimation
void __fastcall CAnimationDecodeContext::Init(
        CAnimationDecodeContext *const this,
        AnimationProcessingType_t processingType,
        CUtlScratchMemoryPool *pMemStack)
{
  CUtlScratchMemoryPool *v3; // r12

  v3 = pMemStack;
  this->m_processingType = processingType;
  this->m_flRealTimeBase = 0.0;
  this->m_bOwnsAllocator = pMemStack == 0;
  if ( pMemStack == 0 )
  {
    v3 = operator new(0x10u);
    CUtlScratchMemoryPool::CUtlScratchMemoryPool(v3, 0x2000, 0, 0);
  }
  this->m_pAllocator = v3;
  this->m_nAnimationDecodes = 0;
  this->m_pFirstActiveAnimationDecode = 0;
  this->m_pLastActiveAnimationDecode = 0;
}


// CAnimationDecodeContext::Shutdown  (line 199, @0x000000000313cc00, libserver.so)
// calls: CUtlScratchMemoryPool::~CUtlScratchMemoryPool, operator delete
// callers: CAnimationDecodeContext::~CAnimationDecodeContext, DecodeAnimation
void __fastcall CAnimationDecodeContext::Shutdown(CAnimationDecodeContext *const this)
{
  CUtlScratchMemoryPool *m_pAllocator; // r12

  if ( this->m_bOwnsAllocator )
  {
    m_pAllocator = this->m_pAllocator;
    if ( m_pAllocator != 0 )
    {
      CUtlScratchMemoryPool::~CUtlScratchMemoryPool(this->m_pAllocator);
      operator delete(m_pAllocator);
    }
    this->m_bOwnsAllocator = 0;
  }
  this->m_pAllocator = 0;
  this->m_pFirstActiveAnimationDecode = 0;
  this->m_pLastActiveAnimationDecode = 0;
  this->m_nAnimationDecodes = 0;
}


// CAnimationDecodeContext::SetAnimationDecodeRealTimeBase  (line 212, @0x000000000313cc70, libserver.so)
void __fastcall CAnimationDecodeContext::SetAnimationDecodeRealTimeBase(
        CAnimationDecodeContext *const this,
        float a2,
        float flRealTimeBase)
{
  this->m_flRealTimeBase = a2;
}


// CAnimationDecodeContext::GetAnimationDecodeCount  (line 217, @0x000000000313cc80, libserver.so)
int __fastcall CAnimationDecodeContext::GetAnimationDecodeCount(const CAnimationDecodeContext *const this)
{
  return this->m_nAnimationDecodes;
}


// CAnimationDecodeContext::GetFirstActiveAnimationDecode  (line 222, @0x000000000313cc90, libserver.so)
AnimationDecodeDesc_t *__fastcall CAnimationDecodeContext::GetFirstActiveAnimationDecode(
        const CAnimationDecodeContext *const this)
{
  return this->m_pFirstActiveAnimationDecode;
}


// CAnimationDecodeContext::GetNextActiveAnimationDecode  (line 227, @0x000000000313cca0, libserver.so)
AnimationDecodeDesc_t *__fastcall CAnimationDecodeContext::GetNextActiveAnimationDecode(
        const CAnimationDecodeContext *const this,
        AnimationDecodeDesc_t *pDesc)
{
  return pDesc->m_pNextActive;
}


// CAnimationDecodeContext::GetAnimationDecode  (line 232, @0x000000000313ccb0, libserver.so)
AnimationDecodeDesc_t *__fastcall CAnimationDecodeContext::GetAnimationDecode(
        CAnimationDecodeContext *const this,
        HAnimationDecodeDesc hDesc)
{
  return hDesc;
}


// CAnimationDecodeContext::AddAnimationDecodeDesc  (line 237, @0x000000000313ccc0, libserver.so)  // inlines: Alloc, Init, ResourceHandleToData<InfoForResourceTypeCModel>, memcpy, memset, operator int, operator=
// calls: CUtlScratchMemoryPool::AllocAligned, CModel::GetNumPoseParameters, memcpy, memset, Warning
// callers: CSimSequenceSetup::AddAnimationDecode, DecodeAnimation
// strings: "CAnimationDecodeContext::AddAnimationDecodeDesc ran out of allocator memory (1)\n", "CAnimationDecodeContext::AddAnimationDecodeDesc ran out of allocator memory (2)\n", "CAnimationDecodeContext::AddAnimationDecodeDesc ran out of allocator memory (3)\n"
// globals: CAnimationDecodeContext::AddAnimationDecodeDesc(CWeakHandle<InfoForResourceTypeCModel>,float,uint const*,int,CAnimationDecodeOp const*,int,float const*,int,ucha
_DWORD *__fastcall CAnimationDecodeContext::AddAnimationDecodeDesc(
        CAnimationDecodeContext *const this,
        HModel hModel,
        float flRealTimeOffset,
        const uint32 *pBonesToSetUp,
        int nOpCount,
        const CAnimationDecodeOp *pOperations,
        int nPoseParamCount,
        const float *pPoseParameters,
        int nOwningEntityIndex,
        LODGroupMask_t nLodsToSkipMask,
        uint32 nAnimationDecodeDescFlags)
{
  int *m_pData; // rax
  const CModel *v13; // r12
  _DWORD *v16; // r15
  __int64 NumPoseParameters; // r12
  void *v18; // rax
  float v19; // xmm0_4
  void *v20; // rax
  _DWORD *v21; // r13
  __int64 v22; // rdx
  void *v24; // rax

  m_pData = hModel.m_pBinding->m_pData;
  if ( hModel.m_pBinding->m_pData == 0 )
    return 0;
  if ( m_pData[6] <= 0 )
    return 0;
  v13 = *m_pData;
  if ( *m_pData == 0 )
    return 0;
  v16 = CUtlScratchMemoryPool::AllocAligned(this->m_pAllocator, 64, 16);
  if ( v16 == 0 )
  {
    if ( CAnimationDecodeContext::AddAnimationDecodeDesc(CWeakHandle<InfoForResourceTypeCModel>,float,unsigned int const*,int,CAnimationDecodeOp const*,int,float const*,int,unsigned char,unsigned int)::__executeCount <= 0 )
    {
      ++CAnimationDecodeContext::AddAnimationDecodeDesc(CWeakHandle<InfoForResourceTypeCModel>,float,unsigned int const*,int,CAnimationDecodeOp const*,int,float const*,int,unsigned char,unsigned int)::__executeCount;
      Warning(
        "CAnimationDecodeContext::AddAnimationDecodeDesc ran out of allocator memory (1)\n",
        COERCE_DOUBLE(LODWORD(flRealTimeOffset)));
    }
    return 0;
  }
  NumPoseParameters = CModel::GetNumPoseParameters(v13);
  v16[12] = nOwningEntityIndex;
  v18 = hModel.m_pBinding->m_pData;
  *(v16 + 14) = nOpCount;
  *(v16 + 12) = 0;
  *(v16 + 4) = 0;
  *v16 = v18;
  *(v16 + 5) = pBonesToSetUp;
  *(v16 + 13) = nLodsToSkipMask;
  v19 = flRealTimeOffset + this->m_flRealTimeBase;
  *(v16 + 7) = 0;
  *(v16 + 2) = v19;
  v16[13] = nAnimationDecodeDescFlags;
  if ( nOpCount == 0 )
  {
    *(v16 + 2) = 0;
    if ( nPoseParamCount != 0 )
      goto LABEL_7;
LABEL_18:
    *(v16 + 3) = 0;
    return v16;
  }
  v24 = CUtlScratchMemoryPool::AllocAligned(this->m_pAllocator, 16 * nOpCount, 8 * (16 * nOpCount >= 16) + 8);
  *(v16 + 2) = v24;
  if ( v24 == 0 )
  {
    if ( CAnimationDecodeContext::AddAnimationDecodeDesc(CWeakHandle<InfoForResourceTypeCModel>,float,unsigned int const*,int,CAnimationDecodeOp const*,int,float const*,int,unsigned char,unsigned int)::__executeCount <= 0 )
    {
      v21 = 0;
      ++CAnimationDecodeContext::AddAnimationDecodeDesc(CWeakHandle<InfoForResourceTypeCModel>,float,unsigned int const*,int,CAnimationDecodeOp const*,int,float const*,int,unsigned char,unsigned int)::__executeCount;
      Warning("CAnimationDecodeContext::AddAnimationDecodeDesc ran out of allocator memory (2)\n");
      return v21;
    }
    return 0;
  }
  memcpy(v24, pOperations, 16LL * nOpCount);
  if ( nPoseParamCount == 0 )
    goto LABEL_18;
LABEL_7:
  v20 = CUtlScratchMemoryPool::AllocAligned(
          this->m_pAllocator,
          4 * NumPoseParameters,
          8 * (4 * NumPoseParameters >= 16) + 8);
  *(v16 + 3) = v20;
  if ( v20 == 0 )
  {
    if ( CAnimationDecodeContext::AddAnimationDecodeDesc(CWeakHandle<InfoForResourceTypeCModel>,float,unsigned int const*,int,CAnimationDecodeOp const*,int,float const*,int,unsigned char,unsigned int)::__executeCount <= 0 )
    {
      v21 = 0;
      ++CAnimationDecodeContext::AddAnimationDecodeDesc(CWeakHandle<InfoForResourceTypeCModel>,float,unsigned int const*,int,CAnimationDecodeOp const*,int,float const*,int,unsigned char,unsigned int)::__executeCount;
      Warning("CAnimationDecodeContext::AddAnimationDecodeDesc ran out of allocator memory (3)\n");
      return v21;
    }
    return 0;
  }
  v21 = v16;
  v22 = nPoseParamCount;
  if ( NumPoseParameters <= nPoseParamCount )
    v22 = NumPoseParameters;
  memcpy(v20, pPoseParameters, 4 * v22);
  if ( NumPoseParameters > nPoseParamCount )
    memset((*(v16 + 3) + 4LL * nPoseParamCount), 0, 4LL * (NumPoseParameters - nPoseParamCount));
  return v21;
}


// CAnimationDecodeContext::AddAnimationDecode  (line 305, @0x000000000313cf20, libserver.so)
// callers: CSimSequenceSetup::AddAnimationDecode, DecodeAnimation
bool __fastcall CAnimationDecodeContext::AddAnimationDecode(
        CAnimationDecodeContext *const this,
        HAnimationDecodeDesc hDesc,
        CAnimationState *pOutputAnimationState,
        int nLod)
{
  int v4; // eax
  char v5; // dl
  int v7; // eax
  AnimationDecodeDesc_t *m_pLastActiveAnimationDecode; // rax
  char v9; // al

  if ( hDesc == 0 )
    return 0;
  if ( *(hDesc + 4) != 0 )
  {
    if ( nLod != -1 )
    {
      LOBYTE(v4) = 0;
      if ( nLod <= 8 )
      {
        v5 = 0;
        if ( nLod >= 0 )
          v5 = nLod;
        v4 = 1 << v5;
      }
      *(hDesc + 12) |= v4;
      return 0;
    }
    return 0;
  }
  ++this->m_nAnimationDecodes;
  *(hDesc + 4) = pOutputAnimationState;
  if ( nLod == -1 )
  {
    *(hDesc + 12) = 0;
  }
  else
  {
    LOBYTE(v7) = 0;
    if ( nLod <= 8 )
    {
      v9 = 0;
      if ( nLod >= 0 )
        v9 = nLod;
      v7 = 1 << v9;
    }
    *(hDesc + 12) = v7;
  }
  m_pLastActiveAnimationDecode = this->m_pLastActiveAnimationDecode;
  if ( m_pLastActiveAnimationDecode != 0 )
    m_pLastActiveAnimationDecode->m_pNextActive = hDesc;
  else
    this->m_pFirstActiveAnimationDecode = hDesc;
  this->m_pLastActiveAnimationDecode = hDesc;
  return 1;
}


// CAnimationState::CAnimationState  (line 347, @0x000000000313cfd0, libserver.so)  // inlines: CStrongHandle, V_memset, memset
// callers: CSkeletonBoneSetupHelper::ComputeWorldSpaceBones, CCompositeParentSpaceState::CCompositeParentSpaceState, CModelState::CModelState
void __fastcall CAnimationState::CAnimationState(CAnimationState *const this)
{
  this->m_hModel.m_pBinding = 0;
  this->m_pData = 0;
  this->m_pReadableBones = 0;
  this->m_bOwnsMemory = 0;
  this->m_bHasNonTransformAnimationData = 0;
  *this->m_pAnimationDataCount = 0;
  this->m_pAnimationDataCount[2] = 0;
}


// CAnimationState::~CAnimationState  (line 353, @0x000000000313dec0, libserver.so)  // inlines: ~CStrongHandle
// calls: CAnimationState::Shutdown, CStrongHandle<InfoForResourceTypeCModel>::Shutdown
// callers: CSkeletonBoneSetupHelper::ComputeWorldSpaceBones, CCompositeParentSpaceState::~CCompositeParentSpaceState, CModelState::CModelState, CModelState::~CModelState
void __fastcall CAnimationState::~CAnimationState(CAnimationState *const this)
{
  CAnimationState::Shutdown(this);
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&this->m_hModel);
}


// CAnimationState::Realloc  (line 359, @0x000000000313e090, libserver.so)  // inlines: CWeakHandle, Init, operator!=
// calls: CAnimationState::Init, CAnimationState::ComputeHasNonTransformAnimationData
// callers: CCompositeParentSpaceState::Realloc, CCompositeParentSpaceState::LerpFrom, CSkeletonInstance::ReadParentSpaceState
void __fastcall CAnimationState::Realloc(CAnimationState *const this, HModel hModel)
{
  HModel hModela; // [rsp+0h] [rbp-20h] BYREF

  if ( this->m_hModel.m_pBinding != hModel.m_pBinding->m_pData
    || !this->m_bOwnsMemory
    || this->m_pData == 0
    || this->m_pReadableBones == 0 )
  {
    hModela.m_pBinding = hModel.m_pBinding->m_pData;
    CAnimationState::Init(this, &hModela);
  }
  CAnimationState::ComputeHasNonTransformAnimationData(this);
}


// CAnimationState::Init  (line 373, @0x000000000313dee0, libserver.so)  // inlines: ResourceHandleToData<InfoForResourceTypeCModel>, V_memset, memset, operator int, operator=
// calls: CAnimationState::Shutdown, CStrongHandle<InfoForResourceTypeCModel>::Init, CAnimationState::ComputeHasNonTransformAnimationData, CAnimationState::InitializeState
void __fastcall CAnimationState::Init(
        CAnimationState *const this,
        HModel hModel,
        int nBufSize,
        void *pDataBuffer,
        uint32 *pReadableBonesBuffer)
{
  int *m_pData; // rax

  CAnimationState::Shutdown(this);
  CStrongHandle<InfoForResourceTypeCModel>::Init(&this->m_hModel, hModel.m_pBinding->m_pData);
  m_pData = hModel.m_pBinding->m_pData;
  if ( hModel.m_pBinding->m_pData != 0 && m_pData[6] > 0 && *m_pData != 0 )
  {
    this->m_pData = pDataBuffer;
    this->m_pReadableBones = pReadableBonesBuffer;
    this->m_bOwnsMemory = 0;
    CAnimationState::ComputeHasNonTransformAnimationData(this);
    CAnimationState::InitializeState(this);
  }
  else
  {
    CStrongHandle<InfoForResourceTypeCModel>::Init(&this->m_hModel, 0);
    *this->m_pAnimationDataCount = 0;
    this->m_pAnimationDataCount[2] = 0;
  }
}


// CAnimationState::Init  (line 396, @0x000000000313df70, libserver.so)  // inlines: AlignValue<int>, BitVec_ClearAll, CalcNumIntsForBits, MemAlloc_AllocAlignedFunc, ResourceHandleToData<InfoForResourceTypeCModel>, V_memset, memset, operator int, operator=
// calls: CAnimationState::Shutdown, CStrongHandle<InfoForResourceTypeCModel>::Init, CModel::GetAnimationStateSize, CModel::NumBones, operator new [], memset, CAnimationState::ComputeHasNonTransformAnimationData, CAnimationState::InitializeState
// callers: CSkeletonBoneSetupHelper::ComputeWorldSpaceBones, CCompositeParentSpaceState::operator=, CModelState::SetupJointState, CAnimationState::Realloc
void __fastcall CAnimationState::Init(CAnimationState *const this, HModel hModel)
{
  const CModel *const *m_pData; // rax
  const CModel *v5; // r12
  uint32 AnimationStateSize; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdx
  int v10; // eax
  int v11; // r12d
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // r12
  uint32 *v15; // rax

  CAnimationState::Shutdown(this);
  CStrongHandle<InfoForResourceTypeCModel>::Init(&this->m_hModel, hModel.m_pBinding->m_pData);
  m_pData = hModel.m_pBinding->m_pData;
  if ( hModel.m_pBinding->m_pData != 0 && *(m_pData + 6) > 0 && (v5 = *m_pData, *m_pData != 0) )
  {
    AnimationStateSize = CModel::GetAnimationStateSize(*m_pData);
    if ( AnimationStateSize != 0 )
    {
      v7 = ((AnimationStateSize + 15) & 0xFFFFFFF0);
      if ( v7 != 0 )
      {
        v8 = (**g_pMemAlloc)(g_pMemAlloc, v7 + 23);
        v9 = ((v8 + 23) & 0xFFFFFFFFFFFFFFF0LL);
        *(v9 - 1) = v8;
      }
      else
      {
        v9 = 0;
      }
      this->m_pData = v9;
      v10 = CModel::NumBones(v5);
      v11 = v10 + 62;
      v12 = v10 + 31;
      if ( v12 >= 0 )
        v11 = v12;
      v13 = (v11 >> 5);
      v14 = v13;
      v15 = operator new[](4 * v13);
      this->m_pReadableBones = v15;
      memset(v15, 0, 4 * v14);
      this->m_bOwnsMemory = 1;
      CAnimationState::ComputeHasNonTransformAnimationData(this);
      CAnimationState::InitializeState(this);
    }
    else
    {
      *this->m_pAnimationDataCount = 0;
      this->m_pAnimationDataCount[2] = 0;
    }
  }
  else
  {
    CStrongHandle<InfoForResourceTypeCModel>::Init(&this->m_hModel, 0);
    *this->m_pAnimationDataCount = 0;
    this->m_pAnimationDataCount[2] = 0;
  }
}


// CAnimationState::ComputeHasNonTransformAnimationData  (line 428, @0x000000000313d010, libserver.so)  // inlines: operator const RuntimeClass_t*
// calls: CModel::GetAnimationStateSize, CModel::GetAnimationStateCount
// callers: CAnimationState::Init, CAnimationState::Realloc
void __fastcall CAnimationState::ComputeHasNonTransformAnimationData(CAnimationState *const this)
{
  const CModel *const *m_pBinding; // rax
  const CModel *v3; // rbx
  uint32 AnimationStateSize; // r13d

  m_pBinding = this->m_hModel.m_pBinding;
  if ( this->m_hModel.m_pBinding != 0 && (v3 = *m_pBinding, *m_pBinding != 0) )
  {
    AnimationStateSize = CModel::GetAnimationStateSize(*m_pBinding);
    this->m_bHasNonTransformAnimationData = (AnimationStateSize
                                           - 32
                                           * CModel::GetAnimationStateCount(
                                               v3,
                                               AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)) > 0;
  }
  else
  {
    this->m_bHasNonTransformAnimationData = 0;
  }
}


// CAnimationState::InitializeState  (line 445, @0x000000000313d080, libserver.so)  // inlines: BitVec_SetAll, CalcNumIntsForBits, GetAnimationData<(AnimationStateType_t)0>, GetAnimationData<(AnimationStateType_t)1>, GetAnimationDataCount<(AnimationStateType_t)2>, GetAnimationStateData<(AnimationStateType_t)0>, GetAnimationStateData<(AnimationStateType_t)1>, GetEndMask, V_memset, memset, operator const RuntimeClass_t*, operator==
// calls: CModel::GetAnimationStateCount, CModel::GetAnimationStateOffset, CModel::MasterSkeleton, CModelSkeleton::GetBindPoseParentTransforms, memset
// callers: CAnimationState::Init
// globals: GetEndMask(int)::bitStringEndMasks
void __fastcall CAnimationState::InitializeState(CAnimationState *const this)
{
  const CModel *m_pData; // r13
  signed int AnimationStateCount; // r12d
  char *v4; // r15
  CTransform *v5; // r14
  const CModelSkeleton *v6; // rax
  int v7; // r14d
  int v8; // r15d
  _DWORD *m_pReadableBones; // rcx
  signed int v10; // r13d
  char *v11; // r14
  char *v12; // rdi
  const CModel *const *m_pBinding; // rax
  uint32 v14; // eax

  if ( this->m_hModel.m_pBinding != 0 )
    m_pData = this->m_hModel.m_pBinding->m_pData;
  else
    m_pData = 0;
  AnimationStateCount = CModel::GetAnimationStateCount(
                          m_pData,
                          AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
  if ( AnimationStateCount > 0 )
  {
    if ( this->m_hModel.m_pBinding != 0 )
    {
      v4 = this->m_pData;
      v5 = &v4[CModel::GetAnimationStateOffset(
                 this->m_hModel.m_pBinding->m_pData,
                 AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
    }
    else
    {
      v5 = 0;
    }
    v6 = CModel::MasterSkeleton(m_pData);
    CModelSkeleton::GetBindPoseParentTransforms(v6, AnimationStateCount, v5);
    v7 = (AnimationStateCount + 31) >> 5;
    v8 = GetEndMask(int)::bitStringEndMasks[AnimationStateCount & 0x1F];
    m_pReadableBones = this->m_pReadableBones;
    if ( v7 > 1 )
      m_pReadableBones = memset(this->m_pReadableBones, 255, 4LL * (v7 - 1));
    m_pReadableBones[v7 - 1] |= v8;
  }
  v10 = CModel::GetAnimationStateCount(m_pData, AnimationStateType_t::ANIMATION_STATE_TYPE_FLEX_CONTROLLERS);
  if ( v10 > 0 )
  {
    if ( this->m_hModel.m_pBinding != 0 )
    {
      v11 = this->m_pData;
      v12 = &v11[CModel::GetAnimationStateOffset(
                   this->m_hModel.m_pBinding->m_pData,
                   AnimationStateType_t::ANIMATION_STATE_TYPE_FLEX_CONTROLLERS)];
    }
    else
    {
      v12 = 0;
    }
    memset(v12, 0, 4LL * v10);
  }
  m_pBinding = this->m_hModel.m_pBinding;
  this->m_pAnimationDataCount[0] = AnimationStateCount;
  this->m_pAnimationDataCount[1] = v10;
  if ( m_pBinding != 0 )
    v14 = CModel::GetAnimationStateCount(*m_pBinding, AnimationStateType_t::ANIMATION_STATE_TYPE_USER_DATA);
  else
    v14 = 0;
  this->m_pAnimationDataCount[2] = v14;
}


// CAnimationState::HasNonTransformAnimationData  (line 471, @0x000000000313d1d0, libserver.so)
bool __fastcall CAnimationState::HasNonTransformAnimationData(const CAnimationState *const this)
{
  return this->m_bHasNonTransformAnimationData;
}


// CAnimationState::Shutdown  (line 476, @0x000000000313de50, libserver.so)  // inlines: MemAlloc_FreeAlignedFunc, operator=
// calls: operator delete [], CStrongHandle<InfoForResourceTypeCModel>::Init
// callers: CModelState::CleanupJointState, CAnimationState::~CAnimationState, CAnimationState::Init
void __fastcall CAnimationState::Shutdown(CAnimationState *const this)
{
  unsigned __int64 m_pData; // rax
  uint32 *m_pReadableBones; // rdi

  if ( this->m_bOwnsMemory )
  {
    m_pData = this->m_pData;
    if ( m_pData != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((m_pData & 0xFFFFFFFFFFFFFFF8LL) - 8));
    m_pReadableBones = this->m_pReadableBones;
    if ( m_pReadableBones != 0 )
      operator delete[](m_pReadableBones);
  }
  this->m_pData = 0;
  this->m_pReadableBones = 0;
  this->m_bOwnsMemory = 0;
  CStrongHandle<InfoForResourceTypeCModel>::Init(&this->m_hModel, 0);
  this->m_bHasNonTransformAnimationData = 0;
}


// CAnimationState::GetAnimationStateSize  (line 496, @0x000000000313d1e0, libserver.so)  // inlines: operator==
// calls: CModel::GetAnimationStateSize
int __fastcall CAnimationState::GetAnimationStateSize(const CAnimationState *const this)
{
  if ( this->m_hModel.m_pBinding != 0 )
    return CModel::GetAnimationStateSize(this->m_hModel.m_pBinding->m_pData);
  else
    return 0;
}


// CAnimationState::GetAnimationDataBase  (line 506, @0x000000000313d200, libserver.so)
void *__fastcall CAnimationState::GetAnimationDataBase(CAnimationState *const this)
{
  return this->m_pData;
}


// CAnimationState::IsBoneReadable  (line 511, @0x000000000313d210, libserver.so)  // inlines: BitVec_IsBitSet
// callers: CCompositeParentSpaceState::LerpFrom, CSkeletonInstance::BuildInterpolatedTransformations
bool __fastcall CAnimationState::IsBoneReadable(const CAnimationState *const this, int nBone)
{
  return ((1 << nBone) & this->m_pReadableBones[nBone >> 5]) != 0;
}


// CAnimationState::GetReadableBones  (line 516, @0x000000000313d240, libserver.so)
// callers: CSkeletonInstance::SetAnimationParentSpaceStateDirty, CSkeletonInstance::SetCompositeParentSpaceStateDirty, CCompositeParentSpaceState::GetBones, CCompositeParentSpaceState::LerpFrom, CSkeletonInstance::CalcAnimationState, CSkeletonInstance::CalculateWorldTransforms_R, CSkeletonInstance::BuildInterpolatedTransformations, CSkeletonInstance::BuildTransformations, CSkeletonInstance::CalcParentSpaceState
const uint32 *__fastcall CAnimationState::GetReadableBones(const CAnimationState *const this)
{
  return this->m_pReadableBones;
}


// CAnimationState::GetReadableBonesForWrite  (line 521, @0x000000000313d250, libserver.so)
// callers: CCompositeParentSpaceState::GetBonesForModify
uint32 *__fastcall CAnimationState::GetReadableBonesForWrite(CAnimationState *const this)
{
  return this->m_pReadableBones;
}


// CAnimationState::MarkBoneReadable  (line 526, @0x000000000313d260, libserver.so)  // inlines: Bitvec_Set, Bitvec_Unset, MarkBoneReadable, MarkBoneUnreadable
// callers: CCompositeParentSpaceState::LerpFrom
void __fastcall CAnimationState::MarkBoneReadable(CAnimationState *const this, int nBone, bool bReadable)
{
  bool v3; // zf
  __int64 v4; // r8
  uint32 *m_pReadableBones; // rdx

  v3 = !bReadable;
  v4 = nBone >> 5;
  m_pReadableBones = this->m_pReadableBones;
  if ( v3 )
    m_pReadableBones[v4] &= ~(1 << nBone);
  else
    m_pReadableBones[v4] |= 1 << nBone;
}


// CAnimationState::MarkBoneReadable  (line 538, @0x000000000313d2a0, libserver.so)  // inlines: Bitvec_Set
// callers: CSkeletonInstance::BuildInterpolatedTransformations
void __fastcall CAnimationState::MarkBoneReadable(CAnimationState *const this, int nBone)
{
  this->m_pReadableBones[nBone >> 5] |= 1 << nBone;
}


// CAnimationState::MarkBoneUnreadable  (line 543, @0x000000000313d2d0, libserver.so)  // inlines: Bitvec_Unset
void __fastcall CAnimationState::MarkBoneUnreadable(CAnimationState *const this, int nBone)
{
  this->m_pReadableBones[nBone >> 5] &= ~(1 << nBone);
}


// CAnimationState::MarkBonesReadable  (line 548, @0x000000000313d300, libserver.so)  // inlines: BitVec_Or<false>, CalcNumIntsForBits
// callers: CCompositeParentSpaceState::LerpFrom, CSkeletonInstance::CalcAnimationState
void __fastcall CAnimationState::MarkBonesReadable(CAnimationState *const this, const uint32 *pReadableBones)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  uint32 *m_pReadableBones; // rdx
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  uint32 *v10; // rdx
  const uint32 *v11; // rsi
  unsigned __int64 v12; // rax
  uint32 v13; // ecx

  v2 = this->m_pAnimationDataCount[0];
  v3 = v2 + 62;
  v4 = v2 + 31;
  if ( v4 >= 0 )
    v3 = v4;
  m_pReadableBones = this->m_pReadableBones;
  v6 = (v3 >> 5) - 1;
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = v6;
    v9 = 4 * ~v7;
    v10 = &m_pReadableBones[v8];
    v11 = &pReadableBones[v8];
    v12 = 0;
    do
    {
      v13 = v11[v12 / 4];
      v12 -= 4LL;
      *v10-- |= v13;
    }
    while ( v12 != v9 );
  }
}


// CAnimationState::MarkAllBonesUnreadable  (line 554, @0x000000000313d350, libserver.so)  // inlines: BitVec_ClearAll, CalcNumIntsForBits, V_memset, memset
// calls: memset
// callers: CSkeletonInstance::SetAnimationParentSpaceStateDirty, CSkeletonInstance::SetCompositeParentSpaceStateDirty, CAnimationState::LerpFrom, CAnimationState::SetBonesFromWorldSpace
void __fastcall CAnimationState::MarkAllBonesUnreadable(CAnimationState *const this)
{
  int v1; // eax
  uint32 *m_pReadableBones; // rdi
  int v3; // edx
  int v4; // eax

  v1 = this->m_pAnimationDataCount[0];
  m_pReadableBones = this->m_pReadableBones;
  v3 = v1 + 62;
  v4 = v1 + 31;
  if ( v4 >= 0 )
    v3 = v4;
  memset(m_pReadableBones, 0, 4LL * (v3 >> 5));
}


// CAnimationState::CopyTransformAnimationData  (line 560, @0x000000000313d380, libserver.so)  // inlines: CalcNumIntsForBits, memcpy, operator const RuntimeClass_t*, operator==
// calls: CModel::GetAnimationStateCount, memcpy, CModel::NumBones
// callers: CCompositeParentSpaceState::operator=, CSkeletonInstance::BuildInterpolatedTransformations, CSkeletonInstance::BuildTransformations, CSkeletonInstance::ReadParentSpaceState
void __fastcall CAnimationState::CopyTransformAnimationData(CAnimationState *const this, const CAnimationState *pSrc)
{
  const CModel *const *m_pBinding; // rax
  const CModel *v5; // r13
  uint32 AnimationStateCount; // eax
  int v7; // eax
  int v8; // edx
  int v9; // eax

  m_pBinding = this->m_hModel.m_pBinding;
  if ( this->m_hModel.m_pBinding != 0 && m_pBinding == pSrc->m_hModel.m_pBinding )
  {
    v5 = *m_pBinding;
    AnimationStateCount = CModel::GetAnimationStateCount(
                            *m_pBinding,
                            AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
    memcpy(this->m_pData, pSrc->m_pData, (32 * AnimationStateCount));
    v7 = CModel::NumBones(v5);
    v8 = v7 + 62;
    v9 = v7 + 31;
    if ( v9 >= 0 )
      v8 = v9;
    memcpy(this->m_pReadableBones, pSrc->m_pReadableBones, 4LL * (v8 >> 5));
  }
}


// CAnimationState::CopyNonTransformAnimationData  (line 574, @0x000000000313d410, libserver.so)  // inlines: memcpy, operator const RuntimeClass_t*, operator==
// calls: CModel::GetAnimationStateSize, CModel::GetAnimationStateCount, memcpy
// callers: CCompositeParentSpaceState::operator=
void __fastcall CAnimationState::CopyNonTransformAnimationData(
        CAnimationState *const this,
        const CAnimationState *pSrc)
{
  const CModel *const *m_pBinding; // rax
  const CModel *v5; // r13
  uint32 AnimationStateSize; // r14d
  uint32 AnimationStateCount; // eax

  m_pBinding = this->m_hModel.m_pBinding;
  if ( this->m_hModel.m_pBinding != 0 && m_pBinding == pSrc->m_hModel.m_pBinding )
  {
    v5 = *m_pBinding;
    AnimationStateSize = CModel::GetAnimationStateSize(*m_pBinding);
    AnimationStateCount = CModel::GetAnimationStateCount(v5, AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
    memcpy(
      this->m_pData + (32 * AnimationStateCount),
      pSrc->m_pData + (32 * AnimationStateCount),
      (AnimationStateSize - 32 * AnimationStateCount));
  }
}


// CAnimationState::GetBonesInWorldSpace  (line 588, @0x000000000313d480, libserver.so)  // inlines: BitVec_IsBitSet, GetAnimationData<(AnimationStateType_t)0>, GetAnimationStateData<(AnimationStateType_t)0>, operator->, operator==
// calls: CModel::GetAnimationStateOffset, CModel::boneParent, TransformMatrix, ConcatTransforms
// callers: CSkeletonBoneSetupHelper::ComputeWorldSpaceBones
int __fastcall CAnimationState::GetBonesInWorldSpace(
        CAnimationState *const this,
        const matrix3x4_t *const rootToWorld,
        int nTransformCount,
        matrix3x4_t *pWorldTransforms,
        const uint32 *pBoneRequestBitMask)
{
  int v6; // r14d
  const CModel *const *m_pBinding; // rax
  char *m_pData; // r12
  const CTransform *v9; // rbx
  int v10; // r15d
  matrix3x4_t *v11; // r12
  const CModel *v12; // rdi
  const matrix3x4_t *v13; // rdi
  int nParentBone; // [rsp+24h] [rbp-6Ch]
  matrix3x4_t mJointToParent; // [rsp+30h] [rbp-60h] BYREF

  v6 = this->m_pAnimationDataCount[0];
  m_pBinding = this->m_hModel.m_pBinding;
  if ( nTransformCount <= v6 )
    v6 = nTransformCount;
  if ( m_pBinding != 0 )
  {
    m_pData = this->m_pData;
    v9 = &m_pData[CModel::GetAnimationStateOffset(
                    *m_pBinding,
                    AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
  }
  else
  {
    v9 = 0;
  }
  v10 = 0;
  v11 = pWorldTransforms;
  if ( v6 > 0 )
  {
    do
    {
      if ( pBoneRequestBitMask == 0 || ((1 << v10) & pBoneRequestBitMask[v10 >> 5]) != 0 )
      {
        v12 = 0;
        if ( this->m_hModel.m_pBinding != 0 )
          v12 = this->m_hModel.m_pBinding->m_pData;
        nParentBone = CModel::boneParent(v12, v10);
        TransformMatrix(v9, &mJointToParent);
        v13 = rootToWorld;
        if ( nParentBone >= 0 )
          v13 = &pWorldTransforms[nParentBone];
        ConcatTransforms(v13, &mJointToParent, v11);
      }
      ++v10;
      ++v11;
      ++v9;
    }
    while ( v10 != v6 );
  }
  return v6;
}


// CAnimationState::SetBonesFromWorldSpace  (line 614, @0x000000000313e0e0, libserver.so)  // inlines: AllocInts, BitVec_IsBitSet, Bitvec_Set, CBitVecT, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CVarBitVec, CVarBitVecBase, CVarBitVecT, CalcNumIntsForBits, ClearAll, ConvertToExternalMemory, FreeInts, GetAnimationData<(AnimationStateType_t)0>, GetAnimationStateData<(AnimationStateType_t)0>, IsBitSet, IsExternallyAllocated, MarkBoneReadable, MatrixTransform, Purge, Purge_FixedGrowable, RemoveAll, Set, memset, operator->, operator==, operator[], ~CBitVecT, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~CVarBitVec, ~CVarBitVecBase, ~CVarBitVecT
// calls: CAnimationState::MarkAllBonesUnreadable, CModel::GetAnimationStateOffset, memset, CUtlVectorBase<matrix3x4_t, CUtlMemoryFixedGrowable<matrix3x4_t, 128ul, int> >::SetCount, MatrixInvert, CModel::boneParent, ConcatTransforms, MatrixTransform, CUtlMemory<matrix3x4_t, int>::Purge, CUtlVectorBase<matrix3x4_t, CUtlMemoryFixedGrowable<matrix3x4_t, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
int __fastcall CAnimationState::SetBonesFromWorldSpace(
        CAnimationState *const this,
        const matrix3x4_t *const rootToWorld,
        int nTransformCount,
        const matrix3x4_t *pWorldTransforms)
{
  int v7; // eax
  int v8; // ecx
  int result; // eax
  char *m_pData; // r13
  char *v11; // r12
  int v12; // eax
  int v13; // eax
  uint32 *v14; // rax
  __int64 m_numInts; // rdx
  unsigned int *m_FixedStorage; // rdi
  int v17; // ebx
  CTransform *v18; // r14
  const matrix3x4_t *v19; // r13
  const CModel *v20; // rdi
  int v21; // eax
  __int64 v22; // r12
  char v23; // cl
  int v24; // edx
  uint32 m_nGrowSize; // edx
  uint32 v26; // eax
  int nTransformCounta; // [rsp+20h] [rbp-18C0h]
  int v29; // [rsp+24h] [rbp-18BCh]
  __int64 v30; // [rsp+28h] [rbp-18B8h]
  Vector v31; // [rsp+30h] [rbp-18B0h] BYREF
  CVarBitVec computedInverseTransform; // [rsp+40h] [rbp-18A0h] BYREF
  matrix3x4a_t mJointToParent; // [rsp+60h] [rbp-1880h] BYREF
  CUtlVectorFixedGrowable<matrix3x4_t,128ul> pWorldToParentTransforms; // [rsp+90h] [rbp-1850h] BYREF
  unsigned __int64 v35; // [rsp+18A8h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  CAnimationState::MarkAllBonesUnreadable(this);
  v7 = this->m_pAnimationDataCount[0];
  if ( nTransformCount <= v7 )
    v7 = nTransformCount;
  v8 = v7;
  nTransformCounta = v7;
  result = 0;
  if ( v8 != 0 )
  {
    if ( this->m_hModel.m_pBinding != 0 )
    {
      m_pData = this->m_pData;
      v11 = &m_pData[CModel::GetAnimationStateOffset(
                       this->m_hModel.m_pBinding->m_pData,
                       AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
    }
    else
    {
      v11 = 0;
    }
    computedInverseTransform.m_pInt = 0;
    v12 = nTransformCounta + 32;
    if ( nTransformCounta + 32 < 0 )
      v12 = nTransformCounta + 63;
    computedInverseTransform.m_numBits = nTransformCounta + 1;
    v13 = v12 >> 5;
    computedInverseTransform.m_numInts = v13;
    if ( v13 != 0 )
    {
      if ( v13 == 1 )
      {
        m_FixedStorage = computedInverseTransform.m_FixedStorage;
        m_numInts = v13;
        computedInverseTransform.m_pInt = computedInverseTransform.m_FixedStorage;
      }
      else
      {
        v14 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v13);
        m_numInts = computedInverseTransform.m_numInts;
        computedInverseTransform.m_pInt = v14;
        m_FixedStorage = v14;
      }
    }
    else
    {
      m_numInts = 0;
      m_FixedStorage = 0;
    }
    memset(m_FixedStorage, 0, 4 * m_numInts);
    pWorldToParentTransforms.m_Size = 0;
    pWorldToParentTransforms.m_Memory.m_nAllocationCount = 128;
    pWorldToParentTransforms.m_Memory.m_nGrowSize = 0x80000000;
    pWorldToParentTransforms.m_Memory.m_pMemory = &pWorldToParentTransforms.m_Memory.m_FixedMemory;
    CUtlVectorBase<matrix3x4_t,CUtlMemoryFixedGrowable<matrix3x4_t,128ul,int>>::SetCount(
      &pWorldToParentTransforms,
      nTransformCounta + 1);
    MatrixInvert(rootToWorld, pWorldToParentTransforms.m_Memory.m_pMemory);
    *computedInverseTransform.m_pInt |= 1u;
    v17 = nTransformCounta - 1;
    if ( nTransformCounta - 1 >= 0 )
    {
      v18 = &v11[32 * v17];
      v19 = &pWorldTransforms[v17];
      do
      {
        if ( this->m_hModel.m_pBinding != 0 )
          v20 = this->m_hModel.m_pBinding->m_pData;
        else
          v20 = 0;
        v21 = CModel::boneParent(v20, v17) + 1;
        v29 = 1 << v21;
        v22 = v21;
        v30 = v21 >> 5;
        if ( ((1 << v21) & computedInverseTransform.m_pInt[v30]) == 0 )
        {
          MatrixInvert(&pWorldTransforms[v22 - 1], &pWorldToParentTransforms.m_Memory.m_pMemory[v22]);
          computedInverseTransform.m_pInt[v30] |= v29;
        }
        ConcatTransforms(&pWorldToParentTransforms.m_Memory.m_pMemory[v22], v19, &mJointToParent);
        MatrixTransform(&mJointToParent, v18, &v31);
        v23 = v17;
        v24 = v17-- >> 5;
        --v18;
        --v19;
        this->m_pReadableBones[v24] |= 1 << v23;
      }
      while ( v17 != -1 );
    }
    pWorldToParentTransforms.m_Size = 0;
    if ( pWorldToParentTransforms.m_Memory.m_nAllocationCount < 0 )
    {
      v26 = pWorldToParentTransforms.m_Memory.m_nGrowSize & 0xC0000000;
    }
    else
    {
      m_nGrowSize = pWorldToParentTransforms.m_Memory.m_nGrowSize;
      v26 = pWorldToParentTransforms.m_Memory.m_nGrowSize & 0xC0000000;
      if ( pWorldToParentTransforms.m_Memory.m_pMemory != &pWorldToParentTransforms.m_Memory.m_FixedMemory )
      {
        if ( pWorldToParentTransforms.m_Memory.m_pMemory != 0 && v26 == 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          m_nGrowSize = pWorldToParentTransforms.m_Memory.m_nGrowSize;
        }
        pWorldToParentTransforms.m_Memory.m_nAllocationCount = 128;
        pWorldToParentTransforms.m_Memory.m_pMemory = &pWorldToParentTransforms.m_Memory.m_FixedMemory;
        pWorldToParentTransforms.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
LABEL_27:
        result = nTransformCounta;
        if ( computedInverseTransform.m_numInts > 1u )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, computedInverseTransform.m_pInt);
          return nTransformCounta;
        }
        return result;
      }
    }
    if ( v26 == 0 )
      CUtlMemory<matrix3x4_t,int>::Purge(&pWorldToParentTransforms.m_Memory);
    goto LABEL_27;
  }
  return result;
}


// CAnimationState::SetBonesFromParentSpace  (line 660, @0x000000000313d590, libserver.so)  // inlines: CalcNumIntsForBits, memcpy
// calls: memcpy
int __fastcall CAnimationState::SetBonesFromParentSpace(
        CAnimationState *const this,
        int nTransformCount,
        const CTransform *pParentTransforms,
        const uint32 *pReadableBones)
{
  int v5; // ebx
  int v7; // edx

  v5 = this->m_pAnimationDataCount[0];
  if ( nTransformCount <= v5 )
    v5 = nTransformCount;
  if ( v5 != 0 )
  {
    memcpy(this->m_pData, pParentTransforms, 32LL * v5);
    v7 = v5 + 62;
    if ( v5 + 31 >= 0 )
      v7 = v5 + 31;
    memcpy(this->m_pReadableBones, pReadableBones, 4LL * (v7 >> 5));
  }
  return v5;
}


// CAnimationState::LerpFrom  (line 674, @0x000000000313d600, libserver.so)  // inlines: BitVec_IsBitSet, Bitvec_Set, GetAnimationData<(AnimationStateType_t)0>, GetAnimationData<(AnimationStateType_t)1>, GetAnimationStateData<(AnimationStateType_t)0>, GetAnimationStateData<(AnimationStateType_t)1>, IsBoneReadable, Lerp<float>, operator==
// calls: CModel::GetAnimationStateOffset, CAnimationState::MarkAllBonesUnreadable, TransformLerp
void __fastcall CAnimationState::LerpFrom(
        CAnimationState *const this,
        const CAnimationState *pState1,
        const CAnimationState *pState2,
        float t)
{
  int v5; // r12d
  char *m_pData; // r15
  char *v7; // r13
  char *v8; // r15
  char *v9; // r14
  char *v10; // r15
  char *v11; // r15
  __int64 v12; // rdx
  char *v13; // r15
  const CTransform *v14; // r12
  char *v15; // r15
  const CTransform *v16; // r13
  char *v17; // r15
  CTransform *v18; // r8
  const CTransform *v19; // r14
  int v20; // r15d
  const CTransform *v21; // r13
  CTransform *v22; // r12
  __int64 v23; // rax
  int v24; // edx
  int nBoneCount; // [rsp+18h] [rbp-38h]

  v5 = this->m_pAnimationDataCount[1];
  if ( v5 > 0 )
  {
    if ( pState2->m_hModel.m_pBinding != 0 )
    {
      m_pData = pState2->m_pData;
      v7 = &m_pData[CModel::GetAnimationStateOffset(
                      pState2->m_hModel.m_pBinding->m_pData,
                      AnimationStateType_t::ANIMATION_STATE_TYPE_FLEX_CONTROLLERS)];
    }
    else
    {
      v7 = 0;
    }
    if ( pState1->m_hModel.m_pBinding != 0 )
    {
      v8 = pState1->m_pData;
      v9 = &v8[CModel::GetAnimationStateOffset(
                 pState1->m_hModel.m_pBinding->m_pData,
                 AnimationStateType_t::ANIMATION_STATE_TYPE_FLEX_CONTROLLERS)];
    }
    else
    {
      v9 = 0;
    }
    if ( this->m_hModel.m_pBinding != 0 )
    {
      v10 = this->m_pData;
      v11 = &v10[CModel::GetAnimationStateOffset(
                   this->m_hModel.m_pBinding->m_pData,
                   AnimationStateType_t::ANIMATION_STATE_TYPE_FLEX_CONTROLLERS)];
    }
    else
    {
      v11 = 0;
    }
    v12 = 0;
    do
    {
      *&v11[4 * v12] = ((*&v7[4 * v12] - *&v9[4 * v12]) * t) + *&v9[4 * v12];
      ++v12;
    }
    while ( v5 > v12 );
  }
  nBoneCount = this->m_pAnimationDataCount[0];
  if ( nBoneCount > 0 )
  {
    CAnimationState::MarkAllBonesUnreadable(this);
    if ( pState2->m_hModel.m_pBinding != 0 )
    {
      v13 = pState2->m_pData;
      v14 = &v13[CModel::GetAnimationStateOffset(
                   pState2->m_hModel.m_pBinding->m_pData,
                   AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
    }
    else
    {
      v14 = 0;
    }
    if ( pState1->m_hModel.m_pBinding != 0 )
    {
      v15 = pState1->m_pData;
      v16 = &v15[CModel::GetAnimationStateOffset(
                   pState1->m_hModel.m_pBinding->m_pData,
                   AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
    }
    else
    {
      v16 = 0;
    }
    if ( this->m_hModel.m_pBinding != 0 )
    {
      v17 = this->m_pData;
      v18 = &v17[CModel::GetAnimationStateOffset(
                   this->m_hModel.m_pBinding->m_pData,
                   AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
    }
    else
    {
      v18 = 0;
    }
    v19 = v16;
    v20 = 0;
    v21 = v14;
    v22 = v18;
    do
    {
      TransformLerp(v19, v21, LODWORD(t), v22);
      v23 = v20 >> 5;
      v24 = 1 << v20;
      if ( ((1 << v20) & pState1->m_pReadableBones[v23]) != 0 && (v24 & pState2->m_pReadableBones[v23]) != 0 )
        this->m_pReadableBones[v23] |= v24;
      ++v20;
      ++v19;
      ++v21;
      ++v22;
    }
    while ( v20 != nBoneCount );
  }
}


// CAnimationState::TransferStateTo  (line 715, @0x000000000313ddb0, libserver.so)  // inlines: Init, ThreadInterlockedIncrement, V_memcpy, memcpy, operator++, operator=
// calls: CStrongHandle<InfoForResourceTypeCModel>::Shutdown
// callers: CCompositeParentSpaceState::TransferStateTo, CModelState::CopyStateTo
void __fastcall CAnimationState::TransferStateTo(CAnimationState *const this, CAnimationState *const state)
{
  const ResourceBindingBase_t *m_pBinding; // rsi
  bool v5; // zf

  if ( state->m_hModel.m_pBinding != 0 )
    CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&state->m_hModel);
  m_pBinding = this->m_hModel.m_pBinding;
  v5 = this->m_hModel.m_pBinding == 0;
  state->m_hModel.m_pBinding = this->m_hModel.m_pBinding;
  if ( !v5 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, m_pBinding, 2, state);
      m_pBinding = state->m_hModel.m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
  }
  state->m_pData = this->m_pData;
  state->m_pReadableBones = this->m_pReadableBones;
  state->m_bOwnsMemory = this->m_bOwnsMemory;
  state->m_bHasNonTransformAnimationData = this->m_bOwnsMemory;
  *state->m_pAnimationDataCount = *this->m_pAnimationDataCount;
  state->m_pAnimationDataCount[2] = this->m_pAnimationDataCount[2];
  this->m_pData = 0;
  this->m_pReadableBones = 0;
  this->m_bOwnsMemory = 0;
}


// GetDebugBoneIndex  (line 729, @0x000000000313c3e0, libserver.so)  // inlines: GetModel, operator CWeakHandle<InfoForResourceTypeCModel>, operator const RuntimeClass_t*, operator->
// calls: CModel::GetAnimationStateCount, CModel::boneName, V_stricmp_fast
// callers: CAnimationState::GetDebugSpeedString, CAnimationState::GetDebugString
int __fastcall GetDebugBoneIndex(const CAnimationState *val)
{
  void *v2; // rsi
  _BYTE *v3; // rax
  _BYTE *v4; // r13
  const CModel *v5; // rdi
  signed int AnimationStateCount; // r14d
  int v7; // ebx
  const CModel *v8; // rdi
  const char *v9; // rax

  if ( g_pAnimationSystem == 0 || val == 0 )
    return 0;
  v2 = val->m_hModel.m_pBinding != 0 ? val->m_hModel.m_pBinding->m_pData : 0LL;
  v3 = (*(*g_pAnimationSystem + 240LL))(g_pAnimationSystem, v2);
  v4 = v3;
  if ( v3 == 0 || *v3 == 0 )
    return 0;
  v5 = val->m_hModel.m_pBinding != 0 ? val->m_hModel.m_pBinding->m_pData : 0LL;
  AnimationStateCount = CModel::GetAnimationStateCount(v5, AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
  if ( AnimationStateCount <= 0 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = val->m_hModel.m_pBinding != 0 ? val->m_hModel.m_pBinding->m_pData : 0LL;
    v9 = CModel::boneName(v8, v7);
    if ( V_stricmp_fast(v9, v4) == 0 )
      break;
    if ( AnimationStateCount == ++v7 )
      return 0;
  }
  return v7;
}


// CAnimationState::GetDebugString  (line 749, @0x000000000313dc30, libserver.so)  // inlines: CUtlString, GetAnimationData<(AnimationStateType_t)0>, GetAnimationStateData<(AnimationStateType_t)0>, GetModel, ToQAngle, operator CWeakHandle<InfoForResourceTypeCModel>, operator->, operator==
// calls: GetDebugBoneIndex, CModel::GetAnimationStateOffset, CModel::boneName, QuaternionAngles, CFmtStrN<256, false>::CFmtStrN, CUtlString::operator+=, __stack_chk_fail, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "%d=%s:  pos[ %8.3f %8.3f %8.3f ] ang[ %8.3f %8.3f %8.3f ]", "%d \"No animation data\""
CUtlString __fastcall CAnimationState::GetDebugString(CUtlString *a1, const CAnimationState *const this)
{
  int DebugBoneIndex; // r13d
  char *v5; // r14
  char *v6; // r15
  const CModel *m_pData; // rdi
  const char *v8; // r14
  const Quaternion *v9; // r12
  QAngle angles; // [rsp+0h] [rbp-160h] BYREF
  CFmtStrN<256,false> v12; // [rsp+10h] [rbp-150h] BYREF
  unsigned __int64 v13; // [rsp+128h] [rbp-38h]

  a1->m_pString = 0;
  v13 = __readfsqword(0x28u);
  DebugBoneIndex = GetDebugBoneIndex(this);
  if ( this->m_hModel.m_pBinding != 0
    && (v5 = this->m_pData,
        (v6 = &v5[CModel::GetAnimationStateOffset(
                    this->m_hModel.m_pBinding->m_pData,
                    AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)]) != 0) )
  {
    if ( this->m_hModel.m_pBinding != 0 )
      m_pData = this->m_hModel.m_pBinding->m_pData;
    else
      m_pData = 0;
    v8 = CModel::boneName(m_pData, DebugBoneIndex);
    v9 = &v6[32 * DebugBoneIndex];
    QuaternionAngles(v9 + 1, &angles);
    CFmtStrN<256,false>::CFmtStrN(
      &v12,
      "%d=%s:  pos[ %8.3f %8.3f %8.3f ] ang[ %8.3f %8.3f %8.3f ]",
      DebugBoneIndex,
      v8,
      v9->x,
      v9->y,
      v9->z,
      angles.x,
      angles.y,
      angles.z);
  }
  else
  {
    CFmtStrN<256,false>::CFmtStrN(&v12, "%d \"No animation data\"", DebugBoneIndex);
  }
  CUtlString::operator+=(a1, v12.m_szBuf);
  return a1;
}


// CAnimationState::GetDebugSpeedString  (line 767, @0x000000000313d810, libserver.so)  // inlines: CUtlString, CalcDistance, Compute, DistTo, FastSqrt, GetAnimationData<(AnimationStateType_t)0>, GetAnimationStateData<(AnimationStateType_t)0>, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator==
// calls: GetDebugBoneIndex, CModel::GetAnimationStateOffset, CUtlString::Format, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CCompositeParentSpaceState::GetDebugSpeedString
// strings: "%8.3f"
CUtlString __fastcall CAnimationState::GetDebugSpeedString(
        const CAnimationState *const this,
        float flPrevTime,
        float flNextTime,
        const CAnimationState *pPrevVal,
        __int64 a5)
{
  int DebugBoneIndex; // r14d
  __int64 v9; // r15
  __int64 v10; // r13
  const CModel *const *m_pBinding; // rax
  char *m_pData; // r12
  char *v13; // r12
  __int64 v14; // rdx
  float *v15; // r13
  float *v16; // rdx
  double v17; // xmm0_8

  this->m_hModel.m_pBinding = 0;
  DebugBoneIndex = GetDebugBoneIndex(pPrevVal);
  if ( *a5 != 0 )
  {
    v9 = *(a5 + 8);
    v10 = v9 + CModel::GetAnimationStateOffset(**a5, AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
  }
  else
  {
    v10 = 0;
  }
  m_pBinding = pPrevVal->m_hModel.m_pBinding;
  if ( pPrevVal->m_hModel.m_pBinding != 0 )
  {
    m_pData = pPrevVal->m_pData;
    v13 = &m_pData[CModel::GetAnimationStateOffset(
                     *m_pBinding,
                     AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS)];
  }
  else
  {
    v13 = 0;
  }
  v14 = 32LL * DebugBoneIndex;
  v15 = (v14 + v10);
  if ( flPrevTime == -1.0 || v15 == 0 || fabs(flNextTime - flPrevTime) <= 0.0000099999997 )
  {
    v17 = 0.0;
  }
  else
  {
    v16 = &v13[v14];
    v17 = fabs(
            fsqrt(
              (((*v16 - *v15) * (*v16 - *v15)) + ((v16[1] - v15[1]) * (v16[1] - v15[1])))
            + ((v16[2] - v15[2]) * (v16[2] - v15[2])))
          / (flNextTime - flPrevTime));
  }
  CUtlString::Format(this, "%8.3f", v17);
  return this;
}


// DecodeAnimation  (line 785, @0x000000000313d990, libserver.so)  // inlines: CAnimationDecodeContext, FromUntypedHandleUnchecked, GetModel, InitUntypedUnchecked, operator CWeakHandle<InfoForResourceTypeCModel>, ~CAnimationDecodeContext
// calls: CAnimationDecodeContext::Init, CAnimationDecodeContext::AddAnimationDecodeDesc, CAnimationDecodeContext::AddAnimationDecode, CAnimationDecodeContext::Shutdown, _Unwind_Resume
// callers: CSkeletonBoneSetupHelper::ComputeWorldSpaceBones
void __fastcall DecodeAnimation(
        CAnimationState *pAnimState,
        const uint32 *pBonesToSetUp,
        int nAnimOpCount,
        const CAnimationDecodeOp *pOperations,
        int nPoseParamCount,
        const float *pPoseParameters,
        int nLod,
        const uint32 *pBoneRequestBitMask,
        uint32 nAnimationDecodeDescFlags)
{
  HAnimationDecodeDesc v13; // rax
  HModel hModel; // [rsp+30h] [rbp-70h] BYREF
  CAnimationDecodeContext ctx; // [rsp+40h] [rbp-60h] BYREF

  ctx.m_flRealTimeBase = 0.0;
  ctx.m_pAllocator = 0;
  ctx.m_bOwnsAllocator = 0;
  CAnimationDecodeContext::Init(&ctx, AnimationProcessingType_t::ANIMATION_PROCESSING_CLIENT_RENDER, 0);
  hModel.m_pBinding = pAnimState->m_hModel.m_pBinding;
  v13 = CAnimationDecodeContext::AddAnimationDecodeDesc(
          &ctx,
          &hModel,
          0.0,
          pBonesToSetUp,
          nAnimOpCount,
          pOperations,
          nPoseParamCount,
          pPoseParameters,
          -1,
          0,
          nAnimationDecodeDescFlags);
  CAnimationDecodeContext::AddAnimationDecode(&ctx, v13, pAnimState, nLod);
  (*(*g_pAnimationSystem + 104LL))(g_pAnimationSystem, &ctx);
  CAnimationDecodeContext::Shutdown(&ctx);
}


// BlendOverrideTransforms  (line 798, @0x000000000313da70, libserver.so)  // inlines: BitVec_IsBitSet, Init, operator=
// calls: TransformLerp
// callers: BlendOverrideTransforms
void __fastcall BlendOverrideTransforms(
        int nDestTransformCount,
        CTransform *pDestTransforms,
        int nOverrideTransformCount,
        const CTransform *pOverrideTransforms,
        const float *pOverrideTransformWeights,
        const uint32 *pBoneRequestBitMask)
{
  int v7; // r9d
  const CTransform *v8; // r14
  CTransform *v9; // r13
  float v10; // xmm4_4
  vec_t *p_w; // r12
  int v12; // r10d
  __int64 v13; // rcx
  QuaternionAligned *p_m_orientation; // rbx
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4
  vec_t v17; // xmm1_4
  vec_t v18; // xmm3_4
  vec_t v19; // xmm0_4
  __m128 v20; // xmm0
  int v21; // [rsp+4h] [rbp-4Ch]
  const float *v22; // [rsp+8h] [rbp-48h]
  float v23; // [rsp+10h] [rbp-40h]
  int v24; // [rsp+14h] [rbp-3Ch]
  __int64 v25; // [rsp+18h] [rbp-38h]

  if ( nDestTransformCount <= nOverrideTransformCount )
    nOverrideTransformCount = nDestTransformCount;
  v7 = nOverrideTransformCount;
  if ( nOverrideTransformCount > 0 )
  {
    v8 = pOverrideTransforms;
    v9 = pDestTransforms;
    v10 = 1.0;
    p_w = &pOverrideTransforms->m_orientation.w;
    v12 = 1;
    v13 = 0;
    p_m_orientation = &pDestTransforms->m_orientation;
    do
    {
      if ( pBoneRequestBitMask == 0 || ((v12 << v13) & pBoneRequestBitMask[v13 >> 5]) != 0 )
      {
        v20 = LODWORD(pOverrideTransformWeights[v13]);
        if ( v20.m128_f32[0] >= v10 )
        {
          y = v8->m_vPosition.y;
          z = v8->m_vPosition.z;
          v9->m_vPosition.x = v8->m_vPosition.x;
          v9->m_vPosition.y = y;
          v9->m_vPosition.z = z;
          v17 = *p_w;
          v18 = *(p_w - 2);
          v19 = *(p_w - 3);
          p_m_orientation->z = *(p_w - 1);
          p_m_orientation->y = v18;
          p_m_orientation->x = v19;
          p_m_orientation->w = v17;
        }
        else if ( v20.m128_f32[0] > 0.0 )
        {
          v21 = v12;
          v23 = v10;
          v22 = pOverrideTransformWeights;
          v24 = v7;
          v25 = v13;
          TransformLerp(v9, v8, v20, v9);
          v12 = v21;
          v10 = v23;
          pOverrideTransformWeights = v22;
          v7 = v24;
          v13 = v25;
        }
      }
      ++v13;
      ++v8;
      ++v9;
      p_w += 8;
      p_m_orientation += 2;
    }
    while ( v7 > v13 );
  }
}


// BlendOverrideTransforms  (line 818, @0x000000000313dba0, libserver.so)  // inlines: GetAnimationData<(AnimationStateType_t)0>, GetAnimationDataCount<(AnimationStateType_t)0>, GetAnimationStateData<(AnimationStateType_t)0>, operator==
// calls: CModel::GetAnimationStateCount, CModel::GetAnimationStateOffset, BlendOverrideTransforms
// callers: CSkeletonBoneSetupHelper::ComputeWorldSpaceBones
void __fastcall BlendOverrideTransforms(
        CAnimationState *pAnimState,
        int nOverrideTransformCount,
        const CTransform *pOverrideTransforms,
        const float *pOverrideTransformWeights,
        const uint32 *pBoneRequestBitMask)
{
  uint32 AnimationStateCount; // r15d
  const CModel *const *m_pBinding; // rax
  CTransform *v11; // rsi
  CAnimationState *pAnimStateb; // [rsp+8h] [rbp-38h]

  if ( pAnimState->m_hModel.m_pBinding != 0 )
  {
    AnimationStateCount = CModel::GetAnimationStateCount(
                            pAnimState->m_hModel.m_pBinding->m_pData,
                            AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS);
    m_pBinding = pAnimState->m_hModel.m_pBinding;
    if ( pAnimState->m_hModel.m_pBinding != 0 )
    {
      pAnimStateb = pAnimState->m_pData;
      v11 = (pAnimStateb
           + CModel::GetAnimationStateOffset(*m_pBinding, AnimationStateType_t::ANIMATION_STATE_TYPE_BONE_TRANSFORMS));
    }
    else
    {
      v11 = 0;
    }
  }
  else
  {
    AnimationStateCount = 0;
    v11 = 0;
  }
  BlendOverrideTransforms(
    AnimationStateCount,
    v11,
    nOverrideTransformCount,
    pOverrideTransforms,
    pOverrideTransformWeights,
    pBoneRequestBitMask);
}


