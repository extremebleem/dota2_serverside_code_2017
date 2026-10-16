// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_playermove.cpp:32
class CDOTAPlayerMove : public CPlayerMove {
public:

	CDOTAPlayerMove(CDOTAPlayerMove &);
	CDOTAPlayerMove(const CDOTAPlayerMove &);
	CDOTAPlayerMove();
	virtual void StartCommand(CBasePlayer *, CUserCmd *);
	virtual void SetupMove(CBasePlayer *, CUserCmd *, IMoveHelper *, CMoveData *);
	virtual void FinishMove(CBasePlayer *, CUserCmd *, CMoveData *);
	virtual void RunCommand(CBasePlayer *, CUserCmd *, IMoveHelper *);
	virtual ~CDOTAPlayerMove();

	// vtable[5] StartCommand
	// vtable[3] SetupMove
	// vtable[4] FinishMove
	// vtable[2] RunCommand
	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAPlayerMove::~CDOTAPlayerMove  (line 32, @0x000000000269d8d0, libserver.so)  // inlines: ~CPlayerMove
void __fastcall CDOTAPlayerMove::~CDOTAPlayerMove(CDOTAPlayerMove *const this)
{
  this->_vptr_CPlayerMove = off_408A030;  // vptr: CPlayerMove
}


// CDOTAPlayerMove::~CDOTAPlayerMove  (line 32, @0x000000000269f3b0, libserver.so)  // inlines: ~CDOTAPlayerMove, ~CPlayerMove
// calls: operator delete
void __fastcall CDOTAPlayerMove::~CDOTAPlayerMove(CDOTAPlayerMove *const this)
{
  this->_vptr_CPlayerMove = off_408A030;  // vptr: CPlayerMove
  operator delete(this);
}


// PlayerMove  (line 49, @0x0000000002668ad0, libserver.so)
// callers: CBasePlayer::PlayerRunCommand
// globals: g_PlayerMove
CPlayerMove *__cdecl PlayerMove()
{
  return &g_PlayerMove;
}


// CDOTAPlayerMove::StartCommand  (line 58, @0x0000000002654470, libserver.so)
// calls: CPlayerMove::StartCommand
void __fastcall CDOTAPlayerMove::StartCommand(CDOTAPlayerMove *const this, CBasePlayer *player, CUserCmd *cmd)
{
  CPlayerMove::StartCommand(this, player, cmd);
}


// CDOTAPlayerMove::SetupMove  (line 68, @0x0000000002654480, libserver.so)
// calls: CPlayerMove::SetupMove
void __fastcall CDOTAPlayerMove::SetupMove(
        CDOTAPlayerMove *const this,
        CBasePlayer *player,
        CUserCmd *ucmd,
        IMoveHelper *pHelper,
        CMoveData *move)
{
  CPlayerMove::SetupMove(this, player, ucmd, pHelper, move);
}


// CDOTAPlayerMove::FinishMove  (line 80, @0x0000000002654490, libserver.so)
// calls: CPlayerMove::FinishMove
void __fastcall CDOTAPlayerMove::FinishMove(
        CDOTAPlayerMove *const this,
        CBasePlayer *player,
        CUserCmd *ucmd,
        CMoveData *move)
{
  CPlayerMove::FinishMove(this, player, ucmd, move);
}


// CDOTAPlayerMove::RunCommand  (line 93, @0x0000000002658630, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetSpawnGroupHandle, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetAbsOrigin, SetCrosshairEntity, SetCrosshairTracePos, operator!=, operator+, operator++, operator+=<int>, operator=, operator=<unsigned char>
// calls: CBasePlayer::UpdateButtonState, CPlayerMove::CheckMovingGround, CPlayerMove::RunPreThink, CPlayerMove::RunThink, UTIL_TraceRayVerticalGroundHeight, memcmp, CPlayerMove::RunPostThink, CPlayerMove::FinishCommand, UTIL_EntityByIndex, _Unwind_Resume
// globals: g_pMoveData, CEntityHandle::gm_pEntityList
void __fastcall CDOTAPlayerMove::RunCommand(
        CDOTAPlayerMove *const this,
        CBasePlayer *player,
        CUserCmd *ucmd,
        IMoveHelper *moveHelper)
{
  float interval_per_tick; // xmm0_4
  IGameMovement *v9; // rdi
  ButtonBitMask_t v10; // rdx
  int impulse; // eax
  double v12; // xmm1_8
  int fixangle; // eax
  float x; // xmm0_4
  CMoveData *v15; // rax
  double v16; // xmm1_8
  bool v17; // zf
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // edi
  float v20; // xmm0_4
  CMoveData *v21; // rax
  int weaponsubtype; // edi
  float v23; // eax
  CBaseEntity *m_pInstance; // rcx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CEntityIdentity *v27; // rdx
  int v28; // eax
  __int16 v29; // cx
  unsigned int v30; // r12d
  vec_t v31; // xmm2_4
  vec_t v32; // xmm1_4
  float v33; // [rsp+4h] [rbp-4Ch]
  float v34; // [rsp+8h] [rbp-48h]
  int clickbehavior; // [rsp+8h] [rbp-48h]
  float v36; // [rsp+8h] [rbp-48h]
  float v37; // [rsp+8h] [rbp-48h]
  int stats_dropdown; // [rsp+8h] [rbp-48h]
  int stats_dropdown_sort; // [rsp+8h] [rbp-48h]
  CBaseEntity *v40; // [rsp+8h] [rbp-48h]
  _DWORD s2[13]; // [rsp+1Ch] [rbp-34h] BYREF

  (*(this->_vptr_CPlayerMove + 5))(this);
  interval_per_tick = 0.0;
  if ( !player->m_bGamePaused )
    interval_per_tick = gpGlobals->interval_per_tick;
  gpGlobals->frametime = interval_per_tick;
  v9 = g_pGameMovement;
  v10 = ucmd->buttons | player->m_afButtonForced;
  ucmd->buttons = v10;
  ucmd->buttons = v10 & ~player->m_afButtonDisabled;
  (*(v9->_vptr_IGameMovement + 6))(v9, player);
  impulse = ucmd->impulse;
  if ( impulse != 0 )
    player->m_nImpulse = impulse;
  CBasePlayer::UpdateButtonState(player, ucmd->buttons);
  CPlayerMove::CheckMovingGround(this, player, gpGlobals->interval_per_tick, v12);
  fixangle = player->m_pl.fixangle;
  if ( fixangle != 0 )
  {
    if ( fixangle == 2 )
    {
      x = ucmd->viewangles.x + player->m_pl.anglechange.x;
      v31 = ucmd->viewangles.y + player->m_pl.anglechange.y;
      v32 = ucmd->viewangles.z + player->m_pl.anglechange.z;
      player->m_pl.v_angle.x = x;
      player->m_pl.v_angle.y = v31;
      player->m_pl.v_angle.z = v32;
    }
    else
    {
      x = player->m_pl.v_angle.x;
    }
  }
  else
  {
    x = ucmd->viewangles.x;
    player->m_pl.v_angle.x = x;
    player->m_pl.v_angle.y = ucmd->viewangles.y;
    player->m_pl.v_angle.z = ucmd->viewangles.z;
  }
  v15 = g_pMoveData;
  g_pMoveData->m_vecAngles.x = x;
  v15->m_vecAngles.y = player->m_pl.v_angle.y;
  v15->m_vecAngles.z = player->m_pl.v_angle.z;
  CPlayerMove::RunPreThink(this, player);
  CPlayerMove::RunThink(this, player, gpGlobals->interval_per_tick, v16);
  (*(this->_vptr_CPlayerMove + 3))(this, player, ucmd, moveHelper, g_pMoveData);
  v17 = !player->m_pl.hltv;
  HIDWORD(player[1].m_pfnMoveDone.__delta) = LODWORD(ucmd->crosshairtrace.x);
  *&player[1].m_pLink = ucmd->crosshairtrace.y;
  HIDWORD(player[1].m_pLink) = LODWORD(ucmd->crosshairtrace.z);
  player[1].m_iHealth.m_Value = ucmd->weaponselect;
  if ( v17 )
  {
    if ( player->m_MoveType.m_Value == MoveType_t::MOVETYPE_NOCLIP )
    {
      (*(g_pGameMovement->_vptr_IGameMovement + 4))(g_pGameMovement, player, g_pMoveData);
    }
    else
    {
      m_pEntity = player->m_pEntity;
      if ( m_pEntity != 0 )
        m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
      else
        m_hSpawnGroup = 0;
      v33 = ucmd->cameraposition[1];
      v34 = ucmd->cameraposition[0];
      v20 = UTIL_TraceRayVerticalGroundHeight(m_hSpawnGroup, v34, v33, 1000.0, -10000.0, 200.0, v33, 0x7021u);
      v21 = g_pMoveData;
      g_pMoveData->m_vecAbsOrigin.x = v34;
      v21->m_vecAbsOrigin.y = v33;
      v21->m_vecAbsOrigin.z = v20;
    }
    s2[0] = ucmd->mousedx;
    if ( memcmp(&player[1].m_NetworkTransmitComponent.m_pTimerEvent, s2, 4u) != 0 )
    {
      (*(player->_vptr_IHandleEntity + 22))(player, 4568, 0, 0xFFFFFFFFLL);
      LODWORD(player[1].m_NetworkTransmitComponent.m_pTimerEvent) = s2[0];
    }
    s2[0] = ucmd->mousedy;
    if ( memcmp(&player[1].m_NetworkTransmitComponent.m_pTimerEvent + 4, s2, 4u) != 0 )
    {
      (*(player->_vptr_IHandleEntity + 22))(player, 4568, 1, 0xFFFFFFFFLL);
      HIDWORD(player[1].m_NetworkTransmitComponent.m_pTimerEvent) = s2[0];
    }
    clickbehavior = ucmd->clickbehavior;
    if ( clickbehavior != LODWORD(player[1].m_NetworkTransmitComponent.m_PVSInfo.m_pClusters) )
    {
      (*(player->_vptr_IHandleEntity + 22))(player, 4576, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      LODWORD(player[1].m_NetworkTransmitComponent.m_PVSInfo.m_pClusters) = clickbehavior;
    }
    LODWORD(v36) = ucmd->statspanel;
    if ( LODWORD(v36) != LODWORD(player[1].m_NetworkTransmitComponent.m_PVSInfo.m_vCenter[1]) )
    {
      (*(player->_vptr_IHandleEntity + 22))(player, 4588, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      player[1].m_NetworkTransmitComponent.m_PVSInfo.m_vCenter[1] = v36;
    }
    LODWORD(v37) = ucmd->shoppanel;
    if ( LODWORD(v37) != LODWORD(player[1].m_NetworkTransmitComponent.m_PVSInfo.m_vCenter[2]) )
    {
      (*(player->_vptr_IHandleEntity + 22))(player, 4592, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      player[1].m_NetworkTransmitComponent.m_PVSInfo.m_vCenter[2] = v37;
    }
    stats_dropdown = ucmd->stats_dropdown;
    if ( stats_dropdown != *&player[1].m_NetworkTransmitComponent.m_PVSInfo.m_nAreaNum )
    {
      (*(player->_vptr_IHandleEntity + 22))(player, 4600, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *&player[1].m_NetworkTransmitComponent.m_PVSInfo.m_nAreaNum = stats_dropdown;
    }
    stats_dropdown_sort = ucmd->stats_dropdown_sort;
    if ( stats_dropdown_sort != *player[1].m_NetworkTransmitComponent.m_PVSInfo.m_pClustersInline )
    {
      (*(player->_vptr_IHandleEntity + 22))(player, 4604, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *player[1].m_NetworkTransmitComponent.m_PVSInfo.m_pClustersInline = stats_dropdown_sort;
    }
    weaponsubtype = ucmd->weaponsubtype;
    if ( weaponsubtype != 0 )
      v40 = UTIL_EntityByIndex(weaponsubtype);
    else
      v40 = 0;
    v23 = player[1].m_NetworkTransmitComponent.m_PVSInfo.m_vCenter[0];
    m_pInstance = 0;
    if ( (LODWORD(v23) + 2) > 1 )
    {
      v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(player[1].m_NetworkTransmitComponent.m_PVSInfo.m_vCenter[0]) >> 9)
                                                           & 0x3F];
      if ( v25 != 0 )
      {
        v26 = &v25[LOWORD(player[1].m_NetworkTransmitComponent.m_PVSInfo.m_vCenter[0]) & 0x1FF];
        if ( v26 != 0 && LODWORD(v23) == v26->m_EHandle.m_Index )
          m_pInstance = v26->m_pInstance;
      }
    }
    if ( v40 != m_pInstance )
    {
      (*(player->_vptr_IHandleEntity + 22))(player, 4584, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      if ( v40 != 0 && (v27 = v40->m_pEntity) != 0 )
      {
        v28 = (v27->m_EHandle.m_Index >> 15) - (v27->m_flags & 1);
        if ( v27->m_EHandle.m_Index == -1 )
          v29 = 0x7FFF;
        else
          v29 = v27->m_EHandle.m_Index & 0x7FFF;
        LOWORD(player[1].m_NetworkTransmitComponent.m_PVSInfo.m_vCenter[0]) = v29
                                                                            | LOWORD(player[1].m_NetworkTransmitComponent.m_PVSInfo.m_vCenter[0])
                                                                            & 0x8000;
        LODWORD(player[1].m_NetworkTransmitComponent.m_PVSInfo.m_vCenter[0]) = (v28 << 15)
                                                                             | LODWORD(player[1].m_NetworkTransmitComponent.m_PVSInfo.m_vCenter[0])
                                                                             & 0x7FFF;
      }
      else
      {
        player[1].m_NetworkTransmitComponent.m_PVSInfo.m_vCenter[0] = NAN;
      }
    }
  }
  (*(this->_vptr_CPlayerMove + 4))(this, player, ucmd, g_pMoveData);
  (*(moveHelper->_vptr_IMoveHelper + 5))(moveHelper);
  CPlayerMove::RunPostThink(this, player);
  (*(g_pGameMovement->_vptr_IGameMovement + 7))(g_pGameMovement, player);
  (*(g_pGameMovement->_vptr_IGameMovement + 5))(g_pGameMovement);
  CPlayerMove::FinishCommand(this, player);
  v30 = player->m_nTickBase.m_Value + 1;
  (*(player->_vptr_IHandleEntity + 22))(player, 3824, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  player->m_nTickBase.m_Value = v30;
}


