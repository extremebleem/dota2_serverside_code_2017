
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Keeper_Of_The_Light::CDOTA_Bot_Hero_Keeper_Of_The_Light  (line 21, @0x00000000028c3240, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::CDOTA_Bot, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit, CDOTA_TutorialBot_Hero_Keeper_Of_The_Light::CDOTA_TutorialBot_Hero_Keeper_Of_The_Light
// strings: "keeper_of_the_light_chakra_magic"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Hero_Keeper_Of_The_Light::CDOTA_Bot_Hero_Keeper_Of_The_Light(
        CDOTA_Bot_Hero_Keeper_Of_The_Light *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42CCBB0;
  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v7 = &v6[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  this->m_pAbilityChakraMagic = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "keeper_of_the_light_chakra_magic", 1);
}


// CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic::CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic  (line 31, @0x00000000028c32f0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic::CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic(
        CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CCD10;
  this->m_hDesiredTarget.m_Index = -1;
  this->m_flDelay = 0.0;
}


// CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic::GetCurrentUsageDesire  (line 41, @0x00000000028c34c0, libserver.so)  // inlines: curtime
// calls: RandomFloat, CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic::GetCurrentUsageDesire_Tutorial
int __fastcall CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic *const this)
{
  float m_flCurrentTime; // xmm0_4
  float m_flDelay; // xmm1_4
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v7; // r12
  FnGlobalVarsWarningFunc v8; // rax
  float v9; // [rsp+Ch] [rbp-24h]
  float v10; // [rsp+Ch] [rbp-24h]

  if ( (*(this->m_pBot->_vptr_CDOTA_Bot + 27))(this->m_pBot) == 0 )
    return 0;
  m_flCurrentTime = 0.0;
  m_flDelay = this->m_flDelay;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v9 = this->m_flDelay;
        (m_pfnWarningFunc)(1, 0.0);
        m_flDelay = v9;
      }
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  if ( m_flDelay > m_flCurrentTime )
    return 0;
  v7 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v8 = gpGlobals->m_pfnWarningFunc;
      if ( v8 != 0 )
        v8(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v10 = v7->m_flCurrentTime;
  }
  else
  {
    v10 = 0.0;
  }
  this->m_flDelay = RandomFloat(2.0, 5.0) + v10;
  return CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic::GetCurrentUsageDesire_Tutorial(this);
}


// CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic::GetCurrentUsageDesire_Tutorial  (line 60, @0x00000000028c3320, libserver.so)  // inlines: Get, GetCompanionEntity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetManaPercent, GetSerialNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CEntityHandle::operator CEntityInstance*, __dynamic_cast, RandomFloat
// callers: CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic::GetCurrentUsageDesire
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic::GetCurrentUsageDesire_Tutorial(
        CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic *const this)
{
  int v2; // ebx
  CDOTA_Bot_Hero_Keeper_Of_The_Light *m_pBot; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rdi
  CEntityInstance *v10; // rax
  float *v11; // rax
  float *v12; // r13
  __int64 v13; // rdx
  int v14; // eax
  __int16 v15; // cx
  float flMana; // [rsp+Ch] [rbp-24h]

  v2 = 0;
  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1 )
    return v2;
  v5 = m_pBot->m_hUnit.m_Index;
  v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
  if ( v6 == 0 )
    return v2;
  v7 = &v6[v5 & 0x1FF];
  if ( v7 == 0 )
    return v2;
  if ( m_Index != v7->m_EHandle.m_Index )
    return v2;
  m_pInstance = v7->m_pInstance;
  if ( v7->m_pInstance == 0 )
    return v2;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return v2;
  if ( LOBYTE(m_pInstance[85]._vptr_IHandleEntity) == 0 )
    return v2;
  v10 = CEntityHandle::operator CEntityInstance *(&m_pInstance[85]._vptr_IHandleEntity + 1);
  if ( v10 == 0 )
    return v2;
  v11 = __dynamic_cast(v10, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC_Hero, 0);
  v12 = v11;
  if ( v11 == 0 )
    return v2;
  flMana = ((100.0 * v11[534]) / v11[536]);
  if ( RandomFloat(15.0, 25.0) <= flMana )
  {
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  v13 = *(v12 + 1);
  if ( v13 == 0 )
  {
    this->m_hDesiredTarget.m_Index = -1;
    return 4;
  }
  v14 = (*(v13 + 16) >> 15) - (*(v13 + 48) & 1);
  if ( *(v13 + 16) == -1 )
    v15 = 0x7FFF;
  else
    v15 = *(v13 + 16) & 0x7FFF;
  LOWORD(this->m_hDesiredTarget.m_Index) = v15 | this->m_hDesiredTarget.m_Index & 0x8000;
  this->m_hDesiredTarget.m_Index = (v14 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
  return 4;
}


// CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic::UseAbility  (line 87, @0x00000000028c0920, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic::UseAbility(
        CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Keeper_Of_The_Light *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // r15
  CDOTA_BotAction_UseAbility *v8; // r12

  m_Index = this->m_hDesiredTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDesiredTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hDesiredTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          m_pBot = this->m_pBot;
          m_pAbility = this->m_pAbility;
          v8 = operator new(0xC0u);
          CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v8, m_pBot, m_pAbility, m_pInstance);
          CDOTA_Bot::PushAction(this->m_pBot, v8);
        }
      }
    }
  }
}


// CDOTA_TutorialBot_Hero_Keeper_Of_The_Light::CDOTA_TutorialBot_Hero_Keeper_Of_The_Light  (line 105, @0x00000000028c35c0, libserver.so)
// calls: CDOTA_Bot_Hero_Keeper_Of_The_Light::CDOTA_Bot_Hero_Keeper_Of_The_Light
// callers: CreateBotForUnit
void __fastcall CDOTA_TutorialBot_Hero_Keeper_Of_The_Light::CDOTA_TutorialBot_Hero_Keeper_Of_The_Light(
        CDOTA_TutorialBot_Hero_Keeper_Of_The_Light *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  CDOTA_Bot_Hero_Keeper_Of_The_Light::CDOTA_Bot_Hero_Keeper_Of_The_Light(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42CCD70;
}


// CDOTA_TutorialBot_Hero_Keeper_Of_The_Light::CreateMode  (line 114, @0x00000000028bf5d0, libserver.so)
// calls: operator new, CDOTA_BotMode_Companion::CDOTA_BotMode_Companion, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_TutorialBot_Hero_Keeper_Of_The_Light::CreateMode(
        CDOTA_TutorialBot_Hero_Keeper_Of_The_Light *const this,
        int iMode)
{
  CDOTA_BotMode_Companion *v3; // rbx

  if ( iMode != 23 )
    return 0;
  v3 = operator new(0x120u);
  CDOTA_BotMode_Companion::CDOTA_BotMode_Companion(v3, this);
  return v3;
}


