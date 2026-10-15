
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDefaultPlayerPickupVPhysics::OnAttemptPhysGunPickup  (line 81, @0x0000000001fea550, libserver.so)
bool __fastcall CDefaultPlayerPickupVPhysics::OnAttemptPhysGunPickup(
        CDefaultPlayerPickupVPhysics *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunPickup_t reason)
{
  return 1;
}


// CDefaultPlayerPickupVPhysics::OnFailedPhysGunPickup  (line 82, @0x0000000001ea0f60, libserver.so)
CBaseEntity *__fastcall CDefaultPlayerPickupVPhysics::OnFailedPhysGunPickup(CDefaultPlayerPickupVPhysics *const this)
{
  return 0;
}


// CDefaultPlayerPickupVPhysics::OnPhysGunPickup  (line 83, @0x0000000001fea560, libserver.so)
void __fastcall CDefaultPlayerPickupVPhysics::OnPhysGunPickup(
        CDefaultPlayerPickupVPhysics *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunPickup_t reason,
        int nVRControllerID)
{
  ;
}


// CDefaultPlayerPickupVPhysics::OnPhysGunDrop  (line 84, @0x0000000001fea570, libserver.so)
void __fastcall CDefaultPlayerPickupVPhysics::OnPhysGunDrop(
        CDefaultPlayerPickupVPhysics *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunDrop_t reason,
        int nVRControllerID)
{
  ;
}


// CDefaultPlayerPickupVPhysics::HasPreferredCarryAnglesForPlayer  (line 85, @0x0000000001fea580, libserver.so)
bool __fastcall CDefaultPlayerPickupVPhysics::HasPreferredCarryAnglesForPlayer(
        CDefaultPlayerPickupVPhysics *const this,
        CBasePlayer *pPlayer)
{
  return 0;
}


// CDefaultPlayerPickupVPhysics::PreferredCarryAngles  (line 86, @0x0000000001fea590, libserver.so)
QAngle __fastcall CDefaultPlayerPickupVPhysics::PreferredCarryAngles(CDefaultPlayerPickupVPhysics *const this)
{
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_angle.x;
  result.z = vec3_angle.z;
  return result;
}


// CDefaultPlayerPickupVPhysics::ForcePhysgunOpen  (line 87, @0x0000000001ea0f70, libserver.so)
bool __fastcall CDefaultPlayerPickupVPhysics::ForcePhysgunOpen(
        CDefaultPlayerPickupVPhysics *const this,
        CBasePlayer *pPlayer)
{
  return 0;
}


// CDefaultPlayerPickupVPhysics::PhysGunLaunchAngularImpulse  (line 88, @0x0000000001fec0e0, libserver.so)  // inlines: RandomAngularImpulse
// calls: Vector::Random
AngularImpulse __fastcall CDefaultPlayerPickupVPhysics::PhysGunLaunchAngularImpulse(
        CDefaultPlayerPickupVPhysics *const this)
{
  vec_t v1; // xmm2_4
  Vector v4; // [rsp+10h] [rbp-10h] BYREF
  AngularImpulse result; // 0:xmm0_8.8,8:xmm1_4.4

  Vector::Random(&v4, 600.0, v1);
  *&result.x = *&v4.x;
  result.z = v4.z;
  return result;
}


// CDefaultPlayerPickupVPhysics::ShouldPuntUseLaunchForces  (line 89, @0x0000000001ea0f80, libserver.so)
bool __fastcall CDefaultPlayerPickupVPhysics::ShouldPuntUseLaunchForces(
        CDefaultPlayerPickupVPhysics *const this,
        PhysGunForce_t reason)
{
  return 0;
}


// CDefaultPlayerPickupVPhysics::PhysGunLaunchVelocity  (line 90, @0x0000000001ea1eb0, libserver.so)
// calls: Pickup_DefaultPhysGunLaunchVelocity
double __fastcall CDefaultPlayerPickupVPhysics::PhysGunLaunchVelocity(
        CDefaultPlayerPickupVPhysics *const this,
        const Vector *const vecForward,
        double a3,
        float flMass)
{
  Vector v5; // 0:xmm0_8.8,8:xmm1_4.4

  v5 = Pickup_DefaultPhysGunLaunchVelocity(vecForward, flMass);
  return *&v5.x;
}


// CDefaultPlayerPickupVPhysics::OnAttemptPhysGunPull  (line 94, @0x0000000001ea0f90, libserver.so)
bool __fastcall CDefaultPlayerPickupVPhysics::OnAttemptPhysGunPull(
        CDefaultPlayerPickupVPhysics *const this,
        CBasePlayer *pPhysGunUser,
        int nHandID)
{
  return 1;
}


