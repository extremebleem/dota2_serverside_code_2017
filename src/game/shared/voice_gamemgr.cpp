
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// VoiceServerDebug  (line 70, @0x00000000023f96d0, libserver.so)  // inlines: GetInt, vsnprintf
// calls: __vsnprintf_chk, Msg, __stack_chk_fail
// callers: CVoiceGameMgr::ClientCommand
void VoiceServerDebug(const char *pFmt, ...)
{
  va_list marker; // [rsp+8h] [rbp-10E8h] BYREF
  char msg[4104]; // [rsp+20h] [rbp-10D0h] BYREF
  unsigned __int64 v3; // [rsp+1028h] [rbp-C8h]

  v3 = __readfsqword(0x28u);
  if ( voice_serverdebug.m_pParent->m_Value.m_nValue != 0 )
  {
    va_start(marker, pFmt);
    __vsnprintf_chk(msg, 4096, 1, 4096, pFmt, marker);
    Msg("%s", msg);
  }
}


// GetVoiceGameMgr  (line 86, @0x00000000024098c0, libserver.so)
// callers: Host_Say, CGameRules::ClientCommand, CGameRules::CGameRules, CGameRules::Think, CMultiplayRules::ClientConnected, CDOTAGamerules::Think, CDOTAGCServerSystem::MatchSignOut
// globals: g_VoiceGameMgr
CVoiceGameMgr *__cdecl GetVoiceGameMgr()
{
  return &g_VoiceGameMgr;
}


// CVoiceGameMgr::CVoiceGameMgr  (line 97, @0x00000000024098d0, libserver.so)
void __fastcall CVoiceGameMgr::CVoiceGameMgr(CVoiceGameMgr *const this)
{
  this->_vptr_CVoiceGameMgr = off_40D30F0;  // vptr: CVoiceGameMgr
  this->m_UpdateInterval = 0.0;
  this->m_nMaxPlayers = 0;
  this->m_iProximityDistance = -1;
}


// CVoiceGameMgr::~CVoiceGameMgr  (line 105, @0x00000000023f8a90, libserver.so)
void __fastcall CVoiceGameMgr::~CVoiceGameMgr(CVoiceGameMgr *const this)
{
  this->_vptr_CVoiceGameMgr = off_40D30F0;  // vptr: CVoiceGameMgr
}


// CVoiceGameMgr::~CVoiceGameMgr  (line 105, @0x00000000023f8ad0, libserver.so)  // inlines: ~CVoiceGameMgr
// calls: operator delete
void __fastcall CVoiceGameMgr::~CVoiceGameMgr(CVoiceGameMgr *const this)
{
  this->_vptr_CVoiceGameMgr = off_40D30F0;  // vptr: CVoiceGameMgr
  operator delete(this);
}


// CVoiceGameMgr::Init  (line 109, @0x0000000002409900, libserver.so)
// callers: CGameRules::CGameRules
bool __fastcall CVoiceGameMgr::Init(CVoiceGameMgr *const this, IVoiceGameMgrHelper *pHelper, int maxClients)
{
  int v3; // eax

  v3 = 65;
  if ( maxClients <= 65 )
    v3 = maxClients;
  this->m_pHelper = pHelper;
  this->m_nMaxPlayers = v3;
  return 1;
}


// CVoiceGameMgr::SetHelper  (line 120, @0x0000000002409920, libserver.so)
void __fastcall CVoiceGameMgr::SetHelper(CVoiceGameMgr *const this, IVoiceGameMgrHelper *pHelper)
{
  this->m_pHelper = pHelper;
}


// CVoiceGameMgr::Update  (line 126, @0x000000000240fbc0, libserver.so)
// calls: CVoiceGameMgr::UpdateMasks
// callers: CGameRules::Think, CDOTAGamerules::Think
void __fastcall CVoiceGameMgr::Update(CVoiceGameMgr *const this, double a2, double frametime)
{
  double v3; // xmm0_8

  v3 = a2 + this->m_UpdateInterval;
  this->m_UpdateInterval = v3;
  if ( v3 >= 0.3 )
    CVoiceGameMgr::UpdateMasks(this);
}


// CVoiceGameMgr::ClientConnected  (line 137, @0x0000000002409930, libserver.so)  // inlines: Init, memset, operator=
// callers: CMultiplayRules::ClientConnected
// globals: g_bWantModEnable, g_SentGameRulesMasks
void __fastcall CVoiceGameMgr::ClientConnected(CVoiceGameMgr *const this, CEntityIndex nEntityIndex)
{
  int v2; // esi

  v2 = nEntityIndex.m_Data - 1;
  g_bWantModEnable.m_Ints[v2 >> 5] |= 1 << v2;
  g_SentGameRulesMasks[v2] = 0;
}


// CVoiceGameMgr::ClientCommand  (line 147, @0x0000000002409970, libserver.so)  // inlines: Arg, SetDWord, atoi, entindex, operator=, operator[]
// calls: CEntityInstance::GetEntityIndex, VoiceServerDebug, V_stricmp_fast, sscanf, strtol
// callers: CGameRules::ClientCommand
// strings: "CVoiceGameMgr::ClientCommand: cmd %s from invalid client (%d)\n", "vban", "CVoiceGameMgr::ClientCommand: vban (0x%x) (0x%x) from %d\n", "VModEnable", "CVoiceGameMgr::ClientCommand: VModEnable (%d)\n"
// globals: g_BanMasks, g_ChatBanMasks, g_PlayerModEnable, g_bWantModEnable
bool __fastcall CVoiceGameMgr::ClientCommand(
        CVoiceGameMgr *const this,
        CBasePlayer *pPlayer,
        const CCommand *const args)
{
  CEntityIndex v5; // eax
  int32 m_Data; // r12d
  const char *v7; // rsi
  bool result; // al
  const char *v9; // rdi
  bool v10; // zf
  int m_nArgc; // eax
  const char *v12; // rdi
  bool v13; // cc
  const char *v14; // rdi
  unsigned int v15; // esi
  unsigned int v16; // edx
  const char *v17; // rdi
  int v18; // edx
  int v19; // eax
  const char *v20; // rdi
  int v21; // eax
  unsigned int voicemask; // [rsp+8h] [rbp-28h] BYREF
  unsigned int chatmask; // [rsp+Ch] [rbp-24h] BYREF

  v5.m_Data = CEntityInstance::GetEntityIndex(pPlayer).m_Data - 1;
  m_Data = v5.m_Data;
  if ( v5.m_Data >= 0 && v5.m_Data < this->m_nMaxPlayers )
  {
    v9 = "";
    if ( args->m_nArgc > 0 )
      v9 = args->m_ppArgv[0];
    v10 = V_stricmp_fast(v9, "vban") == 0;
    m_nArgc = args->m_nArgc;
    if ( v10 && m_nArgc > 1 )
    {
      v12 = args->m_ppArgv[1];
      voicemask = 0;
      sscanf(v12, "%x", &voicemask);
      v13 = args->m_nArgc <= 2;
      chatmask = 0;
      v14 = "";
      if ( !v13 )
        v14 = args->m_ppArgv[2];
      sscanf(v14, "%x", &chatmask);
      v15 = voicemask;
      g_BanMasks[m_Data].m_Ints[0] = voicemask;
      v16 = chatmask;
      g_ChatBanMasks[m_Data].m_Ints[0] = chatmask;
      VoiceServerDebug("CVoiceGameMgr::ClientCommand: vban (0x%x) (0x%x) from %d\n", v15, v16, m_Data);
      return 1;
    }
    else
    {
      v17 = "";
      if ( m_nArgc > 0 )
        v17 = args->m_ppArgv[0];
      v18 = V_stricmp_fast(v17, "VModEnable");
      result = 0;
      if ( v18 == 0 && args->m_nArgc > 1 )
      {
        LOBYTE(v18) = 10;
        v19 = strtol(args->m_ppArgv[1], 0, v18);
        VoiceServerDebug("CVoiceGameMgr::ClientCommand: VModEnable (%d)\n", v19 != 0);
        v20 = "";
        if ( args->m_nArgc > 1 )
          v20 = args->m_ppArgv[1];
        if ( strtol(v20, 0, 10) != 0 )
        {
          g_PlayerModEnable.m_Ints[m_Data >> 5] |= 1 << m_Data;
          v21 = ~(1 << m_Data);
        }
        else
        {
          v21 = ~(1 << m_Data);
          g_PlayerModEnable.m_Ints[m_Data >> 5] &= v21;
        }
        g_bWantModEnable.m_Ints[m_Data >> 5] &= v21;
        return 1;
      }
    }
  }
  else
  {
    v7 = "";
    if ( args->m_nArgc > 0 )
      v7 = args->m_ppArgv[0];
    VoiceServerDebug("CVoiceGameMgr::ClientCommand: cmd %s from invalid client (%d)\n", v7, v5.m_Data);
    return 1;
  }
  return result;
}


// CVoiceGameMgr::UpdateMasks  (line 189, @0x000000000240f450, libserver.so)  // inlines: Add, CBitVec, CBitVecT, CEventPosterBase, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, CUserMessageRequestState_t, CUserMessageVoiceMask_t, ClearAll, Compare<CFixedBitVecBase<64> >, CopyArray, FindGameEvent<CUserMessageRequestState_t>, FindGameEvent<CUserMessageVoiceMask_t>, FindOrCreateGameEvent<CUserMessageRequestState_t>, FindOrCreateGameEvent<CUserMessageVoiceMask_t>, GetBool, GetDWord, GetInt, MoveArray, PostEvent<CUserMessageRequestState_t>, PostEvent<CUserMessageVoiceMask_t>, Reserve, add_ban_masks, add_gamerules_masks, memcpy, memset, operator uint32, operator!=<CFixedBitVecBase<64> >, operator(), operator=, operator==<CFixedBitVecBase<64> >, set_has_mod_enable, set_mod_enable, ~CEventPosterBase, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB, ~CUserMessageRequestState_t, ~CUserMessageVoiceMask_t
// calls: UTIL_PlayerByIndex, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CUserMessageRequestState::CUserMessageRequestState, CUserMessageRequestState::~CUserMessageRequestState, CRecipientFilter::~CRecipientFilter, memcmp, CUserMessageVoiceMask::CUserMessageVoiceMask, CUserMessageVoiceMask::~CUserMessageVoiceMask, operator new [], memcpy, operator delete [] (14 total)
// callers: CVoiceGameMgr::Update
// globals: g_BanMasks, g_SentGameRulesMasks, g_bWantModEnable, IGameEventSystem::FindOrCreateGameEvent<CUserMessageRequestState_t>(bool)::s_hEvent, g_PlayerModEnable, IGameEventSystem::FindOrCreateGameEvent<CUserMessageVoiceMask_t>(bool)::s_hEvent
void __fastcall CVoiceGameMgr::UpdateMasks(CVoiceGameMgr *const this)
{
  int v2; // ebx
  CBasePlayer *v3; // rax
  CBasePlayer *v4; // r14
  __int64 v5; // r13
  IGameEventSystem *v6; // rbx
  int i; // r12d
  CBasePlayer *v8; // rax
  CBasePlayer *v9; // rbx
  int v10; // edx
  int v11; // ebx
  int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // r14
  bool v15; // r13
  _BOOL8 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  bool v19; // al
  void *v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // ebx
  void *v23; // rax
  CSingleUserRecipientFilter *v24; // r14
  unsigned int v25; // ebx
  IGameEventSystem *v26; // r12
  void (__fastcall *v27)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r13
  int v28; // eax
  void *v29; // r12
  int v30; // eax
  void *v31; // r12
  CSingleUserRecipientFilter **v32; // [rsp+8h] [rbp-248h]
  CSingleUserRecipientFilter *v33; // [rsp+10h] [rbp-240h]
  void (__fastcall *v34)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64, CSingleUserRecipientFilter **); // [rsp+18h] [rbp-238h]
  int m_nValue; // [rsp+30h] [rbp-220h]
  int v36; // [rsp+34h] [rbp-21Ch]
  CBitVec<64> *s2; // [rsp+40h] [rbp-210h]
  __int64 v38; // [rsp+48h] [rbp-208h]
  __int64 v39; // [rsp+48h] [rbp-208h]
  CBitVec<64> *v40; // [rsp+50h] [rbp-200h]
  unsigned int v41; // [rsp+58h] [rbp-1F8h]
  bool bProximity; // [rsp+6Fh] [rbp-1E1h] BYREF
  CBitVec<64> gameRulesMask; // [rsp+70h] [rbp-1E0h] BYREF
  CBitVec<64> ProximityMask; // [rsp+80h] [rbp-1D0h]
  CSingleUserRecipientFilter *p_user; // [rsp+90h] [rbp-1C0h] BYREF
  _QWORD v46[2]; // [rsp+98h] [rbp-1B8h] BYREF
  int v47; // [rsp+A8h] [rbp-1A8h]
  void *pMem; // [rsp+B0h] [rbp-1A0h]
  int v49; // [rsp+B8h] [rbp-198h]
  int v50; // [rsp+BCh] [rbp-194h]
  void *src; // [rsp+C0h] [rbp-190h]
  int v52; // [rsp+C8h] [rbp-188h]
  int v53; // [rsp+CCh] [rbp-184h]
  bool v54; // [rsp+D0h] [rbp-180h]
  unsigned int v55; // [rsp+D8h] [rbp-178h]
  CSingleUserRecipientFilter user; // [rsp+E0h] [rbp-170h] BYREF
  unsigned __int64 v57; // [rsp+218h] [rbp-38h]

  v2 = 0;
  this->m_UpdateInterval = 0.0;
  v57 = __readfsqword(0x28u);
  m_nValue = sv_alltalk.m_pParent->m_Value.m_nValue;
  v40 = g_BanMasks;
  s2 = g_SentGameRulesMasks;
  v32 = &p_user;
  if ( this->m_nMaxPlayers > 0 )
  {
    do
    {
      v41 = v2 + 1;
      v3 = UTIL_PlayerByIndex((v2 + 1));
      v4 = v3;
      if ( v3 != 0 && ((*(v3->_vptr_IHandleEntity + 521))(v3) == 0 || v4->m_pl.hltv) )
      {
        CRecipientFilter::CRecipientFilter(&user);
        user._vptr_IRecipientFilter = &off_3FCB0D0;
        CRecipientFilter::AddRecipient(&user, v4);
        v36 = 1 << v2;
        v5 = v2 >> 5;
        if ( ((1 << v2) & g_bWantModEnable.m_Ints[v5]) != 0 )
        {
          p_user = &user;
          CUserMessageRequestState::CUserMessageRequestState(v46);
          LODWORD(pMem) = 0;
          v46[0] = off_40CE950;
          v38 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageRequestState_t>(bool)::s_hEvent;
          v6 = g_pGameEventSystem;
          v33 = p_user;
          v34 = *(*g_pGameEventSystem + 128LL);
          (*(*g_pNetworkMessages + 96LL))(
            g_pNetworkMessages,
            IGameEventSystem::FindOrCreateGameEvent<CUserMessageRequestState_t>(bool)::s_hEvent);
          v34(v6, 0, 0, v33, v38, v46, 24, v32);
          v46[0] = &off_40CE7D0;
          CUserMessageRequestState::~CUserMessageRequestState(v46);
          g_bWantModEnable.m_Ints[v5] &= ~v36;
        }
        bProximity = 0;
        ProximityMask = 0;
        gameRulesMask = 0;
        if ( (v36 & g_PlayerModEnable.m_Ints[v5]) != 0 || v4->m_pl.hltv )
        {
          for ( i = 0; i < this->m_nMaxPlayers; ++i )
          {
            v8 = UTIL_PlayerByIndex((i + 1));
            v9 = v8;
            if ( v8 != 0
              && (*(v8->_vptr_IHandleEntity + 391))(v8) == 0
              && !v9->m_pl.hltv
              && (m_nValue != 0
               || (*(this->m_pHelper->_vptr_IVoiceGameMgrHelper + 2))(this->m_pHelper, v4, v9, &bProximity) != 0) )
            {
              v10 = 1 << i;
              gameRulesMask.m_Ints[i >> 5] |= 1 << i;
              if ( bProximity )
                ProximityMask.m_Ints[i >> 5] |= v10;
              else
                ProximityMask.m_Ints[i >> 5] &= ~v10;
            }
          }
        }
        if ( memcmp(&gameRulesMask, s2, 8u) != 0 )
        {
          *s2 = gameRulesMask;
          p_user = &user;
          CUserMessageVoiceMask::CUserMessageVoiceMask(v46);
          v55 = 0;
          v46[0] = off_40CEB90;
          v17 = gameRulesMask.m_Ints[0];
          v18 = v49;
          v19 = (v36 & g_PlayerModEnable.m_Ints[v5]) != 0;
          v47 |= 4u;
          v54 = v19;
          if ( v49 == v50 )
          {
            v30 = v49 + 1;
            v31 = pMem;
            if ( v49 + 1 < 2 * v49 )
              v30 = 2 * v49;
            if ( v30 < 4 )
              v30 = 4;
            v50 = v30;
            v20 = operator new[](4LL * v30);
            pMem = v20;
            v18 = v49;
            if ( v31 != 0 )
            {
              memcpy(v20, v31, 4LL * v49);
              operator delete[](v31);
              v20 = pMem;
              v18 = v49;
            }
          }
          else
          {
            v20 = pMem;
          }
          v49 = v18 + 1;
          *(v20 + v18) = v17;
          v21 = v52;
          v22 = v40->m_Ints[0];
          if ( v52 == v53 )
          {
            v28 = v52 + 1;
            v29 = src;
            if ( v52 + 1 < 2 * v52 )
              v28 = 2 * v52;
            if ( v28 < 4 )
              v28 = 4;
            v53 = v28;
            v23 = operator new[](4LL * v28);
            src = v23;
            v21 = v52;
            if ( v29 != 0 )
            {
              memcpy(v23, v29, 4LL * v52);
              operator delete[](v29);
              v23 = src;
              v21 = v52;
            }
          }
          else
          {
            v23 = src;
          }
          v52 = v21 + 1;
          *(v23 + v21) = v22;
          v24 = p_user;
          v25 = v55;
          v26 = g_pGameEventSystem;
          v39 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageVoiceMask_t>(bool)::s_hEvent;
          v27 = *(*g_pGameEventSystem + 128LL);
          (*(*g_pNetworkMessages + 96LL))(
            g_pNetworkMessages,
            IGameEventSystem::FindOrCreateGameEvent<CUserMessageVoiceMask_t>(bool)::s_hEvent);
          v27(v26, v25, 0, v24, v39, v46, 64);
          v46[0] = &off_40CEA10;
          CUserMessageVoiceMask::~CUserMessageVoiceMask(v46);
        }
        v11 = 0;
        while ( v11 < this->m_nMaxPlayers )
        {
          v12 = 1 << v11;
          v13 = v11 >> 5;
          v14 = v13;
          if ( ((1 << v11) & gameRulesMask.m_Ints[v13]) != 0 )
          {
            v15 = (v12 & v40->m_Ints[v13]) == 0;
            v16 = v15;
          }
          else
          {
            v16 = 0;
            v15 = 0;
          }
          (*(g_pVoiceServer->_vptr_IAppSystem + 14))(g_pVoiceServer, v41, ++v11, v16);
          if ( v15 )
            (*(g_pVoiceServer->_vptr_IAppSystem + 15))(g_pVoiceServer, v41, v11, (v12 & ProximityMask.m_Ints[v14]) != 0);
        }
        user._vptr_IRecipientFilter = &off_3FCB0D0;
        CRecipientFilter::~CRecipientFilter(&user);
      }
      v2 = v41;
      ++v40;
      ++s2;
    }
    while ( v41 < this->m_nMaxPlayers );
  }
}


// CVoiceGameMgr::IsPlayerIgnoringPlayer  (line 269, @0x0000000002409b60, libserver.so)  // inlines: operator uint32
// globals: g_BanMasks
bool __fastcall CVoiceGameMgr::IsPlayerIgnoringPlayer(
        CVoiceGameMgr *const this,
        CEntityIndex iTalker,
        CEntityIndex iListener)
{
  return ((1 << (LOBYTE(iTalker.m_Data) - 1)) & g_BanMasks[iListener.m_Data - 1].m_Ints[(iTalker.m_Data - 1) >> 5]) != 0;
}


// CVoiceGameMgr::IsPlayerIgnoringPlayerText  (line 274, @0x0000000002409ba0, libserver.so)  // inlines: operator uint32
// callers: Host_Say
// globals: g_ChatBanMasks
bool __fastcall CVoiceGameMgr::IsPlayerIgnoringPlayerText(
        CVoiceGameMgr *const this,
        CEntityIndex iTalker,
        CEntityIndex iListener)
{
  return ((1 << (LOBYTE(iTalker.m_Data) - 1)) & g_ChatBanMasks[iListener.m_Data - 1].m_Ints[(iTalker.m_Data - 1) >> 5]) != 0;
}


// CVoiceGameMgr::CountPlayersWithBitSet  (line 279, @0x0000000002409be0, libserver.so)  // inlines: operator uint32
int __fastcall CVoiceGameMgr::CountPlayersWithBitSet(CEntityIndex iTalker, CBitVec<64> (*const bitVecs)[65])
{
  int v2; // ecx
  int v3; // edi
  _DWORD *v4; // rdx
  _DWORD *v5; // rsi
  int result; // eax

  v2 = iTalker.m_Data - 1;
  v3 = 1 << (LOBYTE(iTalker.m_Data) - 1);
  v4 = &(*bitVecs)[0] + (v2 >> 5);
  v5 = v4 + 130;
  result = 0;
  do
  {
    result -= ((v3 & *v4) == 0) - 1;
    v4 += 2;
  }
  while ( v4 != v5 );
  return result;
}


// CVoiceGameMgr::CountPlayersIgnoringPlayerChat  (line 294, @0x0000000002409c30, libserver.so)  // inlines: CountPlayersWithBitSet, operator uint32
// callers: CDOTAGCServerSystem::MatchSignOut
// globals: g_ChatBanMasks
int __fastcall CVoiceGameMgr::CountPlayersIgnoringPlayerChat(CVoiceGameMgr *const this, CEntityIndex iTalker)
{
  int v2; // ecx
  int v3; // esi
  __int64 v4; // rdx
  int result; // eax

  v2 = iTalker.m_Data - 1;
  v3 = 1 << (LOBYTE(iTalker.m_Data) - 1);
  v4 = 0;
  result = 0;
  do
  {
    result -= ((v3 & g_ChatBanMasks[0].m_Ints[(v2 >> 5) + v4]) == 0) - 1;
    v4 += 2;
  }
  while ( v4 != 130 );
  return result;
}


// CVoiceGameMgr::CountPlayersIgnoringPlayerVoice  (line 299, @0x0000000002409c80, libserver.so)  // inlines: CountPlayersWithBitSet, operator uint32
// callers: CDOTAGCServerSystem::MatchSignOut
// globals: g_BanMasks
int __fastcall CVoiceGameMgr::CountPlayersIgnoringPlayerVoice(CVoiceGameMgr *const this, CEntityIndex iTalker)
{
  int v2; // ecx
  int v3; // esi
  __int64 v4; // rdx
  int result; // eax

  v2 = iTalker.m_Data - 1;
  v3 = 1 << (LOBYTE(iTalker.m_Data) - 1);
  v4 = 0;
  result = 0;
  do
  {
    result -= ((v3 & g_BanMasks[0].m_Ints[(v2 >> 5) + v4]) == 0) - 1;
    v4 += 2;
  }
  while ( v4 != 130 );
  return result;
}


// CVoiceGameMgr::SetProximityDistance  (line 304, @0x0000000002409cd0, libserver.so)
void __fastcall CVoiceGameMgr::SetProximityDistance(CVoiceGameMgr *const this, int iDistance)
{
  this->m_iProximityDistance = iDistance;
}


// CVoiceGameMgr::CheckProximity  (line 309, @0x0000000002409ce0, libserver.so)
bool __fastcall CVoiceGameMgr::CheckProximity(CVoiceGameMgr *const this, int iDistance)
{
  return this->m_iProximityDistance >= iDistance;
}


