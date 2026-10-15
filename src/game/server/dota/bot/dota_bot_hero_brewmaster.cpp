
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Brewmaster::CDOTA_Bot_Hero_Brewmaster  (line 21, @0x00000000028af550, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::CDOTA_Bot, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "brewmaster_thunder_clap", "brewmaster_drunken_haze", "brewmaster_primal_split"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Hero_Brewmaster::CDOTA_Bot_Hero_Brewmaster(
        CDOTA_Bot_Hero_Brewmaster *const this,
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

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42C95F0;
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
  this->m_pAbilityThunderClap = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "brewmaster_thunder_clap", 1);
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
  this->m_pAbilityDrunkenHaze = CDOTA_BaseNPC::FindAbilityByName(v12, "brewmaster_drunken_haze", 1);
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
  this->m_pAbilityPrimalSplit = CDOTA_BaseNPC::FindAbilityByName(v16, "brewmaster_primal_split", 1);
}


// CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap::CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap  (line 33, @0x00000000028af720, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap::CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap(
        CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C9750;
}


// CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap::GetCurrentUsageDesire  (line 40, @0x00000000028aad50, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap::UseAbility  (line 47, @0x00000000028aad60, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap::UseAbility(
        CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze::CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze  (line 55, @0x00000000028af740, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze::CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze(
        CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C97B0;
}


// CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze::GetCurrentUsageDesire  (line 62, @0x00000000028aad70, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze::UseAbility  (line 69, @0x00000000028aad80, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze::UseAbility(
        CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit::CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit  (line 77, @0x00000000028af760, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit::CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit(
        CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C9810;
}


// CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit::GetCurrentUsageDesire  (line 84, @0x00000000028aad90, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit::UseAbility  (line 91, @0x00000000028aada0, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit::UseAbility(
        CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit *const this)
{
  ;
}


