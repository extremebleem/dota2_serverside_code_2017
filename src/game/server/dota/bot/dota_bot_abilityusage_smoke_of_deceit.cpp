
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_SmokeOfDeceit::CDOTA_Bot_AbilityUsage_SmokeOfDeceit  (line 22, @0x00000000028a9b50, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, _Unwind_Resume
// callers: CreateAbilityUsage
// strings: "visibility_radius"
void __fastcall CDOTA_Bot_AbilityUsage_SmokeOfDeceit::CDOTA_Bot_AbilityUsage_SmokeOfDeceit(
        CDOTA_Bot_AbilityUsage_SmokeOfDeceit *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->m_bUseOnCreeps = 0;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6D30;  // vptr: CDOTA_Bot_AbilityUsage_SmokeOfDeceit
  this->m_iRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pAbility, "visibility_radius", -1, 1);
}


// CDOTA_Bot_AbilityUsage_SmokeOfDeceit::GetCurrentUsageDesire  (line 30, @0x00000000028a7070, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::GetNearbyHeroes
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_SmokeOfDeceit::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_SmokeOfDeceit *const this)
{
  CDOTA_Bot *m_pBot; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx
  CEntityInstance *m_pInstance; // rdx

  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[m_pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  if ( SLOBYTE(m_pInstance[58]._vptr_IHandleEntity) < 0
    || (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode) != 16
    || CDOTA_Bot::GetNearbyHeroes(
         this->m_pBot,
         DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY,
         0,
         this->m_iRadius) <= 2
    || CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, 0, 0.0) != 0 )
  {
    return 0;
  }
  else
  {
    return 2;
  }
}


// CDOTA_Bot_AbilityUsage_SmokeOfDeceit::UseAbility  (line 43, @0x00000000028a68d0, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_SmokeOfDeceit::UseAbility(CDOTA_Bot_AbilityUsage_SmokeOfDeceit *const this)
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


