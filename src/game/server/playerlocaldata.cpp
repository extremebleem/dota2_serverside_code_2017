
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// fogplayerparams_t::AddDatadescMetadataKeys  (line 24, @0x0000000002325760, libserver.so)
void __fastcall fogplayerparams_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// fogplayerparams_t::GetBaseMap  (line 24, @0x0000000002325770, libserver.so)
datamap_t *__cdecl fogplayerparams_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<fogplayerparams_t>  (line 24, @0x0000000002325780, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "fogplayerparams_t"
// globals: `guard variable for'DataMapInit<fogplayerparams_t>(fogplayerparams_t *)::nameHolder, fogplayerparams_t::m_DataMap, DataMapInit<fogplayerparams_t>(fogplayerparams_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<fogplayerparams_t>(fogplayerparams_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<fogplayerparams_t>(fogplayerparams_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<fogplayerparams_t>(fogplayerparams_t *)::nameHolder) != 0 )
  {
    DataMapInit<fogplayerparams_t>(fogplayerparams_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<fogplayerparams_t>(fogplayerparams_t *)::nameHolder.m_pszBase = "fogplayerparams_t";
    DataMapInit<fogplayerparams_t>(fogplayerparams_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<fogplayerparams_t>(fogplayerparams_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<fogplayerparams_t>(fogplayerparams_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<fogplayerparams_t>(fogplayerparams_t *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<fogplayerparams_t>(fogplayerparams_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<fogplayerparams_t>(fogplayerparams_t *)::nameHolder,
      &_dso_handle);
  }
  fogplayerparams_t::m_DataMap.baseMap = 0;
  fogplayerparams_t::m_DataMap.dataDesc = &DataMapInit<fogplayerparams_t>(fogplayerparams_t *)::dataDesc[1];
  fogplayerparams_t::m_DataMap.dataNumFields = 14;
  return &fogplayerparams_t::m_DataMap;
}


// sky3dparams_t::AddDatadescMetadataKeys  (line 42, @0x0000000002325840, libserver.so)
void __fastcall sky3dparams_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// sky3dparams_t::GetBaseMap  (line 42, @0x0000000002325850, libserver.so)
datamap_t *__cdecl sky3dparams_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<sky3dparams_t>  (line 42, @0x0000000002325860, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "sky3dparams_t"
// globals: `guard variable for'DataMapInit<sky3dparams_t>(sky3dparams_t *)::nameHolder, sky3dparams_t::m_DataMap, DataMapInit<sky3dparams_t>(sky3dparams_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<sky3dparams_t>(sky3dparams_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<sky3dparams_t>(sky3dparams_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<sky3dparams_t>(sky3dparams_t *)::nameHolder) != 0 )
  {
    DataMapInit<sky3dparams_t>(sky3dparams_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<sky3dparams_t>(sky3dparams_t *)::nameHolder.m_pszBase = "sky3dparams_t";
    DataMapInit<sky3dparams_t>(sky3dparams_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<sky3dparams_t>(sky3dparams_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<sky3dparams_t>(sky3dparams_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<sky3dparams_t>(sky3dparams_t *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<sky3dparams_t>(sky3dparams_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<sky3dparams_t>(sky3dparams_t *)::nameHolder,
      &_dso_handle);
  }
  sky3dparams_t::m_DataMap.baseMap = 0;
  sky3dparams_t::m_DataMap.dataDesc = &DataMapInit<sky3dparams_t>(sky3dparams_t *)::dataDesc[1];
  sky3dparams_t::m_DataMap.dataNumFields = 6;
  return &sky3dparams_t::m_DataMap;
}


// audioparams_t::AddDatadescMetadataKeys  (line 54, @0x0000000002325920, libserver.so)
void __fastcall audioparams_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// audioparams_t::GetBaseMap  (line 54, @0x0000000002325930, libserver.so)
datamap_t *__cdecl audioparams_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<audioparams_t>  (line 54, @0x0000000002325940, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "audioparams_t"
// globals: `guard variable for'DataMapInit<audioparams_t>(audioparams_t *)::nameHolder, audioparams_t::m_DataMap, DataMapInit<audioparams_t>(audioparams_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<audioparams_t>(audioparams_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<audioparams_t>(audioparams_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<audioparams_t>(audioparams_t *)::nameHolder) != 0 )
  {
    DataMapInit<audioparams_t>(audioparams_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<audioparams_t>(audioparams_t *)::nameHolder.m_pszBase = "audioparams_t";
    DataMapInit<audioparams_t>(audioparams_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<audioparams_t>(audioparams_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<audioparams_t>(audioparams_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<audioparams_t>(audioparams_t *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<audioparams_t>(audioparams_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<audioparams_t>(audioparams_t *)::nameHolder,
      &_dso_handle);
  }
  audioparams_t::m_DataMap.baseMap = 0;
  audioparams_t::m_DataMap.dataDesc = &DataMapInit<audioparams_t>(audioparams_t *)::dataDesc[1];
  audioparams_t::m_DataMap.dataNumFields = 4;
  return &audioparams_t::m_DataMap;
}


// CPlayerLocalData::AddDatadescMetadataKeys  (line 63, @0x0000000002325a00, libserver.so)
void __fastcall CPlayerLocalData::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CPlayerLocalData::GetBaseMap  (line 63, @0x0000000002325a10, libserver.so)
datamap_t *__cdecl CPlayerLocalData::GetBaseMap()
{
  return 0;
}


// DataMapInit<CPlayerLocalData>  (line 63, @0x0000000002325a20, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "CPlayerLocalData"
// globals: `guard variable for'DataMapInit<CPlayerLocalData>(CPlayerLocalData *)::nameHolder, CPlayerLocalData::m_DataMap, DataMapInit<CPlayerLocalData>(CPlayerLocalData *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPlayerLocalData>(CPlayerLocalData *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPlayerLocalData>(CPlayerLocalData *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPlayerLocalData>(CPlayerLocalData *)::nameHolder) != 0 )
  {
    DataMapInit<CPlayerLocalData>(CPlayerLocalData *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPlayerLocalData>(CPlayerLocalData *)::nameHolder.m_pszBase = "CPlayerLocalData";
    DataMapInit<CPlayerLocalData>(CPlayerLocalData *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPlayerLocalData>(CPlayerLocalData *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPlayerLocalData>(CPlayerLocalData *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPlayerLocalData>(CPlayerLocalData *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPlayerLocalData>(CPlayerLocalData *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPlayerLocalData>(CPlayerLocalData *)::nameHolder,
      &_dso_handle);
  }
  CPlayerLocalData::m_DataMap.baseMap = 0;
  CPlayerLocalData::m_DataMap.dataDesc = &DataMapInit<CPlayerLocalData>(CPlayerLocalData *)::dataDesc[1];
  CPlayerLocalData::m_DataMap.dataNumFields = 26;
  return &CPlayerLocalData::m_DataMap;
}


// CPlayerLocalData::CPlayerLocalData  (line 109, @0x0000000002325ae0, libserver.so)  // inlines: CNetworkVarBase, CNetworkVectorBase, ChangeAccessorFieldPathIndex_t, EnsureValidValue, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, EnsureValidValue<short int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, NetworkStateChanged, NetworkVar_fog, NetworkVar_m_audio, NetworkVar_m_skybox3d, Set, Zero, audioparams_t, operator=<bool>, operator=<int>, sky3dparams_t
// calls: fogparams_t::fogparams_t
// callers: CSchemaClassBinding<CPlayerLocalData>::Allocate, CSchemaClassBinding<CPlayerLocalData>::ConstructInPlace, CSchemaClassBinding<CPlayerLocalData>::AllocateAndCopyConstruct, CBasePlayer::CBasePlayer
void __fastcall CPlayerLocalData::CPlayerLocalData(CPlayerLocalData *const this)
{
  sky3dparams_t::NetworkVar_fog *p_fog; // rdi
  bool v3; // zf
  int m_Value; // r10d

  p_fog = &this->m_skybox3d.fog;
  p_fog[-1].colorPrimary.m_Value._color[0] = 0;
  *&p_fog[-2].dirPrimary.m_Value.x = off_408ADD0;
  *&p_fog[-1].skyboxFogFactorLerpTo.m_Value = off_3FC50D0;
  LOWORD(p_fog[-2].dirPrimary.m_Value.z) = -1;
  LOWORD(p_fog[-1].endLerpTo.m_Value) = 0;
  *p_fog[-2].colorSecondary.m_Value._color = 0;
  LODWORD(p_fog[-1]._vptr_fogparams_t) = 0;
  HIDWORD(p_fog[-1]._vptr_fogparams_t) = 0;
  p_fog[-1].colorPrimary.m_Value._color[1] = 0;
  p_fog[-1].colorPrimary.m_Value._color[2] = 0;
  p_fog[-1].colorSecondary = 0;
  p_fog[-1].colorPrimaryLerpTo = 0;
  p_fog[-1].colorSecondaryLerpTo = 0;
  p_fog[-1].start.m_Value = 0.0;
  LOBYTE(p_fog[-1].maxdensity.m_Value) = 0;
  BYTE1(p_fog[-1].maxdensity.m_Value) = 0;
  BYTE2(p_fog[-1].maxdensity.m_Value) = 0;
  p_fog[-1].exponent.m_Value = 0.0;
  LOBYTE(p_fog[-1].HDRColorScale.m_Value) = 0;
  BYTE1(p_fog[-1].HDRColorScale.m_Value) = 0;
  BYTE2(p_fog[-1].HDRColorScale.m_Value) = 0;
  p_fog[-1].duration.m_Value = 0.0;
  p_fog[-1].lerptime.m_Value = 0.0;
  p_fog[-1].maxdensityLerpTo.m_Value = 0.0;
  p_fog[-1].enable.m_Value = 0;
  p_fog[-1].blend.m_Value = 0;
  *(&p_fog[-1].m_bPadding + 1) = 0;
  fogparams_t::fogparams_t(p_fog);
  this->m_audio.soundscapeIndex.m_Value = 0;
  this->m_skybox3d.fog._vptr_fogparams_t = &off_3FC5090;
  this->m_skybox3d._vptr_sky3dparams_t = &off_408AD50;
  this->m_audio._vptr_audioparams_t = &off_408AD90;
  this->m_audio.localBits.m_Value = 0;
  this->m_audio.soundscapeEntityListIndex.m_Value = 0;
  fogparams_t::fogparams_t(&this->m_fog);
  if ( this->m_audio.soundscapeIndex.m_Value == 0 )
  {
    if ( this->m_audio.localBits.m_Value == 0 )
      goto LABEL_3;
LABEL_8:
    (*(this->m_audio._vptr_audioparams_t + 2))(&this->m_audio, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_Value = this->m_audio.soundscapeEntityListIndex.m_Value;
    this->m_audio.localBits.m_Value = 0;
    if ( m_Value == 0 )
      goto LABEL_4;
    goto LABEL_9;
  }
  (*(this->m_audio._vptr_audioparams_t + 2))(&this->m_audio, 104, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v3 = this->m_audio.localBits.m_Value == 0;
  this->m_audio.soundscapeIndex.m_Value = 0;
  if ( !v3 )
    goto LABEL_8;
LABEL_3:
  if ( this->m_audio.soundscapeEntityListIndex.m_Value != 0 )
  {
LABEL_9:
    (*(this->m_audio._vptr_audioparams_t + 2))(&this->m_audio, 112, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_audio.soundscapeEntityListIndex.m_Value = 0;
  }
LABEL_4:
  v3 = this->m_bDrawViewmodel.m_Value;
  this->m_pOldSkyCamera = 0;
  if ( !v3 )
  {
    (*(this->_vptr_CPlayerLocalData + 2))(this, 136, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bDrawViewmodel.m_Value = 1;
  }
}


// GetPlayerViewPosition  (line 123, @0x0000000002320600, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GetViewEntity, IndexToIdentity, Init, LookupEntity
// callers: CPlayerLocalData::UpdateAreaBits
Vector __fastcall GetPlayerViewPosition(CBasePlayer *pl)
{
  unsigned __int16 v1; // dx
  __int64 v2; // rsi
  uint32 v3; // eax
  CEntitySystem *v4; // rcx
  CEntityIdentity *v5; // rdx
  __int64 v6; // rsi

  if ( pl->m_hViewEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = pl->m_hViewEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (pl->m_hViewEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  v4 = g_pEntitySystem;
  v5 = (v3 + 2);
  if ( v5 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
    if ( v5 != 0 )
    {
      v6 = v2 & 0x1FF;
      v4 = (8 * v6);
      v2 = 120 * v6;
      v5 = (v5 + v2);
      if ( v5 != 0 && v3 == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
        pl = v5->m_pInstance;
    }
  }
  return (*(pl->_vptr_IHandleEntity + 164))(pl, v2, v5, v4);
}


// CPlayerLocalData::UpdateAreaBits  (line 133, @0x0000000002335390, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<int>, Element, Find, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Purge, Purge_FixedGrowable, RemoveAll, Set, operator CBasePlayer*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: GetPlayerViewPosition, CEntitySystem::GetActiveSpawnGroupHandle, CBasePlayer::GetSplitScreenPlayers, CUtlMemory<int, int>::Purge, CUtlMemory<int, int>::Grow, CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 15ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CSource2GameClients::ClientSetupVisibility
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPlayerLocalData::UpdateAreaBits(
        CPlayerLocalData *const this,
        CBasePlayer *pl,
        unsigned __int8 *chAreaPortalBits)
{
  int (*v4)(...); // r13
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned int v8; // r12d
  CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int> > *SplitScreenPlayers; // r15
  __int64 v10; // r13
  CHandle<CBasePlayer> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CBasePlayer *m_pInstance; // rdi
  unsigned int v17; // eax
  __int64 m_Size; // rbx
  unsigned int v19; // r12d
  int *v20; // rdx
  int v21; // eax
  int v22; // eax
  int *v23; // rax
  __int64 i; // rax
  __int64 v25; // rbx
  CNetworkArrayBase<unsigned char,32,CPlayerLocalData::NetworkVar_m_chAreaBits> *p_m_chAreaBits; // r12
  CNetworkArrayBase<unsigned char,24,CPlayerLocalData::NetworkVar_m_chAreaPortalBits> *p_m_chAreaPortalBits; // r12
  uint32 v28; // eax
  IPVS *pPVS; // [rsp+38h] [rbp-F8h]
  Vector origin; // [rsp+40h] [rbp-F0h] BYREF
  Vector org2; // [rsp+50h] [rbp-E0h] BYREF
  unsigned __int8 tempBits[32]; // [rsp+60h] [rbp-D0h] BYREF
  unsigned __int8 tempBits2[32]; // [rsp+80h] [rbp-B0h] BYREF
  CUtlVectorFixedGrowable<int,15ul> vecAreasSeen; // [rsp+A0h] [rbp-90h] BYREF
  unsigned __int64 v37; // [rsp+F8h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  memset(tempBits, 0, sizeof(tempBits));
  origin = GetPlayerViewPosition(pl);
  v4 = *g_pPVSManager->_vptr_IPVSManager;
  ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
  v6 = (v4)(g_pPVSManager, ActiveSpawnGroupHandle);
  pPVS = v6;
  v7 = v6;
  if ( v6 != 0 )
  {
    v8 = (*(*v6 + 112LL))(v6, &origin);
    (*(*v7 + 120LL))(v7, v8, tempBits, 32);
    vecAreasSeen.m_Memory.m_nAllocationCount = 15;
    vecAreasSeen.m_Memory.m_nGrowSize = 0x80000000;
    vecAreasSeen.m_Memory.m_pMemory = &vecAreasSeen.m_Memory.m_FixedMemory;
    vecAreasSeen.m_Size = 1;
    *vecAreasSeen.m_Memory.m_FixedMemory.m_Data = v8;
    SplitScreenPlayers = CBasePlayer::GetSplitScreenPlayers(pl);
    if ( SplitScreenPlayers->m_Size > 0 )
    {
      v10 = 0;
      while ( 1 )
      {
        v11 = &SplitScreenPlayers->m_Memory.m_pMemory[v10];
        m_Index = v11->m_Index;
        if ( v11->m_Index + 2 <= 1 )
          goto LABEL_4;
        v13 = v11->m_Index;
        v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F];
        if ( v14 == 0 )
          goto LABEL_4;
        v15 = &v14[v13 & 0x1FF];
        if ( v15 == 0 )
          goto LABEL_4;
        if ( m_Index != v15->m_EHandle.m_Index )
          goto LABEL_4;
        m_pInstance = v15->m_pInstance;
        if ( v15->m_pInstance == 0 )
          goto LABEL_4;
        memset(tempBits2, 0, sizeof(tempBits2));
        org2 = GetPlayerViewPosition(m_pInstance);
        v17 = (*(*pPVS + 112LL))(pPVS, &org2);
        m_Size = vecAreasSeen.m_Size;
        v19 = v17;
        if ( vecAreasSeen.m_Size <= 0 )
        {
LABEL_15:
          v22 = vecAreasSeen.m_Size;
          if ( vecAreasSeen.m_Size == vecAreasSeen.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<int,int>::Grow(&vecAreasSeen.m_Memory, 1);
            v22 = vecAreasSeen.m_Size;
          }
          vecAreasSeen.m_Size = v22 + 1;
          v23 = &vecAreasSeen.m_Memory.m_pMemory[m_Size];
          if ( v23 != 0 )
            *v23 = v19;
          (*(*pPVS + 120LL))(pPVS, v19, tempBits2, 32);
          for ( i = 0; i != 32; i += 4 )
            *&tempBits[i] |= *&tempBits2[i];
          if ( SplitScreenPlayers->m_Size <= ++v10 )
            break;
        }
        else
        {
          if ( v17 != *vecAreasSeen.m_Memory.m_pMemory )
          {
            v20 = vecAreasSeen.m_Memory.m_pMemory + 1;
            v21 = 0;
            while ( ++v21 != vecAreasSeen.m_Size )
            {
              if ( v19 == *v20++ )
              {
                if ( v21 != -1 )
                  goto LABEL_4;
                goto LABEL_15;
              }
            }
            goto LABEL_15;
          }
LABEL_4:
          if ( SplitScreenPlayers->m_Size <= ++v10 )
            break;
        }
      }
    }
    v25 = 0;
    p_m_chAreaBits = &this->m_chAreaBits;
    do
    {
      if ( tempBits[v25] != p_m_chAreaBits->m_Value[v25] )
      {
        (*(this->_vptr_CPlayerLocalData + 2))(this, 24, v25, 0xFFFFFFFFLL);
        p_m_chAreaBits->m_Value[v25] = tempBits[v25];
      }
      ++v25;
    }
    while ( v25 != 32 );
    LOBYTE(v25) = 0;
    p_m_chAreaPortalBits = &this->m_chAreaPortalBits;
    do
    {
      if ( chAreaPortalBits[v25] != p_m_chAreaPortalBits->m_Value[v25] )
      {
        (*(this->_vptr_CPlayerLocalData + 2))(this, 56, v25, 0xFFFFFFFFLL);
        p_m_chAreaPortalBits->m_Value[v25] = chAreaPortalBits[v25];
      }
      ++v25;
    }
    while ( v25 != 24 );
    vecAreasSeen.m_Size = 0;
    v28 = vecAreasSeen.m_Memory.m_nGrowSize & 0xC0000000;
    if ( vecAreasSeen.m_Memory.m_nAllocationCount < 0
      || vecAreasSeen.m_Memory.m_pMemory == &vecAreasSeen.m_Memory.m_FixedMemory )
    {
      if ( v28 == 0 )
        CUtlMemory<int,int>::Purge(&vecAreasSeen.m_Memory);
    }
    else if ( vecAreasSeen.m_Memory.m_pMemory != 0 && v28 == 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    }
  }
}


// ClientData_Update  (line 207, @0x0000000002325d00, libserver.so)  // inlines: GetRawColor, NetworkStateChanged, Set, SetRawColor, operator!=, operator=, operator=<CSkyCamera::NetworkVar_m_skyboxData>, operator=<int>
// calls: GetCurrentSkyCamera
// callers: UpdateAllClientData
void __fastcall ClientData_Update(CBasePlayer *pl)
{
  CSkyCamera *CurrentSkyCamera; // rax
  CSkyCamera *v3; // r12

  CurrentSkyCamera = GetCurrentSkyCamera();
  v3 = CurrentSkyCamera;
  if ( CurrentSkyCamera == pl->m_Local.m_pOldSkyCamera )
  {
    if ( CurrentSkyCamera == 0 && pl->m_Local.m_skybox3d.area.m_Value != 0xFF )
    {
      (*(pl->m_Local.m_skybox3d._vptr_sky3dparams_t + 2))(&pl->m_Local.m_skybox3d, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.area.m_Value = -1;
    }
  }
  else
  {
    pl->m_Local.m_pOldSkyCamera = CurrentSkyCamera;
    if ( pl->m_Local.m_skybox3d.scale.m_Value != CurrentSkyCamera->m_skyboxData.scale.m_Value )
    {
      (*(pl->m_Local.m_skybox3d._vptr_sky3dparams_t + 2))(&pl->m_Local.m_skybox3d, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.scale.m_Value = v3->m_skyboxData.scale.m_Value;
    }
    if ( v3->m_skyboxData.origin.m_Value.x != pl->m_Local.m_skybox3d.origin.m_Value.x
      || v3->m_skyboxData.origin.m_Value.y != pl->m_Local.m_skybox3d.origin.m_Value.y
      || v3->m_skyboxData.origin.m_Value.z != pl->m_Local.m_skybox3d.origin.m_Value.z )
    {
      (*(pl->m_Local.m_skybox3d._vptr_sky3dparams_t + 2))(&pl->m_Local.m_skybox3d, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.origin.m_Value.x = v3->m_skyboxData.origin.m_Value.x;
      pl->m_Local.m_skybox3d.origin.m_Value.y = v3->m_skyboxData.origin.m_Value.y;
      pl->m_Local.m_skybox3d.origin.m_Value.z = v3->m_skyboxData.origin.m_Value.z;
    }
    if ( pl->m_Local.m_skybox3d.area.m_Value != v3->m_skyboxData.area.m_Value )
    {
      (*(pl->m_Local.m_skybox3d._vptr_sky3dparams_t + 2))(&pl->m_Local.m_skybox3d, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.area.m_Value = v3->m_skyboxData.area.m_Value;
    }
    if ( pl->m_Local.m_skybox3d.bClip3DSkyBoxNearToWorldFar.m_Value != v3->m_skyboxData.bClip3DSkyBoxNearToWorldFar.m_Value )
    {
      (*(pl->m_Local.m_skybox3d._vptr_sky3dparams_t + 2))(&pl->m_Local.m_skybox3d, 25, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.bClip3DSkyBoxNearToWorldFar.m_Value = v3->m_skyboxData.bClip3DSkyBoxNearToWorldFar.m_Value;
    }
    if ( pl->m_Local.m_skybox3d.flClip3DSkyBoxNearToWorldFarOffset.m_Value != v3->m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset.m_Value )
    {
      (*(pl->m_Local.m_skybox3d._vptr_sky3dparams_t + 2))(&pl->m_Local.m_skybox3d, 28, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.flClip3DSkyBoxNearToWorldFarOffset.m_Value = v3->m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset.m_Value;
    }
    if ( v3->m_skyboxData.fog.dirPrimary.m_Value.x != pl->m_Local.m_skybox3d.fog.dirPrimary.m_Value.x
      || v3->m_skyboxData.fog.dirPrimary.m_Value.y != pl->m_Local.m_skybox3d.fog.dirPrimary.m_Value.y
      || v3->m_skyboxData.fog.dirPrimary.m_Value.z != pl->m_Local.m_skybox3d.fog.dirPrimary.m_Value.z )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.dirPrimary.m_Value.x = v3->m_skyboxData.fog.dirPrimary.m_Value.x;
      pl->m_Local.m_skybox3d.fog.dirPrimary.m_Value.y = v3->m_skyboxData.fog.dirPrimary.m_Value.y;
      pl->m_Local.m_skybox3d.fog.dirPrimary.m_Value.z = v3->m_skyboxData.fog.dirPrimary.m_Value.z;
    }
    if ( *&pl->m_Local.m_skybox3d.fog.colorPrimary != *&v3->m_skyboxData.fog.colorPrimary )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.colorPrimary = v3->m_skyboxData.fog.colorPrimary;
    }
    if ( *&pl->m_Local.m_skybox3d.fog.colorSecondary != *&v3->m_skyboxData.fog.colorSecondary )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.colorSecondary = v3->m_skyboxData.fog.colorSecondary;
    }
    if ( *&pl->m_Local.m_skybox3d.fog.colorPrimaryLerpTo != *&v3->m_skyboxData.fog.colorPrimaryLerpTo )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 28, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.colorPrimaryLerpTo = v3->m_skyboxData.fog.colorPrimaryLerpTo;
    }
    if ( *&pl->m_Local.m_skybox3d.fog.colorSecondaryLerpTo != *&v3->m_skyboxData.fog.colorSecondaryLerpTo )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 32, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.colorSecondaryLerpTo = v3->m_skyboxData.fog.colorSecondaryLerpTo;
    }
    if ( pl->m_Local.m_skybox3d.fog.start.m_Value != v3->m_skyboxData.fog.start.m_Value )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 36, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.start.m_Value = v3->m_skyboxData.fog.start.m_Value;
    }
    if ( pl->m_Local.m_skybox3d.fog.end.m_Value != v3->m_skyboxData.fog.end.m_Value )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 40, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.end.m_Value = v3->m_skyboxData.fog.end.m_Value;
    }
    if ( pl->m_Local.m_skybox3d.fog.farz.m_Value != v3->m_skyboxData.fog.farz.m_Value )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 44, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.farz.m_Value = v3->m_skyboxData.fog.farz.m_Value;
    }
    if ( pl->m_Local.m_skybox3d.fog.maxdensity.m_Value != v3->m_skyboxData.fog.maxdensity.m_Value )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 48, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.maxdensity.m_Value = v3->m_skyboxData.fog.maxdensity.m_Value;
    }
    if ( pl->m_Local.m_skybox3d.fog.exponent.m_Value != v3->m_skyboxData.fog.exponent.m_Value )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 52, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.exponent.m_Value = v3->m_skyboxData.fog.exponent.m_Value;
    }
    if ( pl->m_Local.m_skybox3d.fog.HDRColorScale.m_Value != v3->m_skyboxData.fog.HDRColorScale.m_Value )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 56, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.HDRColorScale.m_Value = v3->m_skyboxData.fog.HDRColorScale.m_Value;
    }
    if ( pl->m_Local.m_skybox3d.fog.skyboxFogFactor.m_Value != v3->m_skyboxData.fog.skyboxFogFactor.m_Value )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 60, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.skyboxFogFactor.m_Value = v3->m_skyboxData.fog.skyboxFogFactor.m_Value;
    }
    if ( pl->m_Local.m_skybox3d.fog.skyboxFogFactorLerpTo.m_Value != v3->m_skyboxData.fog.skyboxFogFactorLerpTo.m_Value )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 64, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.skyboxFogFactorLerpTo.m_Value = v3->m_skyboxData.fog.skyboxFogFactorLerpTo.m_Value;
    }
    if ( pl->m_Local.m_skybox3d.fog.startLerpTo.m_Value != v3->m_skyboxData.fog.startLerpTo.m_Value )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 68, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.startLerpTo.m_Value = v3->m_skyboxData.fog.startLerpTo.m_Value;
    }
    if ( pl->m_Local.m_skybox3d.fog.endLerpTo.m_Value != v3->m_skyboxData.fog.endLerpTo.m_Value )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 72, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.endLerpTo.m_Value = v3->m_skyboxData.fog.endLerpTo.m_Value;
    }
    if ( pl->m_Local.m_skybox3d.fog.maxdensityLerpTo.m_Value != v3->m_skyboxData.fog.maxdensityLerpTo.m_Value )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 76, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.maxdensityLerpTo.m_Value = v3->m_skyboxData.fog.maxdensityLerpTo.m_Value;
    }
    if ( pl->m_Local.m_skybox3d.fog.lerptime.m_Value != v3->m_skyboxData.fog.lerptime.m_Value )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 80, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.lerptime.m_Value = v3->m_skyboxData.fog.lerptime.m_Value;
    }
    if ( pl->m_Local.m_skybox3d.fog.duration.m_Value != v3->m_skyboxData.fog.duration.m_Value )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 84, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.duration.m_Value = v3->m_skyboxData.fog.duration.m_Value;
    }
    if ( pl->m_Local.m_skybox3d.fog.enable.m_Value != v3->m_skyboxData.fog.enable.m_Value )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.enable.m_Value = v3->m_skyboxData.fog.enable.m_Value;
    }
    if ( pl->m_Local.m_skybox3d.fog.blend.m_Value != v3->m_skyboxData.fog.blend.m_Value )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 89, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.blend.m_Value = v3->m_skyboxData.fog.blend.m_Value;
    }
    if ( pl->m_Local.m_skybox3d.fog.m_bNoReflectionFog.m_Value != v3->m_skyboxData.fog.m_bNoReflectionFog.m_Value )
    {
      (*(pl->m_Local.m_skybox3d.fog._vptr_fogparams_t + 1))(&pl->m_Local.m_skybox3d.fog, 90, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pl->m_Local.m_skybox3d.fog.m_bNoReflectionFog.m_Value = v3->m_skyboxData.fog.m_bNoReflectionFog.m_Value;
    }
    pl->m_Local.m_skybox3d.fog.m_bPadding = v3->m_skyboxData.fog.m_bPadding;
    (*(pl->m_Local.m_skybox3d._vptr_sky3dparams_t + 1))(&pl->m_Local.m_skybox3d);
  }
}


// UpdateAllClientData  (line 227, @0x00000000023266a0, libserver.so)
// calls: UTIL_PlayerByIndex, ClientData_Update
// callers: CSource2Server::GameFrame
void __cdecl UpdateAllClientData()
{
  int v0; // ebx
  CBasePlayer *v1; // rax

  v0 = 1;
  if ( gpGlobals->maxClients > 0 )
  {
    do
    {
      v1 = UTIL_PlayerByIndex(v0);
      if ( v1 != 0 )
        ClientData_Update(v1);
      ++v0;
    }
    while ( gpGlobals->maxClients >= v0 );
  }
}


