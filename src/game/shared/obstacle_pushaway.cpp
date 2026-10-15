
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IsPushAwayEntity  (line 38, @0x000000000229b410, libserver.so)  // inlines: ClassMatches, FClassnameIs, GetCollisionGroup, IsDoorOpening, operator==<DoorState_t>
// calls: CEntityIdentity::ClassMatches, __dynamic_cast
// callers: CPushAwayEnumerator::EnumElement
// strings: "func_door_rotating", "prop_door_rotating"
bool __fastcall IsPushAwayEntity(CBaseEntity *pEnt)
{
  CCollisionProperty *m_pCollision; // rax
  _DWORD *v3; // rax
  _DWORD *v5; // rax
  int v6; // eax

  if ( pEnt != 0 )
  {
    m_pCollision = pEnt->m_pCollision;
    if ( m_pCollision != 0 && m_pCollision->m_CollisionGroup.m_Value == 20 )
      return 1;
    if ( CEntityIdentity::ClassMatches(pEnt->m_pEntity, "func_door_rotating") )
    {
      v3 = __dynamic_cast(pEnt, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseDoor, 0);
      if ( v3 != 0 )
        return (v3[288] - 2) <= 1;
      return 0;
    }
    if ( CEntityIdentity::ClassMatches(pEnt->m_pEntity, "prop_door_rotating") )
    {
      v5 = __dynamic_cast(pEnt, &`typeinfo for'CBaseEntity, &`typeinfo for'CBasePropDoor, 0);
      if ( v5 != 0 )
      {
        v6 = v5[449];
        if ( v6 != 1 )
          return v6 == 3;
        return 1;
      }
    }
  }
  return 0;
}


// IsPushableEntity  (line 98, @0x000000000229b500, libserver.so)  // inlines: ClassMatches, FClassnameIs, GetBool, GetCollisionGroup, GetInt
// calls: CEntityIdentity::ClassMatches
// strings: "prop_physics_clientside", "prop_physics"
bool __fastcall IsPushableEntity(CBaseEntity *pEnt)
{
  CCollisionProperty *m_pCollision; // rdx
  bool result; // al

  if ( pEnt == 0 || sv_turbophysics.m_pParent->m_Value.m_nValue == 0 )
    return 0;
  m_pCollision = pEnt->m_pCollision;
  if ( m_pCollision == 0 || (result = 0, m_pCollision->m_CollisionGroup.m_Value == 4) )
  {
    result = CEntityIdentity::ClassMatches(pEnt->m_pEntity, "prop_physics_clientside");
    if ( !result )
      return CEntityIdentity::ClassMatches(pEnt->m_pEntity, "prop_physics");
  }
  return result;
}


// IsBreakableEntity  (line 125, @0x000000000229b580, libserver.so)  // inlines: ClassMatches, FClassnameIs, Get, GetAttacker, GetCollisionGroup, GetCollisionGroup_Inline, GetInstance, IsSolid, ScaleDamage, operator CBaseEntity*
// calls: CBaseEntity::GetDamageOptions, CBaseEntity::GetHealth, CEntityIdentity::ClassMatches, __dynamic_cast, CTakeDamageInfo::CTakeDamageInfo, CEntityHandle::operator CEntityInstance*, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
// strings: "func_door", "func_door_rotating", "prop_fuel_barrel", "func_breakable", "func_breakable_surf"
// globals: `typeinfo for'IMultiplayerPhysics, `typeinfo for'IBreakableWithPropData
bool __fastcall IsBreakableEntity(CBaseEntity *pEnt, bool isHulk, bool isMob, CTakeDamageInfo *pDamageInfo)
{
  bool v8; // r12
  CCollisionProperty *m_pCollision; // rax
  unsigned __int8 m_Value; // al
  CCollisionProperty *v12; // r12
  unsigned int (__fastcall ***v13)(_QWORD); // rax
  IBreakableWithPropData *v14; // rax
  CEntityInstance *v15; // rax
  float v16; // xmm0_4
  CEntityInstance *v17; // rax
  float v18; // xmm0_4
  int *v19; // rax
  float m_flDamage; // [rsp+4h] [rbp-CCh]
  IBreakableWithPropData *pBreakableInterface; // [rsp+8h] [rbp-C8h]
  CTakeDamageInfo info; // [rsp+10h] [rbp-C0h] BYREF

  if ( pEnt == 0 )
    return 0;
  if ( CBaseEntity::GetDamageOptions(pEnt) != DamageOptions_t::DAMAGE_YES )
    return 0;
  m_pCollision = pEnt->m_pCollision;
  if ( m_pCollision != 0 )
  {
    m_Value = m_pCollision->m_CollisionGroup.m_Value;
    if ( m_Value != 9 && (m_Value & 0xEF) != 4 )
      return 0;
  }
  if ( (CBaseEntity::GetHealth(pEnt) - 1) > 0xC7 )
    return 0;
  v12 = pEnt->m_pCollision;
  if ( v12 == 0
    || (*((*(v12->_vptr_ICollideable + 13))(pEnt->m_pCollision) + 31) & 1) == 0
    && (*((*(v12->_vptr_ICollideable + 13))(v12) + 31) & 2) == 0 )
  {
    return 0;
  }
  if ( v12->m_nSolidType.m_Value == SolidType_t::SOLID_NONE )
    return 0;
  if ( CEntityIdentity::ClassMatches(pEnt->m_pEntity, "func_door") )
    return 0;
  v8 = CEntityIdentity::ClassMatches(pEnt->m_pEntity, "func_door_rotating");
  if ( v8 || !isHulk && !isMob && CEntityIdentity::ClassMatches(pEnt->m_pEntity, "prop_fuel_barrel") )
    return 0;
  if ( pDamageInfo != 0 && (*(pEnt->_vptr_IHandleEntity + 88))(pEnt, pDamageInfo) == 0 )
    return 0;
  v13 = __dynamic_cast(pEnt, &`typeinfo for'CBaseEntity, &`typeinfo for'IMultiplayerPhysics, -2);
  if ( v13 != 0 )
  {
    if ( (**v13)(v13) != 1 )
      return 0;
  }
  else if ( CEntityIdentity::ClassMatches(pEnt->m_pEntity, "func_breakable")
         || CEntityIdentity::ClassMatches(pEnt->m_pEntity, "func_breakable_surf") )
  {
    CEntityIdentity::ClassMatches(pEnt->m_pEntity, "func_breakable_surf");
  }
  else if ( ((*(pEnt->_vptr_IHandleEntity + 123))(pEnt) & 0x10) != 0 )
  {
    return 0;
  }
  v14 = __dynamic_cast(pEnt, &`typeinfo for'CBaseEntity, &`typeinfo for'IBreakableWithPropData, -2);
  pBreakableInterface = v14;
  if ( v14 != 0 )
  {
    if ( (*(v14->_vptr_IBreakableWithPropData + 5))(v14) <= 0.0
      || !isHulk && (*(pBreakableInterface->_vptr_IBreakableWithPropData + 25))(pBreakableInterface, 17) != 0
      || !isMob && (*(pBreakableInterface->_vptr_IBreakableWithPropData + 25))(pBreakableInterface, 18) != 0 )
    {
      return 0;
    }
    if ( pDamageInfo != 0 )
    {
      CTakeDamageInfo::CTakeDamageInfo(&info, pDamageInfo);
      v15 = CEntityHandle::operator CEntityInstance *(&info.m_hAttacker);
      if ( v15 != 0 )
      {
        v16 = (*(v15->_vptr_IHandleEntity + 177))(v15, pEnt);
        info.m_flDamage = v16 * info.m_flDamage;
      }
      v17 = CEntityHandle::operator CEntityInstance *(&info.m_hAttacker);
      v18 = (*(pEnt->_vptr_IHandleEntity + 178))(pEnt, v17);
      info.m_flDamage = info.m_flDamage * v18;
      m_flDamage = info.m_flDamage;
      if ( (*(pBreakableInterface->_vptr_IBreakableWithPropData + 32))(pBreakableInterface) > m_flDamage )
      {
        CTakeDamageInfo::~CTakeDamageInfo(&info);
        return v8;
      }
      CTakeDamageInfo::~CTakeDamageInfo(&info);
    }
  }
  v19 = __dynamic_cast(pEnt, &`typeinfo for'CBaseEntity, &`typeinfo for'CBreakableProp, 0);
  return v19 == 0 || v19[329] <= 49;
}


// GetPushawayEnts  (line 239, @0x000000000229ba40, libserver.so)  // inlines: CPushAwayEnumerator, Init, LengthSqr, Ray_t, VectorAdd, VectorAligned, VectorSubtract, operator*=, operator+, operator-
// calls: CBaseEntity::GetAbsOrigin, CGamePhysicsQueryInterface::EnumerateElementsAlongRay, operator new, operator delete
// callers: AvoidPushawayProps, PerformObstaclePushaway
__int64 __fastcall GetPushawayEnts(
        CBaseCombatCharacter *pPushingEntity,
        CBaseEntity **ents,
        int nMaxEnts,
        float flPlayerExpand,
        CPushAwayEnumerator *enumerator)
{
  __int64 v9; // rax
  float *v10; // rax
  __int64 v11; // rax
  float *v12; // rax
  const Vector *AbsOrigin; // r15
  const Vector *v14; // rdi
  void *v16; // rbx
  float v17; // [rsp+8h] [rbp-98h]
  float v18; // [rsp+Ch] [rbp-94h]
  float v19; // [rsp+10h] [rbp-90h]
  float v20; // [rsp+14h] [rbp-8Ch]
  float v21; // [rsp+18h] [rbp-88h]
  float numHita; // [rsp+1Ch] [rbp-84h]
  unsigned int numHitb; // [rsp+1Ch] [rbp-84h]
  Ray_t ray; // [rsp+20h] [rbp-80h] BYREF

  v9 = (*(pPushingEntity->_vptr_IHandleEntity + 29))(pPushingEntity);
  v10 = (*(*v9 + 16LL))(v9);
  v17 = *v10 + flPlayerExpand;
  v18 = v10[1] + flPlayerExpand;
  v19 = v10[2] + flPlayerExpand;
  v11 = (*(pPushingEntity->_vptr_IHandleEntity + 29))(pPushingEntity);
  v12 = (*(*v11 + 8LL))(v11);
  v20 = *v12 - flPlayerExpand;
  v21 = v12[1] - flPlayerExpand;
  numHita = v12[2] - flPlayerExpand;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pPushingEntity);
  ray.m_Start.w = 0.0;
  ray.m_Delta.w = 0.0;
  v14 = CBaseEntity::GetAbsOrigin(pPushingEntity);
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  ray.m_flRadius = 0.0;
  ray.m_Delta.x = AbsOrigin->x - v14->x;
  ray.m_Delta.y = AbsOrigin->y - v14->y;
  ray.m_Delta.z = AbsOrigin->z - v14->z;
  ray.m_Extents.x = (v17 - v20) * 0.5;
  ray.m_Extents.y = (v18 - v21) * 0.5;
  ray.m_Extents.z = (v19 - numHita) * 0.5;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_StartOffset.x = (v20 + v17) * 0.5;
  ray.m_StartOffset.y = (v21 + v18) * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  ray.m_StartOffset.z = (v19 + numHita) * 0.5;
  ray.m_Start.x = v14->x + ray.m_StartOffset.x;
  ray.m_Start.y = v14->y + ray.m_StartOffset.y;
  ray.m_Start.z = v14->z + ray.m_StartOffset.z;
  ray.m_StartOffset.x = -ray.m_StartOffset.x;
  ray.m_StartOffset.y = -ray.m_StartOffset.y;
  ray.m_StartOffset.z = -ray.m_StartOffset.z;
  if ( enumerator != 0 )
  {
    CGamePhysicsQueryInterface::EnumerateElementsAlongRay(g_pPhysicsQuery, &ray, enumerator);
    return enumerator->m_nAlreadyHit;
  }
  else
  {
    v16 = operator new(0x18u);
    *(v16 + 1) = ents;
    *v16 = &off_4071490;
    *(v16 + 4) = 0;
    *(v16 + 5) = nMaxEnts;
    CGamePhysicsQueryInterface::EnumerateElementsAlongRay(g_pPhysicsQuery, &ray, v16);
    numHitb = *(v16 + 4);
    operator delete(v16);
    return numHitb;
  }
}


// AvoidPushawayProps  (line 263, @0x000000000229bd30, libserver.so)  // inlines: CalcNearestPoint, ClassMatches, Dot, DotProduct, FClassnameIs, GetFloat, IsZero, VectorSubtract, operator*=, operator-, operator=
// calls: AngleVectors, GetPushawayEnts, __dynamic_cast, CCollisionProperty::CalcNearestPoint, VectorNormalize, CEntityIdentity::ClassMatches, CBaseEntity::GetAbsOrigin, CCollisionProperty::IsPointInBounds
// callers: CBasePlayer::AvoidPhysicsProps
// strings: "func_door_rotating", "prop_door_rotating"
// globals: `typeinfo for'IMultiplayerPhysics
void __fastcall AvoidPushawayProps(CBaseCombatCharacter *pPlayer, CUserCmd *pCmd)
{
  const QAngle *v4; // rax
  const void **v5; // rbx
  int PushawayEnts; // r12d
  vec_t v7; // xmm1_4
  const CBaseEntity *v8; // r12
  unsigned int (__fastcall ***v9)(_QWORD); // rax
  unsigned int (__fastcall ***v10)(_QWORD); // r15
  float v11; // xmm0_4
  const CCollisionProperty *m_pCollision; // rdi
  CCollisionProperty *v13; // rdi
  float x; // xmm2_4
  float y; // xmm1_4
  float z; // xmm0_4
  double v17; // xmm0_8
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  bool v22; // al
  float v23; // xmm0_4
  float v24; // xmm3_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  Vector *AbsOrigin; // rax
  const Vector *v29; // rax
  bool IsPointInBounds; // al
  bool v31; // al
  float v32; // xmm1_4
  unsigned int flDist; // [rsp+0h] [rbp-10B0h]
  float flForce; // [rsp+4h] [rbp-10ACh]
  float flForcea; // [rsp+4h] [rbp-10ACh]
  CBaseEntity **v36; // [rsp+8h] [rbp-10A8h]
  Vector currentdir; // [rsp+10h] [rbp-10A0h] BYREF
  Vector rightdir; // [rsp+20h] [rbp-1090h] BYREF
  Vector ourCenter; // [rsp+30h] [rbp-1080h] BYREF
  Vector nearestPropPoint; // [rsp+40h] [rbp-1070h] BYREF
  Vector nearestPlayerPoint; // [rsp+50h] [rbp-1060h] BYREF
  Vector vPushAway; // [rsp+60h] [rbp-1050h] BYREF
  double v43; // [rsp+70h] [rbp-1040h]
  float v44; // [rsp+78h] [rbp-1038h]
  CBaseEntity *props[512]; // [rsp+80h] [rbp-1030h] BYREF

  if ( (*(g_pGameRules->_vptr_CGameRules + 147))(g_pGameRules) != 0 )
  {
    v4 = (*(g_pGameRules->_vptr_CGameRules + 148))(g_pGameRules);
    AngleVectors(v4, &currentdir, &rightdir, 0);
  }
  else
  {
    AngleVectors(&pCmd->viewangles, &currentdir, &rightdir, 0);
  }
  v5 = props;
  PushawayEnts = GetPushawayEnts(pPlayer, props, 512, 0.0, 0);
  *&ourCenter.x = (*(pPlayer->_vptr_IHandleEntity + 62))(pPlayer);
  ourCenter.z = v7;
  if ( PushawayEnts > 0 )
  {
    v36 = &props[(PushawayEnts - 1) + 1];
    while ( 1 )
    {
      v8 = *v5;
      if ( *v5 == 0 )
        break;
      v9 = __dynamic_cast(*v5, &`typeinfo for'CBaseEntity, &`typeinfo for'IMultiplayerPhysics, -2);
      v10 = v9;
      if ( v9 == 0 )
        break;
      if ( (**v9)(v9) == 1 )
      {
        v11 = ((*v10)[1])(v10);
        if ( v11 > 30.0 )
        {
          flForce = 1.0;
          goto LABEL_11;
        }
        if ( v11 < 10.0 )
        {
          flForce = 0.33333334;
LABEL_11:
          v8 = *v5;
LABEL_12:
          m_pCollision = v8->m_pCollision;
          if ( m_pCollision != 0 )
            goto LABEL_13;
          goto LABEL_35;
        }
        v8 = *v5;
        if ( v11 > 0.0 )
          goto LABEL_31;
        m_pCollision = v8->m_pCollision;
        flForce = 0.0;
        if ( m_pCollision != 0 )
        {
LABEL_13:
          CCollisionProperty::CalcNearestPoint(m_pCollision, &ourCenter, &nearestPropPoint);
          v13 = pPlayer->m_pCollision;
          if ( v13 == 0 )
            goto LABEL_36;
          goto LABEL_14;
        }
LABEL_35:
        AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
        v13 = pPlayer->m_pCollision;
        nearestPropPoint = *AbsOrigin;
        if ( v13 == 0 )
        {
LABEL_36:
          v29 = CBaseEntity::GetAbsOrigin(pPlayer);
          x = v29->x;
          y = v29->y;
          z = v29->z;
          nearestPlayerPoint.x = v29->x;
          nearestPlayerPoint.y = y;
          nearestPlayerPoint.z = z;
          goto LABEL_15;
        }
LABEL_14:
        CCollisionProperty::CalcNearestPoint(v13, &nearestPropPoint, &nearestPlayerPoint);
        x = nearestPlayerPoint.x;
        y = nearestPlayerPoint.y;
        z = nearestPlayerPoint.z;
LABEL_15:
        vPushAway.y = y - nearestPropPoint.y;
        vPushAway.z = z - nearestPropPoint.z;
        vPushAway.x = x - nearestPropPoint.x;
        *&v17 = VectorNormalize(&vPushAway);
        if ( *&v17 > 5.0 )
        {
          flDist = LODWORD(v17);
          IsPointInBounds = CCollisionProperty::IsPointInBounds(&pPlayer->m_Collision, &nearestPropPoint);
          *&v17 = flDist;
          if ( !IsPointInBounds )
            goto LABEL_5;
        }
        v18 = vPushAway.x;
        if ( vPushAway.x <= -0.0099999998 )
          goto LABEL_38;
        if ( vPushAway.x >= 0.0099999998 )
          goto LABEL_39;
        v19 = vPushAway.y;
        if ( vPushAway.y <= -0.0099999998 )
          goto LABEL_41;
        if ( vPushAway.y < 0.0099999998 )
        {
          v20 = vPushAway.z;
          if ( vPushAway.z <= -0.0099999998 || vPushAway.z >= 0.0099999998 )
            goto LABEL_22;
          vPushAway.y = ourCenter.y - nearestPropPoint.y;
          vPushAway.z = ourCenter.z - nearestPropPoint.z;
          vPushAway.x = ourCenter.x - nearestPropPoint.x;
          *&v17 = VectorNormalize(&vPushAway);
          v18 = vPushAway.x;
LABEL_38:
          if ( v18 <= -0.0099999998 )
            goto LABEL_25;
LABEL_39:
          if ( v18 >= 0.0099999998 )
            goto LABEL_25;
          v19 = vPushAway.y;
LABEL_41:
          if ( v19 <= -0.0099999998 )
            goto LABEL_25;
        }
        if ( v19 < 0.0099999998 )
        {
          v20 = vPushAway.z;
LABEL_22:
          if ( v20 > -0.0099999998 && v20 < 0.0099999998 )
          {
            v43 = (*(**v5 + 496LL))(*v5, v17);
            v44 = v32;
            vPushAway.y = ourCenter.y - *(&v43 + 1);
            vPushAway.z = ourCenter.z - v32;
            vPushAway.x = ourCenter.x - *&v43;
            *&v17 = VectorNormalize(&vPushAway);
          }
        }
LABEL_25:
        flForcea = fminf(
                     (sv_pushaway_player_force.m_pParent->m_Value.m_fValue / fmaxf(*&v17, 1.0)) * flForce,
                     sv_pushaway_max_player_force.m_pParent->m_Value.m_fValue);
        (*(pPlayer->_vptr_IHandleEntity + 343))(pPlayer, *v5);
        v21 = flForcea;
        if ( *v5 != 0 )
        {
          v22 = CEntityIdentity::ClassMatches(*(*v5 + 1), "func_door_rotating");
          v21 = flForcea;
          if ( v22
            || *v5 != 0 && (v31 = CEntityIdentity::ClassMatches(*(*v5 + 1), "prop_door_rotating"), v21 = flForcea, v31) )
          {
            v21 = v21 * 0.25;
          }
        }
        ++v5;
        v23 = vPushAway.x * v21;
        v24 = vPushAway.y * v21;
        v25 = v21 * vPushAway.z;
        v26 = (currentdir.x * v23) + (currentdir.y * v24);
        v27 = (((v23 * rightdir.x) + (v24 * rightdir.y)) + (v25 * rightdir.z)) + pCmd->sidemove;
        pCmd->forwardmove = (v26 + (currentdir.z * v25)) + pCmd->forwardmove;
        pCmd->sidemove = v27;
        if ( v5 == v36 )
          return;
      }
      else
      {
LABEL_5:
        if ( ++v5 == v36 )
          return;
      }
    }
    v11 = 30.0;
LABEL_31:
    flForce = v11 / 30.0;
    goto LABEL_12;
  }
}


// PerformObstaclePushaway  (line 354, @0x000000000229c340, libserver.so)  // inlines: FastSqrt, GetAbsVelocity, GetFloat, Length2D, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator-
// calls: CBaseEntity::GetLifeState, GetPushawayEnts, CBaseEntity::VPhysicsGetObject, VectorNormalize, __dynamic_cast, CBaseEntity::CalcAbsoluteVelocity
// globals: `typeinfo for'IMultiplayerPhysics
void __fastcall PerformObstaclePushaway(CBaseCombatCharacter *pPushingEntity)
{
  const void **v2; // rbx
  int PushawayEnts; // eax
  CBaseEntity **v4; // r13
  const CBaseEntity *v5; // r14
  IPhysicsObject *Object; // r15
  double v7; // xmm0_8
  const void *v8; // rdi
  int v9; // xmm1_4
  double v10; // xmm0_8
  float v11; // xmm1_4
  void (__fastcall *v12)(IPhysicsObject *, double *, double *); // r14
  double v13; // xmm0_8
  int v14; // xmm1_4
  unsigned int (__fastcall ***v15)(_QWORD); // rax
  float flForce; // [rsp+1Ch] [rbp-864h]
  Vector vPushAway; // [rsp+20h] [rbp-860h] BYREF
  double v18; // [rsp+30h] [rbp-850h] BYREF
  float v19; // [rsp+38h] [rbp-848h]
  double v20; // [rsp+40h] [rbp-840h] BYREF
  int v21; // [rsp+48h] [rbp-838h]
  CBaseEntity *props[256]; // [rsp+50h] [rbp-830h] BYREF

  if ( CBaseEntity::GetLifeState(pPushingEntity) == LifeState_t::LIFE_ALIVE )
  {
    v2 = props;
    PushawayEnts = GetPushawayEnts(pPushingEntity, props, 256, 3.0, 0);
    if ( PushawayEnts > 0 )
    {
      v4 = &props[(PushawayEnts - 1) + 1];
      do
      {
        v5 = *v2;
        if ( *v2 != 0 )
        {
          v15 = __dynamic_cast(*v2, &`typeinfo for'CBaseEntity, &`typeinfo for'IMultiplayerPhysics, -2);
          if ( v15 != 0 )
          {
            if ( (**v15)(v15) == 1 )
            {
              if ( (pPushingEntity->m_iEFlags & 0x1000) != 0 )
                CBaseEntity::CalcAbsoluteVelocity(pPushingEntity);
              if ( sv_pushaway_min_player_speed.m_pParent->m_Value.m_fValue > fsqrt(
                                                                                (pPushingEntity->m_vecAbsVelocity.m_Value.x
                                                                               * pPushingEntity->m_vecAbsVelocity.m_Value.x)
                                                                              + (pPushingEntity->m_vecAbsVelocity.m_Value.y
                                                                               * pPushingEntity->m_vecAbsVelocity.m_Value.y)) )
                goto LABEL_8;
            }
            v5 = *v2;
          }
        }
        Object = CBaseEntity::VPhysicsGetObject(v5);
        if ( Object != 0 )
        {
          v7 = (*(pPushingEntity->_vptr_IHandleEntity + 62))(pPushingEntity);
          v8 = *v2;
          v20 = v7;
          v21 = v9;
          v10 = (*(*v8 + 496LL))(v8);
          vPushAway.z = 0.0;
          v18 = v10;
          v19 = v11;
          vPushAway.y = *(&v10 + 1) - *(&v20 + 1);
          vPushAway.x = *&v10 - *&v20;
          flForce = fminf(
                      sv_pushaway_force.m_pParent->m_Value.m_fValue / fmaxf(VectorNormalize(&vPushAway), 1.0),
                      sv_pushaway_max_force.m_pParent->m_Value.m_fValue);
          v12 = *(*Object + 1784LL);
          v13 = (*(pPushingEntity->_vptr_IHandleEntity + 62))(pPushingEntity);
          v21 = v14;
          v20 = v13;
          *(&v18 + 1) = vPushAway.y * flForce;
          v19 = vPushAway.z * flForce;
          *&v18 = flForce * vPushAway.x;
          v12(Object, &v18, &v20);
        }
LABEL_8:
        ++v2;
      }
      while ( v2 != v4 );
    }
  }
}


