
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Bottle::CDOTA_Bot_AbilityUsage_Bottle  (line 23, @0x0000000002897260, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Bottle::CDOTA_Bot_AbilityUsage_Bottle(
        CDOTA_Bot_AbilityUsage_Bottle *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C5BF0;  // vptr: CDOTA_Bot_AbilityUsage_Bottle
}


// CDOTA_Bot_AbilityUsage_Bottle::ClearsIllusionState  (line 31, @0x0000000002895d00, libserver.so)  // inlines: GetItem, ToDOTAItem
bool __fastcall CDOTA_Bot_AbilityUsage_Bottle::ClearsIllusionState(CDOTA_Bot_AbilityUsage_Bottle *const this)
{
  CDOTABaseAbility *m_pAbility; // rbx

  m_pAbility = this->m_pAbility;
  if ( m_pAbility == 0 || (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) == 0 )
    m_pAbility = 0;
  return LODWORD(m_pAbility[1].m_NetworkTransmitComponent.m_PVSInfo.m_pClusters) == 2;
}


// CDOTA_Bot_AbilityUsage_Bottle::GetCurrentUsageDesire  (line 40, @0x00000000028999e0, libserver.so)  // inlines: DOTAGameRules, Element, FastSqrt, Get, GetAction, GetEntityIdentity, GetEntryIndex, GetGameTime, GetHealthPercent, GetInstance, GetItem, GetManaPercent, GetUnit, HasStoredRune, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, ToDOTAItem, Top, VectorSubtract, WasRecentlyHitByCreep, WasRecentlyHitByTower, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator!=<int>, operator-, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindModifierByName, CDOTA_Bot::WasRecentlyHitByHero, CBaseEntity::GetHealth, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::GetBaseLocation, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::IsInRangeOfFountain, CDOTA_Bot::IsDangerouslyLow, CDOTA_Bot::IsAboutToDie, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_BaseNPC::GetInventory (14 total)
// strings: "modifier_bottle_regeneration", "health_restore", "mana_restore", "modifier_flask_healing"
// globals: jpt_2899B0A, CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_Bottle::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Bottle *const this)
{
  CDOTABaseAbility *m_pAbility; // r12
  CDOTABaseAbility *v3; // r13
  CDOTA_Bot *m_pBot; // rax
  bool v5; // r14
  float m_HitByCreepTime; // xmm1_4
  float v7; // xmm0_4
  bool v8; // r15
  int m_Size; // edx
  CDOTA_BotAction *v10; // rdi
  int m_pClusters; // eax
  int result; // eax
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rdi
  bool v15; // zf
  float v16; // xmm0_4
  CEntityInstance *v17; // rax
  const CBaseEntity *v18; // r12
  __int64 v19; // r13
  int v20; // eax
  CDOTA_Bot *v21; // r12
  __int64 v22; // rcx
  __int64 v23; // r13
  CEntityInstance *v24; // rax
  CEntityInstance *v25; // rdx
  CEntityInstance *v26; // rax
  const CBaseEntity *v27; // rdi
  const Vector *AbsOrigin; // r12
  CDOTABaseAbility *v29; // r12
  CDOTABaseAbility *v30; // rdi
  int LevelSpecialValue; // eax
  CDOTABaseAbility *v32; // r12
  int v33; // r14d
  CDOTABaseAbility *v34; // rdi
  CEntityInstance *v35; // rax
  CEntityInstance *v36; // rdi
  int v37; // r13d
  CEntityInstance *v38; // rax
  const CBaseEntity *v39; // rdi
  CEntityInstance *v40; // rax
  CDOTA_BaseNPC *v41; // rdi
  int v42; // r15d
  CDOTA_Bot *v43; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v45; // cx
  CEntityIdentity *v46; // rdx
  CEntityIdentity *v47; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *v49; // r12
  int v50; // eax
  int v51; // r12d
  CEntityInstance *v52; // rax
  CDOTA_BaseNPC *v53; // rdi
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v55; // r13
  CEntityInstance *v56; // rdx
  CDOTA_BaseNPC *v57; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  int v60; // r13d
  CEntityInstance *v61; // rax
  CEntityInstance *v62; // rdx
  int v63; // eax
  CEntityInstance *v64; // rax
  int v65; // eax
  CDOTA_Item *v66; // [rsp+0h] [rbp-60h]
  int iMaxManaGain; // [rsp+Ch] [rbp-54h]
  float pItem; // [rsp+10h] [rbp-50h]
  CDOTA_Item *pItema; // [rsp+10h] [rbp-50h]
  float pItemb; // [rsp+10h] [rbp-50h]
  float pItemc; // [rsp+10h] [rbp-50h]
  int iManaGain; // [rsp+18h] [rbp-48h]
  int iHealthDeficit; // [rsp+1Ch] [rbp-44h]
  Vector BaseLocation; // 0:kr00_12.12

  m_pAbility = this->m_pAbility;
  if ( m_pAbility != 0 )
  {
    if ( (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    {
      v3 = m_pAbility;
      m_pAbility = this->m_pAbility;
      goto LABEL_5;
    }
    m_pAbility = this->m_pAbility;
  }
  v3 = 0;
LABEL_5:
  if ( m_pAbility == 0 || (*(m_pAbility->_vptr_IHandleEntity + 223))(m_pAbility) == 0 )
    m_pAbility = 0;
  if ( HIDWORD(m_pAbility[1].m_pDummyPhysicsComponent) == 0
    && LODWORD(v3[1].m_NetworkTransmitComponent.m_PVSInfo.m_pClusters) == -1 )
  {
    return 0;
  }
  m_pBot = this->m_pBot;
  v5 = 1;
  if ( m_pBot->m_nAttackingCreeps == 0 && m_pBot->m_nAttackingHeroes == 0 )
    v5 = m_pBot->m_nAttackingTowers != 0;
  m_HitByCreepTime = m_pBot->m_HitByCreepTime;
  if ( g_pGameRules != 0 )
    v7 = *&g_pGameRules[18].m_szQuestName[20] - 2.0;
  else
    v7 = -2.0;
  v8 = 1;
  if ( m_HitByCreepTime <= v7 )
  {
    v15 = !CDOTA_Bot::WasRecentlyHitByHero(this->m_pBot, 2.0, m_HitByCreepTime);
    m_pBot = this->m_pBot;
    if ( v15 )
    {
      if ( g_pGameRules != 0 )
        v16 = *&g_pGameRules[18].m_szQuestName[20] - 2.0;
      else
        v16 = -2.0;
      v8 = m_pBot->m_HitByTowerTime > v16;
    }
  }
  m_Size = m_pBot->m_ActionStack.m_Size;
  v10 = 0;
  if ( m_Size > 0 )
    v10 = m_pBot->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
  if ( (*(v10->_vptr_CDOTA_BotAction + 2))(v10) == 6 )
    return 3;
  if ( v8 || v5 )
    return 0;
  m_pClusters = v3[1].m_NetworkTransmitComponent.m_PVSInfo.m_pClusters;
  if ( m_pClusters != -1 )
  {
    switch ( m_pClusters )
    {
      case 0:
        if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
          goto LABEL_26;
        return 2;
      case 1:
        if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2
          || (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 3
          || (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 4 )
        {
          return 2;
        }
        goto LABEL_55;
      case 2:
LABEL_55:
        if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 2 )
          goto LABEL_56;
        return 2;
      case 3:
LABEL_56:
        if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 4 )
          return 2;
        (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
        result = 2;
        break;
      case 4:
        v17 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
          v18 = v17;
        else
          v18 = 0;
        v19 = 100LL * CBaseEntity::GetHealth(v18);
        v20 = (*(v18->_vptr_IHandleEntity + 156))(v18);
        v21 = this->m_pBot;
        v22 = 1;
        if ( v20 > 0 )
          v22 = v20;
        v23 = v19 / v22;
        v24 = CEntityHandle::operator CEntityInstance *(&v21->m_hUnit);
        if ( v24 != 0 && BYTE3(v24[7]._vptr_IHandleEntity) != 0 )
          v25 = v24;
        else
          v25 = 0;
        if ( ((100.0 * *&v25[44].m_iszPrivateVScripts.u.m_Id) / *&v25[44].m_worldGroupId.m_nHashCode) + v23 <= 99 )
          return 2;
        if ( (*(v21->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v21->m_pActiveBotMode) == 4 )
        {
          v26 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v26 != 0 && BYTE3(v26[7]._vptr_IHandleEntity) != 0 )
            v27 = v26;
          else
            v27 = 0;
          AbsOrigin = CBaseEntity::GetAbsOrigin(v27);
          BaseLocation = CDOTA_TeamCommander::GetBaseLocation(this->m_pBot->m_pTeamCommander);
          if ( fsqrt(
                 ((BaseLocation.x - AbsOrigin->x) * (BaseLocation.x - AbsOrigin->x))
               + ((BaseLocation.y - AbsOrigin->y) * (BaseLocation.y - AbsOrigin->y))) > 7000.0 )
            return 2;
        }
        goto LABEL_26;
      case 5:
      case 6:
        return 2;
      default:
        goto LABEL_26;
    }
    return result;
  }
LABEL_26:
  v13 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
    v14 = v13;
  else
    v14 = 0;
  if ( CDOTA_BaseNPC::FindModifierByName(v14, "modifier_bottle_regeneration", 0) != 0 )
    return 0;
  v29 = this->m_pAbility;
  if ( v29 != 0 && (*(v29->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    v30 = v29;
  else
    v30 = 0;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v30, "health_restore", -1, 1);
  v32 = this->m_pAbility;
  v33 = LevelSpecialValue;
  if ( v32 != 0 && (*(v32->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    v34 = v32;
  else
    v34 = 0;
  iManaGain = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v34, "mana_restore", -1, 1);
  v35 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v35 != 0 && BYTE3(v35[7]._vptr_IHandleEntity) != 0 )
    v36 = v35;
  else
    v36 = 0;
  v37 = (*(v36->_vptr_IHandleEntity + 156))(v36);
  v38 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v38 != 0 && BYTE3(v38[7]._vptr_IHandleEntity) != 0 )
    v39 = v38;
  else
    v39 = 0;
  iHealthDeficit = v37 - CBaseEntity::GetHealth(v39);
  v40 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v40 != 0 && BYTE3(v40[7]._vptr_IHandleEntity) != 0 )
  {
    v41 = v40;
    v42 = (*&v40[44].m_worldGroupId.m_nHashCode - *&v40[44].m_iszPrivateVScripts.u.m_Id);
  }
  else
  {
    v41 = 0;
    v42 = (COERCE_FLOAT(7496) - 0.0);
  }
  if ( CDOTA_BaseNPC::IsInRangeOfFountain(v41) && (v42 > 0 || iHealthDeficit > 0) )
    return 3;
  if ( v33 < iHealthDeficit )
  {
    v43 = this->m_pBot;
    m_Index = v43->m_hUnit.m_Index;
    if ( m_Index + 2 <= 1
      || (v45 = v43->m_hUnit.m_Index, (v46 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v45 >> 9) & 0x3F]) == 0)
      || (v47 = &v46[v45 & 0x1FF]) == 0
      || m_Index != v47->m_EHandle.m_Index
      || (m_pInstance = v47->m_pInstance, v47->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_flask_healing", 0) != 0 )
      return 0;
    if ( CDOTA_Bot::IsDangerouslyLow(this->m_pBot) || CDOTA_Bot::IsAboutToDie(this->m_pBot) )
      return 3;
  }
  if ( iManaGain >= v42 )
  {
LABEL_133:
    if ( iHealthDeficit > 2 * v33 && 3 * iManaGain < v42 )
      return 2;
    return 0;
  }
  v49 = this->m_pAbility;
  if ( v49 == 0 || (*(v49->_vptr_IHandleEntity + 223))(this->m_pAbility) == 0 )
    v49 = 0;
  v50 = HIDWORD(v49[1].m_pDummyPhysicsComponent) * iManaGain;
  v51 = 0;
  iMaxManaGain = v50;
  v52 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  do
  {
    if ( v52 != 0 && BYTE3(v52[7]._vptr_IHandleEntity) != 0 )
      v53 = v52;
    else
      v53 = 0;
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v53, v51);
    v55 = AbilityByIndex;
    if ( AbilityByIndex == 0
      || AbilityByIndex->m_pBotUsage == 0
      || (*(AbilityByIndex->_vptr_IHandleEntity + 245))(AbilityByIndex) == 0 )
    {
      goto LABEL_122;
    }
    pItem = (*(v55->_vptr_IHandleEntity + 273))(&v55->_vptr_IHandleEntity, 0xFFFFFFFFLL);
    v52 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v52 == 0 || (v56 = v52, BYTE3(v52[7]._vptr_IHandleEntity) == 0) )
      v56 = 0;
    if ( pItem > *&v56[44].m_iszPrivateVScripts.u.m_Id )
    {
      pItemb = (*(v55->_vptr_IHandleEntity + 273))(&v55->_vptr_IHandleEntity, 0xFFFFFFFFLL);
      v52 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v52 != 0 && BYTE3(v52[7]._vptr_IHandleEntity) != 0 )
        v62 = v52;
      else
        v62 = 0;
      if ( (iMaxManaGain + *&v62[44].m_iszPrivateVScripts.u.m_Id) > pItemb )
      {
        v63 = (*(v55->m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(&v55->m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage);
        if ( v63 > 2 )
          return 3;
        if ( v63 > 0 )
          return 2;
LABEL_122:
        v52 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      }
    }
    ++v51;
  }
  while ( v51 != 24 );
  LOBYTE(v51) = 0;
  while ( 1 )
  {
    v57 = v52 != 0 && BYTE3(v52[7]._vptr_IHandleEntity) != 0 ? v52 : 0LL;
    Inventory = CDOTA_BaseNPC::GetInventory(v57);
    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v51);
    if ( ItemInSlot != 0 && ItemInSlot->m_pBotUsage != 0 )
    {
      pItema = ItemInSlot;
      v60 = (*(ItemInSlot->_vptr_IHandleEntity + 273))(ItemInSlot, 0xFFFFFFFFLL);
      v61 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v61 == 0 || BYTE3(v61[7]._vptr_IHandleEntity) == 0 )
        v61 = 0;
      if ( v60 > *&v61[44].m_iszPrivateVScripts.u.m_Id )
      {
        v66 = pItema;
        pItemc = (*(pItema->_vptr_IHandleEntity + 273))(pItema, 0xFFFFFFFFLL);
        v64 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v64 == 0 || BYTE3(v64[7]._vptr_IHandleEntity) == 0 )
          v64 = 0;
        if ( (iMaxManaGain + *&v64[44].m_iszPrivateVScripts.u.m_Id) > pItemc )
        {
          v65 = (*(v66->m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(v66->m_pBotUsage);
          if ( v65 > 2 )
            return 3;
          if ( v65 > 0 )
            return 2;
        }
      }
    }
    if ( ++v51 == 9 )
      goto LABEL_133;
    v52 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  }
}


// CDOTA_Bot_AbilityUsage_Bottle::UseAbility  (line 192, @0x0000000002896010, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Bottle::UseAbility(CDOTA_Bot_AbilityUsage_Bottle *const this)
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


