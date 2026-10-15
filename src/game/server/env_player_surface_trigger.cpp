
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvPlayerSurfaceTrigger::GetDataDescMap  (line 13, @0x00000000021bb010, libserver.so)
// globals: CEnvPlayerSurfaceTrigger::m_DataMap
datamap_t *__fastcall CEnvPlayerSurfaceTrigger::GetDataDescMap(CEnvPlayerSurfaceTrigger *const this)
{
  return &CEnvPlayerSurfaceTrigger::m_DataMap;
}


// CEnvPlayerSurfaceTrigger::AddDatadescMetadataKeys  (line 13, @0x00000000021d2470, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvPlayerSurfaceTrigger::GetEntityClass(void)
void __fastcall CEnvPlayerSurfaceTrigger::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvPlayerSurfaceTrigger::GetEntityClass);
}


// CEnvPlayerSurfaceTrigger::GetBaseMap  (line 13, @0x00000000021d2490, libserver.so)
datamap_t *__cdecl CEnvPlayerSurfaceTrigger::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CEnvPlayerSurfaceTrigger>  (line 13, @0x00000000021d92c0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEnvPlayerSurfaceTrigger"
// globals: `guard variable for'DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder, `guard variable for'DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::dataDesc, CEnvPlayerSurfaceTrigger::GetEntityClass(void), CEnvPlayerSurfaceTrigger::m_DataMap, DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder.m_pszBase = "CEnvPlayerSurfaceTrigger";
    DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder.m_nLenBase = 24;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder,
      &_dso_handle);
  }
  CEnvPlayerSurfaceTrigger::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder.m_nLenBase + 20);
    strcpy(
      stpcpy(v2, DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder.m_pszBase),
      "UpdateMaterialThink");
    m_Size = DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder.m_Names.m_Size == DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::dataDesc[4].fieldName = v2;
    DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::dataDesc[7].pSaveRestoreOps = eventFuncs;
    DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::dataDesc[8].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::dataDesc);
  }
  CEnvPlayerSurfaceTrigger::m_DataMap.dataNumFields = 8;
  CEnvPlayerSurfaceTrigger::m_DataMap.dataDesc = &DataMapInit<CEnvPlayerSurfaceTrigger>(CEnvPlayerSurfaceTrigger *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvPlayerSurfaceTrigger::m_DataMap, CEnvPlayerSurfaceTrigger::GetEntityClass);
  return &CEnvPlayerSurfaceTrigger::m_DataMap;
}


// CEnvPlayerSurfaceTrigger::~CEnvPlayerSurfaceTrigger  (line 35, @0x00000000021beed0, libserver.so)  // inlines: CEntityHandle, CHandle, Element, Find, FindAndRemove, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Remove, Set, ShiftElementsLeft, V_memmove, memmove, operator CEntityInstance*, operator==<CEnvPlayerSurfaceTrigger>, operator[], ~CPointEntity
// calls: memmove, CBaseEntity::~CBaseEntity
// callers: CEnvPlayerSurfaceTrigger::~CEnvPlayerSurfaceTrigger
// globals: g_PlayerSurfaceTriggers, CEntityHandle::gm_pEntityList
void __fastcall CEnvPlayerSurfaceTrigger::~CEnvPlayerSurfaceTrigger(CEnvPlayerSurfaceTrigger *const this)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  int m_Size; // r11d
  CHandle<CEnvPlayerSurfaceTrigger> *m_pMemory; // rax
  int v6; // ecx
  CEntityInstance *v7; // rsi
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // r8
  CEntityIdentity *v11; // rsi
  CEntityIdentity *v12; // rsi
  int v13; // [rsp+10h] [rbp-40h]

  this->_vptr_IHandleEntity = &off_40282B0;
  m_pEntity = this->m_pEntity;
  v13 = -1;
  if ( m_pEntity != 0 )
  {
    v3 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v13 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
  }
  m_Size = g_PlayerSurfaceTriggers.m_Size;
  if ( g_PlayerSurfaceTriggers.m_Size > 0 )
  {
    m_pMemory = g_PlayerSurfaceTriggers.m_Memory.m_pMemory;
    v6 = 0;
    while ( 1 )
    {
      m_pInstance = 0;
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
        if ( v11 != 0 )
        {
          v12 = &v11[m_pMemory->m_Index & 0x1FF];
          if ( v12 != 0 && m_pMemory->m_Index == v12->m_EHandle.m_Index )
            m_pInstance = v12->m_pInstance;
        }
      }
      v7 = 0;
      if ( (v13 + 2) > 1 )
      {
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v13 & 0x7FFF) >> 9];
        if ( v8 != 0 )
        {
          v9 = &v8[v13 & 0x1FF];
          if ( v9 != 0 && v13 == v9->m_EHandle.m_Index )
            v7 = v9->m_pInstance;
        }
      }
      if ( m_pInstance == v7 )
        break;
      ++v6;
      ++m_pMemory;
      if ( v6 == g_PlayerSurfaceTriggers.m_Size )
        goto LABEL_22;
    }
    if ( g_PlayerSurfaceTriggers.m_Size - v6 - 1 > 0 )
    {
      memmove(
        m_pMemory,
        &g_PlayerSurfaceTriggers.m_Memory.m_pMemory[v6 + 1],
        4LL * (g_PlayerSurfaceTriggers.m_Size - v6 - 1));
      m_Size = g_PlayerSurfaceTriggers.m_Size;
    }
    g_PlayerSurfaceTriggers.m_Size = m_Size - 1;
  }
LABEL_22:
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvPlayerSurfaceTrigger::~CEnvPlayerSurfaceTrigger  (line 35, @0x00000000021bf090, libserver.so)
// calls: CEnvPlayerSurfaceTrigger::~CEnvPlayerSurfaceTrigger, CBaseEntity::operator delete
void __fastcall CEnvPlayerSurfaceTrigger::~CEnvPlayerSurfaceTrigger(CEnvPlayerSurfaceTrigger *const this)
{
  CEnvPlayerSurfaceTrigger::~CEnvPlayerSurfaceTrigger(this);
  CBaseEntity::operator delete(this);
}


// CEnvPlayerSurfaceTrigger::Spawn  (line 43, @0x00000000021dcdc0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CEnvPlayerSurfaceTrigger> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator[]
// calls: CPointEntity::Spawn, CBaseEntity::SetMoveType, CUtlMemory<CHandle<CEnvPlayerSurfaceTrigger>, int>::Grow
// globals: g_PlayerSurfaceTriggers
void __fastcall CEnvPlayerSurfaceTrigger::Spawn(
        CEnvPlayerSurfaceTrigger *const this,
        const CEntityKeyValues *pKeyValues)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  __int64 m_Size; // rbx
  int v6; // eax
  CHandle<CEnvPlayerSurfaceTrigger> *v7; // rax
  int v8; // [rsp+0h] [rbp-20h]

  CPointEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  m_pEntity = this->m_pEntity;
  this->m_bDisabled = 0;
  this->m_iCurrentGameMaterial = 0;
  v8 = -1;
  if ( m_pEntity != 0 )
  {
    v4 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v8 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
  }
  m_Size = g_PlayerSurfaceTriggers.m_Size;
  v6 = g_PlayerSurfaceTriggers.m_Size;
  if ( g_PlayerSurfaceTriggers.m_Size == g_PlayerSurfaceTriggers.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHandle<CEnvPlayerSurfaceTrigger>,int>::Grow(&g_PlayerSurfaceTriggers.m_Memory, 1);
    v6 = g_PlayerSurfaceTriggers.m_Size;
  }
  g_PlayerSurfaceTriggers.m_Size = v6 + 1;
  v7 = &g_PlayerSurfaceTriggers.m_Memory.m_pMemory[m_Size];
  if ( v7 != 0 )
    v7->m_Index = v8;
}


// CEnvPlayerSurfaceTrigger::OnRestore  (line 58, @0x00000000021dcea0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CEnvPlayerSurfaceTrigger> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator[]
// calls: CBaseEntity::OnRestore, CUtlMemory<CHandle<CEnvPlayerSurfaceTrigger>, int>::Grow
// globals: g_PlayerSurfaceTriggers
void __fastcall CEnvPlayerSurfaceTrigger::OnRestore(CEnvPlayerSurfaceTrigger *const this)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  __int64 m_Size; // rbx
  int v5; // eax
  CHandle<CEnvPlayerSurfaceTrigger> *v6; // rax
  int v7; // [rsp+0h] [rbp-20h]

  CBaseEntity::OnRestore(this);
  v7 = -1;
  if ( this != 0 )
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v3 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v7 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
    }
  }
  m_Size = g_PlayerSurfaceTriggers.m_Size;
  v5 = g_PlayerSurfaceTriggers.m_Size;
  if ( g_PlayerSurfaceTriggers.m_Size == g_PlayerSurfaceTriggers.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHandle<CEnvPlayerSurfaceTrigger>,int>::Grow(&g_PlayerSurfaceTriggers.m_Memory, 1);
    v5 = g_PlayerSurfaceTriggers.m_Size;
  }
  g_PlayerSurfaceTriggers.m_Size = v5 + 1;
  v6 = &g_PlayerSurfaceTriggers.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    v6->m_Index = v7;
}


// CEnvPlayerSurfaceTrigger::SetPlayerSurface  (line 68, @0x00000000021d2560, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator->, operator[]
// calls: CEnvPlayerSurfaceTrigger::PlayerSurfaceChanged
// callers: CGameMovement::CategorizePosition, CBaseServerVehicle::ProcessMovement
// globals: g_PlayerSurfaceTriggers, CEntityHandle::gm_pEntityList
void __fastcall CEnvPlayerSurfaceTrigger::SetPlayerSurface(CBasePlayer *pPlayer, char gameMaterial)
{
  __int64 v3; // r13
  unsigned __int64 v5; // rbx
  CEnvPlayerSurfaceTrigger *m_pInstance; // rdi
  CHandle<CEnvPlayerSurfaceTrigger> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx

  if ( gameMaterial != 0 && g_PlayerSurfaceTriggers.m_Size > 0 )
  {
    v3 = 4LL * (g_PlayerSurfaceTriggers.m_Size - 1) + 4;
    v5 = 0;
    do
    {
      m_pInstance = 0;
      v7 = &g_PlayerSurfaceTriggers.m_Memory.m_pMemory[v5 / 4];
      m_Index = g_PlayerSurfaceTriggers.m_Memory.m_pMemory[v5 / 4].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v9 = v7->m_Index;
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[v9 & 0x1FF];
          if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
            m_pInstance = v11->m_pInstance;
        }
      }
      v5 += 4LL;
      CEnvPlayerSurfaceTrigger::PlayerSurfaceChanged(m_pInstance, pPlayer, gameMaterial);
    }
    while ( v5 != v3 );
  }
}


// CEnvPlayerSurfaceTrigger::PlayerSurfaceChanged  (line 85, @0x00000000021d24a0, libserver.so)  // inlines: curtime
// calls: DevMsg, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// callers: CEnvPlayerSurfaceTrigger::SetPlayerSurface
// strings: "Player changed material to %d (was %d)\n"
// globals: CEnvPlayerSurfaceTrigger::UpdateMaterialThink(void)
void __fastcall CEnvPlayerSurfaceTrigger::PlayerSurfaceChanged(
        CEnvPlayerSurfaceTrigger *const this,
        CBasePlayer *pPlayer,
        char gameMaterial)
{
  int m_iCurrentGameMaterial; // ecx
  int m_iTargetGameMaterial; // eax
  int v6; // r12d
  double v7; // xmm1_8
  double v8; // xmm0_8
  CGlobalVars *v9; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( !this->m_bDisabled )
  {
    m_iCurrentGameMaterial = this->m_iCurrentGameMaterial;
    if ( gameMaterial != m_iCurrentGameMaterial )
    {
      m_iTargetGameMaterial = this->m_iTargetGameMaterial;
      v6 = gameMaterial;
      if ( gameMaterial == m_iTargetGameMaterial || m_iCurrentGameMaterial == m_iTargetGameMaterial )
      {
        DevMsg(2, "Player changed material to %d (was %d)\n", gameMaterial, m_iCurrentGameMaterial);
        this->m_iCurrentGameMaterial = v6;
        CBaseEntity::ThinkSet(this, CEnvPlayerSurfaceTrigger::UpdateMaterialThink, 0.0, 0, 0);
        v8 = 0.0;
        v9 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
              (m_pfnWarningFunc)(1, 0.0);
          }
          *&v8 = LODWORD(v9->m_flCurrentTime);
        }
        CBaseEntity::SetNextThink(this, v8, v7, 0);
      }
    }
  }
}


// CEnvPlayerSurfaceTrigger::UpdateMaterialThink  (line 107, @0x00000000021d6740, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CEnvPlayerSurfaceTrigger::UpdateMaterialThink(CEnvPlayerSurfaceTrigger *const this)
{
  bool v1; // zf
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  v1 = this->m_iCurrentGameMaterial == this->m_iTargetGameMaterial;
  value.m_flags = 0;
  value.m_type = 0;
  value.m_uint64 = 0;
  if ( !v1 )
  {
    CEntityIOOutput::FireOutputInternal(&this->m_OnSurfaceChangedFromTarget, 0, this, &value, 0.0);
    if ( (value.m_flags & 1) == 0 )
      return;
LABEL_6:
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    return;
  }
  CEntityIOOutput::FireOutputInternal(&this->m_OnSurfaceChangedToTarget, 0, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    goto LABEL_6;
}


// CEnvPlayerSurfaceTrigger::InputDisable  (line 122, @0x00000000021bb020, libserver.so)
void __fastcall CEnvPlayerSurfaceTrigger::InputDisable(
        CEnvPlayerSurfaceTrigger *const this,
        inputdata_t *const inputdata)
{
  this->m_bDisabled = 1;
}


// CEnvPlayerSurfaceTrigger::InputEnable  (line 130, @0x00000000021bb030, libserver.so)
void __fastcall CEnvPlayerSurfaceTrigger::InputEnable(
        CEnvPlayerSurfaceTrigger *const this,
        inputdata_t *const inputdata)
{
  this->m_bDisabled = 0;
}


