
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetLaneNodeName  (line 119, @0x00000000027eba60, libserver.so)
// callers: CDOTA_TeamCommander::ActiveSpawnGroupChanged
// globals: pszBadLaneNodeNames, pszGoodLaneNodeNames
const char *__fastcall GetLaneNodeName(int iTeamNumber, DOTA_LANE lane, int iNode)
{
  if ( iNode > 8 )
    return 0;
  if ( iTeamNumber != 2 )
  {
    if ( iTeamNumber == 3 )
      return &pszBadLaneNodeNames[64 * (9LL * (lane - 1) + iNode)];
    return 0;
  }
  return &pszGoodLaneNodeNames[64 * (9LL * (lane - 1) + iNode)];
}


// GetLaneBuildingName  (line 222, @0x00000000027ebac0, libserver.so)
// callers: CDOTA_Tutorial::ParseLessonKeys, CDOTA_TeamCommander::ActiveSpawnGroupChanged
// globals: pszBadLaneBuildingNames, pszGoodLaneBuildingNames
const char *__fastcall GetLaneBuildingName(int iTeamNumber, DOTA_LANE lane, int iNode)
{
  if ( iNode > 7 )
    return 0;
  if ( iTeamNumber != 2 )
  {
    if ( iTeamNumber == 3 )
      return &pszBadLaneBuildingNames[64 * (iNode + 8LL * (lane - 1))];
    return 0;
  }
  return &pszGoodLaneBuildingNames[64 * (iNode + 8LL * (lane - 1))];
}


// IsInvisibleToBots  (line 304, @0x00000000027ebb20, libserver.so)  // inlines: FastSqrt, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CDOTA_BaseNPC::FindModifierByName, CBaseEntity::GetAbsOrigin
// callers: CDOTA_Bot_AbilityUsage::BuildLocationList, CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Kunkka_Torrent::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Lina_LightStrikearray::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Tiny_Avalanche::GetCurrentUsageDesire, CDOTA_BaseNPC_Creature::BuildLocationList
// strings: "modifier_sandking_sand_storm_invis", "modifier_templar_assassin_meld"
bool __fastcall IsInvisibleToBots(CDOTA_BaseNPC *pTarget)
{
  bool result; // al
  bool v3; // zf
  const Vector *AbsOrigin; // rax
  CDOTA_Bot *m_pBot; // rdx
  float v6; // xmm1_4

  if ( SLOBYTE(pTarget->m_nUnitState64.m_Value) >= 0
    || CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_sandking_sand_storm_invis", 0) != 0 )
  {
    return 0;
  }
  v3 = CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_templar_assassin_meld", 0) == 0;
  result = 1;
  if ( !v3 && pTarget->m_pBot != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
    m_pBot = pTarget->m_pBot;
    v6 = m_pBot->m_vLastSeenLoc.y - AbsOrigin->y;
    return fsqrt(((m_pBot->m_vLastSeenLoc.x - AbsOrigin->x) * (m_pBot->m_vLastSeenLoc.x - AbsOrigin->x)) + (v6 * v6)) >= 100.0;
  }
  return result;
}


// ResetDebugLineLocation  (line 333, @0x00000000027ebbd0, libserver.so)
// globals: s_iDebugLine
void __fastcall ResetDebugLineLocation(int iLine)
{
  s_iDebugLine = iLine;
}


// AddDebugTextLine  (line 338, @0x00000000027ebbe0, libserver.so)  // inlines: DOTAGameRules, GetFloat, GetGameTime
// calls: UTIL_LogPrintf, UTIL_MessageText, NDebugOverlay::ScreenTextOffset
// callers: AddDebugTextLine, CDOTA_Commander::DrawDebug
// strings: "%3.2f: Commander debug: %s.\n"
// globals: s_debugPlayer, s_iDebugLine
void __fastcall AddDebugTextLine(
        bool bEnabled,
        const char *text,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        float fDuration)
{
  double v7; // xmm0_8
  unsigned int v12; // edi
  float fDurationa; // [rsp+0h] [rbp-2Ch]

  if ( bEnabled )
  {
    v7 = 0.0;
    if ( g_pGameRules != 0 )
      v7 = *&g_pGameRules[18].m_szQuestName[20];
    fDurationa = fDuration;
    UTIL_LogPrintf("%3.2f: Commander debug: %s.\n", v7, text);
    if ( s_debugPlayer != 0 )
    {
      UTIL_MessageText(s_debugPlayer, text, 0);
    }
    else
    {
      v12 = s_iDebugLine++;
      NDebugOverlay::ScreenTextOffset(
        dota_debug_location_x.m_pParent->m_Value.m_fValue,
        dota_debug_location_y.m_pParent->m_Value.m_fValue,
        v12,
        text,
        r,
        g,
        b,
        255,
        fDurationa);
    }
  }
}


// AddDebugTextLine  (line 355, @0x00000000027ebcc0, libserver.so)
// calls: AddDebugTextLine
void __fastcall AddDebugTextLine(bool bEnabled, const char *text, const color24 *const color, float fDuration)
{
  AddDebugTextLine(bEnabled, text, color->r, color->g, color->b, fDuration);
}


// GetLaneName  (line 378, @0x00000000027ebce0, libserver.so)
// callers: CDOTA_BotMode_PushTower::GetDebugString, CDOTA_BotMode_PushTower_Human::GetDebugString, CDOTA_BotMode_Farm::GetDebugString, CDOTA_BotMode_Roam::GetDebugString, CDOTA_BotMode_Roam_Human::GetDebugString, CDOTA_TeamCommander::BuildDebugString
// globals: pszLaneStrings
const char *__fastcall GetLaneName(DOTA_LANE lane)
{
  return &pszLaneStrings[64 * lane];
}


// GetLocalizableLaneName  (line 383, @0x00000000027ebd00, libserver.so)
// callers: CDOTA_BotMode_Roam::OnEnd, CDOTA_BotMode_Roam::Think, CDOTA_BotMode_PushTower::Think
// globals: pszLocalizableLaneStrings
const char *__fastcall GetLocalizableLaneName(DOTA_LANE lane)
{
  return &pszLocalizableLaneStrings[64 * lane];
}


// GetLanePushMode  (line 398, @0x00000000027ebd20, libserver.so)
// callers: CDOTA_TeamCommander::IsLaneBeingPushed, CDOTA_TeamCommander::UpdatePushLaneDesires
// globals: LanePushModes
DOTA_BOT_MODE __fastcall GetLanePushMode(DOTA_LANE lane)
{
  return LanePushModes[lane];
}


// GetLaneDefendMode  (line 413, @0x00000000027ebd40, libserver.so)
// callers: CDOTA_TeamCommander::IsLaneBeingDefended, CDOTA_TeamCommander::UpdateDefendLaneDesires
// globals: LaneDefendModes
DOTA_BOT_MODE __fastcall GetLaneDefendMode(DOTA_LANE lane)
{
  return LaneDefendModes[lane];
}


// dota_commander_report  (line 420, @0x00000000027f8c50, libserver.so)
// calls: UTIL_GetCommandClient, CDOTA_Commander::DrawDebug
// globals: s_debugPlayer, g_DOTACommander
void __fastcall dota_commander_report(const CCommandContext *const ctx, const CCommand *const args)
{
  s_debugPlayer = UTIL_GetCommandClient();
  if ( s_debugPlayer != 0 )
    CDOTA_Commander::DrawDebug(&g_DOTACommander);
  s_debugPlayer = 0;
}


// dota_bot_populate  (line 432, @0x00000000027e0680, libserver.so)  // inlines: DOTAGameRules, GetGameMode, IsAddOnGame
// calls: UTIL_IsCommandIssuedByServerAdmin, CDOTAGamerules::IsCheatMode, ConVar::SetValue, V_atoi, CDOTAGamerules::CreateDemoPlayers
void __fastcall dota_bot_populate(const CCommandContext *const ctx, const CCommand *const args)
{
  int v2; // eax
  int v4; // esi

  if ( g_pGameRules != 0
    && ((v2 = *&g_pGameRules[6].m_szQuestName[68]) != 15 && v2 != 19 || CDOTAGamerules::IsCheatMode())
    && UTIL_IsCommandIssuedByServerAdmin() )
  {
    ConVar::SetValue(&dota_bot_mode, 1);
    v4 = 3;
    if ( args->m_nArgc > 1 )
      v4 = V_atoi(args->m_ppArgv[1]);
    CDOTAGamerules::CreateDemoPlayers(g_pGameRules, v4, -1);
  }
}


// CDOTA_Commander::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 450, @0x00000000027ebd60, libserver.so)
void __cdecl CDOTA_Commander::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// DOTACommander  (line 452, @0x00000000027ebd70, libserver.so)
// callers: CDOTABaseAbility::EndChannel, CDOTABaseAbility::ToggleAbility, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility_BotScript::GetScriptHandle, CDOTABaseAbility_BotScript::IsMyScript, CDOTABaseAbility_BotScript::IsMyScriptTeam, CDOTABaseAbility::CastAbility, ToAbilityBotScriptHandle, CDOTABaseGameMode::SpawnRunes, CDOTAGamerules::ClientMsg_FreeInventory, CDOTAGamerules::OnLobbyUpdated, CDOTAGamerules::ExecutePing (201 total)
// globals: g_DOTACommander
CDOTA_Commander *__cdecl DOTACommander()
{
  return &g_DOTACommander;
}


// CDOTA_Commander::Init  (line 459, @0x00000000028101b0, libserver.so)  // inlines: SetSize, operator=
// calls: CDOTA_TeamCommander::Init, CUtlVectorBase<bool, CUtlMemory<bool, int> >::SetCount, CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount
bool __fastcall CDOTA_Commander::Init(CDOTA_Commander *const this)
{
  CDOTA_TeamCommander *p_m_GoodGuys; // rdi
  CDOTA_Commander *v3; // rdi
  int v4; // eax
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4

  p_m_GoodGuys = &this->m_GoodGuys;
  BYTE1(p_m_GoodGuys[-1].m_hBotScriptDetailsCallback.m_Func.__delta) = 0;
  CDOTA_TeamCommander::Init(p_m_GoodGuys, DOTATeam_t::DOTA_TEAM_FIRST);
  CDOTA_TeamCommander::Init(&this->m_BadGuys, DOTATeam_t::DOTA_TEAM_BADGUYS);
  CUtlVectorBase<bool,CUtlMemory<bool,int>>::SetCount(&this->m_PassabilityGrid, 0);
  CUtlVectorBase<float,CUtlMemory<float,int>>::SetCount(&this->m_HeightGrid, 0);
  v3 = this;
  v4 = 16;
  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  do
  {
    v3->m_BotWardLocations[0].x = x;
    v3 = (v3 + 12);
    *&v3->m_IllusionStates.m_Memory.m_nAllocationCount = y;
    *&v3->m_IllusionStates.m_Memory.m_nGrowSize = z;
    --v4;
  }
  while ( v4 != 0 );
  return 1;
}


// CDOTA_Commander::Shutdown  (line 479, @0x0000000002810250, libserver.so)  // inlines: SetSize
// calls: CDOTA_TeamCommander::Shutdown, CUtlVectorBase<bool, CUtlMemory<bool, int> >::SetCount, CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount
void __fastcall CDOTA_Commander::Shutdown(CDOTA_Commander *const this)
{
  CDOTA_TeamCommander::Shutdown(&this->m_GoodGuys);
  CDOTA_TeamCommander::Shutdown(&this->m_BadGuys);
  CUtlVectorBase<bool,CUtlMemory<bool,int>>::SetCount(&this->m_PassabilityGrid, 0);
  CUtlVectorBase<float,CUtlMemory<float,int>>::SetCount(&this->m_HeightGrid, 0);
}


// CDOTA_Commander::GameInit  (line 490, @0x00000000027ebec0, libserver.so)
// calls: CDOTA_Commander::IsBotGame, CDOTA_TeamCommander::GameInit
void __fastcall CDOTA_Commander::GameInit(CDOTA_Commander *const this, const EventGameInit_t *const msg)
{
  this->m_bWasBotGame = CDOTA_Commander::IsBotGame(this);
  this->m_pBotScript = 0;
  this->m_eTeamRunningScript = DOTATeam_t::DOTA_TEAM_NOTEAM;
  CDOTA_TeamCommander::GameInit(&this->m_GoodGuys, msg);
  CDOTA_TeamCommander::GameInit(&this->m_BadGuys, msg);
}


// CDOTA_Commander::GameShutdown  (line 503, @0x00000000027e02f0, libserver.so)
// calls: CDOTA_TeamCommander::GameShutdown
void __fastcall CDOTA_Commander::GameShutdown(CDOTA_Commander *const this, const EventGameShutdown_t *const msg)
{
  CDOTA_TeamCommander::GameShutdown(&this->m_GoodGuys, msg);
  CDOTA_TeamCommander::GameShutdown(&this->m_BadGuys, msg);
}


// CDOTA_Commander::ActiveSpawnGroupChanged  (line 511, @0x00000000028102a0, libserver.so)  // inlines: DOTAGameRules, FillWithValue, GridPosToWorldCenterX, GridPosToWorldCenterY, SetAmountAlongLane, SetSize, operator[]
// calls: CDOTAGamerules::ShouldFillEmptySlotsWithBots, CDOTA_TeamCommander::ActiveSpawnGroupChanged, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::CalculateAmountAlongLane, CGameEntitySystem::FindEntityByClassname, CUtlVectorBase<bool, CUtlMemory<bool, int> >::SetCount, CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount, CDOTA_Commander::GetLocationFromGrid, GetPositionOnGround, CDOTA_Commander::ComputeWardLocations, CDOTA_Commander::UpdatePassabilityGrid, ConVar::SetValue
// strings: "npc_dota_building", "npc_dota_tower", "npc_dota_fort", "npc_dota_barracks", "npc_dota_effigy_statue"
// globals: dota_bot_disable
void __fastcall CDOTA_Commander::ActiveSpawnGroupChanged(
        CDOTA_Commander *const this,
        const EventActiveSpawnGroupChanged_t *const msg)
{
  const char *v4; // r12
  int m_nMinX; // esi
  float m_flEdgeSize; // xmm1_4
  float m_flOffsetX; // xmm3_4
  int m_nMinY; // ecx
  float m_flOffsetY; // xmm2_4
  int m_nMaxX; // edx
  int m_nMaxY; // eax
  CBaseEntity *j; // r15
  const Vector *AbsOrigin; // rax
  const Vector *v14; // rax
  CBaseEntity *EntityByClassname; // rax
  __int64 k; // rax
  __int64 v17; // rdx
  int m; // eax
  int n; // r12d
  int v20; // ebx
  int v21; // edx
  float *m_pMemory; // rax
  int v23; // edx
  const char **i; // [rsp+8h] [rbp-98h]
  Vector vLoc; // [rsp+20h] [rbp-80h] BYREF
  Vector vGroundLoc; // [rsp+30h] [rbp-70h] BYREF
  const char *pszBuildingTargets[5]; // [rsp+40h] [rbp-60h] BYREF
  __int64 v28; // [rsp+68h] [rbp-38h] BYREF
  Vector PositionOnGround; // 0:kr24_12.12

  if ( g_pGameRules != 0 && CDOTAGamerules::ShouldFillEmptySlotsWithBots(g_pGameRules) )
    ConVar::SetValue(&dota_bot_disable, 0);
  v4 = "npc_dota_building";
  m_nMinX = g_GridNav.m_nMinX;
  m_flEdgeSize = g_GridNav.m_flEdgeSize;
  m_flOffsetX = g_GridNav.m_flOffsetX;
  m_nMinY = g_GridNav.m_nMinY;
  m_flOffsetY = g_GridNav.m_flOffsetY;
  m_nMaxX = g_GridNav.m_nMaxX;
  m_nMaxY = g_GridNav.m_nMaxY;
  this->m_vWorldBounds[0].x = (m_nMinX * m_flEdgeSize) + m_flOffsetX;
  this->m_vWorldBounds[0].y = (m_nMinY * m_flEdgeSize) + m_flOffsetY;
  this->m_iGridCount[0] = (m_nMaxX - m_nMinX) / 2;
  this->m_vWorldBounds[1].x = (m_nMaxX * m_flEdgeSize) + m_flOffsetX;
  this->m_iGridCount[1] = (m_nMaxY - m_nMinY) / 2;
  this->m_vWorldBounds[1].y = (m_nMaxY * m_flEdgeSize) + m_flOffsetY;
  CDOTA_TeamCommander::ActiveSpawnGroupChanged(&this->m_GoodGuys, msg);
  CDOTA_TeamCommander::ActiveSpawnGroupChanged(&this->m_BadGuys, msg);
  pszBuildingTargets[0] = "npc_dota_building";
  pszBuildingTargets[1] = "npc_dota_tower";
  pszBuildingTargets[2] = "npc_dota_fort";
  pszBuildingTargets[3] = "npc_dota_barracks";
  pszBuildingTargets[4] = "npc_dota_effigy_statue";
  for ( i = &pszBuildingTargets[1]; ; ++i )
  {
    for ( j = 0; ; j[6].m_worldGroupId.m_nHashCode = LODWORD(vGroundLoc.x) )
    {
      EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, j, v4);
      j = EntityByClassname;
      if ( EntityByClassname == 0 )
        break;
      AbsOrigin = CBaseEntity::GetAbsOrigin(EntityByClassname);
      CDOTA_TeamCommander::CalculateAmountAlongLane(
        &this->m_GoodGuys,
        j[6].m_iszPrivateVScripts.u.m_Id,
        AbsOrigin,
        &vGroundLoc.x,
        0);
      HIDWORD(j[6].m_iszPrivateVScripts.u.m_pAsString) = LODWORD(vGroundLoc.x);
      v14 = CBaseEntity::GetAbsOrigin(j);
      CDOTA_TeamCommander::CalculateAmountAlongLane(
        &this->m_BadGuys,
        j[6].m_iszPrivateVScripts.u.m_Id,
        v14,
        &vGroundLoc.x,
        0);
    }
    if ( i == &v28 )
      break;
    v4 = *i;
  }
  CUtlVectorBase<bool,CUtlMemory<bool,int>>::SetCount(
    &this->m_PassabilityGrid,
    (this->m_iGridCount[1] + 1) * (this->m_iGridCount[0] + 1));
  for ( k = 0; this->m_PassabilityGrid.m_Size > k; ++k )
    this->m_PassabilityGrid.m_Memory.m_pMemory[k] = 0;
  CUtlVectorBase<float,CUtlMemory<float,int>>::SetCount(
    &this->m_HeightGrid,
    (this->m_iGridCount[1] + 1) * (this->m_iGridCount[0] + 1));
  v17 = 0;
  for ( m = 0; m < this->m_HeightGrid.m_Size; ++v17 )
  {
    ++m;
    this->m_HeightGrid.m_Memory.m_pMemory[v17] = 0.0;
  }
  for ( n = 0; this->m_iGridCount[0] > n; ++n )
  {
    if ( this->m_iGridCount[1] > 0 )
    {
      v20 = 0;
      do
      {
        vLoc = CDOTA_Commander::GetLocationFromGrid(this, n, v20);
        PositionOnGround = GetPositionOnGround(&vLoc, 0);
        v21 = this->m_iGridCount[1];
        m_pMemory = this->m_HeightGrid.m_Memory.m_pMemory;
        vGroundLoc = PositionOnGround;
        v23 = v20 + n * v21;
        ++v20;
        m_pMemory[v23] = PositionOnGround.z;
      }
      while ( this->m_iGridCount[1] > v20 );
    }
  }
  CDOTA_Commander::ComputeWardLocations(this);
  CDOTA_Commander::UpdatePassabilityGrid(this);
}


// CDOTA_Commander::ComputeWardLocations  (line 574, @0x00000000027ec590, libserver.so)  // inlines: operator=, sGridLocation
// calls: CBaseEntity::GetAbsOrigin, CGameEntitySystem::FindEntityByName, CDOTA_Commander::GetLocationFromGrid, __cxa_guard_acquire, __cxa_guard_release
// callers: CDOTA_Commander::ActiveSpawnGroupChanged
// globals: `guard variable for'CDOTA_Commander::ComputeWardLocations(void)::defaultWardGridLocations, pszWardLocationNames, CDOTA_Commander::ComputeWardLocations(void)::defaultWardGridLocations
void __fastcall CDOTA_Commander::ComputeWardLocations(CDOTA_Commander *const this)
{
  const char *v1; // rbx
  int *v2; // r12
  CDOTA_Commander *v3; // r15
  CBaseEntity *EntityByName; // rax

  if ( `guard variable for'CDOTA_Commander::ComputeWardLocations(void)::defaultWardGridLocations == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Commander::ComputeWardLocations(void)::defaultWardGridLocations) != 0 )
  {
    CDOTA_Commander::ComputeWardLocations(void)::defaultWardGridLocations[0].x = 84;
    dword_4C2AB24 = 38;
    dword_4C2AB28 = 36;
    dword_4C2AB2C = 75;
    dword_4C2AB30 = 51;
    dword_4C2AB34 = 25;
    dword_4C2AB38 = 47;
    dword_4C2AB3C = 60;
    dword_4C2AB40 = 67;
    dword_4C2AB44 = 39;
    dword_4C2AB48 = 81;
    dword_4C2AB4C = 25;
    dword_4C2AB50 = 90;
    dword_4C2AB54 = 47;
    dword_4C2AB58 = 46;
    dword_4C2AB5C = 79;
    dword_4C2AB60 = 71;
    dword_4C2AB64 = 96;
    dword_4C2AB68 = 92;
    dword_4C2AB6C = 62;
    dword_4C2AB70 = 62;
    dword_4C2AB74 = 76;
    __cxa_guard_release(&`guard variable for'CDOTA_Commander::ComputeWardLocations(void)::defaultWardGridLocations);
  }
  v1 = pszWardLocationNames;
  v2 = &dword_4C2AB24;
  v3 = this;
  do
  {
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v1, 0, 0, 0, 0);
    if ( EntityByName != 0 )
      v3->m_BotWardLocations[0] = *CBaseEntity::GetAbsOrigin(EntityByName);
    else
      v3->m_BotWardLocations[0] = CDOTA_Commander::GetLocationFromGrid(this, *(v2 - 1), *v2);
    v3 = (v3 + 12);
    v1 += 64;
    v2 += 2;
  }
  while ( v3 != &this->m_GoodGuys.m_LaningSpeech.m_Opponents[5].m_fLastSeen );
}


// CDOTA_Commander::GetUnusedBotName  (line 612, @0x00000000027ff620, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, FStrEq, FastRemove, Find, FindAndFastRemove, GrowMemory, Random, _V_strcmp, memcpy, operator[], ~CUtlVector
// calls: CUtlMemory<int, int>::Grow, CDOTA_PlayerResource::GetPlayer, strcmp, RandomInt, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTAGamerules::CreateDemoPlayers, CDOTA_Tutorial::AddBot, CDOTA_Tutorial::AddBotWithSettings, CDOTA_Grinder::StartHeroes, DebugCreateUnit, CDOTA_TeamCommander::UpdateHeroSelections
// globals: pszBotNames
const char *__fastcall CDOTA_Commander::GetUnusedBotName(CDOTA_Commander *const this)
{
  int m_nAllocationCount; // eax
  int v2; // r12d
  __int64 v3; // rbx
  int *v4; // rax
  int m_Size; // edx
  int i; // r13d
  __int64 j; // rbx
  CDOTAPlayer *Player; // rax
  const char *v9; // rax
  const char *v10; // rdi
  int *v11; // rdx
  int v12; // eax
  int v13; // ecx
  const char *v14; // rbx
  CUtlVector<int,CUtlMemory<int,int> > m_ValidNames; // [rsp+0h] [rbp-50h] BYREF

  m_nAllocationCount = 0;
  v2 = 0;
  v3 = 0;
  m_ValidNames.m_Size = 0;
  m_ValidNames.m_Memory.m_pMemory = 0;
  m_ValidNames.m_Memory.m_nAllocationCount = 0;
  m_ValidNames.m_Memory.m_nGrowSize = 0;
  while ( 1 )
  {
    m_Size = v3;
    if ( v3 == m_nAllocationCount )
    {
      CUtlMemory<int,int>::Grow(&m_ValidNames.m_Memory, 1);
      m_Size = m_ValidNames.m_Size;
    }
    m_ValidNames.m_Size = m_Size + 1;
    v4 = &m_ValidNames.m_Memory.m_pMemory[v3];
    if ( v4 != 0 )
      *v4 = v2;
    if ( ++v2 == 46 )
      break;
    v3 = m_ValidNames.m_Size;
    m_nAllocationCount = m_ValidNames.m_Memory.m_nAllocationCount;
  }
  for ( i = 0; i != 64; ++i )
  {
    for ( j = 0; j != 46; ++j )
    {
      while ( 1 )
      {
        Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, i);
        if ( Player != 0 )
        {
          v9 = (*(Player->m_PlayerInfo._vptr_IPlayerInfo + 1))(&Player->m_PlayerInfo.IPlayerInfo);
          v10 = pszBotNames[j];
          if ( (v9 == v10 || strcmp(v10, v9) == 0) && m_ValidNames.m_Size > 0 )
            break;
        }
LABEL_10:
        if ( ++j == 46 )
          goto LABEL_23;
      }
      if ( j != *m_ValidNames.m_Memory.m_pMemory )
      {
        v11 = m_ValidNames.m_Memory.m_pMemory + 1;
        v12 = 0;
        while ( ++v12 != m_ValidNames.m_Size )
        {
          if ( j == *v11++ )
          {
            if ( v12 == -1 )
              goto LABEL_10;
            goto LABEL_20;
          }
        }
        goto LABEL_10;
      }
      v12 = 0;
LABEL_20:
      v13 = m_ValidNames.m_Size - 1;
      if ( v12 != m_ValidNames.m_Size - 1 )
      {
        m_ValidNames.m_Memory.m_pMemory[v12] = m_ValidNames.m_Memory.m_pMemory[v13];
        v13 = m_ValidNames.m_Size - 1;
      }
      m_ValidNames.m_Size = v13;
    }
LABEL_23:
    ;
  }
  v14 = pszBotNames[m_ValidNames.m_Memory.m_pMemory[RandomInt(0, (m_ValidNames.m_Size - 1))]];
  CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&m_ValidNames);
  return v14;
}


// CDOTA_Commander::IsBotGame  (line 638, @0x00000000027ebe20, libserver.so)  // inlines: DOTAGameRules, GetBool, GetInt, ReplaceDisconnectedWithBots
// calls: CDOTAGamerules::IsInBotMode, CDOTA_Commander::HaveAnyBots, CDOTAGamerules::ShouldFillEmptySlotsWithBots, CDOTAGamerules::IsCheatMode
// callers: CDOTAGamerules::ClientMsg_FreeInventory, CDOTA_Commander::GameInit, dota_bot_dump_state, CDOTA_Commander::RegisterUnit, CDOTA_Commander::FrameUpdatePostEntityThink
bool __fastcall CDOTA_Commander::IsBotGame(CDOTA_Commander *const this)
{
  bool result; // al

  result = 0;
  if ( g_pGameRules != 0 && *&g_pGameRules[6].m_szQuestName[68] != 18 )
  {
    if ( CDOTAGamerules::IsInBotMode(g_pGameRules)
      || CDOTA_Commander::HaveAnyBots(this)
      || CDOTAGamerules::ShouldFillEmptySlotsWithBots(g_pGameRules) )
    {
      return 1;
    }
    result = CDOTAGamerules::IsCheatMode();
    if ( result )
      return result;
    if ( dota_tutorial_game.m_pParent->m_Value.m_nValue != 0
      || dota_bot_takeover_disconnected.m_pParent->m_Value.m_nValue != 0 )
    {
      return 1;
    }
    if ( g_pGameRules != 0 )
      return *&g_pGameRules[6].m_szQuestName[68] == 13;
  }
  return result;
}


// CDOTA_Commander::FrameUpdatePostEntityThink  (line 669, @0x0000000002806f20, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, DOTAGameRules, EnterScope, ExitScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsElapsed, IsEnabled, NetworkStateChanged, PLAT_CPU_TIME, ResetDebugLineLocation, Set, Start, State_Get, State_IsGameOver, operator=<float>, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTAGamerules::IsBotThinkingEnabled, CDOTA_Commander::IsBotGame, CDOTA_Commander::UpdateIllusionStates, CDOTA_Commander::CleanUpThinkerList, CDOTA_TeamCommander::Think, CountdownTimer::Now, CDOTA_Commander::DrawDebug, CDOTAGamerules::UpdateBotDebugData, CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int) (16 total)
// strings: "CDOTA_Commander::Think"
// globals: s_iDebugLine
void __fastcall CDOTA_Commander::FrameUpdatePostEntityThink(
        CDOTA_Commander *const this,
        const EventServerPostEntityThink_t *const msg)
{
  int m_enabled; // eax
  bool v4; // r14
  CGameRules *v5; // rax
  CGameRules *v6; // r15
  double v7; // xmm0_8
  double v8; // xmm1_8
  unsigned __int64 v9; // r12
  ThreadId_t v10; // r13
  uint64 v11; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v13; // r12
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v17; // rax
  char *v18; // [rsp+0h] [rbp-40h]
  float v19; // [rsp+Ch] [rbp-34h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v4 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v13 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_Commander::Think" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "CDOTA_Commander::Think", 0, "Bots", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v17 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v17->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v13 + __rdtsc();
  }
  if ( g_pGameRules != 0 && CDOTAGamerules::IsBotThinkingEnabled(g_pGameRules) && g_pDOTAPlayerResource != 0 )
  {
    if ( CDOTA_Commander::IsBotGame(this) )
    {
      if ( !this->m_bWasBotGame )
        CDOTA_Commander::RegisterAllUnits(this);
      v5 = g_pGameRules;
      this->m_bWasBotGame = 1;
      if ( (*&v5[6].m_szQuestName[28] - 6) > 1 )
      {
        s_iDebugLine = 6;
        CDOTA_Commander::UpdateIllusionStates(this);
        CDOTA_Commander::CleanUpThinkerList(this);
        CDOTA_TeamCommander::Think(&this->m_GoodGuys);
        CDOTA_TeamCommander::Think(&this->m_BadGuys);
        v6 = g_pGameRules;
        if ( *&g_pGameRules[19].m_szQuestName[84] > 0.0 )
        {
          if ( CountdownTimer::Now(&g_pGameRules[19].m_szQuestName[72]) < *&v6[19].m_szQuestName[84] )
          {
LABEL_16:
            CDOTA_Commander::DrawDebug(this);
            CDOTAGamerules::UpdateBotDebugData(g_pGameRules);
            if ( v4 )
              CVProfile::ExitScope(&g_VProfCurrentProfile);
            return;
          }
          v6 = g_pGameRules;
        }
        v18 = &v6[19].m_szQuestName[72];
        *&v7 = CountdownTimer::Now(&v6[19].m_szQuestName[72]);
        HIDWORD(v8) = 0;
        *&v8 = *&v7 + 1.0;
        v19 = *&v7 + 1.0;
        if ( (*&v7 + 1.0) != *&v6[19].m_szQuestName[84] )
        {
          (*(*&v6[19].m_szQuestName[72] + 16LL))(v18, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          *&v6[19].m_szQuestName[84] = v19;
        }
        if ( *&v6[19].m_szQuestName[80] != 1.0 )
        {
          (*(*&v6[19].m_szQuestName[72] + 16LL))(v18, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v7, v8, 1.0);
          *&v6[19].m_szQuestName[80] = 1065353216;
        }
        goto LABEL_16;
      }
    }
    else
    {
      this->m_bWasBotGame = 0;
    }
  }
  if ( v4 )
  {
    v9 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v10 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v10 == ThreadGetCurrentId() )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v11 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v11 - v9 + __rdtsc();
  }
}


// CDOTA_Commander::CleanUpThinkerList  (line 717, @0x00000000027fe690, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove
// callers: CDOTA_Commander::FrameUpdatePostEntityThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Commander::CleanUpThinkerList(CDOTA_Commander *const this)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_Thinkers; // r14
  int v3; // ebx
  __int64 v4; // r12
  CHandle<CBaseEntity> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  p_m_Thinkers = &this->m_Thinkers;
  v3 = this->m_Thinkers.m_Size - 1;
  v4 = v3;
  if ( v3 >= 0 )
  {
    do
    {
      v5 = &this->m_Thinkers.m_Memory.m_pMemory[v4];
      m_Index = v5->m_Index;
      if ( v5->m_Index + 2 <= 1
        || (v7 = v5->m_Index,
            (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F]) == 0)
        || (v9 = &v8[v7 & 0x1FF]) == 0
        || m_Index != v9->m_EHandle.m_Index
        || v9->m_pInstance == 0 )
      {
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(p_m_Thinkers, v3);
      }
      --v3;
      --v4;
    }
    while ( v3 != -1 );
  }
}


// CDOTA_Commander::HaveAnyBots  (line 731, @0x00000000027ebd80, libserver.so)
// callers: CDOTA_Commander::IsBotGame, CDOTA_Commander::OnCourierCreated, CDOTA_Commander::OnDidDamage, CDOTA_Commander::OnAttacked, CDOTA_Commander::OnRunePickup, CDOTA_Commander::OnRuneSpawn, CDOTA_Commander::OnTakeDamage, CDOTA_Commander::OnAbilityExecuted
bool __fastcall CDOTA_Commander::HaveAnyBots(CDOTA_Commander *const this)
{
  int m_Size; // ecx
  CDOTA_Bot **m_pMemory; // rdx
  bool result; // al
  __int64 *v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rsi
  int v7; // ecx
  CDOTA_Bot **v8; // rdx
  __int64 *v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rsi

  m_Size = this->m_GoodGuys.m_BotList.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_GoodGuys.m_BotList.m_Memory.m_pMemory;
    result = (*m_pMemory)->m_bHuman;
    if ( !result )
      return 1;
    v4 = (m_pMemory + 1);
    v5 = &v4[m_Size - 1];
    while ( v4 != v5 )
    {
      v6 = *v4++;
      if ( *(v6 + 176) == 0 )
        return result;
    }
  }
  v7 = this->m_BadGuys.m_BotList.m_Size;
  if ( v7 <= 0 )
    return 0;
  v8 = this->m_BadGuys.m_BotList.m_Memory.m_pMemory;
  result = (*v8)->m_bHuman;
  if ( !result )
    return 1;
  v9 = (v8 + 1);
  v10 = &v9[v7 - 1];
  if ( v9 == v10 )
    return 0;
  while ( 1 )
  {
    v11 = *v9++;
    if ( *(v11 + 176) == 0 )
      break;
    if ( v9 == v10 )
      return 0;
  }
  return result;
}


// CDOTA_Commander::ReplaceDisconnectedWithBots  (line 749, @0x00000000027ec190, libserver.so)  // inlines: DOTAGameRules
// callers: CDOTAGamerules::OnLobbyUpdated, CDOTAGamerules::PlayerSpawn, CDOTAGamerules::ClientDisconnected, CDOTA_PlayerResource::FindOrCreatePlayerID, CDOTA_TeamCommander::UpdateDisabledBots
bool __fastcall CDOTA_Commander::ReplaceDisconnectedWithBots(CDOTA_Commander *const this)
{
  bool result; // al

  result = 1;
  if ( dota_bot_takeover_disconnected.m_pParent->m_Value.m_nValue == 0 )
    return g_pGameRules != 0 && *&g_pGameRules[6].m_szQuestName[68] == 13;
  return result;
}


// CDOTA_Commander::OnSpawn  (line 762, @0x00000000027ec1d0, libserver.so)
// calls: CDOTA_TeamCommander::OnSpawn
// callers: CDOTA_BaseNPC_Hero::Spawn
void __fastcall CDOTA_Commander::OnSpawn(CDOTA_Commander *const this, CDOTA_BaseNPC *pUnit)
{
  CDOTA_TeamCommander::OnSpawn(&this->m_GoodGuys, pUnit);
  CDOTA_TeamCommander::OnSpawn(&this->m_BadGuys, pUnit);
}


// CDOTA_Commander::OnDeath  (line 771, @0x00000000027ec200, libserver.so)
// calls: CDOTA_TeamCommander::OnDeath
// callers: CDOTA_BaseNPC_Hero::Event_Killed
void __fastcall CDOTA_Commander::OnDeath(CDOTA_Commander *const this, CDOTA_BaseNPC *pUnit)
{
  CDOTA_TeamCommander::OnDeath(&this->m_GoodGuys, pUnit);
  CDOTA_TeamCommander::OnDeath(&this->m_BadGuys, pUnit);
}


// CDOTA_Commander::OnHeroKill  (line 780, @0x00000000027ec230, libserver.so)
// calls: CDOTA_TeamCommander::OnHeroKill
// callers: CDOTAHeroList::DistributeRewardsForKill
void __fastcall CDOTA_Commander::OnHeroKill(
        CDOTA_Commander *const this,
        CDOTA_BaseNPC_Hero *pKillerHero,
        CDOTA_BaseNPC_Hero *pVictimHero)
{
  CDOTA_TeamCommander::OnHeroKill(&this->m_GoodGuys, pKillerHero, pVictimHero);
  CDOTA_TeamCommander::OnHeroKill(&this->m_BadGuys, pKillerHero, pVictimHero);
}


// CDOTA_Commander::OnCourierCreated  (line 789, @0x00000000027ec270, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Commander::HaveAnyBots, CDOTA_TeamCommander::OnCourierCreated
// callers: CDOTA_Unit_Courier::Spawn
void __fastcall CDOTA_Commander::OnCourierCreated(CDOTA_Commander *const this, CDOTA_BaseNPC *pCourier)
{
  unsigned __int8 m_Value; // al

  if ( CDOTA_Commander::HaveAnyBots(this) )
  {
    m_Value = pCourier->m_iTeamNum.m_Value;
    if ( m_Value == 2 )
    {
      CDOTA_TeamCommander::OnCourierCreated(&this->m_GoodGuys, pCourier);
      m_Value = pCourier->m_iTeamNum.m_Value;
    }
    if ( m_Value == 3 )
      CDOTA_TeamCommander::OnCourierCreated(&this->m_BadGuys, pCourier);
  }
}


// CDOTA_Commander::OnDidDamage  (line 806, @0x00000000027ec2d0, libserver.so)
// calls: CDOTA_Commander::HaveAnyBots
// callers: CDOTA_BaseNPC_Hero::OnTakeDamage_Alive
void __fastcall CDOTA_Commander::OnDidDamage(
        CDOTA_Commander *const this,
        CDOTA_BaseNPC *pUnit,
        CDOTA_BaseNPC *pTarget,
        CDOTABaseAbility *pInflictor,
        int iAmount)
{
  CDOTA_Bot *m_pBot; // rdi

  if ( CDOTA_Commander::HaveAnyBots(this) && pUnit != 0 )
  {
    m_pBot = pUnit->m_pBot;
    if ( m_pBot != 0 )
      (*(m_pBot->_vptr_CDOTA_Bot + 21))(m_pBot, pTarget, pInflictor, iAmount);
  }
}


// CDOTA_Commander::OnTakeDamage  (line 819, @0x00000000027ed940, libserver.so)  // inlines: ToDOTABaseNPCHero
// calls: CDOTA_Commander::HaveAnyBots, CDOTA_BaseNPC::GetOpposingTeamNumber, CBaseModelEntity::CanBeSeenByTeam, CDOTA_Commander::FindIllusionState
// callers: CDOTA_BaseNPC_Hero::OnTakeDamage_Alive
void __fastcall CDOTA_Commander::OnTakeDamage(
        CDOTA_Commander *const this,
        CDOTA_BaseNPC *pUnit,
        const CTakeDamageInfo *const info)
{
  CDOTA_Bot *m_pBot; // rdi
  int OpposingTeamNumber; // eax
  sIllusionState *IllusionState; // rax
  int v9; // esi

  if ( CDOTA_Commander::HaveAnyBots(this) )
  {
    if ( pUnit != 0 )
    {
      m_pBot = pUnit->m_pBot;
      if ( m_pBot != 0 )
        (*(m_pBot->_vptr_CDOTA_Bot + 22))(m_pBot, info);
      OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(pUnit);
      if ( CBaseModelEntity::CanBeSeenByTeam(pUnit, OpposingTeamNumber) && (pUnit->m_iUnitType & 1) != 0 )
      {
        IllusionState = CDOTA_Commander::FindIllusionState(this, pUnit);
        if ( IllusionState != 0 && IllusionState->iState == DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_UNKNOWN )
          IllusionState->iState = pUnit->m_bIsIllusion.m_Value
                                ? DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_CONFIRMED
                                : DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_NOT;
      }
    }
    else
    {
      v9 = CDOTA_BaseNPC::GetOpposingTeamNumber(0);
      CBaseModelEntity::CanBeSeenByTeam(0, v9);
    }
  }
}


// CDOTA_Commander::OnAttacked  (line 856, @0x00000000027ec330, libserver.so)
// calls: CDOTA_Commander::HaveAnyBots
// callers: DamageImpact
void __fastcall CDOTA_Commander::OnAttacked(
        CDOTA_Commander *const this,
        CDOTA_BaseNPC *pUnit,
        const CDOTA_AttackRecord *pRecord)
{
  CDOTA_Bot *m_pBot; // rdi

  if ( CDOTA_Commander::HaveAnyBots(this) && pUnit != 0 )
  {
    m_pBot = pUnit->m_pBot;
    if ( m_pBot != 0 )
      (*(m_pBot->_vptr_CDOTA_Bot + 23))(m_pBot, pRecord);
  }
}


// CDOTA_Commander::OnAbilityCreated  (line 869, @0x00000000027ec380, libserver.so)
// callers: CDOTABaseAbility::UpgradeAbility
void __fastcall CDOTA_Commander::OnAbilityCreated(
        CDOTA_Commander *const this,
        CDOTA_BaseNPC *pUnit,
        CDOTABaseAbility *pAbility)
{
  CDOTA_Bot *m_pBot; // rdi

  if ( pUnit != 0 )
  {
    m_pBot = pUnit->m_pBot;
    if ( m_pBot != 0 )
      (*(m_pBot->_vptr_CDOTA_Bot + 24))(m_pBot, pAbility);
  }
}


// CDOTA_Commander::OnAbilityExecuted  (line 879, @0x00000000027eda10, libserver.so)  // inlines: ClearIllusionState, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Commander::HaveAnyBots, CDOTA_BaseNPC::GetOpposingTeamNumber, CBaseModelEntity::CanBeSeenByTeam, CDOTA_Commander::FindIllusionState, strcmp
// callers: CDOTABaseAbility::EndChannel, CDOTABaseAbility::ToggleAbility, CDOTABaseAbility::CastAbility
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Commander::OnAbilityExecuted(
        CDOTA_Commander *const this,
        CDOTA_BaseNPC *pUnit,
        CDOTABaseAbility *pAbility,
        CBaseEntity *pTarget)
{
  CDOTA_Bot *m_pBot; // rdi
  int OpposingTeamNumber; // eax
  CDOTA_Bot_AbilityUsage *m_pBotUsage; // rdi
  sIllusionState *v11; // rax
  sIllusionState *IllusionState; // rax
  const char *v13; // rcx
  __int64 v14; // rbx
  sIllusionState *v15; // r12
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CEntityInstance *m_pInstance; // rax
  const char *m_pAsString; // rsi
  const char *v20; // rdi
  int v21; // eax
  int v22; // eax
  const char *v23; // [rsp+8h] [rbp-38h]

  if ( CDOTA_Commander::HaveAnyBots(this) )
  {
    if ( pUnit != 0 )
    {
      m_pBot = pUnit->m_pBot;
      if ( m_pBot != 0 )
        (*(m_pBot->_vptr_CDOTA_Bot + 25))(m_pBot, pAbility, pTarget);
      OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(pUnit);
      if ( CBaseModelEntity::CanBeSeenByTeam(pUnit, OpposingTeamNumber) && (pUnit->m_iUnitType & 1) != 0 )
      {
        IllusionState = CDOTA_Commander::FindIllusionState(this, pUnit);
        if ( IllusionState != 0 && IllusionState->iState == DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_UNKNOWN )
          IllusionState->iState = DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_NOT;
        if ( this->m_IllusionStates.m_Size > 0 )
        {
          v13 = "";
          v14 = 0;
          do
          {
            v15 = &this->m_IllusionStates.m_Memory.m_pMemory[v14];
            if ( v15->hHero.m_Index + 2 <= 1
              || (v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->hHero.m_Index) >> 9) & 0x3F]) == 0
              || (v17 = &v16[v15->hHero.m_Index & 0x1FF]) == 0
              || v15->hHero.m_Index != v17->m_EHandle.m_Index
              || (m_pInstance = v17->m_pInstance, v17->m_pInstance == 0)
              || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
              || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
            {
              m_pInstance = 0;
            }
            if ( v15->iState == DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_UNKNOWN
              && m_pInstance != 0
              && pUnit != m_pInstance )
            {
              m_pAsString = pUnit->m_iszUnitName.m_Value.u.m_pAsString;
              v20 = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
              if ( m_pAsString == 0 )
                m_pAsString = v13;
              if ( v20 == 0 )
                v20 = v13;
              if ( m_pAsString == v20 || (v23 = v13, v21 = strcmp(v20, m_pAsString), v13 = v23, v21 == 0) )
                v15->iState = DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_CONFIRMED;
            }
            ++v14;
          }
          while ( v14 < this->m_IllusionStates.m_Size );
        }
      }
    }
    else
    {
      v22 = CDOTA_BaseNPC::GetOpposingTeamNumber(0);
      CBaseModelEntity::CanBeSeenByTeam(0, v22);
    }
    if ( pAbility != 0 )
    {
      m_pBotUsage = pAbility->m_pBotUsage;
      if ( m_pBotUsage != 0
        && (*(m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 4))(m_pBotUsage) != 0
        && pUnit != 0
        && (pUnit->m_iUnitType & 1) != 0 )
      {
        v11 = CDOTA_Commander::FindIllusionState(this, pUnit);
        if ( v11 != 0 )
          v11->iState = DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_UNKNOWN;
      }
    }
  }
}


// CDOTA_Commander::OnItemEquip  (line 932, @0x00000000027ec3b0, libserver.so)
// callers: CDOTA_Item::OnUnequip, CDOTA_Item::OnEquip
void __fastcall CDOTA_Commander::OnItemEquip(
        CDOTA_Commander *const this,
        CDOTA_BaseNPC *pUnit,
        CDOTA_Item *pItem,
        bool bEquip)
{
  CDOTA_Bot *m_pBot; // rdi

  if ( pUnit != 0 )
  {
    m_pBot = pUnit->m_pBot;
    if ( m_pBot != 0 )
      (*(m_pBot->_vptr_CDOTA_Bot + 26))(m_pBot, pItem, bEquip);
  }
}


// CDOTA_Commander::OnRunePickup  (line 942, @0x00000000027ec3f0, libserver.so)
// calls: CDOTA_Commander::HaveAnyBots, CDOTA_TeamCommander::OnRunePickup
// callers: CDOTA_BaseNPC::HandleRunePickup
void __fastcall CDOTA_Commander::OnRunePickup(CDOTA_Commander *const this, CDOTA_Item_Rune *pRune)
{
  if ( CDOTA_Commander::HaveAnyBots(this) )
  {
    CDOTA_TeamCommander::OnRunePickup(&this->m_GoodGuys, pRune);
    CDOTA_TeamCommander::OnRunePickup(&this->m_BadGuys, pRune);
  }
}


// CDOTA_Commander::OnRuneSpawn  (line 953, @0x00000000027ec430, libserver.so)
// calls: CDOTA_Commander::HaveAnyBots, CDOTA_TeamCommander::OnRuneSpawn
// callers: CDOTABaseGameMode::SpawnRunes, CDOTAGamerules::SpawnRune
void __fastcall CDOTA_Commander::OnRuneSpawn(CDOTA_Commander *const this)
{
  if ( CDOTA_Commander::HaveAnyBots(this) )
  {
    CDOTA_TeamCommander::OnRuneSpawn(&this->m_GoodGuys);
    CDOTA_TeamCommander::OnRuneSpawn(&this->m_BadGuys);
  }
}


// CDOTA_Commander::GetLocationFromGrid  (line 964, @0x00000000027ec470, libserver.so)  // inlines: Clamp<int>, RemapVal, operator[]
// callers: CDOTA_Commander::ComputeWardLocations, CDOTA_Commander::AreGridNavCellsOfNeighborsPassible, CDOTA_Commander::DoPassabilityGridAnalysis, CDOTA_Commander::UpdatePassabilityGrid, CDOTA_Commander::ActiveSpawnGroupChanged, CDOTA_Bot_Pathing::FindNearbyValidGrid, CDOTA_Bot_Pathing::FindNearbyValidLocation, CDOTA_TeamCommander::IsGridVisibleToEnemy, CDOTA_TeamCommander::GetLocationFromGrid, CDOTA_TeamCommander::DrawDebugGrid, CDOTA_Bot_Pathing::UpdateSearch, CDOTA_TeamCommander::UpdatePotentialLocationGrid (14 total)
Vector __fastcall CDOTA_Commander::GetLocationFromGrid(CDOTA_Commander *const this, int x, int y)
{
  int v3; // ecx
  __m128 v4; // xmm3
  int v5; // eax
  float v6; // xmm6_4
  float v7; // xmm5_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  __m128 y_low; // xmm4
  float v12; // xmm0_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  __m128 x_low; // xmm5
  float v16; // xmm2_4
  __m128 v18; // xmm5
  __m128 v19; // xmm2
  __m128 v20; // xmm6
  __m128 v21; // xmm3
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v3 = this->m_iGridCount[0];
  if ( x >= 0 )
  {
    v4 = 0;
    v5 = this->m_iGridCount[1];
    if ( v3 <= x )
      x = this->m_iGridCount[0];
    v6 = x;
    if ( y >= 0 )
      goto LABEL_5;
LABEL_16:
    v7 = v4.m128_f32[0];
    y = 0;
    goto LABEL_8;
  }
  x = 0;
  v4 = 0;
  v5 = this->m_iGridCount[1];
  v6 = 0.0;
  if ( y < 0 )
    goto LABEL_16;
LABEL_5:
  if ( v5 <= y )
    y = v5;
  v7 = y;
LABEL_8:
  v8 = v5;
  v9 = this->m_vWorldBounds[1].y;
  y_low = LODWORD(this->m_vWorldBounds[0].y);
  result.z = this->m_HeightGrid.m_Memory.m_pMemory[v5 * x + y];
  if ( v5 == v4.m128_f32[0] )
  {
    v18.m128_f32[0] = v7 - v8;
    v19 = _mm_cmple_ss(v4, v18);
    LODWORD(v12) = _mm_andnot_ps(v19, y_low).m128_u32[0] | LODWORD(v9) & v19.m128_i32[0];
  }
  else
  {
    v12 = (((v9 - y_low.m128_f32[0]) * v7) / v8) + y_low.m128_f32[0];
  }
  v13 = v3;
  v14 = this->m_vWorldBounds[1].x;
  x_low = LODWORD(this->m_vWorldBounds[0].x);
  if ( v3 == v4.m128_f32[0] )
  {
    v20.m128_f32[0] = v6 - v13;
    v21 = _mm_cmple_ss(v4, v20);
    LODWORD(v16) = _mm_andnot_ps(v21, x_low).m128_u32[0] | LODWORD(v14) & v21.m128_i32[0];
  }
  else
  {
    v16 = (((v14 - x_low.m128_f32[0]) * v6) / v13) + x_low.m128_f32[0];
  }
  *&result.x = __PAIR64__(LODWORD(v12), LODWORD(v16));
  return result;
}


// CDOTA_Commander::GetGridFromLocation  (line 975, @0x00000000027ec7b0, libserver.so)  // inlines: GetGridSizeX, GetGridSizeY, RemapValClamped, clamp<float, float>
// callers: CDOTA_Commander::IsLocationPassable, CDOTA_Commander::GetLocationHeightLevel, CDOTA_Commander::GetLocationHeight, CDOTA_Commander::UpdatePassabilityGrid, CDOTA_Bot_Pathing::FindNearbyValidGrid, CDOTA_Bot_Pathing::IsPathClear, CDOTA_TeamCommander::GetPotentialLocationValues, CDOTA_TeamCommander::GetRawAvoidanceForLocation, CDOTA_TeamCommander::InTowerAvoidanceLocation, CDOTA_TeamCommander::InInnerTowerAvoidanceLocation, CDOTA_TeamCommander::InFountainAvoidanceLocation, CDOTA_TeamCommander::InEffectAvoidanceLocation (20 total)
void __fastcall CDOTA_Commander::GetGridFromLocation(
        CDOTA_Commander *const this,
        const Vector *const vLoc,
        int *pX,
        int *pY)
{
  int v4; // eax
  float x; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm3_4
  float v8; // xmm5_4
  float v9; // xmm0_4
  int v10; // eax
  int v11; // eax
  float y; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm5_4
  float v15; // xmm6_4
  float v16; // xmm0_4
  int v17; // eax
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm0_4

  v4 = this->m_iGridCount[0];
  x = this->m_vWorldBounds[1].x;
  v6 = this->m_vWorldBounds[0].x;
  v7 = x - v6;
  v8 = (v4 - 1);
  v9 = (((x - v6) / v4) * 0.5) + vLoc->x;
  if ( x == v6 )
  {
    v10 = 0;
    if ( (v9 - x) >= 0.0 )
      v10 = v8;
  }
  else
  {
    v18 = 0.0;
    v19 = (v9 - v6) / v7;
    if ( v19 >= 0.0 )
      v18 = fminf(1.0, v19);
    v10 = ((v18 * v8) + 0.0);
  }
  *pX = v10;
  v11 = this->m_iGridCount[1];
  y = this->m_vWorldBounds[1].y;
  v13 = this->m_vWorldBounds[0].y;
  v14 = y - v13;
  v15 = (v11 - 1);
  v16 = (((y - v13) / v11) * 0.5) + vLoc->y;
  if ( y == v13 )
  {
    v17 = 0;
    if ( (v16 - y) >= 0.0 )
      v17 = v15;
    *pY = v17;
  }
  else
  {
    v20 = v16 - v13;
    v21 = 0.0;
    v22 = v20 / v14;
    if ( v22 >= 0.0 )
      v21 = fminf(1.0, v22);
    *pY = ((v21 * v15) + 0.0);
  }
}


// CDOTA_Commander::UpdatePassabilityGrid  (line 983, @0x00000000027fa280, libserver.so)  // inlines: CHangWatchdogScope, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CVProfScope, End, FastSqrt, Get, GetInstance, GetMilliseconds64, IsEnabled, Length2D, PLAT_CPU_TIME, Plat_TickDiffMilliSec, Purge, Sample, Start, ToDOTABaseNPC, ToDOTABuilding, VectorAdd, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator+, operator-, operator[], ~CHangWatchdogScope, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat, ~CVProfScope
// calls: HangWatchdogInternal_BeginScope, CDOTA_Commander::DoPassabilityGridAnalysis, LoggingSystem_IsChannelEnabled, FindUnitsInRadius, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Commander::GetGridFromLocation, CDOTA_Commander::GetLocationFromGrid, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CVProfile::ExitScope, HangWatchdogInternal_EndScope, CUtlMemory<CHandle<CBaseEntity>, int>::Purge (18 total)
// callers: CDOTA_Commander::ActiveSpawnGroupChanged
// strings: "Bot Passability Analysis", "CDOTA_Commander::UpdatePassabilityGrid() took %llums for %ix%i grid.\n", "CDOTA_Commander::UpdatePassabilityGrid"
void __fastcall CDOTA_Commander::UpdatePassabilityGrid(CDOTA_Commander *const this)
{
  int m_enabled; // eax
  int v3; // r14d
  unsigned __int64 j; // r13
  int v5; // ebx
  unsigned __int64 v6; // rbx
  CEntityInstance *v7; // rax
  const CBaseEntity *v8; // r14
  const Vector *AbsOrigin; // rax
  vec_t v10; // xmm1_4
  vec_t z; // xmm2_4
  const Vector *v12; // rax
  vec_t v13; // xmm1_4
  vec_t v14; // xmm4_4
  int k; // r13d
  int m; // ebx
  const Vector *v17; // rax
  int v18; // eax
  int v19; // r15d
  int v20; // r14d
  unsigned __int64 CPUFrequency; // rax
  __int64 v22; // [rsp+38h] [rbp-198h]
  bool VProf_987; // [rsp+43h] [rbp-18Dh]
  int i; // [rsp+44h] [rbp-18Ch]
  float v25; // [rsp+48h] [rbp-188h]
  int x1; // [rsp+50h] [rbp-180h] BYREF
  int y1; // [rsp+54h] [rbp-17Ch] BYREF
  int x2; // [rsp+58h] [rbp-178h] BYREF
  int y2; // [rsp+5Ch] [rbp-174h] BYREF
  Vector LocationFromGrid; // [rsp+60h] [rbp-170h] BYREF
  CHangWatchdogScope hang_watchdog_scope_check_object; // [rsp+70h] [rbp-160h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hBuildings; // [rsp+80h] [rbp-150h] BYREF
  unsigned __int64 v33; // [rsp+198h] [rbp-38h]

  hang_watchdog_scope_check_object.m_bDisableDetection = 0;
  v33 = __readfsqword(0x28u);
  hang_watchdog_scope_check_object.m_pScopeName = "Bot Passability Analysis";
  HangWatchdogInternal_BeginScope(&hang_watchdog_scope_check_object);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_987 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_Commander::UpdatePassabilityGrid", 0, "Bots", 0, 4);
  v3 = 0;
  for ( j = __rdtsc(); this->m_iGridCount[0] > v3; ++v3 )
  {
    if ( this->m_iGridCount[1] > 0 )
    {
      v5 = 0;
      do
        CDOTA_Commander::DoPassabilityGridAnalysis(this, v3, v5++);
      while ( this->m_iGridCount[1] > v5 );
    }
  }
  v6 = __rdtsc() - j;
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
  {
    v19 = this->m_iGridCount[1];
    v20 = this->m_iGridCount[0];
    CPUFrequency = Plat_GetCPUFrequency();
    LoggingSystem_Log(
      LOG_SERVER,
      0,
      "CDOTA_Commander::UpdatePassabilityGrid() took %llums for %ix%i grid.\n",
      1000 * (v6 % CPUFrequency) / CPUFrequency + 1000 * (v6 / CPUFrequency),
      v20,
      v19);
  }
  hBuildings.m_Size = 0;
  hBuildings.m_Memory.m_nAllocationCount = 64;
  hBuildings.m_Memory.m_nGrowSize = 0x80000000;
  hBuildings.m_Memory.m_pMemory = &hBuildings.m_FixedMemory;
  FindUnitsInRadius(2, &vec3_origin, 0, -1.0, &hBuildings, 3, 4, 64, 0, 0);
  if ( hBuildings.m_Size > 0 )
  {
    v22 = 0;
    i = 0;
    do
    {
      v7 = CEntityHandle::operator CEntityInstance *(&hBuildings.m_Memory.m_pMemory[v22]);
      v8 = v7;
      if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 && (v7[43].m_iszPrivateVScripts.u.m_Id & 0x14) != 0 )
      {
        v25 = *(&v7[48]._vptr_IHandleEntity + 1);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
        v10 = AbsOrigin->x - v25;
        z = AbsOrigin->z;
        LocationFromGrid.y = AbsOrigin->y - v25;
        LocationFromGrid.x = v10;
        LocationFromGrid.z = z;
        CDOTA_Commander::GetGridFromLocation(this, &LocationFromGrid, &x1, &y1);
        v12 = CBaseEntity::GetAbsOrigin(v8);
        v13 = v12->y + v25;
        v14 = v25 + v12->x;
        LocationFromGrid.z = v12->z + 0.0;
        LocationFromGrid.y = v13;
        LocationFromGrid.x = v14;
        CDOTA_Commander::GetGridFromLocation(this, &LocationFromGrid, &x2, &y2);
        for ( k = x1; x2 >= k; ++k )
        {
          for ( m = y1; y2 >= m; this->m_PassabilityGrid.m_Memory.m_pMemory[v18] = 0 )
          {
            while ( 1 )
            {
              LocationFromGrid = CDOTA_Commander::GetLocationFromGrid(this, k, m);
              v17 = CBaseEntity::GetAbsOrigin(v8);
              if ( v25 > fsqrt(
                           ((v17->x - LocationFromGrid.x) * (v17->x - LocationFromGrid.x))
                         + ((v17->y - LocationFromGrid.y) * (v17->y - LocationFromGrid.y))) )
                break;
              if ( y2 < ++m )
                goto LABEL_21;
            }
            v18 = m + k * this->m_iGridCount[1];
            ++m;
          }
LABEL_21:
          ;
        }
      }
      ++i;
      ++v22;
    }
    while ( hBuildings.m_Size > i );
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hBuildings);
  if ( (hBuildings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hBuildings.m_Memory);
    if ( (hBuildings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hBuildings.m_Memory);
  }
  if ( VProf_987 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  HangWatchdogInternal_EndScope(&hang_watchdog_scope_check_object);
}


// CDOTA_Commander::AreGridNavCellsOfNeighborsPassible  (line 1085, @0x00000000027ec8d0, libserver.so)  // inlines: GetCellFlags, IsCellPassable, OutOfBounds, VectorAdd, VectorMultiply, VectorSubtract, WorldToGridPosX, WorldToGridPosY, operator*, operator+, operator+=, operator-
// calls: CDOTA_Commander::GetLocationFromGrid, floorf
// callers: CDOTA_Commander::DoPassabilityGridAnalysis
bool __fastcall CDOTA_Commander::AreGridNavCellsOfNeighborsPassible(CDOTA_Commander *const this, int gridX, int gridY)
{
  bool result; // al
  int v7; // r13d
  int v8; // r12d
  int v9; // ebx
  int v10; // edx
  int m_nMinX; // edi
  int m_nMinY; // r9d
  int m_nWidth; // ecx
  int m_nMaxX; // r8d
  unsigned __int8 *v15; // r10
  int v16; // r14d
  unsigned __int8 *v17; // rsi
  int v18; // edx
  float v19; // [rsp+8h] [rbp-68h]
  float m_flOffsetX; // [rsp+Ch] [rbp-64h]
  float v21; // [rsp+10h] [rbp-60h]
  float m_flOffsetY; // [rsp+14h] [rbp-5Ch]
  float m_flEdgeSize; // [rsp+1Ch] [rbp-54h]
  Vector LocationFromGrid; // 0:kr00_12.12
  Vector v25; // 0:kr14_12.12

  if ( gridX <= 0 || gridY <= 0 || gridX >= this->m_iGridCount[0] - 1 || gridY >= this->m_iGridCount[1] - 1 )
    return 0;
  LocationFromGrid = CDOTA_Commander::GetLocationFromGrid(this, gridX - 1, gridY - 1);
  v25 = CDOTA_Commander::GetLocationFromGrid(this, gridX + 1, gridY + 1);
  m_flEdgeSize = g_GridNav.m_flEdgeSize;
  m_flOffsetX = g_GridNav.m_flOffsetX;
  v19 = (v25.x + LocationFromGrid.x) * 0.5;
  v21 = (LocationFromGrid.y + v25.y) * 0.5;
  v7 = floorf(
         (((((LocationFromGrid.x - v19) * 0.25) + LocationFromGrid.x) - m_flOffsetX) + (0.5 * m_flEdgeSize))
       / m_flEdgeSize);
  m_flOffsetY = g_GridNav.m_flOffsetY;
  v8 = floorf(
         (((((LocationFromGrid.y - v21) * 0.25) + LocationFromGrid.y) - m_flOffsetY) + (0.5 * m_flEdgeSize))
       / m_flEdgeSize);
  v9 = floorf((((((v25.x - v19) * 0.25) + v25.x) - m_flOffsetX) + (0.5 * m_flEdgeSize)) / m_flEdgeSize);
  v10 = floorf((((((v25.y - v21) * 0.25) + v25.y) - m_flOffsetY) + (0.5 * m_flEdgeSize)) / m_flEdgeSize);
  if ( v8 > v10 )
    return 1;
  m_nMinX = g_GridNav.m_nMinX;
  m_nMinY = g_GridNav.m_nMinY;
  m_nWidth = g_GridNav.m_nWidth;
  m_nMaxX = g_GridNav.m_nMaxX;
  result = 1;
  v15 = &g_GridNav.m_CellFlags.m_Memory.m_pMemory[v7 - m_nMinX + (v8 - m_nMinY) * m_nWidth];
  v16 = v10 + 1;
  do
  {
    if ( v7 <= v9 )
    {
      if ( v7 >= m_nMinX && v7 <= m_nMaxX )
      {
        v17 = v15;
        v18 = v7;
        do
        {
          if ( m_nMinY > v8 || v8 > g_GridNav.m_nMaxY || (*v17 & 1) == 0 || (*v17 & 2) != 0 )
            break;
          if ( ++v18 > v9 )
            goto LABEL_20;
          if ( v18 < m_nMinX )
            break;
          ++v17;
        }
        while ( v18 <= m_nMaxX );
      }
      result = 0;
    }
LABEL_20:
    ++v8;
    v15 += m_nWidth;
  }
  while ( v8 != v16 );
  return result;
}


// CDOTA_Commander::DoPassabilityGridAnalysis  (line 1129, @0x00000000027ecb70, libserver.so)  // inlines: Base, CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl, Clamp<int>, OutOfBounds, Purge, RemoveAll, VectorAdd, VectorMultiply, VectorSubtract, WorldToGridPosX, WorldToGridPosY, operator*, operator+, operator+=, operator-, operator[], ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl
// calls: CDOTA_Commander::AreGridNavCellsOfNeighborsPassible, CDOTA_Commander::GetLocationFromGrid, floorf, CGridNav::IsEnclosed, CGridNav::BuildPath, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Commander::UpdatePassabilityGrid
void __fastcall CDOTA_Commander::DoPassabilityGridAnalysis(CDOTA_Commander *const this, int gridX, int gridY)
{
  int v6; // r8d
  sGridLocation *p_y; // rbx
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  int v11; // edx
  int v12; // esi
  char v13; // di
  char v14; // di
  void (__fastcall *v15)(_QWORD *, CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int>::ElemType_t *); // rdx
  float v16; // [rsp+2Ch] [rbp-184h]
  int nTestPosX; // [rsp+38h] [rbp-178h]
  float v18; // [rsp+3Ch] [rbp-174h]
  float nGoalGridPosYa; // [rsp+40h] [rbp-170h]
  int nGoalGridPosY; // [rsp+40h] [rbp-170h]
  int xa; // [rsp+48h] [rbp-168h]
  int xb; // [rsp+48h] [rbp-168h]
  int x; // [rsp+48h] [rbp-168h]
  int nTestPosY; // [rsp+4Ch] [rbp-164h]
  float m_flEdgeSize; // [rsp+50h] [rbp-160h]
  int y; // [rsp+68h] [rbp-148h]
  bool bFoundValidTraverse; // [rsp+6Eh] [rbp-142h]
  bool bFoundBlockedTraverse; // [rsp+6Fh] [rbp-141h]
  bool bReachedGoal; // [rsp+7Fh] [rbp-131h] BYREF
  Vector v30; // [rsp+80h] [rbp-130h]
  Vector v31; // [rsp+90h] [rbp-120h]
  GridNavDirectionVec_t dirPath; // [rsp+A0h] [rbp-110h] BYREF
  unsigned __int64 v33; // [rsp+178h] [rbp-38h]
  Vector LocationFromGrid; // 0:kr00_12.12
  Vector v35; // 0:kr14_12.12

  v33 = __readfsqword(0x28u);
  if ( CDOTA_Commander::AreGridNavCellsOfNeighborsPassible(this, gridX, gridY) )
  {
    this->m_PassabilityGrid.m_Memory.m_pMemory[this->m_iGridCount[1] * gridX + gridY] = 1;
  }
  else
  {
    v6 = this->m_iGridCount[1];
    bFoundValidTraverse = 0;
    p_y = &offsets[0].y;
    bFoundBlockedTraverse = 0;
    do
    {
      while ( 1 )
      {
        v8 = p_y[-1].y + gridX;
        v9 = p_y[4].x;
        v10 = this->m_iGridCount[0];
        if ( v8 >= 0 && v8 <= v10 )
        {
          v11 = gridY + p_y->x;
          if ( v11 >= 0 && v11 <= v6 )
          {
            v12 = gridX + p_y[3].y;
            if ( v12 >= 0 && v12 <= v10 && gridY + v9 >= 0 && gridY + v9 <= v6 )
              break;
          }
        }
        if ( ++p_y == &offsets[4].y )
          goto LABEL_8;
      }
      xa = gridX + p_y[3].y;
      y = gridY + v9;
      LocationFromGrid = CDOTA_Commander::GetLocationFromGrid(this, v8, v11);
      v30 = LocationFromGrid;
      v35 = CDOTA_Commander::GetLocationFromGrid(this, xa, y);
      v31 = v35;
      m_flEdgeSize = g_GridNav.m_flEdgeSize;
      xb = SLODWORD(g_GridNav.m_flOffsetX);
      v16 = (v35.x + LocationFromGrid.x) * 0.5;
      v18 = (LocationFromGrid.y + v35.y) * 0.5;
      nTestPosX = floorf(
                    (((((LocationFromGrid.x - v16) * 0.25) + LocationFromGrid.x) - *&xb) + (0.5 * m_flEdgeSize))
                  / m_flEdgeSize);
      nGoalGridPosYa = g_GridNav.m_flOffsetY;
      nTestPosY = floorf(
                    (((((LocationFromGrid.y - v18) * 0.25) + LocationFromGrid.y) - nGoalGridPosYa) + (0.5 * m_flEdgeSize))
                  / m_flEdgeSize);
      x = floorf((((((v35.x - v16) * 0.25) + v35.x) - *&xb) + (0.5 * m_flEdgeSize)) / m_flEdgeSize);
      nGoalGridPosY = floorf((((((v35.y - v18) * 0.25) + v35.y) - nGoalGridPosYa) + (0.5 * m_flEdgeSize)) / m_flEdgeSize);
      if ( nTestPosX >= g_GridNav.m_nMinX
        && nTestPosX <= g_GridNav.m_nMaxX
        && nTestPosY >= g_GridNav.m_nMinY
        && nTestPosY <= g_GridNav.m_nMaxY
        && !CGridNav::IsEnclosed(&g_GridNav, nTestPosX, nTestPosY, 0)
        && x >= g_GridNav.m_nMinX
        && x <= g_GridNav.m_nMaxX
        && nGoalGridPosY >= g_GridNav.m_nMinY
        && nGoalGridPosY <= g_GridNav.m_nMaxY
        && !CGridNav::IsEnclosed(&g_GridNav, x, nGoalGridPosY, 0) )
      {
        dirPath.0 = 13369344;
        bReachedGoal = 0;
        CGridNav::BuildPath(&g_GridNav, nTestPosX, nTestPosY, x, nGoalGridPosY, &dirPath, 0.0, 0, 0, 150, &bReachedGoal);
        if ( bReachedGoal )
        {
          v13 = bFoundBlockedTraverse;
          if ( dirPath.m_nCount >= 9 )
            v13 = 1;
          bFoundBlockedTraverse = v13;
          v14 = bFoundValidTraverse;
          if ( dirPath.m_nCount < 9 )
            v14 = 1;
          bFoundValidTraverse = v14;
        }
        else
        {
          bFoundBlockedTraverse = 1;
        }
        dirPath.m_nCount = 0;
        if ( dirPath.m_nAllocated > 0xCC )
        {
          v15 = *(*g_pMemAlloc + 16LL);
          if ( dirPath.m_nAllocated != 0 )
            v15(g_pMemAlloc, dirPath.m_pElements);
          else
            v15(g_pMemAlloc, 0);
        }
      }
      ++p_y;
      v6 = this->m_iGridCount[1];
    }
    while ( p_y != &offsets[4].y );
LABEL_8:
    this->m_PassabilityGrid.m_Memory.m_pMemory[v6 * gridX + gridY] = bFoundValidTraverse && !bFoundBlockedTraverse;
  }
}


// CDOTA_Commander::IsLocationPassable  (line 1195, @0x00000000027ed120, libserver.so)  // inlines: operator[]
// calls: CDOTA_Commander::GetGridFromLocation
// callers: Script_IsLocationPassable, CDOTA_TeamCommander::IsLocationPassable
bool __fastcall CDOTA_Commander::IsLocationPassable(CDOTA_Commander *const this, const Vector *const vLoc)
{
  int gridX; // [rsp+8h] [rbp-10h] BYREF
  int gridY[3]; // [rsp+Ch] [rbp-Ch] BYREF

  CDOTA_Commander::GetGridFromLocation(this, vLoc, &gridX, gridY);
  return this->m_PassabilityGrid.m_Memory.m_pMemory[gridY[0] + gridX * this->m_iGridCount[1]];
}


// CDOTA_Commander::IsGridPassable  (line 1205, @0x00000000027ed160, libserver.so)  // inlines: operator[]
// callers: CDOTA_Bot_Pathing::FindNearbyValidGrid, CDOTA_Bot_Pathing::IsPathClear, CDOTA_Bot_Pathing::GenerateClearPath, CDOTA_TeamCommander::IsGridPassable, CDOTA_TeamCommander::DrawDebugGrid, CDOTA_TeamCommander::DrawDebugGridMinimap, CDOTA_Bot_Pathing::UpdateSearch, CDOTA_TeamCommander::UpdatePotentialLocationGrid
bool __fastcall CDOTA_Commander::IsGridPassable(CDOTA_Commander *const this, int gridX, int gridY)
{
  bool result; // al
  int v4; // ecx

  result = 0;
  if ( gridX >= 0 && gridX < this->m_iGridCount[0] && gridY >= 0 )
  {
    v4 = this->m_iGridCount[1];
    if ( gridY < v4 )
      return this->m_PassabilityGrid.m_Memory.m_pMemory[v4 * gridX + gridY];
  }
  return result;
}


// CDOTA_Commander::GetLocationHeightLevel  (line 1216, @0x00000000027ed260, libserver.so)
// calls: CDOTA_Commander::GetGridFromLocation, CDOTA_Commander::GetGridHeightLevel
// callers: Script_GetHeightLevel, CDOTA_TeamCommander::GetLocationHeightLevel
int __fastcall CDOTA_Commander::GetLocationHeightLevel(CDOTA_Commander *const this, const Vector *const vLoc)
{
  int gridX; // [rsp+8h] [rbp-10h] BYREF
  int gridY[3]; // [rsp+Ch] [rbp-Ch] BYREF

  CDOTA_Commander::GetGridFromLocation(this, vLoc, &gridX, gridY);
  return CDOTA_Commander::GetGridHeightLevel(this, gridX, gridY[0]);
}


// CDOTA_Commander::GetGridHeightLevel  (line 1226, @0x00000000027ed1f0, libserver.so)  // inlines: RemapValClamped, clamp<float, float>
// calls: CDOTA_Commander::GetGridHeight
// callers: CDOTA_Commander::GetLocationHeightLevel, CDOTA_TeamCommander::GetGridHeightLevel
int __fastcall CDOTA_Commander::GetGridHeightLevel(CDOTA_Commander *const this, int gridX, int gridY)
{
  int result; // eax
  float GridHeight; // xmm0_4
  float v5; // xmm0_4

  result = 0;
  if ( gridX >= 0 && gridX < this->m_iGridCount[0] && gridY >= 0 && gridY < this->m_iGridCount[1] )
  {
    GridHeight = CDOTA_Commander::GetGridHeight(this, gridX, gridY);
    result = 5;
    v5 = (GridHeight + 100.0) / 500.0;
    if ( v5 >= 0.0 )
    {
      result = 1;
      if ( v5 <= 1.0 )
        return ((v5 * -4.0) + 5.5);
    }
  }
  return result;
}


// CDOTA_Commander::GetLocationHeight  (line 1236, @0x00000000027ed290, libserver.so)
// calls: CDOTA_Commander::GetGridFromLocation, CDOTA_Commander::GetGridHeight
// callers: CDOTA_TeamCommander::GetLocationHeight
float __fastcall CDOTA_Commander::GetLocationHeight(CDOTA_Commander *const this, const Vector *const vLoc)
{
  int gridX; // [rsp+8h] [rbp-10h] BYREF
  int gridY[3]; // [rsp+Ch] [rbp-Ch] BYREF

  CDOTA_Commander::GetGridFromLocation(this, vLoc, &gridX, gridY);
  return CDOTA_Commander::GetGridHeight(this, gridX, gridY[0]);
}


// CDOTA_Commander::GetGridHeight  (line 1246, @0x00000000027ed1a0, libserver.so)  // inlines: operator[]
// callers: CDOTA_Commander::GetGridHeightLevel, CDOTA_Commander::GetLocationHeight, CDOTA_TeamCommander::GetGridHeight, CDOTA_TeamCommander::DrawDebugGrid, CDOTA_TeamCommander::DrawDebugGridMinimap
float __fastcall CDOTA_Commander::GetGridHeight(CDOTA_Commander *const this, int gridX, int gridY)
{
  float result; // xmm0_4
  int v4; // eax

  result = 0.0;
  if ( gridX >= 0 && gridX < this->m_iGridCount[0] && gridY >= 0 )
  {
    v4 = this->m_iGridCount[1];
    if ( gridY < v4 )
      return this->m_HeightGrid.m_Memory.m_pMemory[v4 * gridX + gridY];
  }
  return result;
}


// CDOTA_Commander::HandlePing  (line 1256, @0x00000000027ed2c0, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, Get, GetBotByIndex, GetEHandle, GetEntryIndex, GetInstance, GetOtherTeamCommander, GetSerialNumber, GetTeamNumber, GetUnit, IsConsideredHero, Length2D, Set, ToDOTABaseNPC, Vector, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-
// calls: CDOTAGamerules::GetNumTowers, CDOTAGamerules::GetTower, CBaseEntity::GetAbsOrigin, CDOTAGamerules::GetRoshan, CEntityHandle::operator CEntityInstance*, CDOTA_TeamCommander::CreateHumanRequest, CGameEntitySystem::FindEntityByClassname
// callers: CDOTAGamerules::ExecutePing
// strings: "npc_dota_barracks", "npc_dota_fort"
void __fastcall CDOTA_Commander::HandlePing(CDOTA_Commander *const this, int x, int y, int iTeamNumber)
{
  int v5; // ebx
  _DWORD *v6; // r13
  CDOTA_BaseNPC_Tower *Tower; // rax
  CDOTA_BaseNPC_Tower *v8; // r15
  const Vector *AbsOrigin; // rax
  float v10; // xmm0_4
  CEntityInstance *v11; // rax
  const CBaseEntity *v12; // r12
  const Vector *v13; // rax
  float v14; // xmm0_4
  CDOTA_TeamCommander *p_m_BadGuys; // rbx
  __int64 v16; // r12
  const CEntityHandle *v17; // rdi
  CEntityInstance *v18; // rax
  const Vector *v19; // rax
  float v20; // xmm0_4
  int v21; // eax
  float v22; // xmm0_4
  __int64 v23; // rdx
  int v24; // eax
  __int16 v25; // cx
  CBaseEntity *v26; // rsi
  CBaseEntity *EntityByClassname; // rax
  const Vector *v28; // rax
  float v29; // xmm0_4
  CBaseEntity *v30; // rax
  const Vector *v31; // rax
  float v32; // xmm0_4
  int v33; // eax
  bool v34; // zf
  __int64 v35; // rax
  int v36; // edx
  __int16 v37; // cx
  __int64 v38; // rax
  int v39; // edx
  __int16 v40; // cx
  CDOTA_TeamCommander *p_m_GoodGuys; // [rsp-8h] [rbp-78h]
  CDOTA_TeamCommander *pOurTeamCommander; // [rsp+0h] [rbp-70h]
  CDOTA_TeamCommander *pOurTeamCommandera; // [rsp+0h] [rbp-70h]
  CDOTA_TeamCommander *pOurTeamCommanderb; // [rsp+0h] [rbp-70h]
  float iTeamNumbera; // [rsp+14h] [rbp-5Ch]
  CEntityHandle v47; // [rsp+18h] [rbp-58h] BYREF
  float v48; // [rsp+28h] [rbp-48h] BYREF
  float v49; // [rsp+2Ch] [rbp-44h]
  Vector vPingLoc; // [rsp+30h] [rbp-40h]
  __int64 v51; // [rsp+68h] [rbp-8h] BYREF

  v48 = x;
  vPingLoc.x = 0.0;
  v49 = y;
  if ( iTeamNumber == 2 )
  {
    p_m_GoodGuys = &this->m_GoodGuys;
  }
  else
  {
    if ( iTeamNumber != 3 )
      return;
    p_m_GoodGuys = &this->m_BadGuys;
  }
  if ( p_m_GoodGuys == 0 )
    return;
  v5 = 0;
  iTeamNumbera = 0.0;
  v6 = 0;
  while ( v5 < CDOTAGamerules::GetNumTowers(g_pGameRules) )
  {
    Tower = CDOTAGamerules::GetTower(g_pGameRules, v5);
    v8 = Tower;
    if ( Tower != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(Tower);
      v10 = fsqrt(((AbsOrigin->x - v48) * (AbsOrigin->x - v48)) + ((AbsOrigin->y - v49) * (AbsOrigin->y - v49)));
      if ( v10 < 500.0 && (iTeamNumbera > v10 || v6 == 0) )
      {
        iTeamNumbera = v10;
        v6 = v8;
      }
    }
    ++v5;
  }
  v26 = 0;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v26, "npc_dota_barracks");
    v26 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    if ( EntityByClassname->m_bIsDOTANPC )
    {
      pOurTeamCommandera = EntityByClassname;
      v28 = CBaseEntity::GetAbsOrigin(EntityByClassname);
      v26 = pOurTeamCommandera;
      v29 = fsqrt(((v28->x - v48) * (v28->x - v48)) + ((v28->y - v49) * (v28->y - v49)));
      if ( v29 < 500.0 && (iTeamNumbera > v29 || v6 == 0) )
      {
        iTeamNumbera = v29;
        v6 = pOurTeamCommandera;
      }
    }
  }
  while ( 1 )
  {
    v30 = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v26, "npc_dota_fort");
    v26 = v30;
    if ( v30 == 0 )
      break;
    if ( v30->m_bIsDOTANPC )
    {
      pOurTeamCommanderb = v30;
      v31 = CBaseEntity::GetAbsOrigin(v30);
      v26 = pOurTeamCommanderb;
      v32 = fsqrt(((v31->x - v48) * (v31->x - v48)) + ((v31->y - v49) * (v31->y - v49)));
      if ( v32 < 500.0 )
      {
        if ( iTeamNumbera > v32 )
        {
          iTeamNumbera = v32;
          v6 = pOurTeamCommanderb;
        }
        else if ( v6 == 0 )
        {
          iTeamNumbera = v32;
          v6 = pOurTeamCommanderb;
        }
      }
    }
  }
  CDOTAGamerules::GetRoshan(&v47, g_pGameRules);
  v11 = CEntityHandle::operator CEntityInstance *(&v47);
  v12 = v11;
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 && (*(v11->_vptr_IHandleEntity + 408))(v11) != 0 )
  {
    v13 = CBaseEntity::GetAbsOrigin(v12);
    v14 = fsqrt(((v13->x - v48) * (v13->x - v48)) + ((v13->y - v49) * (v13->y - v49)));
    if ( v14 < 500.0 && (iTeamNumbera > v14 || v6 == 0) )
    {
      iTeamNumbera = v14;
      v6 = v12;
    }
  }
  p_m_BadGuys = &this->m_GoodGuys;
  if ( iTeamNumber == 2 )
    p_m_BadGuys = &this->m_BadGuys;
  v16 = 0;
  while ( iTeamNumber != 2 )
  {
    if ( v16 >= this->m_GoodGuys.m_BotList.m_Size )
      goto LABEL_36;
LABEL_24:
    if ( p_m_BadGuys->m_BotList.m_Memory.m_pMemory[v16] != 0 )
    {
      v17 = 0;
      if ( v16 < p_m_BadGuys->m_BotList.m_Size )
        v17 = p_m_BadGuys->m_BotList.m_Memory.m_pMemory[v16];
      v18 = CEntityHandle::operator CEntityInstance *(v17 + 39);
      if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 && (v18[43].m_iszPrivateVScripts.u.m_Id & 3) != 0 )
      {
        pOurTeamCommander = v18;
        v19 = CBaseEntity::GetAbsOrigin(v18);
        v20 = fsqrt(((v19->x - v48) * (v19->x - v48)) + ((v19->y - v49) * (v19->y - v49)));
        if ( v20 < 500.0 && (iTeamNumbera > v20 || v6 == 0) )
        {
          iTeamNumbera = v20;
          v6 = pOurTeamCommander;
        }
      }
    }
    ++v16;
  }
  if ( v16 < this->m_BadGuys.m_BotList.m_Size )
    goto LABEL_24;
LABEL_36:
  if ( v6 == 0 )
  {
    CDOTA_TeamCommander::CreateHumanRequest(p_m_GoodGuys, 2, &v48, 0, 5.0);
    return;
  }
  v21 = v6[522];
  if ( (v21 & 4) != 0 )
  {
    v22 = 20.0;
  }
  else
  {
    v22 = 30.0;
    if ( (v21 & 0x60) == 0 )
    {
      if ( (v21 & 0x80u) != 0 && *(v6 + 2165) != 0 )
      {
        v47.m_Index = -1;
        v23 = *(v6 + 1);
        if ( v23 != 0 )
        {
          v24 = (*(v23 + 16) >> 15) - (*(v23 + 48) & 1);
          v25 = 0x7FFF;
          if ( *(v23 + 16) != -1 )
            v25 = *(v23 + 16) & 0x7FFF;
          LOWORD(v47.m_Index) = v25 | v47.m_Index & 0x8000;
          v47.m_Index = (v24 << 15) | v47.m_Index & 0x7FFF;
        }
        CDOTA_TeamCommander::CreateHumanRequest(p_m_GoodGuys, 5, (&v51 - 80), 0, 20.0);
      }
      else if ( (v21 & 1) != 0 )
      {
        v47.m_Index = -1;
        v38 = *(v6 + 1);
        if ( v38 != 0 )
        {
          v39 = (*(v38 + 16) >> 15) - (*(v38 + 48) & 1);
          v40 = 0x7FFF;
          if ( *(v38 + 16) != -1 )
            v40 = *(v38 + 16) & 0x7FFF;
          LOWORD(v47.m_Index) = v40 | v47.m_Index & 0x8000;
          v47.m_Index = (v39 << 15) | v47.m_Index & 0x7FFF;
        }
        CDOTA_TeamCommander::CreateHumanRequest(p_m_GoodGuys, 0, (&v51 - 80), 0, 10.0);
      }
      return;
    }
  }
  v33 = *(v6 + 383);
  v47.m_Index = -1;
  v34 = iTeamNumber == v33;
  v35 = *(v6 + 1);
  if ( v35 != 0 )
  {
    v36 = (*(v35 + 16) >> 15) - (*(v35 + 48) & 1);
    v37 = 0x7FFF;
    if ( *(v35 + 16) != -1 )
      v37 = *(v35 + 16) & 0x7FFF;
    LOWORD(v47.m_Index) = v37 | v47.m_Index & 0x8000;
    v47.m_Index = (v36 << 15) | v47.m_Index & 0x7FFF;
  }
  CDOTA_TeamCommander::CreateHumanRequest(p_m_GoodGuys, !v34 + 3, (&v51 - 80), 0, v22);
}


// CDOTA_Commander::UpdateIllusionStates  (line 1384, @0x0000000002806b50, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, Construct<sIllusionState>, Element, FStrEq, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetSerialNumber, GetUnitName, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Remove, Set, ShiftElementsLeft, String, ToCStr, ToDOTABaseNPCHero, V_memmove, _V_strcmp, memmove, operator CEntityInstance*, operator=, operator==<CBaseEntity>, operator[], sIllusionState
// calls: CDOTA_BaseNPC::GetOpposingTeamNumber, CBaseModelEntity::CanBeSeenByTeam, CDOTA_Commander::FindIllusionState, strcmp, CEntityHandle::operator CEntityInstance*, memmove, CUtlMemory<sIllusionState, int>::Grow
// callers: CDOTA_Commander::FrameUpdatePostEntityThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Commander::UpdateIllusionStates(CDOTA_Commander *const this)
{
  int v2; // ebx
  int m_Size; // r10d
  sIllusionState *m_pMemory; // rsi
  __int64 v5; // rcx
  sIllusionState *v6; // rdi
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  int v10; // r10d
  int v11; // eax
  __int64 v12; // r12
  int v13; // r13d
  int v14; // eax
  CHandle<CDOTA_BaseNPC_Hero> *v15; // rdx
  uint32 v16; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  int OpposingTeamNumber; // eax
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rax
  sIllusionState *v25; // rdx
  CEntityIdentity *m_pEntity; // rax
  int v27; // edx
  __int16 v28; // cx
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  CEntityInstance *v32; // rax
  const char *m_pAsString; // rsi
  const char *v34; // rdi
  sIllusionState *IllusionState; // rax
  int v36; // [rsp+4h] [rbp-5Ch]
  sIllusionState *v37; // [rsp+8h] [rbp-58h]
  __int64 v38; // [rsp+18h] [rbp-48h]
  CHandle<CDOTA_BaseNPC_Hero> *v39; // [rsp+20h] [rbp-40h]
  __int64 v40; // [rsp+28h] [rbp-38h]
  int v41; // [rsp+28h] [rbp-38h]

  v2 = 0;
  m_Size = this->m_IllusionStates.m_Size;
  if ( m_Size > 0 )
  {
    while ( 1 )
    {
      m_pMemory = this->m_IllusionStates.m_Memory.m_pMemory;
      v5 = v2;
      v6 = &m_pMemory[v5];
      m_Index = m_pMemory[v5].hHero.m_Index;
      if ( m_Index + 2 > 1
        && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->hHero.m_Index) >> 9) & 0x3F]) != 0
        && (v9 = &v8[v6->hHero.m_Index & 0x1FF]) != 0
        && m_Index == v9->m_EHandle.m_Index
        && v9->m_pInstance != 0 )
      {
        v11 = this->m_IllusionStates.m_Size;
      }
      else
      {
        v10 = m_Size - v2 - 1;
        if ( v10 > 0 )
          memmove(v6, &m_pMemory[v5 + 1], 8LL * v10);
        --v2;
        v11 = this->m_IllusionStates.m_Size - 1;
        this->m_IllusionStates.m_Size = v11;
      }
      if ( ++v2 >= v11 )
        break;
      m_Size = v11;
    }
  }
  v12 = 0;
  v13 = 0;
  if ( g_HeroList.m_hHeroList.m_Size > 0 )
  {
    while ( 1 )
    {
      v15 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v12];
      v16 = v15->m_Index;
      if ( v15->m_Index + 2 <= 1 )
        goto LABEL_13;
      v17 = v15->m_Index;
      v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
      if ( v18 == 0 )
        goto LABEL_13;
      v19 = &v18[v17 & 0x1FF];
      if ( v19 == 0 )
        goto LABEL_13;
      if ( v16 != v19->m_EHandle.m_Index )
        goto LABEL_13;
      m_pInstance = v19->m_pInstance;
      if ( v19->m_pInstance == 0 || (m_pInstance->m_iUnitType & 1) == 0 )
        goto LABEL_13;
      OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v19->m_pInstance);
      if ( !CBaseModelEntity::CanBeSeenByTeam(m_pInstance, OpposingTeamNumber) )
        break;
      if ( CDOTA_Commander::FindIllusionState(this, m_pInstance) != 0 )
        goto LABEL_13;
      v22 = this->m_IllusionStates.m_Size;
      v23 = this->m_IllusionStates.m_Size;
      if ( v22 == this->m_IllusionStates.m_Memory.m_nAllocationCount )
      {
        v41 = this->m_IllusionStates.m_Size;
        CUtlMemory<sIllusionState,int>::Grow(&this->m_IllusionStates.m_Memory, 1);
        v23 = this->m_IllusionStates.m_Size;
        v22 = v41;
      }
      v24 = v22;
      this->m_IllusionStates.m_Size = v23 + 1;
      v25 = &this->m_IllusionStates.m_Memory.m_pMemory[v24];
      if ( v25 != 0 )
      {
        v25->hHero.m_Index = -1;
        v37 = &this->m_IllusionStates.m_Memory.m_pMemory[v24];
      }
      else
      {
        v37 = 0;
      }
      m_pEntity = m_pInstance->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v27 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v28 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v28 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v37->hHero.m_Index) = v28 | v37->hHero.m_Index & 0x8000;
        v37->hHero.m_Index = (v27 << 15) | v37->hHero.m_Index & 0x7FFF;
      }
      else
      {
        v37->hHero.m_Index = -1;
      }
      v37->iState = DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_UNKNOWN;
      v14 = g_HeroList.m_hHeroList.m_Size;
      if ( m_pInstance->m_bIsIllusion.m_Value )
      {
        v36 = g_HeroList.m_hHeroList.m_Size;
        if ( v14 <= 0 )
          return;
        v29 = 0;
        v38 = 4LL * (v14 - 1) + 4;
        v39 = g_HeroList.m_hHeroList.m_Memory.m_pMemory;
        do
        {
          v40 = v29;
          v32 = CEntityHandle::operator CEntityInstance *((v39 + v29));
          v31 = v40;
          if ( v32 != 0
            && (v32[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && HIBYTE(v32[7].m_CScriptComponent) != m_pInstance->m_iTeamNum.m_Value )
          {
            m_pAsString = m_pInstance->m_iszUnitName.m_Value.u.m_pAsString;
            if ( m_pAsString == 0 )
              m_pAsString = "";
            v34 = v32[70].m_iszPrivateVScripts.u.m_pAsString;
            if ( v34 == 0 )
              v34 = "";
            if ( m_pAsString == v34 || (v30 = strcmp(v34, m_pAsString), v31 = v40, v30 == 0) )
            {
              v37->iState = DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_CONFIRMED;
              goto LABEL_13;
            }
          }
          v29 = v31 + 4;
        }
        while ( v29 != v38 );
        v14 = v36;
      }
LABEL_14:
      ++v13;
      ++v12;
      if ( v13 >= v14 )
        return;
    }
    IllusionState = CDOTA_Commander::FindIllusionState(this, m_pInstance);
    if ( IllusionState != 0 )
    {
      IllusionState->iState = DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_UNKNOWN;
      v14 = g_HeroList.m_hHeroList.m_Size;
      goto LABEL_14;
    }
LABEL_13:
    v14 = g_HeroList.m_hHeroList.m_Size;
    goto LABEL_14;
  }
}


// CDOTA_Commander::ClearIllusionState  (line 1443, @0x00000000027ed9f0, libserver.so)
// calls: CDOTA_Commander::FindIllusionState
// callers: CDOTA_BaseNPC::ActivateRuneEffect
void __fastcall CDOTA_Commander::ClearIllusionState(CDOTA_Commander *const this, CDOTA_BaseNPC_Hero *pHero)
{
  sIllusionState *IllusionState; // rax

  IllusionState = CDOTA_Commander::FindIllusionState(this, pHero);
  if ( IllusionState != 0 )
    IllusionState->iState = DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_UNKNOWN;
}


// CDOTA_Commander::GetIllusionState  (line 1454, @0x00000000027edc10, libserver.so)
// calls: CDOTA_Commander::FindIllusionState
// callers: CDOTA_Bot_AbilityUsage::IsValidBotTarget, CDOTA_Bot_AbilityUsage_AbyssalBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_MedallionOfCourage::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_HeavensHalberd::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_RodOfAtos::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Sheepstick::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Bane_FiendsGrip::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Axe_BattleHunger::IsValidBattleHungerTarget, CDOTA_Bot_AbilityUsage_Bane_BrainSap::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Bane_Nightmare::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Axe_CullingBlade::GetCurrentUsageDesire (47 total)
DOTA_BOT_ILLUSION_STATE __fastcall CDOTA_Commander::GetIllusionState(
        CDOTA_Commander *const this,
        CDOTA_BaseNPC_Hero *pHero)
{
  sIllusionState *IllusionState; // rax

  IllusionState = CDOTA_Commander::FindIllusionState(this, pHero);
  if ( IllusionState != 0 )
    return IllusionState->iState;
  else
    return DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_UNKNOWN;
}


// CDOTA_Commander::FindIllusionState  (line 1465, @0x00000000027ed8a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==
// callers: CDOTA_Commander::OnTakeDamage, CDOTA_Commander::ClearIllusionState, CDOTA_Commander::OnAbilityExecuted, CDOTA_Commander::GetIllusionState, CDOTA_Commander::UpdateIllusionStates, CDOTA_BotMode_Attack::GetAttackScore
// globals: CEntityHandle::gm_pEntityList
sIllusionState *__fastcall CDOTA_Commander::FindIllusionState(CDOTA_Commander *const this, CDOTA_BaseNPC_Hero *pHero)
{
  int m_Size; // edx
  sIllusionState *result; // rax
  sIllusionState *v4; // r9
  CDOTA_BaseNPC_Hero *m_pInstance; // rdi
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx

  m_Size = this->m_IllusionStates.m_Size;
  if ( m_Size <= 0 )
    return 0;
  result = this->m_IllusionStates.m_Memory.m_pMemory;
  v4 = &result[(m_Size - 1) + 1];
  while ( 1 )
  {
    m_pInstance = 0;
    if ( result->hHero.m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(result->hHero.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[result->hHero.m_Index & 0x1FF];
        if ( v7 != 0 && result->hHero.m_Index == v7->m_EHandle.m_Index )
          m_pInstance = v7->m_pInstance;
      }
    }
    if ( pHero == m_pInstance )
      break;
    if ( ++result == v4 )
      return 0;
  }
  return result;
}


// CDOTA_Commander::GetWardLocation  (line 1478, @0x00000000027edc30, libserver.so)
// callers: CDOTA_BotMode_Ward::FindBestWardLocation
Vector __fastcall CDOTA_Commander::GetWardLocation(
        const CDOTA_Commander *const this,
        DotaBotWardLocation_t nWardLocation)
{
  vec_t z; // eax
  __int64 v5; // [rsp+0h] [rbp-10h]
  vec_t v6; // [rsp+8h] [rbp-8h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( nWardLocation > DotaBotWardLocation_t::BOT_WARD_DIRE_JUNGLE_TOP )
  {
    z = vec3_origin.z;
    v5 = *&vec3_origin.x;
  }
  else
  {
    z = this->m_BotWardLocations[nWardLocation].z;
    v5 = *&this->m_BotWardLocations[nWardLocation].x;
  }
  v6 = z;
  *&result.x = v5;
  result.z = z;
  return result;
}


// CDOTA_Commander::GetBotRunningScript  (line 1489, @0x00000000027edc90, libserver.so)  // inlines: Get, GetBot, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTABaseAbility_BotScript::IsMyScript, Script_GetBot, CDOTA_Bot_Script::IsMyScriptBot
// globals: CEntityHandle::gm_pEntityList
CDOTA_Bot *__fastcall CDOTA_Commander::GetBotRunningScript(CDOTA_Commander *const this)
{
  CDOTA_Bot_Script *m_pBotScript; // rdx
  uint32 m_Index; // ecx
  CDOTA_Bot *result; // rax
  CEntityIdentity *v4; // rsi
  CEntityIdentity *v5; // rsi

  m_pBotScript = this->m_pBotScript;
  if ( m_pBotScript == 0 )
    return 0;
  m_Index = m_pBotScript->m_hBaseNPC.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pBotScript->m_hBaseNPC.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[m_pBotScript->m_hBaseNPC.m_Index & 0x1FF];
      if ( v5 != 0
        && m_Index == v5->m_EHandle.m_Index
        && v5->m_pInstance != 0
        && BYTE3(v5->m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        return m_pBotScript->m_pBot;
      }
    }
  }
  return result;
}


// CDOTA_Commander::GetNPCRunningScript  (line 1496, @0x00000000027edd10, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// callers: Script_GetItemStockCount
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC *__fastcall CDOTA_Commander::GetNPCRunningScript(CDOTA_Commander *const this)
{
  CDOTA_Bot_Script *m_pBotScript; // rax
  uint32 m_Index; // edx
  unsigned __int16 v3; // cx
  CEntityIdentity *v4; // rax
  CEntityIdentity *v5; // rax
  CDOTA_BaseNPC *result; // rax

  m_pBotScript = this->m_pBotScript;
  if ( m_pBotScript == 0 )
    return 0;
  m_Index = m_pBotScript->m_hBaseNPC.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v3 = m_pBotScript->m_hBaseNPC.m_Index;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v3 >> 9) & 0x3F];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[v3 & 0x1FF];
  if ( v5 == 0 )
    return 0;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 0;
  result = v5->m_pInstance;
  if ( result == 0 )
    return 0;
  if ( !result->m_bIsDOTANPC )
    return 0;
  return result;
}


// CDOTA_Commander::GetTeamRunningScript  (line 1503, @0x00000000027edd90, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTABaseAbility_BotScript::GetScriptHandle, CDOTABaseAbility_BotScript::IsMyScriptTeam, CDOTA_Commander::GetActiveScriptVM, Script_GetTeam, Script_GetScriptDirectory, Script_GetOpposingTeam, Script_GetPushLaneDesire, Script_GetDefendLaneDesire, Script_GetFarmLaneDesire, Script_GetRoamDesire, Script_GetRoshanDesire, Script_GetLaneFrontAmount (32 total)
// globals: CEntityHandle::gm_pEntityList
DOTATeam_t __fastcall CDOTA_Commander::GetTeamRunningScript(CDOTA_Commander *const this)
{
  CDOTA_Bot_Script *m_pBotScript; // rax
  uint32 m_Index; // edx
  unsigned __int16 v3; // cx
  CEntityIdentity *v4; // rax
  CEntityIdentity *v5; // rax
  CEntityInstance *m_pInstance; // rax

  m_pBotScript = this->m_pBotScript;
  if ( m_pBotScript == 0 )
    return this->m_eTeamRunningScript;
  m_Index = m_pBotScript->m_hBaseNPC.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = m_pBotScript->m_hBaseNPC.m_Index,
        (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v3 >> 9) & 0x3F]) == 0)
    || (v5 = &v4[v3 & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance) == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  return HIBYTE(m_pInstance[7].m_CScriptComponent);
}


// CDOTA_Commander::GetActiveScriptVM  (line 1510, @0x00000000027ede20, libserver.so)
// calls: CDOTA_Commander::GetTeamRunningScript
// callers: CDOTABaseAbility_BotScript::GetScriptHandle, ToAbilityBotScriptHandle, CDOTA_Bot_Script::GetScriptHandle, Script_GetTeamPlayers, Script_GetWorldBounds, CDOTA_Bot_Script::GetMostRecentPing, CDOTA_Bot_Script::GetNearbyTrees, Script_GetNeutralSpawners, Script_GetDroppedItemList, CDOTA_Bot_Script::GetNearbyHeroes, CDOTA_Bot_Script::GetNearbyCreeps, CDOTA_Bot_Script::GetNearbyTowers (17 total)
IScriptVM *__fastcall CDOTA_Commander::GetActiveScriptVM(CDOTA_Commander *const this)
{
  DOTATeam_t TeamRunningScript; // eax

  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(this);
  if ( TeamRunningScript == DOTATeam_t::DOTA_TEAM_FIRST )
    return this->m_GoodGuys.m_pBotScriptVM;
  if ( TeamRunningScript == DOTATeam_t::DOTA_TEAM_BADGUYS )
    return this->m_BadGuys.m_pBotScriptVM;
  return 0;
}


// CDOTA_Commander::DrawDebug  (line 1523, @0x00000000027f7e30, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, Get, GetBool, GetBotByIndex, GetFloat, GetInstance, GetInt, GetLaneNodeName, GetUnit, GetUnitName, GetWardLocation, HitStaticOnlyByContents, Init, LengthSqr, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetInteractsWith, SetObjectSetMask, String, ToCStr, ToDOTABaseNPC, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator CBaseEntity*, operator+, operator=
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot_Pathing::GetDebugString, CFmtStrN<256, false>::CFmtStrN, AddDebugTextLine, CDOTA_TeamCommander::DrawDebugGrid, CDOTA_TeamCommander::DrawDebugGridMinimap, CGameTrace::Init, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::TraceRay, NDebugOverlay::Sphere, NDebugOverlay::Text (17 total)
// callers: dota_commander_report, CDOTA_Commander::FrameUpdatePostEntityThink
// strings: "%s: %s"
// globals: jpt_27F811E, jpt_27F814E, pszWardLocationNames, pszBadLaneBuildingNames, pszGoodLaneBuildingNames
void __fastcall CDOTA_Commander::DrawDebug(CDOTA_Commander *const this)
{
  CDOTA_Commander *v1; // r15
  __int64 v2; // r12
  int v3; // ebx
  const CEntityHandle *v4; // rdi
  __int64 (__fastcall *v5)(ILocalize *, const char *); // r14
  CEntityInstance *v6; // rax
  const char *m_pAsString; // rsi
  __int64 v8; // rax
  CDOTA_Bot *v9; // rdi
  const char *DebugString; // rax
  __int64 v11; // r12
  int i; // ebx
  const CEntityHandle *v13; // rdi
  __int64 (__fastcall *v14)(ILocalize *, const char *); // r14
  CEntityInstance *v15; // rax
  const char *v16; // rsi
  __int64 v17; // rax
  CDOTA_Bot *v18; // rdi
  const char *v19; // rax
  Vector *m_BotWardLocations; // r14
  const char *v21; // rbx
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  float m_fValue; // xmm0_4
  const char *v25; // rsi
  const char *v26; // rbx
  CBaseEntity *EntityByName; // r14
  CBaseEntity *v28; // rax
  const CBaseEntity *v29; // rbx
  CFmtStrN<256,false> *v30; // r15
  int v31; // r12d
  char *v32; // r13
  const Vector *v33; // rax
  const char *v34; // rdx
  CBaseEntity *v35; // rax
  __int64 k; // r14
  __int64 m; // rbx
  CBaseEntity *v38; // rax
  const Vector *v39; // rax
  CBaseEntity *v40; // rax
  const Vector *v41; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_Commander *thisa; // [rsp+10h] [rbp-6C0h]
  int v44; // [rsp+1Ch] [rbp-6B4h]
  char *text; // [rsp+20h] [rbp-6B0h]
  CFmtStrN<256,false> *v46; // [rsp+28h] [rbp-6A8h]
  ILocalize *v47; // [rsp+30h] [rbp-6A0h]
  ILocalize *v48; // [rsp+30h] [rbp-6A0h]
  float x; // [rsp+30h] [rbp-6A0h]
  int j; // [rsp+30h] [rbp-6A0h]
  float target; // [rsp+38h] [rbp-698h]
  Vector *targeta; // [rsp+38h] [rbp-698h]
  Vector *targetb; // [rsp+38h] [rbp-698h]
  Vector vWardPosition; // [rsp+40h] [rbp-690h] BYREF
  CGameQueryAttributes worldFilter; // [rsp+50h] [rbp-680h] BYREF
  Vector vFront; // [rsp+80h] [rbp-650h] BYREF
  int v57; // [rsp+8Ch] [rbp-644h]
  float v58; // [rsp+90h] [rbp-640h]
  float v59; // [rsp+94h] [rbp-63Ch]
  int v60; // [rsp+98h] [rbp-638h]
  int v61; // [rsp+9Ch] [rbp-634h]
  int v62; // [rsp+A0h] [rbp-630h]
  int v63; // [rsp+A4h] [rbp-62Ch]
  int v64; // [rsp+A8h] [rbp-628h]
  int v65; // [rsp+ACh] [rbp-624h]
  int v66; // [rsp+B0h] [rbp-620h]
  int v67; // [rsp+B4h] [rbp-61Ch]
  int v68; // [rsp+B8h] [rbp-618h]
  int v69; // [rsp+BCh] [rbp-614h]
  float v70; // [rsp+C0h] [rbp-610h]
  char v71; // [rsp+C4h] [rbp-60Ch]
  bool v72; // [rsp+C5h] [rbp-60Bh]
  trace_t result; // [rsp+D0h] [rbp-600h] BYREF
  CFmtStrN<256,false> v74; // [rsp+180h] [rbp-550h] BYREF
  char nameBuffer[1032]; // [rsp+290h] [rbp-440h] BYREF
  unsigned __int64 v76; // [rsp+698h] [rbp-38h]

  v1 = this;
  v76 = __readfsqword(0x28u);
  if ( dota_bot_debug_pathing.m_pParent->m_Value.m_nValue != 0 )
  {
    v2 = 0;
    v3 = 0;
    if ( this->m_GoodGuys.m_BotList.m_Size > 0 )
    {
      do
      {
        v4 = v1->m_GoodGuys.m_BotList.m_Memory.m_pMemory[v2];
        if ( v4 != 0 )
        {
          v47 = g_pVGuiLocalize;
          v5 = *(*g_pVGuiLocalize + 104LL);
          v6 = CEntityHandle::operator CEntityInstance *(v4 + 39);
          if ( v6 == 0 || BYTE3(v6[7]._vptr_IHandleEntity) == 0 )
            v6 = 0;
          m_pAsString = "";
          if ( v6[70].m_iszPrivateVScripts.u.m_Id != 0 )
            m_pAsString = v6[70].m_iszPrivateVScripts.u.m_pAsString;
          v8 = v5(v47, m_pAsString);
          (*(*g_pVGuiLocalize + 128LL))(g_pVGuiLocalize, v8, nameBuffer, 1024);
          v9 = 0;
          if ( v3 < v1->m_GoodGuys.m_BotList.m_Size )
            v9 = v1->m_GoodGuys.m_BotList.m_Memory.m_pMemory[v2];
          DebugString = CDOTA_Bot_Pathing::GetDebugString(&v9->m_Pathing);
          CFmtStrN<256,false>::CFmtStrN(&v74, "%s: %s", nameBuffer, DebugString);
          AddDebugTextLine(1, v74.m_szBuf, 0xFFu, 0xFFu, 0xFFu, 0.01023);
        }
        ++v3;
        ++v2;
      }
      while ( v3 < v1->m_GoodGuys.m_BotList.m_Size );
    }
    v11 = 0;
    for ( i = 0; i < v1->m_BadGuys.m_BotList.m_Size; ++v11 )
    {
      v13 = v1->m_BadGuys.m_BotList.m_Memory.m_pMemory[v11];
      if ( v13 != 0 )
      {
        v48 = g_pVGuiLocalize;
        v14 = *(*g_pVGuiLocalize + 104LL);
        v15 = CEntityHandle::operator CEntityInstance *(v13 + 39);
        if ( v15 == 0 || BYTE3(v15[7]._vptr_IHandleEntity) == 0 )
          v15 = 0;
        v16 = "";
        if ( v15[70].m_iszPrivateVScripts.u.m_Id != 0 )
          v16 = v15[70].m_iszPrivateVScripts.u.m_pAsString;
        v17 = v14(v48, v16);
        (*(*g_pVGuiLocalize + 128LL))(g_pVGuiLocalize, v17, nameBuffer, 1024);
        v18 = 0;
        if ( i < v1->m_BadGuys.m_BotList.m_Size )
          v18 = v1->m_BadGuys.m_BotList.m_Memory.m_pMemory[v11];
        v19 = CDOTA_Bot_Pathing::GetDebugString(&v18->m_Pathing);
        CFmtStrN<256,false>::CFmtStrN(&v74, "%s: %s", nameBuffer, v19);
        AddDebugTextLine(1, v74.m_szBuf, 0xFFu, 0xFFu, 0xFFu, 0.01023);
      }
      ++i;
    }
  }
  switch ( dota_bot_debug_grid.m_pParent->m_Value.m_nValue )
  {
    case 1:
      CDOTA_TeamCommander::DrawDebugGrid(&v1->m_GoodGuys, 0);
      break;
    case 2:
      CDOTA_TeamCommander::DrawDebugGrid(&v1->m_BadGuys, 0);
      break;
    case 3:
      CDOTA_TeamCommander::DrawDebugGrid(&v1->m_GoodGuys, 1);
      break;
    case 4:
      CDOTA_TeamCommander::DrawDebugGrid(&v1->m_BadGuys, 1);
      break;
    case 5:
      CDOTA_TeamCommander::DrawDebugGrid(&v1->m_GoodGuys, 2);
      break;
    case 6:
      CDOTA_TeamCommander::DrawDebugGrid(&v1->m_BadGuys, 2);
      break;
    case 7:
      CDOTA_TeamCommander::DrawDebugGrid(&v1->m_GoodGuys, 3);
      break;
    case 8:
      CDOTA_TeamCommander::DrawDebugGrid(&v1->m_GoodGuys, 4);
      break;
    default:
      break;
  }
  switch ( dota_bot_debug_minimap.m_pParent->m_Value.m_nValue )
  {
    case 1:
      CDOTA_TeamCommander::DrawDebugGridMinimap(&v1->m_GoodGuys, 0);
      goto LABEL_26;
    case 2:
      CDOTA_TeamCommander::DrawDebugGridMinimap(&v1->m_BadGuys, 0);
      goto LABEL_26;
    case 3:
      CDOTA_TeamCommander::DrawDebugGridMinimap(&v1->m_GoodGuys, 1);
      goto LABEL_26;
    case 4:
      CDOTA_TeamCommander::DrawDebugGridMinimap(&v1->m_BadGuys, 1);
      goto LABEL_26;
    case 5:
      CDOTA_TeamCommander::DrawDebugGridMinimap(&v1->m_GoodGuys, 2);
      goto LABEL_26;
    case 6:
      CDOTA_TeamCommander::DrawDebugGridMinimap(&v1->m_BadGuys, 2);
      goto LABEL_26;
    case 7:
      CDOTA_TeamCommander::DrawDebugGridMinimap(&v1->m_GoodGuys, 3);
      goto LABEL_26;
    case 8:
      CDOTA_TeamCommander::DrawDebugGridMinimap(&v1->m_GoodGuys, 4);
      if ( dota_bot_debug_lanes.m_pParent->m_Value.m_nValue == 1 )
        goto LABEL_32;
      goto LABEL_27;
    default:
LABEL_26:
      if ( dota_bot_debug_lanes.m_pParent->m_Value.m_nValue == 1 )
      {
LABEL_32:
        result.startpos = CDOTA_TeamCommander::GetLaneFrontLocation(
                            &v1->m_GoodGuys,
                            2,
                            DOTA_LANE::DOTA_LANE_TOP,
                            0.0,
                            0.0);
        vFront = result.startpos;
        NDebugOverlay::Sphere(&vFront, COERCE_DOUBLE(1112014848), 0, 0xFFu, 0, 1, 0.01023);
        result.startpos = CDOTA_TeamCommander::GetLaneFrontLocation(
                            &v1->m_GoodGuys,
                            2,
                            DOTA_LANE::DOTA_LANE_MIDDLE,
                            0.0,
                            0.0);
        vFront = result.startpos;
        NDebugOverlay::Sphere(&vFront, COERCE_DOUBLE(1112014848), 0, 0xFFu, 0, 1, 0.01023);
        result.startpos = CDOTA_TeamCommander::GetLaneFrontLocation(
                            &v1->m_GoodGuys,
                            2,
                            DOTA_LANE::DOTA_LANE_BOTTOM,
                            0.0,
                            0.0);
        vFront = result.startpos;
        NDebugOverlay::Sphere(&vFront, COERCE_DOUBLE(1112014848), 0, 0xFFu, 0, 1, 0.01023);
        result.startpos = CDOTA_TeamCommander::GetLaneFrontLocation(
                            &v1->m_GoodGuys,
                            3,
                            DOTA_LANE::DOTA_LANE_TOP,
                            0.0,
                            0.0);
        vFront = result.startpos;
        NDebugOverlay::Sphere(&vFront, COERCE_DOUBLE(1112014848), 0xFFu, 0, 0, 1, 0.01023);
        result.startpos = CDOTA_TeamCommander::GetLaneFrontLocation(
                            &v1->m_GoodGuys,
                            3,
                            DOTA_LANE::DOTA_LANE_MIDDLE,
                            0.0,
                            0.0);
        vFront = result.startpos;
        NDebugOverlay::Sphere(&vFront, COERCE_DOUBLE(1112014848), 0xFFu, 0, 0, 1, 0.01023);
        result.startpos = CDOTA_TeamCommander::GetLaneFrontLocation(
                            &v1->m_GoodGuys,
                            3,
                            DOTA_LANE::DOTA_LANE_BOTTOM,
                            0.0,
                            0.0);
        vFront = result.startpos;
        NDebugOverlay::Sphere(&vFront, COERCE_DOUBLE(1112014848), 0xFFu, 0, 0, 1, 0.01023);
        thisa = v1;
        for ( j = 2; j != 4; ++j )
        {
          v44 = 0;
          text = &pszBadLaneNodeNames[64];
          v46 = &pszGoodLaneNodeNames[64];
          do
          {
            if ( j == 3 )
              v26 = text;
            else
              v26 = v46;
            EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v26 - 64, 0, 0, 0, 0);
            v28 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v26, 0, 0, 0, 0);
            v29 = v28;
            if ( EntityByName != 0 )
            {
              v30 = v46;
              v31 = 1;
              v32 = text;
              if ( v28 != 0 )
              {
                while ( 1 )
                {
                  if ( j == 2 )
                  {
                    targetb = CBaseEntity::GetAbsOrigin(v29);
                    AbsOrigin = CBaseEntity::GetAbsOrigin(EntityByName);
                    NDebugOverlay::Line(AbsOrigin, targetb, 0, 0xFFu, 0, 1, 0.01023);
                    v34 = 0;
                    if ( v31 <= 8 )
                      v34 = v30;
                  }
                  else
                  {
                    targeta = CBaseEntity::GetAbsOrigin(v29);
                    v33 = CBaseEntity::GetAbsOrigin(EntityByName);
                    NDebugOverlay::Line(v33, targeta, 0xFFu, 0, 0, 1, 0.01023);
                    v34 = 0;
                    if ( v31 <= 8 )
                      v34 = v32;
                  }
                  v32 += 64;
                  v30 = (v30 + 64);
                  ++v31;
                  v35 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v34, 0, 0, 0, 0);
                  if ( v35 == 0 || v29 == 0 )
                    break;
                  EntityByName = v29;
                  v29 = v35;
                }
              }
            }
            ++v44;
            text += 576;
            v46 = (v46 + 576);
          }
          while ( v44 != 3 );
        }
        v1 = thisa;
        for ( k = 0; k != 1536; k += 512 )
        {
          for ( m = 0; m != 512; m += 64 )
          {
            v38 = CGameEntitySystem::FindEntityByName(
                    g_pGameEntitySystem,
                    0,
                    &pszGoodLaneBuildingNames[k + m],
                    0,
                    0,
                    0,
                    0);
            if ( v38 != 0 )
            {
              v39 = CBaseEntity::GetAbsOrigin(v38);
              NDebugOverlay::Sphere(v39, COERCE_DOUBLE(1103626240), 0xFFu, 0xFFu, 0, 1, 0.01023);
            }
            v40 = CGameEntitySystem::FindEntityByName(
                    g_pGameEntitySystem,
                    0,
                    &pszBadLaneBuildingNames[k + m],
                    0,
                    0,
                    0,
                    0);
            if ( v40 != 0 )
            {
              v41 = CBaseEntity::GetAbsOrigin(v40);
              NDebugOverlay::Sphere(v41, COERCE_DOUBLE(1103626240), 0xFFu, 0xFFu, 0, 1, 0.01023);
            }
          }
        }
      }
LABEL_27:
      if ( dota_bot_debug_ward_spots.m_pParent->m_Value.m_nValue == 1 )
      {
        m_BotWardLocations = v1->m_BotWardLocations;
        v21 = pszWardLocationNames;
        do
        {
          y = m_BotWardLocations->y;
          z = m_BotWardLocations->z;
          vWardPosition.x = m_BotWardLocations->x;
          x = vWardPosition.x;
          vWardPosition.y = y;
          target = y;
          vWardPosition.z = z;
          memset(&result.m_ShapeAttributes, 0, 31);
          result.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
          CGameTrace::Init(&result);
          worldFilter.m_nHierarchyId = 0;
          worldFilter.m_nInteractsExclude = 0;
          worldFilter.m_nInteractsAs = 0;
          worldFilter.m_nEntityIdToIgnore = -1;
          worldFilter.m_nCollisionGroup = 3;
          *(&worldFilter.RnQueryShapeAttr_t + 31) = *(&worldFilter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
          worldFilter.m_nObjectSetMask = 1;
          worldFilter.m_nInteractsWith = 28673;
          worldFilter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(0);
          worldFilter.m_nHierarchyId = HierarchyIDFromBaseEntity(0);
          m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
          vFront.x = x;
          v70 = m_fValue;
          vFront.y = target;
          v59 = target - target;
          v57 = 0;
          v58 = x - x;
          v61 = 0;
          v65 = 0;
          v69 = 0;
          v60 = -956301312;
          v68 = 0;
          v67 = 0;
          v71 = 1;
          v66 = 0;
          v64 = 0;
          v63 = 0;
          v62 = 0;
          vFront.z = 16384.0;
          ++m_BotWardLocations;
          v72 = (((v58 * v58) + (v59 * v59)) + 1073741800.0) != 0.0;
          CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &vFront, &worldFilter, &result);
          vWardPosition.z = (-32768.0 * result.fraction) + 16384.0;
          NDebugOverlay::Sphere(&vWardPosition, COERCE_DOUBLE(1103626240), 0xFFu, 0xFFu, 0, 1, 0.01023);
          v25 = v21;
          v21 += 64;
          vFront.y = vWardPosition.y + 0.0;
          vFront.z = vWardPosition.z + 100.0;
          vFront.x = vWardPosition.x + 0.0;
          NDebugOverlay::Text(&vFront, v25, 0, 0.01023);
        }
        while ( v21 != pszBadLaneBuildingNames );
      }
      return;
  }
}


// CDOTA_Commander::RegisterUnit  (line 1667, @0x00000000027ede60, libserver.so)
// calls: CDOTA_Commander::IsBotGame, CDOTA_TeamCommander::RegisterUnit
// callers: CDOTA_Commander::ChangeUnitTeam, CDOTA_Commander::RegisterAllUnits, CDOTA_BaseNPC::Activate, OnHeroSpawned
void __fastcall CDOTA_Commander::RegisterUnit(CDOTA_Commander *const this, CDOTA_BaseNPC *pUnit)
{
  unsigned __int8 m_Value; // al

  if ( CDOTA_Commander::IsBotGame(this) )
  {
    m_Value = pUnit->m_iTeamNum.m_Value;
    if ( m_Value == 2 )
    {
      CDOTA_TeamCommander::RegisterUnit(&this->m_GoodGuys, pUnit);
    }
    else if ( m_Value == 3 )
    {
      CDOTA_TeamCommander::RegisterUnit(&this->m_BadGuys, pUnit);
    }
  }
}


// CDOTA_Commander::UnregisterUnit  (line 1681, @0x00000000027ee020, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Commander::UnregisterUnitFromTeam
// callers: CDOTA_BaseNPC::UpdateOnRemove
void __fastcall CDOTA_Commander::UnregisterUnit(CDOTA_Commander *const this, CDOTA_BaseNPC *pUnit)
{
  CDOTA_Commander::UnregisterUnitFromTeam(this, pUnit, pUnit->m_iTeamNum.m_Value);
}


// CDOTA_Commander::UnregisterUnitFromTeam  (line 1688, @0x00000000027edec0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set
// calls: CDOTA_TeamCommander::RemoveFromUnitsLists, CDOTA_TeamCommander::UnregisterUnit
// callers: CDOTA_Commander::UnregisterUnit, CDOTA_Commander::ChangeUnitTeam, CDOTA_Commander::RegisterAllUnits
void __fastcall CDOTA_Commander::UnregisterUnitFromTeam(
        CDOTA_Commander *const this,
        CDOTA_BaseNPC *pUnit,
        int iTeamNumber)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // cx
  CDOTA_TeamCommander *p_m_GoodGuys; // r12
  CEntityIdentity *v9; // rdx
  __int16 v10; // di
  CDOTA_TeamCommander *p_m_BadGuys; // r14
  EHANDLE hUnit; // [rsp+0h] [rbp-40h] BYREF

  hUnit.m_Index = -1;
  if ( pUnit != 0 )
  {
    m_pEntity = pUnit->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hUnit.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
    }
    p_m_GoodGuys = &this->m_GoodGuys;
    CDOTA_TeamCommander::RemoveFromUnitsLists(&this->m_GoodGuys, &hUnit);
    v9 = pUnit->m_pEntity;
    hUnit.m_Index = -1;
    if ( v9 != 0 )
    {
      v10 = 0x7FFF;
      if ( v9->m_EHandle.m_Index != -1 )
        v10 = v9->m_EHandle.m_Index & 0x7FFF;
      hUnit.m_Index = (((v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1)) << 15) | v10 & 0x7FFF;
    }
  }
  else
  {
    p_m_GoodGuys = &this->m_GoodGuys;
    CDOTA_TeamCommander::RemoveFromUnitsLists(&this->m_GoodGuys, &hUnit);
    hUnit.m_Index = -1;
  }
  p_m_BadGuys = &this->m_BadGuys;
  CDOTA_TeamCommander::RemoveFromUnitsLists(p_m_BadGuys, &hUnit);
  if ( iTeamNumber == 2 )
  {
    CDOTA_TeamCommander::UnregisterUnit(p_m_GoodGuys, pUnit);
  }
  else if ( iTeamNumber == 3 )
  {
    CDOTA_TeamCommander::UnregisterUnit(p_m_BadGuys, pUnit);
  }
}


// CDOTA_Commander::RegisterAllUnits  (line 1702, @0x00000000027fa080, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, LookupEntity, Purge, ToDOTABaseNPC, UnregisterUnit, end, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: FindUnitsInRadius, CDOTA_Commander::UnregisterUnitFromTeam, CDOTA_Commander::RegisterUnit, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Commander::FrameUpdatePostEntityThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Commander::RegisterAllUnits(CDOTA_Commander *const this)
{
  CHandle<CBaseEntity> *m_pMemory; // rbx
  CHandle<CBaseEntity> *v3; // r14
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CHandle<CBaseEntity> *v7; // rbx
  CHandle<CBaseEntity> *v8; // r14
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v11; // rsi
  EHANDLE hUnit; // [rsp+20h] [rbp-50h]
  EHANDLE hUnita; // [rsp+20h] [rbp-50h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+30h] [rbp-40h] BYREF

  hUnits.m_Size = 0;
  hUnits.m_Memory.m_pMemory = 0;
  hUnits.m_Memory.m_nAllocationCount = 0;
  hUnits.m_Memory.m_nGrowSize = 0;
  FindUnitsInRadius(2, &vec3_origin, 0, -1.0, &hUnits, 3, 3, 0, 0, 0);
  m_pMemory = hUnits.m_Memory.m_pMemory;
  v3 = &hUnits.m_Memory.m_pMemory[hUnits.m_Size];
  if ( hUnits.m_Memory.m_pMemory != v3 )
  {
    do
    {
      while ( 1 )
      {
        hUnit.m_Index = m_pMemory->m_Index;
        if ( m_pMemory->m_Index + 2 > 1 )
        {
          v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hUnit.m_Index) >> 9) & 0x3F];
          if ( v4 != 0 )
          {
            v5 = &v4[hUnit.m_Index & 0x1FF];
            if ( v5 != 0 && m_pMemory->m_Index == v5->m_EHandle.m_Index )
            {
              m_pInstance = v5->m_pInstance;
              if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        if ( v3 == ++m_pMemory )
          goto LABEL_11;
      }
      CDOTA_Commander::UnregisterUnitFromTeam(this, m_pInstance, m_pInstance->m_iTeamNum.m_Value);
      ++m_pMemory;
    }
    while ( v3 != m_pMemory );
LABEL_11:
    v7 = hUnits.m_Memory.m_pMemory;
    v8 = &hUnits.m_Memory.m_pMemory[hUnits.m_Size];
    if ( v8 != hUnits.m_Memory.m_pMemory )
    {
      do
      {
        while ( 1 )
        {
          hUnita.m_Index = v7->m_Index;
          if ( v7->m_Index + 2 > 1 )
          {
            v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hUnita.m_Index) >> 9) & 0x3F];
            if ( v9 != 0 )
            {
              v10 = &v9[hUnita.m_Index & 0x1FF];
              if ( v10 != 0 && v7->m_Index == v10->m_EHandle.m_Index )
              {
                v11 = v10->m_pInstance;
                if ( v10->m_pInstance != 0 && v11->m_bIsDOTANPC )
                  break;
              }
            }
          }
          if ( v8 == ++v7 )
            goto LABEL_21;
        }
        CDOTA_Commander::RegisterUnit(this, v11);
        ++v7;
      }
      while ( v8 != v7 );
    }
  }
LABEL_21:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hUnits);
  if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
    if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
  }
}


// CDOTA_Commander::ChangeUnitTeam  (line 1732, @0x00000000027ee040, libserver.so)
// calls: CDOTA_Commander::UnregisterUnitFromTeam, CDOTA_Commander::RegisterUnit
// callers: CDOTA_BaseNPC::ChangeTeam
void __fastcall CDOTA_Commander::ChangeUnitTeam(CDOTA_Commander *const this, CDOTA_BaseNPC *pUnit, int iOldTeamNumber)
{
  if ( iOldTeamNumber != 0 )
  {
    CDOTA_Commander::UnregisterUnitFromTeam(this, pUnit, iOldTeamNumber);
    CDOTA_Commander::RegisterUnit(this, pUnit);
  }
}


// CDOTA_Commander::SetDebugState  (line 1746, @0x0000000002807310, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CDOTA_Commander::sBotDebugEntity>, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPCHero, operator CEntityInstance*, operator=, operator==<CBaseEntity>, operator[], sBotDebugEntity
// calls: CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CDOTA_Commander::sBotDebugEntity, CUtlMemory<CDOTA_Commander::sBotDebugEntity, int> >::RemoveAll, CUtlMemory<CDOTA_Commander::sBotDebugEntity, int>::Grow
// callers: PickerBotDebug
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Commander::SetDebugState(
        CDOTA_Commander *const this,
        DOTA_BOT_DEBUG_STATE state,
        const CEntityHandle *entity)
{
  CEntityHandle v5; // r12d
  CDOTA_Commander::sBotDebugEntity *m_pMemory; // rax
  CEntityInstance *v7; // rsi
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  CEntityInstance *m_pInstance; // r8
  uint32 m_Index; // ecx
  CEntityIdentity *v12; // rsi
  CEntityIdentity *v13; // rsi
  int v14; // eax
  CDOTA_Commander::sBotDebugEntity *v15; // rax
  __int64 v16; // r13
  CDOTA_Commander::sBotDebugEntity *v17; // rax
  CEntityInstance *v18; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v20; // cx
  int v21; // r12d
  int v22; // edx
  int m_Size; // [rsp+8h] [rbp-48h]
  int v25; // [rsp+14h] [rbp-3Ch]

  if ( CEntityHandle::operator CEntityInstance *(entity) != 0 )
  {
    m_Size = this->m_DebugEntities.m_Size;
    if ( m_Size <= 0 )
    {
      v5.m_Index = entity->m_Index;
LABEL_17:
      v14 = this->m_DebugEntities.m_Size;
      if ( this->m_DebugEntities.m_Memory.m_nAllocationCount == m_Size )
      {
        CUtlMemory<CDOTA_Commander::sBotDebugEntity,int>::Grow(&this->m_DebugEntities.m_Memory, 1);
        v14 = this->m_DebugEntities.m_Size;
      }
      this->m_DebugEntities.m_Size = v14 + 1;
      v15 = &this->m_DebugEntities.m_Memory.m_pMemory[m_Size];
      if ( v15 != 0 )
      {
        v15->m_DebugEntity = v5.m_Index;
        v15->m_DebugState = state;
      }
    }
    else
    {
      v5.m_Index = entity->m_Index;
      m_pMemory = this->m_DebugEntities.m_Memory.m_pMemory;
      while ( 1 )
      {
        m_pInstance = 0;
        m_Index = m_pMemory->m_DebugEntity.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_DebugEntity.m_Index) >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = &v12[m_pMemory->m_DebugEntity.m_Index & 0x1FF];
            if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
              m_pInstance = v13->m_pInstance;
          }
        }
        v7 = 0;
        if ( entity->m_Index + 2 > 1 )
        {
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(entity->m_Index) >> 9) & 0x3F];
          if ( v8 != 0 )
          {
            v9 = &v8[entity->m_Index & 0x1FF];
            if ( v9 != 0 && v5.m_Index == v9->m_EHandle.m_Index )
              v7 = v9->m_pInstance;
          }
        }
        if ( m_pInstance == v7 )
          break;
        if ( ++m_pMemory == &this->m_DebugEntities.m_Memory.m_pMemory[(m_Size - 1) + 1] )
          goto LABEL_17;
      }
      m_pMemory->m_DebugState = state;
    }
  }
  else
  {
    v16 = 0;
    CUtlVectorBase<CDOTA_Commander::sBotDebugEntity,CUtlMemory<CDOTA_Commander::sBotDebugEntity,int>>::RemoveAll(&this->m_DebugEntities);
    if ( g_HeroList.m_hHeroList.m_Size > 0 )
    {
      do
      {
        v25 = -1;
        v18 = CEntityHandle::operator CEntityInstance *(&g_HeroList.m_hHeroList.m_Memory.m_pMemory[v16]);
        if ( v18 != 0 && (v18[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          m_pEntity = v18->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v20 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            v25 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v20 & 0x7FFF;
          }
        }
        v21 = this->m_DebugEntities.m_Size;
        v22 = v21;
        if ( v21 == this->m_DebugEntities.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CDOTA_Commander::sBotDebugEntity,int>::Grow(&this->m_DebugEntities.m_Memory, 1);
          v22 = this->m_DebugEntities.m_Size;
        }
        this->m_DebugEntities.m_Size = v22 + 1;
        v17 = &this->m_DebugEntities.m_Memory.m_pMemory[v21];
        if ( v17 != 0 )
        {
          v17->m_DebugState = state;
          v17->m_DebugEntity.m_Index = v25;
        }
        ++v16;
      }
      while ( g_HeroList.m_hHeroList.m_Size > v16 );
    }
  }
}


// CDOTA_Commander::ClearDebugState  (line 1781, @0x00000000027fc8b0, libserver.so)  // inlines: Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Remove, ShiftElementsLeft, V_memmove, memmove, operator CEntityInstance*, operator==<CBaseEntity>, operator[]
// calls: CEntityHandle::operator CEntityInstance*, memmove, CUtlVectorBase<CDOTA_Commander::sBotDebugEntity, CUtlMemory<CDOTA_Commander::sBotDebugEntity, int> >::RemoveAll
// callers: CC_dota_bot_debug_clear, CC_dota_bot_debug_clear_all
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Commander::ClearDebugState(CDOTA_Commander *const this, const CEntityHandle *entity)
{
  int m_Size; // ebx
  int v5; // ecx
  CDOTA_Commander::sBotDebugEntity *i; // rax
  CEntityInstance *v7; // r8
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // r9
  uint32 m_Index; // edx
  CEntityIdentity *v12; // r8
  CEntityIdentity *v13; // r8

  if ( CEntityHandle::operator CEntityInstance *(entity) != 0 )
  {
    m_Size = this->m_DebugEntities.m_Size;
    if ( m_Size > 0 )
    {
      v5 = 0;
      for ( i = this->m_DebugEntities.m_Memory.m_pMemory; ; ++i )
      {
        m_pInstance = 0;
        m_Index = i->m_DebugEntity.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(i->m_DebugEntity.m_Index) >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = &v12[i->m_DebugEntity.m_Index & 0x1FF];
            if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
              m_pInstance = v13->m_pInstance;
          }
        }
        v7 = 0;
        if ( entity->m_Index + 2 > 1 )
        {
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(entity->m_Index) >> 9) & 0x3F];
          if ( v8 != 0 )
          {
            v9 = &v8[entity->m_Index & 0x1FF];
            if ( v9 != 0 && entity->m_Index == v9->m_EHandle.m_Index )
              v7 = v9->m_pInstance;
          }
        }
        if ( m_pInstance == v7 )
          break;
        if ( ++v5 == m_Size )
          return;
      }
      if ( m_Size - v5 - 1 > 0 )
      {
        memmove(i, &this->m_DebugEntities.m_Memory.m_pMemory[v5 + 1], 8LL * (m_Size - v5 - 1));
        m_Size = this->m_DebugEntities.m_Size;
      }
      this->m_DebugEntities.m_Size = m_Size - 1;
    }
  }
  else
  {
    CUtlVectorBase<CDOTA_Commander::sBotDebugEntity,CUtlMemory<CDOTA_Commander::sBotDebugEntity,int>>::RemoveAll(&this->m_DebugEntities);
  }
}


// CDOTA_Commander::IsDebuggingEntity  (line 1802, @0x00000000027ee080, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==<CBaseEntity>
// callers: CDOTA_BotAction_Attack::Think, CDOTA_BotAction_AttackMove::Think, CDOTA_BotAction_UseAbility::Think, CDOTA_BotAction_PickUpRune::Think, CDOTA_BotAction_PickUpItem::Think, CDOTA_BotAction_DropItem::Think, CDOTA_Bot::DrawDebug, CDOTA_Bot::SwitchToMode, CDOTA_BotAction_MoveTo::Think, CDOTA_Bot::DoCreepAttackAndDeny, CDOTA_BotMode_Laning::CalculateDesiredLocation, CDOTA_BotMode_Laning::Think (13 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Commander::IsDebuggingEntity(
        CDOTA_Commander *const this,
        DOTA_BOT_DEBUG_STATE state,
        _WORD *entity)
{
  int m_Size; // eax
  CDOTA_Commander::sBotDebugEntity *v4; // r12
  CDOTA_Commander::sBotDebugEntity *m_pMemory; // rax
  CEntityInstance *v6; // rdi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CEntityInstance *m_pInstance; // r8
  uint32 m_Index; // ecx
  CEntityIdentity *v11; // rdi
  CEntityIdentity *v12; // rdi

  m_Size = this->m_DebugEntities.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v4 = &this->m_DebugEntities.m_Memory.m_pMemory[(m_Size - 1) + 1];
  m_pMemory = this->m_DebugEntities.m_Memory.m_pMemory;
  do
  {
    m_pInstance = 0;
    m_Index = m_pMemory->m_DebugEntity.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_DebugEntity.m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[m_pMemory->m_DebugEntity.m_Index & 0x1FF];
        if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
          m_pInstance = v12->m_pInstance;
      }
    }
    v6 = 0;
    if ( (*entity + 2) > 1 )
    {
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*entity >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[*entity & 0x1FF];
        if ( v8 != 0 && v8->m_EHandle.m_Index == *entity )
          v6 = v8->m_pInstance;
      }
    }
    if ( m_pInstance == v6 )
      return m_pMemory->m_DebugState == state;
    ++m_pMemory;
  }
  while ( m_pMemory != v4 );
  return 0;
}


// PickerBotDebug  (line 1817, @0x00000000028075e0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, ToDOTABaseNPC
// calls: UTIL_GetCommandClient, CDOTA_Commander::SetDebugState
// callers: CC_dota_bot_select_debug, CC_dota_bot_select_debug_attack
// globals: g_DOTACommander
void __fastcall PickerBotDebug(DOTA_BOT_DEBUG_STATE state)
{
  CBasePlayer *CommandClient; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int16 v5; // cx
  EHANDLE entity; // [rsp+0h] [rbp-20h] BYREF

  CommandClient = UTIL_GetCommandClient();
  v3 = (*(CommandClient->_vptr_IHandleEntity + 531))(CommandClient);
  if ( v3 != 0 && *(v3 + 339) != 0 )
  {
    v4 = *(v3 + 8);
    entity.m_Index = -1;
    if ( v4 != 0 )
    {
      v5 = 0x7FFF;
      if ( *(v4 + 16) != -1 )
        v5 = *(v4 + 16) & 0x7FFF;
      entity.m_Index = (((*(v4 + 16) >> 15) - (*(v4 + 48) & 1)) << 15) | v5 & 0x7FFF;
    }
    CDOTA_Commander::SetDebugState(&g_DOTACommander, state, &entity);
  }
}


// CC_dota_bot_potential_debug  (line 1832, @0x00000000027e1050, libserver.so)  // inlines: GetBotByIndex, ToDOTABaseNPC, operator[]
// calls: UTIL_GetCommandClient, ConVar::SetValue
// globals: dota_bot_debug_potential_location
void __fastcall CC_dota_bot_potential_debug(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  __int64 v3; // rax
  CDOTA_Bot *v4; // rdi
  __int64 v5; // rax
  CDOTA_Bot *v6; // r8
  CDOTA_Bot *v7; // r8

  CommandClient = UTIL_GetCommandClient();
  v3 = (*(CommandClient->_vptr_IHandleEntity + 531))(CommandClient);
  if ( v3 != 0 && *(v3 + 339) != 0 )
  {
    v4 = *(v3 + 2192);
    v5 = 0;
    while ( 1 )
    {
      if ( g_DOTACommander.m_GoodGuys.m_BotList.m_Size > v5 )
      {
        v6 = g_DOTACommander.m_GoodGuys.m_BotList.m_Memory.m_pMemory[v5];
        if ( v4 == v6 && v6 != 0 )
        {
          ConVar::SetValue(&dota_bot_debug_potential_location, ~v5);
          return;
        }
      }
      if ( g_DOTACommander.m_BadGuys.m_BotList.m_Size > v5 )
      {
        v7 = g_DOTACommander.m_BadGuys.m_BotList.m_Memory.m_pMemory[v5];
        if ( v4 == v7 && v7 != 0 )
          break;
      }
      if ( ++v5 == 5 )
        return;
    }
    ConVar::SetValue(&dota_bot_debug_potential_location, v5 + 1);
  }
}


// CC_dota_bot_select_debug  (line 1864, @0x0000000002807680, libserver.so)
// calls: PickerBotDebug
void __fastcall CC_dota_bot_select_debug(const CCommandContext *const ctx, const CCommand *const args)
{
  PickerBotDebug(DOTA_BOT_DEBUG_STATE::DOTA_BOT_DEBUG);
}


// CC_dota_bot_select_debug_attack  (line 1872, @0x0000000002807690, libserver.so)
// calls: PickerBotDebug
void __fastcall CC_dota_bot_select_debug_attack(const CCommandContext *const ctx, const CCommand *const args)
{
  PickerBotDebug(DOTA_BOT_DEBUG_STATE::DOTA_BOT_DEBUG_ATTACK);
}


// CC_dota_bot_debug_clear  (line 1880, @0x00000000027fca50, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, ToDOTABaseNPC
// calls: UTIL_GetCommandClient, CDOTA_Commander::ClearDebugState
// globals: g_DOTACommander
void __fastcall CC_dota_bot_debug_clear(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int16 v5; // cx
  EHANDLE entity; // [rsp+0h] [rbp-10h] BYREF

  CommandClient = UTIL_GetCommandClient();
  v3 = (*(CommandClient->_vptr_IHandleEntity + 531))(CommandClient);
  if ( v3 != 0 && *(v3 + 339) != 0 )
  {
    v4 = *(v3 + 8);
    entity.m_Index = -1;
    if ( v4 != 0 )
    {
      v5 = 0x7FFF;
      if ( *(v4 + 16) != -1 )
        v5 = *(v4 + 16) & 0x7FFF;
      entity.m_Index = (((*(v4 + 16) >> 15) - (*(v4 + 48) & 1)) << 15) | v5 & 0x7FFF;
    }
    CDOTA_Commander::ClearDebugState(&g_DOTACommander, &entity);
  }
}


// CC_dota_bot_debug_grid_cycle  (line 1896, @0x00000000027e0320, libserver.so)  // inlines: GetInt
// calls: ConVar::SetValue, Msg
// strings: "DEBUGGING: Passability\n", "DEBUGGING: Off\n", "DEBUGGING: Good Guys Avoidance\n", "DEBUGGING: Bad Guys Avoidance\n", "DEBUGGING: Good Guys Potential Enemy Locations\n", "DEBUGGING: Bad Guys Potential Enemy Locations\n" (9 total)
// globals: jpt_27E0346, dota_bot_debug_grid
void __fastcall CC_dota_bot_debug_grid_cycle(const CCommandContext *const ctx, const CCommand *const args)
{
  switch ( dota_bot_debug_grid.m_pParent->m_Value.m_nValue )
  {
    case 0:
      ConVar::SetValue(&dota_bot_debug_grid, 1);
      Msg("DEBUGGING: Good Guys Avoidance\n");
      break;
    case 1:
      ConVar::SetValue(&dota_bot_debug_grid, 2);
      Msg("DEBUGGING: Bad Guys Avoidance\n");
      break;
    case 2:
      ConVar::SetValue(&dota_bot_debug_grid, 3);
      Msg("DEBUGGING: Good Guys Potential Enemy Locations\n");
      break;
    case 3:
      ConVar::SetValue(&dota_bot_debug_grid, 4);
      Msg("DEBUGGING: Bad Guys Potential Enemy Locations\n");
      break;
    case 4:
      ConVar::SetValue(&dota_bot_debug_grid, 5);
      Msg("DEBUGGING: Good Guys Enemy Visibility\n");
      break;
    case 5:
      ConVar::SetValue(&dota_bot_debug_grid, 6);
      Msg("DEBUGGING: Bad Guys Enemy Visibility\n");
      break;
    case 6:
      ConVar::SetValue(&dota_bot_debug_grid, 7);
      Msg("DEBUGGING: Height Values\n");
      break;
    case 7:
      ConVar::SetValue(&dota_bot_debug_grid, 8);
      Msg("DEBUGGING: Passability\n");
      break;
    case 8:
      ConVar::SetValue(&dota_bot_debug_grid, 0);
      Msg("DEBUGGING: Off\n");
      break;
    default:
      return;
  }
}


// CC_dota_bot_debug_clear_all  (line 1915, @0x00000000027fcae0, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: CDOTA_Commander::ClearDebugState
// globals: g_DOTACommander
void __fastcall CC_dota_bot_debug_clear_all(const CCommandContext *const ctx, const CCommand *const args)
{
  EHANDLE entity; // [rsp+0h] [rbp-10h] BYREF

  entity.m_Index = -1;
  CDOTA_Commander::ClearDebugState(&g_DOTACommander, &entity);
}


// CC_dota_bot_debug_minimap_cycle  (line 1923, @0x00000000027e1160, libserver.so)  // inlines: DOTAGameRules, Get, GetInt, NetworkStateChanged, Set, SetMinimapDebugGridState, operator CEntityInstance*, operator=<int>
// calls: ConVar::SetValue, Msg
// strings: "DEBUGGING: Passability\n", "DEBUGGING: Off\n", "DEBUGGING: Good Guys Avoidance\n", "DEBUGGING: Bad Guys Potential Enemy Locations\n", "DEBUGGING: Good Guys Enemy Visibility\n", "DEBUGGING: Bad Guys Enemy Visibility\n" (9 total)
// globals: jpt_27E118B, dota_bot_debug_minimap
void __fastcall CC_dota_bot_debug_minimap_cycle(const CCommandContext *const ctx, const CCommand *const args)
{
  CGameRules *v2; // rbx
  int (**vptr_CGameRules)(...); // rdi

  switch ( dota_bot_debug_minimap.m_pParent->m_Value.m_nValue )
  {
    case 0:
      ConVar::SetValue(&dota_bot_debug_minimap, 1);
      Msg("DEBUGGING: Good Guys Avoidance\n");
      break;
    case 1:
      ConVar::SetValue(&dota_bot_debug_minimap, 2);
      Msg("DEBUGGING: Bad Guys Avoidance\n");
      break;
    case 2:
      ConVar::SetValue(&dota_bot_debug_minimap, 3);
      Msg("DEBUGGING: Good Guys Potential Enemy Locations\n");
      break;
    case 3:
      ConVar::SetValue(&dota_bot_debug_minimap, 4);
      Msg("DEBUGGING: Bad Guys Potential Enemy Locations\n");
      break;
    case 4:
      ConVar::SetValue(&dota_bot_debug_minimap, 5);
      Msg("DEBUGGING: Good Guys Enemy Visibility\n");
      break;
    case 5:
      ConVar::SetValue(&dota_bot_debug_minimap, 6);
      Msg("DEBUGGING: Bad Guys Enemy Visibility\n");
      break;
    case 6:
      ConVar::SetValue(&dota_bot_debug_minimap, 7);
      Msg("DEBUGGING: Height Values\n");
      break;
    case 7:
      ConVar::SetValue(&dota_bot_debug_minimap, 8);
      Msg("DEBUGGING: Passability\n");
      break;
    case 8:
      ConVar::SetValue(&dota_bot_debug_minimap, 0);
      v2 = g_pGameRules;
      if ( *&g_pGameRules[18].m_szQuestName[48] != 0 )
      {
        vptr_CGameRules = g_pGameRules[5]._vptr_CGameRules;
        if ( vptr_CGameRules != 0 && (*(vptr_CGameRules[1] + 49) & 4) == 0 )
          (*(*vptr_CGameRules + 22))(vptr_CGameRules, 2648, 0xFFFFFFFFLL, *g_pGameRules[5].m_szQuestName);
        *&v2[18].m_szQuestName[48] = 0;
      }
      Msg("DEBUGGING: Off\n");
      break;
    default:
      return;
  }
}


// dota_bot_give_item  (line 1945, @0x00000000027e3400, libserver.so)  // inlines: CUtlString, Get, GetBotByIndex, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*, ~CUtlString
// calls: CDOTAGamerules::IsCheatMode, DOTADetermineItemToGive, CEntityHandle::operator CEntityInstance*, CUtlString::Get, CDOTA_BaseNPC::AddItem, CUtlString::FreeMemoryBlock, _Unwind_Resume
void __fastcall dota_bot_give_item(const CCommandContext *const ctx, const CCommand *const args)
{
  __int64 v3; // r12
  int i; // ebx
  CDOTA_Bot *v5; // rdi
  CEntityInstance *v6; // rax
  const char *v7; // rax
  CDOTA_Bot *v8; // rdi
  const char *v9; // r14
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // rdi
  __int64 v12; // r12
  int j; // ebx
  CDOTA_Bot *v14; // rdi
  CEntityInstance *v15; // rax
  const char *v16; // rax
  CDOTA_Bot *v17; // rdi
  const char *v18; // r14
  CEntityInstance *v19; // rax
  CDOTA_BaseNPC *v20; // rdi
  CUtlString itemToGive; // [rsp+0h] [rbp-30h] BYREF

  if ( CDOTAGamerules::IsCheatMode() && args->m_nArgc > 1 )
  {
    itemToGive.m_pString = 0;
    if ( DOTADetermineItemToGive(args, &itemToGive) )
    {
      v3 = 0;
      for ( i = 0; i < g_DOTACommander.m_GoodGuys.m_BotList.m_Size; ++v3 )
      {
        v5 = g_DOTACommander.m_GoodGuys.m_BotList.m_Memory.m_pMemory[v3];
        if ( !v5->m_bHuman )
        {
          v6 = CEntityHandle::operator CEntityInstance *(&v5->m_hUnit);
          if ( v6 == 0 || BYTE3(v6[7]._vptr_IHandleEntity) == 0 )
            v6 = 0;
          if ( BYTE4(v6[80].m_CScriptComponent) != 0 )
          {
            v7 = CUtlString::Get(&itemToGive);
            v8 = 0;
            v9 = v7;
            if ( g_DOTACommander.m_GoodGuys.m_BotList.m_Size > i )
              v8 = g_DOTACommander.m_GoodGuys.m_BotList.m_Memory.m_pMemory[v3];
            v10 = CEntityHandle::operator CEntityInstance *(&v8->m_hUnit);
            if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
              v11 = v10;
            else
              v11 = 0;
            CDOTA_BaseNPC::AddItem(v11, v9, 3, -1, 0);
          }
        }
        ++i;
      }
      v12 = 0;
      for ( j = 0; j < g_DOTACommander.m_BadGuys.m_BotList.m_Size; ++v12 )
      {
        v14 = g_DOTACommander.m_BadGuys.m_BotList.m_Memory.m_pMemory[v12];
        if ( !v14->m_bHuman )
        {
          v15 = CEntityHandle::operator CEntityInstance *(&v14->m_hUnit);
          if ( v15 == 0 || BYTE3(v15[7]._vptr_IHandleEntity) == 0 )
            v15 = 0;
          if ( BYTE4(v15[80].m_CScriptComponent) != 0 )
          {
            v16 = CUtlString::Get(&itemToGive);
            v17 = 0;
            v18 = v16;
            if ( g_DOTACommander.m_BadGuys.m_BotList.m_Size > j )
              v17 = g_DOTACommander.m_BadGuys.m_BotList.m_Memory.m_pMemory[v12];
            v19 = CEntityHandle::operator CEntityInstance *(&v17->m_hUnit);
            if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
              v20 = v19;
            else
              v20 = 0;
            CDOTA_BaseNPC::AddItem(v20, v18, 3, -1, 0);
          }
        }
        ++j;
      }
      if ( itemToGive.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&itemToGive);
    }
    else if ( itemToGive.m_pString != 0 )
    {
      CUtlString::FreeMemoryBlock(&itemToGive);
    }
  }
}


// dota_bot_give_level  (line 1977, @0x00000000027e39f0, libserver.so)  // inlines: Arg, Clamp<int>, Get, GetHero, GetInstance, NetworkStateChanged, Set, SetCurrentXP, ToDOTABaseNPCHero, atoi, operator=<int>, operator[]
// calls: CDOTAGamerules::IsCheatMode, GetHeroMaxLevel, strtol, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::IsBot, GetXPNeededToReachNextLevel
void __fastcall dota_bot_give_level(const CCommandContext *const ctx, const CCommand *const args)
{
  int HeroMaxLevel; // eax
  const char *v4; // rdi
  int v5; // r13d
  int v6; // r12d
  int v7; // eax
  __int64 v8; // r14
  int v9; // r13d
  CEntityInstance *v10; // rax
  CEntityInstance *v11; // r15
  int i; // ebx
  _BOOL8 v13; // rsi
  int XPNeededToReachNextLevel; // ebx

  if ( CDOTAGamerules::IsCheatMode() && args->m_nArgc > 1 )
  {
    HeroMaxLevel = GetHeroMaxLevel();
    v4 = "";
    v5 = HeroMaxLevel;
    if ( args->m_nArgc > 1 )
      v4 = args->m_ppArgv[1];
    v6 = 1;
    v7 = strtol(v4, 0, 10);
    if ( v7 > 0 )
    {
      if ( v7 <= v5 )
        v5 = v7;
      v6 = v5;
    }
    if ( g_HeroList.m_hHeroList.m_Size > 0 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = CEntityHandle::operator CEntityInstance *(&g_HeroList.m_hHeroList.m_Memory.m_pMemory[v8]);
        v11 = v10;
        if ( v10 != 0 && (v10[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && CDOTA_BaseNPC::IsBot(v10) )
        {
          if ( v6 > 0 )
          {
            for ( i = 0; i != v6; ++i )
            {
              v13 = i == 0;
              (*(v11->_vptr_IHandleEntity + 492))(v11, v13);
            }
          }
          XPNeededToReachNextLevel = GetXPNeededToReachNextLevel(HIDWORD(v11[44].m_hPrivateScope.m_hScope) - 1);
          if ( XPNeededToReachNextLevel != LODWORD(v11[99].m_iszPrivateVScripts.u.m_Id) )
          {
            (*(v11->_vptr_IHandleEntity + 22))(v11, 4776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            LODWORD(v11[99].m_iszPrivateVScripts.u.m_Id) = XPNeededToReachNextLevel;
          }
        }
        ++v9;
        ++v8;
      }
      while ( v9 < g_HeroList.m_hHeroList.m_Size );
    }
  }
}


// dota_bot_give_gold  (line 2006, @0x00000000027e1d00, libserver.so)  // inlines: Arg, Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, IndexToIdentity, IsValid, LookupEntity, ModifyGold, ToDOTABaseNPCHero, atoi, operator CEntityInstance*, operator[]
// calls: CDOTA_BaseNPC::IsBot, strtol, CDOTA_PlayerResource::ModifyGold
// globals: CEntityHandle::gm_pEntityList
void __fastcall dota_bot_give_gold(const CCommandContext *const ctx, const CCommand *const args)
{
  __int64 v3; // r12
  int v4; // ebx
  CHandle<CDOTA_BaseNPC_Hero> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  const char *v11; // rdi
  int v12; // eax

  v3 = 0;
  v4 = 0;
  while ( v4 < g_HeroList.m_hHeroList.m_Size )
  {
    while ( 1 )
    {
      v5 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v3];
      m_Index = v5->m_Index;
      if ( v5->m_Index + 2 > 1 )
      {
        v7 = v5->m_Index;
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[v7 & 0x1FF];
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
          {
            m_pInstance = v9->m_pInstance;
            if ( v9->m_pInstance != 0 && (m_pInstance->m_iUnitType & 1) != 0 && CDOTA_BaseNPC::IsBot(v9->m_pInstance) )
              break;
          }
        }
      }
      ++v4;
      ++v3;
      if ( v4 >= g_HeroList.m_hHeroList.m_Size )
        return;
    }
    v11 = "";
    if ( args->m_nArgc > 1 )
      v11 = args->m_ppArgv[1];
    ++v4;
    v12 = strtol(v11, 0, 10);
    ++v3;
    CDOTA_PlayerResource::ModifyGold(g_pDOTAPlayerResource, m_pInstance[1].m_pfnBlocked.__delta, v12, 1, 0);
  }
}


// dota_bot_set_difficulty  (line 2020, @0x00000000027e1ae0, libserver.so)  // inlines: Arg, Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPCHero, atoi, operator CEntityInstance*, operator[]
// calls: CDOTA_BaseNPC::IsBot, strtol
// globals: CEntityHandle::gm_pEntityList
void __fastcall dota_bot_set_difficulty(const CCommandContext *const ctx, const CCommand *const args)
{
  __int64 v3; // r12
  int v4; // ebx
  CHandle<CDOTA_BaseNPC_Hero> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  const char *v11; // rdi
  int v12; // eax
  bool v13; // cc

  v3 = 0;
  v4 = 0;
  if ( g_HeroList.m_hHeroList.m_Size > 0 )
  {
    do
    {
      while ( 1 )
      {
        v5 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v3];
        m_Index = v5->m_Index;
        if ( v5->m_Index + 2 > 1 )
        {
          v7 = v5->m_Index;
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
          if ( v8 != 0 )
          {
            v9 = &v8[v7 & 0x1FF];
            if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
            {
              m_pInstance = v9->m_pInstance;
              if ( v9->m_pInstance != 0 && (m_pInstance->m_iUnitType & 1) != 0 && CDOTA_BaseNPC::IsBot(v9->m_pInstance) )
                break;
            }
          }
        }
        ++v4;
        ++v3;
        if ( v4 >= g_HeroList.m_hHeroList.m_Size )
          return;
      }
      v11 = "";
      if ( args->m_nArgc > 1 )
        v11 = args->m_ppArgv[1];
      ++v4;
      v12 = strtol(v11, 0, 10);
      ++v3;
      v13 = v4 < g_HeroList.m_hHeroList.m_Size;
      m_pInstance->m_pBot->m_iDifficulty = v12;
    }
    while ( v13 );
  }
}


// dota_kill_all_bots  (line 2034, @0x00000000027e1a10, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPCHero, operator CEntityInstance*, operator[]
// calls: CDOTA_BaseNPC::IsBot, UTIL_Remove
// globals: CEntityHandle::gm_pEntityList
void __fastcall dota_kill_all_bots(const CCommandContext *const ctx, const CCommand *const args)
{
  __int64 v2; // r12
  int i; // ebx
  CHandle<CDOTA_BaseNPC_Hero> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14

  v2 = 0;
  for ( i = 0; i < g_HeroList.m_hHeroList.m_Size; ++i )
  {
    while ( 1 )
    {
      v4 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v2];
      m_Index = v4->m_Index;
      if ( v4->m_Index + 2 > 1 )
      {
        v6 = v4->m_Index;
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[v6 & 0x1FF];
          if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
          {
            m_pInstance = v8->m_pInstance;
            if ( v8->m_pInstance != 0 && (m_pInstance->m_iUnitType & 1) != 0 && CDOTA_BaseNPC::IsBot(v8->m_pInstance) )
              break;
          }
        }
      }
      ++i;
      ++v2;
      if ( i >= g_HeroList.m_hHeroList.m_Size )
        return;
    }
    ++v2;
    UTIL_Remove(m_pInstance);
  }
}


// dota_bot_disconnect_player  (line 2046, @0x00000000027e1be0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPCHero, operator CEntityInstance*, operator[]
// calls: CDOTA_BaseNPC::IsBot, UTIL_VarArgs
// strings: "kick \"%s\"\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall dota_bot_disconnect_player(const CCommandContext *const ctx, const CCommand *const args)
{
  __int64 v2; // r12
  int v3; // ebx
  CHandle<CDOTA_BaseNPC_Hero> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  __int64 v10; // rax
  void (__fastcall *v11)(IVEngineServer2 *, char *); // r15
  const char *v12; // rax
  char *v13; // rax

  v2 = 0;
  v3 = 0;
  while ( v3 < g_HeroList.m_hHeroList.m_Size )
  {
    while ( 1 )
    {
      v4 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v2];
      m_Index = v4->m_Index;
      if ( v4->m_Index + 2 > 1 )
      {
        v6 = v4->m_Index;
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[v6 & 0x1FF];
          if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
          {
            m_pInstance = v8->m_pInstance;
            if ( v8->m_pInstance != 0 && (m_pInstance->m_iUnitType & 1) != 0 && CDOTA_BaseNPC::IsBot(v8->m_pInstance) )
            {
              v10 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
              if ( v10 != 0 )
                break;
            }
          }
        }
      }
      ++v3;
      ++v2;
      if ( v3 >= g_HeroList.m_hHeroList.m_Size )
        return;
    }
    ++v3;
    ++v2;
    v11 = *(*engine + 280LL);
    v12 = (*(*v10 + 848LL))(v10);
    v13 = UTIL_VarArgs("kick \"%s\"\n", v12);
    v11(engine, v13);
  }
}


// dota_bot_dump_state  (line 2064, @0x00000000027ebf10, libserver.so)  // inlines: Arg, CDOTAUserMsg_AIDebugLine_t, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, CUtlString, FindGameEvent<CDOTAUserMsg_AIDebugLine_t>, FindOrCreateGameEvent<CDOTAUserMsg_AIDebugLine_t>, PostEvent<CDOTAUserMsg_AIDebugLine_t>, SendUserMessage<CDOTAUserMsg_AIDebugLine_t>, String, assign, length, operator[], set_has_message, set_message, ~CDOTAUserMsg_AIDebugLine_t, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB, ~CUtlString
// calls: CDOTA_Commander::IsBotGame, CDOTA_TeamCommander::BuildDebugString, CDOTAUserMsg_AIDebugLine::CDOTAUserMsg_AIDebugLine, UTIL_GetCommandClient, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CUtlString::Get, strlen, std::string::assign(char const*,ulong), Msg, CRecipientFilter::~CRecipientFilter (16 total)
// globals: g_DOTACommander, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AIDebugLine_t>(bool)::s_hEvent
void __fastcall dota_bot_dump_state(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v3; // rdx
  const char *v4; // rdx
  CBasePlayer *CommandClient; // r14
  const char *v6; // rax
  const char *v7; // r14
  size_t v8; // rax
  __int64 v9; // r15
  IGameEventSystem *v10; // r14
  const char *v11; // rax
  void (__fastcall *v12)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+8h] [rbp-1A8h]
  CUtlString debugString; // [rsp+10h] [rbp-1A0h] BYREF
  _QWORD v14[2]; // [rsp+20h] [rbp-190h] BYREF
  int v15; // [rsp+30h] [rbp-180h]
  std::string *v16; // [rsp+38h] [rbp-178h]
  CSingleUserRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v18; // [rsp+178h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  if ( CDOTA_Commander::IsBotGame(&g_DOTACommander) )
  {
    debugString.m_pString = 0;
    if ( args->m_nArgc == 1 )
    {
      CDOTA_TeamCommander::BuildDebugString(&g_DOTACommander.m_GoodGuys, &debugString, 0);
      v4 = 0;
    }
    else
    {
      v3 = "";
      if ( args->m_nArgc > 1 )
        v3 = args->m_ppArgv[1];
      CDOTA_TeamCommander::BuildDebugString(&g_DOTACommander.m_GoodGuys, &debugString, v3);
      v4 = "";
      if ( args->m_nArgc > 1 )
        v4 = args->m_ppArgv[1];
    }
    CDOTA_TeamCommander::BuildDebugString(&g_DOTACommander.m_BadGuys, &debugString, v4);
    CDOTAUserMsg_AIDebugLine::CDOTAUserMsg_AIDebugLine(v14);
    v14[0] = off_42B6530;
    CommandClient = UTIL_GetCommandClient();
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::AddRecipient(&filter, CommandClient);
    CRecipientFilter::MakeReliable(&filter);
    v6 = CUtlString::Get(&debugString);
    v15 |= 1u;
    v7 = v6;
    v8 = strlen(v6);
    std::string::assign(v16, v7, v8);
    v9 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AIDebugLine_t>(bool)::s_hEvent;
    v10 = g_pGameEventSystem;
    v12 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_AIDebugLine_t>(bool)::s_hEvent);
    v12(v10, 0, 0, &filter, v9, v14, 32);
    v11 = CUtlString::Get(&debugString);
    Msg("%s", v11);
    filter._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::~CRecipientFilter(&filter);
    v14[0] = &off_42B63B0;
    CDOTAUserMsg_AIDebugLine::~CDOTAUserMsg_AIDebugLine(v14);
    if ( debugString.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&debugString);
  }
}


// dota_bot_reload_scripts  (line 2094, @0x00000000027e0480, libserver.so)
// calls: CDOTA_TeamCommander::ReloadScripts, Msg
// strings: "Bot scripts reloaded.\n"
void __fastcall dota_bot_reload_scripts(const CCommandContext *const ctx, const CCommand *const args)
{
  CDOTA_TeamCommander::ReloadScripts(&g_DOTACommander.m_GoodGuys);
  CDOTA_TeamCommander::ReloadScripts(&g_DOTACommander.m_BadGuys);
  Msg("Bot scripts reloaded.\n");
}


