
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Oracle::CDOTA_Bot_Hero_Oracle  (line 19, @0x00000000028d6060, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "oracle_fortunes_end", "oracle_purifying_flames"
void __fastcall CDOTA_Bot_Hero_Oracle::CDOTA_Bot_Hero_Oracle(
        CDOTA_Bot_Hero_Oracle *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CEC30;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityFortunesEnd = CDOTA_BaseNPC::FindAbilityByName(v6, "oracle_fortunes_end", 0);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityFatesEdict = CDOTA_BaseNPC::FindAbilityByName(v8, "oracle_fates_edict", 0);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityPurifyingFlames = CDOTA_BaseNPC::FindAbilityByName(v10, "oracle_purifying_flames", 0);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityFalsePromise = CDOTA_BaseNPC::FindAbilityByName(v12, "oracle_false_promise", 0);
}


// CDOTA_Bot_Hero_Oracle::CreateMode  (line 30, @0x00000000028d2080, libserver.so)  // inlines: CDOTA_BotMode_Attack_Oracle
// calls: CDOTA_Bot::CreateMode, operator new, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_Oracle::CreateMode(CDOTA_Bot_Hero_Oracle *const this, int iMode)
{
  CDOTA_BotMode_Attack *v4; // r12

  if ( this->m_bHuman || iMode != 2 )
    return CDOTA_Bot::CreateMode(this, iMode);
  v4 = operator new(0xE8u);
  CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v4, this);
  v4->_vptr_CDOTA_BotMode = off_42CED30;
  return v4;
}


// CDOTA_BotMode_Attack_Oracle::GetDesire  (line 47, @0x00000000028d2490, libserver.so)
// calls: CDOTA_BotMode_Attack::GetDesire
float __fastcall CDOTA_BotMode_Attack_Oracle::GetDesire(CDOTA_BotMode_Attack_Oracle *const this)
{
  CDOTA_BotMode *m_pActiveBotMode; // rdi

  m_pActiveBotMode = this->m_pBot->m_pActiveBotMode;
  if ( m_pActiveBotMode != 0
    && (*(m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pActiveBotMode) == 2
    && *(this->m_pBot[1]._vptr_CDOTA_Bot + 788) != 0 )
  {
    return 0.89999998;
  }
  else
  {
    return CDOTA_BotMode_Attack::GetDesire(this);
  }
}


// CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd::CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd  (line 77, @0x00000000028d6180, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd::CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd(
        CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CEDD0;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd::GetCurrentUsageDesire  (line 84, @0x00000000028d53e0, libserver.so)  // inlines: Get, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetTargetNPC, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValidBotTarget, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=
// calls: CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore, CDOTA_BaseNPC::FindModifierByName, DOTACommander, CDOTA_Commander::GetIllusionState
// strings: "modifier_oracle_purifying_flames"
int __fastcall CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd *const this)
{
  CDOTA_Bot_Hero_Oracle *m_pBot; // r13
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC_Hero *v4; // r12
  int m_Id; // eax
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // rsi
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  unsigned __int8 (__fastcall *v12)(CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd *const, _QWORD); // r13
  CDOTA_Commander *v13; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_16;
  m_pBot = this->m_pBot;
  v3 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
  v4 = v3;
  if ( v3 == 0 )
    goto LABEL_16;
  if ( BYTE3(v3[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_16;
  m_Id = v3[43].m_iszPrivateVScripts.u.m_Id;
  if ( (m_Id & 3) == 0 && !this->m_bUseOnCreeps )
    goto LABEL_16;
  if ( (m_Id & 1) != 0 )
  {
    v12 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
    v13 = DOTACommander();
    IllusionState = CDOTA_Commander::GetIllusionState(v13, v4);
    if ( v12(this, IllusionState) == 0 )
    {
LABEL_16:
      this->m_hDesiredTarget.m_Index = -1;
      return 0;
    }
    m_pBot = this->m_pBot;
  }
  v6 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v6 == 0 || (v7 = v6, BYTE3(v6[7]._vptr_IHandleEntity) == 0) )
    v7 = 0;
  if ( !IsBotTargetStatusValidCore(v4, v7, 251, -1.0, this->m_pAbility) )
    goto LABEL_16;
  m_pEntity = v4->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v10 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v10 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v9 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
  }
  return CDOTA_BaseNPC::FindModifierByName(v4, "modifier_oracle_purifying_flames", 0) == 0 ? 1 : 3;
}


// CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd::UseAbility  (line 105, @0x00000000028d3780, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd::UseAbility(
        CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Oracle *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Oracle_FatesEdict::CDOTA_Bot_AbilityUsage_Oracle_FatesEdict  (line 118, @0x00000000028d61b0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Oracle_FatesEdict::CDOTA_Bot_AbilityUsage_Oracle_FatesEdict(
        CDOTA_Bot_AbilityUsage_Oracle_FatesEdict *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CEE30;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Oracle_FatesEdict::GetCurrentUsageDesire  (line 125, @0x00000000028e0590, libserver.so)  // inlines: Set, operator=
// calls: CDOTA_Bot_AbilityUsage_Oracle_FatesEdict::GetHealDesire, CDOTA_Bot_AbilityUsage_Oracle_FatesEdict::GetOffensiveDesire
int __fastcall CDOTA_Bot_AbilityUsage_Oracle_FatesEdict::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Oracle_FatesEdict *const this)
{
  int result; // eax

  result = CDOTA_Bot_AbilityUsage_Oracle_FatesEdict::GetHealDesire(this);
  if ( result == 0 )
  {
    result = CDOTA_Bot_AbilityUsage_Oracle_FatesEdict::GetOffensiveDesire(this);
    if ( result == 0 )
      this->m_hDesiredTarget.m_Index = -1;
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_Oracle_FatesEdict::GetHealDesire  (line 139, @0x00000000028e01a0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetEntityIdentity, GetEntryIndex, GetHealthDeficit, GetInstance, GetMana, GetUnit, IndexToIdentity, IsFullyCastable, IsRealHero, IsTrained, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, end, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator=, ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::GetNearbyHeroes, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetHealth, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Bot_AbilityUsage_Oracle_FatesEdict::GetCurrentUsageDesire
// strings: "heal_per_second"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Oracle_FatesEdict::GetHealDesire(
        CDOTA_Bot_AbilityUsage_Oracle_FatesEdict *const this)
{
  CDOTA_Bot_Hero_Oracle *m_pBot; // r12
  CDOTABaseAbility *m_pAbilityPurifyingFlames; // rbx
  CEntityInstance *v5; // rax
  int v6; // ebx
  CDOTABaseAbility *m_pAbility; // rdi
  int v8; // eax
  float LevelSpecialValue; // xmm0_4
  CHandle<CBaseEntity> *m_pMemory; // rbx
  CHandle<CBaseEntity> *v11; // r15
  int v12; // eax
  CConcreteEntityList *v13; // rcx
  uint32 m_Index; // r12d
  CEntityIdentity *v15; // rax
  CEntityIdentity *v16; // rax
  CEntityInstance *m_pInstance; // r13
  int v18; // eax
  CEntityIdentity *v19; // rcx
  CEntityIdentity *v20; // rcx
  int iBestHealthMissing; // [rsp+Ch] [rbp-104h]
  int iFullHealAmount; // [rsp+10h] [rbp-100h]
  float fHealDuration; // [rsp+14h] [rbp-FCh]
  int iTotalHealAmount; // [rsp+18h] [rbp-F8h]
  float v25; // [rsp+1Ch] [rbp-F4h]
  int v26; // [rsp+1Ch] [rbp-F4h]
  int v27; // [rsp+1Ch] [rbp-F4h]
  EHANDLE hBestTarget; // [rsp+20h] [rbp-F0h]
  EHANDLE hTarget; // [rsp+30h] [rbp-E0h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> vecAlliedHeroes; // [rsp+40h] [rbp-D0h] BYREF
  unsigned __int64 v31; // [rsp+D8h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  m_pBot = this->m_pBot;
  m_pAbilityPurifyingFlames = m_pBot->m_pAbilityPurifyingFlames;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityPurifyingFlames) < 0
    || (*(m_pAbilityPurifyingFlames->_vptr_IHandleEntity + 245))(m_pAbilityPurifyingFlames) == 0
    || !CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityPurifyingFlames)
    || !CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityPurifyingFlames, -1) )
  {
    return 0;
  }
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v5 == 0 || BYTE3(v5[7]._vptr_IHandleEntity) == 0 )
    v5 = 0;
  v25 = *&v5[44].m_iszPrivateVScripts.u.m_Id;
  v6 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
  if ( ((*(m_pBot->m_pAbilityPurifyingFlames->_vptr_IHandleEntity + 273))(
          m_pBot->m_pAbilityPurifyingFlames,
          0xFFFFFFFFLL)
      + v6) > v25
    || CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, 0, 1500.0) > 0 )
  {
    return 0;
  }
  m_pAbility = this->m_pAbility;
  vecAlliedHeroes.m_Size = 0;
  vecAlliedHeroes.m_Memory.m_nAllocationCount = 32;
  vecAlliedHeroes.m_Memory.m_nGrowSize = 0x80000000;
  vecAlliedHeroes.m_Memory.m_pMemory = &vecAlliedHeroes.m_FixedMemory;
  v8 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY, &vecAlliedHeroes, v8);
  hBestTarget.m_Index = -1;
  fHealDuration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(m_pBot->m_pAbilityPurifyingFlames, "duration", -1, 1);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                        m_pBot->m_pAbilityPurifyingFlames,
                        "heal_per_second",
                        -1,
                        1);
  m_pMemory = vecAlliedHeroes.m_Memory.m_pMemory;
  iFullHealAmount = (LevelSpecialValue * fHealDuration);
  v11 = &vecAlliedHeroes.m_Memory.m_pMemory[vecAlliedHeroes.m_Size];
  v12 = 0;
  if ( vecAlliedHeroes.m_Memory.m_pMemory != v11 )
  {
    v13 = CEntityHandle::gm_pEntityList;
    iBestHealthMissing = 0;
    do
    {
      m_Index = m_pMemory->m_Index;
      hTarget.m_Index = m_pMemory->m_Index;
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v15 = v13->m_pIdentityChunks[(LOWORD(hTarget.m_Index) >> 9) & 0x3F];
        if ( v15 != 0 )
        {
          v16 = &v15[hTarget.m_Index & 0x1FF];
          if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
          {
            m_pInstance = v16->m_pInstance;
            if ( v16->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
            {
              iTotalHealAmount = (((*(m_pInstance->_vptr_IHandleEntity + 430))(v16->m_pInstance) * fHealDuration)
                                + iFullHealAmount);
              v26 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
              v18 = v26 - CBaseEntity::GetHealth(m_pInstance);
              if ( iTotalHealAmount > v18 || iBestHealthMissing > v18 )
              {
                v13 = CEntityHandle::gm_pEntityList;
              }
              else
              {
                hBestTarget.m_Index = m_Index;
                v13 = CEntityHandle::gm_pEntityList;
                iBestHealthMissing = v18;
              }
            }
          }
        }
      }
      ++m_pMemory;
    }
    while ( v11 != m_pMemory );
    v12 = 0;
    if ( hBestTarget.m_Index + 2 > 1 )
    {
      v19 = v13->m_pIdentityChunks[(LOWORD(hBestTarget.m_Index) >> 9) & 0x3F];
      if ( v19 != 0 )
      {
        v20 = &v19[hBestTarget.m_Index & 0x1FF];
        if ( v20 != 0 && hBestTarget.m_Index == v20->m_EHandle.m_Index )
        {
          this->m_hDesiredTarget = hBestTarget;
          LOBYTE(v12) = 1;
        }
      }
    }
  }
  v27 = v12;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vecAlliedHeroes);
  return v27;
}


// CDOTA_Bot_AbilityUsage_Oracle_FatesEdict::GetOffensiveDesire  (line 193, @0x00000000028ddca0, libserver.so)  // inlines: Get, GetBotByIndex, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTargetNPC, GetTeamNumber, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::GetEstimatedDamageToTarget
// callers: CDOTA_Bot_AbilityUsage_Oracle_FatesEdict::GetCurrentUsageDesire
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Oracle_FatesEdict::GetOffensiveDesire(
        CDOTA_Bot_AbilityUsage_Oracle_FatesEdict *const this)
{
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // r13
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rsi
  CDOTA_TeamCommander *m_pTeamCommander; // r14
  __int64 v8; // r15
  int v9; // ebx
  CDOTA_Bot *v10; // r8
  uint32 m_Index; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // rax
  CDOTA_Bot *m_pBot; // rbx
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // r15
  CEntityInstance *v18; // rax
  double EstimatedDamageToTarget; // xmm2_8
  CEntityIdentity *m_pEntity; // rdx
  int v21; // eax
  __int16 v22; // cx
  char pBot; // [rsp+8h] [rbp-48h]
  CDOTA_Bot *pBota; // [rsp+8h] [rbp-48h]
  int iDamageAmp; // [rsp+10h] [rbp-40h]
  float fDuration; // [rsp+14h] [rbp-3Ch]
  float fIncomingMagicalDamage; // [rsp+18h] [rbp-38h]
  float fIncomingPhysicalDamage; // [rsp+1Ch] [rbp-34h]

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    return 0;
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
    v4 = v3;
  else
    v4 = 0;
  if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v4) )
    return 0;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  if ( !IsBotTargetStatusValidCore(v4, v6, 251, -1.0, this->m_pAbility) )
    return 0;
  fDuration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this->m_pAbility, "duration", -1, 1);
  iDamageAmp = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "damage_amp", -1, 1);
  m_pTeamCommander = this->m_pBot->m_pTeamCommander;
  if ( m_pTeamCommander->m_BotList.m_Size <= 0 )
  {
    fIncomingMagicalDamage = 0.0;
    fIncomingPhysicalDamage = 0.0;
  }
  else
  {
    v8 = 0;
    v9 = 0;
    fIncomingMagicalDamage = 0.0;
    fIncomingPhysicalDamage = 0.0;
    do
    {
      v10 = m_pTeamCommander->m_BotList.m_Memory.m_pMemory[v8];
      if ( v10 != 0 )
      {
        m_Index = v10->m_hTarget.m_Index;
        if ( m_Index + 2 <= 1
          || (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
          || (v13 = &v12[v10->m_hTarget.m_Index & 0x1FF]) == 0
          || m_Index != v13->m_EHandle.m_Index
          || (m_pInstance = v13->m_pInstance, v13->m_pInstance == 0)
          || !m_pInstance->m_bIsDOTANPC )
        {
          m_pInstance = 0;
        }
        if ( v4 == m_pInstance )
        {
          pBota = m_pTeamCommander->m_BotList.m_Memory.m_pMemory[v8];
          fIncomingPhysicalDamage = CDOTA_Bot::GetEstimatedDamageToTarget(v10, 1, v4, fDuration, 1)
                                  + fIncomingPhysicalDamage;
          fIncomingMagicalDamage = CDOTA_Bot::GetEstimatedDamageToTarget(pBota, 1, v4, fDuration, 2)
                                 + fIncomingMagicalDamage;
        }
      }
      ++v9;
      ++v8;
    }
    while ( v9 < m_pTeamCommander->m_BotList.m_Size );
  }
  m_pBot = v4->m_pBot;
  if ( m_pBot == 0 )
    goto LABEL_28;
  v16 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
  v17 = v16;
  if ( v16 == 0 || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_28;
  pBot = HIBYTE(v16[7].m_CScriptComponent);
  v18 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v18 == 0 || BYTE3(v18[7]._vptr_IHandleEntity) == 0 )
    v18 = 0;
  if ( pBot == HIBYTE(v18[7].m_CScriptComponent) )
    EstimatedDamageToTarget = CDOTA_Bot::GetEstimatedDamageToTarget(m_pBot, 1, v17, fDuration, 1);
  else
LABEL_28:
    EstimatedDamageToTarget = 0.0;
  if ( fIncomingPhysicalDamage * ((iDamageAmp / 100.0) + 1.0) + EstimatedDamageToTarget <= ((fIncomingMagicalDamage
                                                                                           + fIncomingPhysicalDamage)
                                                                                          + 200.0) )
    return 0;
  m_pEntity = v4->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v21 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v22 = 0x7FFF;
    else
      v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v22 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v21 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    return 1;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
    return 1;
  }
}


// CDOTA_Bot_AbilityUsage_Oracle_FatesEdict::UseAbility  (line 244, @0x00000000028d4040, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Oracle_FatesEdict::UseAbility(
        CDOTA_Bot_AbilityUsage_Oracle_FatesEdict *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Oracle *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames::CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames  (line 257, @0x00000000028d61e0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames::CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames(
        CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CEE90;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames::GetCurrentUsageDesire  (line 264, @0x00000000028de320, libserver.so)  // inlines: Set, operator=
// calls: CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames::GetHealDesire, CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames::GetOffensiveDesire
int __fastcall CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames *const this)
{
  int result; // eax

  result = CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames::GetHealDesire(this);
  if ( result == 0 )
  {
    result = CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames::GetOffensiveDesire(this);
    if ( result == 0 )
      this->m_hDesiredTarget.m_Index = -1;
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames::GetHealDesire  (line 280, @0x00000000028d6210, libserver.so)  // inlines: Get, GetBotByIndex, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_BaseNPC::FindModifierByName, CEntityHandle::operator CEntityInstance*
// callers: CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames::GetCurrentUsageDesire
// strings: "modifier_oracle_fates_edict"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames::GetHealDesire(
        CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  CDOTA_Bot_Hero_Oracle *m_pBot; // rdx
  CDOTA_TeamCommander *m_pTeamCommander; // rax
  const CEntityHandle *v6; // r14
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CEntityInstance *v12; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v14; // eax
  __int16 v15; // cx

  v2 = 0;
  v3 = 0;
  m_pBot = this->m_pBot;
  m_pTeamCommander = m_pBot->m_pTeamCommander;
  if ( m_pTeamCommander->m_BotList.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v6 = m_pTeamCommander->m_BotList.m_Memory.m_pMemory[v2];
    if ( v6 != 0 )
      break;
LABEL_10:
    m_pTeamCommander = m_pBot->m_pTeamCommander;
    ++v3;
    ++v2;
    if ( v3 >= m_pTeamCommander->m_BotList.m_Size )
      return 0;
  }
  m_Index = v6[39].m_Index;
  if ( m_Index + 2 > 1
    && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6[39].m_Index) >> 9) & 0x3F]) != 0
    && (v9 = &v8[v6[39].m_Index & 0x1FF]) != 0
    && m_Index == v9->m_EHandle.m_Index
    && v9->m_pInstance != 0
    && BYTE3(v9->m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    m_pInstance = v9->m_pInstance;
  }
  else
  {
    m_pInstance = 0;
  }
  if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_oracle_fates_edict", 0) == 0 )
  {
    m_pBot = this->m_pBot;
    goto LABEL_10;
  }
  v12 = CEntityHandle::operator CEntityInstance *(v6 + 39);
  if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 && (m_pEntity = v12->m_pEntity) != 0 )
  {
    v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v15 = 0x7FFF;
    else
      v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v15 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v14 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    return 3;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
    return 3;
  }
}


// CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames::GetOffensiveDesire  (line 301, @0x00000000028de070, libserver.so)  // inlines: Get, GetEHandle, GetEntryIndex, GetInstance, GetMana, GetSerialNumber, GetTargetNPC, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsFullyCastable, IsHero, IsTrained, IsValidBotTarget, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=
// calls: CEntityHandle::operator CEntityInstance*, DOTACommander, CDOTA_Commander::GetIllusionState, IsBotTargetStatusValidCore, CDOTA_BaseNPC::GetArmorReductionForDamageType, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetHealth, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
// callers: CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames::GetCurrentUsageDesire
// strings: "heal_per_second"
int __fastcall CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames::GetOffensiveDesire(
        CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames *const this)
{
  CDOTA_Bot_Hero_Oracle *m_pBot; // r13
  CEntityInstance *v4; // rax
  CDOTA_BaseNPC_Hero *v5; // r12
  int m_Id; // eax
  unsigned __int8 (__fastcall *v7)(CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames *const, _QWORD); // r13
  CDOTA_Commander *v8; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // rsi
  int v12; // r13d
  float LevelSpecialValue; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v15; // eax
  __int16 v16; // cx
  CDOTA_Bot_Hero_Oracle *v17; // r14
  CDOTABaseAbility *m_pAbilityFortunesEnd; // r13
  CEntityInstance *v19; // rax
  int v20; // r13d
  float ArmorReductionForDamageType; // [rsp+Ch] [rbp-24h]
  float v22; // [rsp+Ch] [rbp-24h]

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    return 0;
  m_pBot = this->m_pBot;
  v4 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
  v5 = v4;
  if ( v4 == 0 )
    return 0;
  if ( BYTE3(v4[7]._vptr_IHandleEntity) == 0 )
    return 0;
  m_Id = v4[43].m_iszPrivateVScripts.u.m_Id;
  if ( (m_Id & 3) == 0 && !this->m_bUseOnCreeps )
    return 0;
  if ( (m_Id & 1) != 0 )
  {
    v7 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
    v8 = DOTACommander();
    IllusionState = CDOTA_Commander::GetIllusionState(v8, v5);
    if ( v7(this, IllusionState) != 0 )
    {
      m_pBot = this->m_pBot;
      goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  v10 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v10 == 0 || (v11 = v10, BYTE3(v10[7]._vptr_IHandleEntity) == 0) )
    v11 = 0;
  if ( !IsBotTargetStatusValidCore(v5, v11, 251, -1.0, this->m_pAbility) )
    return 0;
  ArmorReductionForDamageType = CDOTA_BaseNPC::GetArmorReductionForDamageType(v5, 2);
  v12 = (CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "damage", -1, 1)
       * (1.0 - ArmorReductionForDamageType));
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this->m_pAbility, "heal_per_second", -1, 1);
  if ( v12 <= (LevelSpecialValue + LevelSpecialValue) )
    return 0;
  if ( v12 < CBaseEntity::GetHealth(v5) )
  {
    v17 = this->m_pBot;
    m_pAbilityFortunesEnd = v17->m_pAbilityFortunesEnd;
    if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityFortunesEnd) < 0
      || (*(m_pAbilityFortunesEnd->_vptr_IHandleEntity + 245))(m_pAbilityFortunesEnd) == 0
      || !CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityFortunesEnd)
      || !CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityFortunesEnd, -1) )
    {
      return 0;
    }
    v19 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v19 == 0 || BYTE3(v19[7]._vptr_IHandleEntity) == 0 )
      v19 = 0;
    v22 = *&v19[44].m_iszPrivateVScripts.u.m_Id;
    v20 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
    if ( ((*(v17->m_pAbilityFortunesEnd->_vptr_IHandleEntity + 273))(v17->m_pAbilityFortunesEnd, 0xFFFFFFFFLL) + v20) > v22 )
      return 0;
  }
  m_pEntity = v5->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v16 = 0x7FFF;
    else
      v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v16 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v15 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    return 2;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
    return 2;
  }
}


// CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames::UseAbility  (line 342, @0x00000000028d4120, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames::UseAbility(
        CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Oracle *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Oracle_FalsePromise::CDOTA_Bot_AbilityUsage_Oracle_FalsePromise  (line 355, @0x00000000028d63b0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Oracle_FalsePromise::CDOTA_Bot_AbilityUsage_Oracle_FalsePromise(
        CDOTA_Bot_AbilityUsage_Oracle_FalsePromise *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CEEF0;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Oracle_FalsePromise::GetCurrentUsageDesire  (line 362, @0x00000000028d9140, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Bot::GetNearbyHeroes, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CDOTA_Bot::FindNearbyEnemiesInMode, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Oracle_FalsePromise::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Oracle_FalsePromise *const this)
{
  CDOTABaseAbility *m_pAbility; // rdi
  int v3; // eax
  CEntityInstance *v4; // rax
  const CBaseEntity *v5; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v7; // r12
  int v8; // ebx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  int v18; // ebx
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hNearbyAllies; // [rsp+0h] [rbp-D0h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp-38h]

  hNearbyAllies.m_Size = 0;
  v21 = __readfsqword(0x28u);
  m_pAbility = this->m_pAbility;
  hNearbyAllies.m_Memory.m_pMemory = &hNearbyAllies.m_FixedMemory;
  hNearbyAllies.m_Memory.m_nAllocationCount = 32;
  hNearbyAllies.m_Memory.m_nGrowSize = 0x80000000;
  v3 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  CDOTA_Bot::GetNearbyHeroes(
    this->m_pBot,
    DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY,
    &hNearbyAllies,
    v3 + 200.0);
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
    v5 = v4;
  else
    v5 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  SortEHANDLEVectorByLocation(&hNearbyAllies, AbsOrigin, 0);
  if ( hNearbyAllies.m_Size <= 0 )
  {
LABEL_21:
    this->m_hDesiredTarget.m_Index = -1;
    v18 = 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = &hNearbyAllies.m_Memory.m_pMemory[v7];
      m_Index = hNearbyAllies.m_Memory.m_pMemory[v7].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v11 = v9->m_Index;
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
        if ( v12 != 0 )
        {
          v13 = &v12[v11 & 0x1FF];
          if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
          {
            m_pInstance = v13->m_pInstance;
            if ( v13->m_pInstance != 0
              && m_pInstance->m_bIsDOTANPC
              && (m_pInstance->m_iUnitType & 1) != 0
              && m_pInstance->m_pBot != 0
              && CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v13->m_pInstance) < 2.0
              && CDOTA_Bot::FindNearbyEnemiesInMode(
                   m_pInstance->m_pBot,
                   DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK,
                   1000.0,
                   0,
                   m_pInstance) > 0 )
            {
              break;
            }
          }
        }
      }
      ++v8;
      ++v7;
      if ( hNearbyAllies.m_Size <= v8 )
        goto LABEL_21;
    }
    m_pEntity = m_pInstance->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v17 = 0x7FFF;
      else
        v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v18 = 4;
      LOWORD(this->m_hDesiredTarget.m_Index) = v17 | this->m_hDesiredTarget.m_Index & 0x8000;
      this->m_hDesiredTarget.m_Index = (v16 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hDesiredTarget.m_Index = -1;
      v18 = 4;
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyAllies);
  return v18;
}


// CDOTA_Bot_AbilityUsage_Oracle_FalsePromise::UseAbility  (line 385, @0x00000000028d3940, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Oracle_FalsePromise::UseAbility(
        CDOTA_Bot_AbilityUsage_Oracle_FalsePromise *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Oracle *m_pBot; // r14
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


