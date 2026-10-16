
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Chen::CDOTA_Bot_Hero_Chen  (line 21, @0x00000000028b6da0, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "chen_test_of_faith", "chen_hand_of_god"
void __fastcall CDOTA_Bot_Hero_Chen::CDOTA_Bot_Hero_Chen(
        CDOTA_Bot_Hero_Chen *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CA650;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityPenitence = CDOTA_BaseNPC::FindAbilityByName(v6, "chen_penitence", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityTestOfFaith = CDOTA_BaseNPC::FindAbilityByName(v8, "chen_test_of_faith", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityHolyPersuasion = CDOTA_BaseNPC::FindAbilityByName(v10, "chen_holy_persuasion", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityHandOfGod = CDOTA_BaseNPC::FindAbilityByName(v12, "chen_hand_of_god", 1);
}


// CDOTA_Bot_AbilityUsage_Chen_Penitence::CDOTA_Bot_AbilityUsage_Chen_Penitence  (line 34, @0x00000000028b6ed0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Chen_Penitence::CDOTA_Bot_AbilityUsage_Chen_Penitence(
        CDOTA_Bot_AbilityUsage_Chen_Penitence *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CA7B0;  // vptr: CDOTA_Bot_AbilityUsage_Chen_Penitence
}


// CDOTA_Bot_AbilityUsage_Chen_Penitence::GetCurrentUsageDesire  (line 41, @0x00000000028b3f80, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Chen_Penitence::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Chen_Penitence *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Chen_Penitence::UseAbility  (line 48, @0x00000000028b3f90, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Chen_Penitence::UseAbility(CDOTA_Bot_AbilityUsage_Chen_Penitence *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_Chen_TestOfFaith::CDOTA_Bot_AbilityUsage_Chen_TestOfFaith  (line 56, @0x00000000028b6ef0, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Chen_TestOfFaith::CDOTA_Bot_AbilityUsage_Chen_TestOfFaith(
        CDOTA_Bot_AbilityUsage_Chen_TestOfFaith *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CA810;  // vptr: CDOTA_Bot_AbilityUsage_Chen_TestOfFaith
}


// CDOTA_Bot_AbilityUsage_Chen_TestOfFaith::GetCurrentUsageDesire  (line 63, @0x00000000028b3fa0, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Chen_TestOfFaith::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Chen_TestOfFaith *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Chen_TestOfFaith::UseAbility  (line 70, @0x00000000028b3fb0, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Chen_TestOfFaith::UseAbility(
        CDOTA_Bot_AbilityUsage_Chen_TestOfFaith *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion::CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion  (line 78, @0x00000000028b6f10, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion::CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion(
        CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CA870;  // vptr: CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion
}


// CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion::GetCurrentUsageDesire  (line 85, @0x00000000028b3fc0, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion::UseAbility  (line 92, @0x00000000028b3fd0, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion::UseAbility(
        CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_Chen_HandOfGod::CDOTA_Bot_AbilityUsage_Chen_HandOfGod  (line 100, @0x00000000028b6f30, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Chen_HandOfGod::CDOTA_Bot_AbilityUsage_Chen_HandOfGod(
        CDOTA_Bot_AbilityUsage_Chen_HandOfGod *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CA8D0;  // vptr: CDOTA_Bot_AbilityUsage_Chen_HandOfGod
}


// CDOTA_Bot_AbilityUsage_Chen_HandOfGod::GetCurrentUsageDesire  (line 107, @0x00000000028b3fe0, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Chen_HandOfGod::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Chen_HandOfGod *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Chen_HandOfGod::UseAbility  (line 114, @0x00000000028b3ff0, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Chen_HandOfGod::UseAbility(CDOTA_Bot_AbilityUsage_Chen_HandOfGod *const this)
{
  ;
}


