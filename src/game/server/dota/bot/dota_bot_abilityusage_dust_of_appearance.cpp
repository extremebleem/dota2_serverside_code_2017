
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Dust::CDOTA_Bot_AbilityUsage_Dust  (line 22, @0x000000000289e500, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, _Unwind_Resume
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Dust::CDOTA_Bot_AbilityUsage_Dust(
        CDOTA_Bot_AbilityUsage_Dust *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->m_bUseOnCreeps = 0;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C60F0;
  this->m_iRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pAbility, "radius", -1, 1);
}


// CDOTA_Bot_AbilityUsage_Dust::GetCurrentUsageDesire  (line 30, @0x000000000289bcb0, libserver.so)  // inlines: DOTAGameRules, FastSqrt, Get, GetBotByIndex, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetOpposingTeamCommander, GetSpecificMode, GetTimeSinceLastSeen, GetUnit, IndexToIdentity, IsRealHero, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTA_TeamCommander::GetOpposingTeamCommander, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Dust::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Dust *const this)
{
  __int64 v2; // rbx
  CDOTA_Bot *m_pBot; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_Bot *v7; // r12
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CEntityInstance *m_pInstance; // r14
  CDOTA_Bot *v11; // rax
  uint32 v12; // esi
  unsigned __int16 v13; // dx
  CEntityIdentity *v14; // rax
  CEntityIdentity *v15; // rax
  const CBaseEntity *v16; // rdi
  const Vector *AbsOrigin; // rax
  float v18; // xmm0_4
  CDOTA_BotMode *v19; // rdi

  v2 = 0;
  m_pBot = this->m_pBot;
  while ( 1 )
  {
    if ( v2 >= CDOTA_TeamCommander::GetOpposingTeamCommander(m_pBot->m_pTeamCommander)->m_BotList.m_Size )
      return 0;
    v7 = 0;
    OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
    if ( v2 < OpposingTeamCommander->m_BotList.m_Size )
      v7 = OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v2];
    m_Index = v7->m_hUnit.m_Index;
    if ( m_Index + 2 <= 1 )
      goto LABEL_6;
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_hUnit.m_Index) >> 9) & 0x3F];
    if ( v5 == 0 )
      goto LABEL_6;
    v6 = &v5[v7->m_hUnit.m_Index & 0x1FF];
    if ( v6 == 0 )
      goto LABEL_6;
    if ( m_Index != v6->m_EHandle.m_Index )
      goto LABEL_6;
    m_pInstance = v6->m_pInstance;
    if ( v6->m_pInstance == 0
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
      || !v7->m_bKnownInvisible
      || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
      || LOBYTE(m_pInstance[71].m_pEntity) != 0 )
    {
      goto LABEL_6;
    }
    v11 = this->m_pBot;
    v12 = v11->m_hUnit.m_Index;
    if ( v12 + 2 <= 1
      || (v13 = v11->m_hUnit.m_Index, (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v13 >> 9) & 0x3F]) == 0)
      || (v15 = &v14[v13 & 0x1FF]) == 0
      || v12 != v15->m_EHandle.m_Index
      || (v16 = v15->m_pInstance, v15->m_pInstance == 0)
      || !v16->m_bIsDOTANPC )
    {
      v16 = 0;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(v16);
    if ( this->m_iRadius <= fsqrt(
                              ((v7->m_vLastSeenLoc.x - AbsOrigin->x) * (v7->m_vLastSeenLoc.x - AbsOrigin->x))
                            + ((v7->m_vLastSeenLoc.y - AbsOrigin->y) * (v7->m_vLastSeenLoc.y - AbsOrigin->y))) )
      goto LABEL_6;
    v18 = 0.0;
    if ( g_pGameRules != 0 )
      v18 = *&g_pGameRules[18].m_szQuestName[20];
    if ( (v18 - v7->m_fLastSeen) >= 2.0 )
      goto LABEL_6;
    m_pBot = this->m_pBot;
    v19 = m_pBot->m_pBotModes[2];
    if ( v19 != 0 )
      break;
LABEL_7:
    ++v2;
  }
  if ( (*(v19->_vptr_CDOTA_BotMode + 17))(v19, m_pInstance) <= 1.0 )
  {
LABEL_6:
    m_pBot = this->m_pBot;
    goto LABEL_7;
  }
  return 3;
}


// CDOTA_Bot_AbilityUsage_Dust::UseAbility  (line 58, @0x000000000289b2d0, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Dust::UseAbility(CDOTA_Bot_AbilityUsage_Dust *const this)
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


