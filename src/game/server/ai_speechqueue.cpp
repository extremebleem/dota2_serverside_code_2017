
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CResponseQueue::CResponseQueue  (line 34, @0x0000000002172240, libserver.so)  // inlines: CUtlFixedLinkedList, CUtlFixedMemory, CUtlLinkedList, CUtlMemory, CUtlVector, CUtlVectorBase, ConstructList, Init, ResetDbgInfo, ~CUtlFixedLinkedList, ~CUtlFixedMemory, ~CUtlLinkedList
// calls: CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> >::Purge, CMemAllocSystemInitialize, CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> > >::RemoveAll, _Unwind_Resume
// callers: CResponseQueueManager::GameInit
void __fastcall CResponseQueue::CResponseQueue(CResponseQueue *const this, int queueSize)
{
  this->_vptr_CResponseQueue = &off_4000260;
  this->m_Queue.m_Memory.m_pBlocks = 0;
  this->m_Queue.m_Memory.m_nAllocationCount = 0;
  this->m_Queue.m_Memory.m_nGrowSize = 0;
  CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>::Purge(&this->m_Queue.m_Memory);
  this->m_Queue.m_Memory.m_nGrowSize = queueSize;
  this->m_Queue.m_LastAlloc.m_pBlockHeader = 0;
  this->m_Queue.m_LastAlloc.m_nIndex = 0;
  this->m_Queue.m_Head = 0;
  this->m_Queue.m_Tail = 0;
  this->m_Queue.m_FirstFree = 0;
  this->m_Queue.m_ElementCount = 0;
  this->m_Queue.m_NumAlloced = 0;
  this->m_Queue.m_pElements = 0;
  this->m_ExpresserTargets.m_Size = 0;
  this->m_ExpresserTargets.m_Memory.m_pMemory = 0;
  this->m_ExpresserTargets.m_Memory.m_nAllocationCount = 8;
  this->m_ExpresserTargets.m_Memory.m_nGrowSize = 8;
  CMemAllocSystemInitialize();
  this->m_ExpresserTargets.m_Memory.m_pMemory = (**g_pMemAlloc)(
                                                  g_pMemAlloc,
                                                  8LL * this->m_ExpresserTargets.m_Memory.m_nAllocationCount);
}


// CResponseQueue::Add  (line 38, @0x00000000021754f0, libserver.so)  // inlines: AddToTail, CAI_Concept, CDeferredResponse, CEntityHandle, CFollowupTargetSpec_t, CHandle, CRR_Concept, CUtlSymbol, Construct<CResponseQueue::CDeferredResponse>, GetEHandle, GetEntryIndex, GetSerialNumber, Init, InsertBefore, InternalElement, LinkBefore, Set, operator=, operator[]
// calls: CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> > >::AllocInternal, CResponseQueue::DeferContextsFromCriteriaSet, CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> > >::Unlink, CResponseCriteriaSet::CResponseCriteriaSet
// callers: CAI_ExpresserWithFollowup::DispatchFollowupThroughQueue, CC_RR_ForceConcept_f, Script_ForceConcept, CPropDoorRotatingBreakable::Event_Killed
void __fastcall CResponseQueue::Add(
        CResponseQueue *const this,
        const AIConcept_t *const concept,
        const CResponseCriteriaSet *contexts,
        float time,
        const CResponseQueue::CFollowupTargetSpec_t *const targetspec,
        CBaseEntity *pIssuer)
{
  CResponseQueue::QueueType_t *p_m_Queue; // rbx
  __int64 v10; // rax
  const CResponseQueue::CFollowupTargetSpec_t *v11; // rcx
  __int64 v12; // r12
  float v13; // xmm0_4
  CResponseQueue::DeferredContexts_t *v14; // r14
  __int64 v15; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *m_pEntity; // rdx
  int v18; // eax
  __int16 v19; // cx
  CUtlLinkedList<CResponseQueue::CDeferredResponse,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long int> > > *v20; // rdi
  __int64 m_Tail; // rax
  const CResponseQueue::CFollowupTargetSpec_t *timea; // [rsp+8h] [rbp-48h]
  float targetspecb; // [rsp+10h] [rbp-40h]

  p_m_Queue = &this->m_Queue;
  v10 = CUtlLinkedList<CResponseQueue::CDeferredResponse,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>>::AllocInternal(
          &this->m_Queue,
          0);
  v11 = targetspec;
  v12 = v10;
  v13 = time;
  if ( v10 != 0 )
  {
    v20 = p_m_Queue;
    timea = targetspec;
    targetspecb = v13;
    v15 = v10;
    CUtlLinkedList<CResponseQueue::CDeferredResponse,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>>::Unlink(
      v20,
      v10);
    *(v12 + 96) = 0;
    m_Tail = this->m_Queue.m_Tail;
    *(v12 + 88) = m_Tail;
    this->m_Queue.m_Tail = v12;
    if ( m_Tail != 0 )
      *(m_Tail + 96) = v12;
    else
      this->m_Queue.m_Head = v12;
    ++this->m_Queue.m_ElementCount;
    *v12 = &off_4000240;
    v14 = (v12 + 16);
    *(v12 + 8) = -1;
    *(v12 + 12) = -1;
    CResponseCriteriaSet::CResponseCriteriaSet((v12 + 16));
    v11 = timea;
    *(v12 + 76) = -1;
    *(v12 + 80) = 3;
    v13 = targetspecb;
    *(v12 + 84) = -1;
  }
  else
  {
    v14 = &stru_10;
    v15 = 0;
  }
  *(v15 + 8) = concept->m_iConcept.m_Id;
  m_Index = concept->m_hSpeaker.m_Index;
  *(v15 + 72) = v13;
  *(v15 + 12) = m_Index;
  *(v15 + 80) = v11->m_iTargetType;
  *(v15 + 84) = v11->m_hHandle.m_Index;
  if ( pIssuer != 0 && (m_pEntity = pIssuer->m_pEntity) != 0 )
  {
    v18 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v19 = 0x7FFF;
    else
      v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    *(v15 + 76) = v19 | *(v15 + 76) & 0x8000;
    *(v15 + 76) = (v18 << 15) | *(v15 + 76) & 0x7FFF;
  }
  else
  {
    *(v15 + 76) = -1;
  }
  CResponseQueue::DeferContextsFromCriteriaSet(v14, contexts);
}


// CResponseQueue::Remove  (line 53, @0x00000000021724f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Next, Remove, operator CEntityInstance*
// calls: CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> > >::Free
// globals: CEntityHandle::gm_pEntityList
void __fastcall CResponseQueue::Remove(
        CResponseQueue *const this,
        const AIConcept_t *const concept,
        CBaseEntity *const pIssuer)
{
  CResponseQueue::QueueType_t *p_m_Queue; // r14
  __int64 m_Head; // rax
  __int64 v7; // rbx
  int v8; // ecx
  CEntityIdentity *v9; // rsi
  CEntityIdentity *v10; // rsi

  p_m_Queue = &this->m_Queue;
  m_Head = this->m_Queue.m_Head;
  if ( m_Head != 0 )
  {
    while ( 1 )
    {
      v7 = *(m_Head + 96);
      if ( concept->m_iConcept.m_Id == *(m_Head + 8)
        && (pIssuer == 0
         || ((v8 = *(m_Head + 76)) + 2) > 1
         && (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*(m_Head + 76) >> 9) & 0x3F]) != 0
         && (v10 = &v9[*(m_Head + 76) & 0x1FF]) != 0
         && v8 == v10->m_EHandle.m_Index
         && pIssuer == v10->m_pInstance) )
      {
        CUtlLinkedList<CResponseQueue::CDeferredResponse,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>>::Free(
          p_m_Queue,
          m_Head);
        if ( v7 == 0 )
          return;
      }
      else if ( v7 == 0 )
      {
        return;
      }
      m_Head = v7;
    }
  }
}


// CResponseQueue::RemoveSpeechQueuedFor  (line 74, @0x000000000214bcb0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Next, Quash, operator CEntityInstance*, operator=
// globals: CEntityHandle::gm_pEntityList
void __fastcall CResponseQueue::RemoveSpeechQueuedFor(CResponseQueue *const this, const CBaseEntity *pSpeaker)
{
  __int64 m_Head; // rax
  CConcreteEntityList *v3; // r10
  int v4; // edx
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx

  m_Head = this->m_Queue.m_Head;
  if ( m_Head != 0 )
  {
    v3 = CEntityHandle::gm_pEntityList;
    do
    {
      while ( 1 )
      {
        v4 = *(m_Head + 84);
        m_pInstance = 0;
        if ( (v4 + 2) > 1 )
        {
          v6 = v3->m_pIdentityChunks[(*(m_Head + 84) >> 9) & 0x3F];
          if ( v6 != 0 )
          {
            v7 = &v6[*(m_Head + 84) & 0x1FF];
            if ( v7 != 0 && v4 == v7->m_EHandle.m_Index )
              m_pInstance = v7->m_pInstance;
          }
        }
        if ( pSpeaker == m_pInstance )
          break;
        m_Head = *(m_Head + 96);
        if ( m_Head == 0 )
          return;
      }
      *(m_Head + 80) = 3;
      *(m_Head + 84) = -1;
      *(m_Head + 72) = 0;
      m_Head = *(m_Head + 96);
    }
    while ( m_Head != 0 );
  }
}


// CResponseQueue::DeferContextsFromCriteriaSet  (line 94, @0x000000000214bd60, libserver.so)
// calls: CResponseCriteriaSet::Reset, CResponseCriteriaSet::Merge
// callers: CResponseQueue::Add
void __fastcall CResponseQueue::DeferContextsFromCriteriaSet(
        CResponseQueue::DeferredContexts_t *const contextsOut,
        const CResponseCriteriaSet *criteriaIn)
{
  CResponseCriteriaSet::Reset(contextsOut);
  if ( criteriaIn != 0 )
    CResponseCriteriaSet::Merge(contextsOut, criteriaIn);
}


// CResponseQueue::PerFrameDispatch  (line 103, @0x00000000021725b0, libserver.so)  // inlines: IsQuashed, IsValid, Next, Remove, curtime
// calls: CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> > >::Free, CResponseQueue::DispatchOneResponse
// callers: CResponseQueueManager::FrameUpdatePostEntityThink
void __fastcall CResponseQueue::PerFrameDispatch(CResponseQueue *const this)
{
  CResponseQueue::QueueType_t *p_m_Queue; // r14
  __int64 m_Head; // rbx
  float v4; // xmm1_4
  CGlobalVars *v5; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm0_4
  __int64 v8; // r12
  __int64 m_ElementCount; // r13
  float v10; // [rsp+Ch] [rbp-34h]

  p_m_Queue = &this->m_Queue;
failsafe:
  m_Head = this->m_Queue.m_Head;
  if ( m_Head != 0 )
  {
    while ( 1 )
    {
      v8 = *(m_Head + 96);
      if ( *(m_Head + 80) <= 2u && (*(m_Head + 80) != 2 || *(m_Head + 84) != -1) )
      {
        v4 = *(m_Head + 72);
        v5 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
            {
              v10 = *(m_Head + 72);
              m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
              v4 = v10;
            }
          }
          m_flCurrentTime = v5->m_flCurrentTime;
        }
        else
        {
          m_flCurrentTime = 0.0;
        }
        if ( m_flCurrentTime < v4 )
        {
          if ( v8 == 0 )
            return;
          goto LABEL_13;
        }
        m_ElementCount = this->m_Queue.m_ElementCount;
        CResponseQueue::DispatchOneResponse(this, m_Head);
        if ( this->m_Queue.m_ElementCount < m_ElementCount )
          goto failsafe;
      }
      CUtlLinkedList<CResponseQueue::CDeferredResponse,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>>::Free(
        p_m_Queue,
        m_Head);
      if ( v8 == 0 )
        return;
LABEL_13:
      m_Head = v8;
    }
  }
}


// CResponseQueue::AddExpresser  (line 140, @0x00000000021726c0, libserver.so)  // inlines: AddToTail, CopyConstruct<CAI_Expresser*>, Element, GrowMemory, HasElement, operator[]
// calls: CUtlVectorBase<CAI_Expresser*, CUtlMemory<CAI_Expresser*, int> >::Find, CUtlMemory<CAI_Expresser*, int>::Grow
// callers: CAI_Expresser::SetOuter, CAI_Expresser::CAI_Expresser
void __fastcall CResponseQueue::AddExpresser(CResponseQueue *const this, CAI_Expresser *pExpresser)
{
  __int64 m_Size; // r13
  int v5; // eax
  CAI_Expresser **v6; // rax
  CAI_Expresser *pExpressera; // [rsp+8h] [rbp-28h] BYREF

  pExpressera = pExpresser;
  if ( pExpresser != 0
    && pExpresser->m_pOuter != 0
    && CUtlVectorBase<CAI_Expresser *,CUtlMemory<CAI_Expresser *,int>>::Find(&this->m_ExpresserTargets, &pExpressera) < 0 )
  {
    m_Size = this->m_ExpresserTargets.m_Size;
    v5 = this->m_ExpresserTargets.m_Size;
    if ( m_Size == this->m_ExpresserTargets.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CAI_Expresser *,int>::Grow(&this->m_ExpresserTargets.m_Memory, 1);
      v5 = this->m_ExpresserTargets.m_Size;
    }
    this->m_ExpresserTargets.m_Size = v5 + 1;
    v6 = &this->m_ExpresserTargets.m_Memory.m_pMemory[m_Size];
    if ( v6 != 0 )
      *v6 = pExpresser;
  }
}


// CResponseQueue::RemoveExpresser  (line 158, @0x0000000002169340, libserver.so)  // inlines: Element, FastRemove, memcpy, operator[]
// calls: CUtlVectorBase<CAI_Expresser*, CUtlMemory<CAI_Expresser*, int> >::Find
// callers: CAI_Expresser::~CAI_Expresser, CAI_Expresser::SetOuter
void __fastcall CResponseQueue::RemoveExpresser(CResponseQueue *const this, CAI_Expresser *pExpresser)
{
  int v3; // eax
  int m_Size; // edx
  int v5; // edx
  CAI_Expresser *pExpressera; // [rsp+8h] [rbp-18h] BYREF

  pExpressera = pExpresser;
  v3 = CUtlVectorBase<CAI_Expresser *,CUtlMemory<CAI_Expresser *,int>>::Find(&this->m_ExpresserTargets, &pExpressera);
  if ( v3 != -1 )
  {
    m_Size = this->m_ExpresserTargets.m_Size;
    if ( m_Size > 0 )
    {
      v5 = m_Size - 1;
      if ( v3 != v5 )
      {
        this->m_ExpresserTargets.m_Memory.m_pMemory[v3] = this->m_ExpresserTargets.m_Memory.m_pMemory[v5];
        v5 = this->m_ExpresserTargets.m_Size - 1;
      }
      this->m_ExpresserTargets.m_Size = v5;
    }
  }
}


// CResponseQueue::GetNumExpresserTargets  (line 172, @0x000000000214bda0, libserver.so)
// callers: CSpeechScriptBridge::Script_GetExpressers
int __fastcall CResponseQueue::GetNumExpresserTargets(const CResponseQueue *const this)
{
  return this->m_ExpresserTargets.m_Size;
}


// CResponseQueue::GetExpresserHost  (line 177, @0x000000000214bdb0, libserver.so)  // inlines: operator[]
// callers: CSpeechScriptBridge::Script_GetExpressers
CBaseEntity *__fastcall CResponseQueue::GetExpresserHost(const CResponseQueue *const this, int which)
{
  return this->m_ExpresserTargets.m_Memory.m_pMemory[which]->m_pOuter;
}


// InferExpresserFromBaseEntity  (line 184, @0x000000000214bdd0, libserver.so)
// calls: __dynamic_cast
// callers: CSpeechScriptBridge::Script_FindBestResponse, CSpeechScriptBridge::Script_CommitAIResponse, CResponseQueue::DispatchOneResponse_ThenANY, CResponseQueue::DispatchOneResponse
// globals: `typeinfo for'CBaseMultiplayerPlayer, `typeinfo for'CBaseEntity
CAI_Expresser *__fastcall InferExpresserFromBaseEntity(CBaseEntity *pEnt)
{
  void *v2; // rax
  void *v4; // rax

  if ( pEnt == 0 )
    return 0;
  v2 = __dynamic_cast(pEnt, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseMultiplayerPlayer, 0);
  if ( v2 != 0 )
    return (*(*v2 + 4176LL))(v2);
  v4 = __dynamic_cast(pEnt, &`typeinfo for'CBaseEntity, &`typeinfo for'CFlexExpresser, 0);
  if ( v4 != 0 )
    return *(v4 + 1201);
  else
    return 0;
}


// CResponseQueue::CDeferredResponse::Quash  (line 213, @0x000000000214be50, libserver.so)  // inlines: operator=
void __fastcall CResponseQueue::CDeferredResponse::Quash(CResponseQueue::CDeferredResponse *const this)
{
  this->m_Target.m_iTargetType = DeferredResponseTarget_t::kDRT_MAX;
  this->m_Target.m_hHandle.m_Index = -1;
  this->m_fDispatchTime = 0.0;
}


// CResponseQueue::DispatchOneResponse  (line 219, @0x0000000002168e60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetExpresserHost, GetFloat, GetInstance, IndexToIdentity, IsValid, LengthSqr, LookupEntity, VectorSubtract, operator CEntityInstance*, operator-, operator=
// calls: CFlexExpresser::AsFlexExpresser, CResponseQueue::DispatchOneResponse_ThenANY, InferExpresserFromBaseEntity, CResponseCriteriaSet::CResponseCriteriaSet, CAI_Expresser::GatherCriteria, CResponseCriteriaSet::Merge, CAI_Expresser::Speak, CResponseCriteriaSet::~CResponseCriteriaSet, CBaseEntity::GetAbsOrigin, UTIL_VarArgs, CResponseCriteriaSet::AppendCriteria, CRR_Response::CRR_Response (17 total)
// callers: CResponseQueue::PerFrameDispatch
// strings: "dist_from_issuer"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CResponseQueue::DispatchOneResponse(
        CResponseQueue *const this,
        CResponseQueue::CDeferredResponse *const response)
{
  CBaseFlex *m_pInstance; // r14
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CFlexExpresser *v8; // rax
  float m_flThenAnyMaxDist; // xmm0_4
  DeferredResponseTarget_t m_iTargetType; // eax
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CAI_Expresser *v15; // r13
  AIConcept_t *p_m_concept; // r12
  const Vector *AbsOrigin; // rax
  int m_Size; // eax
  unsigned __int64 v19; // rbx
  CAI_Expresser *v20; // rax
  CBaseEntity *m_pOuter; // r12
  const Vector *v22; // rax
  CAI_Expresser *v23; // r13
  char *v24; // rax
  char v25; // al
  char v26; // cl
  CResponseQueue::DeferredContexts_t *deferredCriteria; // [rsp+0h] [rbp-280h]
  AIConcept_t *concept; // [rsp+8h] [rbp-278h]
  bool bSaidAnything; // [rsp+23h] [rbp-25Dh]
  float z; // [rsp+24h] [rbp-25Ch]
  float y; // [rsp+28h] [rbp-258h]
  float x; // [rsp+2Ch] [rbp-254h]
  __int64 v33; // [rsp+30h] [rbp-250h]
  float followupMaxDistSq; // [rsp+38h] [rbp-248h]
  float distIssuerToTargetSq; // [rsp+3Ch] [rbp-244h]
  CResponseCriteriaSet characterCriteria; // [rsp+40h] [rbp-240h] BYREF
  AI_Response prospectiveResponse; // [rsp+80h] [rbp-200h] BYREF
  unsigned __int64 v38; // [rsp+248h] [rbp-38h]

  m_pInstance = 0;
  v38 = __readfsqword(0x28u);
  deferredCriteria = &response->m_contexts;
  m_Index = response->m_hIssuer.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(response->m_hIssuer.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[response->m_hIssuer.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  v8 = CFlexExpresser::AsFlexExpresser(m_pInstance);
  if ( v8 != 0 )
  {
    m_flThenAnyMaxDist = v8->m_flThenAnyMaxDist;
    if ( m_flThenAnyMaxDist <= 0.0 )
      followupMaxDistSq = 3.4028235e38;
    else
      followupMaxDistSq = m_flThenAnyMaxDist * m_flThenAnyMaxDist;
  }
  else
  {
    followupMaxDistSq = rr_followup_maxdist.m_pParent->m_Value.m_fValue
                      * rr_followup_maxdist.m_pParent->m_Value.m_fValue;
  }
  m_iTargetType = response->m_Target.m_iTargetType;
  if ( m_iTargetType != DeferredResponseTarget_t::kDRT_ALL )
  {
    if ( m_iTargetType == DeferredResponseTarget_t::kDRT_SPECIFIC )
    {
      v12 = response->m_Target.m_hHandle.m_Index;
      if ( v12 + 2 > 1 )
      {
        v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(response->m_Target.m_hHandle.m_Index) >> 9)
                                                             & 0x3F];
        if ( v13 != 0 )
        {
          v14 = &v13[response->m_Target.m_hHandle.m_Index & 0x1FF];
          if ( v14 != 0 && v12 == v14->m_EHandle.m_Index && v14->m_pInstance != 0 )
          {
            v15 = InferExpresserFromBaseEntity(v14->m_pInstance);
            if ( v15 != 0 )
            {
              p_m_concept = &response->m_concept;
              CResponseCriteriaSet::CResponseCriteriaSet(&characterCriteria);
              CAI_Expresser::GatherCriteria(v15, &characterCriteria, p_m_concept, 0);
              CResponseCriteriaSet::Merge(&characterCriteria, deferredCriteria);
              CAI_Expresser::Speak(v15, p_m_concept, &characterCriteria, 0, 0, 0);
              CResponseCriteriaSet::~CResponseCriteriaSet(&characterCriteria);
              return 1;
            }
          }
        }
      }
    }
    else if ( m_iTargetType == DeferredResponseTarget_t::kDRT_ANY )
    {
      return CResponseQueue::DispatchOneResponse_ThenANY(
               this,
               response,
               deferredCriteria,
               m_pInstance,
               followupMaxDistSq);
    }
    return 0;
  }
  if ( m_pInstance != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    x = AbsOrigin->x;
    y = AbsOrigin->y;
    z = AbsOrigin->z;
  }
  m_Size = this->m_ExpresserTargets.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v19 = 0;
  bSaidAnything = 0;
  v33 = 8LL * (m_Size - 1) + 8;
  concept = &response->m_concept;
  do
  {
    while ( 1 )
    {
      v20 = this->m_ExpresserTargets.m_Memory.m_pMemory[v19 / 8];
      m_pOuter = v20->m_pOuter;
      if ( m_pInstance == 0 )
      {
        distIssuerToTargetSq = 0.0;
        break;
      }
      v22 = CBaseEntity::GetAbsOrigin(v20->m_pOuter);
      distIssuerToTargetSq = ((v22->z - z) * (v22->z - z))
                           + (((v22->y - y) * (v22->y - y)) + ((v22->x - x) * (v22->x - x)));
      if ( distIssuerToTargetSq <= followupMaxDistSq )
        break;
LABEL_25:
      v19 += 8LL;
      if ( v19 == v33 )
        return bSaidAnything;
    }
    v23 = InferExpresserFromBaseEntity(m_pOuter);
    if ( v23 == 0 || m_pOuter == m_pInstance )
      goto LABEL_25;
    CResponseCriteriaSet::CResponseCriteriaSet(&characterCriteria);
    CAI_Expresser::GatherCriteria(v23, &characterCriteria, concept, 0);
    CResponseCriteriaSet::Merge(&characterCriteria, deferredCriteria);
    if ( m_pInstance != 0 )
    {
      v24 = UTIL_VarArgs("%f", sqrt(distIssuerToTargetSq));
      CResponseCriteriaSet::AppendCriteria(&characterCriteria, "dist_from_issuer", v24, 1.0);
    }
    CRR_Response::CRR_Response(&prospectiveResponse);
    if ( CAI_Expresser::FindResponse(v23, &prospectiveResponse, concept, &characterCriteria) )
    {
      v25 = (*(v23->_vptr_IResponseFilter + 2))(v23, concept, &prospectiveResponse, deferredCriteria, 0);
      v26 = bSaidAnything;
      if ( v25 != 0 )
        v26 = 1;
      bSaidAnything = v26;
    }
    v19 += 8LL;
    CRR_Response::~CRR_Response(&prospectiveResponse);
    CResponseCriteriaSet::~CResponseCriteriaSet(&characterCriteria);
  }
  while ( v19 != v33 );
  return bSaidAnything;
}


// CResponseQueue::DispatchOneResponse_ThenANY  (line 338, @0x000000000214be70, libserver.so)  // inlines: GetExpresserHost, GetFloat, LengthSqr, VectorSubtract, fpmax, operator-, operator=
// calls: CBaseEntity::GetAbsOrigin, CRR_Response::CRR_Response, InferExpresserFromBaseEntity, CResponseCriteriaSet::CResponseCriteriaSet, CAI_Expresser::GatherCriteria, CResponseCriteriaSet::Merge, UTIL_VarArgs, CResponseCriteriaSet::AppendCriteria, CAI_Expresser::FindResponse, CRR_Response::~CRR_Response, CResponseCriteriaSet::~CResponseCriteriaSet, RandomInt (16 total)
// callers: CResponseQueue::DispatchOneResponse
// strings: "dist_from_issuer"
__int64 __fastcall CResponseQueue::DispatchOneResponse_ThenANY(
        CResponseQueue *const this,
        CResponseQueue::CDeferredResponse *const response,
        CResponseCriteriaSet *pDeferredCriteria,
        CBaseFlex *pIssuer,
        float followupMaxDistSq)
{
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm7_4
  vec_t y; // xmm6_4
  __int64 v10; // rbx
  CRR_Response *v11; // r12
  int m_Size; // eax
  unsigned __int64 v13; // r12
  __int64 v14; // r15
  CBaseFlex *m_pOuter; // rbx
  const Vector *v16; // rax
  char *v17; // rax
  __int64 v18; // rax
  CAI_Expresser *v19; // rdi
  unsigned int v20; // r13d
  CRR_Response *v21; // rbx
  CRR_Response *v22; // rdi
  __int64 v24; // rbx
  float v25; // xmm7_4
  char v26; // [rsp+0h] [rbp-11C0h] BYREF
  CResponseQueue::CDeferredResponse *responsea; // [rsp+E8h] [rbp-10D8h]
  CRR_Response *v28; // [rsp+F0h] [rbp-10D0h]
  int numExFound; // [rsp+F8h] [rbp-10C8h]
  float m_fValue; // [rsp+FCh] [rbp-10C4h]
  CResponseCriteriaSet *pDeferredCriteriaa; // [rsp+100h] [rbp-10C0h]
  AIConcept_t *concept; // [rsp+108h] [rbp-10B8h]
  float bestScore; // [rsp+110h] [rbp-10B0h]
  float v34; // [rsp+114h] [rbp-10ACh]
  float v35; // [rsp+118h] [rbp-10A8h]
  float x; // [rsp+11Ch] [rbp-10A4h]
  CRR_Response *outResponse; // [rsp+120h] [rbp-10A0h]
  float followupMaxDistSqa; // [rsp+128h] [rbp-1098h]
  float distIssuerToTargetSq; // [rsp+12Ch] [rbp-1094h]
  CAI_Expresser *pEx; // [rsp+130h] [rbp-1090h]
  CResponseCriteriaSet *outputSet; // [rsp+138h] [rbp-1088h]
  CResponseCriteriaSet characterCriteria; // [rsp+140h] [rbp-1080h] BYREF
  CAI_Expresser *pBestEx[8]; // [rsp+180h] [rbp-1040h]
  CRR_Response responseToSay[8]; // [rsp+1C0h] [rbp-1000h] BYREF
  AI_Response prospectiveResponse; // [rsp+FC0h] [rbp-200h] BYREF
  unsigned __int64 v46; // [rsp+1188h] [rbp-38h]

  responsea = response;
  v46 = __readfsqword(0x28u);
  pDeferredCriteriaa = pDeferredCriteria;
  followupMaxDistSqa = followupMaxDistSq;
  m_fValue = rr_thenany_score_slop.m_pParent->m_Value.m_fValue;
  if ( pIssuer != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(pIssuer);
    z = AbsOrigin->z;
    x = AbsOrigin->x;
    y = AbsOrigin->y;
    v34 = z;
    v35 = y;
  }
  v10 = 7;
  v28 = responseToSay;
  v11 = responseToSay;
  do
  {
    CRR_Response::CRR_Response(v11);
    --v10;
    ++v11;
  }
  while ( v10 != -1 );
  m_Size = this->m_ExpresserTargets.m_Size;
  if ( m_Size <= 0 )
    goto LABEL_33;
  numExFound = 0;
  v13 = 0;
  v14 = 8LL * (m_Size - 1) + 8;
  bestScore = 0.0;
  outputSet = &characterCriteria;
  concept = &responsea->m_concept;
  outResponse = &prospectiveResponse;
  do
  {
    m_pOuter = this->m_ExpresserTargets.m_Memory.m_pMemory[v13 / 8]->m_pOuter;
    if ( pIssuer != m_pOuter && (*(m_pOuter->_vptr_IHandleEntity + 139))(m_pOuter) != 0 )
    {
      if ( pIssuer != 0 )
      {
        v16 = CBaseEntity::GetAbsOrigin(m_pOuter);
        distIssuerToTargetSq = ((v16->z - v34) * (v16->z - v34))
                             + (((v16->y - v35) * (v16->y - v35)) + ((v16->x - x) * (v16->x - x)));
        if ( distIssuerToTargetSq > followupMaxDistSqa )
          goto LABEL_22;
      }
      else
      {
        distIssuerToTargetSq = 0.0;
      }
      pEx = InferExpresserFromBaseEntity(m_pOuter);
      if ( pEx != 0 )
      {
        CResponseCriteriaSet::CResponseCriteriaSet(outputSet);
        CAI_Expresser::GatherCriteria(pEx, outputSet, concept, 0);
        CResponseCriteriaSet::Merge(outputSet, pDeferredCriteriaa);
        (*(m_pOuter->_vptr_IHandleEntity + 160))(m_pOuter, outputSet);
        if ( pIssuer != 0 )
        {
          v17 = UTIL_VarArgs("%f", sqrt(distIssuerToTargetSq));
          CResponseCriteriaSet::AppendCriteria(outputSet, "dist_from_issuer", v17, 1.0);
        }
        CRR_Response::CRR_Response(outResponse);
        if ( CAI_Expresser::FindResponse(pEx, outResponse, concept, outputSet) )
        {
          distIssuerToTargetSq = prospectiveResponse.m_fMatchScore;
          if ( prospectiveResponse.m_fMatchScore > 0.0 && prospectiveResponse.m_szResponseName[0] != 0 )
          {
            if ( distIssuerToTargetSq > (bestScore + m_fValue) )
            {
              CRR_Response::operator=(v28, outResponse);
              numExFound = 1;
              bestScore = distIssuerToTargetSq;
              pBestEx[0] = pEx;
            }
            else if ( distIssuerToTargetSq >= (bestScore - m_fValue) && numExFound <= 7 )
            {
              v24 = numExFound;
              CRR_Response::operator=(&v28[numExFound], outResponse);
              v25 = fmaxf(distIssuerToTargetSq, bestScore);
              ++numExFound;
              pBestEx[v24] = pEx;
              bestScore = v25;
            }
          }
        }
        CRR_Response::~CRR_Response(outResponse);
        CResponseCriteriaSet::~CResponseCriteriaSet(outputSet);
      }
    }
LABEL_22:
    v13 += 8LL;
  }
  while ( v13 != v14 );
  if ( numExFound == 0 )
    goto LABEL_33;
  if ( numExFound == 1 )
  {
    v18 = 0;
    v19 = pBestEx[0];
    if ( pBestEx[0] == 0 )
      goto LABEL_33;
LABEL_26:
    v20 = (*(v19->_vptr_IResponseFilter + 2))(v19, &responsea->m_concept, &v28[v18], pDeferredCriteriaa, 0);
  }
  else
  {
    v18 = RandomInt(0, (numExFound - 1));
    v19 = pBestEx[v18];
    if ( v19 != 0 )
      goto LABEL_26;
LABEL_33:
    v20 = 0;
  }
  v21 = v28 + 7;
  do
  {
    v22 = v21--;
    CRR_Response::~CRR_Response(v22);
  }
  while ( v21 != &v26 );
  return v20;
}


// CResponseQueue::Evacuate  (line 448, @0x00000000021693a0, libserver.so)
// calls: CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> > >::RemoveAll
void __fastcall CResponseQueue::Evacuate(CResponseQueue *const this)
{
  CUtlLinkedList<CResponseQueue::CDeferredResponse,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>>::RemoveAll(&this->m_Queue);
}


// CResponseQueueManager::GameInit  (line 461, @0x0000000002172330, libserver.so)
// calls: operator new, CResponseQueue::CResponseQueue, operator delete, _Unwind_Resume
void __fastcall CResponseQueueManager::GameInit(CResponseQueueManager *const this, const EventGameInit_t *const msg)
{
  CResponseQueue *v3; // r12

  if ( this->m_pQueue == 0 )
  {
    v3 = operator new(0x70u);
    CResponseQueue::CResponseQueue(v3, 64);
    this->m_pQueue = v3;
  }
}


// CResponseQueueManager::~CResponseQueueManager  (line 469, @0x0000000002172420, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CResponseQueue, ~CUtlFixedLinkedList, ~CUtlFixedMemory, ~CUtlLinkedList, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> > >::RemoveAll, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> >::Purge, operator delete, IGameSystem::~IGameSystem, CUtlMemory<CAI_Expresser*, int>::Purge
// callers: CResponseQueueManager::~CResponseQueueManager
void __fastcall CResponseQueueManager::~CResponseQueueManager(CResponseQueueManager *const this)
{
  CResponseQueue *m_pQueue; // r12
  bool v3; // zf

  this->_vptr_IGameSystem = off_4001810;  // vptr: CResponseQueueManager
  m_pQueue = this->m_pQueue;
  if ( m_pQueue != 0 )
  {
    v3 = (m_pQueue->m_ExpresserTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    m_pQueue->m_ExpresserTargets.m_Size = 0;
    m_pQueue->_vptr_CResponseQueue = &off_4000260;
    if ( v3 )
    {
      CUtlMemory<CAI_Expresser *,int>::Purge(&m_pQueue->m_ExpresserTargets.m_Memory);
      if ( (m_pQueue->m_ExpresserTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CAI_Expresser *,int>::Purge(&m_pQueue->m_ExpresserTargets.m_Memory);
    }
    CUtlLinkedList<CResponseQueue::CDeferredResponse,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>>::RemoveAll(&m_pQueue->m_Queue);
    CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>::Purge(&m_pQueue->m_Queue.m_Memory);
    operator delete(m_pQueue);
    this->m_pQueue = 0;
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CResponseQueueManager::~CResponseQueueManager  (line 469, @0x00000000021724d0, libserver.so)
// calls: CResponseQueueManager::~CResponseQueueManager, operator delete
void __fastcall CResponseQueueManager::~CResponseQueueManager(CResponseQueueManager *const this)
{
  CResponseQueueManager::~CResponseQueueManager(this);
  operator delete(this);
}


// CResponseQueueManager::GameDeactivate  (line 478, @0x00000000021693b0, libserver.so)  // inlines: Evacuate
// calls: CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> > >::RemoveAll
void __fastcall CResponseQueueManager::GameDeactivate(
        CResponseQueueManager *const this,
        const EventGameDeactivate_t *const msg)
{
  CResponseQueue *m_pQueue; // rdi

  m_pQueue = this->m_pQueue;
  if ( m_pQueue != 0 )
    CUtlLinkedList<CResponseQueue::CDeferredResponse,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>>::RemoveAll(&m_pQueue->m_Queue);
}


// CResponseQueueManager::GameShutdown  (line 486, @0x0000000002172390, libserver.so)  // inlines: Purge, RemoveAll, ~CResponseQueue, ~CUtlFixedLinkedList, ~CUtlFixedMemory, ~CUtlLinkedList, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> > >::RemoveAll, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> >::Purge, operator delete, CUtlMemory<CAI_Expresser*, int>::Purge
void __fastcall CResponseQueueManager::GameShutdown(
        CResponseQueueManager *const this,
        const EventGameShutdown_t *const msg)
{
  CResponseQueue *m_pQueue; // rbx
  bool v4; // zf

  m_pQueue = this->m_pQueue;
  if ( m_pQueue != 0 )
  {
    v4 = (m_pQueue->m_ExpresserTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    m_pQueue->m_ExpresserTargets.m_Size = 0;
    m_pQueue->_vptr_CResponseQueue = &off_4000260;
    if ( v4 )
    {
      CUtlMemory<CAI_Expresser *,int>::Purge(&m_pQueue->m_ExpresserTargets.m_Memory);
      if ( (m_pQueue->m_ExpresserTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CAI_Expresser *,int>::Purge(&m_pQueue->m_ExpresserTargets.m_Memory);
    }
    CUtlLinkedList<CResponseQueue::CDeferredResponse,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>>::RemoveAll(&m_pQueue->m_Queue);
    CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse,long long>>::Purge(&m_pQueue->m_Queue.m_Memory);
    operator delete(m_pQueue);
    this->m_pQueue = 0;
  }
}


// CResponseQueueManager::FrameUpdatePostEntityThink  (line 496, @0x00000000021726b0, libserver.so)
// calls: CResponseQueue::PerFrameDispatch
void __fastcall CResponseQueueManager::FrameUpdatePostEntityThink(
        CResponseQueueManager *const this,
        const EventServerPostEntityThink_t *const msg)
{
  CResponseQueue::PerFrameDispatch(this->m_pQueue);
}


// CResponseQueueManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 504, @0x000000000214c3d0, libserver.so)
void __cdecl CResponseQueueManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


