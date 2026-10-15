
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CResourceAllocatorUtils::AssumeControl  (line 49, @0x000000000326aa60, libserver.so)  // inlines: ResourceGetName, ResourceGetName<260ul>, String, V_memcpy, V_strncpy<int>, memcpy
// calls: _V_strncpy, V_sprintf_safe<260ul>, memcpy, __stack_chk_fail
// callers: CResourceAllocatorUtils::AssumeControl
// strings: "Resource %s"
void *__fastcall CResourceAllocatorUtils::AssumeControl(CResourceAllocatorUtils *const this, const void *pData)
{
  ResourceHandle_t m_hResource; // rax
  const char **m_Name; // rax
  const char *v6; // rsi
  void *v7; // rax
  size_t m_nSize; // rdx
  char pResourceName[272]; // [rsp+0h] [rbp-240h] BYREF
  char pDebugName[260]; // [rsp+110h] [rbp-130h] BYREF
  unsigned __int64 v12; // [rsp+218h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  m_hResource = this->m_hResource;
  if ( m_hResource != 0 && (m_Name = m_hResource->m_Name) != 0 )
  {
    v6 = "";
    if ( *m_Name != 0 )
      v6 = *m_Name;
    _V_strncpy(pResourceName, v6, 260);
  }
  else
  {
    _V_strncpy(pResourceName, "", 260);
  }
  V_sprintf_safe<260ul>(pDebugName, "Resource %s", pResourceName);
  v7 = (*(*g_pAsyncFileSystem + 192LL))(g_pAsyncFileSystem, this->m_nSize, pDebugName, this->m_nAlignment);
  m_nSize = this->m_nSize;
  if ( (m_nSize & 0x80000000) != 0LL )
    __debugbreak();
  return memcpy(v7, pData, m_nSize);
}


// CResourceAllocatorUtils::AssumeControl  (line 49, @0x000000000326add0, libserver.so)
// calls: CResourceAllocatorUtils::AssumeControl
void *__fastcall CResourceAllocatorUtils::AssumeControl(CResourceAllocatorUtils *const this, const void *pData)
{
  bool v2; // zf

  v2 = !this->m_bMustCopy;
  this->m_bAssumedControl = 1;
  if ( v2 )
    return pData;
  else
    return CResourceAllocatorUtils::AssumeControl(this, pData);
}


// CResourceAllocatorUtils::GetStreamingDataOffset  (line 66, @0x000000000326ac20, libserver.so)
size_t __fastcall CResourceAllocatorUtils::GetStreamingDataOffset(const CResourceAllocatorUtils *const this)
{
  return this->m_nStreamingDataOffset;
}


// CResourceAllocatorUtils::GetDataSize  (line 71, @0x000000000326ac30, libserver.so)
size_t __fastcall CResourceAllocatorUtils::GetDataSize(const CResourceAllocatorUtils *const this)
{
  return this->m_nSize;
}


// CResourceAllocatorUtils::GetResourceHandle  (line 76, @0x000000000326ac40, libserver.so)
ResourceHandle_t __fastcall CResourceAllocatorUtils::GetResourceHandle(const CResourceAllocatorUtils *const this)
{
  return this->m_hResource;
}


