
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Viper::CDOTA_Bot_Hero_Viper  (line 21, @0x00000000028e7330, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
void __fastcall CDOTA_Bot_Hero_Viper::CDOTA_Bot_Hero_Viper(
        CDOTA_Bot_Hero_Viper *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rdi
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rdi
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42D1FB0;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityPoisonAttack = CDOTA_BaseNPC::FindAbilityByName(v6, "viper_poison_attack", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityNethertoxin = CDOTA_BaseNPC::FindAbilityByName(v8, "viper_nethertoxin", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityViperStrike = CDOTA_BaseNPC::FindAbilityByName(v10, "viper_viper_strike", 1);
}


// CDOTA_Bot_Hero_Viper::GetAggroFreeAttackAbility  (line 31, @0x00000000028e4cb0, libserver.so)  // inlines: Get, GetInstance, GetUnit, IsFullyCastable, IsTrained, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CEntityHandle::operator CEntityInstance*
CDOTABaseAbility *__fastcall CDOTA_Bot_Hero_Viper::GetAggroFreeAttackAbility(CDOTA_Bot_Hero_Viper *const this)
{
  CDOTABaseAbility *m_pAbilityPoisonAttack; // rbx
  CEntityInstance *v4; // rax

  m_pAbilityPoisonAttack = this->m_pAbilityPoisonAttack;
  if ( m_pAbilityPoisonAttack == 0
    || CDOTABaseAbility::GetEffectiveLevel(this->m_pAbilityPoisonAttack) < 0
    || (*(m_pAbilityPoisonAttack->_vptr_IHandleEntity + 245))(m_pAbilityPoisonAttack) == 0
    || !CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityPoisonAttack)
    || !CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityPoisonAttack, -1) )
  {
    return 0;
  }
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v4 == 0 || BYTE3(v4[7]._vptr_IHandleEntity) == 0 )
    v4 = 0;
  if ( *&v4[44].m_iszPrivateVScripts.u.m_Id > 150.0 )
    return this->m_pAbilityPoisonAttack;
  else
    return 0;
}


// CDOTA_Bot_AbilityUsage_Viper_PoisonAttack::CDOTA_Bot_AbilityUsage_Viper_PoisonAttack  (line 43, @0x00000000028e7420, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Viper_PoisonAttack::CDOTA_Bot_AbilityUsage_Viper_PoisonAttack(
        CDOTA_Bot_AbilityUsage_Viper_PoisonAttack *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D20B0;
}


// CDOTA_Bot_AbilityUsage_Viper_PoisonAttack::GetCurrentUsageDesire  (line 50, @0x00000000028e4f70, libserver.so)  // inlines: Get, GetAggroTarget, GetAutoCastState, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*
int __fastcall CDOTA_Bot_AbilityUsage_Viper_PoisonAttack::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Viper_PoisonAttack *const this)
{
  int v2; // eax
  CEntityInstance *v3; // rax
  bool v4; // al
  CEntityInstance *v6; // rax
  CEntityInstance *v7; // r12
  const CEntityHandle *v8; // rdi
  CEntityInstance *v9; // rax
  const CEntityHandle *v10; // rdi
  CEntityInstance *v11; // rax

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 == 2 )
    goto LABEL_11;
  if ( v2 > 2 )
  {
    if ( v2 == 17 )
    {
      v3 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v3 == 0 || BYTE3(v3[7]._vptr_IHandleEntity) == 0 )
        v3 = 0;
      v4 = *&v3[44].m_iszPrivateVScripts.u.m_Id > 200.0;
      return 3 * (v4 != this->m_pAbility->m_bAutoCastState.m_Value);
    }
    if ( v2 != 18 )
    {
LABEL_9:
      v4 = 0;
      return 3 * (v4 != this->m_pAbility->m_bAutoCastState.m_Value);
    }
LABEL_11:
    v4 = 1;
    return 3 * (v4 != this->m_pAbility->m_bAutoCastState.m_Value);
  }
  if ( v2 != 1 )
    goto LABEL_9;
  v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  v7 = v6;
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
    v8 = v6;
  else
    v8 = 0;
  v9 = CEntityHandle::operator CEntityInstance *(v8 + 716);
  if ( v9 == 0 || BYTE3(v9[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_9;
  if ( v7 == 0 || (v10 = v7, BYTE3(v7[7]._vptr_IHandleEntity) == 0) )
    v10 = 0;
  v11 = CEntityHandle::operator CEntityInstance *(v10 + 716);
  if ( v11 == 0 || BYTE3(v11[7]._vptr_IHandleEntity) == 0 )
    v11 = 0;
  if ( (v11[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
    goto LABEL_9;
  if ( v7 == 0 || BYTE3(v7[7]._vptr_IHandleEntity) == 0 )
    v7 = 0;
  v4 = *&v7[44].m_iszPrivateVScripts.u.m_Id > 200.0;
  return 3 * (v4 != this->m_pAbility->m_bAutoCastState.m_Value);
}


// CDOTA_Bot_AbilityUsage_Viper_PoisonAttack::UseAbility  (line 92, @0x00000000028e2580, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Viper_PoisonAttack::UseAbility(
        CDOTA_Bot_AbilityUsage_Viper_PoisonAttack *const this)
{
  CDOTA_Bot_Hero_Viper *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Viper_ViperStrike::CDOTA_Bot_AbilityUsage_Viper_ViperStrike  (line 101, @0x00000000028e7440, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Viper_ViperStrike::CDOTA_Bot_AbilityUsage_Viper_ViperStrike(
        CDOTA_Bot_AbilityUsage_Viper_ViperStrike *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D2110;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Viper_ViperStrike::GetCurrentUsageDesire  (line 108, @0x00000000028e50d0, libserver.so)  // inlines: Get, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetTargetNPC, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsValidBotTarget, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=
// calls: CEntityHandle::operator CEntityInstance*, DOTACommander, CDOTA_Commander::GetIllusionState, IsBotTargetStatusValidCore
int __fastcall CDOTA_Bot_AbilityUsage_Viper_ViperStrike::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Viper_ViperStrike *const this)
{
  CEntityInstance *v2; // rax
  CDOTA_BaseNPC_Hero *v3; // r12
  int m_Id; // eax
  unsigned __int8 (__fastcall *v6)(CDOTA_Bot_AbilityUsage_Viper_ViperStrike *const, _QWORD); // r13
  CDOTA_Commander *v7; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rsi
  CDOTA_Bot *m_pBot; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_5;
  v2 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  v3 = v2;
  if ( v2 == 0 )
    goto LABEL_5;
  if ( BYTE3(v2[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_5;
  m_Id = v2[43].m_iszPrivateVScripts.u.m_Id;
  if ( (m_Id & 1) == 0 || (m_Id & 3) == 0 && !this->m_bUseOnCreeps )
    goto LABEL_5;
  v6 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
  v7 = DOTACommander();
  IllusionState = CDOTA_Commander::GetIllusionState(v7, v3);
  if ( v6(this, IllusionState) == 0 )
    goto LABEL_5;
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v9 == 0 || (v10 = v9, BYTE3(v9[7]._vptr_IHandleEntity) == 0) )
    v10 = 0;
  if ( IsBotTargetStatusValidCore(v3, v10, 251, -1.0, this->m_pAbility)
    && (m_pBot = v3->m_pBot) != 0
    && (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode) == 4 )
  {
    m_pEntity = v3->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v14 = 0x7FFF;
      else
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hDesiredTarget.m_Index) = v14 | this->m_hDesiredTarget.m_Index & 0x8000;
      this->m_hDesiredTarget.m_Index = (v13 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
      return 3;
    }
    else
    {
      this->m_hDesiredTarget.m_Index = -1;
      return 3;
    }
  }
  else
  {
LABEL_5:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
}


// CDOTA_Bot_AbilityUsage_Viper_ViperStrike::UseAbility  (line 135, @0x00000000028e3e50, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Viper_ViperStrike::UseAbility(
        CDOTA_Bot_AbilityUsage_Viper_ViperStrike *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Viper *m_pBot; // r14
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


