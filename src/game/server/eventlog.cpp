
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEventLog::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 18, @0x00000000021fad60, libserver.so)
void __cdecl CEventLog::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CEventLog::CEventLog  (line 20, @0x00000000021fad70, libserver.so)  // inlines: CGameEventListener
// callers: CGameSystemReallocatingFactory<CDOTAEventLog, CDOTAEventLog>::CreateGameSystem
void __fastcall CEventLog::CEventLog(CEventLog *const this)
{
  this->_vptr_IGameEventListener2 = off_4031B10;
  this->m_bRegisteredForEvents = 0;
  this->_vptr_IGameSystem = off_4031B88;
}


// CEventLog::~CEventLog  (line 24, @0x00000000021f1990, libserver.so)  // inlines: StopListeningForAllEvents, ~CGameEventListener, ~IGameEventListener2
// calls: IGameSystem::~IGameSystem
// callers: CDOTAEventLog::~CDOTAEventLog
void __fastcall CEventLog::~CEventLog(CEventLog *const this)
{
  IGameSystem *v2; // rdi
  bool v3; // zf

  v2 = &this->IGameSystem;
  v2[-1]._vptr_IGameSystem = off_4031B10;
  v2->_vptr_IGameSystem = off_4031B88;
  IGameSystem::~IGameSystem(v2);
  v3 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v3 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, this);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
}


// CEventLog::~CEventLog  (line 24, @0x00000000021f1a10, libserver.so)  // inlines: StopListeningForAllEvents, ~CEventLog, ~CGameEventListener, ~IGameEventListener2
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CEventLog::~CEventLog(CEventLog *const this)
{
  IGameSystem *v2; // rdi
  bool v3; // zf

  v2 = &this->IGameSystem;
  v2[-1]._vptr_IGameSystem = off_4031B10;
  v2->_vptr_IGameSystem = off_4031B88;
  IGameSystem::~IGameSystem(v2);
  v3 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v3 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, this);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
  operator delete(this);
}


// CEventLog::FormatPlayer  (line 29, @0x00000000021f1a90, libserver.so)  // inlines: GetUserID, ToBasePlayer, entindex
// calls: CEntityInstance::GetEntityIndex, CBasePlayer::GetNetworkIDString, CBaseEntity::GetTeam, V_snprintf
// strings: "\"%s<%i><%s><%s><Area %d>\"", "Unknown"
void __fastcall CEventLog::FormatPlayer(const CEventLog *const this, CBaseEntity *ent, char *str, int len)
{
  const char *v7; // r13
  CEntityIndex v8; // eax
  int v9; // r15d
  CTeam *Team; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  const char *networkIDString; // [rsp+10h] [rbp-40h]
  const char *playerName; // [rsp+18h] [rbp-38h]

  if ( str != 0 && len > 0 )
  {
    if ( ent != 0 )
    {
      if ( (*(ent->_vptr_IHandleEntity + 140))(ent) != 0 )
      {
        v7 = "";
        playerName = (*(ent->_vptr_IHandleEntity + 106))(ent);
        v8.m_Data = CEntityInstance::GetEntityIndex(ent).m_Data;
        v9 = (*(*engine + 224LL))(engine, (v8.m_Data - 1));
        networkIDString = CBasePlayer::GetNetworkIDString(ent);
        Team = CBaseEntity::GetTeam(ent);
        if ( Team != 0 )
          v7 = (*(Team->_vptr_IHandleEntity + 208))(Team);
      }
      else
      {
        v7 = "";
        v9 = 0;
        networkIDString = "";
        playerName = "Unknown";
      }
      if ( (*(ent->_vptr_IHandleEntity + 147))(ent) != 0 )
      {
        v11 = (*(ent->_vptr_IHandleEntity + 147))(ent);
        v12 = (*(*v11 + 2888LL))(v11);
        if ( v12 != 0 )
          LODWORD(v12) = *(v12 + 212);
        goto LABEL_11;
      }
    }
    else
    {
      v7 = "";
      v9 = 0;
      networkIDString = "";
      playerName = "Unknown";
    }
    LODWORD(v12) = 0;
LABEL_11:
    V_snprintf(str, len, "\"%s<%i><%s><%s><Area %d>\"", playerName, v9, networkIDString, v7, v12);
  }
}


// CEventLog::FormatPlayer  (line 67, @0x00000000021fad90, libserver.so)
// globals: CEventLog::FormatPlayer(CBaseEntity *)::s_buffer, CEventLog::FormatPlayer(CBaseEntity *)::s_index
const char *__fastcall CEventLog::FormatPlayer(const CEventLog *const this, CBaseEntity *ent)
{
  int v2; // ecx
  const char *v3; // rbx
  int (**vptr_IGameEventListener2)(...); // rax
  char *v5; // rdx

  v2 = 0;
  v3 = &CEventLog::FormatPlayer(CBaseEntity *)const::s_buffer[256 * CEventLog::FormatPlayer(CBaseEntity *)const::s_index];
  vptr_IGameEventListener2 = this->_vptr_IGameEventListener2;
  if ( CEventLog::FormatPlayer(CBaseEntity *)const::s_index + 1 <= 3 )
    v2 = CEventLog::FormatPlayer(CBaseEntity *)const::s_index + 1;
  v5 = &CEventLog::FormatPlayer(CBaseEntity *)const::s_buffer[256 * CEventLog::FormatPlayer(CBaseEntity *)const::s_index];
  CEventLog::FormatPlayer(CBaseEntity *)const::s_index = v2;
  vptr_IGameEventListener2[7](this, ent, v5, 256);
  return v3;
}


// CEventLog::FireGameEvent  (line 84, @0x00000000021efa50, libserver.so)
void __fastcall CEventLog::FireGameEvent(CEventLog *const this, IGameEvent *event)
{
  if ( g_bIsLogging )
    (*(this->_vptr_IGameEventListener2 + 8))(this, event);
}


// CEventLog::PrintEvent  (line 92, @0x00000000021ef6e0, libserver.so)  // inlines: V_strncmp<int>
// calls: _V_strncmp
// callers: CDOTAEventLog::PrintEvent
// strings: "server_", "player_", "team_", "game_"
bool __fastcall CEventLog::PrintEvent(CEventLog *const this, IGameEvent *event)
{
  const char *v4; // r12
  bool v6; // zf
  int (**vptr_IGameEventListener2)(...); // rax

  v4 = (*(event->_vptr_IGameEvent + 2))(event);
  if ( _V_strncmp(v4, "server_", 7) == 0 )
    return 1;
  if ( _V_strncmp(v4, "player_", 7) == 0 )
    return (*(this->_vptr_IGameEventListener2 + 10))(this, event);
  if ( _V_strncmp(v4, "team_", 5) == 0 )
    return (*(this->_vptr_IGameEventListener2 + 11))(this, event);
  v6 = _V_strncmp(v4, "game_", 5) == 0;
  vptr_IGameEventListener2 = this->_vptr_IGameEventListener2;
  if ( v6 )
    return vptr_IGameEventListener2[9](this, event);
  else
    return vptr_IGameEventListener2[12](this, event);
}


// CEventLog::PrintGameEvent  (line 118, @0x00000000021ee680, libserver.so)
bool __fastcall CEventLog::PrintGameEvent(CEventLog *const this, IGameEvent *event)
{
  return 0;
}


// CEventLog::PrintPlayerEvent  (line 125, @0x00000000021f1f60, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, GetUserID, String, V_strncmp<int>, entindex
// calls: _V_strncmp, UTIL_PlayerByUserId, CBaseEntity::GetTeam, UTIL_LogPrintf, CBasePlayer::GetNetworkIDString, GetGlobalTeam, CEntityInstance::GetEntityIndex, DevMsg(char const*,...)
// strings: "player_connect", "player_disconnect", "networkid", "\"%s<%i><%s><%s>\" disconnected (reason \"%s\")\n", "\"%s<%i><%s><>\" connected, address \"%s\"\n", "player_death" (18 total)
bool __fastcall CEventLog::PrintPlayerEvent(CEventLog *const this, IGameEvent *event)
{
  const char *v3; // r14
  int v4; // ebx
  const char *v5; // r14
  const char *v6; // r12
  const char *v7; // r13
  CBasePlayer *v8; // rax
  CTeam *Team; // rax
  const char *v10; // r8
  bool result; // al
  CBasePlayer *v12; // r12
  const char *v13; // r12
  const char *v14; // r14
  const char *v15; // rax
  int v16; // r14d
  CBasePlayer *v17; // r13
  CTeam *v18; // rax
  CTeam *v19; // r15
  __int64 v20; // rdx
  CTeam *v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rax
  const char *v24; // r15
  __int64 v25; // rax
  const char *v26; // r8
  const char *v27; // r12
  const char *v28; // rax
  int v29; // edx
  const char *v30; // r15
  const char *v31; // r14
  const char *v32; // r13
  CTeam *v33; // rax
  const char *v34; // rax
  int v35; // ebx
  int v36; // r13d
  CTeam *GlobalTeam; // rbx
  CTeam *v38; // r13
  const char *v39; // r14
  CEntityIndex v40; // eax
  int v41; // r15d
  const char *NetworkIDString; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rsi
  const char *v46; // r8
  const char *v47; // r12
  const char *v48; // r9
  __int64 v49; // rax
  const char *v50; // r13
  const char *v51; // rax
  const char *v52; // r13
  const char *v53; // r14
  const char *v54; // rax
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // r14
  const char *v57; // r13
  const char *v58; // r15
  const char *v59; // rax
  const char *v60; // [rsp+18h] [rbp-48h]
  CTeam *attackerTeama; // [rsp+20h] [rbp-40h]
  CTeam *attackerTeam; // [rsp+20h] [rbp-40h]
  const char *attackerTeamb; // [rsp+20h] [rbp-40h]
  const char *oldTeamName; // [rsp+28h] [rbp-38h]
  const char *oldTeamNamea; // [rsp+28h] [rbp-38h]

  v3 = (*(event->_vptr_IGameEvent + 2))(event);
  v4 = (*(event->_vptr_IGameEvent + 8))(event, "userid", 0);
  if ( _V_strncmp(v3, "player_connect", 14) == 0 )
  {
    v13 = (*(event->_vptr_IGameEvent + 11))(event, "name", "");
    v14 = (*(event->_vptr_IGameEvent + 11))(event, "address", "");
    v15 = (*(event->_vptr_IGameEvent + 11))(event, "networkid", "");
    UTIL_LogPrintf("\"%s<%i><%s><>\" connected, address \"%s\"\n", v13, v4, v15, v14);
    return 1;
  }
  if ( _V_strncmp(v3, "player_disconnect", 17) == 0 )
  {
    v5 = (*(event->_vptr_IGameEvent + 11))(event, "reason", "");
    v6 = (*(event->_vptr_IGameEvent + 11))(event, "name", "");
    v7 = (*(event->_vptr_IGameEvent + 11))(event, "networkid", "");
    v8 = UTIL_PlayerByUserId(v4);
    if ( v8 != 0 && (Team = CBaseEntity::GetTeam(v8)) != 0 )
      v10 = (*(Team->_vptr_IHandleEntity + 208))(Team);
    else
      v10 = "";
    UTIL_LogPrintf("\"%s<%i><%s><%s>\" disconnected (reason \"%s\")\n", v6, v4, v7, v10, v5);
    return 1;
  }
  v12 = UTIL_PlayerByUserId(v4);
  if ( v12 == 0 )
  {
    DevMsg("CEventLog::PrintPlayerEvent: Failed to find player (userid: %i, event: %s)\n", v4, v3);
    return 0;
  }
  if ( _V_strncmp(v3, "player_team", 11) == 0 )
  {
    if ( (*(event->_vptr_IGameEvent + 7))(event, "disconnect", 0) == 0 )
    {
      v35 = (*(event->_vptr_IGameEvent + 8))(event, "team", 0);
      v36 = (*(event->_vptr_IGameEvent + 8))(event, "oldteam", 0);
      GlobalTeam = GetGlobalTeam(v35);
      v38 = GetGlobalTeam(v36);
      v39 = (*(v12->_vptr_IHandleEntity + 106))(v12);
      v40.m_Data = CEntityInstance::GetEntityIndex(v12).m_Data;
      v41 = (*(*engine + 224LL))(engine, (v40.m_Data - 1));
      if ( v41 > 0 )
      {
        NetworkIDString = CBasePlayer::GetNetworkIDString(v12);
        v46 = "Unassigned";
        v47 = NetworkIDString;
        if ( v38 != 0 )
          v46 = (*(v38->_vptr_IHandleEntity + 208))(v38, v45, v43, v44, "Unassigned");
        v48 = "Unassigned";
        if ( GlobalTeam != 0 )
        {
          oldTeamNamea = v46;
          v49 = (*(GlobalTeam->_vptr_IHandleEntity + 208))(GlobalTeam, v45, v43, v44, v46, "Unassigned");
          v46 = oldTeamNamea;
          v48 = v49;
        }
        UTIL_LogPrintf("\"%s<%i><%s><%s>\" joined team \"%s\"\n", v39, v41, v47, v46, v48);
        return 1;
      }
    }
    return 1;
  }
  if ( _V_strncmp(v3, "player_death", 12) != 0 )
  {
    if ( _V_strncmp(v3, "player_activate", 15) == 0 )
    {
      v50 = CBasePlayer::GetNetworkIDString(v12);
      v51 = (*(v12->_vptr_IHandleEntity + 106))(v12);
      UTIL_LogPrintf("\"%s<%i><%s><>\" entered the game\n", v51, v4, v50);
      return 1;
    }
    v29 = _V_strncmp(v3, "player_changename", 17);
    result = 0;
    if ( v29 == 0 )
    {
      v30 = "";
      v31 = (*(event->_vptr_IGameEvent + 11))(event, "newname", "");
      v32 = (*(event->_vptr_IGameEvent + 11))(event, "oldname", "");
      v33 = CBaseEntity::GetTeam(v12);
      if ( v33 != 0 )
        v30 = (*(v33->_vptr_IHandleEntity + 208))(v33);
      v34 = CBasePlayer::GetNetworkIDString(v12);
      UTIL_LogPrintf("\"%s<%i><%s><%s>\" changed name to \"%s\"\n", v32, v4, v34, v30, v31);
      return 1;
    }
  }
  else
  {
    v16 = (*(event->_vptr_IGameEvent + 8))(event, "attacker", 0);
    v17 = UTIL_PlayerByUserId(v16);
    v18 = CBaseEntity::GetTeam(v12);
    v19 = v18;
    if ( v17 != 0 )
    {
      v21 = CBaseEntity::GetTeam(v17);
      if ( v12 == v17 )
      {
        m_pEntity = v12->m_pEntity;
        m_pAsString = "";
        if ( m_pEntity->m_designerName.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
        v57 = "";
        if ( v19 != 0 )
          v57 = (*(v19->_vptr_IHandleEntity + 208))(v19, v22, v20, v21);
        v58 = CBasePlayer::GetNetworkIDString(v12);
        v59 = (*(v12->_vptr_IHandleEntity + 106))(v12);
        UTIL_LogPrintf("\"%s<%i><%s><%s>\" committed suicide with \"%s\"\n", v59, v4, v58, v57, m_pAsString);
        return 1;
      }
      else
      {
        oldTeamName = "";
        if ( v19 != 0 )
        {
          attackerTeama = v21;
          v23 = (*(v19->_vptr_IHandleEntity + 208))(v19);
          v21 = attackerTeama;
          oldTeamName = v23;
        }
        attackerTeam = v21;
        v24 = CBasePlayer::GetNetworkIDString(v12);
        v25 = (*(v12->_vptr_IHandleEntity + 106))(v12);
        v26 = "";
        v27 = v25;
        if ( attackerTeam != 0 )
          v26 = (*(attackerTeam->_vptr_IHandleEntity + 208))(attackerTeam);
        v60 = v26;
        attackerTeamb = CBasePlayer::GetNetworkIDString(v17);
        v28 = (*(v17->_vptr_IHandleEntity + 106))(v17);
        UTIL_LogPrintf(
          "\"%s<%i><%s><%s>\" killed \"%s<%i><%s><%s>\"\n",
          v28,
          v16,
          attackerTeamb,
          v60,
          v27,
          v4,
          v24,
          oldTeamName);
        return 1;
      }
    }
    else
    {
      v52 = "";
      if ( v18 != 0 )
        v52 = (*(v18->_vptr_IHandleEntity + 208))(v18);
      v53 = CBasePlayer::GetNetworkIDString(v12);
      v54 = (*(v12->_vptr_IHandleEntity + 106))(v12);
      UTIL_LogPrintf("\"%s<%i><%s><%s>\" committed suicide with \"world\"\n", v54, v4, v53, v52);
      return 1;
    }
  }
  return result;
}


// CEventLog::PrintTeamEvent  (line 270, @0x00000000021ee690, libserver.so)
bool __fastcall CEventLog::PrintTeamEvent(CEventLog *const this, IGameEvent *event)
{
  return 0;
}


// CEventLog::PrintOtherEvent  (line 277, @0x00000000021ee6a0, libserver.so)
bool __fastcall CEventLog::PrintOtherEvent(CEventLog *const this, IGameEvent *event)
{
  return 0;
}


// CEventLog::GameInit  (line 283, @0x00000000021ee6b0, libserver.so)  // inlines: ListenForGameEvent
// strings: "player_changename", "player_activate", "player_death", "player_disconnect", "player_connect"
void __fastcall CEventLog::GameInit(CEventLog *const this, const EventGameInit_t *const msg)
{
  IGameEventManager2 *v3; // rdi
  IGameEventManager2 *v4; // rdi
  IGameEventManager2 *v5; // rdi
  IGameEventManager2 *v6; // rdi

  this->m_bRegisteredForEvents = 1;
  (*(gameeventmanager->_vptr_IBaseInterface + 4))(gameeventmanager, this, "player_changename", 1);
  v3 = gameeventmanager;
  this->m_bRegisteredForEvents = 1;
  (*(v3->_vptr_IBaseInterface + 4))(v3, this, "player_activate", 1);
  v4 = gameeventmanager;
  this->m_bRegisteredForEvents = 1;
  (*(v4->_vptr_IBaseInterface + 4))(v4, this, "player_death", 1);
  v5 = gameeventmanager;
  this->m_bRegisteredForEvents = 1;
  (*(v5->_vptr_IBaseInterface + 4))(v5, this, "player_team", 1);
  v6 = gameeventmanager;
  this->m_bRegisteredForEvents = 1;
  (*(v6->_vptr_IBaseInterface + 4))(v6, this, "player_disconnect", 1);
  this->m_bRegisteredForEvents = 1;
  (*(gameeventmanager->_vptr_IBaseInterface + 4))(gameeventmanager, this, "player_connect", 1);
}


