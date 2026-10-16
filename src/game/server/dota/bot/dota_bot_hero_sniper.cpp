
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Sniper::CDOTA_Bot_Hero_Sniper  (line 21, @0x00000000028e68a0, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "sniper_shrapnel"
void __fastcall CDOTA_Bot_Hero_Sniper::CDOTA_Bot_Hero_Sniper(
        CDOTA_Bot_Hero_Sniper *const this,
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
  this->_vptr_CDOTA_Bot = &off_42D0DD0;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityShrapnel = CDOTA_BaseNPC::FindAbilityByName(v6, "sniper_shrapnel", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityHeadshot = CDOTA_BaseNPC::FindAbilityByName(v8, "sniper_headshot", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityTakeAim = CDOTA_BaseNPC::FindAbilityByName(v10, "sniper_take_aim", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityAssassinate = CDOTA_BaseNPC::FindAbilityByName(v12, "sniper_assassinate", 1);
}


// CDOTA_Bot_Hero_Sniper::GetMaxRoamDistance  (line 32, @0x00000000028e32a0, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_Bot::GetMaxRoamDistance
int __fastcall CDOTA_Bot_Hero_Sniper::GetMaxRoamDistance(CDOTA_Bot_Hero_Sniper *const this)
{
  CDOTABaseAbility *m_pAbilityAssassinate; // rbx

  m_pAbilityAssassinate = this->m_pAbilityAssassinate;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityAssassinate) >= 0
    && (*(m_pAbilityAssassinate->_vptr_IHandleEntity + 245))(m_pAbilityAssassinate) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityAssassinate)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityAssassinate, -1) )
  {
    return CDOTA_Bot::GetMaxRoamDistance(this);
  }
  else
  {
    return 0;
  }
}


// CDOTA_Bot_AbilityUsage_Sniper_Shrapnel::CDOTA_Bot_AbilityUsage_Sniper_Shrapnel  (line 44, @0x00000000028e69d0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Sniper_Shrapnel::CDOTA_Bot_AbilityUsage_Sniper_Shrapnel(
        CDOTA_Bot_AbilityUsage_Sniper_Shrapnel *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D0ED0;  // vptr: CDOTA_Bot_AbilityUsage_Sniper_Shrapnel
  this->m_flLastUsage = -1000.0;
}


// CDOTA_Bot_AbilityUsage_Sniper_Shrapnel::GetCurrentUsageDesire  (line 52, @0x00000000028e59e0, libserver.so)  // inlines: Get, GetBotTargetStatus, GetInstance, GetTargetNPC, GetUnit, IsFullyCastable, IsTrained, ToDOTABaseNPC, operator CBaseEntity*, operator=
// calls: CDOTAGamerules::GetDOTATime, CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, GetBotTargetStatusCore, CDOTABaseAbility::GetEffectiveLevel, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
int __fastcall CDOTA_Bot_AbilityUsage_Sniper_Shrapnel::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Sniper_Shrapnel *const this)
{
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // rsi
  CDOTA_Bot_Hero_Sniper *m_pBot; // r12
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // r13
  CEntityInstance *v8; // rax
  CDOTA_BaseNPC *v9; // rdi
  CDOTABaseAbility *m_pAbilityAssassinate; // r12
  CEntityInstance *v11; // rax
  const CBaseEntity *v12; // rdi
  CDOTA_Bot_AbilityUsage *m_pBotUsage; // rdi

  if ( (CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 1, 0.0) - this->m_flLastUsage) <= 2.0
    || (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
  {
    goto LABEL_2;
  }
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
    v4 = v3;
  else
    v4 = 0;
  if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v4)
    || ((m_pBot = this->m_pBot, (v6 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit)) != 0)
     && BYTE3(v6[7]._vptr_IHandleEntity) != 0
      ? (v7 = v6)
      : (v7 = 0),
        (v8 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget)) == 0
     || BYTE3(v8[7]._vptr_IHandleEntity) == 0
      ? (v9 = 0)
      : (v9 = v8),
        (GetBotTargetStatusCore(v9, v7, -1.0, this->m_pAbility) & 0xFB) != 0
     || (m_pAbilityAssassinate = this->m_pBot->m_pAbilityAssassinate,
         CDOTABaseAbility::GetEffectiveLevel(m_pAbilityAssassinate) >= 0)
     && (*(m_pAbilityAssassinate->_vptr_IHandleEntity + 245))(m_pAbilityAssassinate) != 0
     && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityAssassinate)
     && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityAssassinate, -1)
     && (m_pBotUsage = this->m_pBot->m_pAbilityAssassinate->m_pBotUsage,
         (*(m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(m_pBotUsage) != 0)) )
  {
LABEL_2:
    this->m_vDesiredLocation = vec3_origin;
    return 0;
  }
  else
  {
    v11 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v11 == 0 || (v12 = v11, BYTE3(v11[7]._vptr_IHandleEntity) == 0) )
      v12 = 0;
    this->m_vDesiredLocation = *CBaseEntity::GetAbsOrigin(v12);
    return 3;
  }
}


// CDOTA_Bot_AbilityUsage_Sniper_Shrapnel::UseAbility  (line 81, @0x00000000028e28b0, libserver.so)  // inlines: operator!=
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, CDOTAGamerules::GetDOTATime, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Sniper_Shrapnel::UseAbility(CDOTA_Bot_AbilityUsage_Sniper_Shrapnel *const this)
{
  CDOTA_Bot_Hero_Sniper *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  if ( vec3_origin.x != this->m_vDesiredLocation.x
    || vec3_origin.y != this->m_vDesiredLocation.y
    || vec3_origin.z != this->m_vDesiredLocation.z )
  {
    m_pBot = this->m_pBot;
    m_pAbility = this->m_pAbility;
    v4 = operator new(0xC0u);
    CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
    CDOTA_Bot::PushAction(this->m_pBot, v4);
    this->m_flLastUsage = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 1, 0.0);
  }
}


// CDOTA_Bot_AbilityUsage_Sniper_Assassinate::CDOTA_Bot_AbilityUsage_Sniper_Assassinate  (line 94, @0x00000000028e6a00, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Sniper_Assassinate::CDOTA_Bot_AbilityUsage_Sniper_Assassinate(
        CDOTA_Bot_AbilityUsage_Sniper_Assassinate *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D0F30;  // vptr: CDOTA_Bot_AbilityUsage_Sniper_Assassinate
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Sniper_Assassinate::GetCurrentUsageDesire  (line 101, @0x00000000028e5f00, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetBotByIndex, GetBotTargetStatus, GetEHandle, GetEntryIndex, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, Set, ToDOTABaseNPC, operator CBaseEntity*, operator=
// calls: CDOTA_TeamCommander::GetOpposingTeamCommander, CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, GetBotTargetStatusCore, CDOTA_BaseNPC::GetArmorReductionForDamageType, CBaseEntity::GetHealth, CDOTA_BaseNPC::GetRecentIncomingDPS, CDOTA_Bot::GetTargetBot, CBaseEntity::GetDistanceToEntity, CDOTA_BaseNPC::GetAttackRange
int __fastcall CDOTA_Bot_AbilityUsage_Sniper_Assassinate::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Sniper_Assassinate *const this)
{
  int v2; // eax
  __int64 v3; // rbx
  CDOTA_TeamCommander *v5; // rax
  const CEntityHandle *v6; // rdi
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // r13
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rsi
  int v11; // r14d
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rsi
  CDOTA_Bot_Hero_Sniper *m_pBot; // rbx
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // r13
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // rdi
  int v20; // ebx
  CEntityInstance *v21; // rax
  CDOTA_BaseNPC *v22; // rdi
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // rdi
  CEntityInstance *v25; // rax
  const CBaseEntity *v26; // rdi
  CDOTA_Bot *TargetBot; // rax
  CDOTA_Bot_Hero_Sniper *v28; // r13
  CEntityInstance *v29; // rax
  const CBaseEntity *v30; // rbx
  CEntityInstance *v31; // rax
  const CBaseEntity *v32; // rdi
  __m128i v33; // xmm0
  float v34; // ebx
  CEntityInstance *v35; // rax
  CDOTA_BaseNPC *v36; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v38; // eax
  __int16 v39; // cx
  float fMaxRange; // [rsp+Ch] [rbp-24h]
  float fMaxRangeb; // [rsp+Ch] [rbp-24h]
  float fMaxRangea; // [rsp+Ch] [rbp-24h]

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 != 2 )
  {
    v3 = 0;
    if ( v2 != 4 )
    {
      while ( v3 < CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander)->m_BotList.m_Size )
      {
        OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
        if ( v3 < OpposingTeamCommander->m_BotList.m_Size
          && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v3] != 0 )
        {
          v5 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
          v6 = 0;
          if ( v3 < v5->m_BotList.m_Size )
            v6 = v5->m_BotList.m_Memory.m_pMemory[v3];
          v7 = CEntityHandle::operator CEntityInstance *(v6 + 39);
          if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
            v8 = v7;
          else
            v8 = 0;
          if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v8) )
          {
            fMaxRange = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
            v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
              v10 = v9;
            else
              v10 = 0;
            if ( (GetBotTargetStatusCore(v8, v10, fMaxRange, this->m_pAbility) & 0xFB) == 0 )
            {
              v11 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
              fMaxRangeb = CDOTA_BaseNPC::GetArmorReductionForDamageType(v8, 2);
              if ( (v11 * (1.0 - fMaxRangeb)) > CBaseEntity::GetHealth(v8) )
              {
                if ( v8 != 0 && (m_pEntity = v8->m_pEntity) != 0 )
                {
                  v38 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                  if ( m_pEntity->m_EHandle.m_Index == -1 )
                    v39 = 0x7FFF;
                  else
                    v39 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(this->m_hDesiredTarget.m_Index) = v39 | this->m_hDesiredTarget.m_Index & 0x8000;
                  this->m_hDesiredTarget.m_Index = (v38 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
                  return 3;
                }
                else
                {
                  this->m_hDesiredTarget.m_Index = -1;
                  return 3;
                }
              }
            }
          }
        }
        ++v3;
      }
    }
    goto LABEL_3;
  }
  v13 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
    v14 = v13;
  else
    v14 = 0;
  if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v14) )
    goto LABEL_3;
  m_pBot = this->m_pBot;
  v16 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
    v17 = v16;
  else
    v17 = 0;
  v18 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
  if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
    v19 = v18;
  else
    v19 = 0;
  if ( (GetBotTargetStatusCore(v19, v17, -1.0, this->m_pAbility) & 0xFB) != 0 )
    goto LABEL_3;
  v20 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
  v21 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v21 == 0 || (v22 = v21, BYTE3(v21[7]._vptr_IHandleEntity) == 0) )
    v22 = 0;
  fMaxRangea = CDOTA_BaseNPC::GetArmorReductionForDamageType(v22, 2);
  v23 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
    v24 = v23;
  else
    v24 = 0;
  if ( CDOTA_BaseNPC::GetRecentIncomingDPS(v24, 0) < 50.0 )
  {
    v25 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 )
      v26 = v25;
    else
      v26 = 0;
    if ( (v20 * (1.0 - fMaxRangea)) > CBaseEntity::GetHealth(v26) )
    {
      this->m_hDesiredTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
      return 3;
    }
  }
  TargetBot = CDOTA_Bot::GetTargetBot(this->m_pBot);
  if ( TargetBot == 0 || (*(TargetBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(TargetBot->m_pActiveBotMode) != 4 )
    goto LABEL_3;
  v28 = this->m_pBot;
  v29 = CEntityHandle::operator CEntityInstance *(&v28->m_hUnit);
  if ( v29 == 0 || (v30 = v29, BYTE3(v29[7]._vptr_IHandleEntity) == 0) )
    v30 = 0;
  v31 = CEntityHandle::operator CEntityInstance *(&v28->m_hTarget);
  if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
    v32 = v31;
  else
    v32 = 0;
  *v33.m128i_i32 = CBaseEntity::GetDistanceToEntity(v32, v30);
  v34 = COERCE_FLOAT(_mm_cvtsi128_si32(v33));
  v35 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v35 != 0 && BYTE3(v35[7]._vptr_IHandleEntity) != 0 )
    v36 = v35;
  else
    v36 = 0;
  if ( v34 <= CDOTA_BaseNPC::GetAttackRange(v36) )
  {
LABEL_3:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  this->m_hDesiredTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
  return 2;
}


// CDOTA_Bot_AbilityUsage_Sniper_Assassinate::UseAbility  (line 169, @0x00000000028e40f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Sniper_Assassinate::UseAbility(
        CDOTA_Bot_AbilityUsage_Sniper_Assassinate *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Sniper *m_pBot; // r14
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


