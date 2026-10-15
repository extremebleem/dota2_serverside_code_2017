
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IIntention::SelectTargetPoint  (line 19, @0x0000000002f2e7f0, libserver.so)  // inlines: WorldSpaceAABB, operator!=
// calls: __dynamic_cast, CCollisionProperty::CollisionAABBToWorldAABB, CBaseEntity::GetAbsOrigin
// globals: `typeinfo for'IContextualQuery, `typeinfo for'INextBotEventResponder
Vector __fastcall IIntention::SelectTargetPoint(
        const IIntention *const this,
        const INextBot *me,
        const CBaseCombatCharacter *subject)
{
  const void *v6; // rbx
  void *v7; // rax
  double v8; // xmm0_8
  float v9; // xmm1_4
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm2_4
  Vector threatMins; // [rsp+20h] [rbp-50h] BYREF
  Vector threatMaxs; // [rsp+30h] [rbp-40h] BYREF
  double v16; // [rsp+40h] [rbp-30h]
  float v17; // [rsp+48h] [rbp-28h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v6 = (*(this->_vptr_INextBotEventResponder + 3))(this);
  if ( v6 != 0 )
  {
    while ( 1 )
    {
      v7 = __dynamic_cast(v6, &`typeinfo for'INextBotEventResponder, &`typeinfo for'IContextualQuery, -2);
      if ( v7 != 0 )
      {
        v8 = (*(*v7 + 64LL))(v7, me, subject);
        if ( *&v8 != vec3_origin.x || *(&v8 + 1) != vec3_origin.y || v9 != vec3_origin.z )
          break;
      }
      v6 = (*(this->_vptr_INextBotEventResponder + 4))(this, v6);
      if ( v6 == 0 )
        goto LABEL_7;
    }
    v16 = v8;
    v17 = v9;
  }
  else
  {
LABEL_7:
    CCollisionProperty::CollisionAABBToWorldAABB(
      &subject->m_Collision,
      &subject->m_Collision.m_vecMins.m_Value,
      &subject->m_Collision.m_vecMaxs.m_Value,
      &threatMins,
      &threatMaxs);
    AbsOrigin = CBaseEntity::GetAbsOrigin(subject);
    x = AbsOrigin->x;
    HIDWORD(v16) = LODWORD(AbsOrigin->y);
    *&v16 = x;
    v17 = ((threatMaxs.z - threatMins.z) * 0.69999999) + AbsOrigin->z;
  }
  *&result.x = v16;
  result.z = v17;
  return result;
}


// IIntention::SelectMoreDangerousThreat  (line 49, @0x0000000002f2e960, libserver.so)  // inlines: LengthSqr, VectorSubtract, operator-
// calls: __dynamic_cast, CBaseEntity::GetAbsOrigin
// globals: `typeinfo for'IContextualQuery, `typeinfo for'INextBotEventResponder
const CKnownEntity *__fastcall IIntention::SelectMoreDangerousThreat(
        const IIntention *const this,
        const INextBot *me,
        const CBaseCombatCharacter *subject,
        const CKnownEntity *threat1,
        const CKnownEntity *threat2)
{
  const void *v9; // rbx
  void *v10; // rax
  const CKnownEntity *result; // rax
  float *v12; // rbx
  const Vector *AbsOrigin; // rax
  float *v14; // rbx
  const Vector *v15; // rax
  float x; // xmm1_4
  float y; // xmm3_4
  float z; // xmm2_4
  char v19; // dl
  float meb; // [rsp+8h] [rbp-38h]

  if ( threat1 == 0 || (*(threat1->_vptr_CKnownEntity + 17))(threat1) != 0 )
  {
    if ( threat2 == 0 )
      return 0;
    v19 = (*(threat2->_vptr_CKnownEntity + 17))(threat2, me, subject);
    result = threat2;
    if ( v19 != 0 )
      return 0;
  }
  else if ( threat2 == 0 || (*(threat2->_vptr_CKnownEntity + 17))(threat2) != 0 )
  {
    return threat1;
  }
  else
  {
    v9 = (*(this->_vptr_INextBotEventResponder + 3))(this);
    if ( v9 != 0 )
    {
      while ( 1 )
      {
        v10 = __dynamic_cast(v9, &`typeinfo for'INextBotEventResponder, &`typeinfo for'IContextualQuery, -2);
        if ( v10 != 0 )
        {
          result = (*(*v10 + 80LL))(v10, me, subject, threat1, threat2);
          if ( result != 0 )
            break;
        }
        v9 = (*(this->_vptr_INextBotEventResponder + 4))(this, v9);
        if ( v9 == 0 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v12 = (*(threat1->_vptr_CKnownEntity + 5))(threat1);
      AbsOrigin = CBaseEntity::GetAbsOrigin(subject);
      meb = (((AbsOrigin->x - *v12) * (AbsOrigin->x - *v12)) + ((AbsOrigin->y - v12[1]) * (AbsOrigin->y - v12[1])))
          + ((AbsOrigin->z - v12[2]) * (AbsOrigin->z - v12[2]));
      v14 = (*(threat2->_vptr_CKnownEntity + 5))(threat2);
      v15 = CBaseEntity::GetAbsOrigin(subject);
      x = v15->x;
      y = v15->y;
      z = v15->z;
      result = threat2;
      if ( ((((x - *v14) * (x - *v14)) + ((y - v14[1]) * (y - v14[1]))) + ((z - v14[2]) * (z - v14[2]))) > meb )
        return threat1;
    }
  }
  return result;
}


