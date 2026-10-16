
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Warlock::CDOTA_Bot_Hero_Warlock  (line 21, @0x00000000028e7490, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "warlock_rain_of_chaos"
void __fastcall CDOTA_Bot_Hero_Warlock::CDOTA_Bot_Hero_Warlock(
        CDOTA_Bot_Hero_Warlock *const this,
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
  this->_vptr_CDOTA_Bot = &off_42D2170;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityFatalBonds = CDOTA_BaseNPC::FindAbilityByName(v6, "warlock_fatal_bonds", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityShadowWord = CDOTA_BaseNPC::FindAbilityByName(v8, "warlock_shadow_word", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityUpheaval = CDOTA_BaseNPC::FindAbilityByName(v10, "warlock_upheaval", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityRainOfChaos = CDOTA_BaseNPC::FindAbilityByName(v12, "warlock_rain_of_chaos", 1);
}


// CDOTA_Bot_AbilityUsage_Warlock_FatalBonds::CDOTA_Bot_AbilityUsage_Warlock_FatalBonds  (line 34, @0x00000000028e75c0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Warlock_FatalBonds::CDOTA_Bot_AbilityUsage_Warlock_FatalBonds(
        CDOTA_Bot_AbilityUsage_Warlock_FatalBonds *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D22D0;  // vptr: CDOTA_Bot_AbilityUsage_Warlock_FatalBonds
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Warlock_FatalBonds::GetCurrentUsageDesire  (line 41, @0x00000000028ed940, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValidBotTarget, Purge, RemoveAll, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::GetNearbyHeroes, CEntityHandle::operator CEntityInstance*, DOTACommander, CDOTA_Commander::GetIllusionState, IsBotTargetStatusValidCore, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, _Unwind_Resume
int __fastcall CDOTA_Bot_AbilityUsage_Warlock_FatalBonds::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Warlock_FatalBonds *const this)
{
  int LevelSpecialValue; // r15d
  int v3; // ebx
  CDOTA_Bot_Hero_Warlock *m_pBot; // rdi
  __int64 v6; // r12
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC_Hero *v8; // rbx
  int m_Id; // eax
  unsigned __int8 (__fastcall *v10)(CDOTA_Bot_AbilityUsage_Warlock_FatalBonds *const, _QWORD); // r14
  CDOTA_Commander *v11; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rsi
  const Vector *AbsOrigin; // r14
  CEntityInstance *v16; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v18; // eax
  __int16 v19; // cx
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemyHeroes; // [rsp+30h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hOtherTargets; // [rsp+50h] [rbp-50h] BYREF

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "search_aoe", -1, 1);
  v3 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_2;
  m_pBot = this->m_pBot;
  hEnemyHeroes.m_Size = 0;
  hEnemyHeroes.m_Memory.m_pMemory = 0;
  hEnemyHeroes.m_Memory.m_nAllocationCount = 0;
  hEnemyHeroes.m_Memory.m_nGrowSize = 0;
  CDOTA_Bot::GetNearbyHeroes(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEnemyHeroes, v3 + 100.0);
  if ( hEnemyHeroes.m_Size <= 0 )
  {
LABEL_19:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
LABEL_2:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  v6 = 0;
  while ( 1 )
  {
    v7 = CEntityHandle::operator CEntityInstance *(&hEnemyHeroes.m_Memory.m_pMemory[v6]);
    v8 = v7;
    if ( v7 == 0 )
      goto LABEL_18;
    if ( BYTE3(v7[7]._vptr_IHandleEntity) == 0 )
      goto LABEL_18;
    m_Id = v7[43].m_iszPrivateVScripts.u.m_Id;
    if ( (m_Id & 3) == 0 && !this->m_bUseOnCreeps )
      goto LABEL_18;
    if ( (m_Id & 1) != 0 )
    {
      v10 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
      v11 = DOTACommander();
      IllusionState = CDOTA_Commander::GetIllusionState(v11, v8);
      if ( v10(this, IllusionState) == 0 )
        goto LABEL_18;
    }
    v13 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v13 == 0 || (v14 = v13, BYTE3(v13[7]._vptr_IHandleEntity) == 0) )
      v14 = 0;
    if ( !IsBotTargetStatusValidCore(v8, v14, 251, -1.0, this->m_pAbility) )
      goto LABEL_18;
    hOtherTargets.m_Size = 0;
    hOtherTargets.m_Memory.m_pMemory = 0;
    hOtherTargets.m_Memory.m_nAllocationCount = 0;
    hOtherTargets.m_Memory.m_nGrowSize = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
    v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v16 == 0 || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
      v16 = 0;
    FindUnitsInRadius(
      HIBYTE(v16[7].m_CScriptComponent),
      AbsOrigin,
      v8,
      LevelSpecialValue,
      &hOtherTargets,
      2,
      1,
      0,
      0,
      0);
    if ( hOtherTargets.m_Size > 2 )
      break;
    hOtherTargets.m_Size = 0;
    if ( (hOtherTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hOtherTargets.m_Memory);
      if ( (hOtherTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hOtherTargets.m_Memory);
    }
LABEL_18:
    if ( hEnemyHeroes.m_Size <= ++v6 )
      goto LABEL_19;
  }
  m_pEntity = v8->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v18 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v19 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v19 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v18 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hOtherTargets);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
  return 3;
}


// CDOTA_Bot_AbilityUsage_Warlock_FatalBonds::UseAbility  (line 73, @0x00000000028e42b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Warlock_FatalBonds::UseAbility(
        CDOTA_Bot_AbilityUsage_Warlock_FatalBonds *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Warlock *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Warlock_ShadowWord::CDOTA_Bot_AbilityUsage_Warlock_ShadowWord  (line 86, @0x00000000028e75f0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Warlock_ShadowWord::CDOTA_Bot_AbilityUsage_Warlock_ShadowWord(
        CDOTA_Bot_AbilityUsage_Warlock_ShadowWord *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D2330;  // vptr: CDOTA_Bot_AbilityUsage_Warlock_ShadowWord
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Warlock_ShadowWord::GetCurrentUsageDesire  (line 93, @0x00000000028ef3a0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTargetNPC, GetTeamNumber, GetUnit, IndexToIdentity, IsBotTargetStatusValid, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, SortEHANDLEVectorByHealth, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetHealth, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Warlock_ShadowWord::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Warlock_ShadowWord *const this)
{
  bool v2; // zf
  CDOTA_Bot_Hero_Warlock *m_pBot; // rax
  CEntityInstance *v4; // rax
  CDOTA_BaseNPC *v5; // rbx
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // rsi
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  CEntityInstance *v12; // rax
  CDOTABaseAbility *m_pAbility; // rdi
  __m128i v14; // xmm3
  CDOTA_BaseNPC *v15; // rbx
  __m128i v16; // xmm1
  float v17; // r12d
  CEntityInstance *v18; // rax
  const Vector *AbsOrigin; // r13
  CEntityInstance *v20; // rax
  CEntityInstance *v21; // rdx
  __int64 v22; // rbx
  int v23; // r12d
  CHandle<CBaseEntity> *v24; // rdx
  uint32 m_Index; // eax
  __int16 v26; // cx
  CEntityIdentity *v27; // rdx
  CEntityIdentity *v28; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  int v30; // r15d
  CEntityIdentity *v31; // rax
  int v32; // edx
  __int16 v33; // cx
  float fHealAmounta; // [rsp+2Ch] [rbp-54h]
  float fHealAmount; // [rsp+2Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hPotentialTargets; // [rsp+30h] [rbp-50h] BYREF

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2;
  m_pBot = this->m_pBot;
  if ( v2 )
  {
    v4 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
    if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
      v5 = v4;
    else
      v5 = 0;
    if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v5) )
    {
      v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
        v7 = v6;
      else
        v7 = 0;
      if ( IsBotTargetStatusValidCore(v5, v7, 251, -1.0, this->m_pAbility)
        && CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v5) > 5.0 )
      {
        if ( v5 != 0 && (m_pEntity = v5->m_pEntity) != 0 )
        {
          v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          if ( m_pEntity->m_EHandle.m_Index == -1 )
            v10 = 0x7FFF;
          else
            v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hDesiredTarget.m_Index) = v10 | this->m_hDesiredTarget.m_Index & 0x8000;
          this->m_hDesiredTarget.m_Index = (v9 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
          return 2;
        }
        else
        {
          this->m_hDesiredTarget.m_Index = -1;
          return 2;
        }
      }
    }
LABEL_19:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  v12 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v12 == 0 || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
    v12 = 0;
  if ( *&v12[44].m_iszPrivateVScripts.u.m_Id <= 200.0 )
    goto LABEL_19;
  m_pAbility = this->m_pAbility;
  hPotentialTargets.m_Size = 0;
  hPotentialTargets.m_Memory.m_nAllocationCount = 0;
  hPotentialTargets.m_Memory.m_pMemory = 0;
  hPotentialTargets.m_Memory.m_nGrowSize = 0;
  *v14.m128i_i32 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  v15 = 0;
  v16 = v14;
  *v16.m128i_i32 = *v14.m128i_i32 + 100.0;
  v17 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
  v18 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
    v15 = v18;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
  v20 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
    v21 = v20;
  else
    v21 = 0;
  FindUnitsInRadius(HIBYTE(v21[7].m_CScriptComponent), AbsOrigin, v15, v17, &hPotentialTargets, 1, 1, 0, 0, 0);
  SortEHANDLEVectorByHealth(&hPotentialTargets);
  fHealAmounta = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
  fHealAmount = fHealAmounta * CDOTABaseAbility::GetLevelSpecialValueFor<float>(this->m_pAbility, "duration", -1, 1);
  if ( hPotentialTargets.m_Size <= 0 )
  {
LABEL_45:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hPotentialTargets);
    goto LABEL_19;
  }
  v22 = 0;
  v23 = 0;
  while ( 1 )
  {
    v24 = &hPotentialTargets.m_Memory.m_pMemory[v22];
    m_Index = hPotentialTargets.m_Memory.m_pMemory[v22].m_Index;
    if ( m_Index + 2 > 1 )
    {
      v26 = v24->m_Index;
      v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v24->m_Index) >> 9) & 0x3F];
      if ( v27 != 0 )
      {
        v28 = &v27[v26 & 0x1FF];
        if ( v28 != 0 && m_Index == v28->m_EHandle.m_Index )
        {
          m_pInstance = v28->m_pInstance;
          if ( v28->m_pInstance != 0
            && m_pInstance->m_bIsDOTANPC
            && CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v28->m_pInstance) > 3.0 )
          {
            v30 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
            if ( (v30 - CBaseEntity::GetHealth(m_pInstance)) > fHealAmount )
              break;
          }
        }
      }
    }
    ++v23;
    ++v22;
    if ( hPotentialTargets.m_Size <= v23 )
      goto LABEL_45;
  }
  v31 = m_pInstance->m_pEntity;
  if ( v31 != 0 )
  {
    v32 = (v31->m_EHandle.m_Index >> 15) - (v31->m_flags & 1);
    v33 = 0x7FFF;
    if ( v31->m_EHandle.m_Index != -1 )
      v33 = v31->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDesiredTarget.m_Index) = v33 | this->m_hDesiredTarget.m_Index & 0x8000;
    this->m_hDesiredTarget.m_Index = (v32 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hDesiredTarget.m_Index = -1;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hPotentialTargets);
  return 2;
}


// CDOTA_Bot_AbilityUsage_Warlock_ShadowWord::UseAbility  (line 151, @0x00000000028e3d70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Warlock_ShadowWord::UseAbility(
        CDOTA_Bot_AbilityUsage_Warlock_ShadowWord *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Warlock *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Warlock_Upheaval::CDOTA_Bot_AbilityUsage_Warlock_Upheaval  (line 164, @0x00000000028e7620, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Warlock_Upheaval::CDOTA_Bot_AbilityUsage_Warlock_Upheaval(
        CDOTA_Bot_AbilityUsage_Warlock_Upheaval *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D2390;  // vptr: CDOTA_Bot_AbilityUsage_Warlock_Upheaval
}


// CDOTA_Bot_AbilityUsage_Warlock_Upheaval::FindFilter  (line 171, @0x00000000028e3b30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot_AbilityUsage_Warlock_Upheaval::FindFilter(
        CDOTA_Bot_AbilityUsage_Warlock_Upheaval *const this,
        _DWORD *hUnit)
{
  unsigned int v2; // ebx
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r12
  __int64 v7; // rax

  v2 = 0;
  if ( (*hUnit + 2) <= 1 )
    return v2;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hUnit >> 9) & 0x3F];
  if ( v3 == 0 )
    return v2;
  v4 = &v3[*hUnit & 0x1FF];
  if ( v4 == 0 )
    return v2;
  if ( *hUnit != v4->m_EHandle.m_Index )
    return v2;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 )
    return v2;
  v2 = BYTE3(m_pInstance[7]._vptr_IHandleEntity);
  if ( v2 == 0 )
    return v2;
  v7 = *&m_pInstance[45].m_worldGroupId.m_nHashCode;
  if ( v7 == 0 )
    return 0;
  if ( (*(**(v7 + 34056) + 16LL))(*(v7 + 34056)) == 2 )
    return v2;
  LOBYTE(v2) = (*(**(*&m_pInstance[45].m_worldGroupId.m_nHashCode + 34056LL) + 16LL))(*(*&m_pInstance[45].m_worldGroupId.m_nHashCode
                                                                                      + 34056LL)) == 4;
  return v2;
}


// CDOTA_Bot_AbilityUsage_Warlock_Upheaval::GetCurrentUsageDesire  (line 184, @0x00000000028ef810, libserver.so)  // inlines: Get, GetFloat, GetInstance, GetInt, GetLevelSpecialValueFor<float>, GetTeamNumber, GetUnit, IsFullyCastable, IsTrained, ToDOTABaseNPC, operator CBaseEntity*, operator float, operator int, operator=
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::GetSpecialAbility, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAbilityModifierValues, CDOTABaseAbility::IsOwnersGoldEnough, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetAoELocation, CDOTA_Bot::GetNearbyHeroes
int __fastcall CDOTA_Bot_AbilityUsage_Warlock_Upheaval::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Warlock_Upheaval *const this)
{
  CDOTABaseAbility *m_pAbilityRainOfChaos; // r12
  CDOTABaseAbility *m_pAbilityFatalBonds; // r12
  CDOTABaseAbility *m_pAbility; // r12
  int EffectiveLevel; // r13d
  DOTASpecialAbility_t *SpecialAbility; // r14
  CDOTA_BaseNPC *Caster; // rax
  int m_nCount; // eax
  int v9; // edx
  bool v10; // cc
  fieldtype_t m_FieldType; // eax
  fieldtype_t *v12; // r13
  __int16 v13; // ax
  int v14; // r13d
  int v15; // r13d
  float v16; // xmm0_4
  float v17; // r12d
  int v18; // r13d
  int iRadius; // r12d
  int v21; // r13d
  CEntityInstance *v22; // rax
  const CBaseEntity *v23; // rdi
  const Vector *AbsOrigin; // r14
  CEntityInstance *v25; // rax
  CEntityInstance *v26; // rdx
  __m128i v27; // xmm2
  fieldtype_t v28; // eax
  fieldtype_t *v29; // r13
  float v30; // xmm0_4
  float v31; // [rsp+1Ch] [rbp-44h]
  int iTargetCount; // [rsp+2Ch] [rbp-34h] BYREF
  Vector vTargetLoc; // [rsp+30h] [rbp-30h] BYREF

  m_pAbilityRainOfChaos = this->m_pBot->m_pAbilityRainOfChaos;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityRainOfChaos) >= 0
    && (*(m_pAbilityRainOfChaos->_vptr_IHandleEntity + 245))(m_pAbilityRainOfChaos) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityRainOfChaos)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityRainOfChaos, -1)
    || (m_pAbilityFatalBonds = this->m_pBot->m_pAbilityFatalBonds,
        CDOTABaseAbility::GetEffectiveLevel(m_pAbilityFatalBonds) >= 0)
    && (*(m_pAbilityFatalBonds->_vptr_IHandleEntity + 245))(m_pAbilityFatalBonds) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityFatalBonds)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityFatalBonds, -1) )
  {
LABEL_23:
    this->m_vDesiredLocation = vec3_invalid;
    return 0;
  }
  m_pAbility = this->m_pAbility;
  EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(m_pAbility);
  if ( EffectiveLevel == -1 || (SpecialAbility = CDOTABaseAbility::GetSpecialAbility(m_pAbility, "aoe")) == 0 )
  {
LABEL_21:
    v17 = 0.0;
    goto LABEL_22;
  }
  *&iTargetCount = 1.0;
  vTargetLoc.x = 0.0;
  if ( CDOTABaseAbility::GetCaster(m_pAbility) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(m_pAbility);
    CDOTA_BaseNPC::GetAbilityModifierValues(Caster, "aoe", &iTargetCount, &vTargetLoc.x);
  }
  m_nCount = SpecialAbility->m_nCount;
  v9 = m_nCount - 1;
  v10 = EffectiveLevel < m_nCount;
  m_FieldType = SpecialAbility->m_FieldType;
  if ( !v10 )
    EffectiveLevel = v9;
  if ( m_FieldType == fieldtype_t::FIELD_FLOAT )
  {
    v29 = &SpecialAbility->m_FieldType + 4 * EffectiveLevel;
    if ( *(v29 + 8) == 34 )
      v30 = *(v29 + 1);
    else
      v30 = *(v29 + 2);
    v15 = 0;
    v16 = (v30 * *&iTargetCount) + vTargetLoc.x;
  }
  else if ( m_FieldType == fieldtype_t::FIELD_INTEGER )
  {
    v12 = &SpecialAbility->m_FieldType + 4 * EffectiveLevel;
    v13 = *(v12 + 8);
    if ( v13 == 1 )
    {
      v14 = *(v12 + 2);
    }
    else if ( v13 == 34 )
    {
      v14 = *(v12 + 1);
    }
    else
    {
      v14 = *(v12 + 2);
    }
    v15 = ((v14 * *&iTargetCount) + vTargetLoc.x);
    v16 = 0.0;
  }
  else
  {
    v15 = 0;
    v16 = 0.0;
  }
  v31 = v16;
  CDOTABaseAbility::GetCaster(m_pAbility);
  v28 = SpecialAbility->m_FieldType;
  v17 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(v31)));
  if ( v28 != fieldtype_t::FIELD_FLOAT )
  {
    if ( v28 == fieldtype_t::FIELD_INTEGER )
    {
      *v27.m128i_i32 = v15;
      v17 = COERCE_FLOAT(_mm_cvtsi128_si32(v27));
      goto LABEL_22;
    }
    goto LABEL_21;
  }
LABEL_22:
  v18 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_23;
  iRadius = v17;
  v21 = (v18 + 100.0);
  v22 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 )
    v23 = v22;
  else
    v23 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v23);
  v25 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 )
    v26 = v25;
  else
    v26 = 0;
  CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
    this,
    HIBYTE(v26[7].m_CScriptComponent),
    1,
    2,
    AbsOrigin,
    v21,
    0.0,
    iRadius,
    &vTargetLoc,
    &iTargetCount);
  if ( iTargetCount <= 2
    || CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY, 0, 0.0) <= 1 )
  {
    goto LABEL_23;
  }
  this->m_vDesiredLocation = vTargetLoc;
  return 3;
}


// CDOTA_Bot_AbilityUsage_Warlock_Upheaval::UseAbility  (line 215, @0x00000000028e1f20, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Warlock_Upheaval::UseAbility(
        CDOTA_Bot_AbilityUsage_Warlock_Upheaval *const this)
{
  CDOTA_Bot_Hero_Warlock *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos::CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos  (line 224, @0x00000000028e7640, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos::CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos(
        CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D23F0;  // vptr: CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos
}


// CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos::GetCurrentUsageDesire  (line 231, @0x00000000028ebae0, libserver.so)  // inlines: Get, GetInstance, GetTeamNumber, GetUnit, ToDOTABaseNPC, operator CBaseEntity*, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetAoELocation
int __fastcall CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos *const this)
{
  int LevelSpecialValue; // r12d
  int v3; // r13d
  int v5; // r13d
  CEntityInstance *v6; // rax
  const CBaseEntity *v7; // rdi
  const Vector *AbsOrigin; // r14
  CEntityInstance *v9; // rax
  CEntityInstance *v10; // rdx
  int iTargetCount; // [rsp+2Ch] [rbp-34h] BYREF
  Vector vTargetLoc; // [rsp+30h] [rbp-30h] BYREF

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "aoe", -1, 1);
  v3 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2
    && ((v5 = (v3 + 300.0), (v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) != 0)
     && BYTE3(v6[7]._vptr_IHandleEntity) != 0
      ? (v7 = v6)
      : (v7 = 0),
        (AbsOrigin = CBaseEntity::GetAbsOrigin(v7),
         (v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) == 0)
     || BYTE3(v9[7]._vptr_IHandleEntity) == 0
      ? (v10 = 0)
      : (v10 = v9),
        CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
          this,
          HIBYTE(v10[7].m_CScriptComponent),
          1,
          2,
          AbsOrigin,
          v5,
          0.0,
          LevelSpecialValue,
          &vTargetLoc,
          &iTargetCount),
        iTargetCount > 2) )
  {
    this->m_vDesiredLocation = vTargetLoc;
    return 3;
  }
  else
  {
    this->m_vDesiredLocation = vec3_invalid;
    return 0;
  }
}


// CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos::UseAbility  (line 255, @0x00000000028e1f80, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos::UseAbility(
        CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos *const this)
{
  CDOTA_Bot_Hero_Warlock *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_Unit_WarlockGolem::CDOTA_Bot_Unit_WarlockGolem  (line 264, @0x00000000028e7660, libserver.so)
// calls: CDOTA_Bot::CDOTA_Bot
// callers: CreateBotForUnit
void __fastcall CDOTA_Bot_Unit_WarlockGolem::CDOTA_Bot_Unit_WarlockGolem(
        CDOTA_Bot_Unit_WarlockGolem *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42D2450;
}


// CDOTA_Bot_Unit_WarlockGolem::CreateMode  (line 271, @0x00000000028e2250, libserver.so)  // inlines: CDOTA_BotMode_Attack_WarlockGolem
// calls: operator new, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, CDOTA_Bot::CreateMode, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Unit_WarlockGolem::CreateMode(CDOTA_Bot_Unit_WarlockGolem *const this, int iMode)
{
  CDOTA_BotMode_Attack *v3; // r12

  if ( this->m_bHuman )
    return CDOTA_Bot::CreateMode(this, iMode);
  if ( iMode != 2 )
    return 0;
  v3 = operator new(0xE8u);  // new CDOTA_BotMode_Attack_WarlockGolem (size matches)
  CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v3, this);
  v3->_vptr_CDOTA_BotMode = off_42D2550;  // vptr: CDOTA_BotMode_Attack_WarlockGolem
  return v3;
}


// CDOTA_BotMode_Attack_WarlockGolem::Think  (line 292, @0x00000000028e91a0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, Set, SetTarget, ToDOTABaseNPC, operator CBaseEntity*, operator=, operator[], ~CUtlVector
// calls: CDOTA_Bot::GetNearbyHeroes, SortEHANDLEVectorByHealth, CDOTA_BotMode::GetUnit, CDOTA_BotMode::IsBotTargetStatusValid, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::GetNearbyTowers, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, CDOTA_Bot::GetNearbyCreeps, CDOTA_Bot::SetAttackAction, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_Bot::SetMoveAction (13 total)
void __fastcall CDOTA_BotMode_Attack_WarlockGolem::Think(CDOTA_BotMode_Attack_WarlockGolem *const this)
{
  CDOTA_Bot *m_pBot; // rdi
  __int64 v3; // r12
  int v4; // r13d
  CDOTA_BaseNPC *v5; // r14
  CDOTA_BaseNPC *Unit; // rax
  CEntityInstance *v7; // rax
  CDOTA_Bot *v8; // rdi
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // rax
  __int64 v11; // r12
  int v12; // r13d
  CDOTA_Bot *v13; // rdi
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // rax
  __int64 v16; // r12
  int v17; // r13d
  CDOTA_BaseNPC *v18; // r14
  CDOTA_BaseNPC *v19; // rax
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC *v21; // r14
  CDOTA_BaseNPC *v22; // rax
  CEntityInstance *v23; // rax
  int v24; // eax
  CEntityIdentity *m_pEntity; // rdx
  int v26; // eax
  __int16 v27; // cx
  int v28; // eax
  CEntityIdentity *v29; // rdx
  int v30; // eax
  __int16 v31; // cx
  CDOTA_BaseNPC *v32; // rax
  unsigned __int16 v33; // dx
  __int64 v34; // rsi
  int v35; // eax
  CEntityIdentity *v36; // rcx
  CDOTA_Bot *v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  double v40; // xmm0_8
  CDOTA_Bot *v41; // rdi
  vec_t v42; // xmm1_4
  vec_t v43; // eax
  CEntityIdentity *v44; // rdx
  __int16 v45; // cx
  int (**vptr_CDOTA_Bot)(...); // rax
  int (*v47)(...); // rdx
  vec_t v48; // eax
  Vector vLoc; // [rsp+10h] [rbp-A0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemyHeroes; // [rsp+20h] [rbp-90h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemyTowers; // [rsp+40h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemyCreeps; // [rsp+60h] [rbp-50h] BYREF

  hNearbyEnemyHeroes.m_Memory.m_nAllocationCount = 0;
  m_pBot = this->m_pBot;
  hNearbyEnemyHeroes.m_Size = 0;
  hNearbyEnemyHeroes.m_Memory.m_nGrowSize = 0;
  hNearbyEnemyHeroes.m_Memory.m_pMemory = 0;
  CDOTA_Bot::GetNearbyHeroes(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hNearbyEnemyHeroes, 600.0);
  SortEHANDLEVectorByHealth(&hNearbyEnemyHeroes);
  v3 = 0;
  v4 = 0;
  if ( hNearbyEnemyHeroes.m_Size > 0 )
  {
    while ( 1 )
    {
      v7 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemyHeroes.m_Memory.m_pMemory[v3]);
      if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
        v5 = v7;
      else
        v5 = 0;
      Unit = CDOTA_BotMode::GetUnit(this);
      if ( CDOTA_BotMode::IsBotTargetStatusValid(this, v5, Unit, 253, -1.0) )
        break;
      ++v4;
      ++v3;
      if ( hNearbyEnemyHeroes.m_Size <= v4 )
        goto LABEL_9;
    }
    hNearbyEnemyCreeps.m_Size = -1;
    v24 = -1;
    if ( v5 != 0 )
    {
      m_pEntity = v5->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v26 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v27 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v27 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(hNearbyEnemyCreeps.m_Size) = v27 | hNearbyEnemyCreeps.m_Size & 0x8000;
        v24 = (v26 << 15) | hNearbyEnemyCreeps.m_Size & 0x7FFF;
        hNearbyEnemyCreeps.m_Size = v24;
      }
    }
    this->m_pBot->m_hTarget.m_Index = v24;
    CDOTA_Bot::SetAttackAction(this->m_pBot, v5, 0);
  }
  else
  {
LABEL_9:
    v8 = this->m_pBot;
    hNearbyEnemyTowers.m_Size = 0;
    hNearbyEnemyTowers.m_Memory.m_pMemory = 0;
    hNearbyEnemyTowers.m_Memory.m_nAllocationCount = 0;
    hNearbyEnemyTowers.m_Memory.m_nGrowSize = 0;
    CDOTA_Bot::GetNearbyTowers(v8, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hNearbyEnemyTowers, 0.0);
    v9 = CDOTA_BotMode::GetUnit(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
    SortEHANDLEVectorByLocation(&hNearbyEnemyTowers, AbsOrigin, 0);
    v11 = 0;
    v12 = 0;
    if ( hNearbyEnemyTowers.m_Size > 0 )
    {
      while ( 1 )
      {
        v23 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemyTowers.m_Memory.m_pMemory[v11]);
        if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
          v21 = v23;
        else
          v21 = 0;
        v22 = CDOTA_BotMode::GetUnit(this);
        if ( CDOTA_BotMode::IsBotTargetStatusValid(this, v21, v22, 253, -1.0) )
          break;
        ++v12;
        ++v11;
        if ( hNearbyEnemyTowers.m_Size <= v12 )
          goto LABEL_10;
      }
      hNearbyEnemyCreeps.m_Size = -1;
      v28 = -1;
      if ( v21 != 0 )
      {
        v29 = v21->m_pEntity;
        if ( v29 != 0 )
        {
          v30 = (v29->m_EHandle.m_Index >> 15) - (v29->m_flags & 1);
          v31 = 0x7FFF;
          if ( v29->m_EHandle.m_Index != -1 )
            v31 = v29->m_EHandle.m_Index & 0x7FFF;
          LOWORD(hNearbyEnemyCreeps.m_Size) = v31 | hNearbyEnemyCreeps.m_Size & 0x8000;
          v28 = (v30 << 15) | hNearbyEnemyCreeps.m_Size & 0x7FFF;
          hNearbyEnemyCreeps.m_Size = v28;
        }
      }
      this->m_pBot->m_hTarget.m_Index = v28;
      CDOTA_Bot::SetAttackAction(this->m_pBot, v21, 0);
    }
    else
    {
LABEL_10:
      v13 = this->m_pBot;
      hNearbyEnemyCreeps.m_Size = 0;
      hNearbyEnemyCreeps.m_Memory.m_pMemory = 0;
      hNearbyEnemyCreeps.m_Memory.m_nAllocationCount = 0;
      hNearbyEnemyCreeps.m_Memory.m_nGrowSize = 0;
      CDOTA_Bot::GetNearbyCreeps(v13, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hNearbyEnemyCreeps, 0.0);
      v14 = CDOTA_BotMode::GetUnit(this);
      v15 = CBaseEntity::GetAbsOrigin(v14);
      SortEHANDLEVectorByLocation(&hNearbyEnemyCreeps, v15, 0);
      v16 = 0;
      v17 = 0;
      if ( hNearbyEnemyCreeps.m_Size > 0 )
      {
        while ( 1 )
        {
          v20 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemyCreeps.m_Memory.m_pMemory[v16]);
          if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
            v18 = v20;
          else
            v18 = 0;
          v19 = CDOTA_BotMode::GetUnit(this);
          if ( CDOTA_BotMode::IsBotTargetStatusValid(this, v18, v19, 253, -1.0) )
            break;
          ++v17;
          ++v16;
          if ( hNearbyEnemyCreeps.m_Size <= v17 )
            goto LABEL_38;
        }
        v43 = NAN;
        vLoc.x = NAN;
        if ( v18 != 0 )
        {
          v44 = v18->m_pEntity;
          if ( v44 != 0 )
          {
            v45 = 0x7FFF;
            if ( v44->m_EHandle.m_Index != -1 )
              v45 = v44->m_EHandle.m_Index & 0x7FFF;
            LODWORD(v43) = (((v44->m_EHandle.m_Index >> 15) - (v44->m_flags & 1)) << 15) | v45 & 0x7FFF;
            vLoc.x = v43;
          }
        }
        *&this->m_pBot->m_hTarget.m_Index = v43;
        CDOTA_Bot::SetAttackAction(this->m_pBot, v18, 0);
      }
      else
      {
LABEL_38:
        v32 = CDOTA_BotMode::GetUnit(this);
        if ( v32->m_hOwnerEntity.m_Value.m_Index == -1 )
        {
          v33 = 0x7FFF;
          v34 = 0x7FFF;
        }
        else
        {
          v33 = v32->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
          v34 = v33;
        }
        v35 = (v32->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v33 & 0x7FFF;
        LODWORD(vLoc.x) = v35;
        v36 = g_pEntitySystem;
        v37 = (v35 + 2);
        if ( v37 > 1 )
        {
          v37 = (v34 >> 9);
          v36 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v37];
          if ( v36 != 0 )
          {
            v38 = v34 & 0x1FF;
            v39 = 8 * v38;
            v34 = v38 << 7;
            v37 = (v36 + v34 - v39);
            if ( v37 != 0 && v35 == v37->m_iLifesteal )
            {
              vptr_CDOTA_Bot = v37->_vptr_CDOTA_Bot;
              if ( v37->_vptr_CDOTA_Bot != 0 && *(vptr_CDOTA_Bot + 339) != 0 )
              {
                vLoc.x = NAN;
                v47 = vptr_CDOTA_Bot[1];
                if ( v47 != 0 )
                {
                  v36 = (&stru_7FF8 + 7);
                  if ( *(v47 + 4) != -1 )
                  {
                    v36 = *(v47 + 8);
                    LOWORD(v36) = v36 & 0x7FFF;
                  }
                  LODWORD(v48) = (((*(v47 + 4) >> 15) - (*(v47 + 12) & 1)) << 15) | v36 & 0x7FFF;
                  vLoc.x = v48;
                }
                else
                {
                  v48 = NAN;
                }
                v37 = this->m_pBot;
                *&v37->m_hTarget.m_Index = v48;
              }
            }
          }
        }
        v40 = (*(this->_vptr_CDOTA_BotMode + 11))(this, v34, v37, v36);
        v41 = this->m_pBot;
        vLoc.z = v42;
        *&vLoc.x = v40;
        CDOTA_Bot::SetMoveAction(v41, &vLoc, 1, 1);
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyCreeps);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyTowers);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyHeroes);
}


// CDOTA_BotMode_Attack_WarlockGolem::GetDesire  (line 358, @0x00000000028e1ea0, libserver.so)
float __fastcall CDOTA_BotMode_Attack_WarlockGolem::GetDesire(CDOTA_BotMode_Attack_WarlockGolem *const this)
{
  return 1.0;
}


// CDOTA_BotMode_Attack_WarlockGolem::CalculateDesiredLocation  (line 365, @0x00000000028e3850, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTarget, IndexToIdentity, LookupEntity, operator CEntityInstance*, operator bool, operator->
// calls: CDOTA_BotMode_Attack::CalculateDesiredLocation, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_BotMode_Attack_WarlockGolem::CalculateDesiredLocation(
        CDOTA_BotMode_Attack_WarlockGolem *const this)
{
  CEntityIdentity *v1; // rdx
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rsi
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v5; // rdx
  const Vector *AbsOrigin; // rax
  uint32 m_Index; // [rsp+20h] [rbp-10h]
  Vector v10; // 0:kr00_12.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_Index = this->m_pBot->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v1 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F]) != 0
    && (v2 = &v1[m_Index & 0x1FF]) != 0
    && m_Index == v2->m_EHandle.m_Index )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      m_pInstance = 0;
      v5 = &v3[m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
    else
    {
      m_pInstance = 0;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    *&result.x = *&AbsOrigin->x;
    result.z = AbsOrigin->z;
  }
  else
  {
    v10 = CDOTA_BotMode_Attack::CalculateDesiredLocation(this);
    *&result.x = *&v10.x;
    result.z = v10.z;
  }
  return result;
}


