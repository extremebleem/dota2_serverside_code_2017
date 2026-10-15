
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRagdollMagnet::GetDataDescMap  (line 16, @0x0000000002187890, libserver.so)
// globals: CRagdollMagnet::m_DataMap
datamap_t *__fastcall CRagdollMagnet::GetDataDescMap(CRagdollMagnet *const this)
{
  return &CRagdollMagnet::m_DataMap;
}


// CRagdollMagnet::AddDatadescMetadataKeys  (line 16, @0x00000000021a0c40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CRagdollMagnet::GetEntityClass(void)
void __fastcall CRagdollMagnet::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CRagdollMagnet::GetEntityClass);
}


// CRagdollMagnet::GetBaseMap  (line 16, @0x00000000021a0c60, libserver.so)
datamap_t *__cdecl CRagdollMagnet::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CRagdollMagnet>  (line 16, @0x00000000021a0c70, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CRagdollMagnet"
// globals: `guard variable for'DataMapInit<CRagdollMagnet>(CRagdollMagnet *)::nameHolder, CRagdollMagnet::GetEntityClass(void), CRagdollMagnet::m_DataMap, DataMapInit<CRagdollMagnet>(CRagdollMagnet *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CRagdollMagnet>(CRagdollMagnet *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CRagdollMagnet>(CRagdollMagnet *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRagdollMagnet>(CRagdollMagnet *)::nameHolder) != 0 )
  {
    DataMapInit<CRagdollMagnet>(CRagdollMagnet *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CRagdollMagnet>(CRagdollMagnet *)::nameHolder.m_pszBase = "CRagdollMagnet";
    DataMapInit<CRagdollMagnet>(CRagdollMagnet *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CRagdollMagnet>(CRagdollMagnet *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CRagdollMagnet>(CRagdollMagnet *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CRagdollMagnet>(CRagdollMagnet *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRagdollMagnet>(CRagdollMagnet *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CRagdollMagnet>(CRagdollMagnet *)::nameHolder,
      &_dso_handle);
  }
  CRagdollMagnet::m_DataMap.dataNumFields = 6;
  CRagdollMagnet::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CRagdollMagnet::m_DataMap.dataDesc = &DataMapInit<CRagdollMagnet>(CRagdollMagnet *)::dataDesc[1];
  AddDatadescMetadataKeys(&CRagdollMagnet::m_DataMap, CRagdollMagnet::GetEntityClass);
  return &CRagdollMagnet::m_DataMap;
}


// CRagdollMagnet::InputEnable  (line 31, @0x00000000021878a0, libserver.so)  // inlines: Enable
void __fastcall CRagdollMagnet::InputEnable(CRagdollMagnet *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled = 0;
}


// CRagdollMagnet::InputDisable  (line 40, @0x00000000021878b0, libserver.so)  // inlines: Enable
void __fastcall CRagdollMagnet::InputDisable(CRagdollMagnet *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled = 1;
}


// CRagdollMagnet::FindBestMagnet  (line 59, @0x00000000021a12e0, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, operator!=
// calls: CGameEntitySystem::FindEntityByClassname, CRagdollMagnet::DistToPoint
// callers: CBaseCombatCharacter::Event_Killed, NextBotCombatCharacter::BecomeRagdoll
// strings: "phys_ragdollmagnet"
CRagdollMagnet *__fastcall CRagdollMagnet::FindBestMagnet(CBaseEntity *pNPC)
{
  CRagdollMagnet *EntityByClassname; // rax
  CRagdollMagnet *v2; // r13
  float v4; // r15d
  UtlSymLargeId_t m_Id; // rdx
  vec_t v7; // xmm1_4
  __m128 v8; // xmm0
  __m128 v9; // xmm1
  __m128 v10; // xmm2
  __m128i v11; // xmm2
  CRagdollMagnet *pMagnet; // [rsp+8h] [rbp-48h]
  Vector vecPoint; // [rsp+10h] [rbp-40h] BYREF

  EntityByClassname = 0;
  v2 = 0;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(0x7F7FFFFFu));
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(
                          g_pGameEntitySystem,
                          EntityByClassname,
                          "phys_ragdollmagnet");
    if ( EntityByClassname == 0 )
      break;
    if ( !EntityByClassname->m_bDisabled )
    {
      m_Id = EntityByClassname->m_target.u.m_Id;
      if ( m_Id != 0 )
      {
        if ( m_Id == pNPC->m_pEntity->m_name.u.m_Id )
          return EntityByClassname;
      }
      else
      {
        pMagnet = EntityByClassname;
        *&vecPoint.x = (*(pNPC->_vptr_IHandleEntity + 62))(pNPC);
        vecPoint.z = v7;
        v8.m128_f32[0] = CRagdollMagnet::DistToPoint(pMagnet, &vecPoint);
        EntityByClassname = pMagnet;
        if ( v4 > v8.m128_f32[0] )
        {
          v9.m128_i32[0] = LODWORD(pMagnet->m_radius);
          v10 = _mm_cmpgt_ss(v8, v9);
          v11 = _mm_or_ps(_mm_andnot_ps(v10, v8), _mm_and_ps(_mm_cvtsi32_si128(LODWORD(v4)), v10));
          if ( v9.m128_f32[0] >= v8.m128_f32[0] )
            v2 = pMagnet;
          v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
        }
      }
    }
  }
  return v2;
}


// CRagdollMagnet::GetForceVector  (line 112, @0x00000000021a0d40, libserver.so)  // inlines: GetBool, GetClassNameAsCStr, GetClassname, GetInt, String, VectorMultiply, VectorSubtract, operator*, operator-, operator=
// calls: CBaseEntity::GetAbsOrigin, CalcClosestPointOnLineSegment, VectorNormalize, CBaseEntity::VPhysicsGetObject, Msg
// callers: CBaseCombatCharacter::Event_Killed, NextBotCombatCharacter::BecomeRagdoll
// strings: "Ragdoll magnet adding %f inches/sec to %s\n"
Vector __fastcall CRagdollMagnet::GetForceVector(CRagdollMagnet *const this, CBaseEntity *pNPC)
{
  const Vector *AbsOrigin; // r13
  vec_t v5; // xmm1_4
  float v6; // xmm1_4
  float m_force; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  vec_t v12; // xmm1_4
  const Vector *v13; // rax
  vec_t v14; // xmm2_4
  vec_t v15; // xmm0_4
  float v16; // xmm1_4
  IPhysicsObject *Object; // rax
  CEntityIdentity *m_pEntity; // rdx
  const char *m_pAsString; // r12
  float v20; // ebx
  float v21; // xmm0_4
  float v22; // [rsp+4h] [rbp-6Ch]
  float v23; // [rsp+8h] [rbp-68h]
  vec_t vecForceToApply; // [rsp+Ch] [rbp-64h]
  Vector vecForceDir; // [rsp+20h] [rbp-50h] BYREF
  Vector vecForce; // [rsp+30h] [rbp-40h] BYREF
  Vector P; // [rsp+40h] [rbp-30h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( (this->m_spawnflags.m_Value & 2) != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    *&P.x = (*(pNPC->_vptr_IHandleEntity + 62))(pNPC);
    P.z = v5;
    CalcClosestPointOnLineSegment(&P, AbsOrigin, &this->m_axis, &vecForce, 0);
    *&P.x = (*(pNPC->_vptr_IHandleEntity + 62))(pNPC);
    P.z = v6;
    vecForceDir.y = vecForce.y - P.y;
    vecForceDir.z = vecForce.z - v6;
    vecForceDir.x = vecForce.x - P.x;
    VectorNormalize(&vecForceDir);
    m_force = this->m_force;
    v8 = vecForceDir.x * m_force;
    v9 = vecForceDir.y * m_force;
    result.z = m_force * vecForceDir.z;
    if ( ai_debug_ragdoll_magnets.m_pParent->m_Value.m_nValue == 0 )
      goto LABEL_3;
  }
  else
  {
    *&P.x = (*(pNPC->_vptr_IHandleEntity + 62))(pNPC);
    P.z = v12;
    v13 = CBaseEntity::GetAbsOrigin(this);
    v14 = v13->x - P.x;
    v15 = v13->z - P.z;
    vecForce.y = v13->y - P.y;
    vecForce.x = v14;
    vecForce.z = v15;
    VectorNormalize(&vecForce);
    v16 = this->m_force;
    v8 = vecForce.x * v16;
    v9 = vecForce.y * v16;
    result.z = v16 * vecForce.z;
    if ( ai_debug_ragdoll_magnets.m_pParent->m_Value.m_nValue == 0 )
      goto LABEL_3;
  }
  v22 = v8;
  v23 = v9;
  vecForceToApply = result.z;
  Object = CBaseEntity::VPhysicsGetObject(pNPC);
  result.z = vecForceToApply;
  v9 = v23;
  v8 = v22;
  if ( Object != 0 )
  {
    m_pEntity = pNPC->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    v20 = this->m_force;
    v21 = (*(*Object + 208LL))(Object);
    Msg("Ragdoll magnet adding %f inches/sec to %s\n", m_pAsString, (v20 / v21));
    v8 = v22;
    v9 = v23;
    result.z = vecForceToApply;
  }
LABEL_3:
  *&result.x = __PAIR64__(LODWORD(v9), LODWORD(v8));
  return result;
}


// CRagdollMagnet::DistToPoint  (line 158, @0x00000000021a0f70, libserver.so)  // inlines: DistTo, Dot, DotProduct, FastSqrt, GetAxisVector, GetPointSideExact, InitFromPointAndNormal, Length, NormalizeInPlace, PointInFront, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, VectorVectors
// callers: CRagdollMagnet::FindBestMagnet
float __fastcall CRagdollMagnet::DistToPoint(CRagdollMagnet *const this, const Vector *const vecPoint)
{
  const Vector *AbsOrigin; // rax
  vec_t v5; // xmm2_4
  vec_t v6; // xmm0_4
  const Vector *v7; // r13
  float x; // xmm6_4
  float y; // xmm5_4
  float z; // xmm4_4
  float result; // xmm0_4
  const Vector *v12; // r13
  float v13; // xmm1_4
  const Vector *v14; // rbx
  const Vector *v15; // rax
  float hDist; // [rsp+Ch] [rbp-94h]
  Vector vecAxis; // [rsp+20h] [rbp-80h] BYREF
  Vector vecUp; // [rsp+30h] [rbp-70h] BYREF
  Vector vecRight; // [rsp+40h] [rbp-60h] BYREF
  VPlane top; // [rsp+50h] [rbp-50h] BYREF
  VPlane bottom; // [rsp+60h] [rbp-40h] BYREF
  VPlane axis; // [rsp+70h] [rbp-30h] BYREF

  if ( (this->m_spawnflags.m_Value & 2) != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v5 = this->m_axis.x - AbsOrigin->x;
    v6 = this->m_axis.z - AbsOrigin->z;
    vecAxis.y = this->m_axis.y - AbsOrigin->y;
    vecAxis.x = v5;
    vecAxis.z = v6;
    VectorNormalize(&vecAxis);
    bottom.m_Normal.z = -vecAxis.z;
    bottom.m_Normal.y = -vecAxis.y;
    bottom.m_Normal.x = -vecAxis.x;
    VectorNormalize(&bottom.m_Normal);
    bottom.m_Dist = ((this->m_axis.x * bottom.m_Normal.x) + (this->m_axis.y * bottom.m_Normal.y))
                  + (this->m_axis.z * bottom.m_Normal.z);
    v7 = CBaseEntity::GetAbsOrigin(this);
    top.m_Normal = vecAxis;
    VectorNormalize(&top.m_Normal);
    x = vecPoint->x;
    y = vecPoint->y;
    z = vecPoint->z;
    top.m_Dist = ((v7->x * top.m_Normal.x) + (v7->y * top.m_Normal.y)) + (v7->z * top.m_Normal.z);
    result = 3.4028235e38;
    if ( ((((top.m_Normal.x * x) + (top.m_Normal.y * y)) + (top.m_Normal.z * z)) - top.m_Dist) > 0.0
      && ((((x * bottom.m_Normal.x) + (y * bottom.m_Normal.y)) + (z * bottom.m_Normal.z)) - bottom.m_Dist) > 0.0 )
    {
      VectorVectors(&vecAxis, &vecRight, &vecUp);
      v12 = CBaseEntity::GetAbsOrigin(this);
      axis.m_Normal = vecRight;
      VectorNormalize(&axis.m_Normal);
      v13 = ((axis.m_Normal.x * vecPoint->x) + (axis.m_Normal.y * vecPoint->y)) + (axis.m_Normal.z * vecPoint->z);
      axis.m_Dist = ((v12->x * axis.m_Normal.x) + (v12->y * axis.m_Normal.y)) + (v12->z * axis.m_Normal.z);
      hDist = fabs(v13 - axis.m_Dist);
      v14 = CBaseEntity::GetAbsOrigin(this);
      axis.m_Normal = vecUp;
      VectorNormalize(&axis.m_Normal);
      return fmaxf(
               hDist,
               fabs(
                 (((vecPoint->x * axis.m_Normal.x) + (vecPoint->y * axis.m_Normal.y)) + (vecPoint->z * axis.m_Normal.z))
               - (((axis.m_Normal.x * v14->x) + (axis.m_Normal.y * v14->y)) + (axis.m_Normal.z * v14->z))));
    }
  }
  else
  {
    v15 = CBaseEntity::GetAbsOrigin(this);
    return fsqrt(
             (((v15->x - vecPoint->x) * (v15->x - vecPoint->x)) + ((v15->y - vecPoint->y) * (v15->y - vecPoint->y)))
           + ((v15->z - vecPoint->z) * (v15->z - vecPoint->z)));
  }
  return result;
}


