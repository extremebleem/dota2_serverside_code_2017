
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_WitchDoctor::CDOTA_Bot_Hero_WitchDoctor  (line 21, @0x00000000028e78a0, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit, CDOTA_TutorialBot_Hero_WitchDoctor::CDOTA_TutorialBot_Hero_WitchDoctor
// strings: "witch_doctor_paralyzing_cask", "witch_doctor_voodoo_restoration", "witch_doctor_maledict", "witch_doctor_death_ward"
void __fastcall CDOTA_Bot_Hero_WitchDoctor::CDOTA_Bot_Hero_WitchDoctor(
        CDOTA_Bot_Hero_WitchDoctor *const this,
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
  this->_vptr_CDOTA_Bot = &off_42D29D0;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityParalyzingCask = CDOTA_BaseNPC::FindAbilityByName(v6, "witch_doctor_paralyzing_cask", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityVoodooRestoration = CDOTA_BaseNPC::FindAbilityByName(v8, "witch_doctor_voodoo_restoration", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityMaledict = CDOTA_BaseNPC::FindAbilityByName(v10, "witch_doctor_maledict", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityDeathWard = CDOTA_BaseNPC::FindAbilityByName(v12, "witch_doctor_death_ward", 1);
}


// CDOTA_Bot_Hero_WitchDoctor::CreateMode  (line 32, @0x00000000028e2340, libserver.so)  // inlines: CDOTA_BotMode_Attack_WitchDoctor
// calls: CDOTA_Bot::CreateMode, operator new, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_WitchDoctor::CreateMode(CDOTA_Bot_Hero_WitchDoctor *const this, int iMode)
{
  CDOTA_BotMode_Attack *v4; // r12

  if ( this->m_bHuman || iMode != 2 )
    return CDOTA_Bot::CreateMode(this, iMode);
  v4 = operator new(0xE8u);  // new CDOTA_BotMode_Attack_WitchDoctor (size matches)
  CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v4, this);
  v4->_vptr_CDOTA_BotMode = off_42D2AD0;  // vptr: CDOTA_BotMode_Attack_WitchDoctor
  return v4;
}


// CDOTA_BotMode_Attack_WitchDoctor::Think  (line 47, @0x00000000028e4a80, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, Get, GetDistanceToEntity, GetEntityIdentity, GetEntryIndex, GetInstance, GetTarget, GetTargetNPC, IndexToIdentity, IsFullyCastable, IsTrained, Length, LookupEntity, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator bool, operator-, operator->
// calls: CDOTA_BotMode_Attack::Think, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CEntityHandle::operator CEntityInstance*, CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, CDOTA_Bot::SetMoveAction, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_Attack_WitchDoctor::Think(CDOTA_BotMode_Attack_WitchDoctor *const this)
{
  CDOTA_Bot *m_pBot; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTABaseAbility *v6; // r13
  __int64 v7; // rdi
  unsigned __int8 (__fastcall *v8)(__int64, CEntityHandle *); // rax
  CEntityInstance *v9; // rax
  const CBaseEntity *v10; // r13
  CDOTA_BaseNPC *Unit; // r15
  const Vector *AbsOrigin; // r13
  const Vector *v13; // rax
  __m128i v14; // xmm0
  float v15; // r13d
  const CBaseEntity *v16; // rax
  const Vector *v17; // rax
  float v18; // [rsp+Ch] [rbp-54h]
  CEntityHandle v19; // [rsp+20h] [rbp-40h] BYREF

  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_5;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F];
  if ( v4 == 0 )
    goto LABEL_5;
  v5 = &v4[m_Index & 0x1FF];
  if ( v5 == 0 )
    goto LABEL_5;
  if ( m_Index != v5->m_EHandle.m_Index )
    goto LABEL_5;
  v6 = *&m_pBot[1].m_iLifesteal;
  if ( CDOTABaseAbility::GetEffectiveLevel(v6) < 0 )
    goto LABEL_5;
  if ( (*(v6->_vptr_IHandleEntity + 245))(v6) == 0 )
    goto LABEL_5;
  if ( !CDOTABaseAbility::IsOwnersManaEnough(v6) )
    goto LABEL_5;
  if ( !CDOTABaseAbility::IsOwnersGoldEnough(v6, -1) )
    goto LABEL_5;
  v7 = *(*&m_pBot[1].m_iLifesteal + 776LL);
  v8 = *(*v7 + 56LL);
  v19.m_Index = this->m_pBot->m_hTarget.m_Index;
  if ( v8(v7, &v19) == 0 )
    goto LABEL_5;
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  v10 = v9;
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
  {
    Unit = CDOTA_BotMode::GetUnit(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
    v13 = CBaseEntity::GetAbsOrigin(Unit);
    v18 = (((v13->x - AbsOrigin->x) * (v13->x - AbsOrigin->x)) + ((v13->y - AbsOrigin->y) * (v13->y - AbsOrigin->y)))
        + ((v13->z - AbsOrigin->z) * (v13->z - AbsOrigin->z));
    v14 = LODWORD(v18);
    *v14.m128i_i32 = fsqrt(v18);
    v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
  }
  else
  {
    CDOTA_BotMode::GetUnit(this);
    v15 = -1.0;
  }
  if ( v15 > (*(**&m_pBot[1].m_iLifesteal + 1808LL))(*&m_pBot[1].m_iLifesteal, &vec3_origin, 0) )
  {
    v19.m_Index = this->m_pBot->m_hTarget.m_Index;
    v16 = CEntityHandle::operator CEntityInstance *(&v19);
    v17 = CBaseEntity::GetAbsOrigin(v16);
    CDOTA_Bot::SetMoveAction(this->m_pBot, v17, 0, 1);
  }
  else
  {
LABEL_5:
    CDOTA_BotMode_Attack::Think(this);
  }
}


// CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask::CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask  (line 69, @0x00000000028e79d0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask::CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask(
        CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D2B70;  // vptr: CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask::GetCurrentUsageDesire  (line 76, @0x00000000028eab20, libserver.so)
// calls: CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_WitchDoctor>::GetGenericStunDesire
int __fastcall CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask *const this)
{
  return CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_WitchDoctor>::GetGenericStunDesire(
           this,
           1,
           &this->m_hDesiredTarget,
           0.0);
}


// CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask::UseAbility  (line 86, @0x00000000028e4010, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask::UseAbility(
        CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_Bot_Hero_WitchDoctor *m_pBot; // r14
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


// CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration::CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration  (line 99, @0x00000000028e7a00, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration::CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration(
        CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D2BD0;  // vptr: CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration
}


// CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration::GetCurrentUsageDesire  (line 106, @0x00000000028edc80, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetActiveModeDesire, GetHealthDeficit, GetHealthPercent, GetInstance, GetMana, GetTargetNPC, GetUnit, ToDOTABaseNPC, operator CBaseEntity*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::GetNearbyHeroes, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetHealth, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CBaseEntity::GetDistanceToEntity, CDOTABaseAbility::IsFullyCastable, _Unwind_Resume
int __fastcall CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration *const this)
{
  int v2; // eax
  CDOTABaseAbility *m_pAbility; // rdi
  int LevelSpecialValue; // eax
  __int64 v5; // r13
  int v6; // r12d
  int v7; // r14d
  char v8; // r15
  CEntityInstance *v9; // rax
  const CBaseEntity *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // ebx
  CDOTA_Bot_Hero_WitchDoctor *v15; // r13
  CEntityInstance *v16; // rax
  CEntityInstance *v17; // rax
  const CBaseEntity *v18; // r12
  CEntityInstance *v19; // rax
  const CBaseEntity *v20; // rsi
  CDOTA_Bot_Hero_WitchDoctor *v21; // r12
  CEntityInstance *v22; // rax
  float v23; // r13d
  CDOTA_Bot_Hero_WitchDoctor *m_pBot; // r12
  CEntityInstance *v25; // rax
  const CBaseEntity *v26; // r12
  int v27; // r13d
  char bWantsEnabled; // [rsp+13h] [rbp-5Dh]
  int iAllyTotalHealthDeficit; // [rsp+14h] [rbp-5Ch]
  int v30; // [rsp+18h] [rbp-58h]
  __int64 v31; // [rsp+18h] [rbp-58h]
  float DistanceToEntity; // [rsp+18h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hAllies; // [rsp+20h] [rbp-50h] BYREF

  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v2 == 4 )
  {
    m_pBot = this->m_pBot;
    if ( m_pBot->m_fModeDesires[(*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode)] >= 0.75 )
    {
      v25 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 )
        v26 = v25;
      else
        v26 = 0;
      v27 = (*(v26->_vptr_IHandleEntity + 156))(v26);
      if ( v27 - CBaseEntity::GetHealth(v26) > 100 )
        goto LABEL_36;
    }
LABEL_3:
    bWantsEnabled = 0;
    goto LABEL_4;
  }
  if ( v2 != 18 )
    goto LABEL_3;
  v15 = this->m_pBot;
  v16 = CEntityHandle::operator CEntityInstance *(&v15->m_hTarget);
  if ( v16 == 0 || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
    v16 = 0;
  v17 = CEntityHandle::operator CEntityInstance *((*&v16[45].m_worldGroupId.m_nHashCode + 712LL));
  v18 = v17;
  if ( v17 == 0 || BYTE3(v17[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_3;
  v19 = CEntityHandle::operator CEntityInstance *(&v15->m_hUnit);
  if ( v19 == 0 || (v20 = v19, BYTE3(v19[7]._vptr_IHandleEntity) == 0) )
    v20 = 0;
  DistanceToEntity = CBaseEntity::GetDistanceToEntity(v18, v20);
  if ( (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0) <= DistanceToEntity )
    goto LABEL_3;
  if ( !CDOTABaseAbility::IsFullyCastable(this->m_pBot->m_pAbilityParalyzingCask) )
  {
LABEL_36:
    bWantsEnabled = 1;
    goto LABEL_4;
  }
  v21 = this->m_pBot;
  v22 = CEntityHandle::operator CEntityInstance *(&v21->m_hUnit);
  if ( v22 == 0 || BYTE3(v22[7]._vptr_IHandleEntity) == 0 )
    v22 = 0;
  v23 = *&v22[44].m_iszPrivateVScripts.u.m_Id;
  bWantsEnabled = (v23
                 - (*(v21->m_pAbilityParalyzingCask->_vptr_IHandleEntity + 273))(
                     v21->m_pAbilityParalyzingCask,
                     0xFFFFFFFFLL)) > 40.0;
LABEL_4:
  m_pAbility = this->m_pAbility;
  hAllies.m_Size = 0;
  hAllies.m_Memory.m_pMemory = 0;
  hAllies.m_Memory.m_nAllocationCount = 0;
  hAllies.m_Memory.m_nGrowSize = 0;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(m_pAbility, "radius", -1, 1);
  CDOTA_Bot::GetNearbyHeroes(
    this->m_pBot,
    DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY,
    &hAllies,
    LevelSpecialValue);
  if ( hAllies.m_Size > 0 )
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    iAllyTotalHealthDeficit = 0;
    v8 = 0;
    do
    {
      v9 = CEntityHandle::operator CEntityInstance *(&hAllies.m_Memory.m_pMemory[v5]);
      v10 = v9;
      if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
      {
        v30 = (*(v9->_vptr_IHandleEntity + 156))(v9);
        iAllyTotalHealthDeficit += v30 - CBaseEntity::GetHealth(v10);
        v7 += (*(v10->_vptr_IHandleEntity + 156))(v10);
        v31 = 100LL * CBaseEntity::GetHealth(v10);
        v11 = (*(v10->_vptr_IHandleEntity + 156))(v10);
        v12 = v11;
        if ( v11 <= 0 )
          v12 = 1;
        if ( (v31 / v12) <= 24 )
          v8 = 1;
      }
      ++v6;
      ++v5;
    }
    while ( hAllies.m_Size > v6 );
    if ( iAllyTotalHealthDeficit > (v7 * 0.25) || v8 != 0 )
      goto LABEL_15;
  }
  if ( bWantsEnabled != 0 )
LABEL_15:
    v13 = 3;
  else
    v13 = 0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAllies);
  return v13;
}


// CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration::UseAbility  (line 181, @0x00000000028e2640, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration::UseAbility(
        CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration *const this)
{
  CDOTA_Bot_Hero_WitchDoctor *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict::CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict  (line 190, @0x00000000028e7a20, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict::CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict(
        CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D2C30;  // vptr: CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict
}


// CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict::FindFilter  (line 197, @0x00000000028e4390, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetHealthPercent, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
_BOOL8 __fastcall CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict::FindFilter(
        CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict *const this,
        _DWORD *hUnit)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  const CBaseEntity *m_pInstance; // r12
  _BOOL4 m_bIsDOTANPC; // ebx
  __int64 v7; // r13
  int v8; // eax
  __int64 v9; // rcx

  if ( (*hUnit + 2) <= 1 )
    return 0;
  v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hUnit >> 9) & 0x3F];
  if ( v2 == 0 )
    return 0;
  v3 = &v2[*hUnit & 0x1FF];
  if ( v3 == 0 )
    return 0;
  if ( *hUnit != v3->m_EHandle.m_Index )
    return 0;
  m_pInstance = v3->m_pInstance;
  if ( v3->m_pInstance == 0 )
    return 0;
  m_bIsDOTANPC = m_pInstance->m_bIsDOTANPC;
  if ( !m_bIsDOTANPC )
    return 0;
  v7 = 100LL * CBaseEntity::GetHealth(v3->m_pInstance);
  v8 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
  v9 = 1;
  if ( v8 > 0 )
    v9 = v8;
  return (v7 / v9) > 50 && m_bIsDOTANPC;
}


// CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict::GetCurrentUsageDesire  (line 210, @0x00000000028ec390, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, Get, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetTargetNPC, GetTeamNumber, GetUnit, IsBotTargetStatusValid, Length2D, Set, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator*, operator+, operator-, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetAoELocation, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CDOTALocomotor::GetAverageVelocityOverTime, _Unwind_Resume
int __fastcall CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict *const this)
{
  int LevelSpecialValue; // r14d
  int v3; // r13d
  CEntityInstance *v4; // rax
  const CBaseEntity *v5; // rdi
  const Vector *v6; // r15
  CEntityInstance *v7; // rax
  CEntityInstance *v8; // rdx
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // r15
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // rsi
  unsigned __int8 (__fastcall *v14)(CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict *const, Vector *); // r8
  CEntityIdentity *m_pEntity; // rdx
  __int16 v16; // cx
  CDOTALocomotor *v17; // rax
  float v18; // xmm1_4
  vec_t v19; // xmm1_4
  const Vector *AbsOrigin; // rax
  CEntityInstance *v21; // rax
  const CBaseEntity *v22; // rdi
  const Vector *v23; // rax
  float v24; // [rsp+1Ch] [rbp-64h]
  float z; // [rsp+20h] [rbp-60h]
  float v26; // [rsp+24h] [rbp-5Ch]
  float v27; // [rsp+24h] [rbp-5Ch]
  float v28; // [rsp+28h] [rbp-58h]
  float v29; // [rsp+28h] [rbp-58h]
  float fCastTime; // [rsp+2Ch] [rbp-54h]
  int iTargetCount; // [rsp+3Ch] [rbp-44h] BYREF
  Vector vTargetLoc; // [rsp+40h] [rbp-40h] BYREF

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  v3 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  fCastTime = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_2;
  v10 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v10 != 0 && v10->m_bIsDOTANPC )
  {
    v11 = v10;
    if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v10) )
      goto LABEL_2;
  }
  else
  {
    v11 = 0;
    if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, 0) )
      goto LABEL_2;
  }
  v12 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
    v13 = v12;
  else
    v13 = 0;
  if ( IsBotTargetStatusValidCore(v11, v13, 251, -1.0, this->m_pAbility) )
  {
    v14 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 7);
    vTargetLoc.x = NAN;
    if ( v11 != 0 )
    {
      m_pEntity = v11->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v16 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LODWORD(vTargetLoc.x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v16 & 0x7FFF;
      }
    }
    if ( v14(this, &vTargetLoc) != 0 )
    {
      v17 = (*(v11->_vptr_IHandleEntity + 376))(v11);
      *&vTargetLoc.x = CDOTALocomotor::GetAverageVelocityOverTime(v17, 2.0, v18).m128i_u64[0];
      v24 = v19;
      vTargetLoc.z = v19;
      v28 = vTargetLoc.x * fCastTime;
      v26 = fCastTime * vTargetLoc.y;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
      v29 = v28 + AbsOrigin->x;
      v27 = v26 + AbsOrigin->y;
      z = AbsOrigin->z;
      v21 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v21 == 0 )
        goto LABEL_27;
      if ( BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
        v22 = v21;
      else
LABEL_27:
        v22 = 0;
      v23 = CBaseEntity::GetAbsOrigin(v22);
      if ( v3 > fsqrt(((v23->x - v29) * (v23->x - v29)) + ((v23->y - v27) * (v23->y - v27))) )
      {
        this->m_vDesiredLocation.x = v29;
        this->m_vDesiredLocation.y = v27;
        this->m_vDesiredLocation.z = (fCastTime * v24) + z;
        return 3;
      }
    }
  }
LABEL_2:
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
    v5 = v4;
  else
    v5 = 0;
  v6 = CBaseEntity::GetAbsOrigin(v5);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
    this,
    HIBYTE(v8[7].m_CScriptComponent),
    1,
    2,
    v6,
    v3,
    fCastTime,
    LevelSpecialValue,
    &vTargetLoc,
    &iTargetCount);
  if ( iTargetCount <= 1 )
  {
    this->m_vDesiredLocation = vec3_invalid;
    return 0;
  }
  else
  {
    this->m_vDesiredLocation = vTargetLoc;
    return 3;
  }
}


// CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict::UseAbility  (line 246, @0x00000000028e2040, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict::UseAbility(
        CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict *const this)
{
  CDOTA_Bot_Hero_WitchDoctor *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard::CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard  (line 255, @0x00000000028e7a40, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard::CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard(
        CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D2C90;  // vptr: CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard
}


// CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard::GetCurrentUsageDesire  (line 262, @0x00000000028ee000, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::GetNearbyHeroes, CDOTA_Bot::GetStunDuration, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CBaseEntity::GetAbsOrigin, CDOTA_Bot_AbilityUsage::FindTargetAoELocation, CDOTA_Bot::HasMinistunOnAttack, _Unwind_Resume
// strings: "scepter_bounces"
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
int __fastcall CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard *const this)
{
  CDOTA_Bot_Hero_WitchDoctor *m_pBot; // r12
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // rdi
  bool HasScepter; // al
  CDOTABaseAbility *m_pAbility; // rdi
  int LevelSpecialValue; // r12d
  int v8; // r13d
  int v9; // eax
  __int64 v11; // r12
  int v12; // r13d
  unsigned __int16 *v13; // rdx
  int v14; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CEntityInstance *m_pInstance; // r15
  CDOTA_Bot *v19; // rdi
  CEntityInstance *v20; // rax
  const CBaseEntity *v21; // rdi
  const Vector *AbsOrigin; // r14
  CEntityInstance *v23; // rax
  CEntityInstance *v24; // rdx
  int v25; // eax
  int iTargetCount; // [rsp+2Ch] [rbp-54h] BYREF
  __int128 vTargetLoc; // [rsp+30h] [rbp-50h] OVERLAPPED BYREF
  int v28; // [rsp+40h] [rbp-40h]
  int v29; // [rsp+44h] [rbp-3Ch]

  m_pBot = this->m_pBot;
  v3 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 && (BYTE1(v3[58]._vptr_IHandleEntity) & 2) != 0 )
  {
LABEL_4:
    if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
      v4 = v3;
    else
      v4 = 0;
    HasScepter = CDOTA_BaseNPC::HasScepter(v4);
    m_pAbility = this->m_pAbility;
    if ( HasScepter )
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(m_pAbility, "scepter_bounces", -1, 1);
    else
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(m_pAbility, "bounces", -1, 1);
    v8 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
    v9 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
    if ( v9 != 2 && v9 != 18 )
      goto LABEL_11;
    v20 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
      v21 = v20;
    else
      v21 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v21);
    v23 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
      v24 = v23;
    else
      v24 = 0;
    CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
      this,
      HIBYTE(v24[7].m_CScriptComponent),
      1,
      2,
      AbsOrigin,
      v8,
      0.0,
      400,
      &vTargetLoc,
      &iTargetCount);
    v25 = 2;
    if ( LevelSpecialValue <= 2 )
      v25 = LevelSpecialValue;
    if ( iTargetCount >= v25 )
    {
      *&this->m_vDesiredLocation.x = vTargetLoc;
      this->m_vDesiredLocation.z = *(&vTargetLoc + 2);
      return 3;
    }
    else
    {
LABEL_11:
      this->m_vDesiredLocation = vec3_invalid;
      return 0;
    }
  }
  LODWORD(vTargetLoc) = 0;
  *(&vTargetLoc + 1) = 0;
  v28 = 0;
  v29 = 0;
  CDOTA_Bot::GetNearbyHeroes(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &vTargetLoc, 800.0);
  v11 = 0;
  v12 = 0;
  if ( vTargetLoc <= 0 )
  {
LABEL_36:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vTargetLoc);
    v3 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    goto LABEL_4;
  }
  while ( 1 )
  {
    v13 = (*(&vTargetLoc + 1) + v11);
    v14 = *(*(&vTargetLoc + 1) + v11);
    if ( (v14 + 2) <= 1
      || (v15 = *v13, (v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v13 >> 9) & 0x3F]) == 0)
      || (v17 = &v16[v15 & 0x1FF]) == 0
      || v14 != v17->m_EHandle.m_Index
      || (m_pInstance = v17->m_pInstance, v17->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    v19 = *&m_pInstance[45].m_worldGroupId.m_nHashCode;
    if ( v19 != 0
      && (CDOTA_Bot::GetStunDuration(v19, 1) > 0.0
       || CDOTA_Bot::HasMinistunOnAttack(*&m_pInstance[45].m_worldGroupId.m_nHashCode)) )
    {
      break;
    }
    ++v12;
    v11 += 4;
    if ( vTargetLoc <= v12 )
      goto LABEL_36;
  }
  this->m_vDesiredLocation = vec3_invalid;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vTargetLoc);
  return 0;
}


// CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard::FindFilter  (line 313, @0x00000000028e3ab0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetEstimatedTimeUntilDeath
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard::FindFilter(
        CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard *const this,
        unsigned __int16 *hUnit)
{
  int v2; // edx
  bool result; // al
  unsigned __int64 v4; // rsi
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  CDOTA_BaseNPC *m_pInstance; // rdi

  v2 = *hUnit;
  result = 1;
  if ( (*hUnit + 2) > 1 )
  {
    v4 = *hUnit;
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[v4 & 0x1FF];
      if ( v6 != 0 && v2 == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          return CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(m_pInstance) >= 2.0;
      }
    }
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard::UseAbility  (line 327, @0x00000000028e20a0, libserver.so)
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard::UseAbility(
        CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard *const this)
{
  CDOTA_Bot_Hero_WitchDoctor *m_pBot; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v4; // r12

  m_pBot = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


// CDOTA_Bot_Unit_WitchDoctor_DeathWard::CDOTA_Bot_Unit_WitchDoctor_DeathWard  (line 336, @0x00000000028e7a60, libserver.so)
// calls: CDOTA_Bot::CDOTA_Bot
// callers: CreateBotForUnit
void __fastcall CDOTA_Bot_Unit_WitchDoctor_DeathWard::CDOTA_Bot_Unit_WitchDoctor_DeathWard(
        CDOTA_Bot_Unit_WitchDoctor_DeathWard *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42D2CF0;
}


// CDOTA_Bot_Unit_WitchDoctor_DeathWard::CreateMode  (line 343, @0x00000000028e23b0, libserver.so)  // inlines: CDOTA_BotMode_Attack_WitchDoctor_DeathWard
// calls: operator new, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, CDOTA_Bot::CreateMode, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Unit_WitchDoctor_DeathWard::CreateMode(
        CDOTA_Bot_Unit_WitchDoctor_DeathWard *const this,
        int iMode)
{
  CDOTA_BotMode_Attack *v3; // r12

  if ( this->m_bHuman )
    return CDOTA_Bot::CreateMode(this, iMode);
  if ( iMode != 2 )
    return 0;
  v3 = operator new(0xE8u);  // new CDOTA_BotMode_Attack_WitchDoctor_DeathWard (size matches)
  CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v3, this);
  v3->_vptr_CDOTA_BotMode = off_42D2DF0;  // vptr: CDOTA_BotMode_Attack_WitchDoctor_DeathWard
  return v3;
}


// CDOTA_BotMode_Attack_WitchDoctor_DeathWard::Think  (line 364, @0x00000000028e97c0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetTarget, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector
// calls: CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::GetAttackRange, CDOTA_Bot::GetNearbyHeroes, SortEHANDLEVectorByHealth, CDOTA_BotMode::IsBotTargetStatusValid, CDOTA_Bot::SetAttackAction, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_Attack_WitchDoctor_DeathWard::Think(
        CDOTA_BotMode_Attack_WitchDoctor_DeathWard *const this)
{
  CDOTA_BaseNPC *Unit; // rax
  float AttackRange; // xmm0_4
  __int64 v4; // rbx
  int v5; // r12d
  CDOTA_BaseNPC *m_pInstance; // r15
  CDOTA_BaseNPC *v7; // rax
  CHandle<CBaseEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  uint32 v13; // eax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v15; // cx
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemyHeroes; // [rsp+10h] [rbp-50h] BYREF

  hEnemyHeroes.m_Size = 0;
  hEnemyHeroes.m_Memory.m_pMemory = 0;
  hEnemyHeroes.m_Memory.m_nAllocationCount = 0;
  hEnemyHeroes.m_Memory.m_nGrowSize = 0;
  Unit = CDOTA_BotMode::GetUnit(this);
  AttackRange = CDOTA_BaseNPC::GetAttackRange(Unit);
  CDOTA_Bot::GetNearbyHeroes(
    this->m_pBot,
    DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
    &hEnemyHeroes,
    AttackRange);
  SortEHANDLEVectorByHealth(&hEnemyHeroes);
  v4 = 0;
  v5 = 0;
  if ( hEnemyHeroes.m_Size > 0 )
  {
    while ( 1 )
    {
      v8 = &hEnemyHeroes.m_Memory.m_pMemory[v4];
      m_Index = hEnemyHeroes.m_Memory.m_pMemory[v4].m_Index;
      if ( m_Index + 2 <= 1
        || (v10 = v8->m_Index,
            (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F]) == 0)
        || (v12 = &v11[v10 & 0x1FF]) == 0
        || m_Index != v12->m_EHandle.m_Index
        || (m_pInstance = v12->m_pInstance, v12->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC )
      {
        m_pInstance = 0;
      }
      v7 = CDOTA_BotMode::GetUnit(this);
      if ( CDOTA_BotMode::IsBotTargetStatusValid(this, m_pInstance, v7, 253, -1.0) )
        break;
      ++v5;
      ++v4;
      if ( hEnemyHeroes.m_Size <= v5 )
        goto LABEL_19;
    }
    v13 = -1;
    if ( m_pInstance != 0 )
    {
      m_pEntity = m_pInstance->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v15 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v13 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
      }
    }
    this->m_pBot->m_hTarget.m_Index = v13;
    CDOTA_Bot::SetAttackAction(this->m_pBot, m_pInstance, 0);
  }
LABEL_19:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
}


// CDOTA_BotMode_Attack_WitchDoctor_DeathWard::GetDesire  (line 386, @0x00000000028e1eb0, libserver.so)
float __fastcall CDOTA_BotMode_Attack_WitchDoctor_DeathWard::GetDesire(
        CDOTA_BotMode_Attack_WitchDoctor_DeathWard *const this)
{
  return 1.0;
}


// CDOTA_BotMode_Attack_WitchDoctor_DeathWard::CalculateDesiredLocation  (line 393, @0x00000000028e2430, libserver.so)
// calls: CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_BotMode_Attack_WitchDoctor_DeathWard::CalculateDesiredLocation(
        CDOTA_BotMode_Attack_WitchDoctor_DeathWard *const this)
{
  CDOTA_BaseNPC *Unit; // rax
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Unit = CDOTA_BotMode::GetUnit(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Unit);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CDOTA_TutorialBot_Hero_WitchDoctor::CDOTA_TutorialBot_Hero_WitchDoctor  (line 410, @0x00000000028e7a90, libserver.so)
// calls: CDOTA_Bot_Hero_WitchDoctor::CDOTA_Bot_Hero_WitchDoctor
// callers: CreateBotForUnit
void __fastcall CDOTA_TutorialBot_Hero_WitchDoctor::CDOTA_TutorialBot_Hero_WitchDoctor(
        CDOTA_TutorialBot_Hero_WitchDoctor *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  CDOTA_Bot_Hero_WitchDoctor::CDOTA_Bot_Hero_WitchDoctor(this, pPlayer, pUnit, pTeamCommander);
  this->m_bHasSeenEnemy = 0;
  this->_vptr_CDOTA_Bot = &off_42D2E90;
}


// CDOTA_TutorialBot_Hero_WitchDoctor::Think  (line 420, @0x00000000028e3680, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetBool, GetEntryIndex, GetHandleEntity, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, operator CBaseEntity*
// calls: CDOTA_Bot::GetOwningHero, UTIL_PlayerByIndex, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CDOTA_Bot::Think
void __fastcall CDOTA_TutorialBot_Hero_WitchDoctor::Think(CDOTA_TutorialBot_Hero_WitchDoctor *const this)
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


