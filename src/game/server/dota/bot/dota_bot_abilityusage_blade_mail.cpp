
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_BladeMail::CDOTA_Bot_AbilityUsage_BladeMail  (line 23, @0x0000000002897200, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_BladeMail::CDOTA_Bot_AbilityUsage_BladeMail(
        CDOTA_Bot_AbilityUsage_BladeMail *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C5B30;  // vptr: CDOTA_Bot_AbilityUsage_BladeMail
}


// CDOTA_Bot_AbilityUsage_BladeMail::GetCurrentUsageDesire  (line 30, @0x0000000002898e60, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot::FindNearbyEnemiesInMode, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CDOTA_Bot::GetEstimatedDamageToTarget, CBaseEntity::GetHealth, CDOTA_Bot::GetNearbyHeroes, CUtlMemory<CDOTA_Bot*, int>::Purge, CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_BladeMail::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_BladeMail *const this)
{
  CDOTA_Bot *m_pBot; // rbx
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // rcx
  int result; // eax
  __m128i v6; // xmm2
  __int64 v7; // rbx
  int v8; // r13d
  CDOTA_Bot *v9; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v11; // si
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_Bot *v15; // rax
  uint32 v16; // esi
  unsigned __int16 v17; // dx
  CEntityIdentity *v18; // rax
  CEntityIdentity *v19; // rax
  CBaseEntity *v20; // rsi
  CDOTA_Bot *v21; // rax
  uint32 v22; // edx
  unsigned __int16 v23; // cx
  CEntityIdentity *v24; // rax
  CEntityIdentity *v25; // rax
  CDOTA_BaseNPC *v26; // rdx
  float v27; // r13d
  CEntityInstance *v28; // rax
  const CBaseEntity *v29; // rdi
  int NearbyHeroes; // edx
  int v31; // [rsp+Ch] [rbp-54h]
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > EnemyGankingBots; // [rsp+10h] [rbp-50h] BYREF

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2
    || (NearbyHeroes = CDOTA_Bot::GetNearbyHeroes(
                         this->m_pBot,
                         DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
                         0,
                         0.0),
        result = 3,
        NearbyHeroes <= 2) )
  {
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
    if ( result != 0 )
    {
      if ( EnemyGankingBots.m_Size <= 0 )
      {
        v27 = 0.0;
      }
      else
      {
        v7 = 0;
        v8 = 0;
        do
        {
          while ( 1 )
          {
            v9 = EnemyGankingBots.m_Memory.m_pMemory[v7];
            m_Index = v9->m_hUnit.m_Index;
            if ( m_Index + 2 > 1 )
            {
              v11 = v9->m_hUnit.m_Index;
              v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v11 >> 9) & 0x3F];
              if ( v12 != 0 )
              {
                v13 = &v12[v11 & 0x1FF];
                if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
                {
                  m_pInstance = v13->m_pInstance;
                  if ( v13->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                  {
                    v15 = this->m_pBot;
                    v16 = v15->m_hUnit.m_Index;
                    if ( v16 + 2 <= 1
                      || (v17 = v15->m_hUnit.m_Index,
                          (v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v17 >> 9) & 0x3F]) == 0)
                      || (v19 = &v18[v17 & 0x1FF]) == 0
                      || v16 != v19->m_EHandle.m_Index
                      || (v20 = v19->m_pInstance, v19->m_pInstance == 0)
                      || !v20->m_bIsDOTANPC )
                    {
                      v20 = 0;
                    }
                    if ( CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(m_pInstance, v20) )
                      break;
                  }
                }
              }
            }
            if ( EnemyGankingBots.m_Size <= ++v7 )
              goto LABEL_27;
          }
          v21 = this->m_pBot;
          v22 = v21->m_hUnit.m_Index;
          if ( v22 + 2 <= 1
            || (v23 = v21->m_hUnit.m_Index,
                (v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v23 >> 9) & 0x3F]) == 0)
            || (v25 = &v24[v23 & 0x1FF]) == 0
            || v22 != v25->m_EHandle.m_Index
            || (v26 = v25->m_pInstance, v25->m_pInstance == 0)
            || !v26->m_bIsDOTANPC )
          {
            v26 = 0;
          }
          v8 += CDOTA_Bot::GetEstimatedDamageToTarget(EnemyGankingBots.m_Memory.m_pMemory[v7++], 1, v26, 5.0, 7);
        }
        while ( EnemyGankingBots.m_Size > v7 );
LABEL_27:
        *v6.m128i_i32 = v8;
        v27 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
      }
      v28 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v28 != 0 && BYTE3(v28[7]._vptr_IHandleEntity) != 0 )
        v29 = v28;
      else
        v29 = 0;
      result = 3 * ((v27 / CBaseEntity::GetHealth(v29)) > 0.5);
    }
    EnemyGankingBots.m_Size = 0;
    if ( (EnemyGankingBots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      v31 = result;
      CUtlMemory<CDOTA_Bot *,int>::Purge(&EnemyGankingBots.m_Memory);
      result = v31;
      if ( (EnemyGankingBots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CDOTA_Bot *,int>::Purge(&EnemyGankingBots.m_Memory);
        return v31;
      }
    }
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_BladeMail::UseAbility  (line 62, @0x0000000002895f90, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_BladeMail::UseAbility(CDOTA_Bot_AbilityUsage_BladeMail *const this)
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


