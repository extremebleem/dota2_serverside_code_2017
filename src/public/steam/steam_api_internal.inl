
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// SteamInternal_OnContextInit  (line 16, @0x0000000002037b70, libserver.so)  // inlines: Clear, Init
// calls: SteamAPI_GetHSteamPipe, SteamAPI_GetHSteamUser, SteamInternal_CreateInterface
// strings: "SteamClient017", "SteamUser019", "SteamFriends015", "SteamUtils008", "SteamMatchMaking009", "SteamMatchMakingServers002" (21 total)
void __fastcall SteamInternal_OnContextInit(void *p)
{
  unsigned int HSteamUser; // r13d
  unsigned int HSteamPipe; // r12d
  __int64 Interface; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax

  *p = 0;
  *(p + 1) = 0;
  *(p + 2) = 0;
  *(p + 3) = 0;
  *(p + 4) = 0;
  *(p + 5) = 0;
  *(p + 6) = 0;
  *(p + 7) = 0;
  *(p + 8) = 0;
  *(p + 9) = 0;
  *(p + 11) = 0;
  *(p + 10) = 0;
  *(p + 16) = 0;
  *(p + 12) = 0;
  *(p + 13) = 0;
  *(p + 14) = 0;
  *(p + 15) = 0;
  *(p + 17) = 0;
  *(p + 18) = 0;
  *(p + 19) = 0;
  if ( SteamAPI_GetHSteamPipe() != 0 )
  {
    HSteamUser = SteamAPI_GetHSteamUser();
    HSteamPipe = SteamAPI_GetHSteamPipe();
    if ( HSteamPipe != 0 )
    {
      Interface = SteamInternal_CreateInterface("SteamClient017");
      *p = Interface;
      if ( Interface != 0 )
      {
        v5 = (*(*Interface + 40LL))(Interface, HSteamUser, HSteamPipe, "SteamUser019");
        *(p + 1) = v5;
        if ( v5 != 0 )
        {
          v6 = (*(**p + 64LL))(*p, HSteamUser, HSteamPipe, "SteamFriends015");
          *(p + 2) = v6;
          if ( v6 != 0 )
          {
            v7 = (*(**p + 72LL))(*p, HSteamPipe, "SteamUtils008");
            *(p + 3) = v7;
            if ( v7 != 0 )
            {
              v8 = (*(**p + 80LL))(*p, HSteamUser, HSteamPipe, "SteamMatchMaking009");
              *(p + 4) = v8;
              if ( v8 != 0 )
              {
                v9 = (*(**p + 88LL))(*p, HSteamUser, HSteamPipe, "SteamMatchMakingServers002");
                *(p + 7) = v9;
                if ( v9 != 0 )
                {
                  v10 = (*(**p + 104LL))(*p, HSteamUser, HSteamPipe, "STEAMUSERSTATS_INTERFACE_VERSION011");
                  *(p + 5) = v10;
                  if ( v10 != 0 )
                  {
                    v11 = (*(**p + 120LL))(*p, HSteamUser, HSteamPipe, "STEAMAPPS_INTERFACE_VERSION008");
                    *(p + 6) = v11;
                    if ( v11 != 0 )
                    {
                      v12 = (*(**p + 128LL))(*p, HSteamUser, HSteamPipe, "SteamNetworking005");
                      *(p + 8) = v12;
                      if ( v12 != 0 )
                      {
                        v13 = (*(**p + 136LL))(*p, HSteamUser, HSteamPipe, "STEAMREMOTESTORAGE_INTERFACE_VERSION014");
                        *(p + 9) = v13;
                        if ( v13 != 0 )
                        {
                          v14 = (*(**p + 144LL))(*p, HSteamUser, HSteamPipe, "STEAMSCREENSHOTS_INTERFACE_VERSION003");
                          *(p + 10) = v14;
                          if ( v14 != 0 )
                          {
                            v15 = (*(**p + 184LL))(*p, HSteamUser, HSteamPipe, "STEAMHTTP_INTERFACE_VERSION002");
                            *(p + 11) = v15;
                            if ( v15 != 0 )
                            {
                              v16 = (*(**p + 192LL))(
                                      *p,
                                      HSteamUser,
                                      HSteamPipe,
                                      "STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001");
                              *(p + 12) = v16;
                              if ( v16 != 0 )
                              {
                                v17 = (*(**p + 200LL))(*p, HSteamUser, HSteamPipe, "SteamController005");
                                *(p + 13) = v17;
                                if ( v17 != 0 )
                                {
                                  v18 = (*(**p + 208LL))(*p, HSteamUser, HSteamPipe, "STEAMUGC_INTERFACE_VERSION009");
                                  *(p + 14) = v18;
                                  if ( v18 != 0 )
                                  {
                                    v19 = (*(**p + 216LL))(
                                            *p,
                                            HSteamUser,
                                            HSteamPipe,
                                            "STEAMAPPLIST_INTERFACE_VERSION001");
                                    *(p + 15) = v19;
                                    if ( v19 != 0 )
                                    {
                                      v20 = (*(**p + 224LL))(
                                              *p,
                                              HSteamUser,
                                              HSteamPipe,
                                              "STEAMMUSIC_INTERFACE_VERSION001");
                                      *(p + 16) = v20;
                                      if ( v20 != 0 )
                                      {
                                        v21 = (*(**p + 232LL))(
                                                *p,
                                                HSteamUser,
                                                HSteamPipe,
                                                "STEAMMUSICREMOTE_INTERFACE_VERSION001");
                                        *(p + 17) = v21;
                                        if ( v21 != 0 )
                                        {
                                          v22 = (*(**p + 240LL))(
                                                  *p,
                                                  HSteamUser,
                                                  HSteamPipe,
                                                  "STEAMHTMLSURFACE_INTERFACE_VERSION_003");
                                          *(p + 18) = v22;
                                          if ( v22 != 0 )
                                          {
                                            v23 = (*(**p + 272LL))(
                                                    *p,
                                                    HSteamUser,
                                                    HSteamPipe,
                                                    "STEAMINVENTORY_INTERFACE_V001");
                                            *(p + 19) = v23;
                                            if ( v23 != 0 )
                                              *(p + 20) = (*(**p + 280LL))(
                                                            *p,
                                                            HSteamUser,
                                                            HSteamPipe,
                                                            "STEAMVIDEO_INTERFACE_V001");
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionClosed_t>::Run  (line 253, @0x0000000002037af0, libserver.so)
void __fastcall CCallResult<CSteamWorksGameStatsUploader,GameStatsSessionClosed_t>::Run(
        CCallResult<CSteamWorksGameStatsUploader,GameStatsSessionClosed_t> *const this,
        void *pvParam)
{
  void (*pfn)(CSteamWorksGameStatsUploader *, GameStatsSessionClosed_t *, bool); // rdx
  _QWORD *v3; // rdi
  void (__fastcall *v4)(_QWORD *, void *, _QWORD); // rax

  pfn = this->m_Func.__pfn;
  this->m_hAPICall = 0;
  v3 = (&this->m_pObj->_vptr_IGameSystem + this->m_Func.__delta);
  v4 = pfn;
  if ( (pfn & 1) != 0 )
    v4 = *(pfn + *v3 - 1);
  v4(v3, pvParam, 0);
}


// CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionIssued_t>::Run  (line 253, @0x0000000002037b30, libserver.so)
void __fastcall CCallResult<CSteamWorksGameStatsUploader,GameStatsSessionIssued_t>::Run(
        CCallResult<CSteamWorksGameStatsUploader,GameStatsSessionIssued_t> *const this,
        void *pvParam)
{
  void (*pfn)(CSteamWorksGameStatsUploader *, GameStatsSessionIssued_t *, bool); // rdx
  _QWORD *v3; // rdi
  void (__fastcall *v4)(_QWORD *, void *, _QWORD); // rax

  pfn = this->m_Func.__pfn;
  this->m_hAPICall = 0;
  v3 = (&this->m_pObj->_vptr_IGameSystem + this->m_Func.__delta);
  v4 = pfn;
  if ( (pfn & 1) != 0 )
    v4 = *(pfn + *v3 - 1);
  v4(v3, pvParam, 0);
}


// CCallResult<CDotaStatManager::CPlayerStatState, GSStatsStored_t>::Run  (line 253, @0x00000000027294e0, libserver.so)
void __fastcall CCallResult<CDotaStatManager::CPlayerStatState,GSStatsStored_t>::Run(
        CCallResult<CDotaStatManager::CPlayerStatState,GSStatsStored_t> *const this,
        void *pvParam)
{
  void (*pfn)(CDotaStatManager::CPlayerStatState *, GSStatsStored_t *, bool); // rdx
  _QWORD *v3; // rdi
  void (__fastcall *v4)(_QWORD *, void *, _QWORD); // rax

  pfn = this->m_Func.__pfn;
  this->m_hAPICall = 0;
  v3 = (&this->m_pObj->_vptr_CBasePlayerStatState + this->m_Func.__delta);
  v4 = pfn;
  if ( (pfn & 1) != 0 )
    v4 = *(pfn + *v3 - 1);
  v4(v3, pvParam, 0);
}


// CCallResult<CDotaStatManager::CPlayerStatState, GSStatsReceived_t>::Run  (line 253, @0x0000000002729520, libserver.so)
void __fastcall CCallResult<CDotaStatManager::CPlayerStatState,GSStatsReceived_t>::Run(
        CCallResult<CDotaStatManager::CPlayerStatState,GSStatsReceived_t> *const this,
        void *pvParam)
{
  void (*pfn)(CDotaStatManager::CPlayerStatState *, GSStatsReceived_t *, bool); // rdx
  _QWORD *v3; // rdi
  void (__fastcall *v4)(_QWORD *, void *, _QWORD); // rax

  pfn = this->m_Func.__pfn;
  this->m_hAPICall = 0;
  v3 = (&this->m_pObj->_vptr_CBasePlayerStatState + this->m_Func.__delta);
  v4 = pfn;
  if ( (pfn & 1) != 0 )
    v4 = *(pfn + *v3 - 1);
  v4(v3, pvParam, 0);
}


// CCallResult<CScriptHTTPRequest, HTTPRequestCompleted_t>::Run  (line 253, @0x00000000027cecf0, libserver.so)
void __fastcall CCallResult<CScriptHTTPRequest,HTTPRequestCompleted_t>::Run(
        CCallResult<CScriptHTTPRequest,HTTPRequestCompleted_t> *const this,
        void *pvParam)
{
  void (*pfn)(CScriptHTTPRequest *, HTTPRequestCompleted_t *, bool); // rdx
  _QWORD *v3; // rdi
  void (__fastcall *v4)(_QWORD *, void *, _QWORD); // rax

  pfn = this->m_Func.__pfn;
  this->m_hAPICall = 0;
  v3 = (&this->m_pObj->m_hInstance + this->m_Func.__delta);
  v4 = pfn;
  if ( (pfn & 1) != 0 )
    v4 = *(pfn + *v3 - 1);
  v4(v3, pvParam, 0);
}


// CCallResult<CDOTA_TeamCommander, SteamUGCQueryCompleted_t>::Run  (line 253, @0x00000000028121e0, libserver.so)
void __fastcall CCallResult<CDOTA_TeamCommander,SteamUGCQueryCompleted_t>::Run(
        CCallResult<CDOTA_TeamCommander,SteamUGCQueryCompleted_t> *const this,
        void *pvParam)
{
  void (*pfn)(CDOTA_TeamCommander *, SteamUGCQueryCompleted_t *, bool); // rdx
  _QWORD *v3; // rdi
  void (__fastcall *v4)(_QWORD *, void *, _QWORD); // rax

  pfn = this->m_Func.__pfn;
  this->m_hAPICall = 0;
  v3 = (&this->m_pObj->_vptr_CDOTA_TeamCommander + this->m_Func.__delta);
  v4 = pfn;
  if ( (pfn & 1) != 0 )
    v4 = *(pfn + *v3 - 1);
  v4(v3, pvParam, 0);
}


// CCallResult<CJobCallResult<SteamUGCQueryCompleted_t>, SteamUGCQueryCompleted_t>::Run  (line 253, @0x00000000029a7da0, libserver.so)
void __fastcall CCallResult<CJobCallResult<SteamUGCQueryCompleted_t>,SteamUGCQueryCompleted_t>::Run(
        CCallResult<CJobCallResult<SteamUGCQueryCompleted_t>,SteamUGCQueryCompleted_t> *const this,
        void *pvParam)
{
  void (*pfn)(CJobCallResult<SteamUGCQueryCompleted_t> *, SteamUGCQueryCompleted_t *, bool); // rdx
  bool *v3; // rdi
  void (__fastcall *v4)(bool *, void *, _QWORD); // rax

  pfn = this->m_Func.__pfn;
  this->m_hAPICall = 0;
  v3 = &this->m_pObj->m_bFinished + this->m_Func.__delta;
  v4 = pfn;
  if ( (pfn & 1) != 0 )
    v4 = *(pfn + *v3 - 1);
  v4(v3, pvParam, 0);
}


// CCallResult<CGCUpdateItemSchema, HTTPRequestCompleted_t>::Run  (line 253, @0x0000000002ea2460, libserver.so)
void __fastcall CCallResult<CGCUpdateItemSchema,HTTPRequestCompleted_t>::Run(
        CCallResult<CGCUpdateItemSchema,HTTPRequestCompleted_t> *const this,
        void *pvParam)
{
  void (*pfn)(CGCUpdateItemSchema *, HTTPRequestCompleted_t *, bool); // rdx
  _QWORD *v3; // rdi
  void (__fastcall *v4)(_QWORD *, void *, _QWORD); // rax

  pfn = this->m_Func.__pfn;
  this->m_hAPICall = 0;
  v3 = (&this->m_pObj->_vptr_CJob + this->m_Func.__delta);
  v4 = pfn;
  if ( (pfn & 1) != 0 )
    v4 = *(pfn + *v3 - 1);
  v4(v3, pvParam, 0);
}


// CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionClosed_t>::Run  (line 260, @0x0000000002037f50, libserver.so)
void __fastcall CCallResult<CSteamWorksGameStatsUploader,GameStatsSessionClosed_t>::Run(
        CCallResult<CSteamWorksGameStatsUploader,GameStatsSessionClosed_t> *const this,
        void *pvParam,
        bool bIOFailure,
        SteamAPICall_t hSteamAPICall)
{
  void (*pfn)(CSteamWorksGameStatsUploader *, GameStatsSessionClosed_t *, bool); // rcx

  if ( this->m_hAPICall == hSteamAPICall )
  {
    pfn = this->m_Func.__pfn;
    this->m_hAPICall = 0;
    if ( (pfn & 1) != 0 )
      (*(*(&this->m_pObj->_vptr_IGameSystem + this->m_Func.__delta) + pfn - 1))(
        this->m_pObj + this->m_Func.__delta,
        pvParam,
        bIOFailure);
    else
      pfn((this->m_pObj + this->m_Func.__delta), pvParam, bIOFailure);
  }
}


// CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionIssued_t>::Run  (line 260, @0x0000000002037fa0, libserver.so)
void __fastcall CCallResult<CSteamWorksGameStatsUploader,GameStatsSessionIssued_t>::Run(
        CCallResult<CSteamWorksGameStatsUploader,GameStatsSessionIssued_t> *const this,
        void *pvParam,
        bool bIOFailure,
        SteamAPICall_t hSteamAPICall)
{
  void (*pfn)(CSteamWorksGameStatsUploader *, GameStatsSessionIssued_t *, bool); // rcx

  if ( this->m_hAPICall == hSteamAPICall )
  {
    pfn = this->m_Func.__pfn;
    this->m_hAPICall = 0;
    if ( (pfn & 1) != 0 )
      (*(*(&this->m_pObj->_vptr_IGameSystem + this->m_Func.__delta) + pfn - 1))(
        this->m_pObj + this->m_Func.__delta,
        pvParam,
        bIOFailure);
    else
      pfn((this->m_pObj + this->m_Func.__delta), pvParam, bIOFailure);
  }
}


// CCallResult<CDotaStatManager::CPlayerStatState, GSStatsStored_t>::Run  (line 260, @0x0000000002743cc0, libserver.so)
void __fastcall CCallResult<CDotaStatManager::CPlayerStatState,GSStatsStored_t>::Run(
        CCallResult<CDotaStatManager::CPlayerStatState,GSStatsStored_t> *const this,
        void *pvParam,
        bool bIOFailure,
        SteamAPICall_t hSteamAPICall)
{
  void (*pfn)(CDotaStatManager::CPlayerStatState *, GSStatsStored_t *, bool); // rcx

  if ( this->m_hAPICall == hSteamAPICall )
  {
    pfn = this->m_Func.__pfn;
    this->m_hAPICall = 0;
    if ( (pfn & 1) != 0 )
      (*(*(&this->m_pObj->_vptr_CBasePlayerStatState + this->m_Func.__delta) + pfn - 1))(
        this->m_pObj + this->m_Func.__delta,
        pvParam,
        bIOFailure);
    else
      pfn((this->m_pObj + this->m_Func.__delta), pvParam, bIOFailure);
  }
}


// CCallResult<CDotaStatManager::CPlayerStatState, GSStatsReceived_t>::Run  (line 260, @0x0000000002743d10, libserver.so)
void __fastcall CCallResult<CDotaStatManager::CPlayerStatState,GSStatsReceived_t>::Run(
        CCallResult<CDotaStatManager::CPlayerStatState,GSStatsReceived_t> *const this,
        void *pvParam,
        bool bIOFailure,
        SteamAPICall_t hSteamAPICall)
{
  void (*pfn)(CDotaStatManager::CPlayerStatState *, GSStatsReceived_t *, bool); // rcx

  if ( this->m_hAPICall == hSteamAPICall )
  {
    pfn = this->m_Func.__pfn;
    this->m_hAPICall = 0;
    if ( (pfn & 1) != 0 )
      (*(*(&this->m_pObj->_vptr_CBasePlayerStatState + this->m_Func.__delta) + pfn - 1))(
        this->m_pObj + this->m_Func.__delta,
        pvParam,
        bIOFailure);
    else
      pfn((this->m_pObj + this->m_Func.__delta), pvParam, bIOFailure);
  }
}


// CCallResult<CScriptHTTPRequest, HTTPRequestCompleted_t>::Run  (line 260, @0x00000000027d0910, libserver.so)
void __fastcall CCallResult<CScriptHTTPRequest,HTTPRequestCompleted_t>::Run(
        CCallResult<CScriptHTTPRequest,HTTPRequestCompleted_t> *const this,
        void *pvParam,
        bool bIOFailure,
        SteamAPICall_t hSteamAPICall)
{
  void (*pfn)(CScriptHTTPRequest *, HTTPRequestCompleted_t *, bool); // rcx

  if ( this->m_hAPICall == hSteamAPICall )
  {
    pfn = this->m_Func.__pfn;
    this->m_hAPICall = 0;
    if ( (pfn & 1) != 0 )
      (*(*(&this->m_pObj->m_hInstance + this->m_Func.__delta) + pfn - 1))(
        this->m_pObj + this->m_Func.__delta,
        pvParam,
        bIOFailure);
    else
      pfn((this->m_pObj + this->m_Func.__delta), pvParam, bIOFailure);
  }
}


// CCallResult<CDOTA_TeamCommander, SteamUGCQueryCompleted_t>::Run  (line 260, @0x0000000002812650, libserver.so)
void __fastcall CCallResult<CDOTA_TeamCommander,SteamUGCQueryCompleted_t>::Run(
        CCallResult<CDOTA_TeamCommander,SteamUGCQueryCompleted_t> *const this,
        void *pvParam,
        bool bIOFailure,
        SteamAPICall_t hSteamAPICall)
{
  void (*pfn)(CDOTA_TeamCommander *, SteamUGCQueryCompleted_t *, bool); // rcx

  if ( this->m_hAPICall == hSteamAPICall )
  {
    pfn = this->m_Func.__pfn;
    this->m_hAPICall = 0;
    if ( (pfn & 1) != 0 )
      (*(*(&this->m_pObj->_vptr_CDOTA_TeamCommander + this->m_Func.__delta) + pfn - 1))(
        this->m_pObj + this->m_Func.__delta,
        pvParam,
        bIOFailure);
    else
      pfn((this->m_pObj + this->m_Func.__delta), pvParam, bIOFailure);
  }
}


// CCallResult<CJobCallResult<SteamUGCQueryCompleted_t>, SteamUGCQueryCompleted_t>::Run  (line 260, @0x00000000029a9ef0, libserver.so)
void __fastcall CCallResult<CJobCallResult<SteamUGCQueryCompleted_t>,SteamUGCQueryCompleted_t>::Run(
        CCallResult<CJobCallResult<SteamUGCQueryCompleted_t>,SteamUGCQueryCompleted_t> *const this,
        void *pvParam,
        bool bIOFailure,
        SteamAPICall_t hSteamAPICall)
{
  void (*pfn)(CJobCallResult<SteamUGCQueryCompleted_t> *, SteamUGCQueryCompleted_t *, bool); // rcx

  if ( this->m_hAPICall == hSteamAPICall )
  {
    pfn = this->m_Func.__pfn;
    this->m_hAPICall = 0;
    if ( (pfn & 1) != 0 )
      (*(pfn + *(&this->m_pObj->m_bFinished + this->m_Func.__delta) - 1))(
        &this->m_pObj->m_bFinished + this->m_Func.__delta,
        pvParam,
        bIOFailure);
    else
      pfn((this->m_pObj + this->m_Func.__delta), pvParam, bIOFailure);
  }
}


// CCallResult<CGCUpdateItemSchema, HTTPRequestCompleted_t>::Run  (line 260, @0x0000000002ea4040, libserver.so)
void __fastcall CCallResult<CGCUpdateItemSchema,HTTPRequestCompleted_t>::Run(
        CCallResult<CGCUpdateItemSchema,HTTPRequestCompleted_t> *const this,
        void *pvParam,
        bool bIOFailure,
        SteamAPICall_t hSteamAPICall)
{
  void (*pfn)(CGCUpdateItemSchema *, HTTPRequestCompleted_t *, bool); // rcx

  if ( this->m_hAPICall == hSteamAPICall )
  {
    pfn = this->m_Func.__pfn;
    this->m_hAPICall = 0;
    if ( (pfn & 1) != 0 )
      (*(*(&this->m_pObj->_vptr_CJob + this->m_Func.__delta) + pfn - 1))(
        this->m_pObj + this->m_Func.__delta,
        pvParam,
        bIOFailure);
    else
      pfn((this->m_pObj + this->m_Func.__delta), pvParam, bIOFailure);
  }
}


// CCallback<CPlayerAchievementState, GSStatsStored_t, false>::Run  (line 309, @0x0000000001eb3240, libserver.so)
void __fastcall CCallback<CPlayerAchievementState,GSStatsStored_t,false>::Run(
        CCallback<CPlayerAchievementState,GSStatsStored_t,false> *const this,
        void *pvParam)
{
  void (*pfn)(CPlayerAchievementState *, GSStatsStored_t *); // rdx

  pfn = this->m_Func.__pfn;
  if ( (pfn & 1) != 0 )
    pfn = *(*(&this->m_pObj->m_mapAchievement.m_Tree.m_LessFunc.m_LessFunc + this->m_Func.__delta) + pfn - 1);
  pfn((this->m_pObj + this->m_Func.__delta), pvParam);
}


// CCallback<CPlayerAchievementState, GSStatsReceived_t, false>::Run  (line 309, @0x0000000001eb3290, libserver.so)
void __fastcall CCallback<CPlayerAchievementState,GSStatsReceived_t,false>::Run(
        CCallback<CPlayerAchievementState,GSStatsReceived_t,false> *const this,
        void *pvParam)
{
  void (*pfn)(CPlayerAchievementState *, GSStatsReceived_t *); // rdx

  pfn = this->m_Func.__pfn;
  if ( (pfn & 1) != 0 )
    pfn = *(*(&this->m_pObj->m_mapAchievement.m_Tree.m_LessFunc.m_LessFunc + this->m_Func.__delta) + pfn - 1);
  pfn((this->m_pObj + this->m_Func.__delta), pvParam);
}


// CCallback<CDOTAGamerules, GSClientDeny_t, true>::Run  (line 309, @0x00000000025549c0, libserver.so)
void __fastcall CCallback<CDOTAGamerules,GSClientDeny_t,true>::Run(
        CCallback<CDOTAGamerules,GSClientDeny_t,true> *const this,
        void *pvParam)
{
  void (*pfn)(CDOTAGamerules *, GSClientDeny_t *); // rdx

  pfn = this->m_Func.__pfn;
  if ( (pfn & 1) != 0 )
    pfn = *(*(&this->m_pObj->_vptr_CGameRules + this->m_Func.__delta) + pfn - 1);
  pfn((this->m_pObj + this->m_Func.__delta), pvParam);
}


// CCallback<CDOTAGamerules, GSClientKick_t, true>::Run  (line 309, @0x0000000002554a10, libserver.so)
void __fastcall CCallback<CDOTAGamerules,GSClientKick_t,true>::Run(
        CCallback<CDOTAGamerules,GSClientKick_t,true> *const this,
        void *pvParam)
{
  void (*pfn)(CDOTAGamerules *, GSClientKick_t *); // rdx

  pfn = this->m_Func.__pfn;
  if ( (pfn & 1) != 0 )
    pfn = *(*(&this->m_pObj->_vptr_CGameRules + this->m_Func.__delta) + pfn - 1);
  pfn((this->m_pObj + this->m_Func.__delta), pvParam);
}


// CCallback<CDOTA_OGS, GSClientDeny_t, true>::Run  (line 309, @0x000000000262c230, libserver.so)
void __fastcall CCallback<CDOTA_OGS,GSClientDeny_t,true>::Run(
        CCallback<CDOTA_OGS,GSClientDeny_t,true> *const this,
        void *pvParam)
{
  void (*pfn)(CDOTA_OGS *, GSClientDeny_t *); // rdx

  pfn = this->m_Func.__pfn;
  if ( (pfn & 1) != 0 )
    pfn = *(*(&this->m_pObj->m_CallbackGSClientKick._vptr_CCallbackBase + this->m_Func.__delta) + pfn - 1);
  pfn((this->m_pObj + this->m_Func.__delta), pvParam);
}


// CCallback<CDOTA_OGS, GSClientKick_t, true>::Run  (line 309, @0x000000000262c260, libserver.so)
void __fastcall CCallback<CDOTA_OGS,GSClientKick_t,true>::Run(
        CCallback<CDOTA_OGS,GSClientKick_t,true> *const this,
        void *pvParam)
{
  void (*pfn)(CDOTA_OGS *, GSClientKick_t *); // rdx

  pfn = this->m_Func.__pfn;
  if ( (pfn & 1) != 0 )
    pfn = *(*(&this->m_pObj->m_CallbackGSClientKick._vptr_CCallbackBase + this->m_Func.__delta) + pfn - 1);
  pfn((this->m_pObj + this->m_Func.__delta), pvParam);
}


// CCallback<CDotaStatManager::CPlayerStatState, GSStatsUnloaded_t, true>::Run  (line 309, @0x0000000002729490, libserver.so)
void __fastcall CCallback<CDotaStatManager::CPlayerStatState,GSStatsUnloaded_t,true>::Run(
        CCallback<CDotaStatManager::CPlayerStatState,GSStatsUnloaded_t,true> *const this,
        void *pvParam)
{
  void (*pfn)(CDotaStatManager::CPlayerStatState *, GSStatsUnloaded_t *); // rdx

  pfn = this->m_Func.__pfn;
  if ( (pfn & 1) != 0 )
    pfn = *(*(&this->m_pObj->_vptr_CBasePlayerStatState + this->m_Func.__delta) + pfn - 1);
  pfn((this->m_pObj + this->m_Func.__delta), pvParam);
}


// CCallback<CInstallUGCJob, DownloadItemResult_t, true>::Run  (line 309, @0x00000000029a7de0, libserver.so)
void __fastcall CCallback<CInstallUGCJob,DownloadItemResult_t,true>::Run(
        CCallback<CInstallUGCJob,DownloadItemResult_t,true> *const this,
        void *pvParam)
{
  void (*pfn)(CInstallUGCJob *, DownloadItemResult_t *); // rdx

  pfn = this->m_Func.__pfn;
  if ( (pfn & 1) != 0 )
    pfn = *(pfn + *(this->m_pObj + this->m_Func.__delta) - 1);
  pfn((this->m_pObj + this->m_Func.__delta), pvParam);
}


// CCallback<CGCClientSystem, SteamServersConnected_t, true>::Run  (line 309, @0x0000000002ea2b50, libserver.so)
void __fastcall CCallback<CGCClientSystem,SteamServersConnected_t,true>::Run(
        CCallback<CGCClientSystem,SteamServersConnected_t,true> *const this,
        void *pvParam)
{
  void (*pfn)(CGCClientSystem *, SteamServersConnected_t *); // rdx

  pfn = this->m_Func.__pfn;
  if ( (pfn & 1) != 0 )
    pfn = *(pfn + *(this->m_pObj + this->m_Func.__delta) - 1);
  pfn((this->m_pObj + this->m_Func.__delta), pvParam);
}


// CCallback<GCSDK::CGCClient, SteamServersConnected_t, false>::Run  (line 309, @0x0000000003217540, libserver.so)
void __fastcall CCallback<GCSDK::CGCClient,SteamServersConnected_t,false>::Run(
        CCallback<GCSDK::CGCClient,SteamServersConnected_t,false> *const this,
        void *pvParam)
{
  void (*pfn)(GCSDK::CGCClient *, SteamServersConnected_t *); // rdx

  pfn = this->m_Func.__pfn;
  if ( (pfn & 1) != 0 )
    pfn = *(pfn + *(this->m_pObj + this->m_Func.__delta) - 1);
  pfn((this->m_pObj + this->m_Func.__delta), pvParam);
}


// CCallback<GCSDK::CGCClient, SteamServerConnectFailure_t, false>::Run  (line 309, @0x0000000003217570, libserver.so)
void __fastcall CCallback<GCSDK::CGCClient,SteamServerConnectFailure_t,false>::Run(
        CCallback<GCSDK::CGCClient,SteamServerConnectFailure_t,false> *const this,
        void *pvParam)
{
  void (*pfn)(GCSDK::CGCClient *, SteamServerConnectFailure_t *); // rdx

  pfn = this->m_Func.__pfn;
  if ( (pfn & 1) != 0 )
    pfn = *(pfn + *(this->m_pObj + this->m_Func.__delta) - 1);
  pfn((this->m_pObj + this->m_Func.__delta), pvParam);
}


// CCallback<GCSDK::CGCClient, SteamServersDisconnected_t, false>::Run  (line 309, @0x00000000032175a0, libserver.so)
void __fastcall CCallback<GCSDK::CGCClient,SteamServersDisconnected_t,false>::Run(
        CCallback<GCSDK::CGCClient,SteamServersDisconnected_t,false> *const this,
        void *pvParam)
{
  void (*pfn)(GCSDK::CGCClient *, SteamServersDisconnected_t *); // rdx

  pfn = this->m_Func.__pfn;
  if ( (pfn & 1) != 0 )
    pfn = *(pfn + *(this->m_pObj + this->m_Func.__delta) - 1);
  pfn((this->m_pObj + this->m_Func.__delta), pvParam);
}


// CCallback<GCSDK::CGCClient, GCMessageAvailable_t, false>::Run  (line 309, @0x00000000032175f0, libserver.so)
void __fastcall CCallback<GCSDK::CGCClient,GCMessageAvailable_t,false>::Run(
        CCallback<GCSDK::CGCClient,GCMessageAvailable_t,false> *const this,
        void *pvParam)
{
  void (*pfn)(GCSDK::CGCClient *, GCMessageAvailable_t *); // rdx

  pfn = this->m_Func.__pfn;
  if ( (pfn & 1) != 0 )
    pfn = *(pfn + *(this->m_pObj + this->m_Func.__delta) - 1);
  pfn((this->m_pObj + this->m_Func.__delta), pvParam);
}


