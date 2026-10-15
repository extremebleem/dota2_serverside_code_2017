
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_ObserverWard::CDOTA_Bot_AbilityUsage_ObserverWard  (line 24, @0x00000000028a76f0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_ObserverWard::CDOTA_Bot_AbilityUsage_ObserverWard(
        CDOTA_Bot_AbilityUsage_ObserverWard *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6FD0;
}


// CDOTA_Bot_AbilityUsage_ObserverWard::GetUnitWardUsageDesire  (line 31, @0x00000000028a7710, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, GetWard, GetWardLocation, IndexToIdentity, Length2DSqr, LookupEntity, String, ToCStr, ToDOTABaseNPC, VectorSubtract, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=
// calls: CBaseEntity::GetAbsOrigin
// callers: CDOTA_Bot_AbilityUsage_ObserverWard::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_WardDispenser::GetCurrentUsageDesire
// strings: "npc_dota_observer_wards"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_ObserverWard::GetUnitWardUsageDesire(
        CDOTA_BaseNPC *pUnit,
        Vector *const vLocation)
{
  CDOTA_Bot *m_pBot; // rbx
  vec_t *m_pActiveBotMode; // r12
  const Vector *AbsOrigin; // rax
  float v8; // xmm2_4
  vec_t v9; // xmm1_4
  CGameRules *v10; // rax
  const char *v11; // r9
  __int64 i; // rbx
  int v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  const CBaseEntity *m_pInstance; // rax
  const char *delta; // rsi
  const Vector *v18; // rax
  vec_t v19; // xmm0_4
  const char *v20; // [rsp+0h] [rbp-50h]
  float v21; // [rsp+8h] [rbp-48h]
  float v22; // [rsp+Ch] [rbp-44h]

  *vLocation = vec3_invalid;
  if ( pUnit == 0 )
    return 0;
  m_pBot = pUnit->m_pBot;
  if ( m_pBot == 0 )
    return 0;
  if ( (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode) != 22 )
    return 0;
  m_pActiveBotMode = m_pBot->m_pActiveBotMode;
  if ( m_pActiveBotMode == 0 )
    return 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pUnit);
  v8 = m_pActiveBotMode[57];
  if ( (((m_pActiveBotMode[56] - AbsOrigin->x) * (m_pActiveBotMode[56] - AbsOrigin->x))
      + ((v8 - AbsOrigin->y) * (v8 - AbsOrigin->y))) >= 1000000.0 )
    return 0;
  v9 = m_pActiveBotMode[56];
  v10 = g_pGameRules;
  if ( *&g_pGameRules[55].m_szQuestName[104] > 0 )
  {
    v11 = "npc_dota_observer_wards";
    for ( i = 0; *&g_pGameRules[55].m_szQuestName[104] > i; ++i )
    {
      v13 = *(*&v10[55].m_szQuestName[112] + 4 * i);
      if ( (v13 + 2) > 1 )
      {
        v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v13 >> 9) & 0x3F];
        if ( v14 != 0 )
        {
          v15 = &v14[v13 & 0x1FF];
          if ( v15 != 0 && v13 == v15->m_EHandle.m_Index )
          {
            m_pInstance = v15->m_pInstance;
            if ( v15->m_pInstance != 0
              && m_pInstance->m_bIsDOTANPC
              && m_pInstance->m_iTeamNum.m_Value == pUnit->m_iTeamNum.m_Value )
            {
              delta = m_pInstance[4].m_pfnUse.__delta;
              if ( delta != 0 && (delta == v11 || memcmp(delta, v11, 0x18u) == 0) )
              {
                v21 = v9;
                v22 = v8;
                v20 = v11;
                v18 = CBaseEntity::GetAbsOrigin(v15->m_pInstance);
                if ( (((v18->x - v21) * (v18->x - v21)) + ((v18->y - v22) * (v18->y - v22))) < 10000.0 )
                  return 0;
                v8 = m_pActiveBotMode[57];
                v9 = m_pActiveBotMode[56];
                v11 = v20;
              }
            }
          }
        }
      }
      v10 = g_pGameRules;
    }
  }
  v19 = m_pActiveBotMode[58];
  vLocation->x = v9;
  vLocation->y = v8;
  vLocation->z = v19;
  return 3;
}


// CDOTA_Bot_AbilityUsage_ObserverWard::GetCurrentUsageDesire  (line 75, @0x00000000028a7950, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_AbilityUsage_ObserverWard::GetUnitWardUsageDesire
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_ObserverWard::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_ObserverWard *const this)
{
  Vector *p_m_vLocation; // rsi
  CDOTA_Bot *m_pBot; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v4; // cx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  p_m_vLocation = &this->m_vLocation;
  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = m_pBot->m_hUnit.m_Index, (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F]) != 0)
    && (v6 = &v5[v4 & 0x1FF]) != 0
    && m_Index == v6->m_EHandle.m_Index
    && (m_pInstance = v6->m_pInstance, v6->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC )
  {
    return CDOTA_Bot_AbilityUsage_ObserverWard::GetUnitWardUsageDesire(m_pInstance, p_m_vLocation);
  }
  else
  {
    return CDOTA_Bot_AbilityUsage_ObserverWard::GetUnitWardUsageDesire(0, p_m_vLocation);
  }
}


// CDOTA_Bot_AbilityUsage_ObserverWard::UseAbility  (line 82, @0x00000000028a6ad0, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_ObserverWard::UseAbility(CDOTA_Bot_AbilityUsage_ObserverWard *const this)
{
  CDOTABaseAbility *m_pAbility; // r12
  CDOTA_Bot *m_pBot; // r14
  CDOTA_BotAction_UseAbility *v4; // r13

  m_pAbility = this->m_pAbility;
  m_pBot = this->m_pBot;
  if ( m_pAbility == 0 || (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) == 0 )
    m_pAbility = 0;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_WardDispenser::CDOTA_Bot_AbilityUsage_WardDispenser  (line 89, @0x00000000028a7ab0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_WardDispenser::CDOTA_Bot_AbilityUsage_WardDispenser(
        CDOTA_Bot_AbilityUsage_WardDispenser *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  __int64 v3; // rdx
  vec_t z; // eax

  this->m_pAbility = pAbility;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C7030;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  v3 = *&vec3_invalid.x;
  this->m_bCastObserver = 0;
  z = vec3_invalid.z;
  this->m_flLastCastTime = 0.0;
  *&this->m_vLocation.x = v3;
  this->m_vLocation.z = z;
}


// CDOTA_Bot_AbilityUsage_WardDispenser::GetCurrentUsageDesire  (line 99, @0x00000000028a79d0, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::GetActionDelay, CDOTA_Bot_AbilityUsage_ObserverWard::GetUnitWardUsageDesire
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_WardDispenser::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_WardDispenser *const this)
{
  float ActionDelay; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  int result; // eax
  CDOTA_Bot *m_pBot; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  float m_flLastCastTime; // [rsp+Ch] [rbp-14h]

  m_flLastCastTime = this->m_flLastCastTime;
  ActionDelay = CDOTA_Bot::GetActionDelay(this->m_pBot, 1);
  v3 = 0.0;
  v4 = (ActionDelay + m_flLastCastTime) + 0.1;
  if ( g_pGameRules != 0 )
    v3 = *&g_pGameRules[18].m_szQuestName[20];
  result = 0;
  if ( v4 <= v3 )
  {
    m_pBot = this->m_pBot;
    m_Index = m_pBot->m_hUnit.m_Index;
    if ( m_Index + 2 <= 1
      || (v8 = m_pBot->m_hUnit.m_Index, (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F]) == 0)
      || (v10 = &v9[v8 & 0x1FF]) == 0
      || m_Index != v10->m_EHandle.m_Index
      || (m_pInstance = v10->m_pInstance, v10->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    result = CDOTA_Bot_AbilityUsage_ObserverWard::GetUnitWardUsageDesire(m_pInstance, &this->m_vLocation);
    if ( result != 0 )
      this->m_bCastObserver = 1;
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_WardDispenser::UseAbility  (line 116, @0x00000000028a6c50, libserver.so)  // inlines: DOTAGameRules, GetGameTime, GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_DispenseWard::CDOTA_BotAction_DispenseWard, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_WardDispenser::UseAbility(CDOTA_Bot_AbilityUsage_WardDispenser *const this)
{
  CDOTABaseAbility *m_pAbility; // r12
  CDOTA_Bot *m_pBot; // r14
  CDOTA_BotAction_DispenseWard *v4; // r13
  float v5; // xmm0_4

  m_pAbility = this->m_pAbility;
  m_pBot = this->m_pBot;
  if ( m_pAbility == 0 || (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) == 0 )
    m_pAbility = 0;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_DispenseWard::CDOTA_BotAction_DispenseWard(
    v4,
    m_pBot,
    m_pAbility,
    &this->m_vLocation,
    this->m_bCastObserver);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
  v5 = 0.0;
  if ( g_pGameRules != 0 )
    v5 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flLastCastTime = v5;
}


