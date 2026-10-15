
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Clinkz::CDOTA_Bot_Hero_Clinkz  (line 21, @0x00000000028b6f70, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
// strings: "clinkz_searing_arrows"
void __fastcall CDOTA_Bot_Hero_Clinkz::CDOTA_Bot_Hero_Clinkz(
        CDOTA_Bot_Hero_Clinkz *const this,
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
  this->_vptr_CDOTA_Bot = &off_42CA930;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityStrafe = CDOTA_BaseNPC::FindAbilityByName(v6, "clinkz_strafe", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilitySearingArrows = CDOTA_BaseNPC::FindAbilityByName(v8, "clinkz_searing_arrows", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityWindWalk = CDOTA_BaseNPC::FindAbilityByName(v10, "clinkz_wind_walk", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityDeathPact = CDOTA_BaseNPC::FindAbilityByName(v12, "clinkz_death_pact", 1);
}


// CDOTA_Bot_Hero_Clinkz::GetAttacksPerSecondWithBonus  (line 35, @0x00000000028b70a0, libserver.so)  // inlines: Clamp<float>, Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, Max<float>, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetBaseAttackTime
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Hero_Clinkz::GetAttacksPerSecondWithBonus(
        CDOTA_Bot_Hero_Clinkz *const this,
        double a2,
        double fBonus)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v5; // rsi
  CEntityIdentity *v6; // rdx
  __int64 v7; // rcx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // rdi
  float v10; // xmm0_4
  float v11; // xmm2_4
  float m_fValue; // xmm1_4
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *v16; // rdi

  m_Index = this->m_hUnit.m_Index;
  v5 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v7 = this->m_hUnit.m_Index & 0x1FF, v5 = (8 * v7), (v8 = &v6[v7]) == 0)
    || m_Index != v8->m_EHandle.m_Index
    || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v10 = (*(m_pInstance->_vptr_IHandleEntity + 435))(m_pInstance, v5, a2, fBonus) + *&a2;
  v11 = 0.19999999;
  if ( v10 >= -0.80000001 )
    v11 = v10 + 1.0;
  m_fValue = dota_min_haste.m_pParent->m_Value.m_fValue;
  if ( m_fValue <= v11 )
    m_fValue = fminf(dota_max_haste.m_pParent->m_Value.m_fValue, v11);
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
  return CDOTA_BaseNPC::GetBaseAttackTime(v16) / m_fValue;
}


// CDOTA_Bot_AbilityUsage_Clinkz_Strafe::CDOTA_Bot_AbilityUsage_Clinkz_Strafe  (line 49, @0x00000000028b7200, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Clinkz_Strafe::CDOTA_Bot_AbilityUsage_Clinkz_Strafe(
        CDOTA_Bot_AbilityUsage_Clinkz_Strafe *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CAA90;
}


// CDOTA_Bot_AbilityUsage_Clinkz_Strafe::GetCurrentUsageDesire  (line 56, @0x00000000028b4000, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Clinkz_Strafe::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Clinkz_Strafe *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Clinkz_Strafe::UseAbility  (line 63, @0x00000000028b4010, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Clinkz_Strafe::UseAbility(CDOTA_Bot_AbilityUsage_Clinkz_Strafe *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows::CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows  (line 71, @0x00000000028b7220, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows::CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows(
        CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CAAF0;
}


// CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows::GetCurrentUsageDesire  (line 78, @0x00000000028b4020, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows::UseAbility  (line 85, @0x00000000028b4030, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows::UseAbility(
        CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_Clinkz_Windwalk::CDOTA_Bot_AbilityUsage_Clinkz_Windwalk  (line 93, @0x00000000028b7240, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Clinkz_Windwalk::CDOTA_Bot_AbilityUsage_Clinkz_Windwalk(
        CDOTA_Bot_AbilityUsage_Clinkz_Windwalk *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CAB50;
}


// CDOTA_Bot_AbilityUsage_Clinkz_Windwalk::GetCurrentUsageDesire  (line 100, @0x00000000028b4040, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Clinkz_Windwalk::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Clinkz_Windwalk *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Clinkz_Windwalk::UseAbility  (line 107, @0x00000000028b4050, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Clinkz_Windwalk::UseAbility(CDOTA_Bot_AbilityUsage_Clinkz_Windwalk *const this)
{
  ;
}


// CDOTA_Bot_AbilityUsage_Clinkz_DeathPact::CDOTA_Bot_AbilityUsage_Clinkz_DeathPact  (line 115, @0x00000000028b7260, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Clinkz_DeathPact::CDOTA_Bot_AbilityUsage_Clinkz_DeathPact(
        CDOTA_Bot_AbilityUsage_Clinkz_DeathPact *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42CABB0;
}


// CDOTA_Bot_AbilityUsage_Clinkz_DeathPact::GetCurrentUsageDesire  (line 122, @0x00000000028b4060, libserver.so)
int __fastcall CDOTA_Bot_AbilityUsage_Clinkz_DeathPact::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Clinkz_DeathPact *const this)
{
  return 0;
}


// CDOTA_Bot_AbilityUsage_Clinkz_DeathPact::UseAbility  (line 129, @0x00000000028b4070, libserver.so)
void __fastcall CDOTA_Bot_AbilityUsage_Clinkz_DeathPact::UseAbility(
        CDOTA_Bot_AbilityUsage_Clinkz_DeathPact *const this)
{
  ;
}


