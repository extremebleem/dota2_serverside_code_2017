
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointPrefab::GetDataDescMap  (line 13, @0x000000000231eca0, libserver.so)
// globals: CPointPrefab::m_DataMap
datamap_t *__fastcall CPointPrefab::GetDataDescMap(CPointPrefab *const this)
{
  return &CPointPrefab::m_DataMap;
}


// CPointPrefab::AddDatadescMetadataKeys  (line 13, @0x0000000002329080, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointPrefab::GetEntityClass(void)
void __fastcall CPointPrefab::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointPrefab::GetEntityClass);
}


// CPointPrefab::GetBaseMap  (line 13, @0x00000000023290a0, libserver.so)
datamap_t *__cdecl CPointPrefab::GetBaseMap()
{
  return &CServerOnlyPointEntity::m_DataMap;
}


// DataMapInit<CPointPrefab>  (line 13, @0x00000000023290b0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "CPointPrefab"
// globals: `guard variable for'DataMapInit<CPointPrefab>(CPointPrefab *)::nameHolder, CPointPrefab::GetEntityClass(void), CPointPrefab::m_DataMap, DataMapInit<CPointPrefab>(CPointPrefab *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointPrefab>(CPointPrefab *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPointPrefab>(CPointPrefab *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointPrefab>(CPointPrefab *)::nameHolder) != 0 )
  {
    DataMapInit<CPointPrefab>(CPointPrefab *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointPrefab>(CPointPrefab *)::nameHolder.m_pszBase = "CPointPrefab";
    DataMapInit<CPointPrefab>(CPointPrefab *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointPrefab>(CPointPrefab *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointPrefab>(CPointPrefab *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointPrefab>(CPointPrefab *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointPrefab>(CPointPrefab *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointPrefab>(CPointPrefab *)::nameHolder,
      &_dso_handle);
  }
  CPointPrefab::m_DataMap.dataNumFields = 2;
  CPointPrefab::m_DataMap.baseMap = &CServerOnlyPointEntity::m_DataMap;
  CPointPrefab::m_DataMap.dataDesc = &DataMapInit<CPointPrefab>(CPointPrefab *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointPrefab::m_DataMap, CPointPrefab::GetEntityClass);
  return &CPointPrefab::m_DataMap;
}


// CPointPrefab::CPointPrefab  (line 24, @0x0000000002329180, libserver.so)  // inlines: CServerOnlyEntity, CServerOnlyPointEntity, CUtlSymbolLarge
// calls: CBaseEntity::CBaseEntity
// callers: CPointPrefab::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CPointPrefab::CPointPrefab(CPointPrefab *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->m_targetMapName.u.m_Id = 0;
  this->_vptr_IHandleEntity = &off_408EC50;
}


// CPointPrefab::~CPointPrefab  (line 32, @0x000000000231ee70, libserver.so)  // inlines: ~CServerOnlyEntity, ~CServerOnlyPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPointPrefab::~CPointPrefab(CPointPrefab *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CPointPrefab::~CPointPrefab  (line 32, @0x000000000231ee90, libserver.so)  // inlines: ~CPointPrefab, ~CServerOnlyEntity, ~CServerOnlyPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPointPrefab::~CPointPrefab(CPointPrefab *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


