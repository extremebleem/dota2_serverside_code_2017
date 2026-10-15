
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Antimage::CDOTA_Bot_Hero_Antimage  (line 21, @0x00000000028ae060, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::CDOTA_Bot, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "antimage_blink", "antimage_mana_void"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Hero_Antimage::CDOTA_Bot_Hero_Antimage(
        CDOTA_Bot_Hero_Antimage *const this,
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

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42C7E70;
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
  this->m_pAbilityBlink = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "antimage_blink", 1);
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
  this->m_pAbilityManaVoid = CDOTA_BaseNPC::FindAbilityByName(v12, "antimage_mana_void", 1);
}


// CDOTA_Bot_AbilityUsage_Antimage_Blink::CDOTA_Bot_AbilityUsage_Antimage_Blink  (line 32, @0x00000000028ae1a0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Antimage_Blink::CDOTA_Bot_AbilityUsage_Antimage_Blink(
        CDOTA_Bot_AbilityUsage_Antimage_Blink *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C7FD0;
}


// CDOTA_Bot_AbilityUsage_Antimage_Blink::GetCurrentUsageDesire  (line 39, @0x00000000028aac10, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Antimage_Blink::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Antimage_Blink *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Antimage_Blink::UseAbility  (line 46, @0x00000000028aac20, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Antimage_Blink::UseAbility(CDOTA_Bot_AbilityUsage_Antimage_Blink *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_Antimage_ManaVoid::CDOTA_Bot_AbilityUsage_Antimage_ManaVoid  (line 55, @0x00000000028ae1c0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Antimage_ManaVoid::CDOTA_Bot_AbilityUsage_Antimage_ManaVoid(
        CDOTA_Bot_AbilityUsage_Antimage_ManaVoid *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C8030;
}


// CDOTA_Bot_AbilityUsage_Antimage_ManaVoid::GetCurrentUsageDesire  (line 62, @0x00000000028aac30, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Antimage_ManaVoid::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Antimage_ManaVoid *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Antimage_ManaVoid::UseAbility  (line 69, @0x00000000028aac40, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Antimage_ManaVoid::UseAbility(
        CDOTA_Bot_AbilityUsage_Antimage_ManaVoid *const this)
{
  ;
}


