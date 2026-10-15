
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// INextBot::INextBot  (line 25, @0x0000000002f32ce0, libserver.so)  // inlines: CNetworkVarBase, CUtlMemory, CUtlVector, CUtlVectorBase, IntervalTimer, Invalidate, NetworkStateChanged, Purge, RemoveAll, Set, operator=, operator=<float>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~INextBotEventResponder
// calls: CountdownTimer::CountdownTimer, NextBotManager::Register, _Unwind_Resume, CUtlMemory<INextBot::NextBotDebugLineType*, int>::Purge
// callers: NextBotCombatCharacter::NextBotCombatCharacter
void __fastcall INextBot::INextBot(INextBot *const this)
{
  CountdownTimer *p_m_immobileCheckTimer; // r12
  bool v3; // zf

  p_m_immobileCheckTimer = &this->m_immobileCheckTimer;
  this->_vptr_INextBotEventResponder = &off_47B5870;
  CountdownTimer::CountdownTimer(&this->m_immobileCheckTimer);
  this->m_debugHistory.m_Size = 0;
  this->m_immobileTimer._vptr_IntervalTimer = off_3FD0350;
  v3 = this->m_immobileCheckTimer.m_timestamp.m_Value == -1.0;
  this->m_immobileTimer.m_timestamp.m_Value = -1.0;
  this->m_debugHistory.m_Memory.m_pMemory = 0;
  this->m_debugHistory.m_Memory.m_nAllocationCount = 0;
  this->m_debugHistory.m_Memory.m_nGrowSize = 100;
  this->m_tickLastUpdate = -999;
  this->m_id = -1;
  this->m_componentList = 0;
  this->m_debugDisplayLine = 0;
  if ( !v3 )
  {
    (*(this->m_immobileCheckTimer._vptr_CountdownTimer + 2))(p_m_immobileCheckTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_immobileCheckTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_pCurrentPath = 0;
  this->m_immobileAnchor = vec3_origin;
  this->m_id = NextBotManager::Register(&g_NextBotManager, this);
}


// INextBot::~INextBot  (line 45, @0x0000000002f32e90, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~INextBotEventResponder
// calls: INextBot::ResetDebugHistory, NextBotManager::UnRegister, CUtlMemory<INextBot::NextBotDebugLineType*, int>::Purge
// callers: CDOTA_BaseNPC::CDOTA_BaseNPC, CDOTA_BaseNPC::~CDOTA_BaseNPC, NextBotCombatCharacter::~NextBotCombatCharacter, CSimpleBot::~CSimpleBot, CSimpleBot::CSimpleBot, INextBot::~INextBot
void __fastcall INextBot::~INextBot(INextBot *const this)
{
  CLocomotionBase *m_baseLocomotion; // rdi
  IBody *m_baseBody; // rdi
  IIntention *m_baseIntention; // rdi
  IVision *m_baseVision; // rdi
  bool v6; // zf

  this->_vptr_INextBotEventResponder = &off_47B5870;
  INextBot::ResetDebugHistory(this);
  NextBotManager::UnRegister(&g_NextBotManager, this);
  m_baseLocomotion = this->m_baseLocomotion;
  if ( m_baseLocomotion != 0 )
    (*(m_baseLocomotion->_vptr_INextBotEventResponder + 2))(m_baseLocomotion);
  m_baseBody = this->m_baseBody;
  if ( m_baseBody != 0 )
    (*(m_baseBody->_vptr_INextBotEventResponder + 2))(m_baseBody);
  m_baseIntention = this->m_baseIntention;
  if ( m_baseIntention != 0 )
    (*(m_baseIntention->_vptr_INextBotEventResponder + 2))(m_baseIntention);
  m_baseVision = this->m_baseVision;
  if ( m_baseVision != 0 )
    (*(m_baseVision->_vptr_INextBotEventResponder + 2))(m_baseVision);
  v6 = (this->m_debugHistory.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_debugHistory.m_Size = 0;
  if ( !v6
    || (CUtlMemory<INextBot::NextBotDebugLineType *,int>::Purge(&this->m_debugHistory.m_Memory),
        (this->m_debugHistory.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    this->_vptr_INextBotEventResponder = &off_3F7A570;
  }
  else
  {
    CUtlMemory<INextBot::NextBotDebugLineType *,int>::Purge(&this->m_debugHistory.m_Memory);
    this->_vptr_INextBotEventResponder = &off_3F7A570;
  }
}


// INextBot::~INextBot  (line 45, @0x0000000002f32f60, libserver.so)
// calls: INextBot::~INextBot, operator delete
void __fastcall INextBot::~INextBot(INextBot *const this)
{
  INextBot::~INextBot(this);
  operator delete(this);
}


// INextBot::Reset  (line 67, @0x0000000002f30740, libserver.so)  // inlines: Invalidate, NetworkStateChanged, Set, operator=, operator=<float>
void __fastcall INextBot::Reset(INextBot *const this)
{
  INextBotComponent *i; // rbx

  this->m_tickLastUpdate = -999;
  this->m_debugType = 0;
  this->m_debugDisplayLine = 0;
  if ( this->m_immobileTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_immobileTimer._vptr_IntervalTimer + 2))(&this->m_immobileTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_immobileTimer.m_timestamp.m_Value = -1.0;
  }
  if ( this->m_immobileCheckTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_immobileCheckTimer._vptr_CountdownTimer + 2))(
      &this->m_immobileCheckTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_immobileCheckTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_immobileAnchor = vec3_origin;
  for ( i = this->m_componentList; i != 0; i = i->m_nextComponent )
    (*(i->_vptr_INextBotEventResponder + 62))(i);
}


// INextBot::ResetDebugHistory  (line 85, @0x0000000002f32e30, libserver.so)  // inlines: RemoveAll
// calls: operator delete
// callers: INextBot::~INextBot, INextBot::DebugConColorMsg
void __fastcall INextBot::ResetDebugHistory(INextBot *const this)
{
  __int64 v2; // r12
  int i; // ebx
  INextBot::NextBotDebugLineType *v4; // rdi

  v2 = 0;
  for ( i = 0; this->m_debugHistory.m_Size > i; ++i )
  {
    v4 = this->m_debugHistory.m_Memory.m_pMemory[v2++];
    operator delete(v4);
  }
  this->m_debugHistory.m_Size = 0;
}


// INextBot::BeginUpdate  (line 96, @0x0000000002f32f80, libserver.so)  // inlines: ShouldUpdate
// calls: NextBotManager::ShouldUpdateInternal, NextBotManager::NotifyBeginUpdate
// callers: NextBotCombatCharacter::DoThink
bool __fastcall INextBot::BeginUpdate(INextBot *const this)
{
  bool result; // al

  if ( g_NextBotManager.m_iUpdateTickrate <= 0
    || (result = NextBotManager::ShouldUpdateInternal(&g_NextBotManager, this)) )
  {
    NextBotManager::NotifyBeginUpdate(&g_NextBotManager, this);
    return 1;
  }
  return result;
}


// INextBot::EndUpdate  (line 108, @0x0000000002f32fd0, libserver.so)
// calls: NextBotManager::NotifyEndUpdate
// callers: NextBotCombatCharacter::DoThink
void __fastcall INextBot::EndUpdate(INextBot *const this)
{
  NextBotManager::NotifyEndUpdate(&g_NextBotManager, this);
}


// INextBot::Update  (line 115, @0x0000000002f34610, libserver.so)  // inlines: CFmtStrN, CVProfScope, ComputeUpdateInterval, DOTAGameRules, GetGameTime, InitQuietTruncation, IsDebugging, IsEnabled, entindex, ~CVProfScope
// calls: INextBot::UpdateImmobileStatus, CVProfile::ExitScope, NextBotManager::IsDebugFilterMatch, CEntityInstance::GetEntityIndex, CFmtStrN<256, false>::sprintf, CVProfile::EnterScope, _Unwind_Resume, __stack_chk_fail
// strings: "#%d", "NextBot", "INextBot::Update"
void __fastcall INextBot::Update(INextBot *const this)
{
  int m_enabled; // eax
  bool v3; // r13
  float v4; // r14d
  INextBotComponent *m_componentList; // rbx
  float m_lastUpdateTime; // xmm0_4
  int (**vptr_INextBotEventResponder)(...); // rax
  int (*v8)(...); // r14
  const CEntityInstance *v9; // rax
  CEntityIndex v10; // eax
  const char *v11; // rax
  CFmtStr msg; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v13; // [rsp+118h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "INextBot::Update", 0, "NextBot", 0, 4);
  this->m_debugDisplayLine = 0;
  if ( LOWORD(g_NextBotManager.m_debugType) != 0
    && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this)
    && (*(this->_vptr_INextBotEventResponder + 96))(this, 0xFFFF) != 0 )
  {
    msg.m_bQuietTruncation = 0;
    msg._vptr_CFmtStrN = &off_3F6E1A0;
    vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
    msg.m_szBuf[0] = 0;
    msg.m_nLength = 0;
    v8 = vptr_INextBotEventResponder[99];
    v9 = (vptr_INextBotEventResponder[66])(this);
    v10.m_Data = CEntityInstance::GetEntityIndex(v9).m_Data;
    v11 = CFmtStrN<256,false>::sprintf(&msg, "#%d", v10.m_Data);
    v8(this, v11);
  }
  INextBot::UpdateImmobileStatus(this);
  if ( g_pGameRules != 0 )
    v4 = COERCE_FLOAT(_mm_cvtsi128_si32(*&g_pGameRules[18].m_szQuestName[20]));
  else
    v4 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
  m_componentList = this->m_componentList;
  if ( m_componentList != 0 )
  {
    while ( 1 )
    {
      m_lastUpdateTime = m_componentList->m_lastUpdateTime;
      if ( m_lastUpdateTime == 0.0 )
        break;
      if ( (v4 - m_lastUpdateTime) > 0.000099999997 )
      {
        m_componentList->m_curInterval = v4 - m_lastUpdateTime;
        m_componentList->m_lastUpdateTime = v4;
LABEL_10:
        (*(m_componentList->_vptr_INextBotEventResponder + 63))(m_componentList);
      }
      m_componentList = m_componentList->m_nextComponent;
      if ( m_componentList == 0 )
        goto LABEL_14;
    }
    m_componentList->m_curInterval = 0.033;
    m_componentList->m_lastUpdateTime = v4 - 0.033;
    goto LABEL_10;
  }
LABEL_14:
  if ( v3 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// INextBot::Upkeep  (line 150, @0x0000000002f31280, libserver.so)  // inlines: CVProfScope, IsEnabled, ~CVProfScope
// calls: CVProfile::ExitScope, CVProfile::EnterScope, _Unwind_Resume
// strings: "NextBot", "INextBot::Upkeep"
void __fastcall INextBot::Upkeep(INextBot *const this)
{
  int m_enabled; // eax
  bool v3; // r13
  INextBotComponent *i; // rbx

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "INextBot::Upkeep", 0, "NextBot", 0, 4);
  for ( i = this->m_componentList; i != 0; i = i->m_nextComponent )
    (*(i->_vptr_INextBotEventResponder + 64))(i);
  if ( v3 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// INextBot::SetPosition  (line 163, @0x0000000002f2e790, libserver.so)
// calls: CBaseEntity::SetAbsOrigin
bool __fastcall INextBot::SetPosition(INextBot *const this, const Vector *const vPos)
{
  __int64 v4; // rax
  CBaseEntity *v6; // rax

  v4 = (*(this->_vptr_INextBotEventResponder + 69))(this);
  if ( v4 != 0 )
    return (*(*v4 + 528LL))(v4, vPos);
  v6 = (*(this->_vptr_INextBotEventResponder + 66))(this);
  CBaseEntity::SetAbsOrigin(v6, vPos);
  return 1;
}


// INextBot::GetPosition  (line 177, @0x0000000002f2e370, libserver.so)
// calls: CBaseEntity::GetAbsOrigin
const Vector *__fastcall INextBot::GetPosition(const INextBot *const this)
{
  const CBaseEntity *v1; // rax

  v1 = (*(this->_vptr_INextBotEventResponder + 66))(this);
  return CBaseEntity::GetAbsOrigin(v1);
}


// INextBot::IsEnemy  (line 187, @0x0000000002f2dfe0, libserver.so)
bool __fastcall INextBot::IsEnemy(const INextBot *const this, const CBaseEntity *pThem)
{
  bool result; // al

  result = 0;
  if ( pThem != 0 )
    return *((*(this->_vptr_INextBotEventResponder + 66))(this) + 383) != pThem->m_iTeamNum.m_Value;
  return result;
}


// INextBot::IsFriend  (line 203, @0x0000000002f2e020, libserver.so)
bool __fastcall INextBot::IsFriend(const INextBot *const this, const CBaseEntity *pThem)
{
  bool result; // al

  result = 0;
  if ( pThem != 0 )
    return *((*(this->_vptr_INextBotEventResponder + 66))(this) + 383) == pThem->m_iTeamNum.m_Value;
  return result;
}


// INextBot::IsSelf  (line 218, @0x0000000002f2e3f0, libserver.so)  // inlines: entindex, operator==
// calls: CEntityInstance::GetEntityIndex
bool __fastcall INextBot::IsSelf(const INextBot *const this, const CBaseEntity *them)
{
  bool result; // al
  int32 m_Data; // r12d
  const CEntityInstance *v5; // rax

  result = 0;
  if ( them != 0 )
  {
    m_Data = CEntityInstance::GetEntityIndex(them).m_Data;
    v5 = (*(this->_vptr_INextBotEventResponder + 66))(this);
    return CEntityInstance::GetEntityIndex(v5).m_Data == m_Data;
  }
  return result;
}


// INextBot::RegisterComponent  (line 228, @0x0000000002f32ff0, libserver.so)
void __fastcall INextBot::RegisterComponent(INextBot *const this, INextBotComponent *pComp)
{
  pComp->m_nextComponent = this->m_componentList;
  this->m_componentList = pComp;
}


// INextBot::IsRangeLessThan  (line 237, @0x0000000002f30060, libserver.so)  // inlines: CalcDistanceFromPoint, CalcNearestPoint, DistTo, FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator=
// calls: CCollisionProperty::CalcNearestPoint, CCollisionProperty::CalcDistanceFromPoint, CBaseEntity::GetAbsOrigin
bool __fastcall INextBot::IsRangeLessThan(
        const INextBot *const this,
        const CBaseEntity *subject,
        __m128i a3,
        float range)
{
  float v4; // r14d
  const CBaseEntity *v6; // r12
  double v8; // xmm0_8
  const CCollisionProperty *m_pCollision; // rdi
  vec_t v10; // xmm1_4
  CCollisionProperty *v11; // rdi
  float v12; // xmm0_4
  const Vector *AbsOrigin; // rax
  Vector botPos; // [rsp+4h] [rbp-40h] BYREF
  Vector vecWorldPt; // [rsp+14h] [rbp-30h] BYREF

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
  v6 = (*(this->_vptr_INextBotEventResponder + 66))(this, *a3.m128i_i64, range);
  if ( v6 == 0 || subject == 0 )
    return 0;
  v8 = (*(subject->_vptr_IHandleEntity + 62))(subject);
  m_pCollision = v6->m_pCollision;
  *&vecWorldPt.x = v8;
  vecWorldPt.z = v10;
  if ( m_pCollision != 0 )
    CCollisionProperty::CalcNearestPoint(m_pCollision, &vecWorldPt, &botPos);
  else
    botPos = *CBaseEntity::GetAbsOrigin(v6);
  v11 = subject->m_pCollision;
  if ( v11 != 0 )
  {
    v12 = CCollisionProperty::CalcDistanceFromPoint(v11, &botPos);
  }
  else
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(subject);
    v12 = fsqrt(
            (((AbsOrigin->x - botPos.x) * (AbsOrigin->x - botPos.x))
           + ((AbsOrigin->y - botPos.y) * (AbsOrigin->y - botPos.y)))
          + ((AbsOrigin->z - botPos.z) * (AbsOrigin->z - botPos.z)));
  }
  return v4 > v12;
}


// INextBot::IsRangeLessThan  (line 251, @0x0000000002f2e060, libserver.so)  // inlines: IsLengthLessThan, LengthSqr, VectorSubtract, operator-
bool __fastcall INextBot::IsRangeLessThan(const INextBot *const this, const Vector *const pos, double a3, float range)
{
  float *v5; // rax
  float rangea; // [rsp+Ch] [rbp-14h]

  rangea = *&a3;
  v5 = (*(this->_vptr_INextBotEventResponder + 73))(this, a3, range);
  return (rangea * rangea) > ((((pos->x - *v5) * (pos->x - *v5)) + ((pos->y - v5[1]) * (pos->y - v5[1])))
                            + ((pos->z - v5[2]) * (pos->z - v5[2])));
}


// INextBot::IsRangeGreaterThan  (line 259, @0x0000000002f30180, libserver.so)  // inlines: CalcDistanceFromPoint, CalcNearestPoint, DistTo, FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator=
// calls: CCollisionProperty::CalcNearestPoint, CCollisionProperty::CalcDistanceFromPoint, CBaseEntity::GetAbsOrigin
bool __fastcall INextBot::IsRangeGreaterThan(
        const INextBot *const this,
        const CBaseEntity *subject,
        double a3,
        float range)
{
  const CBaseEntity *v5; // r12
  bool result; // al
  double v7; // xmm0_8
  const CCollisionProperty *m_pCollision; // rdi
  vec_t v9; // xmm1_4
  CCollisionProperty *v10; // rdi
  float v11; // xmm0_4
  const Vector *AbsOrigin; // rax
  float rangea; // [rsp+Ch] [rbp-34h]
  Vector botPos; // [rsp+10h] [rbp-30h] BYREF
  Vector vecWorldPt; // [rsp+20h] [rbp-20h] BYREF

  rangea = *&a3;
  v5 = (*(this->_vptr_INextBotEventResponder + 66))(this, a3, range);
  result = subject == 0 || v5 == 0;
  if ( !result )
  {
    v7 = (*(subject->_vptr_IHandleEntity + 62))(subject);
    m_pCollision = v5->m_pCollision;
    *&vecWorldPt.x = v7;
    vecWorldPt.z = v9;
    if ( m_pCollision != 0 )
      CCollisionProperty::CalcNearestPoint(m_pCollision, &vecWorldPt, &botPos);
    else
      botPos = *CBaseEntity::GetAbsOrigin(v5);
    v10 = subject->m_pCollision;
    if ( v10 != 0 )
    {
      v11 = CCollisionProperty::CalcDistanceFromPoint(v10, &botPos);
    }
    else
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(subject);
      v11 = fsqrt(
              (((AbsOrigin->x - botPos.x) * (AbsOrigin->x - botPos.x))
             + ((AbsOrigin->y - botPos.y) * (AbsOrigin->y - botPos.y)))
            + ((AbsOrigin->z - botPos.z) * (AbsOrigin->z - botPos.z)));
    }
    return v11 > rangea;
  }
  return result;
}


// INextBot::IsRangeGreaterThan  (line 273, @0x0000000002f2e0c0, libserver.so)  // inlines: IsLengthGreaterThan, LengthSqr, VectorSubtract, operator-
bool __fastcall INextBot::IsRangeGreaterThan(
        const INextBot *const this,
        const Vector *const pos,
        double a3,
        float range)
{
  float *v5; // rax
  float rangea; // [rsp+Ch] [rbp-14h]

  rangea = *&a3;
  v5 = (*(this->_vptr_INextBotEventResponder + 73))(this, a3, range);
  return ((((pos->x - *v5) * (pos->x - *v5)) + ((pos->y - v5[1]) * (pos->y - v5[1])))
        + ((pos->z - v5[2]) * (pos->z - v5[2]))) > (rangea * rangea);
}


// INextBot::GetRangeTo  (line 281, @0x0000000002f2ff60, libserver.so)  // inlines: CalcDistanceFromPoint, CalcNearestPoint, DistTo, FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator=
// calls: CCollisionProperty::CalcNearestPoint, CCollisionProperty::CalcDistanceFromPoint, CBaseEntity::GetAbsOrigin
float __fastcall INextBot::GetRangeTo(const INextBot *const this, const CBaseEntity *subject)
{
  const CBaseEntity *v3; // r12
  double v5; // xmm0_8
  const CCollisionProperty *m_pCollision; // rdi
  vec_t v7; // xmm1_4
  CCollisionProperty *v8; // rdi
  const Vector *AbsOrigin; // rax
  Vector botPos; // [rsp+10h] [rbp-30h] BYREF
  Vector vecWorldPt; // [rsp+20h] [rbp-20h] BYREF

  v3 = (*(this->_vptr_INextBotEventResponder + 66))(this);
  if ( v3 == 0 || subject == 0 )
    return 0.0;
  v5 = (*(subject->_vptr_IHandleEntity + 62))(subject);
  m_pCollision = v3->m_pCollision;
  *&vecWorldPt.x = v5;
  vecWorldPt.z = v7;
  if ( m_pCollision != 0 )
    CCollisionProperty::CalcNearestPoint(m_pCollision, &vecWorldPt, &botPos);
  else
    botPos = *CBaseEntity::GetAbsOrigin(v3);
  v8 = subject->m_pCollision;
  if ( v8 != 0 )
    return CCollisionProperty::CalcDistanceFromPoint(v8, &botPos);
  AbsOrigin = CBaseEntity::GetAbsOrigin(subject);
  return fsqrt(
           (((AbsOrigin->x - botPos.x) * (AbsOrigin->x - botPos.x))
          + ((AbsOrigin->y - botPos.y) * (AbsOrigin->y - botPos.y)))
         + ((AbsOrigin->z - botPos.z) * (AbsOrigin->z - botPos.z)));
}


// INextBot::GetRangeTo  (line 295, @0x0000000002f2e5d0, libserver.so)  // inlines: FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
float __fastcall INextBot::GetRangeTo(const INextBot *const this, const Vector *const pos)
{
  float *v3; // rax

  v3 = (*(this->_vptr_INextBotEventResponder + 73))(this);
  return fsqrt(
           (((pos->x - *v3) * (pos->x - *v3)) + ((pos->y - v3[1]) * (pos->y - v3[1])))
         + ((pos->z - v3[2]) * (pos->z - v3[2])));
}


// INextBot::GetRangeSquaredTo  (line 303, @0x0000000002f2ecc0, libserver.so)  // inlines: CalcDistanceFromPoint, CalcNearestPoint, DistTo, FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator=
// calls: CCollisionProperty::CalcNearestPoint, CCollisionProperty::CalcDistanceFromPoint, CBaseEntity::GetAbsOrigin
float __fastcall INextBot::GetRangeSquaredTo(const INextBot *const this, CBaseEntity *subject)
{
  const CBaseEntity *v3; // r12
  double v5; // xmm0_8
  const CCollisionProperty *m_pCollision; // rdi
  vec_t v7; // xmm1_4
  CCollisionProperty *v8; // rdi
  float v9; // xmm0_4
  const Vector *AbsOrigin; // rax
  Vector botPos; // [rsp+10h] [rbp-30h] BYREF
  Vector vecWorldPt; // [rsp+20h] [rbp-20h] BYREF

  v3 = (*(this->_vptr_INextBotEventResponder + 66))(this);
  if ( v3 == 0 || subject == 0 )
    return 0.0;
  v5 = (*(subject->_vptr_IHandleEntity + 62))(subject);
  m_pCollision = v3->m_pCollision;
  *&vecWorldPt.x = v5;
  vecWorldPt.z = v7;
  if ( m_pCollision != 0 )
    CCollisionProperty::CalcNearestPoint(m_pCollision, &vecWorldPt, &botPos);
  else
    botPos = *CBaseEntity::GetAbsOrigin(v3);
  v8 = subject->m_pCollision;
  if ( v8 != 0 )
  {
    v9 = CCollisionProperty::CalcDistanceFromPoint(v8, &botPos);
  }
  else
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(subject);
    v9 = fsqrt(
           (((AbsOrigin->x - botPos.x) * (AbsOrigin->x - botPos.x))
          + ((AbsOrigin->y - botPos.y) * (AbsOrigin->y - botPos.y)))
         + ((AbsOrigin->z - botPos.z) * (AbsOrigin->z - botPos.z)));
  }
  return v9 * v9;
}


// INextBot::GetRangeSquaredTo  (line 317, @0x0000000002f2e120, libserver.so)  // inlines: LengthSqr, VectorSubtract, operator-
float __fastcall INextBot::GetRangeSquaredTo(const INextBot *const this, const Vector *const pos)
{
  float *v3; // rax

  v3 = (*(this->_vptr_INextBotEventResponder + 73))(this);
  return (((pos->x - *v3) * (pos->x - *v3)) + ((pos->y - v3[1]) * (pos->y - v3[1])))
       + ((pos->z - v3[2]) * (pos->z - v3[2]));
}


// INextBot::GetDebugIdentifier  (line 328, @0x0000000002f2e430, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, String, entindex
// calls: CEntityInstance::GetEntityIndex, V_snprintf
// strings: "%s(#%d)"
// globals: INextBot::GetDebugIdentifier(void)::name
const char *__fastcall INextBot::GetDebugIdentifier(const INextBot *const this)
{
  const CEntityInstance *v2; // rax
  CEntityIndex v3; // r12d
  __int64 v4; // rax
  const char *v5; // rcx
  __int64 v6; // rdx

  v2 = (*(this->_vptr_INextBotEventResponder + 66))(this);
  v3.m_Data = CEntityInstance::GetEntityIndex(v2).m_Data;
  v4 = (*(this->_vptr_INextBotEventResponder + 66))(this);
  v5 = "";
  v6 = *(v4 + 8);
  if ( *(v6 + 32) != 0 )
    v5 = *(v6 + 32);
  V_snprintf(INextBot::GetDebugIdentifier(void)const::name, 256, "%s(#%d)", v5, v3.m_Data);
  return INextBot::GetDebugIdentifier(void)const::name;
}


// INextBot::IsDebugFilterMatch  (line 343, @0x0000000002f2efa0, libserver.so)  // inlines: V_strlen, V_strnicmp_fast<int>
// calls: strlen, _V_strnicmp_fast, CBaseEntity::GetTeam
bool __fastcall INextBot::IsDebugFilterMatch(const INextBot *const this, const char *name)
{
  unsigned int v4; // r13d
  __int64 v5; // rax
  int v6; // edx
  bool result; // al
  const CBaseEntity *v8; // rax
  CTeam *Team; // r12
  unsigned int v10; // r13d
  __int64 v11; // rax

  if ( name != 0 )
    v4 = strlen(name);
  else
    v4 = 0;
  v5 = (*(this->_vptr_INextBotEventResponder + 97))(this);
  v6 = _V_strnicmp_fast(name, v5, v4);
  result = 1;
  if ( v6 != 0 )
  {
    v8 = (*(this->_vptr_INextBotEventResponder + 66))(this);
    Team = CBaseEntity::GetTeam(v8);
    result = 0;
    if ( Team != 0 )
    {
      v10 = name != 0 ? strlen(name) : 0;
      v11 = (*(Team->_vptr_IHandleEntity + 208))(Team);
      if ( _V_strnicmp_fast(name, v11, v10) == 0 )
        return 1;
    }
  }
  return result;
}


// INextBot::IsAbleToClimbOnto  (line 367, @0x0000000002f2ebc0, libserver.so)  // inlines: ClassMatches, FClassnameIs
// calls: CBaseEntity::IsAIWalkable, CEntityIdentity::ClassMatches
// strings: "prop_door*", "func_door*"
bool __fastcall INextBot::IsAbleToClimbOnto(const INextBot *const this, const CBaseEntity *object)
{
  bool IsAIWalkable; // bl

  if ( object == 0 )
    return 0;
  IsAIWalkable = CBaseEntity::IsAIWalkable(object);
  if ( !IsAIWalkable
    || CEntityIdentity::ClassMatches(object->m_pEntity, "prop_door*")
    || CEntityIdentity::ClassMatches(object->m_pEntity, "func_door*") )
  {
    return 0;
  }
  return IsAIWalkable;
}


// INextBot::IsAbleToBreak  (line 389, @0x0000000002f2ec20, libserver.so)  // inlines: ClassMatches, FClassnameIs
// calls: CBaseEntity::GetDamageOptions, CEntityIdentity::ClassMatches, __dynamic_cast, CBaseEntity::GetHealth
// strings: "func_breakable", "func_breakable_surf"
bool __fastcall INextBot::IsAbleToBreak(const INextBot *const this, const CBaseEntity *object)
{
  if ( object == 0 || CBaseEntity::GetDamageOptions(object) != DamageOptions_t::DAMAGE_YES )
    return 0;
  if ( CEntityIdentity::ClassMatches(object->m_pEntity, "func_breakable") && CBaseEntity::GetHealth(object) != 0
    || CEntityIdentity::ClassMatches(object->m_pEntity, "func_breakable_surf") )
  {
    return 1;
  }
  return __dynamic_cast(object, &`typeinfo for'CBaseEntity, &`typeinfo for'CBreakableProp, 0) != 0;
}


// INextBot::DisplayDebugText  (line 415, @0x0000000002f2e390, libserver.so)
// calls: CBaseEntity::EntityText
void __fastcall INextBot::DisplayDebugText(const INextBot *const this, const char *text)
{
  int m_debugDisplayLine; // ebx
  CBaseEntity *v4; // rax

  m_debugDisplayLine = this->m_debugDisplayLine;
  this->m_debugDisplayLine = m_debugDisplayLine + 1;
  v4 = (*(this->_vptr_INextBotEventResponder + 66))(this);
  CBaseEntity::EntityText(v4, m_debugDisplayLine, text, 0.01023, 255, 255, 255, 255);
}


// INextBot::DebugConColorMsg  (line 422, @0x0000000002f34b20, libserver.so)  // inlines: AddToTail, CopyConstruct<INextBot::NextBotDebugLineType*>, Element, GetBool, GetInt, GrowMemory, IsDebugging, Remove, ShiftElementsLeft, V_memmove, V_strcat_safe<256ul>, V_strcpy_safe<256ul>, _V_strstr, memmove, operator[], strstr
// calls: strchr, operator new, _V_strncpy, NextBotManager::IsDebugFilterMatch, V_vsnprintf, ConColorMsg(Color const&,char const*,...), INextBot::ResetDebugHistory, _V_strncat, memmove, CUtlMemory<INextBot::NextBotDebugLineType*, int>::Grow, __stack_chk_fail
// callers: Action<CDOTA_BaseNPC>::InvokeOnEnd, Action<CDOTA_BaseNPC>::InvokeOnSuspend, Action<CDOTA_BaseNPC>::ApplyResult, Action<CDOTA_BaseNPC>::InvokeOnStart, Action<CDOTA_BaseNPC>::InvokeOnResume, Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult, Action<CDOTA_BaseNPC>::OnMoveToSuccess, Action<CDOTA_BaseNPC>::OnStuck, Action<CDOTA_BaseNPC>::OnUnStuck, Action<CDOTA_BaseNPC>::OnPostureChanged, Action<CDOTA_BaseNPC>::OnIgnite (80 total)
void INextBot::DebugConColorMsg(
        INextBot *const this,
        NextBotDebugType debugType,
        const Color *const color,
        const char *fmt,
        ...)
{
  char v8; // r8
  int m_Size; // r13d
  int v10; // edx
  INextBot::NextBotDebugLineType *v11; // r15
  const char *v12; // r15
  char *v13; // rax
  INextBot::NextBotDebugLineType *v14; // r13
  __int64 v15; // r12
  int v16; // eax
  INextBot::NextBotDebugLineType **v17; // rax
  INextBot::NextBotDebugLineType **m_pMemory; // rdi
  int lastLine; // [rsp+Ch] [rbp-214h]
  va_list argptr; // [rsp+18h] [rbp-208h] BYREF
  char data[264]; // [rsp+30h] [rbp-1F0h] BYREF
  unsigned __int64 v22; // [rsp+138h] [rbp-E8h]

  v22 = __readfsqword(0x28u);
  if ( developer.m_pParent->m_Value.m_nValue != 0
    && (debugType & g_NextBotManager.m_debugType) != 0
    && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this)
    && (*(this->_vptr_INextBotEventResponder + 96))(this, debugType) != 0 )
  {
    va_start(argptr, fmt);
    V_vsnprintf(data, 256, fmt, argptr);
    ConColorMsg(color, "%s", data);
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  if ( NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
  {
    if ( debugType != NextBotDebugType::NEXTBOT_EVENTS )
    {
      if ( v8 == 0 )
      {
        va_end(argptr);
        va_start(argptr, fmt);
        V_vsnprintf(data, 256, fmt, argptr);
      }
      m_Size = this->m_debugHistory.m_Size;
      v10 = m_Size - 1;
      if ( m_Size - 1 >= 0
        && (v11 = this->m_debugHistory.m_Memory.m_pMemory[v10])->debugType == debugType
        && (v12 = v11->data, lastLine = this->m_debugHistory.m_Size - 1, v13 = strchr(v12, 10), v10 = lastLine, v13 == 0) )
      {
        _V_strncat(v12, data, 256, 0xFFFFFFFFLL);
      }
      else
      {
        if ( m_Size != 100 )
          goto LABEL_14;
        m_pMemory = this->m_debugHistory.m_Memory.m_pMemory;
        v14 = *m_pMemory;
        if ( v10 > 0 )
        {
          memmove(m_pMemory, m_pMemory + 1, 8LL * v10);
          v10 = this->m_debugHistory.m_Size - 1;
        }
        this->m_debugHistory.m_Size = v10;
        if ( v14 == 0 )
LABEL_14:
          v14 = operator new(0x104u);
        v14->debugType = debugType;
        _V_strncpy(v14->data, data, 256);
        v15 = this->m_debugHistory.m_Size;
        v16 = this->m_debugHistory.m_Size;
        if ( v15 == this->m_debugHistory.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<INextBot::NextBotDebugLineType *,int>::Grow(&this->m_debugHistory.m_Memory, 1);
          v16 = this->m_debugHistory.m_Size;
        }
        this->m_debugHistory.m_Size = v16 + 1;
        v17 = &this->m_debugHistory.m_Memory.m_pMemory[v15];
        if ( v17 != 0 )
          *v17 = v14;
      }
    }
  }
  else if ( this->m_debugHistory.m_Size != 0 )
  {
    INextBot::ResetDebugHistory(this);
  }
}


// INextBot::GetDebugHistory  (line 493, @0x0000000002f34e50, libserver.so)  // inlines: AddToTail, CopyConstruct<const INextBot::NextBotDebugLineType*>, Element, GrowMemory, RemoveAll, operator[]
// calls: CUtlMemory<const INextBot::NextBotDebugLineType*, int>::Grow
// callers: nb_dump_debug_history
void __fastcall INextBot::GetDebugHistory(
        const INextBot *const this,
        unsigned int type,
        CUtlVector<const INextBot::NextBotDebugLineType*,CUtlMemory<const INextBot::NextBotDebugLineType*,int> > *lines)
{
  __int64 v5; // r12
  int v6; // ebx
  CUtlVectorBase<const INextBot::NextBotDebugLineType*,CUtlMemory<const INextBot::NextBotDebugLineType*,int> >::CAllocator *p_m_Memory; // r8
  INextBot::NextBotDebugLineType *v8; // r13
  __int64 m_Size; // r15
  int v10; // eax
  const INextBot::NextBotDebugLineType **v11; // rax
  CUtlVector<const INextBot::NextBotDebugLineType*,CUtlMemory<const INextBot::NextBotDebugLineType*,int> > *v12; // [rsp-50h] [rbp-50h]
  unsigned int v13; // [rsp-44h] [rbp-44h]
  CUtlVectorBase<const INextBot::NextBotDebugLineType*,CUtlMemory<const INextBot::NextBotDebugLineType*,int> >::CAllocator *v14; // [rsp-40h] [rbp-40h]

  if ( lines != 0 )
  {
    lines->m_Size = 0;
    if ( this->m_debugHistory.m_Size > 0 )
    {
      v5 = 0;
      v6 = 0;
      p_m_Memory = &lines->m_Memory;
      do
      {
        while ( 1 )
        {
          v8 = this->m_debugHistory.m_Memory.m_pMemory[v5];
          if ( (type & v8->debugType) != 0 )
          {
            m_Size = lines->m_Size;
            v10 = lines->m_Size;
            if ( m_Size == lines->m_Memory.m_nAllocationCount )
            {
              v12 = lines;
              v13 = type;
              v14 = p_m_Memory;
              CUtlMemory<INextBot::NextBotDebugLineType const*,int>::Grow(p_m_Memory, 1);
              lines = v12;
              type = v13;
              p_m_Memory = v14;
              v10 = v12->m_Size;
            }
            lines->m_Size = v10 + 1;
            v11 = &lines->m_Memory.m_pMemory[m_Size];
            if ( v11 != 0 )
              break;
          }
          ++v6;
          ++v5;
          if ( this->m_debugHistory.m_Size <= v6 )
            return;
        }
        *v11 = v8;
        ++v6;
        ++v5;
      }
      while ( this->m_debugHistory.m_Size > v6 );
    }
  }
}


// INextBot::UpdateImmobileStatus  (line 512, @0x0000000002f33010, libserver.so)  // inlines: Invalidate, IsElapsed, IsLengthGreaterThan, LengthSqr, NetworkStateChanged, Set, Start, VectorSubtract, operator-, operator=, operator=<float>
// calls: CountdownTimer::Now, CBaseEntity::GetAbsOrigin, IntervalTimer::Now
// callers: INextBot::Update
void __fastcall INextBot::UpdateImmobileStatus(INextBot *const this)
{
  CountdownTimer *p_m_immobileCheckTimer; // r12
  float v3; // xmm0_4
  const CBaseEntity *v4; // rax
  const Vector *AbsOrigin; // rax
  float v6; // xmm0_4
  const CBaseEntity *v7; // rax
  float v8; // [rsp+Ch] [rbp-14h]
  float v9; // [rsp+Ch] [rbp-14h]
  float v10; // [rsp+Ch] [rbp-14h]

  p_m_immobileCheckTimer = &this->m_immobileCheckTimer;
  if ( CountdownTimer::Now(&this->m_immobileCheckTimer) >= this->m_immobileCheckTimer.m_timestamp.m_Value )
  {
    v3 = CountdownTimer::Now(p_m_immobileCheckTimer) + 1.0;
    if ( v3 != this->m_immobileCheckTimer.m_timestamp.m_Value )
    {
      v10 = v3;
      (*(this->m_immobileCheckTimer._vptr_CountdownTimer + 2))(p_m_immobileCheckTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_immobileCheckTimer.m_timestamp.m_Value = v10;
    }
    if ( this->m_immobileCheckTimer.m_duration.m_Value != 1.0 )
    {
      (*(this->m_immobileCheckTimer._vptr_CountdownTimer + 2))(p_m_immobileCheckTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_immobileCheckTimer.m_duration.m_Value = 1.0;
    }
    v8 = (*(this->_vptr_INextBotEventResponder + 84))(this);
    v4 = (*(this->_vptr_INextBotEventResponder + 66))(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
    if ( ((((AbsOrigin->x - this->m_immobileAnchor.x) * (AbsOrigin->x - this->m_immobileAnchor.x))
         + ((AbsOrigin->y - this->m_immobileAnchor.y) * (AbsOrigin->y - this->m_immobileAnchor.y)))
        + ((AbsOrigin->z - this->m_immobileAnchor.z) * (AbsOrigin->z - this->m_immobileAnchor.z))) > (v8 * v8) )
    {
      v7 = (*(this->_vptr_INextBotEventResponder + 66))(this);
      this->m_immobileAnchor = *CBaseEntity::GetAbsOrigin(v7);
      if ( this->m_immobileTimer.m_timestamp.m_Value != -1.0 )
      {
        (*(this->m_immobileTimer._vptr_IntervalTimer + 2))(&this->m_immobileTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
        this->m_immobileTimer.m_timestamp.m_Value = -1.0;
      }
    }
    else if ( this->m_immobileTimer.m_timestamp.m_Value <= 0.0 )
    {
      v6 = IntervalTimer::Now(&this->m_immobileTimer);
      if ( v6 != this->m_immobileTimer.m_timestamp.m_Value )
      {
        v9 = v6;
        (*(this->m_immobileTimer._vptr_IntervalTimer + 2))(&this->m_immobileTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_immobileTimer.m_timestamp.m_Value = v9;
      }
    }
  }
}


