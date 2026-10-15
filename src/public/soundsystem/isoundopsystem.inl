
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSosPackedFieldData::AddOrReplace  (line 75, @0x0000000001f83760, libserver.so)  // inlines: AddToTailGetPtr, Base, Element, EnsureCapacity, GetDataPtr, LeafCodeInfo_t, LowLevelByteSwap<unsigned int>, PeekPut, PutType<short unsigned int>, PutType<unsigned int>, PutTypeBin<unsigned char>, PutTypeBin<unsigned int>, PutUnsignedChar, PutUnsignedInt, PutUnsignedShort, PutVarInt, Remove, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, memmove, operator[]
// calls: CUtlBuffer::SeekPut, memmove, CUtlBuffer::Printf, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CUtlBuffer::Put, memcpy, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CSoundOpGameSystem::DoSetSoundEventParams, CSoundOpGameSystem::DoSetLibraryStackFields
// strings: "%hu", "../../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow"
void __fastcall CSosPackedFieldData::AddOrReplace(
        CSosPackedFieldData *const this,
        HSOSOPFIELDHASH hOpFieldHash,
        const CSosFieldData *const fieldData,
        __int16 nIndex)
{
  __int64 v4; // r8
  __int64 v5; // r9
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t m_nCount; // di
  unsigned __int64 m_nAllocated; // rax
  __int64 v10; // r12
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *m_pElements; // rdx
  __int64 v12; // r15
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *v13; // rdx
  int nOffset; // ecx
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t v15; // si
  int v16; // ecx
  size_t v17; // rdx
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *v18; // rdx
  uint16 nBytes; // di
  int v20; // r11d
  int v21; // esi
  __int64 v22; // rcx
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *v23; // rax
  unsigned __int64 v24; // rax
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *v25; // rdi
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t v26; // ax
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t v27; // r15
  unsigned __int64 v28; // rcx
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t v29; // ax
  int v30; // edx
  int v31; // r12d
  int v32; // eax
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *v33; // rdx
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *v34; // r15
  SOFieldDataType_t m_fieldDataType; // r14
  uint m_nAllocSize; // r14d
  unsigned __int8 v37; // r13
  unsigned int v38; // r14d
  unsigned __int8 v39; // r13
  uint v40; // edx
  const void *m_pData; // rsi
  int m_Put; // eax
  int v43; // esi
  unsigned __int8 *v44; // rdx
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *v45; // rax
  void *v46; // rcx
  unsigned __int64 v47; // rax
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // rsi
  unsigned int v53; // [rsp+Ch] [rbp-74h]
  int v54; // [rsp+10h] [rbp-70h]
  LeafCodeInfo_t v57; // [rsp+30h] [rbp-50h] BYREF

  m_nCount = this->m_entries.m_nCount;
  if ( m_nCount <= 0 )
  {
    v27 = m_nCount;
    goto LABEL_32;
  }
  m_nAllocated = this->m_entries.m_nAllocated;
  v10 = 0;
  while ( 1 )
  {
    v5 = v10;
    if ( m_nAllocated != 0 )
      break;
    v12 = v10;
    if ( *(8 * v10) == hOpFieldHash )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v10 )
    {
      v27 = m_nCount;
      goto LABEL_31;
    }
  }
  m_pElements = (&this->m_entries.m_nAllocAllocated + 1);
  if ( m_nAllocated > 3 )
    m_pElements = this->m_entries.m_pElements;
  v12 = v10;
  if ( m_pElements[v10].hFieldHash != hOpFieldHash )
    goto LABEL_6;
LABEL_9:
  if ( m_nAllocated != 0 )
  {
    if ( m_nAllocated <= 3 )
    {
      v13 = (&this->m_entries.m_nAllocAllocated + 1);
      nOffset = *(&this->m_entries.m_nAllocAllocated + v12 * 8 + 6);
    }
    else
    {
      v13 = this->m_entries.m_pElements;
      nOffset = v13[v12].nOffset;
    }
  }
  else
  {
    nOffset = *(v12 * 8 + 4);
    v13 = 0;
  }
  v15 = m_nCount;
  v16 = v13[v12].nBytes + nOffset;
  v17 = this->m_data.m_Put - v16;
  if ( v17 != 0 )
  {
    if ( m_nAllocated != 0 )
    {
      if ( m_nAllocated <= 3 )
        v45 = (&this->m_entries.m_nAllocAllocated + 1);
      else
        v45 = this->m_entries.m_pElements;
    }
    else
    {
      v45 = 0;
    }
    memmove(&this->m_data.m_Memory.m_pMemory[v45[v12].nOffset], &this->m_data.m_Memory.m_pMemory[v16], v17);
    v15 = this->m_entries.m_nCount;
    m_nAllocated = this->m_entries.m_nAllocated;
    LODWORD(v5) = v10;
  }
  if ( m_nAllocated != 0 )
  {
    if ( m_nAllocated <= 3 )
      v18 = (&this->m_entries.m_nAllocAllocated + 1);
    else
      v18 = this->m_entries.m_pElements;
  }
  else
  {
    v18 = 0;
  }
  nBytes = v18[v12].nBytes;
  v20 = v15;
  v21 = v5 + 1;
  v22 = v5 + 1;
  if ( v5 + 1 < v20 )
  {
    while ( 1 )
    {
      if ( m_nAllocated != 0 )
        v23 = m_nAllocated > 3 ? this->m_entries.m_pElements : (&this->m_entries.m_nAllocAllocated + 1);
      else
        v23 = 0;
      v23[v22].nOffset -= nBytes;
      ++v21;
      ++v22;
      if ( this->m_entries.m_nCount <= v21 )
        break;
      m_nAllocated = this->m_entries.m_nAllocated;
    }
  }
  v53 = v5;
  v54 = v5 + 1;
  CUtlBuffer::SeekPut(&this->m_data, CUtlBuffer::SeekType_t::SEEK_CURRENT, -nBytes);
  v24 = this->m_entries.m_nAllocated;
  v5 = v53;
  if ( v24 != 0 )
  {
    v25 = (&this->m_entries.m_nAllocAllocated + 1);
    if ( v24 > 3 )
      v25 = this->m_entries.m_pElements;
  }
  else
  {
    v25 = 0;
  }
  v26 = this->m_entries.m_nCount;
  if ( v54 < this->m_entries.m_nCount )
  {
    memmove(&v25[v12], &v25[v10 + 1], 8LL * (v26 - v53 - 1));
    v26 = this->m_entries.m_nCount;
  }
  v27 = v26 - 1;
  this->m_entries.m_nCount = v26 - 1;
LABEL_31:
  if ( v27 == 0x7FFF )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v57.m_szFile = "../../public/tier1/utlleanvector.h";
      v57.m_szFunction = "AddToTailGetPtr";
      v57.m_nLine = 557;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v57,
        "%s allocation count overflow",
        "AddToTailGetPtr");
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v51, v52, v49, v50) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
    JUMPOUT(0x1F83E89);
  }
LABEL_32:
  v28 = this->m_entries.m_nAllocated;
  v29 = v27;
  v30 = v27 + 1;
  if ( v30 > v28 )
  {
    LOWORD(v31) = v27 + 1;
    if ( v30 > 3 )
    {
      v31 = this->m_entries.m_nAllocated;
      while ( 1 )
      {
        v32 = v31;
        if ( v30 <= v31 )
          break;
        if ( v31 <= 16382 )
        {
          v43 = 2 * v31;
          v31 = 4;
          if ( 2 * v32 > 3 )
            v31 = v43;
        }
        else
        {
          v31 = 0x7FFF;
        }
      }
    }
    if ( v28 > 3 )
    {
      this->m_entries.m_pElements = (*(*g_pMemAlloc + 8LL))(
                                      g_pMemAlloc,
                                      this->m_entries.m_pElements,
                                      8LL * v31,
                                      v28,
                                      v4,
                                      v5);
      v29 = this->m_entries.m_nCount;
    }
    else
    {
      v29 = v27;
      if ( v31 > 3 )
      {
        v46 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v31);
        v47 = this->m_entries.m_nAllocated;
        if ( v47 != 0 )
        {
          v48 = (&this->m_entries.m_nAllocAllocated + 1);
          if ( v47 > 3 )
            v48 = this->m_entries.m_pElements;
        }
        else
        {
          v48 = 0;
        }
        this->m_entries.m_pElements = memcpy(v46, v48, 8LL * this->m_entries.m_nCount);
        v29 = this->m_entries.m_nCount;
      }
    }
    this->m_entries.m_nAllocated = v31;
    v28 = v31;
  }
  if ( v28 != 0 )
  {
    v33 = (&this->m_entries.m_nAllocAllocated + 1);
    if ( v28 > 3 )
      v33 = this->m_entries.m_pElements;
  }
  else
  {
    v33 = 0;
  }
  v34 = &v33[v27];
  this->m_entries.m_nCount = v29 + 1;
  v34->hFieldHash = hOpFieldHash;
  v34->nOffset = this->m_data.m_Put;
  if ( (this->m_data.m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(&this->m_data, "%u", hOpFieldHash);
  }
  else if ( CUtlBuffer::CheckPut(&this->m_data, 4) )
  {
    if ( (*&this->m_data.m_Byteswap & 1) != 0 )
    {
      m_Put = this->m_data.m_Put;
      v44 = &this->m_data.m_Memory.m_pMemory[m_Put - this->m_data.m_nOffset];
      if ( v44 != 0 )
      {
        LOBYTE(v57.m_szFile) = HIBYTE(hOpFieldHash);
        BYTE1(v57.m_szFile) = BYTE2(hOpFieldHash);
        BYTE2(v57.m_szFile) = BYTE1(hOpFieldHash);
        BYTE3(v57.m_szFile) = hOpFieldHash;
        *v44 = v57.m_szFile;
        m_Put = this->m_data.m_Put;
      }
    }
    else
    {
      *&this->m_data.m_Memory.m_pMemory[this->m_data.m_Put - this->m_data.m_nOffset] = hOpFieldHash;
      m_Put = this->m_data.m_Put;
    }
    this->m_data.m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(&this->m_data);
  }
  m_fieldDataType = fieldData->m_fieldDataType;
  if ( (this->m_data.m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(&this->m_data, "%hu", m_fieldDataType);
  }
  else if ( CUtlBuffer::CheckPut(&this->m_data, 1) )
  {
    this->m_data.m_Memory.m_pMemory[this->m_data.m_Put - this->m_data.m_nOffset] = m_fieldDataType;
    ++this->m_data.m_Put;
    CUtlBuffer::AddNullTermination(&this->m_data);
  }
  m_nAllocSize = fieldData->m_nAllocSize;
  while ( m_nAllocSize > 0x7F )
  {
    while ( 1 )
    {
      v37 = m_nAllocSize | 0x80;
      if ( (this->m_data.m_Flags & 1) == 0 )
        break;
      CUtlBuffer::Printf(&this->m_data, "%hu", m_nAllocSize | 0x80);
LABEL_51:
      m_nAllocSize >>= 7;
      if ( m_nAllocSize <= 0x7F )
        goto LABEL_55;
    }
    if ( !CUtlBuffer::CheckPut(&this->m_data, 1) )
      goto LABEL_51;
    m_nAllocSize >>= 7;
    this->m_data.m_Memory.m_pMemory[this->m_data.m_Put - this->m_data.m_nOffset] = v37;
    ++this->m_data.m_Put;
    CUtlBuffer::AddNullTermination(&this->m_data);
  }
LABEL_55:
  if ( (this->m_data.m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(&this->m_data, "%hu", m_nAllocSize);
  }
  else if ( CUtlBuffer::CheckPut(&this->m_data, 1) )
  {
    this->m_data.m_Memory.m_pMemory[this->m_data.m_Put - this->m_data.m_nOffset] = m_nAllocSize;
    ++this->m_data.m_Put;
    CUtlBuffer::AddNullTermination(&this->m_data);
  }
  v38 = nIndex;
  while ( v38 > 0x7F )
  {
    while ( 1 )
    {
      v39 = v38 | 0x80;
      if ( (this->m_data.m_Flags & 1) == 0 )
        break;
      CUtlBuffer::Printf(&this->m_data, "%hu", v38 | 0x80);
LABEL_60:
      v38 >>= 7;
      if ( v38 <= 0x7F )
        goto LABEL_64;
    }
    if ( !CUtlBuffer::CheckPut(&this->m_data, 1) )
      goto LABEL_60;
    v38 >>= 7;
    this->m_data.m_Memory.m_pMemory[this->m_data.m_Put - this->m_data.m_nOffset] = v39;
    ++this->m_data.m_Put;
    CUtlBuffer::AddNullTermination(&this->m_data);
  }
LABEL_64:
  if ( (this->m_data.m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(&this->m_data, "%hu", v38);
  }
  else if ( CUtlBuffer::CheckPut(&this->m_data, 1) )
  {
    this->m_data.m_Memory.m_pMemory[this->m_data.m_Put - this->m_data.m_nOffset] = v38;
    ++this->m_data.m_Put;
    CUtlBuffer::AddNullTermination(&this->m_data);
  }
  v40 = fieldData->m_nAllocSize;
  if ( v40 > 8 )
  {
    m_pData = fieldData->m_pData;
  }
  else
  {
    m_pData = 0;
    if ( v40 != 0 )
      m_pData = &fieldData->m_pData;
  }
  CUtlBuffer::Put(&this->m_data, m_pData, v40);
  v34->nBytes = this->m_data.m_Put - v34->nOffset;
}


// CSosEventInfo_t::~CSosEventInfo_t  (line 349, @0x0000000001f71aa0, libserver.so)
void __fastcall CSosEventInfo_t::~CSosEventInfo_t(CSosEventInfo_t *const this)
{
  this->_vptr_CSosEventInfo_t = off_3FCACD0;
}


// CSosEventInfo_t::~CSosEventInfo_t  (line 349, @0x0000000001f73bd0, libserver.so)  // inlines: ~CSosEventInfo_t
// calls: operator delete
void __fastcall CSosEventInfo_t::~CSosEventInfo_t(CSosEventInfo_t *const this)
{
  this->_vptr_CSosEventInfo_t = off_3FCACD0;
  operator delete(this);
}


// CSosEventInfoWithFieldData_t::~CSosEventInfoWithFieldData_t  (line 353, @0x0000000001f844a0, libserver.so)  // inlines: Base, Purge, RemoveAll, ~CSosEventInfo_t, ~CSosPackedFieldData, ~CUtlBuffer, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory
// calls: CUtlMemory<unsigned char, int>::Purge
void __fastcall CSosEventInfoWithFieldData_t::~CSosEventInfoWithFieldData_t(CSosEventInfoWithFieldData_t *const this)
{
  CUtlBuffer *p_m_data; // rdi
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t m_nAllocated; // ax
  void (__fastcall *v4)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *); // rdx

  p_m_data = &this->m_fieldData.m_data;
  p_m_data[-1].m_Memory.m_pMemory = off_3FCACF0;
  CUtlMemory<unsigned char,int>::Purge(&p_m_data->m_Memory);
  m_nAllocated = this->m_fieldData.m_entries.m_nAllocated;
  this->m_fieldData.m_entries.m_nCount = 0;
  if ( m_nAllocated > 3 )
  {
    v4 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v4(g_pMemAlloc, this->m_fieldData.m_entries.m_pElements);
    else
      v4(g_pMemAlloc, 0);
  }
  this->m_fieldData.m_entries.m_nAllocated = 3;
  this->_vptr_CSosEventInfo_t = off_3FCACD0;
}


// CSosEventInfoWithFieldData_t::~CSosEventInfoWithFieldData_t  (line 353, @0x0000000001f84530, libserver.so)  // inlines: Base, Purge, RemoveAll, ~CSosEventInfoWithFieldData_t, ~CSosEventInfo_t, ~CSosPackedFieldData, ~CUtlBuffer, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory
// calls: CUtlMemory<unsigned char, int>::Purge, operator delete
void __fastcall CSosEventInfoWithFieldData_t::~CSosEventInfoWithFieldData_t(CSosEventInfoWithFieldData_t *const this)
{
  CUtlBuffer *p_m_data; // rdi
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t m_nAllocated; // ax
  void (__fastcall *v4)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *); // rdx

  p_m_data = &this->m_fieldData.m_data;
  p_m_data[-1].m_Memory.m_pMemory = off_3FCACF0;
  CUtlMemory<unsigned char,int>::Purge(&p_m_data->m_Memory);
  this->m_fieldData.m_entries.m_nCount = 0;
  m_nAllocated = this->m_fieldData.m_entries.m_nAllocated;
  if ( m_nAllocated > 3 )
  {
    v4 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v4(g_pMemAlloc, this->m_fieldData.m_entries.m_pElements);
    else
      v4(g_pMemAlloc, 0);
  }
  this->m_fieldData.m_entries.m_nAllocated = 3;
  this->_vptr_CSosEventInfo_t = off_3FCACD0;
  operator delete(this);
}


// CSosStartSoundEventInfo_t::~CSosStartSoundEventInfo_t  (line 361, @0x0000000001f845c0, libserver.so)  // inlines: Base, Purge, RemoveAll, ~CSosEventInfoWithFieldData_t, ~CSosEventInfo_t, ~CSosPackedFieldData, ~CUtlBuffer, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory
// calls: CUtlMemory<unsigned char, int>::Purge
void __fastcall CSosStartSoundEventInfo_t::~CSosStartSoundEventInfo_t(CSosStartSoundEventInfo_t *const this)
{
  CUtlBuffer *p_m_data; // rdi
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t m_nAllocated; // ax
  void (__fastcall *v4)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *); // rdx

  p_m_data = &this->m_fieldData.m_data;
  p_m_data[-1].m_Memory.m_pMemory = off_3FCACF0;
  CUtlMemory<unsigned char,int>::Purge(&p_m_data->m_Memory);
  this->m_fieldData.m_entries.m_nCount = 0;
  m_nAllocated = this->m_fieldData.m_entries.m_nAllocated;
  if ( m_nAllocated > 3 )
  {
    v4 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v4(g_pMemAlloc, this->m_fieldData.m_entries.m_pElements);
    else
      v4(g_pMemAlloc, 0);
  }
  this->m_fieldData.m_entries.m_nAllocated = 3;
  this->_vptr_CSosEventInfo_t = off_3FCACD0;
}


// CSosStartSoundEventInfo_t::~CSosStartSoundEventInfo_t  (line 361, @0x0000000001f84ea0, libserver.so)  // inlines: Base, Purge, RemoveAll, ~CSosEventInfoWithFieldData_t, ~CSosEventInfo_t, ~CSosPackedFieldData, ~CSosStartSoundEventInfo_t, ~CUtlBuffer, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory
// calls: CUtlMemory<unsigned char, int>::Purge, operator delete
void __fastcall CSosStartSoundEventInfo_t::~CSosStartSoundEventInfo_t(CSosStartSoundEventInfo_t *const this)
{
  CUtlBuffer *p_m_data; // rdi
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t m_nAllocated; // ax
  void (__fastcall *v4)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *); // rdx

  p_m_data = &this->m_fieldData.m_data;
  p_m_data[-1].m_Memory.m_pMemory = off_3FCACF0;
  CUtlMemory<unsigned char,int>::Purge(&p_m_data->m_Memory);
  this->m_fieldData.m_entries.m_nCount = 0;
  m_nAllocated = this->m_fieldData.m_entries.m_nAllocated;
  if ( m_nAllocated > 3 )
  {
    v4 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v4(g_pMemAlloc, this->m_fieldData.m_entries.m_pElements);
    else
      v4(g_pMemAlloc, 0);
  }
  this->m_fieldData.m_entries.m_nAllocated = 3;
  this->_vptr_CSosEventInfo_t = off_3FCACD0;
  operator delete(this);
}


// CSosStopSoundEventInfo_t::~CSosStopSoundEventInfo_t  (line 401, @0x0000000001f72340, libserver.so)  // inlines: ~CSosEventInfo_t
void __fastcall CSosStopSoundEventInfo_t::~CSosStopSoundEventInfo_t(CSosStopSoundEventInfo_t *const this)
{
  this->_vptr_CSosEventInfo_t = off_3FCACD0;
}


// CSosStopSoundEventInfo_t::~CSosStopSoundEventInfo_t  (line 401, @0x0000000001f73c50, libserver.so)  // inlines: ~CSosEventInfo_t, ~CSosStopSoundEventInfo_t
// calls: operator delete
void __fastcall CSosStopSoundEventInfo_t::~CSosStopSoundEventInfo_t(CSosStopSoundEventInfo_t *const this)
{
  this->_vptr_CSosEventInfo_t = off_3FCACD0;
  operator delete(this);
}


// CSosStopSoundEventHashInfo_t::~CSosStopSoundEventHashInfo_t  (line 415, @0x0000000001f72350, libserver.so)  // inlines: ~CSosEventInfo_t
void __fastcall CSosStopSoundEventHashInfo_t::~CSosStopSoundEventHashInfo_t(CSosStopSoundEventHashInfo_t *const this)
{
  this->_vptr_CSosEventInfo_t = off_3FCACD0;
}


// CSosStopSoundEventHashInfo_t::~CSosStopSoundEventHashInfo_t  (line 415, @0x0000000001f73c70, libserver.so)  // inlines: ~CSosEventInfo_t, ~CSosStopSoundEventHashInfo_t
// calls: operator delete
void __fastcall CSosStopSoundEventHashInfo_t::~CSosStopSoundEventHashInfo_t(CSosStopSoundEventHashInfo_t *const this)
{
  this->_vptr_CSosEventInfo_t = off_3FCACD0;
  operator delete(this);
}


// CSosSetSoundEventFieldsInfo_t::~CSosSetSoundEventFieldsInfo_t  (line 430, @0x0000000001f84640, libserver.so)  // inlines: Base, Purge, RemoveAll, ~CSosEventInfoWithFieldData_t, ~CSosEventInfo_t, ~CSosPackedFieldData, ~CUtlBuffer, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory
// calls: CUtlMemory<unsigned char, int>::Purge
void __fastcall CSosSetSoundEventFieldsInfo_t::~CSosSetSoundEventFieldsInfo_t(
        CSosSetSoundEventFieldsInfo_t *const this)
{
  CUtlBuffer *p_m_data; // rdi
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t m_nAllocated; // ax
  void (__fastcall *v4)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *); // rdx

  p_m_data = &this->m_fieldData.m_data;
  p_m_data[-1].m_Memory.m_pMemory = off_3FCACF0;
  CUtlMemory<unsigned char,int>::Purge(&p_m_data->m_Memory);
  this->m_fieldData.m_entries.m_nCount = 0;
  m_nAllocated = this->m_fieldData.m_entries.m_nAllocated;
  if ( m_nAllocated > 3 )
  {
    v4 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v4(g_pMemAlloc, this->m_fieldData.m_entries.m_pElements);
    else
      v4(g_pMemAlloc, 0);
  }
  this->m_fieldData.m_entries.m_nAllocated = 3;
  this->_vptr_CSosEventInfo_t = off_3FCACD0;
}


// CSosSetSoundEventFieldsInfo_t::~CSosSetSoundEventFieldsInfo_t  (line 430, @0x0000000001f84a50, libserver.so)  // inlines: Base, Purge, RemoveAll, ~CSosEventInfoWithFieldData_t, ~CSosEventInfo_t, ~CSosPackedFieldData, ~CSosSetSoundEventFieldsInfo_t, ~CUtlBuffer, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory
// calls: CUtlMemory<unsigned char, int>::Purge, operator delete
void __fastcall CSosSetSoundEventFieldsInfo_t::~CSosSetSoundEventFieldsInfo_t(
        CSosSetSoundEventFieldsInfo_t *const this)
{
  CUtlBuffer *p_m_data; // rdi
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t m_nAllocated; // ax
  void (__fastcall *v4)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *); // rdx

  p_m_data = &this->m_fieldData.m_data;
  p_m_data[-1].m_Memory.m_pMemory = off_3FCACF0;
  CUtlMemory<unsigned char,int>::Purge(&p_m_data->m_Memory);
  m_nAllocated = this->m_fieldData.m_entries.m_nAllocated;
  this->m_fieldData.m_entries.m_nCount = 0;
  if ( m_nAllocated > 3 )
  {
    v4 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v4(g_pMemAlloc, this->m_fieldData.m_entries.m_pElements);
    else
      v4(g_pMemAlloc, 0);
  }
  this->m_fieldData.m_entries.m_nAllocated = 3;
  this->_vptr_CSosEventInfo_t = off_3FCACD0;
  operator delete(this);
}


// CSosSetLibraryStackFieldsInfo_t::~CSosSetLibraryStackFieldsInfo_t  (line 444, @0x0000000001f846c0, libserver.so)  // inlines: Base, Purge, RemoveAll, ~CSosEventInfoWithFieldData_t, ~CSosEventInfo_t, ~CSosPackedFieldData, ~CUtlBuffer, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory
// calls: CUtlMemory<unsigned char, int>::Purge
void __fastcall CSosSetLibraryStackFieldsInfo_t::~CSosSetLibraryStackFieldsInfo_t(
        CSosSetLibraryStackFieldsInfo_t *const this)
{
  CUtlBuffer *p_m_data; // rdi
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t m_nAllocated; // ax
  void (__fastcall *v4)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *); // rdx

  p_m_data = &this->m_fieldData.m_data;
  p_m_data[-1].m_Memory.m_pMemory = off_3FCACF0;
  CUtlMemory<unsigned char,int>::Purge(&p_m_data->m_Memory);
  m_nAllocated = this->m_fieldData.m_entries.m_nAllocated;
  this->m_fieldData.m_entries.m_nCount = 0;
  if ( m_nAllocated > 3 )
  {
    v4 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v4(g_pMemAlloc, this->m_fieldData.m_entries.m_pElements);
    else
      v4(g_pMemAlloc, 0);
  }
  this->m_fieldData.m_entries.m_nAllocated = 3;
  this->_vptr_CSosEventInfo_t = off_3FCACD0;
}


// CSosSetLibraryStackFieldsInfo_t::~CSosSetLibraryStackFieldsInfo_t  (line 444, @0x0000000001f849c0, libserver.so)  // inlines: Base, Purge, RemoveAll, ~CSosEventInfoWithFieldData_t, ~CSosEventInfo_t, ~CSosPackedFieldData, ~CSosSetLibraryStackFieldsInfo_t, ~CUtlBuffer, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory
// calls: CUtlMemory<unsigned char, int>::Purge, operator delete
void __fastcall CSosSetLibraryStackFieldsInfo_t::~CSosSetLibraryStackFieldsInfo_t(
        CSosSetLibraryStackFieldsInfo_t *const this)
{
  CUtlBuffer *p_m_data; // rdi
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t m_nAllocated; // ax
  void (__fastcall *v4)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *); // rdx

  p_m_data = &this->m_fieldData.m_data;
  p_m_data[-1].m_Memory.m_pMemory = off_3FCACF0;
  CUtlMemory<unsigned char,int>::Purge(&p_m_data->m_Memory);
  m_nAllocated = this->m_fieldData.m_entries.m_nAllocated;
  this->m_fieldData.m_entries.m_nCount = 0;
  if ( m_nAllocated > 3 )
  {
    v4 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v4(g_pMemAlloc, this->m_fieldData.m_entries.m_pElements);
    else
      v4(g_pMemAlloc, 0);
  }
  this->m_fieldData.m_entries.m_nAllocated = 3;
  this->_vptr_CSosEventInfo_t = off_3FCACD0;
  operator delete(this);
}


// CSosMessageQueue<SoundEventGuid_t>::RemoveAndDeleteAll  (line 615, @0x0000000001f92d60, libserver.so)  // inlines: Element, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove
// callers: CSoundOpGameSystem::DoStartSoundEvent, CSoundOpGameSystem::DoStopSoundEvent
void __fastcall CSosMessageQueue<SoundEventGuid_t>::RemoveAndDeleteAll(
        CSosMessageQueue<SoundEventGuid_t> *const this,
        SoundEventGuid_t key)
{
  int v4; // ebx
  __int64 v5; // r12
  CSosMessageQueue<SoundEventGuid_t>::Entry_t *v6; // rax
  CSosEventInfo_t *pMessage; // rdi
  int m_Size; // eax

  v4 = this->m_messages.m_Size - 1;
  v5 = v4;
  if ( v4 >= 0 )
  {
    do
    {
      while ( 1 )
      {
        v6 = &this->m_messages.m_Memory.m_pMemory[v5];
        if ( v6->key.m_Data == key.m_Data )
          break;
        --v4;
        --v5;
        if ( v4 == -1 )
          return;
      }
      pMessage = v6->pMessage;
      if ( pMessage != 0 )
        (*(pMessage->_vptr_CSosEventInfo_t + 1))(pMessage);
      m_Size = this->m_messages.m_Size;
      if ( this->m_messages.m_Size - v4 - 1 > 0 )
      {
        memmove(
          &this->m_messages.m_Memory.m_pMemory[v5],
          &this->m_messages.m_Memory.m_pMemory[v5 + 1],
          16LL * (this->m_messages.m_Size - v4 - 1));
        m_Size = this->m_messages.m_Size;
      }
      --v4;
      --v5;
      this->m_messages.m_Size = m_Size - 1;
    }
    while ( v4 != -1 );
  }
}


// CSosMessageQueue<unsigned int>::RemoveAndDeleteAll  (line 615, @0x0000000001f92e00, libserver.so)  // inlines: Element, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove
// callers: CSoundOpGameSystem::DoStopSoundEventHash
void __fastcall CSosMessageQueue<unsigned int>::RemoveAndDeleteAll(
        CSosMessageQueue<unsigned int> *const this,
        unsigned int key)
{
  int v4; // ebx
  __int64 v5; // r12
  CSosMessageQueue<unsigned int>::Entry_t *v6; // rax
  CSosEventInfo_t *pMessage; // rdi
  int m_Size; // eax

  v4 = this->m_messages.m_Size - 1;
  v5 = v4;
  if ( v4 >= 0 )
  {
    do
    {
      while ( 1 )
      {
        v6 = &this->m_messages.m_Memory.m_pMemory[v5];
        if ( v6->key == key )
          break;
        --v4;
        --v5;
        if ( v4 == -1 )
          return;
      }
      pMessage = v6->pMessage;
      if ( pMessage != 0 )
        (*(pMessage->_vptr_CSosEventInfo_t + 1))(pMessage);
      m_Size = this->m_messages.m_Size;
      if ( this->m_messages.m_Size - v4 - 1 > 0 )
      {
        memmove(
          &this->m_messages.m_Memory.m_pMemory[v5],
          &this->m_messages.m_Memory.m_pMemory[v5 + 1],
          16LL * (this->m_messages.m_Size - v4 - 1));
        m_Size = this->m_messages.m_Size;
      }
      --v4;
      --v5;
      this->m_messages.m_Size = m_Size - 1;
    }
    while ( v4 != -1 );
  }
}


// CSosFieldDataFloat::CSosFieldDataFloat  (line 929, @0x0000000001f83e90, libserver.so)  // inlines: AllocateData, CSosFieldData, CopyData, GetDataPtr, Init, V_memcpy, memcpy, ~CSosFieldData
// calls: CSosFieldData::ClearData, _Unwind_Resume
// callers: CPhysicsGameSystem::PhysFrictionSound, CBasePlayer::PlayStepSound, CBreakable::Die, CFuncTrackTrain::SoundUpdate, CFuncTrain::Next
void __fastcall CSosFieldDataFloat::CSosFieldDataFloat(CSosFieldDataFloat *const this, __m128i a2, float flValue)
{
  int v3; // r12d
  uint m_nAllocSize; // eax
  _DWORD *p_m_pData; // rbx

  v3 = _mm_cvtsi128_si32(a2);
  this->m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  this->m_nAllocSize = 0;
  this->m_pData = 0;
  this->m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8, *a2.m128i_i64, flValue);
  m_nAllocSize = this->m_nAllocSize;
  this->m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
  if ( m_nAllocSize <= 3 )
  {
    this->m_nAllocSize = 4;
    goto LABEL_3;
  }
  if ( m_nAllocSize <= 8 )
  {
LABEL_3:
    p_m_pData = &this->m_pData;
LABEL_4:
    *p_m_pData = v3;
    return;
  }
  p_m_pData = this->m_pData;
  if ( p_m_pData != 0 )
    goto LABEL_4;
}


