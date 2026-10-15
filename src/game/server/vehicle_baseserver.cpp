
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// vehicle_gear_t::AddDatadescMetadataKeys  (line 38, @0x0000000002406150, libserver.so)
void __fastcall vehicle_gear_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// vehicle_gear_t::GetBaseMap  (line 38, @0x0000000002406160, libserver.so)
datamap_t *__cdecl vehicle_gear_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<vehicle_gear_t>  (line 38, @0x0000000002406170, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_13.cpp
// strings: "vehicle_gear_t"
// globals: `guard variable for'DataMapInit<vehicle_gear_t>(vehicle_gear_t *)::nameHolder, vehicle_gear_t::m_DataMap, DataMapInit<vehicle_gear_t>(vehicle_gear_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<vehicle_gear_t>(vehicle_gear_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<vehicle_gear_t>(vehicle_gear_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<vehicle_gear_t>(vehicle_gear_t *)::nameHolder) != 0 )
  {
    DataMapInit<vehicle_gear_t>(vehicle_gear_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<vehicle_gear_t>(vehicle_gear_t *)::nameHolder.m_pszBase = "vehicle_gear_t";
    DataMapInit<vehicle_gear_t>(vehicle_gear_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<vehicle_gear_t>(vehicle_gear_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<vehicle_gear_t>(vehicle_gear_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<vehicle_gear_t>(vehicle_gear_t *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<vehicle_gear_t>(vehicle_gear_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<vehicle_gear_t>(vehicle_gear_t *)::nameHolder,
      &_dso_handle);
  }
  vehicle_gear_t::m_DataMap.baseMap = 0;
  vehicle_gear_t::m_DataMap.dataDesc = &DataMapInit<vehicle_gear_t>(vehicle_gear_t *)::dataDesc[1];
  vehicle_gear_t::m_DataMap.dataNumFields = 3;
  return &vehicle_gear_t::m_DataMap;
}


// vehicle_crashsound_t::AddDatadescMetadataKeys  (line 46, @0x0000000002406230, libserver.so)
void __fastcall vehicle_crashsound_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// vehicle_crashsound_t::GetBaseMap  (line 46, @0x0000000002406240, libserver.so)
datamap_t *__cdecl vehicle_crashsound_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<vehicle_crashsound_t>  (line 46, @0x0000000002406250, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_13.cpp
// strings: "vehicle_crashsound_t"
// globals: `guard variable for'DataMapInit<vehicle_crashsound_t>(vehicle_crashsound_t *)::nameHolder, vehicle_crashsound_t::m_DataMap, DataMapInit<vehicle_crashsound_t>(vehicle_crashsound_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<vehicle_crashsound_t>(vehicle_crashsound_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<vehicle_crashsound_t>(vehicle_crashsound_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<vehicle_crashsound_t>(vehicle_crashsound_t *)::nameHolder) != 0 )
  {
    DataMapInit<vehicle_crashsound_t>(vehicle_crashsound_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<vehicle_crashsound_t>(vehicle_crashsound_t *)::nameHolder.m_pszBase = "vehicle_crashsound_t";
    DataMapInit<vehicle_crashsound_t>(vehicle_crashsound_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<vehicle_crashsound_t>(vehicle_crashsound_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<vehicle_crashsound_t>(vehicle_crashsound_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<vehicle_crashsound_t>(vehicle_crashsound_t *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<vehicle_crashsound_t>(vehicle_crashsound_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<vehicle_crashsound_t>(vehicle_crashsound_t *)::nameHolder,
      &_dso_handle);
  }
  vehicle_crashsound_t::m_DataMap.baseMap = 0;
  vehicle_crashsound_t::m_DataMap.dataDesc = &DataMapInit<vehicle_crashsound_t>(vehicle_crashsound_t *)::dataDesc[1];
  vehicle_crashsound_t::m_DataMap.dataNumFields = 4;
  return &vehicle_crashsound_t::m_DataMap;
}


// vehiclesounds_t::AddDatadescMetadataKeys  (line 53, @0x0000000002406310, libserver.so)
void __fastcall vehiclesounds_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// vehiclesounds_t::GetBaseMap  (line 53, @0x0000000002406320, libserver.so)
datamap_t *__cdecl vehiclesounds_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<vehiclesounds_t>  (line 53, @0x0000000002406330, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CUtlVector<vehicle_crashsound_t> >, GetDataOps<CUtlVector<vehicle_gear_t> >
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_13.cpp
// strings: "vehiclesounds_t"
// globals: `guard variable for'DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::nameHolder, `guard variable for'DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::dataDesc, vehiclesounds_t::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>>>(CUtlVector<vehicle_gear_t,CUtlMemor, `guard variable for'CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>>>(CUtlVector<vehicle_cras, CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>>>(CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int, CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>>>(CUtlVector<vehicle_crashsound_t,CUtlMemory<, DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::nameHolder (10 total)
datamap_t *__fastcall DataMapInit<vehiclesounds_t>(vehiclesounds_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::nameHolder) != 0 )
  {
    DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::nameHolder.m_pszBase = "vehiclesounds_t";
    DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::nameHolder,
      &_dso_handle);
  }
  vehiclesounds_t::m_DataMap.baseMap = 0;
  if ( `guard variable for'datamap_t * DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::dataDesc) != 0 )
  {
    DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::dataDesc[1].fieldSize = 9;
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>>>(CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>>>(CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>>>(CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>> *)::ops = off_40D4330;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>>>(CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>> *)::ops);
    }
    DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::dataDesc[2].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>>>(CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>> *)::ops;
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>>>(CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>>>(CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>>>(CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>> *)::ops = off_40D4370;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>>>(CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>> *)::ops);
    }
    DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::dataDesc[3].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>>>(CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>> *)::ops;
    DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::dataDesc[4].fieldSize = 20;
    DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::dataDesc[5].fieldSize = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::dataDesc);
  }
  vehiclesounds_t::m_DataMap.dataNumFields = 5;
  vehiclesounds_t::m_DataMap.dataDesc = &DataMapInit<vehiclesounds_t>(vehiclesounds_t *)::dataDesc[1];
  return &vehiclesounds_t::m_DataMap;
}


// CPassengerInfo::AddDatadescMetadataKeys  (line 63, @0x0000000002406500, libserver.so)
void __fastcall CPassengerInfo::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CPassengerInfo::GetBaseMap  (line 63, @0x0000000002406510, libserver.so)
datamap_t *__cdecl CPassengerInfo::GetBaseMap()
{
  return 0;
}


// DataMapInit<CPassengerInfo>  (line 63, @0x0000000002406520, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_13.cpp
// strings: "CPassengerInfo"
// globals: `guard variable for'DataMapInit<CPassengerInfo>(CPassengerInfo *)::nameHolder, CPassengerInfo::m_DataMap, DataMapInit<CPassengerInfo>(CPassengerInfo *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPassengerInfo>(CPassengerInfo *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPassengerInfo>(CPassengerInfo *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPassengerInfo>(CPassengerInfo *)::nameHolder) != 0 )
  {
    DataMapInit<CPassengerInfo>(CPassengerInfo *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPassengerInfo>(CPassengerInfo *)::nameHolder.m_pszBase = "CPassengerInfo";
    DataMapInit<CPassengerInfo>(CPassengerInfo *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPassengerInfo>(CPassengerInfo *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPassengerInfo>(CPassengerInfo *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPassengerInfo>(CPassengerInfo *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPassengerInfo>(CPassengerInfo *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPassengerInfo>(CPassengerInfo *)::nameHolder,
      &_dso_handle);
  }
  CPassengerInfo::m_DataMap.baseMap = 0;
  CPassengerInfo::m_DataMap.dataDesc = &DataMapInit<CPassengerInfo>(CPassengerInfo *)::dataDesc[1];
  CPassengerInfo::m_DataMap.dataNumFields = 5;
  return &CPassengerInfo::m_DataMap;
}


// CBaseServerVehicle::AddDatadescMetadataKeys  (line 72, @0x00000000024065e0, libserver.so)
void __fastcall CBaseServerVehicle::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CBaseServerVehicle::GetBaseMap  (line 72, @0x00000000024065f0, libserver.so)
datamap_t *__cdecl CBaseServerVehicle::GetBaseMap()
{
  return 0;
}


// DataMapInit<CBaseServerVehicle>  (line 72, @0x0000000002406600, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CUtlVector<CPassengerInfo> >
// calls: __cxa_guard_acquire, GetSoundSaveRestoreOps, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_13.cpp
// strings: "CBaseServerVehicle"
// globals: `guard variable for'DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::nameHolder, `guard variable for'DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::dataDesc, CBaseServerVehicle::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int>>>(CUtlVector<CPassengerInfo,CUtlMemor, CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int>>>(CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int, DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::nameHolder.m_pszBase = "CBaseServerVehicle";
    DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::nameHolder,
      &_dso_handle);
  }
  CBaseServerVehicle::m_DataMap.baseMap = 0;
  if ( `guard variable for'datamap_t * DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::dataDesc) != 0 )
  {
    DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::dataDesc[10].pSaveRestoreOps = GetSoundSaveRestoreOps();
    DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::dataDesc[11].pSaveRestoreOps = GetSoundSaveRestoreOps();
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int>>>(CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int>>>(CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int>>>(CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int>> *)::ops = off_40D43B0;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int>>>(CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int>> *)::ops);
    }
    DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::dataDesc[24].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int>>>(CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int>> *)::ops;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::dataDesc);
  }
  CBaseServerVehicle::m_DataMap.dataNumFields = 25;
  CBaseServerVehicle::m_DataMap.dataDesc = &DataMapInit<CBaseServerVehicle>(CBaseServerVehicle *)::dataDesc[1];
  return &CBaseServerVehicle::m_DataMap;
}


// CBaseServerVehicle::CBaseServerVehicle  (line 118, @0x000000000240c220, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Init, Purge, RemoveAll, operator=, vehiclesounds_t, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~vehiclesounds_t
// calls: CUtlMemory<vehicle_crashsound_t, int>::Purge, CUtlMemory<vehicle_gear_t, int>::Purge, CUtlVectorBase<vehicle_gear_t, CUtlMemory<vehicle_gear_t, int> >::~CUtlVectorBase, CUtlVectorBase<CPassengerRole, CUtlMemory<CPassengerRole, int> >::RemoveAll, _Unwind_Resume, CUtlMemory<CPassengerInfo, int>::Purge, CUtlMemory<CPassengerRole, int>::Purge, CUtlMemory<CBaseServerVehicle::entryanim_t, int>::Purge, CUtlMemory<CBaseServerVehicle::exitanim_t, int>::Purge
// callers: CSchemaClassBinding<CBaseServerVehicle>::Allocate, CSchemaClassBinding<CBaseServerVehicle>::ConstructInPlace, CSchemaClassBinding<CBaseServerVehicle>::AllocateAndCopyConstruct, CFourWheelServerVehicle::CFourWheelServerVehicle
void __fastcall CBaseServerVehicle::CBaseServerVehicle(CBaseServerVehicle *const this)
{
  CUtlSymbolLarge *iszSound; // r13
  CBaseServerVehicle *v2; // r12
  CBaseServerVehicle *v4; // rax
  bool v5; // zf
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  __int64 i; // rdx
  __int64 v10; // rax
  CUtlSymbolLarge *v11; // rdx

  iszSound = this->m_vehicleSounds.iszSound;
  v2 = this->m_vehicleSounds.iszSound;
  this->_vptr_IVehicle = &off_40D1F10;
  this->m_vehicleSounds._vptr_vehiclesounds_t = &off_3FE4100;
  this->m_PassengerInfo.m_Size = 0;
  this->m_PassengerInfo.m_Memory.m_pMemory = 0;
  this->m_PassengerInfo.m_Memory.m_nAllocationCount = 0;
  this->m_PassengerInfo.m_Memory.m_nGrowSize = 0;
  this->m_PassengerRoles.m_Size = 0;
  this->m_PassengerRoles.m_Memory.m_pMemory = 0;
  this->m_PassengerRoles.m_Memory.m_nAllocationCount = 0;
  this->m_PassengerRoles.m_Memory.m_nGrowSize = 0;
  this->m_EntryAnimations.m_Size = 0;
  this->m_EntryAnimations.m_Memory.m_pMemory = 0;
  this->m_EntryAnimations.m_Memory.m_nAllocationCount = 0;
  this->m_EntryAnimations.m_Memory.m_nGrowSize = 0;
  this->m_ExitAnimations.m_Size = 0;
  this->m_ExitAnimations.m_Memory.m_pMemory = 0;
  this->m_ExitAnimations.m_Memory.m_nAllocationCount = 0;
  this->m_ExitAnimations.m_Memory.m_nGrowSize = 0;
  this->m_hExitBlocker.m_Index = -1;
  this->m_vehicleSounds.pGears.m_Size = 0;
  this->m_vehicleSounds.pGears.m_Memory.m_pMemory = 0;
  this->m_vehicleSounds.pGears.m_Memory.m_nAllocationCount = 0;
  this->m_vehicleSounds.pGears.m_Memory.m_nGrowSize = 0;
  this->m_vehicleSounds.crashSounds.m_Size = 0;
  this->m_vehicleSounds.crashSounds.m_Memory.m_pMemory = 0;
  this->m_vehicleSounds.crashSounds.m_Memory.m_nAllocationCount = 0;
  this->m_vehicleSounds.crashSounds.m_Memory.m_nGrowSize = 0;
  do
  {
    v2->_vptr_IVehicle = 0;
    v2 = (v2 + 8);
  }
  while ( v2 != this->m_vehicleSounds.iszStateSounds );
  v4 = v2;
  do
  {
    v4->_vptr_IVehicle = 0;
    v4 = (v4 + 8);
  }
  while ( v4 != this->m_vehicleSounds.minStateTime );
  this->m_pVehicle = 0;
  v5 = (this->m_vehicleSounds.pGears.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_pDrivableVehicle = 0;
  this->m_nNPCButtons = 0;
  this->m_nPrevNPCButtons = 0;
  x = vec3_origin.x;
  this->m_flTurnDegrees = 0.0;
  this->m_bParsedAnimations = 0;
  this->m_vecCurrentExitEndPoint.x = x;
  y = vec3_origin.y;
  this->m_iCurrentExitAnim = 0;
  this->m_vecCurrentExitEndPoint.y = y;
  z = vec3_origin.z;
  this->m_flVehicleVolume = 0.5;
  this->m_vecCurrentExitEndPoint.z = z;
  this->m_iSoundGear = 0;
  this->m_pStateSound = 0;
  this->m_pStateSoundFade = 0;
  this->m_soundState = sound_states::SS_NONE;
  this->m_flSpeedPercentage = 0.0;
  this->m_bUseLegacyExitChecks = 0;
  this->m_vehicleSounds.pGears.m_Size = 0;
  if ( v5 )
    CUtlMemory<vehicle_gear_t,int>::Purge(&this->m_vehicleSounds.pGears.m_Memory);
  v5 = (this->m_vehicleSounds.crashSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vehicleSounds.crashSounds.m_Size = 0;
  if ( v5 )
    CUtlMemory<vehicle_crashsound_t,int>::Purge(&this->m_vehicleSounds.crashSounds.m_Memory);
  for ( i = 0; ; ++i )
  {
    v10 = i * 8 + 8;
    iszSound->u.m_Id = 0;
    if ( i == 8 )
      break;
    iszSound = &this->m_vehicleSounds.iszSound[i + 1];
  }
  v11 = &this->m_vehicleSounds.iszStateSounds[1];
  LOBYTE(v10) = 0;
  while ( 1 )
  {
    v2->_vptr_IVehicle = 0;
    *(this->m_vehicleSounds.minStateTime + v10) = 0.0;
    v10 += 4;
    if ( v10 == 80 )
      break;
    v2 = v11++;
  }
}


// CBaseServerVehicle::~CBaseServerVehicle  (line 144, @0x000000000240c060, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~vehiclesounds_t
// calls: CBaseServerVehicle::SoundShutdown, CUtlVectorBase<CPassengerRole, CUtlMemory<CPassengerRole, int> >::RemoveAll, CUtlMemory<vehicle_crashsound_t, int>::Purge, CUtlMemory<CPassengerInfo, int>::Purge, CUtlMemory<CPassengerRole, int>::Purge, CUtlMemory<CBaseServerVehicle::exitanim_t, int>::Purge, CUtlMemory<CBaseServerVehicle::entryanim_t, int>::Purge, CUtlMemory<vehicle_gear_t, int>::Purge
// callers: CSchemaClassBinding<CBaseServerVehicle>::Deallocate, CSchemaClassBinding<CBaseServerVehicle>::DestructInPlace, CFourWheelServerVehicle::~CFourWheelServerVehicle
void __fastcall CBaseServerVehicle::~CBaseServerVehicle(CBaseServerVehicle *const this)
{
  float v1; // xmm1_4
  bool v3; // zf

  this->_vptr_IVehicle = &off_40D1F10;
  CBaseServerVehicle::SoundShutdown(this, 0.0, v1);
  v3 = (this->m_vehicleSounds.crashSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vehicleSounds._vptr_vehiclesounds_t = &off_3FE4100;
  this->m_vehicleSounds.crashSounds.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<vehicle_crashsound_t,int>::Purge(&this->m_vehicleSounds.crashSounds.m_Memory);
    if ( (this->m_vehicleSounds.crashSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<vehicle_crashsound_t,int>::Purge(&this->m_vehicleSounds.crashSounds.m_Memory);
  }
  v3 = (this->m_vehicleSounds.pGears.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vehicleSounds.pGears.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<vehicle_gear_t,int>::Purge(&this->m_vehicleSounds.pGears.m_Memory);
    if ( (this->m_vehicleSounds.pGears.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<vehicle_gear_t,int>::Purge(&this->m_vehicleSounds.pGears.m_Memory);
  }
  v3 = (this->m_ExitAnimations.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ExitAnimations.m_Size = 0;
  if ( !v3
    || (CUtlMemory<CBaseServerVehicle::exitanim_t,int>::Purge(&this->m_ExitAnimations.m_Memory),
        (this->m_ExitAnimations.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v3 = (this->m_EntryAnimations.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_EntryAnimations.m_Size = 0;
    if ( !v3 )
      goto LABEL_5;
  }
  else
  {
    CUtlMemory<CBaseServerVehicle::exitanim_t,int>::Purge(&this->m_ExitAnimations.m_Memory);
    v3 = (this->m_EntryAnimations.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_EntryAnimations.m_Size = 0;
    if ( !v3 )
      goto LABEL_5;
  }
  CUtlMemory<CBaseServerVehicle::entryanim_t,int>::Purge(&this->m_EntryAnimations.m_Memory);
  if ( (this->m_EntryAnimations.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CBaseServerVehicle::entryanim_t,int>::Purge(&this->m_EntryAnimations.m_Memory);
LABEL_5:
  CUtlVectorBase<CPassengerRole,CUtlMemory<CPassengerRole,int>>::RemoveAll(&this->m_PassengerRoles);
  if ( (this->m_PassengerRoles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CPassengerRole,int>::Purge(&this->m_PassengerRoles.m_Memory);
    if ( (this->m_PassengerRoles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CPassengerRole,int>::Purge(&this->m_PassengerRoles.m_Memory);
  }
  v3 = (this->m_PassengerInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PassengerInfo.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CPassengerInfo,int>::Purge(&this->m_PassengerInfo.m_Memory);
    if ( (this->m_PassengerInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CPassengerInfo,int>::Purge(&this->m_PassengerInfo.m_Memory);
  }
}


// CBaseServerVehicle::Precache  (line 152, @0x00000000023fa520, libserver.so)  // inlines: operator[]
// calls: CBaseEntity::PrecacheScriptSound
void __fastcall CBaseServerVehicle::Precache(CBaseServerVehicle *const this, const CEntityPrecacheContext *pContext)
{
  __int64 i; // rbx
  __int64 v4; // r13
  vehicle_crashsound_t *v5; // rax
  __int64 j; // rbx

  for ( i = 0; i != 72; i += 8 )
  {
    if ( *(&this->m_vehicleSounds.iszSound[0].u.m_Id + i) != 0 )
      CBaseEntity::PrecacheScriptSound(*(&this->m_vehicleSounds.iszSound[0].u.m_pAsString + i), 0);
  }
  if ( this->m_vehicleSounds.crashSounds.m_Size > 0 )
  {
    v4 = 0;
    LOBYTE(i) = 0;
    do
    {
      v5 = &this->m_vehicleSounds.crashSounds.m_Memory.m_pMemory[v4];
      if ( v5->iszCrashSound.u.m_Id != 0 )
        CBaseEntity::PrecacheScriptSound(v5->iszCrashSound.u.m_pAsString, 0);
      LODWORD(i) = i + 1;
      ++v4;
    }
    while ( this->m_vehicleSounds.crashSounds.m_Size > i );
  }
  for ( j = 0; j != 20; ++j )
  {
    if ( this->m_vehicleSounds.iszStateSounds[j].u.m_Id != 0 )
      CBaseEntity::PrecacheScriptSound(this->m_vehicleSounds.iszStateSounds[j].u.m_pAsString, 0);
  }
}


// CBaseServerVehicle::Initialize  (line 183, @0x0000000002406780, libserver.so)
// calls: PhysFindOrAddVehicleScript
bool __fastcall CBaseServerVehicle::Initialize(CBaseServerVehicle *const this, const char *pScriptName)
{
  return PhysFindOrAddVehicleScript(pScriptName, 0, &this->m_vehicleSounds);
}


// CBaseServerVehicle::SetVehicle  (line 196, @0x00000000023f8b50, libserver.so)
// calls: __dynamic_cast
// callers: CFourWheelServerVehicle::SetVehicle
// globals: `typeinfo for'IDrivableVehicle
void __fastcall CBaseServerVehicle::SetVehicle(CBaseServerVehicle *const this, CBaseEntity *pVehicle)
{
  this->m_pVehicle = pVehicle;
  if ( pVehicle != 0 )
    this->m_pDrivableVehicle = __dynamic_cast(pVehicle, &`typeinfo for'CBaseEntity, &`typeinfo for'IDrivableVehicle, -2);
  else
    this->m_pDrivableVehicle = 0;
}


// CBaseServerVehicle::GetDrivableVehicle  (line 204, @0x00000000024067a0, libserver.so)
IDrivableVehicle *__fastcall CBaseServerVehicle::GetDrivableVehicle(CBaseServerVehicle *const this)
{
  return this->m_pDrivableVehicle;
}


// CBaseServerVehicle::GetDrivableVehicle  (line 210, @0x00000000024067b0, libserver.so)
const IDrivableVehicle *__fastcall CBaseServerVehicle::GetDrivableVehicle(const CBaseServerVehicle *const this)
{
  return this->m_pDrivableVehicle;
}


// CBaseServerVehicle::GetPassenger  (line 220, @0x00000000023f87d0, libserver.so)  // inlines: GetDrivableVehicle
CBaseCombatCharacter *__fastcall CBaseServerVehicle::GetPassenger(CBaseServerVehicle *const this, int nRole)
{
  __int64 v2; // rax

  v2 = (*this->m_pDrivableVehicle->_vptr_IDrivableVehicle)(this->m_pDrivableVehicle, nRole);
  if ( v2 != 0 )
    return (*(*v2 + 1176LL))(v2);
  else
    return 0;
}


// CBaseServerVehicle::GetPassenger  (line 231, @0x00000000023f8800, libserver.so)  // inlines: GetDrivableVehicle, GetDriver
const CBaseCombatCharacter *__fastcall CBaseServerVehicle::GetPassenger(
        const CBaseServerVehicle *const this,
        int nRole)
{
  __int64 v2; // rax

  v2 = (*this->m_pDrivableVehicle->_vptr_IDrivableVehicle)(this->m_pDrivableVehicle, nRole);
  if ( v2 != 0 )
    return (*(*v2 + 1184LL))(v2);
  else
    return 0;
}


// CBaseServerVehicle::GetPassengerRole  (line 245, @0x00000000023f8830, libserver.so)  // inlines: GetDrivableVehicle, GetDriver
int __fastcall CBaseServerVehicle::GetPassengerRole(
        const CBaseServerVehicle *const this,
        const CBaseCombatCharacter *pPassenger)
{
  return -(pPassenger != (*this->m_pDrivableVehicle->_vptr_IDrivableVehicle)(this->m_pDrivableVehicle));
}


// CBaseServerVehicle::NPC_AddPassenger  (line 258, @0x0000000002407e40, libserver.so)  // inlines: CUtlSymbolLarge, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CBaseServerVehicle::FindRoleIndexByName
__int64 __fastcall CBaseServerVehicle::NPC_AddPassenger(
        CBaseServerVehicle *const this,
        CBaseCombatCharacter *pPassenger,
        string_t strRoleName,
        unsigned int nSeat)
{
  unsigned int v8; // ebx
  unsigned int RoleIndexByName; // r15d
  CBaseCombatCharacter *v10; // rax
  int m_Size; // eax
  CPassengerInfo *m_pMemory; // rdi
  __int64 v13; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v15; // eax
  __int16 v16; // cx
  string_t strRoleNamea; // [rsp+0h] [rbp-40h] BYREF

  if ( pPassenger == 0 )
    return 0;
  v8 = (*(pPassenger->_vptr_IHandleEntity + 140))(pPassenger);
  if ( v8 != 0 )
  {
    return 0;
  }
  else
  {
    strRoleNamea.u.m_Id = *strRoleName.u.m_Id;
    RoleIndexByName = CBaseServerVehicle::FindRoleIndexByName(this, &strRoleNamea);
    if ( RoleIndexByName != -1 )
    {
      v10 = (*(this->_vptr_IVehicle + 36))(this, RoleIndexByName, nSeat);
      if ( pPassenger == v10 )
      {
        return 1;
      }
      else if ( v10 == 0 )
      {
        m_Size = this->m_PassengerInfo.m_Size;
        if ( m_Size > 0 )
        {
          m_pMemory = this->m_PassengerInfo.m_Memory.m_pMemory;
          v13 = &m_pMemory[(m_Size - 1) + 1];
          while ( nSeat != m_pMemory->m_nSeat || RoleIndexByName != m_pMemory->m_nRole )
          {
            if ( ++m_pMemory == v13 )
              return v8;
          }
          m_pEntity = pPassenger->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            if ( m_pEntity->m_EHandle.m_Index == -1 )
              v16 = 0x7FFF;
            else
              v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            v8 = 1;
            LOWORD(m_pMemory->m_hPassenger.m_Index) = v16 | m_pMemory->m_hPassenger.m_Index & 0x8000;
            m_pMemory->m_hPassenger.m_Index = (v15 << 15) | m_pMemory->m_hPassenger.m_Index & 0x7FFF;
          }
          else
          {
            m_pMemory->m_hPassenger.m_Index = -1;
            return 1;
          }
        }
      }
    }
  }
  return v8;
}


// CBaseServerVehicle::NPC_RemovePassenger  (line 297, @0x00000000023fae50, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Set, operator CEntityInstance*, operator=, operator==
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBaseServerVehicle::NPC_RemovePassenger(
        CBaseServerVehicle *const this,
        CBaseCombatCharacter *pPassenger)
{
  bool result; // al
  int m_Size; // edx
  CPassengerInfo *m_pMemory; // r10
  __int64 v7; // rbx
  CPassengerInfo *v8; // rdx
  uint32 m_Index; // ecx
  CEntityIdentity *v10; // r8
  CEntityIdentity *v11; // r8

  if ( pPassenger == 0 )
    return 0;
  result = (*(pPassenger->_vptr_IHandleEntity + 140))(pPassenger);
  if ( result )
    return 0;
  m_Size = this->m_PassengerInfo.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_PassengerInfo.m_Memory.m_pMemory;
    v7 = &m_pMemory[(m_Size - 1) + 1];
    v8 = m_pMemory;
    while ( 1 )
    {
      m_Index = v8->m_hPassenger.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_hPassenger.m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[v8->m_hPassenger.m_Index & 0x1FF];
          if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index && pPassenger == v11->m_pInstance )
            break;
        }
      }
      if ( ++v8 == v7 )
        return result;
    }
    v8->m_hPassenger.m_Index = -1;
    return 1;
  }
  return result;
}


// CBaseServerVehicle::NPC_GetPassengerSeatAttachment  (line 322, @0x00000000023faca0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==, operator[]
// globals: CEntityHandle::gm_pEntityList
int __fastcall CBaseServerVehicle::NPC_GetPassengerSeatAttachment(
        CBaseServerVehicle *const this,
        CBaseCombatCharacter *pPassenger)
{
  int m_Size; // edx
  int result; // eax
  CPassengerInfo *v4; // rbx
  CPassengerInfo *m_pMemory; // rax
  CBaseCombatCharacter *m_pInstance; // r8
  uint32 m_Index; // edx
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx

  m_Size = this->m_PassengerInfo.m_Size;
  result = -1;
  if ( m_Size > 0 )
  {
    v4 = &this->m_PassengerInfo.m_Memory.m_pMemory[(m_Size - 1) + 1];
    m_pMemory = this->m_PassengerInfo.m_Memory.m_pMemory;
    do
    {
      m_pInstance = 0;
      m_Index = m_pMemory->m_hPassenger.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_hPassenger.m_Index) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[m_pMemory->m_hPassenger.m_Index & 0x1FF];
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
            m_pInstance = v9->m_pInstance;
        }
      }
      if ( pPassenger == m_pInstance )
        return this->m_PassengerRoles.m_Memory.m_pMemory[m_pMemory->m_nRole].m_PassengerSeats.m_Memory.m_pMemory[m_pMemory->m_nSeat].m_nAttachmentID;
      ++m_pMemory;
    }
    while ( m_pMemory != v4 );
    return -1;
  }
  return result;
}


// CBaseServerVehicle::NPC_GetPassengerSeatPosition  (line 345, @0x00000000023f8c00, libserver.so)  // inlines: operator=
// calls: __dynamic_cast, CBaseAnimating::GetAttachment
bool __fastcall CBaseServerVehicle::NPC_GetPassengerSeatPosition(
        CBaseServerVehicle *const this,
        CBaseCombatCharacter *pPassenger,
        Vector *vecResultPos,
        QAngle *vecResultAngles)
{
  int v7; // eax
  AttachmentHandle_t v8; // r14
  CBaseEntity *m_pVehicle; // rdi
  const CBaseAnimating *v10; // rax
  Vector vecPos; // [rsp+0h] [rbp-40h] BYREF
  QAngle vecAngles; // [rsp+10h] [rbp-30h] BYREF

  v7 = (*(this->_vptr_IVehicle + 33))(this, pPassenger);
  v8 = v7;
  if ( v7 == -1 )
    return 0;
  m_pVehicle = this->m_pVehicle;
  if ( m_pVehicle == 0 )
    return 0;
  v10 = __dynamic_cast(m_pVehicle, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseAnimating, 0);
  if ( v10 == 0 )
    return 0;
  CBaseAnimating::GetAttachment(v10, v8, &vecPos, &vecAngles);
  if ( vecResultPos != 0 )
    *vecResultPos = vecPos;
  if ( vecResultAngles != 0 )
    *vecResultAngles = vecAngles;
  return 1;
}


// CBaseServerVehicle::NPC_GetPassengerSeatPositionLocal  (line 378, @0x00000000023f94f0, libserver.so)  // inlines: operator=
// calls: CBaseAnimating::GetAttachmentLocal
bool __fastcall CBaseServerVehicle::NPC_GetPassengerSeatPositionLocal(
        CBaseServerVehicle *const this,
        CBaseCombatCharacter *pPassenger,
        Vector *vecResultPos,
        QAngle *vecResultAngles)
{
  int v7; // eax
  AttachmentHandle_t v8; // r14
  const CBaseAnimating *v9; // rax
  Vector vecPos; // [rsp+0h] [rbp-40h] BYREF
  QAngle vecAngles; // [rsp+10h] [rbp-30h] BYREF

  v7 = (*(this->_vptr_IVehicle + 33))(this, pPassenger);
  v8 = v7;
  if ( v7 == -1 )
    return 0;
  v9 = (*(this->m_pVehicle->_vptr_IHandleEntity + 43))(this->m_pVehicle);
  if ( v9 == 0 )
    return 0;
  CBaseAnimating::GetAttachmentLocal(v9, v8, &vecPos, &vecAngles);
  if ( vecResultPos != 0 )
    *vecResultPos = vecPos;
  if ( vecResultAngles != 0 )
    *vecResultAngles = vecAngles;
  return 1;
}


// CBaseServerVehicle::NPC_GetPassengerSeatAnims  (line 412, @0x00000000023fab80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==, operator[]
// globals: CEntityHandle::gm_pEntityList
const PassengerSeatAnims_t *__fastcall CBaseServerVehicle::NPC_GetPassengerSeatAnims(
        CBaseServerVehicle *const this,
        CBaseCombatCharacter *pPassenger,
        PassengerSeatAnimType_t nType)
{
  int m_Size; // eax
  CPassengerInfo *v4; // rbx
  CPassengerInfo *m_pMemory; // rax
  CBaseCombatCharacter *m_pInstance; // r9
  uint32 m_Index; // ecx
  CEntityIdentity *v8; // r8
  CEntityIdentity *v9; // r8
  int m_nSeat; // ecx
  int m_nRole; // eax

  m_Size = this->m_PassengerInfo.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v4 = &this->m_PassengerInfo.m_Memory.m_pMemory[(m_Size - 1) + 1];
  m_pMemory = this->m_PassengerInfo.m_Memory.m_pMemory;
  while ( 1 )
  {
    m_pInstance = 0;
    m_Index = m_pMemory->m_hPassenger.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_hPassenger.m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[m_pMemory->m_hPassenger.m_Index & 0x1FF];
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
          m_pInstance = v9->m_pInstance;
      }
    }
    if ( pPassenger == m_pInstance )
      break;
    if ( ++m_pMemory == v4 )
      return 0;
  }
  m_nSeat = m_pMemory->m_nSeat;
  m_nRole = m_pMemory->m_nRole;
  if ( nType == PassengerSeatAnimType_t::PASSENGER_SEAT_ENTRY )
    return &this->m_PassengerRoles.m_Memory.m_pMemory[m_nRole].m_PassengerSeats.m_Memory.m_pMemory[m_nSeat].m_EntryTransitions;
  if ( nType != PassengerSeatAnimType_t::PASSENGER_SEAT_EXIT )
    return 0;
  return &this->m_PassengerRoles.m_Memory.m_pMemory[m_nRole].m_PassengerSeats.m_Memory.m_pMemory[m_nSeat].m_ExitTransitions;
}


// CBaseServerVehicle::SetPassenger  (line 444, @0x00000000023fafd0, libserver.so)  // inlines: GetDrivableVehicle, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToBasePlayer, operator CEntityInstance*, operator=
// calls: CBasePlayer::ShowCrosshair, UTIL_Remove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseServerVehicle::SetPassenger(
        CBaseServerVehicle *const this,
        int nRole,
        CBaseCombatCharacter *pPassenger)
{
  vec_t *v5; // rax
  CBasePlayer *v7; // rbx
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx

  if ( pPassenger != 0 )
  {
    if ( (*(pPassenger->_vptr_IHandleEntity + 140))(pPassenger, nRole) != 0
      && (*(pPassenger->_vptr_IHandleEntity + 140))(pPassenger) != 0 )
    {
      v5 = (*(pPassenger->_vptr_IHandleEntity + 171))(pPassenger);
      this->m_savedViewOffset.x = *v5;
      this->m_savedViewOffset.y = v5[1];
      this->m_savedViewOffset.z = v5[2];
      (*(pPassenger->_vptr_IHandleEntity + 211))(pPassenger, &vec3_origin);
      CBasePlayer::ShowCrosshair(pPassenger, 0);
      (*(this->m_pDrivableVehicle->_vptr_IDrivableVehicle + 9))(this->m_pDrivableVehicle, pPassenger);
    }
  }
  else
  {
    v7 = (*(this->_vptr_IVehicle + 62))(this);
    if ( v7 != 0 && (*(v7->_vptr_IHandleEntity + 140))(v7) != 0 )
    {
      (*(v7->_vptr_IHandleEntity + 211))(v7, &this->m_savedViewOffset);
      CBasePlayer::ShowCrosshair(v7, 1);
    }
    (*(this->m_pDrivableVehicle->_vptr_IDrivableVehicle + 11))(this->m_pDrivableVehicle, nRole);
    (*(this->m_pDrivableVehicle->_vptr_IDrivableVehicle + 7))(this->m_pDrivableVehicle, 0);
    m_Index = this->m_hExitBlocker.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hExitBlocker.m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[this->m_hExitBlocker.m_Index & 0x1FF];
        if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
          m_pInstance = v11->m_pInstance;
      }
    }
    UTIL_Remove(m_pInstance);
  }
}


// CBaseServerVehicle::GetPassengerSeatPoint  (line 507, @0x0000000002406930, libserver.so)  // inlines: UTIL_ParentToWorldSpace, operator=
// calls: __dynamic_cast, V_snprintf, CBaseAnimating::LookupAttachment, CBaseAnimating::SelectWeightedSequence, CBaseServerVehicle::GetLocalAttachmentAtTime, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, UTIL_ParentToWorldSpace, __stack_chk_fail
// strings: "vehicle_feet_passenger%d"
void __fastcall CBaseServerVehicle::GetPassengerSeatPoint(
        CBaseServerVehicle *const this,
        int nRole,
        Vector *pPoint,
        QAngle *pAngles)
{
  CBaseEntity *m_pVehicle; // rdi
  CBaseAnimating *v9; // r14
  int v10; // r15d
  HSequence v11; // eax
  Vector vecOrigin; // [rsp+10h] [rbp-80h] BYREF
  QAngle vecAngles; // [rsp+20h] [rbp-70h] BYREF
  char pAttachmentName[40]; // [rsp+30h] [rbp-60h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  m_pVehicle = this->m_pVehicle;
  if ( m_pVehicle != 0
    && (v9 = __dynamic_cast(m_pVehicle, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseAnimating, 0)) != 0
    && (V_snprintf(pAttachmentName, 32, "vehicle_feet_passenger%d", nRole),
        v10 = CBaseAnimating::LookupAttachment(v9, pAttachmentName),
        v11.m_Data = CBaseAnimating::SelectWeightedSequence(v9, 1).m_Data,
        v10 != 0)
    && v11.m_Data != -1
    && CBaseServerVehicle::GetLocalAttachmentAtTime(this, v11, v10, 0.0, &vecOrigin, &vecAngles) != 0 )
  {
    UTIL_ParentToWorldSpace(v9, &vecOrigin, &vecAngles);
    if ( pPoint != 0 )
      *pPoint = vecOrigin;
    if ( pAngles != 0 )
      *pAngles = vecAngles;
  }
  else
  {
    if ( pPoint != 0 )
      *pPoint = *CBaseEntity::GetAbsOrigin(this->m_pVehicle);
    if ( pAngles != 0 )
      *pAngles = *CBaseEntity::GetAbsAngles(this->m_pVehicle);
  }
}


// CBaseServerVehicle::CheckExitPoint  (line 561, @0x00000000023fb730, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, operator*, operator*=, operator+, operator=
// calls: CBaseEntity::GetLocalAngles, CBaseEntity::GetAbsOrigin, AngleVectors, CGameTrace::Init, SafeGetViewVectors, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
bool __fastcall CBaseServerVehicle::CheckExitPoint(
        CBaseServerVehicle *const this,
        float yaw,
        int distance,
        Vector *pEndPoint)
{
  QAngle *LocalAngles; // rax
  CBaseEntity *m_pVehicle; // rdi
  const Vector *AbsOrigin; // rax
  float v10; // xmm3_4
  vec_t y; // xmm7_4
  vec_t v12; // xmm2_4
  vec_t v13; // xmm0_4
  CBaseEntity *v14; // r13
  const CViewVectors *ViewVectors; // r12
  const CViewVectors *v16; // rax
  float v17; // xmm2_4
  float v18; // xmm5_4
  float z; // xmm4_4
  float v20; // xmm0_4
  float v21; // xmm5_4
  float v22; // xmm0_4
  vec_t v23; // xmm2_4
  float v26; // [rsp+14h] [rbp-18Ch]
  float x; // [rsp+18h] [rbp-188h]
  float v28; // [rsp+1Ch] [rbp-184h]
  QAngle vehicleAngles; // [rsp+20h] [rbp-180h] BYREF
  Vector vecDir; // [rsp+30h] [rbp-170h] BYREF
  CTraceFilterSimple v31; // [rsp+40h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+80h] [rbp-120h] BYREF
  trace_t tr; // [rsp+D0h] [rbp-D0h] BYREF

  LocalAngles = CBaseEntity::GetLocalAngles(this->m_pVehicle);
  m_pVehicle = this->m_pVehicle;
  vehicleAngles = *LocalAngles;
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pVehicle);
  x = AbsOrigin->x;
  v10 = AbsOrigin->z + 12.0;
  y = AbsOrigin->y;
  vehicleAngles.y = yaw + vehicleAngles.y;
  v28 = y;
  v26 = v10;
  AngleVectors(&vehicleAngles, 0, &vecDir, 0);
  tr.m_ShapeAttributes.m_nCollisionGroup = 0;
  tr.m_ShapeAttributes.m_nHierarchyId = 0;
  vecDir.x = -vecDir.x;
  vecDir.y = -vecDir.y;
  vecDir.z = -vecDir.z;
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  memset(&tr.m_ShapeAttributes, 0, 24);
  v12 = (vecDir.y * distance) + v28;
  v13 = (vecDir.z * distance) + v26;
  pEndPoint->x = (vecDir.x * distance) + x;
  pEndPoint->y = v12;
  pEndPoint->z = v13;
  tr.m_ShapeAttributes.m_nEntityId = 0;
  CGameTrace::Init(&tr);
  v14 = this->m_pVehicle;
  ViewVectors = SafeGetViewVectors();
  v16 = SafeGetViewVectors();
  v17 = pEndPoint->x;
  ray.m_Delta.w = 0.0;
  v18 = pEndPoint->y;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  z = pEndPoint->z;
  ray.m_flRadius = 0.0;
  ray.m_Start.w = 0.0;
  ray.m_Delta.x = v17 - x;
  ray.m_Delta.y = v18 - v28;
  ray.m_Delta.z = z - v26;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Extents.x = ViewVectors->m_vHullMax.x - v16->m_vHullMin.x;
  ray.m_Extents.y = ViewVectors->m_vHullMax.y - v16->m_vHullMin.y;
  v20 = ViewVectors->m_vHullMax.z - v16->m_vHullMin.z;
  ray.m_Extents.x = ray.m_Extents.x * 0.5;
  ray.m_Extents.y = ray.m_Extents.y * 0.5;
  ray.m_Extents.z = v20 * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  ray.m_StartOffset.x = v16->m_vHullMin.x + ViewVectors->m_vHullMax.x;
  ray.m_StartOffset.y = v16->m_vHullMin.y + ViewVectors->m_vHullMax.y;
  v21 = ray.m_StartOffset.y * 0.5;
  v22 = (v16->m_vHullMin.z + ViewVectors->m_vHullMax.z) * 0.5;
  v23 = x + (ray.m_StartOffset.x * 0.5);
  ray.m_StartOffset.x = -(ray.m_StartOffset.x * 0.5);
  ray.m_Start.x = v23;
  ray.m_StartOffset.y = -(ray.m_StartOffset.y * 0.5);
  ray.m_Start.z = v26 + v22;
  ray.m_Start.y = v28 + v21;
  ray.m_StartOffset.z = -v22;
  CTraceFilterSimple::CTraceFilterSimple(&v31, v14, 4, 0);
  v31.m_attr.m_nInteractsWith |= 0x87011uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v31, &tr);
  return tr.fraction >= 1.0;
}


// CBaseServerVehicle::GetPassengerExitPoint  (line 586, @0x00000000023fcae0, libserver.so)  // inlines: CGameTrace, CollisionCenter, CollisionToWorldSpace, EnableInteractsWith, Init, IsBoundsDefinedInEntitySpace, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorMA, VectorSubtract, VectorTransform, WorldSpaceAABB, WorldSpaceCenter, operator*=, operator+, operator=, operator==
// calls: __dynamic_cast, CBaseAnimating::GetAttachment, CCollisionProperty::CollisionAABBToWorldAABB, CGameTrace::Init, SafeGetViewVectors, VectorTransform, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::GetAbsOrigin
// strings: "vehicle_driver_exit"
bool __fastcall CBaseServerVehicle::GetPassengerExitPoint(
        CBaseServerVehicle *const this,
        int nRole,
        Vector *pExitPoint,
        QAngle *pAngles)
{
  CBaseEntity *m_pVehicle; // rdi
  const CBaseAnimating *v8; // rax
  bool Attachment; // r12
  CCollisionProperty *m_pCollision; // rdi
  float x; // xmm2_4
  float v13; // xmm1_4
  float y; // xmm3_4
  float v15; // xmm0_4
  float z; // xmm4_4
  const CViewVectors *v17; // r12
  const CViewVectors *v18; // rax
  CBaseEntity *v19; // rbx
  CCollisionProperty *v20; // r14
  double v21; // xmm0_8
  Ray_t *v22; // r8
  vec_t v23; // xmm1_4
  float *v24; // rax
  double v25; // xmm0_8
  const matrix3x4_t *v26; // rax
  float *v27; // r8
  float v28; // xmm7_4
  float v29; // xmm6_4
  float v30; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm5_4
  float v33; // xmm4_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  const CViewVectors *ViewVectors; // r15
  const CViewVectors *v38; // rax
  float v39; // xmm0_4
  float v40; // xmm0_4
  float v41; // xmm0_4
  float *v42; // rax
  const Vector *v43; // rax
  const Vector *AbsOrigin; // rax
  float *p_x; // [rsp+8h] [rbp-1A8h]
  Ray_t *ray; // [rsp+10h] [rbp-1A0h]
  float raya; // [rsp+10h] [rbp-1A0h]
  CBaseEntity *pTrace; // [rsp+18h] [rbp-198h]
  Vector vehicleExitOrigin; // [rsp+20h] [rbp-190h] BYREF
  QAngle vehicleExitAngles; // [rsp+30h] [rbp-180h] BYREF
  CTraceFilterSimple out; // [rsp+40h] [rbp-170h] BYREF
  Ray_t in1; // [rsp+80h] [rbp-130h] BYREF
  trace_t tr; // [rsp+D0h] [rbp-E0h] BYREF

  m_pVehicle = this->m_pVehicle;
  if ( m_pVehicle == 0 )
    goto LABEL_9;
  v8 = __dynamic_cast(m_pVehicle, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseAnimating, 0);
  if ( v8 == 0 )
    goto LABEL_9;
  Attachment = CBaseAnimating::GetAttachment(v8, "vehicle_driver_exit", &vehicleExitOrigin, &vehicleExitAngles);
  if ( !Attachment )
    goto LABEL_9;
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  pTrace = this->m_pVehicle;
  ViewVectors = SafeGetViewVectors();
  v38 = SafeGetViewVectors();
  in1.m_Start.w = 0.0;
  in1.m_Delta.w = 0.0;
  in1.m_StartOffset.w = 0.0;
  in1.m_Extents.w = 0.0;
  in1.m_flRadius = 0.0;
  in1.m_Delta.x = vehicleExitOrigin.x - (vehicleExitOrigin.x + 0.0);
  in1.m_Delta.y = vehicleExitOrigin.y - (vehicleExitOrigin.y + 0.0);
  in1.m_Delta.z = vehicleExitOrigin.z - (vehicleExitOrigin.z + 12.0);
  in1.m_IsSwept = (((in1.m_Delta.x * in1.m_Delta.x) + (in1.m_Delta.y * in1.m_Delta.y)) + (in1.m_Delta.z * in1.m_Delta.z)) != 0.0;
  in1.m_Extents.x = ViewVectors->m_vHullMax.x - v38->m_vHullMin.x;
  in1.m_Extents.y = ViewVectors->m_vHullMax.y - v38->m_vHullMin.y;
  v39 = ViewVectors->m_vHullMax.z - v38->m_vHullMin.z;
  in1.m_Extents.x = in1.m_Extents.x * 0.5;
  in1.m_Extents.y = in1.m_Extents.y * 0.5;
  in1.m_Extents.z = v39 * 0.5;
  in1.m_IsRay = (((in1.m_Extents.x * in1.m_Extents.x) + (in1.m_Extents.y * in1.m_Extents.y))
               + (in1.m_Extents.z * in1.m_Extents.z)) < 0.000001;
  in1.m_StartOffset.x = v38->m_vHullMin.x + ViewVectors->m_vHullMax.x;
  in1.m_StartOffset.y = v38->m_vHullMin.y + ViewVectors->m_vHullMax.y;
  v40 = v38->m_vHullMin.z + ViewVectors->m_vHullMax.z;
  in1.m_Start.x = (vehicleExitOrigin.x + 0.0) + (in1.m_StartOffset.x * 0.5);
  v41 = v40 * 0.5;
  in1.m_StartOffset.x = -(in1.m_StartOffset.x * 0.5);
  in1.m_Start.y = (vehicleExitOrigin.y + 0.0) + (in1.m_StartOffset.y * 0.5);
  in1.m_StartOffset.y = -(in1.m_StartOffset.y * 0.5);
  in1.m_StartOffset.z = -v41;
  in1.m_Start.z = (vehicleExitOrigin.z + 12.0) + v41;
  CTraceFilterSimple::CTraceFilterSimple(&out, pTrace, 4, 0);
  out.m_attr.m_nInteractsWith |= 0x87011uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &in1, &out, &tr);
  if ( !tr.startsolid )
  {
    *pAngles = vehicleExitAngles;
    *pExitPoint = tr.endpos;
  }
  else
  {
LABEL_9:
    if ( (*(this->_vptr_IVehicle + 64))(this, 90, pExitPoint, pAngles, 90.0) != 0
      || (*(this->_vptr_IVehicle + 64))(this, 90, pExitPoint, -90.0) != 0
      || (*(this->_vptr_IVehicle + 64))(this, 100, pExitPoint, 0.0) != 0
      || (*(this->_vptr_IVehicle + 64))(this, 170, pExitPoint, 180.0) != 0 )
    {
      return 1;
    }
    else
    {
      m_pCollision = this->m_pVehicle->m_pCollision;
      if ( m_pCollision != 0 )
      {
        CCollisionProperty::CollisionAABBToWorldAABB(
          m_pCollision,
          &m_pCollision->m_vecMins.m_Value,
          &m_pCollision->m_vecMaxs.m_Value,
          &vehicleExitOrigin,
          &vehicleExitAngles);
        x = vehicleExitOrigin.x;
        v13 = vehicleExitAngles.x;
        y = vehicleExitOrigin.y;
        v15 = vehicleExitAngles.y;
        z = vehicleExitAngles.z;
      }
      else
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(this->m_pVehicle);
        vehicleExitOrigin.x = AbsOrigin->x;
        v13 = vehicleExitOrigin.x;
        x = vehicleExitOrigin.x;
        vehicleExitOrigin.y = AbsOrigin->y;
        v15 = vehicleExitOrigin.y;
        y = vehicleExitOrigin.y;
        z = AbsOrigin->z;
        vehicleExitAngles.x = vehicleExitOrigin.x;
        vehicleExitAngles.y = vehicleExitOrigin.y;
        vehicleExitOrigin.z = z;
        vehicleExitAngles.z = z;
      }
      tr.m_ShapeAttributes.m_nInteractsAs = 0;
      tr.m_ShapeAttributes.m_nHierarchyId = 0;
      tr.m_ShapeAttributes.m_nInteractsWith = 0;
      pExitPoint->z = z + 50.0;
      tr.m_ShapeAttributes.m_nInteractsExclude = 0;
      pExitPoint->y = (v15 + y) * 0.5;
      pExitPoint->x = (v13 + x) * 0.5;
      tr.m_ShapeAttributes.m_nCollisionGroup = 0;
      tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      tr.m_ShapeAttributes.m_nEntityId = 0;
      CGameTrace::Init(&tr);
      v17 = SafeGetViewVectors();
      v18 = SafeGetViewVectors();
      v19 = this->m_pVehicle;
      ray = v18;
      v20 = v19->m_pCollision;
      if ( v20 != 0 )
      {
        v21 = (*(v20->_vptr_ICollideable + 19))(v19->m_pCollision);
        v22 = ray;
        in1.m_Start.z = v23;
        *&in1.m_Start.x = v21;
        if ( (v20->m_nSolidType.m_Value & 0xFD) == 0
          || (v24 = (*(v20->_vptr_ICollideable + 5))(v20), v22 = ray,
                                                           *&v25 = LODWORD(vec3_angle.x),
                                                           vec3_angle.x == *v24)
          && (*&v25 = LODWORD(vec3_angle.y), *&v25 == v24[1])
          && (*&v25 = LODWORD(vec3_angle.z), *&v25 == v24[2]) )
        {
          p_x = &v22->m_Start.x;
          raya = (*(v20->_vptr_ICollideable + 27))(v20);
          v42 = (*(v20->_vptr_ICollideable + 4))(v20);
          v27 = p_x;
          v28 = (in1.m_Start.x * raya) + *v42;
          v29 = (in1.m_Start.y * raya) + v42[1];
          v30 = (raya * in1.m_Start.z) + v42[2];
        }
        else
        {
          v26 = (*(v20->_vptr_ICollideable + 6))(v20, v25);
          VectorTransform(&in1.m_Start.x, v26, &out);
          v27 = &ray->m_Start.x;
          v28 = *&out._vptr_CTraceFilter;
          v29 = *(&out._vptr_CTraceFilter + 1);
          v30 = *&out.m_attr.m_nInteractsWith;
        }
      }
      else
      {
        v43 = CBaseEntity::GetAbsOrigin(v19);
        v27 = &ray->m_Start.x;
        v28 = v43->x;
        v29 = v43->y;
        v30 = v43->z;
      }
      v31 = pExitPoint->x;
      v32 = pExitPoint->y;
      v33 = pExitPoint->z;
      in1.m_Start.w = 0.0;
      in1.m_Delta.w = 0.0;
      in1.m_StartOffset.w = 0.0;
      in1.m_Delta.x = v31 - v28;
      in1.m_Delta.y = v32 - v29;
      in1.m_Delta.z = v33 - v30;
      in1.m_Extents.w = 0.0;
      in1.m_flRadius = 0.0;
      in1.m_IsSwept = (((in1.m_Delta.x * in1.m_Delta.x) + (in1.m_Delta.y * in1.m_Delta.y))
                     + (in1.m_Delta.z * in1.m_Delta.z)) != 0.0;
      in1.m_Extents.x = v17->m_vHullMax.x - v27[3];
      in1.m_Extents.y = v17->m_vHullMax.y - v27[4];
      v34 = v17->m_vHullMax.z - v27[5];
      in1.m_Extents.x = in1.m_Extents.x * 0.5;
      in1.m_Extents.y = in1.m_Extents.y * 0.5;
      in1.m_Extents.z = v34 * 0.5;
      in1.m_IsRay = (((in1.m_Extents.x * in1.m_Extents.x) + (in1.m_Extents.y * in1.m_Extents.y))
                   + (in1.m_Extents.z * in1.m_Extents.z)) < 0.000001;
      in1.m_StartOffset.x = v27[3] + v17->m_vHullMax.x;
      in1.m_StartOffset.y = v27[4] + v17->m_vHullMax.y;
      v35 = v27[5] + v17->m_vHullMax.z;
      in1.m_Start.x = v28 + (in1.m_StartOffset.x * 0.5);
      v36 = v35 * 0.5;
      in1.m_Start.y = v29 + (in1.m_StartOffset.y * 0.5);
      in1.m_Start.z = v30 + v36;
      in1.m_StartOffset.x = -(in1.m_StartOffset.x * 0.5);
      in1.m_StartOffset.y = -(in1.m_StartOffset.y * 0.5);
      in1.m_StartOffset.z = -v36;
      CTraceFilterSimple::CTraceFilterSimple(&out, v19, 4, 0);
      out.m_attr.m_nInteractsWith |= 0x87011uLL;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &in1, &out, &tr);
      return !tr.startsolid;
    }
  }
  return Attachment;
}


// CBaseServerVehicle::ParseExitAnim  (line 649, @0x000000000240c6e0, libserver.so)  // inlines: AddToTail, GrowMemory, V_strncmp<int>, V_strncpy<long unsigned int>, operator[]
// calls: KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, _V_strncpy, KeyValues::GetString, _V_strncmp, CUtlMemory<CBaseServerVehicle::exitanim_t, int>::Grow
// callers: CBaseServerVehicle::ParseEntryExitAnims
// strings: "upsidedown"
void __fastcall CBaseServerVehicle::ParseExitAnim(
        CBaseServerVehicle *const this,
        KeyValues *pkvExitList,
        bool bEscapeExit)
{
  KeyValues *i; // r12
  __int64 m_Size; // r13
  int v7; // eax
  __int64 v8; // r13
  const char *Name; // rax
  const char *String; // rax
  bool v11; // zf
  CBaseServerVehicle::exitanim_t *m_pMemory; // rax

  for ( i = KeyValues::GetFirstSubKey(pkvExitList); i != 0; i = KeyValues::GetNextKey(i) )
  {
    while ( 1 )
    {
      m_Size = this->m_ExitAnimations.m_Size;
      v7 = this->m_ExitAnimations.m_Size;
      if ( m_Size == this->m_ExitAnimations.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CBaseServerVehicle::exitanim_t,int>::Grow(&this->m_ExitAnimations.m_Memory, 1);
        v7 = this->m_ExitAnimations.m_Size;
      }
      v8 = m_Size;
      this->m_ExitAnimations.m_Size = v7 + 1;
      Name = KeyValues::GetName(i);
      _V_strncpy(this->m_ExitAnimations.m_Memory.m_pMemory[v8].szAnimName, Name, 128);
      this->m_ExitAnimations.m_Memory.m_pMemory[v8].bEscapeExit = bEscapeExit;
      String = KeyValues::GetString(i, 0, "", 0, 0);
      v11 = _V_strncmp(String, "upsidedown", 10) == 0;
      m_pMemory = this->m_ExitAnimations.m_Memory.m_pMemory;
      if ( !v11 )
        break;
      m_pMemory[v8].bUpright = 0;
      i = KeyValues::GetNextKey(i);
      if ( i == 0 )
        return;
    }
    m_pMemory[v8].bUpright = 1;
  }
}


// CBaseServerVehicle::ParseNPCSeatTransition  (line 676, @0x00000000024067c0, libserver.so)  // inlines: operator=
// calls: KeyValues::GetString, AllocPooledString, KeyValues::GetInt
// callers: CBaseServerVehicle::ParseNPCPassengerSeat
void __fastcall CBaseServerVehicle::ParseNPCSeatTransition(
        CBaseServerVehicle *const this,
        KeyValues *pTransitionKeyValues,
        CPassengerSeatTransition *pTransition)
{
  const char *String; // rax
  UtlSymLargeId_t v6[4]; // [rsp+0h] [rbp-20h] BYREF

  String = KeyValues::GetString(pTransitionKeyValues, "animation", "", 0, 0);
  AllocPooledString(v6, String);
  pTransition->m_strAnimationName.u.m_Id = v6[0];
  pTransition->m_nPriority = KeyValues::GetInt(pTransitionKeyValues, "priority", 0);
}


// SeatPrioritySort  (line 688, @0x00000000023f8860, libserver.so)
int __fastcall SeatPrioritySort(const SortSeatPriorityType *s1, const SortSeatPriorityType *s2)
{
  return s1->m_nPriority > s2->m_nPriority;
}


// CBaseServerVehicle::ParseNPCPassengerSeat  (line 697, @0x000000000240c7f0, libserver.so)  // inlines: AddToTail, CPassengerSeatTransition, CUtlSymbolLarge, Construct<CPassengerSeatTransition>, Element, GrowMemory, operator=, operator[]
// calls: KeyValues::GetString, CBaseAnimating::LookupAttachment, AllocPooledString, KeyValues::GetFirstSubKey, CBaseServerVehicle::ParseNPCSeatTransition, KeyValues::GetNextKey, KeyValues::GetName, V_stricmp_fast, CUtlVectorBase<CPassengerSeatTransition, CUtlMemory<CPassengerSeatTransition, int> >::Sort, CUtlMemory<CPassengerSeatTransition, int>::Grow
// callers: CBaseServerVehicle::ParseNPCRoles
// strings: "target_attachment"
// globals: SeatPrioritySort(CPassengerSeatTransition const*,CPassengerSeatTransition const*)
void __fastcall CBaseServerVehicle::ParseNPCPassengerSeat(
        CBaseServerVehicle *const this,
        KeyValues *pSetKeyValues,
        CPassengerSeat *pSeat)
{
  const CBaseAnimating *m_pVehicle; // r15
  const char *String; // r14
  KeyValues *i; // rbx
  int v9; // r15d
  int v10; // eax
  CPassengerSeatTransition *v11; // rax
  CPassengerSeatTransition *v12; // rdx
  const char *Name; // r15
  __int64 m_Size; // rdx
  int v15; // eax
  __int64 v16; // rdx
  CPassengerSeatTransition *v17; // rax
  int v18; // [rsp+4h] [rbp-4Ch]
  UtlSymLargeId_t v19[8]; // [rsp+10h] [rbp-40h] BYREF

  m_pVehicle = this->m_pVehicle;
  String = KeyValues::GetString(pSetKeyValues, "target_attachment", "", 0, 0);
  pSeat->m_nAttachmentID = CBaseAnimating::LookupAttachment(m_pVehicle, String);
  AllocPooledString(v19, String);
  pSeat->m_strSeatName.u.m_Id = v19[0];
  for ( i = KeyValues::GetFirstSubKey(pSetKeyValues); i != 0; i = KeyValues::GetNextKey(i) )
  {
    Name = KeyValues::GetName(i);
    if ( V_stricmp_fast(Name, "entry") != 0 )
    {
      if ( V_stricmp_fast(Name, "exit") != 0 )
        continue;
      m_Size = pSeat->m_ExitTransitions.m_Size;
      v15 = pSeat->m_ExitTransitions.m_Size;
      if ( m_Size == pSeat->m_ExitTransitions.m_Memory.m_nAllocationCount )
      {
        v18 = pSeat->m_ExitTransitions.m_Size;
        CUtlMemory<CPassengerSeatTransition,int>::Grow(&pSeat->m_ExitTransitions.m_Memory, 1);
        v15 = pSeat->m_ExitTransitions.m_Size;
        m_Size = v18;
      }
      v16 = m_Size;
      pSeat->m_ExitTransitions.m_Size = v15 + 1;
      v17 = &pSeat->m_ExitTransitions.m_Memory.m_pMemory[v16];
      if ( v17 == 0 )
      {
LABEL_16:
        v12 = 0;
        goto LABEL_7;
      }
      v17->m_strAnimationName.u.m_Id = 0;
      v17->m_nPriority = -1;
      v12 = &pSeat->m_ExitTransitions.m_Memory.m_pMemory[v16];
    }
    else
    {
      v9 = pSeat->m_EntryTransitions.m_Size;
      v10 = v9;
      if ( v9 == pSeat->m_EntryTransitions.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CPassengerSeatTransition,int>::Grow(&pSeat->m_EntryTransitions.m_Memory, 1);
        v10 = pSeat->m_EntryTransitions.m_Size;
      }
      pSeat->m_EntryTransitions.m_Size = v10 + 1;
      v11 = &pSeat->m_EntryTransitions.m_Memory.m_pMemory[v9];
      if ( v11 == 0 )
        goto LABEL_16;
      v11->m_strAnimationName.u.m_Id = 0;
      v11->m_nPriority = -1;
      v12 = &pSeat->m_EntryTransitions.m_Memory.m_pMemory[v9];
    }
LABEL_7:
    CBaseServerVehicle::ParseNPCSeatTransition(this, i, v12);
  }
  CUtlVectorBase<CPassengerSeatTransition,CUtlMemory<CPassengerSeatTransition,int>>::Sort(
    &pSeat->m_EntryTransitions,
    SeatPrioritySort);
  CUtlVectorBase<CPassengerSeatTransition,CUtlMemory<CPassengerSeatTransition,int>>::Sort(
    &pSeat->m_ExitTransitions,
    SeatPrioritySort);
}


// CBaseServerVehicle::FindOrCreatePassengerRole  (line 742, @0x000000000240c9d0, libserver.so)  // inlines: AddToTail, CPassengerRole, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Construct<CPassengerRole>, Element, FStrEq, GrowMemory, String, ToCStr, _V_strcmp, operator=, operator[]
// calls: strcmp, CUtlMemory<CPassengerRole, int>::Grow
// callers: CBaseServerVehicle::ParseNPCRoles
CPassengerRole *__fastcall CBaseServerVehicle::FindOrCreatePassengerRole(
        CBaseServerVehicle *const this,
        string_t strName,
        int *nIndex)
{
  int m_Size; // r12d
  const char *v4; // rbx
  CPassengerRole *v5; // r13
  int v6; // r15d
  const char *m_Id; // rdi
  CPassengerRole *result; // rax
  int v9; // eax
  CPassengerRole *v10; // rcx
  __int64 v11; // rax
  CPassengerRole *v12; // rdx
  CPassengerRole *m_pMemory; // [rsp+28h] [rbp-38h]

  m_Size = this->m_PassengerRoles.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_13:
    v9 = m_Size;
    if ( m_Size == this->m_PassengerRoles.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CPassengerRole,int>::Grow(&this->m_PassengerRoles.m_Memory, 1);
      v9 = this->m_PassengerRoles.m_Size;
    }
    v10 = 0;
    this->m_PassengerRoles.m_Size = v9 + 1;
    v11 = m_Size;
    v12 = &this->m_PassengerRoles.m_Memory.m_pMemory[v11];
    if ( v12 != 0 )
    {
      v12->m_strName.u.m_Id = 0;
      v12->m_PassengerSeats.m_Size = 0;
      v12->m_PassengerSeats.m_Memory.m_pMemory = 0;
      v12->m_PassengerSeats.m_Memory.m_nAllocationCount = 0;
      v12->m_PassengerSeats.m_Memory.m_nGrowSize = 0;
      v10 = &this->m_PassengerRoles.m_Memory.m_pMemory[v11];
    }
    v10->m_strName.u.m_Id = *strName.u.m_Id;
    if ( nIndex != 0 )
      *nIndex = m_Size;
    return &this->m_PassengerRoles.m_Memory.m_pMemory[v11];
  }
  else
  {
    v4 = *strName.u.m_pAsString;
    if ( *strName.u.m_Id == 0 )
      v4 = "";
    m_pMemory = this->m_PassengerRoles.m_Memory.m_pMemory;
    v5 = m_pMemory;
    v6 = 0;
    while ( 1 )
    {
      m_Id = v5->m_strName.u.m_Id;
      if ( v5->m_strName.u.m_Id == 0 )
        m_Id = "";
      if ( v4 == m_Id || strcmp(m_Id, v4) == 0 )
        break;
      ++v6;
      ++v5;
      if ( v6 == m_Size )
        goto LABEL_13;
    }
    result = v5;
    if ( nIndex != 0 )
    {
      *nIndex = v6;
      return (this->m_PassengerRoles.m_Memory.m_pMemory + v5 - m_pMemory);
    }
  }
  return result;
}


// CBaseServerVehicle::ParseNPCRoles  (line 781, @0x000000000240cb20, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CPassengerInfo, CPassengerSeat, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Construct<CPassengerInfo>, Construct<CPassengerSeat>, Element, GetBool, GetInt, GrowMemory, Set, String, ToCStr, operator=, operator[]
// calls: __dynamic_cast, CBaseAnimating::GetModelPtr, KeyValues::GetFirstSubKey, CBaseServerVehicle::ParseNPCPassengerSeat, KeyValues::GetNextKey, KeyValues::GetName, AllocPooledString, CBaseServerVehicle::FindOrCreatePassengerRole, CUtlMemory<CPassengerSeat, int>::Grow, CUtlMemory<CPassengerInfo, int>::Grow, Msg
// callers: CBaseServerVehicle::ParseEntryExitAnims
// strings: "Passenger Roles Parsed:\t%d\n\n", "\tPassenger Role:\t%s (%d seats)\n", "\t\tAttachment: %d\n", "\t\tEntries:\t%d\n", "\t\t=====================\n", "\t\t\tAnimation:\t%s\t(Priority %d)\n" (7 total)
void __fastcall CBaseServerVehicle::ParseNPCRoles(CBaseServerVehicle *const this, KeyValues *pkvPassengerList)
{
  CBaseEntity *m_pVehicle; // rdi
  const CBaseAnimating *v5; // rax
  KeyValues *FirstSubKey; // r12
  CPassengerSeat *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rdx
  CPassengerInfo *v12; // rcx
  CPassengerInfo *v13; // rcx
  int v14; // esi
  const char *Name; // rax
  CPassengerRole *v16; // rax
  CPassengerRole *v17; // r14
  int m_Size; // r15d
  int v19; // edx
  __int64 v20; // r13
  const char *m_Id; // rsi
  CPassengerRole *v22; // rax
  __int64 v23; // r12
  int v24; // r14d
  unsigned __int64 v25; // xmm0_8
  CPassengerRole *v26; // rax
  __int64 v27; // r15
  double v28; // xmm0_8
  __int64 v29; // rsi
  unsigned __int64 v30; // xmm0_8
  CPassengerSeat *v31; // rdx
  const char *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // r15
  double v35; // xmm0_8
  CPassengerSeat *v36; // rdx
  const char *v37; // rsi
  __int64 v38; // rax
  int v39; // [rsp+Ch] [rbp-84h]
  int i; // [rsp+28h] [rbp-68h]
  int nRoleIndex; // [rsp+3Ch] [rbp-54h] BYREF
  string_t strRoleName; // [rsp+40h] [rbp-50h] BYREF
  UtlSymLargeId_t v43[8]; // [rsp+50h] [rbp-40h] BYREF

  if ( pkvPassengerList != 0 )
  {
    m_pVehicle = this->m_pVehicle;
    if ( m_pVehicle != 0 )
    {
      v5 = __dynamic_cast(m_pVehicle, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseAnimating, 0);
      if ( v5 != 0 && CBaseAnimating::GetModelPtr(v5) != 0 )
      {
        FirstSubKey = KeyValues::GetFirstSubKey(pkvPassengerList);
        while ( FirstSubKey != 0 )
        {
          Name = KeyValues::GetName(FirstSubKey);
          AllocPooledString(&strRoleName, Name);
          v43[0] = strRoleName.u.m_Id;
          v16 = CBaseServerVehicle::FindOrCreatePassengerRole(this, v43, &nRoleIndex);
          v17 = v16;
          if ( v16 != 0 )
          {
            m_Size = v16->m_PassengerSeats.m_Size;
            v19 = m_Size;
            if ( m_Size == v16->m_PassengerSeats.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CPassengerSeat,int>::Grow(&v16->m_PassengerSeats.m_Memory, 1);
              v19 = v17->m_PassengerSeats.m_Size;
            }
            v17->m_PassengerSeats.m_Size = v19 + 1;
            v7 = 0;
            v8 = &v17->m_PassengerSeats.m_Memory.m_pMemory[m_Size];
            if ( v8 != 0 )
            {
              *v8 = 0;
              *(v8 + 8) = -1;
              *(v8 + 16) = 0;
              *(v8 + 24) = 0;
              *(v8 + 32) = 0;
              *(v8 + 36) = 0;
              *(v8 + 40) = 0;
              *(v8 + 48) = 0;
              *(v8 + 56) = 0;
              *(v8 + 60) = 0;
              v7 = &v17->m_PassengerSeats.m_Memory.m_pMemory[m_Size];
            }
            CBaseServerVehicle::ParseNPCPassengerSeat(this, FirstSubKey, v7);
            v9 = this->m_PassengerInfo.m_Size;
            v10 = this->m_PassengerInfo.m_Size;
            if ( v9 == this->m_PassengerInfo.m_Memory.m_nAllocationCount )
            {
              v39 = this->m_PassengerInfo.m_Size;
              CUtlMemory<CPassengerInfo,int>::Grow(&this->m_PassengerInfo.m_Memory, 1);
              v10 = this->m_PassengerInfo.m_Size;
              v9 = v39;
            }
            v11 = v9;
            this->m_PassengerInfo.m_Size = v10 + 1;
            v12 = &this->m_PassengerInfo.m_Memory.m_pMemory[v11];
            if ( v12 != 0 )
            {
              v12->m_nRole = -1;
              v12->m_nSeat = -1;
              v12->m_strRoleName.u.m_Id = 0;
              v12->m_strSeatName.u.m_Id = 0;
              v12->m_hPassenger.m_Index = -1;
              v13 = &this->m_PassengerInfo.m_Memory.m_pMemory[v11];
            }
            else
            {
              v13 = 0;
            }
            v13->m_hPassenger.m_Index = -1;
            v14 = nRoleIndex;
            this->m_PassengerInfo.m_Memory.m_pMemory[v11].m_nSeat = m_Size;
            this->m_PassengerInfo.m_Memory.m_pMemory[v11].m_nRole = v14;
            this->m_PassengerInfo.m_Memory.m_pMemory[v11].m_strRoleName = strRoleName;
            this->m_PassengerInfo.m_Memory.m_pMemory[v11].m_strSeatName.u.m_Id = v17->m_PassengerSeats.m_Memory.m_pMemory[m_Size].m_strSeatName.u.m_Id;
            FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
          }
        }
        if ( g_debug_npc_vehicle_roles.m_pParent->m_Value.m_nValue != 0 )
        {
          Msg("Passenger Roles Parsed:\t%d\n\n", this->m_PassengerRoles.m_Size);
          if ( this->m_PassengerRoles.m_Size > 0 )
          {
            v20 = 0;
            i = 0;
            do
            {
              m_Id = "";
              v22 = &this->m_PassengerRoles.m_Memory.m_pMemory[v20];
              if ( v22->m_strName.u.m_Id != 0 )
                m_Id = v22->m_strName.u.m_Id;
              v23 = 0;
              v24 = 0;
              v25 = Msg("\tPassenger Role:\t%s (%d seats)\n", m_Id, v22->m_PassengerSeats.m_Size).m128_u64[0];
              v26 = &this->m_PassengerRoles.m_Memory.m_pMemory[v20];
              if ( v26->m_PassengerSeats.m_Size > 0 )
              {
                do
                {
                  v27 = 0;
                  Msg("\t\tAttachment: %d\n", v26->m_PassengerSeats.m_Memory.m_pMemory[v23].m_nAttachmentID);
                  *&v28 = Msg(
                            "\t\tEntries:\t%d\n",
                            this->m_PassengerRoles.m_Memory.m_pMemory[v20].m_PassengerSeats.m_Memory.m_pMemory[v23].m_EntryTransitions.m_Size).m128_u64[0];
                  v30 = Msg("\t\t=====================\n", v28).m128_u64[0];
                  v31 = &this->m_PassengerRoles.m_Memory.m_pMemory[v20].m_PassengerSeats.m_Memory.m_pMemory[v23];
                  if ( v31->m_EntryTransitions.m_Size > 0 )
                  {
                    do
                    {
                      v32 = "";
                      v33 = &v31->m_EntryTransitions.m_Memory.m_pMemory[v27];
                      if ( *v33 != 0 )
                        v32 = *v33;
                      v30 = Msg("\t\t\tAnimation:\t%s\t(Priority %d)\n", v32, *(v33 + 8)).m128_u64[0];
                      ++v27;
                      v31 = &this->m_PassengerRoles.m_Memory.m_pMemory[v20].m_PassengerSeats.m_Memory.m_pMemory[v23];
                    }
                    while ( v31->m_EntryTransitions.m_Size > v27 );
                  }
                  v34 = 0;
                  Msg("\n", v29, v31, *&v30);
                  *&v35 = Msg(
                            "\t\tExits:\t%d\n",
                            this->m_PassengerRoles.m_Memory.m_pMemory[v20].m_PassengerSeats.m_Memory.m_pMemory[v23].m_ExitTransitions.m_Size).m128_u64[0];
                  v25 = Msg("\t\t=====================\n", v35).m128_u64[0];
                  v26 = &this->m_PassengerRoles.m_Memory.m_pMemory[v20];
                  v36 = &v26->m_PassengerSeats.m_Memory.m_pMemory[v23];
                  if ( v36->m_ExitTransitions.m_Size > 0 )
                  {
                    do
                    {
                      v37 = "";
                      v38 = &v36->m_ExitTransitions.m_Memory.m_pMemory[v34];
                      if ( *v38 != 0 )
                        v37 = *v38;
                      v25 = Msg("\t\t\tAnimation:\t%s\t(Priority %d)\n", v37, *(v38 + 8)).m128_u64[0];
                      v26 = &this->m_PassengerRoles.m_Memory.m_pMemory[v20];
                      ++v34;
                      v36 = &v26->m_PassengerSeats.m_Memory.m_pMemory[v23];
                    }
                    while ( v36->m_ExitTransitions.m_Size > v34 );
                  }
                  ++v24;
                  ++v23;
                }
                while ( v26->m_PassengerSeats.m_Size > v24 );
              }
              ++v20;
              Msg("\n", *&v25);
              ++i;
            }
            while ( this->m_PassengerRoles.m_Size > i );
          }
        }
      }
    }
  }
}


// CBaseServerVehicle::GetLocalAttachmentAtTime  (line 883, @0x0000000002406820, libserver.so)  // inlines: GetCycle, GetSequence, operator=
// calls: CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::SetSequence, CBaseAnimating::SetCycle, CBaseAnimating::GetAttachmentLocal
// callers: CBaseServerVehicle::GetPassengerSeatPoint, CBaseServerVehicle::GetLocalAttachmentAtTime
__int64 __fastcall CBaseServerVehicle::GetLocalAttachmentAtTime(
        CBaseServerVehicle *const this,
        HSequence hQuerySequence,
        AttachmentHandle_t nAttachmentIndex,
        float flCyclePoint,
        Vector *vecOriginOut,
        QAngle *vecAnglesOut)
{
  CBaseAnimating *v10; // rbx
  __int64 result; // rax
  const CBaseAnimatingController *BaseAnimatingController; // rax
  float v13; // xmm1_4
  float v14; // xmm1_4
  HSequence hSequence; // [rsp+4h] [rbp-5Ch]
  float flOldCycle; // [rsp+8h] [rbp-58h]
  Vector vecOrigin; // [rsp+10h] [rbp-50h] BYREF
  QAngle vecAngles; // [rsp+20h] [rbp-40h] BYREF

  v10 = (*(this->m_pVehicle->_vptr_IHandleEntity + 43))(this->m_pVehicle);
  result = 0;
  if ( v10 != 0 )
  {
    BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(v10);
    hSequence.m_Data = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
    flOldCycle = CBaseAnimating::GetBaseAnimatingController(v10)->m_baseLayer.m_flCycle.m_Value;
    CBaseAnimating::SetSequence(v10, hQuerySequence, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
    CBaseAnimating::SetCycle(v10, COERCE_DOUBLE(LODWORD(flCyclePoint)), v13);
    CBaseAnimating::GetAttachmentLocal(v10, nAttachmentIndex, &vecOrigin, &vecAngles);
    if ( vecOriginOut != 0 )
      *vecOriginOut = vecOrigin;
    if ( vecAnglesOut != 0 )
      *vecAnglesOut = vecAngles;
    CBaseAnimating::SetSequence(v10, hSequence, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
    CBaseAnimating::SetCycle(v10, COERCE_DOUBLE(LODWORD(flOldCycle)), v14);
    return 1;
  }
  return result;
}


// CBaseServerVehicle::GetLocalAttachmentAtTime  (line 931, @0x0000000002406b00, libserver.so)
// calls: CBaseAnimating::LookupSequence, CBaseServerVehicle::GetLocalAttachmentAtTime
// callers: CBaseServerVehicle::CacheEntryExitPoints
__int64 __fastcall CBaseServerVehicle::GetLocalAttachmentAtTime(
        CBaseServerVehicle *const this,
        const char *lpszAnimName,
        AttachmentHandle_t nAttachmentIndex,
        float flCyclePoint,
        Vector *vecOriginOut,
        QAngle *vecAnglesOut)
{
  const CBaseAnimating *v11; // rax
  HSequence v12; // eax

  v11 = (*(this->m_pVehicle->_vptr_IHandleEntity + 43))(this->m_pVehicle);
  if ( v11 == 0 )
    return 0;
  v12.m_Data = CBaseAnimating::LookupSequence(v11, lpszAnimName).m_Data;
  if ( v12.m_Data == -1 )
    return 0;
  else
    return CBaseServerVehicle::GetLocalAttachmentAtTime(
             this,
             v12,
             nAttachmentIndex,
             flCyclePoint,
             vecOriginOut,
             vecAnglesOut);
}


// CBaseServerVehicle::CacheEntryExitPoints  (line 947, @0x0000000002406ba0, libserver.so)  // inlines: GetBool, GetInt, UTIL_ParentToWorldSpace, Vector, operator[]
// calls: CBaseAnimating::LookupAttachment, CBaseServerVehicle::GetLocalAttachmentAtTime, Warning, UTIL_ParentToWorldSpace, NDebugOverlay::Box, NDebugOverlay::Axis
// callers: CBaseServerVehicle::ParseEntryExitAnims
// strings: "vehicle_driver_eyes", "Exit animation %s failed to cache target points properly!\n"
void __fastcall CBaseServerVehicle::CacheEntryExitPoints(CBaseServerVehicle *const this)
{
  const CBaseAnimating *v2; // rax
  AttachmentHandle_t v3; // r12
  __int64 v4; // r14
  int v5; // ebx
  CBaseServerVehicle::exitanim_t *v6; // rax
  __int64 v7; // rdx
  CBaseAnimating *pAnimating; // [rsp+10h] [rbp-80h]
  Vector vecExitPoint; // [rsp+20h] [rbp-70h] BYREF
  QAngle vecExitAngles; // [rsp+30h] [rbp-60h] BYREF
  Vector mins; // [rsp+40h] [rbp-50h] BYREF
  Vector v12; // [rsp+50h] [rbp-40h] BYREF

  v2 = (*(this->m_pVehicle->_vptr_IHandleEntity + 43))(this->m_pVehicle);
  pAnimating = v2;
  if ( v2 != 0 )
  {
    v3 = CBaseAnimating::LookupAttachment(v2, "vehicle_driver_eyes");
    if ( this->m_ExitAnimations.m_Size > 0 )
    {
      v4 = 0;
      v5 = 0;
      while ( 1 )
      {
        if ( CBaseServerVehicle::GetLocalAttachmentAtTime(
               this,
               this->m_ExitAnimations.m_Memory.m_pMemory[v4].szAnimName,
               v3,
               1.0,
               &this->m_ExitAnimations.m_Memory.m_pMemory[v4].vecExitPointLocal,
               &this->m_ExitAnimations.m_Memory.m_pMemory[v4].vecExitAnglesLocal) != 0 )
        {
          if ( g_debug_vehicleexit.m_pParent->m_Value.m_nValue == 0 )
            goto LABEL_5;
LABEL_8:
          v6 = &this->m_ExitAnimations.m_Memory.m_pMemory[v4];
          ++v5;
          ++v4;
          vecExitPoint = v6->vecExitPointLocal;
          v7 = *&v6->vecExitAnglesLocal.x;
          *&v6 = v6->vecExitAnglesLocal.z;
          *&vecExitAngles.x = v7;
          LODWORD(vecExitAngles.z) = v6;
          UTIL_ParentToWorldSpace(pAnimating, &vecExitPoint, &vecExitAngles);
          v12.x = 8.0;
          v12.y = 8.0;
          v12.z = 8.0;
          mins.x = -8.0;
          mins.y = -8.0;
          mins.z = -8.0;
          NDebugOverlay::Box(&vecExitPoint, &mins, &v12, 0, 255, 0, 20.0, 0);
          NDebugOverlay::Axis(&vecExitPoint, &vecExitAngles, 8.0, 1, 20.0);
          if ( this->m_ExitAnimations.m_Size <= v5 )
            return;
        }
        else
        {
          Warning(
            "Exit animation %s failed to cache target points properly!\n",
            this->m_ExitAnimations.m_Memory.m_pMemory[v4].szAnimName);
          if ( g_debug_vehicleexit.m_pParent->m_Value.m_nValue != 0 )
            goto LABEL_8;
LABEL_5:
          ++v5;
          ++v4;
          if ( this->m_ExitAnimations.m_Size <= v5 )
            return;
        }
      }
    }
  }
}


// CBaseServerVehicle::ParseEntryExitAnims  (line 978, @0x000000000240cf60, libserver.so)  // inlines: AddToTail, GrowMemory, ResourceHandleToData<InfoForResourceTypeCModel>, V_strncpy<long unsigned int>, operator int, operator==, operator[]
// calls: CBaseEntity::GetModel, KeyValues::operator new, KeyValues::KeyValues, CModel::KeyValueText, CModel::name, KeyValues::LoadFromBuffer, KeyValues::deleteThis, CBaseServerVehicle::CacheEntryExitPoints, KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetName, _V_strncpy (19 total)
// strings: "vehicle_entry", "vehicle_exit", "vehicle_escape_exit", "vehicle_npc_passengers"
void __fastcall CBaseServerVehicle::ParseEntryExitAnims(CBaseServerVehicle *const this)
{
  const CModel *m_pData; // r12
  KeyValues *v3; // r14
  const char *v4; // r13
  const char *v5; // rax
  KeyValues *Key; // rax
  KeyValues *i; // r12
  const char *Name; // rax
  __int64 v9; // r13
  CBaseServerVehicle::entryanim_t *v10; // r13
  __int64 m_Size; // r13
  int v12; // eax
  KeyValues *v13; // rax
  KeyValues *v14; // rax
  KeyValues *v15; // rax
  HModel hVehicleModel; // [rsp+10h] [rbp-40h] BYREF

  CBaseEntity::GetModel(&hVehicleModel, this->m_pVehicle);
  if ( hVehicleModel.m_pBinding != 0 )
  {
    m_pData = 0;
    if ( hVehicleModel.m_pBinding->m_nRefCount.m_value > 0 )
      m_pData = hVehicleModel.m_pBinding->m_pData;
    v3 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v3, "");
    v4 = CModel::KeyValueText(m_pData);
    v5 = CModel::name(m_pData);
    if ( KeyValues::LoadFromBuffer(v3, v5, v4, 0, 0, 0, 0) )
    {
      Key = KeyValues::FindKey(v3, "vehicle_entry", 0);
      if ( Key != 0 )
      {
        for ( i = KeyValues::GetFirstSubKey(Key); i != 0; i = KeyValues::GetNextKey(i) )
        {
          m_Size = this->m_EntryAnimations.m_Size;
          v12 = this->m_EntryAnimations.m_Size;
          if ( m_Size == this->m_EntryAnimations.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CBaseServerVehicle::entryanim_t,int>::Grow(&this->m_EntryAnimations.m_Memory, 1);
            v12 = this->m_EntryAnimations.m_Size;
          }
          this->m_EntryAnimations.m_Size = v12 + 1;
          Name = KeyValues::GetName(i);
          v9 = m_Size;
          _V_strncpy(this->m_EntryAnimations.m_Memory.m_pMemory[v9].szAnimName, Name, 128);
          v10 = &this->m_EntryAnimations.m_Memory.m_pMemory[v9];
          v10->iHitboxGroup = KeyValues::GetInt(i, 0, 0);
        }
      }
      v13 = KeyValues::FindKey(v3, "vehicle_exit", 0);
      if ( v13 != 0 )
        CBaseServerVehicle::ParseExitAnim(this, v13, 0);
      v14 = KeyValues::FindKey(v3, "vehicle_escape_exit", 0);
      if ( v14 != 0 )
        CBaseServerVehicle::ParseExitAnim(this, v14, 1);
      v15 = KeyValues::FindKey(v3, "vehicle_npc_passengers", 0);
      if ( v15 != 0 )
        CBaseServerVehicle::ParseNPCRoles(this, v15);
    }
    KeyValues::deleteThis(v3);
    CBaseServerVehicle::CacheEntryExitPoints(this);
  }
}


// CBaseServerVehicle::HandlePassengerEntry  (line 1039, @0x00000000023fd3d0, libserver.so)  // inlines: GetDrivableVehicle, ResetSequence, ToBasePlayer, curtime
// calls: __dynamic_cast, CBaseAnimating::LookupSequence, CBasePlayer::CanEnterVehicle, CBaseAnimating::SetCycle, CBaseEntity::SetAnimTime, CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::ResetClientsideFrame
void __fastcall CBaseServerVehicle::HandlePassengerEntry(
        CBaseServerVehicle *const this,
        CBaseCombatCharacter *pPassenger,
        bool bAllowEntryOutsideZone)
{
  __int64 (__fastcall *v6)(CBaseServerVehicle *const, double *); // r13
  int v7; // xmm1_4
  unsigned int v8; // eax
  CBaseEntity *m_pVehicle; // rdi
  unsigned int m_Data; // r13d
  CBaseAnimating *v11; // r15
  float v12; // xmm1_4
  float v13; // xmm1_4
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v15; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBaseAnimatingController *BaseAnimatingController; // rax
  double v18; // [rsp+0h] [rbp-40h] BYREF
  int v19; // [rsp+8h] [rbp-38h]

  if ( pPassenger != 0 && (*(pPassenger->_vptr_IHandleEntity + 140))(pPassenger) != 0 )
  {
    v6 = *(this->_vptr_IVehicle + 21);
    v18 = (*(pPassenger->_vptr_IHandleEntity + 164))(pPassenger);
    v19 = v7;
    v8 = v6(this, &v18);
    m_pVehicle = this->m_pVehicle;
    m_Data = v8;
    if ( m_pVehicle != 0 )
    {
      v11 = __dynamic_cast(m_pVehicle, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseAnimating, 0);
      if ( v11 != 0 )
      {
        if ( m_Data == -1 )
        {
          if ( !bAllowEntryOutsideZone )
            return;
          m_Data = CBaseAnimating::LookupSequence(v11, this->m_EntryAnimations.m_Memory.m_pMemory->szAnimName).m_Data;
        }
        if ( (*(this->m_pDrivableVehicle->_vptr_IDrivableVehicle + 5))(this->m_pDrivableVehicle, pPassenger) != 0
          && CBasePlayer::CanEnterVehicle(pPassenger, this, 0) )
        {
          CBaseAnimating::SetCycle(v11, 0.0, v12);
          m_flCurrentTime = 0.0;
          v15 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
                (m_pfnWarningFunc)(1, 0.0);
            }
            m_flCurrentTime = v15->m_flCurrentTime;
          }
          CBaseEntity::SetAnimTime(v11, m_flCurrentTime, v13, 0);
          BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(v11);
          (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 23))(BaseAnimatingController, m_Data, 1);
          CBaseAnimating::ResetClientsideFrame(v11);
          (*(this->m_pDrivableVehicle->_vptr_IDrivableVehicle + 7))(this->m_pDrivableVehicle, 1);
          (*(pPassenger->_vptr_IHandleEntity + 457))(pPassenger, this, 0);
        }
      }
    }
  }
}


// CBaseServerVehicle::HandlePassengerExit  (line 1092, @0x000000000240db70, libserver.so)  // inlines: Defaults, GetDrivableVehicle, GetEHandle, GetEntryIndex, GetSerialNumber, InitSoundParams, ResetSequence, Set, ToBasePlayer, VectorSubtract, curtime, operator-, operator=
// calls: UTIL_HudHintText, CBaseServerVehicle::SoundState_Update, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, __dynamic_cast, CBaseAnimating::SetCycle, CBaseEntity::SetAnimTime, CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::ResetClientsideFrame, SafeGetViewVectors, CEntityBlocker::Create, CBaseEntity::SetAbsOrigin (15 total)
bool __fastcall CBaseServerVehicle::HandlePassengerExit(
        CBaseServerVehicle *const this,
        CBaseCombatCharacter *pPassenger)
{
  char v4; // r13
  float frametime; // xmm0_4
  int (**vptr_IVehicle)(...); // rax
  unsigned int v8; // r15d
  unsigned int v9; // eax
  unsigned int v10; // r14d
  CBaseEntity *m_pVehicle; // rdi
  CBaseAnimating *v12; // rax
  float v13; // xmm1_4
  CBaseAnimating *v14; // r14
  float v15; // xmm1_4
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v17; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  CBaseAnimatingController *BaseAnimatingController; // rax
  const CViewVectors *ViewVectors; // rax
  vec_t v21; // xmm2_4
  vec_t v22; // xmm0_4
  const CViewVectors *v23; // r14
  const CViewVectors *v24; // rax
  CEntityBlocker *v25; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v27; // eax
  __int16 v28; // cx
  CBaseCombatWeapon *ActiveWeapon; // rax
  CGlobalVars *v30; // [rsp+8h] [rbp-A8h]
  bool bAllPointsBlocked; // [rsp+1Fh] [rbp-91h] BYREF
  Vector vecExitPoint; // [rsp+20h] [rbp-90h] BYREF
  Vector vecNewPos; // [rsp+30h] [rbp-80h] BYREF
  QAngle angNewAngles; // [rsp+40h] [rbp-70h] BYREF
  Vector vecExitFeetPoint; // [rsp+50h] [rbp-60h] BYREF
  vbs_sound_update_t params; // [rsp+60h] [rbp-50h] BYREF

  if ( pPassenger == 0 )
    return 0;
  v4 = (*(pPassenger->_vptr_IHandleEntity + 140))(pPassenger);
  if ( v4 == 0 )
    return 0;
  UTIL_HudHintText(pPassenger, "");
  params.flCurrentSpeedFraction = 0.0;
  params.flWorldSpaceSpeed = 0.0;
  params.bThrottleDown = 0;
  params.bReverse = 0;
  params.bTurbo = 0;
  params.bVehicleInWater = 0;
  frametime = gpGlobals->frametime;
  params.bExitVehicle = 0;
  vptr_IVehicle = this->_vptr_IVehicle;
  params.flFrameTime = frametime;
  params.bVehicleInWater = vptr_IVehicle[61](this);
  params.bExitVehicle = 1;
  CBaseServerVehicle::SoundState_Update(this, &params);
  v8 = (*(this->_vptr_IVehicle + 22))(this, &vecExitPoint, &bAllPointsBlocked);
  vecNewPos = *CBaseEntity::GetAbsOrigin(pPassenger);
  angNewAngles = *CBaseEntity::GetAbsAngles(pPassenger);
  v9 = (*(this->_vptr_IVehicle + 2))(this, pPassenger);
  v10 = v9;
  if ( bAllPointsBlocked || v8 == -1 )
  {
    if ( (*(this->_vptr_IVehicle + 20))(this, v9, &vecNewPos) == 0
      && (*(this->m_pDrivableVehicle->_vptr_IDrivableVehicle + 12))(this->m_pDrivableVehicle, pPassenger, v10) == 0 )
    {
      return 0;
    }
    (*(this->_vptr_IVehicle + 23))(this, 0, 1);
    (*(this->m_pDrivableVehicle->_vptr_IDrivableVehicle + 10))(this->m_pDrivableVehicle, pPassenger, v10);
    if ( v8 == -1 )
    {
      (*(pPassenger->_vptr_IHandleEntity + 458))(pPassenger, &vecNewPos, &angNewAngles);
      return v4;
    }
  }
  else
  {
    (*(this->m_pDrivableVehicle->_vptr_IDrivableVehicle + 10))(this->m_pDrivableVehicle, pPassenger, v9);
  }
  m_pVehicle = this->m_pVehicle;
  if ( m_pVehicle != 0
    && (v12 = __dynamic_cast(m_pVehicle, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseAnimating, 0),
        v14 = v12,
        v12 != 0) )
  {
    CBaseAnimating::SetCycle(v12, 0.0, v13);
    m_flCurrentTime = 0.0;
    v17 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v30 = gpGlobals;
          (m_pfnWarningFunc)(1, 0.0);
          v17 = v30;
        }
      }
      m_flCurrentTime = v17->m_flCurrentTime;
    }
    CBaseEntity::SetAnimTime(v14, m_flCurrentTime, v15, 0);
    BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(v14);
    (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 23))(BaseAnimatingController, v8, 1);
    CBaseAnimating::ResetClientsideFrame(v14);
    (*(this->m_pDrivableVehicle->_vptr_IDrivableVehicle + 8))(
      this->m_pDrivableVehicle,
      1,
      *&vecExitPoint.x,
      vecExitPoint.z);
    if ( (*(pPassenger->_vptr_IHandleEntity + 139))(pPassenger) != 0
      && CBaseCombatCharacter::GetActiveWeapon(pPassenger) != 0 )
    {
      ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(pPassenger);
      (*(ActiveWeapon->_vptr_IHandleEntity + 282))(ActiveWeapon);
      CBasePlayer::ShowCrosshair(pPassenger, 1);
    }
    ViewVectors = SafeGetViewVectors();
    v21 = vecExitPoint.x - ViewVectors->m_vView.x;
    v22 = vecExitPoint.z - ViewVectors->m_vView.z;
    vecExitFeetPoint.y = vecExitPoint.y - ViewVectors->m_vView.y;
    vecExitFeetPoint.x = v21;
    vecExitFeetPoint.z = v22;
    v23 = SafeGetViewVectors();
    v24 = SafeGetViewVectors();
    v25 = CEntityBlocker::Create(&vecExitFeetPoint, &v24->m_vHullMin, &v23->m_vHullMax, pPassenger, 1);
    if ( v25 != 0 && (m_pEntity = v25->m_pEntity) != 0 )
    {
      v27 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v28 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v28 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hExitBlocker.m_Index) = v28 | this->m_hExitBlocker.m_Index & 0x8000;
      this->m_hExitBlocker.m_Index = (v27 << 15) | this->m_hExitBlocker.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hExitBlocker.m_Index = -1;
    }
    CBaseEntity::SetAbsOrigin(pPassenger, &vecExitFeetPoint);
    CBaseEntity::SetParent(pPassenger, 0, 0, 0);
  }
  else
  {
    (*(pPassenger->_vptr_IHandleEntity + 458))(pPassenger, &vecNewPos, &angNewAngles);
  }
  return v4;
}


// CBaseServerVehicle::GetEntryAnimForPoint  (line 1181, @0x00000000023fa2c0, libserver.so)  // inlines: VectorITransform, operator const RuntimeClass_t*, operator[]
// calls: __dynamic_cast, CBaseAnimating::GetModelPtr, CBaseEntity::GetModel, FindHitboxSetByName, CModel::GetHitboxSetByIndex, CHitBoxSet::numhitboxes, CHitBoxSet::pHitbox, CModel::GetBoneIndexForHitbox, CBaseAnimating::GetBonePosition, AngleMatrix, VectorITransform, IsPointInBox (13 total)
// strings: "entryboxes"
HSequence __fastcall CBaseServerVehicle::GetEntryAnimForPoint(
        CBaseServerVehicle *const this,
        const Vector *const vecEyePoint)
{
  CBaseEntity *m_pVehicle; // rdi
  const CBaseAnimating *v4; // rax
  CBaseAnimating *v5; // r13
  const CModel *v6; // rdi
  int HitboxSetByName; // eax
  const CHitBoxSet *HitboxSetByIndex; // rax
  const CHitBoxSet *v9; // r14
  int v10; // r12d
  const CHitBox *v11; // rbx
  int BoneIndexForHitbox; // eax
  int m_Size; // ecx
  CBaseServerVehicle::entryanim_t *m_pMemory; // rax
  int32 m_nGroupId; // edx
  CBaseServerVehicle::entryanim_t *v16; // rax
  CBaseServerVehicle::entryanim_t *v17; // rcx
  CBaseServerVehicle::entryanim_t *v18; // rsi
  CBaseServerVehicle *thisa; // [rsp+0h] [rbp-C0h]
  const CModel *pStudioHdr; // [rsp+10h] [rbp-B0h]
  Vector vecPosition; // [rsp+30h] [rbp-90h] BYREF
  QAngle vecAngles; // [rsp+40h] [rbp-80h] BYREF
  Vector localEyePoint; // [rsp+50h] [rbp-70h] BYREF
  matrix3x4_t fRotateMatrix; // [rsp+60h] [rbp-60h] BYREF

  if ( !this->m_bParsedAnimations )
  {
    (*(this->_vptr_IVehicle + 63))(this);
    this->m_bParsedAnimations = 1;
  }
  if ( this->m_EntryAnimations.m_Size != 0 )
  {
    m_pVehicle = this->m_pVehicle;
    if ( m_pVehicle != 0 )
    {
      v4 = __dynamic_cast(m_pVehicle, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseAnimating, 0);
      v5 = v4;
      if ( v4 != 0 )
      {
        pStudioHdr = CBaseAnimating::GetModelPtr(v4);
        if ( pStudioHdr != 0 )
        {
          CBaseEntity::GetModel(&fRotateMatrix, v5);
          v6 = *&fRotateMatrix.m_flMatVal[0][0] != 0 ? **&fRotateMatrix.m_flMatVal[0][0] : 0LL;
          HitboxSetByName = FindHitboxSetByName(v6, "entryboxes");
          HitboxSetByIndex = CModel::GetHitboxSetByIndex(pStudioHdr, HitboxSetByName, 0);
          v9 = HitboxSetByIndex;
          if ( HitboxSetByIndex != 0 && CHitBoxSet::numhitboxes(HitboxSetByIndex) != 0 )
          {
            v10 = 0;
            thisa = this;
            while ( 1 )
            {
              if ( v10 >= CHitBoxSet::numhitboxes(v9) )
                return -1;
              v11 = CHitBoxSet::pHitbox(v9, v10);
              BoneIndexForHitbox = CModel::GetBoneIndexForHitbox(pStudioHdr, v11);
              CBaseAnimating::GetBonePosition(v5, BoneIndexForHitbox, &vecPosition, &vecAngles);
              AngleMatrix(&vecAngles, &vecPosition, &fRotateMatrix);
              VectorITransform(&vecEyePoint->x, &fRotateMatrix, &localEyePoint.x);
              if ( IsPointInBox(&localEyePoint, &v11->m_vMinBounds, &v11->m_vMaxBounds) )
              {
                m_Size = thisa->m_EntryAnimations.m_Size;
                if ( m_Size > 0 )
                  break;
              }
LABEL_19:
              ++v10;
            }
            m_pMemory = thisa->m_EntryAnimations.m_Memory.m_pMemory;
            m_nGroupId = v11->m_nGroupId;
            if ( m_pMemory->iHitboxGroup != m_nGroupId )
            {
              v16 = m_pMemory + 1;
              v17 = &v16[m_Size - 1];
              while ( v16 != v17 )
              {
                v18 = v16++;
                if ( v16[-1].iHitboxGroup == m_nGroupId )
                  return CBaseAnimating::LookupSequence(v5, v18->szAnimName);
              }
              goto LABEL_19;
            }
            v18 = thisa->m_EntryAnimations.m_Memory.m_pMemory;
            return CBaseAnimating::LookupSequence(v5, v18->szAnimName);
          }
        }
      }
    }
  }
  return 0;
}


// CBaseServerVehicle::GetExitAnimToUse  (line 1250, @0x00000000023fd990, libserver.so)  // inlines: CGameTrace, DotProduct, EnableInteractsWith, GetBool, GetDrivableVehicle, GetFloat, GetInt, Init, LengthSqr, Ray_t, RnCollisionAttr_t, ToBasePlayer, TraceRay, UTIL_ParentToWorldSpace, UTIL_TraceHull, UTIL_TraceLine, UTIL_TraceSphere, Vector, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator*=, operator+, operator-, operator-=, operator=, operator[]
// calls: __dynamic_cast, CBaseAnimating::GetModelPtr, CBasePlayer::EyeVectors, VectorNormalize, CBaseAnimating::GetAttachment, SafeGetViewVectors, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, NDebugOverlay::Line, NDebugOverlay::Box, NDebugOverlay::Cross3D (16 total)
// callers: CBaseServerVehicle::GetExitAnimToUse
HSequence __fastcall CBaseServerVehicle::GetExitAnimToUse(
        CBaseServerVehicle *const this,
        Vector *const vecEyeExitEndpoint,
        bool *const bAllPointsBlocked)
{
  CBaseEntity *m_pVehicle; // rdi
  char v5; // r12
  __int64 v6; // rax
  vec_t v8; // xmm1_4
  int m_Size; // r15d
  __int64 v10; // rbx
  int v11; // r14d
  CBaseServerVehicle::exitanim_t *v12; // rsi
  const CViewVectors *ViewVectors; // rax
  vec_t v14; // xmm2_4
  vec_t v15; // xmm0_4
  const CViewVectors *v16; // rax
  float v17; // xmm3_4
  float v18; // xmm2_4
  vec_t v19; // xmm7_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float m_fValue; // xmm0_4
  char v23; // al
  const CViewVectors *v24; // rax
  ConVar *m_pParent; // rax
  const CViewVectors *v26; // rbx
  const CViewVectors *v27; // rax
  const CViewVectors *v28; // rax
  vec_t v29; // xmm1_4
  vec_t v30; // xmm0_4
  vec_t x; // xmm0_4
  const CViewVectors *v32; // rax
  Vector *p_m_vHullMin; // rdx
  Vector *v34; // rsi
  const CViewVectors *v35; // rax
  float v36; // [rsp+24h] [rbp-25Ch]
  unsigned int nRole; // [rsp+30h] [rbp-250h]
  float v38; // [rsp+34h] [rbp-24Ch]
  vec_t v39; // [rsp+34h] [rbp-24Ch]
  float v40; // [rsp+34h] [rbp-24Ch]
  float z; // [rsp+38h] [rbp-248h]
  float v42; // [rsp+38h] [rbp-248h]
  float v43; // [rsp+38h] [rbp-248h]
  vec_t v44; // [rsp+38h] [rbp-248h]
  const CViewVectors *v45; // [rsp+38h] [rbp-248h]
  const CViewVectors *v46; // [rsp+38h] [rbp-248h]
  float y; // [rsp+40h] [rbp-240h]
  CBasePlayer *v49; // [rsp+50h] [rbp-230h]
  float flMaxCosAngleDelta; // [rsp+58h] [rbp-228h]
  float v51; // [rsp+5Ch] [rbp-224h]
  float v52; // [rsp+60h] [rbp-220h]
  float v53; // [rsp+64h] [rbp-21Ch]
  float pTraceFilter; // [rsp+78h] [rbp-208h]
  const CViewVectors *pTraceFiltera; // [rsp+78h] [rbp-208h]
  const CViewVectors *pTraceFilterb; // [rsp+78h] [rbp-208h]
  int nBestExitAnim; // [rsp+80h] [rbp-200h]
  char bBestExitIsEscapePoint; // [rsp+87h] [rbp-1F9h]
  CBaseAnimating *pAnimating; // [rsp+88h] [rbp-1F8h]
  Vector vecViewDirection; // [rsp+90h] [rbp-1F0h] BYREF
  Vector vecViewOrigin; // [rsp+A0h] [rbp-1E0h] BYREF
  Vector vehicleExitOrigin; // [rsp+B0h] [rbp-1D0h] BYREF
  QAngle vehicleExitAngles; // [rsp+C0h] [rbp-1C0h] BYREF
  Vector vecDelta; // [rsp+D0h] [rbp-1B0h] BYREF
  Vector vecStart; // [rsp+E0h] [rbp-1A0h] BYREF
  Vector vecEnd; // [rsp+F0h] [rbp-190h] BYREF
  Vector vecExitEndPoint; // [rsp+100h] [rbp-180h] BYREF
  CTraceFilterSimple v69; // [rsp+110h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+150h] [rbp-130h] BYREF
  trace_t tr; // [rsp+1A0h] [rbp-E0h] BYREF

  m_pVehicle = this->m_pVehicle;
  if ( m_pVehicle == 0 )
    return -1;
  pAnimating = __dynamic_cast(m_pVehicle, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseAnimating, 0);
  if ( pAnimating == 0 )
    return -1;
  if ( CBaseAnimating::GetModelPtr(pAnimating) == 0 )
    return -1;
  v5 = (*(this->_vptr_IVehicle + 14))(this);
  v6 = (*(this->_vptr_IVehicle + 62))(this);
  v49 = v6;
  if ( v6 == 0 || (*(*v6 + 1120LL))(v6) == 0 )
    return -1;
  nRole = (*(this->_vptr_IVehicle + 2))(this, v49);
  *&tr.startpos.x = (*(v49->_vptr_IHandleEntity + 164))(v49);
  tr.startpos.z = v8;
  vecViewOrigin = tr.startpos;
  CBasePlayer::EyeVectors(v49, &vecViewDirection, 0, 0);
  vecViewDirection.z = 0.0;
  VectorNormalize(&vecViewDirection);
  m_Size = this->m_ExitAnimations.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_35:
    *bAllPointsBlocked = 1;
    return -1;
  }
  v10 = 0;
  bBestExitIsEscapePoint = 1;
  v11 = 0;
  v51 = 0.0;
  v52 = 0.0;
  v53 = 0.0;
  nBestExitAnim = -1;
  flMaxCosAngleDelta = -2.0;
  do
  {
    v12 = &this->m_ExitAnimations.m_Memory.m_pMemory[v10];
    if ( v5 != v12->bUpright )
      goto LABEL_9;
    if ( bBestExitIsEscapePoint != 0 )
    {
      if ( this->m_bUseLegacyExitChecks )
        goto LABEL_13;
    }
    else
    {
      if ( v12->bEscapeExit )
        goto LABEL_9;
      if ( this->m_bUseLegacyExitChecks )
      {
LABEL_13:
        CBaseAnimating::GetAttachment(pAnimating, v12->szAnimName, &vehicleExitOrigin, &vehicleExitAngles);
        goto LABEL_14;
      }
    }
    vehicleExitOrigin = v12->vecExitPointLocal;
    vehicleExitAngles = v12->vecExitAnglesLocal;
    UTIL_ParentToWorldSpace(pAnimating, &vehicleExitOrigin, &vehicleExitAngles);
LABEL_14:
    vecDelta.z = 0.0;
    vecDelta.x = vehicleExitOrigin.x - vecViewOrigin.x;
    vecDelta.y = vehicleExitOrigin.y - vecViewOrigin.y;
    VectorNormalize(&vecDelta);
    if ( (bBestExitIsEscapePoint == 0 || this->m_ExitAnimations.m_Memory.m_pMemory[v10].bEscapeExit)
      && flMaxCosAngleDelta > (((vecDelta.x * vecViewDirection.x) + (vecDelta.y * vecViewDirection.y))
                             + (vecDelta.z * vecViewDirection.z)) )
    {
      goto LABEL_9;
    }
    v38 = ((vecDelta.x * vecViewDirection.x) + (vecDelta.y * vecViewDirection.y)) + (vecDelta.z * vecViewDirection.z);
    ViewVectors = SafeGetViewVectors();
    v14 = vehicleExitOrigin.y - ViewVectors->m_vView.y;
    vehicleExitOrigin.x = vehicleExitOrigin.x - ViewVectors->m_vView.x;
    v15 = vehicleExitOrigin.z - ViewVectors->m_vView.z;
    vehicleExitOrigin.y = v14;
    vecStart.x = vehicleExitOrigin.x + 0.0;
    vehicleExitOrigin.z = v15;
    vecEnd.x = vehicleExitOrigin.x;
    vecStart.y = v14 + 0.0;
    vecEnd.y = v14;
    memset(&tr.m_ShapeAttributes, 0, 31);
    vecStart.z = v15 + 64.0;
    vecEnd.z = v15 - 64.0;
    tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&tr);
    z = SafeGetViewVectors()->m_vHullMin.z;
    y = SafeGetViewVectors()->m_vHullMax.y;
    pTraceFilter = SafeGetViewVectors()->m_vHullMax.x;
    v16 = SafeGetViewVectors();
    ray.m_Start.w = 0.0;
    ray.m_Delta.w = 0.0;
    ray.m_StartOffset.w = 0.0;
    ray.m_Extents.w = 0.0;
    ray.m_flRadius = 0.0;
    ray.m_Delta.x = vecEnd.x - vecStart.x;
    ray.m_Delta.y = vecEnd.y - vecStart.y;
    ray.m_Delta.z = vecEnd.z - vecStart.z;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    ray.m_Extents.x = pTraceFilter - v16->m_vHullMin.x;
    ray.m_Extents.y = y - v16->m_vHullMin.y;
    v17 = z - v16->m_vHullMin.z;
    ray.m_Extents.x = ray.m_Extents.x * 0.5;
    ray.m_Extents.y = ray.m_Extents.y * 0.5;
    ray.m_Extents.z = v17 * 0.5;
    ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
                 + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
    ray.m_StartOffset.x = v16->m_vHullMin.x + pTraceFilter;
    ray.m_StartOffset.y = v16->m_vHullMin.y + y;
    v18 = v16->m_vHullMin.z;
    ray.m_Start.x = vecStart.x + (ray.m_StartOffset.x * 0.5);
    ray.m_StartOffset.x = -(ray.m_StartOffset.x * 0.5);
    v19 = vecStart.y + (ray.m_StartOffset.y * 0.5);
    ray.m_StartOffset.y = -(ray.m_StartOffset.y * 0.5);
    v20 = (v18 + z) * 0.5;
    ray.m_Start.y = v19;
    ray.m_StartOffset.z = -v20;
    ray.m_Start.z = vecStart.z + v20;
    CTraceFilterSimple::CTraceFilterSimple(&v69, 0, 4, 0);
    v69.m_attr.m_nInteractsWith |= 0x87011uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v69, &tr);
    v21 = v38;
    if ( g_debug_vehicleexit.m_pParent->m_Value.m_nValue != 0 )
    {
      v36 = v38;
      v39 = SafeGetViewVectors()->m_vHullMin.y;
      v44 = SafeGetViewVectors()->m_vHullMax.y;
      x = SafeGetViewVectors()->m_vHullMax.x;
      ray.m_Start.y = v44;
      ray.m_Start.x = x;
      ray.m_Start.z = v39;
      v32 = SafeGetViewVectors();
      NDebugOverlay::SweptBox(&vecStart, &vecEnd, &v32->m_vHullMin, &ray.m_Start, &vec3_angle, 255, 20.0, 255, 255, 8);
      v21 = v36;
    }
    if ( tr.fraction >= 1.0 )
    {
      if ( tr.startsolid
        || tr.fraction == 1.0
        && (v43 = v21,
            v23 = (*(this->m_pDrivableVehicle->_vptr_IDrivableVehicle + 13))(this->m_pDrivableVehicle, v49, nRole),
            v21 = v43,
            v23 == 0) )
      {
        if ( g_debug_vehicleexit.m_pParent->m_Value.m_nValue != 0 )
        {
          pTraceFiltera = SafeGetViewVectors();
          v24 = SafeGetViewVectors();
          NDebugOverlay::Box(&tr.endpos, &v24->m_vHullMin, &pTraceFiltera->m_vHullMax, 0xFFu, 0, 0, 10.0, 64);
        }
        goto LABEL_9;
      }
      goto LABEL_21;
    }
    v40 = v21;
    v45 = SafeGetViewVectors();
    p_m_vHullMin = &SafeGetViewVectors()->m_vHullMin;
    UTIL_TraceHull(&tr.endpos, &tr.endpos, p_m_vHullMin, &v45->m_vHullMax, 0x87011u, 0, 4, &tr);
    v21 = v40;
    if ( !tr.startsolid )
    {
      if ( g_debug_vehicleexit.m_pParent->m_Value.m_nValue != 0 )
      {
        v46 = SafeGetViewVectors();
        v35 = SafeGetViewVectors();
        NDebugOverlay::Box(&tr.endpos, &v35->m_vHullMin, &v46->m_vHullMax, 0, 255, 0, 20.0, 8);
        v21 = v40;
      }
LABEL_21:
      v42 = v21;
      vecExitEndPoint = tr.endpos;
      m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
      ray.m_Delta.y = tr.endpos.y - vecViewOrigin.y;
      ray.m_Delta.z = tr.endpos.z - vecViewOrigin.z;
      ray.m_flRadius = m_fValue;
      ray.m_Start.Vector = vecViewOrigin;
      ray.m_Start.w = 0.0;
      ray.m_Delta.x = tr.endpos.x - vecViewOrigin.x;
      memset(&ray.m_Delta.w, 0, 36);
      ray.m_IsRay = 1;
      ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                     + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
      CTraceFilterSimple::CTraceFilterSimple(&v69, pAnimating, 4, 0);
      v69.m_attr.m_nInteractsWith |= 0x87011uLL;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v69, &tr);
      if ( tr.fraction == 1.0 )
      {
        flMaxCosAngleDelta = v42;
        nBestExitAnim = v11;
        v53 = vecExitEndPoint.x;
        v51 = vecExitEndPoint.z;
        v52 = vecExitEndPoint.y;
        bBestExitIsEscapePoint = this->m_ExitAnimations.m_Memory.m_pMemory[v10].bEscapeExit;
      }
      else if ( g_debug_vehicleexit.m_pParent->m_Value.m_nValue != 0 )
      {
        NDebugOverlay::Line(&vecViewOrigin, &vecExitEndPoint, 0xFFu, 0, 0, 1, 10.0);
      }
      goto LABEL_9;
    }
    if ( g_debug_vehicleexit.m_pParent->m_Value.m_nValue != 0 )
    {
      pTraceFilterb = SafeGetViewVectors();
      v34 = &SafeGetViewVectors()->m_vHullMin;
      NDebugOverlay::Box(&tr.endpos, v34, &pTraceFilterb->m_vHullMax, 0xFFu, 0, 0, 20.0, 8);
    }
LABEL_9:
    ++v11;
    ++v10;
  }
  while ( v11 != m_Size );
  if ( nBestExitAnim == -1 )
    goto LABEL_35;
  m_pParent = g_debug_vehicleexit.m_pParent;
  this->m_vecCurrentExitEndPoint.x = v53;
  this->m_vecCurrentExitEndPoint.y = v52;
  this->m_vecCurrentExitEndPoint.z = v51;
  if ( m_pParent->m_Value.m_nValue != 0 )
  {
    NDebugOverlay::Cross3D(&this->m_vecCurrentExitEndPoint, 16.0, 0, 0xFFu, 0, 1, 10.0);
    v26 = SafeGetViewVectors();
    v27 = SafeGetViewVectors();
    NDebugOverlay::Box(&this->m_vecCurrentExitEndPoint, &v27->m_vHullMin, &v26->m_vHullMax, 0xFFu, 255, 255, 10.0, 8);
  }
  v28 = SafeGetViewVectors();
  v29 = v52 + v28->m_vView.y;
  v30 = v51 + v28->m_vView.z;
  vecEyeExitEndpoint->x = v53 + v28->m_vView.x;
  vecEyeExitEndpoint->y = v29;
  vecEyeExitEndpoint->z = v30;
  this->m_iCurrentExitAnim = nBestExitAnim;
  return CBaseAnimating::LookupSequence(pAnimating, this->m_ExitAnimations.m_Memory.m_pMemory[nBestExitAnim].szAnimName);
}


// CBaseServerVehicle::GetExitAnimToUse  (line 1250, @0x00000000023fe680, libserver.so)
// calls: CBaseServerVehicle::GetExitAnimToUse
HSequence __fastcall CBaseServerVehicle::GetExitAnimToUse(
        CBaseServerVehicle *const this,
        Vector *const vecEyeExitEndpoint,
        bool *const bAllPointsBlocked)
{
  bool *bAllPointsBlockeda; // [rsp+0h] [rbp-20h]
  Vector *vecEyeExitEndpointa; // [rsp+8h] [rbp-18h]

  *bAllPointsBlocked = 0;
  if ( !this->m_bParsedAnimations )
  {
    bAllPointsBlockeda = bAllPointsBlocked;
    vecEyeExitEndpointa = vecEyeExitEndpoint;
    (*(this->_vptr_IVehicle + 63))(this);
    this->m_bParsedAnimations = 1;
    bAllPointsBlocked = bAllPointsBlockeda;
    vecEyeExitEndpoint = vecEyeExitEndpointa;
  }
  if ( this->m_ExitAnimations.m_Size != 0 )
    return CBaseServerVehicle::GetExitAnimToUse(this, vecEyeExitEndpoint, bAllPointsBlocked);
  else
    return -1;
}


// CBaseServerVehicle::HandleEntryExitFinish  (line 1437, @0x00000000023fc820, libserver.so)  // inlines: GetBool, GetDrivableVehicle, GetInt, ResetSequence, ToBasePlayer, UTIL_ParentToWorldSpace, Vector, curtime, operator=, operator[]
// calls: CBaseAnimating::SelectWeightedSequence, CBaseAnimating::SetCycle, CBaseEntity::SetAnimTime, CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::ResetClientsideFrame, UTIL_ParentToWorldSpace, CBaseAnimating::GetAttachment, NDebugOverlay::Box
// strings: "vehicle_driver_eyes"
void __fastcall CBaseServerVehicle::HandleEntryExitFinish(
        CBaseServerVehicle *const this,
        bool bExitAnimOn,
        bool bResetAnim)
{
  CBaseAnimating *v6; // r12
  HSequence v7; // r13d
  HSequence v8; // xmm1_4
  float v9; // xmm1_4
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v11; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBaseAnimatingController *BaseAnimatingController; // rax
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 m_iCurrentExitAnim; // rax
  CBaseServerVehicle::exitanim_t *v17; // rax
  Vector vecEyes; // [rsp+10h] [rbp-70h] BYREF
  QAngle vecEyeAng; // [rsp+20h] [rbp-60h] BYREF
  Vector mins; // [rsp+30h] [rbp-50h] BYREF
  Vector maxs; // [rsp+40h] [rbp-40h] BYREF

  if ( !this->m_bParsedAnimations )
  {
    (*(this->_vptr_IVehicle + 63))(this);
    this->m_bParsedAnimations = 1;
  }
  v6 = (*(this->m_pVehicle->_vptr_IHandleEntity + 43))(this->m_pVehicle);
  if ( v6 != 0 )
  {
    if ( bExitAnimOn )
    {
      v14 = (*(this->_vptr_IVehicle + 62))(this);
      v15 = v14;
      if ( v14 != 0 && (*(*v14 + 1120LL))(v14) != 0 )
      {
        m_iCurrentExitAnim = this->m_iCurrentExitAnim;
        if ( m_iCurrentExitAnim < 0 || m_iCurrentExitAnim >= this->m_ExitAnimations.m_Size )
        {
          CBaseAnimating::GetAttachment(v6, "vehicle_driver_eyes", &vecEyes, &vecEyeAng);
        }
        else
        {
          v17 = &this->m_ExitAnimations.m_Memory.m_pMemory[m_iCurrentExitAnim];
          vecEyes = v17->vecExitPointLocal;
          vecEyeAng = v17->vecExitAnglesLocal;
          UTIL_ParentToWorldSpace(v6, &vecEyes, &vecEyeAng);
          vecEyes = this->m_vecCurrentExitEndPoint;
        }
        if ( g_debug_vehicleexit.m_pParent->m_Value.m_nValue != 0 )
        {
          maxs.x = 2.0;
          maxs.y = 2.0;
          maxs.z = 2.0;
          mins.x = -2.0;
          mins.y = -2.0;
          mins.z = -2.0;
          NDebugOverlay::Box(&vecEyes, &mins, &maxs, 0xFFu, 0, 0, 10.0, 64);
        }
        (*(*v15 + 3664LL))(v15, &vecEyes, &vecEyeAng);
      }
    }
    if ( bResetAnim )
    {
      v7.m_Data = CBaseAnimating::SelectWeightedSequence(v6, 1).m_Data;
      if ( v7.m_Data != -1 )
      {
        CBaseAnimating::SetCycle(v6, 0.0, *&v8.m_Data);
        m_flCurrentTime = 0.0;
        v11 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
              (m_pfnWarningFunc)(1, 0.0);
          }
          m_flCurrentTime = v11->m_flCurrentTime;
        }
        CBaseEntity::SetAnimTime(v6, m_flCurrentTime, v9, 0);
        BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(v6);
        (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 23))(BaseAnimatingController, v7.m_Data, 1);
        CBaseAnimating::ResetClientsideFrame(v6);
      }
    }
    (*(this->m_pDrivableVehicle->_vptr_IDrivableVehicle + 7))(this->m_pDrivableVehicle, 0);
    (*(this->m_pDrivableVehicle->_vptr_IDrivableVehicle + 8))(
      this->m_pDrivableVehicle,
      0,
      *&vec3_origin.x,
      vec3_origin.z);
  }
}


// CBaseServerVehicle::GetVehicleViewPosition  (line 1519, @0x00000000023fad80, libserver.so)  // inlines: ToBasePlayer, operator=
// calls: CBasePlayer::GetFOV
void __fastcall CBaseServerVehicle::GetVehicleViewPosition(
        CBaseServerVehicle *const this,
        int nRole,
        Vector *pAbsOrigin,
        QAngle *pAbsAngles,
        float *pFOV)
{
  __int64 v8; // rax
  CBasePlayer *v9; // rbx
  vec_t v10; // xmm1_4
  vec_t *v11; // rax
  double v12; // [rsp+0h] [rbp-30h]

  v8 = (*(this->_vptr_IVehicle + 1))(this, 0);
  v9 = v8;
  if ( v8 != 0 && (*(*v8 + 1120LL))(v8) != 0 )
  {
    if ( pAbsOrigin != 0 )
    {
      v12 = (*(v9->_vptr_IHandleEntity + 164))(v9);
      pAbsOrigin->z = v10;
      *&pAbsOrigin->x = v12;
    }
    if ( pAbsAngles != 0 )
    {
      v11 = (*(v9->_vptr_IHandleEntity + 165))(v9);
      pAbsAngles->x = *v11;
      pAbsAngles->y = v11[1];
      pAbsAngles->z = v11[2];
    }
    if ( pFOV != 0 )
      *pFOV = CBasePlayer::GetFOV(v9);
  }
}


// CBaseServerVehicle::SetupMove  (line 1554, @0x00000000023f8880, libserver.so)  // inlines: GetDrivableVehicle
void __fastcall CBaseServerVehicle::SetupMove(
        CBaseServerVehicle *const this,
        CBasePlayer *player,
        CUserCmd *ucmd,
        IMoveHelper *pHelper,
        CMoveData *move)
{
  (*(this->m_pDrivableVehicle->_vptr_IDrivableVehicle + 2))(this->m_pDrivableVehicle, player, ucmd, pHelper, move);
}


// CBaseServerVehicle::ProcessMovement  (line 1562, @0x00000000023fa680, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetDrivableVehicle, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator-
// calls: CGameTrace::Init, CBaseEntity::GetAbsOrigin, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CEnvPlayerSurfaceTrigger::SetPlayerSurface
void __fastcall CBaseServerVehicle::ProcessMovement(
        CBaseServerVehicle *const this,
        CBasePlayer *pPlayer,
        CMoveData *pMoveData)
{
  const CBaseEntity *v5; // r13
  const Vector *AbsOrigin; // rax
  const Vector *v7; // rdx
  __int16 v8; // r13
  float x; // [rsp+4h] [rbp-17Ch]
  float y; // [rsp+8h] [rbp-178h]
  float v11; // [rsp+Ch] [rbp-174h]
  CTraceFilterSimple v12; // [rsp+10h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+50h] [rbp-130h] BYREF
  const CPhysSurfaceProperties *pSurfaceProp; // [rsp+A0h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+E0h] [rbp-A0h]
  __int64 v16; // [rsp+108h] [rbp-78h]
  __int64 v17; // [rsp+110h] [rbp-70h]
  __int64 v18; // [rsp+118h] [rbp-68h]
  int v19; // [rsp+120h] [rbp-60h]
  __int16 v20; // [rsp+124h] [rbp-5Ch]
  char v21; // [rsp+126h] [rbp-5Ah]
  char v22; // [rsp+127h] [rbp-59h]

  (*(this->m_pDrivableVehicle->_vptr_IDrivableVehicle + 3))(this->m_pDrivableVehicle, pPlayer, pMoveData);
  v20 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v21 = 0;
  v22 = 7;
  v19 = 0;
  CGameTrace::Init(&pSurfaceProp);
  v5 = (*(this->_vptr_IVehicle + 9))(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(pPlayer);
  x = AbsOrigin->x;
  y = AbsOrigin->y;
  v11 = AbsOrigin->z - 256.0;
  v7 = CBaseEntity::GetAbsOrigin(pPlayer);
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_flRadius = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Delta.x = x - v7->x;
  ray.m_Delta.y = y - v7->y;
  ray.m_Delta.z = v11 - v7->z;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Start.Vector = *v7;
  CTraceFilterSimple::CTraceFilterSimple(&v12, v5, 4, 0);
  v12.m_attr.m_nInteractsWith |= 0x87011uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v12, &pSurfaceProp);
  v8 = *(v15 + 176);
  if ( this->m_chPreviousTextureType != v8 )
    CEnvPlayerSurfaceTrigger::SetPlayerSurface(pPlayer, v8);
  this->m_chPreviousTextureType = v8;
}


// CBaseServerVehicle::FinishMove  (line 1585, @0x00000000023f88a0, libserver.so)  // inlines: GetDrivableVehicle
void __fastcall CBaseServerVehicle::FinishMove(
        CBaseServerVehicle *const this,
        CBasePlayer *player,
        CUserCmd *ucmd,
        CMoveData *move)
{
  (*(this->m_pDrivableVehicle->_vptr_IDrivableVehicle + 4))(this->m_pDrivableVehicle, player, ucmd, move);
}


// CBaseServerVehicle::ItemPostFrame  (line 1593, @0x00000000023f9a30, libserver.so)  // inlines: GetDrivableVehicle
void __fastcall CBaseServerVehicle::ItemPostFrame(CBaseServerVehicle *const this, CBasePlayer *player)
{
  (*(this->m_pDrivableVehicle->_vptr_IDrivableVehicle + 1))(this->m_pDrivableVehicle);
  if ( (player->m_afButtonPressed & 0x20) != 0
    && (*(this->m_pDrivableVehicle->_vptr_IDrivableVehicle + 6))(this->m_pDrivableVehicle, player) != 0
    && (*(this->_vptr_IVehicle + 19))(this, player) == 0 )
  {
    (*(player->_vptr_IHandleEntity + 473))(player);
  }
}


// CBaseServerVehicle::NPC_ThrottleForward  (line 1614, @0x00000000023f88c0, libserver.so)
void __fastcall CBaseServerVehicle::NPC_ThrottleForward(CBaseServerVehicle *const this)
{
  this->m_nNPCButtons = this->m_nNPCButtons & 0xFFFFFFE5 | 8;
}


// CBaseServerVehicle::NPC_ThrottleReverse  (line 1624, @0x00000000023f88e0, libserver.so)
void __fastcall CBaseServerVehicle::NPC_ThrottleReverse(CBaseServerVehicle *const this)
{
  this->m_nNPCButtons = this->m_nNPCButtons & 0xFFFFFFE5 | 0x10;
}


// CBaseServerVehicle::NPC_ThrottleCenter  (line 1634, @0x00000000023f8900, libserver.so)
void __fastcall CBaseServerVehicle::NPC_ThrottleCenter(CBaseServerVehicle *const this)
{
  this->m_nNPCButtons &= 0xFFFFFFE5;
}


// CBaseServerVehicle::NPC_Brake  (line 1644, @0x00000000023f8910, libserver.so)
void __fastcall CBaseServerVehicle::NPC_Brake(CBaseServerVehicle *const this)
{
  this->m_nNPCButtons = this->m_nNPCButtons & 0xFFFFFFE5 | 2;
}


// CBaseServerVehicle::NPC_TurnLeft  (line 1654, @0x00000000023f8930, libserver.so)
void __fastcall CBaseServerVehicle::NPC_TurnLeft(CBaseServerVehicle *const this, float a2, float flDegrees)
{
  int m_nNPCButtons; // eax

  m_nNPCButtons = this->m_nNPCButtons;
  this->m_flTurnDegrees = -a2;
  BYTE1(m_nNPCButtons) = BYTE1(m_nNPCButtons) & 0xF9 | 2;
  this->m_nNPCButtons = m_nNPCButtons;
}


// CBaseServerVehicle::NPC_TurnRight  (line 1664, @0x00000000023f8960, libserver.so)
void __fastcall CBaseServerVehicle::NPC_TurnRight(CBaseServerVehicle *const this, float a2, float flDegrees)
{
  int m_nNPCButtons; // eax

  m_nNPCButtons = this->m_nNPCButtons;
  this->m_flTurnDegrees = a2;
  BYTE1(m_nNPCButtons) = BYTE1(m_nNPCButtons) & 0xF9 | 4;
  this->m_nNPCButtons = m_nNPCButtons;
}


// CBaseServerVehicle::NPC_TurnCenter  (line 1674, @0x00000000023f8980, libserver.so)
void __fastcall CBaseServerVehicle::NPC_TurnCenter(CBaseServerVehicle *const this)
{
  this->m_nNPCButtons &= 0xFFFFF9FF;
}


// CBaseServerVehicle::NPC_PrimaryFire  (line 1683, @0x00000000023f8990, libserver.so)
void __fastcall CBaseServerVehicle::NPC_PrimaryFire(CBaseServerVehicle *const this)
{
  this->m_nNPCButtons |= 1u;
}


// CBaseServerVehicle::NPC_SecondaryFire  (line 1691, @0x00000000023f89a0, libserver.so)
void __fastcall CBaseServerVehicle::NPC_SecondaryFire(CBaseServerVehicle *const this)
{
  this->m_nNPCButtons |= 0x800u;
}


// CBaseServerVehicle::Weapon_PrimaryRanges  (line 1699, @0x00000000023f89b0, libserver.so)
void __fastcall CBaseServerVehicle::Weapon_PrimaryRanges(
        CBaseServerVehicle *const this,
        float *flMinRange,
        float *flMaxRange)
{
  *flMinRange = 64.0;
  *flMaxRange = 1024.0;
}


// CBaseServerVehicle::Weapon_SecondaryRanges  (line 1708, @0x00000000023f89d0, libserver.so)
void __fastcall CBaseServerVehicle::Weapon_SecondaryRanges(
        CBaseServerVehicle *const this,
        float *flMinRange,
        float *flMaxRange)
{
  *flMinRange = 64.0;
  *flMaxRange = 1024.0;
}


// CBaseServerVehicle::Weapon_PrimaryCanFireAt  (line 1717, @0x00000000023faf30, libserver.so)  // inlines: curtime
float __fastcall CBaseServerVehicle::Weapon_PrimaryCanFireAt(CBaseServerVehicle *const this)
{
  float result; // xmm0_4
  CGlobalVars *v2; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  result = 0.0;
  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    return v2->m_flCurrentTime;
  }
  return result;
}


// CBaseServerVehicle::Weapon_SecondaryCanFireAt  (line 1725, @0x00000000023faf80, libserver.so)  // inlines: curtime
float __fastcall CBaseServerVehicle::Weapon_SecondaryCanFireAt(CBaseServerVehicle *const this)
{
  float result; // xmm0_4
  CGlobalVars *v2; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  result = 0.0;
  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    return v2->m_flCurrentTime;
  }
  return result;
}


// CBaseServerVehicle::PlaySound  (line 1772, @0x00000000023f9aa0, libserver.so)  // inlines: GetInt
// calls: CBaseEntity::EmitSound, Msg
// callers: CBaseServerVehicle::PlaySound, CBaseServerVehicle::PlayCrashSound, CBaseServerVehicle::SoundStartDisabled, CBaseServerVehicle::SoundState_OnNewState
// strings: "Playing non-looping vehicle sound: %s\n"
void __fastcall CBaseServerVehicle::PlaySound(CBaseServerVehicle *const this, const char *pSound)
{
  if ( g_debug_vehiclesound.m_pParent->m_Value.m_nValue != 0 )
    Msg("Playing non-looping vehicle sound: %s\n", pSound);
  CBaseEntity::EmitSound(this->m_pVehicle, pSound, 0.0, 0);
}


// CBaseServerVehicle::PlaySound  (line 1772, @0x0000000002406d70, libserver.so)
// calls: CBaseServerVehicle::PlaySound
void __fastcall CBaseServerVehicle::PlaySound(CBaseServerVehicle *const this, const char *pSound)
{
  if ( pSound != 0 && *pSound != 0 )
    CBaseServerVehicle::PlaySound(this, pSound);
}


// CBaseServerVehicle::StopLoopingSound  (line 1784, @0x0000000002406d90, libserver.so)
// calls: CSoundEnvelopeController::GetController
// callers: CBaseServerVehicle::PlayLoopingSound, CBaseServerVehicle::SoundState_OnNewState
void __fastcall CBaseServerVehicle::StopLoopingSound(CBaseServerVehicle *const this, float a2, float fadeTime)
{
  CSoundEnvelopeController *Controller; // rax
  CSoundEnvelopeController *v5; // r12
  double v6; // xmm0_8
  CSoundPatch *m_pStateSound; // rsi

  Controller = CSoundEnvelopeController::GetController();
  v5 = Controller;
  *&v6 = LODWORD(a2);
  if ( this->m_pStateSoundFade != 0 )
  {
    (*(Controller->_vptr_CSoundEnvelopeController + 11))(Controller, a2);
    *&v6 = LODWORD(a2);
    this->m_pStateSoundFade = 0;
  }
  m_pStateSound = this->m_pStateSound;
  if ( m_pStateSound != 0 )
  {
    this->m_pStateSoundFade = m_pStateSound;
    this->m_pStateSound = 0;
    (*(v5->_vptr_CSoundEnvelopeController + 14))(v5, m_pStateSound, 0, v6);
  }
}


// CBaseServerVehicle::PlayLoopingSound  (line 1800, @0x0000000002406e20, libserver.so)  // inlines: CPASAttenuationFilter, CPASFilter, GetInt, String, ToCStr, entindex, ~CPASAttenuationFilter, ~CPASFilter
// calls: CSoundEnvelopeController::GetController, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, Msg, CBaseServerVehicle::StopLoopingSound, CRecipientFilter::~CRecipientFilter, CEntityInstance::GetEntityIndex, __stack_chk_fail, _Unwind_Resume
// callers: CBaseServerVehicle::SoundState_OnNewState
// strings: "Stop %s, start %s\n"
void __fastcall CBaseServerVehicle::PlayLoopingSound(CBaseServerVehicle *const this, const char *pSoundName)
{
  CSoundEnvelopeController *Controller; // rax
  CBaseEntity *m_pVehicle; // r12
  CSoundEnvelopeController *v6; // rbx
  vec_t v7; // xmm1_4
  double v8; // xmm0_8
  float v9; // xmm1_4
  float v10; // xmm1_4
  CSoundPatch *m_pStateSound; // r12
  const char *v12; // r15
  const char *v13; // rdx
  __int64 (__fastcall *v14)(CSoundEnvelopeController *, CPASAttenuationFilter *, _QWORD, __int64, const char *, float, float); // r12
  CEntityIndex v15; // eax
  __int64 v16; // rax
  __int64 v17; // [rsp+10h] [rbp-1B0h] BYREF
  __int64 v18; // [rsp+20h] [rbp-1A0h] BYREF
  const char *v19; // [rsp+30h] [rbp-190h] BYREF
  Vector origin; // [rsp+40h] [rbp-180h] BYREF
  CPASAttenuationFilter filter; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v22; // [rsp+188h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  Controller = CSoundEnvelopeController::GetController();
  m_pVehicle = this->m_pVehicle;
  v6 = Controller;
  *&origin.x = (*(m_pVehicle->_vptr_IHandleEntity + 186))(m_pVehicle);
  origin.z = v7;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  v8 = (*(m_pVehicle->_vptr_IHandleEntity + 186))(m_pVehicle);
  origin.z = v9;
  *&origin.x = v8;
  CPASAttenuationFilter::Filter(&filter, &origin, 0.80000001, v9);
  m_pStateSound = 0;
  if ( pSoundName == 0
    || *pSoundName == 0
    || (v14 = *(v6->_vptr_CSoundEnvelopeController + 7),
        v15.m_Data = CEntityInstance::GetEntityIndex(this->m_pVehicle).m_Data,
        v16 = v14(v6, &filter, v15.m_Data, 6, pSoundName, 0.80000001, 1.0),
        m_pStateSound = v16,
        this->m_pStateSound == 0)
    || v16 == 0
    || ((*(v6->_vptr_CSoundEnvelopeController + 20))(&v18, v6),
        (*(v6->_vptr_CSoundEnvelopeController + 20))(&v17, v6, m_pStateSound),
        v17 != v18) )
  {
    if ( g_debug_vehiclesound.m_pParent->m_Value.m_nValue == 0 )
      goto LABEL_11;
    if ( this->m_pStateSound != 0 )
    {
      (*(v6->_vptr_CSoundEnvelopeController + 20))(&v19, v6);
      v12 = "";
      if ( v19 != 0 )
        v12 = v19;
      if ( m_pStateSound != 0 )
        goto LABEL_8;
    }
    else
    {
      v12 = "NULL";
      if ( m_pStateSound != 0 )
      {
LABEL_8:
        (*(v6->_vptr_CSoundEnvelopeController + 20))(&origin, v6, m_pStateSound);
        v13 = "";
        if ( *&origin.x != 0 )
          v13 = *&origin.x;
        goto LABEL_10;
      }
    }
    v13 = "NULL";
LABEL_10:
    Msg("Stop %s, start %s\n", v12, v13);
    goto LABEL_11;
  }
  (*(v6->_vptr_CSoundEnvelopeController + 11))(v6, m_pStateSound);
  m_pStateSound = this->m_pStateSound;
  (*(v6->_vptr_CSoundEnvelopeController + 13))(v6, m_pStateSound, 1.0, 0.0);
  this->m_pStateSound = 0;
LABEL_11:
  CBaseServerVehicle::StopLoopingSound(this, 0.25, v10);
  this->m_pStateSound = m_pStateSound;
  if ( m_pStateSound != 0 )
    (*(v6->_vptr_CSoundEnvelopeController + 2))(v6, m_pStateSound, 1.0, 100.0, 0.0);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CBaseServerVehicle::PlayCrashSound  (line 1858, @0x0000000002407130, libserver.so)  // inlines: PlaySound, String, ToCStr
// calls: CBaseEntity::GetAbsOrigin, UTIL_ScreenShake, CBaseServerVehicle::PlaySound
// callers: CBaseServerVehicle::CheckCrash
__int64 __fastcall CBaseServerVehicle::PlayCrashSound(CBaseServerVehicle *const this, float a2, float speed)
{
  float v4; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm0_4
  __int64 v7; // rax
  double v8; // xmm0_8
  double v9; // xmm1_8
  double v10; // xmm2_8
  double v11; // xmm3_8
  const CBaseEntity *v12; // rax
  const Vector *AbsOrigin; // rax
  int m_Size; // edx
  int v15; // esi
  vehicle_crashsound_t *m_pMemory; // rax
  __int64 v17; // rcx
  int gearLimit; // edx
  int v19; // edx
  float *i; // rax
  __int64 result; // rax
  const char *m_pAsString; // rsi
  float rumble; // [rsp+4h] [rbp-1Ch]
  float absLastSpeed; // [rsp+8h] [rbp-18h]
  float delta; // [rsp+Ch] [rbp-14h]

  v4 = fabs(this->m_lastSpeed);
  if ( v4 <= fabs(a2) )
  {
    v5 = 0.0;
    goto LABEL_6;
  }
  v5 = fabs(this->m_lastSpeed - a2);
  v6 = 0.125 * v5;
  if ( (0.125 * v5) <= 60.0 )
  {
    if ( v6 <= 5.0 )
      goto LABEL_6;
  }
  else
  {
    v6 = 60.0;
  }
  absLastSpeed = v4;
  delta = v5;
  rumble = v6;
  v7 = (*(this->_vptr_IVehicle + 62))(this);
  v5 = delta;
  v4 = absLastSpeed;
  if ( v7 != 0 )
  {
    v12 = (*(this->_vptr_IVehicle + 62))(this, v8, v9, v10, v11, delta, absLastSpeed);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
    UTIL_ScreenShake(AbsOrigin, rumble, 150.0, 1.0, 240.0, ShakeCommand_t::SHAKE_START_RUMBLEONLY, 1, 0);
    v5 = delta;
    v4 = absLastSpeed;
  }
LABEL_6:
  m_Size = this->m_vehicleSounds.crashSounds.m_Size;
  v15 = m_Size - 1;
  if ( m_Size <= 0 )
  {
LABEL_13:
    v19 = v15;
    if ( v15 < 0 )
      return 0;
    for ( i = &this->m_vehicleSounds.crashSounds.m_Memory.m_pMemory[v15].flMinDeltaSpeed; v5 <= *i || v4 <= *(i - 1); i -= 8 )
    {
      if ( --v19 == -1 )
        return 0;
    }
    if ( *(i + 3) != 0 )
    {
      m_pAsString = *(i + 3);
      goto LABEL_23;
    }
LABEL_22:
    m_pAsString = "";
    goto LABEL_23;
  }
  m_pMemory = this->m_vehicleSounds.crashSounds.m_Memory.m_pMemory;
  v15 = m_Size - 1;
  v17 = &m_pMemory[(m_Size - 1) + 1];
  while ( 1 )
  {
    gearLimit = m_pMemory->gearLimit;
    if ( gearLimit != 0
      && gearLimit >= this->m_iSoundGear
      && v5 > m_pMemory->flMinDeltaSpeed
      && v4 > m_pMemory->flMinSpeed )
    {
      break;
    }
    if ( ++m_pMemory == v17 )
      goto LABEL_13;
  }
  if ( m_pMemory->iszCrashSound.u.m_Id == 0 )
    goto LABEL_22;
  m_pAsString = m_pMemory->iszCrashSound.u.m_pAsString;
LABEL_23:
  result = 1;
  if ( *m_pAsString != 0 )
  {
    CBaseServerVehicle::PlaySound(this, m_pAsString);
    return 1;
  }
  return result;
}


// CBaseServerVehicle::CheckCrash  (line 1911, @0x0000000002407310, libserver.so)  // inlines: GetInt
// calls: CBaseServerVehicle::PlayCrashSound, Msg
// callers: CBaseServerVehicle::CheckCrash, CBaseServerVehicle::SoundState_ChooseState
// strings: "Crashed!: speed %.2f, lastSpeed %.2f\n"
bool __fastcall CBaseServerVehicle::CheckCrash(CBaseServerVehicle *const this, vbs_sound_update_t *const params)
{
  float v2; // xmm1_4
  char v5; // r13

  v5 = CBaseServerVehicle::PlayCrashSound(this, params->flWorldSpaceSpeed, v2);
  if ( v5 != 0 && g_debug_vehiclesound.m_pParent->m_Value.m_nValue != 0 )
    Msg("Crashed!: speed %.2f, lastSpeed %.2f\n", params->flWorldSpaceSpeed, this->m_lastSpeed);
  this->m_lastSpeed = params->flWorldSpaceSpeed;
  return v5;
}


// CBaseServerVehicle::CheckCrash  (line 1911, @0x0000000002407390, libserver.so)
// calls: CBaseServerVehicle::CheckCrash
bool __fastcall CBaseServerVehicle::CheckCrash(CBaseServerVehicle *const this, vbs_sound_update_t *const params)
{
  return !params->bVehicleInWater && CBaseServerVehicle::CheckCrash(this, params);
}


// CBaseServerVehicle::SoundState_ChooseState  (line 1929, @0x00000000024073b0, libserver.so)  // inlines: CheckCrash, MapGearToMidState, MapGearToState, curtime
// calls: CBaseServerVehicle::CheckCrash
// callers: CBaseServerVehicle::SoundStartDisabled, CBaseServerVehicle::SoundState_Update
// globals: jpt_2407444, jpt_2407503
sound_states __fastcall CBaseServerVehicle::SoundState_ChooseState(
        CBaseServerVehicle *const this,
        vbs_sound_update_t *const params)
{
  double v2; // xmm0_8
  double v3; // xmm1_8
  float m_flCurrentTime; // xmm2_4
  CGlobalVars *v7; // rbx
  sound_states m_soundState; // ebx
  sound_states v9; // edx
  sound_states result; // eax
  bool v11; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int v13; // edx
  int m_iSoundGear; // edx

  m_flCurrentTime = 0.0;
  v7 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, v2, v3, 0.0);
    }
    m_flCurrentTime = v7->m_flCurrentTime;
  }
  m_soundState = this->m_soundState;
  v9 = m_soundState;
  if ( params->bExitVehicle )
  {
    result = sound_states::SS_SHUTDOWN;
    if ( m_soundState <= sound_states::SS_SHUTDOWN_WATER )
      return this->m_soundState;
    return result;
  }
  v11 = (m_flCurrentTime - this->m_soundStateStartTime) > this->m_vehicleSounds.minStateTime[m_soundState];
  switch ( m_soundState )
  {
    case sound_states::SS_NONE:
    case sound_states::SS_SHUTDOWN:
    case sound_states::SS_START_IDLE:
      break;
    case sound_states::SS_SHUTDOWN_WATER:
    case sound_states::SS_START_WATER:
      result = sound_states::SS_START_IDLE;
      if ( params->bVehicleInWater )
        break;
      return result;
    case sound_states::SS_IDLE:
      result = sound_states::SS_SHUTDOWN_WATER;
      if ( params->bVehicleInWater )
        return result;
LABEL_16:
      result = m_soundState;
      if ( !v11 || !params->bThrottleDown )
        return result;
      if ( params->bTurbo )
        return sound_states::SS_TURBO;
LABEL_19:
      result = sound_states::SS_GEAR_0;
      if ( params->bReverse )
        return sound_states::SS_REVERSE;
      return result;
    case sound_states::SS_GEAR_0:
    case sound_states::SS_GEAR_1:
    case sound_states::SS_GEAR_2:
    case sound_states::SS_GEAR_3:
    case sound_states::SS_GEAR_4:
    case sound_states::SS_SLOWDOWN:
    case sound_states::SS_SLOWDOWN_HIGHSPEED:
    case sound_states::SS_GEAR_0_RESUME:
    case sound_states::SS_GEAR_1_RESUME:
    case sound_states::SS_GEAR_2_RESUME:
    case sound_states::SS_GEAR_3_RESUME:
    case sound_states::SS_GEAR_4_RESUME:
    case sound_states::SS_REVERSE:
      result = sound_states::SS_SHUTDOWN_WATER;
      if ( params->bVehicleInWater )
        return result;
      if ( params->bTurbo )
        return sound_states::SS_TURBO;
LABEL_24:
      if ( CBaseServerVehicle::CheckCrash(this, params) )
        return sound_states::SS_IDLE;
      v9 = this->m_soundState;
      break;
    case sound_states::SS_TURBO:
      result = sound_states::SS_SHUTDOWN_WATER;
      if ( !params->bVehicleInWater )
        goto LABEL_24;
      return result;
    default:
      return m_soundState;
  }
  switch ( v9 )
  {
    case sound_states::SS_NONE:
      return 4 - params->bVehicleInWater;
    case sound_states::SS_START_IDLE:
      if ( !v11 && !params->bThrottleDown )
        return m_soundState;
      return sound_states::SS_IDLE;
    case sound_states::SS_IDLE:
      goto LABEL_16;
    case sound_states::SS_GEAR_0:
    case sound_states::SS_GEAR_0_RESUME:
      if ( v11 && !params->bThrottleDown || params->bReverse )
        return sound_states::SS_IDLE;
      result = sound_states::SS_GEAR_1;
      if ( this->m_iSoundGear <= 0 )
        return m_soundState;
      return result;
    case sound_states::SS_GEAR_1:
    case sound_states::SS_GEAR_1_RESUME:
      if ( v11 && !params->bThrottleDown )
        return sound_states::SS_SLOWDOWN;
      m_iSoundGear = this->m_iSoundGear;
      result = m_soundState;
      if ( m_iSoundGear == 1 )
        return result;
      result = sound_states::SS_GEAR_2;
      if ( m_iSoundGear == 2 )
        return result;
      goto LABEL_49;
    case sound_states::SS_GEAR_2:
    case sound_states::SS_GEAR_2_RESUME:
      result = m_soundState;
      if ( !v11 )
        return result;
      if ( !params->bThrottleDown )
        return sound_states::SS_SLOWDOWN;
      m_iSoundGear = this->m_iSoundGear;
      if ( m_iSoundGear == 2 )
        return result;
      result = sound_states::SS_GEAR_1;
      if ( m_iSoundGear == 1 )
        return result;
LABEL_49:
      LOBYTE(result) = 9;
      if ( m_iSoundGear == 3 )
        return result;
LABEL_50:
      result = sound_states::SS_GEAR_4;
      if ( m_iSoundGear == 0 )
        goto LABEL_19;
      return result;
    case sound_states::SS_GEAR_3:
    case sound_states::SS_GEAR_3_RESUME:
      result = m_soundState;
      if ( !v11 )
        return result;
      if ( !params->bThrottleDown )
        return sound_states::SS_SLOWDOWN;
      m_iSoundGear = this->m_iSoundGear;
      if ( m_iSoundGear == 3 )
        return result;
      result = sound_states::SS_GEAR_1;
      if ( m_iSoundGear == 1 )
        return result;
      LOBYTE(result) = 8;
      if ( m_iSoundGear == 2 )
        return result;
      goto LABEL_50;
    case sound_states::SS_GEAR_4:
    case sound_states::SS_GEAR_4_RESUME:
      if ( v11 && !params->bThrottleDown )
        return sound_states::SS_SLOWDOWN;
      v13 = this->m_iSoundGear;
      result = m_soundState;
      if ( v13 == 4 )
        return result;
      goto LABEL_36;
    case sound_states::SS_SLOWDOWN:
    case sound_states::SS_SLOWDOWN_HIGHSPEED:
      if ( params->bThrottleDown )
        goto LABEL_35;
      result = sound_states::SS_IDLE;
      if ( this->m_iSoundGear != 0 )
        return m_soundState;
      return result;
    case sound_states::SS_TURBO:
      result = m_soundState;
      if ( !v11 || params->bTurbo )
        return result;
LABEL_35:
      v13 = this->m_iSoundGear;
LABEL_36:
      if ( v13 == 1 )
        return sound_states::SS_GEAR_1_RESUME;
      if ( v13 <= 1 )
      {
        if ( v13 != 0 )
          return sound_states::SS_GEAR_4_RESUME;
        result = sound_states::SS_GEAR_0_RESUME;
        if ( params->bReverse )
          return sound_states::SS_REVERSE;
      }
      else
      {
        result = sound_states::SS_GEAR_2_RESUME;
        if ( v13 != 2 )
        {
          LOBYTE(result) = 16;
          if ( v13 != 3 )
            return sound_states::SS_GEAR_4_RESUME;
        }
      }
      return result;
    case sound_states::SS_REVERSE:
      result = m_soundState;
      if ( v11 && !params->bReverse )
        return sound_states::SS_SLOWDOWN;
      return result;
    default:
      return m_soundState;
  }
}


// CBaseServerVehicle::StateSoundName  (line 2107, @0x00000000024077f0, libserver.so)  // inlines: String, ToCStr
const char *__fastcall CBaseServerVehicle::StateSoundName(CBaseServerVehicle *const this, sound_states state)
{
  const char *result; // rax

  result = "";
  if ( this->m_vehicleSounds.iszStateSounds[state].u.m_Id != 0 )
    return this->m_vehicleSounds.iszStateSounds[state].u.m_pAsString;
  return result;
}


// CBaseServerVehicle::SoundState_OnNewState  (line 2112, @0x0000000002407810, libserver.so)  // inlines: GetInt, PlaySound, SoundStateNameFromIndex, StateSoundName, String, ToCStr, curtime
// calls: Msg, CBaseServerVehicle::StopLoopingSound, CBaseServerVehicle::PlaySound, CBaseServerVehicle::PlayLoopingSound
// callers: CBaseServerVehicle::SoundState_Update
// strings: "Switched to state: %d (%s)\n"
// globals: pSoundStateNames, jpt_2407878
void __fastcall CBaseServerVehicle::SoundState_OnNewState(CBaseServerVehicle *const this, sound_states lastState)
{
  float v2; // xmm1_4
  UtlSymLargeId_t m_nValue; // rsi
  __int64 m_soundState; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  CUtlSymbolLarge *v9; // rax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v11; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const char *m_pAsString; // rsi
  bool v14; // zf
  CUtlSymbolLarge *v15; // rax

  m_nValue = g_debug_vehiclesound.m_pParent->m_Value.m_nValue;
  if ( m_nValue != 0 )
  {
    m_soundState = this->m_soundState;
    v6 = 0;
    v7 = 19;
    if ( m_soundState >= 0 )
      v6 = this->m_soundState;
    if ( v6 <= 19 )
      v7 = v6;
    Msg("Switched to state: %d (%s)\n", m_soundState, pSoundStateNames[v7]);
  }
  v8 = this->m_soundState;
  switch ( v8 )
  {
    case 1:
    case 2:
    case 3:
      CBaseServerVehicle::StopLoopingSound(this, 0.25, v2);
      v9 = &this->m_vehicleSounds.iszStateSounds[this->m_soundState];
      if ( v9->u.m_Id != 0 )
        m_nValue = v9->u.m_Id;
      else
        m_nValue = "";
      if ( *m_nValue != 0 )
        CBaseServerVehicle::PlaySound(this, m_nValue);
      break;
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
      v15 = &this->m_vehicleSounds.iszStateSounds[v8];
      m_pAsString = "";
      if ( v15->u.m_Id == 0 )
        goto LABEL_22;
      CBaseServerVehicle::PlayLoopingSound(this, v15->u.m_pAsString);
      break;
    case 5:
      v14 = this->m_vehicleSounds.iszStateSounds[5].u.m_Id == 0;
      m_pAsString = "";
      this->m_lastSpeed = -1.0;
      if ( v14 )
        goto LABEL_22;
      CBaseServerVehicle::PlayLoopingSound(this, this->m_vehicleSounds.iszStateSounds[5].u.m_pAsString);
      break;
    case 11:
    case 12:
      m_pAsString = "";
      if ( this->m_iSoundGear <= 1 )
      {
        if ( this->m_vehicleSounds.iszStateSounds[11].u.m_Id != 0 )
          m_pAsString = this->m_vehicleSounds.iszStateSounds[11].u.m_pAsString;
      }
      else if ( this->m_vehicleSounds.iszStateSounds[12].u.m_Id != 0 )
      {
        m_pAsString = this->m_vehicleSounds.iszStateSounds[12].u.m_pAsString;
      }
LABEL_22:
      CBaseServerVehicle::PlayLoopingSound(this, m_pAsString);
      break;
    default:
      break;
  }
  m_flCurrentTime = 0.0;
  v11 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, m_nValue, 0.0);
    }
    m_flCurrentTime = v11->m_flCurrentTime;
  }
  this->m_soundStateStartTime = m_flCurrentTime;
}


// CBaseServerVehicle::SoundState_Update  (line 2167, @0x00000000024079d0, libserver.so)
// calls: CBaseServerVehicle::SoundState_ChooseState, CBaseServerVehicle::SoundState_OnNewState
// callers: CBaseServerVehicle::SoundStart, CBaseServerVehicle::SoundUpdate, CBaseServerVehicle::HandlePassengerExit
void __fastcall CBaseServerVehicle::SoundState_Update(CBaseServerVehicle *const this, vbs_sound_update_t *const params)
{
  sound_states v3; // eax
  sound_states m_soundState; // esi

  v3 = CBaseServerVehicle::SoundState_ChooseState(this, params);
  m_soundState = this->m_soundState;
  if ( v3 != m_soundState )
  {
    this->m_soundState = v3;
    CBaseServerVehicle::SoundState_OnNewState(this, m_soundState);
  }
}


// CBaseServerVehicle::InitSoundParams  (line 2196, @0x0000000002407c20, libserver.so)  // inlines: Defaults
void __fastcall CBaseServerVehicle::InitSoundParams(CBaseServerVehicle *const this, vbs_sound_update_t *const params)
{
  float frametime; // xmm0_4

  frametime = gpGlobals->frametime;
  params->bThrottleDown = 0;
  params->bReverse = 0;
  params->flFrameTime = frametime;
  params->bTurbo = 0;
  params->flCurrentSpeedFraction = 0.0;
  params->flWorldSpaceSpeed = 0.0;
  params->bVehicleInWater = 0;
  params->bExitVehicle = 0;
  params->bVehicleInWater = (*(this->_vptr_IVehicle + 61))(this);
}


// CBaseServerVehicle::SoundStart  (line 2205, @0x0000000002407a10, libserver.so)  // inlines: Defaults, InitSoundParams
// calls: CBaseServerVehicle::SoundState_Update
void __fastcall CBaseServerVehicle::SoundStart(CBaseServerVehicle *const this)
{
  float frametime; // xmm0_4
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  vbs_sound_update_t params; // [rsp+0h] [rbp-30h] BYREF

  (*(this->_vptr_IVehicle + 73))(this);
  this->m_soundState = sound_states::SS_NONE;
  params.bThrottleDown = 0;
  params.bReverse = 0;
  params.bTurbo = 0;
  params.bVehicleInWater = 0;
  frametime = gpGlobals->frametime;
  params.bExitVehicle = 0;
  params.bVehicleInWater = (*(this->_vptr_IVehicle + 61))(
                             this,
                             v5,
                             v3,
                             v4,
                             v6,
                             v7,
                             LODWORD(frametime),
                             0,
                             *&params.bExitVehicle);
  CBaseServerVehicle::SoundState_Update(this, &params);
}


// CBaseServerVehicle::SoundStartDisabled  (line 2218, @0x0000000002407750, libserver.so)  // inlines: Defaults, InitSoundParams, PlaySound, StateSoundName, String, ToCStr
// calls: CBaseServerVehicle::SoundState_ChooseState, CBaseServerVehicle::PlaySound
void __fastcall CBaseServerVehicle::SoundStartDisabled(CBaseServerVehicle *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  float frametime; // xmm0_4
  int (**vptr_IVehicle)(...); // rax
  const char *m_pAsString; // rsi
  vbs_sound_update_t params; // [rsp+0h] [rbp-30h] BYREF

  params.flCurrentSpeedFraction = 0.0;
  params.flWorldSpaceSpeed = 0.0;
  this->m_soundState = sound_states::SS_NONE;
  params.bThrottleDown = 0;
  params.bReverse = 0;
  params.bTurbo = 0;
  params.bVehicleInWater = 0;
  frametime = gpGlobals->frametime;
  params.bExitVehicle = 0;
  vptr_IVehicle = this->_vptr_IVehicle;
  params.flFrameTime = frametime;
  params.bVehicleInWater = vptr_IVehicle[61](
                             this,
                             v3,
                             v1,
                             v2,
                             v4,
                             v5,
                             *&params.flFrameTime,
                             LODWORD(params.flWorldSpaceSpeed),
                             *&params.bExitVehicle);
  if ( CBaseServerVehicle::SoundState_ChooseState(this, &params) == sound_states::SS_START_WATER )
  {
    if ( this->m_vehicleSounds.iszStateSounds[3].u.m_Id != 0 )
      m_pAsString = this->m_vehicleSounds.iszStateSounds[3].u.m_pAsString;
    else
      m_pAsString = "";
    if ( *m_pAsString != 0 )
      CBaseServerVehicle::PlaySound(this, m_pAsString);
  }
}


// CBaseServerVehicle::SoundShutdown  (line 2236, @0x00000000023f95d0, libserver.so)
// calls: CSoundEnvelopeController::GetController
// callers: CBaseServerVehicle::~CBaseServerVehicle
// globals: g_bIsLogging, g_iSoundsToStopOnExit
void __fastcall CBaseServerVehicle::SoundShutdown(CBaseServerVehicle *const this, double a2, float flFadeTime)
{
  bool *v4; // rbx
  __int64 v5; // rsi
  CSoundEnvelopeController *Controller; // rax
  CSoundPatch *m_pStateSoundFade; // rsi
  CSoundEnvelopeController *v8; // rbx
  CSoundPatch *m_pStateSound; // rsi
  float flFadeTimea; // [rsp+Ch] [rbp-24h]

  v4 = g_iSoundsToStopOnExit;
  flFadeTimea = *&a2;
  (*(this->_vptr_IVehicle + 74))(this, a2, flFadeTime);
  do
  {
    v5 = *v4;
    v4 += 4;
    (*(this->_vptr_IVehicle + 71))(this, v5);
  }
  while ( v4 != &g_bIsLogging );
  Controller = CSoundEnvelopeController::GetController();
  m_pStateSoundFade = this->m_pStateSoundFade;
  v8 = Controller;
  if ( m_pStateSoundFade != 0 )
  {
    (*(Controller->_vptr_CSoundEnvelopeController + 14))(Controller, m_pStateSoundFade, 1, flFadeTimea);
    this->m_pStateSoundFade = 0;
  }
  m_pStateSound = this->m_pStateSound;
  if ( m_pStateSound != 0 )
  {
    (*(v8->_vptr_CSoundEnvelopeController + 14))(v8, m_pStateSound, 1, flFadeTimea);
    this->m_pStateSound = 0;
  }
}


// CBaseServerVehicle::SoundUpdate  (line 2263, @0x0000000002407a90, libserver.so)  // inlines: Approach, operator[]
// calls: Msg, CBaseServerVehicle::SoundState_Update
// strings: "Throttle: %s, Reverse: %s\n", "CurrentSpeed: %.3f  ", "Sound Speed: %.3f\n"
void __fastcall CBaseServerVehicle::SoundUpdate(CBaseServerVehicle *const this, vbs_sound_update_t *const params)
{
  ConVar *m_pParent; // rax
  char *v5; // rdx
  char *v6; // rsi
  float flCurrentSpeedFraction; // xmm1_4
  float m_flSpeedPercentage; // xmm0_4
  unsigned __int64 v9; // xmm0_8
  float v10; // xmm2_4
  float v11; // [rsp+Ch] [rbp-14h]

  m_pParent = g_debug_vehiclesound.m_pParent;
  if ( g_debug_vehiclesound.m_pParent->m_Value.m_nValue <= 1 )
  {
    flCurrentSpeedFraction = params->flCurrentSpeedFraction;
  }
  else
  {
    v5 = "on";
    v6 = "off";
    if ( !params->bReverse )
      v5 = "off";
    if ( params->bThrottleDown )
      v6 = "on";
    Msg("Throttle: %s, Reverse: %s\n", v6, v5);
    m_pParent = g_debug_vehiclesound.m_pParent;
    flCurrentSpeedFraction = params->flCurrentSpeedFraction;
    if ( g_debug_vehiclesound.m_pParent->m_Value.m_nValue > 1 )
    {
      v11 = params->flCurrentSpeedFraction;
      Msg("CurrentSpeed: %.3f  ", flCurrentSpeedFraction);
      m_pParent = g_debug_vehiclesound.m_pParent;
      flCurrentSpeedFraction = v11;
    }
  }
  if ( this->m_vehicleSounds.pGears.m_Size > 0 )
  {
    m_flSpeedPercentage = this->m_flSpeedPercentage;
    if ( flCurrentSpeedFraction > m_flSpeedPercentage )
    {
      if ( !params->bThrottleDown )
        flCurrentSpeedFraction = this->m_flSpeedPercentage;
      v10 = params->flFrameTime
          * this->m_vehicleSounds.pGears.m_Memory.m_pMemory[this->m_iSoundGear].flSpeedApproachFactor;
      if ( (flCurrentSpeedFraction - m_flSpeedPercentage) > v10 )
      {
        flCurrentSpeedFraction = m_flSpeedPercentage + v10;
      }
      else if ( -v10 > (flCurrentSpeedFraction - m_flSpeedPercentage) )
      {
        flCurrentSpeedFraction = m_flSpeedPercentage - v10;
      }
    }
  }
  v9 = 1065353216;
  if ( flCurrentSpeedFraction <= 1.0 )
  {
    HIDWORD(v9) = 0;
    *&v9 = fmaxf(0.0, flCurrentSpeedFraction);
  }
  LODWORD(this->m_flSpeedPercentage) = v9;
  if ( m_pParent->m_Value.m_nValue > 1 )
    v9 = Msg("Sound Speed: %.3f\n", *&v9).m128_u64[0];
  (*(this->_vptr_IVehicle + 72))(this, params, *&v9);
  CBaseServerVehicle::SoundState_Update(this, params);
}


// CBaseServerVehicle::PlaySound  (line 2306, @0x00000000023fd550, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, GetInt, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, String, ToCStr, entindex, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, Msg, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, _Unwind_Resume
// strings: "Playing vehicle sound: %s\n"
void __fastcall CBaseServerVehicle::PlaySound(CBaseServerVehicle *const this, vehiclesound iSound)
{
  int *v2; // r12
  CBaseEntity *m_pVehicle; // r14
  int v5; // xmm1_4
  float v6; // xmm1_4
  const char *v7; // rax
  CBaseEntity *v8; // rdi
  float m_flVehicleVolume; // xmm0_4
  CEntityIndex v10; // eax
  EmitSound_t ep; // [rsp+0h] [rbp-1D0h] BYREF
  CPASAttenuationFilter filter; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v13; // [rsp+198h] [rbp-38h]

  v2 = &this->m_vehicleSounds.crashSounds.m_Memory.m_nAllocationCount + 2 * iSound;
  v13 = __readfsqword(0x28u);
  if ( this->m_vehicleSounds.iszSound[iSound].u.m_Id != 0 )
  {
    m_pVehicle = this->m_pVehicle;
    *&ep.m_nChannel = (*(m_pVehicle->_vptr_IHandleEntity + 186))(m_pVehicle);
    LODWORD(ep.m_pSoundName) = v5;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &ep);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    *&ep.m_nChannel = (*(m_pVehicle->_vptr_IHandleEntity + 186))(m_pVehicle);
    *&ep.m_pSoundName = v6;
    CPASAttenuationFilter::Filter(&filter, &ep, 0.80000001, v6);
    ep.m_pSoundName = 0;
    v7 = "";
    ep.m_flVolume = 1.0;
    ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
    ep.m_nFlags = 0;
    ep.m_nPitch = 100;
    ep.m_pOrigin = 0;
    ep.m_flSoundTime = 0.0;
    ep.m_pflSoundDuration = 0;
    ep.m_bEmitCloseCaption = 1;
    ep.m_bWarnOnMissingCloseCaption = 0;
    ep.m_bWarnOnDirectWaveReference = 0;
    ep.m_nSpeakerEntity.m_Data = -1;
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    ep.m_nChannel = 2;
    if ( *(v2 + 1) != 0 )
      v7 = *(v2 + 1);
    v8 = this->m_pVehicle;
    ep.m_pSoundName = v7;
    m_flVehicleVolume = this->m_flVehicleVolume;
    ep.m_SoundLevel = soundlevel_t::SNDLVL_NORM;
    ep.m_flVolume = m_flVehicleVolume;
    v10.m_Data = CEntityInstance::GetEntityIndex(v8).m_Data;
    CBaseEntity::EmitSound(&filter, v10, &ep);
    if ( g_debug_vehiclesound.m_pParent->m_Value.m_nValue != 0 )
      Msg("Playing vehicle sound: %s\n", ep.m_pSoundName);
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    }
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CBaseServerVehicle::StopSound  (line 2329, @0x00000000023f9680, libserver.so)  // inlines: String, ToCStr, entindex
// calls: CEntityInstance::GetEntityIndex, CBaseEntity::StopSound
void __fastcall CBaseServerVehicle::StopSound(CBaseServerVehicle *const this, vehiclesound iSound)
{
  const char *m_pAsString; // rbx
  CEntityIndex v3; // eax

  if ( this->m_vehicleSounds.iszSound[iSound].u.m_Id != 0 )
  {
    m_pAsString = this->m_vehicleSounds.iszSound[iSound].u.m_pAsString;
    v3.m_Data = CEntityInstance::GetEntityIndex(this->m_pVehicle).m_Data;
    CBaseEntity::StopSound(v3, 2, m_pAsString, 0);
  }
}


// CBaseServerVehicle::RecalculateSoundGear  (line 2340, @0x00000000023fa5e0, libserver.so)  // inlines: operator[]
void __fastcall CBaseServerVehicle::RecalculateSoundGear(
        CBaseServerVehicle *const this,
        vbs_sound_update_t *const params)
{
  int v2; // eax
  vehicle_gear_t *m_pMemory; // rcx
  float m_flSpeedPercentage; // xmm0_4
  __int64 v5; // rdx
  __int64 p_flMinSpeed; // rdx

  v2 = this->m_vehicleSounds.pGears.m_Size - 1;
  if ( v2 >= 0 )
  {
    m_pMemory = this->m_vehicleSounds.pGears.m_Memory.m_pMemory;
    m_flSpeedPercentage = this->m_flSpeedPercentage;
    v5 = v2;
    if ( m_flSpeedPercentage > m_pMemory[v5].flMinSpeed )
    {
LABEL_9:
      this->m_iSoundGear = v2;
    }
    else
    {
      p_flMinSpeed = &m_pMemory[v5 - 1].flMinSpeed;
      while ( --v2 != -1 )
      {
        p_flMinSpeed -= 24;
        if ( m_flSpeedPercentage > *(p_flMinSpeed + 24) )
          goto LABEL_9;
      }
    }
  }
  if ( params->bReverse )
    this->m_iSoundGear = 0;
}


// CBaseServerVehicle::StartEngineRumble  (line 2361, @0x00000000023f89f0, libserver.so)
void __fastcall CBaseServerVehicle::StartEngineRumble(CBaseServerVehicle *const this)
{
  ;
}


// CBaseServerVehicle::StopEngineRumble  (line 2368, @0x00000000023f8a00, libserver.so)
void __fastcall CBaseServerVehicle::StopEngineRumble(CBaseServerVehicle *const this)
{
  ;
}


// CBaseServerVehicle::NPC_GetPassengerInSeat  (line 2378, @0x00000000023fbf20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseCombatCharacter*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
CBaseCombatCharacter *__fastcall CBaseServerVehicle::NPC_GetPassengerInSeat(
        CBaseServerVehicle *const this,
        int nRoleID,
        int nSeatID)
{
  int m_Size; // eax
  CPassengerInfo *m_pMemory; // rcx
  __int64 v5; // rax
  uint32 m_Index; // esi
  CBaseCombatCharacter *result; // rax
  unsigned __int64 m_Index_low; // rcx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx

  m_Size = this->m_PassengerInfo.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_PassengerInfo.m_Memory.m_pMemory;
  v5 = &m_pMemory[(m_Size - 1) + 1];
  while ( m_pMemory->m_nSeat != nSeatID || m_pMemory->m_nRole != nRoleID )
  {
    if ( ++m_pMemory == v5 )
      return 0;
  }
  m_Index = m_pMemory->m_hPassenger.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(m_pMemory->m_hPassenger.m_Index);
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[m_Index_low & 0x1FF];
      if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
        return v10->m_pInstance;
    }
  }
  return result;
}


// CBaseServerVehicle::NPC_GetAvailableSeat_Any  (line 2396, @0x0000000002407c80, libserver.so)  // inlines: operator[]
// callers: CBaseServerVehicle::NPC_GetAvailableSeat
int __fastcall CBaseServerVehicle::NPC_GetAvailableSeat_Any(
        CBaseServerVehicle *const this,
        CBaseCombatCharacter *pPassenger,
        int nRoleID)
{
  __int64 v5; // r13
  unsigned int v7; // ebx
  CBaseCombatCharacter *v8; // rax

  v5 = nRoleID;
  v7 = 0;
  if ( this->m_PassengerRoles.m_Memory.m_pMemory[v5].m_PassengerSeats.m_Size <= 0 )
    return -1;
  while ( 1 )
  {
    v8 = (*(this->_vptr_IVehicle + 36))(this, nRoleID, v7);
    if ( v8 == pPassenger || v8 == 0 )
      break;
    if ( this->m_PassengerRoles.m_Memory.m_pMemory[v5].m_PassengerSeats.m_Size <= ++v7 )
      return -1;
  }
  return v7;
}


// CBaseServerVehicle::NPC_GetAvailableSeat_Nearest  (line 2420, @0x0000000002407d10, libserver.so)
int __fastcall CBaseServerVehicle::NPC_GetAvailableSeat_Nearest(
        CBaseServerVehicle *const this,
        CBaseCombatCharacter *pPassenger,
        int nRoleID)
{
  return -1;
}


// CBaseServerVehicle::NPC_GetAvailableSeat  (line 2434, @0x0000000002407dc0, libserver.so)  // inlines: CUtlSymbolLarge, IsValidIndex
// calls: CBaseServerVehicle::FindRoleIndexByName, CBaseServerVehicle::NPC_GetAvailableSeat_Any
int __fastcall CBaseServerVehicle::NPC_GetAvailableSeat(
        CBaseServerVehicle *const this,
        CBaseCombatCharacter *pPassenger,
        string_t strRoleName,
        VehicleSeatQuery_e nQueryType)
{
  int RoleIndexByName; // edx
  int result; // eax
  string_t strRoleNamea; // [rsp+8h] [rbp-38h]
  string_t v10; // [rsp+10h] [rbp-30h] BYREF

  if ( !this->m_bParsedAnimations )
  {
    strRoleNamea.u.m_Id = strRoleName.u.m_Id;
    (*(this->_vptr_IVehicle + 63))(this);
    this->m_bParsedAnimations = 1;
    strRoleName.u.m_Id = strRoleNamea.u.m_Id;
  }
  v10.u.m_Id = *strRoleName.u.m_Id;
  RoleIndexByName = CBaseServerVehicle::FindRoleIndexByName(this, &v10);
  result = -1;
  if ( RoleIndexByName >= 0
    && RoleIndexByName < this->m_PassengerRoles.m_Size
    && nQueryType == VehicleSeatQuery_e::VEHICLE_SEAT_ANY )
  {
    return CBaseServerVehicle::NPC_GetAvailableSeat_Any(this, pPassenger, RoleIndexByName);
  }
  return result;
}


// CBaseServerVehicle::NPC_HasAvailableSeat  (line 2472, @0x00000000023f8a10, libserver.so)  // inlines: CUtlSymbolLarge
bool __fastcall CBaseServerVehicle::NPC_HasAvailableSeat(CBaseServerVehicle *const this, string_t strRoleName)
{
  unsigned int (__fastcall *v2)(CBaseServerVehicle *const, _QWORD, __int64 *, _QWORD); // rax
  __int64 v4; // [rsp+0h] [rbp-10h] BYREF

  v2 = *(this->_vptr_IVehicle + 28);
  v4 = *strRoleName.u.m_Id;
  return v2(this, 0, &v4, 0) != -1;
}


// CBaseServerVehicle::FindRoleIndexByName  (line 2481, @0x0000000002407d20, libserver.so)  // inlines: CUtlSymbolLarge, FStrEq, GetName, _V_strcmp
// calls: strcmp
// callers: CBaseServerVehicle::NPC_GetAvailableSeat, CBaseServerVehicle::NPC_AddPassenger, CBaseServerVehicle::RestorePassengerInfo
__int64 __fastcall CBaseServerVehicle::FindRoleIndexByName(CBaseServerVehicle *const this, string_t strRoleName)
{
  __int64 result; // rax
  int m_Size; // r13d
  const char *v4; // r12
  CPassengerRole *m_pMemory; // r15
  unsigned int i; // ebx
  const char *m_Id; // rdi

  result = 0xFFFFFFFFLL;
  m_Size = this->m_PassengerRoles.m_Size;
  if ( m_Size > 0 )
  {
    v4 = *strRoleName.u.m_pAsString;
    m_pMemory = this->m_PassengerRoles.m_Memory.m_pMemory;
    if ( *strRoleName.u.m_Id == 0 )
      v4 = "";
    for ( i = 0; i != m_Size; ++i )
    {
      m_Id = m_pMemory->m_strName.u.m_Id;
      if ( m_pMemory->m_strName.u.m_Id == 0 )
        m_Id = "";
      if ( v4 == m_Id || strcmp(m_Id, v4) == 0 )
        return i;
      ++m_pMemory;
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CBaseServerVehicle::FindSeatIndexByName  (line 2498, @0x0000000002407f80, libserver.so)  // inlines: IsValidIndex, String, ToCStr, operator[]
// calls: __dynamic_cast, CBaseAnimating::LookupAttachment
// callers: CBaseServerVehicle::RestorePassengerInfo
__int64 __fastcall CBaseServerVehicle::FindSeatIndexByName(
        CBaseServerVehicle *const this,
        int nRoleIndex,
        string_t strSeatName)
{
  const void *v6; // rdi
  const CBaseAnimating *v7; // rdi
  const char *v8; // rsi
  int v9; // r8d
  CPassengerRole *v10; // rsi
  int m_Size; // ecx
  CPassengerSeat *m_pMemory; // rdx
  int *p_m_nAttachmentID; // rdx
  __int64 result; // rax

  if ( nRoleIndex >= 0 && nRoleIndex < this->m_PassengerRoles.m_Size )
  {
    v6 = (*(this->_vptr_IVehicle + 9))(this);
    if ( v6 != 0 )
    {
      v7 = __dynamic_cast(v6, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseAnimating, 0);
      if ( v7 != 0 )
      {
        v8 = "";
        if ( *strSeatName.u.m_Id != 0 )
          v8 = *strSeatName.u.m_pAsString;
        v9 = CBaseAnimating::LookupAttachment(v7, v8);
        v10 = &this->m_PassengerRoles.m_Memory.m_pMemory[nRoleIndex];
        m_Size = v10->m_PassengerSeats.m_Size;
        if ( m_Size > 0 )
        {
          m_pMemory = v10->m_PassengerSeats.m_Memory.m_pMemory;
          if ( v9 == m_pMemory->m_nAttachmentID )
            return 0;
          p_m_nAttachmentID = &m_pMemory[1].m_nAttachmentID;
          LODWORD(result) = 0;
          while ( 1 )
          {
            result = (result + 1);
            if ( result == m_Size )
              break;
            p_m_nAttachmentID += 16;
            if ( v9 == *(p_m_nAttachmentID - 16) )
              return result;
          }
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}


// CBaseServerVehicle::RestorePassengerInfo  (line 2526, @0x0000000002408040, libserver.so)  // inlines: CUtlSymbolLarge, IsValidIndex, operator[]
// calls: CBaseServerVehicle::FindRoleIndexByName, CBaseServerVehicle::FindSeatIndexByName
void __fastcall CBaseServerVehicle::RestorePassengerInfo(CBaseServerVehicle *const this)
{
  int m_Size; // eax
  __int64 v3; // r13
  int v4; // r14d
  CPassengerInfo *v5; // r15
  int RoleIndexByName; // eax
  __int64 v7; // r12
  int SeatIndexByName; // eax
  _QWORD v9[8]; // [rsp+10h] [rbp-40h] BYREF

  m_Size = this->m_PassengerInfo.m_Size;
  if ( m_Size != 0 )
  {
    if ( !this->m_bParsedAnimations )
    {
      (*(this->_vptr_IVehicle + 63))(this);
      this->m_bParsedAnimations = 1;
      m_Size = this->m_PassengerInfo.m_Size;
    }
    if ( m_Size > 0 )
    {
      v3 = 0;
      v4 = 0;
      do
      {
        v5 = &this->m_PassengerInfo.m_Memory.m_pMemory[v3];
        v9[0] = v5->m_strRoleName.u.m_Id;
        RoleIndexByName = CBaseServerVehicle::FindRoleIndexByName(this, v9);
        v7 = RoleIndexByName;
        if ( RoleIndexByName >= 0 && RoleIndexByName < this->m_PassengerRoles.m_Size )
        {
          v5->m_nRole = RoleIndexByName;
          v9[0] = this->m_PassengerInfo.m_Memory.m_pMemory[v3].m_strSeatName.u.m_Id;
          SeatIndexByName = CBaseServerVehicle::FindSeatIndexByName(this, RoleIndexByName, v9);
          if ( SeatIndexByName >= 0
            && SeatIndexByName < this->m_PassengerRoles.m_Memory.m_pMemory[v7].m_PassengerSeats.m_Size )
          {
            this->m_PassengerInfo.m_Memory.m_pMemory[v3].m_nSeat = SeatIndexByName;
          }
        }
        ++v4;
        ++v3;
      }
      while ( this->m_PassengerInfo.m_Size > v4 );
    }
  }
}


// CBaseServerVehicle::ReloadScript  (line 2571, @0x00000000023f9380, libserver.so)  // inlines: String, ToCStr
// calls: PhysFindOrAddVehicleScript
void __fastcall CBaseServerVehicle::ReloadScript(CBaseServerVehicle *const this)
{
  IDrivableVehicle *m_pDrivableVehicle; // rsi
  __int64 v3; // rax
  vehicleparams_t *v4; // rsi
  __int64 v5; // rbx
  const char *m_pAsString; // rdi
  string_t script; // [rsp+0h] [rbp-20h] BYREF

  m_pDrivableVehicle = this->m_pDrivableVehicle;
  if ( m_pDrivableVehicle != 0 )
  {
    (*(m_pDrivableVehicle->_vptr_IDrivableVehicle + 14))(&script);
    v3 = (*(this->_vptr_IVehicle + 27))(this);
    v4 = 0;
    v5 = v3;
    if ( v3 != 0 )
      v4 = (*(*v3 + 40LL))(v3, 0);
    m_pAsString = "";
    if ( script.u.m_Id != 0 )
      m_pAsString = script.u.m_pAsString;
    PhysFindOrAddVehicleScript(m_pAsString, v4, &this->m_vehicleSounds);
    if ( v5 != 0 )
      (*(*v5 + 136LL))(v5);
  }
}


// CBaseServerVehicle::PassengerShouldReceiveDamage  (line 2589, @0x00000000023f8a40, libserver.so)  // inlines: GetDrivableVehicle
bool __fastcall CBaseServerVehicle::PassengerShouldReceiveDamage(
        CBaseServerVehicle *const this,
        CTakeDamageInfo *const info)
{
  IDrivableVehicle *m_pDrivableVehicle; // rdi

  m_pDrivableVehicle = this->m_pDrivableVehicle;
  return m_pDrivableVehicle == 0 || (*(m_pDrivableVehicle->_vptr_IDrivableVehicle + 15))(m_pDrivableVehicle, info);
}


// CVehicleSoundsParser::CVehicleSoundsParser  (line 2621, @0x0000000002408130, libserver.so)
// callers: CPhysicsHook::FindOrAddVehicleScript
void __fastcall CVehicleSoundsParser::CVehicleSoundsParser(CVehicleSoundsParser *const this)
{
  this->_vptr_IVPhysicsKeyHandler = &off_40D2190;
  this->m_iCurrentGear = -1;
  this->m_iCurrentState = -1;
  this->m_iCurrentCrashSound = -1;
}


// CVehicleSoundsParser::ParseKeyValue  (line 2632, @0x000000000240d140, libserver.so)  // inlines: AddToTail, CUtlSymbolLarge, Construct<vehicle_crashsound_t>, Construct<vehicle_gear_t>, Element, GrowMemory, SoundStateIndexFromName, atof, atoi, operator=, operator[], vehicle_crashsound_t, vehicle_gear_t
// calls: V_stricmp_fast, strtod, CUtlMemory<vehicle_gear_t, int>::Grow, AllocPooledString, CUtlMemory<vehicle_crashsound_t, int>::Grow, strtol
// strings: "gear", "crashsound", "max_speed", "speed_approach_factor", "min_time", "min_speed" (8 total)
// globals: vehiclesound_parsenames, pSoundStateNames
void __fastcall CVehicleSoundsParser::ParseKeyValue(
        CVehicleSoundsParser *const this,
        void *pData,
        const char *pKey,
        const char *pValue)
{
  int v8; // r12d
  int v9; // eax
  __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __m128d v15; // xmm0
  int m_iCurrentState; // r8d
  __int64 v17; // r12
  __m128d v18; // xmm0
  int m_iCurrentCrashSound; // edi
  __int64 v20; // r13
  __int64 v21; // rbx
  __m128d v22; // xmm0
  __int64 v23; // r12
  int v24; // r12d
  int v25; // eax
  _QWORD *v26; // rdx
  __int64 v27; // r12
  __m128d v28; // xmm0
  __int64 v29; // r12
  __m128d v30; // xmm0
  __int64 v31; // r12
  _QWORD v32[8]; // [rsp+10h] [rbp-40h] BYREF

  if ( V_stricmp_fast(pKey, "gear") == 0 )
  {
    v8 = *(pData + 2);
    v9 = v8;
    if ( v8 == *(pData + 6) )
    {
      CUtlMemory<vehicle_gear_t,int>::Grow(pData + 1, 1);
      v9 = *(pData + 2);
    }
    *(pData + 2) = v9 + 1;
    v10 = 24LL * v8;
    v11 = (*(pData + 2) + v10);
    if ( v11 != 0 )
    {
      *v11 = &off_3FE40C0;
      v12 = *(pData + 2) + v10;
    }
    else
    {
      v12 = 0;
    }
    *(v12 + 12) = 0;
    *(*(pData + 2) + v10 + 16) = 1065353216;
    v13 = *(pData + 2);
    if ( v8 != 0 )
      *(v13 + v10 + 8) = *(v13 + v10 - 12);
    else
      *(v13 + v10 + 8) = 0;
    this->m_iCurrentGear = v8;
    return;
  }
  if ( V_stricmp_fast(pKey, "state") == 0 )
  {
    this->m_iCurrentState = 0;
    return;
  }
  if ( V_stricmp_fast(pKey, "crashsound") == 0 )
  {
    v24 = *(pData + 8);
    v25 = v24;
    if ( v24 == *(pData + 12) )
    {
      CUtlMemory<vehicle_crashsound_t,int>::Grow((pData + 40), 1);
      v25 = *(pData + 8);
    }
    *(pData + 8) = v25 + 1;
    v26 = (*(pData + 5) + 32LL * v24);
    if ( v26 != 0 )
    {
      v26[3] = 0;
      *v26 = &off_3FE40E0;
    }
    this->m_iCurrentCrashSound = v24;
    *(*(pData + 5) + 32LL * v24 + 8) = 0;
    *(*(pData + 5) + 32LL * this->m_iCurrentCrashSound + 12) = 0;
    *(*(pData + 5) + 32LL * this->m_iCurrentCrashSound + 24) = 0;
    return;
  }
  if ( this->m_iCurrentGear >= 0 )
  {
    if ( V_stricmp_fast(pKey, "max_speed") == 0 )
    {
      v21 = *(pData + 2) + 24LL * this->m_iCurrentGear;
      v22.m128d_f64[0] = strtod(pValue, 0);
      *(v21 + 12) = _mm_movedup_pd(v22).m128d_f64[0];
      return;
    }
    if ( V_stricmp_fast(pKey, "speed_approach_factor") == 0 )
    {
      v14 = *(pData + 2) + 24LL * this->m_iCurrentGear;
      v15.m128d_f64[0] = strtod(pValue, 0);
      *(v14 + 16) = _mm_movedup_pd(v15).m128d_f64[0];
      return;
    }
  }
  m_iCurrentState = this->m_iCurrentState;
  this->m_iCurrentGear = -1;
  if ( m_iCurrentState >= 0 )
  {
    if ( V_stricmp_fast(pKey, "name") == 0 )
    {
      v23 = 0;
      while ( V_stricmp_fast(pSoundStateNames[v23], pValue) != 0 )
      {
        if ( ++v23 == 20 )
        {
          LODWORD(v23) = -1;
          break;
        }
      }
      this->m_iCurrentState = v23;
      *(pData + v23 + 16) = 0;
      *(pData + this->m_iCurrentState + 72) = 0;
      return;
    }
    if ( V_stricmp_fast(pKey, "sound") == 0 )
    {
      AllocPooledString(v32, pValue);
      *(pData + this->m_iCurrentState + 16) = v32[0];
      return;
    }
    if ( V_stricmp_fast(pKey, "min_time") == 0 )
    {
      v17 = this->m_iCurrentState;
      v18.m128d_f64[0] = strtod(pValue, 0);
      *(pData + v17 + 72) = _mm_movedup_pd(v18).m128d_f64[0];
      return;
    }
  }
  m_iCurrentCrashSound = this->m_iCurrentCrashSound;
  this->m_iCurrentState = -1;
  if ( m_iCurrentCrashSound < 0 )
    goto LABEL_29;
  if ( V_stricmp_fast(pKey, "min_speed") == 0 )
  {
    v27 = *(pData + 5) + 32LL * this->m_iCurrentCrashSound;
    v28.m128d_f64[0] = strtod(pValue, 0);
    *(v27 + 8) = _mm_movedup_pd(v28).m128d_f64[0];
    return;
  }
  if ( V_stricmp_fast(pKey, "sound") == 0 )
  {
    AllocPooledString(v32, pValue);
    *(*(pData + 5) + 32LL * this->m_iCurrentCrashSound + 24) = v32[0];
    return;
  }
  if ( V_stricmp_fast(pKey, "min_speed_change") == 0 )
  {
    v29 = *(pData + 5) + 32LL * this->m_iCurrentCrashSound;
    v30.m128d_f64[0] = strtod(pValue, 0);
    *(v29 + 12) = _mm_movedup_pd(v30).m128d_f64[0];
    return;
  }
  if ( V_stricmp_fast(pKey, "gear_limit") != 0 )
  {
LABEL_29:
    this->m_iCurrentCrashSound = -1;
    v20 = 0;
    while ( V_stricmp_fast(pKey, vehiclesound_parsenames[v20]) != 0 )
    {
      if ( ++v20 == 9 )
        return;
    }
    AllocPooledString(v32, pValue);
    *(pData + v20 + 7) = v32[0];
  }
  else
  {
    v31 = *(pData + 5) + 32LL * this->m_iCurrentCrashSound;
    *(v31 + 16) = strtol(pValue, 0, 10);
  }
}


// CVehicleSoundsParser::SetDefaults  (line 2754, @0x00000000023fa8b0, libserver.so)  // inlines: Init, Purge, RemoveAll, operator=
// calls: CUtlMemory<vehicle_gear_t, int>::Purge, CUtlMemory<vehicle_crashsound_t, int>::Purge
void __fastcall CVehicleSoundsParser::SetDefaults(CVehicleSoundsParser *const this, void *pData)
{
  bool v3; // zf
  __int64 i; // rax

  *(pData + 2) = 0;
  if ( (*(pData + 7) & 0xC0000000) == 0 )
    CUtlMemory<vehicle_gear_t,int>::Purge(pData + 1);
  v3 = (*(pData + 13) & 0xC0000000) == 0;
  *(pData + 8) = 0;
  if ( v3 )
    CUtlMemory<vehicle_crashsound_t,int>::Purge((pData + 40));
  for ( i = 0; i != 72; i += 8 )
    *(pData + i + 56) = 0;
  LOBYTE(i) = 0;
  do
  {
    *(pData + 2 * i + 128) = 0;
    *(pData + i + 288) = 0;
    i += 4;
  }
  while ( i != 80 );
}


