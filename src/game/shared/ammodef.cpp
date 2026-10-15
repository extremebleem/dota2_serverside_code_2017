
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CAmmoDef::GetAmmoOfIndex  (line 21, @0x000000000205e690, libserver.so)
// callers: CC_GiveCurrentAmmo, CTakeDamageInfo::GetAmmoName
Ammo_t *__fastcall CAmmoDef::GetAmmoOfIndex(CAmmoDef *const this, int nAmmoIndex)
{
  if ( this->m_nAmmoIndex <= nAmmoIndex )
    return 0;
  else
    return &this->m_AmmoType[nAmmoIndex];
}


// CAmmoDef::Index  (line 34, @0x000000000205e6c0, libserver.so)
// calls: V_stricmp_fast
// callers: FileWeaponInfo_t::Parse, CBaseCombatCharacter::GiveAmmo, CBaseCombatCharacter::RemoveAmmo, CBaseCombatCharacter::GetAmmoCount, CBaseCombatWeapon::SetupWeaponFileInfo, CGameRules::CanHaveAmmo, CBasePlayer::GiveNamedItem, GuessDamageForce
int __fastcall CAmmoDef::Index(CAmmoDef *const this, const char *psz)
{
  int v4; // ebx

  if ( psz == 0 || this->m_nAmmoIndex <= 1 )
    return -1;
  v4 = 1;
  while ( V_stricmp_fast(psz, this->m_AmmoType[v4].pName) != 0 )
  {
    if ( this->m_nAmmoIndex <= ++v4 )
      return -1;
  }
  return v4;
}


// CAmmoDef::PlrDamage  (line 55, @0x000000000205e730, libserver.so)  // inlines: GetFloat
// callers: CBaseEntity::FireBullets, CGameRules::GetAmmoDamage
int __fastcall CAmmoDef::PlrDamage(CAmmoDef *const this, int nAmmoIndex)
{
  int result; // eax
  char *v3; // rdx
  __int64 v4; // rax

  result = 0;
  if ( nAmmoIndex > 0 && nAmmoIndex < this->m_nAmmoIndex )
  {
    v3 = this + 72 * nAmmoIndex;
    result = *(v3 + 12);
    if ( result == -1 )
    {
      v4 = *(v3 + 8);
      if ( v4 != 0 )
        return *(*(v4 + 56) + 84LL);
      else
        return 0;
    }
  }
  return result;
}


// CAmmoDef::NPCDamage  (line 80, @0x000000000205e780, libserver.so)  // inlines: GetFloat
// callers: CGameRules::GetAmmoDamage
int __fastcall CAmmoDef::NPCDamage(CAmmoDef *const this, int nAmmoIndex)
{
  int result; // eax
  char *v3; // rdx
  __int64 v4; // rax

  result = 0;
  if ( nAmmoIndex > 0 && nAmmoIndex < this->m_nAmmoIndex )
  {
    v3 = this + 72 * nAmmoIndex;
    result = *(v3 + 13);
    if ( result == -1 )
    {
      v4 = *(v3 + 9);
      if ( v4 != 0 )
        return *(*(v4 + 56) + 84LL);
      else
        return 0;
    }
  }
  return result;
}


// CAmmoDef::MaxCarry  (line 105, @0x000000000205a7b0, libserver.so)  // inlines: GetInt
int __fastcall CAmmoDef::MaxCarry(CAmmoDef *const this, int nAmmoIndex, const CBaseCombatCharacter *owner)
{
  int result; // eax
  char *v4; // rdx
  __int64 v5; // rax

  result = 0;
  if ( nAmmoIndex > 0 && nAmmoIndex < this->m_nAmmoIndex )
  {
    v4 = this + 72 * nAmmoIndex;
    result = *(v4 + 14);
    if ( result == -1 )
    {
      v5 = *(v4 + 10);
      if ( v5 != 0 )
        return *(*(v5 + 56) + 88LL);
      else
        return 0;
    }
  }
  return result;
}


// CAmmoDef::CanCarryInfiniteAmmo  (line 123, @0x000000000205e7d0, libserver.so)  // inlines: GetInt
// callers: CBaseCombatCharacter::GetAmmoCount, CBaseCombatCharacter::RemoveAmmo
bool __fastcall CAmmoDef::CanCarryInfiniteAmmo(CAmmoDef *const this, int nAmmoIndex)
{
  bool result; // al
  char *v3; // rcx
  int v4; // edx
  __int64 v5; // rdx

  result = 0;
  if ( nAmmoIndex > 0 && nAmmoIndex < this->m_nAmmoIndex )
  {
    v3 = this + 72 * nAmmoIndex;
    v4 = *(v3 + 14);
    if ( v4 == -1 )
    {
      v5 = *(v3 + 10);
      if ( v5 != 0 )
        return *(*(v5 + 56) + 88LL) == -2;
    }
    else
    {
      return v4 == -2;
    }
  }
  return result;
}


// CAmmoDef::DamageType  (line 145, @0x000000000205e820, libserver.so)
// callers: CBaseEntity::FireBullets, CBaseEntity::HandleShotImpactingGlass
int __fastcall CAmmoDef::DamageType(CAmmoDef *const this, int nAmmoIndex)
{
  int result; // eax

  result = 0;
  if ( nAmmoIndex > 0 && nAmmoIndex < this->m_nAmmoIndex )
    return this->m_AmmoType[nAmmoIndex].nDamageType;
  return result;
}


// CAmmoDef::Flags  (line 157, @0x000000000205e840, libserver.so)
// callers: CBaseEntity::FireBullets
int __fastcall CAmmoDef::Flags(CAmmoDef *const this, int nAmmoIndex)
{
  int result; // eax

  result = 0;
  if ( nAmmoIndex > 0 && nAmmoIndex < this->m_nAmmoIndex )
    return this->m_AmmoType[nAmmoIndex].nFlags;
  return result;
}


// CAmmoDef::MinSplashSize  (line 171, @0x000000000205e860, libserver.so)
// callers: CBaseEntity::HandleShotImpactingWater
int __fastcall CAmmoDef::MinSplashSize(CAmmoDef *const this, int nAmmoIndex)
{
  int result; // eax

  result = 4;
  if ( nAmmoIndex > 0 && nAmmoIndex < this->m_nAmmoIndex )
    return this->m_AmmoType[nAmmoIndex].nMinSplashSize;
  return result;
}


// CAmmoDef::MaxSplashSize  (line 184, @0x000000000205e890, libserver.so)
// callers: CBaseEntity::HandleShotImpactingWater
int __fastcall CAmmoDef::MaxSplashSize(CAmmoDef *const this, int nAmmoIndex)
{
  int result; // eax

  result = 8;
  if ( nAmmoIndex > 0 && nAmmoIndex < this->m_nAmmoIndex )
    return this->m_AmmoType[nAmmoIndex].nMaxSplashSize;
  return result;
}


// CAmmoDef::TracerType  (line 197, @0x000000000205e8c0, libserver.so)
// callers: CBaseEntity::FireBullets
int __fastcall CAmmoDef::TracerType(CAmmoDef *const this, int nAmmoIndex)
{
  int result; // eax

  result = 0;
  if ( nAmmoIndex > 0 && nAmmoIndex < this->m_nAmmoIndex )
    return this->m_AmmoType[nAmmoIndex].eTracerType;
  return result;
}


// CAmmoDef::DamageForce  (line 205, @0x000000000205e8e0, libserver.so)
// callers: CalculateBulletDamageForce
float __fastcall CAmmoDef::DamageForce(CAmmoDef *const this, int nAmmoIndex)
{
  if ( nAmmoIndex <= 0 || nAmmoIndex >= this->m_nAmmoIndex )
    return 0.0;
  else
    return this->m_AmmoType[nAmmoIndex].physicsForceImpulse;
}


// CAmmoDef::AddAmmoType  (line 218, @0x000000000205e910, libserver.so)  // inlines: V_strlen, V_strncpy<int>
// calls: strlen, operator new [], _V_strncpy
// callers: CAmmoDef::AddAmmoType
bool __fastcall CAmmoDef::AddAmmoType(
        CAmmoDef *const this,
        const char *name,
        int damageType,
        int tracerType,
        int nFlags,
        int minSplashSize,
        int maxSplashSize)
{
  __int64 m_nAmmoIndex; // rbx
  int v12; // eax
  int v13; // edx
  size_t v14; // rdi
  _DWORD *v15; // rax
  const char *v17; // [rsp+8h] [rbp-48h]
  const char *namea; // [rsp+10h] [rbp-40h]
  unsigned int nameb; // [rsp+10h] [rbp-40h]

  m_nAmmoIndex = this->m_nAmmoIndex;
  if ( m_nAmmoIndex == 32 )
    return 0;
  if ( name != 0 )
  {
    namea = name;
    v12 = strlen(name);
    name = namea;
    v13 = v12 + 1;
    v14 = v12 + 1;
  }
  else
  {
    v14 = 1;
    v13 = 1;
  }
  v17 = name;
  nameb = v13;
  this->m_AmmoType[m_nAmmoIndex].pName = operator new[](v14);
  _V_strncpy(this->m_AmmoType[this->m_nAmmoIndex].pName, v17, nameb);
  v15 = (this + 72 * this->m_nAmmoIndex);
  v15[6] = damageType;
  v15[7] = tracerType;
  v15[9] = minSplashSize;
  v15[10] = maxSplashSize;
  v15[11] = nFlags;
  return 1;
}


// CAmmoDef::AddAmmoType  (line 238, @0x000000000205e9f0, libserver.so)
// calls: CAmmoDef::AddAmmoType, Msg
// strings: "ERROR: Ammo (%s) found no CVar named (%s)\n"
void __fastcall CAmmoDef::AddAmmoType(
        CAmmoDef *const this,
        const char *name,
        int damageType,
        int tracerType,
        const char *plr_cvar,
        const char *npc_cvar,
        float physicsForceImpulse,
        const char *carry_cvar,
        int nFlags,
        int minSplashSize,
        int maxSplashSize)
{
  __int64 m_nAmmoIndex; // rbx
  int v16; // eax
  __int64 v17; // rbx

  if ( CAmmoDef::AddAmmoType(this, name, damageType, tracerType, nFlags, minSplashSize, maxSplashSize) )
  {
    if ( plr_cvar != 0 )
    {
      m_nAmmoIndex = this->m_nAmmoIndex;
      this->m_AmmoType[m_nAmmoIndex].pPlrDmgCVar = (*(*g_pCVar + 144LL))(g_pCVar, plr_cvar);
      v16 = this->m_nAmmoIndex;
      v17 = v16;
      if ( this->m_AmmoType[v16].pPlrDmgCVar == 0 )
      {
        Msg("ERROR: Ammo (%s) found no CVar named (%s)\n", name, plr_cvar);
        v16 = this->m_nAmmoIndex;
        v17 = v16;
      }
      this->m_AmmoType[v17].pPlrDmg = -1;
    }
    else
    {
      v16 = this->m_nAmmoIndex;
      v17 = v16;
    }
    if ( npc_cvar != 0 )
    {
      this->m_AmmoType[v17].pNPCDmgCVar = (*(*g_pCVar + 144LL))(g_pCVar, npc_cvar);
      v16 = this->m_nAmmoIndex;
      v17 = v16;
      if ( this->m_AmmoType[v16].pNPCDmgCVar == 0 )
      {
        Msg("ERROR: Ammo (%s) found no CVar named (%s)\n", name, npc_cvar);
        v16 = this->m_nAmmoIndex;
        v17 = v16;
      }
      this->m_AmmoType[v17].pNPCDmg = -1;
    }
    if ( carry_cvar != 0 )
    {
      this->m_AmmoType[v17].pMaxCarryCVar = (*(*g_pCVar + 144LL))(g_pCVar, carry_cvar);
      v16 = this->m_nAmmoIndex;
      v17 = v16;
      if ( this->m_AmmoType[v16].pMaxCarryCVar == 0 )
      {
        Msg("ERROR: Ammo (%s) found no CVar named (%s)\n", name, carry_cvar);
        v16 = this->m_nAmmoIndex;
        v17 = v16;
      }
      this->m_AmmoType[v17].pMaxCarry = -1;
    }
    this->m_AmmoType[v17].physicsForceImpulse = physicsForceImpulse;
    this->m_nAmmoIndex = v16 + 1;
  }
}


// CAmmoDef::AddAmmoType  (line 279, @0x000000000205ebb0, libserver.so)
// calls: CAmmoDef::AddAmmoType
void __fastcall CAmmoDef::AddAmmoType(
        CAmmoDef *const this,
        const char *name,
        int damageType,
        int tracerType,
        int plr_dmg,
        int npc_dmg,
        float physicsForceImpulse,
        int carry,
        int nFlags,
        int minSplashSize,
        int maxSplashSize)
{
  int m_nAmmoIndex; // edx
  char *v15; // rax

  if ( CAmmoDef::AddAmmoType(this, name, damageType, tracerType, nFlags, minSplashSize, maxSplashSize) )
  {
    m_nAmmoIndex = this->m_nAmmoIndex;
    v15 = this + 72 * m_nAmmoIndex;
    *(v15 + 12) = plr_dmg;
    *(v15 + 13) = npc_dmg;
    *(v15 + 14) = carry;
    *(v15 + 8) = physicsForceImpulse;
    this->m_nAmmoIndex = m_nAmmoIndex + 1;
  }
}


// CAmmoDef::CAmmoDef  (line 299, @0x000000000205ec20, libserver.so)  // inlines: memset
// calls: memset
// callers: _GLOBAL__sub_I__unity_dota_08.cpp
void __fastcall CAmmoDef::CAmmoDef(CAmmoDef *const this)
{
  Ammo_t *m_AmmoType; // rdi

  m_AmmoType = this->m_AmmoType;
  m_AmmoType[-1].pNPCDmgCVar = &off_3FED2F0;
  LODWORD(m_AmmoType[-1].pMaxCarryCVar) = 1;
  memset(m_AmmoType, 0, 0x900u);
}


// CAmmoDef::~CAmmoDef  (line 306, @0x0000000002059520, libserver.so)
// calls: operator delete []
// callers: CAmmoDef::~CAmmoDef
void __fastcall CAmmoDef::~CAmmoDef(CAmmoDef *const this)
{
  __int64 v2; // rbx
  char *pName; // rdi

  v2 = 0;
  this->_vptr_CAmmoDef = &off_3FED2F0;
  do
  {
    pName = this->m_AmmoType[v2 + 1].pName;
    if ( pName != 0 )
      operator delete[](pName);
    ++v2;
  }
  while ( v2 != 31 );
}


// CAmmoDef::~CAmmoDef  (line 306, @0x0000000002059570, libserver.so)
// calls: CAmmoDef::~CAmmoDef, operator delete
void __fastcall CAmmoDef::~CAmmoDef(CAmmoDef *const this)
{
  CAmmoDef::~CAmmoDef(this);
  operator delete(this);
}


// GetAmmoDef  (line 316, @0x000000000205ec50, libserver.so)
// callers: CBaseEntity::HandleShotImpactingWater, CBaseEntity::FireBullets, CBaseCombatCharacter::GetAmmoCount, CBaseCombatCharacter::RemoveAmmo, CBaseCombatCharacter::GiveAmmo, CBaseEntity::HandleShotImpactingGlass, CBasePlayer::ItemPostFrame, CBaseCombatWeapon::SetupWeaponFileInfo, CGameRules::CanHaveAmmo, CGameRules::GetAmmoDamage, CC_GiveCurrentAmmo, CBasePlayer::GiveNamedItem (15 total)
CAmmoDef *__cdecl GetAmmoDef()
{
  return (*g_pWeaponInfo->_vptr_IWeaponInfo)(g_pWeaponInfo);
}


