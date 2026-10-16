
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// RegenerationForceOnChangeCallback  (line 32, @0x0000000002381aa0, libserver.so)  // inlines: CUtlSymbolLarge, GetBool, GetInt, GlobalEntity_GetIndex, GlobalEntity_IsInTable, GlobalEntity_SetState
// calls: ConVarRef::ConVarRef, GlobalEntity_GetIndex, MakeEntitySystemString, GlobalEntity_SetState, GlobalEntity_Add
// strings: "player_regenerates_health"
void __fastcall RegenerationForceOnChangeCallback(IConVar *pConVar, const char *pOldValue, double a3, float flOldValue)
{
  GLOBALESTATE v4; // bl
  const char *v5; // rdi
  int Index; // eax
  char *pGlobalname; // [rsp+0h] [rbp-30h]
  ConVarRef var; // [rsp+10h] [rbp-20h] BYREF

  ConVarRef::ConVarRef(&var, pConVar);
  if ( GlobalEntity_GetIndex("player_regenerates_health") < 0 )
  {
    GlobalEntity_Add("player_regenerates_health", gpGlobals->mapname, (var.m_pConVarState->m_Value.m_nValue != 0));
  }
  else
  {
    v4 = var.m_pConVarState->m_Value.m_nValue != 0;
    MakeEntitySystemString("player_regenerates_health");
    v5 = "";
    if ( pGlobalname != 0 )
      v5 = pGlobalname;
    Index = GlobalEntity_GetIndex(v5);
    GlobalEntity_SetState(Index, v4);
  }
}


// CSingleplayRules::IsMultiplayer  (line 50, @0x0000000002380bb0, libserver.so)
bool __fastcall CSingleplayRules::IsMultiplayer(CSingleplayRules *const this)
{
  return 0;
}


// CSingleplayRules::Damage_GetTimeBased  (line 59, @0x0000000002380bc0, libserver.so)
int __fastcall CSingleplayRules::Damage_GetTimeBased(CSingleplayRules *const this)
{
  return 4161536;
}


// CSingleplayRules::Damage_GetShouldGibCorpse  (line 68, @0x0000000002380bd0, libserver.so)
int __fastcall CSingleplayRules::Damage_GetShouldGibCorpse(CSingleplayRules *const this)
{
  return 737;
}


// CSingleplayRules::Damage_GetShowOnHud  (line 77, @0x0000000002380be0, libserver.so)
int __fastcall CSingleplayRules::Damage_GetShowOnHud(CSingleplayRules *const this)
{
  return 3621128;
}


// CSingleplayRules::Damage_GetNoPhysicsForce  (line 86, @0x0000000002380bf0, libserver.so)
int __fastcall CSingleplayRules::Damage_GetNoPhysicsForce(CSingleplayRules *const this)
{
  return (*(this->_vptr_CGameRules + 27))(this) | 0x1804829;
}


// CSingleplayRules::Damage_GetShouldNotBleed  (line 96, @0x0000000002380c10, libserver.so)
int __fastcall CSingleplayRules::Damage_GetShouldNotBleed(CSingleplayRules *const this)
{
  return &stru_120000;
}


// CSingleplayRules::Damage_IsTimeBased  (line 108, @0x0000000002380c20, libserver.so)
bool __fastcall CSingleplayRules::Damage_IsTimeBased(CSingleplayRules *const this, int iDmgType)
{
  return (iDmgType & 0x3F8000) != 0;
}


// CSingleplayRules::Damage_ShouldGibCorpse  (line 119, @0x0000000002380c30, libserver.so)
bool __fastcall CSingleplayRules::Damage_ShouldGibCorpse(CSingleplayRules *const this, int iDmgType)
{
  return (iDmgType & 0x2E1) != 0;
}


// CSingleplayRules::Damage_ShowOnHUD  (line 130, @0x0000000002380c40, libserver.so)
bool __fastcall CSingleplayRules::Damage_ShowOnHUD(CSingleplayRules *const this, int iDmgType)
{
  return (iDmgType & 0x374108) != 0;
}


// CSingleplayRules::Damage_NoPhysicsForce  (line 141, @0x0000000002380c50, libserver.so)
bool __fastcall CSingleplayRules::Damage_NoPhysicsForce(CSingleplayRules *const this, int iDmgType)
{
  return (iDmgType & ((*(this->_vptr_CGameRules + 27))(this) | 0x1804829)) != 0;
}


// CSingleplayRules::Damage_ShouldNotBleed  (line 153, @0x0000000002380c80, libserver.so)
bool __fastcall CSingleplayRules::Damage_ShouldNotBleed(CSingleplayRules *const this, int iDmgType)
{
  return (iDmgType & 0x120000) != 0;
}


// CSingleplayRules::PostSpawnGroupLoad  (line 161, @0x0000000002381f50, libserver.so)  // inlines: GetInt
// calls: CSource2Server::OnLoadSessionPersisters
void __fastcall CSingleplayRules::PostSpawnGroupLoad(
        CSingleplayRules *const this,
        const EventPostSpawnGroupLoad_t *const msg)
{
  if ( msg->m_SpawnGroupHandle == 1 && sv_session_persister_mode.m_pParent->m_Value.m_nValue > 0 )
    CSource2Server::OnLoadSessionPersisters(g_pSource2ServerInternal);
}


// CSingleplayRules::PreSpawnGroupUnload  (line 171, @0x0000000002381f90, libserver.so)  // inlines: GetInt
// calls: CSource2Server::OnSaveSessionPersisters
void __fastcall CSingleplayRules::PreSpawnGroupUnload(
        CSingleplayRules *const this,
        const EventPreSpawnGroupUnload_t *const msg)
{
  if ( msg->m_SpawnGroupHandle == 1 && sv_session_persister_mode.m_pParent->m_Value.m_nValue > 0 )
    CSource2Server::OnSaveSessionPersisters(g_pSource2ServerInternal);
}


// sv_save_session_persisters  (line 182, @0x0000000002381b40, libserver.so)
// calls: CSource2Server::OnSaveSessionPersisters
void __fastcall sv_save_session_persisters(const CCommandContext *const ctx, const CCommand *const args)
{
  CSource2Server::OnSaveSessionPersisters(g_pSource2ServerInternal);
}


// CSingleplayRules::CSingleplayRules  (line 197, @0x00000000023917f0, libserver.so)
// calls: CGameRules::CGameRules
void __fastcall CSingleplayRules::CSingleplayRules(CSingleplayRules *const this)
{
  CGameRules::CGameRules(this);
  this->_vptr_CGameRules = off_40A94B0;  // vptr: CSingleplayRules
}


// CSingleplayRules::Think  (line 203, @0x00000000023a8ae0, libserver.so)
// calls: CGameRules::Think
void __fastcall CSingleplayRules::Think(CSingleplayRules *const this)
{
  CGameRules::Think(this);
}


// CSingleplayRules::IsDeathmatch  (line 210, @0x0000000002380c90, libserver.so)
bool __fastcall CSingleplayRules::IsDeathmatch(CSingleplayRules *const this)
{
  return 0;
}


// CSingleplayRules::IsCoOp  (line 217, @0x0000000002380ca0, libserver.so)
bool __fastcall CSingleplayRules::IsCoOp(CSingleplayRules *const this)
{
  return 0;
}


// CSingleplayRules::FShouldSwitchWeapon  (line 226, @0x0000000002382260, libserver.so)
// calls: CBaseCombatCharacter::GetActiveWeapon, CBaseCombatCharacter::GetAmmoCount
bool __fastcall CSingleplayRules::FShouldSwitchWeapon(
        CSingleplayRules *const this,
        CBasePlayer *pPlayer,
        CBaseCombatWeapon *pWeapon)
{
  char v5; // bl
  CBaseCombatWeapon *v7; // rax
  CBaseCombatWeapon *v8; // rax
  int v9; // r12d
  CBaseCombatWeapon *ActiveWeapon; // rax

  v5 = (*(pWeapon->_vptr_IHandleEntity + 276))(pWeapon);
  if ( v5 != 0 || CBaseCombatCharacter::GetAmmoCount(pPlayer, pWeapon->m_iPrimaryAmmoType.m_Value) > 0 )
  {
    v5 = 1;
    if ( CBaseCombatCharacter::GetActiveWeapon(pPlayer) != 0 )
    {
      if ( (*(pWeapon->_vptr_IHandleEntity + 342))(pWeapon) != 0
        && (v7 = CBaseCombatCharacter::GetActiveWeapon(pPlayer), (*(v7->_vptr_IHandleEntity + 343))(v7) != 0)
        && (v8 = CBaseCombatCharacter::GetActiveWeapon(pPlayer), (v5 = (*(v8->_vptr_IHandleEntity + 279))(v8)) != 0) )
      {
        if ( pWeapon != CBaseCombatCharacter::GetActiveWeapon(pPlayer) )
        {
          v9 = (*(pWeapon->_vptr_IHandleEntity + 341))(pWeapon);
          ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(pPlayer);
          if ( v9 <= (*(ActiveWeapon->_vptr_IHandleEntity + 341))(ActiveWeapon) )
            return 0;
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return v5;
}


// CSingleplayRules::GetNextBestWeapon  (line 258, @0x00000000023842d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWeapon, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: CBaseCombatCharacter::GetAmmoCount
// globals: CEntityHandle::gm_pEntityList
CBaseCombatWeapon *__fastcall CSingleplayRules::GetNextBestWeapon(
        CSingleplayRules *const this,
        CBaseCombatCharacter *pPlayer,
        CBaseCombatWeapon *pCurrentWeapon)
{
  __int64 v5; // r14
  int v6; // r15d
  CHandle<CBaseCombatWeapon> *v7; // rsi
  uint32 m_Index; // eax
  __int16 v9; // di
  CEntityIdentity *v10; // rsi
  CEntityIdentity *v11; // rsi
  int *m_pInstance; // r12
  int v14; // eax
  int nBestWeight; // [rsp+4h] [rbp-3Ch]
  CBaseCombatWeapon *pBestWeapon; // [rsp+8h] [rbp-38h]

  if ( pCurrentWeapon != 0 && (*(pCurrentWeapon->_vptr_IHandleEntity + 343))(pCurrentWeapon) == 0
    || pPlayer->m_hMyWeapons.m_Vector.m_Size <= 0 )
  {
    return 0;
  }
  v5 = 0;
  v6 = 0;
  nBestWeight = -1;
  pBestWeapon = 0;
  do
  {
    v7 = &pPlayer->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v5];
    m_Index = v7->m_Index;
    if ( v7->m_Index + 2 > 1 )
    {
      v9 = v7->m_Index;
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[v9 & 0x1FF];
        if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
        {
          m_pInstance = v11->m_pInstance;
          if ( v11->m_pInstance != 0
            && (pCurrentWeapon == 0 || (*(*m_pInstance + 2736LL))(v11->m_pInstance) != 0)
            && (*(pPlayer->_vptr_IHandleEntity + 313))(pPlayer, m_pInstance) != 0
            && (*(*m_pInstance + 2728LL))(m_pInstance) > nBestWeight )
          {
            if ( (*(*m_pInstance + 2808LL))(m_pInstance) == 0
              || m_pInstance[319] > 0
              || (v14 = (*(*m_pInstance + 2872LL))(m_pInstance), CBaseCombatCharacter::GetAmmoCount(pPlayer, v14) != 0) )
            {
              pBestWeapon = m_pInstance;
              nBestWeight = (*(*m_pInstance + 2728LL))(m_pInstance);
            }
          }
        }
      }
    }
    ++v6;
    ++v5;
  }
  while ( v6 < pPlayer->m_hMyWeapons.m_Vector.m_Size );
  return pBestWeapon;
}


// CSingleplayRules::SwitchToNextBestWeapon  (line 310, @0x0000000002380cb0, libserver.so)
bool __fastcall CSingleplayRules::SwitchToNextBestWeapon(
        CSingleplayRules *const this,
        CBaseCombatCharacter *pPlayer,
        CBaseCombatWeapon *pCurrentWeapon)
{
  __int64 v4; // rax

  v4 = (*(this->_vptr_CGameRules + 33))(this, pPlayer, pCurrentWeapon);
  return v4 != 0 && (*(pPlayer->_vptr_IHandleEntity + 310))(pPlayer, v4, 0);
}


// CSingleplayRules::ClientConnected  (line 322, @0x0000000002380d00, libserver.so)
bool __fastcall CSingleplayRules::ClientConnected(
        CSingleplayRules *const this,
        CEntityIndex nEntityIndex,
        const char *pszName,
        const char *pszAddress,
        char *reject,
        int maxrejectlen)
{
  return 1;
}


// CSingleplayRules::InitHUD  (line 327, @0x0000000002380d10, libserver.so)
void __fastcall CSingleplayRules::InitHUD(CSingleplayRules *const this, CBasePlayer *pl)
{
  ;
}


// CSingleplayRules::ClientDisconnected  (line 333, @0x0000000002380d20, libserver.so)
void __fastcall CSingleplayRules::ClientDisconnected(
        CSingleplayRules *const this,
        CEntityIndex nEntityIndex,
        ENetworkDisconnectionReason reason)
{
  ;
}


// CSingleplayRules::FlPlayerFallDamage  (line 339, @0x0000000002383320, libserver.so)  // inlines: NetworkStateChanged, Set, operator-=<int>
float __fastcall CSingleplayRules::FlPlayerFallDamage(CSingleplayRules *const this, CBasePlayer *pPlayer)
{
  float m_Value; // xmm0_4
  float v5; // [rsp+Ch] [rbp-14h]

  m_Value = pPlayer->m_Local.m_flFallVelocity.m_Value;
  if ( m_Value != (m_Value - 580.0) )
  {
    v5 = pPlayer->m_Local.m_flFallVelocity.m_Value - 580.0;
    (*(pPlayer->m_Local._vptr_CPlayerLocalData + 2))(&pPlayer->m_Local, 124, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    pPlayer->m_Local.m_flFallVelocity.m_Value = v5;
    m_Value = v5;
  }
  return (m_Value * 50.0) / 444.0;
}


// CSingleplayRules::AllowDamage  (line 349, @0x0000000002380d30, libserver.so)
bool __fastcall CSingleplayRules::AllowDamage(
        CSingleplayRules *const this,
        CBaseEntity *pVictim,
        const CTakeDamageInfo *const info)
{
  return 1;
}


// CSingleplayRules::PlayerSpawn  (line 356, @0x0000000002380d40, libserver.so)
void __fastcall CSingleplayRules::PlayerSpawn(CSingleplayRules *const this, CBasePlayer *pPlayer)
{
  ;
}


// CSingleplayRules::AllowAutoTargetCrosshair  (line 365, @0x0000000002380d50, libserver.so)
bool __fastcall CSingleplayRules::AllowAutoTargetCrosshair(CSingleplayRules *const this)
{
  return (*(this->_vptr_CGameRules + 53))(this, 1);
}


// CSingleplayRules::GetAutoAimMode  (line 372, @0x0000000002380d70, libserver.so)  // inlines: GetInt
int __fastcall CSingleplayRules::GetAutoAimMode(CSingleplayRules *const this)
{
  return sk_autoaim_mode.m_pParent->m_Value.m_nValue;
}


// CSingleplayRules::FPlayerCanRespawn  (line 379, @0x0000000002380d90, libserver.so)
bool __fastcall CSingleplayRules::FPlayerCanRespawn(CSingleplayRules *const this, CBasePlayer *pPlayer)
{
  return 1;
}


// CSingleplayRules::FlPlayerSpawnTime  (line 386, @0x0000000002383900, libserver.so)  // inlines: curtime
float __fastcall CSingleplayRules::FlPlayerSpawnTime(CSingleplayRules *const this, CBasePlayer *pPlayer)
{
  float result; // xmm0_4
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  result = 0.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, pPlayer, 0.0);
    }
    return v3->m_flCurrentTime;
  }
  return result;
}


// CSingleplayRules::IPointsForKill  (line 395, @0x0000000002380da0, libserver.so)
int __fastcall CSingleplayRules::IPointsForKill(
        CSingleplayRules *const this,
        CBasePlayer *pAttacker,
        CBasePlayer *pKilled)
{
  return 1;
}


// CSingleplayRules::PlayerKilled  (line 403, @0x0000000002380db0, libserver.so)
void __fastcall CSingleplayRules::PlayerKilled(
        CSingleplayRules *const this,
        CBasePlayer *pVictim,
        const CTakeDamageInfo *const info)
{
  ;
}


// CSingleplayRules::DeathNotice  (line 410, @0x0000000002380dc0, libserver.so)
void __fastcall CSingleplayRules::DeathNotice(
        CSingleplayRules *const this,
        CBasePlayer *pVictim,
        const CTakeDamageInfo *const info)
{
  ;
}


// CSingleplayRules::FlWeaponRespawnTime  (line 418, @0x0000000002380dd0, libserver.so)
float __fastcall CSingleplayRules::FlWeaponRespawnTime(CSingleplayRules *const this, CBaseCombatWeapon *pWeapon)
{
  return -1.0;
}


// CSingleplayRules::FlWeaponTryRespawn  (line 428, @0x0000000002380de0, libserver.so)
float __fastcall CSingleplayRules::FlWeaponTryRespawn(CSingleplayRules *const this, CBaseCombatWeapon *pWeapon)
{
  return 0.0;
}


// CSingleplayRules::VecWeaponRespawnSpot  (line 437, @0x00000000023812b0, libserver.so)
// calls: CBaseEntity::GetAbsOrigin
Vector __fastcall CSingleplayRules::VecWeaponRespawnSpot(CSingleplayRules *const this, CBaseCombatWeapon *pWeapon)
{
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  AbsOrigin = CBaseEntity::GetAbsOrigin(pWeapon);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CSingleplayRules::WeaponShouldRespawn  (line 446, @0x0000000002380df0, libserver.so)
int __fastcall CSingleplayRules::WeaponShouldRespawn(CSingleplayRules *const this, CBaseCombatWeapon *pWeapon)
{
  return 2;
}


// CSingleplayRules::CanHaveItem  (line 453, @0x0000000002380e00, libserver.so)
bool __fastcall CSingleplayRules::CanHaveItem(CSingleplayRules *const this, CBasePlayer *pPlayer, CItem *pItem)
{
  return 1;
}


// CSingleplayRules::PlayerGotItem  (line 460, @0x0000000002380e10, libserver.so)
void __fastcall CSingleplayRules::PlayerGotItem(CSingleplayRules *const this, CBasePlayer *pPlayer, CItem *pItem)
{
  ;
}


// CSingleplayRules::ItemShouldRespawn  (line 466, @0x0000000002380e20, libserver.so)
int __fastcall CSingleplayRules::ItemShouldRespawn(CSingleplayRules *const this, CItem *pItem)
{
  return 6;
}


// CSingleplayRules::FlItemRespawnTime  (line 475, @0x0000000002380e30, libserver.so)
float __fastcall CSingleplayRules::FlItemRespawnTime(CSingleplayRules *const this, CItem *pItem)
{
  return -1.0;
}


// CSingleplayRules::VecItemRespawnSpot  (line 484, @0x00000000023812e0, libserver.so)
// calls: CBaseEntity::GetAbsOrigin
Vector __fastcall CSingleplayRules::VecItemRespawnSpot(CSingleplayRules *const this, CItem *pItem)
{
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  AbsOrigin = CBaseEntity::GetAbsOrigin(pItem);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CSingleplayRules::VecItemRespawnAngles  (line 492, @0x0000000002381310, libserver.so)
// calls: CBaseEntity::GetAbsAngles
QAngle __fastcall CSingleplayRules::VecItemRespawnAngles(CSingleplayRules *const this, CItem *pItem)
{
  const QAngle *AbsAngles; // rax
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  AbsAngles = CBaseEntity::GetAbsAngles(pItem);
  *&result.x = *&AbsAngles->x;
  result.z = AbsAngles->z;
  return result;
}


// CSingleplayRules::IsAllowedToSpawn  (line 499, @0x0000000002380e40, libserver.so)
bool __fastcall CSingleplayRules::IsAllowedToSpawn(CSingleplayRules *const this, CBaseEntity *pEntity)
{
  return 1;
}


// CSingleplayRules::PlayerGotAmmo  (line 506, @0x0000000002380e50, libserver.so)
void __fastcall CSingleplayRules::PlayerGotAmmo(
        CSingleplayRules *const this,
        CBaseCombatCharacter *pPlayer,
        char *szName,
        int iCount)
{
  ;
}


// CSingleplayRules::FlHealthChargerRechargeTime  (line 512, @0x0000000002380e60, libserver.so)
float __fastcall CSingleplayRules::FlHealthChargerRechargeTime(CSingleplayRules *const this)
{
  return 0.0;
}


// CSingleplayRules::DeadPlayerWeapons  (line 519, @0x0000000002380e70, libserver.so)
int __fastcall CSingleplayRules::DeadPlayerWeapons(CSingleplayRules *const this, CBasePlayer *pPlayer)
{
  return 9;
}


// CSingleplayRules::DeadPlayerAmmo  (line 526, @0x0000000002380e80, libserver.so)
int __fastcall CSingleplayRules::DeadPlayerAmmo(CSingleplayRules *const this, CBasePlayer *pPlayer)
{
  return 12;
}


// CSingleplayRules::PlayerRelationship  (line 533, @0x0000000002380e90, libserver.so)
int __fastcall CSingleplayRules::PlayerRelationship(
        CSingleplayRules *const this,
        CBaseEntity *pPlayer,
        CBaseEntity *pTarget)
{
  return 0;
}


// CSingleplayRules::PlayerCanHearChat  (line 541, @0x0000000002380ea0, libserver.so)
bool __fastcall CSingleplayRules::PlayerCanHearChat(
        CSingleplayRules *const this,
        CBasePlayer *pListener,
        CBasePlayer *pSpeaker,
        int nCustomModRules)
{
  return (*(this->_vptr_CGameRules + 114))(this, pListener, pSpeaker, nCustomModRules) == 1;
}


// CSingleplayRules::FAllowNPCs  (line 548, @0x0000000002380ec0, libserver.so)
bool __fastcall CSingleplayRules::FAllowNPCs(CSingleplayRules *const this)
{
  return 1;
}


