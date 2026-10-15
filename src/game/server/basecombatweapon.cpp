// Reconstructed from DWARF by pahole; not original source.

// src/game/server/basecombatweapon.cpp:213
class CWeaponLOSFilter : public CTraceFilterSkipTwoEntities {
public:

private:

	CWeaponLOSFilter(CBaseEntity *, CBaseEntity *, int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CWeaponLOSFilter();

	// vtable[2] ShouldHitEntity
	// sizeof = 80
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// InitManifestDesc<WeaponResources_server::CTemplateArg>  (line 44, @0x0000000002152d10, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// globals: `guard variable for'InitManifestDesc<WeaponResources_server::CTemplateArg>(WeaponResources_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<WeaponResources_server::CTemplateArg>(WeaponResources_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<WeaponResources_server::CTemplateArg>(WeaponResources_server::CTemplateArg &)::s_Manifest
ResourceManifestDesc_t *__fastcall InitManifestDesc<WeaponResources_server::CTemplateArg>(
        WeaponResources_server::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<WeaponResources_server::CTemplateArg>(WeaponResources_server::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<WeaponResources_server::CTemplateArg>(WeaponResources_server::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<WeaponResources_server::CTemplateArg>(WeaponResources_server::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<WeaponResources_server::CTemplateArg>(WeaponResources_server::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<WeaponResources_server::CTemplateArg>(WeaponResources_server::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<WeaponResources_server::CTemplateArg>(WeaponResources_server::CTemplateArg &)::s_Manifest;
}


// CBaseCombatWeapon::UpdateTransmitState  (line 62, @0x0000000002153040, libserver.so)
// calls: CBaseCombatWeapon::GetOwner, CBaseEntity::SetTransmitState, CBaseEntity::UpdateTransmitState
int __fastcall CBaseCombatWeapon::UpdateTransmitState(CBaseCombatWeapon *const this)
{
  if ( CBaseCombatWeapon::GetOwner(this) != 0 )
    return CBaseEntity::SetTransmitState(this, 16);
  else
    return CBaseEntity::UpdateTransmitState(this);
}


// CBaseCombatWeapon::Operator_FrameUpdate  (line 78, @0x0000000002143720, libserver.so)  // inlines: IsSequenceFinished, ResetSequence, ToBasePlayer
// calls: CBaseAnimating::StudioFrameAdvance, CBaseAnimating::GetBaseAnimatingController, CBasePlayer::GetViewModel, CBaseAnimating::GetModelPtr, CBaseAnimating::DispatchAnimEvents, CBaseAnimating::SequenceLoops, CBaseAnimating::SelectWeightedSequence, Warning
// strings: "CBaseCombatWeapon::Operator_FrameUpdate one or both of the ModelPtrs is NULL w:%s v:%s\n"
// globals: CBaseCombatWeapon::Operator_FrameUpdate(CBaseCombatCharacter *)::__executeCount
void __fastcall CBaseCombatWeapon::Operator_FrameUpdate(CBaseCombatWeapon *const this, CBaseCombatCharacter *pOperator)
{
  const CBaseAnimatingController *BaseAnimatingController; // rax
  CBaseViewModel *ViewModel; // r13
  const CModel *ModelPtr; // r14
  const CModel *v7; // r15
  HSequence v8; // r13d
  CBaseAnimatingController *v9; // rax
  const char *v10; // rsi
  const char *v11; // rdx

  CBaseAnimating::StudioFrameAdvance(this, AnimationAdvanceType_t::ANIM_ADVANCE_NORMAL);
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  if ( (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 19))(BaseAnimatingController) != 0
    && CBaseAnimating::SequenceLoops(this) )
  {
    v8.m_Data = CBaseAnimating::SelectWeightedSequence(this, this->m_Activity).m_Data;
    if ( v8.m_Data != -1 )
    {
      v9 = CBaseAnimating::GetBaseAnimatingController(this);
      (*(v9->_vptr_CSkeletonAnimationController + 23))(v9, v8.m_Data, 1);
    }
  }
  if ( pOperator != 0
    && (*(pOperator->_vptr_IHandleEntity + 140))(pOperator) != 0
    && (ViewModel = CBasePlayer::GetViewModel(pOperator, this->m_nViewModelIndex.m_Value)) != 0 )
  {
    ModelPtr = CBaseAnimating::GetModelPtr(this);
    v7 = CBaseAnimating::GetModelPtr(ViewModel);
    if ( (ModelPtr == 0 || v7 == 0)
      && CBaseCombatWeapon::Operator_FrameUpdate(CBaseCombatCharacter *)::__executeCount <= 0 )
    {
      v10 = "ok";
      ++CBaseCombatWeapon::Operator_FrameUpdate(CBaseCombatCharacter *)::__executeCount;
      v11 = "ok";
      if ( v7 == 0 )
        v11 = "null";
      if ( ModelPtr == 0 )
        v10 = "null";
      Warning("CBaseCombatWeapon::Operator_FrameUpdate one or both of the ModelPtrs is NULL w:%s v:%s\n", v10, v11);
    }
    if ( ModelPtr != 0 && v7 != 0 && ModelPtr != v7 )
      CBaseAnimating::DispatchAnimEvents(this, pOperator);
    CBaseAnimating::DispatchAnimEvents(ViewModel, this);
  }
  else
  {
    CBaseAnimating::DispatchAnimEvents(this, pOperator);
  }
}


// CBaseCombatWeapon::Operator_HandleAnimEvent  (line 145, @0x000000000213f610, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, GetTokenI, GetWeaponSoundFromString, String, atoi
// calls: DevWarning, V_stricmp_fast, strtol
// strings: "Unhandled animation event %d from %s --> %s\n"
// globals: g_WeaponSoundCategories
void __fastcall CBaseCombatWeapon::Operator_HandleAnimEvent(
        CBaseCombatWeapon *const this,
        animevent_t *pEvent,
        CBaseCombatCharacter *pOperator)
{
  int event; // eax
  CEntityIdentity *m_pEntity; // rcx
  const char *m_pAsString; // r8
  CEntityIdentity *v9; // rdx
  const char *v10; // rcx
  const char *options; // r15
  tokenset_t<WeaponSound_t> *v12; // r12
  const char *i; // rsi
  int v14; // eax

  event = pEvent->event;
  if ( (pEvent->type & 1) != 0 )
  {
    if ( event == 14 )
    {
      v14 = strtol(pEvent->options, 0, 10);
      (*(this->_vptr_IHandleEntity + 388))(this, pOperator, v14 != 0, 0);
      return;
    }
    if ( event == 46 )
    {
      options = pEvent->options;
      v12 = g_WeaponSoundCategories;
      for ( i = g_WeaponSoundCategories[0].name; v12->name != 0; i = v12->name )
      {
        if ( options != 0 && V_stricmp_fast(options, i) == 0 )
          break;
        ++v12;
      }
      if ( v12->token != -1 )
        (*(this->_vptr_IHandleEntity + 319))(this, 0.0);
      event = pEvent->event;
    }
  }
  m_pEntity = this->m_pEntity;
  m_pAsString = "";
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  v9 = pOperator->m_pEntity;
  v10 = "";
  if ( v9->m_designerName.u.m_Id != 0 )
    v10 = v9->m_designerName.u.m_pAsString;
  DevWarning(2, "Unhandled animation event %d from %s --> %s\n", event, v10, m_pAsString);
}


// CBaseCombatWeapon::HandleAnimEvent  (line 170, @0x0000000002153080, libserver.so)  // inlines: ToBasePlayer
// calls: CBaseCombatWeapon::GetOwner
void __fastcall CBaseCombatWeapon::HandleAnimEvent(CBaseCombatWeapon *const this, animevent_t *pEvent)
{
  CBaseCombatCharacter *Owner; // rax
  CBaseCombatCharacter *v5; // rbx

  Owner = CBaseCombatWeapon::GetOwner(this);
  v5 = Owner;
  if ( Owner != 0 && (*(Owner->_vptr_IHandleEntity + 140))(Owner) != 0 )
    (*(this->_vptr_IHandleEntity + 387))(this, pEvent, v5);
}


// CBaseCombatWeapon::Respawn  (line 184, @0x0000000002170230, libserver.so)  // inlines: CEntityHandle, Get, GetClassNameAsCStr, GetClassname, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, String, curtime
// calls: CBaseEntity::GetLocalAngles, CBaseEntity::Create, CBaseEntity::AddEffects, CBaseEntity::ThinkSet, UTIL_DropToFloor, CBaseEntity::SetNextThink, Warning
// strings: "Respawn failed to create %s!\n"
// globals: CBaseCombatWeapon::AttemptToMaterialize(void)
CBaseEntity *__fastcall CBaseCombatWeapon::Respawn(CBaseCombatWeapon *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  CBaseEntity *m_pInstance; // r12
  vec_t v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const QAngle *LocalAngles; // r13
  double v9; // xmm0_8
  CEntityIdentity *m_pEntity; // rcx
  const char *m_pAsString; // rdi
  vec_t v12; // xmm1_4
  CBaseEntity *v13; // rax
  CBaseEntity *v14; // r12
  CGlobalVars *v15; // r13
  double v16; // xmm0_8
  double v17; // xmm1_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CEntityIdentity *v20; // rax
  const char *v21; // rsi
  float m_flCurrentTime; // [rsp+Ch] [rbp-34h]
  Vector vecOrigin; // [rsp+10h] [rbp-30h] BYREF

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  m_pInstance = 0;
  LODWORD(v5) = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  vecOrigin.x = v5;
  if ( (LODWORD(v5) + 2) > 1 )
  {
    v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v6 != 0 )
    {
      v7 = &v6[v3 & 0x1FF];
      if ( v7 != 0 && LODWORD(v5) == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  LocalAngles = CBaseEntity::GetLocalAngles(this);
  v9 = (*(g_pGameRules->_vptr_CGameRules + 95))(g_pGameRules, this);
  m_pEntity = this->m_pEntity;
  m_pAsString = "";
  *&vecOrigin.x = v9;
  vecOrigin.z = v12;
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  v13 = CBaseEntity::Create(m_pAsString, &vecOrigin, LocalAngles, m_pInstance);
  v14 = v13;
  if ( v13 != 0 )
  {
    CBaseEntity::AddEffects(v13, 32);
    v14->m_pfnTouch.__pfn = 0;
    v14->m_pfnTouch.__delta = 0;
    CBaseEntity::ThinkSet(v14, CBaseCombatWeapon::AttemptToMaterialize, 0.0, 0, 0);
    UTIL_DropToFloor(this, 0x87001u, 0);
    v15 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      m_flCurrentTime = v15->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    v16 = (*(g_pGameRules->_vptr_CGameRules + 93))(g_pGameRules, this);
    *&v16 = *&v16 + m_flCurrentTime;
    CBaseEntity::SetNextThink(v14, v16, v17, 0);
    return v14;
  }
  else
  {
    v20 = this->m_pEntity;
    v21 = "";
    if ( v20->m_designerName.u.m_Id != 0 )
      v21 = v20->m_designerName.u.m_pAsString;
    Warning("Respawn failed to create %s!\n", v21);
    return 0;
  }
}


// CBaseCombatWeapon::Delete  (line 432, @0x0000000002144460, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
void __fastcall CBaseCombatWeapon::Delete(CBaseCombatWeapon *const this)
{
  double v2; // xmm1_8
  CGlobalVars *v3; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  this->m_pfnTouch.__pfn = 0;
  this->m_pfnTouch.__delta = 0;
  CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v3->m_flCurrentTime + 0.1)), v2, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1036831949), v2, 0);
  }
}


// CBaseCombatWeapon::DestroyItem  (line 440, @0x0000000002144b50, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
void __fastcall CBaseCombatWeapon::DestroyItem(CBaseCombatWeapon *const this)
{
  unsigned __int16 v2; // dx
  __int64 v3; // rsi
  uint32 v4; // eax
  CEntitySystem *v5; // rcx
  CEntityIdentity *v6; // rdx
  __int64 v7; // rsi

  if ( this->m_hOwner.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hOwner.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_hOwner.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  v5 = g_pEntitySystem;
  v6 = (v4 + 2);
  if ( v6 > 1 )
  {
    v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v6 != 0 )
    {
      v7 = v3 & 0x1FF;
      v5 = (8 * v7);
      v3 = 120 * v7;
      v6 = (v6 + v3);
      if ( v6 != 0 && v4 == v6->m_EHandle.m_Index && v6->m_pInstance != 0 )
        (*(v6->m_pInstance->_vptr_IHandleEntity + 317))(v6->m_pInstance, this);
    }
  }
  (*(this->_vptr_IHandleEntity + 384))(this, v3, v6, v5);
}


// CBaseCombatWeapon::Kill  (line 453, @0x0000000002144510, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
void __fastcall CBaseCombatWeapon::Kill(CBaseCombatWeapon *const this)
{
  double v2; // xmm1_8
  CGlobalVars *v3; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  this->m_pfnTouch.__pfn = 0;
  this->m_pfnTouch.__delta = 0;
  CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v3->m_flCurrentTime + 0.1)), v2, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1036831949), v2, 0);
  }
}


// CBaseCombatWeapon::FallInit  (line 468, @0x0000000002146890, libserver.so)  // inlines: HasSpawnFlags, curtime
// calls: CBaseModelEntity::SetModel, CCollisionProperty::SetupPhysicsFromUnscaledModel, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
void __fastcall CBaseCombatWeapon::FallInit(CBaseCombatWeapon *const this)
{
  const char *v2; // rax
  double v3; // xmm1_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  v2 = (*(this->_vptr_IHandleEntity + 335))(this);
  CBaseModelEntity::SetModel(this, v2);
  (*(this->_vptr_IHandleEntity + 51))(this);
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    ((this->m_spawnflags.m_Value & 1) == 0
   ? VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC
   : VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED),
    14,
    0);
  (*(this->_vptr_IHandleEntity + 261))(this);
  CBaseEntity::ThinkSet(this, 0xBE1uLL, 0.0, 0, 0);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v4->m_flCurrentTime + 0.1)), v3, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1036831949), v3, 0);
  }
}


// CBaseCombatWeapon::FallThink  (line 497, @0x0000000002146d40, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, curtime
// calls: CBaseEntity::SetNextThink, CBaseEntity::VPhysicsGetObject, CBaseEntity::EmitSound
// strings: "BaseCombatWeapon.WeaponDrop"
void __fastcall CBaseCombatWeapon::FallThink(CBaseCombatWeapon *const this)
{
  double v1; // xmm1_8
  CGlobalVars *v3; // r12
  double v4; // xmm0_8
  IPhysicsObject *Object; // rax
  char v6; // al
  unsigned __int16 v7; // dx
  __int64 v8; // rsi
  uint32 v9; // eax
  CEntitySystem *v10; // rcx
  CEntityIdentity *v11; // rdx
  __int64 v12; // rsi
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v4) = 0;
    *&v4 = v3->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v4 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v4, v1, 0);
  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( Object != 0 )
    v6 = (*(*Object + 1464LL))(Object);
  else
    v6 = this->m_fFlags.m_Value & 1;
  if ( v6 != 0 )
  {
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v7 = 0x7FFF;
      v8 = 0x7FFF;
    }
    else
    {
      v7 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v8 = v7;
    }
    v9 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v7 & 0x7FFF;
    v10 = g_pEntitySystem;
    v11 = (v9 + 2);
    if ( v11 > 1 )
    {
      v11 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9];
      if ( v11 != 0 )
      {
        v12 = v8 & 0x1FF;
        v10 = (8 * v12);
        v8 = 120 * v12;
        v11 = (v11 + v8);
        if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && v11->m_pInstance != 0 )
          CBaseEntity::EmitSound(this, "BaseCombatWeapon.WeaponDrop", 0.0, 0);
      }
    }
    (*(this->_vptr_IHandleEntity + 381))(this, v8, v11, v10);
  }
}


// CBaseCombatWeapon::Materialize  (line 530, @0x0000000002142c00, libserver.so)  // inlines: DispatchUpdateTransmitState, MarkPVSInformationDirty, RemoveEffects, SetSolid
// calls: CCollisionProperty::SetTriggerCollisionGroup, CBaseEntity::ThinkSet, CBaseEntity::EmitSound, CBaseEntity::DispatchUpdateTransmitState, CBaseAnimating::DoMuzzleFlash
// strings: "BaseCombatWeapon.WeaponMaterialize"
void __fastcall CBaseCombatWeapon::Materialize(CBaseCombatWeapon *const this)
{
  if ( (this->m_fEffects.m_Value & 0x20) != 0 )
  {
    CBaseEntity::EmitSound(this, "BaseCombatWeapon.WeaponMaterialize", 0.0, 0);
    (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
    this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    if ( this->m_pEntity != 0 )
      CBaseEntity::DispatchUpdateTransmitState(this);
    CBaseAnimating::DoMuzzleFlash(this);
  }
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 2);
  CCollisionProperty::SetTriggerCollisionGroup(&this->m_Collision);
  (*(this->_vptr_IHandleEntity + 261))(this);
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
}


// CBaseCombatWeapon::AttemptToMaterialize  (line 551, @0x0000000002145720, libserver.so)  // inlines: curtime
// calls: CBaseEntity::SetNextThink
void __fastcall CBaseCombatWeapon::AttemptToMaterialize(CBaseCombatWeapon *const this)
{
  double v2; // xmm0_8
  double v3; // xmm1_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  unsigned int time; // [rsp+Ch] [rbp-14h]

  *&v2 = (*(g_pGameRules->_vptr_CGameRules + 94))(g_pGameRules, this);
  v3 = 0.0;
  if ( *&v2 == 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 381))(this);
  }
  else
  {
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          time = LODWORD(v2);
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          *&v2 = time;
        }
      }
      *&v3 = LODWORD(v4->m_flCurrentTime);
    }
    *&v2 = *&v2 + *&v3;
    CBaseEntity::SetNextThink(this, v2, v3, 0);
  }
}


// CBaseCombatWeapon::CheckRespawn  (line 567, @0x0000000002140560, libserver.so)
void __fastcall CBaseCombatWeapon::CheckRespawn(CBaseCombatWeapon *const this)
{
  if ( (*(g_pGameRules->_vptr_CGameRules + 92))(g_pGameRules, this) == 1 )
    (*(this->_vptr_IHandleEntity + 154))(this);
}


// CBaseCombatWeapon::ObjectCaps  (line 583, @0x000000000213ffe0, libserver.so)
// calls: CBaseEntity::ObjectCaps, CBaseEntity::IsFollowingEntity
int __fastcall CBaseCombatWeapon::ObjectCaps(CBaseCombatWeapon *const this)
{
  int v2; // ebx

  v2 = CBaseEntity::ObjectCaps(this);
  if ( !CBaseEntity::IsFollowingEntity(this) && (this->m_spawnflags.m_Value & 2) == 0 )
    return v2 | 0x21;
  return v2;
}


// CBaseCombatWeapon::Use  (line 598, @0x000000000216c2a0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ToBasePlayer, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CBaseCombatWeapon::Use(
        CBaseCombatWeapon *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  CVariant v8; // [rsp+10h] [rbp-30h] BYREF

  if ( pActivator != 0 && (*(pActivator->_vptr_IHandleEntity + 140))(pActivator, value) != 0 )
  {
    v8.m_type = 0;
    v8.m_flags = 0;
    v8.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnPlayerUse, pActivator, pCaller, &v8, 0.0);
    if ( (v8.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    if ( (*(pActivator->_vptr_IHandleEntity + 461))(pActivator, this) != 0 )
      (*(this->_vptr_IHandleEntity + 329))(this, pActivator);
    else
      (*(pActivator->_vptr_IHandleEntity + 479))(pActivator, this, 1, 0);
  }
}


// CBaseCombatWeapon::MakeWeaponNameFromEntity  (line 622, @0x000000000213f770, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, SetEntityName
// calls: UTIL_VarArgs, CEntityIdentity::SetEntityName
// strings: "%s_weapon"
void __fastcall CBaseCombatWeapon::MakeWeaponNameFromEntity(CBaseCombatWeapon *const this, CBaseEntity *pOther)
{
  const char *m_pAsString; // rsi
  char *v4; // rax

  m_pAsString = pOther->m_pEntity->m_name.u.m_pAsString;
  if ( m_pAsString != 0 )
  {
    v4 = UTIL_VarArgs("%s_weapon", m_pAsString);
    CEntityIdentity::SetEntityName(this->m_pEntity, v4);
  }
}


