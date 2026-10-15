
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_AncientApparition::CDOTA_Bot_Hero_AncientApparition  (line 21, @0x00000000028adcc0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::CDOTA_Bot, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "ancient_apparition_cold_feet", "ancient_apparition_ice_vortex", "ancient_apparition_chilling_touch", "ancient_apparition_ice_blast", "ancient_apparition_ice_blast_release"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_Hero_AncientApparition::CDOTA_Bot_Hero_AncientApparition(
        CDOTA_Bot_Hero_AncientApparition *const this,
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
  uint32 v21; // eax
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CDOTA_BaseNPC *v24; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42C7B30;
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
  this->m_pAbilityColdFeet = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "ancient_apparition_cold_feet", 1);
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
  this->m_pAbilityIceVortex = CDOTA_BaseNPC::FindAbilityByName(v12, "ancient_apparition_ice_vortex", 1);
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
  this->m_pAbilityChillingTouch = CDOTA_BaseNPC::FindAbilityByName(v16, "ancient_apparition_chilling_touch", 1);
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
  this->m_pAbilityIceBlast = CDOTA_BaseNPC::FindAbilityByName(v20, "ancient_apparition_ice_blast", 1);
  v21 = this->m_hUnit.m_Index;
  if ( v21 + 2 <= 1
    || (v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v23 = &v22[this->m_hUnit.m_Index & 0x1FF]) == 0
    || v21 != v23->m_EHandle.m_Index
    || (v24 = v23->m_pInstance, v23->m_pInstance == 0)
    || !v24->m_bIsDOTANPC )
  {
    v24 = 0;
  }
  this->m_pAbilityIceBlastRelease = CDOTA_BaseNPC::FindAbilityByName(v24, "ancient_apparition_ice_blast_release", 1);
}


// CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet::CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet  (line 35, @0x00000000028adfa0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet::CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet(
        CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C7C90;
}


// CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet::GetCurrentUsageDesire  (line 42, @0x00000000028aab70, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet::UseAbility  (line 49, @0x00000000028aab80, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet::UseAbility(
        CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex::CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex  (line 58, @0x00000000028adfc0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex::CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex(
        CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C7CF0;
}


// CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex::GetCurrentUsageDesire  (line 65, @0x00000000028aab90, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex::UseAbility  (line 72, @0x00000000028aaba0, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex::UseAbility(
        CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch::CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch  (line 80, @0x00000000028adfe0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch::CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch(
        CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C7D50;
}


// CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch::GetCurrentUsageDesire  (line 87, @0x00000000028aabb0, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch::UseAbility  (line 94, @0x00000000028aabc0, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch::UseAbility(
        CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast::CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast  (line 102, @0x00000000028ae000, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast::CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast(
        CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C7DB0;
}


// CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast::GetCurrentUsageDesire  (line 109, @0x00000000028aabd0, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast::UseAbility  (line 116, @0x00000000028aabe0, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast::UseAbility(
        CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease::CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease  (line 124, @0x00000000028ae020, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease::CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease(
        CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C7E10;
}


// CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease::GetCurrentUsageDesire  (line 131, @0x00000000028aabf0, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease::UseAbility  (line 138, @0x00000000028aac00, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease::UseAbility(
        CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease *const this)
{
  ;
}


