
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_InvisibilityEdge::CDOTA_Bot_AbilityUsage_InvisibilityEdge  (line 23, @0x00000000028a05b0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_InvisibilityEdge::CDOTA_Bot_AbilityUsage_InvisibilityEdge(
        CDOTA_Bot_AbilityUsage_InvisibilityEdge *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C64D0;  // vptr: CDOTA_Bot_AbilityUsage_InvisibilityEdge
}


// CDOTA_Bot_AbilityUsage_InvisibilityEdge::GetCurrentUsageDesire  (line 30, @0x000000000289fc00, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTarget, GetUnit, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator-, operator->
// calls: CBaseEntity::GetAbsOrigin, CDOTA_Bot::IsAboutToDie, CDOTA_Bot::CanEasilyBeKilled
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_InvisibilityEdge::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_InvisibilityEdge *const this)
{
  CDOTA_Bot *m_pBot; // rdx
  int result; // eax
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rsi
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v9; // rdx
  const Vector *AbsOrigin; // rax
  CDOTA_Bot *v11; // rdx
  float *p_x; // r12
  uint32 v13; // eax
  unsigned __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  const CBaseEntity *v17; // rdi
  const Vector *v18; // rax
  float x; // xmm0_4
  float y; // xmm1_4

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 3
    || (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 16 )
  {
    m_pBot = this->m_pBot;
    m_Index = m_pBot->m_hTarget.m_Index;
    if ( m_Index + 2 <= 1
      || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F]) == 0
      || (v6 = &v5[m_Index & 0x1FF]) == 0
      || m_Index != v6->m_EHandle.m_Index )
    {
LABEL_4:
      if ( (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode) == 4
        && (CDOTA_Bot::IsAboutToDie(this->m_pBot) || CDOTA_Bot::CanEasilyBeKilled(this->m_pBot, &vec3_origin)) )
      {
        return 3;
      }
      else
      {
        return 0;
      }
    }
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      m_pInstance = 0;
      v9 = &v7[m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
    else
    {
      m_pInstance = 0;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    v11 = this->m_pBot;
    p_x = &AbsOrigin->x;
    v13 = v11->m_hUnit.m_Index;
    if ( v13 + 2 <= 1
      || (v14 = v11->m_hUnit.m_Index, (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v14 >> 9) & 0x3F]) == 0)
      || (v16 = &v15[v14 & 0x1FF]) == 0
      || v13 != v16->m_EHandle.m_Index
      || (v17 = v16->m_pInstance, v16->m_pInstance == 0)
      || !v17->m_bIsDOTANPC )
    {
      v17 = 0;
    }
    v18 = CBaseEntity::GetAbsOrigin(v17);
    x = v18->x;
    y = v18->y;
    result = 3;
    if ( fsqrt(((x - *p_x) * (x - *p_x)) + ((y - p_x[1]) * (y - p_x[1]))) < 2000.0 )
      return result;
  }
  m_pBot = this->m_pBot;
  goto LABEL_4;
}


// CDOTA_Bot_AbilityUsage_InvisibilityEdge::UseAbility  (line 55, @0x000000000289f0f0, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_InvisibilityEdge::UseAbility(
        CDOTA_Bot_AbilityUsage_InvisibilityEdge *const this)
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


