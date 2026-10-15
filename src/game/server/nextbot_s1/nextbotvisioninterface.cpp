// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextbotvisioninterface.cpp:286
class PopulateVisibleVector {
	PopulateVisibleVector(CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int> > *);
	bool operator()(CBaseEntity *);

	// sizeof = 8
};

// src/game/server/nextbot_s1/nextbotvisioninterface.cpp:320
class CollectVisible {
	CollectVisible(IVision *);
	bool operator()(CBaseEntity *);
	bool Contains(CBaseEntity *);
	~CollectVisible();

	// sizeof = 32
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IVision::IVision  (line 30, @0x0000000002f34530, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkVarBase, CUtlMemory, CUtlVector, CUtlVectorBase, INextBotComponent, IntervalTimer, RegisterComponent, ~CUtlVector, ~INextBotComponent, ~INextBotEventResponder
// calls: CountdownTimer::CountdownTimer, IVision::Reset, _Unwind_Resume, CUtlVectorBase<CKnownEntity, CUtlMemory<CKnownEntity, int> >::~CUtlVectorBase
// callers: INextBot::GetVisionInterface
void __fastcall IVision::IVision(IVision *const this, INextBot *bot)
{
  float interval_per_tick; // xmm0_4
  CountdownTimer *p_m_scanTimer; // rdi
  IVision *m_notVisibleTimer; // rax
  IVision *v6; // rdx

  this->_vptr_INextBotEventResponder = &off_3F7A770;
  interval_per_tick = gpGlobals->interval_per_tick;
  this->m_lastUpdateTime = 0.0;
  this->m_bot = bot;
  this->m_curInterval = interval_per_tick;
  this->m_nextComponent = bot->m_componentList;
  bot->m_componentList = this;
  p_m_scanTimer = &this->m_scanTimer;
  *&p_m_scanTimer[-2].m_bUseGlobalsTime = &off_47B6050;
  CountdownTimer::CountdownTimer(p_m_scanTimer);
  this->m_knownEntityVector.m_Size = 0;
  this->m_knownEntityVector.m_Memory.m_pMemory = 0;
  m_notVisibleTimer = this->m_notVisibleTimer;
  this->m_knownEntityVector.m_Memory.m_nAllocationCount = 0;
  this->m_knownEntityVector.m_Memory.m_nGrowSize = 0;
  this->m_primaryThreat.m_Index = -1;
  do
  {
    m_notVisibleTimer->_vptr_INextBotEventResponder = off_3FD0350;
    v6 = m_notVisibleTimer;
    m_notVisibleTimer = (m_notVisibleTimer + 16);
    v6->m_lastUpdateTime = -1.0;
  }
  while ( m_notVisibleTimer != this + 1 );
  IVision::Reset(this);
}


// IVision::Reset  (line 40, @0x0000000002f34410, libserver.so)  // inlines: Invalidate, NetworkStateChanged, Reset, Set, operator=, operator=<float>
// calls: CUtlVectorBase<CKnownEntity, CUtlMemory<CKnownEntity, int> >::RemoveAll, cos
// callers: IVision::IVision
void __fastcall IVision::Reset(IVision *const this)
{
  CUtlVector<CKnownEntity,CUtlMemory<CKnownEntity,int> > *p_m_knownEntityVector; // rdi
  int v3; // r12d
  IntervalTimer *m_notVisibleTimer; // rbx
  int (**vptr_INextBotEventResponder)(...); // rax
  float v6; // xmm0_4
  __m128d v7; // xmm0
  double v8; // xmm1_8
  float v9; // xmm0_4
  signed __int64 v10; // r13
  int (**vptr_IntervalTimer)(...); // rax
  IntervalTimer *v12; // rdi
  float v13; // [rsp+Ch] [rbp-34h]

  p_m_knownEntityVector = &this->m_knownEntityVector;
  v3 = 0;
  m_notVisibleTimer = this->m_notVisibleTimer;
  p_m_knownEntityVector[-3].m_Memory.m_nAllocationCount = 0;
  p_m_knownEntityVector[-3].m_Memory.m_nGrowSize = LODWORD(gpGlobals->interval_per_tick);
  CUtlVectorBase<CKnownEntity,CUtlMemory<CKnownEntity,int>>::RemoveAll(p_m_knownEntityVector);
  vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
  this->m_lastVisionUpdateTimestamp = 0.0;
  this->m_primaryThreat.m_Index = -1;
  v6 = (vptr_INextBotEventResponder[86])(this);
  this->m_FOV = v6;
  v7.m128d_f64[0] = cos((v6 * 0.5) * 3.141592653589793 / 180.0);
  v8 = _mm_movedup_pd(v7).m128d_f64[0];
  v9 = -1.0;
  this->m_cosHalfFOV = v8;
  do
  {
    while ( 1 )
    {
      v10 = m_notVisibleTimer - this;
      if ( v9 != m_notVisibleTimer->m_timestamp.m_Value )
        break;
      ++v3;
      ++m_notVisibleTimer;
      if ( v3 == 32 )
        return;
    }
    vptr_IntervalTimer = m_notVisibleTimer->_vptr_IntervalTimer;
    v13 = v9;
    v12 = m_notVisibleTimer;
    ++v3;
    ++m_notVisibleTimer;
    vptr_IntervalTimer[2](v12, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v9 = v13;
    *(&this->m_lastUpdateTime + v10) = -1.0;
  }
  while ( v3 != 32 );
}


// IVision::GetPrimaryKnownThreat  (line 64, @0x0000000002f2f560, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, IsAwareOf, Set, operator=, operator[]
const CKnownEntity *__fastcall IVision::GetPrimaryKnownThreat(const IVision *const this, bool onlyVisibleThreats)
{
  __int64 v3; // r13
  const CKnownEntity *v4; // r12
  unsigned __int8 (__fastcall *v5)(const IVision *const, __int64); // r14
  __int64 v6; // rax
  unsigned __int8 (__fastcall *v7)(INextBot *, __int64); // r14
  __int64 v8; // rax
  int v9; // r15d
  __int64 v10; // r13
  char *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  __int16 v18; // cx
  INextBot *v21; // [rsp+10h] [rbp-40h]
  __int64 v22; // [rsp+10h] [rbp-40h]
  float v23; // [rsp+18h] [rbp-38h]
  INextBot *m_bot; // [rsp+18h] [rbp-38h]
  float v25; // [rsp+18h] [rbp-38h]
  unsigned __int8 (__fastcall *v26)(const IVision *const, __int64); // [rsp+18h] [rbp-38h]
  unsigned __int8 (__fastcall *v27)(INextBot *, __int64); // [rsp+18h] [rbp-38h]
  __int64 (__fastcall *v28)(__int64, INextBot *, __int64, const CKnownEntity *, char *); // [rsp+18h] [rbp-38h]

  if ( this->m_knownEntityVector.m_Size == 0 )
    return 0;
  if ( this->m_knownEntityVector.m_Size <= 0 )
  {
LABEL_25:
    this->m_primaryThreat.m_Index = -1;
    return 0;
  }
  v3 = 0;
  while ( 1 )
  {
    v4 = &this->m_knownEntityVector.m_Memory.m_pMemory[v3];
    v23 = (*(v4->_vptr_CKnownEntity + 10))(v4);
    if ( v23 >= (*(this->_vptr_INextBotEventResponder + 79))(this) && (*(v4->_vptr_CKnownEntity + 17))(v4) == 0 )
    {
      v5 = *(this->_vptr_INextBotEventResponder + 83);
      v6 = (*(v4->_vptr_CKnownEntity + 4))(v4);
      if ( v5(this, v6) == 0 )
      {
        m_bot = this->m_bot;
        v7 = *(m_bot->_vptr_INextBotEventResponder + 74);
        v8 = (*(v4->_vptr_CKnownEntity + 4))(v4);
        if ( v7(m_bot, v8) != 0 && (!onlyVisibleThreats || (*(v4->_vptr_CKnownEntity + 12))(v4) != 0) )
          break;
      }
    }
    if ( this->m_knownEntityVector.m_Size <= ++v3 )
      goto LABEL_25;
  }
  v9 = v3 + 1;
  if ( v3 + 1 < this->m_knownEntityVector.m_Size )
  {
    v10 = v9 << 6;
    do
    {
      while ( 1 )
      {
        v11 = this->m_knownEntityVector.m_Memory.m_pMemory + v10;
        v25 = (*(*v11 + 80LL))(v11);
        if ( v25 >= (*(this->_vptr_INextBotEventResponder + 79))(this) && (*(*v11 + 136LL))(v11) == 0 )
        {
          v26 = *(this->_vptr_INextBotEventResponder + 83);
          v12 = (*(*v11 + 32LL))(v11);
          if ( v26(this, v12) == 0 )
          {
            v21 = this->m_bot;
            v27 = *(v21->_vptr_INextBotEventResponder + 74);
            v13 = (*(*v11 + 32LL))(v11);
            if ( v27(v21, v13) != 0 && (!onlyVisibleThreats || (*(*v11 + 96LL))(v11) != 0) )
              break;
          }
        }
        ++v9;
        v10 += 64;
        if ( this->m_knownEntityVector.m_Size <= v9 )
          goto LABEL_19;
      }
      ++v9;
      v10 += 64;
      v22 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 70))(this->m_bot);
      v28 = *(*v22 + 584LL);
      v14 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
      v4 = v28(v22, this->m_bot, v14, v4, v11);
    }
    while ( this->m_knownEntityVector.m_Size > v9 );
LABEL_19:
    if ( v4 == 0 )
      goto LABEL_31;
  }
  v15 = (*(v4->_vptr_CKnownEntity + 4))(v4);
  if ( v15 != 0 && (v16 = *(v15 + 8)) != 0 )
  {
    v17 = (*(v16 + 16) >> 15) - (*(v16 + 48) & 1);
    v18 = 0x7FFF;
    if ( *(v16 + 16) != -1 )
      v18 = *(v16 + 16) & 0x7FFF;
    LOWORD(this->m_primaryThreat.m_Index) = v18 | this->m_primaryThreat.m_Index & 0x8000;
    this->m_primaryThreat.m_Index = (v17 << 15) | this->m_primaryThreat.m_Index & 0x7FFF;
    return v4;
  }
  else
  {
LABEL_31:
    this->m_primaryThreat.m_Index = -1;
    return v4;
  }
}


// IVision::GetClosestKnown  (line 119, @0x0000000002f2fbd0, libserver.so)  // inlines: GetTeamNumber, IsAwareOf, LengthSqr, VectorSubtract, operator-, operator[]
const CKnownEntity *__fastcall IVision::GetClosestKnown(const IVision *const this, int team)
{
  __int64 v4; // rax
  float *v5; // r13
  __int64 v6; // rbx
  CKnownEntity *v7; // r15
  float *v8; // rax
  const CKnownEntity *close; // [rsp+0h] [rbp-40h]
  float closeRange; // [rsp+8h] [rbp-38h]
  float v12; // [rsp+Ch] [rbp-34h]

  v4 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 73))(this->m_bot);
  if ( this->m_knownEntityVector.m_Size <= 0 )
    return 0;
  v5 = v4;
  v6 = 0;
  close = 0;
  closeRange = 1000000000.0;
  do
  {
    while ( 1 )
    {
      v7 = &this->m_knownEntityVector.m_Memory.m_pMemory[v6];
      if ( (*(v7->_vptr_CKnownEntity + 17))(v7) == 0 )
      {
        v12 = (*(v7->_vptr_CKnownEntity + 10))(v7);
        if ( v12 >= (*(this->_vptr_INextBotEventResponder + 79))(this)
          && (team == -1 || team == *((*(v7->_vptr_CKnownEntity + 4))(v7) + 383)) )
        {
          v8 = (*(v7->_vptr_CKnownEntity + 5))(v7);
          if ( closeRange > ((((*v8 - *v5) * (*v8 - *v5)) + ((v8[1] - v5[1]) * (v8[1] - v5[1])))
                           + ((v8[2] - v5[2]) * (v8[2] - v5[2]))) )
            break;
        }
      }
      if ( ++v6 >= this->m_knownEntityVector.m_Size )
        return close;
    }
    ++v6;
    closeRange = (((*v8 - *v5) * (*v8 - *v5)) + ((v8[1] - v5[1]) * (v8[1] - v5[1])))
               + ((v8[2] - v5[2]) * (v8[2] - v5[2]));
    close = v7;
  }
  while ( v6 < this->m_knownEntityVector.m_Size );
  return close;
}


// IVision::GetClosestKnown  (line 154, @0x0000000002f2fa80, libserver.so)  // inlines: IsAwareOf, LengthSqr, VectorSubtract, operator-, operator[]
const CKnownEntity *__fastcall IVision::GetClosestKnown(
        const IVision *const this,
        const INextBotEntityFilter *const filter)
{
  __int64 v4; // rax
  float *v5; // r13
  __int64 v6; // r14
  CKnownEntity *v7; // r15
  __int64 v8; // rax
  float *v9; // rax
  float closeRange; // [rsp+Ch] [rbp-44h]
  const CKnownEntity *close; // [rsp+10h] [rbp-40h]
  float v13; // [rsp+18h] [rbp-38h]
  unsigned __int8 (__fastcall *v14)(const INextBotEntityFilter *const, __int64); // [rsp+18h] [rbp-38h]

  v4 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 73))(this->m_bot);
  if ( this->m_knownEntityVector.m_Size <= 0 )
    return 0;
  v5 = v4;
  v6 = 0;
  close = 0;
  closeRange = 1000000000.0;
  do
  {
    while ( 1 )
    {
      v7 = &this->m_knownEntityVector.m_Memory.m_pMemory[v6];
      if ( (*(v7->_vptr_CKnownEntity + 17))(v7) == 0 )
      {
        v13 = (*(v7->_vptr_CKnownEntity + 10))(v7);
        if ( v13 >= (*(this->_vptr_INextBotEventResponder + 79))(this) )
        {
          v14 = **filter;
          v8 = (*(v7->_vptr_CKnownEntity + 4))(v7);
          if ( v14(filter, v8) != 0 )
          {
            v9 = (*(v7->_vptr_CKnownEntity + 5))(v7);
            if ( closeRange > ((((*v9 - *v5) * (*v9 - *v5)) + ((v9[1] - v5[1]) * (v9[1] - v5[1])))
                             + ((v9[2] - v5[2]) * (v9[2] - v5[2]))) )
              break;
          }
        }
      }
      if ( ++v6 >= this->m_knownEntityVector.m_Size )
        return close;
    }
    ++v6;
    closeRange = (((*v9 - *v5) * (*v9 - *v5)) + ((v9[1] - v5[1]) * (v9[1] - v5[1])))
               + ((v9[2] - v5[2]) * (v9[2] - v5[2]));
    close = v7;
  }
  while ( v6 < this->m_knownEntityVector.m_Size );
  return close;
}


// IVision::GetKnown  (line 189, @0x0000000002f2f9c0, libserver.so)  // inlines: entindex, operator[]
// calls: CEntityInstance::GetEntityIndex
const CKnownEntity *__fastcall IVision::GetKnown(const IVision *const this, const CBaseEntity *entity)
{
  __int64 v4; // r12
  const CKnownEntity *v5; // rbx
  int32 m_Data; // r15d
  const CEntityInstance *v7; // rax

  if ( entity == 0 || this->m_knownEntityVector.m_Size <= 0 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    v5 = &this->m_knownEntityVector.m_Memory.m_pMemory[v4];
    if ( (*(v5->_vptr_CKnownEntity + 4))(v5) != 0 )
    {
      m_Data = CEntityInstance::GetEntityIndex(entity).m_Data;
      v7 = (*(v5->_vptr_CKnownEntity + 4))(v5);
      if ( CEntityInstance::GetEntityIndex(v7).m_Data == m_Data && (*(v5->_vptr_CKnownEntity + 17))(v5) == 0 )
        break;
    }
    if ( ++v4 >= this->m_knownEntityVector.m_Size )
      return 0;
  }
  return v5;
}


// IVision::AddKnownEntity  (line 214, @0x0000000002f34810, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CKnownEntity, CopyConstruct<CKnownEntity>, Element, Find, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Set, UpdatePosition, curtime, operator CEntityInstance*, operator->, operator=, operator[]
// calls: CUtlMemory<CKnownEntity, int>::Grow, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
void __fastcall IVision::AddKnownEntity(IVision *const this, CBaseEntity *entity)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v6; // rbx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  __int64 m_Size; // r15
  __int64 v10; // rbx
  int v11; // r12d
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int v13; // eax
  __int64 v14; // r15
  bool v15; // zf
  char *v16; // r15
  Vector *AbsOrigin; // rax
  CEntityInstance *m_pInstance; // rdi
  CConcreteEntityList *v19; // rsi
  CEntityIdentity *v20; // rdx
  __int64 v21; // rcx
  CEntityIdentity *v22; // rdx
  __int64 v23; // rdi
  CNavArea *v24; // rax
  CGlobalVars *v25; // rbx
  float v26; // xmm0_4
  FnGlobalVarsWarningFunc v27; // rax
  CKnownEntity known; // [rsp+0h] [rbp-70h] BYREF

  known._vptr_CKnownEntity = off_47B4DD0;
  known.m_who.m_Index = -1;
  if ( entity != 0 )
  {
    m_pEntity = entity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      known.m_who.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  known.m_isVisible = 0;
  m_flCurrentTime = 0.0;
  known.m_whenLastSeen = -1.0;
  known.m_whenLastBecameVisible = -1.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  known.m_whenBecameKnown = m_flCurrentTime;
  known.m_hasLastKnownPositionBeenSeen = 0;
  if ( known.m_who.m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(known.m_who.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[known.m_who.m_Index & 0x1FF];
      if ( v8 != 0 && known.m_who.m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v8->m_pInstance);
        m_pInstance = 0;
        v19 = CEntityHandle::gm_pEntityList;
        known.m_lastKnownPostion = *AbsOrigin;
        if ( known.m_who.m_Index + 2 > 1 )
        {
          v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(known.m_who.m_Index) >> 9) & 0x3F];
          if ( v20 != 0 )
          {
            v21 = known.m_who.m_Index & 0x1FF;
            v19 = (8 * v21);
            v22 = &v20[v21];
            if ( v22 != 0 && known.m_who.m_Index == v22->m_EHandle.m_Index )
              m_pInstance = v22->m_pInstance;
          }
        }
        v23 = (*(m_pInstance->_vptr_IHandleEntity + 147))(m_pInstance, v19);
        v24 = 0;
        if ( v23 != 0 )
          v24 = (*(*v23 + 2888LL))(v23);
        v25 = gpGlobals;
        known.m_lastKnownArea = v24;
        v26 = 0.0;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v27 = gpGlobals->m_pfnWarningFunc;
            if ( v27 != 0 )
              (v27)(1, 0.0);
          }
          v26 = v25->m_flCurrentTime;
        }
        known.m_whenLastKnown = v26;
      }
    }
  }
  m_Size = this->m_knownEntityVector.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_21:
    v13 = m_Size;
    if ( this->m_knownEntityVector.m_Memory.m_nAllocationCount == m_Size )
    {
      CUtlMemory<CKnownEntity,int>::Grow(&this->m_knownEntityVector.m_Memory, 1);
      v13 = this->m_knownEntityVector.m_Size;
    }
    v14 = m_Size << 6;
    v15 = (this->m_knownEntityVector.m_Memory.m_pMemory + v14) == 0;
    v16 = this->m_knownEntityVector.m_Memory.m_pMemory + v14;
    this->m_knownEntityVector.m_Size = v13 + 1;
    if ( !v15 )
    {
      *v16 = off_47B4DD0;
      *(v16 + 2) = known.m_who.m_Index;
      *(v16 + 1) = known.m_lastKnownPostion;
      v16[24] = known.m_hasLastKnownPositionBeenSeen;
      *(v16 + 4) = known.m_lastKnownArea;
      *(v16 + 10) = LODWORD(known.m_whenLastSeen);
      *(v16 + 11) = LODWORD(known.m_whenLastBecameVisible);
      *(v16 + 12) = LODWORD(known.m_whenLastKnown);
      *(v16 + 13) = LODWORD(known.m_whenBecameKnown);
      v16[56] = known.m_isVisible;
    }
  }
  else
  {
    v10 = 0;
    v11 = 0;
    while ( (*(this->m_knownEntityVector.m_Memory.m_pMemory[v10]._vptr_CKnownEntity + 18))(
              &this->m_knownEntityVector.m_Memory.m_pMemory[v10],
              &known) == 0 )
    {
      m_Size = this->m_knownEntityVector.m_Size;
      ++v11;
      ++v10;
      if ( v11 >= m_Size )
        goto LABEL_21;
    }
  }
}


// IVision::ForgetEntity  (line 229, @0x0000000002f2fd20, libserver.so)  // inlines: Destruct<CKnownEntity>, Element, FastRemove, entindex, memcpy, operator[]
// calls: CEntityInstance::GetEntityIndex
void __fastcall IVision::ForgetEntity(IVision *const this, CBaseEntity *forgetMe)
{
  __int64 v3; // r15
  CKnownEntity *v4; // r14
  int32 m_Data; // r13d
  const CEntityInstance *v6; // rax
  int m_Size; // eax
  int v8; // eax
  CKnownEntity *m_pMemory; // rdx
  CKnownEntity *v10; // rax
  CKnownEntity *v11; // r12

  if ( forgetMe != 0 && this->m_knownEntityVector.m_Size > 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = &this->m_knownEntityVector.m_Memory.m_pMemory[v3];
      if ( (*(v4->_vptr_CKnownEntity + 4))(v4) != 0 )
      {
        m_Data = CEntityInstance::GetEntityIndex(forgetMe).m_Data;
        v6 = (*(v4->_vptr_CKnownEntity + 4))(v4);
        if ( CEntityInstance::GetEntityIndex(v6).m_Data == m_Data )
          break;
      }
      if ( ++v3 >= this->m_knownEntityVector.m_Size )
        return;
    }
    (*this->m_knownEntityVector.m_Memory.m_pMemory[v3]._vptr_CKnownEntity)(&this->m_knownEntityVector.m_Memory.m_pMemory[v3]);
    m_Size = this->m_knownEntityVector.m_Size;
    if ( m_Size > 0 )
    {
      v8 = m_Size - 1;
      if ( v3 != v8 )
      {
        m_pMemory = this->m_knownEntityVector.m_Memory.m_pMemory;
        v10 = &m_pMemory[v8];
        v11 = &m_pMemory[v3];
        v11->_vptr_CKnownEntity = v10->_vptr_CKnownEntity;
        *&v11->m_who.m_Index = *&v10->m_who.m_Index;
        *&v11->m_lastKnownPostion.y = *&v10->m_lastKnownPostion.y;
        *&v11->m_hasLastKnownPositionBeenSeen = *&v10->m_hasLastKnownPositionBeenSeen;
        v11->m_lastKnownArea = v10->m_lastKnownArea;
        *&v11->m_whenLastSeen = *&v10->m_whenLastSeen;
        *&v11->m_whenLastKnown = *&v10->m_whenLastKnown;
        *&v11->m_isVisible = *&v10->m_isVisible;
        v8 = this->m_knownEntityVector.m_Size - 1;
      }
      this->m_knownEntityVector.m_Size = v8;
    }
  }
}


// IVision::ForgetAllKnownEntities  (line 248, @0x0000000002f34520, libserver.so)
// calls: CUtlVectorBase<CKnownEntity, CUtlMemory<CKnownEntity, int> >::RemoveAll
void __fastcall IVision::ForgetAllKnownEntities(IVision *const this)
{
  CUtlVectorBase<CKnownEntity,CUtlMemory<CKnownEntity,int>>::RemoveAll(&this->m_knownEntityVector);
}


// IVision::GetKnownCount  (line 258, @0x0000000002f2f870, libserver.so)  // inlines: GetTeamNumber, IsAwareOf, operator[]
__int64 __fastcall IVision::GetKnownCount(const IVision *const this, int team, bool onlyVisible, float rangeLimit)
{
  __int64 v5; // r12
  int v6; // ebx
  unsigned int v7; // r14d
  CKnownEntity *v8; // r15
  __int64 v9; // rax
  INextBot *m_bot; // [rsp+0h] [rbp-50h]
  float v15; // [rsp+18h] [rbp-38h]
  unsigned __int8 (__fastcall *v16)(INextBot *, __int64, float); // [rsp+18h] [rbp-38h]

  if ( this->m_knownEntityVector.m_Size > 0 )
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = &this->m_knownEntityVector.m_Memory.m_pMemory[v5];
        if ( (*(v8->_vptr_CKnownEntity + 17))(v8) == 0 )
        {
          v15 = (*(v8->_vptr_CKnownEntity + 10))(v8);
          if ( v15 < (*(this->_vptr_INextBotEventResponder + 79))(this) )
            goto LABEL_3;
          if ( team == -1 )
            break;
          if ( team != *((*(v8->_vptr_CKnownEntity + 4))(v8) + 383) )
            goto LABEL_3;
          if ( !onlyVisible )
            goto LABEL_8;
LABEL_14:
          if ( (*(v8->_vptr_CKnownEntity + 12))(v8) != 0 )
            goto LABEL_8;
        }
LABEL_3:
        ++v6;
        ++v5;
        if ( this->m_knownEntityVector.m_Size <= v6 )
          return v7;
      }
      if ( onlyVisible )
        goto LABEL_14;
LABEL_8:
      if ( rangeLimit >= 0.0 )
      {
        m_bot = this->m_bot;
        v16 = *(m_bot->_vptr_INextBotEventResponder + 89);
        v9 = (*(v8->_vptr_CKnownEntity + 5))(v8);
        if ( v16(m_bot, v9, rangeLimit) == 0 )
          goto LABEL_3;
      }
      ++v6;
      ++v7;
      ++v5;
      if ( this->m_knownEntityVector.m_Size <= v6 )
        return v7;
    }
  }
  return 0;
}


// IVision::CollectPotentiallyVisibleEntities  (line 309, @0x0000000002f34f20, libserver.so)  // inlines: AddToTail, CopyConstruct<CBaseEntity*>, Element, ForEachActor<PopulateVisibleVector>, ForEachCombatCharacter<PopulateVisibleVector>, GrowMemory, RemoveAll, operator(), operator[]
// calls: UTIL_PlayerByIndex, CUtlMemory<CBaseEntity*, int>::Grow
void __fastcall IVision::CollectPotentiallyVisibleEntities(
        IVision *const this,
        CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > *potentiallyVisible)
{
  CUtlVectorBase<CBaseEntity*,CUtlMemory<CBaseEntity*,int> >::CAllocator *p_m_Memory; // r15
  int v3; // r13d
  CBasePlayer *v5; // rax
  CBasePlayer *v6; // rbx
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  CBaseEntity **v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r13
  int v13; // edx
  __int64 m_Size; // rax
  int v15; // edx
  CBaseEntity **v16; // rax
  __int64 v17; // [rsp+8h] [rbp-38h]
  int v18; // [rsp+8h] [rbp-38h]

  p_m_Memory = &potentiallyVisible->m_Memory;
  v3 = 1;
  potentiallyVisible->m_Size = 0;
  if ( gpGlobals->maxClients > 0 )
  {
    do
    {
      v5 = UTIL_PlayerByIndex(v3);
      v6 = v5;
      if ( v5 != 0
        && (*(v5->_vptr_IHandleEntity + 140))(v5) != 0
        && v6->m_iConnected != PlayerConnectedState::PlayerDisconnected
        && (*(v6->_vptr_IHandleEntity + 153))(v6) == 0 )
      {
        m_Size = potentiallyVisible->m_Size;
        v15 = potentiallyVisible->m_Size;
        if ( m_Size == potentiallyVisible->m_Memory.m_nAllocationCount )
        {
          v18 = potentiallyVisible->m_Size;
          CUtlMemory<CBaseEntity *,int>::Grow(p_m_Memory, 1);
          v15 = potentiallyVisible->m_Size;
          m_Size = v18;
        }
        potentiallyVisible->m_Size = v15 + 1;
        v16 = &potentiallyVisible->m_Memory.m_pMemory[m_Size];
        if ( v16 != 0 )
          *v16 = v6;
      }
      ++v3;
    }
    while ( v3 <= gpGlobals->maxClients );
  }
  m_Head = g_NextBotManager.m_botList.m_Head;
  if ( m_Head != 0xFFFF )
  {
    m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
    do
    {
      v10 = m_Head;
      v11 = (*(m_pMemory[v10].m_Element->_vptr_INextBotEventResponder + 66))(m_pMemory[v10].m_Element);
      v12 = potentiallyVisible->m_Size;
      v13 = potentiallyVisible->m_Size;
      if ( v12 == potentiallyVisible->m_Memory.m_nAllocationCount )
      {
        v17 = v11;
        CUtlMemory<CBaseEntity *,int>::Grow(&potentiallyVisible->m_Memory, 1);
        v13 = potentiallyVisible->m_Size;
        v11 = v17;
      }
      potentiallyVisible->m_Size = v13 + 1;
      v9 = &potentiallyVisible->m_Memory.m_pMemory[v12];
      if ( v9 != 0 )
        *v9 = v11;
      m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
      m_Head = m_pMemory[v10].m_Next;
    }
    while ( m_Head != 0xFFFF );
  }
}


// IVision::UpdateKnownEntities  (line 360, @0x0000000002f350a0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CKnownEntity, CUtlMemory, CUtlVector, CUtlVectorBase, CVProfScope, CollectVisible, Color, Contains, CopyConstruct<CBaseEntity*>, CopyConstruct<CKnownEntity>, Destruct<CKnownEntity>, Element, Get, GetBool, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetSerialNumber, GrowMemory, IndexToIdentity, IsAwareOf, IsDebugging, IsEnabled, IsValid, LookupEntity, NetworkStateChanged, Purge, Remove, RemoveAll, Set, SetColor, ShiftElementsLeft, Start, String, UpdatePosition, UpdateVisibilityStatus, V_memmove, curtime, entindex, memmove, operator CEntityInstance*, operator(), operator->, operator=, operator=<float>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVProfScope, ~CollectVisible
// calls: CVProfile::EnterScope, CVProfile::ExitScope, CUtlMemory<CBaseEntity*, int>::Grow, CEntityInstance::GetEntityIndex, IntervalTimer::Now, UTIL_GetListenServerHost, CBaseEntity::GetAbsOrigin, NDebugOverlay::HorzArrow, CUtlVectorBase<CKnownEntity, CUtlMemory<CKnownEntity, int> >::~CUtlVectorBase, memmove, CKnownEntity::UpdatePosition, NextBotManager::IsDebugFilterMatch (19 total)
// callers: IVision::Update
// strings: "NextBot", "IVision::UpdateKnownEntities( collect visible )", "%3.2f: %s Lost sight of %s(#%d)\n", "%3.2f: %s caught sight of %s(#%d)\n", "IVision::UpdateKnownEntities( update status )", "IVision::UpdateKnownEntities( new recognizes )" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall IVision::UpdateKnownEntities(IVision *const this)
{
  int m_enabled; // edx
  int (**vptr_INextBotEventResponder)(...); // rax
  int v4; // eax
  CKnownEntity *v5; // r14
  __int64 v6; // rbx
  int v7; // r12d
  int32 m_Data; // r13d
  CGlobalVars *v9; // r12
  FnGlobalVarsWarningFunc v10; // rax
  unsigned int m_flCurrentTime_low; // r12d
  float v12; // xmm0_4
  __m128i v13; // xmm2
  IntervalTimer *v14; // rbx
  __m128i v15; // xmm0
  int v16; // r12d
  int v17; // eax
  int v18; // r12d
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rbx
  int v22; // r12d
  CBaseEntity *v23; // r13
  CBasePlayer *ListenServerHost; // rax
  __int64 v25; // rax
  int (**v26)(...); // rax
  __int64 v27; // r13
  __m128i v28; // xmm0
  float v29; // r12d
  float v30; // xmm0_4
  int (**v31)(...); // rax
  bool v32; // zf
  int (**v33)(...); // rax
  const Vector *v34; // rbx
  const CBaseEntity *v35; // rax
  const Vector *v36; // rax
  INextBot *v37; // r12
  CKnownEntity *v38; // rbx
  unsigned __int8 (__fastcall *v39)(INextBot *, __int64); // r14
  __int64 v40; // rax
  int (**vptr_CKnownEntity)(...); // rax
  __m128i v42; // xmm0
  float v43; // r12d
  float v44; // xmm0_4
  int (**v45)(...); // rax
  int (**v46)(...); // rax
  const Vector *v47; // rbx
  const CBaseEntity *v48; // rax
  const Vector *v49; // rax
  int m_Size; // eax
  INextBot *m_bot; // r12
  INextBot *v52; // rbx
  void (__fastcall *v53)(INextBot *, __int64); // r12
  __int64 v54; // rax
  unsigned __int8 (__fastcall *v55)(IVision *const, __int64, _QWORD); // rbx
  __int64 v56; // rax
  CBaseEntity *v57; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v59; // eax
  __int16 v60; // cx
  CGlobalVars *v61; // r12
  FnGlobalVarsWarningFunc v62; // rax
  float v63; // xmm0_4
  CEntityIdentity *v64; // rdx
  CEntityIdentity *v65; // rdx
  CGlobalVars *v66; // rbx
  void (__fastcall *v67)(__int64); // rax
  int v68; // xmm0_4
  int v69; // ebx
  int v70; // eax
  CKnownEntity *v71; // rax
  float m_lastVisionUpdateTimestamp; // r12d
  INextBot *v73; // r12
  INextBot *v74; // rbx
  void (__fastcall *v75)(INextBot *, __int64); // r12
  __int64 v76; // rax
  CGlobalVars *v77; // r12
  CGlobalVars *v78; // rax
  FnGlobalVarsWarningFunc v79; // rdx
  int v80; // xmm0_4
  const CEntityInstance *v81; // rax
  CEntityIndex v82; // r12d
  __int64 v83; // rax
  const char *v84; // r13
  CGlobalVars *v85; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  const CEntityInstance *v88; // rax
  CEntityIndex v89; // r12d
  __int64 v90; // rax
  const char *v91; // r13
  __int64 v92; // rax
  CGlobalVars *v93; // rbx
  FnGlobalVarsWarningFunc v94; // rax
  double v95; // xmm0_8
  const Vector *v96; // rbx
  __int64 v97; // rax
  const Vector *v98; // rax
  const Vector *v99; // rbx
  const CBaseEntity *v100; // rax
  const Vector *v101; // rax
  const Vector *v102; // rbx
  const CBaseEntity *v103; // rax
  const Vector *v104; // rax
  const Vector *v105; // rbx
  const CBaseEntity *v106; // rax
  const Vector *v107; // rax
  const Vector *v108; // rbx
  const CBaseEntity *v109; // rax
  const Vector *v110; // rax
  const Vector *AbsOrigin; // rax
  CEntityInstance *m_pInstance; // rdi
  CConcreteEntityList *v113; // rsi
  CEntityIdentity *v114; // rdx
  __int64 v115; // rcx
  CEntityIdentity *v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rax
  CGlobalVars *v119; // r12
  void (__fastcall *v120)(__int64); // rax
  float v121; // xmm0_4
  bool VProf_379; // [rsp+18h] [rbp-E8h]
  bool VProf_362; // [rsp+27h] [rbp-D9h]
  int VProf_454; // [rsp+30h] [rbp-D0h]
  bool VProf_454a; // [rsp+30h] [rbp-D0h]
  const CEntityInstance *i; // [rsp+38h] [rbp-C8h]
  int ia; // [rsp+38h] [rbp-C8h]
  int ib; // [rsp+38h] [rbp-C8h]
  float ie; // [rsp+38h] [rbp-C8h]
  const char *ic; // [rsp+38h] [rbp-C8h]
  const char *id; // [rsp+38h] [rbp-C8h]
  CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > potentiallyVisible; // [rsp+40h] [rbp-C0h] BYREF
  CollectVisible visibleNow; // [rsp+60h] [rbp-A0h] BYREF
  CUtlVector<CKnownEntity,CUtlMemory<CKnownEntity,int> > knownVector; // [rsp+80h] [rbp-80h] BYREF
  bool v135; // [rsp+98h] [rbp-68h]
  CNavArea *v136; // [rsp+A0h] [rbp-60h]
  int v137; // [rsp+A8h] [rbp-58h]
  int v138; // [rsp+ACh] [rbp-54h]
  float v139; // [rsp+B0h] [rbp-50h]
  float v140; // [rsp+B4h] [rbp-4Ch]
  char v141; // [rsp+B8h] [rbp-48h]
  Color v142; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v143; // [rsp+C8h] [rbp-38h]

  v143 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_362 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "IVision::UpdateKnownEntities", 0, "NextBot", 0, 4);
  vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
  potentiallyVisible.m_Memory.m_pMemory = 0;
  potentiallyVisible.m_Memory.m_nAllocationCount = 0;
  potentiallyVisible.m_Memory.m_nGrowSize = 0;
  vptr_INextBotEventResponder[77](this);
  visibleNow.m_recognized.m_Size = 0;
  visibleNow.m_recognized.m_Memory.m_pMemory = 0;
  visibleNow.m_recognized.m_Memory.m_nAllocationCount = 0;
  visibleNow.m_vision = this;
  visibleNow.m_recognized.m_Memory.m_nGrowSize = 0;
  v4 = g_VProfCurrentProfile.m_enabled;
  VProf_379 = v4 != 0;
  if ( v4 != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "IVision::UpdateKnownEntities( update status )", 0, "NextBot", 0, 4);
  if ( this->m_knownEntityVector.m_Size > 0 )
  {
    for ( VProf_454 = 0; VProf_454 < v17; ++VProf_454 )
    {
      v5 = &this->m_knownEntityVector.m_Memory.m_pMemory[VProf_454];
      if ( (*(v5->_vptr_CKnownEntity + 4))(v5) == 0 || (*(v5->_vptr_CKnownEntity + 17))(v5) != 0 )
      {
        (*this->m_knownEntityVector.m_Memory.m_pMemory[VProf_454]._vptr_CKnownEntity)(&this->m_knownEntityVector.m_Memory.m_pMemory[VProf_454]);
        m_Size = this->m_knownEntityVector.m_Size;
        if ( m_Size - VProf_454 - 1 > 0 )
        {
          memmove(
            &this->m_knownEntityVector.m_Memory.m_pMemory[VProf_454],
            &this->m_knownEntityVector.m_Memory.m_pMemory[VProf_454 + 1],
            (this->m_knownEntityVector.m_Size - VProf_454 - 1) << 6);
          m_Size = this->m_knownEntityVector.m_Size;
        }
        --VProf_454;
        v17 = m_Size - 1;
        this->m_knownEntityVector.m_Size = v17;
        continue;
      }
      i = (*(v5->_vptr_CKnownEntity + 4))(v5);
      if ( visibleNow.m_recognized.m_Size <= 0 )
      {
LABEL_61:
        if ( (*(v5->_vptr_CKnownEntity + 12))(v5) != 0 )
        {
          (*(v5->_vptr_CKnownEntity + 11))(v5, 0);
          m_bot = this->m_bot;
          v52 = m_bot;
          if ( (g_NextBotManager.m_debugType & 0x20) != 0 )
          {
            if ( NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
              && (*(m_bot->_vptr_INextBotEventResponder + 96))(m_bot, 32) != 0 )
            {
              v81 = (*(v5->_vptr_CKnownEntity + 4))(v5);
              v82.m_Data = CEntityInstance::GetEntityIndex(v81).m_Data;
              v83 = *((*(v5->_vptr_CKnownEntity + 4))(v5) + 8);
              v84 = "";
              if ( *(v83 + 32) != 0 )
                v84 = *(v83 + 32);
              ic = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 97))(this->m_bot);
              v85 = gpGlobals;
              if ( gpGlobals != 0 )
              {
                if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
                {
                  m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
                  if ( m_pfnWarningFunc != 0 )
                    m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                }
                m_flCurrentTime = v85->m_flCurrentTime;
              }
              else
              {
                m_flCurrentTime = 0.0;
              }
              v142._color[0] = -1;
              v142._color[1] = 0;
              v142._color[2] = 0;
              v142._color[3] = -1;
              ConColorMsg(&v142, "%3.2f: %s Lost sight of %s(#%d)\n", m_flCurrentTime, ic, v84, v82.m_Data);
            }
            v52 = this->m_bot;
          }
          v53 = *(v52->_vptr_INextBotEventResponder + 21);
          v54 = (*(v5->_vptr_CKnownEntity + 4))(v5);
          v53(v52, v54);
        }
        if ( (*(v5->_vptr_CKnownEntity + 6))(v5) == 0 )
        {
          v55 = *(this->_vptr_INextBotEventResponder + 81);
          v56 = (*(v5->_vptr_CKnownEntity + 5))(v5);
          if ( v55(this, v56, 0) != 0 )
            (*(v5->_vptr_CKnownEntity + 7))(v5);
        }
      }
      else
      {
        v6 = 0;
        v7 = 0;
        while ( 1 )
        {
          m_Data = CEntityInstance::GetEntityIndex(visibleNow.m_recognized.m_Memory.m_pMemory[v6]).m_Data;
          if ( m_Data == CEntityInstance::GetEntityIndex(i).m_Data )
            break;
          ++v7;
          ++v6;
          if ( v7 >= visibleNow.m_recognized.m_Size )
            goto LABEL_61;
        }
        (*(v5->_vptr_CKnownEntity + 3))(v5);
        (*(v5->_vptr_CKnownEntity + 11))(v5, 1);
        v9 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v10 = gpGlobals->m_pfnWarningFunc;
            if ( v10 != 0 )
              v10(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          }
          m_flCurrentTime_low = LODWORD(v9->m_flCurrentTime);
        }
        else
        {
          m_flCurrentTime_low = 0;
        }
        v12 = (*(v5->_vptr_CKnownEntity + 14))(v5);
        v13 = _mm_cvtsi32_si128(m_flCurrentTime_low);
        *v13.m128i_i32 = *v13.m128i_i32 - v12;
        if ( COERCE_FLOAT(_mm_cvtsi128_si32(v13)) >= (*(this->_vptr_INextBotEventResponder + 79))(this) )
        {
          m_lastVisionUpdateTimestamp = this->m_lastVisionUpdateTimestamp;
          ie = m_lastVisionUpdateTimestamp - (*(v5->_vptr_CKnownEntity + 14))(v5);
          if ( (*(this->_vptr_INextBotEventResponder + 79))(this) > ie )
          {
            v73 = this->m_bot;
            if ( (g_NextBotManager.m_debugType & 0x20) != 0 )
            {
              if ( NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
                && (*(v73->_vptr_INextBotEventResponder + 96))(v73, 32) != 0 )
              {
                v88 = (*(v5->_vptr_CKnownEntity + 4))(v5);
                v89.m_Data = CEntityInstance::GetEntityIndex(v88).m_Data;
                v90 = *((*(v5->_vptr_CKnownEntity + 4))(v5) + 8);
                v91 = "";
                if ( *(v90 + 32) != 0 )
                  v91 = *(v90 + 32);
                v92 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 97))(this->m_bot);
                v93 = gpGlobals;
                id = v92;
                if ( gpGlobals != 0 )
                {
                  if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
                  {
                    v94 = gpGlobals->m_pfnWarningFunc;
                    if ( v94 != 0 )
                      v94(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                  }
                  v95 = v93->m_flCurrentTime;
                }
                else
                {
                  v95 = 0.0;
                }
                v142._color[0] = 0;
                v142._color[1] = -1;
                v142._color[2] = 0;
                v142._color[3] = -1;
                ConColorMsg(&v142, "%3.2f: %s caught sight of %s(#%d)\n", v95, id, v91, v89.m_Data);
                v96 = (*(v5->_vptr_CKnownEntity + 5))(v5);
                v97 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
                v98 = (*(*v97 + 536LL))(v97);
                NDebugOverlay::Line(v98, v96, 255, 255, 0, 0, 0.2);
              }
              v74 = this->m_bot;
            }
            else
            {
              v74 = this->m_bot;
            }
            v75 = *(v74->_vptr_INextBotEventResponder + 20);
            v76 = (*(v5->_vptr_CKnownEntity + 4))(v5);
            v75(v74, v76);
          }
        }
        v14 = &this->m_notVisibleTimer[*((*(v5->_vptr_CKnownEntity + 4))(v5) + 383)];
        *v15.m128i_i32 = IntervalTimer::Now(v14);
        v16 = _mm_cvtsi128_si32(v15);
        if ( *v15.m128i_i32 != v14->m_timestamp.m_Value )
        {
          (*(v14->_vptr_IntervalTimer + 2))(v14, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          LODWORD(v14->m_timestamp.m_Value) = v16;
          v17 = this->m_knownEntityVector.m_Size;
          continue;
        }
      }
      v17 = this->m_knownEntityVector.m_Size;
    }
  }
  if ( VProf_379 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  v18 = g_VProfCurrentProfile.m_enabled;
  VProf_454a = v18 != 0;
  if ( v18 != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "IVision::UpdateKnownEntities( new recognizes )", 0, "NextBot", 0, 4);
  if ( visibleNow.m_recognized.m_Size > 0 )
  {
    ia = 0;
    v19 = 0;
    while ( 1 )
    {
      v20 = this->m_knownEntityVector.m_Size;
      if ( v20 <= 0 )
      {
        v22 = 0;
      }
      else
      {
        v21 = 0;
        while ( 1 )
        {
          v22 = v21;
          v23 = visibleNow.m_recognized.m_Memory.m_pMemory[v19];
          if ( v23 == (*(this->m_knownEntityVector.m_Memory.m_pMemory[v21]._vptr_CKnownEntity + 4))(&this->m_knownEntityVector.m_Memory.m_pMemory[v21]) )
            break;
          v20 = this->m_knownEntityVector.m_Size;
          v22 = ++v21;
          if ( v20 <= v21 )
            goto LABEL_34;
        }
        v20 = this->m_knownEntityVector.m_Size;
      }
LABEL_34:
      if ( v20 != v22 )
        goto LABEL_35;
      v57 = visibleNow.m_recognized.m_Memory.m_pMemory[v19];
      *&knownVector.m_Size = off_47B4DD0;
      LODWORD(knownVector.m_Memory.m_pMemory) = -1;
      if ( v57 != 0 )
      {
        m_pEntity = v57->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v59 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v60 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v60 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(knownVector.m_Memory.m_pMemory) = v60 | knownVector.m_Memory.m_pMemory & 0x8000;
          LODWORD(knownVector.m_Memory.m_pMemory) = (v59 << 15) | knownVector.m_Memory.m_pMemory & 0x7FFF;
        }
      }
      v137 = -1082130432;
      v138 = -1082130432;
      v141 = 0;
      v61 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v62 = gpGlobals->m_pfnWarningFunc;
          if ( v62 != 0 )
            v62(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        v63 = v61->m_flCurrentTime;
      }
      else
      {
        v63 = 0.0;
      }
      v140 = v63;
      v135 = 0;
      if ( (LODWORD(knownVector.m_Memory.m_pMemory) + 2) > 1 )
      {
        v64 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(knownVector.m_Memory.m_pMemory) >> 9) & 0x3F];
        if ( v64 != 0 )
        {
          v65 = &v64[knownVector.m_Memory.m_pMemory & 0x1FF];
          if ( v65 != 0 && LODWORD(knownVector.m_Memory.m_pMemory) == v65->m_EHandle.m_Index && v65->m_pInstance != 0 )
            break;
        }
      }
LABEL_82:
      CKnownEntity::UpdatePosition(&knownVector);
      if ( v141 != 0 )
      {
        v66 = gpGlobals;
        if ( gpGlobals != 0 )
          goto LABEL_84;
      }
      else
      {
        v77 = gpGlobals;
        v78 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( gpGlobals->m_bEnableAssertions || gpGlobals->m_bInSimulation )
          {
            v66 = gpGlobals;
          }
          else
          {
            v79 = gpGlobals->m_pfnWarningFunc;
            if ( v79 != 0 )
            {
              v79(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
              v66 = gpGlobals;
              v78 = gpGlobals;
            }
            else
            {
              v66 = gpGlobals;
            }
          }
          v80 = LODWORD(v77->m_flCurrentTime);
        }
        else
        {
          v66 = 0;
          v80 = 0;
        }
        v138 = v80;
        if ( v78 != 0 )
        {
LABEL_84:
          if ( !v66->m_bEnableAssertions && !v66->m_bInSimulation )
          {
            v67 = v66->m_pfnWarningFunc;
            if ( v67 != 0 )
              v67(1);
          }
          v68 = LODWORD(v66->m_flCurrentTime);
          goto LABEL_89;
        }
      }
      v68 = 0;
LABEL_89:
      v69 = this->m_knownEntityVector.m_Size;
      v137 = v68;
      v141 = 1;
      v70 = v69;
      if ( v69 == this->m_knownEntityVector.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CKnownEntity,int>::Grow(&this->m_knownEntityVector.m_Memory, 1);
        v70 = this->m_knownEntityVector.m_Size;
      }
      this->m_knownEntityVector.m_Size = v70 + 1;
      v71 = &this->m_knownEntityVector.m_Memory.m_pMemory[v69];
      if ( v71 != 0 )
      {
        v71->_vptr_CKnownEntity = off_47B4DD0;
        *&v71->m_who.m_Index = knownVector.m_Memory;
        v71->m_hasLastKnownPositionBeenSeen = v135;
        v71->m_lastKnownArea = v136;
        LODWORD(v71->m_whenLastSeen) = v137;
        LODWORD(v71->m_whenLastBecameVisible) = v138;
        v71->m_whenLastKnown = v139;
        v71->m_whenBecameKnown = v140;
        v71->m_isVisible = v141;
      }
LABEL_35:
      ++ia;
      ++v19;
      if ( visibleNow.m_recognized.m_Size <= ia )
        goto LABEL_36;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(v65->m_pInstance);
    m_pInstance = 0;
    v113 = CEntityHandle::gm_pEntityList;
    HIDWORD(knownVector.m_Memory.m_pMemory) = LODWORD(AbsOrigin->x);
    knownVector.m_Memory.m_nAllocationCount = LODWORD(AbsOrigin->y);
    knownVector.m_Memory.m_nGrowSize = LODWORD(AbsOrigin->z);
    if ( (LODWORD(knownVector.m_Memory.m_pMemory) + 2) > 1 )
    {
      v114 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(knownVector.m_Memory.m_pMemory) >> 9) & 0x3F];
      if ( v114 != 0 )
      {
        v115 = knownVector.m_Memory.m_pMemory & 0x1FF;
        v113 = (8 * v115);
        v116 = &v114[v115];
        if ( v116 != 0 && LODWORD(knownVector.m_Memory.m_pMemory) == v116->m_EHandle.m_Index )
          m_pInstance = v116->m_pInstance;
      }
    }
    v117 = (*(m_pInstance->_vptr_IHandleEntity + 147))(m_pInstance, v113);
    if ( v117 != 0 )
    {
      v118 = (*(*v117 + 2888LL))(v117);
      v119 = gpGlobals;
      v136 = v118;
      if ( gpGlobals != 0 )
        goto LABEL_154;
    }
    else
    {
      v119 = gpGlobals;
      v136 = 0;
      if ( gpGlobals != 0 )
      {
LABEL_154:
        if ( !v119->m_bEnableAssertions && !v119->m_bInSimulation )
        {
          v120 = v119->m_pfnWarningFunc;
          if ( v120 != 0 )
            v120(1);
        }
        v121 = v119->m_flCurrentTime;
        goto LABEL_159;
      }
    }
    v121 = 0.0;
LABEL_159:
    v139 = v121;
    goto LABEL_82;
  }
LABEL_36:
  if ( VProf_454a )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  if ( nb_debug_known_entities.m_pParent->m_Value.m_nValue != 0 )
  {
    ListenServerHost = UTIL_GetListenServerHost();
    if ( ListenServerHost != 0 )
    {
      v25 = (*(ListenServerHost->_vptr_IHandleEntity + 439))(ListenServerHost);
      if ( v25 != 0 && (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 76))(this->m_bot, v25) != 0 )
      {
        v26 = this->_vptr_INextBotEventResponder;
        knownVector.m_Size = 0;
        knownVector.m_Memory.m_pMemory = 0;
        knownVector.m_Memory.m_nAllocationCount = 0;
        knownVector.m_Memory.m_nGrowSize = 0;
        v26[67](this, &knownVector);
        if ( knownVector.m_Size > 0 )
        {
          ib = 0;
          v27 = 0;
          do
          {
            v37 = this->m_bot;
            v38 = &knownVector.m_Memory.m_pMemory[v27];
            v39 = *(v37->_vptr_INextBotEventResponder + 75);
            v40 = (*(knownVector.m_Memory.m_pMemory[v27]._vptr_CKnownEntity + 4))(&knownVector.m_Memory.m_pMemory[v27]);
            v32 = v39(v37, v40) == 0;
            vptr_CKnownEntity = v38->_vptr_CKnownEntity;
            if ( v32 )
            {
              *v42.m128i_i64 = (vptr_CKnownEntity[10])(v38);
              v43 = COERCE_FLOAT(_mm_cvtsi128_si32(v42));
              v44 = (*(this->_vptr_INextBotEventResponder + 79))(this);
              v45 = v38->_vptr_CKnownEntity;
              if ( v43 < v44 )
              {
                v102 = (v45[5])(v38);
                v103 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
                v104 = CBaseEntity::GetAbsOrigin(v103);
                NDebugOverlay::HorzArrow(v104, v102, 1.0, 100, 0, 0, 128, 1, 0.01023);
              }
              else
              {
                v32 = v45[12](v38) == 0;
                v46 = v38->_vptr_CKnownEntity;
                if ( v32 )
                {
                  v108 = (v46[5])(v38);
                  v109 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
                  v110 = CBaseEntity::GetAbsOrigin(v109);
                  NDebugOverlay::HorzArrow(v110, v108, 2.0, 100, 0, 0, 255, 1, 0.01023);
                }
                else
                {
                  v47 = (v46[5])(v38);
                  v48 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
                  v49 = CBaseEntity::GetAbsOrigin(v48);
                  NDebugOverlay::HorzArrow(v49, v47, 5.0, 255, 0, 0, 255, 1, 0.01023);
                }
              }
            }
            else
            {
              *v28.m128i_i64 = (vptr_CKnownEntity[10])(v38);
              v29 = COERCE_FLOAT(_mm_cvtsi128_si32(v28));
              v30 = (*(this->_vptr_INextBotEventResponder + 79))(this);
              v31 = v38->_vptr_CKnownEntity;
              if ( v29 < v30 )
              {
                v99 = (v31[5])(v38);
                v100 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
                v101 = CBaseEntity::GetAbsOrigin(v100);
                NDebugOverlay::HorzArrow(v101, v99, 1.0, 0, 100, 0, 128, 1, 0.01023);
              }
              else
              {
                v32 = v31[12](v38) == 0;
                v33 = v38->_vptr_CKnownEntity;
                if ( v32 )
                {
                  v105 = (v33[5])(v38);
                  v106 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
                  v107 = CBaseEntity::GetAbsOrigin(v106);
                  NDebugOverlay::HorzArrow(v107, v105, 2.0, 0, 100, 0, 255, 1, 0.01023);
                }
                else
                {
                  v34 = (v33[5])(v38);
                  v35 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
                  v36 = CBaseEntity::GetAbsOrigin(v35);
                  NDebugOverlay::HorzArrow(v36, v34, 5.0, 0, 255, 0, 255, 1, 0.01023);
                }
              }
            }
            ++ib;
            ++v27;
          }
          while ( knownVector.m_Size > ib );
        }
        CUtlVectorBase<CKnownEntity,CUtlMemory<CKnownEntity,int>>::~CUtlVectorBase(&knownVector);
      }
    }
  }
  visibleNow.m_recognized.m_Size = 0;
  if ( (visibleNow.m_recognized.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CBaseEntity *,int>::Purge(&visibleNow.m_recognized.m_Memory);
    if ( (visibleNow.m_recognized.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(&visibleNow.m_recognized.m_Memory);
  }
  if ( (potentiallyVisible.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CBaseEntity *,int>::Purge(&potentiallyVisible.m_Memory);
    if ( (potentiallyVisible.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(&potentiallyVisible.m_Memory);
  }
  if ( VProf_362 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// IVision::Update  (line 534, @0x0000000002f36220, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetBool, GetElapsed, GetInt, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, curtime, ~CMicroProfilerGuard, ~CVProfScope
// calls: CUtlVectorBase<CKnownEntity, CUtlMemory<CKnownEntity, int> >::RemoveAll, IVision::UpdateKnownEntities, CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// strings: "IVision::Update", "NextBot"
void __fastcall IVision::Update(IVision *const this)
{
  int m_enabled; // esi
  bool v3; // r14
  CGlobalVars *v4; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm0_4
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v8; // r13
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v11; // rax

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v8 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId(this) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "IVision::Update" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "IVision::Update", 0, "NextBot", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v11 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v11->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v8 + __rdtsc();
  }
  if ( nb_blind.m_pParent->m_Value.m_nValue != 0 )
  {
    CUtlVectorBase<CKnownEntity,CUtlMemory<CKnownEntity,int>>::RemoveAll(&this->m_knownEntityVector);
    if ( !v3 )
      return;
LABEL_12:
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return;
  }
  IVision::UpdateKnownEntities(this);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  this->m_lastVisionUpdateTimestamp = m_flCurrentTime;
  if ( v3 )
    goto LABEL_12;
}


// IVision::IsAbleToSee  (line 561, @0x0000000002f31330, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, ~CMicroProfilerGuard, ~CVProfScope
// calls: CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// strings: "IVision::IsAbleToSee", "NextBot"
// local variable allocation has failed, the output may be wrong!
bool __fastcall IVision::IsAbleToSee(
        const IVision *const this,
        CBaseEntity *subject,
        IVision::FieldOfViewCheckType checkFOV,
        Vector *visibleSpot)
{
  int m_enabled; // eax
  INextBot *m_bot; // r13
  unsigned __int8 (__fastcall *v8)(INextBot *, CBaseEntity *); // r15
  bool result; // al
  __int64 v10; // rax
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v12; // r13
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v15; // rax
  IVision::FieldOfViewCheckType checkFOVa; // [rsp+8h] [rbp-38h]
  bool VProf_563; // [rsp+Ch] [rbp-34h]
  bool VProf_563a; // [rsp+Ch] [rbp-34h]

  checkFOVa = checkFOV;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_563 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v12 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId(this) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "IVision::IsAbleToSee" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "IVision::IsAbleToSee", 0, "NextBot", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v15 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v15->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    visibleSpot = (m_numTimeBaseTicks - v12);
    *&checkFOV = visibleSpot + __rdtsc();
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = *&checkFOV;
  }
  m_bot = this->m_bot;
  v8 = *(m_bot->_vptr_INextBotEventResponder + 90);
  (*(this->_vptr_INextBotEventResponder + 78))(this, subject, *&checkFOV, visibleSpot);
  if ( v8(m_bot, subject) == 0
    && (v10 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot),
        (*(*v10 + 2232LL))(v10, subject) == 0)
    && (checkFOVa != IVision::FieldOfViewCheckType::USE_FOV
     || (*(this->_vptr_INextBotEventResponder + 85))(this, subject) != 0)
    && (*(this->_vptr_INextBotEventResponder + 90))(this, subject, 0) != 0 )
  {
    result = (*(this->_vptr_INextBotEventResponder + 82))(this, subject);
  }
  else
  {
    result = 0;
  }
  if ( VProf_563 )
  {
    VProf_563a = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return VProf_563a;
  }
  return result;
}


// IVision::IsAbleToSee  (line 593, @0x0000000002f31530, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, ~CMicroProfilerGuard, ~CVProfScope
// calls: CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// strings: "IVision::IsAbleToSee", "NextBot"
bool __fastcall IVision::IsAbleToSee(
        const IVision *const this,
        const Vector *const pos,
        IVision::FieldOfViewCheckType checkFOV)
{
  int m_enabled; // edx
  INextBot *m_bot; // r13
  unsigned __int8 (__fastcall *v7)(INextBot *, const Vector *const); // r15
  bool result; // al
  __int64 v9; // rax
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v11; // r13
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v14; // rax
  bool VProf_595; // [rsp+Ch] [rbp-34h]
  bool VProf_595a; // [rsp+Ch] [rbp-34h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_595 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v11 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId(this) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "IVision::IsAbleToSee" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "IVision::IsAbleToSee", 0, "NextBot", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v14 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v14->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v11 + __rdtsc();
  }
  m_bot = this->m_bot;
  v7 = *(m_bot->_vptr_INextBotEventResponder + 91);
  (*(this->_vptr_INextBotEventResponder + 78))(this);
  if ( v7(m_bot, pos) == 0
    && (v9 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot),
        (*(*v9 + 2224LL))(v9, pos) == 0)
    && (checkFOV != IVision::FieldOfViewCheckType::USE_FOV
     || (*(this->_vptr_INextBotEventResponder + 84))(this, pos) != 0) )
  {
    result = (*(this->_vptr_INextBotEventResponder + 89))(this, pos);
  }
  else
  {
    result = 0;
  }
  if ( VProf_595 )
  {
    VProf_595a = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return VProf_595a;
  }
  return result;
}


// IVision::SetFieldOfView  (line 623, @0x0000000002f2e740, libserver.so)
// calls: cos
void __fastcall IVision::SetFieldOfView(IVision *const this, float a2, float horizAngle)
{
  __m128d v4; // xmm0

  this->m_FOV = a2;
  v4.m128d_f64[0] = cos((a2 * 0.5) * 3.141592653589793 / 180.0);
  this->m_cosHalfFOV = _mm_movedup_pd(v4).m128d_f64[0];
}


// IVision::IsInFieldOfView  (line 631, @0x0000000002f2e1b0, libserver.so)  // inlines: DotProduct, LengthSqr, PointWithinViewAngle, VectorSubtract, operator-
bool __fastcall IVision::IsInFieldOfView(const IVision *const this, const Vector *const pos)
{
  __int64 v4; // rax
  float *v5; // r12
  __int64 v6; // rax
  float *v7; // rax
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  bool result; // al
  float m_cosHalfFOV; // [rsp+Ch] [rbp-24h]

  m_cosHalfFOV = this->m_cosHalfFOV;
  v4 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
  v5 = (*(*v4 + 544LL))(v4);
  v6 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
  v7 = (*(*v6 + 536LL))(v6);
  v8 = pos->x - *v7;
  v9 = pos->y - v7[1];
  v10 = pos->z - v7[2];
  v11 = ((*v5 * v8) + (v5[1] * v9)) + (v5[2] * v10);
  if ( m_cosHalfFOV > 0.0 )
    return v11 >= 0.0 && (v11 * v11) >= (((((v8 * v8) + (v9 * v9)) + (v10 * v10)) * m_cosHalfFOV) * m_cosHalfFOV);
  result = 1;
  if ( v11 <= 0.0 )
    return (((((v8 * v8) + (v9 * v9)) + (v10 * v10)) * m_cosHalfFOV) * m_cosHalfFOV) >= (v11 * v11);
  return result;
}


// IVision::IsInFieldOfView  (line 658, @0x0000000002f2edd0, libserver.so)  // inlines: EyePosition
bool __fastcall IVision::IsInFieldOfView(const IVision *const this, const CBaseEntity *pSubject)
{
  __int64 (__fastcall *v4)(const IVision *const, double *); // r13
  int v5; // xmm1_4
  bool result; // al
  bool (__fastcall *v7)(const IVision *const, double *); // r13
  int v8; // xmm1_4
  double v9; // [rsp+0h] [rbp-40h] BYREF
  int v10; // [rsp+8h] [rbp-38h]
  double v11; // [rsp+10h] [rbp-30h] BYREF
  int v12; // [rsp+18h] [rbp-28h]

  v4 = *(this->_vptr_INextBotEventResponder + 84);
  v11 = (*(pSubject->_vptr_IHandleEntity + 62))(pSubject);
  v12 = v5;
  result = v4(this, &v11);
  if ( !result )
  {
    v7 = *(this->_vptr_INextBotEventResponder + 84);
    v11 = (*(pSubject->_vptr_IHandleEntity + 164))(pSubject);
    v12 = v8;
    v10 = v8;
    v9 = v11;
    return v7(this, &v9);
  }
  return result;
}


// IVision::IsLineOfSightClear  (line 674, @0x0000000002f31d60, libserver.so)  // inlines: CGameTrace, CVProfCounter, CVProfScope, EnableInteractsWith, GetFloat, Increment, Init, IsEnabled, LengthSqr, NextBotVisionTraceFilter, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, ~CTraceFilter, ~CTraceFilterSimple, ~CVProfScope, ~NextBotVisionTraceFilter
// calls: __cxa_guard_acquire, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CVProfile::ExitScope, CVProfile::EnterScope, CVProfile::FindOrCreateCounter(char const*,CounterGroup_t), __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "NextBot", "IVision::IsLineOfSightClear"
// globals: `guard variable for'IVision::IsLineOfSightClear(Vector const&)::_counter, IVision::IsLineOfSightClear(Vector const&)::_counter, __dso_handle, CVProfCounter::~CVProfCounter()
bool __fastcall IVision::IsLineOfSightClear(const IVision *const this, const Vector *const pos)
{
  int m_enabled; // r8d
  bool v5; // r15
  const CBaseEntity *v6; // rax
  INextBot *m_bot; // rdi
  __int64 v8; // rax
  Vector *v9; // rax
  float y; // xmm3_4
  float z; // xmm2_4
  bool result; // al
  bool v13; // [rsp+Ch] [rbp-174h]
  NextBotVisionTraceFilter filter; // [rsp+10h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+50h] [rbp-130h] BYREF
  trace_t v16; // [rsp+A0h] [rbp-E0h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v5 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "IVision::IsLineOfSightClear", 0, "NextBot", 0, 4);
  if ( `guard variable for'IVision::IsLineOfSightClear(Vector const&)::_counter == 0
    && __cxa_guard_acquire(&`guard variable for'IVision::IsLineOfSightClear(Vector const&)::_counter) != 0 )
  {
    IVision::IsLineOfSightClear(Vector const&)const::_counter.m_pCounter = CVProfile::FindOrCreateCounter(
                                                                             &g_VProfCurrentProfile,
                                                                             "IVision::IsLineOfSightClear",
                                                                             CounterGroup_t::COUNTER_GROUP_DEFAULT);
    __cxa_guard_release(&`guard variable for'IVision::IsLineOfSightClear(Vector const&)::_counter);
    __cxa_atexit(
      CVProfCounter::~CVProfCounter,
      &IVision::IsLineOfSightClear(Vector const&)const::_counter,
      &_dso_handle);
  }
  ++*IVision::IsLineOfSightClear(Vector const&)const::_counter.m_pCounter;
  memset(&v16.m_ShapeAttributes, 0, 31);
  v16.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&v16);
  v6 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
  CTraceFilterSimple::CTraceFilterSimple(&filter, v6, 4, VisionTraceFilterFunction);
  m_bot = this->m_bot;
  filter._vptr_CTraceFilter = off_47B5BB0;
  v8 = (*(m_bot->_vptr_INextBotEventResponder + 69))(m_bot);
  v9 = (*(*v8 + 536LL))(v8);
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  y = pos->y;
  z = pos->z;
  ray.m_flRadius = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Delta.x = pos->x - v9->x;
  ray.m_Delta.y = y - v9->y;
  ray.m_Delta.z = z - v9->z;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Start.Vector = *v9;
  filter.m_attr.m_nInteractsWith |= 0x84041uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &v16);
  result = 0;
  if ( v16.fraction >= 1.0 )
    result = !v16.startsolid;
  filter._vptr_CTraceFilter = off_3FE6970;
  if ( v5 )
  {
    v13 = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return v13;
  }
  return result;
}


// IVision::IsLineOfSightClearToEntity  (line 689, @0x0000000002f31720, libserver.so)  // inlines: CGameTrace, CVProfScope, DidHit, EnableInteractsWith, EyePosition, GetFloat, Init, IsEnabled, LengthSqr, NextBotTraceFilterIgnoreActors, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator=, ~CTraceFilter, ~CTraceFilterSimple, ~CVProfScope, ~NextBotTraceFilterIgnoreActors
// calls: CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CVProfile::ExitScope, CBaseEntity::GetAbsOrigin, CVProfile::EnterScope, _Unwind_Resume
// strings: "NextBot", "IVision::IsLineOfSightClearToEntity"
bool __fastcall IVision::IsLineOfSightClearToEntity(
        const IVision *const this,
        const CBaseEntity *subject,
        Vector *visibleSpot)
{
  int m_enabled; // esi
  double v7; // xmm0_8
  INextBot *m_bot; // rdi
  vec_t v9; // xmm1_4
  __int64 v10; // rax
  Vector *v11; // rax
  vec_t v12; // xmm1_4
  float fraction; // xmm0_4
  bool result; // al
  double v15; // xmm0_8
  float v16; // xmm1_4
  __int64 v17; // rax
  Vector *v18; // rax
  vec_t v19; // xmm1_4
  const Vector *AbsOrigin; // rbx
  __int64 v21; // rax
  Vector *v22; // rax
  float m_fValue; // xmm0_4
  vec_t v24; // xmm1_4
  float v25; // [rsp+0h] [rbp-230h]
  float v26; // [rsp+4h] [rbp-22Ch]
  float v27; // [rsp+8h] [rbp-228h]
  bool VProf_728; // [rsp+Ch] [rbp-224h]
  bool VProf_728a; // [rsp+Ch] [rbp-224h]
  NextBotTraceFilterIgnoreActors filter; // [rsp+20h] [rbp-210h] BYREF
  Ray_t ray; // [rsp+60h] [rbp-1D0h] BYREF
  Ray_t v32; // [rsp+B0h] [rbp-180h] BYREF
  Ray_t v33; // [rsp+100h] [rbp-130h] BYREF
  trace_t v34; // [rsp+150h] [rbp-E0h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_728 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "IVision::IsLineOfSightClearToEntity", 0, "NextBot", 0, 4);
  memset(&v34.m_ShapeAttributes, 0, 31);
  v34.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&v34);
  CTraceFilterSimple::CTraceFilterSimple(&filter, subject, 4, IgnoreActorsTraceFilterFunction);
  filter._vptr_CTraceFilter = off_47B2450;
  v7 = (*(subject->_vptr_IHandleEntity + 62))(subject);
  m_bot = this->m_bot;
  v33.m_Start.z = v9;
  *&v33.m_Start.x = v7;
  v10 = (*(m_bot->_vptr_INextBotEventResponder + 69))(m_bot);
  v11 = (*(*v10 + 536LL))(v10);
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_flRadius = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Delta.x = v33.m_Start.x - v11->x;
  ray.m_Delta.y = v33.m_Start.y - v11->y;
  v12 = v33.m_Start.z - v11->z;
  ray.m_IsRay = 1;
  ray.m_Delta.z = v12;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (v12 * v12)) != 0.0;
  ray.m_Start.Vector = *v11;
  filter.m_attr.m_nInteractsWith |= 0x84041uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &v34);
  fraction = v34.fraction;
  if ( v34.fraction < 1.0 || v34.startsolid )
  {
    v15 = (*(subject->_vptr_IHandleEntity + 164))(subject);
    v27 = v16;
    v26 = *&v15;
    v25 = *(&v15 + 1);
    v17 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
    v18 = (*(*v17 + 536LL))(v17);
    v32.m_Start.w = 0.0;
    memset(&v32.m_Delta.w, 0, 36);
    v32.m_flRadius = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    v32.m_Delta.x = v26 - v18->x;
    v32.m_Delta.y = v25 - v18->y;
    v19 = v27 - v18->z;
    v32.m_IsRay = 1;
    v32.m_Delta.z = v19;
    v32.m_IsSwept = (((v32.m_Delta.x * v32.m_Delta.x) + (v32.m_Delta.y * v32.m_Delta.y)) + (v19 * v19)) != 0.0;
    v32.m_Start.Vector = *v18;
    filter.m_attr.m_nInteractsWith |= 0x84041uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v32, &filter, &v34);
    fraction = v34.fraction;
    if ( v34.fraction < 1.0 || v34.startsolid )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(subject);
      v21 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
      v22 = (*(*v21 + 536LL))(v21);
      m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
      v33.m_Start.w = 0.0;
      memset(&v33.m_Delta.w, 0, 36);
      v33.m_flRadius = m_fValue;
      v33.m_Delta.x = AbsOrigin->x - v22->x;
      v33.m_Delta.y = AbsOrigin->y - v22->y;
      v24 = AbsOrigin->z - v22->z;
      v33.m_IsRay = 1;
      v33.m_Delta.z = v24;
      v33.m_IsSwept = (((v33.m_Delta.x * v33.m_Delta.x) + (v33.m_Delta.y * v33.m_Delta.y)) + (v24 * v24)) != 0.0;
      v33.m_Start.Vector = *v22;
      filter.m_attr.m_nInteractsWith |= 0x84041uLL;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v33, &filter, &v34);
      fraction = v34.fraction;
    }
  }
  if ( visibleSpot != 0 )
    *visibleSpot = v34.endpos;
  result = 0;
  if ( fraction >= 1.0 )
    result = !v34.startsolid;
  filter._vptr_CTraceFilter = off_3FE6970;
  if ( VProf_728 )
  {
    VProf_728a = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return VProf_728a;
  }
  return result;
}


// IVision::IsLookingAt  (line 759, @0x0000000002f2e630, libserver.so)  // inlines: DotProduct, NormalizeInPlace, VectorSubtract, operator-
// calls: VectorNormalize, AngleVectors
bool __fastcall IVision::IsLookingAt(const IVision *const this, const Vector *const pos, double a3, float cosTolerance)
{
  __int64 v6; // rax
  float *v7; // rax
  vec_t v8; // xmm2_4
  vec_t v9; // xmm0_4
  float v10; // xmm0_4
  __int64 v11; // rax
  const QAngle *v12; // rax
  float cosTolerancea; // [rsp+Ch] [rbp-34h]
  Vector to; // [rsp+10h] [rbp-30h] BYREF
  Vector forward; // [rsp+20h] [rbp-20h] BYREF

  cosTolerancea = *&a3;
  v6 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot, a3, cosTolerance);
  v7 = (*(*v6 + 536LL))(v6);
  v8 = pos->x - *v7;
  v9 = pos->z - v7[2];
  to.y = pos->y - v7[1];
  to.x = v8;
  to.z = v9;
  v10 = VectorNormalize(&to);
  v11 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot, v10);
  v12 = (*(*v11 + 1320LL))(v11);
  AngleVectors(v12, &forward, 0, 0);
  return (((to.x * forward.x) + (to.y * forward.y)) + (to.z * forward.z)) > cosTolerancea;
}


// IVision::IsLookingAt  (line 775, @0x0000000002f2e2e0, libserver.so)  // inlines: EyePosition
bool __fastcall IVision::IsLookingAt(
        const IVision *const this,
        const CBaseCombatCharacter *actor,
        double a3,
        float cosTolerance)
{
  bool (__fastcall *v5)(const IVision *const, double *, float); // r12
  int v6; // xmm1_4
  float cosTolerancea; // [rsp+Ch] [rbp-34h]
  double v9; // [rsp+10h] [rbp-30h] BYREF
  int v10; // [rsp+18h] [rbp-28h]
  double v11; // [rsp+20h] [rbp-20h]

  cosTolerancea = *&a3;
  v5 = *(this->_vptr_INextBotEventResponder + 91);
  v11 = (*(actor->_vptr_IHandleEntity + 164))(actor, a3, cosTolerance);
  v10 = v6;
  v9 = v11;
  return v5(this, &v9, cosTolerancea);
}


