// Reconstructed from DWARF by pahole; not original source.

// src/game/server/client.cpp:409
class CClientPrecacheGameSystem : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CAutoGameSystem BaseClass;
	CClientPrecacheGameSystem(CClientPrecacheGameSystem &);
	CClientPrecacheGameSystem(const CClientPrecacheGameSystem &);
	CClientPrecacheGameSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CClientPrecacheGameSystem *);
	virtual void BuildGameSessionManifest(const EventBuildGameSessionManifest_t &);
	virtual ~CClientPrecacheGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[7] BuildGameSessionManifest
	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CheckChatText  (line 81, @0x0000000002194760, libserver.so)  // inlines: GameRules, V_strlen
// calls: strlen
// callers: Host_Say
char *__fastcall CheckChatText(CBasePlayer *pPlayer, char *text)
{
  char v3; // r13
  char *v5; // r12
  int v6; // eax
  int v7; // edx

  if ( text == 0 )
    return 0;
  v3 = *text;
  if ( *text == 0 )
    return 0;
  v5 = text;
  v6 = strlen(text);
  v7 = v6;
  if ( v3 == 34 )
  {
    v7 = v6 - 2;
    v5 = text + 1;
    text[v6 - 1] = 0;
  }
  if ( v7 > 127 )
    text[127] = 0;
  (*(g_pGameRules->_vptr_CGameRules + 116))(g_pGameRules, pPlayer, v5);
  return v5;
}


// Host_Say  (line 117, @0x0000000002194800, libserver.so)  // inlines: Arg, ArgS, CSingleUserRecipientFilter, GetBool, GetInt, GetTeamNumber, ToBaseMultiplayerPlayer, ToBasePlayer, ToDOTAPlayer, V_strlen, V_strncat<long unsigned int>, entindex, operator[], ~CSingleUserRecipientFilter
// calls: V_stricmp_fast, strlen, V_snprintf, _V_strncat, GetVoiceGameMgr, CEntityInstance::GetEntityIndex, CVoiceGameMgr::IsPlayerIgnoringPlayerText, UTIL_PlayerByIndex, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, UTIL_SayText2Filter (28 total)
// callers: Script_Say, say_team, say, CGCClientJobDOTABroadcastNotificationServer::BYieldingRunJobFromMsg
// strings: "say", "%s %s @ %s: ", "say_team", "%s %s: ", "\"Console<0>\" say_team \"%s\"\n", "\"Console<0>\" say \"%s\"\n"
void __fastcall Host_Say(
        CBaseEntity *pEntity,
        const CCommand *const args,
        bool teamonly,
        int nCustomModRules,
        const char *pszCustomModPrepend)
{
  const char *v8; // r12
  __int64 v9; // rax
  const char *v10; // rbx
  char *v11; // rdx
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ebx
  int v15; // r12d
  CVoiceGameMgr *VoiceGameMgr; // rax
  CBasePlayer *v17; // rax
  CBasePlayer *v18; // rbx
  char *v19; // rbx
  CTeam *Team; // rax
  __int64 m_Value; // rdx
  __int64 m_nArgv0Size; // rax
  const char *v23; // r8
  char *v24; // rbx
  CEntityIndex iTalker; // [rsp+1Ch] [rbp-3B4h]
  const char *pszFormat; // [rsp+28h] [rbp-3A8h]
  const char *pszLocation; // [rsp+30h] [rbp-3A0h]
  char *pszPlayerName; // [rsp+38h] [rbp-398h]
  char *p; // [rsp+48h] [rbp-388h]
  CBasePlayer *pszCustomModPrependb; // [rsp+50h] [rbp-380h]
  char text[256]; // [rsp+60h] [rbp-370h] BYREF
  char szTemp[256]; // [rsp+160h] [rbp-270h] BYREF
  CSingleUserRecipientFilter user; // [rsp+260h] [rbp-170h] BYREF
  unsigned __int64 v37; // [rsp+398h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  if ( args->m_nArgc <= 0 )
  {
    if ( args->m_nArgc == 0 )
      return;
    v8 = "";
  }
  else
  {
    v8 = args->m_ppArgv[0];
  }
  if ( V_stricmp_fast(v8, "say") != 0
    && V_stricmp_fast(v8, "say_team") != 0
    && (pszCustomModPrepend == 0 || V_stricmp_fast(v8, pszCustomModPrepend) != 0) )
  {
    if ( args->m_nArgc <= 1 )
    {
      V_snprintf(szTemp, 256, "%s", v8);
      p = szTemp;
    }
    else
    {
      m_nArgv0Size = args->m_nArgv0Size;
      v23 = "";
      if ( m_nArgv0Size != 0 )
        v23 = &args->m_pArgSBuffer[m_nArgv0Size];
      V_snprintf(szTemp, 256, "%s %s", v8, v23);
      p = szTemp;
    }
  }
  else
  {
    if ( args->m_nArgc <= 1 )
      return;
    v9 = args->m_nArgv0Size;
    p = "";
    if ( v9 != 0 )
      p = &args->m_pArgSBuffer[v9];
  }
  if ( pEntity == 0 || (*(pEntity->_vptr_IHandleEntity + 140))(pEntity) == 0 )
  {
    pszCustomModPrependb = 0;
LABEL_10:
    if ( g_pGameRules != 0 )
    {
      pszFormat = (*(g_pGameRules->_vptr_CGameRules + 134))(
                    g_pGameRules,
                    teamonly,
                    pszCustomModPrependb,
                    nCustomModRules);
      v10 = (*(g_pGameRules->_vptr_CGameRules + 132))(g_pGameRules, teamonly, pszCustomModPrependb);
      pszLocation = (*(g_pGameRules->_vptr_CGameRules + 133))(g_pGameRules, teamonly, pszCustomModPrependb);
    }
    else
    {
      pszLocation = 0;
      v10 = 0;
      pszFormat = 0;
    }
    pszPlayerName = "Console";
    if ( pszCustomModPrependb != 0 )
      pszPlayerName = (*(pszCustomModPrependb->_vptr_IHandleEntity + 106))(pszCustomModPrependb);
    if ( v10 != 0 && strlen(v10) > 0 )
    {
      if ( pszLocation != 0 && strlen(pszLocation) != 0 )
        V_snprintf(text, 256, "%s %s @ %s: ", v10, pszPlayerName, pszLocation);
      else
        V_snprintf(text, 256, "%s %s: ", v10, pszPlayerName);
    }
    else
    {
      V_snprintf(text, 256, "%s: ", pszPlayerName);
    }
    v11 = text;
    do
    {
      v12 = *v11;
      v11 += 4;
      v13 = ~v12 & (v12 - 16843009) & 0x80808080;
    }
    while ( v13 == 0 );
    if ( (~v12 & (v12 - 16843009) & 0x8080) == 0 )
    {
      LOBYTE(v13) = (~v12 & (v12 - 16843009) & 0x80808080) >> 16;
      LODWORD(v11) = v11 + 2;
    }
    v14 = text - (v11 - (__CFADD__(v13, v13) + 3)) + 254;
    if ( v14 < strlen(p) )
      p[v14] = 0;
    _V_strncat(text, p, 256, 0xFFFFFFFFLL);
    _V_strncat(text, "\n", 256, 0xFFFFFFFFLL);
    if ( (*p & 0xFD) != 0x2D )
    {
      if ( gpGlobals->maxClients > 0 )
      {
        v15 = 1;
        do
        {
          v17 = UTIL_PlayerByIndex(v15);
          v18 = v17;
          if ( v17 != 0
            && (*(v17->_vptr_IHandleEntity + 140))(v17) != 0
            && pEntity != v18
            && (*(v18->_vptr_IHandleEntity + 100))(v18) != 0
            && (teamonly || nCustomModRules != 0 || !v18->m_pl.hltv || tv_show_allchat.m_pParent->m_Value.m_nValue != 0)
            && (nCustomModRules == 0 && !teamonly
             || (*(g_pGameRules->_vptr_CGameRules + 115))(g_pGameRules, v18, pszCustomModPrependb, nCustomModRules) != 0) )
          {
            if ( pszCustomModPrependb == 0
              || (*(v18->_vptr_IHandleEntity + 494))(v18) != 0
              && (GetVoiceGameMgr() == 0
               || (iTalker.m_Data = CEntityInstance::GetEntityIndex(pszCustomModPrependb).m_Data,
                   VoiceGameMgr = GetVoiceGameMgr(),
                   !CVoiceGameMgr::IsPlayerIgnoringPlayerText(VoiceGameMgr, iTalker, v15))) )
            {
              CSingleUserRecipientFilter::CSingleUserRecipientFilter(&user, v18);
              CRecipientFilter::MakeReliable(&user);
              if ( pszFormat != 0 )
                UTIL_SayText2Filter(&user, pszCustomModPrependb, 1, pszFormat, pszPlayerName, p, pszLocation, 0);
              else
                UTIL_SayTextFilter(&user, text, pszCustomModPrependb, 1);
              user._vptr_IRecipientFilter = &off_3FCB0D0;
              CRecipientFilter::~CRecipientFilter(&user);
            }
          }
          ++v15;
        }
        while ( gpGlobals->maxClients >= v15 );
      }
      if ( pszCustomModPrependb != 0 )
      {
        CRecipientFilter::CRecipientFilter(&user);
        user._vptr_IRecipientFilter = &off_3FCB0D0;
        CRecipientFilter::AddRecipient(&user, pszCustomModPrependb);
        CRecipientFilter::MakeReliable(&user);
        if ( pszFormat != 0 )
          UTIL_SayText2Filter(&user, pszCustomModPrependb, 1, pszFormat, pszPlayerName, p, pszLocation, 0);
        else
          UTIL_SayTextFilter(&user, text, pszCustomModPrependb, 1);
        user._vptr_IRecipientFilter = &off_3FCB0D0;
        CRecipientFilter::~CRecipientFilter(&user);
      }
    }
    if ( AppIsDedicatedServer() )
      Msg("%s", text);
    if ( pszCustomModPrependb != 0 )
    {
      CBasePlayer::GetUserID(pszCustomModPrependb);
      CBasePlayer::GetNetworkIDString(pszCustomModPrependb);
      v19 = (*(pszCustomModPrependb->_vptr_IHandleEntity + 106))(pszCustomModPrependb);
      Team = CBaseEntity::GetTeam(pszCustomModPrependb);
      if ( Team != 0 )
        (*(Team->_vptr_IHandleEntity + 208))(Team);
    }
    else
    {
      v19 = "Console";
      if ( teamonly )
        UTIL_LogPrintf("\"Console<0>\" say_team \"%s\"\n", p);
      else
        UTIL_LogPrintf("\"Console<0>\" say \"%s\"\n", p);
    }
    if ( g_pGameRules != 0 )
    {
      if ( pszCustomModPrependb != 0 && teamonly )
        m_Value = pszCustomModPrependb->m_iTeamNum.m_Value;
      else
        m_Value = 0;
      (*(g_pGameRules->_vptr_CGameRules + 117))(g_pGameRules, pszCustomModPrependb, m_Value, v19, p);
    }
    ScanChatMessagesForTestingCheckPoints(p);
    return;
  }
  v24 = CheckChatText(pEntity, p);
  if ( v24 != 0
    && ((*(pEntity->_vptr_IHandleEntity + 140))(pEntity) == 0 || !CDOTAPlayer::IsACoach(pEntity) || teamonly) )
  {
    if ( (*(pEntity->_vptr_IHandleEntity + 495))(pEntity) == 0 )
    {
      CRecipientFilter::CRecipientFilter(&user);
      user._vptr_IRecipientFilter = &off_3FCB0D0;
      CRecipientFilter::AddRecipient(&user, pEntity);
      SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_VOICE_TEXT_BANNED, 0, &user);
      user._vptr_IRecipientFilter = &off_3FCB0D0;
      CRecipientFilter::~CRecipientFilter(&user);
      return;
    }
    (*(pEntity->_vptr_IHandleEntity + 497))(pEntity, v24, 127);
    p = CheckChatText(pEntity, v24);
    if ( p != 0 )
    {
      CBaseEntity::GetLifeState(pEntity);
      pszCustomModPrependb = pEntity;
      goto LABEL_10;
    }
  }
}


// InitManifestDesc<ClientPrecacheRegistry_server::CTemplateArg>  (line 374, @0x00000000021953e0, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// globals: `guard variable for'InitManifestDesc<ClientPrecacheRegistry_server::CTemplateArg>(ClientPrecacheRegistry_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<ClientPrecacheRegistry_server::CTemplateArg>(ClientPrecacheRegistry_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<ClientPrecacheRegistry_server::CTemplateArg>(ClientPrecacheRegistry_server::CTemplateArg &)::s_Manifest
ResourceManifestDesc_t *__fastcall InitManifestDesc<ClientPrecacheRegistry_server::CTemplateArg>(
        ClientPrecacheRegistry_server::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<ClientPrecacheRegistry_server::CTemplateArg>(ClientPrecacheRegistry_server::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<ClientPrecacheRegistry_server::CTemplateArg>(ClientPrecacheRegistry_server::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<ClientPrecacheRegistry_server::CTemplateArg>(ClientPrecacheRegistry_server::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<ClientPrecacheRegistry_server::CTemplateArg>(ClientPrecacheRegistry_server::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<ClientPrecacheRegistry_server::CTemplateArg>(ClientPrecacheRegistry_server::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<ClientPrecacheRegistry_server::CTemplateArg>(ClientPrecacheRegistry_server::CTemplateArg &)::s_Manifest;
}


// CClientPrecacheGameSystem::~CClientPrecacheGameSystem  (line 409, @0x00000000021b2520, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CClientPrecacheGameSystem::~CClientPrecacheGameSystem(CClientPrecacheGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CClientPrecacheGameSystem::~CClientPrecacheGameSystem  (line 409, @0x00000000021b2540, libserver.so)  // inlines: ~CAutoGameSystem, ~CClientPrecacheGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CClientPrecacheGameSystem::~CClientPrecacheGameSystem(CClientPrecacheGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CClientPrecacheGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 411, @0x00000000021b10f0, libserver.so)
void __fastcall CClientPrecacheGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CClientPrecacheGameSystem *const this)
{
  ;
}


// CClientPrecacheGameSystem::DoesGameSystemReallocate  (line 411, @0x00000000021b1100, libserver.so)
// globals: CClientPrecacheGameSystem::sm_Factory
bool __fastcall CClientPrecacheGameSystem::DoesGameSystemReallocate(const CClientPrecacheGameSystem *const this)
{
  return (*(CClientPrecacheGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CClientPrecacheGameSystem::sm_Factory);
}


// CClientPrecacheGameSystem::SetGameSystemGlobalPtrs  (line 411, @0x00000000021b1120, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CClientPrecacheGameSystem::sm_Factory
void __fastcall CClientPrecacheGameSystem::SetGameSystemGlobalPtrs(CClientPrecacheGameSystem *const this, void *pValue)
{
  if ( CClientPrecacheGameSystem::sm_Factory != 0 )
    (*(CClientPrecacheGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CClientPrecacheGameSystem::sm_Factory,
      pValue);
}


// CClientPrecacheGameSystem::BuildGameSessionManifest  (line 414, @0x00000000021b2bf0, libserver.so)
// calls: ClientGamePrecache, V_snprintf, __stack_chk_fail
// strings: "cfg/cpu_level_%d_pc.txt", "cfg/gpu_level_%d_pc.txt", "cfg/mem_level_%d_pc.txt", "cfg/gpu_mem_level_%d_pc.txt"
void __fastcall CClientPrecacheGameSystem::BuildGameSessionManifest(
        CClientPrecacheGameSystem *const this,
        const EventBuildGameSessionManifest_t *const msg)
{
  int v2; // r12d
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  char pBuf[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v8; // [rsp+108h] [rbp-28h]

  v2 = 0;
  v8 = __readfsqword(0x28u);
  ClientGamePrecache(msg->m_pResourceManifest);
  do
  {
    v3 = v2++;
    V_snprintf(pBuf, 260, "cfg/cpu_level_%d_pc.txt", v3);
    (*(*engine + 568LL))(engine, pBuf);
  }
  while ( v2 != 3 );
  LOBYTE(v2) = 0;
  do
  {
    v4 = v2++;
    V_snprintf(pBuf, 260, "cfg/gpu_level_%d_pc.txt", v4);
    (*(*engine + 568LL))(engine, pBuf);
  }
  while ( v2 != 4 );
  LOBYTE(v2) = 0;
  do
  {
    v5 = v2++;
    V_snprintf(pBuf, 260, "cfg/mem_level_%d_pc.txt", v5);
    (*(*engine + 568LL))(engine, pBuf);
  }
  while ( v2 != 3 );
  LOBYTE(v2) = 0;
  do
  {
    v6 = v2++;
    V_snprintf(pBuf, 260, "cfg/gpu_mem_level_%d_pc.txt", v6);
    (*(*engine + 568LL))(engine, pBuf);
  }
  while ( v2 != 3 );
}


// CClientPrecacheGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 450, @0x0000000002195430, libserver.so)
void __cdecl CClientPrecacheGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// rangefinder  (line 452, @0x00000000021a6330, libserver.so)  // inlines: CGameTrace, DidHit, DistTo, EnableInteractsWith, FastSqrt, GetFloat, Init, Length, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+
// calls: UTIL_GetCommandClient, CGameTrace::Init, CBasePlayer::EyeVectors, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, Msg, NDebugOverlay::Cross
// strings: "DISTANCE: %6.2f inches (%6.2f feet)\n", "Rangefinder didn't hit anything\n"
void __fastcall rangefinder(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rbx
  float v3; // xmm1_4
  ConVar *m_pParent; // rax
  float m_fValue; // xmm7_4
  float v6; // xmm1_4
  Vector forward; // [rsp+10h] [rbp-180h] BYREF
  Vector start; // [rsp+20h] [rbp-170h]
  CTraceFilterSimple v9; // [rsp+30h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+70h] [rbp-120h] BYREF
  trace_t tr; // [rsp+C0h] [rbp-D0h] BYREF

  CommandClient = UTIL_GetCommandClient();
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  CBasePlayer::EyeVectors(CommandClient, &forward, 0, 0);
  *&start.x = (*(CommandClient->_vptr_IHandleEntity + 164))(CommandClient);
  start.z = v3;
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  m_pParent = phys_traceline_radius.m_pParent;
  ray.m_Delta.x = ((forward.x * 16384.0) + start.x) - start.x;
  ray.m_Delta.y = ((forward.y * 16384.0) + start.y) - start.y;
  m_fValue = m_pParent->m_Value.m_fValue;
  ray.m_Delta.z = ((16384.0 * forward.z) + v3) - v3;
  ray.m_flRadius = m_fValue;
  ray.m_Start.Vector = start;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v9, CommandClient, 4, 0);
  v9.m_attr.m_nInteractsWith |= 0x185003uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v9, &tr);
  if ( tr.fraction < 1.0 || tr.startsolid )
  {
    v6 = fsqrt(
           (((tr.startpos.x - tr.endpos.x) * (tr.startpos.x - tr.endpos.x))
          + ((tr.startpos.y - tr.endpos.y) * (tr.startpos.y - tr.endpos.y)))
         + ((tr.startpos.z - tr.endpos.z) * (tr.startpos.z - tr.endpos.z)));
    Msg("DISTANCE: %6.2f inches (%6.2f feet)\n", v6, (v6 / 12.0));
    NDebugOverlay::Cross(&tr.endpos, 16.0, 0xFFu, 0, 0xFFu, 0, 1.0);
  }
  else
  {
    Msg("Rangefinder didn't hit anything\n");
  }
}


// cast_ray  (line 475, @0x0000000002188c80, libserver.so)  // inlines: CGameTrace, DidHit, EnableInteractsWith, GetClassNameAsCStr, GetClassname, GetSolid, Init, LengthSqr, Line, Ray_t, RnCollisionAttr_t, String, TraceRay, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+
// calls: UTIL_GetCommandClient, CGameTrace::Init, CBasePlayer::EyeVectors, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, Msg, CUtlString::Get, CGameTrace::GetHitGroup, CGameTrace::GetHitboxIndex
// strings: "Hit %s\nposition %.2f, %.2f, %.2f\nangles %.2f, %.2f, %.2f\n", "Hit: hitbox %d, hitgroup %d, bone %d, solid %d, surfaceprop %s, contents %llu\n"
void __fastcall cast_ray(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rbx
  double v3; // xmm0_8
  float v4; // xmm1_4
  const Vector *AbsOrigin; // rax
  const char *m_pAsString; // rsi
  float v7; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  int v9; // ebx
  uint64 contents; // r14
  const char *v11; // r13
  CCollisionProperty *m_pCollision; // rdi
  int HitGroup; // r15d
  int HitboxIndex; // eax
  ISceneViewDebugOverlays *v15; // rax
  float v16; // [rsp+Ch] [rbp-1B4h]
  float v17; // [rsp+10h] [rbp-1B0h]
  float x; // [rsp+14h] [rbp-1ACh]
  float y; // [rsp+18h] [rbp-1A8h]
  float z; // [rsp+1Ch] [rbp-1A4h]
  int hitboxBoneIndex; // [rsp+1Ch] [rbp-1A4h]
  Vector forward; // [rsp+20h] [rbp-1A0h] BYREF
  Vector start; // [rsp+30h] [rbp-190h] BYREF
  float v24[4]; // [rsp+40h] [rbp-180h] BYREF
  CTraceFilterSimple filter; // [rsp+50h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+90h] [rbp-130h] BYREF
  trace_t tr; // [rsp+E0h] [rbp-E0h] BYREF

  CommandClient = UTIL_GetCommandClient();
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  CBasePlayer::EyeVectors(CommandClient, &forward, 0, 0);
  v3 = (*(CommandClient->_vptr_IHandleEntity + 164))(CommandClient);
  start.z = v4;
  ray.m_Start.z = v4;
  ray.m_IsRay = 1;
  *&start.x = v3;
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 40);
  ray.m_Delta.x = ((forward.x * 16384.0) + start.x) - start.x;
  ray.m_Delta.y = ((forward.y * 16384.0) + *(&v3 + 1)) - *(&v3 + 1);
  ray.m_Delta.z = ((16384.0 * forward.z) + v4) - v4;
  *&ray.m_Start.x = v3;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&filter, CommandClient, 4, 0);
  filter.m_attr.m_nInteractsWith |= 0x185003uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &tr);
  if ( tr.fraction < 1.0 || tr.startsolid )
  {
    z = CBaseEntity::GetAbsAngles(tr.m_pEnt)->z;
    y = CBaseEntity::GetAbsAngles(tr.m_pEnt)->y;
    x = CBaseEntity::GetAbsAngles(tr.m_pEnt)->x;
    v17 = CBaseEntity::GetAbsOrigin(tr.m_pEnt)->z;
    v16 = CBaseEntity::GetAbsOrigin(tr.m_pEnt)->y;
    AbsOrigin = CBaseEntity::GetAbsOrigin(tr.m_pEnt);
    m_pAsString = "";
    v7 = AbsOrigin->x;
    m_pEntity = tr.m_pEnt->m_pEntity;
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    v9 = 0;
    Msg("Hit %s\nposition %.2f, %.2f, %.2f\nangles %.2f, %.2f, %.2f\n", m_pAsString, v7, v16, v17, x, y, z);
    contents = tr.contents;
    v11 = CUtlString::Get(&tr.m_pSurfaceProperties->m_name);
    m_pCollision = tr.m_pEnt->m_pCollision;
    if ( m_pCollision != 0 )
      v9 = (*(m_pCollision->_vptr_ICollideable + 7))(m_pCollision);
    hitboxBoneIndex = tr.hitboxBoneIndex;
    HitGroup = CGameTrace::GetHitGroup(&tr);
    HitboxIndex = CGameTrace::GetHitboxIndex(&tr);
    Msg(
      "Hit: hitbox %d, hitgroup %d, bone %d, solid %d, surfaceprop %s, contents %llu\n",
      HitboxIndex,
      HitGroup,
      hitboxBoneIndex,
      v9,
      v11,
      contents);
    v15 = 0;
    if ( debugoverlay != 0 )
    {
      (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &start, &tr.endpos, 0, 255, 0, 10.0, 0);
      v15 = debugoverlay;
    }
    v24[1] = (tr.plane.normal.y * 12.0) + tr.endpos.y;
    v24[2] = (tr.plane.normal.z * 12.0) + tr.endpos.z;
    v24[0] = (12.0 * tr.plane.normal.x) + tr.endpos.x;
    if ( v15 != 0 )
      (*(v15->_vptr_ISceneViewDebugOverlays + 50))(v15, &tr.endpos, v24, 255, 255, 0, 10.0, 0);
  }
}


// cast_hull  (line 513, @0x00000000021887a0, libserver.so)  // inlines: CGameTrace, DidHit, EnableInteractsWith, GetClassNameAsCStr, GetClassname, GetSolid, Init, LengthSqr, Line, Ray_t, RnCollisionAttr_t, String, SweptBox, TraceRay, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, operator*, operator*=, operator+
// calls: UTIL_GetCommandClient, CGameTrace::Init, CBasePlayer::EyeVectors, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, Msg, CUtlString::Get, CGameTrace::GetHitGroup, CGameTrace::GetHitboxIndex
// strings: "Hit %s\nposition %.2f, %.2f, %.2f\nangles %.2f, %.2f, %.2f\n", "Hit: hitbox %d, hitgroup %d, bone %d, solid %d, surfaceprop %s\n"
void __fastcall cast_hull(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rbx
  double v3; // xmm0_8
  float v4; // xmm1_4
  const Vector *AbsOrigin; // rax
  const char *m_pAsString; // rsi
  float v7; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  int v9; // ebx
  const char *v10; // r13
  CCollisionProperty *m_pCollision; // rdi
  int hitboxBoneIndex; // r15d
  int HitGroup; // r14d
  int HitboxIndex; // eax
  ISceneViewDebugOverlays *v15; // rax
  float v16; // [rsp+2Ch] [rbp-1E4h]
  float v17; // [rsp+30h] [rbp-1E0h]
  float x; // [rsp+34h] [rbp-1DCh]
  float y; // [rsp+38h] [rbp-1D8h]
  float z; // [rsp+3Ch] [rbp-1D4h]
  Vector forward; // [rsp+40h] [rbp-1D0h] BYREF
  Vector start; // [rsp+50h] [rbp-1C0h] BYREF
  Vector vMins; // [rsp+60h] [rbp-1B0h] BYREF
  Vector vMaxs; // [rsp+70h] [rbp-1A0h] BYREF
  Vector end; // [rsp+80h] [rbp-190h] BYREF
  float v26[4]; // [rsp+90h] [rbp-180h] BYREF
  CTraceFilterSimple traceFilter; // [rsp+A0h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+E0h] [rbp-130h] BYREF
  trace_t tr; // [rsp+130h] [rbp-E0h] BYREF

  CommandClient = UTIL_GetCommandClient();
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  CBasePlayer::EyeVectors(CommandClient, &forward, 0, 0);
  v3 = (*(CommandClient->_vptr_IHandleEntity + 164))(CommandClient);
  start.z = v4;
  *&start.x = v3;
  ray.m_Start.w = 0.0;
  ray.m_Delta.w = 0.0;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  ray.m_flRadius = 0.0;
  vMins.x = -16.0;
  vMins.y = -16.0;
  vMins.z = -16.0;
  vMaxs.x = 16.0;
  ray.m_IsRay = 0;
  ray.m_Delta.x = ((forward.x * 16384.0) + start.x) - start.x;
  ray.m_Delta.y = ((forward.y * 16384.0) + *(&v3 + 1)) - *(&v3 + 1);
  ray.m_Delta.z = ((16384.0 * forward.z) + v4) - v4;
  ray.m_Start.x = *&v3 + 0.0;
  ray.m_Start.y = *(&v3 + 1) + 0.0;
  vMaxs.y = 16.0;
  vMaxs.z = 16.0;
  ray.m_Extents.x = 16.0;
  ray.m_Extents.y = 16.0;
  ray.m_Extents.z = 16.0;
  ray.m_StartOffset.x = -0.0;
  ray.m_StartOffset.y = -0.0;
  ray.m_StartOffset.z = -0.0;
  ray.m_Start.z = v4 + 0.0;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&traceFilter, CommandClient, 4, 0);
  traceFilter.m_attr.m_nInteractsWith |= 0x187001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &traceFilter, &tr);
  if ( tr.fraction < 1.0 || tr.startsolid )
  {
    z = CBaseEntity::GetAbsAngles(tr.m_pEnt)->z;
    y = CBaseEntity::GetAbsAngles(tr.m_pEnt)->y;
    x = CBaseEntity::GetAbsAngles(tr.m_pEnt)->x;
    v17 = CBaseEntity::GetAbsOrigin(tr.m_pEnt)->z;
    v16 = CBaseEntity::GetAbsOrigin(tr.m_pEnt)->y;
    AbsOrigin = CBaseEntity::GetAbsOrigin(tr.m_pEnt);
    m_pAsString = "";
    v7 = AbsOrigin->x;
    m_pEntity = tr.m_pEnt->m_pEntity;
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    v9 = 0;
    Msg("Hit %s\nposition %.2f, %.2f, %.2f\nangles %.2f, %.2f, %.2f\n", m_pAsString, v7, v16, v17, x, y, z);
    v10 = CUtlString::Get(&tr.m_pSurfaceProperties->m_name);
    m_pCollision = tr.m_pEnt->m_pCollision;
    if ( m_pCollision != 0 )
      v9 = (*(m_pCollision->_vptr_ICollideable + 7))(m_pCollision);
    hitboxBoneIndex = tr.hitboxBoneIndex;
    HitGroup = CGameTrace::GetHitGroup(&tr);
    HitboxIndex = CGameTrace::GetHitboxIndex(&tr);
    Msg(
      "Hit: hitbox %d, hitgroup %d, bone %d, solid %d, surfaceprop %s\n",
      HitboxIndex,
      HitGroup,
      hitboxBoneIndex,
      v9,
      v10);
    v15 = 0;
    if ( debugoverlay != 0 )
    {
      (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 63))(
        debugoverlay,
        &start,
        &tr.endpos,
        &vMins,
        &vMaxs,
        &vec3_angle,
        10.0,
        0,
        0,
        255,
        0);
      v15 = debugoverlay;
    }
    end = tr.endpos;
    v26[1] = (tr.plane.normal.y * 24.0) + tr.endpos.y;
    v26[2] = (tr.plane.normal.z * 24.0) + tr.endpos.z;
    v26[0] = (24.0 * tr.plane.normal.x) + tr.endpos.x;
    if ( v15 != 0 )
      (*(v15->_vptr_ISceneViewDebugOverlays + 50))(v15, &end, v26, 255, 255, 64, 10.0, 0);
  }
}


// SetDebugBits  (line 553, @0x0000000002195440, libserver.so)
// calls: CBaseEntity::HasDebugBitsSet, CBaseEntity::ToggleDebugBits, GetNextCommandEntity
// callers: CC_Ent_Autoaim, CC_NPC_Bipass, CC_NPC_Destroy, CC_NPC_Kill, CC_NPC_Enemies, CC_NPC_Focus, CC_NPC_Nearest, CC_NPC_Route, CC_NPC_Select, CC_NPC_Combat, CC_NPC_Tasks, CC_NPC_Task_Text (16 total)
void __fastcall SetDebugBits(CBasePlayer *pPlayer, const char *name, uint64 bit)
{
  CBaseEntity *i; // rbx
  CBaseEntity *NextCommandEntity; // rax

  if ( pPlayer != 0 )
  {
    for ( i = 0; ; CBaseEntity::ToggleDebugBits(i, bit) )
    {
      NextCommandEntity = GetNextCommandEntity(pPlayer, name, i);
      i = NextCommandEntity;
      if ( NextCommandEntity == 0 )
        break;
      CBaseEntity::HasDebugBitsSet(NextCommandEntity, bit);
    }
  }
}


// KillTargets  (line 584, @0x00000000021954a0, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, String
// calls: DevMsg, UTIL_Remove, CGameEntitySystem::FindEntityByName
// callers: ConsoleKillTarget
// strings: "KillTarget: %s\n", "killing %s\n"
void __fastcall KillTargets(const char *pKillTargetName)
{
  CBaseEntity *i; // rax
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdx
  CBaseEntity *v5; // rbx

  DevMsg(2, "KillTarget: %s\n", pKillTargetName);
  for ( i = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, pKillTargetName, 0, 0, 0, 0);
        ;
        i = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v5, pKillTargetName, 0, 0, 0, 0) )
  {
    v5 = i;
    if ( i == 0 )
      break;
    UTIL_Remove(i);
    m_pEntity = v5->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    DevMsg(2, "killing %s\n", m_pAsString);
  }
}


// ConsoleKillTarget  (line 603, @0x0000000002195550, libserver.so)  // inlines: FStrEq, GetDebugName
// calls: KillTargets, UTIL_Remove, CEntityIdentity::GetDebugName, Msg
// callers: ClientCommand
// strings: "killing %s\n"
void __fastcall ConsoleKillTarget(CBasePlayer *pPlayer, const char *name)
{
  CEntityInstance *v3; // rax
  CEntityInstance *v4; // r12
  const char *DebugName; // rax

  if ( (name == "" || *name == 0) && (v3 = (*(pPlayer->_vptr_IHandleEntity + 531))(pPlayer), v4 = v3, v3 != 0) )
  {
    UTIL_Remove(v3);
    DebugName = CEntityIdentity::GetDebugName(v4->m_pEntity);
    Msg("killing %s\n", DebugName);
  }
  else
  {
    KillTargets(name);
  }
}


// kill_helper  (line 737, @0x00000000021955c0, libserver.so)
void __fastcall kill_helper(const CCommand *const args, bool bVector, bool bExplode)
{
  ;
}


// kill  (line 784, @0x00000000021876f0, libserver.so)
void __fastcall kill(const CCommandContext *const ctx, const CCommand *const args)
{
  ;
}


// explode  (line 791, @0x0000000002187700, libserver.so)
void __fastcall explode(const CCommandContext *const ctx, const CCommand *const args)
{
  ;
}


// killvector  (line 798, @0x0000000002187710, libserver.so)
void __fastcall killvector(const CCommandContext *const ctx, const CCommand *const args)
{
  ;
}


// explodevector  (line 805, @0x0000000002187720, libserver.so)
void __fastcall explodevector(const CCommandContext *const ctx, const CCommand *const args)
{
  ;
}


// say  (line 820, @0x0000000002195270, libserver.so)  // inlines: NotePlayerTalked, ToBasePlayer, curtime
// calls: UTIL_GetCommandClient, Host_Say, Warning
// strings: "Server not running, command ignored.\n"
void __fastcall say(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBaseEntity *v4; // rbx
  double v5; // xmm0_8
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm1_8
  CGlobalVars *v9; // r12
  float v10; // xmm0_4
  FnGlobalVarsWarningFunc v11; // rax
  double v12; // [rsp+8h] [rbp-28h]

  if ( (*(*g_pNetworkServerService + 248LL))(g_pNetworkServerService) != 0 )
  {
    CommandClient = UTIL_GetCommandClient();
    v4 = CommandClient;
    if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
    {
      v5 = v4[4].m_flNavIgnoreUntilTime.m_Value + 0.25;
      v6 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
          {
            v12 = v4[4].m_flNavIgnoreUntilTime.m_Value + 0.25;
            m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            v5 = v12;
          }
        }
        m_flCurrentTime = v6->m_flCurrentTime;
      }
      else
      {
        m_flCurrentTime = 0.0;
      }
      if ( m_flCurrentTime > v5 )
      {
        Host_Say(v4, args, 0, 0, 0);
        v9 = gpGlobals;
        v10 = 0.0;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v11 = gpGlobals->m_pfnWarningFunc;
            if ( v11 != 0 )
              (v11)(1, 0.0);
          }
          v10 = v9->m_flCurrentTime;
        }
        v4[4].m_flNavIgnoreUntilTime.m_Value = v10;
      }
    }
    else
    {
      Host_Say(0, args, 0, 0, 0);
    }
  }
  else
  {
    Warning("Server not running, command ignored.\n");
  }
}


// say_team  (line 846, @0x0000000002195150, libserver.so)  // inlines: NotePlayerTalked, ToBasePlayer, curtime
// calls: UTIL_GetCommandClient, Host_Say
void __fastcall say_team(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBaseEntity *v4; // rbx
  double v5; // xmm0_8
  CGlobalVars *v6; // r12
  double m_flCurrentTime; // xmm1_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v9; // r12
  float v10; // xmm0_4
  FnGlobalVarsWarningFunc v11; // rax
  double v12; // [rsp+8h] [rbp-28h]

  CommandClient = UTIL_GetCommandClient();
  v4 = CommandClient;
  if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
  {
    v5 = v4[4].m_flNavIgnoreUntilTime.m_Value + 0.25;
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v12 = v4[4].m_flNavIgnoreUntilTime.m_Value + 0.25;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v5 = v12;
        }
      }
      m_flCurrentTime = v6->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    if ( m_flCurrentTime > v5 )
    {
      Host_Say(v4, args, 1, 0, 0);
      v9 = gpGlobals;
      v10 = 0.0;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v11 = gpGlobals->m_pfnWarningFunc;
          if ( v11 != 0 )
            (v11)(1, 0.0);
        }
        v10 = v9->m_flCurrentTime;
      }
      v4[4].m_flNavIgnoreUntilTime.m_Value = v10;
    }
  }
}


// give  (line 862, @0x000000000218b080, libserver.so)  // inlines: GetBool, GetInt, String, ToBasePlayer, ToCStr, V_strncpy<long unsigned int>
// calls: UTIL_GetCommandClient, _V_strncpy, V_strlower_fast, V_stricmp_fast, CEntitySystem::FindClassByDesignName, AllocPooledString, Warning, __stack_chk_fail
// strings: "item_suit", "give: Encountered unknown entity class name \"%s\"\n"
// globals: sv_cheats
void __fastcall give(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v4; // rbx
  const char *m_pAsString; // rsi
  string_t iszItem; // [rsp+0h] [rbp-130h] BYREF
  char item_to_give[264]; // [rsp+10h] [rbp-120h] BYREF
  unsigned __int64 v8; // [rsp+118h] [rbp-18h]

  v8 = __readfsqword(0x28u);
  CommandClient = UTIL_GetCommandClient();
  v4 = CommandClient;
  if ( CommandClient != 0
    && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0
    && (gpGlobals->maxClients == 1 || sv_cheats->m_pParent->m_Value.m_nValue != 0)
    && args->m_nArgc > 1 )
  {
    _V_strncpy(item_to_give, args->m_ppArgv[1], 256);
    V_strlower_fast(item_to_give);
    if ( V_stricmp_fast(item_to_give, "item_suit") != 0 )
    {
      if ( CEntitySystem::FindClassByDesignName(g_pEntitySystem, item_to_give, 0) != 0 )
      {
        AllocPooledString(&iszItem, item_to_give);
        m_pAsString = "";
        if ( iszItem.u.m_Id != 0 )
          m_pAsString = iszItem.u.m_pAsString;
        (*(v4->_vptr_IHandleEntity + 466))(v4, m_pAsString, 0, 1, 0, 0);
      }
      else
      {
        Warning("give: Encountered unknown entity class name \"%s\"\n", item_to_give);
      }
    }
    else
    {
      (*(v4->_vptr_IHandleEntity + 511))(v4, 0);
    }
  }
}


// CC_Player_SetModel  (line 895, @0x000000000218bc10, libserver.so)  // inlines: ToBasePlayer
// calls: UTIL_GetCommandClient, V_snprintf, CBaseModelEntity::SetModel, SafeGetViewVectors, UTIL_SetSize
// strings: "models/%s.vmdl"
// globals: CC_Player_SetModel(CCommandContext const&,CCommand const&)::szName
void __fastcall CC_Player_SetModel(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBaseModelEntity *v3; // rbx
  const CViewVectors *ViewVectors; // r12
  const CViewVectors *v5; // rax

  if ( gpGlobals->maxClients <= 1 )
  {
    CommandClient = UTIL_GetCommandClient();
    v3 = CommandClient;
    if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 && args->m_nArgc == 2 )
    {
      V_snprintf(
        CC_Player_SetModel(CCommandContext const&,CCommand const&)::szName,
        256,
        "models/%s.vmdl",
        args->m_ppArgv[1]);
      CBaseModelEntity::SetModel(v3, CC_Player_SetModel(CCommandContext const&,CCommand const&)::szName);
      ViewVectors = SafeGetViewVectors();
      v5 = SafeGetViewVectors();
      UTIL_SetSize(v3, &v5->m_vHullMin, &ViewVectors->m_vHullMax);
    }
  }
}


// CC_Player_TestDispatchEffect  (line 914, @0x000000000218cf70, libserver.so)  // inlines: Arg, CEffectData, CEntityHandle, CGameTrace, CNetworkVarBase, CNetworkVectorBase, CUtlStringToken, CWeakHandle, EnableInteractsWith, EnsureValidValue, EnsureValidValue<CEntityHandle>, GetEHandle, GetEntryIndex, GetFloat, GetSerialNumber, Init, LengthSqr, Ray_t, RnCollisionAttr_t, Set, ToBasePlayer, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, Zero, atof, atoi, operator!=, operator*, operator+, operator=, operator=<CBasePlayer*>, operator=<float>, operator[]
// calls: UTIL_GetCommandClient, AngleVectors, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, PrecacheEffect, DispatchEffect, strtol, strtod, VectorAngles, Msg
// strings: " Usage: test_dispatcheffect <effect name> <distance away> <flags> <magnitude> <scale>\n ", "\t\t defaults are: <distance 1024> <flags 0> <magnitude 0> <scale 0>\n"
void __fastcall CC_Player_TestDispatchEffect(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  const CBaseEntity *v4; // r15
  float v5; // xmm5_4
  int v6; // r14d
  double v7; // xmm0_8
  float v8; // xmm1_4
  float v9; // xmm7_4
  vec_t v10; // xmm3_4
  CEntityIdentity *m_pEntity; // rax
  int v12; // edx
  __int16 v13; // cx
  uint32 v14; // eax
  const char *v15; // rdi
  const char *v16; // rdi
  int v17; // eax
  float v18; // xmm0_4
  __m128d v19; // xmm0
  __m128d v20; // xmm0
  double v21; // xmm0_8
  CNetworkVectorBase<Vector,CEffectData::NetworkVar_m_vOrigin> v22; // [rsp+10h] [rbp-1E0h]
  float pTraceFilter; // [rsp+20h] [rbp-1D0h]
  float magnitude; // [rsp+28h] [rbp-1C8h]
  float scale; // [rsp+2Ch] [rbp-1C4h]
  float scalea; // [rsp+2Ch] [rbp-1C4h]
  Vector vecForward; // [rsp+30h] [rbp-1C0h] BYREF
  QAngle vecAngles; // [rsp+40h] [rbp-1B0h] BYREF
  Vector vecSrc; // [rsp+50h] [rbp-1A0h]
  CTraceFilterSimple v30; // [rsp+60h] [rbp-190h] BYREF
  CEffectData data; // [rsp+A0h] [rbp-150h] BYREF
  trace_t tr; // [rsp+110h] [rbp-E0h] BYREF

  CommandClient = UTIL_GetCommandClient();
  v4 = CommandClient;
  if ( CommandClient == 0 || (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) == 0 )
    return;
  if ( args->m_nArgc <= 1 )
  {
    *&v21 = Msg(" Usage: test_dispatcheffect <effect name> <distance away> <flags> <magnitude> <scale>\n ").m128_u64[0];
    Msg("\t\t defaults are: <distance 1024> <flags 0> <magnitude 0> <scale 0>\n", v21);
    return;
  }
  if ( args->m_nArgc == 2 )
  {
    v5 = 1024.0;
LABEL_6:
    LOBYTE(v6) = 0;
    goto LABEL_7;
  }
  v17 = strtol(args->m_ppArgv[2], 0, 10);
  v5 = v17;
  if ( args->m_nArgc <= 3 )
    goto LABEL_6;
  scalea = v17;
  v18 = strtol(args->m_ppArgv[3], 0, 10);
  v5 = scalea;
  v6 = v18;
  if ( args->m_nArgc > 4 )
  {
    v19.m128d_f64[0] = strtod(args->m_ppArgv[4], 0);
    v5 = scalea;
    magnitude = _mm_movedup_pd(v19).m128d_f64[0];
    if ( args->m_nArgc <= 5 )
    {
      scale = 0.0;
    }
    else
    {
      v20.m128d_f64[0] = strtod(args->m_ppArgv[5], 0);
      v5 = scalea;
      scale = _mm_movedup_pd(v20).m128d_f64[0];
    }
    goto LABEL_8;
  }
LABEL_7:
  magnitude = 0.0;
  scale = 0.0;
LABEL_8:
  pTraceFilter = v5;
  vecAngles = *(*(v4->_vptr_IHandleEntity + 165))(v4);
  AngleVectors(&vecAngles, &vecForward, 0, 0);
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  v7 = (*(v4->_vptr_IHandleEntity + 164))(v4);
  *&vecSrc.x = v7;
  vecSrc.z = v8;
  v9 = *&v7;
  v10 = (vecForward.x * pTraceFilter) + *&v7;
  *&v7 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  data._vptr_CEffectData = __PAIR64__(HIDWORD(v7), LODWORD(v9));
  data.m_flScale.m_Value = *&v7;
  v22.m_Value.x = v10;
  v22.m_Value.y = (vecForward.y * pTraceFilter) + *(&v7 + 1);
  v22.m_Value.z = (pTraceFilter * vecForward.z) + v8;
  data.m_vOrigin.m_Value.z = v10 - v9;
  data.m_vStart.m_Value.x = v22.m_Value.y - *(&v7 + 1);
  data.m_vOrigin.m_Value.y = 0.0;
  data.m_vStart.m_Value.y = v22.m_Value.z - v8;
  memset(&data.m_vStart.m_Value.z, 0, 36);
  LOBYTE(data.m_flMagnitude.m_Value) = 1;
  BYTE1(data.m_flMagnitude.m_Value) = (((data.m_vOrigin.m_Value.z * data.m_vOrigin.m_Value.z)
                                      + (data.m_vStart.m_Value.x * data.m_vStart.m_Value.x))
                                     + (data.m_vStart.m_Value.y * data.m_vStart.m_Value.y)) != 0.0;
  data.m_vOrigin.m_Value.x = v8;
  CTraceFilterSimple::CTraceFilterSimple(&v30, v4, 4, 0);
  v30.m_attr.m_nInteractsWith = -1;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &data, &v30, &tr);
  data._vptr_CEffectData = &off_3FB64D0;
  memset(&data.m_vOrigin, 0, 48);
  data.m_hEntity.m_Value.m_Index = -1;
  data.m_hOtherEntity.m_Value.m_Index = -1;
  data.m_flScale.m_Value = 1.0;
  memset(&data.m_flMagnitude, 0, 31);
  data.m_nAttachmentName.m_Value.m_nHashCode = 0;
  data.m_iEffectName.m_Value = 0;
  if ( tr.fraction < 1.0 )
  {
    if ( tr.endpos.x != 0.0 || tr.endpos.y != 0.0 || tr.endpos.z != 0.0 )
      data.m_vOrigin = tr.endpos;
    VectorAngles(&tr.plane.normal, &data.m_vAngles.m_Value);
    if ( tr.plane.normal.x != data.m_vNormal.m_Value.x
      || tr.plane.normal.y != data.m_vNormal.m_Value.y
      || tr.plane.normal.z != data.m_vNormal.m_Value.z )
    {
      data.m_vNormal.m_Value = tr.plane.normal;
    }
  }
  else
  {
    if ( v22.m_Value.x != 0.0 || v22.m_Value.y != 0.0 || v22.m_Value.z != 0.0 )
      data.m_vOrigin = v22;
    if ( vecAngles.x != 0.0 || vecAngles.y != 0.0 || vecAngles.z != 0.0 )
      data.m_vAngles.m_Value = vecAngles;
    AngleVectors(&vecAngles, &data.m_vNormal.m_Value, 0, 0);
  }
  m_pEntity = v4->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v13 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v30._vptr_CTraceFilter) = v13 | v30._vptr_CTraceFilter & 0x8000;
    v14 = (v12 << 15) | v30._vptr_CTraceFilter & 0x7FFF;
    LODWORD(v30._vptr_CTraceFilter) = v14;
  }
  else
  {
    v14 = -1;
  }
  if ( v14 != data.m_hEntity.m_Value.m_Index )
    data.m_hEntity.m_Value.m_Index = v14;
  if ( data.m_fFlags.m_Value != v6 )
    data.m_fFlags.m_Value = v6;
  if ( magnitude != data.m_flMagnitude.m_Value )
    data.m_flMagnitude.m_Value = magnitude;
  if ( scale != data.m_flScale.m_Value )
    data.m_flScale.m_Value = scale;
  v15 = "";
  if ( args->m_nArgc > 1 )
    v15 = args->m_ppArgv[1];
  PrecacheEffect(v15, 0);
  v16 = "";
  if ( args->m_nArgc > 1 )
    v16 = args->m_ppArgv[1];
  DispatchEffect(v16, &data);
}


// CC_Player_BugBaitSwap  (line 1027, @0x000000000218b610, libserver.so)  // inlines: ToBasePlayer, entindex
// calls: UTIL_GetCommandClient, CBaseCombatCharacter::GetActiveWeapon, CEntityInstance::GetEntityIndex, V_stricmp_fast
// strings: "cancelselect", "weapon_bugbait"
void __fastcall CC_Player_BugBaitSwap(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  const CBaseCombatCharacter *v3; // rbx
  CBaseCombatWeapon *ActiveWeapon; // r12
  void (__fastcall *v5)(IVEngineServer2 *, _QWORD, const char *); // r14
  CBasePlayer *v6; // rax
  CEntityIndex v7; // eax
  __int64 v8; // rax
  bool v9; // zf
  int (**vptr_IHandleEntity)(...); // rax

  CommandClient = UTIL_GetCommandClient();
  v3 = CommandClient;
  if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
  {
    ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(v3);
    if ( ActiveWeapon != 0 )
    {
      v5 = *(*engine + 288LL);
      v6 = UTIL_GetCommandClient();
      v7.m_Data = CEntityInstance::GetEntityIndex(v6).m_Data;
      v5(engine, v7.m_Data, "cancelselect");
      v8 = (*(ActiveWeapon->_vptr_IHandleEntity + 347))(ActiveWeapon);
      v9 = V_stricmp_fast(v8, "weapon_bugbait") == 0;
      vptr_IHandleEntity = v3->_vptr_IHandleEntity;
      if ( v9 )
        vptr_IHandleEntity[462](v3);
      else
        vptr_IHandleEntity[463](v3, "weapon_bugbait", 0);
    }
  }
}


// CC_Player_Use  (line 1057, @0x000000000218ac30, libserver.so)  // inlines: Arg, ToBasePlayer, operator[]
// calls: UTIL_GetCommandClient
void __fastcall CC_Player_Use(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v4; // rbx
  const char *v5; // rsi

  CommandClient = UTIL_GetCommandClient();
  v4 = CommandClient;
  if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
  {
    v5 = "";
    if ( args->m_nArgc > 1 )
      v5 = args->m_ppArgv[1];
    (*(v4->_vptr_IHandleEntity + 463))(v4, v5, 0);
  }
}


// TestEntityPosition  (line 1072, @0x00000000021955d0, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, WorldSpaceSurroundingBounds, operator*=, operator=
// calls: CGameTrace::Init, CBaseEntity::VPhysicsGetObject, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, UTIL_TraceEntity
// callers: FindPassableSpace, setpos_player, setpos, setpos_exact, DisableNoClip
bool __fastcall TestEntityPosition(CBaseEntity *pEntity, uint64 mask)
{
  IPhysicsObject *Object; // r14
  const Vector *AbsOrigin; // rax
  CCollisionProperty *m_pCollision; // rdi
  float z; // xmm7_4
  float x; // xmm12_4
  float v9; // xmm9_4
  float y; // xmm11_4
  float v11; // xmm8_4
  float v12; // xmm10_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  const Vector *v19; // rax
  Vector mins; // [rsp+0h] [rbp-180h] BYREF
  Vector maxs; // [rsp+10h] [rbp-170h] BYREF
  CTraceFilterSimple v22; // [rsp+20h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+60h] [rbp-120h] BYREF
  trace_t trace; // [rsp+B0h] [rbp-D0h] BYREF

  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  Object = CBaseEntity::VPhysicsGetObject(pEntity);
  AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
  if ( Object != 0 )
  {
    CBaseEntity::GetAbsAngles(pEntity);
    m_pCollision = pEntity->m_pCollision;
    if ( m_pCollision != 0 )
    {
      (*(m_pCollision->_vptr_ICollideable + 10))(m_pCollision, &mins, &maxs);
      z = mins.z;
      x = maxs.x;
      v9 = mins.x;
      y = maxs.y;
      v11 = mins.y;
      v12 = maxs.z;
    }
    else
    {
      v19 = CBaseEntity::GetAbsOrigin(pEntity);
      v9 = v19->x;
      v11 = v19->y;
      z = v19->z;
      x = v9;
      mins.x = v19->x;
      mins.y = v11;
      y = v11;
      mins.z = z;
      v12 = z;
      maxs.x = v9;
      maxs.y = v11;
      maxs.z = z;
    }
    ray.m_Start.w = 0.0;
    ray.m_Delta.w = 0.0;
    ray.m_StartOffset.w = 0.0;
    ray.m_Extents.w = 0.0;
    v13 = vec3_origin.y;
    ray.m_flRadius = 0.0;
    v14 = vec3_origin.z;
    ray.m_Delta.x = vec3_origin.x - vec3_origin.x;
    ray.m_Delta.y = v13 - v13;
    ray.m_Delta.z = v14 - v14;
    ray.m_Extents.y = (y - v11) * 0.5;
    ray.m_Extents.z = (v12 - z) * 0.5;
    ray.m_Extents.x = (x - v9) * 0.5;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    v15 = (x + v9) * 0.5;
    ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
                 + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
    v16 = (y + v11) * 0.5;
    v17 = (v12 + z) * 0.5;
    ray.m_Start.x = vec3_origin.x + v15;
    ray.m_StartOffset.x = -v15;
    ray.m_StartOffset.y = -v16;
    ray.m_StartOffset.z = -v17;
    ray.m_Start.y = v13 + v16;
    ray.m_Start.z = v14 + v17;
    CTraceFilterSimple::CTraceFilterSimple(&v22, pEntity, 4, 0);
    v22.m_attr.m_nInteractsWith |= mask;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v22, &trace);
  }
  else
  {
    UTIL_TraceEntity(pEntity, AbsOrigin, AbsOrigin, mask, &trace);
  }
  return !trace.startsolid;
}


// FindPassableSpace  (line 1103, @0x00000000021958f0, libserver.so)  // inlines: VectorCopy, VectorMA
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, TestEntityPosition
// callers: FindEmptySpace
__int64 __fastcall FindPassableSpace(
        CBaseEntity *pEntity,
        uint64 mask,
        const Vector *const direction,
        float step,
        Vector *const oldorigin)
{
  int i; // r13d
  const Vector *AbsOrigin; // rax
  float v10; // xmm0_4
  float v11; // xmm0_4
  Vector origin; // [rsp+10h] [rbp-40h] BYREF

  for ( i = 100; i != 0; --i )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
    v10 = direction->x * step;
    *&origin.x = *&AbsOrigin->x;
    *&AbsOrigin = AbsOrigin->z;
    origin.x = v10 + origin.x;
    v11 = direction->y * step;
    LODWORD(origin.z) = AbsOrigin;
    origin.y = v11 + origin.y;
    origin.z = (direction->z * step) + *&AbsOrigin;
    CBaseEntity::SetAbsOrigin(pEntity, &origin);
    if ( TestEntityPosition(pEntity, mask) )
    {
      *oldorigin = *CBaseEntity::GetAbsOrigin(pEntity);
      return 1;
    }
  }
  return 0;
}


// FindEmptySpace  (line 1125, @0x0000000002195d30, libserver.so)
// calls: FindPassableSpace
// callers: DisableNoClip
bool __fastcall FindEmptySpace(
        CBaseEntity *pEntity,
        uint64 mask,
        const Vector *const forward,
        const Vector *const right,
        const Vector *const up,
        Vector *testOrigin)
{
  return FindPassableSpace(pEntity, mask, forward, 1.0, testOrigin) != 0
      || FindPassableSpace(pEntity, mask, right, 1.0, testOrigin) != 0
      || FindPassableSpace(pEntity, mask, right, -1.0, testOrigin) != 0
      || FindPassableSpace(pEntity, mask, up, 1.0, testOrigin) != 0
      || FindPassableSpace(pEntity, mask, up, -1.0, testOrigin) != 0
      || FindPassableSpace(pEntity, mask, forward, -1.0, testOrigin) != 0;
}


// EnableNoClip  (line 1140, @0x0000000002195e20, libserver.so)  // inlines: AddEFlags, SetValue
// calls: __cxa_guard_acquire, ConVarRef::IsValid, CBaseEntity::SetParent, CBaseEntity::SetMoveType, ClientPrint, ConVarRef::ConVarRef, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: setpos_exact, noclip
// strings: "noclip ON\n", "phys_active"
// globals: `guard variable for'EnableNoClip(CBasePlayer *)::phys_active, EnableNoClip(CBasePlayer *)::phys_active
void __fastcall EnableNoClip(CBasePlayer *pPlayer)
{
  int (**vptr_IHandleEntity)(...); // rax

  if ( `guard variable for'EnableNoClip(CBasePlayer *)::phys_active == 0
    && __cxa_guard_acquire(&`guard variable for'EnableNoClip(CBasePlayer *)::phys_active) != 0 )
  {
    ConVarRef::ConVarRef(&EnableNoClip(CBasePlayer *)::phys_active, "phys_active");
    __cxa_guard_release(&`guard variable for'EnableNoClip(CBasePlayer *)::phys_active);
  }
  if ( ConVarRef::IsValid(&EnableNoClip(CBasePlayer *)::phys_active) )
    (*(EnableNoClip(CBasePlayer *)::phys_active.m_pConVar->_vptr_IConVar + 2))(
      EnableNoClip(CBasePlayer *)::phys_active.m_pConVar,
      1);
  CBaseEntity::SetParent(pPlayer, 0, 0, 0);
  CBaseEntity::SetMoveType(pPlayer, MoveType_t::MOVETYPE_NOCLIP, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  ClientPrint(pPlayer, 2, "noclip ON\n", 0, 0, 0, 0);
  vptr_IHandleEntity = pPlayer->_vptr_IHandleEntity;
  pPlayer->m_iEFlags |= 4u;
  vptr_IHandleEntity[397](pPlayer);
}


// DisableNoClip  (line 1158, @0x000000000219d590, libserver.so)  // inlines: GetBool, GetInt, RemoveEFlags, SetValue
// calls: __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, ConVarRef::IsValid, CBaseEntity::SetMoveType, ClientPrint, CBaseEntity::GetAbsOrigin, TestEntityPosition, AngleVectors, FindEmptySpace, Msg, CBaseEntity::SetAbsOrigin (14 total)
// callers: noclip
// strings: "phys_active", "noclip OFF\n", "Can't find the world\n"
// globals: `guard variable for'DisableNoClip(CBasePlayer *)::phys_active, sv_cheats, DisableNoClip(CBasePlayer *)::phys_active
void __fastcall DisableNoClip(CBasePlayer *pPlayer)
{
  uint64 v2; // r12
  Vector oldorigin; // [rsp+10h] [rbp-70h] BYREF
  Vector forward; // [rsp+20h] [rbp-60h] BYREF
  Vector right; // [rsp+30h] [rbp-50h] BYREF
  Vector up; // [rsp+40h] [rbp-40h] BYREF

  if ( `guard variable for'DisableNoClip(CBasePlayer *)::phys_active == 0
    && __cxa_guard_acquire(&`guard variable for'DisableNoClip(CBasePlayer *)::phys_active) != 0 )
  {
    ConVarRef::ConVarRef(&DisableNoClip(CBasePlayer *)::phys_active, "phys_active");
    __cxa_guard_release(&`guard variable for'DisableNoClip(CBasePlayer *)::phys_active);
  }
  if ( sv_cheats->m_pParent->m_Value.m_nValue != 0 )
  {
    if ( ConVarRef::IsValid(&DisableNoClip(CBasePlayer *)::phys_active) )
      (*(DisableNoClip(CBasePlayer *)::phys_active.m_pConVar->_vptr_IConVar + 2))(
        DisableNoClip(CBasePlayer *)::phys_active.m_pConVar,
        0);
    pPlayer->m_iEFlags &= ~4u;
    CBaseEntity::SetMoveType(pPlayer, MoveType_t::MOVETYPE_WALK, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    ClientPrint(pPlayer, 2, "noclip OFF\n", 0, 0, 0, 0);
    oldorigin = *CBaseEntity::GetAbsOrigin(pPlayer);
    v2 = (*(pPlayer->_vptr_IHandleEntity + 540))(pPlayer, 0);
    if ( noclip_fixup.m_pParent->m_Value.m_nValue != 0 && !TestEntityPosition(pPlayer, v2) )
    {
      AngleVectors(&pPlayer->m_pl.v_angle, &forward, &right, &up);
      if ( !FindEmptySpace(pPlayer, v2, &forward, &right, &up, &oldorigin) )
        Msg("Can't find the world\n");
      CBaseEntity::SetAbsOrigin(pPlayer, &oldorigin);
    }
  }
}


// noclip  (line 1197, @0x000000000219d740, libserver.so)  // inlines: GetBool, GetInt, ToBasePlayer
// calls: LoggingSystem_IsChannelEnabled, UTIL_GetCommandClient, V_atoi, EnableNoClip, LoggingSystem_Log, DisableNoClip
// strings: "sv_cheats must be set to 1\n"
// globals: sv_cheats
void __fastcall noclip(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v4; // rbx
  CBasePlayer *v5; // rdi

  if ( sv_cheats->m_pParent->m_Value.m_nValue == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_CONSOLE, 2) != 0 )
      LoggingSystem_Log(LOG_CONSOLE, 2, "sv_cheats must be set to 1\n");
    return;
  }
  CommandClient = UTIL_GetCommandClient();
  v4 = CommandClient;
  if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
  {
    if ( args->m_nArgc <= 1 )
    {
      v5 = v4;
      if ( v4->m_MoveType.m_Value != MoveType_t::MOVETYPE_NOCLIP )
        goto LABEL_9;
    }
    else
    {
      if ( V_atoi(args->m_ppArgv[1]) != 0 )
      {
        v5 = v4;
        if ( v4->m_MoveType.m_Value == MoveType_t::MOVETYPE_NOCLIP )
          return;
LABEL_9:
        EnableNoClip(v5);
        return;
      }
      if ( v4->m_MoveType.m_Value != MoveType_t::MOVETYPE_NOCLIP )
        return;
      v5 = v4;
    }
    DisableNoClip(v5);
  }
}


// CC_God_f  (line 1239, @0x000000000218ab70, libserver.so)  // inlines: GetBool, GetInt, ToBasePlayer
// calls: UTIL_GetCommandClient, CBaseEntity::ToggleFlag, ClientPrint
// strings: "godmode ON\n", "godmode OFF\n"
// globals: sv_cheats
void __fastcall CC_God_f(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v3; // rbx

  if ( sv_cheats->m_pParent->m_Value.m_nValue != 0 )
  {
    CommandClient = UTIL_GetCommandClient();
    v3 = CommandClient;
    if ( CommandClient != 0
      && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0
      && gpGlobals->maxClients <= 1 )
    {
      CBaseEntity::ToggleFlag(v3, 0x4000);
      if ( (v3->m_fFlags.m_Value & 0x4000) != 0 )
        ClientPrint(v3, 2, "godmode ON\n", 0, 0, 0, 0);
      else
        ClientPrint(v3, 2, "godmode OFF\n", 0, 0, 0, 0);
    }
  }
}


// ent_setpos  (line 1261, @0x000000000218b7d0, libserver.so)  // inlines: Arg, GetBool, GetInstance, GetInt, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, ToBasePlayer, atof, operator[]
// calls: UTIL_GetCommandClient, V_atoi, UTIL_VarArgs, ClientPrint, CBaseEntity::GetAbsOrigin, strtod, CBaseEntity::SetAbsOrigin
// strings: "ent_setpos no entity %d\n", "Usage:  ent_setpos index x y <optional z>\n"
// globals: sv_cheats
void __fastcall ent_setpos(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v4; // r12
  int v5; // eax
  char *v6; // rax
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rdx
  CBaseEntity *m_pInstance; // r13
  const Vector *AbsOrigin; // rax
  const char *v11; // rdi
  vec_t z; // r12d
  __m128d v13; // xmm0
  bool v14; // cc
  const char *v15; // rdi
  __m128d v16; // xmm0
  bool v17; // zf
  double v18; // xmm2_8
  float v19; // xmm0_4
  float v20[2]; // [rsp+20h] [rbp-38h] BYREF
  Vector newpos; // [rsp+28h] [rbp-30h]

  if ( sv_cheats->m_pParent->m_Value.m_nValue != 0 )
  {
    CommandClient = UTIL_GetCommandClient();
    v4 = CommandClient;
    if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
    {
      if ( args->m_nArgc <= 3 )
      {
        ClientPrint(v4, 2, "Usage:  ent_setpos index x y <optional z>\n", 0, 0, 0, 0);
      }
      else
      {
        v5 = V_atoi(args->m_ppArgv[1]);
        if ( v5 <= 0x7FFE
          && (v7 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9]) != 0
          && (v8 = &v7[v5 & 0x1FF]) != 0
          && (v8->m_EHandle.m_Index & 0x7FFF) == v5
          && (m_pInstance = v8->m_pInstance, v8->m_pInstance != 0) )
        {
          AbsOrigin = CBaseEntity::GetAbsOrigin(v8->m_pInstance);
          v11 = "";
          z = AbsOrigin->z;
          if ( args->m_nArgc > 2 )
            v11 = args->m_ppArgv[2];
          v13.m128d_f64[0] = strtod(v11, 0);
          v14 = args->m_nArgc <= 3;
          v15 = "";
          v20[0] = _mm_movedup_pd(v13).m128d_f64[0];
          if ( !v14 )
            v15 = args->m_ppArgv[3];
          v16.m128d_f64[0] = strtod(v15, 0);
          v17 = args->m_nArgc == 5;
          v18 = _mm_movedup_pd(v16).m128d_f64[0];
          v19 = z;
          v20[1] = v18;
          if ( v17 )
            v19 = strtod(args->m_ppArgv[4], 0);
          newpos.x = v19;
          CBaseEntity::SetAbsOrigin(m_pInstance, v20);
        }
        else
        {
          v6 = UTIL_VarArgs("ent_setpos no entity %d\n", v5);
          ClientPrint(v4, 2, v6, 0, 0, 0, 0);
        }
      }
    }
  }
}


// ent_setang  (line 1294, @0x000000000218b9b0, libserver.so)  // inlines: Arg, GetBool, GetInstance, GetInt, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, ToBasePlayer, atof, operator[]
// calls: UTIL_GetCommandClient, V_atoi, UTIL_VarArgs, ClientPrint, CBaseEntity::GetAbsAngles, strtod, CBaseEntity::SetAbsAngles
// strings: "ent_setang no entity %d\n", "Usage:  ent_setang index pitch yaw <optional roll>\n"
// globals: sv_cheats
void __fastcall ent_setang(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v4; // r12
  int v5; // eax
  char *v6; // rax
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rdx
  CBaseEntity *m_pInstance; // r13
  const QAngle *AbsAngles; // rax
  const char *v11; // rdi
  vec_t z; // r12d
  __m128d v13; // xmm0
  bool v14; // cc
  const char *v15; // rdi
  __m128d v16; // xmm0
  bool v17; // zf
  double v18; // xmm2_8
  float v19; // xmm0_4
  float v20[2]; // [rsp+20h] [rbp-38h] BYREF
  QAngle newAng; // [rsp+28h] [rbp-30h]

  if ( sv_cheats->m_pParent->m_Value.m_nValue != 0 )
  {
    CommandClient = UTIL_GetCommandClient();
    v4 = CommandClient;
    if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
    {
      if ( args->m_nArgc <= 3 )
      {
        ClientPrint(v4, 2, "Usage:  ent_setang index pitch yaw <optional roll>\n", 0, 0, 0, 0);
      }
      else
      {
        v5 = V_atoi(args->m_ppArgv[1]);
        if ( v5 <= 0x7FFE
          && (v7 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9]) != 0
          && (v8 = &v7[v5 & 0x1FF]) != 0
          && (v8->m_EHandle.m_Index & 0x7FFF) == v5
          && (m_pInstance = v8->m_pInstance, v8->m_pInstance != 0) )
        {
          AbsAngles = CBaseEntity::GetAbsAngles(v8->m_pInstance);
          v11 = "";
          z = AbsAngles->z;
          if ( args->m_nArgc > 2 )
            v11 = args->m_ppArgv[2];
          v13.m128d_f64[0] = strtod(v11, 0);
          v14 = args->m_nArgc <= 3;
          v15 = "";
          v20[0] = _mm_movedup_pd(v13).m128d_f64[0];
          if ( !v14 )
            v15 = args->m_ppArgv[3];
          v16.m128d_f64[0] = strtod(v15, 0);
          v17 = args->m_nArgc == 5;
          v18 = _mm_movedup_pd(v16).m128d_f64[0];
          v19 = z;
          v20[1] = v18;
          if ( v17 )
            v19 = strtod(args->m_ppArgv[4], 0);
          newAng.x = v19;
          CBaseEntity::SetAbsAngles(m_pInstance, v20);
        }
        else
        {
          v6 = UTIL_VarArgs("ent_setang no entity %d\n", v5);
          ClientPrint(v4, 2, v6, 0, 0, 0, 0);
        }
      }
    }
  }
}


// setpos  (line 1330, @0x0000000002195bb0, libserver.so)  // inlines: Arg, GetBool, GetInt, ToBasePlayer, atof, operator[]
// calls: UTIL_GetCommandClient, CBaseEntity::GetAbsOrigin, strtod, CBaseEntity::SetAbsOrigin, TestEntityPosition, ClientPrint
// strings: "setpos into world, use noclip to unstick yourself!\n", "Usage:  setpos x y <z optional>\n"
// globals: sv_cheats
void __fastcall setpos(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v4; // r12
  const Vector *AbsOrigin; // rax
  const char *v6; // rdi
  int v7; // r14d
  __m128d v8; // xmm0
  bool v9; // cc
  const char *v10; // rdi
  __m128d v11; // xmm0
  bool v12; // zf
  double v13; // xmm3_8
  float v14; // xmm0_4
  float v15[2]; // [rsp+10h] [rbp-38h] BYREF
  Vector newpos; // [rsp+18h] [rbp-30h]

  if ( sv_cheats->m_pParent->m_Value.m_nValue != 0 )
  {
    CommandClient = UTIL_GetCommandClient();
    v4 = CommandClient;
    if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
    {
      if ( args->m_nArgc <= 2 )
      {
        ClientPrint(v4, 2, "Usage:  setpos x y <z optional>\n", 0, 0, 0, 0);
      }
      else
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
        v6 = "";
        v7 = _mm_cvtsi128_si32(LODWORD(AbsOrigin->z));
        if ( args->m_nArgc > 1 )
          v6 = args->m_ppArgv[1];
        v8.m128d_f64[0] = strtod(v6, 0);
        v9 = args->m_nArgc <= 2;
        v10 = "";
        v15[0] = _mm_movedup_pd(v8).m128d_f64[0];
        if ( !v9 )
          v10 = args->m_ppArgv[2];
        v11.m128d_f64[0] = strtod(v10, 0);
        v12 = args->m_nArgc == 4;
        v13 = _mm_movedup_pd(v11).m128d_f64[0];
        v14 = *&v7;
        v15[1] = v13;
        if ( v12 )
          v14 = strtod(args->m_ppArgv[3], 0);
        newpos.x = v14;
        CBaseEntity::SetAbsOrigin(v4, v15);
        if ( !TestEntityPosition(v4, 0x87011u) )
          ClientPrint(v4, 2, "setpos into world, use noclip to unstick yourself!\n", 0, 0, 0, 0);
      }
    }
  }
}


// setpos_player  (line 1372, @0x0000000002195a00, libserver.so)  // inlines: Arg, GetBool, GetInt, ToBasePlayer, atof, atoi, operator[]
// calls: UTIL_GetCommandClient, strtol, UTIL_PlayerByIndex, CBaseEntity::GetAbsOrigin, strtod, CBaseEntity::SetAbsOrigin, TestEntityPosition, ClientPrint
// strings: "setpos into world, use noclip to unstick yourself!\n", "Usage:  setpos player_index x y <z optional>\n"
// globals: sv_cheats
void __fastcall setpos_player(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v4; // r12
  CEntityIndex v5; // eax
  CBasePlayer *v6; // rax
  CBasePlayer *v7; // r12
  const Vector *AbsOrigin; // rax
  const char *v9; // rdi
  int v10; // r14d
  __m128d v11; // xmm0
  bool v12; // cc
  const char *v13; // rdi
  __m128d v14; // xmm0
  bool v15; // zf
  double v16; // xmm3_8
  float v17; // xmm0_4
  uint64 v18; // rax
  float v19[2]; // [rsp+10h] [rbp-38h] BYREF
  Vector newpos; // [rsp+18h] [rbp-30h]

  if ( sv_cheats->m_pParent->m_Value.m_nValue != 0 )
  {
    CommandClient = UTIL_GetCommandClient();
    v4 = CommandClient;
    if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
    {
      if ( args->m_nArgc <= 3 )
      {
        ClientPrint(v4, 2, "Usage:  setpos player_index x y <z optional>\n", 0, 0, 0, 0);
      }
      else
      {
        v5.m_Data = strtol(args->m_ppArgv[1], 0, 10);
        v6 = UTIL_PlayerByIndex(v5);
        v7 = v6;
        if ( v6 != 0 && (*(v6->_vptr_IHandleEntity + 140))(v6) != 0 )
        {
          AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
          v9 = "";
          v10 = _mm_cvtsi128_si32(LODWORD(AbsOrigin->z));
          if ( args->m_nArgc > 2 )
            v9 = args->m_ppArgv[2];
          v11.m128d_f64[0] = strtod(v9, 0);
          v12 = args->m_nArgc <= 3;
          v13 = "";
          v19[0] = _mm_movedup_pd(v11).m128d_f64[0];
          if ( !v12 )
            v13 = args->m_ppArgv[3];
          v14.m128d_f64[0] = strtod(v13, 0);
          v15 = args->m_nArgc == 5;
          v16 = _mm_movedup_pd(v14).m128d_f64[0];
          v17 = *&v10;
          v19[1] = v16;
          if ( v15 )
            v17 = strtod(args->m_ppArgv[4], 0);
          newpos.x = v17;
          CBaseEntity::SetAbsOrigin(v7, v19);
          v18 = (*(v7->_vptr_IHandleEntity + 540))(v7, 0);
          if ( !TestEntityPosition(v7, v18) )
            ClientPrint(v7, 2, "setpos into world, use noclip to unstick yourself!\n", 0, 0, 0, 0);
        }
      }
    }
  }
}


// CC_setang_f  (line 1411, @0x000000000218b1e0, libserver.so)  // inlines: Arg, GetBool, GetInt, ToBasePlayer, atof, operator[]
// calls: UTIL_GetCommandClient, CBaseEntity::GetAbsAngles, strtod, CBasePlayer::SnapEyeAngles, ClientPrint
// strings: "Usage:  setang pitch yaw <roll optional>\n"
// globals: sv_cheats
void __fastcall CC_setang_f(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v4; // r12
  const QAngle *AbsAngles; // rax
  const char *v6; // rdi
  int v7; // r14d
  __m128d v8; // xmm0
  bool v9; // cc
  const char *v10; // rdi
  __m128d v11; // xmm0
  bool v12; // zf
  double v13; // xmm3_8
  float v14; // xmm0_4
  float v15[2]; // [rsp+10h] [rbp-38h] BYREF
  QAngle newang; // [rsp+18h] [rbp-30h]

  if ( sv_cheats->m_pParent->m_Value.m_nValue != 0 )
  {
    CommandClient = UTIL_GetCommandClient();
    v4 = CommandClient;
    if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
    {
      if ( args->m_nArgc <= 2 )
      {
        ClientPrint(v4, 2, "Usage:  setang pitch yaw <roll optional>\n", 0, 0, 0, 0);
      }
      else
      {
        AbsAngles = CBaseEntity::GetAbsAngles(v4);
        v6 = "";
        v7 = _mm_cvtsi128_si32(LODWORD(AbsAngles->z));
        if ( args->m_nArgc > 1 )
          v6 = args->m_ppArgv[1];
        v8.m128d_f64[0] = strtod(v6, 0);
        v9 = args->m_nArgc <= 2;
        v10 = "";
        v15[0] = _mm_movedup_pd(v8).m128d_f64[0];
        if ( !v9 )
          v10 = args->m_ppArgv[2];
        v11.m128d_f64[0] = strtod(v10, 0);
        v12 = args->m_nArgc == 4;
        v13 = _mm_movedup_pd(v11).m128d_f64[0];
        v14 = *&v7;
        v15[1] = v13;
        if ( v12 )
          v14 = strtod(args->m_ppArgv[3], 0);
        newang.x = v14;
        CBasePlayer::SnapEyeAngles(v4, v15);
      }
    }
  }
}


// setpos_exact  (line 1442, @0x0000000002195f10, libserver.so)  // inlines: Arg, GetBool, GetInt, ToBasePlayer, atof, operator[]
// calls: UTIL_GetCommandClient, CBaseEntity::GetAbsOrigin, strtod, TestEntityPosition, EnableNoClip, ClientPrint
// strings: "Usage:  setpos_exact x y <z optional>\n"
// globals: sv_cheats
void __fastcall setpos_exact(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v4; // rbx
  const Vector *AbsOrigin; // rax
  const char *v6; // rdi
  int v7; // r14d
  __m128d v8; // xmm0
  bool v9; // cc
  const char *v10; // rdi
  __m128d v11; // xmm0
  bool v12; // zf
  double v13; // xmm3_8
  float v14; // xmm0_4
  uint64 v15; // rax
  float v16[2]; // [rsp+10h] [rbp-38h] BYREF
  Vector newpos; // [rsp+18h] [rbp-30h]

  if ( sv_cheats->m_pParent->m_Value.m_nValue != 0 )
  {
    CommandClient = UTIL_GetCommandClient();
    v4 = CommandClient;
    if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
    {
      if ( args->m_nArgc <= 2 )
      {
        ClientPrint(v4, 2, "Usage:  setpos_exact x y <z optional>\n", 0, 0, 0, 0);
      }
      else
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
        v6 = "";
        v7 = _mm_cvtsi128_si32(LODWORD(AbsOrigin->z));
        if ( args->m_nArgc > 1 )
          v6 = args->m_ppArgv[1];
        v8.m128d_f64[0] = strtod(v6, 0);
        v9 = args->m_nArgc <= 2;
        v10 = "";
        v16[0] = _mm_movedup_pd(v8).m128d_f64[0];
        if ( !v9 )
          v10 = args->m_ppArgv[2];
        v11.m128d_f64[0] = strtod(v10, 0);
        v12 = args->m_nArgc == 4;
        v13 = _mm_movedup_pd(v11).m128d_f64[0];
        v14 = *&v7;
        v16[1] = v13;
        if ( v12 )
          v14 = strtod(args->m_ppArgv[3], 0);
        newpos.x = v14;
        (*(v4->_vptr_IHandleEntity + 128))(v4, v16, 0, 0);
        v15 = (*(v4->_vptr_IHandleEntity + 540))(v4, 0);
        if ( !TestEntityPosition(v4, v15) && v4->m_MoveType.m_Value != MoveType_t::MOVETYPE_NOCLIP )
          EnableNoClip(v4);
      }
    }
  }
}


// setang_exact  (line 1490, @0x000000000218b4b0, libserver.so)  // inlines: Arg, GetBool, GetInt, ToBasePlayer, atof, operator[]
// calls: UTIL_GetCommandClient, CBaseEntity::GetAbsAngles, strtod, CBasePlayer::SnapEyeAngles, ClientPrint
// strings: "Usage:  setang_exact pitch yaw <roll optional>\n"
// globals: sv_cheats
void __fastcall setang_exact(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v4; // r12
  const QAngle *AbsAngles; // rax
  const char *v6; // rdi
  int v7; // r14d
  __m128d v8; // xmm0
  bool v9; // cc
  const char *v10; // rdi
  __m128d v11; // xmm0
  bool v12; // zf
  double v13; // xmm3_8
  float v14; // xmm0_4
  float v15[2]; // [rsp+10h] [rbp-38h] BYREF
  QAngle newang; // [rsp+18h] [rbp-30h]

  if ( sv_cheats->m_pParent->m_Value.m_nValue != 0 )
  {
    CommandClient = UTIL_GetCommandClient();
    v4 = CommandClient;
    if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
    {
      if ( args->m_nArgc <= 2 )
      {
        ClientPrint(v4, 2, "Usage:  setang_exact pitch yaw <roll optional>\n", 0, 0, 0, 0);
      }
      else
      {
        AbsAngles = CBaseEntity::GetAbsAngles(v4);
        v6 = "";
        v7 = _mm_cvtsi128_si32(LODWORD(AbsAngles->z));
        if ( args->m_nArgc > 1 )
          v6 = args->m_ppArgv[1];
        v8.m128d_f64[0] = strtod(v6, 0);
        v9 = args->m_nArgc <= 2;
        v10 = "";
        v15[0] = _mm_movedup_pd(v8).m128d_f64[0];
        if ( !v9 )
          v10 = args->m_ppArgv[2];
        v11.m128d_f64[0] = strtod(v10, 0);
        v12 = args->m_nArgc == 4;
        v13 = _mm_movedup_pd(v11).m128d_f64[0];
        v14 = *&v7;
        v15[1] = v13;
        if ( v12 )
          v14 = strtod(args->m_ppArgv[3], 0);
        newang.x = v14;
        (*(v4->_vptr_IHandleEntity + 128))(v4, 0, v15, 0);
        CBasePlayer::SnapEyeAngles(v4, v15);
      }
    }
  }
}


// CC_Notarget_f  (line 1524, @0x000000000218afd0, libserver.so)  // inlines: GetBool, GetInt, ToBasePlayer
// calls: UTIL_GetCommandClient, CBaseEntity::ToggleFlag, ClientPrint
// strings: "notarget ON\n", "notarget OFF\n"
// globals: sv_cheats
void __fastcall CC_Notarget_f(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v3; // rbx

  if ( sv_cheats->m_pParent->m_Value.m_nValue != 0 )
  {
    CommandClient = UTIL_GetCommandClient();
    v3 = CommandClient;
    if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
    {
      CBaseEntity::ToggleFlag(v3, 0x8000);
      if ( (v3->m_fFlags.m_Value & 0x8000) == 0 )
        ClientPrint(v3, 2, "notarget OFF\n", 0, 0, 0, 0);
      else
        ClientPrint(v3, 2, "notarget ON\n", 0, 0, 0, 0);
    }
  }
}


// CC_HurtMe_f  (line 1566, @0x000000000218b3d0, libserver.so)  // inlines: GetBool, GetInt, ToBasePlayer, atoi
// calls: UTIL_GetCommandClient, strtol, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
// globals: sv_cheats
void __fastcall CC_HurtMe_f(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBaseEntity *v4; // rbx
  float v5; // xmm0_4
  __int64 v6; // [rsp-8h] [rbp-A8h] BYREF

  if ( sv_cheats->m_pParent->m_Value.m_nValue != 0 )
  {
    CommandClient = UTIL_GetCommandClient();
    v4 = CommandClient;
    if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
    {
      v5 = 10.0;
      if ( args->m_nArgc > 1 )
        v5 = strtol(args->m_ppArgv[1], 0, 10);
      CTakeDamageInfo::CTakeDamageInfo(&v6, v4, v4, v5, 0, 0);
      CBaseEntity::TakeDamage(v4, &v6);
      CTakeDamageInfo::~CTakeDamageInfo(&v6);
    }
  }
}


// DescribeGroundList  (line 1609, @0x000000000218c460, libserver.so)  // inlines: Get, GetClassNameAsCStr, GetClassname, GetDataObject, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, entindex, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetGroundEntity, CEntityInstance::GetEntityIndex, Msg, CEntityIdentity::GetDataObject
// callers: CC_GroundList_f
// strings: "%i : %s (ground %i %s)\n", "  %02i:  NULL link\n", "  %02i:  %i %s\n", "   mismatched!!!\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall DescribeGroundList(CBaseEntity *ent)
{
  int v1; // r15d
  const char *m_pAsString; // rbx
  CEntityIdentity *m_pEntity; // rax
  int32 m_Data; // r12d
  CBaseEntity *GroundEntity; // rax
  CEntityIdentity *v7; // rax
  const char *v8; // r14
  CEntityIndex v9; // eax
  groundlink_t *DataObject; // rax
  groundlink_t *nextLink; // rbx
  int v12; // r12d
  int v13; // r15d
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CBaseEntity *m_pInstance; // r14
  CEntityIdentity *v17; // rax
  const char *v18; // rcx
  CEntityIndex v19; // eax
  int c; // [rsp+Ch] [rbp-44h]
  groundlink_t *root; // [rsp+10h] [rbp-40h]
  const char *v23; // [rsp+18h] [rbp-38h]

  v1 = 0;
  if ( ent != 0 )
  {
    m_pAsString = "NULL";
    if ( CBaseEntity::GetGroundEntity(ent) != 0 )
    {
      m_pAsString = "";
      m_pEntity = CBaseEntity::GetGroundEntity(ent)->m_pEntity;
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    }
    m_Data = -1;
    if ( CBaseEntity::GetGroundEntity(ent) != 0 )
    {
      GroundEntity = CBaseEntity::GetGroundEntity(ent);
      m_Data = CEntityInstance::GetEntityIndex(GroundEntity).m_Data;
    }
    v7 = ent->m_pEntity;
    v8 = "";
    if ( v7->m_designerName.u.m_Id != 0 )
      v8 = v7->m_designerName.u.m_pAsString;
    v9.m_Data = CEntityInstance::GetEntityIndex(ent).m_Data;
    Msg("%i : %s (ground %i %s)\n", v9.m_Data, v8, m_Data, m_pAsString);
    DataObject = CEntityIdentity::GetDataObject(ent->m_pEntity, 0);
    root = DataObject;
    if ( DataObject != 0 )
    {
      nextLink = DataObject->nextLink;
      if ( nextLink != DataObject )
      {
        v12 = 2;
        while ( 1 )
        {
          while ( 1 )
          {
            v13 = v12 - 1;
            if ( nextLink->entity.m_Index + 2 > 1 )
            {
              v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(nextLink->entity.m_Index) >> 9) & 0x3F];
              if ( v14 != 0 )
              {
                v15 = &v14[nextLink->entity.m_Index & 0x1FF];
                if ( v15 != 0 && nextLink->entity.m_Index == v15->m_EHandle.m_Index )
                {
                  m_pInstance = v15->m_pInstance;
                  if ( v15->m_pInstance != 0 )
                    break;
                }
              }
            }
            c = v12;
            Msg("  %02i:  NULL link\n", v13);
LABEL_13:
            nextLink = nextLink->nextLink;
            ++v12;
            if ( nextLink == root )
              goto LABEL_23;
          }
          v17 = m_pInstance->m_pEntity;
          v18 = "";
          if ( v17->m_designerName.u.m_Id != 0 )
            v18 = v17->m_designerName.u.m_pAsString;
          v23 = v18;
          v19.m_Data = CEntityInstance::GetEntityIndex(v15->m_pInstance).m_Data;
          c = v12;
          Msg("  %02i:  %i %s\n", v13, v19.m_Data, v23);
          if ( ent == CBaseEntity::GetGroundEntity(m_pInstance) )
            goto LABEL_13;
          ++v12;
          Msg("   mismatched!!!\n");
          nextLink = nextLink->nextLink;
          if ( nextLink == root )
          {
LABEL_23:
            v1 = c - 1;
            goto LABEL_24;
          }
        }
      }
    }
    v1 = 0;
LABEL_24:
    CBaseEntity::GetGroundEntity(ent);
  }
  return v1;
}


// CC_GroundList_f  (line 1653, @0x000000000218c680, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
// calls: UTIL_IsCommandIssuedByServerAdmin, DescribeGroundList, CGameEntitySystem::NextEnt, Msg, V_atoi
// strings: "--- %i links\n"
void __fastcall CC_GroundList_f(const CCommandContext *const ctx, const CCommand *const args)
{
  CBaseEntity *v3; // rbx
  CBaseEntity *Ent; // rax
  int v5; // eax
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rdx

  if ( UTIL_IsCommandIssuedByServerAdmin() )
  {
    if ( args->m_nArgc == 2 )
    {
      v5 = V_atoi(args->m_ppArgv[1]);
      if ( v5 <= 0x7FFE )
      {
        v6 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
        if ( v6 != 0 )
        {
          v7 = &v6[v5 & 0x1FF];
          if ( v7 != 0 && (v7->m_EHandle.m_Index & 0x7FFF) == v5 && v7->m_pInstance != 0 )
            DescribeGroundList(v7->m_pInstance);
        }
      }
    }
    else
    {
      v3 = 0;
      while ( 1 )
      {
        Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, v3);
        v3 = Ent;
        if ( Ent == 0 )
          break;
        DescribeGroundList(Ent);
      }
      Msg("--- %i links\n", groundlinksallocated);
    }
  }
}


// ClientCommand  (line 1690, @0x00000000021960a0, libserver.so)  // inlines: Arg, Color, FStrEq, GetBool, GetInt, SetColor, V_strlen, _V_strcmp, operator[]
// calls: strlen, UTIL_VarArgs, ClientPrint, UTIL_IsCommandIssuedByServerAdmin, ConsoleKillTarget, UTIL_ScreenFade, __stack_chk_fail
// callers: CSource2GameClients::ClientCommand
// strings: "killtarget", "demorestart", "Unknown command: %s\n", "Console command too long.\n"
// globals: sv_cheats
void __fastcall ClientCommand(CBasePlayer *pPlayer, const CCommand *const args)
{
  const char *v4; // rbx
  const char *v5; // rdi
  bool v6; // zf
  __int64 v7; // rcx
  const char *v8; // rsi
  const char *v9; // rdi
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // eax
  char *v13; // rax
  const char *v14; // rsi
  const CCommand *argsa; // [rsp+8h] [rbp-28h]
  Color black; // [rsp+10h] [rbp-20h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-18h]

  v17 = __readfsqword(0x28u);
  if ( args->m_nArgc <= 0 )
  {
    if ( pPlayer == 0 )
      return;
    v4 = "";
LABEL_14:
    if ( strcmp(v4, "fade") != 0 )
    {
      if ( (*(g_pGameRules->_vptr_CGameRules + 83))(g_pGameRules, pPlayer, args) == 0 )
      {
        if ( v4 != 0 && !(((v12 = strlen(v4)) - 128 < 0) ^ __OFADD__(-128, v12) | (v12 == 128)) )
        {
          ClientPrint(pPlayer, 2, "Console command too long.\n", 0, 0, 0, 0);
        }
        else
        {
          v13 = UTIL_VarArgs("Unknown command: %s\n", v4);
          ClientPrint(pPlayer, 2, v13, 0, 0, 0, 0);
        }
      }
      return;
    }
LABEL_26:
    black._color[0] = 32;
    black._color[1] = 63;
    black._color[2] = 100;
    black._color[3] = -56;
    UTIL_ScreenFade(pPlayer, &black, 3.0, 3.0, 2);
    return;
  }
  v4 = args->m_ppArgv[0];
  if ( pPlayer == 0 )
    return;
  v5 = "killtarget";
  v6 = v4 == "killtarget";
  if ( v4 != "killtarget" )
  {
    v7 = 11;
    v8 = args->m_ppArgv[0];
    do
    {
      if ( v7 == 0 )
        break;
      v6 = *v8++ == *v5++;
      --v7;
    }
    while ( v6 );
    if ( !v6 )
    {
      v9 = "demorestart";
      v10 = v4 == "demorestart";
      if ( v4 != "demorestart" )
      {
        v11 = 12;
        v8 = v4;
        do
        {
          if ( v11 == 0 )
            break;
          v10 = *v8++ == *v9++;
          --v11;
        }
        while ( v10 );
        if ( !v10 )
        {
          if ( v4 == "fade" )
            goto LABEL_26;
          goto LABEL_14;
        }
      }
      (*(pPlayer->_vptr_IHandleEntity + 490))(pPlayer, v8, args);
      return;
    }
  }
  if ( g_pDeveloper->m_pParent->m_Value.m_nValue != 0 && sv_cheats->m_pParent->m_Value.m_nValue != 0 )
  {
    argsa = args;
    if ( UTIL_IsCommandIssuedByServerAdmin() )
    {
      v14 = "";
      if ( argsa->m_nArgc > 1 )
        v14 = argsa->m_ppArgv[1];
      ConsoleKillTarget(pPlayer, v14);
    }
  }
}


