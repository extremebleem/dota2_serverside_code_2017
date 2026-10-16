
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Retreat::CDOTA_BotMode_Retreat  (line 25, @0x000000000281dd00, libserver.so)
// calls: CDOTA_BotMode::CDOTA_BotMode
// callers: CDOTA_Bot::CreateMode
void __fastcall CDOTA_BotMode_Retreat::CDOTA_BotMode_Retreat(CDOTA_BotMode_Retreat *const this, CDOTA_Bot *pBot)
{
  CDOTA_BotMode::CDOTA_BotMode(this, pBot);
  this->_vptr_CDOTA_BotMode = off_42B84D0;  // vptr: CDOTA_BotMode_Retreat
}


// CDOTA_BotMode_Retreat::OnStart  (line 32, @0x0000000002817910, libserver.so)  // inlines: GetGameTime, NetworkStateChanged, Set, SetBotDebugData, operator=<int>
// calls: CDOTA_BotMode::DoScriptOnStart, CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::IsInRangeOfFountain, CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::ChatMessageRequest
// strings: "DOTA_Chat_Bot_GankRetreat"
void __fastcall CDOTA_BotMode_Retreat::OnStart(CDOTA_BotMode_Retreat *const this)
{
  int v2; // r13d
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC *v4; // r12
  CGameRules *v5; // rdx
  __int64 i; // rax
  float v7; // xmm0_4
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTAPlayer *v10; // r12
  CDOTA_TeamCommander *TeamCommander; // rax

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
    if ( this->m_pBot->m_iPreviousBotModeType == 2 )
    {
      v8 = CDOTA_BotMode::GetUnit(this);
      if ( !CDOTA_BaseNPC::IsInRangeOfFountain(v8) )
      {
        v9 = CDOTA_BotMode::GetUnit(this);
        v10 = (*(v9->_vptr_IHandleEntity + 413))(v9);
        TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
        CDOTA_TeamCommander::ChatMessageRequest(TeamCommander, v10, "DOTA_Chat_Bot_GankRetreat", "", 1, 0);
      }
    }
    v5 = g_pGameRules;
    for ( i = 0; i != 24; ++i )
    {
      if ( v5 != 0 )
        v7 = *&v5[18].m_szQuestName[20];
      else
        v7 = 0.0;
      this->m_fLastHitTime[i] = v7;
    }
  }
}


// CDOTA_BotMode_Retreat::OnEnd  (line 52, @0x0000000002816440, libserver.so)
// calls: CDOTA_BotMode::DoScriptOnEnd
void __fastcall CDOTA_BotMode_Retreat::OnEnd(CDOTA_BotMode_Retreat *const this)
{
  CDOTA_BotMode::DoScriptOnEnd(this);
}


// CDOTA_BotMode_Retreat::OnTakeDamage  (line 61, @0x0000000002819e40, libserver.so)  // inlines: DOTAGameRules, Get, GetAttacker, GetBotByIndex, GetGameTime, GetInstance, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BotMode::GetOpposingTeamCommander
void __fastcall CDOTA_BotMode_Retreat::OnTakeDamage(
        CDOTA_BotMode_Retreat *const this,
        const CTakeDamageInfo *const info)
{
  CEntityInstance *v3; // rax
  CEntityInstance *v4; // r13
  __int64 v5; // rbx
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_Bot *v7; // rdx
  float v8; // xmm0_4

  v3 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
  v4 = v3;
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
  {
    v5 = 0;
    if ( (v3[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    {
      do
      {
        while ( 1 )
        {
          OpposingTeamCommander = CDOTA_BotMode::GetOpposingTeamCommander(this);
          if ( OpposingTeamCommander->m_BotList.m_Size > v5 )
          {
            v7 = OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v5];
            if ( v7 != 0 && *&v4[45].m_worldGroupId.m_nHashCode == v7 )
              break;
          }
          if ( ++v5 == 24 )
            return;
        }
        v8 = 0.0;
        if ( g_pGameRules != 0 )
          v8 = *&g_pGameRules[18].m_szQuestName[20];
        this->m_fLastHitTime[v5++] = v8;
      }
      while ( v5 != 24 );
    }
  }
}


// CDOTA_BotMode_Retreat::TimeSinceLastHitBy  (line 79, @0x000000000281dd30, libserver.so)  // inlines: DOTAGameRules, GetBotByIndex, GetGameTime
// calls: CDOTA_BotMode::GetOpposingTeamCommander
// callers: CDOTA_BotMode_Attack::GetAttackScore
float __fastcall CDOTA_BotMode_Retreat::TimeSinceLastHitBy(CDOTA_BotMode_Retreat *const this, CDOTA_Bot *pBot)
{
  __int64 v4; // rbx
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_Bot *v6; // rax
  float v7; // xmm0_4

  v4 = 0;
  while ( 1 )
  {
    OpposingTeamCommander = CDOTA_BotMode::GetOpposingTeamCommander(this);
    if ( OpposingTeamCommander->m_BotList.m_Size > v4 )
    {
      v6 = OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v4];
      if ( pBot == v6 && v6 != 0 )
        break;
    }
    if ( ++v4 == 24 )
      return 0.0;
  }
  v7 = 0.0;
  if ( g_pGameRules != 0 )
    v7 = *&g_pGameRules[18].m_szQuestName[20];
  return v7 - this->m_fLastHitTime[v4];
}


// CDOTA_BotMode_Retreat::Think  (line 95, @0x00000000028194c0, libserver.so)  // inlines: CEntityHandle, CHandle, CVProfScope, FStrEq, GetAbilityName, GetBotByIndex, GetEHandle, GetEntryIndex, GetSerialNumber, IsEnabled, Set, SetDoNotPurchase, SetLiquidate, ToDOTABaseNPCHero, _V_strcmp, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, CVProfile::ExitScope, CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::GetFountain, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CDOTA_BaseNPC::IsInRangeOfFountain, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::GetBaseLocation, operator new (23 total)
// strings: "item_gem", "CDOTA_BotMode_Retreat::Think"
void __fastcall CDOTA_BotMode_Retreat::Think(CDOTA_BotMode_Retreat *const this)
{
  int m_enabled; // eax
  bool v3; // r13
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC *v5; // rax
  int v6; // r15d
  CDOTA_BaseNPC *v7; // rax
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v10; // r14
  const char **p_m_pszAbilityName; // rax
  const char *v12; // rsi
  CDOTA_Bot *v13; // r14
  CEntityIdentity *v14; // rdx
  __int16 v15; // cx
  CDOTA_TeamCommander *v16; // rax
  CDOTA_BotAction_DropItem *v17; // r15
  __int64 v18; // r14
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v20; // rax
  CDOTA_Bot *v21; // rdi
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC_Hero *v23; // r15
  int i; // r14d
  CDOTA_UnitInventory *v25; // rax
  CDOTA_Item *v26; // rax
  double v27; // xmm0_8
  CDOTA_Bot *v28; // rdi
  vec_t v29; // xmm1_4
  CEntityIdentity *v30; // rdx
  __int16 v31; // cx
  CDOTA_Bot *m_pBot; // r15
  CEntityIdentity *m_pEntity; // rdx
  __int16 v34; // cx
  CDOTA_TeamCommander *TeamCommander; // rax
  CDOTA_BotAction_DropItem *v36; // r14
  CEntityIdentity *v37; // rax
  __int16 v38; // cx
  int nGemCount; // [rsp+0h] [rbp-60h]
  CDOTA_Item *pFirstGem; // [rsp+8h] [rbp-58h]
  EHANDLE hTarget; // [rsp+10h] [rbp-50h] BYREF
  Vector vLocation; // [rsp+20h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_BotMode_Retreat::Think", 0, "Bots", 0, 4);
  if ( !CDOTA_BotMode::DoScriptThink(this) )
  {
    Unit = CDOTA_BotMode::GetUnit(this);
    if ( CDOTA_BaseNPC::GetFountain(Unit) != 0
      && !CDOTA_Bot::IsUsingAbility(this->m_pBot)
      && !CDOTA_Bot::IsUsingItem(this->m_pBot) )
    {
      v5 = CDOTA_BotMode::GetUnit(this);
      if ( CDOTA_BaseNPC::IsInRangeOfFountain(v5) )
      {
        v6 = 0;
        pFirstGem = 0;
        nGemCount = 0;
        do
        {
          v7 = CDOTA_BotMode::GetUnit(this);
          Inventory = CDOTA_BaseNPC::GetInventory(v7);
          ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v6);
          v10 = ItemInSlot;
          if ( ItemInSlot != 0 )
          {
            if ( (*(ItemInSlot->_vptr_IHandleEntity + 348))(ItemInSlot) != 0 )
            {
              hTarget.m_Index = -1;
              m_pBot = this->m_pBot;
              m_pEntity = v10->m_pEntity;
              if ( m_pEntity != 0 )
              {
                v34 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v34 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                | v34 & 0x7FFF;
              }
              TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
              vLocation = CDOTA_TeamCommander::GetBaseLocation(TeamCommander);
              v36 = operator new(0x28u);
              CDOTA_BotAction_DropItem::CDOTA_BotAction_DropItem(v36, m_pBot, &hTarget, &vLocation);
              CDOTA_Bot::SetAction(this->m_pBot, v36);
              goto LABEL_4;
            }
            p_m_pszAbilityName = &v10->m_pAbilityData->m_pszAbilityName;
            if ( p_m_pszAbilityName != 0 )
            {
              v12 = *p_m_pszAbilityName;
              if ( *p_m_pszAbilityName != 0 && (v12 == "item_gem" || strcmp(v12, "item_gem") == 0) )
              {
                if ( pFirstGem != 0 )
                  v10 = pFirstGem;
                ++nGemCount;
                pFirstGem = v10;
              }
            }
          }
          ++v6;
        }
        while ( v6 != 9 );
        if ( nGemCount > 1 )
        {
          hTarget.m_Index = -1;
          v13 = this->m_pBot;
          if ( pFirstGem != 0 )
          {
            v14 = pFirstGem->m_pEntity;
            if ( v14 != 0 )
            {
              v15 = 0x7FFF;
              if ( v14->m_EHandle.m_Index != -1 )
                v15 = v14->m_EHandle.m_Index & 0x7FFF;
              hTarget.m_Index = (((v14->m_EHandle.m_Index >> 15) - (v14->m_flags & 1)) << 15) | v15 & 0x7FFF;
            }
          }
LABEL_28:
          v16 = CDOTA_BotMode::GetTeamCommander(this);
          vLocation = CDOTA_TeamCommander::GetBaseLocation(v16);
          v17 = operator new(0x28u);
          CDOTA_BotAction_DropItem::CDOTA_BotAction_DropItem(v17, v13, &hTarget, &vLocation);
          CDOTA_Bot::SetAction(this->m_pBot, v17);
          goto LABEL_4;
        }
        if ( pFirstGem != 0 )
        {
          v18 = 0;
          if ( CDOTA_Bot::GetTankRating(this->m_pBot) >= 0.5 )
          {
            while ( v18 < CDOTA_BotMode::GetOpposingTeamCommander(this)->m_BotList.m_Size )
            {
              OpposingTeamCommander = CDOTA_BotMode::GetOpposingTeamCommander(this);
              if ( v18 < OpposingTeamCommander->m_BotList.m_Size
                && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v18] != 0 )
              {
                v20 = CDOTA_BotMode::GetOpposingTeamCommander(this);
                if ( v18 < v20->m_BotList.m_Size )
                {
                  v21 = v20->m_BotList.m_Memory.m_pMemory[v18];
                  if ( v21 != 0 && CDOTA_Bot::HasInvisibility(v21, 0) )
                    goto LABEL_36;
                }
              }
              ++v18;
            }
            hTarget.m_Index = -1;
            v13 = this->m_pBot;
            v37 = pFirstGem->m_pEntity;
            if ( v37 != 0 )
            {
              v38 = 0x7FFF;
              if ( v37->m_EHandle.m_Index != -1 )
                v38 = v37->m_EHandle.m_Index & 0x7FFF;
              hTarget.m_Index = (((v37->m_EHandle.m_Index >> 15) - (v37->m_flags & 1)) << 15) | v38 & 0x7FFF;
            }
          }
          else
          {
            hTarget.m_Index = -1;
            v13 = this->m_pBot;
            v30 = pFirstGem->m_pEntity;
            if ( v30 != 0 )
            {
              v31 = 0x7FFF;
              if ( v30->m_EHandle.m_Index != -1 )
                v31 = v30->m_EHandle.m_Index & 0x7FFF;
              hTarget.m_Index = (((v30->m_EHandle.m_Index >> 15) - (v30->m_flags & 1)) << 15) | v31 & 0x7FFF;
            }
          }
          goto LABEL_28;
        }
LABEL_36:
        if ( this->m_pBot->m_bLiquidate )
        {
          v22 = CDOTA_BotMode::GetUnit(this);
          v23 = v22;
          if ( v22 != 0 && (v22->m_iUnitType & 1) != 0 )
          {
            for ( i = 0; i != 17; ++i )
            {
              v25 = CDOTA_BaseNPC::GetInventory(v23);
              v26 = CDOTA_UnitInventory::GetItemInSlot(v25, i);
              if ( v26 != 0 )
                CDOTA_BaseNPC::SellItem(v23, v26);
            }
            if ( v23->m_iCurrentLevel.m_Value > 3 )
              CDOTA_BaseNPC_Hero::ClearConsumablesFromLoadout(v23);
            this->m_pBot->m_bLiquidate = 0;
            this->m_pBot->m_bDoNotPurchase = 0;
          }
        }
      }
      v27 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
      v28 = this->m_pBot;
      *&vLocation.x = v27;
      vLocation.z = v29;
      CDOTA_Bot::SetMoveAction(v28, &vLocation, 0, 0);
    }
  }
LABEL_4:
  if ( v3 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_BotMode_Retreat::CalculateDesiredLocation  (line 209, @0x00000000028200e0, libserver.so)  // inlines: FastSqrt, GetActiveModeDesire, GetHealthPercent, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CDOTA_Bot::GetIncomingCourier, CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::IsInRangeOfFountain, CBaseEntity::GetAbsOrigin, CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::GetBaseLocation, CBaseEntity::GetHealth, CDOTA_BotMode_Retreat::FindNearbyHealingAura
Vector __fastcall CDOTA_BotMode_Retreat::CalculateDesiredLocation(CDOTA_BotMode_Retreat *const this)
{
  CDOTA_Bot *m_pBot; // r12
  int m_nAttackingCreeps; // r13d
  CDOTA_Unit_Courier *IncomingCourier; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *v6; // r13
  CDOTA_BaseNPC *v7; // rax
  const Vector *v8; // rax
  float v9; // xmm1_4
  CDOTA_BaseNPC *v10; // rax
  vec_t v11; // xmm1_4
  CDOTA_TeamCommander *TeamCommander; // rax
  CDOTA_BaseNPC *Unit; // r12
  __int64 v16; // r13
  int v17; // eax
  __int64 v18; // rcx
  const Vector *AbsOrigin; // rax
  __int64 v20; // rdx
  float fSize; // [rsp+2Ch] [rbp-44h] BYREF
  Vector vLoc; // [rsp+30h] [rbp-40h] BYREF
  Vector BaseLocation; // [rsp+40h] [rbp-30h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_pBot = this->m_pBot;
  m_nAttackingCreeps = m_pBot->m_nAttackingCreeps;
  if ( m_pBot->m_fModeDesires[(*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode)] > 0.5
    || m_nAttackingCreeps > 0 )
  {
    goto LABEL_3;
  }
  Unit = CDOTA_BotMode::GetUnit(this);
  v16 = 100LL * CBaseEntity::GetHealth(Unit);
  v17 = (*(Unit->_vptr_IHandleEntity + 156))(Unit);
  v18 = 1;
  if ( v17 > 0 )
    v18 = v17;
  if ( (v16 / v18) <= 49 && CDOTA_BotMode_Retreat::FindNearbyHealingAura(this, 0x447A0000u, &vLoc, &fSize) != 0 )
  {
    BaseLocation = vLoc;
  }
  else
  {
LABEL_3:
    IncomingCourier = CDOTA_Bot::GetIncomingCourier(this->m_pBot);
    if ( IncomingCourier != 0
      && (v5 = CDOTA_BotMode::GetUnit(this), !CDOTA_BaseNPC::IsInRangeOfFountain(v5))
      && (v6 = CBaseEntity::GetAbsOrigin(IncomingCourier),
          v7 = CDOTA_BotMode::GetUnit(this),
          v8 = CBaseEntity::GetAbsOrigin(v7),
          v9 = v8->y - v6->y,
          fsqrt(((v8->x - v6->x) * (v8->x - v6->x)) + (v9 * v9)) < 2000.0) )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(IncomingCourier);
      v20 = *&AbsOrigin->x;
      *&AbsOrigin = AbsOrigin->z;
      *&BaseLocation.x = v20;
      LODWORD(BaseLocation.z) = AbsOrigin;
    }
    else
    {
      v10 = CDOTA_BotMode::GetUnit(this);
      if ( CDOTA_BaseNPC::IsInRangeOfFountain(v10) )
      {
        *&BaseLocation.x = (*(this->_vptr_CDOTA_BotMode + 11))(this);
        BaseLocation.z = v11;
      }
      else
      {
        TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
        BaseLocation = CDOTA_TeamCommander::GetBaseLocation(TeamCommander);
      }
    }
  }
  *&result.x = *&BaseLocation.x;
  result.z = BaseLocation.z;
  return result;
}


// CDOTA_BotMode_Retreat::GetDesire  (line 248, @0x0000000002825080, libserver.so)  // inlines: Add, CEntityHandle, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, DOTAGameRules, EnterScope, FastSqrt, Get, GetEHandle, GetElapsed, GetEntryIndex, GetGameTime, GetInstance, GetManaPercent, GetSerialNumber, GetTimeSinceLastSeen, GetTimebaseRegister, HasBeenSeenIn, HasElement, InTargetThread, IsBotDisabled, IsEnabled, Length2D, Max<float>, Max<int>, PLAT_CPU_TIME, RemapValClamped, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator[], ~CMicroProfilerGuard, ~CUtlVector, ~CUtlVectorFixedGrowableCompat, ~CVProfScope
// calls: CDOTA_BotMode::GetScriptDesire, CVProfile::ExitScope, ThreadGetCurrentId, CDOTA_BotMode::GetUnit, CDOTA_BotMode::GetTeamCommander, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CDOTA_BaseNPC::IsInRangeOfFountain, CDOTA_BaseNPC::GetHealthPercent, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::NumItemsInStash (33 total)
// strings: "CDOTA_BotMode_Retreat::GetDesire"
// globals: CSWTCH.13264
float __fastcall CDOTA_BotMode_Retreat::GetDesire(CDOTA_BotMode_Retreat *const this)
{
  bool v2; // r13
  float result; // xmm0_4
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v5; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CDOTA_BaseNPC *Unit; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v9; // cx
  CDOTA_TeamCommander *TeamCommander; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  bool v16; // r14
  CDOTA_BaseNPC *v17; // rax
  CDOTA_UnitInventory *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CDOTA_UnitInventory *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  float v22; // xmm1_4
  int m_Size; // r14d
  __m128i v24; // xmm7
  float v25; // r14d
  CDOTA_BaseNPC *v26; // rax
  __int64 v27; // r15
  CEntityInstance *v28; // rax
  CEntityInstance *v29; // r14
  float v30; // xmm0_4
  CDOTA_Bot *v31; // rdi
  CDOTA_Bot *m_pBot; // rdi
  __int64 m_iDifficulty; // rax
  __int64 v34; // r15
  CEntityInstance *v35; // rax
  CEntityInstance *v36; // r14
  int v37; // r15d
  float v38; // xmm5_4
  __m128 v39; // xmm1
  __m128i v40; // xmm0
  unsigned int v41; // r14d
  bool IsAboutToDie; // al
  float v43; // xmm0_4
  __m128i v44; // xmm4
  unsigned int v45; // r14d
  bool IsDangerouslyLow; // al
  float v47; // xmm5_4
  float v48; // xmm1_4
  __m128i v49; // xmm7
  unsigned int v50; // r14d
  float v51; // xmm0_4
  __m128i v52; // xmm3
  float v53; // r14d
  int StashValue; // eax
  float v55; // xmm5_4
  CDOTA_BaseNPC *v56; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_TeamCommander *v58; // rax
  __m128i v59; // xmm0
  float v60; // r15d
  CDOTA_BaseNPC *v61; // rax
  int HealthPercent; // r14d
  CDOTA_BaseNPC *v63; // rax
  int v64; // eax
  float v65; // xmm5_4
  float v66; // xmm5_4
  CDOTA_BaseNPC *v67; // rax
  int v68; // eax
  float v69; // xmm5_4
  CDOTA_BaseNPC *v70; // rax
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Unit_Courier *IncomingCourier; // rax
  const Vector *v73; // r14
  CDOTA_BaseNPC *v74; // rax
  const Vector *v75; // rax
  float v76; // xmm1_4
  float v77; // xmm5_4
  float v78; // xmm0_4
  int NearbyTeammatesInMode; // eax
  CDOTA_BaseNPC *v80; // rax
  __m128 v81; // xmm0
  __m128 v82; // rt1
  float fGankDamageRatio; // [rsp+Ch] [rbp-1A4h]
  float fRetreatDueToGankFactor; // [rsp+20h] [rbp-190h]
  int iNearbyEnemyOffensivePower; // [rsp+24h] [rbp-18Ch]
  int fProxDesire; // [rsp+28h] [rbp-188h]
  float fProxDesireb; // [rsp+28h] [rbp-188h]
  float fProxDesirec; // [rsp+28h] [rbp-188h]
  float fProxDesirea; // [rsp+28h] [rbp-188h]
  float ie; // [rsp+2Ch] [rbp-184h]
  int i; // [rsp+2Ch] [rbp-184h]
  int ia; // [rsp+2Ch] [rbp-184h]
  float ib; // [rsp+2Ch] [rbp-184h]
  int ic; // [rsp+2Ch] [rbp-184h]
  float id; // [rsp+2Ch] [rbp-184h]
  float ig; // [rsp+2Ch] [rbp-184h]
  Vector src; // [rsp+30h] [rbp-180h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hNearbyAlliedHeroes; // [rsp+40h] [rbp-170h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hNearbyEnemyHeroes; // [rsp+E0h] [rbp-D0h] BYREF
  unsigned __int64 v100; // [rsp+178h] [rbp-38h]

  v100 = __readfsqword(0x28u);
  v2 = g_VProfCurrentProfile.m_enabled != 0;
  if ( g_VProfCurrentProfile.m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v5 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_Retreat::GetDesire" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_Retreat::GetDesire",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v12 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v12->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v5 + __rdtsc();
  }
  result = CDOTA_BotMode::GetScriptDesire(this);
  if ( result < 0.0 )
  {
    Unit = CDOTA_BotMode::GetUnit(this);
    src.x = NAN;
    if ( Unit != 0 )
    {
      m_pEntity = Unit->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v9 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LODWORD(src.x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
      }
    }
    TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
           &TeamCommander->m_hDisabledBots,
           &src) < 0 )
    {
      v13 = CDOTA_BotMode::GetUnit(this);
      if ( !CDOTA_BaseNPC::IsInRangeOfFountain(v13)
        || ((v14 = CDOTA_BotMode::GetUnit(this), CDOTA_BaseNPC::GetHealthPercent(v14) <= 89)
          ? (v16 = 1)
          : (v15 = CDOTA_BotMode::GetUnit(this), v16 = ((100.0 * v15->m_flMana.m_Value) / v15->m_flMaxMana.m_Value) <= 89),
            ((v17 = CDOTA_BotMode::GetUnit(this),
              v18 = CDOTA_BaseNPC::GetInventory(v17),
              CDOTA_UnitInventory::NumItemsInStash(v18) <= 0)
          || (v19 = CDOTA_BotMode::GetUnit(this),
              v20 = CDOTA_BaseNPC::GetInventory(v19),
              CDOTA_UnitInventory::NumItemsInInventory(v20) > 5))
         && !v16) )
      {
        v21 = CDOTA_BotMode::GetUnit(this);
        if ( v21 != 0 && (v21->m_iUnitType & 1) != 0 && CDOTA_BaseNPC_Hero::WillReincarnate(v21) )
        {
          NearbyTeammatesInMode = CDOTA_Bot::FindNearbyTeammatesInMode(
                                    this->m_pBot,
                                    DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK,
                                    1200.0,
                                    0,
                                    0);
          result = 0.0;
          if ( NearbyTeammatesInMode > 1 )
            goto LABEL_3;
        }
        CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul>::CUtlVectorFixedGrowableCompat(&hNearbyAlliedHeroes, 0);
        CDOTA_Bot::GetNearbyHeroes(
          this->m_pBot,
          DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY,
          &hNearbyAlliedHeroes,
          0.0);
        m_Size = 1;
        if ( hNearbyAlliedHeroes.m_Size > 0 )
          m_Size = hNearbyAlliedHeroes.m_Size;
        *v24.m128i_i32 = (CDOTA_Bot::GetGankingEstimatedDamage(this->m_pBot, 5.0, v22) / m_Size);
        v25 = COERCE_FLOAT(_mm_cvtsi128_si32(v24));
        v26 = CDOTA_BotMode::GetUnit(this);
        fGankDamageRatio = v25 / CBaseEntity::GetHealth(v26);
        CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul>::CUtlVectorFixedGrowableCompat(&hNearbyEnemyHeroes, 0);
        CDOTA_Bot::GetNearbyHeroes(
          this->m_pBot,
          DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
          &hNearbyEnemyHeroes,
          0.0);
        if ( hNearbyEnemyHeroes.m_Size <= 0 )
        {
          iNearbyEnemyOffensivePower = 0;
        }
        else
        {
          i = 0;
          v27 = 0;
          iNearbyEnemyOffensivePower = 0;
          do
          {
            v28 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemyHeroes.m_Memory.m_pMemory[v27]);
            v29 = v28;
            if ( v28 != 0
              && BYTE3(v28[7]._vptr_IHandleEntity) != 0
              && (v28[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && *&v28[45].m_worldGroupId.m_nHashCode != 0
              && (*(v28->_vptr_IHandleEntity + 408))(v28) != 0 )
            {
              v30 = 0.0;
              v31 = *&v29[45].m_worldGroupId.m_nHashCode;
              if ( g_pGameRules != 0 )
                v30 = *&g_pGameRules[18].m_szQuestName[20];
              if ( (v30 - v31->m_fLastSeen) < 3.0 )
                iNearbyEnemyOffensivePower = (CDOTA_Bot::GetOffensivePower(v31) + iNearbyEnemyOffensivePower);
            }
            ++i;
            ++v27;
          }
          while ( hNearbyEnemyHeroes.m_Size > i );
        }
        m_pBot = this->m_pBot;
        fRetreatDueToGankFactor = 0.0;
        m_iDifficulty = m_pBot->m_iDifficulty;
        if ( m_iDifficulty <= 4 )
          fRetreatDueToGankFactor = CSWTCH_13264[m_iDifficulty];
        if ( hNearbyAlliedHeroes.m_Size <= 0 )
        {
          fProxDesire = 0;
        }
        else
        {
          ia = 0;
          v34 = 0;
          fProxDesire = 0;
          do
          {
            v35 = CEntityHandle::operator CEntityInstance *(&hNearbyAlliedHeroes.m_Memory.m_pMemory[v34]);
            v36 = v35;
            if ( v35 != 0
              && BYTE3(v35[7]._vptr_IHandleEntity) != 0
              && (v35[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && *&v35[45].m_worldGroupId.m_nHashCode != 0
              && (*(v35->_vptr_IHandleEntity + 408))(v35) != 0 )
            {
              fProxDesire = (CDOTA_Bot::GetOffensivePower(*&v36[45].m_worldGroupId.m_nHashCode) + fProxDesire);
            }
            ++ia;
            ++v34;
          }
          while ( hNearbyAlliedHeroes.m_Size > ia );
          m_pBot = this->m_pBot;
        }
        v37 = iNearbyEnemyOffensivePower - ((*(m_pBot->_vptr_CDOTA_Bot + 5))(m_pBot) * fProxDesire);
        if ( fRetreatDueToGankFactor == 0.0 )
        {
          v39.m128_f32[0] = fGankDamageRatio - fRetreatDueToGankFactor;
          v40 = _mm_and_ps(0x3F800000u, _mm_cmple_ss(0LL, v39));
        }
        else
        {
          v41 = 0;
          *v40.m128i_i32 = RemapValClamped(fGankDamageRatio, 0.0, fRetreatDueToGankFactor, 0.0, 1.0, v38);
          if ( *v40.m128i_i32 < 0.0 )
            goto LABEL_56;
        }
        v41 = _mm_cvtsi128_si32(v40);
LABEL_56:
        IsAboutToDie = CDOTA_Bot::IsAboutToDie(this->m_pBot);
        v43 = 0.0;
        if ( IsAboutToDie )
          v43 = 0.89999998;
        v44 = _mm_cvtsi32_si128(v41);
        *v44.m128i_i32 = fmaxf(*v44.m128i_i32, v43);
        v45 = _mm_cvtsi128_si32(v44);
        IsDangerouslyLow = CDOTA_Bot::IsDangerouslyLow(this->m_pBot);
        v48 = 0.0;
        if ( IsDangerouslyLow )
        {
          v80 = CDOTA_BotMode::GetUnit(this);
          *v81.m128_u64 = (*(v80->_vptr_IHandleEntity + 430))(v80);
          v82.m128_i32[0] = 1106247680;
          LODWORD(v48) = _mm_cmplt_ss(v81, v82).m128_u32[0] & 0x3F19999A;
        }
        v49 = _mm_cvtsi32_si128(v45);
        *v49.m128i_i32 = fmaxf(*v49.m128i_i32, v48);
        v50 = _mm_cvtsi128_si32(v49);
        v51 = RemapValClamped(v37, 0.0, 1200.0, 0.0, 0.5, v47);
        v52 = _mm_cvtsi32_si128(v50);
        *v52.m128i_i32 = fmaxf(*v52.m128i_i32, v51);
        v53 = COERCE_FLOAT(_mm_cvtsi128_si32(v52));
        StashValue = CDOTA_Bot::GetStashValue(this->m_pBot, 0);
        ib = fmaxf(v53, RemapValClamped(StashValue, 0.0, 3000.0, 0.0, 0.40000001, v55));
        v56 = CDOTA_BotMode::GetUnit(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v56);
        v58 = CDOTA_BotMode::GetTeamCommander(this);
        src = CDOTA_TeamCommander::GetBaseLocation(v58);
        fProxDesireb = ((src.x - AbsOrigin->x) * (src.x - AbsOrigin->x))
                     + ((src.y - AbsOrigin->y) * (src.y - AbsOrigin->y));
        v59 = LODWORD(fProxDesireb);
        *v59.m128i_i32 = fsqrt(fProxDesireb);
        v60 = COERCE_FLOAT(_mm_cvtsi128_si32(v59));
        v61 = CDOTA_BotMode::GetUnit(this);
        HealthPercent = CDOTA_BaseNPC::GetHealthPercent(v61);
        v63 = CDOTA_BotMode::GetUnit(this);
        v64 = CDOTA_BaseNPC::GetHealthPercent(v63);
        if ( v64 <= HealthPercent )
          HealthPercent = v64;
        fProxDesirec = RemapValClamped(v60, 1500.0, 4000.0, 1.0, 0.0, v65);
        fProxDesirea = fmaxf(ib, fProxDesirec * RemapValClamped(HealthPercent, 15.0, 80.0, 0.94999999, 0.0, v66));
        if ( CDOTA_BotMode_Retreat::FindNearbyHealingAura(this, 0x447A0000u, 0, 0) != 0 )
        {
          v67 = CDOTA_BotMode::GetUnit(this);
          v68 = CDOTA_BaseNPC::GetHealthPercent(v67);
          fProxDesirea = fmaxf(fProxDesirea, RemapValClamped(v68, 0.0, 75.0, 1.0, 0.25, v69));
        }
        v70 = CDOTA_BotMode::GetUnit(this);
        Inventory = CDOTA_BaseNPC::GetInventory(v70);
        ic = 0;
        if ( CDOTA_UnitInventory::FindEmptySpaceInInventory(Inventory, 2, 0) == -1 )
          ic = 1056964608;
        id = fmaxf(fProxDesirea, *&ic);
        IncomingCourier = CDOTA_Bot::GetIncomingCourier(this->m_pBot);
        if ( IncomingCourier != 0 )
        {
          v73 = CBaseEntity::GetAbsOrigin(IncomingCourier);
          v74 = CDOTA_BotMode::GetUnit(this);
          v75 = CBaseEntity::GetAbsOrigin(v74);
          v76 = v75->y - v73->y;
          v78 = fmaxf(
                  id,
                  RemapValClamped(
                    fsqrt(((v75->x - v73->x) * (v75->x - v73->x)) + (v76 * v76)),
                    300.0,
                    3000.0,
                    0.75,
                    0.0,
                    v77));
        }
        else
        {
          v78 = id;
        }
        ig = v78;
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyHeroes);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyAlliedHeroes);
        result = ig;
        goto LABEL_3;
      }
    }
    result = 1.0;
  }
LABEL_3:
  if ( v2 )
  {
    ie = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return ie;
  }
  return result;
}


// CDOTA_BotMode_Retreat::GetDebugColor  (line 383, @0x0000000002816370, libserver.so)
color24 __fastcall CDOTA_BotMode_Retreat::GetDebugColor(CDOTA_BotMode_Retreat *const this)
{
  return 3997500;
}


// CDOTA_BotMode_Retreat::FindNearbyHealingAura  (line 394, @0x000000000281fe30, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetInstance, GetTeamNumber, ToDOTABaseNPC, operator CBaseEntity*, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CEntityHandle::operator CEntityInstance*, CDOTA_ModifierManager::GetBuffByIndex, CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::GetRawAvoidanceForLocation, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CDOTA_BotMode_Retreat::CalculateDesiredLocation, CDOTA_BotMode_Retreat::GetDesire
__int64 __fastcall CDOTA_BotMode_Retreat::FindNearbyHealingAura(
        CDOTA_BotMode_Retreat *const this,
        __m128i radius,
        Vector *pLocation,
        float *pSize)
{
  float v5; // r13d
  CDOTA_BaseNPC *Unit; // rbx
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v9; // rax
  CEntityInstance *v10; // rax
  CEntityInstance *v11; // r13
  int v12; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v14; // r12
  unsigned int v15; // r15d
  CDOTA_BaseNPC *v16; // rax
  CDOTA_TeamCommander *TeamCommander; // rax
  __int64 v21; // [rsp+30h] [rbp-170h]
  int i; // [rsp+3Ch] [rbp-164h]
  Vector *vLoc; // [rsp+40h] [rbp-160h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hPotentialHealingUnits; // [rsp+50h] [rbp-150h] BYREF
  unsigned __int64 v26; // [rsp+168h] [rbp-38h]

  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(radius));
  v26 = __readfsqword(0x28u);
  hPotentialHealingUnits.m_Size = 0;
  hPotentialHealingUnits.m_Memory.m_nAllocationCount = 64;
  hPotentialHealingUnits.m_Memory.m_nGrowSize = 0x80000000;
  hPotentialHealingUnits.m_Memory.m_pMemory = &hPotentialHealingUnits.m_FixedMemory;
  Unit = CDOTA_BotMode::GetUnit(this);
  v7 = CDOTA_BotMode::GetUnit(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  v9 = CDOTA_BotMode::GetUnit(this);
  FindUnitsInRadius(v9->m_iTeamNum.m_Value, AbsOrigin, Unit, v5, &hPotentialHealingUnits, 1, 33, 0, 0, 0);
  if ( hPotentialHealingUnits.m_Size <= 0 )
  {
LABEL_18:
    v15 = 0;
  }
  else
  {
    v21 = 0;
    i = 0;
    while ( 1 )
    {
      v10 = CEntityHandle::operator CEntityInstance *(&hPotentialHealingUnits.m_Memory.m_pMemory[v21]);
      v11 = v10;
      if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 && SLODWORD(v10[65]._vptr_IHandleEntity) > 0 )
        break;
LABEL_17:
      ++i;
      ++v21;
      if ( hPotentialHealingUnits.m_Size <= i )
        goto LABEL_18;
    }
    v12 = 0;
    while ( 1 )
    {
      BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(&v11[64].m_worldGroupId, v12, 0);
      v14 = BuffByIndex;
      if ( BuffByIndex != 0 && (*(BuffByIndex->_vptr_CDOTA_Buff + 35))(BuffByIndex) != 0 )
      {
        v15 = (*(v14->_vptr_CDOTA_Buff + 44))(v14);
        if ( v15 != 0 )
        {
          v16 = CDOTA_BotMode::GetUnit(this);
          vLoc = CBaseEntity::GetAbsOrigin(v16);
          TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
          if ( CDOTA_TeamCommander::GetRawAvoidanceForLocation(TeamCommander, vLoc) <= 9 )
            break;
        }
      }
      if ( ++v12 >= SLODWORD(v11[65]._vptr_IHandleEntity) )
        goto LABEL_17;
    }
    if ( pLocation != 0 )
      *pLocation = *CBaseEntity::GetAbsOrigin(v11);
    if ( pSize != 0 )
      *pSize = (*(v14->_vptr_CDOTA_Buff + 41))(v14);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hPotentialHealingUnits);
  return v15;
}


// CDOTA_BotMode_Retreat_Human::GetDesire  (line 423, @0x0000000002816560, libserver.so)  // inlines: DOTAGameRules, DotProduct, GetTeamNumber, VectorNormalize2D, VectorSubtract, operator-
// calls: CDOTA_BotMode::GetUnit, CDOTAGamerules::GetFountain, CDOTALocomotor::GetAverageVelocityOverTime, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_Bot::IsAboutToDie, CDOTA_Bot::CanEasilyBeKilled, CDOTA_Bot::IsDangerouslyLow
float __fastcall CDOTA_BotMode_Retreat_Human::GetDesire(CDOTA_BotMode_Retreat_Human *const this)
{
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTALocomotor *v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *Fountain; // rax
  const Vector *v10; // rax
  vec_t v11; // xmm1_4
  vec_t v12; // xmm2_4
  vec_t v13; // xmm0_4
  Vector vVelocity; // [rsp+0h] [rbp-40h] BYREF
  Vector vToBase; // [rsp+10h] [rbp-30h] BYREF

  Unit = CDOTA_BotMode::GetUnit(this);
  if ( CDOTAGamerules::GetFountain(g_pGameRules, Unit->m_iTeamNum.m_Value) == 0 )
    return 0.0;
  v3 = CDOTA_BotMode::GetUnit(this);
  v4 = (*(v3->_vptr_IHandleEntity + 376))(v3);
  vVelocity = CDOTALocomotor::GetAverageVelocityOverTime(v4, v5);
  v6 = CDOTA_BotMode::GetUnit(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v8 = CDOTA_BotMode::GetUnit(this);
  Fountain = CDOTAGamerules::GetFountain(g_pGameRules, v8->m_iTeamNum.m_Value);
  v10 = CBaseEntity::GetAbsOrigin(Fountain);
  v11 = v10->y - AbsOrigin->y;
  v12 = v10->x - AbsOrigin->x;
  v13 = v10->z - AbsOrigin->z;
  vVelocity.z = 0.0;
  vToBase.y = v11;
  vToBase.x = v12;
  vToBase.z = v13;
  VectorNormalize(&vVelocity);
  vToBase.z = 0.0;
  VectorNormalize(&vToBase);
  if ( (((vVelocity.x * vToBase.x) + (vVelocity.y * vToBase.y)) + (vVelocity.z * vToBase.z)) <= 0.5 )
    return 0.0;
  if ( CDOTA_Bot::IsAboutToDie(this->m_pBot)
    || CDOTA_Bot::CanEasilyBeKilled(this->m_pBot, &vec3_origin)
    || CDOTA_Bot::IsDangerouslyLow(this->m_pBot) )
  {
    return 0.5;
  }
  else
  {
    return 0.0;
  }
}


