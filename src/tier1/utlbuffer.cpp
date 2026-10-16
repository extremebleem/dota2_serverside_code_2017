// Reconstructed from DWARF by pahole; not original source.

// src/tier1/utlbuffer.cpp:27
class CUtlCStringConversion : public CUtlCharConversion {
public:

private:

	char m_pConversion[256];  // +0x1128
	CUtlCStringConversion(CUtlCStringConversion &);
	CUtlCStringConversion(const CUtlCStringConversion &);
	CUtlCStringConversion(char, const char *, int, const ConversionArray_t *);
	virtual char FindConversion(const char *, int *);

	// vtable[0] FindConversion
	// sizeof = 4648
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_utlbuffer.cpp  (line 0, @0x0000000001a67320, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_utlbuffer_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// GetCStringCharConversion  (line 55, @0x0000000002f82a60, libserver.so)
// calls: __cxa_guard_acquire, operator new, CUtlCStringConversion::CUtlCStringConversion, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: SaveKV3Text_R
// globals: `guard variable for'GetCStringCharConversion(void)::s_pStringCharConversion, GetCStringCharConversion(void)::s_pStringCharConversion, s_pConversionArrayCStringConversion
CUtlCharConversion *__cdecl GetCStringCharConversion()
{
  CUtlCStringConversion *v1; // rbx

  if ( `guard variable for'GetCStringCharConversion(void)::s_pStringCharConversion != 0 )
    return GetCStringCharConversion(void)::s_pStringCharConversion;
  if ( __cxa_guard_acquire(&`guard variable for'GetCStringCharConversion(void)::s_pStringCharConversion) != 0 )
  {
    v1 = operator new(0x1228u);
    CUtlCStringConversion::CUtlCStringConversion(v1, 92, "\"", 11, s_pConversionArrayCStringConversion);
    GetCStringCharConversion(void)::s_pStringCharConversion = v1;
    __cxa_guard_release(&`guard variable for'GetCStringCharConversion(void)::s_pStringCharConversion);
  }
  return GetCStringCharConversion(void)::s_pStringCharConversion;
}


// CUtlCStringConversion::CUtlCStringConversion  (line 65, @0x0000000002f829e0, libserver.so)  // inlines: memset
// calls: CUtlCharConversion::CUtlCharConversion
// callers: GetCStringCharConversion
void __fastcall CUtlCStringConversion::CUtlCStringConversion(
        CUtlCStringConversion *const this,
        char nEscapeChar,
        const char *pDelimiter,
        int nCount,
        const CUtlCharConversion::ConversionArray_t *pArray)
{
  const CUtlCharConversion::ConversionArray_t *v8; // r8
  const char *m_pReplacementString; // rax

  CUtlCharConversion::CUtlCharConversion(this, nEscapeChar, pDelimiter, nCount, pArray);
  this->_vptr_CUtlCharConversion = &off_47BF0C0;
  memset(this->m_pConversion, 0, sizeof(this->m_pConversion));
  if ( nCount > 0 )
  {
    v8 = pArray;
    do
    {
      m_pReplacementString = v8->m_pReplacementString;
      ++v8;
      this->m_pConversion[*m_pReplacementString] = v8[-1].m_nActualChar;
    }
    while ( v8 != &pArray[(nCount - 1) + 1] );
  }
}


// CUtlCStringConversion::FindConversion  (line 76, @0x0000000002f82780, libserver.so)
char __fastcall CUtlCStringConversion::FindConversion(
        CUtlCStringConversion *const this,
        const char *pString,
        int *pLength)
{
  char result; // al

  result = this->m_pConversion[*pString];
  *pLength = result != 0;
  return result;
}


// CUtlCharConversion::CUtlCharConversion  (line 88, @0x0000000002f82900, libserver.so)  // inlines: V_strlen, memset
// calls: strlen, memset
// callers: CUtlCStringConversion::CUtlCStringConversion
void __fastcall CUtlCharConversion::CUtlCharConversion(
        CUtlCharConversion *const this,
        char nEscapeChar,
        const char *pDelimiter,
        int nCount,
        const CUtlCharConversion::ConversionArray_t *pArray)
{
  int v8; // eax
  char *m_pList; // r13
  const CUtlCharConversion::ConversionArray_t *v10; // r12
  int v11; // eax
  __int64 m_nActualChar; // rax
  const char *m_pReplacementString; // rdi
  char *v14; // r14

  this->_vptr_CUtlCharConversion = &off_47BF0E0;
  this->m_nEscapeChar = nEscapeChar;
  this->m_pDelimiter = pDelimiter;
  this->m_nCount = nCount;
  if ( pDelimiter != 0 )
    v8 = strlen(pDelimiter);
  else
    v8 = 0;
  this->m_nDelimiterLength = v8;
  this->m_nMaxConversionLength = 0;
  memset(this->m_pReplacements, 0, sizeof(this->m_pReplacements));
  if ( nCount > 0 )
  {
    m_pList = this->m_pList;
    v10 = &pArray[(nCount - 1) + 1];
    do
    {
      m_nActualChar = pArray->m_nActualChar;
      *m_pList = m_nActualChar;
      m_pReplacementString = pArray->m_pReplacementString;
      v14 = &this->m_pList[16 * m_nActualChar + 252];
      *(v14 + 2) = m_pReplacementString;
      if ( m_pReplacementString != 0 )
        v11 = strlen(m_pReplacementString);
      else
        v11 = 0;
      *(v14 + 2) = v11;
      if ( this->m_nMaxConversionLength < v11 )
        this->m_nMaxConversionLength = v11;
      ++pArray;
      ++m_pList;
    }
    while ( pArray != v10 );
  }
}


// CUtlCharConversion::GetEscapeChar  (line 116, @0x0000000002f82b10, libserver.so)
char __fastcall CUtlCharConversion::GetEscapeChar(const CUtlCharConversion *const this)
{
  return this->m_nEscapeChar;
}


// CUtlCharConversion::GetDelimiter  (line 121, @0x0000000002f82b20, libserver.so)
const char *__fastcall CUtlCharConversion::GetDelimiter(const CUtlCharConversion *const this)
{
  return this->m_pDelimiter;
}


// CUtlCharConversion::GetDelimiterLength  (line 126, @0x0000000002f82b30, libserver.so)
int __fastcall CUtlCharConversion::GetDelimiterLength(const CUtlCharConversion *const this)
{
  return this->m_nDelimiterLength;
}


// CUtlCharConversion::GetConversionString  (line 135, @0x0000000002f82b40, libserver.so)
const char *__fastcall CUtlCharConversion::GetConversionString(const CUtlCharConversion *const this, char c)
{
  return this->m_pReplacements[c].m_pReplacementString;
}


// CUtlCharConversion::GetConversionLength  (line 140, @0x0000000002f82b60, libserver.so)
int __fastcall CUtlCharConversion::GetConversionLength(const CUtlCharConversion *const this, char c)
{
  return this->m_pReplacements[c].m_nLength;
}


// CUtlCharConversion::MaxConversionLength  (line 145, @0x0000000002f82b80, libserver.so)
int __fastcall CUtlCharConversion::MaxConversionLength(const CUtlCharConversion *const this)
{
  return this->m_nMaxConversionLength;
}


// CUtlCharConversion::FindConversion  (line 154, @0x0000000002f827b0, libserver.so)  // inlines: _V_strcmp
// calls: strcmp
char __fastcall CUtlCharConversion::FindConversion(CUtlCharConversion *const this, const char *pString, int *pLength)
{
  int m_nCount; // eax
  CUtlCharConversion *v6; // r13
  CUtlCharConversion *v7; // r14
  char *v8; // rbx

  m_nCount = this->m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_6:
    *pLength = 0;
    return 0;
  }
  else
  {
    v6 = this;
    v7 = (&this->_vptr_CUtlCharConversion + (m_nCount - 1) + 1);
    while ( 1 )
    {
      v8 = &this->m_pList[16 * v6->m_pList[0] + 252];
      if ( strcmp(pString, *(v8 + 2)) == 0 )
        break;
      v6 = (v6 + 1);
      if ( v6 == v7 )
        goto LABEL_6;
    }
    *pLength = *(v8 + 2);
    return this->m_pList[v6 - this];
  }
}


// CUtlBuffer::CUtlBuffer  (line 173, @0x0000000002f84eb0, libserver.so)  // inlines: AddNullTermination, CByteswap, CUtlMemory, Purge, SetOverflowFuncs, SetTargetBigEndian, ~CUtlMemory
// calls: CMemAllocSystemInitialize, CUtlBuffer::AddNullTermination, CUtlMemory<unsigned char, int>::Purge, _Unwind_Resume
// callers: CNetMessagePB<548, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage, CNetMessagePB<549, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage, CGameConfiguration::SetupGameSessionConfiguration, CGameConfiguration::InitGameSession, CGameConfiguration::ExecuteURL, CNetMessagePB<280, CBaseCmdKeyValues<CClientMsg_CustomGameEvent>, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage, CNetMessagePB<148, CBaseCmdKeyValues<CUserMsg_CustomGameEvent>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage, CCustomGameEventManager::ReceiveClientMsgCustomGameEvent, CSoundOpGameSystem::DoSetSoundEventParams, CSoundOpGameSystem::DoStartSoundEvent, CSoundOpGameSystem::DoSetLibraryStackFields, CCustomGameEventManager::Script_Send_ServerToAllClients (70 total)
// globals: CUtlBuffer::GetOverflow(int), CUtlBuffer::PutOverflow(int)
void __fastcall CUtlBuffer::CUtlBuffer(CUtlBuffer *const this, int growSize, int initSize, int nFlags)
{
  __int64 v4; // rsi
  unsigned __int8 v5; // r12
  unsigned __int8 *v7; // rax

  v4 = growSize & 0x3FFFFFFF;
  v5 = nFlags;
  this->m_Memory.m_pMemory = 0;
  this->m_Memory.m_nAllocationCount = initSize;
  this->m_Memory.m_nGrowSize = v4;
  if ( initSize != 0 )
  {
    CMemAllocSystemInitialize(this, v4);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, this->m_Memory.m_nAllocationCount);
    this->m_Flags = v5;
    *&this->m_Byteswap &= 0xFCu;
    this->m_Memory.m_pMemory = v7;
    this->m_Error = 0;
    this->m_Get = 0;
    this->m_Put = 0;
    this->m_nTab = 0;
    this->m_nOffset = 0;
    if ( (v5 & 8) == 0 )
    {
      this->m_nMaxPut = -1;
      CUtlBuffer::AddNullTermination(this);
      goto LABEL_4;
    }
  }
  else
  {
    *&this->m_Byteswap &= 0xFCu;
    this->m_Error = 0;
    this->m_Get = 0;
    this->m_Put = 0;
    this->m_nTab = 0;
    this->m_nOffset = 0;
    this->m_Flags = nFlags;
  }
  this->m_nMaxPut = 0;
LABEL_4:
  this->m_GetOverflowFunc.__delta = 0;
  this->m_GetOverflowFunc.__pfn = CUtlBuffer::GetOverflow;
  this->m_PutOverflowFunc.__pfn = CUtlBuffer::PutOverflow;
  this->m_PutOverflowFunc.__delta = 0;
}


// CUtlBuffer::CUtlBuffer  (line 194, @0x0000000002f84fb0, libserver.so)  // inlines: AddNullTermination, CByteswap, CUtlMemory, Purge, SetOverflowFuncs, SetTargetBigEndian, ~CUtlMemory
// calls: CUtlBuffer::AddNullTermination, CUtlMemory<unsigned char, int>::Purge, _Unwind_Resume
// callers: Script_LoadKeyValuesFromString, CEntity2SaveRestore::EntityPatchWrite, CEntity2SaveRestore::StreamEntitiesToFile, CEntity2SaveRestore::SaveGame_Finalize, CLoopModeGameToolHooks::OnToolSpawnEntity, CCommentarySystem::LoadCommentaryFile, CBaseGameStats::SaveToFileNOW, CSceneEntity::LoadScene, CCustomNetTableManager::GetTableValue, CCustomNetTableManager::GetTableValueByIndex, CCustomNetTableManager::Script_GetTableValue, CAsyncFileLoadPrerequisiteLambda<CGridNav::SpawnGroupPrecache(const EventSpawnGroupPrecache_t&)::__lambda37>::OnFileLoaded (22 total)
// globals: CUtlBuffer::GetOverflow(int), CUtlBuffer::PutOverflow(int)
void __fastcall CUtlBuffer::CUtlBuffer(CUtlBuffer *const this, const void *pBuffer, int nSize, int nFlags)
{
  *&this->m_Byteswap &= 0xFCu;
  this->m_Flags = nFlags;
  this->m_Memory.m_pMemory = pBuffer;
  this->m_Memory.m_nAllocationCount = nSize;
  this->m_Memory.m_nGrowSize = 0x40000000;
  this->m_Error = 0;
  this->m_Get = 0;
  this->m_Put = 0;
  this->m_nTab = 0;
  this->m_nOffset = 0;
  if ( (nFlags & 8) != 0 )
  {
    this->m_Put = nSize;
    this->m_nMaxPut = nSize;
  }
  else
  {
    this->m_nMaxPut = -1;
    CUtlBuffer::AddNullTermination(this);
  }
  this->m_GetOverflowFunc.__delta = 0;
  this->m_GetOverflowFunc.__pfn = CUtlBuffer::GetOverflow;
  this->m_PutOverflowFunc.__pfn = CUtlBuffer::PutOverflow;
  this->m_PutOverflowFunc.__delta = 0;
}


// CUtlBuffer::SetBufferType  (line 223, @0x0000000002f82b90, libserver.so)
// callers: ProtoBufHelper::ConvertProtoBufToJSON, CGCUpdateItemSchema::OnHTTPCompleted, KeyValues::RecursiveSaveToLocalizationFile
void __fastcall CUtlBuffer::SetBufferType(CUtlBuffer *const this, bool bIsText, bool bContainsCRLF)
{
  unsigned __int8 m_Flags; // al
  unsigned __int8 v4; // al

  m_Flags = this->m_Flags;
  if ( bIsText )
  {
    v4 = m_Flags | 1;
    this->m_Flags = v4;
    if ( !bContainsCRLF )
    {
LABEL_3:
      this->m_Flags = v4 & 0xFB;
      return;
    }
  }
  else
  {
    v4 = m_Flags & 0xFE;
    this->m_Flags = v4;
    if ( !bContainsCRLF )
      goto LABEL_3;
  }
  this->m_Flags = v4 | 4;
}


// CUtlBuffer::SetExternalBuffer  (line 275, @0x0000000002f84d60, libserver.so)  // inlines: AddNullTermination, Purge, SetExternalBuffer
// calls: CUtlBuffer::AddNullTermination, CUtlMemory<unsigned char, int>::Purge
// callers: CSoundOpGameSystem::DoSetSoundEventParams, CSoundOpGameSystem::DoStartSoundEvent, CSoundOpGameSystem::DoSetLibraryStackFields, CDOTA_CombatLog::SaveCombatLog, CDOTAHLTVDirector::UploadReplay, CGCClientSystem::SaveSerializedSOCache, CGCClientSystem::LoadSerializedSOCache
void __fastcall CUtlBuffer::SetExternalBuffer(
        CUtlBuffer *const this,
        void *pMemory,
        int nSize,
        int nInitialPut,
        int nFlags)
{
  char nFlagsa; // [rsp+Ch] [rbp-24h]
  int nInitialPuta; // [rsp+10h] [rbp-20h]
  int nSizea; // [rsp+14h] [rbp-1Ch]
  void *pMemorya; // [rsp+18h] [rbp-18h]

  if ( (this->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    nFlagsa = nFlags;
    nInitialPuta = nInitialPut;
    nSizea = nSize;
    pMemorya = pMemory;
    CUtlMemory<unsigned char,int>::Purge(&this->m_Memory);
    LOBYTE(nFlags) = nFlagsa;
    nInitialPut = nInitialPuta;
    nSize = nSizea;
    pMemory = pMemorya;
  }
  this->m_Flags = nFlags;
  this->m_Memory.m_pMemory = pMemory;
  this->m_Memory.m_nAllocationCount = nSize;
  this->m_Memory.m_nGrowSize = 0x40000000;
  this->m_Get = 0;
  this->m_Put = nInitialPut;
  this->m_nTab = 0;
  this->m_Error = 0;
  this->m_nOffset = 0;
  if ( (nFlags & 8) != 0 )
  {
    this->m_nMaxPut = nSize;
    if ( nInitialPut <= nSize )
      return;
LABEL_7:
    CUtlBuffer::AddNullTermination(this);
    return;
  }
  this->m_nMaxPut = -1;
  if ( nInitialPut > -1 )
    goto LABEL_7;
}


// CUtlBuffer::AssumeMemory  (line 301, @0x0000000002f84e10, libserver.so)  // inlines: AddNullTermination, AssumeMemory, Purge
// calls: CUtlBuffer::AddNullTermination, CUtlMemory<unsigned char, int>::Purge
// callers: CSaveRestoreFileSystem::Compress, CSaveRestoreFileSystem::Uncompress, KeyValues::LoadFromBuffer, LoadKV3Text
void __fastcall CUtlBuffer::AssumeMemory(CUtlBuffer *const this, void *pMemory, int nSize, int nInitialPut, int nFlags)
{
  uint32 m_nGrowSize; // eax
  char nFlagsa; // [rsp+Ch] [rbp-24h]
  int nInitialPuta; // [rsp+10h] [rbp-20h]
  int nSizea; // [rsp+14h] [rbp-1Ch]
  void *pMemorya; // [rsp+18h] [rbp-18h]

  m_nGrowSize = this->m_Memory.m_nGrowSize;
  if ( (m_nGrowSize & 0xC0000000) == 0 )
  {
    nFlagsa = nFlags;
    nInitialPuta = nInitialPut;
    nSizea = nSize;
    pMemorya = pMemory;
    CUtlMemory<unsigned char,int>::Purge(&this->m_Memory);
    m_nGrowSize = this->m_Memory.m_nGrowSize;
    LOBYTE(nFlags) = nFlagsa;
    nInitialPut = nInitialPuta;
    nSize = nSizea;
    pMemory = pMemorya;
  }
  this->m_Memory.m_pMemory = pMemory;
  this->m_Memory.m_nAllocationCount = nSize;
  *&this->m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF;
  this->m_Put = nInitialPut;
  this->m_nTab = 0;
  this->m_Error = 0;
  this->m_nOffset = 0;
  this->m_Flags = nFlags;
  this->m_nMaxPut = -1;
  if ( nInitialPut >= 0 )
    CUtlBuffer::AddNullTermination(this);
}


// CUtlBuffer::DetachMemory  (line 321, @0x0000000002f82bd0, libserver.so)  // inlines: DetachMemory
void *__fastcall CUtlBuffer::DetachMemory(CUtlBuffer *const this)
{
  bool v1; // zf
  void *result; // rax

  v1 = (this->m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Get = 0;
  this->m_Put = 0;
  this->m_nTab = 0;
  this->m_Error = 0;
  this->m_nOffset = 0;
  if ( !v1 )
    return 0;
  result = this->m_Memory.m_pMemory;
  this->m_Memory.m_nAllocationCount = 0;
  this->m_Memory.m_pMemory = 0;
  return result;
}


// CUtlBuffer::EnsureCapacity  (line 336, @0x0000000002f82c20, libserver.so)  // inlines: ConvertToGrowableMemory, EnsureCapacity, memcpy
// calls: CUtlMemory<unsigned char, int>::ConvertToGrowableMemory, memcpy
// callers: CSaveRestoreFileSystem::DirectoryExtract, AsyncCaption_t::LoadFromFile_Internal, CGCJobLoadSaveGame::BYieldingRunJob, CUtlBuffer::ConvertCRLF, CBaseFile::ReadFile, LoadKV3Binary, SaveKV3Binary, CHeightCellGrid::SerializeToBuffer, GCSDK::CProtoBufSharedObjectBase::SerializeToBuffer
void __fastcall CUtlBuffer::EnsureCapacity(CUtlBuffer *const this, int num)
{
  int v2; // r13d
  int v3; // r12d
  int m_nAllocationCount; // eax
  uint32 m_nGrowSize; // eax
  __int64 v7; // rax
  unsigned __int8 *m_pMemory; // r13
  unsigned __int8 *v9; // rax

  v2 = num + 1;
  v3 = num;
  if ( (this->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    goto LABEL_12;
  m_nAllocationCount = this->m_Memory.m_nAllocationCount;
  if ( (this->m_Flags & 2) != 0 && v2 > m_nAllocationCount )
  {
    CUtlMemory<unsigned char,int>::ConvertToGrowableMemory(&this->m_Memory, num);
LABEL_12:
    m_nAllocationCount = this->m_Memory.m_nAllocationCount;
    v3 = v2;
  }
  if ( v3 > m_nAllocationCount )
  {
    m_nGrowSize = this->m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_Memory.m_pMemory;
        v9 = (**g_pMemAlloc)(g_pMemAlloc, v3);
        this->m_Memory.m_pMemory = v9;
        if ( m_pMemory != 0 )
          memcpy(v9, m_pMemory, this->m_Memory.m_nAllocationCount);
        this->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v7 = *g_pMemAlloc;
        if ( this->m_Memory.m_pMemory != 0 )
          this->m_Memory.m_pMemory = (*(v7 + 8))(g_pMemAlloc, this->m_Memory.m_pMemory, v3);
        else
          this->m_Memory.m_pMemory = (*v7)(g_pMemAlloc, v3);
      }
      this->m_Memory.m_nAllocationCount = v3;
    }
  }
}


// CUtlBuffer::Get  (line 359, @0x0000000002f82dc0, libserver.so)  // inlines: memcpy, operator[]
// calls: CUtlBuffer::CheckGet, memcpy
// callers: CEntity2SaveRestore::LoadSaveData, CBaseGameStats::LoadFromFile, CUtlBuffer::GetLine, CUtlBuffer::GetString, CUtlBuffer::ParseToken, LoadKV3Binary, CGeoViewVertex::Unserialize, CGeoViewCamera::Unserialize, CGeoViewText3D::Unserialize, CNavLadder::Load, CNavPlaceDirectory::Load, CNavPoly::LoadPoly (13 total)
bool __fastcall CUtlBuffer::Get(CUtlBuffer *const this, void *pMem, int size)
{
  bool v6; // bl

  if ( size <= 0 )
    return 0;
  v6 = CUtlBuffer::CheckGet(this, size);
  if ( !v6 )
    return 0;
  memcpy(pMem, &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset], size);
  this->m_Get += size;
  return v6;
}


// CUtlBuffer::GetUpTo  (line 378, @0x0000000002f83000, libserver.so)  // inlines: memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, memcpy
// callers: CSaveRestoreFileSystem::Read
int __fastcall CUtlBuffer::GetUpTo(CUtlBuffer *const this, void *pMem, int nSize)
{
  bool v5; // al
  int v6; // edx
  int v7; // r13d
  int nSizea[9]; // [rsp+Ch] [rbp-24h] BYREF

  nSizea[0] = nSize;
  v5 = CUtlBuffer::CheckArbitraryPeekGet(this, 0, nSizea);
  v6 = 0;
  if ( v5 )
  {
    v7 = nSizea[0];
    memcpy(pMem, &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset], nSizea[0]);
    v6 = v7;
    this->m_Get += v7;
  }
  return v6;
}


// CUtlBuffer::EatWhiteSpace  (line 396, @0x0000000002f82e30, libserver.so)  // inlines: PeekGet, operator[]
// calls: CUtlBuffer::CheckGet
// callers: ResetConVarsFromFile, CKeyValuesTokenReader::ReadToken, KeyValues::FromJSON, CUtlBuffer::GetString, CUtlBuffer::VaScanf, CUtlBuffer::GetDelimitedString, CUtlBuffer::ParseToken, Unserialize<VecDouble3>, Unserialize<NavGenAreaDebug_t>, Unserialize<NavGenDebugStage_t>, Unserialize
void __fastcall CUtlBuffer::EatWhiteSpace(CUtlBuffer *const this)
{
  unsigned int v2; // ecx

  if ( (this->m_Flags & 1) != 0 && this->m_Error == 0 )
  {
    while ( CUtlBuffer::CheckGet(this, 1) )
    {
      v2 = this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset] - 9;
      if ( v2 > 0x17 || ((1LL << v2) & 0x80001F) == 0 )
        break;
      ++this->m_Get;
    }
  }
}


// CUtlBuffer::EatCPPComment  (line 413, @0x0000000002f835c0, libserver.so)  // inlines: GetChar, GetTypeBin<char>, PeekGet, operator[]
// calls: CUtlBuffer::PeekGet, CUtlBuffer::CheckGet
// callers: ResetConVarsFromFile, CKeyValuesTokenReader::ReadToken, CUtlBuffer::ParseToken, CUtlTokenizer::ReadTokenChars
bool __fastcall CUtlBuffer::EatCPPComment(CUtlBuffer *const this)
{
  _BYTE *v2; // rax
  bool result; // al
  unsigned __int8 v4; // r12
  unsigned __int8 v5; // al
  bool v6; // al
  unsigned __int8 v7; // dl
  int v8; // edx
  int v9; // eax
  int m_Get; // edx

  if ( (this->m_Flags & 1) == 0 )
    return 0;
  if ( this->m_Error != 0 )
    return 0;
  v2 = CUtlBuffer::PeekGet(this, 2, 0);
  if ( v2 == 0 || *v2 != 47 || v2[1] != 47 )
    return 0;
  this->m_Get += 2;
  v4 = 0;
  if ( CUtlBuffer::CheckGet(this, 1) )
  {
    m_Get = this->m_Get;
    v4 = this->m_Memory.m_pMemory[m_Get - this->m_nOffset];
    this->m_Get = m_Get + 1;
  }
  v5 = 0;
  while ( this->m_Error == 0 )
  {
    result = v4 == 10 && v5 != 92;
    if ( result )
      return result;
    v6 = CUtlBuffer::CheckGet(this, 1);
    v7 = 0;
    if ( v6 )
    {
      v8 = this->m_Get;
      v9 = v8 + 1;
      v7 = this->m_Memory.m_pMemory[v8 - this->m_nOffset];
      this->m_Get = v9;
    }
    v5 = v4;
    v4 = v7;
  }
  return 1;
}


// CUtlBuffer::EatCComment  (line 442, @0x0000000002f834f0, libserver.so)  // inlines: GetChar, GetTypeBin<char>, PeekGet, operator[]
// calls: CUtlBuffer::PeekGet, CUtlBuffer::CheckGet
// callers: CUtlTokenizer::ReadTokenChars
bool __fastcall CUtlBuffer::EatCComment(CUtlBuffer *const this, int *pOutSkippedNewlineCount)
{
  _BYTE *v4; // rax
  _BYTE *v6; // rax
  int m_Get; // edx
  int v8; // eax

  if ( (this->m_Flags & 1) != 0 && this->m_Error == 0 )
  {
    v4 = CUtlBuffer::PeekGet(this, 2, 0);
    if ( v4 != 0 && *v4 == 47 && v4[1] == 42 )
    {
      if ( pOutSkippedNewlineCount != 0 )
        *pOutSkippedNewlineCount = 0;
      this->m_Get += 2;
      while ( this->m_Error == 0 )
      {
        v6 = CUtlBuffer::PeekGet(this, 2, 0);
        if ( v6 == 0 )
          break;
        if ( *v6 == 42 && v6[1] == 47 )
        {
          this->m_Get += 2;
          return 1;
        }
        if ( CUtlBuffer::CheckGet(this, 1) )
        {
          m_Get = this->m_Get;
          v8 = m_Get + 1;
          LOBYTE(m_Get) = this->m_Memory.m_pMemory[m_Get - this->m_nOffset];
          this->m_Get = v8;
          if ( m_Get == 10 && pOutSkippedNewlineCount != 0 )
            ++*pOutSkippedNewlineCount;
        }
      }
    }
  }
  return 0;
}


// CUtlBuffer::PeekWhiteSpace  (line 484, @0x0000000002f82ee0, libserver.so)  // inlines: CheckPeekGet, PeekGet, operator[]
// calls: CUtlBuffer::CheckPeekGet
// callers: CUtlBuffer::PeekStringLength, CUtlBuffer::PeekDelimitedStringLength
int __fastcall CUtlBuffer::PeekWhiteSpace(CUtlBuffer *const this, int nOffset)
{
  int result; // eax
  unsigned int v5; // ecx

  result = 0;
  if ( (this->m_Flags & 1) != 0 && this->m_Error == 0 )
  {
    do
    {
      if ( !CUtlBuffer::CheckPeekGet(this, nOffset, 1) )
        break;
      v5 = this->m_Memory.m_pMemory[nOffset + this->m_Get - this->m_nOffset] - 9;
      if ( v5 > 0x17 )
        break;
      if ( ((1LL << v5) & 0x80001F) == 0 )
        break;
      ++nOffset;
    }
    while ( (this->m_Error & 2) == 0 );
    return nOffset;
  }
  return result;
}


// CUtlBuffer::PeekStringLength  (line 503, @0x0000000002f83060, libserver.so)  // inlines: PeekGet, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::PeekWhiteSpace
// callers: CUtlBuffer::PeekStringLength, CUtlBuffer::PeekDelimitedStringLength, CUtlBuffer::GetString
int __fastcall CUtlBuffer::PeekStringLength(CUtlBuffer *const this)
{
  int v1; // r15d
  int i; // r13d
  int v4; // esi
  unsigned __int8 *v5; // rax
  _BYTE *v6; // r8
  int v7; // ecx
  __int64 v8; // r8
  unsigned __int8 v9; // r9
  unsigned int v10; // ecx
  int result; // eax
  int nPeekAmount[13]; // [rsp+Ch] [rbp-34h] BYREF

  v1 = 0;
  if ( (this->m_Flags & 1) != 0 )
    v1 = CUtlBuffer::PeekWhiteSpace(this, 0);
  for ( i = v1; ; i += v4 )
  {
    while ( 1 )
    {
      nPeekAmount[0] = 128;
      if ( !CUtlBuffer::CheckArbitraryPeekGet(this, i, nPeekAmount) )
      {
        result = 0;
        if ( i != v1 )
          return i - v1 + 1;
        return result;
      }
      v4 = nPeekAmount[0];
      v5 = &this->m_Memory.m_pMemory[i + this->m_Get - this->m_nOffset];
      if ( (this->m_Flags & 1) == 0 )
        break;
      v8 = 0;
      if ( nPeekAmount[0] <= 0 )
        goto LABEL_12;
      do
      {
        v9 = v5[v8];
        v10 = v9 - 9;
        if ( v10 <= 0x17 && ((1LL << v10) & 0x80001F) != 0 || v9 == 0 )
          return i - v1 + v8 + 1;
        ++v8;
      }
      while ( nPeekAmount[0] > v8 );
      i += nPeekAmount[0];
    }
    if ( nPeekAmount[0] <= 0 )
      continue;
    if ( *v5 == 0 )
      break;
    v6 = v5 + 1;
    v7 = 0;
    while ( ++v7 != nPeekAmount[0] )
    {
      if ( *v6++ == 0 )
        return i - v1 + v7 + 1;
    }
    v4 = v7;
LABEL_12:
    ;
  }
  v7 = 0;
  return i - v1 + v7 + 1;
}


// CUtlBuffer::PeekStringLength  (line 503, @0x0000000002f831a0, libserver.so)
// calls: CUtlBuffer::PeekStringLength
// callers: CEntityKeyValues::UnserializeKeys, LoadKV3BinaryUncompressed
int __fastcall CUtlBuffer::PeekStringLength(CUtlBuffer *const this)
{
  if ( this->m_Error != 0 )
    return 0;
  else
    return CUtlBuffer::PeekStringLength(this);
}


// CUtlBuffer::PeekLineLength  (line 559, @0x0000000002f831c0, libserver.so)  // inlines: PeekGet, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet
// callers: CUtlBuffer::PeekLineLength, CUtlBuffer::GetLine, CUtlInplaceBuffer::InplaceGetLinePtr
int __fastcall CUtlBuffer::PeekLineLength(CUtlBuffer *const this)
{
  int i; // r13d
  unsigned __int8 *v3; // r8
  unsigned __int8 v4; // al
  char *v5; // r8
  int v6; // ecx
  char v7; // al
  int result; // eax
  int nPeekAmount[9]; // [rsp+Ch] [rbp-24h] BYREF

  for ( i = 0; ; i += nPeekAmount[0] )
  {
    nPeekAmount[0] = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(this, i, nPeekAmount) )
    {
      result = 0;
      if ( i != 0 )
        return i + 1;
      return result;
    }
    v3 = &this->m_Memory.m_pMemory[i + this->m_Get - this->m_nOffset];
    if ( nPeekAmount[0] <= 0 )
      continue;
    v4 = *v3;
    if ( *v3 == 13 || v4 == 10 )
      break;
    if ( v4 == 0 )
    {
      v6 = 0;
      return i + v6 + 1;
    }
    v5 = (v3 + 1);
    v6 = 0;
    while ( ++v6 != nPeekAmount[0] )
    {
      v7 = *v5;
      if ( *v5 == 13 || v7 == 10 )
        return i + v6 + 2;
      ++v5;
      if ( v7 == 0 )
        return i + v6 + 1;
    }
  }
  v6 = 0;
  return i + v6 + 2;
}


// CUtlBuffer::PeekLineLength  (line 559, @0x0000000002f83290, libserver.so)
// calls: CUtlBuffer::PeekLineLength
int __fastcall CUtlBuffer::PeekLineLength(CUtlBuffer *const this)
{
  if ( this->m_Error != 0 )
    return 0;
  else
    return CUtlBuffer::PeekLineLength(this);
}


// CUtlBuffer::PeekStringMatch  (line 600, @0x0000000002f83300, libserver.so)  // inlines: CheckPeekGet, PeekGet, V_strncmp<int>, operator[]
// calls: CUtlBuffer::CheckPeekGet, _V_strncmp
// callers: CUtlBuffer::PeekDelimitedStringLength, CUtlBuffer::GetDelimitedString
bool __fastcall CUtlBuffer::PeekStringMatch(CUtlBuffer *const this, int nOffset, const char *pString, int nLen)
{
  return (this->m_Error & 2) == 0
      && CUtlBuffer::CheckPeekGet(this, nOffset, nLen)
      && _V_strncmp(&this->m_Memory.m_pMemory[this->m_Get + nOffset - this->m_nOffset], pString, nLen) == 0;
}


// CUtlBuffer::PeekDelimitedStringLength  (line 612, @0x0000000002f83370, libserver.so)  // inlines: CheckPeekGet, GetDelimiterLength, PeekGet, PeekStringLength, operator[]
// calls: CUtlBuffer::PeekWhiteSpace, CUtlBuffer::PeekStringMatch, CUtlBuffer::CheckPeekGet, CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::PeekStringLength
// callers: Unserialize
int __fastcall CUtlBuffer::PeekDelimitedStringLength(
        CUtlBuffer *const this,
        CUtlCharConversion *pConv,
        bool bActualSize)
{
  int v6; // r12d
  int m_nDelimiterLength; // ecx
  int v8; // r13d
  int v9; // eax
  int result; // eax
  int nActualStart; // [rsp+4h] [rbp-4Ch]
  int nLength[13]; // [rsp+1Ch] [rbp-34h] BYREF

  if ( (this->m_Flags & 1) == 0 || pConv == 0 )
  {
    if ( this->m_Error == 0 )
      return CUtlBuffer::PeekStringLength(this);
    return 0;
  }
  nActualStart = CUtlBuffer::PeekWhiteSpace(this, 0);
  if ( !CUtlBuffer::PeekStringMatch(this, nActualStart, pConv->m_pDelimiter, pConv->m_nDelimiterLength) )
    return 0;
  v6 = 1;
  m_nDelimiterLength = pConv->m_nDelimiterLength;
  v8 = nActualStart + m_nDelimiterLength;
  while ( !CUtlBuffer::PeekStringMatch(this, v8, pConv->m_pDelimiter, m_nDelimiterLength)
       && (this->m_Error & 2) == 0
       && CUtlBuffer::CheckPeekGet(this, v8, 1) )
  {
    ++v6;
    v9 = v8 + this->m_Get;
    ++v8;
    if ( this->m_Memory.m_pMemory[v9 - this->m_nOffset] == pConv->m_nEscapeChar )
    {
      nLength[0] = pConv->m_nMaxConversionLength;
      if ( !CUtlBuffer::CheckArbitraryPeekGet(this, v8, nLength) )
        break;
      pConv->FindConversion(&this->m_Memory.m_pMemory[v8 + this->m_Get - this->m_nOffset], nLength);
      v8 += nLength[0];
    }
    m_nDelimiterLength = pConv->m_nDelimiterLength;
  }
  result = v6;
  if ( !bActualSize )
    return pConv->m_nDelimiterLength + v8 - nActualStart + 1;
  return result;
}


// CUtlBuffer::GetString  (line 661, @0x0000000002f83960, libserver.so)  // inlines: GetChar, GetTypeBin<char>, PeekStringLength
// calls: CUtlBuffer::PeekStringLength, CUtlBuffer::Get, CUtlBuffer::SeekGet, CUtlBuffer::CheckGet, CUtlBuffer::EatWhiteSpace
// callers: BasicGameStats_t::ParseFromBuffer, CSceneCache::Restore, KeyValues::ReadAsBinaryFilteredInternal, KeyValues::ReadAsBinaryInternal, CUtlBuffer::VaScanf, CUtlBuffer::GetDelimitedString, CCountedStringPool::RestoreFromBuffer, CEntityKeyValues::UnserializeKeys
void __fastcall CUtlBuffer::GetString(CUtlBuffer *const this, char *pString, int nMaxChars)
{
  __int64 v6; // r14

  if ( this->m_Error != 0 )
  {
    *pString = 0;
    return;
  }
  v6 = CUtlBuffer::PeekStringLength(this);
  if ( (this->m_Flags & 1) != 0 )
  {
    CUtlBuffer::EatWhiteSpace(this);
    if ( v6 != 0 )
      goto LABEL_4;
LABEL_9:
    *pString = 0;
    this->m_Error |= 2u;
    return;
  }
  if ( v6 == 0 )
    goto LABEL_9;
LABEL_4:
  if ( nMaxChars >= v6 )
  {
    CUtlBuffer::Get(this, pString, v6 - 1);
    pString[v6 - 1] = 0;
  }
  else
  {
    CUtlBuffer::Get(this, pString, nMaxChars - 1);
    pString[nMaxChars - 1] = 0;
    CUtlBuffer::SeekGet(this, CUtlBuffer::SeekType_t::SEEK_CURRENT, v6 - nMaxChars);
  }
  if ( (this->m_Flags & 1) == 0 && CUtlBuffer::CheckGet(this, 1) )
    ++this->m_Get;
}


// CUtlBuffer::GetLine  (line 712, @0x0000000002f83720, libserver.so)  // inlines: PeekLineLength
// calls: CUtlBuffer::PeekLineLength, CUtlBuffer::Get, CUtlBuffer::SeekGet
// callers: ResetConVarsFromFile, CNavPlaceDatabase::LoadPlaceDatabase
void __fastcall CUtlBuffer::GetLine(CUtlBuffer *const this, char *pLine, int nMaxChars)
{
  int v6; // eax
  __int64 v7; // r14
  int v8; // eax

  if ( this->m_Error != 0 )
  {
    *pLine = 0;
  }
  else
  {
    if ( nMaxChars != 0 )
    {
      v8 = CUtlBuffer::PeekLineLength(this);
      v7 = v8;
      if ( v8 == 0 )
        goto LABEL_4;
      if ( nMaxChars < v8 )
      {
        CUtlBuffer::Get(this, pLine, nMaxChars - 1);
        pLine[nMaxChars - 1] = 0;
        CUtlBuffer::SeekGet(this, CUtlBuffer::SeekType_t::SEEK_CURRENT, v7 - 1 - nMaxChars);
        return;
      }
    }
    else
    {
      v6 = CUtlBuffer::PeekLineLength(this);
      v7 = v6;
      if ( v6 == 0 )
      {
LABEL_4:
        *pLine = 0;
        this->m_Error |= 2u;
        return;
      }
    }
    CUtlBuffer::Get(this, pLine, v7 - 1);
    pLine[v7 - 1] = 0;
  }
}


// CUtlBuffer::GetDelimitedCharInternal  (line 756, @0x0000000002f84630, libserver.so)  // inlines: GetChar, GetTypeBin<char>, PeekGet, operator[]
// calls: CUtlBuffer::CheckGet, CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::SeekGet
// callers: CUtlBuffer::GetDelimitedChar, CUtlBuffer::GetDelimitedString
char __fastcall CUtlBuffer::GetDelimitedCharInternal(CUtlBuffer *const this, CUtlCharConversion *pConv)
{
  bool v4; // al
  unsigned __int8 v5; // dl
  int m_Get; // edx
  int v7; // eax
  char result; // al
  char v9; // r12
  int nLength[9]; // [rsp+Ch] [rbp-24h] BYREF

  v4 = CUtlBuffer::CheckGet(this, 1);
  v5 = 0;
  if ( v4 )
  {
    m_Get = this->m_Get;
    v7 = m_Get + 1;
    v5 = this->m_Memory.m_pMemory[m_Get - this->m_nOffset];
    this->m_Get = v7;
  }
  result = v5;
  if ( pConv->m_nEscapeChar == v5 )
  {
    nLength[0] = pConv->m_nMaxConversionLength;
    result = CUtlBuffer::CheckArbitraryPeekGet(this, 0, nLength);
    if ( result != 0 )
    {
      v9 = pConv->FindConversion(&this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset], nLength);
      CUtlBuffer::SeekGet(this, CUtlBuffer::SeekType_t::SEEK_CURRENT, nLength[0]);
      return v9;
    }
  }
  return result;
}


// CUtlBuffer::GetDelimitedChar  (line 772, @0x0000000002f846d0, libserver.so)  // inlines: GetChar, GetTypeBin<char>, PeekGet, operator[]
// calls: CUtlBuffer::GetDelimitedCharInternal, CUtlBuffer::CheckGet
char __fastcall CUtlBuffer::GetDelimitedChar(CUtlBuffer *const this, CUtlCharConversion *pConv)
{
  char result; // al
  int m_Get; // eax
  int v5; // edx

  if ( (this->m_Flags & 1) != 0 && pConv != 0 )
    return CUtlBuffer::GetDelimitedCharInternal(this, pConv);
  result = CUtlBuffer::CheckGet(this, 1);
  if ( result != 0 )
  {
    m_Get = this->m_Get;
    v5 = m_Get + 1;
    result = this->m_Memory.m_pMemory[m_Get - this->m_nOffset];
    this->m_Get = v5;
  }
  return result;
}


// CUtlBuffer::GetDelimitedString  (line 779, @0x0000000002f84730, libserver.so)
// calls: CUtlBuffer::GetString, CUtlBuffer::EatWhiteSpace, CUtlBuffer::PeekStringMatch, CUtlBuffer::SeekGet, CUtlBuffer::GetDelimitedCharInternal
// callers: CKeyValuesTokenReader::ReadToken, Unserialize
void __fastcall CUtlBuffer::GetDelimitedString(
        CUtlBuffer *const this,
        CUtlCharConversion *pConv,
        char *pString,
        int nMaxChars)
{
  int v8; // r13d
  char DelimitedCharInternal; // al
  __int64 v10; // rsi
  __int64 v11; // [rsp+8h] [rbp-38h]

  if ( (this->m_Flags & 1) != 0 && pConv != 0 )
  {
    if ( this->m_Error != 0
      || (CUtlBuffer::EatWhiteSpace(this),
          !CUtlBuffer::PeekStringMatch(this, 0, pConv->m_pDelimiter, pConv->m_nDelimiterLength)) )
    {
      *pString = 0;
    }
    else
    {
      CUtlBuffer::SeekGet(this, CUtlBuffer::SeekType_t::SEEK_CURRENT, pConv->m_nDelimiterLength);
      v11 = 0;
LABEL_8:
      v8 = v11;
      while ( this->m_Error == 0 )
      {
        if ( CUtlBuffer::PeekStringMatch(this, 0, pConv->m_pDelimiter, pConv->m_nDelimiterLength) )
        {
          CUtlBuffer::SeekGet(this, CUtlBuffer::SeekType_t::SEEK_CURRENT, pConv->m_nDelimiterLength);
          break;
        }
        DelimitedCharInternal = CUtlBuffer::GetDelimitedCharInternal(this, pConv);
        if ( nMaxChars > v11 )
        {
          v10 = v11++;
          pString[v10] = DelimitedCharInternal;
          goto LABEL_8;
        }
      }
      if ( nMaxChars <= v11 )
        v8 = nMaxChars - 1;
      pString[v8] = 0;
    }
  }
  else
  {
    CUtlBuffer::GetString(this, pString, nMaxChars);
  }
}


// CUtlBuffer::CheckGet  (line 832, @0x0000000002f82d50, libserver.so)
// calls: CUtlBuffer::OnGetOverflow
// callers: ProtoBufHelper::ParseJSON, BasicGameStatsRecord_t::ParseFromBuffer, CUtlBuffer::GetType<int>, BasicGameStats_t::ParseFromBuffer, CBaseGameStats::LoadFromFile, CSceneCache::Restore, CGridNavBase::LoadDataFromBuffer, CNavAreaExtended::Load, CKeyValuesTokenReader::ReadToken, KeyValues::ReadAsBinaryFilteredInternal, KeyValues::ReadAsBinaryInternal, CUtlBuffer::Get (60 total)
bool __fastcall CUtlBuffer::CheckGet(CUtlBuffer *const this, int nSize)
{
  bool result; // al
  unsigned __int8 m_Error; // dl
  int m_Get; // ecx
  int m_nOffset; // eax
  int v7; // ecx

  result = 0;
  m_Error = this->m_Error;
  if ( (m_Error & 2) == 0 )
  {
    m_Get = this->m_Get;
    if ( this->m_nMaxPut < m_Get + nSize )
    {
      this->m_Error = m_Error | 2;
    }
    else
    {
      m_nOffset = this->m_nOffset;
      if ( m_Get < m_nOffset || (v7 = m_Get - m_nOffset, result = 1, this->m_Memory.m_nAllocationCount < nSize + v7) )
      {
        result = CUtlBuffer::OnGetOverflow(this, nSize);
        if ( !result )
          this->m_Error |= 2u;
      }
    }
  }
  return result;
}


// CUtlBuffer::CheckPeekGet  (line 859, @0x0000000002f82ea0, libserver.so)
// calls: CUtlBuffer::CheckGet
// callers: CUtlBuffer::CheckPeekGet, CUtlBuffer::PeekWhiteSpace, CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::PeekGet, CUtlBuffer::PeekStringMatch, CUtlBuffer::PeekDelimitedStringLength, CUtlBuffer::GetToken, CUtlBuffer::VaScanf
bool __fastcall CUtlBuffer::CheckPeekGet(CUtlBuffer *const this, int nOffset, int nSize)
{
  bool result; // al

  result = CUtlBuffer::CheckGet(this, nSize + nOffset);
  this->m_Error &= ~2u;
  return result;
}


// CUtlBuffer::CheckPeekGet  (line 859, @0x0000000002f82ec0, libserver.so)
// calls: CUtlBuffer::CheckPeekGet
bool __fastcall CUtlBuffer::CheckPeekGet(CUtlBuffer *const this, int nOffset, int nSize)
{
  return (this->m_Error & 2) == 0 && CUtlBuffer::CheckPeekGet(this, nOffset, nSize);
}


// CUtlBuffer::CheckArbitraryPeekGet  (line 875, @0x0000000002f82f70, libserver.so)  // inlines: CheckPeekGet
// calls: CUtlBuffer::CheckPeekGet
// callers: BasicGameStatsRecord_t::ParseFromBuffer, CUtlBuffer::GetType<int>, BasicGameStats_t::ParseFromBuffer, CBaseGameStats::LoadFromFile, CSceneCache::Restore, CGridNavBase::LoadDataFromBuffer, CNavAreaExtended::Load, KeyValues::ReadAsBinaryFilteredInternal, KeyValues::ReadAsBinaryInternal, CUtlBuffer::GetUpTo, CUtlBuffer::PeekStringLength, CUtlBuffer::PeekLineLength (50 total)
bool __fastcall CUtlBuffer::CheckArbitraryPeekGet(CUtlBuffer *const this, int nOffset, int *const nIncrement)
{
  int m_Get; // edi
  int m_nMaxPut; // ecx
  int v7; // eax
  int v8; // ecx

  m_Get = this->m_Get;
  m_nMaxPut = this->m_nMaxPut;
  if ( m_Get + nOffset < m_nMaxPut )
  {
    v7 = *nIncrement;
    if ( m_nMaxPut < *nIncrement + m_Get + nOffset )
    {
      v7 = m_nMaxPut - m_Get - nOffset;
      *nIncrement = v7;
    }
    if ( (this->m_Error & 2) != 0 )
    {
      v8 = this->m_nMaxPut - this->m_Get;
      if ( v8 >= v7 )
        return v7 != 0;
    }
    else
    {
      CUtlBuffer::CheckPeekGet(this, nOffset, v7);
      v7 = *nIncrement;
      v8 = this->m_nMaxPut - this->m_Get;
      if ( v8 >= *nIncrement )
        return v7 != 0;
    }
    *nIncrement = v8;
    v7 = v8;
    return v7 != 0;
  }
  *nIncrement = 0;
  return 0;
}


// CUtlBuffer::PeekGet  (line 903, @0x0000000002f832b0, libserver.so)  // inlines: CheckPeekGet, operator[]
// calls: CUtlBuffer::CheckPeekGet
// callers: CKeyValuesTokenReader::ReadToken, CUtlBuffer::EatCComment, CUtlBuffer::EatCPPComment, EatWhiteSpaceCountingLines, ConsumeMultilineStringDelimiter, CUtlTokenizer::ReadTokenChars
const void *__fastcall CUtlBuffer::PeekGet(CUtlBuffer *const this, int nMaxSize, int nOffset)
{
  if ( (this->m_Error & 2) != 0 || !CUtlBuffer::CheckPeekGet(this, nOffset, nMaxSize) )
    return 0;
  else
    return &this->m_Memory.m_pMemory[nOffset + this->m_Get - this->m_nOffset];
}


// CUtlBuffer::SeekGet  (line 918, @0x0000000002f836a0, libserver.so)
// calls: CUtlBuffer::OnGetOverflow
// callers: CSaveRestoreFileSystem::Seek, CSaveRestoreFileSystem::Compress, CSaveRestoreFileSystem::Uncompress, KeyValues::IsValidBinaryKVBuffer, CUtlBuffer::GetLine, CUtlBuffer::GetToken, CUtlBuffer::GetString, CUtlBuffer::GetDelimitedCharInternal, CUtlBuffer::GetDelimitedString, CUtlBuffer::ParseToken, CUtlBuffer::ConvertCRLF, CUtlInplaceBuffer::InplaceGetLinePtr (26 total)
void __fastcall CUtlBuffer::SeekGet(CUtlBuffer *const this, CUtlBuffer::SeekType_t type, int offset)
{
  int m_nMaxPut; // eax
  int m_nOffset; // eax

  switch ( type )
  {
    case CUtlBuffer::SeekType_t::SEEK_CURRENT:
      offset += this->m_Get;
      goto LABEL_8;
    case CUtlBuffer::SeekType_t::SEEK_TAIL:
      m_nMaxPut = this->m_nMaxPut;
      offset = m_nMaxPut - offset;
      this->m_Get = offset;
LABEL_9:
      if ( offset > m_nMaxPut )
        goto LABEL_5;
      goto LABEL_10;
    case CUtlBuffer::SeekType_t::SEEK_HEAD:
LABEL_8:
      m_nMaxPut = this->m_nMaxPut;
      this->m_Get = offset;
      goto LABEL_9;
    default:
      break;
  }
  offset = this->m_Get;
  if ( offset > this->m_nMaxPut )
  {
LABEL_5:
    this->m_Error |= 2u;
    return;
  }
LABEL_10:
  m_nOffset = this->m_nOffset;
  this->m_Error &= ~2u;
  if ( m_nOffset > offset || this->m_Memory.m_nAllocationCount + m_nOffset <= offset )
    CUtlBuffer::OnGetOverflow(this, -1);
}


// CUtlBuffer::VaScanf  (line 956, @0x0000000002f83a50, libserver.so)  // inlines: CheckPeekGet, GetTypeText<double>, GetTypeText<float>, GetTypeText<int>, GetTypeText<long long int>, GetTypeText<long long unsigned int>, GetTypeText<short int>, GetTypeText<short unsigned int>, GetTypeText<signed char>, GetTypeText<unsigned char>, GetTypeText<unsigned int>, PeekGet, StringToNumber<double>, StringToNumber<float>, StringToNumber<int>, StringToNumber<long long int>, StringToNumber<long long unsigned int>, StringToNumber<short int>, StringToNumber<short unsigned int>, StringToNumber<signed char>, StringToNumber<unsigned char>, StringToNumber<unsigned int>, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::CheckPeekGet, CUtlBuffer::EatWhiteSpace, V_strtoui64, CUtlBuffer::GetString, V_strtod, V_strtoi64
// callers: CUtlBuffer::Scanf
// globals: jpt_2F83AF8
int __fastcall CUtlBuffer::VaScanf(CUtlBuffer *const this, const char *pFmt, ___va_list_tag *list)
{
  int result; // eax
  int v7; // r12d
  char v8; // r14
  const char *v9; // r13
  char v10; // al
  const char *v11; // r14
  char v12; // al
  unsigned int v13; // eax
  __int64 **v14; // rdx
  __int64 *v15; // r14
  char v16; // al
  char v17; // al
  unsigned int v18; // eax
  _QWORD *v19; // rdx
  _BYTE *v20; // rax
  _BYTE *v21; // r13
  unsigned int v22; // eax
  _QWORD *v23; // rdx
  _DWORD *v24; // rax
  _DWORD *v25; // r13
  unsigned int v26; // eax
  _QWORD *v27; // rdx
  _DWORD *v28; // rax
  __int64 v29; // rdx
  unsigned __int8 *v30; // r13
  int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  char **v34; // rsi
  unsigned int v35; // eax
  _QWORD *v36; // rdx
  _DWORD *v37; // rax
  _DWORD *v38; // r13
  unsigned int v39; // eax
  _QWORD *v40; // rdx
  _DWORD *v41; // rax
  _DWORD *v42; // r13
  char v43; // al
  char v44; // al
  unsigned int v45; // eax
  _QWORD *v46; // rdx
  _QWORD *v47; // rax
  _QWORD *v48; // r13
  unsigned int v49; // eax
  char **v50; // rdx
  char *v51; // r8
  bool v52; // al
  unsigned int v53; // eax
  _QWORD *v54; // rdx
  _WORD *v55; // rax
  _WORD *v56; // r13
  int v57; // r13d
  __m128d v58; // xmm0
  int v59; // edx
  unsigned int v60; // edx
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // r13
  unsigned int v64; // edx
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  int v67; // r13d
  unsigned int gp_offset; // edx
  __int64 **overflow_arg_area; // rax
  unsigned __int8 *v70; // r13
  __int64 v71; // rax
  unsigned int v72; // edx
  __int64 **v73; // rax
  __int64 v74; // rdx
  int v75; // r13d
  int v76; // eax
  unsigned int v77; // edx
  _QWORD *v78; // rax
  _BYTE *v79; // rax
  int v80; // r13d
  char v81; // al
  unsigned int v82; // edx
  _QWORD *v83; // rax
  _WORD *v84; // rax
  int v85; // r13d
  int v86; // r13d
  unsigned int v87; // edx
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // rdx
  unsigned __int8 *v91; // r13
  char *ch_0; // [rsp+8h] [rbp-58h]
  char *ch_0a; // [rsp+8h] [rbp-58h]
  char *ch_0b; // [rsp+8h] [rbp-58h]
  char *ch_0c; // [rsp+8h] [rbp-58h]
  char *ch_0d; // [rsp+8h] [rbp-58h]
  char *ch_0e; // [rsp+8h] [rbp-58h]
  char *ch_0f; // [rsp+8h] [rbp-58h]
  char *ch_0g; // [rsp+8h] [rbp-58h]
  char *ch_0h; // [rsp+8h] [rbp-58h]
  char *ch_0i; // [rsp+8h] [rbp-58h]
  int v102; // [rsp+24h] [rbp-3Ch] BYREF
  _QWORD v103[7]; // [rsp+28h] [rbp-38h] BYREF

  result = 0;
  if ( this->m_Error == 0 && (this->m_Flags & 1) != 0 )
  {
    v7 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v8 = *pFmt;
          v9 = pFmt + 1;
          if ( *pFmt == 0 )
            return v7;
          if ( this->m_Get >= this->m_nMaxPut )
          {
            this->m_Error |= 2u;
            return v7;
          }
          if ( v8 != 32 )
            break;
          CUtlBuffer::EatWhiteSpace(this);
          pFmt = v9;
        }
        if ( v8 == 37 )
          break;
        if ( (this->m_Error & 2) != 0
          || !CUtlBuffer::CheckPeekGet(this, 0, 1)
          || v8 != this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset] )
        {
          return v7;
        }
        pFmt = v9;
        ++this->m_Get;
      }
      v10 = pFmt[1];
      v11 = pFmt + 2;
      if ( v10 == 0 )
        return v7;
      switch ( v10 )
      {
        case 'I':
          if ( pFmt[2] != 54 || pFmt[3] != 52 )
            return v7;
          v12 = pFmt[4];
          if ( v12 == 100 )
          {
            gp_offset = list->gp_offset;
            if ( list->gp_offset >= 0x30 )
            {
              overflow_arg_area = list->overflow_arg_area;
              list->overflow_arg_area = overflow_arg_area + 1;
            }
            else
            {
              overflow_arg_area = (list->reg_save_area + gp_offset);
              list->gp_offset = gp_offset + 8;
            }
            ch_0 = pFmt;
            v15 = *overflow_arg_area;
            v102 = 128;
            if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v102) )
              goto LABEL_18;
            v103[0] = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
            LODWORD(v70) = v103[0];
            v71 = V_strtoi64(v103[0], v103, 10);
          }
          else
          {
            if ( v12 == 117 )
            {
              v72 = list->gp_offset;
              if ( list->gp_offset >= 0x30 )
              {
                v73 = list->overflow_arg_area;
                list->overflow_arg_area = v73 + 1;
              }
              else
              {
                v73 = (list->reg_save_area + v72);
                list->gp_offset = v72 + 8;
              }
              ch_0 = pFmt;
              v15 = *v73;
              v102 = 128;
              if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v102) )
                goto LABEL_18;
              v74 = 10;
              v70 = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
              v103[0] = v70;
            }
            else
            {
              if ( v12 != 120 )
                return v7;
              v13 = list->gp_offset;
              if ( list->gp_offset >= 0x30 )
              {
                v14 = list->overflow_arg_area;
                list->overflow_arg_area = v14 + 1;
              }
              else
              {
                v14 = (list->reg_save_area + v13);
                list->gp_offset = v13 + 8;
              }
              v15 = *v14;
              ch_0 = pFmt;
              v102 = 128;
              if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v102) )
              {
LABEL_18:
                *v15 = 0;
                return v7;
              }
              v74 = 16;
              v70 = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
              v103[0] = v70;
            }
            v71 = V_strtoui64(v70, v103, v74);
          }
          *v15 = v71;
          if ( LODWORD(v103[0]) == v70 )
            return v7;
          this->m_Get += LODWORD(v103[0]) - v70;
          pFmt = ch_0 + 5;
          goto LABEL_47;
        case 'c':
          v49 = list->gp_offset;
          if ( list->gp_offset >= 0x30 )
          {
            v50 = list->overflow_arg_area;
            list->overflow_arg_area = v50 + 1;
          }
          else
          {
            v50 = (list->reg_save_area + v49);
            list->gp_offset = v49 + 8;
          }
          v51 = *v50;
          if ( (this->m_Error & 2) != 0 || (ch_0e = *v50, v52 = CUtlBuffer::CheckPeekGet(this, 0, 1), v51 = ch_0e, !v52) )
          {
            *v51 = 0;
            return v7;
          }
          *ch_0e = this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
          pFmt = v11;
          ++this->m_Get;
          goto LABEL_47;
        case 'd':
        case 'i':
          v35 = list->gp_offset;
          if ( list->gp_offset >= 0x30 )
          {
            v36 = list->overflow_arg_area;
            list->overflow_arg_area = v36 + 1;
          }
          else
          {
            v36 = list->reg_save_area + v35;
            list->gp_offset = v35 + 8;
          }
          v37 = *v36;
          v102 = 128;
          v38 = v37;
          ch_0b = v37;
          if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v102) )
          {
            *v38 = 0;
            return v7;
          }
          v103[0] = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
          LODWORD(v30) = v103[0];
          v31 = V_strtoi64(v103[0], v103, 10);
LABEL_45:
          *ch_0b = v31;
          v32 = LODWORD(v103[0]) - v30;
          if ( LODWORD(v103[0]) == v30 )
            return v7;
          goto LABEL_46;
        case 'f':
          v39 = list->gp_offset;
          if ( list->gp_offset >= 0x30 )
          {
            v40 = list->overflow_arg_area;
            list->overflow_arg_area = v40 + 1;
          }
          else
          {
            v40 = list->reg_save_area + v39;
            list->gp_offset = v39 + 8;
          }
          v41 = *v40;
          v102 = 128;
          v42 = v41;
          ch_0c = v41;
          if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v102) )
          {
            *v42 = 0;
            return v7;
          }
          v103[0] = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
          v57 = v103[0];
          v58.m128d_f64[0] = V_strtod(v103[0], v103);
          *ch_0c = _mm_movedup_pd(v58).m128d_f64[0];
          v59 = LODWORD(v103[0]) - v57;
          if ( LODWORD(v103[0]) == v57 )
            return v7;
          goto LABEL_85;
        case 'h':
          v16 = pFmt[2];
          switch ( v16 )
          {
            case 'i':
            case 'd':
              v53 = list->gp_offset;
              if ( list->gp_offset >= 0x30 )
              {
                v54 = list->overflow_arg_area;
                list->overflow_arg_area = v54 + 1;
              }
              else
              {
                v54 = list->reg_save_area + v53;
                list->gp_offset = v53 + 8;
              }
              v55 = *v54;
              v102 = 128;
              v56 = v55;
              ch_0f = v55;
              if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v102) )
              {
LABEL_76:
                *v56 = 0;
                return v7;
              }
              v103[0] = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
              v75 = v103[0];
              *ch_0f = V_strtoi64(v103[0], v103, 10);
              v76 = LODWORD(v103[0]) - v75;
              if ( LODWORD(v103[0]) == v75 )
                return v7;
              break;
            case 'u':
              v82 = list->gp_offset;
              if ( list->gp_offset >= 0x30 )
              {
                v83 = list->overflow_arg_area;
                list->overflow_arg_area = v83 + 1;
              }
              else
              {
                v83 = list->reg_save_area + v82;
                list->gp_offset = v82 + 8;
              }
              v84 = *v83;
              v102 = 128;
              v56 = v84;
              ch_0i = v84;
              if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v102) )
                goto LABEL_76;
              v103[0] = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
              v85 = v103[0];
              *ch_0i = V_strtoui64(v103[0], v103, 10);
              v76 = LODWORD(v103[0]) - v85;
              if ( LODWORD(v103[0]) == v85 )
                return v7;
              break;
            case 'h':
              v17 = pFmt[3];
              v11 = pFmt + 3;
              if ( v17 == 105 || v17 == 100 )
              {
                v18 = list->gp_offset;
                if ( list->gp_offset >= 0x30 )
                {
                  v19 = list->overflow_arg_area;
                  list->overflow_arg_area = v19 + 1;
                }
                else
                {
                  v19 = list->reg_save_area + v18;
                  list->gp_offset = v18 + 8;
                }
                v20 = *v19;
                v102 = 128;
                v21 = v20;
                ch_0a = v20;
                if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v102) )
                  goto LABEL_29;
                v103[0] = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
                v80 = v103[0];
                v81 = V_strtoi64(v103[0], v103, 10);
              }
              else
              {
                if ( v17 != 117 )
                  goto LABEL_114;
                v77 = list->gp_offset;
                if ( list->gp_offset >= 0x30 )
                {
                  v78 = list->overflow_arg_area;
                  list->overflow_arg_area = v78 + 1;
                }
                else
                {
                  v78 = list->reg_save_area + v77;
                  list->gp_offset = v77 + 8;
                }
                v79 = *v78;
                v102 = 128;
                v21 = v79;
                ch_0a = v79;
                if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v102) )
                {
LABEL_29:
                  *v21 = 0;
                  return v7;
                }
                v103[0] = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
                v80 = v103[0];
                v81 = V_strtoui64(v103[0], v103, 10);
              }
              *ch_0a = v81;
              v76 = LODWORD(v103[0]) - v80;
              if ( LODWORD(v103[0]) == v80 )
                return v7;
              break;
            default:
              return v7;
          }
          this->m_Get += v76;
LABEL_114:
          pFmt = v11 + 1;
LABEL_47:
          ++v7;
          break;
        case 'l':
          v43 = pFmt[2];
          v11 = pFmt + 3;
          if ( v43 == 102 )
          {
            v60 = list->gp_offset;
            if ( list->gp_offset >= 0x30 )
            {
              v61 = list->overflow_arg_area;
              list->overflow_arg_area = v61 + 1;
            }
            else
            {
              v61 = list->reg_save_area + v60;
              list->gp_offset = v60 + 8;
            }
            v62 = *v61;
            v102 = 128;
            v63 = v62;
            ch_0g = v62;
            if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v102) )
            {
              *v63 = 0;
              return v7;
            }
            v103[0] = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
            v86 = v103[0];
            *ch_0g = V_strtod(v103[0], v103);
            v59 = LODWORD(v103[0]) - v86;
            if ( LODWORD(v103[0]) == v86 )
              return v7;
LABEL_85:
            this->m_Get += v59;
            pFmt = v11;
          }
          else
          {
            if ( v43 != 108 )
              return v7;
            v44 = pFmt[3];
            if ( v44 == 100 )
            {
              v64 = list->gp_offset;
              if ( list->gp_offset >= 0x30 )
              {
                v65 = list->overflow_arg_area;
                list->overflow_arg_area = v65 + 1;
              }
              else
              {
                v65 = list->reg_save_area + v64;
                list->gp_offset = v64 + 8;
              }
              v66 = *v65;
              v102 = 128;
              v48 = v66;
              ch_0h = v66;
              if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v102) )
                goto LABEL_67;
              v103[0] = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
              v67 = v103[0];
              *ch_0h = V_strtoi64(v103[0], v103, 10);
              v32 = LODWORD(v103[0]) - v67;
              if ( LODWORD(v103[0]) == v67 )
                return v7;
            }
            else
            {
              if ( v44 == 117 )
              {
                v87 = list->gp_offset;
                if ( list->gp_offset >= 0x30 )
                {
                  v88 = list->overflow_arg_area;
                  list->overflow_arg_area = v88 + 1;
                }
                else
                {
                  v88 = list->reg_save_area + v87;
                  list->gp_offset = v87 + 8;
                }
                v89 = *v88;
                v102 = 128;
                v48 = v89;
                ch_0d = v89;
                if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v102) )
                  goto LABEL_67;
                v90 = 10;
                v91 = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
                v103[0] = v91;
              }
              else
              {
                if ( v44 != 120 )
                  return v7;
                v45 = list->gp_offset;
                if ( list->gp_offset >= 0x30 )
                {
                  v46 = list->overflow_arg_area;
                  list->overflow_arg_area = v46 + 1;
                }
                else
                {
                  v46 = list->reg_save_area + v45;
                  list->gp_offset = v45 + 8;
                }
                v47 = *v46;
                v102 = 128;
                v48 = v47;
                ch_0d = v47;
                if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v102) )
                {
LABEL_67:
                  *v48 = 0;
                  return v7;
                }
                v90 = 16;
                v91 = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
                v103[0] = v91;
              }
              *ch_0d = V_strtoui64(v91, v103, v90);
              v32 = LODWORD(v103[0]) - v91;
              if ( LODWORD(v103[0]) == v91 )
                return v7;
            }
LABEL_46:
            this->m_Get += v32;
            pFmt = v11;
          }
          goto LABEL_47;
        case 's':
          v33 = list->gp_offset;
          if ( list->gp_offset >= 0x30 )
          {
            v34 = list->overflow_arg_area;
            list->overflow_arg_area = v34 + 1;
          }
          else
          {
            v34 = (list->reg_save_area + v33);
            list->gp_offset = v33 + 8;
          }
          CUtlBuffer::GetString(this, *v34, 300);
          pFmt = v11;
          goto LABEL_47;
        case 'u':
          v26 = list->gp_offset;
          if ( list->gp_offset >= 0x30 )
          {
            v27 = list->overflow_arg_area;
            list->overflow_arg_area = v27 + 1;
          }
          else
          {
            v27 = list->reg_save_area + v26;
            list->gp_offset = v26 + 8;
          }
          v28 = *v27;
          v102 = 128;
          v25 = v28;
          ch_0b = v28;
          if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v102) )
            goto LABEL_39;
          v29 = 10;
          v30 = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
          v103[0] = v30;
          goto LABEL_44;
        case 'x':
          v22 = list->gp_offset;
          if ( list->gp_offset >= 0x30 )
          {
            v23 = list->overflow_arg_area;
            list->overflow_arg_area = v23 + 1;
          }
          else
          {
            v23 = list->reg_save_area + v22;
            list->gp_offset = v22 + 8;
          }
          v24 = *v23;
          v102 = 128;
          v25 = v24;
          ch_0b = v24;
          if ( !CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v102) )
          {
LABEL_39:
            *v25 = 0;
            return v7;
          }
          v29 = 16;
          v30 = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
          v103[0] = v30;
LABEL_44:
          v31 = V_strtoui64(v30, v103, v29);
          goto LABEL_45;
        default:
          return v7;
      }
    }
  }
  return result;
}


// CUtlBuffer::Scanf  (line 1183, @0x0000000002f845a0, libserver.so)
// calls: CUtlBuffer::VaScanf
// callers: Unserialize
int CUtlBuffer::Scanf(CUtlBuffer *const this, const char *pFmt, ...)
{
  va_list args; // [rsp+8h] [rbp-C8h] BYREF

  va_start(args, pFmt);
  return CUtlBuffer::VaScanf(this, pFmt, args);
}


// CUtlBuffer::GetToken  (line 1199, @0x0000000002f837e0, libserver.so)  // inlines: CheckPeekGet, PeekGet, V_strlen, V_strnistr_fast<int>, operator[]
// calls: strlen, CUtlBuffer::SeekGet, CUtlBuffer::CheckPeekGet, _V_strnistr_fast
// callers: CUtlBuffer::ParseToken
bool __fastcall CUtlBuffer::GetToken(CUtlBuffer *const this, const char *pToken)
{
  int v3; // r12d
  int m_nAllocationCount; // r15d
  int m_Get; // eax
  int v6; // ebx
  int v7; // ebx
  bool v8; // zf
  bool v9; // sf
  bool v10; // of
  unsigned int v11; // r13d
  bool v12; // r15
  __int64 v13; // rax
  int v14; // edx
  const char *pBufStart; // [rsp+10h] [rbp-40h]
  int offset; // [rsp+18h] [rbp-38h]
  bool bOverFlow; // [rsp+1Fh] [rbp-31h]

  if ( pToken != 0 )
    v3 = strlen(pToken);
  else
    v3 = 0;
  m_nAllocationCount = this->m_Memory.m_nAllocationCount;
  m_Get = this->m_Get;
  offset = m_Get;
  if ( this->m_nOffset + m_nAllocationCount - m_Get > v3 )
    m_nAllocationCount = this->m_nOffset + this->m_Memory.m_nAllocationCount - m_Get;
  v6 = this->m_nMaxPut - m_Get;
  while ( v6 >= v3 )
  {
    v10 = __OFSUB__(v6, m_nAllocationCount);
    v8 = v6 == m_nAllocationCount;
    v9 = v6 - m_nAllocationCount < 0;
    if ( v6 <= m_nAllocationCount )
      m_nAllocationCount = v6;
    bOverFlow = !(v9 ^ v10 | v8);
    v11 = m_nAllocationCount;
    if ( (this->m_Error & 2) != 0 )
      break;
    v12 = CUtlBuffer::CheckPeekGet(this, 0, m_nAllocationCount);
    if ( !v12 )
      break;
    pBufStart = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
    v13 = _V_strnistr_fast(pBufStart, pToken, v11);
    v14 = v13 - pBufStart;
    if ( bOverFlow && this->m_Memory.m_nAllocationCount - v3 == v14 )
    {
      v7 = v6 - v11;
      if ( v13 != 0 )
        goto LABEL_9;
    }
    else
    {
      if ( v13 != 0 )
      {
        CUtlBuffer::SeekGet(this, CUtlBuffer::SeekType_t::SEEK_CURRENT, v3 + v14);
        return v12;
      }
      v7 = v6 - v11;
    }
    if ( v7 < v3 )
      break;
LABEL_9:
    v6 = v3 + v7;
    m_nAllocationCount = this->m_Memory.m_nAllocationCount;
    CUtlBuffer::SeekGet(this, CUtlBuffer::SeekType_t::SEEK_CURRENT, v11 - v3);
  }
  v12 = 0;
  CUtlBuffer::SeekGet(this, CUtlBuffer::SeekType_t::SEEK_HEAD, offset);
  return v12;
}


// CUtlBuffer::ParseToken  (line 1267, @0x0000000002f84860, libserver.so)  // inlines: FastASCIIToLower<int>, GetChar, GetTypeBin<char>, PeekGet, V_strlen, operator[]
// calls: strlen, CUtlBuffer::EatWhiteSpace, CUtlBuffer::GetToken, CUtlBuffer::SeekGet, CUtlBuffer::CheckGet, CUtlBuffer::Get
bool __fastcall CUtlBuffer::ParseToken(
        CUtlBuffer *const this,
        const char *pStartingDelim,
        const char *pEndingDelim,
        char *pString,
        int nMaxLen)
{
  unsigned __int8 *p_emptyBuf; // r15
  unsigned __int8 v8; // r14
  unsigned int v9; // ecx
  int v10; // r12d
  bool Token; // r14
  int v13; // eax
  int v14; // edx
  int m_Get; // eax
  int v16; // ecx
  int v17; // r8d
  int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // ecx
  int nEndingDelimLen; // [rsp+8h] [rbp-58h]
  int nEndingDelimLena; // [rsp+8h] [rbp-58h]
  int nCharsToCopya; // [rsp+10h] [rbp-50h]
  int offset; // [rsp+1Ch] [rbp-44h]
  char emptyBuf; // [rsp+2Fh] [rbp-31h] BYREF

  p_emptyBuf = pStartingDelim;
  if ( pStartingDelim == 0 )
    p_emptyBuf = &emptyBuf;
  emptyBuf = 0;
  if ( pEndingDelim != 0 )
    nEndingDelimLen = strlen(pEndingDelim);
  else
    nEndingDelimLen = 0;
  offset = this->m_Get;
  CUtlBuffer::EatWhiteSpace(this);
  while ( 1 )
  {
    v8 = *p_emptyBuf;
    if ( *p_emptyBuf == 0 )
      break;
    while ( 1 )
    {
      ++p_emptyBuf;
      v9 = v8 - 9;
      if ( v9 > 0x17 || ((1LL << v9) & 0x80001F) == 0 )
        break;
      CUtlBuffer::EatWhiteSpace(this);
      v8 = *p_emptyBuf;
      if ( *p_emptyBuf == 0 )
        goto LABEL_10;
    }
    if ( CUtlBuffer::CheckGet(this, 1) )
    {
      m_Get = this->m_Get;
      v16 = m_Get + 1;
      v13 = this->m_Memory.m_pMemory[m_Get - this->m_nOffset];
      this->m_Get = v16;
      if ( (v13 - 65) <= 0x19 )
        v13 += 32;
    }
    else
    {
      v13 = 0;
    }
    v14 = v8;
    if ( (v8 - 65) <= 0x19 )
      v14 = v8 + 32;
    if ( v13 != v14 )
      goto parseFailed;
  }
LABEL_10:
  CUtlBuffer::EatWhiteSpace(this);
  v10 = this->m_Get;
  Token = CUtlBuffer::GetToken(this, pEndingDelim);
  if ( !Token )
  {
parseFailed:
    Token = 0;
    CUtlBuffer::SeekGet(this, CUtlBuffer::SeekType_t::SEEK_HEAD, offset);
    *pString = 0;
    return Token;
  }
  v17 = this->m_Get;
  v18 = v17 - nEndingDelimLen - v10;
  if ( v18 >= nMaxLen )
    v18 = nMaxLen - 1;
  v19 = v18;
  if ( v18 > 0 )
  {
    nEndingDelimLena = this->m_Get;
    nCharsToCopya = v18;
    CUtlBuffer::SeekGet(this, CUtlBuffer::SeekType_t::SEEK_HEAD, v10);
    CUtlBuffer::Get(this, pString, nCharsToCopya);
    v17 = nEndingDelimLena;
    if ( this->m_Error != 0 )
      goto parseFailed;
    v19 = nCharsToCopya;
    while ( 1 )
    {
      v20 = pString[v19 - 1] - 9;
      if ( v20 > 0x17 || ((1LL << v20) & 0x80001F) == 0 )
        break;
      if ( --v19 == nCharsToCopya - 1LL - (nCharsToCopya - 1) )
      {
        v19 = 0;
        break;
      }
    }
  }
  pString[v19] = 0;
  CUtlBuffer::SeekGet(this, CUtlBuffer::SeekType_t::SEEK_HEAD, v17);
  return Token;
}


// CUtlBuffer::ParseToken  (line 1346, @0x0000000002f84a60, libserver.so)  // inlines: GetChar, GetTypeBin<char>, PeekGet, operator[]
// calls: CUtlBuffer::EatWhiteSpace, CUtlBuffer::EatCPPComment, CUtlBuffer::CheckGet, CUtlBuffer::SeekGet
// callers: CCommand::Tokenize
int __fastcall CUtlBuffer::ParseToken(
        CUtlBuffer *const this,
        characterset_t *pBreaks,
        char *pTokenBuf,
        int nMaxLen,
        bool bParseComments)
{
  int m_Get; // edx
  int v11; // eax
  unsigned __int8 v12; // dl
  char *v13; // r15
  int v14; // r14d
  bool v15; // al
  int v16; // edx
  int v17; // eax
  char *v18; // r13
  int v19; // r15d
  int v20; // eax
  int v21; // edx
  unsigned __int8 v22; // al
  int nLen; // [rsp+4h] [rbp-3Ch]

  *pTokenBuf = 0;
  do
  {
    if ( this->m_Error != 0 )
      return -1;
    CUtlBuffer::EatWhiteSpace(this);
  }
  while ( bParseComments && CUtlBuffer::EatCPPComment(this) );
  if ( !CUtlBuffer::CheckGet(this, 1) )
    return -1;
  m_Get = this->m_Get;
  v11 = m_Get + 1;
  v12 = this->m_Memory.m_pMemory[m_Get - this->m_nOffset];
  this->m_Get = v11;
  if ( v12 == 0 )
    return -1;
  if ( v12 == 34 )
  {
    v18 = pTokenBuf;
    v19 = 0;
    do
    {
      if ( this->m_Error != 0
        || !CUtlBuffer::CheckGet(this, 1)
        || (v20 = this->m_Get,
            v21 = v20 + 1,
            v22 = this->m_Memory.m_pMemory[v20 - this->m_nOffset],
            this->m_Get = v21,
            v22 == 0)
        || v22 == 34 )
      {
        pTokenBuf[v19] = 0;
        return v19;
      }
      *v18++ = v22;
      ++v19;
    }
    while ( v18 != &pTokenBuf[nMaxLen - 1 + 1] );
    pTokenBuf[v19 - 1] = 0;
    return nMaxLen;
  }
  else if ( pBreaks->set[v12] != 0 )
  {
    *pTokenBuf = v12;
    pTokenBuf[1] = 0;
    return 1;
  }
  else
  {
    v13 = pTokenBuf;
    v14 = 1 - pTokenBuf;
    while ( 1 )
    {
      *v13 = v12;
      nLen = v14 + v13;
      if ( v13 == &pTokenBuf[nMaxLen - 1] )
      {
        pTokenBuf[v14 - 1 + v13] = 0;
        return nMaxLen;
      }
      v15 = CUtlBuffer::CheckGet(this, 1);
      v12 = 0;
      if ( v15 )
      {
        v16 = this->m_Get;
        v17 = v16 + 1;
        v12 = this->m_Memory.m_pMemory[v16 - this->m_nOffset];
        this->m_Get = v17;
      }
      if ( this->m_Error != 0 )
        break;
      if ( pBreaks->set[v12] == 0 )
      {
        ++v13;
        if ( v12 > 32 && v12 != 34 )
          continue;
      }
      CUtlBuffer::SeekGet(this, CUtlBuffer::SeekType_t::SEEK_CURRENT, -1);
      break;
    }
    pTokenBuf[nLen] = 0;
    return nLen;
  }
}


// CUtlBuffer::Put  (line 1437, @0x0000000002f85060, libserver.so)  // inlines: AddNullTermination, memcpy, operator[]
// calls: CUtlBuffer::CheckPut, memcpy, CUtlBuffer::AddNullTermination
// callers: CGameConfiguration::InitGameSession, CGameConfiguration::ExecuteURL, CSosPackedFieldData::AddOrReplace, CCustomGameEventManager::ReceiveClientMsgCustomGameEvent, CSoundOpGameSystem::DoSetSoundEventParams, CSoundOpGameSystem::DoStartSoundEvent, CSoundOpGameSystem::DoSetLibraryStackFields, CSaveRestoreFileSystem::Write, CEntity2SaveRestore::LoadSaveData, CSaveRestoreFileSystem::Compress, CSaveRestoreFileSystem::AsyncAppend, CSaveRestoreFileSystem::AsyncWrite (40 total)
void __fastcall CUtlBuffer::Put(CUtlBuffer *const this, const void *pMem, int size)
{
  int v6; // edi
  int v7; // r12d
  bool v8; // cc

  if ( size != 0 && CUtlBuffer::CheckPut(this, size) )
  {
    v6 = this->m_Put - this->m_nOffset;
    if ( v6 >= 0 )
    {
      memcpy(&this->m_Memory.m_pMemory[v6], pMem, size);
      v7 = this->m_Put + size;
      v8 = v7 <= this->m_nMaxPut;
      this->m_Put = v7;
      if ( !v8 )
        CUtlBuffer::AddNullTermination(this);
    }
  }
}


// CUtlBuffer::PutString  (line 1457, @0x0000000002f850d0, libserver.so)  // inlines: AddNullTermination, PeekPut, PutTabs, PutTypeBin<char>, V_strlen, WasLastCharacterCR, operator[], strchr
// calls: strlen, CUtlBuffer::Put, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, strchr
// callers: ProtoBufHelper::ConvertProtoBufToJSON, BasicGameStats_t::SaveToBuffer, CSceneCache::Save, KeyValues::WriteAsBinaryInternal, KeyValues::WriteAsBinaryFilteredInternal, CUtlBuffer::VaPrintf, CUtlBuffer::PutDelimitedString, CCountedStringPool::SaveToBuffer, CEntityKeyValues::SerializeKeys, rr2::CResponseQuery::GetHumanReadableStringForDebuggingOnly, rr2::CriterionStatic::DebugDump, SaveKV3Text_R (19 total)
void __fastcall CUtlBuffer::PutString(CUtlBuffer *const this, const char *pString)
{
  const char *v2; // r13
  unsigned __int8 m_Flags; // al
  int v5; // edx
  int m_nTab; // r12d
  int m_Put; // eax
  int m_nOffset; // ecx
  int v9; // eax
  bool v10; // cc
  char *v11; // r12
  const char *v12; // r14
  const char *v13; // rsi
  int v14; // edx
  int v15; // eax
  int v16; // r12d
  int v17; // eax
  int v18; // eax

  v2 = pString;
  m_Flags = this->m_Flags;
  if ( (m_Flags & 1) != 0 )
  {
    if ( pString != 0 )
    {
      if ( (m_Flags & 0x10) != 0 )
        goto LABEL_18;
      m_nTab = this->m_nTab;
      if ( m_nTab <= 0 )
        goto LABEL_18;
      m_Put = this->m_Put;
      m_nOffset = this->m_nOffset;
      if ( m_Put != m_nOffset && this->m_Memory.m_pMemory[m_Put - 1 - m_nOffset] == 10 || m_Put == 0 )
      {
        while ( --m_nTab != -1 )
        {
          if ( CUtlBuffer::CheckPut(this, 1) )
          {
            this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = 9;
            v9 = this->m_Put + 1;
            v10 = v9 <= this->m_nMaxPut;
            this->m_Put = v9;
            if ( !v10 )
              CUtlBuffer::AddNullTermination(this);
          }
        }
      }
      v11 = strchr(v2, 10);
      if ( v11 == 0 )
        goto LABEL_18;
      do
      {
        v12 = v11 + 1;
        v13 = v2;
        v14 = v11 + 1 - v2;
        v2 = v11 + 1;
        CUtlBuffer::Put(this, v13, v14);
        if ( v11[1] == 0 )
          break;
        v16 = 0;
        if ( (this->m_Flags & 0x10) == 0 )
          v16 = this->m_nTab;
        while ( --v16 >= 0 )
        {
          while ( CUtlBuffer::CheckPut(this, 1) )
          {
            this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = 9;
            v17 = this->m_Put + 1;
            v10 = v17 <= this->m_nMaxPut;
            this->m_Put = v17;
            if ( v10 )
              break;
            CUtlBuffer::AddNullTermination(this);
            if ( --v16 < 0 )
              goto LABEL_27;
          }
        }
LABEL_27:
        v11 = strchr(v12, 10);
      }
      while ( v11 != 0 );
      if ( v12 != 0 )
      {
LABEL_18:
        v15 = strlen(v2);
        if ( v15 != 0 )
        {
          v5 = v15;
          goto LABEL_4;
        }
      }
    }
  }
  else
  {
    if ( pString != 0 )
    {
      v5 = strlen(pString) + 1;
LABEL_4:
      CUtlBuffer::Put(this, v2, v5);
      return;
    }
    if ( CUtlBuffer::CheckPut(this, 1) )
    {
      this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = 0;
      v18 = this->m_Put + 1;
      v10 = v18 <= this->m_nMaxPut;
      this->m_Put = v18;
      if ( !v10 )
        CUtlBuffer::AddNullTermination(this);
    }
  }
}


// CUtlBuffer::PutDelimitedChar  (line 1527, @0x0000000002f85440, libserver.so)  // inlines: AddNullTermination, GetConversionLength, GetEscapeChar, PeekPut, PutChar, PutDelimitedCharInternal, PutTabs, PutTypeBin<char>, WasLastCharacterCR, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CUtlBuffer::Put
void __fastcall CUtlBuffer::PutDelimitedChar(CUtlBuffer *const this, CUtlCharConversion *pConv, char c)
{
  unsigned __int8 m_Flags; // al
  int m_Put; // edx
  int v7; // eax
  bool v8; // cc
  char *v9; // r14
  int v10; // r15d
  int v11; // edx
  int v12; // ecx
  char m_nEscapeChar; // r13
  int v14; // r12d
  int v15; // eax
  int v16; // eax
  int m_nOffset; // esi
  int m_nTab; // r12d
  int v19; // eax
  int v20; // edx
  int v21; // esi
  int v22; // r12d
  int v23; // eax

  m_Flags = this->m_Flags;
  if ( (m_Flags & 1) == 0 )
  {
    m_Put = this->m_Put;
LABEL_3:
    if ( m_Put != 0 )
    {
LABEL_4:
      if ( CUtlBuffer::CheckPut(this, 1) )
      {
        this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = c;
        v7 = this->m_Put + 1;
        v8 = v7 <= this->m_nMaxPut;
        this->m_Put = v7;
        if ( !v8 )
          CUtlBuffer::AddNullTermination(this);
      }
      return;
    }
LABEL_23:
    m_nTab = 0;
    if ( (m_Flags & 0x10) == 0 )
      m_nTab = this->m_nTab;
    while ( --m_nTab >= 0 )
    {
      if ( CUtlBuffer::CheckPut(this, 1) )
      {
        this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = 9;
        v19 = this->m_Put + 1;
        v8 = v19 <= this->m_nMaxPut;
        this->m_Put = v19;
        if ( !v8 )
          CUtlBuffer::AddNullTermination(this);
      }
    }
    goto LABEL_4;
  }
  if ( pConv == 0 )
  {
    m_Put = this->m_Put;
    m_nOffset = this->m_nOffset;
    if ( m_Put != m_nOffset && this->m_Memory.m_pMemory[m_Put - 1 - m_nOffset] == 10 )
      goto LABEL_23;
    goto LABEL_3;
  }
  v9 = pConv + 16 * c;
  v10 = *(v9 + 74);
  if ( v10 == 0 )
  {
    v20 = this->m_Put;
    v21 = this->m_nOffset;
    if ( v20 != v21 && this->m_Memory.m_pMemory[v20 - 1 - v21] == 10 || v20 == 0 )
    {
      v22 = 0;
      if ( (m_Flags & 0x10) == 0 )
        v22 = this->m_nTab;
      while ( --v22 >= 0 )
      {
        if ( CUtlBuffer::CheckPut(this, 1) )
        {
          this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = 9;
          v23 = this->m_Put + 1;
          v8 = v23 <= this->m_nMaxPut;
          this->m_Put = v23;
          if ( !v8 )
            CUtlBuffer::AddNullTermination(this);
        }
      }
    }
    goto LABEL_4;
  }
  v11 = this->m_Put;
  v12 = this->m_nOffset;
  m_nEscapeChar = pConv->m_nEscapeChar;
  if ( v11 != v12 && this->m_Memory.m_pMemory[v11 - 1 - v12] == 10 || v11 == 0 )
  {
    v14 = 0;
    if ( (m_Flags & 0x10) == 0 )
      v14 = this->m_nTab;
    while ( --v14 >= 0 )
    {
      while ( CUtlBuffer::CheckPut(this, 1) )
      {
        this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = 9;
        v15 = this->m_Put + 1;
        v8 = v15 <= this->m_nMaxPut;
        this->m_Put = v15;
        if ( v8 )
          break;
        CUtlBuffer::AddNullTermination(this);
        if ( --v14 < 0 )
          goto LABEL_17;
      }
    }
  }
LABEL_17:
  if ( CUtlBuffer::CheckPut(this, 1) )
  {
    this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = m_nEscapeChar;
    v16 = this->m_Put + 1;
    v8 = v16 <= this->m_nMaxPut;
    this->m_Put = v16;
    if ( !v8 )
      CUtlBuffer::AddNullTermination(this);
  }
  CUtlBuffer::Put(this, *(v9 + 38), v10);
}


// CUtlBuffer::PutDelimitedString  (line 1538, @0x0000000002f85710, libserver.so)  // inlines: AddNullTermination, GetConversionLength, GetEscapeChar, PeekPut, PutChar, PutDelimitedCharInternal, PutTabs, PutTypeBin<char>, V_strlen, WasLastCharacterCR, operator[]
// calls: CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CUtlBuffer::Put, strlen, CUtlBuffer::PutString
// callers: SaveKV3Text_R, Serialize
void __fastcall CUtlBuffer::PutDelimitedString(CUtlBuffer *const this, CUtlCharConversion *pConv, const char *pString)
{
  unsigned __int8 m_Flags; // al
  int m_Put; // edx
  int m_nOffset; // edi
  int m_nTab; // ebx
  int v8; // eax
  bool v9; // cc
  __int64 v10; // r12
  unsigned __int8 v11; // bl
  char *v12; // r14
  int v13; // r13d
  int v14; // edx
  unsigned __int8 v15; // al
  int v16; // edi
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  unsigned __int8 v20; // al
  int v21; // edx
  int v22; // esi
  int v23; // ebx
  int v24; // eax
  unsigned __int8 v25; // al
  int v26; // edx
  int v27; // edi
  int v28; // r13d
  int v29; // eax
  int v30; // eax
  char m_nEscapeChar; // [rsp+Bh] [rbp-45h]
  int nLen; // [rsp+Ch] [rbp-44h]

  m_Flags = this->m_Flags;
  if ( (m_Flags & 1) != 0 && pConv != 0 )
  {
    m_Put = this->m_Put;
    m_nOffset = this->m_nOffset;
    if ( m_Put != m_nOffset && this->m_Memory.m_pMemory[m_Put - 1 - m_nOffset] == 10 || m_Put == 0 )
    {
      m_nTab = 0;
      if ( (m_Flags & 0x10) == 0 )
        m_nTab = this->m_nTab;
      while ( --m_nTab >= 0 )
      {
        while ( CUtlBuffer::CheckPut(this, 1) )
        {
          this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = 9;
          v8 = this->m_Put + 1;
          v9 = v8 <= this->m_nMaxPut;
          this->m_Put = v8;
          if ( v9 )
            break;
          CUtlBuffer::AddNullTermination(this);
          if ( --m_nTab < 0 )
            goto LABEL_11;
        }
      }
    }
LABEL_11:
    CUtlBuffer::Put(this, pConv->m_pDelimiter, pConv->m_nDelimiterLength);
    if ( pString != 0 )
    {
      nLen = strlen(pString);
      if ( nLen > 0 )
      {
        v10 = 0;
        do
        {
          v11 = pString[v10];
          v12 = pConv + 16 * v11;
          v13 = *(v12 + 74);
          if ( v13 != 0 )
          {
            v14 = this->m_Put;
            m_nEscapeChar = pConv->m_nEscapeChar;
            v15 = this->m_Flags;
            if ( (v15 & 1) != 0 && (v16 = this->m_nOffset, v14 != v16) && this->m_Memory.m_pMemory[v14 - 1 - v16] == 10
              || v14 == 0 )
            {
              v17 = 0;
              if ( (v15 & 0x10) == 0 )
                v17 = this->m_nTab;
              while ( --v17 >= 0 )
              {
                while ( CUtlBuffer::CheckPut(this, 1) )
                {
                  this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = 9;
                  v18 = this->m_Put + 1;
                  v9 = v18 <= this->m_nMaxPut;
                  this->m_Put = v18;
                  if ( v9 )
                    break;
                  CUtlBuffer::AddNullTermination(this);
                  if ( --v17 < 0 )
                    goto LABEL_24;
                }
              }
            }
LABEL_24:
            if ( CUtlBuffer::CheckPut(this, 1) )
            {
              this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = m_nEscapeChar;
              v19 = this->m_Put + 1;
              v9 = v19 <= this->m_nMaxPut;
              this->m_Put = v19;
              if ( !v9 )
                CUtlBuffer::AddNullTermination(this);
            }
            CUtlBuffer::Put(this, *(v12 + 38), v13);
          }
          else
          {
            v25 = this->m_Flags;
            v26 = this->m_Put;
            if ( (v25 & 1) != 0 && (v27 = this->m_nOffset, v26 != v27) && this->m_Memory.m_pMemory[v26 - 1 - v27] == 10
              || v26 == 0 )
            {
              v28 = 0;
              if ( (v25 & 0x10) == 0 )
                v28 = this->m_nTab;
              while ( --v28 >= 0 )
              {
                while ( CUtlBuffer::CheckPut(this, 1) )
                {
                  this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = 9;
                  v29 = this->m_Put + 1;
                  v9 = v29 <= this->m_nMaxPut;
                  this->m_Put = v29;
                  if ( v9 )
                    break;
                  CUtlBuffer::AddNullTermination(this);
                  if ( --v28 < 0 )
                    goto LABEL_49;
                }
              }
            }
LABEL_49:
            if ( CUtlBuffer::CheckPut(this, 1) )
            {
              this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = v11;
              v30 = this->m_Put + 1;
              v9 = v30 <= this->m_nMaxPut;
              this->m_Put = v30;
              if ( !v9 )
                CUtlBuffer::AddNullTermination(this);
            }
          }
          ++v10;
        }
        while ( nLen > v10 );
      }
    }
    v20 = this->m_Flags;
    if ( (v20 & 1) != 0 )
    {
      v21 = this->m_Put;
      v22 = this->m_nOffset;
      if ( v21 != v22 && this->m_Memory.m_pMemory[v21 - 1 - v22] == 10 )
      {
        v23 = 0;
        if ( (v20 & 0x10) == 0 )
          v23 = this->m_nTab;
        while ( --v23 >= 0 )
        {
          while ( CUtlBuffer::CheckPut(this, 1) )
          {
            this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = 9;
            v24 = this->m_Put + 1;
            v9 = v24 <= this->m_nMaxPut;
            this->m_Put = v24;
            if ( v9 )
              break;
            CUtlBuffer::AddNullTermination(this);
            if ( --v23 < 0 )
              goto LABEL_38;
          }
        }
      }
    }
LABEL_38:
    CUtlBuffer::Put(this, pConv->m_pDelimiter, pConv->m_nDelimiterLength);
  }
  else
  {
    CUtlBuffer::PutString(this, pString);
  }
}


// CUtlBuffer::VaPrintf  (line 1566, @0x0000000002f852c0, libserver.so)  // inlines: LeafCodeInfo_t
// calls: V_vsnprintf, CUtlBuffer::PutString, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, __stack_chk_fail, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlBuffer::Printf, CChoreoScene::FilePrintf, Crr2LibPort::rr2Warning
// strings: "utlbuffer.cpp", "VaPrintf", "CUtlBuffer::VaPrintf: String overflowed buffer [%llu]\n"
void __fastcall CUtlBuffer::VaPrintf(CUtlBuffer *const this, const char *pFmt, ___va_list_tag *list)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  LeafCodeInfo_t v8; // [rsp+0h] [rbp-2040h] BYREF
  char temp[8200]; // [rsp+20h] [rbp-2020h] BYREF
  unsigned __int64 v10; // [rsp+2028h] [rbp-18h]

  v10 = __readfsqword(0x28u);
  if ( V_vsnprintf(temp, 0x2000, pFmt, list) > 0x1FFE )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v8.m_szFile = "utlbuffer.cpp";
      v8.m_szFunction = "VaPrintf";
      v8.m_nLine = 1570;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v8,
        "CUtlBuffer::VaPrintf: String overflowed buffer [%llu]\n",
        0x2000);
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v6, v7, v4, v5) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
  }
  CUtlBuffer::PutString(this, temp);
}


// CUtlBuffer::Printf  (line 1574, @0x0000000002f853b0, libserver.so)
// calls: CUtlBuffer::VaPrintf
// callers: ProtoBufHelper::ConvertProtoBufToJSON, CSosPackedFieldData::AddOrReplace, CDefaultResponseSystem::FindBestResponse, BasicGameStatsRecord_t::SaveToBuffer, BasicGameStats_t::SaveToBuffer, CBaseGameStats::SaveToFileNOW, CSceneCache::Save, CDOTALobby::DumpToTextBuffer, CNavAreaExtended::Save, KeyValues::WriteAsBinaryInternal, KeyValues::WriteAsBinaryFilteredInternal, CCountedStringPool::SaveToBuffer (59 total)
void CUtlBuffer::Printf(CUtlBuffer *const this, const char *pFmt, ...)
{
  va_list args; // [rsp+8h] [rbp-C8h] BYREF

  va_start(args, pFmt);
  CUtlBuffer::VaPrintf(this, pFmt, args);
}


// CUtlBuffer::SetOverflowFuncs  (line 1587, @0x0000000002f82cf0, libserver.so)
void __fastcall CUtlBuffer::SetOverflowFuncs(
        CUtlBuffer *const this,
        CUtlBuffer::UtlBufferOverflowFunc_t getFunc,
        CUtlBuffer::UtlBufferOverflowFunc_t putFunc)
{
  this->m_GetOverflowFunc.__pfn = getFunc.__pfn;
  this->m_GetOverflowFunc.__delta = getFunc.__delta;
  this->m_PutOverflowFunc.__pfn = putFunc.__pfn;
  this->m_PutOverflowFunc.__delta = putFunc.__delta;
}


// CUtlBuffer::OnPutOverflow  (line 1597, @0x0000000002f82d10, libserver.so)
// callers: CUtlBuffer::CheckPut, CUtlBuffer::SeekPut
bool __fastcall CUtlBuffer::OnPutOverflow(CUtlBuffer *const this, int nSize)
{
  bool (*pfn)(CUtlBuffer *, int); // rax
  CUtlBuffer *v3; // rdi

  pfn = this->m_PutOverflowFunc.__pfn;
  v3 = (this + this->m_PutOverflowFunc.__delta);
  if ( (pfn & 1) != 0 )
    pfn = *&v3->m_Memory.m_pMemory[pfn - 1];
  return pfn(v3, nSize);
}


// CUtlBuffer::OnGetOverflow  (line 1602, @0x0000000002f82d30, libserver.so)
// callers: CUtlBuffer::CheckGet, CUtlBuffer::SeekGet
bool __fastcall CUtlBuffer::OnGetOverflow(CUtlBuffer *const this, int nSize)
{
  bool (*pfn)(CUtlBuffer *, int); // rax
  CUtlBuffer *v3; // rdi

  pfn = this->m_GetOverflowFunc.__pfn;
  v3 = (this + this->m_GetOverflowFunc.__delta);
  if ( (pfn & 1) != 0 )
    pfn = *&v3->m_Memory.m_pMemory[pfn - 1];
  return pfn(v3, nSize);
}


// CUtlBuffer::PutOverflow  (line 1611, @0x0000000002f86290, libserver.so)  // inlines: ConvertToGrowableMemory
// calls: CUtlMemory<unsigned char, int>::ConvertToGrowableMemory, CUtlMemory<unsigned char, int>::Grow
bool __fastcall CUtlBuffer::PutOverflow(CUtlBuffer *const this, int nSize)
{
  bool result; // al

  if ( (this->m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
    result = 0;
    if ( (this->m_Flags & 2) == 0 )
      return result;
    CUtlMemory<unsigned char,int>::ConvertToGrowableMemory(&this->m_Memory, nSize);
  }
  while ( nSize + this->m_Put - this->m_nOffset > this->m_Memory.m_nAllocationCount )
    CUtlMemory<unsigned char,int>::Grow(&this->m_Memory, 1);
  return 1;
}


// CUtlBuffer::GetOverflow  (line 1629, @0x0000000002f827a0, libserver.so)
bool __fastcall CUtlBuffer::GetOverflow(CUtlBuffer *const this, int nSize)
{
  return 0;
}


// CUtlBuffer::CheckPut  (line 1638, @0x0000000002f84c80, libserver.so)
// calls: CUtlBuffer::OnPutOverflow
// callers: ProtoBufHelper::ConvertProtoBufToJSON, CSosPackedFieldData::AddOrReplace, BasicGameStatsRecord_t::SaveToBuffer, BasicGameStats_t::SaveToBuffer, CBaseGameStats::SaveToFileNOW, CSceneCache::Save, CNavAreaExtended::Save, KeyValues::WriteAsBinaryInternal, KeyValues::WriteAsBinaryFilteredInternal, KeyValues::RecursiveSaveToLocalizationFile, CUtlBuffer::AddNullTermination, CUtlBuffer::Put (53 total)
bool __fastcall CUtlBuffer::CheckPut(CUtlBuffer *const this, int nSize)
{
  bool result; // al
  int m_Put; // edx
  int m_nOffset; // eax
  int v6; // edx

  result = 0;
  if ( (this->m_Error & 1) == 0 && (this->m_Flags & 8) == 0 )
  {
    m_Put = this->m_Put;
    m_nOffset = this->m_nOffset;
    if ( m_Put < m_nOffset || (v6 = m_Put - m_nOffset, result = 1, this->m_Memory.m_nAllocationCount < nSize + v6) )
    {
      result = CUtlBuffer::OnPutOverflow(this, nSize);
      if ( !result )
        this->m_Error |= 1u;
    }
  }
  return result;
}


// CUtlBuffer::SeekPut  (line 1654, @0x0000000002f85af0, libserver.so)  // inlines: AddNullTermination
// calls: CUtlBuffer::OnPutOverflow, CUtlBuffer::AddNullTermination
// callers: CSosPackedFieldData::AddOrReplace, CSaveRestoreFileSystem::DirectoryExtract, CSaveRestoreFileSystem::Seek, CSaveRestoreFileSystem::Compress, CSaveRestoreFileSystem::Uncompress, CSaveRestoreFileSystem::Open, CCommentarySystem::LoadCommentaryFile, CGCJobLoadSaveGame::BYieldingRunJob, CGCUpdateItemSchema::OnHTTPCompleted, KeyValues::WriteAsBinary, KeyValues::WriteAsBinaryFiltered, CUtlBuffer::ConvertCRLF (18 total)
void __fastcall CUtlBuffer::SeekPut(CUtlBuffer *const this, CUtlBuffer::SeekType_t type, int offset)
{
  int m_Put; // ebx
  bool v5; // cc

  m_Put = offset;
  switch ( type )
  {
    case CUtlBuffer::SeekType_t::SEEK_CURRENT:
      m_Put = this->m_Put + offset;
      break;
    case CUtlBuffer::SeekType_t::SEEK_TAIL:
      m_Put = this->m_nMaxPut - offset;
      break;
    case CUtlBuffer::SeekType_t::SEEK_HEAD:
LABEL_11:
      break;
    default:
      m_Put = this->m_Put;
      goto LABEL_11;
  }
  CUtlBuffer::OnPutOverflow(this, ~m_Put);
  v5 = m_Put <= this->m_nMaxPut;
  this->m_Put = m_Put;
  if ( !v5 )
    CUtlBuffer::AddNullTermination(this);
}


// CUtlBuffer::ActivateByteSwapping  (line 1684, @0x0000000002f85b60, libserver.so)  // inlines: ActivateByteSwapping, SetTargetBigEndian
void __fastcall CUtlBuffer::ActivateByteSwapping(CUtlBuffer *const this, bool bActivate)
{
  *&this->m_Byteswap = bActivate | (2 * bActivate) | *&this->m_Byteswap & 0xFC;
}


// CUtlBuffer::SetBigEndian  (line 1689, @0x0000000002f85b80, libserver.so)  // inlines: SetTargetBigEndian
void __fastcall CUtlBuffer::SetBigEndian(CUtlBuffer *const this, bool bigEndian)
{
  *&this->m_Byteswap = bigEndian | (2 * bigEndian) | *&this->m_Byteswap & 0xFC;
}


// CUtlBuffer::IsBigEndian  (line 1694, @0x0000000002f85ba0, libserver.so)  // inlines: IsTargetBigEndian
bool __fastcall CUtlBuffer::IsBigEndian(CUtlBuffer *const this)
{
  return (*&this->m_Byteswap & 2) != 0;
}


// CUtlBuffer::AddNullTermination  (line 1703, @0x0000000002f84cf0, libserver.so)  // inlines: operator[]
// calls: CUtlBuffer::CheckPut
// callers: CUtlBuffer::SetExternalBuffer, CUtlBuffer::AssumeMemory, CUtlBuffer::CUtlBuffer, CUtlBuffer::Put, CUtlBuffer::PutString, CUtlBuffer::PutDelimitedChar, CUtlBuffer::PutDelimitedString, CUtlBuffer::SeekPut, CUtlBuffer::AddNullTermination, CUtlBuffer::ConvertCRLF
void __fastcall CUtlBuffer::AddNullTermination(CUtlBuffer *const this)
{
  int m_Put; // eax
  int v3; // edx

  if ( (this->m_Flags & 8) != 0 || (this->m_Error & 1) != 0 )
    goto LABEL_3;
  if ( !CUtlBuffer::CheckPut(this, 1) )
  {
    this->m_Error &= ~1u;
LABEL_3:
    m_Put = this->m_Put;
LABEL_4:
    this->m_nMaxPut = m_Put;
    return;
  }
  m_Put = this->m_Put;
  v3 = m_Put - this->m_nOffset;
  if ( v3 < 0 )
    goto LABEL_4;
  this->m_Memory.m_pMemory[v3] = 0;
  this->m_nMaxPut = this->m_Put;
}


// CUtlBuffer::AddNullTermination  (line 1703, @0x0000000002f85bb0, libserver.so)
// calls: CUtlBuffer::AddNullTermination
// callers: ProtoBufHelper::ConvertProtoBufToJSON, CGameConfiguration::ExecuteURL, CSosPackedFieldData::AddOrReplace, CSoundOpGameSystem::DoSetSoundEventParams, CSoundOpGameSystem::DoStartSoundEvent, CSoundOpGameSystem::DoSetLibraryStackFields, CSaveRestoreFileSystem::Open, CGameEntitySystem::CreateSpawnGroupEntitiesFromSaveRestoreData, BasicGameStatsRecord_t::SaveToBuffer, BasicGameStats_t::SaveToBuffer, CBaseGameStats::SaveToFileNOW, CSceneCache::Save (58 total)
void __fastcall CUtlBuffer::AddNullTermination(CUtlBuffer *const this)
{
  if ( this->m_Put > this->m_nMaxPut )
    CUtlBuffer::AddNullTermination(this);
}


// CUtlBuffer::ConvertCRLF  (line 1735, @0x0000000002f85bd0, libserver.so)  // inlines: AddNullTermination, ContainsCRLF, PeekPut, Purge, PutChar, PutTabs, PutTypeBin<char>, V_strnistr_fast<long long int>, WasLastCharacterCR, operator[]
// calls: CUtlMemory<unsigned char, int>::Purge, CUtlBuffer::EnsureCapacity, _V_strnistr_fast, CUtlBuffer::Put, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, CUtlBuffer::SeekGet, CUtlBuffer::SeekPut, V_strnchr
bool __fastcall CUtlBuffer::ConvertCRLF(CUtlBuffer *const this, CUtlBuffer *const outBuf)
{
  bool result; // al
  unsigned __int8 m_Flags; // dl
  unsigned __int8 v6; // si
  int m_nMaxPut; // eax
  bool v8; // zf
  __int64 v9; // r12
  CUtlBuffer *v10; // r15
  int v11; // r14d
  unsigned __int8 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r13
  unsigned __int8 v15; // al
  int v16; // edx
  int m_nOffset; // edi
  int m_nTab; // ebx
  int v19; // eax
  bool v20; // cc
  int v21; // eax
  CUtlBuffer *v22; // r13
  const char *v23; // rax
  signed __int64 v24; // r13
  unsigned __int8 v25; // al
  int v26; // edx
  int v27; // edi
  int v28; // ebx
  int v29; // eax
  int v30; // eax
  unsigned __int8 v31; // dl
  int v32; // edi
  int v33; // ebx
  int v34; // eax
  int v35; // eax
  int m_Put; // [rsp+Ch] [rbp-64h]
  int m_Get; // [rsp+10h] [rbp-60h]
  int num; // [rsp+14h] [rbp-5Ch]
  unsigned __int8 *pBase; // [rsp+28h] [rbp-48h]
  int nPutDelta; // [rsp+30h] [rbp-40h]
  char v41; // [rsp+37h] [rbp-39h]

  result = 0;
  m_Flags = this->m_Flags;
  if ( (m_Flags & 1) == 0 )
    return result;
  v6 = outBuf->m_Flags;
  if ( (v6 & 1) == 0 || ((m_Flags & 5) == 5) == ((v6 & 5) == 5) )
    return result;
  m_nMaxPut = this->m_nMaxPut;
  outBuf->m_Get = 0;
  v8 = (outBuf->m_Memory.m_nGrowSize & 0xC0000000) == 0;
  outBuf->m_Put = 0;
  outBuf->m_nOffset = 0;
  outBuf->m_nMaxPut = 0;
  num = m_nMaxPut;
  outBuf->m_Error = 0;
  if ( v8 )
    CUtlMemory<unsigned char,int>::Purge(&outBuf->m_Memory);
  v9 = 0;
  v10 = outBuf;
  CUtlBuffer::EnsureCapacity(outBuf, num);
  nPutDelta = 0;
  v41 = this->m_Flags & 5;
  m_Put = this->m_Put;
  pBase = this->m_Memory.m_pMemory;
  v11 = 0;
  m_Get = this->m_Get;
  while ( v9 < num )
  {
    while ( 1 )
    {
      v12 = &pBase[v9];
      if ( v41 != 5 )
        break;
      v13 = _V_strnistr_fast(&pBase[v9], "\r\n", num - v9);
      if ( v13 == 0 )
        goto LABEL_60;
      v14 = v13 - v12;
      CUtlBuffer::Put(v10, v12, v13 - v12);
      v15 = v10->m_Flags;
      v16 = v10->m_Put;
      if ( (v15 & 1) != 0
        && (m_nOffset = v10->m_nOffset, v16 != m_nOffset)
        && v10->m_Memory.m_pMemory[v16 - 1 - m_nOffset] == 10
        || v16 == 0 )
      {
        m_nTab = 0;
        if ( (v15 & 0x10) == 0 )
          m_nTab = v10->m_nTab;
        while ( --m_nTab >= 0 )
        {
          while ( CUtlBuffer::CheckPut(v10, 1) )
          {
            v10->m_Memory.m_pMemory[v10->m_Put - v10->m_nOffset] = 9;
            v19 = v10->m_Put + 1;
            v20 = v19 <= v10->m_nMaxPut;
            v10->m_Put = v19;
            if ( v20 )
              break;
            CUtlBuffer::AddNullTermination(v10);
            if ( --m_nTab < 0 )
              goto LABEL_20;
          }
        }
      }
LABEL_20:
      if ( CUtlBuffer::CheckPut(v10, 1) )
      {
        v10->m_Memory.m_pMemory[v10->m_Put - v10->m_nOffset] = 10;
        v21 = v10->m_Put + 1;
        v20 = v21 <= v10->m_nMaxPut;
        v10->m_Put = v21;
        if ( !v20 )
          CUtlBuffer::AddNullTermination(v10);
      }
      v9 += v14 + 2;
      v11 -= m_Get >= v9 - 1;
      nPutDelta -= v9 - 1 <= m_Put;
      if ( v9 >= num )
        goto LABEL_24;
    }
    v23 = V_strnchr(&pBase[v9], 10, num - v9);
    if ( v23 == 0 )
    {
LABEL_60:
      v22 = v10;
      CUtlBuffer::Put(v10, v12, num - v9);
      goto LABEL_25;
    }
    v24 = v23 - v12;
    CUtlBuffer::Put(v10, v12, v23 - v12);
    v25 = v10->m_Flags;
    v26 = v10->m_Put;
    if ( (v25 & 1) != 0 && (v27 = v10->m_nOffset, v26 != v27) && v10->m_Memory.m_pMemory[v26 - 1 - v27] == 10
      || v26 == 0 )
    {
      v28 = 0;
      if ( (v25 & 0x10) == 0 )
        v28 = v10->m_nTab;
      while ( --v28 >= 0 )
      {
        while ( CUtlBuffer::CheckPut(v10, 1) )
        {
          v10->m_Memory.m_pMemory[v10->m_Put - v10->m_nOffset] = 9;
          v29 = v10->m_Put + 1;
          v20 = v29 <= v10->m_nMaxPut;
          v10->m_Put = v29;
          if ( v20 )
            break;
          CUtlBuffer::AddNullTermination(v10);
          if ( --v28 < 0 )
            goto LABEL_36;
        }
      }
    }
LABEL_36:
    if ( !CUtlBuffer::CheckPut(v10, 1) )
      goto LABEL_52;
    v10->m_Memory.m_pMemory[v10->m_Put - v10->m_nOffset] = 13;
    v30 = v10->m_Put + 1;
    v20 = v30 <= v10->m_nMaxPut;
    v10->m_Put = v30;
    if ( !v20 )
    {
      CUtlBuffer::AddNullTermination(v10);
LABEL_52:
      v31 = v10->m_Flags;
      v30 = v10->m_Put;
      if ( (v31 & 1) == 0 )
        goto LABEL_53;
      goto LABEL_39;
    }
    v31 = v10->m_Flags;
    if ( (v31 & 1) != 0 )
    {
LABEL_39:
      v32 = v10->m_nOffset;
      if ( v30 != v32 && v10->m_Memory.m_pMemory[v30 - 1 - v32] == 10 )
      {
        if ( (v31 & 0x10) == 0 )
          goto LABEL_42;
        goto LABEL_55;
      }
    }
LABEL_53:
    if ( v30 != 0 )
      goto LABEL_47;
    if ( (v31 & 0x10) == 0 )
    {
LABEL_42:
      v33 = v10->m_nTab;
      goto LABEL_43;
    }
LABEL_55:
    v33 = 0;
LABEL_43:
    while ( --v33 >= 0 )
    {
      while ( CUtlBuffer::CheckPut(v10, 1) )
      {
        v10->m_Memory.m_pMemory[v10->m_Put - v10->m_nOffset] = 9;
        v34 = v10->m_Put + 1;
        v20 = v34 <= v10->m_nMaxPut;
        v10->m_Put = v34;
        if ( v20 )
          break;
        CUtlBuffer::AddNullTermination(v10);
        if ( --v33 < 0 )
          goto LABEL_47;
      }
    }
LABEL_47:
    if ( CUtlBuffer::CheckPut(v10, 1) )
    {
      v10->m_Memory.m_pMemory[v10->m_Put - v10->m_nOffset] = 10;
      v35 = v10->m_Put + 1;
      v20 = v35 <= v10->m_nMaxPut;
      v10->m_Put = v35;
      if ( !v20 )
        CUtlBuffer::AddNullTermination(v10);
    }
    v9 += v24 + 1;
    v11 += v9 <= m_Get;
    nPutDelta += v9 <= m_Put;
  }
LABEL_24:
  v22 = v10;
LABEL_25:
  CUtlBuffer::SeekGet(v22, CUtlBuffer::SeekType_t::SEEK_HEAD, v11 + m_Get);
  CUtlBuffer::SeekPut(v22, CUtlBuffer::SeekType_t::SEEK_HEAD, m_Put + nPutDelta);
  return 1;
}


// CUtlBuffer::Swap  (line 1819, @0x0000000002f860b0, libserver.so)  // inlines: Swap, V_swap<int>, V_swap<unsigned char*>, V_swap<unsigned char>, V_swap<unsigned int>
void __fastcall CUtlBuffer::Swap(CUtlBuffer *const this, CUtlBuffer *const buf)
{
  int m_Get; // eax
  int m_Put; // eax
  int m_nMaxPut; // eax
  uint32 m_nGrowSize; // eax
  unsigned __int8 *m_pMemory; // rax

  m_Get = this->m_Get;
  this->m_Get = buf->m_Get;
  buf->m_Get = m_Get;
  m_Put = this->m_Put;
  this->m_Put = buf->m_Put;
  buf->m_Put = m_Put;
  m_nMaxPut = this->m_nMaxPut;
  this->m_nMaxPut = buf->m_nMaxPut;
  buf->m_nMaxPut = m_nMaxPut;
  LOBYTE(m_nMaxPut) = this->m_Error;
  this->m_Error = buf->m_Error;
  buf->m_Error = m_nMaxPut;
  m_nGrowSize = this->m_Memory.m_nGrowSize;
  this->m_Memory.m_nGrowSize = buf->m_Memory.m_nGrowSize;
  buf->m_Memory.m_nGrowSize = m_nGrowSize;
  m_pMemory = this->m_Memory.m_pMemory;
  this->m_Memory.m_pMemory = buf->m_Memory.m_pMemory;
  buf->m_Memory.m_pMemory = m_pMemory;
  LODWORD(m_pMemory) = this->m_Memory.m_nAllocationCount;
  this->m_Memory.m_nAllocationCount = buf->m_Memory.m_nAllocationCount;
  buf->m_Memory.m_nAllocationCount = m_pMemory;
}


// CUtlBuffer::Swap  (line 1832, @0x0000000002f86110, libserver.so)  // inlines: Swap, V_swap<int>, V_swap<unsigned char*>, V_swap<unsigned int>
void __fastcall CUtlBuffer::Swap(CUtlBuffer *const this, CUtlMemory<unsigned char,int> *const mem)
{
  int m_nAllocationCount; // eax
  uint32 m_nGrowSize; // eax
  unsigned __int8 *m_pMemory; // rax

  this->m_Get = 0;
  this->m_Put = mem->m_nAllocationCount;
  m_nAllocationCount = mem->m_nAllocationCount;
  this->m_Error = 0;
  this->m_nMaxPut = m_nAllocationCount;
  m_nGrowSize = this->m_Memory.m_nGrowSize;
  this->m_Memory.m_nGrowSize = mem->m_nGrowSize;
  mem->m_nGrowSize = m_nGrowSize;
  m_pMemory = this->m_Memory.m_pMemory;
  this->m_Memory.m_pMemory = mem->m_pMemory;
  mem->m_pMemory = m_pMemory;
  LODWORD(m_pMemory) = this->m_Memory.m_nAllocationCount;
  this->m_Memory.m_nAllocationCount = mem->m_nAllocationCount;
  mem->m_nAllocationCount = m_pMemory;
}


// CUtlInplaceBuffer::CUtlInplaceBuffer  (line 1845, @0x0000000002f86160, libserver.so)
// calls: CUtlBuffer::CUtlBuffer
void __fastcall CUtlInplaceBuffer::CUtlInplaceBuffer(
        CUtlInplaceBuffer *const this,
        int growSize,
        int initSize,
        int nFlags)
{
  CUtlBuffer::CUtlBuffer(this, growSize, initSize, nFlags);
}


// CUtlInplaceBuffer::InplaceGetLinePtr  (line 1850, @0x0000000002f86170, libserver.so)  // inlines: PeekGet, PeekLineLength, operator[]
// calls: CUtlBuffer::SeekGet, CUtlBuffer::PeekLineLength
// callers: CUtlInplaceBuffer::InplaceGetLinePtr
bool __fastcall CUtlInplaceBuffer::InplaceGetLinePtr(
        CUtlInplaceBuffer *const this,
        char **ppszInBufferPtr,
        int *pnLineLength)
{
  int v7; // eax
  int v8; // r15d
  char *v9; // r12

  if ( this->m_Error != 0 || (v7 = CUtlBuffer::PeekLineLength(this)) <= 1 )
  {
    CUtlBuffer::SeekGet(this, CUtlBuffer::SeekType_t::SEEK_TAIL, 0);
    return 0;
  }
  else
  {
    v8 = v7 - 1;
    v9 = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
    CUtlBuffer::SeekGet(this, CUtlBuffer::SeekType_t::SEEK_CURRENT, v7 - 1);
    if ( ppszInBufferPtr != 0 )
      *ppszInBufferPtr = v9;
    if ( pnLineLength != 0 )
      *pnLineLength = v8;
    return 1;
  }
}


// CUtlInplaceBuffer::InplaceGetLinePtr  (line 1876, @0x0000000002f86210, libserver.so)
// calls: CUtlInplaceBuffer::InplaceGetLinePtr
char *__fastcall CUtlInplaceBuffer::InplaceGetLinePtr(CUtlInplaceBuffer *const this)
{
  bool v1; // zf
  char *result; // rax
  char *v3; // rcx
  int v4; // edx
  char *v5; // rcx
  int nLineLen; // [rsp+4h] [rbp-Ch] BYREF
  char *pszLine; // [rsp+8h] [rbp-8h] BYREF

  pszLine = 0;
  nLineLen = 0;
  v1 = !CUtlInplaceBuffer::InplaceGetLinePtr(this, &pszLine, &nLineLen);
  result = pszLine;
  if ( !v1 )
  {
    v3 = &pszLine[nLineLen - 1];
    if ( *v3 == 10 || *v3 == 13 )
    {
      *v3 = 0;
      v4 = nLineLen - 1;
      result = pszLine;
      if ( --nLineLen != 0 )
      {
        v5 = &pszLine[v4 - 1];
        if ( *v5 == 10 || *v5 == 13 )
        {
          *v5 = 0;
          return pszLine;
        }
      }
    }
  }
  return result;
}


