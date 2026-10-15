// Reconstructed from DWARF by pahole; not original source.

// src/game/server/waterbullet.cpp:29
class C_CWaterBullet_MapInstall {
	C_CWaterBullet_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CWaterBullet::GetDataDescMap  (line 21, @0x00000000023f8ab0, libserver.so)
// globals: CWaterBullet::m_DataMap
datamap_t *__fastcall CWaterBullet::GetDataDescMap(CWaterBullet *const this)
{
  return &CWaterBullet::m_DataMap;
}


// CWaterBullet::AddDatadescMetadataKeys  (line 21, @0x0000000002409ef0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CWaterBullet::GetEntityClass(void)
void __fastcall CWaterBullet::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CWaterBullet::GetEntityClass);
}


// CWaterBullet::GetBaseMap  (line 21, @0x0000000002409f10, libserver.so)
datamap_t *__cdecl CWaterBullet::GetBaseMap()
{
  return &CBaseAnimating::m_DataMap;
}


// DataMapInit<CWaterBullet>  (line 21, @0x000000000240b410, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_13.cpp
// strings: "CWaterBullet"
// globals: `guard variable for'DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder, `guard variable for'DataMapInit<CWaterBullet>(CWaterBullet *)::dataDesc, CWaterBullet::GetEntityClass(void), CWaterBullet::m_DataMap, DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CWaterBullet>(CWaterBullet *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder) != 0 )
  {
    DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_pszBase = "CWaterBullet";
    DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder,
      &_dso_handle);
  }
  CWaterBullet::m_DataMap.baseMap = &CBaseAnimating::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CWaterBullet>(CWaterBullet *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CWaterBullet>(CWaterBullet *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_nLenBase + 6);
    strcpy(stpcpy(v2, DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_pszBase), "Touch");
    m_Size = DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Size == DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CWaterBullet>(CWaterBullet *)::dataDesc[1].fieldName = v2;
    v6 = operator new[](DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v6, DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_pszBase), "BulletThink");
    v7 = DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Size == DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CWaterBullet>(CWaterBullet *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CWaterBullet>(CWaterBullet *)::dataDesc[2].fieldName = v6;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CWaterBullet>(CWaterBullet *)::dataDesc);
  }
  CWaterBullet::m_DataMap.dataNumFields = 2;
  CWaterBullet::m_DataMap.dataDesc = &DataMapInit<CWaterBullet>(CWaterBullet *)::dataDesc[1];
  AddDatadescMetadataKeys(&CWaterBullet::m_DataMap, CWaterBullet::GetEntityClass);
  return &CWaterBullet::m_DataMap;
}


// CWaterBullet::YouForgotToImplementOrDeclareServerClass  (line 29, @0x00000000023f8ac0, libserver.so)
int __fastcall CWaterBullet::YouForgotToImplementOrDeclareServerClass(CWaterBullet *const this)
{
  return 0;
}


// CWaterBullet::GetServerClass  (line 29, @0x00000000023fd8a0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CWaterBullet::GetServerClass(CWaterBullet *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CWaterBullet::Precache  (line 35, @0x000000000240fc30, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModel
// strings: "models/weapons/w_bullet.vmdl"
void __fastcall CWaterBullet::Precache(CWaterBullet *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModel("models/weapons/w_bullet.vmdl", pContext);
}


// CWaterBullet::Spawn  (line 45, @0x00000000023fbe20, libserver.so)  // inlines: SetCollisionBounds, SetCollisionGroup, SetGravity, SetSolid, UTIL_SetSize, curtime
// calls: CBaseAnimating::Spawn, CCollisionProperty::EnableTouchPersistsNotification, CBaseModelEntity::SetModel, CCollisionProperty::SetCollisionBounds, CBaseEntity::SetMoveType, CCollisionProperty::SetCollisionGroup, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// strings: "models/weapons/w_bullet.vmdl"
// globals: CWaterBullet::BulletThink(void)
void __fastcall CWaterBullet::Spawn(CWaterBullet *const this, const CEntityKeyValues *pKeyValues)
{
  double v3; // xmm1_8
  double v4; // xmm0_8
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseAnimating::Spawn(this, pKeyValues);
  CCollisionProperty::EnableTouchPersistsNotification(&this->m_Collision);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 2);
  CBaseModelEntity::SetModel(this, "models/weapons/w_bullet.vmdl");
  CCollisionProperty::SetCollisionBounds(&this->m_Collision, &vec3_origin, &vec3_origin);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_FLY, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  this->m_flGravity = 0.0;
  CCollisionProperty::SetCollisionGroup(&this->m_Collision, 5);
  this->m_pfnTouch.__pfn = (&stru_10 + 881);
  this->m_pfnTouch.__delta = 0;
  CBaseEntity::ThinkSet(this, CWaterBullet::BulletThink, 0.0, 0, 0);
  v4 = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v4 = LODWORD(v5->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v4, v3, 0);
}


// CWaterBullet::Init  (line 65, @0x0000000002409f20, libserver.so)  // inlines: GetAbsVelocity, VectorMultiply, operator*
// calls: CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsVelocity, CBaseEntity::CalcAbsoluteVelocity, VectorAngles, CBaseEntity::SetAbsAngles
void __fastcall CWaterBullet::Init(CWaterBullet *const this, const Vector *const vecOrigin, const Vector *const vecDir)
{
  vec_t v5; // xmm1_4
  vec_t v6; // xmm0_4
  QAngle angles; // [rsp+0h] [rbp-20h] BYREF

  CBaseEntity::SetAbsOrigin(this, vecOrigin);
  v5 = vecDir->z * 1500.0;
  v6 = 1500.0 * vecDir->x;
  angles.y = vecDir->y * 1500.0;
  angles.z = v5;
  angles.x = v6;
  CBaseEntity::SetAbsVelocity(this, &angles);
  if ( (this->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(this);
  VectorAngles(&this->m_vecAbsVelocity.m_Value, &angles);
  CBaseEntity::SetAbsAngles(this, &angles);
}


// CWaterBullet::BulletThink  (line 77, @0x00000000023fb5e0, libserver.so)  // inlines: VectorMultiply, curtime, operator*
// calls: CBaseEntity::SetNextThink, CBaseEntity::GetAbsAngles, AngleVectors, CBaseEntity::SetAbsVelocity
void __fastcall CWaterBullet::BulletThink(CWaterBullet *const this)
{
  double v1; // xmm1_8
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v5; // xmm0_8
  const QAngle *AbsAngles; // rax
  Vector forward; // [rsp+0h] [rbp-30h] BYREF
  Vector vAbsVelocity; // [rsp+10h] [rbp-20h] BYREF

  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v5 = v3->m_flCurrentTime + 0.05;
  }
  else
  {
    *&v5 = 1028443341;
  }
  CBaseEntity::SetNextThink(this, v5, v1, 0);
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  AngleVectors(AbsAngles, &forward, 0, 0);
  vAbsVelocity.y = forward.y * 1500.0;
  vAbsVelocity.z = forward.z * 1500.0;
  vAbsVelocity.x = 1500.0 * forward.x;
  CBaseEntity::SetAbsVelocity(this, &vAbsVelocity);
}


// CWaterBullet::Touch  (line 97, @0x00000000024028e0, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetAbsVelocity, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+, operator-
// calls: CBaseEntity::CalcAbsoluteVelocity, VectorNormalize, CBaseEntity::GetAbsOrigin, CGameTrace::Init, CGamePhysicsQueryInterface::TraceRay, UTIL_ImpactTrace, UTIL_Remove
// write access to const memory has been detected, the output may be wrong!
void __fastcall CWaterBullet::Touch(CWaterBullet *const this, CBaseEntity *pOther)
{
  const Vector *AbsOrigin; // rax
  unsigned int v4; // xmm4_4
  unsigned int v5; // xmm3_4
  const Vector *v6; // rax
  float v7; // xmm2_4
  float v8; // xmm6_4
  float v9; // xmm0_4
  float m_fValue; // xmm7_4
  float speed; // [rsp+4h] [rbp-13Ch]
  float v12; // [rsp+14h] [rbp-12Ch]
  float v13; // [rsp+14h] [rbp-12Ch]
  float v14; // [rsp+14h] [rbp-12Ch]
  float v15; // [rsp+18h] [rbp-128h]
  float v16; // [rsp+18h] [rbp-128h]
  float v17; // [rsp+18h] [rbp-128h]
  float v18; // [rsp+1Ch] [rbp-124h]
  float v19; // [rsp+1Ch] [rbp-124h]
  float v20; // [rsp+1Ch] [rbp-124h]
  Vector vecDir; // [rsp+20h] [rbp-120h] BYREF
  Ray_t ray; // [rsp+30h] [rbp-110h] BYREF
  trace_t tr; // [rsp+80h] [rbp-C0h] BYREF
  Vector v24; // 0:^8.12

  if ( (this->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(this);
  vecDir = this->m_vecAbsVelocity;
  speed = VectorNormalize(&vecDir);
  v18 = vecDir.x * 8.0;
  v15 = vecDir.y * 8.0;
  v12 = 8.0 * vecDir.z;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  *&v4 = AbsOrigin->y - v15;
  v16 = vecDir.y * speed;
  *&v5 = AbsOrigin->z - v12;
  v13 = vecDir.x * speed;
  v24.x = AbsOrigin->x - v18;
  *&v24.y = __PAIR64__(v5, v4);
  v19 = speed * vecDir.z;
  v6 = CBaseEntity::GetAbsOrigin(this);
  v7 = v13 + v6->x;
  v8 = v16 + v6->y;
  v9 = v19 + v6->z;
  memset(&tr.m_ShapeAttributes, 0, 31);
  v14 = v7;
  v17 = v8;
  v20 = v9;
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_Delta.x = v14 - v24.x;
  ray.m_Delta.y = v17 - v24.y;
  ray.m_Delta.z = v20 - v24.z;
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Start.Vector = v24;
  ray.m_flRadius = m_fValue;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  *&stru_8.gap0 = 1593347;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, 0, &tr);
  UTIL_ImpactTrace(&tr, 2, 0);
  UTIL_Remove(this);
}


