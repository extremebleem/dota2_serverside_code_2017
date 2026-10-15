
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Drow::CDOTA_Bot_Hero_Drow  (line 21, @0x00000000028b7a80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::CDOTA_Bot, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "drow_ranger_frost_arrows", "drow_ranger_wave_of_silence"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Hero_Drow::CDOTA_Bot_Hero_Drow(
        CDOTA_Bot_Hero_Drow *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42CB8D0;
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
  this->m_pAbilityFrostArrows = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "drow_ranger_frost_arrows", 1);
  v9 = this->m_hUnit.m_Index;
  if ( v9 + 2 <= 1
    || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v11 = &v10[this->m_hUnit.m_Index & 0x1FF]) == 0
    || v9 != v11->m_EHandle.m_Index
    || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
    || !v12->m_bIsDOTANPC )
  {
    v12 = 0;
  }
  this->m_pAbilityWaveOfSilence = CDOTA_BaseNPC::FindAbilityByName(v12, "drow_ranger_wave_of_silence", 1);
}


// CDOTA_Bot_Hero_Drow::GetAggroFreeAttackAbility  (line 30, @0x00000000028b5cb0, libserver.so)  // inlines: Get, GetInstance, GetUnit, IsFullyCastable, IsTrained, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CEntityHandle::operator CEntityInstance*
CDOTABaseAbility *__fastcall CDOTA_Bot_Hero_Drow::GetAggroFreeAttackAbility(CDOTA_Bot_Hero_Drow *const this)
{
  CDOTABaseAbility *m_pAbilityFrostArrows; // rbx
  CEntityInstance *v4; // rax

  m_pAbilityFrostArrows = this->m_pAbilityFrostArrows;
  if ( m_pAbilityFrostArrows == 0
    || CDOTABaseAbility::GetEffectiveLevel(this->m_pAbilityFrostArrows) < 0
    || (*(m_pAbilityFrostArrows->_vptr_IHandleEntity + 245))(m_pAbilityFrostArrows) == 0
    || !CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityFrostArrows)
    || !CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityFrostArrows, -1) )
  {
    return 0;
  }
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v4 == 0 || BYTE3(v4[7]._vptr_IHandleEntity) == 0 )
    v4 = 0;
  if ( *&v4[44].m_iszPrivateVScripts.u.m_Id > 200.0 )
    return this->m_pAbilityFrostArrows;
  else
    return 0;
}


// CDOTA_Bot_AbilityUsage_Drow_FrostArrows::CDOTA_Bot_AbilityUsage_Drow_FrostArrows  (line 42, @0x00000000028b7bc0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Drow_FrostArrows::CDOTA_Bot_AbilityUsage_Drow_FrostArrows(
        CDOTA_Bot_AbilityUsage_Drow_FrostArrows *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CB9D0;
}


// CDOTA_Bot_AbilityUsage_Drow_FrostArrows::GetCurrentUsageDesire  (line 49, @0x00000000028b4080, libserver.so)  // inlines: GetAutoCastState
int __fastcall CDOTA_Bot_AbilityUsage_Drow_FrostArrows::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Drow_FrostArrows *const this)
{
  int v2; // eax
  char v3; // dl

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 == 2 || (v3 = 0, v2 == 18) )
    v3 = 1;
  return 3 * (v3 != this->m_pAbility->m_bAutoCastState.m_Value);
}


// CDOTA_Bot_AbilityUsage_Drow_FrostArrows::UseAbility  (line 67, @0x00000000028b42f0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Drow_FrostArrows::UseAbility(
        CDOTA_Bot_AbilityUsage_Drow_FrostArrows *const this)
{
  CDOTA_Bot_Hero_Drow *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence::CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence  (line 76, @0x00000000028b7be0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence::CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence(
        CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CBA30;
}


// CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence::FindFilter  (line 83, @0x00000000028b5950, libserver.so)  // inlines: Get, GetInstance, IsFullyCastable, IsTrained, ToDOTABaseNPC, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
bool __fastcall CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence::FindFilter(
        CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence *const this,
        const CEntityHandle *hUnit)
{
  CEntityInstance *v2; // rax
  CDOTA_BaseNPC *v3; // r13
  int v4; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v6; // r12
  bool result; // al

  v2 = CEntityHandle::operator CEntityInstance *(hUnit);
  v3 = v2;
  if ( v2 == 0 || BYTE3(v2[7]._vptr_IHandleEntity) == 0 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v3, v4);
    v6 = AbilityByIndex;
    if ( AbilityByIndex != 0
      && CDOTABaseAbility::GetEffectiveLevel(AbilityByIndex) >= 0
      && (*(v6->_vptr_IHandleEntity + 245))(v6) != 0
      && CDOTABaseAbility::IsOwnersManaEnough(v6) )
    {
      result = CDOTABaseAbility::IsOwnersGoldEnough(v6, -1);
      if ( result )
        break;
    }
    if ( ++v4 == 24 )
      return 0;
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence::GetCurrentUsageDesire  (line 103, @0x00000000028bb250, libserver.so)  // inlines: Get, GetInstance, GetTeamNumber, GetUnit, ToDOTABaseNPC, operator CBaseEntity*, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetAoELocation
// strings: "wave_width"
int __fastcall CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence *const this)
{
  int v2; // r13d
  int LevelSpecialValue; // r12d
  int v4; // r13d
  CEntityInstance *v5; // rax
  const CBaseEntity *v6; // rdi
  const Vector *AbsOrigin; // r14
  CEntityInstance *v8; // rax
  CEntityInstance *v9; // rdx
  int result; // eax
  int iTargetCount; // [rsp+2Ch] [rbp-34h] BYREF
  Vector vTargetLoc; // [rsp+30h] [rbp-30h] BYREF

  v2 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "wave_width", -1, 1);
  v4 = (v2 + 100.0);
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v8 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
    v9 = v8;
  else
    v9 = 0;
  CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
    this,
    HIBYTE(v9[7].m_CScriptComponent),
    1,
    2,
    AbsOrigin,
    v4,
    0.0,
    LevelSpecialValue,
    &vTargetLoc,
    &iTargetCount);
  result = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( result == 2 && iTargetCount > 0 )
  {
    this->m_vDesiredLocation = vTargetLoc;
  }
  else
  {
    this->m_vDesiredLocation = vec3_invalid;
    return 0;
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence::UseAbility  (line 133, @0x00000000028b45a0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence::UseAbility(
        CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence *const this)
{
  CDOTA_Bot_Hero_Drow *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


