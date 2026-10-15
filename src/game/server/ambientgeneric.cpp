
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// dynpitchvol_t::AddDatadescMetadataKeys  (line 96, @0x000000000214cce0, libserver.so)
void __fastcall dynpitchvol_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// dynpitchvol_t::GetBaseMap  (line 96, @0x000000000214ccf0, libserver.so)
datamap_t *__cdecl dynpitchvol_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<dynpitchvol_t>  (line 96, @0x000000000214cd00, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "dynpitchvol_t"
// globals: `guard variable for'DataMapInit<dynpitchvol_t>(dynpitchvol_t *)::nameHolder, dynpitchvol_t::m_DataMap, DataMapInit<dynpitchvol_t>(dynpitchvol_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<dynpitchvol_t>(dynpitchvol_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<dynpitchvol_t>(dynpitchvol_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<dynpitchvol_t>(dynpitchvol_t *)::nameHolder) != 0 )
  {
    DataMapInit<dynpitchvol_t>(dynpitchvol_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<dynpitchvol_t>(dynpitchvol_t *)::nameHolder.m_pszBase = "dynpitchvol_t";
    DataMapInit<dynpitchvol_t>(dynpitchvol_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<dynpitchvol_t>(dynpitchvol_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<dynpitchvol_t>(dynpitchvol_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<dynpitchvol_t>(dynpitchvol_t *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<dynpitchvol_t>(dynpitchvol_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<dynpitchvol_t>(dynpitchvol_t *)::nameHolder,
      &_dso_handle);
  }
  dynpitchvol_t::m_DataMap.baseMap = 0;
  dynpitchvol_t::m_DataMap.dataDesc = &DataMapInit<dynpitchvol_t>(dynpitchvol_t *)::dataDesc[1];
  dynpitchvol_t::m_DataMap.dataNumFields = 25;
  return &dynpitchvol_t::m_DataMap;
}


// CAmbientGeneric::GetDataDescMap  (line 125, @0x000000000213cba0, libserver.so)
// globals: CAmbientGeneric::m_DataMap
datamap_t *__fastcall CAmbientGeneric::GetDataDescMap(CAmbientGeneric *const this)
{
  return &CAmbientGeneric::m_DataMap;
}


// CAmbientGeneric::AddDatadescMetadataKeys  (line 125, @0x000000000214cdc0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CAmbientGeneric::GetEntityClass(void)
void __fastcall CAmbientGeneric::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CAmbientGeneric::GetEntityClass);
}


// CAmbientGeneric::GetBaseMap  (line 125, @0x000000000214cde0, libserver.so)
datamap_t *__cdecl CAmbientGeneric::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CAmbientGeneric>  (line 125, @0x000000000216e3b0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "CAmbientGeneric"
// globals: `guard variable for'DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder, `guard variable for'DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::dataDesc, CAmbientGeneric::GetEntityClass(void), CAmbientGeneric::m_DataMap, DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CAmbientGeneric>(CAmbientGeneric *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder) != 0 )
  {
    DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder.m_pszBase = "CAmbientGeneric";
    DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder,
      &_dso_handle);
  }
  CAmbientGeneric::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v2, DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder.m_pszBase), "RampThink");
    m_Size = DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder.m_Names.m_Size == DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::dataDesc[12].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::dataDesc);
  }
  CAmbientGeneric::m_DataMap.dataNumFields = 19;
  CAmbientGeneric::m_DataMap.dataDesc = &DataMapInit<CAmbientGeneric>(CAmbientGeneric *)::dataDesc[1];
  AddDatadescMetadataKeys(&CAmbientGeneric::m_DataMap, CAmbientGeneric::GetEntityClass);
  return &CAmbientGeneric::m_DataMap;
}


// CAmbientGeneric::Precache  (line 164, @0x000000000213e1e0, libserver.so)  // inlines: Precache, String, ToCStr, V_strlen
// calls: CEntityInstance::Precache, strlen, CBaseEntity::PrecacheScriptSound
void __fastcall CAmbientGeneric::Precache(CAmbientGeneric *const this, const CEntityPrecacheContext *pContext)
{
  const char *m_pAsString; // rbx

  CEntityInstance::Precache(this, pContext);
  if ( this->m_iszSound.u.m_Id != 0 )
  {
    m_pAsString = this->m_iszSound.u.m_pAsString;
    if ( strlen(m_pAsString) > 1 && *m_pAsString != 33 )
      CBaseEntity::PrecacheScriptSound(m_pAsString, pContext->m_pManifest);
  }
}


// CAmbientGeneric::ComputeMaxAudibleDistance  (line 185, @0x000000000214cdf0, libserver.so)
// callers: CAmbientGeneric::Spawn
void __fastcall CAmbientGeneric::ComputeMaxAudibleDistance(CAmbientGeneric *const this)
{
  float m_radius; // xmm0_4
  double v3; // xmm2_8
  float v4; // xmm0_4
  int i; // r13d
  double v6; // xmm3_8
  float v7; // xmm0_4
  int v8; // [rsp+4h] [rbp-2Ch]
  float flMinRadius; // [rsp+8h] [rbp-28h]
  float flTestRadius; // [rsp+Ch] [rbp-24h]
  float flTestRadiusa; // [rsp+Ch] [rbp-24h]

  if ( this->m_iSoundLevel != soundlevel_t::SNDLVL_NONE && (m_radius = this->m_radius) != 0.0 )
  {
    if ( (*(*g_pSoundSystem + 280LL))(g_pSoundSystem, m_radius, snd_foliage_db_loss.m_pParent->m_Value.m_fValue) <= 0.00101 )
    {
      this->m_flMaxRadius = this->m_radius;
    }
    else
    {
      *&v3 = LODWORD(this->m_radius);
      flMinRadius = this->m_radius;
      for ( *&v3 = *&v3 + *&v3; ; *&v3 = flTestRadius + flTestRadius )
      {
        flTestRadius = *&v3;
        v4 = (*(*g_pSoundSystem + 280LL))(
               g_pSoundSystem,
               this->m_iSoundLevel,
               v3,
               snd_foliage_db_loss.m_pParent->m_Value.m_fValue);
        *&v3 = LODWORD(flTestRadius);
        if ( v4 <= 0.00101 )
          break;
        if ( flTestRadius > 100000.0 )
          goto LABEL_3;
        flMinRadius = flTestRadius;
      }
      for ( i = 4; i != 0; --i )
      {
        *&v6 = LODWORD(flMinRadius);
        v8 = LODWORD(v3);
        *&v6 = (flMinRadius + *&v3) * 0.5;
        flTestRadiusa = *&v6;
        v7 = (*(*g_pSoundSystem + 280LL))(
               g_pSoundSystem,
               this->m_iSoundLevel,
               v6,
               snd_foliage_db_loss.m_pParent->m_Value.m_fValue);
        LODWORD(v3) = v8;
        if ( v7 > 0.00101 )
          flMinRadius = flTestRadiusa;
        else
          *&v3 = flTestRadiusa;
      }
      this->m_flMaxRadius = *&v3;
    }
  }
  else
  {
LABEL_3:
    this->m_flMaxRadius = -1.0;
  }
}


// CAmbientGeneric::InputPitch  (line 248, @0x000000000213cbb0, libserver.so)  // inlines: Float, operator float
void __fastcall CAmbientGeneric::InputPitch(CAmbientGeneric *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  int v3; // eax

  if ( inputdata->value.m_type == 34 )
  {
    v3 = 255;
    m_float64 = inputdata->value.m_float64;
    if ( m_float64 <= 255.0 )
    {
      v3 = 0;
      if ( m_float64 >= 0.0 )
        goto LABEL_4;
    }
  }
  else
  {
    m_float64 = inputdata->value.m_float;
    v3 = 255;
    if ( m_float64 <= 255.0 )
    {
      v3 = 0;
      if ( m_float64 >= 0.0 )
LABEL_4:
        v3 = m_float64;
    }
  }
  this->m_dpv.pitch = v3;
  (*(this->_vptr_IHandleEntity + 208))(this, 2);
}


// CAmbientGeneric::InputVolume  (line 260, @0x000000000213cc20, libserver.so)  // inlines: Float, operator float
void __fastcall CAmbientGeneric::InputVolume(CAmbientGeneric *const this, inputdata_t *const inputdata)
{
  float m_float; // xmm0_4
  int v3; // edx
  int v4; // eax
  int (**vptr_IHandleEntity)(...); // rax

  if ( inputdata->value.m_type != 34 )
  {
    m_float = inputdata->value.m_float;
    if ( m_float <= 10.0 )
      goto LABEL_3;
LABEL_7:
    v4 = 25600;
    v3 = 100;
    goto LABEL_5;
  }
  m_float = inputdata->value.m_float64;
  if ( m_float > 10.0 )
    goto LABEL_7;
LABEL_3:
  if ( m_float < 0.0 )
  {
    v4 = 0;
    v3 = 0;
  }
  else
  {
    v3 = (m_float * 10.0);
    v4 = v3 << 8;
  }
LABEL_5:
  this->m_dpv.volfrac = v4;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_dpv.vol = v3;
  vptr_IHandleEntity[208](this, 1);
}


// CAmbientGeneric::InputFadeIn  (line 276, @0x00000000021445c0, libserver.so)  // inlines: Float, curtime, operator float
// calls: CBaseEntity::SetNextThink
void __fastcall CAmbientGeneric::InputFadeIn(CAmbientGeneric *const this, inputdata_t *const inputdata)
{
  double v2; // xmm1_8
  float m_float64; // xmm0_4
  int v5; // eax
  CGlobalVars *v6; // rbx
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax

  this->m_dpv.fadeout = 0;
  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  v5 = m_float64;
  if ( m_float64 > 100 )
  {
    v5 = 100;
    goto LABEL_8;
  }
  if ( v5 >= 0 )
  {
    this->m_dpv.fadein = v5;
    if ( v5 == 0 )
    {
LABEL_9:
      v6 = gpGlobals;
      if ( gpGlobals == 0 )
        goto LABEL_6;
      goto LABEL_10;
    }
LABEL_8:
    this->m_dpv.fadein = 25600 / (5 * v5);
    goto LABEL_9;
  }
  this->m_dpv.fadein = 0;
  v6 = gpGlobals;
  if ( gpGlobals == 0 )
  {
LABEL_6:
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1036831949), v2, 0);
    return;
  }
LABEL_10:
  if ( !v6->m_bEnableAssertions && !v6->m_bInSimulation )
  {
    m_pfnWarningFunc = v6->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(1);
  }
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v6->m_flCurrentTime + 0.1)), v2, 0);
}


// CAmbientGeneric::InputFadeOut  (line 296, @0x00000000021446c0, libserver.so)  // inlines: Float, curtime, operator float
// calls: CBaseEntity::SetNextThink
void __fastcall CAmbientGeneric::InputFadeOut(CAmbientGeneric *const this, inputdata_t *const inputdata)
{
  double v2; // xmm1_8
  float m_float64; // xmm0_4
  int v5; // eax
  CGlobalVars *v6; // rbx
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax

  this->m_dpv.fadein = 0;
  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  v5 = m_float64;
  if ( m_float64 > 100 )
  {
    v5 = 100;
    goto LABEL_8;
  }
  if ( v5 >= 0 )
  {
    this->m_dpv.fadeout = v5;
    if ( v5 == 0 )
    {
LABEL_9:
      v6 = gpGlobals;
      if ( gpGlobals == 0 )
        goto LABEL_6;
      goto LABEL_10;
    }
LABEL_8:
    this->m_dpv.fadeout = 25600 / (5 * v5);
    goto LABEL_9;
  }
  this->m_dpv.fadeout = 0;
  v6 = gpGlobals;
  if ( gpGlobals == 0 )
  {
LABEL_6:
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1036831949), v2, 0);
    return;
  }
LABEL_10:
  if ( !v6->m_bEnableAssertions && !v6->m_bInSimulation )
  {
    m_pfnWarningFunc = v6->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(1);
  }
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v6->m_flCurrentTime + 0.1)), v2, 0);
}


// CAmbientGeneric::Activate  (line 315, @0x000000000214a620, libserver.so)  // inlines: AddEFlags, CUtlSymbolLarge, DispatchUpdateTransmitState, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, curtime, entindex, operator CEntityInstance*, operator!=, operator!=<CBaseEntity>, operator=, operator==<CBaseEntity>
// calls: CBaseEntity::Activate, CEntityInstance::GetEntityIndex, CBaseEntity::SetNextThink, CGameEntitySystem::FindEntityByName, CEntityHandle::operator CEntityInstance*, CBaseEntity::DispatchUpdateTransmitState
// globals: CEntityHandle::gm_pEntityList
void __fastcall CAmbientGeneric::Activate(CAmbientGeneric *const this, ActivateType_t activateType)
{
  double v3; // xmm1_8
  uint32 m_Index; // eax
  CConcreteEntityList *v5; // rdi
  unsigned int v6; // ecx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  int v12; // eax
  __int16 v13; // cx
  __int64 v14; // rsi
  CGlobalVars *v15; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v17; // xmm0_8
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v20; // eax
  __int16 v21; // cx
  CEntityInstance *v22; // rax
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  CBaseEntity::Activate(this, activateType);
  m_Index = this->m_hSoundSource.m_Index;
  v5 = CEntityHandle::gm_pEntityList;
  v6 = m_Index + 2;
  if ( m_Index + 2 <= 1
    || (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSoundSource.m_Index) >> 9) & 0x3F]) == 0
    || (v8 = &v7[this->m_hSoundSource.m_Index & 0x1FF]) == 0
    || m_Index != v8->m_EHandle.m_Index
    || v8->m_pInstance == 0 )
  {
    if ( this->m_sSourceEntName.u.m_Id != 0 )
    {
      iszName.u.m_Id = this->m_sSourceEntName.u.m_Id;
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
      if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
      {
        v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v21 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hSoundSource.m_Index) = v21 | this->m_hSoundSource.m_Index & 0x8000;
        this->m_hSoundSource.m_Index = (v20 << 15) | this->m_hSoundSource.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hSoundSource.m_Index = -1;
      }
      v22 = CEntityHandle::operator CEntityInstance *(&this->m_hSoundSource);
      if ( v22 != 0 )
        this->m_nSoundSourceEntIndex = CEntityInstance::GetEntityIndex(v22);
      m_Index = this->m_hSoundSource.m_Index;
      v5 = CEntityHandle::gm_pEntityList;
      v6 = m_Index + 2;
    }
    if ( v6 > 1
      && (v9 = v5->m_pIdentityChunks[(LOWORD(this->m_hSoundSource.m_Index) >> 9) & 0x3F]) != 0
      && (v10 = &v9[this->m_hSoundSource.m_Index & 0x1FF]) != 0
      && v10->m_EHandle.m_Index == m_Index
      && v10->m_pInstance != 0 )
    {
      if ( (this->m_spawnflags.m_Value & 1) == 0 )
      {
        this->m_iEFlags |= 0x80u;
        if ( this->m_pEntity != 0 )
          CBaseEntity::DispatchUpdateTransmitState(this);
      }
    }
    else
    {
      if ( this != 0 && (v11 = this->m_pEntity) != 0 )
      {
        v12 = (v11->m_EHandle.m_Index >> 15) - (v11->m_flags & 1);
        v13 = 0x7FFF;
        if ( v11->m_EHandle.m_Index != -1 )
          v13 = v11->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hSoundSource.m_Index) = v13 | this->m_hSoundSource.m_Index & 0x8000;
        this->m_hSoundSource.m_Index = (v12 << 15) | this->m_hSoundSource.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hSoundSource.m_Index = -1;
      }
      this->m_nSoundSourceEntIndex = CEntityInstance::GetEntityIndex(this);
    }
  }
  if ( this->m_fActive )
  {
    if ( (gpGlobals->eLoadType - 1) <= 1 || (*(g_pGameRules->_vptr_CGameRules + 40))(g_pGameRules) != 0 )
      v14 = 3;
    else
      v14 = 11;
    if ( this->m_dpv.vol > 0 )
      (*(this->_vptr_IHandleEntity + 208))(this, v14);
    v15 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, v14);
      }
      HIDWORD(v17) = 0;
      *&v17 = v15->m_flCurrentTime + 0.1;
    }
    else
    {
      *&v17 = 1036831949;
    }
    CBaseEntity::SetNextThink(this, v17, v3, 0);
  }
}


// CAmbientGeneric::SetTransmit  (line 379, @0x0000000002147980, libserver.so)  // inlines: DistToSqr, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Instance, IsUsed, IsValid, LengthSqr, LookupEntity, LookupEntityByIndex, LookupEntityByNetworkIndex, operator CEntityInstance*, operator!, operator->
// calls: CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
void __fastcall CAmbientGeneric::SetTransmit(CAmbientGeneric *const this, CCheckTransmitInfo *pInfo, bool bAlways)
{
  uint32 m_Index; // eax
  unsigned __int64 v5; // r8
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rcx
  CAmbientGeneric *m_pInstance; // r9
  int32 m_Data; // ecx
  CEntityIdentity *v10; // r10
  CEntityIdentity *v11; // rdi
  const CBaseEntity *v12; // r13
  const Vector *AbsOrigin; // r12
  const Vector *v14; // rax
  __int64 v15; // rcx
  CEntityIdentity *v16; // rdx
  CEntityInstance *v17; // rdi
  __int64 v18; // r8
  CEntityIdentity *v19; // rdx
  CCheckTransmitInfo *pInfoa; // [rsp+8h] [rbp-28h]

  m_Index = this->m_hSoundSource.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = this->m_hSoundSource.m_Index & 0x7FFF;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9)];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hSoundSource.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && this != m_pInstance && this->m_fActive && (this->m_spawnflags.m_Value & 1) == 0 )
        {
          m_Data = pInfo->m_nClientEntityIndex.m_Data;
          if ( m_Data <= 0x7FFE )
          {
            v10 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[m_Data >> 9];
            if ( v10 != 0 )
            {
              v11 = &v10[m_Data & 0x1FF];
              if ( v11 != 0 && (v11->m_EHandle.m_Index & 0x7FFF) == m_Data )
              {
                v12 = v11->m_pInstance;
                if ( v11->m_pInstance != 0 )
                {
                  if ( this->m_flMaxRadius < 0.0 )
                  {
                    v18 = v5 & 0x1FF;
                    v15 = 8 * v18;
                    v19 = &v6[v18];
LABEL_22:
                    if ( m_Index == v19->m_EHandle.m_Index )
                    {
                      v17 = v19->m_pInstance;
                      goto LABEL_20;
                    }
LABEL_19:
                    v17 = 0;
LABEL_20:
                    (*(v17->_vptr_IHandleEntity + 66))(v17, pInfo, 0, v15);
                    return;
                  }
                  pInfoa = pInfo;
                  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
                  v14 = CBaseEntity::GetAbsOrigin(v12);
                  pInfo = pInfoa;
                  if ( (this->m_flMaxRadius * this->m_flMaxRadius) >= ((((v14->x - AbsOrigin->x)
                                                                       * (v14->x - AbsOrigin->x))
                                                                      + ((v14->y - AbsOrigin->y)
                                                                       * (v14->y - AbsOrigin->y)))
                                                                     + ((v14->z - AbsOrigin->z) * (v14->z - AbsOrigin->z))) )
                  {
                    m_Index = this->m_hSoundSource.m_Index;
                    v15 = CEntityHandle::gm_pEntityList;
                    if ( m_Index + 2 <= 1 )
                      goto LABEL_19;
                    v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSoundSource.m_Index) >> 9)
                                                                         & 0x3F];
                    if ( v16 == 0 )
                      goto LABEL_19;
                    v15 = 120LL * (this->m_hSoundSource.m_Index & 0x1FF);
                    v19 = (v16 + v15);
                    if ( v19 == 0 )
                      goto LABEL_19;
                    goto LABEL_22;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// CAmbientGeneric::UpdateOnRemove  (line 404, @0x0000000002169db0, libserver.so)
// calls: CBaseEntity::UpdateOnRemove
void __fastcall CAmbientGeneric::UpdateOnRemove(CAmbientGeneric *const this)
{
  if ( this->m_fActive )
    (*(this->_vptr_IHandleEntity + 208))(this, 4);
  CBaseEntity::UpdateOnRemove(this);
}


// CAmbientGeneric::RampThink  (line 420, @0x000000000214c730, libserver.so)  // inlines: AllocateData, CSosFieldData, CSosFieldDataFloat, ClearData, CopyData, GetDataPtr, Init, V_memcpy, curtime, memcpy, ~CSosFieldData, ~CSosFieldDataFloat
// calls: CSoundOpGameSystem::SetSoundEventParam, operator delete [], CBaseEntity::SetNextThink, CSosFieldData::ClearData, _Unwind_Resume
// strings: "volume_atten"
void __fastcall CAmbientGeneric::RampThink(CAmbientGeneric *const this)
{
  double v1; // xmm1_8
  __m128i v2; // xmm2
  int pitch; // r12d
  int vol; // r13d
  __int64 v6; // r14
  int v7; // r15d
  int volfrac; // eax
  int fadein; // r13d
  __int64 v10; // rdx
  int v11; // r13d
  int volrun; // eax
  int volstart; // eax
  int v14; // r15d
  int lfotype; // eax
  int lfofrac; // edx
  int lforate; // ecx
  int v18; // edx
  __int64 v19; // rsi
  int lfomodpitch; // eax
  int v21; // edx
  int lfomodvol; // eax
  int v23; // edx
  bool v24; // zf
  CGlobalVars *v25; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v27; // xmm0_8
  int pitchfrac; // eax
  int spinup; // r12d
  __int64 v30; // rdx
  int v31; // r12d
  int pitchrun; // eax
  __m128i v33; // xmm1
  int v34; // r13d
  int v35; // eax
  int spindown; // ecx
  int v37; // eax
  int fadeout; // ecx
  int v39; // eax
  int (**vptr_IHandleEntity)(...); // rax
  int (**v41)(...); // rax
  CSosFieldData fieldData; // [rsp+0h] [rbp-50h] BYREF

  pitch = this->m_dpv.pitch;
  vol = this->m_dpv.vol;
  if ( *&this->m_dpv.spinup != 0 )
  {
    pitchfrac = this->m_dpv.pitchfrac;
    spinup = this->m_dpv.spinup;
    v30 = (pitchfrac >> 8);
    if ( spinup <= 0 )
    {
      spindown = this->m_dpv.spindown;
      pitch = pitchfrac >> 8;
      if ( spindown > 0 )
      {
        v37 = pitchfrac - spindown;
        this->m_dpv.pitchfrac = v37;
        pitch = v37 >> 8;
      }
    }
    else
    {
      v31 = pitchfrac + spinup;
      this->m_dpv.pitchfrac = v31;
      pitch = v31 >> 8;
    }
    pitchrun = this->m_dpv.pitchrun;
    if ( pitchrun < pitch )
    {
      this->m_dpv.spinup = 0;
      pitch = pitchrun;
    }
    if ( pitch < this->m_dpv.pitchstart )
    {
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      this->m_dpv.spindown = 0;
      vptr_IHandleEntity[208](this, 4, v30);
      return;
    }
    if ( pitch > 255 )
    {
      pitch = 255;
    }
    else if ( pitch <= 0 )
    {
      pitch = 1;
    }
    this->m_dpv.pitch = pitch;
    v6 = v30 != pitch;
    if ( *&this->m_dpv.fadein == 0 )
    {
      lfotype = this->m_dpv.lfotype;
      v14 = 2;
      goto LABEL_54;
    }
    v7 = 2;
  }
  else
  {
    if ( *&this->m_dpv.fadein == 0 )
    {
      lfotype = this->m_dpv.lfotype;
      if ( lfotype == 0 )
        return;
      LOBYTE(v6) = 0;
      v14 = 0;
LABEL_14:
      lfofrac = this->m_dpv.lfofrac;
      if ( lfofrac > 1879048191 )
      {
        this->m_dpv.lfofrac = 0;
        lfofrac = 0;
      }
      lforate = this->m_dpv.lforate;
      v18 = lforate + lfofrac;
      if ( v18 < 0 )
      {
        this->m_dpv.lfofrac = 0;
        v19 = 0;
        this->m_dpv.lforate = (lforate >> 31) ^ lforate;
        this->m_dpv.lforate -= lforate >> 31;
      }
      else
      {
        v19 = (v18 >> 8);
        if ( v19 > 255 )
        {
          v19 = 255;
          this->m_dpv.lfofrac = 65280;
          this->m_dpv.lforate = (lforate >> 31) - ((lforate >> 31) ^ lforate);
          if ( lfotype != 1 )
          {
LABEL_20:
            if ( lfotype == 3 )
            {
              if ( v19 == 255 )
              {
                LOBYTE(v19) = 0;
                this->m_dpv.lfomult = (*(*random_valve + 16LL))(random_valve, v19, 255);
              }
            }
            else
            {
              this->m_dpv.lfomult = v19;
            }
LABEL_23:
            lfomodpitch = this->m_dpv.lfomodpitch;
            if ( lfomodpitch != 0 )
            {
              v21 = pitch + lfomodpitch * (this->m_dpv.lfomult - 128) / 100;
              if ( v21 > 255 )
              {
                v21 = 255;
              }
              else if ( v21 <= 0 )
              {
                v21 = 1;
              }
              v14 |= 2u;
              LOBYTE(v6) = (pitch != v21) | v6;
            }
            lfomodvol = this->m_dpv.lfomodvol;
            if ( lfomodvol != 0 )
            {
              v23 = vol + lfomodvol * (this->m_dpv.lfomult - 128) / 100;
              if ( v23 > 100 )
              {
                v23 = 100;
              }
              else if ( v23 < 0 )
              {
                v23 = 0;
              }
              v24 = vol == v23;
              vol = v23;
              v14 |= 1u;
              LOBYTE(v6) = !v24 | v6;
            }
            goto LABEL_55;
          }
LABEL_63:
          v35 = 255;
          if ( v19 > 127 )
            v35 = 0;
          this->m_dpv.lfomult = v35;
          goto LABEL_23;
        }
        this->m_dpv.lfofrac = v18;
      }
      if ( lfotype != 1 )
        goto LABEL_20;
      goto LABEL_63;
    }
    LOBYTE(v6) = 0;
    v7 = 0;
  }
  volfrac = this->m_dpv.volfrac;
  fadein = this->m_dpv.fadein;
  v10 = (volfrac >> 8);
  if ( fadein <= 0 )
  {
    fadeout = this->m_dpv.fadeout;
    vol = volfrac >> 8;
    if ( fadeout > 0 )
    {
      v39 = volfrac - fadeout;
      this->m_dpv.volfrac = v39;
      vol = v39 >> 8;
    }
  }
  else
  {
    v11 = volfrac + fadein;
    this->m_dpv.volfrac = v11;
    vol = v11 >> 8;
  }
  volrun = this->m_dpv.volrun;
  if ( volrun < vol )
  {
    this->m_dpv.fadein = 0;
    vol = volrun;
    this->m_dpv.volfrac = volrun << 8;
  }
  volstart = this->m_dpv.volstart;
  if ( vol < volstart )
  {
    this->m_dpv.vol = volstart;
    this->m_dpv.volfrac = volstart << 8;
    v41 = this->_vptr_IHandleEntity;
    this->m_dpv.fadeout = 0;
    v41[208](this, 4, v10);
    return;
  }
  if ( vol <= 100 )
  {
    if ( vol <= 0 )
    {
      this->m_dpv.volfrac = 256;
      vol = 1;
    }
  }
  else
  {
    this->m_dpv.volfrac = 25600;
    vol = 100;
  }
  this->m_dpv.vol = vol;
  v14 = v7 | 1;
  LOBYTE(v6) = (v10 != vol) | v6;
  lfotype = this->m_dpv.lfotype;
LABEL_54:
  if ( lfotype != 0 )
    goto LABEL_14;
LABEL_55:
  if ( (v6 & 1) != 0 && v14 != 0 )
  {
    *v2.m128i_i32 = vol;
    fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
    fieldData.m_nAllocSize = 0;
    fieldData.m_pData = 0;
    v33 = v2;
    *v33.m128i_i32 = vol * 0.0099999998;
    v34 = _mm_cvtsi128_si32(v33);
    fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
    fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
    fieldData.m_nAllocSize = 4;
    LODWORD(fieldData.m_pData) = v34;
    CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, this->m_nGUID, "volume_atten", &fieldData, 0);
    if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
      operator delete[](fieldData.m_pData);
  }
  v25 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v27) = 0;
    *&v27 = v25->m_flCurrentTime + 0.2;
  }
  else
  {
    *&v27 = 1045220557;
  }
  CBaseEntity::SetNextThink(this, v27, v1, 0);
}


// CAmbientGeneric::InitModulationParms  (line 624, @0x000000000214cf80, libserver.so)
// callers: CAmbientGeneric::ToggleSound, CAmbientGeneric::Spawn
// globals: rgdpvpreset
void __fastcall CAmbientGeneric::InitModulationParms(CAmbientGeneric *const this)
{
  int v1; // eax
  int preset; // eax
  int fadein; // eax
  int spinup; // ecx
  int v5; // edx
  int volstart; // r8d
  int volrun; // esi
  int pitchstart; // r9d
  int pitchrun; // eax
  int v10; // esi
  int v11; // eax
  int cspinup; // r8d
  int v13; // r9d
  __int64 v14; // rax
  int spindown; // r9d
  int fadeout; // r10d
  int lforate; // edx
  int v18; // edx

  v1 = 10 * this->m_iHealth.m_Value;
  if ( v1 <= 100 )
  {
    v18 = 0;
    if ( v1 >= 0 )
      v18 = 10 * this->m_iHealth.m_Value;
    this->m_dpv.volrun = v18;
  }
  else
  {
    this->m_dpv.volrun = 100;
  }
  preset = this->m_dpv.preset;
  if ( preset <= 27 && preset != 0 )
  {
    v14 = preset - 1;
    *&this->m_dpv.preset = *&rgdpvpreset[v14].preset;
    *&this->m_dpv.pitchstart = *&rgdpvpreset[v14].pitchstart;
    *&this->m_dpv.spindown = *&rgdpvpreset[v14].spindown;
    spindown = this->m_dpv.spindown;
    *&this->m_dpv.volstart = *&rgdpvpreset[v14].volstart;
    *&this->m_dpv.fadeout = *&rgdpvpreset[v14].fadeout;
    *&this->m_dpv.lforate = *&rgdpvpreset[v14].lforate;
    *&this->m_dpv.lfomodvol = *&rgdpvpreset[v14].lfomodvol;
    *&this->m_dpv.cspincount = *&rgdpvpreset[v14].cspincount;
    *&this->m_dpv.spinupsav = *&rgdpvpreset[v14].spinupsav;
    *&this->m_dpv.pitchfrac = *&rgdpvpreset[v14].pitchfrac;
    *&this->m_dpv.fadeinsav = *&rgdpvpreset[v14].fadeinsav;
    *&this->m_dpv.volfrac = *&rgdpvpreset[v14].volfrac;
    this->m_dpv.lfomult = rgdpvpreset[v14].lfomult;
    if ( spindown > 0 )
    {
      spindown = (101 - spindown) << 6;
      this->m_dpv.spindown = spindown;
    }
    spinup = this->m_dpv.spinup;
    if ( spinup > 0 )
    {
      spinup = (101 - spinup) << 6;
      this->m_dpv.spinup = spinup;
    }
    fadein = this->m_dpv.fadein;
    volstart = 10 * this->m_dpv.volstart;
    volrun = 10 * this->m_dpv.volrun;
    this->m_dpv.volstart = volstart;
    this->m_dpv.volrun = volrun;
    if ( fadein > 0 )
    {
      fadein = (101 - fadein) << 6;
      this->m_dpv.fadein = fadein;
    }
    fadeout = this->m_dpv.fadeout;
    if ( fadeout > 0 )
      fadeout = (101 - fadeout) << 6;
    lforate = this->m_dpv.lforate;
    this->m_dpv.fadeinsav = fadein;
    this->m_dpv.fadeoutsav = fadeout;
    this->m_dpv.spinupsav = spinup;
    this->m_dpv.spindownsav = spindown;
    v5 = lforate << 8;
    this->m_dpv.lforate = v5;
  }
  else
  {
    fadein = this->m_dpv.fadeinsav;
    spinup = this->m_dpv.spinupsav;
    v5 = this->m_dpv.lforate;
    volstart = this->m_dpv.volstart;
    volrun = this->m_dpv.volrun;
  }
  this->m_dpv.fadein = fadein;
  this->m_dpv.fadeout = 0;
  if ( fadein != 0 )
  {
    this->m_dpv.vol = volstart;
  }
  else
  {
    this->m_dpv.vol = volrun;
    volstart = volrun;
  }
  pitchstart = this->m_dpv.pitchstart;
  this->m_dpv.spinup = spinup;
  this->m_dpv.spindown = 0;
  pitchrun = this->m_dpv.pitchrun;
  v10 = pitchstart;
  if ( spinup != 0 )
  {
    this->m_dpv.pitch = pitchstart;
  }
  else
  {
    this->m_dpv.pitch = pitchrun;
    v10 = pitchrun;
  }
  if ( v10 != 0 )
  {
    v11 = v10 << 8;
  }
  else
  {
    this->m_dpv.pitch = 100;
    v11 = 25600;
    v10 = 100;
  }
  this->m_dpv.pitchfrac = v11;
  this->m_dpv.volfrac = volstart << 8;
  cspinup = this->m_dpv.cspinup;
  this->m_dpv.lfofrac = 0;
  this->m_dpv.lforate = (v5 >> 31) ^ v5;
  this->m_dpv.lforate -= v5 >> 31;
  this->m_dpv.cspincount = 1;
  if ( cspinup != 0 )
  {
    v13 = (255 - pitchstart) / cspinup + pitchstart;
    if ( v13 >= 256 )
      v13 = 255;
    this->m_dpv.pitchrun = v13;
  }
  if ( (spinup != 0 || this->m_dpv.spindownsav != 0 || this->m_dpv.lfotype != 0 && this->m_dpv.lfomodpitch != 0)
    && v10 == 100 )
  {
    this->m_dpv.pitch = 101;
  }
}


// CAmbientGeneric::InputPlaySound  (line 706, @0x00000000021404e0, libserver.so)
void __fastcall CAmbientGeneric::InputPlaySound(CAmbientGeneric *const this, inputdata_t *const inputdata)
{
  if ( !this->m_fActive )
  {
    (*(this->_vptr_IHandleEntity + 208))(this, 4);
    (*(this->_vptr_IHandleEntity + 207))(this);
  }
}


// CAmbientGeneric::InputStopSound  (line 721, @0x0000000002140530, libserver.so)
void __fastcall CAmbientGeneric::InputStopSound(CAmbientGeneric *const this, inputdata_t *const inputdata)
{
  int (**vptr_IHandleEntity)(...); // rax

  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  if ( this->m_fActive )
    vptr_IHandleEntity[207](this, inputdata);
  else
    vptr_IHandleEntity[208](this, 4);
}


// CAmbientGeneric::SendSound  (line 734, @0x000000000214a020, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, CSosFieldData, CSosFieldDataFloat3, ClearData, Get, GetDataPtr, GetEntityIdentity, GetEntryIndex, GetInstance, GetSoundSourceIndex, InValidate, IndexToIdentity, Init, IsValid, LookupEntity, SetSoundEventParam, SetValue, StopSoundEvent, String, ToCStr, entindex, operator CBaseEntity*, operator CEntityInstance*, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::StopSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, CEntityInstance::GetEntityIndex, CSoundOpGameSystem::StartSoundEvent, CBaseEntity::GetAbsOrigin, CSoundOpGameSystem::SetSoundEventParam, operator delete [], operator new [] (14 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CAmbientGeneric::SendSound(CAmbientGeneric *const this, SoundFlags_t flags)
{
  const char *m_pAsString; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CSoundOpGameSystem *v7; // r13
  const CBaseEntity *m_pInstance; // r14
  CEntityIndex v9; // r15d
  const Vector *AbsOrigin; // rax
  vec_t z; // r15d
  vec_t y; // r13d
  vec_t x; // r14d
  SndOpEventGuid_t m_nGUID; // r14
  CSoundOpGameSystem *v15; // r13
  SosFieldValueMem_t *v16; // rax
  CSosFieldData fieldData; // [rsp+10h] [rbp-190h] BYREF
  CRecipientFilter v18; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v19; // [rsp+168h] [rbp-38h]

  m_pAsString = "";
  v19 = __readfsqword(0x28u);
  if ( this->m_iszSound.u.m_Id != 0 )
    m_pAsString = this->m_iszSound.u.m_pAsString;
  m_Index = this->m_hSoundSource.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSoundSource.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[this->m_hSoundSource.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0) )
  {
    if ( flags != SoundFlags_t::SND_STOP )
      return;
    if ( this->m_nSoundSourceEntIndex.m_Data == -1 )
      return;
    v7 = g_pSoundOpGameSystem;
    if ( this->m_nGUID.m_nGuid.m_Data == 0 )
      return;
LABEL_11:
    CRecipientFilter::CRecipientFilter(&v18);
    v18._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&v18);
    v18._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&v18);
    CSoundOpGameSystem::StopSoundEvent(v7, &v18, this->m_nGUID);
    v18._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&v18);
    this->m_nGUID.m_nGuid.m_Data = 0;
    this->m_nGUID.m_hStackHash = -1;
    return;
  }
  if ( flags == SoundFlags_t::SND_STOP )
  {
    v7 = g_pSoundOpGameSystem;
    if ( this->m_nGUID.m_nGuid.m_Data == 0 )
      return;
    goto LABEL_11;
  }
  v9.m_Data = CEntityInstance::GetEntityIndex(v6->m_pInstance).m_Data;
  CRecipientFilter::CRecipientFilter(&v18);
  v18._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&v18);
  v18._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&v18);
  this->m_nGUID = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &v18, m_pAsString, v9, -1, 0.0);
  v18._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&v18);
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  fieldData.m_pData = 0;
  z = AbsOrigin->z;
  y = AbsOrigin->y;
  x = AbsOrigin->x;
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
  v16 = operator new[](0xCu);
  fieldData.m_pData = v16;
  fieldData.m_nAllocSize = 12;
  *v16 = x;
  *(v16 + 1) = y;
  *(v16 + 2) = z;
  m_nGUID = this->m_nGUID;
  v15 = g_pSoundOpGameSystem;
  CRecipientFilter::CRecipientFilter(&v18);
  v18._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&v18);
  v18._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&v18);
  CSoundOpGameSystem::SetSoundEventParam(v15, &v18, m_nGUID, "position", &fieldData, 0, 0);
  v18._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&v18);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
}


// CAmbientGeneric::InputToggleSound  (line 762, @0x000000000213cca0, libserver.so)
void __fastcall CAmbientGeneric::InputToggleSound(CAmbientGeneric *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 207))(this, inputdata);
}


// CAmbientGeneric::ToggleSound  (line 777, @0x000000000214d2d0, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator|=<int>
// calls: CAmbientGeneric::InitModulationParms, CBaseEntity::SetNextThink
void __fastcall CAmbientGeneric::ToggleSound(CAmbientGeneric *const this)
{
  __int64 v1; // rsi
  double v2; // xmm1_8
  int cspinup; // ecx
  int cspincount; // eax
  int pitchstart; // edi
  __int64 fadeoutsav; // rdx
  int v8; // edi
  CGlobalVars *v9; // r12
  double v10; // xmm0_8
  void (__fastcall *m_pfnWarningFunc)(__int64, __int64, __int64); // rax
  unsigned int m_Value; // eax
  unsigned int v13; // r12d
  int spindownsav; // eax

  if ( this->m_fActive )
  {
    cspinup = this->m_dpv.cspinup;
    if ( cspinup != 0 )
    {
      cspincount = this->m_dpv.cspincount;
      if ( cspinup < cspincount )
        return;
      v1 = 255;
      this->m_dpv.cspincount = cspincount + 1;
      pitchstart = this->m_dpv.pitchstart;
      this->m_dpv.spindown = 0;
      this->m_dpv.spinup = this->m_dpv.spinupsav;
      fadeoutsav = ((255 - pitchstart) >> 31);
      LODWORD(fadeoutsav) = (255 - pitchstart) % cspinup;
      v8 = (cspincount + 1) * ((255 - pitchstart) / cspinup) + pitchstart;
      if ( v8 > 255 )
        v8 = 255;
      v9 = gpGlobals;
      this->m_dpv.pitchrun = v8;
      if ( v9 == 0 )
        goto LABEL_7;
LABEL_11:
      if ( !v9->m_bEnableAssertions && !v9->m_bInSimulation )
      {
        m_pfnWarningFunc = v9->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(1, v1, fadeoutsav);
      }
      HIDWORD(v10) = 0;
      *&v10 = v9->m_flCurrentTime + 0.1;
      goto LABEL_16;
    }
    m_Value = this->m_spawnflags.m_Value;
    this->m_fActive = 0;
    v13 = m_Value | 0x10;
    if ( m_Value != (m_Value | 0x10) )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v13;
    }
    spindownsav = this->m_dpv.spindownsav;
    fadeoutsav = this->m_dpv.fadeoutsav;
    if ( spindownsav == 0 && fadeoutsav == 0 )
    {
      (*(this->_vptr_IHandleEntity + 208))(this, 4);
      return;
    }
    this->m_dpv.spindown = spindownsav;
    this->m_dpv.spinup = 0;
    this->m_dpv.fadeout = fadeoutsav;
    this->m_dpv.fadein = 0;
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
      goto LABEL_11;
  }
  else
  {
    if ( this->m_fLooping )
      this->m_fActive = 1;
    else
      (*(this->_vptr_IHandleEntity + 208))(this, 4);
    CAmbientGeneric::InitModulationParms(this);
    (*(this->_vptr_IHandleEntity + 208))(this, 0);
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
      goto LABEL_11;
  }
LABEL_7:
  *&v10 = 1036831949;
LABEL_16:
  CBaseEntity::SetNextThink(this, v10, v2, 0);
}


// CAmbientGeneric::Spawn  (line 861, @0x000000000215ad20, libserver.so)  // inlines: AssignTo, Base, ComputeSoundlevel, Element, FindKeyHash, Get<int>, GetClassNameAsCStr, GetClassname, GetDebugName, GetValue, GetValue<int>, Min<long long unsigned int>, Min<unsigned int>, Set, String, ToCStr, V_strlen, atoi, operator=, operator[]
// calls: CPointEntity::Spawn, CEntityKeyValues::HasValue, CAmbientGeneric::ComputeMaxAudibleDistance, strlen, CBaseEntity::SetMoveType, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CAmbientGeneric::InitModulationParms, CBaseEntity::GetAbsOrigin, CEntityIdentity::GetDebugName, Warning, UTIL_Remove (15 total)
// strings: "Empty %s (%s) at %.2f, %.2f, %.2f\n", "No conversion from %s to int now\n"
// globals: CAmbientGeneric::RampThink(void), CEntityKeyValues::sm_EmptyVariant, jpt_215B20E, jpt_215B236, jpt_215B566, jpt_215B596
void __fastcall CAmbientGeneric::Spawn(CAmbientGeneric *const this, const CEntityKeyValues *pKeyValues)
{
  int pitchrun; // eax
  int pitchstart; // eax
  int spinup; // eax
  int spindown; // eax
  int volstart; // eax
  int v9; // edx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v14; // rdx
  CEntityVariant *p_m_value; // rcx
  int v16; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v17; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v19; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // rdx
  CEntityVariant *v21; // rcx
  int lforate; // edx
  int v23; // eax
  int lfomodpitch; // eax
  int lfomodvol; // eax
  int cspinup; // eax
  soundlevel_t v27; // edx
  float m_radius; // xmm0_4
  const char *m_pAsString; // rdi
  double v30; // xmm1_8
  unsigned int m_Value; // eax
  const char *DebugName; // rax
  CEntityIdentity *m_pEntity; // rcx
  const char *v34; // rsi
  int16 v35; // ax
  int16 m_type; // ax
  int v37; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v38; // cx
  __int64 v39; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v40; // rdx
  int v41; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v42; // cx
  __int64 v43; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v44; // rdx
  int v45; // edx
  int m_char; // edx
  uint64 m_uint64; // rax
  uint64 v48; // rax
  const char *v49; // rax
  const char *v50; // rax
  CEntityVariant *v51; // rcx
  int16 v52; // ax
  CEntityVariant *v53; // rcx
  int16 v54; // ax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v55; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v56; // rdx
  int v57; // eax
  int v58; // eax
  uint64 v59; // rdx
  uint64 v60; // rdx
  const char *v61; // rax
  const char *v62; // rax
  double z; // [rsp+8h] [rbp-28h]
  double y; // [rsp+10h] [rbp-20h]
  double x; // [rsp+18h] [rbp-18h]

  CPointEntity::Spawn(this, pKeyValues);
  pitchrun = this->m_dpv.pitchrun;
  if ( pitchrun <= 255 )
  {
    if ( pitchrun < 0 )
    {
      this->m_dpv.pitchrun = 0;
      pitchstart = this->m_dpv.pitchstart;
      if ( pitchstart > 255 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  else
  {
    this->m_dpv.pitchrun = 255;
  }
  pitchstart = this->m_dpv.pitchstart;
  if ( pitchstart > 255 )
  {
LABEL_4:
    this->m_dpv.pitchstart = 255;
    goto LABEL_5;
  }
LABEL_10:
  if ( pitchstart >= 0 )
  {
LABEL_5:
    spinup = this->m_dpv.spinup;
    if ( spinup <= 100 )
      goto LABEL_6;
LABEL_12:
    spinup = 100;
LABEL_13:
    spinup = (101 - spinup) << 6;
    this->m_dpv.spinup = spinup;
    goto LABEL_14;
  }
  this->m_dpv.pitchstart = 0;
  spinup = this->m_dpv.spinup;
  if ( spinup > 100 )
    goto LABEL_12;
LABEL_6:
  if ( spinup < 0 )
  {
    this->m_dpv.spinup = 0;
    spinup = 0;
    goto LABEL_14;
  }
  if ( spinup != 0 )
    goto LABEL_13;
LABEL_14:
  this->m_dpv.spinupsav = spinup;
  spindown = this->m_dpv.spindown;
  if ( spindown > 100 )
  {
    spindown = 100;
LABEL_18:
    spindown = (101 - spindown) << 6;
    this->m_dpv.spindown = spindown;
    goto LABEL_19;
  }
  if ( spindown >= 0 )
  {
    if ( spindown == 0 )
      goto LABEL_19;
    goto LABEL_18;
  }
  this->m_dpv.spindown = 0;
  spindown = 0;
LABEL_19:
  this->m_dpv.spindownsav = spindown;
  volstart = this->m_dpv.volstart;
  v9 = 100;
  if ( volstart <= 10 )
  {
    LOBYTE(v9) = 0;
    if ( volstart >= 0 )
      v9 = 10 * volstart;
  }
  this->m_dpv.volstart = v9;
  if ( CEntityKeyValues::HasValue(pKeyValues, -731065934) )
  {
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount > 0 )
    {
      m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
      for ( i = 0; m_nCount > i; ++i )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = pKeyValues->m_keyHashes.m_pElements;
          if ( m_pElements[i] == -731065934 )
          {
LABEL_31:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v14 = pKeyValues->m_keyValues.m_pElements;
            else
              v14 = 0;
            p_m_value = &v14[i].m_value;
            goto LABEL_78;
          }
        }
        else if ( *(4 * i) == -731065934 )
        {
          goto LABEL_31;
        }
      }
    }
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
LABEL_78:
    m_type = p_m_value->m_type;
    switch ( m_type )
    {
      case 0:
        m_char = 0;
        goto LABEL_107;
      case 1:
        LODWORD(m_uint64) = p_m_value->m_float;
        goto LABEL_113;
      case 5:
        LODWORD(m_uint64) = p_m_value->m_int;
        goto LABEL_113;
      case 6:
        m_char = p_m_value->m_char;
        goto LABEL_107;
      case 26:
        LODWORD(m_uint64) = 0x7FFFFFFF;
        if ( p_m_value->m_int64 <= 0x7FFFFFFF )
        {
          LODWORD(m_uint64) = 0x80000000;
          if ( p_m_value->m_uint64 >= 0xFFFFFFFF80000000LL )
            m_uint64 = p_m_value->m_uint64;
        }
        goto LABEL_113;
      case 30:
        LODWORD(m_uint64) = strtol(p_m_value->m_pszString, 0, 10);
        goto LABEL_113;
      case 33:
        LODWORD(m_uint64) = 0x7FFFFFFF;
        if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
          LODWORD(m_uint64) = p_m_value->m_uint64;
        goto LABEL_113;
      case 34:
        LODWORD(m_uint64) = p_m_value->m_float64;
        goto LABEL_113;
      case 37:
        LODWORD(m_uint64) = 0x7FFFFFFF;
        if ( p_m_value->m_int <= 0x7FFFFFFEu )
          LODWORD(m_uint64) = p_m_value->m_int;
LABEL_113:
        this->m_dpv.fadein = m_uint64;
        m_char = 100;
        if ( m_uint64 > 100 )
          goto LABEL_109;
        if ( (m_uint64 & 0x80000000) == 0LL )
        {
          m_char = m_uint64;
LABEL_108:
          if ( m_char != 0 )
          {
LABEL_109:
            m_char = (101 - m_char) << 6;
            this->m_dpv.fadein = m_char;
          }
        }
        else
        {
          this->m_dpv.fadein = 0;
          LOBYTE(m_char) = 0;
        }
        this->m_dpv.fadeinsav = m_char;
        break;
      default:
        v49 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to int now\n", v49);
        m_char = 0;
LABEL_107:
        this->m_dpv.fadein = m_char;
        goto LABEL_108;
    }
  }
  else if ( CEntityKeyValues::HasValue(pKeyValues, -2005559618) )
  {
    v37 = pKeyValues->m_keyHashes.m_nCount;
    if ( v37 <= 0 )
    {
LABEL_150:
      v53 = &CEntityKeyValues::sm_EmptyVariant;
    }
    else
    {
      v38 = pKeyValues->m_keyHashes.m_nAllocated;
      v39 = 0;
      while ( 1 )
      {
        if ( v38 != 0 )
        {
          v40 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v38 > 9 )
            v40 = pKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v40 = 0;
        }
        if ( v40[v39] == -2005559618 )
          break;
        if ( v37 <= ++v39 )
          goto LABEL_150;
      }
      if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
        v55 = pKeyValues->m_keyValues.m_pElements;
      else
        v55 = 0;
      v53 = &v55[v39].m_value;
    }
    v54 = v53->m_type;
    switch ( v54 )
    {
      case 0:
        v57 = 0;
        goto LABEL_159;
      case 1:
        LODWORD(v59) = v53->m_float;
        goto LABEL_170;
      case 5:
        LODWORD(v59) = v53->m_int;
        goto LABEL_170;
      case 6:
        v57 = v53->m_char;
        goto LABEL_159;
      case 26:
        LODWORD(v59) = 0x7FFFFFFF;
        if ( v53->m_int64 <= 0x7FFFFFFF )
        {
          LODWORD(v59) = 0x80000000;
          if ( v53->m_uint64 >= 0xFFFFFFFF80000000LL )
            v59 = v53->m_uint64;
        }
        goto LABEL_170;
      case 30:
        LODWORD(v59) = strtol(v53->m_pszString, 0, 10);
        goto LABEL_170;
      case 33:
        LODWORD(v59) = 0x7FFFFFFF;
        if ( v53->m_uint64 <= 0x7FFFFFFE )
          LODWORD(v59) = v53->m_uint64;
        goto LABEL_170;
      case 34:
        LODWORD(v59) = v53->m_float64;
        goto LABEL_170;
      case 37:
        LODWORD(v59) = 0x7FFFFFFF;
        if ( v53->m_int <= 0x7FFFFFFEu )
          LODWORD(v59) = v53->m_int;
LABEL_170:
        this->m_dpv.fadein = v59;
        v57 = 100;
        if ( v59 > 100 )
          goto LABEL_161;
        if ( (v59 & 0x80000000) == 0LL )
        {
          v57 = v59;
LABEL_160:
          if ( v57 != 0 )
          {
LABEL_161:
            v57 = 25600 / (5 * v57);
            this->m_dpv.fadein = v57;
          }
        }
        else
        {
          this->m_dpv.fadein = 0;
          LOBYTE(v57) = 0;
        }
        this->m_dpv.fadeinsav = v57;
        break;
      default:
        v61 = VariantFieldTypeName(v54);
        Warning("No conversion from %s to int now\n", v61);
        v57 = 0;
LABEL_159:
        this->m_dpv.fadein = v57;
        goto LABEL_160;
    }
  }
  if ( CEntityKeyValues::HasValue(pKeyValues, 660637179) )
  {
    v16 = pKeyValues->m_keyHashes.m_nCount;
    if ( v16 > 0 )
    {
      v17 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( j = 0; v16 > j; ++j )
      {
        if ( v17 != 0 )
        {
          v19 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v17 > 9 )
            v19 = pKeyValues->m_keyHashes.m_pElements;
          if ( v19[j] == 660637179 )
          {
LABEL_44:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v20 = pKeyValues->m_keyValues.m_pElements;
            else
              v20 = 0;
            v21 = &v20[j].m_value;
            goto LABEL_76;
          }
        }
        else if ( *(4 * j) == 660637179 )
        {
          goto LABEL_44;
        }
      }
    }
    v21 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_76:
    v35 = v21->m_type;
    switch ( v35 )
    {
      case 0:
        v45 = 0;
        goto LABEL_102;
      case 1:
        LODWORD(v48) = v21->m_float;
        goto LABEL_126;
      case 5:
        LODWORD(v48) = v21->m_int;
        goto LABEL_126;
      case 6:
        v45 = v21->m_char;
        goto LABEL_102;
      case 26:
        LODWORD(v48) = 0x7FFFFFFF;
        if ( v21->m_int64 <= 0x7FFFFFFF )
        {
          LODWORD(v48) = 0x80000000;
          if ( v21->m_uint64 >= 0xFFFFFFFF80000000LL )
            v48 = v21->m_uint64;
        }
        goto LABEL_126;
      case 30:
        LODWORD(v48) = strtol(v21->m_pszString, 0, 10);
        goto LABEL_126;
      case 33:
        LODWORD(v48) = 0x7FFFFFFF;
        if ( v21->m_uint64 <= 0x7FFFFFFE )
          LODWORD(v48) = v21->m_uint64;
        goto LABEL_126;
      case 34:
        LODWORD(v48) = v21->m_float64;
        goto LABEL_126;
      case 37:
        LODWORD(v48) = 0x7FFFFFFF;
        if ( v21->m_int <= 0x7FFFFFFEu )
          LODWORD(v48) = v21->m_int;
LABEL_126:
        this->m_dpv.fadeout = v48;
        v45 = 100;
        if ( v48 > 100 )
          goto LABEL_104;
        if ( (v48 & 0x80000000) == 0LL )
        {
          v45 = v48;
LABEL_103:
          if ( v45 != 0 )
          {
LABEL_104:
            v45 = (101 - v45) << 6;
            this->m_dpv.fadeout = v45;
          }
        }
        else
        {
          this->m_dpv.fadeout = 0;
          LOBYTE(v45) = 0;
        }
        this->m_dpv.fadeoutsav = v45;
        break;
      default:
        v50 = VariantFieldTypeName(v35);
        Warning("No conversion from %s to int now\n", v50);
        v45 = 0;
LABEL_102:
        this->m_dpv.fadeout = v45;
        goto LABEL_103;
    }
  }
  else if ( CEntityKeyValues::HasValue(pKeyValues, 275428196) )
  {
    v41 = pKeyValues->m_keyHashes.m_nCount;
    if ( v41 <= 0 )
    {
LABEL_148:
      v51 = &CEntityKeyValues::sm_EmptyVariant;
    }
    else
    {
      v42 = pKeyValues->m_keyHashes.m_nAllocated;
      v43 = 0;
      while ( 1 )
      {
        if ( v42 != 0 )
        {
          v44 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v42 > 9 )
            v44 = pKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v44 = 0;
        }
        if ( v44[v43] == 275428196 )
          break;
        if ( v41 <= ++v43 )
          goto LABEL_148;
      }
      if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
        v56 = pKeyValues->m_keyValues.m_pElements;
      else
        v56 = 0;
      v51 = &v56[v43].m_value;
    }
    v52 = v51->m_type;
    switch ( v52 )
    {
      case 0:
        v58 = 0;
        goto LABEL_164;
      case 1:
        LODWORD(v60) = v51->m_float;
        goto LABEL_179;
      case 5:
        LODWORD(v60) = v51->m_int;
        goto LABEL_179;
      case 6:
        v58 = v51->m_char;
        goto LABEL_164;
      case 26:
        LODWORD(v60) = 0x7FFFFFFF;
        if ( v51->m_int64 <= 0x7FFFFFFF )
        {
          LODWORD(v60) = 0x80000000;
          if ( v51->m_uint64 >= 0xFFFFFFFF80000000LL )
            v60 = v51->m_uint64;
        }
        goto LABEL_179;
      case 30:
        LODWORD(v60) = strtol(v51->m_pszString, 0, 10);
        goto LABEL_179;
      case 33:
        LODWORD(v60) = 0x7FFFFFFF;
        if ( v51->m_uint64 <= 0x7FFFFFFE )
          LODWORD(v60) = v51->m_uint64;
        goto LABEL_179;
      case 34:
        LODWORD(v60) = v51->m_float64;
        goto LABEL_179;
      case 37:
        LODWORD(v60) = 0x7FFFFFFF;
        if ( v51->m_int <= 0x7FFFFFFEu )
          LODWORD(v60) = v51->m_int;
LABEL_179:
        this->m_dpv.fadeout = v60;
        v58 = 100;
        if ( v60 > 100 )
          goto LABEL_166;
        if ( (v60 & 0x80000000) == 0LL )
        {
          v58 = v60;
LABEL_165:
          if ( v58 != 0 )
          {
LABEL_166:
            v58 = 25600 / (5 * v58);
            this->m_dpv.fadeout = v58;
          }
        }
        else
        {
          this->m_dpv.fadeout = 0;
          LOBYTE(v58) = 0;
        }
        this->m_dpv.fadeoutsav = v58;
        break;
      default:
        v62 = VariantFieldTypeName(v52);
        Warning("No conversion from %s to int now\n", v62);
        v58 = 0;
LABEL_164:
        this->m_dpv.fadeout = v58;
        goto LABEL_165;
    }
  }
  if ( this->m_dpv.lfotype > 4 )
    this->m_dpv.lfotype = 2;
  lforate = this->m_dpv.lforate;
  v23 = 256000;
  if ( lforate <= 1000 )
  {
    v23 = 0;
    if ( lforate >= 0 )
      v23 = lforate << 8;
  }
  this->m_dpv.lforate = v23;
  lfomodpitch = this->m_dpv.lfomodpitch;
  if ( lfomodpitch <= 100 )
  {
    if ( lfomodpitch < 0 )
    {
      this->m_dpv.lfomodpitch = 0;
      lfomodvol = this->m_dpv.lfomodvol;
      if ( lfomodvol > 100 )
        goto LABEL_56;
      goto LABEL_83;
    }
  }
  else
  {
    this->m_dpv.lfomodpitch = 100;
  }
  lfomodvol = this->m_dpv.lfomodvol;
  if ( lfomodvol > 100 )
  {
LABEL_56:
    this->m_dpv.lfomodvol = 100;
    goto LABEL_57;
  }
LABEL_83:
  if ( lfomodvol < 0 )
    this->m_dpv.lfomodvol = 0;
LABEL_57:
  cspinup = this->m_dpv.cspinup;
  if ( cspinup <= 100 )
  {
    if ( cspinup < 0 )
      this->m_dpv.cspinup = 0;
  }
  else
  {
    this->m_dpv.cspinup = 100;
  }
  v27 = soundlevel_t::SNDLVL_NONE;
  m_radius = this->m_radius;
  if ( m_radius > 0.0 && (this->m_spawnflags.m_Value & 1) == 0 )
    v27 = ((log10(m_radius / 36.0) * 20.0) + 40.0);
  this->m_iSoundLevel = v27;
  CAmbientGeneric::ComputeMaxAudibleDistance(this);
  m_pAsString = this->m_iszSound.u.m_pAsString;
  if ( m_pAsString != 0 && strlen(m_pAsString) > 0 )
  {
    CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    CBaseEntity::ThinkSet(this, CAmbientGeneric::RampThink, 0.0, 0, 0);
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v30, 0);
    m_Value = this->m_spawnflags.m_Value;
    this->m_fActive = 0;
    this->m_hSoundSource.m_Index = -1;
    this->m_nSoundSourceEntIndex.m_Data = -1;
    this->m_fLooping = (m_Value & 0x20) == 0;
    if ( (m_Value & 0x10) == 0 && this->m_fLooping )
      this->m_fActive = 1;
    CAmbientGeneric::InitModulationParms(this);
  }
  else
  {
    z = CBaseEntity::GetAbsOrigin(this)->z;
    y = CBaseEntity::GetAbsOrigin(this)->y;
    x = CBaseEntity::GetAbsOrigin(this)->x;
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    m_pEntity = this->m_pEntity;
    v34 = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      v34 = m_pEntity->m_designerName.u.m_pAsString;
    Warning("Empty %s (%s) at %.2f, %.2f, %.2f\n", v34, DebugName, x, y, z);
    UTIL_Remove(this);
  }
}


