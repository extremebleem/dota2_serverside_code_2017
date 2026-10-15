// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/querycache.cpp:242
struct QueryCacheUpdateRecord_t {
	int m_nStartHashChain;  // +0x0
	int m_nNumHashChainsToUpdate;  // +0x4

	QueryCacheUpdateRecord_t();

	// sizeof = 32
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// QueryCacheKey_t::ComputeHashIndex  (line 52, @0x000000000235dfb0, libserver.so)
void __fastcall QueryCacheKey_t::ComputeHashIndex(QueryCacheKey_t *const this)
{
  int m_nNumValidPoints; // esi
  EQueryType_t m_Type; // ecx
  __int64 v3; // rax
  uint32 v4; // edx

  m_nNumValidPoints = this->m_nNumValidPoints;
  m_Type = this->m_Type;
  if ( m_nNumValidPoints > 0 )
  {
    v3 = 0;
    do
    {
      v4 = this->m_pEntities[v3].m_Index + this->m_nOffsetMode[v3];
      ++v3;
      LOWORD(m_Type) = v4 + m_Type;
    }
    while ( m_nNumValidPoints > v3 );
  }
  this->m_nHashIdx = (LOWORD(this->m_nTraceMask) + LOWORD(this->m_flMinimumUpdateInterval) + m_Type) & 0x7FF;
}


// QueryCacheKey_t::Matches  (line 185, @0x000000000235dff0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator!=<CBaseEntity>
// callers: IsLineOfSightBetweenTwoEntitiesClear
// globals: CEntityHandle::gm_pEntityList
bool __fastcall QueryCacheKey_t::Matches(const QueryCacheKey_t *const this, const QueryCacheKey_t *pNode)
{
  bool result; // al
  int m_nNumValidPoints; // r11d
  CHandle<CBaseEntity> *m_pEntities; // rcx
  __int64 v5; // rax
  CHandle<CBaseEntity> *i; // rdx
  CEntityInstance *m_pInstance; // r10
  CEntityIdentity *v8; // r9
  CEntityIdentity *v9; // r9
  CEntityInstance *v10; // r12
  CEntityIdentity *v11; // r9
  CEntityIdentity *v12; // r9

  result = 0;
  if ( pNode->m_Type == this->m_Type
    && pNode->m_nTraceMask == this->m_nTraceMask
    && pNode->m_pTraceFilterFunction == this->m_pTraceFilterFunction )
  {
    m_nNumValidPoints = pNode->m_nNumValidPoints;
    if ( m_nNumValidPoints == this->m_nNumValidPoints )
    {
      if ( pNode->m_flMinimumUpdateInterval == this->m_flMinimumUpdateInterval )
      {
        if ( m_nNumValidPoints <= 0 )
          return 1;
        m_pEntities = this->m_pEntities;
        v5 = 0;
        for ( i = pNode->m_pEntities; ; ++i )
        {
          m_pInstance = 0;
          if ( i->m_Index + 2 > 1 )
          {
            v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(i->m_Index) >> 9) & 0x3F];
            if ( v8 != 0 )
            {
              v9 = &v8[i->m_Index & 0x1FF];
              if ( v9 != 0 && i->m_Index == v9->m_EHandle.m_Index )
                m_pInstance = v9->m_pInstance;
            }
          }
          v10 = 0;
          if ( m_pEntities->m_Index + 2 > 1 )
          {
            v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pEntities->m_Index) >> 9) & 0x3F];
            if ( v11 != 0 )
            {
              v12 = &v11[m_pEntities->m_Index & 0x1FF];
              if ( v12 != 0 && m_pEntities->m_Index == v12->m_EHandle.m_Index )
                v10 = v12->m_pInstance;
            }
          }
          if ( m_pInstance != v10 || pNode->m_nOffsetMode[v5] != this->m_nOffsetMode[v5] )
            break;
          ++v5;
          ++m_pEntities;
          if ( m_nNumValidPoints <= v5 )
            return 1;
        }
      }
      return 0;
    }
  }
  return result;
}


// CalculateOffsettedPosition  (line 206, @0x000000000235e150, libserver.so)  // inlines: EyePosition, Init, operator=
// callers: CBaseCombatCharacter::ComputeLOS, QueryCacheEntry_t::IssueQuery
void __fastcall CalculateOffsettedPosition(const CBaseEntity *pEntity, EEntityOffsetMode_t nMode, Vector *pVecOut)
{
  double v4; // xmm0_8
  vec_t v5; // xmm1_4
  double v6; // xmm0_8
  vec_t v7; // xmm1_4

  switch ( nMode )
  {
    case EEntityOffsetMode_t::EOFFSET_MODE_EYEPOSITION:
      v6 = (*(pEntity->_vptr_IHandleEntity + 164))(pEntity);
      pVecOut->z = v7;
      *&pVecOut->x = v6;
      return;
    case EEntityOffsetMode_t::EOFFSET_MODE_WORLDSPACE_CENTER:
      (*(pEntity->_vptr_IHandleEntity + 62))(pEntity);
      goto LABEL_8;
    case EEntityOffsetMode_t::EOFFSET_MODE_EYE_OR_DEATH_POSITION:
      v4 = (*(pEntity->_vptr_IHandleEntity + 164))(pEntity);
LABEL_8:
      pVecOut->z = v5;
      *&pVecOut->x = v4;
      return;
    case EEntityOffsetMode_t::EOFFSET_MODE_NONE:
      pVecOut->x = 0.0;
      pVecOut->y = 0.0;
      pVecOut->z = 0.0;
      break;
    default:
      break;
  }
}


// ProcessQueryCacheUpdate  (line 251, @0x000000000235e540, libserver.so)  // inlines: AddToDHeadWithTailPtr<QueryCacheEntry_t>, AddToHead, RemoveFromDList<QueryCacheEntry_t>, RemoveNode, ThreadInterlockedIncrement, curtime, operator++
// calls: QueryCacheEntry_t::IssueQuery
// globals: s_HashChains, s_WastedSpeculativeUpdates
void __fastcall ProcessQueryCacheUpdate(QueryCacheUpdateRecord_t *const workItem)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // rbx
  int v4; // r15d
  QueryCacheEntry_t *m_pHead; // rbx
  QueryCacheEntry_t *m_pNext; // r12
  float v7; // xmm1_4
  QueryCacheEntry_t *m_pPrev; // rax
  QueryCacheEntry_t *v9; // rax
  CUtlIntrusiveDList<QueryCacheEntry_t> *v10; // rax
  QueryCacheEntry_t *v11; // rdx
  bool v12; // zf
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v14; // [rsp-34h] [rbp-3Ch]

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
  v4 = 0;
  if ( workItem->m_nNumHashChainsToUpdate > 0 )
  {
    while ( 1 )
    {
      m_pHead = s_HashChains[v4 + workItem->m_nStartHashChain].m_pHead;
      if ( m_pHead != 0 )
        break;
LABEL_21:
      if ( workItem->m_nNumHashChainsToUpdate <= ++v4 )
        return;
    }
    while ( 1 )
    {
      m_pNext = m_pHead->m_pNext;
      v7 = m_flCurrentTime - m_pHead->m_flLastUpdateTime;
      if ( m_pHead->m_bUsedSinceUpdated )
        break;
      if ( v7 <= m_pHead->m_QueryParams.m_flMinimumUpdateInterval )
        goto LABEL_9;
      if ( m_pHead->m_bSpeculativelyDone )
        _InterlockedAdd(&s_WastedSpeculativeUpdates.m_value, 1u);
      m_pPrev = m_pHead->m_pPrev;
      m_pHead->m_QueryParams.m_Type = EQueryType_t::EQUERY_INVALID;
      if ( m_pPrev != 0 )
      {
        m_pPrev->m_pNext = m_pHead->m_pNext;
        if ( m_pHead->m_pNext != 0 )
          m_pHead->m_pNext->m_pPrev = m_pHead->m_pPrev;
      }
      else
      {
        v10 = &s_HashChains[m_pHead->m_QueryParams.m_nHashIdx];
        if ( m_pHead == v10->m_pHead )
        {
          v11 = m_pHead->m_pNext;
          v12 = m_pHead->m_pNext == 0;
          v10->m_pHead = m_pHead->m_pNext;
          if ( !v12 )
            v11->m_pPrev = 0;
        }
      }
      m_pHead->m_pNext = 0;
      m_pHead->m_pPrev = 0;
      m_pHead->m_pNext = workItem->m_KilledList.m_pHead;
      v9 = workItem->m_KilledList.m_pHead;
      if ( v9 != 0 )
        v9->m_pPrev = m_pHead;
      else
        workItem->m_KilledList.m_pTailPtr = m_pHead;
      m_pHead->m_pPrev = 0;
      workItem->m_KilledList.m_pHead = m_pHead;
      if ( m_pNext == 0 )
        goto LABEL_21;
LABEL_10:
      m_pHead = m_pNext;
    }
    if ( v7 >= m_pHead->m_QueryParams.m_flMinimumUpdateInterval )
    {
      v14 = m_flCurrentTime;
      QueryCacheEntry_t::IssueQuery(m_pHead);
      m_pHead->m_bUsedSinceUpdated = 0;
      m_flCurrentTime = v14;
      m_pHead->m_bSpeculativelyDone = 1;
    }
LABEL_9:
    if ( m_pNext == 0 )
      goto LABEL_21;
    goto LABEL_10;
  }
}


// UpdateQueryCache  (line 293, @0x000000000236e010, libserver.so)  // inlines: AtomicAdd, CInterlockedIntT, CInterlockedPtr, CParallelProcessor, CParallelProcessorAbstract, CParallelProcessorAbstract_Base, CUtlIntrusiveDListWithTailPtr, Init, LockForWrite, ParallelProcess<QueryCacheUpdateRecord_t>, PrependDListWithTailToDList<QueryCacheEntry_t>, QueryCacheUpdateRecord_t, Run, ThreadInterlockedExchangeAdd, ThreadInterlockedExchangePointer, UnlockWrite, operator=
// calls: UpdateDirtySpatialPartitionEntities, ThreadGetCurrentId, ThreadInterlockedExchange64, CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >::Run, CThreadSyncObject::Wait(uint), CThreadEvent::Set(void), CThreadSemaphore::Release(int,int *), CThreadRWLock_FastRead::HandleFirstWriteLockTransition(void)
// callers: CSource2Server::GameFrame
// strings: "UpdateQueryCache"
// globals: g_bQueryCacheIsEmpty, s_CacheRWLock, ProcessQueryCacheUpdate(QueryCacheUpdateRecord_t &), s_VictimList
void __cdecl UpdateQueryCache()
{
  __int64 CurrentId; // rbx
  signed __int32 v1; // eax
  QueryCacheUpdateRecord_t *v2; // rdx
  QueryCacheUpdateRecord_t *v3; // rcx
  signed __int64 v4; // rcx
  int *v5; // rdx
  int i; // ecx
  _QWORD *v7; // r13
  bool v8; // zf
  int m_nMaxJobThreads; // eax
  QueryCacheEntry_t *m_pHead; // rdx
  QueryCacheUpdateRecord_t *v11; // rax
  signed __int32 v12; // eax
  CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1> > v13; // [rsp-78h] [rbp-198h] BYREF
  _QWORD v14[3]; // [rsp-48h] [rbp-168h] BYREF
  _QWORD v15[5]; // [rsp-30h] [rbp-150h] BYREF
  int v16; // [rsp-8h] [rbp-128h] BYREF
  int v17; // [rsp-4h] [rbp-124h] BYREF
  QueryCacheUpdateRecord_t workList[8]; // [rsp+0h] [rbp-120h] BYREF
  _BYTE v19[32]; // [rsp+100h] [rbp-20h] BYREF

  if ( !g_bQueryCacheIsEmpty )
  {
    UpdateDirtySpatialPartitionEntities();
    CurrentId = ThreadGetCurrentId();
    if ( CurrentId == qword_4B46648 )
    {
      ++dword_4B46650;
    }
    else
    {
      v1 = _InterlockedExchangeAdd(&s_CacheRWLock, 0x100000u);
      if ( (v1 & 0x7FF00000) != 0 )
      {
        CThreadSyncObject::Wait(&unk_4B464C8, 0xFFFFFFFF);
      }
      else if ( (v1 & 0x3FF) != 0 )
      {
        CThreadRWLock_FastRead::HandleFirstWriteLockTransition(&s_CacheRWLock);
      }
      qword_4B46648 = CurrentId;
      dword_4B46650 = 1;
    }
    v2 = workList;
    do
    {
      v3 = v2++;
      v4 = v3 - &v16;
      *(&v16 + v4) = 0;
      *(&workList[0].m_nStartHashChain + v4) = 0;
    }
    while ( v2 != v19 );
    v16 = 0;
    v5 = &v17;
    for ( i = 256; ; i += 256 )
    {
      *v5 = 256;
      v5 += 8;
      *(v5 - 1) = i;
      if ( i == 1792 )
        break;
    }
    BYTE4(v15[4]) = 0;
    *(&workList[6].m_KilledList.m_mutex + 1) = 256;
    v15[3] = "UpdateQueryCache";
    v15[0] = 0;
    HIDWORD(v15[2]) = 0;
    LODWORD(v15[4]) = 0x7FFFFFFF;
    v14[0] = ProcessQueryCacheUpdate;
    v14[1] = 0;
    v14[2] = 0;
    ThreadInterlockedExchange64(v15, &v16);
    v13.m_nQueuedJobs.m_value = 0;
    v15[1] = &workList[7].m_KilledList.m_mutex;
    LODWORD(v15[2]) = -1;
    LODWORD(v15[4]) = 0x7FFFFFFF;
    v13.m_pJobs = 0;
    v13.m_nActiveWorkers.m_value = 0;
    v7 = g_pThreadPool;
    v13.m_pThreadPool = g_pThreadPool;
    if ( g_pThreadPool == 0 )
      goto LABEL_26;
    v13.m_nMaxJobThreads = (*(*g_pThreadPool + 56LL))(g_pThreadPool);
    v8 = (*(*v7 + 72LL))(v7) == 0;
    m_nMaxJobThreads = v13.m_nMaxJobThreads;
    if ( !v8 )
      m_nMaxJobThreads = --v13.m_nMaxJobThreads;
    if ( m_nMaxJobThreads < 0 )
LABEL_26:
      v13.m_nMaxJobThreads = 0;
    v13.m_pController = v14;
    CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1>>::Run(&v13);
    m_pHead = s_VictimList.m_pHead;
    v11 = workList;
    do
    {
      if ( *&v11->m_nStartHashChain != 0 )
      {
        v11->m_KilledList.m_pHead->m_pNext = m_pHead;
        if ( m_pHead != 0 )
          m_pHead->m_pPrev = v11->m_KilledList.m_pHead;
        m_pHead = *&v11->m_nStartHashChain;
      }
      ++v11;
    }
    while ( v19 != v11 );
    v8 = dword_4B46650-- == 1;
    s_VictimList.m_pHead = m_pHead;
    if ( v8 )
    {
      qword_4B46648 = 0;
      v12 = _InterlockedExchangeAdd(&s_CacheRWLock, 0xFFF00000);
      if ( (v12 & 0x7FF00000) == 0x100000 )
      {
        if ( (v12 & 0xFFC00) != 0 )
          CThreadEvent::Set(&unk_4B465C8);
      }
      else
      {
        CThreadSemaphore::Release(&unk_4B464C8, 1, 0);
      }
    }
  }
}


// InvalidateQueryCache  (line 333, @0x000000000235e200, libserver.so)  // inlines: AddToDHead<QueryCacheEntry_t>, AddToHead, AtomicAdd, LockForWrite, RemoveAll, ThreadInterlockedExchangeAdd, UnlockWrite
// calls: ThreadGetCurrentId, CThreadSemaphore::Release(int,int *), CThreadSyncObject::Wait(uint), CThreadEvent::Set(void), CThreadRWLock_FastRead::HandleFirstWriteLockTransition(void)
// callers: CSource1GameConfiguration::ShutdownGameSession, CSource2Server::Init
// globals: s_CacheRWLock, s_HashChains, s_VictimList, s_QCache, g_bQueryCacheIsEmpty
void __cdecl InvalidateQueryCache()
{
  __int64 CurrentId; // rbx
  signed __int32 v1; // eax
  CUtlIntrusiveDList<QueryCacheEntry_t> *v2; // rax
  QueryCacheKey_t *p_m_QueryParams; // rcx
  __int64 v4; // rdi
  QueryCacheEntry_t *v5; // rdx
  __int64 v6; // rsi
  QueryCacheEntry_t *v7; // rax
  bool v8; // zf
  signed __int32 v9; // eax

  CurrentId = ThreadGetCurrentId();
  if ( CurrentId == qword_4B46648 )
  {
    ++dword_4B46650;
  }
  else
  {
    v1 = _InterlockedExchangeAdd(&s_CacheRWLock, 0x100000u);
    if ( (v1 & 0x7FF00000) != 0 )
    {
      CThreadSyncObject::Wait(&unk_4B464C8, 0xFFFFFFFF);
    }
    else if ( (v1 & 0x3FF) != 0 )
    {
      CThreadRWLock_FastRead::HandleFirstWriteLockTransition(&s_CacheRWLock);
    }
    qword_4B46648 = CurrentId;
    dword_4B46650 = 1;
  }
  v2 = s_HashChains;
  do
  {
    v2->m_pHead = 0;
    ++v2;
  }
  while ( v2 != &s_VictimList );
  p_m_QueryParams = &s_QCache[0].m_QueryParams;
  v4 = 1;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    p_m_QueryParams->m_Type = EQueryType_t::EQUERY_INVALID;
    v7 = &s_QCache[v6];
    v7->m_pNext = v5;
    if ( v5 != 0 )
      v5->m_pPrev = v7;
    p_m_QueryParams = (p_m_QueryParams + 120);
    v7->m_pPrev = 0;
    if ( v4 == 1024 )
      break;
    v6 = v4++;
    v5 = v7;
  }
  v8 = dword_4B46650-- == 1;
  s_VictimList.m_pHead = &s_QCache[v6];
  g_bQueryCacheIsEmpty = 1;
  if ( v8 )
  {
    qword_4B46648 = 0;
    v9 = _InterlockedExchangeAdd(&s_CacheRWLock, 0xFFF00000);
    if ( (v9 & 0x7FF00000) == 0x100000 )
    {
      if ( (v9 & 0xFFC00) != 0 )
        CThreadEvent::Set(&unk_4B465C8);
    }
    else
    {
      CThreadSemaphore::Release(&unk_4B464C8, 1, 0);
    }
  }
}


// QueryCacheEntry_t::IssueQuery  (line 351, @0x00000000023521f0, libserver.so)  // inlines: CGameTrace, DidHit, EnableInteractsWith, Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, IndexToIdentity, Init, IsValid, LengthSqr, LookupEntity, Ray_t, RnCollisionAttr_t, ThreadInterlockedIncrement, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, curtime, operator CBaseEntity*, operator CEntityInstance*, operator++
// calls: CTraceFilterSimple::CTraceFilterSimple, CGameTrace::Init, CGamePhysicsQueryInterface::TraceRay, CEntityHandle::operator CEntityInstance*
// callers: QueryCacheEntry_t::IssueQuery
// globals: CEntityHandle::gm_pEntityList, s_nNumCacheMisses
void __fastcall QueryCacheEntry_t::IssueQuery(QueryCacheEntry_t *const this)
{
  const CBaseEntity *m_pInstance; // rsi
  uint32 m_Index; // eax
  bool (*m_pTraceFilterFunction)(CBaseEntity *, uint64); // rcx
  int m_nCollisionGroup; // edx
  CEntityIdentity *v6; // rdi
  CEntityIdentity *v7; // rdi
  ConVar *m_pParent; // rax
  float x; // xmm6_4
  float y; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float z; // xmm4_4
  uint64 m_nTraceMask; // rdx
  float v15; // xmm2_4
  float m_flCurrentTime; // xmm0_4
  char v17; // al
  CGlobalVars *v18; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBaseEntity *m_pEnt; // r12
  CEntityInstance *v21; // rax
  CTraceFilterSimple filter; // [rsp+10h] [rbp-150h] BYREF
  Ray_t ray; // [rsp+50h] [rbp-110h] BYREF
  trace_t result; // [rsp+A0h] [rbp-C0h] BYREF

  m_pInstance = 0;
  m_Index = this->m_QueryParams.m_pEntities[2].m_Index;
  m_pTraceFilterFunction = this->m_QueryParams.m_pTraceFilterFunction;
  m_nCollisionGroup = this->m_QueryParams.m_nCollisionGroup;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_QueryParams.m_pEntities[2].m_Index) >> 9)
                                                        & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_QueryParams.m_pEntities[2].m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  CTraceFilterSimple::CTraceFilterSimple(&filter, m_pInstance, m_nCollisionGroup, m_pTraceFilterFunction);
  memset(&result.m_ShapeAttributes, 0, 31);
  result.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&result);
  _InterlockedAdd(&s_nNumCacheMisses.m_value, 1u);
  m_pParent = phys_traceline_radius.m_pParent;
  x = this->m_QueryParams.m_Points[0].x;
  ray.m_Start.w = 0.0;
  y = this->m_QueryParams.m_Points[0].y;
  memset(&ray.m_Delta.w, 0, 36);
  v11 = this->m_QueryParams.m_Points[1].y;
  ray.m_flRadius = m_pParent->m_Value.m_fValue;
  v12 = this->m_QueryParams.m_Points[1].x;
  z = this->m_QueryParams.m_Points[0].z;
  ray.m_IsRay = 1;
  m_nTraceMask = this->m_QueryParams.m_nTraceMask;
  v15 = this->m_QueryParams.m_Points[1].z;
  ray.m_Delta.y = v11 - y;
  ray.m_Delta.x = v12 - x;
  ray.m_Delta.z = v15 - z;
  ray.m_Start.x = x;
  ray.m_Start.y = y;
  ray.m_Start.z = z;
  filter.m_attr.m_nInteractsWith |= m_nTraceMask;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &result);
  m_flCurrentTime = 0.0;
  if ( this->m_QueryParams.m_Type == EQueryType_t::EQUERY_ENTITY_LOS_CHECK_EXCLUDE_DESTINATION )
  {
    if ( result.fraction < 1.0 || (v17 = 1, result.startsolid) )
    {
      m_pEnt = result.m_pEnt;
      v21 = CEntityHandle::operator CEntityInstance *(&this->m_QueryParams.m_pEntities[1]);
      m_flCurrentTime = 0.0;
      v17 = m_pEnt == v21;
    }
  }
  else
  {
    v17 = 0;
    if ( result.fraction >= 1.0 )
      v17 = !result.startsolid;
  }
  this->m_bResult = v17;
  v18 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v18->m_flCurrentTime;
  }
  this->m_flLastUpdateTime = m_flCurrentTime;
}


// QueryCacheEntry_t::IssueQuery  (line 351, @0x000000000235e390, libserver.so)  // inlines: AddToDHead<QueryCacheEntry_t>, AddToHead, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, RemoveFromDList<QueryCacheEntry_t>, RemoveNode, operator CBaseEntity*, operator CEntityInstance*
// calls: QueryCacheEntry_t::IssueQuery, CalculateOffsettedPosition
// callers: ProcessQueryCacheUpdate, IsLineOfSightBetweenTwoEntitiesClear
// globals: CEntityHandle::gm_pEntityList, s_VictimList, s_HashChains
void __fastcall QueryCacheEntry_t::IssueQuery(QueryCacheEntry_t *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // rsi
  CHandle<CBaseEntity> *m_pEntities; // rcx
  QueryCacheEntry_t *v5; // r12
  CHandle<CBaseEntity> *v6; // r13
  int v7; // r14d
  Vector *m_Points; // r15
  int v9; // ecx
  int v10; // edx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  QueryCacheEntry_t *m_pPrev; // rax
  QueryCacheEntry_t *m_pHead; // rax
  CUtlIntrusiveDList<QueryCacheEntry_t> *v15; // rax
  QueryCacheEntry_t *m_pNext; // rdx
  bool v17; // zf

  if ( this->m_QueryParams.m_nNumValidPoints <= 0 )
  {
LABEL_16:
    QueryCacheEntry_t::IssueQuery(this);
  }
  else
  {
    m_Index = this->m_QueryParams.m_pEntities[0].m_Index;
    v3 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 > 1 )
    {
      m_pEntities = this->m_QueryParams.m_pEntities;
      v5 = this;
      v6 = &this->m_QueryParams.m_pEntities[1];
      v7 = 1 - this;
      m_Points = this->m_QueryParams.m_Points;
      do
      {
        if ( m_Index == -1 )
        {
          v10 = 63;
          LOWORD(v9) = 0x7FFF;
        }
        else
        {
          v9 = m_pEntities->m_Index & 0x7FFF;
          v10 = v9 >> 9;
        }
        v11 = v3->m_pIdentityChunks[v10];
        if ( v11 == 0 )
          break;
        v12 = &v11[v9 & 0x1FF];
        if ( v12 == 0 || m_Index != v12->m_EHandle.m_Index || v12->m_pInstance == 0 )
          break;
        CalculateOffsettedPosition(v12->m_pInstance, v5->m_QueryParams.m_nOffsetMode[0], m_Points);
        if ( this->m_QueryParams.m_nNumValidPoints <= v7 + v5 )
          goto LABEL_16;
        m_Index = v6->m_Index;
        m_pEntities = v6;
        v5 = (v5 + 1);
        ++v6;
        ++m_Points;
        v3 = CEntityHandle::gm_pEntityList;
      }
      while ( m_Index + 2 > 1 );
    }
    m_pPrev = this->m_pPrev;
    this->m_QueryParams.m_Type = EQueryType_t::EQUERY_INVALID;
    if ( m_pPrev != 0 )
    {
      m_pPrev->m_pNext = this->m_pNext;
      if ( this->m_pNext != 0 )
        this->m_pNext->m_pPrev = this->m_pPrev;
    }
    else
    {
      v15 = &s_HashChains[this->m_QueryParams.m_nHashIdx];
      if ( this == v15->m_pHead )
      {
        m_pNext = this->m_pNext;
        v17 = this->m_pNext == 0;
        v15->m_pHead = this->m_pNext;
        if ( !v17 )
          m_pNext->m_pPrev = 0;
      }
    }
    m_pHead = s_VictimList.m_pHead;
    this->m_pPrev = 0;
    this->m_pNext = m_pHead;
    if ( m_pHead != 0 )
      m_pHead->m_pPrev = this;
    this->m_pPrev = 0;
    s_VictimList.m_pHead = this;
  }
}


// IsLineOfSightBetweenTwoEntitiesClear  (line 390, @0x000000000235e6f0, libserver.so)  // inlines: AddToDHead<QueryCacheEntry_t>, AddToHead, AtomicAdd, CEntityHandle, CHandle, ComputeHashIndex, FindOrAllocateCachedResult, GetEHandle, GetEntryIndex, GetInt, GetSerialNumber, LockForRead, LockForWrite, QueryCacheKey_t, RemoveFromDList<QueryCacheEntry_t>, RemoveHead, RemoveNode, Set, ThreadInterlockedDecrement, ThreadInterlockedExchangeAdd, ThreadInterlockedIncrement, UnlockRead, UnlockWrite, curtime, operator++, operator--, operator=
// calls: CThreadRWLock_FastRead::UnlockReadAccounting(uint), QueryCacheKey_t::Matches, ThreadGetCurrentId, QueryCacheEntry_t::IssueQuery, CThreadSemaphore::Release(int,int *), CThreadRWLock_FastRead::WaitForReadLockTransition(uint), CThreadEvent::Set(void), CThreadSyncObject::Wait(uint), CThreadRWLock_FastRead::HandleFirstWriteLockTransition(void)
// callers: CBaseCombatCharacter::IsLineOfSightClear, CBaseCombatCharacter::ComputeLOS
// globals: s_nNumCacheQueries, s_CacheRWLock, s_HashChains, s_SuccessfulSpeculatives, s_VictimList, g_bQueryCacheIsEmpty, s_nReplaceCtr, s_QCache
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall IsLineOfSightBetweenTwoEntitiesClear(
        const CBaseEntity *pSrcEntity,
        unsigned __int8 nSrcOffsetMode,
        const CBaseEntity *pDestEntity,
        EEntityOffsetMode_t nDestOffsetMode,
        const CBaseEntity *pSkipEntity,
        int nCollisionGroup,
        __m128i flMinimumUpdateInterval,
        uint64 nTraceMask,
        uint64 pTraceFilterCallback,
        bool bSkipDestinationEntity)
{
  int v10; // r11d
  CEntityIdentity *m_pEntity; // rdi
  __int16 v12; // r12
  CEntityIdentity *v13; // rdx
  __int16 v14; // r12
  CEntityIdentity *v15; // rdx
  __int16 v16; // r8
  int v17; // ecx
  __int16 v18; // dx
  __int64 i; // rax
  int v20; // esi
  unsigned int v21; // esi
  QueryCacheEntry_t *m_pHead; // rbx
  unsigned int v23; // esi
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v25; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  _BOOL4 m_bResult; // ebx
  unsigned int v28; // esi
  __int64 CurrentId; // r13
  signed __int32 v30; // eax
  QueryCacheEntry_t *m_pNext; // rax
  Vector *m_Points; // rdx
  vec_t *v33; // rax
  vec_t v34; // xmm0_4
  __int64 j; // rax
  int v36; // edx
  __int64 v37; // rax
  bool (*v38)(CBaseEntity *, uint64); // rdx
  CUtlIntrusiveDList<QueryCacheEntry_t> *v39; // rax
  float v40; // xmm0_4
  _BOOL4 v41; // r12d
  signed __int32 v43; // eax
  float v44; // xmm0_4
  CGlobalVars *v45; // r12
  FnGlobalVarsWarningFunc v46; // rax
  int v47; // eax
  QueryCacheEntry_t *m_pPrev; // rax
  CUtlIntrusiveDList<QueryCacheEntry_t> *v49; // rdx
  QueryCacheEntry_t *v50; // rax
  bool v51; // zf
  int v52; // [rsp-8h] [rbp-88h] BYREF
  int v53; // [rsp-4h] [rbp-84h]
  _DWORD v54[12]; // [rsp+0h] [rbp-80h] BYREF
  __int16 v55; // [rsp+30h] [rbp-50h]
  char v56; // [rsp+32h] [rbp-4Eh]
  uint64 nSrcOffsetModea; // [rsp+38h] [rbp-48h] OVERLAPPED
  unsigned int v58; // [rsp+40h] [rbp-40h]
  int v59; // [rsp+44h] [rbp-3Ch]
  ShouldHitFunc_t v60; // [rsp+48h] [rbp-38h]
  int v61; // [rsp+50h] [rbp-30h]

  v10 = _mm_cvtsi128_si32(flMinimumUpdateInterval);
  v54[9] = -1;
  v54[10] = -1;
  v54[11] = -1;
  v52 = 3 - !bSkipDestinationEntity;
  if ( pSrcEntity != 0 )
  {
    m_pEntity = pSrcEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v12 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v54[9] = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v12 & 0x7FFF;
    }
  }
  if ( pDestEntity != 0 )
  {
    v13 = pDestEntity->m_pEntity;
    if ( v13 != 0 )
    {
      v14 = 0x7FFF;
      if ( v13->m_EHandle.m_Index != -1 )
        v14 = v13->m_EHandle.m_Index & 0x7FFF;
      v54[10] = (((v13->m_EHandle.m_Index >> 15) - (v13->m_flags & 1)) << 15) | v14 & 0x7FFF;
    }
  }
  if ( pSkipEntity != 0 )
  {
    v15 = pSkipEntity->m_pEntity;
    if ( v15 != 0 )
    {
      v16 = 0x7FFF;
      if ( v15->m_EHandle.m_Index != -1 )
        v16 = v15->m_EHandle.m_Index & 0x7FFF;
      v54[11] = (((v15->m_EHandle.m_Index >> 15) - (v15->m_flags & 1)) << 15) | v16 & 0x7FFF;
    }
    else
    {
      v54[11] = -1;
    }
    HIBYTE(v55) = nDestOffsetMode;
    v17 = 3;
    LOBYTE(v55) = nSrcOffsetMode;
    v56 = 3;
    nSrcOffsetModea = nTraceMask;
  }
  else
  {
    HIBYTE(v55) = nDestOffsetMode;
    v17 = 2;
    v54[11] = -1;
    LOBYTE(v55) = nSrcOffsetMode;
    v56 = 3;
    nSrcOffsetModea = nTraceMask;
  }
  v53 = v17;
  v59 = nCollisionGroup;
  v18 = 3 - !bSkipDestinationEntity;
  v61 = v10;
  v60 = pTraceFilterCallback;
  for ( i = 0; ; nSrcOffsetMode = *(&v55 + i) )
  {
    v20 = v54[i++ + 9] + nSrcOffsetMode;
    v18 += v20;
    if ( v17 <= i )
      break;
  }
  v58 = (v10 + nTraceMask + v18) & 0x7FF;
  _InterlockedAdd(&s_nNumCacheQueries.m_value, 1u);
  if ( sv_disable_querycache.m_pParent->m_Value.m_nValue != 0 )
  {
    m_pHead = 0;
  }
  else
  {
    v21 = _InterlockedIncrement(&s_CacheRWLock);
    if ( (v21 & 0x7FF00000) != 0 )
      CThreadRWLock_FastRead::WaitForReadLockTransition(&s_CacheRWLock, v21);
    m_pHead = s_HashChains[v58].m_pHead;
    if ( m_pHead != 0 )
    {
      while ( !QueryCacheKey_t::Matches(&m_pHead->m_QueryParams, &v52) )
      {
        m_pHead = m_pHead->m_pNext;
        if ( m_pHead == 0 )
          goto LABEL_24;
      }
      m_flCurrentTime = 0.0;
      v25 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            (m_pfnWarningFunc)(1, 0.0);
        }
        m_flCurrentTime = v25->m_flCurrentTime;
      }
      if ( m_pHead->m_QueryParams.m_flMinimumUpdateInterval > (m_flCurrentTime - m_pHead->m_flLastUpdateTime) )
      {
        if ( m_pHead->m_bSpeculativelyDone )
          _InterlockedAdd(&s_SuccessfulSpeculatives.m_value, 1u);
        m_pHead->m_bUsedSinceUpdated = 1;
        m_bResult = m_pHead->m_bResult;
        v28 = _InterlockedDecrement(&s_CacheRWLock);
        if ( (v28 & 0xFFF00000) != 0 )
          CThreadRWLock_FastRead::UnlockReadAccounting(&s_CacheRWLock, v28);
        return m_bResult;
      }
    }
LABEL_24:
    v23 = _InterlockedDecrement(&s_CacheRWLock);
    if ( (v23 & 0xFFF00000) != 0 )
      CThreadRWLock_FastRead::UnlockReadAccounting(&s_CacheRWLock, v23);
  }
  CurrentId = ThreadGetCurrentId();
  if ( CurrentId == qword_4B46648 )
  {
    ++dword_4B46650;
  }
  else
  {
    v30 = _InterlockedExchangeAdd(&s_CacheRWLock, 0x100000u);
    if ( (v30 & 0x7FF00000) != 0 )
    {
      CThreadSyncObject::Wait(&unk_4B464C8, 0xFFFFFFFF);
    }
    else if ( (v30 & 0x3FF) != 0 )
    {
      CThreadRWLock_FastRead::HandleFirstWriteLockTransition(&s_CacheRWLock);
    }
    qword_4B46648 = CurrentId;
    dword_4B46650 = 1;
  }
  if ( m_pHead == 0 || !QueryCacheKey_t::Matches(&m_pHead->m_QueryParams, &v52) )
  {
    m_pHead = s_HashChains[v58].m_pHead;
    if ( m_pHead == 0 )
    {
LABEL_48:
      m_pHead = s_VictimList.m_pHead;
      if ( s_VictimList.m_pHead != 0 )
      {
        m_pNext = s_VictimList.m_pHead->m_pNext;
        s_VictimList.m_pHead = s_VictimList.m_pHead->m_pNext;
        if ( s_VictimList.m_pHead != 0 )
          m_pNext->m_pPrev = 0;
      }
      else
      {
        m_pHead = &s_QCache[s_nReplaceCtr];
        v47 = 1023;
        if ( s_nReplaceCtr - 1 >= 0 )
          v47 = s_nReplaceCtr - 1;
        s_nReplaceCtr = v47;
        if ( m_pHead->m_QueryParams.m_Type != EQueryType_t::EQUERY_INVALID )
        {
          m_pPrev = m_pHead->m_pPrev;
          if ( m_pPrev != 0 )
          {
            m_pPrev->m_pNext = m_pHead->m_pNext;
            if ( m_pHead->m_pNext != 0 )
              m_pHead->m_pNext->m_pPrev = m_pHead->m_pPrev;
          }
          else
          {
            v49 = &s_HashChains[m_pHead->m_QueryParams.m_nHashIdx];
            if ( m_pHead == v49->m_pHead )
            {
              v50 = m_pHead->m_pNext;
              v51 = m_pHead->m_pNext == 0;
              v49->m_pHead = m_pHead->m_pNext;
              if ( !v51 )
                v50->m_pPrev = 0;
            }
          }
          m_pHead->m_pPrev = 0;
          m_pHead->m_pNext = 0;
        }
      }
      m_Points = m_pHead->m_QueryParams.m_Points;
      m_pHead->m_QueryParams.m_Type = v52;
      m_pHead->m_QueryParams.m_nNumValidPoints = v53;
      v33 = v54;
      do
      {
        v34 = *v33;
        v33 += 3;
        ++m_Points;
        m_Points[-1].x = v34;
        m_Points[-1].y = *(v33 - 2);
        m_Points[-1].z = *(v33 - 1);
      }
      while ( v33 != &v54[9] );
      for ( j = 0; j != 3; ++j )
        m_pHead->m_QueryParams.m_pEntities[j].m_Index = v54[j + 9];
      *m_pHead->m_QueryParams.m_nOffsetMode = v55;
      m_pHead->m_QueryParams.m_nOffsetMode[2] = v56;
      v36 = v59;
      m_pHead->m_QueryParams.m_nTraceMask = nSrcOffsetModea;
      v37 = v58;
      m_pHead->m_QueryParams.m_nCollisionGroup = v36;
      v38 = v60;
      m_pHead->m_QueryParams.m_nHashIdx = v37;
      v39 = &s_HashChains[v37];
      v40 = *&v61;
      m_pHead->m_QueryParams.m_pTraceFilterFunction = v38;
      m_pHead->m_QueryParams.m_flMinimumUpdateInterval = v40;
      m_pHead->m_pNext = v39->m_pHead;
      if ( v39->m_pHead != 0 )
        v39->m_pHead->m_pPrev = m_pHead;
      m_pHead->m_pPrev = 0;
      v39->m_pHead = m_pHead;
      m_pHead->m_bSpeculativelyDone = 0;
      QueryCacheEntry_t::IssueQuery(m_pHead);
      g_bQueryCacheIsEmpty = 0;
      goto LABEL_62;
    }
    while ( !QueryCacheKey_t::Matches(&m_pHead->m_QueryParams, &v52) )
    {
      m_pHead = m_pHead->m_pNext;
      if ( m_pHead == 0 )
        goto LABEL_48;
    }
  }
  if ( sv_disable_querycache.m_pParent->m_Value.m_nValue != 0 )
    goto LABEL_61;
  v44 = 0.0;
  v45 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v46 = gpGlobals->m_pfnWarningFunc;
      if ( v46 != 0 )
        (v46)(1, 0.0);
    }
    v44 = v45->m_flCurrentTime;
  }
  if ( (v44 - m_pHead->m_flLastUpdateTime) >= m_pHead->m_QueryParams.m_flMinimumUpdateInterval )
  {
LABEL_61:
    m_pHead->m_bSpeculativelyDone = 0;
    QueryCacheEntry_t::IssueQuery(m_pHead);
  }
  else if ( m_pHead->m_bSpeculativelyDone )
  {
    _InterlockedAdd(&s_SuccessfulSpeculatives.m_value, 1u);
  }
LABEL_62:
  m_pHead->m_bUsedSinceUpdated = 1;
  v41 = m_pHead->m_bResult;
  m_bResult = v41;
  if ( --dword_4B46650 != 0 )
    return m_bResult;
  qword_4B46648 = 0;
  v43 = _InterlockedExchangeAdd(&s_CacheRWLock, 0xFFF00000);
  if ( (v43 & 0x7FF00000) == 0x100000 )
  {
    m_bResult = v41;
    if ( (v43 & 0xFFC00) != 0 )
      CThreadEvent::Set(&unk_4B465C8);
    return m_bResult;
  }
  CThreadSemaphore::Release(&unk_4B464C8, 1, 0);
  return v41;
}


// sv_querycache_stats  (line 424, @0x000000000234b680, libserver.so)  // inlines: Count, GetRaw, ListLength<QueryCacheEntry_t>
// calls: Warning
// strings: "%d queries, %d misses (%d free) suc spec = %d wasted spec=%d\n"
// globals: s_VictimList, s_WastedSpeculativeUpdates, s_SuccessfulSpeculatives, s_nNumCacheMisses, s_nNumCacheQueries
void __fastcall sv_querycache_stats(const CCommandContext *const ctx, const CCommand *const args)
{
  QueryCacheEntry_t *m_pHead; // rax
  int i; // ecx

  m_pHead = s_VictimList.m_pHead;
  for ( i = 0; m_pHead != 0; ++i )
    m_pHead = m_pHead->m_pNext;
  Warning(
    "%d queries, %d misses (%d free) suc spec = %d wasted spec=%d\n",
    s_nNumCacheQueries.m_value,
    s_nNumCacheMisses.m_value,
    i,
    s_SuccessfulSpeculatives.m_value,
    s_WastedSpeculativeUpdates.m_value);
}


