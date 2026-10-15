
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CThrustController::AddDatadescMetadataKeys  (line 30, @0x00000000022d1730, libserver.so)
void __fastcall CThrustController::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CThrustController::GetBaseMap  (line 30, @0x00000000022d1740, libserver.so)
datamap_t *__cdecl CThrustController::GetBaseMap()
{
  return 0;
}


// DataMapInit<CThrustController>  (line 30, @0x00000000022d1750, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CThrustController"
// globals: `guard variable for'DataMapInit<CThrustController>(CThrustController *)::nameHolder, CThrustController::m_DataMap, DataMapInit<CThrustController>(CThrustController *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CThrustController>(CThrustController *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CThrustController>(CThrustController *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CThrustController>(CThrustController *)::nameHolder) != 0 )
  {
    DataMapInit<CThrustController>(CThrustController *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CThrustController>(CThrustController *)::nameHolder.m_pszBase = "CThrustController";
    DataMapInit<CThrustController>(CThrustController *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CThrustController>(CThrustController *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CThrustController>(CThrustController *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CThrustController>(CThrustController *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CThrustController>(CThrustController *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CThrustController>(CThrustController *)::nameHolder,
      &_dso_handle);
  }
  CThrustController::m_DataMap.baseMap = 0;
  CThrustController::m_DataMap.dataDesc = &DataMapInit<CThrustController>(CThrustController *)::dataDesc[1];
  CThrustController::m_DataMap.dataNumFields = 3;
  return &CThrustController::m_DataMap;
}


// CPhysicsCannister::GetDataDescMap  (line 39, @0x00000000022b79f0, libserver.so)
// globals: CPhysicsCannister::m_DataMap
datamap_t *__fastcall CPhysicsCannister::GetDataDescMap(CPhysicsCannister *const this)
{
  return &CPhysicsCannister::m_DataMap;
}


// CPhysicsCannister::AddDatadescMetadataKeys  (line 39, @0x00000000022d1810, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysicsCannister::GetEntityClass(void)
void __fastcall CPhysicsCannister::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysicsCannister::GetEntityClass);
}


// CPhysicsCannister::GetBaseMap  (line 39, @0x00000000022d1830, libserver.so)
datamap_t *__cdecl CPhysicsCannister::GetBaseMap()
{
  return &CBaseCombatCharacter::m_DataMap;
}


// DataMapInit<CPhysicsCannister>  (line 39, @0x00000000022f3f90, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GetPhysObjSaveRestoreOps, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, operator new [], stpcpy, __cxa_guard_release, AddDatadescMetadataKeys, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysicsCannister"
// globals: `guard variable for'DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder, `guard variable for'DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::dataDesc, GetPhysObjSaveRestoreOps(PhysInterfaceId_t)::inited, DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder, CPhysicsCannister::GetEntityClass(void), CPhysicsCannister::m_DataMap, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysicsCannister>(CPhysicsCannister *a1)
{
  char *v1; // r12
  __int64 m_Size; // rbx
  int v3; // eax
  char **v4; // rax
  char *v5; // r12
  __int64 v6; // rbx
  int v7; // eax
  char **v8; // rax
  PhysInterfaceId_t *p_m_type; // rdx
  PhysInterfaceId_t i; // eax

  if ( `guard variable for'datamap_t * DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_pszBase = "CPhysicsCannister";
    DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder,
      &_dso_handle);
  }
  CPhysicsCannister::m_DataMap.baseMap = &CBaseCombatCharacter::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::dataDesc) != 0 )
  {
    DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::dataDesc[1].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::dataDesc[2].pSaveRestoreOps = eventFuncs;
    if ( !GetPhysObjSaveRestoreOps(PhysInterfaceId_t)::inited )
    {
      GetPhysObjSaveRestoreOps(PhysInterfaceId_t)::inited = 1;
      p_m_type = &g_PhysObjSaveRestoreOps[0].m_type;
      for ( i = PhysInterfaceId_t::PIID_UNKNOWN; i != PhysInterfaceId_t::PIID_NUM_TYPES; ++i )
      {
        *p_m_type = i;
        p_m_type += 4;
      }
    }
    DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::dataDesc[5].pSaveRestoreOps = &g_PhysObjSaveRestoreOps[5];
    v1 = operator new[](DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_nLenBase + 19);
    strcpy(stpcpy(v1, DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_pszBase), "BeginShutdownThink");
    m_Size = DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Size;
    v3 = DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Size == DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Memory, 1);
      v3 = DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Size = v3 + 1;
    v4 = &DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v4 != 0 )
      *v4 = v1;
    DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::dataDesc[20].fieldName = v1;
    v5 = operator new[](DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_nLenBase + 13);
    strcpy(stpcpy(v5, DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_pszBase), "ExplodeTouch");
    v6 = DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Size;
    v7 = DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Size == DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Memory, 1);
      v7 = DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Size = v7 + 1;
    v8 = &DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::nameHolder.m_Names.m_Memory.m_pMemory[v6];
    if ( v8 != 0 )
      *v8 = v5;
    DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::dataDesc[21].fieldName = v5;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::dataDesc);
  }
  CPhysicsCannister::m_DataMap.dataNumFields = 21;
  CPhysicsCannister::m_DataMap.dataDesc = &DataMapInit<CPhysicsCannister>(CPhysicsCannister *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysicsCannister::m_DataMap, CPhysicsCannister::GetEntityClass);
  return &CPhysicsCannister::m_DataMap;
}


// CPhysicsCannister::Spawn  (line 69, @0x0000000002302900, libserver.so)  // inlines: SetPlaybackRate, curtime
// calls: CBaseCombatCharacter::Spawn, CBaseModelEntity::SetModelFromKeyValues, CBaseCombatCharacter::SetBloodColor, CBaseEntity::SetDamageOptions, CBaseEntity::SetNextThink, CBaseEntity::GetHealth, CBaseEntity::SetAnimTime, CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::SetCycle, CBaseEntity::VPhysicsGetObject, UTIL_Remove
void __fastcall CPhysicsCannister::Spawn(CPhysicsCannister *const this, const CEntityKeyValues *pKeyValues)
{
  double v4; // xmm1_8
  float v5; // xmm1_4
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v7; // r12
  CBaseAnimatingController *BaseAnimatingController; // rax
  float v9; // xmm1_4
  int (**vptr_IHandleEntity)(...); // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseCombatCharacter::Spawn(this, pKeyValues);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  CBaseCombatCharacter::SetBloodColor(this, -1);
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v4, 0);
  if ( CBaseEntity::GetHealth(this) <= 0 )
    (*(this->_vptr_IHandleEntity + 157))(this, 25);
  m_flCurrentTime = 0.0;
  v7 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v7->m_flCurrentTime;
  }
  CBaseEntity::SetAnimTime(this, m_flCurrentTime, v5, 0);
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 0.0);
  CBaseAnimating::SetCycle(this, 0.0, v9);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_bFired = 0;
  this->m_active = 0;
  vptr_IHandleEntity[49](this);
  if ( CBaseEntity::VPhysicsGetObject(this) == 0 )
    UTIL_Remove(this);
}


// CPhysicsCannister::OnRestore  (line 98, @0x00000000022b8da0, libserver.so)
// calls: CBaseAnimatingOverlay::OnRestore
void __fastcall CPhysicsCannister::OnRestore(CPhysicsCannister *const this)
{
  IPhysicsMotionController *m_pController; // rdi

  CBaseAnimatingOverlay::OnRestore(this);
  m_pController = this->m_pController;
  if ( m_pController != 0 )
    (*(m_pController->_vptr_IPhysicsMotionController + 2))(m_pController, &this->m_thruster);
}


// CPhysicsCannister::CreateVPhysics  (line 107, @0x00000000022ba0a0, libserver.so)  // inlines: HasSpawnFlags
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel
bool __fastcall CPhysicsCannister::CreateVPhysics(CPhysicsCannister *const this)
{
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC,
    4,
    this->m_spawnflags.m_Value & 1);
  return 1;
}


// CPhysicsCannister::CalcLocalThrust  (line 115, @0x00000000022d1840, libserver.so)  // inlines: GetColumn, MatrixGetColumn, VectorAdd, VectorMultiply, operator*, operator+, operator=
// calls: CBaseAnimating::LookupAttachment, VectorNormalize
// callers: CPhysicsCannister::CannisterActivate
// strings: "nozzle"
Vector __fastcall CPhysicsCannister::CalcLocalThrust(CPhysicsCannister *const this, const Vector *const offset)
{
  void (__fastcall *v4)(CPhysicsCannister *const, _QWORD, matrix3x4_t *); // r13
  AttachmentHandle_t v5; // al
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  vec_t v9; // xmm1_4
  vec_t v10; // xmm0_4
  Vector thrustDirection; // [rsp+10h] [rbp-70h] BYREF
  matrix3x4_t nozzleMatrix; // [rsp+30h] [rbp-50h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v4 = *(this->_vptr_IHandleEntity + 220);
  v5 = CBaseAnimating::LookupAttachment(this, "nozzle");
  v4(this, v5, &nozzleMatrix);
  v6 = nozzleMatrix.m_flMatVal[2][2];
  this->m_thrustOrigin.x = nozzleMatrix.m_flMatVal[0][3];
  v7 = nozzleMatrix.m_flMatVal[1][2];
  this->m_thrustOrigin.y = nozzleMatrix.m_flMatVal[1][3];
  v8 = nozzleMatrix.m_flMatVal[0][2];
  this->m_thrustOrigin.z = nozzleMatrix.m_flMatVal[2][3];
  v9 = (v6 * -5.0) + offset->z;
  v10 = (v8 * -5.0) + offset->x;
  thrustDirection.y = (v7 * -5.0) + offset->y;
  thrustDirection.z = v9;
  thrustDirection.x = v10;
  VectorNormalize(&thrustDirection);
  *&result.x = *&thrustDirection.x;
  result.z = thrustDirection.z;
  return result;
}


// CPhysicsCannister::~CPhysicsCannister  (line 129, @0x00000000022b8bb0, libserver.so)
// calls: CBaseCombatCharacter::~CBaseCombatCharacter
void __fastcall CPhysicsCannister::~CPhysicsCannister(CPhysicsCannister *const this)
{
  this->_vptr_IHandleEntity = &off_407E790;
  this->_vptr_IPlayerPickupVPhysics = &off_407F378;
  CBaseCombatCharacter::~CBaseCombatCharacter(this);
}


// CPhysicsCannister::~CPhysicsCannister  (line 129, @0x00000000022b8be0, libserver.so)  // inlines: ~CPhysicsCannister
// calls: CBaseCombatCharacter::~CBaseCombatCharacter, CBaseEntity::operator delete
void __fastcall CPhysicsCannister::~CPhysicsCannister(CPhysicsCannister *const this)
{
  this->_vptr_IHandleEntity = &off_407E790;
  this->_vptr_IPlayerPickupVPhysics = &off_407F378;
  CBaseCombatCharacter::~CBaseCombatCharacter(this);
  CBaseEntity::operator delete(this);
}


// CPhysicsCannister::Precache  (line 133, @0x00000000022ba0d0, libserver.so)
// calls: CBaseEntity::PrecacheModelFromKeyValues, CBaseEntity::PrecacheScriptSound, CBaseCombatCharacter::Precache
void __fastcall CPhysicsCannister::Precache(CPhysicsCannister *const this, const CEntityPrecacheContext *pContext)
{
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
  if ( this->m_gasSound.u.m_Id != 0 )
    CBaseEntity::PrecacheScriptSound(this->m_gasSound.u.m_pAsString, pContext);
  CBaseCombatCharacter::Precache(this, pContext);
}


// CPhysicsCannister::OnTakeDamage  (line 143, @0x00000000022f00e0, libserver.so)  // inlines: Get, GetAttacker, GetInstance, curtime, operator CBaseEntity*
// calls: CBaseEntity::GetDamageOptions, CBaseEntity::GetHealth, CEntityHandle::operator CEntityInstance*, CPhysicsCannister::Explode, CPhysicsCannister::CannisterActivate
int __fastcall CPhysicsCannister::OnTakeDamage(CPhysicsCannister *const this, const CTakeDamageInfo *const info)
{
  void (__fastcall *v4)(CPhysicsCannister *const, _QWORD); // r13
  int Health; // eax
  int m_bitsDamageType; // eax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v9; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBaseEntity *v11; // rax
  CBaseEntity *v12; // rax
  CBaseEntity *v13; // rax

  if ( CBaseEntity::GetDamageOptions(this) == DamageOptions_t::DAMAGE_NO )
    return 0;
  if ( this->m_active )
  {
    m_flCurrentTime = 0.0;
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v9->m_flCurrentTime;
    }
    if ( (m_flCurrentTime - this->m_activateTime) > 0.1 && (info->m_bitsDamageType & 0x2000004A) != 0 )
    {
      v11 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
      CPhysicsCannister::Explode(this, v11);
    }
    return 0;
  }
  v4 = *(this->_vptr_IHandleEntity + 157);
  Health = CBaseEntity::GetHealth(this);
  v4(this, (Health - info->m_flDamage));
  if ( CBaseEntity::GetHealth(this) < 0 )
  {
    v13 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
    CPhysicsCannister::Explode(this, v13);
    return 1;
  }
  else
  {
    m_bitsDamageType = info->m_bitsDamageType;
    if ( (m_bitsDamageType & 0x40) != 0
      || (m_bitsDamageType & 0x85) != 0 && (*(*random_valve + 16LL))(random_valve, 1, 100) <= 49 )
    {
      v12 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
      CPhysicsCannister::CannisterActivate(this, v12, &g_vecAttackDir);
      return 1;
    }
    else
    {
      return 1;
    }
  }
}


// CPhysicsCannister::TraceAttack  (line 181, @0x00000000022f0270, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CBaseEntity::TraceAttack, CGameTrace::GetHitGroup, VectorNormalize, CPhysicsCannister::CannisterActivate
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPhysicsCannister::TraceAttack(
        CPhysicsCannister *const this,
        const CTakeDamageInfo *const info,
        const Vector *const dir,
        trace_t *ptr)
{
  vec_t v8; // xmm0_4
  float x; // xmm3_4
  uint32 m_Index; // edi
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  Vector direction; // [rsp+10h] [rbp-30h] BYREF

  if ( !this->m_active && CGameTrace::GetHitGroup(ptr) != 0 )
  {
    v8 = -dir->z - 5.0;
    x = dir->x;
    direction.y = -dir->y;
    direction.z = v8;
    direction.x = -x;
    VectorNormalize(&direction);
    m_Index = info->m_hAttacker.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[info->m_hAttacker.m_Index & 0x1FF];
        if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
          m_pInstance = v13->m_pInstance;
      }
    }
    CPhysicsCannister::CannisterActivate(this, m_pInstance, &direction);
  }
  CBaseEntity::TraceAttack(this, info, dir, ptr);
}


// CPhysicsCannister::CannisterActivate  (line 197, @0x00000000022efab0, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, CalcThrust, EmitSound_t, FireOutput, Free, GetEHandle, GetEntryIndex, GetSerialNumber, Purge, RemoveAll, Set, SetSoundName, SoundEventGuid_t, String, ToCStr, VectorMultiply, curtime, entindex, operator*, operator-, operator=, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~EmitSound_t
// calls: CPhysicsCannister::CalcLocalThrust, CEntityIOOutput::FireOutputInternal, CBaseEntity::VPhysicsGetObject, CBaseEntity::VPhysicsWorld, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet, VectorAngles, DispatchParticleEffect, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex (19 total)
// callers: CPhysicsCannister::OnTakeDamage, CPhysicsCannister::TraceAttack, CPhysicsCannister::CannisterFire, CPhysicsCannister::InputActivate, CPhysicsCannister::OnPhysGunDrop
// strings: "steamjet"
// globals: CPhysicsCannister::BeginShutdownThink(void)
void __fastcall CPhysicsCannister::CannisterActivate(
        CPhysicsCannister *const this,
        CBaseEntity *pActivator,
        const Vector *const thrustOffset)
{
  CEntityIdentity *m_pEntity; // rcx
  int v6; // eax
  __int16 v7; // si
  IPhysicsObject *Object; // r12
  float v9; // xmm0_4
  float m_thrust; // xmm1_4
  IVPhysics2World *v11; // rax
  IPhysicsObject *v12; // r12
  double v13; // xmm1_8
  CGlobalVars *v14; // r12
  CGlobalVars *v15; // rax
  CGlobalVars *v16; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  void (__fastcall *v18)(__int64); // rax
  double v19; // xmm0_8
  int v20; // xmm1_4
  float v21; // xmm1_4
  bool v22; // zf
  const char *m_pAsString; // rax
  CEntityIndex v24; // eax
  QAngle angles; // [rsp+20h] [rbp-1E0h] BYREF
  EmitSound_t ep; // [rsp+30h] [rbp-1D0h] BYREF
  CPASAttenuationFilter filter; // [rsp+90h] [rbp-170h] BYREF
  unsigned __int64 v28; // [rsp+1C8h] [rbp-38h]
  Vector v29; // 0:kr00_12.12

  v28 = __readfsqword(0x28u);
  if ( !this->m_active && this->m_thrustTime != 0.0 )
  {
    if ( pActivator != 0 && (m_pEntity = pActivator->m_pEntity) != 0 )
    {
      v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v7 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hLauncher.m_Index) = v7 | this->m_hLauncher.m_Index & 0x8000;
      this->m_hLauncher.m_Index = (v6 << 15) | this->m_hLauncher.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hLauncher.m_Index = -1;
    }
    v29 = CPhysicsCannister::CalcLocalThrust(this, thrustOffset);
    LODWORD(ep.m_pSoundName) = 0;
    *&ep.m_nChannel = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_onActivate, pActivator, this, &ep, 0.0);
    if ( (BYTE2(ep.m_pSoundName) & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&ep.m_nChannel);
    Object = CBaseEntity::VPhysicsGetObject(this);
    v9 = (*(*Object + 208LL))(Object);
    m_thrust = this->m_thruster.m_thrust;
    *&ep.m_nChannel = (v29.x * m_thrust) * v9;
    *(&ep.m_nChannel + 1) = (v29.y * m_thrust) * v9;
    *&ep.m_pSoundName = (m_thrust * v29.z) * v9;
    (*(*Object + 1808LL))(
      Object,
      &ep,
      &this->m_thrustOrigin,
      &this->m_thruster.m_thrustVector,
      &this->m_thruster.m_torqueVector);
    (*(*Object + 1768LL))(Object, &this->m_thruster.m_thrustVector, &this->m_thruster.m_thrustVector);
    v11 = CBaseEntity::VPhysicsWorld(this);
    this->m_pController = (*(*v11 + 80LL))(v11, &this->m_thruster);
    v12 = CBaseEntity::VPhysicsGetObject(this);
    (*(this->m_pController->_vptr_IPhysicsMotionController + 4))(this->m_pController, v12, 1);
    (*(*v12 + 1592LL))(v12);
    this->m_active = 1;
    v14 = gpGlobals;
    v15 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v16 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        v16 = gpGlobals;
        if ( m_pfnWarningFunc != 0 )
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v16 = gpGlobals;
          v15 = gpGlobals;
        }
      }
      this->m_activateTime = v14->m_flCurrentTime;
      if ( v15 != 0 )
      {
        if ( !v16->m_bEnableAssertions && !v16->m_bInSimulation )
        {
          v18 = v16->m_pfnWarningFunc;
          if ( v18 != 0 )
            v18(1);
        }
        *&v19 = LODWORD(v16->m_flCurrentTime);
      }
      else
      {
        v19 = 0.0;
      }
    }
    else
    {
      this->m_activateTime = 0.0;
      v19 = 0.0;
    }
    *&v19 = *&v19 + this->m_thrustTime;
    CBaseEntity::SetNextThink(this, v19, v13, 0);
    CBaseEntity::ThinkSet(this, CPhysicsCannister::BeginShutdownThink, 0.0, 0, 0);
    *&ep.m_nChannel = -v29.x;
    *(&ep.m_nChannel + 1) = -v29.y;
    *&ep.m_pSoundName = -v29.z;
    VectorAngles(&ep, &angles);
    DispatchParticleEffect(
      "steamjet",
      this,
      0,
      -1,
      *&this->m_thrustOrigin.x,
      this->m_thrustOrigin.z,
      *&angles.x,
      angles.z);
    if ( this->m_gasSound.u.m_Id != 0 )
    {
      *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
      LODWORD(ep.m_pSoundName) = v20;
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::AddRecipientsByPAS(&filter, &ep);
      filter._vptr_IRecipientFilter = &off_3FECD70;
      *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
      *&ep.m_pSoundName = v21;
      CPASAttenuationFilter::Filter(&filter, &ep, 0.80000001, v21);
      v22 = this->m_gasSound.u.m_Id == 0;
      ep.m_flVolume = 1.0;
      m_pAsString = "";
      ep.m_nFlags = 0;
      ep.m_nPitch = 100;
      ep.m_pOrigin = 0;
      ep.m_flSoundTime = 0.0;
      ep.m_pflSoundDuration = 0;
      ep.m_bEmitCloseCaption = 1;
      ep.m_bWarnOnMissingCloseCaption = 0;
      ep.m_bWarnOnDirectWaveReference = 0;
      ep.m_nSpeakerEntity.m_Data = -1;
      ep.m_UtlVecSoundOrigin.m_Size = 0;
      memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
      ep.m_nChannel = 3;
      if ( !v22 )
        m_pAsString = this->m_gasSound.u.m_pAsString;
      ep.m_pSoundName = m_pAsString;
      ep.m_SoundLevel = soundlevel_t::SNDLVL_NORM;
      v24.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      CBaseEntity::EmitSound(&filter, v24, &ep);
      ep.m_UtlVecSoundOrigin.m_Size = 0;
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
        if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      }
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
    }
  }
}


// CPhysicsCannister::CannisterFire  (line 242, @0x00000000022f0380, libserver.so)
// calls: CPhysicsCannister::CannisterActivate
// globals: CPhysicsCannister::ExplodeTouch(CBaseEntity *)
void __fastcall CPhysicsCannister::CannisterFire(CPhysicsCannister *const this, CBaseEntity *pActivator)
{
  float v2; // xmm0_4

  this->m_bFired = 1;
  this->m_pfnTouch.__pfn = CPhysicsCannister::ExplodeTouch;
  v2 = 4.0 * this->m_thruster.m_thrust;
  this->m_thrustTime = 10.0;
  this->m_pfnTouch.__delta = 0;
  this->m_thruster.m_thrust = v2;
  CPhysicsCannister::CannisterActivate(this, pActivator, &vec3_origin);
}


// CPhysicsCannister::InputActivate  (line 261, @0x00000000022f03e0, libserver.so)  // inlines: Vector
// calls: CPhysicsCannister::CannisterActivate
void __fastcall CPhysicsCannister::InputActivate(CPhysicsCannister *const this, inputdata_t *const data)
{
  CBaseEntity *pActivator; // rsi
  Vector thrustOffset; // [rsp+0h] [rbp-10h] BYREF

  pActivator = data->pActivator;
  thrustOffset.x = 0.0;
  thrustOffset.y = 0.1;
  thrustOffset.z = -0.25;
  CPhysicsCannister::CannisterActivate(this, pActivator, &thrustOffset);
}


// CPhysicsCannister::InputDeactivate  (line 269, @0x00000000022d19c0, libserver.so)
// calls: CPhysicsCannister::Deactivate
void __fastcall CPhysicsCannister::InputDeactivate(CPhysicsCannister *const this, inputdata_t *const data)
{
  CPhysicsCannister::Deactivate(this);
}


// CPhysicsCannister::InputExplode  (line 278, @0x00000000022d1b60, libserver.so)
// calls: CPhysicsCannister::Explode
void __fastcall CPhysicsCannister::InputExplode(CPhysicsCannister *const this, inputdata_t *const data)
{
  CPhysicsCannister::Explode(this, data->pActivator);
}


// CPhysicsCannister::InputWake  (line 287, @0x00000000022b9c80, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject
void __fastcall CPhysicsCannister::InputWake(CPhysicsCannister *const this, inputdata_t *const data)
{
  IPhysicsObject *Object; // rax

  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( Object != 0 )
    (*(*Object + 1592LL))(Object);
}


// CPhysicsCannister::Deactivate  (line 300, @0x00000000022d1910, libserver.so)  // inlines: String, ToCStr, entindex
// calls: CBaseEntity::VPhysicsGetObject, CBaseEntity::VPhysicsWorld, CBaseEntity::SetNextThink, CEntityInstance::GetEntityIndex, CBaseEntity::StopSound
// callers: CPhysicsCannister::InputDeactivate, CPhysicsCannister::BeginShutdownThink, CPhysicsCannister::Explode
void __fastcall CPhysicsCannister::Deactivate(CPhysicsCannister *const this)
{
  IPhysicsMotionController *m_pController; // rax
  void (__fastcall *v3)(IPhysicsMotionController *, IPhysicsObject *); // r12
  IPhysicsObject *Object; // rax
  IVPhysics2World *v5; // rax
  double v6; // xmm1_8
  bool v7; // zf
  const char *m_pAsString; // r12
  CEntityIndex v9; // eax

  m_pController = this->m_pController;
  if ( m_pController != 0 )
  {
    v3 = *(m_pController->_vptr_IPhysicsMotionController + 5);
    Object = CBaseEntity::VPhysicsGetObject(this);
    v3(this->m_pController, Object);
    v5 = CBaseEntity::VPhysicsWorld(this);
    (*(*v5 + 88LL))(v5, this->m_pController);
    this->m_pController = 0;
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v6, 0);
    v7 = this->m_gasSound.u.m_Id == 0;
    this->m_thrustTime = 0.0;
    this->m_active = 0;
    if ( !v7 )
    {
      m_pAsString = this->m_gasSound.u.m_pAsString;
      v9.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      CBaseEntity::StopSound(v9, 3, m_pAsString, 0);
    }
  }
}


// CPhysicsCannister::Explode  (line 322, @0x00000000022d19e0, libserver.so)  // inlines: operator=
// calls: CPhysicsCannister::Deactivate, CBaseEntity::SetDamageOptions, CBaseEntity::VPhysicsGetObject, CBaseEntity::GetAbsScale, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, CBaseEntity::GetModel, PropBreakableCreateAll, ExplosionCreate, UTIL_Remove
// callers: CPhysicsCannister::InputExplode, CPhysicsCannister::ExplodeTouch, CPhysicsCannister::VPhysicsCollision, CPhysicsCannister::OnTakeDamage
void __fastcall CPhysicsCannister::Explode(CPhysicsCannister *const this, CBaseEntity *pAttacker)
{
  IPhysicsObject *Object; // r12
  int v5; // xmm1_4
  int v6; // xmm1_4
  const QAngle *AbsAngles; // r15
  int m_damage; // r13d
  const QAngle *v9; // r12
  const Vector *AbsOrigin; // rax
  float flScale; // [rsp+24h] [rbp-6Ch]
  Vector *origin; // [rsp+28h] [rbp-68h]
  Vector velocity; // [rsp+30h] [rbp-60h] BYREF
  AngularImpulse angVelocity; // [rsp+40h] [rbp-50h] BYREF
  HModel hModel[8]; // [rsp+50h] [rbp-40h] BYREF

  CPhysicsCannister::Deactivate(this);
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_NO);
  Object = CBaseEntity::VPhysicsGetObject(this);
  hModel[0].m_pBinding = COERCE_CONST_RESOURCEBINDINGBASE_T_((*(*Object + 1688LL))(Object));
  LODWORD(hModel[1].m_pBinding) = v5;
  velocity = *&hModel[0].m_pBinding;
  hModel[0].m_pBinding = COERCE_CONST_RESOURCEBINDINGBASE_T_((*(*Object + 592LL))(Object));
  LODWORD(hModel[1].m_pBinding) = v6;
  angVelocity = *&hModel[0].m_pBinding;
  flScale = CBaseEntity::GetAbsScale(this);
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  origin = CBaseEntity::GetAbsOrigin(this);
  CBaseEntity::GetModel(hModel, this);
  PropBreakableCreateAll(hModel, Object, origin, AbsAngles, flScale, &velocity, &angVelocity, 1.0, 20.0, 1.0, 5, 0, 1);
  m_damage = this->m_damage;
  v9 = CBaseEntity::GetAbsAngles(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  ExplosionCreate(AbsOrigin, v9, pAttacker, m_damage, 0, 1, 0.0, 0, 0, -1);
  UTIL_Remove(this);
}


// CPhysicsCannister::ExplodeTouch  (line 342, @0x00000000022d1b70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetDamageOptions, CPhysicsCannister::Explode
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPhysicsCannister::ExplodeTouch(CPhysicsCannister *const this, CBaseEntity *pOther)
{
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  if ( CBaseEntity::GetDamageOptions(pOther) != DamageOptions_t::DAMAGE_NO )
  {
    m_Index = this->m_hLauncher.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLauncher.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[this->m_hLauncher.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
          m_pInstance = v6->m_pInstance;
      }
    }
    CPhysicsCannister::Explode(this, m_pInstance);
  }
}


// CPhysicsCannister::VPhysicsCollision  (line 353, @0x00000000022d1c00, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseCombatCharacter::VPhysicsCollision, CPhysicsCannister::Explode
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPhysicsCannister::VPhysicsCollision(
        CPhysicsCannister *const this,
        int index,
        gamevcollisionevent_t *pEvent)
{
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  if ( !this->m_bFired || !this->m_active )
    goto LABEL_6;
  if ( pEvent->deltaCollisionTime >= 0.5 || this != pEvent->pEntities[index == 0] )
  {
    if ( pEvent->collisionSpeed <= 1000.0 )
    {
LABEL_6:
      CBaseCombatCharacter::VPhysicsCollision(this, index, pEvent);
      return;
    }
    m_Index = this->m_hLauncher.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLauncher.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[this->m_hLauncher.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
          m_pInstance = v6->m_pInstance;
      }
    }
    CPhysicsCannister::Explode(this, m_pInstance);
  }
}


// CPhysicsCannister::ShutdownJet  (line 376, @0x00000000022d1cc0, libserver.so)
// calls: StopParticleEffects, CBaseEntity::SetNextThink
void __fastcall CPhysicsCannister::ShutdownJet(CPhysicsCannister *const this)
{
  double v2; // xmm1_8

  StopParticleEffects(this);
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v2, 0);
}


// CPhysicsCannister::BeginShutdownThink  (line 385, @0x00000000022d19d0, libserver.so)
// calls: CPhysicsCannister::Deactivate
void __fastcall CPhysicsCannister::BeginShutdownThink(CPhysicsCannister *const this)
{
  CPhysicsCannister::Deactivate(this);
}


// CPhysicsCannister::SetPhysicsAttacker  (line 393, @0x00000000022d1cf0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
void __fastcall CPhysicsCannister::SetPhysicsAttacker(
        CPhysicsCannister *const this,
        CBasePlayer *pEntity,
        float a3,
        float flTime)
{
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // cx

  if ( pEntity != 0 && (m_pEntity = pEntity->m_pEntity) != 0 )
  {
    v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v6 = 0x7FFF;
    else
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    this->m_flLastPhysicsInfluenceTime = a3;
    LOWORD(this->m_hPhysicsAttacker.m_Index) = v6 | this->m_hPhysicsAttacker.m_Index & 0x8000;
    this->m_hPhysicsAttacker.m_Index = (v5 << 15) | this->m_hPhysicsAttacker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hPhysicsAttacker.m_Index = -1;
    this->m_flLastPhysicsInfluenceTime = a3;
  }
}


// CPhysicsCannister::OnPhysGunPickup  (line 403, @0x00000000022bfdf0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetPhysicsAttacker, curtime, operator=
void __fastcall CPhysicsCannister::OnPhysGunPickup(
        CPhysicsCannister *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunPickup_t reason,
        int nVRControllerID)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v6; // r12
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // cx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBasePlayer *v11; // [rsp-18h] [rbp-20h]

  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v11 = pPhysGunUser;
        (m_pfnWarningFunc)(1, pPhysGunUser, reason, nVRControllerID, 0.0);
        pPhysGunUser = v11;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  if ( pPhysGunUser != 0 && (m_pEntity = pPhysGunUser->m_pEntity) != 0 )
  {
    v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v9 = 0x7FFF;
    else
      v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hPhysicsAttacker.m_Index) = v9 | this->m_hPhysicsAttacker.m_Index & 0x8000;
    this->m_hPhysicsAttacker.m_Index = (v8 << 15) | this->m_hPhysicsAttacker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hPhysicsAttacker.m_Index = -1;
  }
  this->m_flLastPhysicsInfluenceTime = m_flCurrentTime;
}


// CPhysicsCannister::OnPhysGunDrop  (line 411, @0x00000000022f0410, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetPhysicsAttacker, curtime, operator=
// calls: CPhysicsCannister::CannisterActivate
void __fastcall CPhysicsCannister::OnPhysGunDrop(
        CPhysicsCannister *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunDrop_t Reason,
        int nVRControllerID)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v6; // r12
  CEntityIdentity *m_pEntity; // rcx
  int v8; // eax
  __int16 v9; // di
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  PhysGunDrop_t v11; // [rsp-1Ch] [rbp-24h]
  CBasePlayer *v12; // [rsp-18h] [rbp-20h]

  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v11 = Reason;
        v12 = pPhysGunUser;
        (m_pfnWarningFunc)(1, pPhysGunUser, Reason, nVRControllerID, 0.0);
        Reason = v11;
        pPhysGunUser = v12;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  if ( pPhysGunUser != 0 && (m_pEntity = pPhysGunUser->m_pEntity) != 0 )
  {
    v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v9 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hPhysicsAttacker.m_Index) = v9 | this->m_hPhysicsAttacker.m_Index & 0x8000;
    this->m_hPhysicsAttacker.m_Index = (v8 << 15) | this->m_hPhysicsAttacker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hPhysicsAttacker.m_Index = -1;
  }
  this->m_flLastPhysicsInfluenceTime = m_flCurrentTime;
  if ( Reason == PhysGunDrop_t::LAUNCHED_BY_CANNON )
    CPhysicsCannister::CannisterActivate(this, pPhysGunUser, &vec3_origin);
}


// CPhysicsCannister::HasPhysicsAttacker  (line 423, @0x00000000022c18d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, curtime, operator CBasePlayer*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
CBasePlayer *__fastcall CPhysicsCannister::HasPhysicsAttacker(CPhysicsCannister *const this, double a2, float dt)
{
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v5; // rbx
  uint32 m_Index; // edx
  CBasePlayer *result; // rax
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int v11; // [rsp-14h] [rbp-1Ch]

  m_flCurrentTime = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v11 = LODWORD(a2);
        (m_pfnWarningFunc)(1, a2, 0.0);
        LODWORD(a2) = v11;
      }
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  if ( this->m_flLastPhysicsInfluenceTime < (m_flCurrentTime - *&a2) )
    return 0;
  m_Index = this->m_hPhysicsAttacker.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsAttacker.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hPhysicsAttacker.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        return v9->m_pInstance;
    }
  }
  return result;
}


// CPhysicsCannister::VPhysicsUpdate  (line 434, @0x00000000022f28b0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, NetworkStateChanged, RemoveSpawnFlags, Set, operator&=<int>, ~CVariantBase
// calls: CBaseCombatCharacter::VPhysicsUpdate, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CPhysicsCannister::VPhysicsUpdate(CPhysicsCannister *const this, IPhysicsObject *pPhysics)
{
  unsigned int v4; // r12d
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  CBaseCombatCharacter::VPhysicsUpdate(this, pPhysics);
  if ( (this->m_spawnflags.m_Value & 1) != 0 && (*(*pPhysics + 1464LL))(pPhysics) == 0 )
  {
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnAwakened, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    v4 = this->m_spawnflags.m_Value & 0xFFFFFFFE;
    if ( this->m_spawnflags.m_Value != v4 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v4;
    }
  }
}


