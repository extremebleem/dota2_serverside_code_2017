
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ChasePath::~ChasePath  (line 27, @0x0000000002f40d50, libserver.so)  // inlines: ~CNavPathNB, ~CPath, ~CPathData
void __fastcall ChasePath::~ChasePath(ChasePath *const this)
{
  this->_vptr_CPathData = off_47B0E10;  // vptr: CPathData
}


// ChasePath::~ChasePath  (line 27, @0x0000000002f40db0, libserver.so)  // inlines: ~CNavPathNB, ~CPath, ~CPathData, ~ChasePath
// calls: operator delete
void __fastcall ChasePath::~ChasePath(ChasePath *const this)
{
  this->_vptr_CPathData = off_47B0E10;  // vptr: CPathData
  operator delete(this);
}


// ChasePath::SetPathFollower  (line 65, @0x0000000002f40d70, libserver.so)  // inlines: SetPathFollower
void __fastcall ChasePath::SetPathFollower(ChasePath *const this, IPathFollower *pPathFollower)
{
  this->m_pPathFollower = pPathFollower;
  if ( pPathFollower != 0 )
    (*(pPathFollower->_vptr_IPathFollower + 2))(pPathFollower, 1);
}


// ChasePath::InvalidatePath  (line 90, @0x0000000002f40ec0, libserver.so)  // inlines: Invalidate, InvalidatePath, NetworkStateChanged, Set, operator=<float>
// calls: CPathData::InvalidatePath
void __fastcall ChasePath::InvalidatePath(ChasePath *const this)
{
  IPathFollower *m_pPathFollower; // rdi

  if ( this->m_throttleTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_throttleTimer._vptr_CountdownTimer + 2))(&this->m_throttleTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_throttleTimer.m_timestamp.m_Value = -1.0;
  }
  CPathData::InvalidatePath(this);
  m_pPathFollower = this->m_pPathFollower;
  if ( m_pPathFollower != 0 )
    m_pPathFollower->OnPathInvalidated();
}


// ChasePath::PostUpdate  (line 101, @0x0000000002f40fc0, libserver.so)  // inlines: GetCurrentPosition, GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsElapsed, IsValid, LookupEntity, NetworkStateChanged, Set, Start, VectorAdd, curtime, entindex, operator bool, operator!=, operator+, operator=, operator=<float>
// calls: CountdownTimer::Now, CConcreteEntityList::LookupEntity, CBaseEntity::GetAbsOrigin, NDebugOverlay::VertArrow, NDebugOverlay::HorzArrow, CEntityInstance::GetEntityIndex, DevMsg(char const*,...)
// strings: "%3.2f: bot(#%d) REPATH FAILED\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall ChasePath::PostUpdate(ChasePath *const this)
{
  CountdownTimer *p_m_throttleTimer; // r12
  float v3; // xmm0_4
  CountdownTimer *p_m_failTimer; // r12
  CEntityIdentity *v5; // rax
  const Vector *v6; // rax
  vec_t v7; // xmm0_4
  vec_t v8; // xmm1_4
  vec_t v9; // xmm2_4
  const Vector *v10; // r13
  float *v11; // rax
  vec_t v12; // xmm1_4
  vec_t v13; // xmm2_4
  const Vector *v14; // rax
  const CEntityInstance *v15; // rax
  CEntityIndex v16; // eax
  double m_flCurrentTime; // xmm0_8
  CGlobalVars *v18; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  INextBot *m_pBot; // rdi
  float (__fastcall *v21)(INextBot *, Vector *); // r13
  uint32 m_Index; // eax
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  const Vector *AbsOrigin; // rax
  bool v26; // zf
  const Vector *v27; // r12
  float *v28; // rax
  vec_t v29; // xmm0_4
  vec_t v30; // xmm1_4
  vec_t z; // xmm0_4
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // [rsp+8h] [rbp-48h]
  int32 m_Data; // [rsp+Ch] [rbp-44h]
  float v39; // [rsp+Ch] [rbp-44h]
  float v40; // [rsp+Ch] [rbp-44h]
  float v41; // [rsp+Ch] [rbp-44h]
  Vector vTargetPositionForVis; // [rsp+10h] [rbp-40h] BYREF
  Vector startPos; // [rsp+20h] [rbp-30h] BYREF

  if ( this->m_PathResultStatus != CPathData::PathResult_t::NO_PATH )
  {
    p_m_throttleTimer = &this->m_throttleTimer;
    v3 = CountdownTimer::Now(&this->m_throttleTimer) + 0.5;
    if ( v3 != this->m_throttleTimer.m_timestamp.m_Value )
    {
      v39 = v3;
      (*(this->m_throttleTimer._vptr_CountdownTimer + 2))(p_m_throttleTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_throttleTimer.m_timestamp.m_Value = v39;
    }
    if ( this->m_throttleTimer.m_duration.m_Value == 0.5 )
    {
      if ( !this->m_PathCaps.m_bIsDebugging )
        goto LABEL_6;
    }
    else
    {
      (*(this->m_throttleTimer._vptr_CountdownTimer + 2))(p_m_throttleTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v26 = !this->m_PathCaps.m_bIsDebugging;
      this->m_throttleTimer.m_duration.m_Value = 0.5;
      if ( v26 )
        goto LABEL_6;
    }
    v27 = (*(this->m_pBot->_vptr_INextBotEventResponder + 73))(this->m_pBot);
    v28 = (*(this->m_pBot->_vptr_INextBotEventResponder + 73))(this->m_pBot);
    v29 = v28[2] + 13.0;
    v30 = *v28 + 0.0;
    startPos.y = v28[1] + 0.0;
    startPos.z = v29;
    startPos.x = v30;
    NDebugOverlay::VertArrow(&startPos, v27, 3.0, 0x64u, 0xFFu, 0x64u, 255, 30.0, 1);
    goto LABEL_6;
  }
  p_m_failTimer = &this->m_failTimer;
  if ( CountdownTimer::Now(&this->m_failTimer) < this->m_failTimer.m_timestamp.m_Value )
  {
    if ( !this->m_PathCaps.m_bIsDebugging )
      goto LABEL_6;
    goto LABEL_9;
  }
  m_pBot = this->m_pBot;
  v21 = *(m_pBot->_vptr_INextBotEventResponder + 93);
  if ( this->m_Target.m_bUseEntity )
  {
    m_Index = this->m_Target.m_hTargetEntity.m_Index;
    if ( m_Index + 2 > 1
      && (v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_Target.m_hTargetEntity.m_Index) >> 9)
                                                               & 0x3F]) != 0
      && (v24 = &v23[this->m_Target.m_hTargetEntity.m_Index & 0x1FF]) != 0
      && m_Index == v24->m_EHandle.m_Index )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(v24->m_pInstance);
      m_pBot = this->m_pBot;
    }
    else
    {
      AbsOrigin = &vec3_origin;
    }
    z = AbsOrigin->z;
    y = AbsOrigin->y;
    x = AbsOrigin->x;
  }
  else
  {
    x = this->m_Target.m_vTargetPoint.x;
    y = this->m_Target.m_vTargetPoint.y;
    z = this->m_Target.m_vTargetPoint.z;
  }
  startPos.x = x;
  startPos.y = y;
  startPos.z = z;
  v40 = 0.0049999999 * v21(m_pBot, &startPos);
  v34 = CountdownTimer::Now(p_m_failTimer);
  v35 = v40;
  v36 = v34 + v40;
  if ( v36 != this->m_failTimer.m_timestamp.m_Value )
  {
    v37 = v36;
    (*(this->m_failTimer._vptr_CountdownTimer + 2))(p_m_failTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v35 = v40;
    this->m_failTimer.m_timestamp.m_Value = v37;
  }
  if ( v35 != this->m_failTimer.m_duration.m_Value )
  {
    v41 = v35;
    (*(this->m_failTimer._vptr_CountdownTimer + 2))(p_m_failTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_failTimer.m_duration.m_Value = v41;
  }
  (*(this->m_pBot->_vptr_INextBotEventResponder + 9))(this->m_pBot, 0);
  if ( this->m_PathCaps.m_bIsDebugging )
  {
LABEL_9:
    if ( vec3_invalid.x == this->m_vPredictedTargetPos.x
      && vec3_invalid.y == this->m_vPredictedTargetPos.y
      && vec3_invalid.z == this->m_vPredictedTargetPos.z )
    {
      if ( this->m_Target.m_bUseEntity )
      {
        v5 = CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &this->m_Target.m_hTargetEntity);
        if ( v5 != 0 )
          v6 = CBaseEntity::GetAbsOrigin(v5->m_pInstance);
        else
          v6 = &vec3_origin;
        v7 = v6->z;
        v8 = v6->y;
        v9 = v6->x;
      }
      else
      {
        v9 = this->m_Target.m_vTargetPoint.x;
        v8 = this->m_Target.m_vTargetPoint.y;
        v7 = this->m_Target.m_vTargetPoint.z;
      }
      vTargetPositionForVis.x = v9;
      vTargetPositionForVis.y = v8;
      vTargetPositionForVis.z = v7;
    }
    else
    {
      vTargetPositionForVis = this->m_vPredictedTargetPos;
    }
    v10 = (*(this->m_pBot->_vptr_INextBotEventResponder + 73))(this->m_pBot);
    v11 = (*(this->m_pBot->_vptr_INextBotEventResponder + 73))(this->m_pBot);
    v12 = *v11 + 0.0;
    v13 = v11[2] + 20.0;
    startPos.y = v11[1] + 0.0;
    startPos.x = v12;
    startPos.z = v13;
    NDebugOverlay::VertArrow(&startPos, v10, 20.0, 0x64u, 0xFFu, 0xFFu, 255, 90.0, 1);
    v14 = (*(this->m_pBot->_vptr_INextBotEventResponder + 73))(this->m_pBot);
    NDebugOverlay::HorzArrow(v14, &vTargetPositionForVis, 5.0, 0x64u, 0xFFu, 0xFFu, 255, 90.0, 1);
    v15 = (*(this->m_pBot->_vptr_INextBotEventResponder + 66))(this->m_pBot);
    v16.m_Data = CEntityInstance::GetEntityIndex(v15).m_Data;
    m_flCurrentTime = 0.0;
    v18 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          m_Data = v16.m_Data;
          (m_pfnWarningFunc)(1, 0.0);
          v16.m_Data = m_Data;
        }
      }
      m_flCurrentTime = v18->m_flCurrentTime;
    }
    DevMsg("%3.2f: bot(#%d) REPATH FAILED\n", m_flCurrentTime, v16.m_Data);
  }
LABEL_6:
  this->m_vPredictedTargetPos = vec3_invalid;
}


// CPathFollowerDirect::~CPathFollowerDirect  (line 148, @0x0000000002f40df0, libserver.so)  // inlines: ForEachBot<CDetachPath>, operator(), operator[], ~CNavPathNB, ~CPath, ~CPathData, ~CPathFollower, ~CPathFollowerDirect, ~ChasePath
// calls: operator delete
void __fastcall CPathFollowerDirect::~CPathFollowerDirect(CPathFollowerDirect *const this)
{
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v4; // rbx

  this->m_ChasePath._vptr_CPathData = off_47B0E10;
  this->_vptr_IPathFollower = off_47B6610;  // vptr: CPathFollower
  m_Head = g_NextBotManager.m_botList.m_Head;
  if ( m_Head != 0xFFFF )
  {
    m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
    do
    {
      v4 = m_Head;
      (*(m_pMemory[v4].m_Element->_vptr_INextBotEventResponder + 87))(m_pMemory[v4].m_Element, this);
      m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
      m_Head = m_pMemory[v4].m_Next;
    }
    while ( m_Head != 0xFFFF );
  }
  operator delete(this);
}


// CPathFollowerDirect::~CPathFollowerDirect  (line 148, @0x0000000002f40f40, libserver.so)  // inlines: ForEachBot<CDetachPath>, operator(), operator[], ~CNavPathNB, ~CPath, ~CPathData, ~CPathFollower, ~ChasePath
void __fastcall CPathFollowerDirect::~CPathFollowerDirect(CPathFollowerDirect *const this)
{
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v4; // rbx

  this->m_ChasePath._vptr_CPathData = off_47B0E10;
  this->_vptr_IPathFollower = off_47B6610;  // vptr: CPathFollower
  m_Head = g_NextBotManager.m_botList.m_Head;
  if ( m_Head != 0xFFFF )
  {
    m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
    do
    {
      v4 = m_Head;
      (*(m_pMemory[v4].m_Element->_vptr_INextBotEventResponder + 87))(m_pMemory[v4].m_Element, this);
      m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
      m_Head = m_pMemory[v4].m_Next;
    }
    while ( m_Head != 0xFFFF );
  }
}


