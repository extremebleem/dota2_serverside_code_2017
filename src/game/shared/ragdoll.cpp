
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRagdoll::CRagdoll  (line 33, @0x000000000235edb0, libserver.so)  // inlines: Init
// callers: CSchemaClassBinding<CRagdoll>::Allocate, CSchemaClassBinding<CRagdoll>::ConstructInPlace, CSchemaClassBinding<CRagdoll>::AllocateAndCopyConstruct
void __fastcall CRagdoll::CRagdoll(CRagdoll *const this)
{
  this->m_vecLastOrigin.x = 0.0;
  this->m_vecLastOrigin.y = 0.0;
  this->m_vecLastOrigin.z = 0.0;
  this->_vptr_IRagdoll = &off_40A2B30;
  this->m_ragdoll.listCount = 0;
  this->m_flLastOriginChangeTime = -1.0;
  this->m_flAwakeTime = -1.0;
  this->m_lastUpdate = -3.4028235e38;
}


// CRagdoll::AddDatadescMetadataKeys  (line 48, @0x000000000235ee10, libserver.so)
void __fastcall CRagdoll::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CRagdoll::GetBaseMap  (line 48, @0x000000000235ee20, libserver.so)
datamap_t *__cdecl CRagdoll::GetBaseMap()
{
  return 0;
}


// DataMapInit<CRagdoll>  (line 48, @0x000000000235ee30, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, GetPhysObjSaveRestoreOps, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "CRagdoll"
// globals: `guard variable for'DataMapInit<CRagdoll>(CRagdoll *)::nameHolder, `guard variable for'DataMapInit<CRagdoll>(CRagdoll *)::dataDesc, CRagdoll::m_DataMap, DataMapInit<CRagdoll>(CRagdoll *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CRagdoll>(CRagdoll *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CRagdoll>(CRagdoll *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRagdoll>(CRagdoll *)::nameHolder) != 0 )
  {
    DataMapInit<CRagdoll>(CRagdoll *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CRagdoll>(CRagdoll *)::nameHolder.m_pszBase = "CRagdoll";
    DataMapInit<CRagdoll>(CRagdoll *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CRagdoll>(CRagdoll *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CRagdoll>(CRagdoll *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CRagdoll>(CRagdoll *)::nameHolder.m_nLenBase = 8;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRagdoll>(CRagdoll *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CRagdoll>(CRagdoll *)::nameHolder,
      &_dso_handle);
  }
  CRagdoll::m_DataMap.baseMap = 0;
  if ( `guard variable for'datamap_t * DataMapInit<CRagdoll>(CRagdoll *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRagdoll>(CRagdoll *)::dataDesc) != 0 )
  {
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[1].fieldSize = 32;
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[5].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[6].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[9].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[10].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[13].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[14].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[17].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[18].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[21].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[22].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[25].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[26].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[29].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[30].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[33].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[34].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[37].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[38].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[41].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[42].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[45].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[46].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[49].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[50].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[53].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[54].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[57].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[58].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[61].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[62].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[65].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[66].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[69].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[70].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[73].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[74].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[77].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[78].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[81].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[82].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[85].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[86].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[89].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[90].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[93].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[94].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[97].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSBODY);
    DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[98].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSJOINT);
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRagdoll>(CRagdoll *)::dataDesc);
  }
  CRagdoll::m_DataMap.dataNumFields = 99;
  CRagdoll::m_DataMap.dataDesc = &DataMapInit<CRagdoll>(CRagdoll *)::dataDesc[1];
  return &CRagdoll::m_DataMap;
}


// CRagdoll::GetElement  (line 81, @0x000000000234b530, libserver.so)
IPhysicsObject *__fastcall CRagdoll::GetElement(CRagdoll *const this, int elementNum)
{
  return this->m_ragdoll.list[elementNum].pObject;
}


// CRagdoll::BuildRagdollBounds  (line 86, @0x000000000234c0f0, libserver.so)  // inlines: FastSqrt, Init, Length, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator-
// calls: CBaseEntity::GetModel
void __fastcall CRagdoll::BuildRagdollBounds(CRagdoll *const this, CBaseEntity *ent)
{
  void (__fastcall *v3)(IGameModelInfo *, _QWORD *, Vector *, Vector *); // r14
  vec_t v4; // xmm0_4
  _QWORD v5[2]; // [rsp+10h] [rbp-50h] BYREF
  Vector mins; // [rsp+20h] [rbp-40h] BYREF
  Vector maxs; // [rsp+30h] [rbp-30h] BYREF

  v3 = *(modelinfo->_vptr_IAppSystem + 16);
  CBaseEntity::GetModel(v5, ent);
  v3(modelinfo, v5, &mins, &maxs);
  v4 = fsqrt(
         ((((maxs.x - mins.x) * 0.5) * ((maxs.x - mins.x) * 0.5))
        + (((maxs.y - mins.y) * 0.5) * ((maxs.y - mins.y) * 0.5)))
       + (((maxs.z - mins.z) * 0.5) * ((maxs.z - mins.z) * 0.5)));
  this->m_maxs.x = v4;
  this->m_mins.x = -v4;
  this->m_mins.y = -v4;
  this->m_mins.z = -v4;
  this->m_maxs.y = v4;
  this->m_maxs.z = v4;
}


// CRagdoll::Init  (line 97, @0x000000000234e220, libserver.so)  // inlines: operator->
// calls: CBaseEntity::GetModel, CModel::HasCollision, CModel::name, DevWarning(char const*,...)
// strings: "Failed to create ragdoll for %s\n"
void __fastcall CRagdoll::Init(
        CRagdoll *const this,
        CBaseModelEntity *ent,
        CBaseEntity *pOwner,
        const CModel *pstudiohdr,
        const Vector *const forceVector,
        int forceBone,
        float dt,
        float flScale)
{
  const CModel *v10; // rdi
  const char *v11; // rax
  _QWORD v12[6]; // [rsp+0h] [rbp-30h] BYREF

  CBaseEntity::GetModel(v12, ent);
  CBaseEntity::GetModel(v12, ent);
  if ( v12[0] != 0 )
    v10 = *v12[0];
  else
    v10 = 0;
  if ( CModel::HasCollision(v10) )
  {
    v11 = CModel::name(pstudiohdr);
    DevWarning("Failed to create ragdoll for %s\n", v11);
  }
}


// CRagdoll::~CRagdoll  (line 161, @0x000000000234b550, libserver.so)  // inlines: ~IRagdoll
// globals: CRagdoll::s_globalCount
void __fastcall CRagdoll::~CRagdoll(CRagdoll *const this)
{
  int listCount; // ecx

  listCount = this->m_ragdoll.listCount;
  this->_vptr_IRagdoll = &off_40A2B30;
  if ( listCount != 0 )
    ++CRagdoll::s_globalCount;
  this->_vptr_IRagdoll = &off_40A2A70;
}


// CRagdoll::~CRagdoll  (line 161, @0x000000000234b650, libserver.so)  // inlines: ~CRagdoll, ~IRagdoll
// calls: operator delete
// globals: CRagdoll::s_globalCount
void __fastcall CRagdoll::~CRagdoll(CRagdoll *const this)
{
  int listCount; // r8d

  listCount = this->m_ragdoll.listCount;
  this->_vptr_IRagdoll = &off_40A2B30;
  if ( listCount != 0 )
    ++CRagdoll::s_globalCount;
  this->_vptr_IRagdoll = &off_40A2A70;
  operator delete(this);
}


// CRagdoll::GetRagdollOrigin  (line 173, @0x000000000234b580, libserver.so)
const Vector *__fastcall CRagdoll::GetRagdollOrigin(CRagdoll *const this)
{
  return &this->m_origin;
}


// CRagdoll::GetRagdollBounds  (line 178, @0x000000000234b590, libserver.so)  // inlines: operator=
void __fastcall CRagdoll::GetRagdollBounds(CRagdoll *const this, Vector *const theMins, Vector *const theMaxs)
{
  *theMins = this->m_mins;
  *theMaxs = this->m_maxs;
}


// CRagdoll::VPhysicsUpdate  (line 184, @0x0000000002360550, libserver.so)  // inlines: operator-=, operator=, rendertime
// calls: RagdollComputeApproximateBbox, RagdollIsAsleep, CRagdoll::CheckSettleStationaryRagdoll
bool __fastcall CRagdoll::VPhysicsUpdate(CRagdoll *const this, IPhysicsObject *pPhysics)
{
  float m_flRenderTime; // xmm1_4
  float m_lastUpdate; // xmm0_4
  CGlobalVars *v5; // r12
  bool result; // al
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v8; // xmm0_8
  CGlobalVars *v9; // r12
  vec_t v10; // xmm1_4
  float v11; // xmm0_4
  void (__fastcall *v12)(_QWORD, double); // rax
  int (**vptr_IRagdoll)(...); // rax
  __int64 v14; // rax
  float v15; // xmm3_4
  float v16; // xmm2_4
  float x; // xmm1_4
  bool m_allAsleep; // r13
  bool IsAsleep; // al
  float v20; // [rsp-Ch] [rbp-3Ch]
  double v21; // [rsp-8h] [rbp-38h] BYREF
  Vector origin; // [rsp+0h] [rbp-30h]

  m_flRenderTime = 0.0;
  m_lastUpdate = this->m_lastUpdate;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v20 = this->m_lastUpdate;
        (m_pfnWarningFunc)(0, pPhysics, m_lastUpdate, 0.0);
        m_lastUpdate = v20;
      }
    }
    m_flRenderTime = v5->m_flRenderTime;
  }
  result = 0;
  if ( m_lastUpdate != m_flRenderTime )
  {
    v8 = (*(*this->m_ragdoll.list[0].pObject + 368LL))(this->m_ragdoll.list[0].pObject, pPhysics);
    v9 = gpGlobals;
    v21 = v8;
    origin.x = v10;
    this->m_origin.z = v10;
    this->m_origin.x = *&v8;
    this->m_origin.y = *(&v21 + 1);
    v11 = 0.0;
    if ( v9 != 0 )
    {
      if ( !v9->m_bEnableAssertions && v9->m_bInSimulation )
      {
        v12 = v9->m_pfnWarningFunc;
        if ( v12 != 0 )
          v12(0, 0.0);
      }
      v11 = v9->m_flRenderTime;
    }
    vptr_IRagdoll = this->_vptr_IRagdoll;
    this->m_lastUpdate = v11;
    v14 = (vptr_IRagdoll[3])(this);
    v21 = *v14;
    origin.x = *(v14 + 8);
    RagdollComputeApproximateBbox(&this->m_ragdoll, &v21, &this->m_mins, &this->m_maxs);
    v15 = *&v21;
    v16 = *(&v21 + 1);
    x = origin.x;
    m_allAsleep = this->m_allAsleep;
    this->m_mins.x = this->m_mins.x - *&v21;
    this->m_mins.y = this->m_mins.y - v16;
    this->m_mins.z = this->m_mins.z - x;
    this->m_maxs.x = this->m_maxs.x - v15;
    this->m_maxs.y = this->m_maxs.y - v16;
    this->m_maxs.z = this->m_maxs.z - x;
    IsAsleep = RagdollIsAsleep(&this->m_ragdoll);
    this->m_allAsleep = IsAsleep;
    if ( !IsAsleep )
    {
      if ( m_allAsleep )
        (*(this->_vptr_IRagdoll + 13))(this);
      else
        CRagdoll::CheckSettleStationaryRagdoll(this);
    }
    return 1;
  }
  return result;
}


// CRagdoll::SolvePenetrations  (line 214, @0x000000000234b5f0, libserver.so)
bool __fastcall CRagdoll::SolvePenetrations(CRagdoll *const this, IPhysicsObject *pObj0, IPhysicsObject *pObj1)
{
  return 1;
}


// CRagdoll::PhysForceRagdollToSleep  (line 224, @0x000000000235f280, libserver.so)
// callers: CRagdoll::CheckSettleStationaryRagdoll
void __fastcall CRagdoll::PhysForceRagdollToSleep(CRagdoll *const this)
{
  IPhysicsObject **p_pObject; // r13
  int i; // r12d
  IPhysicsObject *v4; // rbx

  p_pObject = &this->m_ragdoll.list[0].pObject;
  for ( i = 0; this->m_ragdoll.listCount > i; p_pObject += 5 )
  {
    v4 = *p_pObject;
    if ( *p_pObject != 0 )
    {
      (*(*v4 + 544LL))(*p_pObject, &vec3_origin);
      (*(*v4 + 1696LL))(v4, &vec3_origin);
      (*(*v4 + 848LL))(v4, 0);
    }
    ++i;
  }
}


// CRagdoll::CheckSettleStationaryRagdoll  (line 241, @0x000000000235f310, libserver.so)  // inlines: GetFloat, VectorSubtract, curtime, operator-, operator=
// calls: CRagdoll::PhysForceRagdollToSleep
// callers: CRagdoll::VPhysicsUpdate
void __fastcall CRagdoll::CheckSettleStationaryRagdoll(CRagdoll *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // r12
  float v4; // xmm0_4
  float v5; // xmm0_4
  __int64 v6; // rax
  double v7; // xmm2_8
  double v8; // xmm1_8
  double v9; // xmm3_8
  CGlobalVars *v10; // r12
  float v11; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  FnGlobalVarsWarningFunc v13; // rax
  CGlobalVars *v14; // r12
  double v15; // xmm0_8
  FnGlobalVarsWarningFunc v16; // rax
  int (**vptr_IRagdoll)(...); // rax
  vec_t *v18; // rax
  float v19; // [rsp-8h] [rbp-2Ch]

  m_flCurrentTime = 0.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  v4 = m_flCurrentTime - this->m_flAwakeTime;
  if ( v4 > 10.0 )
    v5 = 10.0;
  else
    v5 = fmaxf(1.0, v4);
  v19 = v5;
  v6 = (*(this->_vptr_IRagdoll + 3))(this);
  *&v7 = *(v6 + 4);
  *&v9 = *(v6 + 8);
  *&v7 = *&v7 - this->m_vecLastOrigin.y;
  *&v8 = COERCE_UNSIGNED_INT(fabs(*v6 - this->m_vecLastOrigin.x));
  *&v9 = *&v9 - this->m_vecLastOrigin.z;
  if ( *&v8 > v19 || (*&v7 = COERCE_UNSIGNED_INT(fabs(*&v7)), *&v7 > v19) || fabs(*&v9) > v19 )
  {
    v14 = gpGlobals;
    v15 = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v16 = gpGlobals->m_pfnWarningFunc;
        if ( v16 != 0 )
          (v16)(1, 0.0, v8, v7, v9);
      }
      *&v15 = LODWORD(v14->m_flCurrentTime);
    }
    vptr_IRagdoll = this->_vptr_IRagdoll;
    this->m_flLastOriginChangeTime = *&v15;
    v18 = (vptr_IRagdoll[3])(this, v15, v8, v7, v9);
    this->m_vecLastOrigin.x = *v18;
    this->m_vecLastOrigin.y = v18[1];
    this->m_vecLastOrigin.z = v18[2];
  }
  else
  {
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v13 = gpGlobals->m_pfnWarningFunc;
        if ( v13 != 0 )
          v13(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v11 = v10->m_flCurrentTime;
    }
    else
    {
      v11 = 0.0;
    }
    if ( ragdoll_sleepaftertime.m_pParent->m_Value.m_fValue <= (v11 - this->m_flLastOriginChangeTime) )
    {
      CRagdoll::PhysForceRagdollToSleep(this);
      this->m_allAsleep = 1;
    }
  }
}


// CRagdoll::ResetRagdollSleepAfterTime  (line 273, @0x000000000234ec70, libserver.so)  // inlines: curtime
void __fastcall CRagdoll::ResetRagdollSleepAfterTime(CRagdoll *const this)
{
  CGlobalVars *v2; // rbx
  CGlobalVars *v3; // rax
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  void (__fastcall *v6)(__int64); // rax
  float m_flCurrentTime; // xmm0_4

  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    v3 = gpGlobals;
    v4 = gpGlobals;
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      v4 = gpGlobals;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v4 = gpGlobals;
        v3 = gpGlobals;
      }
    }
    this->m_flLastOriginChangeTime = v2->m_flCurrentTime;
    if ( v3 != 0 )
    {
      if ( !v4->m_bEnableAssertions && !v4->m_bInSimulation )
      {
        v6 = v4->m_pfnWarningFunc;
        if ( v6 != 0 )
          v6(1);
      }
      m_flCurrentTime = v4->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
  }
  else
  {
    m_flCurrentTime = 0.0;
    this->m_flLastOriginChangeTime = 0.0;
  }
  this->m_flAwakeTime = m_flCurrentTime;
}


// CRagdoll::DrawWireframe  (line 279, @0x000000000234b600, libserver.so)
void __fastcall CRagdoll::DrawWireframe(CRagdoll *const this)
{
  ;
}


// CreateRagdoll  (line 286, @0x000000000235f520, libserver.so)  // inlines: CRagdoll, Init
// calls: operator new
IRagdoll *__cdecl CreateRagdoll()
{
  IRagdoll *result; // rax

  result = operator new(0x5D8u);
  HIDWORD(result[184]._vptr_IRagdoll) = 0;
  LODWORD(result[185]._vptr_IRagdoll) = 0;
  HIDWORD(result[185]._vptr_IRagdoll) = 0;
  result->_vptr_IRagdoll = &off_40A2B30;
  LODWORD(result[1]._vptr_IRagdoll) = 0;
  LODWORD(result[186]._vptr_IRagdoll) = -1082130432;
  HIDWORD(result[186]._vptr_IRagdoll) = -1082130432;
  HIDWORD(result[183]._vptr_IRagdoll) = -8388609;
  return result;
}


