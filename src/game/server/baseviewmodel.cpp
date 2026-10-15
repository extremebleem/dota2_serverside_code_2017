
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseViewModel::GetDataDescMap  (line 22, @0x0000000002187300, libserver.so)
// globals: CBaseViewModel::m_DataMap
datamap_t *__fastcall CBaseViewModel::GetDataDescMap(CBaseViewModel *const this)
{
  return &CBaseViewModel::m_DataMap;
}


// CBaseViewModel::AddDatadescMetadataKeys  (line 22, @0x0000000002190090, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseViewModel::GetEntityClass(void)
void __fastcall CBaseViewModel::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseViewModel::GetEntityClass);
}


// CBaseViewModel::GetBaseMap  (line 22, @0x00000000021900b0, libserver.so)
datamap_t *__cdecl CBaseViewModel::GetBaseMap()
{
  return &CBaseAnimatingOverlay::m_DataMap;
}


// DataMapInit<CBaseViewModel>  (line 22, @0x00000000021900c0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CUtlVector<CHandle<CVGuiScreen> > >
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CBaseViewModel"
// globals: `guard variable for'DataMapInit<CBaseViewModel>(CBaseViewModel *)::nameHolder, `guard variable for'DataMapInit<CBaseViewModel>(CBaseViewModel *)::dataDesc, CBaseViewModel::GetEntityClass(void), CBaseViewModel::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>>>(CUtlVector<CHandle<CVGu, CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>>>(CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<, DataMapInit<CBaseViewModel>(CBaseViewModel *)::nameHolder, __dso_handle (9 total)
datamap_t *__fastcall DataMapInit<CBaseViewModel>(CBaseViewModel *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseViewModel>(CBaseViewModel *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseViewModel>(CBaseViewModel *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseViewModel>(CBaseViewModel *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseViewModel>(CBaseViewModel *)::nameHolder.m_pszBase = "CBaseViewModel";
    DataMapInit<CBaseViewModel>(CBaseViewModel *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseViewModel>(CBaseViewModel *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseViewModel>(CBaseViewModel *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseViewModel>(CBaseViewModel *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseViewModel>(CBaseViewModel *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseViewModel>(CBaseViewModel *)::nameHolder,
      &_dso_handle);
  }
  CBaseViewModel::m_DataMap.baseMap = &CBaseAnimatingOverlay::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CBaseViewModel>(CBaseViewModel *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseViewModel>(CBaseViewModel *)::dataDesc) != 0 )
  {
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>>>(CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>>>(CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>>>(CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>> *)::ops = off_4014610;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>>>(CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>> *)::ops);
    }
    DataMapInit<CBaseViewModel>(CBaseViewModel *)::dataDesc[6].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>>>(CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>> *)::ops;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseViewModel>(CBaseViewModel *)::dataDesc);
  }
  CBaseViewModel::m_DataMap.dataNumFields = 16;
  CBaseViewModel::m_DataMap.dataDesc = &DataMapInit<CBaseViewModel>(CBaseViewModel *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBaseViewModel::m_DataMap, CBaseViewModel::GetEntityClass);
  return &CBaseViewModel::m_DataMap;
}


// CBaseViewModel::UpdateTransmitState  (line 56, @0x00000000021894d0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CBaseViewModel::UpdateTransmitState(CBaseViewModel *const this)
{
  if ( (this->m_fEffects.m_Value & 0x20) != 0 )
    return CBaseEntity::SetTransmitState(this, 8);
  else
    return CBaseEntity::SetTransmitState(this, 0);
}


// CBaseViewModel::ShouldTransmit  (line 66, @0x00000000021af140, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CBasePlayer*>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToBasePlayer, operator CBasePlayer*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CUtlMemory<CBasePlayer*, int>::Grow, CBasePlayer::GetSplitScreenPlayers, CBasePlayer::IsSplitScreenUserOnEntity, CUtlMemory<CBasePlayer*, int>::Purge, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CBaseViewModel::ShouldTransmit(CBaseViewModel *const this, const CGameCheckTransmitInfo *pInfo)
{
  CEntityInstance *v3; // rax
  CBasePlayer *v4; // rbx
  CBasePlayer *m_pRecipientPlayer; // rbx
  CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int> > *SplitScreenPlayers; // r14
  __int64 v7; // r13
  int v8; // r12d
  int m_Size; // eax
  int v10; // edx
  CBasePlayer **v11; // rax
  CBasePlayer *m_pInstance; // r15
  CHandle<CBasePlayer> *v13; // rdx
  uint32 m_Index; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  int v18; // r14d
  __int64 v20; // r12
  int v21; // r13d
  CBasePlayer *v22; // rbx
  CBasePlayer *v23; // [rsp+10h] [rbp-60h]
  CUtlVector<CBasePlayer*,CUtlMemory<CBasePlayer*,int> > checkList; // [rsp+20h] [rbp-50h] BYREF

  v3 = CEntityHandle::operator CEntityInstance *(&this->m_hOwner.m_Value);
  v4 = v3;
  if ( v3 != 0 && (*(v3->_vptr_IHandleEntity + 140))(v3) != 0 )
  {
    if ( v4 == pInfo->m_pRecipientPlayer
      || CBasePlayer::IsSplitScreenUserOnEntity(v4, pInfo->m_pInfo->m_nClientEntityIndex) )
    {
      return 4;
    }
    v23 = v4;
  }
  else
  {
    v23 = 0;
  }
  m_pRecipientPlayer = pInfo->m_pRecipientPlayer;
  if ( m_pRecipientPlayer == 0 )
    return 8;
  checkList.m_Memory.m_pMemory = 0;
  checkList.m_Memory.m_nAllocationCount = 0;
  checkList.m_Memory.m_nGrowSize = 0;
  CUtlMemory<CBasePlayer *,int>::Grow(&checkList.m_Memory, 1);
  checkList.m_Size = 1;
  if ( checkList.m_Memory.m_pMemory != 0 )
    *checkList.m_Memory.m_pMemory = m_pRecipientPlayer;
  SplitScreenPlayers = CBasePlayer::GetSplitScreenPlayers(m_pRecipientPlayer);
  LODWORD(m_pRecipientPlayer) = 1;
  if ( SplitScreenPlayers->m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    m_pRecipientPlayer = (&loc_0 + 1);
    do
    {
      while ( 1 )
      {
        m_pInstance = 0;
        v13 = &SplitScreenPlayers->m_Memory.m_pMemory[v7];
        m_Index = v13->m_Index;
        if ( v13->m_Index + 2 > 1 )
        {
          v15 = v13->m_Index;
          v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F];
          if ( v16 != 0 )
          {
            v17 = &v16[v15 & 0x1FF];
            if ( v17 != 0 && m_Index == v17->m_EHandle.m_Index )
              m_pInstance = v17->m_pInstance;
          }
        }
        m_Size = m_pRecipientPlayer;
        if ( m_pRecipientPlayer == checkList.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CBasePlayer *,int>::Grow(&checkList.m_Memory, 1);
          m_Size = checkList.m_Size;
        }
        v10 = m_Size + 1;
        checkList.m_Size = m_Size + 1;
        v11 = &checkList.m_Memory.m_pMemory[m_pRecipientPlayer];
        if ( v11 == 0 )
          break;
        *v11 = m_pInstance;
        ++v8;
        ++v7;
        m_pRecipientPlayer = checkList.m_Size;
        if ( SplitScreenPlayers->m_Size <= v8 )
          goto LABEL_24;
      }
      ++v8;
      ++v7;
      m_pRecipientPlayer = v10;
    }
    while ( SplitScreenPlayers->m_Size > v8 );
  }
LABEL_24:
  v20 = 0;
  v21 = 0;
  if ( m_pRecipientPlayer <= 0 )
  {
LABEL_33:
    if ( (checkList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CBasePlayer *,int>::Purge(&checkList.m_Memory);
      if ( (checkList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CBasePlayer *,int>::Purge(&checkList.m_Memory);
    }
    return 8;
  }
  while ( 1 )
  {
    v22 = checkList.m_Memory.m_pMemory[v20];
    if ( v22 != 0 )
    {
      v18 = (*(v22->_vptr_IHandleEntity + 436))(checkList.m_Memory.m_pMemory[v20]);
      if ( v18 == 4 && (*(v22->_vptr_IHandleEntity + 439))(v22) == v23 )
        break;
    }
    ++v21;
    ++v20;
    if ( checkList.m_Size <= v21 )
      goto LABEL_33;
  }
  if ( (checkList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CBasePlayer *,int>::Purge(&checkList.m_Memory);
    if ( (checkList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBasePlayer *,int>::Purge(&checkList.m_Memory);
  }
  return v18;
}


// CBaseViewModel::SetTransmit  (line 114, @0x000000000218bf40, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsAlreadyMarkedForTransmission, IsValid, LookupEntity, entindex, operator CEntityInstance*, operator[]
// calls: CEntityInstance::GetEntityIndex, CBaseAnimating::SetTransmit
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseViewModel::SetTransmit(CBaseViewModel *const this, CCheckTransmitInfo *pInfo, bool bAlways)
{
  CEntityIndex v6; // eax
  __int64 v7; // r12
  int v8; // ebx
  CHandle<CVGuiScreen> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx

  v6.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  if ( ((1 << SLOBYTE(v6.m_Data)) & pInfo->m_pTransmitEdict->m_Ints[v6.m_Data >> 5]) == 0 )
  {
    CBaseAnimating::SetTransmit(this, pInfo, bAlways);
    if ( this->m_hScreens.m_Size > 0 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = &this->m_hScreens.m_Memory.m_pMemory[v7];
        m_Index = v9->m_Index;
        if ( v9->m_Index + 2 > 1 )
        {
          v11 = v9->m_Index;
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = &v12[v11 & 0x1FF];
            if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index && v13->m_pInstance != 0 )
              (*(v13->m_pInstance->_vptr_IHandleEntity + 66))(v13->m_pInstance, pInfo, bAlways);
          }
        }
        ++v8;
        ++v7;
      }
      while ( this->m_hScreens.m_Size > v8 );
    }
  }
}


