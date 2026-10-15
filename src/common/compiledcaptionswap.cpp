
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CompiledCaptionHeader_t::AddDatadescMetadataKeys  (line 17, @0x000000000241b320, libserver.so)
void __fastcall CompiledCaptionHeader_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CompiledCaptionHeader_t::GetBaseMap  (line 17, @0x000000000241b330, libserver.so)
datamap_t *__cdecl CompiledCaptionHeader_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<CompiledCaptionHeader_t>  (line 17, @0x000000000241b340, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_public_source_files_01.cpp
// strings: "CompiledCaptionHeader_t"
// globals: `guard variable for'DataMapInit<CompiledCaptionHeader_t>(CompiledCaptionHeader_t *)::nameHolder, CompiledCaptionHeader_t::m_DataMap, DataMapInit<CompiledCaptionHeader_t>(CompiledCaptionHeader_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CompiledCaptionHeader_t>(CompiledCaptionHeader_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CompiledCaptionHeader_t>(CompiledCaptionHeader_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CompiledCaptionHeader_t>(CompiledCaptionHeader_t *)::nameHolder) != 0 )
  {
    DataMapInit<CompiledCaptionHeader_t>(CompiledCaptionHeader_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CompiledCaptionHeader_t>(CompiledCaptionHeader_t *)::nameHolder.m_pszBase = "CompiledCaptionHeader_t";
    DataMapInit<CompiledCaptionHeader_t>(CompiledCaptionHeader_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CompiledCaptionHeader_t>(CompiledCaptionHeader_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CompiledCaptionHeader_t>(CompiledCaptionHeader_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CompiledCaptionHeader_t>(CompiledCaptionHeader_t *)::nameHolder.m_nLenBase = 23;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CompiledCaptionHeader_t>(CompiledCaptionHeader_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CompiledCaptionHeader_t>(CompiledCaptionHeader_t *)::nameHolder,
      &_dso_handle);
  }
  CompiledCaptionHeader_t::m_DataMap.baseMap = 0;
  CompiledCaptionHeader_t::m_DataMap.dataDesc = &DataMapInit<CompiledCaptionHeader_t>(CompiledCaptionHeader_t *)::dataDesc[1];
  CompiledCaptionHeader_t::m_DataMap.dataNumFields = 6;
  return &CompiledCaptionHeader_t::m_DataMap;
}


// CaptionLookup_t::AddDatadescMetadataKeys  (line 26, @0x000000000241b400, libserver.so)
void __fastcall CaptionLookup_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CaptionLookup_t::GetBaseMap  (line 26, @0x000000000241b410, libserver.so)
datamap_t *__cdecl CaptionLookup_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<CaptionLookup_t>  (line 26, @0x000000000241b420, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_public_source_files_01.cpp
// strings: "CaptionLookup_t"
// globals: `guard variable for'DataMapInit<CaptionLookup_t>(CaptionLookup_t *)::nameHolder, CaptionLookup_t::m_DataMap, DataMapInit<CaptionLookup_t>(CaptionLookup_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CaptionLookup_t>(CaptionLookup_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CaptionLookup_t>(CaptionLookup_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CaptionLookup_t>(CaptionLookup_t *)::nameHolder) != 0 )
  {
    DataMapInit<CaptionLookup_t>(CaptionLookup_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CaptionLookup_t>(CaptionLookup_t *)::nameHolder.m_pszBase = "CaptionLookup_t";
    DataMapInit<CaptionLookup_t>(CaptionLookup_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CaptionLookup_t>(CaptionLookup_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CaptionLookup_t>(CaptionLookup_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CaptionLookup_t>(CaptionLookup_t *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CaptionLookup_t>(CaptionLookup_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CaptionLookup_t>(CaptionLookup_t *)::nameHolder,
      &_dso_handle);
  }
  CaptionLookup_t::m_DataMap.baseMap = 0;
  CaptionLookup_t::m_DataMap.dataDesc = &DataMapInit<CaptionLookup_t>(CaptionLookup_t *)::dataDesc[1];
  CaptionLookup_t::m_DataMap.dataNumFields = 4;
  return &CaptionLookup_t::m_DataMap;
}


// SwapClosecaptionFile  (line 36, @0x000000000241b4e0, libserver.so)  // inlines: ActivateByteSwapping, LowLevelByteSwap<wchar_t>, SetTargetBigEndian, SwapBufferToTargetEndian<wchar_t>, SwapFieldsToTargetEndian<CaptionLookup_t>, SwapFieldsToTargetEndian<CompiledCaptionHeader_t>, V_memcpy, memcpy
// calls: CByteswap::SwapFieldsToTargetEndian
// callers: CaptionCreateCallback
// globals: CaptionLookup_t::m_DataMap, CompiledCaptionHeader_t::m_DataMap
bool __fastcall SwapClosecaptionFile(void *pData)
{
  bool result; // al
  int v3; // eax
  char *v4; // rbx
  char *v5; // r14
  void *v6; // rdx
  void *v7; // rsi
  char *v8; // rax
  int v9; // esi
  int v10; // edx
  char v11; // cl
  CByteswap swap; // [rsp+0h] [rbp-30h] BYREF
  int v13; // [rsp+Ch] [rbp-24h]

  result = 0;
  *&swap |= 3u;
  if ( *pData == 1145258838 && *(pData + 1) == 1 )
  {
    v3 = *(pData + 4);
    v4 = pData + 24;
    if ( v3 != 0 )
    {
      v5 = pData + 12 * (v3 - 1) + 36;
      do
      {
        v6 = v4;
        v7 = v4;
        v4 += 12;
        CByteswap::SwapFieldsToTargetEndian(&swap, v7, v6, &CaptionLookup_t::m_DataMap);
      }
      while ( v4 != v5 );
    }
    v8 = pData + *(pData + 5);
    v9 = (*(pData + 3) * *(pData + 2)) >> 2;
    if ( v9 > 0 && v8 != 0 && (*&swap & 1) != 0 )
    {
      v10 = 0;
      do
      {
        v11 = v8[3];
        ++v10;
        v8 += 4;
        LOBYTE(v13) = v11;
        BYTE1(v13) = *(v8 - 2);
        BYTE2(v13) = *(v8 - 3);
        HIBYTE(v13) = *(v8 - 4);
        *(v8 - 1) = v13;
      }
      while ( v9 > v10 );
    }
    CByteswap::SwapFieldsToTargetEndian(&swap, pData, pData, &CompiledCaptionHeader_t::m_DataMap);
    return 1;
  }
  return result;
}


// CaptionCreateCallback  (line 76, @0x000000000241d2b0, libserver.so)  // inlines: ~CUtlBuffer, ~CUtlMemory
// calls: CUtlBuffer::CUtlBuffer, SwapClosecaptionFile, Warning, CUtlMemory<unsigned char, int>::Purge, _Unwind_Resume
// strings: "Failed to create %s\n"
bool __fastcall CaptionCreateCallback(
        const char *pSourceName,
        const char *pTargetName,
        const char *pPathID,
        void *pExtraData)
{
  char v7; // r12
  CUtlBuffer buf; // [rsp+10h] [rbp-80h] BYREF

  CUtlBuffer::CUtlBuffer(&buf, 0, 0, 0);
  if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 14))(
         &g_pFullFileSystem->IBaseFileSystem,
         pSourceName,
         pPathID,
         &buf,
         0,
         0,
         0) == 0 )
    goto LABEL_5;
  if ( !SwapClosecaptionFile(buf.m_Memory.m_pMemory) )
  {
    Warning("Failed to create %s\n", pTargetName);
LABEL_5:
    v7 = 0;
    goto LABEL_6;
  }
  v7 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 15))(
         &g_pFullFileSystem->IBaseFileSystem,
         pTargetName,
         pPathID,
         &buf);
LABEL_6:
  CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
  return v7;
}


// UpdateOrCreateCaptionFile  (line 99, @0x000000000241b5f0, libserver.so)
// calls: UpdateOrCreate
// globals: CaptionCreateCallback(char const*,char const*,char const*,void *)
int __fastcall UpdateOrCreateCaptionFile(const char *pSourceName, char *pTargetName, int maxLen, bool bForce)
{
  return UpdateOrCreate(pSourceName, pTargetName, maxLen, "GAME", CaptionCreateCallback, bForce, 0);
}


