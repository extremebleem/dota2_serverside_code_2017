
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Tango::CDOTA_Bot_AbilityUsage_Tango  (line 23, @0x00000000028a75c0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Tango::CDOTA_Bot_AbilityUsage_Tango(
        CDOTA_Bot_AbilityUsage_Tango *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6DF0;  // vptr: CDOTA_Bot_AbilityUsage_Tango
  this->m_iTree = -1;
}


// CDOTA_Bot_AbilityUsage_Tango::GetCurrentUsageDesire  (line 31, @0x00000000028a9f10, libserver.so)  // inlines: Get, GetActiveModeDesire, GetBinaryObject, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetInt, GetItem, GetLevelSpecialValueFor<float>, GetUnit, IndexToIdentity, IsValid, Length2DSqr, LookupEntity, ToDOTABaseNPC, ToDOTAItem, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator float, operator int, operator-
// calls: CDOTA_BaseNPC::FindModifierByName, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetHealth, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetSpecialAbility, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAbilityModifierValues, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetRecentIncomingDPS, CDOTA_Bot::FindNearbyEnemiesInMode, CBaseEntity::GetAbsOrigin, DOTACommander (17 total)
// strings: "modifier_tango_heal", "modifier_flask_healing", "modifier_bottle_regeneration", "total_heal"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Tango::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Tango *const this)
{
  CDOTA_Bot *m_pBot; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v4; // cx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  __int64 v8; // rax
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rdi
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rdi
  CDOTA_Bot *v13; // rax
  uint32 v14; // ecx
  unsigned __int16 v15; // dx
  CEntityIdentity *v16; // rax
  CEntityIdentity *v17; // rax
  const CBaseEntity *v18; // rdi
  int Health; // eax
  CDOTA_Bot *v20; // rcx
  int v21; // r14d
  CConcreteEntityList *v22; // rsi
  uint32 v23; // edx
  unsigned __int64 m_Index_low; // rcx
  CEntityIdentity *v25; // rax
  __int64 v26; // rcx
  CEntityIdentity *v27; // rax
  CEntityInstance *v28; // rdi
  int v29; // eax
  CDOTA_Bot *v30; // rdx
  int v31; // r14d
  CConcreteEntityList *v32; // rsi
  uint32 v33; // eax
  unsigned __int16 v34; // cx
  CEntityIdentity *v35; // rdx
  __int64 v36; // rcx
  CEntityIdentity *v37; // rdx
  CEntityInstance *v38; // rdi
  float v39; // xmm0_4
  CDOTABaseAbility *m_pAbility; // r12
  int EffectiveLevel; // r13d
  DOTASpecialAbility_t *SpecialAbility; // r15
  CDOTA_BaseNPC *Caster; // rax
  int m_nCount; // eax
  int v45; // edx
  bool v46; // cc
  fieldtype_t m_FieldType; // eax
  fieldtype_t *v48; // r13
  __int16 v49; // ax
  int v50; // r13d
  int v51; // r13d
  float v52; // xmm0_4
  fieldtype_t v53; // eax
  float v54; // xmm0_4
  CDOTABaseAbility *v55; // r12
  int v56; // r13d
  CDOTABaseAbility *v57; // rdi
  int LevelSpecialValue; // r12d
  CEntityInstance *v59; // rax
  CDOTA_BaseNPC *v60; // rdi
  CDOTA_Bot *v61; // r13
  CEntityInstance *v62; // rax
  CDOTA_BaseNPC *v63; // rcx
  CEntityInstance *v64; // rax
  const CBaseEntity *v65; // rdi
  __int64 v66; // r14
  const Vector *AbsOrigin; // r12
  CDOTA_Commander *v68; // rax
  const Vector *v69; // rsi
  int v70; // r12d
  float TankRating; // xmm0_4
  CDOTA_BinaryObject *v72; // r13
  CEntityInstance *v73; // rax
  const CBaseEntity *v74; // rdi
  const Vector *v75; // rax
  fieldtype_t *v76; // r13
  float v77; // xmm0_4
  const Vector *v78; // r13
  CDOTA_Commander *v79; // rax
  CDOTA_Bot *v80; // r13
  float fTankRating; // [rsp+20h] [rbp-50h]
  float iSearchSizeSqra; // [rsp+24h] [rbp-4Ch]
  float iSearchSizeSqr; // [rsp+24h] [rbp-4Ch]
  float v85; // [rsp+28h] [rbp-48h]
  const Vector *v86; // [rsp+28h] [rbp-48h]
  int xHero; // [rsp+30h] [rbp-40h] BYREF
  int yHero; // [rsp+34h] [rbp-3Ch] BYREF
  int xTree; // [rsp+38h] [rbp-38h] BYREF
  float yTree[13]; // [rsp+3Ch] [rbp-34h] BYREF

  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = m_pBot->m_hUnit.m_Index, (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F]) == 0)
    || (v6 = &v5[v4 & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_tango_heal", 0) != 0 )
    goto LABEL_7;
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  if ( CDOTA_BaseNPC::FindModifierByName(v10, "modifier_flask_healing", 0) != 0 )
    goto LABEL_7;
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  if ( CDOTA_BaseNPC::FindModifierByName(v12, "modifier_bottle_regeneration", 0) != 0 )
    goto LABEL_7;
  v13 = this->m_pBot;
  v14 = v13->m_hUnit.m_Index;
  if ( v14 + 2 <= 1
    || (v15 = v13->m_hUnit.m_Index, (v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v15 >> 9) & 0x3F]) == 0)
    || (v17 = &v16[v15 & 0x1FF]) == 0
    || v14 != v17->m_EHandle.m_Index
    || (v18 = v17->m_pInstance, v17->m_pInstance == 0)
    || !v18->m_bIsDOTANPC )
  {
    v18 = 0;
  }
  Health = CBaseEntity::GetHealth(v18);
  v20 = this->m_pBot;
  v21 = Health;
  v22 = CEntityHandle::gm_pEntityList;
  v23 = v20->m_hUnit.m_Index;
  if ( v23 + 2 <= 1
    || (m_Index_low = LOWORD(v20->m_hUnit.m_Index),
        (v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v26 = m_Index_low & 0x1FF, v22 = (8 * v26), (v27 = &v25[v26]) == 0)
    || v23 != v27->m_EHandle.m_Index
    || (v28 = v27->m_pInstance, v27->m_pInstance == 0)
    || BYTE3(v28[7]._vptr_IHandleEntity) == 0 )
  {
    v28 = 0;
  }
  v29 = (*(v28->_vptr_IHandleEntity + 156))(v28, v22);
  v30 = this->m_pBot;
  v31 = v21 - v29;
  v32 = CEntityHandle::gm_pEntityList;
  v33 = v30->m_hUnit.m_Index;
  if ( v33 + 2 <= 1
    || (v34 = v30->m_hUnit.m_Index, (v35 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v34 >> 9) & 0x3F]) == 0)
    || (v36 = v34 & 0x1FF, v32 = (8 * v36), (v37 = &v35[v36]) == 0)
    || v33 != v37->m_EHandle.m_Index
    || (v38 = v37->m_pInstance, v37->m_pInstance == 0)
    || BYTE3(v38[7]._vptr_IHandleEntity) == 0 )
  {
    v38 = 0;
  }
  v39 = (*(v38->_vptr_IHandleEntity + 430))(v38, v32);
  m_pAbility = this->m_pAbility;
  v85 = v39;
  if ( m_pAbility == 0 || (*(m_pAbility->_vptr_IHandleEntity + 223))(m_pAbility) == 0 )
    m_pAbility = 0;
  EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(m_pAbility);
  if ( EffectiveLevel == -1 )
    goto LABEL_92;
  SpecialAbility = CDOTABaseAbility::GetSpecialAbility(m_pAbility, "buff_duration");
  if ( SpecialAbility == 0 )
    goto LABEL_92;
  *&xTree = 1.0;
  yTree[0] = 0.0;
  if ( CDOTABaseAbility::GetCaster(m_pAbility) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(m_pAbility);
    CDOTA_BaseNPC::GetAbilityModifierValues(Caster, "buff_duration", &xTree, yTree);
  }
  m_nCount = SpecialAbility->m_nCount;
  v45 = m_nCount - 1;
  v46 = EffectiveLevel < m_nCount;
  m_FieldType = SpecialAbility->m_FieldType;
  if ( !v46 )
    EffectiveLevel = v45;
  if ( m_FieldType == fieldtype_t::FIELD_FLOAT )
  {
    v76 = &SpecialAbility->m_FieldType + 4 * EffectiveLevel;
    if ( *(v76 + 8) == 34 )
      v77 = *(v76 + 1);
    else
      v77 = *(v76 + 2);
    v51 = 0;
    v52 = (v77 * *&xTree) + yTree[0];
  }
  else if ( m_FieldType == fieldtype_t::FIELD_INTEGER )
  {
    v48 = &SpecialAbility->m_FieldType + 4 * EffectiveLevel;
    v49 = *(v48 + 8);
    if ( v49 == 1 )
    {
      v50 = *(v48 + 2);
    }
    else if ( v49 == 34 )
    {
      v50 = *(v48 + 1);
    }
    else
    {
      v50 = *(v48 + 2);
    }
    v51 = ((v50 * *&xTree) + yTree[0]);
    v52 = 0.0;
  }
  else
  {
    v51 = 0;
    v52 = 0.0;
  }
  iSearchSizeSqra = v52;
  CDOTABaseAbility::GetCaster(m_pAbility);
  v53 = SpecialAbility->m_FieldType;
  v54 = iSearchSizeSqra;
  if ( v53 != fieldtype_t::FIELD_FLOAT )
  {
    if ( v53 == fieldtype_t::FIELD_INTEGER )
    {
      v54 = v51;
      goto LABEL_49;
    }
LABEL_92:
    v54 = 0.0;
  }
LABEL_49:
  v55 = this->m_pAbility;
  v56 = (v54 * v85);
  if ( v55 != 0 && (*(v55->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    v57 = v55;
  else
    v57 = 0;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v57, "total_heal", -1, 1);
  if ( LevelSpecialValue + v31 + v56 >= -49 )
    goto LABEL_7;
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2 )
    goto LABEL_7;
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 18 )
    goto LABEL_7;
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 19 )
    goto LABEL_7;
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 4 )
  {
    v80 = this->m_pBot;
    if ( v80->m_fModeDesires[(*(v80->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v80->m_pActiveBotMode)] >= 0.75 )
      goto LABEL_7;
  }
  v59 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v59 != 0 && BYTE3(v59[7]._vptr_IHandleEntity) != 0 )
  {
    v60 = v59;
    if ( (BYTE1(v59[58]._vptr_IHandleEntity) & 2) != 0 )
    {
LABEL_7:
      LODWORD(v8) = 0;
      return v8;
    }
  }
  else
  {
    v60 = 0;
  }
  if ( CDOTA_BaseNPC::GetRecentIncomingDPS(v60, 0) > 0.0 )
    goto LABEL_7;
  v61 = this->m_pBot;
  v62 = CEntityHandle::operator CEntityInstance *(&v61->m_hUnit);
  if ( v62 != 0 && BYTE3(v62[7]._vptr_IHandleEntity) != 0 )
    v63 = v62;
  else
    v63 = 0;
  if ( CDOTA_Bot::FindNearbyEnemiesInMode(v61, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1000.0, 0, v63) > 0 )
    goto LABEL_7;
  iSearchSizeSqr = 640000.0;
  if ( abs32(v31) <= 3 * LevelSpecialValue )
    iSearchSizeSqr = 160000.0;
  v64 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v64 != 0 && BYTE3(v64[7]._vptr_IHandleEntity) != 0 )
    v65 = v64;
  else
    v65 = 0;
  v66 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v65);
  v68 = DOTACommander();
  v69 = AbsOrigin;
  v70 = 0;
  CDOTA_Commander::GetGridFromLocation(v68, v69, &xHero, &yHero);
  TankRating = CDOTA_Bot::GetTankRating(this->m_pBot);
  this->m_iTree = -1;
  fTankRating = TankRating;
  if ( g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Size > 0 )
  {
    while ( 1 )
    {
      v72 = g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Memory.m_pMemory[v66];
      if ( v72 != 0 && v72->m_bActive )
      {
        v73 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v73 == 0 || (v74 = v73, BYTE3(v73[7]._vptr_IHandleEntity) == 0) )
          v74 = 0;
        v86 = CBaseEntity::GetAbsOrigin(v74);
        v75 = CBaseEntity::GetAbsOrigin(v72);
        if ( iSearchSizeSqr > (((v75->x - v86->x) * (v75->x - v86->x)) + ((v75->y - v86->y) * (v75->y - v86->y))) )
        {
          v78 = CBaseEntity::GetAbsOrigin(v72);
          v79 = DOTACommander();
          CDOTA_Commander::GetGridFromLocation(v79, v78, &xTree, yTree);
          LODWORD(v78) = CDOTA_TeamCommander::GetGridHeightLevel(
                           this->m_pBot->m_pTeamCommander,
                           xTree,
                           SLODWORD(yTree[0]));
          if ( v78 == CDOTA_TeamCommander::GetGridHeightLevel(this->m_pBot->m_pTeamCommander, xHero, yHero)
            && CDOTA_Bot_Pathing::IsPathClear(
                 &this->m_pBot->m_Pathing,
                 xHero,
                 yHero,
                 xTree,
                 SLODWORD(yTree[0]),
                 15.0,
                 1,
                 0)
            && CDOTA_Bot::GetAvoidanceAmountForGrid(this->m_pBot, fTankRating, xTree, SLODWORD(yTree[0]), 0) <= 4 )
          {
            break;
          }
        }
      }
      ++v70;
      ++v66;
      if ( v70 >= g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Size )
        return this->m_iTree != -1;
    }
    this->m_iTree = v70;
  }
  return this->m_iTree != -1;
}


// CDOTA_Bot_AbilityUsage_Tango::UseAbility  (line 134, @0x00000000028a69d0, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Tango::UseAbility(CDOTA_Bot_AbilityUsage_Tango *const this)
{
  CDOTABaseAbility *m_pAbility; // r12
  CDOTA_Bot *m_pBot; // r14
  CDOTA_BotAction_UseAbility *v4; // r13

  m_pAbility = this->m_pAbility;
  m_pBot = this->m_pBot;
  if ( m_pAbility == 0 || (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) == 0 )
    m_pAbility = 0;
  v4 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v4, m_pBot, m_pAbility, this->m_iTree);
  CDOTA_Bot::PushAction(this->m_pBot, v4);
}


