
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSisterResourceBlockLoader::~CSisterResourceBlockLoader  (line 34, @0x00000000031d26c0, libserver.so)  // inlines: Free, MemAlloc_FreeAlignedFunc, ~CUtlString
// calls: CIntrospectedResourceDataHandler::~CIntrospectedResourceDataHandler, operator delete, CUtlString::FreeMemoryBlock
// callers: GetVsSignatureFromResourceHeader, GetMeshMaterialInfo
void __fastcall CSisterResourceBlockLoader::~CSisterResourceBlockLoader(CSisterResourceBlockLoader *const this)
{
  const ResourceFileHeader_t *m_pHeader; // rax
  CIntrospectedResourceDataHandler *m_pDataHandler; // r12

  m_pHeader = this->m_pHeader;
  if ( m_pHeader != 0 && this->m_bOwnHeader )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((m_pHeader & 0xFFFFFFFFFFFFFFF8LL) - 8));
  m_pDataHandler = this->m_pDataHandler;
  this->m_bOwnHeader = 0;
  this->m_pHeader = 0;
  if ( m_pDataHandler != 0 )
  {
    CIntrospectedResourceDataHandler::~CIntrospectedResourceDataHandler(m_pDataHandler);
    operator delete(m_pDataHandler);
    this->m_pDataHandler = 0;
  }
  if ( this->m_resourceName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_resourceName);
}


// CSisterResourceBlockLoader::BlockingLoadResourceFileData  (line 238, @0x00000000031d2750, libserver.so)  // inlines: CResourceArray, CResourceArrayBase, MemAlloc_AllocAlignedFunc, ResourceFileHeader_t, ~CUtlBuffer, ~CUtlMemory
// calls: GenerateStandardFullPathForResourceName, LoggingSystem_IsChannelEnabled, CUtlBuffer::CUtlBuffer, LoggingSystem_Log(int,LoggingSeverity_t,Color,char const*,...), CUtlMemory<unsigned char, int>::Purge, LoggingSystem_Log, __stack_chk_fail, _Unwind_Resume
// callers: LoadSisterMaterialResourceForMesh, GetMeshMaterialInfo
// strings: "Unable to read resource file %s!\n", "CSisterResourceBlockLoader::BlockingLoadResourceFileData: Trying to load an illegal resou
bool __fastcall CSisterResourceBlockLoader::BlockingLoadResourceFileData(
        CSisterResourceBlockLoader *const this,
        const char *pResourceName)
{
  char IsChannelEnabled; // bl
  uint32 m_nNonStreamingSize; // edx
  __int64 v7; // rax
  const ResourceFileHeader_t *v8; // rsi
  ResourceFileHeader_t header; // [rsp+10h] [rbp-1F0h] BYREF
  CUtlBuffer headerBuf; // [rsp+20h] [rbp-1E0h] BYREF
  CUtlBuffer buf; // [rsp+70h] [rbp-190h] BYREF
  char pFullPath[264]; // [rsp+C0h] [rbp-140h] BYREF
  unsigned __int64 v13; // [rsp+1C8h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  if ( GenerateStandardFullPathForResourceName(
         pResourceName,
         ResourcePathGenerationType_t::RESOURCE_PATH_GAME,
         pFullPath,
         260) )
  {
    header.m_ResourceBlocks.m_nOffset = 0;
    header.m_ResourceBlocks.m_nCount = 0;
    CUtlBuffer::CUtlBuffer(&headerBuf, &header, 16, 0);
    if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 14))(
           &g_pFullFileSystem->IBaseFileSystem,
           pFullPath,
           0,
           &headerBuf,
           16,
           0,
           0) != 0 )
    {
      m_nNonStreamingSize = header.m_nNonStreamingSize;
      this->m_bOwnHeader = 1;
      if ( m_nNonStreamingSize != 0 )
      {
        v7 = (**g_pMemAlloc)(g_pMemAlloc, m_nNonStreamingSize + 23LL);
        v8 = ((v7 + 23) & 0xFFFFFFFFFFFFFFF0LL);
        v8[-1].m_ResourceBlocks = v7;
        m_nNonStreamingSize = header.m_nNonStreamingSize;
      }
      else
      {
        v8 = 0;
      }
      this->m_pHeader = v8;
      CUtlBuffer::CUtlBuffer(&buf, v8, m_nNonStreamingSize, 0);
      IsChannelEnabled = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 14))(
                           &g_pFullFileSystem->IBaseFileSystem,
                           pFullPath,
                           0,
                           &buf,
                           header.m_nNonStreamingSize,
                           0,
                           0);
      if ( IsChannelEnabled == 0 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 2) != 0 )
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_WARNING,
            -16776961,
            "Unable to read resource file %s!\n",
            pFullPath);
        (*(*g_pAsyncFileSystem + 200LL))(g_pAsyncFileSystem, this->m_pHeader);
      }
      CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
    }
    else
    {
      IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_GENERAL, 2);
      if ( IsChannelEnabled != 0 )
      {
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_WARNING,
          -16776961,
          "Unable to read resource file %s!\n",
          pFullPath);
        IsChannelEnabled = 0;
      }
    }
    CUtlMemory<unsigned char,int>::Purge(&headerBuf.m_Memory);
  }
  else
  {
    IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_GENERAL, 2);
    if ( IsChannelEnabled != 0 )
    {
      IsChannelEnabled = 0;
      LoggingSystem_Log(
        LOG_GENERAL,
        2,
        "CSisterResourceBlockLoader::BlockingLoadResourceFileData: Trying to load an illegal resource name %s!\n",
        pResourceName);
    }
  }
  return IsChannelEnabled;
}


