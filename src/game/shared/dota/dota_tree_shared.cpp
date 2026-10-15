// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_tree_shared.cpp:32
class C_CDOTA_TempTree_MapInstall {
	C_CDOTA_TempTree_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_TempTree::YouForgotToImplementOrDeclareServerClass  (line 32, @0x00000000026bd060, libserver.so)
int __fastcall CDOTA_TempTree::YouForgotToImplementOrDeclareServerClass(CDOTA_TempTree *const this)
{
  return 0;
}


// CDOTA_TempTree::GetServerClass  (line 32, @0x00000000026cca40, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_TempTree::GetServerClass(CDOTA_TempTree *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// DOTATree_SnapLocationToGridNav  (line 55, @0x00000000026f6d10, libserver.so)
// calls: floorf
// callers: CDOTA_SimpleObstruction::Spawn, CDOTA_MapTree::Spawn
void __fastcall DOTATree_SnapLocationToGridNav(Vector *const vPos)
{
  __m128d v2; // xmm0
  vec_t v3; // xmm2_4
  __m128d v4; // xmm0

  v2.m128d_f64[1] = floorf((0.015625 * vPos->x) - 0.5);
  v2.m128d_f64[0] = v2.m128d_f64[1] * 64.0 + 64.0;
  v3 = _mm_movedup_pd(v2).m128d_f64[0];
  vPos->x = v3;
  v4.m128d_f64[1] = floorf((0.015625 * vPos->y) - 0.5);
  v4.m128d_f64[0] = v4.m128d_f64[1] * 64.0 + 64.0;
  vPos->y = _mm_movedup_pd(v4).m128d_f64[0];
}


// CDOTA_TempTree::Spawn  (line 69, @0x00000000026cc090, libserver.so)  // inlines: AddSolidFlags, AssignTo, Base, CCollisionAttributeWriter, CNetworkVarBase, Compare, Element, EnableInteractsAs, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, FindKeyHash, GetForModify, GetValue, GetValue<bool>, MarkPVSInformationDirty, NetworkStateChanged, Release, RemoveEffects, Set, SetSolid, VPhysicsCollisionAttribute_t, _V_strcmp, operator=, operator[], ~CCollisionAttributeWriter
// calls: CBaseAnimating::Spawn, CBaseModelEntity::SetModel, CBaseEntity::DispatchUpdateTransmitState, CCollisionProperty::SetSolidFlags, CBaseEntity::SetMoveType, VariantFieldTypeName, Warning
// strings: "models/props_tree/tree_oak_00.vmdl", "false", "No conversion from %s to bool now\n", "true", "Invalid conversion : CString '%s' to bool\n"
// globals: jpt_26CC140, CEntityKeyValues::sm_EmptyVariant
void __fastcall CDOTA_TempTree::Spawn(CDOTA_TempTree *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  char m_char; // cl
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  __int64 j; // rax
  unsigned __int64 m_Value; // rax
  unsigned __int64 v14; // rax
  const char *v15; // rax
  CCollisionAttributeWriter<RnCollisionAttr_t> writer; // [rsp+0h] [rbp-50h] BYREF

  this->m_fExpireTime = 0.0;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; m_nCount > i; ++i )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = pKeyValues->m_keyHashes.m_pElements;
        if ( m_pElements[i] == 507657230 )
        {
LABEL_9:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v8 = pKeyValues->m_keyValues.m_pElements;
          else
            v8 = 0;
          m_char = 0;
          p_m_value = &v8[i].m_value;
          m_type = p_m_value->m_type;
          if ( m_type != 0 )
            goto LABEL_12;
          goto LABEL_14;
        }
      }
      else if ( *(4 * i) == 507657230 )
      {
        goto LABEL_9;
      }
    }
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  m_char = 0;
  m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( m_type != 0 )
  {
LABEL_12:
    switch ( m_type )
    {
      case 1:
        m_char = p_m_value->m_float != 0.0;
        break;
      case 5:
      case 37:
        m_char = p_m_value->m_int != 0;
        break;
      case 6:
        m_char = p_m_value->m_char;
        break;
      case 26:
      case 33:
        m_char = p_m_value->m_uint64 != 0;
        break;
      case 30:
        if ( strcmp(p_m_value->m_pszString, "0") == 0
          || strcmp(p_m_value->m_pszString, "false") == 0
          || strcmp(p_m_value->m_pszString, "no") == 0 )
        {
          goto LABEL_58;
        }
        if ( strcmp(p_m_value->m_pszString, "1") == 0
          || strcmp(p_m_value->m_pszString, "true") == 0
          || strcmp(p_m_value->m_pszString, "yes") == 0 )
        {
          m_char = 1;
        }
        else
        {
          Warning("Invalid conversion : CString '%s' to bool\n", p_m_value->m_pszString);
          m_char = 0;
        }
        break;
      case 34:
        m_char = p_m_value->m_float64 != 0.0;
        break;
      default:
        v15 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to bool now\n", v15);
LABEL_58:
        m_char = 0;
        break;
    }
  }
LABEL_14:
  this->m_bSpecialTree = m_char;
  CBaseAnimating::Spawn(this, pKeyValues);
  CBaseModelEntity::SetModel(this, "models/props_tree/tree_oak_00.vmdl");
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(this);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  CCollisionProperty::SetSolidFlags(&this->m_Collision, this->m_Collision.m_usSolidFlags.m_Value | 1);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NOCLIP, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  for ( j = 0; j != 14; ++j )
    this->m_bForceVisible[j] = 0;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value;
  this->m_nObstructionProperties = 40;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  if ( m_Value != 0 )
    writer.m_OriginalState.m_nInteractsAs.m_Value = m_Value;
  v14 = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
  if ( v14 != 0 )
  {
    writer.m_OriginalState.m_nInteractsWith.m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
    v14 = writer.m_OriginalState.m_nInteractsExclude.m_Value;
  }
  if ( this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value != v14 )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nInteractsExclude.m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value;
  }
  if ( writer.m_OriginalState.m_nEntityId.m_Value != this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nEntityId.m_Value = this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value;
  }
  if ( writer.m_OriginalState.m_nHierarchyId.m_Value != this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nHierarchyId.m_Value = this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value;
  }
  if ( writer.m_OriginalState.m_nCollisionGroup.m_Value != this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nCollisionGroup.m_Value = this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value;
  }
  if ( writer.m_OriginalState.m_nCollisionFunctionMask.m_Value != this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      39,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nCollisionFunctionMask.m_Value = this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  }
  this->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value |= 0x40080000u;
  if ( !writer.m_bReleased )
  {
    writer.m_bReleased = 1;
    if ( this->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_Collision.m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_Collision.m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_Collision.m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_Collision.m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_Collision.m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_Collision.m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_Collision.m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
}


// CDOTA_TempTree::Precache  (line 105, @0x00000000027138e0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::IsPrecacheAllowed, CBaseEntity::SetAllowPrecache, CBaseEntity::PrecacheModel
// strings: "models/props_tree/tree_oak_00.vmdl"
void __fastcall CDOTA_TempTree::Precache(CDOTA_TempTree *const this, const CEntityPrecacheContext *pContext)
{
  bool IsPrecacheAllowed; // r12

  CEntityInstance::Precache(this, pContext);
  IsPrecacheAllowed = CBaseEntity::IsPrecacheAllowed();
  CBaseEntity::SetAllowPrecache(1);
  CBaseEntity::PrecacheModel("models/props_tree/tree_oak_00.vmdl", pContext);
  CBaseEntity::SetAllowPrecache(IsPrecacheAllowed);
}


// CDOTA_TempTree::UpdateOnRemove  (line 117, @0x00000000026f73d0, libserver.so)
// calls: CBaseAnimating::UpdateOnRemove, CDOTA_Tree::ShutdownTree
void __fastcall CDOTA_TempTree::UpdateOnRemove(CDOTA_TempTree *const this)
{
  CBaseAnimating::UpdateOnRemove(this);
  CDOTA_Tree::ShutdownTree(&this->CDOTA_Tree);
}


// CDOTA_TempTree::CutDown  (line 132, @0x00000000026fed20, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, Purge, RemoveAll, SoundEventGuid_t, end, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, C2DGridObstructionManager::RemoveObjectObstruction, IncrementCommunityGoal, CBaseEntity::GetAbsOrigin, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CDOTAFogOfWarSystem::IsLocationVisible, CRecipientFilter::RemoveRecipientsByTeamNumber, CBaseEntity::EmitSound, UTIL_Remove (17 total)
// strings: "Tree.CutDown"
void __fastcall CDOTA_TempTree::CutDown(CDOTA_TempTree *const this, int nPlayerTreeKiller, int nTreeNumberKnownTo)
{
  int *m_pMemory; // r12
  int *v6; // r13
  int v7; // r15d
  CDOTA_ParticleManager *ParticleManager; // rax
  bool v9; // zf
  const Vector *AbsOrigin; // rax
  __int64 v11; // rdx
  float v12; // xmm1_4
  Vector vPos; // [rsp+10h] [rbp-1E0h] BYREF
  EmitSound_t ep; // [rsp+20h] [rbp-1D0h] BYREF
  CPASAttenuationFilter filter; // [rsp+80h] [rbp-170h] BYREF
  unsigned __int64 v17; // [rsp+1B8h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  m_pMemory = this->m_Particles.m_Memory.m_pMemory;
  v6 = &m_pMemory[this->m_Particles.m_Size];
  while ( v6 != m_pMemory )
  {
    v7 = *m_pMemory++;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v7, 0);
  }
  v9 = !this->m_bStanding;
  this->m_Particles.m_Size = 0;
  if ( !v9 )
  {
    this->m_bStanding = 0;
    C2DGridObstructionManager::RemoveObjectObstruction(&g_GridNav.m_ObstructionManager, &this->CDOTA_Tree);
    IncrementCommunityGoal(
      EEvent::EVENT_ID_INTERNATIONAL_2016,
      EEventCommunityGoals_t::ECG_TI6_TreesDestroyed,
      1u,
      nPlayerTreeKiller);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v11 = *&AbsOrigin->x;
    ep.m_nChannel = 6;
    *&vPos.x = v11;
    *&AbsOrigin = AbsOrigin->z;
    ep.m_bEmitCloseCaption = 1;
    ep.m_flVolume = 1.0;
    ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
    ep.m_nFlags = 0;
    LODWORD(vPos.z) = AbsOrigin;
    ep.m_nPitch = 100;
    ep.m_flSoundTime = 0.0;
    ep.m_pflSoundDuration = 0;
    ep.m_bWarnOnMissingCloseCaption = 0;
    ep.m_bWarnOnDirectWaveReference = 0;
    ep.m_nSpeakerEntity.m_Data = -1;
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    ep.m_pSoundName = "Tree.CutDown";
    ep.m_pOrigin = &vPos;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &vPos);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    CPASAttenuationFilter::Filter(&filter, &vPos, 0.80000001, v12);
    if ( !CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, 2, &vPos, 0.0) && nTreeNumberKnownTo != 2 )
      CRecipientFilter::RemoveRecipientsByTeamNumber(&filter, 2);
    if ( !CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, 3, &vPos, 0.0) && nTreeNumberKnownTo != 3 )
      CRecipientFilter::RemoveRecipientsByTeamNumber(&filter, 3);
    CBaseEntity::EmitSound(&filter, 0, &ep);
    UTIL_Remove(this);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    }
  }
}


// CDOTA_TempTree::Think  (line 167, @0x00000000026ca570, libserver.so)  // inlines: DOTAGameRules, GetGameTime, curtime
// calls: CBaseEntity::SetNextThink
void __fastcall CDOTA_TempTree::Think(CDOTA_TempTree *const this)
{
  double v1; // xmm1_8
  float v2; // xmm0_4
  double v4; // xmm0_8
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  v2 = 0.0;
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  if ( v2 > this->m_fExpireTime )
  {
    (*(this->_vptr_IHandleEntity + 255))(this, 0xFFFFFFFFLL);
  }
  else
  {
    v4 = 0.0;
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v4 = LODWORD(v5->m_flCurrentTime);
    }
    CBaseEntity::SetNextThink(this, v4, v1, 0);
  }
}


// CDOTA_TempTree::UpdateVisibility  (line 179, @0x00000000026bd380, libserver.so)  // inlines: GetTeamMapping, RemoveSeenByTeamTag, TagAsSeenByTeam
// calls: CBaseModelEntity::UpdateVisibility, CDOTAFogOfWarSystem::GetFoW, CBaseEntity::GetAbsOrigin, FoW_TeamNumberToFoWIndex, CFoW::GetLocationInfoForRadius
void __fastcall CDOTA_TempTree::UpdateVisibility(CDOTA_TempTree *const this)
{
  __int64 v2; // rbx
  int v3; // r12d
  CFoW *FoW; // r15
  const Vector *AbsOrigin; // r14
  unsigned int v6; // eax
  float flRadius; // [rsp+Ch] [rbp-34h]

  v2 = 0;
  CBaseModelEntity::UpdateVisibility(this);
  do
  {
    while ( 1 )
    {
      v3 = v2 + 2;
      if ( (v2 - 4) <= 7 || v2 <= 1 )
      {
        FoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, this->m_worldGroupId);
        flRadius = FoW->m_flTreeRadius;
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        v6 = FoW_TeamNumberToFoWIndex(v3);
        if ( CFoW::GetLocationInfoForRadius(FoW, v6, AbsOrigin, flRadius) )
          break;
        this->m_iTeamVisibilityBitmask &= ~(1 << v3);
      }
      if ( ++v2 == 13 )
        return;
    }
    this->m_bForceVisible[v2++ + 2] = 1;
    this->m_iTeamVisibilityBitmask |= 1 << v3;
  }
  while ( v2 != 13 );
}


// CDOTA_TempTree::AddParticle  (line 202, @0x000000000270e320, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, operator[]
// calls: CUtlMemory<int, int>::Grow
// callers: CDOTA_Item_IronwoodBranch::OnSpellStart
void __fastcall CDOTA_TempTree::AddParticle(CDOTA_TempTree *const this, int nFXIndex)
{
  __int64 m_Size; // r12
  int v5; // eax
  int *v6; // rax

  m_Size = this->m_Particles.m_Size;
  v5 = this->m_Particles.m_Size;
  if ( m_Size == this->m_Particles.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<int,int>::Grow(&this->m_Particles.m_Memory, 1);
    v5 = this->m_Particles.m_Size;
  }
  this->m_Particles.m_Size = v5 + 1;
  v6 = &this->m_Particles.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = nFXIndex;
}


// CDOTA_TempTree::ShouldTransmit  (line 208, @0x00000000026bd1b0, libserver.so)  // inlines: GetTeamNumber
// calls: CBaseEntity::ShouldTransmit
int __fastcall CDOTA_TempTree::ShouldTransmit(CDOTA_TempTree *const this, const CGameCheckTransmitInfo *pInfo)
{
  int ShouldTransmit; // eax
  int v5; // edx

  ShouldTransmit = CBaseEntity::ShouldTransmit(this, pInfo);
  v5 = 4;
  if ( !this->m_bForceVisible[pInfo->m_pRecipientPlayer->m_iTeamNum.m_Value] )
    return ShouldTransmit;
  return v5;
}


// CreateTempTree  (line 223, @0x000000000270c6e0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, AddKeyValue<bool>, AddKeyValue<char const*>, AddToTail, AddToTailGetPtr, Allocate, Base, CEntityHandle, CEntityIndex, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CVProfScope, CopyData, Element, EmitSound_t, EnsureCapacity, EnterScope, ExitScope, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTimebaseRegister, InTargetThread, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LeafCodeInfo_t, LookupEntity, OverrideAllocator, PLAT_CPU_TIME, Purge, Release, ReleaseEntitySpawnerEntityVariantAllocator, RemoveAll, Set, SetClassName, SetForceVisible, SetValue, SetValue<bool>, SoundEventGuid_t, Spawn, memcpy, operator CDOTA_TempTree*, operator CEntityInstance*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CVProfScope, ~EmitSound_t
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntitySystem::FindClassByDesignName, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CUtlString::FreeMemoryBlock, CEntityKeyValues::SetValue, CEntityKeyValues::~CEntityKeyValues (43 total)
// callers: Script_CreateTempTree, CDOTA_Ability_Furion_Sprout::OnSpellStart, CDOTA_Item_IronwoodBranch::OnSpellStart
// strings: "dota_temp_tree", "Attempted to set attribute %s as if it was a non-attribute key!\n", "Spawn", "Server Simulation", "../../public/tier1/utlleanvector.h", "EnsureCapacity" (9 total)
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
CDOTA_TempTree *__fastcall CreateTempTree(char bSpecial, double a2, vec_t a3, float a4, double flDuration, vec_t a6)
{
  CEntitySystem *v7; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v9; // rdx
  char v10; // al
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  CEntityClass *ClassByDesignName; // rax
  CEntityKeyValues *v13; // rbx
  int m_enabled; // eax
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v16; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v18; // r15
  CEntityIdentity *m_pEntity; // rax
  __int16 v20; // si
  CEntitySpawnerContext<CDOTA_TempTree> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v24; // rdi
  CEntityIdentity *v25; // rax
  CEntityIdentity *v26; // rax
  CDOTA_TempTree *m_pInstance; // r14
  CUtlScratchMemoryPool *v28; // rdi
  CEntityKeyValues *v29; // rbx
  const char *m_pszClassname; // rdx
  unsigned __int64 v33; // rbx
  ThreadId_t v34; // r15
  uint64 v35; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v37; // rbx
  uint64 m_numTimeBaseTicks; // rcx
  uint64 v39; // rcx
  CVProfNode *m_pParent; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nCount; // r8
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v42; // cx
  __int64 v43; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v44; // rdx
  int v45; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v46; // cx
  __int64 v47; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v48; // rdx
  int m_nEntitySpawnerDataUseCount; // ecx
  __int64 v50; // r15
  unsigned __int64 v51; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v52; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v53; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v54; // rax
  uint16 v55; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v56; // rax
  unsigned __int64 m_nAllocated; // rdx
  int v58; // esi
  int v59; // r15d
  int v60; // eax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v61; // rax
  __int64 v62; // r15
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v63; // rax
  __int64 v64; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v65; // r15
  uint16 m_flags; // ax
  char *v67; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v68; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v69; // rdx
  __int64 v70; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v75; // rax
  __int16 v76; // ax
  __int64 v77; // rbx
  __int16 v78; // ax
  char *v79; // rax
  int v80; // ecx
  void *v81; // rcx
  unsigned __int64 v82; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rsi
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdi
  __int64 v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rdi
  __int64 v91; // rsi
  float v92; // xmm1_4
  bool v93; // [rsp+23h] [rbp-2FDh]
  bool bVisibleDirea; // [rsp+24h] [rbp-2FCh]
  CEntityKeyValues *bVisibleRadiant; // [rsp+28h] [rbp-2F8h]
  __int64 bVisibleRadianta; // [rsp+28h] [rbp-2F8h]
  bool bVisibleRadiantb; // [rsp+28h] [rbp-2F8h]
  Vector vTreeRingCentera; // [rsp+30h] [rbp-2F0h]
  Vector vPosa; // [rsp+40h] [rbp-2E0h] BYREF
  int v101; // [rsp+50h] [rbp-2D0h]
  _QWORD v102[2]; // [rsp+60h] [rbp-2C0h] BYREF
  LeafCodeInfo_t v103; // [rsp+70h] [rbp-2B0h] BYREF
  LeafCodeInfo_t v104; // [rsp+90h] [rbp-290h] BYREF
  EmitSound_t ep; // [rsp+B0h] [rbp-270h] BYREF
  CEntitySpawner<CDOTA_TempTree> spawner; // [rsp+110h] [rbp-210h] BYREF
  CPASAttenuationFilter filter; // [rsp+1B0h] [rbp-170h] BYREF
  unsigned __int64 v108; // [rsp+2E8h] [rbp-38h]

  v108 = __readfsqword(0x28u);
  *&vPosa.x = a2;
  vPosa.z = a3;
  *&vTreeRingCentera.x = flDuration;
  vTreeRingCentera.z = a6;
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_42AD290;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  spawner.m_pSpawnBatch = 0;
  v7 = g_pEntitySystem;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v7->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v7);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v9 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v9;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCDOTA_TempTreeClass;
  if ( g_pApplication != 0 )
    v10 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v10 = 0;
  spawner.m_bValidateKeys = v10;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_4;
  m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( spawner.m_pEntityKeyValues->m_keyHashes.m_nCount <= 0 )
  {
LABEL_78:
    if ( m_nCount == 0x7FFF )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        goto LABEL_145;
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v90, v91, v88, v89) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_145:
        v103.m_szFile = "../../public/tier1/utlleanvector.h";
        v103.m_szFunction = "AddToTailGetPtr";
        v103.m_nLine = 557;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v103,
          "%s allocation count overflow",
          "AddToTailGetPtr");
      }
    }
    m_nAllocated = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v58 = m_nCount + 1;
    if ( v58 > m_nAllocated )
    {
      LOWORD(v59) = m_nCount + 1;
      if ( v58 > 9 )
      {
        if ( m_nCount == 0x7FFF )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            goto LABEL_140;
          while ( 1 )
          {
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v86, v87, v84, v85) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_140:
            v104.m_szFile = "../../public/tier1/utlleanvector.h";
            v104.m_szFunction = "EnsureCapacity";
            v104.m_nLine = 104;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v104,
              "%s allocation count overflow",
              "EnsureCapacity");
          }
        }
        v59 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
        while ( 1 )
        {
          v60 = v59;
          if ( v58 <= v59 )
            break;
          if ( v59 <= 16382 )
          {
            v80 = 2 * v59;
            v59 = 8;
            if ( 2 * v60 > 7 )
              v59 = v80;
          }
          else
          {
            v59 = 0x7FFF;
          }
        }
      }
      if ( m_nAllocated > 9 )
      {
        m_pEntityKeyValues->m_keyHashes.m_pElements = (*(*g_pMemAlloc + 8LL))(
                                                        g_pMemAlloc,
                                                        spawner.m_pEntityKeyValues->m_keyHashes.m_pElements,
                                                        4LL * v59);
        m_nCount = m_pEntityKeyValues->m_keyHashes.m_nCount;
      }
      else if ( v59 > 9 )
      {
        v81 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v59);
        v82 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
        if ( v82 != 0 )
        {
          m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v82 > 9 )
            m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        m_pEntityKeyValues->m_keyHashes.m_pElements = memcpy(
                                                        v81,
                                                        m_pElements,
                                                        4LL * m_pEntityKeyValues->m_keyHashes.m_nCount);
        m_nCount = m_pEntityKeyValues->m_keyHashes.m_nCount;
      }
      m_pEntityKeyValues->m_keyHashes.m_nAllocated = v59;
      m_nAllocated = v59;
    }
    m_pEntityKeyValues->m_keyHashes.m_nCount = m_nCount + 1;
    if ( m_nAllocated != 0 )
    {
      v61 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      if ( m_nAllocated > 9 )
        v61 = m_pEntityKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      v61 = 0;
    }
    v62 = m_nCount;
    v61[m_nCount] = -971301790;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v63 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v63 = 0;
    v64 = 24 * v62;
    v65 = &v63[v62];
    bVisibleRadianta = v64;
    m_flags = v65->m_value.m_flags;
    if ( (m_flags & 1) != 0 )
      v65->m_value.m_flags = m_flags & 0xFFFE;
    v65->m_value.m_uint64 = 0;
    v65->m_value.m_type = 30;
    v67 = CEntityVariantAllocator::Allocate(0xFu);
    v65->m_value.m_uint64 = v67;
    strcpy(v67, "dota_temp_tree");
    v65->m_value.m_flags |= 1u;
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v68 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v68 = 0;
    *(&v68->m_pAttributeName + bVisibleRadianta) = 0;
  }
  else
  {
    v42 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v43 = 0;
    while ( 1 )
    {
      if ( v42 != 0 )
      {
        v44 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v42 > 9 )
          v44 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v44 = 0;
      }
      if ( v44[v43] == -971301790 )
        break;
      if ( m_nCount <= ++v43 )
        goto LABEL_78;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v69 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v70 = v43;
      if ( v69[v70].m_pAttributeName != 0 )
      {
LABEL_101:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v69[v70].m_pAttributeName);
        goto LABEL_4;
      }
      v77 = &v69[v70];
    }
    else
    {
      v70 = v43;
      v69 = 0;
      v77 = v70 * 24;
      if ( *(v70 * 24 + 16) != 0 )
        goto LABEL_101;
    }
    v78 = *(v77 + 10);
    if ( (v78 & 1) != 0 )
      *(v77 + 10) = v78 & 0xFFFE;
    *v77 = 0;
    *(v77 + 8) = 30;
    v79 = CEntityVariantAllocator::Allocate(0xFu);
    *v77 = v79;
    strcpy(v79, "dota_temp_tree");
    *(v77 + 10) |= 1u;
  }
LABEL_4:
  ClassByDesignName = CEntitySystem::FindClassByDesignName(
                        g_pEntitySystem,
                        "dota_temp_tree",
                        &spawner.m_scriptClassName);
  v13 = spawner.m_pEntityKeyValues;
  spawner.m_pEntityClass = ClassByDesignName;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
  {
    v101 = -1;
    goto LABEL_6;
  }
  v45 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v45 > 0 )
  {
    v46 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v47 = 0;
    while ( 1 )
    {
      if ( v46 != 0 )
      {
        v48 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v46 > 9 )
          v48 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v48 = 0;
      }
      if ( v48[v47] == 507657230 )
        break;
      if ( v45 <= ++v47 )
        goto LABEL_68;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v71 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v72 = v47;
      v73 = &v71[v72];
      if ( v71[v72].m_pAttributeName != 0 )
      {
LABEL_104:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v71[v72].m_pAttributeName);
LABEL_105:
        v13 = spawner.m_pEntityKeyValues;
        goto LABEL_106;
      }
    }
    else
    {
      v72 = v47;
      v71 = 0;
      v73 = v72 * 24;
      if ( *(v72 * 24 + 16) != 0 )
        goto LABEL_104;
    }
    v76 = *(v73 + 10);
    if ( (v76 & 1) != 0 )
      *(v73 + 10) = v76 & 0xFFFE;
    *v73 = 0;
    *(v73 + 8) = 6;
    *v73 = bSpecial;
    goto LABEL_105;
  }
LABEL_68:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  LOWORD(v50) = v13->m_keyHashes.m_nCount - 1;
  v51 = v13->m_keyHashes.m_nAllocated;
  if ( v51 != 0 )
  {
    if ( v51 <= 9 )
      v52 = (&v13->m_keyHashes.m_nAllocAllocated + 1);
    else
      v52 = v13->m_keyHashes.m_pElements;
  }
  else
  {
    v52 = 0;
  }
  v50 = v50;
  v52[v50] = 507657230;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v13->m_keyValues);
  if ( v13->m_keyValues.m_nAllocated != 0 )
    v53 = v13->m_keyValues.m_pElements;
  else
    v53 = 0;
  v54 = &v53[v50];
  v55 = v54->m_value.m_flags;
  if ( (v55 & 1) != 0 )
    v54->m_value.m_flags = v55 & 0xFFFE;
  v54->m_value.m_uint64 = 0;
  v54->m_value.m_type = 6;
  v54->m_value.m_char = bSpecial;
  if ( v13->m_keyValues.m_nAllocated != 0 )
    v56 = v13->m_keyValues.m_pElements;
  else
    v56 = 0;
  v56[v50].m_pAttributeName = 0;
  v13 = spawner.m_pEntityKeyValues;
LABEL_106:
  v101 = -1;
  if ( v13 == 0 )
  {
LABEL_26:
    m_pInstance = 0;
    goto LABEL_27;
  }
LABEL_6:
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v93 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v37 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "Spawn" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v75 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v75->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    v39 = m_numTimeBaseTicks - v37;
    v13 = spawner.m_pEntityKeyValues;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v39 + __rdtsc();
  }
  if ( !CEntityKeyValues::HasValue(v13, -971301790) )
  {
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v16 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v16,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v18 = Entity;
  if ( Entity != 0 )
  {
    m_pEntity = Entity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v20 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v101 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v20 & 0x7FFF;
    }
    v102[0] = m_pEntity;
    v102[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v102,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v18, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( bVisibleRadiant = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v24 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v24 - 1);
        (pfn)(v24, v18, bVisibleRadiant);
      }
    }
  }
  if ( v93 )
  {
    v33 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v34 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v34 == ThreadGetCurrentId() )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v35 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v35 - v33 + __rdtsc();
  }
  if ( (v101 + 2) <= 1 )
    goto LABEL_26;
  v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v101 >> 9) & 0x3F];
  if ( v25 == 0 )
    goto LABEL_26;
  v26 = &v25[v101 & 0x1FF];
  if ( v26 == 0 )
    goto LABEL_26;
  if ( v26->m_EHandle.m_Index != v101 )
    goto LABEL_26;
  m_pInstance = v26->m_pInstance;
  if ( v26->m_pInstance == 0 )
    goto LABEL_26;
  CDOTA_TempTree::InitTree(v26->m_pInstance, vPosa, COERCE_DOUBLE(LODWORD(a4)), vTreeRingCentera);
  ep.m_flVolume = 1.0;
  ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
  ep.m_nFlags = 0;
  ep.m_flSoundTime = 0.0;
  ep.m_nPitch = 100;
  ep.m_pflSoundDuration = 0;
  ep.m_bEmitCloseCaption = 1;
  ep.m_bWarnOnMissingCloseCaption = 0;
  ep.m_bWarnOnDirectWaveReference = 0;
  ep.m_nSpeakerEntity.m_Data = -1;
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  ep.m_nChannel = 6;
  ep.m_pSoundName = "Tree.GrowBack";
  ep.m_pOrigin = &vPosa;
  bVisibleRadiantb = CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, 2, &vPosa, 0.0);
  bVisibleDirea = CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, 3, &vPosa, 0.0);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &vPosa);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  CPASAttenuationFilter::Filter(&filter, &vPosa, 0.80000001, v92);
  if ( !bVisibleRadiantb )
  {
    CRecipientFilter::RemoveRecipientsByTeamNumber(&filter, 2);
    if ( bVisibleDirea )
      goto LABEL_151;
LABEL_156:
    CRecipientFilter::RemoveRecipientsByTeamNumber(&filter, 3);
    goto LABEL_152;
  }
  m_pInstance->m_bForceVisible[2] = 1;
  if ( !bVisibleDirea )
    goto LABEL_156;
LABEL_151:
  m_pInstance->m_bForceVisible[3] = 1;
LABEL_152:
  CBaseEntity::EmitSound(&filter, 0, &ep);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
  }
LABEL_27:
  v28 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_42AD270;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v28 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v28);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v29 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v29);
      operator delete(v29);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  return m_pInstance;
}


// CDOTA_Tree::GetObstructionRadius  (line 267, @0x00000000026bd070, libserver.so)
float __fastcall CDOTA_Tree::GetObstructionRadius(CDOTA_Tree *const this)
{
  return g_GridNav.m_flEdgeSize;
}


// CDOTA_TempTree::InitTree  (line 324, @0x00000000026f6f80, libserver.so)  // inlines: DOTAGameRules, DistToSqr, GetGameTime, LengthSqr, NetworkStateChanged, QAngle, Set, ToDOTABaseNPC, VectorAdd, curtime, operator!=, operator+, operator=
// calls: SnapToGround, CBaseEntity::SetAbsOrigin, RandomFloat, CBaseEntity::SetAbsAngles, CBaseEntity::SetNextThink, C2DGridObstructionManager::UpdateObjectObstruction, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::GetFoW, CFoW::SnapCoordsToGrid, CFoW::AddOccluder
// callers: CreateTempTree
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_TempTree::InitTree(
        CDOTA_TempTree *const this,
        Vector vPos,
        double flDuration,
        Vector vTreeCircleCenter)
{
  bool v5; // zf
  __int64 v6; // rax
  CDOTA_BaseNPC *v7; // rsi
  double v8; // xmm1_8
  float v9; // xmm0_4
  CGlobalVars *v10; // r12
  double v11; // xmm0_8
  void (__fastcall *m_pfnWarningFunc)(__int64, double); // rax
  Vector *AbsOrigin; // rax
  uint32 m_nHashCode; // esi
  CFoW *FoW; // r12
  float m_nHorizontalGridSize; // xmm8_4
  float v17; // xmm7_4
  float v18; // xmm9_4
  float v19; // xmm5_4
  float v20; // xmm4_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float z; // [rsp+0h] [rbp-80h]
  float flDurationa; // [rsp+4h] [rbp-7Ch]
  float x; // [rsp+8h] [rbp-78h]
  float y; // [rsp+Ch] [rbp-74h]
  Vector vPosa; // [rsp+20h] [rbp-60h] BYREF
  QAngle treeAngle; // [rsp+30h] [rbp-50h] BYREF
  Vector vAbsOrigin; // [rsp+40h] [rbp-40h] BYREF
  Vector vOccluderCenter; // [rsp+50h] [rbp-30h] BYREF

  z = vTreeCircleCenter.z;
  v5 = vTreeCircleCenter.x == this->m_vecTreeCircleCenter.m_Value.x;
  flDurationa = *&flDuration;
  vPosa = vPos;
  y = vTreeCircleCenter.y;
  x = vTreeCircleCenter.x;
  if ( !v5
    || vTreeCircleCenter.y != this->m_vecTreeCircleCenter.m_Value.y
    || vTreeCircleCenter.z != this->m_vecTreeCircleCenter.m_Value.z )
  {
    (*(this->_vptr_IHandleEntity + 22))(
      this,
      1248,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      *&vPos.x,
      *&vPos.z,
      flDuration,
      *&vTreeCircleCenter.x,
      COERCE_DOUBLE(LODWORD(vTreeCircleCenter.y)),
      *&vTreeCircleCenter.z);
    this->m_vecTreeCircleCenter.m_Value.x = x;
    this->m_vecTreeCircleCenter.m_Value.y = y;
    this->m_vecTreeCircleCenter.m_Value.z = z;
  }
  v6 = (*(this->_vptr_CObstructionObject + 6))(&this->CDOTA_Tree);
  if ( v6 != 0 && *(v6 + 339) != 0 )
    v7 = v6;
  else
    v7 = 0;
  SnapToGround(&vPosa, v7);
  CBaseEntity::SetAbsOrigin(this, &vPosa);
  treeAngle.y = RandomFloat(0.0, 359.89999);
  treeAngle.x = 0.0;
  treeAngle.z = 0.0;
  CBaseEntity::SetAbsAngles(this, &treeAngle);
  v9 = 0.0;
  if ( g_pGameRules != 0 )
    v9 = *&g_pGameRules[18].m_szQuestName[20];
  v10 = gpGlobals;
  this->m_fExpireTime = v9 + flDurationa;
  v11 = 0.0;
  if ( v10 != 0 )
  {
    if ( !v10->m_bEnableAssertions && !v10->m_bInSimulation )
    {
      m_pfnWarningFunc = v10->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(1, 0.0);
    }
    *&v11 = LODWORD(v10->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v11, v8, 0);
  C2DGridObstructionManager::UpdateObjectObstruction(&g_GridNav.m_ObstructionManager, &this->CDOTA_Tree);
  if ( this->m_nOccluderIndex == 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    m_nHashCode = this->m_worldGroupId.m_nHashCode;
    vAbsOrigin = *AbsOrigin;
    FoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, m_nHashCode);
    CFoW::SnapCoordsToGrid(FoW, &vAbsOrigin, &vOccluderCenter);
    m_nHorizontalGridSize = FoW->m_nHorizontalGridSize;
    v17 = vOccluderCenter.x;
    v18 = m_nHorizontalGridSize + vOccluderCenter.x;
    v19 = (vOccluderCenter.y - y) * (vOccluderCenter.y - y);
    v20 = ((m_nHorizontalGridSize + vOccluderCenter.x) - x) * ((m_nHorizontalGridSize + vOccluderCenter.x) - x);
    v21 = (vOccluderCenter.z - z) * (vOccluderCenter.z - z);
    v22 = ((vOccluderCenter.z + 0.0) - z) * ((vOccluderCenter.z + 0.0) - z);
    v23 = (((vOccluderCenter.x - x) * (vOccluderCenter.x - x)) + v19) + v21;
    if ( v23 > (((((vOccluderCenter.y + 0.0) - y) * ((vOccluderCenter.y + 0.0) - y)) + v20) + v22) )
    {
      vOccluderCenter.x = m_nHorizontalGridSize + vOccluderCenter.x;
      v17 = v18;
      v23 = (v19 + v20) + v21;
    }
    if ( v23 > (((((v17 + 0.0) - x) * ((v17 + 0.0) - x))
               + (((vOccluderCenter.y + m_nHorizontalGridSize) - y) * ((vOccluderCenter.y + m_nHorizontalGridSize) - y)))
              + v22) )
      vOccluderCenter.y = vOccluderCenter.y + m_nHorizontalGridSize;
    this->m_nOccluderIndex = CFoW::AddOccluder(FoW, &vOccluderCenter);
  }
}


// CDOTA_Tree::CDOTA_Tree  (line 363, @0x00000000026f72b0, libserver.so)  // inlines: CObstructionObject
void __fastcall CDOTA_Tree::CDOTA_Tree(CDOTA_Tree *const this)
{
  this->m_pObstructionRecord = 0;
  this->m_nObstructionProperties = 0;
  this->_vptr_CObstructionObject = &off_42AD2B0;
  this->m_nOccluderIndex = 0;
  this->m_bStanding = 1;
  this->m_bSpecialTree = 0;
}


// CDOTA_Tree::~CDOTA_Tree  (line 374, @0x00000000026f72e0, libserver.so)
void __fastcall CDOTA_Tree::~CDOTA_Tree(CDOTA_Tree *const this)
{
  this->_vptr_CObstructionObject = &off_42AD2B0;
}


// CDOTA_Tree::ShutdownTree  (line 378, @0x00000000026f72f0, libserver.so)
// calls: C2DGridObstructionManager::RemoveObjectObstruction, CDOTAFogOfWarSystem::GetFoW, CFoW::RemoveOccluder
// callers: CDOTA_MapTree::UpdateOnRemove, CDOTA_TempTree::UpdateOnRemove
void __fastcall CDOTA_Tree::ShutdownTree(CDOTA_Tree *const this)
{
  WorldGroupId_t *v2; // rax
  uint32 m_nOccluderIndex; // r13d
  WorldGroupId_t *v4; // rax
  CFoW *FoW; // rax

  if ( g_GridNav.m_bLoaded && this->m_pObstructionRecord != 0 )
    C2DGridObstructionManager::RemoveObjectObstruction(&g_GridNav.m_ObstructionManager, this);
  if ( this->m_nOccluderIndex != 0 )
  {
    v2 = (*(this->_vptr_CObstructionObject + 8))(this);
    if ( CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, v2[8]) != 0 )
    {
      m_nOccluderIndex = this->m_nOccluderIndex;
      v4 = (*(this->_vptr_CObstructionObject + 8))(this);
      FoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, v4[8]);
      CFoW::RemoveOccluder(FoW, m_nOccluderIndex);
      this->m_nOccluderIndex = 0;
    }
  }
}


// GetEntityIndexForUnitOrderTreeId  (line 490, @0x00000000026f7400, libserver.so)  // inlines: GetBinaryObject, operator[]
// calls: CEntityInstance::GetEntityIndex
// callers: Script_GetEntityIndexForTreeId
CEntityIndex __fastcall GetEntityIndexForUnitOrderTreeId(DotaTreeId_t nTreeId)
{
  DotaTreeId_t m_Size; // edx
  CEntityIndex result; // eax
  CDOTA_BinaryObject *v3; // rdi

  m_Size = g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Size;
  result.m_Data = nTreeId - m_Size;
  if ( m_Size > nTreeId )
  {
    if ( (nTreeId & 0x80000000) == 0
      && nTreeId < m_Size
      && (v3 = g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Memory.m_pMemory[nTreeId]) != 0 )
    {
      return CEntityInstance::GetEntityIndex(v3);
    }
    else
    {
      return -1;
    }
  }
  return result;
}


