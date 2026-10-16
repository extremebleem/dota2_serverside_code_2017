
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Pipe::CDOTA_Bot_AbilityUsage_Pipe  (line 17, @0x00000000028a6320, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, GetFloat, GetInt, GetLevelSpecialValueFor<int>, operator float, operator int, ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetSpecialAbility, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAbilityModifierValues, CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, _Unwind_Resume
// callers: CreateAbilityUsage
// strings: "barrier_radius"
void __fastcall CDOTA_Bot_AbilityUsage_Pipe::CDOTA_Bot_AbilityUsage_Pipe(
        CDOTA_Bot_AbilityUsage_Pipe *const this,
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
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C69D0;  // vptr: CDOTA_Bot_AbilityUsage_Pipe
  EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(pAbility);
  if ( EffectiveLevel == -1 || (SpecialAbility = CDOTABaseAbility::GetSpecialAbility(pAbility, "barrier_radius")) == 0 )
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
      CDOTA_BaseNPC::GetAbilityModifierValues(Caster, "barrier_radius", &pflMultiply, pflAdd);
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


// CDOTA_Bot_AbilityUsage_Pipe::GetCurrentUsageDesire  (line 25, @0x00000000028a4d30, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot::FindNearbyHeroes, CDOTA_Bot::IsAboutToDie, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Pipe::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Pipe *const this)
{
  CDOTA_Bot *m_pBot; // rbx
  CEntityInstance *v3; // rax
  __int64 v4; // r12
  int v5; // ebx
  int v6; // r13d
  CHandle<CBaseEntity> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *m_pInstance; // r15
  __int64 v13; // rax
  bool IsAboutToDie; // al
  int v15; // edx
  int v16; // ebx
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyAlliedHeroes; // [rsp+0h] [rbp-50h] BYREF

  hNearbyAlliedHeroes.m_Size = 0;
  m_pBot = this->m_pBot;
  hNearbyAlliedHeroes.m_Memory.m_pMemory = 0;
  hNearbyAlliedHeroes.m_Memory.m_nAllocationCount = 0;
  hNearbyAlliedHeroes.m_Memory.m_nGrowSize = 0;
  v3 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v3 == 0 || BYTE3(v3[7]._vptr_IHandleEntity) == 0 )
    v3 = 0;
  CDOTA_Bot::FindNearbyHeroes(m_pBot, this->m_iRadius, HIBYTE(v3[7].m_CScriptComponent), &hNearbyAlliedHeroes);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( hNearbyAlliedHeroes.m_Size <= 0 )
    goto LABEL_22;
  do
  {
    while ( 1 )
    {
      v7 = &hNearbyAlliedHeroes.m_Memory.m_pMemory[v4];
      m_Index = hNearbyAlliedHeroes.m_Memory.m_pMemory[v4].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v9 = v7->m_Index;
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[v9 & 0x1FF];
          if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
          {
            m_pInstance = v11->m_pInstance;
            if ( v11->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              v13 = *&m_pInstance[45].m_worldGroupId.m_nHashCode;
              if ( v13 != 0
                && ((*(**(v13 + 34056) + 16LL))(*(v13 + 34056)) == 2
                 || (*(**(*&m_pInstance[45].m_worldGroupId.m_nHashCode + 34056LL) + 16LL))(*(*&m_pInstance[45].m_worldGroupId.m_nHashCode
                                                                                           + 34056LL)) == 4) )
              {
                break;
              }
            }
          }
        }
      }
      ++v5;
      ++v4;
      if ( hNearbyAlliedHeroes.m_Size <= v5 )
        goto LABEL_19;
    }
    IsAboutToDie = CDOTA_Bot::IsAboutToDie(*&m_pInstance[45].m_worldGroupId.m_nHashCode);
    v15 = v6 + 1;
    v6 += 2;
    if ( !IsAboutToDie )
      v6 = v15;
    ++v5;
    ++v4;
  }
  while ( hNearbyAlliedHeroes.m_Size > v5 );
LABEL_19:
  v16 = 3;
  if ( v6 <= 2 )
LABEL_22:
    v16 = 0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyAlliedHeroes);
  return v16;
}


// CDOTA_Bot_AbilityUsage_Pipe::UseAbility  (line 57, @0x00000000028a3280, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Pipe::UseAbility(CDOTA_Bot_AbilityUsage_Pipe *const this)
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


