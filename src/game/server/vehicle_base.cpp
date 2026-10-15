// Reconstructed from DWARF by pahole; not original source.

// src/game/server/vehicle_base.cpp:320
class C_CPropVehicleDriveable_MapInstall {
	C_CPropVehicleDriveable_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFourWheelServerVehicle::AddDatadescMetadataKeys  (line 31, @0x0000000002405880, libserver.so)
void __fastcall CFourWheelServerVehicle::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CFourWheelServerVehicle::GetBaseMap  (line 31, @0x0000000002405890, libserver.so)
// globals: CBaseServerVehicle::m_DataMap
datamap_t *__cdecl CFourWheelServerVehicle::GetBaseMap()
{
  return &CBaseServerVehicle::m_DataMap;
}


// DataMapInit<CFourWheelServerVehicle>  (line 31, @0x00000000024058a0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_13.cpp
// strings: "CFourWheelServerVehicle"
// globals: `guard variable for'DataMapInit<CFourWheelServerVehicle>(CFourWheelServerVehicle *)::nameHolder, CBaseServerVehicle::m_DataMap, CFourWheelServerVehicle::m_DataMap, DataMapInit<CFourWheelServerVehicle>(CFourWheelServerVehicle *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFourWheelServerVehicle>(CFourWheelServerVehicle *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFourWheelServerVehicle>(CFourWheelServerVehicle *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFourWheelServerVehicle>(CFourWheelServerVehicle *)::nameHolder) != 0 )
  {
    DataMapInit<CFourWheelServerVehicle>(CFourWheelServerVehicle *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFourWheelServerVehicle>(CFourWheelServerVehicle *)::nameHolder.m_pszBase = "CFourWheelServerVehicle";
    DataMapInit<CFourWheelServerVehicle>(CFourWheelServerVehicle *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFourWheelServerVehicle>(CFourWheelServerVehicle *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFourWheelServerVehicle>(CFourWheelServerVehicle *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFourWheelServerVehicle>(CFourWheelServerVehicle *)::nameHolder.m_nLenBase = 23;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFourWheelServerVehicle>(CFourWheelServerVehicle *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFourWheelServerVehicle>(CFourWheelServerVehicle *)::nameHolder,
      &_dso_handle);
  }
  CFourWheelServerVehicle::m_DataMap.dataNumFields = 1;
  CFourWheelServerVehicle::m_DataMap.baseMap = &CBaseServerVehicle::m_DataMap;
  CFourWheelServerVehicle::m_DataMap.dataDesc = &DataMapInit<CFourWheelServerVehicle>(CFourWheelServerVehicle *)::dataDesc[1];
  return &CFourWheelServerVehicle::m_DataMap;
}


// CPropVehicle::GetDataDescMap  (line 38, @0x00000000023f8600, libserver.so)
// globals: CPropVehicle::m_DataMap
datamap_t *__fastcall CPropVehicle::GetDataDescMap(CPropVehicle *const this)
{
  return &CPropVehicle::m_DataMap;
}


// CPropVehicle::AddDatadescMetadataKeys  (line 38, @0x0000000002405960, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPropVehicle::GetEntityClass(void)
void __fastcall CPropVehicle::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPropVehicle::GetEntityClass);
}


// CPropVehicle::GetBaseMap  (line 38, @0x0000000002405980, libserver.so)
datamap_t *__cdecl CPropVehicle::GetBaseMap()
{
  return &CBaseProp::m_DataMap;
}


// DataMapInit<CPropVehicle>  (line 38, @0x0000000002405990, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, GetPhysObjSaveRestoreOps, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_13.cpp
// strings: "CPropVehicle"
// globals: `guard variable for'DataMapInit<CPropVehicle>(CPropVehicle *)::nameHolder, `guard variable for'DataMapInit<CPropVehicle>(CPropVehicle *)::dataDesc, CPropVehicle::GetEntityClass(void), CPropVehicle::m_DataMap, DataMapInit<CPropVehicle>(CPropVehicle *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPropVehicle>(CPropVehicle *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPropVehicle>(CPropVehicle *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPropVehicle>(CPropVehicle *)::nameHolder) != 0 )
  {
    DataMapInit<CPropVehicle>(CPropVehicle *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPropVehicle>(CPropVehicle *)::nameHolder.m_pszBase = "CPropVehicle";
    DataMapInit<CPropVehicle>(CPropVehicle *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPropVehicle>(CPropVehicle *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPropVehicle>(CPropVehicle *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPropVehicle>(CPropVehicle *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPropVehicle>(CPropVehicle *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPropVehicle>(CPropVehicle *)::nameHolder,
      &_dso_handle);
  }
  CPropVehicle::m_DataMap.baseMap = &CBaseProp::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPropVehicle>(CPropVehicle *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPropVehicle>(CPropVehicle *)::dataDesc) != 0 )
  {
    DataMapInit<CPropVehicle>(CPropVehicle *)::dataDesc[2].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSVEHICLECONTROLLER);
    DataMapInit<CPropVehicle>(CPropVehicle *)::dataDesc[3].fieldSize = 4;
    DataMapInit<CPropVehicle>(CPropVehicle *)::dataDesc[3].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPropVehicle>(CPropVehicle *)::dataDesc);
  }
  CPropVehicle::m_DataMap.dataNumFields = 13;
  CPropVehicle::m_DataMap.dataDesc = &DataMapInit<CPropVehicle>(CPropVehicle *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPropVehicle::m_DataMap, CPropVehicle::GetEntityClass);
  return &CPropVehicle::m_DataMap;
}


// CPropVehicle::CPropVehicle  (line 73, @0x0000000002405af0, libserver.so)  // inlines: CBaseProp, CEntityHandle, CHandle, CUtlSymbolLarge, SetVehicleType, ~CBaseAnimating, ~CBaseProp
// calls: CBaseAnimating::CBaseAnimating, CFourWheelVehiclePhysics::CFourWheelVehiclePhysics, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CPropVehicle::CEntityInstanceEntityClass::ConstructInstance, CPropVehicleDriveable::CPropVehicleDriveable
void __fastcall CPropVehicle::CPropVehicle(CPropVehicle *const this)
{
  CBaseAnimating::CBaseAnimating(this);
  this->_vptr_IHandleEntity = &off_40D0A50;
  this->_vptr_IPlayerPickupVPhysics = &off_40D1268;
  CFourWheelVehiclePhysics::CFourWheelVehiclePhysics(&this->m_VehiclePhysics, this);
  this->m_vehicleScript.u.m_Id = 0;
  this->m_hPhysicsAttacker.m_Index = -1;
  this->m_nVehicleType = 1;
}


// CPropVehicle::~CPropVehicle  (line 82, @0x00000000023f8e00, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp
// calls: CFourWheelVehiclePhysics::~CFourWheelVehiclePhysics, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
// callers: CPropVehicle::~CPropVehicle, CPropVehicleDriveable::~CPropVehicleDriveable, CPropVehicleDriveable::CPropVehicleDriveable
void __fastcall CPropVehicle::~CPropVehicle(CPropVehicle *const this)
{
  CFourWheelVehiclePhysics *p_m_VehiclePhysics; // rdi

  p_m_VehiclePhysics = &this->m_VehiclePhysics;
  *&p_m_VehiclePhysics[-4].m_wheelPosition[1].z = &off_40D0A50;
  *&p_m_VehiclePhysics[-1].m_flVehicleVolume = &off_40D1268;
  CFourWheelVehiclePhysics::~CFourWheelVehiclePhysics(p_m_VehiclePhysics);
  this->_vptr_IHandleEntity = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(&this->m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPropVehicle::~CPropVehicle  (line 82, @0x00000000023f8e60, libserver.so)
// calls: CPropVehicle::~CPropVehicle, CBaseEntity::operator delete
void __fastcall CPropVehicle::~CPropVehicle(CPropVehicle *const this)
{
  CPropVehicle::~CPropVehicle(this);
  CBaseEntity::operator delete(this);
}


// CPropVehicle::Precache  (line 90, @0x00000000023f8f00, libserver.so)
// calls: CBaseProp::Precache, CFourWheelVehiclePhysics::Precache
void __fastcall CPropVehicle::Precache(CPropVehicle *const this, const CEntityPrecacheContext *pContext)
{
  CBaseProp::Precache(this, pContext);
  CFourWheelVehiclePhysics::Precache(&this->m_VehiclePhysics, pContext);
}


// CPropVehicle::Spawn  (line 100, @0x00000000023fbfb0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Init, Set, SetCollisionGroup, SetOuter, String, ToCStr, curtime, operator=
// calls: __dynamic_cast, CBaseProp::Spawn, CCollisionProperty::SetCollisionGroup, CFourWheelVehiclePhysics::Spawn, CFourWheelVehiclePhysics::Initialize, CBaseEntity::SetNextThink
// callers: CPropVehicleDriveable::Spawn
// globals: `typeinfo for'CFourWheelServerVehicle, `typeinfo for'IServerVehicle
void __fastcall CPropVehicle::Spawn(CPropVehicle *const this, const CEntityKeyValues *pKeyValues)
{
  const void *v4; // rax
  CFourWheelServerVehicle *v5; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v7; // ecx
  __int16 v8; // si
  const char *m_pAsString; // rsi
  double v10; // xmm1_8
  double v11; // xmm0_8
  CGlobalVars *v12; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  v4 = (*(this->_vptr_IHandleEntity + 101))(this);
  if ( v4 != 0 )
    v5 = __dynamic_cast(v4, &`typeinfo for'IServerVehicle, &`typeinfo for'CFourWheelServerVehicle, 0);
  else
    v5 = 0;
  m_pEntity = this->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v8 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_VehiclePhysics.m_pOuter.m_Index) = v8 | this->m_VehiclePhysics.m_pOuter.m_Index & 0x8000;
    this->m_VehiclePhysics.m_pOuter.m_Index = (v7 << 15) | this->m_VehiclePhysics.m_pOuter.m_Index & 0x7FFF;
  }
  else
  {
    this->m_VehiclePhysics.m_pOuter.m_Index = -1;
  }
  this->m_VehiclePhysics.m_pOuterServerVehicle = v5;
  CBaseProp::Spawn(this, pKeyValues);
  CCollisionProperty::SetCollisionGroup(&this->m_Collision, 10);
  CFourWheelVehiclePhysics::Spawn(&this->m_VehiclePhysics, pKeyValues);
  m_pAsString = "";
  if ( this->m_vehicleScript.u.m_Id != 0 )
    m_pAsString = this->m_vehicleScript.u.m_pAsString;
  if ( CFourWheelVehiclePhysics::Initialize(&this->m_VehiclePhysics, m_pAsString, this->m_nVehicleType) )
  {
    v11 = 0.0;
    v12 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v11 = LODWORD(v12->m_flCurrentTime);
    }
    CBaseEntity::SetNextThink(this, v11, v10, 0);
    this->m_vecSmoothedVelocity.x = 0.0;
    this->m_vecSmoothedVelocity.y = 0.0;
    this->m_vecSmoothedVelocity.z = 0.0;
  }
}


// vehicle_flushscript  (line 119, @0x00000000023f9830, libserver.so)  // inlines: FirstEnt
// calls: PhysFlushVehicleScripts, CGameEntitySystem::NextEnt
void __fastcall vehicle_flushscript(const CCommandContext *const ctx, const CCommand *const args)
{
  CBaseEntity *i; // rsi
  __int64 v3; // rax
  CBaseEntity *Ent; // rax
  CBaseEntity *v5; // rbx

  PhysFlushVehicleScripts();
  for ( i = 0; ; i = v5 )
  {
    Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, i);
    v5 = Ent;
    if ( Ent == 0 )
      break;
    v3 = (*(Ent->_vptr_IHandleEntity + 101))(Ent);
    if ( v3 != 0 )
      (*(*v3 + 464LL))(v3);
  }
}


// CPropVehicle::Restore  (line 134, @0x00000000023f8cf0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetOuter, operator=
// calls: __dynamic_cast, CBaseAnimating::Restore
// callers: CPropVehicleDriveable::Restore
// globals: `typeinfo for'CFourWheelServerVehicle, `typeinfo for'IServerVehicle
int __fastcall CPropVehicle::Restore(CPropVehicle *const this, IRestore *const restore)
{
  const void *v4; // rax
  CFourWheelServerVehicle *v5; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v7; // ecx
  __int16 v8; // si

  v4 = (*(this->_vptr_IHandleEntity + 101))(this);
  if ( v4 != 0 )
    v5 = __dynamic_cast(v4, &`typeinfo for'IServerVehicle, &`typeinfo for'CFourWheelServerVehicle, 0);
  else
    v5 = 0;
  m_pEntity = this->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v8 = 0x7FFF;
    else
      v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_VehiclePhysics.m_pOuter.m_Index) = v8 | this->m_VehiclePhysics.m_pOuter.m_Index & 0x8000;
    this->m_VehiclePhysics.m_pOuter.m_Index = (v7 << 15) | this->m_VehiclePhysics.m_pOuter.m_Index & 0x7FFF;
  }
  else
  {
    this->m_VehiclePhysics.m_pOuter.m_Index = -1;
  }
  this->m_VehiclePhysics.m_pOuterServerVehicle = v5;
  return CBaseAnimating::Restore(this, restore);
}


// CPropVehicle::Teleport  (line 145, @0x00000000023f8f30, libserver.so)
// calls: CBaseEntity::EntityToWorldTransform, MatrixInvert, CBaseAnimating::Teleport, ConcatTransforms, CFourWheelVehiclePhysics::Teleport
void __fastcall CPropVehicle::Teleport(
        CPropVehicle *const this,
        const Vector *newPosition,
        const QAngle *newAngles,
        const Vector *newVelocity)
{
  matrix3x4_t *v8; // rax
  matrix3x4_t *v9; // rax
  matrix3x4_t startMatrixInv; // [rsp+0h] [rbp-90h] BYREF
  matrix3x4_t xform; // [rsp+30h] [rbp-60h] BYREF

  v8 = CBaseEntity::EntityToWorldTransform(this);
  MatrixInvert(v8, &startMatrixInv);
  CBaseAnimating::Teleport(this, newPosition, newAngles, newVelocity);
  v9 = CBaseEntity::EntityToWorldTransform(this);
  ConcatTransforms(v9, &startMatrixInv, &xform);
  CFourWheelVehiclePhysics::Teleport(&this->m_VehiclePhysics, &xform);
}


// CPropVehicle::DrawEntityDebugOverlays  (line 161, @0x00000000023f8fb0, libserver.so)
// calls: CFourWheelVehiclePhysics::DrawEntityDebugOverlays, CBaseProp::DrawEntityDebugOverlays
void __fastcall CPropVehicle::DrawEntityDebugOverlays(CPropVehicle *const this, uint64 nDebugOverlayBits)
{
  if ( (nDebugOverlayBits & 4) != 0 )
    CFourWheelVehiclePhysics::DrawEntityDebugOverlays(&this->m_VehiclePhysics, nDebugOverlayBits);
  CBaseProp::DrawEntityDebugOverlays(this, nDebugOverlayBits);
}


// CPropVehicle::DrawDebugTextOverlays  (line 173, @0x00000000023f8fe0, libserver.so)
// calls: CBaseAnimating::DrawDebugTextOverlays, CFourWheelVehiclePhysics::DrawDebugTextOverlays
int __fastcall CPropVehicle::DrawDebugTextOverlays(
        CPropVehicle *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  char v5; // bl
  int result; // eax

  v5 = nDebugOverlayBits;
  result = CBaseAnimating::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 )
    return CFourWheelVehiclePhysics::DrawDebugTextOverlays(&this->m_VehiclePhysics, iDebugFilterFlags, result);
  return result;
}


// CPropVehicle::HasPhysicsAttacker  (line 186, @0x00000000023fb260, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, curtime, operator CBasePlayer*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
CBasePlayer *__fastcall CPropVehicle::HasPhysicsAttacker(CPropVehicle *const this, double a2, float dt)
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


// CPropVehicle::OnPhysGunPickup  (line 198, @0x00000000023fb170, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, curtime, operator=
void __fastcall CPropVehicle::OnPhysGunPickup(
        CPropVehicle *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunPickup_t reason,
        int nVRControllerID)
{
  CEntityIdentity *m_pEntity; // rdx
  int v6; // eax
  __int16 v7; // cx
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v9; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( pPhysGunUser != 0 && (m_pEntity = pPhysGunUser->m_pEntity) != 0 )
  {
    v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v7 = 0x7FFF;
    else
      v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hPhysicsAttacker.m_Index) = v7 | this->m_hPhysicsAttacker.m_Index & 0x8000;
    this->m_hPhysicsAttacker.m_Index = (v6 << 15) | this->m_hPhysicsAttacker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hPhysicsAttacker.m_Index = -1;
  }
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
  this->m_flLastPhysicsInfluenceTime = m_flCurrentTime;
}


// CPropVehicle::InputThrottle  (line 207, @0x00000000023f9030, libserver.so)  // inlines: Float, operator float
// calls: CFourWheelVehiclePhysics::SetThrottle
void __fastcall CPropVehicle::InputThrottle(CPropVehicle *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
  {
    m_float64 = inputdata->value.m_float64;
    CFourWheelVehiclePhysics::SetThrottle(&this->m_VehiclePhysics, m_float64, v2);
  }
  else
  {
    CFourWheelVehiclePhysics::SetThrottle(&this->m_VehiclePhysics, inputdata->value.m_float, v2);
  }
}


// CPropVehicle::InputSteering  (line 215, @0x00000000023f9070, libserver.so)  // inlines: Float, operator float
// calls: CFourWheelVehiclePhysics::SetSteering
void __fastcall CPropVehicle::InputSteering(CPropVehicle *const this, inputdata_t *const inputdata)
{
  float v2; // xmm2_4
  float v3; // xmm1_4
  float m_float64; // xmm0_4

  v3 = gpGlobals->frametime + gpGlobals->frametime;
  if ( inputdata->value.m_type == 34 )
  {
    m_float64 = inputdata->value.m_float64;
    CFourWheelVehiclePhysics::SetSteering(&this->m_VehiclePhysics, m_float64, v3, v2);
  }
  else
  {
    CFourWheelVehiclePhysics::SetSteering(&this->m_VehiclePhysics, inputdata->value.m_float, v3, v2);
  }
}


// CPropVehicle::InputAction  (line 223, @0x00000000023f90c0, libserver.so)  // inlines: Float, operator float
// calls: CFourWheelVehiclePhysics::SetAction
void __fastcall CPropVehicle::InputAction(CPropVehicle *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
  {
    m_float64 = inputdata->value.m_float64;
    CFourWheelVehiclePhysics::SetAction(&this->m_VehiclePhysics, m_float64, v2);
  }
  else
  {
    CFourWheelVehiclePhysics::SetAction(&this->m_VehiclePhysics, inputdata->value.m_float, v2);
  }
}


// CPropVehicle::InputHandBrakeOn  (line 228, @0x00000000023f9100, libserver.so)
// calls: CFourWheelVehiclePhysics::SetHandbrake
void __fastcall CPropVehicle::InputHandBrakeOn(CPropVehicle *const this, inputdata_t *const inputdata)
{
  CFourWheelVehiclePhysics::SetHandbrake(&this->m_VehiclePhysics, 1);
}


// CPropVehicle::InputHandBrakeOff  (line 233, @0x00000000023f9120, libserver.so)
// calls: CFourWheelVehiclePhysics::ReleaseHandbrake
void __fastcall CPropVehicle::InputHandBrakeOff(CPropVehicle *const this, inputdata_t *const inputdata)
{
  CFourWheelVehiclePhysics::ReleaseHandbrake(&this->m_VehiclePhysics);
}


// CPropVehicle::Think  (line 241, @0x00000000023fb6b0, libserver.so)  // inlines: curtime
// calls: CFourWheelVehiclePhysics::Think, CBaseEntity::SetNextThink
// callers: CPropVehicleDriveable::Think
void __fastcall CPropVehicle::Think(CPropVehicle *const this)
{
  double v2; // xmm1_8
  double v3; // xmm0_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CFourWheelVehiclePhysics::Think(&this->m_VehiclePhysics);
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    v3 = 0.0;
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v3 = LODWORD(v4->m_flCurrentTime);
    }
    CBaseEntity::SetNextThink(this, v3, v2, 0);
  }
}


// CPropVehicle::VPhysicsUpdate  (line 259, @0x00000000023f9140, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+, operator=
// calls: CBaseEntity::VPhysicsGetObject, CFourWheelVehiclePhysics::VPhysicsUpdate, CBaseEntity::VPhysicsUpdate
void __fastcall CPropVehicle::VPhysicsUpdate(CPropVehicle *const this, IPhysicsObject *pPhysics)
{
  IPhysicsObject *Object; // rax
  float v5; // xmm1_4
  float v6; // xmm4_4
  float v7; // xmm3_4
  double velocity; // [rsp+0h] [rbp-20h]

  if ( (this->m_pEntity->m_flags & 0x200) == 0 )
  {
    Object = CBaseEntity::VPhysicsGetObject(this);
    velocity = (*(*Object + 1688LL))(Object);
    v6 = this->m_vecSmoothedVelocity.z * 0.89999998;
    v7 = 0.89999998 * this->m_vecSmoothedVelocity.x;
    this->m_vecSmoothedVelocity.y = (*(&velocity + 1) * 0.1) + (this->m_vecSmoothedVelocity.y * 0.89999998);
    this->m_vecSmoothedVelocity.z = (v5 * 0.1) + v6;
    this->m_vecSmoothedVelocity.x = (0.1 * *&velocity) + v7;
    if ( CFourWheelVehiclePhysics::VPhysicsUpdate(&this->m_VehiclePhysics, pPhysics) )
      CBaseEntity::VPhysicsUpdate(this, pPhysics);
  }
}


// CPropVehicle::GetSmoothedVelocity  (line 280, @0x00000000023f8610, libserver.so)
Vector __fastcall CPropVehicle::GetSmoothedVelocity(CPropVehicle *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vecSmoothedVelocity.x;
  result.z = this->m_vecSmoothedVelocity.z;
  return result;
}


// CPropVehicleDriveable::YouForgotToImplementOrDeclareServerClass  (line 320, @0x00000000023f8630, libserver.so)
int __fastcall CPropVehicleDriveable::YouForgotToImplementOrDeclareServerClass(CPropVehicleDriveable *const this)
{
  return 0;
}


// CPropVehicleDriveable::GetServerClass  (line 320, @0x00000000023fd8f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPropVehicleDriveable::GetServerClass(CPropVehicleDriveable *const this)
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


// CPropVehicleDriveable::GetDataDescMap  (line 323, @0x00000000023f8640, libserver.so)
// globals: CPropVehicleDriveable::m_DataMap
datamap_t *__fastcall CPropVehicleDriveable::GetDataDescMap(CPropVehicleDriveable *const this)
{
  return &CPropVehicleDriveable::m_DataMap;
}


// CPropVehicleDriveable::AddDatadescMetadataKeys  (line 323, @0x0000000002405b80, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPropVehicleDriveable::GetEntityClass(void)
void __fastcall CPropVehicleDriveable::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPropVehicleDriveable::GetEntityClass);
}


// CPropVehicleDriveable::GetBaseMap  (line 323, @0x0000000002405ba0, libserver.so)
// globals: CPropVehicle::m_DataMap
datamap_t *__cdecl CPropVehicleDriveable::GetBaseMap()
{
  return &CPropVehicle::m_DataMap;
}


// DataMapInit<CPropVehicleDriveable>  (line 323, @0x0000000002405bb0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_13.cpp
// strings: "CPropVehicleDriveable"
// globals: `guard variable for'DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::nameHolder, `guard variable for'DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::dataDesc, CPropVehicle::m_DataMap, CPropVehicleDriveable::GetEntityClass(void), CPropVehicleDriveable::m_DataMap, DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::nameHolder) != 0 )
  {
    DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::nameHolder.m_pszBase = "CPropVehicleDriveable";
    DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::nameHolder.m_nLenBase = 21;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::nameHolder,
      &_dso_handle);
  }
  CPropVehicleDriveable::m_DataMap.baseMap = &CPropVehicle::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::dataDesc) != 0 )
  {
    DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::dataDesc[6].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::dataDesc[7].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::dataDesc[8].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::dataDesc[9].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::dataDesc[10].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::dataDesc[11].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::dataDesc);
  }
  CPropVehicleDriveable::m_DataMap.dataNumFields = 32;
  CPropVehicleDriveable::m_DataMap.dataDesc = &DataMapInit<CPropVehicleDriveable>(CPropVehicleDriveable *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPropVehicleDriveable::m_DataMap, CPropVehicleDriveable::GetEntityClass);
  return &CPropVehicleDriveable::m_DataMap;
}


// CPropVehicleDriveable::CPropVehicleDriveable  (line 369, @0x0000000002405cf0, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CEntityOutputTemplate, CHandle, CNetworkHandleBase, CNetworkVarBase, CNetworkVectorBase, EnsureValidValue, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, EnsureValidValue<short int>, NetworkStateChanged, Set, SetVecGunCrosshair, Zero, operator!=, operator=
// calls: CPropVehicle::CPropVehicle, CNetworkTransmitComponent::StateChanged, CPropVehicle::~CPropVehicle, _Unwind_Resume
// callers: CPropVehicleDriveable::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CPropVehicleDriveable::CPropVehicleDriveable(CPropVehicleDriveable *const this)
{
  bool v2; // zf

  CPropVehicle::CPropVehicle(this);
  this->_vptr_IHandleEntity = &off_40D12D0;
  this->_vptr_IPlayerPickupVPhysics = &off_40D1B98;
  this->m_pServerVehicle = 0;
  v2 = vec3_origin.x == 0.0;
  this->_vptr_IDrivableVehicle = &off_40D1C00;
  this->m_playerOn._vptr_CEntityIOOutput = off_3F7C190;
  this->m_playerOff._vptr_CEntityIOOutput = off_3F7C190;
  this->m_pressedAttack._vptr_CEntityIOOutput = off_3F7C190;
  this->m_pressedAttack2._vptr_CEntityIOOutput = off_3F7C190;
  this->m_attackaxis._vptr_CEntityIOOutput = off_3FD2290;
  this->m_attack2axis._vptr_CEntityIOOutput = off_3FD2290;
  this->m_hPlayer.m_Value.m_Index = -1;
  this->m_nSpeed.m_Value = 0;
  this->m_nRPM.m_Value = 0;
  *&this->m_flThrottle.m_Value = 0;
  this->m_bHasBoost.m_Value = 0;
  *&this->m_vecEyeExitEndpoint.m_Value.y = 0;
  this->m_vecEyeExitEndpoint.m_Value.x = 0.0;
  *&this->m_vecGunCrosshair.m_Value.y = 0;
  this->m_vecGunCrosshair.m_Value.x = 0.0;
  this->m_bUnableToFire.m_Value = 0;
  this->m_bHasGun.m_Value = 0;
  this->m_nScannerDisabledWeapons.m_Value = 0;
  this->m_nScannerDisabledVehicle.m_Value = 0;
  this->m_hNPCDriver.m_Index = -1;
  this->m_hKeepUpright.m_Index = -1;
  this->m_bEnterAnimOn.m_Value = 0;
  this->m_bExitAnimOn.m_Value = 0;
  this->m_flTurnOffKeepUpright = 0.0;
  this->m_flNoImpactDamageTime = 0.0;
  if ( !v2 || vec3_origin.y != this->m_vecGunCrosshair.m_Value.y || vec3_origin.z != this->m_vecGunCrosshair.m_Value.z )
  {
    CNetworkTransmitComponent::StateChanged(&this->m_NetworkTransmitComponent, this, 0x71Cu, -1, -1);
    this->m_vecGunCrosshair.m_Value = vec3_origin;
  }
}


// CPropVehicleDriveable::~CPropVehicleDriveable  (line 382, @0x00000000023f8e80, libserver.so)  // inlines: DestroyServerVehicle
// calls: CPropVehicle::~CPropVehicle
// callers: CPropVehicleDriveable::~CPropVehicleDriveable
void __fastcall CPropVehicleDriveable::~CPropVehicleDriveable(CPropVehicleDriveable *const this)
{
  CFourWheelServerVehicle *m_pServerVehicle; // rdi

  this->_vptr_IHandleEntity = &off_40D12D0;
  this->_vptr_IPlayerPickupVPhysics = &off_40D1B98;
  this->_vptr_IDrivableVehicle = &off_40D1C00;
  m_pServerVehicle = this->m_pServerVehicle;
  if ( m_pServerVehicle != 0 )
  {
    (*(m_pServerVehicle->_vptr_IVehicle + 76))(m_pServerVehicle);
    this->m_pServerVehicle = 0;
  }
  CPropVehicle::~CPropVehicle(this);
}


// CPropVehicleDriveable::~CPropVehicleDriveable  (line 382, @0x00000000023f8ee0, libserver.so)
// calls: CPropVehicleDriveable::~CPropVehicleDriveable, CBaseEntity::operator delete
void __fastcall CPropVehicleDriveable::~CPropVehicleDriveable(CPropVehicleDriveable *const this)
{
  CPropVehicleDriveable::~CPropVehicleDriveable(this);
  CBaseEntity::operator delete(this);
}


// CPropVehicleDriveable::CreateServerVehicle  (line 390, @0x000000000240c690, libserver.so)
// calls: operator new, CFourWheelServerVehicle::CFourWheelServerVehicle, operator delete, _Unwind_Resume
void __fastcall CPropVehicleDriveable::CreateServerVehicle(CPropVehicleDriveable *const this)
{
  CFourWheelServerVehicle *v2; // rbx

  v2 = operator new(0x2D0u);
  CFourWheelServerVehicle::CFourWheelServerVehicle(v2);
  this->m_pServerVehicle = v2;
  (*(v2->_vptr_IVehicle + 65))(v2, this);
}


// CPropVehicleDriveable::DestroyServerVehicle  (line 400, @0x0000000002405ec0, libserver.so)
void __fastcall CPropVehicleDriveable::DestroyServerVehicle(CPropVehicleDriveable *const this)
{
  CFourWheelServerVehicle *m_pServerVehicle; // rdi

  m_pServerVehicle = this->m_pServerVehicle;
  if ( m_pServerVehicle != 0 )
  {
    (*(m_pServerVehicle->_vptr_IVehicle + 76))(m_pServerVehicle);
    this->m_pServerVehicle = 0;
  }
}


// CPropVehicleDriveable::Precache  (line 412, @0x00000000023f9400, libserver.so)  // inlines: CUtlSymbolLarge, DestroyServerVehicle, GetEntityName, Initialize, Precache, String, ToCStr
// calls: CBaseProp::Precache, CFourWheelVehiclePhysics::Precache, PhysFindOrAddVehicleScript, Warning
// strings: "Vehicle (%s) unable to properly initialize due to script error in (%s)!\n"
void __fastcall CPropVehicleDriveable::Precache(
        CPropVehicleDriveable *const this,
        const CEntityPrecacheContext *pContext)
{
  CFourWheelServerVehicle *m_pServerVehicle; // rdi
  const char *m_pAsString; // rdi
  const char *v6; // rdx
  const char *v7; // rsi

  CBaseProp::Precache(this, pContext);
  CFourWheelVehiclePhysics::Precache(&this->m_VehiclePhysics, pContext);
  m_pServerVehicle = this->m_pServerVehicle;
  if ( m_pServerVehicle != 0 )
  {
    (*(m_pServerVehicle->_vptr_IVehicle + 76))(m_pServerVehicle);
    this->m_pServerVehicle = 0;
  }
  (*(this->_vptr_IHandleEntity + 257))(this);
  m_pAsString = "";
  if ( this->m_vehicleScript.u.m_Id != 0 )
    m_pAsString = this->m_vehicleScript.u.m_pAsString;
  if ( PhysFindOrAddVehicleScript(m_pAsString, 0, &this->m_pServerVehicle->m_vehicleSounds) )
  {
    (*(this->m_pServerVehicle->_vptr_IVehicle + 59))(this->m_pServerVehicle, pContext);
  }
  else
  {
    v6 = "";
    if ( this->m_vehicleScript.u.m_Id != 0 )
      v6 = this->m_vehicleScript.u.m_pAsString;
    v7 = "";
    if ( this->m_pEntity->m_name.u.m_Id != 0 )
      v7 = this->m_pEntity->m_name.u.m_pAsString;
    Warning("Vehicle (%s) unable to properly initialize due to script error in (%s)!\n", v7, v6);
  }
}


// CPropVehicleDriveable::Spawn  (line 440, @0x00000000023fc150, libserver.so)
// calls: CPropVehicle::Spawn, CBaseEntity::SetDamageOptions
void __fastcall CPropVehicleDriveable::Spawn(CPropVehicleDriveable *const this, const CEntityKeyValues *pKeyValues)
{
  CPropVehicle::Spawn(this, pKeyValues);
  this->m_flMinimumSpeedToEnterExit = 0.0;
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_EVENTS_ONLY);
  this->m_bEngineLocked = 0;
}


// CPropVehicleDriveable::Restore  (line 453, @0x00000000023f8db0, libserver.so)  // inlines: DestroyServerVehicle
// calls: CPropVehicle::Restore
int __fastcall CPropVehicleDriveable::Restore(CPropVehicleDriveable *const this, IRestore *const restore)
{
  CFourWheelServerVehicle *m_pServerVehicle; // rdi

  m_pServerVehicle = this->m_pServerVehicle;
  if ( m_pServerVehicle != 0 )
  {
    (*(m_pServerVehicle->_vptr_IVehicle + 76))(m_pServerVehicle);
    this->m_pServerVehicle = 0;
  }
  (*(this->_vptr_IHandleEntity + 257))(this);
  return CPropVehicle::Restore(this, restore);
}


// CPropVehicleDriveable::OnRestore  (line 469, @0x00000000023fb490, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator!=, operator=
// calls: CBaseModelEntity::OnRestore, CBaseEntity::GetAbsOrigin
void __fastcall CPropVehicleDriveable::OnRestore(CPropVehicleDriveable *const this)
{
  CGlobalVars *v2; // r12
  float v3; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  __int64 v5; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const Vector *AbsOrigin; // rax
  vec_t *p_x; // [rsp+8h] [rbp-18h]

  CBaseModelEntity::OnRestore(this);
  if ( !this->m_bExitAnimOn.m_Value )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    if ( AbsOrigin->x != this->m_vecEyeExitEndpoint.m_Value.x
      || AbsOrigin->y != this->m_vecEyeExitEndpoint.m_Value.y
      || AbsOrigin->z != this->m_vecEyeExitEndpoint.m_Value.z )
    {
      p_x = &AbsOrigin->x;
      (*(this->_vptr_IHandleEntity + 22))(this, 1808, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_vecEyeExitEndpoint.m_Value.x = *p_x;
      this->m_vecEyeExitEndpoint.m_Value.y = p_x[1];
      this->m_vecEyeExitEndpoint.m_Value.z = p_x[2];
    }
  }
  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v3 = v2->m_flCurrentTime + 5.0;
  }
  else
  {
    v3 = 5.0;
  }
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_flNoImpactDamageTime = v3;
  v5 = (vptr_IHandleEntity[101])(this);
  if ( v5 != 0 )
    (*(*v5 + 296LL))(v5);
}


// CPropVehicleDriveable::GetVectors  (line 497, @0x00000000023f9220, libserver.so)  // inlines: GetColumn, MatrixGetColumn, operator=
// calls: CBaseEntity::EntityToWorldTransform
void __fastcall CPropVehicleDriveable::GetVectors(
        const CPropVehicleDriveable *const this,
        Vector *pForward,
        Vector *pRight,
        Vector *pUp)
{
  const matrix3x4_t *v7; // rax
  vec_t v8; // xmm2_4
  vec_t v9; // xmm0_4
  vec_t v10; // xmm2_4
  vec_t v11; // xmm0_4
  vec_t v12; // xmm2_4
  vec_t v13; // xmm0_4

  v7 = CBaseEntity::EntityToWorldTransform(this);
  if ( pForward != 0 )
  {
    v8 = v7->m_flMatVal[1][1];
    v9 = v7->m_flMatVal[0][1];
    pForward->z = v7->m_flMatVal[2][1];
    pForward->y = v8;
    pForward->x = v9;
  }
  if ( pRight != 0 )
  {
    v10 = v7->m_flMatVal[1][0];
    v11 = v7->m_flMatVal[0][0];
    pRight->z = v7->m_flMatVal[2][0];
    pRight->y = v10;
    pRight->x = v11;
  }
  if ( pUp != 0 )
  {
    v12 = v7->m_flMatVal[1][2];
    v13 = v7->m_flMatVal[0][2];
    pUp->z = v7->m_flMatVal[2][2];
    pUp->y = v12;
    pUp->x = v13;
  }
}


// CPropVehicleDriveable::VehicleAngleVectors  (line 522, @0x00000000023f92c0, libserver.so)  // inlines: operator*=
// calls: AngleVectors
void __fastcall CPropVehicleDriveable::VehicleAngleVectors(
        CPropVehicleDriveable *const this,
        const QAngle *const angles,
        Vector *pForward,
        Vector *pRight,
        Vector *pUp)
{
  AngleVectors(angles, pRight, pForward, pUp);
  if ( pForward != 0 )
  {
    pForward->x = -pForward->x;
    pForward->y = -pForward->y;
    pForward->z = -pForward->z;
  }
}


// CPropVehicleDriveable::Use  (line 535, @0x00000000023fa940, libserver.so)  // inlines: ResetUseKey, ToBasePlayer
void __fastcall CPropVehicleDriveable::Use(
        CPropVehicleDriveable *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  if ( pActivator != 0 && (*(pActivator->_vptr_IHandleEntity + 140))(pActivator) != 0 )
  {
    pActivator[3].m_pfnTouch.__delta &= ~0x20uLL;
    (*(this->m_pServerVehicle->_vptr_IVehicle + 18))(this->m_pServerVehicle, pActivator, value > 0.0);
  }
}


// CPropVehicleDriveable::EnterVehicle  (line 550, @0x000000000240acb0, libserver.so)  // inlines: CEntityHandle, CVariantBase, FireOutput, Free, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFloat, GetHandleEntity, GetSavedViewOffset, GetSerialNumber, IndexToIdentity, Init, InitViewSmoothing, LookupEntity, NetworkStateChanged, Set, ToBasePlayer, VectorAdd, curtime, operator CBasePlayer*, operator!=, operator+, operator=, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CBaseEntity::SetNextThink, CBaseEntity::GetAbsOrigin, CPropVehicleDriveable::StartEngine, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropVehicleDriveable::EnterVehicle(
        CPropVehicleDriveable *const this,
        CBaseCombatCharacter *pPassenger)
{
  uint32 m_Index; // ecx
  unsigned __int16 v5; // dx
  int v6; // esi
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityIdentity *m_pEntity; // rax
  int v13; // edx
  __int16 v14; // cx
  double v15; // xmm1_8
  double v16; // xmm0_8
  CGlobalVars *v17; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CFourWheelServerVehicle *m_pServerVehicle; // rax
  vec_t *v20; // r13
  const Vector *AbsOrigin; // rax
  CFourWheelServerVehicle *v22; // rdx
  vec_t v23; // xmm0_4
  vec_t v24; // xmm2_4
  vec_t v25; // xmm1_4
  ConVar *m_pParent; // rax
  float x; // [rsp+4h] [rbp-3Ch]
  float y; // [rsp+8h] [rbp-38h]
  float z; // [rsp+Ch] [rbp-34h]
  CVariant value; // [rsp+10h] [rbp-30h] BYREF

  if ( pPassenger != 0 && (*(pPassenger->_vptr_IHandleEntity + 140))(pPassenger) != 0 )
  {
    m_Index = this->m_hPlayer.m_Value.m_Index;
    if ( m_Index == -1 )
    {
      v5 = 0x7FFF;
      v6 = 0x7FFF;
    }
    else
    {
      v5 = this->m_hPlayer.m_Value.m_Index & 0x7FFF;
      v6 = v5;
    }
    v7 = (this->m_hPlayer.m_Value.m_Index >> 15 << 15) | v5 & 0x7FFF;
    value.m_int = v7;
    if ( v7 + 2 > 1 )
    {
      v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
      if ( v8 != 0 )
      {
        v9 = &v8[v6 & 0x1FF];
        if ( v9 != 0 && v7 == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
        {
          (*(this->_vptr_IHandleEntity + 275))(this, 0);
          m_Index = this->m_hPlayer.m_Value.m_Index;
        }
      }
    }
    if ( m_Index + 2 <= 1
      || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Value.m_Index) >> 9) & 0x3F]) == 0
      || (v11 = &v10[this->m_hPlayer.m_Value.m_Index & 0x1FF]) == 0
      || v11->m_EHandle.m_Index != m_Index
      || pPassenger != v11->m_pInstance )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1784, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      m_pEntity = pPassenger->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v14 = 0x7FFF;
        else
          v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hPlayer.m_Value.m_Index) = v14 | this->m_hPlayer.m_Value.m_Index & 0x8000;
        this->m_hPlayer.m_Value.m_Index = (v13 << 15) | this->m_hPlayer.m_Value.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hPlayer.m_Value.m_Index = -1;
      }
    }
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_playerOn, pPassenger, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    if ( !this->m_bEnterAnimOn.m_Value )
      CPropVehicleDriveable::StartEngine(this);
    v16 = 0.0;
    v17 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v16 = LODWORD(v17->m_flCurrentTime);
    }
    CBaseEntity::SetNextThink(this, v16, v15, 0);
    m_pServerVehicle = this->m_pServerVehicle;
    x = m_pServerVehicle->m_savedViewOffset.x;
    y = m_pServerVehicle->m_savedViewOffset.y;
    z = m_pServerVehicle->m_savedViewOffset.z;
    v20 = (*(pPassenger->_vptr_IHandleEntity + 165))(pPassenger);
    AbsOrigin = CBaseEntity::GetAbsOrigin(pPassenger);
    v22 = this->m_pServerVehicle;
    v23 = z + AbsOrigin->z;
    v24 = x + AbsOrigin->x;
    v25 = y + AbsOrigin->y;
    v22->m_ViewSmoothing.bWasRunningAnim = 0;
    m_pParent = r_JeepFOV.m_pParent;
    v22->m_ViewSmoothing.vecOriginSaved.x = v24;
    v22->m_ViewSmoothing.vecOriginSaved.y = v25;
    v22->m_ViewSmoothing.vecOriginSaved.z = v23;
    v22->m_ViewSmoothing.vecAnglesSaved.x = *v20;
    v22->m_ViewSmoothing.vecAnglesSaved.y = v20[1];
    v22->m_ViewSmoothing.vecAnglesSaved.z = v20[2];
    v22->m_ViewSmoothing.flFOV = m_pParent->m_Value.m_fValue;
    (*(this->m_VehiclePhysics.m_pVehicle->_vptr_IPhysicsVehicleController + 12))(this->m_VehiclePhysics.m_pVehicle);
  }
}


// CPropVehicleDriveable::ExitVehicle  (line 594, @0x000000000240a900, libserver.so)  // inlines: CEntityHandle, CVariantBase, FireOutput, FireOutput<float>, Free, GetEntityIdentity, GetEntryIndex, GetFloat, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, InitViewSmoothing, LookupEntity, NetworkStateChanged, ResetUseKey, Set, StopEngine, operator CBasePlayer*, operator!=, operator=, operator=<float>, operator=<int>, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CFourWheelVehiclePhysics::TurnOff, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropVehicleDriveable::ExitVehicle(CPropVehicleDriveable *const this, int nRole)
{
  uint32 m_Index; // edx
  unsigned __int16 v4; // cx
  int v5; // esi
  int v6; // eax
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CEntityInstance *m_pInstance; // r12
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  bool v12; // zf
  CFourWheelServerVehicle *m_pServerVehicle; // rax
  vec_t x; // xmm0_4
  ConVar *m_pParent; // rdx
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  m_Index = this->m_hPlayer.m_Value.m_Index;
  if ( m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hPlayer.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (m_Index >> 15 << 15) | v4 & 0x7FFF;
  value.m_int = v6;
  if ( (v6 + 2) > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v7 != 0 )
    {
      v8 = &v7[v5 & 0x1FF];
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0 )
        {
          if ( m_Index + 2 > 1 )
          {
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Value.m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = &v10[this->m_hPlayer.m_Value.m_Index & 0x1FF];
              if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index && v11->m_pInstance != 0 )
              {
                (*(this->_vptr_IHandleEntity + 22))(this, 1784, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                this->m_hPlayer.m_Value.m_Index = -1;
              }
            }
          }
          m_pInstance[54]._vptr_IHandleEntity = (m_pInstance[54]._vptr_IHandleEntity & ~0x20uLL);
          value.m_type = 0;
          value.m_flags = 0;
          value.m_uint64 = 0;
          CEntityIOOutput::FireOutputInternal(&this->m_playerOff, m_pInstance, this, &value, 0.0);
          if ( (value.m_flags & 1) != 0 )
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
          value.m_type = 1;
          this->m_attackaxis.m_Value = 0.0;
          value.m_flags = 0;
          value.m_int = 0;
          CEntityIOOutput::FireOutputInternal(&this->m_attackaxis, m_pInstance, this, &value, 0.0);
          if ( (value.m_flags & 1) != 0 )
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
          value.m_type = 1;
          this->m_attack2axis.m_Value = 0.0;
          value.m_flags = 0;
          value.m_int = 0;
          CEntityIOOutput::FireOutputInternal(&this->m_attack2axis, m_pInstance, this, &value, 0.0);
          if ( (value.m_flags & 1) != 0 )
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
          if ( this->m_nSpeed.m_Value != 0 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            v12 = this->m_flThrottle.m_Value == 0.0;
            this->m_nSpeed.m_Value = 0;
          }
          else
          {
            v12 = this->m_flThrottle.m_Value == 0.0;
          }
          if ( !v12 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_flThrottle.m_Value = 0.0;
          }
          CFourWheelVehiclePhysics::TurnOff(&this->m_VehiclePhysics);
          (*(this->m_VehiclePhysics.m_pVehicle->_vptr_IPhysicsVehicleController + 13))(this->m_VehiclePhysics.m_pVehicle);
          m_pServerVehicle = this->m_pServerVehicle;
          x = vec3_origin.x;
          m_pServerVehicle->m_ViewSmoothing.bWasRunningAnim = 0;
          m_pServerVehicle->m_ViewSmoothing.vecOriginSaved.x = x;
          m_pServerVehicle->m_ViewSmoothing.vecOriginSaved.y = vec3_origin.y;
          m_pServerVehicle->m_ViewSmoothing.vecOriginSaved.z = vec3_origin.z;
          m_pServerVehicle->m_ViewSmoothing.vecAnglesSaved.x = vec3_angle.x;
          m_pServerVehicle->m_ViewSmoothing.vecAnglesSaved.y = vec3_angle.y;
          m_pParent = r_JeepFOV.m_pParent;
          m_pServerVehicle->m_ViewSmoothing.vecAnglesSaved.z = vec3_angle.z;
          m_pServerVehicle->m_ViewSmoothing.flFOV = m_pParent->m_Value.m_fValue;
        }
      }
    }
  }
}


// CPropVehicleDriveable::ResetUseKey  (line 623, @0x0000000002405f00, libserver.so)
void __fastcall CPropVehicleDriveable::ResetUseKey(CPropVehicleDriveable *const this, CBasePlayer *pPlayer)
{
  pPlayer->m_afButtonPressed &= ~0x20uLL;
}


// CPropVehicleDriveable::DriveVehicle  (line 631, @0x0000000002405f10, libserver.so)
// callers: CPropVehicleDriveable::SetupMove
void __fastcall CPropVehicleDriveable::DriveVehicle(
        CPropVehicleDriveable *const this,
        CBasePlayer *pPlayer,
        CUserCmd *ucmd)
{
  if ( (*(pPlayer->_vptr_IHandleEntity + 139))(pPlayer) != 0 )
    (*(this->_vptr_IHandleEntity + 259))(
      this,
      ucmd,
      pPlayer->m_afButtonPressed,
      pPlayer->m_afButtonReleased,
      gpGlobals->interval_per_tick);
}


// CPropVehicleDriveable::DriveVehicle  (line 643, @0x000000000240b040, libserver.so)  // inlines: CVariantBase, FireOutput, FireOutput<float>, Free, NetworkStateChanged, Set, operator=<bool>, operator=<float>, operator=<int>, ~CVariantBase
// calls: CFourWheelVehiclePhysics::UpdateDriverControls, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CPropVehicleDriveable::DriveVehicle(
        CPropVehicleDriveable *const this,
        double flFrameTime,
        CUserCmd *ucmd,
        __int16 iButtonsDown,
        int iButtonsReleased,
        float a6)
{
  ButtonBitMask_t buttons; // r13
  int m_nSpeed; // r12d
  int m_nRPM; // eax
  __int16 v11; // r12
  int m_nBoostTimeLeft; // r12d
  bool m_bHasBoost; // r12
  float v14; // xmm0_4
  float v15; // r13d
  float throttle; // [rsp+Ch] [rbp-34h]
  CVariant value; // [rsp+10h] [rbp-30h] BYREF

  buttons = ucmd->buttons;
  CFourWheelVehiclePhysics::UpdateDriverControls(&this->m_VehiclePhysics, ucmd, flFrameTime, a6);
  m_nSpeed = this->m_VehiclePhysics.m_nSpeed;
  if ( m_nSpeed != this->m_nSpeed.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nSpeed.m_Value = m_nSpeed;
  }
  m_nRPM = 0;
  v11 = 4095;
  if ( this->m_VehiclePhysics.m_nRPM >= 0 )
    m_nRPM = this->m_VehiclePhysics.m_nRPM;
  if ( m_nRPM <= 4095 )
    v11 = m_nRPM;
  if ( v11 != this->m_nRPM.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nRPM.m_Value = v11;
  }
  m_nBoostTimeLeft = this->m_VehiclePhysics.m_nBoostTimeLeft;
  if ( m_nBoostTimeLeft != this->m_nBoostTimeLeft.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nBoostTimeLeft.m_Value = m_nBoostTimeLeft;
  }
  m_bHasBoost = this->m_VehiclePhysics.m_bHasBoost;
  if ( m_bHasBoost != this->m_bHasBoost.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1804, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bHasBoost.m_Value = m_bHasBoost;
  }
  if ( this->m_VehiclePhysics.m_controls.throttle != this->m_flThrottle.m_Value )
  {
    throttle = this->m_VehiclePhysics.m_controls.throttle;
    (*(this->_vptr_IHandleEntity + 22))(this, 1796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flThrottle.m_Value = throttle;
  }
  if ( this->m_nScannerDisabledWeapons.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1834, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nScannerDisabledWeapons.m_Value = 0;
  }
  if ( this->m_nScannerDisabledVehicle.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1835, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nScannerDisabledVehicle.m_Value = 0;
  }
  if ( (iButtonsDown & 1) != 0 )
  {
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_pressedAttack, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
  if ( (iButtonsDown & 0x800) != 0 )
  {
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_pressedAttack2, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
  v14 = 1.0;
  if ( (buttons & 1) == 0 )
    v14 = 0.0;
  if ( (buttons & 0x800) != 0 )
    v15 = 1.0;
  else
    v15 = 0.0;
  this->m_attackaxis.m_Value = v14;
  value.m_float = v14;
  value.m_type = 1;
  value.m_flags = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_attackaxis, this, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  this->m_attack2axis.m_Value = v15;
  value.m_type = 1;
  value.m_flags = 0;
  value.m_float = v15;
  CEntityIOOutput::FireOutputInternal(&this->m_attack2axis, this, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CPropVehicleDriveable::IsOverturned  (line 690, @0x00000000023f8af0, libserver.so)  // inlines: DotProduct
// calls: CBaseEntity::GetAbsAngles
bool __fastcall CPropVehicleDriveable::IsOverturned(CPropVehicleDriveable *const this)
{
  void (__fastcall *v2)(CPropVehicleDriveable *const, const QAngle *, _QWORD, _QWORD, Vector *); // r12
  const QAngle *AbsAngles; // rax
  Vector vUp; // [rsp+0h] [rbp-20h] BYREF

  v2 = *(this->_vptr_IHandleEntity + 258);
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  v2(this, AbsAngles, 0, 0, &vUp);
  return (((vUp.x * 0.0) + (vUp.y * 0.0)) + vUp.z) < 0.0;
}


// CPropVehicleDriveable::Think  (line 707, @0x000000000240a1c0, libserver.so)  // inlines: CVariantBase, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, curtime, operator CEntityInstance*, operator bool, operator!=<CBaseEntity>, operator->, ~CVariantBase
// calls: CPropVehicle::Think, CBaseEntity::SetNextThink, CEntityInstance::AcceptInput, UTIL_Remove, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropVehicleDriveable::Think(CPropVehicleDriveable *const this)
{
  double v2; // xmm0_8
  uint32 m_Index; // eax
  CConcreteEntityList *v4; // rsi
  CEntityIdentity *v5; // rdx
  __int64 v6; // rcx
  CEntityIdentity *v7; // rdx
  CGlobalVars *v8; // r12
  double v9; // xmm0_8
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v14; // r12
  float m_flTurnOffKeepUpright; // xmm0_4
  FnGlobalVarsWarningFunc v16; // rax
  uint32 v17; // edx
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v19; // rax
  CEntityIdentity *v20; // rax
  uint32 v21; // eax
  CEntityInstance *v22; // rdi
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  CGlobalVars *v25; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v27; // xmm0_8
  FnGlobalVarsWarningFunc v28; // rax
  __int64 v29; // rax
  float v30; // [rsp+Ch] [rbp-34h]
  variant_t emptyVariant; // [rsp+10h] [rbp-30h] BYREF

  CPropVehicle::Think(this);
  if ( (*(this->_vptr_IHandleEntity + 278))(this) != 0 )
  {
    v25 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, v2, 0.0);
      }
      *&v27 = LODWORD(v25->m_flCurrentTime);
    }
    else
    {
      v27 = 0.0;
    }
    CBaseEntity::SetNextThink(this, v27, 0.0, 0);
  }
  m_Index = this->m_hNPCDriver.m_Index;
  v4 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hNPCDriver.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = this->m_hNPCDriver.m_Index & 0x1FF;
      v4 = (8 * v6);
      v7 = &v5[v6];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
      {
        v29 = (*(this->_vptr_IHandleEntity + 101))(this);
        (*(*v29 + 320LL))(v29);
      }
    }
  }
  if ( this->m_flTurnOffKeepUpright != 0.0 )
  {
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v28 = gpGlobals->m_pfnWarningFunc;
        if ( v28 != 0 )
          (v28)(1, v4);
      }
      *&v9 = LODWORD(v8->m_flCurrentTime);
    }
    else
    {
      v9 = 0.0;
    }
    CBaseEntity::SetNextThink(this, v9, 0.0, 0);
    v10 = this->m_hKeepUpright.m_Index;
    if ( v10 + 2 > 1 )
    {
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hKeepUpright.m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[this->m_hKeepUpright.m_Index & 0x1FF];
        if ( v12 != 0 )
        {
          m_flCurrentTime = 0.0;
          if ( v10 == v12->m_EHandle.m_Index && v12->m_pInstance != 0 )
          {
            v14 = gpGlobals;
            m_flTurnOffKeepUpright = this->m_flTurnOffKeepUpright;
            if ( gpGlobals != 0 )
            {
              if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
              {
                v16 = gpGlobals->m_pfnWarningFunc;
                if ( v16 != 0 )
                {
                  v30 = this->m_flTurnOffKeepUpright;
                  (v16)(1, m_flTurnOffKeepUpright, 0.0);
                  m_flTurnOffKeepUpright = v30;
                }
              }
              m_flCurrentTime = v14->m_flCurrentTime;
            }
            if ( m_flCurrentTime > m_flTurnOffKeepUpright )
            {
              v17 = this->m_hKeepUpright.m_Index;
              m_pInstance = 0;
              emptyVariant.m_type = 0;
              emptyVariant.m_flags = 0;
              emptyVariant.m_uint64 = 0;
              if ( v17 + 2 > 1 )
              {
                v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hKeepUpright.m_Index) >> 9)
                                                                     & 0x3F];
                if ( v19 != 0 )
                {
                  v20 = &v19[this->m_hKeepUpright.m_Index & 0x1FF];
                  if ( v20 != 0 && v17 == v20->m_EHandle.m_Index )
                    m_pInstance = v20->m_pInstance;
                }
              }
              CEntityInstance::AcceptInput(m_pInstance, "TurnOff", this, this, &emptyVariant, 3);
              v21 = this->m_hKeepUpright.m_Index;
              v22 = 0;
              this->m_flTurnOffKeepUpright = 0.0;
              if ( v21 + 2 > 1 )
              {
                v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hKeepUpright.m_Index) >> 9)
                                                                     & 0x3F];
                if ( v23 != 0 )
                {
                  v24 = &v23[this->m_hKeepUpright.m_Index & 0x1FF];
                  if ( v24 != 0 && v21 == v24->m_EHandle.m_Index )
                    v22 = v24->m_pInstance;
                }
              }
              UTIL_Remove(v22);
              if ( (emptyVariant.m_flags & 1) != 0 )
                (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, emptyVariant.m_uint64);
            }
          }
        }
      }
    }
  }
}


// CPropVehicleDriveable::SetupMove  (line 742, @0x0000000002405f90, libserver.so)
// calls: CPropVehicleDriveable::DriveVehicle
void __fastcall CPropVehicleDriveable::SetupMove(
        CPropVehicleDriveable *const this,
        CBasePlayer *player,
        CUserCmd *ucmd,
        IMoveHelper *pHelper,
        CMoveData *move)
{
  if ( this->m_VehiclePhysics.m_bIsOn
    && !this->m_bEngineLocked
    && !this->m_bEnterAnimOn.m_Value
    && !this->m_bExitAnimOn.m_Value )
  {
    CPropVehicleDriveable::DriveVehicle(this, player, ucmd);
  }
}


// CPropVehicleDriveable::InputLock  (line 758, @0x00000000023f8650, libserver.so)
void __fastcall CPropVehicleDriveable::InputLock(CPropVehicleDriveable *const this, inputdata_t *const inputdata)
{
  this->m_bLocked = 1;
}


// CPropVehicleDriveable::InputUnlock  (line 766, @0x00000000023f8660, libserver.so)
void __fastcall CPropVehicleDriveable::InputUnlock(CPropVehicleDriveable *const this, inputdata_t *const inputdata)
{
  this->m_bLocked = 0;
}


// CPropVehicleDriveable::CanEnterVehicle  (line 774, @0x00000000023f9af0, libserver.so)  // inlines: operator<=<float>
bool __fastcall CPropVehicleDriveable::CanEnterVehicle(CPropVehicleDriveable *const this, CBaseEntity *pEntity)
{
  bool result; // al

  if ( (*(this->_vptr_IHandleEntity + 262))(this) != 0 && (*(this->_vptr_IHandleEntity + 262))(this) != pEntity
    || (*(this->_vptr_IHandleEntity + 260))(this) != 0 )
  {
    return 0;
  }
  result = 0;
  if ( !this->m_bLocked )
    return this->m_flMinimumSpeedToEnterExit >= this->m_nSpeed.m_Value;
  return result;
}


// CPropVehicleDriveable::CanExitVehicle  (line 794, @0x00000000023f8670, libserver.so)  // inlines: operator<=<float>
bool __fastcall CPropVehicleDriveable::CanExitVehicle(CPropVehicleDriveable *const this, CBaseEntity *pEntity)
{
  bool result; // al

  result = 0;
  if ( !this->m_bEnterAnimOn.m_Value && !this->m_bExitAnimOn.m_Value && !this->m_bLocked )
    return this->m_flMinimumSpeedToEnterExit >= this->m_nSpeed.m_Value;
  return result;
}


// CPropVehicleDriveable::InputTurnOn  (line 803, @0x00000000023fa650, libserver.so)  // inlines: StartEngine
// calls: CFourWheelVehiclePhysics::TurnOn, CFourWheelVehiclePhysics::SetDisableEngine
void __fastcall CPropVehicleDriveable::InputTurnOn(CPropVehicleDriveable *const this, inputdata_t *const inputdata)
{
  CFourWheelVehiclePhysics *p_m_VehiclePhysics; // rbx

  p_m_VehiclePhysics = &this->m_VehiclePhysics;
  this->m_bEngineLocked = 0;
  CFourWheelVehiclePhysics::TurnOn(&this->m_VehiclePhysics);
  CFourWheelVehiclePhysics::SetDisableEngine(p_m_VehiclePhysics, 0);
}


// CPropVehicleDriveable::InputTurnOff  (line 815, @0x00000000023f9320, libserver.so)  // inlines: StopEngine
// calls: CFourWheelVehiclePhysics::TurnOff, CFourWheelVehiclePhysics::SetDisableEngine
void __fastcall CPropVehicleDriveable::InputTurnOff(CPropVehicleDriveable *const this, inputdata_t *const inputdata)
{
  CFourWheelVehiclePhysics *p_m_VehiclePhysics; // rbx

  p_m_VehiclePhysics = &this->m_VehiclePhysics;
  this->m_bEngineLocked = 1;
  CFourWheelVehiclePhysics::TurnOff(&this->m_VehiclePhysics);
  CFourWheelVehiclePhysics::SetDisableEngine(p_m_VehiclePhysics, 1);
}


// CPropVehicleDriveable::IsEngineOn  (line 826, @0x0000000002405fe0, libserver.so)
bool __fastcall CPropVehicleDriveable::IsEngineOn(CPropVehicleDriveable *const this)
{
  return this->m_VehiclePhysics.m_bIsOn;
}


// CPropVehicleDriveable::StartEngine  (line 834, @0x0000000002405ff0, libserver.so)
// calls: CFourWheelVehiclePhysics::TurnOn, CFourWheelVehiclePhysics::SetHandbrake
// callers: CPropVehicleDriveable::EnterVehicle
void __fastcall CPropVehicleDriveable::StartEngine(CPropVehicleDriveable *const this)
{
  if ( this->m_bEngineLocked )
    CFourWheelVehiclePhysics::SetHandbrake(&this->m_VehiclePhysics, 1);
  else
    CFourWheelVehiclePhysics::TurnOn(&this->m_VehiclePhysics);
}


// CPropVehicleDriveable::StopEngine  (line 848, @0x0000000002406030, libserver.so)
// calls: CFourWheelVehiclePhysics::TurnOff
void __fastcall CPropVehicleDriveable::StopEngine(CPropVehicleDriveable *const this)
{
  CFourWheelVehiclePhysics::TurnOff(&this->m_VehiclePhysics);
}


// CPropVehicleDriveable::VPhysicsCollision  (line 856, @0x00000000023fbad0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, VectorMultiply, curtime, operator*
// calls: CBaseEntity::VPhysicsCollision, __dynamic_cast, CalculatePhysicsImpactDamage, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
void __fastcall CPropVehicleDriveable::VPhysicsCollision(
        CPropVehicleDriveable *const this,
        int index,
        gamevcollisionevent_t *pEvent)
{
  __int64 v3; // r13
  __int64 v6; // rax
  __int64 v7; // r15
  CBaseEntity *v8; // r14
  CEntityInstance *m_pInstance; // rsi
  unsigned __int16 v10; // dx
  int v11; // edi
  int v12; // ecx
  CEntitySystem *v13; // rdx
  CEntityIdentity *v14; // rax
  __int64 v15; // rdi
  CEntityIdentity *v16; // rax
  float v17; // xmm0_4
  float m_flCurrentTime; // xmm1_4
  float v19; // xmm2_4
  float m_flNoImpactDamageTime; // xmm0_4
  CGlobalVars *v21; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v23; // xmm0_4
  Vector *v24; // rax
  vec_t v25; // xmm3_4
  vec_t v26; // xmm1_4
  int v27; // r13d
  vec_t v28; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  CBaseEntity *v30; // rax
  CBaseEntity *v31; // rax
  float v32; // [rsp+18h] [rbp-F8h]
  float flDamage; // [rsp+1Ch] [rbp-F4h]
  float flDamagea; // [rsp+1Ch] [rbp-F4h]
  int damageType; // [rsp+2Ch] [rbp-E4h] BYREF
  Vector damagePos; // [rsp+30h] [rbp-E0h] BYREF
  Vector damageForce; // [rsp+40h] [rbp-D0h] BYREF
  CTakeDamageInfo info; // [rsp+50h] [rbp-C0h] BYREF

  v3 = index;
  if ( (*(this->_vptr_IHandleEntity + 262))(this) != 0 )
  {
    v6 = (*(this->_vptr_IHandleEntity + 262))(this);
    v7 = (*(*v6 + 1176LL))(v6);
    if ( v7 != 0 )
    {
      v8 = pEvent->pEntities[v3 == 0];
      if ( pEvent->deltaCollisionTime >= 0.5 || this != v8 )
      {
        CBaseEntity::VPhysicsCollision(this, v3, pEvent);
        m_pInstance = (v8->m_hOwnerEntity.m_Value.m_Index >> 15);
        if ( v8->m_hOwnerEntity.m_Value.m_Index == -1 )
        {
          v10 = 0x7FFF;
          v11 = 0x7FFF;
        }
        else
        {
          v10 = v8->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
          v11 = v10;
        }
        v12 = (m_pInstance << 15) | v10 & 0x7FFF;
        LODWORD(info._vptr_CTakeDamageInfo) = v12;
        v13 = g_pEntitySystem;
        if ( (v12 + 2) <= 1
          || (v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v11 >> 9]) == 0
          || (v15 = v11 & 0x1FF, v13 = (8 * v15), (v16 = &v14[v15]) == 0)
          || v12 != v16->m_EHandle.m_Index
          || (m_pInstance = v16->m_pInstance, v16->m_pInstance == 0)
          || (v8->m_fEffects.m_Value & 0x20) == 0
          || (*(*v7 + 2752LL))(v7) != 3 )
        {
          if ( (*(v8->_vptr_IHandleEntity + 144))(v8, m_pInstance, v13) == 0
            && __dynamic_cast(v8, &`typeinfo for'CBaseEntity, &`typeinfo for'CBreakable, 0) == 0 )
          {
            damageType = 0;
            v17 = CalculatePhysicsImpactDamage(
                    v3,
                    pEvent,
                    &gDefaultPlayerVehicleImpactDamageTable,
                    1.0,
                    1,
                    &damageType,
                    0);
            m_flCurrentTime = 0.0;
            v19 = v17;
            if ( v17 > 0.0 )
            {
              m_flNoImpactDamageTime = this->m_flNoImpactDamageTime;
              v21 = gpGlobals;
              if ( gpGlobals != 0 )
              {
                if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
                {
                  m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
                  if ( m_pfnWarningFunc != 0 )
                  {
                    v32 = this->m_flNoImpactDamageTime;
                    flDamage = v19;
                    m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                    m_flNoImpactDamageTime = v32;
                    v19 = flDamage;
                  }
                }
                m_flCurrentTime = v21->m_flCurrentTime;
              }
              if ( m_flCurrentTime > m_flNoImpactDamageTime )
              {
                flDamagea = v19;
                (*(pEvent->pInternalData->_vptr_IPhysicsCollisionData + 1))(pEvent->pInternalData, &damagePos);
                v23 = (*(*pEvent->pObjects[v3] + 208LL))(pEvent->pObjects[v3]);
                v24 = &pEvent->postVelocity[v3];
                v25 = pEvent->postVelocity[v3].y * v23;
                v26 = pEvent->postVelocity[v3].z * v23;
                v27 = damageType | 0x10;
                v28 = v23 * v24->x;
                vptr_IHandleEntity = this->_vptr_IHandleEntity;
                damageForce.y = v25;
                damageForce.z = v26;
                damageForce.x = v28;
                v30 = (vptr_IHandleEntity[262])(this);
                CTakeDamageInfo::CTakeDamageInfo(&info, this, v30, &damageForce, &damagePos, flDamagea, v27, 0, 0);
                v31 = (*(this->_vptr_IHandleEntity + 262))(this);
                CBaseEntity::TakeDamage(v31, &info);
                CTakeDamageInfo::~CTakeDamageInfo(&info);
              }
            }
          }
        }
      }
    }
  }
}


// CPropVehicleDriveable::VPhysicsGetObjectList  (line 932, @0x00000000023f9360, libserver.so)
// calls: CFourWheelVehiclePhysics::VPhysicsGetObjectList
int __fastcall CPropVehicleDriveable::VPhysicsGetObjectList(
        CPropVehicleDriveable *const this,
        IPhysicsObject **pList,
        int listMax)
{
  return CFourWheelVehiclePhysics::VPhysicsGetObjectList(&this->m_VehiclePhysics, pList, listMax);
}


// CPropVehicleDriveable::TraceAttack  (line 940, @0x000000000240a550, libserver.so)  // inlines: CVariantBase, Free, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetFloat, curtime, operator CEntityInstance*, operator bool, operator->, operator=, ~CVariantBase
// calls: CBaseEntity::GetAbsOrigin, CreateKeepUpright, CEntityInstance::AcceptInput, CBaseEntity::SetNextThink, CBaseEntity::TraceAttack, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropVehicleDriveable::TraceAttack(
        CPropVehicleDriveable *const this,
        const CTakeDamageInfo *const info,
        const Vector *const vecDir,
        trace_t *ptr)
{
  float v8; // xmm0_4
  uint32 m_Index; // eax
  CConcreteEntityList *v10; // rsi
  char *v11; // rdx
  __int64 v12; // rcx
  const Vector *AbsOrigin; // rax
  CBaseEntity *KeepUpright; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  uint32 v18; // eax
  unsigned int v19; // edx
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CGlobalVars *v23; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v25; // xmm0_4
  double v26; // xmm1_8
  CGlobalVars *v27; // r15
  void (__fastcall *v28)(__int64); // rax
  double v29; // xmm0_8
  CEntityInstance *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  float m_flCurrentTime; // [rsp+4h] [rbp-4Ch]
  float flAngularLimit; // [rsp+8h] [rbp-48h]
  variant_t limitVariant; // [rsp+10h] [rbp-40h] BYREF

  if ( (info->m_bitsDamageType & 0x800000) == 0 )
    goto LABEL_32;
  v8 = (*(this->_vptr_IHandleEntity + 255))(this);
  if ( v8 == 0.0 )
    goto LABEL_32;
  m_Index = this->m_hKeepUpright.m_Index;
  v10 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1 )
  {
    v11 = &CEntityHandle::gm_pEntityList->m_Lock.gap0 + ((LOWORD(this->m_hKeepUpright.m_Index) >> 6) & 0x1F8);
    v10 = *(v11 + 1);
    if ( v10 != 0 )
    {
      v12 = 120LL * (this->m_hKeepUpright.m_Index & 0x1FF);
      v10 = (v10 + v12);
      if ( v10 != 0 && m_Index == LODWORD(v10->m_pIdentityChunks[1]) )
      {
        v30 = 0;
        limitVariant.m_flags = 0;
        limitVariant.m_type = 1;
        limitVariant.m_uint64 = LODWORD(v8);
        v31 = *(v11 + 1);
        if ( v31 != 0 )
        {
          v32 = v31 + v12;
          if ( v32 != 0 && m_Index == *(v32 + 16) )
            v30 = *v32;
        }
        CEntityInstance::AcceptInput(v30, "SetAngularLimit", this, this, &limitVariant, 3);
        if ( (limitVariant.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, limitVariant.m_uint64);
        v18 = this->m_hKeepUpright.m_Index;
        v19 = v18 + 2;
        goto LABEL_12;
      }
    }
  }
  flAngularLimit = (*(this->_vptr_IHandleEntity + 255))(this, v10);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  KeepUpright = CreateKeepUpright(AbsOrigin, &vec3_angle, this, flAngularLimit, 0);
  if ( KeepUpright != 0 )
  {
    m_pEntity = KeepUpright->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v17 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hKeepUpright.m_Index) = v17 | this->m_hKeepUpright.m_Index & 0x8000;
      v18 = (v16 << 15) | this->m_hKeepUpright.m_Index & 0x7FFF;
      this->m_hKeepUpright.m_Index = v18;
      v19 = v18 + 2;
LABEL_12:
      m_pInstance = 0;
      limitVariant.m_type = 0;
      limitVariant.m_flags = 0;
      limitVariant.m_uint64 = 0;
      if ( v19 > 1 )
      {
        v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hKeepUpright.m_Index) >> 9) & 0x3F];
        if ( v21 != 0 )
        {
          v22 = &v21[this->m_hKeepUpright.m_Index & 0x1FF];
          if ( v22 != 0 && v18 == v22->m_EHandle.m_Index )
            m_pInstance = v22->m_pInstance;
        }
      }
      CEntityInstance::AcceptInput(m_pInstance, "TurnOn", this, this, &limitVariant, 3);
      goto LABEL_18;
    }
  }
  limitVariant.m_uint64 = 0;
  limitVariant.m_flags = 0;
  this->m_hKeepUpright.m_Index = -1;
  limitVariant.m_type = 0;
  CEntityInstance::AcceptInput(0, "TurnOn", this, this, &limitVariant, 3);
LABEL_18:
  v23 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    m_flCurrentTime = v23->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v25 = (*(this->_vptr_IHandleEntity + 256))(this);
  v27 = gpGlobals;
  this->m_flTurnOffKeepUpright = v25 + m_flCurrentTime;
  if ( v27 != 0 )
  {
    if ( !v27->m_bEnableAssertions && !v27->m_bInSimulation )
    {
      v28 = v27->m_pfnWarningFunc;
      if ( v28 != 0 )
        v28(1);
    }
    *&v29 = LODWORD(v27->m_flCurrentTime);
  }
  else
  {
    v29 = 0.0;
  }
  CBaseEntity::SetNextThink(this, v29, v26, 0);
  if ( (limitVariant.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, limitVariant.m_uint64);
LABEL_32:
  CBaseEntity::TraceAttack(this, info, vecDir, ptr);
}


// CPropVehicleDriveable::Event_KilledOther  (line 1058, @0x00000000023f86d0, libserver.so)
void __fastcall CPropVehicleDriveable::Event_KilledOther(
        CPropVehicleDriveable *const this,
        CBaseEntity *pVictim,
        const CTakeDamageInfo *const info)
{
  __int64 v5; // rax

  v5 = (*(this->_vptr_IHandleEntity + 262))(this);
  if ( v5 != 0 )
    (*(*v5 + 744LL))(v5, pVictim, info);
}


// CFourWheelServerVehicle::CFourWheelServerVehicle  (line 1072, @0x000000000240c620, libserver.so)  // inlines: memset
// calls: CBaseServerVehicle::CBaseServerVehicle
// callers: CSchemaClassBinding<CFourWheelServerVehicle>::Allocate, CSchemaClassBinding<CFourWheelServerVehicle>::ConstructInPlace, CSchemaClassBinding<CFourWheelServerVehicle>::AllocateAndCopyConstruct, CPropVehicleDriveable::CreateServerVehicle
void __fastcall CFourWheelServerVehicle::CFourWheelServerVehicle(CFourWheelServerVehicle *const this)
{
  CBaseServerVehicle::CBaseServerVehicle(this);
  this->_vptr_IVehicle = &off_40D1C90;
  memset(&this->m_ViewSmoothing, 0, sizeof(this->m_ViewSmoothing));
  this->m_ViewSmoothing.bClampEyeAngles = 1;
  this->m_ViewSmoothing.bDampenEyePosition = 1;
  this->m_ViewSmoothing.flPitchCurveZero = 10.0;
  this->m_ViewSmoothing.flPitchCurveLinear = 45.0;
  this->m_ViewSmoothing.flRollCurveZero = 5.0;
  this->m_ViewSmoothing.flRollCurveLinear = 45.0;
}


// CFourWheelServerVehicle::InitViewSmoothing  (line 1094, @0x0000000002406050, libserver.so)  // inlines: GetFloat, operator=
void __fastcall CFourWheelServerVehicle::InitViewSmoothing(
        CFourWheelServerVehicle *const this,
        const Vector *const vecOrigin,
        const QAngle *const vecAngles)
{
  ConVar *m_pParent; // rax

  this->m_ViewSmoothing.bWasRunningAnim = 0;
  m_pParent = r_JeepFOV.m_pParent;
  this->m_ViewSmoothing.vecOriginSaved = *vecOrigin;
  this->m_ViewSmoothing.vecAnglesSaved = *vecAngles;
  this->m_ViewSmoothing.flFOV = m_pParent->m_Value.m_fValue;
}


// CFourWheelServerVehicle::SetVehicle  (line 1105, @0x00000000023f8ba0, libserver.so)
// calls: CBaseServerVehicle::SetVehicle
void __fastcall CFourWheelServerVehicle::SetVehicle(CFourWheelServerVehicle *const this, CBaseEntity *pVehicle)
{
  CBaseServerVehicle::SetVehicle(this, pVehicle);
  if ( pVehicle != 0 )
    this->m_ViewSmoothing.pVehicle = (*(pVehicle->_vptr_IHandleEntity + 43))(pVehicle);
}


// CFourWheelServerVehicle::GetVehicleViewPosition  (line 1120, @0x0000000002408d40, libserver.so)  // inlines: GetFourWheelVehicle, ToBasePlayer
// calls: SharedVehicleViewSmoothing
void __fastcall CFourWheelServerVehicle::GetVehicleViewPosition(
        CFourWheelServerVehicle *const this,
        int nRole,
        Vector *pAbsOrigin,
        QAngle *pAbsAngles,
        float *pFOV)
{
  __int64 v9; // rax
  CBasePlayer *v10; // rbx
  char v11; // al
  CBasePlayer *v12; // rdi

  v9 = (*(this->_vptr_IVehicle + 1))(this, nRole);
  v10 = v9;
  if ( v9 != 0 && (*(*v9 + 1120LL))(v9) != 0 )
  {
    v11 = (*(v10->_vptr_IHandleEntity + 140))(v10);
    v12 = 0;
    if ( v11 != 0 )
      v12 = v10;
    SharedVehicleViewSmoothing(
      v12,
      pAbsOrigin,
      pAbsAngles,
      BYTE4(this->m_pVehicle[2].m_pfnBlocked.__delta),
      BYTE5(this->m_pVehicle[2].m_pfnBlocked.__delta),
      &this->m_pVehicle[2].m_pfnTouch,
      &this->m_ViewSmoothing,
      pFOV);
  }
}


// CFourWheelServerVehicle::GetVehicleParams  (line 1144, @0x00000000023f8710, libserver.so)  // inlines: GetVehicleParams
const vehicleparams_t *__fastcall CFourWheelServerVehicle::GetVehicleParams(CFourWheelServerVehicle *const this)
{
  return (*(this->m_pVehicle[1].m_vecVelocity.m_pStateChanged->_vptr_INetworkStateChangedRouter + 4))(this->m_pVehicle[1].m_vecVelocity.m_pStateChanged);
}


// CFourWheelServerVehicle::GetVehicleOperatingParams  (line 1152, @0x00000000024060c0, libserver.so)  // inlines: GetVehicleOperatingParams
const vehicle_operatingparams_t *__fastcall CFourWheelServerVehicle::GetVehicleOperatingParams(
        CFourWheelServerVehicle *const this)
{
  return (*(this->m_pVehicle[1].m_vecVelocity.m_pStateChanged->_vptr_INetworkStateChangedRouter + 3))(this->m_pVehicle[1].m_vecVelocity.m_pStateChanged);
}


// CFourWheelServerVehicle::GetVehicleControlParams  (line 1160, @0x00000000024060e0, libserver.so)
const vehicle_controlparams_t *__fastcall CFourWheelServerVehicle::GetVehicleControlParams(
        CFourWheelServerVehicle *const this)
{
  return &this->m_pVehicle[1].m_vecVelocity.m_vecX.m_nEncoder;
}


// CFourWheelServerVehicle::GetVehicleController  (line 1168, @0x00000000023f8730, libserver.so)
IPhysicsVehicleController *__fastcall CFourWheelServerVehicle::GetVehicleController(
        CFourWheelServerVehicle *const this)
{
  return this->m_pVehicle[1].m_vecVelocity.m_pStateChanged;
}


// CFourWheelServerVehicle::GetFourWheelVehicle  (line 1176, @0x00000000024060f0, libserver.so)
// callers: CFourWheelVehiclePhysics::Teleport
CPropVehicleDriveable *__fastcall CFourWheelServerVehicle::GetFourWheelVehicle(CFourWheelServerVehicle *const this)
{
  return this->m_pVehicle;
}


// CFourWheelServerVehicle::GetFourWheelVehiclePhysics  (line 1184, @0x0000000002406100, libserver.so)
CFourWheelVehiclePhysics *__fastcall CFourWheelServerVehicle::GetFourWheelVehiclePhysics(
        CFourWheelServerVehicle *const this)
{
  return &this->m_pVehicle[1].m_vecAbsVelocity.m_Value.y;
}


// CFourWheelServerVehicle::IsVehicleUpright  (line 1193, @0x00000000023f8750, libserver.so)  // inlines: GetFourWheelVehicle
bool __fastcall CFourWheelServerVehicle::IsVehicleUpright(CFourWheelServerVehicle *const this)
{
  return (*(this->m_pVehicle->_vptr_IHandleEntity + 260))(this->m_pVehicle) ^ 1;
}


// CFourWheelServerVehicle::IsVehicleBodyInWater  (line 1198, @0x00000000023f8770, libserver.so)  // inlines: GetFourWheelVehicle
bool __fastcall CFourWheelServerVehicle::IsVehicleBodyInWater(CFourWheelServerVehicle *const this)
{
  return (*(this->m_pVehicle->_vptr_IHandleEntity + 261))(this->m_pVehicle);
}


// CFourWheelServerVehicle::IsPassengerEntering  (line 1206, @0x00000000023f8790, libserver.so)  // inlines: IsEnterAnimOn
bool __fastcall CFourWheelServerVehicle::IsPassengerEntering(CFourWheelServerVehicle *const this)
{
  return BYTE4(this->m_pVehicle[2].m_pfnBlocked.__delta);
}


// CFourWheelServerVehicle::IsPassengerExiting  (line 1214, @0x00000000023f87b0, libserver.so)  // inlines: IsExitAnimOn
bool __fastcall CFourWheelServerVehicle::IsPassengerExiting(CFourWheelServerVehicle *const this)
{
  return BYTE5(this->m_pVehicle[2].m_pfnBlocked.__delta);
}


// CFourWheelServerVehicle::GetWheelContactPoint  (line 1316, @0x0000000002406110, libserver.so)  // inlines: GetFourWheelVehicle, GetFourWheelVehiclePhysics
bool __fastcall CFourWheelServerVehicle::GetWheelContactPoint(
        CFourWheelServerVehicle *const this,
        int nWheelIndex,
        Vector *const vecPos)
{
  CBaseEntity *m_pVehicle; // rax
  INetworkStateChangedRouter *m_pStateChanged; // rdi

  m_pVehicle = this->m_pVehicle;
  return m_pVehicle != -1224LL
      && (m_pStateChanged = m_pVehicle[1].m_vecVelocity.m_pStateChanged) != 0
      && (*(m_pStateChanged->_vptr_INetworkStateChangedRouter + 9))(m_pStateChanged, nWheelIndex, vecPos, 0);
}


