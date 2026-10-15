
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// prevent_interaction_t::AddDatadescMetadataKeys  (line 100, @0x00000000021cd190, libserver.so)
void __fastcall prevent_interaction_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// prevent_interaction_t::GetBaseMap  (line 100, @0x00000000021cd1a0, libserver.so)
datamap_t *__cdecl prevent_interaction_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<prevent_interaction_t>  (line 100, @0x00000000021cd1b0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "prevent_interaction_t"
// globals: `guard variable for'DataMapInit<prevent_interaction_t>(prevent_interaction_t *)::nameHolder, prevent_interaction_t::m_DataMap, DataMapInit<prevent_interaction_t>(prevent_interaction_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<prevent_interaction_t>(prevent_interaction_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<prevent_interaction_t>(prevent_interaction_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<prevent_interaction_t>(prevent_interaction_t *)::nameHolder) != 0 )
  {
    DataMapInit<prevent_interaction_t>(prevent_interaction_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<prevent_interaction_t>(prevent_interaction_t *)::nameHolder.m_pszBase = "prevent_interaction_t";
    DataMapInit<prevent_interaction_t>(prevent_interaction_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<prevent_interaction_t>(prevent_interaction_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<prevent_interaction_t>(prevent_interaction_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<prevent_interaction_t>(prevent_interaction_t *)::nameHolder.m_nLenBase = 21;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<prevent_interaction_t>(prevent_interaction_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<prevent_interaction_t>(prevent_interaction_t *)::nameHolder,
      &_dso_handle);
  }
  prevent_interaction_t::m_DataMap.baseMap = 0;
  prevent_interaction_t::m_DataMap.dataDesc = &DataMapInit<prevent_interaction_t>(prevent_interaction_t *)::dataDesc[1];
  prevent_interaction_t::m_DataMap.dataNumFields = 2;
  return &prevent_interaction_t::m_DataMap;
}


// CInteractionManager::AddDatadescMetadataKeys  (line 105, @0x00000000021cd270, libserver.so)
void __fastcall CInteractionManager::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CInteractionManager::GetBaseMap  (line 105, @0x00000000021cd280, libserver.so)
datamap_t *__cdecl CInteractionManager::GetBaseMap()
{
  return 0;
}


// DataMapInit<CInteractionManager>  (line 105, @0x00000000021cd290, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CUtlVector<prevent_interaction_t> >
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CInteractionManager"
// globals: `guard variable for'DataMapInit<CInteractionManager>(CInteractionManager *)::nameHolder, `guard variable for'DataMapInit<CInteractionManager>(CInteractionManager *)::dataDesc, CInteractionManager::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>>>(CUtlVector<prevent_in, CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>>>(CUtlVector<prevent_interaction_t,CUtlMemo, DataMapInit<CInteractionManager>(CInteractionManager *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CInteractionManager>(CInteractionManager *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CInteractionManager>(CInteractionManager *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CInteractionManager>(CInteractionManager *)::nameHolder) != 0 )
  {
    DataMapInit<CInteractionManager>(CInteractionManager *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CInteractionManager>(CInteractionManager *)::nameHolder.m_pszBase = "CInteractionManager";
    DataMapInit<CInteractionManager>(CInteractionManager *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CInteractionManager>(CInteractionManager *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CInteractionManager>(CInteractionManager *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CInteractionManager>(CInteractionManager *)::nameHolder.m_nLenBase = 19;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CInteractionManager>(CInteractionManager *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CInteractionManager>(CInteractionManager *)::nameHolder,
      &_dso_handle);
  }
  CInteractionManager::m_DataMap.baseMap = 0;
  if ( `guard variable for'datamap_t * DataMapInit<CInteractionManager>(CInteractionManager *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CInteractionManager>(CInteractionManager *)::dataDesc) != 0 )
  {
    DataMapInit<CInteractionManager>(CInteractionManager *)::dataDesc[9].fieldSize = 4;
    DataMapInit<CInteractionManager>(CInteractionManager *)::dataDesc[10].fieldSize = 4;
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>>>(CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>>>(CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>>>(CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>> *)::ops = off_4029010;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>>>(CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>> *)::ops);
    }
    DataMapInit<CInteractionManager>(CInteractionManager *)::dataDesc[12].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>>>(CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>> *)::ops;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CInteractionManager>(CInteractionManager *)::dataDesc);
  }
  CInteractionManager::m_DataMap.dataNumFields = 12;
  CInteractionManager::m_DataMap.dataDesc = &DataMapInit<CInteractionManager>(CInteractionManager *)::dataDesc[1];
  return &CInteractionManager::m_DataMap;
}


// CInteractionManager::CInteractionManager  (line 125, @0x00000000021cd400, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, Set, SetToIdentity, memset, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: SetIdentityMatrix, _Unwind_Resume, CUtlMemory<prevent_interaction_t, int>::Purge
// callers: CPropVRHand::CPropVRHand
void __fastcall CInteractionManager::CInteractionManager(CInteractionManager *const this)
{
  matrix3x4_t *p_m_mInteractionTransformInit; // rdi

  p_m_mInteractionTransformInit = &this->m_mInteractionTransformInit;
  *&p_m_mInteractionTransformInit[-2].m_flMatVal[1][2] = &off_4022A80;
  p_m_mInteractionTransformInit[-1].m_flMatVal[2][1] = NAN;
  p_m_mInteractionTransformInit[-1].m_flMatVal[2][2] = NAN;
  p_m_mInteractionTransformInit[-1].m_flMatVal[2][3] = NAN;
  p_m_mInteractionTransformInit[2].m_flMatVal[1][0] = 0.0;
  *&p_m_mInteractionTransformInit[2].m_flMatVal[1][2] = 0;
  p_m_mInteractionTransformInit[2].m_flMatVal[2][0] = 0.0;
  p_m_mInteractionTransformInit[2].m_flMatVal[2][1] = 0.0;
  p_m_mInteractionTransformInit[-2].m_flMatVal[2][0] = NAN;
  SetIdentityMatrix(p_m_mInteractionTransformInit);
  SetIdentityMatrix(&this->m_mInteractionTransformTarget);
  this->m_flInteractionLerp = 0.0;
  *this->m_bSelfInteractionRequirementMet = 0;
  *this->m_bInteractionsDisabled = 0;
  this->m_bAllInteractionsDisabled = 0;
  this->m_hSelf.m_Index = -1;
  this->m_hPlayer.m_Index = -1;
}


// CInteractionManager::SetSelfObject  (line 142, @0x00000000021d5150, libserver.so)  // inlines: CUtlSymbolLarge, CancelActiveInteraction, FStrEq, Get, GetClassName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, RecalculateAllInteractionsDisabled, Set, _V_strcmp, memset, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator!=, operator->, operator=
// calls: CInteractionManager::StopInteraction, strcmp
// globals: CEntityHandle::gm_pEntityList, g_HandInteractions
void __fastcall CInteractionManager::SetSelfObject(
        CInteractionManager *const this,
        CBaseAnimating *pSelf,
        CBaseEntity *pIfOldObjectIsThis)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v6; // rcx
  unsigned int v7; // esi
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v9; // rsi
  __int64 v10; // r8
  CEntityIdentity *v11; // rdi
  CBaseAnimating *m_pInstance; // rdx
  unsigned __int16 v13; // si
  CEntityIdentity *v14; // rdi
  CEntityIdentity *v15; // rsi
  CEntityIdentity *m_pEntity; // rdx
  int v17; // eax
  __int16 v18; // si
  uint32 v19; // edx
  char *v20; // r14
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 i; // r12
  const char *pszSelfClassname; // rsi
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 *v29; // rax
  const char *v30; // rdi
  int v31; // eax
  uint32 v32; // [rsp+Ch] [rbp-34h]

  m_Index = this->m_hSelf.m_Index;
  v6 = CEntityHandle::gm_pEntityList;
  v7 = m_Index + 2;
  if ( pIfOldObjectIsThis != 0 )
  {
    if ( v7 <= 1 )
      return;
    m_Index_low = LOWORD(this->m_hSelf.m_Index);
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v9 == 0 )
      return;
    v10 = m_Index_low & 0x1FF;
    v11 = &v9[v10];
    if ( v11 == 0 || m_Index != v11->m_EHandle.m_Index || pIfOldObjectIsThis != v11->m_pInstance )
      return;
    v15 = &v9[v10];
  }
  else
  {
    m_pInstance = 0;
    if ( v7 <= 1 )
      goto LABEL_12;
    v13 = this->m_hSelf.m_Index;
    v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v13 >> 9) & 0x3F];
    if ( v14 == 0 )
      goto LABEL_12;
    v15 = &v14[v13 & 0x1FF];
    if ( v15 == 0 )
      goto LABEL_12;
  }
  m_pInstance = 0;
  if ( m_Index == v15->m_EHandle.m_Index )
    m_pInstance = v15->m_pInstance;
LABEL_12:
  if ( pSelf != m_pInstance )
  {
    if ( this->m_nActiveInteraction != interactions_t::INTERACTION_NONE )
    {
      CInteractionManager::StopInteraction(this, 0);
      v6 = CEntityHandle::gm_pEntityList;
    }
    if ( pSelf != 0 && (m_pEntity = pSelf->m_pEntity) != 0 )
    {
      v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v18 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hSelf.m_Index) = v18 | this->m_hSelf.m_Index & 0x8000;
      this->m_hSelf.m_Index = (v17 << 15) | this->m_hSelf.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hSelf.m_Index = -1;
    }
    *this->m_bInteractionsDisabled = 0;
    v19 = this->m_hSelf.m_Index;
    if ( v19 + 2 > 1 )
    {
      v20 = &v6->m_Lock.gap0 + ((LOWORD(this->m_hSelf.m_Index) >> 6) & 0x1F8);
      v21 = *(v20 + 1);
      if ( v21 != 0 )
      {
        v22 = 120LL * (this->m_hSelf.m_Index & 0x1FF);
        v23 = v22 + v21;
        if ( v23 != 0 && v19 == *(v23 + 16) )
        {
          for ( i = 0; i != 4; ++i )
          {
            this->m_bSelfInteractionRequirementMet[i] = 1;
            pszSelfClassname = g_HandInteractions[i].pszSelfClassname;
            if ( pszSelfClassname != 0 && *pszSelfClassname != 0 )
            {
              v27 = *(v20 + 1);
              v28 = 0;
              if ( v27 != 0 )
              {
                v29 = (v22 + v27);
                if ( v29 != 0 && v19 == *(v29 + 4) )
                  v28 = *v29;
              }
              v30 = *(*(v28 + 8) + 32LL);
              if ( v30 == 0 )
                v30 = "";
              if ( pszSelfClassname != v30 )
              {
                v32 = v19;
                v31 = strcmp(v30, pszSelfClassname);
                v19 = v32;
                if ( v31 != 0 )
                  this->m_bSelfInteractionRequirementMet[i] = 0;
              }
            }
          }
        }
      }
    }
    this->m_bAllInteractionsDisabled = 1;
    v24 = 0;
    while ( this->m_bInteractionsDisabled[v24] || !this->m_bSelfInteractionRequirementMet[v24] )
    {
      if ( ++v24 == 4 )
        return;
    }
    this->m_bAllInteractionsDisabled = 0;
  }
}


// CInteractionManager::SetInteractionDisabled  (line 179, @0x00000000021cd4f0, libserver.so)  // inlines: RecalculateAllInteractionsDisabled
void __fastcall CInteractionManager::SetInteractionDisabled(
        CInteractionManager *const this,
        interactions_t nInteraction,
        bool bDisabled)
{
  __int64 v3; // rax

  v3 = 0;
  this->m_bInteractionsDisabled[nInteraction] = bDisabled;
  this->m_bAllInteractionsDisabled = 1;
  while ( this->m_bInteractionsDisabled[v3] || !this->m_bSelfInteractionRequirementMet[v3] )
  {
    if ( ++v3 == 4 )
      return;
  }
  this->m_bAllInteractionsDisabled = 0;
}


// CInteractionManager::PreventInteractionsWith  (line 188, @0x00000000021dbac0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, Construct<prevent_interaction_t>, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Set, operator CEntityInstance*, operator=, operator==, operator[], prevent_interaction_t
// calls: CGlobalVarsBase::curtime, CUtlMemory<prevent_interaction_t, int>::Grow
// globals: CEntityHandle::gm_pEntityList
void __fastcall CInteractionManager::PreventInteractionsWith(
        CInteractionManager *const this,
        CBaseEntity *pOther,
        float a3,
        float flDuration)
{
  float v4; // xmm2_4
  __int64 m_Size; // rbx
  int v8; // edx
  prevent_interaction_t *m_pMemory; // rax
  CBaseEntity *m_pInstance; // r9
  uint32 m_Index; // ecx
  CEntityIdentity *v12; // r8
  CEntityIdentity *v13; // r8
  prevent_interaction_t *v14; // rbx
  float v15; // xmm0_4
  int v16; // eax
  __int64 v17; // rbx
  prevent_interaction_t *v18; // rax
  prevent_interaction_t *v19; // rcx
  CEntityIdentity *m_pEntity; // rdx
  int v21; // eax
  __int16 v22; // si

  v4 = a3;
  m_Size = this->m_vecPreventionEntities.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_14:
    v16 = this->m_vecPreventionEntities.m_Size;
    if ( this->m_vecPreventionEntities.m_Memory.m_nAllocationCount == m_Size )
    {
      CUtlMemory<prevent_interaction_t,int>::Grow(&this->m_vecPreventionEntities.m_Memory, 1);
      v16 = this->m_vecPreventionEntities.m_Size;
      v4 = a3;
    }
    v17 = m_Size;
    this->m_vecPreventionEntities.m_Size = v16 + 1;
    v18 = &this->m_vecPreventionEntities.m_Memory.m_pMemory[v17];
    if ( v18 != 0 )
    {
      v18->m_hEntity.m_Index = -1;
      v18->_vptr_prevent_interaction_t = &off_4022A60;
      v19 = &this->m_vecPreventionEntities.m_Memory.m_pMemory[v17];
    }
    else
    {
      v19 = 0;
    }
    if ( pOther != 0 && (m_pEntity = pOther->m_pEntity) != 0 )
    {
      v21 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v22 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v19->m_hEntity.m_Index) = v22 | v19->m_hEntity.m_Index & 0x8000;
      v19->m_hEntity.m_Index = (v21 << 15) | v19->m_hEntity.m_Index & 0x7FFF;
      v14 = &this->m_vecPreventionEntities.m_Memory.m_pMemory[v17];
    }
    else
    {
      v19->m_hEntity.m_Index = -1;
      v14 = &this->m_vecPreventionEntities.m_Memory.m_pMemory[v17];
    }
  }
  else
  {
    v8 = 0;
    m_pMemory = this->m_vecPreventionEntities.m_Memory.m_pMemory;
    while ( 1 )
    {
      m_pInstance = 0;
      m_Index = m_pMemory->m_hEntity.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_hEntity.m_Index) >> 9) & 0x3F];
        if ( v12 != 0 )
        {
          v13 = &v12[m_pMemory->m_hEntity.m_Index & 0x1FF];
          if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
            m_pInstance = v13->m_pInstance;
        }
      }
      if ( pOther == m_pInstance )
        break;
      ++v8;
      ++m_pMemory;
      if ( v8 == m_Size )
        goto LABEL_14;
    }
    v14 = m_pMemory;
  }
  v15 = 0.0;
  if ( v4 > 0.0 )
    v15 = CGlobalVarsBase::curtime(gpGlobals, 0) + v4;
  v14->m_flUntilTime = v15;
}


// CInteractionManager::RecalculateAllInteractionsDisabled  (line 212, @0x00000000021cd540, libserver.so)
void __fastcall CInteractionManager::RecalculateAllInteractionsDisabled(CInteractionManager *const this)
{
  __int64 v1; // rax

  v1 = 0;
  this->m_bAllInteractionsDisabled = 1;
  while ( this->m_bInteractionsDisabled[v1] || !this->m_bSelfInteractionRequirementMet[v1] )
  {
    if ( ++v1 == 4 )
      return;
  }
  this->m_bAllInteractionsDisabled = 0;
}


// CInteractionManager::CancelActiveInteraction  (line 228, @0x00000000021d5140, libserver.so)
// calls: CInteractionManager::StopInteraction
void __fastcall CInteractionManager::CancelActiveInteraction(CInteractionManager *const this)
{
  CInteractionManager::StopInteraction(this, 0);
}


// CInteractionManager::Think  (line 236, @0x00000000021d7cb0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator!
// calls: CInteractionManager::UpdateInteraction, CInteractionManager::LookForInteractions
// callers: CPropVRHand::AttachmentsThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CInteractionManager::Think(CInteractionManager *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  m_Index = this->m_hSelf.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSelf.m_Index) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[this->m_hSelf.m_Index & 0x1FF];
      if ( v3 != 0 && m_Index == v3->m_EHandle.m_Index && v3->m_pInstance != 0 )
      {
        v4 = this->m_hPlayer.m_Index;
        if ( v4 + 2 > 1 )
        {
          v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
          if ( v5 != 0 )
          {
            v6 = &v5[this->m_hPlayer.m_Index & 0x1FF];
            if ( v6 != 0 && v4 == v6->m_EHandle.m_Index && v6->m_pInstance != 0 && !this->m_bAllInteractionsDisabled )
            {
              if ( this->m_nActiveInteraction == interactions_t::INTERACTION_NONE )
                CInteractionManager::LookForInteractions(this);
              else
                CInteractionManager::UpdateInteraction(this);
            }
          }
        }
      }
    }
  }
}


// CInteractionManager::LookForInteractions  (line 254, @0x00000000021d7790, libserver.so)  // inlines: CalcNearestPoint, ConvertToExternalMemory, Get, GetClassNameAsCStr, GetClassname, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetInt, IndexToIdentity, IsValid, LengthSqr, LookupEntity, NextEntity, Purge, Purge_FixedGrowable, Remove, RemoveAll, String, VectorSubtract, curtime, operator CBaseEntity*, operator CEntityInstance*, operator-, operator->, operator=, operator==, operator[], ~CEntitySphereQuery, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CEntityHandle::operator CEntityInstance*, CEntitySphereQuery::CEntitySphereQuery, CEntitySphereQuery::GetCurrentEntity, CUtlVectorBase<prevent_interaction_t, CUtlMemory<prevent_interaction_t, int> >::ShiftElementsLeft, CCollisionProperty::CalcNearestPoint, CInteractionManager::TestInteractionsWithEntity, CBaseEntity::GetAbsOrigin, CUtlMemory<COverlapHit, int>::Purge, CInteractionManager::StartInteraction, __stack_chk_fail, CUtlVectorBase<COverlapHit, CUtlMemoryFixedGrowable<COverlapHit, 64ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CInteractionManager::Think
// globals: CEntityHandle::gm_pEntityList
void __fastcall CInteractionManager::LookForInteractions(CInteractionManager *const this)
{
  CEntityInstance *v2; // rax
  float v3; // xmm1_4
  CBaseEntity *CurrentEntity; // r15
  uint32 m_Index; // eax
  CConcreteEntityList *v6; // rsi
  CEntityIdentity *v7; // rdx
  __int64 v8; // rcx
  CEntityIdentity *v9; // rdx
  int v10; // r12d
  __int64 v11; // rbx
  prevent_interaction_t *v12; // rax
  uint32 v13; // edx
  unsigned __int16 v14; // cx
  CEntityIdentity *v15; // rax
  __int64 v16; // rcx
  CEntityIdentity *v17; // rax
  CGlobalVars *v18; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm0_4
  int v21; // esi
  const CCollisionProperty *m_pCollision; // rdi
  float x; // xmm1_4
  float y; // xmm0_4
  float z; // xmm2_4
  interactions_t v26; // eax
  uint32 v27; // eax
  const Vector *AbsOrigin; // rax
  void (__fastcall *v29)(ISceneViewDebugOverlays *, Vector *, const Vector *, _QWORD, __int64, _QWORD, double, int); // r12
  const Vector *v30; // rax
  const char *m_pAsString; // r8
  CEntityIdentity *m_pEntity; // rax
  interactions_t nInteractionFound; // [rsp+Ch] [rbp-10B4h]
  CBaseEntity *pInteractionTargetFound; // [rsp+10h] [rbp-10B0h]
  float flNearestSqr; // [rsp+38h] [rbp-1088h]
  float flNearestSqr_0; // [rsp+3Ch] [rbp-1084h]
  float flNearestSqr_0a; // [rsp+3Ch] [rbp-1084h]
  Vector vecPos; // [rsp+40h] [rbp-1080h] BYREF
  Vector vecNearestPoint; // [rsp+50h] [rbp-1070h] BYREF
  CEntitySphereQuery sphere; // [rsp+60h] [rbp-1060h] BYREF
  unsigned __int64 v41; // [rsp+1088h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  v2 = CEntityHandle::operator CEntityInstance *(&this->m_hSelf);
  *&vecPos.x = (*(v2->_vptr_IHandleEntity + 62))(v2);
  vecPos.z = v3;
  CEntitySphereQuery::CEntitySphereQuery(&sphere, &vecPos, vr_interaction_dist_search.m_pParent->m_Value.m_fValue, v3);
  flNearestSqr = 99980000.0;
  pInteractionTargetFound = 0;
  nInteractionFound = interactions_t::INTERACTION_NONE;
  while ( 1 )
  {
    CurrentEntity = CEntitySphereQuery::GetCurrentEntity(&sphere);
    if ( CurrentEntity == 0 )
      break;
    m_Index = this->m_hSelf.m_Index;
    v6 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSelf.m_Index) >> 9) & 0x3F]) == 0
      || (v8 = this->m_hSelf.m_Index & 0x1FF, v6 = (8 * v8), (v9 = &v7[v8]) == 0)
      || m_Index != v9->m_EHandle.m_Index
      || CurrentEntity != v9->m_pInstance )
    {
      v10 = this->m_vecPreventionEntities.m_Size - 1;
      if ( v10 >= 0 )
      {
        v11 = v10;
        while ( 1 )
        {
          v12 = &this->m_vecPreventionEntities.m_Memory.m_pMemory[v11];
          flNearestSqr_0 = v12->m_flUntilTime;
          if ( flNearestSqr_0 <= 0.0 )
            goto LABEL_10;
          v18 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
                (m_pfnWarningFunc)(1, v6);
            }
            m_flCurrentTime = v18->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          if ( m_flCurrentTime <= flNearestSqr_0 )
          {
            v12 = &this->m_vecPreventionEntities.m_Memory.m_pMemory[v11];
LABEL_10:
            v13 = v12->m_hEntity.m_Index;
            v6 = CEntityHandle::gm_pEntityList;
            if ( v13 + 2 > 1 )
            {
              v14 = v12->m_hEntity.m_Index;
              v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v14 >> 9) & 0x3F];
              if ( v15 != 0 )
              {
                v16 = v14 & 0x1FF;
                v6 = (8 * v16);
                v17 = &v15[v16];
                if ( v17 != 0 && v13 == v17->m_EHandle.m_Index && CurrentEntity == v17->m_pInstance )
                  goto LABEL_27;
              }
            }
            --v10;
            --v11;
            if ( v10 == -1 )
              break;
          }
          else
          {
            v21 = v10--;
            --v11;
            CUtlVectorBase<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>>::ShiftElementsLeft(
              &this->m_vecPreventionEntities,
              v21,
              1);
            --this->m_vecPreventionEntities.m_Size;
            if ( v10 == -1 )
              break;
          }
        }
      }
      m_pCollision = CurrentEntity->m_pCollision;
      if ( m_pCollision != 0 )
      {
        CCollisionProperty::CalcNearestPoint(m_pCollision, &vecPos, &vecNearestPoint);
        x = vecNearestPoint.x;
        y = vecNearestPoint.y;
        z = vecNearestPoint.z;
      }
      else
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(CurrentEntity);
        x = AbsOrigin->x;
        y = AbsOrigin->y;
        z = AbsOrigin->z;
        vecNearestPoint.x = AbsOrigin->x;
        vecNearestPoint.y = y;
        vecNearestPoint.z = z;
      }
      flNearestSqr_0a = ((vecPos.z - z) * (vecPos.z - z))
                      + (((vecPos.y - y) * (vecPos.y - y)) + ((vecPos.x - x) * (vecPos.x - x)));
      if ( flNearestSqr > flNearestSqr_0a )
      {
        v26 = CInteractionManager::TestInteractionsWithEntity(this, CurrentEntity);
        if ( v26 != interactions_t::INTERACTION_NONE )
        {
          pInteractionTargetFound = CurrentEntity;
          nInteractionFound = v26;
          flNearestSqr = flNearestSqr_0a;
        }
      }
    }
LABEL_27:
    ++sphere.m_listIndex;
  }
  sphere.m_results.m_list.m_Size = 0;
  v27 = sphere.m_results.m_list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( sphere.m_results.m_list.m_Memory.m_nAllocationCount >= 0
    && sphere.m_results.m_list.m_Memory.m_pMemory != &sphere.m_results.m_list.m_Memory.m_FixedMemory )
  {
    if ( sphere.m_results.m_list.m_Memory.m_pMemory != 0 && v27 == 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
LABEL_36:
    if ( vr_interaction_debug.m_pParent->m_Value.m_nValue != 2 )
      goto LABEL_37;
    goto LABEL_42;
  }
  if ( v27 != 0 )
    goto LABEL_36;
  CUtlMemory<COverlapHit,int>::Purge(&sphere.m_results.m_list.m_Memory);
  if ( vr_interaction_debug.m_pParent->m_Value.m_nValue != 2 )
  {
LABEL_37:
    if ( nInteractionFound == interactions_t::INTERACTION_NONE )
      return;
    goto LABEL_45;
  }
LABEL_42:
  v29 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 50);
  v30 = CBaseEntity::GetAbsOrigin(pInteractionTargetFound);
  v29(debugoverlay, &vecPos, v30, 0, 255, 0, 0.009999999776482582, 1);
  m_pAsString = "";
  m_pEntity = pInteractionTargetFound->m_pEntity;
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 54))(debugoverlay, &vecPos, 0, "%s", m_pAsString);
  if ( nInteractionFound != interactions_t::INTERACTION_NONE )
  {
LABEL_45:
    if ( pInteractionTargetFound != 0 )
      CInteractionManager::StartInteraction(this, nInteractionFound, pInteractionTargetFound);
  }
}


// CInteractionManager::StartInteraction  (line 320, @0x00000000021d4950, libserver.so)  // inlines: CVariantBase, Free, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetInt, operator CBaseEntity*, operator CEntityInstance*, operator->, operator=, ~CVariantBase
// calls: PhysDisableEntityCollisions, CEntityInstance::AcceptInput, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CInteractionManager::LookForInteractions
// strings: "HandInteractionStarted"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CInteractionManager::StartInteraction(
        CInteractionManager *const this,
        interactions_t nInteractionMatched,
        CBaseEntity *pWithEntity)
{
  CEntityIdentity *m_pEntity; // rdx
  int v6; // eax
  __int16 v7; // cx
  __int16 v8; // si
  CConcreteEntityList *v9; // rcx
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  __int64 v12; // rsi
  bool v13; // zf
  CEntityIdentity *v14; // rdx
  CBaseEntity *m_pInstance; // rsi
  uint32 m_Index; // eax
  CBaseEntity *v17; // rdi
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  interactions_t m_nActiveInteraction; // eax
  CEntityInstance *v21; // rcx
  uint32 v22; // eax
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  uint32 v25; // eax
  CEntityInstance *v26; // rdx
  CEntityIdentity *v27; // rsi
  CEntityIdentity *v28; // rsi
  uint32 v29; // eax
  CEntityInstance *v30; // rdx
  CEntityIdentity *v31; // rcx
  CEntityIdentity *v32; // rcx
  uint32 v33; // eax
  CEntityInstance *v34; // rdi
  CEntityIdentity *v35; // rcx
  CEntityIdentity *v36; // rcx
  variant_t sVariant; // [rsp+0h] [rbp-30h] BYREF

  this->m_nActiveInteraction = nInteractionMatched;
  if ( pWithEntity != 0 && (m_pEntity = pWithEntity->m_pEntity) != 0 )
  {
    v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v7 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v8 = v7 | this->m_hInteractionTarget.m_Index & 0x8000;
    v9 = CEntityHandle::gm_pEntityList;
    LOWORD(this->m_hInteractionTarget.m_Index) = v8;
    v10 = (v6 << 15) | this->m_hInteractionTarget.m_Index & 0x7FFF;
    this->m_hInteractionTarget.m_Index = v10;
    if ( v10 + 2 > 1 && (v11 = v9->m_pIdentityChunks[(LOWORD(this->m_hInteractionTarget.m_Index) >> 9) & 0x3F]) != 0 )
    {
      v12 = this->m_hInteractionTarget.m_Index & 0x1FF;
      v13 = &v11[v12] == 0;
      v14 = &v11[v12];
      m_pInstance = 0;
      if ( !v13 && v14->m_EHandle.m_Index == v10 )
        m_pInstance = v14->m_pInstance;
    }
    else
    {
      m_pInstance = 0;
    }
  }
  else
  {
    this->m_hInteractionTarget.m_Index = -1;
    v9 = CEntityHandle::gm_pEntityList;
    m_pInstance = 0;
  }
  m_Index = this->m_hSelf.m_Index;
  v17 = 0;
  if ( m_Index + 2 > 1 )
  {
    v18 = v9->m_pIdentityChunks[(LOWORD(this->m_hSelf.m_Index) >> 9) & 0x3F];
    if ( v18 != 0 )
    {
      v19 = &v18[this->m_hSelf.m_Index & 0x1FF];
      if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
        v17 = v19->m_pInstance;
    }
  }
  PhysDisableEntityCollisions(v17, m_pInstance);
  sVariant.m_uint64 = 0;
  sVariant.m_flags = 0;
  m_nActiveInteraction = this->m_nActiveInteraction;
  sVariant.m_type = 5;
  v21 = 0;
  sVariant.m_int = m_nActiveInteraction;
  v22 = this->m_hSelf.m_Index;
  if ( v22 + 2 > 1 )
  {
    v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSelf.m_Index) >> 9) & 0x3F];
    if ( v23 != 0 )
    {
      v24 = &v23[this->m_hSelf.m_Index & 0x1FF];
      if ( v24 != 0 && v22 == v24->m_EHandle.m_Index )
        v21 = v24->m_pInstance;
    }
  }
  v25 = this->m_hPlayer.m_Index;
  v26 = 0;
  if ( v25 + 2 > 1 )
  {
    v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
    if ( v27 != 0 )
    {
      v28 = &v27[this->m_hPlayer.m_Index & 0x1FF];
      if ( v28 != 0 && v25 == v28->m_EHandle.m_Index )
        v26 = v28->m_pInstance;
    }
  }
  CEntityInstance::AcceptInput(pWithEntity, "HandInteractionStarted", v26, v21, &sVariant, 1);
  v29 = this->m_hPlayer.m_Index;
  v30 = 0;
  if ( v29 + 2 > 1 )
  {
    v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
    if ( v31 != 0 )
    {
      v32 = &v31[this->m_hPlayer.m_Index & 0x1FF];
      if ( v32 != 0 && v29 == v32->m_EHandle.m_Index )
        v30 = v32->m_pInstance;
    }
  }
  v33 = this->m_hSelf.m_Index;
  v34 = 0;
  if ( v33 + 2 > 1 )
  {
    v35 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSelf.m_Index) >> 9) & 0x3F];
    if ( v35 != 0 )
    {
      v36 = &v35[this->m_hSelf.m_Index & 0x1FF];
      if ( v36 != 0 && v33 == v36->m_EHandle.m_Index )
        v34 = v36->m_pInstance;
    }
  }
  CEntityInstance::AcceptInput(v34, "HandInteractionStarted", v30, pWithEntity, &sVariant, 1);
  if ( (sVariant.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, sVariant.m_uint64);
}


// CInteractionManager::StopInteraction  (line 339, @0x00000000021d4c80, libserver.so)  // inlines: CEntityHandle, CHandle, CVariantBase, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Set, SetInt, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator->, operator=, ~CVariantBase
// calls: CEntityInstance::AcceptInput, CEntityHandle::operator CEntityInstance*, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume, PhysEnableEntityCollisions
// callers: CInteractionManager::CancelActiveInteraction, CInteractionManager::SetSelfObject, CInteractionManager::UpdateInteraction
// strings: "HandInteractionSucceeded", "HandInteractionFailed"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CInteractionManager::StopInteraction(CInteractionManager *const this, bool bSuccess)
{
  interactions_t m_nActiveInteraction; // r15d
  uint32 m_Index; // r12d
  __int64 v5; // r13
  CEntityIdentity *v6; // rdx
  __int64 v7; // r14
  CConcreteEntityList *v8; // rax
  CEntityIdentity *v9; // rsi
  CEntityIdentity *v10; // rdx
  bool v11; // zf
  uint32 v12; // edx
  CEntityInstance *v13; // rcx
  unsigned int v14; // esi
  CEntityIdentity *v15; // rsi
  CEntityIdentity *v16; // rsi
  uint32 v17; // esi
  CEntityInstance *v18; // rdx
  CEntityIdentity *v19; // rdi
  CEntityIdentity *v20; // rdi
  CEntityIdentity *v21; // rax
  CEntityInstance *v22; // rdi
  CEntityIdentity *v23; // rax
  CEntityIdentity *v24; // rax
  CEntityInstance *v25; // r13
  CEntityIdentity *v26; // r14
  uint32 v27; // eax
  CEntityInstance *v28; // r12
  CEntityIdentity *v29; // rdx
  CEntityIdentity *v30; // rdx
  CEntityInstance *v31; // rax
  CEntityIdentity *v32; // rsi
  CEntityIdentity *v33; // rsi
  uint32 v34; // esi
  CEntityInstance *v35; // rdx
  CEntityIdentity *v36; // rdi
  CEntityIdentity *v37; // rdi
  CEntityIdentity *v38; // rax
  CEntityInstance *v39; // rdi
  CEntityIdentity *v40; // rax
  CEntityIdentity *v41; // rax
  CEntityInstance *v42; // r13
  CEntityIdentity *v43; // r14
  uint32 v44; // eax
  CEntityInstance *v45; // r12
  CEntityIdentity *v46; // rdx
  CEntityIdentity *v47; // rdx
  CEntityInstance *v48; // rax
  uint32 v49; // r9d
  CBaseEntity *m_pInstance; // rsi
  unsigned __int16 v51; // dx
  CEntityIdentity *v52; // rax
  CBaseEntity *v53; // rdi
  CEntityIdentity *v54; // rax
  CHandle<CBaseAnimating> *p_m_hSelf; // [rsp+8h] [rbp-58h]
  variant_t sVariant; // [rsp+20h] [rbp-40h] BYREF

  m_nActiveInteraction = this->m_nActiveInteraction;
  if ( m_nActiveInteraction != interactions_t::INTERACTION_NONE )
  {
    m_Index = this->m_hInteractionTarget.m_Index;
    this->m_nActiveInteraction = interactions_t::INTERACTION_NONE;
    this->m_hInteractionTarget.m_Index = -1;
    if ( m_Index + 2 > 1 )
    {
      v5 = (m_Index & 0x7FFF) >> 9;
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v5];
      if ( v6 != 0 )
      {
        v7 = m_Index & 0x1FF;
        v8 = CEntityHandle::gm_pEntityList;
        v9 = &v6[v7];
        if ( &v6[v7] == 0 || m_Index != v9->m_EHandle.m_Index )
          goto LABEL_6;
        v49 = this->m_hSelf.m_Index;
        m_pInstance = v9->m_pInstance;
        if ( v49 + 2 > 1
          && (v51 = this->m_hSelf.m_Index,
              (v52 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v51 >> 9) & 0x3F]) != 0) )
        {
          v53 = 0;
          v54 = &v52[v51 & 0x1FF];
          if ( v54 != 0 && v49 == v54->m_EHandle.m_Index )
            v53 = v54->m_pInstance;
        }
        else
        {
          v53 = 0;
        }
        PhysEnableEntityCollisions(v53, m_pInstance);
        v8 = CEntityHandle::gm_pEntityList;
        v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v5];
        if ( v6 != 0 )
        {
LABEL_6:
          v10 = &v6[v7];
          if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
          {
            v11 = !bSuccess;
            sVariant.m_uint64 = 0;
            v12 = this->m_hSelf.m_Index;
            p_m_hSelf = &this->m_hSelf;
            v13 = 0;
            sVariant.m_flags = 0;
            sVariant.m_type = 5;
            sVariant.m_int = m_nActiveInteraction;
            v14 = v12 + 2;
            if ( v11 )
            {
              if ( v14 > 1 )
              {
                v32 = v8->m_pIdentityChunks[(LOWORD(this->m_hSelf.m_Index) >> 9) & 0x3F];
                if ( v32 != 0 )
                {
                  v33 = &v32[this->m_hSelf.m_Index & 0x1FF];
                  if ( v33 != 0 && v12 == v33->m_EHandle.m_Index )
                    v13 = v33->m_pInstance;
                }
              }
              v34 = this->m_hPlayer.m_Index;
              v35 = 0;
              if ( v34 + 2 > 1 )
              {
                v36 = v8->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
                if ( v36 != 0 )
                {
                  v37 = &v36[this->m_hPlayer.m_Index & 0x1FF];
                  if ( v37 != 0 && v34 == v37->m_EHandle.m_Index )
                    v35 = v37->m_pInstance;
                }
              }
              v38 = v8->m_pIdentityChunks[v5];
              if ( v38 != 0 )
              {
                v39 = 0;
                v40 = &v38[v7];
                if ( v40 != 0 && m_Index == v40->m_EHandle.m_Index )
                  v39 = v40->m_pInstance;
              }
              else
              {
                v39 = 0;
              }
              CEntityInstance::AcceptInput(v39, "HandInteractionFailed", v35, v13, &sVariant, 1);
              v41 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v5];
              v42 = 0;
              if ( v41 != 0 )
              {
                v43 = &v41[v7];
                if ( v43 != 0 && m_Index == v43->m_EHandle.m_Index )
                  v42 = v43->m_pInstance;
              }
              v44 = this->m_hPlayer.m_Index;
              v45 = 0;
              if ( v44 + 2 > 1 )
              {
                v46 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
                if ( v46 != 0 )
                {
                  v47 = &v46[this->m_hPlayer.m_Index & 0x1FF];
                  if ( v47 != 0 && v44 == v47->m_EHandle.m_Index )
                    v45 = v47->m_pInstance;
                }
              }
              v48 = CEntityHandle::operator CEntityInstance *(p_m_hSelf);
              CEntityInstance::AcceptInput(v48, "HandInteractionFailed", v45, v42, &sVariant, 1);
            }
            else
            {
              if ( v14 > 1 )
              {
                v15 = v8->m_pIdentityChunks[(LOWORD(this->m_hSelf.m_Index) >> 9) & 0x3F];
                if ( v15 != 0 )
                {
                  v16 = &v15[this->m_hSelf.m_Index & 0x1FF];
                  if ( v16 != 0 && v12 == v16->m_EHandle.m_Index )
                    v13 = v16->m_pInstance;
                }
              }
              v17 = this->m_hPlayer.m_Index;
              v18 = 0;
              if ( v17 + 2 > 1 )
              {
                v19 = v8->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
                if ( v19 != 0 )
                {
                  v20 = &v19[this->m_hPlayer.m_Index & 0x1FF];
                  if ( v20 != 0 && v17 == v20->m_EHandle.m_Index )
                    v18 = v20->m_pInstance;
                }
              }
              v21 = v8->m_pIdentityChunks[v5];
              if ( v21 != 0 )
              {
                v22 = 0;
                v23 = &v21[v7];
                if ( v23 != 0 && m_Index == v23->m_EHandle.m_Index )
                  v22 = v23->m_pInstance;
              }
              else
              {
                v22 = 0;
              }
              CEntityInstance::AcceptInput(v22, "HandInteractionSucceeded", v18, v13, &sVariant, 1);
              v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v5];
              v25 = 0;
              if ( v24 != 0 )
              {
                v26 = &v24[v7];
                if ( v26 != 0 && m_Index == v26->m_EHandle.m_Index )
                  v25 = v26->m_pInstance;
              }
              v27 = this->m_hPlayer.m_Index;
              v28 = 0;
              if ( v27 + 2 > 1 )
              {
                v29 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
                if ( v29 != 0 )
                {
                  v30 = &v29[this->m_hPlayer.m_Index & 0x1FF];
                  if ( v30 != 0 && v27 == v30->m_EHandle.m_Index )
                    v28 = v30->m_pInstance;
                }
              }
              v31 = CEntityHandle::operator CEntityInstance *(p_m_hSelf);
              CEntityInstance::AcceptInput(v31, "HandInteractionSucceeded", v28, v25, &sVariant, 1);
            }
            if ( (sVariant.m_flags & 1) != 0 )
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, sVariant.m_uint64);
          }
        }
      }
    }
  }
}


// CInteractionManager::TestInteractionsWithEntity  (line 395, @0x00000000021cd580, libserver.so)  // inlines: CUtlSymbolLarge, ConcatTransforms, DistTo, FastSqrt, Get, GetClassName, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetInt, IndexToIdentity, InverseTR, IsValid, Length, LookupEntity, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator->, operator=
// calls: V_stristr_fast(char const*,char const*), CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, CBaseAnimating::GetAttachment, AngleMatrix, MatrixInvert, ConcatTransforms, NDebugOverlay::Axis, NDebugOverlay::Sphere
// callers: CInteractionManager::LookForInteractions
// globals: CEntityHandle::gm_pEntityList
interactions_t __fastcall CInteractionManager::TestInteractionsWithEntity(
        CInteractionManager *const this,
        CBaseEntity *pEntity)
{
  const char **p_pszSelfAttachmentStartAlternate; // r13
  CInteractionManager *v3; // r14
  CInteractionManager *v5; // rbx
  const char *m_pAsString; // rdi
  _BYTE *v7; // rsi
  const CBaseEntity *v8; // rax
  const CBaseEntity *v9; // rax
  const char *v10; // rsi
  const char *v11; // rsi
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rdi
  __int64 v15; // rcx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CEntityInstance *v18; // rsi
  uint32 v19; // eax
  CEntityIdentity *v20; // rdx
  CEntityInstance *v21; // rax
  const CBaseAnimating *v22; // rax
  const CBaseAnimating *v23; // rax
  const CBaseAnimating *v24; // rax
  const CBaseAnimating *v25; // rax
  char *szNamea; // [rsp+0h] [rbp-140h]
  char *szNameb; // [rsp+0h] [rbp-140h]
  char *szName; // [rsp+0h] [rbp-140h]
  CHandle<CBaseAnimating> *p_m_hSelf; // [rsp+8h] [rbp-138h]
  CEntityHandle *v30; // [rsp+8h] [rbp-138h]
  float radius; // [rsp+34h] [rbp-10Ch]
  Vector vecSelfPos; // [rsp+40h] [rbp-100h] BYREF
  QAngle angSelfAng; // [rsp+50h] [rbp-F0h] BYREF
  Vector vecOtherPos; // [rsp+60h] [rbp-E0h] BYREF
  QAngle angOtherAng; // [rsp+70h] [rbp-D0h] BYREF
  matrix3x4_t matTemp; // [rsp+80h] [rbp-C0h] BYREF
  matrix3x4_t out; // [rsp+B0h] [rbp-90h] BYREF
  matrix3x4_t v39; // [rsp+E0h] [rbp-60h] BYREF

  p_pszSelfAttachmentStartAlternate = &g_HandInteractions[0].pszSelfAttachmentStartAlternate;
  v3 = (&this->_vptr_CInteractionManager + 4);
  v5 = this;
  radius = vr_interaction_dist_start.m_pParent->m_Value.m_fValue;
  while ( 1 )
  {
    while ( v5->m_bInteractionsDisabled[0] || !v5->m_bSelfInteractionRequirementMet[0] )
    {
LABEL_25:
      v5 = (v5 + 1);
      p_pszSelfAttachmentStartAlternate += 12;
      if ( v5 == v3 )
        return interactions_t::INTERACTION_NONE;
    }
    if ( *(p_pszSelfAttachmentStartAlternate + 24) == 0 )
      break;
    m_Index = this->m_hPlayer.m_Index;
    m_pInstance = 0;
    v15 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 > 1 )
    {
      v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
      if ( v16 != 0 )
      {
        v17 = &v16[this->m_hPlayer.m_Index & 0x1FF];
        if ( v17 != 0 && m_Index == v17->m_EHandle.m_Index )
          m_pInstance = v17->m_pInstance;
      }
    }
    v18 = 0;
    v19 = this->m_hSelf.m_Index;
    v20 = (v19 + 2);
    if ( v20 > 1 )
    {
      v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSelf.m_Index) >> 9) & 0x3F];
      if ( v20 != 0 )
      {
        v15 = 120LL * (this->m_hSelf.m_Index & 0x1FF);
        v20 = (v20 + v15);
        if ( v20 != 0 && v19 == v20->m_EHandle.m_Index )
          v18 = v20->m_pInstance;
      }
    }
    if ( (*(m_pInstance->_vptr_IHandleEntity + 482))(m_pInstance, v18, v20, v15) != 0 )
      break;
    v5 = (v5 + 1);
    p_pszSelfAttachmentStartAlternate += 12;
    if ( v5 == v3 )
      return interactions_t::INTERACTION_NONE;
  }
  if ( *(p_pszSelfAttachmentStartAlternate + 64) != 0 )
  {
    v21 = CEntityHandle::operator CEntityInstance *(&this->m_hPlayer);
    if ( (*(v21->_vptr_IHandleEntity + 482))(v21, pEntity) == 0 )
      goto LABEL_25;
  }
  m_pAsString = "";
  if ( pEntity->m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = pEntity->m_pEntity->m_designerName.u.m_pAsString;
  if ( V_stristr_fast(m_pAsString, *(p_pszSelfAttachmentStartAlternate - 2)) == 0 )
    goto LABEL_25;
  v7 = *(p_pszSelfAttachmentStartAlternate - 1);
  if ( v7 != 0 && *v7 != 0 )
  {
    szNamea = *(p_pszSelfAttachmentStartAlternate - 1);
    p_m_hSelf = &this->m_hSelf;
    v22 = CEntityHandle::operator CEntityInstance *(&this->m_hSelf);
    CBaseAnimating::GetAttachment(v22, szNamea, &vecSelfPos, &angSelfAng);
  }
  else
  {
    p_m_hSelf = &this->m_hSelf;
    v8 = CEntityHandle::operator CEntityInstance *(&this->m_hSelf);
    vecSelfPos = *CBaseEntity::GetAbsOrigin(v8);
    v9 = CEntityHandle::operator CEntityInstance *(&this->m_hSelf);
    angSelfAng = *CBaseEntity::GetAbsAngles(v9);
  }
  v10 = p_pszSelfAttachmentStartAlternate[4];
  if ( v10 != 0 && *v10 != 0 )
  {
    szNameb = p_pszSelfAttachmentStartAlternate[4];
    v23 = (*(pEntity->_vptr_IHandleEntity + 43))(pEntity);
    CBaseAnimating::GetAttachment(v23, szNameb, &vecOtherPos, &angOtherAng);
  }
  else
  {
    vecOtherPos = *CBaseEntity::GetAbsOrigin(pEntity);
    angOtherAng = *CBaseEntity::GetAbsAngles(pEntity);
  }
  if ( fsqrt(
         (((vecSelfPos.x - vecOtherPos.x) * (vecSelfPos.x - vecOtherPos.x))
        + ((vecSelfPos.y - vecOtherPos.y) * (vecSelfPos.y - vecOtherPos.y)))
       + ((vecSelfPos.z - vecOtherPos.z) * (vecSelfPos.z - vecOtherPos.z))) > radius )
  {
    if ( *p_pszSelfAttachmentStartAlternate != 0 && **p_pszSelfAttachmentStartAlternate != 0 )
    {
      szName = *p_pszSelfAttachmentStartAlternate;
      v25 = CEntityHandle::operator CEntityInstance *(p_m_hSelf);
      CBaseAnimating::GetAttachment(v25, szName, &vecSelfPos, &angSelfAng);
    }
    v11 = p_pszSelfAttachmentStartAlternate[5];
    if ( v11 != 0 && *v11 != 0 )
    {
      v30 = p_pszSelfAttachmentStartAlternate[5];
      v24 = (*(pEntity->_vptr_IHandleEntity + 43))(pEntity);
      CBaseAnimating::GetAttachment(v24, v30, &vecOtherPos, &angOtherAng);
    }
  }
  if ( vr_interaction_debug.m_pParent->m_Value.m_nValue == 1 )
  {
    NDebugOverlay::Axis(&vecSelfPos, &angSelfAng, 1.0, 1, 0.1);
    NDebugOverlay::Axis(&vecOtherPos, &angOtherAng, 1.0, 1, 0.1);
    NDebugOverlay::Sphere(&vecOtherPos, COERCE_DOUBLE(LODWORD(radius)), 0xFFu, 0, 0, 1, 0.1);
  }
  if ( fsqrt(
         (((vecSelfPos.x - vecOtherPos.x) * (vecSelfPos.x - vecOtherPos.x))
        + ((vecSelfPos.y - vecOtherPos.y) * (vecSelfPos.y - vecOtherPos.y)))
       + ((vecSelfPos.z - vecOtherPos.z) * (vecSelfPos.z - vecOtherPos.z))) > radius )
    goto LABEL_25;
  if ( vr_interaction_debug.m_pParent->m_Value.m_nValue == 1 )
    NDebugOverlay::Axis(&vecOtherPos, &angOtherAng, 3.0, 1, 0.1);
  this->m_flInteractionLerp = 0.0;
  AngleMatrix(&angSelfAng, &vecSelfPos, &matTemp);
  MatrixInvert(&this->m_matHoldTransform, &out);
  ConcatTransforms(&out, &matTemp, &v39);
  this->m_mInteractionTransformInit = v39;
  return v5 - this;
}


// CInteractionManager::UpdateInteraction  (line 497, @0x00000000021d5400, libserver.so)  // inlines: Approach, ConcatTransforms, DistTo, DotProduct, FastSqrt, Get, GetCycle, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, IndexToIdentity, InverseTR, IsValid, Length, LookupEntity, Normalized, QAngle, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator!, operator-, operator->
// calls: CInteractionManager::StopInteraction, ConcatTransforms, CEntityHandle::operator CEntityInstance*, CBaseAnimating::GetAttachment, VectorNormalize, CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::SetCycle, AngleMatrix, MatrixInvert, NDebugOverlay::Axis
// callers: CInteractionManager::Think
// globals: CEntityHandle::gm_pEntityList, g_HandInteractions
void __fastcall CInteractionManager::UpdateInteraction(CInteractionManager *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  matrix3x4_t *p_m_matHoldTransform; // rbx
  __int64 m_nActiveInteraction; // rax
  const char *pszOtherAttachmentAdvance; // rsi
  __int64 v8; // rax
  const char *pszSelfAttachmentAdvance; // rsi
  CHandle<CBaseAnimating> *p_m_hInteractionTarget; // r12
  const CBaseAnimating *v11; // rax
  const CBaseAnimating *v12; // rax
  float v13; // xmm5_4
  float v14; // xmm6_4
  float m_flInteractionLerp; // xmm0_4
  float v16; // xmm1_4
  const CBaseAnimating *v17; // rax
  const CBaseAnimatingController *BaseAnimatingController; // rax
  float v19; // xmm0_4
  float m_Value; // xmm2_4
  CBaseAnimating *v21; // rax
  float v22; // xmm1_4
  float m_fValue; // xmm0_4
  CBaseAnimating *v24; // rax
  float v25; // xmm1_4
  const CBaseAnimating *v26; // rax
  const CBaseAnimating *v27; // rax
  float flDistToRetreat; // [rsp+Ch] [rbp-164h]
  float flDistToAdvance; // [rsp+18h] [rbp-158h]
  float v30; // [rsp+1Ch] [rbp-154h]
  float vecAdvanceToRetreat; // [rsp+20h] [rbp-150h]
  const char *vecAdvanceToRetreat_8b; // [rsp+28h] [rbp-148h]
  float vecAdvanceToRetreat_8; // [rsp+28h] [rbp-148h]
  float vecAdvanceToRetreat_8a; // [rsp+28h] [rbp-148h]
  float vecAdvanceToRetreat_8c; // [rsp+28h] [rbp-148h]
  const char *vecAdvanceToRetreat_8d; // [rsp+28h] [rbp-148h]
  Vector vecCurPos; // [rsp+30h] [rbp-140h] BYREF
  Vector vecAdvance; // [rsp+40h] [rbp-130h] BYREF
  Vector vecRetreat; // [rsp+50h] [rbp-120h] BYREF
  QAngle angAdvance; // [rsp+60h] [rbp-110h] BYREF
  QAngle angRetreat; // [rsp+70h] [rbp-100h] BYREF
  matrix3x4_t matInteractionWorldTransform; // [rsp+80h] [rbp-F0h] BYREF
  matrix3x4_t matTemp; // [rsp+B0h] [rbp-C0h] BYREF
  matrix3x4_t out; // [rsp+E0h] [rbp-90h] BYREF
  matrix3x4_t vec[2]; // [rsp+110h] [rbp-60h] BYREF

  if ( this->m_nActiveInteraction == interactions_t::INTERACTION_NONE )
    goto LABEL_6;
  m_Index = this->m_hInteractionTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_6;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hInteractionTarget.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    goto LABEL_6;
  v4 = &v3[this->m_hInteractionTarget.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index || v4->m_pInstance == 0 )
    goto LABEL_6;
  p_m_matHoldTransform = &this->m_matHoldTransform;
  ConcatTransforms(&this->m_matHoldTransform, &this->m_mInteractionTransformInit, &matInteractionWorldTransform);
  m_nActiveInteraction = this->m_nActiveInteraction;
  vecCurPos.x = matInteractionWorldTransform.m_flMatVal[0][3];
  vecCurPos.y = matInteractionWorldTransform.m_flMatVal[1][3];
  pszOtherAttachmentAdvance = g_HandInteractions[m_nActiveInteraction].pszOtherAttachmentAdvance;
  vecCurPos.z = matInteractionWorldTransform.m_flMatVal[2][3];
  if ( pszOtherAttachmentAdvance != 0 && *pszOtherAttachmentAdvance != 0 )
  {
    p_m_hInteractionTarget = &this->m_hInteractionTarget;
    vecAdvanceToRetreat_8b = pszOtherAttachmentAdvance;
    v11 = CEntityHandle::operator CEntityInstance *(&this->m_hInteractionTarget);
    CBaseAnimating::GetAttachment(v11, vecAdvanceToRetreat_8b, &vecAdvance, &angAdvance);
    v12 = CEntityHandle::operator CEntityInstance *(&this->m_hInteractionTarget);
    CBaseAnimating::GetAttachment(
      v12,
      g_HandInteractions[this->m_nActiveInteraction].pszOtherAttachmentRetreat,
      &vecRetreat,
      &angRetreat);
  }
  else
  {
    v8 = m_nActiveInteraction;
    pszSelfAttachmentAdvance = g_HandInteractions[v8].pszSelfAttachmentAdvance;
    if ( pszSelfAttachmentAdvance == 0 || *pszSelfAttachmentAdvance == 0 )
      goto LABEL_12;
    p_m_hInteractionTarget = &this->m_hInteractionTarget;
    vecAdvanceToRetreat_8d = g_HandInteractions[v8].pszSelfAttachmentAdvance;
    v26 = CEntityHandle::operator CEntityInstance *(&this->m_hInteractionTarget);
    CBaseAnimating::GetAttachment(v26, vecAdvanceToRetreat_8d, &vecAdvance, &angAdvance);
    v27 = CEntityHandle::operator CEntityInstance *(&this->m_hInteractionTarget);
    CBaseAnimating::GetAttachment(
      v27,
      g_HandInteractions[this->m_nActiveInteraction].pszSelfAttachmentRetreat,
      &vecRetreat,
      &angRetreat);
  }
  if ( vr_interaction_debug.m_pParent->m_Value.m_nValue == 1 )
  {
    *&vec[0].m_flMatVal[0][0] = 0;
    vec[0].m_flMatVal[0][2] = 0.0;
    NDebugOverlay::Axis(&vecCurPos, vec, 1.0, 1, 0.1);
    NDebugOverlay::Axis(&vecAdvance, &angAdvance, 1.0, 1, 0.1);
    NDebugOverlay::Axis(&vecRetreat, &angRetreat, 1.0, 1, 0.1);
  }
  vec[0].m_flMatVal[0][0] = vecRetreat.x - vecAdvance.x;
  vec[0].m_flMatVal[0][1] = vecRetreat.y - vecAdvance.y;
  flDistToAdvance = fsqrt(
                      (((vecCurPos.x - vecAdvance.x) * (vecCurPos.x - vecAdvance.x))
                     + ((vecCurPos.y - vecAdvance.y) * (vecCurPos.y - vecAdvance.y)))
                    + ((vecCurPos.z - vecAdvance.z) * (vecCurPos.z - vecAdvance.z)));
  vec[0].m_flMatVal[0][2] = vecRetreat.z - vecAdvance.z;
  flDistToRetreat = fsqrt(
                      (((vecCurPos.x - vecRetreat.x) * (vecCurPos.x - vecRetreat.x))
                     + ((vecCurPos.y - vecRetreat.y) * (vecCurPos.y - vecRetreat.y)))
                    + ((vecCurPos.z - vecRetreat.z) * (vecCurPos.z - vecRetreat.z)));
  VectorNormalize(vec);
  v13 = vec[0].m_flMatVal[0][0];
  v14 = vec[0].m_flMatVal[0][1];
  vec[0].m_flMatVal[0][0] = vecCurPos.x - vecAdvance.x;
  vec[0].m_flMatVal[0][1] = vecCurPos.y - vecAdvance.y;
  v30 = v13;
  vecAdvanceToRetreat_8 = v14;
  vecAdvanceToRetreat = vec[0].m_flMatVal[0][2];
  vec[0].m_flMatVal[0][2] = vecCurPos.z - vecAdvance.z;
  VectorNormalize(vec);
  if ( (((v30 * vec[0].m_flMatVal[0][0]) + (vecAdvanceToRetreat_8 * vec[0].m_flMatVal[0][1]))
      + (vecAdvanceToRetreat * vec[0].m_flMatVal[0][2])) < 0.0 )
  {
    m_flInteractionLerp = (flDistToAdvance * 0.1) + this->m_flInteractionLerp;
  }
  else
  {
    vec[0].m_flMatVal[0][1] = vecCurPos.y - vecRetreat.y;
    vec[0].m_flMatVal[0][2] = vecCurPos.z - vecRetreat.z;
    vec[0].m_flMatVal[0][0] = vecCurPos.x - vecRetreat.x;
    VectorNormalize(vec);
    m_flInteractionLerp = this->m_flInteractionLerp;
    if ( (((v30 * vec[0].m_flMatVal[0][0]) + (vecAdvanceToRetreat_8 * vec[0].m_flMatVal[0][1]))
        + (vecAdvanceToRetreat * vec[0].m_flMatVal[0][2])) > 0.0 )
      m_flInteractionLerp = m_flInteractionLerp - (flDistToRetreat * 0.1);
  }
  v16 = 1.0;
  if ( m_flInteractionLerp <= 1.0 )
    v16 = fmaxf(0.0, m_flInteractionLerp);
  this->m_flInteractionLerp = v16;
  vecAdvanceToRetreat_8a = 90.0 * gpGlobals->frametime;
  v17 = CEntityHandle::operator CEntityInstance *(p_m_hInteractionTarget);
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(v17);
  v19 = this->m_flInteractionLerp;
  m_Value = BaseAnimatingController->m_baseLayer.m_flCycle.m_Value;
  if ( (v19 - m_Value) <= vecAdvanceToRetreat_8a )
  {
    if ( -vecAdvanceToRetreat_8a > (v19 - m_Value) )
      v19 = m_Value - vecAdvanceToRetreat_8a;
  }
  else
  {
    v19 = vecAdvanceToRetreat_8a + m_Value;
  }
  vecAdvanceToRetreat_8c = v19;
  v21 = CEntityHandle::operator CEntityInstance *(p_m_hInteractionTarget);
  CBaseAnimating::SetCycle(v21, COERCE_DOUBLE(LODWORD(vecAdvanceToRetreat_8c)), v22);
  AngleMatrix(&angAdvance, &vecAdvance, &matTemp);
  MatrixInvert(p_m_matHoldTransform, &out);
  ConcatTransforms(&out, &matTemp, vec);
  this->m_mInteractionTransformTarget = vec[0];
  m_fValue = vr_interaction_dist_break.m_pParent->m_Value.m_fValue;
  if ( flDistToAdvance > m_fValue && flDistToRetreat > m_fValue )
  {
    v24 = CEntityHandle::operator CEntityInstance *(p_m_hInteractionTarget);
    CBaseAnimating::SetCycle(v24, 0.0, v25);
LABEL_6:
    CInteractionManager::StopInteraction(this, 0);
    return;
  }
  if ( this->m_flInteractionLerp >= 1.0 )
LABEL_12:
    CInteractionManager::StopInteraction(this, 1);
}


