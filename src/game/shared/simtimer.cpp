
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSimpleSimTimer::AddDatadescMetadataKeys  (line 15, @0x00000000023912b0, libserver.so)
void __fastcall CSimpleSimTimer::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CSimpleSimTimer::GetBaseMap  (line 15, @0x00000000023912c0, libserver.so)
datamap_t *__cdecl CSimpleSimTimer::GetBaseMap()
{
  return 0;
}


// DataMapInit<CSimpleSimTimer>  (line 15, @0x00000000023912d0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CSimpleSimTimer"
// globals: `guard variable for'DataMapInit<CSimpleSimTimer>(CSimpleSimTimer *)::nameHolder, CSimpleSimTimer::m_DataMap, DataMapInit<CSimpleSimTimer>(CSimpleSimTimer *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CSimpleSimTimer>(CSimpleSimTimer *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CSimpleSimTimer>(CSimpleSimTimer *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSimpleSimTimer>(CSimpleSimTimer *)::nameHolder) != 0 )
  {
    DataMapInit<CSimpleSimTimer>(CSimpleSimTimer *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CSimpleSimTimer>(CSimpleSimTimer *)::nameHolder.m_pszBase = "CSimpleSimTimer";
    DataMapInit<CSimpleSimTimer>(CSimpleSimTimer *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CSimpleSimTimer>(CSimpleSimTimer *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CSimpleSimTimer>(CSimpleSimTimer *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CSimpleSimTimer>(CSimpleSimTimer *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSimpleSimTimer>(CSimpleSimTimer *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CSimpleSimTimer>(CSimpleSimTimer *)::nameHolder,
      &_dso_handle);
  }
  CSimpleSimTimer::m_DataMap.baseMap = 0;
  CSimpleSimTimer::m_DataMap.dataDesc = &DataMapInit<CSimpleSimTimer>(CSimpleSimTimer *)::dataDesc[1];
  CSimpleSimTimer::m_DataMap.dataNumFields = 1;
  return &CSimpleSimTimer::m_DataMap;
}


// CSimTimer::AddDatadescMetadataKeys  (line 19, @0x0000000002391390, libserver.so)
void __fastcall CSimTimer::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CSimTimer::GetBaseMap  (line 19, @0x00000000023913a0, libserver.so)
// globals: CSimpleSimTimer::m_DataMap
datamap_t *__cdecl CSimTimer::GetBaseMap()
{
  return &CSimpleSimTimer::m_DataMap;
}


// DataMapInit<CSimTimer>  (line 19, @0x00000000023913b0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CSimTimer"
// globals: `guard variable for'DataMapInit<CSimTimer>(CSimTimer *)::nameHolder, CSimpleSimTimer::m_DataMap, CSimTimer::m_DataMap, DataMapInit<CSimTimer>(CSimTimer *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CSimTimer>(CSimTimer *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CSimTimer>(CSimTimer *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSimTimer>(CSimTimer *)::nameHolder) != 0 )
  {
    DataMapInit<CSimTimer>(CSimTimer *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CSimTimer>(CSimTimer *)::nameHolder.m_pszBase = "CSimTimer";
    DataMapInit<CSimTimer>(CSimTimer *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CSimTimer>(CSimTimer *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CSimTimer>(CSimTimer *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CSimTimer>(CSimTimer *)::nameHolder.m_nLenBase = 9;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSimTimer>(CSimTimer *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CSimTimer>(CSimTimer *)::nameHolder,
      &_dso_handle);
  }
  CSimTimer::m_DataMap.dataNumFields = 1;
  CSimTimer::m_DataMap.baseMap = &CSimpleSimTimer::m_DataMap;
  CSimTimer::m_DataMap.dataDesc = &DataMapInit<CSimTimer>(CSimTimer *)::dataDesc[1];
  return &CSimTimer::m_DataMap;
}


// CRandSimTimer::AddDatadescMetadataKeys  (line 23, @0x0000000002391470, libserver.so)
void __fastcall CRandSimTimer::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CRandSimTimer::GetBaseMap  (line 23, @0x0000000002391480, libserver.so)
// globals: CSimpleSimTimer::m_DataMap
datamap_t *__cdecl CRandSimTimer::GetBaseMap()
{
  return &CSimpleSimTimer::m_DataMap;
}


// DataMapInit<CRandSimTimer>  (line 23, @0x0000000002391490, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CRandSimTimer"
// globals: `guard variable for'DataMapInit<CRandSimTimer>(CRandSimTimer *)::nameHolder, CSimpleSimTimer::m_DataMap, CRandSimTimer::m_DataMap, DataMapInit<CRandSimTimer>(CRandSimTimer *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CRandSimTimer>(CRandSimTimer *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CRandSimTimer>(CRandSimTimer *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRandSimTimer>(CRandSimTimer *)::nameHolder) != 0 )
  {
    DataMapInit<CRandSimTimer>(CRandSimTimer *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CRandSimTimer>(CRandSimTimer *)::nameHolder.m_pszBase = "CRandSimTimer";
    DataMapInit<CRandSimTimer>(CRandSimTimer *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CRandSimTimer>(CRandSimTimer *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CRandSimTimer>(CRandSimTimer *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CRandSimTimer>(CRandSimTimer *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRandSimTimer>(CRandSimTimer *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CRandSimTimer>(CRandSimTimer *)::nameHolder,
      &_dso_handle);
  }
  CRandSimTimer::m_DataMap.dataNumFields = 2;
  CRandSimTimer::m_DataMap.baseMap = &CSimpleSimTimer::m_DataMap;
  CRandSimTimer::m_DataMap.dataDesc = &DataMapInit<CRandSimTimer>(CRandSimTimer *)::dataDesc[1];
  return &CRandSimTimer::m_DataMap;
}


// CStopwatchBase::AddDatadescMetadataKeys  (line 28, @0x0000000002391550, libserver.so)
void __fastcall CStopwatchBase::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CStopwatchBase::GetBaseMap  (line 28, @0x0000000002391560, libserver.so)
// globals: CSimpleSimTimer::m_DataMap
datamap_t *__cdecl CStopwatchBase::GetBaseMap()
{
  return &CSimpleSimTimer::m_DataMap;
}


// DataMapInit<CStopwatchBase>  (line 28, @0x0000000002391570, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CStopwatchBase"
// globals: `guard variable for'DataMapInit<CStopwatchBase>(CStopwatchBase *)::nameHolder, CSimpleSimTimer::m_DataMap, CStopwatchBase::m_DataMap, DataMapInit<CStopwatchBase>(CStopwatchBase *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CStopwatchBase>(CStopwatchBase *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CStopwatchBase>(CStopwatchBase *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CStopwatchBase>(CStopwatchBase *)::nameHolder) != 0 )
  {
    DataMapInit<CStopwatchBase>(CStopwatchBase *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CStopwatchBase>(CStopwatchBase *)::nameHolder.m_pszBase = "CStopwatchBase";
    DataMapInit<CStopwatchBase>(CStopwatchBase *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CStopwatchBase>(CStopwatchBase *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CStopwatchBase>(CStopwatchBase *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CStopwatchBase>(CStopwatchBase *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CStopwatchBase>(CStopwatchBase *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CStopwatchBase>(CStopwatchBase *)::nameHolder,
      &_dso_handle);
  }
  CStopwatchBase::m_DataMap.dataNumFields = 1;
  CStopwatchBase::m_DataMap.baseMap = &CSimpleSimTimer::m_DataMap;
  CStopwatchBase::m_DataMap.dataDesc = &DataMapInit<CStopwatchBase>(CStopwatchBase *)::dataDesc[1];
  return &CStopwatchBase::m_DataMap;
}


// CStopwatch::AddDatadescMetadataKeys  (line 32, @0x0000000002391630, libserver.so)
void __fastcall CStopwatch::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CStopwatch::GetBaseMap  (line 32, @0x0000000002391640, libserver.so)
// globals: CStopwatchBase::m_DataMap
datamap_t *__cdecl CStopwatch::GetBaseMap()
{
  return &CStopwatchBase::m_DataMap;
}


// DataMapInit<CStopwatch>  (line 32, @0x0000000002391650, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CStopwatch"
// globals: `guard variable for'DataMapInit<CStopwatch>(CStopwatch *)::nameHolder, CStopwatchBase::m_DataMap, CStopwatch::m_DataMap, DataMapInit<CStopwatch>(CStopwatch *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CStopwatch>(CStopwatch *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CStopwatch>(CStopwatch *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CStopwatch>(CStopwatch *)::nameHolder) != 0 )
  {
    DataMapInit<CStopwatch>(CStopwatch *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CStopwatch>(CStopwatch *)::nameHolder.m_pszBase = "CStopwatch";
    DataMapInit<CStopwatch>(CStopwatch *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CStopwatch>(CStopwatch *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CStopwatch>(CStopwatch *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CStopwatch>(CStopwatch *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CStopwatch>(CStopwatch *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CStopwatch>(CStopwatch *)::nameHolder,
      &_dso_handle);
  }
  CStopwatch::m_DataMap.dataNumFields = 1;
  CStopwatch::m_DataMap.baseMap = &CStopwatchBase::m_DataMap;
  CStopwatch::m_DataMap.dataDesc = &DataMapInit<CStopwatch>(CStopwatch *)::dataDesc[1];
  return &CStopwatch::m_DataMap;
}


// CRandStopwatch::AddDatadescMetadataKeys  (line 36, @0x0000000002391710, libserver.so)
void __fastcall CRandStopwatch::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CRandStopwatch::GetBaseMap  (line 36, @0x0000000002391720, libserver.so)
// globals: CStopwatchBase::m_DataMap
datamap_t *__cdecl CRandStopwatch::GetBaseMap()
{
  return &CStopwatchBase::m_DataMap;
}


// DataMapInit<CRandStopwatch>  (line 36, @0x0000000002391730, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CRandStopwatch"
// globals: `guard variable for'DataMapInit<CRandStopwatch>(CRandStopwatch *)::nameHolder, CStopwatchBase::m_DataMap, CRandStopwatch::m_DataMap, DataMapInit<CRandStopwatch>(CRandStopwatch *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CRandStopwatch>(CRandStopwatch *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CRandStopwatch>(CRandStopwatch *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRandStopwatch>(CRandStopwatch *)::nameHolder) != 0 )
  {
    DataMapInit<CRandStopwatch>(CRandStopwatch *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CRandStopwatch>(CRandStopwatch *)::nameHolder.m_pszBase = "CRandStopwatch";
    DataMapInit<CRandStopwatch>(CRandStopwatch *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CRandStopwatch>(CRandStopwatch *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CRandStopwatch>(CRandStopwatch *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CRandStopwatch>(CRandStopwatch *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRandStopwatch>(CRandStopwatch *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CRandStopwatch>(CRandStopwatch *)::nameHolder,
      &_dso_handle);
  }
  CRandStopwatch::m_DataMap.dataNumFields = 2;
  CRandStopwatch::m_DataMap.baseMap = &CStopwatchBase::m_DataMap;
  CRandStopwatch::m_DataMap.dataDesc = &DataMapInit<CRandStopwatch>(CRandStopwatch *)::dataDesc[1];
  return &CRandStopwatch::m_DataMap;
}


