
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_ShivasGuard::CDOTA_Bot_AbilityUsage_ShivasGuard  (line 22, @0x00000000028a6150, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, GetFloat, GetInt, GetLevelSpecialValueFor<int>, operator float, operator int, ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetSpecialAbility, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAbilityModifierValues, CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, _Unwind_Resume
// callers: CreateAbilityUsage
// strings: "blast_radius"
void __fastcall CDOTA_Bot_AbilityUsage_ShivasGuard::CDOTA_Bot_AbilityUsage_ShivasGuard(
        CDOTA_Bot_AbilityUsage_ShivasGuard *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
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
  float v15; // r15d
  int v16; // r13d
  int v17; // eax
  fieldtype_t v18; // edx
  fieldtype_t *v19; // r13
  __m128i v20; // xmm0
  float pflMultiply; // [rsp+8h] [rbp-38h] BYREF
  float pflAdd[13]; // [rsp+Ch] [rbp-34h] BYREF

  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6BB0;  // vptr: CDOTA_Bot_AbilityUsage_ShivasGuard
  EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(pAbility);
  if ( EffectiveLevel == -1 || (SpecialAbility = CDOTABaseAbility::GetSpecialAbility(pAbility, "blast_radius")) == 0 )
  {
    v17 = 0;
  }
  else
  {
    pflMultiply = 1.0;
    pflAdd[0] = 0.0;
    if ( CDOTABaseAbility::GetCaster(pAbility) != 0 )
    {
      Caster = CDOTABaseAbility::GetCaster(pAbility);
      CDOTA_BaseNPC::GetAbilityModifierValues(Caster, "blast_radius", &pflMultiply, pflAdd);
    }
    m_nCount = SpecialAbility->m_nCount;
    v9 = m_nCount - 1;
    v10 = EffectiveLevel < m_nCount;
    m_FieldType = SpecialAbility->m_FieldType;
    if ( !v10 )
      EffectiveLevel = v9;
    if ( m_FieldType == fieldtype_t::FIELD_FLOAT )
    {
      v19 = &SpecialAbility->m_FieldType + 4 * EffectiveLevel;
      if ( *(v19 + 8) == 34 )
        v20 = _mm_cvtpd_ps(*(v19 + 1));
      else
        v20 = *(v19 + 2);
      v16 = 0;
      *v20.m128i_i32 = (*v20.m128i_i32 * pflMultiply) + pflAdd[0];
      v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v20));
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
      v15 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
      v16 = ((v14 * pflMultiply) + pflAdd[0]);
    }
    else
    {
      v16 = 0;
      v15 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
    }
    CDOTABaseAbility::GetCaster(pAbility);
    v18 = SpecialAbility->m_FieldType;
    if ( v18 == fieldtype_t::FIELD_FLOAT )
    {
      v17 = v15;
    }
    else
    {
      v17 = 0;
      if ( v18 == fieldtype_t::FIELD_INTEGER )
        v17 = v16;
    }
  }
  this->m_iRadius = v17;
}


// CDOTA_Bot_AbilityUsage_ShivasGuard::GetCurrentUsageDesire  (line 30, @0x00000000028a4f00, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetDistanceToEntity, GetEntityIdentity, GetEntryIndex, GetInstance, GetTarget, GetUnit, IndexToIdentity, IsValid, Length, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot::FindNearbyEnemiesInMode, CDOTA_Bot::GetTargetBot, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTA_Bot::FindNearbyHeroes, CBaseEntity::GetAbsOrigin, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_ShivasGuard::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_ShivasGuard *const this)
{
  int v2; // edx
  int result; // eax
  CDOTA_Bot *v4; // r12
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rcx
  CDOTA_Bot *TargetBot; // rax
  CDOTA_Bot *v8; // rax
  uint32 v9; // ecx
  unsigned __int16 v10; // dx
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  CDOTA_BaseNPC *v13; // rdi
  int OpposingTeamNumber; // eax
  bool v15; // cc
  CDOTA_Bot *m_pBot; // rdx
  const CBaseEntity *m_pInstance; // rcx
  CEntityIdentity *v18; // rsi
  CEntityIdentity *v19; // rsi
  uint32 m_Index; // eax
  unsigned __int16 v21; // si
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  const CBaseEntity *v24; // r13
  const Vector *AbsOrigin; // r12
  const Vector *v26; // rax
  float v27; // xmm0_4
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hHeroes; // [rsp+10h] [rbp-40h] BYREF

  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2
    && CDOTA_Bot::GetTargetBot(this->m_pBot) != 0 )
  {
    TargetBot = CDOTA_Bot::GetTargetBot(this->m_pBot);
    if ( (*(TargetBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(TargetBot->m_pActiveBotMode) == 4 )
    {
      m_pBot = this->m_pBot;
      m_pInstance = 0;
      hHeroes.m_Size = m_pBot->m_hTarget.m_Index;
      if ( (hHeroes.m_Size + 2) > 1 )
      {
        v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hHeroes.m_Size) >> 9) & 0x3F];
        if ( v18 != 0 )
        {
          v19 = &v18[hHeroes.m_Size & 0x1FF];
          if ( v19 != 0 && hHeroes.m_Size == v19->m_EHandle.m_Index )
            m_pInstance = v19->m_pInstance;
        }
      }
      m_Index = m_pBot->m_hUnit.m_Index;
      if ( m_Index + 2 <= 1
        || (v21 = m_pBot->m_hUnit.m_Index,
            (v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v21 >> 9) & 0x3F]) == 0)
        || (v23 = &v22[v21 & 0x1FF]) == 0
        || m_Index != v23->m_EHandle.m_Index
        || (v24 = v23->m_pInstance, v23->m_pInstance == 0)
        || !v24->m_bIsDOTANPC )
      {
        v24 = 0;
      }
      if ( m_pInstance != 0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
        v26 = CBaseEntity::GetAbsOrigin(v24);
        v27 = fsqrt(
                (((v26->x - AbsOrigin->x) * (v26->x - AbsOrigin->x))
               + ((v26->y - AbsOrigin->y) * (v26->y - AbsOrigin->y)))
              + ((v26->z - AbsOrigin->z) * (v26->z - AbsOrigin->z)));
      }
      else
      {
        v27 = -1.0;
      }
      if ( this->m_iRadius > v27 )
        return 2;
    }
    v8 = this->m_pBot;
    hHeroes.m_Size = 0;
    hHeroes.m_Memory.m_pMemory = 0;
    hHeroes.m_Memory.m_nAllocationCount = 0;
    hHeroes.m_Memory.m_nGrowSize = 0;
    v9 = v8->m_hUnit.m_Index;
    if ( v9 + 2 <= 1
      || (v10 = v8->m_hUnit.m_Index, (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9) & 0x3F]) == 0)
      || (v12 = &v11[v10 & 0x1FF]) == 0
      || v9 != v12->m_EHandle.m_Index
      || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
      || !v13->m_bIsDOTANPC )
    {
      v13 = 0;
    }
    OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v13);
    CDOTA_Bot::FindNearbyHeroes(this->m_pBot, this->m_iRadius, OpposingTeamNumber, &hHeroes);
    v15 = hHeroes.m_Size <= 1;
    hHeroes.m_Size = 0;
    if ( !v15 )
    {
      if ( (hHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hHeroes.m_Memory);
        if ( (hHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hHeroes.m_Memory);
      }
      return 3;
    }
    if ( (hHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hHeroes.m_Memory);
      if ( (hHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hHeroes.m_Memory);
    }
  }
  v2 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  result = 0;
  if ( v2 == 4 )
  {
    v4 = this->m_pBot;
    v5 = CEntityHandle::operator CEntityInstance *(&v4->m_hUnit);
    if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
      v6 = v5;
    else
      v6 = 0;
    return 3 * (CDOTA_Bot::FindNearbyEnemiesInMode(v4, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, this->m_iRadius, 0, v6) > 0);
  }
  return result;
}


// CDOTA_Bot_AbilityUsage_ShivasGuard::UseAbility  (line 59, @0x00000000028a3400, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_ShivasGuard::UseAbility(CDOTA_Bot_AbilityUsage_ShivasGuard *const this)
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


