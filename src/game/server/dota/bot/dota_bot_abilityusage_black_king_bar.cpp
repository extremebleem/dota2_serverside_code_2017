
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_BlackKingBar::CDOTA_Bot_AbilityUsage_BlackKingBar  (line 23, @0x00000000028971c0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_BlackKingBar::CDOTA_Bot_AbilityUsage_BlackKingBar(
        CDOTA_Bot_AbilityUsage_BlackKingBar *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C5AD0;
}


// CDOTA_Bot_AbilityUsage_BlackKingBar::GetCurrentUsageDesire  (line 30, @0x0000000002898980, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetOpposingTeamCommander, GetUnit, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot::FindNearbyEnemiesInMode, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CDOTA_Bot::GetEstimatedDamageToTarget, CDOTA_Bot::GetStunDuration, CDOTA_Bot::GetSlowDuration, CBaseEntity::GetHealth, CDOTA_TeamCommander::GetOpposingTeamCommander, CDOTA_TeamCommander::HasIncomingStun, CDOTA_ModifierManager::GetBuffByIndex, CUtlMemory<CDOTA_Bot*, int>::Purge, CDOTA_Bot::GetNearbyHeroes (14 total)
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_BlackKingBar::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_BlackKingBar *const this)
{
  CDOTA_Bot *m_pBot; // rbx
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // rcx
  int result; // eax
  __m128i v6; // xmm3
  __int64 v7; // rbx
  int v8; // r13d
  int v9; // r14d
  CDOTA_Bot *v10; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v12; // si
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_Bot *v16; // rax
  uint32 v17; // esi
  unsigned __int16 v18; // dx
  CEntityIdentity *v19; // rax
  CEntityIdentity *v20; // rax
  CBaseEntity *v21; // rsi
  CDOTA_Bot *v22; // rax
  uint32 v23; // edx
  unsigned __int16 v24; // cx
  CEntityIdentity *v25; // rax
  CEntityIdentity *v26; // rax
  CDOTA_BaseNPC *v27; // rdx
  float SlowDuration; // xmm0_4
  float v29; // r13d
  CEntityInstance *v30; // rax
  const CBaseEntity *v31; // rdi
  CDOTA_Bot *v32; // rbx
  CEntityInstance *v33; // rax
  CDOTA_BaseNPC *v34; // r12
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  int v36; // ebx
  int v37; // r12d
  CEntityInstance *v38; // rdi
  CDOTA_Buff *BuffByIndex; // rax
  CEntityInstance *v40; // rax
  int NearbyHeroes; // edx
  float fTotalSlows; // [rsp+8h] [rbp-58h]
  float fTotalStuns; // [rsp+Ch] [rbp-54h]
  int fTotalStunsa; // [rsp+Ch] [rbp-54h]
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > EnemyGankingBots; // [rsp+10h] [rbp-50h] BYREF

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2 )
  {
    NearbyHeroes = CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, 0, 0.0);
    result = 3;
    if ( NearbyHeroes > 2 )
      return result;
  }
  m_pBot = this->m_pBot;
  EnemyGankingBots.m_Size = 0;
  EnemyGankingBots.m_Memory.m_pMemory = 0;
  EnemyGankingBots.m_Memory.m_nAllocationCount = 0;
  EnemyGankingBots.m_Memory.m_nGrowSize = 0;
  v3 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
    v4 = v3;
  else
    v4 = 0;
  result = CDOTA_Bot::FindNearbyEnemiesInMode(
             m_pBot,
             DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK,
             1000.0,
             &EnemyGankingBots,
             v4);
  if ( result == 0 )
  {
LABEL_52:
    EnemyGankingBots.m_Size = 0;
    if ( (EnemyGankingBots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      goto LABEL_55;
    return result;
  }
  if ( EnemyGankingBots.m_Size <= 0 )
  {
    v29 = 0.0;
    v9 = 0;
    fTotalSlows = 0.0;
    fTotalStuns = 0.0;
  }
  else
  {
    v7 = 0;
    fTotalSlows = 0.0;
    fTotalStuns = 0.0;
    v8 = 0;
    v9 = 0;
    do
    {
      while ( 1 )
      {
        v10 = EnemyGankingBots.m_Memory.m_pMemory[v7];
        m_Index = v10->m_hUnit.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v12 = v10->m_hUnit.m_Index;
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v12 >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[v12 & 0x1FF];
            if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
            {
              m_pInstance = v14->m_pInstance;
              if ( v14->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                v16 = this->m_pBot;
                v17 = v16->m_hUnit.m_Index;
                if ( v17 + 2 <= 1
                  || (v18 = v16->m_hUnit.m_Index,
                      (v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v18 >> 9) & 0x3F]) == 0)
                  || (v20 = &v19[v18 & 0x1FF]) == 0
                  || v17 != v20->m_EHandle.m_Index
                  || (v21 = v20->m_pInstance, v20->m_pInstance == 0)
                  || !v21->m_bIsDOTANPC )
                {
                  v21 = 0;
                }
                if ( CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(m_pInstance, v21) )
                  break;
              }
            }
          }
        }
        if ( EnemyGankingBots.m_Size <= ++v7 )
          goto LABEL_27;
      }
      v22 = this->m_pBot;
      v23 = v22->m_hUnit.m_Index;
      if ( v23 + 2 <= 1
        || (v24 = v22->m_hUnit.m_Index, (v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v24 >> 9) & 0x3F]) == 0)
        || (v26 = &v25[v24 & 0x1FF]) == 0
        || v23 != v26->m_EHandle.m_Index
        || (v27 = v26->m_pInstance, v26->m_pInstance == 0)
        || !v27->m_bIsDOTANPC )
      {
        v27 = 0;
      }
      v8 += CDOTA_Bot::GetEstimatedDamageToTarget(EnemyGankingBots.m_Memory.m_pMemory[v7], 1, v27, 3.0, 2);
      fTotalStuns = CDOTA_Bot::GetStunDuration(EnemyGankingBots.m_Memory.m_pMemory[v7], 1) + fTotalStuns;
      SlowDuration = CDOTA_Bot::GetSlowDuration(EnemyGankingBots.m_Memory.m_pMemory[v7], 1);
      ++v9;
      ++v7;
      fTotalSlows = SlowDuration + fTotalSlows;
    }
    while ( EnemyGankingBots.m_Size > v7 );
LABEL_27:
    *v6.m128i_i32 = v8;
    v29 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  }
  v30 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v30 != 0 && BYTE3(v30[7]._vptr_IHandleEntity) != 0 )
    v31 = v30;
  else
    v31 = 0;
  if ( (v29 / CBaseEntity::GetHealth(v31)) > 0.75 || fTotalStuns > 3.0 || fTotalSlows > 5.0 )
    goto LABEL_54;
  if ( v9 > 1 )
  {
    v32 = this->m_pBot;
    v33 = CEntityHandle::operator CEntityInstance *(&v32->m_hUnit);
    if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
      v34 = v33;
    else
      v34 = 0;
    OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(v32->m_pTeamCommander);
    if ( CDOTA_TeamCommander::HasIncomingStun(OpposingTeamCommander, v32, v34) )
      goto LABEL_54;
  }
  v36 = 0;
  v37 = 0;
  while ( 1 )
  {
    v40 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v40 != 0 && BYTE3(v40[7]._vptr_IHandleEntity) != 0 )
      break;
    if ( v36 >= 0 )
      goto LABEL_50;
    v38 = 0;
LABEL_42:
    BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(&v38[64].m_worldGroupId, v36, 0);
    if ( BuffByIndex != 0 )
      v37 -= ((*(BuffByIndex->_vptr_CDOTA_Buff + 12))(BuffByIndex) == 0) - 1;
    ++v36;
  }
  if ( SLODWORD(v40[65]._vptr_IHandleEntity) > v36 )
  {
    v38 = v40;
    goto LABEL_42;
  }
LABEL_50:
  if ( v37 <= 1 )
  {
    result = 0;
    goto LABEL_52;
  }
LABEL_54:
  result = 3;
  EnemyGankingBots.m_Size = 0;
  if ( (EnemyGankingBots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
LABEL_55:
    fTotalStunsa = result;
    CUtlMemory<CDOTA_Bot *,int>::Purge(&EnemyGankingBots.m_Memory);
    result = fTotalStunsa;
    if ( (EnemyGankingBots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_Bot *,int>::Purge(&EnemyGankingBots.m_Memory);
      return fTotalStunsa;
    }
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_BlackKingBar::UseAbility  (line 93, @0x0000000002895f10, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_BlackKingBar::UseAbility(CDOTA_Bot_AbilityUsage_BlackKingBar *const this)
{
  CDOTABaseAbility *m_pAbility; // r12
  CDOTA_Bot *m_pBot; // r14
  CDOTA_BotAction_UseAbility *v4; // r13

  m_pAbility = this->m_pAbility;
  m_pBot = this->m_pBot;
  if ( m_pAbility == 0 || (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) == 0 )
    m_pAbility = 0;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


