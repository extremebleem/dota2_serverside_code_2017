
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ResponseParams::AddDatadescMetadataKeys  (line 17, @0x000000000205e240, libserver.so)
void __fastcall ResponseParams::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// ResponseParams::GetBaseMap  (line 17, @0x000000000205e250, libserver.so)
datamap_t *__cdecl ResponseParams::GetBaseMap()
{
  return 0;
}


// DataMapInit<ResponseParams>  (line 17, @0x000000000205e260, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "AI_ResponseParams"
// globals: `guard variable for'DataMapInit<ResponseParams>(ResponseParams *)::nameHolder, ResponseParams::m_DataMap, DataMapInit<ResponseParams>(ResponseParams *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<ResponseParams>(AI_ResponseParams *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<ResponseParams>(ResponseParams *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<ResponseParams>(ResponseParams *)::nameHolder) != 0 )
  {
    DataMapInit<ResponseParams>(ResponseParams *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<ResponseParams>(ResponseParams *)::nameHolder.m_pszBase = "AI_ResponseParams";
    DataMapInit<ResponseParams>(ResponseParams *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<ResponseParams>(ResponseParams *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<ResponseParams>(ResponseParams *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<ResponseParams>(ResponseParams *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<ResponseParams>(ResponseParams *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<ResponseParams>(ResponseParams *)::nameHolder,
      &_dso_handle);
  }
  ResponseParams::m_DataMap.baseMap = 0;
  ResponseParams::m_DataMap.dataDesc = &DataMapInit<ResponseParams>(ResponseParams *)::dataDesc[1];
  ResponseParams::m_DataMap.dataNumFields = 5;
  return &ResponseParams::m_DataMap;
}


// CRR_Response::AddDatadescMetadataKeys  (line 25, @0x000000000205e320, libserver.so)
void __fastcall CRR_Response::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CRR_Response::GetBaseMap  (line 25, @0x000000000205e330, libserver.so)
datamap_t *__cdecl CRR_Response::GetBaseMap()
{
  return 0;
}


// DataMapInit<CRR_Response>  (line 25, @0x000000000205e340, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "AI_Response"
// globals: `guard variable for'DataMapInit<CRR_Response>(CRR_Response *)::nameHolder, CRR_Response::m_DataMap, DataMapInit<CRR_Response>(CRR_Response *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CRR_Response>(AI_Response *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CRR_Response>(CRR_Response *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRR_Response>(CRR_Response *)::nameHolder) != 0 )
  {
    DataMapInit<CRR_Response>(CRR_Response *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CRR_Response>(CRR_Response *)::nameHolder.m_pszBase = "AI_Response";
    DataMapInit<CRR_Response>(CRR_Response *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CRR_Response>(CRR_Response *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CRR_Response>(CRR_Response *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CRR_Response>(CRR_Response *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRR_Response>(CRR_Response *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CRR_Response>(CRR_Response *)::nameHolder,
      &_dso_handle);
  }
  CRR_Response::m_DataMap.baseMap = 0;
  CRR_Response::m_DataMap.dataDesc = &DataMapInit<CRR_Response>(CRR_Response *)::dataDesc[1];
  CRR_Response::m_DataMap.dataNumFields = 4;
  return &CRR_Response::m_DataMap;
}


