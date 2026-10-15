// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/baseentity_shared.cpp:491
struct AdapterS1FuncContext_t {
	const char * m_pName;  // +0x0

	// sizeof = 16
};

// src/game/shared/baseentity_shared.cpp:593
class CEntityIOInputFunctionS1 : public CEntityIOInputFunction {
public:

	CEntityIOInputFunctionS1();
	void InitVar(const char *, fieldtype_t, int, uint32);
	void InitFunc<CBaseEntity, CBaseEntity>(const char *, fieldtype_t, CBaseEntity *, class , uint32);

	// sizeof = 56
};

// src/game/shared/baseentity_shared.cpp:628
struct DataDescMetaDataInfo_t {
	GetEntityClassFn_t m_getEntityClassFn;  // +0x8

	// sizeof = 24
};

// src/game/shared/baseentity_shared.cpp:661
struct ImportedDesc_t {
	ClassIntrospectionHandle_t m_hClass;  // +0x10
	bool m_bImported;  // +0x18
	bool m_bMapHasFields;  // +0x19

	// sizeof = 32
};

// src/game/shared/baseentity_shared.cpp:2554
struct sFilterInfo {
	int flags;  // +0x0
	char cmd[16];  // +0x4

	// sizeof = 20
};

// src/game/shared/baseentity_shared.cpp:4518
class CAnimTimeSerializer : public CGameNetworkFieldSerializerBase<2, 1> {
public:

	NetworkFieldResult_t Serialize(const NetworkSerializerInfo_t &, int, NetworkableData_t *);
	NetworkFieldResult_t Unserialize(const NetworkUnserializerInfo_t &, int, const NetworkableData_t *);

	// sizeof = 1
};

// src/game/shared/baseentity_shared.cpp:4552
class CSimulationTimeSerializer : public CGameNetworkFieldSerializerBase<2, 1> {
public:

	NetworkFieldResult_t Serialize(const NetworkSerializerInfo_t &, int, NetworkableData_t *);
	NetworkFieldResult_t Unserialize(const NetworkUnserializerInfo_t &, int, const NetworkableData_t *);

	// sizeof = 1
};

// src/game/shared/baseentity_shared.cpp:4576
class CFuncRotatingSimulationTimeSerializer : public CGameNetworkFieldSerializerBase<2, 1> {
public:

	NetworkFieldResult_t Serialize(const NetworkSerializerInfo_t &, int, NetworkableData_t *);
	NetworkFieldResult_t Unserialize(const NetworkUnserializerInfo_t &, int, const NetworkableData_t *);

	// sizeof = 1
};

// src/game/shared/baseentity_shared.cpp:4643
class CStepSimulationFuncRotatingAnglesSerializer : public CGameNetworkFieldSerializerBase<3, 3> {
public:

	NetworkFieldResult_t Serialize(const NetworkSerializerInfo_t &, int, NetworkableData_t *);
	NetworkFieldResult_t Unserialize(const NetworkUnserializerInfo_t &, int, const NetworkableData_t *);

	// sizeof = 1
};

// src/game/shared/baseentity_shared.cpp:4686
class CCropFlagsToPlayerFlagBitsLength : public CGameNetworkFieldSerializerBase<2, 1> {
public:

	NetworkFieldResult_t Serialize(const NetworkSerializerInfo_t &, int, NetworkableData_t *);
	NetworkFieldResult_t Unserialize(const NetworkUnserializerInfo_t &, int, const NetworkableData_t *);

	// sizeof = 1
};

// src/game/shared/baseentity_shared.cpp:4714
class CClampHealth : public CGameNetworkFieldSerializerBase<1, 1> {
public:

	NetworkFieldResult_t Serialize(const NetworkSerializerInfo_t &, int, NetworkableData_t *);
	NetworkFieldResult_t Unserialize(const NetworkUnserializerInfo_t &, int, const NetworkableData_t *);

	// sizeof = 1
};

// src/game/shared/baseentity_shared.cpp:4740
class CIntegerWithMinusOneSerializer : public CGameNetworkFieldSerializerBase<2, 1> {
public:

	NetworkFieldResult_t Serialize(const NetworkSerializerInfo_t &, int, NetworkableData_t *);
	NetworkFieldResult_t Unserialize(const NetworkUnserializerInfo_t &, int, const NetworkableData_t *);

	// sizeof = 1
};

// src/game/shared/baseentity_shared.cpp:4766
class CNormalizedAngle : public CGameNetworkFieldSerializerBase<3, 1> {
public:

	NetworkFieldResult_t Serialize(const NetworkSerializerInfo_t &, int, NetworkableData_t *);
	NetworkFieldResult_t Unserialize(const NetworkUnserializerInfo_t &, int, const NetworkableData_t *);

	// sizeof = 1
};

// src/game/shared/baseentity_shared.cpp:4880
class C_CPointEntity_MapInstall {
	C_CPointEntity_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// SpawnBlood  (line 111, @0x0000000001ed1840, libserver.so)
// calls: UTIL_BloodDrips
// callers: CBasePlayer::DamageEffect, CBasePlayer::TraceAttack
void __fastcall SpawnBlood(const Vector *const vecDir, int bloodColor, double a3, vec_t a4, float a5, float flDamage)
{
  __int64 v6; // rbp
  Vector vecSpota; // [rsp+0h] [rbp-18h] BYREF
  __int64 v8; // [rsp+10h] [rbp-8h]

  v8 = v6;
  *&vecSpota.x = a3;
  vecSpota.z = a4;
  UTIL_BloodDrips(&vecSpota, vecDir, bloodColor, a5);
}


// ToEntityInstance  (line 117, @0x0000000001ed1870, libserver.so)
CEntityInstance *__fastcall ToEntityInstance(CBaseEntity *pEntity)
{
  return pEntity;
}


// GetModelNameFromKeyValues  (line 123, @0x0000000001ed1880, libserver.so)  // inlines: Base, Element, FindKeyHash, GetValue, GetValueString, TempString, operator[]
// callers: CBaseEntity::PrecacheModelFromKeyValues, CBaseModelEntity::SetModelFromKeyValues, CBaseProp::Spawn, CEntityDissolve::Spawn, CEnvShooter::Spawn, CEntityDissolve::Precache, CEnvLaser::Precache, CGenericFlexCycler::Spawn, CFishPool::Spawn, CEnvLaser::Spawn, CFuncMonitor::Spawn, CPropVRTrackedObject::Spawn (24 total)
// globals: CEntityKeyValues::sm_EmptyVariant
const char *__fastcall GetModelNameFromKeyValues(const CEntityKeyValues *pKeyValues, const char *pFallbackModelName)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v4; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v6; // rdx
  CEntityVariant *p_m_value; // rdx
  const char *result; // rax

  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_13:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    result = pFallbackModelName;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type != 30 )
      return result;
    goto LABEL_14;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v4 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v4) == -926958586 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v4 )
      goto LABEL_13;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v4] != -926958586 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v6 = pKeyValues->m_keyValues.m_pElements;
  else
    v6 = 0;
  p_m_value = &v6[v4].m_value;
  result = pFallbackModelName;
  if ( p_m_value->m_type == 30 )
  {
LABEL_14:
    result = p_m_value->m_uint64;
    if ( p_m_value->m_uint64 == 0 || *result == 0 )
      return pFallbackModelName;
  }
  return result;
}


// CBaseEntity::Connect  (line 132, @0x0000000001eea000, libserver.so)
// calls: CEntityInstance::Connect, CBodyComponent::Connect
// callers: CBaseModelEntity::Connect
void __fastcall CBaseEntity::Connect(CBaseEntity *const this)
{
  CEntityInstance::Connect(this);
  CBodyComponent::Connect(this->m_CBodyComponent, this);
}


// CBaseEntity::InPrediction  (line 151, @0x0000000001ed1920, libserver.so)
// callers: CAnimationLayer::DetectAnimEvents, CBaseAnimatingController::DetectAnimEvents, CBasePlayer::CalcPlayerView, CBasePlayer::PlayStepSound
bool __cdecl CBaseEntity::InPrediction()
{
  return 1;
}


// CBaseEntity::IsFirstTimePredicted  (line 162, @0x0000000001ed1930, libserver.so)
// callers: CAnimationLayer::DetectAnimEvents, CBaseAnimatingController::DetectAnimEvents, CBasePlayer::PlayStepSound
bool __cdecl CBaseEntity::IsFirstTimePredicted()
{
  return 1;
}


// CBaseEntity::SetLocalTransform  (line 175, @0x0000000001ed1940, libserver.so)  // inlines: SetLocalAngles, SetLocalOrigin, ToQAngle
// calls: MatrixAngles, CGameSceneNode::SetLocalOrigin, CGameSceneNode::SetLocalAngles
void __fastcall CBaseEntity::SetLocalTransform(CBaseEntity *const this, const matrix3x4_t *const localTransform)
{
  vec_t v3; // xmm0_4
  vec_t v4; // xmm2_4
  Vector vecLocalOrigin; // [rsp+0h] [rbp-30h] BYREF
  QAngle vecLocalAngles; // [rsp+10h] [rbp-20h] BYREF

  v3 = localTransform->m_flMatVal[2][3];
  v4 = localTransform->m_flMatVal[0][3];
  vecLocalOrigin.y = localTransform->m_flMatVal[1][3];
  vecLocalOrigin.z = v3;
  vecLocalOrigin.x = v4;
  MatrixAngles(localTransform, &vecLocalAngles);
  CGameSceneNode::SetLocalOrigin(this->m_pGameSceneNode, &vecLocalOrigin);
  CGameSceneNode::SetLocalAngles(this->m_pGameSceneNode, &vecLocalAngles);
}


// CBaseEntity::SetEntityToWorldTransform  (line 185, @0x0000000001ed19b0, libserver.so)  // inlines: SetAbsAngles, SetAbsOrigin, ToQAngle
// calls: MatrixAngles, CGameSceneNode::SetAbsOrigin, CGameSceneNode::SetAbsAngles
// callers: CDevtestHierarchy::SpinThink
void __fastcall CBaseEntity::SetEntityToWorldTransform(CBaseEntity *const this, const matrix3x4_t *const entityToWorld)
{
  vec_t v3; // xmm0_4
  vec_t v4; // xmm2_4
  Vector vecOrigin; // [rsp+0h] [rbp-30h] BYREF
  QAngle vecAngles; // [rsp+10h] [rbp-20h] BYREF

  v3 = entityToWorld->m_flMatVal[2][3];
  v4 = entityToWorld->m_flMatVal[0][3];
  vecOrigin.y = entityToWorld->m_flMatVal[1][3];
  vecOrigin.z = v3;
  vecOrigin.x = v4;
  MatrixAngles(entityToWorld, &vecAngles);
  CGameSceneNode::SetAbsOrigin(this->m_pGameSceneNode, &vecOrigin);
  CGameSceneNode::SetAbsAngles(this->m_pGameSceneNode, &vecAngles);
}


// CBaseEntity::AddFlag  (line 203, @0x0000000001ed1a20, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<unsigned int>
// calls: AimTarget_ReportEntityFlagsChanged
// callers: CPointClientUIDialog::DialogUse, CBaseAnimating::Dissolve, CBaseAnimating::BecomeRagdollOnClient, CBaseAnimating::Ignite, CBreakableProp::Spawn, CDynamicProp::SpawnServerSide, CWorld::Spawn, CBaseCombatCharacter::FixupBurningServerRagdoll, CBasePlayer::UpdateUnderwaterState, CFuncWall::Spawn, CFuncConveyor::Spawn, CBaseDoor::Spawn (54 total)
void __fastcall CBaseEntity::AddFlag(CBaseEntity *const this, int flags)
{
  unsigned int m_Value; // r12d
  unsigned int v4; // ebx
  unsigned int v5; // edx

  m_Value = this->m_fFlags.m_Value;
  v4 = m_Value | flags;
  v5 = m_Value;
  if ( m_Value != (m_Value | flags) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 440, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fFlags.m_Value = v4;
    v5 = v4;
  }
  AimTarget_ReportEntityFlagsChanged(this, m_Value, v5);
}


// CBaseEntity::RemoveFlag  (line 210, @0x0000000001ed1a80, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<unsigned int>
// calls: AimTarget_ReportEntityFlagsChanged
// callers: CPointClientUIDialog::OnClientDialogFinished, CBaseAnimating::Extinguish, CDynamicProp::FinishSetSequence, CDynamicProp::SpawnServerSide, CBaseEntity::OnRestore, CBasePlayer::UpdateUnderwaterState, CSource2GameClients::ClientDisconnect, CGameUI::Deactivate, CGameMovement::WaterJump, CGameMovement::FinishUnDuckJump, CGameMovement::FinishUnDuck, CTriggerBrush::InputEnable (24 total)
void __fastcall CBaseEntity::RemoveFlag(CBaseEntity *const this, int flagsToRemove)
{
  unsigned int m_Value; // r12d
  unsigned int v4; // ebx
  unsigned int v5; // edx

  m_Value = this->m_fFlags.m_Value;
  v4 = m_Value & ~flagsToRemove;
  v5 = m_Value;
  if ( m_Value != v4 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 440, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fFlags.m_Value = v4;
    v5 = v4;
  }
  AimTarget_ReportEntityFlagsChanged(this, m_Value, v5);
}


// CBaseEntity::ClearFlags  (line 217, @0x0000000001ed1ae0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// calls: AimTarget_ReportEntityFlagsChanged
// callers: CBaseEntity::CBaseEntity, CBasePlayer::CheckObserverSettings, CBasePlayer::SetOrResetInitialState, CPluginBotManager::CreateBot, CDOTAGamerules::CreateDemoPlayers, CDOTAGamerules::ClientDisconnected, CDOTA_Tutorial::AddBot, CDOTA_Tutorial::AddHeroAndBotController, CDOTA_Tutorial::AddBotWithSettings, CDOTA_Grinder::StartHeroes, DebugCreateUnit, CDOTA_TeamCommander::UpdateHeroSelections (19 total)
void __fastcall CBaseEntity::ClearFlags(CBaseEntity *const this)
{
  unsigned int m_Value; // r12d

  m_Value = this->m_fFlags.m_Value;
  if ( m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 440, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fFlags.m_Value = 0;
  }
  AimTarget_ReportEntityFlagsChanged(this, m_Value, 0);
}


// CBaseEntity::ToggleFlag  (line 224, @0x0000000001ed1b30, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<unsigned int>
// calls: AimTarget_ReportEntityFlagsChanged
// callers: CC_God_f, CC_Notarget_f
void __fastcall CBaseEntity::ToggleFlag(CBaseEntity *const this, int flagToToggle)
{
  unsigned int m_Value; // r12d
  unsigned int v4; // ebx
  unsigned int v5; // edx

  m_Value = this->m_fFlags.m_Value;
  v4 = m_Value ^ flagToToggle;
  v5 = m_Value;
  if ( m_Value != (m_Value ^ flagToToggle) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 440, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fFlags.m_Value = v4;
    v5 = v4;
  }
  AimTarget_ReportEntityFlagsChanged(this, m_Value, v5);
}


// CBaseEntity::SetEffects  (line 231, @0x0000000001ed1b90, libserver.so)
// calls: CBaseEntity::DispatchUpdateTransmitState
// callers: CBaseAnimating::CopyAnimationDataFrom, CBaseCombatCharacter::InternalSetEffects, CBaseViewModel::OnViewModelEffectsChanged, CBasePlayer::SetOrResetInitialState
void __fastcall CBaseEntity::SetEffects(CBaseEntity *const this, int nEffects)
{
  if ( nEffects != this->m_fEffects.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 188))(this);
    CBaseEntity::DispatchUpdateTransmitState(this);
  }
}


// CBaseEntity::AddEffects  (line 263, @0x0000000001ed1bd0, libserver.so)
// calls: CBaseEntity::DispatchUpdateTransmitState
// callers: CDevtestHierarchy::ChildDormancyThink, CBaseEntity::SpawnShared, Script_SetRenderingEnabled, CBaseEntity::ScriptAddEffects, CreatePiecesFromPropData, CreatePiece, CreateGibsFromList, CDynamicProp::InputTurnOff, CBreakableProp::Ignite, CBaseAnimating::Spawn, CBaseProp::Spawn, CDynamicProp::SpawnServerSide (163 total)
void __fastcall CBaseEntity::AddEffects(CBaseEntity *const this, int nEffects)
{
  char v2; // r12

  v2 = nEffects;
  (*(this->_vptr_IHandleEntity + 188))(this, nEffects | this->m_fEffects.m_Value);
  if ( (v2 & 0x20) != 0 )
    CBaseEntity::DispatchUpdateTransmitState(this);
}


// CBaseEntity::GetTransmitState  (line 299, @0x0000000001ed1c10, libserver.so)
// calls: CNetworkTransmitComponent::GetTransmitState
int __fastcall CBaseEntity::GetTransmitState(CBaseEntity *const this)
{
  return CNetworkTransmitComponent::GetTransmitState(&this->m_NetworkTransmitComponent);
}


// CBaseEntity::SetTransmitState  (line 311, @0x0000000001ed1c20, libserver.so)
// calls: CNetworkTransmitComponent::SetTransmitState
// callers: CPointClientUIWorldPanel::UpdateTransmitState, CModelPointEntity::ShouldTransmit, CParticleSystem::UpdateTransmitState, CGameSceneNode::ForceParentToBeNetworked, CGameSceneNode::StartHierarchicalAttachment, CInfoGameEventProxy::UpdateTransmitState, CWorld::UpdateTransmitState, CBasePlayer::UpdateTransmitState, CBaseVRHandAttachment::UpdateTransmitState, CBaseCombatWeapon::UpdateTransmitState, CBeam::UpdateTransmitState, CColorCorrection::UpdateTransmitState (82 total)
int __fastcall CBaseEntity::SetTransmitState(CBaseEntity *const this, int nFlag)
{
  return CNetworkTransmitComponent::SetTransmitState(&this->m_NetworkTransmitComponent, nFlag);
}


// CBaseEntity::UpdateTransmitState  (line 322, @0x0000000001ecd140, libserver.so)  // inlines: SetTransmitState
// calls: CNetworkTransmitComponent::SetTransmitState
// callers: CInfoParticleTarget::UpdateTransmitState, CInfoTarget::UpdateTransmitState, CBaseCombatWeapon::UpdateTransmitState, CSoundOpvarSetEntity::UpdateTransmitState, CSoundEventEntity::UpdateTransmitState, CVGuiScreen::UpdateTransmitState
int __fastcall CBaseEntity::UpdateTransmitState(CBaseEntity *const this)
{
  char v2; // al
  CNetworkTransmitComponent *p_m_NetworkTransmitComponent; // rdi

  v2 = (*(this->_vptr_IHandleEntity + 143))(this);
  p_m_NetworkTransmitComponent = &this->m_NetworkTransmitComponent;
  if ( v2 != 0 )
    return CNetworkTransmitComponent::SetTransmitState(p_m_NetworkTransmitComponent, 4);
  else
    return CNetworkTransmitComponent::SetTransmitState(p_m_NetworkTransmitComponent, 0);
}


// CBaseEntity::SetBlocksLOS  (line 377, @0x0000000001ed1c30, libserver.so)  // inlines: AddEFlags, RemoveEFlags
// callers: CBreakableProp::SetPropDataBlocksLOS, CBreakableProp::OnPhysGunDrop, CBaseProp::CalculateBlockLOS, CBreakableProp::OnPhysGunPickup, CBaseCombatCharacter::Spawn, CBaseCombatWeapon::Spawn, CBreakable::SetPropDataBlocksLOS, CItem::Spawn, CBasePlayer::SetOrResetInitialState, CPropDoorRotatingBreakable::OnTakeDamage, CEconWearable::Spawn
void __fastcall CBaseEntity::SetBlocksLOS(CBaseEntity *const this, bool bBlocksLOS)
{
  if ( bBlocksLOS )
    this->m_iEFlags &= ~0x2000000u;
  else
    this->m_iEFlags |= 0x2000000u;
}


// CBaseEntity::BlocksLOS  (line 391, @0x0000000001ed1c60, libserver.so)
// callers: CBreakableProp::OnPhysGunPickup, CTraceFilterLOS::ShouldHitEntity, CTraceFilterNoCombatCharacters::ShouldHitEntity, CTraceFilterNoCombatCharacters_ShouldHitEntity, TraceFilterNoCombatCharacters, CPropDoorRotatingBreakable::OnTakeDamage, VisionTraceFilterFunction
bool __fastcall CBaseEntity::BlocksLOS(CBaseEntity *const this)
{
  return ((this->m_iEFlags >> 25) ^ 1) & 1;
}


// CBaseEntity::SetAIWalkable  (line 398, @0x0000000001ed1c80, libserver.so)  // inlines: AddEFlags, RemoveEFlags
// callers: CBreakableProp::SetPropDataIsAIWalkable, CBreakable::SetPropDataIsAIWalkable
void __fastcall CBaseEntity::SetAIWalkable(CBaseEntity *const this, bool bBlocksLOS)
{
  if ( bBlocksLOS )
    this->m_iEFlags &= ~0x4000000u;
  else
    this->m_iEFlags |= 0x4000000u;
}


// CBaseEntity::IsAIWalkable  (line 412, @0x0000000001ed1cb0, libserver.so)
// callers: INextBot::IsAbleToClimbOnto
bool __fastcall CBaseEntity::IsAIWalkable(CBaseEntity *const this)
{
  return ((this->m_iEFlags >> 26) ^ 1) & 1;
}


// CBaseEntity::StartTouch  (line 421, @0x0000000001ecc510, libserver.so)  // inlines: GetMoveParent
// calls: CGameSceneNode::GetOwnerEntity
// callers: CItemGeneric::OnHelperStartTrigger, CItemGenericTriggerHelper::StartTouch, CTriggerBrush::StartTouch, CPhysBox::StartTouch
void __fastcall CBaseEntity::StartTouch(CBaseEntity *const this, CBaseEntity *pOther)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax

  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
  {
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    if ( OwnerEntity != 0 )
      (*(OwnerEntity->_vptr_IHandleEntity + 111))(OwnerEntity, pOther);
  }
}


// CBaseEntity::Touch  (line 435, @0x0000000001ecc560, libserver.so)  // inlines: GetMoveParent
// calls: CGameSceneNode::GetOwnerEntity
// callers: NextBotCombatCharacter::Touch
void __fastcall CBaseEntity::Touch(CBaseEntity *const this, CBaseEntity *pOther)
{
  void (*pfn)(CEntityInstance *, CBaseEntity *); // rax
  CEntityInstance *v5; // rdi
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax

  pfn = this->m_pfnTouch.__pfn;
  if ( pfn != 0 )
  {
    v5 = (this + this->m_pfnTouch.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(v5->_vptr_IHandleEntity + pfn - 1);
    pfn(v5, pOther);
  }
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
  {
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    if ( OwnerEntity != 0 )
      (*(OwnerEntity->_vptr_IHandleEntity + 112))(OwnerEntity, pOther);
  }
}


// CBaseEntity::EndTouch  (line 454, @0x0000000001ecc5e0, libserver.so)  // inlines: GetMoveParent
// calls: CGameSceneNode::GetOwnerEntity
// callers: CItemGeneric::OnHelperEndTrigger, CItemGenericTriggerHelper::EndTouch, CTriggerBrush::EndTouch
void __fastcall CBaseEntity::EndTouch(CBaseEntity *const this, CBaseEntity *pOther)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax

  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
  {
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    if ( OwnerEntity != 0 )
      (*(OwnerEntity->_vptr_IHandleEntity + 113))(OwnerEntity, pOther);
  }
}


// CBaseEntity::SetCheckUntouch  (line 468, @0x0000000001ed1cd0, libserver.so)  // inlines: AddEFlags, RemoveEFlags
// calls: EntityTouch_Add
// callers: CBaseEntity::PhysicsTouchTriggers, CBaseEntity::OnRestore, CBaseEntity::CBaseEntity, CCollisionProperty::CheckForUntouch, CBaseEntity::PhysicsCheckForEntityUntouch
void __fastcall CBaseEntity::SetCheckUntouch(CBaseEntity *const this, bool check)
{
  int m_iEFlags; // eax

  if ( check )
  {
    m_iEFlags = this->m_iEFlags;
    ++this->touchStamp;
    if ( (m_iEFlags & 0x1000000) == 0 )
    {
      this->m_iEFlags = m_iEFlags | 0x1000000;
      EntityTouch_Add(this);
    }
  }
  else
  {
    this->m_iEFlags &= ~0x1000000u;
  }
}


// InputFunctionAdapterS1Func  (line 497, @0x0000000001ef40c0, libserver.so)  // inlines: Allocate, Allocate<QAngle>, Allocate<Quaternion>, Allocate<Vector2D>, Allocate<Vector>, AssignTo<CVariantDefaultAllocator>, CVariantBase, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, CopyFrom<FastDelegate1<inputdata_t&, void> >, FieldType, Free, GetClassNameAsCStr, GetClassname, GetDebugName, SetAbstractDelegate, SetMementoFrom, String, V_strlen, inputdata_t, memcpy, operator(), operator=, ~CVariantBase, ~inputdata_t
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CVariantBase<CVariantDefaultAllocator>::Convert, CEntityIdentity::GetDebugName, Warning, strlen, memcpy, CVariantBase<CVariantDefaultAllocator>::Set, _Unwind_Resume
// strings: "!! ERROR: bad input/output link:\n!! %s(%s,%s) doesn't match type from %s(%s)\n", "<null>"
// globals: jpt_1EF4123
void __fastcall InputFunctionAdapterS1Func(
        const CUtlAbstractDelegate *const memberFunc,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        int nOutputID,
        void *pVContext,
        const CVariant *const value)
{
  int16 m_type; // cx
  _DWORD *v12; // rax
  fieldtype_t v13; // esi
  int v14; // eax
  const char *DebugName; // rax
  CEntityIdentity *m_pEntity; // rdx
  const char *m_pAsString; // rbx
  const char *v18; // r13
  const char *v19; // rax
  CEntityIdentity *v20; // rcx
  const char *v21; // rsi
  _DWORD *v22; // rax
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v24; // rdi
  _DWORD *v25; // rax
  _DWORD *v26; // rax
  unsigned int v27; // [rsp+Ch] [rbp-84h]
  char *sb; // [rsp+10h] [rbp-80h]
  char *sc; // [rsp+10h] [rbp-80h]
  char *s; // [rsp+10h] [rbp-80h]
  char *sd; // [rsp+10h] [rbp-80h]
  char *sa; // [rsp+10h] [rbp-80h]
  int nValue; // [rsp+2Ch] [rbp-64h] BYREF
  inputdata_t data; // [rsp+30h] [rbp-60h] BYREF

  data.value.m_flags = 0;
  data.value.m_type = 0;
  data.pActivator = pActivator;
  data.pCaller = pCaller;
  m_type = value->m_type;
  data.value.m_uint64 = 0;
  switch ( m_type )
  {
    case 3:
      sc = value->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(&data.value);
      data.value.m_type = 3;
      v22 = (**g_pMemAlloc)(g_pMemAlloc, 12);
      data.value.m_uint64 = v22;
      *v22 = *sc;
      v22[1] = *(sc + 1);
      v22[2] = *(sc + 2);
      data.nOutputID = nOutputID;
      v13 = *(pVContext + 2);
      data.value.m_flags |= 1u;
      v14 = value->m_type;
      if ( v13 != v14 )
        goto LABEL_4;
      goto LABEL_15;
    case 4:
      s = value->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(&data.value);
      data.value.m_type = 4;
      goto LABEL_20;
    case 25:
      sd = value->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(&data.value);
      data.value.m_type = 25;
      v26 = (**g_pMemAlloc)(g_pMemAlloc, 8);
      data.value.m_uint64 = v26;
      *v26 = *sd;
      v26[1] = *(sd + 1);
      data.value.m_flags |= 1u;
      m_type = value->m_type;
      break;
    case 27:
      s = value->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(&data.value);
      data.value.m_type = 27;
LABEL_20:
      v25 = (**g_pMemAlloc)(g_pMemAlloc, 16);
      data.value.m_uint64 = v25;
      *v25 = *s;
      v25[1] = *(s + 1);
      v25[2] = *(s + 2);
      v25[3] = *(s + 3);
      data.value.m_flags |= 1u;
      m_type = value->m_type;
      break;
    case 30:
      sa = value->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(&data.value);
      data.value.m_type = 30;
      if ( sa != 0 )
      {
        v27 = strlen(sa) + 1;
        data.value.m_uint64 = (**g_pMemAlloc)(g_pMemAlloc, v27);
        memcpy(data.value.m_pData, sa, v27);
        data.value.m_flags |= 1u;
      }
      else
      {
        data.value.m_uint64 = 0;
      }
      m_type = value->m_type;
      break;
    case 39:
      sb = value->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(&data.value);
      data.value.m_type = 39;
      v12 = (**g_pMemAlloc)(g_pMemAlloc, 12);
      data.value.m_uint64 = v12;
      *v12 = *sb;
      v12[1] = *(sb + 1);
      v12[2] = *(sb + 2);
      data.value.m_flags |= 1u;
      m_type = value->m_type;
      break;
    default:
      data.value.m_type = m_type;
      data.value.m_uint64 = value->m_uint64;
      break;
  }
  v13 = *(pVContext + 2);
  v14 = m_type;
  data.nOutputID = nOutputID;
  if ( v13 == m_type )
    goto LABEL_15;
LABEL_4:
  if ( v14 == 0 )
  {
    if ( v13 != fieldtype_t::FIELD_STRING )
    {
      nValue = 0;
      CVariantBase<CVariantDefaultAllocator>::Set(&data.value, v13, &nValue);
    }
    goto LABEL_15;
  }
  if ( CVariantBase<CVariantDefaultAllocator>::Convert(&data.value, v13) )
  {
LABEL_15:
    pfn = memberFunc->m_pFunction.__pfn;
    v24 = (memberFunc->m_pthis + memberFunc->m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v24 - 1);
    (pfn)(v24, &data);
    if ( (data.value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, data.value.m_uint64);
    return;
  }
  if ( pCaller != 0 )
  {
    DebugName = CEntityIdentity::GetDebugName(pCaller->m_pEntity);
    m_pEntity = pCaller->m_pEntity;
    m_pAsString = "";
    v18 = DebugName;
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  }
  else
  {
    v18 = "<null>";
    m_pAsString = "<null>";
  }
  v19 = CEntityIdentity::GetDebugName(pComponentOwner->m_pEntity);
  v20 = pComponentOwner->m_pEntity;
  v21 = "";
  if ( v20->m_designerName.u.m_Id != 0 )
    v21 = v20->m_designerName.u.m_pAsString;
  Warning(
    "!! ERROR: bad input/output link:\n!! %s(%s,%s) doesn't match type from %s(%s)\n",
    v21,
    v19,
    "",
    m_pAsString,
    v18);
  if ( (data.value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, data.value.m_uint64);
}


// InputFunctionAdapterS1Var  (line 539, @0x0000000001ef3630, libserver.so)  // inlines: Allocate, Allocate<QAngle>, Allocate<Quaternion>, Allocate<Vector2D>, AssignTo, AssignTo<CVariantDefaultAllocator>, AssignTo<char>, AssignTo<double>, CVariantBase, Color, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, FieldType, Free, FromUint32, GetClassNameAsCStr, GetClassname, GetDebugName, SetOther, SetRawColor, String, V_strlen, _V_strcmp, atoi, memcpy, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CVariantBase<CVariantDefaultAllocator>::Set, Warning, CVariantBase<CVariantDefaultAllocator>::AssignTo, V_StringToColor, VariantFieldTypeName, strlen, memcpy, strtol, CVariantBase<CVariantDefaultAllocator>::Convert, CEntityIdentity::GetDebugName, V_sscanf (14 total)
// strings: "false", "true", "Invalid conversion : CString '%s' to bool\n", "character", "No free conversion of %s variant to %s right now\n", "float64" (14 total)
// globals: jpt_1EF36B1, jpt_1EF374F, jpt_1EF38E7, jpt_1EF3928, jpt_1EF3950, jpt_1EF39C8, jpt_1EF3A17
// local variable allocation has failed, the output may be wrong!
void __fastcall InputFunctionAdapterS1Var(
        const CUtlAbstractDelegate *const memberFunc,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        int nOutputID,
        void *pContext,
        const CVariant *const value)
{
  _BYTE *v7; // rsi
  unsigned __int64 v8; // r15
  fieldtype_t v9; // r12d
  __int64 v11; // rcx
  uint64 m_type; // rdx
  int v13; // eax
  _DWORD *v14; // rax
  bool v15; // zf
  float *v16; // r15
  const char *v17; // rdi
  const char *v18; // rdi
  char *v19; // rdi
  char *v20; // rdi
  const char *v21; // rdi
  const char *v22; // rdi
  int16 v23; // di
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // ax
  int16 v26; // di
  const Vector *m_uint64; // rax
  int16 v28; // di
  int16 v29; // di
  uint64 v30; // rsi
  const char *v31; // rax
  const char *v32; // rax
  _DWORD *v33; // rax
  _DWORD *v34; // rax
  const char *v35; // rax
  int m_int; // eax
  int v37; // eax
  const char *v38; // rax
  const char *v39; // rax
  double m_char; // xmm0_8
  const char *DebugName; // rax
  CEntityIdentity *m_pEntity; // rdx
  const char *m_pAsString; // r12
  const char *v44; // r13
  const char *v45; // rax
  CEntityIdentity *v46; // rcx
  const char *v47; // rsi
  const char *v48; // rax
  const char *v49; // rax
  const char *v50; // rax
  unsigned int v51; // [rsp+Ch] [rbp-74h]
  char *s; // [rsp+10h] [rbp-70h]
  char *sa; // [rsp+10h] [rbp-70h]
  char *sb; // [rsp+10h] [rbp-70h]
  char *sc; // [rsp+10h] [rbp-70h]
  int nValue; // [rsp+2Ch] [rbp-54h] BYREF
  CVariant temp; // [rsp+30h] [rbp-50h] BYREF
  int v59; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v60; // [rsp+48h] [rbp-38h]

  v7 = 0;
  v8 = pContext >> 8;
  v9 = pContext;
  v11 = 0;
  v60 = __readfsqword(0x28u);
  temp.m_type = 0;
  temp.m_flags = 0;
  temp.m_uint64 = 0;
  m_type = value->m_type;
  v13 = m_type;
  if ( pContext == m_type )
    goto LABEL_8;
  if ( m_type == 0 && pContext == 2 )
  {
    v16 = (pComponentOwner + v8);
LABEL_41:
    if ( m_type != 0 )
    {
      v49 = VariantFieldTypeName(m_type);
      Warning("No free conversion of %s variant to string_t right now\n", v49);
    }
    else
    {
LABEL_42:
      *v16 = 0;
    }
    goto LABEL_34;
  }
  switch ( m_type )
  {
    case 3:
      s = value->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(&temp);
      temp.m_type = 3;
      goto LABEL_5;
    case 4:
      sb = value->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(&temp);
      temp.m_type = 4;
      goto LABEL_77;
    case 25:
      sc = value->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(&temp);
      temp.m_type = 25;
      v34 = (**g_pMemAlloc)(g_pMemAlloc, 8);
      temp.m_uint64 = v34;
      *v34 = *sc;
      v34[1] = *(sc + 1);
      temp.m_flags |= 1u;
      v13 = temp.m_type;
      goto LABEL_6;
    case 27:
      sb = value->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(&temp);
      temp.m_type = 27;
LABEL_77:
      v33 = (**g_pMemAlloc)(g_pMemAlloc, 16);
      temp.m_uint64 = v33;
      *v33 = *sb;
      v33[1] = *(sb + 1);
      v33[2] = *(sb + 2);
      v33[3] = *(sb + 3);
      temp.m_flags |= 1u;
      v13 = temp.m_type;
      goto LABEL_6;
    case 30:
      sa = value->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(&temp);
      temp.m_type = 30;
      if ( sa != 0 )
      {
        v51 = strlen(sa) + 1;
        temp.m_uint64 = (**g_pMemAlloc)(g_pMemAlloc, v51);
        memcpy(temp.m_pData, sa, v51);
        v13 = temp.m_type;
        temp.m_flags |= 1u;
LABEL_6:
        if ( v13 == 0 )
        {
          nValue = 0;
          CVariantBase<CVariantDefaultAllocator>::Set(&temp, v9, &nValue);
LABEL_8:
          v15 = (pComponentOwner + v8) == 0;
          v16 = (pComponentOwner + v8);
          switch ( v9 )
          {
            case fieldtype_t::FIELD_FLOAT:
              CVariantBase<CVariantDefaultAllocator>::AssignTo(value, v16);
              goto LABEL_34;
            case fieldtype_t::FIELD_STRING:
              m_type = value->m_type;
              goto LABEL_41;
            case fieldtype_t::FIELD_VECTOR:
              v26 = value->m_type;
              if ( v26 == 3 )
                goto LABEL_58;
              if ( value->m_type <= 3 )
              {
                if ( v26 != 0 )
                {
LABEL_132:
                  v50 = VariantFieldTypeName(v26);
                  Warning("No free conversion of %s variant to Vector right now\n", v50);
LABEL_34:
                  if ( pComponentOwner != 0 )
                    (*(pComponentOwner->_vptr_IHandleEntity + 21))(pComponentOwner, v7, m_type, v11, *&nOutputID);
                  if ( (temp.m_flags & 1) != 0 )
                    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, temp.m_uint64, m_type, v11, *&nOutputID);
                  return;
                }
              }
              else
              {
                if ( v26 != 30 )
                {
                  if ( v26 == 39 )
                  {
LABEL_58:
                    m_uint64 = value->m_uint64;
LABEL_59:
                    *v16 = m_uint64->x;
                    v16[1] = m_uint64->y;
                    v16[2] = m_uint64->z;
                    goto LABEL_34;
                  }
                  goto LABEL_132;
                }
                if ( V_sscanf(value->m_uint64, "%g %g %g", v16, v16 + 1, v16 + 2) == 3 )
                  goto LABEL_34;
              }
              m_uint64 = &vec3_origin;
              goto LABEL_59;
            case fieldtype_t::FIELD_INTEGER:
              v25 = value->m_type;
              v11 = v25;
              switch ( v25 )
              {
                case 0u:
                  goto LABEL_89;
                case 1u:
                  goto LABEL_88;
                case 5u:
                  goto LABEL_86;
                case 6u:
                  goto LABEL_90;
                case 0x1Au:
                  goto LABEL_99;
                case 0x1Eu:
                  goto LABEL_98;
                case 0x21u:
                  goto LABEL_95;
                case 0x22u:
                  goto LABEL_94;
                case 0x25u:
                  goto LABEL_91;
                default:
                  goto LABEL_105;
              }
            case fieldtype_t::FIELD_BOOLEAN:
              v24 = value->m_type;
              v11 = v24;
              switch ( v24 )
              {
                case 0u:
                  goto LABEL_71;
                case 1u:
                  LOBYTE(m_type) = 0;
                  *v16 = value->m_float != 0.0;
                  break;
                case 5u:
                case 0x25u:
                  *v16 = value->m_int != 0;
                  break;
                case 6u:
                  goto LABEL_87;
                case 0x1Au:
                case 0x21u:
                  *v16 = value->m_uint64 != 0;
                  break;
                case 0x1Eu:
                  v17 = "0";
                  v11 = 2;
                  v7 = value->m_uint64;
                  do
                  {
                    if ( v11 == 0 )
                      break;
                    v15 = *v7++ == *v17++;
                    --v11;
                  }
                  while ( v15 );
                  if ( v15 )
                    goto LABEL_71;
                  v18 = "false";
                  v11 = 6;
                  v7 = value->m_uint64;
                  do
                  {
                    if ( v11 == 0 )
                      break;
                    v15 = *v7++ == *v18++;
                    --v11;
                  }
                  while ( v15 );
                  if ( v15 )
                    goto LABEL_71;
                  v19 = "no";
                  v11 = 3;
                  v7 = value->m_uint64;
                  do
                  {
                    if ( v11 == 0 )
                      break;
                    v15 = *v7++ == *v19++;
                    --v11;
                  }
                  while ( v15 );
                  if ( v15 )
                    goto LABEL_71;
                  v20 = "1";
                  v11 = 2;
                  v7 = value->m_uint64;
                  do
                  {
                    if ( v11 == 0 )
                      break;
                    v15 = *v7++ == *v20++;
                    --v11;
                  }
                  while ( v15 );
                  if ( v15 )
                    goto LABEL_135;
                  v21 = "true";
                  v11 = 5;
                  v7 = value->m_uint64;
                  do
                  {
                    if ( v11 == 0 )
                      break;
                    v15 = *v7++ == *v21++;
                    --v11;
                  }
                  while ( v15 );
                  if ( v15 )
                    goto LABEL_135;
                  v22 = "yes";
                  v11 = 4;
                  v7 = value->m_uint64;
                  do
                  {
                    if ( v11 == 0 )
                      break;
                    v15 = *v7++ == *v22++;
                    --v11;
                  }
                  while ( v15 );
                  if ( v15 )
LABEL_135:
                    *v16 = 1;
                  else
                    Warning("Invalid conversion : CString '%s' to bool\n", value->m_pszString);
                  break;
                case 0x22u:
                  LOBYTE(m_type) = 0;
                  *v16 = value->m_float64 != 0.0;
                  break;
                default:
                  v39 = VariantFieldTypeName(v24);
                  Warning("No conversion from %s to bool now\n", v39);
                  break;
              }
              goto LABEL_34;
            case fieldtype_t::FIELD_SHORT:
              v25 = value->m_type;
              v11 = v25;
              switch ( v25 )
              {
                case 0u:
LABEL_89:
                  *v16 = 0.0;
                  break;
                case 1u:
LABEL_88:
                  *v16 = value->m_float;
                  break;
                case 5u:
                  goto LABEL_86;
                case 6u:
LABEL_90:
                  *v16 = value->m_char;
                  break;
                case 0x1Au:
LABEL_99:
                  m_type = 0x7FFFFFFF;
                  if ( value->m_int64 <= 0x7FFFFFFF )
                  {
                    m_type = 0xFFFFFFFF80000000LL;
                    if ( value->m_uint64 >= 0xFFFFFFFF80000000LL )
                      m_type = value->m_uint64;
                  }
                  *v16 = m_type;
                  break;
                case 0x1Eu:
LABEL_98:
                  *v16 = strtol(value->m_pszString, 0, 10);
                  break;
                case 0x21u:
LABEL_95:
                  m_type = value->m_uint64;
                  v37 = 0x7FFFFFFF;
                  if ( value->m_uint64 <= 0x7FFFFFFE )
                    v37 = value->m_uint64;
                  *v16 = v37;
                  break;
                case 0x22u:
LABEL_94:
                  *v16 = value->m_float64;
                  break;
                case 0x25u:
LABEL_91:
                  m_type = value->m_uint;
                  m_int = 0x7FFFFFFF;
                  if ( m_type <= 0x7FFFFFFE )
                    m_int = value->m_int;
                  *v16 = m_int;
                  break;
                default:
LABEL_105:
                  v38 = VariantFieldTypeName(v25);
                  Warning("No conversion from %s to int now\n", v38);
                  break;
              }
              goto LABEL_34;
            case fieldtype_t::FIELD_CHARACTER:
              v28 = value->m_type;
              if ( v28 == 8 )
              {
LABEL_87:
                *v16 = value->m_char;
              }
              else if ( (v28 & 0xFFFD) == 0x19 || (v28 - 3) <= 1u || v28 == 39 || v28 == 30 )
              {
                v31 = VariantFieldTypeName(v28);
                Warning("No free conversion of %s variant to %s right now\n", v31, "character");
LABEL_71:
                *v16 = 0;
              }
              else
              {
                switch ( v28 )
                {
                  case 0:
                    goto LABEL_71;
                  case 1:
                    *v16 = value->m_float;
                    break;
                  case 5:
                  case 37:
                    *v16 = value->m_int;
                    break;
                  case 6:
                    goto LABEL_87;
                  case 26:
                  case 33:
                    *v16 = value->m_uint64;
                    break;
                  case 34:
                    *v16 = value->m_float64;
                    break;
                  default:
                    goto LABEL_34;
                }
              }
              goto LABEL_34;
            case fieldtype_t::FIELD_COLOR32:
              v29 = value->m_type;
              if ( v29 == 9 )
              {
LABEL_86:
                *v16 = value->m_float;
              }
              else if ( v29 == 30 )
              {
                v30 = value->m_uint64;
                v59 = 0;
                V_StringToColor(&v59, v30, m_type, v11, *&nOutputID);
                *v16 = v59;
              }
              else
              {
                v35 = VariantFieldTypeName(v29);
                Warning("No free conversion of %s variant to Color right now\n", v35);
              }
              goto LABEL_34;
            case fieldtype_t::FIELD_RESOURCE:
              if ( value->m_type == 28 )
              {
                *v16 = value->m_uint64;
              }
              else
              {
                v48 = VariantFieldTypeName(value->m_type);
                Warning("No free conversion of %s variant to ResourceHandle_t right now\n", v48);
              }
              goto LABEL_34;
            case fieldtype_t::FIELD_FLOAT64:
              v23 = value->m_type;
              if ( v23 == 34 )
              {
                *v16 = value->m_uint64;
              }
              else
              {
                if ( (v23 & 0xFFFD) == 0x19 || (v23 - 3) <= 1u || v23 == 39 || v23 == 30 )
                {
                  v32 = VariantFieldTypeName(v23);
                  Warning("No free conversion of %s variant to %s right now\n", v32, "float64");
                  goto LABEL_42;
                }
                switch ( v23 )
                {
                  case 0:
                    goto LABEL_42;
                  case 1:
                    *v16 = value->m_float;
                    goto LABEL_34;
                  case 5:
                    *v16 = value->m_int;
                    goto LABEL_34;
                  case 6:
                    m_char = value->m_char;
                    goto LABEL_113;
                  case 8:
                    *v16 = value->m_char;
                    goto LABEL_34;
                  case 26:
                    *v16 = value->m_uint64;
                    goto LABEL_34;
                  case 33:
                    if ( value->m_int64 < 0 )
                    {
                      m_type = value->m_uint64 & 1 | (value->m_uint64 >> 1);
                      m_char = m_type + m_type;
                    }
                    else
                    {
                      m_char = value->m_uint64;
                    }
LABEL_113:
                    *v16 = m_char;
                    break;
                  case 37:
                    *v16 = value->m_int;
                    break;
                  default:
                    goto LABEL_34;
                }
              }
              goto LABEL_34;
            default:
              goto LABEL_34;
          }
        }
      }
      else
      {
        temp.m_uint64 = 0;
      }
      if ( CVariantBase<CVariantDefaultAllocator>::Convert(&temp, v9) )
        goto LABEL_8;
      if ( pCaller != 0 )
      {
        DebugName = CEntityIdentity::GetDebugName(pCaller->m_pEntity);
        m_pEntity = pCaller->m_pEntity;
        m_pAsString = "";
        v44 = DebugName;
        if ( m_pEntity->m_designerName.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      }
      else
      {
        v44 = "<null>";
        m_pAsString = "<null>";
      }
      v45 = CEntityIdentity::GetDebugName(pComponentOwner->m_pEntity);
      v46 = pComponentOwner->m_pEntity;
      v47 = "";
      if ( v46->m_designerName.u.m_Id != 0 )
        v47 = v46->m_designerName.u.m_pAsString;
      Warning(
        "!! ERROR: bad input/output link:\n!! %s(%s,%s) doesn't match type from %s(%s)\n",
        v47,
        v45,
        "",
        m_pAsString,
        v44);
      CVariantBase<CVariantDefaultAllocator>::Free(&temp);
      return;
    case 39:
      s = value->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(&temp);
      temp.m_type = 39;
LABEL_5:
      v14 = (**g_pMemAlloc)(g_pMemAlloc, 12);
      temp.m_uint64 = v14;
      *v14 = *s;
      v14[1] = *(s + 1);
      v14[2] = *(s + 2);
      temp.m_flags |= 1u;
      v13 = temp.m_type;
      goto LABEL_6;
    default:
      temp.m_type = value->m_type;
      temp.m_uint64 = value->m_uint64;
      goto LABEL_6;
  }
}


// AddDatadescMetadataKeys  (line 639, @0x0000000001ed1d20, libserver.so)
// calls: operator new
// callers: CBaseClientUIEntity::AddDatadescMetadataKeys, DataMapInit<CBaseClientUIEntity>, CPointClientUIWorldPanel::AddDatadescMetadataKeys, DataMapInit<CPointClientUIWorldPanel>, CPointClientUIWorldTextPanel::AddDatadescMetadataKeys, DataMapInit<CPointClientUIWorldTextPanel>, CDevtestHierarchy::AddDatadescMetadataKeys, DataMapInit<CDevtestHierarchy>, CPointEntity::AddDatadescMetadataKeys, DataMapInit<CPointEntity>, CEnvCombinedLightProbeVolume::AddDatadescMetadataKeys, DataMapInit<CEnvCombinedLightProbeVolume> (712 total)
// globals: s_pFirst
void __fastcall AddDatadescMetadataKeys(datamap_t *pDataMap, GetEntityClassFn_t getEntityClassFn)
{
  DataDescMetaDataInfo_t *v4; // rax
  DataDescMetaDataInfo_t *v5; // rdx

  if ( getEntityClassFn != 0 )
  {
    v4 = operator new(0x18u);
    v5 = s_pFirst;
    v4->m_pDataMap = pDataMap;
    v4->m_getEntityClassFn = getEntityClassFn;
    s_pFirst = v4;
    v4->m_pNext = v5;
  }
}


// DataDescImportLessFunc  (line 670, @0x0000000001ecb840, libserver.so)
bool __fastcall DataDescImportLessFunc(const ImportedDesc_t *const lhs, const ImportedDesc_t *const rhs)
{
  return lhs->m_pDataMap < rhs->m_pDataMap;
}


// InitDataDescSchema  (line 673, @0x0000000001ee8420, libserver.so)  // inlines: AddToTail, As<CSchemaType_DeclaredClass>, CEntityIOInputFunction, CUtlAbstractDelegate, CUtlDelegate<CBaseEntity, CBaseEntity>, CUtlMemory, CUtlVector, CUtlVectorBase, Convert<CBaseEntity, void (CBaseEntity::*)(inputdata_t&), void (detail::GenericClass::*)()>, ConvertToExternalMemory, CopyConstruct<typedescription_t*>, Element, EnsureCapacity, EntInput_t, FastDelegate1<CBaseEntity, CBaseEntity>, Get, GrowMemory, InitFunc<CBaseEntity, CBaseEntity>, InitVar, InternalAs, Purge, Purge_FixedGrowable, RemoveAll, SchemaTypeOf<char*>, SchemaTypeOf<void>, SchemaTypeScope, SetMementoFrom, _V_strcmp, bindmemfunc<CBaseEntity, void (CBaseEntity::*)(inputdata_t&)>, memcpy, operator=, operator[], strchr, ~CSchemaInheritanceIterator, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CSchemaInheritanceIterator::CSchemaInheritanceIterator, CSchemaInheritanceIterator::GetClass, strcmp, CUtlRBTree<ImportedDesc_t, short unsigned int, bool (*)(const ImportedDesc_t&, const ImportedDesc_t&), CUtlMemory<UtlRBTreeNode_t<ImportedDesc_t, short unsigned int>, short unsigned int> >::Find, CSchemaInheritanceIterator::Advance, CSchemaInheritanceIterator::IsValid, CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge, CUtlRBTree<ImportedDesc_t, short unsigned int, bool (*)(const ImportedDesc_t&, const ImportedDesc_t&), CUtlMemory<UtlRBTreeNode_t<ImportedDesc_t, short unsigned int>, short unsigned int> >::Insert, Warning, strchr, operator new [], memcpy (23 total)
// callers: DataDescSchemaInit
// strings: "Datadesc import error: Field \"%s\" in the datadesc for class \"%s\" cannot be imported, , "Datadesc import error: Field \"%s\" in the datadesc for class \"%s\" points to a member o, "MHasSubKeyfields", "MKeyfieldname", "Datadesc error: Embedded structure \"%s\" cannot have outputs!\n", "Datadesc import error: Field \"%s\" in the datadesc for class \"%s\" has not been schemat (10 total)
// globals: InputFunctionAdapterS1Var(CUtlAbstractDelegate const&,CEntityInstance *,CEntityInstance *,CEntityInstance *,int,void *,CVariantBase<CVariantDefaultAllocator> co, InputFunctionAdapterS1Func(CUtlAbstractDelegate const&,CEntityInstance *,CEntityInstance *,CEntityInstance *,int,void *,CVariantBase<CVariantDefaultAllocator> c, SchemaTypeOf<void>(void)::s_pTypeOf, SchemaTypeOf<char *>(void)::s_pTypeOf
bool __fastcall InitDataDescSchema(
        datamap_t *dmapin,
        ClassIntrospectionHandle_t hClass,
        CUtlRBTree<ImportedDesc_t,short unsigned int,bool (*)(const ImportedDesc_t&,const ImportedDesc_t&),CUtlMemory<UtlRBTreeNode_t<ImportedDesc_t,short unsigned int>,short unsigned int> > *const knownDatamaps)
{
  datamap_t *v3; // r14
  ClassIntrospectionHandle_t Class; // r15
  unsigned __int16 v5; // ax
  __int64 v6; // rdx
  UtlRBTreeNode_t<ImportedDesc_t,short unsigned int> *v7; // rax
  uint32 v8; // eax
  int dataNumFields; // ebx
  int v11; // ebx
  __int64 v12; // rax
  typedescription_t **v13; // rax
  __int64 v14; // r13
  int v15; // r12d
  typedescription_t *v16; // rbx
  SchemaBaseClassTraversal_t fieldType; // edx
  char *v18; // rax
  SchemaBaseClassTraversal_t v19; // edx
  char v20; // cl
  char *v21; // rax
  size_t v22; // rdi
  unsigned __int64 v23; // rbx
  char *v24; // rax
  EntInput_t *v25; // r15
  char *v26; // rcx
  unsigned __int64 v27; // rbx
  char *v28; // rdx
  __int64 v29; // rdx
  typedescription_t **v30; // rax
  __int64 v31; // r13
  int v32; // r12d
  __int64 fieldOffset; // rdx
  const char *v34; // rcx
  __int64 fieldType_low; // rax
  typedescription_t **v36; // rdx
  typedescription_t *v37; // rax
  EntInput_t *v38; // rbx
  _DWORD *v39; // rax
  __int64 v40; // rdi
  CSchemaType *v41; // rdx
  CSchemaType *v42; // rdx
  SchemaBaseClassTraversal_t v43; // eax
  int v44; // eax
  size_t v45; // rdi
  unsigned __int64 v46; // rax
  void *v47; // rax
  EntOutput_t *v48; // rax
  int v49; // esi
  EntOutput_t *v50; // r8
  typedescription_t **v51; // rax
  __int64 v52; // rdx
  int v53; // ecx
  int v54; // esi
  EntOutput_t *v55; // rsi
  typedescription_t *v56; // rsi
  unsigned __int16 v57; // ax
  bool v58; // zf
  int m_Size; // eax
  typedescription_t **v60; // rax
  int v61; // eax
  typedescription_t **m_pMemory; // r13
  typedescription_t **v63; // rax
  CSchemaType *v64; // rax
  __int64 (__fastcall *v65)(ISchemaSystem *, const char *); // rbx
  const char *NameOfModule; // rax
  __int64 v67; // rax
  CSchemaType *v68; // rax
  const CSchemaClassField *Field; // rax
  const char *dataClassName; // rdx
  const char *fieldName; // rsi
  const char *v72; // rax
  __int64 v73; // rsi
  const char *externalName; // [rsp+28h] [rbp-1B8h]
  void (*pfn)(CEntityInstance *, inputdata_t *); // [rsp+28h] [rbp-1B8h]
  __int64 (__fastcall *v77)(ISchemaSystem *, const char *); // [rsp+28h] [rbp-1B8h]
  __int64 (__fastcall *v78)(char *, __int64); // [rsp+28h] [rbp-1B8h]
  CEntityClass *pClass; // [rsp+30h] [rbp-1B0h]
  char *s; // [rsp+38h] [rbp-1A8h]
  char *sa; // [rsp+38h] [rbp-1A8h]
  char *sb; // [rsp+38h] [rbp-1A8h]
  __int16 pTagData; // [rsp+40h] [rbp-1A0h]
  const char *pTagDatab; // [rsp+40h] [rbp-1A0h]
  CSchemaMetadataSet *pTagDataa; // [rsp+40h] [rbp-1A0h]
  SchemaBaseClassTraversal_t pSchemaField; // [rsp+48h] [rbp-198h]
  fieldtype_t pSchemaFieldf; // [rsp+48h] [rbp-198h]
  ClassIntrospectionHandle_t *pSchemaFielda; // [rsp+48h] [rbp-198h]
  CSchemaClassField *pSchemaFieldb; // [rsp+48h] [rbp-198h]
  CSchemaMetadataSet *pSchemaFieldc; // [rsp+48h] [rbp-198h]
  int pSchemaFieldd; // [rsp+48h] [rbp-198h]
  int pSchemaFielde; // [rsp+48h] [rbp-198h]
  char bFoundFieldsLocally; // [rsp+66h] [rbp-17Ah]
  char bFoundFields; // [rsp+67h] [rbp-179h]
  CUtlVector<typedescription_t*,CUtlMemory<typedescription_t*,int> > inputs; // [rsp+70h] [rbp-170h] BYREF
  CUtlVector<typedescription_t*,CUtlMemory<typedescription_t*,int> > outputs; // [rsp+90h] [rbp-150h] BYREF
  void (*v98)(CEntityInstance *, inputdata_t *); // [rsp+B8h] [rbp-128h]
  char *v99; // [rsp+C0h] [rbp-120h]
  ImportedDesc_t desc; // [rsp+D0h] [rbp-110h] BYREF
  CSchemaInheritanceIterator iter; // [rsp+F0h] [rbp-F0h] BYREF
  unsigned __int64 v102; // [rsp+1A8h] [rbp-38h]

  v3 = dmapin;
  v102 = __readfsqword(0x28u);
  bFoundFields = 0;
  if ( dmapin == 0 )
    return bFoundFields;
  do
  {
    CSchemaInheritanceIterator::CSchemaInheritanceIterator(
      &iter,
      hClass,
      SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL);
    while ( 1 )
    {
      if ( !CSchemaInheritanceIterator::IsValid(&iter) )
        goto LABEL_10;
      Class = CSchemaInheritanceIterator::GetClass(&iter);
      if ( strcmp(v3->dataClassName, Class->m_Name.m_pImplChars) == 0 )
        break;
LABEL_8:
      CSchemaInheritanceIterator::Advance(&iter);
    }
    desc.m_pDataMap = v3;
    desc.m_bMapHasFields = 1;
    v5 = CUtlRBTree<ImportedDesc_t,unsigned short,bool (*)(ImportedDesc_t const&,ImportedDesc_t const&),CUtlMemory<UtlRBTreeNode_t<ImportedDesc_t,unsigned short>,unsigned short>>::Find(
           knownDatamaps,
           &desc);
    if ( v5 == 0xFFFF )
    {
      desc.m_hClass = Class;
      desc.m_pDataMap = v3;
      desc.m_pClass = 0;
      desc.m_bImported = 1;
      CUtlRBTree<ImportedDesc_t,unsigned short,bool (*)(ImportedDesc_t const&,ImportedDesc_t const&),CUtlMemory<UtlRBTreeNode_t<ImportedDesc_t,unsigned short>,unsigned short>>::Insert(
        knownDatamaps,
        &desc,
        ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
      pClass = 0;
      goto LABEL_20;
    }
    v6 = v5;
    v7 = &knownDatamaps->m_Elements.m_pMemory[v6];
    if ( v7->m_Data.m_bImported )
    {
      if ( bFoundFields == 0 )
        bFoundFields = v7->m_Data.m_bMapHasFields;
      goto LABEL_8;
    }
    v7->m_Data.m_bImported = 1;
    pClass = knownDatamaps->m_Elements.m_pMemory[v6].m_Data.m_pClass;
LABEL_20:
    inputs.m_Memory.m_pMemory = 0;
    inputs.m_Memory.m_nAllocationCount = 0;
    inputs.m_Memory.m_nGrowSize = 0;
    outputs.m_Memory.m_pMemory = 0;
    outputs.m_Memory.m_nAllocationCount = 0;
    outputs.m_Memory.m_nGrowSize = 0;
    inputs.m_Size = 0;
    dataNumFields = v3->dataNumFields;
    outputs.m_Size = 0;
    if ( dataNumFields <= 0 )
      goto LABEL_88;
    inputs.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 8LL * dataNumFields);
    inputs.m_Memory.m_nAllocationCount = dataNumFields;
    v11 = v3->dataNumFields;
    if ( v11 > outputs.m_Memory.m_nAllocationCount && (outputs.m_Memory.m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = outputs.m_Memory.m_pMemory;
        v63 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v11);
        outputs.m_Memory.m_pMemory = v63;
        if ( m_pMemory != 0 )
          memcpy(v63, m_pMemory, 8LL * outputs.m_Memory.m_nAllocationCount);
        outputs.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v12 = *g_pMemAlloc;
        if ( outputs.m_Memory.m_pMemory != 0 )
          v13 = (*(v12 + 8))(g_pMemAlloc, outputs.m_Memory.m_pMemory, 8LL * v11);
        else
          v13 = (*v12)(g_pMemAlloc, 8LL * v11);
        outputs.m_Memory.m_pMemory = v13;
      }
      outputs.m_Memory.m_nAllocationCount = v11;
      v11 = v3->dataNumFields;
    }
    if ( v11 <= 0 )
    {
LABEL_88:
      bFoundFieldsLocally = 0;
      goto LABEL_89;
    }
    v14 = 0;
    v15 = 0;
    bFoundFieldsLocally = 0;
    while ( 2 )
    {
      while ( 2 )
      {
        v16 = &v3->dataDesc[v14];
        fieldType = v16->fieldType;
        if ( v16->fieldType == fieldtype_t::FIELD_FUNCTION || (v16->flags & 0x20) != 0 )
          goto LABEL_31;
        if ( fieldType == 10 )
        {
          LOBYTE(fieldType) = 0;
          pTagDataa = CSchemaClassInfo::FindField(Class, v16->fieldName, fieldType, 0);
          if ( pTagDataa != 0 )
          {
            pSchemaFielda = pTagDataa->m_DynamicEntries.m_Data.m_pImplElements;
            if ( ((*pSchemaFielda)->m_Name.m_pImplChars)(v40) == 5
              && ((*pSchemaFielda)->m_StaticFields.m_Data.m_pImplElements)(pSchemaFielda) == 4
              && InitDataDescSchema(v16->td, pSchemaFielda[6], knownDatamaps) )
            {
              v41 = SchemaTypeOf<void>(void)::s_pTypeOf;
              if ( SchemaTypeOf<void>(void)::s_pTypeOf == 0 )
              {
                v65 = *(*g_pSchemaSystem + 104LL);
                NameOfModule = GetNameOfModule();
                v67 = v65(g_pSchemaSystem, NameOfModule);
                v41 = (*(*v67 + 40LL))(v67, 1);
                SchemaTypeOf<void>(void)::s_pTypeOf = v41;
              }
              CSchemaMetadataSet::AddDynamicEntry(pTagDataa + 1, "MHasSubKeyfields", v41, 0);
              bFoundFieldsLocally = 1;
            }
          }
          else
          {
            Warning(
              "Datadesc import error: Field \"%s\" in the datadesc for class \"%s\" has not been schematized!\n",
              v16->fieldName,
              v3->dataClassName);
          }
          goto LABEL_31;
        }
        pTagData = v16->flags;
        pSchemaField = v16->fieldType;
        externalName = v16->externalName;
        if ( externalName == 0 )
          goto LABEL_31;
        s = v16->fieldName;
        v18 = strchr(s, 91);
        v19 = pSchemaField;
        v20 = pTagData;
        if ( v18 != 0 )
        {
          Warning(
            "Datadesc import error: Field \"%s\" in the datadesc for class \"%s\" cannot be imported, as it's an array. U"
            "se the MGenerateArrayKeynames feature instead!\n",
            s,
            v3->dataClassName);
          goto LABEL_31;
        }
        if ( s == 0 || (v21 = strchr(s, 46), v19 = pSchemaField, v20 = pTagData, v21 == 0) )
        {
          if ( (v20 & 8) != 0 )
          {
            m_Size = inputs.m_Size;
            pSchemaFieldd = inputs.m_Size;
            if ( inputs.m_Size == inputs.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<typedescription_t *,int>::Grow(&inputs.m_Memory, 1);
              m_Size = inputs.m_Size;
            }
            inputs.m_Size = m_Size + 1;
            v60 = &inputs.m_Memory.m_pMemory[pSchemaFieldd];
            if ( v60 != 0 )
              goto LABEL_86;
          }
          else
          {
            if ( (v20 & 0x10) == 0 )
              goto LABEL_61;
            v61 = outputs.m_Size;
            pSchemaFielde = outputs.m_Size;
            if ( outputs.m_Size == outputs.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<typedescription_t *,int>::Grow(&outputs.m_Memory, 1);
              v61 = outputs.m_Size;
            }
            outputs.m_Size = v61 + 1;
            v60 = &outputs.m_Memory.m_pMemory[pSchemaFielde];
            if ( v60 == 0 )
            {
              v19 = v16->fieldType;
LABEL_61:
              if ( v19 != (SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY_IN_MEMORY_ORDER|0x8)
                && (v16->flags & 0x4004) == 4 )
              {
                pSchemaFieldb = CSchemaClassInfo::FindField(
                                  Class,
                                  v16->fieldName,
                                  SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_NONE,
                                  0);
                if ( pSchemaFieldb != 0 )
                {
                  v42 = SchemaTypeOf<char *>(void)::s_pTypeOf;
                  if ( SchemaTypeOf<char *>(void)::s_pTypeOf == 0 )
                  {
                    v77 = *(*g_pSchemaSystem + 104LL);
                    v72 = GetNameOfModule();
                    sb = v77(g_pSchemaSystem, v72);
                    v78 = *(*sb + 48LL);
                    v73 = (*(*sb + 40LL))(sb, 2);
                    v42 = v78(sb, v73);
                    SchemaTypeOf<char *>(void)::s_pTypeOf = v42;
                  }
                  pSchemaFieldc = &pSchemaFieldb->m_Metadata;
                  CSchemaMetadataSet::AddDynamicEntry(pSchemaFieldc, "MKeyfieldname", v42, &v16->externalName);
                  v43 = v16->fieldType;
                  if ( (v16->fieldType - 21) <= 1
                    || v43 == (SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL_IN_MEMORY_ORDER|SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL|0x8) )
                  {
                    v64 = SchemaTypeOf<char *>();
                    CSchemaMetadataSet::AddDynamicEntry(pSchemaFieldc, "MIsWorldSpace", v64, 0);
                  }
                  else if ( (v43 - 45) <= 2 )
                  {
                    v68 = SchemaTypeOf<char *>();
                    CSchemaMetadataSet::AddDynamicEntry(pSchemaFieldc, "MIsWorldSpaceOrientation", v68, 0);
                  }
                  v16->flags |= 0x4000u;
                  bFoundFieldsLocally = 1;
                }
                else
                {
                  Field = CSchemaClassInfo::FindField(
                            Class,
                            v16->fieldName,
                            SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_PRIMARY_ONLY,
                            0);
                  dataClassName = v3->dataClassName;
                  fieldName = v16->fieldName;
                  if ( Field != 0 )
                    Warning(
                      "*** Datadesc import error: Field \"%s\" in the datadesc for class \"%s\" exists in a base class of"
                      " \"%s\".\n"
                      "    This cannot be imported. Instead, remove the key from the datadesc and add\n"
                      "    META_ADD( %s )( MKeyfieldname = \"%s\" )\n"
                      "    to the class definition of \"%s\"!\n",
                      fieldName,
                      dataClassName,
                      dataClassName,
                      v16->fieldName,
                      v16->externalName,
                      v3->dataClassName);
                  else
                    Warning(
                      "Datadesc import error: Field \"%s\" in the datadesc for class \"%s\" has not been schematized!\n",
                      fieldName,
                      dataClassName);
                }
              }
LABEL_31:
              ++v15;
              ++v14;
              if ( v3->dataNumFields <= v15 )
                goto LABEL_40;
              continue;
            }
LABEL_86:
            *v60 = v16;
          }
          v19 = v16->fieldType;
          goto LABEL_61;
        }
        break;
      }
      Warning(
        "Datadesc import error: Field \"%s\" in the datadesc for class \"%s\" points to a member of an embedded class. Pl"
        "ease add the META( MKeyfieldname = \"%s\" ) tag to the member of the embedded class instead.\n",
        s,
        v3->dataClassName,
        externalName);
      ++v15;
      ++v14;
      if ( v3->dataNumFields > v15 )
        continue;
      break;
    }
LABEL_40:
    if ( inputs.m_Size > 0 )
    {
      if ( pClass != 0 )
      {
        v22 = -1;
        v23 = pClass->m_nInputCount + inputs.m_Size;
        if ( v23 <= 0x248000000000000LL )
          v22 = 56 * v23;
        v24 = operator new[](v22);
        v25 = v24;
        if ( v23 != 0 )
        {
          v26 = v24 + 24;
          v27 = v23 - 2;
          do
          {
            v28 = v24;
            --v27;
            v24 += 56;
            v29 = v28 - v25;
            *&v26[v29] = 0;
            *&v26[v29 + 8] = 0;
            *&v26[v29 + 16] = 0;
            *(v24 - 7) = 0;
            *(v24 - 12) = 0;
            *(v24 - 5) = 0;
            *(v24 - 1) = 0;
          }
          while ( v27 != -2 );
        }
        memcpy(v25, pClass->m_pInputs, 56LL * pClass->m_nInputCount);
        v30 = inputs.m_Memory.m_pMemory;
        v31 = 0;
        v32 = 0;
        do
        {
          v37 = v30[v31];
          v38 = &v25[v32 + pClass->m_nInputCount];
          if ( (v37->flags & 4) != 0 )
          {
            fieldOffset = v37->fieldOffset;
            v34 = v37->externalName;
            fieldType_low = LOBYTE(v37->fieldType);
            v38->m_inputFunction.m_nFlags = 0;
            v38->m_inputFunction.m_pName = v34;
            v38->m_inputFunction.m_pContext = (fieldType_low | (fieldOffset << 8));
            v38->m_inputFunction.m_adapterFunc = InputFunctionAdapterS1Var;
          }
          else
          {
            pSchemaFieldf = v37->fieldType;
            pfn = v37->inputFunc.__pfn;
            pTagDatab = v37->externalName;
            sa = v37->inputFunc.__delta;
            v39 = operator new(0x10u);
            *v39 = pTagDatab;
            v39[2] = pSchemaFieldf;
            v38->m_inputFunction.m_pContext = v39;
            v38->m_inputFunction.m_pName = pTagDatab;
            v38->m_inputFunction.m_nFlags = 0;
            v98 = pfn;
            v99 = sa;
            v38->m_inputFunction.m_delegate.m_pFunction.__delta = sa;
            v38->m_inputFunction.m_delegate.m_pFunction.__pfn = pfn;
            v38->m_inputFunction.m_delegate.m_pthis = 0;
            v38->m_inputFunction.m_adapterFunc = InputFunctionAdapterS1Func;
          }
          v30 = inputs.m_Memory.m_pMemory;
          ++v32;
          v36 = &inputs.m_Memory.m_pMemory[v31++];
          (*v36)->flags |= 0x4000u;
          (*v36)->flags &= ~8u;
        }
        while ( inputs.m_Size > v32 );
        pClass->m_nInputCount += inputs.m_Size;
        pClass->m_pInputs = v25;
        v44 = outputs.m_Size;
        if ( outputs.m_Size > 0 )
        {
LABEL_72:
          v45 = -1;
          v46 = pClass->m_nOutputCount + v44;
          if ( v46 <= 0x7F0000000000000LL )
            v45 = 16 * v46;
          v47 = operator new[](v45);
          v48 = memcpy(v47, pClass->m_pOutputs, 16LL * pClass->m_nOutputCount);
          v49 = outputs.m_Size;
          v50 = v48;
          if ( outputs.m_Size > 0 )
          {
            v51 = outputs.m_Memory.m_pMemory;
            v52 = 0;
            v53 = 0;
            do
            {
              v54 = v53 + pClass->m_nOutputCount;
              ++v53;
              v55 = &v50[v54];
              v55->m_desc.m_pName = v51[v52]->externalName;
              v55->m_desc.m_nFlags = 0;
              v55->m_desc.m_nOutputOffset = outputs.m_Memory.m_pMemory[v52]->fieldOffset;
              v51 = outputs.m_Memory.m_pMemory;
              v56 = outputs.m_Memory.m_pMemory[v52++];
              v56->flags &= ~0x10u;
              v49 = outputs.m_Size;
            }
            while ( outputs.m_Size > v53 );
          }
          pClass->m_nOutputCount += v49;
          pClass->m_pOutputs = v50;
        }
        goto LABEL_78;
      }
      Warning("Datadesc error: Embedded structure \"%s\" cannot have inputs!\n", v3->dataClassName);
    }
LABEL_89:
    v44 = outputs.m_Size;
    if ( outputs.m_Size > 0 )
    {
      if ( pClass != 0 )
        goto LABEL_72;
      Warning("Datadesc error: Embedded structure \"%s\" cannot have outputs!\n", v3->dataClassName);
    }
LABEL_78:
    v57 = CUtlRBTree<ImportedDesc_t,unsigned short,bool (*)(ImportedDesc_t const&,ImportedDesc_t const&),CUtlMemory<UtlRBTreeNode_t<ImportedDesc_t,unsigned short>,unsigned short>>::Find(
            knownDatamaps,
            &desc);
    outputs.m_Size = 0;
    bFoundFields |= bFoundFieldsLocally;
    v58 = (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    knownDatamaps->m_Elements.m_pMemory[v57].m_Data.m_bMapHasFields = bFoundFieldsLocally;
    if ( v58 )
    {
      CUtlMemory<typedescription_t *,int>::Purge(&outputs.m_Memory);
      if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<typedescription_t *,int>::Purge(&outputs.m_Memory);
    }
    if ( (inputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<typedescription_t *,int>::Purge(&inputs.m_Memory);
      if ( (inputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<typedescription_t *,int>::Purge(&inputs.m_Memory);
    }
LABEL_10:
    iter.m_ClassesToTraverse.m_Size = 0;
    v8 = iter.m_ClassesToTraverse.m_Memory.m_nGrowSize & 0xC0000000;
    if ( iter.m_ClassesToTraverse.m_Memory.m_nAllocationCount < 0
      || iter.m_ClassesToTraverse.m_Memory.m_pMemory == &iter.m_ClassesToTraverse.m_Memory.m_FixedMemory )
    {
      if ( v8 == 0 )
        CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t,int>::Purge(&iter.m_ClassesToTraverse.m_Memory);
    }
    else if ( iter.m_ClassesToTraverse.m_Memory.m_pMemory != 0 && v8 == 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    }
    v3 = v3->baseMap;
  }
  while ( v3 != 0 );
  return bFoundFields;
}


// DataDescSchemaInit  (line 907, @0x0000000001ee90d0, libserver.so)  // inlines: CUtlMemory, CUtlRBTree, First, IsIdxValid, IsValidIndex, LeftChild, Next, Purge, RemoveAll, ResetDbgInfo, SetLeftChild, SetRightChild, operator[], ~CUtlMemory, ~CUtlRBTree
// calls: CMemAllocSystemInitialize, CUtlRBTree<ImportedDesc_t, short unsigned int, bool (*)(const ImportedDesc_t&, const ImportedDesc_t&), CUtlMemory<UtlRBTreeNode_t<ImportedDesc_t, short unsigned int>, short unsigned int> >::Insert, InitDataDescSchema, operator delete, CUtlMemory<UtlRBTreeNode_t<ImportedDesc_t, short unsigned int>, short unsigned int>::Purge, CUtlRBTree<ImportedDesc_t, short unsigned int, bool (*)(const ImportedDesc_t&, const ImportedDesc_t&), CUtlMemory<UtlRBTreeNode_t<ImportedDesc_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, _Unwind_Resume
// callers: CSource2Server::Init
// globals: DataDescImportLessFunc(ImportedDesc_t const&,ImportedDesc_t const&), s_pFirst
void __cdecl DataDescSchemaInit()
{
  CUtlRBTree<ImportedDesc_t,short unsigned int,bool (*)(const ImportedDesc_t&,const ImportedDesc_t&),CUtlMemory<UtlRBTreeNode_t<ImportedDesc_t,short unsigned int>,short unsigned int> >::Node_t *v0; // rax
  DataDescMetaDataInfo_t *v1; // rbx
  CEntityClass *v2; // r12
  __int64 v3; // rax
  __int64 v4; // rax
  datamap_t *m_pDataMap; // rdx
  const CSchemaClassInfo *v6; // rax
  DataDescMetaDataInfo_t *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  DataDescMetaDataInfo_t *m_pNext; // r12
  unsigned __int16 index; // si
  __int64 m_nAllocationCount; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  ImportedDesc_t desc; // [rsp+0h] [rbp-70h] BYREF
  CUtlRBTree<ImportedDesc_t,short unsigned int,bool (*)(const ImportedDesc_t&,const ImportedDesc_t&),CUtlMemory<UtlRBTreeNode_t<ImportedDesc_t,short unsigned int>,short unsigned int> > knownDatamaps; // [rsp+20h] [rbp-50h] BYREF

  knownDatamaps.m_LessFunc = DataDescImportLessFunc;
  knownDatamaps.m_Elements.m_pMemory = 0;
  knownDatamaps.m_Elements.m_nAllocationCount = 512;
  knownDatamaps.m_Elements.m_nGrowSize = 512;
  CMemAllocSystemInitialize();
  v0 = (**g_pMemAlloc)(g_pMemAlloc, 20480);
  v1 = s_pFirst;
  knownDatamaps.m_Elements.m_pMemory = v0;
  knownDatamaps.m_Root = -1;
  knownDatamaps.m_NumElements = 0;
  knownDatamaps.m_FirstFree = -1;
  knownDatamaps.m_LastAlloc.index = -1;
  knownDatamaps.m_pElements = v0;
  if ( s_pFirst != 0 )
  {
    do
    {
      v2 = v1->m_getEntityClassFn();
      v3 = (*(v2->_vptr_CEntityClass + 7))(v2);
      v4 = (*(*v3 + 8LL))(v3);
      m_pDataMap = v1->m_pDataMap;
      v6 = *(v4 + 40);
      desc.m_pClass = v2;
      desc.m_bImported = 0;
      desc.m_pDataMap = m_pDataMap;
      desc.m_hClass = v6;
      CUtlRBTree<ImportedDesc_t,unsigned short,bool (*)(ImportedDesc_t const&,ImportedDesc_t const&),CUtlMemory<UtlRBTreeNode_t<ImportedDesc_t,unsigned short>,unsigned short>>::Insert(
        &knownDatamaps,
        &desc,
        ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
      v1 = v1->m_pNext;
    }
    while ( v1 != 0 );
    v7 = s_pFirst;
    if ( s_pFirst != 0 )
    {
      while ( 1 )
      {
        v8 = v7->m_getEntityClassFn();
        v9 = (*(*v8 + 56LL))(v8);
        v10 = (*(*v9 + 8LL))(v9);
        InitDataDescSchema(v7->m_pDataMap, *(v10 + 40), &knownDatamaps);
        m_pNext = v7->m_pNext;
        operator delete(v7);
        if ( m_pNext == 0 )
          break;
        v7 = m_pNext;
      }
    }
    index = knownDatamaps.m_LastAlloc.index;
    if ( knownDatamaps.m_LastAlloc.index != 0xFFFF )
    {
      m_nAllocationCount = knownDatamaps.m_Elements.m_nAllocationCount;
      v14 = 0;
      v15 = 0;
      if ( knownDatamaps.m_Elements.m_nAllocationCount > 0 )
      {
        do
        {
          if ( v15 < m_nAllocationCount && v15 <= index && v15 != knownDatamaps.m_Elements.m_pMemory[v14].m_Left )
          {
            knownDatamaps.m_Elements.m_pMemory[v14].m_Right = knownDatamaps.m_FirstFree;
            knownDatamaps.m_Elements.m_pMemory[v14].m_Left = v15;
            index = knownDatamaps.m_LastAlloc.index;
            knownDatamaps.m_FirstFree = v15;
          }
          if ( index == v15 )
            break;
          m_nAllocationCount = knownDatamaps.m_Elements.m_nAllocationCount;
          if ( (v15 + 1) >= knownDatamaps.m_Elements.m_nAllocationCount )
            break;
          ++v15;
          ++v14;
        }
        while ( v15 != 0xFFFF );
      }
      knownDatamaps.m_Root = -1;
      knownDatamaps.m_NumElements = 0;
    }
  }
  knownDatamaps.m_FirstFree = -1;
  if ( (knownDatamaps.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<UtlRBTreeNode_t<ImportedDesc_t,unsigned short>,unsigned short>::Purge(&knownDatamaps.m_Elements);
    knownDatamaps.m_LastAlloc.index = -1;
    if ( (knownDatamaps.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<ImportedDesc_t,unsigned short>,unsigned short>::Purge(&knownDatamaps.m_Elements);
  }
}


// CBaseEntity::FindNamedOutput  (line 945, @0x0000000001ed1d60, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FindEntityIOOutputsByName, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityIdentity::FindEntityIOOutputsByName, CUtlMemory<CEntityIOOutput*, int>::Purge, _Unwind_Resume
// callers: CBaseEntity::FireNamedOutput
CBaseEntityOutput *__fastcall CBaseEntity::FindNamedOutput(CBaseEntity *const this, const char *pszOutput)
{
  CEntityIdentity *m_pEntity; // rdi
  CBaseEntityOutput *result; // rax
  CBaseEntityOutput *v4; // [rsp-10h] [rbp-40h]
  int v5; // [rsp-8h] [rbp-38h] BYREF
  CUtlVector<CEntityIOOutput*,CUtlMemory<CEntityIOOutput*,int> > outputs; // [rsp+0h] [rbp-30h] BYREF

  if ( pszOutput == 0 )
    return 0;
  v5 = 0;
  m_pEntity = this->m_pEntity;
  *&outputs.m_Size = 0;
  outputs.m_Memory.m_pMemory = 0;
  CEntityIdentity::FindEntityIOOutputsByName(m_pEntity, pszOutput, &v5);
  result = 0;
  if ( v5 > 0 )
    result = **&outputs.m_Size;
  v5 = 0;
  if ( (HIDWORD(outputs.m_Memory.m_pMemory) & 0xC0000000) == 0 )
  {
    v4 = result;
    CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs);
    result = v4;
    if ( (HIDWORD(outputs.m_Memory.m_pMemory) & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs);
      return v4;
    }
  }
  return result;
}


// CBaseEntity::SpawnShared  (line 963, @0x0000000001ee4c50, libserver.so)  // inlines: AddEFlags, AssignTo, Base, Element, FindKeyHash, Get<int>, GetValue, GetValue<int>, GetValueString, Min<long long unsigned int>, Min<unsigned int>, TempString, atoi, operator[]
// calls: CEntityKeyValues::HasValue, CBaseEntity::AddEffects, CGameEntitySystem::FindEntityByName, strtol, VariantFieldTypeName, Warning
// callers: CBaseModelEntity::SpawnShared
// strings: "No conversion from %s to int now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_1EE4F1E, jpt_1EE4F46, jpt_1EE4F76
void __fastcall CBaseEntity::SpawnShared(CBaseEntity *const this, const CEntityKeyValues *pKeyValues)
{
  int v4; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v5; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v7; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *v9; // rax
  const char *v10; // rdx
  int v11; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v12; // cx
  __int64 k; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v14; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rdx
  CEntityVariant *v16; // rcx
  int v17; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v18; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v20; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v21; // rdx
  CEntityVariant *v22; // rcx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v27; // rdx
  CEntityVariant *p_m_value; // rcx
  CBaseEntity *EntityByName; // rax
  int16 m_type; // ax
  int16 v31; // ax
  int16 v32; // ax
  const char *v33; // rax
  const char *v34; // rax
  const char *m_uint64; // rax
  const char *v36; // rax
  const char *v37; // rax
  const char *v38; // rax

  if ( CEntityKeyValues::HasValue(pKeyValues, 1226772763) )
  {
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
          if ( m_pElements[i] == 1226772763 )
          {
LABEL_48:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v27 = pKeyValues->m_keyValues.m_pElements;
            else
              v27 = 0;
            p_m_value = &v27[i].m_value;
            goto LABEL_54;
          }
        }
        else if ( *(4 * i) == 1226772763 )
        {
          goto LABEL_48;
        }
      }
    }
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
LABEL_54:
    m_type = p_m_value->m_type;
    switch ( m_type )
    {
      case 0:
        break;
      case 1:
        LODWORD(m_uint64) = p_m_value->m_float;
        goto LABEL_92;
      case 5:
        LODWORD(m_uint64) = p_m_value->m_int;
        goto LABEL_92;
      case 6:
        LODWORD(m_uint64) = p_m_value->m_char;
        goto LABEL_92;
      case 26:
        m_uint64 = p_m_value->m_uint64;
        if ( p_m_value->m_int64 > 0x7FFFFFFF )
          goto LABEL_90;
        if ( m_uint64 < 0xFFFFFFFF80000000LL )
          LODWORD(m_uint64) = 0x80000000;
LABEL_92:
        if ( m_uint64 != 0 )
LABEL_90:
          CBaseEntity::AddEffects(this, 16);
        break;
      case 30:
        LODWORD(m_uint64) = strtol(p_m_value->m_pszString, 0, 10);
        goto LABEL_92;
      case 33:
        m_uint64 = p_m_value->m_uint64;
        if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
          goto LABEL_92;
        goto LABEL_90;
      case 34:
        LODWORD(m_uint64) = p_m_value->m_float64;
        goto LABEL_92;
      case 37:
        LODWORD(m_uint64) = p_m_value->m_int;
        if ( p_m_value->m_int > 0x7FFFFFFEu )
          goto LABEL_90;
        goto LABEL_92;
      default:
        v36 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to int now\n", v36);
        break;
    }
  }
  if ( CEntityKeyValues::HasValue(pKeyValues, -1227121997) )
  {
    v17 = pKeyValues->m_keyHashes.m_nCount;
    if ( v17 > 0 )
    {
      v18 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( j = 0; v17 > j; ++j )
      {
        if ( v18 != 0 )
        {
          v20 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v18 > 9 )
            v20 = pKeyValues->m_keyHashes.m_pElements;
          if ( v20[j] == -1227121997 )
          {
LABEL_37:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v21 = pKeyValues->m_keyValues.m_pElements;
            else
              v21 = 0;
            v22 = &v21[j].m_value;
            goto LABEL_56;
          }
        }
        else if ( *(4 * j) == -1227121997 )
        {
          goto LABEL_37;
        }
      }
    }
    v22 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_56:
    v31 = v22->m_type;
    switch ( v31 )
    {
      case 0:
        break;
      case 1:
        LODWORD(v34) = v22->m_float;
        goto LABEL_77;
      case 5:
        LODWORD(v34) = v22->m_int;
        goto LABEL_77;
      case 6:
        LODWORD(v34) = v22->m_char;
        goto LABEL_77;
      case 26:
        v34 = v22->m_uint64;
        if ( v22->m_int64 > 0x7FFFFFFF )
          goto LABEL_75;
        if ( v34 < 0xFFFFFFFF80000000LL )
          LODWORD(v34) = 0x80000000;
LABEL_77:
        if ( v34 != 0 )
LABEL_75:
          CBaseEntity::AddEffects(this, 64);
        break;
      case 30:
        LODWORD(v34) = strtol(v22->m_pszString, 0, 10);
        goto LABEL_77;
      case 33:
        v34 = v22->m_uint64;
        if ( v22->m_uint64 <= 0x7FFFFFFE )
          goto LABEL_77;
        goto LABEL_75;
      case 34:
        LODWORD(v34) = v22->m_float64;
        goto LABEL_77;
      case 37:
        LODWORD(v34) = v22->m_int;
        if ( v22->m_int > 0x7FFFFFFEu )
          goto LABEL_75;
        goto LABEL_77;
      default:
        v38 = VariantFieldTypeName(v31);
        Warning("No conversion from %s to int now\n", v38);
        break;
    }
  }
  if ( CEntityKeyValues::HasValue(pKeyValues, 755809576) )
  {
    v11 = pKeyValues->m_keyHashes.m_nCount;
    if ( v11 > 0 )
    {
      v12 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( k = 0; v11 > k; ++k )
      {
        if ( v12 != 0 )
        {
          v14 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v12 > 9 )
            v14 = pKeyValues->m_keyHashes.m_pElements;
          if ( v14[k] == 755809576 )
          {
LABEL_26:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v15 = pKeyValues->m_keyValues.m_pElements;
            else
              v15 = 0;
            v16 = &v15[k].m_value;
            goto LABEL_58;
          }
        }
        else if ( *(4 * k) == 755809576 )
        {
          goto LABEL_26;
        }
      }
    }
    v16 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_58:
    v32 = v16->m_type;
    switch ( v32 )
    {
      case 0:
        break;
      case 1:
        LODWORD(v33) = v16->m_float;
        goto LABEL_62;
      case 5:
        LODWORD(v33) = v16->m_int;
        goto LABEL_62;
      case 6:
        LODWORD(v33) = v16->m_char;
        goto LABEL_62;
      case 26:
        v33 = v16->m_uint64;
        if ( v16->m_int64 > 0x7FFFFFFF )
          goto LABEL_60;
        if ( v33 < 0xFFFFFFFF80000000LL )
          LODWORD(v33) = 0x80000000;
LABEL_62:
        if ( v33 != 0 )
LABEL_60:
          this->m_iEFlags |= 0x80000000;
        break;
      case 30:
        LODWORD(v33) = strtol(v16->m_pszString, 0, 10);
        goto LABEL_62;
      case 33:
        v33 = v16->m_uint64;
        if ( v16->m_uint64 <= 0x7FFFFFFE )
          goto LABEL_62;
        goto LABEL_60;
      case 34:
        LODWORD(v33) = v16->m_float64;
        goto LABEL_62;
      case 37:
        LODWORD(v33) = v16->m_int;
        if ( v16->m_int > 0x7FFFFFFEu )
          goto LABEL_60;
        goto LABEL_62;
      default:
        v37 = VariantFieldTypeName(v32);
        Warning("No conversion from %s to int now\n", v37);
        break;
    }
  }
  if ( !CEntityKeyValues::HasValue(pKeyValues, -1953006792) )
    goto LABEL_5;
  v4 = pKeyValues->m_keyHashes.m_nCount;
  if ( v4 <= 0 )
  {
LABEL_51:
    v9 = &CEntityKeyValues::sm_EmptyVariant;
    v10 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_17;
    goto LABEL_52;
  }
  v5 = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( v5 == 0 )
  {
    if ( *(4 * v6) == -1953006792 )
      goto LABEL_14;
LABEL_11:
    if ( v4 <= ++v6 )
      goto LABEL_51;
  }
  v7 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v5 > 9 )
    v7 = pKeyValues->m_keyHashes.m_pElements;
  if ( v7[v6] != -1953006792 )
    goto LABEL_11;
LABEL_14:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  v9 = &v8[v6].m_value;
  v10 = 0;
  if ( v9->m_type == 30 )
LABEL_17:
    v10 = v9->m_uint64;
LABEL_52:
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v10, this, 0, 0, 0);
  (*(this->_vptr_IHandleEntity + 40))(this, EntityByName);
LABEL_5:
  CBaseEntity::AddEffects(this, 16);
}


// CBaseEntity::SetPredictionRandomSeed  (line 1016, @0x0000000001ed1e50, libserver.so)
// callers: CPlayerMove::StartCommand, CPlayerMove::FinishCommand, CPlayerMove::RunCommand
void __fastcall CBaseEntity::SetPredictionRandomSeed(const CUserCmd *cmd)
{
  if ( cmd != 0 )
    CBaseEntity::m_nPredictionRandomSeed = cmd->random_seed;
  else
    CBaseEntity::m_nPredictionRandomSeed = -1;
}


// CBaseEntity::InputSetKinematic  (line 1031, @0x0000000001ed1e80, libserver.so)  // inlines: AssignTo, GetEntityNameAsCStr, GetMotionType, GetSkeletonInstance, String, VariantFieldTypeName, _V_strcmp
// calls: CBodyComponent::SetMotionType, Warning, VariantFieldTypeName
// strings: "false", "true", "Invalid conversion : CString '%s' to bool\n", "No conversion from %s to bool now\n", "unknown_variant_type", "%s:SetKinematic(CVariant::type=%s) expected bool argument\n" (24 total)
// globals: jpt_1ED1EC1, jpt_1ED1F21
void __fastcall CBaseEntity::InputSetKinematic(
        CBaseEntity *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  CBodyComponent::Storage_t m_CBodyComponent; // r12
  int16 m_type; // ax
  char m_char; // al
  VPhysicsMotionType_t v10; // esi
  int16 v11; // ax
  const char *v12; // rax
  const char *v13; // rdx
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi

  m_CBodyComponent = this->m_CBodyComponent;
  (*(m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(
    m_CBodyComponent->m_pSceneNode,
    pActivator,
    m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode,
    pComponentOwner);
  m_type = value->m_type;
  switch ( m_type )
  {
    case 0:
      v11 = 0;
      goto LABEL_9;
    case 1:
      m_char = value->m_float != 0.0;
      goto LABEL_3;
    case 5:
    case 37:
      if ( value->m_int != 0 )
        goto LABEL_7;
      goto LABEL_4;
    case 6:
      m_char = value->m_char;
      goto LABEL_3;
    case 26:
    case 33:
      m_char = value->m_uint64 != 0;
      goto LABEL_3;
    case 30:
      if ( strcmp(value->m_pszString, "0") == 0
        || strcmp(value->m_pszString, "false") == 0
        || strcmp(value->m_pszString, "no") == 0 )
      {
        goto LABEL_4;
      }
      if ( strcmp(value->m_pszString, "1") == 0
        || strcmp(value->m_pszString, "true") == 0
        || strcmp(value->m_pszString, "yes") == 0 )
      {
        goto LABEL_7;
      }
      Warning("Invalid conversion : CString '%s' to bool\n", value->m_pszString);
      v11 = value->m_type;
      goto LABEL_9;
    case 34:
      m_char = value->m_float64 != 0.0;
LABEL_3:
      if ( m_char != 0 )
LABEL_7:
        v10 = VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED;
      else
LABEL_4:
        v10 = VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC;
      CBodyComponent::SetMotionType(m_CBodyComponent, v10);
      return;
    default:
      v12 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to bool now\n", v12);
      v11 = value->m_type;
LABEL_9:
      switch ( v11 )
      {
        case 0:
          v13 = "void";
          break;
        case 1:
          v13 = "float";
          break;
        case 3:
          v13 = "vector";
          break;
        case 4:
          v13 = "quaternion";
          break;
        case 5:
          v13 = "integer";
          break;
        case 6:
          v13 = "boolean";
          break;
        case 8:
          v13 = "character";
          break;
        case 9:
          v13 = "color";
          break;
        case 13:
          v13 = "ehandle";
          break;
        case 25:
          v13 = "vector2d";
          break;
        case 26:
          v13 = "int64";
          break;
        case 27:
          v13 = "vector4d";
          break;
        case 28:
          v13 = "resourcehandle";
          break;
        case 30:
          v13 = "cstring";
          break;
        case 31:
          v13 = "hscript";
          break;
        case 32:
          v13 = "variant";
          break;
        case 33:
          v13 = "uint64";
          break;
        case 34:
          v13 = "float64";
          break;
        case 37:
          v13 = "unsigned";
          break;
        case 38:
          v13 = "utlstringtoken";
          break;
        case 39:
          v13 = "qangle";
          break;
        case 48:
          v13 = "hscript_lightbinding";
          break;
        case 49:
          v13 = "js_value";
          break;
        case 50:
          v13 = "js_object";
          break;
        case 51:
          v13 = "js_array";
          break;
        case 52:
          v13 = "js_raw_args";
          break;
        default:
          v13 = "unknown_variant_type";
          break;
      }
      m_pEntity = this->m_pEntity;
      m_pAsString = "";
      if ( m_pEntity->m_name.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_name.u.m_pAsString;
      Warning("%s:SetKinematic(CVariant::type=%s) expected bool argument\n", m_pAsString, v13);
      return;
  }
}


// CBaseEntity::InputSetScale  (line 1047, @0x0000000001ed2210, libserver.so)  // inlines: SetAbsScale
// calls: CGameSceneNode::SetAbsScale
void __fastcall CBaseEntity::InputSetScale(
        CBaseEntity *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const float *const value)
{
  float v5; // xmm1_4

  CGameSceneNode::SetAbsScale(this->m_pGameSceneNode, v5);
}


// CBaseEntity::DecalTrace  (line 1057, @0x0000000001ece860, libserver.so)  // inlines: CBroadcastRecipientFilter, ~CBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CGameTrace::GetHitboxIndex, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
void __fastcall CBaseEntity::DecalTrace(CBaseEntity *const this, trace_t *pTrace, const char *decalName)
{
  int v4; // r13d
  void (__fastcall *v5)(ITempEntsSystem *, CBroadcastRecipientFilter *, Vector *, trace_t *, _QWORD, _QWORD, double, int); // r15
  unsigned int HitboxIndex; // eax
  CBroadcastRecipientFilter filter; // [rsp+10h] [rbp-170h] BYREF
  unsigned __int64 v8; // [rsp+148h] [rbp-38h]

  v8 = __readfsqword(0x28u);
  v4 = (*decalsystem->_vptr_IDecalEmitterSystem)(decalsystem, decalName);
  if ( v4 >= 0 )
  {
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filter);
    v5 = *(te->_vptr_IPredictionSystem + 14);
    HitboxIndex = CGameTrace::GetHitboxIndex(pTrace);
    v5(te, &filter, &pTrace->endpos, pTrace, pTrace->m_ShapeAttributes.m_nEntityId, HitboxIndex, 0.0, v4);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CBaseEntity::ImpactTrace  (line 1074, @0x0000000001ed15d0, libserver.so)  // inlines: CEntityHandle, CUtlStringToken, GetEHandle, GetEntryIndex, GetSerialNumber, Init, Set, operator!=, operator=, operator=<CBaseEntity*>, operator=<CUtlStringToken>, operator=<int>
// calls: CEffectData::CEffectData, CGameTrace::GetHitboxIndex, DispatchEffect
void __fastcall CBaseEntity::ImpactTrace(
        CBaseEntity *const this,
        trace_t *pTrace,
        int iDamageType,
        char *pCustomImpactName)
{
  CBaseEntity *m_pEnt; // r14
  float y; // xmm2_4
  float z; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  const CPhysSurfaceProperties *m_pSurfaceProperties; // rax
  uint32 m_nameHash; // eax
  float v14; // xmm2_4
  float v15; // xmm1_4
  unsigned __int16 HitboxIndex; // ax
  uint32 v17; // eax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v19; // cx
  CEffectData data; // [rsp+10h] [rbp-A0h] BYREF

  m_pEnt = pTrace->m_pEnt;
  CEffectData::CEffectData(&data);
  y = pTrace->endpos.y;
  if ( pTrace->endpos.x != data.m_vOrigin.m_Value.x )
  {
    z = pTrace->endpos.z;
LABEL_27:
    data.m_vOrigin.m_Value.x = pTrace->endpos.x;
    data.m_vOrigin.m_Value.y = y;
    data.m_vOrigin.m_Value.z = z;
    goto LABEL_4;
  }
  z = pTrace->endpos.z;
  if ( y != data.m_vOrigin.m_Value.y || z != data.m_vOrigin.m_Value.z )
    goto LABEL_27;
LABEL_4:
  v10 = pTrace->startpos.y;
  if ( pTrace->startpos.x != data.m_vStart.m_Value.x )
  {
    v11 = pTrace->startpos.z;
    goto LABEL_31;
  }
  v11 = pTrace->startpos.z;
  if ( v10 != data.m_vStart.m_Value.y || v11 != data.m_vStart.m_Value.z )
  {
LABEL_31:
    m_pSurfaceProperties = pTrace->m_pSurfaceProperties;
    data.m_vStart.m_Value.x = pTrace->startpos.x;
    data.m_vStart.m_Value.y = v10;
    data.m_vStart.m_Value.z = v11;
    if ( m_pSurfaceProperties != 0 )
      goto LABEL_8;
    goto LABEL_32;
  }
  m_pSurfaceProperties = pTrace->m_pSurfaceProperties;
  if ( m_pSurfaceProperties != 0 )
  {
LABEL_8:
    m_nameHash = m_pSurfaceProperties->m_nameHash;
    goto LABEL_9;
  }
LABEL_32:
  m_nameHash = 1977497166;
LABEL_9:
  if ( m_nameHash != data.m_nSurfaceProp.m_Value.m_nHashCode )
    data.m_nSurfaceProp.m_Value.m_nHashCode = m_nameHash;
  v14 = pTrace->plane.normal.y;
  if ( pTrace->plane.normal.x != data.m_vNormal.m_Value.x )
  {
    v15 = pTrace->plane.normal.z;
LABEL_29:
    data.m_vNormal.m_Value.x = pTrace->plane.normal.x;
    data.m_vNormal.m_Value.y = v14;
    data.m_vNormal.m_Value.z = v15;
    goto LABEL_14;
  }
  v15 = pTrace->plane.normal.z;
  if ( v14 != data.m_vNormal.m_Value.y || v15 != data.m_vNormal.m_Value.z )
    goto LABEL_29;
LABEL_14:
  if ( iDamageType != data.m_nDamageType.m_Value )
    data.m_nDamageType.m_Value = iDamageType;
  HitboxIndex = CGameTrace::GetHitboxIndex(pTrace);
  if ( HitboxIndex != data.m_nHitBox.m_Value )
    data.m_nHitBox.m_Value = HitboxIndex;
  v17 = -1;
  if ( m_pEnt != 0 )
  {
    m_pEntity = m_pEnt->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v19 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v17 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v19 & 0x7FFF;
    }
  }
  if ( v17 == data.m_hEntity.m_Value.m_Index )
  {
    if ( pCustomImpactName != 0 )
    {
LABEL_25:
      DispatchEffect(pCustomImpactName, &data);
      return;
    }
  }
  else
  {
    data.m_hEntity.m_Value.m_Index = v17;
    if ( pCustomImpactName != 0 )
      goto LABEL_25;
  }
  DispatchEffect("Impact", &data);
}


// CBaseEntity::GetIndexForThinkContext  (line 1104, @0x0000000001ed2230, libserver.so)
// callers: CBaseEntity::GetNextThink, CBaseEntity::GetNextThinkTick, CBaseEntity::GetLastThink, CBaseEntity::GetLastThinkTick, CBaseEntity::RegisterThinkContext, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseEntity::SetFriction, CBaseEntity::OverrideFriction
int __fastcall CBaseEntity::GetIndexForThinkContext(CBaseEntity *const this, CUtlStringToken nContextId)
{
  int m_Size; // ecx
  int result; // eax
  thinkfunc_t *m_pMemory; // rdx
  CUtlStringToken *p_m_nContext; // rdx

  m_Size = this->m_aThinkFunctions.m_Size;
  result = -1;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_aThinkFunctions.m_Memory.m_pMemory;
    if ( nContextId.m_nHashCode == m_pMemory->m_nContext.m_nHashCode )
    {
      return 0;
    }
    else
    {
      p_m_nContext = &m_pMemory[1].m_nContext;
      result = 0;
      while ( ++result != m_Size )
      {
        p_m_nContext += 10;
        if ( nContextId.m_nHashCode == p_m_nContext[-10].m_nHashCode )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CBaseEntity::RegisterThinkContext  (line 1119, @0x0000000001ee64d0, libserver.so)  // inlines: AddToTail, CopyConstruct<thinkfunc_t>, Element, GrowMemory, V_memset, memset, operator[]
// calls: CBaseEntity::GetIndexForThinkContext, CUtlMemory<thinkfunc_t, int>::Grow
// callers: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CPhysicsProp::VPhysicsCollision
int __fastcall CBaseEntity::RegisterThinkContext(CBaseEntity *const this, CUtlStringToken nContextId)
{
  int result; // eax
  int m_Size; // r12d
  int v6; // edx
  thinkfunc_t *v7; // rdx
  __int64 sNewFunc_24; // [rsp+18h] [rbp-28h]

  result = CBaseEntity::GetIndexForThinkContext(this, nContextId);
  if ( result == -1 )
  {
    sNewFunc_24 = nContextId.m_nHashCode;
    m_Size = this->m_aThinkFunctions.m_Size;
    v6 = m_Size;
    if ( m_Size == this->m_aThinkFunctions.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<thinkfunc_t,int>::Grow(&this->m_aThinkFunctions.m_Memory, 1);
      v6 = this->m_aThinkFunctions.m_Size;
    }
    this->m_aThinkFunctions.m_Size = v6 + 1;
    v7 = &this->m_aThinkFunctions.m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
    {
      v7->m_think.__pfn = 0;
      v7->m_think.__delta = 0;
      v7->m_hFn = 0;
      *&v7->m_nContext.m_nHashCode = sNewFunc_24;
      *&v7->m_nLastThinkTick = 0;
    }
    return m_Size;
  }
  return result;
}


// CBaseEntity::ThinkSet  (line 1137, @0x0000000001ee65b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>, operator[]
// calls: CBaseEntity::CheckHasThinkFunction, CBaseEntity::GetIndexForThinkContext, CBaseEntity::RegisterThinkContext
// callers: CDevtestHierarchy::StartupTestModeThinkFunction, CDevtestHierarchy::Spawn, CBaseEntity::DispatchScriptThink, CBaseEntity::Script_SetContextThink, CEnvClock::Spawn, CMultiLightProxy::InputFlickerLights, CMultiLightProxy::InputDisableLights, CMultiLightProxy::InputSetLightsBrightnessMultiplier, CMultiLightProxy::ApproachBrightnessThink, CFogController::InputStartFogTransition, CPointCamera::InputChangeFOV, CPointCamera::ChangeFOVThink (261 total)
void __fastcall CBaseEntity::ThinkSet(
        CBaseEntity *const this,
        BASEPTR basefunc,
        float thinkTime,
        CUtlStringToken nContextId,
        HSCRIPT hFn)
{
  void (*pfn)(CGameEntity *); // r12
  int v8; // r13d
  int IndexForThinkContext; // eax
  __int64 m_nHashCode; // rcx
  __int64 v11; // rdx
  float v12; // xmm0_4
  __int64 v13; // r15
  thinkfunc_t *m_pMemory; // rax
  HSCRIPT m_hFn; // rsi
  __int64 v16; // rax
  int v17; // eax
  float v18; // [rsp+Ch] [rbp-44h]
  __int64 delta; // [rsp+10h] [rbp-40h]
  float v20; // [rsp+10h] [rbp-40h]
  thinkfunc_t *v22; // [rsp+18h] [rbp-38h]

  pfn = basefunc.__pfn;
  if ( basefunc.__pfn != 0 )
  {
    if ( thinkTime == -1.0 )
    {
      v8 = -1;
      if ( nContextId.m_nHashCode != 0 )
        goto LABEL_13;
      goto LABEL_5;
    }
    v8 = ((thinkTime / gpGlobals->interval_per_tick) + 0.5);
  }
  else
  {
    thinkTime = -1.0;
    v8 = -1;
  }
  if ( nContextId.m_nHashCode != 0 )
  {
LABEL_13:
    v18 = thinkTime;
    delta = basefunc.__delta;
    IndexForThinkContext = CBaseEntity::GetIndexForThinkContext(this, nContextId);
    m_nHashCode = nContextId.m_nHashCode;
    v11 = delta;
    v12 = v18;
    if ( IndexForThinkContext == -1 )
    {
      v17 = CBaseEntity::RegisterThinkContext(this, nContextId);
      v12 = v18;
      v11 = delta;
      v13 = v17;
      this->m_aThinkFunctions.m_Memory.m_pMemory[v13].m_hFn = 0;
    }
    else
    {
      v13 = IndexForThinkContext;
    }
    m_pMemory = this->m_aThinkFunctions.m_Memory.m_pMemory;
    m_pMemory[v13].m_think.__pfn = pfn;
    m_pMemory[v13].m_think.__delta = v11;
    m_hFn = this->m_aThinkFunctions.m_Memory.m_pMemory[v13].m_hFn;
    if ( m_hFn != hFn )
    {
      v20 = v12;
      (*(*g_pScriptVM + 152LL))(g_pScriptVM, m_hFn, v11, m_nHashCode);
      v22 = &this->m_aThinkFunctions.m_Memory.m_pMemory[v13];
      v16 = (*(*g_pScriptVM + 456LL))(g_pScriptVM, hFn);
      v12 = v20;
      v22->m_hFn = v16;
    }
    if ( v12 != 0.0 )
      this->m_aThinkFunctions.m_Memory.m_pMemory[v13].m_nNextThinkTick = v8;
    goto LABEL_8;
  }
LABEL_5:
  this->m_think.__pfn = basefunc.__pfn;
  this->m_think.__delta = basefunc.__delta;
  if ( thinkTime != 0.0 && v8 != this->m_nNextThinkTick.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 408, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nNextThinkTick.m_Value = v8;
  }
LABEL_8:
  CBaseEntity::CheckHasThinkFunction(this);
}


// CBaseEntity::SetNextThink  (line 1182, @0x0000000001ee7640, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>, operator[]
// calls: CBaseEntity::CheckHasThinkFunction, CBaseEntity::GetIndexForThinkContext, CBaseEntity::RegisterThinkContext
// callers: CDevtestHierarchy::AnimationThink, CDevtestHierarchy::SpinThink, CDevtestHierarchy::AttachAndDetachThink, CDevtestHierarchy::SwitchParentThink, CDevtestHierarchy::ChildDormancyThink, CDevtestHierarchy::SwitchModelThink, CDevtestHierarchy::CycleAttachmentTypeThink, CDevtestHierarchy::SwitchChildModelThink, CBaseEntity::SetNextThink, CFogController::InputStartFogTransition, CPointCamera::InputChangeFOV, CPointCamera::ChangeFOVThink (337 total)
void __fastcall CBaseEntity::SetNextThink(
        CBaseEntity *const this,
        double a2,
        double thinkTime,
        CUtlStringToken nContextId)
{
  int v6; // r12d
  int IndexForThinkContext; // eax

  if ( *&a2 == -1.0 )
  {
    v6 = -1;
    goto LABEL_3;
  }
  HIDWORD(thinkTime) = HIDWORD(a2);
  *&thinkTime = (*&a2 / gpGlobals->interval_per_tick) + 0.5;
  v6 = *&thinkTime;
  if ( *&thinkTime != 0 )
  {
LABEL_3:
    if ( nContextId.m_nHashCode == 0 )
      goto LABEL_4;
    goto LABEL_9;
  }
  v6 = *&a2 > 0.0;
  if ( nContextId.m_nHashCode == 0 )
  {
LABEL_4:
    if ( v6 != this->m_nNextThinkTick.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 408, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, thinkTime);
      this->m_nNextThinkTick.m_Value = v6;
    }
    goto LABEL_6;
  }
LABEL_9:
  IndexForThinkContext = CBaseEntity::GetIndexForThinkContext(this, nContextId);
  if ( IndexForThinkContext == -1 )
    IndexForThinkContext = CBaseEntity::RegisterThinkContext(this, nContextId);
  this->m_aThinkFunctions.m_Memory.m_pMemory[IndexForThinkContext].m_nNextThinkTick = v6;
LABEL_6:
  CBaseEntity::CheckHasThinkFunction(this);
}


// CBaseEntity::GetNextThink  (line 1226, @0x0000000001ed2280, libserver.so)  // inlines: operator==<int>, operator[]
// calls: CBaseEntity::GetIndexForThinkContext
// callers: CBreakableProp::CopyFadeFrom, CDynamicProp::PropSetSequence, CGibShooter::InitPointGib, CEnvSpark::InputToggleSpark, CTimerEntity::InputAddToTimer, CTimerEntity::InputSubtractFromTimer, CTimerEntity::DrawDebugTextOverlays, CRagdollProp::IsFading, CTriggerMultiple::ActivateMultiTrigger, CTriggerSndSosOpvar::SndSosTriggerOpvarActivate, CDOTA_HeroTrigger::ActivateMultiTrigger
float __fastcall CBaseEntity::GetNextThink(CBaseEntity *const this, CUtlStringToken nContextId)
{
  int m_nNextThinkTick; // eax
  int IndexForThinkContext; // eax

  if ( nContextId.m_nHashCode != 0 )
  {
    IndexForThinkContext = CBaseEntity::GetIndexForThinkContext(this, nContextId);
    if ( IndexForThinkContext != -1 )
    {
      m_nNextThinkTick = this->m_aThinkFunctions.m_Memory.m_pMemory[IndexForThinkContext].m_nNextThinkTick;
      if ( m_nNextThinkTick != -1 )
        return m_nNextThinkTick * gpGlobals->interval_per_tick;
    }
  }
  else
  {
    m_nNextThinkTick = this->m_nNextThinkTick.m_Value;
    if ( m_nNextThinkTick != -1 )
      return m_nNextThinkTick * gpGlobals->interval_per_tick;
  }
  return -1.0;
}


// CBaseEntity::GetNextThinkTick  (line 1263, @0x0000000001ed22f0, libserver.so)  // inlines: operator==<int>
// calls: CBaseEntity::GetIndexForThinkContext
// callers: CBaseEntity::OverrideFriction, CBaseEntity::StepSimulationThink, CBaseEntity::PhysicsStep, CPlayerMove::RunThink
int __fastcall CBaseEntity::GetNextThinkTick(CBaseEntity *const this, CUtlStringToken nContextId)
{
  int result; // eax
  __int64 IndexForThinkContext; // rdx

  if ( nContextId.m_nHashCode == 0 )
    return this->m_nNextThinkTick.m_Value;
  IndexForThinkContext = CBaseEntity::GetIndexForThinkContext(this, nContextId);
  result = -1;
  if ( IndexForThinkContext != -1 )
    return this->m_aThinkFunctions.m_Memory.m_pMemory[IndexForThinkContext].m_nNextThinkTick;
  return result;
}


// CBaseEntity::GetLastThink  (line 1301, @0x0000000001ed2330, libserver.so)  // inlines: operator[]
// calls: CBaseEntity::GetIndexForThinkContext
// callers: CBaseEntity::PhysicsStep, CPointAngularVelocitySensor::SampleAngularVelocity
float __fastcall CBaseEntity::GetLastThink(CBaseEntity *const this, CUtlStringToken nContextId)
{
  if ( nContextId.m_nHashCode != 0 )
    return this->m_aThinkFunctions.m_Memory.m_pMemory[CBaseEntity::GetIndexForThinkContext(this, nContextId)].m_nLastThinkTick
         * gpGlobals->interval_per_tick;
  else
    return this->m_nLastThinkTick * gpGlobals->interval_per_tick;
}


// CBaseEntity::GetLastThinkTick  (line 1327, @0x0000000001ed2390, libserver.so)  // inlines: operator[]
// calls: CBaseEntity::GetIndexForThinkContext
int __fastcall CBaseEntity::GetLastThinkTick(CBaseEntity *const this, CUtlStringToken nContextId)
{
  if ( nContextId.m_nHashCode != 0 )
    return this->m_aThinkFunctions.m_Memory.m_pMemory[CBaseEntity::GetIndexForThinkContext(this, nContextId)].m_nLastThinkTick;
  else
    return this->m_nLastThinkTick;
}


// CBaseEntity::RebaseThinkTicks  (line 1355, @0x0000000001ed23d0, libserver.so)  // inlines: curtime, operator[]
// callers: CBaseEntity::RebaseTimeEntriesForStasis
void __fastcall CBaseEntity::RebaseThinkTicks(CBaseEntity *const this, bool bMakeDeltas)
{
  CGlobalVars *v4; // r13
  CGlobalVars *v5; // rax
  float m_flCurrentTime; // xmm0_4
  int v7; // edx
  float v8; // xmm0_4
  __int64 v9; // rax
  int v10; // r8d
  thinkfunc_t *v11; // rcx
  int m_nNextThinkTick; // edi
  __int64 v13; // rcx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    v5 = gpGlobals;
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      v5 = gpGlobals;
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  else
  {
    v5 = 0;
    m_flCurrentTime = 0.0;
  }
  v7 = 0;
  v8 = (m_flCurrentTime / v5->interval_per_tick) + 0.5;
  v9 = 0;
  v10 = v8;
  if ( this->m_aThinkFunctions.m_Size > 0 )
  {
    while ( 1 )
    {
      v11 = &this->m_aThinkFunctions.m_Memory.m_pMemory[v9];
      m_nNextThinkTick = v11->m_nNextThinkTick;
      if ( m_nNextThinkTick <= 0 )
        goto LABEL_7;
      if ( bMakeDeltas )
      {
        v11->m_nNextThinkTick = m_nNextThinkTick - v10;
        this->m_aThinkFunctions.m_Memory.m_pMemory[v9].m_nLastThinkTick -= v10;
LABEL_7:
        ++v7;
        ++v9;
        if ( this->m_aThinkFunctions.m_Size <= v7 )
          return;
      }
      else
      {
        ++v7;
        v11->m_nNextThinkTick = v10 + m_nNextThinkTick;
        v13 = v9 * 40;
        ++v9;
        *(&this->m_aThinkFunctions.m_Memory.m_pMemory->m_nLastThinkTick + v13) += v10;
        if ( this->m_aThinkFunctions.m_Size <= v7 )
          return;
      }
    }
  }
}


// CBaseEntity::GetFirstThinkTick  (line 1384, @0x0000000001ed24d0, libserver.so)  // inlines: operator><int>
// callers: CBaseEntity::CheckHasThinkFunction, CBaseEntity::CheckHasGamePhysicsSimulation
int __fastcall CBaseEntity::GetFirstThinkTick(CBaseEntity *const this)
{
  int result; // eax
  int m_Size; // esi
  thinkfunc_t *m_pMemory; // rcx
  thinkfunc_t *v4; // rdx
  __int64 v5; // rsi
  int m_nNextThinkTick; // ecx

  result = this->m_nNextThinkTick.m_Value;
  m_Size = this->m_aThinkFunctions.m_Size;
  if ( result <= 0 )
    result = -1;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_aThinkFunctions.m_Memory.m_pMemory;
    v4 = m_pMemory + 1;
    v5 = &m_pMemory[(m_Size - 1) + 1];
    while ( 1 )
    {
      m_nNextThinkTick = m_pMemory->m_nNextThinkTick;
      if ( m_nNextThinkTick > 0 && (m_nNextThinkTick < result || result == -1) )
      {
        result = m_nNextThinkTick;
        m_pMemory = v4;
        if ( v4 == v5 )
          return result;
      }
      else
      {
        m_pMemory = v4;
        if ( v4 == v5 )
          return result;
      }
      ++v4;
    }
  }
  return result;
}


// CBaseEntity::CheckHasThinkFunction  (line 1409, @0x0000000001ed2540, libserver.so)  // inlines: AddEFlags, IsEFlagSet, IsMarkedForDeletion, RemoveEFlags
// calls: CBaseEntity::GetFirstThinkTick
// callers: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseEntity::OnRestore, CBaseEntity::LeaveStasis, CBaseEntity::AddedToEntityDatabase
void __fastcall CBaseEntity::CheckHasThinkFunction(CBaseEntity *const this)
{
  unsigned int v2; // ecx
  int v3; // r12d
  ISimulationThinkManager *v4; // r13
  unsigned int FirstThinkTick; // eax
  int m_Size; // edx
  thinkfunc_t *m_pMemory; // rax
  __int64 v8; // rdx

  if ( this->m_nNextThinkTick.m_Value <= 0 )
  {
    m_Size = this->m_aThinkFunctions.m_Size;
    if ( m_Size <= 0 )
    {
LABEL_9:
      v3 = this->m_iEFlags | 0x400000;
      this->m_iEFlags = v3;
      goto LABEL_3;
    }
    m_pMemory = this->m_aThinkFunctions.m_Memory.m_pMemory;
    v8 = &m_pMemory[(m_Size - 1) + 1];
    while ( m_pMemory->m_nNextThinkTick <= 0 || m_pMemory->m_think.__pfn == 0 )
    {
      if ( ++m_pMemory == v8 )
        goto LABEL_9;
    }
  }
  v2 = this->m_iEFlags & 0xFFBFFFFF;
  this->m_iEFlags = v2;
  v3 = v2;
LABEL_3:
  v4 = g_pSimThinkManager;
  FirstThinkTick = CBaseEntity::GetFirstThinkTick(this);
  (*(v4->_vptr_ISimulationThinkManager + 1))(
    v4,
    this,
    FirstThinkTick,
    (v3 & 0x400000) != 0,
    (this->m_pEntity->m_flags & 0x200) != 0,
    (v3 & 0x800000) != 0);
}


// CBaseEntity::DispatchScriptThink  (line 1446, @0x0000000001ee67a0, libserver.so)  // inlines: CVariantBase, Free, Get, GetFloat, GetPublicScriptScope, curtime, operator=, operator[], ~CVariantBase
// calls: CBaseEntity::ThinkSet, CVariantBase<CVariantDefaultAllocator>::AssignTo, CEntityInstance::CreatePublicScriptScope, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CBaseEntity::PhysicsDispatchThink
// globals: CBaseEntity::FakeScriptThinkFunc(void)
void __fastcall CBaseEntity::DispatchScriptThink(CBaseEntity *const this, int nContextIndex)
{
  thinkfunc_t *v3; // rax
  HSCRIPT m_hFn; // r12
  CUtlStringToken v5; // r13d
  CEntityIdentity *m_pEntity; // rax
  HSCRIPT m_hScope; // rax
  HSCRIPT v8; // r14
  float m_fValue; // xmm1_4
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v11; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float flThinkInterval; // [rsp+1Ch] [rbp-54h] BYREF
  CVariantBase<CVariantDefaultAllocator> thinkArgs[1]; // [rsp+20h] [rbp-50h] BYREF
  ScriptVariant_t varThinkRetVal; // [rsp+30h] [rbp-40h] BYREF

  v3 = &this->m_aThinkFunctions.m_Memory.m_pMemory[nContextIndex];
  m_hFn = v3->m_hFn;
  v5.m_nHashCode = v3->m_nContext.m_nHashCode;
  if ( m_hFn == 0 )
  {
    CBaseEntity::ThinkSet(this, 0LL, 0.0, v5, 0);
    return;
  }
  m_pEntity = this->m_pEntity;
  thinkArgs[0].m_type = 0;
  thinkArgs[0].m_flags = 0;
  thinkArgs[0].m_uint64 = 0;
  m_hScope = m_pEntity->m_hPublicScope.m_hScope;
  if ( m_hScope != 0 )
  {
    v8 = m_hScope;
  }
  else
  {
    CEntityInstance::CreatePublicScriptScope(this, 0);
    v8 = this->m_pEntity->m_hPublicScope.m_hScope;
  }
  thinkArgs[0].m_type = 31;
  thinkArgs[0].m_uint64 = v8;
  varThinkRetVal.m_type = 0;
  varThinkRetVal.m_flags = 0;
  varThinkRetVal.m_uint64 = 0;
  if ( (*(*g_pScriptVM + 160LL))(g_pScriptVM, m_hFn, thinkArgs, 1, &varThinkRetVal, 0, 1, thinkArgs) == 0 )
  {
    flThinkInterval = -1.0;
    if ( varThinkRetVal.m_type != 0 )
    {
      if ( varThinkRetVal.m_type == 6 )
      {
        if ( varThinkRetVal.m_char == 0 )
          goto LABEL_6;
        m_fValue = sv_script_think_interval.m_pParent->m_Value.m_fValue;
        flThinkInterval = m_fValue;
      }
      else
      {
        if ( varThinkRetVal.m_type == 30 || varThinkRetVal.m_type == 2 )
          goto LABEL_6;
        if ( !CVariantBase<CVariantDefaultAllocator>::AssignTo(&varThinkRetVal, &flThinkInterval) )
        {
          CVariantBase<CVariantDefaultAllocator>::Free(&varThinkRetVal);
          varThinkRetVal.m_int = -1082130432;
          varThinkRetVal.m_type = 1;
        }
        m_fValue = flThinkInterval;
      }
      m_flCurrentTime = 0.0;
      if ( m_fValue >= 0.0 )
      {
        v11 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
            {
              m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
              m_fValue = flThinkInterval;
            }
          }
          m_flCurrentTime = v11->m_flCurrentTime;
        }
        CBaseEntity::ThinkSet(this, CBaseEntity::FakeScriptThinkFunc, m_flCurrentTime + m_fValue, v5, m_hFn);
        goto LABEL_7;
      }
    }
LABEL_6:
    CBaseEntity::ThinkSet(this, 0LL, 0.0, v5, 0);
LABEL_7:
    if ( (varThinkRetVal.m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, varThinkRetVal.m_uint64);
      varThinkRetVal.m_flags &= ~1u;
    }
    varThinkRetVal.m_uint64 = 0;
    varThinkRetVal.m_type = 0;
    if ( (thinkArgs[0].m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, thinkArgs[0].m_uint64);
    return;
  }
  CBaseEntity::ThinkSet(this, 0LL, 0.0, v5, 0);
  if ( (varThinkRetVal.m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, varThinkRetVal.m_uint64);
    varThinkRetVal.m_flags &= ~1u;
  }
  varThinkRetVal.m_uint64 = 0;
  varThinkRetVal.m_type = 0;
  if ( (thinkArgs[0].m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, thinkArgs[0].m_uint64);
}


// GetThinkVprofName  (line 1504, @0x0000000001ed78b0, libserver.so)  // inlines: GetBool, GetClassInfo, GetInt
// calls: vprof_MakeNameFromTwoStrings
// callers: CBaseEntity::PhysicsDispatchThink
// strings: "EntityThink ", "CBaseEntity::PhysicsDispatchThink"
const char *__fastcall GetThinkVprofName(CBaseEntity *const pEnt)
{
  if ( g_VProfCurrentProfile.m_enabled != 0 && vprof_scope_entity_thinks.m_pParent->m_Value.m_nValue != 0 )
    return vprof_MakeNameFromTwoStrings("EntityThink ", pEnt->m_pEntity->m_pClass->m_pClassInfo->m_pszClassname);
  else
    return "CBaseEntity::PhysicsDispatchThink";
}


// CBaseEntity::PhysicsDispatchThink  (line 1532, @0x0000000001ee6ae0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, GetBool, GetClassInfo, GetClassNameAsCStr, GetClassname, GetDebugName, GetElapsed, GetEntityNameAsCStr, GetFloat, GetInt, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, String, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: GetThinkVprofName, CBaseEntity::DispatchScriptThink, Plat_FloatTime, LoggingSystem_IsChannelEnabled, CEntityInstance::GetEntityIndex, LoggingSystem_Log, ThreadGetCurrentId, CEntityIdentity::GetDebugName, Warning, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void) (15 total)
// callers: CBaseEntity::PhysicsRunSpecificThink
// strings: "%s: %s(%s) '%s' [%d] thinking for %.02f ms!!!\n", "Dormant entity %s (%s) is thinking!!\n", "Unaccounted"
void __fastcall CBaseEntity::PhysicsDispatchThink(CBaseEntity *const this, int nContextIndex, BASEPTR thinkFunc)
{
  void (*pfn)(CGameEntity *); // r13
  __int64 v6; // rdi
  double v7; // xmm0_8
  int m_enabled; // ecx
  bool v9; // r15
  CEntityIdentity *m_pEntity; // rdi
  ConVar *m_pParent; // rax
  double v12; // xmm1_8
  double v13; // xmm2_8
  double v14; // xmm3_8
  bool v15; // zf
  _QWORD *v16; // rdi
  __m128d v17; // xmm0
  float v18; // xmm7_4
  CEntityIndex v19; // eax
  CEntityIdentity *v20; // rdx
  const char *v21; // rcx
  const char *v22; // r8
  unsigned __int64 v23; // r12
  ThreadId_t v24; // r13
  uint64 v25; // rcx
  uint64 m_numTimeBaseTicks; // rcx
  const char *DebugName; // rax
  CEntityIdentity *v28; // rcx
  const char *m_pAsString; // rsi
  CVProfNode *v30; // rax
  CVProfNode *m_pCurNode; // rdi
  ThreadId_t m_TargetThreadId; // [rsp+10h] [rbp-50h]
  double startTime; // [rsp+18h] [rbp-48h]
  unsigned __int64 startTimea; // [rsp+18h] [rbp-48h]
  __int64 time; // [rsp+20h] [rbp-40h]
  float timea; // [rsp+20h] [rbp-40h]
  char *ThinkVprofName; // [rsp+28h] [rbp-38h]
  float m_fValue; // [rsp+28h] [rbp-38h]

  pfn = thinkFunc.__pfn;
  time = thinkFunc.__delta;
  ThinkVprofName = GetThinkVprofName(this);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v9 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    startTimea = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId(v6) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( ThinkVprofName != m_pCurNode->m_pszName )
      {
        m_pCurNode = CVProfNode::GetSubNode(m_pCurNode, ThinkVprofName, 0, "Unaccounted", 0);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      CVProfNode::EnterScope(m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - startTimea + __rdtsc();
  }
  m_pEntity = this->m_pEntity;
  m_pParent = think_limit.m_pParent;
  *&v12 = LODWORD(m_pParent->m_Value.m_fValue);
  m_fValue = m_pParent->m_Value.m_fValue;
  if ( SLOBYTE(m_pEntity->m_flags) < 0 )
  {
    DebugName = CEntityIdentity::GetDebugName(m_pEntity);
    v28 = this->m_pEntity;
    m_pAsString = "";
    if ( v28->m_designerName.u.m_Id != 0 )
      m_pAsString = v28->m_designerName.u.m_pAsString;
    Warning("Dormant entity %s (%s) is thinking!!\n", m_pAsString, DebugName);
  }
  *&v13 = LODWORD(m_fValue);
  v14 = 0.0;
  if ( m_fValue == 0.0 )
  {
    startTime = 0.0;
  }
  else
  {
    v7 = Plat_FloatTime(v7);
    startTime = v7;
  }
  if ( pfn == 0 )
    goto LABEL_9;
  if ( nContextIndex >= 0 && this->m_aThinkFunctions.m_Memory.m_pMemory[nContextIndex].m_hFn != 0 )
  {
    CBaseEntity::DispatchScriptThink(this, nContextIndex);
LABEL_9:
    v15 = m_fValue == 0.0;
    goto LABEL_10;
  }
  v16 = (&this->_vptr_IHandleEntity + time);
  if ( (pfn & 1) != 0 )
    pfn = *(pfn + *v16 - 1);
  (pfn)(v16, v7, v12, v13, v14);
  v15 = m_fValue == 0.0;
LABEL_10:
  if ( !v15 )
  {
    v17.m128d_f64[0] = (Plat_FloatTime(v7) - startTime) * 1000.0;
    v18 = _mm_movedup_pd(v17).m128d_f64[0];
    timea = v18;
    if ( v18 > m_fValue )
    {
      if ( vprof_think_limit.m_pParent->m_Value.m_nValue != 0 )
        g_VProfSignalSpike = 1;
      if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
      {
        v19.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
        v20 = this->m_pEntity;
        v21 = "";
        if ( v20->m_name.u.m_Id != 0 )
          v21 = v20->m_name.u.m_pAsString;
        v22 = "";
        if ( v20->m_designerName.u.m_Id != 0 )
          v22 = v20->m_designerName.u.m_pAsString;
        LoggingSystem_Log(
          LOG_ENTITY_SYSTEM,
          1,
          "%s: %s(%s) '%s' [%d] thinking for %.02f ms!!!\n",
          "SERVER",
          v22,
          v20->m_pClass->m_pClassInfo->m_pszCPPClassname,
          timea,
          v21,
          v19.m_Data);
      }
    }
  }
  if ( v9 )
  {
    v23 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v24 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v24 == ThreadGetCurrentId(m_pEntity) )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          v30 = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( v30 != 0 )
            g_VProfCurrentProfile.m_pCurNode = v30;
          else
            v30 = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          v30 = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = v30 == &g_VProfCurrentProfile.m_Root;
      }
    }
    v25 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v25 - v23 + __rdtsc();
  }
}


// CBaseEntity::WillSimulateGamePhysics  (line 1597, @0x0000000001ed2620, libserver.so)  // inlines: GetMoveDoneTime, GetMoveType
// callers: CBaseEntity::CheckHasGamePhysicsSimulation
bool __fastcall CBaseEntity::WillSimulateGamePhysics(CBaseEntity *const this)
{
  bool result; // al
  MoveType_t m_Value; // dl
  float m_flMoveDoneTime; // xmm1_4

  result = (*(this->_vptr_IHandleEntity + 140))(this);
  if ( !result )
  {
    m_Value = this->m_MoveType.m_Value;
    if ( m_Value != MoveType_t::MOVETYPE_NONE && m_Value != MoveType_t::MOVETYPE_VPHYSICS )
    {
      if ( m_Value == MoveType_t::MOVETYPE_PUSH )
      {
        m_flMoveDoneTime = this->m_flMoveDoneTime;
        if ( m_flMoveDoneTime >= 0.0 )
          return (m_flMoveDoneTime - this->m_flLocalTime) > 0.0;
      }
      else
      {
        return 1;
      }
    }
  }
  return result;
}


// CBaseEntity::CheckHasGamePhysicsSimulation  (line 1624, @0x0000000001ed2690, libserver.so)  // inlines: AddEFlags, IsEFlagSet, IsMarkedForDeletion, RemoveEFlags
// calls: CBaseEntity::WillSimulateGamePhysics, CBaseEntity::GetFirstThinkTick
// callers: CBaseEntity::OnRestore, CBaseEntity::SetMoveDoneTime, CBaseEntity::SetMoveType, CBaseEntity::VPhysicsUpdatePusher, CBaseEntity::AddedToEntityDatabase
void __fastcall CBaseEntity::CheckHasGamePhysicsSimulation(CBaseEntity *const this)
{
  bool v2; // al
  int m_iEFlags; // ecx
  int v4; // ecx
  unsigned int v5; // r13d
  ISimulationThinkManager *v6; // r12
  unsigned int FirstThinkTick; // eax

  v2 = CBaseEntity::WillSimulateGamePhysics(this);
  m_iEFlags = this->m_iEFlags;
  if ( v2 == ((m_iEFlags & 0x800000) != 0) )
  {
    if ( v2 )
    {
      v5 = m_iEFlags & 0xFF7FFFFF;
      this->m_iEFlags = m_iEFlags & 0xFF7FFFFF;
    }
    else
    {
      v4 = m_iEFlags | 0x800000;
      this->m_iEFlags = v4;
      v5 = v4;
    }
    v6 = g_pSimThinkManager;
    FirstThinkTick = CBaseEntity::GetFirstThinkTick(this);
    (*(v6->_vptr_ISimulationThinkManager + 1))(
      v6,
      this,
      FirstThinkTick,
      (v5 & 0x400000) != 0,
      (this->m_pEntity->m_flags & 0x200) != 0,
      (v5 & 0x800000) != 0);
  }
}


// CBaseEntity::SetNextThink  (line 1647, @0x0000000001ee7720, libserver.so)  // inlines: operator[]
// calls: CBaseEntity::CheckHasThinkFunction, CBaseEntity::SetNextThink
// callers: CBaseEntity::PhysicsRunSpecificThink
void __fastcall CBaseEntity::SetNextThink(CBaseEntity *const this, int nContextIndex, double a3, double thinkTime)
{
  int v5; // edx

  if ( *&a3 == -1.0 )
  {
    v5 = -1;
    if ( nContextIndex >= 0 )
    {
LABEL_3:
      this->m_aThinkFunctions.m_Memory.m_pMemory[nContextIndex].m_nNextThinkTick = v5;
      CBaseEntity::CheckHasThinkFunction(this);
      return;
    }
  }
  else
  {
    HIDWORD(thinkTime) = HIDWORD(a3);
    *&thinkTime = (*&a3 / gpGlobals->interval_per_tick) + 0.5;
    v5 = *&thinkTime;
    if ( nContextIndex >= 0 )
      goto LABEL_3;
  }
  CBaseEntity::SetNextThink(this, a3, thinkTime, 0);
  CBaseEntity::CheckHasThinkFunction(this);
}


// CBaseEntity::SetLastThink  (line 1664, @0x0000000001ed2750, libserver.so)  // inlines: operator[]
// callers: CBaseEntity::PhysicsRunSpecificThink, CBaseEntity::PhysicsStep
void __fastcall CBaseEntity::SetLastThink(CBaseEntity *const this, int nContextIndex, float a3, float thinkTime)
{
  int v4; // edx

  if ( a3 == -1.0 )
  {
    v4 = -1;
    if ( nContextIndex >= 0 )
    {
LABEL_3:
      this->m_aThinkFunctions.m_Memory.m_pMemory[nContextIndex].m_nLastThinkTick = v4;
      return;
    }
  }
  else
  {
    v4 = ((a3 / gpGlobals->interval_per_tick) + 0.5);
    if ( nContextIndex >= 0 )
      goto LABEL_3;
  }
  this->m_nLastThinkTick = v4;
}


// CBaseEntity::GetNextThink  (line 1680, @0x0000000001ed27b0, libserver.so)  // inlines: operator[]
float __fastcall CBaseEntity::GetNextThink(const CBaseEntity *const this, int nContextIndex)
{
  if ( nContextIndex < 0 )
    return this->m_nNextThinkTick.m_Value * gpGlobals->interval_per_tick;
  else
    return this->m_aThinkFunctions.m_Memory.m_pMemory[nContextIndex].m_nNextThinkTick * gpGlobals->interval_per_tick;
}


// CBaseEntity::GetNextThinkTick  (line 1690, @0x0000000001ed2800, libserver.so)  // inlines: operator[]
// callers: CBaseEntity::PhysicsRunSpecificThink
int __fastcall CBaseEntity::GetNextThinkTick(const CBaseEntity *const this, int nContextIndex)
{
  if ( nContextIndex < 0 )
    return this->m_nNextThinkTick.m_Value;
  else
    return this->m_aThinkFunctions.m_Memory.m_pMemory[nContextIndex].m_nNextThinkTick;
}


// CBaseEntity::Script_SetContextThink  (line 1698, @0x0000000001ee6ef0, libserver.so)  // inlines: MakeStringToken, curtime
// calls: MurmurHash2LowerCase, CBaseEntity::ThinkSet, RegisterStringToken
// strings: "__DefaultScriptThinkContext"
// globals: CBaseEntity::FakeScriptThinkFunc(void)
void __fastcall CBaseEntity::Script_SetContextThink(
        CBaseEntity *const this,
        const char *pszContextName,
        HSCRIPT hThinkFunc,
        float flInterval)
{
  const char *v5; // rbx
  uint32 v6; // eax
  HSCRIPT v7; // r8
  CUtlStringToken v8; // r13d
  double v9; // xmm0_8
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v11; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  uint32 v13; // eax
  int flIntervalb; // [rsp+4h] [rbp-2Ch]
  HSCRIPT hThinkFuncb; // [rsp+8h] [rbp-28h]
  uint32 hThinkFuncc; // [rsp+8h] [rbp-28h]

  v5 = pszContextName;
  if ( pszContextName != 0 )
  {
    if ( *pszContextName == 0 )
      v5 = "__DefaultScriptThinkContext";
  }
  else
  {
    v5 = "__DefaultScriptThinkContext";
  }
  if ( hThinkFunc != 0 )
  {
    v6 = MurmurHash2LowerCase(v5, 0x31415926u);
    v7 = hThinkFunc;
    v8.m_nHashCode = v6;
    *&v9 = LODWORD(flInterval);
    if ( g_bUpdateStringTokenDatabase )
    {
      RegisterStringToken(v6, v5, 0, 1);
      *&v9 = LODWORD(flInterval);
      v7 = hThinkFunc;
    }
    m_flCurrentTime = 0.0;
    v11 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          flIntervalb = LODWORD(v9);
          hThinkFuncb = v7;
          (m_pfnWarningFunc)(1, v9, 0.0);
          v7 = hThinkFuncb;
          LODWORD(v9) = flIntervalb;
        }
      }
      m_flCurrentTime = v11->m_flCurrentTime;
    }
    CBaseEntity::ThinkSet(this, CBaseEntity::FakeScriptThinkFunc, *&v9 + m_flCurrentTime, v8, v7);
  }
  else
  {
    v13 = MurmurHash2LowerCase(v5, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      hThinkFuncc = v13;
      RegisterStringToken(v13, v5, 0, 1);
      v13 = hThinkFuncc;
    }
    CBaseEntity::ThinkSet(this, 0LL, 0.0, v13, 0);
  }
}


// CBaseEntity::VPhysicsUpdate  (line 1719, @0x0000000001ecd200, libserver.so)  // inlines: GetCollisionGroup
// calls: CBaseEntity::VPhysicsUpdatePusher, CBaseEntity::PhysicsRelinkChildren, CCollisionProperty::SetCollisionGroup
// callers: CBaseCombatCharacter::VPhysicsUpdate, CPhysBox::VPhysicsUpdate, CPhysicsProp::VPhysicsUpdate, CPropVehicle::VPhysicsUpdate
void __fastcall CBaseEntity::VPhysicsUpdate(CBaseEntity *const this, IPhysicsObject *pPhysics)
{
  MoveType_t m_Value; // al
  float v4; // xmm1_4
  CCollisionProperty *m_pCollision; // rdi

  m_Value = this->m_MoveType.m_Value;
  if ( m_Value == MoveType_t::MOVETYPE_VPHYSICS )
  {
    if ( (*(*pPhysics + 1464LL))(pPhysics) != 0 )
    {
      m_pCollision = this->m_pCollision;
      if ( m_pCollision != 0 && m_pCollision->m_CollisionGroup.m_Value == 6 )
        CCollisionProperty::SetCollisionGroup(m_pCollision, 5);
    }
    CBaseEntity::PhysicsRelinkChildren(this, v4);
  }
  else if ( m_Value == MoveType_t::MOVETYPE_PUSH )
  {
    CBaseEntity::VPhysicsUpdatePusher(this, pPhysics);
  }
}


// CBaseEntity::VPhysicsGetObject  (line 1763, @0x0000000001ed2830, libserver.so)  // inlines: GetSkeletonInstance, VPhysicsGetAggregate
// callers: CBaseEntity::GetVelocity, CBaseEntity::DrawAbsBoxOverlay, CBaseEntity::IsFloating, Script_GetPhysAngularVelocity, Script_GetPhysVelocity, Script_SetPhysAngularVelocity, CEntityDebugGameSystem::DrawMassReport, CreatePiecesFromPropData, CreateGibsFromList, CBreakableProp::GetRootPhysicsObjectForBreak, CBaseModelEntity::SUB_AllowedToFade, CBreakableProp::Break (133 total)
IPhysicsObject *__fastcall CBaseEntity::VPhysicsGetObject(const CBaseEntity *const this)
{
  CBodyComponent::Storage_t m_CBodyComponent; // rax
  __int64 v2; // rax
  __int64 v3; // rbx

  m_CBodyComponent = this->m_CBodyComponent;
  if ( m_CBodyComponent == 0 )
    return 0;
  v2 = (*(m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(m_CBodyComponent->m_pSceneNode);
  if ( v2 != 0 && (v3 = *(v2 + 536)) != 0 && (*(*v3 + 72LL))(v3) > 0 )
    return (*(*v3 + 80LL))(v3, 0);
  else
    return 0;
}


// CBaseEntity::VPhysicsBody  (line 1774, @0x0000000001ed29e0, libserver.so)  // inlines: GetSkeletonInstance, VPhysicsGetAggregate
// callers: CKeepUpright::Activate, CPhysMagnet::VPhysicsCollision
HPhysicsBody __fastcall CBaseEntity::VPhysicsBody(const CBaseEntity *const this)
{
  CBodyComponent::Storage_t m_CBodyComponent; // rax
  __int64 v2; // rax
  __int64 v3; // rbx

  m_CBodyComponent = this->m_CBodyComponent;
  if ( m_CBodyComponent == 0 )
    return 0;
  v2 = (*(m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(m_CBodyComponent->m_pSceneNode);
  if ( v2 != 0 && (v3 = *(v2 + 536)) != 0 && (*(*v3 + 72LL))(v3) > 0 )
    return (*(*v3 + 80LL))(v3, 0);
  else
    return 0;
}


// CBaseEntity::VPhysicsWorld  (line 1785, @0x0000000001ed2a50, libserver.so)
// calls: CPhysicsGameSystem::GetOrCreateLevelWorld
// callers: Physics_CreateAggregate, CModelState::CleanupPhysics, CTraceFilterEntity::ShouldHitEntity, CTraceFilterEntityIgnoreOther::ShouldHitEntity, UTIL_TraceEntityAABB, UTIL_TraceEntity, UTIL_TraceLineFilterEntity, CEnvShake::UpdateOnRemove, CEnvShake::ApplyShake, CItem::~CItem, CItem::OnPhysGunPickup, CPhysForce::UpdateOnRemove (43 total)
IVPhysics2World *__fastcall CBaseEntity::VPhysicsWorld(const CBaseEntity *const this)
{
  return CPhysicsGameSystem::GetOrCreateLevelWorld(g_pPhysicsGameSystem, this);
}


// CBaseEntity::VPhysicsGetObjectList  (line 1793, @0x0000000001ecb850, libserver.so)  // inlines: GetSkeletonInstance, VPhysicsGetAggregate
int __fastcall CBaseEntity::VPhysicsGetObjectList(CBaseEntity *const this, IPhysicsObject **pList, int nListMax)
{
  CBodyComponent::Storage_t m_CBodyComponent; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  int v8; // eax
  int v9; // r13d
  __int64 v10; // rbx

  m_CBodyComponent = this->m_CBodyComponent;
  if ( m_CBodyComponent == 0 )
    return 0;
  v6 = (*(m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(m_CBodyComponent->m_pSceneNode);
  if ( v6 == 0 )
    return 0;
  v7 = *(v6 + 536);
  if ( v7 == 0 )
    return 0;
  v8 = (*(*v7 + 72LL))(v7);
  if ( v8 <= nListMax )
    nListMax = v8;
  v9 = nListMax;
  if ( nListMax > 0 )
  {
    v10 = 0;
    do
    {
      pList[v10] = (*(*v7 + 80LL))(v7, v10);
      ++v10;
    }
    while ( v9 > v10 );
  }
  return v9;
}


// CBaseEntity::VPhysicsDestroyObject  (line 1810, @0x0000000001ecc280, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::CleanupPhysics
// callers: CBaseEntity::~CBaseEntity, CBasePlayer::VPhysicsDestroyObject
void __fastcall CBaseEntity::VPhysicsDestroyObject(CBaseEntity *const this)
{
  CBodyComponent::Storage_t m_CBodyComponent; // rax
  CSkeletonInstance *v2; // rax

  m_CBodyComponent = this->m_CBodyComponent;
  if ( m_CBodyComponent != 0 )
  {
    v2 = (*(m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(m_CBodyComponent->m_pSceneNode);
    if ( v2 != 0 )
      CSkeletonInstance::CleanupPhysics(v2);
  }
}


// CBaseEntity::VPhysicsGetAggregate  (line 1826, @0x0000000001ed2a70, libserver.so)  // inlines: GetSkeletonInstance
// callers: CreatePiece, CDynamicProp::SpawnServerSide, CGamePhysicsQueryInterface::CheckOverlap, CGamePhysicsQueryInterface::ClipRayToEntity, CBaseEntity::VPhysicsTakeDamage, CBaseEntity::Teleport, CCollisionProperty::EnableAutoSleeping, CCollisionProperty::DisableAutoSleeping, CCollisionProperty::ComputeVPhysicsSurroundingBox, CEntityDissolve::ElectrocuteThink, CItemGenericTriggerHelper::InitTriggerHelper, CRagdollProp::VPhysicsUpdate (19 total)
IPhysAggregateInstance *__fastcall CBaseEntity::VPhysicsGetAggregate(const CBaseEntity *const this)
{
  CBodyComponent::Storage_t m_CBodyComponent; // rax
  __int64 v2; // rax

  m_CBodyComponent = this->m_CBodyComponent;
  if ( m_CBodyComponent == 0 )
    return 0;
  v2 = (*(m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(m_CBodyComponent->m_pSceneNode);
  if ( v2 != 0 )
    return *(v2 + 536);
  else
    return 0;
}


// CBaseEntity::VPhysicsGetTotalMass  (line 1843, @0x0000000001ed2ab0, libserver.so)  // inlines: GetSkeletonInstance
// callers: GetVelocityFromDamageForce
float __fastcall CBaseEntity::VPhysicsGetTotalMass(const CBaseEntity *const this)
{
  __int64 v1; // rdi

  v1 = *((*(this->m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_CBodyComponent->m_pSceneNode) + 536);
  if ( v1 != 0 )
    return (*(*v1 + 416LL))(v1);
  else
    return 0.0;
}


// CBaseEntity::VPhysicsIsFlesh  (line 1855, @0x0000000001ecb8e0, libserver.so)  // inlines: GetPartCount, GetSkeletonInstance, VPhysicsGetAggregate
bool __fastcall CBaseEntity::VPhysicsIsFlesh(CBaseEntity *const this)
{
  CBodyComponent::Storage_t m_CBodyComponent; // rax
  __int64 v2; // rax
  __int64 v3; // r15
  int v4; // r12d
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // rax
  __int16 v9; // ax

  m_CBodyComponent = this->m_CBodyComponent;
  if ( m_CBodyComponent == 0 )
    return 0;
  v2 = (*(m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(m_CBodyComponent->m_pSceneNode);
  if ( v2 == 0 )
    return 0;
  v3 = *(v2 + 536);
  if ( v3 == 0 )
    return 0;
  v4 = (*(*v3 + 72LL))(v3);
  if ( v4 <= 0 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = (*(*v3 + 80LL))(v3, v5);
    v7 = (*(*v6 + 1192LL))(v6);
    v8 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
    v9 = *((*(*v8 + 16LL))(v8, v7, 0) + 176);
    if ( (v9 & 0xFFFB) == 0x42 || v9 == 72 )
      break;
    if ( ++v5 == v4 )
      return 0;
  }
  return 1;
}


// CBaseEntity::PhysicsEnableMotion  (line 1877, @0x0000000001ed2af0, libserver.so)  // inlines: GetDataObject, GetSkeletonInstance, SetMotionType
// calls: CModelState::SetMotionType, CEntityIdentity::GetDataObject, CWatcherList::NotifyMotionState
// callers: CreatePiece, CreateGibsFromList, CBreakableProp::Event_Killed, CBreakableProp::StickAtPosition, CShatterGlassShard::DisableAndHidePhysics, CShatterGlassShard::UnFreeze, CShatterGlassShard::ApplyVelocity, CShatterGlassShard::FreezeInPlace, CShatterGlassShard::ResetRestoreMove, CRagdollProp::InputEnableMotion, CPhysBox::InputDisableMotion, CRagdollProp::InputDisableMotion (24 total)
void __fastcall CBaseEntity::PhysicsEnableMotion(CBaseEntity *const this, bool bEnable)
{
  __int64 v4; // rax
  CWatcherList *DataObject; // rax

  v4 = (*(this->m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_CBodyComponent->m_pSceneNode);
  CModelState::SetMotionType(
    (v4 + 320),
    (!bEnable ? VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED : VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC));
  DataObject = CEntityIdentity::GetDataObject(this->m_pEntity, 7);
  if ( DataObject != 0 )
    CWatcherList::NotifyMotionState(DataObject, this, bEnable);
}


// CBaseEntity::PhysicsGetMotionType  (line 1890, @0x0000000001ed2b60, libserver.so)  // inlines: GetMotionType, GetSkeletonInstance
// callers: CShatterGlassShard::IsFrozen, CPhysicsProp::DrawDebugTextOverlays
VPhysicsMotionType_t __fastcall CBaseEntity::PhysicsGetMotionType(const CBaseEntity *const this)
{
  return *((*(this->m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_CBodyComponent->m_pSceneNode)
         + 704);
}


// CBaseEntity::CreateVPhysics  (line 1898, @0x0000000001ecb9d0, libserver.so)
bool __fastcall CBaseEntity::CreateVPhysics(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::IsStandable  (line 1905, @0x0000000001ed2b80, libserver.so)  // inlines: GetSolid, GetSolidFlags
// callers: CBaseEntity::CanStandOn, CBaseEntity::ResolveFlyCollisionBounce, CBaseEntity::ResolveFlyCollisionSlide, CBaseEntity::ResolveFlyCollisionCustom, CBaseEntity::PhysicsCustom, CBaseEntity::PerformFlyCollisionResolution, CBaseEntity::PhysicsToss
bool __fastcall CBaseEntity::IsStandable(const CBaseEntity *const this)
{
  CCollisionProperty *m_pCollision; // rdi
  char v3; // dl
  bool result; // al
  CCollisionProperty *v5; // rdi
  CCollisionProperty *v6; // rdi
  CCollisionProperty *v7; // rdi

  m_pCollision = this->m_pCollision;
  if ( m_pCollision == 0 )
    return 1;
  v3 = (*(m_pCollision->_vptr_ICollideable + 8))(m_pCollision);
  result = 0;
  if ( (v3 & 1) != 0 )
    return result;
  v5 = this->m_pCollision;
  if ( v5 == 0 )
    return 1;
  if ( (*(v5->_vptr_ICollideable + 7))(v5) == 1 )
    return 1;
  v6 = this->m_pCollision;
  if ( v6 == 0 )
    return 1;
  if ( (*(v6->_vptr_ICollideable + 7))(v6) == 6 )
    return 1;
  v7 = this->m_pCollision;
  if ( v7 == 0 )
    return 1;
  (*(v7->_vptr_ICollideable + 7))(v7);
  return 1;
}


// CBaseEntity::IsSolidTo  (line 1921, @0x0000000001ed2c10, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline
// calls: CPhysicsGameSystem::ShouldGroupsCollide
bool __fastcall CBaseEntity::IsSolidTo(const CBaseEntity *const this, CBaseEntity *pOther)
{
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // edx
  CCollisionProperty *v4; // rax

  m_pCollision = pOther->m_pCollision;
  if ( m_pCollision != 0 )
  {
    m_Value = m_pCollision->m_CollisionGroup.m_Value;
    v4 = this->m_pCollision;
    if ( v4 != 0 )
      return CPhysicsGameSystem::ShouldGroupsCollide(g_pPhysicsGameSystem, v4->m_CollisionGroup.m_Value, m_Value);
  }
  else
  {
    v4 = this->m_pCollision;
    m_Value = 4;
    if ( v4 != 0 )
      return CPhysicsGameSystem::ShouldGroupsCollide(g_pPhysicsGameSystem, v4->m_CollisionGroup.m_Value, m_Value);
  }
  return CPhysicsGameSystem::ShouldGroupsCollide(g_pPhysicsGameSystem, 4, m_Value);
}


// CBaseEntity::InvalidatePhysicsRecursive  (line 1930, @0x0000000001ed2c80, libserver.so)
// callers: CBaseAnimatingOverlayController::SetNumAnimOverlays, CBaseEntity::Restore, CGenericFlexCycler::TickProceduralBoneTransform
void __fastcall CBaseEntity::InvalidatePhysicsRecursive(CBaseEntity *const this, int nChangeFlags)
{
  (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 11))(this->m_pGameSceneNode, nChangeFlags);
}


// CBaseEntity::GetRootMoveParent  (line 1951, @0x0000000001ed2ca0, libserver.so)  // inlines: GetMoveParent
// calls: CGameSceneNode::GetOwnerEntity
// callers: CBaseEntity::GetRootPVSParent, UTIL_EntityHasMatchingRootParent, UTIL_TraceEntityAABB, UTIL_TraceEntity, UTIL_TraceLineFilterEntity, CBaseEntity::ScriptGetRootMoveParent, CCollisionProperty::UpdateCollisionAttributes, CCollisionProperty::SetSolid, CBaseDoor::Spawn, CPhysicsPushedEntities::SpeculativelyCheckPush, CPhysicsPushedEntities::GenerateBlockingEntityList, CPushBlockerEnum::ShouldHitEntity (15 total)
CBaseEntity *__fastcall CBaseEntity::GetRootMoveParent(const CBaseEntity *const this)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CBaseEntity *v4; // rbx
  const CGameSceneNode *i; // rdi
  CBaseEntity *v6; // rax

  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent == 0 )
    return this;
  OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  v4 = OwnerEntity;
  if ( OwnerEntity == 0 )
    return this;
  for ( i = OwnerEntity->m_pGameSceneNode->m_pParent; i != 0; i = v6->m_pGameSceneNode->m_pParent )
  {
    v6 = CGameSceneNode::GetOwnerEntity(i);
    if ( v6 == 0 )
      break;
    v4 = v6;
  }
  return v4;
}


// CBaseEntity::IsPrecacheAllowed  (line 1966, @0x0000000001ed2d10, libserver.so)
// callers: CAllowPrecacheScopeGuard::CAllowPrecacheScopeGuard, CLoopModeGame::LoopInit, CGameEntitySystem::BuildResourceManifest, CGameEntitySystem::BuildResourceManifestForEntity, CGameEntitySystem::InvokePrecacheCallback, CGameEntitySystem::LockResourceManifest, CBaseDoor::Precache, CEnvSpark::Precache, CC_Prop_Dynamic_Create, CreatePhysicsProp<CPhysicsProp>, UTIL_PrecacheDecal, CDOTA_Item::Precache (17 total)
// globals: CBaseEntity::m_bAllowPrecache
bool __cdecl CBaseEntity::IsPrecacheAllowed()
{
  return CBaseEntity::m_bAllowPrecache;
}


// CBaseEntity::SetAllowPrecache  (line 1973, @0x0000000001ed2d20, libserver.so)
// callers: CSpawnGroupMgrGameSystem::SpawnGroupInit, CSource1GameConfiguration::ShutdownGameSession, CAllowPrecacheScopeGuard::CAllowPrecacheScopeGuard, CAllowPrecacheScopeGuard::~CAllowPrecacheScopeGuard, CLoopModeGame::LoopInit, CGameEntitySystem::BuildResourceManifest, CGameEntitySystem::BuildResourceManifestForEntity, CGameEntitySystem::InvokePrecacheCallback, CGameEntitySystem::LockResourceManifest, CC_Prop_Dynamic_Create, CreatePhysicsProp<CPhysicsProp>, CDOTA_Item::Precache (17 total)
// globals: CBaseEntity::m_bAllowPrecache
void __fastcall CBaseEntity::SetAllowPrecache(bool bAllow)
{
  CBaseEntity::m_bAllowPrecache = bAllow;
}


// CBaseEntity::SetDebugBits  (line 2000, @0x0000000001ed2d30, libserver.so)
// calls: CEntityDebugGameSystem::SetDebugBits
// callers: CallbackHighlight, CC_AI_LOS_Debug, CFuncLadder::Spawn, CFuncLadder::Activate, CBasePlayer::OnTakeDamage, showtriggers_toggle, CChangeLevel::BuildEntityTransitionList, dota_path_repro
void __fastcall CBaseEntity::SetDebugBits(CBaseEntity *const this, uint64 nBitMask)
{
  CEntityDebugGameSystem::SetDebugBits(g_pEntityDebugGameSystem, this, nBitMask);
}


// CBaseEntity::HasDebugBitsSet  (line 2007, @0x0000000001ed2d50, libserver.so)
// calls: CEntityDebugGameSystem::HasDebugBitsSet
// callers: CEntityIONotify::OnEntityIOOutput, CEntityIONotify::OnEntityIOInput, CAI_Expresser::FindResponse, SetDebugBits, CFuncTrackTrain::Next, dota_dev, CDOTA_BaseNPC::IsDebuggingOverride, CDOTA_BaseNPC::DrawDebugTextOverlays, CDOTA_BaseNPC::PerformAttack
bool __fastcall CBaseEntity::HasDebugBitsSet(const CBaseEntity *const this, uint64 nBitMask)
{
  return CEntityDebugGameSystem::HasDebugBitsSet(g_pEntityDebugGameSystem, this, nBitMask);
}


// CBaseEntity::ClearDebugBits  (line 2014, @0x0000000001ed2d70, libserver.so)
// calls: CEntityDebugGameSystem::ClearDebugBits
// callers: CallbackUnhighlight, CC_AI_LOS_Debug, CBasePlayer::TakeHealth, showtriggers_toggle, CDOTA_BaseNPC::DrawDebugTextOverlays
void __fastcall CBaseEntity::ClearDebugBits(CBaseEntity *const this, uint64 nBitMask)
{
  CEntityDebugGameSystem::ClearDebugBits(g_pEntityDebugGameSystem, this, nBitMask);
}


// CBaseEntity::ToggleDebugBits  (line 2021, @0x0000000001ed2d90, libserver.so)
// calls: CEntityDebugGameSystem::ToggleDebugBits
// callers: prop_debug, SetDebugBits, markup_group_ent_bbox, markup_group_ent_text
void __fastcall CBaseEntity::ToggleDebugBits(CBaseEntity *const this, uint64 nBitMask)
{
  CEntityDebugGameSystem::ToggleDebugBits(g_pEntityDebugGameSystem, this, nBitMask);
}


// CBaseEntity::GetDebugBits  (line 2028, @0x0000000001ed2db0, libserver.so)
// calls: CEntityDebugGameSystem::GetDebugBits
// callers: showtriggers_toggle
int64 __fastcall CBaseEntity::GetDebugBits(const CBaseEntity *const this)
{
  return CEntityDebugGameSystem::GetDebugBits(g_pEntityDebugGameSystem, this);
}


// CBaseEntity::AddTimedOverlay  (line 2039, @0x0000000001ed2dd0, libserver.so)  // inlines: VertexColor_t, curtime
// calls: CEntityDebugGameSystem::AddScrollingMessage
// callers: CBaseEntity::DrawOutputOverlay, CBaseEntity::DrawInputOverlay
void __fastcall CBaseEntity::AddTimedOverlay(CBaseEntity *const this, const char *msg, int endTime)
{
  float v3; // xmm0_4
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v6; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const char *v8; // [rsp-30h] [rbp-38h]
  float v9; // [rsp-24h] [rbp-2Ch]
  _BYTE v10[40]; // [rsp-20h] [rbp-28h] BYREF

  v3 = endTime;
  m_flCurrentTime = 0.0;
  v10[0] = -1;
  v10[1] = -51;
  v10[2] = -51;
  v10[3] = -1;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v8 = msg;
        v9 = endTime;
        (m_pfnWarningFunc)(1, v3, 0.0);
        msg = v8;
        v3 = v9;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  CEntityDebugGameSystem::AddScrollingMessage(g_pEntityDebugGameSystem, this, msg, v3 - m_flCurrentTime, v10);
}


// CBaseEntity::DrawInputOverlay  (line 2050, @0x0000000001ee1650, libserver.so)  // inlines: FieldType, GetDebugName, Int, TempString, ToString, curtime, operator int
// calls: CEntityIdentity::GetDebugName, V_snprintf, CBaseEntity::AddTimedOverlay, CVariantBase<CVariantDefaultAllocator>::AssignTo, __stack_chk_fail
// callers: CEntityIONotify::OnEntityIOInput
// strings: "%3.1f  (%s) <-- (%s)\n", "%3.1f  (%s,%d) <-- (%s)\n", "%3.1f  (%s,%s) <-- (%s)\n"
// globals: CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CBaseEntity::DrawInputOverlay(
        CBaseEntity *const this,
        const char *szInputName,
        CBaseEntity *pCaller,
        variant_t Value)
{
  const CVariantBase<CVariantDefaultAllocator> *m_uint64; // rbx
  int16 m_type; // cx
  const char *v8; // r8
  double v9; // xmm0_8
  CGlobalVars *v10; // rbx
  FnGlobalVarsWarningFunc v11; // rax
  const char *v12; // r9
  const char *DebugName; // rax
  int m_float; // r8d
  double m_flCurrentTime; // xmm0_8
  CGlobalVars *v16; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const char *v18; // r14
  const char *v19; // rax
  const char *v20; // r8
  double v21; // xmm0_8
  CGlobalVars *v22; // rbx
  FnGlobalVarsWarningFunc v23; // rax
  int v24; // [rsp+4h] [rbp-43Ch]
  const char *v25; // [rsp+8h] [rbp-438h]
  const char *v26; // [rsp+8h] [rbp-438h]
  const char *v27; // [rsp+8h] [rbp-438h]
  char bigstring[1032]; // [rsp+10h] [rbp-430h] BYREF
  unsigned __int64 v29; // [rsp+418h] [rbp-28h]

  m_uint64 = Value.m_uint64;
  v29 = __readfsqword(0x28u);
  m_type = *(Value.m_uint64 + 8);
  if ( m_type == 5 )
  {
    v12 = 0;
    if ( pCaller != 0 )
    {
      DebugName = CEntityIdentity::GetDebugName(pCaller->m_pEntity);
      m_type = m_uint64->m_type;
      v12 = DebugName;
    }
    if ( m_type == 1 )
    {
      m_float = m_uint64->m_float;
    }
    else if ( m_type == 34 )
    {
      m_float = m_uint64->m_float64;
    }
    else
    {
      m_float = m_uint64->m_int;
    }
    m_flCurrentTime = 0.0;
    v16 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v24 = m_float;
          v26 = v12;
          (m_pfnWarningFunc)(1, 0.0);
          m_float = v24;
          v12 = v26;
        }
      }
      m_flCurrentTime = v16->m_flCurrentTime;
    }
    V_snprintf(bigstring, 1024, "%3.1f  (%s,%d) <-- (%s)\n", m_flCurrentTime, szInputName, m_float, v12);
  }
  else if ( m_type == 2 )
  {
    v18 = 0;
    if ( pCaller != 0 )
    {
      v19 = CEntityIdentity::GetDebugName(pCaller->m_pEntity);
      m_type = m_uint64->m_type;
      v18 = v19;
    }
    if ( m_type == 30 )
    {
      v20 = m_uint64->m_uint64;
    }
    else
    {
      CVariantBase<CVariantDefaultAllocator>::AssignTo(
        m_uint64,
        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
        0x200u);
      v20 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
    }
    v21 = 0.0;
    v22 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v23 = gpGlobals->m_pfnWarningFunc;
        if ( v23 != 0 )
        {
          v27 = v20;
          (v23)(1, 0.0);
          v20 = v27;
        }
      }
      v21 = v22->m_flCurrentTime;
    }
    V_snprintf(bigstring, 1024, "%3.1f  (%s,%s) <-- (%s)\n", v21, szInputName, v20, v18);
  }
  else
  {
    v8 = 0;
    if ( pCaller != 0 )
      v8 = CEntityIdentity::GetDebugName(pCaller->m_pEntity);
    v9 = 0.0;
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v11 = gpGlobals->m_pfnWarningFunc;
        if ( v11 != 0 )
        {
          v25 = v8;
          (v11)(1, 0.0);
          v8 = v25;
        }
      }
      v9 = v10->m_flCurrentTime;
    }
    V_snprintf(bigstring, 1024, "%3.1f  (%s) <-- (%s)\n", v9, szInputName, v8);
  }
  CBaseEntity::AddTimedOverlay(this, bigstring, 10);
}


// CBaseEntity::DrawOutputOverlay  (line 2074, @0x0000000001ed2e70, libserver.so)  // inlines: String, curtime
// calls: V_snprintf, CBaseEntity::AddTimedOverlay, __stack_chk_fail
// callers: CEntityIONotify::OnEntityIOOutput
// strings: "%3.1f  (%s) --> (%s),%.1f) \n", "%3.1f  (%s) --> (%s)\n"
void __fastcall CBaseEntity::DrawOutputOverlay(CBaseEntity *const this, EntityIOConnection_t *ev)
{
  float m_flDelay; // xmm1_4
  const char *m_Id; // r8
  double v5; // xmm1_8
  const char *m_pAsString; // rcx
  double m_flCurrentTime; // xmm0_8
  CGlobalVars *v8; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const char *v10; // r8
  const char *v11; // rcx
  double v12; // xmm0_8
  CGlobalVars *v13; // rbx
  FnGlobalVarsWarningFunc v14; // rax
  const char *v15; // [rsp+8h] [rbp-438h]
  const char *v16; // [rsp+10h] [rbp-430h]
  const char *v17; // [rsp+10h] [rbp-430h]
  double v18; // [rsp+18h] [rbp-428h]
  const char *v19; // [rsp+18h] [rbp-428h]
  char bigstring[1032]; // [rsp+20h] [rbp-420h] BYREF
  unsigned __int64 v21; // [rsp+428h] [rbp-18h]

  v21 = __readfsqword(0x28u);
  m_flDelay = ev->m_flDelay;
  if ( m_flDelay != 0.0 )
  {
    m_Id = "";
    v5 = m_flDelay;
    if ( ev->m_targetDesc.u.m_Id != 0 )
    {
      m_pAsString = "";
      m_Id = ev->m_targetDesc.u.m_Id;
      if ( ev->m_targetInput.u.m_Id == 0 )
        goto LABEL_5;
    }
    else
    {
      m_pAsString = "";
      if ( ev->m_targetInput.u.m_Id == 0 )
      {
LABEL_5:
        m_flCurrentTime = 0.0;
        v8 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
            {
              v15 = m_pAsString;
              v16 = m_Id;
              v18 = v5;
              (m_pfnWarningFunc)(1, 0.0);
              m_pAsString = v15;
              m_Id = v16;
              v5 = v18;
            }
          }
          m_flCurrentTime = v8->m_flCurrentTime;
        }
        V_snprintf(bigstring, 1024, "%3.1f  (%s) --> (%s),%.1f) \n", m_flCurrentTime, m_pAsString, m_Id, v5);
        goto LABEL_12;
      }
    }
    m_pAsString = ev->m_targetInput.u.m_pAsString;
    goto LABEL_5;
  }
  v10 = "";
  if ( ev->m_targetDesc.u.m_Id != 0 )
  {
    v11 = "";
    v10 = ev->m_targetDesc.u.m_Id;
    if ( ev->m_targetInput.u.m_Id == 0 )
      goto LABEL_15;
LABEL_25:
    v11 = ev->m_targetInput.u.m_pAsString;
    goto LABEL_15;
  }
  v11 = "";
  if ( ev->m_targetInput.u.m_Id != 0 )
    goto LABEL_25;
LABEL_15:
  v12 = 0.0;
  v13 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v14 = gpGlobals->m_pfnWarningFunc;
      if ( v14 != 0 )
      {
        v17 = v11;
        v19 = v10;
        (v14)(1, 0.0);
        v11 = v17;
        v10 = v19;
      }
    }
    v12 = v13->m_flCurrentTime;
  }
  V_snprintf(bigstring, 1024, "%3.1f  (%s) --> (%s)\n", v12, v11, v10);
LABEL_12:
  CBaseEntity::AddTimedOverlay(this, bigstring, 10);
}


// CBaseEntity::EntityText  (line 2098, @0x0000000001ed3080, libserver.so)
// calls: IDebugOverlay::EntityText
// callers: CEntityDebugGameSystem::DrawMassReport, CBaseAnimating::DrawDebugTextOverlays, CBaseButton::DrawDebugTextOverlays, CBeam::DrawDebugTextOverlays, CFuncRotating::DrawDebugTextOverlays, CMomentaryRotButton::DrawDebugTextOverlays, CEnvFade::DrawDebugTextOverlays, CEnvShake::DrawDebugTextOverlays, CEnvTilt::DrawDebugTextOverlays, CEnvExplosion::DrawDebugTextOverlays, CFire::DrawDebugTextOverlays, CFire::DrawEntityDebugOverlays (48 total)
void __fastcall CBaseEntity::EntityText(
        CBaseEntity *const this,
        int text_offset,
        const char *text,
        float duration,
        int r,
        int g,
        int b,
        int a)
{
  IDebugOverlay::EntityText(g_pDebugOverlay, this, text_offset, text, duration, r, g, b, a);
}


// CBaseEntity::DrawBBoxOverlay  (line 2109, @0x0000000001ed30c0, libserver.so)  // inlines: Box, VectorAdd, VectorMultiply, VectorSubtract, VertexColor_t, operator*, operator+, operator-
// calls: IDebugOverlay::EntityBounds
// callers: CBaseEntity::DrawEntityDebugOverlays, CEntityDebugGameSystem::DrawDebugSelect
void __fastcall CBaseEntity::DrawBBoxOverlay(CBaseEntity *const this, float a2, float flDuration)
{
  double v4; // r14
  CCollisionProperty *m_pCollision; // rdi
  __int64 v6; // rax
  _BYTE v7[16]; // [rsp+10h] [rbp-88h] BYREF
  Vector vecTriggerMins; // [rsp+20h] [rbp-78h] BYREF
  Vector vecTriggerMaxs; // [rsp+30h] [rbp-68h] BYREF
  Vector center; // [rsp+40h] [rbp-58h] BYREF
  Vector extents; // [rsp+50h] [rbp-48h] BYREF
  float v12[14]; // [rsp+60h] [rbp-38h] BYREF

  v4 = a2;
  IDebugOverlay::EntityBounds(g_pDebugOverlay, this, 255, 200, 0, 255, 0, 0, a2);
  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 && (m_pCollision->m_usSolidFlags.m_Value & 2) != 0 )
  {
    (*(m_pCollision->_vptr_ICollideable + 3))(m_pCollision, &vecTriggerMins, &vecTriggerMaxs);
    center.x = (vecTriggerMins.x + vecTriggerMaxs.x) * 0.5;
    center.y = (vecTriggerMins.y + vecTriggerMaxs.y) * 0.5;
    center.z = (vecTriggerMins.z + vecTriggerMaxs.z) * 0.5;
    extents.x = vecTriggerMaxs.x - center.x;
    extents.y = vecTriggerMaxs.y - center.y;
    extents.z = vecTriggerMaxs.z - center.z;
    v12[0] = -(vecTriggerMaxs.x - center.x);
    v12[2] = -(vecTriggerMaxs.z - center.z);
    v12[1] = -(vecTriggerMaxs.y - center.y);
    v6 = *g_pDebugOverlay;
    v7[0] = 0;
    v7[1] = -1;
    v7[2] = -1;
    v7[3] = -1;
    (*(v6 + 120))(g_pDebugOverlay, &center, v12, &extents, &quat_identity, v7, v4, 1);
  }
}


// CBaseEntity::DrawRBoxOverlay  (line 2126, @0x0000000001ed3210, libserver.so)
void __fastcall CBaseEntity::DrawRBoxOverlay(CBaseEntity *const this)
{
  ;
}


// CBaseEntity::DrawAbsBoxOverlay  (line 2148, @0x0000000001ed3220, libserver.so)  // inlines: Box, VectorAdd, VectorMultiply, VectorSubtract, VertexColor_t, operator*, operator+, operator-
// calls: CBaseEntity::VPhysicsGetObject
// callers: CBaseEntity::DrawEntityDebugOverlays, CNavDrawLadder::DrawLadder
void __fastcall CBaseEntity::DrawAbsBoxOverlay(CBaseEntity *const this)
{
  IPhysicsObject *Object; // rax
  char v3; // r13
  char v4; // r12
  __int64 v5; // rax
  _BYTE v6[16]; // [rsp+10h] [rbp-80h] BYREF
  Vector vecSurroundMins; // [rsp+20h] [rbp-70h] BYREF
  Vector vecSurroundMaxs; // [rsp+30h] [rbp-60h] BYREF
  Vector center; // [rsp+40h] [rbp-50h] BYREF
  Vector extents; // [rsp+50h] [rbp-40h] BYREF
  float v11[12]; // [rsp+60h] [rbp-30h] BYREF

  if ( this->m_pCollision != 0 )
  {
    if ( CBaseEntity::VPhysicsGetObject(this) != 0
      && (Object = CBaseEntity::VPhysicsGetObject(this), (*(*Object + 1464LL))(Object) != 0) )
    {
      v3 = 120;
      v4 = 90;
    }
    else
    {
      v3 = -56;
      v4 = 0;
    }
    (*(this->m_pCollision->_vptr_ICollideable + 10))(this->m_pCollision, &vecSurroundMins, &vecSurroundMaxs);
    center.x = (vecSurroundMins.x + vecSurroundMaxs.x) * 0.5;
    center.y = (vecSurroundMins.y + vecSurroundMaxs.y) * 0.5;
    center.z = (vecSurroundMins.z + vecSurroundMaxs.z) * 0.5;
    extents.x = vecSurroundMaxs.x - center.x;
    extents.y = vecSurroundMaxs.y - center.y;
    extents.z = vecSurroundMaxs.z - center.z;
    v11[0] = -(vecSurroundMaxs.x - center.x);
    v11[2] = -(vecSurroundMaxs.z - center.z);
    v11[1] = -(vecSurroundMaxs.y - center.y);
    v5 = *g_pDebugOverlay;
    v6[0] = v4;
    v6[1] = v3;
    v6[2] = 0;
    v6[3] = -1;
    (*(v5 + 120))(g_pDebugOverlay, &center, v11, &extents, &quat_identity, v6, 0.0, 1);
  }
}


// CBaseEntity::DrawAxisOverlay  (line 2174, @0x0000000001ed3380, libserver.so)  // inlines: GetInt
// calls: IDebugOverlay::EntityAxis
// callers: CBaseEntity::DrawEntityDebugOverlays, CEntityDebugGameSystem::DrawDebugSelect
void __fastcall CBaseEntity::DrawAxisOverlay(CBaseEntity *const this)
{
  IDebugOverlay::EntityAxis(g_pDebugOverlay, this, ent_pivot_size.m_pParent->m_Value.m_nValue, 1, 0.0);
}


// CBaseEntity::DrawDebugTextOverlays  (line 2192, @0x0000000001ee18f0, libserver.so)  // inlines: AssignTo, CVariantBase, CalcAbsolutePosition, EntityText, GetAbsAngles, GetAbsOrigin, GetBool, GetCell, GetClassNameAsCStr, GetClassname, GetDebugName, GetEffects, GetInt, GetLocalAngles, GetLocalOrigin, GetMoveParent, Load, String, TempString, ToCStr, ToString, V_strlen, count<char const*, char>, entindex, operator const Vector&, operator int, operator=, ~CVariantBase
// calls: CEntityIdentity::GetDebugName, CEntityInstance::GetEntityIndex, V_snprintf, IDebugOverlay::EntityText, CGameSceneNode::CalcAbsolutePositionWhenDirty, CGameSceneNode::GetOwnerEntity, CBaseEntity::GetContextCount, CBaseEntity::GetContextValue, CBaseEntity::GetContextName, CEntityInstance::CallScriptFunction, CVariantBase<CVariantDefaultAllocator>::Free, CBaseEntity::GetModelName (19 total)
// callers: CFogController::DrawDebugTextOverlays, CBaseAnimating::DrawDebugTextOverlays, CBaseButton::DrawDebugTextOverlays, CBeam::DrawDebugTextOverlays, CFuncRotating::DrawDebugTextOverlays, CEnvFade::DrawDebugTextOverlays, CEnvShake::DrawDebugTextOverlays, CEnvTilt::DrawDebugTextOverlays, CEnvExplosion::DrawDebugTextOverlays, CFire::DrawDebugTextOverlays, CBreakable::DrawDebugTextOverlays, CFuncMoveLinear::DrawDebugTextOverlays (32 total)
// strings: "(%d) Name: %s (%s)", "pos: (%f, %f, %f)\n", "ang: (%f, %f, %f)\n", "cell: (%d, %d, %d)\n", "celloffset: (%f, %f, %f)\n", "moveparent: (%d) Name: %s (%s)\n" (24 total)
// globals: jpt_1EE277B, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
int __fastcall CBaseEntity::DrawDebugTextOverlays(
        CBaseEntity *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  int v3; // r15d
  char v5; // bl
  CEntityIdentity *m_pEntity; // rdi
  const char *m_pAsString; // r13
  const char *v8; // r14
  CEntityIndex v9; // eax
  int v10; // edx
  CGameSceneNode *m_pGameSceneNode; // r13
  CGameSceneNode *v12; // rax
  CGameSceneNode *v13; // r14
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  const CEntityIdentity *v16; // rdi
  const char *v17; // r9
  CEntityIndex v18; // eax
  int v19; // edx
  __int64 v20; // r14
  const char *ContextName; // rax
  int v22; // edx
  CGameSceneNode *v24; // r13
  int v25; // edx
  const char *DebugName; // rax
  int v27; // edx
  const char *v28; // rcx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  const char *m_uint64; // r14
  int v34; // r14d
  unsigned int j; // eax
  int v36; // eax
  char v37; // cl
  const char *v38; // rbx
  const Vector *v39; // rax
  const char *v40; // rcx
  __int64 v41; // rcx
  int v42; // eax
  const char *k; // rcx
  int v44; // edx
  const char *v45; // rax
  double m_float; // xmm0_8
  const char *v47; // rcx
  __int64 v48; // rbx
  signed int i; // r13d
  int v50; // eax
  float y; // [rsp+10h] [rbp-2F0h]
  float x; // [rsp+14h] [rbp-2ECh]
  float z; // [rsp+18h] [rbp-2E8h]
  int alpha; // [rsp+1Ch] [rbp-2E4h]
  uint64 v55; // [rsp+30h] [rbp-2D0h]
  bool bNoHeader; // [rsp+3Bh] [rbp-2C5h]
  int lines; // [rsp+3Ch] [rbp-2C4h]
  const char *v58; // [rsp+50h] [rbp-2B0h]
  uint64 v59; // [rsp+50h] [rbp-2B0h]
  const CEntityInstance *counta; // [rsp+58h] [rbp-2A8h]
  int count; // [rsp+58h] [rbp-2A8h]
  CVariantBase<CVariantDefaultAllocator> *v62; // [rsp+60h] [rbp-2A0h]
  CVariantBase<CVariantDefaultAllocator> *ContextValue; // [rsp+60h] [rbp-2A0h]
  CGameSceneNode *v64; // [rsp+60h] [rbp-2A0h]
  int v65; // [rsp+68h] [rbp-298h]
  __int16 nIter; // [rsp+6Ch] [rbp-294h]
  unsigned int nItera; // [rsp+6Ch] [rbp-294h]
  ScriptVariant_t rval; // [rsp+70h] [rbp-290h] BYREF
  ScriptVariant_t vKey; // [rsp+80h] [rbp-280h] BYREF
  ScriptVariant_t vValue; // [rsp+90h] [rbp-270h] BYREF
  ScriptVariant_t rval2; // [rsp+A0h] [rbp-260h] BYREF
  ScriptVariant_t rval3; // [rsp+B0h] [rbp-250h] BYREF
  char tempstr[520]; // [rsp+C0h] [rbp-240h] BYREF
  unsigned __int64 v74; // [rsp+2C8h] [rbp-38h]

  v3 = 0;
  v5 = nDebugOverlayBits;
  nIter = iDebugFilterFlags;
  v74 = __readfsqword(0x28u);
  if ( (nDebugOverlayBits & 0x12) != 0 )
  {
    LOBYTE(v3) = 1;
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    IDebugOverlay::EntityText(g_pDebugOverlay, this, 0, DebugName, 0.0, 255, 255, 255, 255);
  }
  if ( (v5 & 1) != 0 )
  {
    if ( (nIter & 1) != 0 || ent_text_no_name_really_i_mean_it.m_pParent->m_Value.m_nValue == 0 )
    {
      m_pEntity = this->m_pEntity;
      m_pAsString = "";
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      v8 = CEntityIdentity::GetDebugName(m_pEntity);
      v9.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      V_snprintf(tempstr, 512, "(%d) Name: %s (%s)", v9.m_Data, v8, m_pAsString);
      v10 = v3++;
      IDebugOverlay::EntityText(g_pDebugOverlay, this, v10, tempstr, 0.0, 0, 255, 0, 255);
    }
    if ( (nIter & 2) != 0 && this->m_iGlobalname.u.m_Id != 0 )
    {
      V_snprintf(tempstr, 512, "GLOBALNAME: %s", this->m_iGlobalname.u.m_pAsString);
      v30 = v3++;
      IDebugOverlay::EntityText(g_pDebugOverlay, this, v30, tempstr, 0.0, 255, 255, 255, 255);
    }
    if ( (nIter & 8) != 0 && debug_overlay_fullposition.m_pParent->m_Value.m_nValue != 0 )
    {
      m_pGameSceneNode = this->m_pGameSceneNode;
      if ( m_pGameSceneNode->m_bDirtyAbsTransform.m_value )
        CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pGameSceneNode);
      V_snprintf(
        tempstr,
        512,
        "pos: (%f, %f, %f)\n",
        m_pGameSceneNode->m_vecAbsOrigin.x,
        m_pGameSceneNode->m_vecAbsOrigin.y,
        m_pGameSceneNode->m_vecAbsOrigin.z);
      IDebugOverlay::EntityText(g_pDebugOverlay, this, v3, tempstr, 0.0, 255, 255, 255, 255);
      v12 = this->m_pGameSceneNode;
      if ( v12->m_bDirtyAbsTransform.m_value )
      {
        v64 = this->m_pGameSceneNode;
        CGameSceneNode::CalcAbsolutePositionWhenDirty(v64);
        v12 = v64;
      }
      V_snprintf(
        tempstr,
        512,
        "ang: (%f, %f, %f)\n",
        v12->m_angAbsRotation.x,
        v12->m_angAbsRotation.y,
        v12->m_angAbsRotation.z);
      IDebugOverlay::EntityText(g_pDebugOverlay, this, v3 + 1, tempstr, 0.0, 255, 255, 255, 255);
      v13 = this->m_pGameSceneNode;
      V_snprintf(
        tempstr,
        512,
        "cell: (%d, %d, %d)\n",
        v13->m_vecOrigin.m_cellX,
        v13->m_vecOrigin.m_cellY,
        v13->m_vecOrigin.m_cellZ);
      IDebugOverlay::EntityText(g_pDebugOverlay, this, v3 + 2, tempstr, 0.0, 255, 255, 255, 255);
      V_snprintf(
        tempstr,
        512,
        "celloffset: (%f, %f, %f)\n",
        v13->m_vecOrigin.m_vecX.m_Value,
        v13->m_vecOrigin.m_vecY.m_Value,
        v13->m_vecOrigin.m_vecZ.m_Value);
      IDebugOverlay::EntityText(g_pDebugOverlay, this, v3 + 3, tempstr, 0.0, 255, 255, 255, 255);
      m_pParent = this->m_pGameSceneNode->m_pParent;
      if ( m_pParent != 0 && (OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent)) != 0 )
      {
        v16 = OwnerEntity->m_pEntity;
        v17 = "";
        if ( v16->m_designerName.u.m_Id != 0 )
          v17 = v16->m_designerName.u.m_pAsString;
        v58 = v17;
        counta = OwnerEntity;
        v62 = CEntityIdentity::GetDebugName(v16);
        v18.m_Data = CEntityInstance::GetEntityIndex(counta).m_Data;
        V_snprintf(tempstr, 512, "moveparent: (%d) Name: %s (%s)\n", v18.m_Data, v62, v58);
        IDebugOverlay::EntityText(g_pDebugOverlay, this, v3 + 4, tempstr, 0.0, 255, 255, 255, 255);
        V_snprintf(
          tempstr,
          512,
          "local pos : (%f, %f, %f)\n",
          this->m_pGameSceneNode->m_vecOrigin.m_Value.x,
          this->m_pGameSceneNode->m_vecOrigin.m_Value.y,
          this->m_pGameSceneNode->m_vecOrigin.m_Value.z);
        IDebugOverlay::EntityText(g_pDebugOverlay, this, v3 + 5, tempstr, 0.0, 255, 255, 255, 255);
        V_snprintf(
          tempstr,
          512,
          "local ang : (%f, %f, %f)\n",
          this->m_pGameSceneNode->m_angRotation.m_Value.x,
          this->m_pGameSceneNode->m_angRotation.m_Value.y,
          this->m_pGameSceneNode->m_angRotation.m_Value.z);
        v19 = v3 + 6;
        v3 += 7;
        IDebugOverlay::EntityText(g_pDebugOverlay, this, v19, tempstr, 0.0, 255, 255, 255, 255);
      }
      else
      {
        v3 += 4;
      }
    }
    else if ( (nIter & 4) != 0 )
    {
      v24 = this->m_pGameSceneNode;
      if ( v24->m_bDirtyAbsTransform.m_value )
        CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pGameSceneNode);
      V_snprintf(
        tempstr,
        512,
        "Position: %0.3f, %0.3f, %0.3f\n",
        v24->m_vecAbsOrigin.x,
        v24->m_vecAbsOrigin.y,
        v24->m_vecAbsOrigin.z);
      v25 = v3++;
      IDebugOverlay::EntityText(g_pDebugOverlay, this, v25, tempstr, 0.0, 255, 255, 255, 255);
    }
    if ( (nIter & 0x10) != 0 && (this->m_iEFlags & 0x2000000) != 0 )
    {
      v27 = v3++;
      IDebugOverlay::EntityText(g_pDebugOverlay, this, v27, "Doesn't block LOS", 0.0, 255, 255, 255, 255);
      if ( (nIter & 0x20) == 0 )
      {
LABEL_25:
        if ( (nIter & 0x40) != 0 && ent_show_contexts.m_pParent->m_Value.m_nValue != 0 )
        {
          count = CBaseEntity::GetContextCount(this);
          if ( count > 0 )
          {
            v20 = 0;
            do
            {
              ContextValue = CBaseEntity::GetContextValue(this, v20);
              ContextName = CBaseEntity::GetContextName(this, v20);
              V_snprintf(tempstr, 512, "Context: %s:%s", ContextName, ContextValue);
              v22 = v3 + v20++;
              IDebugOverlay::EntityText(g_pDebugOverlay, this, v22, tempstr, 0.0, 0, 255, 0, 255);
            }
            while ( count > v20 );
            v3 += count;
          }
        }
        if ( (nIter & 0x80u) != 0 )
        {
          V_snprintf(tempstr, 512, "Flags :%d", this->m_fFlags.m_Value);
          v32 = v3++;
          IDebugOverlay::EntityText(g_pDebugOverlay, this, v32, tempstr, 0.0, 255, 255, 255, 255);
        }
        if ( (nIter & 0x100) != 0 )
        {
          V_snprintf(
            tempstr,
            512,
            "Effects :%d (EF_NODRAW=%d)",
            this->m_fEffects.m_Value,
            this->m_fEffects.m_Value & 0x20);
          v31 = v3++;
          IDebugOverlay::EntityText(g_pDebugOverlay, this, v31, tempstr, 0.0, 255, 255, 255, 255);
        }
        if ( (nIter & 0x200) != 0 )
        {
          rval.m_type = 0;
          rval.m_flags = 0;
          rval.m_uint64 = 0;
          if ( CEntityInstance::CallScriptFunction(
                 this,
                 CallScriptFunctionBehavior_t::CALL_SCRIPT_FUNCTION_PRIVATE_ONLY,
                 "OnEntText",
                 &rval,
                 0) )
          {
            if ( rval.m_type == 30 )
            {
              m_uint64 = rval.m_uint64;
              V_snprintf(tempstr, 512, "Script: %s", rval.m_pszString);
              IDebugOverlay::EntityText(g_pDebugOverlay, this, v3, tempstr, 0.0, 75, 185, 255, 255);
              if ( m_uint64 != 0 )
              {
                v48 = 0;
                for ( i = 0; i < (strlen(m_uint64) - 1); i = v48 )
                {
                  v50 = m_uint64[v48++] == 10;
                  v3 += v50;
                }
              }
              ++v3;
            }
            else if ( rval.m_type == 31 )
            {
              vKey.m_type = 0;
              vKey.m_flags = 0;
              vValue.m_flags = 0;
              vValue.m_type = 0;
              vKey.m_uint64 = 0;
              vValue.m_uint64 = 0;
              v59 = rval.m_uint64;
              v65 = (*(*g_pScriptVM + 376LL))(g_pScriptVM, rval.m_uint64);
              if ( v65 <= 0 )
              {
                lines = 0;
              }
              else
              {
                v34 = 0;
                z = 255.0;
                x = 75.0;
                y = 185.0;
                lines = 0;
                alpha = 255;
                bNoHeader = 0;
                for ( j = (*(*g_pScriptVM + 296LL))(g_pScriptVM, v59, 0, &vKey, &vValue);
                      ;
                      j = (*(*g_pScriptVM + 296LL))(g_pScriptVM, v59, nItera, &vKey, &vValue) )
                {
                  nItera = j;
                  if ( vValue.m_type == 30 )
                  {
                    v36 = V_stricmp_fast(vValue.m_uint64, "noheader");
                    v37 = bNoHeader;
                    if ( v36 == 0 )
                      v37 = 1;
                    bNoHeader = v37;
                  }
                  else if ( vValue.m_type == 31 )
                  {
                    rval2.m_uint64 = 0;
                    rval3.m_uint64 = 0;
                    v55 = vValue.m_uint64;
                    rval2.m_type = 0;
                    rval2.m_flags = 0;
                    rval3.m_type = 0;
                    rval3.m_flags = 0;
                    if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, vValue.m_uint64, "str", &rval2) != 0 )
                    {
                      if ( rval2.m_type == 30 )
                      {
                        v38 = rval2.m_uint64;
                      }
                      else
                      {
                        switch ( rval2.m_type )
                        {
                          case 0:
                            goto LABEL_90;
                          case 1:
                            m_float = rval2.m_float;
                            goto LABEL_92;
                          case 3:
                          case 0x27:
                            V_snprintf(
                              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                              512,
                              "%g %g %g",
                              *rval2.m_pszString,
                              *(rval2.m_uint64 + 4),
                              *(rval2.m_uint64 + 8));
                            break;
                          case 4:
                          case 0x1B:
                            V_snprintf(
                              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                              512,
                              "%g %g %g %g",
                              *rval2.m_pszString,
                              *(rval2.m_uint64 + 4),
                              *(rval2.m_uint64 + 8),
                              *(rval2.m_uint64 + 12));
                            break;
                          case 5:
                            V_snprintf(
                              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                              512,
                              "%d",
                              rval2.m_int);
                            break;
                          case 6:
                            v47 = "true";
                            if ( rval2.m_char == 0 )
                              v47 = "false";
                            V_snprintf(
                              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                              512,
                              "%s",
                              v47);
                            break;
                          case 8:
                            V_snprintf(
                              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                              512,
                              "%c",
                              rval2.m_char);
                            break;
                          case 9:
                            CVariantBase<CVariantDefaultAllocator>::AssignTo(
                              &rval2,
                              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                              0x200u);
                            break;
                          case 0x19:
                            V_snprintf(
                              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                              512,
                              "%g %g",
                              *rval2.m_pszString,
                              *(rval2.m_uint64 + 4));
                            break;
                          case 0x1A:
                            V_snprintf(
                              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                              512,
                              "%lld",
                              rval2.m_uint64);
                            break;
                          case 0x21:
                            V_snprintf(
                              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                              512,
                              "%llu",
                              rval2.m_uint64);
                            break;
                          case 0x22:
                            m_float = rval2.m_float64;
LABEL_92:
                            V_snprintf(
                              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                              512,
                              "%g",
                              m_float);
                            break;
                          case 0x25:
                            V_snprintf(
                              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                              512,
                              "%u",
                              rval2.m_int);
                            break;
                          default:
                            v45 = VariantFieldTypeName(rval2.m_type);
                            Warning("No conversion from %s to string at the moment!\n", v45);
LABEL_90:
                            CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
                            break;
                        }
                        v38 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
                      }
                    }
                    else
                    {
                      v38 = 0;
                    }
                    if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, v55, "alpha") != 0 )
                    {
                      if ( rval3.m_type == 1 )
                      {
                        alpha = rval3.m_float;
                      }
                      else
                      {
                        alpha = rval3.m_int;
                        if ( rval3.m_type == 34 )
                          alpha = rval3.m_float64;
                      }
                    }
                    if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, v55, "color", &rval3) != 0 )
                    {
                      v39 = rval3.m_uint64;
                      if ( rval3.m_uint64 == 0 )
                        v39 = &vec3_origin;
                      x = v39->x;
                      y = v39->y;
                      z = v39->z;
                    }
                    if ( v38 != 0 )
                    {
                      if ( lines != 0 || (v40 = "Script: ", bNoHeader) )
                        v40 = "";
                      V_snprintf(tempstr, 512, "%s%s", v40, v38);
                      IDebugOverlay::EntityText(g_pDebugOverlay, this, v3 + lines, tempstr, 0.0, x, y, z, alpha);
                      v41 = strlen(v38);
                      v42 = 0;
                      for ( k = &v38[v41]; v38 != k; v42 += v44 )
                        v44 = *v38++ == 10;
                      lines += v42;
                    }
                    CVariantBase<CVariantDefaultAllocator>::Free(&rval3);
                    CVariantBase<CVariantDefaultAllocator>::Free(&rval2);
                  }
                  if ( ++v34 == v65 )
                    break;
                }
              }
              v3 += lines;
              CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
              CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
            }
          }
          CVariantBase<CVariantDefaultAllocator>::Free(&rval);
        }
        return v3;
      }
    }
    else if ( (nIter & 0x20) == 0 )
    {
      goto LABEL_25;
    }
    CBaseEntity::GetModelName(&rval3, this);
    if ( rval3.m_uint64 != 0 || (*(this->_vptr_IHandleEntity + 43))(this) != 0 )
    {
      CBaseEntity::GetModelName(&rval3, this);
      v28 = "";
      if ( rval3.m_uint64 != 0 )
        v28 = rval3.m_uint64;
      V_snprintf(tempstr, 512, "Model:%s", v28);
      v29 = v3++;
      IDebugOverlay::EntityText(g_pDebugOverlay, this, v29, tempstr, 0.0, 255, 255, 255, 255);
    }
    goto LABEL_25;
  }
  return v3;
}


// CBaseEntity::DrawAutoAimOverlay  (line 2392, @0x0000000001ed33b0, libserver.so)  // inlines: AI_GetSinglePlayer, GetFloat, VectorAdd, VectorMultiply, VectorSubtract, curtime, operator*, operator+, operator-, operator=
// calls: UTIL_GetLocalPlayer, AngleVectors, NDebugOverlay::Line, VectorNormalize, CBaseCombatCharacter::GetActiveWeapon
// callers: CBaseEntity::DrawEntityDebugOverlays
void __fastcall CBaseEntity::DrawAutoAimOverlay(CBaseEntity *const this)
{
  CBasePlayer *LocalPlayer; // r12
  vec_t v3; // xmm1_4
  CGlobalVars *v4; // r13
  float v5; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int v7; // r13d
  char v8; // al
  float v9; // xmm1_4
  int v10; // ebx
  char v11; // al
  float v12; // xmm1_4
  CBaseCombatWeapon *ActiveWeapon; // rax
  CBaseCombatWeapon *v14; // rax
  float radius; // [rsp+Ch] [rbp-A4h]
  float radiusc; // [rsp+Ch] [rbp-A4h]
  float radiusa; // [rsp+Ch] [rbp-A4h]
  float radiusd; // [rsp+Ch] [rbp-A4h]
  float radiusb; // [rsp+Ch] [rbp-A4h]
  Vector vecCenter; // [rsp+10h] [rbp-A0h] BYREF
  Vector vecRight; // [rsp+20h] [rbp-90h] BYREF
  Vector vecUp; // [rsp+30h] [rbp-80h] BYREF
  Vector vecDiag; // [rsp+40h] [rbp-70h] BYREF
  QAngle angles; // [rsp+50h] [rbp-60h] BYREF
  Vector origin; // [rsp+60h] [rbp-50h] BYREF
  Vector target; // [rsp+70h] [rbp-40h] BYREF

  if ( (this->m_fFlags.m_Value & 0x10000) != 0 && gpGlobals->maxClients <= 1 && UTIL_GetLocalPlayer() != 0 )
  {
    LocalPlayer = 0;
    *&vecCenter.x = (*(this->_vptr_IHandleEntity + 87))(this);
    vecCenter.z = v3;
    if ( gpGlobals->maxClients <= 1 )
      LocalPlayer = UTIL_GetLocalPlayer();
    radius = (*(this->_vptr_IHandleEntity + 86))(this);
    angles = *(*(LocalPlayer->_vptr_IHandleEntity + 165))(LocalPlayer);
    AngleVectors(&angles, 0, &vecRight, &vecUp);
    v4 = gpGlobals;
    v5 = radius;
    if ( gpGlobals == 0 )
      goto LABEL_13;
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v5 = radius;
      }
    }
    if ( v4->m_flCurrentTime % 2 == 1 )
    {
      radiusb = v5;
      ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(LocalPlayer);
      v9 = radiusb;
      v7 = 255;
      v10 = 255;
      if ( ActiveWeapon != 0 )
      {
        v14 = CBaseCombatCharacter::GetActiveWeapon(LocalPlayer);
        v9 = radiusb * (*(v14->_vptr_IHandleEntity + 322))(v14);
      }
    }
    else
    {
LABEL_13:
      radiusc = v5;
      v7 = 0;
      v8 = (*(this->_vptr_IHandleEntity + 85))(this, LocalPlayer);
      v9 = radiusc;
      v10 = -(v8 == 0);
    }
    radiusa = v9;
    v11 = (*(LocalPlayer->_vptr_IHandleEntity + 346))(LocalPlayer);
    v12 = radiusa;
    if ( v11 != 0 )
      v12 = radiusa * sv_vehicle_autoaim_scale.m_pParent->m_Value.m_fValue;
    radiusd = v12;
    target.z = (vecRight.z * v12) + vecCenter.z;
    target.y = (vecRight.y * v12) + vecCenter.y;
    target.x = (v12 * vecRight.x) + vecCenter.x;
    NDebugOverlay::Line(&vecCenter, &target, 255, v10, v7, 1, 0.1);
    target.y = vecCenter.y - (vecRight.y * radiusd);
    target.z = vecCenter.z - (vecRight.z * radiusd);
    target.x = vecCenter.x - (vecRight.x * radiusd);
    NDebugOverlay::Line(&vecCenter, &target, 255, v10, v7, 1, 0.1);
    target.z = (vecUp.z * radiusd) + vecCenter.z;
    target.y = (vecUp.y * radiusd) + vecCenter.y;
    target.x = (vecUp.x * radiusd) + vecCenter.x;
    NDebugOverlay::Line(&vecCenter, &target, 255, v10, v7, 1, 0.1);
    target.y = vecCenter.y - (vecUp.y * radiusd);
    target.z = vecCenter.z - (vecUp.z * radiusd);
    target.x = vecCenter.x - (vecUp.x * radiusd);
    NDebugOverlay::Line(&vecCenter, &target, 255, v10, v7, 1, 0.1);
    vecDiag.y = vecRight.y + vecUp.y;
    vecDiag.x = vecRight.x + vecUp.x;
    vecDiag.z = vecRight.z + vecUp.z;
    VectorNormalize(&vecDiag);
    target.x = (vecDiag.x * radiusd) + vecCenter.x;
    origin.x = vecCenter.x - (vecDiag.x * radiusd);
    target.y = (vecDiag.y * radiusd) + vecCenter.y;
    origin.y = vecCenter.y - (vecDiag.y * radiusd);
    target.z = (vecDiag.z * radiusd) + vecCenter.z;
    origin.z = vecCenter.z - (vecDiag.z * radiusd);
    NDebugOverlay::Line(&origin, &target, 255, v10, v7, 1, 0.1);
    vecDiag.y = vecRight.y - vecUp.y;
    vecDiag.x = vecRight.x - vecUp.x;
    vecDiag.z = vecRight.z - vecUp.z;
    VectorNormalize(&vecDiag);
    target.x = (vecDiag.x * radiusd) + vecCenter.x;
    origin.x = vecCenter.x - (vecDiag.x * radiusd);
    target.y = (vecDiag.y * radiusd) + vecCenter.y;
    origin.y = vecCenter.y - (vecDiag.y * radiusd);
    target.z = (radiusd * vecDiag.z) + vecCenter.z;
    origin.z = vecCenter.z - (radiusd * vecDiag.z);
    NDebugOverlay::Line(&origin, &target, 255, v10, v7, 1, 0.1);
  }
}


// CBaseEntity::DrawEntityDebugOverlays  (line 2468, @0x0000000001ed3940, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetInt, GetSerialNumber, Init
// calls: IDebugOverlay::EntityViewOffset, CBaseEntity::DrawAxisOverlay, NDebugOverlay::Cross3D, CBaseEntity::DrawBBoxOverlay, CBaseEntity::DrawAbsBoxOverlay, IDebugOverlay::EntityBuddhaMode, IDebugOverlay::EntityVCollide, IDebugOverlay::EntityVCollideWireframe, IDebugOverlay::EntityHitboxes, IDebugOverlay::EntitySkeleton, IDebugOverlay::EntityJointInfo, IDebugOverlay::EntityAttachments (14 total)
// callers: CBaseProp::DrawEntityDebugOverlays, CFire::DrawEntityDebugOverlays, CInfoLadderDismount::DrawEntityDebugOverlays, CFuncLadder::DrawEntityDebugOverlays, CPhysConstraint::DrawEntityDebugOverlays, CPathTrack::DrawEntityDebugOverlays, CPhysicsSpring::DrawEntityDebugOverlays, CBasePlayer::DrawEntityDebugOverlays, CPathCorner::DrawEntityDebugOverlays, CRagdollProp::DrawEntityDebugOverlays, CEnvSoundscape::DrawEntityDebugOverlays, CFuncTrackTrain::DrawEntityDebugOverlays (13 total)
void __fastcall CBaseEntity::DrawEntityDebugOverlays(CBaseEntity *const this, uint64 nDebugOverlays)
{
  float64 v4; // xmm1_8
  float64 v5; // xmm2_8
  CEntityIdentity *v6; // rax
  int v7; // edx
  __int16 v8; // cx
  int v9; // eax
  vec_t v10; // xmm1_4
  CEntityIdentity *v11; // rax
  int v12; // edx
  __int16 v13; // cx
  int v14; // eax
  CEntityIdentity *v15; // rax
  int v16; // edx
  __int16 v17; // cx
  int v18; // eax
  CEntityIdentity *m_pEntity; // rax
  int v20; // edx
  __int16 v21; // cx
  int v22; // eax
  Vector hEntity[4]; // [rsp+0h] [rbp-30h] BYREF

  (*(this->_vptr_IHandleEntity + 79))(this, nDebugOverlays, ent_text_flags_active.m_pParent->m_Value.m_nValue);
  if ( (nDebugOverlays & 0x800000000LL) == 0 )
  {
    if ( (nDebugOverlays & 4) == 0 )
      goto LABEL_3;
LABEL_29:
    CBaseEntity::DrawBBoxOverlay(this, 0.0, *&v4);
    if ( (nDebugOverlays & 0x20) == 0 )
      goto LABEL_4;
    goto LABEL_30;
  }
  *&hEntity[0].x = (*(this->_vptr_IHandleEntity + 164))(this);
  hEntity[0].z = v10;
  NDebugOverlay::Cross3D(hEntity, 16.0, 255, 0, 0, 1, 0.050000001);
  if ( (nDebugOverlays & 4) != 0 )
    goto LABEL_29;
LABEL_3:
  if ( (nDebugOverlays & 0x20) != 0 )
LABEL_30:
    CBaseEntity::DrawAbsBoxOverlay(this);
LABEL_4:
  if ( (nDebugOverlays & 0x408) != 0 )
    CBaseEntity::DrawAxisOverlay(this);
  if ( (nDebugOverlays & 0x80u) != 0LL && (this->m_iEFlags & 0x2000000) == 0 )
    NDebugOverlay::EntityBounds(this, 255, 255, 255, 0, 0.0);
  if ( (nDebugOverlays & 0x10000) != 0 )
    CBaseEntity::DrawAutoAimOverlay(this);
  if ( (nDebugOverlays & 0x300) != 0 )
    IDebugOverlay::EntityAttachments(g_pDebugOverlay, this, 0.0, v5);
  if ( (nDebugOverlays & 0x40000) != 0 )
    IDebugOverlay::EntityJointInfo(g_pDebugOverlay, this, v4);
  if ( (nDebugOverlays & 0x1800) != 0 )
    IDebugOverlay::EntitySkeleton(g_pDebugOverlay, this, v4);
  if ( (nDebugOverlays & 0xC000) != 0 )
    IDebugOverlay::EntityHitboxes(g_pDebugOverlay, this, 0.0, 0);
  if ( (nDebugOverlays & 0x1000000000LL) != 0 )
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v21 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(hEntity[0].x) = v21 | LOWORD(hEntity[0].x) & 0x8000;
      v22 = (v20 << 15) | LOWORD(hEntity[0].x) & 0x7FFF;
    }
    else
    {
      v22 = -1;
    }
    LODWORD(hEntity[0].x) = v22;
    IDebugOverlay::EntityVCollideWireframe(g_pDebugOverlay, hEntity, 0.0);
  }
  if ( (nDebugOverlays & 0x2000) != 0 )
  {
    v15 = this->m_pEntity;
    if ( v15 != 0 )
    {
      v16 = (v15->m_EHandle.m_Index >> 15) - (v15->m_flags & 1);
      v17 = 0x7FFF;
      if ( v15->m_EHandle.m_Index != -1 )
        v17 = v15->m_EHandle.m_Index & 0x7FFF;
      LOWORD(hEntity[0].x) = v17 | LOWORD(hEntity[0].x) & 0x8000;
      v18 = (v16 << 15) | LOWORD(hEntity[0].x) & 0x7FFF;
    }
    else
    {
      v18 = -1;
    }
    LODWORD(hEntity[0].x) = v18;
    IDebugOverlay::EntityVCollide(g_pDebugOverlay, hEntity, 0.0);
  }
  if ( (nDebugOverlays & 0x40000000) != 0 )
  {
    v11 = this->m_pEntity;
    if ( v11 != 0 )
    {
      v12 = (v11->m_EHandle.m_Index >> 15) - (v11->m_flags & 1);
      v13 = 0x7FFF;
      if ( v11->m_EHandle.m_Index != -1 )
        v13 = v11->m_EHandle.m_Index & 0x7FFF;
      LOWORD(hEntity[0].x) = v13 | LOWORD(hEntity[0].x) & 0x8000;
      v14 = (v12 << 15) | LOWORD(hEntity[0].x) & 0x7FFF;
    }
    else
    {
      v14 = -1;
    }
    LODWORD(hEntity[0].x) = v14;
    IDebugOverlay::EntityBuddhaMode(g_pDebugOverlay, hEntity, 0.0);
  }
  if ( (nDebugOverlays & 0x800000000LL) != 0 )
  {
    v6 = this->m_pEntity;
    if ( v6 != 0 )
    {
      v7 = (v6->m_EHandle.m_Index >> 15) - (v6->m_flags & 1);
      v8 = 0x7FFF;
      if ( v6->m_EHandle.m_Index != -1 )
        v8 = v6->m_EHandle.m_Index & 0x7FFF;
      LOWORD(hEntity[0].x) = v8 | LOWORD(hEntity[0].x) & 0x8000;
      v9 = (v7 << 15) | LOWORD(hEntity[0].x) & 0x7FFF;
    }
    else
    {
      v9 = -1;
    }
    LODWORD(hEntity[0].x) = v9;
    IDebugOverlay::EntityViewOffset(g_pDebugOverlay, hEntity, 0.0);
  }
}


// ent_text_filter  (line 2574, @0x0000000001edfe10, libserver.so)  // inlines: Arg, CLoggingMetaCommandLink, GetInt, LoggingMetaData_t, V_memcpy, V_strlen, memcpy, operator[], ~CLoggingMetaCommandLink
// calls: V_stricmp_fast, ConVar::SetValue, LoggingSystem_IsChannelEnabled, operator new [], LoggingSystem_Log(int,LoggingSeverity_t,LoggingMetaData_t const*,Color,char const*,...), operator delete [], CFmtStrN<256, false>::CFmtStrN, strlen, memcpy, LoggingSystem_Log, _Unwind_Resume, __stack_chk_fail
// strings: "ent_text_filter %s", "%9s", "          ", "Available: ", "Format: ent_filter <list of flags to toggle, or all/none, parsed in order>\n"
// globals: ent_text_flags_active
void __fastcall ent_text_filter(const CCommandContext *const ctx, const CCommand *const args)
{
  int v3; // ebx
  char *v4; // r14
  const char *v5; // rdi
  const char *v6; // rdi
  const char *v7; // r12
  char *cmd; // r14
  int m_nValue; // esi
  int v10; // eax
  uint8 *m_pData; // rdx
  int v12; // edi
  int v13; // ebx
  char *v14; // r13
  int v15; // r14d
  uint8 *v16; // rax
  uint8 *v17; // rax
  uint8 *v18; // rdx
  int v19; // edi
  char bDoHelp; // [rsp+10h] [rbp-190h]
  int n; // [rsp+18h] [rbp-188h]
  LoggingMetaData_t v22; // [rsp+20h] [rbp-180h] BYREF
  CFmtStrN<256,false> v23; // [rsp+50h] [rbp-150h] BYREF
  unsigned __int64 v24; // [rsp+168h] [rbp-38h]

  v3 = 1;
  bDoHelp = 0;
  v24 = __readfsqword(0x28u);
  if ( args->m_nArgc <= 1 )
    goto LABEL_33;
  do
  {
    v4 = args + 8 * v3;
    if ( V_stricmp_fast(*(v4 + 129), "help") != 0 )
    {
      v5 = "";
      if ( v3 < args->m_nArgc )
        v5 = *(v4 + 129);
      if ( V_stricmp_fast(v5, "all") != 0 )
      {
        v6 = "";
        if ( v3 < args->m_nArgc )
          v6 = *(v4 + 129);
        if ( V_stricmp_fast(v6, "none") != 0 )
        {
          v7 = "";
          if ( v3 < args->m_nArgc )
            v7 = *(v4 + 129);
          if ( *v7 == 43 )
          {
            n = 1;
            ++v7;
          }
          else if ( *v7 == 45 )
          {
            n = 2;
            ++v7;
          }
          else
          {
            n = 0;
          }
          cmd = _sFilters[0].cmd;
          do
          {
            if ( V_stricmp_fast(v7, cmd) == 0 )
            {
              m_nValue = ent_text_flags_active.m_pParent->m_Value.m_nValue;
              v10 = *(cmd - 1);
              if ( n != 1 && ((m_nValue & v10) != 0 || n == 2) )
              {
                if ( n == 2 || (m_nValue & v10) != 0 && ((n ^ 1) & 1) != 0 )
                  m_nValue &= ~v10;
              }
              else
              {
                m_nValue |= v10;
              }
              ConVar::SetValue(&ent_text_flags_active, m_nValue);
            }
            cmd += 20;
          }
          while ( cmd != &unk_47E3030 );
        }
        else
        {
          ConVar::SetValue(&ent_text_flags_active, 0);
        }
      }
      else
      {
        ConVar::SetValue(&ent_text_flags_active, -1);
      }
    }
    else
    {
      bDoHelp = 1;
    }
    ++v3;
  }
  while ( args->m_nArgc > v3 );
  if ( bDoHelp != 0 )
  {
LABEL_33:
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        1,
        "Format: ent_filter <list of flags to toggle, or all/none, parsed in order>\n");
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
      LoggingSystem_Log(LOG_ENTITY_SYSTEM, 1, "Available: ");
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
      LoggingSystem_Log(LOG_ENTITY_SYSTEM, 1, "      ");
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
    {
      v22.m_pNext = 0;
      v22.m_TypeID = 0x416B6E694C646D43LL;
      v22.m_nDataSize = 24;
      v22.m_nVerbosity = 1;
      v22.m_pData = operator new[](0x18u);
      *v22.m_pData = 0;
      m_pData = v22.m_pData;
      *(v22.m_pData + 4) = 0x747865745F746E65LL;
      v12 = LOG_ENTITY_SYSTEM;
      strcpy(m_pData + 12, "_filter all");
      LoggingSystem_Log(v12, LoggingSeverity_t::LS_MESSAGE, &v22, -19276, "all");
      if ( v22.m_pData != 0 )
        operator delete[](v22.m_pData);
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
      LoggingSystem_Log(LOG_ENTITY_SYSTEM, 1, "          ");
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
    {
      v22.m_pNext = 0;
      v22.m_TypeID = 0x416B6E694C646D43LL;
      v22.m_pData = 0;
      v22.m_nVerbosity = 1;
      v22.m_nDataSize = 25;
      v17 = operator new[](0x19u);
      v22.m_nVerbosity = 1;
      v22.m_pData = v17;
      *v17 = 0;
      v18 = v22.m_pData;
      *(v22.m_pData + 4) = 0x747865745F746E65LL;
      v19 = LOG_ENTITY_SYSTEM;
      strcpy(v18 + 12, "_filter none");
      LoggingSystem_Log(v19, LoggingSeverity_t::LS_MESSAGE, &v22, -19276, "none");
      if ( v22.m_pData != 0 )
        operator delete[](v22.m_pData);
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
      LoggingSystem_Log(LOG_ENTITY_SYSTEM, 1, "\n");
    v13 = 0;
    v14 = _sFilters[0].cmd;
    do
    {
      while ( 1 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
        {
          CFmtStrN<256,false>::CFmtStrN(&v23, "ent_text_filter %s", v14);
          v22.m_nVerbosity = 1;
          v22.m_pNext = 0;
          v22.m_TypeID = 0x416B6E694C646D43LL;
          v22.m_pData = 0;
          v22.m_nDataSize = 0;
          v15 = strlen(v23.m_szBuf) + 1;
          v22.m_nDataSize = v15 + 4LL;
          v16 = operator new[](v22.m_nDataSize);
          v22.m_nVerbosity = 1;
          v22.m_pData = v16;
          *v16 = 0;
          if ( v15 < 0 )
            __debugbreak();
          memcpy(v22.m_pData + 4, v23.m_szBuf, v15);
          LoggingSystem_Log(LOG_ENTITY_SYSTEM, LoggingSeverity_t::LS_MESSAGE, &v22, -19276, "%9s", v14);
          if ( v22.m_pData != 0 )
            operator delete[](v22.m_pData);
        }
        if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
          LoggingSystem_Log(LOG_ENTITY_SYSTEM, 1, "  ");
        if ( v13 % 6 == 5 && LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
          break;
        ++v13;
        v14 += 20;
        if ( v13 == 15 )
          goto LABEL_59;
      }
      ++v13;
      v14 += 20;
      LoggingSystem_Log(LOG_ENTITY_SYSTEM, 1, "\n");
    }
    while ( v13 != 15 );
LABEL_59:
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
      LoggingSystem_Log(LOG_ENTITY_SYSTEM, 1, "\n");
  }
}


// CBaseEntity::GetLocalOrigin  (line 2644, @0x0000000001ed3d60, libserver.so)
// callers: CBaseEntity::ScriptGetLocalOrigin, CBaseAnimating::GetStepOrigin, CBaseEntity::GetStepOrigin, CBaseCombatCharacter::CalcDeathForceVector, CBaseCombatCharacter::Weapon_FindUsable, CBasePlayer::SmoothViewOnStairs, CBaseEntity::VPhysicsUpdatePusher, CBaseCombatCharacter::Weapon_Create, CFuncRotating::Spawn, CBaseButton::Spawn, CEnvBeverage::Use, CBaseDoor::Spawn (80 total)
const Vector *__fastcall CBaseEntity::GetLocalOrigin(const CBaseEntity *const this)
{
  return &this->m_pGameSceneNode->m_vecOrigin.m_Value;
}


// CBaseEntity::GetLocalAngles  (line 2651, @0x0000000001ed3d80, libserver.so)
// callers: CBaseEntity::LocalEyeAngles, CBaseEntity::ScriptGetLocalAngles, CBaseAnimating::GetStepAngles, CBaseAnimating::SetSequenceBox, CBaseAnimating::GetVelocity, CBaseEntity::GetStepAngles, CBaseCombatCharacter::GetDeathActivity, CBaseEntity::VPhysicsUpdatePusher, CBaseCombatCharacter::Weapon_Create, CBaseCombatWeapon::Respawn, CFuncRotating::Spawn, CRotButton::Spawn (80 total)
const QAngle *__fastcall CBaseEntity::GetLocalAngles(const CBaseEntity *const this)
{
  return &this->m_pGameSceneNode->m_angRotation.m_Value;
}


// CBaseEntity::SetLocalOrigin  (line 2658, @0x0000000001ed3da0, libserver.so)
// calls: CGameSceneNode::SetLocalOrigin
// callers: CBaseEntity::ScriptSetLocalOrigin, CWorld::Spawn, CBaseEntity::VPhysicsUpdatePusher, CBeam::SetAbsStartPos, CBeam::PointsInit, CBeam::HoseInit, CBeam::PointEntInit, CEnvMuzzleFlash::Spawn, CGibShooter::InitPointGib, CEntityDissolve::AttachToEntity, CBaseDoor::Blocked, CGameRules::GetPlayerSpawnSpot (30 total)
void __fastcall CBaseEntity::SetLocalOrigin(CBaseEntity *const this, const Vector *const vOrigin)
{
  CGameSceneNode::SetLocalOrigin(this->m_pGameSceneNode, vOrigin);
}


// CBaseEntity::SetLocalAngles  (line 2665, @0x0000000001ed3dc0, libserver.so)
// calls: CGameSceneNode::SetLocalAngles
// callers: CBaseEntity::ScriptSetLocalAngles, CWorld::Spawn, CBasePlayerAnimState::ComputePoseParam_MoveYaw, CBaseEntity::VPhysicsUpdatePusher, CFuncVehicleClip::Spawn, CMomentaryRotButton::InputSetPositionImmediately, CFuncRotating::RotateMove, CFuncRotating::InputSnapToStartPos, CMomentaryRotButton::ReturnMoveDone, CMomentaryRotButton::UpdateSelf, CMomentaryRotButton::SetPositionMoveDone, CRotDoor::SetToggleState (55 total)
void __fastcall CBaseEntity::SetLocalAngles(CBaseEntity *const this, const QAngle *const angles)
{
  CGameSceneNode::SetLocalAngles(this->m_pGameSceneNode, angles);
}


// CBaseEntity::GetAbsOrigin  (line 2672, @0x0000000001ed3de0, libserver.so)  // inlines: CalcAbsolutePosition, GetAbsOrigin, Load
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: CBaseEntity::EyePosition, CBaseEntity::WorldSpaceCenter, CPointClientUIWorldPanel::GetPanelCenter, CDevtestHierarchy2::Spawn, CNetworkTransmitComponent::IsInPVS, Script_CalcClosestPointOnEntityOBB, Script_CalcDistanceBetweenEntityOBB, Script_CreateEffect, CEntityDebugGameSystem::ClearDebugBitsOnMatchingEntities, CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities, CEntityDebugGameSystem::SetDebugBitsOnMatchingEntities, CMapSpawnGroup::OnSpawnGroupLoad (2003 total)
const Vector *__fastcall CBaseEntity::GetAbsOrigin(const CBaseEntity *const this)
{
  CGameSceneNode *m_pGameSceneNode; // rbx

  m_pGameSceneNode = this->m_pGameSceneNode;
  if ( m_pGameSceneNode->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pGameSceneNode);
  return &m_pGameSceneNode->m_vecAbsOrigin;
}


// CBaseEntity::GetAbsAngles  (line 2679, @0x0000000001ed3e10, libserver.so)  // inlines: CalcAbsolutePosition, GetAbsAngles, Load
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: CBaseEntity::EyeAngles, Script_CreateEffect, CBaseEntity::ScriptGetAngles, CreatePiecesFromPropData, CreatePiecesFromBreakModelList, CreateGibsFromList, CBaseAnimating::GetBonePosition, CBaseAnimatingController::UpdateIKLocks, CBaseAnimatingController::CalculateIKLocks, CBreakableProp::GetEnableMotionPosition, CBreakableProp::Break, CDecal::GetDecalEntityAndPosition (283 total)
const QAngle *__fastcall CBaseEntity::GetAbsAngles(const CBaseEntity *const this)
{
  CGameSceneNode *m_pGameSceneNode; // rbx

  m_pGameSceneNode = this->m_pGameSceneNode;
  if ( m_pGameSceneNode->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pGameSceneNode);
  return &m_pGameSceneNode->m_angAbsRotation;
}


// CBaseEntity::GetAbsScale  (line 2685, @0x0000000001ed3e40, libserver.so)  // inlines: CalcAbsolutePosition, GetAbsScale, Load
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: CreatePiecesFromBreakModelList, CBreakableProp::Break, CCollisionProperty::GetCollisionScale, CPhysicsCannister::Explode, CPropDoorRotatingBreakable::Event_Killed, CPropDoorRotatingBreakable::OnTakeDamage
float __fastcall CBaseEntity::GetAbsScale(const CBaseEntity *const this)
{
  CGameSceneNode *m_pGameSceneNode; // rbx

  m_pGameSceneNode = this->m_pGameSceneNode;
  if ( m_pGameSceneNode->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pGameSceneNode);
  return m_pGameSceneNode->m_flAbsScale;
}


// CBaseEntity::SetAbsScale  (line 2690, @0x0000000001ed3e70, libserver.so)
// calls: CGameSceneNode::SetAbsScale
void __fastcall CBaseEntity::SetAbsScale(CBaseEntity *const this, double a2, float flScale)
{
  CGameSceneNode::SetAbsScale(this->m_pGameSceneNode, flScale);
}


// CBaseEntity::GetLocalScale  (line 2696, @0x0000000001ed3e90, libserver.so)  // inlines: GetLocalScale
float __fastcall CBaseEntity::GetLocalScale(const CBaseEntity *const this)
{
  return this->m_pGameSceneNode->m_flScale.m_Value;
}


// CBaseEntity::SetLocalScale  (line 2701, @0x0000000001ed3eb0, libserver.so)
// calls: CGameSceneNode::SetLocalScale
// callers: CBaseCombatCharacter::EquipWearable
void __fastcall CBaseEntity::SetLocalScale(CBaseEntity *const this, double a2, float flScale)
{
  CGameSceneNode::SetLocalScale(this->m_pGameSceneNode, flScale);
}


// CBaseEntity::SetAbsOrigin  (line 2708, @0x0000000001ed3ed0, libserver.so)
// calls: CGameSceneNode::SetAbsOrigin
// callers: CBaseVRHandAttachment::UpdatePose, CBaseCombatCharacter::FixupBurningServerRagdoll, CBaseCombatCharacter::DropWeaponForWeaponStrip, CBaseCombatCharacter::Weapon_Drop, CBaseEntity::CreateNoSpawn, CBaseEntity::NetworkQuantize, CBaseEntity::VPhysicsUpdatePusher, CBaseEntity::Teleport, CBaseViewModel::CalcViewModelView, ent_setpos, FindPassableSpace, setpos_player (171 total)
void __fastcall CBaseEntity::SetAbsOrigin(CBaseEntity *const this, const Vector *const vOrigin)
{
  CGameSceneNode::SetAbsOrigin(this->m_pGameSceneNode, vOrigin);
}


// CBaseEntity::SetAbsAngles  (line 2715, @0x0000000001ed3ef0, libserver.so)
// calls: CGameSceneNode::SetAbsAngles
// callers: CreatePiecesFromPropData, CreateGibsFromList, CBaseVRHandAttachment::UpdatePose, CBaseCombatCharacter::DropWeaponForWeaponStrip, CBaseCombatCharacter::Weapon_Drop, CBaseEntity::CreateNoSpawn, CBaseEntity::NetworkQuantize, CC_Ent_Orient, CBaseEntity::Teleport, CBaseViewModel::CalcViewModelView, ent_setang, CPointCommentaryNode::UpdateViewThink (124 total)
void __fastcall CBaseEntity::SetAbsAngles(CBaseEntity *const this, const QAngle *const angles)
{
  CGameSceneNode::SetAbsAngles(this->m_pGameSceneNode, angles);
}


// CBaseEntity::EntityToWorldTransform  (line 2722, @0x0000000001ed3f10, libserver.so)  // inlines: CalcAbsolutePosition, Load, NodeToWorldTransform
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: CDevtestHierarchy::SpinThink, CBaseAnimating::GetBoneTransform, CBaseAnimating::ComputeEntitySpaceHitboxSurroundingBox, CDecal::StaticDecal, CBasePlayer::EyeAngles, CBaseEntity::CalcAbsoluteVelocity, ComputePushStartMatrix, CBaseEntity::Teleport, CCollisionProperty::CollisionToWorldTransform, CBeam::SetAbsStartPos, CBeam::SetAbsEndPos, CBaseButton::Spawn (58 total)
matrix3x4_t *__fastcall CBaseEntity::EntityToWorldTransform(CBaseEntity *const this)
{
  CGameSceneNode *m_pGameSceneNode; // rbx

  m_pGameSceneNode = this->m_pGameSceneNode;
  if ( m_pGameSceneNode->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pGameSceneNode);
  return &m_pGameSceneNode->m_mNodeToWorld;
}


// CBaseEntity::EntityToWorldTransform  (line 2729, @0x0000000001ed3f40, libserver.so)  // inlines: CalcAbsolutePosition, Load, NodeToWorldTransform
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: Script_CalcClosestPointOnEntityOBB, Script_CalcDistanceBetweenEntityOBB, CBaseAnimating::HitboxToWorldTransforms, CBreakableProp::Break, CBeam::GetAbsEndPos, CEnvBeam::Strike, CEnvBeam::Spawn, CEnvBeam::BeamUpdateVars, CMarkupVolume::GetOBBBounds, CPhysHinge::Spawn, CPropVehicleDriveable::GetVectors, CBaseEntity::Forward (17 total)
const matrix3x4_t *__fastcall CBaseEntity::EntityToWorldTransform(const CBaseEntity *const this)
{
  CGameSceneNode *m_pGameSceneNode; // rbx

  m_pGameSceneNode = this->m_pGameSceneNode;
  if ( m_pGameSceneNode->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pGameSceneNode);
  return &m_pGameSceneNode->m_mNodeToWorld;
}


// CBaseEntity::EntityToWorldTransformUnscaled  (line 2736, @0x0000000001ed3f70, libserver.so)  // inlines: CalcAbsolutePosition, Load, NodeToWorldTransformUnscaled, ScaleUpper3x3Matrix
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty
matrix3x4_t *__fastcall CBaseEntity::EntityToWorldTransformUnscaled(
        matrix3x4_t *__return_ptr retstr,
        const CBaseEntity *const this)
{
  matrix3x4_t *result; // rax
  CGameSceneNode *m_pGameSceneNode; // rbx
  float m_flAbsScale; // xmm1_4
  float v5; // xmm0_4
  float *v6; // rdx
  float v7; // xmm1_4
  __int64 v9; // [rsp+10h] [rbp-40h] BYREF
  __int64 v10; // [rsp+18h] [rbp-38h]
  __int64 v11; // [rsp+20h] [rbp-30h]
  __int64 v12; // [rsp+28h] [rbp-28h]
  __int64 v13; // [rsp+30h] [rbp-20h]
  __int64 v14; // [rsp+38h] [rbp-18h]
  char v15; // [rsp+40h] [rbp-10h] BYREF

  result = retstr;
  m_pGameSceneNode = this->m_pGameSceneNode;
  if ( m_pGameSceneNode->m_bDirtyAbsTransform.m_value )
  {
    CGameSceneNode::CalcAbsolutePositionWhenDirty(m_pGameSceneNode);
    result = retstr;
  }
  m_flAbsScale = m_pGameSceneNode->m_flAbsScale;
  if ( m_flAbsScale == 1.0 )
  {
    *&result->m_flMatVal[0][0] = *&m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[0][0];
    *&result->m_flMatVal[0][2] = *&m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[0][2];
    *&result->m_flMatVal[1][0] = *&m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[1][0];
    *&result->m_flMatVal[1][2] = *&m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[1][2];
    *&result->m_flMatVal[2][0] = *&m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[2][0];
    *&result->m_flMatVal[2][2] = *&m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[2][2];
  }
  else
  {
    v9 = *&m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[0][0];
    v5 = 1.0 / m_flAbsScale;
    v10 = *&m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[0][2];
    v11 = *&m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[1][0];
    v12 = *&m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[1][2];
    v13 = *&m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[2][0];
    v14 = *&m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[2][2];
    v6 = &v9;
    do
    {
      v7 = *v6;
      v6 += 4;
      *(v6 - 4) = v7 * v5;
      *(v6 - 3) = *(v6 - 3) * v5;
      *(v6 - 2) = *(v6 - 2) * v5;
    }
    while ( v6 != &v15 );
    *&result->m_flMatVal[0][0] = v9;
    *&result->m_flMatVal[0][2] = v10;
    *&result->m_flMatVal[1][0] = v11;
    *&result->m_flMatVal[1][2] = v12;
    *&result->m_flMatVal[2][0] = v13;
    *&result->m_flMatVal[2][2] = v14;
  }
  return result;
}


// CBaseEntity::GetVectors  (line 2749, @0x0000000001ecc2b0, libserver.so)  // inlines: CalcAbsolutePosition, EntityToWorldTransform, GetAbsScale, GetColumn, Load, MatrixGetColumn, NodeToWorldTransform, operator*=
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty
void __fastcall CBaseEntity::GetVectors(
        const CBaseEntity *const this,
        Vector *pForward,
        Vector *pRightOut,
        Vector *pUpOut)
{
  CGameSceneNode *m_pGameSceneNode; // rbx
  CGameSceneNode *v9; // r15
  float m_flAbsScale; // xmm1_4
  float v11; // xmm0_4
  vec_t v12; // xmm2_4
  vec_t v13; // xmm3_4
  vec_t v14; // xmm3_4
  vec_t v15; // xmm4_4
  vec_t v16; // xmm2_4
  vec_t v17; // xmm3_4

  m_pGameSceneNode = this->m_pGameSceneNode;
  if ( m_pGameSceneNode->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pGameSceneNode);
  v9 = this->m_pGameSceneNode;
  if ( v9->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(v9);
  m_flAbsScale = v9->m_flAbsScale;
  v11 = 1.0;
  if ( m_flAbsScale != 0.0 )
    v11 = 1.0 / m_flAbsScale;
  if ( pForward != 0 )
  {
    v12 = m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[1][0] * v11;
    v13 = m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[0][0] * v11;
    pForward->z = m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[2][0] * v11;
    pForward->y = v12;
    pForward->x = v13;
  }
  if ( pRightOut != 0 )
  {
    v14 = m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[1][1] * -v11;
    v15 = m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[0][1] * -v11;
    pRightOut->z = m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[2][1] * -v11;
    pRightOut->y = v14;
    pRightOut->x = v15;
  }
  if ( pUpOut != 0 )
  {
    v16 = m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[1][2] * v11;
    v17 = m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[0][2] * v11;
    pUpOut->z = m_pGameSceneNode->m_mNodeToWorld.m_flMatVal[2][2] * v11;
    pUpOut->y = v16;
    pUpOut->x = v17;
  }
}


// CBaseEntity::ComputeAbsPosition  (line 2778, @0x0000000001ed40a0, libserver.so)  // inlines: CalcAbsolutePosition, EntityToWorldTransform, GetMoveParent, Load, NodeToWorldTransform, VectorTransform, operator=
// calls: CGameSceneNode::GetOwnerEntity, VectorTransform, CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: CFuncLadder::GetTopPosition, CFuncLadder::GetBottomPosition
void __fastcall CBaseEntity::ComputeAbsPosition(
        CBaseEntity *const this,
        const Vector *const vLocalPosition,
        Vector *pAbsPosition)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CGameSceneNode *m_pGameSceneNode; // rbx

  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 && (OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent)) != 0 )
  {
    m_pGameSceneNode = OwnerEntity->m_pGameSceneNode;
    if ( m_pGameSceneNode->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(OwnerEntity->m_pGameSceneNode);
    VectorTransform(&vLocalPosition->x, &m_pGameSceneNode->m_mNodeToWorld, &pAbsPosition->x);
  }
  else
  {
    pAbsPosition->x = vLocalPosition->x;
    pAbsPosition->y = vLocalPosition->y;
    pAbsPosition->z = vLocalPosition->z;
  }
}


// CBaseEntity::ComputeAbsDirection  (line 2793, @0x0000000001ed4150, libserver.so)  // inlines: CalcAbsolutePosition, EntityToWorldTransform, GetMoveParent, Load, NodeToWorldTransform, VectorRotate, operator=
// calls: CGameSceneNode::GetOwnerEntity, VectorRotate, CGameSceneNode::CalcAbsolutePositionWhenDirty
void __fastcall CBaseEntity::ComputeAbsDirection(
        CBaseEntity *const this,
        const Vector *const vLocalDirection,
        Vector *pAbsDirection)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CGameSceneNode *m_pGameSceneNode; // rbx

  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 && (OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent)) != 0 )
  {
    m_pGameSceneNode = OwnerEntity->m_pGameSceneNode;
    if ( m_pGameSceneNode->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(OwnerEntity->m_pGameSceneNode);
    VectorRotate(&vLocalDirection->x, &m_pGameSceneNode->m_mNodeToWorld, &pAbsDirection->x);
  }
  else
  {
    pAbsDirection->x = vLocalDirection->x;
    pAbsDirection->y = vLocalDirection->y;
    pAbsDirection->z = vLocalDirection->z;
  }
}


// CBaseEntity::IsMoving  (line 2808, @0x0000000001ece800, libserver.so)  // inlines: operator!=
bool __fastcall CBaseEntity::IsMoving(CBaseEntity *const this)
{
  Vector vVelocity; // [rsp+0h] [rbp-10h] BYREF

  (*(this->_vptr_IHandleEntity + 173))(this, &vVelocity, 0);
  return vec3_origin.x != vVelocity.x || vec3_origin.y != vVelocity.y || vec3_origin.z != vVelocity.z;
}


// CBaseEntity::IsFloating  (line 2817, @0x0000000001ed4200, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject
// callers: CGameMovement::CheckFalling, CalculatePhysicsImpactDamage
bool __fastcall CBaseEntity::IsFloating(CBaseEntity *const this)
{
  IPhysicsObject *Object; // rax
  unsigned int v3; // ebx
  __int64 v4; // rax

  if ( (this->m_iEFlags & 0x80000) == 0 )
    return 0;
  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( Object == 0 )
    return 0;
  v3 = (*(*Object + 1192LL))(Object);
  v4 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
  return *((*(*v4 + 16LL))(v4, v3, 0) + 24) < 1000.0;
}


// CBaseEntity::FireBullets  (line 2857, @0x0000000001ed46b0, libserver.so)  // inlines: ApplySpread, CGameTrace, CShotManipulator, ClassMatches, EnableInteractsWith, Get, GetBool, GetClassNameAsCStr, GetClassname, GetFloat, GetInstance, GetInt, GetTarget, HasSpawnFlags, IgnoreDisabledPairs, Init, LengthSqr, Purge, Ray_t, RemoveAll, RnCollisionAttr_t, ScaleDamageForce, Set, SetAmmoType, SetDamageType, SetShootDir, String, ToBaseCombatCharacter, TraceRay, UTIL_TraceHull, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator CBaseEntity*, operator!=, operator*, operator*=, operator+, operator=, operator=<int>, ~CTraceFilterSimpleList, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGameTrace::Init, GetAmmoDef, CAmmoDef::DamageType, CAmmoDef::Flags, __dynamic_cast, CBaseCombatCharacter::GetActiveWeapon, CEntityHandle::operator CEntityInstance*, ApplyMultiDamage, ClearMultiDamage, CTraceFilterSimpleList::CTraceFilterSimpleList, CTraceFilterSimpleList::AddEntityToIgnore, VectorVectors (34 total)
// strings: "func_breakable", "ERROR: Undefined ammo type!\n", "RagdollImpact"
// globals: CBaseEntity::FireBullets(FireBulletsInfo_t const&)::tracerCount
// local variable allocation has failed, the output may be wrong!
void __fastcall CBaseEntity::FireBullets(CBaseEntity *const this, const FireBulletsInfo_t *const info)
{
  const CBaseCombatCharacter *v4; // r13
  CBaseCombatWeapon *ActiveWeapon; // rax
  int v6; // eax
  __int64 v7; // rsi
  CBaseEntity *m_pAttacker; // rax
  int v9; // eax
  float x; // xmm1_4
  float y; // xmm2_4
  float z; // xmm0_4
  float m_flDistance; // xmm3_4
  int (**vptr_IHandleEntity)(...); // rax
  vec_t v15; // xmm2_4
  vec_t v16; // xmm0_4
  vec_t v17; // xmm3_4
  float v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm3_4
  float m_flDamageForceScale; // xmm0_4
  int m_iTracerFreq; // ecx
  char v23; // si
  int v24; // eax
  CBaseEntity *m_pWeapon; // r14
  vec_t v26; // eax
  __int64 v27; // rcx
  void (__fastcall *v28)(CBaseGameStats *, CBaseEntity *const, bool, const char *, _BYTE *); // r14
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rcx
  float v31; // xmm5_4
  float v32; // xmm4_4
  float v33; // xmm3_4
  float m_fValue; // xmm0_4
  double v35; // xmm0_8
  float v36; // xmm0_4
  __m128d v37; // xmm1
  bool v38; // cf
  double v39; // xmm0_8
  double v40; // xmm5_8
  float v41; // xmm3_4
  float v42; // xmm0_4
  __m128d v43; // xmm5
  double v44; // xmm0_8
  double v45; // xmm1_8
  double v46; // xmm2_8
  double v47; // xmm4_8
  bool v48; // r14
  int v49; // ecx
  float v50; // xmm0_4
  CBaseEntity *v51; // rdi
  vec_t v52; // xmm2_4
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  vec_t v56; // xmm2_4
  int bitsDamageType; // [rsp+4h] [rbp-3ACh]
  char nAmmoFlags; // [rsp+8h] [rbp-3A8h]
  float flCumulativeDamage; // [rsp+Ch] [rbp-3A4h]
  CAmmoDef *pAmmoDef; // [rsp+10h] [rbp-3A0h]
  float flPlayerDamage; // [rsp+18h] [rbp-398h]
  int iSeed; // [rsp+1Ch] [rbp-394h]
  CBaseEntity *pAttacker; // [rsp+20h] [rbp-390h]
  unsigned int nActualDamageType; // [rsp+30h] [rbp-380h]
  int v65; // [rsp+34h] [rbp-37Ch]
  int iShot; // [rsp+38h] [rbp-378h]
  float v67; // [rsp+40h] [rbp-370h]
  float v68; // [rsp+44h] [rbp-36Ch]
  float flActualDamageb; // [rsp+48h] [rbp-368h]
  float flActualDamage; // [rsp+48h] [rbp-368h]
  float flActualDamagea; // [rsp+48h] [rbp-368h]
  Vector *dira; // [rsp+58h] [rbp-358h]
  float dir; // [rsp+58h] [rbp-358h]
  Vector vecDir; // [rsp+60h] [rbp-350h] BYREF
  Vector vecEnd; // [rsp+70h] [rbp-340h] BYREF
  Vector vecTracerDest; // [rsp+80h] [rbp-330h] BYREF
  CShotManipulator Manipulator; // [rsp+90h] [rbp-320h] BYREF
  CBulletsTraceFilter traceFilter; // [rsp+C0h] [rbp-2F0h] BYREF
  Vector vecTracerSrc; // [rsp+120h] [rbp-290h] BYREF
  float v80; // [rsp+12Ch] [rbp-284h]
  float v81; // [rsp+130h] [rbp-280h]
  float v82; // [rsp+134h] [rbp-27Ch]
  float v83; // [rsp+138h] [rbp-278h]
  float v84; // [rsp+13Ch] [rbp-274h]
  unsigned int v85; // [rsp+178h] [rbp-238h]
  CTakeDamageInfo triggerInfo; // [rsp+190h] [rbp-220h] BYREF
  trace_t tr; // [rsp+220h] [rbp-190h] BYREF
  _BYTE dmgInfo[148]; // [rsp+2D0h] [rbp-E0h] OVERLAPPED BYREF
  Vector boneLocalNormal; // [rsp+364h] [rbp-4Ch]
  uint m_nFaceIndex; // [rsp+370h] [rbp-40h]
  __int16 hitboxBoneIndex; // [rsp+374h] [rbp-3Ch]
  __int16 unused0; // [rsp+376h] [rbp-3Ah]

  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  pAmmoDef = GetAmmoDef();
  nActualDamageType = CAmmoDef::DamageType(pAmmoDef, info->m_iAmmoType);
  nAmmoFlags = CAmmoDef::Flags(pAmmoDef, info->m_iAmmoType);
  if ( (*(this->_vptr_IHandleEntity + 140))(this) != 0 )
  {
    v4 = __dynamic_cast(this, &`typeinfo for'CBaseEntity, &`typeinfo for'CBasePlayer, 0);
    if ( CBaseCombatCharacter::GetActiveWeapon(v4) != 0 )
    {
      ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(v4);
      v6 = (*(ActiveWeapon->_vptr_IHandleEntity + 350))(ActiveWeapon);
      if ( v6 != -1 )
      {
        v7 = v6;
        if ( v6 == 5 )
          v7 = (info->m_iShots == 12) + 5;
        (*(v4->_vptr_IHandleEntity + 408))(v4, v7, 0, 4);
      }
    }
  }
  flPlayerDamage = info->m_flPlayerDamage;
  if ( flPlayerDamage == 0.0 && (nAmmoFlags & 2) != 0 )
    flPlayerDamage = CAmmoDef::PlrDamage(pAmmoDef, info->m_iAmmoType);
  m_pAttacker = info->m_pAttacker;
  if ( m_pAttacker == 0 )
    m_pAttacker = this;
  pAttacker = m_pAttacker;
  if ( CEntityHandle::operator CEntityInstance *(&g_MultiDamage.m_hTarget) != 0 )
    ApplyMultiDamage();
  ClearMultiDamage();
  v9 = nActualDamageType;
  BYTE1(v9) = BYTE1(nActualDamageType) | 0x10;
  bitsDamageType = v9;
  g_MultiDamage.m_bitsDamageType = v9;
  CTraceFilterSimpleList::CTraceFilterSimpleList(&traceFilter, 4);
  (*(traceFilter._vptr_CTraceFilter + 3))(&traceFilter, this);
  CTraceFilterSimpleList::AddEntityToIgnore(&traceFilter, info->m_pAdditionalIgnoreEnt);
  *(&traceFilter.m_attr.RnQueryShapeAttr_t + 31) &= ~8u;
  iSeed = 0;
  if ( (*(this->_vptr_IHandleEntity + 140))(this) != 0 )
    iSeed = CBaseEntity::m_nPredictionRandomSeed;
  Manipulator.m_vecShotDirection = info->m_vecDirShooting;
  VectorVectors(&Manipulator.m_vecShotDirection, &Manipulator.m_vecRight, &Manipulator.m_vecUp);
  if ( info->m_iShots > 0 )
  {
    iShot = 0;
    flCumulativeDamage = 0.0;
    while ( 1 )
    {
      v65 = iShot;
      if ( (*(this->_vptr_IHandleEntity + 140))(this) != 0 )
        RandomSeed((iShot + iSeed));
      if ( iShot != 0 || info->m_iShots <= 1 || (info->m_nFlags & 1) == 0 )
      {
        v67 = ai_shot_bias_min.m_pParent->m_Value.m_fValue
            + (ai_shot_bias_max.m_pParent->m_Value.m_fValue - ai_shot_bias_min.m_pParent->m_Value.m_fValue);
        dir = 0.5 * fabs(v67);
        do
        {
          flActualDamageb = dir * (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
          v35 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
          flActualDamage = flActualDamageb + (*&v35 * (1.0 - dir));
          v68 = dir * (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
          v36 = ((*(*random_valve + 8LL))(random_valve, -1.0, 1.0) * (1.0 - dir)) + v68;
          if ( v67 < 0.0 )
          {
            if ( flActualDamage < 0.0 )
            {
              v43 = 0xBFF0000000000000LL;
              v43.m128d_f64[0] = -1.0 - flActualDamage;
              v37 = v43;
            }
            else
            {
              v37 = 0x3FF0000000000000uLL;
              v37.m128d_f64[0] = 1.0 - flActualDamage;
            }
            v38 = v36 < 0.0;
            v39 = v36;
            flActualDamage = _mm_movedup_pd(v37).m128d_f64[0];
            if ( v38 )
              v40 = -1.0 - v39;
            else
              v40 = 1.0 - v39;
            v36 = v40;
          }
        }
        while ( ((flActualDamage * flActualDamage) + (v36 * v36)) > 1.0 );
        v41 = info->m_vecSpread.x * flActualDamage;
        v42 = v36 * info->m_vecSpread.y;
        x = (Manipulator.m_vecUp.x * v42) + ((Manipulator.m_vecRight.x * v41) + Manipulator.m_vecShotDirection.x);
        Manipulator.m_vecResult.x = x;
        vecDir.x = x;
        y = (Manipulator.m_vecUp.y * v42) + ((Manipulator.m_vecRight.y * v41) + Manipulator.m_vecShotDirection.y);
        z = (v42 * Manipulator.m_vecUp.z) + ((v41 * Manipulator.m_vecRight.z) + Manipulator.m_vecShotDirection.z);
        Manipulator.m_vecResult.y = y;
        Manipulator.m_vecResult.z = z;
        vecDir.y = y;
        vecDir.z = z;
      }
      else
      {
        x = Manipulator.m_vecShotDirection.x;
        y = Manipulator.m_vecShotDirection.y;
        z = Manipulator.m_vecShotDirection.z;
        vecDir = Manipulator.m_vecShotDirection;
      }
      m_flDistance = info->m_flDistance;
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      v15 = (y * m_flDistance) + info->m_vecSrc.y;
      v16 = (z * m_flDistance) + info->m_vecSrc.z;
      v17 = (m_flDistance * x) + info->m_vecSrc.x;
      vecEnd.y = v15;
      vecEnd.z = v16;
      vecEnd.x = v17;
      if ( vptr_IHandleEntity[140](this) != 0 && info->m_iShots > 1 && (iShot & 1) != 0 )
      {
        v18 = info->m_vecSrc.x;
        v19 = info->m_vecSrc.y;
        LOBYTE(triggerInfo.m_flDamage) = 0;
        triggerInfo.m_vecDamageForce.y = 0.0;
        v20 = info->m_vecSrc.z;
        triggerInfo.m_vecDamagePosition.z = 0.0;
        triggerInfo.m_vecDamageDirection.x = 0.0;
        triggerInfo.m_hAttacker.m_Index = 0;
        triggerInfo.m_vecDamageForce.z = vecEnd.x - v18;
        triggerInfo.m_vecDamagePosition.x = vecEnd.y - v19;
        triggerInfo.m_hWeapon.m_Index = 0;
        triggerInfo.m_vecDamagePosition.y = vecEnd.z - v20;
        triggerInfo.m_vecDamageDirection.y = 3.0;
        triggerInfo.m_vecDamageDirection.z = 3.0;
        triggerInfo.m_hInflictor.m_Index = 1077936128;
        *&triggerInfo._vptr_CTakeDamageInfo = v18 + 0.0;
        *(&triggerInfo._vptr_CTakeDamageInfo + 1) = v19 + 0.0;
        triggerInfo.m_vecDamageForce.x = v20 + 0.0;
        triggerInfo.m_vecReportedPosition.x = -0.0;
        triggerInfo.m_vecReportedPosition.y = -0.0;
        triggerInfo.m_vecReportedPosition.z = -0.0;
        traceFilter.m_attr.m_nInteractsWith |= 0x185003uLL;
        BYTE1(triggerInfo.m_flDamage) = (((triggerInfo.m_vecDamageForce.z * triggerInfo.m_vecDamageForce.z)
                                        + (triggerInfo.m_vecDamagePosition.x * triggerInfo.m_vecDamagePosition.x))
                                       + (triggerInfo.m_vecDamagePosition.y * triggerInfo.m_vecDamagePosition.y)) != 0.0;
        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &triggerInfo, &traceFilter, &tr);
      }
      else
      {
        v31 = info->m_vecSrc.x;
        v32 = info->m_vecSrc.y;
        v33 = info->m_vecSrc.z;
        m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
        *&dmgInfo[20] = vecEnd.y - v32;
        *&dmgInfo[64] = m_fValue;
        *&dmgInfo[24] = vecEnd.z - v33;
        *&dmgInfo[12] = 0;
        memset(&dmgInfo[28], 0, 36);
        *&dmgInfo[16] = vecEnd.x - v31;
        dmgInfo[68] = 1;
        *dmgInfo = __PAIR64__(LODWORD(v32), LODWORD(v31));
        *&dmgInfo[8] = v33;
        traceFilter.m_attr.m_nInteractsWith |= 0x185003uLL;
        dmgInfo[69] = (((*&dmgInfo[16] * *&dmgInfo[16]) + (*&dmgInfo[20] * *&dmgInfo[20]))
                     + (*&dmgInfo[24] * *&dmgInfo[24])) != 0.0;
        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, dmgInfo, &traceFilter, &tr);
      }
      if ( tr.startsolid )
      {
        tr.fraction = 0.0;
        tr.endpos = tr.startpos;
      }
      if ( ai_debug_shoot_positions.m_pParent->m_Value.m_nValue != 0 )
        NDebugOverlay::Line(&info->m_vecSrc, &vecEnd, 255, 0, 0, 0, 10.0);
      CTakeDamageInfo::CTakeDamageInfo(&triggerInfo, pAttacker, pAttacker, info->m_flDamage, nActualDamageType, 0);
      CalculateBulletDamageForce(&triggerInfo, info->m_iAmmoType, &vecDir, &tr.endpos, 1.0);
      m_flDamageForceScale = info->m_flDamageForceScale;
      triggerInfo.m_iAmmoType = info->m_iAmmoType;
      triggerInfo.m_vecDamageForce.x = triggerInfo.m_vecDamageForce.x * m_flDamageForceScale;
      triggerInfo.m_vecDamageForce.y = triggerInfo.m_vecDamageForce.y * m_flDamageForceScale;
      triggerInfo.m_vecDamageForce.z = m_flDamageForceScale * triggerInfo.m_vecDamageForce.z;
      CBaseEntity::TraceAttackToTriggers(this, &triggerInfo, &tr.startpos, &tr.endpos, &vecDir);
      if ( info->m_iAmmoType == -1 )
      {
        DevMsg("ERROR: Undefined ammo type!\n");
        CTakeDamageInfo::~CTakeDamageInfo(&triggerInfo);
        traceFilter.m_PassEntities.m_Size = 0;
        traceFilter._vptr_CTraceFilter = off_3FF78D0;
        if ( (traceFilter.m_PassEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CBaseEntity *,int>::Purge(&traceFilter.m_PassEntities.m_Memory);
          if ( (traceFilter.m_PassEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            goto LABEL_102;
        }
        return;
      }
      vecTracerDest = tr.endpos;
      if ( tr.fraction != 1.0 )
        break;
LABEL_32:
      if ( tr.m_pEnt != 0
        && tr.m_pSurfaceProperties != 0
        && tr.m_pSurfaceProperties->m_gameProperties.m_nMaterial == 89
        && CEntityIdentity::ClassMatches(tr.m_pEnt->m_pEntity, "func_breakable") )
      {
        m_iTracerFreq = info->m_iTracerFreq;
        v23 = ((tr.m_pEnt->m_spawnflags.m_Value >> 11) ^ 1) & 1;
        if ( m_iTracerFreq == 0 )
          goto LABEL_52;
      }
      else
      {
        m_iTracerFreq = info->m_iTracerFreq;
        v23 = 0;
        if ( m_iTracerFreq == 0 )
          goto LABEL_52;
      }
      v24 = CBaseEntity::FireBullets(FireBulletsInfo_t const&)::tracerCount++;
      if ( v24 % m_iTracerFreq == 0 )
      {
        if ( v23 == 0 )
        {
          m_pWeapon = info->m_pWeapon;
          v26 = vec3_origin.z;
          if ( m_pWeapon == 0 )
            m_pWeapon = this;
          *&vecTracerSrc.x = *&vec3_origin.x;
          vecTracerSrc.z = v26;
          (*(m_pWeapon->_vptr_IHandleEntity + 136))(m_pWeapon, &info->m_vecSrc);
          memset(&dmgInfo[104], 0, 31);
          dmgInfo[135] = 7;
          CGameTrace::Init(dmgInfo);
          *dmgInfo = tr.startpos;
          *&dmgInfo[24] = tr.plane;
          *&dmgInfo[44] = *&tr.fraction;
          dmgInfo[56] = tr.startsolid;
          *&dmgInfo[64] = tr.m_pSurfaceProperties;
          *&dmgInfo[72] = tr.m_pEnt;
          *&dmgInfo[80] = tr.m_pHitbox;
          *&dmgInfo[88] = tr.m_hBody;
          *&dmgInfo[136] = tr.boneLocalPos;
          *&dmgInfo[96] = tr.m_hShape;
          *&dmgInfo[104] = tr.m_ShapeAttributes;
          boneLocalNormal = tr.boneLocalNormal;
          *&dmgInfo[12] = vecTracerDest;
          m_nFaceIndex = tr.m_nFaceIndex;
          hitboxBoneIndex = tr.hitboxBoneIndex;
          unused0 = tr.unused0;
          dira = *(m_pWeapon->_vptr_IHandleEntity + 131);
          v27 = CAmmoDef::TracerType(pAmmoDef, info->m_iAmmoType);
          (dira)(m_pWeapon, &vecTracerSrc, dmgInfo, v27);
          goto LABEL_41;
        }
LABEL_53:
        CBaseEntity::HandleShotImpactingGlass(this, info, &tr, &vecDir, &traceFilter);
        goto LABEL_41;
      }
LABEL_52:
      if ( v23 != 0 )
        goto LABEL_53;
LABEL_41:
      CTakeDamageInfo::~CTakeDamageInfo(&triggerInfo);
      ++iShot;
      if ( info->m_iShots <= v65 + 1 )
        goto LABEL_42;
    }
    CBaseEntity::UpdateShotStatistics(this, &tr);
    CSoundEnt::InsertSound(16, &tr.endpos, 200, 0.5, this, (info->m_nFlags << 28 >> 31) & 6, 0);
    v48 = (CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, &tr.endpos, 0x1C000u) & 0x18000) != 0
       && CBaseEntity::HandleShotImpactingWater(this, info, &vecEnd, &traceFilter, &vecTracerDest);
    flActualDamagea = info->m_flDamage;
    if ( flPlayerDamage != 0.0
      && ((*(tr.m_pEnt->_vptr_IHandleEntity + 140))(tr.m_pEnt, v44, v45, v46, 0.0, v47, flPlayerDamage) != 0
       || (*(tr.m_pEnt->_vptr_IHandleEntity + 101))(tr.m_pEnt) != 0
       && (v53 = (*(tr.m_pEnt->_vptr_IHandleEntity + 101))(tr.m_pEnt), (*(*v53 + 8LL))(v53, 0) != 0)
       && (v54 = (*(tr.m_pEnt->_vptr_IHandleEntity + 101))(tr.m_pEnt),
           v55 = (*(*v54 + 8LL))(v54, 0),
           (*(*v55 + 1120LL))(v55) != 0)) )
    {
      flActualDamagea = flPlayerDamage;
    }
    else if ( flActualDamagea == 0.0 )
    {
      flActualDamagea = (*(g_pGameRules->_vptr_CGameRules + 37))(g_pGameRules, pAttacker, tr.m_pEnt, info->m_iAmmoType);
      v49 = nActualDamageType;
      goto LABEL_74;
    }
    v49 = nActualDamageType;
    BYTE1(v49) = BYTE1(nActualDamageType) | 0x20;
    if ( flActualDamagea <= 16.0 )
      v49 = bitsDamageType;
LABEL_74:
    if ( v48 && (info->m_nFlags & 2) != 0 )
      goto LABEL_32;
    CTakeDamageInfo::CTakeDamageInfo(dmgInfo, this, pAttacker, flActualDamagea, v49, 0);
    CalculateBulletDamageForce(dmgInfo, info->m_iAmmoType, &vecDir, &tr.endpos, 1.0);
    v50 = info->m_flDamageForceScale;
    *&dmgInfo[88] = info->m_iAmmoType;
    *&dmgInfo[8] = *&dmgInfo[8] * v50;
    *&dmgInfo[12] = *&dmgInfo[12] * v50;
    *&dmgInfo[16] = v50 * *&dmgInfo[16];
    CBaseEntity::DispatchTraceAttack(tr.m_pEnt, dmgInfo, &vecDir, &tr);
    if ( tr.m_pEnt != 0 && (*(tr.m_pEnt->_vptr_IHandleEntity + 147))(tr.m_pEnt) != 0 )
      flCumulativeDamage = flCumulativeDamage + *&dmgInfo[68];
    if ( !v48 || (info->m_nFlags & 4) != 0 )
    {
      v51 = info->m_pWeapon;
      if ( v51 != 0 )
        (*(v51->_vptr_IHandleEntity + 130))(v51, &tr, nActualDamageType);
      else
        (*(this->_vptr_IHandleEntity + 130))(this, &tr, nActualDamageType);
LABEL_83:
      if ( (nAmmoFlags & 1) != 0 )
        Pickup_ForcePlayerToDropThisObject(tr.m_pEnt);
      CTakeDamageInfo::~CTakeDamageInfo(dmgInfo);
      goto LABEL_32;
    }
    CEffectData::CEffectData(&vecTracerSrc);
    if ( tr.startpos.x == v82 && tr.startpos.y == v83 )
    {
      v52 = tr.startpos.z;
      if ( tr.startpos.z == v84 )
      {
LABEL_105:
        if ( tr.endpos.x == vecTracerSrc.z && tr.endpos.y == v80 )
        {
          v56 = tr.endpos.z;
          if ( tr.endpos.z == v81 )
          {
LABEL_108:
            if ( nActualDamageType != v85 )
              v85 = nActualDamageType;
            DispatchEffect("RagdollImpact", &vecTracerSrc);
            goto LABEL_83;
          }
        }
        else
        {
          v56 = tr.endpos.z;
        }
        vecTracerSrc.z = tr.endpos.x;
        v80 = tr.endpos.y;
        v81 = v56;
        goto LABEL_108;
      }
    }
    else
    {
      v52 = tr.startpos.z;
    }
    v82 = tr.startpos.x;
    v83 = tr.startpos.y;
    v84 = v52;
    goto LABEL_105;
  }
  flCumulativeDamage = 0.0;
LABEL_42:
  ApplyMultiDamage();
  if ( (*(this->_vptr_IHandleEntity + 140))(this) != 0
    && flCumulativeDamage > 0.0
    && CBaseCombatCharacter::GetActiveWeapon(this) != 0 )
  {
    CTakeDamageInfo::CTakeDamageInfo(dmgInfo, this, pAttacker, flCumulativeDamage, nActualDamageType, 0);
    v28 = *(gamestats->_vptr_CBaseGameStats + 30);
    m_pEntity = CBaseCombatCharacter::GetActiveWeapon(this)->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    v28(gamestats, this, info->m_bPrimaryAttack, m_pAsString, dmgInfo);
    CTakeDamageInfo::~CTakeDamageInfo(dmgInfo);
  }
  traceFilter.m_PassEntities.m_Size = 0;
  traceFilter._vptr_CTraceFilter = off_3FF78D0;
  if ( (traceFilter.m_PassEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CBaseEntity *,int>::Purge(&traceFilter.m_PassEntities.m_Memory);
    if ( (traceFilter.m_PassEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_102:
      CUtlMemory<CBaseEntity *,int>::Purge(&traceFilter.m_PassEntities.m_Memory);
  }
}


// CBaseEntity::ShouldDrawUnderwaterBulletBubbles  (line 3293, @0x0000000001ed4280, libserver.so)
bool __fastcall CBaseEntity::ShouldDrawUnderwaterBulletBubbles(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::HandleShotImpactingWater  (line 3307, @0x0000000001ed4290, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, Set, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator!=, operator-, operator=, operator=<float>, operator|=<<anonymous enum> >
// calls: CGameTrace::Init, CGamePhysicsQueryInterface::TraceRay, CGamePhysicsQueryInterface::GetPointContents, GetAmmoDef, CAmmoDef::MinSplashSize, CAmmoDef::MaxSplashSize, CEffectData::CEffectData, DispatchEffect
// callers: CBaseEntity::FireBullets
// strings: "gunshotsplash"
bool __fastcall CBaseEntity::HandleShotImpactingWater(
        CBaseEntity *const this,
        const FireBulletsInfo_t *const info,
        const Vector *const vecEnd,
        CTraceFilter *pTraceFilter,
        Vector *pVecTracerDest)
{
  float x; // xmm6_4
  float y; // xmm5_4
  float z; // xmm4_4
  float v12; // xmm2_4
  float m_fValue; // xmm1_4
  float v14; // xmm1_4
  CGamePhysicsQueryInterface *v15; // rdi
  bool v16; // al
  uint64 PointContents; // rax
  __int64 v18; // rsi
  bool v19; // dl
  int m_iAmmoType; // r12d
  CAmmoDef *AmmoDef; // rax
  int v23; // eax
  int v24; // ebx
  int v25; // r12d
  CAmmoDef *v26; // rax
  int v27; // ebx
  float v28; // xmm0_4
  CEffectData data; // [rsp+10h] [rbp-150h] BYREF
  trace_t waterTrace; // [rsp+80h] [rbp-E0h] BYREF

  memset(&waterTrace.m_ShapeAttributes, 0, 31);
  waterTrace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&waterTrace);
  x = info->m_vecSrc.x;
  y = info->m_vecSrc.y;
  z = info->m_vecSrc.z;
  v12 = vecEnd->z;
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  data.m_vStart.m_Value.x = vecEnd->y - y;
  data.m_flScale.m_Value = m_fValue;
  v14 = vecEnd->x;
  data.m_vStart.m_Value.y = v12 - z;
  v15 = g_pPhysicsQuery;
  data.m_vOrigin.m_Value.y = 0.0;
  memset(&data.m_vStart.m_Value.z, 0, 36);
  data.m_vOrigin.m_Value.z = v14 - x;
  data._vptr_CEffectData = __PAIR64__(LODWORD(y), LODWORD(x));
  data.m_vOrigin.m_Value.x = z;
  LOBYTE(data.m_flMagnitude.m_Value) = 1;
  v16 = (((data.m_vOrigin.m_Value.z * data.m_vOrigin.m_Value.z) + (data.m_vStart.m_Value.x * data.m_vStart.m_Value.x))
       + (data.m_vStart.m_Value.y * data.m_vStart.m_Value.y)) != 0.0;
  pTraceFilter->m_attr.m_nInteractsWith |= 0x19D003uLL;
  BYTE1(data.m_flMagnitude.m_Value) = v16;
  CGamePhysicsQueryInterface::TraceRay(v15, &data, pTraceFilter, &waterTrace);
  data._vptr_CEffectData = *&waterTrace.endpos.x;
  data.m_vOrigin.m_Value.x = waterTrace.endpos.z - 0.1;
  PointContents = CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, &data, 0x1C000u);
  v19 = 0;
  if ( (PointContents & 0x18000) != 0 )
  {
    if ( (*(this->_vptr_IHandleEntity + 137))(this, v18, 0) != 0 )
    {
      m_iAmmoType = info->m_iAmmoType;
      AmmoDef = GetAmmoDef();
      v23 = CAmmoDef::MinSplashSize(AmmoDef, m_iAmmoType);
      v24 = info->m_iAmmoType;
      v25 = v23;
      v26 = GetAmmoDef();
      v27 = CAmmoDef::MaxSplashSize(v26, v24);
      CEffectData::CEffectData(&data);
      if ( waterTrace.endpos.x != data.m_vOrigin.m_Value.x
        || waterTrace.endpos.y != data.m_vOrigin.m_Value.y
        || waterTrace.endpos.z != data.m_vOrigin.m_Value.z )
      {
        data.m_vOrigin = waterTrace.endpos;
      }
      if ( waterTrace.plane.normal.x != data.m_vNormal.m_Value.x
        || waterTrace.plane.normal.y != data.m_vNormal.m_Value.y
        || waterTrace.plane.normal.z != data.m_vNormal.m_Value.z )
      {
        data.m_vNormal.m_Value = waterTrace.plane.normal;
      }
      v28 = (*(*random_valve + 8LL))(random_valve, v25, v27);
      if ( v28 != data.m_flScale.m_Value )
        data.m_flScale.m_Value = v28;
      if ( (waterTrace.contents & 0x10000) != 0 && data.m_fFlags.m_Value != (data.m_fFlags.m_Value | 1) )
        data.m_fFlags.m_Value |= 1u;
      DispatchEffect("gunshotsplash", &data);
    }
    v19 = 1;
    *pVecTracerDest = waterTrace.endpos;
  }
  return v19;
}


// CBaseEntity::GetBeamTraceFilter  (line 3358, @0x0000000001ecb9e0, libserver.so)
CTraceFilter *__fastcall CBaseEntity::GetBeamTraceFilter(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::DispatchTraceAttack  (line 3364, @0x0000000001ed4660, libserver.so)
// callers: CBaseEntity::FireBullets, CBaseEntity::TraceAttackToTriggers, CBeam::BeamDamage, CGameRules::RadiusDamage, CPhysImpact::InputImpact
void __fastcall CBaseEntity::DispatchTraceAttack(
        CBaseEntity *const this,
        const CTakeDamageInfo *const info,
        const Vector *const vecDir,
        trace_t *ptr)
{
  if ( (*(this->_vptr_IHandleEntity + 88))(this) != 0 )
    (*(this->_vptr_IHandleEntity + 135))(this, info, vecDir, ptr);
}


// CBaseEntity::TraceAttack  (line 3377, @0x0000000001ed5f40, libserver.so)  // inlines: SpawnBlood, VectorMultiply, VectorSubtract, operator*, operator-
// calls: AddMultiDamage, UTIL_BloodDrips, CBaseEntity::TraceBleed
// callers: CBreakable::TraceAttack, CPhysicsCannister::TraceAttack, CPropVehicleDriveable::TraceAttack
void __fastcall CBaseEntity::TraceAttack(
        CBaseEntity *const this,
        const CTakeDamageInfo *const info,
        const Vector *const vecDir,
        trace_t *ptr)
{
  int v8; // eax
  int m_flDamage; // ecx
  float z; // [rsp+8h] [rbp-48h]
  float y; // [rsp+Ch] [rbp-44h]
  float x; // [rsp+10h] [rbp-40h]
  float v13; // [rsp+14h] [rbp-3Ch]
  float v14; // [rsp+18h] [rbp-38h]
  float v15; // [rsp+1Ch] [rbp-34h]
  Vector origin; // [rsp+20h] [rbp-30h] BYREF

  if ( this->m_takedamage.m_Value != DamageOptions_t::DAMAGE_NO )
  {
    z = ptr->endpos.z;
    y = ptr->endpos.y;
    x = ptr->endpos.x;
    v13 = vecDir->z;
    v14 = vecDir->y;
    v15 = vecDir->x;
    AddMultiDamage(info, this);
    v8 = (*(this->_vptr_IHandleEntity + 138))(this);
    if ( v8 != -1 )
    {
      m_flDamage = info->m_flDamage;
      origin.x = x - (v15 * 4.0);
      origin.y = y - (v14 * 4.0);
      origin.z = z - (v13 * 4.0);
      UTIL_BloodDrips(&origin, vecDir, v8, m_flDamage);
      CBaseEntity::TraceBleed(this, info->m_flDamage, vecDir, ptr, info->m_bitsDamageType);
    }
  }
}


// CBaseEntity::DoImpactEffect  (line 3399, @0x0000000001ecc400, libserver.so)
// calls: UTIL_ImpactTrace
// callers: CBasePlayer::DoImpactEffect
void __fastcall CBaseEntity::DoImpactEffect(CBaseEntity *const this, trace_t *const tr, int nDamageType)
{
  UTIL_ImpactTrace(tr, nDamageType, 0);
}


// CBaseEntity::ComputeTracerStartPosition  (line 3409, @0x0000000001eccfb0, libserver.so)  // inlines: Init, ToBasePlayer, VectorAdd, VectorMultiply, operator*, operator+, operator=
// calls: CBaseCombatCharacter::GetActiveWeapon, CBaseAnimating::GetAttachment, CBasePlayer::EyeVectors
void __fastcall CBaseEntity::ComputeTracerStartPosition(
        CBaseEntity *const this,
        const Vector *const vecShotSrc,
        Vector *pVecTracerStart)
{
  const CBaseCombatCharacter *v6; // rax
  CBaseCombatWeapon *ActiveWeapon; // rax
  char v8; // al
  CBasePlayer *v9; // rdi
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  vec_t v15; // xmm1_4
  float x; // xmm0_4
  Vector forward; // [rsp+0h] [rbp-40h] BYREF
  Vector right; // [rsp+10h] [rbp-30h] BYREF

  if ( (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) != 0 )
  {
    pVecTracerStart->x = 999.0;
    pVecTracerStart->y = 999.0;
    pVecTracerStart->z = 999.0;
  }
  else if ( (*(this->_vptr_IHandleEntity + 140))(this) != 0 )
  {
    v8 = (*(this->_vptr_IHandleEntity + 140))(this);
    v9 = 0;
    if ( v8 != 0 )
      v9 = this;
    CBasePlayer::EyeVectors(v9, &forward, &right, 0);
    v10 = vecShotSrc->x + 0.0;
    v11 = vecShotSrc->z - 4.0;
    v12 = forward.z * 16.0;
    v13 = 16.0 * forward.x;
    v14 = right.z + right.z;
    pVecTracerStart->y = (forward.y * 16.0) + ((right.y + right.y) + (vecShotSrc->y + 0.0));
    v15 = v12 + (v14 + v11);
    x = right.x;
    pVecTracerStart->z = v15;
    pVecTracerStart->x = v13 + ((x + x) + v10);
  }
  else
  {
    pVecTracerStart->x = vecShotSrc->x;
    pVecTracerStart->y = vecShotSrc->y;
    pVecTracerStart->z = vecShotSrc->z;
    v6 = (*(this->_vptr_IHandleEntity + 147))(this);
    if ( v6 != 0 )
    {
      ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(v6);
      if ( ActiveWeapon != 0 && CBaseAnimating::GetAttachment(ActiveWeapon, 1u, &forward, &right) )
        *pVecTracerStart = forward;
    }
  }
}


// CBaseEntity::MakeTracer  (line 3462, @0x0000000001ecc420, libserver.so)  // inlines: CWeakHandle, FromUntypedHandleUnchecked, StaticInvalidHandle, entindex
// calls: CEntityInstance::GetEntityIndex, UTIL_Tracer
// callers: CBasePlayer::MakeTracer, CBaseCombatWeapon::MakeTracer
void __fastcall CBaseEntity::MakeTracer(
        CBaseEntity *const this,
        const Vector *const vecTracerSrc,
        const trace_t *const tr,
        int iTracerType)
{
  const char *v8; // r14
  int v9; // r12d
  CEntityIndex v10; // eax
  CEntityIndex v11; // eax
  HParticleSystemDefinition p_iParticleID; // [rsp+10h] [rbp-50h] BYREF
  Vector vNewSrc; // [rsp+20h] [rbp-40h] BYREF

  v8 = (*(this->_vptr_IHandleEntity + 133))(this);
  vNewSrc = *vecTracerSrc;
  v9 = (*(this->_vptr_IHandleEntity + 132))(this);
  if ( iTracerType == 1 )
  {
    p_iParticleID.m_pBinding = 0;
    v11.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    UTIL_Tracer(&vNewSrc, &tr->endpos, v11, v9, 0.0, 0, v8, &p_iParticleID);
  }
  else if ( iTracerType == 4 )
  {
    p_iParticleID.m_pBinding = 0;
    v10.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    UTIL_Tracer(&vNewSrc, &tr->endpos, v10, v9, 0.0, 1, v8, &p_iParticleID);
  }
}


// CBaseEntity::GetTracerAttachment  (line 3486, @0x0000000001ecb9f0, libserver.so)
int __fastcall CBaseEntity::GetTracerAttachment(CBaseEntity *const this)
{
  return (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) == 0 ? -1 : 1;
}


// CBaseEntity::BloodColor  (line 3500, @0x0000000001ecba10, libserver.so)
int __fastcall CBaseEntity::BloodColor(CBaseEntity *const this)
{
  return -1;
}


// CBaseEntity::TraceBleed  (line 3507, @0x0000000001ed5ac0, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+
// calls: CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, UTIL_BloodDecalTrace, CBaseEntity::SetMaxHealth
// callers: CBaseEntity::TraceAttack, CBasePlayer::TraceAttack
void __fastcall CBaseEntity::TraceBleed(
        CBaseEntity *const this,
        float flDamage,
        const Vector *const vecDir,
        trace_t *ptr,
        int bitsDamageType)
{
  int v9; // r14d
  trace_t *v10; // rax
  const Vector *v11; // r12
  vec_t *p_x; // rbx
  double v13; // xmm0_8
  double v14; // xmm0_8
  double v15; // xmm0_8
  ConVar *m_pParent; // rax
  float v17; // xmm1_4
  float v18; // xmm4_4
  float v19; // xmm3_4
  int v20; // eax
  int v21; // eax
  int cCount; // [rsp+10h] [rbp-1A0h]
  float v23; // [rsp+14h] [rbp-19Ch]
  float vecTraceDir; // [rsp+20h] [rbp-190h]
  float vecTraceDir_4; // [rsp+24h] [rbp-18Ch]
  float vecTraceDir_8; // [rsp+28h] [rbp-188h]
  float x; // [rsp+2Ch] [rbp-184h]
  float v28; // [rsp+2Ch] [rbp-184h]
  float v29; // [rsp+38h] [rbp-178h]
  float flNoisea; // [rsp+3Ch] [rbp-174h]
  CTraceFilterSimple v32; // [rsp+40h] [rbp-170h] BYREF
  Ray_t v33; // [rsp+80h] [rbp-130h] BYREF
  trace_t Bloodtr; // [rsp+D0h] [rbp-E0h] BYREF

  if ( (*(this->_vptr_IHandleEntity + 138))(this) != -1
    && (*(this->_vptr_IHandleEntity + 138))(this) != 3
    && flDamage != 0.0
    && (bitsDamageType & 0x20000C7) != 0 )
  {
    memset(&Bloodtr.m_ShapeAttributes, 0, 31);
    Bloodtr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&Bloodtr);
    if ( (*(this->_vptr_IHandleEntity + 139))(this) == 0 )
    {
      if ( (*(this->_vptr_IHandleEntity + 156))(this) <= 0 )
        return;
      v21 = (*(this->_vptr_IHandleEntity + 156))(this);
      CBaseEntity::SetMaxHealth(this, v21 - 1);
    }
    if ( flDamage < 10.0 )
    {
      cCount = 1;
      v29 = -0.1;
      flNoisea = 0.1;
    }
    else if ( flDamage >= 25.0 )
    {
      cCount = 4;
      v29 = -0.30000001;
      flNoisea = 0.30000001;
    }
    else
    {
      cCount = 2;
      v29 = -0.2;
      flNoisea = 0.2;
    }
    v23 = -172.0;
    if ( (bitsDamageType & 0x2000000) != 0 )
      v23 = -384.0;
    v9 = 0;
    v10 = ptr;
    v11 = vecDir;
    p_x = &v10->startpos.x;
    do
    {
      x = v11->x;
      vecTraceDir_8 = v11->y;
      vecTraceDir_4 = v11->z;
      v13 = (*(*random_valve + 8LL))(random_valve, v29, flNoisea);
      vecTraceDir = *&v13 - x;
      v14 = (*(*random_valve + 8LL))(random_valve, v29, flNoisea);
      v28 = *&v14 - vecTraceDir_8;
      v15 = (*(*random_valve + 8LL))(random_valve, v29, flNoisea);
      v33.m_IsRay = 1;
      v33.m_Start.w = 0.0;
      m_pParent = phys_traceline_radius.m_pParent;
      memset(&v33.m_Delta.w, 0, 36);
      v17 = *&v15 - vecTraceDir_4;
      v18 = p_x[4];
      *&v15 = m_pParent->m_Value.m_fValue;
      v19 = p_x[5];
      v33.m_Start.x = p_x[3];
      v33.m_flRadius = *&v15;
      v33.m_Start.z = v19;
      v33.m_Start.y = v18;
      v33.m_Delta.x = ((vecTraceDir * v23) + v33.m_Start.x) - v33.m_Start.x;
      v33.m_Delta.y = ((v28 * v23) + v18) - v18;
      v33.m_Delta.z = ((v17 * v23) + v19) - v19;
      v33.m_IsSwept = (((v33.m_Delta.x * v33.m_Delta.x) + (v33.m_Delta.y * v33.m_Delta.y))
                     + (v33.m_Delta.z * v33.m_Delta.z)) != 0.0;
      CTraceFilterSimple::CTraceFilterSimple(&v32, this, 4, 0);
      v32.m_attr.m_nInteractsWith |= 0x5001uLL;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v33, &v32, &Bloodtr);
      if ( Bloodtr.fraction != 1.0 )
      {
        v20 = (*(this->_vptr_IHandleEntity + 138))(this);
        UTIL_BloodDecalTrace(&Bloodtr, v20);
      }
      ++v9;
    }
    while ( cCount > v9 );
  }
}


// CBaseEntity::GetTracerType  (line 3585, @0x0000000001ecba20, libserver.so)
// callers: CBasePlayer::GetTracerType
const char *__fastcall CBaseEntity::GetTracerType(const CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::FixupPrecacheModelName  (line 3602, @0x0000000001ed6060, libserver.so)  // inlines: V_SetExtension<int>, V_strncpy<int>
// calls: LoggingSystem_IsChannelEnabled, V_GetFileExtension, V_stricmp_fast, _V_strncpy, _V_SetExtension, LoggingSystem_Log
// callers: CBaseEntity::PrecacheModel, CBaseModelEntity::SetModel, CBaseModelEntity::SetModelAsync
// strings: "Attempting to precache model, but model name is NULL or empty\n"
bool __fastcall CBaseEntity::FixupPrecacheModelName(const char *pNameIn, char *pNameOut, int nNameOutBytes)
{
  bool result; // al
  __int64 FileExtension; // rax
  __int64 v8; // rcx
  __int64 v9; // r8

  if ( pNameIn != 0 && *pNameIn != 0 )
  {
    FileExtension = V_GetFileExtension();
    if ( FileExtension != 0 && V_stricmp_fast(FileExtension, "mdl") != 0 )
    {
      _V_strncpy(pNameOut, pNameIn, nNameOutBytes, v8, v9);
      return 1;
    }
    else
    {
      _V_strncpy(pNameOut, pNameIn, nNameOutBytes, v8, v9);
      _V_SetExtension(pNameOut, ".vmdl", nNameOutBytes);
      return 1;
    }
  }
  else
  {
    *pNameOut = 0;
    result = LoggingSystem_IsChannelEnabled(LOG_SERVER, 0);
    if ( result )
    {
      LoggingSystem_Log(LOG_SERVER, 0, "Attempting to precache model, but model name is NULL or empty\n");
      return 0;
    }
  }
  return result;
}


// CBaseEntity::PrecacheModelFromKeyValues  (line 3636, @0x0000000001ee4950, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, GetModelNameFromKeyValues, GetValue, GetValue<Vector>, GetValueString, TempString, entindex, operator=, operator[]
// calls: GetModelNameFromKeyValues, CBaseEntity::PrecacheModel, LoggingSystem_IsChannelEnabled, VariantFieldTypeName, Warning, CEntityInstance::GetEntityIndex, LoggingSystem_Log, V_sscanf
// callers: CPointClientUIDialog::Precache, CBaseProp::Precache, CFuncWall::Precache, CFuncVehicleClip::Precache, CFuncIllusionary::Precache, CFuncRotating::Precache, CFuncVPhysicsClip::Precache, CFuncInteractionLayerClip::Precache, CPointCommentaryNode::Precache, CEnvShooter::Precache, CEnvAirStrikeOutdoorEffect::Precache, CEntityBlocker::Precache (32 total)
// strings: "No free conversion of %s variant to Vector right now\n", "Attempting to precache model for entity %d [%s] at %.2f %.2f %.2f, but model name is NULL
// globals: CEntityKeyValues::sm_EmptyVariant
bool __fastcall CBaseEntity::PrecacheModelFromKeyValues(
        const CBaseEntity *const this,
        const CEntityPrecacheContext *pContext,
        const char *pDefaultModelName,
        bool bSuppressWarning)
{
  const CEntityKeyValues *m_pKeyValues; // rbx
  const char *ModelNameFromKeyValues; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v13; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rdx
  CEntityVariant *p_m_value; // rdi
  int16 m_type; // ax
  const CEntityKeyValues *v18; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::lambda::lambda v19; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v20; // si
  __int64 v21; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v22; // rdx
  const char *v23; // rax
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  CEntityVariant *v27; // rax
  const char *m_uint64; // r13
  CEntityIndex v29; // eax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v30; // rdx
  float x; // [rsp+8h] [rbp-58h]
  float y; // [rsp+10h] [rbp-50h]
  float z; // [rsp+18h] [rbp-48h]
  float v34; // [rsp+20h] [rbp-40h] BYREF
  float v35; // [rsp+24h] [rbp-3Ch] BYREF
  float v36; // [rsp+28h] [rbp-38h] BYREF

  m_pKeyValues = pContext->m_pKeyValues;
  ModelNameFromKeyValues = GetModelNameFromKeyValues(pContext->m_pKeyValues, "");
  if ( ModelNameFromKeyValues != 0 && *ModelNameFromKeyValues != 0 )
    goto LABEL_9;
  if ( pDefaultModelName == 0 )
    pDefaultModelName = "";
  if ( *pDefaultModelName != 0 )
  {
    ModelNameFromKeyValues = pDefaultModelName;
LABEL_9:
    CBaseEntity::PrecacheModel(ModelNameFromKeyValues, pContext->m_pManifest);
    return 1;
  }
  if ( bSuppressWarning )
    return 0;
  m_nCount = m_pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_21:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_22;
  }
  m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
  v13 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v13) == -467664362 )
      goto LABEL_18;
LABEL_15:
    if ( m_nCount <= ++v13 )
      goto LABEL_21;
  }
  m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v13] != -467664362 )
    goto LABEL_15;
LABEL_18:
  if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
    v15 = m_pKeyValues->m_keyValues.m_pElements;
  else
    v15 = 0;
  p_m_value = &v15[v13].m_value;
LABEL_22:
  m_type = p_m_value->m_type;
  if ( m_type != 0 )
  {
    if ( m_type == 30 )
    {
      if ( V_sscanf(p_m_value->m_uint64, "%g %g %g", &v34, &v35, &v36) != 3 )
        goto LABEL_23;
      v26 = v36;
      v25 = v34;
      v24 = v35;
    }
    else
    {
      if ( m_type != 39 && m_type != 3 )
      {
        v23 = VariantFieldTypeName(m_type);
        Warning("No free conversion of %s variant to Vector right now\n", v23);
        goto LABEL_23;
      }
      v24 = *(p_m_value->m_uint64 + 4);
      v25 = *p_m_value->m_pszString;
      v26 = *(p_m_value->m_uint64 + 8);
    }
    z = v26;
    y = v24;
    x = v25;
  }
  else
  {
LABEL_23:
    x = vec3_origin.x;
    y = vec3_origin.y;
    z = vec3_origin.z;
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
  {
    v18 = pContext->m_pKeyValues;
    v19 = pContext->m_pKeyValues->m_keyHashes.0;
    if ( *&v19 <= 0 )
    {
LABEL_39:
      v27 = &CEntityKeyValues::sm_EmptyVariant;
    }
    else
    {
      v20 = v18->m_keyHashes.m_nAllocated;
      v21 = 0;
      while ( 1 )
      {
        if ( v20 != 0 )
        {
          v22 = (&v18->m_keyHashes.m_nAllocAllocated + 1);
          if ( v20 > 9 )
            v22 = v18->m_keyHashes.m_pElements;
        }
        else
        {
          v22 = 0;
        }
        if ( v22[v21] == -971301790 )
          break;
        if ( *&v19 <= ++v21 )
          goto LABEL_39;
      }
      if ( v18->m_keyValues.m_nAllocated != 0 )
        v30 = v18->m_keyValues.m_pElements;
      else
        v30 = 0;
      v27 = &v30[v21].m_value;
    }
    m_uint64 = "";
    if ( v27->m_type == 30 )
      m_uint64 = v27->m_uint64;
    v29.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    LoggingSystem_Log(
      LOG_ENTITY_SYSTEM,
      2,
      "Attempting to precache model for entity %d [%s] at %.2f %.2f %.2f, but model name is NULL\n",
      v29.m_Data,
      m_uint64,
      x,
      y,
      z);
  }
  return 0;
}


// CBaseEntity::PrecacheModelComponents  (line 3667, @0x0000000001ece450, libserver.so)  // inlines: CResourceNameGetter<InfoForResourceTypeCModel>, FromUntypedHandle, GetEventName, GetOptionsString, GetResourceName, GetResourceName<512ul>, GetString, InitUntyped, ResourceGetName, ResourceHandleToData<InfoForResourceTypeCModel>, String, V_strncpy<int>, operator int
// calls: _V_strncpy, KeyValues::KeyValues, CModel::KeyValueText, KeyValues::LoadFromBuffer, __cxa_guard_acquire, KeyValues::FindKey, KeyValues::GetFirstSubKey, CKeyValues_Data::Internal_GetString, PrecacheParticleSystem, KeyValues::GetNextKey, KeyValues::~KeyValues, VerifySequenceIndex (23 total)
// strings: "AE_CL_CREATE_PARTICLE_EFFECT"
// globals: `guard variable for'CBaseEntity::PrecacheModelComponents(ResourceBindingBase_t const*,CEntityPrecacheContext const*)::keyParticles, `guard variable for'CBaseEntity::PrecacheModelComponents(ResourceBindingBase_t const*,CEntityPrecacheContext const*)::keyName, CBaseEntity::PrecacheModelComponents(ResourceBindingBase_t const*,CEntityPrecacheContext const*)::keyParticles, CBaseEntity::PrecacheModelComponents(ResourceBindingBase_t const*,CEntityPrecacheContext const*)::keyName
void __fastcall CBaseEntity::PrecacheModelComponents(
        ResourceHandle_t hResource,
        const CEntityPrecacheContext *pContext)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  ResourceNameHandle_t m_Name; // rax
  const char *m_Id; // rsi
  const CModel *m_pData; // r14
  const char *v9; // rax
  KeyValues *Key; // rax
  KeyValues *i; // rax
  const char *String; // rdi
  const KeyValues *v13; // rbx
  KeyValues *v14; // rax
  unsigned int v15; // r15d
  const ISequence *v16; // r14
  int v17; // ebx
  __int64 v18; // rax
  const CUtlString *v19; // r12
  const char *v20; // rax
  const char *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  CModel *pModel; // [rsp+10h] [rbp-350h]
  HSequence hSequence; // [rsp+1Ch] [rbp-344h]
  char token[256]; // [rsp+20h] [rbp-340h] BYREF
  CResourceNameGetter modelName; // [rsp+120h] [rbp-240h] BYREF
  unsigned __int64 v28; // [rsp+328h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  if ( hResource != 0
    && (*(*g_pResourceSystem + 336LL))(g_pResourceSystem, hResource) == 1818520950
    && (*(*g_pResourceHandleUtils + 56LL))(g_pResourceHandleUtils, hResource) == 1818520950 )
  {
    m_Name = hResource->m_Name;
    if ( m_Name != 0 )
    {
      m_Id = "";
      if ( m_Name->m_ResourceNameSymbol.u.m_Id != 0 )
        m_Id = m_Name->m_ResourceNameSymbol.u.m_Id;
      _V_strncpy(&modelName, m_Id, 512, v4, v5);
    }
    else
    {
      _V_strncpy(&modelName, "", 512, v4, v5);
    }
    if ( hResource->m_nRefCount.m_value > 0 )
    {
      m_pData = hResource->m_pData;
      pModel = hResource->m_pData;
      if ( hResource->m_pData != 0 )
      {
        KeyValues::KeyValues(token, "");
        v9 = CModel::KeyValueText(m_pData);
        if ( KeyValues::LoadFromBuffer(token, modelName.m_Buffer, v9, 0, 0, 0, 0) )
        {
          if ( `guard variable for'CBaseEntity::PrecacheModelComponents(ResourceBindingBase_t const*,CEntityPrecacheContext const*)::keyParticles == 0
            && __cxa_guard_acquire(&`guard variable for'CBaseEntity::PrecacheModelComponents(ResourceBindingBase_t const*,CEntityPrecacheContext const*)::keyParticles) != 0 )
          {
            v23 = KeyValuesSystem();
            CBaseEntity::PrecacheModelComponents(ResourceBindingBase_t const*,CEntityPrecacheContext const*)::keyParticles.nIndex = (*(*v23 + 16LL))(v23, "Particles", 1);
            __cxa_guard_release(&`guard variable for'CBaseEntity::PrecacheModelComponents(ResourceBindingBase_t const*,CEntityPrecacheContext const*)::keyParticles);
          }
          if ( `guard variable for'CBaseEntity::PrecacheModelComponents(ResourceBindingBase_t const*,CEntityPrecacheContext const*)::keyName == 0
            && __cxa_guard_acquire(&`guard variable for'CBaseEntity::PrecacheModelComponents(ResourceBindingBase_t const*,CEntityPrecacheContext const*)::keyName) != 0 )
          {
            v22 = KeyValuesSystem();
            CBaseEntity::PrecacheModelComponents(ResourceBindingBase_t const*,CEntityPrecacheContext const*)::keyName.nIndex = (*(*v22 + 16LL))(v22, "name", 1);
            __cxa_guard_release(&`guard variable for'CBaseEntity::PrecacheModelComponents(ResourceBindingBase_t const*,CEntityPrecacheContext const*)::keyName);
          }
          Key = KeyValues::FindKey(
                  token,
                  CBaseEntity::PrecacheModelComponents(ResourceBindingBase_t const*,CEntityPrecacheContext const*)::keyParticles);
          if ( Key != 0 )
          {
            for ( i = KeyValues::GetFirstSubKey(Key); ; i = KeyValues::GetNextKey(v13) )
            {
              v13 = i;
              if ( i == 0 )
                break;
              v14 = KeyValues::FindKey(
                      i,
                      CBaseEntity::PrecacheModelComponents(ResourceBindingBase_t const*,CEntityPrecacheContext const*)::keyName);
              if ( v14 != 0 )
                String = CKeyValues_Data::Internal_GetString(v14, "", 0, 0);
              else
                String = "";
              PrecacheParticleSystem(String, pContext->m_pManifest);
            }
          }
        }
        KeyValues::~KeyValues(token);
        VerifySequenceIndex(pModel);
        for ( hSequence.m_Data = CModel::FirstSequence(pModel).m_Data;
              hSequence.m_Data != -1;
              hSequence.m_Data = CModel::NextSequence(pModel, hSequence).m_Data )
        {
          v15 = 0;
          v16 = CModel::pSeqdesc(pModel, hSequence);
          v17 = (*(v16->_vptr_IBaseSequence + 22))(v16);
          if ( v17 > 0 )
          {
            do
            {
              while ( 1 )
              {
                v18 = (*(v16->_vptr_IBaseSequence + 23))(v16, v15);
                v19 = v18;
                if ( (*(v18 + 12) & 0x10) != 0 )
                {
                  v20 = CUtlString::Get((v18 + 24));
                  if ( V_stricmp_fast(v20, "AE_CL_CREATE_PARTICLE_EFFECT") == 0 )
                    break;
                }
                if ( ++v15 == v17 )
                  goto LABEL_30;
              }
              ++v15;
              v21 = CUtlString::Get(v19 + 2);
              nexttoken(token, v21, 32);
              PrecacheParticleSystem(token, pContext->m_pManifest);
            }
            while ( v15 != v17 );
          }
LABEL_30:
          ;
        }
      }
    }
  }
}


// CBaseEntity::PrecacheModel  (line 3749, @0x0000000001ed6130, libserver.so)
// calls: CBaseEntity::FixupPrecacheModelName, __stack_chk_fail
// callers: CBaseEntity::PrecacheModel, CBaseEntity::PrecacheModelFromKeyValues, CPropData::BuildGameSessionManifest, PrecacheGibsForModel, FileWeaponInfo_t::Precache, CEnvEffectsScript::ParseNewEffect, CGibShooter::Precache, CEnvBeverage::Precache, CItemSoda::Precache, CEnvAirStrikeIndoorEffect::Precache, CFuncDistanceOccluder::Precache, CPropDoorRotatingBreakable::PrecacheBreakables (15 total)
// globals: CBaseEntity::PrecacheModelComponents(ResourceBindingBase_t const*,CEntityPrecacheContext const*)
void __fastcall CBaseEntity::PrecacheModel(const char *name, IEntityResourceManifest *pManifest)
{
  char pNameOut[264]; // [rsp+0h] [rbp-120h] BYREF
  unsigned __int64 v4; // [rsp+108h] [rbp-18h]

  v4 = __readfsqword(0x28u);
  if ( CBaseEntity::FixupPrecacheModelName(name, pNameOut, 260) )
    (*(*pManifest + 8LL))(pManifest, pNameOut, CBaseEntity::PrecacheModelComponents);
}


// CBaseEntity::PrecacheModel  (line 3761, @0x0000000001ed61a0, libserver.so)
// calls: CBaseEntity::PrecacheModel
// callers: CDevtestHierarchy2::Precache, CPropVRTrackedObject::Precache, CPropVRHand::Precache, CPropZipline::Precache, CTriggerVolume::Precache, CWaterBullet::Precache, CDOTA_Item::Precache, CDOTA_Item_Physical::PrecacheContainedItem, CDOTA_Item_Rune::Precache, CDOTA_TempTree::Precache, Script_PrecacheModel, CDOTA_BaseNPC::Precache (24 total)
void __fastcall CBaseEntity::PrecacheModel(const char *name, const CEntityPrecacheContext *pContext)
{
  CBaseEntity::PrecacheModel(name, pContext->m_pManifest);
}


// CBaseEntity::PrecacheModel  (line 3768, @0x0000000001ed61b0, libserver.so)
// calls: CBaseEntity::FixupPrecacheModelName, __stack_chk_fail
// callers: CEconItemDefinition::Precache
// globals: CBaseEntity::PrecacheModelComponents(ResourceBindingBase_t const*,CEntityPrecacheContext const*)
void __fastcall CBaseEntity::PrecacheModel(
        const char *name,
        const CEntityPrecacheContext *pContext,
        SecondaryPrecacheStaticCallback_t callback)
{
  IEntityResourceManifest *m_pManifest; // r12
  char pNameOut[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v6; // [rsp+108h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  m_pManifest = pContext->m_pManifest;
  if ( CBaseEntity::FixupPrecacheModelName(name, pNameOut, 260) )
  {
    (*(*m_pManifest + 8LL))(m_pManifest, pNameOut, CBaseEntity::PrecacheModelComponents);
    (*(*m_pManifest + 8LL))(m_pManifest, pNameOut, callback);
  }
}


// CBaseEntity::GetModel  (line 3786, @0x0000000001ed6240, libserver.so)  // inlines: CWeakHandle, FromUntypedHandleUnchecked, GetComponent<CBodyComponent>, GetModel, GetSkeletonInstance, InitUntypedUnchecked, StaticInvalidHandle, operator CWeakHandle<InfoForResourceTypeCModel>, operator[]
// callers: CDevtestHierarchy::SwitchModelThink, CDevtestHierarchy::StartupTestModeThinkFunction, CDevtestHierarchy::SwitchChildModelThink, CPointEntity::ShouldTransmit, CBaseEntity::FollowEntity, CreatePiecesFromBreakModelList, CBaseAnimating::LockStudioHdr, CModelPointEntity::ShouldTransmit, CBaseAnimating::OnNewModel, CBaseAnimating::GetModelPtr, CBaseModelEntity::SetCollisionBoundsFromCurrentModel, CBaseAnimating::CopyAnimationDataFrom (67 total)
HModel __fastcall CBaseEntity::GetModel(_QWORD *a1, const CBaseEntity *const this)
{
  __int64 v2; // rax
  CEntityIdentity *m_pEntity; // rdx
  CEntityInstance *m_pInstance; // rcx
  __int64 m_nBaseOffset; // rdx
  __int64 v7; // rax

  v2 = 0;
  m_pEntity = this->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    v2 = 0;
    if ( m_nBaseOffset != 0xFFFF )
      v2 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  }
  v7 = (*(**(v2 + 8) + 72LL))(*(v2 + 8));
  if ( v7 != 0 )
    *a1 = *(v7 + 480);
  else
    *a1 = 0;
  return a1;
}


// CBaseEntity::GetModelName  (line 3794, @0x0000000001ed6340, libserver.so)  // inlines: CUtlSymbolLarge, GetComponent<CBodyComponent>, GetModelName, GetSkeletonInstance, operator[]
// callers: CDevtestHierarchy::SwitchChildModelThink, CBaseEntity::DrawDebugTextOverlays, CallbackReport, CEntityDebugGameSystem::DrawMassReport, DebugCallbackEntities, CPropData::ParsePropFromBase, CBaseProp::Activate, CBreakableProp::Break, CBaseProp::Spawn, CGameEntitySystem::FindEntityByModel, CBaseEntity::ApplySessionPersisterValues, CBaseCombatCharacter::GetDeathActivity (52 total)
string_t __fastcall CBaseEntity::GetModelName(_QWORD *a1, const CBaseEntity *const this)
{
  __int64 v2; // rax
  CEntityIdentity *m_pEntity; // rdx
  CEntityInstance *m_pInstance; // rcx
  __int64 m_nBaseOffset; // rdx
  __int64 v7; // rax

  v2 = 0;
  m_pEntity = this->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    v2 = 0;
    if ( m_nBaseOffset != 0xFFFF )
      v2 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  }
  v7 = (*(**(v2 + 8) + 72LL))(*(v2 + 8));
  if ( v7 != 0 )
    *a1 = *(v7 + 488);
  else
    *a1 = 0;
  return a1;
}


// CBaseEntity::GetModelData  (line 3802, @0x0000000001ed63c0, libserver.so)  // inlines: GetComponent<CBodyComponent>, GetModelData, GetSkeletonInstance, operator const RuntimeClass_t*, operator[]
// callers: CBaseAnimating::GetModelPtr, CBaseAnimating::InitPoseParameters, CGenericFlexCycler::Activate, CGenericFlexCycler::GetBoneTransformOverride, CGenericFlexCycler::OscillatePoseParametersThink, CGenericFlexCycler::Spawn
const CModel *__fastcall CBaseEntity::GetModelData(const CBaseEntity *const this)
{
  __int64 v1; // rax
  CEntityIdentity *m_pEntity; // rdx
  CEntityInstance *m_pInstance; // rcx
  __int64 m_nBaseOffset; // rdx
  __int64 v5; // rax
  const CModel **v6; // rax

  v1 = 0;
  m_pEntity = this->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    v1 = 0;
    if ( m_nBaseOffset != 0xFFFF )
      v1 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  }
  v5 = (*(**(v1 + 8) + 72LL))(*(v1 + 8));
  if ( v5 != 0 && (v6 = *(v5 + 480)) != 0 )
    return *v6;
  else
    return 0;
}


// CBaseEntity::GetMoveParent  (line 3810, @0x0000000001ed6420, libserver.so)
// calls: CGameSceneNode::GetOwnerEntity
// callers: CDevtestHierarchy::SwitchParentThink, CTraceFilterSkipNPCsAndPlayers::ShouldHitEntity, UTIL_FindClosestPassableSpace, CBaseEntity::Blocked, CBaseEntity::Use, CBaseEntity::UseEx, CBasePlayer::EyeAngles, CBaseEntity::SetParentAttachmentHelper, CBaseEntity::CalcAbsoluteVelocity, CBaseEntity::ScriptGetMoveParent, CBeam::ShouldTransmit, IsStaticPointEntity (50 total)
CBaseEntity *__fastcall CBaseEntity::GetMoveParent(const CBaseEntity *const this)
{
  CGameSceneNode *m_pParent; // rdi

  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    return CGameSceneNode::GetOwnerEntity(m_pParent);
  else
    return 0;
}


// CBaseEntity::FirstMoveChild  (line 3818, @0x0000000001ed6450, libserver.so)
// calls: CGameSceneNode::GetOwnerEntity
// callers: CModelPointEntity::ShouldTransmit, CDynamicProp::AnimThink, CBaseEntity::InputKillHierarchy, CBaseEntity::PhysicsRelinkChildren, CBaseEntity::ScriptFirstMoveChild, AnyPlayersInHierarchy_R, CBaseEntity::RecalcHasPlayerChildBit, BuildTeleportList_r, CEntityDissolve::Create, CPhysConvert::InputConvertTarget, CPhysicsPushedEntities::SetupAllInHierarchy, UTIL_RemoveHierarchy (16 total)
CBaseEntity *__fastcall CBaseEntity::FirstMoveChild(const CBaseEntity *const this)
{
  CGameSceneNode *m_pChild; // rdi

  m_pChild = this->m_pGameSceneNode->m_pChild;
  if ( m_pChild != 0 )
    return CGameSceneNode::GetOwnerEntity(m_pChild);
  else
    return 0;
}


// CBaseEntity::NextMovePeer  (line 3826, @0x0000000001ed6480, libserver.so)
// calls: CGameSceneNode::GetOwnerEntity
// callers: CDynamicProp::AnimThink, CBaseEntity::InputKillHierarchy, CBaseEntity::PhysicsRelinkChildren, CBaseEntity::ScriptNextMovePeer, AnyPlayersInHierarchy_R, CBaseEntity::RecalcHasPlayerChildBit, BuildTeleportList_r, CEntityDissolve::Create, CPhysicsPushedEntities::SetupAllInHierarchy, UTIL_RemoveHierarchy, CDOTA_PlayerResource::OnHeroReplaced, CDOTA_BaseNPC::ChangeTeam (14 total)
CBaseEntity *__fastcall CBaseEntity::NextMovePeer(const CBaseEntity *const this)
{
  CGameSceneNode *m_pNextSibling; // rdi

  m_pNextSibling = this->m_pGameSceneNode->m_pNextSibling;
  if ( m_pNextSibling != 0 )
    return CGameSceneNode::GetOwnerEntity(m_pNextSibling);
  else
    return 0;
}


// CBaseEntity::StopFollowingEntity  (line 3834, @0x0000000001ed71c0, libserver.so)
// calls: CBaseEntity::IsFollowingEntity, CBaseEntity::SetParent, CBaseEntity::SetMoveType, CBaseEntity::CollisionRulesChanged
// callers: CBaseEntity::FollowEntity, CBaseCombatCharacter::Weapon_Drop, CBaseCombatWeapon::Drop, CEnvEffectsScript::HandleAnimEvent, CEconWearable::UnEquip
void __fastcall CBaseEntity::StopFollowingEntity(CBaseEntity *const this)
{
  CCollisionProperty *m_pCollision; // rdi

  if ( CBaseEntity::IsFollowingEntity(this) )
  {
    CBaseEntity::SetParent(this, 0, 0, 0);
    m_pCollision = this->m_pCollision;
    if ( m_pCollision != 0 )
      (*(m_pCollision->_vptr_ICollideable + 15))(m_pCollision);
    CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    CBaseEntity::CollisionRulesChanged(this);
  }
}


// CBaseEntity::IsFollowingEntity  (line 3852, @0x0000000001ed64b0, libserver.so)
// calls: CBodyComponent::LookupGameSceneNode
// callers: CBaseEntity::GetFollowedEntity, CBaseEntity::StopFollowingEntity, CBaseCombatWeapon::ObjectCaps
bool __fastcall CBaseEntity::IsFollowingEntity(CBaseEntity *const this)
{
  CGameSceneNode *v2; // rax
  bool v3; // dl

  v2 = CBodyComponent::LookupGameSceneNode(this->m_CBodyComponent, 0);
  v3 = 0;
  if ( this->m_MoveType.m_Value == MoveType_t::MOVETYPE_NONE && v2 != 0 )
    return v2->m_nHierarchyType != 0;
  return v3;
}


// CBaseEntity::GetFollowedEntity  (line 3862, @0x0000000001ed64f0, libserver.so)  // inlines: GetMoveParent
// calls: CBaseEntity::IsFollowingEntity, CGameSceneNode::GetOwnerEntity
// callers: CSprite::OnRestore
CBaseEntity *__fastcall CBaseEntity::GetFollowedEntity(CBaseEntity *const this)
{
  CGameSceneNode *m_pParent; // rdi

  if ( CBaseEntity::IsFollowingEntity(this) && (m_pParent = this->m_pGameSceneNode->m_pParent) != 0 )
    return CGameSceneNode::GetOwnerEntity(m_pParent);
  else
    return 0;
}


// CBaseEntity::GetParentAttachmentName  (line 3871, @0x0000000001ed6530, libserver.so)  // inlines: GetHierarchyAttachName
// callers: CConstraintAnchor::Spawn
CUtlStringToken __fastcall CBaseEntity::GetParentAttachmentName(const CBaseEntity *const this)
{
  return this->m_pGameSceneNode->m_hierarchyAttachName.m_Value.m_nHashCode;
}


// CBaseEntity::GetHierarchyAttachType  (line 3878, @0x0000000001ed6550, libserver.so)  // inlines: GetHierarchyAttachType
// callers: CDevtestHierarchy::AttachAndDetachThink, CDevtestHierarchy::CycleAttachmentTypeThink
HierarchyType_t __fastcall CBaseEntity::GetHierarchyAttachType(const CBaseEntity *const this)
{
  return this->m_pGameSceneNode->m_nHierarchyType;
}


// CBaseEntity::GetParentToWorldTransform  (line 3885, @0x0000000001ed6570, libserver.so)  // inlines: GetHierarchyAttachName, GetMoveParent, GetParentAttachmentName
// calls: CGameSceneNode::GetOwnerEntity, CBodyComponent::ComputeBoneOrAttachmentToWorld, SetIdentityMatrix
// callers: UTIL_ParentToWorldSpace, UTIL_WorldToParentSpace
matrix3x4a_t *__fastcall CBaseEntity::GetParentToWorldTransform(
        CBaseEntity *const this,
        matrix3x4a_t *const tempMatrix)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax

  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 && (OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent)) != 0 )
  {
    CBodyComponent::ComputeBoneOrAttachmentToWorld(
      OwnerEntity->m_CBodyComponent,
      this->m_pGameSceneNode->m_hierarchyAttachName.m_Value,
      tempMatrix);
    return tempMatrix;
  }
  else
  {
    SetIdentityMatrix(tempMatrix);
    return tempMatrix;
  }
}


// CBaseEntity::SetParent  (line 3901, @0x0000000001ed65d0, libserver.so)
// calls: CBodyComponent::AttachToParent
// callers: CDevtestHierarchy::AttachAndDetachThink, CDevtestHierarchy::SwitchParentThink, CDevtestHierarchy::ChildDormancyThink, CDevtestHierarchy::SwitchModelThink, CDevtestHierarchy::CycleAttachmentTypeThink, CDevtestHierarchy::SwitchChildModelThink, CBaseEntity::StopFollowingEntity, CBaseEntity::FollowEntity, CBaseAnimating::BecomeRagdollOnClient, CBreakableProp::SetEnableMotionPosition, CBaseEntity::InputClearParent, CBaseVRHandAttachment::OnDetachedFromHand (41 total)
void __fastcall CBaseEntity::SetParent(
        CBaseEntity *const this,
        CBaseEntity *pNewParent,
        CUtlStringToken nBoneOrAttachName,
        const matrix3x4a_t *pOffsetTransform)
{
  if ( pNewParent != 0 )
  {
    if ( (this->m_pEntity->m_flags & 0x200) == 0 )
      CBodyComponent::AttachToParent(
        this->m_CBodyComponent,
        pNewParent->m_CBodyComponent,
        nBoneOrAttachName,
        pOffsetTransform);
  }
  else
  {
    CBodyComponent::AttachToParent(this->m_CBodyComponent, 0, nBoneOrAttachName, pOffsetTransform);
  }
}


// CBaseEntity::FollowEntity  (line 3920, @0x0000000001ed7220, libserver.so)  // inlines: SetLocalAngles, SetLocalOrigin
// calls: CBaseEntity::SetParent, CBaseEntity::SetMoveType, CGameSceneNode::SetLocalOrigin, CGameSceneNode::SetLocalAngles, CBaseEntity::GetModel, CBaseEntity::StopFollowingEntity, _Unwind_Resume
// callers: CDevtestHierarchy2::Spawn, CBaseEntity::Script_FollowEntity, CBaseCombatWeapon::Equip, CGibShooter::InitPointGib, CEnvEffectsScript::SpriteEffectEvent, CBasePlayer::CreateViewModel, COrnamentProp::AttachTo, CSprite::OnRestore, CreateVGuiScreen, CDOTA_Modifier_Attached_Unit::OnCreated, CDOTAWearableItem::Equip, CEconWearable::Equip
void __fastcall CBaseEntity::FollowEntity(CBaseEntity *const this, CBaseEntity *pBaseEntity, bool bBoneMerge)
{
  CUtlStringToken v5; // edx
  CCollisionProperty *m_pCollision; // rdi
  _QWORD v7[4]; // [rsp+0h] [rbp-20h] BYREF

  if ( pBaseEntity != 0 )
  {
    if ( bBoneMerge && (CBaseEntity::GetModel(v7, this), v7[0] != 0) )
      v5.m_nHashCode = 479676646;
    else
      v5.m_nHashCode = 0;
    CBaseEntity::SetParent(this, pBaseEntity, v5, 0);
    CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    m_pCollision = this->m_pCollision;
    if ( m_pCollision != 0 )
      (*(m_pCollision->_vptr_ICollideable + 16))(m_pCollision);
    CGameSceneNode::SetLocalOrigin(this->m_pGameSceneNode, &vec3_origin);
    CGameSceneNode::SetLocalAngles(this->m_pGameSceneNode, &vec3_angle);
  }
  else
  {
    CBaseEntity::StopFollowingEntity(this);
  }
}


// CBaseEntity::Script_FollowEntity  (line 3941, @0x0000000001ed72e0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CBaseEntity::FollowEntity
void __fastcall CBaseEntity::Script_FollowEntity(CBaseEntity *const this, HSCRIPT hEnt, bool bBoneMerge)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v8; // rsi

  if ( hEnt != 0 )
  {
    v6 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v8 = v6(g_pScriptVM, hEnt, Script);
  }
  else
  {
    v8 = 0;
  }
  CBaseEntity::FollowEntity(this, v8, bBoneMerge);
}


// CBaseEntity::SetEffectEntity  (line 3950, @0x0000000001ed6610, libserver.so)  // inlines: CEntityHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, operator!=, operator=
// callers: CBaseAnimating::Dissolve, CBaseAnimating::Ignite, CBaseCombatCharacter::FixupBurningServerRagdoll, NextBotCombatCharacter::Ignite
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseEntity::SetEffectEntity(CBaseEntity *const this, CBaseEntity *pEffectEnt)
{
  uint32 m_Index; // edx
  unsigned __int16 v5; // cx
  int v6; // esi
  CBaseEntity *m_pInstance; // rdi
  int v8; // eax
  CEntitySystem *v9; // r8
  CEntityIdentity *v10; // rcx
  __int64 v11; // rsi
  CEntityIdentity *v12; // rcx
  CBaseEntity *v13; // rcx
  CEntityIdentity *v14; // rax
  CEntityIdentity *v15; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v17; // eax
  __int16 v18; // cx

  m_Index = this->m_hEffectEntity.m_Value.m_Index;
  if ( m_Index == -1 )
  {
    v5 = 0x7FFF;
    v6 = 0x7FFF;
  }
  else
  {
    v5 = this->m_hEffectEntity.m_Value.m_Index & 0x7FFF;
    v6 = v5;
  }
  m_pInstance = 0;
  v8 = (m_Index >> 15 << 15) | v5 & 0x7FFF;
  v9 = g_pEntitySystem;
  if ( (v8 + 2) > 1 )
  {
    v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
    if ( v10 != 0 )
    {
      v11 = v6 & 0x1FF;
      v9 = (8 * v11);
      v12 = &v10[v11];
      if ( v12 != 0 && v8 == v12->m_EHandle.m_Index )
        m_pInstance = v12->m_pInstance;
    }
  }
  if ( pEffectEnt != m_pInstance )
  {
    v13 = 0;
    if ( m_Index + 2 > 1 )
    {
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEffectEntity.m_Value.m_Index) >> 9) & 0x3F];
      if ( v14 != 0 )
      {
        v15 = &v14[this->m_hEffectEntity.m_Value.m_Index & 0x1FF];
        if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
          v13 = v15->m_pInstance;
      }
    }
    if ( pEffectEnt != v13 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 536, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v9);
      if ( pEffectEnt != 0 && (m_pEntity = pEffectEnt->m_pEntity) != 0 )
      {
        v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v18 = 0x7FFF;
        else
          v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hEffectEntity.m_Value.m_Index) = v18 | this->m_hEffectEntity.m_Value.m_Index & 0x8000;
        this->m_hEffectEntity.m_Value.m_Index = (v17 << 15) | this->m_hEffectEntity.m_Value.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hEffectEntity.m_Value.m_Index = -1;
      }
    }
  }
}


// CBaseEntity::GetVelocity  (line 3963, @0x0000000001ed28a0, libserver.so)  // inlines: GetAbsVelocity, QAngleToAngularImpulse, operator=
// calls: CBaseEntity::CalcAbsoluteVelocity, CBaseEntity::VPhysicsGetObject
// callers: CBaseAnimating::GetVelocity
void __fastcall CBaseEntity::GetVelocity(CBaseEntity *const this, Vector *pVelocity, AngularImpulse *pAngVelocity)
{
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  IPhysicsObject *Object; // rax
  IPhysicsObject *v9; // r14
  vec_t v10; // xmm1_4
  double v11; // xmm0_8
  vec_t v12; // xmm1_4
  double v13; // [rsp+0h] [rbp-30h]

  if ( this->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS
    && (Object = CBaseEntity::VPhysicsGetObject(this), v9 = Object, Object != 0) )
  {
    if ( pVelocity != 0 )
    {
      v13 = (*(*Object + 560LL))(Object);
      pVelocity->z = v10;
      *&pVelocity->x = v13;
    }
    if ( pAngVelocity != 0 )
    {
      v11 = (*(*v9 + 592LL))(v9);
      pAngVelocity->z = v12;
      *&pAngVelocity->x = v11;
    }
  }
  else
  {
    if ( pVelocity != 0 )
    {
      if ( (this->m_iEFlags & 0x1000) != 0 )
        CBaseEntity::CalcAbsoluteVelocity(this);
      pVelocity->x = this->m_vecAbsVelocity.m_Value.x;
      pVelocity->y = this->m_vecAbsVelocity.m_Value.y;
      pVelocity->z = this->m_vecAbsVelocity.m_Value.z;
    }
    if ( pAngVelocity != 0 )
    {
      y = this->m_vecAngVelocity.y;
      z = this->m_vecAngVelocity.z;
      pAngVelocity->y = this->m_vecAngVelocity.x;
      pAngVelocity->z = y;
      pAngVelocity->x = z;
    }
  }
}


// CBaseEntity::SetAbsVelocity  (line 3996, @0x0000000001ed67e0, libserver.so)  // inlines: CalcAbsolutePosition, EntityToWorldTransform, GetAbsVelocity, GetElement, GetEncoder, GetMoveParent, GetQuantizedFloatEncoderByIndex, InvalidatePhysicsRecursive, LatchComponent, Load, NetworkComponentChanged, NetworkStateChanged, NodeToWorldTransform, RemoveEFlags, Set, VectorIRotate, VectorSubtract, operator!=, operator=, operator=<Vector>, operator==, operator[]
// calls: CGameSceneNode::GetOwnerEntity, CGameSceneNode::CalcAbsolutePositionWhenDirty, VectorIRotate, CNetworkVelocityVector::Set, CBaseEntity::CalcAbsoluteVelocity
// callers: CBaseEntity::ApplyAbsVelocityImpulse, CBaseCombatWeapon::Equip, CBaseCombatWeapon::Drop, CBaseCombatCharacter::CorpseFade, CBaseEntity::Teleport, CFuncRotating::HurtTouch, CGibShooter::InitPointGib, CEnvEntityMaker::OnEntitiesSpawned, CBaseDoor::Blocked, CShower::Touch, CShower::Spawn, CFish::Update (66 total)
void __fastcall CBaseEntity::SetAbsVelocity(CBaseEntity *const this, const Vector *const vAbsVelocity)
{
  double v4; // xmm0_8
  double v5; // xmm1_8
  double v6; // xmm2_8
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CBaseEntity *v9; // r13
  float z; // xmm0_4
  CGameSceneNode *m_pGameSceneNode; // r12
  const matrix3x4_t *p_m_mNodeToWorld; // rsi
  __int64 v13; // r12
  CNetworkVelocityVector *p_m_vecVelocity; // r13
  CNetworkedQuantizedFloat *p_m_vecY; // r9
  float v16; // xmm0_4
  CNetworkedQuantizedFloat *p_m_vecX; // rdx
  __int64 v18; // rax
  float v19; // xmm1_4
  CNetworkedQuantizedFloat *p_m_vecZ; // rdx
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  signed __int64 v22; // rdx
  CNetworkedQuantizedFloat *v23; // [rsp+8h] [rbp-58h]
  Vector relVelocity; // [rsp+10h] [rbp-50h] BYREF
  Vector vNew; // [rsp+20h] [rbp-40h] BYREF

  *&v4 = LODWORD(this->m_vecAbsVelocity.m_Value.x);
  *&v5 = LODWORD(vAbsVelocity->y);
  *&v6 = LODWORD(vAbsVelocity->z);
  if ( *&v4 != vAbsVelocity->x || *&v5 != this->m_vecAbsVelocity.m_Value.y || *&v6 != this->m_vecAbsVelocity.m_Value.z )
  {
    (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 11))(this->m_pGameSceneNode, 8, v4, v5, v6);
    this->m_iEFlags &= ~0x1000u;
    if ( vAbsVelocity->x != this->m_vecAbsVelocity.m_Value.x
      || vAbsVelocity->y != this->m_vecAbsVelocity.m_Value.y
      || vAbsVelocity->z != this->m_vecAbsVelocity.m_Value.z )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 444, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_vecAbsVelocity.m_Value.x = vAbsVelocity->x;
      this->m_vecAbsVelocity.m_Value.y = vAbsVelocity->y;
      this->m_vecAbsVelocity.m_Value.z = vAbsVelocity->z;
    }
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 && (OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent), v9 = OwnerEntity, OwnerEntity != 0) )
    {
      if ( (OwnerEntity->m_iEFlags & 0x1000) != 0 )
        CBaseEntity::CalcAbsoluteVelocity(OwnerEntity);
      relVelocity.x = vAbsVelocity->x - v9->m_vecAbsVelocity.m_Value.x;
      relVelocity.y = vAbsVelocity->y - v9->m_vecAbsVelocity.m_Value.y;
      z = vAbsVelocity->z;
      m_pGameSceneNode = v9->m_pGameSceneNode;
      relVelocity.z = z - v9->m_vecAbsVelocity.m_Value.z;
      if ( m_pGameSceneNode->m_bDirtyAbsTransform.m_value )
        CGameSceneNode::CalcAbsolutePositionWhenDirty(m_pGameSceneNode);
      p_m_mNodeToWorld = &m_pGameSceneNode->m_mNodeToWorld;
      v13 = 0;
      VectorIRotate(&relVelocity.x, p_m_mNodeToWorld, &vNew.x);
      p_m_vecVelocity = &this->m_vecVelocity;
      p_m_vecY = &this->m_vecVelocity.m_vecY;
      do
      {
        v16 = *(&vNew.x + v13);
        if ( v16 != *(&p_m_vecVelocity->m_Value.x + v13) )
        {
          *(&p_m_vecVelocity->m_Value.x + v13) = v16;
          p_m_vecX = &this->m_vecVelocity.m_vecX;
          if ( v13 != 0 )
          {
            p_m_vecX = p_m_vecY;
            if ( v13 != 1 )
              p_m_vecX = &this->m_vecVelocity.m_vecZ;
          }
          v18 = g_pQuantizedFloatEncoders + 32LL * p_m_vecX->m_nEncoder;
          v19 = *(v18 + 12);
          if ( v16 <= v19 )
            v19 = fmaxf(*(v18 + 8), v16);
          p_m_vecX->m_Value = v19;
          *(&p_m_vecVelocity->m_Value.x + v13) = v19;
          p_m_vecZ = &this->m_vecVelocity.m_vecX;
          if ( v13 != 0 )
          {
            p_m_vecZ = p_m_vecY;
            if ( v13 != 1 )
              p_m_vecZ = &this->m_vecVelocity.m_vecZ;
          }
          m_pStateChanged = this->m_vecVelocity.m_pStateChanged;
          v22 = p_m_vecZ - p_m_vecVelocity;
          if ( m_pStateChanged != 0 )
          {
            v23 = p_m_vecY;
            (*m_pStateChanged->_vptr_INetworkStateChangedRouter)(
              m_pStateChanged,
              &this->m_vecVelocity,
              v22,
              0xFFFFFFFFLL,
              0xFFFFFFFFLL);
            p_m_vecY = v23;
          }
        }
        ++v13;
      }
      while ( v13 != 3 );
    }
    else
    {
      CNetworkVelocityVector::Set(&this->m_vecVelocity, vAbsVelocity);
    }
  }
}


// CBaseEntity::SetLocalVelocity  (line 4030, @0x0000000001ed6ac0, libserver.so)  // inlines: GetElement, GetEncoder, GetQuantizedFloatEncoderByIndex, InvalidatePhysicsRecursive, LatchComponent, NetworkComponentChanged, NetworkStateChanged, Set, operator!=, operator!=<Vector>, operator=<Vector>, operator[]
// callers: CFuncTrackTrain::Spawn, CBaseToggle::LinearMove, CFuncTrackTrain::Stop, CFuncTrackTrain::UpdateTrainVelocity, CFuncTrackTrain::DeadEnd, CFuncTrain::Use, CFuncTrackTrain::Next
void __fastcall CBaseEntity::SetLocalVelocity(CBaseEntity *const this, const Vector *const vVelocity)
{
  __int64 v4; // rbx
  CNetworkVelocityVector *p_m_vecVelocity; // r14
  CNetworkedQuantizedFloat *p_m_vecY; // r9
  float v7; // xmm0_4
  CNetworkedQuantizedFloat *p_m_vecX; // rdx
  __int64 v9; // rax
  float v10; // xmm1_4
  CNetworkedQuantizedFloat *p_m_vecZ; // rdx
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  signed __int64 v13; // rdx
  CNetworkedQuantizedFloat *v14; // [rsp+8h] [rbp-38h]

  if ( vVelocity->x != this->m_vecVelocity.m_Value.x
    || vVelocity->y != this->m_vecVelocity.m_Value.y
    || vVelocity->z != this->m_vecVelocity.m_Value.z )
  {
    v4 = 0;
    p_m_vecVelocity = &this->m_vecVelocity;
    (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 11))(this->m_pGameSceneNode, 8);
    p_m_vecY = &this->m_vecVelocity.m_vecY;
    do
    {
      v7 = *(&vVelocity->x + v4);
      if ( v7 != *(&p_m_vecVelocity->m_Value.x + v4) )
      {
        *(&p_m_vecVelocity->m_Value.x + v4) = v7;
        p_m_vecX = &this->m_vecVelocity.m_vecX;
        if ( v4 != 0 )
        {
          p_m_vecX = p_m_vecY;
          if ( v4 != 1 )
            p_m_vecX = &this->m_vecVelocity.m_vecZ;
        }
        v9 = g_pQuantizedFloatEncoders + 32LL * p_m_vecX->m_nEncoder;
        v10 = *(v9 + 12);
        if ( v7 <= v10 )
          v10 = fmaxf(*(v9 + 8), v7);
        p_m_vecX->m_Value = v10;
        *(&p_m_vecVelocity->m_Value.x + v4) = v10;
        p_m_vecZ = &this->m_vecVelocity.m_vecX;
        if ( v4 != 0 )
        {
          p_m_vecZ = p_m_vecY;
          if ( v4 != 1 )
            p_m_vecZ = &this->m_vecVelocity.m_vecZ;
        }
        m_pStateChanged = this->m_vecVelocity.m_pStateChanged;
        v13 = p_m_vecZ - p_m_vecVelocity;
        if ( m_pStateChanged != 0 )
        {
          v14 = p_m_vecY;
          (*m_pStateChanged->_vptr_INetworkStateChangedRouter)(
            m_pStateChanged,
            &this->m_vecVelocity,
            v13,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
          p_m_vecY = v14;
        }
      }
      ++v4;
    }
    while ( v4 != 3 );
  }
}


// CBaseEntity::SetLocalAngularVelocity  (line 4041, @0x0000000001ed6c20, libserver.so)  // inlines: operator!=, operator=
// callers: CBaseEntity::ApplyLocalAngularVelocityImpulse, Script_SetPhysAngularVelocity, CBaseModelEntity::SUB_StartFadeOut, CBaseEntity::ScriptSetLocalAngularVelocity, CBaseCombatCharacter::CorpseFade, CMomentaryRotButton::Lock, CMomentaryRotButton::InputSetPosition, CFuncRotating::UpdateSpeed, CMomentaryRotButton::ReturnMoveDone, CMomentaryRotButton::UseMoveDone, CMomentaryRotButton::UpdateSelf, CMomentaryRotButton::SetPositionMoveDone (45 total)
void __fastcall CBaseEntity::SetLocalAngularVelocity(CBaseEntity *const this, const QAngle *const vAngVelocity)
{
  if ( vAngVelocity->x != this->m_vecAngVelocity.x
    || vAngVelocity->y != this->m_vecAngVelocity.y
    || vAngVelocity->z != this->m_vecAngVelocity.z )
  {
    this->m_vecAngVelocity = *vAngVelocity;
  }
}


// CBaseEntity::ApplyLocalVelocityImpulse  (line 4052, @0x0000000001ed6c90, libserver.so)  // inlines: GetElement, GetEncoder, GetPartCount, GetQuantizedFloatEncoderByIndex, GetSkeletonInstance, InvalidatePhysicsRecursive, LatchComponent, NetworkComponentChanged, NetworkStateChanged, Set, VPhysicsGetAggregate, VectorAdd, operator!=, operator+, operator=<Vector>
void __fastcall CBaseEntity::ApplyLocalVelocityImpulse(CBaseEntity *const this, const Vector *const vImpulse)
{
  double v4; // xmm0_8
  CBodyComponent::Storage_t m_CBodyComponent; // rax
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rbx
  float v9; // xmm0_4
  vec_t v10; // xmm2_4
  vec_t v11; // xmm1_4
  CNetworkVelocityVector *p_m_vecVelocity; // r13
  bool v13; // zf
  CNetworkedQuantizedFloat *p_m_vecX; // rdx
  __int64 v15; // rax
  float v16; // xmm1_4
  CNetworkedQuantizedFloat *p_m_vecY; // rdx
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  signed __int64 v19; // rdx
  int v20; // r14d
  unsigned int v21; // r12d
  __int64 v22; // rsi
  __int64 v23; // rbx
  vec_t v24; // xmm1_4
  Vector vWorldVel; // [rsp+10h] [rbp-40h] BYREF

  *&v4 = LODWORD(vec3_origin.x);
  if ( vec3_origin.x != vImpulse->x
    || (*&v4 = LODWORD(vec3_origin.y), *&v4 != vImpulse->y)
    || (*&v4 = LODWORD(vec3_origin.z), *&v4 != vImpulse->z) )
  {
    m_CBodyComponent = this->m_CBodyComponent;
    if ( m_CBodyComponent != 0
      && (v6 = (*(m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(m_CBodyComponent->m_pSceneNode, v4)) != 0
      && (v7 = *(v6 + 536)) != 0
      && this->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS )
    {
      v20 = (*(*v7 + 72LL))(v7);
      if ( v20 > 0 )
      {
        v21 = 0;
        do
        {
          v22 = v21++;
          v23 = (*(*v7 + 80LL))(v7, v22);
          *&vWorldVel.x = (*(*v23 + 992LL))(v23, vImpulse);
          vWorldVel.z = v24;
          (*(*v23 + 552LL))(v23, &vWorldVel);
        }
        while ( v21 != v20 );
      }
    }
    else
    {
      v8 = 0;
      (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 11))(this->m_pGameSceneNode, 8, v4);
      v9 = this->m_vecVelocity.m_Value.x + vImpulse->x;
      v10 = this->m_vecVelocity.m_Value.y + vImpulse->y;
      v11 = this->m_vecVelocity.m_Value.z + vImpulse->z;
      p_m_vecVelocity = &this->m_vecVelocity;
      vWorldVel.x = v9;
      v13 = v9 == this->m_vecVelocity.m_Value.x;
      vWorldVel.y = v10;
      vWorldVel.z = v11;
      while ( 1 )
      {
        if ( !v13 )
        {
          *(&p_m_vecVelocity->m_Value.x + v8) = v9;
          p_m_vecX = &this->m_vecVelocity.m_vecX;
          if ( v8 != 0 )
          {
            p_m_vecX = &this->m_vecVelocity.m_vecY;
            if ( v8 != 1 )
              p_m_vecX = &this->m_vecVelocity.m_vecZ;
          }
          v15 = g_pQuantizedFloatEncoders + 32LL * p_m_vecX->m_nEncoder;
          v16 = *(v15 + 12);
          if ( v9 <= v16 )
            v16 = fmaxf(*(v15 + 8), v9);
          p_m_vecX->m_Value = v16;
          *(&p_m_vecVelocity->m_Value.x + v8) = v16;
          p_m_vecY = &this->m_vecVelocity.m_vecX;
          if ( v8 != 0 )
          {
            p_m_vecY = &this->m_vecVelocity.m_vecY;
            if ( v8 != 1 )
              p_m_vecY = &this->m_vecVelocity.m_vecZ;
          }
          m_pStateChanged = this->m_vecVelocity.m_pStateChanged;
          v19 = p_m_vecY - p_m_vecVelocity;
          if ( m_pStateChanged != 0 )
            (*m_pStateChanged->_vptr_INetworkStateChangedRouter)(
              m_pStateChanged,
              &this->m_vecVelocity,
              v19,
              0xFFFFFFFFLL,
              0xFFFFFFFFLL);
        }
        if ( ++v8 == 3 )
          break;
        v9 = *(&vWorldVel.x + v8);
        v13 = v9 == *(&p_m_vecVelocity->m_Value.x + v8);
      }
    }
  }
}


// CBaseEntity::ApplyAbsVelocityImpulse  (line 4081, @0x0000000001ed6ed0, libserver.so)  // inlines: GetAbsVelocity, GetPartCount, GetSkeletonInstance, VPhysicsGetAggregate, VectorAdd, operator!=
// calls: CBaseEntity::SetAbsVelocity, CBaseEntity::CalcAbsoluteVelocity
// callers: CreateGibsFromList, CBaseEntity::OnTakeDamage, CBasePlayer::OnTakeDamage_Alive, CBasePlayer::VelocityPunch, CPlayerMove::CheckMovingGround, CFuncTrackTrain::Blocked, CTriggerPush::Touch, CTriggerPush::StartTouch
void __fastcall CBaseEntity::ApplyAbsVelocityImpulse(CBaseEntity *const this, const Vector *const vImpulse)
{
  double v4; // xmm0_8
  CBodyComponent::Storage_t m_CBodyComponent; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  int v8; // r14d
  unsigned int i; // ebx
  __int64 v10; // rsi
  __int64 v11; // rax
  Vector vResult; // [rsp+0h] [rbp-30h] BYREF

  *&v4 = LODWORD(vec3_origin.x);
  if ( vec3_origin.x != vImpulse->x
    || (*&v4 = LODWORD(vec3_origin.y), *&v4 != vImpulse->y)
    || (*&v4 = LODWORD(vec3_origin.z), *&v4 != vImpulse->z) )
  {
    m_CBodyComponent = this->m_CBodyComponent;
    if ( m_CBodyComponent != 0
      && (v6 = (*(m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(m_CBodyComponent->m_pSceneNode, v4)) != 0
      && (v7 = *(v6 + 536)) != 0
      && this->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS )
    {
      v8 = (*(*v7 + 72LL))(v7);
      if ( v8 > 0 )
      {
        for ( i = 0; i != v8; ++i )
        {
          v10 = i;
          v11 = (*(*v7 + 80LL))(v7, v10);
          (*(*v11 + 552LL))(v11, vImpulse);
        }
      }
    }
    else
    {
      if ( (this->m_iEFlags & 0x1000) != 0 )
        CBaseEntity::CalcAbsoluteVelocity(this);
      vResult.x = this->m_vecAbsVelocity.m_Value.x + vImpulse->x;
      vResult.y = this->m_vecAbsVelocity.m_Value.y + vImpulse->y;
      vResult.z = this->m_vecAbsVelocity.m_Value.z + vImpulse->z;
      CBaseEntity::SetAbsVelocity(this, &vResult);
    }
  }
}


// CBaseEntity::ApplyLocalAngularVelocityImpulse  (line 4107, @0x0000000001ed7030, libserver.so)  // inlines: AngularImpulseToQAngle, GetPartCount, GetSkeletonInstance, VPhysicsGetAggregate, VectorAdd, operator!=
// calls: CBaseEntity::SetLocalAngularVelocity
void __fastcall CBaseEntity::ApplyLocalAngularVelocityImpulse(
        CBaseEntity *const this,
        const AngularImpulse *const angImpulse)
{
  float x; // xmm0_4
  CBodyComponent::Storage_t m_CBodyComponent; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  vec_t v8; // xmm2_4
  vec_t v9; // xmm0_4
  int v10; // r14d
  unsigned int i; // ebx
  __int64 v12; // rsi
  __int64 v13; // rax
  QAngle vecResult; // [rsp+0h] [rbp-30h] BYREF

  x = angImpulse->x;
  if ( angImpulse->x == vec3_origin.x && vec3_origin.y == angImpulse->y && vec3_origin.z == angImpulse->z )
    return;
  m_CBodyComponent = this->m_CBodyComponent;
  if ( m_CBodyComponent == 0 )
  {
LABEL_7:
    v8 = angImpulse->y + this->m_vecAngVelocity.x;
    v9 = x + this->m_vecAngVelocity.z;
    vecResult.y = angImpulse->z + this->m_vecAngVelocity.y;
    vecResult.x = v8;
    vecResult.z = v9;
    CBaseEntity::SetLocalAngularVelocity(this, &vecResult);
    return;
  }
  v6 = (*(m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(m_CBodyComponent->m_pSceneNode);
  if ( v6 == 0 || (v7 = *(v6 + 536)) == 0 || this->m_MoveType.m_Value != MoveType_t::MOVETYPE_VPHYSICS )
  {
    x = angImpulse->x;
    goto LABEL_7;
  }
  v10 = (*(*v7 + 72LL))(v7);
  if ( v10 > 0 )
  {
    for ( i = 0; i != v10; ++i )
    {
      v12 = i;
      v13 = (*(*v7 + 80LL))(v7, v12);
      (*(*v13 + 672LL))(v13, angImpulse, 1);
    }
  }
}


// CBaseEntity::ShouldSavePhysics  (line 4132, @0x0000000001ecba30, libserver.so)
bool __fastcall CBaseEntity::ShouldSavePhysics(CBaseEntity *const this)
{
  return 1;
}


// CBaseEntity::OnSave  (line 4143, @0x0000000001ecc630, libserver.so)
// calls: CBaseEntity::CalcAbsoluteVelocity
// callers: CRagdollProp::OnSave
void __fastcall CBaseEntity::OnSave(CBaseEntity *const this)
{
  CBaseEntity::CalcAbsoluteVelocity(this);
}


// CBaseEntity::Save  (line 4160, @0x0000000001ecc640, libserver.so)
// calls: CBaseEntity::SaveDataDescBlock
// callers: CDebugHistory::Save, CBasePlayer::Save
int __fastcall CBaseEntity::Save(CBaseEntity *const this, ISave *const save)
{
  datamap_t *v4; // rax

  v4 = (*(this->_vptr_IHandleEntity + 34))(this);
  return CBaseEntity::SaveDataDescBlock(this, save, v4);
}


// CBaseEntity::CollisionRulesChanged  (line 4169, @0x0000000001ed7170, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::CollisionRulesChanged
// callers: CBaseEntity::StopFollowingEntity, CBaseEntity::OnRestore, CBaseEntity::SetOwnerEntity, CBaseEntity::Restore, CBaseEntity::SetMoveType, CBaseEntity::Teleport, CCollisionProperty::EnableAllCollisions, CCollisionProperty::DisableAllCollisions, CCollisionProperty::EnableSolidCollisions, CCollisionProperty::DisableSolidCollisions, CCollisionProperty::EnableInteractsAsMask, CCollisionProperty::EnableInteractsWithMask (29 total)
void __fastcall CBaseEntity::CollisionRulesChanged(CBaseEntity *const this)
{
  CBodyComponent::Storage_t m_CBodyComponent; // rax
  CSkeletonInstance *v3; // r12
  const RnCollisionAttr_t *v4; // rax

  m_CBodyComponent = this->m_CBodyComponent;
  if ( m_CBodyComponent != 0 )
  {
    v3 = (*(m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(m_CBodyComponent->m_pSceneNode);
    if ( v3 != 0 )
    {
      v4 = (*(this->m_pCollision->_vptr_ICollideable + 20))(this->m_pCollision);
      CSkeletonInstance::CollisionRulesChanged(v3, v4);
    }
  }
}


// CBaseEntity::GetWaterType  (line 4200, @0x0000000001ed7350, libserver.so)
// callers: CBasePlayer::UpdateUnderwaterState, CGameMovement::CheckJumpButton, CBaseEntity::PhysicsCheckWaterTransition
uint64 __fastcall CBaseEntity::GetWaterType(const CBaseEntity *const this)
{
  uint64 result; // rax

  result = (this->m_nWaterType << 15);
  if ( (this->m_nWaterType & 2) != 0 )
    return (this->m_nWaterType << 15) | 0x10000LL;
  return result;
}


// CBaseEntity::SetWaterType  (line 4212, @0x0000000001ed7380, libserver.so)
// callers: CBaseEntity::OnEntityEvent, CGameMovement::CheckWater, CBaseEntity::UpdateWaterState
void __fastcall CBaseEntity::SetWaterType(CBaseEntity *const this, uint64 nType)
{
  this->m_nWaterType = (nType & 0x8000) != 0;
  if ( (nType & 0x10000) != 0 )
    this->m_nWaterType |= 2u;
}


// CBaseEntity::ComputeLatchTickInterval  (line 4222, @0x0000000001ed73b0, libserver.so)  // inlines: GetBool, GetInt, IsSimulatingOnAlternateTicks
int __fastcall CBaseEntity::ComputeLatchTickInterval(
        const CBaseEntity *const this,
        InterpolatedVarPhase_t ivPhase,
        EInterpolatedVarFlagBits eVarTypeBit)
{
  int result; // eax

  if ( eVarTypeBit == EInterpolatedVarFlagBits::LATCH_CLIENT_AUTHORITATIVE_BIT )
    return 1;
  if ( gpGlobals->maxClients == 1 && sv_alternateticks.m_pParent->m_Value.m_nValue != 0 )
    result = 2;
  else
    result = 1;
  if ( eVarTypeBit == EInterpolatedVarFlagBits::LATCH_ANIMATION_BIT )
  {
    if ( this->m_bAnimatedEveryTick.m_Value )
      return result;
    return ((0.1 / gpGlobals->interval_per_tick) + 0.5);
  }
  if ( eVarTypeBit != EInterpolatedVarFlagBits::LATCH_SIMULATION_BIT || !this->m_bSimulatedEveryTick.m_Value )
    return ((0.1 / gpGlobals->interval_per_tick) + 0.5);
  return result;
}


// CBaseEntity::SetAnimTime  (line 4261, @0x0000000001ed7440, libserver.so)  // inlines: IsPreventingSetAnimRunAnimEvents, NetworkStateChanged, Set, operator=<float>
// calls: CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::DispatchAnimEvents
// callers: CBaseAnimatingController::ResetClientsideFrame, CBaseAnimating::StudioFrameAdvance, CBaseAnimating::StudioFrameAdvanceManual, CBaseAnimatingController::SetSequence, CBaseAnimating::CopyAnimationDataFrom, CDynamicProp::FinishSetSequence, CBaseProp::Spawn, CGameSceneNode::PerformPostInvalidatePhysicsWork, CGameSceneNode::EndHierarchicalAttachment, CGameSceneNode::StartHierarchicalAttachment, CBaseEntity::Activate, CBasePlayerAnimState::RestartMainSequence (23 total)
__int64 __fastcall CBaseEntity::SetAnimTime(CBaseEntity *const this, float a2, float at, SetAnimTimeFlags_t nFlags)
{
  float v4; // xmm2_4
  CBaseAnimating *v7; // rax
  CBaseAnimating *v8; // r12
  CBaseAnimatingController *BaseAnimatingController; // rax
  char v10; // al
  float m_Value; // xmm0_4
  float atb; // [rsp+Ch] [rbp-14h]
  float atc; // [rsp+Ch] [rbp-14h]

  v4 = a2;
  if ( a2 == this->m_flAnimTime.m_Value )
    return 0;
  if ( (nFlags & 1) == 0 && (this->m_pEntity->m_flags & 0x402) == 0 && !CBaseEntity::s_bPreventingSetAnimRunAnimEvents )
  {
    v7 = (*(this->_vptr_IHandleEntity + 43))(this);
    v4 = a2;
    v8 = v7;
    if ( v7 != 0
      && (BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(v7),
          v10 = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 13))(
                  BaseAnimatingController,
                  0,
                  this->m_flAnimTime.m_Value,
                  a2),
          v4 = a2,
          v10 != 0) )
    {
      if ( a2 != this->m_flAnimTime.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 368, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v4 = a2;
        this->m_flAnimTime.m_Value = a2;
      }
      atc = v4;
      CBaseAnimating::DispatchAnimEvents(v8, v8);
      m_Value = this->m_flAnimTime.m_Value;
      v4 = atc;
    }
    else
    {
      m_Value = this->m_flAnimTime.m_Value;
    }
    if ( m_Value == v4 )
      return 1;
  }
  atb = v4;
  (*(this->_vptr_IHandleEntity + 22))(this, 368, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_flAnimTime.m_Value = atb;
  return 1;
}


// CBaseEntity::SetSimulationTime  (line 4312, @0x0000000001ed75c0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CGameSceneNode::SetLocalAngles, CGameSceneNode::SetLocalScale, CSkeletonInstance::SetBoneTransformOverride, CGameSceneNode::SetLocalOrigin, CGameSceneNode::SetNodeToParentInternal, CGameSceneNode::SetAbsOrigin, CGameSceneNode::SetAbsAngles, CGameSceneNode::SetAbsScale, CGameSceneNode::PerformInvalidatePhysicsRecursive, CSkeletonInstance::PerformInvalidatePhysicsRecursive, CSkeletonInstance::EnableJiggleBones, CBaseEntity::Activate (16 total)
void __fastcall CBaseEntity::SetSimulationTime(CBaseEntity *const this, double a2, double st)
{
  float sta; // [rsp+Ch] [rbp-14h]

  if ( gpGlobals->maxClients == 1 && this->m_bSimulatedEveryTick.m_Value )
    a2 = 0.0;
  if ( *&a2 != this->m_flSimulationTime.m_Value )
  {
    sta = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 372, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, st);
    this->m_flSimulationTime.m_Value = sta;
  }
}


// CBaseEntity::SetLifeState  (line 4329, @0x0000000001ed7640, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<LifeState_t>, operator==<LifeState_t>
// callers: CBaseCombatCharacter::Event_Gibbed, CBaseEntity::Event_Killed, CBaseEntity::EntTakeDamageS1PortHack, CBasePlayer::SharedSpawn, CBaseCombatCharacter::Event_Killed, CFish::Event_Killed, CBreakable::Event_Killed, CBasePlayer::StartObserverMode, CBasePlayer::Event_Killed, CBasePlayer::PlayerDeathThink, CC_RespawnPlayer, CFuncTankTrain::Event_Killed (23 total)
void __fastcall CBaseEntity::SetLifeState(CBaseEntity *const this, LifeState_t lifeState)
{
  unsigned __int8 m_Value; // al
  unsigned __int8 v3; // r12

  m_Value = this->m_lifeState.m_Value;
  v3 = lifeState;
  if ( m_Value != lifeState && m_Value != lifeState )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 336, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_lifeState.m_Value = v3;
  }
}


// CBaseEntity::GetLifeState  (line 4346, @0x0000000001ed7690, libserver.so)
// callers: CBaseCombatCharacter::OnTakeDamage, CBaseCombatCharacter::SwitchToNextBestWeapon, CBaseCombatCharacter::ReactToDamage, CBaseCombatCharacter::VPhysicsShadowCollision, Host_Say, CFish::Update, PerformObstaclePushaway, CPlayerInfo::IsDead, CBasePlayer::IsValidObserverTarget, CBasePlayer::GetIdealActivityForPlayerAnim, CBasePlayer::PreThink, CBasePlayer::PlayerDeathThink (26 total)
LifeState_t __fastcall CBaseEntity::GetLifeState(const CBaseEntity *const this)
{
  return this->m_lifeState.m_Value;
}


// CBaseEntity::SetDamageOptions  (line 4362, @0x0000000001ee6400, libserver.so)  // inlines: Attribute_SetIntValue, Attribute_SetValue<int>, CThreadFastMutex, CUtlIntrusiveList, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, EntSetDamageOptions, GetEntityAttributes, NetworkStateChanged, Set, SetIntValue, SetValue<int>, operator=<DamageOptions_t>
// calls: CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod, CUtlTSOpenHashConcurrencyModelLockFree>::Insert, operator new
// callers: CBreakableProp::BreakablePropTouch, CBreakableProp::CBreakableProp, CBreakableProp::OnTakeDamage, CBreakableProp::Break, CBaseProp::Spawn, CBreakableProp::Spawn, CBaseCombatCharacter::Event_Gibbed, CBaseEntity::Event_Killed, CBasePlayer::SharedSpawn, CBaseCombatWeapon::CBaseCombatWeapon, CBaseButton::Spawn, CRotButton::Spawn (48 total)
// globals: g_EntAttrDamageOptionsID
void __fastcall CBaseEntity::SetDamageOptions(CBaseEntity *const this, DamageOptions_t opt)
{
  CEntityIdentity *m_pEntity; // rbx
  unsigned int v5; // edx
  uint32 m_nHashCode; // r12d
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *m_pAttributes; // rdi
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v8; // rax
  unsigned int v9; // [rsp+Ch] [rbp-14h]

  if ( this->m_takedamage.m_Value != opt )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 337, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_takedamage.m_Value = opt;
  }
  m_pEntity = this->m_pEntity;
  v5 = opt;
  m_nHashCode = g_EntAttrDamageOptionsID.m_nHashCode;
  m_pAttributes = m_pEntity->m_pAttributes;
  if ( m_pAttributes == 0 )
  {
    v9 = v5;
    v8 = operator new(0x38u);
    v5 = v9;
    v8->m_hashTable.m_tables.m_pHead = 0;
    m_pAttributes = v8;
    v8->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
    v8->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
    v8->m_hashTable.m_nNumKeysDeleted = 0;
    v8->m_hashTable.m_nCurrentTableSize = 64;
    v8->m_hashTable.m_nDeletedKeyValue = -1;
    v8->m_hashTable.m_nEmptyKeyValue = -2;
    v8->m_pParentTable = 0;
    m_pEntity->m_pAttributes = v8;
  }
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::Insert(
    &m_pAttributes->m_hashTable,
    m_nHashCode & 0x7FFFFFF,
    v5,
    0);
}


// CBaseEntity::GetDamageOptions  (line 4369, @0x0000000001ed76a0, libserver.so)
// callers: CTraceFilterGroundEntities::ShouldHitEntity, CTraceFilterWalkableEntities::ShouldHitEntity, CBaseProp::Activate, CBaseProp::DrawEntityDebugOverlays, CBreakableProp::OnTakeDamage, CHurtableEntitiesEnum::EnumElement, CBaseCombatCharacter::OnTakeDamage_Dead, CBaseEntity::ReactToDamage, CBaseEntity::OnTakeDamage, CBaseCombatCharacter::OnTakeDamage, CBaseEntity::TakeHealth, CBaseCombatCharacter::TakeHealth (36 total)
DamageOptions_t __fastcall CBaseEntity::GetDamageOptions(const CBaseEntity *const this)
{
  return this->m_takedamage.m_Value;
}


// CBaseEntity::IsSimulatingOnAlternateTicks  (line 4386, @0x0000000001ed76b0, libserver.so)  // inlines: GetBool, GetInt
// callers: CSource2Server::GameFrame, CBaseEntity::StepSimulationThink, CBasePlayer::PhysicsSimulate, UTIL_GetSimulationInterval
bool __cdecl CBaseEntity::IsSimulatingOnAlternateTicks()
{
  bool result; // al

  result = 0;
  if ( gpGlobals->maxClients == 1 )
    return sv_alternateticks.m_pParent->m_Value.m_nValue != 0;
  return result;
}


// CBaseEntity::PhysicsTouchTriggers  (line 4409, @0x0000000001ed76f0, libserver.so)  // inlines: IsSolid
// calls: CCollisionProperty::IsTriggerCollisionGroup, CBaseEntity::SetCheckUntouch
// callers: CDynamicProp::AnimThink, CBaseEntity::OnRestore, CBaseEntity::PhysicsRelinkChildren, CMoveHelperServer::ProcessImpacts, CRagdollProp::VPhysicsUpdate, CPhysicsPushedEntities::FinishPushers, CPhysicsPushedEntities::FinishPush, CBaseEntity::PhysicsPushEntity, CBaseEntity::PhysicsRigidChild, CBaseEntity::PhysicsStepRunTimestep, CBaseEntity::PhysicsStep, CRagdollProp::UpdateNetworkDataFromVPhysics (27 total)
void __fastcall CBaseEntity::PhysicsTouchTriggers(CBaseEntity *const this, const Vector *pPrevAbsOrigin)
{
  CCollisionProperty *m_pCollision; // rdi
  bool IsTriggerCollisionGroup; // al
  CCollisionProperty *v5; // r12
  bool v6; // r13

  if ( (*(this->_vptr_IHandleEntity + 143))(this, pPrevAbsOrigin) == 0 )
  {
    m_pCollision = this->m_pCollision;
    if ( m_pCollision != 0 )
    {
      if ( (IsTriggerCollisionGroup = CCollisionProperty::IsTriggerCollisionGroup(m_pCollision),
            v5 = this->m_pCollision,
            v6 = IsTriggerCollisionGroup,
            v5 != 0)
        && ((*((*(v5->_vptr_ICollideable + 13))(this->m_pCollision) + 31) & 1) != 0
         || (*((*(v5->_vptr_ICollideable + 13))(v5) + 31) & 2) != 0)
        && v5->m_nSolidType.m_Value != SolidType_t::SOLID_NONE
        || v6 )
      {
        CBaseEntity::SetCheckUntouch(this, 1);
      }
    }
  }
}


// CBaseEntity::ModifyOrAppendCriteria  (line 4438, @0x0000000001ecc7a0, libserver.so)  // inlines: GetBool, GetClassNameAsCStr, GetClassname, GetEntityNameAsCStr, GetInstance, GetInt, GlobalEntity_GetStateByIndex, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, String
// calls: RandomInt, UTIL_VarArgs, CResponseCriteriaSet::AppendCriteria, CBaseEntity::GetHealth, GlobalEntity_GetName, GlobalEntity_GetState, GlobalEntity_GetNumGlobals, CBaseEntity::AppendContextToCriteria
// callers: CAI_ExpresserHost<CBasePlayer>::ModifyOrAppendCriteria, CBaseMultiplayerPlayer::ModifyOrAppendCriteria, CRagdollProp::ModifyOrAppendCriteria, CDOTA_BaseNPC::ModifyOrAppendCriteria, CDOTA_Ability_Nevermore_Shadowraze::ModifyOrAppendCriteria, CDOTA_Ability_Juggernaut_Omnislash::ModifyOrAppendCriteria, CDOTA_Ability_Chen_HolyPersuasion::ModifyOrAppendCriteria, CDOTA_Ability_Ogre_Magi_Fireblast::ModifyOrAppendCriteria, CDOTA_Ability_Oracle_FatesEdict::ModifyOrAppendCriteria, CDOTA_Ability_Oracle_PurifyingFlames::ModifyOrAppendCriteria, CAI_ExpresserHost<CFlexExpresserShim>::ModifyOrAppendCriteria
// strings: "randomnum"
void __fastcall CBaseEntity::ModifyOrAppendCriteria(CBaseEntity *const this, CResponseCriteriaSet *const set)
{
  int v4; // eax
  char *v5; // rax
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdx
  CEntityIdentity *v8; // rax
  const char *v9; // rdx
  int Health; // eax
  char *v11; // rax
  int v12; // eax
  double v13; // xmm0_8
  int v14; // ebx
  int v15; // ebx
  char *v16; // rax
  const char *Name; // rax
  int v18; // edi
  const char *v19; // r12
  GLOBALESTATE State; // al
  char *v21; // rax
  CEntityIdentity *v22; // rax

  v4 = RandomInt(0, 100);
  v5 = UTIL_VarArgs("%d", v4);
  CResponseCriteriaSet::AppendCriteria(set, "randomnum", v5, 1.0);
  m_pEntity = this->m_pEntity;
  m_pAsString = "";
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  CResponseCriteriaSet::AppendCriteria(set, "classname", m_pAsString, 1.0);
  v8 = this->m_pEntity;
  v9 = "";
  if ( v8->m_name.u.m_Id != 0 )
    v9 = v8->m_name.u.m_pAsString;
  CResponseCriteriaSet::AppendCriteria(set, "name", v9, 1.0);
  Health = CBaseEntity::GetHealth(this);
  v11 = UTIL_VarArgs("%i", Health);
  CResponseCriteriaSet::AppendCriteria(set, "health", v11, 1.0);
  v12 = (*(this->_vptr_IHandleEntity + 156))(this);
  v13 = 0.0;
  if ( v12 > 0 )
  {
    v14 = CBaseEntity::GetHealth(this);
    v13 = (v14 / (*(this->_vptr_IHandleEntity + 156))(this));
  }
  v15 = 0;
  v16 = UTIL_VarArgs("%.3f", v13);
  CResponseCriteriaSet::AppendCriteria(set, "healthfrac", v16, 1.0);
  while ( v15 < GlobalEntity_GetNumGlobals() )
  {
    Name = GlobalEntity_GetName(v15);
    v18 = v15++;
    v19 = Name;
    State = GlobalEntity_GetState(v18);
    v21 = UTIL_VarArgs("%i", State);
    CResponseCriteriaSet::AppendCriteria(set, v19, v21, 1.0);
  }
  CResponseCriteriaSet::AppendCriteria(set, "map", gpGlobals->mapname, 1.0);
  CBaseEntity::AppendContextToCriteria(this, set, "");
  if ( hl2_episodic.m_pParent->m_Value.m_nValue != 0 )
    CResponseCriteriaSet::AppendCriteria(set, "episodic", "1", 1.0);
  v22 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[0];
  if ( v22 != 0 && (v22->m_EHandle.m_Index & 0x7FFF) == 0 && v22->m_pInstance != 0 )
    CBaseEntity::AppendContextToCriteria(v22->m_pInstance, set, "world");
}


// vprof_MakeNameFromTwoStrings  (line 4503, @0x0000000001ed7780, libserver.so)  // inlines: V_strcat_safe<128ul>, V_strcpy_safe<128ul>
// calls: _V_strncpy, _V_strncat, CUtlSymbolTable::AddString, CUtlSymbolTable::String, __cxa_guard_acquire, CUtlSymbolTable::CUtlSymbolTable, __cxa_guard_release, __cxa_atexit, __stack_chk_fail, __cxa_guard_abort, _Unwind_Resume
// callers: GetThinkVprofName
// strings: "(null)"
// globals: `guard variable for'vprof_MakeNameFromTwoStrings(char const*,char const*)::s_nametable, vprof_MakeNameFromTwoStrings(char const*,char const*)::s_nametable, __dso_handle
const char *__fastcall vprof_MakeNameFromTwoStrings(const char *const pa, const char *const pb)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  const char *v6; // rsi
  const char *v7; // rsi
  CUtlSymbol id; // [rsp+0h] [rbp-B0h] BYREF
  char buf[136]; // [rsp+10h] [rbp-A0h] BYREF
  unsigned __int64 v11; // [rsp+98h] [rbp-18h]

  v11 = __readfsqword(0x28u);
  if ( `guard variable for'vprof_MakeNameFromTwoStrings(char const*,char const*)::s_nametable == 0
    && __cxa_guard_acquire(&`guard variable for'vprof_MakeNameFromTwoStrings(char const*,char const*)::s_nametable) != 0 )
  {
    CUtlSymbolTable::CUtlSymbolTable(&vprof_MakeNameFromTwoStrings(char const*,char const*)::s_nametable, 0, 192, 0);
    __cxa_guard_release(&`guard variable for'vprof_MakeNameFromTwoStrings(char const*,char const*)::s_nametable);
    __cxa_atexit(
      CUtlSymbolTable::~CUtlSymbolTable,
      &vprof_MakeNameFromTwoStrings(char const*,char const*)::s_nametable,
      &_dso_handle);
  }
  v6 = "";
  if ( pa != 0 )
    v6 = pa;
  _V_strncpy(buf, v6, 128, v2, v3);
  v7 = "(null)";
  if ( pb != 0 )
    v7 = pb;
  _V_strncat(buf, v7, 128, 0xFFFFFFFFLL);
  CUtlSymbolTable::AddString(&vprof_MakeNameFromTwoStrings(char const*,char const*)::s_nametable, buf);
  return CUtlSymbolTable::String(&vprof_MakeNameFromTwoStrings(char const*,char const*)::s_nametable, &id);
}


// CAnimTimeSerializer::Serialize  (line 4521, @0x0000000001eecd60, libserver.so)
// calls: CFloatToTickSerializerHelper::Serialize
NetworkFieldResult_t __fastcall CAnimTimeSerializer::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  return CFloatToTickSerializerHelper::Serialize(info->m_pFieldData, info->m_pStructBase, pOut);
}


// CAnimTimeSerializer::Unserialize  (line 4538, @0x0000000001eecd20, libserver.so)
// calls: CFloatToTickSerializerHelper::Unserialize
NetworkFieldResult_t __fastcall CAnimTimeSerializer::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  return CFloatToTickSerializerHelper::Unserialize(info->m_pFieldData, info->m_pStructBase, pIn);
}


// InitCAnimTimeSerializerFieldSerializer  (line 4547, @0x0000000001ecba40, libserver.so)
// strings: "animTimeSerializer"
// globals: CValidatingNetworkFieldSerializer<CAnimTimeSerializer>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*), CGameNetworkFieldSerializerBase<2,1>::GetSerializerName(void), CAnimTimeSerializer::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CGameNetworkFieldSerializerBase<2,1>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<2,1>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<2,1>::GetDataSize(NetworkFieldInfo_t const&), CAnimTimeSerializer::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCAnimTimeSerializerFieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "animTimeSerializer",
    mode,
    2,
    1,
    CAnimTimeSerializer::Serialize,
    CAnimTimeSerializer::Unserialize,
    CGameNetworkFieldSerializerBase<2,1>::GetDataSize,
    CGameNetworkFieldSerializerBase<2,1>::ParseData,
    CGameNetworkFieldSerializerBase<2,1>::GetEntityReportDescString,
    CGameNetworkFieldSerializerBase<2,1>::GetSerializerName,
    CAnimTimeSerializer::Serialize,
    CValidatingNetworkFieldSerializer<CAnimTimeSerializer>::ValidatingUnserialize);
}


// CSimulationTimeSerializer::Serialize  (line 4555, @0x0000000001eecd40, libserver.so)
// calls: CFloatToTickSerializerHelper::Serialize
NetworkFieldResult_t __fastcall CSimulationTimeSerializer::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  return CFloatToTickSerializerHelper::Serialize(info->m_pFieldData, info->m_pStructBase, pOut);
}


// CSimulationTimeSerializer::Unserialize  (line 4562, @0x0000000001eecce0, libserver.so)
// calls: CFloatToTickSerializerHelper::Unserialize
NetworkFieldResult_t __fastcall CSimulationTimeSerializer::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  return CFloatToTickSerializerHelper::Unserialize(info->m_pFieldData, info->m_pStructBase, pIn);
}


// InitCSimulationTimeSerializerFieldSerializer  (line 4571, @0x0000000001ecbad0, libserver.so)
// strings: "simulationTimeSerializer"
// globals: CValidatingNetworkFieldSerializer<CSimulationTimeSerializer>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*), CGameNetworkFieldSerializerBase<2,1>::GetSerializerName(void), CSimulationTimeSerializer::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CGameNetworkFieldSerializerBase<2,1>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<2,1>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<2,1>::GetDataSize(NetworkFieldInfo_t const&), CSimulationTimeSerializer::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCSimulationTimeSerializerFieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "simulationTimeSerializer",
    mode,
    2,
    1,
    CSimulationTimeSerializer::Serialize,
    CSimulationTimeSerializer::Unserialize,
    CGameNetworkFieldSerializerBase<2,1>::GetDataSize,
    CGameNetworkFieldSerializerBase<2,1>::ParseData,
    CGameNetworkFieldSerializerBase<2,1>::GetEntityReportDescString,
    CGameNetworkFieldSerializerBase<2,1>::GetSerializerName,
    CSimulationTimeSerializer::Serialize,
    CValidatingNetworkFieldSerializer<CSimulationTimeSerializer>::ValidatingUnserialize);
}


// CFuncRotatingSimulationTimeSerializer::Serialize  (line 4579, @0x0000000001eecd80, libserver.so)  // inlines: Serialize, Set<long long unsigned int>
// calls: CFloatToTickSerializerHelper::Serialize
NetworkFieldResult_t __fastcall CFuncRotatingSimulationTimeSerializer::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  CEntityInstance *m_pStructBase; // rsi

  m_pStructBase = info->m_pStructBase;
  if ( (BYTE5(m_pStructBase[8].m_hPrivateScope.m_hScope) & 4) == 0 )
    return CFloatToTickSerializerHelper::Serialize(info->m_pFieldData, m_pStructBase, pOut);
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_UINT64;
  pOut->m_nNumComponents = 1;
  pOut->m_iVal64 = 0;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CFuncRotatingSimulationTimeSerializer::Unserialize  (line 4597, @0x0000000001eecd00, libserver.so)  // inlines: Unserialize
// calls: CFloatToTickSerializerHelper::Unserialize
NetworkFieldResult_t __fastcall CFuncRotatingSimulationTimeSerializer::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  return CFloatToTickSerializerHelper::Unserialize(info->m_pFieldData, info->m_pStructBase, pIn);
}


// InitCFuncRotatingSimulationTimeSerializerFieldSerializer  (line 4603, @0x0000000001ecbb60, libserver.so)
// strings: "funcRotatingSimulationTimeSerializer"
// globals: CValidatingNetworkFieldSerializer<CFuncRotatingSimulationTimeSerializer>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*), CGameNetworkFieldSerializerBase<2,1>::GetSerializerName(void), CFuncRotatingSimulationTimeSerializer::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CGameNetworkFieldSerializerBase<2,1>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<2,1>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<2,1>::GetDataSize(NetworkFieldInfo_t const&), CFuncRotatingSimulationTimeSerializer::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCFuncRotatingSimulationTimeSerializerFieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "funcRotatingSimulationTimeSerializer",
    mode,
    2,
    1,
    CFuncRotatingSimulationTimeSerializer::Serialize,
    CFuncRotatingSimulationTimeSerializer::Unserialize,
    CGameNetworkFieldSerializerBase<2,1>::GetDataSize,
    CGameNetworkFieldSerializerBase<2,1>::ParseData,
    CGameNetworkFieldSerializerBase<2,1>::GetEntityReportDescString,
    CGameNetworkFieldSerializerBase<2,1>::GetSerializerName,
    CFuncRotatingSimulationTimeSerializer::Serialize,
    CValidatingNetworkFieldSerializer<CFuncRotatingSimulationTimeSerializer>::ValidatingUnserialize);
}


// SendProxyUsingClientSideAnimation_RecipientsFilter  (line 4607, @0x0000000001ed7910, libserver.so)  // inlines: ClearAll, ClearAllRecipients, memset
// calls: CBaseAnimating::IsUsingClientSideAnimation
void __fastcall SendProxyUsingClientSideAnimation_RecipientsFilter(
        void *pRootObjectBase,
        void *pStructBase,
        void *pCurrentField,
        CSendProxyRecipients *pRecipients,
        int objectid)
{
  const CBaseAnimating *v6; // rax

  v6 = (*(*pRootObjectBase + 344LL))(pRootObjectBase, pStructBase, pCurrentField, pRecipients, objectid);
  if ( !v6 || !CBaseAnimating::IsUsingClientSideAnimation(v6) )
    *pRecipients = 0;
}


// SendProxyNotUsingClientSideAnimation_RecipientsFilter  (line 4625, @0x0000000001ed7950, libserver.so)  // inlines: ClearAll, ClearAllRecipients, memset
// calls: CBaseAnimating::IsUsingClientSideAnimation
void __fastcall SendProxyNotUsingClientSideAnimation_RecipientsFilter(
        void *pRootObjectBase,
        void *pStructBase,
        void *pCurrentField,
        CSendProxyRecipients *pRecipients,
        int objectid)
{
  const CBaseAnimating *v6; // rax

  v6 = (*(*pRootObjectBase + 344LL))(pRootObjectBase, pStructBase, pCurrentField, pRecipients, objectid);
  if ( v6 == 0 || CBaseAnimating::IsUsingClientSideAnimation(v6) )
    *pRecipients = 0;
}


// CStepSimulationFuncRotatingAnglesSerializer::Serialize  (line 4646, @0x0000000001eeceb0, libserver.so)  // inlines: Set<QAngle>, anglemod, operator=
NetworkFieldResult_t __fastcall CStepSimulationFuncRotatingAnglesSerializer::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  float *m_pStructBase; // rax
  float *m_pFieldData; // rax
  float v5; // xmm3_4
  float v6; // xmm0_4
  float v7; // xmm2_4

  m_pStructBase = info->m_pStructBase;
  if ( (*(m_pStructBase + 405) & 4) != 0 )
  {
    v5 = m_pStructBase[309];
    v6 = 182.04445 * m_pStructBase[308];
    v7 = (m_pStructBase[310] * 182.04445) * 0.0054931641;
  }
  else
  {
    m_pFieldData = info->m_pFieldData;
    v5 = m_pFieldData[1];
    v6 = 182.04445 * *m_pFieldData;
    v7 = (m_pFieldData[2] * 182.04445) * 0.0054931641;
  }
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_FLOAT32;
  pOut->m_nNumComponents = 3;
  pOut->m_flVal32[1] = (v5 * 182.04445) * 0.0054931641;
  pOut->m_flVal32[2] = v7;
  pOut->m_flVal32[0] = v6 * 0.0054931641;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CStepSimulationFuncRotatingAnglesSerializer::Unserialize  (line 4668, @0x0000000001eea450, libserver.so)  // inlines: operator=
NetworkFieldResult_t __fastcall CStepSimulationFuncRotatingAnglesSerializer::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  _DWORD *m_pFieldData; // rax

  m_pFieldData = info->m_pFieldData;
  *m_pFieldData = pIn->m_iVal64;
  m_pFieldData[2] = LODWORD(pIn->m_flVal32[2]);
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// InitCStepSimulationFuncRotatingAnglesSerializerFieldSerializer  (line 4682, @0x0000000001ecbbf0, libserver.so)
// strings: "StepSimulationFuncRotatingAnglesSerializer"
// globals: CValidatingNetworkFieldSerializer<CStepSimulationFuncRotatingAnglesSerializer>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t con, CGameNetworkFieldSerializerBase<3,3>::GetSerializerName(void), CStepSimulationFuncRotatingAnglesSerializer::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CGameNetworkFieldSerializerBase<3,3>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<3,3>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<3,3>::GetDataSize(NetworkFieldInfo_t const&), CStepSimulationFuncRotatingAnglesSerializer::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCStepSimulationFuncRotatingAnglesSerializerFieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "StepSimulationFuncRotatingAnglesSerializer",
    mode,
    3,
    3,
    CStepSimulationFuncRotatingAnglesSerializer::Serialize,
    CStepSimulationFuncRotatingAnglesSerializer::Unserialize,
    CGameNetworkFieldSerializerBase<3,3>::GetDataSize,
    CGameNetworkFieldSerializerBase<3,3>::ParseData,
    CGameNetworkFieldSerializerBase<3,3>::GetEntityReportDescString,
    CGameNetworkFieldSerializerBase<3,3>::GetSerializerName,
    CStepSimulationFuncRotatingAnglesSerializer::Serialize,
    CValidatingNetworkFieldSerializer<CStepSimulationFuncRotatingAnglesSerializer>::ValidatingUnserialize);
}


// CCropFlagsToPlayerFlagBitsLength::Serialize  (line 4689, @0x0000000001eea480, libserver.so)  // inlines: Set<long long unsigned int>
NetworkFieldResult_t __fastcall CCropFlagsToPlayerFlagBitsLength::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  int v3; // eax

  v3 = *info->m_pFieldData;
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_UINT64;
  pOut->m_nNumComponents = 1;
  pOut->m_iVal64 = v3 & 0x3FF;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CCropFlagsToPlayerFlagBitsLength::Unserialize  (line 4700, @0x0000000001eea4b0, libserver.so)
NetworkFieldResult_t __fastcall CCropFlagsToPlayerFlagBitsLength::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  *info->m_pFieldData = pIn->m_iVal64;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// InitCCropFlagsToPlayerFlagBitsLengthFieldSerializer  (line 4710, @0x0000000001ecbc80, libserver.so)
// strings: "CropFlagsToPlayerFlagBitsLength"
// globals: CValidatingNetworkFieldSerializer<CCropFlagsToPlayerFlagBitsLength>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*), CGameNetworkFieldSerializerBase<2,1>::GetSerializerName(void), CCropFlagsToPlayerFlagBitsLength::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CGameNetworkFieldSerializerBase<2,1>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<2,1>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<2,1>::GetDataSize(NetworkFieldInfo_t const&), CCropFlagsToPlayerFlagBitsLength::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCCropFlagsToPlayerFlagBitsLengthFieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "CropFlagsToPlayerFlagBitsLength",
    mode,
    2,
    1,
    CCropFlagsToPlayerFlagBitsLength::Serialize,
    CCropFlagsToPlayerFlagBitsLength::Unserialize,
    CGameNetworkFieldSerializerBase<2,1>::GetDataSize,
    CGameNetworkFieldSerializerBase<2,1>::ParseData,
    CGameNetworkFieldSerializerBase<2,1>::GetEntityReportDescString,
    CGameNetworkFieldSerializerBase<2,1>::GetSerializerName,
    CCropFlagsToPlayerFlagBitsLength::Serialize,
    CValidatingNetworkFieldSerializer<CCropFlagsToPlayerFlagBitsLength>::ValidatingUnserialize);
}


// CClampHealth::Serialize  (line 4717, @0x0000000001eea4d0, libserver.so)  // inlines: Set<long long int>
NetworkFieldResult_t __fastcall CClampHealth::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  int64 v3; // rcx
  int64 v4; // rax

  v3 = *info->m_pFieldData;
  v4 = 0;
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_INT64;
  pOut->m_nNumComponents = 1;
  if ( v3 >= 0 )
    v4 = v3;
  pOut->m_iVal64 = v4;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CClampHealth::Unserialize  (line 4726, @0x0000000001eea500, libserver.so)
NetworkFieldResult_t __fastcall CClampHealth::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  *info->m_pFieldData = pIn->m_iVal64;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// InitCClampHealthFieldSerializer  (line 4736, @0x0000000001ecbd10, libserver.so)
// strings: "ClampHealth"
// globals: CValidatingNetworkFieldSerializer<CClampHealth>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*), CGameNetworkFieldSerializerBase<1,1>::GetSerializerName(void), CClampHealth::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CGameNetworkFieldSerializerBase<1,1>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<1,1>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<1,1>::GetDataSize(NetworkFieldInfo_t const&), CClampHealth::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCClampHealthFieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "ClampHealth",
    mode,
    1,
    1,
    CClampHealth::Serialize,
    CClampHealth::Unserialize,
    CGameNetworkFieldSerializerBase<1,1>::GetDataSize,
    CGameNetworkFieldSerializerBase<1,1>::ParseData,
    CGameNetworkFieldSerializerBase<1,1>::GetEntityReportDescString,
    CGameNetworkFieldSerializerBase<1,1>::GetSerializerName,
    CClampHealth::Serialize,
    CValidatingNetworkFieldSerializer<CClampHealth>::ValidatingUnserialize);
}


// CIntegerWithMinusOneSerializer::Serialize  (line 4743, @0x0000000001eea520, libserver.so)  // inlines: Set<long long unsigned int>
NetworkFieldResult_t __fastcall CIntegerWithMinusOneSerializer::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  int v3; // eax

  v3 = *info->m_pFieldData;
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_UINT64;
  pOut->m_nNumComponents = 1;
  pOut->m_iVal64 = v3 + 1;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CIntegerWithMinusOneSerializer::Unserialize  (line 4752, @0x0000000001eea550, libserver.so)
NetworkFieldResult_t __fastcall CIntegerWithMinusOneSerializer::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  *info->m_pFieldData = pIn->m_iVal64 - 1;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// InitCIntegerWithMinusOneSerializerFieldSerializer  (line 4762, @0x0000000001ecbda0, libserver.so)
// strings: "minusone"
// globals: CValidatingNetworkFieldSerializer<CIntegerWithMinusOneSerializer>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*), CGameNetworkFieldSerializerBase<2,1>::GetSerializerName(void), CIntegerWithMinusOneSerializer::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CGameNetworkFieldSerializerBase<2,1>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<2,1>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<2,1>::GetDataSize(NetworkFieldInfo_t const&), CIntegerWithMinusOneSerializer::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCIntegerWithMinusOneSerializerFieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "minusone",
    mode,
    2,
    1,
    CIntegerWithMinusOneSerializer::Serialize,
    CIntegerWithMinusOneSerializer::Unserialize,
    CGameNetworkFieldSerializerBase<2,1>::GetDataSize,
    CGameNetworkFieldSerializerBase<2,1>::ParseData,
    CGameNetworkFieldSerializerBase<2,1>::GetEntityReportDescString,
    CGameNetworkFieldSerializerBase<2,1>::GetSerializerName,
    CIntegerWithMinusOneSerializer::Serialize,
    CValidatingNetworkFieldSerializer<CIntegerWithMinusOneSerializer>::ValidatingUnserialize);
}


// CNormalizedAngle::Serialize  (line 4769, @0x0000000001eecca0, libserver.so)  // inlines: Set<float>
// calls: AngleNormalizePositive
NetworkFieldResult_t __fastcall CNormalizedAngle::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  float v3; // xmm1_4
  float v5; // xmm0_4

  v5 = AngleNormalizePositive(v3);
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_FLOAT32;
  pOut->m_nNumComponents = 1;
  pOut->m_flVal32[0] = v5;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CNormalizedAngle::Unserialize  (line 4777, @0x0000000001eea570, libserver.so)  // inlines: Get<float>
NetworkFieldResult_t __fastcall CNormalizedAngle::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  *info->m_pFieldData = pIn->m_flVal32[0];
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// InitCNormalizedAngleFieldSerializer  (line 4786, @0x0000000001ecbe30, libserver.so)
// strings: "angle_normalize_positive"
// globals: CValidatingNetworkFieldSerializer<CNormalizedAngle>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*), CGameNetworkFieldSerializerBase<3,1>::GetSerializerName(void), CNormalizedAngle::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CGameNetworkFieldSerializerBase<3,1>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<3,1>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<3,1>::GetDataSize(NetworkFieldInfo_t const&), CNormalizedAngle::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCNormalizedAngleFieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "angle_normalize_positive",
    mode,
    3,
    1,
    CNormalizedAngle::Serialize,
    CNormalizedAngle::Unserialize,
    CGameNetworkFieldSerializerBase<3,1>::GetDataSize,
    CGameNetworkFieldSerializerBase<3,1>::ParseData,
    CGameNetworkFieldSerializerBase<3,1>::GetEntityReportDescString,
    CGameNetworkFieldSerializerBase<3,1>::GetSerializerName,
    CNormalizedAngle::Serialize,
    CValidatingNetworkFieldSerializer<CNormalizedAngle>::ValidatingUnserialize);
}


// CBaseEntity::MarkInterpolationLatchFlagsDirty  (line 4791, @0x0000000001ed7990, libserver.so)
// callers: CBaseAnimatingController::PostDataUpdate, CAnimationLayer::OnOrderChanged, CAnimationLayer::OnAnimationOpChanged, CSkeletonInstance::PerformInvalidatePhysicsRecursive
void __fastcall CBaseEntity::MarkInterpolationLatchFlagsDirty(
        CBaseEntity *const this,
        EInterpolatedVarFlagBits eVarType)
{
  ;
}


// CPointEntity::YouForgotToImplementOrDeclareServerClass  (line 4880, @0x0000000001ecbec0, libserver.so)
int __fastcall CPointEntity::YouForgotToImplementOrDeclareServerClass(CPointEntity *const this)
{
  return 0;
}


// CPointEntity::GetServerClass  (line 4880, @0x0000000001ed14e0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPointEntity::GetServerClass(CPointEntity *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CPointEntity::Spawn  (line 4882, @0x0000000001ecc9e0, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, String
// calls: CEntityInstance::IsAuthoritative, CEntityKeyValues::HasValue, Warning, CEntityKeyValues::RemoveKeyForSpawn, CBaseEntity::Spawn
// callers: CInfoParticleTarget::Spawn, CInfoTarget::Spawn, CInfoGameEventProxy::Spawn, CProjectedDecal::Spawn, CDecal::Spawn, CAmbientGeneric::Spawn, CEnvTracer::Spawn, CEnvDOFController::Spawn, CEnvViewPunch::Spawn, CEnvEntityMaker::Spawn, CEnvInstructorHint::Spawn, CEnvMuzzleFlash::Spawn (49 total)
// strings: "Warning! Can't specify mins/maxs for point entities! (%s)\n"
void __fastcall CPointEntity::Spawn(CPointEntity *const this, const CEntityKeyValues *pKeyValues)
{
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  CEntityIdentity *v6; // rax
  const char *v7; // rsi

  if ( CEntityInstance::IsAuthoritative(this) )
  {
    if ( CEntityKeyValues::HasValue(pKeyValues, -1307688131) )
    {
      m_pEntity = this->m_pEntity;
      m_pAsString = "";
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      Warning("Warning! Can't specify mins/maxs for point entities! (%s)\n", m_pAsString);
      CEntityKeyValues::RemoveKeyForSpawn(pKeyValues, -1307688131);
    }
    if ( CEntityKeyValues::HasValue(pKeyValues, 361620063) )
    {
      v6 = this->m_pEntity;
      v7 = "";
      if ( v6->m_designerName.u.m_Id != 0 )
        v7 = v6->m_designerName.u.m_pAsString;
      Warning("Warning! Can't specify mins/maxs for point entities! (%s)\n", v7);
      CEntityKeyValues::RemoveKeyForSpawn(pKeyValues, 361620063);
    }
  }
  CBaseEntity::Spawn(this, pKeyValues);
}


// CPointEntity::ShouldTransmit  (line 4909, @0x0000000001ed62c0, libserver.so)  // inlines: FirstMoveChild, SetTransmitState
// calls: CGameSceneNode::GetOwnerEntity, CBaseEntity::GetModel, CNetworkTransmitComponent::SetTransmitState
// callers: CSceneEntity::ShouldTransmit
int __fastcall CPointEntity::ShouldTransmit(CPointEntity *const this, const CGameCheckTransmitInfo *pInfo)
{
  CGameSceneNode *m_pChild; // rdi
  _QWORD v5[4]; // [rsp+0h] [rbp-20h] BYREF

  if ( ((this->m_fEffects.m_Value & 0x20) == 0
     || (m_pChild = this->m_pGameSceneNode->m_pChild) != 0 && CGameSceneNode::GetOwnerEntity(m_pChild) != 0)
    && (SLOBYTE(this->m_iEFlags) < 0 || (CBaseEntity::GetModel(v5, this), v5[0] != 0)) )
  {
    return 0;
  }
  else
  {
    return CNetworkTransmitComponent::SetTransmitState(&this->m_NetworkTransmitComponent, 8);
  }
}


// CPointEntity::GetDataDescMap  (line 4929, @0x0000000001ecbed0, libserver.so)
// globals: CPointEntity::m_DataMap
datamap_t *__fastcall CPointEntity::GetDataDescMap(CPointEntity *const this)
{
  return &CPointEntity::m_DataMap;
}


// CPointEntity::AddDatadescMetadataKeys  (line 4929, @0x0000000001ed79a0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointEntity::GetEntityClass(void)
void __fastcall CPointEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointEntity::GetEntityClass);
}


// CPointEntity::GetBaseMap  (line 4929, @0x0000000001ed79c0, libserver.so)
datamap_t *__cdecl CPointEntity::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CPointEntity>  (line 4929, @0x0000000001ed79d0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "CPointEntity"
// globals: `guard variable for'DataMapInit<CPointEntity>(CPointEntity *)::nameHolder, CPointEntity::GetEntityClass(void), CPointEntity::m_DataMap, DataMapInit<CPointEntity>(CPointEntity *)::dataDesc, DataMapInit<CPointEntity>(CPointEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointEntity>(CPointEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPointEntity>(CPointEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointEntity>(CPointEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CPointEntity>(CPointEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointEntity>(CPointEntity *)::nameHolder.m_pszBase = "CPointEntity";
    DataMapInit<CPointEntity>(CPointEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointEntity>(CPointEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointEntity>(CPointEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointEntity>(CPointEntity *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointEntity>(CPointEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointEntity>(CPointEntity *)::nameHolder,
      &_dso_handle);
  }
  CPointEntity::m_DataMap.dataNumFields = 1;
  CPointEntity::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CPointEntity::m_DataMap.dataDesc = DataMapInit<CPointEntity>(CPointEntity *)::dataDesc;
  AddDatadescMetadataKeys(&CPointEntity::m_DataMap, CPointEntity::GetEntityClass);
  return &CPointEntity::m_DataMap;
}


// GetAllChildren_r  (line 4933, @0x0000000001ee7c50, libserver.so)  // inlines: AddToTail, CopyConstruct<CBaseEntity*>, Element, FirstMoveChild, GrowMemory, NextMovePeer, operator[]
// calls: CGameSceneNode::GetOwnerEntity, CUtlMemory<CBaseEntity*, int>::Grow
// callers: CBaseEntity::GetAllChildren
void __fastcall GetAllChildren_r(
        CBaseEntity *pEntity,
        CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > *const list)
{
  CUtlVectorBase<CBaseEntity*,CUtlMemory<CBaseEntity*,int> >::CAllocator *p_m_Memory; // r14
  CBaseEntity *i; // r12
  __int64 m_Size; // r13
  int v6; // eax
  CBaseEntity **v7; // rax
  const CGameSceneNode *m_pChild; // rdi
  CBaseEntity *OwnerEntity; // rax
  const CGameSceneNode *m_pNextSibling; // rdi

  p_m_Memory = &list->m_Memory;
  for ( i = pEntity; i != 0; i = CGameSceneNode::GetOwnerEntity(m_pNextSibling) )
  {
    m_Size = list->m_Size;
    v6 = list->m_Size;
    if ( m_Size == list->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CBaseEntity *,int>::Grow(p_m_Memory, 1);
      v6 = list->m_Size;
    }
    list->m_Size = v6 + 1;
    v7 = &list->m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
      *v7 = i;
    m_pChild = i->m_pGameSceneNode->m_pChild;
    OwnerEntity = 0;
    if ( m_pChild != 0 )
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pChild);
    GetAllChildren_r(OwnerEntity, list);
    m_pNextSibling = i->m_pGameSceneNode->m_pNextSibling;
    if ( m_pNextSibling == 0 )
      break;
  }
}


// CBaseEntity::GetAllChildren  (line 4942, @0x0000000001ee7d00, libserver.so)  // inlines: FirstMoveChild
// calls: CGameSceneNode::GetOwnerEntity, GetAllChildren_r
// callers: CBaseEntity::GetAllInHierarchy, CBreakableProp::FindEnableMotionFixup, CBreakableProp::HandleFirstCollisionInteractions, CBaseEntity::UpdateOnRemove, CBaseEntity::Script_GetChildren, DetachAttachedRagdollsForEntity, CPhysicsProp::OnPhysGunDrop
int __fastcall CBaseEntity::GetAllChildren(
        CBaseEntity *const this,
        CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > *const list)
{
  CGameSceneNode *m_pChild; // rdi
  CBaseEntity *OwnerEntity; // rax

  m_pChild = this->m_pGameSceneNode->m_pChild;
  OwnerEntity = 0;
  if ( m_pChild != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pChild);
  GetAllChildren_r(OwnerEntity, list);
  return list->m_Size;
}


// CBaseEntity::GetAllInHierarchy  (line 4948, @0x0000000001ee7d40, libserver.so)  // inlines: AddToTail, CopyConstruct<CBaseEntity*>, Element, GrowMemory, operator[]
// calls: CBaseEntity::GetAllChildren, CUtlMemory<CBaseEntity*, int>::Grow
// callers: CBaseEntity::VPhysicsUpdatePusher, CFuncTrackTrain::Blocked
int __fastcall CBaseEntity::GetAllInHierarchy(
        CBaseEntity *const this,
        CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > *const list)
{
  __int64 m_Size; // r12
  int v5; // eax
  CBaseEntity **v6; // rax

  m_Size = list->m_Size;
  v5 = list->m_Size;
  if ( m_Size == list->m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CBaseEntity *,int>::Grow(&list->m_Memory, 1);
    v5 = list->m_Size;
  }
  list->m_Size = v5 + 1;
  v6 = &list->m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = this;
  return CBaseEntity::GetAllChildren(this, list) + 1;
}


// CBaseEntity::UpdateParameters  (line 4954, @0x0000000001ecc670, libserver.so)  // inlines: operator char const*
// calls: CUtlString::Get, V_stricmp_fast, CBaseEntity::GetHealth
// strings: "running", "walking"
void __fastcall CBaseEntity::UpdateParameters(const CBaseEntity *const this, IAnimParameterListInstance *pParams)
{
  int v3; // r14d
  unsigned int i; // ebx
  __int64 v5; // r15
  const CUtlString *v6; // rax
  const char *v7; // r12
  void (__fastcall *v8)(__int64, double); // r12
  char v9; // al
  __int64 v10; // xmm0_8
  void (__fastcall *v11)(__int64, double); // r12
  double v12; // xmm0_8

  if ( pParams != 0 )
  {
    v3 = (**pParams)(pParams);
    if ( v3 > 0 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (*(*pParams + 8LL))(pParams, i);
        v6 = (**v5)(v5);
        v7 = CUtlString::Get(v6);
        if ( V_stricmp_fast(v7, "running") != 0 && V_stricmp_fast(v7, "walking") != 0 )
        {
          if ( V_stricmp_fast(v7, "dead") != 0 )
          {
            if ( V_stricmp_fast(v7, "health") == 0 )
            {
              v11 = *(*v5 + 16LL);
              *&v12 = CBaseEntity::GetHealth(this);
              v11(v5, v12);
            }
          }
          else
          {
            v8 = *(*v5 + 16LL);
            v9 = (*(this->_vptr_IHandleEntity + 139))(this);
            v10 = 0;
            if ( v9 == 0 )
              v10 = 1065353216;
            v8(v5, *&v10);
          }
        }
        else
        {
          (*(*v5 + 16LL))(v5, 0.0);
        }
      }
    }
  }
}


// CBaseEntity::NetworkStateChangedLog  (line 5000, @0x0000000001ecced0, libserver.so)  // inlines: CEntityHandle, GetDebugName, GetEHandle, GetEntryIndex, GetSerialNumber, Init
// calls: LoggingSystem_IsChannelEnabled, CEntityIdentity::GetDebugName, LoggingSystem_Log
// strings: "%d:%s::%s %s"
void __fastcall CBaseEntity::NetworkStateChangedLog(
        const CBaseEntity *const this,
        const char *pVarName,
        const char *pMsg)
{
  const char *DebugName; // rax
  CEntityIdentity *m_pEntity; // rdi
  int v8; // ecx

  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    m_pEntity = this->m_pEntity;
    if ( m_pEntity == 0 )
      goto LABEL_8;
    LOWORD(v8) = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      LOWORD(v8) = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    if ( ((((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v8 & 0x7FFF) == 0xFFFFFFFF )
LABEL_8:
      v8 = 0x7FFF;
    else
      v8 = v8;
    LoggingSystem_Log(LOG_SERVER, 1, "%d:%s::%s %s", v8, DebugName, pVarName, pMsg);
  }
}


// CLogicalEntity::Spawn  (line 5010, @0x0000000001eccb10, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, String
// calls: CEntityKeyValues::HasValue, Warning, CEntityKeyValues::RemoveKeyForSpawn, CBaseEntity::Spawn
// callers: CMultiLightProxy::Spawn, CEnvFade::Spawn, CMathRemap::Spawn, CMathColorBlend::Spawn, CLogicCase::Spawn, CLogicBranchList::Spawn, CPathKeyFrame::Spawn, CEnvGlobal::Spawn, CLogicLineToEntity::Spawn, CTimerEntity::Spawn, CMultiSource::Spawn, CMathCounter::Spawn (18 total)
// strings: "Warning! Can't specify mins/maxs for point entities! (%s)\n"
void __fastcall CLogicalEntity::Spawn(CLogicalEntity *const this, const CEntityKeyValues *pKeyValues)
{
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  CEntityIdentity *v6; // rax
  const char *v7; // rsi

  if ( CEntityKeyValues::HasValue(pKeyValues, -1307688131) )
  {
    m_pEntity = this->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    Warning("Warning! Can't specify mins/maxs for point entities! (%s)\n", m_pAsString);
    CEntityKeyValues::RemoveKeyForSpawn(pKeyValues, -1307688131);
  }
  if ( CEntityKeyValues::HasValue(pKeyValues, 361620063) )
  {
    v6 = this->m_pEntity;
    v7 = "";
    if ( v6->m_designerName.u.m_Id != 0 )
      v7 = v6->m_designerName.u.m_pAsString;
    Warning("Warning! Can't specify mins/maxs for point entities! (%s)\n", v7);
    CEntityKeyValues::RemoveKeyForSpawn(pKeyValues, 361620063);
  }
  CBaseEntity::Spawn(this, pKeyValues);
}


// ent_call  (line 5030, @0x0000000001ee1180, libserver.so)  // inlines: Arg, CVariantBase, Call<HSCRIPT__*>, EntityToHScript, Free, Get, GetPublicScriptScope, ToHScript, operator=, operator[], ~CVariantBase
// calls: UTIL_GetCommandClient, GetNextCommandEntity, CEntityInstance::CallScriptFunction, CEntityInstance::CreatePublicScriptScope, Warning, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "Can't ent_call w/o arguments!\n"
void __fastcall ent_call(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v3; // r15
  CBaseEntity *v4; // rbx
  CBaseEntity *NextCommandEntity; // rax
  bool v6; // cc
  const char *v7; // rdx
  const char *v8; // rsi
  __int64 v9; // r13
  HSCRIPT m_hScope; // rax
  CBasePlayer *pPlayer; // [rsp+18h] [rbp-58h]
  ScriptVariant_t rval; // [rsp+20h] [rbp-50h] BYREF
  HSCRIPT v13; // [rsp+30h] [rbp-40h] BYREF
  __int16 v14; // [rsp+38h] [rbp-38h]
  __int16 v15; // [rsp+3Ah] [rbp-36h]

  if ( args->m_nArgc <= 0 )
  {
    Warning("Can't ent_call w/o arguments!\n");
  }
  else
  {
    v3 = "";
    if ( args->m_nArgc > 2 )
      v3 = args->m_ppArgv[2];
    v4 = 0;
    pPlayer = UTIL_GetCommandClient(ctx);
    while ( 1 )
    {
      NextCommandEntity = GetNextCommandEntity(pPlayer, v3, v4);
      v4 = NextCommandEntity;
      if ( NextCommandEntity == 0 )
        break;
      v6 = args->m_nArgc <= 1;
      rval.m_type = 0;
      rval.m_flags = 0;
      v7 = "";
      rval.m_uint64 = 0;
      if ( !v6 )
        v7 = args->m_ppArgv[1];
      if ( !CEntityInstance::CallScriptFunction(
              NextCommandEntity,
              CallScriptFunctionBehavior_t::CALL_SCRIPT_FUNCTION_PRIVATE_AND_GLOBAL,
              v7,
              &rval,
              0) )
      {
        v8 = "";
        if ( args->m_nArgc > 1 )
          v8 = args->m_ppArgv[1];
        v9 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, v8, 0, 0);
        if ( v9 != 0 )
        {
          m_hScope = v4->m_pEntity->m_hPublicScope.m_hScope;
          if ( m_hScope == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(v4, 0);
            m_hScope = v4->m_pEntity->m_hPublicScope.m_hScope;
          }
          v13 = m_hScope;
          v15 = 0;
          v14 = 31;
          (*(*g_pScriptVM + 160LL))(g_pScriptVM, v9, &v13, 1, &rval, 0, 1);
          if ( (v15 & 1) != 0 )
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v13);
        }
      }
      if ( (rval.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, rval.m_uint64);
    }
  }
}


// ent_script_dump  (line 5077, @0x0000000001eccde0, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, CEntityInstance::DumpScriptScopes, GetNextCommandEntity
void __fastcall ent_script_dump(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // r12
  CBasePlayer *CommandClient; // r13
  CBaseEntity *v5; // rbx
  CBaseEntity *NextCommandEntity; // rax

  v2 = "";
  CommandClient = UTIL_GetCommandClient(ctx);
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  v5 = 0;
  while ( 1 )
  {
    NextCommandEntity = GetNextCommandEntity(CommandClient, v2, v5);
    v5 = NextCommandEntity;
    if ( NextCommandEntity == 0 )
      break;
    CEntityInstance::DumpScriptScopes(NextCommandEntity);
  }
}


// ent_setname  (line 5091, @0x0000000001ecf7f0, libserver.so)  // inlines: Arg, CUtlSymbolLarge, GetClassNameAsCStr, GetClassname, SetEntityName, String, ToBasePlayer, operator[]
// calls: UTIL_GetCommandClient, GetNextCommandEntity, CEntityInstance::IsAuthoritative, Msg, AllocPooledString, CEntityIdentity::SetEntityName, ClientPrint
// strings: "Set the name of %s to %s\n", "Usage:\n   ent_setname <new name> <entity name>\n"
void __fastcall ent_setname(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v4; // rbx
  const char *v5; // rsi
  CBaseEntity *NextCommandEntity; // rax
  CBaseEntity *v7; // rbx
  const char *v8; // rdx
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  const char *v11; // rsi
  CEntityIdentity *v12; // rdi
  UtlSymLargeId_t v13; // [rsp+10h] [rbp-30h]
  string_t name; // [rsp+20h] [rbp-20h] BYREF

  CommandClient = UTIL_GetCommandClient(ctx);
  v4 = CommandClient;
  if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
  {
    if ( args->m_nArgc <= 0 )
    {
      ClientPrint(v4, 2, "Usage:\n   ent_setname <new name> <entity name>\n", 0, 0, 0, 0);
    }
    else
    {
      v5 = "";
      if ( (args->m_nArgc - 1) > 1 )
        v5 = args->m_ppArgv[2];
      NextCommandEntity = GetNextCommandEntity(v4, v5, 0);
      v7 = NextCommandEntity;
      if ( NextCommandEntity != 0 && CEntityInstance::IsAuthoritative(NextCommandEntity) )
      {
        v8 = "";
        if ( args->m_nArgc > 1 )
          v8 = args->m_ppArgv[1];
        m_pEntity = v7->m_pEntity;
        m_pAsString = "";
        if ( m_pEntity->m_designerName.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
        Msg("Set the name of %s to %s\n", m_pAsString, v8);
        v11 = "";
        if ( args->m_nArgc > 1 )
          v11 = args->m_ppArgv[1];
        AllocPooledString(v11);
        v12 = v7->m_pEntity;
        name.u.m_Id = v13;
        CEntityIdentity::SetEntityName(v12, &name);
      }
    }
  }
}


// ent_find  (line 5117, @0x0000000001ecccb0, libserver.so)  // inlines: Arg, CUtlSymbolLarge, GetClassNameAsCStr, GetClassname, GetEntityName, String, entindex, operator[]
// calls: Msg, CGameEntitySystem::NextEnt, V_stristr_fast(char const*,char const*), CEntityInstance::GetEntityIndex
// strings: "Searching for entities with class/target name containing substring: '%s'\n", "   '%s' : '%s' (entindex %d) \n", "Found %d matches.\n", "Format: ent_find <substring>\n"
void __fastcall ent_find(const CCommandContext *const ctx, const CCommand *const args)
{
  int v2; // r14d
  CBaseEntity *v3; // rbx
  const char *v4; // r15
  CBaseEntity *Ent; // rax
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdi
  const char *v8; // rax
  const char *v9; // r12
  CEntityIndex v10; // eax
  CEntityIdentity *v11; // rdi
  const char *v12; // rsi
  const char *v13; // rdx

  if ( args->m_nArgc <= 1 )
  {
    Msg("Format: ent_find <substring>\n");
  }
  else
  {
    v2 = 0;
    v3 = 0;
    v4 = args->m_ppArgv[1];
    Msg("Searching for entities with class/target name containing substring: '%s'\n", v4);
    while ( 1 )
    {
      Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, v3);
      v3 = Ent;
      if ( Ent == 0 )
        break;
      m_pEntity = Ent->m_pEntity;
      m_pAsString = "";
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      v8 = m_pEntity->m_name.u.m_pAsString;
      v9 = "";
      if ( v8 != 0 )
        v9 = v8;
      if ( m_pAsString != 0 && *m_pAsString != 0 && V_stristr_fast(m_pAsString, v4) != 0
        || v9 != 0 && *v9 != 0 && V_stristr_fast(v9, v4) != 0 )
      {
        ++v2;
        v10.m_Data = CEntityInstance::GetEntityIndex(v3).m_Data;
        v11 = v3->m_pEntity;
        v12 = "";
        v13 = v11->m_name.u.m_pAsString;
        if ( v13 == 0 )
          v13 = "";
        if ( v11->m_designerName.u.m_Id != 0 )
          v12 = v11->m_designerName.u.m_pAsString;
        Msg("   '%s' : '%s' (entindex %d) \n", v12, v13, v10.m_Data);
      }
    }
    Msg("Found %d matches.\n", v2);
  }
}


// ent_find_index  (line 5164, @0x0000000001ecf640, libserver.so)  // inlines: CUtlSymbolLarge, GetClassNameAsCStr, GetClassname, GetEntityName, GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, String, atoi
// calls: strtol, Msg
// strings: "Found no entity at %d.\n", "   '%s' : '%s' (entindex %d) \n", "Format: ent_find_index <index>\n"
void __fastcall ent_find_index(const CCommandContext *const ctx, const CCommand *const args)
{
  int v2; // eax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rdx
  CEntityIdentity *m_pEntity; // rcx
  const char *v7; // rsi
  const char *m_pAsString; // rdx

  if ( args->m_nArgc <= 1 )
  {
    Msg("Format: ent_find_index <index>\n");
  }
  else
  {
    v2 = strtol(args->m_ppArgv[1], 0, 10);
    if ( v2 <= 0x7FFE
      && (v2 >> 9) <= 0x3F
      && (v3 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9]) != 0
      && (v4 = &v3[v2 & 0x1FF]) != 0
      && v2 == (v4->m_EHandle.m_Index & 0x7FFF)
      && (m_pInstance = v4->m_pInstance) != 0 )
    {
      m_pEntity = m_pInstance->m_pEntity;
      v7 = "";
      m_pAsString = m_pEntity->m_name.u.m_pAsString;
      if ( m_pAsString == 0 )
        m_pAsString = "";
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        v7 = m_pEntity->m_designerName.u.m_pAsString;
      Msg("   '%s' : '%s' (entindex %d) \n", v7, m_pAsString, v2);
    }
    else
    {
      Msg("Found no entity at %d.\n", v2);
    }
  }
}


