
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSosCopyRecipientFilter::~CSosCopyRecipientFilter  (line 75, @0x0000000001f788c0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CSosCopyRecipientFilter::~CSosCopyRecipientFilter(CSosCopyRecipientFilter *const this)
{
  bool v2; // zf
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IRecipientFilter = &off_3FCCE90;
  this->m_Recipients.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_Recipients.m_Memory,
        CUtlMemory<CEntityIndex,int>::Purge(&this->m_Recipients.m_Memory),
        (this->m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    this->_vptr_IRecipientFilter = &off_3FCAC70;
  }
  else
  {
    CUtlMemory<CEntityIndex,int>::Purge(p_m_Memory);
    this->_vptr_IRecipientFilter = &off_3FCAC70;
  }
}


// CSosCopyRecipientFilter::~CSosCopyRecipientFilter  (line 75, @0x0000000001f78a90, libserver.so)  // inlines: Purge, RemoveAll, ~CSosCopyRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: operator delete, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CSosCopyRecipientFilter::~CSosCopyRecipientFilter(CSosCopyRecipientFilter *const this)
{
  bool v2; // zf
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IRecipientFilter = &off_3FCCE90;
  this->m_Recipients.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_Recipients.m_Memory;
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_Recipients.m_Memory);
    if ( (this->m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(p_m_Memory);
  }
  this->_vptr_IRecipientFilter = &off_3FCAC70;
  operator delete(this);
}


// CSosCopyRecipientFilter::CSosCopyRecipientFilter  (line 79, @0x0000000001f84150, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CSoundOpGameSystem::DoSetSoundEventParams
void __fastcall CSosCopyRecipientFilter::CSosCopyRecipientFilter(CSosCopyRecipientFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_3FCCE90;
  this->m_Flags = 0;
  this->m_Recipients.m_Size = 0;
  this->m_Recipients.m_Memory.m_pMemory = 0;
  this->m_Recipients.m_Memory.m_nAllocationCount = 0;
  this->m_Recipients.m_Memory.m_nGrowSize = 0;
}


// CSosCopyRecipientFilter::Init  (line 81, @0x0000000001f96260, libserver.so)  // inlines: AddToTail, CopyConstruct<CEntityIndex>, Element, GetFlagsForFilter, GrowMemory, operator[]
// calls: CUtlMemory<CEntityIndex, int>::Grow
// callers: CSoundOpGameSystem::DoSetLibraryStackFields
void __fastcall CSosCopyRecipientFilter::Init(CSosCopyRecipientFilter *const this, const IRecipientFilter *const pSrc)
{
  int v4; // r12d
  int i; // r12d
  int v6; // eax
  __int64 m_Size; // r15
  int v8; // edx
  CEntityIndex *v9; // rdx
  int v10; // [rsp+Ch] [rbp-34h]

  v4 = 2 * ((*(pSrc->_vptr_IRecipientFilter + 3))(pSrc) == 1) + 1;
  if ( (*(pSrc->_vptr_IRecipientFilter + 4))(pSrc) != 0 )
    v4 |= 4u;
  this->m_Flags = v4;
  for ( i = 0; i < (*(pSrc->_vptr_IRecipientFilter + 5))(pSrc); ++i )
  {
    v6 = (*(pSrc->_vptr_IRecipientFilter + 6))(pSrc, i);
    if ( v6 >= 0 )
    {
      m_Size = this->m_Recipients.m_Size;
      v8 = this->m_Recipients.m_Size;
      if ( m_Size == this->m_Recipients.m_Memory.m_nAllocationCount )
      {
        v10 = v6;
        CUtlMemory<CEntityIndex,int>::Grow(&this->m_Recipients.m_Memory, 1);
        v8 = this->m_Recipients.m_Size;
        v6 = v10;
      }
      this->m_Recipients.m_Size = v8 + 1;
      v9 = &this->m_Recipients.m_Memory.m_pMemory[m_Size];
      if ( v9 != 0 )
        v9->m_Data = v6;
    }
  }
}


// CSosCopyRecipientFilter::GetNetworkBufType  (line 146, @0x0000000001f720e0, libserver.so)
NetChannelBufType_t __fastcall CSosCopyRecipientFilter::GetNetworkBufType(const CSosCopyRecipientFilter *const this)
{
  return (this->m_Flags & 2) != 0;
}


// CSosCopyRecipientFilter::GetRecipientCount  (line 162, @0x0000000001f720f0, libserver.so)
int __fastcall CSosCopyRecipientFilter::GetRecipientCount(const CSosCopyRecipientFilter *const this)
{
  return this->m_Recipients.m_Size;
}


// CSosCopyRecipientFilter::GetRecipientIndex  (line 167, @0x0000000001f77350, libserver.so)  // inlines: operator[]
CEntityIndex __fastcall CSosCopyRecipientFilter::GetRecipientIndex(const CSosCopyRecipientFilter *const this, int slot)
{
  return this->m_Recipients.m_Memory.m_pMemory[slot].m_Data;
}


// CSosCopyRecipientFilter::IsInitMessage  (line 172, @0x0000000001f72100, libserver.so)
bool __fastcall CSosCopyRecipientFilter::IsInitMessage(const CSosCopyRecipientFilter *const this)
{
  return (this->m_Flags & 4) != 0;
}


// CSosCopyRecipientFilter::AddRecipient  (line 177, @0x0000000001f961b0, libserver.so)  // inlines: AddToTail, CopyConstruct<CEntityIndex>, Element, Find, GrowMemory, entindex, operator[]
// calls: CEntityInstance::GetEntityIndex, CUtlMemory<CEntityIndex, int>::Grow
bool __fastcall CSosCopyRecipientFilter::AddRecipient(CSosCopyRecipientFilter *const this, CBasePlayer *player)
{
  CEntityIndex v3; // ebx
  bool result; // al
  __int64 m_Size; // r12
  CEntityIndex *m_pMemory; // rcx
  int v7; // edx
  int v8; // eax
  CEntityIndex *v9; // rax

  v3.m_Data = CEntityInstance::GetEntityIndex(player).m_Data;
  result = 0;
  if ( v3.m_Data >= 0 )
  {
    m_Size = this->m_Recipients.m_Size;
    if ( m_Size > 0 )
    {
      m_pMemory = this->m_Recipients.m_Memory.m_pMemory;
      if ( v3.m_Data == m_pMemory->m_Data )
        return result;
      v7 = 0;
      while ( ++v7 != m_Size )
      {
        ++m_pMemory;
        if ( v3.m_Data == m_pMemory->m_Data )
        {
          if ( v7 == -1 )
            break;
          return 0;
        }
      }
    }
    v8 = this->m_Recipients.m_Size;
    if ( m_Size == this->m_Recipients.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CEntityIndex,int>::Grow(&this->m_Recipients.m_Memory, 1);
      v8 = this->m_Recipients.m_Size;
    }
    this->m_Recipients.m_Size = v8 + 1;
    v9 = &this->m_Recipients.m_Memory.m_pMemory[m_Size];
    if ( v9 != 0 )
      v9->m_Data = v3.m_Data;
    return 1;
  }
  return result;
}


// CMsgSosStartSoundEvent_t::~CMsgSosStartSoundEvent_t  (line 213, @0x0000000001f747b0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgSosStartSoundEvent::~CMsgSosStartSoundEvent
void __fastcall CMsgSosStartSoundEvent_t::~CMsgSosStartSoundEvent_t(CMsgSosStartSoundEvent_t *const this)
{
  *this = &off_3FCCF70;
  CMsgSosStartSoundEvent::~CMsgSosStartSoundEvent(this);
}


// CMsgSosStartSoundEvent_t::~CMsgSosStartSoundEvent_t  (line 213, @0x0000000001f747d0, libserver.so)  // inlines: ~CMsgSosStartSoundEvent_t, ~CNetMessagePB
// calls: CMsgSosStartSoundEvent::~CMsgSosStartSoundEvent, operator delete
void __fastcall CMsgSosStartSoundEvent_t::~CMsgSosStartSoundEvent_t(CMsgSosStartSoundEvent_t *const this)
{
  *this = &off_3FCCF70;
  CMsgSosStartSoundEvent::~CMsgSosStartSoundEvent(this);
  operator delete(this);
}


// CMsgSosStopSoundEvent_t::~CMsgSosStopSoundEvent_t  (line 214, @0x0000000001f74710, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgSosStopSoundEvent::~CMsgSosStopSoundEvent
void __fastcall CMsgSosStopSoundEvent_t::~CMsgSosStopSoundEvent_t(CMsgSosStopSoundEvent_t *const this)
{
  *this = &off_3FCD170;
  CMsgSosStopSoundEvent::~CMsgSosStopSoundEvent(this);
}


// CMsgSosStopSoundEvent_t::~CMsgSosStopSoundEvent_t  (line 214, @0x0000000001f74730, libserver.so)  // inlines: ~CMsgSosStopSoundEvent_t, ~CNetMessagePB
// calls: CMsgSosStopSoundEvent::~CMsgSosStopSoundEvent, operator delete
void __fastcall CMsgSosStopSoundEvent_t::~CMsgSosStopSoundEvent_t(CMsgSosStopSoundEvent_t *const this)
{
  *this = &off_3FCD170;
  CMsgSosStopSoundEvent::~CMsgSosStopSoundEvent(this);
  operator delete(this);
}


// CMsgSosStopSoundEventHash_t::~CMsgSosStopSoundEventHash_t  (line 215, @0x0000000001f748f0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgSosStopSoundEventHash::~CMsgSosStopSoundEventHash
void __fastcall CMsgSosStopSoundEventHash_t::~CMsgSosStopSoundEventHash_t(CMsgSosStopSoundEventHash_t *const this)
{
  *this = &off_3FCD370;
  CMsgSosStopSoundEventHash::~CMsgSosStopSoundEventHash(this);
}


// CMsgSosStopSoundEventHash_t::~CMsgSosStopSoundEventHash_t  (line 215, @0x0000000001f74910, libserver.so)  // inlines: ~CMsgSosStopSoundEventHash_t, ~CNetMessagePB
// calls: CMsgSosStopSoundEventHash::~CMsgSosStopSoundEventHash, operator delete
void __fastcall CMsgSosStopSoundEventHash_t::~CMsgSosStopSoundEventHash_t(CMsgSosStopSoundEventHash_t *const this)
{
  *this = &off_3FCD370;
  CMsgSosStopSoundEventHash::~CMsgSosStopSoundEventHash(this);
  operator delete(this);
}


// CMsgSosSetSoundEventParams_t::~CMsgSosSetSoundEventParams_t  (line 216, @0x0000000001f74850, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgSosSetSoundEventParams::~CMsgSosSetSoundEventParams
void __fastcall CMsgSosSetSoundEventParams_t::~CMsgSosSetSoundEventParams_t(CMsgSosSetSoundEventParams_t *const this)
{
  *this = &off_3FCD570;
  CMsgSosSetSoundEventParams::~CMsgSosSetSoundEventParams(this);
}


// CMsgSosSetSoundEventParams_t::~CMsgSosSetSoundEventParams_t  (line 216, @0x0000000001f74870, libserver.so)  // inlines: ~CMsgSosSetSoundEventParams_t, ~CNetMessagePB
// calls: CMsgSosSetSoundEventParams::~CMsgSosSetSoundEventParams, operator delete
void __fastcall CMsgSosSetSoundEventParams_t::~CMsgSosSetSoundEventParams_t(CMsgSosSetSoundEventParams_t *const this)
{
  *this = &off_3FCD570;
  CMsgSosSetSoundEventParams::~CMsgSosSetSoundEventParams(this);
  operator delete(this);
}


// CMsgSosSetLibraryStackFields_t::~CMsgSosSetLibraryStackFields_t  (line 217, @0x0000000001f74670, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgSosSetLibraryStackFields::~CMsgSosSetLibraryStackFields
void __fastcall CMsgSosSetLibraryStackFields_t::~CMsgSosSetLibraryStackFields_t(
        CMsgSosSetLibraryStackFields_t *const this)
{
  *this = &off_3FCD770;
  CMsgSosSetLibraryStackFields::~CMsgSosSetLibraryStackFields(this);
}


// CMsgSosSetLibraryStackFields_t::~CMsgSosSetLibraryStackFields_t  (line 217, @0x0000000001f74690, libserver.so)  // inlines: ~CMsgSosSetLibraryStackFields_t, ~CNetMessagePB
// calls: CMsgSosSetLibraryStackFields::~CMsgSosSetLibraryStackFields, operator delete
void __fastcall CMsgSosSetLibraryStackFields_t::~CMsgSosSetLibraryStackFields_t(
        CMsgSosSetLibraryStackFields_t *const this)
{
  *this = &off_3FCD770;
  CMsgSosSetLibraryStackFields::~CMsgSosSetLibraryStackFields(this);
  operator delete(this);
}


// CSosFilterStartSoundEventInfo_t::~CSosFilterStartSoundEventInfo_t  (line 219, @0x0000000001f84f30, libserver.so)  // inlines: Base, Purge, RemoveAll, ~CSosCopyRecipientFilter, ~CSosEventInfoWithFieldData_t, ~CSosEventInfo_t, ~CSosFilterInfo_t, ~CSosPackedFieldData, ~CSosStartSoundEventInfo_t, ~CUtlBuffer, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlMemory<unsigned char, int>::Purge, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CSosFilterStartSoundEventInfo_t::~CSosFilterStartSoundEventInfo_t(
        CSosFilterStartSoundEventInfo_t *const this)
{
  bool v2; // zf
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t m_nAllocated; // ax
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int> >::CAllocator *p_m_Memory; // r12
  void (__fastcall *v5)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *); // rdx

  v2 = (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CSosEventInfo_t = off_3FCD8F0;  // vptr: CSosFilterStartSoundEventInfo_t
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCCE90;
  this->m_recipientFilter.m_Recipients.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_recipientFilter.m_Recipients.m_Memory;
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_recipientFilter.m_Recipients.m_Memory);
    if ( (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(p_m_Memory);
  }
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCAC70;
  this->_vptr_CSosEventInfo_t = off_3FCACF0;  // vptr: CSosEventInfoWithFieldData_t
  CUtlMemory<unsigned char,int>::Purge(&this->m_fieldData.m_data.m_Memory);
  m_nAllocated = this->m_fieldData.m_entries.m_nAllocated;
  this->m_fieldData.m_entries.m_nCount = 0;
  if ( m_nAllocated > 3 )
  {
    v5 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v5(g_pMemAlloc, this->m_fieldData.m_entries.m_pElements);
    else
      v5(g_pMemAlloc, 0);
  }
  this->m_fieldData.m_entries.m_nAllocated = 3;
  this->_vptr_CSosEventInfo_t = off_3FCACD0;  // vptr: CSosEventInfo_t
}


// CSosFilterStartSoundEventInfo_t::~CSosFilterStartSoundEventInfo_t  (line 219, @0x0000000001f85010, libserver.so)  // inlines: Base, Purge, RemoveAll, ~CSosCopyRecipientFilter, ~CSosEventInfoWithFieldData_t, ~CSosEventInfo_t, ~CSosFilterInfo_t, ~CSosFilterStartSoundEventInfo_t, ~CSosPackedFieldData, ~CSosStartSoundEventInfo_t, ~CUtlBuffer, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlMemory<unsigned char, int>::Purge, operator delete, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CSosFilterStartSoundEventInfo_t::~CSosFilterStartSoundEventInfo_t(
        CSosFilterStartSoundEventInfo_t *const this)
{
  bool v2; // zf
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t m_nAllocated; // ax
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int> >::CAllocator *p_m_Memory; // r12
  void (__fastcall *v5)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *); // rdx

  v2 = (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CSosEventInfo_t = off_3FCD8F0;  // vptr: CSosFilterStartSoundEventInfo_t
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCCE90;
  this->m_recipientFilter.m_Recipients.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_recipientFilter.m_Recipients.m_Memory;
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_recipientFilter.m_Recipients.m_Memory);
    if ( (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(p_m_Memory);
  }
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCAC70;
  this->_vptr_CSosEventInfo_t = off_3FCACF0;  // vptr: CSosEventInfoWithFieldData_t
  CUtlMemory<unsigned char,int>::Purge(&this->m_fieldData.m_data.m_Memory);
  m_nAllocated = this->m_fieldData.m_entries.m_nAllocated;
  this->m_fieldData.m_entries.m_nCount = 0;
  if ( m_nAllocated > 3 )
  {
    v5 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v5(g_pMemAlloc, this->m_fieldData.m_entries.m_pElements);
    else
      v5(g_pMemAlloc, 0);
  }
  this->m_fieldData.m_entries.m_nAllocated = 3;
  this->_vptr_CSosEventInfo_t = off_3FCACD0;  // vptr: CSosEventInfo_t
  operator delete(this);
}


// CSosFilterStopSoundEventInfo_t::~CSosFilterStopSoundEventInfo_t  (line 220, @0x0000000001f789a0, libserver.so)  // inlines: Purge, RemoveAll, ~CSosCopyRecipientFilter, ~CSosEventInfo_t, ~CSosFilterInfo_t, ~CSosStopSoundEventInfo_t, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CSosFilterStopSoundEventInfo_t::~CSosFilterStopSoundEventInfo_t(
        CSosFilterStopSoundEventInfo_t *const this)
{
  bool v2; // zf
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CSosEventInfo_t = off_3FCD910;  // vptr: CSosFilterStopSoundEventInfo_t
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCCE90;
  this->m_recipientFilter.m_Recipients.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_recipientFilter.m_Recipients.m_Memory;
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_recipientFilter.m_Recipients.m_Memory);
    if ( (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(p_m_Memory);
  }
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCAC70;
  this->_vptr_CSosEventInfo_t = off_3FCACD0;  // vptr: CSosEventInfo_t
}


// CSosFilterStopSoundEventInfo_t::~CSosFilterStopSoundEventInfo_t  (line 220, @0x0000000001f78af0, libserver.so)  // inlines: Purge, RemoveAll, ~CSosCopyRecipientFilter, ~CSosEventInfo_t, ~CSosFilterInfo_t, ~CSosFilterStopSoundEventInfo_t, ~CSosStopSoundEventInfo_t, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: operator delete, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CSosFilterStopSoundEventInfo_t::~CSosFilterStopSoundEventInfo_t(
        CSosFilterStopSoundEventInfo_t *const this)
{
  bool v2; // zf
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CSosEventInfo_t = off_3FCD910;  // vptr: CSosFilterStopSoundEventInfo_t
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCCE90;
  this->m_recipientFilter.m_Recipients.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_recipientFilter.m_Recipients.m_Memory;
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_recipientFilter.m_Recipients.m_Memory);
    if ( (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(p_m_Memory);
  }
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCAC70;
  this->_vptr_CSosEventInfo_t = off_3FCACD0;  // vptr: CSosEventInfo_t
  operator delete(this);
}


// CSosFilterStopSoundEventHashInfo_t::~CSosFilterStopSoundEventHashInfo_t  (line 221, @0x0000000001f78930, libserver.so)  // inlines: Purge, RemoveAll, ~CSosCopyRecipientFilter, ~CSosEventInfo_t, ~CSosFilterInfo_t, ~CSosStopSoundEventHashInfo_t, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CSosFilterStopSoundEventHashInfo_t::~CSosFilterStopSoundEventHashInfo_t(
        CSosFilterStopSoundEventHashInfo_t *const this)
{
  bool v2; // zf
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CSosEventInfo_t = off_3FCD930;  // vptr: CSosFilterStopSoundEventHashInfo_t
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCCE90;
  this->m_recipientFilter.m_Recipients.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_recipientFilter.m_Recipients.m_Memory;
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_recipientFilter.m_Recipients.m_Memory);
    if ( (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(p_m_Memory);
  }
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCAC70;
  this->_vptr_CSosEventInfo_t = off_3FCACD0;  // vptr: CSosEventInfo_t
}


// CSosFilterStopSoundEventHashInfo_t::~CSosFilterStopSoundEventHashInfo_t  (line 221, @0x0000000001f78b60, libserver.so)  // inlines: Purge, RemoveAll, ~CSosCopyRecipientFilter, ~CSosEventInfo_t, ~CSosFilterInfo_t, ~CSosFilterStopSoundEventHashInfo_t, ~CSosStopSoundEventHashInfo_t, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: operator delete, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CSosFilterStopSoundEventHashInfo_t::~CSosFilterStopSoundEventHashInfo_t(
        CSosFilterStopSoundEventHashInfo_t *const this)
{
  bool v2; // zf
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CSosEventInfo_t = off_3FCD930;  // vptr: CSosFilterStopSoundEventHashInfo_t
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCCE90;
  this->m_recipientFilter.m_Recipients.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_recipientFilter.m_Recipients.m_Memory;
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_recipientFilter.m_Recipients.m_Memory);
    if ( (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(p_m_Memory);
  }
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCAC70;
  this->_vptr_CSosEventInfo_t = off_3FCACD0;  // vptr: CSosEventInfo_t
  operator delete(this);
}


// CSosFilterSetSoundEventFieldsInfo_t::~CSosFilterSetSoundEventFieldsInfo_t  (line 222, @0x0000000001f84ae0, libserver.so)  // inlines: Base, Purge, RemoveAll, ~CSosCopyRecipientFilter, ~CSosEventInfoWithFieldData_t, ~CSosEventInfo_t, ~CSosFilterInfo_t, ~CSosPackedFieldData, ~CSosSetSoundEventFieldsInfo_t, ~CUtlBuffer, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlMemory<unsigned char, int>::Purge, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CSosFilterSetSoundEventFieldsInfo_t::~CSosFilterSetSoundEventFieldsInfo_t(
        CSosFilterSetSoundEventFieldsInfo_t *const this)
{
  bool v2; // zf
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t m_nAllocated; // ax
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int> >::CAllocator *p_m_Memory; // r12
  void (__fastcall *v5)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *); // rdx

  v2 = (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CSosEventInfo_t = off_3FCD950;  // vptr: CSosFilterSetSoundEventFieldsInfo_t
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCCE90;
  this->m_recipientFilter.m_Recipients.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_recipientFilter.m_Recipients.m_Memory;
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_recipientFilter.m_Recipients.m_Memory);
    if ( (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(p_m_Memory);
  }
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCAC70;
  this->_vptr_CSosEventInfo_t = off_3FCACF0;  // vptr: CSosEventInfoWithFieldData_t
  CUtlMemory<unsigned char,int>::Purge(&this->m_fieldData.m_data.m_Memory);
  m_nAllocated = this->m_fieldData.m_entries.m_nAllocated;
  this->m_fieldData.m_entries.m_nCount = 0;
  if ( m_nAllocated > 3 )
  {
    v5 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v5(g_pMemAlloc, this->m_fieldData.m_entries.m_pElements);
    else
      v5(g_pMemAlloc, 0);
  }
  this->m_fieldData.m_entries.m_nAllocated = 3;
  this->_vptr_CSosEventInfo_t = off_3FCACD0;  // vptr: CSosEventInfo_t
}


// CSosFilterSetSoundEventFieldsInfo_t::~CSosFilterSetSoundEventFieldsInfo_t  (line 222, @0x0000000001f84cc0, libserver.so)  // inlines: Base, Purge, RemoveAll, ~CSosCopyRecipientFilter, ~CSosEventInfoWithFieldData_t, ~CSosEventInfo_t, ~CSosFilterInfo_t, ~CSosFilterSetSoundEventFieldsInfo_t, ~CSosPackedFieldData, ~CSosSetSoundEventFieldsInfo_t, ~CUtlBuffer, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlMemory<unsigned char, int>::Purge, operator delete, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CSosFilterSetSoundEventFieldsInfo_t::~CSosFilterSetSoundEventFieldsInfo_t(
        CSosFilterSetSoundEventFieldsInfo_t *const this)
{
  bool v2; // zf
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t m_nAllocated; // ax
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int> >::CAllocator *p_m_Memory; // r12
  void (__fastcall *v5)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *); // rdx

  v2 = (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CSosEventInfo_t = off_3FCD950;  // vptr: CSosFilterSetSoundEventFieldsInfo_t
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCCE90;
  this->m_recipientFilter.m_Recipients.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_recipientFilter.m_Recipients.m_Memory;
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_recipientFilter.m_Recipients.m_Memory);
    if ( (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(p_m_Memory);
  }
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCAC70;
  this->_vptr_CSosEventInfo_t = off_3FCACF0;  // vptr: CSosEventInfoWithFieldData_t
  CUtlMemory<unsigned char,int>::Purge(&this->m_fieldData.m_data.m_Memory);
  this->m_fieldData.m_entries.m_nCount = 0;
  m_nAllocated = this->m_fieldData.m_entries.m_nAllocated;
  if ( m_nAllocated > 3 )
  {
    v5 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v5(g_pMemAlloc, this->m_fieldData.m_entries.m_pElements);
    else
      v5(g_pMemAlloc, 0);
  }
  this->m_fieldData.m_entries.m_nAllocated = 3;
  this->_vptr_CSosEventInfo_t = off_3FCACD0;  // vptr: CSosEventInfo_t
  operator delete(this);
}


// CSosFilterSetLibraryStackFieldsInfo_t::~CSosFilterSetLibraryStackFieldsInfo_t  (line 223, @0x0000000001f84bd0, libserver.so)  // inlines: Base, Purge, RemoveAll, ~CSosCopyRecipientFilter, ~CSosEventInfoWithFieldData_t, ~CSosEventInfo_t, ~CSosFilterInfo_t, ~CSosPackedFieldData, ~CSosSetLibraryStackFieldsInfo_t, ~CUtlBuffer, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlMemory<unsigned char, int>::Purge, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CSosFilterSetLibraryStackFieldsInfo_t::~CSosFilterSetLibraryStackFieldsInfo_t(
        CSosFilterSetLibraryStackFieldsInfo_t *const this)
{
  bool v2; // zf
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t m_nAllocated; // ax
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int> >::CAllocator *p_m_Memory; // r12
  void (__fastcall *v5)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *); // rdx

  v2 = (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CSosEventInfo_t = off_3FCD970;  // vptr: CSosFilterSetLibraryStackFieldsInfo_t
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCCE90;
  this->m_recipientFilter.m_Recipients.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_recipientFilter.m_Recipients.m_Memory;
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_recipientFilter.m_Recipients.m_Memory);
    if ( (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(p_m_Memory);
  }
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCAC70;
  this->_vptr_CSosEventInfo_t = off_3FCACF0;  // vptr: CSosEventInfoWithFieldData_t
  CUtlMemory<unsigned char,int>::Purge(&this->m_fieldData.m_data.m_Memory);
  m_nAllocated = this->m_fieldData.m_entries.m_nAllocated;
  this->m_fieldData.m_entries.m_nCount = 0;
  if ( m_nAllocated > 3 )
  {
    v5 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v5(g_pMemAlloc, this->m_fieldData.m_entries.m_pElements);
    else
      v5(g_pMemAlloc, 0);
  }
  this->m_fieldData.m_entries.m_nAllocated = 3;
  this->_vptr_CSosEventInfo_t = off_3FCACD0;  // vptr: CSosEventInfo_t
}


// CSosFilterSetLibraryStackFieldsInfo_t::~CSosFilterSetLibraryStackFieldsInfo_t  (line 223, @0x0000000001f84db0, libserver.so)  // inlines: Base, Purge, RemoveAll, ~CSosCopyRecipientFilter, ~CSosEventInfoWithFieldData_t, ~CSosEventInfo_t, ~CSosFilterInfo_t, ~CSosFilterSetLibraryStackFieldsInfo_t, ~CSosPackedFieldData, ~CSosSetLibraryStackFieldsInfo_t, ~CUtlBuffer, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlMemory<unsigned char, int>::Purge, operator delete, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CSosFilterSetLibraryStackFieldsInfo_t::~CSosFilterSetLibraryStackFieldsInfo_t(
        CSosFilterSetLibraryStackFieldsInfo_t *const this)
{
  bool v2; // zf
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t m_nAllocated; // ax
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int> >::CAllocator *p_m_Memory; // r12
  void (__fastcall *v5)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *); // rdx

  v2 = (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CSosEventInfo_t = off_3FCD970;  // vptr: CSosFilterSetLibraryStackFieldsInfo_t
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCCE90;
  this->m_recipientFilter.m_Recipients.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_recipientFilter.m_Recipients.m_Memory;
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_recipientFilter.m_Recipients.m_Memory);
    if ( (this->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(p_m_Memory);
  }
  this->m_recipientFilter._vptr_IRecipientFilter = &off_3FCAC70;
  this->_vptr_CSosEventInfo_t = off_3FCACF0;  // vptr: CSosEventInfoWithFieldData_t
  CUtlMemory<unsigned char,int>::Purge(&this->m_fieldData.m_data.m_Memory);
  this->m_fieldData.m_entries.m_nCount = 0;
  m_nAllocated = this->m_fieldData.m_entries.m_nAllocated;
  if ( m_nAllocated > 3 )
  {
    v5 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v5(g_pMemAlloc, this->m_fieldData.m_entries.m_pElements);
    else
      v5(g_pMemAlloc, 0);
  }
  this->m_fieldData.m_entries.m_nAllocated = 3;
  this->_vptr_CSosEventInfo_t = off_3FCACD0;  // vptr: CSosEventInfo_t
  operator delete(this);
}


// CSoundOpGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 230, @0x0000000001f72110, libserver.so)
void __fastcall CSoundOpGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CSoundOpGameSystem *const this)
{
  ;
}


// CSoundOpGameSystem::DoesGameSystemReallocate  (line 230, @0x0000000001f72120, libserver.so)
// globals: CSoundOpGameSystem::sm_Factory
bool __fastcall CSoundOpGameSystem::DoesGameSystemReallocate(const CSoundOpGameSystem *const this)
{
  return (*(CSoundOpGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CSoundOpGameSystem::sm_Factory);
}


// CSoundOpGameSystem::SetGameSystemGlobalPtrs  (line 230, @0x0000000001f72140, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CSoundOpGameSystem::sm_Factory
void __fastcall CSoundOpGameSystem::SetGameSystemGlobalPtrs(CSoundOpGameSystem *const this, void *pValue)
{
  if ( CSoundOpGameSystem::sm_Factory != 0 )
    (*(CSoundOpGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CSoundOpGameSystem::sm_Factory, pValue);
}


// CSoundOpGameSystem::StopSoundEvent  (line 281, @0x0000000001fa16e0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, InValidate, StopSoundEvent, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::DoStopSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CPhysicsGameSystem::ShutdownFrictionSounds, CPhysicsGameSystem::UpdateFrictionSounds, CPointValueRemapper::StopSoundLoop, CSoundPatch::Shutdown, CBaseEntity::StopSound, CSoundEventEntity::StopSound, CDOTA_Ability_EnragedWildkin_Tornado::OnSpellStart, CDOTA_Ability_EnragedWildkin_Tornado::OnChannelFinish, CDOTA_Modifier_CrystalMaiden_FreezingField::OnDestroy, CDOTA_Modifier_SandKing_SandStorm::OnDestroy, CDOTA_Ability_Puck_IllusoryOrb::OnProjectileHit, CDOTA_Modifier_Earthshaker_EnchantTotem::OnDestroy (32 total)
void __fastcall CSoundOpGameSystem::StopSoundEvent(CSoundOpGameSystem *const this, SndOpEventGuid_t *const nGuid)
{
  CRecipientFilter v4; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v5; // [rsp+138h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  if ( nGuid->m_nGuid.m_Data != 0 )
  {
    CRecipientFilter::CRecipientFilter(&v4);
    v4._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&v4);
    v4._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&v4);
    CSoundOpGameSystem::DoStopSoundEvent(this, &v4, nGuid->m_nGuid);
    v4._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&v4);
    nGuid->m_nGuid.m_Data = 0;
    nGuid->m_hStackHash = -1;
  }
}


// CSoundOpGameSystem::StopSoundEvent  (line 301, @0x00000000023ae0f0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::StopSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CBaseEntity::StopSound
void __fastcall CSoundOpGameSystem::StopSoundEvent(
        CSoundOpGameSystem *const this,
        const char *pSoundEventName,
        CEntityIndex entIndex)
{
  CRecipientFilter v6; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v7; // [rsp+138h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&v6);
  v6._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&v6);
  v6._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&v6);
  CSoundOpGameSystem::StopSoundEvent(this, &v6, pSoundEventName, entIndex);
  v6._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&v6);
}


// CSoundOpGameSystem::PauseSoundEvent  (line 311, @0x00000000023ae1e0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::PauseSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CSoundEventEntity::PauseSound
void __fastcall CSoundOpGameSystem::PauseSoundEvent(CSoundOpGameSystem *const this, SndOpEventGuid_t *const nGuid)
{
  CRecipientFilter v4; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v5; // [rsp+138h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  if ( nGuid->m_nGuid.m_Data != 0 )
  {
    CRecipientFilter::CRecipientFilter(&v4);
    v4._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&v4);
    v4._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&v4);
    CSoundOpGameSystem::PauseSoundEvent(this, &v4, *nGuid);
    v4._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&v4);
  }
}


// CSoundOpGameSystem::UnPauseSoundEvent  (line 324, @0x00000000023ae2d0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::UnPauseSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CSoundEventEntity::PauseSound
void __fastcall CSoundOpGameSystem::UnPauseSoundEvent(CSoundOpGameSystem *const this, SndOpEventGuid_t *const nGuid)
{
  CRecipientFilter v4; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v5; // [rsp+138h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  if ( nGuid->m_nGuid.m_Data != 0 )
  {
    CRecipientFilter::CRecipientFilter(&v4);
    v4._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&v4);
    v4._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&v4);
    CSoundOpGameSystem::UnPauseSoundEvent(this, &v4, *nGuid);
    v4._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&v4);
  }
}


// CSoundOpGameSystem::SetSoundEventParam  (line 350, @0x0000000001fa15d0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::SetSoundEventParam, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CPhysicsGameSystem::UpdateFrictionSounds, CAmbientGeneric::RampThink
void __fastcall CSoundOpGameSystem::SetSoundEventParam(
        CSoundOpGameSystem *const this,
        SndOpEventGuid_t nGuid,
        const char *pParameterName,
        const CSosFieldData *const fieldData,
        int nIndex)
{
  CRecipientFilter v10; // [rsp+10h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+148h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&v10);
  v10._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&v10);
  v10._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&v10);
  CSoundOpGameSystem::SetSoundEventParam(this, &v10, nGuid, pParameterName, fieldData, nIndex, 0);
  v10._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&v10);
}


// CSoundOpGameSystem::SetLibraryStackField  (line 374, @0x00000000023ae3c0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::SetLibraryStackField, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CSoundOpvarSetEntity::InputSetOpvar
void __fastcall CSoundOpGameSystem::SetLibraryStackField(
        CSoundOpGameSystem *const this,
        const char *pStackName,
        const char *pOperatorName,
        const char *pFieldName,
        const CSosFieldData *const fieldData,
        int nIndex)
{
  CRecipientFilter v12; // [rsp+20h] [rbp-170h] BYREF
  unsigned __int64 v13; // [rsp+158h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&v12);
  v12._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&v12);
  v12._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&v12);
  CSoundOpGameSystem::SetLibraryStackField(this, &v12, pStackName, pOperatorName, pFieldName, fieldData, nIndex);
  v12._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&v12);
}


