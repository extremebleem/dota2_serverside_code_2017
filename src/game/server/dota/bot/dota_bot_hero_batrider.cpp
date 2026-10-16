
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Batrider::CDOTA_Bot_Hero_Batrider  (line 21, @0x00000000028ae910, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::CDOTA_Bot, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "batrider_sticky_napalm", "batrider_flamebreak", "batrider_flaming_lasso"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Hero_Batrider::CDOTA_Bot_Hero_Batrider(
        CDOTA_Bot_Hero_Batrider *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // rdi
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *v16; // rdi
  uint32 v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *v20; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42C88D0;
  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v7 = &v6[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  this->m_pAbilityStickyNapalm = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "batrider_sticky_napalm", 1);
  v9 = this->m_hUnit.m_Index;
  if ( v9 + 2 <= 1
    || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v11 = &v10[this->m_hUnit.m_Index & 0x1FF]) == 0
    || v9 != v11->m_EHandle.m_Index
    || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
    || !v12->m_bIsDOTANPC )
  {
    v12 = 0;
  }
  this->m_pAbilityFlamebreak = CDOTA_BaseNPC::FindAbilityByName(v12, "batrider_flamebreak", 1);
  v13 = this->m_hUnit.m_Index;
  if ( v13 + 2 <= 1
    || (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v15 = &v14[this->m_hUnit.m_Index & 0x1FF]) == 0
    || v13 != v15->m_EHandle.m_Index
    || (v16 = v15->m_pInstance, v15->m_pInstance == 0)
    || !v16->m_bIsDOTANPC )
  {
    v16 = 0;
  }
  this->m_pAbilityFirefly = CDOTA_BaseNPC::FindAbilityByName(v16, "batrider_firefly", 1);
  v17 = this->m_hUnit.m_Index;
  if ( v17 + 2 <= 1
    || (v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v19 = &v18[this->m_hUnit.m_Index & 0x1FF]) == 0
    || v17 != v19->m_EHandle.m_Index
    || (v20 = v19->m_pInstance, v19->m_pInstance == 0)
    || !v20->m_bIsDOTANPC )
  {
    v20 = 0;
  }
  this->m_pAbilityFlamingLasso = CDOTA_BaseNPC::FindAbilityByName(v20, "batrider_flaming_lasso", 1);
}


// CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm::CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm  (line 34, @0x00000000028aeb60, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm::CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm(
        CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C8A30;  // vptr: CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm
}


// CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm::GetCurrentUsageDesire  (line 41, @0x00000000028aac60, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm::UseAbility  (line 48, @0x00000000028aac70, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm::UseAbility(
        CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_Batrider_Flamebreak::CDOTA_Bot_AbilityUsage_Batrider_Flamebreak  (line 56, @0x00000000028aeb80, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Batrider_Flamebreak::CDOTA_Bot_AbilityUsage_Batrider_Flamebreak(
        CDOTA_Bot_AbilityUsage_Batrider_Flamebreak *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C8A90;  // vptr: CDOTA_Bot_AbilityUsage_Batrider_Flamebreak
}


// CDOTA_Bot_AbilityUsage_Batrider_Flamebreak::GetCurrentUsageDesire  (line 63, @0x00000000028aac80, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Batrider_Flamebreak::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Batrider_Flamebreak *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Batrider_Flamebreak::UseAbility  (line 70, @0x00000000028aac90, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Batrider_Flamebreak::UseAbility(
        CDOTA_Bot_AbilityUsage_Batrider_Flamebreak *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_Batrider_Firefly::CDOTA_Bot_AbilityUsage_Batrider_Firefly  (line 78, @0x00000000028aeba0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Batrider_Firefly::CDOTA_Bot_AbilityUsage_Batrider_Firefly(
        CDOTA_Bot_AbilityUsage_Batrider_Firefly *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C8AF0;  // vptr: CDOTA_Bot_AbilityUsage_Batrider_Firefly
}


// CDOTA_Bot_AbilityUsage_Batrider_Firefly::GetCurrentUsageDesire  (line 85, @0x00000000028aaca0, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Batrider_Firefly::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Batrider_Firefly *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Batrider_Firefly::UseAbility  (line 92, @0x00000000028aacb0, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Batrider_Firefly::UseAbility(
        CDOTA_Bot_AbilityUsage_Batrider_Firefly *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso::CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso  (line 100, @0x00000000028aebc0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso::CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso(
        CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C8B50;  // vptr: CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso
}


// CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso::GetCurrentUsageDesire  (line 107, @0x00000000028aacc0, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso::UseAbility  (line 114, @0x00000000028aacd0, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso::UseAbility(
        CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso *const this)
{
  ;
}


