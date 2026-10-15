
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_tier2_logging.cpp  (line 0, @0x0000000001a6ac40, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_tier2_logging_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CFileLoggingListener::CFileLoggingListener  (line 10, @0x000000000312db40, libserver.so)  // inlines: Reset
void __fastcall CFileLoggingListener::CFileLoggingListener(CFileLoggingListener *const this)
{
  __int64 v1; // rax

  this->_vptr_ILoggingListener = &off_47C50D0;
  v1 = 0;
  this->m_bLogTimestamps = 0;
  this->m_bNeedsTimestamp = 0;
  do
  {
    *(&this->m_OpenFiles[0].m_FileHandle + v1) = 0;
    v1 += 8;
  }
  while ( v1 != 128 );
  LOBYTE(v1) = 0;
  do
  {
    *(this->m_FileIndices + v1) = -1;
    v1 += 4;
  }
  while ( v1 != 1024 );
}


// CFileLoggingListener::~CFileLoggingListener  (line 25, @0x000000000312dba0, libserver.so)  // inlines: Reset
// callers: CTier2AppSystemDict::~CTier2AppSystemDict
void __fastcall CFileLoggingListener::~CFileLoggingListener(CFileLoggingListener *const this)
{
  __int64 v2; // rbx

  v2 = 0;
  this->_vptr_ILoggingListener = &off_47C50D0;
  do
  {
    if ( this->m_OpenFiles[v2].m_FileHandle != 0 )
    {
      (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(
        &g_pFullFileSystem->IBaseFileSystem,
        this->m_OpenFiles[v2].m_FileHandle);
      this->m_OpenFiles[v2].m_FileHandle = 0;
    }
    ++v2;
  }
  while ( v2 != 16 );
}


// CFileLoggingListener::SetLogTimestamps  (line 37, @0x000000000312dc00, libserver.so)
// callers: CTier2AppSystemDict::Init
void __fastcall CFileLoggingListener::SetLogTimestamps(CFileLoggingListener *const this, bool bLogTimestamps)
{
  this->m_bLogTimestamps = bLogTimestamps;
  this->m_bNeedsTimestamp = bLogTimestamps;
}


// CFileLoggingListener::BeginLoggingToFile  (line 54, @0x000000000312d850, libserver.so)  // inlines: GetUnusedFileInfo
// callers: CTier2AppSystemDict::Init
LoggingFileHandle_t __fastcall CFileLoggingListener::BeginLoggingToFile(
        CFileLoggingListener *const this,
        const char *pFilename,
        const char *pOptions,
        const char *pPathID)
{
  __int64 v4; // rbx

  v4 = 0;
  while ( this->m_OpenFiles[v4].m_FileHandle != 0 )
  {
    if ( ++v4 == 16 )
      return -1;
  }
  this->m_OpenFiles[v4].m_FileHandle = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 2))(
                                         &g_pFullFileSystem->IBaseFileSystem,
                                         pFilename,
                                         pOptions,
                                         pPathID);
  return v4;
}


// CFileLoggingListener::ReOpenLoggingToFile  (line 64, @0x000000000312dac0, libserver.so)
// callers: CTier2AppSystemDict::ChangeLogFileSuffix
void __fastcall CFileLoggingListener::ReOpenLoggingToFile(
        CFileLoggingListener *const this,
        LoggingFileHandle_t fileHandle,
        const char *pFilename,
        const char *pOptions,
        const char *pPathID)
{
  __int64 v5; // rax
  char *v8; // r13

  if ( fileHandle <= 0xF )
  {
    v5 = fileHandle;
    if ( this->m_OpenFiles[v5].m_FileHandle != 0 )
    {
      v8 = this + v5 * 8;
      (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(
        &g_pFullFileSystem->IBaseFileSystem,
        this->m_OpenFiles[v5].m_FileHandle);
      *(v8 + 1) = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 2))(
                    &g_pFullFileSystem->IBaseFileSystem,
                    pFilename,
                    pOptions,
                    pPathID);
    }
  }
}


// CFileLoggingListener::EndLoggingToFile  (line 77, @0x000000000312d8c0, libserver.so)  // inlines: Reset
// callers: CTier2AppSystemDict::~CTier2AppSystemDict
void __fastcall CFileLoggingListener::EndLoggingToFile(
        CFileLoggingListener *const this,
        LoggingFileHandle_t fileHandle)
{
  __int64 v2; // r13
  __int64 i; // rbx
  __int64 v5; // rsi

  v2 = fileHandle;
  if ( fileHandle != -1 )
  {
    for ( i = 0; i != 256; ++i )
    {
      while ( this->m_FileIndices[i] != v2 )
      {
        if ( ++i == 256 )
          goto LABEL_6;
      }
      v5 = i;
      (*(this->_vptr_ILoggingListener + 7))(this, v5);
    }
LABEL_6:
    (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(
      &g_pFullFileSystem->IBaseFileSystem,
      this->m_OpenFiles[v2].m_FileHandle);
    this->m_OpenFiles[v2].m_FileHandle = 0;
  }
}


// CFileLoggingListener::AssignLogChannel  (line 94, @0x000000000312d940, libserver.so)
void __fastcall CFileLoggingListener::AssignLogChannel(
        CFileLoggingListener *const this,
        LoggingChannelID_t channelID,
        LoggingFileHandle_t loggingFileHandle)
{
  this->m_FileIndices[channelID] = loggingFileHandle;
}


// CFileLoggingListener::UnassignLogChannel  (line 102, @0x000000000312d950, libserver.so)
void __fastcall CFileLoggingListener::UnassignLogChannel(
        CFileLoggingListener *const this,
        LoggingChannelID_t channelID)
{
  this->m_FileIndices[channelID] = -1;
}


// CFileLoggingListener::AssignAllLogChannels  (line 108, @0x000000000312d970, libserver.so)
// callers: CTier2AppSystemDict::Init
void __fastcall CFileLoggingListener::AssignAllLogChannels(
        CFileLoggingListener *const this,
        LoggingFileHandle_t loggingFileHandle)
{
  __int64 i; // rax

  for ( i = 0; i != 256; ++i )
    this->m_FileIndices[i] = loggingFileHandle;
}


// CFileLoggingListener::UnassignAllLogChannels  (line 118, @0x000000000312d9a0, libserver.so)
void __fastcall CFileLoggingListener::UnassignAllLogChannels(CFileLoggingListener *const this)
{
  __int64 i; // rax

  for ( i = 0; i != 256; ++i )
    this->m_FileIndices[i] = -1;
}


// CFileLoggingListener::Log  (line 126, @0x000000000312dc50, libserver.so)  // inlines: GetTimestampString, V_strlen
// calls: strlen, LoggingSystem_GetChannel, V_sprintf_safe<256ul>, V_stristr_fast(char const*,char const*), Plat_GetLocalTime, V_snprintf, __stack_chk_fail
// strings: "[%s] ", "%02i/%02i/%04i - %02i:%02i:%02i"
// globals: GetTimestampString(void)::string
void __fastcall CFileLoggingListener::Log(
        CFileLoggingListener *const this,
        const LoggingContext_t *pContext,
        const char *pMessage)
{
  LoggingChannelID_t m_ChannelID; // r13d
  __int64 v6; // rax
  FileHandle_t m_FileHandle; // r14
  LoggingChannelID_t v9; // edi
  __int64 Channel; // rax
  unsigned int v11; // [rsp+1Ch] [rbp-184h]
  _DWORD v12[16]; // [rsp+20h] [rbp-180h] BYREF
  char szBuf[256]; // [rsp+60h] [rbp-140h] BYREF
  unsigned __int64 v14; // [rsp+168h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  if ( (pContext->m_Flags & 1) == 0 )
  {
    m_ChannelID = pContext->m_ChannelID;
    v6 = this->m_FileIndices[pContext->m_ChannelID];
    if ( v6 <= 0xF )
    {
      m_FileHandle = this->m_OpenFiles[v6].m_FileHandle;
      if ( pMessage != 0 )
        v11 = strlen(pMessage);
      else
        v11 = 0;
      if ( this->m_bLogTimestamps )
      {
        if ( this->m_bNeedsTimestamp )
        {
          Plat_GetLocalTime(v12);
          V_snprintf(
            GetTimestampString(void)::string,
            128,
            "%02i/%02i/%04i - %02i:%02i:%02i",
            v12[4] + 1,
            v12[3],
            v12[5] + 1900,
            v12[2],
            v12[1],
            v12[0]);
          (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 1))(
            &g_pFullFileSystem->IBaseFileSystem,
            GetTimestampString(void)::string,
            strlen(GetTimestampString(void)::string),
            m_FileHandle);
          (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 1))(&g_pFullFileSystem->IBaseFileSystem, ": ", 2, m_FileHandle);
        }
        this->m_bNeedsTimestamp = V_stristr_fast(pMessage, "\n") != 0;
        v9 = pContext->m_ChannelID;
      }
      else
      {
        v9 = m_ChannelID;
      }
      if ( LOG_GENERAL != v9 )
      {
        Channel = LoggingSystem_GetChannel();
        if ( Channel != 0 )
        {
          V_sprintf_safe<256ul>(szBuf, "[%s] ", (Channel + 24));
          (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 1))(
            &g_pFullFileSystem->IBaseFileSystem,
            szBuf,
            strlen(szBuf),
            m_FileHandle);
        }
      }
      (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 1))(
        &g_pFullFileSystem->IBaseFileSystem,
        pMessage,
        v11,
        m_FileHandle);
      (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 8))(&g_pFullFileSystem->IBaseFileSystem, m_FileHandle);
    }
  }
}


// CFileLoggingListener::GetUnusedFileInfo  (line 171, @0x000000000312dc20, libserver.so)
int __fastcall CFileLoggingListener::GetUnusedFileInfo(const CFileLoggingListener *const this)
{
  __int64 v1; // rax

  v1 = 0;
  while ( this->m_OpenFiles[v1].m_FileHandle != 0 )
  {
    if ( ++v1 == 16 )
    {
      LODWORD(v1) = -1;
      return v1;
    }
  }
  return v1;
}


// CHtmlFormattedLoggingListener::Log  (line 184, @0x000000000312d9d0, libserver.so)  // inlines: V_StrSubst<long unsigned int>, printf
// calls: _V_StrSubst, __printf_chk, fflush, __stack_chk_fail
// strings: "<br/>", "<font color=\"#%.2X%.2X%.2X\"> %s </font>"
// globals: UNSPECIFIED_LOGGING_COLOR
void __fastcall CHtmlFormattedLoggingListener::Log(
        CHtmlFormattedLoggingListener *const this,
        const LoggingContext_t *pContext,
        const char *pMessage)
{
  char buf1[1024]; // [rsp+0h] [rbp-830h] BYREF
  char buf2[1032]; // [rsp+400h] [rbp-430h] BYREF
  unsigned __int64 v6; // [rsp+808h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  _V_StrSubst(pMessage, "\n", "<br/>", buf1, 1024, 0);
  _V_StrSubst(buf1, "\r", "<br/>", buf2, 1024, 0);
  if ( *&pContext->m_Color == UNSPECIFIED_LOGGING_COLOR )
    __printf_chk(1, "%s", buf2);
  else
    __printf_chk(
      1,
      "<font color=\"#%.2X%.2X%.2X\"> %s </font>",
      pContext->m_Color._color[0],
      pContext->m_Color._color[1],
      pContext->m_Color._color[2],
      buf2);
  fflush(stdout);
}


