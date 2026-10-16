
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Razor::CDOTA_Bot_Hero_Razor  (line 22, @0x00000000028d6700, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit, CDOTA_TutorialBot_Hero_Razor::CDOTA_TutorialBot_Hero_Razor
// strings: "razor_plasma_field", "razor_unstable_current", "razor_eye_of_the_storm"
void __fastcall CDOTA_Bot_Hero_Razor::CDOTA_Bot_Hero_Razor(
        CDOTA_Bot_Hero_Razor *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CF5D0;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityPlasmaField = CDOTA_BaseNPC::FindAbilityByName(v6, "razor_plasma_field", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityStaticLink = CDOTA_BaseNPC::FindAbilityByName(v8, "razor_static_link", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityUnstableCurrent = CDOTA_BaseNPC::FindAbilityByName(v10, "razor_unstable_current", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityEyeOfTheStorm = CDOTA_BaseNPC::FindAbilityByName(v12, "razor_eye_of_the_storm", 1);
}


// CDOTA_Bot_AbilityUsage_Razor_PlasmaField::CDOTA_Bot_AbilityUsage_Razor_PlasmaField  (line 35, @0x00000000028d6830, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Razor_PlasmaField::CDOTA_Bot_AbilityUsage_Razor_PlasmaField(
        CDOTA_Bot_AbilityUsage_Razor_PlasmaField *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CF730;  // vptr: CDOTA_Bot_AbilityUsage_Razor_PlasmaField
}


// CDOTA_Bot_AbilityUsage_Razor_PlasmaField::GetCurrentUsageDesire  (line 42, @0x00000000028dd6d0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, FastSqrt, Get, GetDistanceToEntity, GetInstance, GetManaPercent, GetTarget, GetTargetNPC, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValidBotTarget, Length, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator->, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::GetNearbyHeroes, CEntityHandle::operator CEntityInstance*, DOTACommander, CDOTA_Commander::GetIllusionState, IsBotTargetStatusValidCore, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_Bot_AbilityUsage::IsValidBotTarget, CBaseEntity::GetAbsOrigin, CDOTA_Bot::GetNearbyCreeps, __stack_chk_fail (13 total)
int __fastcall CDOTA_Bot_AbilityUsage_Razor_PlasmaField::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Razor_PlasmaField *const this)
{
  int v2; // eax
  CDOTA_Bot_Hero_Razor *v3; // rdi
  int m_Size; // eax
  int v5; // r12d
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC_Hero *v7; // r13
  int m_Id; // eax
  unsigned __int8 (__fastcall *v9)(CDOTA_Bot_AbilityUsage_Razor_PlasmaField *const, _QWORD); // r15
  CDOTA_Commander *v10; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // rsi
  int v14; // esi
  int result; // eax
  CDOTA_Bot_Hero_Razor *v16; // r12
  unsigned __int8 (__fastcall *v17)(CDOTA_Bot_Hero_Razor *, _QWORD); // r13
  unsigned int v18; // eax
  CEntityInstance *v19; // rax
  CDOTA_BaseNPC *v20; // rsi
  CDOTA_Bot_Hero_Razor *m_pBot; // r12
  CEntityInstance *v22; // rax
  CDOTA_BaseNPC *v23; // r13
  CEntityInstance *v24; // rax
  CDOTA_BaseNPC *v25; // rdi
  CDOTA_Bot_Hero_Razor *v26; // r12
  CEntityInstance *v27; // rax
  const CBaseEntity *v28; // rbx
  const CBaseEntity *v29; // r12
  const Vector *AbsOrigin; // rbx
  const Vector *v31; // rax
  float v32; // xmm0_4
  float v33; // xmm0_4
  CDOTA_Bot_Hero_Razor *v34; // rdi
  __int64 v35; // r12
  int v36; // r14d
  const CBaseEntity *v37; // r15
  const Vector *v38; // r13
  const Vector *v39; // rax
  float v40; // xmm0_4
  const CBaseEntity *v41; // r13
  CEntityInstance *v42; // rax
  CEntityInstance *v43; // rax
  float fRadius; // [rsp+Ch] [rbp-F4h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyCreeps; // [rsp+10h] [rbp-F0h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hEntities; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v47; // [rsp+C8h] [rbp-38h]

  v47 = __readfsqword(0x28u);
  fRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 == 2 )
  {
    v19 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
      v20 = v19;
    else
      v20 = 0;
    if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v20) )
    {
      m_pBot = this->m_pBot;
      v22 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
      if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 )
        v23 = v22;
      else
        v23 = 0;
      v24 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
      if ( v24 != 0 && BYTE3(v24[7]._vptr_IHandleEntity) != 0 )
        v25 = v24;
      else
        v25 = 0;
      if ( IsBotTargetStatusValidCore(v25, v23, 251, -1.0, this->m_pAbility) )
      {
        v26 = this->m_pBot;
        v27 = CEntityHandle::operator CEntityInstance *(&v26->m_hUnit);
        v28 = v27;
        if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
        {
          hNearbyCreeps.m_Size = v26->m_hTarget.m_Index;
          v29 = CEntityHandle::operator CEntityInstance *(&hNearbyCreeps);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v28);
          v31 = CBaseEntity::GetAbsOrigin(v29);
          v32 = fsqrt(
                  (((v31->x - AbsOrigin->x) * (v31->x - AbsOrigin->x))
                 + ((v31->y - AbsOrigin->y) * (v31->y - AbsOrigin->y)))
                + ((v31->z - AbsOrigin->z) * (v31->z - AbsOrigin->z)));
        }
        else
        {
          v32 = -1.0;
        }
        v33 = v32 / fRadius;
        if ( v33 > 0.5 )
        {
          result = 3;
          if ( v33 >= 0.89999998 )
            return 0;
          return result;
        }
      }
    }
    return 0;
  }
  if ( v2 <= 2 )
  {
    if ( v2 == 1 )
    {
      v3 = this->m_pBot;
      hEntities.m_Size = 0;
      hEntities.m_Memory.m_nAllocationCount = 32;
      hEntities.m_Memory.m_nGrowSize = 0x80000000;
      hEntities.m_Memory.m_pMemory = &hEntities.m_FixedMemory;
      CDOTA_Bot::GetNearbyHeroes(v3, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEntities, fRadius - 200.0);
      m_Size = hEntities.m_Size;
      if ( hEntities.m_Size > 0 )
      {
        v5 = 0;
        do
        {
          v6 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v5]);
          v7 = v6;
          if ( v6 == 0 )
            goto LABEL_15;
          if ( BYTE3(v6[7]._vptr_IHandleEntity) == 0 )
            goto LABEL_15;
          m_Id = v6[43].m_iszPrivateVScripts.u.m_Id;
          if ( (m_Id & 3) == 0 && !this->m_bUseOnCreeps )
            goto LABEL_15;
          if ( (m_Id & 1) != 0 )
          {
            v9 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
            v10 = DOTACommander();
            IllusionState = CDOTA_Commander::GetIllusionState(v10, v7);
            if ( v9(this, IllusionState) == 0 )
              goto LABEL_15;
          }
          v12 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v12 == 0 || (v13 = v12, BYTE3(v12[7]._vptr_IHandleEntity) == 0) )
            v13 = 0;
          if ( !IsBotTargetStatusValidCore(v7, v13, 251, -1.0, this->m_pAbility) )
          {
LABEL_15:
            v14 = v5--;
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hEntities, v14);
          }
          m_Size = hEntities.m_Size;
          ++v5;
        }
        while ( hEntities.m_Size > v5 );
        if ( hEntities.m_Size > 1 )
          goto LABEL_18;
      }
      if ( m_Size != 1 )
        goto LABEL_57;
      v43 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v43 == 0 || BYTE3(v43[7]._vptr_IHandleEntity) == 0 )
        v43 = 0;
      if ( ((100.0 * *&v43[44].m_iszPrivateVScripts.u.m_Id) / *&v43[44].m_worldGroupId.m_nHashCode) > 80 )
      {
LABEL_18:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
        return 1;
      }
      else
      {
LABEL_57:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
        return 0;
      }
    }
    return 0;
  }
  if ( (v2 - 8) > 5 )
    return 0;
  v16 = this->m_pBot;
  v17 = *(v16->_vptr_CDOTA_Bot + 10);
  v18 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
  if ( v17(v16, v18) == 0 )
    return 0;
  v34 = this->m_pBot;
  hNearbyCreeps.m_Size = 0;
  hNearbyCreeps.m_Memory.m_pMemory = 0;
  hNearbyCreeps.m_Memory.m_nAllocationCount = 0;
  hNearbyCreeps.m_Memory.m_nGrowSize = 0;
  CDOTA_Bot::GetNearbyCreeps(v34, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hNearbyCreeps, 0.0);
  if ( hNearbyCreeps.m_Size <= 0 )
    goto LABEL_64;
  v35 = 0;
  v36 = 0;
  do
  {
    v41 = CEntityHandle::operator CEntityInstance *(&hNearbyCreeps.m_Memory.m_pMemory[v35]);
    v42 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v42 != 0 && BYTE3(v42[7]._vptr_IHandleEntity) != 0 )
    {
      v37 = v42;
      if ( v41 != 0 )
        goto LABEL_45;
    }
    else
    {
      v37 = 0;
      if ( v41 != 0 )
      {
LABEL_45:
        v38 = CBaseEntity::GetAbsOrigin(v41);
        v39 = CBaseEntity::GetAbsOrigin(v37);
        v40 = fsqrt(
                (((v39->x - v38->x) * (v39->x - v38->x)) + ((v39->y - v38->y) * (v39->y - v38->y)))
              + ((v39->z - v38->z) * (v39->z - v38->z)));
        goto LABEL_46;
      }
    }
    v40 = -1.0;
LABEL_46:
    if ( fRadius > v40 )
      ++v36;
    ++v35;
  }
  while ( hNearbyCreeps.m_Size > v35 );
  if ( v36 > 3 )
  {
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyCreeps);
    return 2;
  }
LABEL_64:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyCreeps);
  return 0;
}


// CDOTA_Bot_AbilityUsage_Razor_PlasmaField::UseAbility  (line 121, @0x00000000028d2270, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Razor_PlasmaField::UseAbility(
        CDOTA_Bot_AbilityUsage_Razor_PlasmaField *const this)
{
  CDOTA_Bot_Hero_Razor *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_Razor_StaticLink::CDOTA_Bot_AbilityUsage_Razor_StaticLink  (line 130, @0x00000000028d6850, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Razor_StaticLink::CDOTA_Bot_AbilityUsage_Razor_StaticLink(
        CDOTA_Bot_AbilityUsage_Razor_StaticLink *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CF790;  // vptr: CDOTA_Bot_AbilityUsage_Razor_StaticLink
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Razor_StaticLink::GetCurrentUsageDesire  (line 137, @0x00000000028d5750, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, Get, GetDistanceToEntity, GetInstance, GetTarget, GetTargetNPC, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValidBotTarget, Length, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=
// calls: CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore, CBaseEntity::GetAbsOrigin, DOTACommander, CDOTA_Commander::GetIllusionState
int __fastcall CDOTA_Bot_AbilityUsage_Razor_StaticLink::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Razor_StaticLink *const this)
{
  CDOTA_Bot_Hero_Razor *m_pBot; // r13
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC_Hero *v4; // r12
  int m_Id; // eax
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // rsi
  CDOTA_Bot_AbilityUsage *m_pBotUsage; // rdi
  CEntityInstance *v9; // rax
  const CBaseEntity *v10; // r13
  const Vector *AbsOrigin; // r12
  const Vector *v12; // rax
  unsigned __int8 (__fastcall *v14)(CDOTA_Bot_AbilityUsage_Razor_StaticLink *const, _QWORD); // r13
  CDOTA_Commander *v15; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  float v17; // [rsp+0h] [rbp-30h]

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_17;
  m_pBot = this->m_pBot;
  v3 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
  v4 = v3;
  if ( v3 == 0 )
    goto LABEL_17;
  if ( BYTE3(v3[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_17;
  m_Id = v3[43].m_iszPrivateVScripts.u.m_Id;
  if ( (m_Id & 3) == 0 && !this->m_bUseOnCreeps )
    goto LABEL_17;
  if ( (m_Id & 1) != 0 )
  {
    v14 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
    v15 = DOTACommander();
    IllusionState = CDOTA_Commander::GetIllusionState(v15, v4);
    if ( v14(this, IllusionState) == 0 )
      goto LABEL_17;
    m_pBot = this->m_pBot;
  }
  v6 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v6 == 0 || (v7 = v6, BYTE3(v6[7]._vptr_IHandleEntity) == 0) )
    v7 = 0;
  if ( IsBotTargetStatusValidCore(v4, v7, 251, -1.0, this->m_pAbility) )
  {
    m_pBotUsage = this->m_pBot->m_pAbilityPlasmaField->m_pBotUsage;
    if ( (*(m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(m_pBotUsage) == 0 )
    {
      v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v9 == 0 || (v10 = v9, BYTE3(v9[7]._vptr_IHandleEntity) == 0) )
        v10 = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
      v12 = CBaseEntity::GetAbsOrigin(v10);
      v17 = fsqrt(
              (((v12->x - AbsOrigin->x) * (v12->x - AbsOrigin->x)) + ((v12->y - AbsOrigin->y) * (v12->y - AbsOrigin->y)))
            + ((v12->z - AbsOrigin->z) * (v12->z - AbsOrigin->z)));
      if ( ((*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0) - 200.0) > v17 )
      {
        this->m_hDesiredTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
        return 3;
      }
    }
  }
LABEL_17:
  this->m_hDesiredTarget.m_Index = -1;
  return 0;
}


// CDOTA_Bot_AbilityUsage_Razor_StaticLink::UseAbility  (line 167, @0x00000000028d3cc0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Razor_StaticLink::UseAbility(
        CDOTA_Bot_AbilityUsage_Razor_StaticLink *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_Razor *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm::CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm  (line 180, @0x00000000028d6880, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm::CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm(
        CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CF7F0;  // vptr: CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm
}


// CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm::GetCurrentUsageDesire  (line 187, @0x00000000028dc5d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetInstance, GetManaPercent, GetTargetNPC, GetTeamNumber, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsValidBotTarget, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, DOTACommander, CDOTA_Commander::GetIllusionState, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, _Unwind_Resume
int __fastcall CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm *const this)
{
  int LevelSpecialValue; // ebx
  int v3; // eax
  CEntityInstance *v4; // rax
  CDOTA_BaseNPC *v5; // rsi
  CDOTA_Bot_Hero_Razor *m_pBot; // rbx
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // r12
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rdi
  CDOTA_Bot_AbilityUsage *m_pBotUsage; // rdi
  int result; // eax
  EHANDLE *p_m_hUnit; // r12
  CEntityInstance *v14; // rax
  __m128i v15; // xmm1
  int v16; // edx
  const CEntityHandle *v17; // rdi
  CDOTA_BaseNPC *v18; // r12
  float v19; // ebx
  CEntityInstance *v20; // rax
  const Vector *AbsOrigin; // r14
  CEntityInstance *v22; // rax
  CEntityInstance *v23; // rdx
  int v24; // ebx
  CEntityInstance *v25; // rax
  CDOTA_BaseNPC_Hero *v26; // r12
  int m_Id; // eax
  CDOTA_Commander *v28; // rax
  __int64 IllusionState; // rsi
  CEntityInstance *v30; // rax
  CDOTA_BaseNPC *v31; // rsi
  CDOTA_BaseNPC *v32; // rdi
  int v33; // esi
  unsigned __int8 (__fastcall *v34)(CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm *const, __int64); // [rsp+18h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+20h] [rbp-50h] BYREF

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  v3 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v3 != 1 )
  {
    if ( v3 != 2 )
      return 0;
    v4 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
      v5 = v4;
    else
      v5 = 0;
    if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v5)
      && ((m_pBot = this->m_pBot, (v7 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit)) == 0)
       || BYTE3(v7[7]._vptr_IHandleEntity) == 0
        ? (v8 = 0)
        : (v8 = v7),
          (v9 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget)) == 0
       || BYTE3(v9[7]._vptr_IHandleEntity) == 0
        ? (v10 = 0)
        : (v10 = v9),
          IsBotTargetStatusValidCore(v10, v8, 251, -1.0, this->m_pAbility)
       && (m_pBotUsage = this->m_pBot->m_pAbilityPlasmaField->m_pBotUsage,
           (*(m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(m_pBotUsage) == 0)) )
    {
      return 2;
    }
    else
    {
      return 0;
    }
  }
  p_m_hUnit = &this->m_pBot->m_hUnit;
  v14 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v14 == 0 || BYTE3(v14[7]._vptr_IHandleEntity) == 0 )
    v14 = 0;
  v16 = ((100.0 * *&v14[44].m_iszPrivateVScripts.u.m_Id) / *&v14[44].m_worldGroupId.m_nHashCode);
  result = 0;
  if ( v16 > 80 )
  {
    *v15.m128i_i32 = LevelSpecialValue;
    v17 = p_m_hUnit;
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_pMemory = 0;
    v18 = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
    v20 = CEntityHandle::operator CEntityInstance *(v17);
    if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
      v18 = v20;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v18);
    v22 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 )
      v23 = v22;
    else
      v23 = 0;
    FindUnitsInRadius(HIBYTE(v23[7].m_CScriptComponent), AbsOrigin, v18, v19, &hEntities, 2, 7, 128, 0, 0);
    if ( hEntities.m_Size <= 0 )
      goto LABEL_53;
    v24 = 0;
    while ( 1 )
    {
      v25 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v24]);
      v26 = v25;
      if ( v25 == 0
        || BYTE3(v25[7]._vptr_IHandleEntity) == 0
        || ((m_Id = v25[43].m_iszPrivateVScripts.u.m_Id) & 3) == 0 && !this->m_bUseOnCreeps )
      {
LABEL_49:
        v33 = v24--;
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hEntities, v33);
        goto LABEL_43;
      }
      if ( (m_Id & 1) != 0 )
      {
        v34 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
        v28 = DOTACommander();
        IllusionState = CDOTA_Commander::GetIllusionState(v28, v26);
        if ( v34(this, IllusionState) == 0 )
          goto LABEL_49;
        v26 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v24]);
      }
      v30 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v30 != 0 && (v31 = v30, BYTE3(v30[7]._vptr_IHandleEntity) != 0) )
      {
        if ( v26 == 0 )
          goto LABEL_48;
      }
      else
      {
        v31 = 0;
        if ( v26 == 0 )
          goto LABEL_48;
      }
      if ( v26->m_bIsDOTANPC )
      {
        v32 = v26;
        goto LABEL_42;
      }
LABEL_48:
      v32 = 0;
LABEL_42:
      if ( !IsBotTargetStatusValidCore(v32, v31, 251, -1.0, this->m_pAbility) )
        goto LABEL_49;
LABEL_43:
      if ( hEntities.m_Size <= ++v24 )
      {
        if ( hEntities.m_Size > 8 )
        {
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
          return 2;
        }
LABEL_53:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
        return 0;
      }
    }
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm::UseAbility  (line 238, @0x00000000028d22d0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm::UseAbility(
        CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm *const this)
{
  CDOTA_Bot_Hero_Razor *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_TutorialBot_Hero_Razor::CDOTA_TutorialBot_Hero_Razor  (line 256, @0x00000000028d68a0, libserver.so)
// calls: CDOTA_Bot_Hero_Razor::CDOTA_Bot_Hero_Razor
// callers: CreateBotForUnit
void __fastcall CDOTA_TutorialBot_Hero_Razor::CDOTA_TutorialBot_Hero_Razor(
        CDOTA_TutorialBot_Hero_Razor *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  CDOTA_Bot_Hero_Razor::CDOTA_Bot_Hero_Razor(this, pPlayer, pUnit, pTeamCommander);
  this->m_bHasSeenEnemy = 0;
  this->_vptr_CDOTA_Bot = &off_42CF850;
}


// CDOTA_TutorialBot_Hero_Razor::CreateMode  (line 266, @0x00000000028d2880, libserver.so)  // inlines: GetBool, GetInt
// calls: CDOTA_Bot::CreateMode, operator new, CDOTA_BotMode_TutorialBoss::CDOTA_BotMode_TutorialBoss, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_TutorialBot_Hero_Razor::CreateMode(CDOTA_TutorialBot_Hero_Razor *const this, int iMode)
{
  CDOTA_BotMode *result; // rax
  CDOTA_BotMode_TutorialBoss *v4; // r12

  if ( this->m_bHuman || dota_bot_tutorial_boss.m_pParent->m_Value.m_nValue == 0 )
    return CDOTA_Bot::CreateMode(this, iMode);
  result = 0;
  if ( iMode == 24 )
  {
    v4 = operator new(0x118u);
    CDOTA_BotMode_TutorialBoss::CDOTA_BotMode_TutorialBoss(v4, this);
    return v4;
  }
  return result;
}


// CDOTA_TutorialBot_Hero_Razor::GetInitialMode  (line 283, @0x00000000028d1fb0, libserver.so)  // inlines: GetBool, GetInt
DOTA_BOT_MODE __fastcall CDOTA_TutorialBot_Hero_Razor::GetInitialMode(CDOTA_TutorialBot_Hero_Razor *const this)
{
  if ( !this->m_bHuman && dota_bot_tutorial_boss.m_pParent->m_Value.m_nValue != 0 )
    return DOTA_BOT_MODE::DOTA_BOT_MODE_TUTORIAL_BOSS;
  else
    return DOTA_BOT_MODE::DOTA_BOT_MODE_LANING;
}


// CDOTA_TutorialBot_Hero_Razor::Think  (line 295, @0x00000000028d34b0, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetBool, GetEntryIndex, GetHandleEntity, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, operator CBaseEntity*
// calls: CDOTA_Bot::GetOwningHero, UTIL_PlayerByIndex, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CDOTA_Bot::Think
void __fastcall CDOTA_TutorialBot_Hero_Razor::Think(CDOTA_TutorialBot_Hero_Razor *const this)
{
  CDOTA_BaseNPC_Hero *OwningHero; // r15
  CEntityIndex v3; // r12d
  CBasePlayer *v4; // rax
  CBasePlayer *v5; // rbx
  unsigned __int16 v6; // dx
  int v7; // esi
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // rsi

  if ( dota_tutorial_see_enemy.m_pParent->m_Value.m_nValue == 0 )
  {
LABEL_23:
    this->m_bHasSeenEnemy = 1;
    goto LABEL_24;
  }
  if ( this->m_bHasSeenEnemy )
    goto LABEL_24;
  OwningHero = CDOTA_Bot::GetOwningHero(this);
  if ( OwningHero != 0 && gpGlobals->maxClients > 0 )
  {
    v3.m_Data = 1;
    while ( 1 )
    {
      v4 = UTIL_PlayerByIndex(v3);
      v5 = v4;
      if ( v4 != 0
        && (*(v4->_vptr_IHandleEntity + 140))(v4) != 0
        && (*(v5->_vptr_IHandleEntity + 391))(v5) == 0
        && !v5->m_pl.hltv )
      {
        break;
      }
      if ( gpGlobals->maxClients < ++v3.m_Data )
        goto LABEL_11;
    }
    if ( v5[1].m_iMaxHealth.m_Value == -1 )
    {
      v6 = 0x7FFF;
      v7 = 0x7FFF;
    }
    else
    {
      v6 = v5[1].m_iMaxHealth.m_Value & 0x7FFF;
      v7 = v6;
    }
    v8 = (v5[1].m_iMaxHealth.m_Value >> 15 << 15) | v6 & 0x7FFF;
    if ( (v8 + 2) > 1 )
    {
      v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
      if ( v9 != 0 )
      {
        v10 = &v9[v7 & 0x1FF];
        if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        {
          m_pInstance = v10->m_pInstance;
          if ( v10->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(OwningHero, m_pInstance) )
          {
            goto LABEL_23;
          }
        }
      }
    }
  }
LABEL_11:
  if ( this->m_bHasSeenEnemy )
LABEL_24:
    CDOTA_Bot::Think(this);
}


