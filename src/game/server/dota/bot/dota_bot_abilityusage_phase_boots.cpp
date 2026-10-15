
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_PhaseBoots::CDOTA_Bot_AbilityUsage_PhaseBoots  (line 21, @0x00000000028a4bb0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_PhaseBoots::CDOTA_Bot_AbilityUsage_PhaseBoots(
        CDOTA_Bot_AbilityUsage_PhaseBoots *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6970;
}


// CDOTA_Bot_AbilityUsage_PhaseBoots::GetCurrentUsageDesire  (line 29, @0x00000000028a37c0, libserver.so)  // inlines: Element, FastSqrt, Get, GetAction, GetDestination, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, ToDOTABotActionMoveTo, Top, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[]
// calls: CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_PhaseBoots::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_PhaseBoots *const this)
{
  CDOTA_Bot *m_pBot; // rax
  int m_Size; // edx
  float *v4; // rbx
  const Vector *AbsOrigin; // rax
  CDOTA_Bot *v6; // rax
  uint32 m_Index; // ecx
  unsigned __int16 v8; // dx
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  const CBaseEntity *m_pInstance; // rdi
  float x; // xmm0_4
  float y; // xmm1_4
  float v14; // xmm0_4
  float v16; // [rsp+8h] [rbp-18h]
  float v17; // [rsp+Ch] [rbp-14h]

  m_pBot = this->m_pBot;
  if ( m_pBot->m_iDifficulty > 1
    && (m_Size = m_pBot->m_ActionStack.m_Size) > 0
    && (v4 = m_pBot->m_ActionStack.m_Memory.m_pMemory[m_Size - 1]) != 0
    && (*(*v4 + 16LL))(v4) == 2 )
  {
    v6 = this->m_pBot;
    v16 = v4[18];
    m_Index = v6->m_hUnit.m_Index;
    v17 = v4[19];
    if ( m_Index + 2 <= 1
      || (v8 = v6->m_hUnit.m_Index, (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F]) == 0)
      || (v10 = &v9[v8 & 0x1FF]) == 0
      || m_Index != v10->m_EHandle.m_Index
      || (m_pInstance = v10->m_pInstance, v10->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    x = AbsOrigin->x;
    y = AbsOrigin->y;
    LODWORD(AbsOrigin) = 2;
    v14 = fsqrt(((x - v16) * (x - v16)) + ((y - v17) * (y - v17)));
    if ( v14 <= 2000.0 )
      return v14 > 1000.0;
  }
  else
  {
    LODWORD(AbsOrigin) = 0;
  }
  return AbsOrigin;
}


// CDOTA_Bot_AbilityUsage_PhaseBoots::UseAbility  (line 52, @0x00000000028a3200, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_PhaseBoots::UseAbility(CDOTA_Bot_AbilityUsage_PhaseBoots *const this)
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


