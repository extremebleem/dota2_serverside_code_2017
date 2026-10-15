
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// AvoidActors::operator()  (line 21, @0x0000000002f1af20, libserver.so)  // inlines: AddToTail, CopyConstruct<CBaseCombatCharacter*>, Element, GrowMemory, IsZero, NormalizeInPlace, VectorAdd, VectorSubtract, WorldAlignMaxs, WorldAlignMins, operator*=, operator+, operator+=, operator-, operator[]
// calls: CBaseEntity::GetAbsOrigin, IsBoxIntersectingBox, VectorNormalize, IntersectRayWithSphere, CUtlMemory<CBaseCombatCharacter*, int>::Grow
bool __fastcall AvoidActors::operator()(AvoidActors *const this, CBaseCombatCharacter *obj)
{
  const Vector *AbsOrigin; // rax
  CCollisionProperty *m_pCollision; // rdi
  float z; // xmm0_4
  float *v8; // rax
  CCollisionProperty *v9; // rdi
  vec_t v10; // xmm3_4
  vec_t v11; // xmm1_4
  const Vector *v12; // rax
  vec_t v13; // xmm1_4
  vec_t v14; // xmm2_4
  vec_t v15; // xmm0_4
  CBaseCombatCharacter *m_owner; // rax
  CCollisionProperty *v17; // rdi
  const Vector *v18; // rax
  CCollisionProperty *v19; // rdi
  Vector *m_dest; // rdx
  vec_t v21; // xmm1_4
  vec_t v22; // xmm0_4
  const Vector *v23; // rax
  vec_t v24; // xmm1_4
  vec_t v25; // xmm0_4
  Vector *v26; // rax
  vec_t v27; // xmm2_4
  vec_t v28; // xmm0_4
  float v29; // xmm1_4
  Vector *v30; // rax
  float y; // xmm0_4
  float v32; // xmm2_4
  vec_t v33; // xmm0_4
  vec_t v34; // xmm2_4
  Vector *v35; // rax
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm0_4
  float v39; // xmm2_4
  float v40; // xmm0_4
  Vector *v41; // rax
  __int64 m_Size; // r13
  CBaseCombatCharacter **v43; // rax
  vec_t v44; // xmm1_4
  float idealDistance; // [rsp+4h] [rbp-CCh]
  float idealDistancea; // [rsp+4h] [rbp-CCh]
  float sphereRadius; // [rsp+8h] [rbp-C8h]
  float x; // [rsp+Ch] [rbp-C4h]
  float t1; // [rsp+18h] [rbp-B8h] BYREF
  float t2; // [rsp+1Ch] [rbp-B4h] BYREF
  Vector vObjMins; // [rsp+20h] [rbp-B0h] BYREF
  Vector vObjMaxs; // [rsp+30h] [rbp-A0h] BYREF
  Vector vOwnerMins; // [rsp+40h] [rbp-90h] BYREF
  Vector vOwnerMaxs; // [rsp+50h] [rbp-80h] BYREF
  Vector vDelta; // [rsp+60h] [rbp-70h] BYREF
  Vector rayOrigin; // [rsp+70h] [rbp-60h] BYREF
  Vector rayDelta; // [rsp+80h] [rbp-50h] BYREF
  Vector sphereCenter; // [rsp+90h] [rbp-40h] BYREF
  Vector sphereToDest; // [rsp+A0h] [rbp-30h] BYREF

  if ( obj != 0
    && this->m_owner != obj
    && obj->m_iTeamNum.m_Value == this->m_owner->m_iTeamNum.m_Value
    && (*(obj->m_Collision._vptr_ICollideable + 14))(&obj->m_Collision) != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(obj);
    m_pCollision = obj->m_pCollision;
    x = AbsOrigin->x;
    z = AbsOrigin->z;
    sphereRadius = AbsOrigin->y;
    if ( m_pCollision != 0 )
    {
      idealDistance = AbsOrigin->z;
      v8 = (*(m_pCollision->_vptr_ICollideable + 1))(m_pCollision);
      v9 = obj->m_pCollision;
      z = idealDistance;
      v10 = x + *v8;
      v11 = v8[2] + idealDistance;
      vObjMins.y = sphereRadius + v8[1];
      vObjMins.x = v10;
      vObjMins.z = v11;
      if ( v9 != 0 )
      {
        v12 = (*(v9->_vptr_ICollideable + 2))(v9);
        z = idealDistance;
      }
      else
      {
        v12 = &vec3_origin;
      }
    }
    else
    {
      v12 = &vec3_origin;
      v44 = vec3_origin.z + z;
      vObjMins.y = sphereRadius + vec3_origin.y;
      vObjMins.z = v44;
      vObjMins.x = x + vec3_origin.x;
    }
    v13 = sphereRadius + v12->y;
    v14 = x + v12->x;
    v15 = z + v12->z;
    m_owner = this->m_owner;
    vObjMaxs.y = v13;
    vObjMaxs.x = v14;
    vObjMaxs.z = v15;
    v17 = m_owner->m_pCollision;
    if ( v17 != 0 )
    {
      v18 = (*(v17->_vptr_ICollideable + 1))(v17);
      v19 = this->m_owner->m_pCollision;
    }
    else
    {
      v19 = 0;
      v18 = &vec3_origin;
    }
    m_dest = this->m_dest;
    v21 = m_dest->y + v18->y;
    v22 = m_dest->z + v18->z;
    vOwnerMins.x = m_dest->x + v18->x;
    vOwnerMins.y = v21;
    vOwnerMins.z = v22;
    if ( v19 != 0 )
    {
      v23 = (*(v19->_vptr_ICollideable + 2))(v19);
      m_dest = this->m_dest;
    }
    else
    {
      v23 = &vec3_origin;
    }
    v24 = m_dest->y + v23->y;
    v25 = m_dest->z + v23->z;
    vOwnerMaxs.x = m_dest->x + v23->x;
    vOwnerMaxs.y = v24;
    vOwnerMaxs.z = v25;
    if ( IsBoxIntersectingBox(&vOwnerMins, &vOwnerMaxs, &vObjMins, &vObjMaxs) )
    {
      v26 = this->m_dest;
      v27 = x - v26->x;
      v28 = sphereRadius - v26->y;
      vDelta.z = 0.0;
      vDelta.x = v27;
      v29 = (((vObjMaxs.x - vObjMins.x) + (vOwnerMaxs.x - vOwnerMins.x)) * 0.5) * this->m_scale;
      vDelta.y = v28;
      idealDistancea = v29;
      if ( VectorNormalize(&vDelta) <= v29 )
      {
        rayOrigin = this->m_origin;
        v30 = this->m_dest;
        y = v30->y;
        v32 = v30->x;
        sphereCenter.x = x;
        v33 = y - this->m_origin.y;
        sphereCenter.y = sphereRadius;
        v34 = v32 - this->m_origin.x;
        sphereCenter.z = 0.0;
        rayDelta.z = 0.0;
        rayDelta.y = v33;
        rayDelta.x = v34;
        rayOrigin.z = 0.0;
        if ( IntersectRayWithSphere(&rayOrigin, &rayDelta, &sphereCenter, idealDistancea, &t1, &t2) )
        {
          v35 = this->m_dest;
          v36 = v35->x;
          v37 = v35->y;
          sphereToDest.z = 0.0;
          v38 = v36 - sphereCenter.x;
          v39 = v37 - sphereCenter.y;
          sphereToDest.x = v38;
          sphereToDest.y = v39;
          if ( v38 <= -0.0099999998 || v38 >= 0.0099999998 || v39 <= -0.0099999998 || v39 >= 0.0099999998 )
          {
            v40 = VectorNormalize(&sphereToDest);
            v41 = this->m_dest;
            sphereToDest.x = sphereToDest.x * (idealDistancea - v40);
            sphereToDest.y = sphereToDest.y * (idealDistancea - v40);
            sphereToDest.z = (idealDistancea - v40) * sphereToDest.z;
            v41->x = sphereToDest.x + v41->x;
            v41->y = v41->y + sphereToDest.y;
            v41->z = v41->z + sphereToDest.z;
            m_Size = this->m_avoidedActors.m_Size;
            if ( m_Size == this->m_avoidedActors.m_Memory.m_nAllocationCount )
              CUtlMemory<CBaseCombatCharacter *,int>::Grow(&this->m_avoidedActors.m_Memory, 1);
            ++this->m_avoidedActors.m_Size;
            v43 = &this->m_avoidedActors.m_Memory.m_pMemory[m_Size];
            if ( v43 != 0 )
              *v43 = obj;
          }
        }
      }
    }
  }
  return 1;
}


