
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPlayerMove::CPlayerMove  (line 22, @0x00000000022ea860, libserver.so)
// callers: _GLOBAL__sub_I__unity_dota_06.cpp
void __fastcall CPlayerMove::CPlayerMove(CPlayerMove *const this)
{
  this->_vptr_CPlayerMove = off_408A030;  // vptr: CPlayerMove
}


// CPlayerMove::StartCommand  (line 32, @0x00000000022bb4f0, libserver.so)  // inlines: SetPredictionPlayer
// calls: CBaseEntity::SetPredictionRandomSeed
// callers: CDOTAPlayerMove::StartCommand
void __fastcall CPlayerMove::StartCommand(CPlayerMove *const this, CBasePlayer *player, CUserCmd *cmd)
{
  player->m_pCurrentCommand = cmd;
  CBaseEntity::SetPredictionRandomSeed(cmd);
  CBaseEntity::m_pPredictionPlayer = player;
}


// CPlayerMove::FinishCommand  (line 65, @0x00000000022ea870, libserver.so)  // inlines: SetPredictionPlayer
// calls: CBaseEntity::SetPredictionRandomSeed
// callers: CDOTAPlayerMove::RunCommand
void __fastcall CPlayerMove::FinishCommand(CPlayerMove *const this, CBasePlayer *player)
{
  player->m_pCurrentCommand = 0;
  CBaseEntity::SetPredictionRandomSeed(0);
  CBaseEntity::m_pPredictionPlayer = 0;
}


// CPlayerMove::CheckMovingGround  (line 80, @0x00000000022ea8a0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetFlags, GetGroundEntity, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, SetBaseVelocity, VectorMultiply, operator!=, operator*, operator+=, operator=
// calls: CBaseEntity::RemoveFlag, CBaseEntity::ApplyAbsVelocityImpulse, CBaseEntity::AddFlag
// callers: CPlayerMove::RunCommand, CDOTAPlayerMove::RunCommand
void __fastcall CPlayerMove::CheckMovingGround(
        CPlayerMove *const this,
        CBasePlayer *player,
        double a3,
        double frametime)
{
  unsigned int m_Value; // edx
  uint32 v6; // esi
  unsigned __int16 v7; // cx
  int v8; // edi
  int v9; // eax
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  float v12; // xmm0_4
  vec_t v13; // xmm2_4
  vec_t v14; // xmm1_4
  vec_t v15; // xmm0_4
  double v16; // xmm0_8
  CEntityInstance *m_pInstance; // rdi
  double v18; // xmm0_8
  float x; // xmm2_4
  float v20; // xmm1_4
  double frametimea; // [rsp+8h] [rbp-28h]
  double frametimeb; // [rsp+8h] [rbp-28h]
  Vector vecNewVelocity; // [rsp+10h] [rbp-20h] BYREF

  m_Value = player->m_fFlags.m_Value;
  if ( (m_Value & 1) != 0 )
  {
    v6 = player->m_hGroundEntity.m_Value.m_Index >> 15;
    if ( player->m_hGroundEntity.m_Value.m_Index == -1 )
    {
      v7 = 0x7FFF;
      v8 = 0x7FFF;
    }
    else
    {
      v7 = player->m_hGroundEntity.m_Value.m_Index & 0x7FFF;
      v8 = v7;
    }
    v9 = (v6 << 15) | v7 & 0x7FFF;
    LODWORD(vecNewVelocity.x) = v9;
    if ( (v9 + 2) > 1 )
    {
      v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9];
      if ( v10 != 0 )
      {
        v11 = &v10[v8 & 0x1FF];
        if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        {
          m_pInstance = v11->m_pInstance;
          if ( v11->m_pInstance != 0 && (BYTE1(m_pInstance[9].m_pEntity) & 0x10) != 0 )
          {
            frametimea = a3;
            (*(m_pInstance->_vptr_IHandleEntity + 176))(m_pInstance, &vecNewVelocity, a3, frametime);
            v18 = frametimea;
            x = player->m_vecBaseVelocity.m_Value.x;
            v20 = vecNewVelocity.x;
            if ( (player->m_fFlags.m_Value & 0x800000) != 0 )
            {
              v20 = vecNewVelocity.x + x;
              vecNewVelocity.y = vecNewVelocity.y + player->m_vecBaseVelocity.m_Value.y;
              vecNewVelocity.x = vecNewVelocity.x + x;
              vecNewVelocity.z = vecNewVelocity.z + player->m_vecBaseVelocity.m_Value.z;
            }
            if ( x != v20
              || vecNewVelocity.y != player->m_vecBaseVelocity.m_Value.y
              || vecNewVelocity.z != player->m_vecBaseVelocity.m_Value.z )
            {
              (*(player->_vptr_IHandleEntity + 22))(player, 512, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              v18 = frametimea;
              player->m_vecBaseVelocity.m_Value = vecNewVelocity;
            }
            frametimeb = v18;
            CBaseEntity::AddFlag(player, 0x800000);
            m_Value = player->m_fFlags.m_Value;
            a3 = frametimeb;
          }
        }
      }
    }
  }
  if ( (m_Value & 0x800000) == 0 )
  {
    v12 = a3 * 0.5 + 1.0;
    v13 = player->m_vecBaseVelocity.m_Value.y * v12;
    v14 = player->m_vecBaseVelocity.m_Value.z * v12;
    v15 = v12 * player->m_vecBaseVelocity.m_Value.x;
    vecNewVelocity.y = v13;
    vecNewVelocity.z = v14;
    vecNewVelocity.x = v15;
    CBaseEntity::ApplyAbsVelocityImpulse(player, &vecNewVelocity);
    *&v16 = LODWORD(vec3_origin.x);
    if ( vec3_origin.x != player->m_vecBaseVelocity.m_Value.x
      || (*&v16 = LODWORD(vec3_origin.y), *&v16 != player->m_vecBaseVelocity.m_Value.y)
      || (*&v16 = LODWORD(vec3_origin.z), *&v16 != player->m_vecBaseVelocity.m_Value.z) )
    {
      (*(player->_vptr_IHandleEntity + 22))(player, 512, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v16);
      player->m_vecBaseVelocity.m_Value = vec3_origin;
    }
  }
  CBaseEntity::RemoveFlag(player, 0x800000);
}


// CPlayerMove::SetupMove  (line 120, @0x00000000022c2d20, libserver.so)  // inlines: CEntityHandle, Get, GetAbsVelocity, GetEHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, Set, SetAbsOrigin, operator!=, operator=
// calls: CBaseEntity::GetAbsOrigin, CBasePlayer::GetPreviouslyPredictedOrigin, CBaseEntity::GetMoveParent, AngleMatrix, CBaseEntity::EntityToWorldTransform, ConcatTransforms, MatrixAngles, CBaseEntity::CalcAbsoluteVelocity
// callers: CDOTAPlayerMove::SetupMove
void __fastcall CPlayerMove::SetupMove(
        CPlayerMove *const this,
        CBasePlayer *player,
        CUserCmd *ucmd,
        IMoveHelper *pHelper,
        CMoveData *move)
{
  const Vector *AbsOrigin; // r14
  const Vector *PreviouslyPredictedOrigin; // rax
  CBaseEntity *MoveParent; // r14
  matrix3x4_t *v11; // rax
  CEntityIdentity *m_pEntity; // rax
  int v13; // edx
  __int16 v14; // cx
  unsigned __int16 v15; // dx
  int v16; // esi
  uint32 v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  matrix3x4_t viewToParent; // [rsp+0h] [rbp-90h] BYREF
  matrix3x4_t viewToWorld; // [rsp+30h] [rbp-60h] BYREF

  *move = *move & 0xFC | 1;
  AbsOrigin = CBaseEntity::GetAbsOrigin(player);
  PreviouslyPredictedOrigin = CBasePlayer::GetPreviouslyPredictedOrigin(player);
  if ( AbsOrigin->x != PreviouslyPredictedOrigin->x
    || AbsOrigin->y != PreviouslyPredictedOrigin->y
    || AbsOrigin->z != PreviouslyPredictedOrigin->z )
  {
    *move |= 2u;
  }
  move->m_nImpulseCommand = ucmd->impulse;
  move->m_vecViewAngles.x = ucmd->viewangles.x;
  move->m_vecViewAngles.y = ucmd->viewangles.y;
  move->m_vecViewAngles.z = ucmd->viewangles.z;
  MoveParent = CBaseEntity::GetMoveParent(player);
  if ( MoveParent != 0 )
  {
    AngleMatrix(&move->m_vecViewAngles, &viewToParent);
    v11 = CBaseEntity::EntityToWorldTransform(MoveParent);
    ConcatTransforms(v11, &viewToParent, &viewToWorld);
    MatrixAngles(&viewToWorld, &move->m_vecAbsViewAngles);
  }
  else
  {
    move->m_vecAbsViewAngles.x = move->m_vecViewAngles.x;
    move->m_vecAbsViewAngles.y = move->m_vecViewAngles.y;
    move->m_vecAbsViewAngles.z = move->m_vecViewAngles.z;
  }
  move->m_nButtons = ucmd->buttons;
  if ( (player->m_fFlags.m_Value & 0x40) != 0 )
  {
    move->m_flForwardMove = 0.0;
    move->m_flSideMove = 0.0;
    move->m_flUpMove = 0.0;
  }
  else
  {
    move->m_flForwardMove = ucmd->forwardmove;
    move->m_flSideMove = ucmd->sidemove;
    move->m_flUpMove = ucmd->upmove;
  }
  move->m_flClientMaxSpeed = player->m_flMaxspeed.m_Value;
  move->m_nOldButtons = player->m_Local.m_nOldButtons;
  move->m_vecAngles.x = player->m_pl.v_angle.x;
  move->m_vecAngles.y = player->m_pl.v_angle.y;
  move->m_vecAngles.z = player->m_pl.v_angle.z;
  if ( (player->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(player);
  move->m_vecVelocity.x = player->m_vecAbsVelocity.m_Value.x;
  move->m_vecVelocity.y = player->m_vecAbsVelocity.m_Value.y;
  move->m_vecVelocity.z = player->m_vecAbsVelocity.m_Value.z;
  m_pEntity = player->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v14 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(move->m_nPlayerHandle.m_Index) = v14 | move->m_nPlayerHandle.m_Index & 0x8000;
    move->m_nPlayerHandle.m_Index = (v13 << 15) | move->m_nPlayerHandle.m_Index & 0x7FFF;
  }
  else
  {
    move->m_nPlayerHandle.m_Index = -1;
  }
  move->m_vecAbsOrigin = *CBaseEntity::GetAbsOrigin(player);
  if ( player->m_hConstraintEntity.m_Value.m_Index == -1 )
  {
    v15 = 0x7FFF;
    v16 = 0x7FFF;
  }
  else
  {
    v15 = player->m_hConstraintEntity.m_Value.m_Index & 0x7FFF;
    v16 = v15;
  }
  v17 = (player->m_hConstraintEntity.m_Value.m_Index >> 15 << 15) | v15 & 0x7FFF;
  LODWORD(viewToWorld.m_flMatVal[0][0]) = v17;
  if ( v17 + 2 > 1
    && (v18 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v16 >> 9]) != 0
    && (v19 = &v18[v16 & 0x1FF]) != 0
    && v17 == v19->m_EHandle.m_Index
    && v19->m_pInstance != 0 )
  {
    move->m_vecConstraintCenter = *CBaseEntity::GetAbsOrigin(v19->m_pInstance);
  }
  else
  {
    move->m_vecConstraintCenter.x = player->m_vecConstraintCenter.m_Value.x;
    move->m_vecConstraintCenter.y = player->m_vecConstraintCenter.m_Value.y;
    move->m_vecConstraintCenter.z = player->m_vecConstraintCenter.m_Value.z;
  }
  move->m_flConstraintRadius = player->m_flConstraintRadius.m_Value;
  move->m_flConstraintWidth = player->m_flConstraintWidth.m_Value;
  move->m_flConstraintSpeedFactor = player->m_flConstraintSpeedFactor.m_Value;
  move->m_bConstraintPastRadius = player->m_bConstraintPastRadius.m_Value;
}


// CPlayerMove::FinishMove  (line 194, @0x00000000022bdaa0, libserver.so)  // inlines: NetworkStateChanged, Set, SetBodyPitch, operator=<float>
// calls: CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsVelocity, CBasePlayer::SetPreviouslyPredictedOrigin, CBaseAnimating::SetPoseParameter, CBaseEntity::SetLocalAngles
// callers: CDOTAPlayerMove::FinishMove
void __fastcall CPlayerMove::FinishMove(CPlayerMove *const this, CBasePlayer *player, CUserCmd *ucmd, CMoveData *move)
{
  float v6; // xmm1_4
  float x; // xmm0_4
  __int64 v8; // xmm0_8
  int m_nBodyPitchPoseParam; // esi
  float m_flClientMaxSpeed; // [rsp+Ch] [rbp-24h]

  if ( move->m_flClientMaxSpeed != player->m_flMaxspeed.m_Value )
  {
    m_flClientMaxSpeed = move->m_flClientMaxSpeed;
    (*(player->_vptr_IHandleEntity + 22))(player, 3736, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    player->m_flMaxspeed.m_Value = m_flClientMaxSpeed;
  }
  CBaseEntity::SetAbsOrigin(player, &move->m_vecAbsOrigin);
  CBaseEntity::SetAbsVelocity(player, &move->m_vecVelocity);
  CBasePlayer::SetPreviouslyPredictedOrigin(player, &move->m_vecAbsOrigin);
  player->m_Local.m_nOldButtons = move->m_nButtons;
  x = move->m_vecAngles.x;
  if ( x > 180.0 )
    x = x - 360.0;
  if ( x > 90.0 )
  {
    v8 = 1119092736;
  }
  else
  {
    v6 = fmaxf(-90.0, x);
    v8 = LODWORD(v6);
  }
  LODWORD(move->m_vecAngles.x) = v8;
  m_nBodyPitchPoseParam = player->m_nBodyPitchPoseParam;
  if ( m_nBodyPitchPoseParam >= 0 )
    CBaseAnimating::SetPoseParameter(player, m_nBodyPitchPoseParam, *&v8, v6);
  CBaseEntity::SetLocalAngles(player, &move->m_vecAngles);
}


// CPlayerMove::RunPreThink  (line 250, @0x00000000022eaba0, libserver.so)  // inlines: PhysicsRunThink
// calls: CBaseEntity::PhysicsRunThink
// callers: CPlayerMove::RunCommand, CDOTAPlayerMove::RunCommand
void __fastcall CPlayerMove::RunPreThink(CPlayerMove *const this, CBasePlayer *player)
{
  if ( (player->m_iEFlags & 0x400000) != 0
    || CBaseEntity::PhysicsRunThink(player, CBaseEntity::thinkmethods_t::THINK_FIRE_ALL_FUNCTIONS) )
  {
    (*(g_pGameRules->_vptr_CGameRules + 77))(g_pGameRules, player);
    (*(player->_vptr_IHandleEntity + 383))(player);
  }
}


// CPlayerMove::RunThink  (line 280, @0x00000000022eac00, libserver.so)
// calls: CBaseEntity::GetNextThinkTick, CBaseEntity::SetNextThink
// callers: CPlayerMove::RunCommand, CDOTAPlayerMove::RunCommand
void __fastcall CPlayerMove::RunThink(CPlayerMove *const this, CBasePlayer *player, double a3, double frametime)
{
  signed int NextThinkTick; // eax
  double v6; // xmm1_8

  NextThinkTick = CBaseEntity::GetNextThinkTick(player, 0);
  if ( NextThinkTick > 0 && NextThinkTick <= player->m_nTickBase.m_Value )
  {
    CBaseEntity::SetNextThink(player, COERCE_DOUBLE(3212836864LL), v6, 0);
    (*(player->_vptr_IHandleEntity + 117))(player);
  }
}


// CPlayerMove::RunPostThink  (line 301, @0x00000000022eb120, libserver.so)
// callers: CDOTAPlayerMove::RunCommand
void __fastcall CPlayerMove::RunPostThink(CPlayerMove *const this, CBasePlayer *player)
{
  (*(player->_vptr_IHandleEntity + 384))(player);
}


// CPlayerMove::RunCommand  (line 318, @0x00000000022eac60, libserver.so)  // inlines: FinishCommand, GetBool, GetInstance, GetInt, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, NetworkStateChanged, RunPostThink, Set, SetPredictionPlayer, operator+, operator++, operator+=<int>, operator=, setcurtime
// calls: CommentarySystem_PePlayerRunCommand, __dynamic_cast, CBasePlayer::UsingStandardWeaponsInVehicle, CBasePlayer::UpdateButtonState, CPlayerMove::CheckMovingGround, CPlayerMove::RunPreThink, CPlayerMove::RunThink, CBaseEntity::SetPredictionRandomSeed
void __fastcall CPlayerMove::RunCommand(
        CPlayerMove *const this,
        CBasePlayer *player,
        CUserCmd *ucmd,
        IMoveHelper *moveHelper)
{
  signed int m_Value; // eax
  CGlobalVars *v8; // rcx
  float interval_per_tick; // xmm1_4
  ButtonBitMask_t v10; // rdx
  CGameEntitySystem *v11; // rdx
  __int64 v12; // rsi
  int weaponselect; // eax
  CEntityIdentity *v14; // rcx
  __int64 v15; // rdx
  void *v16; // rax
  __int64 v17; // r13
  int impulse; // eax
  double v19; // xmm1_8
  int fixangle; // eax
  int (**vptr_IHandleEntity)(...); // rax
  double v22; // xmm1_8
  vec_t v23; // xmm0_4
  vec_t v24; // xmm2_4
  int v25; // xmm1_4
  unsigned int v26; // r13d
  int (*v27)(...); // [rsp+8h] [rbp-58h]
  __int64 v28; // [rsp+10h] [rbp-50h]
  double v30; // [rsp+20h] [rbp-40h] BYREF
  int v31; // [rsp+28h] [rbp-38h]

  (*(this->_vptr_CPlayerMove + 5))(this);
  m_Value = player->m_nTickBase.m_Value;
  v8 = gpGlobals;
  player->m_nOldTickBase = m_Value;
  if ( v8->frametime != 0.0 )
  {
    v26 = m_Value + 1;
    (*(player->_vptr_IHandleEntity + 22))(player, 3824, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    player->m_nTickBase.m_Value = v26;
    v8 = gpGlobals;
    m_Value = v26;
  }
  interval_per_tick = v8->interval_per_tick;
  v8->m_flCurrentTime = m_Value * interval_per_tick;
  if ( player->m_bGamePaused )
    interval_per_tick = 0.0;
  v8->frametime = interval_per_tick;
  v10 = ucmd->buttons | player->m_afButtonForced;
  ucmd->buttons = v10;
  ucmd->buttons = v10 & ~player->m_afButtonDisabled;
  if ( player->m_bGamePaused
    && player->m_MoveType.m_Value == MoveType_t::MOVETYPE_NOCLIP
    && sv_cheats->m_pParent->m_Value.m_nValue != 0
    && sv_noclipduringpause.m_pParent->m_Value.m_nValue != 0 )
  {
    v8->frametime = v8->interval_per_tick;
  }
  (*(g_pGameMovement->_vptr_IGameMovement + 6))(g_pGameMovement, player);
  CommentarySystem_PePlayerRunCommand(player, ucmd);
  weaponselect = ucmd->weaponselect;
  if ( weaponselect != 0 )
  {
    v11 = g_pGameEntitySystem;
    if ( weaponselect <= 0x7FFE )
    {
      v14 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[weaponselect >> 9];
      if ( v14 != 0 )
      {
        v15 = weaponselect & 0x1FF;
        v12 = 8 * v15;
        v11 = &v14[v15];
        if ( v11 != 0 )
        {
          v12 = *&v11->m_EntityList.m_Lock.gap0;
          if ( (*&v11->m_EntityList.m_Lock.gap0 & 0x7FFF) == weaponselect
            && v11->_vptr_IEntityResourceManifestBuilder != 0 )
          {
            v16 = __dynamic_cast(
                    v11->_vptr_IEntityResourceManifestBuilder,
                    &`typeinfo for'CBaseEntity,
                    &`typeinfo for'CBaseCombatWeapon,
                    0);
            if ( v16 != 0 )
              (*(player->_vptr_IHandleEntity + 464))(player, v16);
          }
        }
      }
    }
  }
  v17 = (*(player->_vptr_IHandleEntity + 347))(player, v12, v11);
  impulse = ucmd->impulse;
  if ( impulse != 0 )
  {
    if ( v17 != 0 )
    {
      if ( !CBasePlayer::UsingStandardWeaponsInVehicle(player) )
        goto LABEL_18;
      impulse = ucmd->impulse;
    }
    player->m_nImpulse = impulse;
  }
LABEL_18:
  CBasePlayer::UpdateButtonState(player, ucmd->buttons);
  CPlayerMove::CheckMovingGround(this, player, gpGlobals->interval_per_tick, v19);
  g_pMoveData->m_vecOldAngles = player->m_pl.v_angle;
  fixangle = player->m_FixAngle.fixangle;
  if ( fixangle != 0 )
  {
    if ( fixangle == 2 )
    {
      v23 = ucmd->viewangles.z + player->m_FixAngle.anglechange.z;
      v24 = ucmd->viewangles.x + player->m_FixAngle.anglechange.x;
      player->m_pl.v_angle.y = ucmd->viewangles.y + player->m_FixAngle.anglechange.y;
      vptr_IHandleEntity = player->_vptr_IHandleEntity;
      player->m_pl.v_angle.z = v23;
      player->m_pl.v_angle.x = v24;
      if ( ucmd->hmd_active != 0 )
        goto LABEL_21;
      goto LABEL_27;
    }
  }
  else
  {
    player->m_pl.v_angle.x = ucmd->viewangles.x;
    player->m_pl.v_angle.y = ucmd->viewangles.y;
    player->m_pl.v_angle.z = ucmd->viewangles.z;
  }
  vptr_IHandleEntity = player->_vptr_IHandleEntity;
  if ( ucmd->hmd_active != 0 )
  {
LABEL_21:
    vptr_IHandleEntity[389](
      player,
      1,
      &ucmd->hmd_middle_eye_local,
      &ucmd->hmd_viewangles_local,
      ucmd->hmd_controllers_active,
      ucmd->hmd_controllers_info,
      0);
    goto LABEL_22;
  }
LABEL_27:
  v27 = vptr_IHandleEntity[389];
  v28 = (vptr_IHandleEntity[165])(player);
  v30 = (*(player->_vptr_IHandleEntity + 164))(player);
  v31 = v25;
  v27(player, 0, &v30, v28, 0, 0, 0);
LABEL_22:
  CPlayerMove::RunPreThink(this, player);
  CPlayerMove::RunThink(this, player, gpGlobals->interval_per_tick, v22);
  (*(this->_vptr_CPlayerMove + 3))(this, player, ucmd, moveHelper, g_pMoveData);
  if ( v17 != 0 )
    (*(*v17 + 48LL))(v17, player, g_pMoveData);
  else
    (*(g_pGameMovement->_vptr_IGameMovement + 4))(g_pGameMovement, player, g_pMoveData);
  (*(this->_vptr_CPlayerMove + 4))(this, player, ucmd, g_pMoveData);
  (*(moveHelper->_vptr_IMoveHelper + 5))(moveHelper);
  (*(player->_vptr_IHandleEntity + 384))(player);
  (*(g_pGameMovement->_vptr_IGameMovement + 7))(g_pGameMovement, player);
  (*(g_pGameMovement->_vptr_IGameMovement + 5))(g_pGameMovement);
  player->m_pCurrentCommand = 0;
  CBaseEntity::SetPredictionRandomSeed(0);
  CBaseEntity::m_pPredictionPlayer = 0;
}


