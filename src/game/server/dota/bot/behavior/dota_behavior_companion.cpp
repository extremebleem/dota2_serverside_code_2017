
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCompanion::OnStart  (line 39, @0x000000000287fc90, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCompanion, CDOTABehaviorCreatureCompanion, CDOTABehaviorMoveTo, CDOTABehaviorPet, CEntityHandle, CGameEventListener, CHandle, ChangeTo, Continue, EventDesiredResult, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInitialGoalEntity, GetInstance, GetSerialNumber, IActionResult, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, Start, operator CBaseEntity*, operator CEntityInstance*, operator=, operator=<float>, operator==<CBaseEntity>, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlVector
// calls: operator new, CDOTABehaviorIdle::CDOTABehaviorIdle, operator delete, _Unwind_Resume, CDOTABehaviorCompanion::RecalculateOffset, CDOTABehaviorMoveTo::OnStart, CountdownTimer::Now, CGridNavPath::CGridNavPath, CountdownTimer::CountdownTimer, CGameEventListener::~CGameEventListener, CDOTABehaviorCompanion::~CDOTABehaviorCompanion, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase (13 total)
// strings: "No initial goal entity"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCompanion::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCompanion *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v8; // rdi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTABehaviorIdle *v11; // rbx
  ActionResult<CDOTA_BaseNPC> *result; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v14; // si
  int v15; // eax
  uint32 v16; // ecx
  CEntityIdentity *v17; // rax
  CEntityIdentity *v18; // rax
  float v19; // xmm0_4
  char *v20; // rbx
  char *v21; // rbx
  float v22; // [rsp+Ch] [rbp-24h]

  m_Index = me->m_initialGoalEntity.m_Index;
  v8 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 <= 1
    || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(me->m_initialGoalEntity.m_Index) >> 9) & 0x3F]) == 0
    || (v10 = &v9[me->m_initialGoalEntity.m_Index & 0x1FF]) == 0
    || m_Index != v10->m_EHandle.m_Index
    || v10->m_pInstance == 0
    || (m_pEntity = v10->m_pInstance->m_pEntity) == 0 )
  {
    this->m_goalEntity.m_Index = -1;
LABEL_6:
    v11 = operator new(0x80u);
    CDOTABehaviorIdle::CDOTABehaviorIdle(v11);
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_reason = "No initial goal entity";
    retstr->m_action = v11;
    return retstr;
  }
  v14 = 0x7FFF;
  v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  LOWORD(this->m_goalEntity.m_Index) = v14 | this->m_goalEntity.m_Index & 0x8000;
  v16 = (v15 << 15) | this->m_goalEntity.m_Index & 0x7FFF;
  this->m_goalEntity.m_Index = v16;
  if ( v16 + 2 <= 1 )
    goto LABEL_6;
  v17 = v8->m_pIdentityChunks[(LOWORD(this->m_goalEntity.m_Index) >> 9) & 0x3F];
  if ( v17 == 0 )
    goto LABEL_6;
  v18 = &v17[this->m_goalEntity.m_Index & 0x1FF];
  if ( v18 == 0 || v18->m_EHandle.m_Index != v16 || v18->m_pInstance == 0 )
    goto LABEL_6;
  CDOTABehaviorCompanion::RecalculateOffset(this);
  CDOTABehaviorMoveTo::OnStart(&this->m_MoveTo);
  v19 = CountdownTimer::Now(&this->m_PositionFuzziness) + 30.0;
  if ( v19 != this->m_PositionFuzziness.m_timestamp.m_Value )
  {
    v22 = v19;
    (*(this->m_PositionFuzziness._vptr_CountdownTimer + 2))(&this->m_PositionFuzziness, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_PositionFuzziness.m_timestamp.m_Value = v22;
  }
  if ( this->m_PositionFuzziness.m_duration.m_Value != 30.0 )
  {
    (*(this->m_PositionFuzziness._vptr_CountdownTimer + 2))(&this->m_PositionFuzziness, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_PositionFuzziness.m_duration.m_Value = 30.0;
  }
  if ( (*(me->_vptr_IHandleEntity + 404))(me) != 0 )
  {
    v20 = operator new(0x2E8u);
    *(v20 + 16) = 0;
    *(v20 + 9) = 0;
    *(v20 + 10) = 0;
    *(v20 + 3) = 0;
    *(v20 + 4) = 0;
    *(v20 + 5) = 0;
    *(v20 + 6) = 0;
    *(v20 + 7) = 0;
    *(v20 + 2) = 0;
    v20[96] = 0;
    v20[97] = 0;
    *(v20 + 22) = 0;
    *v20 = &off_42BFA90;
    *(v20 + 1) = &off_42BFEC0;
    *(v20 + 13) = &off_42BFF28;
    *(v20 + 14) = &off_42BB830;
    CGridNavPath::CGridNavPath((v20 + 120));
    CountdownTimer::CountdownTimer((v20 + 296));
    *(v20 + 84) = -1;
    CountdownTimer::CountdownTimer(v20 + 15);
    v20[392] = 0;
    *v20 = &off_42C0410;
    *(v20 + 1) = &off_42C0848;
    *(v20 + 13) = &off_42C08B0;
    *(v20 + 48) = off_42C08D0;
    CountdownTimer::CountdownTimer((v20 + 400));
    CountdownTimer::CountdownTimer((v20 + 424));
    CountdownTimer::CountdownTimer(v20 + 19);
    CountdownTimer::CountdownTimer((v20 + 520));
    CountdownTimer::CountdownTimer((v20 + 544));
    *(v20 + 142) = -1;
    CountdownTimer::CountdownTimer((v20 + 592));
    CountdownTimer::CountdownTimer(v20 + 26);
    CountdownTimer::CountdownTimer(v20 + 27);
    CountdownTimer::CountdownTimer(v20 + 28);
    *(v20 + 175) = -1;
    CountdownTimer::CountdownTimer((v20 + 704));
    *(v20 + 183) = -1;
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_action = v20;
    retstr->m_reason = 0;
    return retstr;
  }
  else
  {
    if ( (me->m_iUnitType & 0x10000) != 0 )
    {
      v21 = operator new(0x180u);
      *(v21 + 16) = 0;
      *(v21 + 9) = 0;
      *(v21 + 10) = 0;
      *(v21 + 3) = 0;
      *(v21 + 4) = 0;
      *(v21 + 5) = 0;
      *(v21 + 6) = 0;
      *(v21 + 7) = 0;
      *(v21 + 2) = 0;
      v21[96] = 0;
      v21[97] = 0;
      *(v21 + 22) = 0;
      *v21 = &off_42BFA90;
      *(v21 + 1) = &off_42BFEC0;
      *(v21 + 13) = &off_42BFF28;
      *(v21 + 14) = &off_42BB830;
      CGridNavPath::CGridNavPath((v21 + 120));
      CountdownTimer::CountdownTimer((v21 + 296));
      *(v21 + 84) = -1;
      CountdownTimer::CountdownTimer(v21 + 15);
      *v21 = &off_42BFF50;
      *(v21 + 1) = &off_42C0380;
      *(v21 + 13) = &off_42C03E8;
      result = retstr;
      retstr->m_type = ActionResultType::CHANGE_TO;
      retstr->m_action = v21;
    }
    else
    {
      retstr->m_type = ActionResultType::CONTINUE;
      result = retstr;
      retstr->m_action = 0;
    }
    retstr->m_reason = 0;
  }
  return result;
}


// CDOTABehaviorCompanion::RecalculateOffset  (line 60, @0x0000000002878510, libserver.so)
// calls: RandomInt
// callers: CDOTABehaviorCompanion::Update, CDOTABehaviorCompanion::OnStart
void __fastcall CDOTABehaviorCompanion::RecalculateOffset(CDOTABehaviorCompanion *const this)
{
  int v2; // r12d

  this->m_iForwardOffset = -RandomInt(25, 50);
  v2 = RandomInt(100, 150);
  this->m_iRightOffset = v2 * (RandomInt(0, 1) == 0 ? 1 : -1);
}


// CDOTABehaviorCompanion::GetTargetPosition  (line 67, @0x0000000002872350, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, VectorAdd, VectorMultiply, operator CEntityInstance*, operator*, operator+
// calls: CBaseEntity::GetAbsAngles, AngleVectors, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTABehaviorCompanion::GetTargetPosition(CDOTABehaviorCompanion *const this, CDOTA_BaseNPC *me)
{
  const CBaseEntity *m_pInstance; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  const QAngle *AbsAngles; // rax
  float m_iRightOffset; // xmm0_4
  float m_iForwardOffset; // xmm1_4
  const Vector *AbsOrigin; // rax
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v15; // [rsp+8h] [rbp-78h]
  float v16; // [rsp+Ch] [rbp-74h]
  float v17; // [rsp+10h] [rbp-70h]
  float v18; // [rsp+14h] [rbp-6Ch]
  float v19; // [rsp+18h] [rbp-68h]
  float v20; // [rsp+1Ch] [rbp-64h]
  Vector vForward; // [rsp+30h] [rbp-50h] BYREF
  Vector vRight; // [rsp+40h] [rbp-40h] BYREF
  Vector vUp; // [rsp+50h] [rbp-30h] BYREF
  float v24[8]; // [rsp+60h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_pInstance = 0;
  m_Index = this->m_goalEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_goalEntity.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_goalEntity.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  AbsAngles = CBaseEntity::GetAbsAngles(m_pInstance);
  AngleVectors(AbsAngles, &vForward, &vRight, &vUp);
  m_iRightOffset = this->m_iRightOffset;
  m_iForwardOffset = this->m_iForwardOffset;
  v20 = vRight.x * m_iRightOffset;
  v19 = vRight.y * m_iRightOffset;
  v15 = vForward.x * m_iForwardOffset;
  v18 = m_iRightOffset * vRight.z;
  v16 = vForward.y * m_iForwardOffset;
  v17 = m_iForwardOffset * vForward.z;
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  v11 = (v15 + AbsOrigin->x) + v20;
  v12 = v17 + AbsOrigin->z;
  v24[1] = (v16 + AbsOrigin->y) + v19;
  v24[0] = v11;
  *&result.x = *v24;
  result.z = v12 + v18;
  return result;
}


// CDOTABehaviorCompanion::Update  (line 80, @0x0000000002878570, libserver.so)  // inlines: ActionResult, ChangeTo, Continue, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsElapsed, IsValid, Length2D, LookupEntity, NetworkStateChanged, Reset, Set, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator!, operator-, operator=<float>
// calls: operator new, CDOTABehaviorIdle::CDOTABehaviorIdle, CBaseEntity::GetAbsOrigin, CountdownTimer::Now, CDOTABehaviorMoveTo::Update, FindClearSpaceForUnit, CDOTABehaviorCompanion::RecalculateOffset, operator delete, _Unwind_Resume
// strings: "No goal entity"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCompanion::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCompanion *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTABehaviorIdle *v10; // rbx
  const Vector *AbsOrigin; // rax
  float v13; // xmm0_4
  float v14; // [rsp+Ch] [rbp-44h]
  double vTargetPos; // [rsp+10h] [rbp-40h]
  Vector v16; // 0:xmm0_8.8,8:xmm1_4.4

  m_Index = this->m_goalEntity.m_Index;
  if ( m_Index + 2 > 1
    && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_goalEntity.m_Index) >> 9) & 0x3F]) != 0
    && (v9 = &v8[this->m_goalEntity.m_Index & 0x1FF]) != 0
    && m_Index == v9->m_EHandle.m_Index
    && v9->m_pInstance != 0 )
  {
    vTargetPos = (*(this->_vptr_INextBotEventResponder + 130))(this, me, interval);
    AbsOrigin = CBaseEntity::GetAbsOrigin(me);
    if ( fsqrt(
           ((*&vTargetPos - AbsOrigin->x) * (*&vTargetPos - AbsOrigin->x))
         + ((*(&vTargetPos + 1) - AbsOrigin->y) * (*(&vTargetPos + 1) - AbsOrigin->y))) > 1000.0 )
    {
      *&v16.x = (*(this->_vptr_INextBotEventResponder + 130))(this, me);
      FindClearSpaceForUnit(me, v16, 1);
    }
    if ( CountdownTimer::Now(&this->m_PositionFuzziness) >= this->m_PositionFuzziness.m_timestamp.m_Value )
    {
      CDOTABehaviorCompanion::RecalculateOffset(this);
      v13 = CountdownTimer::Now(&this->m_PositionFuzziness) + this->m_PositionFuzziness.m_duration.m_Value;
      if ( v13 != this->m_PositionFuzziness.m_timestamp.m_Value )
      {
        v14 = v13;
        (*(this->m_PositionFuzziness._vptr_CountdownTimer + 2))(
          &this->m_PositionFuzziness,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        this->m_PositionFuzziness.m_timestamp.m_Value = v14;
      }
    }
    CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
  else
  {
    v10 = operator new(0x80u);
    CDOTABehaviorIdle::CDOTABehaviorIdle(v10);
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_reason = "No goal entity";
    retstr->m_action = v10;
    return retstr;
  }
}


// CDOTABehaviorCreatureCompanion::RecalculateOffset  (line 110, @0x0000000002870940, libserver.so)
// calls: RandomInt
// callers: CDOTABehaviorCreatureCompanion::OnStart, CDOTABehaviorCreatureCompanion::RecalculateOffset
void __fastcall CDOTABehaviorCreatureCompanion::RecalculateOffset(
        CDOTABehaviorCreatureCompanion *const this,
        bool bBehind)
{
  int v3; // r12d

  this->m_iForwardOffset = -RandomInt(100, 150);
  v3 = RandomInt(100, 150);
  this->m_iRightOffset = v3 * (RandomInt(0, 1) == 0 ? 1 : -1);
}


// CDOTABehaviorCreatureCompanion::RecalculateOffset  (line 110, @0x0000000002878770, libserver.so)
// calls: CDOTABehaviorCreatureCompanion::RecalculateOffset, RandomInt
// callers: CDOTABehaviorCreatureCompanion::Update
void __fastcall CDOTABehaviorCreatureCompanion::RecalculateOffset(
        CDOTABehaviorCreatureCompanion *const this,
        bool bBehind)
{
  int v3; // r12d

  if ( bBehind )
  {
    CDOTABehaviorCreatureCompanion::RecalculateOffset(this, bBehind);
  }
  else
  {
    this->m_iForwardOffset = RandomInt(100, 150);
    v3 = RandomInt(100, 150);
    this->m_iRightOffset = v3 * (RandomInt(0, 1) == 0 ? 1 : -1);
  }
}


// CDOTABehaviorCreatureCompanion::OnStart  (line 127, @0x0000000002871ed0, libserver.so)  // inlines: ActionResult, Continue, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInitialGoalEntity, GetInstance, GetSerialNumber, IActionResult, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, RecalculateOffset, Set, Start, operator CBaseEntity*, operator CEntityInstance*, operator=, operator=<float>
// calls: CDOTABehaviorCreatureCompanion::RecalculateOffset, CDOTABehaviorMoveTo::OnStart, CountdownTimer::Now
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCreatureCompanion::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCreatureCompanion *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  uint32 m_Index; // eax
  char v7; // si
  unsigned __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  __int64 v10; // rcx
  CEntityIdentity *v11; // rdx
  float v12; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  int v15; // edx
  __int16 v16; // ax
  float v17; // [rsp+Ch] [rbp-24h]

  m_Index = me->m_initialGoalEntity.m_Index;
  v7 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1
    && (v8 = me->m_initialGoalEntity.m_Index,
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F]) != 0)
    && (v10 = v8 & 0x1FF, v7 = 8 * v10, (v11 = &v9[v10]) != 0)
    && m_Index == v11->m_EHandle.m_Index
    && v11->m_pInstance != 0
    && (m_pEntity = v11->m_pInstance->m_pEntity) != 0 )
  {
    v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v16 = 0x7FFF;
    else
      v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_goalEntity.m_Index) = v16 | this->m_goalEntity.m_Index & 0x8000;
    this->m_goalEntity.m_Index = (v15 << 15) | this->m_goalEntity.m_Index & 0x7FFF;
  }
  else
  {
    this->m_goalEntity.m_Index = -1;
  }
  CDOTABehaviorCreatureCompanion::RecalculateOffset(this, v7);
  CDOTABehaviorMoveTo::OnStart(&this->m_MoveTo);
  v12 = CountdownTimer::Now(&this->m_PositionFuzziness) + 2.0;
  if ( v12 != this->m_PositionFuzziness.m_timestamp.m_Value )
  {
    v17 = v12;
    (*(this->m_PositionFuzziness._vptr_CountdownTimer + 2))(&this->m_PositionFuzziness, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_PositionFuzziness.m_timestamp.m_Value = v17;
  }
  if ( this->m_PositionFuzziness.m_duration.m_Value != 2.0 )
  {
    (*(this->m_PositionFuzziness._vptr_CountdownTimer + 2))(&this->m_PositionFuzziness, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_PositionFuzziness.m_duration.m_Value = 2.0;
  }
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorCreatureCompanion::Update  (line 144, @0x00000000028787e0, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, ChangeTo, Continue, EventDesiredResult, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsElapsed, IsValid, Length2D, LookupEntity, NetworkStateChanged, Reset, Set, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator!, operator-, operator=<float>, ~CDOTABehaviorCommandListener
// calls: operator new, CountdownTimer::CountdownTimer, CountdownTimer::Now, CDOTABehaviorMoveTo::Update, CBaseEntity::GetAbsOrigin, CDOTABehaviorCreatureCompanion::RecalculateOffset, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// strings: "No goal entity"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCreatureCompanion::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCreatureCompanion *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  char *v10; // rbx
  const Vector *AbsOrigin; // rax
  float v13; // xmm0_4
  float v14; // [rsp+Ch] [rbp-34h]
  double vTargetPos; // [rsp+10h] [rbp-30h]

  m_Index = this->m_goalEntity.m_Index;
  if ( m_Index + 2 > 1
    && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_goalEntity.m_Index) >> 9) & 0x3F]) != 0
    && (v9 = &v8[this->m_goalEntity.m_Index & 0x1FF]) != 0
    && m_Index == v9->m_EHandle.m_Index
    && v9->m_pInstance != 0 )
  {
    vTargetPos = (*(this->_vptr_INextBotEventResponder + 130))(this, me, interval);
    if ( CountdownTimer::Now(&this->m_PositionFuzziness) >= this->m_PositionFuzziness.m_timestamp.m_Value )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(me);
      CDOTABehaviorCreatureCompanion::RecalculateOffset(
        this,
        fsqrt(
          ((*&vTargetPos - AbsOrigin->x) * (*&vTargetPos - AbsOrigin->x))
        + ((*(&vTargetPos + 1) - AbsOrigin->y) * (*(&vTargetPos + 1) - AbsOrigin->y))) >= 750.0);
      v13 = CountdownTimer::Now(&this->m_PositionFuzziness) + this->m_PositionFuzziness.m_duration.m_Value;
      if ( v13 != this->m_PositionFuzziness.m_timestamp.m_Value )
      {
        v14 = v13;
        (*(this->m_PositionFuzziness._vptr_CountdownTimer + 2))(
          &this->m_PositionFuzziness,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        this->m_PositionFuzziness.m_timestamp.m_Value = v14;
      }
    }
    CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
  else
  {
    v10 = operator new(0x80u);
    *(v10 + 16) = 0;
    *(v10 + 9) = 0;
    *(v10 + 10) = 0;
    *(v10 + 3) = 0;
    *(v10 + 4) = 0;
    *(v10 + 5) = 0;
    *(v10 + 6) = 0;
    *(v10 + 7) = 0;
    *(v10 + 2) = 0;
    v10[96] = 0;
    v10[97] = 0;
    *(v10 + 22) = 0;
    *v10 = &off_42C1970;
    *(v10 + 1) = &off_42C1DA0;
    CountdownTimer::CountdownTimer((v10 + 104));
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_reason = "No goal entity";
    retstr->m_action = v10;
    return retstr;
  }
}


// CDOTABehaviorPet::OnStart  (line 175, @0x0000000002879b50, libserver.so)  // inlines: ActionResult, Continue, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFloat, GetInitialGoalEntity, GetInstance, GetSerialNumber, IActionResult, IndexToIdentity, IsValid, ListenForGameEvent, LookupEntity, NetworkStateChanged, Set, ShouldUseSwimAnimations, Start, operator CBaseEntity*, operator CEntityInstance*, operator=, operator=<float>
// calls: CDOTABehaviorPet::RecalculateTargetPosition, FindClearSpaceForUnit, CBaseEntity::GetAbsOrigin, CDOTABehaviorMoveTo::OnStart, CountdownTimer::Now
// strings: "dota_illusions_created"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorPet::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorPet *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  vec_t z; // xmm0_4
  float v13; // xmm0_4
  double v14; // xmm0_8
  double v15; // xmm1_8
  double v16; // xmm2_8
  double v17; // xmm3_8
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  int v21; // eax
  CEntityIdentity *m_pEntity; // rax
  int v24; // edx
  __int16 v25; // cx
  float v26; // [rsp+8h] [rbp-38h]
  float m_fValue; // [rsp+Ch] [rbp-34h]
  float v28; // [rsp+Ch] [rbp-34h]
  float v29; // [rsp+Ch] [rbp-34h]
  float v30; // [rsp+Ch] [rbp-34h]
  float v31; // [rsp+Ch] [rbp-34h]
  Vector v32; // 0:xmm0_8.8,8:xmm1_4.4

  m_Index = me->m_initialGoalEntity.m_Index;
  if ( m_Index + 2 > 1
    && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(me->m_initialGoalEntity.m_Index) >> 9) & 0x3F]) != 0
    && (v9 = &v8[me->m_initialGoalEntity.m_Index & 0x1FF]) != 0
    && m_Index == v9->m_EHandle.m_Index
    && v9->m_pInstance != 0
    && (m_pEntity = v9->m_pInstance->m_pEntity) != 0 )
  {
    v24 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v25 = 0x7FFF;
    else
      v25 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_goalEntity.m_Index) = v25 | this->m_goalEntity.m_Index & 0x8000;
    this->m_goalEntity.m_Index = (v24 << 15) | this->m_goalEntity.m_Index & 0x7FFF;
  }
  else
  {
    this->m_goalEntity.m_Index = -1;
  }
  this->m_bFollowingTempGoal = 0;
  this->m_tempGoalEntity.m_Index = -1;
  this->m_bHasVanished = 0;
  y = vec3_origin.y;
  this->m_bIsEmoting = 0;
  x = vec3_origin.x;
  this->m_flThreatLevel = 0.0;
  z = vec3_origin.z;
  this->m_vecFleeDirection.y = y;
  this->m_vecFleeDirection.x = x;
  this->m_vecFleeCurrentTarget.x = x;
  this->m_vecFleeCurrentTarget.y = y;
  this->m_vecHomeBasePosition.x = x;
  this->m_vecHomeBasePosition.y = y;
  this->m_vecOldFleeDirection.x = x;
  this->m_vecOldFleeDirection.y = y;
  this->m_vecFleeDirection.z = z;
  this->m_vecFleeCurrentTarget.z = z;
  this->m_vecHomeBasePosition.z = z;
  this->m_vecOldFleeDirection.z = z;
  this->m_bReturnToBase = 0;
  this->m_flLastInWater = 0.0;
  this->m_nCoopTeleportState = PetCoopStates_t::COOP_IGNORE;
  CDOTABehaviorPet::RecalculateTargetPosition(this, me, 1);
  *&v32.x = (*(this->_vptr_INextBotEventResponder + 130))(this, me);
  FindClearSpaceForUnit(me, v32, 1);
  this->m_vecHomeBasePosition = *CBaseEntity::GetAbsOrigin(me);
  CDOTABehaviorMoveTo::OnStart(&this->m_MoveTo);
  this->m_MoveTo.m_bUseSwimAnimations = 1;
  v13 = CountdownTimer::Now(&this->m_PositionFuzziness) + 2.0;
  if ( v13 != this->m_PositionFuzziness.m_timestamp.m_Value )
  {
    v31 = v13;
    (*(this->m_PositionFuzziness._vptr_CountdownTimer + 2))(&this->m_PositionFuzziness, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_PositionFuzziness.m_timestamp.m_Value = v31;
  }
  if ( this->m_PositionFuzziness.m_duration.m_Value != 2.0 )
  {
    (*(this->m_PositionFuzziness._vptr_CountdownTimer + 2))(&this->m_PositionFuzziness, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_PositionFuzziness.m_duration.m_Value = 2.0;
  }
  m_fValue = dota_pet_threat_time.m_pParent->m_Value.m_fValue;
  *&v14 = CountdownTimer::Now(&this->m_ThreatTimer) + m_fValue;
  if ( *&v14 != this->m_ThreatTimer.m_timestamp.m_Value )
  {
    v26 = *&v14;
    (*(this->m_ThreatTimer._vptr_CountdownTimer + 2))(&this->m_ThreatTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v14 = LODWORD(v26);
    this->m_ThreatTimer.m_timestamp.m_Value = v26;
  }
  if ( m_fValue != this->m_ThreatTimer.m_duration.m_Value )
  {
    (*(this->m_ThreatTimer._vptr_CountdownTimer + 2))(
      &this->m_ThreatTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v14,
      v15,
      v16,
      v17,
      m_fValue);
    this->m_ThreatTimer.m_duration.m_Value = m_fValue;
  }
  v18 = CountdownTimer::Now(&this->m_StuckTimer) + 4.0;
  if ( v18 != this->m_StuckTimer.m_timestamp.m_Value )
  {
    v30 = v18;
    (*(this->m_StuckTimer._vptr_CountdownTimer + 2))(&this->m_StuckTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_StuckTimer.m_timestamp.m_Value = v30;
  }
  if ( this->m_StuckTimer.m_duration.m_Value != 4.0 )
  {
    (*(this->m_StuckTimer._vptr_CountdownTimer + 2))(&this->m_StuckTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_StuckTimer.m_duration.m_Value = 4.0;
  }
  v19 = CountdownTimer::Now(&this->m_PickupDelayTimer) + 180.0;
  if ( v19 != this->m_PickupDelayTimer.m_timestamp.m_Value )
  {
    v29 = v19;
    (*(this->m_PickupDelayTimer._vptr_CountdownTimer + 2))(&this->m_PickupDelayTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_PickupDelayTimer.m_timestamp.m_Value = v29;
  }
  if ( this->m_PickupDelayTimer.m_duration.m_Value != 180.0 )
  {
    (*(this->m_PickupDelayTimer._vptr_CountdownTimer + 2))(&this->m_PickupDelayTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_PickupDelayTimer.m_duration.m_Value = 180.0;
  }
  v20 = CountdownTimer::Now(&this->m_LevelupCheckTimer) + 1.0;
  if ( v20 != this->m_LevelupCheckTimer.m_timestamp.m_Value )
  {
    v28 = v20;
    (*(this->m_LevelupCheckTimer._vptr_CountdownTimer + 2))(&this->m_LevelupCheckTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_LevelupCheckTimer.m_timestamp.m_Value = v28;
  }
  if ( this->m_LevelupCheckTimer.m_duration.m_Value != 1.0 )
  {
    (*(this->m_LevelupCheckTimer._vptr_CountdownTimer + 2))(&this->m_LevelupCheckTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_LevelupCheckTimer.m_duration.m_Value = 1.0;
  }
  this->m_bRegisteredForEvents = 1;
  v21 = (*(gameeventmanager->_vptr_IBaseInterface + 4))(
          gameeventmanager,
          &this->CGameEventListener,
          "dota_illusions_created",
          1);
  retstr->m_type = ActionResultType::CONTINUE;
  this->m_event_dota_illusions_created = v21;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorPet::GetMyHero  (line 213, @0x0000000002878a40, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CEntityInstance*
// callers: CDOTABehaviorPet::GetTargetPosition, CDOTABehaviorPet::Update_CheckNeedsToVanish, CDOTABehaviorPet::Update_CoopTeleportReadiness, CDOTABehaviorPet::RecalculateTargetPosition, CDOTABehaviorPet::UpdateEmoting, CDOTABehaviorPet::Update_CheckForEmoteOpportunities, CDOTABehaviorPet::Update_PerformCoopTeleport, CDOTABehaviorPet::RecalculateThreat, CDOTABehaviorPet::Update_CheckForReturnToBase, CDOTABehaviorPet::Update
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC_Hero *__fastcall CDOTABehaviorPet::GetMyHero(CDOTABehaviorPet *const this, bool bRealHeroOnly)
{
  uint32 v2; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC_Hero *result; // rax

  if ( bRealHeroOnly
    || (v2 = this->m_tempGoalEntity.m_Index) + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_tempGoalEntity.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_tempGoalEntity.m_Index & 0x1FF]) == 0
    || v2 != v4->m_EHandle.m_Index
    || (result = v4->m_pInstance, v4->m_pInstance == 0)
    || !this->m_bFollowingTempGoal )
  {
    m_Index = this->m_goalEntity.m_Index;
    if ( m_Index + 2 <= 1 )
      return 0;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_goalEntity.m_Index) >> 9) & 0x3F];
    if ( v6 == 0 )
      return 0;
    v7 = &v6[this->m_goalEntity.m_Index & 0x1FF];
    if ( v7 == 0 )
      return 0;
    if ( m_Index != v7->m_EHandle.m_Index )
      return 0;
    result = v7->m_pInstance;
    if ( v7->m_pInstance == 0 )
      return 0;
  }
  if ( !result->m_bIsDOTANPC || (result->m_iUnitType & 1) == 0 )
    return 0;
  return result;
}


// CDOTABehaviorPet::UpdateTempGoalHero  (line 224, @0x00000000028812e0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetReplicatingOtherHero, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Set, SetHeroHandle, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>, operator=, operator[], ~CUtlVector
// calls: CUtlMemory<CHandle<CBaseEntity>, int>::Grow, RandomInt, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTABehaviorPet::FireGameEvent, CDOTABehaviorPet::Update
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTABehaviorPet::UpdateTempGoalHero(CDOTABehaviorPet *const this, CDOTA_BaseNPC *me)
{
  __int64 v3; // r13
  int i; // r12d
  CConcreteEntityList *v5; // rsi
  CHandle<CDOTA_BaseNPC_Hero> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  __int64 v10; // rcx
  CEntityIdentity *v11; // rdx
  CEntityInstance *m_pInstance; // rbx
  int v13; // eax
  int v14; // ebx
  CEntityInstance *v15; // rax
  int m_pEntity_high; // ecx
  CEntityIdentity *v17; // rax
  CEntityIdentity *v18; // rax
  CEntityInstance *v19; // rdi
  uint32 v20; // eax
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CEntityIdentity *m_pEntity; // rsi
  __int16 v24; // cx
  __int64 m_Size; // rbx
  int v26; // eax
  CHandle<CBaseEntity> *v27; // rax
  CEntityIdentity *v28; // rdx
  int v29; // eax
  __int16 v30; // cx
  CEntityInstance *v31; // rax
  CEntityIdentity *v32; // rdx
  int v33; // eax
  __int16 v34; // cx
  int v36; // [rsp+20h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTargetList; // [rsp+30h] [rbp-50h] BYREF

  hTargetList.m_Memory.m_pMemory = 0;
  hTargetList.m_Memory.m_nAllocationCount = 0;
  hTargetList.m_Memory.m_nGrowSize = 0;
  CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hTargetList.m_Memory, 1);
  hTargetList.m_Size = 1;
  if ( hTargetList.m_Memory.m_pMemory != 0 )
    hTargetList.m_Memory.m_pMemory->m_Index = this->m_goalEntity.m_Index;
  v3 = 0;
  for ( i = 0; i < g_HeroList.m_hHeroList.m_Size; ++v3 )
  {
    v5 = CEntityHandle::gm_pEntityList;
    v6 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v3];
    m_Index = v6->m_Index;
    if ( v6->m_Index + 2 <= 1
      || (v8 = v6->m_Index,
          (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F]) == 0)
      || (v10 = v8 & 0x1FF, v5 = (8 * v10), (v11 = &v9[v10]) == 0)
      || m_Index != v11->m_EHandle.m_Index
      || (m_pInstance = v11->m_pInstance, v11->m_pInstance == 0)
      || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
    {
      m_pInstance = 0;
    }
    if ( LOBYTE(m_pInstance[71].m_pEntity) != 0 && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v5) != 0 )
    {
      m_pEntity_high = HIDWORD(m_pInstance[100].m_pEntity);
      if ( (m_pEntity_high + 2) > 1 )
      {
        v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(WORD2(m_pInstance[100].m_pEntity) >> 9) & 0x3F];
        if ( v17 != 0 )
        {
          v18 = &v17[WORD2(m_pInstance[100].m_pEntity) & 0x1FF];
          if ( v18 != 0 && m_pEntity_high == v18->m_EHandle.m_Index )
          {
            v19 = v18->m_pInstance;
            if ( v18->m_pInstance != 0 )
            {
              v20 = this->m_goalEntity.m_Index;
              if ( v20 + 2 > 1 )
              {
                v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_goalEntity.m_Index) >> 9) & 0x3F];
                if ( v21 != 0 )
                {
                  v22 = &v21[this->m_goalEntity.m_Index & 0x1FF];
                  if ( v22 != 0 && v20 == v22->m_EHandle.m_Index && v19 == v22->m_pInstance )
                  {
                    m_pEntity = m_pInstance->m_pEntity;
                    v36 = -1;
                    if ( m_pEntity != 0 )
                    {
                      v24 = 0x7FFF;
                      if ( m_pEntity->m_EHandle.m_Index != -1 )
                        v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                      v36 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v24 & 0x7FFF;
                    }
                    m_Size = hTargetList.m_Size;
                    v26 = hTargetList.m_Size;
                    if ( hTargetList.m_Size == hTargetList.m_Memory.m_nAllocationCount )
                    {
                      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hTargetList.m_Memory, 1);
                      v26 = hTargetList.m_Size;
                    }
                    hTargetList.m_Size = v26 + 1;
                    v27 = &hTargetList.m_Memory.m_pMemory[m_Size];
                    if ( v27 != 0 )
                      v27->m_Index = v36;
                  }
                }
              }
            }
          }
        }
      }
    }
    ++i;
  }
  v13 = RandomInt(0, (hTargetList.m_Size - 1));
  v14 = v13;
  if ( v13 != 0
    && (v31 = CEntityHandle::operator CEntityInstance *(&hTargetList.m_Memory.m_pMemory[v13])) != 0
    && (v32 = v31->m_pEntity) != 0 )
  {
    v33 = (v32->m_EHandle.m_Index >> 15) - (v32->m_flags & 1);
    v34 = 0x7FFF;
    if ( v32->m_EHandle.m_Index != -1 )
      v34 = v32->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_tempGoalEntity.m_Index) = v34 | this->m_tempGoalEntity.m_Index & 0x8000;
    this->m_tempGoalEntity.m_Index = (v33 << 15) | this->m_tempGoalEntity.m_Index & 0x7FFF;
  }
  else
  {
    this->m_tempGoalEntity.m_Index = -1;
  }
  this->m_bFollowingTempGoal = CEntityHandle::operator CEntityInstance *(&this->m_tempGoalEntity) != 0;
  if ( me != 0 && (*(me->_vptr_IHandleEntity + 404))(me) != 0 )
  {
    if ( v14 != 0 )
    {
      v15 = CEntityHandle::operator CEntityInstance *(&this->m_tempGoalEntity);
      if ( v15 == 0 || BYTE3(v15[7]._vptr_IHandleEntity) == 0 )
        goto LABEL_18;
    }
    else
    {
      v15 = CEntityHandle::operator CEntityInstance *(&this->m_goalEntity);
      if ( v15 == 0 || BYTE3(v15[7]._vptr_IHandleEntity) == 0 )
        goto LABEL_18;
    }
    if ( (v15[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 || (v28 = v15->m_pEntity) == 0 )
    {
LABEL_18:
      LODWORD(me[1]._vptr_IHandleEntity) = -1;
      goto LABEL_19;
    }
    v29 = (v28->m_EHandle.m_Index >> 15) - (v28->m_flags & 1);
    if ( v28->m_EHandle.m_Index == -1 )
      v30 = 0x7FFF;
    else
      v30 = v28->m_EHandle.m_Index & 0x7FFF;
    LOWORD(me[1]._vptr_IHandleEntity) = v30 | me[1]._vptr_IHandleEntity & 0x8000;
    LODWORD(me[1]._vptr_IHandleEntity) = (v29 << 15) | me[1]._vptr_IHandleEntity & 0x7FFF;
  }
LABEL_19:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hTargetList);
}


// CDOTABehaviorPet::FireGameEvent  (line 264, @0x0000000002881750, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, entindex, operator CEntityInstance*, operator!, operator->
// calls: CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CDOTABehaviorPet::UpdateTempGoalHero
// strings: "original_entindex"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTABehaviorPet::FireGameEvent(CDOTABehaviorPet *const this, IGameEvent *event)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  int v7; // r12d
  CEntityInstance *v8; // rax

  m_Index = this->m_goalEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_goalEntity.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_goalEntity.m_Index & 0x1FF];
      if ( v6 != 0
        && m_Index == v6->m_EHandle.m_Index
        && v6->m_pInstance != 0
        && (*(event->_vptr_IGameEvent + 3))(event) == this->m_event_dota_illusions_created
        && !this->m_bFollowingTempGoal )
      {
        v7 = (*(event->_vptr_IGameEvent + 8))(event, "original_entindex", 0);
        v8 = CEntityHandle::operator CEntityInstance *(&this->m_goalEntity);
        if ( v7 == CEntityInstance::GetEntityIndex(v8).m_Data )
          CDOTABehaviorPet::UpdateTempGoalHero(this, this->m_actor);
      }
    }
  }
}


// CDOTABehaviorPet::Update_CheckForReturnToBase  (line 289, @0x0000000002881120, libserver.so)  // inlines: Invalidate, IsElapsed, NetworkStateChanged, Reappear, Set, ShouldSetAnimation, StartEmote, operator=<float>
// calls: CDOTABehaviorPet::GetMyHero, CountdownTimer::Now, FindClearSpaceForUnit, CDOTABehaviorPet::Reappear, CDOTABody::StartAnimation, CDOTABehaviorPet::StartEmote, CDOTABehaviorPet::Vanish, CountdownTimer::Start
// callers: CDOTABehaviorPet::Update
bool __fastcall CDOTABehaviorPet::Update_CheckForReturnToBase(CDOTABehaviorPet *const this, CDOTA_BaseNPC *me)
{
  CDOTA_BaseNPC_Hero *MyHero; // rax
  CDOTA_BaseNPC *v5; // r12
  bool v6; // r8
  bool result; // al
  bool m_bReturnToBase; // r14
  double v9; // xmm0_8
  CDOTABody *v10; // rax
  float v11; // xmm1_4

  MyHero = CDOTABehaviorPet::GetMyHero(this, 0);
  v5 = MyHero;
  if ( MyHero == 0 )
    return 0;
  if ( (*(MyHero->_vptr_IHandleEntity + 408))(MyHero) != 0 || (*(v5->_vptr_IHandleEntity + 438))(v5) != 0 )
  {
    if ( this->m_bReturnToBase )
    {
      this->m_bReturnToBase = 0;
      this->m_MoveTo.m_bSetAnimation = 1;
      CDOTABehaviorPet::StartEmote(this, me, 0x69Au, v5, v6);
    }
    return 0;
  }
  m_bReturnToBase = this->m_bReturnToBase;
  if ( m_bReturnToBase )
  {
    *&v9 = LODWORD(this->m_ReturnToBaseTimer.m_timestamp.m_Value);
    if ( *&v9 > 0.0 )
    {
      *&v9 = CountdownTimer::Now(&this->m_ReturnToBaseTimer);
      if ( *&v9 >= this->m_ReturnToBaseTimer.m_timestamp.m_Value )
      {
        FindClearSpaceForUnit(me, this->m_vecHomeBasePosition, 1);
        *&v9 = 3212836864LL;
        if ( this->m_ReturnToBaseTimer.m_timestamp.m_Value != -1.0 )
        {
          (*(this->m_ReturnToBaseTimer._vptr_CountdownTimer + 2))(
            &this->m_ReturnToBaseTimer,
            12,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL,
            -1.0);
          this->m_ReturnToBaseTimer.m_timestamp.m_Value = -1.0;
        }
        if ( !this->m_bHasVanished )
          goto LABEL_17;
        if ( CDOTABehaviorPet::Reappear(this, me) )
          this->m_MoveTo.m_bSetAnimation = 0;
      }
    }
    result = this->m_bHasVanished;
    if ( !result )
    {
LABEL_17:
      v10 = (*(me->_vptr_IHandleEntity + 377))(me, v9);
      CDOTABody::StartAnimation(v10, 0x699u, 0, 1.0);
      return m_bReturnToBase;
    }
  }
  else
  {
    this->m_bReturnToBase = 1;
    CDOTABehaviorPet::Vanish(this, me);
    CountdownTimer::Start(&this->m_ReturnToBaseTimer, 3.0, v11);
    return 1;
  }
  return result;
}


// CDOTABehaviorPet::Update_CheckNeedsToVanish  (line 343, @0x0000000002878e70, libserver.so)
// calls: CDOTABehaviorPet::GetMyHero, CDOTA_BaseNPC::HasInvisibilityBuff, CDOTA_BaseNPC::FindModifierByName
// callers: CDOTABehaviorPet::Update
// strings: "modifier_teleporting"
bool __fastcall CDOTABehaviorPet::Update_CheckNeedsToVanish(CDOTABehaviorPet *const this, CDOTA_BaseNPC *me)
{
  CDOTA_BaseNPC_Hero *MyHero; // r14
  bool HasInvisibilityBuff; // r12

  MyHero = CDOTABehaviorPet::GetMyHero(this, 0);
  if ( MyHero == 0 )
    return 0;
  if ( (*(me->_vptr_IHandleEntity + 404))(me) == 0 )
    return CDOTA_BaseNPC::HasInvisibilityBuff(MyHero);
  HasInvisibilityBuff = CDOTA_BaseNPC::HasInvisibilityBuff(MyHero);
  if ( HasInvisibilityBuff )
    return 1;
  if ( CDOTA_BaseNPC::FindModifierByName(MyHero, "modifier_teleporting", 0) == 0 )
    return 0;
  if ( HIDWORD(me[1].m_pEntity) != 1 )
    return this->m_nCoopTeleportState == PetCoopStates_t::COOP_IGNORE;
  if ( this->m_nCoopTeleportState != PetCoopStates_t::COOP_IGNORE )
    return 0;
  this->m_nCoopTeleportState = PetCoopStates_t::COOPTELEPORT_START_PERFORMING;
  return HasInvisibilityBuff;
}


// CDOTABehaviorPet::Update  (line 376, @0x0000000002881830, libserver.so)  // inlines: ActionResult, ChangeTo, Continue, DOTAGameRules, DistToSqr, Get, GetBool, GetEntityIdentity, GetEntryIndex, GetFloat, GetGameTime, GetInstance, GetInt, IActionResult, IndexToIdentity, IsElapsed, IsValid, LengthSqr, LookupEntity, NetworkStateChanged, OutOfBounds, Reset, Set, SetPetThreatLevel, SetReadyToPerformCoopTeleport, SetRunActivityTo, WorldToGridPosX, WorldToGridPosY, operator CEntityInstance*, operator!, operator=<float>
// calls: operator new, CDOTABehaviorIdle::CDOTABehaviorIdle, CDOTABehaviorPet::UpdateTempGoalHero, CDOTABehaviorPet::GetMyHero, CDOTABehaviorPet::Update_CheckForReturnToBase, CountdownTimer::Now, CDOTABehaviorPet::Update_CoopTeleportReadiness, CDOTABehaviorPet::Update_CheckNeedsToVanish, CDOTABehaviorPet::Update_CheckForCoopOpportunities, CBaseEntity::GetAbsOrigin, floorf, CDOTABehaviorPet::Vanish (25 total)
// strings: "No goal entity", "Goalentity isn't a Hero"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorPet::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorPet *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTABehaviorIdle *v11; // rbx
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC_Hero *MyHero; // r14
  CDOTA_BaseNPC *v17; // r15
  float v18; // xmm1_4
  float v19; // xmm0_4
  bool v20; // r15
  bool v21; // al
  CDOTA_BaseNPC *v22; // rsi
  CDOTABehaviorPet *v23; // rdi
  float v24; // xmm0_4
  const Vector *AbsOrigin; // rax
  const Vector *v26; // rax
  float v27; // xmm0_4
  CDOTABehaviorIdle *v28; // rbx
  float v29; // xmm0_4
  int v30; // edx
  const Vector *v31; // r14
  const Vector *v32; // rax
  float v33; // xmm0_4
  float v34; // xmm1_4
  vec_t v35; // xmm1_4
  float v36; // xmm0_4
  Activity v37; // eax
  int nTestPosX; // [rsp+14h] [rbp-4Ch]
  int nTestPosXb; // [rsp+14h] [rbp-4Ch]
  int nTestPosXa; // [rsp+14h] [rbp-4Ch]
  const CountdownTimer *p_m_LevelupCheckTimer; // [rsp+18h] [rbp-48h]
  const CountdownTimer *p_m_StuckTimer; // [rsp+18h] [rbp-48h]
  float m_flThreatLevel; // [rsp+18h] [rbp-48h]
  Vector vTargetPos; // [rsp+20h] [rbp-40h] BYREF

  m_Index = this->m_goalEntity.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(this->m_goalEntity.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v10 = &v9[m_Index_low & 0x1FF]) == 0
    || m_Index != v10->m_EHandle.m_Index
    || v10->m_pInstance == 0 )
  {
    v11 = operator new(0x80u);
    CDOTABehaviorIdle::CDOTABehaviorIdle(v11);
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_action = v11;
    retstr->m_reason = "No goal entity";
    return retstr;
  }
  if ( this->m_bFollowingTempGoal )
  {
    v13 = this->m_tempGoalEntity.m_Index;
    if ( v13 + 2 <= 1
      || (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_tempGoalEntity.m_Index) >> 9) & 0x3F]) == 0
      || (v15 = &v14[this->m_tempGoalEntity.m_Index & 0x1FF]) == 0
      || v13 != v15->m_EHandle.m_Index
      || v15->m_pInstance == 0
      || (*(v15->m_pInstance->_vptr_IHandleEntity + 139))(v15->m_pInstance, interval) == 0 )
    {
      CDOTABehaviorPet::UpdateTempGoalHero(this, me);
    }
  }
  MyHero = CDOTABehaviorPet::GetMyHero(this, 0);
  if ( MyHero == 0 )
  {
    v28 = operator new(0x80u);
    CDOTABehaviorIdle::CDOTABehaviorIdle(v28);
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_action = v28;
    retstr->m_reason = "Goalentity isn't a Hero";
    return retstr;
  }
  v17 = 0;
  if ( (*(me->_vptr_IHandleEntity + 404))(me) != 0 )
  {
    LOBYTE(me[1].m_pEntity) = 0;
    v17 = me;
  }
  if ( CDOTABehaviorPet::Update_CheckForReturnToBase(this, me) )
    goto LABEL_18;
  p_m_LevelupCheckTimer = &this->m_LevelupCheckTimer;
  if ( CountdownTimer::Now(&this->m_LevelupCheckTimer) >= this->m_LevelupCheckTimer.m_timestamp.m_Value )
  {
    v29 = CountdownTimer::Now(p_m_LevelupCheckTimer) + this->m_LevelupCheckTimer.m_duration.m_Value;
    if ( v29 != this->m_LevelupCheckTimer.m_timestamp.m_Value )
    {
      nTestPosXb = LODWORD(v29);
      (*(this->m_LevelupCheckTimer._vptr_CountdownTimer + 2))(p_m_LevelupCheckTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      LODWORD(this->m_LevelupCheckTimer.m_timestamp.m_Value) = nTestPosXb;
    }
    CDOTABehaviorPet::Update_CheckForLevelup(this, me);
  }
  if ( CountdownTimer::Now(&this->m_ThreatTimer) >= this->m_ThreatTimer.m_timestamp.m_Value )
    goto LABEL_36;
  v19 = 0.0;
  if ( g_pGameRules != 0 )
    v19 = *&g_pGameRules[18].m_szQuestName[20];
  v18 = 0.1;
  if ( (v19 - MyHero->m_fMostRecentDamageTime) <= 0.1 )
  {
LABEL_36:
    m_flThreatLevel = this->m_flThreatLevel;
    CountdownTimer::Start(&this->m_ThreatTimer, dota_pet_threat_time.m_pParent->m_Value.m_fValue, v18);
    CDOTABehaviorPet::RecalculateThreat(this, me);
    if ( v17 != 0 )
      HIDWORD(v17[1]._vptr_IHandleEntity) = LODWORD(this->m_flThreatLevel);
    v20 = 1;
    if ( this->m_flThreatLevel <= 0.0 && this->m_FleePersistTimer.m_timestamp.m_Value <= 0.0 )
      v20 = m_flThreatLevel > 0.0;
  }
  else
  {
    v20 = 0;
  }
  if ( this->m_bHasVanished && this->m_nCoopTeleportState == PetCoopStates_t::COOP_IGNORE )
  {
LABEL_18:
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
  CDOTABehaviorPet::Update_CoopTeleportReadiness(this, me);
  if ( this->m_nCoopTeleportState != PetCoopStates_t::COOP_IGNORE )
  {
    CDOTABehaviorPet::Update_PerformCoopTeleport(this, me);
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
  v21 = CDOTABehaviorPet::Update_CheckNeedsToVanish(this, me);
  v22 = me;
  v23 = this;
  if ( v21 )
  {
LABEL_35:
    CDOTABehaviorPet::Vanish(v23, v22);
    goto LABEL_18;
  }
  CDOTABehaviorPet::Update_CheckForCoopOpportunities(this, me);
  if ( this->m_bIsEmoting )
  {
    CDOTABehaviorPet::UpdateEmoting(this, me);
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
  p_m_StuckTimer = &this->m_StuckTimer;
  if ( CountdownTimer::Now(&this->m_StuckTimer) >= this->m_StuckTimer.m_timestamp.m_Value )
  {
    v24 = CountdownTimer::Now(p_m_StuckTimer) + this->m_StuckTimer.m_duration.m_Value;
    if ( v24 != this->m_StuckTimer.m_timestamp.m_Value )
    {
      nTestPosXa = LODWORD(v24);
      (*(this->m_StuckTimer._vptr_CountdownTimer + 2))(p_m_StuckTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      LODWORD(this->m_StuckTimer.m_timestamp.m_Value) = nTestPosXa;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(me);
    nTestPosX = floorf(((AbsOrigin->x - g_GridNav.m_flOffsetX) + (0.5 * g_GridNav.m_flEdgeSize)) / g_GridNav.m_flEdgeSize);
    v26 = CBaseEntity::GetAbsOrigin(me);
    v27 = floorf(((v26->y - g_GridNav.m_flOffsetY) + (0.5 * g_GridNav.m_flEdgeSize)) / g_GridNav.m_flEdgeSize);
    if ( nTestPosX < g_GridNav.m_nMinX
      || nTestPosX > g_GridNav.m_nMaxX
      || (v30 = v27, v27 < g_GridNav.m_nMinY)
      || v30 > g_GridNav.m_nMaxY
      || CGridNav::IsEnclosed(&g_GridNav, nTestPosX, v30, 0)
      || (v31 = CBaseEntity::GetAbsOrigin(MyHero),
          (((((v32 = CBaseEntity::GetAbsOrigin(me))->x - v31->x) * (v32->x - v31->x))
          + ((v32->y - v31->y) * (v32->y - v31->y)))
         + ((v32->z - v31->z) * (v32->z - v31->z))) > 9000000.0) )
    {
      v22 = me;
      v23 = this;
      goto LABEL_35;
    }
  }
  if ( CountdownTimer::Now(&this->m_PositionFuzziness) >= this->m_PositionFuzziness.m_timestamp.m_Value || v20 )
  {
    CDOTABehaviorPet::RecalculateTargetPosition(this, me, this->m_flThreatLevel > 0.0);
    v33 = RandomFloat(
            dota_pet_reposition_mintime.m_pParent->m_Value.m_fValue,
            dota_pet_reposition_maxtime.m_pParent->m_Value.m_fValue);
    CountdownTimer::Start(&this->m_PositionFuzziness, v33, v34);
  }
  *&vTargetPos.x = (*(this->_vptr_INextBotEventResponder + 130))(this, me);
  vTargetPos.z = v35;
  if ( dota_pet_debug.m_pParent->m_Value.m_nValue != 0 )
    NDebugOverlay::Sphere(&vTargetPos, &vec3_angle, 32.0, 0, 0xFFu, 0, 16, 0.1, 1);
  v36 = (*(me->_vptr_IHandleEntity + 386))(me);
  v37 = 1502;
  if ( v36 < 365.0 )
    v37 = 1686;
  this->m_MoveTo.m_nRunActivity = v37;
  CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
  CDOTABehaviorPet::Update_CheckForEmoteOpportunities(this, me);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorPet::Update_CheckForLevelup  (line 510, @0x000000000287a720, libserver.so)  // inlines: StartEmote
// calls: CDOTA_BaseNPC_Pet::UpdatePetLevel, CDOTABehaviorPet::StartEmote
// callers: CDOTABehaviorPet::Update
void __fastcall CDOTABehaviorPet::Update_CheckForLevelup(CDOTABehaviorPet *const this, CDOTA_BaseNPC *me)
{
  int m_pAsString_high; // r13d
  bool v5; // r8

  if ( (*(me->_vptr_IHandleEntity + 404))(me) != 0 )
  {
    m_pAsString_high = HIDWORD(me[1].m_iszPrivateVScripts.u.m_pAsString);
    CDOTA_BaseNPC_Pet::UpdatePetLevel(me);
    if ( m_pAsString_high < SHIDWORD(me[1].m_iszPrivateVScripts.u.m_pAsString)
      && !this->m_bIsEmoting
      && !this->m_bHasVanished )
    {
      CDOTABehaviorPet::StartEmote(this, me, 0x6A5u, 0, v5);
    }
  }
}


// CDOTABehaviorPet::Update_CoopTeleportReadiness  (line 527, @0x0000000002878f40, libserver.so)  // inlines: DistToSqr, LengthSqr, SetReadyToPerformCoopTeleport
// calls: CDOTABehaviorPet::GetMyHero, CBaseEntity::GetAbsOrigin
// callers: CDOTABehaviorPet::Update
void __fastcall CDOTABehaviorPet::Update_CoopTeleportReadiness(CDOTABehaviorPet *const this, CDOTA_BaseNPC *me)
{
  CDOTA_BaseNPC_Hero *MyHero; // r13
  bool v5; // al
  const Vector *AbsOrigin; // r12
  const Vector *v7; // rax
  float v8; // xmm1_4

  MyHero = CDOTABehaviorPet::GetMyHero(this, 0);
  if ( (*(me->_vptr_IHandleEntity + 404))(me) != 0
    && MyHero != 0
    && SHIDWORD(me[1].m_iszPrivateVScripts.u.m_pAsString) > 1
    && BYTE1(me[1].m_pEntity) != 0 )
  {
    v5 = 0;
    if ( !this->m_bIsEmoting && !this->m_bFollowingTempGoal && !this->m_bHasVanished && this->m_flThreatLevel < 0.5 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(me);
      v7 = CBaseEntity::GetAbsOrigin(MyHero);
      v8 = v7->z - AbsOrigin->z;
      v5 = ((((v7->x - AbsOrigin->x) * (v7->x - AbsOrigin->x)) + ((v7->y - AbsOrigin->y) * (v7->y - AbsOrigin->y)))
          + (v8 * v8)) < 360000.0;
    }
    LOBYTE(me[1].m_pEntity) = v5;
  }
}


// CDOTABehaviorPet::Update_PerformCoopTeleport  (line 552, @0x000000000287ac90, libserver.so)  // inlines: Length2DSqr, StartEmote, VectorSubtract, operator-
// calls: CDOTABehaviorPet::GetMyHero, CDOTA_BaseNPC::FindModifierByName, CDOTABehaviorMoveTo::Update, CBaseEntity::GetAbsOrigin, CDOTABehaviorPet::Vanish, FindClearSpaceForUnit, CBaseEntity::GetAbsAngles, CBaseEntity::SetLocalAngles, CDOTABehaviorPet::StartEmote
// callers: CDOTABehaviorPet::Update
// strings: "modifier_teleporting"
void __fastcall CDOTABehaviorPet::Update_PerformCoopTeleport(CDOTABehaviorPet *const this, CDOTA_BaseNPC *me)
{
  CDOTA_BaseNPC_Hero *MyHero; // r13
  bool v5; // zf
  PetCoopStates_t m_nCoopTeleportState; // eax
  const Vector *AbsOrigin; // rax
  const QAngle *AbsAngles; // rax
  bool v9; // r8
  __int64 v10; // rbx
  void (__fastcall *v11)(__int64, float); // r12
  const QAngle *v12; // rax
  __int64 v13; // r14
  void (__fastcall *v14)(__int64, const Vector *); // r15
  const Vector *v15; // rax
  bool v16; // r8
  double vTarget; // [rsp+0h] [rbp-40h]
  Vector v18; // 0:xmm0_8.8,8:xmm1_4.4

  MyHero = CDOTABehaviorPet::GetMyHero(this, 0);
  if ( (*(me->_vptr_IHandleEntity + 404))(me) != 0 && MyHero != 0 )
  {
    v5 = CDOTA_BaseNPC::FindModifierByName(MyHero, "modifier_teleporting", 0) == 0;
    m_nCoopTeleportState = this->m_nCoopTeleportState;
    if ( !v5 || m_nCoopTeleportState > PetCoopStates_t::COOPTELEPORT_START_PERFORMING && HIDWORD(me[1].m_pEntity) == 3 )
    {
      if ( m_nCoopTeleportState == PetCoopStates_t::COOPTELEPORT_START_PERFORMING )
      {
        CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
        vTarget = (*(this->_vptr_INextBotEventResponder + 130))(this, me);
        AbsOrigin = CBaseEntity::GetAbsOrigin(me);
        if ( (((AbsOrigin->x - *&vTarget) * (AbsOrigin->x - *&vTarget))
            + ((AbsOrigin->y - *(&vTarget + 1)) * (AbsOrigin->y - *(&vTarget + 1)))) < 256.0 )
        {
          v13 = (*(me->_vptr_IHandleEntity + 376))(me);
          v14 = *(*v13 + 744LL);
          v15 = CBaseEntity::GetAbsOrigin(MyHero);
          v14(v13, v15);
          if ( HIDWORD(me[1].m_pEntity) == 2 )
          {
            CDOTABehaviorPet::StartEmote(this, me, 0x69Du, 0, v16);
            this->m_nCoopTeleportState = PetCoopStates_t::COOPTELEPORT_PLAY_ENDANIM;
          }
        }
        else if ( HIDWORD(me[1].m_pEntity) == 2 )
        {
          this->m_nCoopTeleportState = PetCoopStates_t::COOP_IGNORE;
          CDOTABehaviorPet::Vanish(this, me);
        }
      }
      else if ( m_nCoopTeleportState == PetCoopStates_t::COOPTELEPORT_PLAY_ENDANIM && HIDWORD(me[1].m_pEntity) == 3 )
      {
        *&v18.x = (*(this->_vptr_INextBotEventResponder + 130))(this, me);
        FindClearSpaceForUnit(me, v18, 1);
        AbsAngles = CBaseEntity::GetAbsAngles(MyHero);
        CBaseEntity::SetLocalAngles(me, AbsAngles);
        CDOTABehaviorPet::StartEmote(this, me, 0x69Eu, 0, v9);
        this->m_nCoopTeleportState = PetCoopStates_t::COOPTELEPORT_PLAY_EXITANIM;
        v10 = (*(me->_vptr_IHandleEntity + 376))(me);
        v11 = *(*v10 + 920LL);
        v12 = CBaseEntity::GetAbsAngles(MyHero);
        v11(v10, v12->y);
      }
    }
    else
    {
      this->m_nCoopTeleportState = PetCoopStates_t::COOP_IGNORE;
    }
  }
}


// CDOTABehaviorPet::Update_CheckForCoopOpportunities  (line 625, @0x000000000287aed0, libserver.so)  // inlines: SetCoopState, StartEmote
// calls: CDOTABehaviorPet::StartEmote
// callers: CDOTABehaviorPet::Update
void __fastcall CDOTABehaviorPet::Update_CheckForCoopOpportunities(CDOTABehaviorPet *const this, CDOTA_BaseNPC *me)
{
  bool v4; // r8
  int m_pEntity_high; // eax

  if ( me != 0 && (*(me->_vptr_IHandleEntity + 404))(me) != 0 && SHIDWORD(me[1].m_iszPrivateVScripts.u.m_pAsString) > 1 )
  {
    m_pEntity_high = HIDWORD(me[1].m_pEntity);
    if ( m_pEntity_high == 4 )
    {
      if ( !this->m_bIsEmoting )
        CDOTABehaviorPet::StartEmote(this, me, 0x6A3u, 0, v4);
    }
    else
    {
      if ( m_pEntity_high != 5 )
        return;
      if ( !this->m_bIsEmoting )
        CDOTABehaviorPet::StartEmote(this, me, 0x6A4u, 0, v4);
    }
    HIDWORD(me[1].m_pEntity) = 0;
  }
}


// CDOTABehaviorPet::Update_CheckForEmoteOpportunities  (line 658, @0x000000000287a7a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetGameTime, GetInstance, GetPickupItemModel, IndexToIdentity, IsCarryingItem, IsElapsed, IsValid, LookupEntity, StartEmote, operator CDOTA_BaseNPC*, operator bool, operator!=<CDOTA_Pet_CarriedItem>
// calls: CDOTABehaviorPet::GetMyHero, CDOTA_BaseNPC::IsChanneling, CDOTABehaviorMoveTo::IsPathCurrentlyExhausted, CDOTABehaviorMoveTo::IsInWater, CUtlString::Get, CEntityHandle::operator CEntityInstance*, CountdownTimer::Now, CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTABehaviorPet::StartEmote, CountdownTimer::Start, RandomFloat
// callers: CDOTABehaviorPet::Update
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTABehaviorPet::Update_CheckForEmoteOpportunities(CDOTABehaviorPet *const this, CDOTA_BaseNPC *me)
{
  CDOTA_BaseNPC_Hero *MyHero; // rax
  CDOTA_BaseNPC *v5; // r13
  float m_flThreatLevel; // xmm0_4
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTABehaviorMoveTo *p_m_MoveTo; // r13
  const char *v11; // rax
  float m_flLastInWater; // xmm0_4
  float v13; // xmm1_4
  CDOTABaseAbility *CurrentActiveAbility; // rdi
  bool v15; // r8
  CEntityInstance *v16; // rax
  Activity v17; // edx
  CDOTA_BaseNPC *v18; // rcx
  CEntityInstance *v19; // rax
  float v20; // xmm1_4
  float m_fValue; // xmm0_4
  CountdownTimer *p_m_PickupDelayTimer; // rdi
  float v23; // xmm0_4
  float m_Value; // xmm1_4

  MyHero = CDOTABehaviorPet::GetMyHero(this, 0);
  v5 = MyHero;
  if ( MyHero != 0 && CDOTA_BaseNPC::IsChanneling(MyHero) && !this->m_bIsEmoting )
  {
    CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(v5);
    if ( CurrentActiveAbility != 0 && (*(CurrentActiveAbility->_vptr_IHandleEntity + 214))(CurrentActiveAbility) == 1 )
    {
      CDOTABehaviorPet::StartEmote(this, me, 0x5E9u, 0, v15);
      return;
    }
  }
  m_flThreatLevel = this->m_flThreatLevel;
  if ( m_flThreatLevel > 0.0 )
  {
    if ( m_flThreatLevel >= 0.3 )
      goto LABEL_9;
    if ( this->m_MoveTo.m_path.m_Positions.m_Size <= 0
      || CDOTABehaviorMoveTo::IsPathCurrentlyExhausted(&this->m_MoveTo, me) )
    {
      v16 = CEntityHandle::operator CEntityInstance *(&this->m_hNearestEnemyHero);
      v17 = 1501;
      v18 = v16;
LABEL_34:
      CDOTABehaviorPet::StartEmote(this, me, v17, v18, 0);
      return;
    }
    m_flThreatLevel = this->m_flThreatLevel;
  }
  if ( m_flThreatLevel <= 0.0 )
  {
LABEL_13:
    p_m_MoveTo = &this->m_MoveTo;
    goto LABEL_14;
  }
LABEL_9:
  m_Index = this->m_hNearestEnemyHero.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_13;
  v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hNearestEnemyHero.m_Index) >> 9) & 0x3F];
  if ( v8 == 0 )
    goto LABEL_13;
  v9 = &v8[this->m_hNearestEnemyHero.m_Index & 0x1FF];
  if ( v9 == 0 || m_Index != v9->m_EHandle.m_Index )
    goto LABEL_13;
  if ( this->m_MoveTo.m_path.m_Positions.m_Size <= 0
    || (p_m_MoveTo = &this->m_MoveTo, CDOTABehaviorMoveTo::IsPathCurrentlyExhausted(&this->m_MoveTo, me)) )
  {
    v19 = CEntityHandle::operator CEntityInstance *(&this->m_hNearestEnemyHero);
    v17 = 1536;
    v18 = v19;
    goto LABEL_34;
  }
LABEL_14:
  if ( CDOTABehaviorMoveTo::IsInWater(p_m_MoveTo, me) )
  {
    this->m_flLastInWater = *&g_pGameRules[18].m_szQuestName[20];
  }
  else if ( this->m_flThreatLevel == 0.0 )
  {
    m_flLastInWater = this->m_flLastInWater;
    if ( m_flLastInWater != 0.0 )
    {
      v13 = *&g_pGameRules[18].m_szQuestName[20] - m_flLastInWater;
      if ( v13 > 2.0 )
      {
        if ( v13 <= 4.0 )
        {
          CDOTABehaviorPet::StartEmote(this, me, 1687, 0, 0);
          this->m_flLastInWater = 0.0;
          return;
        }
        this->m_flLastInWater = 0.0;
      }
    }
  }
  if ( me != 0 && (*(me->_vptr_IHandleEntity + 404))(me) != 0 && SHIDWORD(me[1].m_iszPrivateVScripts.u.m_pAsString) > 1 )
  {
    v11 = CUtlString::Get(&me[1].m_hPrivateScope);
    if ( v11 != 0 && *v11 != 0 )
    {
      if ( CEntityHandle::operator CEntityInstance *(&me[1].m_iszPrivateVScripts) != 0 )
      {
        if ( CountdownTimer::Now(&this->m_CarryItemTimer) < this->m_CarryItemTimer.m_timestamp.m_Value )
          return;
        CDOTABehaviorPet::StartEmote(this, me, 1697, 0, 0);
        m_fValue = 300.0;
        p_m_PickupDelayTimer = &this->m_PickupDelayTimer;
LABEL_39:
        CountdownTimer::Start(p_m_PickupDelayTimer, m_fValue, v20);
        return;
      }
      v23 = CountdownTimer::Now(&this->m_PickupDelayTimer);
      m_Value = this->m_PickupDelayTimer.m_timestamp.m_Value;
      if ( (v23 >= m_Value || m_Value <= 0.0) && RandomFloat(0.0, 1.0) <= 0.01 )
      {
        CDOTABehaviorPet::StartEmote(this, me, 1696, 0, 0);
        p_m_PickupDelayTimer = &this->m_CarryItemTimer;
        m_fValue = dota_pet_itemcarry.m_pParent->m_Value.m_fValue;
        goto LABEL_39;
      }
    }
  }
}


// CDOTABehaviorPet::UpdateEmoting  (line 746, @0x000000000287a1a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator bool, operator->
// calls: CDOTABehaviorPet::GetMyHero, CDOTABehaviorPet::FinishEmote, CDOTA_BaseNPC::IsChanneling, CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTA_BaseNPC::HasInvisibilityBuff, CBaseEntity::GetTeam, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin
// callers: CDOTABehaviorPet::Update
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTABehaviorPet::UpdateEmoting(CDOTABehaviorPet *const this, CDOTA_BaseNPC *me)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC_Hero *MyHero; // rax
  CDOTA_BaseNPC *v8; // r13
  CDOTABaseAbility *CurrentActiveAbility; // rax
  __int64 v10; // r13
  CTeam *Team; // rax
  __int64 v12; // r13
  void (__fastcall *v13)(__int64, const Vector *); // r14
  const CBaseEntity *v14; // rax
  const Vector *AbsOrigin; // rax
  __int64 v16; // rcx
  CEntityInstance *m_pInstance; // rdx
  CEntityIdentity *v18; // rsi
  __int64 v19; // rdx
  bool v20; // zf
  CEntityIdentity *v21; // rsi
  CTeam *pTeam; // [rsp+8h] [rbp-58h]
  CGameCheckTransmitInfo_0 gameInfo; // [rsp+10h] [rbp-50h] BYREF

  m_Index = this->m_hEmoteTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEmoteTarget.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hEmoteTarget.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index && !CDOTA_BaseNPC::HasInvisibilityBuff(v6->m_pInstance) )
      {
        v10 = (*(me->_vptr_IHandleEntity + 413))(me);
        Team = CBaseEntity::GetTeam(me);
        if ( v10 == 0 || Team == 0 )
          goto LABEL_15;
        pTeam = Team;
        (*(*v10 + 2976LL))(v10, &gameInfo, 0);
        v16 = this->m_hEmoteTarget.m_Index;
        m_pInstance = 0;
        if ( (v16 + 2) > 1 )
        {
          v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEmoteTarget.m_Index) >> 9) & 0x3F];
          if ( v18 != 0 )
          {
            v19 = this->m_hEmoteTarget.m_Index & 0x1FF;
            v20 = &v18[v19] == 0;
            v21 = &v18[v19];
            m_pInstance = 0;
            if ( !v20 && v16 == v21->m_EHandle.m_Index )
              m_pInstance = v21->m_pInstance;
          }
        }
        if ( (*(pTeam->_vptr_IHandleEntity + 210))(
               pTeam,
               &gameInfo,
               m_pInstance,
               v16,
               *(pTeam->_vptr_IHandleEntity + 210),
               CEntityHandle::gm_pEntityList) != 8 )
        {
LABEL_15:
          v12 = (*(me->_vptr_IHandleEntity + 376))(me);
          v13 = *(*v12 + 744LL);
          v14 = CEntityHandle::operator CEntityInstance *(&this->m_hEmoteTarget);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v14);
          v13(v12, AbsOrigin);
        }
      }
    }
  }
  if ( this->m_nEmoteActivity == 1513 )
  {
    MyHero = CDOTABehaviorPet::GetMyHero(this, 0);
    v8 = MyHero;
    if ( MyHero == 0
      || (*(MyHero->_vptr_IHandleEntity + 408))(MyHero) == 0
      || !CDOTA_BaseNPC::IsChanneling(v8)
      || (CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(v8)) == 0
      || (*(CurrentActiveAbility->_vptr_IHandleEntity + 214))(CurrentActiveAbility) != 1 )
    {
      CDOTABehaviorPet::FinishEmote(this, me);
    }
  }
}


// CDOTABehaviorPet::RecalculateTargetPosition  (line 791, @0x0000000002879040, libserver.so)  // inlines: DEG2RAD, DotProduct, GetBool, GetFloat, GetInt, HasStarted, Invalidate, IsElapsed, NetworkStateChanged, NormalizeInPlace, QAngle, RAD2DEG, RemapValClamped, Set, VectorAdd, VectorMultiply, VectorSubtract, clamp<float, float>, operator!=, operator*, operator+, operator-, operator=, operator=<float>, operator==, operator><float>
// calls: CDOTABehaviorPet::GetMyHero, CBaseEntity::GetAbsOrigin, VectorNormalize, acosf, CountdownTimer::Now, RandomFloat, CountdownTimer::Start, RandomInt, NDebugOverlay::Circle, NDebugOverlay::Cone, UTIL_VarArgs, NDebugOverlay::Text (13 total)
// callers: CDOTABehaviorPet::OnStart, CDOTABehaviorPet::Reappear, CDOTABehaviorPet::Update
// strings: "%.2f (%.2f)"
void __fastcall CDOTABehaviorPet::RecalculateTargetPosition(
        CDOTABehaviorPet *const this,
        CDOTA_BaseNPC *me,
        bool bBehind)
{
  bool v5; // r12
  CDOTA_BaseNPC_Hero *MyHero; // rbx
  float m_flThreatLevel; // xmm0_4
  __m128 m_fValue_low; // xmm2
  float v9; // xmm0_4
  float v10; // xmm5_4
  __m128 v11; // xmm2
  __m128d v12; // xmm0
  const Vector *v13; // r14
  const Vector *v14; // rax
  vec_t v15; // xmm0_4
  vec_t v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  double v23; // xmm1_8
  float z; // xmm2_4
  float v25; // xmm0_4
  float m_Value; // xmm1_4
  float v27; // xmm0_4
  vec_t v28; // xmm1_4
  float v29; // xmm1_4
  double v30; // xmm0_8
  bool v31; // zf
  vec_t v32; // xmm2_4
  vec_t v33; // xmm0_4
  int v34; // eax
  int v35; // ebx
  __m128i v36; // xmm7
  __m128i v37; // xmm6
  float v38; // r12d
  float v39; // r14d
  __m128i z_low; // xmm7
  float v41; // r13d
  const Vector *v42; // rax
  vec_t v43; // xmm1_4
  vec_t v44; // xmm2_4
  float m_fValue; // xmm1_4
  const Vector *AbsOrigin; // rax
  vec_t v47; // xmm0_4
  vec_t v48; // xmm4_4
  float v49; // xmm1_4
  const Vector *v50; // rax
  vec_t v51; // xmm0_4
  vec_t v52; // xmm4_4
  __m128i v53; // xmm5
  float v54; // r13d
  __m128i v55; // xmm0
  float v56; // r14d
  const Vector *v57; // rax
  vec_t v58; // xmm0_4
  vec_t v59; // xmm2_4
  vec_t x; // xmm2_4
  vec_t v61; // xmm0_4
  const Vector *v62; // rax
  vec_t v63; // xmm4_4
  vec_t v64; // xmm5_4
  float v65; // r14d
  float v66; // xmm0_4
  char *v67; // r13
  const Vector *v68; // rax
  vec_t v69; // xmm4_4
  vec_t v70; // xmm2_4
  __m128i x_low; // xmm7
  __m128i v72; // xmm6
  float v73; // r13d
  float v74; // r14d
  const Vector *v75; // rax
  vec_t v76; // xmm2_4
  vec_t v77; // xmm5_4
  const Vector *v78; // rax
  __m128i v79; // xmm7
  __m128i y_low; // xmm6
  float v81; // r13d
  float v82; // r14d
  const Vector *v83; // rax
  vec_t v84; // xmm1_4
  vec_t v85; // xmm4_4
  const Vector *v86; // rax
  float v87; // [rsp+8h] [rbp-78h]
  float flDot; // [rsp+Ch] [rbp-74h]
  float flDota; // [rsp+Ch] [rbp-74h]
  __int32 radius; // [rsp+10h] [rbp-70h]
  float radiusa; // [rsp+10h] [rbp-70h]
  float radiusb; // [rsp+10h] [rbp-70h]
  float radiusc; // [rsp+10h] [rbp-70h]
  float flTgt; // [rsp+14h] [rbp-6Ch]
  float flDuration; // [rsp+18h] [rbp-68h]
  float flDurationa; // [rsp+18h] [rbp-68h]
  float flDurationb; // [rsp+18h] [rbp-68h]
  float flDurationc; // [rsp+18h] [rbp-68h]
  float flDurationd; // [rsp+18h] [rbp-68h]
  float flDuratione; // [rsp+18h] [rbp-68h]
  float flMax; // [rsp+1Ch] [rbp-64h]
  float flMaxa; // [rsp+1Ch] [rbp-64h]
  float flMaxb; // [rsp+1Ch] [rbp-64h]
  float flMaxc; // [rsp+1Ch] [rbp-64h]
  Vector vecFleeDir; // [rsp+20h] [rbp-60h] BYREF
  Vector vecToHero; // [rsp+30h] [rbp-50h] BYREF
  QAngle angles; // [rsp+40h] [rbp-40h] BYREF

  v5 = 1;
  if ( dota_pet_allow_infront.m_pParent->m_Value.m_nValue != 0 )
    v5 = bBehind;
  vecFleeDir = this->m_vecFleeDirection;
  if ( vec3_origin.x != vecFleeDir.x )
    goto LABEL_4;
  *&v23 = LODWORD(vec3_origin.y);
  if ( *&v23 != vecFleeDir.y )
    goto LABEL_4;
  z = vec3_origin.z;
  if ( z != vecFleeDir.z )
  {
LABEL_28:
    *&v30 = LODWORD(vec3_origin.z);
    v31 = *&v30 == vecFleeDir.z;
    goto LABEL_29;
  }
  if ( vec3_origin.x != this->m_vecOldFleeDirection.x
    || *&v23 != this->m_vecOldFleeDirection.y
    || z != this->m_vecOldFleeDirection.z )
  {
    if ( this->m_FleePersistTimer.m_timestamp.m_Value <= 0.0 )
    {
      CountdownTimer::Start(&this->m_FleePersistTimer, dota_pet_fleedir_persist_time.m_pParent->m_Value.m_fValue, *&v23);
    }
    else
    {
      v25 = CountdownTimer::Now(&this->m_FleePersistTimer);
      m_Value = this->m_FleePersistTimer.m_timestamp.m_Value;
      if ( v25 >= m_Value )
      {
        this->m_vecOldFleeDirection.y = vec3_origin.y;
        x = vec3_origin.x;
        v61 = vec3_origin.z;
        this->m_vecOldFleeDirection.x = vec3_origin.x;
        this->m_vecOldFleeDirection.z = v61;
        if ( m_Value == -1.0 )
        {
          v27 = vecFleeDir.x;
          v29 = x;
        }
        else
        {
          (*(this->m_FleePersistTimer._vptr_CountdownTimer + 2))(
            &this->m_FleePersistTimer,
            12,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
          v29 = vec3_origin.x;
          this->m_FleePersistTimer.m_timestamp.m_Value = -1.0;
          v27 = vecFleeDir.x;
        }
LABEL_26:
        if ( v27 == v29 )
        {
          *&v23 = LODWORD(vec3_origin.y);
          if ( *&v23 == vecFleeDir.y )
            goto LABEL_28;
        }
LABEL_4:
        MyHero = CDOTABehaviorPet::GetMyHero(this, 0);
        if ( MyHero == 0 )
          return;
        m_flThreatLevel = this->m_flThreatLevel;
        m_fValue_low = LODWORD(dota_pet_dist_max.m_pParent->m_Value.m_fValue);
        if ( m_flThreatLevel < 0.0 )
          v9 = 0.0;
        else
          v9 = fminf(1.0, m_flThreatLevel);
        m_fValue_low.m128_f32[0] = ((m_fValue_low.m128_f32[0] - dota_pet_dist_min.m_pParent->m_Value.m_fValue) * v9)
                                 + dota_pet_dist_min.m_pParent->m_Value.m_fValue;
        v10 = dota_pet_dist_range.m_pParent->m_Value.m_fValue + m_fValue_low.m128_f32[0];
        v11 = _mm_unpacklo_ps(m_fValue_low, m_fValue_low);
        v12 = _mm_cvtps_pd(v11);
        flMax = v10;
        v12.m128d_f64[0] = v12.m128d_f64[0] + (v10 - v11.m128_f32[0]) * 0.5;
        flTgt = _mm_movedup_pd(v12).m128d_f64[0];
        if ( dota_pet_debug.m_pParent->m_Value.m_nValue != 0 )
        {
          radius = v11.m128_i32[0];
          m_fValue = dota_pet_threat_time.m_pParent->m_Value.m_fValue;
          angles.x = -90.0;
          angles.y = 0.0;
          flDurationa = m_fValue;
          angles.z = 0.0;
          AbsOrigin = CBaseEntity::GetAbsOrigin(MyHero);
          v47 = AbsOrigin->z + 1.0;
          v48 = AbsOrigin->x + 0.0;
          vecToHero.y = AbsOrigin->y + 0.0;
          vecToHero.z = v47;
          vecToHero.x = v48;
          NDebugOverlay::Circle(&vecToHero, &angles, *&radius, 0xFFu, 0, 0, 0, flDurationa, 1);
          v11.m128_i32[0] = radius;
          if ( dota_pet_debug.m_pParent->m_Value.m_nValue != 0 )
          {
            v49 = dota_pet_threat_time.m_pParent->m_Value.m_fValue;
            angles.x = -90.0;
            angles.y = 0.0;
            flDurationb = v49;
            angles.z = 0.0;
            v50 = CBaseEntity::GetAbsOrigin(MyHero);
            v51 = v50->z + 1.0;
            v52 = v50->x + 0.0;
            vecToHero.y = v50->y + 0.0;
            vecToHero.z = v51;
            vecToHero.x = v52;
            NDebugOverlay::Circle(&vecToHero, &angles, flMax, 0, 0xFFu, 0, 0, flDurationb, 1);
            v11.m128_i32[0] = radius;
          }
        }
        flDuration = v11.m128_f32[0];
        v13 = CBaseEntity::GetAbsOrigin(MyHero);
        v14 = CBaseEntity::GetAbsOrigin(me);
        v15 = v14->y - v13->y;
        v16 = v14->x - v13->x;
        vecToHero.z = 0.0;
        vecToHero.y = v15;
        vecToHero.x = v16;
        v17 = VectorNormalize(&vecToHero);
        if ( v17 < flDuration || flMax < v17 )
          goto LABEL_35;
        v18 = ((vecToHero.x * vecFleeDir.x) + (vecToHero.y * vecFleeDir.y)) + (vecToHero.z * vecFleeDir.z);
        if ( v18 <= 1.0 )
          v19 = fmaxf(-1.0, v18);
        else
          v19 = 1.0;
        if ( dota_pet_debug.m_pParent->m_Value.m_nValue != 0 )
        {
          flDot = v19;
          radiusa = dota_pet_threat_time.m_pParent->m_Value.m_fValue;
          flDurationc = (dota_pet_dist_cone.m_pParent->m_Value.m_fValue + dota_pet_dist_cone.m_pParent->m_Value.m_fValue)
                      * 0.017453292;
          v62 = CBaseEntity::GetAbsOrigin(MyHero);
          v63 = v62->y + 0.0;
          v64 = v62->x + 0.0;
          angles.z = v62->z + 1.0;
          angles.x = v64;
          angles.y = v63;
          NDebugOverlay::Cone(&angles, &vecFleeDir, flDurationc, flMax, 0, 0xFFu, 0, 15, radiusa, 0);
          v19 = flDot;
          if ( dota_pet_debug.m_pParent->m_Value.m_nValue != 0 )
          {
            v65 = dota_pet_threat_time.m_pParent->m_Value.m_fValue;
            v66 = acosf(flDot);
            v87 = flDot;
            v67 = UTIL_VarArgs("%.2f (%.2f)", (v66 * 57.295776), flDot);
            flDota = vecFleeDir.x * 100.0;
            radiusb = vecFleeDir.y * 100.0;
            flMaxb = 100.0 * vecFleeDir.z;
            v68 = CBaseEntity::GetAbsOrigin(MyHero);
            v69 = radiusb + v68->y;
            v70 = flMaxb + v68->z;
            angles.x = flDota + v68->x;
            angles.y = v69;
            angles.z = v70;
            NDebugOverlay::Text(&angles, v67, 1, v65);
            v19 = v87;
            if ( dota_pet_debug.m_pParent->m_Value.m_nValue != 0 )
            {
              x_low = LODWORD(vecToHero.x);
              v72 = 0x42C80000u;
              *x_low.m128i_i32 = vecToHero.x * 100.0;
              *v72.m128i_i32 = 100.0 * vecToHero.z;
              radiusc = dota_pet_threat_time.m_pParent->m_Value.m_fValue;
              v73 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
              flDurationd = vecToHero.y * 100.0;
              v74 = COERCE_FLOAT(_mm_cvtsi128_si32(v72));
              v75 = CBaseEntity::GetAbsOrigin(MyHero);
              v76 = flDurationd + v75->y;
              v77 = v73 + v75->x;
              angles.z = v74 + v75->z;
              angles.y = v76;
              angles.x = v77;
              v78 = CBaseEntity::GetAbsOrigin(MyHero);
              NDebugOverlay::Line(v78, &angles, 0, 0xFFu, 0xFFu, 1, radiusc);
              v19 = v87;
              if ( dota_pet_debug.m_pParent->m_Value.m_nValue != 0 )
              {
                v79 = LODWORD(vecFleeDir.x);
                y_low = LODWORD(vecFleeDir.y);
                *v79.m128i_i32 = vecFleeDir.x * 100.0;
                *y_low.m128i_i32 = vecFleeDir.y * 100.0;
                flDuratione = dota_pet_threat_time.m_pParent->m_Value.m_fValue;
                v81 = COERCE_FLOAT(_mm_cvtsi128_si32(v79));
                v82 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
                flMaxc = 100.0 * vecFleeDir.z;
                v83 = CBaseEntity::GetAbsOrigin(MyHero);
                v84 = flMaxc + v83->z;
                v85 = v81 + v83->x;
                angles.y = v82 + v83->y;
                angles.z = v84;
                angles.x = v85;
                v86 = CBaseEntity::GetAbsOrigin(MyHero);
                NDebugOverlay::Line(v86, &angles, 0xFFu, 0xFFu, 0xFFu, 1, flDuratione);
                v19 = v87;
              }
            }
          }
        }
        if ( dota_pet_dist_cone.m_pParent->m_Value.m_fValue <= (acosf(v19) * 57.295776) )
        {
LABEL_35:
          v36 = LODWORD(flTgt);
          v37 = LODWORD(vecFleeDir.x);
          *v37.m128i_i32 = vecFleeDir.x * flTgt;
          v38 = COERCE_FLOAT(_mm_cvtsi128_si32(v37));
          *v36.m128i_i32 = flTgt * vecFleeDir.y;
          v39 = COERCE_FLOAT(_mm_cvtsi128_si32(v36));
          z_low = LODWORD(vecFleeDir.z);
          *z_low.m128i_i32 = vecFleeDir.z * flTgt;
          v41 = COERCE_FLOAT(_mm_cvtsi128_si32(z_low));
          v42 = CBaseEntity::GetAbsOrigin(MyHero);
          v43 = v39 + v42->y;
          v44 = v38 + v42->x;
          this->m_vecFleeCurrentTarget.z = v41 + v42->z;
          this->m_vecFleeCurrentTarget.y = v43;
          v31 = this->m_CombatRepositionTimer.m_timestamp.m_Value == -1.0;
          this->m_vecFleeCurrentTarget.x = v44;
          if ( v31 )
            return;
        }
        else
        {
          v20 = this->m_CombatRepositionTimer.m_timestamp.m_Value;
          if ( v20 <= 0.0 )
            goto LABEL_17;
          if ( CountdownTimer::Now(&this->m_CombatRepositionTimer) < this->m_CombatRepositionTimer.m_timestamp.m_Value )
          {
            v20 = this->m_CombatRepositionTimer.m_timestamp.m_Value;
LABEL_17:
            if ( v20 <= 0.0 )
            {
              v21 = RandomFloat(
                      dota_pet_reposition_mintime.m_pParent->m_Value.m_fValue,
                      dota_pet_reposition_maxtime.m_pParent->m_Value.m_fValue);
              CountdownTimer::Start(&this->m_CombatRepositionTimer, v21, v22);
            }
            return;
          }
          v53 = LODWORD(vecFleeDir.x);
          *v53.m128i_i32 = vecFleeDir.x * flTgt;
          v54 = COERCE_FLOAT(_mm_cvtsi128_si32(v53));
          flMaxa = flTgt * vecFleeDir.y;
          v55 = LODWORD(vecFleeDir.z);
          *v55.m128i_i32 = vecFleeDir.z * flTgt;
          v56 = COERCE_FLOAT(_mm_cvtsi128_si32(v55));
          v57 = CBaseEntity::GetAbsOrigin(MyHero);
          v58 = flMaxa + v57->y;
          v59 = v54 + v57->x;
          this->m_vecFleeCurrentTarget.z = v56 + v57->z;
          this->m_vecFleeCurrentTarget.y = v58;
          this->m_vecFleeCurrentTarget.x = v59;
          if ( this->m_CombatRepositionTimer.m_timestamp.m_Value == -1.0 )
            return;
        }
        (*(this->m_CombatRepositionTimer._vptr_CountdownTimer + 2))(
          &this->m_CombatRepositionTimer,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        this->m_CombatRepositionTimer.m_timestamp.m_Value = -1.0;
        return;
      }
    }
    v27 = this->m_vecOldFleeDirection.x;
    vecFleeDir.y = this->m_vecOldFleeDirection.y;
    v28 = this->m_vecOldFleeDirection.z;
    vecFleeDir.x = v27;
    vecFleeDir.z = v28;
    v29 = vec3_origin.x;
    goto LABEL_26;
  }
  *&v30 = LODWORD(vec3_origin.z);
  v31 = *&v30 == vecFleeDir.z;
LABEL_29:
  if ( !v31 )
    goto LABEL_4;
  if ( this->m_CombatRepositionTimer.m_timestamp.m_Value == -1.0 )
  {
    v32 = *&v30;
  }
  else
  {
    (*(this->m_CombatRepositionTimer._vptr_CountdownTimer + 2))(
      &this->m_CombatRepositionTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v30,
      v23,
      -1.0);
    *&v23 = vec3_origin.y;
    this->m_CombatRepositionTimer.m_timestamp.m_Value = -1.0;
    v32 = vec3_origin.z;
  }
  v33 = vec3_origin.x;
  this->m_vecFleeCurrentTarget.y = *&v23;
  this->m_vecFleeCurrentTarget.x = v33;
  this->m_vecFleeCurrentTarget.z = v32;
  if ( v5 )
    v34 = -RandomInt(100, 150);
  else
    v34 = RandomInt(100, 150);
  this->m_iForwardOffset = v34;
  v35 = RandomInt(100, 150);
  this->m_iRightOffset = v35 * (RandomInt(0, 1) == 0 ? 1 : -1);
}


// CDOTABehaviorPet::StartEmote  (line 880, @0x000000000287a460, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetFloat, GetSerialNumber, Invalidate, InvalidatePath, MarkPVSInformationDirty, NetworkStateChanged, RemoveEffects, Set, ShouldSetAnimation, Start, operator=, operator=<float>
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CDOTABody::StartAnimation, CDOTALocomotor::StopMovement, RandomFloat, CountdownTimer::Now, CBaseEntity::DispatchUpdateTransmitState, CDOTA_BaseNPC::ShowAmbientParticles
// callers: CDOTABehaviorPet::StartEmote, CDOTABehaviorPet::Update_CheckForLevelup, CDOTABehaviorPet::Update_CheckForEmoteOpportunities, CDOTABehaviorPet::Vanish, CDOTABehaviorPet::Update_PerformCoopTeleport, CDOTABehaviorPet::Update_CheckForCoopOpportunities, CDOTABehaviorPet::Reappear, CDOTABehaviorPet::Update_CheckForReturnToBase
void __fastcall CDOTABehaviorPet::StartEmote(
        CDOTABehaviorPet *const this,
        CDOTA_BaseNPC *me,
        unsigned int actEmote,
        CDOTA_BaseNPC *pTarget,
        bool bForce)
{
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  CDOTABody *v11; // rax
  CDOTALocomotor *v12; // rax
  double v13; // xmm0_8
  double v14; // xmm1_8
  float v15; // [rsp+8h] [rbp-28h]
  float v16; // [rsp+Ch] [rbp-24h]

  if ( this->m_bIsEmoting && this->m_nEmoteActivity == 1685 && this->m_bHasVanished && actEmote != 1685 )
    this->m_bHasVanished = 0;
  this->m_bIsEmoting = 1;
  if ( pTarget != 0 && (m_pEntity = pTarget->m_pEntity) != 0 )
  {
    v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v10 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hEmoteTarget.m_Index) = v10 | this->m_hEmoteTarget.m_Index & 0x8000;
    this->m_hEmoteTarget.m_Index = (v9 << 15) | this->m_hEmoteTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hEmoteTarget.m_Index = -1;
  }
  this->m_nEmoteActivity = actEmote;
  this->m_MoveTo.m_bSetAnimation = 0;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
  v11 = (*(me->_vptr_IHandleEntity + 377))(me);
  CDOTABody::StartAnimation(v11, actEmote, 1, 1.0);
  v12 = (*(me->_vptr_IHandleEntity + 376))(me);
  CDOTALocomotor::StopMovement(v12, 0);
  if ( actEmote == 1534 )
  {
    (*(me->_vptr_IHandleEntity + 188))(me, me->m_fEffects.m_Value & 0xFFFFFFDF);
    me->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    CBaseEntity::DispatchUpdateTransmitState(me);
    CDOTA_BaseNPC::ShowAmbientParticles(me);
    this->m_bHasVanished = 0;
  }
  v16 = RandomFloat(
          dota_pet_emote_mintime.m_pParent->m_Value.m_fValue,
          dota_pet_emote_maxtime.m_pParent->m_Value.m_fValue);
  *&v13 = CountdownTimer::Now(&this->m_EmoteTimer) + v16;
  if ( *&v13 != this->m_EmoteTimer.m_timestamp.m_Value )
  {
    v15 = *&v13;
    (*(this->m_EmoteTimer._vptr_CountdownTimer + 2))(&this->m_EmoteTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v13 = LODWORD(v15);
    this->m_EmoteTimer.m_timestamp.m_Value = v15;
  }
  if ( v16 != this->m_EmoteTimer.m_duration.m_Value )
  {
    (*(this->m_EmoteTimer._vptr_CountdownTimer + 2))(&this->m_EmoteTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v13, v14, v16);
    this->m_EmoteTimer.m_duration.m_Value = v16;
  }
}


// CDOTABehaviorPet::StartEmote  (line 880, @0x000000000287a6b0, libserver.so)  // inlines: IsElapsed
// calls: CountdownTimer::Now, CDOTABehaviorPet::StartEmote
// callers: CDOTABehaviorPet::Update_CheckForEmoteOpportunities
void __fastcall CDOTABehaviorPet::StartEmote(
        CDOTABehaviorPet *const this,
        CDOTA_BaseNPC *me,
        Activity actEmote,
        CDOTA_BaseNPC *pTarget,
        bool bForce)
{
  float v6; // xmm0_4
  float m_Value; // xmm1_4
  CDOTA_BaseNPC *pTargeta; // [rsp+8h] [rbp-28h]
  Activity actEmotea; // [rsp+14h] [rbp-1Ch]
  CDOTA_BaseNPC *mea; // [rsp+18h] [rbp-18h]

  if ( bForce )
    goto LABEL_6;
  if ( !this->m_bIsEmoting )
  {
    pTargeta = pTarget;
    actEmotea = actEmote;
    mea = me;
    v6 = CountdownTimer::Now(&this->m_EmoteTimer);
    m_Value = this->m_EmoteTimer.m_timestamp.m_Value;
    me = mea;
    actEmote = actEmotea;
    pTarget = pTargeta;
    if ( v6 >= m_Value || m_Value <= 0.0 )
LABEL_6:
      CDOTABehaviorPet::StartEmote(this, me, actEmote, pTarget, bForce);
  }
}


// CDOTABehaviorPet::OnAnimationActivityComplete  (line 922, @0x000000000287a3b0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
// calls: CDOTABody::StartAnimation, CDOTABehaviorPet::FinishEmote
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorPet::OnAnimationActivityComplete(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorPet *const this,
        CDOTA_BaseNPC *me,
        int activity)
{
  CDOTABody *v7; // rax
  int activitya; // [rsp+Ch] [rbp-14h]

  if ( this->m_bIsEmoting )
  {
    activitya = activity;
    CDOTABehaviorPet::FinishEmote(this, me);
    activity = activitya;
  }
  else if ( this->m_bReturnToBase && activity == 1689 )
  {
    v7 = (*(me->_vptr_IHandleEntity + 377))(me);
    CDOTABody::StartAnimation(v7, 0x699u, 1, 1.0);
    goto LABEL_5;
  }
  if ( activity == 1694 )
    this->m_nCoopTeleportState = PetCoopStates_t::COOP_IGNORE;
LABEL_5:
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// CDOTABehaviorPet::FinishEmote  (line 948, @0x000000000287a130, libserver.so)  // inlines: ShouldSetAnimation
// calls: CDOTABody::StartAnimation, CBaseEntity::AddEffects, CDOTA_BaseNPC::HideAmbientParticles
// callers: CDOTABehaviorPet::UpdateEmoting, CDOTABehaviorPet::OnAnimationActivityComplete
void __fastcall CDOTABehaviorPet::FinishEmote(CDOTABehaviorPet *const this, CDOTA_BaseNPC *me)
{
  CDOTABody *v4; // rax

  this->m_bIsEmoting = 0;
  this->m_MoveTo.m_bSetAnimation = 1;
  v4 = (*(me->_vptr_IHandleEntity + 377))(me);
  CDOTABody::StartAnimation(v4, 0x5DCu, 0, 1.0);
  if ( this->m_nEmoteActivity == 1685 )
  {
    CBaseEntity::AddEffects(me, 32);
    CDOTA_BaseNPC::HideAmbientParticles(me);
  }
}


// CDOTABehaviorPet::GetTargetPosition  (line 965, @0x0000000002878b30, libserver.so)  // inlines: FastSqrt, Length2D, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator!=, operator*, operator+, operator-
// calls: CDOTABehaviorPet::GetMyHero, CBaseEntity::GetAbsAngles, AngleVectors, CBaseEntity::GetAbsOrigin
// callers: CDOTABehaviorPet::GetTargetPosition
Vector __fastcall CDOTABehaviorPet::GetTargetPosition(CDOTABehaviorPet *const this, CDOTA_BaseNPC *me)
{
  CDOTA_BaseNPC_Hero *MyHero; // r12
  const QAngle *AbsAngles; // rax
  float m_iForwardOffset; // xmm1_4
  const Vector *v9; // rax
  float v10; // xmm5_4
  float m_iRightOffset; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  const Vector *v14; // rax
  const Vector *v15; // rax
  float v16; // xmm0_4
  float v17; // xmm2_4
  Vector *p_vRightOption; // rax
  __int64 v19; // rdx
  vec_t z; // eax
  __m128i x_low; // xmm5
  __m128i y_low; // xmm6
  float v23; // ebx
  float v24; // r13d
  const Vector *AbsOrigin; // rax
  float v26; // xmm0_4
  float v27; // xmm2_4
  float fLeftDist; // [rsp+0h] [rbp-B0h]
  vec_t fLeftDista; // [rsp+0h] [rbp-B0h]
  float fLeftDistb; // [rsp+0h] [rbp-B0h]
  vec_t x; // [rsp+14h] [rbp-9Ch]
  float v32; // [rsp+18h] [rbp-98h]
  vec_t y; // [rsp+18h] [rbp-98h]
  float v34; // [rsp+1Ch] [rbp-94h]
  vec_t v35; // [rsp+1Ch] [rbp-94h]
  float v36; // [rsp+1Ch] [rbp-94h]
  Vector vForward; // [rsp+30h] [rbp-80h] BYREF
  Vector vRight; // [rsp+40h] [rbp-70h] BYREF
  Vector vUp; // [rsp+50h] [rbp-60h] BYREF
  Vector vLeftOption; // [rsp+60h] [rbp-50h] BYREF
  Vector vRightOption; // [rsp+70h] [rbp-40h] BYREF
  __int64 v42; // [rsp+80h] [rbp-30h]
  float v43; // [rsp+88h] [rbp-28h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  MyHero = CDOTABehaviorPet::GetMyHero(this, 0);
  AbsAngles = CBaseEntity::GetAbsAngles(MyHero);
  AngleVectors(AbsAngles, &vForward, &vRight, &vUp);
  if ( this->m_nCoopTeleportState != PetCoopStates_t::COOP_IGNORE )
  {
    x_low = LODWORD(vForward.x);
    y_low = LODWORD(vForward.y);
    *x_low.m128i_i32 = vForward.x * 128.0;
    *y_low.m128i_i32 = vForward.y * 128.0;
    v23 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
    v24 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
    v36 = 128.0 * vForward.z;
    AbsOrigin = CBaseEntity::GetAbsOrigin(MyHero);
    v26 = v36 + AbsOrigin->z;
    v27 = v23 + AbsOrigin->x;
    *(&v42 + 1) = v24 + AbsOrigin->y;
    v43 = v26;
    *&v42 = v27;
  }
  else if ( vec3_origin.x == this->m_vecFleeCurrentTarget.x
         && vec3_origin.y == this->m_vecFleeCurrentTarget.y
         && vec3_origin.z == this->m_vecFleeCurrentTarget.z )
  {
    m_iForwardOffset = this->m_iForwardOffset;
    v32 = vForward.x * m_iForwardOffset;
    fLeftDist = vForward.y * m_iForwardOffset;
    v34 = m_iForwardOffset * vForward.z;
    v9 = CBaseEntity::GetAbsOrigin(MyHero);
    v10 = v9->z + v34;
    m_iRightOffset = this->m_iRightOffset;
    v12 = v32 + v9->x;
    v13 = fLeftDist + v9->y;
    vLeftOption.x = v12 - (vRight.x * m_iRightOffset);
    fLeftDista = vLeftOption.x;
    vRightOption.x = v12 + (vRight.x * m_iRightOffset);
    x = vRightOption.x;
    vRightOption.y = v13 + (vRight.y * m_iRightOffset);
    y = vRightOption.y;
    vLeftOption.y = v13 - (vRight.y * m_iRightOffset);
    v35 = vLeftOption.y;
    vLeftOption.z = v10 - (vRight.z * m_iRightOffset);
    vRightOption.z = (vRight.z * m_iRightOffset) + v10;
    v14 = CBaseEntity::GetAbsOrigin(me);
    fLeftDistb = fsqrt(((fLeftDista - v14->x) * (fLeftDista - v14->x)) + ((v35 - v14->y) * (v35 - v14->y)));
    v15 = CBaseEntity::GetAbsOrigin(me);
    v16 = x - v15->x;
    v17 = y - v15->y;
    p_vRightOption = &vRightOption;
    if ( fsqrt((v16 * v16) + (v17 * v17)) > fLeftDistb )
      p_vRightOption = &vLeftOption;
    v19 = *&p_vRightOption->x;
    z = p_vRightOption->z;
    v42 = v19;
    v43 = z;
  }
  else
  {
    v42 = *&this->m_vecFleeCurrentTarget.x;
    v43 = this->m_vecFleeCurrentTarget.z;
  }
  *&result.x = v42;
  result.z = v43;
  return result;
}


// CDOTABehaviorPet::GetTargetPosition  (line 965, @0x0000000002878e00, libserver.so)
// calls: CDOTABehaviorPet::GetTargetPosition
Vector __fastcall CDOTABehaviorPet::GetTargetPosition(CDOTABehaviorPet *const this, CDOTA_BaseNPC *me)
{
  Vector TargetPosition; // 0:kr00_12.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( this->m_bReturnToBase )
  {
    *&result.x = *&this->m_vecHomeBasePosition.x;
    result.z = this->m_vecHomeBasePosition.z;
  }
  else
  {
    TargetPosition = CDOTABehaviorPet::GetTargetPosition(this, me);
    *&result.x = *&TargetPosition.x;
    result.z = TargetPosition.z;
  }
  return result;
}


// CDOTABehaviorPet::RecalculateThreat  (line 997, @0x00000000028802a0, libserver.so)  // inlines: Approach, CUtlMemory, CUtlVector, CUtlVectorBase, DotProduct, Get, GetAggroTarget, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetInt, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsElapsed, IsValid, Length2DSqr, LookupEntity, NetworkStateChanged, NormalizeInPlace, OutOfBounds, RAD2DEG, RemapValClamped, Reset, Set, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, WorldToGridPosX, WorldToGridPosY, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*, operator*, operator*=, operator+, operator+=, operator-, operator/=, operator=, operator=<float>, operator[], ~CUtlVector
// calls: CDOTABehaviorPet::GetMyHero, CDOTA_BaseNPC::GetRecentIncomingDPS, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::HasInvisibilityBuff, UTIL_VarArgs, NDebugOverlay::Text, VectorNormalize, acosf, CDOTABehaviorPet::Vanish, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, Msg (20 total)
// callers: CDOTABehaviorPet::Reappear, CDOTABehaviorPet::Update
// strings: "\t  -> PANICKING\n", "   PREVIOUS THREAT LEVEL: %.2f -> VANISHING\n", "modifier_teleporting", "   DPS: %.2f\n", "RECALCULATING THREAT\n", "\tTHREAT NOW %.2f (TGT %.2f)\n" (10 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTABehaviorPet::RecalculateThreat(CDOTABehaviorPet *const this, CDOTA_BaseNPC *me)
{
  CDOTA_BaseNPC_Hero *MyHero; // r14
  float RecentIncomingDPS; // xmm0_4
  float v5; // xmm1_4
  float m_fValue; // ebx
  const Vector *AbsOrigin; // rax
  int m_Size; // r15d
  float v9; // xmm6_4
  __int64 v10; // rbx
  CHandle<CBaseEntity> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_iUnitType; // eax
  bool HasInvisibilityBuff; // al
  const Vector *v19; // r15
  const Vector *v20; // rax
  float v21; // xmm0_4
  __m128 m_fValue_low; // xmm2
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  char *v25; // r15
  const Vector *v26; // rax
  const Vector *v27; // r15
  const Vector *v28; // rax
  vec_t v29; // xmm1_4
  vec_t v30; // xmm0_4
  const Vector *v31; // r15
  const Vector *v32; // rax
  vec_t v33; // xmm0_4
  vec_t v34; // xmm2_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v38; // eax
  __int16 v39; // cx
  float v40; // xmm1_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  ConVar *m_pParent; // rax
  double v44; // xmm1_8
  float m_flThreatLevel; // xmm0_4
  float v46; // xmm2_4
  float v47; // xmm0_4
  bool v48; // bl
  __m128i v49; // xmm0
  __m128i v50; // xmm4
  float v51; // ebx
  double v52; // rbx
  float v53; // r12d
  char *v54; // rbx
  const Vector *v55; // rax
  __m128i v56; // xmm0
  __m128i y_low; // xmm7
  float v58; // ebx
  float v59; // r12d
  float v60; // r15d
  const Vector *v61; // rax
  vec_t v62; // xmm0_4
  vec_t v63; // xmm4_4
  const Vector *v64; // rax
  CEntityInstance *v65; // rax
  __m128 v66; // xmm1
  __m128 v67; // xmm0
  __m128 v68; // xmm2
  float v69; // xmm1_4
  float v70; // xmm0_4
  float v71; // xmm2_4
  float v72; // xmm0_4
  float v73; // xmm0_4
  const Vector *v74; // rax
  int v75; // r12d
  const Vector *v76; // rax
  float v77; // xmm0_4
  int v78; // edx
  float v79; // [rsp+18h] [rbp-98h]
  float flNearestEnemyHeroDist; // [rsp+1Ch] [rbp-94h]
  float flDistToHeroa; // [rsp+30h] [rbp-80h]
  float flDistToHero; // [rsp+30h] [rbp-80h]
  float flDistMaxSqr; // [rsp+34h] [rbp-7Ch]
  float flDistMaxSqra; // [rsp+34h] [rbp-7Ch]
  float flTgtThreatLevel; // [rsp+38h] [rbp-78h]
  float flDistToEnemy; // [rsp+3Ch] [rbp-74h]
  float flDistToEnemya; // [rsp+3Ch] [rbp-74h]
  float flDistToEnemyb; // [rsp+3Ch] [rbp-74h]
  float flDistToEnemyc; // [rsp+3Ch] [rbp-74h]
  Vector vecToEnemy; // [rsp+40h] [rbp-70h] BYREF
  Vector vecToHero; // [rsp+50h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+60h] [rbp-50h] BYREF

  this->m_hNearestEnemyHero.m_Index = -1;
  this->m_vecFleeDirection = vec3_origin;
  MyHero = CDOTABehaviorPet::GetMyHero(this, 0);
  if ( MyHero == 0 )
    return;
  if ( dota_pet_debug.m_pParent->m_Value.m_nValue != 0 )
    Msg("RECALCULATING THREAT\n");
  RecentIncomingDPS = CDOTA_BaseNPC::GetRecentIncomingDPS(MyHero, 0);
  v5 = RecentIncomingDPS;
  if ( dota_pet_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    flDistToEnemyc = RecentIncomingDPS;
    Msg("   DPS: %.2f\n", RecentIncomingDPS);
    v5 = flDistToEnemyc;
  }
  if ( v5 > dota_pet_dmg_threshold_panic.m_pParent->m_Value.m_fValue )
  {
    flTgtThreatLevel = 1.0;
    if ( dota_pet_debug.m_pParent->m_Value.m_nValue != 0 )
      Msg("\t  -> PANICKING\n");
  }
  else
  {
    flTgtThreatLevel = 0.0;
  }
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  m_fValue = dota_pet_herodist_radius.m_pParent->m_Value.m_fValue;
  AbsOrigin = CBaseEntity::GetAbsOrigin(MyHero);
  FindUnitsInRadius(MyHero->m_iTeamNum.m_Value, AbsOrigin, MyHero, m_fValue, &entities, 2, 7, 128, 0, 0);
  m_Size = entities.m_Size;
  v9 = dota_pet_herodist_radius.m_pParent->m_Value.m_fValue;
  flDistMaxSqr = v9 * v9;
  if ( entities.m_Size <= 0 )
  {
LABEL_35:
    if ( this->m_bHasVanished || m_Size == 0 )
    {
      m_pParent = dota_pet_debug.m_pParent;
    }
    else
    {
      this->m_vecFleeDirection.z = 0.0;
      v40 = 1.0 / m_Size;
      v41 = this->m_vecFleeDirection.y * v40;
      v42 = v40 * this->m_vecFleeDirection.x;
      this->m_vecFleeDirection.y = -v41;
      this->m_vecFleeDirection.x = -v42;
      VectorNormalize(&this->m_vecFleeDirection);
      m_pParent = dota_pet_debug.m_pParent;
      if ( dota_pet_debug.m_pParent->m_Value.m_nValue != 0 )
      {
        v56 = 0x43800000u;
        y_low = LODWORD(this->m_vecFleeDirection.y);
        *y_low.m128i_i32 = *y_low.m128i_i32 * 256.0;
        *v56.m128i_i32 = 256.0 * this->m_vecFleeDirection.z;
        v58 = dota_pet_threat_time.m_pParent->m_Value.m_fValue;
        flDistMaxSqra = this->m_vecFleeDirection.x * 256.0;
        v59 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
        v60 = COERCE_FLOAT(_mm_cvtsi128_si32(v56));
        v61 = CBaseEntity::GetAbsOrigin(MyHero);
        v62 = v60 + v61->z;
        v63 = flDistMaxSqra + v61->x;
        vecToHero.y = v59 + v61->y;
        vecToHero.z = v62;
        vecToHero.x = v63;
        v64 = CBaseEntity::GetAbsOrigin(MyHero);
        NDebugOverlay::HorzArrow(v64, &vecToHero, 32.0, 0, 0xFFu, 0, 16, v58, 1);
        m_pParent = dota_pet_debug.m_pParent;
      }
      this->m_vecOldFleeDirection.x = this->m_vecFleeDirection.x;
      this->m_vecOldFleeDirection.y = this->m_vecFleeDirection.y;
      this->m_vecOldFleeDirection.z = this->m_vecFleeDirection.z;
    }
    *&v44 = LODWORD(dota_pet_aatest_threat.m_pParent->m_Value.m_fValue);
    if ( *&v44 == -1.0 )
      *&v44 = LODWORD(flTgtThreatLevel);
    if ( *&v44 <= 1.0 )
    {
      if ( *&v44 < 0.0 )
      {
        m_flThreatLevel = this->m_flThreatLevel;
        LODWORD(v44) = 0;
        goto LABEL_56;
      }
      if ( *&v44 < 1.0 )
      {
        m_flThreatLevel = this->m_flThreatLevel;
        goto LABEL_56;
      }
    }
    else
    {
      *&v44 = 1065353216;
    }
    m_flThreatLevel = this->m_flThreatLevel;
    if ( dota_pet_priorthreat_to_vanish.m_pParent->m_Value.m_fValue >= m_flThreatLevel )
    {
      if ( m_pParent->m_Value.m_nValue != 0 )
        Msg("   PREVIOUS THREAT LEVEL: %.2f -> VANISHING\n", m_flThreatLevel, v44);
      goto LABEL_47;
    }
LABEL_56:
    if ( *&v44 <= m_flThreatLevel )
      v46 = dota_pet_decay_rate.m_pParent->m_Value.m_fValue;
    else
      v46 = dota_pet_threat_rate.m_pParent->m_Value.m_fValue;
    if ( (*&v44 - m_flThreatLevel) <= v46 )
    {
      if ( -v46 > (*&v44 - m_flThreatLevel) )
      {
        v47 = m_flThreatLevel - v46;
        this->m_flThreatLevel = v47;
        if ( m_pParent->m_Value.m_nValue == 0 )
          goto LABEL_61;
        goto LABEL_70;
      }
      v47 = *&v44;
    }
    else
    {
      v47 = m_flThreatLevel + v46;
    }
    this->m_flThreatLevel = v47;
    if ( m_pParent->m_Value.m_nValue != 0 )
    {
LABEL_70:
      v52 = *&v44;
      Msg("\tTHREAT NOW %.2f (TGT %.2f)\n", v47, *&v44);
      if ( dota_pet_debug.m_pParent->m_Value.m_nValue != 0 )
      {
        v53 = dota_pet_threat_time.m_pParent->m_Value.m_fValue;
        v54 = UTIL_VarArgs("%.2f -> %.2f", this->m_flThreatLevel, v52);
        v55 = CBaseEntity::GetAbsOrigin(me);
        NDebugOverlay::Text(v55, v54, 1, v53);
      }
    }
LABEL_61:
    if ( !this->m_bHasVanished )
      goto LABEL_48;
    if ( CDOTA_BaseNPC::HasInvisibilityBuff(MyHero)
      || CDOTA_BaseNPC::FindModifierByName(MyHero, "modifier_teleporting", 0) != 0
      || (v74 = CBaseEntity::GetAbsOrigin(MyHero),
          v75 = floorf(((v74->x - g_GridNav.m_flOffsetX) + (0.5 * g_GridNav.m_flEdgeSize)) / g_GridNav.m_flEdgeSize),
          v76 = CBaseEntity::GetAbsOrigin(MyHero),
          v77 = floorf(((v76->y - g_GridNav.m_flOffsetY) + (0.5 * g_GridNav.m_flEdgeSize)) / g_GridNav.m_flEdgeSize),
          v75 < g_GridNav.m_nMinX)
      || v75 > g_GridNav.m_nMaxX
      || (v78 = v77, v77 < g_GridNav.m_nMinY)
      || v78 > g_GridNav.m_nMaxY )
    {
      v48 = 0;
      if ( this->m_VanishOnThreatTimer.m_timestamp.m_Value <= 0.0 )
        goto LABEL_48;
    }
    else
    {
      v48 = !CGridNav::IsEnclosed(&g_GridNav, v75, v78, 0);
      if ( this->m_VanishOnThreatTimer.m_timestamp.m_Value <= 0.0 )
      {
        if ( !v48 )
          goto LABEL_48;
        if ( dota_pet_debug.m_pParent->m_Value.m_nValue != 0 )
          Msg("\tRETURNING DUE TO BEING ABLE TO RETURN.\n");
        goto LABEL_79;
      }
    }
    if ( this->m_flThreatLevel >= dota_pet_return_threshold.m_pParent->m_Value.m_fValue )
    {
      *v49.m128i_i32 = CountdownTimer::Now(&this->m_VanishOnThreatTimer);
      v50 = v49;
      *v50.m128i_i32 = *v49.m128i_i32 + this->m_VanishOnThreatTimer.m_duration.m_Value;
      v51 = COERCE_FLOAT(_mm_cvtsi128_si32(v50));
      if ( *v50.m128i_i32 != this->m_VanishOnThreatTimer.m_timestamp.m_Value )
      {
        (*(this->m_VanishOnThreatTimer._vptr_CountdownTimer + 2))(
          &this->m_VanishOnThreatTimer,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        this->m_VanishOnThreatTimer.m_timestamp.m_Value = v51;
      }
      goto LABEL_48;
    }
    if ( CountdownTimer::Now(&this->m_VanishOnThreatTimer) < this->m_VanishOnThreatTimer.m_timestamp.m_Value || !v48 )
      goto LABEL_48;
    if ( dota_pet_debug.m_pParent->m_Value.m_nValue != 0 )
      Msg("\tRETURNING DUE TO TIMER ELAPSED.\n");
LABEL_79:
    CDOTABehaviorPet::Reappear(this, me);
    goto LABEL_48;
  }
  flNearestEnemyHeroDist = v9 * v9;
  v10 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = &entities.m_Memory.m_pMemory[v10];
      m_Index = v11->m_Index;
      if ( v11->m_Index + 2 <= 1 )
        goto LABEL_10;
      v13 = v11->m_Index;
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F];
      if ( v14 == 0 )
        goto LABEL_10;
      v15 = &v14[v13 & 0x1FF];
      if ( v15 == 0 )
        goto LABEL_10;
      if ( m_Index != v15->m_EHandle.m_Index )
        goto LABEL_10;
      m_pInstance = v15->m_pInstance;
      if ( v15->m_pInstance == 0 )
        goto LABEL_10;
      if ( !m_pInstance->m_bIsDOTANPC )
        goto LABEL_10;
      m_iUnitType = m_pInstance->m_iUnitType;
      if ( (m_iUnitType & 0x10) != 0 && (m_iUnitType & 4) == 0 )
        goto LABEL_10;
      if ( m_pInstance->m_iTeamNum.m_Value == 4 )
      {
        v65 = CEntityHandle::operator CEntityInstance *(&m_pInstance->m_hAggroTarget);
        if ( v65 == 0 || BYTE3(v65[7]._vptr_IHandleEntity) == 0 )
          goto LABEL_10;
      }
      HasInvisibilityBuff = CDOTA_BaseNPC::HasInvisibilityBuff(m_pInstance);
      m_Size = entities.m_Size;
      if ( HasInvisibilityBuff )
        goto LABEL_10;
      v19 = CBaseEntity::GetAbsOrigin(MyHero);
      v20 = CBaseEntity::GetAbsOrigin(m_pInstance);
      v21 = ((v20->x - v19->x) * (v20->x - v19->x)) + ((v20->y - v19->y) * (v20->y - v19->y));
      if ( (m_pInstance->m_iUnitType & 1) != 0 )
      {
        flDistToEnemy = dota_pet_herodist_minthreat.m_pParent->m_Value.m_fValue;
        m_fValue_low = LODWORD(dota_pet_herodist_maxthreat.m_pParent->m_Value.m_fValue);
        if ( flDistMaxSqr == 4096.0 )
        {
          v23.m128_f32[0] = v21 - 4096.0;
          v24 = _mm_cmple_ss(0LL, v23);
          LODWORD(flDistToEnemya) = _mm_andnot_ps(v24, m_fValue_low).m128_u32[0]
                                  | LODWORD(flDistToEnemy) & v24.m128_i32[0];
        }
        else
        {
          v69 = 0.0;
          v70 = (v21 - 4096.0) / (flDistMaxSqr - 4096.0);
          if ( v70 >= 0.0 )
            v69 = fminf(1.0, v70);
          flDistToEnemya = m_fValue_low.m128_f32[0] + (v69 * (flDistToEnemy - m_fValue_low.m128_f32[0]));
        }
      }
      else
      {
        v66 = LODWORD(dota_pet_creepdist_maxthreat.m_pParent->m_Value.m_fValue);
        if ( flDistMaxSqr == 4096.0 )
        {
          v67.m128_f32[0] = v21 - 4096.0;
          v68 = _mm_cmple_ss(0LL, v67);
          LODWORD(flDistToEnemya) = _mm_andnot_ps(v68, v66).m128_u32[0]
                                  | LODWORD(dota_pet_creepdist_minthreat.m_pParent->m_Value.m_fValue) & v68.m128_i32[0];
        }
        else
        {
          v71 = 0.0;
          v72 = (v21 - 4096.0) / (flDistMaxSqr - 4096.0);
          if ( v72 >= 0.0 )
            v71 = fminf(1.0, v72);
          flDistToEnemya = v66.m128_f32[0]
                         + (v71 * (dota_pet_creepdist_minthreat.m_pParent->m_Value.m_fValue - v66.m128_f32[0]));
        }
      }
      if ( dota_pet_debug.m_pParent->m_Value.m_nValue != 0 )
      {
        flDistToHeroa = dota_pet_threat_time.m_pParent->m_Value.m_fValue;
        v25 = UTIL_VarArgs("%.2f", flDistToEnemya);
        v26 = CBaseEntity::GetAbsOrigin(m_pInstance);
        NDebugOverlay::Text(v26, v25, 1, flDistToHeroa);
      }
      flTgtThreatLevel = flTgtThreatLevel + flDistToEnemya;
      v27 = CBaseEntity::GetAbsOrigin(MyHero);
      v28 = CBaseEntity::GetAbsOrigin(m_pInstance);
      v29 = v28->y - v27->y;
      v30 = v28->z - v27->z;
      vecToEnemy.x = v28->x - v27->x;
      vecToEnemy.y = v29;
      vecToEnemy.z = v30;
      flDistToEnemyb = VectorNormalize(&vecToEnemy);
      this->m_vecFleeDirection.x = this->m_vecFleeDirection.x + vecToEnemy.x;
      this->m_vecFleeDirection.y = this->m_vecFleeDirection.y + vecToEnemy.y;
      this->m_vecFleeDirection.z = this->m_vecFleeDirection.z + vecToEnemy.z;
      VectorNormalize(&this->m_vecFleeDirection);
      if ( !this->m_bHasVanished && (m_pInstance->m_iUnitType & 1) != 0 )
        break;
LABEL_84:
      m_Size = entities.m_Size;
LABEL_10:
      if ( m_Size <= ++v10 )
        goto LABEL_35;
    }
    v31 = CBaseEntity::GetAbsOrigin(MyHero);
    v32 = CBaseEntity::GetAbsOrigin(me);
    v33 = v32->z - v31->z;
    v34 = v32->x - v31->x;
    vecToHero.y = v32->y - v31->y;
    vecToHero.z = v33;
    vecToHero.x = v34;
    flDistToHero = VectorNormalize(&vecToHero);
    v35 = ((vecToHero.x * vecToEnemy.x) + (vecToHero.y * vecToEnemy.y)) + (vecToHero.z * vecToEnemy.z);
    if ( flDistToHero < 100.0 )
      break;
    v79 = ((vecToHero.x * vecToEnemy.x) + (vecToHero.y * vecToEnemy.y)) + (vecToHero.z * vecToEnemy.z);
    v36 = acosf(v35);
    v35 = v79;
    if ( (v36 * 57.295776) < 35.0 && flDistToHero > (flDistToEnemyb + 150.0) )
      break;
    if ( flNearestEnemyHeroDist <= flDistToHero )
      goto LABEL_84;
    m_pEntity = m_pInstance->m_pEntity;
    if ( m_pEntity == 0 )
    {
      this->m_hNearestEnemyHero.m_Index = -1;
      flNearestEnemyHeroDist = flDistToHero;
      goto LABEL_84;
    }
    v38 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v39 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v39 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    m_Size = entities.m_Size;
    flNearestEnemyHeroDist = flDistToHero;
    LOWORD(this->m_hNearestEnemyHero.m_Index) = v39 | this->m_hNearestEnemyHero.m_Index & 0x8000;
    this->m_hNearestEnemyHero.m_Index = (v38 << 15) | this->m_hNearestEnemyHero.m_Index & 0x7FFF;
    if ( m_Size <= ++v10 )
      goto LABEL_35;
  }
  if ( dota_pet_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    v73 = acosf(v35);
    Msg("    ON WRONG SIDE TO FLEE -> VANISHING (%.2f) \n", (v73 * 57.295776));
  }
LABEL_47:
  this->m_flThreatLevel = 1.0;
  CDOTABehaviorPet::Vanish(this, me);
LABEL_48:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTABehaviorPet::Vanish  (line 1162, @0x000000000287ab20, libserver.so)  // inlines: GetFloat, Invalidate, NetworkStateChanged, Set, Start, StartEmote, operator=<float>
// calls: CDOTA_BaseNPC::ClearQueuedOrders, CDOTA_BaseNPC::ClearPseudoQueuedOrder, CDOTABehaviorPet::StartEmote, CountdownTimer::Now
// callers: CDOTABehaviorPet::Update_PerformCoopTeleport, CDOTABehaviorPet::RecalculateThreat, CDOTABehaviorPet::Update_CheckForReturnToBase, CDOTABehaviorPet::Update
void __fastcall CDOTABehaviorPet::Vanish(CDOTABehaviorPet *const this, CDOTA_BaseNPC *me)
{
  __int64 v4; // rax
  bool v5; // r8
  double v6; // xmm0_8
  double v7; // xmm1_8
  float v8; // [rsp+8h] [rbp-18h]
  float m_fValue; // [rsp+Ch] [rbp-14h]

  if ( !this->m_bHasVanished )
  {
    CDOTA_BaseNPC::ClearQueuedOrders(me);
    CDOTA_BaseNPC::ClearPseudoQueuedOrder(me);
    v4 = (*(me->_vptr_IHandleEntity + 376))(me);
    (*(*v4 + 616LL))(v4);
    this->m_bHasVanished = 1;
    CDOTABehaviorPet::StartEmote(this, me, 0x695u, 0, v5);
    if ( this->m_flThreatLevel < 1.0 )
    {
      if ( this->m_VanishOnThreatTimer.m_timestamp.m_Value != -1.0 )
      {
        (*(this->m_VanishOnThreatTimer._vptr_CountdownTimer + 2))(
          &this->m_VanishOnThreatTimer,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL,
          -1.0);
        this->m_VanishOnThreatTimer.m_timestamp.m_Value = -1.0;
      }
    }
    else
    {
      m_fValue = dota_pet_return_threshold_time.m_pParent->m_Value.m_fValue;
      *&v6 = CountdownTimer::Now(&this->m_VanishOnThreatTimer) + m_fValue;
      if ( *&v6 != this->m_VanishOnThreatTimer.m_timestamp.m_Value )
      {
        v8 = *&v6;
        (*(this->m_VanishOnThreatTimer._vptr_CountdownTimer + 2))(
          &this->m_VanishOnThreatTimer,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        *&v6 = LODWORD(v8);
        this->m_VanishOnThreatTimer.m_timestamp.m_Value = v8;
      }
      if ( m_fValue != this->m_VanishOnThreatTimer.m_duration.m_Value )
      {
        (*(this->m_VanishOnThreatTimer._vptr_CountdownTimer + 2))(
          &this->m_VanishOnThreatTimer,
          8,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL,
          v6,
          v7,
          m_fValue);
        this->m_VanishOnThreatTimer.m_duration.m_Value = m_fValue;
      }
    }
  }
}


// CDOTABehaviorPet::Reappear  (line 1189, @0x0000000002880f80, libserver.so)  // inlines: OutOfBounds, StartEmote, WorldToGridPosX, WorldToGridPosY
// calls: CDOTABehaviorPet::RecalculateTargetPosition, FindClearSpaceForUnit, CDOTABehaviorPet::RecalculateThreat, CBaseEntity::GetAbsOrigin, floorf, CBaseEntity::AddEffects, CGridNav::IsEnclosed, CDOTABehaviorPet::StartEmote
// callers: CDOTABehaviorPet::Reappear, CDOTABehaviorPet::Update_CheckForReturnToBase
bool __fastcall CDOTABehaviorPet::Reappear(CDOTABehaviorPet *const this, CDOTA_BaseNPC *me)
{
  const Vector *AbsOrigin; // rax
  int v5; // r14d
  const Vector *v6; // rax
  float v7; // xmm0_4
  int v9; // edx
  bool v10; // r8
  Vector v11; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v12; // 0:xmm0_8.8,8:xmm1_4.4

  this->m_bHasVanished = 0;
  CDOTABehaviorPet::RecalculateTargetPosition(this, me, 1);
  *&v11.x = (*(this->_vptr_INextBotEventResponder + 130))(this, me);
  FindClearSpaceForUnit(me, v11, 1);
  CDOTABehaviorPet::RecalculateThreat(this, me);
  CDOTABehaviorPet::RecalculateTargetPosition(this, me, 1);
  *&v12.x = (*(this->_vptr_INextBotEventResponder + 130))(this, me);
  FindClearSpaceForUnit(me, v12, 1);
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  v5 = floorf(((AbsOrigin->x - g_GridNav.m_flOffsetX) + (0.5 * g_GridNav.m_flEdgeSize)) / g_GridNav.m_flEdgeSize);
  v6 = CBaseEntity::GetAbsOrigin(me);
  v7 = floorf(((v6->y - g_GridNav.m_flOffsetY) + (0.5 * g_GridNav.m_flEdgeSize)) / g_GridNav.m_flEdgeSize);
  if ( v5 < g_GridNav.m_nMinX
    || v5 > g_GridNav.m_nMaxX
    || (v9 = v7, v7 < g_GridNav.m_nMinY)
    || v9 > g_GridNav.m_nMaxY
    || CGridNav::IsEnclosed(&g_GridNav, v5, v9, 0) )
  {
    this->m_bHasVanished = 1;
    CBaseEntity::AddEffects(me, 32);
    return 0;
  }
  else
  {
    CDOTABehaviorPet::StartEmote(this, me, 0x5FEu, 0, v10);
    return 1;
  }
}


// CDOTABehaviorPet::Reappear  (line 1189, @0x0000000002881100, libserver.so)
// calls: CDOTABehaviorPet::Reappear
// callers: CDOTABehaviorPet::RecalculateThreat
bool __fastcall CDOTABehaviorPet::Reappear(CDOTABehaviorPet *const this, CDOTA_BaseNPC *me)
{
  return this->m_bHasVanished && CDOTABehaviorPet::Reappear(this, me);
}


