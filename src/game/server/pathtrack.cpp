
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPathTrack::GetDataDescMap  (line 18, @0x00000000022b7880, libserver.so)
// globals: CPathTrack::m_DataMap
datamap_t *__fastcall CPathTrack::GetDataDescMap(CPathTrack *const this)
{
  return &CPathTrack::m_DataMap;
}


// CPathTrack::AddDatadescMetadataKeys  (line 18, @0x00000000022cae70, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPathTrack::GetEntityClass(void)
void __fastcall CPathTrack::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPathTrack::GetEntityClass);
}


// CPathTrack::GetBaseMap  (line 18, @0x00000000022cae90, libserver.so)
datamap_t *__cdecl CPathTrack::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CPathTrack>  (line 18, @0x00000000022caea0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPathTrack"
// globals: `guard variable for'DataMapInit<CPathTrack>(CPathTrack *)::nameHolder, `guard variable for'DataMapInit<CPathTrack>(CPathTrack *)::dataDesc, CPathTrack::GetEntityClass(void), CPathTrack::m_DataMap, DataMapInit<CPathTrack>(CPathTrack *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPathTrack>(CPathTrack *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPathTrack>(CPathTrack *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPathTrack>(CPathTrack *)::nameHolder) != 0 )
  {
    DataMapInit<CPathTrack>(CPathTrack *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPathTrack>(CPathTrack *)::nameHolder.m_pszBase = "CPathTrack";
    DataMapInit<CPathTrack>(CPathTrack *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPathTrack>(CPathTrack *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPathTrack>(CPathTrack *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPathTrack>(CPathTrack *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPathTrack>(CPathTrack *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPathTrack>(CPathTrack *)::nameHolder,
      &_dso_handle);
  }
  CPathTrack::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPathTrack>(CPathTrack *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPathTrack>(CPathTrack *)::dataDesc) != 0 )
  {
    DataMapInit<CPathTrack>(CPathTrack *)::dataDesc[16].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPathTrack>(CPathTrack *)::dataDesc);
  }
  CPathTrack::m_DataMap.dataNumFields = 16;
  CPathTrack::m_DataMap.dataDesc = &DataMapInit<CPathTrack>(CPathTrack *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPathTrack::m_DataMap, CPathTrack::GetEntityClass);
  return &CPathTrack::m_DataMap;
}


// CPathTrack::CPathTrack  (line 57, @0x00000000022cafc0, libserver.so)  // inlines: CEntityIOOutput, CPointEntity, CUtlSymbolLarge
// calls: CBaseEntity::CBaseEntity
// callers: CPathTrack::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CPathTrack::CPathTrack(CPathTrack *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->m_altName.u.m_Id = 0;
  this->_vptr_IHandleEntity = &off_40754B0;
  this->m_OnPass._vptr_CEntityIOOutput = off_3F7C190;
  this->m_nIterVal = -1;
  this->m_eOrientationType = TrackOrientationType_t::TrackOrientation_FacePath;
}


// CPathTrack::Spawn  (line 67, @0x00000000022b8e80, libserver.so)
// calls: CPointEntity::Spawn
void __fastcall CPathTrack::Spawn(CPathTrack *const this, const CEntityKeyValues *pKeyValues)
{
  CPointEntity::Spawn(this, pKeyValues);
  this->m_pnext = 0;
  this->m_pprevious = 0;
}


// CPathTrack::Activate  (line 79, @0x00000000022cb5d0, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName
// calls: CBaseEntity::Activate, CPathTrack::Link
void __fastcall CPathTrack::Activate(CPathTrack *const this, ActivateType_t activateType)
{
  CBaseEntity::Activate(this, activateType);
  if ( this->m_pEntity->m_name.u.m_Id != 0 )
    CPathTrack::Link(this);
}


// CPathTrack::Link  (line 93, @0x00000000022cb480, libserver.so)  // inlines: CUtlSymbolLarge, GetDebugName, String, ToCStr, operator!=
// calls: CGameEntitySystem::FindEntityByName, __dynamic_cast, CPathTrack::SetPrevious, Warning, CEntityIdentity::GetDebugName
// callers: CPathTrack::Activate
// strings: "Dead end link: %s\n", "ERROR: path_track (%s) refers to itself as a target!\n"
// globals: `typeinfo for'CPathTrack
void __fastcall CPathTrack::Link(CPathTrack *const this)
{
  CBaseEntity *v2; // rax
  CPathTrack *v3; // rax
  CPathTrack *EntityByName; // rax
  CPathTrack *v5; // rax
  const char *m_pAsString; // rsi
  const char *DebugName; // rax
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  if ( this->m_target.u.m_Id != 0 )
  {
    iszName.u.m_Id = this->m_target.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
    if ( this == EntityByName )
    {
      DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
      Warning("ERROR: path_track (%s) refers to itself as a target!\n", DebugName);
    }
    else if ( EntityByName != 0 )
    {
      v5 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CPathTrack, 0);
      this->m_pnext = v5;
      if ( v5 != 0 )
        CPathTrack::SetPrevious(v5, this);
    }
    else
    {
      m_pAsString = "";
      if ( this->m_target.u.m_Id != 0 )
        m_pAsString = this->m_target.u.m_pAsString;
      Warning("Dead end link: %s\n", m_pAsString);
    }
  }
  if ( this->m_altName.u.m_Id != 0 )
  {
    iszName.u.m_Id = this->m_altName.u.m_Id;
    v2 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
    if ( v2 != 0 )
    {
      v3 = __dynamic_cast(v2, &`typeinfo for'CBaseEntity, &`typeinfo for'CPathTrack, 0);
      this->m_paltpath = v3;
      CPathTrack::SetPrevious(v3, this);
    }
  }
}


// CPathTrack::BeginIteration  (line 142, @0x00000000022cb010, libserver.so)
// globals: CPathTrack::s_nCurrIterVal, CPathTrack::s_bIsIterating
void __cdecl CPathTrack::BeginIteration()
{
  ++CPathTrack::s_nCurrIterVal;
  CPathTrack::s_bIsIterating = 1;
}


// CPathTrack::EndIteration  (line 149, @0x00000000022cb030, libserver.so)
// globals: CPathTrack::s_bIsIterating
void __cdecl CPathTrack::EndIteration()
{
  CPathTrack::s_bIsIterating = 0;
}


// CPathTrack::Visit  (line 155, @0x00000000022cb040, libserver.so)
// globals: CPathTrack::s_nCurrIterVal
void __fastcall CPathTrack::Visit(CPathTrack *const this)
{
  this->m_nIterVal = CPathTrack::s_nCurrIterVal;
}


// CPathTrack::HasBeenVisited  (line 160, @0x00000000022cb060, libserver.so)
// globals: CPathTrack::s_nCurrIterVal
bool __fastcall CPathTrack::HasBeenVisited(const CPathTrack *const this)
{
  return this->m_nIterVal == CPathTrack::s_nCurrIterVal;
}


// CPathTrack::HasAlternathPath  (line 169, @0x00000000022cb080, libserver.so)
bool __fastcall CPathTrack::HasAlternathPath(const CPathTrack *const this)
{
  return this->m_paltpath != 0;
}


// CPathTrack::ToggleAlternatePath  (line 178, @0x00000000022cb150, libserver.so)
// calls: CPathTrack::DisableAlternatePath, CPathTrack::EnableAlternatePath
// callers: CPathTrack::InputToggleAlternatePath
void __fastcall CPathTrack::ToggleAlternatePath(CPathTrack *const this)
{
  if ( this->m_paltpath != 0 )
  {
    if ( (this->m_spawnflags.m_Value & 0x8000) == 0 )
      CPathTrack::EnableAlternatePath(this);
    else
      CPathTrack::DisableAlternatePath(this);
  }
}


// CPathTrack::EnableAlternatePath  (line 197, @0x00000000022cb0a0, libserver.so)  // inlines: NetworkStateChanged, Set, operator|=<int>
// callers: CPathTrack::InputEnableAlternatePath, CPathTrack::ToggleAlternatePath
void __fastcall CPathTrack::EnableAlternatePath(CPathTrack *const this)
{
  unsigned int v2; // r12d

  if ( this->m_paltpath != 0 )
  {
    v2 = this->m_spawnflags.m_Value | 0x8000;
    if ( this->m_spawnflags.m_Value != v2 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v2;
    }
  }
}


// CPathTrack::DisableAlternatePath  (line 208, @0x00000000022cb100, libserver.so)  // inlines: NetworkStateChanged, Set, operator&=<int>
// callers: CPathTrack::ToggleAlternatePath, CPathTrack::InputDisableAlternatePath
void __fastcall CPathTrack::DisableAlternatePath(CPathTrack *const this)
{
  unsigned int v2; // r12d

  if ( this->m_paltpath != 0 )
  {
    v2 = this->m_spawnflags.m_Value & 0xFFFF7FFF;
    if ( this->m_spawnflags.m_Value != v2 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v2;
    }
  }
}


// CPathTrack::InputEnableAlternatePath  (line 220, @0x00000000022cb0f0, libserver.so)
// calls: CPathTrack::EnableAlternatePath
void __fastcall CPathTrack::InputEnableAlternatePath(CPathTrack *const this, inputdata_t *const inputdata)
{
  CPathTrack::EnableAlternatePath(this);
}


// CPathTrack::InputDisableAlternatePath  (line 229, @0x00000000022cb1a0, libserver.so)
// calls: CPathTrack::DisableAlternatePath
void __fastcall CPathTrack::InputDisableAlternatePath(CPathTrack *const this, inputdata_t *const inputdata)
{
  CPathTrack::DisableAlternatePath(this);
}


// CPathTrack::InputToggleAlternatePath  (line 238, @0x00000000022cb190, libserver.so)
// calls: CPathTrack::ToggleAlternatePath
void __fastcall CPathTrack::InputToggleAlternatePath(CPathTrack *const this, inputdata_t *const inputdata)
{
  CPathTrack::ToggleAlternatePath(this);
}


// CPathTrack::TogglePath  (line 246, @0x00000000022cb250, libserver.so)
// calls: CPathTrack::DisablePath, CPathTrack::EnablePath
// callers: CPathTrack::InputTogglePath
void __fastcall CPathTrack::TogglePath(CPathTrack *const this)
{
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
    CPathTrack::EnablePath(this);
  else
    CPathTrack::DisablePath(this);
}


// CPathTrack::EnablePath  (line 262, @0x00000000022cb1b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator&=<int>
// callers: CPathTrack::InputEnablePath, CPathTrack::TogglePath
void __fastcall CPathTrack::EnablePath(CPathTrack *const this)
{
  unsigned int v2; // r12d

  v2 = this->m_spawnflags.m_Value & 0xFFFFFFFE;
  if ( this->m_spawnflags.m_Value != v2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_spawnflags.m_Value = v2;
  }
}


// CPathTrack::DisablePath  (line 270, @0x00000000022cb200, libserver.so)  // inlines: NetworkStateChanged, Set, operator|=<int>
// callers: CPathTrack::InputDisablePath, CPathTrack::TogglePath
void __fastcall CPathTrack::DisablePath(CPathTrack *const this)
{
  unsigned int v2; // r12d

  v2 = this->m_spawnflags.m_Value | 1;
  if ( this->m_spawnflags.m_Value != v2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_spawnflags.m_Value = v2;
  }
}


// CPathTrack::InputEnablePath  (line 279, @0x00000000022cb1f0, libserver.so)
// calls: CPathTrack::EnablePath
void __fastcall CPathTrack::InputEnablePath(CPathTrack *const this, inputdata_t *const inputdata)
{
  CPathTrack::EnablePath(this);
}


// CPathTrack::InputDisablePath  (line 288, @0x00000000022cb240, libserver.so)
// calls: CPathTrack::DisablePath
void __fastcall CPathTrack::InputDisablePath(CPathTrack *const this, inputdata_t *const inputdata)
{
  CPathTrack::DisablePath(this);
}


// CPathTrack::InputTogglePath  (line 297, @0x00000000022cb270, libserver.so)
// calls: CPathTrack::TogglePath
void __fastcall CPathTrack::InputTogglePath(CPathTrack *const this, inputdata_t *const inputdata)
{
  CPathTrack::TogglePath(this);
}


// CPathTrack::DrawEntityDebugOverlays  (line 303, @0x00000000022b8fa0, libserver.so)
// calls: CBaseEntity::GetAbsOrigin, NDebugOverlay::Line, CBaseEntity::DrawEntityDebugOverlays
void __fastcall CPathTrack::DrawEntityDebugOverlays(CPathTrack *const this, uint64 nDebugOverlayBits)
{
  CPathTrack *m_pnext; // rdi
  const Vector *AbsOrigin; // r13
  const Vector *v6; // rax

  if ( (nDebugOverlayBits & 0x24) != 0 )
  {
    m_pnext = this->m_pnext;
    if ( m_pnext != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(m_pnext);
      v6 = CBaseEntity::GetAbsOrigin(this);
      NDebugOverlay::Line(v6, AbsOrigin, 0xFFu, 0x64u, 0x64u, 1, 0.0);
    }
  }
  CBaseEntity::DrawEntityDebugOverlays(this, nDebugOverlayBits);
}


// CPathTrack::ValidPath  (line 318, @0x00000000022cb280, libserver.so)
// callers: CFuncTrackTrain::DeadEnd
CPathTrack *__fastcall CPathTrack::ValidPath(CPathTrack *ppath, int testFlag)
{
  if ( ppath == 0 || testFlag != 0 && (ppath->m_spawnflags.m_Value & 1) != 0 )
    return 0;
  else
    return ppath;
}


// CPathTrack::Project  (line 330, @0x00000000022cb2b0, libserver.so)  // inlines: VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// calls: CBaseEntity::GetLocalOrigin, VectorNormalize
// callers: CPathTrack::LookAhead
void __fastcall CPathTrack::Project(
        CPathTrack *const this,
        CPathTrack *pstart,
        CPathTrack *pend,
        Vector *const origin,
        float dist)
{
  const Vector *LocalOrigin; // r13
  const Vector *v8; // rax
  vec_t v9; // xmm3_4
  vec_t v10; // xmm0_4
  __m128i x_low; // xmm4
  const Vector *v12; // rax
  vec_t v13; // xmm1_4
  vec_t v14; // xmm2_4
  float v15; // [rsp-4h] [rbp-40h]
  float distb; // [rsp+0h] [rbp-3Ch]
  Vector dir; // [rsp+4h] [rbp-38h] BYREF

  if ( pstart != 0 && pend != 0 )
  {
    LocalOrigin = CBaseEntity::GetLocalOrigin(pstart);
    v8 = CBaseEntity::GetLocalOrigin(pend);
    v9 = v8->x - LocalOrigin->x;
    v10 = v8->z - LocalOrigin->z;
    dir.y = v8->y - LocalOrigin->y;
    dir.x = v9;
    dir.z = v10;
    VectorNormalize(&dir);
    x_low = LODWORD(dir.x);
    *x_low.m128i_i32 = dir.x * dist;
    LODWORD(LocalOrigin) = _mm_cvtsi128_si32(x_low);
    v15 = dir.y * dist;
    distb = dist * dir.z;
    v12 = CBaseEntity::GetLocalOrigin(pend);
    v13 = distb + v12->z;
    v14 = *&LocalOrigin + v12->x;
    origin->y = v15 + v12->y;
    origin->z = v13;
    origin->x = v14;
  }
}


// CPathTrack::GetNext  (line 340, @0x00000000022cb3a0, libserver.so)
// callers: CFuncTrackTrain::SetDirForward, CFuncTrackAuto::TriggerTrackChange, CFuncTrackAuto::Use, CFuncTrackTrain::NearestPath, CFuncTrackTrain::FirePassInputs, CFuncTrackTrain::DeadEnd, CFuncTrackTrain::Next, CFuncTrackTrain::ArriveAtNode, CFuncTrackAuto::UpdateAutoTargets
CPathTrack *__fastcall CPathTrack::GetNext(CPathTrack *const this)
{
  CPathTrack *result; // rax
  unsigned int m_Value; // edx

  result = this->m_paltpath;
  if ( result == 0 )
    return this->m_pnext;
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x8000) == 0 || (m_Value & 4) != 0 )
    return this->m_pnext;
  return result;
}


// CPathTrack::GetPrevious  (line 350, @0x00000000022cb3e0, libserver.so)
// callers: CFuncTrackTrain::SetDirForward, CFuncTrackTrain::FirePassInputs, CFuncTrackTrain::DeadEnd
CPathTrack *__fastcall CPathTrack::GetPrevious(CPathTrack *const this)
{
  CPathTrack *result; // rax

  result = this->m_paltpath;
  if ( result == 0 || (this->m_spawnflags.m_Value & 0x8004) != 0x8004 )
    return this->m_pprevious;
  return result;
}


// CPathTrack::SetPrevious  (line 360, @0x00000000022cb420, libserver.so)  // inlines: CUtlSymbolLarge, FStrEq, GetEntityName, String, ToCStr, _V_strcmp
// calls: strcmp
// callers: CPathTrack::Link
void __fastcall CPathTrack::SetPrevious(CPathTrack *const this, CPathTrack *pprev)
{
  const char *v3; // rax
  const char *m_pAsString; // rsi

  if ( pprev != 0 )
  {
    v3 = "";
    m_pAsString = this->m_altName.u.m_pAsString;
    if ( m_pAsString == 0 )
      m_pAsString = "";
    if ( pprev->m_pEntity->m_name.u.m_Id != 0 )
      v3 = pprev->m_pEntity->m_name.u.m_pAsString;
    if ( m_pAsString != v3 && strcmp(v3, m_pAsString) != 0 )
      this->m_pprevious = pprev;
  }
}


// CPathTrack::GetNextInDir  (line 368, @0x00000000022cb610, libserver.so)  // inlines: GetNext, GetPrevious
// callers: CPathTrack::LookAhead, CPathTrack::GetOrientation
CPathTrack *__fastcall CPathTrack::GetNextInDir(CPathTrack *const this, bool bForward)
{
  CPathTrack *result; // rax
  unsigned int m_Value; // edx

  result = this->m_paltpath;
  if ( bForward )
  {
    if ( result == 0 )
      return this->m_pnext;
    m_Value = this->m_spawnflags.m_Value;
    if ( (m_Value & 0x8000) == 0 || (m_Value & 4) != 0 )
      return this->m_pnext;
  }
  else if ( result == 0 || (this->m_spawnflags.m_Value & 0x8004) != 0x8004 )
  {
    return this->m_pprevious;
  }
  return result;
}


// CPathTrack::LookAhead  (line 384, @0x00000000022cb680, libserver.so)  // inlines: FastSqrt, Length, ValidPath, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=
// calls: CPathTrack::GetNextInDir, CBaseEntity::GetLocalOrigin, CPathTrack::Project
// callers: CFuncTrackTrain::UpdateOrientationAtPathTracks, CFuncTrackTrain::TeleportToPathTrack, CFuncTrackTrain::Next, CFuncTrackTrain::Find
CPathTrack *__fastcall CPathTrack::LookAhead(
        CPathTrack *const this,
        Vector *const origin,
        float dist,
        int move,
        CPathTrack **pNextNext)
{
  CPathTrack *v8; // rbx
  CPathTrack *NextInDir; // rax
  const Vector *LocalOrigin; // rax
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  CPathTrack *v15; // rax
  CPathTrack *v16; // rax
  CPathTrack *v18; // rax
  CPathTrack *v19; // rax
  const Vector *v20; // rax
  char bForward; // [rsp+Fh] [rbp-51h]
  float length; // [rsp+10h] [rbp-50h]
  float v25; // [rsp+14h] [rbp-4Ch]
  float v26; // [rsp+18h] [rbp-48h]
  float v27; // [rsp+1Ch] [rbp-44h]
  float x; // [rsp+20h] [rbp-40h]
  float z; // [rsp+24h] [rbp-3Ch]
  float y; // [rsp+28h] [rbp-38h]
  float dista; // [rsp+2Ch] [rbp-34h]

  x = origin->x;
  y = origin->y;
  z = origin->z;
  if ( dist < 0.0 )
  {
    bForward = 0;
    dista = -dist;
  }
  else
  {
    bForward = 1;
    dista = dist;
  }
  if ( dista > 0.0 )
  {
    v8 = this;
    while ( 1 )
    {
      NextInDir = CPathTrack::GetNextInDir(v8, bForward);
      if ( NextInDir == 0 )
      {
        if ( move == 0 )
        {
          v18 = CPathTrack::GetNextInDir(v8, bForward != 1);
          CPathTrack::Project(this, v18, v8, origin, dista);
        }
        return 0;
      }
      if ( move != 0 && (NextInDir->m_spawnflags.m_Value & 1) != 0 )
        return 0;
      LocalOrigin = CBaseEntity::GetLocalOrigin(NextInDir);
      v11 = LocalOrigin->x - x;
      v12 = LocalOrigin->y - y;
      v13 = LocalOrigin->z - z;
      v14 = fsqrt(((v11 * v11) + (v12 * v12)) + (v13 * v13));
      if ( v14 == 0.0 )
      {
        length = v14;
        v25 = LocalOrigin->y - y;
        v26 = LocalOrigin->x - x;
        v27 = LocalOrigin->z - z;
        v15 = CPathTrack::GetNextInDir(v8, bForward);
        v16 = CPathTrack::GetNextInDir(v15, bForward);
        if ( v16 == 0
          || (v13 = v27, v11 = v26, v12 = v25, v14 = length, move != 0) && (v16->m_spawnflags.m_Value & 1) != 0 )
        {
          if ( pNextNext != 0 )
            *pNextNext = 0;
          if ( dista != dist )
            return CPathTrack::GetNextInDir(v8, bForward);
          return 0;
        }
      }
      if ( v14 > dista )
        break;
      dista = dista - v14;
      v19 = CPathTrack::GetNextInDir(v8, bForward);
      v20 = CBaseEntity::GetLocalOrigin(v19);
      x = v20->x;
      y = v20->y;
      z = v20->z;
      v8 = CPathTrack::GetNextInDir(v8, bForward);
      origin->x = x;
      origin->y = y;
      origin->z = z;
      if ( dista <= 0.0 )
        goto LABEL_21;
    }
    origin->x = (v11 * (dista / v14)) + x;
    origin->y = (v12 * (dista / v14)) + y;
    origin->z = (v13 * (dista / v14)) + z;
    if ( pNextNext == 0 )
      return v8;
LABEL_22:
    *pNextNext = CPathTrack::GetNextInDir(v8, bForward);
    return v8;
  }
  v8 = this;
LABEL_21:
  if ( pNextNext != 0 )
    goto LABEL_22;
  return v8;
}


// CPathTrack::Nearest  (line 463, @0x00000000022cb9c0, libserver.so)  // inlines: FastSqrt, GetDebugName, GetNext, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CBaseEntity::GetLocalOrigin, CEntityIdentity::GetDebugName, Warning
// callers: CFuncTrackChange::Find, CFuncTrackChange::HitBottom, CFuncTrackChange::HitTop
// strings: "Bad sequence of path_tracks from %s\n"
CPathTrack *__fastcall CPathTrack::Nearest(CPathTrack *const this, const Vector *const origin)
{
  const Vector *LocalOrigin; // rax
  CPathTrack *m_paltpath; // rbx
  unsigned int m_Value; // eax
  CPathTrack *v7; // r14
  int v8; // r12d
  const Vector *v9; // rax
  float v10; // xmm0_4
  CPathTrack *v11; // rax
  unsigned int v12; // edx
  const char *DebugName; // rax
  float minDist; // [rsp+8h] [rbp-38h]

  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  m_paltpath = this->m_paltpath;
  minDist = fsqrt(
              (((origin->x - LocalOrigin->x) * (origin->x - LocalOrigin->x))
             + ((origin->y - LocalOrigin->y) * (origin->y - LocalOrigin->y)))
            + 0.0);
  if ( m_paltpath == 0 || ((m_Value = this->m_spawnflags.m_Value) & 0x8000) == 0 || (m_Value & 4) != 0 )
    m_paltpath = this->m_pnext;
  v7 = this;
  v8 = 10000;
LABEL_5:
  if ( m_paltpath != this )
  {
    while ( m_paltpath != 0 )
    {
      if ( --v8 == 0 )
      {
        DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
        Warning("Bad sequence of path_tracks from %s\n", DebugName);
        return 0;
      }
      v9 = CBaseEntity::GetLocalOrigin(m_paltpath);
      v10 = fsqrt((((origin->x - v9->x) * (origin->x - v9->x)) + ((origin->y - v9->y) * (origin->y - v9->y))) + 0.0);
      if ( minDist > v10 )
      {
        v7 = m_paltpath;
        minDist = v10;
      }
      v11 = m_paltpath->m_paltpath;
      if ( v11 == 0 || ((v12 = m_paltpath->m_spawnflags.m_Value) & 0x8000) == 0 || (v12 & 4) != 0 )
      {
        m_paltpath = m_paltpath->m_pnext;
        goto LABEL_5;
      }
      m_paltpath = m_paltpath->m_paltpath;
      if ( v11 == this )
        return v7;
    }
  }
  return v7;
}


// CPathTrack::GetOrientationType  (line 506, @0x00000000022cbb50, libserver.so)
// callers: CFuncTrackTrain::UpdateOrientationAtPathTracks
TrackOrientationType_t __fastcall CPathTrack::GetOrientationType(CPathTrack *const this)
{
  return this->m_eOrientationType;
}


// CPathTrack::GetOrientation  (line 515, @0x00000000022cbb60, libserver.so)  // inlines: VectorSubtract, operator-
// calls: CPathTrack::GetNextInDir, CBaseEntity::GetLocalOrigin, VectorAngles, CBaseEntity::GetLocalAngles
// callers: CFuncTrackTrain::UpdateOrientationAtPathTracks, CFuncTrackTrain::UpdateOrientationBlend, CFuncTrackTrain::TeleportToPathTrack
QAngle __fastcall CPathTrack::GetOrientation(CPathTrack *const this, bool bForwardDir)
{
  CPathTrack *NextInDir; // rax
  CPathTrack *v5; // rdi
  CPathTrack *v6; // r12
  const Vector *LocalOrigin; // rbx
  const Vector *v8; // rax
  vec_t v9; // xmm1_4
  vec_t v10; // xmm0_4
  const QAngle *LocalAngles; // rax
  __int64 v14; // rdx
  Vector vecDir; // [rsp+10h] [rbp-50h] BYREF
  QAngle angDir; // [rsp+20h] [rbp-40h] BYREF
  QAngle v17; // [rsp+30h] [rbp-30h]
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( this->m_eOrientationType == TrackOrientationType_t::TrackOrientation_FacePathAngles )
  {
    LocalAngles = CBaseEntity::GetLocalAngles(this);
    v14 = *&LocalAngles->x;
    *&LocalAngles = LocalAngles->z;
    *&v17.x = v14;
    LODWORD(v17.z) = LocalAngles;
  }
  else
  {
    NextInDir = CPathTrack::GetNextInDir(this, bForwardDir);
    v5 = this;
    v6 = NextInDir;
    if ( NextInDir == 0 )
    {
      v6 = this;
      v5 = CPathTrack::GetNextInDir(this, !bForwardDir);
    }
    LocalOrigin = CBaseEntity::GetLocalOrigin(v5);
    v8 = CBaseEntity::GetLocalOrigin(v6);
    v9 = v8->y - LocalOrigin->y;
    v10 = v8->z - LocalOrigin->z;
    vecDir.x = v8->x - LocalOrigin->x;
    vecDir.y = v9;
    vecDir.z = v10;
    VectorAngles(&vecDir, &angDir);
    v17 = angDir;
  }
  *&result.x = *&v17.x;
  result.z = v17.z;
  return result;
}


// CPathTrack::Instance  (line 544, @0x00000000022cbc40, libserver.so)  // inlines: ClassMatches, FClassnameIs, GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
// calls: CEntityIdentity::ClassMatches
CPathTrack *__fastcall CPathTrack::Instance(CEntityIndex nEntityIndex)
{
  CEntityIdentity *v1; // rdx
  CEntityIdentity *v2; // rax
  CPathTrack *m_pInstance; // rbx

  if ( nEntityIndex.m_Data > 0x7FFE )
    return 0;
  v1 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
  if ( v1 == 0 )
    return 0;
  v2 = &v1[nEntityIndex.m_Data & 0x1FF];
  if ( v2 == 0 )
    return 0;
  if ( nEntityIndex.m_Data == (v2->m_EHandle.m_Index & 0x7FFF) )
  {
    m_pInstance = v2->m_pInstance;
    if ( v2->m_pInstance != 0 && CEntityIdentity::ClassMatches(m_pInstance->m_pEntity, "path_track") )
      return m_pInstance;
  }
  return 0;
}


// CPathTrack::InputPass  (line 556, @0x00000000022f2090, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CPathTrack::InputPass(CPathTrack *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pActivator; // rsi
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  value.m_type = 0;
  pActivator = inputdata->pActivator;
  value.m_uint64 = 0;
  value.m_flags = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnPass, pActivator, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


