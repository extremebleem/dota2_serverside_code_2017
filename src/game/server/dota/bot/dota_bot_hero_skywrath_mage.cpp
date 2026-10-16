
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_SkywrathMage::CDOTA_Bot_Hero_SkywrathMage  (line 21, @0x00000000028d6da0, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "skywrath_mage_arcane_bolt", "skywrath_mage_concussive_shot", "skywrath_mage_ancient_seal", "skywrath_mage_mystic_flare"
void __fastcall CDOTA_Bot_Hero_SkywrathMage::CDOTA_Bot_Hero_SkywrathMage(
        CDOTA_Bot_Hero_SkywrathMage *const this,
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
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42D0370;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityArcaneBolt = CDOTA_BaseNPC::FindAbilityByName(v6, "skywrath_mage_arcane_bolt", 0);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityConcussiveShot = CDOTA_BaseNPC::FindAbilityByName(v8, "skywrath_mage_concussive_shot", 0);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityAncientSeal = CDOTA_BaseNPC::FindAbilityByName(v10, "skywrath_mage_ancient_seal", 0);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityMysticFlare = CDOTA_BaseNPC::FindAbilityByName(v12, "skywrath_mage_mystic_flare", 0);
}


// CDOTA_Bot_Hero_SkywrathMage::GetGankDistance  (line 32, @0x00000000028d3390, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTA_Bot::GetGankDistance, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
int __fastcall CDOTA_Bot_Hero_SkywrathMage::GetGankDistance(CDOTA_Bot_Hero_SkywrathMage *const this)
{
  CDOTABaseAbility *m_pAbilityArcaneBolt; // rbx

  m_pAbilityArcaneBolt = this->m_pAbilityArcaneBolt;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityArcaneBolt) >= 0
    && (*(m_pAbilityArcaneBolt->_vptr_IHandleEntity + 245))(m_pAbilityArcaneBolt) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityArcaneBolt)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityArcaneBolt, -1) )
  {
    return (*(this->m_pAbilityArcaneBolt->_vptr_IHandleEntity + 226))(this->m_pAbilityArcaneBolt, &vec3_origin, 0) + 200;
  }
  else
  {
    return CDOTA_Bot::GetGankDistance(this);
  }
}


// CDOTA_Bot_Hero_SkywrathMage::IsWillingToSpendMana  (line 46, @0x00000000028d42f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetMana, GetMaxMana, GetUnit, IndexToIdentity, IsTrained, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetEffectiveLevel
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_Hero_SkywrathMage::IsWillingToSpendMana(CDOTA_Bot_Hero_SkywrathMage *const this, int iMana)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  float v5; // xmm1_4
  bool result; // al
  CEntityInstance *m_pInstance; // rdx
  CDOTABaseAbility **v8; // rbx
  CDOTABaseAbility *m_pAbilityAncientSeal; // r12
  float v10; // xmm0_4
  CDOTABaseAbility *m_pAbilityMysticFlare; // rax
  int v12; // r13d
  float v13; // xmm0_4
  CEntityInstance *v14; // rcx
  CDOTABaseAbility *pAbilities[3]; // [rsp+0h] [rbp-40h] BYREF
  _BYTE v16[40]; // [rsp+18h] [rbp-28h] BYREF

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hUnit.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && (m_pInstance = v4->m_pInstance) != 0 )
  {
    result = BYTE3(m_pInstance[7]._vptr_IHandleEntity);
    if ( result )
    {
      v13 = *&m_pInstance[44].m_worldGroupId.m_nHashCode;
      v14 = m_pInstance;
    }
    else
    {
      LODWORD(v13) = 7496;
      v14 = 0;
    }
    if ( v13 == *&v14[44].m_iszPrivateVScripts.u.m_Id )
      return 1;
    if ( result )
    {
      v5 = iMana;
      result = 0;
      if ( (*&m_pInstance[44].m_iszPrivateVScripts.u.m_Id - iMana) < 300.0 )
        return result;
      goto LABEL_7;
    }
    v5 = iMana;
    if ( (0.0 - iMana) < 300.0 )
      return result;
  }
  else
  {
    v5 = iMana;
    result = 0;
    if ( (0.0 - iMana) < 300.0 )
      return result;
  }
  m_pInstance = 0;
LABEL_7:
  v8 = pAbilities;
  m_pAbilityAncientSeal = this->m_pAbilityAncientSeal;
  v10 = *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id;
  pAbilities[1] = this->m_pAbilityConcussiveShot;
  m_pAbilityMysticFlare = this->m_pAbilityMysticFlare;
  pAbilities[0] = m_pAbilityAncientSeal;
  v12 = (v10 - v5);
  pAbilities[2] = m_pAbilityMysticFlare;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityAncientSeal) < 0 )
    goto LABEL_9;
  while ( 1 )
  {
    v12 -= (*(m_pAbilityAncientSeal->_vptr_IHandleEntity + 273))(m_pAbilityAncientSeal, 0xFFFFFFFFLL);
LABEL_9:
    if ( ++v8 == v16 )
      break;
    while ( 1 )
    {
      m_pAbilityAncientSeal = *v8;
      if ( CDOTABaseAbility::GetEffectiveLevel(*v8) >= 0 )
        break;
      if ( ++v8 == v16 )
        return v12 > 0;
    }
  }
  return v12 > 0;
}


// CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt::CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt  (line 75, @0x00000000028d6ec0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt::CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt(
        CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D0470;  // vptr: CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt
  this->m_hDesiredTarget.m_Index = -1;
  this->m_bUseOnCreeps = 1;
}


// CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt::GetCurrentUsageDesire  (line 84, @0x00000000028d7db0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetBotByIndex, GetEHandle, GetEntryIndex, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetTargetNPC, GetUnit, IsBotTargetStatusValid, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=, ~CUtlVector
// calls: CDOTA_Bot::GetNearbyCreeps, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CDOTA_TeamCommander::GetOpposingTeamCommander, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, _Unwind_Resume
// globals: jpt_28D7DEC
int __fastcall CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt *const this)
{
  CDOTA_Bot_Hero_SkywrathMage *v2; // r12
  unsigned __int8 (__fastcall *v3)(CDOTA_Bot_Hero_SkywrathMage *, _QWORD); // r13
  unsigned int v4; // eax
  CDOTABaseAbility *m_pAbility; // rdi
  int v6; // eax
  CDOTA_Bot_Hero_SkywrathMage *v8; // r12
  unsigned __int8 (__fastcall *v9)(CDOTA_Bot_Hero_SkywrathMage *, _QWORD); // r13
  unsigned int v10; // eax
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // r12
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rsi
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  CEntityInstance *v18; // rax
  CEntityInstance *v19; // rax
  CDOTA_BaseNPC *v20; // rsi
  CDOTA_Bot_Hero_SkywrathMage *m_pBot; // r12
  unsigned __int8 (__fastcall *v22)(CDOTA_Bot_Hero_SkywrathMage *, _QWORD); // r13
  unsigned int v23; // eax
  CDOTA_Bot_Hero_SkywrathMage *v24; // rdi
  __int64 v25; // r12
  CDOTA_TeamCommander *v26; // rax
  const CEntityHandle *v27; // rdi
  CEntityInstance *v28; // rax
  CDOTA_BaseNPC *v29; // r13
  CEntityInstance *v30; // rax
  CDOTA_BaseNPC *v31; // rsi
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CEntityInstance *v33; // rax
  const CBaseEntity *v34; // rdi
  const Vector *AbsOrigin; // rax
  CEntityInstance *v36; // rax
  CDOTA_BaseNPC *v37; // r13
  CEntityInstance *v38; // rax
  CDOTA_BaseNPC *v39; // rsi
  CEntityIdentity *v40; // rdx
  int v41; // eax
  __int16 v42; // cx
  float fMaxRange; // [rsp+Ch] [rbp-44h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hCreeps; // [rsp+10h] [rbp-40h] BYREF

  switch ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) )
  {
    case 1u:
    case 5u:
    case 6u:
      m_pBot = this->m_pBot;
      v22 = *(m_pBot->_vptr_CDOTA_Bot + 10);
      v23 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
      v24 = m_pBot;
      v25 = 0;
      if ( v22(v24, v23) == 0 )
        goto LABEL_5;
      while ( 1 )
      {
        if ( v25 >= CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander)->m_BotList.m_Size )
          goto LABEL_5;
        OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
        if ( v25 < OpposingTeamCommander->m_BotList.m_Size
          && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v25] != 0 )
        {
          v26 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
          v27 = 0;
          if ( v25 < v26->m_BotList.m_Size )
            v27 = v26->m_BotList.m_Memory.m_pMemory[v25];
          v28 = CEntityHandle::operator CEntityInstance *(v27 + 39);
          if ( v28 != 0 && BYTE3(v28[7]._vptr_IHandleEntity) != 0 )
            v29 = v28;
          else
            v29 = 0;
          if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v29) )
          {
            fMaxRange = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
            v30 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v30 != 0 && BYTE3(v30[7]._vptr_IHandleEntity) != 0 )
              v31 = v30;
            else
              v31 = 0;
            if ( IsBotTargetStatusValidCore(v29, v31, 251, fMaxRange, this->m_pAbility) )
              break;
          }
        }
        ++v25;
      }
      if ( v29 != 0 )
      {
        m_pEntity = v29->m_pEntity;
        if ( m_pEntity != 0 )
          goto LABEL_16;
      }
      goto LABEL_70;
    case 2u:
      v18 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v18 == 0
        || BYTE3(v18[7]._vptr_IHandleEntity) == 0
        || (v12 = v18, (v18[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
      {
        v12 = 0;
      }
      if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v12) )
        goto LABEL_5;
      v19 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
        v20 = v19;
      else
        v20 = 0;
      if ( !IsBotTargetStatusValidCore(v12, v20, 251, -1.0, this->m_pAbility) )
        goto LABEL_5;
      if ( v12 == 0 )
        goto LABEL_70;
LABEL_15:
      m_pEntity = v12->m_pEntity;
      if ( m_pEntity != 0 )
      {
LABEL_16:
        v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v17 = 0x7FFF;
        else
          v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hDesiredTarget.m_Index) = v17 | this->m_hDesiredTarget.m_Index & 0x8000;
        this->m_hDesiredTarget.m_Index = (v16 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
        return 1;
      }
      else
      {
LABEL_70:
        this->m_hDesiredTarget.m_Index = -1;
        return 1;
      }
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0x11u:
      v2 = this->m_pBot;
      v3 = *(v2->_vptr_CDOTA_Bot + 10);
      v4 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
      if ( v3(v2, v4) == 0 )
        goto LABEL_5;
      m_pAbility = this->m_pAbility;
      hCreeps.m_Size = 0;
      hCreeps.m_Memory.m_pMemory = 0;
      hCreeps.m_Memory.m_nAllocationCount = 0;
      hCreeps.m_Memory.m_nGrowSize = 0;
      v6 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
      CDOTA_Bot::GetNearbyCreeps(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hCreeps, v6);
      if ( hCreeps.m_Size == 0 )
        goto LABEL_4;
      v33 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
        v34 = v33;
      else
        v34 = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v34);
      SortEHANDLEVectorByLocation(&hCreeps, AbsOrigin, 0);
      v36 = CEntityHandle::operator CEntityInstance *(hCreeps.m_Memory.m_pMemory);
      if ( v36 != 0 && BYTE3(v36[7]._vptr_IHandleEntity) != 0 )
        v37 = v36;
      else
        v37 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v37)
        && ((v38 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) == 0
         || BYTE3(v38[7]._vptr_IHandleEntity) == 0
          ? (v39 = 0)
          : (v39 = v38),
            IsBotTargetStatusValidCore(v37, v39, 251, -1.0, this->m_pAbility)) )
      {
        if ( v37 != 0 && (v40 = v37->m_pEntity) != 0 )
        {
          v41 = (v40->m_EHandle.m_Index >> 15) - (v40->m_flags & 1);
          v42 = 0x7FFF;
          if ( v40->m_EHandle.m_Index != -1 )
            v42 = v40->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hDesiredTarget.m_Index) = v42 | this->m_hDesiredTarget.m_Index & 0x8000;
          this->m_hDesiredTarget.m_Index = (v41 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hDesiredTarget.m_Index = -1;
        }
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hCreeps);
        return 1;
      }
      else
      {
LABEL_4:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hCreeps);
LABEL_5:
        this->m_hDesiredTarget.m_Index = -1;
        return 0;
      }
    case 0x14u:
      v8 = this->m_pBot;
      v9 = *(v8->_vptr_CDOTA_Bot + 10);
      v10 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
      if ( v9(v8, v10) != 0 )
      {
        v11 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
          v12 = v11;
        else
          v12 = 0;
        if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v12) && (*(v12->_vptr_IHandleEntity + 403))(v12) != 0 )
        {
          v13 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v13 == 0 || (v14 = v13, BYTE3(v13[7]._vptr_IHandleEntity) == 0) )
            v14 = 0;
          if ( IsBotTargetStatusValidCore(v12, v14, 219, -1.0, this->m_pAbility) )
            goto LABEL_15;
        }
      }
      goto LABEL_5;
    default:
      goto LABEL_5;
  }
}


// CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt::UseAbility  (line 184, @0x00000000028d3860, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt::UseAbility(
        CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_SkywrathMage *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt::UseOnIllusionState  (line 195, @0x00000000028d2000, libserver.so)
bool __fastcall CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt::UseOnIllusionState(
        CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt *const this,
        DOTA_BOT_ILLUSION_STATE iState)
{
  return iState <= DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_UNKNOWN;
}


// CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot::CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot  (line 214, @0x00000000028d6ef0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot::CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot(
        CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D04D0;  // vptr: CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot
}


// CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot::GetCurrentUsageDesire  (line 221, @0x00000000028d83a0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetActiveModeDesire, GetEntityIdentity, GetEntryIndex, GetInstance, GetTarget, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValidBotTarget, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=, operator==<CBaseEntity>, ~CUtlVector
// calls: DOTACommander, CDOTA_Commander::GetIllusionState, CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot *const this)
{
  int v2; // eax
  int v4; // r12d
  uint32 m_Index; // r13d
  uint32 v6; // r14d
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r13
  unsigned __int8 (__fastcall *v10)(CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot *const, _QWORD); // r14
  CDOTA_Commander *v11; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rsi
  CDOTA_Bot_Hero_SkywrathMage *m_pBot; // r12
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // rdi
  CDOTABaseAbility *m_pAbility; // rdi
  int v19; // eax
  CEntityInstance *v20; // rax
  const CBaseEntity *v21; // rdi
  const Vector *AbsOrigin; // rax
  float fMaxRange; // [rsp+Ch] [rbp-64h]
  EHANDLE hTarget; // [rsp+10h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemies; // [rsp+20h] [rbp-50h] BYREF

  LOWORD(hTarget.m_Index) = -1;
  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  switch ( v2 )
  {
    case 4:
      m_pBot = this->m_pBot;
      if ( m_pBot->m_fModeDesires[(*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode)] <= 0.89999998
        || ((v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) == 0
         || BYTE3(v16[7]._vptr_IHandleEntity) == 0
          ? (v17 = 0)
          : (v17 = v16),
            CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v17) < 2.0) )
      {
        v6 = 1;
        m_Index = -1;
        v4 = 0;
      }
      else
      {
        m_pAbility = this->m_pAbility;
        hEnemies.m_Size = 0;
        hEnemies.m_Memory.m_pMemory = 0;
        hEnemies.m_Memory.m_nAllocationCount = 0;
        hEnemies.m_Memory.m_nGrowSize = 0;
        v19 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
        CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEnemies, v19);
        v20 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
          v21 = v20;
        else
          v21 = 0;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v21);
        SortEHANDLEVectorByLocation(&hEnemies, AbsOrigin, 0);
        v4 = 0;
        v6 = 1;
        m_Index = -1;
        if ( hEnemies.m_Size != 0 )
        {
          LOBYTE(v4) = 2;
          m_Index = hEnemies.m_Memory.m_pMemory->m_Index;
          hTarget.m_Index = hEnemies.m_Memory.m_pMemory->m_Index;
          v6 = hEnemies.m_Memory.m_pMemory->m_Index + 2;
        }
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemies);
      }
      break;
    case 18:
      v4 = 2;
      m_Index = this->m_pBot->m_hTarget.m_Index;
      LOWORD(hTarget.m_Index) = m_Index;
      v6 = m_Index + 2;
      break;
    case 2:
      v4 = 3;
      m_Index = this->m_pBot->m_hTarget.m_Index;
      LOWORD(hTarget.m_Index) = m_Index;
      v6 = m_Index + 2;
      break;
    default:
      return 0;
  }
  if ( v6 <= 1 )
    return 0;
  v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hTarget.m_Index) >> 9) & 0x3F];
  if ( v7 == 0 )
    return 0;
  v8 = &v7[hTarget.m_Index & 0x1FF];
  if ( v8 == 0 )
    return 0;
  if ( v8->m_EHandle.m_Index != m_Index )
    return 0;
  m_pInstance = v8->m_pInstance;
  if ( v8->m_pInstance == 0
    || v4 == 0
    || !m_pInstance->m_bIsDOTANPC
    || (m_pInstance->m_iUnitType & 3) == 0 && !this->m_bUseOnCreeps )
  {
    return 0;
  }
  if ( (m_pInstance->m_iUnitType & 1) != 0 )
  {
    v10 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
    v11 = DOTACommander();
    IllusionState = CDOTA_Commander::GetIllusionState(v11, m_pInstance);
    if ( v10(this, IllusionState) == 0 )
      return 0;
  }
  fMaxRange = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  v13 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v13 == 0 || (v14 = v13, BYTE3(v13[7]._vptr_IHandleEntity) == 0) )
    v14 = 0;
  if ( !IsBotTargetStatusValidCore(m_pInstance, v14, 251, fMaxRange, this->m_pAbility) )
    return 0;
  return v4;
}


// CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot::UseAbility  (line 275, @0x00000000028d23f0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot::UseAbility(
        CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot *const this)
{
  CDOTA_Bot_Hero_SkywrathMage *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal::CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal  (line 284, @0x00000000028d6f10, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal::CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal(
        CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D0530;  // vptr: CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal::GetCurrentUsageDesire  (line 292, @0x00000000028d5940, libserver.so)  // inlines: Get, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetTargetNPC, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsValidBotTarget, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=
// calls: CEntityHandle::operator CEntityInstance*, DOTACommander, CDOTA_Commander::GetIllusionState, IsBotTargetStatusValidCore
int __fastcall CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal *const this)
{
  CEntityInstance *v2; // rax
  CDOTA_BaseNPC_Hero *v3; // r12
  int m_Id; // eax
  unsigned __int8 (__fastcall *v6)(CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal *const, _QWORD); // r13
  CDOTA_Commander *v7; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rsi
  CEntityIdentity *m_pEntity; // rdx
  int v12; // eax
  __int16 v13; // cx

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
  if ( IsBotTargetStatusValidCore(v3, v10, 251, -1.0, this->m_pAbility) )
  {
    m_pEntity = v3->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v13 = 0x7FFF;
      else
        v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hDesiredTarget.m_Index) = v13 | this->m_hDesiredTarget.m_Index & 0x8000;
      this->m_hDesiredTarget.m_Index = (v12 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
      return 4;
    }
    else
    {
      this->m_hDesiredTarget.m_Index = -1;
      return 4;
    }
  }
  else
  {
LABEL_5:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
}


// CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal::UseAbility  (line 318, @0x00000000028d3be0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal::UseAbility(
        CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_SkywrathMage *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare::CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare  (line 331, @0x00000000028d6f40, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare::CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare(
        CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  vec_t z; // eax

  this->m_pAbility = pAbility;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D0590;  // vptr: CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  z = vec3_invalid.z;
  *&this->m_vDesiredLocation.x = *&vec3_invalid.x;
  this->m_vDesiredLocation.z = z;
}


// CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare::GetCurrentUsageDesire  (line 339, @0x00000000028d5040, libserver.so)  // inlines: Get, GetInstance, GetTargetNPC, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsTrained, IsValidBotTarget, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, operator CBaseEntity*, operator*, operator+, operator=
// calls: CEntityHandle::operator CEntityInstance*, DOTACommander, CDOTA_Commander::GetIllusionState, IsBotTargetStatusValidCore, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::HasIncomingStun, CDOTA_TeamCommander::IsMovementImpaired, CDOTALocomotor::GetAverageVelocityOverTime, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetCooldownTimeRemaining
int __fastcall CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare *const this)
{
  CEntityInstance *v2; // rax
  CEntityInstance *v3; // r12
  int m_Id; // eax
  unsigned __int8 (__fastcall *v6)(CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare *const, _QWORD); // r13
  CDOTA_Commander *v7; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rsi
  CDOTALocomotor *v11; // rax
  float v12; // xmm1_4
  __m128i v13; // xmm3
  float v14; // r13d
  float v15; // xmm1_4
  const Vector *AbsOrigin; // rax
  vec_t v17; // xmm0_4
  vec_t v18; // xmm1_4
  CDOTA_Bot_Hero_SkywrathMage *m_pBot; // r13
  char v20; // al
  CDOTABaseAbility *m_pAbilityConcussiveShot; // rdi
  bool v22; // zf
  int (**vptr_IHandleEntity)(...); // rax
  int v24; // r13d
  CEntityInstance *v25; // rax
  CDOTALocomotor *v26; // rax
  float v27; // xmm1_4
  __m128i v28; // xmm4
  float v29; // r13d
  float v30; // xmm1_4
  const Vector *v31; // rax
  vec_t v32; // xmm0_4
  vec_t v33; // xmm1_4
  float v34; // [rsp+Ch] [rbp-34h]
  float v35; // [rsp+Ch] [rbp-34h]
  float v36; // [rsp+Ch] [rbp-34h]
  float v37; // [rsp+Ch] [rbp-34h]
  unsigned __int64 v38; // [rsp+10h] [rbp-30h]
  unsigned __int64 v39; // [rsp+10h] [rbp-30h]

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
  if ( !IsBotTargetStatusValidCore(v3, v10, 251, -1.0, this->m_pAbility) )
    goto LABEL_5;
  if ( (v3[58]._vptr_IHandleEntity & 0x20) != 0
    || CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v3) )
  {
    this->m_vDesiredLocation = *CBaseEntity::GetAbsOrigin(v3);
    return 3;
  }
  if ( CDOTA_TeamCommander::IsMovementImpaired(this->m_pBot->m_pTeamCommander, this->m_pBot, v3) )
  {
    v11 = (*(v3->_vptr_IHandleEntity + 376))(v3);
    v38 = CDOTALocomotor::GetAverageVelocityOverTime(v11, 0.5, v12).m128i_u64[0];
    v13 = v38;
    *v13.m128i_i32 = *&v38 * 0.5;
    v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
    v34 = 0.5 * v15;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    v17 = v34 + AbsOrigin->z;
    v18 = v14 + AbsOrigin->x;
    this->m_vDesiredLocation.y = (*(&v38 + 1) * 0.5) + AbsOrigin->y;
    this->m_vDesiredLocation.z = v17;
    this->m_vDesiredLocation.x = v18;
    return 3;
  }
  m_pBot = this->m_pBot;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pBot->m_pAbilityConcussiveShot) >= 0 )
  {
    v20 = (*(m_pBot->m_pAbilityConcussiveShot->_vptr_IHandleEntity + 245))(m_pBot->m_pAbilityConcussiveShot);
    m_pAbilityConcussiveShot = m_pBot->m_pAbilityConcussiveShot;
    v22 = v20 == 0;
    vptr_IHandleEntity = m_pAbilityConcussiveShot->_vptr_IHandleEntity;
    if ( !v22 )
    {
      v24 = vptr_IHandleEntity[273](m_pAbilityConcussiveShot, 0xFFFFFFFFLL);
      v35 = ((*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL) + v24);
      v25 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v25 == 0 || BYTE3(v25[7]._vptr_IHandleEntity) == 0 )
        v25 = 0;
      if ( *&v25[44].m_iszPrivateVScripts.u.m_Id < v35 )
        goto LABEL_24;
LABEL_5:
      this->m_vDesiredLocation = vec3_invalid;
      return 0;
    }
    v37 = (vptr_IHandleEntity[242])(m_pAbilityConcussiveShot, 0xFFFFFFFFLL);
    if ( (v37 - CDOTABaseAbility::GetCooldownTimeRemaining(m_pBot->m_pAbilityConcussiveShot)) < 2.0 )
      goto LABEL_5;
  }
LABEL_24:
  v26 = (*(v3->_vptr_IHandleEntity + 376))(v3);
  v39 = CDOTALocomotor::GetAverageVelocityOverTime(v26, 0.5, v27).m128i_u64[0];
  v28 = v39;
  *v28.m128i_i32 = *&v39 * 0.5;
  v29 = COERCE_FLOAT(_mm_cvtsi128_si32(v28));
  v36 = 0.5 * v30;
  v31 = CBaseEntity::GetAbsOrigin(v3);
  v32 = v36 + v31->z;
  v33 = v29 + v31->x;
  this->m_vDesiredLocation.y = (*(&v39 + 1) * 0.5) + v31->y;
  this->m_vDesiredLocation.z = v32;
  this->m_vDesiredLocation.x = v33;
  return 2;
}


// CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare::UseAbility  (line 398, @0x00000000028d2820, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare::UseAbility(
        CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare *const this)
{
  CDOTA_Bot_Hero_SkywrathMage *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


