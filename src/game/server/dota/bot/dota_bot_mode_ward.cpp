
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Ward::CDOTA_BotMode_Ward  (line 27, @0x000000000282aab0, libserver.so)  // inlines: operator=
// calls: CDOTA_BotMode::CDOTA_BotMode
// callers: CDOTA_Bot::CreateMode
void __fastcall CDOTA_BotMode_Ward::CDOTA_BotMode_Ward(CDOTA_BotMode_Ward *const this, CDOTA_Bot *pBot)
{
  CDOTA_BotMode::CDOTA_BotMode(this, pBot);
  this->_vptr_CDOTA_BotMode = off_42B9010;  // vptr: CDOTA_BotMode_Ward
  this->m_vBestWardLocation = vec3_invalid;
}


// CDOTA_BotMode_Ward::OnStart  (line 35, @0x0000000002828d30, libserver.so)  // inlines: NetworkStateChanged, Set, SetBotDebugData, operator=<int>
// calls: CDOTA_BotMode::DoScriptOnStart, CDOTA_BotMode::GetUnit
void __fastcall CDOTA_BotMode_Ward::OnStart(CDOTA_BotMode_Ward *const this)
{
  int v2; // r12d
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC *v4; // rbx

  if ( !CDOTA_BotMode::DoScriptOnStart(this) )
  {
    v2 = (*(this->_vptr_CDOTA_BotMode + 2))(this);
    Unit = CDOTA_BotMode::GetUnit(this);
    v4 = Unit;
    if ( v2 != Unit->m_iBotDebugData.m_Value )
    {
      (*(Unit->_vptr_IHandleEntity + 22))(Unit, 2180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v4->m_iBotDebugData.m_Value = v2;
    }
  }
}


// CDOTA_BotMode_Ward::OnEnd  (line 45, @0x0000000002827900, libserver.so)  // inlines: SetTarget, operator=
// calls: CDOTA_BotMode::DoScriptOnEnd
void __fastcall CDOTA_BotMode_Ward::OnEnd(CDOTA_BotMode_Ward *const this)
{
  if ( !CDOTA_BotMode::DoScriptOnEnd(this) )
    this->m_pBot->m_hTarget.m_Index = -1;
}


// CDOTA_BotMode_Ward::Think  (line 55, @0x000000000282b850, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, operator!=, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, CVProfile::ExitScope, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CDOTA_Bot_Pathing::FindNearbyValidLocation, CDOTA_Bot::SetMoveAction, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// strings: "CDOTA_BotMode_Ward::Think"
void __fastcall CDOTA_BotMode_Ward::Think(CDOTA_BotMode_Ward *const this)
{
  int m_enabled; // r10d
  bool v3; // r13
  float v4; // xmm1_4
  vec_t v5; // xmm1_4
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v7; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v10; // rax
  Vector vMoveLoc; // [rsp+0h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v7 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_Ward::Think" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "CDOTA_BotMode_Ward::Think", 0, "Bots", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v10 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v10->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v7 + __rdtsc();
  }
  if ( !CDOTA_BotMode::DoScriptThink(this)
    && !CDOTA_Bot::IsUsingAbility(this->m_pBot)
    && !CDOTA_Bot::IsUsingItem(this->m_pBot) )
  {
    *&vMoveLoc.x = CDOTA_Bot_Pathing::FindNearbyValidLocation(
                     &this->m_pBot->m_Pathing,
                     &this->m_vBestWardLocation,
                     500.0,
                     v4).m128i_u64[0];
    vMoveLoc.z = v5;
    if ( vec3_invalid.x == vMoveLoc.x && vec3_invalid.y == vMoveLoc.y && vec3_invalid.z == vMoveLoc.z )
      CDOTA_Bot::SetMoveAction(this->m_pBot, &this->m_vBestWardLocation, 0, 0);
    else
      CDOTA_Bot::SetMoveAction(this->m_pBot, &vMoveLoc, 0, 0);
  }
  if ( v3 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_BotMode_Ward::CalculateDesiredLocation  (line 78, @0x00000000028276e0, libserver.so)
Vector __fastcall CDOTA_BotMode_Ward::CalculateDesiredLocation(CDOTA_BotMode_Ward *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vBestWardLocation.x;
  result.z = this->m_vBestWardLocation.z;
  return result;
}


// CDOTA_BotMode_Ward::GetDesire  (line 85, @0x0000000002834ce0, libserver.so)  // inlines: Add, CEntityHandle, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, DOTAGameRules, EnterScope, FStrEq, FastSqrt, Get, GetElapsed, GetInstance, GetTeamNumber, GetTimebaseRegister, GetUnitName, GetWard, InTargetThread, IsEnabled, Length2D, PLAT_CPU_TIME, RemapValClamped, String, ToCStr, ToDOTABaseNPC, VectorSubtract, _V_strcmp, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator CBaseEntity*, operator-, operator=, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::GetScriptDesire, CVProfile::ExitScope, ThreadGetCurrentId, CDOTA_Bot::FindNearbyEnemiesInMode, CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::FindItemInInventory, CEntityHandle::operator CEntityInstance*, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CDOTA_BotMode_Ward::FindBestWardLocation, CBaseEntity::GetAbsOrigin (16 total)
// strings: "item_ward_observer", "npc_dota_observer_wards", "CDOTA_BotMode_Ward::GetDesire"
float __fastcall CDOTA_BotMode_Ward::GetDesire(CDOTA_BotMode_Ward *const this)
{
  int m_enabled; // esi
  bool v3; // r13
  float result; // xmm0_4
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v6; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CDOTA_Bot *m_pBot; // rdi
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_UnitInventory *Inventory; // rax
  CGameRules *v11; // rax
  __int64 v12; // r15
  CEntityInstance *v13; // rax
  CEntityInstance *v14; // r14
  const char *m_pAsString; // rsi
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  const Vector *AbsOrigin; // rax
  float v20; // xmm1_4
  float v21; // xmm0_4
  CDOTA_TeamCommander *TeamCommander; // rax
  float v23; // xmm1_4
  CDOTA_TeamCommander *v24; // rax
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  CDOTA_BaseNPC *v28; // rax
  CDOTA_UnitInventory *v29; // rax
  float v30; // xmm0_4
  float v31; // xmm1_4
  int nTeamWards; // [rsp+Ch] [rbp-54h]
  float NearbyEnemyOffensivePower; // [rsp+10h] [rbp-50h]
  char m_CScriptComponent_high; // [rsp+18h] [rbp-48h]
  float v35; // [rsp+18h] [rbp-48h]
  float fDistb; // [rsp+1Ch] [rbp-44h]
  int fDist; // [rsp+1Ch] [rbp-44h]
  float fDista; // [rsp+1Ch] [rbp-44h]
  Vector vWardLoc; // [rsp+20h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v6 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_Ward::GetDesire" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_Ward::GetDesire",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v17 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v17->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v6 + __rdtsc();
  }
  result = CDOTA_BotMode::GetScriptDesire(this);
  if ( result < 0.0 )
  {
    m_pBot = this->m_pBot;
    if ( m_pBot->m_iDifficulty != 0
      && CDOTA_Bot::FindNearbyEnemiesInMode(m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1500.0, 0, 0) <= 0 )
    {
      Unit = CDOTA_BotMode::GetUnit(this);
      Inventory = CDOTA_BaseNPC::GetInventory(Unit);
      if ( CDOTA_UnitInventory::FindItemInInventory(Inventory, "item_ward_observer", 1, 0, -1) != 0
        || (v28 = CDOTA_BotMode::GetUnit(this),
            v29 = CDOTA_BaseNPC::GetInventory(v28),
            CDOTA_UnitInventory::FindItemInInventory(v29, "item_ward_dispenser", 1, 0, -1) != 0) )
      {
        v11 = g_pGameRules;
        if ( *&g_pGameRules[55].m_szQuestName[104] <= 0 )
        {
          nTeamWards = 0;
        }
        else
        {
          v12 = 0;
          fDist = 0;
          nTeamWards = 0;
          do
          {
            vWardLoc.x = *(*&v11[55].m_szQuestName[112] + v12);
            v13 = CEntityHandle::operator CEntityInstance *(&vWardLoc);
            v14 = v13;
            if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
            {
              m_CScriptComponent_high = HIBYTE(v13[7].m_CScriptComponent);
              if ( m_CScriptComponent_high == CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value )
              {
                m_pAsString = v14[70].m_iszPrivateVScripts.u.m_pAsString;
                if ( m_pAsString != 0
                  && (m_pAsString == "npc_dota_observer_wards" || strcmp(m_pAsString, "npc_dota_observer_wards") == 0) )
                {
                  ++nTeamWards;
                }
              }
            }
            ++fDist;
            v12 += 4;
            v11 = g_pGameRules;
          }
          while ( fDist < *&g_pGameRules[55].m_szQuestName[104] );
        }
        vWardLoc = vec3_invalid;
        if ( CDOTA_BotMode_Ward::FindBestWardLocation(this, &vWardLoc) )
        {
          v18 = CDOTA_BotMode::GetUnit(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v18);
          v20 = 0.0;
          fDista = fsqrt(
                     ((vWardLoc.x - AbsOrigin->x) * (vWardLoc.x - AbsOrigin->x))
                   + ((vWardLoc.y - AbsOrigin->y) * (vWardLoc.y - AbsOrigin->y)));
          v21 = (fDista - 1000.0) / 2000.0;
          if ( v21 >= 0.0 )
            v20 = fminf(1.0, v21);
          v35 = (v20 * -2.0) + 4.0;
          TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
          NearbyEnemyOffensivePower = CDOTA_TeamCommander::GetNearbyEnemyOffensivePower(
                                        TeamCommander,
                                        &vWardLoc,
                                        2000.0,
                                        v23);
          v24 = CDOTA_BotMode::GetTeamCommander(this);
          if ( (CDOTA_TeamCommander::GetNearbyAlliedOffensivePower(v24, &vWardLoc, 2000.0, v25) * v35) >= NearbyEnemyOffensivePower )
          {
            this->m_vBestWardLocation = vWardLoc;
            if ( nTeamWards != 0 )
            {
              if ( nTeamWards != 1 )
                fDista = fDista * 1.5;
            }
            else
            {
              fDista = fDista * 0.5;
            }
            if ( fDista >= 2000.0 )
            {
              v30 = 0.0;
              v31 = (fDista - 2000.0) / 6000.0;
              if ( v31 >= 0.0 )
                v30 = fminf(1.0, v31);
              result = (v30 * -0.40000001) + 0.5;
            }
            else
            {
              v26 = 0.0;
              v27 = (fDista - 500.0) / 1500.0;
              if ( v27 >= 0.0 )
                v26 = fminf(1.0, v27);
              result = (v26 * -0.25) + 0.75;
            }
            goto LABEL_3;
          }
        }
      }
      this->m_vBestWardLocation = vec3_invalid;
    }
    result = 0.0;
  }
LABEL_3:
  if ( v3 )
  {
    fDistb = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return fDistb;
  }
  return result;
}


// CDOTA_BotMode_Ward::FindBestWardLocation  (line 155, @0x000000000282aca0, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, FastSqrt, Get, GetDistanceToEntity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLaneFrontAmount, GetRuneSpawner, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, IsValidIndex, Length, Length2DSqr, LookupEntity, Set, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator bool, operator-, operator->, operator=
// calls: CDOTA_BotMode::GetUnit, CDOTA_BotMode::GetTeamCommander, CEntityHandle::operator CEntityInstance*, DOTACommander, CDOTA_Commander::GetWardLocation, CDOTA_BotMode_Ward::IsWardGivingVisibilityTo, CBaseEntity::GetAbsOrigin
// callers: CDOTA_BotMode_Ward::GetDesire
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BotMode_Ward::FindBestWardLocation(CDOTA_BotMode_Ward *const this, Vector *pLocation)
{
  int v3; // ebx
  float v4; // xmm0_4
  unsigned __int8 m_Value; // r13
  CDOTA_TeamCommander *TeamCommander; // rax
  __int64 v7; // rdx
  CGameRules *v8; // rbx
  int v9; // r13d
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  bool v12; // r13
  const CEntityHandle *v14; // r15
  CEntityInstance *v15; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v17; // cx
  CEntityInstance *v18; // rax
  CEntityIdentity *v19; // rdx
  __int16 v20; // cx
  CDOTA_Commander *v21; // rax
  __int64 v22; // r14
  float v23; // xmm2_4
  int i; // r15d
  signed int v25; // ebx
  CDOTA_Commander *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  const Vector *v28; // rax
  float v29; // xmm0_4
  CDOTA_Commander *v30; // rax
  vec_t v31; // xmm0_4
  CEntityIdentity *v32; // rax
  CEntityIdentity *v33; // rax
  const CBaseEntity *v34; // rbx
  CDOTA_BaseNPC *Unit; // r13
  const Vector *AbsOrigin; // rbx
  const Vector *v37; // rax
  __m128i v38; // xmm0
  float v39; // r13d
  const CBaseEntity *v40; // rbx
  CDOTA_BaseNPC *v41; // r15
  const Vector *v42; // rbx
  const Vector *v43; // rax
  float v44; // xmm0_4
  int v45; // ebx
  int v46; // r13d
  CConcreteEntityList *v47; // rax
  CEntityIdentity *v48; // rcx
  CEntityIdentity *v49; // rcx
  CEntityIdentity *v50; // rax
  CEntityIdentity *v51; // rax
  const CBaseEntity *v52; // rax
  const Vector *v53; // rax
  CDOTA_Commander *v54; // rax
  DotaBotWardLocation_t v55; // esi
  vec_t y; // xmm0_4
  _BOOL4 v57; // ebx
  const CBaseEntity *v58; // rax
  const Vector *v59; // rax
  int iArraySize; // [rsp+8h] [rbp-A8h]
  float iArraySizea; // [rsp+8h] [rbp-A8h]
  float fClosestWardOptionSqrb; // [rsp+Ch] [rbp-A4h]
  float fClosestWardOptionSqr; // [rsp+Ch] [rbp-A4h]
  float fClosestWardOptionSqra; // [rsp+Ch] [rbp-A4h]
  EHANDLE hBottomSpawner; // [rsp+10h] [rbp-A0h] BYREF
  EHANDLE hTopSpawner; // [rsp+20h] [rbp-90h] BYREF
  Vector vWardOptionLoc; // [rsp+30h] [rbp-80h] BYREF
  EHANDLE hFarSpawner; // [rsp+40h] [rbp-70h] BYREF
  int v70; // [rsp+44h] [rbp-6Ch]
  int v71; // [rsp+48h] [rbp-68h]
  int v72; // [rsp+4Ch] [rbp-64h]
  int v73; // [rsp+50h] [rbp-60h]
  Vector vJungleWardLoc; // [rsp+60h] [rbp-50h] BYREF
  int v75; // [rsp+6Ch] [rbp-44h]
  int v76; // [rsp+70h] [rbp-40h]
  int v77; // [rsp+74h] [rbp-3Ch]
  Vector v78; // 0:kr20_12.12
  Vector WardLocation; // 0:kr34_12.12

  if ( pLocation != 0 )
  {
    v3 = 1;
    v4 = 0.0;
    do
    {
      fClosestWardOptionSqrb = v4;
      m_Value = CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value;
      TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
      v7 = v3++;
      v4 = fClosestWardOptionSqrb + TeamCommander->m_LaneFrontTowersAmounts[m_Value != 2][v7];
    }
    while ( v3 != 4 );
    fClosestWardOptionSqr = v4 / 3.0;
    v8 = g_pGameRules;
    v9 = *&g_pGameRules[53].m_szQuestName[88];
    if ( v9 > 1 )
    {
      v14 = *&g_pGameRules[53].m_szQuestName[96];
      v15 = CEntityHandle::operator CEntityInstance *(v14 + 1);
      hBottomSpawner.m_Index = -1;
      if ( v15 != 0 )
      {
        m_pEntity = v15->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v17 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          hBottomSpawner.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                 | v17 & 0x7FFF;
          v14 = *&v8[53].m_szQuestName[96];
        }
        goto LABEL_25;
      }
    }
    else
    {
      hBottomSpawner.m_Index = -1;
    }
    if ( v9 <= 0 )
    {
      hTopSpawner.m_Index = -1;
      goto LABEL_8;
    }
    v14 = *&v8[53].m_szQuestName[96];
LABEL_25:
    v18 = CEntityHandle::operator CEntityInstance *(v14);
    hTopSpawner.m_Index = -1;
    if ( v18 != 0 )
    {
      v19 = v18->m_pEntity;
      if ( v19 != 0 )
      {
        v20 = 0x7FFF;
        if ( v19->m_EHandle.m_Index != -1 )
          v20 = v19->m_EHandle.m_Index & 0x7FFF;
        hTopSpawner.m_Index = (((v19->m_EHandle.m_Index >> 15) - (v19->m_flags & 1)) << 15) | v20 & 0x7FFF;
      }
    }
LABEL_8:
    if ( hBottomSpawner.m_Index + 2 > 1 )
    {
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hBottomSpawner.m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[hBottomSpawner.m_Index & 0x1FF];
        if ( v11 != 0 && hBottomSpawner.m_Index == v11->m_EHandle.m_Index && hTopSpawner.m_Index + 2 > 1 )
        {
          v32 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hTopSpawner.m_Index) >> 9) & 0x3F];
          if ( v32 != 0 )
          {
            v33 = &v32[hTopSpawner.m_Index & 0x1FF];
            if ( v33 != 0 && hTopSpawner.m_Index == v33->m_EHandle.m_Index )
            {
              vWardOptionLoc.x = NAN;
              hFarSpawner.m_Index = -1;
              v34 = CEntityHandle::operator CEntityInstance *(&hBottomSpawner);
              Unit = CDOTA_BotMode::GetUnit(this);
              if ( v34 != 0 )
              {
                AbsOrigin = CBaseEntity::GetAbsOrigin(v34);
                v37 = CBaseEntity::GetAbsOrigin(Unit);
                iArraySizea = (((v37->x - AbsOrigin->x) * (v37->x - AbsOrigin->x))
                             + ((v37->y - AbsOrigin->y) * (v37->y - AbsOrigin->y)))
                            + ((v37->z - AbsOrigin->z) * (v37->z - AbsOrigin->z));
                v38 = LODWORD(iArraySizea);
                *v38.m128i_i32 = fsqrt(iArraySizea);
                v39 = COERCE_FLOAT(_mm_cvtsi128_si32(v38));
              }
              else
              {
                v39 = -1.0;
              }
              v40 = CEntityHandle::operator CEntityInstance *(&hTopSpawner);
              v41 = CDOTA_BotMode::GetUnit(this);
              if ( v40 != 0 )
              {
                v42 = CBaseEntity::GetAbsOrigin(v40);
                v43 = CBaseEntity::GetAbsOrigin(v41);
                v44 = fsqrt(
                        (((v43->x - v42->x) * (v43->x - v42->x)) + ((v43->y - v42->y) * (v43->y - v42->y)))
                      + ((v43->z - v42->z) * (v43->z - v42->z)));
              }
              else
              {
                v44 = -1.0;
              }
              if ( v39 <= v44 )
              {
                v46 = 1;
                LODWORD(vWardOptionLoc.x) = hBottomSpawner.m_Index;
                v57 = CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value != 2;
                hFarSpawner.m_Index = hTopSpawner.m_Index;
                v45 = 9 * v57;
                if ( CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value != 2 )
                  v46 = 8;
              }
              else
              {
                v45 = 1;
                LODWORD(vWardOptionLoc.x) = hTopSpawner.m_Index;
                if ( CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value != 2 )
                  v45 = 8;
                hFarSpawner.m_Index = hBottomSpawner.m_Index;
                v46 = 9 * (CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value != 2);
              }
              if ( fClosestWardOptionSqr > 0.30000001 )
              {
                v47 = CEntityHandle::gm_pEntityList;
                if ( (LODWORD(vWardOptionLoc.x) + 2) > 1 )
                {
                  v48 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(vWardOptionLoc.x) >> 9) & 0x3F];
                  if ( v48 != 0 )
                  {
                    v49 = &v48[LOWORD(vWardOptionLoc.x) & 0x1FF];
                    if ( v49 != 0 && LODWORD(vWardOptionLoc.x) == v49->m_EHandle.m_Index )
                    {
                      v58 = CEntityHandle::operator CEntityInstance *(&vWardOptionLoc);
                      v59 = CBaseEntity::GetAbsOrigin(v58);
                      if ( !CDOTA_BotMode_Ward::IsWardGivingVisibilityTo(this, v59) )
                      {
                        v54 = DOTACommander();
                        v55 = v45;
                        goto LABEL_77;
                      }
                      v47 = CEntityHandle::gm_pEntityList;
                    }
                  }
                }
                if ( hFarSpawner.m_Index + 2 > 1 )
                {
                  v50 = v47->m_pIdentityChunks[(LOWORD(hFarSpawner.m_Index) >> 9) & 0x3F];
                  if ( v50 != 0 )
                  {
                    v51 = &v50[hFarSpawner.m_Index & 0x1FF];
                    if ( v51 != 0 && hFarSpawner.m_Index == v51->m_EHandle.m_Index )
                    {
                      v52 = CEntityHandle::operator CEntityInstance *(&hFarSpawner);
                      v53 = CBaseEntity::GetAbsOrigin(v52);
                      if ( !CDOTA_BotMode_Ward::IsWardGivingVisibilityTo(this, v53) )
                      {
                        v54 = DOTACommander();
                        v55 = v46;
LABEL_77:
                        WardLocation = CDOTA_Commander::GetWardLocation(v54, v55);
                        *&vJungleWardLoc.x = *&WardLocation.x;
                        pLocation->x = WardLocation.x;
                        y = vJungleWardLoc.y;
                        pLocation->z = WardLocation.z;
                        pLocation->y = y;
                        return 1;
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
    if ( fClosestWardOptionSqr > 0.30000001 && CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value == 2 )
    {
      v21 = DOTACommander();
      vJungleWardLoc = CDOTA_Commander::GetWardLocation(v21, DotaBotWardLocation_t::BOT_WARD_RADIANT_JUNGLE_BELOW_MID);
      if ( !CDOTA_BotMode_Ward::IsWardGivingVisibilityTo(this, &vJungleWardLoc) )
      {
        *pLocation = vJungleWardLoc;
        return 1;
      }
    }
    LODWORD(vJungleWardLoc.x) = 2;
    LODWORD(vJungleWardLoc.y) = 3;
    LODWORD(vJungleWardLoc.z) = 4;
    v75 = 5;
    v76 = 6;
    v77 = 7;
    hFarSpawner.m_Index = 10;
    v70 = 11;
    v71 = 12;
    v72 = 13;
    v73 = 14;
    if ( fClosestWardOptionSqr > 0.69999999 && CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value == 2 )
    {
      v12 = 1;
    }
    else
    {
      v12 = 0;
      if ( fClosestWardOptionSqr < 0.30000001 )
        v12 = CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value == 3;
      if ( fClosestWardOptionSqr <= 0.69999999 )
      {
        if ( fClosestWardOptionSqr >= 0.30000001 )
          goto LABEL_18;
        goto LABEL_37;
      }
    }
    if ( CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value == 3 )
      goto LABEL_38;
    if ( fClosestWardOptionSqr >= 0.30000001 )
    {
LABEL_18:
      if ( !v12 )
        goto LABEL_19;
      goto LABEL_52;
    }
LABEL_37:
    if ( CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value == 2 )
    {
LABEL_38:
      if ( !v12 )
      {
        iArraySize = 6;
LABEL_40:
        v22 = 0;
        v23 = 0.0;
        for ( i = -1; ; i = v25 )
        {
          v25 = v12 ? *(&hFarSpawner.m_Index + v22) : *(&vJungleWardLoc.x + v22);
          fClosestWardOptionSqra = v23;
          v26 = DOTACommander();
          vWardOptionLoc = CDOTA_Commander::GetWardLocation(v26, v25);
          v27 = CDOTA_BotMode::GetUnit(this);
          v28 = CBaseEntity::GetAbsOrigin(v27);
          v29 = ((vWardOptionLoc.x - v28->x) * (vWardOptionLoc.x - v28->x))
              + ((vWardOptionLoc.y - v28->y) * (vWardOptionLoc.y - v28->y));
          if ( i != -1 && fClosestWardOptionSqra <= v29 )
          {
            v29 = fClosestWardOptionSqra;
            v25 = i;
          }
          if ( iArraySize <= ++v22 )
            break;
          v23 = v29;
        }
        if ( v25 != -1 )
        {
          v30 = DOTACommander();
          v78 = CDOTA_Commander::GetWardLocation(v30, v25);
          *&vWardOptionLoc.x = *&v78.x;
          pLocation->x = v78.x;
          v31 = vWardOptionLoc.y;
          pLocation->z = v78.z;
          pLocation->y = v31;
          return 1;
        }
LABEL_19:
        *pLocation = vec3_invalid;
        return 0;
      }
LABEL_52:
      iArraySize = 5;
      v12 = 1;
      goto LABEL_40;
    }
    goto LABEL_18;
  }
  return 0;
}


// CDOTA_BotMode_Ward::IsWardGivingVisibilityTo  (line 268, @0x000000000282ab00, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnitName, GetWard, IndexToIdentity, Length2DSqr, LookupEntity, String, ToCStr, ToDOTABaseNPC, VectorSubtract, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTA_BotMode::GetUnit, CDOTAFogOfWarSystem::IsLocationVisible, CBaseEntity::GetAbsOrigin
// callers: CDOTA_BotMode_Ward::FindBestWardLocation
// strings: "npc_dota_observer_wards"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BotMode_Ward::IsWardGivingVisibilityTo(
        CDOTA_BotMode_Ward *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Unit; // rax
  CGameRules *v4; // rax
  __int64 v5; // r15
  int v6; // r13d
  int v7; // eax
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  const CBaseEntity *m_pInstance; // rbx
  bool m_bIsDOTANPC; // r14
  const char *delta; // rsi
  const Vector *AbsOrigin; // rax
  unsigned __int8 m_Value; // [rsp+1Ch] [rbp-44h]

  Unit = CDOTA_BotMode::GetUnit(this);
  if ( !CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, Unit->m_iTeamNum.m_Value, vLocation, 0.0) )
    return 0;
  v4 = g_pGameRules;
  if ( *&g_pGameRules[55].m_szQuestName[104] <= 0 )
    return 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(*&v4[55].m_szQuestName[112] + v5);
    if ( (v7 + 2) > 1 )
    {
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v7 >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[v7 & 0x1FF];
        if ( v9 != 0 && v7 == v9->m_EHandle.m_Index )
        {
          m_pInstance = v9->m_pInstance;
          if ( v9->m_pInstance != 0 )
          {
            m_bIsDOTANPC = m_pInstance->m_bIsDOTANPC;
            if ( m_bIsDOTANPC )
            {
              m_Value = m_pInstance->m_iTeamNum.m_Value;
              if ( m_Value == CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value )
              {
                delta = m_pInstance[4].m_pfnUse.__delta;
                if ( delta != 0 && (delta == "npc_dota_observer_wards" || strcmp(delta, "npc_dota_observer_wards") == 0) )
                {
                  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
                  if ( (((AbsOrigin->x - vLocation->x) * (AbsOrigin->x - vLocation->x))
                      + ((AbsOrigin->y - vLocation->y) * (AbsOrigin->y - vLocation->y))) < 2560000.0 )
                    break;
                }
              }
            }
          }
        }
      }
    }
    v4 = g_pGameRules;
    ++v6;
    v5 += 4;
    if ( v6 >= *&g_pGameRules[55].m_szQuestName[104] )
      return 0;
  }
  return m_bIsDOTANPC;
}


// CDOTA_BotMode_Ward::GetDebugColor  (line 298, @0x0000000002827700, libserver.so)
color24 __fastcall CDOTA_BotMode_Ward::GetDebugColor(CDOTA_BotMode_Ward *const this)
{
  return 10303645;
}


