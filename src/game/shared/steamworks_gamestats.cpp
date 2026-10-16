
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSteamWorksGameStatsUploader::GetTimeSinceEpoch  (line 45, @0x00000000020361f0, libserver.so)
// calls: time
// callers: CSteamWorksGameStatsUploader::Steam_OnSteamSessionInfoIssued, CSteamWorksGameStatsUploader::RequestSessionID, CSteamWorksGameStatsUploader::EndSession, CDOTAHLTVDirector::FinishRecording
time_t __fastcall CSteamWorksGameStatsUploader::GetTimeSinceEpoch(CSteamWorksGameStatsUploader *const this)
{
  ISteamUtils *m_pSteamUtils; // rdi
  time_t aclock; // [rsp+8h] [rbp-8h] BYREF

  if ( steamapicontext != 0 )
  {
    m_pSteamUtils = steamapicontext->m_pSteamUtils;
    if ( m_pSteamUtils != 0 )
      return (*(*m_pSteamUtils + 24LL))(m_pSteamUtils);
  }
  time(&aclock);
  return aclock;
}


// CSteamWorksGameStatsUploader::CSteamWorksGameStatsUploader  (line 63, @0x0000000002036380, libserver.so)  // inlines: CCallResult, CCallbackBase, CGameEventListener, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Cancel, Purge, RemoveAll, ~CAutoGameSystem, ~CCallResult, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::operator=, CUtlString::FreeMemoryBlock, SteamAPI_UnregisterCallResult, CGameEventListener::~CGameEventListener, IGameSystem::~IGameSystem, _Unwind_Resume, CUtlMemory<KeyValues*, int>::Purge
// callers: CSteamWorksGameStatsServer::CSteamWorksGameStatsServer
void __fastcall CSteamWorksGameStatsUploader::CSteamWorksGameStatsUploader(
        CSteamWorksGameStatsUploader *const this,
        const char *pszSystemName,
        const char *pszSessionConVarName)
{
  this->_vptr_IGameSystem = off_3FE7450;  // vptr: CSteamWorksGameStatsUploader
  this->m_bRegisteredForEvents = 0;
  this->_vptr_IGameEventListener2 = off_3FE75E0;
  this->m_CallbackSteamSessionInfoIssued._vptr_CCallbackBase = off_3FE73D0;
  this->m_CallbackSteamSessionInfoIssued.m_nCallbackFlags = 0;
  this->m_CallbackSteamSessionInfoIssued.m_hAPICall = 0;
  this->m_CallbackSteamSessionInfoIssued.m_pObj = 0;
  this->m_CallbackSteamSessionInfoIssued.m_Func.__pfn = 0;
  this->m_CallbackSteamSessionInfoIssued.m_Func.__delta = 0;
  this->m_CallbackSteamSessionInfoIssued.m_iCallback = 2001;
  this->m_CallbackSteamSessionInfoClosed.m_nCallbackFlags = 0;
  this->m_CallbackSteamSessionInfoClosed._vptr_CCallbackBase = off_3FE7410;
  this->m_CallbackSteamSessionInfoClosed.m_hAPICall = 0;
  this->m_CallbackSteamSessionInfoClosed.m_pObj = 0;
  this->m_CallbackSteamSessionInfoClosed.m_Func.__pfn = 0;
  this->m_CallbackSteamSessionInfoClosed.m_Func.__delta = 0;
  this->m_CallbackSteamSessionInfoClosed.m_iCallback = 2002;
  this->m_StatsToSend.m_Size = 0;
  this->m_StatsToSend.m_Memory.m_pMemory = 0;
  this->m_StatsToSend.m_Memory.m_nAllocationCount = 0;
  this->m_StatsToSend.m_Memory.m_nGrowSize = 0;
  this->m_sSessionConVarName.m_pString = 0;
  CUtlString::operator=(&this->m_sSessionConVarName, pszSessionConVarName);
  this->m_pSessionConVar = 0;
}


// CSteamWorksGameStatsUploader::~CSteamWorksGameStatsUploader  (line 69, @0x0000000002036070, libserver.so)  // inlines: Cancel, Purge, RemoveAll, StopListeningForAllEvents, ~CAutoGameSystem, ~CCallResult, ~CGameEventListener, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2
// calls: operator delete, CUtlString::FreeMemoryBlock, SteamAPI_UnregisterCallResult, IGameSystem::~IGameSystem, CUtlMemory<KeyValues*, int>::Purge
// callers: CSteamWorksGameStatsUploader::~CSteamWorksGameStatsUploader, CSteamWorksGameStatsServer::~CSteamWorksGameStatsServer, CSteamWorksGameStatsServer::CSteamWorksGameStatsServer, CDOTASteamWorksGameStatsServer::~CDOTASteamWorksGameStatsServer
void __fastcall CSteamWorksGameStatsUploader::~CSteamWorksGameStatsUploader(CSteamWorksGameStatsUploader *const this)
{
  ConVarRef *m_pSessionConVar; // rdi
  bool v3; // zf
  SteamAPICall_t m_hAPICall; // rsi
  SteamAPICall_t v5; // rsi

  this->_vptr_IGameSystem = off_3FE7450;  // vptr: CSteamWorksGameStatsUploader
  this->_vptr_IGameEventListener2 = off_3FE75E0;
  m_pSessionConVar = this->m_pSessionConVar;
  if ( m_pSessionConVar != 0 )
    operator delete(m_pSessionConVar);
  if ( this->m_sSessionConVarName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sSessionConVarName);
  v3 = (this->m_StatsToSend.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_StatsToSend.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<KeyValues *,int>::Purge(&this->m_StatsToSend.m_Memory);
    if ( (this->m_StatsToSend.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<KeyValues *,int>::Purge(&this->m_StatsToSend.m_Memory);
  }
  m_hAPICall = this->m_CallbackSteamSessionInfoClosed.m_hAPICall;
  this->m_CallbackSteamSessionInfoClosed._vptr_CCallbackBase = off_3FE7410;
  if ( m_hAPICall != 0 )
  {
    SteamAPI_UnregisterCallResult(&this->m_CallbackSteamSessionInfoClosed);
    this->m_CallbackSteamSessionInfoClosed.m_hAPICall = 0;
  }
  v5 = this->m_CallbackSteamSessionInfoIssued.m_hAPICall;
  this->m_CallbackSteamSessionInfoIssued._vptr_CCallbackBase = off_3FE73D0;
  if ( v5 != 0 )
  {
    SteamAPI_UnregisterCallResult(&this->m_CallbackSteamSessionInfoIssued);
    this->m_CallbackSteamSessionInfoIssued.m_hAPICall = 0;
  }
  v3 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v3 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CSteamWorksGameStatsUploader::~CSteamWorksGameStatsUploader  (line 69, @0x00000000020361c0, libserver.so)
// calls: CSteamWorksGameStatsUploader::~CSteamWorksGameStatsUploader, operator delete
void __fastcall CSteamWorksGameStatsUploader::~CSteamWorksGameStatsUploader(CSteamWorksGameStatsUploader *const this)
{
  CSteamWorksGameStatsUploader::~CSteamWorksGameStatsUploader(this);
  operator delete(this);
}


// CSteamWorksGameStatsUploader::UploadCvars  (line 80, @0x0000000002036540, libserver.so)
void __fastcall CSteamWorksGameStatsUploader::UploadCvars(CSteamWorksGameStatsUploader *const this)
{
  ;
}


// CSteamWorksGameStatsUploader::Reset  (line 144, @0x0000000002035f10, libserver.so)  // inlines: ClearSessionID, RemoveAll, Reset, SetValue, memset
// calls: KeyValues::deleteThis
// callers: CSteamWorksGameStatsServer::CSteamWorksGameStatsServer, CDOTASteamWorksGameStatsServer::Reset
void __fastcall CSteamWorksGameStatsUploader::Reset(CSteamWorksGameStatsUploader *const this)
{
  ConVarRef *m_pSessionConVar; // rax
  __int64 v3; // r13
  int v4; // r12d
  int m_Size; // ecx
  KeyValues *v6; // rdi

  this->m_SessionID = 0;
  m_pSessionConVar = this->m_pSessionConVar;
  if ( m_pSessionConVar != 0 )
    (*(m_pSessionConVar->m_pConVar->_vptr_IConVar + 2))(m_pSessionConVar->m_pConVar, 0);
  this->m_ServiceTicking = 0;
  v3 = 0;
  this->m_LastServiceTick = 0.0;
  v4 = 0;
  this->m_SessionIDRequestUnsent = 0;
  this->m_SessionIDRequestPending = 0;
  this->m_SessionID = 0;
  this->m_UploadedStats = 0;
  this->m_bCollectingAny = 0;
  this->m_bCollectingDetails = 0;
  this->m_UserID = 0;
  this->m_iAppID = 0;
  this->m_iServerIP = 0;
  memset(this->m_pzServerIP, 0, 0x100u);
  *&this->m_pzServerIP[256] = 0;
  memset(this->m_pzMapStart, 0, 0x100u);
  *&this->m_pzMapStart[256] = 0;
  memset(this->m_pzHostName, 0, 0x100u);
  *&this->m_pzHostName[256] = 0;
  this->m_StartTime = 0;
  m_Size = this->m_StatsToSend.m_Size;
  this->m_EndTime = 0;
  this->m_ActiveSession.m_ServerSessionID = 0;
  this->m_ActiveSession.m_ConnectTime = 0;
  this->m_ActiveSession.m_DisconnectTime = 0;
  this->m_iServerConnectCount = 0;
  if ( m_Size > 0 )
  {
    do
    {
      ++v4;
      v6 = this->m_StatsToSend.m_Memory.m_pMemory[v3++];
      KeyValues::deleteThis(v6);
    }
    while ( this->m_StatsToSend.m_Size > v4 );
  }
  this->m_StatsToSend.m_Size = 0;
}


// CSteamWorksGameStatsUploader::Init  (line 179, @0x0000000002035ab0, libserver.so)  // inlines: IsEmpty, ListenForGameEvent
// calls: CUtlString::Get, operator new, ConVarRef::ConVarRef, ConVarRef::IsValid, operator delete, _Unwind_Resume
// strings: "server_spawn"
bool __fastcall CSteamWorksGameStatsUploader::Init(CSteamWorksGameStatsUploader *const this)
{
  char *m_pString; // rax
  const char *v4; // r13
  ConVarRef *v5; // r12

  m_pString = this->m_sSessionConVarName.m_pString;
  if ( m_pString != 0 && *m_pString != 0 )
  {
    v4 = CUtlString::Get(&this->m_sSessionConVarName);
    v5 = operator new(0x10u);
    ConVarRef::ConVarRef(v5, v4);
    this->m_pSessionConVar = v5;
    if ( !ConVarRef::IsValid(v5) )
    {
      operator delete(this->m_pSessionConVar);
      this->m_pSessionConVar = 0;
    }
  }
  else
  {
    this->m_pSessionConVar = 0;
  }
  (*(this->_vptr_IGameSystem + 47))(this);
  this->m_bRegisteredForEvents = 1;
  (*(gameeventmanager->_vptr_IBaseInterface + 4))(gameeventmanager, &this->CGameEventListener, "server_spawn", 1);
  return 1;
}


// CSteamWorksGameStatsUploader::FireGameEvent  (line 205, @0x0000000002037670, libserver.so)  // inlines: FStrEq, V_strncpy<long unsigned int>, _V_strcmp
// calls: V_snprintf, CSteamWorksGameStatsUploader::ServerAddressToInt, _V_strncpy
// strings: "hostname_changed", "server_spawn", "%s:%d", "hostname", "password", "No Host Name" (8 total)
void __fastcall CSteamWorksGameStatsUploader::FireGameEvent(
        CSteamWorksGameStatsUploader *const this,
        IGameEvent *event)
{
  char *v4; // rax
  const char *v5; // r13
  int v6; // eax
  __int64 v7; // rax
  char *m_pzHostName; // rdi
  __int64 v9; // rax
  char *m_pzMapStart; // rdi
  __int64 v11; // rax
  const char *v12; // rsi

  if ( event != 0 )
  {
    v4 = (*(event->_vptr_IGameEvent + 2))(event);
    if ( v4 == "hostname_changed" || strcmp("hostname_changed", v4) == 0 )
    {
      v11 = (*(event->_vptr_IGameEvent + 11))(event, "hostname", "");
      v12 = "No Host Name";
      if ( v11 != 0 )
        v12 = v11;
      _V_strncpy(this->m_pzHostName, v12, 260);
    }
    else if ( v4 == "server_spawn" || strcmp("server_spawn", v4) == 0 )
    {
      v5 = (*(event->_vptr_IGameEvent + 11))(event, "address", "");
      if ( v5 != 0 )
      {
        v6 = (*(event->_vptr_IGameEvent + 8))(event, "port", 0);
        V_snprintf(this->m_pzServerIP, 260, "%s:%d", v5, v6);
        CSteamWorksGameStatsUploader::ServerAddressToInt(this);
      }
      else
      {
        _V_strncpy(this->m_pzServerIP, "No Server Address", 260);
        this->m_iServerIP = 0;
      }
      v7 = (*(event->_vptr_IGameEvent + 11))(event, "hostname", "");
      m_pzHostName = this->m_pzHostName;
      if ( v7 != 0 )
        _V_strncpy(m_pzHostName, v7, 260);
      else
        _V_strncpy(m_pzHostName, "No Host Name", 260);
      v9 = (*(event->_vptr_IGameEvent + 11))(event, "mapname", "");
      m_pzMapStart = this->m_pzMapStart;
      if ( v9 != 0 )
        _V_strncpy(m_pzMapStart, v9, 260);
      else
        _V_strncpy(m_pzMapStart, "No Map Name", 260);
      this->m_bPassword = (*(event->_vptr_IGameEvent + 7))(event, "password", 0);
    }
  }
}


// CSteamWorksGameStatsUploader::RequestSessionID  (line 267, @0x0000000002036e70, libserver.so)  // inlines: Set
// calls: CSteamWorksGameStatsUploader::AccessToSteamAPI, CSteamWorksGameStatsUploader::GetInterface, DevMsg, CSteamWorksGameStatsUploader::GetTimeSinceEpoch, SteamAPI_RegisterCallResult, SteamAPI_UnregisterCallResult
// callers: CSteamWorksGameStatsUploader::FrameUpdatePostEntityThink, CSteamWorksGameStatsUploader::StartSession
// strings: "Steamworks Stats: %s Requesting session id.\n"
// globals: CSteamWorksGameStatsUploader::Steam_OnSteamSessionInfoIssued(GameStatsSessionIssued_t *,bool)
EResult __fastcall CSteamWorksGameStatsUploader::RequestSessionID(CSteamWorksGameStatsUploader *const this)
{
  EResult result; // eax
  bool v3; // dl
  ISteamGameStats *Interface; // rax
  char v5; // r12
  const char *v6; // rax
  ISteamGameStats *m_SteamWorksInterface; // rax
  __int64 (__fastcall *v8)(ISteamGameStats *, _QWORD, uint64, _QWORD, _QWORD); // r13
  unsigned int TimeSinceEpoch; // eax
  SteamAPICall_t v10; // rax
  SteamAPICall_t hSteamAPICall; // [rsp+8h] [rbp-28h]

  if ( this->m_SessionID != 0 )
    return EResult::k_EResultOK;
  result = EResult::k_EResultPending;
  if ( !this->m_SessionIDRequestPending )
  {
    this->m_SessionIDRequestUnsent = 1;
    this->m_ServiceTicking = 1;
    v3 = CSteamWorksGameStatsUploader::AccessToSteamAPI(this);
    result = EResult::k_EResultNoConnection;
    if ( v3 )
    {
      Interface = CSteamWorksGameStatsUploader::GetInterface(this);
      this->m_SteamWorksInterface = Interface;
      if ( Interface != 0 )
      {
        v5 = (*(this->_vptr_IGameSystem + 45))(this);
        v6 = (*(this->_vptr_IGameSystem + 33))(this);
        DevMsg(2, "Steamworks Stats: %s Requesting session id.\n", v6);
        m_SteamWorksInterface = this->m_SteamWorksInterface;
        this->m_SessionIDRequestUnsent = 0;
        this->m_SessionIDRequestPending = 1;
        v8 = **m_SteamWorksInterface;
        TimeSinceEpoch = CSteamWorksGameStatsUploader::GetTimeSinceEpoch(this);
        v10 = v8(this->m_SteamWorksInterface, v5, this->m_UserID, this->m_iAppID, TimeSinceEpoch);
        if ( this->m_CallbackSteamSessionInfoIssued.m_hAPICall != 0 )
        {
          hSteamAPICall = v10;
          SteamAPI_UnregisterCallResult(&this->m_CallbackSteamSessionInfoIssued);
          v10 = hSteamAPICall;
        }
        this->m_CallbackSteamSessionInfoIssued.m_hAPICall = v10;
        this->m_CallbackSteamSessionInfoIssued.m_pObj = this;
        this->m_CallbackSteamSessionInfoIssued.m_Func.__pfn = CSteamWorksGameStatsUploader::Steam_OnSteamSessionInfoIssued;
        this->m_CallbackSteamSessionInfoIssued.m_Func.__delta = 0;
        if ( v10 != 0 )
          SteamAPI_RegisterCallResult(&this->m_CallbackSteamSessionInfoIssued, v10);
      }
      return EResult::k_EResultOK;
    }
  }
  return result;
}


// CSteamWorksGameStatsUploader::ClearSessionID  (line 333, @0x0000000002036550, libserver.so)  // inlines: SetValue
void __fastcall CSteamWorksGameStatsUploader::ClearSessionID(CSteamWorksGameStatsUploader *const this)
{
  ConVarRef *m_pSessionConVar; // rax

  m_pSessionConVar = this->m_pSessionConVar;
  this->m_SessionID = 0;
  if ( m_pSessionConVar != 0 )
    (*(m_pSessionConVar->m_pConVar->_vptr_IConVar + 2))(m_pSessionConVar->m_pConVar, 0);
}


// CSteamWorksGameStatsUploader::Steam_OnSteamSessionInfoIssued  (line 347, @0x0000000002036230, libserver.so)  // inlines: ClearSessionID, SetValue
// calls: DevMsg, CSteamWorksGameStatsUploader::GetTimeSinceEpoch, V_snprintf, __stack_chk_fail
// strings: "Steamworks Stats: %s session id not available.\n", "Steamworks Stats: %s Received %s session id: %llu\n"
// local variable allocation has failed, the output may be wrong!
void __fastcall CSteamWorksGameStatsUploader::Steam_OnSteamSessionInfoIssued(
        CSteamWorksGameStatsUploader *const this,
        GameStatsSessionIssued_t *pGameStatsSessionInfo,
        bool bError)
{
  const char *v5; // rax
  ConVarRef *m_pSessionConVar; // rax
  uint64 m_ulSessionID; // r13
  const char *v8; // rax
  uint64 v9; // rcx
  ConVarRef *v10; // rax
  char sessionIDString[40]; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  if ( this->m_SessionIDRequestPending )
  {
    this->m_SessionIDRequestPending = 0;
    if ( pGameStatsSessionInfo == 0 )
      goto LABEL_5;
    if ( pGameStatsSessionInfo->m_eResult != EResult::k_EResultOK )
    {
      v5 = (*(this->_vptr_IGameSystem + 33))(this, pGameStatsSessionInfo, bError);
      DevMsg(2, "Steamworks Stats: %s session id not available.\n", v5);
      this->m_SessionIDRequestUnsent = 1;
LABEL_5:
      m_pSessionConVar = this->m_pSessionConVar;
      this->m_SessionID = 0;
      if ( m_pSessionConVar != 0 )
        (*(m_pSessionConVar->m_pConVar->_vptr_IConVar + 2))(m_pSessionConVar->m_pConVar, 0, bError);
      return;
    }
    m_ulSessionID = pGameStatsSessionInfo->m_ulSessionID;
    v8 = (*(this->_vptr_IGameSystem + 33))(this, pGameStatsSessionInfo, bError);
    DevMsg(2, "Steamworks Stats: %s Received %s session id: %llu\n", v8, "SERVER", m_ulSessionID);
    this->m_StartTime = CSteamWorksGameStatsUploader::GetTimeSinceEpoch(this);
    v9 = pGameStatsSessionInfo->m_ulSessionID;
    this->m_SessionID = pGameStatsSessionInfo->m_ulSessionID;
    this->m_bCollectingAny = pGameStatsSessionInfo->m_bCollectingAny;
    this->m_bCollectingDetails = pGameStatsSessionInfo->m_bCollectingDetails;
    V_snprintf(sessionIDString, 32, "%llu", v9);
    v10 = this->m_pSessionConVar;
    if ( v10 != 0 )
      v10->m_pConVar->SetValue(sessionIDString);
  }
}


// CSteamWorksGameStatsUploader::Steam_OnSteamSessionInfoClosed  (line 394, @0x0000000002035a60, libserver.so)
void __fastcall CSteamWorksGameStatsUploader::Steam_OnSteamSessionInfoClosed(
        CSteamWorksGameStatsUploader *const this,
        GameStatsSessionClosed_t *pGameStatsSessionInfo,
        bool bError)
{
  if ( this->m_UploadedStats )
    this->m_UploadedStats = 0;
}


// CSteamWorksGameStatsUploader::FrameUpdatePostEntityThink  (line 408, @0x0000000002036fc0, libserver.so)
// calls: CSteamWorksGameStatsUploader::AccessToSteamAPI, CSteamWorksGameStatsUploader::RequestSessionID
void __fastcall CSteamWorksGameStatsUploader::FrameUpdatePostEntityThink(
        CSteamWorksGameStatsUploader *const this,
        const EventServerPostEntityThink_t *const msg)
{
  if ( this->m_ServiceTicking && (gpGlobals->realtime - this->m_LastServiceTick) >= 3.0 )
  {
    this->m_LastServiceTick = gpGlobals->realtime;
    if ( CSteamWorksGameStatsUploader::AccessToSteamAPI(this) )
    {
      if ( this->m_SessionIDRequestUnsent )
        CSteamWorksGameStatsUploader::RequestSessionID(this);
      else
        this->m_ServiceTicking = 0;
    }
  }
}


// CSteamWorksGameStatsUploader::StartSession  (line 435, @0x0000000002037040, libserver.so)
// calls: CSteamWorksGameStatsUploader::RequestSessionID
// callers: CDOTAGamerules::GameInit
void __fastcall CSteamWorksGameStatsUploader::StartSession(CSteamWorksGameStatsUploader *const this)
{
  CSteamWorksGameStatsUploader::RequestSessionID(this);
}


// CSteamWorksGameStatsUploader::EndSession  (line 443, @0x00000000020372c0, libserver.so)  // inlines: Set
// calls: CSteamWorksGameStatsUploader::GetTimeSinceEpoch, CSteamWorksGameStatsUploader::GetInterface, DevMsg(char const*,...), DevMsg, CSteamWorksGameStatsUploader::FlushStats, SteamAPI_RegisterCallResult, SteamAPI_UnregisterCallResult
// callers: CDOTASteamWorksGameStatsServer::EndSession
// strings: "Steamworks Stats: %s Ending CLIENT session id: %llu\n", "Steamworks Stats: %s Ending %s session id: %llu\n"
// globals: CSteamWorksGameStatsUploader::Steam_OnSteamSessionInfoClosed(GameStatsSessionClosed_t *,bool)
void __fastcall CSteamWorksGameStatsUploader::EndSession(CSteamWorksGameStatsUploader *const this)
{
  RTime32 TimeSinceEpoch; // eax
  bool v3; // zf
  ISteamGameStats *Interface; // rax
  uint64 m_SessionID; // r12
  const char *v6; // rax
  uint64 v7; // r12
  const char *v8; // rax
  uint64 v9; // r12
  const char *v10; // rax
  SteamAPICall_t v11; // rax
  SteamAPICall_t hSteamAPICall; // [rsp+8h] [rbp-18h]

  TimeSinceEpoch = CSteamWorksGameStatsUploader::GetTimeSinceEpoch(this);
  v3 = this->m_SessionID == 0;
  this->m_EndTime = TimeSinceEpoch;
  if ( !v3 )
  {
    Interface = CSteamWorksGameStatsUploader::GetInterface(this);
    this->m_SteamWorksInterface = Interface;
    if ( Interface != 0 )
    {
      m_SessionID = this->m_SessionID;
      v6 = (*(this->_vptr_IGameSystem + 33))(this);
      DevMsg("Steamworks Stats: %s Ending CLIENT session id: %llu\n", v6, m_SessionID);
      v7 = this->m_SessionID;
      v8 = (*(this->_vptr_IGameSystem + 33))(this);
      DevMsg("Steamworks Stats: %s Ending %s session id: %llu\n", v8, "SERVER", v7);
      v9 = this->m_SessionID;
      v10 = (*(this->_vptr_IGameSystem + 33))(this);
      DevMsg(2, "Steamworks Stats: %s Ending CLIENT session id: %llu\n", v10, v9);
      CSteamWorksGameStatsUploader::FlushStats(this);
      (*(this->_vptr_IGameSystem + 41))(this);
      v11 = (*(*this->m_SteamWorksInterface + 8LL))(this->m_SteamWorksInterface, this->m_SessionID, this->m_EndTime, 0);
      if ( this->m_CallbackSteamSessionInfoClosed.m_hAPICall != 0 )
      {
        hSteamAPICall = v11;
        SteamAPI_UnregisterCallResult(&this->m_CallbackSteamSessionInfoClosed);
        v11 = hSteamAPICall;
      }
      this->m_CallbackSteamSessionInfoClosed.m_hAPICall = v11;
      this->m_CallbackSteamSessionInfoClosed.m_pObj = this;
      this->m_CallbackSteamSessionInfoClosed.m_Func.__pfn = CSteamWorksGameStatsUploader::Steam_OnSteamSessionInfoClosed;
      this->m_CallbackSteamSessionInfoClosed.m_Func.__delta = 0;
      if ( v11 != 0 )
        SteamAPI_RegisterCallResult(&this->m_CallbackSteamSessionInfoClosed, v11);
      (*(this->_vptr_IGameSystem + 47))(this);
    }
  }
}


// CSteamWorksGameStatsUploader::FlushStats  (line 476, @0x0000000002037250, libserver.so)  // inlines: RemoveAll
// calls: CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats, KeyValues::deleteThis
// callers: CSteamWorksGameStatsUploader::EndSession
void __fastcall CSteamWorksGameStatsUploader::FlushStats(CSteamWorksGameStatsUploader *const this)
{
  int v1; // r13d
  __int64 v2; // r12
  KeyValues *v4; // rdi

  v1 = 0;
  v2 = 0;
  while ( this->m_StatsToSend.m_Size > v1 )
  {
    ++v1;
    CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats(this, this->m_StatsToSend.m_Memory.m_pMemory[v2], -1);
    v4 = this->m_StatsToSend.m_Memory.m_pMemory[v2++];
    KeyValues::deleteThis(v4);
  }
  this->m_StatsToSend.m_Size = 0;
}


// CSteamWorksGameStatsUploader::WriteSessionRow  (line 490, @0x0000000002036a60, libserver.so)
// calls: CSteamWorksGameStatsUploader::GetInterface
// callers: CSteamWorksGameStatsServer::WriteSessionRow
// strings: "AppID"
void __fastcall CSteamWorksGameStatsUploader::WriteSessionRow(CSteamWorksGameStatsUploader *const this)
{
  ISteamGameStats *Interface; // rax

  Interface = CSteamWorksGameStatsUploader::GetInterface(this);
  this->m_SteamWorksInterface = Interface;
  if ( Interface != 0 )
  {
    (*(*Interface + 16LL))(Interface, this->m_SessionID, "AppID", this->m_iAppID);
    (*(*this->m_SteamWorksInterface + 16LL))(
      this->m_SteamWorksInterface,
      this->m_SessionID,
      "StartTime",
      this->m_StartTime);
    (*(*this->m_SteamWorksInterface + 16LL))(this->m_SteamWorksInterface, this->m_SessionID, "EndTime", this->m_EndTime);
  }
}


// CSteamWorksGameStatsUploader::VerifyInterface  (line 511, @0x0000000002036b00, libserver.so)
// calls: CSteamWorksGameStatsUploader::GetInterface
// callers: CSteamWorksGameStatsUploader::VerifyInterface, CSteamWorksGameStatsUploader::WriteIntToTable, CSteamWorksGameStatsUploader::WriteInt64ToTable, CSteamWorksGameStatsUploader::WriteFloatToTable, CSteamWorksGameStatsUploader::WriteStringToTable
bool __fastcall CSteamWorksGameStatsUploader::VerifyInterface(CSteamWorksGameStatsUploader *const this)
{
  ISteamGameStats *Interface; // rax

  Interface = CSteamWorksGameStatsUploader::GetInterface(this);
  this->m_SteamWorksInterface = Interface;
  return Interface != 0;
}


// CSteamWorksGameStatsUploader::VerifyInterface  (line 511, @0x0000000002036b30, libserver.so)
// calls: CSteamWorksGameStatsUploader::VerifyInterface
bool __fastcall CSteamWorksGameStatsUploader::VerifyInterface(CSteamWorksGameStatsUploader *const this)
{
  return this->m_SteamWorksInterface != 0 || CSteamWorksGameStatsUploader::VerifyInterface(this);
}


// CSteamWorksGameStatsUploader::WriteIntToTable  (line 527, @0x0000000002036b50, libserver.so)  // inlines: VerifyInterface
// calls: CSteamWorksGameStatsUploader::VerifyInterface
// callers: CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats
EResult __fastcall CSteamWorksGameStatsUploader::WriteIntToTable(
        CSteamWorksGameStatsUploader *const this,
        const int value,
        uint64 iTableID,
        const char *pzRow)
{
  ISteamGameStats *m_SteamWorksInterface; // rdi
  bool v9; // al
  int valuea; // [rsp+Ch] [rbp-24h]

  m_SteamWorksInterface = this->m_SteamWorksInterface;
  if ( m_SteamWorksInterface != 0 )
    return (*(*m_SteamWorksInterface + 64LL))(m_SteamWorksInterface, iTableID, pzRow, value);
  valuea = value;
  v9 = CSteamWorksGameStatsUploader::VerifyInterface(this);
  value = valuea;
  if ( v9 )
  {
    m_SteamWorksInterface = this->m_SteamWorksInterface;
    return (*(*m_SteamWorksInterface + 64LL))(m_SteamWorksInterface, iTableID, pzRow, value);
  }
  return EResult::k_EResultNoConnection;
}


// CSteamWorksGameStatsUploader::WriteInt64ToTable  (line 538, @0x0000000002036bc0, libserver.so)  // inlines: VerifyInterface
// calls: CSteamWorksGameStatsUploader::VerifyInterface
// callers: CSteamWorksGameStatsServer::AddSessionIDsToTable, CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats
EResult __fastcall CSteamWorksGameStatsUploader::WriteInt64ToTable(
        CSteamWorksGameStatsUploader *const this,
        const uint64 value,
        uint64 iTableID,
        const char *pzRow)
{
  ISteamGameStats *m_SteamWorksInterface; // rdi
  bool v9; // al
  uint64 valuea; // [rsp+8h] [rbp-28h]

  m_SteamWorksInterface = this->m_SteamWorksInterface;
  if ( m_SteamWorksInterface != 0 )
    return (*(*m_SteamWorksInterface + 96LL))(m_SteamWorksInterface, iTableID, pzRow, value);
  valuea = value;
  v9 = CSteamWorksGameStatsUploader::VerifyInterface(this);
  value = valuea;
  if ( v9 )
  {
    m_SteamWorksInterface = this->m_SteamWorksInterface;
    return (*(*m_SteamWorksInterface + 96LL))(m_SteamWorksInterface, iTableID, pzRow, value);
  }
  return EResult::k_EResultNoConnection;
}


// CSteamWorksGameStatsUploader::WriteFloatToTable  (line 549, @0x0000000002036cd0, libserver.so)  // inlines: VerifyInterface
// calls: CSteamWorksGameStatsUploader::VerifyInterface
// callers: CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats
EResult __fastcall CSteamWorksGameStatsUploader::WriteFloatToTable(
        CSteamWorksGameStatsUploader *const this,
        double value,
        uint64 iTableID,
        const char *pzRow)
{
  ISteamGameStats *m_SteamWorksInterface; // rdi
  bool v7; // al
  const char *pzRowa; // [rsp+8h] [rbp-28h]
  uint64 iTableIDa; // [rsp+10h] [rbp-20h]
  unsigned int valuea; // [rsp+1Ch] [rbp-14h]

  m_SteamWorksInterface = this->m_SteamWorksInterface;
  if ( m_SteamWorksInterface != 0 )
    return (*(*m_SteamWorksInterface + 80LL))(m_SteamWorksInterface, iTableID, pzRow, value);
  pzRowa = pzRow;
  iTableIDa = iTableID;
  valuea = LODWORD(value);
  v7 = CSteamWorksGameStatsUploader::VerifyInterface(this);
  *&value = valuea;
  iTableID = iTableIDa;
  pzRow = pzRowa;
  if ( v7 )
  {
    m_SteamWorksInterface = this->m_SteamWorksInterface;
    return (*(*m_SteamWorksInterface + 80LL))(m_SteamWorksInterface, iTableID, pzRow, value);
  }
  return EResult::k_EResultNoConnection;
}


// CSteamWorksGameStatsUploader::WriteStringToTable  (line 560, @0x0000000002036d40, libserver.so)  // inlines: VerifyInterface
// calls: CSteamWorksGameStatsUploader::VerifyInterface
// callers: CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats
EResult __fastcall CSteamWorksGameStatsUploader::WriteStringToTable(
        CSteamWorksGameStatsUploader *const this,
        const char *value,
        uint64 iTableID,
        const char *pzRow)
{
  ISteamGameStats *m_SteamWorksInterface; // rdi
  bool v9; // al
  const char *valuea; // [rsp+8h] [rbp-28h]

  m_SteamWorksInterface = this->m_SteamWorksInterface;
  if ( m_SteamWorksInterface != 0 )
    return (*(*m_SteamWorksInterface + 72LL))(m_SteamWorksInterface, iTableID, pzRow, value);
  valuea = value;
  v9 = CSteamWorksGameStatsUploader::VerifyInterface(this);
  value = valuea;
  if ( v9 )
  {
    m_SteamWorksInterface = this->m_SteamWorksInterface;
    return (*(*m_SteamWorksInterface + 72LL))(m_SteamWorksInterface, iTableID, pzRow, value);
  }
  return EResult::k_EResultNoConnection;
}


// CSteamWorksGameStatsUploader::AccessToSteamAPI  (line 576, @0x0000000002036590, libserver.so)  // inlines: Init, SteamGameServerClient
// calls: SteamGameServer_GetHSteamPipe, SteamGameServer_GetHSteamUser, SteamInternal_CreateInterface
// callers: CSteamWorksGameStatsUploader::RequestSessionID, CSteamWorksGameStatsUploader::FrameUpdatePostEntityThink
// strings: "SteamClient017", "SteamGameServer012", "SteamUtils008", "SteamNetworking005", "SteamGameServerStats001", "STEAMHTTP_INTERFACE_VERSION002" (9 total)
// globals: SteamGameServerInternal_ModuleContext(void)::ctx
bool __fastcall CSteamWorksGameStatsUploader::AccessToSteamAPI(CSteamWorksGameStatsUploader *const this)
{
  unsigned int HSteamUser; // r13d
  __int64 v3; // rdi
  unsigned int HSteamPipe; // r12d
  ISteamClient *Interface; // rax

  if ( steamgameserverapicontext == 0
    || steamgameserverapicontext->m_pSteamGameServer == 0
    || SteamGameServer_GetHSteamPipe(this) == 0 )
  {
    return 0;
  }
  if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient != 0 )
    return steamgameserverapicontext->m_pSteamGameServerUtils != 0;
  HSteamUser = SteamGameServer_GetHSteamUser();
  HSteamPipe = SteamGameServer_GetHSteamPipe(v3);
  if ( HSteamPipe != 0 )
  {
    Interface = SteamInternal_CreateInterface("SteamClient017");
    SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient = Interface;
    if ( Interface == 0 )
      return 0;
    SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServer = (*(*Interface + 48LL))(
                                                                            Interface,
                                                                            HSteamUser,
                                                                            HSteamPipe,
                                                                            "SteamGameServer012");
    if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServer != 0 )
    {
      SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerUtils = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                  + 72LL))(
                                                                                   SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                   HSteamPipe,
                                                                                   "SteamUtils008");
      if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerUtils != 0 )
      {
        SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerNetworking = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                         + 128LL))(
                                                                                          SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                          HSteamUser,
                                                                                          HSteamPipe,
                                                                                          "SteamNetworking005");
        if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerNetworking != 0 )
        {
          SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerStats = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                      + 112LL))(
                                                                                       SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                       HSteamUser,
                                                                                       HSteamPipe,
                                                                                       "SteamGameServerStats001");
          if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerStats != 0 )
          {
            SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamHTTP = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                             + 184LL))(
                                                                              SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                              HSteamUser,
                                                                              HSteamPipe,
                                                                              "STEAMHTTP_INTERFACE_VERSION002");
            if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamHTTP != 0 )
            {
              SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamInventory = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                    + 272LL))(
                                                                                     SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                     HSteamUser,
                                                                                     HSteamPipe,
                                                                                     "STEAMINVENTORY_INTERFACE_V001");
              if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamInventory != 0 )
              {
                SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamUGC = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                + 208LL))(
                                                                                 SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                 HSteamUser,
                                                                                 HSteamPipe,
                                                                                 "STEAMUGC_INTERFACE_VERSION009");
                if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamUGC != 0 )
                  SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamApps = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                   + 120LL))(
                                                                                    SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                    HSteamUser,
                                                                                    HSteamPipe,
                                                                                    "STEAMAPPS_INTERFACE_VERSION008");
              }
            }
          }
        }
      }
    }
  }
  if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient != 0 )
    return steamgameserverapicontext->m_pSteamGameServerUtils != 0;
  return 0;
}


// CSteamWorksGameStatsUploader::GetInterface  (line 592, @0x0000000002036780, libserver.so)  // inlines: Init, SteamClient, SteamGameServerClient, SteamInternal_ModuleContext
// calls: SteamGameServer_GetHSteamUser, SteamGameServer_GetHSteamPipe, SteamInternal_ContextInit, CSteamGameServerAPIContext::Init, SteamInternal_CreateInterface
// callers: CSteamWorksGameStatsUploader::WriteSessionRow, CSteamWorksGameStatsUploader::VerifyInterface, CSteamWorksGameStatsServer::WriteSessionRow, CSteamWorksGameStatsUploader::RequestSessionID, CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats, CSteamWorksGameStatsUploader::EndSession
// strings: "SteamGameStats001", "SteamClient017", "SteamGameServer012", "SteamUtils008", "SteamNetworking005", "SteamGameServerStats001" (10 total)
// globals: SteamGameServerInternal_ModuleContext(void)::ctx, SteamInternal_ModuleContext(void)::s_CallbackCounterAndContext
ISteamGameStats *__fastcall CSteamWorksGameStatsUploader::GetInterface(CSteamWorksGameStatsUploader *const this)
{
  CSteamWorksGameStatsUploader *v1; // rbx
  unsigned int HSteamUser; // ebx
  __int64 v3; // rdi
  unsigned int HSteamPipe; // r12d
  __int64 v5; // rdi
  ISteamClient *m_pSteamClient; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rdi
  unsigned int v10; // r13d
  ISteamClient *Interface; // rax

  if ( steamgameserverapicontext != 0
    && (v1 = this, (this = steamgameserverapicontext->m_pSteamGameServer) != 0)
    && steamgameserverapicontext->m_pSteamGameServerUtils != 0 )
  {
    v1->m_UserID = (*(this->_vptr_IGameSystem + 10))(this);
    v1->m_iAppID = (*(*engine + 120LL))(engine);
    HSteamUser = SteamGameServer_GetHSteamUser();
    HSteamPipe = SteamGameServer_GetHSteamPipe(v3);
  }
  else
  {
    HSteamPipe = 0;
    HSteamUser = 0;
  }
  if ( SteamGameServer_GetHSteamPipe(this) != 0 )
  {
    if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient == 0 )
    {
      v8 = SteamGameServer_GetHSteamUser();
      v10 = SteamGameServer_GetHSteamPipe(v9);
      if ( v10 != 0 )
      {
        Interface = SteamInternal_CreateInterface("SteamClient017");
        SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient = Interface;
        if ( Interface == 0 )
          goto LABEL_9;
        SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServer = (*(*Interface + 48LL))(
                                                                                Interface,
                                                                                v8,
                                                                                v10,
                                                                                "SteamGameServer012");
        if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServer != 0 )
        {
          SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerUtils = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                      + 72LL))(
                                                                                       SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                       v10,
                                                                                       "SteamUtils008");
          if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerUtils != 0 )
          {
            SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerNetworking = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                             + 128LL))(
                                                                                              SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                              v8,
                                                                                              v10,
                                                                                              "SteamNetworking005");
            if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerNetworking != 0 )
            {
              SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerStats = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                          + 112LL))(
                                                                                           SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                           v8,
                                                                                           v10,
                                                                                           "SteamGameServerStats001");
              if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerStats != 0 )
              {
                SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamHTTP = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                 + 184LL))(
                                                                                  SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                  v8,
                                                                                  v10,
                                                                                  "STEAMHTTP_INTERFACE_VERSION002");
                if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamHTTP != 0 )
                {
                  SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamInventory = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                        + 272LL))(
                                                                                         SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                         v8,
                                                                                         v10,
                                                                                         "STEAMINVENTORY_INTERFACE_V001");
                  if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamInventory != 0 )
                  {
                    SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamUGC = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                    + 208LL))(
                                                                                     SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                     v8,
                                                                                     v10,
                                                                                     "STEAMUGC_INTERFACE_VERSION009");
                    if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamUGC != 0 )
                      SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamApps = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                       + 120LL))(
                                                                                        SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                        v8,
                                                                                        v10,
                                                                                        "STEAMAPPS_INTERFACE_VERSION008");
                  }
                }
              }
            }
          }
        }
      }
      if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient == 0 )
        goto LABEL_9;
    }
    if ( engine != 0 && (*(*engine + 160LL))(engine) != 0 )
    {
      if ( SteamGameServer_GetHSteamPipe(v5) != 0 )
      {
        m_pSteamClient = SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient;
        if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient == 0 )
        {
          CSteamGameServerAPIContext::Init(&SteamGameServerInternal_ModuleContext(void)::ctx);
          m_pSteamClient = SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient;
        }
      }
      else
      {
        m_pSteamClient = 0;
      }
      return (*(*m_pSteamClient + 96LL))(m_pSteamClient, HSteamUser, HSteamPipe, "SteamGameStats001");
    }
  }
LABEL_9:
  if ( *SteamInternal_ContextInit(&SteamInternal_ModuleContext(void)::s_CallbackCounterAndContext) != 0 )
  {
    m_pSteamClient = *SteamInternal_ContextInit(&SteamInternal_ModuleContext(void)::s_CallbackCounterAndContext);
    return (*(*m_pSteamClient + 96LL))(m_pSteamClient, HSteamUser, HSteamPipe, "SteamGameStats001");
  }
  return 0;
}


// CSteamWorksGameStatsUploader::AddStatsForUpload  (line 634, @0x0000000002037900, libserver.so)  // inlines: AddToTail, CopyConstruct<KeyValues*>, Element, GrowMemory, operator[]
// calls: CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats, KeyValues::deleteThis, CUtlMemory<KeyValues*, int>::Grow
// callers: CDOTA_OGS::LogItemEvent, CDOTA_OGS::LogHeroSelection, CDOTA_OGS::LogHeroResults, CDOTA_OGS::LogHeroDeath, CDOTA_OGS::LogCMHeroDraft, CDOTA_OGS::LogBuildingDeath, CDOTASteamWorksGameStatsServer::LogTutorialStats, CVProfOGSMode::UploadToDB, CDOTA_OGS::LogHeroLevelUp, CDOTA_OGS::LogMatchSnapshot
EResult __fastcall CSteamWorksGameStatsUploader::AddStatsForUpload(
        CSteamWorksGameStatsUploader *const this,
        KeyValues *pKV,
        int iClientPlayerID,
        bool bSendImmediately)
{
  EResult result; // eax
  __int64 m_Size; // r13
  int v8; // eax
  KeyValues **v9; // rax

  result = EResult::k_EResultFail;
  if ( pKV != 0 )
  {
    if ( bSendImmediately )
    {
      CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats(this, pKV, iClientPlayerID);
      KeyValues::deleteThis(pKV);
      return EResult::k_EResultOK;
    }
    else
    {
      m_Size = this->m_StatsToSend.m_Size;
      v8 = this->m_StatsToSend.m_Size;
      if ( m_Size == this->m_StatsToSend.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<KeyValues *,int>::Grow(&this->m_StatsToSend.m_Memory, 1);
        v8 = this->m_StatsToSend.m_Size;
      }
      this->m_StatsToSend.m_Size = v8 + 1;
      v9 = &this->m_StatsToSend.m_Memory.m_pMemory[m_Size];
      if ( v9 != 0 )
        *v9 = pKV;
      return EResult::k_EResultOK;
    }
  }
  return result;
}


// CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats  (line 668, @0x0000000002037050, libserver.so)
// calls: CSteamWorksGameStatsUploader::GetInterface, KeyValues::GetName, Warning, DevMsg(char const*,...), KeyValues::GetFirstSubKey, KeyValues::GetUint64, CSteamWorksGameStatsUploader::WriteInt64ToTable, KeyValues::GetNextKey, KeyValues::GetDataType, KeyValues::GetString, CSteamWorksGameStatsUploader::WriteStringToTable, KeyValues::GetFloat (15 total)
// callers: CSteamWorksGameStatsUploader::FlushStats, CSteamWorksGameStatsUploader::AddStatsForUpload
// strings: "Attempted to add stats to table %s with an invalid iTableID\n", "WARNING: Attempted to send a steamworks gamestats row when the steamworks interface was n
EResult __fastcall CSteamWorksGameStatsUploader::ParseKeyValuesAndSendStats(
        CSteamWorksGameStatsUploader *const this,
        KeyValues *pKV,
        int iClientPlayerID)
{
  EResult v3; // r13d
  ISteamGameStats *Interface; // rax
  const char *Name; // rax
  ISteamGameStats *m_SteamWorksInterface; // rdi
  const char *v11; // r15
  const char *v12; // rsi
  KeyValues *i; // r13
  uint64 v14; // r15
  uint64 Uint64; // rax
  const char *v16; // r14
  CKeyValues_Data::types_t DataType; // eax
  float v18; // xmm1_4
  uint64 v19; // r15
  const char *String; // rax
  uint64 v21; // r15
  double v22; // xmm0_8
  uint64 v23; // r15
  int Int; // eax
  uint64 iTableID[7]; // [rsp+8h] [rbp-38h] BYREF

  v3 = EResult::k_EResultFail;
  if ( pKV != 0 && this->m_bCollectingAny )
  {
    Interface = CSteamWorksGameStatsUploader::GetInterface(this);
    this->m_SteamWorksInterface = Interface;
    if ( Interface != 0 )
    {
      Name = KeyValues::GetName(pKV);
      m_SteamWorksInterface = this->m_SteamWorksInterface;
      iTableID[0] = 0;
      v11 = Name;
      (*(*m_SteamWorksInterface + 40LL))(m_SteamWorksInterface, iTableID, this->m_SessionID, Name);
      if ( iTableID[0] != 0 )
      {
        (*(this->_vptr_IGameSystem + 46))(this, iTableID[0], iClientPlayerID);
        for ( i = KeyValues::GetFirstSubKey(pKV); i != 0; i = KeyValues::GetNextKey(i) )
        {
          v16 = KeyValues::GetName(i);
          DataType = KeyValues::GetDataType(i, 0);
          if ( DataType == CKeyValues_Data::types_t::TYPE_INT )
          {
            v23 = iTableID[0];
            Int = KeyValues::GetInt(pKV, v16, 0);
            CSteamWorksGameStatsUploader::WriteIntToTable(this, Int, v23, v16);
          }
          else if ( DataType > CKeyValues_Data::types_t::TYPE_INT )
          {
            if ( DataType == CKeyValues_Data::types_t::TYPE_FLOAT )
            {
              v21 = iTableID[0];
              *&v22 = KeyValues::GetFloat(pKV, v16, v18);
              CSteamWorksGameStatsUploader::WriteFloatToTable(this, v22, v21, v16);
            }
            else if ( DataType == CKeyValues_Data::types_t::TYPE_UINT64 )
            {
              v14 = iTableID[0];
              Uint64 = KeyValues::GetUint64(pKV, v16, 0);
              CSteamWorksGameStatsUploader::WriteInt64ToTable(this, Uint64, v14, v16);
            }
          }
          else if ( DataType == CKeyValues_Data::types_t::TYPE_STRING )
          {
            v19 = iTableID[0];
            String = KeyValues::GetString(pKV, v16, "", 0, 0);
            CSteamWorksGameStatsUploader::WriteStringToTable(this, String, v19, v16);
          }
        }
        return (*(*this->m_SteamWorksInterface + 48LL))(this->m_SteamWorksInterface, iTableID[0]);
      }
      else
      {
        v12 = "NULL";
        if ( v11 != 0 )
          v12 = v11;
        Warning("Attempted to add stats to table %s with an invalid iTableID\n", v12);
      }
    }
    else
    {
      LOBYTE(v3) = 3;
      DevMsg("WARNING: Attempted to send a steamworks gamestats row when the steamworks interface was not available!");
    }
  }
  return v3;
}


// CSteamWorksGameStatsUploader::GetHumanCountInGame  (line 735, @0x0000000002037430, libserver.so)
int __fastcall CSteamWorksGameStatsUploader::GetHumanCountInGame(CSteamWorksGameStatsUploader *const this)
{
  return 0;
}


// CSteamWorksGameStatsUploader::ServerAddressToInt  (line 743, @0x0000000002037440, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, Purge, PurgeAndDeleteElements, RemoveAll, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), V_atoi, CUtlMemory<char*, int>::Purge, __stack_chk_fail, _Unwind_Resume
// callers: CSteamWorksGameStatsUploader::FireGameEvent
void __fastcall CSteamWorksGameStatsUploader::ServerAddressToInt(CSteamWorksGameStatsUploader *const this)
{
  __int64 v2; // r13
  unsigned __int8 v3; // al
  int m_Size; // esi
  __int64 v5; // r13
  int v6; // ebx
  char *v7; // rsi
  __int64 v8; // r13
  int v9; // ebx
  char *v10; // rsi
  CUtlStringList IPs; // [rsp+0h] [rbp-60h] BYREF
  unsigned __int8 ip_0[8]; // [rsp+20h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-38h]

  IPs.m_Size = 0;
  v13 = __readfsqword(0x28u);
  IPs.m_Memory.m_pMemory = 0;
  IPs.m_Memory.m_nAllocationCount = 0;
  IPs.m_Memory.m_nGrowSize = 0;
  V_SplitString(this->m_pzServerIP, ".", &IPs);
  this->m_iServerIP = 0;
  v2 = 0;
  if ( IPs.m_Size <= 3 )
  {
    if ( IPs.m_Size > 0 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        ++v9;
        v10 = IPs.m_Memory.m_pMemory[v8++];
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v10);
      }
      while ( v9 < IPs.m_Size );
    }
    IPs.m_Size = 0;
    if ( (IPs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char *,int>::Purge(&IPs.m_Memory);
      if ( (IPs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        goto LABEL_10;
    }
  }
  else
  {
    do
    {
      v3 = V_atoi(IPs.m_Memory.m_pMemory[v2]);
      m_Size = IPs.m_Size;
      ip_0[v2] = v3;
      if ( m_Size <= v2 + 1 )
        break;
      ++v2;
    }
    while ( v2 != 4 );
    this->m_iServerIP = ip_0[3] + (ip_0[1] << 16) + (ip_0[0] << 24) + (ip_0[2] << 8);
    if ( m_Size > 0 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        ++v6;
        v7 = IPs.m_Memory.m_pMemory[v5++];
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v7);
      }
      while ( v6 < IPs.m_Size );
    }
    IPs.m_Size = 0;
    if ( (IPs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char *,int>::Purge(&IPs.m_Memory);
      if ( (IPs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_10:
        CUtlMemory<char *,int>::Purge(&IPs.m_Memory);
    }
  }
}


