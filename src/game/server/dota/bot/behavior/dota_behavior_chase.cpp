
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorChase::OnStart  (line 10, @0x0000000002876d20, libserver.so)  // inlines: ActionResult, ChangeTo, Continue, Get, GetChaseEntity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IActionResult, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, Start, operator CEntityInstance*, operator=, operator=<float>, operator==<CBaseEntity>
// calls: operator new, CDOTABehaviorIdle::CDOTABehaviorIdle, operator delete, _Unwind_Resume, CDOTABehaviorChase::RecalculateOffset, CDOTABehaviorMoveTo::OnStart, CountdownTimer::Now
// strings: "No initial goal entity"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorChase::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorChase *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v7; // rdi
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  CDOTABehaviorIdle *v10; // rbx
  CEntityIdentity *m_pEntity; // rcx
  int v13; // eax
  __int16 v14; // si
  uint32 v15; // ecx
  CEntityIdentity *v16; // rax
  CEntityIdentity *v17; // rax
  float m_flChaseDistance; // xmm0_4
  float v19; // xmm0_4
  float v20; // [rsp+Ch] [rbp-24h]

  m_Index = me->m_hChaseEntity.m_Index;
  v7 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 <= 1
    || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(me->m_hChaseEntity.m_Index) >> 9) & 0x3F]) == 0
    || (v9 = &v8[me->m_hChaseEntity.m_Index & 0x1FF]) == 0
    || m_Index != v9->m_EHandle.m_Index
    || v9->m_pInstance == 0
    || (m_pEntity = v9->m_pInstance->m_pEntity) == 0 )
  {
    this->m_hChaseEntity.m_Index = -1;
LABEL_6:
    v10 = operator new(0x80u);
    CDOTABehaviorIdle::CDOTABehaviorIdle(v10);
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_reason = "No initial goal entity";
    retstr->m_action = v10;
    return retstr;
  }
  v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  v14 = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  LOWORD(this->m_hChaseEntity.m_Index) = v14 | this->m_hChaseEntity.m_Index & 0x8000;
  v15 = (v13 << 15) | this->m_hChaseEntity.m_Index & 0x7FFF;
  this->m_hChaseEntity.m_Index = v15;
  if ( v15 + 2 <= 1 )
    goto LABEL_6;
  v16 = v7->m_pIdentityChunks[(LOWORD(this->m_hChaseEntity.m_Index) >> 9) & 0x3F];
  if ( v16 == 0 )
    goto LABEL_6;
  v17 = &v16[this->m_hChaseEntity.m_Index & 0x1FF];
  if ( v17 == 0 || v17->m_EHandle.m_Index != v15 || v17->m_pInstance == 0 )
    goto LABEL_6;
  this->m_bTargetMoves = me->m_bChaseTargetMoves;
  m_flChaseDistance = me->m_flChaseDistance;
  this->m_flFollowDistance[0] = m_flChaseDistance;
  this->m_flFollowDistance[1] = m_flChaseDistance;
  CDOTABehaviorChase::RecalculateOffset(this);
  CDOTABehaviorMoveTo::OnStart(&this->m_MoveTo);
  v19 = CountdownTimer::Now(&this->m_PositionFuzziness) + 5.0;
  if ( v19 != this->m_PositionFuzziness.m_timestamp.m_Value )
  {
    v20 = v19;
    (*(this->m_PositionFuzziness._vptr_CountdownTimer + 2))(&this->m_PositionFuzziness, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_PositionFuzziness.m_timestamp.m_Value = v20;
  }
  if ( this->m_PositionFuzziness.m_duration.m_Value != 5.0 )
  {
    (*(this->m_PositionFuzziness._vptr_CountdownTimer + 2))(&this->m_PositionFuzziness, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_PositionFuzziness.m_duration.m_Value = 5.0;
  }
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorChase::Update  (line 34, @0x0000000002876fa0, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, ChangeTo, Continue, EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsElapsed, IsValid, LookupEntity, NetworkStateChanged, Reset, Set, operator CEntityInstance*, operator!, operator=<float>, ~CDOTABehaviorCommandListener
// calls: operator new, CountdownTimer::CountdownTimer, CountdownTimer::Now, CDOTABehaviorMoveTo::Update, CDOTABehaviorChase::RecalculateOffset, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// strings: "No goal entity"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorChase::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorChase *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  char *v11; // rbx
  float v13; // xmm0_4
  float v14; // [rsp+Ch] [rbp-24h]

  m_Index = this->m_hChaseEntity.m_Index;
  if ( m_Index + 2 > 1
    && (m_Index_low = LOWORD(this->m_hChaseEntity.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) != 0)
    && (v10 = &v9[m_Index_low & 0x1FF]) != 0
    && m_Index == v10->m_EHandle.m_Index
    && v10->m_pInstance != 0 )
  {
    if ( CountdownTimer::Now(&this->m_PositionFuzziness) >= this->m_PositionFuzziness.m_timestamp.m_Value )
    {
      CDOTABehaviorChase::RecalculateOffset(this);
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
    v11 = operator new(0x80u);
    *(v11 + 16) = 0;
    *(v11 + 9) = 0;
    *(v11 + 10) = 0;
    *(v11 + 3) = 0;
    *(v11 + 4) = 0;
    *(v11 + 5) = 0;
    *(v11 + 6) = 0;
    *(v11 + 7) = 0;
    *(v11 + 2) = 0;
    v11[96] = 0;
    v11[97] = 0;
    *(v11 + 22) = 0;
    *v11 = &off_42C1970;
    *(v11 + 1) = &off_42C1DA0;
    CountdownTimer::CountdownTimer((v11 + 104));
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_reason = "No goal entity";
    retstr->m_action = v11;
    return retstr;
  }
}


// CDOTABehaviorChase::OnResume  (line 54, @0x00000000028708c0, libserver.so)  // inlines: ActionResult, Continue, IActionResult
// calls: CDOTABehaviorMoveTo::OnResume
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorChase::OnResume(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorChase *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  CDOTABehaviorMoveTo::OnResume(&this->m_MoveTo);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorChase::RecalculateOffset  (line 63, @0x0000000002876c90, libserver.so)
// calls: RandomFloat, RandomInt
// callers: CDOTABehaviorChase::OnStart, CDOTABehaviorChase::Update
void __fastcall CDOTABehaviorChase::RecalculateOffset(CDOTABehaviorChase *const this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  int v4; // eax
  float v5; // xmm1_4
  float v6; // [rsp+Ch] [rbp-14h]

  v2 = RandomFloat(this->m_flFollowDistance[0], this->m_flFollowDistance[1]);
  v3 = this->m_flFollowDistance[1];
  this->m_flForwardDistance = -v2;
  v6 = RandomFloat(this->m_flFollowDistance[0], v3);
  v4 = RandomInt(0, 1);
  v5 = 1.0;
  if ( v4 != 0 )
    v5 = -1.0;
  this->m_flRightDistance = v6 * v5;
}


// CDOTABehaviorChase::GetTargetPosition  (line 73, @0x0000000002872210, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, VectorAdd, VectorMultiply, operator CEntityInstance*, operator*, operator+
// calls: CBaseEntity::GetAbsAngles, AngleVectors, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTABehaviorChase::GetTargetPosition(CDOTABehaviorChase *const this, CDOTA_BaseNPC *me)
{
  const CBaseEntity *m_pInstance; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  const QAngle *AbsAngles; // rax
  float m_flRightDistance; // xmm0_4
  float m_flForwardDistance; // xmm1_4
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
  m_Index = this->m_hChaseEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hChaseEntity.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hChaseEntity.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  AbsAngles = CBaseEntity::GetAbsAngles(m_pInstance);
  AngleVectors(AbsAngles, &vForward, &vRight, &vUp);
  m_flRightDistance = this->m_flRightDistance;
  m_flForwardDistance = this->m_flForwardDistance;
  v20 = vRight.x * m_flRightDistance;
  v19 = vRight.y * m_flRightDistance;
  v15 = vForward.x * m_flForwardDistance;
  v18 = m_flRightDistance * vRight.z;
  v16 = vForward.y * m_flForwardDistance;
  v17 = m_flForwardDistance * vForward.z;
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  v11 = (v15 + AbsOrigin->x) + v20;
  v12 = v17 + AbsOrigin->z;
  v24[1] = (v16 + AbsOrigin->y) + v19;
  v24[0] = v11;
  *&result.x = *v24;
  result.z = v12 + v18;
  return result;
}


