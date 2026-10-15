
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvMicrophone::GetDataDescMap  (line 33, @0x00000000021ee640, libserver.so)
// globals: CEnvMicrophone::m_DataMap
datamap_t *__fastcall CEnvMicrophone::GetDataDescMap(CEnvMicrophone *const this)
{
  return &CEnvMicrophone::m_DataMap;
}


// CEnvMicrophone::AddDatadescMetadataKeys  (line 33, @0x00000000021f97a0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvMicrophone::GetEntityClass(void)
void __fastcall CEnvMicrophone::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvMicrophone::GetEntityClass);
}


// CEnvMicrophone::GetBaseMap  (line 33, @0x00000000021f97c0, libserver.so)
datamap_t *__cdecl CEnvMicrophone::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CEnvMicrophone>  (line 33, @0x00000000021f97d0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CEnvMicrophone"
// globals: `guard variable for'DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::nameHolder, `guard variable for'DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::dataDesc, CEnvMicrophone::GetEntityClass(void), CEnvMicrophone::m_DataMap, DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvMicrophone>(CEnvMicrophone *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::nameHolder.m_pszBase = "CEnvMicrophone";
    DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::nameHolder,
      &_dso_handle);
  }
  CEnvMicrophone::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::dataDesc) != 0 )
  {
    DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::dataDesc[13].fieldSize = 256;
    DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::dataDesc[18].pSaveRestoreOps = eventFuncs;
    DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::dataDesc[19].pSaveRestoreOps = eventFuncs;
    DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::dataDesc[20].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::dataDesc);
  }
  CEnvMicrophone::m_DataMap.dataNumFields = 20;
  CEnvMicrophone::m_DataMap.dataDesc = &DataMapInit<CEnvMicrophone>(CEnvMicrophone *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvMicrophone::m_DataMap, CEnvMicrophone::GetEntityClass);
  return &CEnvMicrophone::m_DataMap;
}


// CEnvMicrophone::~CEnvMicrophone  (line 64, @0x0000000002202c60, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, ~CPointEntity
// calls: CUtlVectorBase<CHandle<CEnvMicrophone>, CUtlMemory<CHandle<CEnvMicrophone>, int> >::FindAndRemove, CBaseEntity::~CBaseEntity
// callers: CEnvMicrophone::~CEnvMicrophone
// globals: s_Microphones
void __fastcall CEnvMicrophone::~CEnvMicrophone(CEnvMicrophone *const this)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  CHandle<CEnvMicrophone> src; // [rsp+0h] [rbp-20h] BYREF

  this->_vptr_IHandleEntity = &off_402FA90;
  m_pEntity = this->m_pEntity;
  src.m_Index = -1;
  if ( m_pEntity != 0 )
  {
    v3 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
  }
  CUtlVectorBase<CHandle<CEnvMicrophone>,CUtlMemory<CHandle<CEnvMicrophone>,int>>::FindAndRemove(&s_Microphones, &src);
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvMicrophone::~CEnvMicrophone  (line 64, @0x0000000002202d00, libserver.so)
// calls: CEnvMicrophone::~CEnvMicrophone, CBaseEntity::operator delete
void __fastcall CEnvMicrophone::~CEnvMicrophone(CEnvMicrophone *const this)
{
  CEnvMicrophone::~CEnvMicrophone(this);
  CBaseEntity::operator delete(this);
}


// CEnvMicrophone::Spawn  (line 72, @0x00000000021f3f30, libserver.so)  // inlines: Clamp<float>, curtime
// calls: CPointEntity::Spawn, CBaseEntity::SetNextThink
// strings: "AllocInternal"
// globals: CEnvMicrophone::Spawn(CEntityKeyValues const*)::nFlags
void __fastcall CEnvMicrophone::Spawn(CEnvMicrophone *const this, const CEntityKeyValues *pKeyValues)
{
  __int64 v3; // rsi
  unsigned int m_Value; // ecx
  const int *v5; // rax
  float m_flSensitivity; // xmm0_4
  __int64 v7; // xmm1_8
  __m128 v8; // xmm0
  __m128 v9; // xmm2
  float v10; // xmm0_4
  bool v11; // zf
  CGlobalVars *v12; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v14; // xmm0_8

  CPointEntity::Spawn(this, pKeyValues);
  m_Value = this->m_spawnflags.m_Value;
  v5 = CEnvMicrophone::Spawn(CEntityKeyValues const*)::nFlags[0];
  do
  {
    if ( (m_Value & *v5) != 0 )
    {
      v3 = *(v5 + 1);
      this->m_nSoundMask |= v3;
    }
    v5 += 2;
  }
  while ( v5 != "AllocInternal" );
  m_flSensitivity = this->m_flSensitivity;
  v7 = 0;
  if ( m_flSensitivity == 0.0 )
  {
    this->m_flSensitivity = 1.0;
  }
  else if ( m_flSensitivity > 10.0 )
  {
    v8.m128_i32[0] = LODWORD(this->m_flSmoothFactor);
    this->m_flSensitivity = 10.0;
    if ( v8.m128_f32[0] >= 0.0 )
      goto LABEL_8;
    goto LABEL_13;
  }
  v8.m128_i32[0] = LODWORD(this->m_flSmoothFactor);
  if ( v8.m128_f32[0] >= 0.0 )
  {
LABEL_8:
    v7 = 1063675494;
    v9 = _mm_cmpge_ss(0x3F666666u, v8);
    LODWORD(v10) = _mm_andnot_ps(v9, 0x3F666666u).m128_u32[0] | v8.m128_i32[0] & v9.m128_i32[0];
    goto LABEL_9;
  }
LABEL_13:
  v10 = 0.0;
LABEL_9:
  v11 = !this->m_bDisabled;
  this->m_flSmoothFactor = v10;
  if ( v11 )
  {
    v12 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, v3, "AllocInternal");
      }
      HIDWORD(v14) = 0;
      *&v14 = v12->m_flCurrentTime + 0.1;
    }
    else
    {
      *&v14 = 1036831949;
    }
    CBaseEntity::SetNextThink(this, v14, *&v7, 0);
  }
}


// CEnvMicrophone::Activate  (line 120, @0x0000000002208690, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, LookupEntity, Set, operator CEntityInstance*, operator!=, operator=, operator==<CBaseEntity>
// calls: CBaseEntity::Activate, CGameEntitySystem::FindEntityByName, CEnvMicrophone::ActivateSpeaker, __dynamic_cast
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CBaseFilter
void __fastcall CEnvMicrophone::Activate(CEnvMicrophone *const this, ActivateType_t activateType)
{
  CBaseEntity *v3; // rax
  CEntityIdentity *v4; // rdx
  int v5; // eax
  __int16 v6; // cx
  CConcreteEntityList *v7; // rsi
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v12; // eax
  __int16 v13; // cx
  CBaseEntity *EntityByName; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  __int16 v18; // cx
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  CBaseEntity::Activate(this, activateType);
  if ( this->m_iszListenFilter.u.m_Id != 0 )
  {
    iszName.u.m_Id = this->m_iszListenFilter.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
    if ( EntityByName != 0
      && (v15 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseFilter, 0)) != 0
      && (v16 = v15[1]) != 0 )
    {
      v17 = (*(v16 + 16) >> 15) - (*(v16 + 48) & 1);
      v18 = 0x7FFF;
      if ( *(v16 + 16) != -1 )
        v18 = *(v16 + 16) & 0x7FFF;
      LOWORD(this->m_hListenFilter.m_Index) = v18 | this->m_hListenFilter.m_Index & 0x8000;
      this->m_hListenFilter.m_Index = (v17 << 15) | this->m_hListenFilter.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hListenFilter.m_Index = -1;
    }
  }
  if ( this->m_target.u.m_Id == 0 )
    goto LABEL_11;
  v3 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, this->m_target.u.m_pAsString, this, 0, 0, 0);
  if ( v3 == 0 || (v4 = v3->m_pEntity) == 0 )
  {
    this->m_hMeasureTarget.m_Index = -1;
LABEL_11:
    if ( this != 0 && (m_pEntity = this->m_pEntity) != 0 )
    {
      v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v13 = 0x7FFF;
      else
        v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hMeasureTarget.m_Index) = v13 | this->m_hMeasureTarget.m_Index & 0x8000;
      this->m_hMeasureTarget.m_Index = (v12 << 15) | this->m_hMeasureTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hMeasureTarget.m_Index = -1;
    }
    goto LABEL_16;
  }
  v5 = (v4->m_EHandle.m_Index >> 15) - (v4->m_flags & 1);
  v6 = 0x7FFF;
  if ( v4->m_EHandle.m_Index != -1 )
    v6 = v4->m_EHandle.m_Index & 0x7FFF;
  v7 = CEntityHandle::gm_pEntityList;
  LOWORD(this->m_hMeasureTarget.m_Index) = v6 | this->m_hMeasureTarget.m_Index & 0x8000;
  v8 = (v5 << 15) | this->m_hMeasureTarget.m_Index & 0x7FFF;
  this->m_hMeasureTarget.m_Index = v8;
  if ( v8 + 2 <= 1 )
    goto LABEL_11;
  v9 = v7->m_pIdentityChunks[(LOWORD(this->m_hMeasureTarget.m_Index) >> 9) & 0x3F];
  if ( v9 == 0 )
    goto LABEL_11;
  v10 = &v9[this->m_hMeasureTarget.m_Index & 0x1FF];
  if ( v10 == 0 || v8 != v10->m_EHandle.m_Index || v10->m_pInstance == 0 )
    goto LABEL_11;
LABEL_16:
  CEnvMicrophone::ActivateSpeaker(this);
}


// CEnvMicrophone::OnRestore  (line 156, @0x0000000002208920, libserver.so)
// calls: CBaseEntity::OnRestore, CEnvMicrophone::ActivateSpeaker
void __fastcall CEnvMicrophone::OnRestore(CEnvMicrophone *const this)
{
  CBaseEntity::OnRestore(this);
  CEnvMicrophone::ActivateSpeaker(this);
}


// CEnvMicrophone::ActivateSpeaker  (line 166, @0x00000000022084f0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CEnvMicrophone> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator[]
// calls: CUtlVectorBase<CHandle<CEnvMicrophone>, CUtlMemory<CHandle<CEnvMicrophone>, int> >::Find, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CUtlMemory<CHandle<CEnvMicrophone>, int>::Grow
// callers: CEnvMicrophone::Activate, CEnvMicrophone::OnRestore, CEnvMicrophone::InputEnable, CEnvMicrophone::SetSpeakerName, CEnvMicrophone::InputSetSpeakerName, CEnvMicrophone::SetSpeaker
// strings: "speaker DSP needs an audio mix input.  The convar is no longer used in source2\n"
// globals: CEnvMicrophone::ActivateSpeaker(void)::__executeCount, s_Microphones
void __fastcall CEnvMicrophone::ActivateSpeaker(CEnvMicrophone *const this)
{
  CEntityIdentity *m_pEntity; // rbx
  __int16 v3; // cx
  __int16 v4; // cx
  int v5; // eax
  __int64 m_Size; // rbx
  int v7; // eax
  CHandle<CEnvMicrophone> *v8; // rax
  CHandle<CEnvMicrophone> src; // [rsp+0h] [rbp-20h] BYREF

  if ( !this->m_bDisabled && CEnvMicrophone::ActivateSpeaker(void)::__executeCount <= 0 )
  {
    ++CEnvMicrophone::ActivateSpeaker(void)::__executeCount;
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
      LoggingSystem_Log(
        LOG_SERVER,
        2,
        "speaker DSP needs an audio mix input.  The convar is no longer used in source2\n");
  }
  if ( this->m_iszSpeakerName.u.m_Id != 0 )
  {
    m_pEntity = this->m_pEntity;
    src.m_Index = -1;
    if ( m_pEntity != 0 )
    {
      v3 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
    }
    if ( CUtlVectorBase<CHandle<CEnvMicrophone>,CUtlMemory<CHandle<CEnvMicrophone>,int>>::Find(&s_Microphones, &src) == -1 )
    {
      src.m_Index = -1;
      if ( m_pEntity != 0 )
      {
        v4 = 0x7FFF;
        v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(src.m_Index) = v4 | src.m_Index & 0x8000;
        src.m_Index = (v5 << 15) | src.m_Index & 0x7FFF;
      }
      m_Size = s_Microphones.m_Size;
      v7 = s_Microphones.m_Size;
      if ( s_Microphones.m_Size == s_Microphones.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CEnvMicrophone>,int>::Grow(&s_Microphones.m_Memory, 1);
        v7 = s_Microphones.m_Size;
      }
      s_Microphones.m_Size = v7 + 1;
      v8 = &s_Microphones.m_Memory.m_pMemory[m_Size];
      if ( v8 != 0 )
        v8->m_Index = src.m_Index;
    }
  }
}


// CEnvMicrophone::InputEnable  (line 204, @0x0000000002208940, libserver.so)  // inlines: curtime
// calls: CBaseEntity::SetNextThink, CEnvMicrophone::ActivateSpeaker
void __fastcall CEnvMicrophone::InputEnable(CEnvMicrophone *const this, inputdata_t *const inputdata)
{
  double v2; // xmm1_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v6; // xmm0_8

  if ( this->m_bDisabled )
  {
    this->m_bDisabled = 0;
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, inputdata);
      }
      HIDWORD(v6) = 0;
      *&v6 = v4->m_flCurrentTime + 0.1;
    }
    else
    {
      *&v6 = 1036831949;
    }
    CBaseEntity::SetNextThink(this, v6, v2, 0);
    CEnvMicrophone::ActivateSpeaker(this);
  }
}


// CEnvMicrophone::InputDisable  (line 219, @0x0000000002202d20, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntityIdentity, GetEntryIndex, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, entindex, operator bool
// calls: CBaseEntity::SetNextThink, CEntityInstance::GetEntityIndex, CBaseEntity::StopSound, CUtlVectorBase<CHandle<CEnvMicrophone>, CUtlMemory<CHandle<CEnvMicrophone>, int> >::FindAndRemove
// globals: CEntityHandle::gm_pEntityList, s_Microphones
void __fastcall CEnvMicrophone::InputDisable(CEnvMicrophone *const this, inputdata_t *const inputdata)
{
  double v2; // xmm1_8
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityIndex v7; // eax
  CEntityIdentity *m_pEntity; // rsi
  __int16 v9; // cx
  CHandle<CEnvMicrophone> src; // [rsp+0h] [rbp-20h] BYREF

  this->m_bDisabled = 1;
  m_Index = this->m_hSpeaker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSpeaker.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hSpeaker.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        v7.m_Data = CEntityInstance::GetEntityIndex(v6->m_pInstance).m_Data;
        CBaseEntity::StopSound(v7, 6, this->m_szLastSound, 0);
        m_pEntity = this->m_pEntity;
        this->m_szLastSound[0] = 0;
        src.m_Index = -1;
        if ( m_pEntity != 0 )
        {
          v9 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
        }
        CUtlVectorBase<CHandle<CEnvMicrophone>,CUtlMemory<CHandle<CEnvMicrophone>,int>>::FindAndRemove(
          &s_Microphones,
          &src);
      }
    }
  }
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v2, 0);
}


// CEnvMicrophone::InputSetSpeakerName  (line 237, @0x0000000002208a00, libserver.so)  // inlines: AssignTo, Set, SetSpeakerName, StringID, TempString, ToString, operator=
// calls: MakeEntitySystemString, CEnvMicrophone::ActivateSpeaker, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_2208A31, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CEnvMicrophone::InputSetSpeakerName(CEnvMicrophone *const this, inputdata_t *const inputdata)
{
  int16 m_type; // di
  char *m_pszString; // rsi
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8
  UtlSymLargeId_t v8; // [rsp+10h] [rbp-20h]

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_8;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_19;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_11;
      case 6:
        v6 = "true";
        if ( inputdata->value.m_char == 0 )
          v6 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v6);
        goto LABEL_15;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_11;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_15;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_15:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_19:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_11:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v5 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v5);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  this->m_hSpeaker.m_Index = -1;
  this->m_iszSpeakerName.u.m_Id = v8;
  CEnvMicrophone::ActivateSpeaker(this);
}


// CEnvMicrophone::CanHearSound  (line 249, @0x00000000021f9910, libserver.so)  // inlines: Clamp<float>, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length, LookupEntity, PassesFilter, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator-, operator->
// calls: CBaseEntity::GetAbsOrigin, CSound::GetSoundOrigin
// callers: CEnvMicrophone::Think
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CEnvMicrophone::CanHearSound(CEnvMicrophone *const this, CSound *pSound, float *const flVolume)
{
  bool m_bDisabled; // r12
  uint32 m_Index; // edx
  CEntityIdentity *v8; // rcx
  CConcreteEntityList *v9; // r8
  CEntityIdentity *v10; // rcx
  uint32 v11; // eax
  const CBaseEntity *v12; // rdi
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  const Vector *AbsOrigin; // r12
  const Vector *SoundOrigin; // rax
  float v17; // xmm1_4
  float v18; // xmm0_4
  float m_flMaxRange; // xmm2_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  CEntityInstance *m_pInstance; // r15
  CEntityIdentity *v25; // rax
  __int64 v26; // rcx
  CEntityIdentity *v27; // rax

  *flVolume = 0.0;
  m_bDisabled = this->m_bDisabled;
  if ( !m_bDisabled )
  {
    m_Index = this->m_hListenFilter.m_Index;
    if ( m_Index + 2 > 1
      && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hListenFilter.m_Index) >> 9) & 0x3F]) != 0 )
    {
      v9 = CEntityHandle::gm_pEntityList;
      v10 = &v8[this->m_hListenFilter.m_Index & 0x1FF];
      if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
      {
        m_pInstance = v10->m_pInstance;
        if ( v10->m_pInstance != 0 )
        {
          if ( pSound->m_hOwner.m_Index + 2 <= 1 )
            return m_bDisabled;
          v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pSound->m_hOwner.m_Index) >> 9) & 0x3F];
          if ( v25 == 0 )
            return m_bDisabled;
          v26 = pSound->m_hOwner.m_Index & 0x1FF;
          v27 = &v25[v26];
          if ( v27 == 0
            || pSound->m_hOwner.m_Index != v27->m_EHandle.m_Index
            || v27->m_pInstance == 0
            || (LOBYTE(m_pInstance[16].m_pEntity) != 0) == (*(m_pInstance->_vptr_IHandleEntity + 207))(
                                                             m_pInstance,
                                                             this,
                                                             v27->m_pInstance,
                                                             v26 * 120,
                                                             CEntityHandle::gm_pEntityList) )
          {
            return m_bDisabled;
          }
          v9 = CEntityHandle::gm_pEntityList;
        }
      }
    }
    else
    {
      v9 = CEntityHandle::gm_pEntityList;
    }
    v11 = this->m_hMeasureTarget.m_Index;
    v12 = 0;
    if ( v11 + 2 > 1 )
    {
      v13 = v9->m_pIdentityChunks[(LOWORD(this->m_hMeasureTarget.m_Index) >> 9) & 0x3F];
      if ( v13 != 0 )
      {
        v14 = &v13[this->m_hMeasureTarget.m_Index & 0x1FF];
        if ( v14 != 0 && v11 == v14->m_EHandle.m_Index )
          v12 = v14->m_pInstance;
      }
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
    SoundOrigin = CSound::GetSoundOrigin(pSound);
    v17 = SoundOrigin->z - AbsOrigin->z;
    v18 = fsqrt(
            (((SoundOrigin->x - AbsOrigin->x) * (SoundOrigin->x - AbsOrigin->x))
           + ((SoundOrigin->y - AbsOrigin->y) * (SoundOrigin->y - AbsOrigin->y)))
          + (v17 * v17));
    if ( v18 == 0.0 )
    {
      *flVolume = 1.0;
      return 1;
    }
    m_flMaxRange = this->m_flMaxRange;
    if ( m_flMaxRange == 0.0 || v18 <= m_flMaxRange )
    {
      v20 = pSound->m_iVolume * this->m_flSensitivity;
      if ( v20 >= v18 )
      {
        v21 = v18 / v20;
        if ( (1.0 - v21) < 0.0 )
          v22 = 0.0;
        else
          v22 = fminf(1.0, 1.0 - v21);
        *flVolume = v22;
        return 1;
      }
    }
  }
  return 0;
}


// CEnvMicrophone::CanHearSound  (line 296, @0x00000000021f9b80, libserver.so)  // inlines: DistTo, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, IndexToIdentity, Instance, IsUsed, IsValid, Length, LookupEntity, LookupEntityByIndex, LookupEntityByNetworkIndex, PassesFilter, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator->
// calls: CBaseEntity::GetAbsOrigin, CEntityHandle::operator CEntityInstance*
// callers: CEnvMicrophone::SoundPlayed
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CEnvMicrophone::CanHearSound(
        CEnvMicrophone *const this,
        CEntityIndex entindex,
        soundlevel_t soundlevel,
        float *const flVolume,
        const Vector *pOrigin)
{
  bool m_bDisabled; // bl
  CEntityInstance *m_pInstance; // r15
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rax
  uint32 m_Index; // eax
  CConcreteEntityList *v13; // rcx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  uint32 v16; // eax
  const CBaseEntity *v17; // rdi
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  const Vector *AbsOrigin; // rax
  float v21; // xmm0_4
  float v22; // xmm2_4
  float z; // xmm1_4
  double v24; // xmm0_8
  float m_flMaxRange; // xmm1_4
  float v26; // xmm0_4
  const CBaseEntity *v28; // rax
  double v29; // xmm0_8
  char v30; // al
  CEntityInstance *v31; // [rsp+0h] [rbp-50h]
  const Vector *pOriginb; // [rsp+8h] [rbp-48h]
  const Vector *pOriginc; // [rsp+8h] [rbp-48h]
  const Vector *pOrigina; // [rsp+8h] [rbp-48h]

  m_bDisabled = this->m_bDisabled;
  if ( m_bDisabled )
  {
    *flVolume = 0.0;
    return 0;
  }
  if ( (this->m_spawnflags.m_Value & 0x40) == 0 || soundlevel != soundlevel_t::SNDLVL_NONE )
  {
    m_pInstance = 0;
    if ( entindex.m_Data != 0 )
    {
      m_pInstance = 0;
      if ( entindex.m_Data <= 0x7FFE )
      {
        v10 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[entindex.m_Data >> 9];
        if ( v10 != 0 )
        {
          v11 = &v10[entindex.m_Data & 0x1FF];
          if ( v11 != 0 && (v11->m_EHandle.m_Index & 0x7FFF) == entindex.m_Data )
            m_pInstance = v11->m_pInstance;
        }
      }
    }
    m_Index = this->m_hListenFilter.m_Index;
    v13 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 > 1
      && (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hListenFilter.m_Index) >> 9) & 0x3F]) != 0
      && (v15 = &v14[this->m_hListenFilter.m_Index & 0x1FF]) != 0
      && m_Index == v15->m_EHandle.m_Index
      && v15->m_pInstance != 0 )
    {
      pOrigina = pOrigin;
      if ( m_pInstance == 0
        || (v31 = v15->m_pInstance,
            v30 = (*(v15->m_pInstance->_vptr_IHandleEntity + 207))(
                    v15->m_pInstance,
                    this,
                    m_pInstance,
                    CEntityHandle::gm_pEntityList),
            pOrigin = pOrigina,
            (LOBYTE(v31[16].m_pEntity) != 0) == v30) )
      {
        *flVolume = 0.0;
        return m_bDisabled;
      }
      if ( pOrigina != 0 )
      {
        v13 = CEntityHandle::gm_pEntityList;
LABEL_14:
        v16 = this->m_hMeasureTarget.m_Index;
        v17 = 0;
        if ( v16 + 2 > 1 )
        {
          v18 = v13->m_pIdentityChunks[(LOWORD(this->m_hMeasureTarget.m_Index) >> 9) & 0x3F];
          if ( v18 != 0 )
          {
            v19 = &v18[this->m_hMeasureTarget.m_Index & 0x1FF];
            if ( v19 != 0 && v16 == v19->m_EHandle.m_Index )
              v17 = v19->m_pInstance;
          }
        }
        pOriginb = pOrigin;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v17);
        v21 = pOriginb->x - AbsOrigin->x;
        v22 = pOriginb->y - AbsOrigin->y;
        z = pOriginb->z;
        goto LABEL_20;
      }
    }
    else
    {
      if ( pOrigin != 0 )
        goto LABEL_14;
      v24 = 0.0;
      if ( m_pInstance == 0 )
        goto LABEL_21;
    }
    v28 = CEntityHandle::operator CEntityInstance *(&this->m_hMeasureTarget);
    pOriginc = CBaseEntity::GetAbsOrigin(v28);
    v29 = (*(m_pInstance->_vptr_IHandleEntity + 62))(m_pInstance);
    AbsOrigin = pOriginc;
    v21 = *&v29 - pOriginc->x;
    v22 = *(&v29 + 1) - pOriginc->y;
LABEL_20:
    *&v24 = COERCE_UNSIGNED_INT(((v21 * v21) + (v22 * v22)) + ((z - AbsOrigin->z) * (z - AbsOrigin->z)));
    *&v24 = fsqrt(*&v24);
LABEL_21:
    m_flMaxRange = this->m_flMaxRange;
    if ( m_flMaxRange == 0.0 || *&v24 <= m_flMaxRange )
    {
      v26 = (*(*g_pSoundSystem + 280LL))(
              g_pSoundSystem,
              soundlevel,
              v24,
              snd_foliage_db_loss.m_pParent->m_Value.m_fValue)
          * *flVolume;
      *flVolume = v26;
      return v26 > 0.0;
    }
  }
  return m_bDisabled;
}


// CEnvMicrophone::SetSensitivity  (line 369, @0x00000000021f9ea0, libserver.so)
void __fastcall CEnvMicrophone::SetSensitivity(CEnvMicrophone *const this, float a2, float flSensitivity)
{
  this->m_flSensitivity = a2;
}


// CEnvMicrophone::SetMaxRange  (line 374, @0x00000000021f9eb0, libserver.so)
void __fastcall CEnvMicrophone::SetMaxRange(CEnvMicrophone *const this, float a2, float flMaxRange)
{
  this->m_flMaxRange = a2;
}


// CEnvMicrophone::SetSpeakerName  (line 379, @0x00000000022089e0, libserver.so)  // inlines: Set, operator=
// calls: CEnvMicrophone::ActivateSpeaker
void __fastcall CEnvMicrophone::SetSpeakerName(CEnvMicrophone *const this, string_t iszSpeakerName)
{
  UtlSymLargeId_t v2; // rax

  v2 = *iszSpeakerName.u.m_Id;
  this->m_hSpeaker.m_Index = -1;
  this->m_iszSpeakerName.u.m_Id = v2;
  CEnvMicrophone::ActivateSpeaker(this);
}


// CEnvMicrophone::SetSpeaker  (line 392, @0x0000000002208cb0, libserver.so)  // inlines: operator=
// calls: CEnvMicrophone::ActivateSpeaker
void __fastcall CEnvMicrophone::SetSpeaker(CEnvMicrophone *const this, string_t iszSpeakerName, uint32 *hSpeaker)
{
  this->m_iszSpeakerName.u.m_Id = *iszSpeakerName.u.m_Id;
  this->m_hSpeaker.m_Index = *hSpeaker;
  CEnvMicrophone::ActivateSpeaker(this);
}


// CEnvMicrophone::Think  (line 402, @0x0000000002204660, libserver.so)  // inlines: CVariantBase, FireOutput, FireOutput<float>, Free, NextSound, Set, curtime, ~CVariantBase
// calls: CSoundEnt::ActiveList, CSoundEnt::SoundPointerForIndex, CEnvMicrophone::CanHearSound, CEntityIOOutput::FireOutputInternal, CBaseEntity::SetNextThink, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CEnvMicrophone::Think(CEnvMicrophone *const this)
{
  int active; // edi
  char v3; // r14
  CSound *v4; // rax
  CSound *v5; // rbx
  double v6; // xmm1_8
  float m_flSmoothFactor; // xmm2_4
  CGlobalVars *v8; // rbx
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax
  double v10; // xmm0_8
  float flMaxVolume; // [rsp+Ch] [rbp-34h]
  __int64 flVolume; // [rsp+10h] [rbp-30h] BYREF
  __int16 v13; // [rsp+18h] [rbp-28h]
  __int16 v14; // [rsp+1Ah] [rbp-26h]

  active = CSoundEnt::ActiveList();
  if ( active == -1 )
  {
    flMaxVolume = 0.0;
  }
  else
  {
    flMaxVolume = 0.0;
    v3 = 0;
    do
    {
      while ( 1 )
      {
        v4 = CSoundEnt::SoundPointerForIndex(active);
        v5 = v4;
        if ( v4 != 0 && (v4->m_iType & this->m_nSoundMask) != 0 )
        {
          LODWORD(flVolume) = 0;
          if ( CEnvMicrophone::CanHearSound(this, v4, &flVolume) && *&flVolume > flMaxVolume )
            break;
        }
        active = v5->m_iNext;
        if ( active == -1 )
          goto LABEL_9;
      }
      active = v5->m_iNext;
      flMaxVolume = *&flVolume;
      v3 = 1;
    }
    while ( active != -1 );
LABEL_9:
    if ( v3 != 0 )
    {
      v13 = 0;
      v14 = 0;
      flVolume = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnHeardSound, this, this, &flVolume, 0.0);
      if ( (v14 & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, flVolume);
    }
  }
  *&v6 = LODWORD(this->m_SoundLevel.m_Value);
  if ( flMaxVolume == *&v6 )
  {
    v8 = gpGlobals;
    if ( gpGlobals == 0 )
      goto LABEL_25;
    goto LABEL_15;
  }
  if ( fabs(flMaxVolume - *&v6) >= 0.0049999999 )
  {
    m_flSmoothFactor = this->m_flSmoothFactor;
    v13 = 1;
    v14 = 0;
    this->m_SoundLevel.m_Value = ((1.0 - m_flSmoothFactor) * flMaxVolume) + (*&v6 * m_flSmoothFactor);
    *&flVolume = ((1.0 - m_flSmoothFactor) * flMaxVolume) + (*&v6 * m_flSmoothFactor);
    CEntityIOOutput::FireOutputInternal(&this->m_SoundLevel, this, this, &flVolume, 0.0);
    if ( (v14 & 1) == 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  v13 = 1;
  this->m_SoundLevel.m_Value = flMaxVolume;
  v14 = 0;
  *&flVolume = flMaxVolume;
  CEntityIOOutput::FireOutputInternal(&this->m_SoundLevel, this, this, &flVolume, 0.0);
  if ( (v14 & 1) != 0 )
LABEL_13:
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, flVolume);
LABEL_14:
  v8 = gpGlobals;
  if ( gpGlobals == 0 )
  {
LABEL_25:
    *&v10 = 1036831949;
    goto LABEL_20;
  }
LABEL_15:
  if ( !v8->m_bEnableAssertions && !v8->m_bInSimulation )
  {
    m_pfnWarningFunc = v8->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(1);
  }
  HIDWORD(v10) = 0;
  *&v10 = v8->m_flCurrentTime + 0.1;
LABEL_20:
  CBaseEntity::SetNextThink(this, v10, v6, 0);
}


// CEnvMicrophone::SoundPlayed  (line 459, @0x0000000002208cd0, libserver.so)  // inlines: AddToTail, CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, CVariantBase, CopyConstruct<Vector>, Element, EmitSound_t, FireOutput, Free, Get, GetEHandle, GetEntityName, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, Purge, RemoveAll, Set, SetSoundName, SoundEventGuid_t, String, ToCStr, V_strncpy<long unsigned int>, _V_strcmp, entindex, operator CBaseEntity*, operator!, operator->, operator=, operator[], ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~EmitSound_t
// calls: CEnvMicrophone::CanHearSound, CEntityHandle::operator CEntityInstance*, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CBaseEntity::GetAbsOrigin, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, _V_strncpy, CEntityIOOutput::FireOutputInternal, CUtlMemory<Vector, int>::Grow, CRecipientFilter::~CRecipientFilter (20 total)
// callers: CEnvMicrophone::OnSoundPlayed
// strings: "EnvMicrophone %s specifies a non-existent speaker name: %s\n"
__int64 __fastcall CEnvMicrophone::SoundPlayed(
        CEnvMicrophone *const this,
        CEntityIndex entindex,
        const char *soundname,
        soundlevel_t soundlevel,
        float flVolume,
        int iFlags,
        int iPitch,
        float soundtime,
        const Vector *pOrigin,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *const soundorigins)
{
  bool v12; // zf
  CEntityInstance *v16; // r14
  double v17; // xmm0_8
  int v18; // xmm1_4
  float v19; // xmm1_4
  const CBaseEntity *v20; // rax
  CEntityInstance *v21; // rax
  CEntityIndex v22; // eax
  __int64 v23; // r14
  int v24; // r13d
  bool v25; // cc
  int framecount; // eax
  Vector *v27; // rax
  __int64 m_Size; // r12
  Vector *v29; // r15
  int v30; // eax
  _BOOL4 v31; // eax
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v34; // eax
  __int16 v35; // cx
  const char *m_pAsString; // rdx
  const char *v37; // rsi
  int iFlagsa; // [rsp+Ch] [rbp-214h]
  EHANDLE *p_m_hSpeaker; // [rsp+10h] [rbp-210h]
  _BOOL4 thisc; // [rsp+30h] [rbp-1F0h]
  _BOOL4 thisb; // [rsp+30h] [rbp-1F0h]
  float flVolumea; // [rsp+3Ch] [rbp-1E4h] BYREF
  CVariant value; // [rsp+40h] [rbp-1E0h] BYREF
  EmitSound_t ep; // [rsp+50h] [rbp-1D0h] BYREF
  CPASAttenuationFilter filter; // [rsp+B0h] [rbp-170h] BYREF
  unsigned __int64 v49; // [rsp+1E8h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  v12 = !this->m_bAvoidFeedback;
  flVolumea = flVolume;
  if ( !v12 || (iFlags & 0x40) != 0 || !CEnvMicrophone::CanHearSound(this, entindex, soundlevel, &flVolumea, pOrigin) )
    return 0;
  p_m_hSpeaker = &this->m_hSpeaker;
  if ( CEntityHandle::operator CEntityInstance *(&this->m_hSpeaker) == 0 )
  {
    if ( this->m_iszSpeakerName.u.m_Id == 0 )
      return 2;
    EntityByName = CGameEntitySystem::FindEntityByName(
                     g_pGameEntitySystem,
                     0,
                     this->m_iszSpeakerName.u.m_pAsString,
                     this,
                     0,
                     0,
                     0);
    if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
    {
      v34 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v35 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v35 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hSpeaker.m_Index) = v35 | this->m_hSpeaker.m_Index & 0x8000;
      this->m_hSpeaker.m_Index = (v34 << 15) | this->m_hSpeaker.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hSpeaker.m_Index = -1;
    }
    if ( CEntityHandle::operator CEntityInstance *(p_m_hSpeaker) == 0 )
    {
      m_pAsString = "";
      if ( this->m_iszSpeakerName.u.m_Id != 0 )
        m_pAsString = this->m_iszSpeakerName.u.m_pAsString;
      v37 = "";
      if ( this->m_pEntity->m_name.u.m_Id != 0 )
        v37 = this->m_pEntity->m_name.u.m_pAsString;
      Warning("EnvMicrophone %s specifies a non-existent speaker name: %s\n", v37, m_pAsString);
      this->m_iszSpeakerName.u.m_Id = 0;
      if ( CEntityHandle::operator CEntityInstance *(p_m_hSpeaker) == 0 )
        return 2;
    }
  }
  if ( this->m_iLastRoutedFrame == gpGlobals->framecount
    && this->m_szLastSound[0] != 0
    && strcmp(this->m_szLastSound, soundname) == 0 )
  {
    return (this->m_spawnflags.m_Value & 0x10) != 0;
  }
  iFlagsa = iFlags | 0x40;
  this->m_bAvoidFeedback = 1;
  v16 = CEntityHandle::operator CEntityInstance *(p_m_hSpeaker);
  v17 = (*(v16->_vptr_IHandleEntity + 186))(v16);
  LODWORD(ep.m_pSoundName) = v18;
  *&ep.m_nChannel = v17;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &ep);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  *&ep.m_nChannel = (*(v16->_vptr_IHandleEntity + 186))(v16);
  *&ep.m_pSoundName = v19;
  CPASAttenuationFilter::Filter(&filter, &ep, 0.80000001, v19);
  ep.m_bEmitCloseCaption = 1;
  ep.m_pOrigin = 0;
  ep.m_flSoundTime = 0.0;
  ep.m_pflSoundDuration = 0;
  ep.m_nFlags = iFlagsa;
  ep.m_bWarnOnMissingCloseCaption = 0;
  ep.m_bWarnOnDirectWaveReference = 0;
  ep.m_nSpeakerEntity.m_Data = -1;
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  ep.m_nChannel = 6;
  ep.m_pSoundName = soundname;
  ep.m_flVolume = flVolumea;
  ep.m_SoundLevel = soundlevel;
  ep.m_nPitch = iPitch;
  v20 = CEntityHandle::operator CEntityInstance *(p_m_hSpeaker);
  ep.m_pOrigin = CBaseEntity::GetAbsOrigin(v20);
  ep.m_nSpeakerEntity = entindex;
  ep.m_flSoundTime = soundtime;
  v21 = CEntityHandle::operator CEntityInstance *(p_m_hSpeaker);
  v22.m_Data = CEntityInstance::GetEntityIndex(v21).m_Data;
  CBaseEntity::EmitSound(&filter, v22, &ep);
  _V_strncpy(this->m_szLastSound, soundname, 256);
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnRoutedSound, this, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  v23 = 0;
  v24 = 0;
  v25 = ep.m_UtlVecSoundOrigin.m_Size <= 0;
  framecount = gpGlobals->framecount;
  this->m_bAvoidFeedback = 0;
  this->m_iLastRoutedFrame = framecount;
  if ( !v25 )
  {
    do
    {
      m_Size = soundorigins->m_Size;
      v29 = &ep.m_UtlVecSoundOrigin.m_Memory.m_pMemory[v23];
      v30 = soundorigins->m_Size;
      if ( m_Size == soundorigins->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<Vector,int>::Grow(&soundorigins->m_Memory, 1);
        v30 = soundorigins->m_Size;
      }
      soundorigins->m_Size = v30 + 1;
      v27 = &soundorigins->m_Memory.m_pMemory[m_Size];
      if ( v27 != 0 )
      {
        *&v27->x = *&v29->x;
        v27->z = v29->z;
      }
      ++v24;
      ++v23;
    }
    while ( ep.m_UtlVecSoundOrigin.m_Size > v24 );
  }
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  v31 = (this->m_spawnflags.m_Value & 0x10) != 0;
  if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    thisb = (this->m_spawnflags.m_Value & 0x10) != 0;
    CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    v31 = thisb;
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      v31 = thisb;
    }
  }
  thisc = v31;
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
  return thisc;
}


// CEnvMicrophone::SoundStopped  (line 553, @0x00000000021f9ec0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, entindex, operator bool
// calls: CEntityInstance::GetEntityIndex, CBaseEntity::StopSound
// callers: CEnvMicrophone::OnSoundStopped
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEnvMicrophone::SoundStopped(CEnvMicrophone *const this, const char *soundname)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityIndex v5; // eax

  m_Index = this->m_hSpeaker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSpeaker.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hSpeaker.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        v5.m_Data = CEntityInstance::GetEntityIndex(v4->m_pInstance).m_Data;
        CBaseEntity::StopSound(v5, soundname);
      }
    }
  }
}


// CEnvMicrophone::OnSoundPlayed  (line 568, @0x0000000002209370, libserver.so)  // inlines: Element, FastRemove, GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, memcpy, operator bool, operator[]
// calls: CEnvMicrophone::SoundPlayed
// callers: CSoundEmitterSystem::EmitAmbientSound
// globals: s_Microphones, CEntityHandle::gm_pEntityList
__int64 __fastcall CEnvMicrophone::OnSoundPlayed(
        CEntityIndex entindex,
        const char *soundname,
        soundlevel_t soundlevel,
        float flVolume,
        int iFlags,
        int iPitch,
        const Vector *pOrigin,
        float soundtime,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *const soundorigins)
{
  int v9; // ebx
  __int64 v16; // r12
  unsigned int v17; // r13d
  CHandle<CEnvMicrophone> *v18; // rdx
  uint32 m_Index; // eax
  __int16 v20; // cx
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdi
  int v23; // eax
  int v24; // eax
  const Vector *v26; // [rsp+10h] [rbp-50h]
  float v27; // [rsp+18h] [rbp-48h]
  int v28; // [rsp+1Ch] [rbp-44h]
  float v30; // [rsp+28h] [rbp-38h]

  if ( s_Microphones.m_Size > 0 )
  {
    v9 = s_Microphones.m_Size - 1;
    v16 = s_Microphones.m_Size - 1;
    v17 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = &s_Microphones.m_Memory.m_pMemory[v16];
        m_Index = s_Microphones.m_Memory.m_pMemory[v16].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v20 = v18->m_Index;
          v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v18->m_Index) >> 9) & 0x3F];
          if ( v21 == 0 )
            goto LABEL_3;
          v22 = &v21[v20 & 0x1FF];
          if ( v22 == 0 || m_Index != v22->m_EHandle.m_Index )
            goto LABEL_3;
          v26 = pOrigin;
          v27 = soundtime;
          v28 = iPitch;
          v30 = flVolume;
          v23 = CEnvMicrophone::SoundPlayed(
                  v22->m_pInstance,
                  entindex,
                  soundname,
                  soundlevel,
                  flVolume,
                  iFlags,
                  iPitch,
                  soundtime,
                  pOrigin,
                  soundorigins);
          flVolume = v30;
          iPitch = v28;
          soundtime = v27;
          pOrigin = v26;
          if ( v23 != 1 )
            break;
          v17 = 1;
        }
LABEL_3:
        --v9;
        --v16;
        if ( v9 == -1 )
          return v17;
      }
      if ( v23 != 2 || s_Microphones.m_Size <= 0 )
        goto LABEL_3;
      v24 = s_Microphones.m_Size - 1;
      if ( v9 != s_Microphones.m_Size - 1 )
      {
        s_Microphones.m_Memory.m_pMemory[v16].m_Index = s_Microphones.m_Memory.m_pMemory[v24].m_Index;
        v24 = s_Microphones.m_Size - 1;
      }
      --v9;
      --v16;
      s_Microphones.m_Size = v24;
      if ( v9 == -1 )
        return v17;
    }
  }
  return 0;
}


// CEnvMicrophone::OnSoundStopped  (line 608, @0x00000000021f9f40, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, operator bool, operator[]
// calls: CEnvMicrophone::SoundStopped
// globals: s_Microphones, CEntityHandle::gm_pEntityList
void __fastcall CEnvMicrophone::OnSoundStopped(const char *soundname)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // r12
  CHandle<CEnvMicrophone> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  if ( s_Microphones.m_Size > 0 )
  {
    v1 = (s_Microphones.m_Size - 1);
    v3 = 4LL * v1;
    v4 = 4 * (v1 - v1) - 4;
    do
    {
      v5 = &s_Microphones.m_Memory.m_pMemory[v3 / 4];
      m_Index = s_Microphones.m_Memory.m_pMemory[v3 / 4].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v7 = v5->m_Index;
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[v7 & 0x1FF];
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
            CEnvMicrophone::SoundStopped(v9->m_pInstance, soundname);
        }
      }
      v3 -= 4LL;
    }
    while ( v3 != v4 );
  }
}


