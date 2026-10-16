// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_server_custom_game_cache.cpp:68
class CInstallUGCJob : public CGCClientJob {
public:

private:

	PublishedFileId_t m_id;  // +0x140
	uint32 m_nExpectedTimeStamp;  // +0x148

	CRC64_t m_nExpectedCRC;  // +0x150
	function<bool(const CMsgCustomGameInstallStatus&)> m_callback;  // +0x158
	FILE * m_fpLock;  // +0x178

	int m_eDownloadResult;  // +0x27a4

	bool m_bCancelRequested;  // +0x27f8

	CInstallUGCJob(CInstallUGCJob &);
	CInstallUGCJob(PublishedFileId_t, uint32, CRC64_t, function<bool(const CMsgCustomGameInstallStatus&)>);
	virtual ~CInstallUGCJob();
	virtual bool BYieldingRunGCJob();
	bool UpdateProgress(const char *);
	void SetPathnames();
	bool CheckCache(bool);
	bool YldGetLatestDetails();
	bool YldAcquireLock(const char *);
	void ReleaselLock();
	void Success();
	void InstallCanceled();
	void Failure(ECustomGameInstallStatus, const char *);
	void FailureProbablyBug(const char *);
	void OnDownloadResult(DownloadItemResult_t *);

	// vtable[6] BYieldingRunGCJob
	// sizeof = 10280
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTACustomGameCache::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 17, @0x0000000002997930, libserver.so)
void __cdecl CDOTACustomGameCache::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CJobCallResult<SteamUGCQueryCompleted_t>::func  (line 56, @0x00000000029a76b0, libserver.so)
void __fastcall CJobCallResult<SteamUGCQueryCompleted_t>::func(
        CJobCallResult<SteamUGCQueryCompleted_t> *const this,
        SteamUGCQueryCompleted_t *data,
        bool bFailed)
{
  this->m_bFinished = 1;
  this->m_bResult = !bFailed;
  if ( data != 0 )
    this->m_info = *data;
}


// CInstallUGCJob::~CInstallUGCJob  (line 124, @0x00000000029b32d0, libserver.so)  // inlines: GetString, ReleaselLock, String, V_strcpy_safe<260ul>, ~CCallback, ~CCallbackImpl, ~CGCClientJob, ~CUtlString, ~_Function_base, ~function
// calls: fclose, LoggingSystem_IsChannelEnabled, _V_strncpy, V_StripTrailingSlash, LoggingSystem_Log, CMsgCustomGameInstallStatus::~CMsgCustomGameInstallStatus, CUtlString::FreeMemoryBlock, GCSDK::CJob::~CJob, CUtlString::Get, SteamAPI_UnregisterCallback, __stack_chk_fail
// callers: CInstallUGCJob::~CInstallUGCJob
// strings: "FCVAR_NEVER_AS_STRING", "Deleting working directory '%s' and contents\n", "Released lock file '%s'\n"
// globals: LOG_CUSTOM_GAME_CACHE
void __fastcall CInstallUGCJob::~CInstallUGCJob(CInstallUGCJob *const this)
{
  CUtlString *v2; // r13
  FILE *v3; // rdi
  __int64 v4; // rdi
  char *m_pszString; // rax
  char *v6; // rsi
  bool v7; // zf
  void (__fastcall *v8)(char *, char *, __int64); // rax
  const char *v9; // rax
  char szTemp[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v11; // [rsp+108h] [rbp-28h]

  v2 = (this + 10160);
  v11 = __readfsqword(0x28u);
  *this = &off_4306070;
  v3 = *(this + 47);
  if ( v3 != 0 )
  {
    fclose(v3);
    v4 = LOG_CUSTOM_GAME_CACHE;
    *(this + 47) = 0;
    if ( LoggingSystem_IsChannelEnabled(v4, 2) != 0 )
    {
      v9 = CUtlString::Get(v2);
      LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "Released lock file '%s'\n", v9);
    }
  }
  if ( (sv_dota_custom_game_cache_work_folder.m_nFlags & 0x1000) != 0 )
  {
    v6 = "FCVAR_NEVER_AS_STRING";
  }
  else
  {
    m_pszString = sv_dota_custom_game_cache_work_folder.m_pParent->m_Value.m_pszString;
    if ( m_pszString == 0 || *m_pszString == 0 )
      goto LABEL_12;
    v6 = sv_dota_custom_game_cache_work_folder.m_pParent->m_Value.m_pszString;
  }
  _V_strncpy(szTemp, v6, 260);
  V_StripTrailingSlash(szTemp);
  if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1) != 0 )
    LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 1, "Deleting working directory '%s' and contents\n", szTemp);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 139))(g_pFullFileSystem, szTemp, 0, 0);
LABEL_12:
  if ( g_CustomGameCache.m_pInstallJob == this )
    g_CustomGameCache.m_pInstallJob = 0;
  v7 = (*(this + 10248) & 1) == 0;
  *(this + 1280) = &off_4305FF0;
  if ( !v7 )
    SteamAPI_UnregisterCallback(this + 10240);
  CMsgCustomGameInstallStatus::~CMsgCustomGameInstallStatus((this + 10192));
  if ( *(this + 1273) != 0 )
    CUtlString::FreeMemoryBlock(this + 1273);
  if ( *(this + 1272) != 0 )
    CUtlString::FreeMemoryBlock(this + 1272);
  if ( *(this + 1271) != 0 )
    CUtlString::FreeMemoryBlock(this + 1271);
  if ( *(this + 1270) != 0 )
    CUtlString::FreeMemoryBlock(v2);
  if ( *(this + 1269) != 0 )
    CUtlString::FreeMemoryBlock(this + 1269);
  v8 = *(this + 45);
  if ( v8 != 0 )
    v8(this + 344, this + 344, 3);
  *this = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// CInstallUGCJob::~CInstallUGCJob  (line 124, @0x00000000029b3520, libserver.so)
// calls: CInstallUGCJob::~CInstallUGCJob, operator delete
void __fastcall CInstallUGCJob::~CInstallUGCJob(CInstallUGCJob *const this)
{
  CInstallUGCJob::~CInstallUGCJob(this);
  operator delete(this);
}


// CInstallUGCJob::BYieldingRunGCJob  (line 146, @0x00000000029b1090, libserver.so)  // inlines: CCallResult, CJobCallResult, CUtlString, Cancel, Failure, FileFindHandle_t, GetFloat, InstallCanceled, ReleaselLock, Set, SetGameserverFlag, String, UpdateProgress, V_AppendSlash<long unsigned int>, YldAcquireLock, YldGetLatestDetails, assign, fprintf, fread, length, operator char const*, set_has_latest_timestamp_from_steam, set_has_message, set_has_status, set_latest_timestamp_from_steam, set_message, set_status, ~CCallResult, ~CJobCallResult, ~CUtlString, ~FileFindHandle_t
// calls: CUtlString::Get, LoggingSystem_IsChannelEnabled, CInstallUGCJob::CheckCache, operator new, GCSDK::CJob::BYieldingWaitTime, operator delete, LoggingSystem_Log, std::string::assign(char const*,ulong), std::function<bool(const CMsgCustomGameInstallStatus&)>::operator(), CFmtStrN<256, false>::CFmtStrN, CInstallUGCJob::Failure, SteamAPI_RegisterCallResult (40 total)
// strings: "Aborting cache/install of UGC %llu.\n", "Fetching info about latest revision", "SteamUGCQueryCompleted_t result code %d", "Callback returned false.  Marking install request as canceled.\n", "Asking Steam for latest info about UGC %llu.\n", "Lock file '%s' not present.\n" (40 total)
// globals: LOG_CUSTOM_GAME_CACHE, s_pSteamUGC, CJobCallResult<SteamUGCQueryCompleted_t>::func(SteamUGCQueryCompleted_t*,bool), CInstallUGCJob::YldGetLatestDetails(void)::_assertionConstants
bool __fastcall CInstallUGCJob::BYieldingRunGCJob(CInstallUGCJob *const this)
{
  const CUtlString *v2; // r12
  __int64 (__fastcall *v3)(IBaseFileSystem *, const char *, _QWORD); // r13
  const char *v4; // rax
  __int64 v5; // r14
  __int64 v6; // r12
  char *v7; // rax
  char v8; // dl
  char *v9; // rbx
  __int64 v10; // rsi
  __int64 v12; // rsi
  char v13; // r13
  unsigned int v14; // r12d
  __int64 v15; // rax
  const char *v16; // rax
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  const char *v21; // rax
  unsigned int v22; // edx
  unsigned int v23; // eax
  void (__fastcall *v24)(IFileSystem *, const char *, _QWORD); // rbx
  const char *v25; // rax
  void (__fastcall *v26)(IFileSystem *, const char *, _QWORD); // rbx
  const char *v27; // rax
  __int64 v28; // rax
  ISteamUGC *v29; // rdi
  __int64 v30; // r12
  __int64 v31; // rbx
  __int64 v32; // rax
  __m128d v33; // xmm0
  __int64 v34; // rsi
  char IsChannelEnabled; // al
  double v36; // xmm1_8
  double v37; // xmm0_8
  float v38; // xmm2_4
  float v39; // xmm3_4
  FILE *v40; // rdi
  __int64 v41; // rdi
  const char *v42; // rax
  int v43; // eax
  std::string *v44; // rdi
  const char *v45; // rax
  __int64 v46; // rdx
  float v47; // xmm0_4
  int v48; // ecx
  void *v49; // r14
  __int64 (__fastcall *v50)(IFileSystem *, const char *, uint64 *); // rbx
  const char *v51; // rax
  const char *v52; // r12
  const char *v53; // rax
  int v54; // eax
  const char *v55; // rax
  FILE *v56; // r12
  const char *v57; // rax
  size_t v58; // rbx
  unsigned __int64 v59; // rbx
  const char *v60; // rax
  const char *v61; // rax
  const char *v62; // rax
  const char *v63; // rbx
  const char *v64; // rax
  const char *v65; // rax
  const char *v66; // rax
  FILE *v67; // rax
  FILE *v68; // rbx
  const char *v69; // rax
  const char *v70; // rax
  const char *v71; // rax
  const char *v72; // rax
  CUtlString *v73; // [rsp+20h] [rbp-330h]
  bool bIsVPK; // [rsp+4Fh] [rbp-301h]
  int64 cbCopied; // [rsp+50h] [rbp-300h]
  CUtlString *v76; // [rsp+58h] [rbp-2F8h]
  uint64 usecNextTime; // [rsp+60h] [rbp-2F0h]
  double fpDest; // [rsp+68h] [rbp-2E8h]
  FILE *fpDesta; // [rsp+68h] [rbp-2E8h]
  char *flElapsed; // [rsp+78h] [rbp-2D8h]
  float flElapseda; // [rsp+78h] [rbp-2D8h]
  uint32 nInstalledTimestamp; // [rsp+8Ch] [rbp-2C4h] BYREF
  CUtlString sWildcard; // [rsp+90h] [rbp-2C0h] BYREF
  CUtlString sCopyFilename; // [rsp+A0h] [rbp-2B0h] BYREF
  CUtlString sDestFilename; // [rsp+B0h] [rbp-2A0h] BYREF
  CUtlString v86[2]; // [rsp+C0h] [rbp-290h] BYREF
  uint64 nSizeOnDisk; // [rsp+D0h] [rbp-280h] BYREF
  uint64 nBytesDownloaded; // [rsp+D8h] [rbp-278h] BYREF
  uint64 nBytesTotal; // [rsp+E0h] [rbp-270h] BYREF
  __int64 v90; // [rsp+E8h] [rbp-268h]
  char szStatus[256]; // [rsp+F0h] [rbp-260h] BYREF
  CFmtStrN<256,false> v92; // [rsp+200h] [rbp-150h] BYREF
  unsigned __int64 v93; // [rsp+318h] [rbp-38h]

  v93 = __readfsqword(0x28u);
  if ( *(this + 82) != 0 )
  {
    v2 = (this + 10160);
    v3 = *(g_pFullFileSystem->_vptr_IBaseFileSystem + 13);
    v4 = CUtlString::Get(this + 1270);
    if ( v3(&g_pFullFileSystem->IBaseFileSystem, v4, 0) <= 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1) != 0 )
      {
        v16 = CUtlString::Get(v2);
        LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 1, "Lock file '%s' not present.\n", v16);
      }
    }
    else
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1) != 0 )
      {
        v21 = CUtlString::Get(v2);
        LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 1, "Lock file '%s' is present.\n", v21);
      }
      if ( *(this + 47) != 0 || CInstallUGCJob::YldAcquireLock(this, "r+") )
      {
        if ( !CInstallUGCJob::CheckCache(this, 1) )
          return 1;
      }
      else if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 2) != 0 )
      {
        v45 = CUtlString::Get(v2);
        LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "Failed to aquire lock file '%s', but not giving up yet.\n", v45);
      }
    }
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1) != 0 )
    LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 1, "Asking Steam for latest info about UGC %llu.\n", *(this + 40));
  v5 = (*(*s_pSteamUGC + 16LL))(s_pSteamUGC, this + 320, 1);
  if ( v5 == -1 && AssertMsg_ConditionFailed(&CInstallUGCJob::YldGetLatestDetails(void)::_assertionConstants, 0) != 0 )
    __debugbreak();
  v6 = (*(*s_pSteamUGC + 24LL))(s_pSteamUGC, v5);
  v7 = operator new(0x50u);
  v8 = 0;
  v9 = v7;
  *v7 = 0;
  *(v7 + 9) = 0;
  *(v7 + 4) = off_43060D0;
  flElapsed = v7 + 32;
  *(v7 + 11) = 3401;
  v7[40] = 2;
  *(v7 + 6) = v6;
  *(v7 + 7) = v7;
  *(v7 + 8) = CJobCallResult<SteamUGCQueryCompleted_t>::func;
  if ( v6 != 0 )
  {
    SteamAPI_RegisterCallResult(flElapsed, v6);
    v8 = *v9;
  }
  if ( v8 == 0 )
  {
    while ( 1 )
    {
      GCSDK::CJob::BYieldingWaitTime(GCSDK::g_pJobCur, 0x30D40u);
      if ( *(this + 10232) != 0 )
        goto LABEL_14;
      *(this + 2552) |= 2u;
      std::string::assign(*(this + 1277), "Fetching info about latest revision", 0x23u);
      if ( !std::function<bool ()(CMsgCustomGameInstallStatus const&)>::operator()((this + 344), (this + 10192)) )
        break;
      if ( *(this + 10232) != 0 )
        goto LABEL_14;
      if ( *v9 != 0 )
        goto LABEL_23;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1) != 0 )
      LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 1, "Callback returned false.  Marking install request as canceled.\n");
    *(this + 10232) = 1;
LABEL_14:
    (*(*s_pSteamUGC + 104LL))(s_pSteamUGC, v5);
    v10 = *(v9 + 6);
    *(v9 + 4) = off_43060D0;
    if ( v10 != 0 )
    {
      SteamAPI_UnregisterCallResult(flElapsed);
      *(v9 + 6) = 0;
    }
    operator delete(v9);
LABEL_17:
    g_CustomGameCache.m_pInstallJob = 0;
    if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 2) != 0 )
      LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "Aborting cache/install of UGC %llu.\n", *(this + 40));
    return 1;
  }
LABEL_23:
  v12 = *(v9 + 6);
  v13 = v9[1];
  *(v9 + 4) = off_43060D0;
  v14 = *(v9 + 3);
  if ( v12 != 0 )
  {
    SteamAPI_UnregisterCallResult(flElapsed);
    *(v9 + 6) = 0;
  }
  operator delete(v9);
  v15 = *s_pSteamUGC;
  if ( v13 == 0 )
  {
    (*(v15 + 104))(s_pSteamUGC, v5);
    CInstallUGCJob::Failure(
      this,
      ECustomGameInstallStatus::k_ECustomGameInstallStatus_FailedSteam,
      "SendQueryUGCRequest failed");
    return 1;
  }
  if ( v14 != 1 )
  {
    (*(v15 + 104))(s_pSteamUGC, v5);
    CFmtStrN<256,false>::CFmtStrN(&v92, "SteamUGCQueryCompleted_t result code %d", v14);
LABEL_28:
    CInstallUGCJob::Failure(this, ECustomGameInstallStatus::k_ECustomGameInstallStatus_FailedSteam, v92.m_szBuf);
    return 1;
  }
  v17 = (*(v15 + 32))(s_pSteamUGC, v5, 0, this + 384) == 0;
  v18 = *s_pSteamUGC;
  if ( v17 )
  {
    (*(v18 + 104))(s_pSteamUGC, v5);
    CInstallUGCJob::FailureProbablyBug(this, "GetQueryUGCResult failed");
    return 1;
  }
  (*(v18 + 104))(s_pSteamUGC, v5);
  v19 = *(this + 48);
  v20 = *(this + 40);
  if ( v19 != v20 )
  {
    CFmtStrN<256,false>::CFmtStrN(
      &v92,
      "GetQueryUGCResult returned details with ID %llu; we were asking about %llu",
      v19,
      v20);
    CInstallUGCJob::FailureProbablyBug(this, v92.m_szBuf);
    return 1;
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1) != 0 )
    LoggingSystem_Log(
      LOG_CUSTOM_GAME_CACHE,
      1,
      "UGC query return latest timestamp %u, size %d.\n",
      *(this + 2138),
      *(this + 2467));
  v22 = *(this + 82);
  v23 = *(this + 2138);
  *(this + 2552) |= 4u;
  *(this + 2557) = v23;
  if ( v22 != 0 )
  {
    if ( v23 > v22 )
    {
      CInstallUGCJob::Failure(
        this,
        ECustomGameInstallStatus::k_ECustomGameInstallStatus_RequestedTimestampTooOld,
        "Newer version is available");
      return 1;
    }
    if ( v23 < v22 )
    {
      CInstallUGCJob::Failure(
        this,
        ECustomGameInstallStatus::k_ECustomGameInstallStatus_RequestedTimestampTooNew,
        "Asking for newer version than latest");
      return 1;
    }
  }
  else
  {
    *(this + 82) = v23;
    CInstallUGCJob::SetPathnames(this);
  }
  v24 = *(g_pFullFileSystem->_vptr_IAppSystem + 27);
  v25 = CUtlString::Get(this + 1269);
  v24(g_pFullFileSystem, v25, 0);
  if ( *(this + 47) == 0 && !CInstallUGCJob::YldAcquireLock(this, "w+") )
  {
    v40 = *(this + 47);
    if ( v40 != 0 )
    {
      fclose(v40);
      v41 = LOG_CUSTOM_GAME_CACHE;
      *(this + 47) = 0;
      if ( LoggingSystem_IsChannelEnabled(v41, 2) != 0 )
      {
        v42 = CUtlString::Get(this + 1270);
        LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "Released lock file '%s'\n", v42);
      }
    }
    if ( *(this + 10232) == 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 2) != 0 )
        LoggingSystem_Log(
          LOG_CUSTOM_GAME_CACHE,
          2,
          "Failed to cache/install UGC %llu.  %s\n",
          *(this + 40),
          "Timed out trying to acquire lock");
      v43 = *(this + 2552);
      *(this + 2556) = 101;
      v44 = *(this + 1277);
      *(this + 2552) = v43 | 3;
      std::string::assign(v44, "Timed out trying to acquire lock", 0x20u);
      g_CustomGameCache.m_pInstallJob = 0;
      std::function<bool ()(CMsgCustomGameInstallStatus const&)>::operator()((this + 344), (this + 10192));
      return 1;
    }
    goto LABEL_17;
  }
  if ( !CInstallUGCJob::CheckCache(this, 0) )
    return 1;
  v26 = *(g_pFullFileSystem->_vptr_IAppSystem + 25);
  v76 = (this + 10168);
  v27 = CUtlString::Get(this + 1271);
  v26(g_pFullFileSystem, v27, 0);
  v28 = Plat_USTime();
  v29 = s_pSteamUGC;
  *(this + 2537) = -1;
  v30 = v28;
  if ( (*(*v29 + 488LL))(v29, *(this + 40), 1) == 0 )
  {
    CInstallUGCJob::FailureProbablyBug(this, "ISteamUGC::DownloadItem failed");
    return 1;
  }
  v31 = 0;
  fpDest = Plat_FloatTime();
  while ( 1 )
  {
    v32 = Plat_USTime() - v30;
    v33.m128d_f64[0] = v32 < 0 ? (v32 & 1 | (v32 >> 1)) + (v32 & 1 | (v32 >> 1)) : v32;
    v33.m128d_f64[0] = v33.m128d_f64[0] * 0.000001;
    flElapseda = _mm_movedup_pd(v33).m128d_f64[0];
    if ( *(this + 2537) != -1 )
      break;
    nBytesDownloaded = v31;
    v34 = *(this + 40);
    strcpy(szStatus, "Downloading item");
    nBytesTotal = 0;
    memset(&szStatus[17], 0, 239);
    if ( (*(*s_pSteamUGC + 480LL))(s_pSteamUGC, v34, &nBytesDownloaded, &nBytesTotal) != 0 )
    {
      IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1);
      v36 = flElapseda;
      if ( IsChannelEnabled != 0 )
      {
        LoggingSystem_Log(
          LOG_CUSTOM_GAME_CACHE,
          1,
          "%.1fs: %llu of %llu bytes downloaded.\n",
          nBytesDownloaded,
          nBytesTotal,
          v36);
        v36 = flElapseda;
      }
      V_sprintf_safe<256ul>(
        szStatus,
        "Downloaded %llu of %llu bytes.  %.1fs elapsed",
        nBytesDownloaded,
        nBytesTotal,
        v36);
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 2) != 0 )
    {
      LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "ISteamUGC::GetItemDownloadInfo failed??\n");
    }
    if ( flElapseda > sv_dota_custom_game_cache_download_timeout_total.m_pParent->m_Value.m_fValue )
    {
      CFmtStrN<256,false>::CFmtStrN(
        &v92,
        "Timed out trying to download.  (Downloaded started %.1fs ago.  Currently downloaded %llu/%llu bytes)",
        nBytesDownloaded,
        nBytesTotal,
        flElapseda);
      CInstallUGCJob::Failure(this, ECustomGameInstallStatus::k_ECustomGameInstallStatus_FailedSteam, v92.m_szBuf);
      return 1;
    }
    v37 = Plat_FloatTime();
    if ( (nBytesDownloaded & 0x8000000000000000LL) != 0LL )
      v38 = (nBytesDownloaded & 1 | (nBytesDownloaded >> 1)) + (nBytesDownloaded & 1 | (nBytesDownloaded >> 1));
    else
      v38 = nBytesDownloaded;
    if ( v31 < 0 )
      v39 = (v31 & 1 | (v31 >> 1)) + (v31 & 1 | (v31 >> 1));
    else
      v39 = v31;
    if ( v38 > (((1024.0 * sv_dota_custom_game_cache_download_stuck_mb.m_pParent->m_Value.m_fValue) * 1024.0) + v39) )
    {
      fpDest = v37;
      v31 = nBytesDownloaded;
    }
    else if ( v37 > sv_dota_custom_game_cache_download_stuck_timeout.m_pParent->m_Value.m_fValue + fpDest )
    {
      v47 = v37 - fpDest;
      CFmtStrN<256,false>::CFmtStrN(
        &v92,
        "Download has stalled.  (Was at %llu bytes downloaded %.1fs ago, now is at %llu/%llu bytes downloaded)",
        v31,
        nBytesDownloaded,
        nBytesTotal,
        v47);
      CInstallUGCJob::Failure(this, ECustomGameInstallStatus::k_ECustomGameInstallStatus_FailedSteam, v92.m_szBuf);
      return 1;
    }
    GCSDK::CJob::BYieldingWaitTime(GCSDK::g_pJobCur, 0xF4240u);
    if ( *(this + 10232) == 0 )
    {
      *(this + 2552) |= 2u;
      std::string::assign(*(this + 1277), szStatus, strlen(szStatus));
      if ( !std::function<bool ()(CMsgCustomGameInstallStatus const&)>::operator()((this + 344), (this + 10192)) )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1) != 0 )
          LoggingSystem_Log(
            LOG_CUSTOM_GAME_CACHE,
            1,
            "Callback returned false.  Marking install request as canceled.\n");
        *(this + 10232) = 1;
      }
    }
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1) != 0 )
    LoggingSystem_Log(
      LOG_CUSTOM_GAME_CACHE,
      1,
      "Download completed in %.1fs with result code %d.\n",
      *(this + 2537),
      flElapseda);
  v46 = *(this + 2537);
  if ( v46 != 1 )
  {
    CFmtStrN<256,false>::CFmtStrN(&v92, "Download files with result code %d", v46);
    goto LABEL_28;
  }
  if ( (*(*s_pSteamUGC + 472LL))(s_pSteamUGC, *(this + 40), &nSizeOnDisk, szStatus, 260, &nInstalledTimestamp) == 0 )
  {
    CInstallUGCJob::FailureProbablyBug(this, "ISteamUGC::GetItemInstallInfo failed!");
    return 1;
  }
  v48 = *(this + 82);
  if ( v48 != nInstalledTimestamp )
  {
    CFmtStrN<256,false>::CFmtStrN(
      &v92,
      "Timestamp doesn't match after installation.  GetItemInstallInfo returned time %u, we expected time %u",
      nInstalledTimestamp,
      v48);
    CInstallUGCJob::FailureProbablyBug(this, v92.m_szBuf);
    return 1;
  }
  _V_AppendSlash(szStatus, 260, 47);
  nBytesTotal = 0;
  CUtlString::Set(&nBytesTotal, szStatus);
  CUtlString::operator+(&nBytesTotal, "*");
  if ( nBytesTotal != 0 )
    CUtlString::FreeMemoryBlock(&nBytesTotal);
  nBytesDownloaded = 0;
  v49 = operator new[](0x400000u);
  nBytesTotal = 0;
  v90 = 0;
  v50 = *(g_pFullFileSystem->_vptr_IAppSystem + 37);
  v51 = CUtlString::Get(&sWildcard);
  v52 = v50(g_pFullFileSystem, v51, &nBytesTotal);
  if ( v52 == 0 )
  {
    v65 = CUtlString::Get(&sWildcard);
    CFmtStrN<256,false>::CFmtStrN(&v92, "Didn't find any files matching '%s' after installing UGC?", v65);
LABEL_150:
    CInstallUGCJob::FailureProbablyBug(this, v92.m_szBuf);
    goto LABEL_128;
  }
  v73 = (this + 10176);
  do
  {
    sDestFilename.m_pString = 0;
    CUtlString::Set(&sDestFilename, szStatus);
    CUtlString::operator+(&sDestFilename, v52);
    if ( sDestFilename.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&sDestFilename);
    if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 39))(g_pFullFileSystem, &nBytesTotal) != 0 )
    {
      CFmtStrN<256,false>::CFmtStrN(&v92, "UGC has subdirectory '%s'.  This isn't supported.", v52);
      CInstallUGCJob::FailureProbablyBug(this, v92.m_szBuf);
LABEL_126:
      if ( sCopyFilename.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&sCopyFilename);
      goto LABEL_128;
    }
    CUtlString::operator+(this + 1269, "/");
    CUtlString::operator+(v86, v52);
    if ( v86[0].m_pString != 0 )
      CUtlString::FreeMemoryBlock(v86);
    v53 = CUtlString::Get(v73);
    v54 = V_stricmp_fast(v53, v52);
    bIsVPK = v54 == 0;
    if ( v54 == 0 )
      CRC64_Init(&nBytesDownloaded);
    v55 = CUtlString::Get(&sCopyFilename);
    v56 = fopen64(v55, "rb");
    if ( v56 == 0 )
    {
      v70 = CUtlString::Get(&sCopyFilename);
      CFmtStrN<256,false>::CFmtStrN(&v92, "Failed to open src '%s' to copy into cache", v70);
LABEL_159:
      CInstallUGCJob::FailureProbablyBug(this, v92.m_szBuf);
LABEL_124:
      if ( sDestFilename.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&sDestFilename);
      goto LABEL_126;
    }
    v57 = CUtlString::Get(&sDestFilename);
    fpDesta = fopen64(v57, "wb");
    if ( fpDesta == 0 )
    {
      v69 = CUtlString::Get(&sDestFilename);
      CFmtStrN<256,false>::CFmtStrN(&v92, "Failed to open dest '%s' to copy into cache", v69);
      goto LABEL_159;
    }
    usecNextTime = Plat_USTime();
    cbCopied = 0;
    while ( 1 )
    {
      v59 = Plat_USTime();
      if ( usecNextTime <= v59 )
      {
        if ( *(this + 10232) == 0 )
        {
          *(this + 2552) |= 2u;
          std::string::assign(*(this + 1277), "Copying files", 0xDu);
          if ( !std::function<bool ()(CMsgCustomGameInstallStatus const&)>::operator()((this + 344), (this + 10192)) )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1) != 0 )
              LoggingSystem_Log(
                LOG_CUSTOM_GAME_CACHE,
                1,
                "Callback returned false.  Marking install request as canceled.\n");
            *(this + 10232) = 1;
          }
        }
        usecNextTime = v59 + 200000;
      }
      v58 = fread(v49, 1u, 0x400000u, v56);
      if ( ferror(v56) != 0 )
        goto LABEL_122;
      if ( v58 == 0 )
        break;
      if ( bIsVPK )
        CRC64_ProcessBuffer(&nBytesDownloaded, v49, v58);
      if ( fwrite(v49, 1u, v58, fpDesta) != v58 )
      {
        v62 = CUtlString::Get(&sDestFilename);
        CFmtStrN<256,false>::CFmtStrN(&v92, "Failed writing '%s' to copy into cache", v62);
        goto LABEL_123;
      }
      cbCopied += v58;
      if ( feof(v56) != 0 )
        goto LABEL_137;
    }
    if ( feof(v56) == 0 )
    {
LABEL_122:
      v60 = CUtlString::Get(&sCopyFilename);
      CFmtStrN<256,false>::CFmtStrN(&v92, "Failed reading '%s' to copy into cache", v60);
LABEL_123:
      CInstallUGCJob::FailureProbablyBug(this, v92.m_szBuf);
      fclose(v56);
      fclose(fpDesta);
      goto LABEL_124;
    }
LABEL_137:
    fclose(v56);
    fclose(fpDesta);
    if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1) != 0 )
    {
      v63 = CUtlString::Get(&sDestFilename);
      v64 = CUtlString::Get(&sCopyFilename);
      LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 1, "Copied %lld bytes '%s' -> '%s'\n", cbCopied, v64, v63);
    }
    if ( bIsVPK )
      CRC64_Final(&nBytesDownloaded);
    v52 = (*(g_pFullFileSystem->_vptr_IAppSystem + 38))(g_pFullFileSystem, &nBytesTotal);
    if ( sDestFilename.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&sDestFilename);
    if ( sCopyFilename.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&sCopyFilename);
  }
  while ( v52 != 0 );
  (*(g_pFullFileSystem->_vptr_IAppSystem + 40))(g_pFullFileSystem, &nBytesTotal);
  if ( v49 != 0 )
    operator delete[](v49);
  if ( nBytesDownloaded == 0 )
  {
    v61 = CUtlString::Get(v73);
    CFmtStrN<256,false>::CFmtStrN(&v92, "Never found VPK file %s", v61);
    goto LABEL_150;
  }
  v66 = CUtlString::Get(v76);
  v67 = fopen64(v66, "wt");
  v68 = v67;
  if ( v67 == 0 )
  {
    v72 = CUtlString::Get(v76);
    CFmtStrN<256,false>::CFmtStrN(&v92, "Failed to create CRC file '%s'", v72);
    goto LABEL_150;
  }
  __fprintf_chk(v67, 1, "%016llx", nBytesDownloaded);
  fclose(v68);
  if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1) != 0 )
  {
    v71 = CUtlString::Get(v76);
    LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 1, "Recorded CRC %016llx in '%s'.\n", nBytesDownloaded, v71);
  }
  CInstallUGCJob::Success(this);
LABEL_128:
  if ( nBytesTotal != 0 )
    (*(*nBytesTotal + 320LL))(nBytesTotal, &nBytesTotal);
  nBytesTotal = 0;
  v90 = 0;
  if ( sWildcard.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&sWildcard);
  return 1;
}


// CInstallUGCJob::SetPathnames  (line 423, @0x00000000029af890, libserver.so)  // inlines: GetString, SetPtr, V_ComposeFileName<long unsigned int>, _V_strcpy, operator=, strcpy, ~CUtlString
// calls: V_IsAbsolutePath, __strcpy_chk, V_FixSlashes, V_StripTrailingSlash, CUtlString::Format, CUtlString::operator+, CUtlString::FreeMemoryBlock, _V_ComposeFileName, __stack_chk_fail, _Unwind_Resume
// callers: CInstallUGCJob::BYieldingRunGCJob, CDOTACustomGameCache::StartInstallingUGC
// strings: "FCVAR_NEVER_AS_STRING", "%s/%llu/%u", "GAMEROOT"
void __fastcall CInstallUGCJob::SetPathnames(CInstallUGCJob *const this)
{
  char *m_pszString; // r13
  __int64 v3; // r15
  bool v4; // zf
  __int64 v5; // r15
  __int64 v6; // r13
  CUtlString v7; // [rsp+0h] [rbp-270h] BYREF
  __int64 v8; // [rsp+10h] [rbp-260h]
  char szAbsRoot[272]; // [rsp+20h] [rbp-250h] BYREF
  char szGameBase[264]; // [rsp+130h] [rbp-140h] BYREF
  unsigned __int64 v11; // [rsp+238h] [rbp-38h]

  m_pszString = "FCVAR_NEVER_AS_STRING";
  v11 = __readfsqword(0x28u);
  if ( (sv_dota_custom_game_cache_shared_folder.m_nFlags & 0x1000) == 0 )
  {
    m_pszString = "";
    if ( sv_dota_custom_game_cache_shared_folder.m_pParent->m_Value.m_pszString != 0 )
      m_pszString = sv_dota_custom_game_cache_shared_folder.m_pParent->m_Value.m_pszString;
  }
  if ( V_IsAbsolutePath(m_pszString) != 0 )
  {
    __strcpy_chk(szAbsRoot, m_pszString, 260);
    V_FixSlashes(szAbsRoot, 47);
  }
  else
  {
    (*(g_pFullFileSystem->_vptr_IAppSystem + 24))(g_pFullFileSystem, "GAMEROOT", 0, szGameBase, 260);
    _V_ComposeFileName(szGameBase, m_pszString, szAbsRoot, 260);
  }
  V_StripTrailingSlash(szAbsRoot);
  CUtlString::Format(this + 1269, "%s/%llu/%u", szAbsRoot, *(this + 40), *(this + 82));
  CUtlString::operator+(this + 1269, "/");
  CUtlString::operator+(&v7, "lock");
  v3 = v8;
  if ( *(this + 1270) != 0 )
    CUtlString::FreeMemoryBlock(this + 1270);
  v4 = v7.m_pString == 0;
  *(this + 1270) = v3;
  if ( !v4 )
    CUtlString::FreeMemoryBlock(&v7);
  CUtlString::operator+(this + 1269, "/");
  CUtlString::operator+(&v7, "crc");
  v5 = v8;
  if ( *(this + 1271) != 0 )
    CUtlString::FreeMemoryBlock(this + 1271);
  v4 = v7.m_pString == 0;
  *(this + 1271) = v5;
  if ( !v4 )
    CUtlString::FreeMemoryBlock(&v7);
  CUtlString::operator+(this + 1269, "/");
  CUtlString::operator+(&v7, this + 1272);
  v6 = v8;
  if ( *(this + 1273) != 0 )
    CUtlString::FreeMemoryBlock(this + 1273);
  v4 = v7.m_pString == 0;
  *(this + 1273) = v6;
  if ( !v4 )
    CUtlString::FreeMemoryBlock(&v7);
}


// CInstallUGCJob::CheckCache  (line 449, @0x00000000029b0c20, libserver.so)  // inlines: Failure, InstallCanceled, ReleaselLock, String, Success, assign, length, operator char const*, set_has_message, set_has_status, set_message, set_status
// calls: CUtlString::Get, fopen64, fscanf, fclose, LoggingSystem_IsChannelEnabled, std::string::assign(char const*,ulong), CUtlString::operator=, std::function<bool(const CMsgCustomGameInstallStatus&)>::operator(), LoggingSystem_Log, CFmtStrN<256, false>::CFmtStrN, strlen, __stack_chk_fail
// callers: CInstallUGCJob::BYieldingRunGCJob
// strings: "CRC file '%s' is not present.  Directory appears to contain a leftover failure.  Will try, "Released lock file '%s'\n", "Failed to parse CRC from '%s'.  Will try to re-download and repair.", "CRC mismatched: Server has %016llx, client expects %016llx", "Aborting cache/install of UGC %llu.\n", "Cache hit.  CRC matches.\n" (8 total)
// globals: LOG_CUSTOM_GAME_CACHE, s_sInstalledUGCPath, s_nInstalledUGCID
bool __fastcall CInstallUGCJob::CheckCache(CInstallUGCJob *const this, bool bExpectValidDirectory)
{
  const CUtlString *v3; // r13
  const char *v5; // rax
  FILE *v6; // rax
  FILE *v7; // r12
  __int64 v8; // rcx
  FILE *v9; // rdi
  __int64 v10; // rdi
  char IsChannelEnabled; // r12
  const char *v13; // rax
  const char *v14; // rax
  const char *v15; // rax
  FILE *v16; // rdi
  __int64 v17; // rdi
  const char *v18; // rax
  int v19; // eax
  size_t v20; // rax
  const char *v21; // rax
  CRC64_t crc; // [rsp+8h] [rbp-148h] BYREF
  CFmtStrN<256,false> v23; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v24; // [rsp+128h] [rbp-28h]

  v3 = (this + 10168);
  v24 = __readfsqword(0x28u);
  v5 = CUtlString::Get(this + 1271);
  v6 = fopen64(v5, "rt");
  v7 = v6;
  if ( v6 == 0 )
  {
    if ( bExpectValidDirectory )
    {
      IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 2);
      if ( IsChannelEnabled != 0 )
      {
        v13 = CUtlString::Get(v3);
        LoggingSystem_Log(
          LOG_CUSTOM_GAME_CACHE,
          2,
          "CRC file '%s' is not present.  Directory appears to contain a leftover failure.  Will try to download and repair",
          v13);
        return IsChannelEnabled;
      }
    }
    return 1;
  }
  crc = 0;
  fscanf(v6, "%llx", &crc);
  fclose(v7);
  if ( crc == 0 )
  {
    IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 2);
    if ( IsChannelEnabled != 0 )
    {
      v15 = CUtlString::Get(v3);
      LoggingSystem_Log(
        LOG_CUSTOM_GAME_CACHE,
        2,
        "Failed to parse CRC from '%s'.  Will try to re-download and repair.",
        v15);
      return IsChannelEnabled;
    }
    return 1;
  }
  v8 = *(this + 42);
  if ( v8 != 0 && crc != v8 )
  {
    CFmtStrN<256,false>::CFmtStrN(&v23, "CRC mismatched: Server has %016llx, client expects %016llx", crc, v8);
    v16 = *(this + 47);
    if ( v16 != 0 )
    {
      fclose(v16);
      v17 = LOG_CUSTOM_GAME_CACHE;
      *(this + 47) = 0;
      if ( LoggingSystem_IsChannelEnabled(v17, 2) != 0 )
      {
        v18 = CUtlString::Get(this + 1270);
        LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "Released lock file '%s'\n", v18);
      }
    }
    if ( *(this + 10232) == 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 2) != 0 )
        LoggingSystem_Log(
          LOG_CUSTOM_GAME_CACHE,
          2,
          "Failed to cache/install UGC %llu.  %s\n",
          *(this + 40),
          v23.m_szBuf);
      v19 = *(this + 2552);
      *(this + 2556) = 105;
      *(this + 2552) = v19 | 3;
      v20 = strlen(v23.m_szBuf);
      std::string::assign(*(this + 1277), v23.m_szBuf, v20);
      g_CustomGameCache.m_pInstallJob = 0;
      std::function<bool ()(CMsgCustomGameInstallStatus const&)>::operator()((this + 344), (this + 10192));
      return 0;
    }
    g_CustomGameCache.m_pInstallJob = 0;
    if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 2) == 0 )
      return 0;
LABEL_30:
    LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "Aborting cache/install of UGC %llu.\n", *(this + 40));
    return 0;
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1) != 0 )
    LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 1, "Cache hit.  CRC matches.\n");
  *(this + 2552) |= 2u;
  std::string::assign(*(this + 1277), "OK", 2u);
  v9 = *(this + 47);
  if ( v9 != 0 )
  {
    fclose(v9);
    v10 = LOG_CUSTOM_GAME_CACHE;
    *(this + 47) = 0;
    if ( LoggingSystem_IsChannelEnabled(v10, 2) != 0 )
    {
      v14 = CUtlString::Get(this + 1270);
      LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "Released lock file '%s'\n", v14);
    }
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 2) != 0 )
  {
    v21 = CUtlString::Get(this + 1273);
    LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "Finished cache/install of UGC %llu OK at '%s'.\n", *(this + 40), v21);
  }
  IsChannelEnabled = *(this + 10232);
  g_CustomGameCache.m_pInstallJob = 0;
  if ( IsChannelEnabled != 0 )
  {
    IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 2);
    if ( IsChannelEnabled == 0 )
      return IsChannelEnabled;
    goto LABEL_30;
  }
  s_nInstalledUGCID = *(this + 40);
  CUtlString::operator=(&s_sInstalledUGCPath, this + 1273);
  *(this + 2556) = 1;
  *(this + 2552) |= 1u;
  std::function<bool ()(CMsgCustomGameInstallStatus const&)>::operator()((this + 344), (this + 10192));
  return IsChannelEnabled;
}


// CInstallUGCJob::YldAcquireLock  (line 574, @0x00000000029994c0, libserver.so)  // inlines: GetFloat, InstallCanceled, String, UpdateProgress, assign, length, set_has_message, set_message
// calls: Plat_USTime, LoggingSystem_IsChannelEnabled, CFmtStrN<256, false>::CFmtStrN, strlen, std::string::assign(char const*,ulong), std::function<bool(const CMsgCustomGameInstallStatus&)>::operator(), CUtlString::Get, fopen64, GCSDK::CJob::BYieldingWaitTime, LoggingSystem_Log, __stack_chk_fail
// callers: CInstallUGCJob::BYieldingRunGCJob
// strings: "Acquiring lock.  (%1.fs elapsed)", "Callback returned false.  Marking install request as canceled.\n", "Lock aquired after %.1fs.\n", "Acquiring lock file '%s' with mode '%s'.\n", "Aborting cache/install of UGC %llu.\n"
// globals: LOG_CUSTOM_GAME_CACHE
bool __fastcall CInstallUGCJob::YldAcquireLock(CInstallUGCJob *const this, const char *pszOpenMode)
{
  __int64 v4; // r12
  __int64 v5; // rax
  double i; // xmm0_8
  float v7; // xmm0_4
  bool v8; // r15
  size_t v10; // rax
  const char *v11; // rax
  __int64 v12; // rax
  double v13; // xmm0_8
  float v14; // xmm0_4
  char IsChannelEnabled; // bl
  const char *v16; // rax
  float flElapsed; // [rsp+18h] [rbp-158h]
  CFmtStrN<256,false> v18; // [rsp+20h] [rbp-150h] BYREF
  unsigned __int64 v19; // [rsp+138h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  v4 = Plat_USTime();
  if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1) != 0 )
  {
    v16 = CUtlString::Get(this + 1270);
    LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 1, "Acquiring lock file '%s' with mode '%s'.\n", v16, pszOpenMode);
  }
  v5 = Plat_USTime() - v4;
  if ( v5 < 0 )
    goto LABEL_16;
LABEL_4:
  for ( i = v5; ; i = (v5 & 1 | (v5 >> 1)) + (v5 & 1 | (v5 >> 1)) )
  {
    v7 = i * 0.000001;
    CFmtStrN<256,false>::CFmtStrN(&v18, "Acquiring lock.  (%1.fs elapsed)", v7);
    if ( *(this + 10232) != 0 )
      break;
    *(this + 2552) |= 2u;
    v10 = strlen(v18.m_szBuf);
    std::string::assign(*(this + 1277), v18.m_szBuf, v10);
    v8 = std::function<bool ()(CMsgCustomGameInstallStatus const&)>::operator()((this + 344), (this + 10192));
    if ( !v8 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1) != 0 )
        LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 1, "Callback returned false.  Marking install request as canceled.\n");
      *(this + 10232) = 1;
      break;
    }
    if ( *(this + 10232) != 0 )
      break;
    v11 = CUtlString::Get(this + 1270);
    *(this + 47) = fopen64(v11, pszOpenMode);
    v12 = Plat_USTime() - v4;
    if ( v12 < 0 )
      v13 = (v12 & 1 | (v12 >> 1)) + (v12 & 1 | (v12 >> 1));
    else
      v13 = v12;
    v14 = v13 * 0.000001;
    if ( *(this + 47) != 0 )
    {
      flElapsed = v14;
      IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1);
      if ( IsChannelEnabled != 0 )
      {
        v8 = IsChannelEnabled;
        LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 1, "Lock aquired after %.1fs.\n", flElapsed);
      }
      return v8;
    }
    if ( v14 > sv_dota_custom_game_cache_lock_file_timeout.m_pParent->m_Value.m_fValue )
      return 0;
    GCSDK::CJob::BYieldingWaitTime(GCSDK::g_pJobCur, 0x30D40u);
    v5 = Plat_USTime() - v4;
    if ( v5 >= 0 )
      goto LABEL_4;
LABEL_16:
    ;
  }
  g_CustomGameCache.m_pInstallJob = 0;
  if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 2) == 0 )
    return 0;
  v8 = 0;
  LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "Aborting cache/install of UGC %llu.\n", *(this + 40));
  return v8;
}


// CInstallUGCJob::Success  (line 618, @0x00000000029b08c0, libserver.so)  // inlines: InstallCanceled, ReleaselLock, String, assign, set_has_message, set_has_status, set_message, set_status
// calls: std::string::assign(char const*,ulong), fclose, LoggingSystem_IsChannelEnabled, CUtlString::operator=, std::function<bool(const CMsgCustomGameInstallStatus&)>::operator(), CUtlString::Get, LoggingSystem_Log
// callers: CInstallUGCJob::BYieldingRunGCJob
// strings: "Released lock file '%s'\n", "Finished cache/install of UGC %llu OK at '%s'.\n", "Aborting cache/install of UGC %llu.\n"
// globals: LOG_CUSTOM_GAME_CACHE, s_sInstalledUGCPath, s_nInstalledUGCID
void __fastcall CInstallUGCJob::Success(CInstallUGCJob *const this)
{
  FILE *v2; // rdi
  __int64 v3; // rdi
  bool v4; // zf
  const char *v5; // rax
  const char *v6; // rax

  *(this + 2552) |= 2u;
  std::string::assign(*(this + 1277), "OK", 2u);
  v2 = *(this + 47);
  if ( v2 != 0 )
  {
    fclose(v2);
    v3 = LOG_CUSTOM_GAME_CACHE;
    *(this + 47) = 0;
    if ( LoggingSystem_IsChannelEnabled(v3, 2) != 0 )
    {
      v5 = CUtlString::Get(this + 1270);
      LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "Released lock file '%s'\n", v5);
    }
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 2) != 0 )
  {
    v6 = CUtlString::Get(this + 1273);
    LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "Finished cache/install of UGC %llu OK at '%s'.\n", *(this + 40), v6);
  }
  v4 = *(this + 10232) == 0;
  g_CustomGameCache.m_pInstallJob = 0;
  if ( v4 )
  {
    s_nInstalledUGCID = *(this + 40);
    CUtlString::operator=(&s_sInstalledUGCPath, this + 1273);
    *(this + 2556) = 1;
    *(this + 2552) |= 1u;
    std::function<bool ()(CMsgCustomGameInstallStatus const&)>::operator()((this + 344), (this + 10192));
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 2) != 0 )
  {
    LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "Aborting cache/install of UGC %llu.\n", *(this + 40));
  }
}


// CInstallUGCJob::Failure  (line 657, @0x00000000029b0730, libserver.so)  // inlines: InstallCanceled, ReleaselLock, String, assign, length, set_has_message, set_has_status, set_message, set_status
// calls: fclose, LoggingSystem_IsChannelEnabled, strlen, std::string::assign(char const*,ulong), std::function<bool(const CMsgCustomGameInstallStatus&)>::operator(), CUtlString::Get, LoggingSystem_Log
// callers: CInstallUGCJob::BYieldingRunGCJob
// strings: "Released lock file '%s'\n", "Failed to cache/install UGC %llu.  %s\n", "Aborting cache/install of UGC %llu.\n"
// globals: LOG_CUSTOM_GAME_CACHE
void __fastcall CInstallUGCJob::Failure(
        CInstallUGCJob *const this,
        ECustomGameInstallStatus eFailure,
        const char *pszMsg)
{
  FILE *v6; // rdi
  __int64 v7; // rdi
  int v8; // eax
  size_t v9; // rax
  const char *v10; // rax

  v6 = *(this + 47);
  if ( v6 != 0 && (fclose(v6), v7 = LOG_CUSTOM_GAME_CACHE, *(this + 47) = 0, LoggingSystem_IsChannelEnabled(v7, 2) != 0) )
  {
    v10 = CUtlString::Get(this + 1270);
    LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "Released lock file '%s'\n", v10);
    if ( *(this + 10232) == 0 )
      goto LABEL_4;
  }
  else if ( *(this + 10232) == 0 )
  {
LABEL_4:
    if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 2) != 0 )
      LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "Failed to cache/install UGC %llu.  %s\n", *(this + 40), pszMsg);
    v8 = *(this + 2552);
    *(this + 2556) = eFailure;
    *(this + 2552) = v8 | 3;
    v9 = strlen(pszMsg);
    std::string::assign(*(this + 1277), pszMsg, v9);
    g_CustomGameCache.m_pInstallJob = 0;
    std::function<bool ()(CMsgCustomGameInstallStatus const&)>::operator()((this + 344), (this + 10192));
    return;
  }
  g_CustomGameCache.m_pInstallJob = 0;
  if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 2) != 0 )
    LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "Aborting cache/install of UGC %llu.\n", *(this + 40));
}


// CInstallUGCJob::FailureProbablyBug  (line 682, @0x00000000029b0a50, libserver.so)  // inlines: Failure, InstallCanceled, LeafCodeInfo_t, ReleaselLock, String, assign, length, set_has_message, set_has_status, set_message, set_status
// calls: fclose, LoggingSystem_IsChannelEnabled, strlen, std::string::assign(char const*,ulong), std::function<bool(const CMsgCustomGameInstallStatus&)>::operator(), LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CUtlString::Get, LoggingSystem_Log
// callers: CInstallUGCJob::BYieldingRunGCJob
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/dota/dota, "FailureProbablyBug", "Internal error trying to install UGC %llu.  %s\n", "Released lock file '%s'\n", "Aborting cache/install of UGC %llu.\n", "Failed to cache/install UGC %llu.  %s\n"
// globals: LOG_CUSTOM_GAME_CACHE
void __fastcall CInstallUGCJob::FailureProbablyBug(CInstallUGCJob *const this, const char *pszMsg)
{
  FILE *v4; // rdi
  __int64 v5; // rdi
  int v6; // eax
  size_t v7; // rax
  __int64 v8; // r8
  const char *v9; // rax
  LeafCodeInfo_t v10; // [rsp+0h] [rbp-30h] BYREF

  v4 = *(this + 47);
  if ( v4 != 0 && (fclose(v4), v5 = LOG_CUSTOM_GAME_CACHE, *(this + 47) = 0, LoggingSystem_IsChannelEnabled(v5, 2) != 0) )
  {
    v9 = CUtlString::Get(this + 1270);
    LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "Released lock file '%s'\n", v9);
    if ( *(this + 10232) == 0 )
      goto LABEL_4;
  }
  else if ( *(this + 10232) == 0 )
  {
LABEL_4:
    if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 2) != 0 )
      LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "Failed to cache/install UGC %llu.  %s\n", *(this + 40), pszMsg);
    v6 = *(this + 2552);
    *(this + 2556) = 102;
    *(this + 2552) = v6 | 3;
    v7 = strlen(pszMsg);
    std::string::assign(*(this + 1277), pszMsg, v7);
    g_CustomGameCache.m_pInstallJob = 0;
    std::function<bool ()(CMsgCustomGameInstallStatus const&)>::operator()((this + 344), (this + 10192));
    goto LABEL_7;
  }
  g_CustomGameCache.m_pInstallJob = 0;
  if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 2) != 0 )
    LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 2, "Aborting cache/install of UGC %llu.\n", *(this + 40));
LABEL_7:
  if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 4) != 0 )
  {
    v8 = *(this + 40);
    v10.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/dota/dota_server_cust"
                   "om_game_cache.cpp";
    v10.m_szFunction = "FailureProbablyBug";
    v10.m_nLine = 687;
    LoggingSystem_Log(
      LOG_CUSTOM_GAME_CACHE,
      LoggingSeverity_t::LS_ERROR,
      &v10,
      "Internal error trying to install UGC %llu.  %s\n",
      v8,
      pszMsg);
  }
}


// CInstallUGCJob::OnDownloadResult  (line 705, @0x00000000029a9f40, libserver.so)
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "UGC DownloadItemResult_t callback for unexpected ID %llu!\n", "UGC DownloadItemResult_t callback, result %d.\n"
// globals: LOG_CUSTOM_GAME_CACHE
void __fastcall CInstallUGCJob::OnDownloadResult(CInstallUGCJob *const this, DownloadItemResult_t *pParam)
{
  if ( pParam->m_nPublishedFileId == *(this + 40) )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1) != 0 )
      LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 1, "UGC DownloadItemResult_t callback, result %d.\n", pParam->m_eResult);
    *(this + 2537) = pParam->m_eResult;
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 2) != 0 )
  {
    LoggingSystem_Log(
      LOG_CUSTOM_GAME_CACHE,
      2,
      "UGC DownloadItemResult_t callback for unexpected ID %llu!\n",
      pParam->m_nPublishedFileId);
  }
}


// CDOTACustomGameCache::CDOTACustomGameCache  (line 717, @0x0000000002997940, libserver.so)
void __fastcall CDOTACustomGameCache::CDOTACustomGameCache(CDOTACustomGameCache *const this)
{
  this->_vptr_IGameSystem = &off_4306110;
  this->_vptr_IUGCAddonPathResolver = &off_4306268;
  this->m_pInstallJob = 0;
}


// CDOTACustomGameCache::~CDOTACustomGameCache  (line 722, @0x00000000029906c0, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CDOTACustomGameCache::~CDOTACustomGameCache(CDOTACustomGameCache *const this)
{
  this->_vptr_IUGCAddonPathResolver = &off_4306268;
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CDOTACustomGameCache::~CDOTACustomGameCache  (line 722, @0x00000000029906e0, libserver.so)  // inlines: ~CAutoGameSystem, ~CDOTACustomGameCache
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CDOTACustomGameCache::~CDOTACustomGameCache(CDOTACustomGameCache *const this)
{
  this->_vptr_IUGCAddonPathResolver = &off_4306268;
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTACustomGameCache::Init  (line 726, @0x0000000002991160, libserver.so)
bool __fastcall CDOTACustomGameCache::Init(CDOTACustomGameCache *const this)
{
  if ( (*(*engine + 160LL))(engine) != 0 )
    (*(g_pApplication->_vptr_IAppSystem + 50))(g_pApplication, &this->IUGCAddonPathResolver);
  return 1;
}


// CDOTACustomGameCache::GetFullAddonPathFromAddonName  (line 736, @0x00000000029912b0, libserver.so)  // inlines: String, V_strncpy<unsigned int>
// calls: V_atoui64, CUtlString::Get, _V_strncpy
// globals: s_nInstalledUGCID, s_sInstalledUGCPath
bool __fastcall CDOTACustomGameCache::GetFullAddonPathFromAddonName(
        const CDOTACustomGameCache *const this,
        const char *pAddonName,
        char *pchFolder,
        uint32 cchFolderSize)
{
  const char *v6; // rax

  if ( s_nInstalledUGCID == 0 )
    return 0;
  if ( V_atoui64(pAddonName, pAddonName, pchFolder, cchFolderSize) != s_nInstalledUGCID )
    return 0;
  v6 = CUtlString::Get(&s_sInstalledUGCPath);
  _V_strncpy(pchFolder, v6, cchFolderSize);
  return 1;
}


// CDOTACustomGameCache::Shutdown  (line 744, @0x00000000029906b0, libserver.so)
void __fastcall CDOTACustomGameCache::Shutdown(CDOTACustomGameCache *const this)
{
  ;
}


// CDOTACustomGameCache::StartInstallingUGC  (line 748, @0x00000000029a3200, libserver.so)  // inlines: CCallback, CCallbackBase, CCallbackImpl, CGCClientJob, CInstallUGCJob, CUtlString, GetString, Init, LeafCodeInfo_t, Register, SetGameserverFlag, SteamGameServerClient, V_AppendSlash<long unsigned int>, set_has_status, set_status, ~CCallback, ~CCallbackImpl, ~CGCClientJob, ~CUtlString, ~_Function_base, ~function
// calls: AssertMsg_ConditionFailed, LoggingSystem_IsChannelEnabled, std::function<bool(const CMsgCustomGameInstallStatus&)>::function, operator new, GCSDK::CJob::CJob, CMsgCustomGameInstallStatus::CMsgCustomGameInstallStatus, SteamAPI_RegisterCallback, CUtlString::Format, CInstallUGCJob::SetPathnames, SteamGameServer_GetHSteamPipe, GCSDK::CJob::StartJobDelayed, LoggingSystem_Log (26 total)
// callers: CDOTAGCServerSystem::ActivateServerFromLobby, sv_dota_custom_game_cache_test_download
// strings: "Tried to install UGC when already busy doing soemthing else", "%llu.vpk", "Shouldn't be using the custom game cache except on dedicated server!", "Received request for UGC %llu, expected timestamp %d CRC %016llx\n", "STEAMUGC_INTERFACE_VERSION009", "FCVAR_NEVER_AS_STRING" (19 total)
// globals: CDOTACustomGameCache::StartInstallingUGC(ulong long,uint,ulong long,std::function<bool ()(CMsgCustomGameInstallStatus const&)>)::_assertionConstants, LOG_CUSTOM_GAME_CACHE, CInstallUGCJob::OnDownloadResult(DownloadItemResult_t *), SteamGameServerInternal_ModuleContext(void)::ctx, s_pSteamUGC, sv_dota_custom_game_cache_work_folder, CInstallUGCJob::CInstallUGCJob(ulong long,uint,ulong long,std::function<bool ()(CMsgCustomGameInstallStatus const&)>)::_assertionConstants
void __fastcall CDOTACustomGameCache::StartInstallingUGC(
        CDOTACustomGameCache *const this,
        PublishedFileId_t id,
        uint32 nExpectedTimeStamp,
        uint64 nExpectedCRC,
        const std::function<bool(const CMsgCustomGameInstallStatus&)> *a5)
{
  char *v8; // rbx
  GCSDK::CJob *m_pInstallJob; // r14
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdi
  std::_Function_base::_Manager_type M_manager; // rax
  __int64 v14; // rdi
  ISteamClient *m_pSteamClient; // rax
  __int64 v16; // rdi
  unsigned int v17; // eax
  char *m_pszString; // rax
  char *v19; // rcx
  int v20; // ecx
  int v21; // eax
  char *v22; // rdx
  __int64 v23; // rdi
  ISteamClient *Interface; // rax
  unsigned int HSteamPipe; // [rsp+4h] [rbp-CCh]
  __int64 (__fastcall *v26)(char *, _QWORD, _QWORD, const char *); // [rsp+8h] [rbp-C8h]
  unsigned int HSteamUser; // [rsp+8h] [rbp-C8h]
  char *value; // [rsp+10h] [rbp-C0h]
  unsigned int valuea; // [rsp+10h] [rbp-C0h]
  unsigned int valueb; // [rsp+10h] [rbp-C0h]
  LeafCodeInfo_t v33; // [rsp+30h] [rbp-A0h] BYREF
  char s[32]; // [rsp+50h] [rbp-80h] BYREF
  std::function<bool(const CMsgCustomGameInstallStatus&)> __x; // [rsp+70h] [rbp-60h] BYREF
  unsigned __int64 v36; // [rsp+98h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  if ( (*(*engine + 160LL))(engine) == 0
    && AssertMsg_ConditionFailed(
         &CDOTACustomGameCache::StartInstallingUGC(unsigned long long,unsigned int,unsigned long long,std::function<bool ()(CMsgCustomGameInstallStatus const&)>)::_assertionConstants,
         "Shouldn't be using the custom game cache except on dedicated server!") != 0 )
  {
    __debugbreak();
  }
  if ( this->m_pInstallJob != 0
    && AssertMsg_ConditionFailed(
         &CDOTACustomGameCache::StartInstallingUGC(unsigned long long,unsigned int,unsigned long long,std::function<bool ()(CMsgCustomGameInstallStatus const&)>)::_assertionConstants,
         "Tried to install UGC when already busy doing soemthing else") != 0 )
  {
    __debugbreak();
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1) != 0 )
    LoggingSystem_Log(
      LOG_CUSTOM_GAME_CACHE,
      1,
      "Received request for UGC %llu, expected timestamp %d CRC %016llx\n",
      id,
      nExpectedTimeStamp,
      nExpectedCRC);
  std::function<bool ()(CMsgCustomGameInstallStatus const&)>::function(&__x, a5);
  v8 = operator new(0x2828u);
  m_pInstallJob = v8;
  GCSDK::CJob::CJob(v8, &jobMgr);
  *(v8 + 42) = nExpectedCRC;
  *(v8 + 38) = &unk_4C49E98;
  *v8 = &off_4306070;
  *(v8 + 78) = 4;
  *(v8 + 40) = id;
  *(v8 + 82) = nExpectedTimeStamp;
  std::function<bool ()(CMsgCustomGameInstallStatus const&)>::function((v8 + 344), &__x);
  *(v8 + 47) = 0;
  *(v8 + 2537) = -1;
  *(v8 + 1269) = 0;
  *(v8 + 1270) = 0;
  *(v8 + 1271) = 0;
  *(v8 + 1272) = 0;
  *(v8 + 1273) = 0;
  CMsgCustomGameInstallStatus::CMsgCustomGameInstallStatus((v8 + 10192));
  v8[10232] = 0;
  *(v8 + 2563) = 0;
  *(v8 + 1280) = off_4306030;
  *(v8 + 1282) = 0;
  *(v8 + 1283) = 0;
  *(v8 + 1284) = 0;
  v8[10248] = 2;
  if ( CInstallUGCJob::OnDownloadResult != 0 )
  {
    *(v8 + 1282) = v8;
    *(v8 + 1283) = CInstallUGCJob::OnDownloadResult;
    SteamAPI_RegisterCallback(v8 + 10240, 3406);
  }
  CUtlString::Format(v8 + 1272, "%llu.vpk", *(v8 + 40));
  *(v8 + 2556) = 2;
  v11 = *(v8 + 82);
  *(v8 + 2552) |= 1u;
  if ( v11 != 0 )
    CInstallUGCJob::SetPathnames(v8);
  if ( SteamGameServer_GetHSteamPipe(v10) != 0 )
  {
    if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient != 0 )
      goto LABEL_13;
    HSteamUser = SteamGameServer_GetHSteamUser(v12);
    valueb = SteamGameServer_GetHSteamPipe(v23);
    if ( valueb == 0 )
    {
LABEL_52:
      if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient != 0 )
        goto LABEL_13;
      goto LABEL_53;
    }
    Interface = SteamInternal_CreateInterface("SteamClient017");
    SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient = Interface;
    if ( Interface != 0 )
    {
      SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServer = (*(*Interface + 48LL))(
                                                                              Interface,
                                                                              HSteamUser,
                                                                              valueb,
                                                                              "SteamGameServer012");
      if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServer != 0 )
      {
        SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerUtils = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                    + 72LL))(
                                                                                     SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                     valueb,
                                                                                     "SteamUtils008");
        if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerUtils != 0 )
        {
          SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerNetworking = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                           + 128LL))(
                                                                                            SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                            HSteamUser,
                                                                                            valueb,
                                                                                            "SteamNetworking005");
          if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerNetworking != 0 )
          {
            SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerStats = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                        + 112LL))(
                                                                                         SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                         HSteamUser,
                                                                                         valueb,
                                                                                         "SteamGameServerStats001");
            if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerStats != 0 )
            {
              SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamHTTP = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                               + 184LL))(
                                                                                SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                HSteamUser,
                                                                                valueb,
                                                                                "STEAMHTTP_INTERFACE_VERSION002");
              if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamHTTP != 0 )
              {
                SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamInventory = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                      + 272LL))(
                                                                                       SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                       HSteamUser,
                                                                                       valueb,
                                                                                       "STEAMINVENTORY_INTERFACE_V001");
                if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamInventory != 0 )
                {
                  SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamUGC = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                  + 208LL))(
                                                                                   SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                   HSteamUser,
                                                                                   valueb,
                                                                                   "STEAMUGC_INTERFACE_VERSION009");
                  if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamUGC != 0 )
                    SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamApps = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                     + 120LL))(
                                                                                      SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                      HSteamUser,
                                                                                      valueb,
                                                                                      "STEAMAPPS_INTERFACE_VERSION008");
                }
              }
            }
          }
        }
      }
      goto LABEL_52;
    }
  }
LABEL_53:
  if ( AssertMsg_ConditionFailed(
         &CInstallUGCJob::CInstallUGCJob(unsigned long long,unsigned int,unsigned long long,std::function<bool ()(CMsgCustomGameInstallStatus const&)>)::_assertionConstants,
         0) != 0 )
    __debugbreak();
LABEL_13:
  if ( s_pSteamUGC == 0 )
  {
    if ( SteamGameServer_GetHSteamPipe(v12) != 0 )
    {
      m_pSteamClient = SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient;
      if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient == 0 )
      {
        CSteamGameServerAPIContext::Init(&SteamGameServerInternal_ModuleContext(void)::ctx);
        m_pSteamClient = SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient;
      }
      value = m_pSteamClient;
    }
    else
    {
      value = 0;
    }
    v26 = *(*value + 208LL);
    HSteamPipe = SteamGameServer_GetHSteamPipe(v14);
    v17 = SteamGameServer_GetHSteamUser(v16);
    s_pSteamUGC = v26(value, v17, HSteamPipe, "STEAMUGC_INTERFACE_VERSION009");
    if ( s_pSteamUGC == 0
      && AssertMsg_ConditionFailed(
           &CInstallUGCJob::CInstallUGCJob(unsigned long long,unsigned int,unsigned long long,std::function<bool ()(CMsgCustomGameInstallStatus const&)>)::_assertionConstants,
           0) != 0 )
    {
      __debugbreak();
    }
    m_pszString = "FCVAR_NEVER_AS_STRING";
    if ( (sv_dota_custom_game_cache_work_folder.m_nFlags & 0x1000) == 0 )
    {
      m_pszString = "";
      if ( sv_dota_custom_game_cache_work_folder.m_pParent->m_Value.m_pszString != 0 )
        m_pszString = sv_dota_custom_game_cache_work_folder.m_pParent->m_Value.m_pszString;
    }
    if ( *m_pszString == 0 )
    {
      tmpnam(s);
      _V_AppendSlash(s, 20, 47);
      ConVar::SetValue(&sv_dota_custom_game_cache_work_folder, s);
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1) != 0 )
    {
      v19 = "FCVAR_NEVER_AS_STRING";
      if ( (sv_dota_custom_game_cache_work_folder.m_nFlags & 0x1000) == 0 )
      {
        v19 = "";
        if ( sv_dota_custom_game_cache_work_folder.m_pParent->m_Value.m_pszString != 0 )
          v19 = sv_dota_custom_game_cache_work_folder.m_pParent->m_Value.m_pszString;
      }
      LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 1, "Using '%s' for custom game cache working area\n", v19);
    }
    v20 = (*(*engine + 536LL))(engine);
    v21 = 819;
    if ( v20 != 816 )
      v21 = v20;
    valuea = v21;
    if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 1) != 0 )
      LoggingSystem_Log(LOG_CUSTOM_GAME_CACHE, 1, "Initialing ISteamUGC gameserver workshop interface\n");
    v22 = "FCVAR_NEVER_AS_STRING";
    if ( (sv_dota_custom_game_cache_work_folder.m_nFlags & 0x1000) == 0 )
    {
      v22 = "";
      if ( sv_dota_custom_game_cache_work_folder.m_pParent->m_Value.m_pszString != 0 )
        v22 = sv_dota_custom_game_cache_work_folder.m_pParent->m_Value.m_pszString;
    }
    if ( (*(*s_pSteamUGC + 496LL))(s_pSteamUGC, valuea, v22) == 0
      && LoggingSystem_IsChannelEnabled(LOG_CUSTOM_GAME_CACHE, 4) != 0 )
    {
      v33.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/dota/dota_server_cu"
                     "stom_game_cache.cpp";
      v33.m_szFunction = "CInstallUGCJob";
      v33.m_nLine = 118;
      LoggingSystem_Log(
        LOG_CUSTOM_GAME_CACHE,
        LoggingSeverity_t::LS_ERROR,
        &v33,
        "ISteamUGC::BInitWorkshopForGameServer failed!\n");
    }
  }
  M_manager = __x._M_manager;
  this->m_pInstallJob = v8;
  if ( M_manager != 0 )
  {
    M_manager(&__x._M_functor, &__x._M_functor, std::_Manager_operation::__destroy_functor);
    m_pInstallJob = this->m_pInstallJob;
  }
  GCSDK::CJob::StartJobDelayed(m_pInstallJob, 0);
}


// sv_dota_custom_game_cache_test_download  (line 762, @0x00000000029a7250, libserver.so)  // inlines: Arg, _Function_base, _M_init_functor, function<sv_dota_custom_game_cache_test_download(const CCommandContext&, const CCommand&)::__lambda12, void>, ~_Function_base, ~function
// calls: Warning, operator new, V_atoui64, CDOTACustomGameCache::StartInstallingUGC, V_atoi, __stack_chk_fail, _Unwind_Resume
// strings: "Not now, already busy\n", "Usage: sv_dota_custom_game_cache_test_download <custom game ID> [<expected_timestamp>]\n"
// globals: std::_Function_handler<bool ()(CMsgCustomGameInstallStatus const&),sv_dota_custom_game_cache_test_download(CCommandContext const&,CCommand const&)::{lambda(CMsg, std::_Function_base::_Base_manager<sv_dota_custom_game_cache_test_download(CCommandContext const&,CCommand const&)::{lambda(CMsgCustomGameInstallStatus const&)#, g_CustomGameCache
void __fastcall sv_dota_custom_game_cache_test_download(const CCommandContext *const ctx, const CCommand *const args)
{
  uint32 v3; // r12d
  void *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  bool v8; // cc
  const char *v9; // rdi
  PublishedFileId_t v10; // rax
  std::function<bool(const CMsgCustomGameInstallStatus&)> v11; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-18h]

  v12 = __readfsqword(0x28u);
  if ( g_CustomGameCache.m_pInstallJob != 0 )
  {
    Warning("Not now, already busy\n", args);
  }
  else if ( (args->m_nArgc - 2) > 1 )
  {
    Warning("Usage: sv_dota_custom_game_cache_test_download <custom game ID> [<expected_timestamp>]\n");
  }
  else
  {
    v3 = 0;
    if ( args->m_nArgc == 3 )
      v3 = V_atoi(args->m_ppArgv[2]);
    v11._M_manager = 0;
    v4 = operator new(1u);
    v8 = args->m_nArgc <= 1;
    v11._M_functor._M_unused._M_object = v4;
    v11._M_invoker = std::_Function_handler<bool ()(CMsgCustomGameInstallStatus const&),sv_dota_custom_game_cache_test_download(CCommandContext const&,CCommand const&)::{lambda(CMsgCustomGameInstallStatus const&)#1}>::_M_invoke;
    v11._M_manager = std::_Function_base::_Base_manager<sv_dota_custom_game_cache_test_download(CCommandContext const&,CCommand const&)::{lambda(CMsgCustomGameInstallStatus const&)#1}>::_M_manager;
    v9 = "";
    if ( !v8 )
      v9 = args->m_ppArgv[1];
    v10 = V_atoui64(v9, v7, v5, v6);
    CDOTACustomGameCache::StartInstallingUGC(&g_CustomGameCache, v10, v3, 0, &v11);
    if ( v11._M_manager != 0 )
      v11._M_manager(&v11, &v11, std::_Manager_operation::__destroy_functor);
  }
}


