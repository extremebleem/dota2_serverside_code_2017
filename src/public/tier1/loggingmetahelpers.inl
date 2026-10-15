
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLogging_MetaDataAllocator::~CLogging_MetaDataAllocator  (line 271, @0x0000000001f84050, libserver.so)
// calls: operator delete []
// callers: CEntityDebugGameSystem::OnEntityReport
void __fastcall CLogging_MetaDataAllocator::~CLogging_MetaDataAllocator(CLogging_MetaDataAllocator *const this)
{
  LoggingMetaData_t *m_pAllocatedMetaDataHead; // rbx
  LoggingMetaData_t *m_pAllocatedMetaDataTail; // r12
  LoggingMetaData_t *m_pNext; // r13

  m_pAllocatedMetaDataHead = this->m_pAllocatedMetaDataHead;
  if ( m_pAllocatedMetaDataHead != 0 )
  {
    while ( 1 )
    {
      m_pAllocatedMetaDataTail = this->m_pAllocatedMetaDataTail;
      m_pNext = m_pAllocatedMetaDataHead->m_pNext;
      operator delete[](m_pAllocatedMetaDataHead);
      if ( m_pAllocatedMetaDataHead == m_pAllocatedMetaDataTail )
        break;
      m_pAllocatedMetaDataHead = m_pNext;
    }
  }
}


// CLoggingInternalMsg_ScopeVerification::~CLoggingInternalMsg_ScopeVerification  (line 387, @0x0000000001f84090, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CEntityDebugGameSystem::OnEntityReport
// strings: "../../public/tier1/loggingmetahelpers.h", "~CLoggingInternalMsg_ScopeVerification", "A Log_Meta_* macro at %s (%d) went out of scope before it's parent Log_End().\n"
void __fastcall CLoggingInternalMsg_ScopeVerification::~CLoggingInternalMsg_ScopeVerification(
        CLoggingInternalMsg_ScopeVerification *const this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi
  int m_DeclaredLine; // r9d
  const char *m_szDeclaredFile; // r8
  LeafCodeInfo_t v8; // [rsp+0h] [rbp-30h] BYREF

  if ( !*this->m_bAllowDestruction )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_6;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v4, v5, v2, v3) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_6:
      m_DeclaredLine = this->m_DeclaredLine;
      m_szDeclaredFile = this->m_szDeclaredFile;
      v8.m_szFile = "../../public/tier1/loggingmetahelpers.h";
      v8.m_szFunction = "~CLoggingInternalMsg_ScopeVerification";
      v8.m_nLine = 395;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v8,
        "A Log_Meta_* macro at %s (%d) went out of scope before it's parent Log_End().\n",
        m_szDeclaredFile,
        m_DeclaredLine);
    }
  }
}


