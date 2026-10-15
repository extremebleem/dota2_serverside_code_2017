
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLogicRelay::GetDataDescMap  (line 19, @0x000000000209c600, libserver.so)
// globals: CLogicRelay::m_DataMap
datamap_t *__fastcall CLogicRelay::GetDataDescMap(CLogicRelay *const this)
{
  return &CLogicRelay::m_DataMap;
}


// CLogicRelay::AddDatadescMetadataKeys  (line 19, @0x00000000020b0b00, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLogicRelay::GetEntityClass(void)
void __fastcall CLogicRelay::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLogicRelay::GetEntityClass);
}


// CLogicRelay::GetBaseMap  (line 19, @0x00000000020b0b20, libserver.so)
datamap_t *__cdecl CLogicRelay::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CLogicRelay>  (line 19, @0x00000000020b0b30, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: __static_initialization_and_destruction_0
// strings: "CLogicRelay"
// globals: `guard variable for'DataMapInit<CLogicRelay>(CLogicRelay *)::nameHolder, `guard variable for'DataMapInit<CLogicRelay>(CLogicRelay *)::dataDesc, CLogicRelay::GetEntityClass(void), CLogicRelay::m_DataMap, DataMapInit<CLogicRelay>(CLogicRelay *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CLogicRelay>(CLogicRelay *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CLogicRelay>(CLogicRelay *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicRelay>(CLogicRelay *)::nameHolder) != 0 )
  {
    DataMapInit<CLogicRelay>(CLogicRelay *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLogicRelay>(CLogicRelay *)::nameHolder.m_pszBase = "CLogicRelay";
    DataMapInit<CLogicRelay>(CLogicRelay *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLogicRelay>(CLogicRelay *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLogicRelay>(CLogicRelay *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLogicRelay>(CLogicRelay *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicRelay>(CLogicRelay *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLogicRelay>(CLogicRelay *)::nameHolder,
      &_dso_handle);
  }
  CLogicRelay::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CLogicRelay>(CLogicRelay *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicRelay>(CLogicRelay *)::dataDesc) != 0 )
  {
    DataMapInit<CLogicRelay>(CLogicRelay *)::dataDesc[12].pSaveRestoreOps = eventFuncs;
    DataMapInit<CLogicRelay>(CLogicRelay *)::dataDesc[13].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicRelay>(CLogicRelay *)::dataDesc);
  }
  CLogicRelay::m_DataMap.dataNumFields = 13;
  CLogicRelay::m_DataMap.dataDesc = &DataMapInit<CLogicRelay>(CLogicRelay *)::dataDesc[1];
  AddDatadescMetadataKeys(&CLogicRelay::m_DataMap, CLogicRelay::GetEntityClass);
  return &CLogicRelay::m_DataMap;
}


// CLogicRelay::CLogicRelay  (line 46, @0x00000000020b0c60, libserver.so)  // inlines: CEntityIOOutput, CLogicalEntity, CServerOnlyEntity
// calls: CBaseEntity::CBaseEntity
// callers: CLogicRelay::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CLogicRelay::CLogicRelay(CLogicRelay *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_3FF7B70;
  this->m_OnTrigger._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnSpawn._vptr_CEntityIOOutput = off_3F7C190;
}


// CLogicRelay::Activate  (line 54, @0x00000000020a0060, libserver.so)  // inlines: GetOutputConnectionCount, curtime
// calls: CBaseEntity::Activate, CBaseEntity::SetNextThink
void __fastcall CLogicRelay::Activate(CLogicRelay *const this, ActivateType_t activateType)
{
  double v3; // xmm1_8
  CGlobalVars *v4; // r12
  double v5; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseEntity::Activate(this, activateType);
  if ( this->m_OnSpawn.m_pConnections != 0 )
  {
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v5 = v4->m_flCurrentTime + 0.01;
    }
    else
    {
      *&v5 = 1008981770;
    }
    CBaseEntity::SetNextThink(this, v5, v3, 0);
  }
}


// CLogicRelay::Think  (line 69, @0x00000000020d2bb0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, UTIL_Remove, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CEntitySystem::QueueDestroyEntity, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CLogicRelay::Think(CLogicRelay *const this)
{
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnSpawn, this, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  if ( this->m_bTriggerOnce && this != 0 )
    CEntitySystem::QueueDestroyEntity(g_pEntitySystem, this);
}


// CLogicRelay::InputEnable  (line 87, @0x000000000209c610, libserver.so)
void __fastcall CLogicRelay::InputEnable(CLogicRelay *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled = 0;
}


// CLogicRelay::InputEnableRefire  (line 96, @0x000000000209c620, libserver.so)
void __fastcall CLogicRelay::InputEnableRefire(CLogicRelay *const this, inputdata_t *const inputdata)
{
  this->m_bWaitForRefire = 0;
}


// CLogicRelay::InputCancelPending  (line 105, @0x000000000209d2d0, libserver.so)
// calls: CEntitySystem::CancelEntityIOEvents
void __fastcall CLogicRelay::InputCancelPending(CLogicRelay *const this, inputdata_t *const inputdata)
{
  CEntitySystem::CancelEntityIOEvents(g_pEntitySystem, this);
  this->m_bWaitForRefire = 0;
}


// CLogicRelay::InputDisable  (line 117, @0x000000000209c630, libserver.so)
void __fastcall CLogicRelay::InputDisable(CLogicRelay *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled = 1;
}


// CLogicRelay::InputToggle  (line 126, @0x000000000209c640, libserver.so)
void __fastcall CLogicRelay::InputToggle(CLogicRelay *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled ^= 1u;
}


// CLogicRelay::InputTrigger  (line 135, @0x00000000020d1f90, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GetMaxDelay, UTIL_Remove, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CEntitySystem::AddEntityIOEvent, CEntitySystem::QueueDestroyEntity, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CLogicRelay::InputTrigger(CLogicRelay *const this, inputdata_t *const inputdata)
{
  CLogicRelay *pCaller; // r12
  CBaseEntity *pActivator; // rsi
  EntityIOConnection_t *m_pConnections; // rax
  float v6; // xmm0_4
  float m_flDelay; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  pCaller = this;
  if ( this->m_bPassthoughCaller )
    pCaller = inputdata->pCaller;
  if ( !this->m_bDisabled && !this->m_bWaitForRefire )
  {
    pActivator = inputdata->pActivator;
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger, pActivator, pCaller, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    if ( this->m_bTriggerOnce )
    {
      CEntitySystem::QueueDestroyEntity(g_pEntitySystem, this);
    }
    else if ( !this->m_bFastRetrigger )
    {
      m_pConnections = this->m_OnTrigger.m_pConnections;
      this->m_bWaitForRefire = 1;
      if ( m_pConnections != 0 )
      {
        v6 = 0.0;
        do
        {
          m_flDelay = m_pConnections->m_flDelay;
          m_pConnections = m_pConnections->m_pNext;
          v8 = fmaxf(m_flDelay, v6);
          v6 = v8;
        }
        while ( m_pConnections != 0 );
        v9 = v8 + 0.001;
      }
      else
      {
        v9 = 0.001;
      }
      CEntitySystem::AddEntityIOEvent(g_pEntitySystem, this, "EnableRefire", this, pCaller, v9, 0);
    }
  }
}


