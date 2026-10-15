
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLogicPlayerProxy::GetDataDescMap  (line 13, @0x0000000002283ae0, libserver.so)
// globals: CLogicPlayerProxy::m_DataMap
datamap_t *__fastcall CLogicPlayerProxy::GetDataDescMap(CLogicPlayerProxy *const this)
{
  return &CLogicPlayerProxy::m_DataMap;
}


// CLogicPlayerProxy::AddDatadescMetadataKeys  (line 13, @0x0000000002291c80, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLogicPlayerProxy::GetEntityClass(void)
void __fastcall CLogicPlayerProxy::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLogicPlayerProxy::GetEntityClass);
}


// CLogicPlayerProxy::GetBaseMap  (line 13, @0x0000000002291ca0, libserver.so)
datamap_t *__cdecl CLogicPlayerProxy::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CLogicPlayerProxy>  (line 13, @0x0000000002291cb0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CLogicPlayerProxy"
// globals: `guard variable for'DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::nameHolder, `guard variable for'DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::dataDesc, CLogicPlayerProxy::GetEntityClass(void), CLogicPlayerProxy::m_DataMap, DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::nameHolder) != 0 )
  {
    DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::nameHolder.m_pszBase = "CLogicPlayerProxy";
    DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::nameHolder,
      &_dso_handle);
  }
  CLogicPlayerProxy::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::dataDesc) != 0 )
  {
    DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::dataDesc[1].pSaveRestoreOps = eventFuncs;
    DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::dataDesc[2].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::dataDesc);
  }
  CLogicPlayerProxy::m_DataMap.dataNumFields = 3;
  CLogicPlayerProxy::m_DataMap.dataDesc = &DataMapInit<CLogicPlayerProxy>(CLogicPlayerProxy *)::dataDesc[1];
  AddDatadescMetadataKeys(&CLogicPlayerProxy::m_DataMap, CLogicPlayerProxy::GetEntityClass);
  return &CLogicPlayerProxy::m_DataMap;
}


// CLogicPlayerProxy::Activate  (line 48, @0x0000000002288e10, libserver.so)  // inlines: AI_GetSinglePlayer, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, operator CEntityInstance*, operator=, operator==<CBaseEntity>
// calls: CBaseEntity::Activate, UTIL_GetLocalPlayer
// globals: CEntityHandle::gm_pEntityList
void __fastcall CLogicPlayerProxy::Activate(CLogicPlayerProxy *const this, ActivateType_t activateType)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CBasePlayer *LocalPlayer; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // cx

  CBaseEntity::Activate(this, activateType);
  m_Index = this->m_hPlayer.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[this->m_hPlayer.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || v5->m_pInstance == 0 )
  {
    if ( gpGlobals->maxClients <= 1
      && (LocalPlayer = UTIL_GetLocalPlayer()) != 0
      && (m_pEntity = LocalPlayer->m_pEntity) != 0 )
    {
      v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v9 = 0x7FFF;
      else
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hPlayer.m_Index) = v9 | this->m_hPlayer.m_Index & 0x8000;
      this->m_hPlayer.m_Index = (v8 << 15) | this->m_hPlayer.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hPlayer.m_Index = -1;
    }
  }
}


// CLogicPlayerProxy::PassesDamageFilter  (line 58, @0x0000000002289f60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator bool
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CLogicPlayerProxy::PassesDamageFilter(CLogicPlayerProxy *const this, const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_Index = this->m_hDamageFilter.m_Index;
  return m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDamageFilter.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hDamageFilter.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (*(v4->m_pInstance->_vptr_IHandleEntity + 88))(v4->m_pInstance, info);
}


// CLogicPlayerProxy::InputSetPlayerHealth  (line 69, @0x0000000002291de0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Int, IsValid, LookupEntity, operator CEntityInstance*, operator int, operator==<CBaseEntity>
// globals: CEntityHandle::gm_pEntityList
void __fastcall CLogicPlayerProxy::InputSetPlayerHealth(CLogicPlayerProxy *const this, inputdata_t *const inputdata)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  __int64 v4; // rcx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rdi
  void (__fastcall *v7)(CEntityInstance *, _QWORD, _QWORD, __int64, CConcreteEntityList *); // rdx
  int16 m_type; // ax

  m_Index = this->m_hPlayer.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = 120LL * (this->m_hPlayer.m_Index & 0x1FF);
      v5 = &v3[v4 / 0x78];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 )
        {
          v7 = *(m_pInstance->_vptr_IHandleEntity + 157);
          m_type = inputdata->value.m_type;
          if ( m_type == 1 )
          {
            v7(m_pInstance, inputdata->value.m_float, v7, v4, CEntityHandle::gm_pEntityList);
          }
          else if ( m_type == 34 )
          {
            v7(m_pInstance, inputdata->value.m_float64, v7, v4, CEntityHandle::gm_pEntityList);
          }
          else
          {
            v7(m_pInstance, inputdata->value.m_uint, v7, v4, CEntityHandle::gm_pEntityList);
          }
        }
      }
    }
  }
}


// CLogicPlayerProxy::InputRequestPlayerHealth  (line 78, @0x000000000229e0b0, libserver.so)  // inlines: CVariantBase, FireOutput<int>, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Set, operator CEntityInstance*, operator==<CBaseEntity>, ~CVariantBase
// calls: CBaseEntity::GetHealth, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CLogicPlayerProxy::InputRequestPlayerHealth(
        CLogicPlayerProxy *const this,
        inputdata_t *const inputdata)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CBaseEntity *pCaller; // r14
  CBaseEntity *pActivator; // r13
  int Health; // eax
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  m_Index = this->m_hPlayer.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hPlayer.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
      {
        pCaller = inputdata->pCaller;
        pActivator = inputdata->pActivator;
        Health = CBaseEntity::GetHealth(v5->m_pInstance);
        value.m_type = 5;
        this->m_RequestedPlayerHealth.m_Value = Health;
        value.m_flags = 0;
        value.m_int = Health;
        CEntityIOOutput::FireOutputInternal(&this->m_RequestedPlayerHealth, pActivator, pCaller, &value, 0.0);
        if ( (value.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      }
    }
  }
}


