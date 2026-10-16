
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Necronomicon::CDOTA_Bot_AbilityUsage_Necronomicon  (line 23, @0x00000000028a4b20, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Necronomicon::CDOTA_Bot_AbilityUsage_Necronomicon(
        CDOTA_Bot_AbilityUsage_Necronomicon *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C68B0;  // vptr: CDOTA_Bot_AbilityUsage_Necronomicon
}


// CDOTA_Bot_AbilityUsage_Necronomicon::GetCurrentUsageDesire  (line 30, @0x00000000028a3cb0, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, Get, GetDistanceToEntity, GetEntityIdentity, GetEntryIndex, GetInstance, GetTarget, GetUnit, IndexToIdentity, IsValid, Length, LookupEntity, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Necronomicon::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Necronomicon *const this)
{
  int v2; // edx
  int result; // eax
  CDOTA_Bot *m_pBot; // rdx
  const CBaseEntity *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rsi
  CEntityIdentity *v8; // rsi
  uint32 v9; // eax
  unsigned __int16 v10; // si
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  const CBaseEntity *v13; // r12
  const Vector *AbsOrigin; // rbx
  const Vector *v15; // rax
  float v16; // xmm1_4

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  result = 0;
  if ( v2 == 2 )
  {
    m_pBot = this->m_pBot;
    m_pInstance = 0;
    m_Index = m_pBot->m_hTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[m_Index & 0x1FF];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
          m_pInstance = v8->m_pInstance;
      }
    }
    v9 = m_pBot->m_hUnit.m_Index;
    if ( v9 + 2 <= 1
      || (v10 = m_pBot->m_hUnit.m_Index, (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9) & 0x3F]) == 0)
      || (v12 = &v11[v10 & 0x1FF]) == 0
      || v9 != v12->m_EHandle.m_Index
      || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
      || !v13->m_bIsDOTANPC )
    {
      v13 = 0;
    }
    result = 2;
    if ( m_pInstance != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
      v15 = CBaseEntity::GetAbsOrigin(v13);
      v16 = v15->z - AbsOrigin->z;
      return 2
           * (fsqrt(
                (((v15->x - AbsOrigin->x) * (v15->x - AbsOrigin->x))
               + ((v15->y - AbsOrigin->y) * (v15->y - AbsOrigin->y)))
              + (v16 * v16)) < 600.0);
    }
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_Necronomicon::UseAbility  (line 46, @0x00000000028a3180, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Necronomicon::UseAbility(CDOTA_Bot_AbilityUsage_Necronomicon *const this)
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


