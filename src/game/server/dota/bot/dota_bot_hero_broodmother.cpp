
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Broodmother::CDOTA_Bot_Hero_Broodmother  (line 21, @0x00000000028b69d0, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "broodmother_spawn_spiderlings", "broodmother_incapacitating_bite", "broodmother_insatiable_hunger"
void __fastcall CDOTA_Bot_Hero_Broodmother::CDOTA_Bot_Hero_Broodmother(
        CDOTA_Bot_Hero_Broodmother *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CA150;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilitySpawnSpiderlings = CDOTA_BaseNPC::FindAbilityByName(v6, "broodmother_spawn_spiderlings", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilitySpinWeb = CDOTA_BaseNPC::FindAbilityByName(v8, "broodmother_spin_web", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityIncapacitatingBite = CDOTA_BaseNPC::FindAbilityByName(v10, "broodmother_incapacitating_bite", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityInsatiableHunger = CDOTA_BaseNPC::FindAbilityByName(v12, "broodmother_insatiable_hunger", 1);
}


// CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings::CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings  (line 34, @0x00000000028b6b00, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings::CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings(
        CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CA2B0;  // vptr: CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings
}


// CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings::GetCurrentUsageDesire  (line 41, @0x00000000028b3f20, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings::UseAbility  (line 48, @0x00000000028b3f30, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings::UseAbility(
        CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb::CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb  (line 56, @0x00000000028b6b20, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb::CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb(
        CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CA310;  // vptr: CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb
}


// CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb::GetCurrentUsageDesire  (line 63, @0x00000000028b3f40, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb::UseAbility  (line 70, @0x00000000028b3f50, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb::UseAbility(
        CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger::CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger  (line 78, @0x00000000028b6b40, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger::CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger(
        CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CA370;  // vptr: CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger
}


// CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger::GetCurrentUsageDesire  (line 85, @0x00000000028b3f60, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger::UseAbility  (line 92, @0x00000000028b3f70, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger::UseAbility(
        CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger *const this)
{
  ;
}


