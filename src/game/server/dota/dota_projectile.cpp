// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_projectile.cpp:898
struct target_t {
	EHANDLE m_hEntity;  // +0x0
	float m_fDist;  // +0x4
	target_t();
	target_t(const target_t &);

	// sizeof = 8
};

// src/game/server/dota/dota_projectile.cpp:904
class CPotentialTargetLess {
	bool Less(const target_t &, const target_t &, void *);

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_ProjectileManager::GameInit  (line 34, @0x0000000002673f00, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll, ~CDOTA_LinearProjectileInfo, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CDOTA_TrackingProjectileInfo, CUtlMemory<CDOTA_TrackingProjectileInfo, int> >::RemoveAll, operator delete, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<CDOTA_LinearProjectileInfo*, int>::Purge
void __fastcall CDOTA_ProjectileManager::GameInit(
        CDOTA_ProjectileManager *const this,
        const EventGameInit_t *const msg)
{
  __int64 v3; // r13
  int v4; // r12d
  CDOTA_LinearProjectileInfo *v5; // rbx
  bool v6; // zf

  v3 = 0;
  v4 = 0;
  CUtlVectorBase<CDOTA_TrackingProjectileInfo,CUtlMemory<CDOTA_TrackingProjectileInfo,int>>::RemoveAll(&this->m_TrackingProjectiles);
  if ( this->m_LinearProjectiles.m_Size > 0 )
  {
    do
    {
      v5 = this->m_LinearProjectiles.m_Memory.m_pMemory[v3];
      if ( v5 != 0 )
      {
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&v5->m_hAlreadyHit);
        if ( (v5->m_hAlreadyHit.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&v5->m_hAlreadyHit.m_Memory);
          if ( (v5->m_hAlreadyHit.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&v5->m_hAlreadyHit.m_Memory);
        }
        operator delete(v5);
      }
      ++v4;
      ++v3;
    }
    while ( v4 < this->m_LinearProjectiles.m_Size );
  }
  v6 = (this->m_LinearProjectiles.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_LinearProjectiles.m_Size = 0;
  if ( v6 )
    CUtlMemory<CDOTA_LinearProjectileInfo *,int>::Purge(&this->m_LinearProjectiles.m_Memory);
  this->m_iLinearProjectileRunningIndex = 0;
}


// CDOTA_ProjectileManager::CreateTrackingProjectile  (line 46, @0x00000000026913d0, libserver.so)  // inlines: CEntityHandle, CHandle, CVariantBase, CreateTableFromKeyValues, DOTAGameRules, Free, Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, HasScriptFilter, HasTrackingProjectileFilter, IndexToIdentity, IsValid, LookupEntity, RunScriptFilter, RunTrackingProjectileFilter, SetBool, entindex, operator bool, operator->, sTrackingProjectileCreateInfo, ~CVariantBase
// calls: CDOTAGamerules::GetGameModeEntity, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetInt, CEntityInstance::GetEntityIndex, KeyValues::SetFloat, KeyValues::~KeyValues, KeyValues::operator delete, CDOTA_ProjectileManager::CreateTrackingProjectileFiltered, KeyValues::GetInt, KeyValues::GetFloat, Recursive_ConvertKeyValuesToTable (17 total)
// callers: CDOTA_ActionRunner::PerformAction_TrackingProjectile, CDOTA_Ability_Throw_Snowball::OnSpellStart, CDOTA_Ability_Throw_Coal::OnSpellStart, CDOTA_Ability_MudGolem_HurlBoulder::OnSpellStart, CDOTA_ProjectileManager::Script_CreateTrackingProjectile, CDOTA_BaseNPC::PerformAttack, CDOTA_Ability_Morphling_AdaptiveStrike::OnSpellStart, CDOTA_Modifier_DrowRanger_Marksmanship::OnAttackLanded, CDOTA_Modifier_Lich_Chain_Frost_Thinker::OnIntervalThink, CDOTA_Ability_PhantomLancer_SpiritLance::CastSpiritLance, CDOTA_Ability_Earthshaker_EchoSlam::OnSpellStart, CDOTA_Ability_Tidehunter_Gush::OnSpellStart (70 total)
// strings: "TrackingProjectileData", "entindex_target_const", "entindex_ability_const", "entindex_source_const", "dodgeable", "is_attack" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_ProjectileManager::CreateTrackingProjectile(
        CDOTA_ProjectileManager *const this,
        const sTrackingProjectileCreateInfo *const info)
{
  CDOTABaseGameMode *GameModeEntity; // rax
  CDOTABaseGameMode *v5; // r13
  bool bServerOnly; // al
  float flMaxImpactTime; // xmm0_4
  Color colorGemColor; // eax
  KeyValues *v9; // r12
  uint32 m_Index; // ecx
  int32 m_Data; // edx
  CEntityIdentity *v12; // rsi
  CEntityIdentity *v13; // rsi
  CDOTABaseAbility *pAbility; // rdi
  int32 v15; // edx
  uint32 v16; // ecx
  int32 v17; // edx
  CEntityIdentity *v18; // rsi
  CEntityIdentity *v19; // rsi
  float v20; // xmm1_4
  float v21; // xmm1_4
  IScriptVM *v22; // r15
  HSCRIPT m_hContext; // r9
  HSCRIPT m_hFunction; // rsi
  char v25; // r13
  int Int; // eax
  _BOOL4 bDodgeable; // edx
  int v28; // eax
  _BOOL4 bIsAttack; // edx
  float v30; // xmm1_4
  float v31; // xmm1_4
  __int64 (__fastcall *v32)(IScriptVM *, HSCRIPT, const char *, _QWORD, _QWORD); // r13
  const char *Name; // rax
  __int64 v34; // r13
  CEntityInstance *v35; // rax
  CEntityInstance *v36; // rax
  HSCRIPT hTable; // [rsp+10h] [rbp-C0h] BYREF
  __int16 v38; // [rsp+18h] [rbp-B8h]
  __int16 v39; // [rsp+1Ah] [rbp-B6h]
  __int64 v40; // [rsp+20h] [rbp-B0h] BYREF
  __int16 v41; // [rsp+28h] [rbp-A8h]
  __int16 v42; // [rsp+2Ah] [rbp-A6h]
  sTrackingProjectileCreateInfo filteredInfo; // [rsp+30h] [rbp-A0h] BYREF
  unsigned __int64 v44; // [rsp+98h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  if ( g_pGameRules != 0
    && (GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules), v5 = GameModeEntity, GameModeEntity != 0)
    && GameModeEntity->m_TrackingProjectileFilter.m_hFunction != 0
    && GameModeEntity->m_TrackingProjectileFilter.m_hContext != 0 )
  {
    filteredInfo.pszEffectName = info->pszEffectName;
    filteredInfo.pAbility = info->pAbility;
    filteredInfo.pAttackRecord = info->pAttackRecord;
    filteredInfo.iMoveSpeed = info->iMoveSpeed;
    filteredInfo.hSource.m_Index = info->hSource.m_Index;
    filteredInfo.hTarget.m_Index = info->hTarget.m_Index;
    filteredInfo.vSourceLoc = info->vSourceLoc;
    filteredInfo.iSourceAttachment = info->iSourceAttachment;
    filteredInfo.bProvidesVision = info->bProvidesVision;
    filteredInfo.iVisionTeamNumber = info->iVisionTeamNumber;
    filteredInfo.iVisionRadius = info->iVisionRadius;
    filteredInfo.bDrawsOnMinimap = info->bDrawsOnMinimap;
    filteredInfo.bDodgeable = info->bDodgeable;
    filteredInfo.bIsAttack = info->bIsAttack;
    filteredInfo.bVisibleToEnemies = info->bVisibleToEnemies;
    filteredInfo.bReplaceExisting = info->bReplaceExisting;
    bServerOnly = info->bServerOnly;
    filteredInfo.flExpireTime = info->flExpireTime;
    flMaxImpactTime = info->flMaxImpactTime;
    filteredInfo.bServerOnly = bServerOnly;
    colorGemColor = info->colorGemColor;
    filteredInfo.flMaxImpactTime = flMaxImpactTime;
    filteredInfo.colorGemColor = colorGemColor;
    filteredInfo.pKVExtraData = info->pKVExtraData;
    v9 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v9, "TrackingProjectileData");
    m_Index = info->hTarget.m_Index;
    m_Data = -1;
    if ( m_Index + 2 > 1 )
    {
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->hTarget.m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[info->hTarget.m_Index & 0x1FF];
        if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
        {
          v35 = CEntityHandle::operator CEntityInstance *(&info->hTarget);
          m_Data = CEntityInstance::GetEntityIndex(v35).m_Data;
        }
      }
    }
    KeyValues::SetInt(v9, "entindex_target_const", m_Data);
    pAbility = info->pAbility;
    v15 = -1;
    if ( pAbility != 0 )
      v15 = CEntityInstance::GetEntityIndex(pAbility).m_Data;
    KeyValues::SetInt(v9, "entindex_ability_const", v15);
    v16 = info->hSource.m_Index;
    v17 = -1;
    if ( v16 + 2 > 1 )
    {
      v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->hSource.m_Index) >> 9) & 0x3F];
      if ( v18 != 0 )
      {
        v19 = &v18[info->hSource.m_Index & 0x1FF];
        if ( v19 != 0 && v16 == v19->m_EHandle.m_Index )
        {
          v36 = CEntityHandle::operator CEntityInstance *(&info->hSource);
          v17 = CEntityInstance::GetEntityIndex(v36).m_Data;
        }
      }
    }
    KeyValues::SetInt(v9, "entindex_source_const", v17);
    KeyValues::SetInt(v9, "move_speed", info->iMoveSpeed);
    KeyValues::SetInt(v9, "dodgeable", info->bDodgeable);
    KeyValues::SetInt(v9, "is_attack", info->bIsAttack);
    KeyValues::SetFloat(v9, "expire_time", v20);
    KeyValues::SetFloat(v9, "max_impact_time", v21);
    if ( v5->m_TrackingProjectileFilter.m_hFunction != 0 && v5->m_TrackingProjectileFilter.m_hContext != 0 && v9 != 0 )
    {
      hTable = 0;
      v39 = 0;
      v38 = 0;
      v22 = g_pScriptVM;
      (*(*g_pScriptVM + 264LL))(g_pScriptVM, &hTable);
      if ( hTable != 0 )
        Recursive_ConvertKeyValuesToTable(v9, v22, hTable);
      v41 = 0;
      m_hContext = v5->m_TrackingProjectileFilter.m_hContext;
      v42 = 0;
      m_hFunction = v5->m_TrackingProjectileFilter.m_hFunction;
      v40 = 0;
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, m_hFunction, &hTable, 1, &v40, m_hContext, 1);
      v25 = 0;
      if ( v41 == 6 && v40 != 0 )
      {
        v32 = *(*g_pScriptVM + 304LL);
        Name = KeyValues::GetName(v9);
        v34 = v32(g_pScriptVM, hTable, Name, 0, 0);
        if ( v34 != 0 )
        {
          KeyValues::~KeyValues(v9);
          KeyValues::operator delete(v9);
          v9 = v34;
        }
        v25 = 1;
      }
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &hTable);
      if ( (v42 & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v40);
        v42 &= ~1u;
      }
      v40 = 0;
      v41 = 0;
      if ( (v39 & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, hTable);
      if ( v25 == 0 )
        goto LABEL_28;
    }
    Int = KeyValues::GetInt(v9, "move_speed", info->iMoveSpeed);
    bDodgeable = info->bDodgeable;
    filteredInfo.iMoveSpeed = Int;
    v28 = KeyValues::GetInt(v9, "dodgeable", bDodgeable);
    bIsAttack = info->bIsAttack;
    filteredInfo.bDodgeable = v28 != 0;
    filteredInfo.bIsAttack = KeyValues::GetInt(v9, "is_attack", bIsAttack) != 0;
    filteredInfo.flExpireTime = KeyValues::GetFloat(v9, "expire_time", v30);
    filteredInfo.flMaxImpactTime = KeyValues::GetFloat(v9, "max_impact_time", v31);
    CDOTA_ProjectileManager::CreateTrackingProjectileFiltered(this, &filteredInfo);
    if ( v9 != 0 )
    {
LABEL_28:
      KeyValues::~KeyValues(v9);
      KeyValues::operator delete(v9);
    }
  }
  else
  {
    CDOTA_ProjectileManager::CreateTrackingProjectileFiltered(this, info);
  }
}


// CDOTA_ProjectileManager::CreateTrackingProjectileFiltered  (line 85, @0x000000000268f8a0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddNPCKeyValuesForUnit, AddToTail, ApplyContextKeys, AsUint32, CBroadcastRecipientFilter, CDOTAUserMsg_TEProjectileLoc_t, CDOTAUserMsg_TEProjectile_t, CDOTA_TrackingProjectileInfo, CDotaNPCSpawner, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CNetMessagePB, CUserMessagePB, CUtlString, CanEntityBeSeenByTeam, Construct<CDOTA_TrackingProjectileInfo>, EHandleToCUserMsgEHandle<CBaseEntity>, Element, FindGameEvent<CDOTAUserMsg_TEProjectileLoc_t>, FindGameEvent<CDOTAUserMsg_TEProjectile_t>, FindOrCreateGameEvent<CDOTAUserMsg_TEProjectileLoc_t>, FindOrCreateGameEvent<CDOTAUserMsg_TEProjectile_t>, Get, GetBool, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetOwnerEntity, GetSerialNumber, GetTeamNumber, GetWearable, GrowMemory, IncrementModifierRefCount, IndexToIdentity, Init, IsPlayerTeam, IsValid, LookupEntity, NetworkStateChanged, OverrideAllocator, PostEvent<CDOTAUserMsg_TEProjectileLoc_t>, PostEvent<CDOTAUserMsg_TEProjectile_t>, QAngle, ResourceHandleToCUserMsgResourceHandle<InfoForResourceTypeIParticleSystemDefinition>, SendUserMessage<CDOTAUserMsg_TEProjectileLoc_t>, SendUserMessage<CDOTAUserMsg_TEProjectile_t>, Set, SetClassName, SetDayTimeVisionRange, SetNightTimeVisionRange, SetValue, SetValue<int>, String, ToDOTABaseNPC, ToNetworkableInt, VectorToCMsgVector, curtime, mutable_vsourceloc, mutable_vtargetloc, operator CBaseEntity*, operator CDOTA_BaseNPC*, operator CEconWearable*, operator CEntityInstance*, operator bool, operator->, operator=, operator=<int>, operator==, operator[], set_colorgemcolor, set_dodgeable, set_expiretime, set_has_colorgemcolor, set_has_expiretime, set_has_hsource, set_has_htarget, set_has_maximpacttime, set_has_movespeed, set_has_particlesystemhandle, set_has_sourceattachment, set_has_vsourceloc, set_has_vtargetloc, set_has_x, set_has_y, set_has_z, set_hsource, set_htarget, set_isattack, set_isevaded, set_maximpacttime, set_movespeed, set_particlesystemhandle, set_sourceattachment, set_x, set_y, set_z, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_TEProjectileLoc_t, ~CDOTAUserMsg_TEProjectile_t, ~CDotaNPCSpawner, ~CEntitySpawner, ~CNetMessagePB, ~CUserMessagePB
// calls: CConcreteEntityList::LookupEntity, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, KeyValues::MakeCopy, CDOTABaseAbility::RefCountsModifiers, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, GetProjectileAttachmentName, CBaseAnimating::GetAttachment, CBaseAnimating::GetModelPtr (51 total)
// callers: CDOTA_ProjectileManager::CreateTrackingProjectile
// strings: "npc_dota_base", "modifier_projectile_vision", "modifier_projectile_vision_on_minimap", "modifier_invisible", "WARNING : Trying to create Projectile From %s Missing Attachment %s on model %s!!\n", "SV:  %f tick(%d) curtime(%f) SV CreateProjectile @[%8.3f %8.3f %8.3f]\n"
// globals: CEntityHandle::gm_pEntityList, CEntityKeyValuesModifyScope::sm_pAllocatorOverride, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEProjectileLoc_t>(bool)::s_hEvent, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEProjectile_t>(bool)::s_hEvent
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_ProjectileManager::CreateTrackingProjectileFiltered(
        CDOTA_ProjectileManager *const this,
        const sTrackingProjectileCreateInfo *const info)
{
  int v4; // r14d
  CDOTA_AttackRecord *pAttackRecord; // rax
  int m_iFailType; // r8d
  int v7; // eax
  __int64 v8; // rsi
  CDOTA_TrackingProjectileInfo *v9; // rax
  CDOTA_TrackingProjectileInfo *v10; // rax
  const CConcreteEntityList *v11; // rdi
  const CBaseEntity *v12; // rax
  const Vector *AbsOrigin; // rax
  _DWORD *v14; // rdx
  CDOTABaseAbility *pAbility; // rax
  char *v16; // rcx
  CEntityIdentity *m_pEntity; // rdx
  int v18; // eax
  __int16 v19; // si
  KeyValues *Copy; // rax
  KeyValues *pKVExtraData; // rdi
  char *v22; // r12
  CDOTABaseAbility *v23; // rdi
  int v24; // r12d
  CTeam *GlobalTeam; // rax
  CTeam *v26; // rax
  CDOTA_AttackRecord *v27; // r12
  CConcreteEntityList *v28; // r14
  CTeam *v29; // rax
  CEntityInstance *v30; // rax
  const char *ProjectileAttachmentName; // r12
  CEntityInstance *v32; // rax
  const CBaseAnimating *v33; // rax
  CEntityInstance *v34; // rax
  __int64 v35; // r12
  unsigned __int16 *v36; // rdx
  int v37; // eax
  __int16 v38; // cx
  CEntityIdentity *v39; // rdx
  CEntityIdentity *v40; // rdx
  const CBaseAnimating *v41; // r15
  __int64 v42; // rax
  const char *v43; // rax
  const char *v44; // r12
  const CBaseAnimating *v45; // rax
  double v46; // xmm0_8
  CUtlScratchMemoryPool *v47; // rax
  CEntitySystem *v48; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v50; // rax
  char v51; // al
  CEntityKeyValues *j; // r12
  CDOTA_BaseNPC *v53; // r12
  const char *v54; // r14
  int iVisionRadius; // r14d
  CEntityIdentity *v56; // rax
  char *v57; // rcx
  int v58; // edx
  __int16 v59; // si
  char *v60; // rax
  int v61; // r12d
  CEntityIdentity *v62; // rdx
  CEntityIdentity *v63; // rdx
  int v64; // eax
  CBaseModelEntity *v65; // rax
  CTeam *v66; // rax
  CEntityInstance *v67; // r12
  IHandleEntity *HandleEntity; // rax
  CMsgVector *m_pPrevAllocator; // r12
  CEntityInstance *v70; // rax
  double v71; // xmm0_8
  int v72; // eax
  int v73; // xmm1_4
  CMsgVector *v74; // r12
  CEntityInstance *v75; // rax
  int v76; // xmm1_4
  int v77; // eax
  int v78; // xmm0_4
  int v79; // eax
  int iMoveSpeed; // eax
  int m_pKeyValues; // edx
  float flExpireTime; // xmm0_4
  bool bIsAttack; // al
  int v84; // eax
  IGameEventSystem *v85; // r12
  uint32 v86; // eax
  uint32 v87; // edx
  int v88; // eax
  int v89; // eax
  int v90; // edx
  float v91; // xmm0_4
  bool v92; // al
  __int64 v93; // r12
  IGameEventSystem *v94; // rbx
  void (__fastcall *v95)(IGameEventSystem *, _QWORD, _QWORD, KeyValues *, __int64, Vector *, __int64); // r13
  int m_Size; // r8d
  CConcreteEntityList *v97; // r12
  __int64 v98; // rdx
  int i; // eax
  CDOTABaseAbility *m_pInstance; // r9
  CDOTA_TrackingProjectileInfo *v101; // rsi
  uint32 m_Index; // ecx
  CEntityIdentity *v103; // rdi
  CEntityIdentity *v104; // rdi
  CTeam *v105; // rax
  CTeam *v106; // rax
  int v107; // r12d
  CEntityIdentity *v108; // rax
  CBaseModelEntity *v109; // rdi
  CEntityIdentity *v110; // rdx
  CEntityIdentity *v111; // rdx
  CBaseModelEntity *v112; // rdi
  CTeam *v113; // rax
  CTeam *v114; // rax
  CEntityInstance *v115; // rax
  double v116; // xmm0_8
  int v117; // xmm1_4
  _DWORD *v118; // rax
  vec_t *v119; // rax
  CMsgVector *v120; // r12
  int v121; // eax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CMsgVector *v124; // r12
  CEntityInstance *v125; // rax
  vec_t v126; // xmm1_4
  int v127; // eax
  vec_t v128; // xmm0_4
  int v129; // eax
  const char *v130; // rsi
  int v131; // eax
  int v132; // edx
  float v133; // xmm0_4
  bool v134; // al
  int v135; // eax
  __int64 v136; // r12
  IGameEventSystem *v137; // rbx
  void (__fastcall *v138)(IGameEventSystem *, _QWORD, _QWORD, CBroadcastRecipientFilter *, __int64, __int128 *, __int64); // r13
  CEntityInstance *v139; // rax
  const CBaseEntity *v140; // rax
  const char *m_pAsString; // r12
  CEntityInstance *v142; // rax
  const char *v143; // rsi
  CEntityIdentity *v144; // rax
  CEntityInstance *v145; // rax
  vec_t v146; // xmm1_4
  CEntityInstance *v147; // rax
  CEntityInstance *v148; // rax
  const CBaseAnimating *v149; // rax
  float *v150; // rax
  CGlobalVars *v151; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v153; // rax
  double m_flCurrentTime; // r12
  unsigned int tickcount; // ebx
  double v156; // xmm0_8
  CEntityInstance *v157; // rax
  CEntityInstance *v158; // rax
  CBaseAnimatingOverlay *v159; // rax
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax
  int v161; // r12d
  CEntityIdentity *v162; // rdx
  CEntityIdentity *v163; // rdx
  CBaseModelEntity *v164; // rdi
  CTeam *v165; // rax
  CTeam *v166; // rax
  CEntityInstance *v167; // rax
  CEntityIdentity *v168; // rax
  CBaseModelEntity *v169; // rdi
  int v170; // eax
  __int64 v171; // [rsp+10h] [rbp-410h]
  double v172; // [rsp+10h] [rbp-410h]
  const char *pszEffectName; // [rsp+18h] [rbp-408h]
  double pszEffectNamea; // [rsp+18h] [rbp-408h]
  bool bEvaded; // [rsp+20h] [rbp-400h]
  double bEvadeda; // [rsp+20h] [rbp-400h]
  EHANDLE *handle; // [rsp+30h] [rbp-3F0h]
  CEntityHandle *handlea; // [rsp+30h] [rbp-3F0h]
  __int64 v179; // [rsp+38h] [rbp-3E8h]
  EHANDLE hProjectileSource; // [rsp+50h] [rbp-3D0h] BYREF
  double v181; // [rsp+60h] [rbp-3C0h]
  int v182; // [rsp+68h] [rbp-3B8h]
  double v183; // [rsp+70h] [rbp-3B0h]
  int v184; // [rsp+78h] [rbp-3A8h]
  string_t iszModelName; // [rsp+80h] [rbp-3A0h] BYREF
  int v186; // [rsp+88h] [rbp-398h]
  Vector vStart; // [rsp+90h] [rbp-390h] BYREF
  int v188; // [rsp+A0h] [rbp-380h]
  uint32 v189; // [rsp+A8h] [rbp-378h]
  int v190; // [rsp+ACh] [rbp-374h]
  int v191; // [rsp+B0h] [rbp-370h]
  int iSourceAttachment; // [rsp+B4h] [rbp-36Ch]
  __int64 v193; // [rsp+B8h] [rbp-368h]
  bool bDodgeable; // [rsp+C0h] [rbp-360h]
  bool v195; // [rsp+C1h] [rbp-35Fh]
  bool v196; // [rsp+C2h] [rbp-35Eh]
  float v197; // [rsp+C4h] [rbp-35Ch]
  float flMaxImpactTime; // [rsp+C8h] [rbp-358h]
  Color colorGemColor; // [rsp+CCh] [rbp-354h]
  __int128 projectileLocMsg; // [rsp+D0h] [rbp-350h] OVERLAPPED BYREF
  CEntityKeyValuesModifyScope v201; // [rsp+E0h] [rbp-340h] BYREF
  CDOTA_BaseNPC::CEntityInstanceEntityClass *ClassByDesignName; // [rsp+F0h] [rbp-330h]
  CUtlString v203; // [rsp+F8h] [rbp-328h] BYREF
  int v204; // [rsp+100h] [rbp-320h]
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // [rsp+104h] [rbp-31Ch]
  CMsgVector *v206; // [rsp+108h] [rbp-318h]
  __int64 v207; // [rsp+110h] [rbp-310h]
  __int64 v208; // [rsp+118h] [rbp-308h]
  __int64 v209; // [rsp+120h] [rbp-300h]
  __int64 v210; // [rsp+128h] [rbp-2F8h]
  __int64 v211; // [rsp+130h] [rbp-2F0h]
  __int64 v212; // [rsp+138h] [rbp-2E8h]
  char v213; // [rsp+140h] [rbp-2E0h]
  CUtlScratchMemoryPool *v214; // [rsp+148h] [rbp-2D8h]
  CEntityKeyValues *pOther; // [rsp+150h] [rbp-2D0h]
  __int64 v216; // [rsp+160h] [rbp-2C0h]
  CBroadcastRecipientFilter locationProjectileFilter; // [rsp+170h] [rbp-2B0h] BYREF
  KeyValues kv; // [rsp+2B0h] [rbp-170h] BYREF
  unsigned __int64 v219; // [rsp+3E8h] [rbp-38h]

  v219 = __readfsqword(0x28u);
  if ( info->bReplaceExisting )
  {
    m_Size = this->m_TrackingProjectiles.m_Size;
    v4 = m_Size;
    if ( m_Size > 0 )
    {
      v97 = CEntityHandle::gm_pEntityList;
      v98 = 0;
      for ( i = 0; i < m_Size; ++i )
      {
        m_pInstance = 0;
        v101 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v98];
        m_Index = v101->m_hAbility.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v103 = v97->m_pIdentityChunks[(LOWORD(v101->m_hAbility.m_Index) >> 9) & 0x3F];
          if ( v103 != 0 )
          {
            v104 = &v103[v101->m_hAbility.m_Index & 0x1FF];
            if ( v104 != 0 && m_Index == v104->m_EHandle.m_Index )
              m_pInstance = v104->m_pInstance;
          }
        }
        if ( info->pAbility == m_pInstance )
        {
          v101->m_hAbility.m_Index = -1;
          m_Size = this->m_TrackingProjectiles.m_Size;
        }
        ++v98;
        v4 = m_Size;
      }
    }
  }
  else
  {
    v4 = this->m_TrackingProjectiles.m_Size;
  }
  pAttackRecord = info->pAttackRecord;
  if ( pAttackRecord != 0 )
  {
    m_iFailType = pAttackRecord->m_iFailType;
    v7 = v4;
    bEvaded = m_iFailType != 0;
    if ( v4 != this->m_TrackingProjectiles.m_Memory.m_nAllocationCount )
      goto LABEL_5;
  }
  else
  {
    bEvaded = 0;
    v7 = v4;
    if ( v4 != this->m_TrackingProjectiles.m_Memory.m_nAllocationCount )
      goto LABEL_5;
  }
  CUtlMemory<CDOTA_TrackingProjectileInfo,int>::Grow(&this->m_TrackingProjectiles.m_Memory, 1);
  v7 = this->m_TrackingProjectiles.m_Size;
LABEL_5:
  this->m_TrackingProjectiles.m_Size = v7 + 1;
  v8 = v4;
  v179 = v8 * 72;
  v9 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v8];
  if ( v9 != 0 )
  {
    v9->m_hTarget.m_Index = -1;
    v9->m_hAbility.m_Index = -1;
    v9->m_hVisionEntity.m_Index = -1;
    v9->m_hSourceEntity.m_Index = -1;
    v10 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v8];
  }
  else
  {
    v10 = 0;
  }
  v10->m_iMoveSpeed = info->iMoveSpeed;
  v11 = CEntityHandle::gm_pEntityList;
  this->m_TrackingProjectiles.m_Memory.m_pMemory[v8].m_hTarget.m_Index = info->hTarget.m_Index;
  handle = &info->hTarget;
  if ( CConcreteEntityList::LookupEntity(v11, &info->hTarget) != 0 )
  {
    v12 = CEntityHandle::operator CEntityInstance *(&info->hTarget);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
  }
  else
  {
    AbsOrigin = &vec3_origin;
  }
  v14 = (&this->m_TrackingProjectiles.m_Memory.m_pMemory->m_iMoveSpeed + v179);
  v14[5] = LODWORD(AbsOrigin->x);
  v14[6] = LODWORD(AbsOrigin->y);
  v14[7] = LODWORD(AbsOrigin->z);
  *(&this->m_TrackingProjectiles.m_Memory.m_pMemory->m_pAttackRecord + v179) = info->pAttackRecord;
  pAbility = info->pAbility;
  v16 = this->m_TrackingProjectiles.m_Memory.m_pMemory + v179;
  if ( pAbility != 0 && (m_pEntity = pAbility->m_pEntity) != 0 )
  {
    v18 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v19 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    *(v16 + 20) = v19 | *(v16 + 20) & 0x8000;
    *(v16 + 10) = (v18 << 15) | *(v16 + 10) & 0x7FFF;
  }
  else
  {
    *(v16 + 10) = -1;
  }
  Copy = 0;
  pKVExtraData = info->pKVExtraData;
  v22 = this->m_TrackingProjectiles.m_Memory.m_pMemory + v179;
  if ( pKVExtraData != 0 )
    Copy = KeyValues::MakeCopy(pKVExtraData);
  *(v22 + 8) = Copy;
  *(&this->m_TrackingProjectiles.m_Memory.m_pMemory->m_bDodgeable + v179) = info->bDodgeable;
  *(&this->m_TrackingProjectiles.m_Memory.m_pMemory->m_bIsAttack + v179) = info->bIsAttack;
  *(&this->m_TrackingProjectiles.m_Memory.m_pMemory->m_bIsEvaded + v179) = bEvaded;
  *(&this->m_TrackingProjectiles.m_Memory.m_pMemory->m_flExpireTime + v179) = info->flExpireTime;
  *(&this->m_TrackingProjectiles.m_Memory.m_pMemory->m_flMaxImpactTime + v179) = info->flMaxImpactTime;
  *(&this->m_TrackingProjectiles.m_Memory.m_pMemory->m_hSourceEntity.m_Index + v179) = info->hSource.m_Index;
  v23 = info->pAbility;
  if ( v23 != 0 && CDOTABaseAbility::RefCountsModifiers(v23) )
    ++info->pAbility->m_iModifierRefCount;
  if ( info->bProvidesVision || info->bDrawsOnMinimap )
  {
    v201.m_pKeyValues = 0;
    v201.m_pPrevAllocator = 0;
    CEntityKeyValuesModifyScope::BeginModify(&v201, 0);
    *&projectileLocMsg = off_40FC030;
    v47 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    v203.m_pString = 0;
    pOther = 0;
    v216 = 0;
    v48 = g_pEntitySystem;
    ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    v214 = v47;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v48->m_entitySpawnerData;
    ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v48);
    SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
    v207 = *&SpawnOriginOffset->m_flMatVal[0][0];
    v208 = *&SpawnOriginOffset->m_flMatVal[0][2];
    v209 = *&SpawnOriginOffset->m_flMatVal[1][0];
    v210 = *&SpawnOriginOffset->m_flMatVal[1][2];
    v211 = *&SpawnOriginOffset->m_flMatVal[2][0];
    v50 = *&SpawnOriginOffset->m_flMatVal[2][2];
    *(&projectileLocMsg + 1) = 0;
    v212 = v50;
    ClassByDesignName = g_pEntityCDOTA_BaseNPCClass;
    if ( g_pApplication != 0 )
      v51 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
    else
      v51 = 0;
    v213 = v51;
    v204 = 0;
    (*projectileLocMsg)(&projectileLocMsg);
    *&projectileLocMsg = off_40FC050;
    AppendNPCKeyValues(0, *(&projectileLocMsg + 1), 0);
    for ( j = pOther; j != 0; j = *&j[1].m_keyHashes.m_nCount )
      CEntityKeyValues::CopyFrom(*(&projectileLocMsg + 1), j, 0);
    CEntityKeyValues::SetValue(*(&projectileLocMsg + 1), -971301790, "npc_dota_base");
    ClassByDesignName = CEntitySystem::FindClassByDesignName(g_pEntitySystem, "npc_dota_base", &v203);
    CEntityKeyValues::SetValue<int>(*(&projectileLocMsg + 1), -175874245, &info->iVisionTeamNumber);
    CEntitySpawner<CDOTA_BaseNPC>::Spawn(&vStart, &projectileLocMsg);
    v53 = CEntityHandle::operator CEntityInstance *(&vStart);
    v54 = "modifier_projectile_vision_on_minimap";
    if ( !info->bDrawsOnMinimap )
      v54 = "modifier_projectile_vision";
    KeyValues::KeyValues(&kv, "modifier_projectile_vision");
    CDOTA_BaseNPC::AddNewModifier(v53, v53, 0, v54, &kv, 0);
    if ( !info->bVisibleToEnemies )
      CDOTA_BaseNPC::AddNewModifier(v53, v53, 0, "modifier_invisible", &kv, 0);
    iVisionRadius = info->iVisionRadius;
    if ( iVisionRadius != v53->m_iDayTimeVisionRange.m_Value )
    {
      (*(v53->_vptr_IHandleEntity + 22))(v53, 2396, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v53->m_iDayTimeVisionRange.m_Value = iVisionRadius;
      iVisionRadius = info->iVisionRadius;
    }
    if ( v53->m_iNightTimeVisionRange.m_Value != iVisionRadius )
    {
      (*(v53->_vptr_IHandleEntity + 22))(v53, 2400, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v53->m_iNightTimeVisionRange.m_Value = iVisionRadius;
    }
    v56 = v53->m_pEntity;
    v57 = this->m_TrackingProjectiles.m_Memory.m_pMemory + v179;
    if ( v56 != 0 )
    {
      v58 = (v56->m_EHandle.m_Index >> 15) - (v56->m_flags & 1);
      v59 = 0x7FFF;
      if ( v56->m_EHandle.m_Index != -1 )
        v59 = v56->m_EHandle.m_Index & 0x7FFF;
      *(v57 + 22) = v59 | *(v57 + 22) & 0x8000;
      *(v57 + 11) = (v58 << 15) | *(v57 + 11) & 0x7FFF;
    }
    else
    {
      *(v57 + 11) = -1;
    }
    KeyValues::~KeyValues(&kv);
    *&projectileLocMsg = off_40FC030;
    CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&projectileLocMsg);
  }
  CRecipientFilter::CRecipientFilter(&locationProjectileFilter);
  locationProjectileFilter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&locationProjectileFilter);
  CRecipientFilter::CRecipientFilter(&kv);
  kv.m_uValue = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&kv);
  if ( !info->bVisibleToEnemies )
  {
    v24 = 0;
    while ( ++v24 != 14 )
    {
      while ( ((v24 - 6) <= 7 || (v24 - 2) <= 1) && info->iVisionTeamNumber != v24 )
      {
        GlobalTeam = GetGlobalTeam(v24);
        CRecipientFilter::RemoveRecipientsByTeam(&locationProjectileFilter, GlobalTeam);
        v26 = GetGlobalTeam(v24);
        CRecipientFilter::RemoveRecipientsByTeam(&kv, v26);
        if ( ++v24 == 14 )
          goto LABEL_27;
      }
    }
  }
LABEL_27:
  v27 = info->pAttackRecord;
  hProjectileSource.m_Index = info->hSource.m_Index;
  if ( v27 != 0 )
  {
    v28 = CEntityHandle::gm_pEntityList;
    if ( CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &v27->m_hProjectileSource) != 0 )
      hProjectileSource.m_Index = v27->m_hProjectileSource.m_Index;
  }
  else
  {
    v28 = CEntityHandle::gm_pEntityList;
  }
  if ( CConcreteEntityList::LookupEntity(v28, handle) != 0
    && HIBYTE(CEntityHandle::operator CEntityInstance *(handle)[7].m_CScriptComponent) == 4 )
  {
    v107 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( ++v107 == 14 )
              goto LABEL_32;
            if ( (v107 - 6) <= 7 || (v107 - 2) <= 1 )
            {
              LODWORD(projectileLocMsg) = info->hTarget.m_Index;
              v108 = CConcreteEntityList::LookupEntity(v28, &projectileLocMsg);
              if ( v108 != 0 )
              {
                v109 = v108->m_pInstance;
                if ( v108->m_pInstance != 0 && v109->m_pCollision != 0 )
                  break;
              }
            }
          }
          if ( !CBaseModelEntity::CanBeSeenByTeam(v109, v107) )
            break;
LABEL_140:
          v28 = CEntityHandle::gm_pEntityList;
        }
        v28 = CEntityHandle::gm_pEntityList;
        if ( CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &hProjectileSource) != 0 )
          break;
LABEL_141:
        v113 = GetGlobalTeam(v107);
        CRecipientFilter::RemoveRecipientsByTeam(&kv, v113);
        v114 = GetGlobalTeam(v107);
        CRecipientFilter::RemoveRecipientsByTeam(&locationProjectileFilter, v114);
        v28 = CEntityHandle::gm_pEntityList;
      }
      LODWORD(projectileLocMsg) = hProjectileSource;
      if ( hProjectileSource.m_Index + 2 > 1 )
      {
        v110 = v28->m_pIdentityChunks[(projectileLocMsg >> 9) & 0x3F];
        if ( v110 != 0 )
        {
          v111 = &v110[projectileLocMsg & 0x1FF];
          if ( v111 != 0 && hProjectileSource.m_Index == v111->m_EHandle.m_Index )
          {
            v112 = v111->m_pInstance;
            if ( v111->m_pInstance != 0 && v112->m_pCollision != 0 )
            {
              if ( CBaseModelEntity::CanBeSeenByTeam(v112, v107) )
                goto LABEL_140;
              goto LABEL_141;
            }
          }
        }
      }
    }
  }
LABEL_32:
  if ( CConcreteEntityList::LookupEntity(v28, &hProjectileSource) != 0 )
  {
    v29 = GetGlobalTeam(1);
    CRecipientFilter::RemoveRecipientsByTeam(&locationProjectileFilter, v29);
    if ( info->iSourceAttachment == -1 )
    {
      v115 = CEntityHandle::operator CEntityInstance *(&hProjectileSource);
      v116 = (*(v115->_vptr_IHandleEntity + 62))(v115);
      v182 = v117;
      v181 = v116;
      v118 = (&this->m_TrackingProjectiles.m_Memory.m_pMemory->m_iMoveSpeed + v179);
      v118[1] = LODWORD(v116);
      LODWORD(v116) = HIDWORD(v181);
      v118[3] = v117;
      v118[2] = LODWORD(v116);
      if ( info->bServerOnly )
        goto LABEL_108;
LABEL_73:
      v61 = 0;
LABEL_74:
      if ( ++v61 != 14 )
      {
        while ( 1 )
        {
          LOBYTE(v28) = (v61 - 2) <= 1 || (v61 - 6) <= 7;
          if ( v28 == 0 )
            goto LABEL_74;
          if ( hProjectileSource.m_Index + 2 > 1
            && (v62 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hProjectileSource.m_Index) >> 9) & 0x3F]) != 0
            && (v63 = &v62[hProjectileSource.m_Index & 0x1FF]) != 0
            && hProjectileSource.m_Index == v63->m_EHandle.m_Index )
          {
            LODWORD(projectileLocMsg) = hProjectileSource;
            v168 = CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &projectileLocMsg);
            if ( v168 != 0 )
            {
              v169 = v168->m_pInstance;
              if ( v168->m_pInstance != 0 && v169->m_pCollision != 0 )
              {
                LOBYTE(v170) = CBaseModelEntity::CanBeSeenByTeam(v169, v61);
                LODWORD(v28) = v170;
              }
            }
          }
          else
          {
            LOBYTE(v64) = CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, v61, &info->vSourceLoc, 0.0);
            LODWORD(v28) = v64;
          }
          LODWORD(projectileLocMsg) = info->hTarget.m_Index;
          v65 = CEntityHandle::operator CEntityInstance *(&projectileLocMsg);
          if ( v65 == 0 || v65->m_pCollision == 0 )
            break;
          LODWORD(v28) = v28 ^ 1;
          if ( CBaseModelEntity::CanBeSeenByTeam(v65, v61) )
            goto LABEL_84;
          if ( v28 != 0 )
          {
            v105 = GetGlobalTeam(v61);
            CRecipientFilter::RemoveRecipientsByTeam(&kv, v105);
LABEL_121:
            v106 = GetGlobalTeam(v61);
            CRecipientFilter::RemoveRecipientsByTeam(&locationProjectileFilter, v106);
            goto LABEL_74;
          }
LABEL_85:
          v66 = GetGlobalTeam(v61);
          CRecipientFilter::RemoveRecipientsByTeam(&kv, v66);
          if ( ++v61 == 14 )
            goto LABEL_86;
        }
        LODWORD(v28) = v28 ^ 1;
LABEL_84:
        if ( v28 == 0 )
          goto LABEL_121;
        goto LABEL_85;
      }
LABEL_86:
      v67 = CEntityHandle::operator CEntityInstance *(&hProjectileSource);
      if ( HIBYTE(v67[7].m_CScriptComponent) == 4
        && CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, handle) != 0 )
      {
        v161 = 0;
        while ( ++v161 != 14 )
        {
          while ( (v161 - 6) <= 7 || (v161 - 2) <= 1 )
          {
            if ( v161 == HIBYTE(CEntityHandle::operator CEntityInstance *(handle)[7].m_CScriptComponent) )
              break;
            LODWORD(projectileLocMsg) = info->hTarget.m_Index;
            if ( (projectileLocMsg + 2) <= 1 )
              break;
            v162 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(projectileLocMsg >> 9) & 0x3F];
            if ( v162 == 0 )
              break;
            v163 = &v162[projectileLocMsg & 0x1FF];
            if ( v163 == 0 )
              break;
            if ( projectileLocMsg != v163->m_EHandle.m_Index )
              break;
            v164 = v163->m_pInstance;
            if ( v163->m_pInstance == 0 || v164->m_pCollision == 0 || CBaseModelEntity::CanBeSeenByTeam(v164, v161) )
              break;
            v165 = GetGlobalTeam(v161);
            CRecipientFilter::RemoveRecipientsByTeam(&kv, v165);
            v166 = GetGlobalTeam(v161);
            CRecipientFilter::RemoveRecipientsByTeam(&locationProjectileFilter, v166);
            if ( ++v161 == 14 )
              goto LABEL_190;
          }
        }
LABEL_190:
        v67 = 0;
        v167 = CEntityHandle::operator CEntityInstance *(&hProjectileSource);
        if ( v167 == 0 )
          goto LABEL_92;
        v67 = v167;
      }
      if ( BYTE3(v67[7]._vptr_IHandleEntity) != 0 )
      {
        if ( SLOBYTE(v67[43].m_iszPrivateVScripts.u.m_Id) < 0 )
        {
          HandleEntity = CEntityHandle::GetHandleEntity(&v67[11].m_pEntity + 1);
          if ( HandleEntity != 0 )
          {
            v67 = 0;
            if ( BYTE3(HandleEntity[42]._vptr_IHandleEntity) != 0 )
              v67 = HandleEntity;
          }
        }
      }
      else
      {
        v67 = 0;
      }
LABEL_92:
      pszEffectName = CDOTA_ParticleManager::GetParticleReplacement(info->pszEffectName, v67);
      CDOTAUserMsg_TE_ProjectileLoc::CDOTAUserMsg_TE_ProjectileLoc(&projectileLocMsg);
      m_pPrevAllocator = v201.m_pPrevAllocator;
      LODWORD(v201.m_pKeyValues) |= 1u;
      *&projectileLocMsg = off_416D250;
      if ( v201.m_pPrevAllocator == 0 )
      {
        m_pPrevAllocator = operator new(0x28u);
        CMsgVector::CMsgVector(m_pPrevAllocator);
        v201.m_pPrevAllocator = m_pPrevAllocator;
      }
      v70 = CEntityHandle::operator CEntityInstance *(&hProjectileSource);
      v71 = (*(v70->_vptr_IHandleEntity + 62))(v70);
      v72 = *(m_pPrevAllocator + 4);
      *(m_pPrevAllocator + 8) = v73;
      v183 = v71;
      v184 = v73;
      *(m_pPrevAllocator + 6) = LODWORD(v71);
      LODWORD(v71) = HIDWORD(v183);
      *(m_pPrevAllocator + 4) = v72 | 7;
      *(m_pPrevAllocator + 7) = LODWORD(v71);
      v74 = v206;
      LODWORD(v201.m_pKeyValues) |= 0x100u;
      if ( v206 == 0 )
      {
        v74 = operator new(0x28u);
        CMsgVector::CMsgVector(v74);
        v206 = v74;
      }
      v75 = CEntityHandle::operator CEntityInstance *(handle);
      iszModelName.u.m_Id = (*(v75->_vptr_IHandleEntity + 62))(v75);
      v186 = v76;
      v77 = *(v74 + 4);
      *(v74 + 3) = iszModelName;
      v78 = v186;
      *(v74 + 4) = v77 | 7;
      v79 = 0xFFFFFF;
      *(v74 + 8) = v78;
      LODWORD(vStart.x) = info->hTarget.m_Index;
      if ( LODWORD(vStart.x) != -1 )
        v79 = LOWORD(vStart.x) & 0x7FFF | (LODWORD(vStart.x) >> 1) & 0xFFC000;
      LODWORD(ClassByDesignName) = v79;
      iMoveSpeed = info->iMoveSpeed;
      LODWORD(v201.m_pKeyValues) |= 6u;
      HIDWORD(ClassByDesignName) = iMoveSpeed;
      GetParticleSystemIndex(&vStart, pszEffectName);
      v203.m_pString = (*(*g_pResourceSystem + 320LL))(g_pResourceSystem, *&vStart.x);
      m_pKeyValues = v201.m_pKeyValues;
      flExpireTime = info->flExpireTime;
      LOBYTE(v204) = info->bDodgeable;
      bIsAttack = info->bIsAttack;
      ActiveSpawnGroupHandle = LODWORD(flExpireTime);
      BYTE1(v204) = bIsAttack;
      BYTE2(v204) = bEvaded;
      v84 = v201.m_pKeyValues;
      LOBYTE(v84) = LOBYTE(v201.m_pKeyValues) | 0xF8;
      LODWORD(v201.m_pKeyValues) = v84;
      if ( *&info->colorGemColor != 0 )
      {
        LODWORD(v207) = info->colorGemColor;
        LODWORD(v201.m_pKeyValues) = m_pKeyValues | 0x2F8;
      }
      v85 = g_pGameEventSystem;
      handlea = *(*g_pGameEventSystem + 128LL);
      v171 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEProjectileLoc_t>(bool)::s_hEvent;
      (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages);
      (handlea)(v85, 0, 0, &locationProjectileFilter, v171, &projectileLocMsg, 72);
      CDOTAUserMsg_TE_Projectile::CDOTAUserMsg_TE_Projectile(&vStart);
      *&vStart.x = off_416D010;
      v86 = 0xFFFFFF;
      LODWORD(iszModelName.u.m_Id) = hProjectileSource;
      if ( hProjectileSource.m_Index != -1 )
        v86 = iszModelName.u.m_Id & 0x7FFF | (hProjectileSource.m_Index >> 1) & 0xFFC000;
      v87 = info->hTarget.m_Index;
      v189 = v86;
      v88 = 0xFFFFFF;
      LODWORD(iszModelName.u.m_Id) = v87;
      if ( v87 != -1 )
        v88 = iszModelName.u.m_Id & 0x7FFF | (v87 >> 1) & 0xFFC000;
      v190 = v88;
      v89 = info->iMoveSpeed;
      v188 |= 0xFu;
      v191 = v89;
      iSourceAttachment = info->iSourceAttachment;
      GetParticleSystemIndex(&iszModelName.u.m_Id, pszEffectName);
      v193 = (*(*g_pResourceSystem + 320LL))(g_pResourceSystem, iszModelName.u.m_Id);
      v90 = v188;
      v91 = info->flExpireTime;
      bDodgeable = info->bDodgeable;
      v92 = info->bIsAttack;
      v197 = v91;
      flMaxImpactTime = info->flMaxImpactTime;
      v195 = v92;
      v196 = bEvaded;
      v188 |= 0x3F0u;
      if ( *&info->colorGemColor != 0 )
      {
        colorGemColor = info->colorGemColor;
        v188 = v90 | 0x7F0;
      }
      if ( dota_projectile_debug.m_pParent->m_Value.m_nValue != 0 )
      {
        v147 = CEntityHandle::operator CEntityInstance *(&hProjectileSource);
        if ( (*(v147->_vptr_IHandleEntity + 43))(v147) != 0 )
        {
          v148 = CEntityHandle::operator CEntityInstance *(&hProjectileSource);
          v149 = (*(v148->_vptr_IHandleEntity + 43))(v148);
          if ( CBaseAnimating::IsSequenceDebugging(v149) )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
            {
              v150 = (&this->m_TrackingProjectiles.m_Memory.m_pMemory->m_iMoveSpeed + v179);
              v151 = gpGlobals;
              bEvadeda = v150[3];
              pszEffectNamea = v150[2];
              v172 = v150[1];
              if ( gpGlobals != 0 )
              {
                if ( gpGlobals->m_bEnableAssertions
                  || gpGlobals->m_bInSimulation
                  || (m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc) == 0 )
                {
                  v153 = gpGlobals;
                }
                else
                {
                  m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                  v153 = gpGlobals;
                }
                m_flCurrentTime = v151->m_flCurrentTime;
              }
              else
              {
                v153 = 0;
                m_flCurrentTime = 0.0;
              }
              tickcount = v153->tickcount;
              v156 = Plat_FloatTime();
              LoggingSystem_Log(
                LOG_SERVER,
                1,
                "SV:  %f tick(%d) curtime(%f) SV CreateProjectile @[%8.3f %8.3f %8.3f]\n",
                tickcount,
                v156,
                m_flCurrentTime,
                v172,
                pszEffectNamea,
                bEvadeda);
            }
            iszModelName.u.m_Id = 3266576384LL;
            v186 = 0;
            NDebugOverlay::Circle(
              (&this->m_TrackingProjectiles.m_Memory.m_pMemory->m_vLocation + v179),
              &iszModelName,
              8.0,
              0xFFu,
              0xFFu,
              0,
              75,
              3.0,
              1);
            v157 = CEntityHandle::operator CEntityInstance *(&hProjectileSource);
            if ( (*(v157->_vptr_IHandleEntity + 45))(v157) != 0 )
            {
              v158 = CEntityHandle::operator CEntityInstance *(&hProjectileSource);
              v159 = (*(v158->_vptr_IHandleEntity + 45))(v158);
              BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(v159);
              CBaseAnimatingController::DescribeSequences(BaseAnimatingOverlayController, "projectile");
            }
          }
        }
      }
      v93 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEProjectile_t>(bool)::s_hEvent;
      v94 = g_pGameEventSystem;
      v95 = *(*g_pGameEventSystem + 128LL);
      (*(*g_pNetworkMessages + 96LL))(
        g_pNetworkMessages,
        IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEProjectile_t>(bool)::s_hEvent);
      v95(v94, 0, 0, &kv, v93, &vStart, 64);
      *&vStart.x = &off_416CE90;
      CDOTAUserMsg_TE_Projectile::~CDOTAUserMsg_TE_Projectile(&vStart);
      *&projectileLocMsg = &off_416D0D0;
      CDOTAUserMsg_TE_ProjectileLoc::~CDOTAUserMsg_TE_ProjectileLoc(&projectileLocMsg);
      goto LABEL_108;
    }
    v30 = CEntityHandle::operator CEntityInstance *(&hProjectileSource);
    if ( (*(v30->_vptr_IHandleEntity + 43))(v30) != 0 )
    {
      ProjectileAttachmentName = GetProjectileAttachmentName(info->iSourceAttachment);
      v32 = CEntityHandle::operator CEntityInstance *(&hProjectileSource);
      v33 = (*(v32->_vptr_IHandleEntity + 43))(v32);
      if ( CBaseAnimating::GetAttachment(v33, ProjectileAttachmentName, &vStart) )
      {
        v34 = CEntityHandle::operator CEntityInstance *(&hProjectileSource);
        v28 = v34;
        if ( v34 == 0 || BYTE3(v34[7]._vptr_IHandleEntity) == 0 || SLODWORD(v34[38].m_CScriptComponent) <= 0 )
          goto LABEL_70;
        v35 = 0;
        while ( 1 )
        {
          v36 = (*&v28->m_PVSBits.m_Ints[189] + 4 * v35);
          v37 = *v36;
          if ( (*v36 + 2) > 1 )
          {
            v38 = *v36;
            v39 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v36 >> 9) & 0x3F];
            if ( v39 != 0 )
            {
              v40 = &v39[v38 & 0x1FF];
              if ( v40 != 0 && v37 == v40->m_EHandle.m_Index )
              {
                v41 = v40->m_pInstance;
                if ( v40->m_pInstance != 0 && CBaseAnimating::GetModelPtr(v40->m_pInstance) != 0 )
                {
                  v42 = (*(v41->_vptr_IHandleEntity + 265))(v41);
                  if ( (*((*(*(v42 + 104) + 96LL))(v42 + 104) + 274) & 1) != 0 )
                  {
                    v43 = GetProjectileAttachmentName(info->iSourceAttachment);
                    if ( CBaseAnimating::LookupAttachment(v41, v43) != 0 )
                      break;
                  }
                }
              }
            }
          }
          if ( v28->m_PVSBits.m_Ints[187] <= ++v35 )
            goto LABEL_70;
        }
        v44 = GetProjectileAttachmentName(info->iSourceAttachment);
        v45 = (*(v41->_vptr_IHandleEntity + 43))(v41);
        if ( CBaseAnimating::GetAttachment(v45, v44, &projectileLocMsg) )
        {
          *&vStart.y = *(&projectileLocMsg + 4);
          LODWORD(v46) = projectileLocMsg;
        }
        else
        {
LABEL_70:
          *&v46 = vStart.x;
        }
      }
      else
      {
        v139 = CEntityHandle::operator CEntityInstance *(&hProjectileSource);
        v140 = (*(v139->_vptr_IHandleEntity + 43))(v139);
        CBaseEntity::GetModelName(&iszModelName, v140);
        m_pAsString = "";
        if ( iszModelName.u.m_Id != 0 )
          m_pAsString = iszModelName.u.m_pAsString;
        v28 = GetProjectileAttachmentName(info->iSourceAttachment);
        v142 = CEntityHandle::operator CEntityInstance *(&hProjectileSource);
        v143 = "";
        v144 = v142->m_pEntity;
        if ( v144->m_designerName.u.m_Id != 0 )
          v143 = v144->m_designerName.u.m_pAsString;
        Warning(
          "WARNING : Trying to create Projectile From %s Missing Attachment %s on model %s!!\n",
          v143,
          &v28->m_Lock.gap0,
          m_pAsString);
        v145 = CEntityHandle::operator CEntityInstance *(&hProjectileSource);
        v46 = (*(v145->_vptr_IHandleEntity + 62))(v145);
        *&projectileLocMsg = v46;
        *(&projectileLocMsg + 2) = v146;
        vStart.z = v146;
        vStart.y = *(&v46 + 1);
      }
      v60 = this->m_TrackingProjectiles.m_Memory.m_pMemory + v179;
      *(v60 + 1) = LODWORD(v46);
      *(v60 + 2) = LODWORD(vStart.y);
      *(v60 + 3) = LODWORD(vStart.z);
    }
    if ( !info->bServerOnly )
      goto LABEL_73;
  }
  else
  {
    v119 = (&this->m_TrackingProjectiles.m_Memory.m_pMemory->m_iMoveSpeed + v179);
    v119[1] = info->vSourceLoc.x;
    v119[2] = info->vSourceLoc.y;
    v119[3] = info->vSourceLoc.z;
    if ( !info->bServerOnly )
    {
      CDOTAUserMsg_TE_ProjectileLoc::CDOTAUserMsg_TE_ProjectileLoc(&projectileLocMsg);
      v120 = v201.m_pPrevAllocator;
      LODWORD(v201.m_pKeyValues) |= 1u;
      *&projectileLocMsg = off_416D250;
      if ( v201.m_pPrevAllocator == 0 )
      {
        v120 = operator new(0x28u);
        CMsgVector::CMsgVector(v120);
        v201.m_pPrevAllocator = v120;
      }
      v121 = *(v120 + 4);
      *(v120 + 6) = LODWORD(info->vSourceLoc.x);
      *(v120 + 4) = v121 | 1;
      y = info->vSourceLoc.y;
      *(v120 + 4) = v121 | 3;
      *(v120 + 7) = y;
      z = info->vSourceLoc.z;
      *(v120 + 4) = v121 | 7;
      *(v120 + 8) = z;
      v124 = v206;
      LODWORD(v201.m_pKeyValues) |= 0x100u;
      if ( v206 == 0 )
      {
        v124 = operator new(0x28u);
        CMsgVector::CMsgVector(v124);
        v206 = v124;
      }
      v125 = CEntityHandle::operator CEntityInstance *(handle);
      *&vStart.x = (*(v125->_vptr_IHandleEntity + 62))(v125);
      vStart.z = v126;
      v127 = *(v124 + 4);
      *(v124 + 3) = *&vStart.x;
      v128 = vStart.z;
      *(v124 + 4) = v127 | 7;
      v129 = 0xFFFFFF;
      *(v124 + 8) = v128;
      LODWORD(vStart.x) = info->hTarget.m_Index;
      if ( LODWORD(vStart.x) != -1 )
        v129 = LOWORD(vStart.x) & 0x7FFF | (LODWORD(vStart.x) >> 1) & 0xFFC000;
      LODWORD(ClassByDesignName) = v129;
      v130 = info->pszEffectName;
      v131 = info->iMoveSpeed;
      LODWORD(v201.m_pKeyValues) |= 6u;
      HIDWORD(ClassByDesignName) = v131;
      GetParticleSystemIndex(&vStart, v130);
      v203.m_pString = (*(*g_pResourceSystem + 320LL))(g_pResourceSystem, *&vStart.x);
      v132 = v201.m_pKeyValues;
      v133 = info->flExpireTime;
      LOBYTE(v204) = info->bDodgeable;
      v134 = info->bIsAttack;
      ActiveSpawnGroupHandle = LODWORD(v133);
      BYTE1(v204) = v134;
      BYTE2(v204) = bEvaded;
      v135 = v201.m_pKeyValues;
      LOBYTE(v135) = LOBYTE(v201.m_pKeyValues) | 0xF8;
      LODWORD(v201.m_pKeyValues) = v135;
      if ( *&info->colorGemColor != 0 )
      {
        LODWORD(v207) = info->colorGemColor;
        LODWORD(v201.m_pKeyValues) = v132 | 0x2F8;
      }
      v136 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEProjectileLoc_t>(bool)::s_hEvent;
      v137 = g_pGameEventSystem;
      v138 = *(*g_pGameEventSystem + 128LL);
      (*(*g_pNetworkMessages + 96LL))(
        g_pNetworkMessages,
        IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEProjectileLoc_t>(bool)::s_hEvent);
      v138(v137, 0, 0, &locationProjectileFilter, v136, &projectileLocMsg, 72);
      *&projectileLocMsg = &off_416D0D0;
      CDOTAUserMsg_TE_ProjectileLoc::~CDOTAUserMsg_TE_ProjectileLoc(&projectileLocMsg);
    }
  }
LABEL_108:
  kv.m_uValue = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&kv);
  locationProjectileFilter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&locationProjectileFilter);
}


// CDOTA_ProjectileManager::ProjectileDodge  (line 353, @0x0000000002668b00, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_DodgeTrackingProjectiles_t, CEntityHandle, CHandle, CModifierParams, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_DodgeTrackingProjectiles_t>, FindOrCreateGameEvent<CDOTAUserMsg_DodgeTrackingProjectiles_t>, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, PostEvent<CDOTAUserMsg_DodgeTrackingProjectiles_t>, SendUserMessage<CDOTAUserMsg_DodgeTrackingProjectiles_t>, Set, SetAttacker, SetTarget, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator->, operator=, operator==<CBaseEntity>, operator[], set_attacks_only, set_entindex, set_has_attacks_only, set_has_entindex, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_DodgeTrackingProjectiles_t, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTAUserMsg_DodgeTrackingProjectiles::CDOTAUserMsg_DodgeTrackingProjectiles, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CDOTAUserMsg_DodgeTrackingProjectiles::~CDOTAUserMsg_DodgeTrackingProjectiles, CRecipientFilter::~CRecipientFilter, FireModifierEvent, CDOTA_CombatLog::AddAttackEvadeEvent, _Unwind_Resume, __stack_chk_fail
// callers: CDOTA_ActionRunner::PerformAction_Blink, CDOTA_Ability_Lesser_NightCrawler_Pounce::OnSpellStart, CDOTA_ProjectileManager::Script_ProjectileDodge, CDOTA_Ability_Holdout_CullingBlade::OnSpellStart, CDOTA_Ability_Morphling_MorphReplicate::OnSpellStart, CDOTA_Ability_Puck_EtherealJaunt::OnSpellStart, CDOTA_Ability_Puck_PhaseShift::OnSpellStart, CDOTA_Ability_Morphling_Waveform::OnSpellStart, CDOTA_Ability_AntiMage_Blink::OnSpellStart, CDOTA_Ability_PhantomLancer_Doppelwalk::OnSpellStart, CDOTA_Ability_StormSpirit_BallLightning::OnSpellStart, CDOTA_Ability_Riki_TricksOfTheTrade::OnSpellStart (31 total)
// globals: CEntityHandle::gm_pEntityList, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_DodgeTrackingProjectiles_t>(bool)::s_hEvent
void __fastcall CDOTA_ProjectileManager::ProjectileDodge(
        CDOTA_ProjectileManager *const this,
        const CEntityHandle *hTarget,
        bool bAttacksOnly)
{
  int v4; // r14d
  __int64 v5; // r13
  CEntityInstance *v7; // r10
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // rdi
  CDOTA_TrackingProjectileInfo *v11; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *v15; // rax
  __int64 v16; // r14
  IGameEventSystem *v17; // r12
  void (__fastcall *v18)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, CModifierParams *, __int64); // r15
  CEntityInstance *v19; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v21; // eax
  __int16 v22; // si
  CDOTA_AttackRecord *m_pAttackRecord; // rax
  CDOTA_TrackingProjectileInfo *v24; // rax
  CDOTA_AttackRecord *v25; // rdx
  CDOTA_TrackingProjectileInfo *v26; // rbx
  __int16 m_iRecord; // dx
  CEntityInstance *v28; // rax
  CEntityIdentity *v29; // rdx
  int v30; // eax
  __int16 v31; // si
  CEntityInstance *v32; // rax
  CModifierParams params; // [rsp+20h] [rbp-200h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+B0h] [rbp-170h] BYREF
  unsigned __int64 i; // [rsp+1E8h] [rbp-38h]

  v4 = 0;
  v5 = 0;
  for ( i = __readfsqword(0x28u); this->m_TrackingProjectiles.m_Size > v4; ++v5 )
  {
    m_pInstance = 0;
    v11 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v5];
    m_Index = v11->m_hTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_hTarget.m_Index) >> 9) & 0x3F];
      if ( v13 != 0 )
      {
        v14 = &v13[v11->m_hTarget.m_Index & 0x1FF];
        if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
          m_pInstance = v14->m_pInstance;
      }
    }
    v7 = 0;
    if ( hTarget->m_Index + 2 > 1 )
    {
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hTarget->m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[hTarget->m_Index & 0x1FF];
        if ( v9 != 0 && hTarget->m_Index == v9->m_EHandle.m_Index )
          v7 = v9->m_pInstance;
      }
    }
    if ( m_pInstance == v7 && v11->m_bDodgeable && (!bAttacksOnly || v11->m_bIsAttack) )
    {
      params.ability.m_Index = -1;
      params.fDamage = 0.0;
      params.fOriginalDamage = 0.0;
      params.nActivity = -1;
      params.bTooltip = 0;
      params.nTooltipParam = 0;
      params.bIgnoreInvis = 0;
      params.bNoCooldown = 0;
      params.bReincarnate = 0;
      params.bDoNotConsume = 0;
      params.fDistance = 0.0;
      params.inflictor.m_Index = -1;
      params.nDamageflags = 0;
      params.nDamageCategory = 0;
      memset(&params.pOrb, 0, 24);
      params.bCraniumBasherTested = 0;
      params.bHeartRegenApplied = 0;
      params.bDiffusalApplied = 0;
      params.bChainLightningConsidered = 0;
      params.bSuppressDamage = 0;
      params.bRangedAttack = 0;
      params.nPlayerids_stick = 0;
      params.hattacker.m_Index = -1;
      params.htarget.m_Index = -1;
      params.hunit.m_Index = -1;
      v19 = CEntityHandle::operator CEntityInstance *(&v11->m_hTarget);
      if ( v19 != 0 )
      {
        m_pEntity = v19->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v21 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v22 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(params.htarget.m_Index) = v22 | params.htarget.m_Index & 0x8000;
          params.htarget.m_Index = (v21 << 15) | params.htarget.m_Index & 0x7FFF;
        }
      }
      params.bRangedAttack = v11->m_bIsAttack;
      m_pAttackRecord = v11->m_pAttackRecord;
      if ( m_pAttackRecord != 0 )
        params.fDamage = m_pAttackRecord->m_flDamagePhysical;
      FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_PROJECTILE_DODGE, &params);
      v24 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v5];
      v25 = v24->m_pAttackRecord;
      v26 = v24;
      if ( v25 != 0 )
      {
        m_iRecord = v25->m_iRecord;
        params.iFailType = 3;
        params.iRecord = m_iRecord;
        v28 = CEntityHandle::operator CEntityInstance *(&v24->m_pAttackRecord->m_hSource);
        if ( v28 != 0 && (v29 = v28->m_pEntity) != 0 )
        {
          v30 = (v29->m_EHandle.m_Index >> 15) - (v29->m_flags & 1);
          v31 = 0x7FFF;
          if ( v29->m_EHandle.m_Index != -1 )
            v31 = v29->m_EHandle.m_Index & 0x7FFF;
          LOWORD(params.hattacker.m_Index) = v31 | params.hattacker.m_Index & 0x8000;
          params.hattacker.m_Index = (v30 << 15) | params.hattacker.m_Index & 0x7FFF;
        }
        else
        {
          params.hattacker.m_Index = -1;
        }
        FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_ATTACK_FAIL, &params);
        v26 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v5];
      }
      v32 = CEntityHandle::operator CEntityInstance *(&v26->m_hTarget);
      if ( v32 != 0
        && BYTE3(v32[7]._vptr_IHandleEntity) != 0
        && (v32[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
        && LOBYTE(v32[71].m_pEntity) == 0 )
      {
        CDOTA_CombatLog::AddAttackEvadeEvent(&g_DOTACombatLog, v32, !v26->m_bIsAttack);
        v26 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v5];
      }
      v26->m_hTarget.m_Index = -1;
    }
    ++v4;
  }
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  CDOTAUserMsg_DodgeTrackingProjectiles::CDOTAUserMsg_DodgeTrackingProjectiles(&params);
  *&params.ability.m_Index = off_416BBD0;
  v15 = CEntityHandle::operator CEntityInstance *(hTarget);
  *&params.bIgnoreInvis = CEntityInstance::GetEntityIndex(v15);
  v16 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_DodgeTrackingProjectiles_t>(bool)::s_hEvent;
  LOBYTE(params.fDistance) = bAttacksOnly;
  *&params.bTooltip |= 3u;
  v17 = g_pGameEventSystem;
  v18 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_DodgeTrackingProjectiles_t>(bool)::s_hEvent);
  v18(v17, 0, 0, &filter, v16, &params, 32);
  *&params.ability.m_Index = &off_416BA50;
  CDOTAUserMsg_DodgeTrackingProjectiles::~CDOTAUserMsg_DodgeTrackingProjectiles(&params);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_ProjectileManager::RemoveTrackingProjectileFromAbility  (line 400, @0x00000000026739b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==, operator[]
// calls: KeyValues::deleteThis, CUtlVectorBase<CDOTA_TrackingProjectileInfo, CUtlMemory<CDOTA_TrackingProjectileInfo, int> >::Remove
// callers: CDOTA_Ability_MudGolem_HurlBoulder::UpdateOnRemove, CDOTA_Ability_Brewmaster_HurlBoulder::UpdateOnRemove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_ProjectileManager::RemoveTrackingProjectileFromAbility(
        CDOTA_ProjectileManager *const this,
        CDOTABaseAbility *pAbility)
{
  int v3; // ebx
  CUtlVector<CDOTA_TrackingProjectileInfo,CUtlMemory<CDOTA_TrackingProjectileInfo,int> > *p_m_TrackingProjectiles; // r13
  __int64 v6; // r12
  CDOTABaseAbility *m_pInstance; // r8
  CDOTA_TrackingProjectileInfo *v8; // rdx
  uint32 m_Index; // eax
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  KeyValues *m_pExtraData; // rdi

  v3 = this->m_TrackingProjectiles.m_Size - 1;
  if ( v3 >= 0 )
  {
    p_m_TrackingProjectiles = &this->m_TrackingProjectiles;
    v6 = v3;
    do
    {
      m_pInstance = 0;
      v8 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v6];
      m_Index = v8->m_hAbility.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_hAbility.m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[v8->m_hAbility.m_Index & 0x1FF];
          if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
            m_pInstance = v11->m_pInstance;
        }
      }
      if ( pAbility == m_pInstance )
      {
        m_pExtraData = v8->m_pExtraData;
        if ( m_pExtraData != 0 )
        {
          KeyValues::deleteThis(m_pExtraData);
          this->m_TrackingProjectiles.m_Memory.m_pMemory[v6].m_pExtraData = 0;
        }
        CUtlVectorBase<CDOTA_TrackingProjectileInfo,CUtlMemory<CDOTA_TrackingProjectileInfo,int>>::Remove(
          p_m_TrackingProjectiles,
          v3);
      }
      --v3;
      --v6;
    }
    while ( v3 != -1 );
  }
}


// CDOTA_ProjectileManager::CreateLinearProjectile  (line 418, @0x0000000002687690, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddNPCKeyValuesForUnit, AddToTail, ApplyContextKeys, CDOTAUserMsg_CreateLinearProjectile_t, CDOTA_LinearProjectileInfo, CDotaNPCSpawner, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_LinearProjectileInfo*>, Element, FastSqrt, FindGameEvent<CDOTAUserMsg_CreateLinearProjectile_t>, FindOrCreateGameEvent<CDOTAUserMsg_CreateLinearProjectile_t>, Get, GetEHandle, GetEntityClass, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, IncrementModifierRefCount, Init, IsACoach, Length2D, Max<float>, NetworkStateChanged, OverrideAllocator, PostEvent<CDOTAUserMsg_CreateLinearProjectile_t>, SendUserMessage<CDOTAUserMsg_CreateLinearProjectile_t>, Set, SetClassName, SetDayTimeVisionRange, SetNightTimeVisionRange, SetValue, SetValue<int>, ToDOTAPlayer, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, entindex, mutable_acceleration, mutable_origin, mutable_velocity, operator CDOTA_BaseNPC*, operator->, operator=, operator=<int>, operator[], set_entindex, set_fow_radius, set_handle, set_has_acceleration, set_has_entindex, set_has_handle, set_has_max_speed, set_has_origin, set_has_particle_index, set_has_sticky_fow_reveal, set_has_velocity, set_has_x, set_has_y, set_has_z, set_max_speed, set_particle_index, set_sticky_fow_reveal, set_x, set_y, set_z, ~CDOTAUserMsg_CreateLinearProjectile_t, ~CDotaNPCSpawner, ~CEntitySpawner, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB
// calls: operator new, KeyValues::MakeCopy, CDOTABaseAbility::RefCountsModifiers, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, AppendNPCKeyValues, CEntityKeyValues::CopyFrom, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CEntityKeyValues::SetValue<int>, CEntitySpawner<CDOTA_BaseNPC>::Spawn (34 total)
// callers: CDOTA_ActionRunner::PerformAction_LinearProjectile, CDOTA_Ability_Creature_Fire_Breath::OnChannelThink, CDOTA_Ability_AncientGolem_Rockslide::OnSpellStart, CDOTA_Ability_SatyrHellcaller_Shockwave::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Orange_DragonSlave::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Purple_VenomousGale::OnSpellStart, CDOTA_ProjectileManager::Script_CreateLinearProjectile, CDOTA_Ability_DrowRanger_WaveOfSilence::OnSpellStart, CDOTA_Ability_AncientApparition_IceBlast::DestroyTracker, CDOTA_Ability_Holdout_Omnislash::OnSpellStart, CDOTA_Ability_Lina_DragonSlave::OnSpellStart, CDOTA_Ability_Morphling_Waveform::OnSpellStart (66 total)
// strings: "npc_dota_base", "modifier_projectile_vision", "modifier_projectile_vision_on_minimap", "modifier_invisible", "ERROR: CreateLinearProjectile() called with non-zero vertical acceleration! Projectile ac, "ERROR: CreateLinearProjectile() called with non-zero vertical velocity! Projectile veloci
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CreateLinearProjectile_t>(bool)::s_hEvent
int __fastcall CDOTA_ProjectileManager::CreateLinearProjectile(
        CDOTA_ProjectileManager *const this,
        const sLinearProjectileCreateInfo *const info)
{
  _DWORD *v4; // rax
  int m_Size; // r12d
  int v6; // edx
  __int64 v7; // rdx
  bool v8; // zf
  CDOTA_LinearProjectileInfo **v9; // rdx
  vec_t **v10; // rax
  vec_t *v11; // rax
  CDOTA_LinearProjectileInfo *v12; // rax
  CDOTA_LinearProjectileInfo *v13; // rax
  CDOTA_LinearProjectileInfo *v14; // rax
  CDOTABaseAbility *pAbility; // rax
  CDOTA_LinearProjectileInfo *v16; // rcx
  CEntityIdentity *m_pEntity; // rdx
  int v18; // eax
  __int16 v19; // si
  KeyValues *pKVExtraData; // rdi
  CDOTA_LinearProjectileInfo *v21; // r12
  KeyValues *Copy; // rax
  CDOTABaseAbility *v23; // rdi
  CUtlScratchMemoryPool *v24; // rax
  CEntitySystem *v25; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v27; // rax
  char v28; // al
  CUtlScratchMemoryPool *i; // r12
  CDOTA_BaseNPC *v30; // r12
  const char *v31; // rcx
  int iVisionRadius; // r14d
  CDOTA_LinearProjectileInfo *v33; // rcx
  CEntityIdentity *v34; // rax
  int v35; // edx
  __int16 v36; // si
  int j; // r12d
  CBasePlayer *v38; // rax
  CDOTAPlayer *v39; // r14
  int m_Value; // eax
  int iVisionTeamNumber; // eax
  unsigned __int8 v43; // dl
  CMsgVector *m_pKeyValues; // r14
  vec_t v45; // xmm3_4
  CMsgVector *v46; // r14
  vec_t v47; // xmm5_4
  CMsgVector *v48; // r14
  vec_t z; // xmm7_4
  CMsgVector2D *m_pPrevAllocator; // r14
  CMsgVector2D *v51; // r14
  CMsgVector2D *v52; // r14
  CMsgVector2D *v53; // r14
  bool bStickyFoWReveal; // dl
  float v55; // xmm0_4
  CEntityInstance *v56; // rax
  CEntityIndex v57; // eax
  CDOTA_LinearProjectileInfo **m_pMemory; // rax
  int v59; // edx
  IGameEventSystem *v60; // r14
  __int64 v61; // [rsp+10h] [rbp-278h]
  float x; // [rsp+28h] [rbp-260h]
  float y; // [rsp+2Ch] [rbp-25Ch]
  vec_t v64; // [rsp+30h] [rbp-258h]
  vec_t v65; // [rsp+34h] [rbp-254h]
  __int64 v66; // [rsp+38h] [rbp-250h]
  __int64 v67; // [rsp+40h] [rbp-248h]
  vec_t v68; // [rsp+48h] [rbp-240h]
  vec_t v69; // [rsp+48h] [rbp-240h]
  vec_t v70; // [rsp+48h] [rbp-240h]
  void (__fastcall *v71)(IGameEventSystem *, _QWORD, _QWORD, CEntitySpawnBatch **, __int64, __int64 (__fastcall ***)(), __int64); // [rsp+48h] [rbp-240h]
  _DWORD *v72; // [rsp+58h] [rbp-230h]
  CDOTA_LinearProjectileInfo *pNewProjectile; // [rsp+60h] [rbp-228h] BYREF
  __int64 (__fastcall **v74)(); // [rsp+70h] [rbp-218h] BYREF
  CDotaNPCSpawner<CDOTA_BaseNPC> msg; // [rsp+78h] [rbp-210h] BYREF
  CSingleUserRecipientFilter filter; // [rsp+118h] [rbp-170h]

  *&filter.m_bUsingPredictionRules = __readfsqword(0x28u);
  if ( info->vVelocity.z != 0.0 )
    Warning(
      "ERROR: CreateLinearProjectile() called with non-zero vertical velocity! Projectile velocity must be two-dimensional.\n");
  x = info->vVelocity.x;
  y = info->vVelocity.y;
  if ( info->vAcceleration.z != 0.0 )
    Warning(
      "ERROR: CreateLinearProjectile() called with non-zero vertical acceleration! Projectile acceleration must be two-dimensional.\n");
  v64 = info->vAcceleration.x;
  v65 = info->vAcceleration.y;
  v4 = operator new(0x90u);
  v4[24] = -1;
  v4[25] = -1;
  v4[26] = 0;
  *(v4 + 14) = 0;
  v4[30] = 0;
  v4[31] = 0;
  v4[32] = -1;
  m_Size = this->m_LinearProjectiles.m_Size;
  v6 = m_Size;
  if ( m_Size == this->m_LinearProjectiles.m_Memory.m_nAllocationCount )
  {
    v72 = v4;
    CUtlMemory<CDOTA_LinearProjectileInfo *,int>::Grow(&this->m_LinearProjectiles.m_Memory, 1);
    v6 = this->m_LinearProjectiles.m_Size;
    v4 = v72;
  }
  v61 = m_Size;
  this->m_LinearProjectiles.m_Size = v6 + 1;
  v7 = m_Size;
  v8 = &this->m_LinearProjectiles.m_Memory.m_pMemory[v7] == 0;
  v9 = &this->m_LinearProjectiles.m_Memory.m_pMemory[v7];
  v66 = m_Size;
  if ( v8 )
  {
    v10 = 0;
  }
  else
  {
    *v9 = v4;
    v10 = &this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size];
  }
  v11 = *v10;
  *v11 = info->vSpawnOrigin.x;
  v11[1] = info->vSpawnOrigin.y;
  v11[2] = info->vSpawnOrigin.z;
  v12 = this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size];
  v12->m_vLocation.x = info->vSpawnOrigin.x;
  v12->m_vLocation.y = info->vSpawnOrigin.y;
  v12->m_vLocation.z = info->vSpawnOrigin.z;
  v13 = this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size];
  v13->m_vVelocity.x = x;
  *&v13->m_vVelocity.y = LODWORD(y);
  v14 = this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size];
  v14->m_vAcceleration.x = v64;
  v14->m_vAcceleration.y = v65;
  v14->m_vAcceleration.z = 0.0;
  this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size]->m_fRadius = info->fStartRadius;
  this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size]->m_fRadiusDelta = (info->fEndRadius - info->fStartRadius)
                                                                       / (info->fDistance / fsqrt((x * x) + (y * y)));
  this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size]->m_fDistance = info->fDistance;
  this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size]->m_hSource.m_Index = info->hSource.m_Index;
  this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size]->m_iUnitTargetTeam = info->iUnitTargetTeam;
  this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size]->m_iUnitTargetType = info->iUnitTargetType;
  this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size]->m_iUnitTargetFlags = info->iUnitTargetFlags;
  pAbility = info->pAbility;
  v16 = this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size];
  if ( pAbility != 0 && (m_pEntity = pAbility->m_pEntity) != 0 )
  {
    v18 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v19 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v16->m_hAbility.m_Index) = v19 | v16->m_hAbility.m_Index & 0x8000;
    v16->m_hAbility.m_Index = (v18 << 15) | v16->m_hAbility.m_Index & 0x7FFF;
  }
  else
  {
    v16->m_hAbility.m_Index = -1;
  }
  this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size]->m_iHandle = this->m_iLinearProjectileRunningIndex;
  this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size]->m_bMarkedForDeletion = 0;
  this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size]->m_bFrontalCone = info->bHasFrontalCone;
  this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size]->m_bCheckStartPosition = info->bCheckStartPosition;
  this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size]->m_bVisibleToEnemies = info->bVisibleToEnemies;
  this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size]->m_iVisionTeamNumber = info->iVisionTeamNumber;
  pKVExtraData = info->pKVExtraData;
  v21 = this->m_LinearProjectiles.m_Memory.m_pMemory[m_Size];
  Copy = 0;
  if ( pKVExtraData != 0 )
    Copy = KeyValues::MakeCopy(pKVExtraData);
  v21->m_pExtraData = Copy;
  this->m_LinearProjectiles.m_Memory.m_pMemory[v61]->m_bSentToClients = 0;
  this->m_LinearProjectiles.m_Memory.m_pMemory[v61]->m_bIgnoreSource = info->bIgnoreSource;
  this->m_LinearProjectiles.m_Memory.m_pMemory[v61]->m_fExpireTime = info->fExpireTime;
  this->m_LinearProjectiles.m_Memory.m_pMemory[v61]->m_fMaxSpeed = info->fMaxSpeed;
  v23 = info->pAbility;
  if ( v23 != 0 && CDOTABaseAbility::RefCountsModifiers(v23) )
    ++info->pAbility->m_iModifierRefCount;
  if ( info->bProvidesVision || info->bDrawsOnMinimap )
  {
    msg.m_pEntityKeyValues = 0;
    msg.m_modifyScope.m_pKeyValues = 0;
    CEntityKeyValuesModifyScope::BeginModify(&msg.m_pEntityKeyValues, 0);
    v74 = off_40FC030;
    v24 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    msg.m_pEntityClass = 0;
    msg.m_pPrevAllocator = 0;
    msg.m_pPersisterKeys = 0;
    v25 = g_pEntitySystem;
    ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    *&msg.m_bValidateKeys = v24;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v25->m_entitySpawnerData;
    HIDWORD(msg.m_scriptClassName.m_pString) = CEntitySystem::GetActiveSpawnGroupHandle(v25);
    SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
    *(&msg.m_hSpawnGroupHandle + 1) = *&SpawnOriginOffset->m_flMatVal[0][0];
    *&msg.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][2];
    *&msg.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][2];
    v27 = *&SpawnOriginOffset->m_flMatVal[2][2];
    msg._vptr_CEntitySpawnerBase = 0;
    *&msg.m_mSpawnGroupToWorld.m_flMatVal[2][0] = v27;
    msg.m_modifyScope.m_pPrevAllocator = g_pEntityCDOTA_BaseNPCClass;
    if ( g_pApplication != 0 )
      v28 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
    else
      v28 = 0;
    LOBYTE(msg.m_mSpawnGroupToWorld.m_flMatVal[2][2]) = v28;
    LODWORD(msg.m_scriptClassName.m_pString) = 0;
    (*v74)(&v74);
    v74 = off_40FC050;
    AppendNPCKeyValues(0, msg._vptr_CEntitySpawnerBase, 0);
    for ( i = msg.m_pPrevAllocator; i != 0; i = i[7].m_pFirstBlock )
      CEntityKeyValues::CopyFrom(msg._vptr_CEntitySpawnerBase, i, 0);
    CEntityKeyValues::SetValue(msg._vptr_CEntitySpawnerBase, -971301790, "npc_dota_base");
    msg.m_modifyScope.m_pPrevAllocator = CEntitySystem::FindClassByDesignName(
                                           g_pEntitySystem,
                                           "npc_dota_base",
                                           &msg.m_pEntityClass);
    CEntityKeyValues::SetValue<int>(msg._vptr_CEntitySpawnerBase, -175874245, &info->iVisionTeamNumber);
    CEntitySpawner<CDOTA_BaseNPC>::Spawn(&pNewProjectile, &v74);
    v30 = CEntityHandle::operator CEntityInstance *(&pNewProjectile);
    KeyValues::KeyValues(&(&msg.m_pSpawnBatch)[1], "modifier_projectile_vision");
    v31 = "modifier_projectile_vision_on_minimap";
    if ( !info->bDrawsOnMinimap )
      v31 = "modifier_projectile_vision";
    CDOTA_BaseNPC::AddNewModifier(v30, v30, 0, v31, &(&msg.m_pSpawnBatch)[1], 0);
    if ( !info->bVisibleToEnemies )
      CDOTA_BaseNPC::AddNewModifier(v30, v30, 0, "modifier_invisible", &(&msg.m_pSpawnBatch)[1], 0);
    iVisionRadius = info->iVisionRadius;
    if ( iVisionRadius != v30->m_iDayTimeVisionRange.m_Value )
    {
      (*(v30->_vptr_IHandleEntity + 22))(v30, 2396, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v30->m_iDayTimeVisionRange.m_Value = iVisionRadius;
      iVisionRadius = info->iVisionRadius;
    }
    if ( iVisionRadius != v30->m_iNightTimeVisionRange.m_Value )
    {
      (*(v30->_vptr_IHandleEntity + 22))(v30, 2400, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v30->m_iNightTimeVisionRange.m_Value = iVisionRadius;
    }
    v33 = this->m_LinearProjectiles.m_Memory.m_pMemory[v61];
    v34 = v30->m_pEntity;
    if ( v34 != 0 )
    {
      v35 = (v34->m_EHandle.m_Index >> 15) - (v34->m_flags & 1);
      v36 = 0x7FFF;
      if ( v34->m_EHandle.m_Index != -1 )
        v36 = v34->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v33->m_hVisionEntity.m_Index) = v36 | v33->m_hVisionEntity.m_Index & 0x8000;
      v33->m_hVisionEntity.m_Index = (v35 << 15) | v33->m_hVisionEntity.m_Index & 0x7FFF;
    }
    else
    {
      v33->m_hVisionEntity.m_Index = -1;
    }
    KeyValues::~KeyValues(&(&msg.m_pSpawnBatch)[1]);
    v74 = off_40FC030;
    CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&v74);
  }
  ++this->m_iLinearProjectileRunningIndex;
  if ( info->pszEffectName != 0 && gpGlobals->maxClients > 0 )
  {
    for ( j = 1; gpGlobals->maxClients >= j; ++j )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v38 = UTIL_PlayerByIndex(j);
          v39 = v38;
          if ( v38 != 0 && (*(v38->_vptr_IHandleEntity + 140))(v38) != 0 )
          {
            if ( info->bVisibleToEnemies )
              goto LABEL_51;
            m_Value = v39->m_iTeamNum.m_Value;
            if ( m_Value == 1 )
              break;
            if ( info->iVisionTeamNumber == m_Value )
              goto LABEL_51;
          }
LABEL_46:
          if ( gpGlobals->maxClients < ++j )
            return this->m_LinearProjectiles.m_Memory.m_pMemory[v61]->m_iHandle;
        }
        if ( CDOTAPlayer::IsACoach(v39) )
          break;
        iVisionTeamNumber = info->iVisionTeamNumber;
LABEL_49:
        v43 = v39->m_iTeamNum.m_Value;
        if ( iVisionTeamNumber != v43 && v43 != 1 )
          goto LABEL_46;
LABEL_51:
        this->m_LinearProjectiles.m_Memory.m_pMemory[v66]->m_bSentToClients = 1;
        CRecipientFilter::CRecipientFilter(&(&msg.m_pSpawnBatch)[1]);
        (&msg.m_pSpawnBatch)[1] = &off_3FCB0D0;
        CRecipientFilter::AddRecipient(&(&msg.m_pSpawnBatch)[1], v39);
        CDOTAUserMsg_CreateLinearProjectile::CDOTAUserMsg_CreateLinearProjectile(&v74);
        m_pKeyValues = msg.m_modifyScope.m_pKeyValues;
        v45 = info->vSpawnOrigin.x;
        v74 = off_416B750;
        LODWORD(msg.m_pEntityKeyValues) |= 1u;
        v68 = v45;
        if ( msg.m_modifyScope.m_pKeyValues == 0 )
        {
          m_pKeyValues = operator new(0x28u);
          CMsgVector::CMsgVector(m_pKeyValues);
          msg.m_modifyScope.m_pKeyValues = m_pKeyValues;
        }
        *(m_pKeyValues + 4) |= 1u;
        *(m_pKeyValues + 6) = v68;
        v46 = msg.m_modifyScope.m_pKeyValues;
        v47 = info->vSpawnOrigin.y;
        LODWORD(msg.m_pEntityKeyValues) |= 1u;
        v69 = v47;
        if ( msg.m_modifyScope.m_pKeyValues == 0 )
        {
          v46 = operator new(0x28u);
          CMsgVector::CMsgVector(v46);
          msg.m_modifyScope.m_pKeyValues = v46;
        }
        *(v46 + 4) |= 2u;
        *(v46 + 7) = v69;
        v48 = msg.m_modifyScope.m_pKeyValues;
        z = info->vSpawnOrigin.z;
        LODWORD(msg.m_pEntityKeyValues) |= 1u;
        v70 = z;
        if ( msg.m_modifyScope.m_pKeyValues == 0 )
        {
          v48 = operator new(0x28u);
          CMsgVector::CMsgVector(v48);
          msg.m_modifyScope.m_pKeyValues = v48;
        }
        *(v48 + 4) |= 4u;
        *(v48 + 8) = v70;
        m_pPrevAllocator = msg.m_modifyScope.m_pPrevAllocator;
        LODWORD(msg.m_pEntityKeyValues) |= 2u;
        if ( msg.m_modifyScope.m_pPrevAllocator == 0 )
        {
          m_pPrevAllocator = operator new(0x20u);
          CMsgVector2D::CMsgVector2D(m_pPrevAllocator);
          msg.m_modifyScope.m_pPrevAllocator = m_pPrevAllocator;
        }
        *(m_pPrevAllocator + 4) |= 1u;
        *(m_pPrevAllocator + 6) = x;
        v51 = msg.m_modifyScope.m_pPrevAllocator;
        LODWORD(msg.m_pEntityKeyValues) |= 2u;
        if ( msg.m_modifyScope.m_pPrevAllocator == 0 )
        {
          v51 = operator new(0x20u);
          CMsgVector2D::CMsgVector2D(v51);
          msg.m_modifyScope.m_pPrevAllocator = v51;
        }
        *(v51 + 4) |= 2u;
        *(v51 + 7) = y;
        v52 = *&msg.m_nMode;
        LODWORD(msg.m_pEntityKeyValues) |= 0x20u;
        if ( *&msg.m_nMode == 0 )
        {
          v52 = operator new(0x20u);
          CMsgVector2D::CMsgVector2D(v52);
          *&msg.m_nMode = v52;
        }
        *(v52 + 4) |= 1u;
        *(v52 + 6) = v64;
        v53 = *&msg.m_nMode;
        LODWORD(msg.m_pEntityKeyValues) |= 0x20u;
        if ( *&msg.m_nMode == 0 )
        {
          v53 = operator new(0x20u);
          CMsgVector2D::CMsgVector2D(v53);
          *&msg.m_nMode = v53;
        }
        *(v53 + 4) |= 2u;
        *(v53 + 7) = v65;
        bStickyFoWReveal = info->bStickyFoWReveal;
        *(&msg.m_hSpawnGroupHandle + 1) = LODWORD(info->fMaxSpeed);
        v8 = info->hSource.m_Index == -1;
        v55 = fmaxf(info->fStartRadius, info->fEndRadius);
        LODWORD(msg.m_pEntityKeyValues) |= 0x1C0u;
        LOBYTE(msg.m_mSpawnGroupToWorld.m_flMatVal[0][0]) = bStickyFoWReveal;
        *(&msg.m_hSpawnGroupHandle + 2) = v55;
        if ( !v8 )
        {
          v56 = CEntityHandle::operator CEntityInstance *(&info->hSource);
          v57.m_Data = CEntityInstance::GetEntityIndex(v56).m_Data;
          LODWORD(msg.m_pEntityKeyValues) |= 4u;
          LODWORD(msg.m_scriptClassName.m_pString) = v57;
        }
        GetParticleSystemIndex(&pNewProjectile, info->pszEffectName);
        msg.m_pEntityClass = (*(*g_pResourceSystem + 320LL))(g_pResourceSystem, pNewProjectile);
        m_pMemory = this->m_LinearProjectiles.m_Memory.m_pMemory;
        v59 = LODWORD(msg.m_pEntityKeyValues) | 0x18;
        LODWORD(msg.m_pEntityKeyValues) |= 8u;
        LODWORD(m_pMemory) = m_pMemory[v66]->m_iHandle;
        LODWORD(msg.m_pEntityKeyValues) = v59;
        HIDWORD(msg.m_scriptClassName.m_pString) = m_pMemory;
        v60 = g_pGameEventSystem;
        v71 = *(*g_pGameEventSystem + 128LL);
        v67 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CreateLinearProjectile_t>(bool)::s_hEvent;
        (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages);
        v71(v60, 0, 0, &(&msg.m_pSpawnBatch)[1], v67, &v74, 80);
        ++j;
        v74 = &off_416B5D0;
        CDOTAUserMsg_CreateLinearProjectile::~CDOTAUserMsg_CreateLinearProjectile(&v74);
        (&msg.m_pSpawnBatch)[1] = &off_3FCB0D0;
        CRecipientFilter::~CRecipientFilter(&(&msg.m_pSpawnBatch)[1]);
        if ( gpGlobals->maxClients < j )
          return this->m_LinearProjectiles.m_Memory.m_pMemory[v61]->m_iHandle;
      }
      iVisionTeamNumber = CDOTAPlayer::GetCoachedTeamNum(v39);
      if ( iVisionTeamNumber == info->iVisionTeamNumber )
        goto LABEL_49;
    }
  }
  return this->m_LinearProjectiles.m_Memory.m_pMemory[v61]->m_iHandle;
}


// CDOTA_ProjectileManager::DestroyLinearProjectile  (line 555, @0x00000000026690e0, libserver.so)
// calls: CDOTA_ProjectileManager::GetLinearProjectileByHandle, Warning
// callers: CDOTA_Ability_Morphling_Waveform::OnHorizontalMotionInterrupted, CDOTA_Ability_Holdout_Multishot::OnProjectileHit_ExtraData, CDOTA_Ability_AncientApparition_IceBlast::DestroyTracker, CDOTA_Ability_Puck_IllusoryOrb::DestroyOrb, CDOTA_Ability_StormSpirit_BallLightning::OnHorizontalMotionInterrupted, CDOTA_Ability_StormSpirit_BallLightning::OnProjectileThink, CDOTA_Ability_FacelessVoid_TimeWalk::OnHorizontalMotionInterrupted, CDOTA_Ability_Magnataur_Skewer::OnHorizontalMotionInterrupted, CDOTA_Ability_Holdout_FriendlySkewer::OnHorizontalMotionInterrupted, CDOTA_Modifier_Magnataur_Skewer_Movement::OnDestroy, CDOTA_Ability_Magnataur_Skewer::OnProjectileThink, CDOTA_Ability_Holdout_FriendlySkewer::OnProjectileThink (16 total)
// strings: "Attempt to destroy unknown projectile ID! %d\n"
void __fastcall CDOTA_ProjectileManager::DestroyLinearProjectile(CDOTA_ProjectileManager *const this, int iHandle)
{
  CDOTA_LinearProjectileInfo *LinearProjectileByHandle; // rax

  LinearProjectileByHandle = CDOTA_ProjectileManager::GetLinearProjectileByHandle(this, iHandle);
  if ( LinearProjectileByHandle != 0 )
    LinearProjectileByHandle->m_bMarkedForDeletion = 1;
  else
    Warning("Attempt to destroy unknown projectile ID! %d\n", iHandle);
}


// CDOTA_ProjectileManager::FinishTrackingProjectile  (line 569, @0x0000000002673aa0, libserver.so)  // inlines: CEntityHandle, CHandle, DecrementModifierRefCount, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator->, operator[]
// calls: KeyValues::deleteThis, CUtlVectorBase<CDOTA_TrackingProjectileInfo, CUtlMemory<CDOTA_TrackingProjectileInfo, int> >::Remove, CDOTA_AttackRecord::OnProjectileHit, CDOTABaseAbility::RefCountsModifiers, CEntityHandle::operator CEntityInstance*, CDOTA_CombatLog::AddAttackEvadeEvent, CDOTA_ModifierManager::RemoveAllModifiers, UTIL_Remove
// callers: CDOTA_ProjectileManager::FrameUpdatePostEntityThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_ProjectileManager::FinishTrackingProjectile(CDOTA_ProjectileManager *const this, int index)
{
  __int64 v3; // r12
  CDOTA_TrackingProjectileInfo *m_pMemory; // rcx
  CConcreteEntityList *v6; // rdx
  CDOTA_TrackingProjectileInfo *v7; // rax
  uint32 m_Index; // esi
  CEntityIdentity *v9; // rdi
  __int64 v10; // r8
  bool v11; // zf
  CEntityIdentity *v12; // r8
  CConcreteEntityList *v13; // rdi
  uint32 v14; // esi
  unsigned __int64 v15; // rdi
  CEntityIdentity *v16; // r8
  CEntityIdentity *v17; // r9
  CEntityIdentity *v18; // r8
  uint32 v19; // edx
  CEntityIdentity *v20; // rcx
  CEntityIdentity *v21; // rcx
  KeyValues *v22; // rdi
  uint32 v23; // edx
  CConcreteEntityList *v24; // rsi
  unsigned __int64 v25; // r9
  CEntityIdentity *v26; // r8
  CEntityIdentity *v27; // rdi
  uint32 v28; // edx
  unsigned __int16 v29; // cx
  CEntityIdentity *v30; // rax
  CEntityIdentity *v31; // rax
  CDOTA_AttackRecord *m_pAttackRecord; // rdi
  CEntityInstance *m_pInstance; // rdi
  void (__fastcall *v34)(CEntityInstance *, _DWORD *, Vector *); // rcx
  CEntityInstance *v35; // rax
  CEntityInstance *v36; // rsi
  int (**vptr_IHandleEntity)(...); // rdx
  CEntityInstance *v38; // rdi
  KeyValues *m_pExtraData; // rcx
  void (__fastcall *v40)(CEntityInstance *, _DWORD *, Vector *, KeyValues *); // r8
  CEntityInstance *v41; // rdi
  CDOTA_TrackingProjectileInfo *v42; // rax
  unsigned __int16 v43; // cx
  CEntityIdentity *v44; // rax
  CEntityInstance *v45; // rdi
  CEntityIdentity *v46; // r8
  _DWORD v47[12]; // [rsp+0h] [rbp-30h] BYREF

  v3 = index;
  m_pMemory = this->m_TrackingProjectiles.m_Memory.m_pMemory;
  v6 = CEntityHandle::gm_pEntityList;
  v7 = &m_pMemory[v3];
  m_Index = m_pMemory[v3].m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_27;
  v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_hTarget.m_Index) >> 9) & 0x3F];
  if ( v9 == 0 )
    goto LABEL_27;
  v10 = v7->m_hTarget.m_Index & 0x1FF;
  v11 = &v9[v10] == 0;
  v12 = &v9[v10];
  v13 = CEntityHandle::gm_pEntityList;
  if ( !v11 && m_Index == v12->m_EHandle.m_Index )
  {
    m_pAttackRecord = v7->m_pAttackRecord;
    if ( m_pAttackRecord != 0 )
    {
      CDOTA_AttackRecord::OnProjectileHit(m_pAttackRecord);
      v6 = CEntityHandle::gm_pEntityList;
      m_pMemory = this->m_TrackingProjectiles.m_Memory.m_pMemory;
      v13 = CEntityHandle::gm_pEntityList;
      v7 = &m_pMemory[v3];
      goto LABEL_5;
    }
LABEL_27:
    v13 = CEntityHandle::gm_pEntityList;
  }
LABEL_5:
  v14 = v7->m_hAbility.m_Index;
  if ( v14 + 2 > 1 )
  {
    v15 = v7->m_hAbility.m_Index & 0x7FFF;
    v16 = v6->m_pIdentityChunks[(v15 >> 9)];
    if ( v16 == 0 )
      goto LABEL_11;
    v17 = &v16[v7->m_hAbility.m_Index & 0x1FF];
    if ( v17 != 0 && v14 == v17->m_EHandle.m_Index )
    {
      m_pInstance = v17->m_pInstance;
      v34 = *(v17->m_pInstance->_vptr_IHandleEntity + 289);
      v47[0] = v7->m_hTarget.m_Index;
      v34(m_pInstance, v47, &v7->m_vLocation);
      m_pMemory = this->m_TrackingProjectiles.m_Memory.m_pMemory;
      v6 = CEntityHandle::gm_pEntityList;
      v7 = &m_pMemory[v3];
      v14 = m_pMemory[v3].m_hAbility.m_Index;
      if ( v14 + 2 <= 1 )
      {
        v13 = CEntityHandle::gm_pEntityList;
        goto LABEL_12;
      }
      v15 = v7->m_hAbility.m_Index & 0x7FFF;
      v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v15 >> 9)];
      if ( v16 == 0 )
        goto LABEL_11;
    }
    v18 = &v16[v15 & 0x1FF];
    if ( v18 != 0 && v14 == v18->m_EHandle.m_Index )
    {
      v38 = v18->m_pInstance;
      m_pExtraData = v7->m_pExtraData;
      v40 = *(v18->m_pInstance->_vptr_IHandleEntity + 290);
      v47[0] = v7->m_hTarget.m_Index;
      v40(v38, v47, &v7->m_vLocation, m_pExtraData);
      v13 = CEntityHandle::gm_pEntityList;
      v7 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v3];
    }
    else
    {
LABEL_11:
      v7 = &m_pMemory[v3];
      v13 = v6;
    }
  }
LABEL_12:
  v19 = v7->m_hTarget.m_Index;
  if ( v19 + 2 > 1 )
  {
    v20 = v13->m_pIdentityChunks[(LOWORD(v7->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v20 != 0 )
    {
      v21 = &v20[v7->m_hTarget.m_Index & 0x1FF];
      if ( v21 != 0 && v19 == v21->m_EHandle.m_Index )
      {
        v36 = v21->m_pInstance;
        if ( v21->m_pInstance != 0
          && BYTE3(v36[7]._vptr_IHandleEntity) != 0
          && (v36[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
          && LOBYTE(v36[71].m_pEntity) == 0 )
        {
          if ( LOBYTE(v36[71]._vptr_IHandleEntity) != 0
            || (vptr_IHandleEntity = v36[58]._vptr_IHandleEntity, (BYTE1(vptr_IHandleEntity) & 1) != 0)
            || vptr_IHandleEntity < 0 )
          {
            CDOTA_CombatLog::AddAttackEvadeEvent(&g_DOTACombatLog, v36, !v7->m_bIsAttack);
            v7 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v3];
          }
        }
      }
    }
  }
  v22 = v7->m_pExtraData;
  if ( v22 != 0 )
  {
    KeyValues::deleteThis(v22);
    v7 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v3];
  }
  v23 = v7->m_hVisionEntity.m_Index;
  v24 = CEntityHandle::gm_pEntityList;
  if ( v23 + 2 > 1 )
  {
    v25 = v7->m_hVisionEntity.m_Index & 0x7FFF;
    v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v25 >> 9)];
    if ( v26 != 0 )
    {
      v27 = &v26[v7->m_hVisionEntity.m_Index & 0x1FF];
      if ( v27 != 0 && v23 == v27->m_EHandle.m_Index )
      {
        v41 = v27->m_pInstance;
        if ( v41 != 0 && BYTE3(v41[7]._vptr_IHandleEntity) != 0 )
        {
          CDOTA_ModifierManager::RemoveAllModifiers(&v41[64].m_worldGroupId, 0, 0, 0, 1);
          v42 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v3];
          v23 = v42->m_hVisionEntity.m_Index;
          if ( v23 + 2 <= 1 )
            goto LABEL_48;
          v43 = v42->m_hVisionEntity.m_Index;
          v44 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v43 >> 9) & 0x3F];
          if ( v44 == 0 )
            goto LABEL_48;
          v46 = &v44[v43 & 0x1FF];
          if ( v46 == 0 )
            goto LABEL_48;
        }
        else
        {
          v46 = &v26[v25 & 0x1FF];
        }
        if ( v23 == v46->m_EHandle.m_Index )
        {
          v45 = v46->m_pInstance;
          goto LABEL_49;
        }
LABEL_48:
        v45 = 0;
LABEL_49:
        UTIL_Remove(v45);
        v24 = CEntityHandle::gm_pEntityList;
        v7 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v3];
      }
    }
  }
  v28 = v7->m_hAbility.m_Index;
  if ( v28 + 2 > 1 )
  {
    v29 = v7->m_hAbility.m_Index;
    v30 = v24->m_pIdentityChunks[(v29 >> 9) & 0x3F];
    if ( v30 != 0 )
    {
      v31 = &v30[v29 & 0x1FF];
      if ( v31 != 0 && v28 == v31->m_EHandle.m_Index && CDOTABaseAbility::RefCountsModifiers(v31->m_pInstance) )
      {
        v35 = CEntityHandle::operator CEntityInstance *(&this->m_TrackingProjectiles.m_Memory.m_pMemory[v3].m_hAbility);
        --LODWORD(v35[16].m_iszPrivateVScripts.u.m_Id);
      }
    }
  }
  CUtlVectorBase<CDOTA_TrackingProjectileInfo,CUtlMemory<CDOTA_TrackingProjectileInfo,int>>::Remove(
    &this->m_TrackingProjectiles,
    index);
}


// CDOTA_ProjectileManager::InternalDestroyLinearProjectile  (line 618, @0x0000000002697900, libserver.so)  // inlines: CDOTAUserMsg_DestroyLinearProjectile_t, CNetMessagePB, CUserMessagePB, DecrementModifierRefCount, FindGameEvent<CDOTAUserMsg_DestroyLinearProjectile_t>, FindOrCreateGameEvent<CDOTAUserMsg_DestroyLinearProjectile_t>, Get, GetEntityIdentity, GetInstance, GetTeamNumber, IsACoach, PostEvent<CDOTAUserMsg_DestroyLinearProjectile_t>, Purge, SendUserMessage<CDOTAUserMsg_DestroyLinearProjectile_t>, ToDOTABaseNPC, ToDOTAPlayer, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator->, set_handle, set_has_handle, ~CDOTAUserMsg_DestroyLinearProjectile_t, ~CDOTA_LinearProjectileInfo, ~CNetMessagePB, ~CUserMessagePB, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_ProjectileManager::GetLinearProjectileByHandle, KeyValues::deleteThis, CConcreteEntityList::LookupEntity, CEntityHandle::operator CEntityInstance*, UTIL_Remove, CDOTABaseAbility::RefCountsModifiers, CRecipientFilter::CRecipientFilter, CRecipientFilter::MakeReliable, UTIL_PlayerByIndex, CDOTAUserMsg_DestroyLinearProjectile::CDOTAUserMsg_DestroyLinearProjectile, CDOTAUserMsg_DestroyLinearProjectile::~CDOTAUserMsg_DestroyLinearProjectile, CRecipientFilter::~CRecipientFilter (22 total)
// callers: CDOTA_ProjectileManager::FrameUpdatePostEntityThink
// globals: CEntityHandle::gm_pEntityList, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_DestroyLinearProjectile_t>(bool)::s_hEvent
void __fastcall CDOTA_ProjectileManager::InternalDestroyLinearProjectile(
        CDOTA_ProjectileManager *const this,
        int iHandle)
{
  CDOTA_LinearProjectileInfo *LinearProjectileByHandle; // rax
  KeyValues *m_pExtraData; // rdi
  CDOTA_LinearProjectileInfo *v5; // rbx
  CConcreteEntityList *v6; // r15
  CEntityIdentity *v7; // r13
  CEntityInstance *v8; // rax
  CEntityInstance *m_pInstance; // rdi
  const CConcreteEntityList *v10; // rdi
  CDOTABaseAbility *v11; // rax
  CEntityIndex v12; // r14d
  CBasePlayer *v13; // rax
  CDOTAPlayer *v14; // r13
  int m_Value; // eax
  __int64 v16; // r15
  IGameEventSystem *v17; // r14
  CDOTA_LinearProjectileInfo *v18; // rbx
  CEntityIdentity *v19; // rax
  CEntityInstance *v20; // rax
  int CoachedTeamNum; // eax
  int m_iVisionTeamNumber; // ecx
  unsigned __int8 v23; // al
  void (__fastcall *v24)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+8h] [rbp-1A8h]
  CDOTA_LinearProjectileInfo *pInfo; // [rsp+18h] [rbp-198h] BYREF
  _QWORD v26[2]; // [rsp+20h] [rbp-190h] BYREF
  int v27; // [rsp+30h] [rbp-180h]
  int m_iHandle; // [rsp+38h] [rbp-178h]
  CRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v30; // [rsp+178h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  LinearProjectileByHandle = CDOTA_ProjectileManager::GetLinearProjectileByHandle(this, iHandle);
  m_pExtraData = LinearProjectileByHandle->m_pExtraData;
  v5 = LinearProjectileByHandle;
  pInfo = LinearProjectileByHandle;
  if ( m_pExtraData != 0 )
  {
    KeyValues::deleteThis(m_pExtraData);
    v5 = pInfo;
    pInfo->m_pExtraData = 0;
  }
  v6 = CEntityHandle::gm_pEntityList;
  v7 = CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &v5->m_hVisionEntity);
  if ( v7 != 0 )
  {
    v8 = CEntityHandle::operator CEntityInstance *(&v5->m_hVisionEntity);
    if ( v8 == 0
      || BYTE3(v8[7]._vptr_IHandleEntity) == 0
      || (CDOTA_ModifierManager::RemoveAllModifiers(&v8[64].m_worldGroupId, 0, 0, 0, 1),
          v19 = CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &pInfo->m_hVisionEntity),
          m_pInstance = 0,
          v7 = v19,
          v19 != 0) )
    {
      m_pInstance = v7->m_pInstance;
    }
    UTIL_Remove(m_pInstance);
    v5 = pInfo;
    v10 = CEntityHandle::gm_pEntityList;
  }
  else
  {
    v10 = v6;
  }
  if ( CConcreteEntityList::LookupEntity(v10, &v5->m_hAbility) != 0 )
  {
    v11 = CEntityHandle::operator CEntityInstance *(&v5->m_hAbility);
    v5 = pInfo;
    if ( CDOTABaseAbility::RefCountsModifiers(v11) )
    {
      v20 = CEntityHandle::operator CEntityInstance *(&pInfo->m_hAbility);
      --LODWORD(v20[16].m_iszPrivateVScripts.u.m_Id);
    }
  }
  if ( v5->m_bSentToClients )
  {
    CRecipientFilter::CRecipientFilter(&filter);
    CRecipientFilter::MakeReliable(&filter);
    if ( gpGlobals->maxClients > 0 )
    {
      v12.m_Data = 1;
      while ( 1 )
      {
        v13 = UTIL_PlayerByIndex(v12);
        v14 = v13;
        if ( v13 == 0 || (*(v13->_vptr_IHandleEntity + 140))(v13) == 0 )
          goto LABEL_19;
        if ( pInfo->m_bVisibleToEnemies )
          goto LABEL_33;
        m_Value = v14->m_iTeamNum.m_Value;
        if ( m_Value == 1 )
        {
          if ( CDOTAPlayer::IsACoach(v14) )
          {
            CoachedTeamNum = CDOTAPlayer::GetCoachedTeamNum(v14);
            m_iVisionTeamNumber = pInfo->m_iVisionTeamNumber;
            if ( CoachedTeamNum != m_iVisionTeamNumber )
              goto LABEL_19;
          }
          else
          {
            m_iVisionTeamNumber = pInfo->m_iVisionTeamNumber;
          }
          v23 = v14->m_iTeamNum.m_Value;
          if ( v23 != m_iVisionTeamNumber && v23 != 1 )
            goto LABEL_19;
LABEL_33:
          CRecipientFilter::AddRecipient(&filter, v14);
          if ( gpGlobals->maxClients < ++v12.m_Data )
            break;
        }
        else
        {
          if ( pInfo->m_iVisionTeamNumber == m_Value )
            goto LABEL_33;
LABEL_19:
          if ( gpGlobals->maxClients < ++v12.m_Data )
            break;
        }
      }
    }
    CDOTAUserMsg_DestroyLinearProjectile::CDOTAUserMsg_DestroyLinearProjectile(v26);
    v16 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_DestroyLinearProjectile_t>(bool)::s_hEvent;
    v27 |= 1u;
    v26[0] = off_416B990;
    m_iHandle = pInfo->m_iHandle;
    v17 = g_pGameEventSystem;
    v24 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_DestroyLinearProjectile_t>(bool)::s_hEvent);
    v24(v17, 0, 0, &filter, v16, v26, 32);
    v26[0] = &off_416B810;
    CDOTAUserMsg_DestroyLinearProjectile::~CDOTAUserMsg_DestroyLinearProjectile(v26);
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  CUtlVectorBase<CDOTA_LinearProjectileInfo *,CUtlMemory<CDOTA_LinearProjectileInfo *,int>>::FindAndRemove(
    &this->m_LinearProjectiles,
    &pInfo);
  v18 = pInfo;
  if ( pInfo != 0 )
  {
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&pInfo->m_hAlreadyHit);
    if ( (v18->m_hAlreadyHit.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&v18->m_hAlreadyHit.m_Memory);
      if ( (v18->m_hAlreadyHit.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&v18->m_hAlreadyHit.m_Memory);
    }
    operator delete(v18);
  }
}


// CDOTA_ProjectileManager::ClearHitList  (line 676, @0x0000000002673ed0, libserver.so)
// calls: CDOTA_ProjectileManager::GetLinearProjectileByHandle, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll
// callers: CDOTA_Ability_Nevermore_Requiem::OnProjectileThink_ExtraData
void __fastcall CDOTA_ProjectileManager::ClearHitList(CDOTA_ProjectileManager *const this, int iHandle)
{
  CDOTA_LinearProjectileInfo *LinearProjectileByHandle; // rax

  LinearProjectileByHandle = CDOTA_ProjectileManager::GetLinearProjectileByHandle(this, iHandle);
  if ( LinearProjectileByHandle != 0 )
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&LinearProjectileByHandle->m_hAlreadyHit);
}


// CDOTA_ProjectileManager::ResetRadiusValues  (line 687, @0x0000000002669120, libserver.so)  // inlines: FastSqrt, Length2D, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CDOTA_ProjectileManager::GetLinearProjectileByHandle
// callers: CDOTA_Ability_Nevermore_Requiem::OnProjectileThink_ExtraData
void __fastcall CDOTA_ProjectileManager::ResetRadiusValues(
        CDOTA_ProjectileManager *const this,
        int iHandle,
        float a3,
        float flStartRadius,
        float flEndRadius)
{
  CDOTA_LinearProjectileInfo *LinearProjectileByHandle; // rax
  float v6; // xmm2_4
  float v7; // xmm3_4

  LinearProjectileByHandle = CDOTA_ProjectileManager::GetLinearProjectileByHandle(this, iHandle);
  if ( LinearProjectileByHandle != 0 )
  {
    v6 = LinearProjectileByHandle->m_vVelocity.x * LinearProjectileByHandle->m_vVelocity.x;
    v7 = LinearProjectileByHandle->m_vVelocity.y * LinearProjectileByHandle->m_vVelocity.y;
    LinearProjectileByHandle->m_fRadius = a3;
    LinearProjectileByHandle->m_fRadiusDelta = (flStartRadius - a3)
                                             / (LinearProjectileByHandle->m_fDistance / fsqrt(v6 + v7));
  }
}


// CDOTA_ProjectileManager::GetLinearProjectileLocation  (line 699, @0x0000000002669190, libserver.so)  // inlines: operator=
// calls: CDOTA_ProjectileManager::GetLinearProjectileByHandle
// callers: CDOTA_Ability_AncientApparition_IceBlast::GetTrackerLocation, CDOTA_Ability_Puck_IllusoryOrb::GetOrbLocation, CDOTA_Ability_StormSpirit_BallLightning::UpdateHorizontalMotion, CDOTA_Ability_Batrider_Flamebreak::OnProjectileHit, CDOTA_Modifier_EarthSpirit_BoulderSmash::UpdateHorizontalMotion, CDOTA_Ability_EmberSpirit_FireRemnant::OnProjectileThink, CDOTA_Ability_EmberSpirit_FireRemnant::OnProjectileHit_ExtraData, CDOTA_Ability_Tusk_IceShards::GetOrbLocation
void __fastcall CDOTA_ProjectileManager::GetLinearProjectileLocation(
        CDOTA_ProjectileManager *const this,
        int iHandle,
        Vector *pLoc)
{
  CDOTA_LinearProjectileInfo *LinearProjectileByHandle; // rax

  LinearProjectileByHandle = CDOTA_ProjectileManager::GetLinearProjectileByHandle(this, iHandle);
  if ( LinearProjectileByHandle != 0 )
  {
    pLoc->x = LinearProjectileByHandle->m_vLocation.x;
    pLoc->y = LinearProjectileByHandle->m_vLocation.y;
    pLoc->z = LinearProjectileByHandle->m_vLocation.z;
  }
}


// CDOTA_ProjectileManager::GetLinearProjectileVelocity  (line 708, @0x00000000026691d0, libserver.so)  // inlines: operator=
// calls: CDOTA_ProjectileManager::GetLinearProjectileByHandle
// callers: CDOTA_ProjectileManager::Script_GetLinearProjectileVelocity, CDOTA_Ability_VengefulSpirit_WaveOfTerror::OnProjectileThink
void __fastcall CDOTA_ProjectileManager::GetLinearProjectileVelocity(
        CDOTA_ProjectileManager *const this,
        int iHandle,
        Vector *pVelocity)
{
  CDOTA_LinearProjectileInfo *LinearProjectileByHandle; // rax

  LinearProjectileByHandle = CDOTA_ProjectileManager::GetLinearProjectileByHandle(this, iHandle);
  if ( LinearProjectileByHandle != 0 )
  {
    pVelocity->x = LinearProjectileByHandle->m_vVelocity.x;
    pVelocity->y = LinearProjectileByHandle->m_vVelocity.y;
    pVelocity->z = LinearProjectileByHandle->m_vVelocity.z;
  }
}


// CDOTA_ProjectileManager::GetLinearProjectileAcceleration  (line 717, @0x0000000002669240, libserver.so)  // inlines: operator=
// calls: CDOTA_ProjectileManager::GetLinearProjectileByHandle
void __fastcall CDOTA_ProjectileManager::GetLinearProjectileAcceleration(
        CDOTA_ProjectileManager *const this,
        int iHandle,
        Vector *pAcceleration)
{
  CDOTA_LinearProjectileInfo *LinearProjectileByHandle; // rax

  LinearProjectileByHandle = CDOTA_ProjectileManager::GetLinearProjectileByHandle(this, iHandle);
  if ( LinearProjectileByHandle != 0 )
  {
    pAcceleration->x = LinearProjectileByHandle->m_vAcceleration.x;
    pAcceleration->y = LinearProjectileByHandle->m_vAcceleration.y;
    pAcceleration->z = LinearProjectileByHandle->m_vAcceleration.z;
  }
}


// CDOTA_ProjectileManager::GetLinearProjectileRadius  (line 726, @0x0000000002669280, libserver.so)
// calls: CDOTA_ProjectileManager::GetLinearProjectileByHandle
// callers: CDOTA_Ability_DeathProphet_CarrionSwarm::OnProjectileThink, CDOTA_Ability_Jakiro_DualBreath::OnProjectileThink_ExtraData
float __fastcall CDOTA_ProjectileManager::GetLinearProjectileRadius(CDOTA_ProjectileManager *const this, int iHandle)
{
  CDOTA_LinearProjectileInfo *LinearProjectileByHandle; // rax
  float result; // xmm0_4

  LinearProjectileByHandle = CDOTA_ProjectileManager::GetLinearProjectileByHandle(this, iHandle);
  result = 0.0;
  if ( LinearProjectileByHandle != 0 )
    return LinearProjectileByHandle->m_fRadius;
  return result;
}


// CDOTA_ProjectileManager::GetLinearProjectileVisionEntity  (line 739, @0x00000000026693d0, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: CDOTA_ProjectileManager::GetLinearProjectileByHandle
// callers: CDOTA_Ability_Rattletrap_RocketFlare::OnSpellStart
uint32 *__fastcall CDOTA_ProjectileManager::GetLinearProjectileVisionEntity(
        uint32 *a1,
        CDOTA_ProjectileManager *const this,
        int iHandle)
{
  CDOTA_LinearProjectileInfo *LinearProjectileByHandle; // rax

  LinearProjectileByHandle = CDOTA_ProjectileManager::GetLinearProjectileByHandle(this, iHandle);
  if ( LinearProjectileByHandle != 0 )
    *a1 = LinearProjectileByHandle->m_hVisionEntity.m_Index;
  else
    *a1 = -1;
  return a1;
}


// CDOTA_ProjectileManager::UpdateLinearProjectileSpeed  (line 752, @0x00000000026692a0, libserver.so)  // inlines: operator*=
// calls: CDOTA_ProjectileManager::GetLinearProjectileByHandle
// callers: CDOTA_Ability_Magnataur_Skewer::OnProjectileThink, CDOTA_Ability_Holdout_FriendlySkewer::OnProjectileThink, CDOTA_Ability_EarthSpirit_RollingBoulder::OnProjectileHit
void __fastcall CDOTA_ProjectileManager::UpdateLinearProjectileSpeed(
        CDOTA_ProjectileManager *const this,
        int iHandle,
        float a3,
        float fMultiplier)
{
  CDOTA_LinearProjectileInfo *LinearProjectileByHandle; // rax
  vec_t v5; // xmm0_4

  LinearProjectileByHandle = CDOTA_ProjectileManager::GetLinearProjectileByHandle(this, iHandle);
  if ( LinearProjectileByHandle != 0 )
  {
    LinearProjectileByHandle->m_vVelocity.x = LinearProjectileByHandle->m_vVelocity.x * a3;
    v5 = a3 * LinearProjectileByHandle->m_vVelocity.z;
    LinearProjectileByHandle->m_vVelocity.y = LinearProjectileByHandle->m_vVelocity.y * a3;
    LinearProjectileByHandle->m_vVelocity.z = v5;
  }
}


// CDOTA_ProjectileManager::UpdateLinearProjectileDirection  (line 763, @0x00000000026692f0, libserver.so)  // inlines: operator=
// calls: CDOTA_ProjectileManager::GetLinearProjectileByHandle, Warning
// callers: CDOTA_Ability_Nevermore_Requiem::OnProjectileThink_ExtraData, CDOTA_Ability_EarthSpirit_RollingBoulder::OnProjectileHit
// strings: "ERROR: UpdateLinearProjectileDirection() called with non-zero vertical velocity! Projecti
void __fastcall CDOTA_ProjectileManager::UpdateLinearProjectileDirection(
        CDOTA_ProjectileManager *const this,
        int iHandle,
        const Vector *const vMoveDirection,
        float fDistance)
{
  CDOTA_LinearProjectileInfo *LinearProjectileByHandle; // rax
  vec_t v6; // xmm1_4
  vec_t v7; // xmm1_4
  vec_t z; // xmm1_4
  vec_t x; // [rsp-20h] [rbp-28h]
  const Vector *v10; // [rsp-20h] [rbp-28h]
  float v11; // [rsp-18h] [rbp-20h]
  float v12; // [rsp-18h] [rbp-20h]
  vec_t y; // [rsp-14h] [rbp-1Ch]
  int v14; // [rsp-14h] [rbp-1Ch]

  if ( vMoveDirection->z != 0.0 )
  {
    v12 = fDistance;
    v10 = vMoveDirection;
    v14 = iHandle;
    Warning(
      "ERROR: UpdateLinearProjectileDirection() called with non-zero vertical velocity! Projectile velocity must be two-dimensional.\n");
    fDistance = v12;
    vMoveDirection = v10;
    iHandle = v14;
  }
  v11 = fDistance;
  x = vMoveDirection->x;
  y = vMoveDirection->y;
  LinearProjectileByHandle = CDOTA_ProjectileManager::GetLinearProjectileByHandle(this, iHandle);
  if ( LinearProjectileByHandle != 0 )
  {
    v6 = LinearProjectileByHandle->m_vLocation.x;
    LinearProjectileByHandle->m_vVelocity.z = 0.0;
    LinearProjectileByHandle->m_vStartLocation.x = v6;
    v7 = LinearProjectileByHandle->m_vLocation.y;
    LinearProjectileByHandle->m_vVelocity.x = x;
    LinearProjectileByHandle->m_vStartLocation.y = v7;
    z = LinearProjectileByHandle->m_vLocation.z;
    LinearProjectileByHandle->m_vVelocity.y = y;
    LinearProjectileByHandle->m_fDistance = v11;
    LinearProjectileByHandle->m_vStartLocation.z = z;
  }
}


// CDOTA_ProjectileManager::UpdateLinearProjectileDestruction  (line 786, @0x00000000026693b0, libserver.so)
// calls: CDOTA_ProjectileManager::GetLinearProjectileByHandle
void __fastcall CDOTA_ProjectileManager::UpdateLinearProjectileDestruction(
        CDOTA_ProjectileManager *const this,
        int iHandle,
        bool bDestroy)
{
  CDOTA_LinearProjectileInfo *LinearProjectileByHandle; // rax

  LinearProjectileByHandle = CDOTA_ProjectileManager::GetLinearProjectileByHandle(this, iHandle);
  if ( LinearProjectileByHandle != 0 )
    LinearProjectileByHandle->m_bMarkedForDeletion = bDestroy;
}


// CDOTA_ProjectileManager::ChangeTrackingProjectileSpeed  (line 797, @0x0000000002669510, libserver.so)  // inlines: operator[]
// calls: CDOTA_ProjectileManager::GetTrackingProjectileIndexByAbility, DevMsg(char const*,...)
// callers: CDOTA_Ability_Elder_Titan_AncestralSpirit::PauseReturn, CDOTA_Ability_Elder_Titan_AncestralSpirit::UnpauseReturn
// strings: "Tried to change invalid tracking projectile speed!"
void __fastcall CDOTA_ProjectileManager::ChangeTrackingProjectileSpeed(
        CDOTA_ProjectileManager *const this,
        CDOTABaseAbility *pAbility,
        int iMoveSpeed)
{
  int TrackingProjectileIndexByAbility; // eax
  CDOTA_TrackingProjectileInfo *v6; // rax

  TrackingProjectileIndexByAbility = CDOTA_ProjectileManager::GetTrackingProjectileIndexByAbility(this, pAbility);
  if ( TrackingProjectileIndexByAbility == -1 )
  {
    DevMsg("Tried to change invalid tracking projectile speed!");
  }
  else
  {
    v6 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[TrackingProjectileIndexByAbility];
    if ( v6 != 0 )
      v6->m_iMoveSpeed = iMoveSpeed;
  }
}


// CDOTA_ProjectileManager::GetTrackingProjectilesWithAvoidance  (line 815, @0x00000000026885f0, libserver.so)  // inlines: AddToTail, CopyConstruct<CDOTA_TrackingProjectileInfo*>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, RemoveAll, operator CEntityInstance*, operator bool, operator->, operator[]
// calls: CUtlMemory<CDOTA_TrackingProjectileInfo*, int>::Grow
// callers: CDOTA_BotMode_EvasiveManeuvers::WantsToAvoidLocation
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_ProjectileManager::GetTrackingProjectilesWithAvoidance(
        CDOTA_ProjectileManager *const this,
        CUtlVector<CDOTA_TrackingProjectileInfo*,CUtlMemory<CDOTA_TrackingProjectileInfo*,int> > *const ProjectileList)
{
  CUtlVectorBase<CDOTA_TrackingProjectileInfo*,CUtlMemory<CDOTA_TrackingProjectileInfo*,int> >::CAllocator *p_m_Memory; // r8
  int v5; // r12d
  __int64 v6; // rbx
  CDOTA_TrackingProjectileInfo *v7; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  float v12; // xmm0_4
  __int64 m_Size; // r15
  CDOTA_TrackingProjectileInfo *m_pMemory; // rdx
  int v15; // eax
  CDOTA_TrackingProjectileInfo **v16; // rax
  CDOTA_TrackingProjectileInfo *v17; // rdx
  CDOTA_TrackingProjectileInfo *v18; // [rsp+0h] [rbp-40h]
  CUtlMemory<CDOTA_TrackingProjectileInfo*,int> *v19; // [rsp+8h] [rbp-38h]

  p_m_Memory = &ProjectileList->m_Memory;
  v5 = 0;
  v6 = 0;
  for ( ProjectileList->m_Size = 0; this->m_TrackingProjectiles.m_Size > v5; *v16 = v17 )
  {
    while ( 1 )
    {
      v7 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v6];
      m_Index = v7->m_hAbility.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v9 = v7->m_hAbility.m_Index;
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v9 >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[v9 & 0x1FF];
          if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
          {
            v19 = p_m_Memory;
            v12 = (*(v11->m_pInstance->_vptr_IHandleEntity + 327))(v11->m_pInstance);
            p_m_Memory = v19;
            if ( v12 > 0.0 )
            {
              m_Size = ProjectileList->m_Size;
              m_pMemory = this->m_TrackingProjectiles.m_Memory.m_pMemory;
              if ( m_Size == ProjectileList->m_Memory.m_nAllocationCount )
              {
                v18 = this->m_TrackingProjectiles.m_Memory.m_pMemory;
                CUtlMemory<CDOTA_TrackingProjectileInfo *,int>::Grow(v19, 1);
                v15 = ProjectileList->m_Size;
                m_pMemory = v18;
                p_m_Memory = v19;
              }
              else
              {
                v15 = ProjectileList->m_Size;
              }
              ProjectileList->m_Size = v15 + 1;
              v16 = &ProjectileList->m_Memory.m_pMemory[m_Size];
              if ( v16 != 0 )
                break;
            }
          }
        }
      }
      ++v5;
      ++v6;
      if ( this->m_TrackingProjectiles.m_Size <= v5 )
        return;
    }
    v17 = &m_pMemory[v6];
    ++v5;
    ++v6;
  }
}


// CDOTA_ProjectileManager::GetTrackingProjectilesOnTarget  (line 830, @0x0000000002688470, libserver.so)  // inlines: AddToTail, CopyConstruct<CDOTA_TrackingProjectileInfo*>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, RemoveAll, operator CEntityInstance*, operator==<CBaseEntity>, operator[]
// calls: CUtlMemory<CDOTA_TrackingProjectileInfo*, int>::Grow
// callers: CDOTA_TeamCommander::DoCreepHealthAnalysis, CDOTA_Ability_Nian_Waterball::OnProjectileThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_ProjectileManager::GetTrackingProjectilesOnTarget(
        CDOTA_ProjectileManager *const this,
        _WORD *hTarget,
        CUtlVector<CDOTA_TrackingProjectileInfo*,CUtlMemory<CDOTA_TrackingProjectileInfo*,int> > *const ProjectileList)
{
  CUtlVectorBase<CDOTA_TrackingProjectileInfo*,CUtlMemory<CDOTA_TrackingProjectileInfo*,int> >::CAllocator *p_m_Memory; // r9
  __int64 v6; // r12
  int v7; // ebx
  CEntityInstance *v8; // rdi
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  CEntityInstance *m_pInstance; // rsi
  CDOTA_TrackingProjectileInfo *v12; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v14; // rcx
  CEntityIdentity *v15; // rcx
  __int64 m_Size; // rax
  int v17; // ecx
  CDOTA_TrackingProjectileInfo **v18; // rax
  CUtlVector<CDOTA_TrackingProjectileInfo*,CUtlMemory<CDOTA_TrackingProjectileInfo*,int> > *v19; // [rsp+8h] [rbp-48h]
  int v20; // [rsp+14h] [rbp-3Ch]
  CUtlVectorBase<CDOTA_TrackingProjectileInfo*,CUtlMemory<CDOTA_TrackingProjectileInfo*,int> >::CAllocator *v21; // [rsp+18h] [rbp-38h]

  p_m_Memory = &ProjectileList->m_Memory;
  v6 = 0;
  v7 = 0;
  for ( ProjectileList->m_Size = 0; this->m_TrackingProjectiles.m_Size > v7; ++v6 )
  {
    m_pInstance = 0;
    v12 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v6];
    m_Index = v12->m_hTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_hTarget.m_Index) >> 9) & 0x3F];
      if ( v14 != 0 )
      {
        v15 = &v14[v12->m_hTarget.m_Index & 0x1FF];
        if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
          m_pInstance = v15->m_pInstance;
      }
    }
    v8 = 0;
    if ( (*hTarget + 2) > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[*hTarget & 0x1FF];
        if ( v10 != 0 && *hTarget == v10->m_EHandle.m_Index )
          v8 = v10->m_pInstance;
      }
    }
    if ( m_pInstance == v8 )
    {
      m_Size = ProjectileList->m_Size;
      v17 = ProjectileList->m_Size;
      if ( m_Size == ProjectileList->m_Memory.m_nAllocationCount )
      {
        v19 = ProjectileList;
        v20 = ProjectileList->m_Size;
        v21 = p_m_Memory;
        CUtlMemory<CDOTA_TrackingProjectileInfo *,int>::Grow(p_m_Memory, 1);
        ProjectileList = v19;
        m_Size = v20;
        p_m_Memory = v21;
        v17 = v19->m_Size;
      }
      ProjectileList->m_Size = v17 + 1;
      v18 = &ProjectileList->m_Memory.m_pMemory[m_Size];
      if ( v18 != 0 )
        *v18 = v12;
    }
    ++v7;
  }
}


// CDOTA_ProjectileManager::GetLinearProjectileByHandle  (line 846, @0x0000000002669090, libserver.so)
// calls: Warning
// callers: CDOTA_ProjectileManager::DestroyLinearProjectile, CDOTA_ProjectileManager::ResetRadiusValues, CDOTA_ProjectileManager::GetLinearProjectileLocation, CDOTA_ProjectileManager::GetLinearProjectileVelocity, CDOTA_ProjectileManager::GetLinearProjectileAcceleration, CDOTA_ProjectileManager::GetLinearProjectileRadius, CDOTA_ProjectileManager::UpdateLinearProjectileSpeed, CDOTA_ProjectileManager::UpdateLinearProjectileDirection, CDOTA_ProjectileManager::UpdateLinearProjectileDestruction, CDOTA_ProjectileManager::GetLinearProjectileVisionEntity, CDOTA_ProjectileManager::ClearHitList, CDOTA_ProjectileManager::InternalDestroyLinearProjectile (18 total)
// strings: "Invalid projectile handle! %d\n"
CDOTA_LinearProjectileInfo *__fastcall CDOTA_ProjectileManager::GetLinearProjectileByHandle(
        CDOTA_ProjectileManager *const this,
        int iHandle)
{
  int m_Size; // ecx
  CDOTA_LinearProjectileInfo **m_pMemory; // rdi
  __int64 v4; // rdx
  CDOTA_LinearProjectileInfo *result; // rax

  m_Size = this->m_LinearProjectiles.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_7:
    Warning("Invalid projectile handle! %d\n", iHandle);
    return 0;
  }
  else
  {
    m_pMemory = this->m_LinearProjectiles.m_Memory.m_pMemory;
    v4 = 0;
    while ( 1 )
    {
      result = m_pMemory[v4];
      if ( result != 0 && result->m_iHandle == iHandle )
        break;
      if ( m_Size <= ++v4 )
        goto LABEL_7;
    }
  }
  return result;
}


// CDOTA_ProjectileManager::IsValidProjectile  (line 863, @0x0000000002669410, libserver.so)
// callers: CDOTA_Ability_StormSpirit_BallLightning::UpdateHorizontalMotion, CDOTA_Ability_StormSpirit_BallLightning::OnSpellStart, CDOTA_Modifier_EarthSpirit_BoulderSmash::UpdateHorizontalMotion
bool __fastcall CDOTA_ProjectileManager::IsValidProjectile(CDOTA_ProjectileManager *const this, int iHandle)
{
  int m_Size; // ecx
  CDOTA_LinearProjectileInfo **m_pMemory; // rdi
  __int64 v4; // rax
  CDOTA_LinearProjectileInfo *v5; // rdx

  m_Size = this->m_LinearProjectiles.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_LinearProjectiles.m_Memory.m_pMemory;
  v4 = 0;
  while ( 1 )
  {
    v5 = m_pMemory[v4];
    if ( v5 != 0 && v5->m_iHandle == iHandle )
      break;
    if ( m_Size <= ++v4 )
      return 0;
  }
  return 1;
}


// CDOTA_ProjectileManager::GetTrackingProjectileIndexByAbility  (line 878, @0x0000000002669450, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==
// callers: CDOTA_ProjectileManager::ChangeTrackingProjectileSpeed
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_ProjectileManager::GetTrackingProjectileIndexByAbility(
        CDOTA_ProjectileManager *const this,
        CDOTABaseAbility *pAbility)
{
  int m_Size; // r10d
  int result; // eax
  int v4; // edx
  CDOTA_TrackingProjectileInfo *m_pMemory; // rax
  uint32 m_Index; // ecx
  CEntityIdentity *v7; // rdi
  CEntityIdentity *v8; // rdi

  if ( pAbility == 0 )
    return -1;
  m_Size = this->m_TrackingProjectiles.m_Size;
  result = -1;
  if ( m_Size > 0 )
  {
    v4 = 0;
    m_pMemory = this->m_TrackingProjectiles.m_Memory.m_pMemory;
    do
    {
      m_Index = m_pMemory->m_hAbility.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_hAbility.m_Index) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[m_pMemory->m_hAbility.m_Index & 0x1FF];
          if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && pAbility == v8->m_pInstance )
            return v4;
        }
      }
      ++v4;
      ++m_pMemory;
    }
    while ( v4 != m_Size );
    return -1;
  }
  return result;
}


// CDOTA_ProjectileManager::FrameUpdatePostEntityThink  (line 935, @0x0000000002697cd0, libserver.so)  // inlines: AddToTail, BoundingRadius, CEntityHandle, CGameTrace, CHandle, CModifierParams, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlSortVector, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, DotProduct, Element, EnableInteractsWith, FastSqrt, Get, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFloat, GetGameFrameTime, GetGameTime, GetInstance, GetInt, GetProjectileCollisionSize, GetSerialNumber, GrowMemory, HasElement, InState, IndexToIdentity, Init, IsInvisible, IsValid, Length, Length2D, Length2DSqr, LengthSqr, LookupEntity, NormalizeInPlace, Normalized, Purge, Purge_FixedGrowable, QAngle, Ray_t, RemoveAll, RnCollisionAttr_t, Set, SetTarget, ToDOTABaseNPC, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator bool, operator!=<CBaseEntity>, operator*, operator+, operator+=, operator-, operator->, operator=, operator==<CBaseEntity>, operator[], target_t, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlSortVector, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CConcreteEntityList::LookupEntity, CEntityHandle::operator CEntityInstance*, CBaseEntity::SetAbsOrigin, VectorNormalize, CDOTA_BaseNPC::IsInvisibleTo, FireModifierEvent, GetProjectileAttachmentName, CBaseAnimating::GetAttachment, CDOTA_ProjectileManager::FinishTrackingProjectile, CGridNav::PrepareObstructionManager, CGridNav::CheckForCollisions, UnitFilter (29 total)
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_ProjectileManager::FrameUpdatePostEntityThink(
        CDOTA_ProjectileManager *const this,
        const EventServerPostEntityThink_t *const msg)
{
  int v3; // r12d
  __int64 v4; // rbx
  float v5; // xmm1_4
  float y; // xmm2_4
  float m_iMoveSpeed; // xmm3_4
  float v8; // xmm4_4
  CGameRules *v9; // rdx
  float v10; // xmm4_4
  float frametime; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  vec_t v14; // xmm2_4
  vec_t v15; // xmm1_4
  vec_t v16; // xmm0_4
  CDOTA_TrackingProjectileInfo *v17; // r13
  CBaseEntity *v18; // rax
  CDOTA_TrackingProjectileInfo *v19; // rax
  vec_t v20; // xmm0_4
  vec_t v21; // xmm2_4
  CDOTA_TrackingProjectileInfo *v22; // r13
  CEntityInstance *v23; // rax
  CDOTA_TrackingProjectileInfo *v24; // r13
  CEntityInstance *v25; // rax
  CDOTA_TrackingProjectileInfo *v26; // r13
  CEntityInstance *v27; // rax
  float v28; // xmm1_4
  float v29; // xmm1_4
  CDOTA_TrackingProjectileInfo *v30; // r13
  float m_flExpireTime; // xmm0_4
  const CEntityHandle *p_m_hTarget; // r14
  CEntityInstance *v33; // rax
  CEntityInstance *v34; // rdx
  CDOTA_BaseNPC *v35; // rax
  bool IsInvisibleTo; // al
  CEntityInstance *v37; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v39; // eax
  __int16 v40; // cx
  vec_t v41; // xmm2_4
  vec_t v42; // xmm1_4
  CDOTA_TrackingProjectileInfo *v43; // rax
  float m_flMaxImpactTime; // xmm0_4
  __m128 v45; // xmm1
  __m128 v46; // xmm0
  float v47; // xmm1_4
  CDOTA_TrackingProjectileInfo *v48; // r13
  const char *ProjectileAttachmentName; // r14
  CEntityInstance *v50; // rax
  const CBaseAnimating *v51; // rax
  int v52; // esi
  float v53; // xmm0_4
  CGameRules *v54; // rdx
  float v55; // xmm4_4
  CDOTA_LinearProjectileInfo *v56; // rax
  vec_t v57; // xmm2_4
  vec_t v58; // xmm1_4
  vec_t v59; // xmm0_4
  CDOTA_LinearProjectileInfo **v60; // rdx
  float v61; // xmm1_4
  float v62; // xmm2_4
  float v63; // xmm4_4
  Vector *v64; // rax
  float v65; // xmm1_4
  float v66; // xmm2_4
  float v67; // xmm4_4
  float v68; // xmm0_4
  CDOTA_LinearProjectileInfo *v69; // rax
  unsigned int v70; // xmm2_4
  unsigned int v71; // xmm1_4
  float v72; // xmm0_4
  CDOTA_LinearProjectileInfo **m_pMemory; // rax
  CDOTA_LinearProjectileInfo *v74; // rbx
  __int64 v75; // r14
  int v76; // r13d
  CDOTA_LinearProjectileInfo **v77; // rax
  CDOTA_BaseNPC *v78; // rcx
  ObstructionRecord_t **p_m_pObstructionRecord; // r12
  CObstructionObject *m_pObstructionObject; // rax
  CEntityInstance *v81; // rax
  CDOTA_LinearProjectileInfo **v82; // rsi
  ObstructionRecord_t *v83; // rdx
  int v84; // eax
  __int16 v85; // cx
  const Vector *AbsOrigin; // rax
  float v87; // xmm0_4
  uint32 v88; // xmm1_4
  __m128i v89; // xmm5
  float v90; // ebx
  const Vector *v91; // rax
  float v92; // xmm7_4
  float v93; // xmm6_4
  float v94; // xmm5_4
  CDOTA_LinearProjectileInfo *v95; // rax
  float v96; // xmm0_4
  ObstructionRecord_t *v97; // rax
  int v98; // edx
  __int16 v99; // cx
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_TrackingProjectileInfo *v101; // rax
  float v102; // xmm1_4
  float v103; // xmm2_4
  float v104; // xmm0_4
  float m_fValue; // xmm3_4
  float v106; // xmm0_4
  CDOTA_TrackingProjectileInfo *v107; // rdi
  float v108; // xmm1_4
  CEntityInstance *v109; // rax
  bool v110; // zf
  Vector **v111; // rax
  char v112; // r12
  Vector *v113; // rax
  float v114; // xmm0_4
  const CEntityHandle *p_z; // rbx
  CEntityInstance *v116; // rax
  CDOTA_LinearProjectileInfo *v117; // rbx
  CEntityInstance *v118; // rax
  CDOTA_LinearProjectileInfo *v119; // rbx
  CEntityInstance *v120; // rax
  CDOTA_LinearProjectileInfo *v121; // rbx
  CEntityInstance *v122; // rax
  CDOTA_LinearProjectileInfo *v123; // rbx
  CEntityInstance *v124; // rax
  const CConcreteEntityList *v125; // rdi
  CDOTA_LinearProjectileInfo *v126; // rbx
  CBaseEntity *v127; // rax
  const CConcreteEntityList *v128; // rdi
  CHandle<CDOTABaseAbility> *p_m_hAbility; // rbx
  CEntityInstance *v130; // rax
  void (__fastcall *v131)(CEntityInstance *, target_t *, Vector *); // rcx
  CDOTA_LinearProjectileInfo *v132; // r12
  CEntityInstance *v133; // rax
  KeyValues *v134; // rcx
  void (__fastcall *v135)(CEntityInstance *, target_t *, Vector *, KeyValues *); // r8
  uint32 v136; // eax
  int v137; // edx
  unsigned __int64 v138; // rbx
  unsigned __int64 v139; // r12
  CDOTA_LinearProjectileInfo *v140; // rax
  __int64 v141; // r13
  int v142; // r12d
  CEntityIdentity *v143; // rsi
  __int64 m_Size; // r12
  uint32 *v145; // r14
  int v146; // eax
  CHandle<CBaseEntity> *v147; // rax
  CDOTA_LinearProjectileInfo **v148; // rcx
  uint32 m_Index; // eax
  unsigned __int64 v150; // rdx
  CEntityIdentity *v151; // rsi
  CEntityIdentity *v152; // rdi
  CEntityInstance *v153; // rax
  __int64 (__fastcall *v154)(CEntityInstance *, target_t *, Vector *); // rcx
  const Vector *v155; // rax
  float v156; // xmm1_4
  float v157; // xmm0_4
  float v158; // xmm2_4
  uint32 v159; // eax
  CDOTA_LinearProjectileInfo **v160; // rax
  float v161; // xmm0_4
  CDOTA_LinearProjectileInfo **v162; // rax
  ObstructionRecord_t *v163; // rdx
  int v164; // eax
  __int16 v165; // cx
  float v166; // xmm0_4
  float m_fRadius; // xmm0_4
  CDOTA_LinearProjectileInfo **v168; // rdx
  CEntityInstance *v169; // rax
  KeyValues *m_pExtraData; // rcx
  __int64 (__fastcall *v171)(CEntityInstance *, target_t *, Vector *, KeyValues *); // r8
  float flNow; // [rsp+18h] [rbp-3A8h]
  bool bDestinationReached; // [rsp+1Fh] [rbp-3A1h]
  float v174; // [rsp+20h] [rbp-3A0h]
  float v175; // [rsp+24h] [rbp-39Ch]
  float v176; // [rsp+34h] [rbp-38Ch]
  float position; // [rsp+40h] [rbp-380h]
  float flDist; // [rsp+50h] [rbp-370h]
  float flDista; // [rsp+50h] [rbp-370h]
  int v180; // [rsp+60h] [rbp-360h]
  float x; // [rsp+64h] [rbp-35Ch]
  float v182; // [rsp+64h] [rbp-35Ch]
  float bTimeExpired; // [rsp+68h] [rbp-358h]
  CDOTA_LinearProjectileInfo *bTimeExpireda; // [rsp+68h] [rbp-358h]
  float bTimeExpiredb; // [rsp+68h] [rbp-358h]
  CDOTA_LinearProjectileInfo **bTimeExpiredd; // [rsp+68h] [rbp-358h]
  bool bTimeExpiredc; // [rsp+68h] [rbp-358h]
  int src; // [rsp+70h] [rbp-350h]
  float srca; // [rsp+70h] [rbp-350h]
  CDOTA_BaseNPC *v190; // [rsp+78h] [rbp-348h]
  float z; // [rsp+78h] [rbp-348h]
  CDOTA_BaseNPC *v192; // [rsp+78h] [rbp-348h]
  target_t target; // [rsp+80h] [rbp-340h] BYREF
  Vector vNewLocation; // [rsp+90h] [rbp-330h] BYREF
  Vector vDirection; // [rsp+A0h] [rbp-320h] BYREF
  __int128 vPathCenter; // [rsp+B0h] [rbp-310h] OVERLAPPED BYREF
  target_t target_0; // [rsp+F0h] [rbp-2D0h] BYREF
  float v198; // [rsp+F8h] [rbp-2C8h]
  int v199; // [rsp+FCh] [rbp-2C4h]
  float v200; // [rsp+100h] [rbp-2C0h]
  float v201; // [rsp+104h] [rbp-2BCh]
  float v202; // [rsp+108h] [rbp-2B8h]
  int v203; // [rsp+10Ch] [rbp-2B4h]
  int v204; // [rsp+110h] [rbp-2B0h]
  int v205; // [rsp+114h] [rbp-2ACh]
  int v206; // [rsp+118h] [rbp-2A8h]
  int v207; // [rsp+11Ch] [rbp-2A4h]
  int v208; // [rsp+120h] [rbp-2A0h]
  int v209; // [rsp+124h] [rbp-29Ch]
  int v210; // [rsp+128h] [rbp-298h]
  int v211; // [rsp+12Ch] [rbp-294h]
  float v212; // [rsp+130h] [rbp-290h]
  char v213; // [rsp+134h] [rbp-28Ch]
  bool v214; // [rsp+135h] [rbp-28Bh]
  trace_t tr; // [rsp+140h] [rbp-280h] BYREF
  CollisionResultList_t intersectionResults; // [rsp+1F0h] [rbp-1D0h] BYREF
  unsigned __int64 v217; // [rsp+388h] [rbp-38h]

  v217 = __readfsqword(0x28u);
  if ( g_pGameRules != 0 )
    flNow = *&g_pGameRules[18].m_szQuestName[20];
  else
    flNow = 0.0;
  v3 = this->m_TrackingProjectiles.m_Size - 1;
  if ( v3 >= 0 )
  {
    v4 = v3;
    while ( 1 )
    {
      v30 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v4];
      m_flExpireTime = v30->m_flExpireTime;
      if ( m_flExpireTime != 0.0 && flNow >= m_flExpireTime )
      {
        v30->m_hTarget.m_Index = -1;
        v30 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v4];
      }
      p_m_hTarget = &v30->m_hTarget;
      v33 = CEntityHandle::operator CEntityInstance *(&v30->m_hTarget);
      v34 = v33;
      if ( v33 != 0 )
      {
        if ( BYTE3(v33[7]._vptr_IHandleEntity) == 0 || !v30->m_bDodgeable )
          goto LABEL_43;
        v190 = v33;
        v35 = CEntityHandle::operator CEntityInstance *(&v30->m_hSourceEntity);
        if ( v35 != 0 && v35->m_bIsDOTANPC )
        {
          IsInvisibleTo = CDOTA_BaseNPC::IsInvisibleTo(v190, v35);
          v30 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v4];
          p_m_hTarget = &v30->m_hTarget;
        }
        else
        {
          IsInvisibleTo = (v190->m_nUnitState64.m_Value & 0x80) != 0;
        }
        if ( IsInvisibleTo )
        {
          tr.startpos.x = NAN;
          tr.startpos.y = 0.0;
          tr.startpos.z = 0.0;
          tr.endpos.x = NAN;
          LOBYTE(tr.endpos.y) = 0;
          tr.endpos.z = 0.0;
          tr.plane.normal.x = 0.0;
          tr.plane.normal.y = 0.0;
          tr.fraction = NAN;
          HIDWORD(tr.contents) = 0;
          *&tr.startsolid = 0;
          memset(&tr.m_pEnt, 0, 24);
          LODWORD(tr.m_ShapeAttributes.m_nInteractsExclude) = 0;
          WORD2(tr.m_ShapeAttributes.m_nInteractsExclude) = 0;
          tr.m_ShapeAttributes.m_nEntityId = 0;
          *&tr.m_ShapeAttributes.m_nHierarchyId = -1;
          tr.boneLocalPos.x = NAN;
          tr.boneLocalPos.y = NAN;
          v37 = CEntityHandle::operator CEntityInstance *(p_m_hTarget);
          if ( v37 != 0 )
          {
            m_pEntity = v37->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v39 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
              v40 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v40 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              LOWORD(tr.boneLocalPos.x) = v40 | LOWORD(tr.boneLocalPos.x) & 0x8000;
              LODWORD(tr.boneLocalPos.x) = (v39 << 15) | LOWORD(tr.boneLocalPos.x) & 0x7FFF;
            }
          }
          FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_PROJECTILE_DODGE, &tr);
          this->m_TrackingProjectiles.m_Memory.m_pMemory[v4].m_hTarget.m_Index = -1;
          v30 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v4];
          p_m_hTarget = &v30->m_hTarget;
        }
        v34 = CEntityHandle::operator CEntityInstance *(p_m_hTarget);
        if ( v34 != 0 )
        {
LABEL_43:
          if ( (*(v34->_vptr_IHandleEntity + 43))(v34) != 0 )
          {
            v48 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v4];
            ProjectileAttachmentName = GetProjectileAttachmentName(3);
            v50 = CEntityHandle::operator CEntityInstance *(&this->m_TrackingProjectiles.m_Memory.m_pMemory[v4].m_hTarget);
            v51 = (*(v50->_vptr_IHandleEntity + 43))(v50);
            CBaseAnimating::GetAttachment(v51, ProjectileAttachmentName, &v48->m_vTargetLocation);
          }
          if ( dota_projectile_debug.m_pParent->m_Value.m_nValue != 0 )
          {
            v107 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v4];
            tr.startpos.x = -90.0;
            tr.startpos.y = 0.0;
            tr.startpos.z = 0.0;
            NDebugOverlay::Circle(&v107->m_vTargetLocation, &tr, 8.0, 0xFFu, 0x40u, 0, 75, 0.01023, 1);
          }
          v30 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v4];
        }
      }
      v41 = v30->m_vTargetLocation.y - v30->m_vLocation.y;
      v42 = v30->m_vTargetLocation.z - v30->m_vLocation.z;
      vDirection.x = v30->m_vTargetLocation.x - v30->m_vLocation.x;
      vDirection.y = v41;
      vDirection.z = v42;
      flDist = fsqrt(((vDirection.x * vDirection.x) + (v41 * v41)) + (v42 * v42));
      VectorNormalize(&vDirection);
      v43 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v4];
      x = vDirection.x;
      bTimeExpired = vDirection.y;
      m_flMaxImpactTime = v43->m_flMaxImpactTime;
      z = vDirection.z;
      if ( m_flMaxImpactTime <= 0.0 )
      {
        v5 = vDirection.z;
        y = vDirection.y;
        m_iMoveSpeed = v43->m_iMoveSpeed;
        v8 = vDirection.x;
        v9 = g_pGameRules;
      }
      else
      {
        v9 = g_pGameRules;
        if ( g_pGameRules != 0 )
        {
          m_flMaxImpactTime = m_flMaxImpactTime - *&g_pGameRules[18].m_szQuestName[20];
          if ( m_flMaxImpactTime <= 0.0 )
          {
            v108 = v43->m_iMoveSpeed;
            v10 = vDirection.x * v108;
            v12 = vDirection.y * v108;
            v13 = v108 * vDirection.z;
LABEL_7:
            frametime = 0.0;
            if ( v9[19].m_szQuestName[29] == 0 )
              frametime = gpGlobals->frametime;
            goto LABEL_9;
          }
        }
        v45.m128_f32[0] = flDist / m_flMaxImpactTime;
        m_iMoveSpeed = v43->m_iMoveSpeed;
        v46 = _mm_cmpge_ss(0x457A0000u, v45);
        LODWORD(v47) = _mm_andnot_ps(v46, 0x457A0000u).m128_u32[0] | v45.m128_i32[0] & v46.m128_i32[0];
        if ( v47 > m_iMoveSpeed )
        {
          v43->m_iMoveSpeed = v47;
          v8 = vDirection.x;
          y = vDirection.y;
          v5 = vDirection.z;
          v9 = g_pGameRules;
          v43 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v4];
          m_iMoveSpeed = v43->m_iMoveSpeed;
        }
        else
        {
          v5 = vDirection.z;
          y = vDirection.y;
          v8 = vDirection.x;
        }
      }
      v10 = v8 * m_iMoveSpeed;
      frametime = 0.0;
      v12 = y * m_iMoveSpeed;
      v13 = v5 * m_iMoveSpeed;
      if ( v9 != 0 )
        goto LABEL_7;
LABEL_9:
      v14 = (v12 * frametime) + v43->m_vLocation.y;
      v15 = (v13 * frametime) + v43->m_vLocation.z;
      v16 = (frametime * v10) + v43->m_vLocation.x;
      v43->m_vLocation.y = v14;
      v43->m_vLocation.z = v15;
      v43->m_vLocation.x = v16;
      v17 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v4];
      if ( CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &v17->m_hVisionEntity) != 0 )
      {
        v18 = CEntityHandle::operator CEntityInstance *(&v17->m_hVisionEntity);
        CBaseEntity::SetAbsOrigin(v18, &v17->m_vLocation);
      }
      if ( dota_projectile_debug.m_pParent->m_Value.m_nValue != 0 )
      {
        memset(&tr.m_ShapeAttributes, 0, 31);
        tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
        CGameTrace::Init(&tr);
        v101 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v4];
        v102 = v101->m_vLocation.x;
        v103 = v101->m_vLocation.y;
        v104 = v101->m_vLocation.z;
        m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
        v199 = 0;
        v212 = m_fValue;
        v203 = 0;
        v207 = 0;
        v211 = 0;
        v200 = (v102 + 0.0) - v101->m_vLocation.x;
        v201 = (v103 + 0.0) - v101->m_vLocation.y;
        v106 = (v104 - 5000.0) - v101->m_vLocation.z;
        v213 = 1;
        v210 = 0;
        v209 = 0;
        v202 = v106;
        v208 = 0;
        v206 = 0;
        v205 = 0;
        v204 = 0;
        v214 = (((v200 * v200) + (v201 * v201)) + (v106 * v106)) != 0.0;
        target_0 = *&v101->m_vLocation.x;
        v198 = v101->m_vLocation.z;
        CTraceFilterSimple::CTraceFilterSimple(&vPathCenter, 0, 4, 0);
        *(&vPathCenter + 1) |= 0x7001uLL;
        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &target_0, &vPathCenter, &tr);
        target_0.m_hEntity.m_Index = -1028390912;
        target_0.m_fDist = 0.0;
        v198 = 0.0;
        NDebugOverlay::Circle(&tr.endpos, &target_0, 16.0, 0xFFu, 0x80u, 0, 75, 0.01023, 1);
      }
      v19 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v4];
      v20 = v19->m_vTargetLocation.z - v19->m_vLocation.z;
      v21 = v19->m_vTargetLocation.x - v19->m_vLocation.x;
      vDirection.y = v19->m_vTargetLocation.y - v19->m_vLocation.y;
      vDirection.z = v20;
      vDirection.x = v21;
      VectorNormalize(&vDirection);
      v22 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v4];
      if ( CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &v22->m_hAbility) != 0 )
      {
        v23 = CEntityHandle::operator CEntityInstance *(&v22->m_hAbility);
        (*(v23->_vptr_IHandleEntity + 291))(v23, &v22->m_vLocation);
        v24 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v4];
        v25 = CEntityHandle::operator CEntityInstance *(&v24->m_hAbility);
        (*(v25->_vptr_IHandleEntity + 294))(v25, &v24->m_vLocation, v24->m_pExtraData);
      }
      if ( (((x * vDirection.x) + (bTimeExpired * vDirection.y)) + (z * vDirection.z)) < 0.0 )
        goto LABEL_48;
      v26 = &this->m_TrackingProjectiles.m_Memory.m_pMemory[v4];
      v27 = CEntityHandle::operator CEntityInstance *(&v26->m_hTarget);
      if ( v27 == 0 )
        goto LABEL_22;
      if ( BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
      {
        v28 = *&v27[48].m_hPrivateScope.m_hScope;
        if ( v28 == 0.0 )
          v28 = *(&v27[48]._vptr_IHandleEntity + 1);
        v29 = v28 * v28;
      }
      else
      {
        vptr_IHandleEntity = v27[11]._vptr_IHandleEntity;
        v29 = vptr_IHandleEntity != 0 ? *(vptr_IHandleEntity + 22) * *(vptr_IHandleEntity + 22) : 0.0;
      }
      if ( v29 >= (((v26->m_vLocation.x - v26->m_vTargetLocation.x) * (v26->m_vLocation.x - v26->m_vTargetLocation.x))
                 + ((v26->m_vLocation.y - v26->m_vTargetLocation.y) * (v26->m_vLocation.y - v26->m_vTargetLocation.y))) )
      {
LABEL_48:
        v52 = v3--;
        CDOTA_ProjectileManager::FinishTrackingProjectile(this, v52);
        --v4;
        if ( v3 == -1 )
          break;
      }
      else
      {
LABEL_22:
        --v3;
        --v4;
        if ( v3 == -1 )
          break;
      }
    }
  }
  v180 = this->m_LinearProjectiles.m_Size - 1;
  if ( v180 >= 0 )
  {
    v192 = (8LL * v180);
    while ( 1 )
    {
      v53 = 0.0;
      v54 = g_pGameRules;
      if ( g_pGameRules != 0 && g_pGameRules[19].m_szQuestName[29] == 0 )
        v53 = gpGlobals->frametime;
      v55 = 0.0;
      v56 = *(this->m_LinearProjectiles.m_Memory.m_pMemory + v192);
      v57 = (v56->m_vAcceleration.y * v53) + v56->m_vVelocity.y;
      v58 = (v56->m_vAcceleration.z * v53) + v56->m_vVelocity.z;
      v59 = (v53 * v56->m_vAcceleration.x) + v56->m_vVelocity.x;
      v56->m_vVelocity.y = v57;
      v56->m_vVelocity.z = v58;
      v56->m_vVelocity.x = v59;
      if ( v54 != 0 && v54[19].m_szQuestName[29] == 0 )
        v55 = gpGlobals->frametime;
      v60 = (this->m_LinearProjectiles.m_Memory.m_pMemory + v192);
      v61 = ((*v60)->m_vVelocity.x * v55) + (*v60)->m_vLocation.x;
      v62 = ((*v60)->m_vVelocity.y * v55) + (*v60)->m_vLocation.y;
      v63 = (v55 * (*v60)->m_vVelocity.z) + (*v60)->m_vLocation.z;
      vNewLocation.x = v61;
      vNewLocation.y = v62;
      vNewLocation.z = v63;
      v64 = *v60;
      if ( fsqrt(
             ((v61 - (*v60)->m_vStartLocation.x) * (v61 - (*v60)->m_vStartLocation.x))
           + ((v62 - (*v60)->m_vStartLocation.y) * (v62 - (*v60)->m_vStartLocation.y))) > (*v60)->m_fDistance )
      {
        srca = (*v60)->m_fDistance;
        tr.startpos = v64[2];
        VectorNormalize(&tr.startpos);
        bDestinationReached = 1;
        v168 = (this->m_LinearProjectiles.m_Memory.m_pMemory + v192);
        v61 = (tr.startpos.x * srca) + (*v168)->m_vStartLocation.x;
        v62 = (tr.startpos.y * srca) + (*v168)->m_vStartLocation.y;
        v63 = (tr.startpos.z * srca) + (*v168)->m_vStartLocation.z;
        vNewLocation.x = v61;
        vNewLocation.y = v62;
        vNewLocation.z = v63;
        v64 = *v168;
      }
      else
      {
        bDestinationReached = 0;
      }
      v65 = v61 - v64[1].x;
      v66 = v62 - v64[1].y;
      v67 = v63 - v64[1].z;
      vDirection = v64[2];
      v182 = v65;
      flDista = v66;
      position = v67;
      VectorNormalize(&vDirection);
      v68 = 0.0;
      if ( g_pGameRules != 0 && g_pGameRules[19].m_szQuestName[29] == 0 )
        v68 = gpGlobals->frametime;
      (*(this->m_LinearProjectiles.m_Memory.m_pMemory + v192))->m_fRadius = (v68
                                                                           * (*(this->m_LinearProjectiles.m_Memory.m_pMemory
                                                                              + v192))->m_fRadiusDelta)
                                                                          + (*(this->m_LinearProjectiles.m_Memory.m_pMemory
                                                                             + v192))->m_fRadius;
      if ( dota_projectile_debug.m_pParent->m_Value.m_nValue != 0 )
      {
        memset(&tr.m_ShapeAttributes, 0, 31);
        tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
        CGameTrace::Init(&tr);
        v166 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
        v199 = 0;
        v212 = v166;
        v201 = (vNewLocation.y + 0.0) - vNewLocation.y;
        v202 = (vNewLocation.z - 5000.0) - vNewLocation.z;
        v203 = 0;
        v207 = 0;
        v211 = 0;
        v210 = 0;
        v200 = (vNewLocation.x + 0.0) - vNewLocation.x;
        v209 = 0;
        v208 = 0;
        v206 = 0;
        v205 = 0;
        v204 = 0;
        target_0.m_hEntity.m_Index = LODWORD(vNewLocation.x);
        target_0.m_fDist = vNewLocation.y;
        v198 = vNewLocation.z;
        v213 = 1;
        v214 = (((v200 * v200) + (v201 * v201)) + (v202 * v202)) != 0.0;
        CTraceFilterSimple::CTraceFilterSimple(&vPathCenter, 0, 4, 0);
        *(&vPathCenter + 1) |= 0x7001uLL;
        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &target_0, &vPathCenter, &tr);
        m_fRadius = (*(this->m_LinearProjectiles.m_Memory.m_pMemory + v192))->m_fRadius;
        target_0.m_fDist = 0.0;
        v198 = 0.0;
        target_0.m_hEntity.m_Index = -1028390912;
        NDebugOverlay::Circle(&tr.endpos, &target_0, m_fRadius, 0xFFu, 0x80u, 0, 75, 0.01023, 1);
      }
      CGridNav::PrepareObstructionManager(
        &g_GridNav,
        (fsqrt((v182 * v182) + (flDista * flDista)) * 0.5)
      + (*(this->m_LinearProjectiles.m_Memory.m_pMemory + v192))->m_fRadius,
        0x10u,
        0x40u,
        ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NONE,
        0.0);
      v69 = *(this->m_LinearProjectiles.m_Memory.m_pMemory + v192);
      intersectionResults.m_Size = 0;
      *&v70 = (0.5 * v182) + v69->m_vLocation.x;
      *&v71 = (0.5 * flDista) + v69->m_vLocation.y;
      intersectionResults.m_Memory.m_nAllocationCount = 16;
      v72 = (0.5 * position) + v69->m_vLocation.z;
      intersectionResults.m_Memory.m_nGrowSize = 0x80000000;
      *&vPathCenter = __PAIR64__(v71, v70);
      *(&vPathCenter + 2) = v72;
      intersectionResults.m_Memory.m_pMemory = &intersectionResults.m_Memory.m_FixedMemory;
      tr.startpos.x = NAN;
      CGridNav::CheckForCollisions(&g_GridNav, &vPathCenter, &intersectionResults, &tr, 0);
      tr.startpos.x = 0.0;
      m_pMemory = this->m_LinearProjectiles.m_Memory.m_pMemory;
      memset(&tr.startpos.z, 0, 25);
      v74 = *(&v192->_vptr_IHandleEntity + m_pMemory);
      if ( intersectionResults.m_Size <= 0 )
        goto LABEL_100;
      v75 = 0;
      v76 = 0;
      do
      {
        p_m_pObstructionRecord = 0;
        m_pObstructionObject = intersectionResults.m_Memory.m_pMemory[v75].m_pObsRec->m_pObstructionObject;
        if ( m_pObstructionObject != 0 )
          p_m_pObstructionRecord = &m_pObstructionObject[-86].m_pObstructionRecord;
        v81 = CEntityHandle::operator CEntityInstance *(&v74->m_hSource);
        if ( v81 != 0 )
        {
          if ( UnitFilter(
                 p_m_pObstructionRecord,
                 v74->m_iUnitTargetTeam,
                 v74->m_iUnitTargetType,
                 v74->m_iUnitTargetFlags,
                 HIBYTE(v81[7].m_CScriptComponent)) != 0 )
            goto LABEL_66;
          v82 = (this->m_LinearProjectiles.m_Memory.m_pMemory + v192);
          v74 = *v82;
          if ( !(*v82)->m_bIgnoreSource
            || (bTimeExpiredd = (this->m_LinearProjectiles.m_Memory.m_pMemory + v192),
                v109 = CEntityHandle::operator CEntityInstance *(&v74->m_hSource),
                v82 = bTimeExpiredd,
                p_m_pObstructionRecord != v109) )
          {
            target_0.m_hEntity.m_Index = -1;
            if ( p_m_pObstructionRecord != 0 )
            {
              v83 = p_m_pObstructionRecord[1];
              if ( v83 != 0 )
              {
                v84 = (*&v83->m_ObsType >> 15) - (LODWORD(v83->m_fYMax) & 1);
                v85 = 0x7FFF;
                if ( *&v83->m_ObsType != -1 )
                  v85 = *&v83->m_ObsType & 0x7FFF;
                LOWORD(target_0.m_hEntity.m_Index) = v85 | target_0.m_hEntity.m_Index & 0x8000;
                target_0.m_hEntity.m_Index = (v84 << 15) | target_0.m_hEntity.m_Index & 0x7FFF;
              }
            }
            v74 = *v82;
            if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                   &(*v82)->m_hAlreadyHit,
                   &target_0) < 0 )
            {
              bTimeExpireda = v74;
              if ( v74->m_bFrontalCone )
              {
                AbsOrigin = CBaseEntity::GetAbsOrigin(p_m_pObstructionRecord);
                v87 = AbsOrigin->y - v74->m_vStartLocation.y;
                *&v88 = AbsOrigin->x - v74->m_vStartLocation.x;
                v198 = 0.0;
                target_0.m_fDist = v87;
                target_0.m_hEntity.m_Index = v88;
                VectorNormalize(&target_0);
                v77 = this->m_LinearProjectiles.m_Memory.m_pMemory;
                v78 = v192;
                if ( (((*&target_0.m_hEntity.m_Index * vDirection.x) + (target_0.m_fDist * vDirection.y))
                    + (v198 * vDirection.z)) < 0.0 )
                  goto LABEL_67;
                bTimeExpireda = *(&v192->_vptr_IHandleEntity + v77);
              }
              v89 = _mm_cvtsi32_si128(*(p_m_pObstructionRecord + 577));
              *v89.m128i_i32 = *v89.m128i_i32 + bTimeExpireda->m_fRadius;
              v90 = COERCE_FLOAT(_mm_cvtsi128_si32(v89));
              v91 = CBaseEntity::GetAbsOrigin(p_m_pObstructionRecord);
              v175 = v91->z;
              v92 = v91->x - bTimeExpireda->m_vLocation.x;
              v93 = v91->y - bTimeExpireda->m_vLocation.y;
              v94 = bTimeExpireda->m_vLocation.z;
              bTimeExpiredb = v92;
              v176 = v93;
              v174 = v94;
              v95 = *(this->m_LinearProjectiles.m_Memory.m_pMemory + v192);
              if ( v95->m_bCheckStartPosition )
              {
                v95->m_bCheckStartPosition = 0;
                v96 = fsqrt((v92 * v92) + (v93 * v93));
                if ( v90 > v96 )
                {
                  target_0.m_hEntity.m_Index = -1;
                  target_0.m_fDist = v96;
                  v97 = p_m_pObstructionRecord[1];
                  if ( v97 != 0 )
                    goto LABEL_86;
                  goto LABEL_89;
                }
              }
              v155 = CBaseEntity::GetAbsOrigin(p_m_pObstructionRecord);
              v156 = v155->x - vNewLocation.x;
              v157 = v155->y - vNewLocation.y;
              v158 = fsqrt((v156 * v156) + (v157 * v157));
              if ( v90 > v158 )
              {
                target_0.m_hEntity.m_Index = -1;
                target_0.m_fDist = v158;
                v97 = p_m_pObstructionRecord[1];
                if ( v97 != 0 )
                {
LABEL_86:
                  v98 = (*&v97->m_ObsType >> 15) - (LODWORD(v97->m_fYMax) & 1);
                  v99 = 0x7FFF;
                  if ( *&v97->m_ObsType != -1 )
                    v99 = *&v97->m_ObsType & 0x7FFF;
                  LOWORD(target_0.m_hEntity.m_Index) = v99 | target_0.m_hEntity.m_Index & 0x8000;
                  target_0.m_hEntity.m_Index = (v98 << 15) | target_0.m_hEntity.m_Index & 0x7FFF;
                }
LABEL_89:
                CUtlSortVector<target_t,CPotentialTargetLess,CUtlVector<target_t,CUtlMemory<target_t,int>>>::Insert(
                  &tr,
                  &target_0);
LABEL_66:
                v77 = this->m_LinearProjectiles.m_Memory.m_pMemory;
                v78 = v192;
LABEL_67:
                v74 = *(&v78->_vptr_IHandleEntity + v77);
                goto LABEL_68;
              }
              if ( ((((bTimeExpiredb * v182) + (v176 * flDista)) + ((v175 - v174) * position))
                  * (((v156 * v182) + (v157 * flDista)) + ((v155->z - vNewLocation.z) * position))) >= 0.0 )
                goto LABEL_66;
              target_0 = *&CBaseEntity::GetAbsOrigin(p_m_pObstructionRecord)->x;
              v160 = this->m_LinearProjectiles.m_Memory.m_pMemory;
              v198 = vNewLocation.z;
              v161 = CalcDistanceToLine(&target_0, *(&v192->_vptr_IHandleEntity + v160) + 1, &vNewLocation, 0);
              v162 = (this->m_LinearProjectiles.m_Memory.m_pMemory + v192);
              v74 = *v162;
              if ( (*(p_m_pObstructionRecord + 577) + (*v162)->m_fRadius) >= v161 )
              {
                v163 = p_m_pObstructionRecord[1];
                target.m_fDist = v161;
                target.m_hEntity.m_Index = -1;
                if ( v163 != 0 )
                {
                  v164 = (*&v163->m_ObsType >> 15) - (LODWORD(v163->m_fYMax) & 1);
                  v165 = 0x7FFF;
                  if ( *&v163->m_ObsType != -1 )
                    v165 = *&v163->m_ObsType & 0x7FFF;
                  LOWORD(target.m_hEntity.m_Index) = v165 | target.m_hEntity.m_Index & 0x8000;
                  target.m_hEntity.m_Index = (v164 << 15) | target.m_hEntity.m_Index & 0x7FFF;
                }
                CUtlSortVector<target_t,CPotentialTargetLess,CUtlVector<target_t,CUtlMemory<target_t,int>>>::Insert(
                  &tr,
                  &target);
                goto LABEL_66;
              }
            }
          }
        }
LABEL_68:
        ++v76;
        ++v75;
      }
      while ( intersectionResults.m_Size > v76 );
      if ( SLODWORD(tr.startpos.x) > 0 )
      {
        v141 = 0;
        src = 0;
        while ( 2 )
        {
          m_Size = v74->m_hAlreadyHit.m_Size;
          v145 = (*&tr.startpos.z + v141);
          v146 = v74->m_hAlreadyHit.m_Size;
          if ( m_Size == v74->m_hAlreadyHit.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&v74->m_hAlreadyHit.m_Memory, 1);
            v146 = v74->m_hAlreadyHit.m_Size;
          }
          v74->m_hAlreadyHit.m_Size = v146 + 1;
          v147 = &v74->m_hAlreadyHit.m_Memory.m_pMemory[m_Size];
          if ( v147 != 0 )
            v147->m_Index = *v145;
          v148 = this->m_LinearProjectiles.m_Memory.m_pMemory;
          v74 = *(&v192->_vptr_IHandleEntity + v148);
          m_Index = v74->m_hAbility.m_Index;
          if ( m_Index + 2 <= 1 )
            goto LABEL_141;
          v150 = v74->m_hAbility.m_Index & 0x7FFF;
          v151 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v150 >> 9)];
          if ( v151 == 0 )
          {
            LOBYTE(v142) = 0;
            goto LABEL_139;
          }
          v152 = &v151[v74->m_hAbility.m_Index & 0x1FF];
          if ( v152 != 0 && m_Index == v152->m_EHandle.m_Index )
          {
            v153 = CEntityHandle::operator CEntityInstance *(&v74->m_hAbility);
            v154 = *(v153->_vptr_IHandleEntity + 289);
            target_0.m_hEntity.m_Index = *(*&tr.startpos.z + v141);
            v142 = v154(v153, &target_0, &v74->m_vLocation);
            v148 = this->m_LinearProjectiles.m_Memory.m_pMemory;
            v74 = *(&v192->_vptr_IHandleEntity + v148);
            m_Index = v74->m_hAbility.m_Index;
            if ( m_Index + 2 > 1 )
            {
              v150 = v74->m_hAbility.m_Index & 0x7FFF;
              v151 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v150 >> 9)];
              if ( v151 != 0 )
                goto LABEL_137;
              goto LABEL_139;
            }
          }
          else
          {
            v142 = 0;
LABEL_137:
            v143 = &v151[v150 & 0x1FF];
            if ( v143 != 0 && m_Index == v143->m_EHandle.m_Index )
            {
              v169 = CEntityHandle::operator CEntityInstance *(&v74->m_hAbility);
              m_pExtraData = v74->m_pExtraData;
              v171 = *(v169->_vptr_IHandleEntity + 290);
              target_0.m_hEntity.m_Index = *(*&tr.startpos.z + v141);
              v142 |= v171(v169, &target_0, &v74->m_vLocation, m_pExtraData);
              v74 = *(this->m_LinearProjectiles.m_Memory.m_pMemory + v192);
            }
            else
            {
LABEL_139:
              v74 = *(&v192->_vptr_IHandleEntity + v148);
            }
          }
          if ( v142 != 0 )
          {
            v74->m_bMarkedForDeletion = 1;
            v74 = *(this->m_LinearProjectiles.m_Memory.m_pMemory + v192);
            break;
          }
LABEL_141:
          ++src;
          v141 += 8;
          if ( SLODWORD(tr.startpos.x) <= src )
            break;
          continue;
        }
      }
LABEL_100:
      if ( !v74->m_bMarkedForDeletion )
      {
        v110 = !CGridNavBase::IsInWorld(&g_GridNav, vNewLocation, 0.0);
        v111 = (this->m_LinearProjectiles.m_Memory.m_pMemory + v192);
        if ( v110 )
        {
          v112 = 1;
          vNewLocation = (*v111)[1];
        }
        else
        {
          v112 = 0;
        }
        v113 = *v111;
        v114 = v113[7].y;
        bTimeExpiredc = v114 != 0.0 && flNow >= v114;
        p_z = &v113[10].z;
        if ( CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &v113[10].z) != 0 )
        {
          v116 = CEntityHandle::operator CEntityInstance *(p_z);
          (*(v116->_vptr_IHandleEntity + 291))(v116, &vNewLocation);
          v117 = *(this->m_LinearProjectiles.m_Memory.m_pMemory + v192);
          if ( CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &v117->m_hAbility) != 0 )
          {
            v118 = CEntityHandle::operator CEntityInstance *(&v117->m_hAbility);
            (*(v118->_vptr_IHandleEntity + 292))(v118, v117->m_iHandle);
            v119 = *(this->m_LinearProjectiles.m_Memory.m_pMemory + v192);
            if ( CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &v119->m_hAbility) != 0 )
            {
              v120 = CEntityHandle::operator CEntityInstance *(&v119->m_hAbility);
              (*(v120->_vptr_IHandleEntity + 293))(v120, v119->m_iHandle, v119->m_pExtraData);
              v121 = *(this->m_LinearProjectiles.m_Memory.m_pMemory + v192);
              if ( CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &v121->m_hAbility) != 0 )
              {
                v122 = CEntityHandle::operator CEntityInstance *(&v121->m_hAbility);
                (*(v122->_vptr_IHandleEntity + 294))(v122, &vNewLocation, v121->m_pExtraData);
                v123 = *(this->m_LinearProjectiles.m_Memory.m_pMemory + v192);
                if ( CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &v123->m_hAbility) != 0 )
                {
                  v124 = CEntityHandle::operator CEntityInstance *(&v123->m_hAbility);
                  (*(v124->_vptr_IHandleEntity + 295))(v124, v123->m_iHandle, &vNewLocation, v123->m_pExtraData);
                }
              }
            }
          }
        }
        if ( dota_projectile_debug.m_pParent->m_Value.m_nValue != 0 )
        {
          v198 = vNewLocation.z + 100.0;
          target_0.m_fDist = vNewLocation.y + 0.0;
          *&target_0.m_hEntity.m_Index = vNewLocation.x + 0.0;
          NDebugOverlay::Line(&vNewLocation, &target_0, 0xFFu, 0xFFu, 0, 1, 1.0);
        }
        v125 = CEntityHandle::gm_pEntityList;
        (*(this->m_LinearProjectiles.m_Memory.m_pMemory + v192))->m_vLocation = vNewLocation;
        v126 = *(this->m_LinearProjectiles.m_Memory.m_pMemory + v192);
        if ( CConcreteEntityList::LookupEntity(v125, &v126->m_hVisionEntity) != 0 )
        {
          v127 = CEntityHandle::operator CEntityInstance *(&v126->m_hVisionEntity);
          CBaseEntity::SetAbsOrigin(v127, &v126->m_vLocation);
        }
        if ( v112 != 0 || bDestinationReached || bTimeExpiredc )
        {
          v128 = CEntityHandle::gm_pEntityList;
          (*(this->m_LinearProjectiles.m_Memory.m_pMemory + v192))->m_bMarkedForDeletion = 1;
          p_m_hAbility = &(*(this->m_LinearProjectiles.m_Memory.m_pMemory + v192))->m_hAbility;
          if ( CConcreteEntityList::LookupEntity(v128, p_m_hAbility) != 0 )
          {
            v130 = CEntityHandle::operator CEntityInstance *(p_m_hAbility);
            v131 = *(v130->_vptr_IHandleEntity + 289);
            target_0.m_hEntity.m_Index = -1;
            v131(v130, &target_0, &vNewLocation);
            v132 = *(this->m_LinearProjectiles.m_Memory.m_pMemory + v192);
            if ( CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &v132->m_hAbility) != 0 )
            {
              v133 = CEntityHandle::operator CEntityInstance *(&v132->m_hAbility);
              v134 = v132->m_pExtraData;
              v135 = *(v133->_vptr_IHandleEntity + 290);
              target_0.m_hEntity.m_Index = -1;
              v135(v133, &target_0, &vNewLocation, v134);
            }
          }
        }
        tr.startpos.x = 0.0;
        if ( (LODWORD(tr.endpos.z) & 0xC0000000) == 0 )
        {
          CUtlMemory<target_t,int>::Purge(&tr.startpos.z);
          if ( (LODWORD(tr.endpos.z) & 0xC0000000) == 0 )
            CUtlMemory<target_t,int>::Purge(&tr.startpos.z);
        }
        intersectionResults.m_Size = 0;
        v136 = intersectionResults.m_Memory.m_nGrowSize & 0xC0000000;
        if ( intersectionResults.m_Memory.m_nAllocationCount >= 0
          && intersectionResults.m_Memory.m_pMemory != &intersectionResults.m_Memory.m_FixedMemory )
        {
          if ( intersectionResults.m_Memory.m_pMemory != 0 && v136 == 0 )
            goto LABEL_126;
          goto LABEL_127;
        }
        if ( v136 != 0 )
          goto LABEL_127;
LABEL_172:
        CUtlMemory<IntersectionRecord_t,int>::Purge(&intersectionResults.m_Memory);
        goto LABEL_127;
      }
      tr.startpos.x = 0.0;
      if ( (LODWORD(tr.endpos.z) & 0xC0000000) == 0 )
      {
        CUtlMemory<target_t,int>::Purge(&tr.startpos.z);
        if ( (LODWORD(tr.endpos.z) & 0xC0000000) == 0 )
          CUtlMemory<target_t,int>::Purge(&tr.startpos.z);
      }
      intersectionResults.m_Size = 0;
      v159 = intersectionResults.m_Memory.m_nGrowSize & 0xC0000000;
      if ( intersectionResults.m_Memory.m_nAllocationCount < 0
        || intersectionResults.m_Memory.m_pMemory == &intersectionResults.m_Memory.m_FixedMemory )
      {
        if ( v159 != 0 )
          goto LABEL_127;
        goto LABEL_172;
      }
      if ( intersectionResults.m_Memory.m_pMemory != 0 && v159 == 0 )
LABEL_126:
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
LABEL_127:
      --v180;
      v192 = (v192 - 8);
      if ( v180 == -1 )
      {
        v137 = this->m_LinearProjectiles.m_Size - 1;
        if ( v137 >= 0 )
        {
          v138 = 8LL * v137;
          v139 = 8 * (v137 - v137) - 8;
          do
          {
            while ( 1 )
            {
              v140 = this->m_LinearProjectiles.m_Memory.m_pMemory[v138 / 8];
              if ( v140->m_bMarkedForDeletion )
                break;
              v138 -= 8LL;
              if ( v138 == v139 )
                return;
            }
            v138 -= 8LL;
            CDOTA_ProjectileManager::InternalDestroyLinearProjectile(this, v140->m_iHandle);
          }
          while ( v138 != v139 );
        }
        return;
      }
    }
  }
}


// CDOTA_ProjectileManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 1290, @0x0000000002669560, libserver.so)
void __cdecl CDOTA_ProjectileManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GetScriptDesc<CDOTA_ProjectileManager>  (line 1292, @0x00000000026822a0, libserver.so)  // inlines: AddParameterType, CUtlMemory, CUtlVector, CUtlVectorBase, Finalize, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CDOTA_ProjectileManager*, CDOTA_ProjectileManager, Vector, int>, ScriptDeduceFunctionSignature<CDOTA_ProjectileManager*, CDOTA_ProjectileManager, int, HSCRIPT__*>, ScriptDeduceFunctionSignature<CDOTA_ProjectileManager*, CDOTA_ProjectileManager, void, HSCRIPT__*>, ScriptDeduceFunctionSignature<CDOTA_ProjectileManager*, CDOTA_ProjectileManager, void, int>, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlVectorBase<ScriptFunctionBinding_t, CUtlMemory<ScriptFunctionBinding_t, int> >::AddToTail
// callers: CDOTAVScriptGameSystem::InstallScriptBindings
// strings: "!The projectile manager", "CDOTA_ProjectileManager", "Creates a tracking projectile", "CreateTrackingProjectile", "Script_CreateTrackingProjectile", "Creates a linear projectile and returns the projectile ID" (14 total)
// globals: g_pCDOTA_ProjectileManager_ScriptDesc, CMemberScriptBinding1<CDOTA_ProjectileManager *,void (CDOTA_ProjectileManager::*)(HSCRIPT__ *),void,HSCRIPT__ *>::Call(void *,void *,CVariantBase<CVariantDefaul, CDOTA_ProjectileManager::Script_CreateTrackingProjectile(HSCRIPT__ *), CMemberScriptBinding1<CDOTA_ProjectileManager *,int (CDOTA_ProjectileManager::*)(HSCRIPT__ *),int,HSCRIPT__ *>::Call(void *,void *,CVariantBase<CVariantDefaultA, CDOTA_ProjectileManager::Script_CreateLinearProjectile(HSCRIPT__ *), CMemberScriptBinding1<CDOTA_ProjectileManager *,void (CDOTA_ProjectileManager::*)(int),void,int>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,in, CDOTA_ProjectileManager::DestroyLinearProjectile(int), CDOTA_ProjectileManager::Script_ProjectileDodge(HSCRIPT__ *) (10 total)
ScriptClassDesc_t *__fastcall GetScriptDesc<CDOTA_ProjectileManager>(
        CDOTA_ProjectileManager *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // r12
  CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int> > *p_m_FunctionBindings; // rbx
  __int64 v4; // rax
  char v5; // dl
  __int64 v6; // rcx
  int v7; // edx
  char v8; // cl
  char v9; // di
  __int64 v10; // rax
  char v11; // dl
  __int64 v12; // rcx
  int v13; // edx
  char v14; // cl
  char v15; // di
  __int64 v16; // rax
  char v17; // dl
  __int64 v18; // rcx
  int v19; // edx
  char v20; // cl
  char v21; // di
  __int64 v22; // rax
  char v23; // dl
  __int64 v24; // rcx
  int v25; // edx
  char v26; // cl
  char v27; // di
  __int64 v28; // rax
  char v29; // dl
  __int64 v30; // rcx
  int v31; // edx
  char v32; // cl
  char v33; // di

  result = g_pCDOTA_ProjectileManager_ScriptDesc;
  if ( g_pCDOTA_ProjectileManager_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    p_m_FunctionBindings = &v2->m_FunctionBindings;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->m_pfnConstruct = 0;
    v2->m_pfnDestruct = 0;
    v2->pHelper = 0;
    g_pCDOTA_ProjectileManager_ScriptDesc = v2;
    v2->m_pszDescription = "!The projectile manager";
    v2->m_pszScriptName = "ProjectileManager";
    v2->m_pszClassname = "CDOTA_ProjectileManager";
    v4 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(&v2->m_FunctionBindings)];
    v5 = *(v4 + 26);
    *(v4 + 16) = "Creates a tracking projectile";
    *v4 = "CreateTrackingProjectile";
    *(v4 + 8) = "Script_CreateTrackingProjectile";
    *(v4 + 24) = 0;
    v6 = v5++;
    *(v4 + v6 + 27) = 31;
    *(v4 + 26) = v5;
    v7 = v5 - 1;
    *(v4 + 25) = 0;
    if ( v7 >= 0 && *(v4 + v7 + 27) == 32 )
    {
      v8 = 1;
      do
      {
        --v7;
        v9 = v8;
        if ( v7 == -1 )
        {
          *(v4 + 25) = v8;
          goto LABEL_8;
        }
        ++v8;
      }
      while ( *(v4 + v7 + 27) == 32 );
      *(v4 + 25) = v9;
    }
LABEL_8:
    *(v4 + 64) = 1;
    *(v4 + 48) = CMemberScriptBinding1<CDOTA_ProjectileManager *,void (CDOTA_ProjectileManager::*)(HSCRIPT__ *),void,HSCRIPT__ *>::Call;
    *(v4 + 56) = CDOTA_ProjectileManager::Script_CreateTrackingProjectile;
    v10 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v11 = *(v10 + 26);
    *(v10 + 16) = "Creates a linear projectile and returns the projectile ID";
    *v10 = "CreateLinearProjectile";
    *(v10 + 8) = "Script_CreateLinearProjectile";
    *(v10 + 24) = 5;
    v12 = v11++;
    *(v10 + v12 + 27) = 31;
    *(v10 + 26) = v11;
    v13 = v11 - 1;
    *(v10 + 25) = 0;
    if ( v13 >= 0 && *(v10 + v13 + 27) == 32 )
    {
      v14 = 1;
      do
      {
        --v13;
        v15 = v14;
        if ( v13 == -1 )
        {
          *(v10 + 25) = v14;
          goto LABEL_14;
        }
        ++v14;
      }
      while ( *(v10 + v13 + 27) == 32 );
      *(v10 + 25) = v15;
    }
LABEL_14:
    *(v10 + 64) = 1;
    *(v10 + 48) = CMemberScriptBinding1<CDOTA_ProjectileManager *,int (CDOTA_ProjectileManager::*)(HSCRIPT__ *),int,HSCRIPT__ *>::Call;
    *(v10 + 56) = CDOTA_ProjectileManager::Script_CreateLinearProjectile;
    v16 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v17 = *(v16 + 26);
    *(v16 + 16) = "Destroys the linear projectile matching the argument ID";
    *v16 = "DestroyLinearProjectile";
    *(v16 + 8) = "DestroyLinearProjectile";
    *(v16 + 24) = 0;
    v18 = v17++;
    *(v16 + v18 + 27) = 5;
    *(v16 + 26) = v17;
    v19 = v17 - 1;
    *(v16 + 25) = 0;
    if ( v19 >= 0 && *(v16 + v19 + 27) == 32 )
    {
      v20 = 1;
      do
      {
        --v19;
        v21 = v20;
        if ( v19 == -1 )
        {
          *(v16 + 25) = v20;
          goto LABEL_20;
        }
        ++v20;
      }
      while ( *(v16 + v19 + 27) == 32 );
      *(v16 + 25) = v21;
    }
LABEL_20:
    *(v16 + 64) = 1;
    *(v16 + 48) = CMemberScriptBinding1<CDOTA_ProjectileManager *,void (CDOTA_ProjectileManager::*)(int),void,int>::Call;
    *(v16 + 56) = CDOTA_ProjectileManager::DestroyLinearProjectile;
    v22 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v23 = *(v22 + 26);
    *(v22 + 16) = "Makes the specified unit dodge projectiles";
    *v22 = "ProjectileDodge";
    *(v22 + 8) = "Script_ProjectileDodge";
    *(v22 + 24) = 0;
    v24 = v23++;
    *(v22 + v24 + 27) = 31;
    *(v22 + 26) = v23;
    v25 = v23 - 1;
    *(v22 + 25) = 0;
    if ( v25 >= 0 && *(v22 + v25 + 27) == 32 )
    {
      v26 = 1;
      do
      {
        --v25;
        v27 = v26;
        if ( v25 == -1 )
        {
          *(v22 + 25) = v26;
          goto LABEL_26;
        }
        ++v26;
      }
      while ( *(v22 + v25 + 27) == 32 );
      *(v22 + 25) = v27;
    }
LABEL_26:
    *(v22 + 64) = 1;
    *(v22 + 48) = CMemberScriptBinding1<CDOTA_ProjectileManager *,void (CDOTA_ProjectileManager::*)(HSCRIPT__ *),void,HSCRIPT__ *>::Call;
    *(v22 + 56) = CDOTA_ProjectileManager::Script_ProjectileDodge;
    v28 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v29 = *(v28 + 26);
    *(v28 + 16) = "Returns a vector representing the current velocity of the projectile.";
    *v28 = "GetLinearProjectileVelocity";
    *(v28 + 8) = "Script_GetLinearProjectileVelocity";
    *(v28 + 24) = 3;
    v30 = v29++;
    *(v28 + v30 + 27) = 5;
    *(v28 + 26) = v29;
    v31 = v29 - 1;
    *(v28 + 25) = 0;
    if ( v31 >= 0 && *(v28 + v31 + 27) == 32 )
    {
      v32 = 1;
      do
      {
        --v31;
        v33 = v32;
        if ( v31 == -1 )
        {
          *(v28 + 25) = v32;
          goto LABEL_32;
        }
        ++v32;
      }
      while ( *(v28 + v31 + 27) == 32 );
      *(v28 + 25) = v33;
    }
LABEL_32:
    *(v28 + 64) = 1;
    *(v28 + 48) = CMemberScriptBinding1<CDOTA_ProjectileManager *,Vector (CDOTA_ProjectileManager::*)(int),Vector,int>::Call;
    *(v28 + 56) = CDOTA_ProjectileManager::Script_GetLinearProjectileVelocity;
    return v2;
  }
  return result;
}


// CDOTA_ProjectileManager::Script_CreateTrackingProjectile  (line 1300, @0x0000000002695e20, libserver.so)  // inlines: AssignTo, CEntityHandle, CHandle, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CVariantBase, Color, Float, Free, Get, GetFromScriptTable<CUtlString>, GetFromScriptTable<Vector>, GetInstance, Purge, RemoveAll, SetBool, String, TempString, ToCStr, ToDOTAAbility, ToString, V_strlen, V_strncpy<unsigned int>, operator float, operator=, sTrackingProjectileCreateInfo, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: GetHScriptEntityFromScriptTable, CEntityHandle::operator CEntityInstance*, __dynamic_cast, CUtlVectorBase<char, CUtlMemory<char, int> >::SetCount, V_snprintf, CUtlString::Set, CUtlMemory<char, int>::Purge, CUtlString::Get, AllocPooledString, GetFromScriptTable<int>, VariantFieldTypeName, Warning (30 total)
// strings: "%g %g %g %g", "vSourceLoc", "No free conversion of %s variant to Vector right now\n", "iSourceAttachment", "bProvidesVision", "iVisionTeamNumber" (18 total)
// globals: jpt_2696063, jpt_2696553, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CDOTA_ProjectileManager::Script_CreateTrackingProjectile(
        CDOTA_ProjectileManager *const this,
        HSCRIPT hInfo)
{
  CEntityInstance *v3; // rax
  CDOTABaseAbility *v4; // rax
  int v5; // esi
  const char *v6; // rax
  const char *v7; // rax
  const char *v8; // rax
  int v9; // r12d
  unsigned int v10; // r13d
  float v11; // xmm1_4
  const char *v12; // rsi
  const char *v13; // rax
  double m_float; // xmm0_8
  const char *v15; // rcx
  const char *v16; // rsi
  const char *m_uint64; // rsi
  const char *v18; // rax
  const char *v19; // rax
  const char *v20; // rcx
  char *v21; // rax
  char *value; // [rsp+30h] [rbp-160h]
  unsigned __int8 valuea; // [rsp+30h] [rbp-160h]
  int v25; // [rsp+44h] [rbp-14Ch]
  HSCRIPT hExtraData; // [rsp+48h] [rbp-148h]
  HSCRIPT hExtraDataa; // [rsp+48h] [rbp-148h]
  EHANDLE hAbility; // [rsp+50h] [rbp-140h] BYREF
  CUtlString sEffectName; // [rsp+60h] [rbp-130h] BYREF
  const char *v30; // [rsp+70h] [rbp-120h] BYREF
  ScriptVariant_t table; // [rsp+80h] [rbp-110h] BYREF
  char *s; // [rsp+90h] [rbp-100h] BYREF
  int16 v33; // [rsp+98h] [rbp-F8h]
  __int16 v34; // [rsp+9Ah] [rbp-F6h]
  ScriptVariant_t vKey; // [rsp+A0h] [rbp-F0h] BYREF
  ScriptVariant_t vValue; // [rsp+B0h] [rbp-E0h] BYREF
  int v37; // [rsp+C0h] [rbp-D0h]
  int v38; // [rsp+C4h] [rbp-CCh]
  KeyValues kv; // [rsp+D0h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+F0h] [rbp-A0h] BYREF
  unsigned __int64 v41; // [rsp+158h] [rbp-38h]

  info.bProvidesVision = 0;
  v41 = __readfsqword(0x28u);
  info.hTarget.m_Index = -1;
  info.hSource.m_Index = -1;
  info.colorGemColor = 0;
  info.bDrawsOnMinimap = 0;
  memset(&info, 0, 28);
  info.vSourceLoc = vec3_origin;
  info.iSourceAttachment = 1;
  info.iVisionTeamNumber = -1;
  info.iVisionRadius = 0;
  info.bDodgeable = 1;
  info.bIsAttack = 0;
  info.bVisibleToEnemies = 1;
  info.pKVExtraData = 0;
  info.bReplaceExisting = 0;
  info.flExpireTime = 0.0;
  info.flMaxImpactTime = 0.0;
  info.bServerOnly = 0;
  hAbility.m_Index = -1;
  GetHScriptEntityFromScriptTable(hInfo, "Ability", &hAbility);
  v3 = CEntityHandle::operator CEntityInstance *(&hAbility);
  if ( v3 != 0 )
    v4 = __dynamic_cast(v3, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  else
    v4 = 0;
  info.pAbility = v4;
  GetHScriptEntityFromScriptTable(hInfo, "Source", &info.hSource);
  GetHScriptEntityFromScriptTable(hInfo, "Target", &info.hTarget);
  v33 = 0;
  v34 = 0;
  sEffectName.m_pString = 0;
  s = 0;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hInfo, "EffectName", &s) != 0 )
  {
    v5 = 256;
    if ( v33 == 30 )
    {
      if ( s != 0 )
        v5 = strlen(s) + 1;
      else
        v5 = 1;
    }
    vValue.m_int = 0;
    *&vValue.m_type = 0;
    v37 = 0;
    v38 = 0;
    CUtlVectorBase<char,CUtlMemory<char,int>>::SetCount(&vValue, v5);
    hExtraData = *&vValue.m_type;
    switch ( v33 )
    {
      case 0:
        goto LABEL_74;
      case 1:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%g", *&s);
        goto LABEL_7;
      case 3:
      case 39:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%g %g %g", *s, *(s + 1), *(s + 2));
        goto LABEL_7;
      case 4:
      case 27:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%g %g %g %g", *s, *(s + 1), *(s + 2), *(s + 3));
        goto LABEL_7;
      case 5:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%d", s);
        goto LABEL_7;
      case 6:
        v20 = "true";
        if ( s == 0 )
          v20 = "false";
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%s", v20);
        goto LABEL_7;
      case 8:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%c", s);
        goto LABEL_7;
      case 9:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%d %d %d %d", s, BYTE1(s), BYTE2(s), s >> 24);
        goto LABEL_7;
      case 25:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%g %g", *s, *(s + 1));
        goto LABEL_7;
      case 26:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%lld", s);
        goto LABEL_7;
      case 30:
        v21 = "(null)";
        if ( s != 0 )
          v21 = s;
        _V_strncpy(*&vValue.m_type, v21, vValue.m_uint);
        goto LABEL_7;
      case 33:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%llu", s);
        goto LABEL_7;
      case 34:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%g", *&s);
        goto LABEL_7;
      case 37:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%u", s);
LABEL_7:
        CUtlString::Set(&sEffectName, *&vValue.m_type);
        break;
      default:
        v19 = VariantFieldTypeName(v33);
        Warning("No conversion from %s to string at the moment!\n", v19);
LABEL_74:
        *hExtraData = 0;
        CUtlString::Clear(&sEffectName);
        break;
    }
    vValue.m_int = 0;
    if ( (v38 & 0xC0000000) == 0 )
    {
      CUtlMemory<char,int>::Purge(&vValue.m_type);
      if ( (v38 & 0xC0000000) == 0 )
        CUtlMemory<char,int>::Purge(&vValue.m_type);
    }
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &s);
  if ( (v34 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, s);
  v6 = CUtlString::Get(&sEffectName);
  AllocPooledString(&v30, v6);
  v7 = "";
  if ( v30 != 0 )
    v7 = v30;
  info.pszEffectName = v7;
  GetFromScriptTable<int>(hInfo, "iMoveSpeed", &info.iMoveSpeed);
  vKey.m_type = 0;
  vKey.m_flags = 0;
  vKey.m_uint64 = 0;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hInfo, "vSourceLoc", &vKey) != 0 )
  {
    if ( vKey.m_type == 3 )
    {
LABEL_27:
      info.vSourceLoc = *vKey.m_uint64;
      goto LABEL_21;
    }
    if ( vKey.m_type <= 3 )
    {
      if ( vKey.m_type != 0 )
        goto LABEL_20;
LABEL_71:
      info.vSourceLoc = vec3_origin;
      goto LABEL_21;
    }
    if ( vKey.m_type != 30 )
    {
      if ( vKey.m_type != 39 )
      {
LABEL_20:
        v8 = VariantFieldTypeName(vKey.m_type);
        Warning("No free conversion of %s variant to Vector right now\n", v8);
        goto LABEL_21;
      }
      goto LABEL_27;
    }
    if ( V_sscanf(vKey.m_uint64, "%g %g %g", &info.vSourceLoc, &info.vSourceLoc.y, &info.vSourceLoc.z) != 3 )
      goto LABEL_71;
  }
LABEL_21:
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vKey);
  if ( (vKey.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, vKey.m_uint64);
  GetFromScriptTable<int>(hInfo, "iSourceAttachment", &info.iSourceAttachment);
  GetFromScriptTable<bool>(hInfo, "bProvidesVision", &info.bProvidesVision);
  GetFromScriptTable<int>(hInfo, "iVisionTeamNumber", &info.iVisionTeamNumber);
  GetFromScriptTable<int>(hInfo, "iVisionRadius", &info.iVisionRadius);
  GetFromScriptTable<bool>(hInfo, "bDrawsOnMinimap", &info.bDrawsOnMinimap);
  GetFromScriptTable<bool>(hInfo, "bDodgeable", &info.bDodgeable);
  GetFromScriptTable<bool>(hInfo, "bIsAttack", &info.bIsAttack);
  GetFromScriptTable<bool>(hInfo, "bVisibleToEnemies", &info.bVisibleToEnemies);
  GetFromScriptTable<bool>(hInfo, "bReplaceExisting", &info.bReplaceExisting);
  GetFromScriptTable<float>(hInfo, "flExpireTime", &info.flExpireTime);
  table.m_type = 0;
  table.m_flags = 0;
  table.m_uint64 = 0;
  KeyValues::KeyValues(&kv, "extradata");
  (*(*g_pScriptVM + 312LL))(g_pScriptVM, hInfo, "ExtraData");
  if ( table.m_type == 31 )
  {
    vKey.m_uint64 = 0;
    vValue.m_uint64 = 0;
    hExtraDataa = table.m_uint64;
    vKey.m_type = 0;
    vKey.m_flags = 0;
    vValue.m_type = 0;
    vValue.m_flags = 0;
    v25 = (*(*g_pScriptVM + 280LL))(g_pScriptVM, table.m_uint64);
    if ( v25 <= 0 )
    {
LABEL_66:
      info.pKVExtraData = &kv;
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &table);
      CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
      CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
      goto LABEL_24;
    }
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      v10 = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hExtraDataa, v10, &vKey, &vValue);
      if ( vValue.m_type == 30 )
      {
        value = vValue.m_uint64;
      }
      else
      {
        if ( vValue.m_type != 2 )
        {
          if ( vValue.m_type == 34 )
          {
            if ( vKey.m_type == 30 )
            {
              m_uint64 = vKey.m_uint64;
            }
            else
            {
              CVariantBase<CVariantDefaultAllocator>::AssignTo(
                &vKey,
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                0x200u);
              m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            }
            KeyValues::SetFloat(&kv, m_uint64, v11);
          }
          else if ( vValue.m_type == 6 )
          {
            valuea = vValue.m_char;
            if ( vKey.m_type == 30 )
            {
              v16 = vKey.m_uint64;
            }
            else
            {
              CVariantBase<CVariantDefaultAllocator>::AssignTo(
                &vKey,
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                0x200u);
              v16 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            }
            KeyValues::SetInt(&kv, v16, valuea);
          }
          goto LABEL_33;
        }
        v18 = VariantFieldTypeName(2);
        Warning("No conversion from %s to string at the moment!\n", v18);
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        value = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      }
      if ( vKey.m_type == 30 )
      {
        v12 = vKey.m_uint64;
      }
      else
      {
        switch ( vKey.m_type )
        {
          case 0:
            goto LABEL_44;
          case 1:
            m_float = vKey.m_float;
            goto LABEL_46;
          case 3:
          case 0x27:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4),
              *(vKey.m_uint64 + 8));
            break;
          case 4:
          case 0x1B:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4),
              *(vKey.m_uint64 + 8),
              *(vKey.m_uint64 + 12));
            break;
          case 5:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vKey.m_int);
            break;
          case 6:
            v15 = "true";
            if ( vKey.m_char == 0 )
              v15 = "false";
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v15);
            break;
          case 8:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vKey.m_char);
            break;
          case 9:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%d %d %d %d",
              vKey.m_char,
              BYTE1(vKey.m_int),
              BYTE2(vKey.m_uint),
              HIBYTE(vKey.m_float));
            break;
          case 0x19:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4));
            break;
          case 0x1A:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%lld", vKey.m_uint64);
            break;
          case 0x21:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", vKey.m_uint64);
            break;
          case 0x22:
            m_float = vKey.m_float64;
LABEL_46:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
            break;
          case 0x25:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
            break;
          default:
            v13 = VariantFieldTypeName(vKey.m_type);
            Warning("No conversion from %s to string at the moment!\n", v13);
LABEL_44:
            CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
            break;
        }
        v12 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      }
      KeyValues::SetString(&kv, v12, value);
LABEL_33:
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vValue);
      if ( ++v9 == v25 )
        goto LABEL_66;
    }
  }
LABEL_24:
  CDOTA_ProjectileManager::CreateTrackingProjectile(this, &info);
  KeyValues::~KeyValues(&kv);
  CVariantBase<CVariantDefaultAllocator>::Free(&table);
  if ( sEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&sEffectName);
}


// CDOTA_ProjectileManager::Script_CreateLinearProjectile  (line 1369, @0x0000000002694c30, libserver.so)  // inlines: AssignTo, CEntityHandle, CHandle, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CVariantBase, Float, Free, Get, GetFromScriptTable<CUtlString>, GetFromScriptTable<Vector>, GetInstance, Purge, RemoveAll, SetBool, String, TempString, ToCStr, ToDOTAAbility, ToString, V_strlen, V_strncpy<unsigned int>, operator float, operator=, sLinearProjectileCreateInfo, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: CUtlVectorBase<char, CUtlMemory<char, int> >::SetCount, V_snprintf, CUtlString::Set, CUtlMemory<char, int>::Purge, CUtlString::Get, AllocPooledString, GetHScriptEntityFromScriptTable, CEntityHandle::operator CEntityInstance*, __dynamic_cast, VariantFieldTypeName, Warning, GetFromScriptTable<float> (30 total)
// strings: "%g %g %g %g", "No free conversion of %s variant to Vector right now\n", "fDistance", "fStartRadius", "fEndRadius", "bHasFrontalCone" (23 total)
// globals: jpt_2694E34, jpt_26955DB, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
int __fastcall CDOTA_ProjectileManager::Script_CreateLinearProjectile(
        CDOTA_ProjectileManager *const this,
        HSCRIPT hInfo)
{
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  int v5; // esi
  const char *v6; // rax
  const char *v7; // rax
  CEntityInstance *v8; // rax
  CDOTABaseAbility *v9; // rax
  const char *v10; // rax
  const char *v11; // rax
  const char *v12; // rax
  int v13; // ebx
  int v15; // r12d
  unsigned int v16; // r13d
  float v17; // xmm1_4
  const char *v18; // rsi
  const char *v19; // rax
  double m_float; // xmm0_8
  const char *v21; // rcx
  const char *v22; // rsi
  const char *m_uint64; // rsi
  const char *v24; // rax
  const char *v25; // rax
  const char *v26; // rcx
  char *v27; // rax
  char *value; // [rsp+28h] [rbp-198h]
  unsigned __int8 valuea; // [rsp+28h] [rbp-198h]
  int v31; // [rsp+3Ch] [rbp-184h]
  HSCRIPT hExtraData; // [rsp+40h] [rbp-180h]
  CVariantBase<CVariantDefaultAllocator> *v33; // [rsp+48h] [rbp-178h]
  EHANDLE hAbility; // [rsp+50h] [rbp-170h] BYREF
  CUtlString sEffectName; // [rsp+60h] [rbp-160h] BYREF
  const char *v36; // [rsp+70h] [rbp-150h] BYREF
  ScriptVariant_t table; // [rsp+80h] [rbp-140h] BYREF
  char *s; // [rsp+90h] [rbp-130h] BYREF
  int16 v39; // [rsp+98h] [rbp-128h]
  __int16 v40; // [rsp+9Ah] [rbp-126h]
  Vector *v41; // [rsp+A0h] [rbp-120h] BYREF
  int16 v42; // [rsp+A8h] [rbp-118h]
  __int16 v43; // [rsp+AAh] [rbp-116h]
  Vector *v44; // [rsp+B0h] [rbp-110h] BYREF
  int16 v45; // [rsp+B8h] [rbp-108h]
  __int16 v46; // [rsp+BAh] [rbp-106h]
  ScriptVariant_t vKey; // [rsp+C0h] [rbp-100h] BYREF
  ScriptVariant_t vValue; // [rsp+D0h] [rbp-F0h] BYREF
  int v49; // [rsp+E0h] [rbp-E0h]
  int v50; // [rsp+E4h] [rbp-DCh]
  sLinearProjectileCreateInfo info; // [rsp+F0h] [rbp-D0h] BYREF
  KeyValues kv; // [rsp+170h] [rbp-50h] BYREF
  unsigned __int64 v53; // [rsp+188h] [rbp-38h]

  v53 = __readfsqword(0x28u);
  info.bHasFrontalCone = 1;
  info.hSource.m_Index = -1;
  info.pszEffectName = 0;
  info.pAbility = 0;
  info.bCheckStartPosition = 0;
  y = vec3_origin.y;
  info.fDistance = 0.0;
  z = vec3_origin.z;
  info.vSpawnOrigin.x = vec3_origin.x;
  info.vSpawnOrigin.y = y;
  info.vSpawnOrigin.z = z;
  info.vVelocity.x = vec3_origin.x;
  info.vVelocity.y = y;
  info.vVelocity.z = z;
  info.vAcceleration.x = vec3_origin.x;
  info.vAcceleration.y = y;
  info.vAcceleration.z = z;
  info.fStartRadius = 0.0;
  info.fEndRadius = 0.0;
  info.iUnitTargetTeam = 0;
  info.iUnitTargetType = 0;
  info.iUnitTargetFlags = 0;
  info.bProvidesVision = 0;
  v39 = 0;
  info.iVisionTeamNumber = -1;
  info.iVisionRadius = -1;
  info.bDrawsOnMinimap = 0;
  info.bVisibleToEnemies = 1;
  info.bIgnoreSource = 0;
  info.bStickyFoWReveal = 0;
  info.pKVExtraData = 0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  sEffectName.m_pString = 0;
  v40 = 0;
  s = 0;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hInfo, "EffectName", &s) != 0 )
  {
    v5 = 256;
    if ( v39 == 30 )
    {
      if ( s != 0 )
        v5 = strlen(s) + 1;
      else
        v5 = 1;
    }
    vValue.m_int = 0;
    *&vValue.m_type = 0;
    v49 = 0;
    v50 = 0;
    CUtlVectorBase<char,CUtlMemory<char,int>>::SetCount(&vValue, v5);
    v33 = *&vValue.m_type;
    switch ( v39 )
    {
      case 0:
        goto LABEL_96;
      case 1:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%g", *&s);
        goto LABEL_5;
      case 3:
      case 39:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%g %g %g", *s, *(s + 1), *(s + 2));
        goto LABEL_5;
      case 4:
      case 27:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%g %g %g %g", *s, *(s + 1), *(s + 2), *(s + 3));
        goto LABEL_5;
      case 5:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%d", s);
        goto LABEL_5;
      case 6:
        v26 = "true";
        if ( s == 0 )
          v26 = "false";
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%s", v26);
        goto LABEL_5;
      case 8:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%c", s);
        goto LABEL_5;
      case 9:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%d %d %d %d", s, BYTE1(s), BYTE2(s), s >> 24);
        goto LABEL_5;
      case 25:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%g %g", *s, *(s + 1));
        goto LABEL_5;
      case 26:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%lld", s);
        goto LABEL_5;
      case 30:
        v27 = "(null)";
        if ( s != 0 )
          v27 = s;
        _V_strncpy(*&vValue.m_type, v27, vValue.m_uint);
        goto LABEL_5;
      case 33:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%llu", s);
        goto LABEL_5;
      case 34:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%g", *&s);
        goto LABEL_5;
      case 37:
        V_snprintf(*&vValue.m_type, vValue.m_uint, "%u", s);
LABEL_5:
        CUtlString::Set(&sEffectName, *&vValue.m_type);
        break;
      default:
        v25 = VariantFieldTypeName(v39);
        Warning("No conversion from %s to string at the moment!\n", v25);
LABEL_96:
        v33->m_char = 0;
        CUtlString::Clear(&sEffectName);
        break;
    }
    vValue.m_int = 0;
    if ( (v50 & 0xC0000000) == 0 )
    {
      CUtlMemory<char,int>::Purge(&vValue.m_type);
      if ( (v50 & 0xC0000000) == 0 )
        CUtlMemory<char,int>::Purge(&vValue.m_type);
    }
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &s);
  if ( (v40 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, s);
  v6 = CUtlString::Get(&sEffectName);
  AllocPooledString(&v36, v6);
  v7 = "";
  hAbility.m_Index = -1;
  if ( v36 != 0 )
    v7 = v36;
  info.pszEffectName = v7;
  GetHScriptEntityFromScriptTable(hInfo, "Ability", &hAbility);
  v8 = CEntityHandle::operator CEntityInstance *(&hAbility);
  if ( v8 != 0 )
    v9 = __dynamic_cast(v8, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  else
    v9 = 0;
  info.pAbility = v9;
  GetHScriptEntityFromScriptTable(hInfo, "Source", &info.hSource);
  v43 = 0;
  v42 = 0;
  v41 = 0;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hInfo, "vSpawnOrigin", &v41) != 0 )
  {
    if ( v42 == 3 )
    {
LABEL_45:
      info.vSpawnOrigin = *v41;
      goto LABEL_21;
    }
    if ( v42 <= 3 )
    {
      if ( v42 != 0 )
        goto LABEL_20;
LABEL_91:
      info.vSpawnOrigin = vec3_origin;
      goto LABEL_21;
    }
    if ( v42 != 30 )
    {
      if ( v42 != 39 )
      {
LABEL_20:
        v10 = VariantFieldTypeName(v42);
        Warning("No free conversion of %s variant to Vector right now\n", v10);
        goto LABEL_21;
      }
      goto LABEL_45;
    }
    if ( V_sscanf(v41, "%g %g %g", &info.vSpawnOrigin, &info.vSpawnOrigin.y, &info.vSpawnOrigin.z) != 3 )
      goto LABEL_91;
  }
LABEL_21:
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &v41);
  if ( (v43 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v41);
  v45 = 0;
  v46 = 0;
  v44 = 0;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hInfo, "vVelocity", &v44) != 0 )
  {
    if ( v45 == 3 )
    {
LABEL_43:
      info.vVelocity = *v44;
      goto LABEL_29;
    }
    if ( v45 <= 3 )
    {
      if ( v45 != 0 )
        goto LABEL_28;
LABEL_89:
      info.vVelocity = vec3_origin;
      goto LABEL_29;
    }
    if ( v45 != 30 )
    {
      if ( v45 != 39 )
      {
LABEL_28:
        v11 = VariantFieldTypeName(v45);
        Warning("No free conversion of %s variant to Vector right now\n", v11);
        goto LABEL_29;
      }
      goto LABEL_43;
    }
    if ( V_sscanf(v44, "%g %g %g", &info.vVelocity, &info.vVelocity.y, &info.vVelocity.z) != 3 )
      goto LABEL_89;
  }
LABEL_29:
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &v44);
  if ( (v46 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v44);
  vKey.m_type = 0;
  vKey.m_flags = 0;
  vKey.m_uint64 = 0;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hInfo, "vAcceleration") != 0 )
  {
    if ( vKey.m_type == 3 )
    {
LABEL_44:
      info.vAcceleration = *vKey.m_uint64;
      goto LABEL_37;
    }
    if ( vKey.m_type <= 3 )
    {
      if ( vKey.m_type != 0 )
        goto LABEL_36;
LABEL_93:
      info.vAcceleration = vec3_origin;
      goto LABEL_37;
    }
    if ( vKey.m_type != 30 )
    {
      if ( vKey.m_type != 39 )
      {
LABEL_36:
        v12 = VariantFieldTypeName(vKey.m_type);
        Warning("No free conversion of %s variant to Vector right now\n", v12);
        goto LABEL_37;
      }
      goto LABEL_44;
    }
    if ( V_sscanf(vKey.m_uint64, "%g %g %g", &info.vAcceleration, &info.vAcceleration.y, &info.vAcceleration.z) != 3 )
      goto LABEL_93;
  }
LABEL_37:
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vKey);
  if ( (vKey.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, vKey.m_uint64);
  GetFromScriptTable<float>(hInfo, "fDistance", &info.fDistance);
  GetFromScriptTable<float>(hInfo, "fStartRadius", &info.fStartRadius);
  GetFromScriptTable<float>(hInfo, "fEndRadius", &info.fEndRadius);
  GetFromScriptTable<bool>(hInfo, "bHasFrontalCone", &info.bHasFrontalCone);
  GetFromScriptTable<int>(hInfo, "iUnitTargetTeam", &info.iUnitTargetTeam);
  GetFromScriptTable<int>(hInfo, "iUnitTargetType", &info.iUnitTargetType);
  GetFromScriptTable<int>(hInfo, "iUnitTargetFlags", &info.iUnitTargetFlags);
  GetFromScriptTable<bool>(hInfo, "bProvidesVision", &info.bProvidesVision);
  GetFromScriptTable<int>(hInfo, "iVisionTeamNumber", &info.iVisionTeamNumber);
  GetFromScriptTable<int>(hInfo, "iVisionRadius", &info.iVisionRadius);
  GetFromScriptTable<bool>(hInfo, "bDrawsOnMinimap", &info.bDrawsOnMinimap);
  GetFromScriptTable<bool>(hInfo, "bVisibleToEnemies", &info.bVisibleToEnemies);
  GetFromScriptTable<bool>(hInfo, "bIgnoreSource", &info.bIgnoreSource);
  GetFromScriptTable<float>(hInfo, "fExpireTime", &info.fExpireTime);
  GetFromScriptTable<float>(hInfo, "fMaxSpeed", &info.fMaxSpeed);
  GetFromScriptTable<bool>(hInfo, "bStickyFoWReveal", &info.bStickyFoWReveal);
  KeyValues::KeyValues(&kv, "extradata");
  table.m_type = 0;
  table.m_flags = 0;
  table.m_uint64 = 0;
  (*(*g_pScriptVM + 312LL))(g_pScriptVM, hInfo, "ExtraData");
  if ( table.m_type == 31 )
  {
    vValue.m_flags = 0;
    vKey.m_uint64 = 0;
    vValue.m_uint64 = 0;
    hExtraData = table.m_uint64;
    vKey.m_type = 0;
    vKey.m_flags = 0;
    vValue.m_type = 0;
    v31 = (*(*g_pScriptVM + 280LL))(g_pScriptVM, table.m_uint64);
    if ( v31 <= 0 )
    {
LABEL_84:
      info.pKVExtraData = &kv;
      (*(*g_pScriptVM + 136LL))(g_pScriptVM, table.m_uint64);
      CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
      CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
      goto LABEL_40;
    }
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      v16 = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hExtraData, v16, &vKey, &vValue);
      if ( vValue.m_type == 30 )
      {
        value = vValue.m_uint64;
      }
      else
      {
        if ( vValue.m_type != 2 )
        {
          if ( vValue.m_type == 34 )
          {
            if ( vKey.m_type == 30 )
            {
              m_uint64 = vKey.m_uint64;
            }
            else
            {
              CVariantBase<CVariantDefaultAllocator>::AssignTo(
                &vKey,
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                0x200u);
              m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            }
            KeyValues::SetFloat(&kv, m_uint64, v17);
          }
          else if ( vValue.m_type == 6 )
          {
            valuea = vValue.m_char;
            if ( vKey.m_type == 30 )
            {
              v22 = vKey.m_uint64;
            }
            else
            {
              CVariantBase<CVariantDefaultAllocator>::AssignTo(
                &vKey,
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                0x200u);
              v22 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            }
            KeyValues::SetInt(&kv, v22, valuea);
          }
          goto LABEL_51;
        }
        v24 = VariantFieldTypeName(2);
        Warning("No conversion from %s to string at the moment!\n", v24);
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        value = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      }
      if ( vKey.m_type == 30 )
      {
        v18 = vKey.m_uint64;
      }
      else
      {
        switch ( vKey.m_type )
        {
          case 0:
            goto LABEL_62;
          case 1:
            m_float = vKey.m_float;
            goto LABEL_64;
          case 3:
          case 0x27:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4),
              *(vKey.m_uint64 + 8));
            break;
          case 4:
          case 0x1B:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4),
              *(vKey.m_uint64 + 8),
              *(vKey.m_uint64 + 12));
            break;
          case 5:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vKey.m_int);
            break;
          case 6:
            v21 = "true";
            if ( vKey.m_char == 0 )
              v21 = "false";
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v21);
            break;
          case 8:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vKey.m_char);
            break;
          case 9:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%d %d %d %d",
              vKey.m_char,
              BYTE1(vKey.m_int),
              BYTE2(vKey.m_uint),
              HIBYTE(vKey.m_float));
            break;
          case 0x19:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4));
            break;
          case 0x1A:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%lld", vKey.m_uint64);
            break;
          case 0x21:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", vKey.m_uint64);
            break;
          case 0x22:
            m_float = vKey.m_float64;
LABEL_64:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
            break;
          case 0x25:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
            break;
          default:
            v19 = VariantFieldTypeName(vKey.m_type);
            Warning("No conversion from %s to string at the moment!\n", v19);
LABEL_62:
            CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
            break;
        }
        v18 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      }
      KeyValues::SetString(&kv, v18, value);
LABEL_51:
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vValue);
      if ( ++v15 == v31 )
        goto LABEL_84;
    }
  }
LABEL_40:
  v13 = CDOTA_ProjectileManager::CreateLinearProjectile(this, &info);
  CVariantBase<CVariantDefaultAllocator>::Free(&table);
  KeyValues::~KeyValues(&kv);
  if ( sEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&sEffectName);
  return v13;
}


// CDOTA_ProjectileManager::Script_GetLinearProjectileVelocity  (line 1444, @0x0000000002669210, libserver.so)
// calls: CDOTA_ProjectileManager::GetLinearProjectileVelocity
Vector __fastcall CDOTA_ProjectileManager::Script_GetLinearProjectileVelocity(
        CDOTA_ProjectileManager *const this,
        int iHandle)
{
  Vector vVelocity; // [rsp+10h] [rbp-20h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  CDOTA_ProjectileManager::GetLinearProjectileVelocity(this, iHandle, &vVelocity);
  *&result.x = *&vVelocity.x;
  result.z = vVelocity.z;
  return result;
}


