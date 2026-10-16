
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_MagicStick::CDOTA_Bot_AbilityUsage_MagicStick  (line 22, @0x00000000028a05f0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_MagicStick::CDOTA_Bot_AbilityUsage_MagicStick(
        CDOTA_Bot_AbilityUsage_MagicStick *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6530;  // vptr: CDOTA_Bot_AbilityUsage_MagicStick
}


// CDOTA_Bot_AbilityUsage_MagicStick::GetCurrentUsageDesire  (line 30, @0x00000000028a26f0, libserver.so)  // inlines: Get, GetCurrentCharges, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, GetMaxMana, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetHealth, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTA_Bot::IsDangerouslyLow, CDOTA_Bot::IsAboutToDie
// strings: "restore_per_charge"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_MagicStick::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_MagicStick *const this)
{
  CDOTABaseAbility *m_pAbility; // rbx
  int result; // eax
  CDOTABaseAbility *v4; // rbx
  CDOTABaseAbility *v5; // rdi
  int LevelSpecialValue; // eax
  CDOTABaseAbility *v7; // rbx
  int v8; // r12d
  CDOTABaseAbility *v9; // rax
  int v10; // r12d
  CDOTABaseAbility *v11; // rdi
  int v12; // eax
  CDOTABaseAbility *v13; // rbx
  int v14; // r14d
  int v15; // r14d
  CEntityInstance *v16; // rax
  CEntityInstance *v17; // rdi
  int v18; // ebx
  CEntityInstance *v19; // rax
  const CBaseEntity *v20; // rdi
  int Health; // eax
  CDOTA_Bot *m_pBot; // r15
  int v23; // ebx
  CEntityInstance *v24; // rax
  float v25; // xmm0_4
  float v26; // xmm0_4
  int v27; // edx
  CDOTA_Bot *v28; // r15
  int v29; // r12d
  uint32 m_Index; // eax
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v35; // rbx
  int v36; // eax
  CEntityInstance *v37; // rax
  uint32 v38; // eax
  CEntityIdentity *v39; // rdx
  CEntityIdentity *v40; // rdx
  CDOTA_BaseNPC *v41; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v44; // rbx
  int v45; // r15d
  CEntityInstance *v46; // rax
  int v47; // eax
  CEntityInstance *v48; // rax
  int v49; // eax
  CEntityInstance *v50; // rax
  int v51; // eax
  bool IsAboutToDie; // al
  float iManaDeficit; // [rsp+Ch] [rbp-34h]
  float iManaDeficita; // [rsp+Ch] [rbp-34h]
  float iManaDeficitb; // [rsp+Ch] [rbp-34h]
  int iManaDeficitc; // [rsp+Ch] [rbp-34h]

  m_pAbility = this->m_pAbility;
  if ( m_pAbility != 0 && (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
  {
    result = HIDWORD(m_pAbility[1].m_pDummyPhysicsComponent);
    if ( result == 0 )
      return result;
  }
  v4 = this->m_pAbility;
  if ( v4 != 0 && (*(v4->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    v5 = v4;
  else
    v5 = 0;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "restore_per_charge", -1, 1);
  v7 = this->m_pAbility;
  v8 = LevelSpecialValue;
  if ( v7 != 0 )
  {
    if ( (*(v7->_vptr_IHandleEntity + 223))(this->m_pAbility) != 0 )
    {
      v9 = v7;
      v7 = this->m_pAbility;
      goto LABEL_11;
    }
    v7 = this->m_pAbility;
  }
  v9 = 0;
LABEL_11:
  v10 = HIDWORD(v9[1].m_pDummyPhysicsComponent) * v8;
  if ( v7 != 0 && (*(v7->_vptr_IHandleEntity + 223))(v7) != 0 )
    v11 = v7;
  else
    v11 = 0;
  v12 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v11, "restore_per_charge", -1, 1);
  v13 = this->m_pAbility;
  v14 = v12;
  if ( v13 == 0 || (*(v13->_vptr_IHandleEntity + 223))(this->m_pAbility) == 0 )
    v13 = 0;
  v15 = HIDWORD(v13[1].m_pDummyPhysicsComponent) * v14;
  v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
    v17 = v16;
  else
    v17 = 0;
  v18 = (*(v17->_vptr_IHandleEntity + 156))(v17);
  v19 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
    v20 = v19;
  else
    v20 = 0;
  Health = CBaseEntity::GetHealth(v20);
  m_pBot = this->m_pBot;
  v23 = v18 - Health;
  v24 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v24 != 0 && BYTE3(v24[7]._vptr_IHandleEntity) != 0 )
  {
    v25 = *&v24[44].m_worldGroupId.m_nHashCode;
  }
  else
  {
    LODWORD(v25) = 7496;
    v24 = 0;
  }
  v26 = v25 - *&v24[44].m_iszPrivateVScripts.u.m_Id;
  v27 = v26;
  if ( v10 < v23 )
  {
    iManaDeficitc = v26;
    if ( CDOTA_Bot::IsDangerouslyLow(m_pBot) )
      return 3;
    IsAboutToDie = CDOTA_Bot::IsAboutToDie(this->m_pBot);
    v27 = iManaDeficitc;
    if ( IsAboutToDie )
      return 3;
  }
  if ( v15 < v27 )
  {
    v28 = this->m_pBot;
    v29 = 0;
    while ( 1 )
    {
      m_Index = v28->m_hUnit.m_Index;
      if ( m_Index + 2 <= 1
        || (v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v28->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
        || (v32 = &v31[v28->m_hUnit.m_Index & 0x1FF]) == 0
        || m_Index != v32->m_EHandle.m_Index
        || (m_pInstance = v32->m_pInstance, v32->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC )
      {
        m_pInstance = 0;
      }
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(m_pInstance, v29);
      v35 = AbilityByIndex;
      if ( AbilityByIndex == 0
        || AbilityByIndex->m_pBotUsage == 0
        || (*(AbilityByIndex->_vptr_IHandleEntity + 245))(AbilityByIndex) == 0 )
      {
        goto LABEL_61;
      }
      v36 = (*(v35->_vptr_IHandleEntity + 273))(&v35->_vptr_IHandleEntity, 0xFFFFFFFFLL);
      v28 = this->m_pBot;
      iManaDeficit = v36;
      v37 = CEntityHandle::operator CEntityInstance *(&v28->m_hUnit);
      if ( v37 != 0 && BYTE3(v37[7]._vptr_IHandleEntity) != 0 )
      {
        if ( iManaDeficit > *&v37[44].m_iszPrivateVScripts.u.m_Id )
          goto LABEL_56;
      }
      else if ( iManaDeficit > 0.0 )
      {
LABEL_56:
        v47 = (*(v35->_vptr_IHandleEntity + 273))(&v35->_vptr_IHandleEntity, 0xFFFFFFFFLL);
        v28 = this->m_pBot;
        iManaDeficita = v47;
        v48 = CEntityHandle::operator CEntityInstance *(&v28->m_hUnit);
        if ( v48 == 0 || BYTE3(v48[7]._vptr_IHandleEntity) == 0 )
          v48 = 0;
        if ( (v15 + *&v48[44].m_iszPrivateVScripts.u.m_Id) <= iManaDeficita )
          goto LABEL_39;
        v49 = (*(v35->m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(&v35->m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage);
        if ( v49 > 2 )
          return 3;
        if ( v49 > 0 )
          return 2;
LABEL_61:
        v28 = this->m_pBot;
      }
LABEL_39:
      if ( ++v29 == 24 )
      {
        LOBYTE(v29) = 0;
        while ( 1 )
        {
          v38 = v28->m_hUnit.m_Index;
          if ( v38 + 2 <= 1
            || (v39 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v28->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
            || (v40 = &v39[v28->m_hUnit.m_Index & 0x1FF]) == 0
            || v38 != v40->m_EHandle.m_Index
            || (v41 = v40->m_pInstance, v40->m_pInstance == 0)
            || !v41->m_bIsDOTANPC )
          {
            v41 = 0;
          }
          Inventory = CDOTA_BaseNPC::GetInventory(v41);
          ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v29);
          v44 = ItemInSlot;
          if ( ItemInSlot != 0 && ItemInSlot->m_pBotUsage != 0 )
          {
            v45 = (*(ItemInSlot->_vptr_IHandleEntity + 273))(ItemInSlot, 0xFFFFFFFFLL);
            v46 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v46 != 0 && BYTE3(v46[7]._vptr_IHandleEntity) != 0 )
            {
              if ( v45 <= *&v46[44].m_iszPrivateVScripts.u.m_Id )
                goto LABEL_51;
            }
            else if ( v45 <= 0.0 )
            {
              goto LABEL_51;
            }
            iManaDeficitb = (*(v44->_vptr_IHandleEntity + 273))(&v44->_vptr_IHandleEntity, 0xFFFFFFFFLL);
            v50 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v50 == 0 || BYTE3(v50[7]._vptr_IHandleEntity) == 0 )
              v50 = 0;
            if ( (v15 + *&v50[44].m_iszPrivateVScripts.u.m_Id) > iManaDeficitb )
            {
              v51 = (*(v44->m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(&v44->m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage);
              if ( v51 > 2 )
                return 3;
              if ( v51 > 0 )
                return 2;
            }
          }
LABEL_51:
          if ( ++v29 == 9 )
            return 0;
          v28 = this->m_pBot;
        }
      }
    }
  }
  return 0;
}


// CDOTA_Bot_AbilityUsage_MagicStick::UseAbility  (line 97, @0x000000000289f170, libserver.so)  // inlines: GetItem, ToDOTAItem
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_MagicStick::UseAbility(CDOTA_Bot_AbilityUsage_MagicStick *const this)
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


