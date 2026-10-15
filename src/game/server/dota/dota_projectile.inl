
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// sTrackingProjectileCreateInfo::sTrackingProjectileCreateInfo  (line 94, @0x0000000002a6f780, libserver.so)  // inlines: CEntityHandle, CHandle, Color, operator=
// callers: CDOTA_Ability_Windrunner_Shackleshot::OnProjectileHit
void __fastcall sTrackingProjectileCreateInfo::sTrackingProjectileCreateInfo(sTrackingProjectileCreateInfo *const this)
{
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4

  this->hSource.m_Index = -1;
  this->hTarget.m_Index = -1;
  this->colorGemColor = 0;
  x = vec3_origin.x;
  this->pszEffectName = 0;
  this->pAbility = 0;
  this->vSourceLoc.x = x;
  y = vec3_origin.y;
  this->pAttackRecord = 0;
  this->vSourceLoc.y = y;
  z = vec3_origin.z;
  this->iMoveSpeed = 0;
  this->vSourceLoc.z = z;
  this->iSourceAttachment = 1;
  this->bProvidesVision = 0;
  this->iVisionTeamNumber = -1;
  this->iVisionRadius = 0;
  this->bDrawsOnMinimap = 0;
  this->bDodgeable = 1;
  this->bIsAttack = 0;
  this->bVisibleToEnemies = 1;
  this->pKVExtraData = 0;
  this->bReplaceExisting = 0;
  this->flExpireTime = 0.0;
  this->flMaxImpactTime = 0.0;
  this->bServerOnly = 0;
}


// sLinearProjectileCreateInfo::sLinearProjectileCreateInfo  (line 151, @0x0000000002bb8fd0, libserver.so)  // inlines: CEntityHandle, CHandle, operator=
// callers: CDOTA_Ability_Alchemist_UnstableConcoctionThrow::OnSpellStart
void __fastcall sLinearProjectileCreateInfo::sLinearProjectileCreateInfo(sLinearProjectileCreateInfo *const this)
{
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4

  this->hSource.m_Index = -1;
  this->pszEffectName = 0;
  this->pAbility = 0;
  z = vec3_origin.z;
  this->bHasFrontalCone = 1;
  x = vec3_origin.x;
  this->bCheckStartPosition = 0;
  y = vec3_origin.y;
  this->vSpawnOrigin.z = z;
  this->vVelocity.z = z;
  this->vAcceleration.z = z;
  this->vSpawnOrigin.x = x;
  this->vSpawnOrigin.y = y;
  this->vVelocity.x = x;
  this->vVelocity.y = y;
  this->vAcceleration.x = x;
  this->vAcceleration.y = y;
  this->fDistance = 0.0;
  this->fStartRadius = 0.0;
  this->fEndRadius = 0.0;
  this->iUnitTargetTeam = 0;
  this->iUnitTargetType = 0;
  this->iUnitTargetFlags = 0;
  this->bProvidesVision = 0;
  this->iVisionTeamNumber = -1;
  this->iVisionRadius = -1;
  this->bDrawsOnMinimap = 0;
  this->bVisibleToEnemies = 1;
  this->bIgnoreSource = 0;
  this->bStickyFoWReveal = 0;
  this->pKVExtraData = 0;
  this->fExpireTime = 0.0;
  this->fMaxSpeed = 0.0;
}


// CDOTA_ProjectileManager::~CDOTA_ProjectileManager  (line 214, @0x00000000026abe50, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CDOTA_TrackingProjectileInfo, CUtlMemory<CDOTA_TrackingProjectileInfo, int> >::RemoveAll, IGameSystem::~IGameSystem, CUtlMemory<CDOTA_TrackingProjectileInfo, int>::Purge, CUtlMemory<CDOTA_LinearProjectileInfo*, int>::Purge
void __fastcall CDOTA_ProjectileManager::~CDOTA_ProjectileManager(CDOTA_ProjectileManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<CDOTA_LinearProjectileInfo*,CUtlMemory<CDOTA_LinearProjectileInfo*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_LinearProjectiles.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_41703D0;
  this->m_LinearProjectiles.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_LinearProjectiles.m_Memory;
    CUtlMemory<CDOTA_LinearProjectileInfo *,int>::Purge(&this->m_LinearProjectiles.m_Memory);
    if ( (this->m_LinearProjectiles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_LinearProjectileInfo *,int>::Purge(p_m_Memory);
  }
  CUtlVectorBase<CDOTA_TrackingProjectileInfo,CUtlMemory<CDOTA_TrackingProjectileInfo,int>>::RemoveAll(&this->m_TrackingProjectiles);
  if ( (this->m_TrackingProjectiles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_TrackingProjectileInfo,int>::Purge(&this->m_TrackingProjectiles.m_Memory);
    if ( (this->m_TrackingProjectiles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_TrackingProjectileInfo,int>::Purge(&this->m_TrackingProjectiles.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CDOTA_ProjectileManager::~CDOTA_ProjectileManager  (line 214, @0x00000000026abee0, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CDOTA_ProjectileManager, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CDOTA_TrackingProjectileInfo, CUtlMemory<CDOTA_TrackingProjectileInfo, int> >::RemoveAll, IGameSystem::~IGameSystem, operator delete, CUtlMemory<CDOTA_TrackingProjectileInfo, int>::Purge, CUtlMemory<CDOTA_LinearProjectileInfo*, int>::Purge
void __fastcall CDOTA_ProjectileManager::~CDOTA_ProjectileManager(CDOTA_ProjectileManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<CDOTA_LinearProjectileInfo*,CUtlMemory<CDOTA_LinearProjectileInfo*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_LinearProjectiles.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_41703D0;
  this->m_LinearProjectiles.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_LinearProjectiles.m_Memory;
    CUtlMemory<CDOTA_LinearProjectileInfo *,int>::Purge(&this->m_LinearProjectiles.m_Memory);
    if ( (this->m_LinearProjectiles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_LinearProjectileInfo *,int>::Purge(p_m_Memory);
  }
  CUtlVectorBase<CDOTA_TrackingProjectileInfo,CUtlMemory<CDOTA_TrackingProjectileInfo,int>>::RemoveAll(&this->m_TrackingProjectiles);
  if ( (this->m_TrackingProjectiles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_TrackingProjectileInfo,int>::Purge(&this->m_TrackingProjectiles.m_Memory);
    if ( (this->m_TrackingProjectiles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_TrackingProjectileInfo,int>::Purge(&this->m_TrackingProjectiles.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTA_ProjectileManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 216, @0x000000000269d0a0, libserver.so)
void __fastcall CDOTA_ProjectileManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTA_ProjectileManager *const this)
{
  ;
}


// CDOTA_ProjectileManager::DoesGameSystemReallocate  (line 216, @0x000000000269d0b0, libserver.so)
// globals: CDOTA_ProjectileManager::sm_Factory
bool __fastcall CDOTA_ProjectileManager::DoesGameSystemReallocate(const CDOTA_ProjectileManager *const this)
{
  return (*(CDOTA_ProjectileManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_ProjectileManager::sm_Factory);
}


// CDOTA_ProjectileManager::SetGameSystemGlobalPtrs  (line 216, @0x000000000269d0d0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_ProjectileManager::sm_Factory
void __fastcall CDOTA_ProjectileManager::SetGameSystemGlobalPtrs(CDOTA_ProjectileManager *const this, void *pValue)
{
  if ( CDOTA_ProjectileManager::sm_Factory != 0 )
    (*(CDOTA_ProjectileManager::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTA_ProjectileManager::sm_Factory, pValue);
}


// CDOTA_ProjectileManager::Script_ProjectileDodge  (line 261, @0x00000000026a9b80, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, HScriptToEntity<CBaseEntity>, Set, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CDOTA_ProjectileManager::ProjectileDodge
void __fastcall CDOTA_ProjectileManager::Script_ProjectileDodge(CDOTA_ProjectileManager *const this, HSCRIPT hEnt)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int16 v8; // cx
  EHANDLE hTarget; // [rsp+0h] [rbp-30h] BYREF

  if ( hEnt != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hEnt, Script);
    hTarget.m_Index = -1;
    if ( v6 != 0 )
    {
      v7 = *(v6 + 8);
      if ( v7 != 0 )
      {
        v8 = 0x7FFF;
        if ( *(v7 + 16) != -1 )
          v8 = *(v7 + 16) & 0x7FFF;
        hTarget.m_Index = (((*(v7 + 16) >> 15) - (*(v7 + 48) & 1)) << 15) | v8 & 0x7FFF;
      }
    }
  }
  else
  {
    hTarget.m_Index = -1;
  }
  CDOTA_ProjectileManager::ProjectileDodge(this, &hTarget, 0);
}


