
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// Pickup_ForcePlayerToDropThisObject  (line 19, @0x0000000002324d40, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject, UTIL_PlayerByIndex
// callers: CBaseEntity::FireBullets, PerformMeleeAttackTest
void __fastcall Pickup_ForcePlayerToDropThisObject(CBaseEntity *pObject)
{
  IPhysicsObject *Object; // rax
  int v3; // ebx
  CBasePlayer *v4; // rax

  if ( pObject != 0 )
  {
    Object = CBaseEntity::VPhysicsGetObject(pObject);
    if ( Object != 0 && ((*(*Object + 1296LL))(Object) & 4) != 0 && gpGlobals->maxClients > 0 )
    {
      v3 = 1;
      do
      {
        v4 = UTIL_PlayerByIndex(v3);
        if ( v4 != 0 )
          (*(v4->_vptr_IHandleEntity + 480))(v4, pObject);
        ++v3;
      }
      while ( gpGlobals->maxClients >= v3 );
    }
  }
}


// Pickup_OnPhysGunDrop  (line 45, @0x0000000002324dd0, libserver.so)
// calls: __dynamic_cast
// globals: `typeinfo for'IPlayerPickupVPhysics
void __fastcall Pickup_OnPhysGunDrop(
        CBaseEntity *pDroppedObject,
        CBasePlayer *pPlayer,
        PhysGunDrop_t Reason,
        int nVRControllerID)
{
  void *v7; // rax

  if ( pDroppedObject != 0 )
  {
    v7 = __dynamic_cast(pDroppedObject, &`typeinfo for'CBaseEntity, &`typeinfo for'IPlayerPickupVPhysics, -2);
    if ( v7 != 0 )
      (*(*v7 + 24LL))(v7, pPlayer, Reason, nVRControllerID);
  }
}


// Pickup_OnPhysGunPickup  (line 55, @0x0000000002324e40, libserver.so)  // inlines: CreateEvent, entindex
// calls: __dynamic_cast, CEntityInstance::GetEntityIndex
// strings: "physgun_pickup"
// globals: `typeinfo for'IPlayerPickupVPhysics
// local variable allocation has failed, the output may be wrong!
void __fastcall Pickup_OnPhysGunPickup(
        CBaseEntity *pPickedUpObject,
        CBasePlayer *pPlayer,
        PhysGunPickup_t reason,
        int nVRControllerID)
{
  void *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  void (__fastcall *v11)(__int64, char *, _QWORD); // r14
  CEntityIndex v12; // eax

  if ( pPickedUpObject != 0 )
  {
    v8 = __dynamic_cast(pPickedUpObject, &`typeinfo for'CBaseEntity, &`typeinfo for'IPlayerPickupVPhysics, -2);
    if ( v8 != 0 )
      (*(*v8 + 16LL))(v8, pPlayer, reason, nVRControllerID);
  }
  if ( (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules, pPlayer, *&reason, *&nVRControllerID) == 0 )
  {
    v9 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "physgun_pickup", 0, 0);
    v10 = v9;
    if ( v9 != 0 )
    {
      v11 = *(*v9 + 112LL);
      v12.m_Data = CEntityInstance::GetEntityIndex(pPickedUpObject).m_Data;
      v11(v10, "entindex", v12.m_Data);
      (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v10, 0);
    }
  }
}


// Pickup_OnAttemptPhysGunPickup  (line 75, @0x0000000002324f10, libserver.so)
// calls: __dynamic_cast
// globals: `typeinfo for'IPlayerPickupVPhysics
bool __fastcall Pickup_OnAttemptPhysGunPickup(
        CBaseEntity *pPickedUpObject,
        CBasePlayer *pPlayer,
        PhysGunPickup_t reason)
{
  bool (__fastcall ***v5)(void *, CBasePlayer *, _QWORD); // rax

  if ( pPickedUpObject == 0 )
    return 1;
  v5 = __dynamic_cast(pPickedUpObject, &`typeinfo for'CBaseEntity, &`typeinfo for'IPlayerPickupVPhysics, -2);
  return v5 == 0 || (**v5)(v5, pPlayer, reason);
}


// Pickup_OnFailedPhysGunPickup  (line 85, @0x0000000002324f80, libserver.so)
// calls: __dynamic_cast
// globals: `typeinfo for'IPlayerPickupVPhysics
CBaseEntity *__fastcall Pickup_OnFailedPhysGunPickup(CBaseEntity *pPickedUpObject, double a2, float a3)
{
  void *v3; // rax

  if ( pPickedUpObject != 0
    && (v3 = __dynamic_cast(pPickedUpObject, &`typeinfo for'CBaseEntity, &`typeinfo for'IPlayerPickupVPhysics, -2)) != 0 )
  {
    return (*(*v3 + 8LL))(v3, a2, a3);
  }
  else
  {
    return 0;
  }
}


// Pickup_GetPreferredCarryAngles  (line 96, @0x0000000002324ff0, libserver.so)  // inlines: operator=
// calls: __dynamic_cast, TransformAnglesToWorldSpace
// globals: `typeinfo for'IPlayerPickupVPhysics
bool __fastcall Pickup_GetPreferredCarryAngles(
        CBaseEntity *pObject,
        CBasePlayer *pPlayer,
        matrix3x4_t *const localToWorld,
        QAngle *const outputAnglesWorldSpace)
{
  void *v7; // rax
  void *v8; // rbx
  char v9; // al
  vec_t v11; // xmm1_4
  bool v12; // [rsp-4Ch] [rbp-4Ch]
  QAngle v13; // [rsp-48h] [rbp-48h] BYREF
  __int64 v14; // [rsp-38h] [rbp-38h]
  QAngle v15; // 0:kr00_12.12

  if ( pObject == 0 )
    return 0;
  v7 = __dynamic_cast(pObject, &`typeinfo for'CBaseEntity, &`typeinfo for'IPlayerPickupVPhysics, -2);
  v8 = v7;
  if ( v7 == 0 )
    return 0;
  v9 = (*(*v7 + 32LL))(v7, pPlayer);
  if ( v9 == 0 )
    return 0;
  v12 = v9;
  *&v13.x = (*(*v8 + 40LL))(v8);
  v13.z = v11;
  v15 = TransformAnglesToWorldSpace(&v13, localToWorld);
  v14 = *&v15.x;
  outputAnglesWorldSpace->z = v15.z;
  outputAnglesWorldSpace->x = v15.x;
  outputAnglesWorldSpace->y = *(&v14 + 1);
  return v12;
}


// Pickup_ForcePhysGunOpen  (line 110, @0x00000000023250c0, libserver.so)
// calls: __dynamic_cast
// globals: `typeinfo for'IPlayerPickupVPhysics
bool __fastcall Pickup_ForcePhysGunOpen(CBaseEntity *pObject, CBasePlayer *pPlayer)
{
  void *v3; // rax

  if ( pObject == 0 )
    return 0;
  v3 = __dynamic_cast(pObject, &`typeinfo for'CBaseEntity, &`typeinfo for'IPlayerPickupVPhysics, -2);
  return v3 != 0 && (*(*v3 + 48LL))(v3, pPlayer);
}


// Pickup_PhysGunLaunchAngularImpulse  (line 120, @0x0000000002325120, libserver.so)  // inlines: RandomAngularImpulse
// calls: __dynamic_cast, Vector::Random
// globals: `typeinfo for'IPlayerPickupVPhysics
AngularImpulse __fastcall Pickup_PhysGunLaunchAngularImpulse(CBaseEntity *pObject, PhysGunForce_t reason)
{
  vec_t v2; // xmm2_4
  void *v4; // rax
  void *v5; // rbx
  vec_t v8; // xmm1_4
  Vector v9; // [rsp+10h] [rbp-20h] BYREF
  AngularImpulse result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( pObject != 0
    && (v4 = __dynamic_cast(pObject, &`typeinfo for'CBaseEntity, &`typeinfo for'IPlayerPickupVPhysics, -2),
        v5 = v4,
        v4 != 0)
    && (*(*v4 + 64LL))(v4, reason) != 0 )
  {
    *&v9.x = (*(*v5 + 56LL))(v5);
    v9.z = v8;
  }
  else
  {
    Vector::Random(&v9, 600.0, v2);
  }
  *&result.x = *&v9.x;
  result.z = v9.z;
  return result;
}


// Pickup_DefaultPhysGunLaunchVelocity  (line 130, @0x00000000023251b0, libserver.so)  // inlines: VectorMultiply, operator*
// callers: CDefaultPlayerPickupVPhysics::PhysGunLaunchVelocity
__m128i __fastcall Pickup_DefaultPhysGunLaunchVelocity(const Vector *const vecForward, float a2, float flMass)
{
  __m128i v4; // [rsp+0h] [rbp-10h] BYREF

  v4.m128i_i64[0] = __PAIR64__(vecForward->y * a2, a2 * vecForward->x);
  return _mm_loadl_epi64(&v4);
}


// Pickup_PhysGunLaunchVelocity  (line 153, @0x00000000023251e0, libserver.so)  // inlines: Pickup_DefaultPhysGunLaunchVelocity, VectorMultiply, operator*
// calls: CBaseEntity::VPhysicsGetObject, __dynamic_cast
// globals: `typeinfo for'IPlayerPickupVPhysics
Vector __fastcall Pickup_PhysGunLaunchVelocity(
        CBaseEntity *pObject,
        const Vector *const vecForward,
        PhysGunForce_t reason)
{
  IPhysicsObject *Object; // r12
  void *v7; // rax
  void *v8; // rbx
  double (__fastcall *v9)(void *, const Vector *const); // r14
  vec_t v10; // xmm1_4
  float v13; // xmm0_4
  const Vector v14; // [rsp+10h] [rbp-30h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( pObject != 0 && (Object = CBaseEntity::VPhysicsGetObject(pObject)) != 0 )
  {
    v7 = __dynamic_cast(pObject, &`typeinfo for'CBaseEntity, &`typeinfo for'IPlayerPickupVPhysics, -2);
    v8 = v7;
    if ( v7 != 0 && (*(*v7 + 64LL))(v7, reason) != 0 )
    {
      v9 = *(*v8 + 72LL);
      (*(*Object + 208LL))(Object);
      *&v14.x = v9(v8, vecForward);
      v14.z = v10;
    }
    else
    {
      v13 = (*(*Object + 208LL))(Object);
      v14.y = vecForward->y * v13;
      v14.z = vecForward->z * v13;
      v14.x = v13 * vecForward->x;
    }
  }
  else
  {
    v14 = vec3_origin;
  }
  *&result.x = *&v14.x;
  result.z = v14.z;
  return result;
}


// Pickup_ShouldPuntUseLaunchForces  (line 179, @0x00000000023252e0, libserver.so)
// calls: __dynamic_cast
// globals: `typeinfo for'IPlayerPickupVPhysics
bool __fastcall Pickup_ShouldPuntUseLaunchForces(CBaseEntity *pObject, PhysGunForce_t reason)
{
  void *v3; // rax

  if ( pObject == 0 )
    return 0;
  v3 = __dynamic_cast(pObject, &`typeinfo for'CBaseEntity, &`typeinfo for'IPlayerPickupVPhysics, -2);
  return v3 != 0 && (*(*v3 + 64LL))(v3, reason);
}


// OnPhysGunPullObject  (line 189, @0x0000000002325340, libserver.so)
// calls: __dynamic_cast
// globals: `typeinfo for'IPlayerPickupVPhysics
bool __fastcall OnPhysGunPullObject(CBasePlayer *pPlayer, CBaseEntity *pObject, int nHandID)
{
  void *v5; // rax

  return pObject == 0
      || (v5 = __dynamic_cast(pObject, &`typeinfo for'CBaseEntity, &`typeinfo for'IPlayerPickupVPhysics, -2)) == 0
      || (*(*v5 + 80LL))(v5, pPlayer, nHandID);
}


