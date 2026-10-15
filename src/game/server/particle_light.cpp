
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CParticleLight::GetDataDescMap  (line 16, @0x00000000022842c0, libserver.so)
// globals: CParticleLight::m_DataMap
datamap_t *__fastcall CParticleLight::GetDataDescMap(CParticleLight *const this)
{
  return &CParticleLight::m_DataMap;
}


// CParticleLight::AddDatadescMetadataKeys  (line 16, @0x000000000229b8e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CParticleLight::GetEntityClass(void)
void __fastcall CParticleLight::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CParticleLight::GetEntityClass);
}


// CParticleLight::GetBaseMap  (line 16, @0x000000000229b900, libserver.so)
datamap_t *__cdecl CParticleLight::GetBaseMap()
{
  return &CServerOnlyPointEntity::m_DataMap;
}


// DataMapInit<CParticleLight>  (line 16, @0x000000000229b910, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CParticleLight"
// globals: `guard variable for'DataMapInit<CParticleLight>(CParticleLight *)::nameHolder, CParticleLight::GetEntityClass(void), CParticleLight::m_DataMap, DataMapInit<CParticleLight>(CParticleLight *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CParticleLight>(CParticleLight *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CParticleLight>(CParticleLight *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CParticleLight>(CParticleLight *)::nameHolder) != 0 )
  {
    DataMapInit<CParticleLight>(CParticleLight *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CParticleLight>(CParticleLight *)::nameHolder.m_pszBase = "CParticleLight";
    DataMapInit<CParticleLight>(CParticleLight *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CParticleLight>(CParticleLight *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CParticleLight>(CParticleLight *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CParticleLight>(CParticleLight *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CParticleLight>(CParticleLight *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CParticleLight>(CParticleLight *)::nameHolder,
      &_dso_handle);
  }
  CParticleLight::m_DataMap.dataNumFields = 4;
  CParticleLight::m_DataMap.baseMap = &CServerOnlyPointEntity::m_DataMap;
  CParticleLight::m_DataMap.dataDesc = &DataMapInit<CParticleLight>(CParticleLight *)::dataDesc[1];
  AddDatadescMetadataKeys(&CParticleLight::m_DataMap, CParticleLight::GetEntityClass);
  return &CParticleLight::m_DataMap;
}


// CParticleLight::CParticleLight  (line 31, @0x000000000229b9e0, libserver.so)  // inlines: CServerOnlyEntity, CServerOnlyPointEntity, CUtlSymbolLarge, Init
// calls: CBaseEntity::CBaseEntity
// callers: CParticleLight::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CParticleLight::CParticleLight(CParticleLight *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_40714B0;
  this->m_PSName.u.m_Id = 0;
  this->m_flIntensity = 5000.0;
  this->m_vColor.x = 1.0;
  this->m_vColor.y = 0.0;
  this->m_vColor.z = 0.0;
  this->m_bDirectional = 0;
}


